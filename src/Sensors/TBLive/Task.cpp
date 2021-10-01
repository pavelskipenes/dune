//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Alberto Dallolio (based on TBR700RT - Nikolai Låuvas)            *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <algorithm>
#include <cstddef>
#include <ctime>
#include <string>
#include <sstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Reader.hpp"

namespace Sensors
{
  //! Device driver for TBLive
  namespace TBLive
  {
    using DUNE_NAMESPACES;

    //! Maximum number of initialization commands.
    static const unsigned c_max_init_cmds = 14;
    //! Timeout for waitReply() function.
    static const float c_wait_reply_tout = 4.0;
    //! Power on delay.
    static const double c_pwr_on_delay = 5.0;
    //! Number of fields in fish tag message
    static const unsigned c_tag_fields = 9;
    //! Number of fields in TBLive sensor reading
    static const unsigned c_tbr_sensor_fields = 8;
       //! Message used to sync Thelma hydrophones
    static const std::string syncString = "(+)";

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Order of sentences.
      std::vector<std::string> stn_order;
      //! Initialization commands.
      std::string init_cmds[c_max_init_cmds];
      //! Initialization replies.
      std::string init_rpls[c_max_init_cmds];
      //! Power channels.
      std::vector<std::string> pwr_channels;
      //! Write full unix timestamp every timestamp_send_divider times task is run.
      unsigned int timestamp_send_divider;
      //! Sync Period;
      double sync_period;
      //! Triggers sensor on and off.
      bool activate;
      //! Science Sensors Timeout.
      double m_sci_timeout;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! GPIO state handle
      Hardware::GPIO* m_gpio;
      //! Indicates sensor state.
      bool m_active;
      //! Serial port handle.
      IO::Handle* m_handle; //SerialPort*
      //! Task arguments.
      Arguments m_args;
      //! Last initialization line read.
      std::string m_init_line;
      //! TBRReader thread.
      TBRReader* m_TBRReader;
      //! How often the full unix timestamp is sent, in executions % counter
      unsigned int timestamp_send_counter;
      //! Timer.
      Time::Counter<float> m_sync_timer;
      //! Current Lat and Lon of vehicle.
      fp64_t m_current_lat, m_current_lon;
      //! Science sensors commands to L2.
      IMC::ScienceSensorsReply m_science;
      //! Sampling duration timer.
      Counter<double> m_duration;
      //! Science Sensors Timer.
      Counter<double> m_sci_timer;
      //! Intervals between samplings.
      Counter<double> m_intervals;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_gpio(NULL),
        m_active(false),
        m_handle(NULL),
        m_TBRReader(NULL),
        m_current_lat(0.0),
        m_current_lon(0.0)
      {
        // Define configuration parameters.
        param("Activate Sensor", m_args.activate)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("false")
        .description("Controls sensor activation/deactivation");

        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("115200")
        .description("Serial port baud rate");

        param("Sync Period", m_args.sync_period)
        .units(Units::Second)
        .defaultValue("10.0")
        .minimumValue("0.0")
        .description("Period between sync messages");

        param("Write full timestamp divider", m_args.timestamp_send_divider)
        .defaultValue("10")
        .description("Write full unix timestamp every timestamp_send_divider times task is run.");

        param("Power Channel - Names", m_args.pwr_channels)
        .defaultValue("")
        .description("Device's power channels");

        param("Sentence Order", m_args.stn_order)
        .defaultValue("")
        .description("Sentence order");

        param("Science Sensors Timeout", m_args.m_sci_timeout)
        .defaultValue("60")
        .units(Units::Second)
        .description("IMC::ScienceSensors is sent at timer expiration");

        for (unsigned i = 0; i < c_max_init_cmds; ++i)
        {
          std::string cmd_label = String::str("Initialization String %u - Command", i);
          param(cmd_label, m_args.init_cmds[i])
          .defaultValue("");

          std::string rpl_label = String::str("Initialization String %u - Reply", i);
          param(rpl_label, m_args.init_rpls[i])
          .defaultValue("");
        }

        bind<IMC::DevDataText>(this);
        bind<IMC::IoEvent>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::ScienceSensors>(this);

        //setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_ACTIVATING);
      }

      void
      onUpdateParameters(void)
      {
        if(paramChanged(m_args.sync_period))
          m_sync_timer.setTop(m_args.sync_period);

        // If sensor is on and Neptus wants to turn it off.
        if(m_active && paramChanged(m_args.activate) && getEntityState() == IMC::EntityState::ESTA_NORMAL)
        {
          spew("On update parameters: sensor OFF");
          m_gpio->setValue(1);
          // Sensor is not active.
          m_active = false;
          m_intervals.setTop(0.0);
          m_duration.setTop(0.0);

          m_science.tbl = 1;
          m_science.tbl_dur = 0.0;
          m_science.tbl_fr = 0.0;
        }

        // If sensor is off and Neptus wants to turn it on.
        if(!m_active && paramChanged(m_args.activate) && getEntityState() == IMC::EntityState::ESTA_NORMAL)
        {
          // Turn sensor on.
          m_gpio->setValue(0);
          // Wait 2 seconds and initialize.
          Delay::wait(2.0);
          if(initializeSensor())
          {
            // Sensor is active.
            m_active = true;
            spew("On update parameters: TBLive ON");

            m_science.tbl = 0;
            m_science.tbl_dur = 0.0;
            m_science.tbl_fr = 0.0;
          }
          else
          {
            trace("Could not initialize TBLive sensor");
          }
        }

      }

      void
      onResourceAcquisition(void)
      {
        try
        {
          //m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          //m_uart->setCanonicalInput(true);
          //m_uart->flush();

          // Would be best to use SerialPort object. 
          if (!openSocket())
            m_handle = new SerialPort(m_args.uart_dev, m_args.uart_baud);

            m_TBRReader = new TBRReader(this, m_handle);
            m_TBRReader->start();

            m_gpio = new Hardware::GPIO(246);
            m_gpio->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
          if(m_active)
          {
            spew("On resource acquisition: sensor ON");
            // turn on
            m_gpio->setValue(0);
            m_science.tbl = 0;
            m_science.tbl_dur = 0.0;
            m_science.tbl_fr = 0.0;
          }
          else
          {
            spew("On resource acquisition: sensor OFF");
            //turn off.
            m_gpio->setValue(1);
            m_science.tbl = 1;
            m_science.tbl_dur = 0.0;
            m_science.tbl_fr = 0.0;
          }
          
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        m_sci_timer.setTop(m_args.m_sci_timeout);
      }

      bool
      openSocket(void)
      {
        char addr[128] = {0};
        unsigned port = 0;

        if (std::sscanf(m_args.uart_dev.c_str(), "tcp://%[^:]:%u", addr, &port) != 2)
          return false;

        TCPSocket* sock = new TCPSocket;
        sock->connect(addr, port);
        m_handle = sock;
        return true;
      }

      void
      onResourceRelease(void)
      {
        if (m_TBRReader != NULL)
        {
          m_TBRReader->stopAndJoin();
          delete m_TBRReader;
          m_TBRReader = NULL;
        }

        m_active = false;
        Memory::clear(m_gpio);
        Memory::clear(m_handle);
      }

      bool
      initializeSensor(void)
      {
        for (unsigned i = 0; i < c_max_init_cmds; ++i)
        {
          if (m_args.init_cmds[i].empty())
            continue;

          std::string cmd = String::unescape(m_args.init_cmds[i]);
          m_handle->writeString(cmd.c_str());
          spew("String to TBLive: %s",cmd.c_str());

          if (!m_args.init_rpls[i].empty())
          {
            std::string rpl = String::unescape(m_args.init_rpls[i]);
            if (!waitInitReply(rpl))
            {
              err("%s: %s", DTR("no reply to command"), m_args.init_cmds[i].c_str());
              throw std::runtime_error(DTR("failed to setup device"));
              return false;
            }
          }
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        //! Set timer for periodic check of surroundings.
        debug("Waiting to start timer to dividable by 10.");
        while(std::time(0) % 10 != 0);
        m_sync_timer.setTop(m_args.sync_period);
        sendTbrTimestampSync();
        debug("Finished waiting to start timer to dividable by 10.");
        
        return true;
      }

      void
      consume(const IMC::DevDataText* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        spew("%s", sanitize(msg->value).c_str());

        if (getEntityState() == IMC::EntityState::ESTA_BOOT)
          m_init_line = msg->value;
        else
          processSentence(msg->value);
      }

      void
      consume(const IMC::IoEvent* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        if (msg->type == IMC::IoEvent::IOV_TYPE_INPUT_ERROR)
          throw RestartNeeded(msg->error, 5);
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
        m_current_lat=msg->lat;
        m_current_lon=msg->lon;
        //spew("Received position: %f %f \n", m_current_lat, m_current_lon);
      }

      //! Wait reply to initialization command.
      //! @param[in] stn string to compare.
      //! @return true on successful match, false otherwise.
      bool
      waitInitReply(const std::string& stn)
      {
        Counter<float> counter(c_wait_reply_tout);
        while (!stopping() && !counter.overflow())
        {
          waitForMessages(counter.getRemaining());
          if (m_init_line == stn)
          {
            m_init_line.clear();
            return true;
          }
        }

        return false;
      }

      int calcLuhnVerifDigit(const char *number)
      {
          int i, sum, ch, num, twoup, len;

          len = std::strlen(number);
          sum = 0;
          twoup = 1;
          for (i = len - 1; i >= 0; --i) {
              ch = number[i];
              num = (ch >= '0' && ch <= '9') ? ch - '0' : 0;
              if (twoup) {
                  num += num;
                  if (num > 9) num = (num % 10) + 1;
              }
              sum += num;
              twoup = ++twoup & 1;
          }
          sum = 10 - (sum % 10);
          if (sum == 10) sum = 0;
          return sum;
      }

      void sendTbrTimestampSync() {
        // Get timestamp from system clock
        std::stringstream ss;
        ss << std::time(0);
        std::string UTCUnixTimestamp = ss.str();

        // Remove last digit
        UTCUnixTimestamp = UTCUnixTimestamp.substr(0,UTCUnixTimestamp.length()-1);

        // Add Luhn verification number
        UTCUnixTimestamp += std::to_string(calcLuhnVerifDigit(UTCUnixTimestamp.c_str()));

        // Add preamble and send
        slowTbrSend(syncString + UTCUnixTimestamp);
      }

      void sendTbrSync() {
        slowTbrSend(syncString);
      }

      void slowTbrSend(std::string cmd) {
        // Send to uart slowly, because ThelmaHydrophone processes max 1 char per millisecond
        char a[1] = {'0'};
        for(char& c : cmd) {
            a[0] = c;
            m_handle->write(a, 1);
            Delay::waitMsec(1);
        }
        spew(DTR("Sent: \"%s\" at \"%ld\""), cmd.c_str(), std::time(0)); 
      }

      //! Read int from input string.
      //! @param[in] str input string.
      //! @param[out] dst number.
      //! @return true if successful, false otherwise.
      bool readIntFromString(const std::string& str, int& dst) {
        try {
          dst = std::stoi(str);
          return true;
        }
        catch (const std::invalid_argument& ia) {
          err(DTR("Invalid argument: %s"), ia.what());
          return false;
        }
        return true;
      }

      //! Process sentence.
      //! @param[in] line line.
      void
      processSentence(const std::string& line)
      {
        spew(DTR("Process"));
        if (line.find("ack01") != std::string::npos) {
          spew(DTR("Sensor clock diciplined"));
        } if(line.find("ack02") != std::string::npos) {
          spew(DTR("Sensor timestamp set"));
        } if (line.find("$") != std::string::npos) {

          // Discard leading noise.
          size_t sidx = 0;
          for (sidx = 0; sidx < line.size(); ++sidx)
          {
            if (line[sidx] == '$')
              break;
          }

          // Split sentence
          std::vector<std::string> parts;
          try {
            spew(DTR("try"));
            String::split(line.substr(sidx + 1, line.size()), ",", parts);
          } catch(const std::exception& ex) {
            err(DTR("Invalid argument: %s"), ex.what());
            return;
          }

          interpretSentence(parts);
        }
      }

      //! Interpret given sentence.
      //! @param[in] parts vector of strings from sentence.
      void
      interpretSentence(std::vector<std::string>& parts)
      {
        spew(DTR("Interpret"));
        /*if (parts[0] == m_args.stn_order.front())
        {
          // Test if all sentences received, TODO, can probably be removed
        }*/
        
        if(parts.size() >= 3) {
          if(parts[2]  == "TBR Sensor") {
            interpretSensorReading(parts);
          } else {
            interpretTagDetection(parts);
          }
        }
      }
      //! Interpret SensorReading sentence.
      //! @param[in] parts vector of strings from sentence.
      void
      interpretSensorReading(const std::vector<std::string>& parts) {
        spew(DTR("Interpret SensorReading"));
        if (parts.size() < c_tbr_sensor_fields)
        {
          war(DTR("invalid SensorReading sentence"));
          return;
        }

        int serial_no = 0;
        int unix_timestamp = 0;
        int temperature = 0;
        int avg_noise_level = 0;
        int peak_noise_level = 0;
        int recv_listen_freq = 0;
        int recv_mem_addr = 0;
        float temp_C = 0.0;

        if (readIntFromString(parts[0], serial_no))
        {
          // Receiver serial number
          spew(DTR("Serial number: %u"), serial_no);
        }
        if (readIntFromString(parts[1], unix_timestamp))
        {
          //UTC UNIX timestamp
          spew(DTR("UTC UNIX timestamp: %u"), unix_timestamp);
        }
        if (readIntFromString(parts[3], temperature))
        {
          // Temperature
          temp_C = float(temperature-50)/10.0;
          spew(DTR("Temperature(C): %f"), temp_C);
          IMC::Temperature temp_msg;
          temp_msg.setSourceEntity(255);
          temp_msg.value = fp32_t(temp_C);
          dispatch(temp_msg);
        }
        if (readIntFromString(parts[4], avg_noise_level))
        {
          // Average Noise Level
          spew(DTR("Average Noise Level: %u"), avg_noise_level);
        }
        if (readIntFromString(parts[5], peak_noise_level))
        {
          // Peak noise level
          spew(DTR("Peak noise level: %u"), peak_noise_level);
        }
        if (readIntFromString(parts[6], recv_listen_freq))
        {
          // Noise logging frequency
          spew(DTR("Noise logging frequency: %u"), recv_listen_freq);
        }
        if (readIntFromString(parts[7], recv_mem_addr))
        {
          // Receiver memory address
          spew(DTR("Receiver memory address: %u"), recv_mem_addr);
        }
        IMC::TBRSensor sensor_msg;
        sensor_msg.serial_no = serial_no;
        sensor_msg.unix_timestamp = unix_timestamp;
        sensor_msg.temperature = fp32_t(temp_C);
        sensor_msg.avg_noise_level = avg_noise_level;
        sensor_msg.peak_noise_level = peak_noise_level;
        sensor_msg.recv_listen_freq = recv_listen_freq;
        sensor_msg.recv_mem_addr = recv_mem_addr;
        dispatch(sensor_msg);
      }
      //! Interpret fishtag sentence.
      //! @param[in] parts vector of strings from sentence.
      void
      interpretTagDetection(const std::vector<std::string>& parts)
      {
        spew(DTR("Interpret tag"));
        if (parts.size() < c_tag_fields)
        {
          war(DTR("invalid tag sentence"));
          return;
        }
        
        int serial_no = 0;
        int unix_timestamp = 0;
        int millis = 0;
        int trans_protocol = 0;
        int trans_id = 0;
        int trans_data = 0;
        int SNR = 0;
        int trans_freq = 0;
        int recv_mem_addr = 0;

        if (readIntFromString(parts[0], serial_no))
        {
          // Receiver serial number
          spew(DTR("Serial number: %u"), serial_no);
        }
        if (readIntFromString(parts[1], unix_timestamp))
        {
          //UTC UNIX timestamp
          spew(DTR("UTC UNIX timestamp: %u"), unix_timestamp);
        }
        if (readIntFromString(parts[2], millis))
        {
          //Millisecond timestamp
          spew(DTR("Millisecond timestamp: %u"), millis);
        }

        //Transmit protocol
        if(parts[3] == "R256")
          trans_protocol = IMC::TBRFishTag::TBR_R256;
        else if(parts[3] == "R04K")
          trans_protocol = IMC::TBRFishTag::TBR_R04K;
        else if(parts[3] == "S64K")
          trans_protocol = IMC::TBRFishTag::TBR_S64K;
        else if(parts[3] == "R64K")
          trans_protocol = IMC::TBRFishTag::TBR_R64K;
        else if(parts[3] == "R01M")
          trans_protocol = IMC::TBRFishTag::TBR_R01M;
        else if(parts[3] == "S256")
          trans_protocol = IMC::TBRFishTag::TBR_S256;
        else if(parts[3] == "HS256")
          trans_protocol = IMC::TBRFishTag::TBR_HS256;
        else if(parts[3] == "DS256")
          trans_protocol = IMC::TBRFishTag::TBR_DS256;
        spew(DTR("Transmit protocol: %s, enum: %i"), parts[3].c_str(), trans_protocol);


        if (readIntFromString(parts[4], trans_id))
        {
          // Tag ID number
          spew(DTR("Tag ID: %u"), trans_id);
        }
        if (readIntFromString(parts[5], trans_data))
        {
          // Tag raw data
          spew(DTR("Tag raw data: %u"), trans_data);
        }
        if (readIntFromString(parts[6], SNR))
        {
          // Signal to noise ratio
          spew(DTR("SNR: %u"), SNR);
        }
        if (readIntFromString(parts[7], trans_freq))
        {
          // Signal frequency
          spew(DTR("Signal frequency: %u"), trans_freq);
        }
        if (readIntFromString(parts[8], recv_mem_addr))
        {
          // Receiver memory address
          spew(DTR("Receiver memory address: %u"), recv_mem_addr);
        }
        IMC::TBRFishTag tag_msg;
        tag_msg.serial_no = serial_no;
        tag_msg.unix_timestamp = unix_timestamp;
        tag_msg.millis = millis;
        tag_msg.trans_protocol = trans_protocol;
        tag_msg.trans_id = trans_id;
        tag_msg.trans_data = trans_data;
        tag_msg.snr = SNR;
        tag_msg.trans_freq = trans_freq;
        tag_msg.recv_mem_addr = recv_mem_addr;
        tag_msg.lat = m_current_lat;
        tag_msg.lon = m_current_lon;
        dispatch(tag_msg);
      }

      void
      consume(const IMC::ScienceSensors* msg)
      {
        if (msg->getSource() != getSystemId() && msg->tbl != 3)
        {
          // Message is from L2.
          m_science.tbl = msg->tbl;
          m_science.tbl_dur = msg->tbl_dur;
          m_science.tbl_fr = msg->tbl_fr;
          
          if(m_science.tbl == 2)
          {
            // implement sensor rebooting.
          } else if(!m_active && m_science.tbl == 0)
          {
            // Turn sensor on.
            m_gpio->setValue(0);
            // Wait 2 seconds and initialize.
            Delay::wait(2.0);
            if(initializeSensor())
            {
              // Sensor is active.
              m_active = true;
              trace("from Iridium: TBLive ON");
              if(m_science.tbl_dur > 0.0)
              {
                m_duration.setTop(m_science.tbl_dur);
                trace("Sampling duration set: %d",m_science.tbl_dur);
              } else
              {
                trace("Sampling duration NOT set");
                m_duration.setTop(0.0);
              }
            }
            else
            {
              trace("Could not initialize TBLive sensor");
            }
          } else if(m_science.tbl == 1)
          {
            m_gpio->setValue(1);
            // Sensor is not active.
            m_active = false;
            m_intervals.setTop(0.0);
            m_duration.setTop(0.0);
            trace("from Iridium: TBLive OFF.");
          }

          // if m_science.tbl == 3 -> do nothing.
        }
      }

      void
      onMain(void)
      {
        // Wait for resource acquisition and initialization
        while(getEntityState() != IMC::EntityState::ESTA_NORMAL);

        while(!stopping()) {
          
          consumeMessages();
          
          if(m_sync_timer.overflow() && m_active)
          {
            m_sync_timer.reset();

            if(timestamp_send_counter >= m_args.timestamp_send_divider) {
              sendTbrTimestampSync();
              timestamp_send_counter = 0;
            } else {
              sendTbrSync();
            }
            //spew("C: %ld", std::time(0));
            spew("Sending duration: %f", m_sync_timer.getElapsed());
            timestamp_send_counter++;
          }

          // If sensor is active and sampling period expires.
          if(m_active && m_duration.getTop()!=0.0 && m_duration.overflow())
          {
            m_gpio->setValue(1);
            // Sensor is not active.
            m_active = false;
            trace("TBLive finished sampling: turning OFF");

            // Sensor is off.
            m_science.tbl = 1;
            
            if(m_science.tbl_fr > 0.0) //Samplings are periodical, not just one.
              m_intervals.setTop(m_science.tbl_fr);
          }

          // If sensor is inactive and sleeping period expires.
          if(!m_active && m_intervals.getTop()!=0.0 && m_intervals.overflow())
          {
            // Turn sensor on.
            m_gpio->setValue(0);
            // Wait 2 seconds and initialize.
            Delay::wait(2.0);
            if(initializeSensor())
            {
              // Sensor is active.
              m_active = true;
              trace("Periodical: TBLive ON");
              m_duration.reset();
              m_duration.setTop(m_science.tbl_dur);

              // Sensor is on.
              m_science.tbl = 0;
            }
            else
            {
              trace("Could not initialize TBLive sensor");
            }
          }

          if(m_sci_timer.overflow())
          {
            m_science.setSource(getSystemId());
            m_science.setDestination(0x8803);
            dispatch(m_science, DF_LOOP_BACK);
            spew("TBLIVE, IMC::ScienceSensors OUT: %d %d %d", m_science.tbl, m_science.tbl_dur, m_science.tbl_fr);
            m_sci_timer.reset();
          }

                  }
      }
    };
  }
}

DUNE_TASK
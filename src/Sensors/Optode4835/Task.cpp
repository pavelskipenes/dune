//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Renan Maidana, Alberto Dallolio                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>
#include <cstdio>
#include <string>
#include <limits>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace Optode4835
  {
    using DUNE_NAMESPACES;

    //! Salinity compensation upper temperature constant.
    static const float c_temp_0 = 298.15f;
    //! Salinity compensation lower temperature constant.
    static const float c_temp_1 = 273.15f;
    //! Salinity compensation constant B0.
    static const float c_b0 = -6.24097e-3;
    //! Salinity compensation constant B1.
    static const float c_b1 = -6.93498e-3;
    //! Salinity compensation constant B2.
    static const float c_b2 = -6.90358e-3;
    //! Salinity compensation constant B3.
    static const float c_b3 = -4.29155e-3;
    //! Salinity compensation constant C0.
    static const float c_c0 = -3.11680e-7;

    //! Dissolved oxygen depth compensation factor.
    static const float c_depth_factor = 3.2e-05;
    //! Data input timeout.
    static const float c_timeout = 2.0f;
    //! List of configuration commands.
    static const char* c_cmds[] = {"set passkey(1000)", "set flow control(none)", "set enable text(no)",
                                   "set salinity(0)", "set passkey(1)", "set enable sleep(yes)",
                                   "set enable rawdata(yes)", "set enable airsaturation(yes)",
                                   "set enable temperature(yes)", "set enable decimalformat(yes)",
                                   "set enable polled mode(no)"};
    //! Number of setup commands.
    static const unsigned c_cmds_size = 10;
    //! Reply acknowledgement.
    static const char* c_ack = "#\r\n";

    //! Task arguments.
    struct Arguments
    {
      //! Triggers sensor on and off.
      bool activate;
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Sampling period.
      double period;
      //! Measurement command string identifier.
      std::string cmd;
      //! Temperature entity label.
      std::string elabel_temp;
      //! Depth entity label.
      std::string elabel_depth;
      //! Salnity entity label.
      std::string elabel_salinity;
      //! Science Sensors Timeout.
      double m_sci_timeout;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! GPIO state handle
      Hardware::GPIO* m_gpio;
      //! Indicates sensor state.
      bool m_active;
      //! Last compensated depth.
      double m_depth;
      //! Last defined salinity.
      double m_salinity;
      //! Last sensed temperature.
      double m_temperature;
      //! Serial port handle.
      SerialPort* m_uart;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Science Sensors Timer.
      Counter<double> m_sci_timer;
      //! Save device raw data.
      IMC::DevDataText m_dev_data;
      //! Measured temperature
      IMC::Temperature m_temperature_msg;
      //! Measured Air saturation
      IMC::AirSaturation m_air_saturation;
      //! Measured dissolved oxygen
      IMC::DissolvedOxygen m_dissolved_oxygen;
      //! Received data line.
      std::string m_line;
      //! Temperature entity id.
      unsigned m_temp_eid;
      //! Depth entity id.
      unsigned m_depth_eid;
      //! Salinity entity id.
      unsigned m_salinity_eid;
      //! Science sensors commands to L2.
      IMC::ScienceSensorsReply m_science;
      //! Sampling duration timer.
      Counter<double> m_duration;
      //! Intervals between samplings.
      Counter<double> m_intervals;
      //! Task arguments.
      Arguments m_args;
      
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx), 
        m_gpio(NULL),
        m_active(false),
        m_depth(0.0),
        m_salinity(0.0),
        m_temperature(0.0),
        m_uart(NULL)
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
        .defaultValue("9600")
        .description("Serial port baud rate");

        param("Sampling Interval", m_args.period)
        .defaultValue("1.0")
        .minimumValue("1.0")
        .maximumValue("1400")
        .units(Units::Second)
        .description("Amount of seconds between samplings");

        param("Measurement String Identifier", m_args.cmd)
        .defaultValue("4835")
        .description("Measurement command string identifier");

        param("Science Sensors Timeout", m_args.m_sci_timeout)
        .defaultValue("60")
        .units(Units::Second)
        .description("IMC::ScienceSensors is sent at timer expiration");

        param("Entity Label - Temperature", m_args.elabel_temp)
        .defaultValue("SBE49FastCAT CTD Temperature")
        .description("Entity label of the CTD");

        param("Entity Label - Depth", m_args.elabel_depth)
        .defaultValue("SBE49FastCAT CTD Depth")
        .description("Entity label of the CTD");

        param("Entity Label - Salinity", m_args.elabel_salinity)
        .defaultValue("SBE49FastCAT CTD Salinity")
        .description("Entity label of the CTD");

        bind<IMC::Salinity>(this);
        bind<IMC::Temperature>(this);
        bind<IMC::Depth>(this);
        bind<IMC::ScienceSensors>(this);

        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_ACTIVATING);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        // If sensor is on and Neptus wants to turn it off.
        if(m_active && paramChanged(m_args.activate) && getEntityState() == IMC::EntityState::ESTA_NORMAL)
        {
          // Stop communication.
          stop();
          // Wait 2 seconds and turn sensor off.
          Delay::wait(2.0);
          m_gpio->setValue(1);
          // Sensor is not active.
          m_active = false;
          m_intervals.setTop(0.0);
          m_duration.setTop(0.0);

          m_science.opt = 1;
          m_science.opt_dur = 0.0;
          m_science.opt_fr = 0.0;
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

            m_science.opt = 0;
            m_science.opt_dur = 0.0;
            m_science.opt_fr = 0.0;
          }
          else
          {
            trace("Could not initialize optode sensor");
          }
        }

        if (m_active && paramChanged(m_args.period))
        {
          if (stop())
          {
            setPeriod(m_args.period);
            start();
          }
        }
      }

      void 
      onEntityReservation(void)
      {
        //m_dev_data.setSourceEntity(reserveEntity("Optode4385"));
        //m_temperature_msg.setSourceEntity(reserveEntity("Optode4385"));
        //m_air_saturation.setSourceEntity(reserveEntity("Optode4385"));
        //m_dissolved_oxygen.setSourceEntity(reserveEntity("Optode4385"));
        //m_science.setSourceEntity(reserveEntity("Optode4835"));
      }

      void
      onEntityResolution(void)
      {
        try
        {
          m_temp_eid = resolveEntity(m_args.elabel_temp);
        }
        catch (...)
        {
          m_temp_eid = std::numeric_limits<unsigned>::max();
        }

        try
        {
          m_depth_eid = resolveEntity(m_args.elabel_depth);
        }
        catch (...)
        {
          m_depth_eid = std::numeric_limits<unsigned>::max();
        }

        try
        {
          m_salinity_eid = resolveEntity(m_args.elabel_salinity);
        }
        catch (...)
        {
          m_salinity_eid = std::numeric_limits<unsigned>::max();
        }
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          m_uart->setCanonicalInput(true);
          m_uart->flush();

          m_gpio = new Hardware::GPIO(245);
          m_gpio->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
          if(m_active)
          {
            // turn on
            m_gpio->setValue(0);
            m_science.opt = 0;
            m_science.opt_dur = 0.0;
            m_science.opt_fr = 0.0;
          }
          else
          {
            //turn off.
            m_gpio->setValue(1);
            m_science.opt = 1;
            m_science.opt_dur = 0.0;
            m_science.opt_fr = 0.0;
          }
          
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        m_sci_timer.setTop(m_args.m_sci_timeout);
      }

      //! Initialize sensor.
      bool
      initializeSensor(void)
      {
        stop();
        getVersion();

        for (unsigned i = 0; i < c_cmds_size; ++i)
        {
          if(!sendCommand(c_cmds[i]))
          {
            return false;
          }
        }
          
        if (!setPeriod(m_args.period))
          return false;

        if (start())
          m_wdog.reset();

        return true;
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        stop();
        m_active = false;
        Memory::clear(m_uart);
        Memory::clear(m_gpio);
      }

      void
      consume(const IMC::Depth* msg)
      {
        //! Should come from CTD.
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getSourceEntity() != m_depth_eid)
          return;

        m_depth = msg->value;
        spew("Depth Consumed from CTD: %f", m_depth);
      }

      void
      consume(const IMC::Salinity* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getSourceEntity() != m_salinity_eid)
          return;

        if (msg->value < 0)
          return;

        m_salinity = msg->value;
        spew("Salinity Consumed from CTD: %f", m_salinity);
      }

      void
      consume(const IMC::Temperature* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getSourceEntity() != m_temp_eid)
          return;

        m_temperature = msg->value;
        spew("Temperature Consumed from CTD: %f", m_temperature);
      }

      //! Wake Up device.
      void
      wakeUp(void)
      {
        if (m_uart != NULL)
        {
          std::string bfr(";\r\n");
          m_uart->write(bfr.c_str(), bfr.size());
        }
      }

      //! Stop sampling.
      //! @return true if device was stopped, false otherwise.
      bool
      stop(void)
      {
        if (m_uart == NULL)
          return false;

        wakeUp();
        if (!sendCommand("stop"))
          return false;

        return true;
      }

      //! Start sampling.
      //! @return true if device was started, false otherwise.
      bool
      start(void)
      {
        if (!sendCommand("start"))
          return false;

        return true;
      }

      //! Request device's firmware version.
      void
      getVersion(void)
      {
        sendCommand("get sw version");
        listen();
      }

      //! Set device's sampling rate interval.
      //! @param[in] period desired sampling rate interval.
      //! @return true if command was acknowledged, false otherwise.
      bool
      setPeriod(double period)
      {
        // Watchdog will be twice the desired sampling rate interval.
        m_wdog.setTop(m_args.period * 10);

        return sendCommand(String::str("set interval(%0.1f)", period));
      }

      //! Process incoming sentence.
      //! @param[in] msg sentence.
      void
      process(const std::string& msg)
      {
        double tstamp = Clock::getSinceEpoch();
        m_dev_data.value.assign(sanitize(msg));
        m_dev_data.setTimeStamp(tstamp);
        dispatch(m_dev_data, DF_KEEP_TIME);

        if (String::startsWith(msg, m_args.cmd))
          parse(msg, tstamp);
        else if (String::startsWith(msg, "SW Version"))
          onVersion(msg);
      }

      //! Parse and dispatch incoming data.
      //! @param[in] msg sentence.
      //! @param[in] tstamp current timestamp.
      void
      parse(const std::string& msg, double tstamp)
      {
        std::sscanf(msg.c_str(),
                    "%*s\t%*u\t%f\t%f\t%f%*[^\n]\n",
                    &m_dissolved_oxygen.value, &m_air_saturation.value, &m_temperature_msg.value);

        // correct for depth.
        m_dissolved_oxygen.value *= (1 + c_depth_factor * m_depth);

        // correct for salinity.
        double Ts = std::log((c_temp_0 - m_temperature_msg.value) / (c_temp_1 + m_temperature_msg.value)); // Use temperature from Optode, not CTD (m_temperature).
        double f1 = m_salinity * (c_b0 + c_b1 * Ts + c_b2 * Ts * Ts + c_b3 * Ts * Ts * Ts);
        m_dissolved_oxygen.value *= std::exp(f1 + c_c0 * m_salinity * m_salinity);

        m_temperature_msg.setTimeStamp(tstamp);
        m_air_saturation.setTimeStamp(tstamp);
        m_dissolved_oxygen.setTimeStamp(tstamp);

        dispatch(m_temperature_msg, DF_KEEP_TIME);
        dispatch(m_air_saturation, DF_KEEP_TIME);
        dispatch(m_dissolved_oxygen, DF_KEEP_TIME);

        trace("temperature: %0.1f | saturation: %0.1f | oxygen: %0.2f",
              m_temperature_msg.value, m_air_saturation.value, m_dissolved_oxygen.value);
        //setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_wdog.reset();
      }

      //! Process and announce firmware version
      //! @param[in] msg sentence.
      void
      onVersion(const std::string& msg)
      {
        unsigned major, minor, patch;
        std::sscanf(msg.c_str(), "%*[^\t]\t%*s\t%*u\t%u\t%u\t%u%*[^\n]\n",
                    &major, &minor, &patch);

        inf(DTR("firmware version %u.%u.%u"), major, minor, patch);
      }

      //! Send command to device.
      //! @param[in] cmd command to send.
      //! @return true if command was successful, false otherwise.
      bool
      sendCommand(const std::string& cmd)
      {
        if (m_uart == NULL)
          return false;

        m_dev_data.value.assign(sanitize(cmd));
        dispatch(m_dev_data);

        std::string bfr(cmd + "\r\n");
        m_uart->write(bfr.c_str(), bfr.size());
        trace("sent: '%s'", sanitize(bfr).c_str());
        return readUntil(c_ack, c_timeout);
      }

      //! Check serial port for incoming transmissions.
      void
      listen(void)
      {
        char bfr[256];

        if (!Poll::poll(*m_uart, 1.0))
          return;

        size_t rv = m_uart->readString(bfr, sizeof(bfr));

        for (size_t i = 0; i < rv; ++i)
        {
          m_line.push_back(bfr[i]);

          // Detect line termination.
          if (bfr[i] == '\n')
          {
            trace("recv: '%s'", sanitize(m_line).c_str());
            process(m_line);
            m_line.clear();
          }
        }
      }

      //! Read input until a given sequence is received. Note that
      //! data after the sequence might be discarded.
      //! @param[in] reply sequence to search.
      //! @param[in] timeout timeout in second.
      //! @return true if command was acknowledged, false otherwise.
      bool
      readUntil(const std::string& reply, float timeout)
      {
        Counter<float> timer(timeout);

        while (!timer.overflow())
        {
          if (!Poll::poll(*m_uart, timer.getRemaining()))
            break;

          char bfr[256] = {0};
          m_uart->read(bfr, sizeof(bfr));

          trace("reply: '%s'", sanitize(bfr).c_str());

          if (String::endsWith(bfr, reply))
            return true;
        }

        return false;
      }

      void
      consume(const IMC::ScienceSensors* msg)
      {
        if (msg->getSource() != getSystemId() && msg->opt != 3)
        {
          // Message is from L2.
          m_science.opt = msg->opt;
          m_science.opt_dur = msg->opt_dur;
          m_science.opt_fr = msg->opt_fr;
          
          if(m_science.opt == 2)
          {
            // implement sensor rebooting.
          } else if(!m_active && m_science.opt == 0)
          {
            // Turn sensor on.
            m_gpio->setValue(0);
            // Wait 2 seconds and initialize.
            Delay::wait(2.0);
            if(initializeSensor())
            {
              // Sensor is active.
              m_active = true;
              trace("from Iridium: Optode ON");
              if(m_science.opt_dur > 0.0)
              {
                m_duration.setTop(m_science.opt_dur);
                trace("Sampling duration set: %d",m_science.opt_dur);
              } else
              {
                trace("Sampling duration NOT set");
                m_duration.setTop(0.0);
              }
            }
            else
            {
              trace("Could not initialize optode sensor");
            }
          } else if(m_science.opt == 1)
          {
            // Stop communication.
            stop();
            // Wait 2 seconds and turn sensor off.
            Delay::wait(2.0);
            m_gpio->setValue(1);
            // Sensor is not active.
            m_active = false;
            m_intervals.setTop(0.0);
            m_duration.setTop(0.0);
            trace("from Iridium: Optode OFF.");
          }

          // if m_science.opt == 3 -> do nothing.
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        // Wait for resource acquisition and initialization
        while(getEntityState() != IMC::EntityState::ESTA_NORMAL);
        
        // Run while task is active
        while(!stopping())
        {
          if(m_active)
          {
            // Get data from sensor
            listen();

            // Not received communication for a while
            if (m_wdog.overflow())
            {
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
              throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
            }
          }

          // If sensor is active and sampling period expires.
          if(m_active && m_duration.getTop()!=0.0 && m_duration.overflow())
          {
            // Stop communication.
            stop();
            // Wait 2 seconds and turn sensor off.
            Delay::wait(2.0);
            m_gpio->setValue(1);
            // Sensor is not active.
            m_active = false;
            trace("Optode finished sampling: turning OFF");

            // Sensor is off.
            m_science.opt = 1;
            
            if(m_science.opt_fr > 0.0) //Samplings are periodical, not just one.
            {
              m_intervals.setTop(m_science.opt_fr);
              spew("Optode sleeping for %d seconds",m_science.opt_fr);
            }
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
              trace("Periodical: Optode ON");
              m_duration.reset();
              m_duration.setTop(m_science.opt_dur);

              // Sensor is on.
              m_science.opt = 0;
            }
            else
            {
              trace("Could not initialize optode sensor");
            }
          }

          // If no instruction arrived from neptus, reset timer to avoid task from restarting
          if(!m_active)
            m_wdog.reset();

          if(m_sci_timer.overflow())
          {
            m_science.setSource(getSystemId());
            m_science.setDestination(0x8803);
            dispatch(m_science, DF_LOOP_BACK);
            debug("OPTODE, IMC::ScienceSensors OUT: %d %d %d", m_science.opt, m_science.opt_dur, m_science.opt_fr);
            m_sci_timer.reset();
          }
            
          waitForMessages(0.01);
        }
      }      
    };
  }
}

DUNE_TASK
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
      //! Sensor activation.
      bool activate;
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Sampling period.
      double period;
      //! Measurement command string identifier.
      std::string cmd;
      //! Name of device's power channel.
      std::string power_channel;
      //! Temperature entity label.
      std::string elabel_temp;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! GPIO state handle
      Hardware::GPIO* m_gpio;
      //! GPIO state
      bool m_gpio_state;
      //! Flag for GPIO activation
      bool m_activate;
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
      //! Task arguments.
      Arguments m_args;
      
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx), 
        m_gpio(NULL),
        m_depth(0.0),
        m_salinity(0.0),
        m_temperature(0.0),
        m_uart(NULL)
      {
        // paramActive(Tasks::Parameter::SCOPE_IDLE,
        //             Tasks::Parameter::VISIBILITY_USER);

        // Define configuration parameters.
        param("Activate Sensor", m_args.activate)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
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

        param("Power Channel", m_args.power_channel)
        .defaultValue("Oxygen Sensor")
        .description("Name of device's power channel");

        param("Entity Label - Temperature", m_args.elabel_temp)
        .defaultValue("Depth Sensor")
        .description("Entity label of the IMU");

        bind<IMC::Salinity>(this);
        bind<IMC::Temperature>(this);

        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (getEntityState() != IMC::EntityState::ESTA_NORMAL && paramChanged(m_args.activate))
        {
          // If sensor has been turned on, activate the task
          // If sensor has been turned off, deactivate the task
          // SSRs are normally-closed (NC), so deactivation means GPIO state = 1
          // We invert the logic here so on Neptus it is direct
          m_gpio_state = !m_args.activate;
          if(m_gpio_state)
            requestDeactivation();
          else
            requestActivation();
        }

        if (isActive() && paramChanged(m_args.period))
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
        m_dev_data.setSourceEntity(reserveEntity("Optode4385 Device Data"));
        m_temperature_msg.setSourceEntity(reserveEntity("Optode4385 Temperature"));
        m_air_saturation.setSourceEntity(reserveEntity("Optode4385 Air Saturation"));
        m_dissolved_oxygen.setSourceEntity(reserveEntity("Optode4385 Dissolved Oxygen"));
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

          m_gpio = new Hardware::GPIO(67);
          m_gpio->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
          m_gpio->setValue(0);
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        stop();
        getVersion();

        for (unsigned i = 0; i < c_cmds_size; ++i)
        {
          if (!sendCommand(c_cmds[i]))
            return;
        }

        if (!setPeriod(m_args.period))
          return;

        if (start())
          m_wdog.reset();

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        stop();
        Memory::clear(m_uart);
        Memory::clear(m_gpio);
      }

      void
      onEstimatedState(const IMC::EstimatedState& msg)
      {
        if (msg.getSource() != getSystemId())
          return;

        m_depth = msg.depth;
      }

      void
      consume(const IMC::Salinity* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->value < 0)
          return;

        m_salinity = msg->value;
      }

      void
      consume(const IMC::Temperature* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getSourceEntity() != m_temp_eid)
          return;

        m_temperature = msg->value;
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
        double Ts = std::log((c_temp_0 - m_temperature) / (c_temp_1 + m_temperature));
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
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
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
        spew("sent: '%s'", sanitize(bfr).c_str());
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
            spew("recv: '%s'", sanitize(m_line).c_str());
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

          spew("reply: '%s'", sanitize(bfr).c_str());

          if (String::endsWith(bfr, reply))
            return true;
        }

        return false;
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
          // Get data from sensor
          listen();

          // Not received communication for a while
          if (m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
          }

          // If no instruction arrived from neptus, reset timer to avoid task from restarting
          if(!m_args.activate)
            m_wdog.reset();
            
          // Sleep for 1s
          Delay::wait(1.0);
        }

        // When stopping task, turn sensor off
        m_gpio->setValue(1);
      }      
    };
  }
}

DUNE_TASK

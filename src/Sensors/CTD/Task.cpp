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
#include <cstdio>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  //! Device driver for the SBE 49 FastCAT CTD Sensor.
  //!
  //! @author José Braga
  namespace CTD
  {
    using DUNE_NAMESPACES;

    //! Operating frequency.
    static const float c_frequency = 16.0f;
    //! Minimum salinity threshold.
    static const float c_min_salinity = 1.0f;
    //! Command reply timeout.
    static const float c_timeout = 1.0f;

    struct Arguments
    {
      //! Sensor activation.
      bool activate;
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Number of samples to average.
      unsigned avg;
      //! Minimum Conductivity Frequency.
      float mincfreq;
      //! Zero Conductivity Frequency.
      float zerofreq;
      //! Pump delay.
      float delay;
      //! Real-time processing.
      bool rt;
      //! Temperature time advance.
      float tadvance;
      //! Conductivity cell thermal mass alpha correction.
      float alpha;
      //! Conductivity cell thermal mass tau correction.
      float tau;
      //! Name of device's power channel.
      std::string power_channel;
      //! True to enable automatic activation/deactivation based on medium.
      bool auto_activation;
    };

    struct Task: public Tasks::Task
    {
      //! GPIO state handle
      Hardware::GPIO* m_gpio;
      //! Sensor SSR state
      bool m_gpio_state;
      //! Indicates sensor state.
      bool m_active;
      //! Serial port handle.
      SerialPort* m_uart;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Save device raw data.
      IMC::DevDataText m_dev_data;
      //! Temperature data.
      IMC::Temperature m_temp;
      //! Conductivity data.
      IMC::Conductivity m_cond;
      //! Pressure data.
      IMC::Pressure m_press;
      //! Depth data.
      IMC::Depth m_depth;
      //! Salinity data.
      IMC::Salinity m_salinity;
      //! Sound Speed data.
      IMC::SoundSpeed m_sspeed;
      //! Received data line.
      std::string m_line;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_gpio(NULL),
        m_active(false),
        m_uart(NULL)
      {
        // Define configuration parameters.
        param("Activate Sensor", m_args.activate)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("1")
        .minimumValue("0")
        .maximumValue("1")
        .description("Controls sensor activation/deactivation");

        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("9600")
        .values("1200, 2400, 4800, 9600, 19200, 38400")
        .description("Serial port baud rate");

        param("Number of Samples to Average", m_args.avg)
        .defaultValue("8")
        .minimumValue("1")
        .maximumValue("255")
        .description("Number of samples to average and output data");

        param("Zero Conductivity Frequency", m_args.zerofreq)
        .defaultValue("2780")
        .units(Units::Hertz)
        .description("Minimum conductivity frequency (Hz) to enable pump turn-on,"
                     " to prevent pump from turning on before FastCAT is in water."
                     " Pump stops when frequency drops below value."
                     " FastCAT Configuration Sheet in manual lists uncorrected (raw)"
                     " frequency output at 0 conductivity. Typical value (factory-set)"
                     " for salt water and estuarine application is:"
                     "     (0 conductivity frequency + 500 Hz)."
                     " Typical value for fresh water applications is:"
                     "     (0 conductivity frequency + 5 Hz)");

        param("Minimum Conductivity Frequency", m_args.mincfreq)
        .defaultValue("500")
        .minimumValue("0.0")
        .units(Units::Hertz)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Minimum conductivity frequency (Hz) to enable pump turn-on,"
                     " to prevent pump from turning on before FastCAT is in water."
                     " Pump stops when frequency drops below value."
                     " FastCAT Configuration Sheet in manual lists uncorrected (raw)"
                     " frequency output at 0 conductivity. Typical value (factory-set)"
                     " for salt water and estuarine application is:"
                     "     (0 conductivity frequency + 500 Hz)."
                     " Typical value for fresh water applications is:"
                     "     (0 conductivity frequency + 5 Hz)");

        param("Pump Delay", m_args.delay)
        .defaultValue("30.0")
        .units(Units::Second)
        .description("Time to wait after minimum conductivity frequency is reached before"
                     " turning pump on. Pump delay time allows time for tubing and pump to"
                     " fill with water after FastCAT is submerged.");

        param("Process In Real-Time", m_args.rt)
        .defaultValue("true")
        .description("Apply alignment, filtering, and conductivity cell thermal mass"
                     " corrections to real-time data.");

        param("Time to Advance Temperature", m_args.tadvance)
        .defaultValue("0.0625")
        .minimumValue("0.0")
        .maximumValue("0.125")
        .units(Units::Second)
        .description("Time to advance temperature data relative to conductivity"
                     " and pressure data.");

        param("Conductivity Alpha Correction", m_args.alpha)
        .defaultValue("0.03")
        .minimumValue("0.02")
        .maximumValue("0.05")
        .description("Conductivity cell thermal mass alpha correction.");

        param("Conductivity Tau Correction", m_args.tau)
        .defaultValue("7.0")
        .minimumValue("5.0")
        .maximumValue("10.0")
        .description("Conductivity cell thermal mass tau correction.");

        param("Power Channel", m_args.power_channel)
        .defaultValue("CTD")
        .description("Name of device's power channel");

        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
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
          requestDeactivation();
        }

        // If sensor is off and Neptus wants to turn it on.
        if(!m_active && paramChanged(m_args.activate) && getEntityState() == IMC::EntityState::ESTA_NORMAL)
        {
          // Turn sensor on.
          m_gpio->setValue(0);
          // Wait 2 seconds and initialize.
          Delay::wait(2.0);
          if(setup())
          {
            // Sensor is active.
            m_active = true;
            requestActivation();
          }
          else
          {
            trace("Could not initialize CTD sensor");
          }
        }

        if (isActive())
        {
          if (paramChanged(m_args.rt) || paramChanged(m_args.mincfreq) ||
              paramChanged(m_args.tau) || paramChanged(m_args.alpha) ||
              paramChanged(m_args.delay) || paramChanged(m_args.tadvance) ||
              paramChanged(m_args.avg) || paramChanged(m_args.zerofreq))
          {
            stop();
            setup();
            start();
          }
        }
      }

      void 
      onEntityReservation(void)
      {
        m_dev_data.setSourceEntity(reserveEntity("SBE49FastCAT CTD Device Data"));
        m_temp.setSourceEntity(reserveEntity("SBE49FastCAT CTD Temperature"));
        m_cond.setSourceEntity(reserveEntity("SBE49FastCAT CTD Conductivity"));
        m_press.setSourceEntity(reserveEntity("SBE49FastCAT CTD Pressure"));
        m_depth.setSourceEntity(reserveEntity("SBE49FastCAT CTD Depth"));
        m_salinity.setSourceEntity(reserveEntity("SBE49FastCAT CTD Salinity"));
        m_sspeed.setSourceEntity(reserveEntity("SBE49FastCAT CTD Sound Speed"));
      }

      //! Try to connect to the device.
      //! @return true if connection was established, false otherwise.
      void
      onResourceAcquisition(void)
      {
        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          m_uart->setCanonicalInput(true);
          m_uart->flush();

          m_gpio = new Hardware::GPIO(64);
          m_gpio->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
          if(m_active)
          {
            // turn on
            m_gpio->setValue(0);
          }
          else
          {
            //turn off.
            m_gpio->setValue(1);
          }
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
        if (m_active)
        {
          if (setup())
            start();
          else
            throw RestartNeeded(DTR("failed to configure device"), 5.0);
        }
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);        
        m_wdog.setTop(30.0);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        stop();
        Memory::clear(m_uart);
        Memory::clear(m_gpio);
      }

      bool
      setup(void)
      {
        if (m_uart == NULL)
          return false;

        trace("Setting up device");

        char rt = m_args.rt ? 'y' : 'n';

        // Wake-up and setup device.
        sendCommand("", false);

        if (!sendCommand("setdefaults"))
          return false;

        if (!setAverage(m_args.avg))
          return false;

        if (!sendCommand(String::str("mincondfreq=%0.0f", m_args.mincfreq + m_args.zerofreq)))
          return false;

        if (!sendCommand(String::str("pumpdelay=%0.0f", m_args.delay)))
          return false;

        if (!sendCommand(String::str("processrealtime=%c", rt)))
          return false;

        if (!sendCommand(String::str("tadvance=%0.0f", m_args.tadvance)))
          return false;

        if (!sendCommand(String::str("alpha=%0.0f", m_args.alpha)))
          return false;

        if (!sendCommand(String::str("tau=%0.0f", m_args.tau)))
          return false;

        trace("Setup successful");
        m_wdog.reset();
        return true;
      }

      //! Start sampling.
      //! @return true if device started, false otherwise.
      bool
      start(void)
      {
        trace("Starting measurements");
        if (!sendCommand("start"))
          return false;

        return true;
      }

      //! Stop sampling.
      void
      stop(void)
      {
        trace("Stopping measurements");
        if (m_uart == NULL)
          return;

        sendCommand("", false);
        sendCommand("stop");
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      //! Set the number of samples to average.
      //! @param[in] avg number of samples to be averaged.
      //! @return true if command was sent successfully, false otherwise.
      bool
      setAverage(unsigned avg)
      {
        m_wdog.setTop((std::ceil(avg / c_frequency) + 2) * 2);
        return sendCommand(String::str("navg=%u", avg));
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

        int rv = std::sscanf(msg.c_str(), "%*[^0-9] %f, %f, %lf, %f, %f\r\n",
                             &m_temp.value, &m_cond.value, &m_press.value,
                             &m_salinity.value, &m_sspeed.value);

        if (rv == 5)
        {
          m_press.value *= Math::c_pascal_per_bar / 10.0;
          m_depth.value = m_press.value / Math::c_gravity / Math::c_seawater_density;

          m_temp.setTimeStamp(tstamp);
          m_cond.setTimeStamp(tstamp);
          m_press.setTimeStamp(tstamp);
          m_depth.setTimeStamp(tstamp);
          m_salinity.setTimeStamp(tstamp);
          m_sspeed.setTimeStamp(tstamp);

          if (m_salinity.value < c_min_salinity)
            m_sspeed.value = -1;

          dispatch(m_temp, DF_KEEP_TIME);
          dispatch(m_cond, DF_KEEP_TIME);
          dispatch(m_press, DF_KEEP_TIME);
          dispatch(m_depth, DF_KEEP_TIME);
          dispatch(m_salinity, DF_KEEP_TIME);
          dispatch(m_sspeed, DF_KEEP_TIME);

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          m_wdog.reset();
        }
      }

      //! Send command to device.
      //! @param[in] cmd command to send.
      //! @param[in] ack wait for ack.
      //! @return true if command succeeded, false otherwise.
      bool
      sendCommand(const std::string& cmd, bool ack = true)
      {
        if (m_uart == NULL)
          return false;

        m_dev_data.value.assign(sanitize(cmd));
        dispatch(m_dev_data);

        std::string bfr(cmd + "\r\n");
        m_uart->write(bfr.c_str(), bfr.size());
        trace("sent: '%s'", sanitize(bfr).c_str());

        if (!ack)
          return true;

        return readUntil("S>", "?cmd S>", c_timeout);
      }

      //! Check serial port for incoming transmissions.
      void
      listen(void)
      {
        if (m_uart == NULL)
          return;

        uint8_t bfr[256];

        if (!Poll::poll(*m_uart, 1.0))
          return;

        size_t rv = m_uart->read(bfr, sizeof(bfr));

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
      //! @param[in] ack command acknowledged.
      //! @param[in] nack command not acknowledged.
      //! @param[in] timeout timeout in second.
      //! @return true if command was handled, false otherwise.
      bool
      readUntil(const std::string& ack, const std::string& nack, float timeout)
      {
        Counter<float> timer(timeout);

        while (!timer.overflow())
        {
          if (!Poll::poll(*m_uart, timer.getRemaining()))
            break;

          char bfr[256] = {0};
          m_uart->read(bfr, sizeof(bfr));

          trace("reply: '%s'", bfr);

          if (String::startsWith(bfr, nack) || String::endsWith(bfr, nack + "\r\n"))
            return false;
          else if (String::startsWith(bfr, ack) || String::endsWith(bfr, ack + "\r\n"))
            return true;
        }

        return true;
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
          else
          {
            // If no instruction arrived from neptus, reset timer to avoid task from restarting
            m_wdog.reset();
          }

          waitForMessages(0.01);
        }
      }
    };
  }
}

DUNE_TASK

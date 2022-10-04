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
// Author: Alberto Dallolio                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  //! Stop sampling.
  static const char* c_cmd_stop = "!!!!!";
  //! Continuous sampling command.
  static const char* c_cmd_continuous = "$pkt=3";
  //! Disable memory command.
  static const char* c_cmd_no_mem = "$rec=0";
  //! No engineering column command.
  static const char* c_cmd_no_eng = "$cal=0";
  //! Store command.
  static const char* c_cmd_store = "$sto";
  //! Command to restart sampling after being stopped.
  static const char* c_cmd_restart = "$run";
  //! Close Bio-Wiper.
  static const char* c_cmd_close = "$mvs=0";

  namespace EcoPAR
  {
    using DUNE_NAMESPACES;

    //! Task arguments.
    struct Arguments
    {
      //! Triggers sensor on and off.
      bool activate;
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate
      unsigned baud;
      //! Input timeout.
      double timeout;
      //! Immersion Coefficient.
      unsigned im;
      //! Scaling factor.
      double a0;
      //! Voltage offset.
      double a1;
      //! Sensor Medium.
      std::string smed;
      //! Science Sensors Timeout.
      double m_sci_timeout;
    };

    struct Task: public Tasks::Task
    {
      //! GPIO handle
      Hardware::GPIO* m_gpio;
      //! Indicates sensor state.
      bool m_active;
      //! Serial port handle.
      SerialPort* m_uart;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Science Sensors Timer.
      Counter<double> m_sci_timer;
      //! Photosynthetically Active Radiation.
      IMC::PAR m_par;
      //! Received data line.
      std::string m_line;
      //! Science sensors commands from L2.
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
        Tasks::Task(name, ctx), 
        m_gpio(NULL),
        m_active(false),
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

        param("Serial Port - Baud Rate", m_args.baud)
        .defaultValue("19200")
        .description("Serial port Baud Rate");

        param("Input Timeout", m_args.timeout)
        .defaultValue("20.0")
        .minimumValue("2.0")
        .units(Units::Second)
        .description("Amount of seconds to wait for data before reporting an error");

        param("Sensor Medium", m_args.smed)
        .defaultValue("Air")
        .description("Sensor Medium");

        param("Immersion Coefficient", m_args.im)
        .defaultValue("1.3589")
        .description("Immersion Coefficient");

        param("Scaling Factor", m_args.a1)
        .defaultValue("2908")
        .description("Scaling Factor");

        param("Voltage Offset", m_args.a0)
        .defaultValue("4393")
        .description("Voltage Offset");

        param("Science Sensors Timeout", m_args.m_sci_timeout)
        .defaultValue("60")
        .units(Units::Second)
        .description("IMC::ScienceSensors is sent at timer expiration");

        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);

        bind<IMC::ScienceSensors>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        // If sensor is on and Neptus wants to turn it off.
        if(m_active && paramChanged(m_args.activate) && getEntityState() == IMC::EntityState::ESTA_NORMAL)
        {
          // Stop communication.
          sendCommand(c_cmd_stop);
          Delay::wait(10.0);
          sendCommand(c_cmd_close);
          // Wait 2 seconds and turn sensor off.
          Delay::wait(2.0);
          m_gpio->setValue(1);
          // Sensor is not active.
          m_active = false;
          trace("onUpdateParameters EcoPAR OFF");
          m_intervals.setTop(0.0);
          m_duration.setTop(0.0);

          m_science.par = 1;
          m_science.par_dur = 0.0;
          m_science.par_fr = 0.0;
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
            trace("onUpdateParameters EcoPAR ON");
            m_science.par = 0;
            m_science.par_dur = 0.0;
            m_science.par_fr = 0.0;
          }
          else
          {
            trace("Could not initialize EcoPAR sensor");
          }
        }

        if (paramChanged(m_args.timeout))
          m_wdog.setTop(m_args.timeout);

      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.baud);
          m_uart->setCanonicalInput(true);
          m_uart->flush();

          m_gpio = new Hardware::GPIO(244);
          m_gpio->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
          if(m_active)
          {
            trace("onResourceAcquisition EcoPAR ON");
            // turn on
            m_gpio->setValue(0);
            m_science.par = 0;
            m_science.par_dur = 0.0;
            m_science.par_fr = 0.0;
          }
          else
          {
            trace("onResourceAcquisition EcoPAR OFF");
            //turn off.
            m_gpio->setValue(1);
            m_science.par = 1;
            m_science.par_dur = 0.0;
            m_science.par_fr = 0.0;
          }
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        m_sci_timer.setTop(m_args.m_sci_timeout);
      }

      //! Initialize resources.
      bool
      initializeSensor(void)
      {
        sendCommand(c_cmd_stop);
        sendCommand(c_cmd_continuous);
        sendCommand(c_cmd_no_mem);
        sendCommand(c_cmd_no_eng);
        sendCommand(c_cmd_store);
        sendCommand(c_cmd_restart);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_wdog.reset();
        
        // We should check if sensor replies to commands!
        return true;
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        sendCommand(c_cmd_stop);
        Delay::wait(5.0);
        sendCommand(c_cmd_close);
        m_active = false;
        Memory::clear(m_uart);
        Memory::clear(m_gpio);
      }

      void
      consume(const IMC::ScienceSensors* msg)
      {
        if (msg->getSource() != getSystemId() && msg->par != 3)
        {
          spew("Received IMC::ScienceSensors from L2");

          // Message is from L2.
          m_science.par = msg->par;
          m_science.par_dur = msg->par_dur;
          m_science.par_fr = msg->par_fr;
          
          if(m_science.par == 2)
          {
            // implement sensor rebooting.
          } else if(!m_active && m_science.par == 0)
          {
            // Turn sensor on.
            m_gpio->setValue(0);
            // Wait 2 seconds and initialize.
            Delay::wait(2.0);
            if(initializeSensor())
            {
              // Sensor is active.
              m_active = true;
              trace("from Iridium: EcoPAR ON");
              if(m_science.par_dur > 0.0)
              {
                m_duration.setTop(m_science.par_dur);
                trace("Sampling duration set: %d",m_science.par_dur);
              } else
              {
                trace("Sampling duration NOT set");
                m_duration.setTop(0.0);
              }
            }
            else
            {
              trace("Could not initialize EcoPAR sensor");
            }
          } else if(m_science.par == 1)
          {
            // Stop communication.
            sendCommand(c_cmd_stop);
            Delay::wait(10.0);
            sendCommand(c_cmd_close);
            // Wait 2 seconds and turn sensor off.
            Delay::wait(2.0);
            m_gpio->setValue(1);
            // Sensor is not active.
            m_active = false;
            m_intervals.setTop(0.0);
            m_duration.setTop(0.0);
            trace("from Iridium: EcoPAR OFF.");
          }

          // if m_science.eco == 3 -> do nothing.
        }
      }

      //! Process incoming sentence.
      //! @param[in] msg sentence.
      void
      process(const std::string& msg)
      {
        std::string msg_sub = msg.substr(0,3);

        if(msg_sub.compare("mvs") == 0)
          return;

        unsigned par;
        int rv = std::sscanf(msg.c_str(),"%*s\t%*s\t%u\r\n",
                             &par);

        double par_double = (double) par;

        if (rv == 1)
        {
          trace("counts: par: %u", par);

          double tstamp = Clock::getSinceEpoch();
          m_par.setTimeStamp(tstamp);

          //! Compute exponential.
          double ex = (par_double-m_args.a0)/m_args.a1;
          double factor = std::pow(10,ex);
          if(m_args.smed.compare("Air")==0)
          {
              m_par.value = 1.0*factor;
          } else if(m_args.smed.compare("Water")==0)
          {
              m_par.value = m_args.im*factor;
          }

          dispatch(m_par, DF_KEEP_TIME);

          trace("output PAR value: %f",
                m_par.value);

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          m_wdog.reset();
        }
        else
        {
          trace("unable to parse: '%s'", msg.c_str());
        }
      }

      //! Send command to device.
      //! @param[in] cmd command to send.
      void
      sendCommand(const std::string& cmd)
      {
        if (m_uart == NULL)
          return;

        std::string bfr(cmd + "\r\n");
        m_uart->write(bfr.c_str(), bfr.size());
        spew("sent: '%s'", sanitize(bfr).c_str());
      }

      //! Check serial port for incoming transmissions.
      void
      listen(void)
      {
        if (m_uart == NULL)
          return;

        char bfr[256];

        if (!Poll::poll(*m_uart, 10.0))
          return;

        size_t rv = m_uart->readString(bfr, sizeof(bfr));

        for (size_t i = 0; i < rv; ++i)
        {
          m_line.push_back(bfr[i]);

          // Detect line termination.
          if (bfr[i] == '\n')
          {
            spew("recv: %s", sanitize(m_line).c_str());

            process(m_line);
            m_line.clear();
          }
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

            trace("EcoPAR PAR: %.2f", m_par.value);

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
            // Stop Bio-Wiper and communication.
            sendCommand(c_cmd_stop);
            Delay::wait(10.0);
            sendCommand(c_cmd_close);
            // Wait 2 seconds and turn sensor off.
            Delay::wait(2.0);
            m_gpio->setValue(1);
            // Sensor is not active.
            m_active = false;
            trace("EcoPAR finished sampling: turning OFF");

            // Sensor is off.
            m_science.par = 1;
            
            if(m_science.par_fr > 0.0) //Samplings are periodical, not just one.
              m_intervals.setTop(m_science.par_fr);
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
              trace("Periodical: EcoPAR ON");
              m_duration.reset();
              m_duration.setTop(m_science.par_dur);

              // Sensor is on.
              m_science.par = 0;
            }
            else
            {
              trace("Could not initialize EcoPAR sensor");
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
            debug("EcoPAR, IMC::ScienceSensors OUT: %d %d %d", m_science.par, m_science.par_dur, m_science.par_fr);
            m_sci_timer.reset();
          }
          
          waitForMessages(0.01);
        }
      }
    };
  }
}

DUNE_TASK

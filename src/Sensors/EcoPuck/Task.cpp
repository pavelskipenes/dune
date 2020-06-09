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
// Author: renalberto                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  //! Stop sampling.
  static const char* c_cmd_stop = "!!!!!";
  //! Continuous sampling command.
  static const char* c_cmd_continuous = "$pkt=0";
  //! Disable memory command.
  static const char* c_cmd_no_mem = "$rec=0";
  //! No engineering column command.
  static const char* c_cmd_no_eng = "$cal=0";
  //! Store command.
  static const char* c_cmd_store = "$sto";
  //! Command to restart sampling after being stopped.
  static const char* c_cmd_restart = "$run";

  namespace EcoPuck
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
      //! CDOM dark counts.
      unsigned dom_dc;
      //! CDOM scale factor.
      double dom_sf;
      //! Chlorophyll dark counts.
      unsigned chl_dc;
      //! Chlorophyll scale factor.
      double chl_sf;
      //! Scattering meter dark counts.
      unsigned obc_dc;
      //! Scattering meter scale factor.
      double obc_sf;
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
      //! Dissolved Organic Matter.
      IMC::DissolvedOrganicMatter m_dom;
      //! Optical Backscattering Coefficient.
      IMC::OpticalBackscatter m_obc;
      //! Chlorophyll.
      IMC::Chlorophyll m_chl;
      //! Received data line.
      std::string m_line;
      //! Science sensors commands from L2.
      IMC::ScienceSensors m_science;
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
        .defaultValue("5.0")
        .minimumValue("2.0")
        .units(Units::Second)
        .description("Amount of seconds to wait for data before reporting an error");

        param("CDOM -- Dark Counts", m_args.dom_dc)
        .defaultValue("62")
        .description("Signal output of the meter in clean water with black tape over detector");

        param("CDOM -- Scale Factor", m_args.dom_sf)
        .defaultValue("0.0916")
        .description("Scale factor is used to derive instrument output concentration"
                     " from the raw signal output of the fluorometer");

        param("Chlorophyll -- Dark Counts", m_args.chl_dc)
        .defaultValue("49")
        .description("Signal output of the meter in clean water with black tape over detector");

        param("Chlorophyll -- Scale Factor", m_args.chl_sf)
        .defaultValue("0.0073")
        .description("Scale factor is used to derive instrument output concentration"
                     " from the raw signal output of the fluorometer");

        param("Scattering -- Dark Counts", m_args.obc_dc)
        .defaultValue("44")
        .description("Signal output of the meter in clean water with black tape over detector");

        param("Scattering -- Scale Factor", m_args.obc_sf)
        .defaultValue("1.824e-6")
        .description("Scale factor is used to derive instrument output concentration"
                     " from the raw signal output of the fluorometer");

        m_dom.type = IMC::DissolvedOrganicMatter::DT_COLORED;
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
          // Wait 2 seconds and turn sensor off.
          Delay::wait(2.0);
          m_gpio->setValue(1);
          // Sensor is not active.
          m_active = false;
          trace("onUpdateParameters ECOPuck OFF");
          m_intervals.setTop(0.0);
          m_duration.setTop(0.0);
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
            trace("onUpdateParameters ECOPuck ON");
          }
          else
          {
            trace("Could not initialize ECOPuck sensor");
          }
        }

        if (paramChanged(m_args.timeout))
          m_wdog.setTop(m_args.timeout);

      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        m_dom.setSourceEntity(reserveEntity("EcoPuck Dissolved Organic Matter"));
        m_obc.setSourceEntity(reserveEntity("EcoPuck Optical Backscattering Coefficient"));
        m_chl.setSourceEntity(reserveEntity("EcoPuck Chlorophyll"));
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

          m_gpio = new Hardware::GPIO(243);
          m_gpio->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
          if(m_active)
          {
            trace("onResourceAcquisition ECOPuck ON");
            // turn on
            m_gpio->setValue(0);
          }
          else
          {
            trace("onResourceAcquisition ECOPuck OFF");
            //turn off.
            m_gpio->setValue(1);
          }
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
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
        m_active = false;
        Memory::clear(m_uart);
        Memory::clear(m_gpio);
      }

      void
      consume(const IMC::ScienceSensors* msg)
      {
        if (msg->getSource() != getSystemId())
        {
          // Message is from L2.
          m_science = *msg;
          
          if(m_science.eco == 2)
          {
            // implement sensor rebooting.
          } else if(!m_active && m_science.eco == 0)
          {
            // Turn sensor on.
            m_gpio->setValue(0);
            // Wait 2 seconds and initialize.
            Delay::wait(2.0);
            if(initializeSensor())
            {
              // Sensor is active.
              m_active = true;
              trace("from Iridium: ECOPuck ON");
              if(m_science.eco_dur > 0.0)
              {
                m_duration.setTop(m_science.eco_dur);
                trace("Sampling duration set: %d",m_science.eco_dur);
              } else
              {
                trace("Sampling duration NOT set");
                m_duration.setTop(0.0);
              }
            }
            else
            {
              trace("Could not initialize ECOPuck sensor");
            }
          } else if(m_science.eco == 1)
          {
            // Stop communication.
            sendCommand(c_cmd_stop);
            // Wait 2 seconds and turn sensor off.
            Delay::wait(2.0);
            m_gpio->setValue(1);
            // Sensor is not active.
            m_active = false;
            m_intervals.setTop(0.0);
            m_duration.setTop(0.0);
            trace("from Iridium: ECOPuck OFF.");
          }

          // if m_science.eco == 3 -> do nothing.
        }
      }

      //! Process incoming sentence.
      //! @param[in] msg sentence.
      void
      process(const std::string& msg)
      {
        unsigned obc, chl, dom;
        int rv = std::sscanf(msg.c_str(),"%*s\t%*s\t%*u\t%u\t%*u\t%u\t%*u\t%u\t%*u\r\n",
                             &obc, &chl, &dom);

        if (rv == 3)
        {
          trace("counts: chlor: %u | cdom: %u | scatter: %u", chl, dom, obc);

          double tstamp = Clock::getSinceEpoch();
          m_obc.setTimeStamp(tstamp);
          m_chl.setTimeStamp(tstamp);
          m_dom.setTimeStamp(tstamp);
          m_obc.value = m_args.obc_sf * (double)(obc - m_args.obc_dc);
          m_chl.value = m_args.chl_sf * (double)(chl - m_args.chl_dc);
          m_dom.value = m_args.dom_sf * (double)(dom - m_args.dom_dc);

          dispatch(m_obc, DF_KEEP_TIME);
          dispatch(m_dom, DF_KEEP_TIME);
          dispatch(m_chl, DF_KEEP_TIME);

          debug("output: chlor: %0.2f | cdom: %0.2f | scatter: %0.2f",
                m_chl.value, m_dom.value, m_obc.value);

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

        if (!Poll::poll(*m_uart, 2.0))
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

            trace("EcoPuck Dissolved Organic Matter: %.2f", m_dom.value);
            trace("EcoPuck OBC: %.2f", m_obc.value);
            trace("EcoPuck Chlorophyll: %.2f", m_chl.value);

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
            sendCommand(c_cmd_stop);
            // Wait 2 seconds and turn sensor off.
            Delay::wait(2.0);
            m_gpio->setValue(1);
            // Sensor is not active.
            m_active = false;
            trace("ECOPuck finished sampling: turning OFF");
            
            if(m_science.eco_fr > 0.0) //Samplings are periodical, not just one.
              m_intervals.setTop(m_science.eco_fr);
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
              trace("Periodical: ECOPuck ON");
              m_duration.reset();
              m_duration.setTop(m_science.eco_dur);
            }
            else
            {
              trace("Could not initialize EcoPuck sensor");
            }
          }

          // If no instruction arrived from neptus, reset timer to avoid task from restarting
          if(!m_active)
            m_wdog.reset();

          waitForMessages(0.01);
        }
      }
    };
  }
}

DUNE_TASK

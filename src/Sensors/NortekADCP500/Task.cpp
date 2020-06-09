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
// Author: Renan & Alberto                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Hardware/GPIO.hpp>

#include "Driver.hpp"
#include "Parser.hpp"

namespace Sensors
{
  namespace NortekADCP500
  {
    using DUNE_NAMESPACES;

    //! Data input timeout.
    static const double c_data_timeout = 10.0;
    //! Data port offset.
    static const unsigned c_data_port = 2;

    //! Task arguments.
    struct Arguments
    {
      //! Triggers sensor on and off.
      bool activate;
      //! IO device.
      std::string io_dev;
      //! UART baud rate.
      unsigned uart_baud;
      //! Salnity entity label.
      std::string elabel_salinity;

      //! ADCP position.
      std::vector<float> pos;
      //! ADCP orientation.
      std::vector<float> ang;

      //! ADCP SETPLAN parameters
      unsigned miavg;
      unsigned avg_enable;
      unsigned vert_dir;
      unsigned burst_enable;
      unsigned miburst;
      unsigned diburst;
      double   sound_vel;
      std::string logfilename;
      
      //! ADCP SETAVG filter parameters
      unsigned ncells;
      double cellsize;
      double blank;
      std::string coord;
      double powerlevel;
      unsigned ainterval;
      double vrange;
      unsigned nping;
      unsigned nbeam;
      std::string bandwidth;
    };

    struct Task: public DUNE::Tasks::Task
    {
      Hardware::GPIO* m_gpio;
      //! Indicates sensor state.
      bool m_active;
      //! IO device handle.
      IO::Handle* m_handle;
      //! IO device Handle for TCP data socket.
      IO::Handle* m_data_h;
      //! Driver.
      Driver* m_driver;
      //! Parser.
      Parser* m_parser;
      //! Medium handler.
      Monitors::MediumHandler m_hand;
      //! Watchdog.
      Counter<double> m_wdog;
      //! List of entities.
      std::vector<unsigned> m_entities;
      //! Filtered entity.
      unsigned m_entity;
      //! True if pings are externally triggered.
      bool m_triggered;
      //! True if we're using serial link.
      bool m_serial;
      //! Science sensors commands from L2.
      IMC::ScienceSensors m_science;
      //! Sampling duration timer.
      Counter<double> m_duration;
      //! Intervals between samplings.
      Counter<double> m_intervals;
      //! Salinity entity id.
      unsigned m_salinity_eid;
      //! Configuration parameters.
      Arguments m_args;
      
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx), 
        m_gpio(NULL),
        m_active(false),
        m_handle(NULL),
        m_data_h(NULL),
        m_driver(NULL),
        m_parser(NULL),
        m_triggered(false),
        m_serial(false)
      {
        // Define configuration parameters.
        param("Activate Sensor", m_args.activate)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("false")
        .description("Controls sensor activation/deactivation");
        
        param("IO Port - Device", m_args.io_dev)
        .defaultValue("")
        .description("IO device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("115200")
        .description("Serial port baud rate");

        param("Device Position", m_args.pos)
        .defaultValue("0.50, 0, 0.20")
        .size(3)
        .units(Units::Meter)
        .description("Device position relative to navigation estimation (relative to GPS sensor)");

        param("Device Orientation", m_args.ang)
        .defaultValue("0, -90, 45")
        .size(3)
        .units(Units::Degree)
        .description("Device orientation");

        param("Averaging Interval", m_args.miavg)
        .defaultValue("600")
        .minimumValue("1")
        .maximumValue("21600")
        .units(Units::Second)
        .description("Averaging interval for ADCP measurements");

        param("Averaging Enable", m_args.avg_enable)
        .defaultValue("1")
        .minimumValue("0")
        .maximumValue("1")
        .description("Enable/Disable ADCP mesaurement averaging");

        param("Vertical Direction", m_args.vert_dir)
        .defaultValue("0")
        .minimumValue("0")
        .maximumValue("2")
        .description("Vertical direction");

        param("Burst Measurement Enable", m_args.burst_enable)
        .defaultValue("0")
        .minimumValue("0")
        .maximumValue("1")
        .description("Enable/Disable burst measurements");

        param("Burst Interval", m_args.miburst)
        .defaultValue("120")
        .minimumValue("1")
        .maximumValue("212600")
        .units(Units::Second)
        .description("Burst interval (s)");

        param("Depth Interval", m_args.diburst)
        .defaultValue("0")
        .units(Units::Meter)
        .description("Depth interval (m)");

        param("Sound Velocity", m_args.sound_vel)
        .defaultValue("0")
        .minimumValue("1300.0")
        .maximumValue("1700.0")
        .units(Units::MeterPerSecond)
        .description("Sound velocity (0 will will set sensor to use measured sound velocity)");

        param("Log File Name", m_args.logfilename)
        .defaultValue("Data.ad2cp")
        .description("Filename of the raw data file where all the measured binary data will be stored in the ADCP");

        param("Number of Cells", m_args.ncells)
        .defaultValue("17")
        .minimumValue("1")
        .maximumValue("200")
        .description("Number of Cells");

        param("Cell Size", m_args.cellsize)
        .defaultValue("4.0")
        .minimumValue("0.5")
        .maximumValue("4.0")
        .units(Units::Meter)
        .description("Cell Size (m)");

        param("Blanking Distance", m_args.blank)
        .defaultValue("2.0")
        .minimumValue("0.5")
        .maximumValue("68.0")
        .units(Units::Meter)
        .description("Blanking Distance (m)");

        param("Coordinate System", m_args.coord)
        .defaultValue("ENU")
        .description("Coordinate System (ENU, XYZ or BEAM)");
        
        param("Power Level", m_args.powerlevel)
        .defaultValue("-6.0")
        .minimumValue("-20.0")
        .maximumValue("0.0")
        .units(Units::Decibel)
        .description("Power Level (dB, -20.0 to 0.0)");
        
        param("Average Interval", m_args.ainterval)
        .defaultValue("180")
        .minimumValue("1")
        .maximumValue("1800")
        .units(Units::Second)
        .description("Average Interval");
        
        param("Velocity Range", m_args.vrange)
        .defaultValue("1.0")
        .minimumValue("1.0")
        .maximumValue("5.0")
        .units(Units::MeterPerSecond)
        .description("Velocity range along beam (m/s)");

        param("Number of Pings", m_args.nping)
        .defaultValue("137")
        .minimumValue("1")
        .maximumValue("7200")
        .description("Number of Pings");

        param("Number of Beams", m_args.nbeam)
        .defaultValue("3")
        .minimumValue("1")
        .maximumValue("5")
        .description("Number of Beams");

        param("Bandwidth", m_args.bandwidth)
        .defaultValue("BROAD")
        .description("Bandwidth selection. (“NARROW”, “BROAD”)");

        param("Entity Label - Salinity", m_args.elabel_salinity)
        .defaultValue("SBE49FastCAT CTD Salinity")
        .description("Entity label of the CTD");

        bind<IMC::Salinity>(this);
        bind<IMC::ScienceSensors>(this);

        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        // If sensor is on and Neptus wants to turn it off.
        if(m_active && paramChanged(m_args.activate) && getEntityState() == IMC::EntityState::ESTA_NORMAL)
        {
          Memory::clear(m_handle);
          Memory::clear(m_data_h);
          m_gpio->setValue(1);
          // Sensor is not active.
          m_active = false;
          trace("onUpdateParameters ADCP OFF");
          m_intervals.setTop(0.0);
          m_duration.setTop(0.0);
        }

        // If sensor is off and Neptus wants to turn it on.
        if(!m_active && paramChanged(m_args.activate) && getEntityState() == IMC::EntityState::ESTA_NORMAL)
        {
          // Turn sensor on.
          m_gpio->setValue(0);
          // Wait 2 seconds and initialize.
          Delay::wait(20.0);
          if(!initializeSensor())
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
          m_active = true;
          trace("onUpdateParameters ADCP ON");
        }
        
        if (m_active && getEntityState() == IMC::EntityState::ESTA_NORMAL)
        {
          if (paramChanged(m_args.ncells) || paramChanged(m_args.cellsize) ||
              paramChanged(m_args.nping) || paramChanged(m_args.blank))
            initializeSensor();
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        m_entities.clear();
        for (unsigned i = 0; i < m_args.nbeam; i++)
          m_entities.push_back(reserveEntity(String::str("%s - Beam %u", getEntityLabel(), i)));

        m_entity = reserveEntity("ADCP Filtered");
      }

      //! Resolve entity identifiers.
      void
      onEntityResolution(void)
      {
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
        consumeMessages();

        try
        {
          // GPIO init
          m_gpio = new Hardware::GPIO(248);
          m_gpio->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
          
          // Test if sensor is active
          if(m_active)
          {
            trace("onResourceAcquisition ADCP ON");
            // turn on
            m_gpio->setValue(0);
            // Need some time to start connection.
            Delay::wait(20.0);
            if(!initializeSensor())
              throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
          }
          else
          {
            trace("onResourceAcquisition ADCP OFF");
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
        // Attempt to open socket
        if(!openSocket())
        {
          spew("ADCP cannot open socket.");
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        // Driver init
        if (isConnected())
        {
          m_driver->reset(m_args.nping, m_args.ncells,
                          m_args.cellsize, m_args.blank);

          std::string error;
          if (!m_driver->setup(error))
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)) + error, 5);

          m_wdog.setTop(c_data_timeout);
        }
        else
          return false;
        
        trace("ADCP driver connected");

        if (isParserOn())
        {
          m_parser->set( m_args.ncells, m_args.cellsize, m_args.blank, m_args.nbeam);
        }
        else
          return false;

        return true;
      }

      //! Check if our IO device is a TCP socket.
      //! @return true if IO device is a TCP socket, false otherwise.
      bool
      openSocket(void)
      {
        char addr[128] = {0};
        unsigned port = 0;

        if (std::sscanf(m_args.io_dev.c_str(), "tcp://%[^:]:%u", addr, &port) != 2)
          return false;

        // Create two TCP sockets, the first for command link,
        // the second to parse the data coming from the device.
        TCPSocket* sock = new TCPSocket;
        sock->setNoDelay(false);
        sock->setSendTimeout(10.0);
        sock->setReceiveTimeout(10.0);      
        sock->connect(addr, port);
        m_handle = sock;       

        TCPSocket* data_sock = new TCPSocket;
        data_sock->setNoDelay(false);
        data_sock->setSendTimeout(10.0);
        data_sock->setReceiveTimeout(10.0);
        data_sock->connect(addr, port + c_data_port);
        m_data_h = data_sock; 
        m_serial = false;
      
        setup();
        if (!m_driver->login())
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);

        return true;
      }

      //! Test if the task can request activation.
      //! @return true if we can request activation, false otherwise.
      bool
      canRequestActivation(void)
      {
        return !(isActive() || isActivating());
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_gpio);
        Memory::clear(m_driver);
        Memory::clear(m_parser);
        Memory::clear(m_handle);
        
        if (!m_serial)
          Memory::clear(m_data_h);
      }

      //! Test if connection exists with device.
      //! @return true if a connection exists, false otherwise.
      bool
      isConnected(void)
      {
        return m_driver != NULL;
      }

      //! Test if we have an active parser.
      //! @return true if we have a parser, false otherwise.
      bool
      isParserOn(void)
      {
        return m_parser != NULL;
      }

      void
      consume(const IMC::Salinity* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getSourceEntity() != m_salinity_eid)
          return;

        if (isConnected())
        {
          m_driver->setSalinity(msg->value);
          m_wdog.reset();
        }
      }

      //! This derived task has direct log control.
      //! @return true if it has log control, false otherwise.
      bool
      enableLogControl(void)
      {
        return true;
      }

      //! Open log file.
      //! @param[in] path path to log file.
      void
      onOpenLog(const DUNE::FileSystem::Path& path)
      {
        if (isParserOn())
          m_parser->openLog(m_ctx.dir_log / path);
      }

      //! Close log file.
      void
      onCloseLog(void)
      {
        if (isParserOn())
          m_parser->closeLog();
      }

      //! Setup driver and parser.
      void
      setup(void)
      {
        m_driver = new Driver(this, m_handle, m_args.miavg, m_args.avg_enable, m_args.vert_dir,
                                              m_args.burst_enable, m_args.miburst, m_args.diburst,
                                              m_args.sound_vel, m_args.logfilename, 
                                              m_args.ncells, m_args.cellsize, m_args.blank, m_args.coord,
                                              m_args.powerlevel, m_args.ainterval, m_args.vrange, m_args.nping,
                                              m_args.nbeam, m_args.bandwidth);


        m_parser = new Parser( this, m_data_h, m_args.pos, m_args.ang, m_entities, m_entity,
                               m_args.ncells, m_args.cellsize, m_args.blank, m_args.nbeam );
      }

      void
      consume(const IMC::ScienceSensors* msg)
      {
        if (msg->getSource() != getSystemId())
        {
          // Message is from L2.
          m_science = *msg;
          
          if(m_science.adcp == 2)
          {
            // implement sensor rebooting.
          } else if(!m_active && m_science.adcp == 0)
          {
            // Turn sensor on.
            m_gpio->setValue(0);
            // Wait 2 seconds and initialize.
            Delay::wait(20.0);
            if(initializeSensor())
            {
              // Sensor is active.
              m_active = true;
              trace("from Iridium: ADCP ON");
              if(m_science.adcp_dur > 0.0)
              {
                m_duration.setTop(m_science.adcp_dur);
                trace("Sampling duration set: %d",m_science.adcp_dur);
              } else
              {
                trace("Sampling duration NOT set");
                m_duration.setTop(0.0);
              }
            }
            else
            {
              trace("Could not initialize ADCP sensor");
            }
          } else if(m_science.adcp == 1)
          {
            m_gpio->setValue(1);
            // Sensor is not active.
            m_active = false;
            m_intervals.setTop(0.0);
            m_duration.setTop(0.0);
            trace("from Iridium: ADCP OFF.");
          }

          // if m_science.eco == 3 -> do nothing.
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        // Wait until setup is done
        while(getEntityState() != IMC::EntityState::ESTA_NORMAL);

        while (!stopping())
        {
          if(m_active)
          {
            // Get data from ADCP
            if (!isParserOn())
              throw RestartNeeded(DTR("Failure to initialize ADCP parser"), 5);

            if (m_parser->readData())
              m_wdog.reset();

            if (m_wdog.overflow())
            {
              spew("Data missing");
              throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
            }
          }

          // If sensor is active and sampling period expires.
          if(m_active && m_duration.getTop()!=0.0 && m_duration.overflow())
          {
            m_gpio->setValue(1);
            // Sensor is not active.
            m_active = false;
            trace("ECOPuck finished sampling: turning OFF");
            
            if(m_science.eco_fr > 0.0) //Samplings are periodical, not just one.
              m_intervals.setTop(m_science.adcp_fr);
          }

          // If sensor is inactive and sleeping period expires.
          if(!m_active && m_intervals.getTop()!=0.0 && m_intervals.overflow())
          {
            // Turn sensor on.
            m_gpio->setValue(0);
            // Wait 2 seconds and initialize.
            Delay::wait(20.0);
            if(initializeSensor())
            {
              // Sensor is active.
              m_active = true;
              trace("Periodical: ADCP ON");
              m_duration.reset();
              m_duration.setTop(m_science.adcp_dur);
            }
            else
            {
              trace("Could not initialize ADCP sensor");
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
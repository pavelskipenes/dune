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
// Author: Alberto Dallolio                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Alberto Dallolio
  namespace AirMar120WX
  {
    using DUNE_NAMESPACES;

    //! Maximum buffer size.
    static const int c_bfr_size = 512;

    //! Task arguments.
    struct Arguments
    {
      //! GPIO toggle.
      bool state;
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Timeout for waiting UART data
      double uart_timeout;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! Serial device port
      std::string uart_dev;
      //! Serial device baud
      unsigned uart_baud;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Save device raw data.
      IMC::DevDataText m_dev_data;
      //! Received data line.
      std::string m_line;
      // Air pressure message
      IMC::Pressure m_pressure;
      // Air temperature message
      IMC::Temperature m_temperature;
      // Wind speed and angle in regard to the vessel bow/centerline
      IMC::VesselWind m_vessel_wind;
      // Relative Wind speed and angle
      IMC::RelativeWind m_relative_wind;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("/dev/ttyUSB0")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("4800")
        .description("Serial port baud rate");

        param("Serial Port - Timeout", m_args.uart_timeout)
        .defaultValue("5.0")
        .description("Timeout for waiting UART data");

        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if(getEntityState() == IMC::EntityState::ESTA_NORMAL && paramChanged(m_args.uart_dev))
        {
          onResourceRelease();
          onResourceAcquisition();
        }
        if(getEntityState() == IMC::EntityState::ESTA_NORMAL && paramChanged(m_args.uart_baud))
        {
          onResourceRelease();
          onResourceAcquisition();
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        m_pressure.setSourceEntity(reserveEntity("Weather Station Pressure"));
        m_temperature.setSourceEntity(reserveEntity("Weather Station Temperature"));
        m_vessel_wind.setSourceEntity(reserveEntity("Weather Station Vessel Wind"));
        m_relative_wind.setSourceEntity(reserveEntity("Weather Station Relative Wind"));
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
          m_wdog.reset();
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      readUART()
      {
        m_line.clear();
        char bfr[c_bfr_size];

        try{
          size_t rv = m_uart->readString(bfr, sizeof(bfr));

          //! Creates a string from the buffer - to be processed.
          for (size_t i = 0; i < rv; ++i)
          {
            if (bfr[i] == '\n')
            {
              // debug("recv: %s\n",m_line.c_str());
              m_wdog.setTop(m_args.uart_timeout);
              return;
            }
            else
            {
              m_line.push_back(bfr[i]);
            }
          }
        }
        catch (std::exception& e)
        {
          err("%s", e.what());
          m_line.clear();
        }
      }

      //! Helper function to get a certain token from a string  
      std::string getToken(std::string toParse, std::string delim, int n_token = 1)
      {
          std::string token;
          for (int i = 0; i<n_token; i++)
          {
              token = toParse.substr(0, toParse.find(delim));
              toParse.erase(0, toParse.find(delim) + delim.length());
          }
          return token;
      }

      //! Process received NMEA message checksum
      bool
      processCS(std::string nmea)
      {
        uint8_t cksCalc, cksFromDev;
        std::string nmea_clean = nmea.substr(1, nmea.size() - 5);
        cksFromDev = strtol(getToken(nmea, "*", 2).c_str(), NULL, 16);
        cksCalc = XORChecksum::compute((uint8_t*) nmea_clean.data(), nmea_clean.size(),0);
        // debug("nmea_clean: %s", nmea_clean.c_str());
        // debug("cksCalc and cksFromDev: %d | %d", cksCalc, cksFromDev);
        if (cksCalc == cksFromDev)
            return true;
        else
        {
          war("%s", DTR(Status::getString(Status::CODE_INVALID_CHECKSUM)));
          return false;
        }
      }

      //! Parse received NMEA string
      void
      processNMEA()
      {
        // If for some reason nothing was received
        if (m_line.length() == 0)
          return;

        // If message passes checksum test
        if(processCS(m_line))
        {
          double tstamp = Clock::getSinceEpoch();
          m_dev_data.value.assign(sanitize(m_line));
          m_dev_data.setTimeStamp(tstamp);
          dispatch(m_dev_data, DF_KEEP_TIME);

          std::string sentenceID = getToken(m_line, ",", 1);
          
          // Metereological data
          if(sentenceID.compare("$WIMDA") == 0)
          {
            double pressure = std::atof(getToken(m_line, ",", 4).c_str());
            double temp = std::atof(getToken(m_line, ",", 6).c_str());
            m_pressure.value = pressure;
            m_temperature.value = temp;
            dispatch(m_pressure);
            dispatch(m_temperature);
            spew("Metereological data - Pressure: %.3f bar | Temperature: %.1f degC", pressure, temp);
          }
          // Relative wind direction and speed
          if(sentenceID.compare("$WIMWV") == 0)
          {
            double angle = std::atof(getToken(m_line, ",", 2).c_str());
            std::string ref = getToken(m_line, ",", 3);
            double speed = std::atof(getToken(m_line, ",", 4).c_str());
            m_vessel_wind.angle = angle;
            m_vessel_wind.reference = ref;
            m_vessel_wind.speed = speed * 0.514;  // From knots to m/s
            dispatch(m_vessel_wind);
            spew("Vessel wind dir. and speed - Angle: %.1f deg | Ref: %s | Speed: %.1f m/s", angle, ref.c_str(), speed);
          }
          // Relative wind direction and speed
          if(sentenceID.compare("$WIVWR") == 0)
          {
            double angle = std::atof(getToken(m_line, ",", 2).c_str());
            std::string dir = getToken(m_line, ",", 3);
            double speed = std::atof(getToken(m_line, ",", 6).c_str());
            m_relative_wind.direction = angle;
            m_relative_wind.speed = speed;
            dispatch(m_relative_wind);
            spew("Relative wind dir. and speed - Angle: %.1f deg | Direction: %s | Speed: %.1f m/s", angle, dir.c_str(), speed);
          }
        }      
      }

      //! Main loop.
      void
      onMain(void)
      {
        // Wait for initialization
        while(getEntityState() != IMC::EntityState::ESTA_NORMAL);
        
        m_wdog.setTop(m_args.uart_timeout);
        while (!stopping())
        {
          // Get serial event, read UART and process NMEA message
          if(Poll::poll(*m_uart, 0.5))
          {
            readUART();
            processNMEA();
          }

          // Not received communication for a while
          if (m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
          }

          waitForMessages(0.1);
        }
      }
    };
  }
}

DUNE_TASK

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
// Author: Alberto Dallolio & Renan Maidana                                 *
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
    //! Minimum number of fields of GGA sentence.
    static const unsigned c_gga_fields = 15;
    //! Minimum number of fields of VTG sentence.
    static const unsigned c_vtg_fields = 9;

    //! Task arguments.
    struct Arguments
    {
      //! Order of sentences.
      std::vector<std::string> stn_order;
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
      //! GPS Fix message.
      IMC::GpsFix m_fix;
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
      // Relative Wind speed and angle
      IMC::RelativeWind m_relative_wind;
      // Relative Wind speed and angle
      IMC::AbsoluteWind m_abs_wind;
      // Angular velocities from Airmar.
      IMC::AngularVelocity m_ang_vel;
      // EulerAngles from Airmar.
      IMC::EulerAngles m_eul_ang;
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

         param("Sentence Order", m_args.stn_order)
        .defaultValue("")
        .description("Sentence order");

        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);

        // Initialize messages.
        clearMessages();

        //bind<IMC::GpsFix>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if(getEntityState() == IMC::EntityState::ESTA_NORMAL && 
          (paramChanged(m_args.uart_dev) || paramChanged(m_args.uart_baud)))
        {
          onResourceRelease();
          onResourceAcquisition();
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        //m_pressure.setSourceEntity(reserveEntity("Weather Station"));
        //m_temperature.setSourceEntity(reserveEntity("Weather Station"));
        //m_relative_wind.setSourceEntity(reserveEntity("Weather Station"));
        //m_relative_wind.setSourceEntity(reserveEntity("Weather Station"));
        //m_fix.setSourceEntity(reserveEntity("AirMar120WX"));
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
              debug("recv: %s\n",m_line.c_str());
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

          // GPS DATA.
          if(sentenceID.compare("$GPGGA") == 0 || sentenceID.compare("$GPVTG") == 0)
            processSentence(m_line);
          
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

            // Extract absolute/true wind.
            m_abs_wind.dir = std::atof(getToken(m_line, ",", 14).c_str());
            m_abs_wind.speed = std::atof(getToken(m_line, ",", 20).c_str());

            debug("RWA:%.3f, RWS:%.3f, AWA:%.3f, AWS:%.3f",m_relative_wind.angle,m_relative_wind.speed,m_abs_wind.dir,m_abs_wind.speed);
            dispatch(m_abs_wind);
          }

          // Relative wind direction and speed
          if(sentenceID.compare("$WIMWV") == 0)
          {
            double angle = std::atof(getToken(m_line, ",", 2).c_str());
            std::string ref = getToken(m_line, ",", 3);
            double speed = std::atof(getToken(m_line, ",", 4).c_str());
            m_relative_wind.angle = angle;
            m_relative_wind.speed = speed * 0.514;  // From knots to m/s
            dispatch(m_relative_wind);
            debug("Relative wind direction and speed - Angle: %.1f deg | Speed: %.1f m/s", angle, speed);

            // Compute heading.
            double m_heading = m_abs_wind.dir - m_relative_wind.angle;
            m_eul_ang.psi = normalize_angle_PIPI(Angles::radians(m_heading));
            debug("Computed USV heading: %.3f",Angles::degrees(m_eul_ang.psi));

            /*if(m_fix.sog < 0.1) // m/s
            {
              // Relative and true winds can be considered equal.
              m_abs_wind.dir = normalize_angle_360(m_heading) + Angles::radians(m_relative_wind.angle);
              if(m_abs_wind.dir > 2*M_PI)
                m_abs_wind.dir = m_abs_wind.dir - 2*M_PI;
              m_abs_wind.dir = Angles::degrees(m_abs_wind.dir);
              m_abs_wind.speed = m_relative_wind.speed;
            }
            else
            {
              // Compute theoretical wind: if vessel was stationary.
              double th_wind_dir;
              double th_wind_speed = std::sqrt(std::pow(m_relative_wind.speed,2) + std::pow(m_fix.sog,2) - 2*m_relative_wind.speed*m_fix.sog*std::cos(m_relative_wind.angle));
              if(m_relative_wind.angle > 0.0 && m_relative_wind.angle <= 180.0)
                th_wind_dir = std::acos((m_relative_wind.speed*std::cos(m_relative_wind.angle) - m_fix.sog)/th_wind_speed);
              else
                th_wind_dir = -std::acos((m_relative_wind.speed*std::cos(m_relative_wind.angle) - m_fix.sog)/th_wind_speed);

              // Compute absolute/true wind based on theoretical wind.
              m_abs_wind.speed = th_wind_speed;
              m_abs_wind.dir = normalize_angle_360(m_heading) + Angles::radians(m_relative_wind.angle);
              if(m_abs_wind.dir > 2*M_PI)
                m_abs_wind.dir = m_abs_wind.dir - 2*M_PI;
              m_abs_wind.dir = Angles::degrees(m_abs_wind.dir);
            }

            spew("Heading:%f, RWA:%f, AWA:%f",Angles::degrees(m_heading),m_relative_wind.angle,m_abs_wind.dir);
            dispatch(m_abs_wind);*/
          }

          // Relative wind direction and speed
          if(sentenceID.compare("$TIROT") == 0)
          {
            std::string validity = getToken(m_line, ",", 3);
            if(validity.compare("A"))
            {
              double rate_of_turn = std::atof(getToken(m_line, ",", 2).c_str()); // in degrees/min
              m_ang_vel.z = rate_of_turn*(M_PI)/(180*60);

              dispatch(m_ang_vel);
            }
          }

          // Relative wind direction and speed
          if(sentenceID.compare("$YXXDR") == 0)
          {
            std::string validity = getToken(m_line, ",", 2);
            if(validity.compare("A")==0)
            {
              double theta = std::atof(getToken(m_line, ",", 3).c_str());
              m_eul_ang.theta = (theta*M_PI)/180.0;
              double phi = std::atof(getToken(m_line, ",", 7).c_str());
              m_eul_ang.phi = (phi*M_PI)/180.0;
              
              dispatch(m_eul_ang);
            }

          }
        }
      }

      //! Process sentence.
      //! @param[in] line line.
      void
      processSentence(const std::string line)
      {
        // Discard leading noise.
        size_t sidx = 0;
        for (sidx = 0; sidx < line.size(); ++sidx)
        {
          if (line[sidx] == '$')
            break;
        }

        // Discard trailing noise.
        size_t eidx = 0;
        for (eidx = line.size() - 1; eidx > sidx; --eidx)
        {
          if (line[eidx] == '*')
            break;
        }

        if (sidx >= eidx)
          return;

        // Compute checksum.
        uint8_t ccsum = 0;
        for (size_t i = sidx + 1; i < eidx; ++i)
          ccsum ^= line[i];

        // Validate checksum.
        unsigned rcsum = 0;
        if (std::sscanf(&line[0] + eidx + 1, "%02X", &rcsum) != 1)
        {
          trace("No checksum found, will not parse sentence.");
          return;
        }

        if (ccsum != rcsum)
        {
          trace("Checksum field does not match computed checksum, will not "
                "parse sentence.");
          return;
        }

        // Split sentence
        std::vector<std::string> parts;
        String::split(line.substr(sidx + 1, eidx - sidx - 1), ",", parts);

        if (std::find(m_args.stn_order.begin(), m_args.stn_order.end(), parts[0]) != m_args.stn_order.end())
          interpretSentence(parts);
      }

      //! Interpret given sentence.
      //! @param[in] parts vector of strings from sentence.
      void
      interpretSentence(std::vector<std::string>& parts)
      {
        if (parts[0] == m_args.stn_order.front())
        {
          clearMessages();
          m_fix.setTimeStamp();
          m_fix.setDestinationEntity(resolveEntity("NavManager"));
        }

        if (hasNMEAMessageCode(parts[0], "VTG"))
        {
          interpretVTG(parts);
        } else if (hasNMEAMessageCode(parts[0], "GGA"))
        {
          interpretGGA(parts);
        }

        if (parts[0] == m_args.stn_order.back())
        {
          m_wdog.reset();
          m_fix.setDestination(getSystemId());
          m_fix.setDestinationEntity(resolveEntity("NavManager"));
          dispatch(m_fix);
        }
      }

      //! Interpret VTG sentence (course over ground).
      //! @param[in] parts vector of strings from sentence.
      void
      interpretVTG(const std::vector<std::string>& parts)
      {
        if (parts.size() < c_vtg_fields)
        {
          war(DTR("invalid VTG sentence"));
          return;
        }

        if (readNumber(parts[1], m_fix.cog))
        {
          m_fix.cog = Angles::normalizeRadian(Angles::radians(m_fix.cog));
          m_fix.validity |= IMC::GpsFix::GFV_VALID_COG;
        }

        if (readNumber(parts[7], m_fix.sog))
        {
          m_fix.sog *= 1000.0f / 3600.0f;
          m_fix.validity |= IMC::GpsFix::GFV_VALID_SOG;
        }
      }

      //! Interpret GGA sentence (GPS fix data).
      //! @param[in] parts vector of strings from sentence.
      void
      interpretGGA(const std::vector<std::string>& parts)
      {
        if (parts.size() < c_gga_fields)
        {
          war(DTR("invalid GGA sentence"));
          return;
        }

        int quality = 0;
        readDecimal(parts[6], quality);
        if (quality == 1)
        {
          m_fix.type = IMC::GpsFix::GFT_STANDALONE;
          m_fix.validity |= IMC::GpsFix::GFV_VALID_POS;
        }
        else if (quality == 2)
        {
          m_fix.type = IMC::GpsFix::GFT_DIFFERENTIAL;
          m_fix.validity |= IMC::GpsFix::GFV_VALID_POS;
        }

        if (readLatitude(parts[2], parts[3], m_fix.lat)
            && readLongitude(parts[4], parts[5], m_fix.lon)
            && readNumber(parts[9], m_fix.height)
            && readDecimal(parts[7], m_fix.satellites))
        {
          // Convert altitude above sea level to altitude above ellipsoid.
          double geoid_sep = 0;
          if (readNumber(parts[11], geoid_sep))
            m_fix.height += geoid_sep;

          // Convert coordinates to radians.
          m_fix.lat = Angles::radians(m_fix.lat);
          m_fix.lon = Angles::radians(m_fix.lon);
          m_fix.validity |= IMC::GpsFix::GFV_VALID_POS;
        }
        else
        {
          m_fix.validity &= ~IMC::GpsFix::GFV_VALID_POS;
        }

        if (readNumber(parts[8], m_fix.hdop))
          m_fix.validity |= IMC::GpsFix::GFV_VALID_HDOP;
      }

      double normalize_angle_360(double angle)
      {
        angle = std::fmod(angle,2*M_PI);
        if (angle < 0)
          angle += 2*M_PI;
        return angle;
      }

      double normalize_angle_PIPI(double angle)
      {
        angle = std::fmod(angle+M_PI,2*M_PI) - M_PI;
        return angle;
      }

      //! Read number from input string.
      //! @param[in] str input string.
      //! @param[out] dst number.
      //! @return true if successful, false otherwise.
      template <typename T>
      bool
      readNumber(const std::string& str, T& dst)
      {
        return castLexical(str, dst);
      }

      //! Read latitude from string.
      //! @param[in] str input string.
      //! @param[in] h either North (N) or South (S).
      //! @param[out] dst latitude.
      //! @return true if successful, false otherwise.
      bool
      readLatitude(const std::string& str, const std::string& h, double& dst)
      {
        int degrees = 0;
        double minutes = 0;

        if (std::sscanf(str.c_str(), "%02d%lf", &degrees, &minutes) != 2)
          return false;

        dst = Angles::convertDMSToDecimal(degrees, minutes);

        if (h == "S")
          dst = -dst;

        return true;
      }

      //! Read longitude from string.
      //! @param[in] str input string.
      //! @param[in] h either West (W) or East (E).
      //! @param[out] dst longitude.
      //! @return true if successful, false otherwise.
      double
      readLongitude(const std::string& str, const std::string& h, double& dst)
      {
        int degrees = 0;
        double minutes = 0;

        if (std::sscanf(str.c_str(), "%03d%lf", &degrees, &minutes) != 2)
          return false;

        dst = Angles::convertDMSToDecimal(degrees, minutes);

        if (h == "W")
          dst = -dst;

        return true;
      }

      //! Read decimal from input string.
      //! @param[in] str input string.
      //! @param[out] dst decimal.
      //! @return true if successful, false otherwise.
      template <typename T>
      bool
      readDecimal(const std::string& str, T& dst)
      {
        unsigned idx = 0;
        while (str[idx] == '0')
          ++idx;

        return castLexical(std::string(str, idx), dst);
      }

      void
      clearMessages(void)
      {
        m_fix.clear();
      }

      bool
      hasNMEAMessageCode(const std::string& str, const std::string& code)
      {
        return (String::startsWith(str, "G") || String::startsWith(str, "H")) && String::endsWith(str, code);
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
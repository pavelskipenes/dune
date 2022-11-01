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
// Author: José Braga                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <algorithm>
#include <cstddef>
#include <sstream>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// LibAIS headers.
#include <ais/ais.h>

// Local headers.
#include "ShipTypeCode.hpp"

namespace Sensors
{
  //! Device driver for AIS receivers.
  namespace AIS
  {
    using DUNE_NAMESPACES;

    //! Read buffer size.
    static const size_t c_read_buffer_size = 82;
    //! NMEA 5 body index.
    static const size_t c_nmea5_body_index = 15;
    //! NMEA 5 trailing chunk in first fragment.
    static const size_t c_nmea5_trail = 5;
    //! Line termination character.
    static const char c_line_term = '\n';
    //! Minimum number of fields of RMC sentence.
    static const unsigned c_rmc_fields = 12;
    //! Minimum number of fields of GGA sentence.
    static const unsigned c_gga_fields = 15;
    //! Minimum number of fields of ZDA sentence.
    static const unsigned c_zda_fields = 7;

    //! %Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Order of sentences.
      std::vector<std::string> stn_order;
      //! Input timeout in seconds.
      float inp_tout;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      IO::Handle* m_handle;
      //! Task arguments.
      Arguments m_args;
      //! Current line.
      std::string m_line;
      //! Saved first part of NMEA 5 class message.
      std::string m_nmea5_fg;
      //! Waiting fragment.
      bool m_nmea5_wait_fg;
      //! Vehicle Type.
      std::map<int, std::string> m_systems;
      //! AIS Gps Fix.
      IMC::GpsFix own_vessel_fix;
      //! Input watchdog.
      Time::Counter<float> m_wdog;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_handle(NULL),
        m_nmea5_wait_fg(false)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("38400")
        .description("Serial port baud rate");

        param("Sentence Order", m_args.stn_order)
        .defaultValue("")
        .description("Sentence order");

        param("Input Timeout", m_args.inp_tout)
        .units(Units::Second)
        .defaultValue("4.0")
        .minimumValue("0.0")
        .description("Input timeout");

        // Initialize messages.
        clearMessages();
      }

      void
      onResourceAcquisition(void)
      {
        try
        {
          if (!openSocket()) // Check if instead of serial is a tcp port
          {
            m_handle = new SerialPort(m_args.uart_dev, m_args.uart_baud);
            m_handle->flush();
          }
        }
        catch (...)
        {
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        //own_vessel_fix.setSourceEntity(reserveEntity("AIS"));
      }

      void
      onResourceInitialization(void)
      {
        m_wdog.setTop(m_args.inp_tout);
      }

      //! Check if we have a TCP socket as device input argument.
      //! @return true if it is a TCP socket, false otherwise.
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
        Memory::clear(m_handle);
      }

      void
      clearMessages(void)
      {
        own_vessel_fix.clear();
      }

      //! Process AIS NMEA message.
      void
      process(std::string nmea_msg)
      {
        // Remove carriage return.
        nmea_msg.erase(std::remove(nmea_msg.begin(), nmea_msg.end(), '\r'), nmea_msg.end());

        // Log NMEA msg.
        IMC::DevDataText text;
        text.value = nmea_msg;
        dispatch(text);

        // Get body of NMEA message.
        //trace("AIS RAW MESSAGE: %s", nmea_msg.c_str());

        //! Check if message is from own ship or another.
        std::string init = nmea_msg.substr(0,6);
        //trace("INIT %s", init.c_str());

        std::string nmea_payload = GetBody(nmea_msg.c_str());

        //trace("AIS MESSAGE PAYLOAD %s", nmea_payload.c_str());

        if(init.compare("!AIVDM")==0)
        {
          // Position Report Class A.
          if ((nmea_payload[0] == '1') ||
              (nmea_payload[0] == '2') ||
              (nmea_payload[0] == '3'))
          {
            // AIS message.
            IMC::AisInfo ais_msg;
            
            // Create AIS message from class.
            Ais1_2_3 msg(nmea_payload.c_str(), GetPad(nmea_msg));

            ais_msg.msg_type.push_back(nmea_payload[0]);

            // We are able to send a message with ship information.
            IMC::RemoteSensorInfo rsi;

            std::ostringstream oss;
            oss << msg.mmsi;
            rsi.id = static_cast<std::ostringstream*>(&oss)->str();
            
            //rsi.id = std::to_string(msg.mmsi); //static_cast<std::ostringstream*>(&(std::ostringstream() << msg.mmsi))->str();

            // Find ship type.
            std::map<int, std::string>::iterator itr = m_systems.find(msg.mmsi);
            if (itr != m_systems.end())
            {
              ais_msg.sensor_class = itr->second;
              rsi.sensor_class = itr->second;
            }

            rsi.lat = Angles::radians(msg.y);
            rsi.lon = Angles::radians(msg.x);
            rsi.heading = Angles::radians(msg.cog);
            dispatch(rsi);

            ais_msg.mmsi = std::to_string(msg.mmsi);
            //ais_msg.callsign = "NO CALLSIGN";
            //ais_msg.name = "NO NAME";
            ais_msg.nav_status = msg.nav_status;
            //ais_msg.type_and_cargo = 000;
            ais_msg.lat = Angles::radians(msg.y);
            ais_msg.lon = Angles::radians(msg.x);
            ais_msg.course = Angles::radians(msg.cog);
            ais_msg.speed = msg.sog;
            double distance = WGS84::distance(own_vessel_fix.lat, own_vessel_fix.lon, 0, ais_msg.lat, ais_msg.lon, 0);
            ais_msg.dist = distance;

            dispatch(ais_msg);
            
            // Navigational status has to be interpreted here or in CAS.
            //trace("AIS1_2_3: %d %d %f %f %f %f", msg.mmsi, msg.nav_status, c_degrees_per_radian*msg.y, c_degrees_per_radian*msg.x, c_degrees_per_radian*msg.cog, msg.sog);

            //spew("PAYLOAD AIS1_2_3: %s", nmea_payload.c_str());
            //spew("RSI - Vessel(mmsi): %s (lon,lat,heading, speed): %f %f %0.2f %0.2f", rsi.id.c_str(),  c_degrees_per_radian*rsi.lon, c_degrees_per_radian*rsi.lat ,c_degrees_per_radian*rsi.heading, msg.sog);

          } else if (nmea_payload[0] == '5' && !m_nmea5_wait_fg) // Static and Voyage Related Data, first fragment.
          {
            spew("AIS5 FIRST PART: %s", nmea_msg.c_str());
            nmea_msg.erase(nmea_msg.size() - c_nmea5_trail - 1, c_nmea5_trail);
            m_nmea5_fg = nmea_msg;
            m_nmea5_wait_fg = true;
            return;
          } else if(nmea_payload[0] != '5' && nmea_payload[0] != '1' && nmea_payload[0] != '2' && nmea_payload[0] != '3')
          {
            trace("DO NOT KNOW WHAT IT IS: %s", nmea_msg.c_str());
            // AIS message.
            //IMC::AisInfo ais_msg;
            
            // Create AIS message from class.
            //Ais24 msg(nmea_payload.c_str(), GetPad(nmea_msg));

            //trace("AIS24: %f %f %f %f", msg.dim_a, msg.dim_b, msg.dim_c, msg.dim_d);
          }
        } else if(init.compare("$GPRMC")==0 || init.compare("$GPGGA")==0 || init.compare("$GPZDA")==0)
        {
          processSentence(nmea_msg);
          //trace("AIS GPS %s", nmea_msg.c_str());
        }

        // Static and Voyage Related Data, second fragment.
        if (m_nmea5_wait_fg)
        {
          nmea_msg.erase(0, c_nmea5_body_index);
          nmea_msg = m_nmea5_fg.append(nmea_msg);
          nmea_payload = GetBody(nmea_msg.c_str());
          spew("AIS5 SECOND PART: %s", nmea_msg.c_str());
          //trace("PAYLOAD AIS5: %s", nmea_payload.c_str());
        }

        // Static and Voyage Related Data, second fragment.
        if (m_nmea5_wait_fg)
        {
          // AIS message.
          IMC::AisInfo ais_msg;

          m_nmea5_wait_fg = false;
          Ais5 msg(nmea_payload.c_str(), GetPad(nmea_msg));

          ais_msg.msg_type.push_back(nmea_payload[0]);

          // Add system MMSI and Type if not existent.
          std::map<int, std::string>::iterator itr = m_systems.find(msg.mmsi);
          if (itr != m_systems.end())
            return;
          
          ais_msg.mmsi = std::to_string(msg.mmsi);
          ais_msg.callsign = msg.callsign;
          ais_msg.name = msg.name;
          //ais_msg.nav_status = 000;
          ais_msg.type_and_cargo = msg.type_and_cargo;
          ais_msg.a = msg.dim_a;
          ais_msg.b = msg.dim_b;
          ais_msg.c = msg.dim_c;
          ais_msg.d = msg.dim_d;
          ais_msg.draught = msg.draught;
          //double distance = WGS84::distance(own_vessel_fix.lat, own_vessel_fix.lon, 0, ais_msg.lat, ais_msg.lon, 0);
          //ais_msg.dist = distance;

          dispatch(ais_msg);

          trace("AIS5: %s %s %s %d %f %f %f %f %f", ais_msg.mmsi.c_str(), ais_msg.callsign.c_str(), ais_msg.name.c_str(), ais_msg.type_and_cargo, ais_msg.a, ais_msg.b, ais_msg.c, ais_msg.d, ais_msg.draught);

          m_systems[msg.mmsi] = ShipTypeCode::translate(msg.type_and_cargo);
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

      //! Interpret given sentence.
      //! @param[in] parts vector of strings from sentence.
      void
      interpretSentence(std::vector<std::string>& parts)
      {
        if (parts[0] == m_args.stn_order.front())
        {
          clearMessages();
          own_vessel_fix.setTimeStamp();
          //own_vessel_fix.setDestinationEntity(resolveEntity("NavManager"));
        }

        if (hasNMEAMessageCode(parts[0], "RMC"))
        {
          interpretRMC(parts);
        } else if (hasNMEAMessageCode(parts[0], "GGA"))
        {
          interpretGGA(parts);
        } else if (hasNMEAMessageCode(parts[0], "ZDA"))
        {
          interpretZDA(parts);
        }

        if (parts[0] == m_args.stn_order.back())
        {
          m_wdog.reset();
          own_vessel_fix.setDestination(getSystemId());
          own_vessel_fix.setDestinationEntity(resolveEntity("NavManager"));
          dispatch(own_vessel_fix);
        }
      }

      bool
      hasNMEAMessageCode(const std::string& str, const std::string& code)
      {
        return String::startsWith(str, "G") && String::endsWith(str, code);
      }

      //! Interpret RMC sentence (Recommended minimum specific GPS/Transit data).
      //! @param[in] parts vector of strings from sentence.
      void
      interpretRMC(const std::vector<std::string>& parts)
      {
        if (parts.size() < c_rmc_fields)
        {
          war(DTR("invalid RMC sentence"));
          return;
        }

        if(parts[2].compare("A")==0)
        {
          if (readLatitude(parts[3], parts[4], own_vessel_fix.lat)
            && readLongitude(parts[5], parts[6], own_vessel_fix.lon))
          {
            // Convert coordinates to radians.
            own_vessel_fix.lat = Angles::radians(own_vessel_fix.lat);
            own_vessel_fix.lon = Angles::radians(own_vessel_fix.lon);
            own_vessel_fix.validity |= IMC::GpsFix::GFV_VALID_POS;
          } else
          {
            own_vessel_fix.validity &= ~IMC::GpsFix::GFV_VALID_POS;
          }

          if (readNumber(parts[8], own_vessel_fix.cog))
          {
            own_vessel_fix.cog = Angles::normalizeRadian(Angles::radians(own_vessel_fix.cog));
            own_vessel_fix.validity |= IMC::GpsFix::GFV_VALID_COG;
          }

          if (readNumber(parts[7], own_vessel_fix.sog))
          {
            own_vessel_fix.sog *= 1000.0f / 3600.0f;
            own_vessel_fix.validity |= IMC::GpsFix::GFV_VALID_SOG;
          }
        } else
        {
          war(DTR("AIS GPS fix not valid!"));
          own_vessel_fix.validity &= ~IMC::GpsFix::GFV_VALID_POS;
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

        // Read time.
        if (readTime(parts[1], own_vessel_fix.utc_time))
          own_vessel_fix.validity |= IMC::GpsFix::GFV_VALID_TIME;

        int quality = 0;
        readDecimal(parts[6], quality);
        if (quality == 1)
        {
          own_vessel_fix.type = IMC::GpsFix::GFT_STANDALONE;
          own_vessel_fix.validity |= IMC::GpsFix::GFV_VALID_POS;
        }
        else if (quality == 2)
        {
          own_vessel_fix.type = IMC::GpsFix::GFT_DIFFERENTIAL;
          own_vessel_fix.validity |= IMC::GpsFix::GFV_VALID_POS;
        }

        if (readLatitude(parts[2], parts[3], own_vessel_fix.lat)
            && readLongitude(parts[4], parts[5], own_vessel_fix.lon)
            && readNumber(parts[9], own_vessel_fix.height)
            && readDecimal(parts[7], own_vessel_fix.satellites))
        {
          // Convert altitude above sea level to altitude above ellipsoid.
          double geoid_sep = 0;
          if (readNumber(parts[11], geoid_sep))
            own_vessel_fix.height += geoid_sep;

          // Convert coordinates to radians.
          own_vessel_fix.lat = Angles::radians(own_vessel_fix.lat);
          own_vessel_fix.lon = Angles::radians(own_vessel_fix.lon);
          own_vessel_fix.validity |= IMC::GpsFix::GFV_VALID_POS;
        }
        else
        {
          own_vessel_fix.validity &= ~IMC::GpsFix::GFV_VALID_POS;
        }

        if (readNumber(parts[8], own_vessel_fix.hdop))
          own_vessel_fix.validity |= IMC::GpsFix::GFV_VALID_HDOP;
      }

      //! Interpret ZDA sentence (UTC date and time).
      //! @param[in] parts vector of strings from sentence.
      void
      interpretZDA(const std::vector<std::string>& parts)
      {
        if (parts.size() < c_zda_fields)
        {
          war(DTR("invalid ZDA sentence"));
          return;
        }

        // Read time.
        if (readTime(parts[1], own_vessel_fix.utc_time))
          own_vessel_fix.validity |= IMC::GpsFix::GFV_VALID_TIME;

        // Read date.
        if (readDecimal(parts[2], own_vessel_fix.utc_day)
            && readDecimal(parts[3], own_vessel_fix.utc_month)
            && readDecimal(parts[4], own_vessel_fix.utc_year))
        {
          own_vessel_fix.validity |= IMC::GpsFix::GFV_VALID_DATE;
        }
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

      //! Read time from string.
      //! @param[in] str string.
      //! @param[out] dst time.
      //! @return true if successful, false otherwise.
      bool
      readTime(const std::string& str, float& dst)
      {
        unsigned h = 0;
        unsigned m = 0;
        unsigned s = 0;
        double sfp = 0;

        if (std::sscanf(str.c_str(), "%02u%02u%lf", &h, &m, &sfp) != 3)
        {
          if (std::sscanf(str.c_str(), "%02u%02u%02u", &h, &m, &s) != 3)
            return false;
        }

        dst = (h * 3600) + (m * 60) + s + sfp;

        return true;
      }

      void
      onMain(void)
      {
        std::vector<char> bfr;
        bfr.resize(c_read_buffer_size);

        while (!stopping())
        {
          consumeMessages();

          if (!Poll::poll(*m_handle, 0.5))
            continue;

          size_t rv = m_handle->read(&bfr[0], bfr.size());
          if (rv == 0)
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR("I/O error"), 5);
          }

          if (m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
          }

          for (size_t i = 0; i < rv; ++i)
          {
            // Detected line termination.
            if (bfr[i] == c_line_term)
            {
              process(m_line);
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
              m_line.clear();
            }
            else
            {
              m_line.push_back(bfr[i]);
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
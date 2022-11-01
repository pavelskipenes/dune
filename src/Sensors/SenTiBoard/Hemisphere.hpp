//***************************************************************************
// Copyright 2007-2018 Norwegian University of Science and Technology (NTNU)*
// Centre for Autonomous Marine Operations and Systems (AMOS)               *
// Department of Engineering Cybernetics (ITK)                              *
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
// Author: João Fortuna and Martin Sollie based on work by Sigurd Albrektsen*
//***************************************************************************

static const double GPS_UNIX_0 = 315964800.000;
static const double LEAPSECONDS = 18.0;  


#ifndef SENSORS_SENTIBOARD_HEMISPHERE_HPP_INCLUDED_
#define SENSORS_SENTIBOARD_HEMISPHERE_HPP_INCLUDED_

#define HEM_MSG_BIN_1 0x0001



// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "Messages.hpp"

// Import namespaces.
using DUNE_NAMESPACES;

namespace Sensors
{
  namespace SenTiBoard
  {
    class HemisphereBin1
    {
    public:
      uint8_t AgeOfDiff;
      uint8_t NumOfSats;
      uint16_t NavMode;
      uint16_t ExAgeOfDiff;
      double lon, lat, utc_time;
      float height, VNorth, VEast, VUp, StdDevResid;      
      int year, month, day;      
      
      
      HemisphereBin1(void):
        lon(0),
        lat(0),
        height(0),
        VNorth(0),
        VEast(0),
        VUp(0)
      {
        raw_lon = 0.0, raw_lat = 0.0, TOW = 0.0;
      }


      HemisphereBin1(Hemisphere msg)
      {
        length = msg.getLength();
        msg.getChecksum(ck);
        msg.getPayload(payload);

        deserializeFields();
      }

      const char*
      getName(void) const
      {
        return "Hemisphere-Bin-1";
      }

    private:
      uint16_t length;
      uint8_t payload[52];
      uint8_t ck;
      uint16_t Week;
      double TOW, raw_lon, raw_lat;


      void
      deserializeFields(void)
      {
        const uint8_t* bfr__ = payload;
        uint16_t size__ = length;
        bfr__ += IMC::deserialize(AgeOfDiff  , bfr__, size__);        
        bfr__ += IMC::deserialize(NumOfSats  , bfr__, size__);
        bfr__ += IMC::deserialize(Week       , bfr__, size__);
        bfr__ += IMC::deserialize(TOW        , bfr__, size__);
        bfr__ += IMC::deserialize(raw_lat    , bfr__, size__);
        bfr__ += IMC::deserialize(raw_lon    , bfr__, size__);
        bfr__ += IMC::deserialize(height     , bfr__, size__);
        bfr__ += IMC::deserialize(VNorth     , bfr__, size__);
        bfr__ += IMC::deserialize(VEast      , bfr__, size__);
        bfr__ += IMC::deserialize(VUp        , bfr__, size__);
        bfr__ += IMC::deserialize(StdDevResid, bfr__, size__);
        bfr__ += IMC::deserialize(NavMode    , bfr__, size__);
        bfr__ += IMC::deserialize(ExAgeOfDiff, bfr__, size__);

        convertRaw();
      }

      void
      convertRaw(void)
      {
        lon    = Angles::radians(raw_lon);
        lat    = Angles::radians(raw_lat); 
        
        // Convert GPS time to utc time
        utc_time = std::fmod(TOW-LEAPSECONDS,86400.0);
        double gps_unix_now = GPS_UNIX_0 + Week*604800 + TOW - LEAPSECONDS;
        std::string gps_unix_now_s = Time::Format::getTimeDate(gps_unix_now); 
        
        year = std::stoi(gps_unix_now_s.substr(0, 4));
        month = std::stoi(gps_unix_now_s.substr(5, 2));
        day = std::stoi(gps_unix_now_s.substr(8, 2));               
      }
    };
  }
}

#endif

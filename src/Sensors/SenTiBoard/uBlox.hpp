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
// Author: João Fortuna based on work by Sigurd Albrektsen                  *
//***************************************************************************

#ifndef SENSORS_SENTIBOARD_UBLOX_HPP_INCLUDED_
#define SENSORS_SENTIBOARD_UBLOX_HPP_INCLUDED_

#define UBX_MSG_NAV_PVT 0x0107

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "Messages.hpp"

// Import namespaces.
using DUNE_NAMESPACES;

namespace Sensors
{
  namespace SenTiBoard
  {
    class uBloxNavPvt
    {
    public:
      uint32_t iTOW;
      uint16_t year;
      uint8_t month, day, hour, min, sec;
      uint8_t flags_validity;
      uint32_t tAcc;
      int32_t nano;
      uint8_t fixType;
      uint8_t flags_fix_status;
      uint8_t flags_additional;
      uint8_t numSV;
      fp32_t pDOP;
      int32_t headVeh;
      int16_t magDec;
      uint16_t magAcc;
      fp32_t time_of_fix;
      fp64_t lon, lat;
      fp32_t height, hMSL, hAcc, vAcc, velN, velE, velD;
      fp32_t gSpeed, headMot, sAcc, headAcc;

      uBloxNavPvt(uBlox msg)
      {
        length = msg.getLength();
        msg.getChecksum(cka, ckb);
        msg.getPayload(payload);

        deserializeFields();
      }

      const char*
      getName(void) const
      {
        return "uBlox-NAV-PVT";
      }

    private:
      uint16_t length;
      uint8_t payload[1024];
      uint8_t cka, ckb;
      int32_t raw_lon, raw_lat, raw_height, raw_hMSL;
      uint32_t raw_hAcc, raw_vAcc;
      int32_t raw_velN, raw_velE, raw_velD, raw_gSpeed, raw_headMot;
      uint32_t raw_sAcc, raw_headAcc;
      uint16_t raw_pDOP;

      void
      deserializeFields(void)
      {
        const uint8_t* bfr__ = payload;
        uint16_t size__ = length;
        bfr__ += IMC::deserialize(iTOW, bfr__, size__);
        bfr__ += IMC::deserialize(year, bfr__, size__);
        bfr__ += IMC::deserialize(month, bfr__, size__);
        bfr__ += IMC::deserialize(day, bfr__, size__);
        bfr__ += IMC::deserialize(hour, bfr__, size__);
        bfr__ += IMC::deserialize(min, bfr__, size__);
        bfr__ += IMC::deserialize(sec, bfr__, size__);
        bfr__ += IMC::deserialize(flags_validity, bfr__, size__);
        bfr__ += IMC::deserialize(tAcc, bfr__, size__);
        bfr__ += IMC::deserialize(nano, bfr__, size__);
        bfr__ += IMC::deserialize(fixType, bfr__, size__);
        bfr__ += IMC::deserialize(flags_fix_status, bfr__, size__);
        bfr__ += IMC::deserialize(flags_additional, bfr__, size__);
        bfr__ += IMC::deserialize(numSV, bfr__, size__);
        bfr__ += IMC::deserialize(raw_lon, bfr__, size__);
        bfr__ += IMC::deserialize(raw_lat, bfr__, size__);
        bfr__ += IMC::deserialize(raw_height, bfr__, size__);
        bfr__ += IMC::deserialize(raw_hMSL, bfr__, size__);
        bfr__ += IMC::deserialize(raw_hAcc, bfr__, size__);
        bfr__ += IMC::deserialize(raw_vAcc, bfr__, size__);
        bfr__ += IMC::deserialize(raw_velN, bfr__, size__);
        bfr__ += IMC::deserialize(raw_velE, bfr__, size__);
        bfr__ += IMC::deserialize(raw_velD, bfr__, size__);
        bfr__ += IMC::deserialize(raw_gSpeed, bfr__, size__);
        bfr__ += IMC::deserialize(raw_headMot, bfr__, size__);
        bfr__ += IMC::deserialize(raw_sAcc, bfr__, size__);
        bfr__ += IMC::deserialize(raw_headAcc, bfr__, size__);
        bfr__ += IMC::deserialize(raw_pDOP, bfr__, size__);
        bfr__ += 6; // Reserved
        bfr__ += IMC::deserialize(headVeh, bfr__, size__);
        bfr__ += IMC::deserialize(magDec, bfr__, size__);
        bfr__ += IMC::deserialize(magAcc, bfr__, size__);

        convertRaw();
      }

      void
      convertRaw(void)
      {
        time_of_fix = 3600.0 * (float)hour + 60.0 * (float)min + (float)sec + 1e-9 * (float)nano;
        lon = Angles::radians(1e-7 * (double)raw_lon);
        lat = Angles::radians(1e-7 * (double)raw_lat);
        height = 1e-3 * (float)raw_height;
        hMSL = 1e-3 * (float)raw_hMSL;
        hAcc = 1e-3 * (float)raw_hAcc;
        vAcc = 1e-3 * (float)raw_vAcc;
        velN = 1e-3 * (float)raw_velN;
        velE = 1e-3 * (float)raw_velE;
        velD = 1e-3 * (float)raw_velD;
        gSpeed = 1e-3 * (float)raw_gSpeed;
        sAcc = 1e-3 * (float)raw_sAcc;
        headMot = Angles::radians(1e-5 * (float)raw_headMot);
        headAcc = Angles::radians(1e-5 * (float)raw_headAcc);
        pDOP = 0.01 * raw_pDOP;
      }
    };
  }
}

#endif

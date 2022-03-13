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

#ifndef SENSORS_SENTIBOARD_UBLOX_HPP_INCLUDED_
#define SENSORS_SENTIBOARD_UBLOX_HPP_INCLUDED_

#define UBX_MSG_NAV_PVT 0x0107
#define UBX_MSG_NAV_RELPOSNED 0x013C
#define UBX_MSG_NAV_SAT 0x0135
#define UBX_MSG_NAV_SIG 0x0143
#define UBX_MSG_NAV_STATUS 0x0103
#define UBX_MSG_NAV_SVIN 0x013B
#define UBX_MSG_NAV_DOP 0x0104
#define UBX_MSG_RXM_SFRBX 0x0213
#define UBX_MSG_RXM_RAWX 0x0215


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
        return "UBX-NAV-PVT";
      }

    private:
      uint16_t length;
      uint8_t payload[92];
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

    class uBloxNavRelposned
    {
      public:
        uint16_t refStationId;
        uint32_t iTOW;
        uint8_t version;
        fp64_t relPosN, relPosE, relPosD;
        fp64_t relPosLength;
        fp32_t relPosHeading;
        fp32_t accN, accE, accD;
        fp32_t accLength;
        fp32_t accHeading;
        uint32_t flags;


        uBloxNavRelposned(uBlox msg)
        {
          length = msg.getLength();
          msg.getChecksum(cka, ckb);
          msg.getPayload(payload);

          deserializeFields();
        }

        const char*
        getName(void) const
        {
          return "UBX-NAV-RELPOSNED";
        }

      private:
        uint16_t length;
        uint8_t payload[64];
        uint8_t cka, ckb;
        int32_t raw_relPosN, raw_relPosE, raw_relPosD, raw_relPosLength, raw_relPosHeading;
        int8_t relPosHPN, relPosHPE, relPosHPD, relPosHPLength;
        uint32_t raw_accN, raw_accE, raw_accD, raw_accLength, raw_accHeading;

        void
        deserializeFields(void)
        {
          const uint8_t* bfr__ = payload;
          uint16_t size__ = length;
          bfr__ += IMC::deserialize(version, bfr__, size__); // Message content depends on version, we want version 0x01 (protocol version 27.1)
          bfr__ += 1; // Reserved
          bfr__ += IMC::deserialize(refStationId, bfr__, size__);
          bfr__ += IMC::deserialize(iTOW, bfr__, size__);
          bfr__ += IMC::deserialize(raw_relPosN, bfr__, size__);
          bfr__ += IMC::deserialize(raw_relPosE, bfr__, size__);
          bfr__ += IMC::deserialize(raw_relPosD, bfr__, size__);
          bfr__ += IMC::deserialize(raw_relPosLength, bfr__, size__);
          bfr__ += IMC::deserialize(raw_relPosHeading, bfr__, size__);
          bfr__ += 4; // Reserved
          bfr__ += IMC::deserialize(relPosHPN, bfr__, size__);
          bfr__ += IMC::deserialize(relPosHPE, bfr__, size__);
          bfr__ += IMC::deserialize(relPosHPD, bfr__, size__);
          bfr__ += IMC::deserialize(relPosHPLength, bfr__, size__);
          bfr__ += IMC::deserialize(raw_accN, bfr__, size__);
          bfr__ += IMC::deserialize(raw_accE, bfr__, size__);
          bfr__ += IMC::deserialize(raw_accD, bfr__, size__);
          bfr__ += IMC::deserialize(raw_accLength, bfr__, size__);
          bfr__ += IMC::deserialize(raw_accHeading, bfr__, size__);
          bfr__ += 4; // Reserved
          bfr__ += IMC::deserialize(flags, bfr__, size__);

          convertRaw();
        }

        void
        convertRaw(void)
        {
          relPosN = 1e-4*(double)relPosHPN + 1e-2*(double)raw_relPosN;
          relPosE = 1e-4*(double)relPosHPE + 1e-2*(double)raw_relPosE;
          relPosD = 1e-4*(double)relPosHPD + 1e-2*(double)raw_relPosD;
          relPosLength = 1e-4*(double)relPosHPLength + 1e-2*(double)raw_relPosLength;
          relPosHeading = Angles::radians(1e-5*(float)raw_relPosHeading);
          accN = 1e-4*(float)raw_accN;
          accE = 1e-4*(float)raw_accE;
          accD = 1e-4*(float)raw_accD;
          accLength = 1e-4*(float)raw_accLength;
          accHeading = Angles::radians(1e-5*(float)raw_accHeading);
        }
    };


    struct UbxSvInfo
    {
      uint8_t gnssId;
      uint8_t svId;
      uint8_t cno;
      fp32_t prRes;
      fp32_t elev;
      fp32_t azim;
      uint32_t flags;
    };

    class uBloxNavSat
    {
      public:
        uint8_t version;
        uint32_t iTOW;
        uint8_t numSvs;
        std::vector<UbxSvInfo> svInfo;

        uBloxNavSat(uBlox msg)
        {
          length = msg.getLength();
          msg.getChecksum(cka, ckb);
          msg.getPayload(payload);

          deserializeFields();
        }

        const char*
        getName(void) const
        {
          return "UBX-NAV-SAT";
        }

      private:
        uint16_t length;
        uint8_t payload[2048];
        uint8_t cka, ckb;
        int8_t raw_elev;
        int16_t raw_azim;
        int16_t raw_prRes;

        void
        deserializeFields(void)
        {
          const uint8_t* bfr__ = payload;
          uint16_t size__ = length;

          bfr__ += IMC::deserialize(iTOW, bfr__, size__);
          bfr__ += IMC::deserialize(version, bfr__, size__);
          bfr__ += IMC::deserialize(numSvs, bfr__, size__);
          svInfo.reserve(numSvs);
          bfr__ += 2; // Reserved

          for(int i = 0; i < numSvs; ++i)
          {
            UbxSvInfo info;
            bfr__ += IMC::deserialize(info.gnssId, bfr__, size__);
            bfr__ += IMC::deserialize(info.svId, bfr__, size__);
            bfr__ += IMC::deserialize(info.cno, bfr__, size__);
            bfr__ += IMC::deserialize(raw_elev, bfr__, size__);
            bfr__ += IMC::deserialize(raw_azim, bfr__, size__);
            bfr__ += IMC::deserialize(raw_prRes, bfr__, size__);
            bfr__ += IMC::deserialize(info.flags, bfr__, size__);

            convertRaw(info);
            svInfo.push_back(info);
          }
        }

        void
        convertRaw(UbxSvInfo &info)
        {
          info.prRes = 0.1*(float)raw_prRes;
          info.elev = Angles::radians((float)raw_elev);
          info.azim = Angles::radians((float)raw_azim);
        }
    };

    struct UbxSignalInfo
    {
      uint8_t gnssId;
      uint8_t svId;
      uint8_t sigId;
      uint8_t freqId;
      fp32_t prRes;
      uint8_t cno;
      uint8_t qualityInd;
      uint8_t corrSource;
      uint8_t ionoModel;
      uint16_t sigFlags;
    };

    class uBloxNavSig
    {
      public:
        uint32_t iTOW;
        uint8_t version;
        uint8_t numSigs;
        std::vector<UbxSignalInfo> signalInfo;

        uBloxNavSig(uBlox msg)
        {
          length = msg.getLength();
          msg.getChecksum(cka, ckb);
          msg.getPayload(payload);

          deserializeFields();
        }

        const char*
        getName(void) const
        {
          return "UBX-NAV-SIG";
        }

        uint16_t
        getLength(void)
        {
          return length;
        }

      private:
        uint16_t length;
        uint8_t payload[2048];
        uint8_t cka, ckb;
        int16_t raw_prRes;

        void
        deserializeFields(void)
        {
          const uint8_t* bfr__ = payload;
          uint16_t size__ = length;
          bfr__ += IMC::deserialize(iTOW, bfr__, size__);
          bfr__ += IMC::deserialize(version, bfr__, size__);
          bfr__ += IMC::deserialize(numSigs, bfr__, size__);
          signalInfo.reserve(numSigs);
          bfr__ += 2; // Reserved

          for(int i = 0; i < numSigs; ++i)
          {
            UbxSignalInfo info;
            bfr__ += IMC::deserialize(info.gnssId, bfr__, size__);
            bfr__ += IMC::deserialize(info.svId, bfr__, size__);
            bfr__ += IMC::deserialize(info.sigId, bfr__, size__);
            bfr__ += IMC::deserialize(info.freqId, bfr__, size__);
            bfr__ += IMC::deserialize(raw_prRes, bfr__, size__);
            bfr__ += IMC::deserialize(info.cno, bfr__, size__);
            bfr__ += IMC::deserialize(info.qualityInd, bfr__, size__);
            bfr__ += IMC::deserialize(info.corrSource, bfr__, size__);
            bfr__ += IMC::deserialize(info.ionoModel, bfr__, size__);
            bfr__ += IMC::deserialize(info.sigFlags, bfr__, size__);
            bfr__ += 4; // Reserved

            convertRaw(info);
            signalInfo.push_back(info);
          }
        }

        void
        convertRaw(UbxSignalInfo &info)
        {
          info.prRes = 0.1*(float)raw_prRes;
        }

    };

    class uBloxNavStatus
    {
      public:
        uint32_t iTOW, ttff, msss;
        uint8_t flags, flags2, fixStat;
        uint8_t gpsFix;

        uBloxNavStatus(uBlox msg)
        {
          length = msg.getLength();
          msg.getChecksum(cka, ckb);
          msg.getPayload(payload);

          deserializeFields();
        }

        const char*
        getName(void) const
        {
          return "UBX-NAV-STATUS";
        }

      private:
        uint16_t length;
        uint8_t payload[16];
        uint8_t cka, ckb;

        void
        deserializeFields(void)
        {
          const uint8_t* bfr__ = payload;
          uint16_t size__ = length;
          bfr__ += IMC::deserialize(iTOW, bfr__, size__);
          bfr__ += IMC::deserialize(gpsFix, bfr__, size__);
          bfr__ += IMC::deserialize(flags, bfr__, size__);
          bfr__ += IMC::deserialize(fixStat, bfr__, size__);
          bfr__ += IMC::deserialize(flags2, bfr__, size__);
          bfr__ += IMC::deserialize(ttff, bfr__, size__);
          bfr__ += IMC::deserialize(msss, bfr__, size__);
        }
    };

    class uBloxNavSvin
    {
      public:
        uint8_t version;
        uint32_t iTOW;
        fp64_t meanX, meanY, meanZ;
        uint32_t dur;
        fp32_t meanAcc;
        uint32_t obs;
        uint8_t valid, active;

        uBloxNavSvin(uBlox msg)
        {
          length = msg.getLength();
          msg.getChecksum(cka, ckb);
          msg.getPayload(payload);

          deserializeFields();
        }

        const char*
        getName(void) const
        {
          return "UBX-NAV-SVIN";
        }

      private:
        uint16_t length;
        uint8_t payload[40];
        uint8_t cka, ckb;
        int32_t raw_meanX, raw_meanY, raw_meanZ;
        uint32_t raw_meanAcc;
        int8_t meanXHP, meanYHP, meanZHP;

        void
        deserializeFields(void)
        {
          const uint8_t* bfr__ = payload;
          uint16_t size__ = length;
          bfr__ += IMC::deserialize(version, bfr__, size__);
          bfr__ += 3; // Reserved
          bfr__ += IMC::deserialize(iTOW, bfr__, size__);
          bfr__ += IMC::deserialize(dur, bfr__, size__);
          bfr__ += IMC::deserialize(raw_meanX, bfr__, size__);
          bfr__ += IMC::deserialize(raw_meanY, bfr__, size__);
          bfr__ += IMC::deserialize(raw_meanZ, bfr__, size__);
          bfr__ += IMC::deserialize(meanXHP, bfr__, size__);
          bfr__ += IMC::deserialize(meanYHP, bfr__, size__);
          bfr__ += IMC::deserialize(meanZHP, bfr__, size__);
          bfr__ += 1; // Reserved
          bfr__ += IMC::deserialize(raw_meanAcc, bfr__, size__);
          bfr__ += IMC::deserialize(obs, bfr__, size__);
          bfr__ += IMC::deserialize(valid, bfr__, size__);
          bfr__ += IMC::deserialize(active, bfr__, size__);
          bfr__ += 2; // Reserved
          convertRaw();
        }

        void
        convertRaw()
        {
          meanX = 1e-2 * (double)raw_meanX + 1e-4 * (double)meanXHP;
          meanY = 1e-2 * (double)raw_meanY + 1e-4 * (double)meanYHP;
          meanZ = 1e-2 * (double)raw_meanZ + 1e-4 * (double)meanZHP;
        }
    };

    class uBloxNavDop
    {
      public:
        uint32_t iTOW;
        fp32_t gDop, pDop, tDop, vDop, hDop, nDop, eDop;

        uBloxNavDop(uBlox msg)
        {
          length = msg.getLength();
          msg.getChecksum(cka, ckb);
          msg.getPayload(payload);

          deserializeFields();
        }

        const char*
        getName(void) const
        {
          return "UBX-NAV-DOP";
        }

      private:
        uint16_t length;
        uint8_t payload[18];
        uint8_t cka, ckb;
        uint16_t raw_gDop, raw_pDop, raw_tDop, raw_vDop, raw_hDop, raw_nDop, raw_eDop;

        void
        deserializeFields(void)
        {
          const uint8_t* bfr__ = payload;
          uint16_t size__ = length;
          bfr__ += IMC::deserialize(iTOW, bfr__, size__);
          bfr__ += IMC::deserialize(raw_gDop, bfr__, size__);
          bfr__ += IMC::deserialize(raw_pDop, bfr__, size__);
          bfr__ += IMC::deserialize(raw_tDop, bfr__, size__);
          bfr__ += IMC::deserialize(raw_vDop, bfr__, size__);
          bfr__ += IMC::deserialize(raw_hDop, bfr__, size__);
          bfr__ += IMC::deserialize(raw_nDop, bfr__, size__);
          bfr__ += IMC::deserialize(raw_eDop, bfr__, size__);
          convertRaw();
        }

        void
        convertRaw()
        {
          gDop = 0.01 * (float)raw_gDop;
          pDop = 0.01 * (float)raw_pDop;
          tDop = 0.01 * (float)raw_tDop;
          vDop = 0.01 * (float)raw_vDop;
          hDop = 0.01 * (float)raw_hDop;
          nDop = 0.01 * (float)raw_nDop;
          eDop = 0.01 * (float)raw_eDop;
        }
    };


    struct uBloxRawMeasurement
    {
      fp64_t prMes;
      fp64_t cpMes;
      fp32_t doMes;
      uint8_t gnssId;
      uint8_t svId;
      uint8_t freqSlot;
      uint16_t locktime;
      uint8_t cno;
      fp32_t prStdev;
      fp32_t cpStdev;
      fp32_t doStdev;
      uint8_t trkStat;
    };

    class uBloxRxmRawx
    {
    public:
      fp64_t rcvTow;
      uint16_t week;
      int8_t leapSeconds;
      uint8_t numMeas;
      uint8_t recStat;
      std::vector<uBloxRawMeasurement> measurements;


      uBloxRxmRawx(uBlox msg)
      {
        length = msg.getLength();
        msg.getChecksum(cka, ckb);
        msg.getPayload(payload);

        deserializeFields();
      }

      const char*
      getName(void) const
      {
        return "UBX-RXM-RAWX";
      }

    private:
      uint16_t length;
      uint8_t payload[2048];
      uint8_t cka, ckb;
      uint8_t raw_prStdev, raw_cpStdev, raw_doStdev;

      void
      deserializeFields(void)
      {
        const uint8_t* bfr__ = payload;
        uint16_t size__ = length;
        bfr__ += IMC::deserialize(rcvTow, bfr__, size__);
        bfr__ += IMC::deserialize(week, bfr__, size__);
        bfr__ += IMC::deserialize(leapSeconds, bfr__, size__);
        bfr__ += IMC::deserialize(numMeas, bfr__, size__);
        measurements.reserve(numMeas);
        bfr__ += IMC::deserialize(recStat, bfr__, size__);
        bfr__ += 3; // Reserved
        for(int i = 0; i < numMeas; ++i)
        {
          uBloxRawMeasurement meas;
          bfr__ += IMC::deserialize(meas.prMes, bfr__, size__);
          bfr__ += IMC::deserialize(meas.cpMes, bfr__, size__);
          bfr__ += IMC::deserialize(meas.doMes, bfr__, size__);
          bfr__ += IMC::deserialize(meas.gnssId, bfr__, size__);
          bfr__ += IMC::deserialize(meas.svId, bfr__, size__);
          bfr__ += 1; // Reserved
          bfr__ += IMC::deserialize(meas.freqSlot, bfr__, size__);
          bfr__ += IMC::deserialize(meas.locktime, bfr__, size__);
          bfr__ += IMC::deserialize(meas.cno, bfr__, size__);
          bfr__ += IMC::deserialize(raw_prStdev, bfr__, size__);
          bfr__ += IMC::deserialize(raw_cpStdev, bfr__, size__);
          bfr__ += IMC::deserialize(raw_doStdev, bfr__, size__);
          bfr__ += IMC::deserialize(meas.trkStat, bfr__, size__);
          bfr__ += 1; // Reserved
          convertRaw(meas);
          measurements.push_back(meas);

        }        
      }

      void
      convertRaw(uBloxRawMeasurement &meas)
      {
        meas.prStdev = 0.01*(float)(2 << raw_prStdev);
        meas.cpStdev = 0.004*(float)raw_cpStdev;
        meas.doStdev = 0.002*(float)(2 << raw_doStdev);

      }
    };


    class uBloxRxmSfrbx
    {
    public:
      uint8_t gnssId;
      uint8_t svId;
      uint8_t freqId;
      uint8_t numWords;
      uint8_t version;
      std::vector<char> data;


      uBloxRxmSfrbx(uBlox msg)
      {
        length = msg.getLength();
        msg.getChecksum(cka, ckb);
        msg.getPayload(payload);

        deserializeFields();
      }

      const char*
      getName(void) const
      {
        return "UBX-RXM-SFRBX";
      }

    private:
      uint16_t length;
      uint8_t payload[512];
      uint8_t cka, ckb;

      void
      deserializeFields(void)
      {
        const uint8_t* bfr__ = payload;
        uint16_t size__ = length;
        bfr__ += IMC::deserialize(gnssId, bfr__, size__);
        bfr__ += IMC::deserialize(svId, bfr__, size__);
        bfr__ += 1; // Reserved
        bfr__ += IMC::deserialize(freqId, bfr__, size__);
        bfr__ += IMC::deserialize(numWords, bfr__, size__);
        bfr__ += 1; // Reserved
        bfr__ += IMC::deserialize(version, bfr__, size__);
        bfr__ += 1; // Reserved
        for(int i = 0; i < 4*numWords; ++i)
        {
          uint8_t byte;
          bfr__ += IMC::deserialize(byte, bfr__, size__);
          data.push_back(byte);

        }       
      }

    };

  }
}

#endif

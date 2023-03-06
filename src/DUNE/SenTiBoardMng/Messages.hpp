//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Fortuna based on work by Sigurd Albrektsen                  *
//***************************************************************************

#ifndef DUNE_SENTIBOARDMNG_MESSAGES_HPP_INCLUDED_
#define DUNE_SENTIBOARDMNG_MESSAGES_HPP_INCLUDED_

#define SENTIBOARD_MSG_ID_ADIS 1
#define SENTIBOARD_MSG_ID_UBLX 2
#define SENTIBOARD_MSG_ID_PULS 3
#define SENTIBOARD_MSG_ID_STIM 4
#define SENTIBOARD_MSG_ID_HMR  5
#define SENTIBOARD_MSG_ID_HEMISPHERE  6

#include <numeric>
#include <cstdio>

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include <DUNE/Algorithms/CRC32.hpp>
#include <DUNE/IMC/Exceptions.hpp>
#include <DUNE/SenTiBoardMng/Packet.hpp>

namespace DUNE
{
  namespace SenTiBoardMng
  {
    class SenTiBoardMessage
    {
    public:
      SenTiBoardMessage(void):
      tov(0),
      toa(0),
      tot(0),
      is_valid(true)
      { }

      virtual
      ~SenTiBoardMessage(void)
      { }

      void
      readTimes(const uint8_t* bfr__, uint16_t size__)
      {
        bfr__ += IMC::deserialize(tov, bfr__, size__);
        bfr__ += IMC::deserialize(toa, bfr__, size__);
        bfr__ += IMC::deserialize(tot, bfr__, size__);
      }

      uint32_t
      getTOV(void) const
      {
        return tov;
      }

      uint32_t
      getTOA(void) const
      {
        return toa;
      }

      uint32_t
      getTOT(void) const
      {
        return tot;
      }

      //! Retrieve message's name.
      //! @return message's name.
      virtual const char*
      getName(void) const = 0;

      bool
	    isValid(void)
      {
      	return is_valid;
      }

      std::string
	    getFault(void)
      {
      	return fault_str;
      }

    private:
      // Timing information.
      uint32_t tov, toa, tot;
      //Validity
      bool is_valid;
      std::string fault_str;

    protected:
      void
		setFault(std::string e)
      {
      	fault_str = e;
      	is_valid = false;
      }
    };

    class HMR: public SenTiBoardMng::SenTiBoardMessage
    {
    public:
    	double mag_x, mag_y, mag_z, mag_t;
    	double tilt_x, tilt_y, heading;

        HMR(void):
          mag_x(0.0),
          mag_y(0.0),
          mag_z(0.0),
          mag_t(0.0),
		  tilt_x(0.0),
		  tilt_y(0.0),
		  heading(0.0)
        {
          checksum_c = 0;
        }

        HMR(const SenTiBoardMng::SenTiBoardPacket* pkt)
        {
          readTimes(pkt->data, 12);
          deserializeFields(pkt->data + 12, pkt->getLength() - 12);
        }

        const char*
        getName(void) const
        {
          return "HMR3000";
        }

    private:
    	std::string raw_mag_x, raw_mag_y, raw_mag_z, raw_mag_t;
    	std::string raw_tilt_x, raw_tilt_y, raw_heading, checksum_str;
    	std::string msg_type;
    	uint8_t checksum_c;
    	const std::string msg_type_ptntccd = "$PTNTCCD";
    	const std::string msg_type_hcxdr = "$HCXDR";
        //CCD format: $PTNTCCD,<TILTX>,<TILTY>,<MAGX>,<MAGY>,<MAGZ>,<MAGT>,<HEADING>*HH</cr></lf>
        //XDR format: $HCXDR,A,<PITCH>,D,PITCH,A,<ROLL>,D,ROLL,G,<MAGX>,,MAGX,G,<MAGY>,,MAGY,G,<MAGZ>,,MAGZ,G,<MAGT>,,MAGT*HH</cr></lf>
        void
        deserializeFields(const uint8_t* bfr__, uint16_t size__)
        {
        	const char* chr_arr = (const char*) bfr__;

        	checksum_c = calcChecksum(chr_arr+1,size__-6); //XOR checksum of everything between $ and *

        	std::string hmr_string(chr_arr, size__);

        	std::stringstream hmr_ss(hmr_string);
        	std::getline(hmr_ss, msg_type, ',');

        	if (msg_type_ptntccd.compare(msg_type) == 0)
        	{
            std::getline(hmr_ss, raw_tilt_x, ',');
            std::getline(hmr_ss, raw_tilt_y, ',');
            std::getline(hmr_ss, raw_mag_x, ',');
            std::getline(hmr_ss, raw_mag_y, ',');
            std::getline(hmr_ss, raw_mag_z, ',');
            std::getline(hmr_ss, raw_mag_t, ',');
            std::getline(hmr_ss, raw_heading, '*');
            std::getline(hmr_ss, checksum_str);
	        	convertRawPtntccd();
        	}
        	else if (msg_type_hcxdr.compare(msg_type) == 0)
        	{
        		std::string dummy;

        		std::getline(hmr_ss, dummy, ',');
            std::getline(hmr_ss, raw_tilt_x, ',');
            std::getline(hmr_ss, dummy, ',');
            std::getline(hmr_ss, dummy, ',');
            std::getline(hmr_ss, dummy, ',');
            std::getline(hmr_ss, raw_tilt_y, ',');
            std::getline(hmr_ss, dummy, ',');
            std::getline(hmr_ss, dummy, ',');
            std::getline(hmr_ss, dummy, ',');
            std::getline(hmr_ss, raw_mag_x, ',');
            std::getline(hmr_ss, dummy, ',');
            std::getline(hmr_ss, dummy, ',');
            std::getline(hmr_ss, dummy, ',');
            std::getline(hmr_ss, raw_mag_y, ',');
            std::getline(hmr_ss, dummy, ',');
            std::getline(hmr_ss, dummy, ',');
            std::getline(hmr_ss, dummy, ',');
            std::getline(hmr_ss, raw_mag_z, ',');
            std::getline(hmr_ss, dummy, ',');
            std::getline(hmr_ss, dummy, ',');
            std::getline(hmr_ss, dummy, ',');
            std::getline(hmr_ss, raw_mag_t, ',');
            std::getline(hmr_ss, dummy, ',');
            std::getline(hmr_ss, dummy, '*');
            std::getline(hmr_ss, checksum_str);
            convertRawHcxdr();
        	}
        	else
        	{
        		setFault("Sentiboard HMR invalid message type: " + msg_type);
        	}
        }

        void
		    convertRawPtntccd(void)
        {
        	compareChecksum();
        	tilt_x = atan(std::stod(raw_tilt_x, nullptr))/32767.0;
        	tilt_y = atan(std::stod(raw_tilt_y, nullptr))/32767.0;

        	heading = std::stod(raw_heading, nullptr);

        	mag_x = std::stod(raw_mag_x, nullptr)*2.0/32767.0;
        	mag_y = std::stod(raw_mag_y, nullptr)*2.0/32767.0;
        	mag_z = std::stod(raw_mag_z, nullptr)*2.0/32767.0;

        	mag_t = std::stod(raw_mag_t, nullptr); // Unknown conversion factor.
        }

        void
		    convertRawHcxdr(void)
        {
        	compareChecksum();
        	tilt_x = std::stod(raw_tilt_x, nullptr)*M_PI/180.0;
        	tilt_y = std::stod(raw_tilt_y, nullptr)*M_PI/180.0;

        	heading = 0.0;

        	mag_x = std::stod(raw_mag_x, nullptr)*2.0/32767.0;
        	mag_y = std::stod(raw_mag_y, nullptr)*2.0/32767.0;
        	mag_z = std::stod(raw_mag_z, nullptr)*2.0/32767.0;

        	mag_t = std::stod(raw_mag_t, nullptr); // Unknown conversion factor.
        }

        void
		    compareChecksum(void)
        {
        	int checksum_i = std::stoi(checksum_str, nullptr, 16);

        	if ((int)checksum_c != checksum_i)
        	{
        		setFault("Invalid checksum: " + std::to_string(checksum_i) + " vs. " + std::to_string(checksum_c));
        	}
        }

        int
		    calcChecksum(const char *s, uint16_t size)
        {
        	int c = 0;

        	for (int i = 0; i<size; i++)
        		c ^= *s++;

        	return c;
        }
    };

    class ADIS: public SenTiBoardMng::SenTiBoardMessage
    {
    public:
      float temperature;
      double dvel_x, dvel_y, dvel_z;
      double dang_x, dang_y, dang_z;

      ADIS(void):
        temperature(0),
        dvel_x(0),
        dvel_y(0),
        dvel_z(0),
        dang_x(0),
        dang_y(0),
        dang_z(0)
      {
    	prod_ids.push_back(0);
        raw_temp = 0;
        raw_dvel_x = 0, raw_dvel_y = 0, raw_dvel_z = 0;
        raw_dang_x = 0, raw_dang_y = 0, raw_dang_z = 0;
        diag_sts = 0, sys_e_flag = 0;
      }

      ADIS(const SenTiBoardMng::SenTiBoardPacket* pkt)
      {
	      prod_ids.resize(1,0);
        readTimes(pkt->data, 12);
        deserializeFields(pkt->data + 12, pkt->getLength() - 12);
      }

      void
      deserializeFields(const uint8_t* bfr__, uint16_t size__)
      {
    	  if (size__ == 58)
    	  {
    		  prod_ids.resize(3,0); //Vector for ADIS fault checking
    		  zeros.resize(11,0); //Vector for ADIS fault checking
    		  bfr__ += IMC::deserialize(prod_ids[0], bfr__, size__);
    		  bfr__ += IMC::deserialize(prod_ids[1], bfr__, size__);
    		  bfr__ += IMC::deserialize(zeros[0], bfr__, size__);
    		  bfr__ += IMC::deserialize(raw_temp, bfr__, size__);
    		  bfr__ += IMC::deserialize(zeros[1], bfr__, size__);
    		  bfr__ += IMC::deserialize(raw_dang_x, bfr__, size__);
    		  bfr__ += IMC::deserialize(zeros[2], bfr__, size__);
    		  bfr__ += IMC::deserialize(raw_dang_y, bfr__, size__);
    		  bfr__ += IMC::deserialize(zeros[3], bfr__, size__);
    		  bfr__ += IMC::deserialize(raw_dang_z, bfr__, size__);
    		  bfr__ += IMC::deserialize(zeros[4], bfr__, size__);
    		  bfr__ += IMC::deserialize(raw_dvel_x, bfr__, size__);
    		  bfr__ += IMC::deserialize(zeros[5], bfr__, size__);
    		  bfr__ += IMC::deserialize(raw_dvel_y, bfr__, size__);
    		  bfr__ += IMC::deserialize(zeros[6], bfr__, size__);
    		  bfr__ += IMC::deserialize(raw_dvel_z, bfr__, size__);
    		  bfr__ += IMC::deserialize(zeros[7], bfr__, size__);
    		  bfr__ += IMC::deserialize(diag_sts, bfr__, size__);
    		  bfr__ += IMC::deserialize(zeros[8], bfr__, size__);
    		  bfr__ += IMC::deserialize(sys_e_flag, bfr__, size__);
    		  bfr__ += IMC::deserialize(zeros[9], bfr__, size__);
    		  bfr__ += IMC::deserialize(prod_ids[2], bfr__, size__);
    		  bfr__ += IMC::deserialize(zeros[10], bfr__, size__);
    	  }
    	  else
    	  {
    		  bfr__ += IMC::deserialize(prod_ids[0], bfr__, size__);
    		  bfr__ += IMC::deserialize(raw_temp, bfr__, size__);
    		  bfr__ += IMC::deserialize(raw_dang_x, bfr__, size__);
    		  bfr__ += IMC::deserialize(raw_dang_y, bfr__, size__);
    		  bfr__ += IMC::deserialize(raw_dang_z, bfr__, size__);
    		  bfr__ += IMC::deserialize(raw_dvel_x, bfr__, size__);
    		  bfr__ += IMC::deserialize(raw_dvel_y, bfr__, size__);
    		  bfr__ += IMC::deserialize(raw_dvel_z, bfr__, size__);
    	  }

        convertRaw();
      }

      const char*
      getName(void) const
      {
        return "ADIS";
      }

      uint16_t
      getModel(void) const
      {
        return prod_ids[0];
      }

    private:
      std::vector<uint16_t>  prod_ids;
      int16_t raw_temp;
      int32_t raw_dvel_x, raw_dvel_y, raw_dvel_z;
      int32_t raw_dang_x, raw_dang_y, raw_dang_z;
      uint16_t diag_sts, sys_e_flag;
      std::vector<uint16_t> zeros;

      void
      convertRaw(void)
      {
    	if (!zeros.empty())
    	{
    		uint16_t zero_sum = std::accumulate(zeros.begin(), zeros.end(), 0);

    		if (zero_sum != 0)
    		{
    			setFault("Sentiboard ADIS zeros overwritten: " + std::to_string(zero_sum));
    		}
    	}
    	if (prod_ids.size() > 1)
    	{
    		if (prod_ids[0] != prod_ids[1] || prod_ids[0] != prod_ids[2])
    		{
    			setFault("Sentiboard ADIS product ID mismatch: " + std::to_string(prod_ids[0]) + " " + std::to_string(prod_ids[1]) + " " + std::to_string(prod_ids[2]));
    		}
    	}

    	if (isValid())
    	{
			switch (prod_ids[0])
			{
			  case 16490:
				temperature = ((float)raw_temp/70.0 + 25);
				dang_x = Angles::radians(((double)raw_dang_x * 720.0) / std::pow(2, 31));
				dang_y = Angles::radians(((double)raw_dang_y * 720.0) / std::pow(2, 31));
				dang_z = Angles::radians(((double)raw_dang_z * 720.0) / std::pow(2, 31));
				dvel_x = ((double)raw_dvel_x * 200.0) / std::pow(2, 31);
				dvel_y = ((double)raw_dvel_y * 200.0) / std::pow(2, 31);
				dvel_z = ((double)raw_dvel_z * 200.0) / std::pow(2, 31);
				break;
			  case 16488:
				temperature = ((float)raw_temp * 0.00565 + 25);
				dang_x = Angles::radians(((double)raw_dang_x * 720.0) / std::pow(2, 31));
				dang_y = Angles::radians(((double)raw_dang_y * 720.0) / std::pow(2, 31));
				dang_z = Angles::radians(((double)raw_dang_z * 720.0) / std::pow(2, 31));
				dvel_x = ((double)raw_dvel_x * 200.0) / std::pow(2, 31);
				dvel_y = ((double)raw_dvel_y * 200.0) / std::pow(2, 31);
				dvel_z = ((double)raw_dvel_z * 200.0) / std::pow(2, 31);
				//barom_scale = (double)barom_raw * 0.00004;
				//mag_scale = (double)mag_raw * 0.1 / 1000.0;
				break;
			  case 16485:
				temperature = ((float)raw_temp * 0.00565 + 25);
				dang_x = Angles::radians(((double)raw_dang_x * 720.0) / std::pow(2, 31));
				dang_y = Angles::radians(((double)raw_dang_y * 720.0) / std::pow(2, 31));
				dang_z = Angles::radians(((double)raw_dang_z * 720.0) / std::pow(2, 31));
				dvel_x = ((double)raw_dvel_x * 50.0) / std::pow(2, 31);
				dvel_y = ((double)raw_dvel_y * 50.0) / std::pow(2, 31);
				dvel_z = ((double)raw_dvel_z * 50.0) / std::pow(2, 31);
				break;
			  default:
				setFault("Sentiboard ADIS unknown product id: " + std::to_string(prod_ids[0]));
				break;
			}
    	}
      }
    };

    class uBlox: public SenTiBoardMng::SenTiBoardMessage
    {
    public:
      uint16_t id;

      uBlox(void)
      {
        header = 0;
        id = 0;
        length = 0;
        cka = 0, ckb = 0;
      }

      uBlox(const SenTiBoardMng::SenTiBoardPacket* pkt)
      {
        readTimes(pkt->data, 12);
        deserializeFields(pkt->data + 12, pkt->getLength() - 12);
      }

      void
      deserializeFields(const uint8_t* bfr__, uint16_t size__)
      {
        bfr__ += IMC::deserialize(header, bfr__, size__);
        bfr__ += IMC::reverseDeserialize(id, bfr__, size__);
        bfr__ += IMC::deserialize(length, bfr__, size__);
        std::memcpy(payload, bfr__, length);
        bfr__ += length;
        bfr__ += IMC::deserialize(cka, bfr__, size__);
        bfr__ += IMC::deserialize(ckb, bfr__, size__);
      }

      const char*
      getName(void) const
      {
        return "uBlox";
      }

      uint16_t
      getLength(void)
      {
        return length;
      }

      void
      getChecksum(uint8_t& a, uint8_t& b) const
      {
        a = cka;
        b = ckb;
      }

      void
      getPayload(uint8_t* bfr) const
      {
        std::memcpy(bfr, payload, length);
      }

    private:
      uint16_t header;
      uint16_t length;
      uint8_t payload[2048];
      uint8_t cka, ckb;
    };


    class Hemisphere: public SenTiBoardMng::SenTiBoardMessage
    {
    public:
      uint16_t id;

      Hemisphere(void)
      {
        header = 0;
        id     = 0;
        length = 0;
        ck     = 0;
      }

      Hemisphere(const SenTiBoardMng::SenTiBoardPacket* pkt)
      {
        readTimes(pkt->data, 12);
        deserializeFields(pkt->data + 12, pkt->getLength() - 12);
      }

      void
      deserializeFields(const uint8_t* bfr__, uint16_t size__)
      {
        bfr__ += IMC::deserialize(header, bfr__, size__);
        bfr__ += IMC::deserialize(id    , bfr__, size__);
        bfr__ += IMC::deserialize(length, bfr__, size__);
        std::memcpy(payload, bfr__, length);
        bfr__ += length;
        bfr__ += IMC::deserialize(ck     , bfr__, size__);
      }

      const char*
      getName(void) const
      {
        return "Hemisphere";
      }

      uint16_t
      getLength(void)
      {
        return length;
      }

      void
      getChecksum(uint8_t& a) const
      {
        a = ck;
      }

      void
      getPayload(uint8_t* bfr) const
      {
        std::memcpy(bfr, payload, length);
      }

    private:
      uint32_t header;
      uint16_t length;
      uint8_t payload[2048];
      uint16_t ck;
    };


    class Pulse: public SenTiBoardMng::SenTiBoardMessage
    {
    public:
      Pulse(void)
      { }

      Pulse(const SenTiBoardMng::SenTiBoardPacket* pkt)
      {
        readTimes(pkt->data, 12);
      }

      const char*
      getName(void) const
      {
        return "Pulse";
      }
    };

    class STIM: public SenTiBoardMng::SenTiBoardMessage
    {
    public:
      double gyro_x, gyro_y, gyro_z;
      double accl_x, accl_y, accl_z;
      double  gyro_x_temp, gyro_y_temp, gyro_z_temp;
      double  accl_x_temp, accl_y_temp, accl_z_temp;
      double PPS;
      uint32_t CRC;
      uint32_t crc;
      uint16_t COUNT_P;
      uint16_t LATENCY_P;
      uint8_t gyro_status;
      uint8_t accl_status;
      uint8_t gyro_t_status;
      uint8_t accl_t_status;
      uint8_t PPS_status;
      //double incl_x, incl_y, incl_z;

      STIM(void):
        gyro_x(0),
        gyro_y(0),
        gyro_z(0),
        accl_x(0),
        accl_y(0),
        accl_z(0),
        gyro_x_temp(0),
        gyro_y_temp(0),
        gyro_z_temp(0),
        accl_x_temp(0),
        accl_y_temp(0),
        accl_z_temp(0),
        PPS(0)
        //incl_x(0),
        //incl_y(0),
        //incl_z(0)
      {
        GX3 = 0, GX2 = 0, GX1 = 0, GY3 = 0, GY2 = 0, GY1 = 0, GZ3 = 0, GZ2 = 0, GZ1 = 0, GS = 0;
        AX3 = 0, AX2 = 0, AX1 = 0, AY3 = 0, AY2 = 0, AY1 = 0, AZ3 = 0, AZ2 = 0, AZ1 = 0, AS = 0;
        GXT2 = 0, GXT1 = 0, GYT2 = 0, GYT1 = 0, GZT2 = 0, GZT1 = 0, GST = 0;
        AXT2 = 0, AXT1 = 0, AYT2 = 0, AYT1 = 0, AZT2 = 0, AZT1 = 0, AST = 0;
        PPS3 = 0, PPS2 = 0, PPS1 = 0, PPSS = 0;
        //IX3 = 0, IX2 = 0, IX1 = 0, IY3 = 0, IY2 = 0, IY1 = 0, IZ3 = 0, IZ2 = 0, IZ1 = 0, IS = 0;
        COUNT = 0, LATENCY = 0, CRC = 0;
        gyro_div = 21; accl_div = 22; incl_div = 22; pps_div = 23, temp_div = 8;
      }

      STIM(const SenTiBoardMng::SenTiBoardPacket* pkt, bool delta_gyro=true, bool delta_accl=true, uint8_t incl_mode=2, uint8_t g_range=10)
      {
        temp_div = 8;
        pps_div = 23;
        if(delta_gyro)
            gyro_div = 21;
        else
            gyro_div = 14;

        if(delta_accl)
        {
          switch (g_range) 
          {
            case 2:
              accl_div = 24;
              break;
            case 5:
              accl_div = 23;
              break;
            case 10:
              accl_div = 22;
              break;
            case 30:
              accl_div = 21;
              break;
            case 100:
              accl_div = 19;
              break;
            default:
              throw(DUNE::Exception("Given g-range not supported!"));
          }
        }
        else
        {
          switch (g_range) 
          {
            case 2:
              accl_div = 21;
              break;
            case 5:
              accl_div = 20;
              break;
            case 10:
              accl_div = 19;
              break;
            case 30:
              accl_div = 18;
              break;
            case 100:
              accl_div = 16;
              break;
            default:
              throw(DUNE::Exception("Given g-range not supported!"));
          }
        }

        switch (incl_mode) 
        {
          case 1: //inclinometer gives acceleration
            incl_div = 22;
            break;
          case 2: //inclinometer gives delta velocity
            incl_div = 25;
            break;
          case 3: //inclinometer gives average
            incl_div = 1;
            break;
          default:
            throw(DUNE::Exception("Given inclinometer mode not supported!"));
        }
        //num_dummy_bytes = 2; //depends on the config. See Table 6-20 in datasheet
        num_dummy_bytes = 1; //depends on the config. See Table 6-20 in datasheet
        readTimes(pkt->data, 12);
	      // copy the STIM message up to the CRC into a buffer for crc calculations
	      const uint8_t length_stim_data = pkt->getLength() - 12 - 4; //minus senti header and 4 CRC bytes
	      //uint8_t crc_buf[36]; //length_stim_data + num_dummy_bytes
        uint8_t crc_buf[44];
        std::memcpy(crc_buf, pkt->data + 12, pkt->getLength() - 12 - 4);
	      // add dummy bytes
	      for(uint8_t i = length_stim_data; i < length_stim_data + num_dummy_bytes; ++i)
		      crc_buf[i] = 0x00;
	      crc = Algorithms::CRC32::reflect((Algorithms::CRC32::compute((const uint8_t*)crc_buf, length_stim_data + num_dummy_bytes, true, 0) ^ 0xFFFFFFFF), 32);
        deserializeFields(pkt->data + 12, pkt->getLength() - 12);
        if(crc != CRC)
        {
          printf("crc = %d --- CRC = %d \n", crc,CRC);
          throw IMC::InvalidCrc();
        }

      }

      void
      deserializeFields(const uint8_t* bfr__, uint16_t size__)
      {
        bfr__ += IMC::deserialize(DID,        bfr__, size__);
        bfr__ += IMC::deserialize(GX3,        bfr__, size__);
        bfr__ += IMC::deserialize(GX2,        bfr__, size__);
        bfr__ += IMC::deserialize(GX1,        bfr__, size__);
        bfr__ += IMC::deserialize(GY3,        bfr__, size__);
        bfr__ += IMC::deserialize(GY2,        bfr__, size__);
        bfr__ += IMC::deserialize(GY1,        bfr__, size__);
        bfr__ += IMC::deserialize(GZ3,        bfr__, size__);
        bfr__ += IMC::deserialize(GZ2,        bfr__, size__);
        bfr__ += IMC::deserialize(GZ1,        bfr__, size__);
        bfr__ += IMC::deserialize(GS,         bfr__, size__);
        bfr__ += IMC::deserialize(AX3,        bfr__, size__);
        bfr__ += IMC::deserialize(AX2,        bfr__, size__);
        bfr__ += IMC::deserialize(AX1,        bfr__, size__);
        bfr__ += IMC::deserialize(AY3,        bfr__, size__);
        bfr__ += IMC::deserialize(AY2,        bfr__, size__);
        bfr__ += IMC::deserialize(AY1,        bfr__, size__);
        bfr__ += IMC::deserialize(AZ3,        bfr__, size__);
        bfr__ += IMC::deserialize(AZ2,        bfr__, size__);
        bfr__ += IMC::deserialize(AZ1,        bfr__, size__);
        bfr__ += IMC::deserialize(AS,         bfr__, size__);
        bfr__ += IMC::deserialize(GXT2,       bfr__, size__);
        bfr__ += IMC::deserialize(GXT1,       bfr__, size__);
        bfr__ += IMC::deserialize(GYT2,       bfr__, size__);
        bfr__ += IMC::deserialize(GYT1,       bfr__, size__);
        bfr__ += IMC::deserialize(GZT2,       bfr__, size__);
        bfr__ += IMC::deserialize(GZT1,       bfr__, size__);
        bfr__ += IMC::deserialize(GST,        bfr__, size__);
        bfr__ += IMC::deserialize(AXT2,       bfr__, size__);
        bfr__ += IMC::deserialize(AXT1,       bfr__, size__);
        bfr__ += IMC::deserialize(AYT2,       bfr__, size__);
        bfr__ += IMC::deserialize(AYT1,       bfr__, size__);
        bfr__ += IMC::deserialize(AZT2,       bfr__, size__);
        bfr__ += IMC::deserialize(AZT1,       bfr__, size__);
        bfr__ += IMC::deserialize(AST,        bfr__, size__);
        bfr__ += IMC::deserialize(PPS3,       bfr__, size__);
        bfr__ += IMC::deserialize(PPS2,       bfr__, size__);
        bfr__ += IMC::deserialize(PPS1,       bfr__, size__);
        bfr__ += IMC::deserialize(PPSS,       bfr__, size__);

/*         bfr__ += IMC::deserialize(IX3,        bfr__, size__);
        bfr__ += IMC::deserialize(IX2,        bfr__, size__);
        bfr__ += IMC::deserialize(IX1,        bfr__, size__);
        bfr__ += IMC::deserialize(IY3,        bfr__, size__);
        bfr__ += IMC::deserialize(IY2,        bfr__, size__);
        bfr__ += IMC::deserialize(IY1,        bfr__, size__);
        bfr__ += IMC::deserialize(IZ3,        bfr__, size__);
        bfr__ += IMC::deserialize(IZ2,        bfr__, size__);
        bfr__ += IMC::deserialize(IZ1,        bfr__, size__);
        bfr__ += IMC::deserialize(IS,         bfr__, size__); */
        bfr__ += IMC::reverseDeserialize(COUNT,      bfr__, size__);
        bfr__ += IMC::reverseDeserialize(LATENCY,    bfr__, size__);
        bfr__ += IMC::reverseDeserialize(CRC, bfr__, size__);

        convertRaw();
      }

      const char*
      getName(void) const
      {
        return "STIM";
      }

    private:
      uint8_t DID;
      uint8_t GX1,GX2;
      int8_t GX3;
      uint8_t GY1,GY2;
      int8_t GY3;
      uint8_t GZ1,GZ2;
      int8_t GZ3;
      uint8_t GS;
      uint8_t AX1,AX2;
      int8_t AX3;
      uint8_t AY1,AY2;
      int8_t AY3;
      uint8_t AZ1,AZ2;
      int8_t AZ3;
      uint8_t AS;
      uint8_t GXT1;
      int8_t GXT2;
      uint8_t GYT1;
      int8_t GYT2;
      uint8_t GZT1;
      int8_t GZT2;
      uint8_t GST;
      uint8_t AXT1;
      int8_t AXT2;
      uint8_t AYT1;
      int8_t AYT2;
      uint8_t AZT1;
      int8_t AZT2;
      uint8_t AST;
      uint8_t PPS1, PPS2;
      int8_t PPS3;
      uint8_t PPSS;
      uint16_t COUNT;
      uint16_t LATENCY;
      //uint32_t CRC;
      uint8_t gyro_div, accl_div, incl_div, pps_div, temp_div;
      uint8_t num_dummy_bytes;

      double
      concatTemp(int8_t x2, uint8_t x1, uint8_t div)
      {
        return double((x2 << 8) + x1) / (1 << div);
      }

      double
      concatDiv(int8_t x3, uint8_t x2, uint8_t x1, uint8_t div)
      {
	      return double((x3 << 16) + (x2 << 8) + x1) / (1 << div);
      }

      void
      convertRaw(void)
      {
        gyro_x      = concatDiv(GX3,GX2,GX1, gyro_div);
        gyro_y      = concatDiv(GY3,GY2,GY1, gyro_div);
        gyro_z      = concatDiv(GZ3,GZ2,GZ1, gyro_div);
        accl_x      = concatDiv(AX3,AX2,AX1, accl_div);
        accl_y      = concatDiv(AY3,AY2,AY1, accl_div);
        accl_z      = concatDiv(AZ3,AZ2,AZ1, accl_div);
        gyro_x_temp = concatTemp(GXT2, GXT1, temp_div);
        gyro_y_temp = concatTemp(GYT2, GYT1, temp_div);
        gyro_z_temp = concatTemp(GZT2, GZT1, temp_div);
        accl_x_temp = concatTemp(AXT2, AXT1, temp_div);
        accl_y_temp = concatTemp(AYT2, AYT1, temp_div);
        accl_z_temp = concatTemp(AZT2, AZT1, temp_div);
        PPS         = concatDiv(PPS3,PPS2,PPS1, pps_div);
        COUNT_P = COUNT;
        LATENCY_P = LATENCY;
        gyro_status = GS;
        accl_status = AS;
        gyro_t_status = GST;
        accl_t_status = AST;
        PPS_status = PPSS;
      }
    };
    
  }
}

#endif

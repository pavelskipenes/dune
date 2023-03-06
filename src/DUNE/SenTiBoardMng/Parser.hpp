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

#ifndef DUNE_SENTIBOARDMNG_PARSER_HPP_INCLUDED_
#define DUNE_SENTIBOARDMNG_PARSER_HPP_INCLUDED_

#define SENTIBOARDMNG_GET_UINT16_AT(buf, pos)      \
  reinterpret_cast<uint16_t *>(buf + pos)[0]

#define SENTIBOARDMNG_GET_UINT32_AT(buf, pos) \
  reinterpret_cast<uint32_t *>(buf + pos)[0]

// ISO C++ 98 headers.
//#include <cstring>
//#include <cstdlib>
#include <iomanip>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/SenTiBoardMng/Packet.hpp>

namespace DUNE
{
  namespace SenTiBoardMng
  {
    //! Message Parser for SenTiBoardMng.
    class SenTiBoardParser
    {
    public:
      //! State machine states.
      enum SenTiBoardParserState
      {
        PS_SYNC1,
        PS_SYNC2,
        PS_LEN1,
        PS_LEN2,
        PS_ID,
        PS_VERSION,
        PS_H_CHK1,
        PS_H_CHK2,
        PS_DATA,
        PS_D_CHK1,
        PS_D_CHK2
      };

      SenTiBoardParser(void):
        m_state(SenTiBoardParser::PS_SYNC1),
        m_h_chk1(0),
        m_h_chk2(0),
        m_d_chk1(0),
        m_d_chk2(0),
        m_idx(0),
        m_length(0)
      { }

      ~SenTiBoardParser(void)
      { }

      //! Parse message received
      bool
      parse(uint8_t byte)
      {
        switch (m_state)
        {
          case PS_SYNC1:
            if (byte == '^')
            {
              m_packet.header[0] = byte;
              m_state = PS_SYNC2;
            }
            break;
            case PS_SYNC2:           
            if (byte == 'B')           
            {
                m_packet.header[1] = byte;
                m_state = PS_LEN1;
                }
                else if (byte == '^')
                {
                  m_packet.header[0] = byte;
                m_state = PS_SYNC2;
                }
                else
                m_state = PS_SYNC1;
                break;
          case PS_LEN1:
            m_packet.header[2] = byte;
            m_state = PS_LEN2;
            break;
          case PS_LEN2:
            m_packet.header[3] = byte;
            m_length = SENTIBOARDMNG_GET_UINT16_AT(m_packet.header, 2);
            m_packet.setLength(m_length);
            m_state = PS_ID;
            break;
          case PS_ID:
            m_packet.header[4] = byte;
            m_packet.setID(byte);
            m_state = PS_VERSION;
            break;
          case PS_VERSION:
            m_packet.header[5] = byte;
            m_packet.setVersion(byte);
            m_state = PS_H_CHK1;
            break;
          case PS_H_CHK1:
            m_h_chk1 = 0;
            m_h_chk2 = 0;
            Algorithms::FletcherChecksum::compute(m_packet.header, 6, m_h_chk1, m_h_chk2);
            m_packet.header[6] = byte;
            if (byte == m_h_chk1)
              m_state = PS_H_CHK2;
            else
              m_state = PS_SYNC1; //Bad checksum
            break;
          case PS_H_CHK2:
            m_packet.header[7] = byte;
            if (byte == m_h_chk2)
            {
              m_state = PS_DATA;
              m_idx = 0;
            }
            else
              m_state = PS_SYNC1; //Bad checksum
            break;
          case PS_DATA:
            m_packet.data[m_idx++] = byte;
            if (m_idx == m_length)
              m_state = PS_D_CHK1;
            break;
          case PS_D_CHK1:
            m_d_chk1 = 0;
            m_d_chk2 = 0;
            m_packet.data[m_idx++] = byte;
            Algorithms::FletcherChecksum::compute(m_packet.data, m_length, m_d_chk1, m_d_chk2);
            if (byte == m_d_chk1)
              m_state = PS_D_CHK2;
            else
              m_state = PS_SYNC1; //Bad checksum
            break;
          case PS_D_CHK2:
            m_packet.data[m_idx++] = byte;
            m_state = PS_SYNC1;
            if (byte == m_d_chk2)
              return true; //Good packet received checksum
            break;
        }
        return false;
      }

      SenTiBoardPacket
      getPacket(void)
      {
        return m_packet;
      }

      uint16_t
      getLength(void)
      {
        return m_length;
      }

      uint16_t
      getDataChecksum(void)
      {
        return ((uint16_t)m_d_chk1 << 8) | m_d_chk2;
      }

    private:
      //! State machine state.
      SenTiBoardParserState m_state;
      //! Parsed packet.
      SenTiBoardPacket m_packet;
      //! Header checksum.
      uint8_t m_h_chk1, m_h_chk2;
      //! Data checksum.
      uint8_t m_d_chk1, m_d_chk2;
      //! Data byte index.
      uint16_t m_idx;
      //! Data length.
      uint16_t m_length;
    };
  }
}

#endif

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

#ifndef SENSORS_SENTIBOARD_PACKET_HPP_INCLUDED_
#define SENSORS_SENTIBOARD_PACKET_HPP_INCLUDED_

#define SENTIBOARD_GET_UINT16_AT(buf, pos)      \
  reinterpret_cast<uint16_t *>(buf + pos)[0]

#define SENTIBOARD_GET_UINT32_AT(buf, pos) \
  reinterpret_cast<uint32_t *>(buf + pos)[0]

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

namespace Sensors
{
  namespace SenTiBoard
  {
    class Packet
    {
    public:
      uint8_t header[8];
      uint8_t data[1024];

      Packet(void):
        id(0),
        length(0),
        version(0)
      { }

      ~Packet(void)
      { }

      void
      setVersion(uint8_t _ver)
      {
        version = _ver;
      };

      void
      setID(uint8_t _id)
      {
        id = _id;
      };

      void
      setLength(uint16_t _len)
      {
        length = _len;
      };

      uint16_t
      getLength(void) const
      {
        return length;
      };

      uint8_t
      getID(void) const
      {
        return id;
      };

    private:
      uint8_t id;
      uint16_t length;
      uint8_t version;
    };
  }
}

#endif

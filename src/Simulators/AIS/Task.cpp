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
// Author: Alberto Dallolio                                                 *
//***************************************************************************

#include<sstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  // This task simulates AIS by receiving GpsFix information 
  // from virtual vessel obstacles and dispatching a RemoteSensorInfo message.
  namespace AIS
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
        std::string mmsi, name, callsign, type_and_cargo;
        // length = A + B, width = C + D
        double size_a, size_b, size_c, size_d;
        
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Obstacle State message
      IMC::RemoteSensorInfo rsi;

      //! Vessel ID.
      std::string id_;
      //! Vessel Name.
      std::string name_;
      //! Vessel callsign.
      std::string callsign_;
      //! Vessel type and cargo.
      std::string type_and_cargo_;
      //! Size.
      double a_,b_,c_,d_;

      //! Task arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        id_(),
        name_(),
        callsign_(),
        type_and_cargo_(),
        a_(),
        b_(),
        c_(),
        d_()
      {
        param("MMSI", m_args.mmsi)
        .description("Vessel MMSI");

        param("Name", m_args.name)
        .description("Vessel Name");

        param("Callsign", m_args.callsign)
        .description("Vessel VHF Radio Callsign");

        param("Type and Cargo", m_args.type_and_cargo)
        .description("Vessel Type and Cargo");

        param("Size A", m_args.size_a)
        .description("Length to stern from the located AIS [m]");
     
		    param("Size B", m_args.size_b)
        .description("Length to bow from the located AIS [m]");
        
        param("Size C", m_args.size_c)
        .description("Length to port from the located AIS [m]");
        
        param("Size D", m_args.size_d)
        .description("Length to starboard from the located AIS [m]");

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        // Register handler routines. 
		    bind<IMC::GpsFix>(this);
      }


      void
      onUpdateParameters(void)
      {
        if(paramChanged(m_args.mmsi))
          id_ = m_args.mmsi;
        if(paramChanged(m_args.name))
          name_ = m_args.name;
        if(paramChanged(m_args.callsign))
          callsign_ = m_args.callsign;
        if(paramChanged(m_args.type_and_cargo))
          type_and_cargo_ = m_args.type_and_cargo;
        if(paramChanged(m_args.size_a))
          a_ = m_args.size_a;
        if(paramChanged(m_args.size_b))
          b_ = m_args.size_b;
        if(paramChanged(m_args.size_c))
          c_ = m_args.size_c;
        if(paramChanged(m_args.size_d))
          d_ = m_args.size_d;
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        id_ = m_args.mmsi;
        name_ = m_args.name;
        callsign_ = m_args.callsign;
        type_and_cargo_ = m_args.type_and_cargo;
        a_ = m_args.size_a;
        b_ = m_args.size_b;
        c_ = m_args.size_c;
        d_ = m_args.size_d;
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        rsi.lat = msg->lat;
		    rsi.lon = msg->lon;
		    rsi.heading = msg->cog;

        // AIS Static Info.
        rsi.id = id_;

        // Trim sog from obstacles when standing still: avoid integration.
        double sog = msg->sog;
        if(sog < 0.01)
          sog = 0.0;

        std::ostringstream a;
        a << a_*1000;
        std::string a_send = a.str();

        std::ostringstream b;
        b << b_*1000;
        std::string b_send = b.str();

        std::ostringstream c;
        c << c_*1000;
        std::string c_send = c.str();

        std::ostringstream d;
        d << d_*1000;
        std::string d_send = d.str();

        std::ostringstream rsi_sog;
        rsi_sog << sog*1000;
        std::string rsi_sog_send = rsi_sog.str();

        // String for tuple: rsi.data
        std::ostringstream ais_data;
        // SOG added here.
        ais_data << "CALLSIGN=" << callsign_ << ";" << "NAME=" << name_ << ";" << "TYPE_AND_CARGO=" << type_and_cargo_ << ";" << "A=" << a_send << ";" << "B=" << b_send << ";" << "C=" << c_send << ";" << "D=" << d_send << ";" << "SOG=" << rsi_sog_send; //<< "MMSI=" << msg.mmsi << ";"
        rsi.data = ais_data.str();

        spew("Obstacle %s info: (lon,lat,cog,sog) %f %f %f %s",
                     rsi.id.c_str(), c_degrees_per_radian*rsi.lon, c_degrees_per_radian*rsi.lat, Angles::degrees(rsi.heading), rsi_sog_send.c_str());
        spew("AIS TUPLE = %s",rsi.data.c_str());

        if(msg->lat != 0.0 && msg->lon != 0.0)
          dispatch(rsi);
      }


      void
      onMain(void)
      {

        while (!stopping())
        {
          waitForMessages(1.0);

        }
      }
    };
  }
}

DUNE_TASK

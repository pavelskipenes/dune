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
// Author: Sølve Dahlin	                                                    *
//***************************************************************************


// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace EstimatedStateToTarget
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
        //! Size of the vehicle - determined by AIS location
        //! length = A + B, width = C + D
        double size_a;
        double size_b;
        double size_c;
        double size_d;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Obstacle State message
      IMC::ObstacleState obstacle;
      //! Task arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Size A", m_args.size_a)
        .units(Units::Meter)
        .minimumValue("0")
        .maximumValue("50")
        .defaultValue("10")
        .description("Length to stern from the located AIS ");
     
		param("Size B", m_args.size_b)
        .units(Units::Meter)
        .minimumValue("0")
        .maximumValue("50")
        .defaultValue("10")
        .description("Length to bow from the located AIS ");
        
        param("Size C", m_args.size_c)
        .units(Units::Meter)
        .minimumValue("0")
        .maximumValue("20")
        .defaultValue("5")
        .description("Length to port from the located AIS ");
        
        param("Size D", m_args.size_d)
        .units(Units::Meter)
        .minimumValue("0")
        .maximumValue("20")
        .defaultValue("5")
        .description("Length to starboard from the located AIS ");

  
        // Register handler routines. 
		bind<IMC::EstimatedState>(this);
      }




      void
      onUpdateParameters(void)
      {
		obstacle.a = m_args.size_a;
		obstacle.b = m_args.size_b;
		obstacle.c = m_args.size_c;
		obstacle.d = m_args.size_d;
		
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
		obstacle.lat = 0.0;
		obstacle.lon = 0.0;
		obstacle.x = 0.0;
		obstacle.y = 0.0;
		obstacle.psi = 0.0;
		obstacle.u = 0.0;
		obstacle.v = 0.0;
		obstacle.a = 0.0;	
		obstacle.b = 0.0;
		obstacle.c = 0.0;
		obstacle.d = 0.0;
      }


      void
      consume(const IMC::EstimatedState* msg)
      {
		obstacle.lat = msg->lat;
		obstacle.lon = msg->lon;
		obstacle.x = msg->x;
		obstacle.y = msg->y;
		obstacle.psi = msg->psi;
		obstacle.u = msg->vx;
		obstacle.v = msg->vy;
		obstacle.a = m_args.size_a;
		obstacle.b = m_args.size_b;
		obstacle.c = m_args.size_c;
		obstacle.d = m_args.size_d;
		

		dispatch(obstacle);
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

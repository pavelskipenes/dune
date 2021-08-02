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

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Navigation
{
  namespace General
  {
    //! Navigation Manager.
    //!
    //! @author Alberto Dallolio
    namespace NavManager
    {
      struct Arguments
      {
        //! Order of sentences.
        std::string main_unit;
        std::string secondary_unit;
        std::string third_unit;
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! Main GPS entity eid.
        int m_main_unit_eid;
        //! Secondary GPS entity eid.
        int m_secondary_unit_eid;
        //! Third GPS entity eid.
        int m_third_unit_eid;
        //! Time without main GPS.
        Counter<double> m_time_without_main_unit;
        //! Time without secondary GPS.
        Counter<double> m_time_without_secondary_unit;
        //! Time without third GPS.
        Counter<double> m_time_without_third_unit;
        //! True if preferred GPS is not working.
        bool main_unit_lost;
        //! True if secondary GPS is not working.
        bool secondary_unit_lost;
        //! True if third GPS is not working.
        bool third_unit_lost;
        //! Iridium warning for main GPS.
        bool main_unit_ir_sent;
        //! Iridium warning for secondary GPS.
        bool secondary_unit_ir_sent;
        //! Iridium warning for third GPS.
        bool third_unit_ir_sent;
        //! Transmission request id
        int m_reqid;
        //! Navigation units.
        //std::vector<std::string> m_units;
        //! Main system GpsFix message.
        IMC::GpsFix m_sys_fix;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx),
          main_unit_lost(false),
          secondary_unit_lost(false),
          third_unit_lost(false),
          main_unit_ir_sent(false),
          secondary_unit_ir_sent(false),
          third_unit_ir_sent(false),
          m_reqid(0)
        {
          // Define configuration parameters.
          param("Main unit", m_args.main_unit)
          .description("Name of preferred navigation unit.");

          param("Secondary unit", m_args.secondary_unit)
          .description("Name of secondary preferred navigation unit.");

          param("Third unit", m_args.third_unit)
          .description("Name of third preferred navigation unit.");

          // Register callbacks
          bind<IMC::GpsFix>(this);
          //bind<IMC::EulerAngles>(this);
          //bind<IMC::AngularVelocity>(this);
        }

        void
        onResourceAcquisition(void)
        {
          // Navigation enters error mode without valid GPS data.
          m_time_without_main_unit.setTop(5.0);
          m_time_without_secondary_unit.setTop(5.0);
          m_time_without_third_unit.setTop(5.0);
        }

        void
        consume(const IMC::GpsFix* msg)
        {
          //debug("GPS FIX FROM: %s",resolveEntity(msg->getSourceEntity()).c_str());

          if(m_args.main_unit.compare(resolveEntity(msg->getSourceEntity()).c_str())==0)
          {
            debug("Got GpsFix from main unit: %s",resolveEntity(msg->getSourceEntity()).c_str());
            m_time_without_main_unit.reset();
            main_unit_lost = false;

          } else if(m_args.secondary_unit.compare(resolveEntity(msg->getSourceEntity()).c_str())==0)
          {
            debug("Got GpsFix secondary unit: %s",resolveEntity(msg->getSourceEntity()).c_str());
            m_time_without_secondary_unit.reset();
            secondary_unit_lost = false;
          } else if(m_args.third_unit.compare(resolveEntity(msg->getSourceEntity()).c_str())==0)
          {
            debug("Got GpsFix third unit: %s",resolveEntity(msg->getSourceEntity()).c_str());
            m_time_without_third_unit.reset();
            third_unit_lost = false;
          }

          //! Logic for unit choice.
          if(m_args.main_unit.compare(resolveEntity(msg->getSourceEntity()).c_str())==0)
          {
            debug("Using GpsFix from main unit: %s",resolveEntity(msg->getSourceEntity()).c_str());
            m_time_without_main_unit.reset();
            main_unit_lost = false;

            m_sys_fix = *msg;
            sendFix();
            return;
          }

          if(m_args.secondary_unit.compare(resolveEntity(msg->getSourceEntity()).c_str())==0 && main_unit_lost) //m_time_without_main_unit.overflow()
          {
            debug("Using GpsFix from secondary unit: %s",resolveEntity(msg->getSourceEntity()).c_str());            
            m_sys_fix = *msg;
            sendFix();
            return;
          }

          if(m_args.third_unit.compare(resolveEntity(msg->getSourceEntity()).c_str())==0 && main_unit_lost && secondary_unit_lost)
          {
            debug("Using GpsFix from third unit: %s",resolveEntity(msg->getSourceEntity()).c_str());
            m_sys_fix = *msg;
            sendFix();
          }
        }

        void
        sendFix()
        {
          if ((m_sys_fix.validity & IMC::GpsFix::GFV_VALID_POS) == 0)
          {
            IMC::GpsFixRejection m_sys_fix_rej;
            m_sys_fix_rej.reason = IMC::GpsFixRejection::RR_INVALID;
            dispatch(m_sys_fix_rej, DF_KEEP_TIME);
            return;
          }
          // Received valid GPS data.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          m_sys_fix.setSourceEntity(getEid("NavManager"));
          dispatch(m_sys_fix);
        }

        unsigned
        getEid(std::string label)
        {
          unsigned eid = 0;
          try
          {
            eid = resolveEntity(label);
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity(label);
          }

          return eid;
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

        void
        sendIridium(std::string msg)
        {
          IMC::TransmissionRequest req;
          req.setDestination(m_ctx.resolver.id());
          req.data_mode = TransmissionRequest::DMODE_TEXT;
          req.txt_data = msg;
          req.deadline = Clock::getSinceEpoch() + 60;
          req.req_id = ++m_reqid;

          req.comm_mean = TransmissionRequest::CMEAN_SATELLITE;
          req.destination = "";
          inf("Sending via Iridium: '%s'", req.txt_data.c_str());
          dispatch(req);
        }

        void
        onMain(void)
        {
          while (!stopping())
          {
            waitForMessages(1.0);

            if(m_time_without_main_unit.overflow())
            {
              debug("Main Gps disappeared");
              main_unit_lost = true;
            }

            if(m_time_without_secondary_unit.overflow())
            {
              debug("Secondary Gps disappeared");
              secondary_unit_lost = true;
            }

            if(m_time_without_third_unit.overflow())
            {
              debug("Third Gps disappeared");
              third_unit_lost = true;
            }

            // Raise ERROR MODE if both GPS are out of service.
            if(m_time_without_main_unit.overflow() && m_time_without_secondary_unit.overflow() && m_time_without_main_unit.overflow())
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_WAIT_GPS_FIX);
            else if(m_time_without_main_unit.overflow() && main_unit_lost && !main_unit_ir_sent)
            {
              debug("Sending IR for main GPS");
              main_unit_lost = true;
              
              // Send iridium message.
              sendIridium("Main GPS not working!");
              main_unit_ir_sent = true;
              
            } else if(m_time_without_secondary_unit.overflow() && secondary_unit_lost && !secondary_unit_ir_sent)
            {
              debug("Sending IR for secondary GPS");
              secondary_unit_lost = true;

              // Send iridium message.
              sendIridium("Secondary GPS not working!");
              secondary_unit_ir_sent = true;

            } else if(m_time_without_third_unit.overflow() && third_unit_lost && !third_unit_ir_sent)
            {
              debug("Sending IR for third GPS");
              third_unit_lost = true;

              // Send iridium message.
              sendIridium("Third GPS not working!");
              third_unit_ir_sent = true;
            }
          }
        }
      };
    }
  }
}

DUNE_TASK

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
// Author: Jose Pinto                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Autonomy
{
  //! This task processes incoming text messages which may
  //! be resulting from received SMSes or Iridium commands.
  namespace TextActions
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      //! last received PlanControlState
      IMC::PlanControlState* m_pcs;
      //! last received VehicleState
      IMC::VehicleState* m_vstate;
      //! last received VehicleState from L3
      IMC::VehicleState* m_vstate_l3;
      //! last received message
      IMC::TextMessage* m_last;
      //! Current power settings.
      IMC::PowerSettings m_pwr_settings;
      //! Transmission request id
      int m_reqid;
      //! Plan database file.
      Path m_db_file;
      //! Speed Over Ground.
      double m_sog;
      //! Speed Over Ground.
      int m_cog;
      //! Satellites in view.
      double m_sat;
      //! L3 sensors message.
      IMC::ScienceSensors m_sensors_cmd;
      //! L3 sensors status message.
      IMC::ScienceSensorsReply m_sensors_status;
      //! Level 3 entity list.
      bool m_l3_el;
      //! Vehicle lat location.
      double m_lat;
      //! Vehicle lon location.
      double m_lon;
      //! Vehicle Desired Heading.
      int m_des_heading;
      //! Vehicle Rudder Angle.
      int m_rudder;
      //! Vehicle Thruster Actuation.
      int m_thruster;
      //! Absolute wind speed.
      double m_abswind_speed;
      //! Absolute wind direction.
      int m_abswind_dir;
      //! L3 entities.
      int m_opt_ent,m_ctd_ent,m_adcp_ent,m_eco_ent,m_par_ent,m_tbl_ent,m_opt_temp_ent,m_ctd_temp_ent;
      //! L3 data timestamp vectors.
      std::string m_opt_tmst,m_ctd_tmst,m_adcp_tmst,m_eco_tmst,m_eco_tmst_ISO,m_tbl_tmst,m_gpsfix_tmst,m_par_tmst,m_par_tmst_ISO,m_adcp_tmst_ISO;
      //! Last received info.
      std::string m_par_reduced, m_dom_reduced, m_turb_reduced, m_chl_reduced, m_temp_opt_reduced, m_airsat_reduced, m_dox_reduced, m_temp_ctd_reduced, m_cond_reduced, m_sal_reduced, m_ss_reduced, m_depth_reduced, m_pres_reduced, depth_found_r, vel_found_r, dir_found_r;
      //! Iridium-ready L3 science messages.
      IMC::Temperature m_temp_l3_ctd,m_temp_l3_tbl,m_temp_l3_opt,m_temp_l2;
      IMC::AirSaturation m_airsat;
      IMC::Chlorophyll m_chl;
      IMC::SingleCurrentCell m_cp;
      IMC::Depth m_depth;
      IMC::DissolvedOrganicMatter m_dom;
      IMC::DissolvedOxygen m_dox;
      IMC::Pressure m_pres;
      IMC::Salinity m_sal;
      IMC::SoundSpeed m_ss;
      IMC::TBRFishTag m_ftag;
      IMC::TBRSensor m_tblive;
      IMC::Turbidity m_turb;
      IMC::Conductivity m_cond;
      IMC::PAR m_par;

      //! %Task arguments
      struct Arguments
      {
        //! timeout, in seconds, for replies
        int reply_timeout;
        //! URL for documentation
        std::string help_url;
        //! List of valid commands (does not reply to anything else)
        std::vector<std::string> valid_cmds;

      } m_args;

      Task(const std::string & name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_pcs(NULL),
        m_vstate(NULL),
        m_vstate_l3(NULL),
        m_last(NULL),
        m_reqid(0),
        m_l3_el(false)
        {
        param("Reply timeout", m_args.reply_timeout)
          .defaultValue("60")
          .minimumValue("30");

        param("Documentation URL", m_args.help_url)
          .defaultValue("https://bit.ly/2LZ0EOc");

        param("Valid Commands", m_args.valid_cmds)
          .defaultValue("abort,dislodge,dive,errors,info,force,cr6,restart,go,help,phone,reboot,sk,start,surface,on,off,sensor,sensors,reports,navstat,adcp,ctd,ecopuck,tblive,optode");

        m_db_file = m_ctx.dir_db / "Plan.db";

        bind<IMC::TextMessage>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::PlanControl>(this);
        bind<IMC::PlanGeneration>(this);
        bind<IMC::PowerSettings>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::DesiredHeading>(this);
        bind<IMC::SetServoPosition>(this);
        bind<IMC::SetThrusterActuation>(this);
        bind<IMC::AbsoluteWind>(this);
        bind<IMC::ScienceSensorsReply>(this);
        bind<IMC::Temperature>(this);
        bind<IMC::AirSaturation>(this);
        bind<IMC::Chlorophyll>(this);
        bind<IMC::SingleCurrentCell>(this);
        bind<IMC::Depth>(this);
        bind<IMC::DissolvedOrganicMatter>(this);
        bind<IMC::DissolvedOxygen>(this);
        bind<IMC::Pressure>(this);
        bind<IMC::Salinity>(this);
        bind<IMC::SoundSpeed>(this);
        bind<IMC::TBRFishTag>(this);
        bind<IMC::TBRSensor>(this);
        bind<IMC::Turbidity>(this);
        bind<IMC::Conductivity>(this);
        bind<IMC::PAR>(this);
        bind<IMC::EntityList>(this);
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      consume(const IMC::PlanControlState * msg)
      {
        Memory::replace(m_pcs, msg->clone());
      }

      void
      consume(const IMC::VehicleState * msg)
      {
        if(msg->getSource() == getSystemId())
          Memory::replace(m_vstate, msg->clone()); // L2 vehicle state.
        else
          Memory::replace(m_vstate_l3, msg->clone()); // L3 vehicle state.
      }

      void
      consume(const IMC::EntityList* msg)
      {
        if(msg->getSource() == 0x8804)
        {
          // L3 entities arrived.
          Utils::TupleList tuples(msg->list);
          m_opt_ent = tuples.get("Optode4835",0);
          m_adcp_ent = tuples.get("Nortek500",0);
          m_ctd_ent = tuples.get("SBE49FastCAT CTD",0);
          m_tbl_ent = tuples.get("TBLive",0);
          m_eco_ent = tuples.get("EcoPuck",0);
          m_par_ent = tuples.get("EcoPAR",0);

          spew("EntityList from L3 received!");

          m_l3_el = true;
        }
      }

      void
      consume(const IMC::ScienceSensorsReply * msg)
      {
        //spew("A) IMC::ScienceSensors arrived in L2, from %d",msg->getSourceEntity());
        if(msg->getSource() != getSystemId() && msg->getDestination() == getSystemId() && m_l3_el)
        {
          //spew("B) IMC::ScienceSensors arrived in L2, from %d",msg->getSourceEntity());
          // Received from L3.
          if(msg->getSourceEntity() == m_opt_ent)
          {
            m_sensors_status.opt = msg->opt;
            m_sensors_status.opt_dur = msg->opt_dur;
            m_sensors_status.opt_fr = msg->opt_fr;
            spew("IMC::ScienceSensors arrived from OPTODE: %d %d %d",m_sensors_status.opt,m_sensors_status.opt_dur,m_sensors_status.opt_fr);
          } else if(msg->getSourceEntity() == m_eco_ent)
          {
            m_sensors_status.eco = msg->eco;
            m_sensors_status.eco_dur = msg->eco_dur;
            m_sensors_status.eco_fr = msg->eco_fr;
            spew("IMC::ScienceSensors arrived from ECOPUCK: %d %d %d",m_sensors_status.eco,m_sensors_status.eco_dur,m_sensors_status.eco_fr);
          } else if(msg->getSourceEntity() == m_adcp_ent)
          {
            m_sensors_status.adcp = msg->adcp;
            m_sensors_status.adcp_dur = msg->adcp_dur;
            m_sensors_status.adcp_fr = msg->adcp_fr;
            spew("IMC::ScienceSensors arrived from ADCP: %d %d %d",m_sensors_status.adcp,m_sensors_status.adcp_dur,m_sensors_status.adcp_fr);
          } else if(msg->getSourceEntity() ==  m_tbl_ent)
          {
            //spew("IMC::ScienceSensors arrived from TBLIVE");
            m_sensors_status.tbl = msg->tbl;
            m_sensors_status.tbl_dur = msg->tbl_dur;
            m_sensors_status.tbl_fr = msg->tbl_fr;
          } else if(msg->getSourceEntity() == m_ctd_ent)
          {
            m_sensors_status.ctd = msg->ctd;
            m_sensors_status.ctd_dur = msg->ctd_dur;
            m_sensors_status.ctd_fr = msg->ctd_fr;
            spew("IMC::ScienceSensors arrived from CTD: %d %d %d",m_sensors_status.ctd,m_sensors_status.ctd_dur,m_sensors_status.ctd_fr);
          } else if(msg->getSourceEntity() == m_par_ent)
          {
            m_sensors_status.par = msg->par;
            m_sensors_status.par_dur = msg->par_dur;
            m_sensors_status.par_fr = msg->par_fr;
            spew("IMC::ScienceSensors arrived from ECOPAR: %d %d %d",m_sensors_status.par,m_sensors_status.par_dur,m_sensors_status.par_fr);
          } else
          {
            war("IMC::ScienceSensors from L3 - Entity NOT FOUND");
          }
        }
      }

      void
      consume(const IMC::Temperature * msg)
      {
        if(msg->getSource() != getSystemId())
        {
          // Received from L3.
          // Distinguish between CTD and OPT.
          if(msg->getSourceEntity() == m_opt_ent)
            m_temp_l3_opt = *msg;
          else if(msg->getSourceEntity() == m_ctd_ent)
            m_temp_l3_ctd = *msg;
          else if(msg->getSourceEntity() == m_tbl_ent)
            m_temp_l3_tbl = *msg;
          else
            war("IMC::Temperature from L3 - Entity NOT FOUND");

        } else
        {
          // Received from L2.
          m_temp_l2 = *msg;
        }
      }

      void
      consume(const IMC::AirSaturation * msg)
      {
        if(msg->getSource() != getSystemId())
        {
          // Received from L3.
          m_airsat = *msg;
        }
      }

      void
      consume(const IMC::Chlorophyll * msg)
      {
        if(msg->getSource() != getSystemId())
        {
          // Received from L3.
          m_chl = *msg;

          //spew("IMC::Chlorophyll message arrived in L2!");
        }
      }

      void
      consume(const IMC::SingleCurrentCell * msg)
      {
        if(msg->getSource() != getSystemId())
        {
          m_adcp_tmst_ISO = Time::Format::getTimeDateISO(msg->getTimeStamp());
          // Received from L3.
          m_cp = *msg;

          //debug("IMC::SingleCurrentCell message arrived in L2!");
          //debug("ADCP timestamp %s",m_adcp_tmst_ISO.c_str());
        }
      }

      void
      consume(const IMC::DissolvedOrganicMatter * msg)
      {
        if(msg->getSource() != getSystemId())
        {
          m_eco_tmst_ISO = Time::Format::getTimeDateISO(msg->getTimeStamp());
          m_eco_tmst = msg->getTimeStamp();
          // Received from L3.
          m_dom = *msg;

          //spew("IMC::DissolvedOrganicMatter message arrived in L2!");
          //spew("ECOPUCK timestamp %s",m_eco_tmst_ISO.c_str());
        }
      }

      void
      consume(const IMC::Depth * msg)
      {
        if(msg->getSource() != getSystemId())
        {
          // Received from L3.
          m_depth = *msg;
        }
      }

      void
      consume(const IMC::DissolvedOxygen * msg)
      {
        if(msg->getSource() != getSystemId())
        {
          m_opt_tmst = Time::Format::getTimeDateISO(msg->getTimeStamp());
          // Received from L3.
          m_dox = *msg;
        }
      }

      void
      consume(const IMC::Pressure * msg)
      {
        if(msg->getSource() != getSystemId())
        {
          // Received from L3.
          m_pres = *msg;
          m_pres.value = (int) m_pres.value;
        }
      }

      void
      consume(const IMC::Salinity * msg)
      {
        if(msg->getSource() != getSystemId())
        {
          m_ctd_tmst = Time::Format::getTimeDateISO(msg->getTimeStamp());
          // Received from L3.
          m_sal = *msg;
        }
      }

      void
      consume(const IMC::Conductivity * msg)
      {
        if(msg->getSource() != getSystemId())
        {
          // Received from L3.
          m_cond = *msg;
        }
      }

      void
      consume(const IMC::PAR * msg)
      {
        if(msg->getSource() != getSystemId())
        {
          m_par_tmst_ISO = Time::Format::getTimeDateISO(msg->getTimeStamp());
          m_par_tmst = msg->getTimeStamp();
          // Received from L3.
          m_par = *msg;
        }
      }

      void
      consume(const IMC::SoundSpeed * msg)
      {
        if(msg->getSource() != getSystemId())
        {
          // Received from L3.
          m_ss = *msg;
        }
      }

      void
      consume(const IMC::TBRFishTag * msg)
      {
        if(msg->getSource() != getSystemId())
        {
          // Received from L3.
          m_ftag = *msg;
        }
      }

      void
      consume(const IMC::TBRSensor * msg)
      {
        if(msg->getSource() != getSystemId())
        {
          m_tbl_tmst = Time::Format::getTimeDateISO(msg->getTimeStamp());
          // Received from L3.
          m_tblive = *msg;
        }
      }

      void
      consume(const IMC::Turbidity * msg)
      {
        if(msg->getSource() != getSystemId())
        {
          // Received from L3.
          m_turb = *msg;

          //spew("IMC::Turbidity message arrived in L2!");
        }
      }

      void
      consume(const IMC::TextMessage* msg)
      {
        inf("Processing text message from %s: '%s'", msg->origin.c_str(),
            sanitize(msg->text).c_str());
        Memory::replace(m_last, msg->clone());
        std::istringstream iss(msg->text);
        std::string cmd, args;
        splitCommand(msg->text, cmd, args);
        handleCommand(msg->origin, cmd, args);
      }

      void
      consume(const IMC::DesiredHeading* msg)
      {
        double des_heading = msg->value;
        m_des_heading = (int) Angles::degrees(des_heading);
        spew("Des Heading %d", m_des_heading);
      }

      void
      consume(const IMC::SetServoPosition* msg)
      {
        double rudder = msg->value;
        m_rudder = (int) Angles::degrees(rudder);
        spew("Rudder from IMC BUS %d", m_rudder);
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        double thruster_act = msg->value;
        m_thruster = (int) thruster_act*100;
        spew("Thruster from IMC BUS %d", m_thruster);
      }

      void
      consume(const IMC::AbsoluteWind* msg)
      {
        m_abswind_speed = msg->speed;
        double wind_dir = msg->dir;
        m_abswind_dir = (int) wind_dir; // already in degrees.

      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if(msg->getSource() != getSystemId())
          return;

        m_sog = msg->sog;
        double cog = msg->cog;
        cog = Angles::degrees(cog);
        m_cog = (int) cog;

        m_lat = Angles::degrees(msg->lat);
        m_lon = Angles::degrees(msg->lon);

        m_gpsfix_tmst = Time::Format::getTimeDateISO(msg->getTimeStamp());

      }


      //! Consume a PowerSettings Message.
      void
      consume(const IMC::PowerSettings* msg)
      {
        std::string ent = resolveEntity(msg->getSourceEntity()).c_str();
        if(ent.compare("Relay Power Settings") == 0)
        {
          m_pwr_settings.l2 = msg->l2;
          m_pwr_settings.l3 = msg->l3;
          m_pwr_settings.iridium = msg->iridium;
          m_pwr_settings.modem = msg->modem;
          m_pwr_settings.pumps = msg->pumps;
          m_pwr_settings.vhf = msg->vhf;
        }
      }

      //! Handles responses from PlanGeneration requests
      void
      consume(const IMC::PlanGeneration* msg)
      {
        if (m_last == NULL)
          return;

        std::stringstream ss;

        if (msg->op == PlanGeneration::OP_SUCCESS)
        {
          if (msg->params.empty())
            ss << "Started: '" << msg->plan_id << "'.";
          else
            ss << "Started: '" << msg->plan_id << " " << msg->params << "'.";

          reply(m_last->origin, ss.str());
        }
        else if (msg->op == PlanGeneration::OP_ERROR)
        {
          if (std::find(m_args.valid_cmds.begin(), m_args.valid_cmds.end(),
                        msg->plan_id) != m_args.valid_cmds.end())
          {
            ss << "Parser error: '" << msg->params << "'.";
            reply(m_last->origin, ss.str());
          }
        }
      }

      ///! Handles responses from PlanControl requests
      //
      // If the last command failed send that info to the user.
      void
      consume(const IMC::PlanControl* msg)
      {
        if (m_last == NULL)
          return;

        std::string last_cmd, args;
        splitCommand(m_last->text, last_cmd, args);

        // if the last command was a "start" or "force",
        // then the argument is the plan identifier
        if (last_cmd == "start" || last_cmd == "force")
          last_cmd = args;

        if (last_cmd == msg->plan_id)
        {
          // if the last plan request failed then send a reply to the user.
          if (msg->op == PlanControl::PC_START && msg->type == PlanControl::PC_FAILURE)
          {
            std::stringstream ss;
            ss << "Failed to exec " << msg->plan_id <<": " << msg->info << ".";
            reply(m_last->origin, ss.str());
          }
        }
      }

      bool
      retrievePlan(const std::string& plan_id, IMC::PlanSpecification& ps)
      {
        try
        {
          Database::Connection db(m_db_file.c_str(), Database::Connection::CF_RDONLY);
          Database::Statement get_plan_stmt("select data from Plan where plan_id=?", db);
          get_plan_stmt << plan_id;
          if (!get_plan_stmt.execute())
          {
            return false;
          }

          Database::Blob data;
          get_plan_stmt >> data;
          ps.deserializeFields((const uint8_t*)&data[0], data.size());

        }
        catch (std::runtime_error& e)
        {
          return false;
        }

        return true;
      }

      PlanSpecification
      splitPlan(const std::string& plan_id, const std::string& man_id)
      {
        PlanSpecification ps;
        std::map<std::string, IMC::PlanManeuver*> maneuvers;
        std::map<std::string, IMC::PlanTransition*> transitions;

        ps.clear();
        if (!retrievePlan(plan_id, ps))
        {
          throw std::invalid_argument("Invalid plan id");
        }

        for (PlanManeuver *man : ps.maneuvers)
        {
          maneuvers[man->maneuver_id] = man;
        }

        for (PlanTransition *pt : ps.transitions)
        {
          transitions[pt->source_man] = pt;
        }

        PlanSpecification newSpec;
        newSpec.end_actions = ps.end_actions;
        newSpec.start_actions = ps.start_actions;
        newSpec.variables = ps.variables;
        newSpec.vnamespace = ps.vnamespace;
        newSpec.description = ps.description;
        newSpec.plan_id = ps.plan_id + "-" + man_id;
        newSpec.start_man_id = man_id;


        std::string cur_man = man_id;
        while(!cur_man.empty()) {
          if (maneuvers.find(cur_man) == maneuvers.end())
          {
            throw std::invalid_argument("Invalid maneuver id");
          }

          newSpec.maneuvers.push_back(maneuvers[cur_man]);
          if (transitions.find(cur_man) == transitions.end())
          {
            cur_man = "";
          }
          else
          {
            PlanTransition *pt = transitions[cur_man];
            newSpec.transitions.push_back(pt);
            cur_man = pt->dest_man;
          }
        }

        return newSpec;
      }


      //! Checks if a string is a phone number
      bool
	    checkNumber(const std::string& str)
      {
    	  std::string::const_iterator it = str.begin();
    	  if(String::startsWith(str,"+") && str.size() > 1)
    		  it++;
    	  else if(String::startsWith(str,"+") && str.size() <= 1)
    		  return false;
    	  while (it != str.end() && std::isdigit(*it))
    		  ++it;
    	  return !str.empty() && it == str.end();
      }

      /**! Splits the text into command and arguments
       * \param[in] text The text to be split
       * \param[out] cmd The first word of the text
       * \param[out] args The remaining text or empty string if text has just one word.
       */
      void
      splitCommand(const std::string& text, std::string& cmd, std::string& args)
      {
        cmd = sanitize(text);
        size_t pos = cmd.find(" ");

        if (pos != std::string::npos)
        {
          args = cmd.substr(pos + 1);
          cmd = cmd.substr(0, pos);
        }

        std::transform(cmd.begin(), cmd.end(), cmd.begin(), ::tolower);

        if (!args.empty())
          inf("Command is '%s', Argument is '%s'", cmd.c_str(), args.c_str());
      }

      //! Send back a reply to a TextMessage's origin
      //! \param origin the original sender
      //! \param text the text to be sent back to the sender
      void
      reply(const std::string& origin, const std::string& text) {
        TransmissionRequest req;
        req.setDestination(m_ctx.resolver.id());
        req.data_mode = TransmissionRequest::DMODE_TEXT;
        req.txt_data = text;
        req.deadline = Clock::getSinceEpoch() + m_args.reply_timeout;
        req.req_id = ++m_reqid;

        // if request was sent over sms
        if (origin.find("+") == 0)
        {
          req.comm_mean = TransmissionRequest::CMEAN_GSM;
          req.destination = origin;
          inf("Replying to %s: '%s'", req.destination.c_str(), req.txt_data.c_str());
          dispatch(req);
        }
        else if (origin == "iridium")
        {
          req.comm_mean = TransmissionRequest::CMEAN_SATELLITE;
          req.destination = "";
          inf("Replying via Iridium: '%s'", req.txt_data.c_str());
          dispatch(req);
        }
        else
          war("Not replying as origin is not addressable: '%s'.",
              origin.c_str());
      }

      //! Parse incoming command and run it.
      //! \param origin The original sender
      //! \param cmd The command to be executed
      //! \param args The arguments of the command (if any)
      void
      handleCommand(const std::string& origin, const std::string& cmd, const std::string& args)
      {
        if (cmd == "start")
          handleStartCommand(origin, args, false);
        else if (cmd == "force")
          handleStartCommand(origin, args, true);
        else if (cmd == "cr6")
          handleCR6Command(origin, args);
        else if (cmd == "on")
          handleTurnOnCommand(origin, args);
        else if (cmd == "off")
          handleTurnOffCommand(origin, args);
        else if (cmd == "restart")
          handleRelaysCommand(origin, args);
        else if (cmd == "reports")
          handleReportsCommand(origin, args);
        else if (cmd == "abort")
          handleAbortCommand(origin, args);
        else if (cmd == "errors")
          handleErrorsCommand(origin);
        else if (cmd == "errors_l3")
          handleErrors_l3Command(origin);
        else if (cmd == "info")
          handleInfoCommand(origin);
        else if (cmd == "help")
          handleHelpCommand(origin);
        else if (cmd == "navstat")
          handleNavstatCommand(origin);
        else if (cmd == "reboot")
          handleRebootCommand(origin, args);
        else if (cmd == "phone")
          handleChangeNumCommand(origin, args);
        else if (cmd == "sensors")
          handleL3SensorsCommand(origin, args);
        else if (cmd == "sensor")
          handleL3SensorCommand(origin, args);
        else if (cmd == "resume")
          handleResumeCommand(origin, args);
        else if (cmd == "ctd")
          handleCTDReportCommand(origin, args);
        else if (cmd == "optode")
          handleOptodeReportCommand(origin, args);
        else if (cmd == "ecopuck")
          handleEcoPuckReportCommand(origin, args);
        else if (cmd == "tblive")
          handleTBLiveReportCommand(origin, args);
        else if (cmd == "adcp")
          handleADCPReportCommand(origin, args);
        else if (cmd == "ecopar")
          handleEcoPARReportCommand(origin,args);
        else if (cmd == "radiation")
          handleRadiationReportCommand(origin,args);
        else if (cmd == "actuation")
          handleActuationCommand(origin,args);
        else if (cmd == "fence")
          handleFenceCommand(origin,args);
        else if (cmd == "camera")
          handleCameraCommand(origin,args);
        else if (cmd == "colav")
          handleColavCommand(origin,args);
        else if (cmd == "gains")
          handleGainsCommand(origin,args);
        else
          handlePlanGeneratorCommand(origin, cmd, args);
      }

      //! Execute command 'ERRORS'
      void
      handleErrorsCommand(const std::string& origin)
      {
        std::stringstream ss;

        if (m_vstate != NULL)
        {
          if (m_vstate->error_count > 0) {
            ss << (int) m_vstate->error_count << " errors: " << m_vstate->error_ents;
            reply(origin, ss.str());
          }
          else
            reply(origin, "Vehicle has no reported errors.");
        }
      }

      //! Execute command 'ERRORS_L3'
      void
      handleErrors_l3Command(const std::string& origin)
      {
        std::stringstream ss;

        if (m_vstate_l3 != NULL)
        {
          if (m_vstate_l3->error_count > 0) {
            ss << (int) m_vstate_l3->error_count << " errors: " << m_vstate_l3->error_ents;
            reply(origin, ss.str());
          }
          else
            reply(origin, "L3 has no reported errors.");
        }
      }

      //! Execute command 'CR6'
      void
      handleCR6Command(const std::string& origin, const std::string& args)
      {
        // Create PowerSettings Message.
        IMC::PowerSettings pwr_settings;
        pwr_settings.l2 = args[0] - '0';
        pwr_settings.l3 = args[1] - '0';
        pwr_settings.iridium = args[2] - '0';
        pwr_settings.modem = args[3] - '0';
        pwr_settings.pumps = args[4] - '0';
        pwr_settings.vhf = args[5] - '0';

        spew("Updated pwrSettings: %d%d%d%d%d%d",
                                 pwr_settings.l2, pwr_settings.l3,
                                 pwr_settings.iridium, pwr_settings.modem,
                                 pwr_settings.pumps, pwr_settings.vhf);

        // Dispatch power settings to L1.
        dispatch(pwr_settings, DF_LOOP_BACK);

        std::stringstream ss;
        ss << "New CR6 settings applied.";
        reply(origin,ss.str());
      }

      //! Execute command 'RESTART'
      void
      handleRelaysCommand(const std::string& origin, const std::string& args)
      {
        IMC::PowerSettings pwr_settings;
        pwr_settings = m_pwr_settings; // last received power settings from CR6 task.

        if(args.compare("l2") == 0)
          pwr_settings.l2 = 2;
        else if(args.compare("l3") == 0)
          pwr_settings.l3 = 2;
        else if (args.compare("iridium") == 0)
          pwr_settings.iridium = 2;
        else if (args.compare("modem") == 0)
          pwr_settings.modem = 2;
        else if (args.compare("pumps") == 0)
          pwr_settings.pumps = 2;
        else if (args.compare("vhf") == 0)
          pwr_settings.vhf = 2;

        spew("Updated pwrSettings: %d%d%d%d%d%d",
                                 pwr_settings.l2, pwr_settings.l3,
                                 pwr_settings.iridium, pwr_settings.modem,
                                 pwr_settings.pumps, pwr_settings.vhf);

        // Dispatch power settings to L1.
        dispatch(pwr_settings, DF_LOOP_BACK);

        std::string relay;
        relay = args;
        std::stringstream ss;
        ss << relay << " is rebooting.";
        reply(origin,ss.str());
      }

      //! Execute command 'ON'
      void
      handleTurnOnCommand(const std::string& origin, const std::string& args)
      {
        IMC::PowerSettings pwr_settings;
        pwr_settings = m_pwr_settings; // last received power settings from CR6 task.

        std::string relay;
        relay = args;
        std::stringstream ss;

        if(args.compare("l2") == 0 && pwr_settings.l2 == 0)
        {
          ss << relay << " is already on.";
          reply(origin,ss.str());
        } else if(args.compare("l2") == 0 && pwr_settings.l2 == 1)
        {
          pwr_settings.l2 = 0;
          // Dispatch power settings to L1.
          dispatch(pwr_settings, DF_LOOP_BACK);
          ss << relay << " is turning on.";
          reply(origin,ss.str());
        } else if(args.compare("l3") == 0 && pwr_settings.l3 == 0)
        {
          ss << relay << " is already on.";
          reply(origin,ss.str());
        } else if(args.compare("l3") == 0 && pwr_settings.l3 == 1)
        {
          pwr_settings.l3 = 0;
          // Dispatch power settings to L1.
          dispatch(pwr_settings, DF_LOOP_BACK);
          ss << relay << " is turning on.";
          reply(origin,ss.str());
        } else if(args.compare("iridium") == 0 && pwr_settings.iridium == 0)
        {
          ss << relay << " is already on.";
          reply(origin,ss.str());
        } else if(args.compare("iridium") == 0 && pwr_settings.iridium == 1)
        {
          pwr_settings.iridium = 0;
          // Dispatch power settings to L1.
          dispatch(pwr_settings, DF_LOOP_BACK);
          ss << relay << " is turning on.";
          reply(origin,ss.str());
        } else if(args.compare("modem") == 0 && pwr_settings.modem == 0)
        {
          ss << relay << " is already on.";
          reply(origin,ss.str());
        } else if(args.compare("modem") == 0 && pwr_settings.modem == 1)
        {
          pwr_settings.modem = 0;
          // Dispatch power settings to L1.
          dispatch(pwr_settings, DF_LOOP_BACK);
          ss << relay << " is turning on.";
          reply(origin,ss.str());
        } else if(args.compare("pumps") == 0 && pwr_settings.pumps == 0)
        {
          ss << relay << " is already on.";
          reply(origin,ss.str());
        } else if(args.compare("pumps") == 0 && pwr_settings.pumps == 1)
        {
          pwr_settings.pumps = 0;
          // Dispatch power settings to L1.
          dispatch(pwr_settings, DF_LOOP_BACK);
          ss << relay << " is turning on.";
          reply(origin,ss.str());
        } else if(args.compare("vhf") == 0 && pwr_settings.vhf == 0)
        {
          ss << relay << " is already on.";
          reply(origin,ss.str());
        } else if(args.compare("vhf") == 0 && pwr_settings.vhf == 1)
        {
          pwr_settings.vhf = 0;
          // Dispatch power settings to L1.
          dispatch(pwr_settings, DF_LOOP_BACK);
          ss << relay << " is turning on.";
          reply(origin,ss.str());
        } else
        {
          ss  << "Invalid command!";
          reply(origin,ss.str());
        }

        spew("Updated pwrSettings: %d%d%d%d%d%d",
                                 pwr_settings.l2, pwr_settings.l3,
                                 pwr_settings.iridium, pwr_settings.modem,
                                 pwr_settings.pumps, pwr_settings.vhf);
      }

      //! Execute command 'OFF'
      void
      handleTurnOffCommand(const std::string& origin, const std::string& args)
      {
        IMC::PowerSettings pwr_settings;
        pwr_settings = m_pwr_settings; // last received power settings from CR6 task.

        if(args.compare("l2") == 0)
          pwr_settings.l2 = 1;
        else if(args.compare("l3") == 0)
          pwr_settings.l3 = 1;
        else if (args.compare("iridium") == 0)
          pwr_settings.iridium = 1;
        else if (args.compare("modem") == 0)
          pwr_settings.modem = 1;
        else if (args.compare("pumps") == 0)
          pwr_settings.pumps = 1;
        else if (args.compare("vhf") == 0)
          pwr_settings.vhf = 1;

        spew("Updated pwrSettings: %d%d%d%d%d%d",
                                 pwr_settings.l2, pwr_settings.l3,
                                 pwr_settings.iridium, pwr_settings.modem,
                                 pwr_settings.pumps, pwr_settings.vhf);

        // Dispatch power settings to L1.
        dispatch(pwr_settings, DF_LOOP_BACK);

        std::string relay;
        relay = args;
        std::stringstream ss;
        ss << relay << " is turning off.";
        reply(origin,ss.str());
      }

      //! Execute command 'ACTUATION'
      void
      handleActuationCommand(const std::string& origin, const std::string& args)
      {
        IMC::SetServoPosition servo;
        IMC::SetThrusterActuation thruster;
        std::stringstream ss;
        char rudder[32], thrust[32];

        if (m_pcs == NULL || m_vstate == NULL)
        {
          war("Not replying as no state messages are available.");
          return;
        }

        //bool ready = m_pcs->last_outcome == PlanControlState::LPO_NONE &&
        //    (m_pcs->state == PlanControlState::PCS_READY);

        bool executing = m_pcs->state == PlanControlState::PCS_EXECUTING;

        // For now, this is done when vehicle is NOT EXECUTING.
        if(!executing)
        {
          std::sscanf(args.c_str(), "%s %s", rudder, thrust);
          int rud = std::atoi(rudder);
          int th = std::atoi(thrust);

          double rud_d = (double) rud;
          double th_d = (double) th/100.0;
          
          servo.value = rud_d;
          thruster.value = th_d;

          spew("Rudder from Iridium %f", rud_d);
          spew("Thruster from Iridium %f", th_d);

          dispatch(servo);
          dispatch(thruster);

          ss << "Actuating..";
          reply(origin,ss.str());
        } else
        {
          ss << "Vehicle is executing!";
          reply(origin,ss.str());
        }
      }

      //! Execute command 'FENCE'
      void
      handleFenceCommand(const std::string& origin, const std::string& args)
      {
        std::stringstream ss;
        bool executing = m_pcs->state == PlanControlState::PCS_EXECUTING;
        if(executing)
        {
          IMC::OperationalLimits limits;
          IMC::MessageList<IMC::PolygonVertex> locations;

          //int pos = std::count(s.begin(), s.end(), ';');
          // Get the first occurrence
          size_t pos = args.find(";");
          // Repeat till end is reached
          std::vector<size_t> loc_pos;
          while(pos != std::string::npos)
          {
            // Add position to the vector
            loc_pos.push_back(pos);
            // Get the next occurrence from the current position
            pos = args.find(";", pos + 1);
          }

          for(int i=0; i<loc_pos.size(); i++)
          {
            if(i==0)
            {
              std::string pair = args.substr(0,loc_pos[0]);
              size_t comma_pos = pair.find(",");
              double pair_double[2];
              pair_double[0] = std::stod(pair.substr(0,comma_pos-1));
              pair_double[1] = std::stod(pair.substr(comma_pos+1,pair.length()-1));
              IMC::PolygonVertex vertex;
              vertex.lat = Angles::radians(pair_double[0]);
              vertex.lon = Angles::radians(pair_double[1]);
              locations.push_back(vertex);
              debug("LAT: %f, LON: %f",Angles::degrees(pair_double[0]),Angles::degrees(pair_double[1]));
            } else
            {
              std::string pair = args.substr(loc_pos[i-1]+1,loc_pos[i]-1);
              size_t comma_pos = pair.find(",");
              double pair_double[2];
              pair_double[0] = std::stod(pair.substr(0,comma_pos-1));
              pair_double[1] = std::stod(pair.substr(comma_pos+1,pair.length()-1));
              IMC::PolygonVertex vertex;
              vertex.lat = Angles::radians(pair_double[0]);
              vertex.lon = Angles::radians(pair_double[1]);
              locations.push_back(vertex);
              debug("LAT: %f, LON: %f",Angles::degrees(pair_double[0]),Angles::degrees(pair_double[1]));
            }
          }

          limits.mask = limits.mask | IMC::OPL_POLYGON;
          limits.setDestinationEntity(resolveEntity("Operational Limits"));
          limits.vertices = locations;
          dispatch(limits);

          ss << "Applying geofence..";
          reply(origin,ss.str());
        } else
        {
          ss << "USV is not MANEUVERING!";
          reply(origin,ss.str());
        }
      }

      //! Execute command 'CAMERA'
      void
      handleCameraCommand(const std::string& origin, const std::string& args)
      {
        std::stringstream ss;
        ss << "Sending command to camera..";
        reply(origin,ss.str());

        // Send command to Sensors/Camera.
        IMC::DevDataText cmd;
        cmd.value = args;
        cmd.setDestinationEntity(resolveEntity("Camera"));
        dispatch(cmd);
      }

      void
      handleColavCommand(const std::string& origin, const std::string& args)
      {
        std::stringstream ss;
        ss << "Sending command to path controller..";
        reply(origin,ss.str());

        // Send command to Control/Path/CAS.
        IMC::DevDataText cmd;
        cmd.value = args;
        cmd.setDestinationEntity(resolveEntity("Path Control"));
        dispatch(cmd);
      }

      void
      handleGainsCommand(const std::string& origin, const std::string& args)
      {
        std::stringstream ss;
        ss << "Sending command to Autopilot..";
        reply(origin,ss.str());

        // Send command to Control/ASV/Autopilot.
        IMC::DevDataText cmd;
        cmd.value = args;
        cmd.setDestinationEntity(resolveEntity("Autopilot"));
        dispatch(cmd);
      }

      //! Execute command 'RESTART'
      void
      handleReportsCommand(const std::string& origin, const std::string& args)
      {
        IMC::IridiumReport report;

        int rep_freq = std::stoi(args);
        report.frequency = rep_freq;

        spew("Iridium Report Frequency set to %d seconds", report.frequency);

        // Dispatch power settings to L1.
        dispatch(report, DF_LOOP_BACK);

        std::stringstream ss;
        ss << "Reports Frequency set.";
        reply(origin,ss.str());
      }

      //!Execute command 'phone' for the one in args or for origin if the args is null
      void
	    handleChangeNumCommand(const std::string& origin,const std::string& args)
      {
    	  std::string newNum,foo;
    	  std::stringstream ss;
    	  if(args.empty())
    		  newNum = origin;
    	  else {
    		  splitCommand(args,newNum,foo); //retrieves the first arg
    		  newNum = sanitize(newNum);
    		  if(!checkNumber(newNum))
    		  {
    			  war(DTR("Unable to change emergency number to %s"),newNum.c_str());
    			  ss << "Unable to change emergency number, " << "see " << m_args.help_url << ".";
    			  reply(origin,ss.str());
    			  return; //Not a valid phone number
    		  }
    	  }
    		  IMC::EntityParameter parmeter;
    		  parmeter.name = "SMS Recipient Number";
    		  parmeter.value = newNum;
    		  IMC::SetEntityParameters params;
    		  params.name = "Emergency Monitor";
    		  params.params.push_back(parmeter);
    		  dispatch(params, DF_LOOP_BACK);
    		  ss << "Changed emergency number " << " to " << newNum;
    		  reply(origin,ss.str());
      }

      //! Execute command 'INFO'
      void
      handleInfoCommand(const std::string& origin)
      {
        std::stringstream ss;
        if (m_pcs == NULL || m_vstate == NULL)
        {
          war("Not replying as no state messages are available.");
          return;
        }

        bool executing = m_pcs->state == PlanControlState::PCS_EXECUTING;
        bool initializing = m_pcs->state == PlanControlState::PCS_INITIALIZING;
        bool succeeded = m_pcs->last_outcome == PlanControlState::LPO_SUCCESS &&
            (m_pcs->state == PlanControlState::PCS_READY);
        bool ready = m_pcs->last_outcome == PlanControlState::LPO_NONE &&
            (m_pcs->state == PlanControlState::PCS_READY);

        if (executing)
        {
          std::string m_sog_str = std::to_string(m_sog);
          std::string m_sog_reduced = m_sog_str.substr(0,m_sog_str.size()-5);
          ss << "On " << m_pcs->plan_id << "::" << m_pcs->man_id << "/c:" << std::to_string(m_cog) << "/s:" << m_sog_reduced;

          /*if (m_pcs->plan_eta != -1)
            ss << m_pcs->plan_eta << "s / " << std::fixed << std::setprecision(1) << m_pcs->plan_progress << "%.";
          else
            ss << "N/D.";
          */
        }
        else if (initializing)
          ss << "Initializing " << m_pcs->plan_id << ".";
        else if (ready)
          ss << "Vehicle is ready.";
        else if (succeeded)
          ss << "Finished " << m_pcs->plan_id << ".";
        else
          ss << "Failed to exec " << m_pcs->plan_id <<": " << m_vstate->last_error << ".";

        reply(origin, ss.str());
      }

      //! Execute command 'NAVSTAT'
      void
      handleNavstatCommand(const std::string& origin)
      {
        std::stringstream ss;
        bool executing = m_pcs->state == PlanControlState::PCS_EXECUTING;
        if (m_pcs == NULL || m_vstate == NULL || !executing)
        {
          war("Not replying as no state messages are available.");
          ss << "Vehicle is not executing!";
          reply(origin,ss.str());
        } else
        {
          std::string m_lat_str = std::to_string(m_lat);
          std::string m_lat_reduced = m_lat_str.substr(0,m_lat_str.size()-2);
          std::string m_lon_str = std::to_string(m_lon);
          std::string m_lon_reduced = m_lon_str.substr(0,m_lon_str.size()-2);
          std::string m_sog_str = std::to_string(m_sog);
          std::string m_sog_reduced = m_sog_str.substr(0,m_sog_str.size()-5);
          std::string m_aws_str = std::to_string(m_abswind_speed);
          std::string m_aws_reduced = m_aws_str.substr(0,m_aws_str.size()-5);

          ss << "(NAV) " << m_gpsfix_tmst << "/" << m_lat_reduced << " " << m_lon_reduced << "/C:" << std::to_string(m_cog) << "/dC:" << std::to_string(m_des_heading);
          ss << "/r:" << std::to_string(m_rudder) << "/th:" << std::to_string(m_thruster) << "/S:" << m_sog_reduced;
          ss << "/aws:" << m_aws_reduced << "/awd:" << std::to_string(m_abswind_dir);
          reply(origin, ss.str());
        }
      }

      //! Execute command 'CTD'
      void
      handleCTDReportCommand(const std::string& origin, const std::string& args)
      {
        std::stringstream ss;
        if(m_pwr_settings.l3 == 1)
        {
          ss << "L3 is off!";
          reply(origin,ss.str());
          return;
        }
        if(!m_l3_el)
        {
          ss << "DUNE L3 is damaged!";
          reply(origin,ss.str());
          return;
        }
        
        // L3 is ON and ready.
        if(args.compare("report") == 0)
        {
          if(m_sensors_status.ctd == 0 || (m_sensors_status.ctd == 1 && m_sensors_status.ctd_dur != 0.0))
          {
            std::string m_lat_str = std::to_string(m_lat);
            std::string m_lat_reduced = m_lat_str.substr(0,m_lat_str.size()-2);
            std::string m_lon_str = std::to_string(m_lon);
            std::string m_lon_reduced = m_lon_str.substr(0,m_lon_str.size()-2);
            
            std::string m_temp_ctd_s = std::to_string(m_temp_l3_ctd.value);
            m_temp_ctd_reduced = m_temp_ctd_s.substr(0,m_temp_ctd_s.size()-4);
            std::string m_cond_s = std::to_string(m_cond.value);
            m_cond_reduced = m_cond_s.substr(0,m_cond_s.size()-4);
            std::string m_sal_s = std::to_string(m_sal.value);
            m_sal_reduced = m_sal_s.substr(0,m_sal_s.size()-4);
            std::string m_ss_s = std::to_string(m_ss.value);
            m_ss_reduced = m_ss_s.substr(0,m_ss_s.size()-4);
            std::string m_depth_s = std::to_string(m_depth.value);
            m_depth_reduced = m_depth_s.substr(0,m_depth_s.size()-4);
            std::string m_pres_s = std::to_string(m_pres.value);
            m_pres_reduced = m_pres_s.substr(0,m_pres_s.size()-7);

            if(m_sensors_status.ctd == 0)
              ss << "(CTD) ";
            else if(m_sensors_status.ctd == 1 && m_sensors_status.ctd_dur != 0.0)
              ss << "(CTD-P) ";

            ss << m_ctd_tmst << "/" << m_lat_reduced << " " << m_lon_reduced << "/S:" << m_sal_reduced << "/C:" << m_cond_reduced << "/T:" << m_temp_ctd_reduced << "/SS:" << m_ss_reduced << "/D:" << m_depth_reduced << "/P:" << m_pres_reduced;
            reply(origin,ss.str());
          } else
          {
            if(!m_ctd_tmst.empty())
              ss << "(CTD) last " << m_ctd_tmst << "/S:" << m_sal_reduced << "/C:" << m_cond_reduced << "/T:" << m_temp_ctd_reduced << "/SS:" << m_ss_reduced << "/D:" << m_depth_reduced << "/P:" << m_pres_reduced;
            else
              ss << "CTD never sampled!";

            reply(origin,ss.str());
          }
        } else
        {
          ss << "Be more specific!";
          reply(origin,ss.str());
        }
      }

      //! Execute command 'OPTODE'
      void
      handleOptodeReportCommand(const std::string& origin, const std::string& args)
      {
        std::stringstream ss;
        if(m_pwr_settings.l3 == 1)
        {
          ss << "L3 is off!";
          reply(origin,ss.str());
          return;
        }
        if(!m_l3_el)
        {
          ss << "DUNE L3 is damaged!";
          reply(origin,ss.str());
          return;
        }

        // L3 is ON and ready.
        if(args.compare("report") == 0)
        {
          if(m_sensors_status.opt == 0 || (m_sensors_status.opt == 1 && m_sensors_status.opt_dur != 0.0))
          {
            std::string m_lat_str = std::to_string(m_lat);
            std::string m_lat_reduced = m_lat_str.substr(0,m_lat_str.size()-2);
            std::string m_lon_str = std::to_string(m_lon);
            std::string m_lon_reduced = m_lon_str.substr(0,m_lon_str.size()-2);
            
            std::string m_temp_opt_s = std::to_string(m_temp_l3_opt.value);
            m_temp_opt_reduced = m_temp_opt_s.substr(0,m_temp_opt_s.size()-4);
            std::string m_airsat_s = std::to_string(m_airsat.value);
            m_airsat_reduced = m_airsat_s.substr(0,m_airsat_s.size()-4);
            std::string m_dox_s = std::to_string(m_dox.value);
            m_dox_reduced = m_dox_s.substr(0,m_dox_s.size()-4);

            if(m_sensors_status.opt == 0)
              ss << "(OPT) ";
            else if(m_sensors_status.opt == 1 && m_sensors_status.opt_dur != 0.0)
              ss << "(OPT-P) ";

            ss << m_opt_tmst << "/" << m_lat_reduced << " " << m_lon_reduced << "/T:" << m_temp_opt_reduced << "/AS:" << m_airsat_reduced << "/DOX:" << m_dox_reduced;
            reply(origin,ss.str());
          } else
          {
            if(!m_opt_tmst.empty())
              ss << "(OPT) last " << m_opt_tmst << "/T:" << m_temp_opt_reduced << "/AS:" << m_airsat_reduced << "/DOX:" << m_dox_reduced;
            else
              ss << "Optode never sampled!";

            reply(origin,ss.str());
          }
        } else
        {
          ss << "Be more specific!";
          reply(origin,ss.str());
        }
        
      }

      //! Execute command 'ECOPUCK'
      void
      handleEcoPuckReportCommand(const std::string& origin, const std::string& args)
      {
        std::stringstream ss;
        if(m_pwr_settings.l3 == 1)
        {
          ss << "L3 is off!";
          reply(origin,ss.str());
          return;
        }
        if(!m_l3_el)
        {
          ss << "DUNE L3 is damaged!";
          reply(origin,ss.str());
          return;
        }

        // L3 is ON and ready.
        if(args.compare("report") == 0)
        {
          if((m_sensors_status.eco == 0) || (m_sensors_status.eco == 1 && m_sensors_status.eco_dur != 0.0))
          {
            std::string m_lat_str = std::to_string(m_lat);
            std::string m_lat_reduced = m_lat_str.substr(0,m_lat_str.size()-2);
            std::string m_lon_str = std::to_string(m_lon);
            std::string m_lon_reduced = m_lon_str.substr(0,m_lon_str.size()-2);
            std::string m_dom_s = std::to_string(m_dom.value);
            m_dom_reduced = m_dom_s.substr(0,m_dom_s.size()-4);
            std::string m_turb_s = std::to_string(m_turb.value);
            m_turb_reduced = m_turb_s.substr(0,m_turb_s.size()-2);
            std::string m_chl_s = std::to_string(m_chl.value);
            m_chl_reduced = m_chl_s.substr(0,m_chl_s.size()-2);

            if(m_sensors_status.eco == 0)
              ss << "(ECO) ";
            else if(m_sensors_status.eco == 1 && m_sensors_status.eco_dur != 0.0)
              ss << "(ECO-P) ";

            ss << m_eco_tmst_ISO << "/" << m_lat_reduced << " " << m_lon_reduced << "/FDOM:" << m_dom_reduced << "/TU:" << m_turb_reduced << "/CHLA:" << m_chl_reduced;
            reply(origin,ss.str());
          } else
          {
            if(!m_eco_tmst_ISO.empty())
              ss << "(ECO) last " << m_eco_tmst_ISO << "/FDOM:" << m_dom_reduced << "/TU:" << m_turb_reduced << "/CHLA:" << m_chl_reduced;
            else
              ss << "EcoPuck never sampled!";

            reply(origin,ss.str());
          }
        } else
        {
          ss << "Be more specific!";
          reply(origin,ss.str());
        }
      }

      //! Execute command 'RADIATION'
      void
      handleRadiationReportCommand(const std::string& origin, const std::string& args)
      {
        std::stringstream ss;
        if(m_pwr_settings.l3 == 1)
        {
          ss << "L3 is off!";
          reply(origin,ss.str());
          return;
        }
        if(!m_l3_el)
        {
          ss << "DUNE L3 is damaged!";
          reply(origin,ss.str());
          return;
        }
        
        // L3 is ON and ready.
        if(args.compare("report") == 0)
        {
          if(((m_sensors_status.par == 0) || (m_sensors_status.par == 1 && m_sensors_status.par_dur != 0.0)) && ((m_sensors_status.eco == 0) || (m_sensors_status.eco == 1 && m_sensors_status.eco_dur != 0.0)))
          {
            std::string m_lat_str = std::to_string(m_lat);
            std::string m_lat_reduced = m_lat_str.substr(0,m_lat_str.size()-2);
            std::string m_lon_str = std::to_string(m_lon);
            std::string m_lon_reduced = m_lon_str.substr(0,m_lon_str.size()-2);
            std::string m_dom_s = std::to_string(m_dom.value);
            m_dom_reduced = m_dom_s.substr(0,m_dom_s.size()-4);
            std::string m_turb_s = std::to_string(m_turb.value);
            m_turb_reduced = m_turb_s.substr(0,m_turb_s.size()-4);
            std::string m_chl_s = std::to_string(m_chl.value);
            m_chl_reduced = m_chl_s.substr(0,m_chl_s.size()-4);
            std::string m_par_s = std::to_string(m_par.value);
            m_par_reduced = m_par_s.substr(0,m_par_s.size()-4);

            ss << "(RAD) " << m_lat_reduced << " " << m_lon_reduced << "/" << m_par_tmst_ISO << "/PAR:" << m_par_reduced << "/" << m_eco_tmst_ISO << "/FDOM:" << m_dom_reduced << "/TU:" << m_turb_reduced << "/CHLA:" << m_chl_reduced;
            reply(origin,ss.str());
          } else if(((m_sensors_status.par == 0) || (m_sensors_status.par == 1 && m_sensors_status.par_dur != 0.0)) && ((m_sensors_status.eco == 1 && m_sensors_status.eco_dur == 0.0)))
          {
            ss << "EcoPuck is off";
            reply(origin,ss.str());
          } else if(((m_sensors_status.eco == 0) || (m_sensors_status.eco == 1 && m_sensors_status.eco_dur != 0.0)) && ((m_sensors_status.par == 1 && m_sensors_status.par_dur == 0.0)))
          {
            ss << "EcoPAR is off";
            reply(origin,ss.str());
          } else if(((m_sensors_status.eco == 1 && m_sensors_status.eco_dur == 0.0)) && ((m_sensors_status.par == 1 && m_sensors_status.par_dur == 0.0)))
          {
            ss << "EcoPuck and EcoPAR are off";
            reply(origin,ss.str());
          }
        } else
        {
          ss << "Be more specific!";
          reply(origin,ss.str());
        }
      }

      //! Execute command 'ECOPAR'
      void
      handleEcoPARReportCommand(const std::string& origin, const std::string& args)
      {
        std::stringstream ss;
        if(m_pwr_settings.l3 == 1)
        {
          ss << "L3 is off!";
          reply(origin,ss.str());
          return;
        }
        if(!m_l3_el)
        {
          ss << "DUNE L3 is damaged!";
          reply(origin,ss.str());
          return;
        }
        
        // L3 is ON and ready.
        if(args.compare("report") == 0)
        {
          if((m_sensors_status.par == 0) || (m_sensors_status.par == 1 && m_sensors_status.par_dur != 0.0))
          {
            std::string m_lat_str = std::to_string(m_lat);
            std::string m_lat_reduced = m_lat_str.substr(0,m_lat_str.size()-2);
            std::string m_lon_str = std::to_string(m_lon);
            std::string m_lon_reduced = m_lon_str.substr(0,m_lon_str.size()-2);
            std::string m_par_s = std::to_string(m_par.value);
            m_par_reduced = m_par_s.substr(0,m_par_s.size()-4);
            
            if(m_sensors_status.par == 0)
              ss << "(PAR) ";
            else if(m_sensors_status.par == 1 && m_sensors_status.par_dur != 0.0)
              ss << "(PAR-P) ";

            ss << m_par_tmst_ISO << "/" << m_lat_reduced << " " << m_lon_reduced << "/PAR:" << m_par_reduced;
            reply(origin,ss.str());
          } else
          {
            if(!m_par_tmst_ISO.empty())
              ss << "(PAR) last " << m_par_tmst_ISO << "/PAR:" << m_par_reduced;
            else
              ss << "PAR never sampled!";

            reply(origin,ss.str());
          }
        } else
        {
          ss << "Be more specific!";
          reply(origin,ss.str());
        }
      }

      //! Execute command 'TBLIVE'
      void
      handleTBLiveReportCommand(const std::string& origin, const std::string& args)
      {
        std::stringstream ss;
        if(m_pwr_settings.l3 == 1)
        {
          ss << "L3 is off!";
          reply(origin,ss.str());
          return;
        }
        if(!m_l3_el)
        {
          ss << "DUNE L3 is damaged!";
          reply(origin,ss.str());
          return;
        }
        
        // L3 is ON and ready.
        if(args.compare("report") == 0)
        {
          if(m_sensors_status.tbl == 0 || (m_sensors_status.tbl == 1 && m_sensors_status.tbl_dur != 0.0))
          {
            std::string m_lat_str = std::to_string(m_lat);
            std::string m_lat_reduced = m_lat_str.substr(0,m_lat_str.size()-2);
            std::string m_lon_str = std::to_string(m_lon);
            std::string m_lon_reduced = m_lon_str.substr(0,m_lon_str.size()-2);
            
            std::string m_sn_s = std::to_string(m_tblive.serial_no);
            std::string m_temp_tbl_s = std::to_string(m_tblive.temperature);
            std::string m_temp_tbl_reduced = m_temp_tbl_s.substr(0,m_temp_tbl_s.size()-4);
            std::string m_anl_s = std::to_string(m_tblive.avg_noise_level);
            std::string m_pnl_s = std::to_string(m_tblive.peak_noise_level);
            std::string m_rlf_s = std::to_string(m_tblive.recv_listen_freq);
            std::string m_rma_s = std::to_string(m_tblive.recv_mem_addr);

            if(m_sensors_status.tbl == 0)
              ss << "(TBL) ";
            else if(m_sensors_status.tbl == 1 && m_sensors_status.tbl_dur != 0.0)
              ss << "(TBL-P) ";

            ss << m_tbl_tmst << "/" << m_lat_reduced << " " << m_lon_reduced << "/SN:" << m_sn_s << "/T:" << m_temp_tbl_reduced << "/ANL:" << m_anl_s << "/PNL:" << m_pnl_s << "/RLF:" << m_rlf_s << "/RMA:" << m_rma_s;
            reply(origin,ss.str());
          } else
          {
            ss << "TBLive is not sampling!";
            reply(origin,ss.str());
          }
        } else
        {
          ss << "Be more specific!";
          reply(origin,ss.str());
        }
      }

      //! Execute command 'ADCP'
      void
      handleADCPReportCommand(const std::string& origin, const std::string& args)
      {
        std::stringstream ss;
        if(m_pwr_settings.l3 == 1)
        {
          ss << "L3 is off!";
          reply(origin,ss.str());
          return;
        }
        if(!m_l3_el)
        {
          ss << "DUNE L3 is damaged!";
          reply(origin,ss.str());
          return;
        }
        // If m_cp does not exist, the sensor was never turned on since last dune restart.
        if(m_adcp_tmst_ISO.empty())
        {
          ss << "ADCP never sampled!";
          reply(origin,ss.str());
          return;
        }

        debug("Received ADCP request");

        double depth_wanted = atof(args.c_str());
        debug("DEPTH WANTED %f",depth_wanted);
        
        std::string m_lat_str = std::to_string(m_lat);
        std::string m_lat_reduced = m_lat_str.substr(0,m_lat_str.size()-2);
        std::string m_lon_str = std::to_string(m_lon);
        std::string m_lon_reduced = m_lon_str.substr(0,m_lon_str.size()-2);

        double depth_found, vel_found, dir_found;
        int index;

        std::stringstream stream_depth(m_cp.depth);
        std::vector<double> depths;

        while(stream_depth.good())
        {
          std::string substr;
          getline(stream_depth, substr, ';');
          depths.push_back(atof(substr.c_str()));
        }

        debug("We got %d measurements from SingleCurrentCell",depths.size());

        bool found_exact = false;
        std::vector<double> differences;

        for(unsigned int i=0;i<depths.size(); i++)
        {
          if(depth_wanted == depths[i])
          {
            index = i;
            found_exact = true;
            debug("FOUND EXACT");
            break;
          } else // keep track of difference to find the closest depth.
          {
            debug("NOT FOUND EXACT");
            double diff = std::fabs(depth_wanted - depths[i]);
            differences.push_back(diff);
          }
        }

        int closest_index;
        if(!found_exact)
        {
          closest_index = std::min_element(differences.begin(),differences.end()) - differences.begin();
        }

        std::stringstream stream_vel(m_cp.vel);
        std::vector<double> vels;

        while(stream_vel.good())
        {
          std::string substr;
          getline(stream_vel, substr, ';');
          vels.push_back(atof(substr.c_str()));
        }

        std::stringstream stream_dir(m_cp.dir);
        std::vector<double> dirs;

        while(stream_dir.good())
        {
          std::string substr;
          getline(stream_dir, substr, ';');
          dirs.push_back(atof(substr.c_str()));
        }
        
        if(!found_exact)
        {
          depth_found = depths[closest_index];
          vel_found = vels[closest_index];
          dir_found = dirs[closest_index];
        } else
        {
          depth_found = depths[index];
          vel_found = vels[index];
          dir_found = dirs[index];
        }

        debug("DEPTH: %f, VEL: %f, DIR: %f", depth_found,vel_found,dir_found);

        std::string depth_found_str = std::to_string(depth_found);
        std::string vel_found_str = std::to_string(vel_found);
        std::string dir_found_str = std::to_string(Angles::degrees(dir_found));

        depth_found_r = depth_found_str.substr(0,5);
        vel_found_r = vel_found_str.substr(0,5);
        dir_found_r = dir_found_str.substr(0,5);

        if(m_sensors_status.adcp == 0 || (m_sensors_status.adcp == 1 && m_sensors_status.adcp_dur != 0.0))
        {
          if(m_sensors_status.adcp == 0)
            ss << "(ADCP) ";
          else if(m_sensors_status.adcp == 1 && m_sensors_status.adcp_dur != 0.0)
            ss << "(ADCP-P) ";

          ss << m_adcp_tmst_ISO << "/" << m_lat_reduced << " " << m_lon_reduced << "/DP:" << depth_found_r << "/S:" << vel_found_r << "/D:" << dir_found_r;
          reply(origin,ss.str());
        } else
        {
          ss << "(ADCP) last " << m_adcp_tmst_ISO << "/DP:" << depth_found_r << "/S:" << vel_found_r << "/D:" << dir_found_r;
          reply(origin,ss.str());
        }
      }

      //! Execute command 'REBOOT'
      void
      handleRebootCommand(const std::string& origin, const std::string& args)
      {
        char what[32];
        std::sscanf(args.c_str(), "%s", what);
        RestartSystem msg;
        if (!strcmp(what, "dune"))
        {
          war("Restarting DUNE requested by %s", origin.c_str());
          reply(origin, "Restarting DUNE.");
          msg.type = RestartSystem::RSTYPE_DUNE;
          dispatch(msg);
        }
        else if (!strcmp(what, "aux"))
        {
          war("Restarting Auxiliary CPU requested by %s", origin.c_str());
          reply(origin, "Restarting Auxiliary CPU.");
          PowerChannelControl pcc;
          pcc.op = PowerChannelControl::PCC_OP_RESTART;
          pcc.name = "Auxiliary CPU";
          dispatch(pcc);
        }
        else
        {
          war("Restarting Main CPU requested by %s", origin.c_str());
          reply(origin, "Restarting.");
          msg.type = RestartSystem::RSTYPE_SYSTEM;
          dispatch(msg);
        }
      }

      //! Execute command 'START'
      void
      handleStartCommand(const std::string& origin, const std::string& args, bool ignore_errors = true)
      {
        // Plan control message!
        IMC::PlanControl pc;
        pc.type = IMC::PlanControl::PC_REQUEST;
        pc.op = IMC::PlanControl::PC_START;
        if (ignore_errors)
          pc.flags = IMC::PlanControl::FLG_IGNORE_ERRORS;
        pc.setDestination(m_ctx.resolver.id());
        char plan_id[32];
        std::sscanf(args.c_str(), "%s", plan_id);
        pc.plan_id = plan_id;

        inf(DTR("received SMS request to start plan '%s'"),
            sanitize(pc.plan_id).c_str());
        std::stringstream ss;
        ss << "Started execution of " << plan_id;
        if (ignore_errors)
          ss << " ignoring errors.";
        else
          ss << ".";
        reply(origin, ss.str());

        // Send the plan start request
        dispatch(pc);
        (void)origin;
      }


      //! Execute command 'RESUME'
      void
      handleResumeCommand(const std::string& origin, const std::string& args, bool ignore_errors = true)
      {
        char plan_id[32];
        char man_id[32];

        std::sscanf(args.c_str(), "%s %s", plan_id, man_id);

        inf(DTR("received SMS request to resume plan '%s' starting from maneuver '%s'"),
            sanitize(plan_id).c_str(), sanitize(man_id).c_str());

        std::stringstream ss;

        try {
          PlanSpecification spec = splitPlan(sanitize(plan_id), sanitize(man_id));
          IMC::PlanControl pcontrol;
          pcontrol.arg.set(spec);
          pcontrol.info = DTR("Plan generated automatically");
          pcontrol.type = IMC::PlanControl::PC_REQUEST;
          pcontrol.op = IMC::PlanControl::PC_START;
          pcontrol.plan_id = spec.plan_id;
          pcontrol.setDestination(m_ctx.resolver.id());
          if (ignore_errors)
            pcontrol.flags = IMC::PlanControl::FLG_CALIBRATE | IMC::PlanControl::FLG_IGNORE_ERRORS;
          else
            pcontrol.flags = IMC::PlanControl::FLG_CALIBRATE;

          dispatch(pcontrol);
          ss << "Resuming plan " << sanitize(plan_id) << " from maneuver " << spec.start_man_id << ".";
          reply(origin, ss.str());
        }
        catch (std::exception& e) {
          ss << "Error processing resume: " << e.what() << ".";
          reply(origin, ss.str());
        }
      }

      //! Execute command 'SENSORS'
      void
      handleL3SensorsCommand(const std::string& origin, const std::string& args)
      {
        spew("A configuration for all sensors has arrived.");

        if(m_pwr_settings.l3 == 0)
        {
          spew("L3 is ON, sending sensors configurations.");

          // A configuration for all sensors has arrived.
          char adcp[32], adcp_dur[32], adcp_fr[32], ctd[32], ctd_dur[32], ctd_fr[32], opt[32], opt_dur[32], opt_fr[32], tbl[32], tbl_dur[32], tbl_fr[32], eco[32], eco_dur[32], eco_fr[32], par[32], par_dur[32], par_fr[32];
          std::sscanf(args.c_str(), "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s", adcp, adcp_dur, adcp_fr, ctd, ctd_dur, ctd_fr, opt, opt_dur, opt_fr, tbl, tbl_dur, tbl_fr, eco, eco_dur, eco_fr, par, par_dur, par_fr);

          m_sensors_cmd.adcp = std::atoi(adcp);
          m_sensors_cmd.adcp_dur = std::atoi(adcp_dur);
          m_sensors_cmd.adcp_fr = std::atoi(adcp_fr);
          m_sensors_cmd.ctd = std::atoi(ctd);
          m_sensors_cmd.ctd_dur = std::atoi(ctd_dur);
          m_sensors_cmd.ctd_fr = std::atoi(ctd_fr);
          m_sensors_cmd.opt = std::atoi(opt);
          m_sensors_cmd.opt_dur = std::atoi(opt_dur);
          m_sensors_cmd.opt_fr = std::atoi(opt_fr);
          m_sensors_cmd.tbl = std::atoi(tbl);
          m_sensors_cmd.tbl_dur = std::atoi(tbl_dur);
          m_sensors_cmd.tbl_fr = std::atoi(tbl_fr);
          m_sensors_cmd.eco = std::atoi(eco);
          m_sensors_cmd.eco_dur = std::atoi(eco_dur);
          m_sensors_cmd.eco_fr = std::atoi(eco_fr);
          m_sensors_cmd.par = std::atoi(par);
          m_sensors_cmd.par_dur = std::atoi(par_dur);
          m_sensors_cmd.par_fr = std::atoi(par_fr);

          // Set L3 vehicle destination.
          m_sensors_cmd.setSource(getSystemId());
          m_sensors_cmd.setDestination(0x8804);
          dispatch(m_sensors_cmd, DF_LOOP_BACK);
          std::stringstream ss;
          ss << "Sensors commands sent.";
          reply(origin,ss.str());
        }
        else if(m_pwr_settings.l3 == 1)
        {
          std::stringstream ss;
          ss << "L3 is OFF, turn on first.";
          reply(origin,ss.str());
        }
      }

      //! Execute command 'SENSOR'
      void
      handleL3SensorCommand(const std::string& origin, const std::string& args)
      {
        spew("A configuration for one sensor has arrived");

        char sensor[32], onoff[32], duration[32], frequency[32];

        if(m_pwr_settings.l3 == 1)
        {
          spew("L3 is OFF, turn on first.");
          std::stringstream ss;
          ss << "L3 is OFF, turn on first.";
          reply(origin,ss.str());
        } else if(!m_l3_el)
        {
          std::stringstream ss;
          ss << "DUNE L3 is damaged!";
          reply(origin,ss.str());
        } else
        {
          spew("L3 is ON, sending sensor configuration..");
          std::sscanf(args.c_str(), "%s %s %s %s", sensor, onoff, duration, frequency);

          std::stringstream ss;

          if(std::strcmp(sensor,"adcp") == 0)
          {
            IMC::ScienceSensors sensor_cmd;
            m_sensors_cmd.setSource(getSystemId());
            sensor_cmd.setDestination(0x8804);
            int adcp_onoff = std::atoi(onoff);
            if((m_sensors_status.adcp == 0 && adcp_onoff == 0) || (m_sensors_status.adcp == 1 && m_sensors_status.adcp_dur != 0 && adcp_onoff == 0))
            {
              ss << "ADCP is already ON.";
              reply(origin,ss.str());
            } else if(m_sensors_status.adcp == 1 && m_sensors_status.adcp_dur == 0 && adcp_onoff == 1)
            {
              ss << "ADCP is already OFF.";
              reply(origin,ss.str());
            } else
            {
              sensor_cmd.adcp = adcp_onoff;
              sensor_cmd.adcp_dur = std::atoi(duration);
              sensor_cmd.adcp_fr = std::atoi(frequency);
              // other sensors: NO_CHANGE.
              sensor_cmd.ctd = 3;
              sensor_cmd.tbl = 3;
              sensor_cmd.eco = 3;
              sensor_cmd.opt = 3;
              sensor_cmd.par = 3;

              // Set destination entity before dispatching.
              //sensors_cmd.setDestinationEntity("ADCP");
              dispatch(sensor_cmd, DF_LOOP_BACK);

              ss << "ADCP actions.";
              reply(origin,ss.str());

              spew("Sending IMC::ScienceSensors to L3");
            }
          } else if(std::strcmp(sensor,"ctd") == 0)
          {
            IMC::ScienceSensors sensor_cmd;
            m_sensors_cmd.setSource(getSystemId());
            sensor_cmd.setDestination(0x8804);
            int ctd_onoff = std::atoi(onoff);
            if((m_sensors_status.ctd == 0 && ctd_onoff == 0) || (m_sensors_status.ctd == 1 && m_sensors_status.ctd_dur != 0 && ctd_onoff == 0))
            {
              ss << "CTD is already ON.";
              reply(origin,ss.str());
            } else if(m_sensors_status.ctd == 1 && m_sensors_status.ctd_dur == 0 && ctd_onoff == 1)
            {
              ss << "CTD is already OFF.";
              reply(origin,ss.str());
            } else
            {
              sensor_cmd.ctd = ctd_onoff;
              sensor_cmd.ctd_dur = std::atoi(duration);
              sensor_cmd.ctd_fr = std::atoi(frequency);
              // other sensors: NO_CHANGE.
              sensor_cmd.adcp = 3;
              sensor_cmd.tbl = 3;
              sensor_cmd.eco = 3;
              sensor_cmd.opt = 3;
              sensor_cmd.par = 3;

              // Set destination entity before dispatching.
              //sensors_cmd.setDestinationEntity("ADCP");
              dispatch(sensor_cmd, DF_LOOP_BACK);

              ss << "CTD actions.";
              reply(origin,ss.str());

              spew("Sending IMC::ScienceSensors to L3");
            }
          } else if(std::strcmp(sensor,"tbl") == 0)
          {
            IMC::ScienceSensors sensor_cmd;
            m_sensors_cmd.setSource(getSystemId());
            sensor_cmd.setDestination(0x8804);
            int tbl_onoff = std::atoi(onoff);
            if((m_sensors_status.tbl == 0 && tbl_onoff == 0) || (m_sensors_status.tbl == 1 && m_sensors_status.tbl_dur != 0 && tbl_onoff == 0))
            {
              ss << "TBLive is already ON.";
              reply(origin,ss.str());
            } else if(m_sensors_status.tbl == 1 && m_sensors_status.tbl_dur == 0 && tbl_onoff == 1)
            {
              ss << "TBLive is already OFF.";
              reply(origin,ss.str());
            } else
            {
              sensor_cmd.tbl = tbl_onoff;
              sensor_cmd.tbl_dur = std::atoi(duration);
              sensor_cmd.tbl_fr = std::atoi(frequency);
              // other sensors: NO_CHANGE.
              sensor_cmd.adcp = 3;
              sensor_cmd.ctd = 3;
              sensor_cmd.eco = 3;
              sensor_cmd.opt = 3;
              sensor_cmd.par = 3;

              // Set destination entity before dispatching.
              //sensors_cmd.setDestinationEntity("ADCP");
              dispatch(sensor_cmd, DF_LOOP_BACK);

              ss << "TBLive actions.";
              reply(origin,ss.str());

              spew("Sending IMC::ScienceSensors to L3");
            }
          } else if(std::strcmp(sensor,"eco") == 0)
          {
            IMC::ScienceSensors sensor_cmd;
            m_sensors_cmd.setSource(getSystemId());
            sensor_cmd.setDestination(0x8804);
            int eco_onoff = std::atoi(onoff);
            if((m_sensors_status.eco == 0 && eco_onoff == 0) || (m_sensors_status.eco == 1 && m_sensors_status.eco_dur != 0 && eco_onoff == 0))
            {
              ss << "EcoPuck is already ON.";
              reply(origin,ss.str());
            } else if(m_sensors_status.eco == 1 && m_sensors_status.eco_dur == 0 && eco_onoff == 1)
            {
              ss << "EcoPuck is already OFF.";
              reply(origin,ss.str());
            } else
            {
              sensor_cmd.eco = eco_onoff;
              sensor_cmd.eco_dur = std::atoi(duration);
              sensor_cmd.eco_fr = std::atoi(frequency);
              // other sensors: NO_CHANGE.
              sensor_cmd.adcp = 3;
              sensor_cmd.ctd = 3;
              sensor_cmd.tbl = 3;
              sensor_cmd.opt = 3;
              sensor_cmd.par = 3;

              // Set destination entity before dispatching.
              //sensors_cmd.setDestinationEntity("ADCP");
              dispatch(sensor_cmd, DF_LOOP_BACK);

              ss << "EcoPuck actions.";
              reply(origin,ss.str());

              spew("Sending IMC::ScienceSensors to L3");
            }
          } else if(std::strcmp(sensor,"opt") == 0)
          {
            IMC::ScienceSensors sensor_cmd;
            m_sensors_cmd.setSource(getSystemId());
            sensor_cmd.setDestination(0x8804);
            int opt_onoff = std::atoi(onoff);
            if((m_sensors_status.opt == 0 && opt_onoff == 0) || (m_sensors_status.opt == 1 && m_sensors_status.opt_dur != 0 && opt_onoff == 0))
            {
              ss << "Optode is already ON.";
              reply(origin,ss.str());
            } else if(m_sensors_status.opt == 1 && m_sensors_status.opt_dur == 0 && opt_onoff == 1)
            {
              ss << "Optode is already OFF.";
              reply(origin,ss.str());
            } else
            {
              sensor_cmd.opt = opt_onoff;
              sensor_cmd.opt_dur = std::atoi(duration);
              sensor_cmd.opt_fr = std::atoi(frequency);
              // other sensors: NO_CHANGE.
              sensor_cmd.adcp = 3;
              sensor_cmd.ctd = 3;
              sensor_cmd.tbl = 3;
              sensor_cmd.eco = 3;
              sensor_cmd.par = 3;

              // Set destination entity before dispatching.
              //sensors_cmd.setDestinationEntity("ADCP");
              dispatch(sensor_cmd, DF_LOOP_BACK);

              ss << "Optode actions.";
              reply(origin,ss.str());

              spew("Sending IMC::ScienceSensors to L3");
            }
          } else if(std::strcmp(sensor,"par") == 0)
          {
            IMC::ScienceSensors sensor_cmd;
            m_sensors_cmd.setSource(getSystemId());
            sensor_cmd.setDestination(0x8804);
            int par_onoff = std::atoi(onoff);
            if((m_sensors_status.par == 0 && par_onoff == 0) || (m_sensors_status.par == 1 && m_sensors_status.par_dur != 0 && par_onoff == 0))
            {
              ss << "EcoPAR is already ON.";
              reply(origin,ss.str());
            } else if(m_sensors_status.par == 1 && m_sensors_status.par_dur == 0 && par_onoff == 1)
            {
              ss << "EcoPAR is already OFF.";
              reply(origin,ss.str());
            } else
            {
              sensor_cmd.par = par_onoff;
              sensor_cmd.par_dur = std::atoi(duration);
              sensor_cmd.par_fr = std::atoi(frequency);
              // other sensors: NO_CHANGE.
              sensor_cmd.adcp = 3;
              sensor_cmd.ctd = 3;
              sensor_cmd.tbl = 3;
              sensor_cmd.eco = 3;
              sensor_cmd.opt = 3;

              // Set destination entity before dispatching.
              //sensors_cmd.setDestinationEntity("ADCP");
              dispatch(sensor_cmd, DF_LOOP_BACK);

              ss << "EcoPAR actions.";
              reply(origin,ss.str());

              spew("Sending IMC::ScienceSensors to L3");
            }
          }
        }
      }

      //! Execute command 'ABORT'
      void
      handleAbortCommand(const std::string& origin, const std::string& args)
      {
        err(DTR("got abort request from '%s'"), origin.c_str());
        IMC::Abort abort;
        abort.setDestination(getSystemId());
        dispatch(abort);
        reply(origin, "Aborted.");
        (void)args;
      }

      //! Execute command 'HELP'
      void
      handleHelpCommand(const std::string& origin)
      {
        std::stringstream ss;
        ss << "For a list of valid commands see " << m_args.help_url << ".";
        reply(origin, ss.str());
      }

      //! Sends a PlanGeneration request resulting from an unknown command.
      void
      handlePlanGeneratorCommand(const std::string& origin, const std::string& cmd, const std::string& args)
      {
        IMC::PlanGeneration pg;

        pg.cmd = IMC::PlanGeneration::CMD_EXECUTE;
        pg.op = IMC::PlanGeneration::OP_REQUEST;
        pg.plan_id = cmd;
        pg.params = args;
        dispatch(pg);
        (void)origin;
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

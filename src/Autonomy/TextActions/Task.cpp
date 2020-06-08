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
      // L3 sensors message.
      IMC::ScienceSensors m_sensors_cmd;
      // L3 turn on timer.
      Time::Counter<float> m_timer;
      // Complete payload message has arrived.
      bool m_sensors_active;


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
        m_last(NULL),
        m_reqid(0),
        m_sensors_active(false)
      {
        param("Reply timeout", m_args.reply_timeout)
          .defaultValue("60")
          .minimumValue("30");

        param("Documentation URL", m_args.help_url)
          .defaultValue("https://bit.ly/2LZ0EOc");

        param("Valid Commands", m_args.valid_cmds)
          .defaultValue("abort,dislodge,dive,errors,info,force,cr6,restart,go,help,phone,reboot,sk,start,surface,on,off,sensor,sensors,reports");

        m_db_file = m_ctx.dir_db / "Plan.db";

        bind<IMC::TextMessage>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::PlanControl>(this);
        bind<IMC::PlanGeneration>(this);
        bind<IMC::PowerSettings>(this);
        bind<IMC::GpsFix>(this);
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
        Memory::replace(m_vstate, msg->clone());
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
      consume(const IMC::GpsFix* msg)
      {
        if(msg->getSource() != getSystemId())
          return;

        m_sog = msg->sog;
        double cog = msg->cog;
        cog = Angles::degrees(cog);
        m_cog = (int) cog;
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
        else if (cmd == "info")
          handleInfoCommand(origin);
        else if (cmd == "help")
          handleHelpCommand(origin);
        else if (cmd == "reboot")
          handleRebootCommand(origin, args);
        else if (cmd == "phone")
          handleChangeNumCommand(origin, args);
        else if (cmd == "sensors")
          handleL3SensorsCommand(origin, args);
        else if (cmd == "sensor")
          handleL3SensorCommand(origin, args);
        else if (cmd == "resume")
          handleResumeCommand(origin, args, false);
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

        if(args.compare("l2") == 0)
          pwr_settings.l2 = 0;
        else if(args.compare("l3") == 0)
          pwr_settings.l3 = 0;
        else if (args.compare("iridium") == 0)
          pwr_settings.iridium = 0;
        else if (args.compare("modem") == 0)
          pwr_settings.modem = 0;
        else if (args.compare("pumps") == 0)
          pwr_settings.pumps = 0;
        else if (args.compare("vhf") == 0)
          pwr_settings.vhf = 0;

        spew("Updated pwrSettings: %d%d%d%d%d%d",
                                 pwr_settings.l2, pwr_settings.l3,
                                 pwr_settings.iridium, pwr_settings.modem,
                                 pwr_settings.pumps, pwr_settings.vhf);

        // Dispatch power settings to L1.
        dispatch(pwr_settings, DF_LOOP_BACK);

        std::string relay;
        relay = args;
        std::stringstream ss;
        ss << relay << " is turning on.";
        reply(origin,ss.str());
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
          ss << "On " << m_pcs->plan_id << "::" << m_pcs->man_id << " | COG: " << std::to_string(m_cog) << " | SOG: " << std::to_string(m_sog);

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
        // A configuration for all sensors has arrived.
        char adcp[32], adcp_dur[32], adcp_fr[32], ctd[32], ctd_dur[32], ctd_fr[32], opt[32], opt_dur[32], opt_fr[32], tbl[32], tbl_dur[32], tbl_fr[32], eco[32], eco_dur[32], eco_fr[32];
        std::sscanf(args.c_str(), "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s", adcp, adcp_dur, adcp_fr, ctd, ctd_dur, ctd_fr, opt, opt_dur, opt_fr, tbl, tbl_dur, tbl_fr, eco, eco_dur, eco_fr);

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

        // Set L3 vehicle destination.
        m_sensors_cmd.setDestination(0x8804);

        if(m_pwr_settings.l3 == 0)
        {
          spew("L3 is ON, sending sensors configurations.");
          dispatch(m_sensors_cmd, DF_LOOP_BACK);
          std::stringstream ss;
          ss << "Sensors commands sent.";
          reply(origin,ss.str());
        }
        else if(m_pwr_settings.l3 == 1)
        {
          spew("L3 is OFF, turning on..");
          // L3 needs to be turned on.
          IMC::PowerSettings pwr_settings;
          pwr_settings = m_pwr_settings; // last received power settings from CR6 task.
          // Turn on L3 and set timer. 
          pwr_settings.l3 = 0;
          dispatch(pwr_settings, DF_LOOP_BACK);
          m_sensors_active = true;
          m_timer.setTop(120); // is two minutes enough to turn on L3?

          std::stringstream ss;
          ss << "L3 is OFF, turning on and sending.";
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
        } else
        {
          spew("L3 is ON, sending sensor configuration..");
          std::sscanf(args.c_str(), "%s %s %s %s", sensor, onoff, duration, frequency);

          IMC::ScienceSensors sensor_cmd;
          sensor_cmd.setDestination(0x8804);

          std::stringstream ss;

          if(std::strcmp(sensor,"adcp") == 0)
          {
            sensor_cmd.adcp = std::atoi(onoff);
            sensor_cmd.adcp_dur = std::atoi(duration);
            sensor_cmd.adcp_fr = std::atoi(frequency);
            // other sensors: NO_CHANGE.
            sensor_cmd.ctd = 3;
            sensor_cmd.tbl = 3;
            sensor_cmd.eco = 3;
            sensor_cmd.opt = 3;

            // Set destination entity before dispatching.
            //sensors_cmd.setDestinationEntity("ADCP");
            dispatch(sensor_cmd, DF_LOOP_BACK);

            ss << "ADCP actions.";
            reply(origin,ss.str());
          } else if(std::strcmp(sensor,"ctd") == 0)
          {
            sensor_cmd.ctd = std::atoi(onoff);
            sensor_cmd.ctd_dur = std::atoi(duration);
            sensor_cmd.ctd_fr = std::atoi(frequency);
            // other sensors: NO_CHANGE.
            sensor_cmd.adcp = 3;
            sensor_cmd.tbl = 3;
            sensor_cmd.eco = 3;
            sensor_cmd.opt = 3;

            // Set destination entity before dispatching.
            //sensors_cmd.setDestinationEntity("CTD");
            dispatch(sensor_cmd, DF_LOOP_BACK);

            ss << "CTD actions.";
            reply(origin,ss.str());
          } else if(std::strcmp(sensor,"tbl") == 0)
          {
            sensor_cmd.tbl = std::atoi(onoff);
            sensor_cmd.tbl_dur = std::atoi(duration);
            sensor_cmd.tbl_fr = std::atoi(frequency);
            // other sensors: NO_CHANGE.
            sensor_cmd.ctd = 3;
            sensor_cmd.adcp = 3;
            sensor_cmd.eco = 3;
            sensor_cmd.opt = 3;

            // Set destination entity before dispatching.
            //sensors_cmd.setDestinationEntity("TBLive");
            dispatch(sensor_cmd, DF_LOOP_BACK);

            ss << "TBLive actions.";
            reply(origin,ss.str());
          } else if(std::strcmp(sensor,"eco") == 0)
          {
            sensor_cmd.eco = std::atoi(onoff);
            sensor_cmd.eco_dur = std::atoi(duration);
            sensor_cmd.eco_fr = std::atoi(frequency);
            // other sensors: NO_CHANGE.
            sensor_cmd.ctd = 3;
            sensor_cmd.tbl = 3;
            sensor_cmd.adcp = 3;
            sensor_cmd.opt = 3;

            // Set destination entity before dispatching.
            //sensors_cmd.setDestinationEntity("EcoPuck");
            dispatch(sensor_cmd, DF_LOOP_BACK);
            
            ss << "EcoPuck actions.";
            reply(origin,ss.str());
          } else if(std::strcmp(sensor,"opt") == 0)
          {
            sensor_cmd.opt = std::atoi(onoff);
            sensor_cmd.opt_dur = std::atoi(duration);
            sensor_cmd.opt_fr = std::atoi(frequency);
            // other sensors: NO_CHANGE.
            sensor_cmd.ctd = 3;
            sensor_cmd.tbl = 3;
            sensor_cmd.eco = 3;
            sensor_cmd.adcp = 3;

            // Set destination entity before dispatching.
            //sensors_cmd.setDestinationEntity("Optode Oxygen Sensor");
            dispatch(sensor_cmd, DF_LOOP_BACK);

            ss << "Optode actions.";
            reply(origin,ss.str());
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
          if(m_sensors_active && m_timer.overflow())
          {
            spew("L3 is BOOTED, sending configurations..");
            //m_sensors_cmd.setDestination(0x8804);
            dispatch(m_sensors_cmd, DF_LOOP_BACK);
            m_timer.reset();
            m_sensors_active = false;
          }
        }
      }
    };
  }
}

DUNE_TASK

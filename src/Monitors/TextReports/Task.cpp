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
// Author: José Pinto                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  namespace TextReports
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Panels power entity label.
      std::string elabel_panelsBS1, elabel_panelsBS2;
      //! System power entity label.
      std::string elabel_system;
      //! Thruster power entity label.
      std::string elabel_thruster;
      //! Temperature entity label.
      std::string elabel_temp;
      //! Navigation entity label.
        std::string elabel_nav;
      //! Reports periodicity
      unsigned report_periodicity;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Navigation entity eid.
      int m_nav_eid;
      //! GPS entity eid.
      int m_panelsBS1_eid, m_panelsBS2_eid;
      //! IMU entity eid.
      int m_system_power_eid;
      //! Yaw entity eid.
      int m_thruster_power_eid;
      //! Yaw entity eid.
      int m_temp_eid;
      //! Emergency message.
      std::string m_emsg;
      //! Fuel level.
      float m_fuel;
      //! Confidence in fuel level.
      float m_fuel_conf;
      //! Batteries voltage
      float m_bat_voltageBS1, m_bat_voltageBS2;
      //! Executing plan's progress.
      float m_progress;
      //! PowerSettings.
      IMC::PowerSettings m_pwr_settings;
      //! Are we executing a plan
      bool m_in_mission;
      //! Iridium request identifier.
      unsigned m_req;
      //! Vehicle State
      uint8_t m_vstate;
      //! Speed Over Ground.
      float m_sog;
      //! Speed Over Ground.
      float m_cog;
      //! Satellites in view.
      int m_sat;
      //! Panels generated power.
      double m_panelsBS1_power, m_panelsBS2_power;
      //! System consumed power.
      double m_system_power;
      //! Thruster power.
      double m_thruster_power;
      //! External Temperature.
      double m_ext_temp;
      //! Communications timer.
      Counter<double> m_timer;
      //! Task arguments.
      Arguments m_args;


      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_req(0)
      {
        param("Entity Label - Panels Power BS1", m_args.elabel_panelsBS1)
        .description("Entity label of 'Power' message");

        param("Entity Label - Panels Power BS2", m_args.elabel_panelsBS2)
        .description("Entity label of 'Power' message");

        param("Entity Label - System Power", m_args.elabel_system)
        .description("Entity label of 'Power' message");

        param("Entity Label - Thruster Power", m_args.elabel_thruster)
        .description("Entity label of 'Power' messages (field 'psi')");

        param("Entity Label - Temperature", m_args.elabel_temp)
        .description("Entity label of 'Temperature'");

        param("Entity Label - Navigation", m_args.elabel_nav)
          .description("Entity label of 'AngularVelocity' message");

        paramActive(Tasks::Parameter::SCOPE_IDLE,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Report Periodicity", m_args.report_periodicity)
        .units(Units::Second)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .defaultValue("3600.0")
        .minimumValue("60.0");

        bind<IMC::FuelLevel>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::Voltage>(this);
        bind<IMC::PowerSettings>(this);
        bind<IMC::Power>(this);
        bind<IMC::IridiumReport>(this);
        bind<IMC::Temperature>(this);

        m_fuel = -1.0;
        m_fuel_conf = -1.0;
        m_bat_voltageBS1 = -1.0;
        m_bat_voltageBS2 = -1.0;
        m_progress = -1.0;
        m_vstate = '?';
        m_in_mission = false;
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.report_periodicity))
         m_timer.setTop(m_args.report_periodicity);
      }

      void
      onEntityResolution(void)
      {
        try
        {
          m_panelsBS1_eid = resolveEntity(m_args.elabel_panelsBS1);
        }
        catch (...)
        {
          m_panelsBS1_eid = 0;
        }

        try
        {
          m_panelsBS2_eid = resolveEntity(m_args.elabel_panelsBS2);
        }
        catch (...)
        {
          m_panelsBS2_eid = 0;
        }

        try
        {
          m_system_power_eid = resolveEntity(m_args.elabel_system);
        }
        catch (...)
        {
          m_system_power_eid = 0;
        }

        try
        {
          m_thruster_power_eid = resolveEntity(m_args.elabel_thruster);
        }
        catch (...)
        {
          m_thruster_power_eid = 0;
        }

        try
        {
          m_temp_eid = resolveEntity(m_args.elabel_temp);
        }
        catch (...)
        {
          m_temp_eid = 0;
        }

        try
        {
          m_nav_eid = resolveEntity(m_args.elabel_nav);
        }
        catch (...)
        {
          m_nav_eid = 0;
        }
      }

      //! From Actuators/CR6
      void
      consume(const IMC::Power* msg)
      {
        if(msg->getSourceEntity() == m_panelsBS1_eid)
          m_panelsBS1_power = msg->value;
        if(msg->getSourceEntity() == m_panelsBS2_eid)
          m_panelsBS2_power = msg->value;
        else if(msg->getSourceEntity() == m_system_power_eid)
          m_system_power = msg->value;
        else if(msg->getSourceEntity() == m_thruster_power_eid)
          m_thruster_power = msg->value;
      }

      void
      consume(const IMC::Temperature* msg)
      {
        if(msg->getSourceEntity() == m_temp_eid)
          m_ext_temp = msg->value;
      }

      //! From Actuators/CR6
      void
      consume(const IMC::IridiumReport* msg)
      {
        // Set Iridium State Report frequency as commanded from shore (via Iridium itself).
        m_timer.setTop(msg->frequency);
      }

      void
      onResourceInitialization(void)
      {
        // Initialize entity state.
        if (isActive())
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        else
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        m_timer.setTop(m_args.report_periodicity);
        m_fuel = -1.0;
        m_fuel_conf = -1.0;
        m_bat_voltageBS1 = -1.0;
        m_bat_voltageBS2 = -1.0;
        m_progress = -1.0;
        m_vstate = '?';
      }

      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
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

      void
      consume(const IMC::GpsFix* msg)
      {
        if(msg->getSource() != getSystemId() || msg->getSourceEntity() != m_nav_eid) //m_args.elabel_nav.compare(resolveEntity(msg->getSourceEntity()).c_str()) != 0
          return;

        if(msg->validity & IMC::GpsFix::GFV_VALID_POS)
        {
          double m_lat = Angles::degrees(msg->lat);
          double m_lon = Angles::degrees(msg->lon);

          std::string m_lat_str = std::to_string(m_lat);
          std::string m_lat_reduced = m_lat_str.substr(0,m_lat_str.size()-2);
          std::string m_lon_str = std::to_string(m_lon);
          std::string m_lon_reduced = m_lon_str.substr(0,m_lon_str.size()-2);

          m_sog = msg->sog;
          m_cog = msg->cog;
          m_cog = Angles::degrees(m_cog);
          m_sat = msg->satellites;

          //double consumed_power = m_system_power + m_thruster_power;

          Time::BrokenDown bdt;

          std::string m_emsg_first = String::str(
              "%02u:%02u:%02u/", bdt.hour, bdt.minutes, bdt.seconds);

          std::string m_emsg_second = String::str(
              "/b:%d,%d/c:%d/s:%.2f/sat:%d/pp:%d,%d/cp:%d,%d/t:%d/s:%c/%d%d%d%d%d%d",
              (int)m_bat_voltageBS1, (int)m_bat_voltageBS2, (int)m_cog,
              m_sog, m_sat, (int)m_panelsBS1_power, (int)m_panelsBS2_power, (int)m_system_power, (int)m_thruster_power, (int)m_ext_temp, vehicleStateChar(m_vstate), m_pwr_settings.l2, m_pwr_settings.l3, m_pwr_settings.iridium, m_pwr_settings.modem, m_pwr_settings.pumps, m_pwr_settings.vhf);

          m_emsg = m_emsg_first + m_lat_reduced + "," + m_lon_reduced + m_emsg_second;



          /*m_emsg = String::str(
              "%02u:%02u:%02u/%f,%f/b:%d/c:%d/s:%.2f/sat:%d/pp:%d/cp:%d/t:%d/s:%c/%d%d%d%d%d%d",
              bdt.hour, bdt.minutes, bdt.seconds, m_lat, //getSystemName(), 
              m_lon, (int)m_bat_voltageBS1, (int)m_cog,
              m_sog, m_sat, (int)m_panelsBS1_power, (int)consumed_power, (int)m_ext_temp, vehicleStateChar(m_vstate), m_pwr_settings.l2, m_pwr_settings.l3, m_pwr_settings.iridium, m_pwr_settings.modem, m_pwr_settings.pumps, m_pwr_settings.vhf);
          */
          //m_emsg += m_in_mission ? String::str(" / p:%d", (int)m_progress) : "";
        }
      }

      void
      consume(const IMC::FuelLevel* msg)
      {
        m_fuel = msg->value;
        m_fuel_conf = msg->confidence;
      }

      void
      consume(const IMC::Voltage* msg)
      {
        if(msg->getSourceEntity() == resolveEntity("Parallel Battery Voltage"))
          m_bat_voltageBS1 = msg->value * 10;
        else if(msg->getSourceEntity() == resolveEntity("Single Battery Voltage"))
          m_bat_voltageBS2 = msg->value * 10;
      }

      void
      consume(const IMC::PlanControlState* msg)
      {
        m_progress = msg->plan_progress;
        m_in_mission = msg->state == IMC::PlanControlState::PCS_EXECUTING;
      }

      void
      consume(const IMC::VehicleState* msg)
      {
        m_vstate = msg->op_mode;
      }

      char
      vehicleStateChar(const uint8_t vstate)
      {
        switch((IMC::VehicleState::OperationModeEnum) vstate)
        {
          case IMC::VehicleState::VS_BOOT:
            return 'B';
          case IMC::VehicleState::VS_CALIBRATION:
            return 'C';
          case IMC::VehicleState::VS_ERROR:
            return 'E';
          case IMC::VehicleState::VS_EXTERNAL:
            return 'X';
          case IMC::VehicleState::VS_MANEUVER:
            return 'M';
          case IMC::VehicleState::VS_SERVICE:
            return 'S';
          default:
            return '?';
        }
      }

      //! Send SMS request.
      //! @param[in] prefix message prefix.
      //! @param[in] timeout time to live.
      //! @param[in] recipient destination recipient.
      void
      sendReport(unsigned timeout)
      {
        IMC::TransmissionRequest msg;
        msg.data_mode= IMC::TransmissionRequest::DMODE_TEXT;
        msg.deadline = Time::Clock::getSinceEpoch() + timeout;

        if (!m_emsg.empty())
          msg.txt_data = String::str("(%s) %s", "R", m_emsg.c_str());
        else
        {
          std::string s;
          Time::BrokenDown bdt;
          s = String::str(
              "(%s) %02u:%02u:%02u / Unknown Location / f:%d v:%d|%d c:%d",
              getSystemName(), bdt.hour, bdt.minutes, bdt.seconds, (int)m_fuel,
              (int)m_bat_voltageBS1, (int)m_bat_voltageBS2, (int)m_fuel_conf);

          s += m_in_mission ? String::str(" / p:%d", (int)m_progress) : "";
          s += String::str("/ s: %c", vehicleStateChar(m_vstate));

          msg.txt_data = String::str("(%s) %s", "R", s.c_str());
        }

        msg.setDestination(getSystemId());
        msg.setDestinationEntity(getEntityId());

        msg.comm_mean=IMC::TransmissionRequest::CMEAN_SATELLITE;
        msg.deadline+=30;
        msg.req_id=m_req++;
        dispatch(msg);

        inf(DTR("Sending Iridium Report (t:%u): %s"), timeout,
            msg.txt_data.c_str());
      }

      void
      task(void)
      {
        if (isActive() && m_timer.overflow())
        {
          sendReport(m_args.report_periodicity - 1);
          m_timer.reset();
        }
      }
    };
  }
}

DUNE_TASK

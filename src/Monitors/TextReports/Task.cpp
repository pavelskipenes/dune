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
      //! Reports periodicity
      unsigned report_periodicity;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Emergency message.
      std::string m_emsg;
      //! Fuel level.
      float m_fuel;
      //! Confidence in fuel level.
      float m_fuel_conf;
      //! Batteries voltage
      float m_bat_voltage;
      //! Executing plan's progress.
      float m_progress;
      //! Are we executing a plan
      bool m_in_mission;
      //! Iridium request identifier.
      unsigned m_req;
      //! Vehicle State
      uint8_t m_vstate;
      //! Communications timer.
      Counter<double> m_timer;
      //! Task arguments.
      Arguments m_args;


      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_req(0)
      {
        paramActive(Tasks::Parameter::SCOPE_IDLE,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Report Periodicity", m_args.report_periodicity)
        .units(Units::Second)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .defaultValue("300.0")
        .minimumValue("60.0");

        bind<IMC::FuelLevel>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::Voltage>(this);

        m_fuel = -1.0;
        m_fuel_conf = -1.0;
        m_bat_voltage = -1.0;
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
        m_bat_voltage = -1.0;
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

      void
      consume(const IMC::GpsFix* msg)
      {
        if (msg->validity & IMC::GpsFix::GFV_VALID_POS)
        {
          int lat_deg;
          double lat_min;
          Angles::convertDecimalToDM(Angles::degrees(msg->lat), lat_deg, lat_min);

          int lon_deg;
          double lon_min;
          Angles::convertDecimalToDM(Angles::degrees(msg->lon), lon_deg, lon_min);

          Time::BrokenDown bdt;

          m_emsg = String::str(
              "(%s) %02u:%02u:%02u / %d %f, %d %f / f:%d v:%d c:%d / s: %c",
              getSystemName(), bdt.hour, bdt.minutes, bdt.seconds, lat_deg,
              lat_min, lon_deg, lon_min, (int)m_fuel, (int)m_bat_voltage,
              (int)m_fuel_conf, vehicleStateChar(m_vstate));

          m_emsg += m_in_mission ? String::str(" / p:%d", (int)m_progress) : "";
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
        if(msg->getSourceEntity() != resolveEntity("Batteries"))
          return;

        m_bat_voltage = msg->value * 10;
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
              "(%s) %02u:%02u:%02u / Unknown Location / f:%d v:%d c:%d",
              getSystemName(), bdt.hour, bdt.minutes, bdt.seconds, (int)m_fuel,
              (int)m_bat_voltage, (int)m_fuel_conf);

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

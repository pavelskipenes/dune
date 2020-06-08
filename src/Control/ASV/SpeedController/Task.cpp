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
// Author: Sølve Dahlin                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace ASV
  {
    namespace SpeedController
    {
      using DUNE_NAMESPACES;

      //! Tolerance for very low meters per second speed.
      static const float c_mps_tol = 0.1;

      struct Arguments
      {
        //! Maximum Motor thrust.
        float max_thrust;
        //! Ramp actuation limit when the value is rising in actuation per second
        float act_ramp;
        //! End of scale value for RPM's at 100% of thurst
        float rpm_eos;
        //! Hardware control of the motor's rpms
        bool rpm_hardware;
        //! Minimum value admissible for desired RPMs
        int16_t min_rpm;
        //! Maximum value admissible for desired RPMs for the MPS controller
        int16_t max_rpm;
        //! Maximum acceleration step to smooth speed ramp in mps control
        int16_t max_accel;
		    //! MPS controller feedforward gain
        float mps_ffgain;
        //! RPM controller feedforward gain
        float rpm_ffgain;
        //! PID gains for RPM controller.
        std::vector<float> rpm_gains;
        //! PID gains for MPS controller.
        std::vector<float> mps_gains;
        //! Limit for the integral term
        float mps_max_int;
		    //! Log the size of each PID parcel
        bool log_parcels;
      };

      struct Task: public Tasks::Task
      {
        //! Desired speed.
        float m_desired_speed;
        //! Desired speed units.
        uint8_t m_speed_units;
        //! Time of last estimated state message.
        Delta m_delta;
        //! Desired course from Path Controller.
        float m_desired_yaw_pc;
        //! RPM PID controller
        DiscretePID m_rpm_pid;
        //! MPS PID controller
        DiscretePID m_mps_pid;
        //! Current motor actuation.
        IMC::SetThrusterActuation m_act;
        //! Last motor actuation.
        IMC::SetThrusterActuation m_last_act;
        //! Control Parcels for mps controller
        IMC::ControlParcel m_parcel_mps;
        //! Control Parcels for rpm controller
        IMC::ControlParcel m_parcel_rpm;
        //! Motor rpm.
        IMC::Rpm m_rpm;
        //! previous value of the desired rpm speed
        float m_previous_rpm;
        //! Control loops last reference
        uint32_t m_scope_ref;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_desired_speed(0.0),
          m_previous_rpm(0.0),
          m_scope_ref(0)
        {
          param("Maximum Thrust Actuation", m_args.max_thrust)
          .defaultValue("1.0")
          .description("Maximum Motor Command");
         
          param("RPMs at Maximum Thrust", m_args.rpm_eos)
          .defaultValue("2500")
          .units(Units::RPM)
          .description("End of scale value for RPM's at 100% of thurst");		

          param("Hardware RPMs Control", m_args.rpm_hardware)
          .defaultValue("true")
          .description("Hardware control of the motor's rpms");

          param("RPMs PID Gains", m_args.rpm_gains)
          .defaultValue("")
          .size(3)
          .description("PID gains for RPM controller");

          param("RPMs Feedforward Gain", m_args.rpm_ffgain)
          .defaultValue("0.5")
          .description("RPM controller feedforward gain");

          param("MPS PID Gains", m_args.mps_gains)
          .defaultValue("")
          .size(3)
          .description("PID gains for MPS controller");

          param("MPS Feedforward Gain", m_args.mps_ffgain)
          .defaultValue("0.0")
          .description("MPS controller feedforward gain");

          param("MPS Integral Limit", m_args.mps_max_int)
          .defaultValue("-1.0")
          .description("Limit for the integral term");

          param("Minimum RPM Limit", m_args.min_rpm)
          .defaultValue("200")
          .units(Units::RPM)
          .description("Minimum value admissible for desired RPMs");

          param("Maximum RPM Limit", m_args.max_rpm)
          .defaultValue("2000")
          .units(Units::RPM)
          .description("Maximum value admissible for desired RPMs");
          
          param("Maximum RPM Acceleration", m_args.max_accel)
          .defaultValue("70")
          .units(Units::RPM)
          .description("Maximum acceleration step to smooth speed ramp in mps control");
          
          param("Ramp Actuation Limit", m_args.act_ramp)
          .defaultValue("0.0")
          .description("Ramp actuation limit when the value is rising in actuation per second");

          param("Log PID Parcels", m_args.log_parcels)
          .defaultValue("false")
          .description("Log the size of each PID parcel");

          m_speed_units = IMC::SUNITS_PERCENTAGE;

          // Initialize entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

          // Register handler routines.
          bind<IMC::Abort>(this);
          bind<IMC::Rpm>(this);
          bind<IMC::DesiredSpeed>(this);
          bind<IMC::DesiredHeading>(this);
          bind<IMC::ControlLoops>(this);
          bind<IMC::EstimatedState>(this);
        }

        void
        onUpdateParameters(void)
        {
          if (paramChanged(m_args.rpm_gains) ||
              paramChanged(m_args.mps_gains) ||
              paramChanged(m_args.rpm_ffgain) ||
              paramChanged(m_args.mps_ffgain) ||
              paramChanged(m_args.mps_max_int) ||
              paramChanged(m_args.log_parcels))
          {
            reset();
            setup();
          }
        }

        //! On activation
        void
        onActivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        //! On deactivation
        void
        onDeactivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        //! Reserve entities.
        void
        onEntityReservation(void)
        {
          if (m_args.log_parcels)
          {
            std::string label = getEntityLabel();
            m_parcel_rpm.setSourceEntity(reserveEntity(label + " - RPM Parcel"));
            m_parcel_mps.setSourceEntity(reserveEntity(label + " - MPS Parcel"));
          }
        }

        void
        onResourceInitialization(void)
        {
          reset();
        }

        //! Reset PIDs and actuation references.
        void
        reset(void)
        {
          m_rpm_pid.reset();
          m_mps_pid.reset();

          m_desired_speed = 0;
          m_speed_units = IMC::SUNITS_PERCENTAGE;

          m_previous_rpm = 0;

          m_act.id = 0;
          m_act.value = 0.0;
          m_last_act.id = 0;
          m_last_act.value = 0.0;
          dispatch(m_act);
        }

        //! Setup PIDs.
        void
        setup(void)
        {
          m_rpm_pid.setGains(m_args.rpm_gains);
          m_rpm_pid.setOutputLimits(-m_args.max_thrust, m_args.max_thrust); //Anti-windup: Incremental algorithm

          // Do not set MPS PID output limits since we use a feedforward gain.
          m_mps_pid.setGains(m_args.mps_gains);
          m_mps_pid.setIntegralLimits(m_args.mps_max_int);

          // Log parcels.
          if (m_args.log_parcels)
          {
            m_rpm_pid.enableParcels(this, &m_parcel_rpm);
            m_mps_pid.enableParcels(this, &m_parcel_mps);
          }
        }

        void
        consume(const IMC::Abort* msg)
        {
          if (msg->getDestination() != getSystemId())
            return;

          // This works as redundancy, in case everything else fails
          reset();
          debug("disabling");
        }

        void
        consume(const IMC::DesiredHeading* msg)
        {
          if (!isActive())
            return;

          m_desired_yaw_pc = msg->value;
        }

        void
        consume(const IMC::DesiredSpeed* msg)
        {
          if (!isActive())
            return;

          m_desired_speed = msg->value;
          m_speed_units = msg->speed_units;

          spew("Desired Speed: %f", m_desired_speed);
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          // Controller not active - Use current speed as desired
          if (!isActive())
          {
            m_desired_speed = msg->u;
            return;
          }

          // Do not use the thrust if the Path Controller has not produced a desired heading.
          if(m_desired_yaw_pc == 0.0000)
          {
            spew("PATH CONTROLLER NOT READY ------------- SPEED");
            return;
          }

          // Compute time delta.
          double tstep = m_delta.getDelta();
          // Check if we have a valid time delta.
          if (tstep < 0.0)
            return;

          float thrust_com = 0;
          float rpm = m_rpm.value;

          // Speed Controller - (PID Controller).
          switch (m_speed_units)
          {
          case IMC::SUNITS_PERCENTAGE:
            thrust_com = (m_desired_speed / 100.0);
            break;
          case IMC::SUNITS_METERS_PS:
            thrust_com = rpmToThrust(rpm, mpsToRpm(msg->u, tstep), tstep);
            break;
          case IMC::SUNITS_RPM:
            thrust_com = rpmToThrust(rpm, m_desired_speed, tstep);
            m_previous_rpm = m_desired_speed;
          default:
            break;
          }

          m_act.value = thrust_com;

          dispatchThrust(m_act.value, tstep);
        }

        void
        consume(const IMC::ControlLoops* msg)
        {
          if (!(msg->mask & (IMC::CL_SPEED)))
            return;

          if (msg->scope_ref < m_scope_ref)
            return;

          m_scope_ref = msg->scope_ref;

          if (msg->enable == isActive())
            return;

          if (msg->enable)
            requestActivation();
          else
            requestDeactivation();

          debug(isActive() ? DTR("enabling") : DTR("disabling"));

          if (!isActive())
            reset();
        }

        void
        consume(const IMC::Rpm* msg)
        {
          m_rpm.value = msg->value;
        }

        //! Convert rpm value to thrust actuation
        //! @param[in] rpm value of rpms currently in the motor
        //! @param[in] desired_rpm desired rpms for the motor
        //! @param[in] timestep amount of time since last control step
        //! @return thrust actuation.
        float
        rpmToThrust(float rpm, float desired_rpm, double timestep)
        {
          if (m_args.rpm_hardware)
          {
            return desired_rpm / m_args.rpm_eos;
          }
          else if (timestep > 0.0)
          {
            // PID Controller call
            double value;
            value = m_rpm_pid.step(timestep, desired_rpm - rpm);
            m_parcel_rpm.a = desired_rpm * m_args.rpm_ffgain;
            value += m_parcel_rpm.a;
            return value;
          }

          return 0.0;
        }

        //! Convert meters per second to a desired rpm value.
        //! @param[in] vel absolute ground velocity.
        //! @param[in] timestep amount of time since last control step.
        //! @return desired rpm value.
        float
        mpsToRpm(float vel, double timestep)
        {
          // Desired speed - Too low, turn off motor
          if (m_desired_speed < c_mps_tol)
          {
            m_previous_rpm = 0.0;
            return 0.0;
          }

          // Cannot let the timestep be zero
          if (timestep <= 0.0)
            return 0.0;


          // PID Controller call
          float rpm = m_mps_pid.step(timestep, m_desired_speed - vel);
          m_parcel_mps.a = m_desired_speed * m_args.mps_ffgain;
          rpm += m_parcel_mps.a;

          // Trim acceleration in rpms
          rpm = Math::trimValue(rpm, m_previous_rpm - m_args.max_accel * timestep,
                                m_previous_rpm + m_args.max_accel * timestep);

          // Trim rpm value
          rpm = Math::trimValue(rpm, m_args.min_rpm, m_args.max_rpm);
          m_previous_rpm = rpm;
          return rpm;
        }

        //! Dispatch to bus SetThrusterActuation message
        //! @param[in] value set thrust actuation value
        //! @param[in] timestep amount of time since last control step
        void
        dispatchThrust(float value, double timestep)
        {
          if ((value > m_last_act.value) && (m_args.act_ramp > 0.0))
          {
            value = m_last_act.value + trimValue((value - m_last_act.value) / timestep,
                                                 0.0, m_args.act_ramp * timestep);
          }

          m_act.value = trimValue(value, -m_args.max_thrust, m_args.max_thrust);

          dispatch(m_act);

          ////////////////////////////////////////////////////// Print useful.
          spew("SetThrusterActuation value: %f", m_act.value);

          int16_t print_thruster;

          // Ensure thruster acutation range [-max, max]
          print_thruster = roundToInteger(m_act.value * 100);
          print_thruster = trimValue(print_thruster, -100, 100);

          spew("SetThrusterActuation sent: %d", print_thruster);

          /////////////////////////////////////////////////////////

          m_last_act.value = m_act.value;
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
}

DUNE_TASK

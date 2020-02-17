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
    namespace HeadingController
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        //! Maximum Rudder Actuation.
        float act_max;
        //! Ramp actuation limit when the value is rising in actuation per second
        float act_ramp;
        //! PID gains for heading controller.
        std::vector<float> yaw_gains;
        //! Log the size of each PID parcel
        bool log_parcels;
        //! Filter activation variables.
        bool lp_filtering, n_filtering, bs_filtering;
        //! Low-pass filter taps.
        double lpf_taps;
        //! Low-pass filter scaling.
        double lpf_scaling;
        //! Notch filter taps.
        double nf_taps;
        //! Band-stop filter taps.
        double bsf_taps;
        //! Band-stop filter scaling.
        double bsf_scaling;
        //! Desired turning rate.
        float desired_yaw_der;
      };

      struct Task: public Tasks::Task
      {
        //! YAW PID controller
        DiscretePID m_yaw_pid;
        //! Control Parcels for yaw controller
        IMC::ControlParcel m_parcel_yaw;
        //! Desired heading.
        float m_desired_yaw;
        //! Time of last estimated state message.
        Delta m_delta;        
        //! Current rudder position/actuation.
        IMC::SetServoPosition m_act;
        //! Current rudder position/actuation.
        IMC::ServoPosition m_last_act;
        //! Angular velocity message.
        IMC::AngularVelocity m_angvel;
        //! Control loops last reference
        uint32_t m_scope_ref;
        //! Task arguments.
        Arguments m_args;
        //! Low-pass filter for wave filtering.
        FilterEstimator lpf;
        //! Notch filter for wave filtering.
        FilterEstimator nf;
        //! Band-stop filter for wave filtering.
        FilterEstimator bs;
        //! Estimated Wave Frequency.
        double m_wave_freq;
        //! Timestep.
        double m_tstep;


        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_scope_ref(0),
          m_wave_freq(0.0),
          m_tstep(0.0)
        {
          param("Maximum Rudder Actuation", m_args.act_max)
          .defaultValue("1.0")
          .description("Maximum Rudder Command");

          param("Yaw PID Gains", m_args.yaw_gains)
          .defaultValue("")
          .size(3)
          .description("PID gains for YAW controller");

          param("Ramp Actuation Limit", m_args.act_ramp)
          .defaultValue("0.0")
          .description("Ramp actuation limit when the value is rising in actuation per second");

          param("Log PID Parcels", m_args.log_parcels)
          .defaultValue("false")
          .description("Log the size of each PID parcel");

          param("Activate LP Filtering", m_args.lp_filtering)
          .defaultValue("false")
          .description("Activate Low-pass filtering of computed rudder angle");

          param("Activate N Filtering", m_args.n_filtering)
          .defaultValue("false")
          .description("Activate Notch filtering of computed rudder angle");

          param("Activate BS Filtering", m_args.bs_filtering)
          .defaultValue("false")
          .description("Activate Band-stop filtering of computed rudder angle");

          param("LP taps", m_args.lpf_taps)
          .defaultValue("10.0")
          .minimumValue("1.0")
          .description("Low-pass filter number of taps");

          param("LPF scaling", m_args.lpf_scaling)
          .defaultValue("1.2")
          .minimumValue("1.0")
          .description("Low-pass filter gain to remove HF components");

          param("NF taps", m_args.nf_taps)
          .defaultValue("10.0")
          .minimumValue("1.0")
          .description("Notch filter number of taps");

          param("BSF taps", m_args.bsf_taps)
          .defaultValue("10.0")
          .minimumValue("1.0")
          .description("Band-stop filter(s) number of taps");

          param("BSF scaling", m_args.bsf_scaling)
          .defaultValue("20")
          .minimumValue("1")
          .description("BSF scaling percentage around cut-off estimated frequency");

          param("Desired turning rate", m_args.desired_yaw_der)
          .defaultValue("0.0")
          .minimumValue("0.0")
          .maximumValue("5.0")
          .description("User-defined desired turning rate.");

          // Initialize entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

          // Register handler routines.
          bind<IMC::Abort>(this);
          bind<IMC::EstimatedState>(this);
          bind<IMC::DesiredHeading>(this);
          bind<IMC::ControlLoops>(this);
          bind<IMC::EstimatedFreq>(this);
          bind<IMC::AngularVelocity>(this);
        }

        void
        onUpdateParameters(void)
        {

          if (paramChanged(m_args.yaw_gains) ||
              paramChanged(m_args.log_parcels))
          {
            reset();
            setup();
          }

          if(paramChanged(m_args.lp_filtering) ||
             paramChanged(m_args.n_filtering) ||
             paramChanged(m_args.bs_filtering) ||
             paramChanged(m_args.lpf_taps) ||
             paramChanged(m_args.nf_taps) ||
             paramChanged(m_args.lpf_scaling) ||
             paramChanged(m_args.bsf_taps) ||
             paramChanged(m_args.bsf_scaling))
            buildFilters();
        }

        //! Reserve entities.
        void
        onEntityReservation(void)
        {
          if (m_args.log_parcels)
          {
            std::string label = getEntityLabel();
            m_parcel_yaw.setSourceEntity(reserveEntity(label + " - Yaw Parcel"));
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

        //! Reset PIDs and actuation references.
        void
        reset(void)
        {
          m_yaw_pid.reset();

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
          m_yaw_pid.setGains(m_args.yaw_gains);
          m_yaw_pid.setOutputLimits(-m_args.act_max, m_args.act_max);				// Anti-windup (was not set before sea trials) and not yet been tested.

          if (m_args.log_parcels)
          {
            m_yaw_pid.enableParcels(this, &m_parcel_yaw);
          }
        }

        void
        onResourceInitialization(void)
        {
          reset();
        }

        void
        consume(const IMC::Abort* msg)
        {
          if (msg->getDestination() != getSystemId())
            return;

          // Redundancy, in case everything else fails
          reset();
          debug("disabling");
        }

        void
        consume(const IMC::AngularVelocity* msg)
        {
          if (msg->getDestination() != getSystemId())
            return;

          if(std::strcmp(resolveEntity(msg->getSourceEntity()).c_str(),"GPS")==0)
          {
            m_angvel.z = msg->z;
            trace("HEADING CONTROLLER ANGULAR VELOCITY: %f", m_angvel.z);
          } else
              return;
        }

        void
        buildFilters(void)
        {
          if(m_args.lp_filtering==true)
            lpf.build("LPF", m_args.lpf_taps, 1/m_tstep, pow(2*M_PI/(m_args.lpf_scaling*m_wave_freq),-1)); // Assuming delta is in seconds.
          if(m_args.n_filtering==true)
            nf.build("NF", m_args.nf_taps, 1/m_tstep, pow(2*M_PI/m_wave_freq,-1));
          if(m_args.bs_filtering==true)
            bs.build("BSF", m_args.nf_taps, 1/m_tstep, pow(2*M_PI/m_wave_freq,-1)-pow(2*M_PI/m_wave_freq,-1)*(m_args.bsf_scaling/100), pow(2*M_PI/m_wave_freq,-1)+pow(2*M_PI/m_wave_freq,-1)*(m_args.bsf_scaling/100));
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
		      // Controller not active. Use current yaw
          if (!isActive())
          {
            m_desired_yaw = msg->psi;
            return;
          }

          // Compute Time Delta.
          m_tstep = m_delta.getDelta();
          // Check if we have a valid time delta.
          if (m_tstep < 0.0)
            return;

		      // Heading Error (From desired heading)
          float err_yaw = Angles::normalizeRadian(m_desired_yaw - msg->psi);

          // Derivative Error.
          float err_yaw_der = m_args.desired_yaw_der - m_angvel.z; //m_angvel.z may need to be filtered?

          // Yaw Controller (PID controller) 
          float rudder_cmd = m_yaw_pid.step(m_tstep, err_yaw, err_yaw_der);
          m_act.value = rudder_cmd;

		      //spew("AutoNaut - Rudder_cmd/m_act: %0.3f  Desired heading: %0.3f", m_act.value, c_degrees_per_radian*m_desired_yaw);			
          dispatchRudder(m_act.value, m_tstep);

          //! Desired Rudder Angle
      	  int16_t print_rudder;

          print_rudder = roundToInteger(m_act.value*45*10);
          print_rudder = trimValue(print_rudder, -45, 45);

          //spew("ServoPosition value: %d", print_rudder);
        }

        void
        consume(const IMC::DesiredHeading* msg)
        {
          if (!isActive())
            return;

          m_desired_yaw = msg->value;
          //spew("AutoNaut - Desired Heading: %0.3f  ", c_degrees_per_radian*msg->value);
        }

        void
        consume(const IMC::EstimatedFreq* msg)
        {
          if (!isActive())
            return;

          m_wave_freq = msg->value;
          if(m_wave_freq != 0 && (m_args.lp_filtering==true || m_args.n_filtering==true || m_args.bs_filtering==true))
            buildFilters();

          spew("Consumed Wave Frequency: %f", m_wave_freq);
        }

        void
        consume(const IMC::ControlLoops* msg)
        {
          if (!(msg->mask & (IMC::CL_YAW)))
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

        //! Dispatch to bus ServoPosition message
        //! @param[in] value set rudder actuation value
        //! @param[in] timestep amount of time since last control step
        void
        dispatchRudder(float value, double timestep)
        {
			    //Activated if act_ramp (Config file) is set > 0
          if ((value > m_last_act.value) && (m_args.act_ramp > 0.0))
          {
            value = m_last_act.value + trimValue((value - m_last_act.value) / timestep,
                                                     0.0, m_args.act_ramp * timestep);
          }

          m_act.value = trimValue(value, -m_args.act_max, m_args.act_max);
          
          if (m_wave_freq == 0.0)
              dispatch(m_act);
          else
            {
              if(m_args.lp_filtering == true && m_args.n_filtering == false && m_args.bs_filtering == false)
              {
                // Apply LPF coefficients.
                m_act.value = lpf.step(m_act.value);
                dispatch(m_act);
                spew("LP Filtering.");
              }
              else if(m_args.lp_filtering == false && m_args.n_filtering == true && m_args.bs_filtering == false)
              {
                // Apply NF coefficients.
                m_act.value = nf.step(m_act.value);
                dispatch(m_act);
                spew("NF Filtering.");
              }
              else if(m_args.lp_filtering == true && m_args.n_filtering == true && m_args.bs_filtering == false)
              {                
                // Apply NF+LPF coefficients.
                m_act.value = nf.step(m_act.value);
                m_act.value = lpf.step(m_act.value);
                dispatch(m_act);
                spew("NF + LP Filtering.");
              }
              else if(m_args.lp_filtering == true && m_args.n_filtering == false && m_args.bs_filtering == true)
              {
                // Apply BS+LPF coefficients.
                m_act.value = bs.step(m_act.value);
                m_act.value = lpf.step(m_act.value);
                dispatch(m_act);
                spew("BS + LP Filtering.");
              }
              else
                dispatch(m_act);
            }
          
          m_last_act.value = m_act.value;
          //spew("AutoNaut - Rudder dispatched: %0.3f  ", m_act.value);
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

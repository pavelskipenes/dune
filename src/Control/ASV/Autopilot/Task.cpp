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

namespace Control
{
  namespace ASV
  {
    namespace Autopilot
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        //! Maximum Rudder Actuation.
        float act_max;
        //! Ramp actuation limit when the value is rising in actuation per second
        float act_ramp;
        //! PID gains for heading controller during turn.
        std::vector<float> yaw_gains_turn;
        //! PID gains for heading controller during transect.
        std::vector<float> yaw_gains_trans;
        //! Log the size of each PID parcel
        bool log_parcels;
        //! Filter activation variables.
        bool lp_filtering, n_filtering, bs_filtering, ext_filtering, course_des_filering;
        //! External Filter type.
        std::string ext_filter_type;
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
        //! External filter frequency.
        double ext_filter_freq;
        //! Desired Course percentage increase.
        int chop;
        //! Desired Course threshold.
        int course_thr;
        //! GPS entity label.
        std::string elabel_gps;
        //! Enable gain scheduling.
        bool en_gain_sch;
        //! Enable thruster usage.
        bool en_thrust;
        //! Enable thruster usage during turns.
        bool en_thrust_turn;
        //! Maximum Motor thrust.
        float max_thrust;
        //! Minimun SOG for thrusting.
        double min_sog;
        //! User defined thrust assistance.
        double thrust_assist;
      };

      struct Task: public Tasks::Task
      {
        //! GPS entity eid.
        int m_gps_eid;
        //! YAW PID controller
        DiscretePID m_yaw_pid;
        //! Control Parcels for yaw controller
        IMC::ControlParcel m_parcel;
        //! Desired course used by PID.
        float m_desired_yaw;
        //! Previous Desired course used by PID.
        float m_desired_yaw_prev;
        //! Time of last estimated state message.
        Delta m_delta;        
        //! Current rudder position/actuation.
        IMC::SetServoPosition m_act;
        //! Current rudder position/actuation.
        IMC::ServoPosition m_last_act;
        //! Angular velocity message.
        IMC::AngularVelocity m_angvel;
        //! Desired Heading message with value filtered or not.
        IMC::DesiredHeading m_des_course;
        //! Desired Heading rate message.
        IMC::DesiredHeadingRate m_des_course_rate;
        //! Control loops last reference
        uint32_t m_scope_ref;
        //! Filter Target Frequency.
        double m_target_frequency;
        //! External Filter Type.
        std::string m_ext_filter_type;
        //! Low-pass filter for wave filtering.
        FilterEstimator lpf;
        //! Notch filter for wave filtering.
        FilterEstimator nf;
        //! Band-stop filter for wave filtering.
        FilterEstimator bs;
        //! External user-defined filter for wave filtering.
        FilterEstimator ext;
        //! Desired Course user-defined filter for smoothing reference change.
        FilterEstimator course_filt;
        //! Estimated Wave Frequency.
        double m_wave_freq;
        //! Timestep.
        double m_tstep;
        //! Chopping boolean.
        bool m_chopping;
        //! Turning for filtering.
        bool m_turning_filt;
        //! A turn is happening.
        bool m_turning;
        //! Desired Heading is arrived.
        bool m_des_head_arrived;
        //! Current motor actuation.
        IMC::SetThrusterActuation m_act_thrust;
        //! Speed Over Ground.
        double m_sog;
        //! Enable gain scheduling.
        bool m_en_gain_sch;
        //! Thrust during assistance.
        double m_thrust_assistance;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_scope_ref(0),
          m_target_frequency(1.0),
          m_wave_freq(0.0),
          m_tstep(0.0),
          m_chopping(false),
          m_turning_filt(false),
          m_turning(false),
          m_des_head_arrived(false),
          m_en_gain_sch(false)
        {
          param("Enable Gain Scheduling", m_args.en_gain_sch)
          .defaultValue("true")
          .description("Enable gain scheduling during turn");

          param("Enable Thrust Assistance", m_args.en_thrust)
          .defaultValue("true")
          .description("Assist navigation with thruster");
          
          param("Enable Thrust During Turn", m_args.en_thrust_turn)
          .defaultValue("true")
          .description("Assist the turn using the thruster");

          param("Thrust Assistance", m_args.thrust_assist)
          .defaultValue("0.75")
          .description("Percentage of thrust assistance");

          param("Maximum Thrust Actuation", m_args.max_thrust)
          .defaultValue("1.0")
          .description("Maximum Motor Command");

          param("Minimum Speed for Thrust", m_args.min_sog)
          .defaultValue("0.3")
          .description("Speed [m/s] below which thruster is used");

          param("Maximum Rudder Actuation", m_args.act_max)
          .defaultValue("1.0")
          .description("Maximum Rudder Command");

          param("Yaw PID Gains Transect", m_args.yaw_gains_trans)
          .defaultValue("")
          .size(3)
          .description("PID gains for YAW controller during straight line");

          param("Yaw PID Gains Turning", m_args.yaw_gains_turn)
          .defaultValue("")
          .size(3)
          .description("PID gains for YAW controller during turn");

          param("Ramp Actuation Limit", m_args.act_ramp)
          .defaultValue("0.0")
          .description("Ramp actuation limit when the value is rising in actuation per second");

          param("Log PID Parcels", m_args.log_parcels)
          .defaultValue("false")
          .description("Log the size of each PID parcel");

          param("Entity Label - GPS", m_args.elabel_gps)
          .description("Entity label of 'AngularVelocity' message");

          param("Activate LP Filtering", m_args.lp_filtering)
          .defaultValue("false")
          .description("Activate Low-pass filtering of computed rudder angle");

          param("Activate N Filtering", m_args.n_filtering)
          .defaultValue("false")
          .description("Activate Notch filtering of computed rudder angle");

          param("Activate BS Filtering", m_args.bs_filtering)
          .defaultValue("false")
          .description("Activate Band-stop filtering of computed rudder angle");

          param("Activate External Filtering", m_args.ext_filtering)
          .defaultValue("false")
          .description("Activate external user-defined filtering of computed rudder angle");

          param("External Filter Type", m_args.ext_filter_type)
          .defaultValue("LPF")
          .description("External user-defined filter type");

          param("Activate Desired Course Filtering", m_args.course_des_filering)
          .defaultValue("false")
          .description("Activate desired user-defined course filtering");

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

          param("External Filter Frequency", m_args.ext_filter_freq)
          .units(Units::Hertz)
          .defaultValue("1.0")
          .description("Frequency for external user-defined filter.");

          param("Desired Course Percentage Increase", m_args.chop)
          .defaultValue("30")
          .description("Incremental portioning during desired course change.");

          param("Desired Course Difference Threshold", m_args.course_thr)
          .defaultValue("30")
          .description("Minimum desired course change that triggers low-pass filtring.");

          param("Desired turning rate", m_args.desired_yaw_der)
          .defaultValue("0.0")
          .minimumValue("0.0")
          .maximumValue("5.0")
          .description("User-defined desired turning rate in rad/s.");

          // Initialize entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

          // Register handler routines.
          bind<IMC::Abort>(this);
          bind<IMC::EstimatedState>(this);
          bind<IMC::DesiredHeading>(this);
          bind<IMC::ControlLoops>(this);
          bind<IMC::EstimatedFreq>(this);
          bind<IMC::AngularVelocity>(this);
          bind<IMC::GpsFix>(this);
        }

        void
        onUpdateParameters(void)
        {

          if (paramChanged(m_args.yaw_gains_trans) ||
              paramChanged(m_args.log_parcels))
          {
            reset();
            setup(m_args.yaw_gains_trans);
          }

          if (paramChanged(m_args.yaw_gains_turn))
          {
            reset();
            setup(m_args.yaw_gains_turn);
          }

          if(paramChanged(m_args.ext_filter_type))
            m_ext_filter_type = m_args.ext_filter_type;

          if(paramChanged(m_args.thrust_assist))
            m_thrust_assistance = m_args.thrust_assist;

          if(paramChanged(m_args.course_des_filering))
          {
            if(m_args.course_des_filering)
              m_chopping = true;
            else
              m_chopping = false;
          }

          if(paramChanged(m_args.en_gain_sch))
            m_en_gain_sch = m_args.en_gain_sch;

          if(paramChanged(m_args.lp_filtering) ||
             paramChanged(m_args.n_filtering) ||
             paramChanged(m_args.bs_filtering) ||
             paramChanged(m_args.ext_filtering) ||
             paramChanged(m_args.lpf_taps) ||
             paramChanged(m_args.nf_taps) ||
             paramChanged(m_args.lpf_scaling) ||
             paramChanged(m_args.bsf_taps) ||
             paramChanged(m_args.bsf_scaling) ||
             paramChanged(m_args.ext_filter_freq))
              buildFilters();
        }

        void
        onEntityResolution(void)
        {
          try
          {
            m_gps_eid = resolveEntity(m_args.elabel_gps);
          }
          catch (...)
          {
            m_gps_eid = 0;
          }
        }

        //! Reserve entities.
        void
        onEntityReservation(void)
        {
          if (m_args.log_parcels)
          {
            std::string label = getEntityLabel();
            m_parcel.setSourceEntity(reserveEntity(label + " - Yaw Parcel"));
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
        setup(std::vector<float> gains)
        {
          m_yaw_pid.setGains(gains);
          m_yaw_pid.setOutputLimits(-m_args.act_max, m_args.act_max);	// Anti-windup
          //float ki_sat = 1/gains[1];
          //m_yaw_pid.setIntegralLimits(ki_sat);

          debug("SETTING GAINS: %0.3f, %0.3f, %0.3f", gains[0], gains[1], gains[2]);

          if (m_args.log_parcels)
          {
            m_yaw_pid.enableParcels(this, &m_parcel);
          }
        }

        void
        onResourceInitialization(void)
        {
          // Reset Heading Controller.
          reset();

          // Set initial thruster speed to zero.
          m_act_thrust.id = 0;
          m_act_thrust.value = 0.0;
        }

        void
        consume(const IMC::Abort* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          // Redundancy, in case everything else fails
          reset();
          debug("disabling");
        }

        void
        consume(const IMC::AngularVelocity* msg)
        {
          if (msg->getSource() != getSystemId() || msg->getSourceEntity() != m_gps_eid)
            return;

          m_angvel.z = msg->z;
          trace("HEADING CONTROLLER ANGULAR VELOCITY: %f", m_angvel.z);
        }

        void
        buildFilters(void)
        {
          if(m_args.ext_filtering==true)
          {
            if(m_ext_filter_type.compare("LPF")==0)
              ext.build("LPF", m_args.lpf_taps, 1/m_tstep, pow(2*M_PI/(m_args.ext_filter_freq),-1)); // Assuming delta is in seconds.
            else if(m_ext_filter_type.compare("NF")==0)
              ext.build("NF", m_args.nf_taps, 1/m_tstep, pow(2*M_PI/m_args.ext_filter_freq,-1));
            else if(m_ext_filter_type.compare("BSF")==0)
              ext.build("BSF", m_args.nf_taps, 1/m_tstep, pow(2*M_PI/m_args.ext_filter_freq,-1)-pow(2*M_PI/m_args.ext_filter_freq,-1)*(m_args.bsf_scaling/100), pow(2*M_PI/m_args.ext_filter_freq,-1)+pow(2*M_PI/m_args.ext_filter_freq,-1)*(m_args.bsf_scaling/100));
          }

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
		      // Controller not active use current yaw.
          if (!isActive())
          {
            m_desired_yaw = msg->psi;
            return;
          }

          /*if(m_desired_yaw == 0.0000)
          {
            trace("PATH CONTROLLER NOT READY");
            return;
          }*/

          // Compute Time Delta.
          m_tstep = m_delta.getDelta();
          // Check if we have a valid time delta.
          if (m_tstep < 0.0)
            return;

          // Course Error (From IMC::DesiredHeading)
          float err_yaw = Angles::normalizeRadian(m_desired_yaw - msg->psi);
          debug("COURSE ERROR: %f", Angles::degrees(err_yaw));

          // Derivative Error.
          float err_yaw_der = m_args.desired_yaw_der - m_angvel.z; //m_angvel.z may need to be filtered?

          // Yaw Controller (PID controller) 
          float rudder_cmd = m_yaw_pid.step(m_tstep, err_yaw, err_yaw_der);
          m_act.value = rudder_cmd;

		      //spew("AutoNaut - Rudder_cmd/m_act: %0.3f  Desired heading: %0.3f", m_act.value, c_degrees_per_radian*m_desired_yaw);			
          dispatchRudder(m_act.value, m_tstep);
          //debug("Commanded Rudder Angle %ld", trimValue(roundToInteger(m_act.value*45*10), -45, 45));

          // Dispatch thrust command.
          dispatchThrust();

          m_des_course_rate.value = m_args.desired_yaw_der;
          dispatch(m_des_course_rate);
        }

        void
        consume(const IMC::DesiredHeading* msg)
        {
          if (!isActive())
            return;

          m_des_head_arrived = true;

          m_desired_yaw = msg->value;
          debug("DES_COURSE FROM PC: %0.3f  ", Angles::degrees(m_desired_yaw));
          //trace("NORMALIZED DES_COURSE FROM PC: %0.3f  ", Angles::degrees(m_desired_yaw));

          // Check if waypoint switch has occurred with significant reference change.
          double course_diff = std::fabs(m_desired_yaw - m_desired_yaw_prev);
          trace("COURSE DIFF: %f", Angles::degrees(course_diff));
          double course_diff_norm = std::fabs(normalize_angle(course_diff));
          debug("NORMALIZED COURSE DIFF: %f", Angles::degrees(course_diff_norm));

          if(course_diff_norm > Angles::radians(m_args.course_thr))
            m_turning = true;

          double offset = (double) m_args.chop/100;

          if(m_chopping && course_diff_norm > Angles::radians(m_args.course_thr) && course_diff>=Angles::radians(180))
          {
            if(m_en_gain_sch && !m_turning_filt)
            {
              //! Reset Heading Controller.
              reset();
              //! Re-configure PID if adaptive autopilot is chosen.
              setup(m_args.yaw_gains_turn);
            }
            m_turning_filt = true;

            if(m_desired_yaw > m_desired_yaw_prev)
            {
              if(m_desired_yaw_prev<0)
              {
                m_desired_yaw = m_desired_yaw_prev - (course_diff_norm*offset);
                debug("Negative Chopping! DECREASE -%f - COURSE INSTEAD: %f", Angles::degrees(course_diff_norm*offset), Angles::degrees(m_desired_yaw));
              }
              else
              {
                m_desired_yaw = m_desired_yaw_prev + (course_diff_norm*offset);
                debug("Negative Chopping! DECREASE %f - COURSE INSTEAD: %f", Angles::degrees(course_diff_norm*offset), Angles::degrees(m_desired_yaw));
              }
            } else if(m_desired_yaw < m_desired_yaw_prev)
            {
              m_desired_yaw = normalize_angle(m_desired_yaw_prev + (course_diff_norm*offset));
              debug("Positive Chopping! INCREASE %f - COURSE INSTEAD: %f", Angles::degrees(course_diff_norm*offset), Angles::degrees(m_desired_yaw));
            }
          } else if(m_chopping && course_diff_norm > Angles::radians(m_args.course_thr) && course_diff<Angles::radians(180))
          {
            if(m_en_gain_sch && !m_turning_filt)
            {
              //! Reset Heading Controller.
              reset();
              //! Re-configure PID if adaptive autopilot is chosen.
              setup(m_args.yaw_gains_turn);
            }
            m_turning_filt = true;

            if(m_desired_yaw > m_desired_yaw_prev)
            {
              m_desired_yaw = m_desired_yaw_prev + (course_diff_norm*offset);
              debug("Positive Chopping! INCREASE %f - COURSE INSTEAD: %f", Angles::degrees(course_diff_norm*offset), Angles::degrees(m_desired_yaw));
            }
            else if(m_desired_yaw < m_desired_yaw_prev)
            {
              m_desired_yaw = m_desired_yaw_prev - (course_diff_norm*offset);
              debug("Negative Chopping! DECREASE %f - COURSE INSTEAD: %f", Angles::degrees(course_diff_norm*offset), Angles::degrees(m_desired_yaw));
            }
          } else if(course_diff_norm < Angles::radians(m_args.course_thr))
          {
            if(m_en_gain_sch && m_turning_filt)
            {
              debug("TURN IS FINISHED - RESTORING TRANSECT PID GAINS");
              //! Reset Heading Controller.
              reset();
              //! Re-configure PID if adaptive autopilot is chosen.
              setup(m_args.yaw_gains_trans);
            }
            m_turning_filt = false;
            m_turning = false;
            trace("NOT TURNING!");
          }
          m_desired_yaw_prev = m_desired_yaw;
        }

        double normalize_angle(double angle)
        {
          while(angle <= -M_PI) angle += 2*M_PI;
          while (angle > M_PI) angle -= 2*M_PI;
          return angle;
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
          {
            reset();
            m_act_thrust.value = 0.0;
            dispatch(m_act_thrust);
          }
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
              if(m_args.ext_filtering == true && m_args.lp_filtering == false && m_args.n_filtering == false && m_args.bs_filtering == false)
              {
                // Apply external filter coefficients.
                m_act.value = ext.step(m_act.value);
                dispatch(m_act);
                trace("Applying a %s filter with %0.3f cut-off frequency.", m_ext_filter_type.c_str(), m_args.ext_filter_freq);
              }
              else if(m_args.lp_filtering == true && m_args.n_filtering == false && m_args.bs_filtering == false)
              {
                // Apply LPF coefficients.
                m_act.value = lpf.step(m_act.value);
                dispatch(m_act);
                trace("LPF Filtering.");
              }
              else if(m_args.lp_filtering == false && m_args.n_filtering == true && m_args.bs_filtering == false)
              {
                // Apply NF coefficients.
                m_act.value = nf.step(m_act.value);
                dispatch(m_act);
                trace("NF Filtering.");
              }
              else if(m_args.lp_filtering == true && m_args.n_filtering == true && m_args.bs_filtering == false)
              {                
                // Apply NF+LPF coefficients.
                m_act.value = nf.step(m_act.value);
                m_act.value = lpf.step(m_act.value);
                dispatch(m_act);
                trace("NF + LP Filtering.");
              }
              else if(m_args.lp_filtering == true && m_args.n_filtering == false && m_args.bs_filtering == true)
              {
                // Apply BS+LPF coefficients.
                m_act.value = bs.step(m_act.value);
                m_act.value = lpf.step(m_act.value);
                dispatch(m_act);
                trace("BS + LP Filtering.");
              }
              else
              {
                dispatch(m_act);
                trace("NO WAVE FILTERING");
              }
                
            }
          
          m_last_act.value = m_act.value;
          //spew("AutoNaut - Rudder dispatched: %0.3f  ", m_act.value);
        }

        void
        consume(const IMC::GpsFix* msg)
        {
          if(msg->getSource() != getSystemId() || msg->getSourceEntity() != m_gps_eid)
            return;

          m_sog = msg->sog;

          if(!m_des_head_arrived)
          {
            m_desired_yaw_prev = msg->cog;
            trace("DES COURSE PREV %.3f", Angles::degrees(m_desired_yaw_prev));
          }
            
        }

        //! Dispatch to bus SetThrusterActuation message
        void
        dispatchThrust()
        {
          double value;
          // Use thruster if thruster is enabled, turning assistance is enabled and vessel is actually turning.
          if(m_args.en_thrust_turn && (m_turning_filt || m_turning)) //m_args.en_thrust && 
          {
            value = m_thrust_assistance;
            debug("Assisting the turn: thrust %.3f", value);
          } else if(m_args.en_thrust && !m_turning && m_sog < m_args.min_sog) // or if thruster is enabled, vessel is not turning, but speed is very low.
          {
            value = m_thrust_assistance;
            debug("Assisting the transect: thrust %.3f", value);
          } else
            value = 0.0;
          
          m_act_thrust.value = trimValue(value, -m_args.max_thrust, m_args.max_thrust);

          dispatch(m_act_thrust);

          //spew("SetThrusterActuation values: %f, %d", m_act_thrust.value, trimValue(roundToInteger(m_act.value * 100), -100, 100));
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

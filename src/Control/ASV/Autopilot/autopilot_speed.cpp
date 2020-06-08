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

      //! Tolerance for very low meters per second speed.
      static const float c_mps_tol = 0.1;

      struct Arguments
      {
        //   ------------------------- SPEED ----------------------------   //

        //! Maximum Motor thrust.
        float max_thrust;
        //! Ramp actuation limit when the value is rising in actuation per second
        float act_ramp_s;
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
        bool log_parcels_s;
        //! Activate speed control.
        bool speed_ctrl;

        //   ------------------------- HEADING ----------------------------   //

        //! Maximum Rudder Actuation.
        float act_max;
        //! Ramp actuation limit when the value is rising in actuation per second
        float act_ramp_y;
        //! PID gains for heading controller.
        std::vector<float> yaw_gains;
        //! Log the size of each PID parcel
        bool log_parcels_y;
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
        //! Activate speed control.
        bool yaw_ctrl;
      };

      struct Task: public Tasks::Task
      {
        //   ------------------------- SPEED ----------------------------   //

        //! Desired speed.
        float m_desired_speed;
        //! Desired speed units.
        uint8_t m_speed_units;
        //! RPM PID controller
        DiscretePID m_rpm_pid;
        //! MPS PID controller
        DiscretePID m_mps_pid;
        //! Current motor actuation.
        IMC::SetThrusterActuation m_act_s;
        //! Last motor actuation.
        IMC::SetThrusterActuation m_last_act_s;
        //! Control Parcels for mps controller
        IMC::ControlParcel m_parcel_mps;
        //! Control Parcels for rpm controller
        IMC::ControlParcel m_parcel_rpm;
        //! Motor rpm.
        IMC::Rpm m_rpm;
        //! previous value of the desired rpm speed
        float m_previous_rpm;
        //! Enable Speed Control.
        bool m_speed_ctrl;

        //   ------------------------- HEADING ----------------------------   //
        //! GPS entity eid.
        int m_gps_eid;
        //! YAW PID controller
        DiscretePID m_yaw_pid;
        //! Control Parcels for yaw controller
        IMC::ControlParcel m_parcel_yaw;
        //! Desired course from Path Controller.
        float m_desired_yaw_pc;
        //! Desired course used by PID.
        float m_desired_yaw;
        //! Previous Desired course used by PID.
        float m_desired_yaw_prev;
        //! Time of last estimated state message.
        Delta m_delta;
        //! Current rudder position/actuation.
        IMC::SetServoPosition m_act_y;
        //! Current rudder position/actuation.
        IMC::ServoPosition m_last_act_y;
        //! Angular velocity message.
        IMC::AngularVelocity m_angvel;
        //! Desired Heading message with value filtered or not.
        IMC::DesiredHeading m_des_course;
        //! Desired Heading rate message.
        IMC::DesiredHeadingRate m_des_course_rate;
        //! Control loops last reference.
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
        //! Indicated desired heading update from Path Controller.
        bool m_des_head_arrived;
        //! Enable Yaw Control.
        bool m_yaw_ctrl;
        
        
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_desired_speed(0.0),
          m_previous_rpm(0.0),
          m_scope_ref(0),
          m_target_frequency(1.0),
          m_wave_freq(0.0),
          m_tstep(0.0),
          m_chopping(false),
          m_des_head_arrived(false)
        {
          param("Enable Speed Control", m_args.speed_ctrl)
          .defaultValue("true")
          .description("Enable Speed Control");

          param("Enable Yaw Control", m_args.yaw_ctrl)
          .defaultValue("true")
          .description("Enable Yaw Control");

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
          
          param("Ramp Actuation Limit Speed", m_args.act_ramp_s)
          .defaultValue("0.0")
          .description("Ramp actuation limit when the value is rising in actuation per second");

          param("Log PID Parcels Speed", m_args.log_parcels_s)
          .defaultValue("false")
          .description("Log the size of each PID parcel");

          param("Maximum Rudder Actuation", m_args.act_max)
          .defaultValue("1.0")
          .description("Maximum Rudder Command");

          param("Yaw PID Gains", m_args.yaw_gains)
          .defaultValue("")
          .size(3)
          .description("PID gains for YAW controller");

          param("Ramp Actuation Limit Yaw", m_args.act_ramp_y)
          .defaultValue("0.0")
          .description("Ramp actuation limit when the value is rising in actuation per second");

          param("Log PID Parcels Yaw", m_args.log_parcels_y)
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
          .description("Incremental portioning during desired course change.");

          param("Desired turning rate", m_args.desired_yaw_der)
          .defaultValue("0.0")
          .minimumValue("0.0")
          .maximumValue("5.0")
          .description("User-defined desired turning rate in rad/s.");

          m_speed_units = IMC::SUNITS_PERCENTAGE;

          // Initialize entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

          // Register handler routines.
          bind<IMC::Abort>(this);
          bind<IMC::EstimatedState>(this);
          bind<IMC::DesiredHeading>(this);
          bind<IMC::ControlLoops>(this);
          bind<IMC::EstimatedFreq>(this);
          bind<IMC::AngularVelocity>(this);
          bind<IMC::Rpm>(this);
          bind<IMC::DesiredSpeed>(this);
        }

        void
        onUpdateParameters(void)
        {
          if(paramChanged(m_args.speed_ctrl))
            m_speed_ctrl = m_args.speed_ctrl;
          if(paramChanged(m_args.yaw_ctrl))
            m_yaw_ctrl = m_args.yaw_ctrl;

          if(paramChanged(m_args.rpm_gains) ||
              paramChanged(m_args.mps_gains) ||
              paramChanged(m_args.rpm_ffgain) ||
              paramChanged(m_args.mps_ffgain) ||
              paramChanged(m_args.mps_max_int) ||
              paramChanged(m_args.log_parcels_s))
          {
            reset("s");
            setup("s");
          }

          if(paramChanged(m_args.yaw_gains) ||
              paramChanged(m_args.log_parcels_y))
          {
            reset("y");
            setup("y");
          }

          if(paramChanged(m_args.ext_filter_type))
            m_ext_filter_type = m_args.ext_filter_type;

          if(paramChanged(m_args.course_des_filering))
          {
            if(m_args.course_des_filering)
              m_chopping = true;
            else
              m_chopping = false;
          }

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

        void
        onResourceInitialization(void)
        {
          m_speed_ctrl = m_args.speed_ctrl;
          m_yaw_ctrl = m_args.yaw_ctrl;

          reset("s");
          reset("y");
        }

        //! Reserve entities.
        void
        onEntityReservation(void)
        {
          if (m_args.log_parcels_s)
          {
            std::string label = getEntityLabel();
            m_parcel_rpm.setSourceEntity(reserveEntity(label + " - RPM Parcel"));
            m_parcel_mps.setSourceEntity(reserveEntity(label + " - MPS Parcel"));
          }

          if (m_args.log_parcels_y)
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
        reset(std::string res)
        {
          if(res.compare("s") == 0)
          {
            m_rpm_pid.reset();
            m_mps_pid.reset();

            m_desired_speed = 0;
            m_speed_units = IMC::SUNITS_PERCENTAGE;

            m_previous_rpm = 0;

            m_act_s.id = 0;
            m_act_s.value = 0.0;
            m_last_act_s.id = 0;
            m_last_act_s.value = 0.0;
            dispatch(m_act_s);
          } else
          {
            m_yaw_pid.reset();

            m_act_y.id = 0;
            m_act_y.value = 0.0;
            m_last_act_y.id = 0;
            m_last_act_y.value = 0.0;

            dispatch(m_act_y);
          }
        }

        //! Setup PIDs.
        void
        setup(std::string res)
        {
          if(res.compare("s") == 0)
          {
            m_rpm_pid.setGains(m_args.rpm_gains);
            m_rpm_pid.setOutputLimits(-m_args.max_thrust, m_args.max_thrust); //Anti-windup: Incremental algorithm

            // Do not set MPS PID output limits since we use a feedforward gain.
            m_mps_pid.setGains(m_args.mps_gains);
            m_mps_pid.setIntegralLimits(m_args.mps_max_int);

            // Log parcels.
            if (m_args.log_parcels_s)
            {
              m_rpm_pid.enableParcels(this, &m_parcel_rpm);
              m_mps_pid.enableParcels(this, &m_parcel_mps);
            }
          } else
          {
            m_yaw_pid.setGains(m_args.yaw_gains);
            m_yaw_pid.setOutputLimits(-m_args.act_max, m_args.act_max);	// Anti-windup (was not set before sea trials) and not yet been tested.

            if (m_args.log_parcels_y)
            {
              m_yaw_pid.enableParcels(this, &m_parcel_yaw);
            }
          }
        }

        void
        consume(const IMC::Rpm* msg)
        {
          m_rpm.value = msg->value;
        }        

        void
        consume(const IMC::Abort* msg)
        {
          if (msg->getDestination() != getSystemId())
            return;

          // Redundancy, in case everything else fails
          reset("s");
          reset("y");
          debug("disabling");
        }

        void
        consume(const IMC::AngularVelocity* msg)
        {
          if (msg->getDestination() != getSystemId() || msg->getSourceEntity() != m_gps_eid)
            return;

          m_angvel.z = msg->z;
          trace("HEADING CONTROLLER ANGULAR VELOCITY: %f", m_angvel.z);
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
        consume(const IMC::DesiredHeading* msg)
        {
          if (!isActive())
            return;

          m_desired_yaw_pc = msg->value;
          spew("AutoNaut - Desired Course: %0.3f  ", Angles::degrees(msg->value));

          m_des_head_arrived = true;
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

        // ----------------- CHECK WHAT TO DO WITH DOUBLE CL --------------------  //
        void
        consume(const IMC::ControlLoops* msg)
        {
          if (!(msg->mask & (IMC::CL_YAW | IMC::CL_SPEED)))
            return;

          if (msg->scope_ref < m_scope_ref)
            return;

          m_scope_ref = msg->scope_ref;

          if (msg->enable == isActive())
            return;

          if (msg->enable)
          {
            spew("ENABLEEEEEEEEEEEEEEEEEE");
            requestActivation();
          }
          else
          {
            spew("DISABLEEEEEEEEEEEEEEEEEE");
            requestDeactivation();
          }

          debug(isActive() ? DTR("enabling") : DTR("disabling"));

          if (!isActive())
          {
            reset("y");
            reset("s");
          }
        }

        // ----------------------------------------------------------------------  //


        // -------------------------------------------------------------------  //
        // ------------------------ COURSE CONTROL ---------------------------  //
        // -------------------------------------------------------------------  //

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
          if (msg->getSource() != getSystemId())
            return;

          if (!isActive())
          {
            m_desired_yaw = msg->psi;
            m_desired_speed = msg->u;
            return;
          }

          // Do not use the thrust if the Path Controller has not produced a desired heading.
          if(m_desired_yaw_pc == 0.0000)
          {
            spew("PATH CONTROLLER NOT READY");
            return;
          }

          // Compute time delta.
          m_tstep = m_delta.getDelta();
          // Check if we have a valid time delta.
          if (m_tstep < 0.0)
            return;
          
          // ----------------------- SPEED CONTROL ------------------------ //

          if (!m_speed_ctrl)
          {
            // Controller not active - Use current speed as desired
            // m_desired_speed = msg->u;

            // Controller not active - Set Thruster to zero.
            dispatchThrust(0.0, m_tstep);
          } else
          {
            float thrust_com = 0;
            float rpm = m_rpm.value;

            // Speed Controller - (PID Controller).
            switch (m_speed_units)
            {
            case IMC::SUNITS_PERCENTAGE:
              thrust_com = (m_desired_speed / 100.0);
              break;
            case IMC::SUNITS_METERS_PS:
              thrust_com = rpmToThrust(rpm, mpsToRpm(msg->u, m_tstep), m_tstep);
              break;
            case IMC::SUNITS_RPM:
              thrust_com = rpmToThrust(rpm, m_desired_speed, m_tstep);
              m_previous_rpm = m_desired_speed;
            default:
              break;
            }

            m_act_s.value = thrust_com;

            dispatchThrust(m_act_s.value, m_tstep);
          }

          // ----------------------- COURSE CONTROL ------------------------ //

          if (!m_yaw_ctrl)
          {
            // Controller not active. Use current yaw
            //m_desired_yaw = msg->psi;
            
            dispatchRudder(0.0, m_tstep);
          } else
          {
            // Filtering the desired course in order to smoothen out step changes.
            if(m_chopping && m_des_head_arrived)
            {
              double course_diff = std::fabs(m_desired_yaw_pc - m_desired_yaw_prev);
              spew("COURSE DIFF: %f", Angles::degrees(course_diff));
              if(course_diff > Angles::radians(m_args.course_thr) && m_desired_yaw_pc > m_desired_yaw_prev)
              {
                spew("Positive Chopping!");
                double increase = (double) m_args.chop/100;
                m_desired_yaw = m_desired_yaw_prev + course_diff*(increase);
                spew("INCREASE %f", increase);
                spew("COURSE INSTEAD: %f", Angles::degrees(m_desired_yaw));
              } else if(course_diff > Angles::radians(m_args.course_thr) && m_desired_yaw_pc < m_desired_yaw_prev)
              {
                spew("Negative Chopping!");
                double decrease = (double) m_args.chop/100;
                m_desired_yaw = m_desired_yaw_prev - course_diff*(decrease);
                spew("DECREASE %f", decrease);
                spew("COURSE INSTEAD: %f", Angles::degrees(m_desired_yaw));
              } else
                m_desired_yaw = m_desired_yaw_pc;
              m_des_head_arrived = false;
            } else
              m_desired_yaw = m_desired_yaw_pc;

            // Course Error (From IMC::DesiredHeading)
            float err_yaw = Angles::normalizeRadian(m_desired_yaw - msg->psi);

            spew("ERROR c: %f", Angles::degrees(err_yaw));

            // Derivative Error.
            float err_yaw_der = m_args.desired_yaw_der - m_angvel.z; //m_angvel.z may need to be filtered?

            // Yaw Controller (PID controller) 
            float rudder_cmd = m_yaw_pid.step(m_tstep, err_yaw, err_yaw_der);
            m_act_y.value = rudder_cmd;

            //spew("AutoNaut - Rudder_cmd/m_act: %0.3f  Desired heading: %0.3f", m_act.value, c_degrees_per_radian*m_desired_yaw);			
            dispatchRudder(m_act_y.value, m_tstep);

            /*//! Desired Rudder Angle
            int16_t print_rudder;

            print_rudder = roundToInteger(m_act.value*45*10);
            print_rudder = trimValue(print_rudder, -45, 45);

            //spew("ServoPosition value: %d", print_rudder);*/

            //m_des_course.value = m_desired_yaw_filt;
            //dispatch(m_des_course); // Dispatch course to see difference from Path Controller when filtered.

            m_desired_yaw_prev = m_desired_yaw;

            m_des_course_rate.value = m_args.desired_yaw_der;
          }          
        }

        //! Dispatch to bus ServoPosition message
        //! @param[in] value set rudder actuation value
        //! @param[in] timestep amount of time since last control step
        void
        dispatchRudder(float value, double timestep)
        {
			    //Activated if act_ramp (Config file) is set > 0
          if ((value > m_last_act_y.value) && (m_args.act_ramp_y > 0.0))
          {
            value = m_last_act_y.value + trimValue((value - m_last_act_y.value) / timestep,
                                                     0.0, m_args.act_ramp_y * timestep);
          }

          m_act_y.value = trimValue(value, -m_args.act_max, m_args.act_max);
          
          if (m_wave_freq == 0.0)
              dispatch(m_act_y);
          else
            {
              if(m_args.ext_filtering == true && m_args.lp_filtering == false && m_args.n_filtering == false && m_args.bs_filtering == false)
              {
                // Apply external filter coefficients.
                m_act_y.value = ext.step(m_act_y.value);
                dispatch(m_act_y);
                trace("Applying a %s filter with %0.3f cut-off frequency.", m_ext_filter_type.c_str(), m_args.ext_filter_freq);
              }
              else if(m_args.lp_filtering == true && m_args.n_filtering == false && m_args.bs_filtering == false)
              {
                // Apply LPF coefficients.
                m_act_y.value = lpf.step(m_act_y.value);
                dispatch(m_act_y);
                trace("LPF Filtering.");
              }
              else if(m_args.lp_filtering == false && m_args.n_filtering == true && m_args.bs_filtering == false)
              {
                // Apply NF coefficients.
                m_act_y.value = nf.step(m_act_y.value);
                dispatch(m_act_y);
                trace("NF Filtering.");
              }
              else if(m_args.lp_filtering == true && m_args.n_filtering == true && m_args.bs_filtering == false)
              {                
                // Apply NF+LPF coefficients.
                m_act_y.value = nf.step(m_act_y.value);
                m_act_y.value = lpf.step(m_act_y.value);
                dispatch(m_act_y);
                trace("NF + LP Filtering.");
              }
              else if(m_args.lp_filtering == true && m_args.n_filtering == false && m_args.bs_filtering == true)
              {
                // Apply BS+LPF coefficients.
                m_act_y.value = bs.step(m_act_y.value);
                m_act_y.value = lpf.step(m_act_y.value);
                dispatch(m_act_y);
                trace("BS + LP Filtering.");
              }
              else
              {
                dispatch(m_act_y);
                trace("NO WAVE FILTERING");
              }
                
            }
          
          m_last_act_y.value = m_act_y.value;
          //spew("AutoNaut - Rudder dispatched: %0.3f  ", m_act.value);
        }

        // -------------------------------------------------------------------  //
        // ------------------------ SPEED CONTROL ----------------------------  //
        // -------------------------------------------------------------------  //

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
          if ((value > m_last_act_s.value) && (m_args.act_ramp_s > 0.0))
          {
            value = m_last_act_s.value + trimValue((value - m_last_act_s.value) / timestep,
                                                 0.0, m_args.act_ramp_s * timestep);
          }

          m_act_s.value = trimValue(value, -m_args.max_thrust, m_args.max_thrust);

          dispatch(m_act_s);

          ////////////////////////////////////////////////////// Print useful.
          spew("SetThrusterActuation value: %f", m_act_s.value);

          int16_t print_thruster;

          // Ensure thruster acutation range [-max, max]
          print_thruster = roundToInteger(m_act_s.value * 100);
          print_thruster = trimValue(print_thruster, -100, 100);

          spew("SetThrusterActuation sent: %d", print_thruster);

          /////////////////////////////////////////////////////////

          m_last_act_s.value = m_act_s.value;
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

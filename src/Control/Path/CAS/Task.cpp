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
// Author: Alberto Dallolio                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>
#include <vector>
#include <sstream>
#include <cstring>
#include <string>
#include <Eigen/Dense>


// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Navigation/sb_mpc.hpp>

namespace Control
{
  namespace Path
  {
    namespace CAS
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        // Range parameter for obstacle surveillance
        double out_of_range;

        // Simulation Parameters
        double T, DT, T_STAT, P, P_G, Q, D_CLOSE, D_SAFE, D_SAFE_LAND, K_COLL, 
        KAPPA, KAPPA_TC, PHI_AH, PHI_OT, PHI_HO, PHI_CR, K_P, K_DP,
        K_CHI, K_DCHI_SB, K_DCHI_P, K_CHI_SB, K_CHI_P, D_INIT;

        int GUIDANCE_STRATEGY;
        double WP_R, LOS_LA_DIST, LOS_KI;

        // Rudder angle plus/minus range.
        double COURSE_RANGE;
        // Granularity of angle change.
        double GRANULARITY;
        // Amount of time after which a disappeared obstacle is removed from the list.
        double kill_obst;

        //! Enable collision avoidance.
        bool en_cas;
        //! Enable anti-grounding.
        bool en_antiground;
        //! Enable chla guidance.
        bool en_chla_guidance;

        //! Path to DB file.
        std::string db_path;
        //! Path to debug folder.
        std::string debug_path;
        //! Map resolution.
        double map_res;
        //! DRVAL2
        double drval2;
        //! DRVAL2
        double cont_size;
        //! Course offset for contours.
        std::vector<double> directions;
        //! Safety distance to static obstacle.
        double K_GROUND;
        //! Weights on environmental factors.
        std::vector<double> K_ENV;
        //! Frequency of the anti-grounding algorithm.
        double anti_grounding_freq;
        //! Frequency of the chla data collection.
        double chla_collection_period;
        //! Use chla course.
        bool m_use_chla_gradient;

      };

      struct Sample
      {
        double lat;
        double lon;
        float chl_value;
      };

      struct Task: public DUNE::Control::PathController
      {
        //! sb_mpc object.
        simulationBasedMpc sb_mpc;
        //! List of asv states
        Eigen::Matrix<double, 6, 1, Eigen::DontAlign> m_asv_state;
        //! Vector of (Chla) Sample.
        std::vector<Sample> m_samples;

        //! Desired heading message.
        IMC::DesiredHeading m_des_heading;
        //! Vector of obstacles
        std::vector<IMC::AisInfo> m_obst_vec;
        // Create matrix with past, current and next waypoint.
        Eigen::Matrix<double,3,2> m_waypoints;
        //! Antigrounding timer.
        Time::Counter<float> m_timer_antig;
        //! Chla timer.
        Time::Counter<float> m_timer_chla;
        //! Chla collection period.
        double m_chla_period;
        //! Course offsets for contours.
        std::vector<double> m_offsets;
        
        //! Speed offset <Output from CAS>
        double u_os;
        //! Heading offset <Output from CAS>
        double psi_os;
        //! AutoNaut latitude
        double m_lat_asv;
        //! AutoNaut longitude
        double m_lon_asv;
        //! Obstacle latitude
        double m_lat_obst;
        //! Obstacle longitude
        double m_lon_obst;
        //! Timestamp - new (from Autonaut)
        double m_timestamp_new;
        //! Timestamp - old (from Autonaut)
        double m_timestamp_prev;
        //! Timestamp from obstacle
        double m_timestamp_obst;
        //! Timestamp for last update from obstacle.
        std::vector<double> m_last_update;
        //! Enable collision avoidance.
        bool m_enable_cas;
        //! Enable anti-grounding.
        bool m_enable_antiground;
        //! True if ground is close.
        bool m_static_obst;
        //! True if vessels are close.
        bool m_dynamic_obst;
        //! Contours to cas.
        Math::Matrix m_contours;
        //! Safety distance to land.
        double m_safe_dist_to_land;
        //! Frequency of the anti-grounding algorithm
        double m_anti_grounding_freq;
        //! Absolute wind direction and speed.
        double m_wind_dir, m_wind_speed;
        //! Surface current depth, speed and direction.
        double m_current_depth, m_current_vel, m_current_dir;
        //! USV heave amplitude.
        double m_heave;
        //! Estimated wave encounter frequency.
        double m_wave_freq;
        //! Cost <Output from CAS>
        double cost;
        //! Enable chla guidance.
        bool m_enable_chla;
        //! Counting chla measurements.
        bool m_chla_count, m_chla_full;
        //! Average factor.
        int m_avg;
        //! Last Chla value.
        double m_avg_last;
        //! Transmission request id
        int m_reqid;
        //! Last engaged vessel.
        std::string mmsi_last_engaged;

        //! Cost function for grounding
        Math::Matrix m_env_factors;
        Eigen::Matrix<double,-1,3> m_static_obst_state;
        Eigen::Matrix<double,-1,10> m_dynamic_obst_state;

        //! Task arguments.
        Arguments m_args;

        // Database handle.
        //SituationalAwareness::NauticalCharts* m_nc;
        SituationalAwareness::DepareData* m_dp;

        Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Control::PathController(name, ctx),
        u_os(0.0),
        psi_os(0.0),
        m_lat_asv(0.0),
        m_lon_asv(0.0),
        m_lat_obst(0.0),
        m_lon_obst(0.0),
        m_timestamp_new(0.0),
        m_timestamp_prev(0.0),
        m_timestamp_obst(0.0),
        m_static_obst(false),
        m_dynamic_obst(false),
        m_wind_dir(0.0),
        m_wind_speed(0.0),
        m_current_depth(0.0),
        m_current_vel(0.0),
        m_current_dir(0.0),
        m_heave(0.0),
        m_wave_freq(0.0),
        cost(0.0),
        m_enable_chla(false),
        m_chla_count(false),
        m_chla_full(false),
        m_avg(0),
        m_avg_last(0.0),
        m_reqid(0)
        {
          param("Enable Collision Avoidance", m_args.en_cas)
          .defaultValue("true")
          .description("Enable collision avoidance algorithm");

          param("Enable Anti Grounding", m_args.en_antiground)
          .defaultValue("true")
          .description("Enable anti-grounding algorithm");

          param("Compute Chla Gradient", m_args.en_chla_guidance)
          .defaultValue("false")
          .description("Enable chla gradient following algorithm");

          param("Enable Chla Guidance", m_args.m_use_chla_gradient)
          .defaultValue("false")
          .description("Enable chla gradient following algorithm");
          
          param("Maximum Obstacle Surveillance Range", m_args.out_of_range)
          .units(Units::Meter)
          .minimumValue("0.0")
          .maximumValue("100000.0")
          .defaultValue("5000.0")
          .description("Limit for absolute value of obstacle surveillance range");

          param("Remove Disappeared Obstacles", m_args.kill_obst)
          .units(Units::Second)
          .minimumValue("1.0")
          .maximumValue("600.0")
          .defaultValue("60.0")
          .description("Amount of time after which a disappeared obstacle is removed from the list. [sec].");

          param("Prediction Horizon - Simulation Time", m_args.T)
          .units(Units::Second)
          .minimumValue("0.0")
          .maximumValue("6000.0")
          .defaultValue("600.0")
          .description("Simulation time - Prediction Horizon [sec].");

          param("Horizon Time Step", m_args.DT)
          .units(Units::Second)
          .minimumValue("0")
          .maximumValue("20")
          .defaultValue("1")
          .description("Simulation Time Step [sec].");

          param("Prediction Horizon Geog Constraints", m_args.T_STAT)
          .units(Units::Second)
          .minimumValue("0.0")
          .maximumValue("6000.0")
          .defaultValue("600.0")
          .description("Simulation time (prediction horizon) for static obstacles [sec].");

          param("Weight on Time to Evaluation Instant", m_args.P)
          .minimumValue("0.5")
          .maximumValue("10.0")
          .defaultValue("0.5")
          .description("Weight on Time to Evaluation Instant.");

          param("Weight on Time to Evaluation Instant for Grounding", m_args.P_G)
          .minimumValue("0.0")
          .maximumValue("10.0")
          .defaultValue("0.05")
          .description("Weight on Time to Evaluation Instant for Grounding.");

          param("Weight on Distance at Evaluation Instant", m_args.Q)
          .minimumValue("1.0")
          .maximumValue("10.0")
          .defaultValue("3.0")
          .description("Weight on Distance at Evaluation Instant.");

          param("COLREGS Distance", m_args.D_CLOSE)
          .units(Units::Meter)
          .minimumValue("300.0")
          .maximumValue("2000.0")
          .defaultValue("400.0")
          .description("Distance where COLREGS are applied [m].");

          param("SB_MPC Surveillance Range", m_args.D_INIT)
          .units(Units::Meter)
          .minimumValue("300.0")
          .maximumValue("2000.0")
          .defaultValue("400.0")
          .description("Maximum SB_MPC Surveillance Range.");

          param("Minimum Safe Distance To Vessels", m_args.D_SAFE)
          .units(Units::Meter)
          .minimumValue("50.0")
          .description("Minimum distance to moving obstacle which is considered as safe [m].");

          param("Minimum Safe Distance To Land", m_args.D_SAFE_LAND)
          .units(Units::Meter)
          .minimumValue("10.0")
          .description("Minimum distance to static obstacle which is considered as safe [m].");

          param("Cost of Collisions", m_args.K_COLL)
          .minimumValue("0.0")
          .maximumValue("1.0")
          .defaultValue("0.5")
          .description("Cost of Collision.");

          param("Cost of Grounding", m_args.K_GROUND)
          .minimumValue("0.0")
          .defaultValue("100.0")
          .description("Cost of Grounding.");

          param("Weights on Environmental Factors", m_args.K_ENV)
          .minimumValue("0.0, 0.0, 0.0, 0.0, 0.0")
          .defaultValue("10.0, 10.0, 10.0, 10.0, 10.0")
          .description("Weights on Environmental Factors.");

          param("Cost of not complying COLREGS", m_args.KAPPA)
          .minimumValue("0.0")
          .maximumValue("10.0")
          .defaultValue("3.0")
          .description("Cost of not Complying with the COLREGS.");

          param("Cost of changing COLREGS", m_args.KAPPA_TC)
          .minimumValue("0.0")
          .maximumValue("100.0")
          .defaultValue("3.0")
          .description("Cost of changing a COLREGS behavior.");
          
          param("PHI AH", m_args.PHI_AH)
          .units(Units::Degree)
          .minimumValue("0.0")
          .maximumValue("180.0")
          .defaultValue("30.0")
          .description("Angle within which an obstacle is said to be ahead [deg].");

          param("PHI OT", m_args.PHI_OT)
          .units(Units::Degree)
          .minimumValue("0.0")
          .maximumValue("180.0")
          .defaultValue("30.0")
          .description("Angle outside of which an obstacle will be said to be overtaking, if the speed of the obstacle is larger than the ship's own speed [deg].");

          param("PHI HO", m_args.PHI_HO)
          .units(Units::Degree)
          .minimumValue("0.0")
          .maximumValue("180.0")
          .defaultValue("30.0")
          .description("Angle within which an obstacle is said to be head on [deg].");
          
          param("PHI CR", m_args.PHI_CR)
          .minimumValue("0.0")
          .maximumValue("180.0")
          .defaultValue("30.0")
          .description("Angle outside of which an obstacle is said to be crossing, if it is on the starboard side, heading towards the ship and not overtaking the ship [deg].");
          
          param("Cost of Deviating from Nominal Speed", m_args.K_P)
          .minimumValue("0.0")
          .maximumValue("11.0")
          .defaultValue("2.5")
          .description("Cost of deviating from the nominal speed.");

          param("Cost of Changing Speed Offset", m_args.K_DP)
          .minimumValue("0.0")
          .maximumValue("10.0")
          .defaultValue("2.0")
          .description("Cost of Changing the Speed Offset");

          param("Cost of Deviating from Nominal Course", m_args.K_CHI)
          .minimumValue("0.0")
          .maximumValue("10.0")
          .defaultValue("2.5")
          .description("Cost of deviating from the nominal Course.");

          param("Cost of Course change to SB", m_args.K_DCHI_SB)
          .minimumValue("0.0")
          .maximumValue("10.0")
          .defaultValue("0.1")
          .description("Cost of Changing the Course Offset to Starboard.");

          param("Cost of Course change to Port", m_args.K_DCHI_P)
          .minimumValue("0.0")
          .maximumValue("11.0")
          .defaultValue("0.5")
          .description("Cost of Changing the Course Offset to Port.");

          param("Cost of Selecting Turn to SB", m_args.K_CHI_SB)
          .units(Units::Meter)
          .minimumValue("0.0")
          .maximumValue("20.0")
          .defaultValue("0.9")
          .description("Cost of Selecting Turn to SB.");

          param("Cost of Selecting Turn to Port", m_args.K_CHI_P)
          .minimumValue("0.0")
          .maximumValue("11.0")
          .defaultValue("10.0")
          .description("Cost of Selecting Turn to Port.");

          param("Guidance Strategy", m_args.GUIDANCE_STRATEGY)
          .minimumValue("0")
          .maximumValue("3")
          .defaultValue("0")
          .description("0=Line-of-sight (LOS), 1= WP-pursiut (WPP), >1= Course-Hold (CH) or Heading-Hold (HH).");

          param("WP Acceptance Radius", m_args.WP_R)
          .minimumValue("5.0")
          .maximumValue("100.0")
          .defaultValue("20.0")
          .description("WP Acceptance Radius.");

          param("LOS lookahead distance", m_args.LOS_LA_DIST)
          .minimumValue("50.0")
          .maximumValue("1000.0")
          .defaultValue("200.0")
          .description("LOS lookahead distance.");

          param("LOS integral gain", m_args.LOS_KI)
          .minimumValue("0.0")
          .maximumValue("2.0")
          .defaultValue("0.0")
          .description("LOS integral gain.");

          param("Course Offset Range", m_args.COURSE_RANGE)
          .units(Units::Degree)
          .minimumValue("0.0")
          .maximumValue("180.0")
          .defaultValue("90.0")
          .description("Course angle range in degrees");

          param("Positive Granularity", m_args.GRANULARITY)
          .units(Units::Degree)
          .minimumValue("10.0")
          .maximumValue("45.0")
          .defaultValue("15.0")
          .description("Portions of positive angle range in degrees");

          param("Digital Map Path", m_args.db_path)
          .defaultValue("")
          .description("Path to digital map DB file");

          param("Debug Path", m_args.debug_path)
          .defaultValue("")
          .description("Path to where debuging files are saved");

          param("Digital Map Resolution", m_args.map_res)
          .units(Units::Meter)
          .defaultValue("50")
          .description("Digital Map resolution in meters");

          param("Minimum Safe Depth", m_args.drval2)
          .units(Units::Meter)
          .defaultValue("10.0")
          .description("Maximum (deepest) value of a depth range- DRVAL2 in ENCs.");

          param("Contours Distance", m_args.cont_size)
          .units(Units::Meter)
          .defaultValue("5000.0")
          .maximumValue("10000.0")
          .minimumValue("10.0")
          .description("Maximum size of contour square around vessel");

          param("Course Offsets for Contours", m_args.directions)
          .units(Units::Degree)
          .description("Course offsets for contours surroundings");

          param("Anti Grounding Check Frequency", m_args.anti_grounding_freq)
          .units(Units::Second)
          .description("Anti Grounding Frequency in seconds");

          param("Chla collection Period", m_args.chla_collection_period)
          .units(Units::Second)
          .description("Chla collection period");

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          // Register handler routines.
          bind<IMC::AisInfo>(this);
          bind<IMC::GpsFix>(this);
          bind<IMC::AbsoluteWind>(this);
          bind<IMC::Heave>(this);
          bind<IMC::Chlorophyll>(this);
          bind<IMC::DevDataText>(this);
        }

          void
          onUpdateParameters(void)
          {
            // T and DT cannot be changed online. If changed, re-create the object.
            if(paramChanged(m_args.T) || paramChanged(m_args.DT))
                sb_mpc.create(m_args.T, m_args.DT, m_args.T_STAT, m_args.P, m_args.P_G, m_args.Q, m_args.D_CLOSE,
                          m_args.D_SAFE, m_args.D_SAFE_LAND, m_args.K_COLL, m_args.PHI_AH, m_args.PHI_OT, m_args.PHI_HO, m_args.PHI_CR,
                          m_args.KAPPA, m_args.KAPPA_TC, m_args.K_P, m_args.K_CHI, m_args.K_DP, m_args.K_DCHI_SB,
                          m_args.K_DCHI_P, m_args.K_CHI_SB, m_args.K_CHI_P, m_args.D_INIT, m_args.COURSE_RANGE, m_args.GRANULARITY,
                          m_args.WP_R, m_args.LOS_LA_DIST, m_args.LOS_KI, m_args.GUIDANCE_STRATEGY);
            if(paramChanged(m_args.T_STAT))
                sb_mpc.setT_stat(m_args.T_STAT);
            if(paramChanged(m_args.P))
                sb_mpc.setP(m_args.P);
            if(paramChanged(m_args.Q))
                sb_mpc.setQ(m_args.Q);
            if(paramChanged(m_args.D_CLOSE))
                sb_mpc.setDClose(m_args.D_CLOSE);
            if(paramChanged(m_args.D_SAFE))
                sb_mpc.setDSafe(m_args.D_SAFE);
            if(paramChanged(m_args.D_SAFE_LAND))
                sb_mpc.setDSafe(m_args.D_SAFE_LAND);
            if(paramChanged(m_args.K_COLL))
                sb_mpc.setKColl(m_args.K_COLL);
            if(paramChanged(m_args.KAPPA))
                sb_mpc.setKappa(m_args.KAPPA);
            if(paramChanged(m_args.KAPPA_TC))
                sb_mpc.setKappaTC(m_args.KAPPA_TC);
            if(paramChanged(m_args.PHI_AH))
                sb_mpc.setPhiAH(m_args.PHI_AH);
            if(paramChanged(m_args.PHI_OT))
                sb_mpc.setPhiOT(m_args.PHI_OT);
            if(paramChanged(m_args.PHI_HO))
                sb_mpc.setPhiHO(m_args.PHI_HO);
            if(paramChanged(m_args.PHI_CR))
                sb_mpc.setPhiCR(m_args.PHI_CR);
            if(paramChanged(m_args.K_P))
                sb_mpc.setKP(m_args.K_P);
            if(paramChanged(m_args.K_DP))
                sb_mpc.setKdP(m_args.K_DP);
            if(paramChanged(m_args.K_CHI))
                sb_mpc.setKChi(m_args.K_CHI);
            if(paramChanged(m_args.K_DCHI_SB))
                sb_mpc.setKdChiSB(m_args.K_DCHI_SB);
            if(paramChanged(m_args.K_DCHI_P))
                sb_mpc.setKdChiP(m_args.K_DCHI_P);
            if(paramChanged(m_args.K_CHI_SB))
                sb_mpc.setKChiSB(m_args.K_CHI_SB);
            if(paramChanged(m_args.K_CHI_P))
                sb_mpc.setKChiP(m_args.K_CHI_P);
            if(paramChanged(m_args.D_INIT))
                sb_mpc.setDInit(m_args.D_INIT);
            if(paramChanged(m_args.GUIDANCE_STRATEGY))
                sb_mpc.setGuidanceStrategy(m_args.GUIDANCE_STRATEGY);
            if(paramChanged(m_args.WP_R))
                sb_mpc.setWpR(m_args.WP_R);
            if(paramChanged(m_args.LOS_LA_DIST))
                sb_mpc.setLosLaDist(m_args.LOS_LA_DIST);
            if(paramChanged(m_args.LOS_KI))
                sb_mpc.setLosKi(m_args.LOS_KI);
            if(paramChanged(m_args.COURSE_RANGE))
                sb_mpc.setAngRange(m_args.COURSE_RANGE);
            if(paramChanged(m_args.GRANULARITY))
                sb_mpc.setGran(m_args.GRANULARITY);

            if(paramChanged(m_args.en_cas))
                m_enable_cas = m_args.en_cas;

            if(paramChanged(m_args.en_antiground))
                m_enable_antiground = m_args.en_antiground;

            if(paramChanged(m_args.en_chla_guidance))
                m_enable_chla = m_args.en_chla_guidance;

            if(paramChanged(m_args.directions))
              m_offsets = m_args.directions;

            if(paramChanged(m_args.D_SAFE_LAND))
              m_safe_dist_to_land = m_args.D_SAFE_LAND;

            if(paramChanged(m_args.anti_grounding_freq))
              m_anti_grounding_freq = m_args.anti_grounding_freq;

            if(paramChanged(m_args.chla_collection_period))
            {
              m_chla_period = m_args.chla_collection_period;
              m_timer_chla.setTop(m_chla_period);
            }
          }

          void
          onResourceInitialization(void)
          {
            sb_mpc.create(m_args.T, m_args.DT, m_args.T_STAT, m_args.P, m_args.P_G, m_args.Q, m_args.D_CLOSE,
                          m_args.D_SAFE, m_args.D_SAFE_LAND, m_args.K_COLL, m_args.PHI_AH, m_args.PHI_OT, m_args.PHI_HO, m_args.PHI_CR,
                          m_args.KAPPA, m_args.KAPPA_TC, m_args.K_P, m_args.K_CHI, m_args.K_DP, m_args.K_DCHI_SB,
                          m_args.K_DCHI_P, m_args.K_CHI_SB, m_args.K_CHI_P, m_args.D_INIT, m_args.COURSE_RANGE, m_args.GRANULARITY,
                          m_args.WP_R, m_args.LOS_LA_DIST, m_args.LOS_KI, m_args.GUIDANCE_STRATEGY);

            for (int i = 0; i < 6; i++)
            {
              m_asv_state(i) = 0.0;
            }

            // Enable antigrounding if wanted.
            if(m_enable_antiground)
              m_timer_antig.setTop(m_anti_grounding_freq);
          }

          //! Acquire resources.
          void
          onResourceAcquisition(void)
          {
            try {
              m_dp = new SituationalAwareness::DepareData(m_args.db_path, m_args.map_res);
              //m_nc = new SituationalAwareness::NauticalCharts(m_args.db_path, m_args.map_res);
            } catch(std::runtime_error& e) {
              inf(DTR("Problem opening charts: %s"), e.what());
            }

            m_offsets = m_args.directions;
            m_contours.resizeAndFill(m_offsets.size(),2,0.0);
            m_static_obst_state.resize(m_offsets.size(), 3);
          }

          //! Release resources.
        void
        onResourceRelease(void)
        {
          try {
            Memory::clear(m_dp);
            //Memory::clear(m_nc);
          }
          catch(std::runtime_error& e) {
            err(DTR("Could not clear Nautical charts class: %s"), e.what());
          }
        }

        void
        onEntityReservation(void)
        {
          //! Called to ensure unique identifiers by reserving entity identifiers.
          PathController::onEntityReservation();
        }

        void
        onPathActivation(void)
        {
          // Activate Heading & Speed controller.
          enableControlLoops(IMC::CL_YAW);
          enableControlLoops(IMC::CL_SPEED);
        }

        void
        consume(const IMC::DevDataText * msg)
        {
          if(std::strcmp(resolveEntity(msg->getSourceEntity()).c_str(),"Text Actions")==0 && msg->getDestinationEntity()==resolveEntity("Path Control"))
          {
            debug("Command arrived from Iridium.");
            std::string cmd = msg->value;

            // Parse command.
            char what[32];
            std::sscanf(cmd.c_str(), "%s", what);
            
            if(!strcmp(what, "on"))
              m_enable_cas = true;
            if(!strcmp(what, "off"))
              m_enable_cas = false;
          }
        }

        void
        consume(const IMC::Chlorophyll * msg)
        {
          if(msg->getSource() != getSystemId())
          {
            //debug("Chlorophyll from L3: %.3f",msg->value);
            
            // Incremental average for the chosen period.
            if(m_avg==0)
              m_samples.push_back({m_lat_asv, m_lon_asv, msg->value});
            else
            {
              m_samples.push_back({m_lat_asv, m_lon_asv, ((m_avg_last * m_avg + msg->value) / (m_avg + 1))});
              if(m_samples.size()==600)
              {
                m_samples.erase(m_samples.begin());
                m_chla_full = true;
                //debug("Chla vector is full, estimation can begin!");
              }
            }

            m_avg++;
            m_avg_last = msg->value;
            
            if(!m_chla_count && m_chla_full)
            {
              m_timer_chla.setTop(m_chla_period);
              m_chla_count = true;
            }
          }
        }

        void
        consume(const IMC::AisInfo* msg)
        {
          trace("CAS: Receiving AisInfo");

          if(m_enable_cas)
          {
            // Check if AutoNaut is Simulator is booting before you compute displacement.
            if(m_lat_asv == 0.0 && m_lon_asv == 0.0)
              return;

            m_timestamp_obst = msg->getTimeStamp();

            //trace("CAS - MSG TYPE: %s", msg->msg_type.c_str());

            if(msg->msg_type.compare("1") == 0 || msg->msg_type.compare("2") == 0 || msg->msg_type.compare("3") == 0)
            {
              // Real WGS-84 Coordinates [rad]. Static coordinates need to compensate for displacement in x/y-direction (WGS84::displace)
              m_lat_obst = msg->lat;
              m_lon_obst = msg->lon;

              // Distance between ASV - Obstacle
              double distance = WGS84::distance(m_lat_asv, m_lon_asv, 0, m_lat_obst, m_lon_obst, 0);

              //spew("Distance from obstacle %s is %0.1f",msg->mmsi.c_str(), distance);
              trace("Received Obstacle from AIS with MMSI: %s, latitude %f and longitude %f, distance: %0.1f", msg->mmsi.c_str(), Angles::degrees(m_lat_obst), Angles::degrees(m_lon_obst), distance);

              bool obs_exists = false;
              // Obstacle vector: UPDATE/REMOVE.
              for (unsigned int i = 0; i < m_obst_vec.size(); i++)
              {
                //spew("Update Obstacle vector: Source: %d Vector size: %d", m_obst_vec[i].getSource(), m_obst_vec.size());
                std::string temp_mmsi = m_obst_vec[i].mmsi;
                if(temp_mmsi.compare(msg->mmsi) == 0) //s1.compare(s2)
                {
                  obs_exists = true;

                  if (distance < m_args.out_of_range)
                  { // Obstacle exists & inside range - Update
                    m_obst_vec[i].mmsi = msg->mmsi; // should have already been set!
                    m_obst_vec[i].lon = msg->lon;
                    m_obst_vec[i].lat = msg->lat;
                    m_obst_vec[i].course = msg->course;
                    m_obst_vec[i].nav_status = msg->nav_status;
                    m_obst_vec[i].speed = msg->speed*0.514;
                    m_obst_vec[i].dist = distance;

                    m_last_update[i] = m_timestamp_obst;

                    debug("Obstacle with MMSI %s is CLOSER than %0.1f m and is UPDATED - OBST VECT SIZE %lu - LAT %.3f, LON %.3f, COURSE %.3f deg, NAV_STATUS %d, SOG %.3f m/s, distance %.3f m", m_obst_vec[i].mmsi.c_str(), m_args.out_of_range, m_obst_vec.size(), Angles::degrees(m_obst_vec[i].lat), Angles::degrees(m_obst_vec[i].lon), Angles::degrees(m_obst_vec[i].course), m_obst_vec[i].nav_status, m_obst_vec[i].speed, distance);
                  }
                  else
                  {
                    // Obstacle Outside range - Remove Obstacle
                    debug("Obstacle with MMSI %s REMOVED - Outside range, obstacle vector size is now: %lu",
                        m_obst_vec[i].mmsi.c_str(), m_obst_vec.size()-1);
                    m_obst_vec.erase(m_obst_vec.begin() + i);
                    m_last_update.erase(m_last_update.begin() + i);
                  }
                }
                if(m_timestamp_obst - m_last_update[i] > m_args.kill_obst)
                {
                  obs_exists = true; // but now is going to be killed!
                  // Obstacle disappeared - Remove Obstacle
                  debug("Obstacle with MMSI %s is DISAPPEARED and REMOVED - obstacle vector size is now: %lu",
                      m_obst_vec[i].mmsi.c_str(), m_obst_vec.size()-1);
                  m_obst_vec.erase(m_obst_vec.begin() + i);
                  m_last_update.erase(m_last_update.begin() + i);
                }
              }

              // // Obstacle vector: ADD new obstacle.
              if (obs_exists == false && (distance < m_args.out_of_range))
              {
                // Create timestamp for this new vehicle.
                m_last_update.push_back(m_timestamp_obst);

                IMC::AisInfo obst_temp;
                // Temp obstacle for storage.
                obst_temp.mmsi = msg->mmsi;
                obst_temp.lon = msg->lon;
                obst_temp.lat = msg->lat;
                obst_temp.course = msg->course;
                obst_temp.nav_status = msg->nav_status;
                obst_temp.speed = msg->speed*0.514;
                obst_temp.dist = msg->dist;

                m_obst_vec.push_back(obst_temp);
                trace("New Obstacle Added from msg_type 1/2/3: MMSI %s, obstacle vector size: %lu",
                    obst_temp.mmsi.c_str(), m_obst_vec.size());
              }
              //obs_exists = false;
            } else if(msg->msg_type.compare("5") == 0)
            {
              //spew("CAS - MESSAGE TYPE 5");

              // Add Static/Voyage information only to vehicles already in the list.
              for (unsigned int i = 0; i < m_obst_vec.size(); i++)
              {
                std::string temp_mmsi = m_obst_vec[i].mmsi;
                if(temp_mmsi.compare(msg->mmsi) == 0)
                {
                  // MMSI exists in the list, add static/voyage related data.
                  m_obst_vec[i].mmsi = msg->mmsi;
                  m_obst_vec[i].callsign = msg->callsign;
                  m_obst_vec[i].name = msg->name;
                  m_obst_vec[i].type_and_cargo = msg->type_and_cargo;
                  m_obst_vec[i].a = msg->a;
                  m_obst_vec[i].b = msg->b;
                  m_obst_vec[i].c = msg->c;
                  m_obst_vec[i].d = msg->d;
                  m_obst_vec[i].draught = msg->draught;

                  trace("AIS5: %s %s %s %d %.3f %.3f %.3f %.3f %.3f", m_obst_vec[i].mmsi.c_str(), m_obst_vec[i].callsign.c_str(), m_obst_vec[i].name.c_str(), m_obst_vec[i].type_and_cargo, m_obst_vec[i].a, m_obst_vec[i].b, m_obst_vec[i].c, m_obst_vec[i].d, m_obst_vec[i].draught);

                } /*else
                {
                  // Create new obstacle.
                  // Temp obstacle for storage.
                  IMC::AisInfo obst_temp;
                  obst_temp.mmsi = msg->mmsi;
                  obst_temp.callsign = msg->callsign;
                  obst_temp.name = msg->name;
                  obst_temp.type_and_cargo = msg->type_and_cargo;
                  obst_temp.a = msg->a;
                  obst_temp.b = msg->b;
                  obst_temp.c = msg->c;
                  obst_temp.d = msg->d;
                  obst_temp.draught = msg->draught;

                  m_obst_vec.push_back(obst_temp);
                  trace("New Obstacle Added from msg_type 5: MMSI %s, obstacle vector size: %lu",
                      obst_temp.mmsi.c_str(), m_obst_vec.size());
                }*/
              }
            }
          }

          // Print out all considered vehicles.
          /*if(m_enable_cas)
          {
            for (unsigned int i = 0; i < m_obst_vec.size(); i++)
            {
              debug("Obstacle with MMSI %s, callsign %s, name %s is CLOSER than %0.1f m - LAT %.3f, LON %.3f, COURSE %.3f, NAV_STATUS %d, SOG %.3f, TYPE/CARGO %d, LENGTH: %.3f, WIDTH:%.3f DRAUGHT:%.3f - OBST VECT SIZE %lu", m_obst_vec[i].mmsi.c_str(), m_obst_vec[i].callsign.c_str(), m_obst_vec[i].name.c_str(), m_args.out_of_range, Angles::degrees(m_obst_vec[i].lat), Angles::degrees(m_obst_vec[i].lon), Angles::degrees(m_obst_vec[i].course), m_obst_vec[i].nav_status, m_obst_vec[i].speed, m_obst_vec[i].type_and_cargo, m_obst_vec[i].a+m_obst_vec[i].b, m_obst_vec[i].c+m_obst_vec[i].d, m_obst_vec[i].draught, m_obst_vec.size());
            }
          }*/
        }

        //! From GPS Task
        void
        consume(const IMC::GpsFix* msg)
        {
          m_lat_asv = msg->lat;
          m_lon_asv = msg->lon;
          m_asv_state(0) = 0.0; // ASV assumed to be centered, (0,0)
          m_asv_state(1) = 0.0;
          m_asv_state(2) = msg->cog;
          m_asv_state(3) = msg->sog;
          m_asv_state(4) = 0.0; //! Assume zero sideslip
          m_asv_state(5) = 0.0; //! Assume zero.

          m_timestamp_new = msg->getTimeStamp();
        }

        void
        consume(const IMC::AbsoluteWind* msg)
        {
          if(std::strcmp(resolveEntity(msg->getSourceEntity()).c_str(),"AirMar120WX")==0)
          {
            m_wind_dir = msg->dir;
            m_wind_speed = msg->speed;
          }
        }

        void
        consume(const IMC::Heave* msg)
        {
          if(std::strcmp(resolveEntity(msg->getSourceEntity()).c_str(),"HemisphereGPS")==0)
          {
            m_heave = msg->value;
          }
        }

        void
        consume(const IMC::EstimatedFreq* msg)
        {
          if(std::strcmp(resolveEntity(msg->getSourceEntity()).c_str(),"Estimator")==0)
          {
            m_wave_freq = msg->value;
          }
        }

        void
        consume(const IMC::SingleCurrentCell* msg)
        {
          // Find valid measurement closest to surface.
          std::stringstream stream_depth(msg->depth), stream_vel(msg->vel), stream_dir(msg->dir);
          std::vector<double> depths,vels,dirs;

          while(stream_depth.good())
          {
            std::string substr;
            getline(stream_depth, substr, ';');
            depths.push_back(atof(substr.c_str()));
          }
          while(stream_vel.good())
          {
            std::string substr;
            getline(stream_vel, substr, ';');
            vels.push_back(atof(substr.c_str()));
          }
          while(stream_dir.good())
          {
            std::string substr;
            getline(stream_dir, substr, ';');
            dirs.push_back(atof(substr.c_str()));
          }

          // Extract shallowest depth, velocity and direction.
          m_current_depth = depths[0];
          m_current_vel = vels[0]; // in NED.
          m_current_dir = dirs[0]; // in NED.
        }

        void
        groundingCost()
        {
          // Cost function with environmental factors.
          double bathymetry = 1;
          //double heave = 2;
          //double wave_freq = 2;
          //m_wind_dir = 30;
          //m_wind_speed = 10;
          //double abs_current_dir = 30;
          //double abs_current_speed = 0.3;

          m_env_factors.resizeAndFill(6,m_offsets.size(),0.0); // 5 env factors plus course offset and 13 offsets = 6x13 matrix
          
          double psi_path = atan2(m_waypoints(1,1) - m_waypoints(0,1),
            m_waypoints(1,0) - m_waypoints(0,0));
          for(int i=0; i<m_contours.rows(); i++)
          {
            
            m_env_factors(0,i) = m_offsets[i];
            m_env_factors(1,i) = m_args.K_ENV[0]*pow(bathymetry,2);
            m_env_factors(2,i) = m_args.K_ENV[1]*pow(m_heave,2);
            m_env_factors(3,i) = m_args.K_ENV[2]*m_wave_freq;
            m_env_factors(4,i) = m_args.K_ENV[3]*m_wind_speed*pow(fmax(0, cos(psi_path + Angles::radians(m_offsets[i]) - Angles::radians(m_wind_dir))),2);
            m_env_factors(5,i) = m_args.K_ENV[4]*m_current_vel*pow(fmax(0, cos(psi_path + Angles::radians(m_offsets[i]) - Angles::radians(m_current_dir))),2);
            m_static_obst_state(i,2) = m_args.K_GROUND + m_env_factors(1,i) + m_env_factors(2,i) + m_env_factors(3,i) + m_env_factors(4,i) + m_env_factors(5,i);
          }
          DepareData::DEPAREVector dep_vec = m_dp->getSquare(m_lat_asv, m_lon_asv, m_args.drval2, 5000.0);
          m_dp->writeCSVfile(dep_vec, m_args.debug_path + "useful_depare.csv");
        }

        void
        computeChlaDirection(void)
        {
          Matrix psi(2, 1);

          psi = gradientEstimator(m_samples);

          float chl_value = m_samples.back().chl_value;

          double const norm = psi.norm_2();

          if(norm < 1e-6)
          {
            war("Small gradient signal, using default desired course.");
            return;
          }

          // Larger gradient, desired course is updated.
          psi = psi / norm;
          
          double m_chla_dcog = std::atan2(psi(1), psi(0));

          debug("Chla guidance: last chla %.3f, #samples %d, norm %.3f, angle %.3f", chl_value, m_samples.size(), norm, Angles::degrees(m_chla_dcog));

          //m_samples.clear();

          if(m_args.m_use_chla_gradient)
            m_des_heading.value = m_chla_dcog;

          /*
          // orthogonal to the gradient direction
          Matrix epsi(2, 1);
          epsi(0) = -psi(1);
          epsi(1) = psi(0);

          double const error = m_args.target_value - chl_value;
          Matrix const u_seek = m_params.seeking_gain * error * psi;
          Matrix const u_follow = m_params.following_gain * epsi;
          Matrix const u = u_seek + u_follow;

          spew("seek control: %.4f, %.4f", u_seek(0), u_seek(1));
          spew("follow control: %.4f, %.4f", u_follow(0), u_follow(1));

          spew("Chl error: %.4f [%.4f - %.4f]", error, m_args.target_value, chl_value);

          double const heading = std::atan2(u(1), u(0));
          spew("Heading: %.2f", Angles::degrees(heading));
          m_state.direction = heading;*/
        }

        static Matrix
        gradientEstimator(const std::vector<Sample>& samples)
        {
          Matrix regressor(samples.size() - 1, 2);
          Matrix outputs(samples.size() - 1, 1);
          Matrix inv_mat(2,2);
          Matrix temp_mat(2,2);

          for (unsigned row = 0; row < samples.size() - 1; ++row)
          {
            regressor(row, 0) = samples[row].lat - samples.back().lat;
            regressor(row, 1) = samples[row].lon - samples.back().lon;

            outputs(row) = samples[row].chl_value - samples.back().chl_value;
          }

          Matrix const regressor_t = transpose(regressor);
          temp_mat = regressor_t * regressor;
          long double det = temp_mat(0,0)*temp_mat(1,1) - temp_mat(0,1)*temp_mat(1,0);
          inv_mat(0,0) = temp_mat(1,1);
          inv_mat(0,1) = -temp_mat(0,1);
          inv_mat(1,0) = -temp_mat(1,0);
          inv_mat(1,1) = temp_mat(0,0);

          inv_mat = (long double)(1.0/det) * inv_mat;
          //std::cout << inv_mat << std::endl;

          return inv_mat * regressor_t * outputs;
        }

        void
        sendIridium(std::string mmsi, double dist)
        {
          IMC::TransmissionRequest req;
          req.setDestination(m_ctx.resolver.id());
          req.data_mode = TransmissionRequest::DMODE_TEXT;
          req.txt_data = "COLAV - closest threat: " + mmsi + ", dist: " + std::to_string((int) dist) + ", COG offset: " + std::to_string((int) Angles::degrees(psi_os));
          req.deadline = Clock::getSinceEpoch() + 60;
          req.req_id = ++m_reqid;

          req.comm_mean = TransmissionRequest::CMEAN_SATELLITE;
          req.destination = "";
          inf("Sending via Iridium: '%s'", req.txt_data.c_str());
          dispatch(req);

          mmsi_last_engaged = mmsi;
        }

        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          //! LOS Navigation Law (called wrongly Pure Pursuit in Dune) - desired course is the LOS angle.
          m_des_heading.value = ts.los_angle;

          trace("LOS DESIRED COURSE: %f", Angles::degrees(m_des_heading.value));

          //! Track Chla if some measurements are received.
          if(m_enable_chla && m_timer_chla.overflow() && m_chla_full)
          {
            m_timer_chla.reset();
            m_chla_count = false;

            computeChlaDirection();
          }

          if(m_enable_cas || m_enable_antiground)
          {
            // Create and fill waypoints matrix.
            double wp0_dx = 0.0; // displ between asv and wp0
            double wp0_dy = 0.0;
            double wp1_dx = 0.0; // displ between asv and wp1
            double wp1_dy = 0.0;
            double wp2_dx = 0.0; // displ between asv and wp2
            double wp2_dy = 0.0;

            // Compute displacement between AutoNaut and waypoints.
            WGS84::displacement(m_lat_asv, m_lon_asv, 0, ts.lat_st, ts.lon_st, 0, &wp0_dx, &wp0_dy);
            WGS84::displacement(m_lat_asv, m_lon_asv, 0, ts.waypoints(0,0), ts.waypoints(0,1), 0, &wp1_dx, &wp1_dy);
            
            if(ts.waypoints.rows() > 1) //m_waypoints.rows() > 1
            {
              WGS84::displacement(m_lat_asv, m_lon_asv, 0, ts.waypoints(1,0), ts.waypoints(1,1), 0, &wp2_dx, &wp2_dy);
              m_waypoints << wp0_dx, wp0_dy, // starting waypoint
                            wp1_dx, wp1_dy, // waypoint we are heading to
                            wp2_dx, wp2_dy; // next waypoint
              
              trace("Displacements: wp0 (%0.1f,%0.1f) - wp1 (%0.1f,%0.1f) - wp2 (%0.1f,%0.1f)", wp0_dx, wp0_dy, wp1_dx, wp1_dy, wp2_dx, wp2_dy);
            } else
            { // otherwise send wp1 twice.
              m_waypoints << wp0_dx, wp0_dy, // starting waypoint
                            wp1_dx, wp1_dy, // waypoint we are heading to
                            wp1_dx, wp1_dy; // repeat 2nd wp for sb_mpc

              trace("Displacements: wp0 (%0.1f,%0.1f) - wp1 (%0.1f,%0.1f)", wp0_dx, wp0_dy, wp1_dx, wp1_dy);
            }
            
            //! Retrieve info for anti-grounding actions.
            if(m_enable_antiground && m_timer_antig.overflow())
            {
              // Retrieve contours from database and check distances from vehicle position.
              m_contours = m_dp->getCAS(m_lat_asv, m_lon_asv, m_args.drval2, m_args.cont_size, m_asv_state(2), m_waypoints, m_offsets);

              // For each course offset, the distance from the vessel to land is found, in order to calculate a cost for this offset, depending on the distance to land. 
              m_static_obst = false;
              for(int i=0; i<m_contours.rows(); i++)
              {
                m_static_obst_state(i,0) = Angles::radians(m_offsets[i]);
                m_static_obst_state(i,1) = 0.0;

                // We set it to FALSE here so that no anti-grounding is started if the condition below is not met any more after a scenario.
                if(m_contours(i,3) != 0.0 && m_contours(i,3) < m_args.D_INIT) // Find courses inside the Surveillance range of the sb_mpc
                {
                  m_static_obst = true; // potential static threat, sb_mpc needs to be aware.
                  // Distance between ASV - Static Obstacle
                  m_static_obst_state(i,1) = WGS84::distance(m_lat_asv, m_lon_asv, 0, m_contours(i,0), m_contours(i,1), 0);

                  debug("ANTI-GROUNDING CHECK: static obstacle on course offset %.3f at distance %.3f",Angles::degrees(m_static_obst_state(i,0)),m_static_obst_state(i,1));

                  //m_dp->writeCSVfileCourseOffsets(Angles::degrees(m_contours(i,0)), Angles::degrees(m_contours(i,1)), m_contours(i,2), m_contours(i,3), m_args.debug_path + "useful_depare_m_contours.csv");
                }
              }
              m_timer_antig.reset();
            }

            m_dynamic_obst = false;

            if(m_obst_vec.size() > 0) // there are dynamic obstacles in range.
            {
              m_dynamic_obst = true;

              // Create and fill matrix of dynamic obstacles.
              m_dynamic_obst_state.resize(m_obst_vec.size(), 10);

              //! Update m_asv_states to fit CAS (sb_mpc) inputs
              //m_asv_state(3) = sqrt(std::pow(m_asv_state(3), 2) + std::pow(m_asv_state(4), 2)); // u = Speed in BODY
              for (unsigned int i = 0; i < m_obst_vec.size(); i++)
              {
                IMC::CollisionAvoidance cas;

                // Distance between ASV - Obstacle
                double dist_x = 0.0;
                double dist_y = 0.0;
                WGS84::displacement(m_lat_asv, m_lon_asv, 0, m_obst_vec[i].lat, m_obst_vec[i].lon, 0, &dist_x, &dist_y);

                trace("North offset x-coordinate in NED = %0.1f, East offset y-coordinate in NED = %0.1f", dist_x, dist_y);

                //! Update Obstacle states to fit input of CAS (sb_mpc)
                m_dynamic_obst_state(i, 0) = dist_x; // north
                m_dynamic_obst_state(i, 1) = dist_y; // east
                m_dynamic_obst_state(i, 2) = m_obst_vec[i].course; // course actually.
                m_dynamic_obst_state(i, 3) = m_obst_vec[i].speed; //sqrt(std::pow(m_obst_vec[i].u, 2) + std::pow(m_obst_vec[i].v, 2));
                m_dynamic_obst_state(i, 4) = 0.0;
                if(m_obst_vec[i].a == 0.0)
                  m_dynamic_obst_state(i, 5) = 10.0;
                else 
                  m_dynamic_obst_state(i, 5) = m_obst_vec[i].a;
                if(m_obst_vec[i].b == 0.0)
                  m_dynamic_obst_state(i, 6) = 10.0;
                else 
                  m_dynamic_obst_state(i, 6) = m_obst_vec[i].b;
                if(m_obst_vec[i].c == 0.0)
                  m_dynamic_obst_state(i, 7) = 2.0;
                else 
                  m_dynamic_obst_state(i, 7) = m_obst_vec[i].c;
                if(m_obst_vec[i].d == 0.0)
                  m_dynamic_obst_state(i, 8) = 2.0;
                else 
                  m_dynamic_obst_state(i, 8) = m_obst_vec[i].d;
                
                // Convert MMSI from string to int for CAS.
                std::stringstream geek(m_obst_vec[i].mmsi); //contains int MMSI.
                int mmsi = 0; 
                geek >> mmsi;
                m_dynamic_obst_state(i, 9) = mmsi;

                // Distance between ASV and Obstacle.
                double distance = WGS84::distance(m_lat_asv, m_lon_asv, 0, m_obst_vec[i].lat, m_obst_vec[i].lon, 0);

                //! Fill in CAS message.
                cas.mmsi = m_obst_vec[i].mmsi;
                cas.lat = m_obst_vec[i].lat;
                cas.lon = m_obst_vec[i].lon;
                cas.x = dist_x;
                cas.y = dist_y;
                cas.speed = m_obst_vec[i].speed;
                cas.course = Angles::degrees(m_obst_vec[i].course);
                cas.dist = distance;
                cas.length = m_obst_vec[i].a+m_obst_vec[i].b;
                cas.width = m_obst_vec[i].c+m_obst_vec[i].d;
                cas.o_vect = (int) m_obst_vec.size();
                dispatch(cas);

                //debug("AUTONAUT (lon,lat,cog,sog) %0.3f %0.3f %0.1f %0.1f | %d-th OBSTACLE (dist_x,dist_y,cog,sog) %0.1f %0.1f %0.1f %f", Angles::degrees(m_lat_asv), Angles::degrees(m_lon_asv), Angles::degrees(m_asv_state(2)), m_asv_state(3), i+1, m_dynamic_obst_state(i,0), m_dynamic_obst_state(i,1), c_degrees_per_radian*m_dynamic_obst_state(i,2), m_dynamic_obst_state(i,3));
              }
            }
            
            // m_dynamic_obst = true; ///////////////// REMOOOOOOOOOOVEEEEEEEEEEEEEEEEEEEEEEEE //////////////////////

            // Classify scenario.
            if(!m_dynamic_obst && !m_static_obst)
            { // SAULGOOODMAAAAAN!
              debug("No static nor dynamic obstacles!");
              m_timestamp_prev = m_timestamp_new;
              dispatch(m_des_heading);
            }

            if((m_dynamic_obst || m_static_obst) && (m_timestamp_new - m_timestamp_prev) > 20.0)
            {
              if(m_static_obst)
                groundingCost(); // Compute cost of grounding - TO BE INVOKED ONLY WITH SBMPC.

              if(m_static_obst && !m_dynamic_obst)
              {
                // Anti-grounding situation.
                debug("Anti-grounding situation!");
              } else if(!m_static_obst && m_dynamic_obst)
              {
                // Collision avoidance situation.
                debug("Anti-collision situation!");
                
                /*
                m_asv_state(2)=Angles::radians(90);
                m_asv_state(3)=1;
                m_dynamic_obst_state(1, 2) = Angles::radians(-90); // course actually.
                m_dynamic_obst_state(1, 3) = 5*0.541;
                double fake_x,fake_y;
                WGS84::displacement(m_lat_asv, m_lon_asv, 0, Angles::radians(63.871944), Angles::radians(8.644439), 0, &fake_x, &fake_y);
                m_dynamic_obst_state(1, 0) = fake_x; // north
                m_dynamic_obst_state(1, 1) = fake_y; // east
                m_dynamic_obst_state(1, 5) = 10.0;
                m_dynamic_obst_state(1, 6) = 10.0;
                m_dynamic_obst_state(1, 7) = 2.0;
                m_dynamic_obst_state(1, 8) = 2.0;
                m_dynamic_obst_state(1, 9) = 22222;

                debug("Fake obtacle - dist_x: %0.3f, dist_y: %0.3f",fake_x,fake_y);*/
              } else // both, this is an anti-grounding and anti-collision scenario!
                debug("Anti-grounding and anti-collision situation!");

              sb_mpc.getBestControlOffset(u_os, psi_os, m_asv_state(3), m_des_heading.value, m_asv_state, m_waypoints, m_dynamic_obst, m_dynamic_obst_state, m_static_obst, m_static_obst_state, cost);

              //! New desired course and course offset.
              m_des_heading.value += psi_os;
              m_des_heading.off = Angles::degrees(psi_os);

              if(psi_os == 0)
                debug("Course offset is 0, same desired course %.3f", Angles::degrees(m_des_heading.value));
              else
              {
                debug("Course offset is %.3f, new desired course %.3f", m_des_heading.off, Angles::degrees(m_des_heading.value));
                
                // Find closest vessel - hypothetically it is the one we try to avoid.
                std::vector<IMC::AisInfo>::const_iterator itr;
                itr = m_obst_vec.begin();
                double dist_min;
                double dist_prev = m_args.out_of_range;
                std::string mmsi_min;
                for (; itr != m_obst_vec.end(); ++itr)
                {
                  double dist = (itr)->dist;
                  if(dist < dist_prev)
                  {
                    dist_min = dist;
                    mmsi_min = (itr)->mmsi;
                  }
                  dist_prev = dist;
                }
                if(mmsi_min.compare(mmsi_last_engaged)!=0)
                  sendIridium(mmsi_min,dist_min);
              }

              //! Normalize angle
              m_des_heading.value = Angles::normalizeRadian(m_des_heading.value);

              debug("OFFSET: %.3f - NEW COURSE NORMALIZED %.3f",Angles::degrees(psi_os),Angles::degrees(m_des_heading.value));

              dispatch(m_des_heading);
              m_timestamp_prev = m_timestamp_new;
            }
          } else
            dispatch(m_des_heading);
        }
      };
    }
  }
}

DUNE_TASK
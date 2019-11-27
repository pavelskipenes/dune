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
        double T, DT, T_STAT, P, Q, D_CLOSE, D_SAFE, K_COLL, 
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

      };

      struct Task: public DUNE::Control::PathController
      {
        //! sb_mpc object.
        simulationBasedMpc sb_mpc;
        //! List of asv states
        Eigen::Matrix<double, 6, 1, Eigen::DontAlign> asv_state;

        //! Outgoing desired heading message.
        IMC::DesiredHeading m_heading;
        //! Outgoing desired speed message.
        IMC::DesiredSpeed m_speed;
        //! Temporary storage for IMC values
        IMC::RemoteSensorInfo obst_temp;
        //! Vector of obstacles
        std::vector<IMC::RemoteSensorInfo> obst_vec;
        // Create matrix with past, current and next waypoint.
        Eigen::Matrix<double,3,2> waypoints;
        
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
        //! Next Desired Path Latitude from PathController.
        double m_nextpath_lat;
        //! Next Desired Path Longitude from PathController.
        double m_nextpath_lon;
        //! True if Desired Path has more than one wp.
        bool m_more_than_one;
        //! Timestamp for last update from obstacle.
        std::vector<double> m_last_update;

        //! Task arguments.
        Arguments m_args;


        Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Control::PathController(name, ctx),
        u_os(0.0),
        psi_os(0.0),
        m_lat_asv(0.0), //1.1072565
        m_lon_asv(0.0), //0.1807216
        m_lat_obst(0.0),
        m_lon_obst(0.0),
        m_timestamp_new(0.0),
        m_timestamp_prev(0.0),
        m_timestamp_obst(0.0),
        m_nextpath_lat(0.0),
        m_nextpath_lon(0.0),
        m_more_than_one(false)
        {
          param("Maximum Obstacle Surveillance Range", m_args.out_of_range)
          .units(Units::Meter)
          .minimumValue("0.0")
          .maximumValue("5000.0")
          .defaultValue("500.0")
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

          param("Minimal Safe Distance", m_args.D_SAFE)
          .units(Units::Meter)
          .minimumValue("50.0")
          .maximumValue("500.0")
          .defaultValue("60.0")
          .description("Minimal distance which is considered as safe [m].");

          param("Cost of Collisions", m_args.K_COLL)
          .units(Units::Meter)
          .minimumValue("0.0")
          .maximumValue("1.0")
          .defaultValue("0.5")
          .description("Cost of Collision.");

          param("Cost of not complying COLREGS", m_args.KAPPA)
          .units(Units::Meter)
          .minimumValue("0.0")
          .maximumValue("10.0")
          .defaultValue("3.0")
          .description("Cost of not Complying with the COLREGS.");

          param("Cost of changing COLREGS", m_args.KAPPA_TC)
          .units(Units::Meter)
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
          .maximumValue("80.0")
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
          .maximumValue("200.0")
          .defaultValue("100.0")
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

          // Register handler routines.
          bind<IMC::DesiredPath>(this);
          bind<IMC::PeekDesiredPath>(this);
          bind<IMC::RemoteSensorInfo>(this);
          bind<IMC::GpsFix>(this);
        }

        void
        onUpdateParameters(void)
        {
          if(paramChanged(m_args.T) || paramChanged(m_args.DT) || paramChanged(m_args.T_STAT) || paramChanged(m_args.P) || paramChanged(m_args.Q) ||
             paramChanged(m_args.D_CLOSE) || paramChanged(m_args.D_SAFE) || paramChanged(m_args.K_COLL) || paramChanged(m_args.KAPPA) ||
             paramChanged(m_args.KAPPA_TC) || paramChanged(m_args.PHI_AH) || paramChanged(m_args.PHI_OT) || paramChanged(m_args.PHI_HO) ||
             paramChanged(m_args.PHI_CR) || paramChanged(m_args.K_P) || paramChanged(m_args.K_DP) || paramChanged(m_args.K_CHI) ||
             paramChanged(m_args.K_DCHI_SB) || paramChanged(m_args.K_DCHI_P) || paramChanged(m_args.K_CHI_SB) || paramChanged(m_args.K_CHI_P) ||
             paramChanged(m_args.D_INIT) || paramChanged(m_args.GUIDANCE_STRATEGY) || paramChanged(m_args.WP_R) || paramChanged(m_args.LOS_LA_DIST) ||
             paramChanged(m_args.LOS_KI) || paramChanged(m_args.COURSE_RANGE) || paramChanged(m_args.GRANULARITY) )
          {
            updateAll();
          }

          spew("sb_mpc object values: Surveillance Range: %0.1f T: %0.1f DT: %0.1f T_STAT:%0.1f P: %0.1f Q: %0.1f DCLOSE: %0.1f DSAFE: %0.1f KCOLL: %0.1f KAPPA: %0.1f KAPPA_TC: %0.1f PHI_AH: %0.1f PHI_OT: %0.1f PHI_HO: %0.1f PHI_CR: %0.1f K_P: %0.1f K_DP: %0.1f K_CHI: %0.1f K_DCHI_SB: %0.1f K_DCHI_P: %0.1f K_CHI_SB: %0.1f K_CHI_P: %0.1f D_INIT: %0.1f GUIDANCE_STRAT: %d ACC_RAD: %0.1f LOST_DIST: %0.1f LOS_KI: %0.1f COURSE_RANGE: %0.1f GRANULARITY: %0.1f",
                 m_args.out_of_range, m_args.T, m_args.DT, m_args.T_STAT, m_args.P, m_args.Q, m_args.D_CLOSE, m_args.D_SAFE, m_args.K_COLL, m_args.KAPPA, m_args.KAPPA_TC, m_args.PHI_AH, m_args.PHI_OT, m_args.PHI_HO, m_args.PHI_CR,
                 m_args.K_P, m_args.K_DP, m_args.K_CHI, m_args.K_DCHI_SB, m_args.K_DCHI_P, m_args.K_CHI_SB, m_args.K_CHI_P, m_args.D_INIT, m_args.GUIDANCE_STRATEGY, m_args.WP_R, m_args.LOS_LA_DIST, m_args.LOS_KI,
                 m_args.COURSE_RANGE, m_args.GRANULARITY);
        }

        void updateAll()
        {
          sb_mpc.setT_stat(m_args.T_STAT); 
          sb_mpc.setP(m_args.P);
          sb_mpc.setQ(m_args.Q);
          sb_mpc.setDClose(m_args.D_CLOSE);
          sb_mpc.setDSafe(m_args.D_SAFE);
          sb_mpc.setKColl(m_args.K_COLL);
          sb_mpc.setPhiAH(m_args.PHI_AH);
          sb_mpc.setPhiOT(m_args.PHI_OT);
          sb_mpc.setPhiHO(m_args.PHI_HO);
          sb_mpc.setPhiCR(m_args.PHI_CR);
          sb_mpc.setKappa(m_args.KAPPA);
          sb_mpc.setKappaTC(m_args.KAPPA_TC);
          sb_mpc.setKP(m_args.K_P);
          sb_mpc.setKdP(m_args.K_DP);
          sb_mpc.setKChi(m_args.K_CHI);
          sb_mpc.setKdChiSB(m_args.K_DCHI_SB);
          sb_mpc.setKdChiP(m_args.K_DCHI_P);
          sb_mpc.setKChiSB(m_args.K_CHI_SB);
          sb_mpc.setKChiP(m_args.K_CHI_P);
          sb_mpc.setDInit(m_args.D_INIT);
          sb_mpc.setGuidanceStrategy(m_args.GUIDANCE_STRATEGY);
          sb_mpc.setWpR(m_args.WP_R);
          sb_mpc.setLosLaDist(m_args.LOS_LA_DIST);
          sb_mpc.setLosKi(m_args.LOS_KI);
          sb_mpc.setAngRange(m_args.COURSE_RANGE);
          sb_mpc.setGran(m_args.GRANULARITY);
        }

        void
        onResourceInitialization(void)
        {
          sb_mpc.create(m_args.T, m_args.DT, m_args.T_STAT, m_args.P, m_args.Q, m_args.D_CLOSE,
                        m_args.D_SAFE, m_args.K_COLL, m_args.PHI_AH, m_args.PHI_OT, m_args.PHI_HO, m_args.PHI_CR,
                        m_args.KAPPA, m_args.KAPPA_TC, m_args.K_P, m_args.K_CHI, m_args.K_DP, m_args.K_DCHI_SB,
						            m_args.K_DCHI_P, m_args.K_CHI_SB, m_args.K_CHI_P, m_args.D_INIT, m_args.COURSE_RANGE, m_args.GRANULARITY,
                        m_args.WP_R, m_args.LOS_LA_DIST, m_args.LOS_KI, m_args.GUIDANCE_STRATEGY);

          for (int i = 0; i < 6; i++)
          {
            asv_state(i) = 0.0;
          }
        }

        void
        onEntityReservation(void) //???? not needed!
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
        consume(const IMC::RemoteSensorInfo* msg)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          // Check if AutoNaut is Simulator is booting before you compute displacement.
          if(m_lat_asv == 0.0 && m_lon_asv == 0.0)
            return;

          m_timestamp_obst = msg->getTimeStamp();

          // Real WGS-84 Coordinates [rad]. Static coordinates need to compensate for displacement in x/y-direction (WGS84::displace)
          m_lat_obst = msg->lat;
          m_lon_obst = msg->lon;

          // Distance between ASV - Obstacle
          double distance = WGS84::distance(m_lat_asv, m_lon_asv, 0, m_lat_obst, m_lon_obst, 0);

          // Get data from RemoteSensorInfo tuple.
          TupleList tuples(msg->data);
          std::string system_name = tuples.get("NAME");

          spew("Received Obstacle from AIS with MMSI: %s, NAME: %s; longitude %f and latitude %f, distance: %0.1f", msg->id.c_str(), system_name.c_str(), c_degrees_per_radian*m_lon_obst, c_degrees_per_radian*m_lat_obst, distance);

          bool obs_exists = false;
          // Obstacle vector: UPDATE/REMOVE.
          for (unsigned int i = 0; i < obst_vec.size(); i++)
          {
            //spew("Update Obstacle vector: Source: %d Vector size: %d", obst_vec[i].getSource(), obst_vec.size());
            std::string temp_id = obst_vec[i].id; //MMSI
            if(temp_id.compare(msg->id) == 0) //s1.compare(s2)
            {
              obs_exists = true;

              if (distance < m_args.out_of_range)
              { // Obstacle exists & inside range - Update
                obst_vec[i].id = msg->id; // should have already been set!
                obst_vec[i].lon = msg->lon;
                obst_vec[i].lat = msg->lat;
                obst_vec[i].heading = msg->heading;
                obst_vec[i].data = msg->data; //callsign,name,type_and_cargo,a,b,c,d,sog.
                m_last_update[i] = m_timestamp_obst;

                trace("Obstacle with MMSI %s is CLOSER than %0.1f m and is UPDATED - OBST VECT SIZE %lu", obst_vec[i].id.c_str(), m_args.out_of_range, obst_vec.size());
              }
              else
              {
                // Obstacle Outside range - Remove Obstacle
                trace("Obstacle with MMSI %s REMOVED - Outside range, obstacle vector size is now: %lu",
                     obst_vec[i].id.c_str(), obst_vec.size()-1);
                obst_vec.erase(obst_vec.begin() + i);
                m_last_update.erase(m_last_update.begin() + i);
              }
            }
            if(m_timestamp_obst - m_last_update[i] > m_args.kill_obst)
            {
              obs_exists = true; // but now is going to be killed!
              // Obstacle disappeared - Remove Obstacle
              trace("Obstacle with MMSI %s is DISAPPEARED and REMOVED - obstacle vector size is now: %lu",
                   obst_vec[i].id.c_str(), obst_vec.size()-1);
              obst_vec.erase(obst_vec.begin() + i);
              m_last_update.erase(m_last_update.begin() + i);
            }
          }

          // // Obstacle vector: ADD new obstacle.
          if (obs_exists == false && (distance < m_args.out_of_range))
          {
            // Create timestamp for this new vehicle.
            m_last_update.push_back(m_timestamp_obst);
            
            // Temp obstacle for storage.
            obst_temp.id = msg->id;
            obst_temp.lon = msg->lon;
            obst_temp.lat = msg->lat;
            obst_temp.heading = msg->heading;
            obst_temp.data = msg->data; //callsign,name,tyoe_and_cargo,a,b,c,d,sog.

            obst_vec.push_back(obst_temp);
            trace("New Obstacle Added: MMSI %s, NAME %s, obstacle vector size: %lu",
                 obst_temp.id.c_str(), system_name.c_str(), obst_vec.size());
          }
          //obs_exists = false;
        }

        //! From PathController.
        void
        consume(const IMC::DesiredPath* dpath)
        {          
          // Speed reference
          m_speed.value = dpath->speed; //Maneuver speed reference.
          m_speed.speed_units = dpath->speed_units; //Maneuver speed reference units.
          spew("Speed from Desired path: %0.2f", m_speed.value);
        }

        void
        consume(const IMC::PeekDesiredPath* ppath)
        {
          m_nextpath_lat = ppath->dpath->end_lat;
          m_nextpath_lon = ppath->dpath->end_lon;
          trace("NEXT NEXT WAYPOINT: lat %f - long %f",c_degrees_per_radian*m_nextpath_lat, c_degrees_per_radian*m_nextpath_lon);

          m_more_than_one = true;
        }

        //! From GPS Task
        void
        consume(const IMC::GpsFix* msg)
        {
          m_lat_asv = msg->lat;
          m_lon_asv = msg->lon;
          asv_state(0) = 0.0; // ASV assumed to be centered, (0,0)
          asv_state(1) = 0.0;
          asv_state(2) = msg->cog;
          asv_state(3) = msg->sog;
          asv_state(4) = 0.0; //! Assume zero sideslip
          asv_state(5) = 0.0; //! Assume zero.

          m_timestamp_new = msg->getTimeStamp();
        }

        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          trace("LAST WAYPOINT: lat %f - long %f",c_degrees_per_radian*ts.lat_st, c_degrees_per_radian*ts.lon_st);
          trace("NEXT WAYPOINT: lat %f - long %f",c_degrees_per_radian*ts.lat_en, c_degrees_per_radian*ts.lon_en);
          
          //! LOS Navigation Law (called Pure Pursuit in Dune)
          m_heading.value = ts.los_angle;
          if (ts.cc)
            m_heading.value = Math::Angles::normalizeRadian(m_heading.value + state.psi - ts.course);

          //! CAS: Running every 5 seconds when obstacles are nearby
          if (obst_vec.size() > 0 && (m_timestamp_new - m_timestamp_prev) > 5.0)
          {
            m_timestamp_prev = m_timestamp_new;
            
            Eigen::Matrix<double, -1, 10> obst_state;
            obst_state.resize(obst_vec.size(), 10);

            m_timestamp_prev = m_timestamp_new;
            
            //! Update asv_states to fit CAS (sb_mpc) inputs
            //asv_state(3) = sqrt(std::pow(asv_state(3), 2) + std::pow(asv_state(4), 2)); // u = Speed in BODY

            for (unsigned int i = 0; i < obst_vec.size(); i++)
            {
              // Get data from RemoteSensorInfo tuple.
              TupleList tuples(obst_vec[i].data);
              double sog = tuples.get("SOG", 0);
              double a = tuples.get("A", 0);
              double b = tuples.get("B", 0);
              double c = tuples.get("C", 0);
              double d = tuples.get("D", 0);

              //trace("sog= %0.1f, a= %0.1f, b= %0.1f, c= %0.1f, d= %0.1f", sog, a, b, c, d);

              // Distance between ASV - Obstacle
              double dist_x = 0.0;
              double dist_y = 0.0;
              WGS84::displacement(m_lat_asv, m_lon_asv, 0, obst_vec[i].lat, obst_vec[i].lon, 0, &dist_x, &dist_y);

              //trace("dist_x= %0.1f, dist_y= %0.1f", dist_x, dist_y);

              //! Update Obstacle states to fit input of CAS (sb_mpc)
              obst_state(i, 0) = dist_x; // north
              obst_state(i, 1) = dist_y; // east
              obst_state(i, 2) = obst_vec[i].heading; // course actually.
              obst_state(i, 3) = sog; //sqrt(std::pow(obst_vec[i].u, 2) + std::pow(obst_vec[i].v, 2));
              obst_state(i, 4) = 0.0;
              obst_state(i, 5) = a;
              obst_state(i, 6) = b;
              obst_state(i, 7) = c;
              obst_state(i, 8) = d;
              
              // Convert MMSI from string to int for CAS.
              std::stringstream geek(obst_vec[i].id); //contains int MMSI.
              int mmsi = 0; 
              geek >> mmsi;
              obst_state(i, 9) = mmsi;
              
              spew("Autonaut (lon,lat,cog,sog) %0.1f %0.1f %0.1f %0.1f | %d-th obstacle (dist_x,dist_y,cog,sog) %0.1f %0.1f %0.1f %0.1f", m_lat_asv, m_lon_asv, c_degrees_per_radian*asv_state(2), asv_state(3), i, obst_state(i,0), obst_state(i,1), c_degrees_per_radian*obst_state(i,2), obst_state(i,3));
            }

            // Create and fill waypoints matrix.
            double wp0_dx = 0.0; // displ between asv and wp0
            double wp0_dy = 0.0;
            double wp1_dx = 0.0; // displ between asv and wp1
            double wp1_dy = 0.0;
            double wp2_dx = 0.0; // displ between asv and wp2
            double wp2_dy = 0.0;

            // Compute displacement between AutoNaut and waypoints.
            WGS84::displacement(m_lat_asv, m_lon_asv, 0, ts.lat_st, ts.lon_st, 0, &wp0_dx, &wp0_dy);
            WGS84::displacement(m_lat_asv, m_lon_asv, 0, ts.lat_en, ts.lon_en, 0, &wp1_dx, &wp1_dy);
            
            if(m_more_than_one)
            {
              WGS84::displacement(m_lat_asv, m_lon_asv, 0, m_nextpath_lat, m_nextpath_lon, 0, &wp2_dx, &wp2_dy);
              waypoints << wp0_dx, wp0_dy, // starting waypoint
                           wp1_dx, wp1_dy, // waypoint we are heading too
                           wp2_dx, wp2_dy; // next waypoint
              
              trace("Displacements: wp0 (%0.1f,%0.1f) - wp1 (%0.1f,%0.1f) - wp2 (%0.1f,%0.1f)", wp0_dx, wp0_dy, wp1_dx, wp1_dy, wp2_dx, wp2_dy);
            } else
            { // otherwise send wp1 twice.
              waypoints << wp0_dx, wp0_dy, // starting waypoint
                           wp1_dx, wp1_dy, // waypoint we are heading too
                           wp1_dx, wp1_dy; // repeat 2nd wp for sb_mpc

              trace("Displacements: wp0 (%0.1f,%0.1f) - wp1 (%0.1f,%0.1f)", wp0_dx, wp0_dy, wp1_dx, wp1_dy);
            }

            trace("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");

            // Create static obstacle matrix.
            Eigen::Matrix<double,0,4> static_obst;

            //! Collision Avoidance Algorithm - Compute heading offset/(speed offset)
            sb_mpc.getBestControlOffset(u_os, psi_os, m_speed.value, m_heading.value, asv_state, obst_state, static_obst, waypoints);

            //! New desired heading
            m_heading.value += psi_os;

            //! Normalize angle
            m_heading.value = Angles::normalizeRadian(m_heading.value);

            dispatch(m_heading);

            trace("COLLISION AVOIDANCE - Heading offset: %f - Number of Obstacles: %lu", c_degrees_per_radian*psi_os, obst_vec.size());
          }

          // No obstacle in range	- proceed as normal
          if (obst_vec.size() == 0 && (m_timestamp_new - m_timestamp_prev > 1.0))
          {
            m_timestamp_prev = m_timestamp_new;
            dispatch(m_heading);
          }

          dispatch(m_speed);
        }
      };
    }
  }
}

DUNE_TASK
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
// Author: Sølve Dahlin	                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>
#include <vector>
#include <Eigen/Dense>


// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "sb_mpc.h"

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
        double T_;
        double DT;

        // Tuning Parameters
        double P_;
        double Q_;
        double D_CLOSE;
        double D_SAFE;
        double K_COLL;
        double KAPPA;
        double K_P;
        double K_CHI_SB;
        double K_CHI_P;
        double K_DP;
        double K_DCHI_SB;
        double K_DCHI_P;

        //Print Parameters
        bool print_gps;
        bool print_ais;
        bool print_cas;
        bool print_rudder;
        double print_cost;
      };

      struct Task:public DUNE::Control::PathController
      {
        //! Outgoing desired heading message.
        IMC::DesiredHeading m_heading;
        //! Outgoing desired speed message.
        IMC::DesiredSpeed m_speed;
        //! Temporary storage for IMC values
        IMC::ObstacleState obst_temp;
        //! Vector of obstacles
        std::vector<IMC::ObstacleState> obst_vec;
        //! List of asv states
        Eigen::Matrix<double, 6, 1, Eigen::DontAlign> asv_state;
        //! Initialize sb_mpc object
        simulationBasedMpc *sb_mpc;
        //! Speed offset <Output from CAS>
        double u_os;
        //! Heading offset <Output from CAS> Possibly store in next section
        double psi_os;
        //! Speed <Output from PathController>
        double u_pcs;
        //! Speed Unit <Output from PathController>
        uint8_t u_pcs_unit;
        //! Heading <Output from PathController>
        double psi_pcs;
        //! Vehicle latitude (from AutoNaut)
        double m_lat_asv;
        //! Vehicle longitude (from AutoNaut)
        double m_lon_asv;
        //! Vehicle latitude (from Obstacles) [Simulation mode]
        double m_lat_obst;
        //! Vehicle longitude (from Obstacles) [Simulation mode]
        double m_lon_obst;
        //! Timestamp - new (from Autonaut)
        double m_timestamp_new;
        //! Timestamp - old (from Autonaut)
        double m_timestamp_prev;
        //! Task arguments.
        Arguments m_args;

        double u_pcs_test;
        //! Rudder Angle 		- debugging (from HeadingController)
        int16_t rudder_cmd;
        //! Thrust Actuation 	- debugging (from SpeedController)
        int8_t thruster_act;
        //! GPS print counter	- debugging
        uint8_t counter;

        Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Control::PathController(name, ctx),
        sb_mpc(NULL),
        u_os(1.0),
        psi_os(0.0),
        u_pcs(0.0),
        u_pcs_unit(0),
        psi_pcs(0.0),
        m_lat_asv(1.1072565),
        m_lon_asv(0.1807216),
        m_lat_obst(0.0),
        m_lon_obst(0.0),
        m_timestamp_new(0.0),
        m_timestamp_prev(0.0),
        u_pcs_test(0.0),
        rudder_cmd(0.0),
        thruster_act(0.0),
        counter(0)
        {
          param("Maximum Obstacle Surveillance Range", m_args.out_of_range)
          .units(Units::Meter)
          .minimumValue("0")
          .maximumValue("5000")
          .defaultValue("400")
          .description("Limit for absolute value of obstacle surveillance range");

          param("Prediction Horizon - Simulation Time", m_args.T_)
          .units(Units::Second)
          .minimumValue("0")
          .maximumValue("6000")
          .defaultValue("600")
          .description("Simulation time - Prediction Horizon [sec]");

          param("Horizon Time Step", m_args.DT)
          .units(Units::Second)
          .minimumValue("0")
          .maximumValue("20")
          .defaultValue("1")
          .description("Simulation Time Step");

          param("Weight on Time to Evaluation Instant", m_args.P_)
          .minimumValue("0.5")
          .maximumValue("10.0")
          .defaultValue("0.5")
          .description("Weight on Time to Evaluation Instant");

          param("Weight on Distance at Evaluation Instant", m_args.Q_)
          .minimumValue("1.0")
          .maximumValue("10.0")
          .defaultValue("3.0")
          .description("Weight on Distance at Evaluation Instant");

          param("Tune - COLREGS Distance", m_args.D_CLOSE)
          .units(Units::Meter)
          .minimumValue("300.0")
          .maximumValue("2000.0")
          .defaultValue("400.0")
          .description("Distance where COLREGS are applied");

          param("Tune - Minimal Safe Distance", m_args.D_SAFE)
          .units(Units::Meter)
          .minimumValue("50.0")
          .maximumValue("500.0")
          .defaultValue("60.0")
          .description("Minimal distance which is considered as safe");

          param("Cost of Collisions", m_args.K_COLL)
          .units(Units::Meter)
          .minimumValue("0.0")
          .maximumValue("1.0")
          .defaultValue("0.5")
          .description("Cost of Collisions");

          param("Cost of not complying COLREGS", m_args.KAPPA)
          .units(Units::Meter)
          .minimumValue("0.0")
          .maximumValue("10.0")
          .defaultValue("3.0")
          .description("Cost of not Complying with the COLREGS.");

          param("Cost of Deviating from Nominal Speed", m_args.K_P)
          .minimumValue("0.0")
          .maximumValue("10.0")
          .defaultValue("2.5")
          .description("Cost of deviating from the nominal speed");

          param("Cost of Selecting Turn to SB", m_args.K_CHI_SB)
          .units(Units::Meter)
          .minimumValue("0.0")
          .maximumValue("20.0")
          .defaultValue("0.9")
          .description("Cost of Selecting Turn to SB");

          param("Cost of Selecting Turn to Port", m_args.K_CHI_P)
          .minimumValue("0.0")
          .maximumValue("80.0")
          .defaultValue("10.0")
          .description("Cost of Selecting Turn to Port");

          param("Cost of Changing Speed Offset", m_args.K_DP)
          .minimumValue("0.0")
          .maximumValue("10.0")
          .defaultValue("2.0")
          .description("Cost of Changing the Speed Offset");

          param("Cost of Heading change to SB", m_args.K_DCHI_SB)
          .minimumValue("0.0")
          .maximumValue("10.0")
          .defaultValue("0.1")
          .description("Cost of Changing the Heading Offset to Starboard");

          param("Cost of Heading change to Port", m_args.K_DCHI_P)
          .minimumValue("0.0")
          .maximumValue("10.0")
          .defaultValue("0.5")
          .description("Cost of Changing the Heading Offset to Port");

          param("Cost of Heading change to Port", m_args.K_DCHI_P)
          .minimumValue("0.0")
          .maximumValue("10.0")
          .defaultValue("0.5")
          .description("Cost of Changing the Heading Offset to Port");

          param("Print Cost message", m_args.print_cost)
          .defaultValue("0")
          .description("Enable/Disable printing of Cost function [True = 1/False = 0]");

          param("Print GPS message", m_args.print_gps)
          .defaultValue("true")
          .description("Enable/Disable printing of GPS messages");

          param("Print AIS message", m_args.print_ais)
          .defaultValue("false")
          .description("Enable/Disable printing of AIS messages");

          param("Print CAS message", m_args.print_cas)
          .defaultValue("true")
          .description("Enable/Disable printing of CAS messages");

          param("Print Rudder message", m_args.print_rudder)
          .defaultValue("true")
          .description("Enable/Disable printing of Rudder messages");

          // Register handler routines.
          bind<IMC::DesiredPath>(this);
          bind<IMC::ObstacleState>(this);
          bind<IMC::EstimatedState>(this);
          bind<IMC::DesiredSpeed>(this);
          bind<IMC::SetServoPosition>(this);
          bind<IMC::SetThrusterActuation>(this);
          bind<IMC::GpsFix>(this);
          bind<IMC::RemoteSensorInfo>(this);
          bind<IMC::AisStaticInfo>(this);
        }

        void
        onUpdateParameters(void)
        {
          PathController::onUpdateParameters();
          if (sb_mpc)
          {
            //! Updating with operator set values
            sb_mpc->setT(m_args.T_);
            sb_mpc->setDt(m_args.DT);
            sb_mpc->setP(m_args.P_);
            sb_mpc->setQ(m_args.Q_);
            sb_mpc->setDClose(m_args.D_CLOSE);
            sb_mpc->setDSafe(m_args.D_SAFE);
            sb_mpc->setKColl(m_args.K_COLL);
            sb_mpc->setKappa(m_args.KAPPA);
            sb_mpc->setKP(m_args.K_P);
            sb_mpc->setKChiSB(m_args.K_CHI_SB);
            sb_mpc->setKChiP(m_args.K_CHI_P);
            sb_mpc->setKdP(m_args.K_DP);
            sb_mpc->setKdChiSB(m_args.K_DCHI_SB);
            sb_mpc->setKdChiP(m_args.K_DCHI_P);
            sb_mpc->setKdChiP(m_args.K_DCHI_P);
            sb_mpc->setPrintCost(m_args.print_cost);

            spew("New sb_mpc values: T: %0.1f DT: %0.1f P: %0.1f Q: %0.1f DCLOSE: %0.1f DSAFE: %0.1f KCOLL: %0.1f KAPPA: %0.1f KP: %0.1f KchiSB: %0.1f KchiP: %0.1f Kdp: %0.1f KdchiSB: %0.1f KdchiP: %0.1f PrintCost: %0.1f",
                 sb_mpc->getT(), sb_mpc->getDt(), sb_mpc->getP(), sb_mpc->getQ(),
                 sb_mpc->getDClose(), sb_mpc->getDSafe(), sb_mpc->getKColl(),
                 sb_mpc->getKappa(), sb_mpc->getKP(), sb_mpc->getKChiSB(),
                 sb_mpc->getKChiP(), sb_mpc->getKdP(), sb_mpc->getKdChiSB(),
                 sb_mpc->getKdChiP(), sb_mpc->getPrintCost());

          }
        }

        void
        onResourceInitialization(void)
        {
          sb_mpc = new simulationBasedMpc();

          //! Updating with defualt values
          sb_mpc->setT(m_args.T_);
          sb_mpc->setDt(m_args.DT);
          sb_mpc->setP(m_args.P_);
          sb_mpc->setQ(m_args.Q_);
          sb_mpc->setDClose(m_args.D_CLOSE);
          sb_mpc->setDSafe(m_args.D_SAFE);
          sb_mpc->setKColl(m_args.K_COLL);
          sb_mpc->setKappa(m_args.KAPPA);
          sb_mpc->setKP(m_args.K_P);
          sb_mpc->setKChiSB(m_args.K_CHI_SB);
          sb_mpc->setKChiP(m_args.K_CHI_P);
          sb_mpc->setKdP(m_args.K_DP);
          sb_mpc->setKdChiSB(m_args.K_DCHI_SB);
          sb_mpc->setKdChiP(m_args.K_DCHI_P);
          sb_mpc->setKdChiP(m_args.K_DCHI_P);
          sb_mpc->setPrintCost(m_args.print_cost);

          spew("New sb_mpc values: T: %0.1f DT: %0.1f P: %0.1f Q: %0.1f DCLOSE: %0.1f DSAFE: %0.1f KCOLL: %0.1f KAPPA: %0.1f KP: %0.1f KchiSB: %0.1f KchiP: %0.1f Kdp: %0.1f KdchiSB: %0.1f KdchiP: %0.1f PrintCost: %0.1f",
               sb_mpc->getT(), sb_mpc->getDt(), sb_mpc->getP(), sb_mpc->getQ(),
               sb_mpc->getDClose(), sb_mpc->getDSafe(), sb_mpc->getKColl(),
               sb_mpc->getKappa(), sb_mpc->getKP(), sb_mpc->getKChiSB(),
               sb_mpc->getKChiP(), sb_mpc->getKdP(), sb_mpc->getKdChiSB(),
               sb_mpc->getKdChiP(), sb_mpc->getPrintCost());

          for (int i = 0; i < 6; i++)
          {
            asv_state(i) = 0.0;
          }
        }

        void
        onResourceRelease(void)
        {
          sb_mpc = NULL;
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

        //! From HeadingController - Only used for debug in this Task
        void
        consume(const IMC::SetServoPosition* rudder_pos)
        {
          rudder_cmd = roundToInteger(rudder_pos->value * 450);
          rudder_cmd = trimValue(rudder_cmd, -450, 450);
          if (m_args.print_rudder)
            spew("Rudder cmd: %d", rudder_cmd);
        }

        //! From SpeedController - Only used for debug in this Task
        void
        consume(const IMC::SetThrusterActuation* thrust_act)
        {
          thruster_act = roundToInteger(thrust_act->value * 100);
          thruster_act = trimValue(thruster_act, -100, 100);
          //spew("Thruster Actuation: %d", thruster_act);
        }

        //! From AIS Task - Static vessel information
        void
        consume(const IMC::AisStaticInfo* ais_static)
        {
          uint32_t source_mmsi = atoi(ais_static->id.c_str());

          //! Obstacle vector - Check if AIS static info needs to be updated.
          for (unsigned i = 0; i < obst_vec.size(); i++)
          {
            if (obst_vec[i].mmsi == source_mmsi)
            {
              // If
              if (obst_vec[i].a > 1 || obst_vec[i].b > 1 || obst_vec[i].c > 1 || obst_vec[i].d > 1)
                break;

              obst_vec[i].a = ais_static->a;
              obst_vec[i].b = ais_static->b;
              obst_vec[i].c = ais_static->c;
              obst_vec[i].d = ais_static->d;

              spew("** STATIC AIS MSG - Update obstacle sizes - Name: %s MMSI %d | (a,b,c,d) %0.1f %0.1f %0.1f %0.1f",
                   ais_static->name.c_str(), source_mmsi, obst_vec[i].a, obst_vec[i].b, obst_vec[i].c, obst_vec[i].d);

              break;
            }
          }
        }

        //! From GPS Task
        void
        consume(const IMC::GpsFix* msg)
        {
          m_lat_asv = msg->lat;
          m_lon_asv = msg->lon;
          asv_state(2) = msg->cog;
          asv_state(3) = msg->sog;
          asv_state(4) = 0.0; //! Assume zero sideslip
          asv_state(5) = 0.0; //! Assume zero.

          if ((counter > 4))
          {
            if (m_args.print_gps)
              spew("Autonaut GpsFix: (Lat,Lon): %f %f (Lat,Lon)[deg] %f %f (SOG,COG): %f %f | Max_Range: %0.2f | Rudder: %d Thruster: %d",
                   msg->lat, msg->lon, Angles::degrees(msg->lat), Angles::degrees(msg->lon), msg->sog, Angles::degrees(msg->cog),
                   m_args.out_of_range, rudder_cmd, thruster_act);
            counter = 0;
          }
          counter = counter + 1;
        }

        void
        consume(const IMC::DesiredPath* dpath)
        {
          //! From PathController - Speed reference
          u_pcs = dpath->speed;
          u_pcs_unit = dpath->speed_units;
          m_speed.value = u_pcs;
          m_speed.speed_units = u_pcs_unit;

          spew("Speed from Desired path: u_pcs: %0.2f m_speed.value: %0.2f", u_pcs, m_speed.value);
        }

        void
        consume(const IMC::DesiredSpeed* dspeed)
        {
          //! From feks Manuever/FollowTrajectory - Speed reference
          u_pcs_test = dspeed->value;
          //spew("Speed from DesiredSpeed: u_pcs: %0.2f m_speed.value: %0.2f ", u_pcs_test);
        }

        void
        consume(const IMC::EstimatedState* estate)
        {
          //! Store AutoNaut parameters into asv_state(x,y,psi,u,v,r):
          // Real WGS-84 Coordinates [rad]. Static coordinates need to compensate for displacement in x/y-direction [x = North, y = East] (WGS84::displace)
          m_lat_asv = estate->lat;
          m_lon_asv = estate->lon;
          WGS84::displace(estate->x, estate->y, &m_lat_asv, &m_lon_asv);

          //asv_state(0) = 0; 		// Defined in the step-function
          //asv_state(1) = 0; 		// Defined in the step-function
          asv_state(2) = estate->psi;
          asv_state(3) = estate->vx;
          asv_state(4) = estate->vy;
          asv_state(5) = estate->r;
          m_timestamp_new = estate->getTimeStamp();

          //spew("AutoNaut(lat,lon): %f %f (lat[deg],lon[deg]): %f %f ", m_lat_asv, m_lon_asv, c_degrees_per_radian*m_lat_asv, c_degrees_per_radian*m_lon_asv);
          //spew("AutoNaut(x,y,psi,u,v,vx,vy): %0.1f %0.1f %0.1f %0.5f %0.1f %0.1f %0.1f", asv_state(0), asv_state(1), c_degrees_per_radian*asv_state(2), estate->u, estate->v, asv_state(3), asv_state(4));
        }

        //! From AIS Task - Receive Dynamic vessel AIS information [Hardware mode]
        void
        consume(const IMC::RemoteSensorInfo* ais_msg)
        {
          uint32_t source_mmsi = atoi(ais_msg->id.c_str());

          //! Temporary storage for AIS-Obstacles
          IMC::ObstacleState obst_ais;
          obst_ais.setSource(ais_msg->getSource());
          obst_ais.mmsi = source_mmsi;
          obst_ais.lat = ais_msg->lat;
          obst_ais.lon = ais_msg->lon;
          obst_ais.psi = ais_msg->heading;
          obst_ais.u = (0.51444) * ais_msg->alt; // NB ! ais_msg->alt (altitude) is acutally speed: See Sensor/AIS/Task. Converting from knots --> m/s
          obst_ais.v = 0;
          obst_ais.a = 150; //Assumed size (L,W): 300, 50 meter. Oil Tanker
          obst_ais.b = 150;
          obst_ais.c = 25;
          obst_ais.d = 25;

          //Update Obstacle-vector
          updateObstacles(&obst_ais);
        }

        //! Updates the Obstacle-vector [Hardware mode]
        void
        updateObstacles(const IMC::ObstacleState* o_msg)
        {
          double dist_x = 0.0;
          double dist_y = 0.0;
          WGS84::displacement(m_lat_asv, m_lon_asv, 0, o_msg->lat, o_msg->lon, 0, &dist_x, &dist_y);
          double distance = sqrt(dist_x * dist_x + dist_y * dist_y);
          //spew("AIS: MMSI: %d (lon,lat,psi,u): %f %f %0.1f %0.1f | Dist: %0.1f, dx: %0.1f dy: %0.1f ", o_msg->mmsi, c_degrees_per_radian*o_msg->lon, c_degrees_per_radian*o_msg->lat, c_degrees_per_radian*o_msg->psi, o_msg->u, distance, dist_x, dist_y);

          bool obs_exists = false;

          // Obstacle vector (Add/Update/Remove)
          for (unsigned i = 0; i < obst_vec.size(); i++)
          {
            //spew("%d.ObstVec: MMSI: %d (lat,lon,psi,u): %f %f %0.1f %0.1f ",i, obst_vec[i].mmsi, obst_vec[i].lat, obst_vec[i].lon, c_degrees_per_radian*obst_vec[i].psi, obst_vec[i].u);
            if (obst_vec[i].mmsi == o_msg->mmsi)
            {
              if (m_args.print_ais)
                spew("%u/%lu.ObstVec: MMSI: %d | (lon,lat,psi,u): %f %f %0.1f %0.1f | size: (a,b,c,d) %0.1f %0.1f %0.1f %0.1f | Dist: %0.1f",
                     i, obst_vec.size(), obst_vec[i].mmsi,
                     obst_vec[i].lon, obst_vec[i].lat, Angles::degrees(obst_vec[i].psi), obst_vec[i].u,
                     obst_vec[i].a, obst_vec[i].b, obst_vec[i].c, obst_vec[i].d, distance);

              obs_exists = true;
              if (obs_exists)
              {
                if (distance < m_args.out_of_range) //! Ensure current range is large enough to receive AIS info
                {
                  // Obstacle exists & inside range - Update
                  obst_vec[i].lon = dist_x; //! Lon expressed in dx [m]. According to NED: dx = North
                  obst_vec[i].lat = dist_y; //! Lat expressed in dy [m]. According to NED: dy = East
                  obst_vec[i].psi = o_msg->psi;
                  obst_vec[i].u = o_msg->u;
                  obst_vec[i].v = o_msg->v;
                  if ((obst_vec[i].a == 150.0 && obst_vec[i].b == 150.0) || (obst_vec[i].c == 25.0 && obst_vec[i].d == 25.0))
                  {
                    //spew("UPDATE Obstacle + size: MMSI %d (lon,lat,psi,u): %0.1f %0.1f %0.1f %0.1f (a,b,c,d) %0.1f %0.1f %0.1f %0.1f | Vector size: %d",o_msg->mmsi, obst_vec[i].lon, obst_vec[i].lat, c_degrees_per_radian*obst_vec[i].psi, obst_vec[i].u, obst_vec[i].a, obst_vec[i].b, obst_vec[i].c, obst_vec[i].d, obst_vec.size());
                    break;
                  }
                  else
                  {
                    obst_vec[i].a = o_msg->a;
                    obst_vec[i].b = o_msg->b;
                    obst_vec[i].c = o_msg->c;
                    obst_vec[i].d = o_msg->d;
                    //spew("UPDATE Obstacle: MMSI %d (lon,lat,psi,u): %0.1f %0.1f %0.1f %0.1f (a,b,c,d) %0.1f %0.1f %0.1f %0.1f  | Vector size: %d",o_msg->mmsi, obst_vec[i].lon, obst_vec[i].lat, c_degrees_per_radian*obst_vec[i].psi, obst_vec[i].u, obst_vec[i].a, obst_vec[i].b, obst_vec[i].c, obst_vec[i].d, obst_vec.size());
                  }
                  break;
                }
                else
                { // Outside range - Remove Obstacle
                  obst_vec.erase(obst_vec.begin() + i);
                  spew("REMOVE - Outside Range: Obstacle(mmsi): %d , new vector size: %lu",
                       o_msg->mmsi, obst_vec.size());
                  break;
                }
              }
            }
          }

          // New Obstacle - Add to vector
          if (obs_exists == false && (distance < m_args.out_of_range))
          {
            // Temp obstacle for storage
            obst_temp.setSource(o_msg->getSource());
            obst_temp.mmsi = o_msg->mmsi;
            obst_temp.lon = dist_x;
            obst_temp.lat = dist_y;
            obst_temp.psi = o_msg->psi;
            obst_temp.u = o_msg->u;
            obst_temp.v = o_msg->v;
            obst_temp.a = o_msg->a;
            obst_temp.b = o_msg->b;
            obst_temp.c = o_msg->c;
            obst_temp.d = o_msg->d;

            obst_vec.push_back(obst_temp);

            spew("ADD - Obstacle(mmsi): %d  | Distance: %0.1f obst_vec.size: %lu",
                 o_msg->mmsi, distance, obst_vec.size());
          }
          obs_exists = false;
        }

        //! ObstacleState: Received from EstimatedStateToTarget - simulated obstacles, ex asv-obstacle-1 [Simulation Mode]
        void
        consume(const IMC::ObstacleState* o_msg)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          // Real WGS-84 Coordinates [rad]. Static coordinates need to compensate for displacement in x/y-direction (WGS84::displace)
          m_lat_obst = o_msg->lat;
          m_lon_obst = o_msg->lon;
          WGS84::displace(o_msg->x, o_msg->y, &m_lat_obst, &m_lon_obst);

          // Distance between ASV - Obstacle
          double dist_x = 0.0;
          double dist_y = 0.0;
          WGS84::displacement(m_lat_asv, m_lon_asv, 0, m_lat_obst, m_lon_obst, 0, &dist_x, &dist_y);
          double displacement = sqrt(dist_x * dist_x + dist_y * dist_y);

          std::string system_name = Utils::String::str(resolveSystemId(o_msg->getSource()));
//          spew("Obstacle_Name: %s obst_vec.size: %d displacment: %0.1f dist_x: %0.1f dist_y: %0.1f range_parameter: %0.1f",
//               system_name.c_str(), obst_vec.size(), displacement, dist_x, dist_y, m_args.out_of_range);

          bool obs_exists = false;

          // Obstacle vector (Add/Update/Remove)
          for (unsigned i = 0; i < obst_vec.size(); i++)
          {
            //spew("Update Obstacle vector: Source: %d Vector size: %d", obst_vec[i].getSource(), obst_vec.size());
            if (obst_vec[i].getSource() == o_msg->getSource())
            {
              obs_exists = true;
              if (obs_exists)
              {
                if (displacement < m_args.out_of_range)
                { // Obstacle exists & inside range - Update
                  obst_vec[i].lon = dist_x; //! Lon expressed as dx [m]
                  obst_vec[i].lat = dist_y; //! Lat expressed as dy [m]
                  obst_vec[i].psi = o_msg->psi;
                  obst_vec[i].u = o_msg->u;
                  obst_vec[i].v = o_msg->v;
                  obst_vec[i].a = o_msg->a;
                  obst_vec[i].b = o_msg->b;
                  obst_vec[i].c = o_msg->c;
                  obst_vec[i].d = o_msg->d;

                  //spew("Obstacle source %d UPDATE - Obstacle exists & inside range: %s",obst_temp.getSource(), system_name.c_str());
                  break;
                }
                else
                { // Outside range - Remove Obstacle
                  obst_vec.erase(obst_vec.begin() + i);
                  spew("Obstacle Source: %d Getting removed - Outside range, vector size: %lu",
                       obst_temp.getSource(), obst_vec.size());
                  break;
                }
              }
            }
          }

          // New Obstacle - Add to vector
          if (obs_exists == false && (displacement < m_args.out_of_range))
          {
            // Temp obstacle for storage
            obst_temp.setSource(o_msg->getSource());
            obst_temp.lon = dist_x;
            obst_temp.lat = dist_y;
            obst_temp.psi = o_msg->psi;
            obst_temp.u = o_msg->u;
            obst_temp.v = o_msg->v;
            obst_temp.a = o_msg->a;
            obst_temp.b = o_msg->b;
            obst_temp.c = o_msg->c;
            obst_temp.d = o_msg->d;

            obst_vec.push_back(obst_temp);
            spew("New Obstacle Added: Vehicle: %s Source: %d   obst_vec.size: %lu",
                 system_name.c_str(), obst_temp.getSource(), obst_vec.size());
          }

          obs_exists = false;
        }

        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          //! From PurePursuit - PurePursuit angle: Head straight to target
          m_heading.value = ts.los_angle;
          if (ts.cc)
            m_heading.value = Angles::normalizeRadian(m_heading.value + state.psi - ts.course);

          //! CAS: Running every 3 seconds when obstacles are nearby
          if (obst_vec.size() > 0 && (m_timestamp_new - m_timestamp_prev > 3.0))
          {
            m_timestamp_prev = m_timestamp_new;
            Eigen::Matrix<double, -1, 9 > obst_state;
            obst_state.resize(obst_vec.size(), 9);

            //! Update asv_states to fit CAS (sb_mpc) inputs
            asv_state(0) = 0.0; // ASV assumed to be centered, (0,0)
            asv_state(1) = 0.0;
            asv_state(3) = sqrt(std::pow(asv_state(3), 2) + std::pow(asv_state(4), 2)); // u = Speed in BODY
            asv_state(4) = 0.0; // v = Sideslip = 0
            asv_state(5) = 0.0;

            u_pcs = u_pcs_test;

            for (unsigned i = 0; i < obst_vec.size(); i++)
            {
              //! Update Obstacle states to fit input of CAS (sb_mpc)
              obst_state(i, 0) = obst_vec[i].lon; // lon = dx		Neptus: NED => xyz	North = dx
              obst_state(i, 1) = obst_vec[i].lat; // lat = dy							East = dy
              obst_state(i, 2) = obst_vec[i].psi;
              obst_state(i, 3) = sqrt(std::pow(obst_vec[i].u, 2) + std::pow(obst_vec[i].v, 2));
              obst_state(i, 4) = 0.0;
              obst_state(i, 5) = obst_vec[i].a;
              obst_state(i, 6) = obst_vec[i].b;
              obst_state(i, 7) = obst_vec[i].c;
              obst_state(i, 8) = obst_vec[i].d;

              if (m_args.print_cas)
                spew("Autonaut (lon,lat,psi,u,v) %0.1f %0.1f %0.1f %0.1f %0.1f | Obstacle#%u (lon,lat,psi,u,v) %0.1f %0.1f %0.1f %0.1f %0.1f | Rudder: %d Thruster: %d",
                     asv_state(0), asv_state(1), Angles::degrees(asv_state(2)), asv_state(3), asv_state(4),
                     i, obst_state(i, 0), obst_state(i, 1), Angles::degrees(obst_state(i, 2)), obst_state(i, 3), obst_state(i, 4),
                     rudder_cmd, thruster_act);
            }

            //! Collision Avoidance Algorithm - Compute heading offset/(speed offset)
            sb_mpc->getBestControlOffset(u_os, psi_os, u_pcs, m_heading.value, asv_state, obst_state);

            //! New desired heading
            m_heading.value += psi_os;

            //! Normalize angle
            m_heading.value = Angles::normalizeRadian(m_heading.value);

            //! Send to IMC bus
            dispatch(m_heading);
          }

          //! Speed from DesiredSpeed
          m_speed.value = u_pcs_test;

          //! Send to IMC bus
          dispatch(m_speed);

          // No obstacle in range	- proceed as normal
          if (obst_vec.size() == 0)
          {
            if ((m_timestamp_new - m_timestamp_prev > 1.0))
            {
              m_timestamp_prev = m_timestamp_new;
              if (m_args.print_cas)
                spew("AutoNaut (x,y,psi,u,v): %0.1f %0.1f %0.3f %0.3f %0.1f | Heading: %0.3f Heading offset: %0.1f | Desired Speed %0.3f n_obst: %lu | Rudder: %d Thruster: %d",
                     asv_state(0), asv_state(1), Angles::degrees(asv_state(2)), asv_state(3), asv_state(4),
                     Angles::degrees(m_heading.value), Angles::degrees(psi_os),
                     u_pcs_test, obst_vec.size(), rudder_cmd, thruster_act);
            }
            dispatch(m_heading);
          }
        }
      };
    }
  }
}

DUNE_TASK

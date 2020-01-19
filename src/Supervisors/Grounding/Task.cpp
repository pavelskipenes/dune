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
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Supervisors
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Alberto Dallolio
  namespace Grounding
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Digital Map Path.
      std::string path;
      //! Depth safety threshold.
      int threshold;
      //! Radius.
      int radius;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Latitude and Longitude from map.
      std::vector<double> lat, lon;
      //! Depth from map.
      std::vector<int> depth;
      //! Safety Threshold.
      int m_depth_thr;
      //! Latitude spacing in the map.
      double m_lat_map_spacing;
      //! Longitude spacing in the map.
      double m_lon_map_spacing;
      //! Different Latitudes in the map.
      std::vector<double> m_lat_diff;
      //! Latitude occurrencies.
      int m_lat_occurrencies;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_depth_thr(-30),
        m_lat_map_spacing(0.0),
        m_lon_map_spacing(0.0),
        m_lat_occurrencies(0)
      {
        // Define configuration parameters.
        param("Digital Map Path", m_args.path)
        .defaultValue("/home/autonaut/autonaut-toolchain/L2/dune/misc/TrondheimsFjord.txt")
        .description("Path to the Digital Map");

        param("Depth Safety Threshold", m_args.threshold)
        .defaultValue("-30")
        .description("Depth safety threshold.");

        param("Radius Around Query", m_args.radius)
        .defaultValue("800")
        .units(Units::Meter)
        .description("Radius to check around a queried location.");

        bind<IMC::Abort>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::PlanSpecification>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if(paramChanged(m_args.threshold))
          m_depth_thr = m_args.threshold;
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        // Initialize entity state.
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        readCoordFromFile(m_args.path);
      }

      /*void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }*/

      void
      readCoordFromFile(std::string path)
      {
        std::fstream in(path);

        std::string line;
        double lon_val, lat_val, depth_val;

        while(std::getline(in, line))
        {
          std::istringstream iss(line);
          iss >> lon_val >> lat_val >> depth_val;
          lon.push_back((int)(lon_val / 0.0001) * 0.0001);
          lat.push_back((int)(lat_val / 0.0001) * 0.0001);
          depth.push_back((int)(depth_val / 0.0001) * 0.0001);
        }

        //spew("Coordinates %0.4f %0.4f %d",lat[719], lat[720], depth[0]);
        in.close();
      }

      void
      consume(const IMC::Abort* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (isActive())
          requestDeactivation();
      }

      void
      consume(const IMC::VehicleState* msg)
      {
        //m_dr |= GOT_VSTATE;

        //m_serv_err = (msg->op_mode == IMC::VehicleState::VS_SERVICE) || (msg->op_mode == IMC::VehicleState::VS_ERROR);
      }

      void
      consume(const IMC::PlanSpecification* msg)
      {
        std::vector<IMC::Maneuver> maneuvers_list;

        std::vector<IMC::PlanManeuver*>::const_iterator itr;
        itr = msg->maneuvers.begin();

        Math::Matrix waypoints(msg->maneuvers.size(), 2);

        unsigned i=0;
        // Iterate through plan maneuvers
        for (; itr != msg->maneuvers.end(); ++itr)
        {
          // For now just to GoTos.
          const IMC::Goto* m = static_cast<const IMC::Goto*>((*itr)->data.get());
          spew("LAAAT LOOON: %0.4f %0.4f", Angles::degrees(m->lat), Angles::degrees(m->lon));

          waypoints(i,0) = m->lat;
          waypoints(i,1) = m->lon;
          i=i+1;
        }
        checkGrounding(waypoints);
      }

      void
      checkGrounding(const Math::Matrix& waypoints_list)
      {
        std::vector<int> lookup_index;
        
        m_lat_occurrencies = std::count(lat.begin(),lat.end(),lat[0]); //assume fixed!

        for(unsigned int k=0;k<lat.size()/m_lat_occurrencies; k++)
        {
          m_lat_diff.push_back(lat[k*m_lat_occurrencies]);
          lookup_index.push_back(k*m_lat_occurrencies);
        }

        //! Both are constant all along the map.
        m_lat_map_spacing = WGS84::distance(Angles::radians(m_lat_diff[0]), Angles::radians(lon[0]), 0.0, Angles::radians(m_lat_diff[1]), Angles::radians(lon[0]), 0.0);
        m_lon_map_spacing = WGS84::distance(Angles::radians(m_lat_diff[0]), Angles::radians(lon[0]), 0.0, Angles::radians(m_lat_diff[0]), Angles::radians(lon[1]), 0.0);

        spew("LAT SPACING: %f", m_lat_map_spacing);
        spew("LON SPACING: %f", m_lon_map_spacing);

        //spew("LATITUDES %0.4f %0.4f %0.4f %0.4f %d",m_lat_diff[0], m_lat_diff[1], m_lat_diff[2], m_lat_diff[3], m_lat_diff.size());
        //spew("INDEXES %d %d %d %d %d",lookup_index[0], lookup_index[1], lookup_index[2], lookup_index[3], lookup_index.size());

        for(int i=0; i<waypoints_list.rows(); i++)
        { 
          spew("--------------- WAYPOINT %d ------------", i);
          double lat_d = Angles::degrees(waypoints_list(i,0));
          double lon_d = Angles::degrees(waypoints_list(i,1));

          double lat_prev_distance=10000.0;
          double lon_prev_distance=10000.0;
          double lat_distance;
          double lon_distance;
          unsigned int j;
          int a;

          for(j=0; j<m_lat_diff.size(); j++)
          {
            lat_distance = std::fabs(lat_d-m_lat_diff[j]);
            
            if(lat_distance<=lat_prev_distance)
              lat_prev_distance = lat_distance;
            else
              break; // here j-1 is the minimum!
          }

          //spew("CLOSEST LAT: %f", m_lat_diff[j-1]);
          //spew("INDEX LAT: %d", lookup_index[j-1]);
          //spew("FIRST LON: %f", lon[lookup_index[j-1]]);
          //spew("LAST LON: %f", lon[lookup_index[j-1]+m_lat_occurrencies-1]);

          //Search for the closest longitude from lookup_index[j-1] to lookup_index[j-1+m_lat_occurrencies].
          for(a=lookup_index[j-1]; a<(lookup_index[j-1]+m_lat_occurrencies-1); a++)
          {
            lon_distance = std::fabs(lon_d-lon[a]);
            if(lon_distance<lon_prev_distance)
              lon_prev_distance = lon_distance;
            else
              break; // here a-1 is the minimum!
          }

          spew("QUERY POINT COORDINATES LAT %0.4f LON %0.4f", Angles::degrees(waypoints_list(i,0)), Angles::degrees(waypoints_list(i,1)));
          spew("CLOSEST LOCATION ON MAP: %0.4f %0.4f %d IN LINE %d", lon[a-1], lat[a-1], depth[a-1], a-1);
          spew("DISTANCE FROM QUERIED POINT: %f", WGS84::distance(waypoints_list(i,0), waypoints_list(i,1), 0, Angles::radians(lat[a-1]), Angles::radians(lon[a-1]), 0));

          // Check the surroundings of the wp the vessel is heading to.
          bool waypoint = true; // means more accurate check.
          std::vector<int> waypoint_index;
          waypoint_index.push_back(a-1);
          checkSurroundings(waypoint_index, waypoint);

          //! Do not go on if last waypoint.
          if(i < waypoints_list.rows()-1)
          {
            //double bearing_to_closest, range_to_closest;
            //WGS84::getNEBearingAndRange(waypoints_list(i,0),waypoints_list(i,1),Angles::radians(lat[a-1]),Angles::radians(lon[a-1]),&bearing_to_closest,&range_to_closest);
            //spew("BEARING AND RANGE TO CLOSEST: %f %f", Angles::degrees(bearing_to_closest), range_to_closest);
            double north_to_closest, east_to_closest, down_to_closest;
            WGS84::displacement(waypoints_list(i,0),waypoints_list(i,1),0,Angles::radians(lat[a-1]),Angles::radians(lon[a-1]),0, &north_to_closest, &east_to_closest, &down_to_closest);
            spew("NORTH AND EAST TO CLOSEST: %f %f", north_to_closest, east_to_closest);

            double north_to_next, east_to_next, down_to_next;
            WGS84::displacement(waypoints_list(i,0),waypoints_list(i,1),0,waypoints_list(i+1,0),waypoints_list(i+1,1),0, &north_to_next, &east_to_next, &down_to_next);
            spew("NORTH AND EAST TO NEXT: %f %f", north_to_next, east_to_next);

            bool move_north, move_east;

            //! Choose direction for map lookup based on next wp and closest point positions wrt current wp.
            //! Always assume the closest point is closer than next wp.
            if(north_to_next>north_to_closest)
            {
              move_north = true;                // move north.
              if(east_to_next>east_to_closest)
                move_east = false;               // move east.
              else
                move_east = true;              // move west.
            } else
            {
              move_north = false;               // move south.
              if(east_to_next>east_to_closest)
                move_east = false;
              else
                move_east = true;
            }

            spew("MOVE NORTH AND EAST %d %d", move_north, move_east);

            //! Find map points on the line between two waypoints.
            computeInBetween(waypoints_list, a-1, i, j, move_north, move_east);
          }
        }

      }

      void
      computeInBetween(const Math::Matrix& wp_list, int last, int wp_index, int lat_diff_index, bool move_n, bool move_e)
      {
        double north_closest_to_next, east_closest_to_next, down_closest_to_next;
        std::vector<int> index_points_close;
        int move_lat_index, move_lon_index, get_last;

        // Both north and east displacements must be positive!
        WGS84::displacement(Angles::radians(lat[last]),Angles::radians(lon[last]),0,wp_list(wp_index+1,0),wp_list(wp_index+1,1),0, &north_closest_to_next, &east_closest_to_next, &down_closest_to_next);
        
        spew("NORTH CLOSEST TO NEXT: %f", north_closest_to_next);
        spew("EAST CLOSEST TO NEXT: %f", east_closest_to_next);

        if(std::sqrt(std::pow(east_closest_to_next,2)+std::pow(north_closest_to_next,2)) > std::sqrt(std::pow(m_lon_map_spacing,2)+std::pow(m_lat_map_spacing,2))) //Should always be.
        {
          // index before = higher LAT but lower LONG.
          int number_of_lon_points = std::floor(std::fabs(east_closest_to_next)/m_lon_map_spacing); //(int)
          int number_of_lat_points =  std::floor(std::fabs(north_closest_to_next)/m_lat_map_spacing); //(int)

          spew("HOW MANY LAT POINTS: %d", number_of_lat_points);
          spew("HOW MANY LON POINTS: %d", number_of_lon_points);

          int b, jump=1;
          double range, bearing_to_next_wp, bearing_to_possible_closest, bearing_prev_diff = 10000.0;

          //! Get bearing and range between current and next wp.
          WGS84::getNEBearingAndRange(wp_list(wp_index,0), wp_list(wp_index,1),wp_list(wp_index+1,0), wp_list(wp_index+1,1),&bearing_to_next_wp,&range);

          for(b=0; b<number_of_lat_points; b++)
          { 
            int c=0;
            for(c=0; c<number_of_lon_points; c++)
            {
              //! Get bearing and range between current waypoint and possible waypoint(s) in between before the next waypoint.
              if(move_n == true && move_e == true)
              {
                move_lat_index = lat_diff_index-2-b;
                move_lon_index = last-(m_lat_occurrencies*jump)-c;
                get_last = 1;
                //spew("move_lat_index %d move_lon_index %d", move_lat_index, move_lon_index);
                //spew("NEW LAT: %f", m_lat_diff[move_lat_index]);
                WGS84::getNEBearingAndRange(wp_list(wp_index,0), wp_list(wp_index,1),Angles::radians(m_lat_diff[move_lat_index]),Angles::radians(lon[move_lon_index]),&bearing_to_possible_closest,&range);
              } else if(move_n == true && move_e == false)
              {
                move_lat_index = lat_diff_index-2-b;
                move_lon_index = last-(m_lat_occurrencies*jump)+c;
                get_last = -1;
                WGS84::getNEBearingAndRange(wp_list(wp_index,0), wp_list(wp_index,1),Angles::radians(m_lat_diff[move_lat_index]),Angles::radians(lon[move_lon_index]),&bearing_to_possible_closest,&range);
              } else if(move_n == false && move_e == true)
              {
                move_lat_index = lat_diff_index+b;
                move_lon_index = last+(m_lat_occurrencies*jump)-c;
                get_last = 1;
                WGS84::getNEBearingAndRange(wp_list(wp_index,0), wp_list(wp_index,1),Angles::radians(m_lat_diff[move_lat_index]),Angles::radians(lon[move_lon_index]),&bearing_to_possible_closest,&range);
              } else if(move_n == false && move_e == false)
              {
                move_lat_index = lat_diff_index+b;
                move_lon_index = last+(m_lat_occurrencies*jump)+c;
                get_last = -1;
                WGS84::getNEBearingAndRange(wp_list(wp_index,0), wp_list(wp_index,1),Angles::radians(m_lat_diff[move_lat_index]),Angles::radians(lon[move_lon_index]),&bearing_to_possible_closest,&range);
              }

              double bearing_diff = std::fabs(bearing_to_next_wp-bearing_to_possible_closest);

              if(bearing_diff<bearing_prev_diff)
                bearing_prev_diff = bearing_diff;
              else
                break; // closest point for LAT m_lat_diff[j-2-b] is lon[lookup_index[j-2+c-1]
            }
            jump++;
            bearing_prev_diff = 10000.0;

            spew("CLOSEST LOCATION: LAT %f LON %f DEPTH %d", lat[move_lon_index+get_last], lon[move_lon_index+get_last], depth[move_lon_index+get_last]);
            //spew("FILE LINE %d", move_lon_index+get_last);

            index_points_close.push_back(move_lon_index+get_last);

            if(depth[move_lon_index+get_last]<m_args.threshold)
            {
              bool waypoint = false;
              checkSurroundings(index_points_close, waypoint); // last is the line containing the closest point to the wp.
              // ELSE THROW WARNING.
            }
          }
        }
      }
      

      void
      checkSurroundings(std::vector<int> goto_location, bool wp)
      {
        int depth_400_above=0, depth_800_above=0, depth_400_below=0, depth_800_below=0, depth_200_left=0, depth_400_left=0, depth_800_left=0, depth_200_right=0;
        int depth_400_right=0, depth_800_right=0, depth_800_left_800_below=0, depth_800_right_800_below=0, depth_400_left_400_below=0, depth_400_right_400_below=0;
        int depth_400_left_400_above=0, depth_400_right_400_above=0, depth_800_left_800_above=0, depth_800_right_800_above=0;

        if(wp == true)
        {
          //int lat_checks = (int) std::floor(m_args.radius/m_lat_map_spacing);
          //int lon_checks = (int) std::floor(m_args.radius/m_lon_map_spacing);

          depth_800_left_800_below = depth[goto_location[0]+2*m_lat_occurrencies-4];
          depth_800_right_800_below = depth[goto_location[0]+2*m_lat_occurrencies+4];
          depth_800_below = depth[goto_location[0]+2*m_lat_occurrencies];

          depth_400_left_400_below = depth[goto_location[0]+m_lat_occurrencies-2];
          depth_400_right_400_below = depth[goto_location[0]+m_lat_occurrencies+2];
          depth_400_below = depth[goto_location[0]+m_lat_occurrencies];

          depth_400_left = depth[goto_location[0]-2];
          depth_800_left = depth[goto_location[0]-4];
          depth_400_right = depth[goto_location[0]+2];
          depth_800_right = depth[goto_location[0]+4];

          depth_400_left_400_above = depth[goto_location[0]-m_lat_occurrencies-2];
          depth_400_right_400_above = depth[goto_location[0]-m_lat_occurrencies+2];
          depth_400_above = depth[goto_location[0]-m_lat_occurrencies];

          depth_800_left_800_above = depth[goto_location[0]-2*m_lat_occurrencies-4];
          depth_800_right_800_above = depth[goto_location[0]-2*m_lat_occurrencies+4];
          depth_800_above = depth[goto_location[0]-2*m_lat_occurrencies];

          //spew("GO TO LOCATION LINE %d", goto_location[0]);

          if(depth_800_left_800_below>m_args.threshold)
            spew("Vessel is heading to a point 1131 meters north-east of a shallow point!! LINE:%d DEPTH:%d", goto_location[0]+2*m_lat_occurrencies-4, depth[goto_location[0]+2*m_lat_occurrencies-4]);
          else if(depth_800_right_800_below>m_args.threshold)
            spew("Vessel is heading to a point 1131 meters north-west of a shallow point!! LINE:%d DEPTH:%d", goto_location[0]+2*m_lat_occurrencies+4, depth[goto_location[0]+2*m_lat_occurrencies+4]);
          else if(depth_800_below>m_args.threshold)
            spew("Vessel is heading to a point 800 meters north of a shallow point!! LINE:%d DEPTH:%d", goto_location[0]+2*m_lat_occurrencies, depth[goto_location[0]+2*m_lat_occurrencies]);
          else if(depth_400_left_400_below>m_args.threshold)
            spew("Vessel is heading to a point 565 meters north-east of a shallow point!! LINE:%d DEPTH:%d", goto_location[0]+m_lat_occurrencies-2, depth[goto_location[0]+m_lat_occurrencies-2]);
          else if(depth_400_right_400_below>m_args.threshold)
            spew("Vessel is heading to a point 565 meters north-west of a shallow point!! LINE:%d DEPTH:%d", goto_location[0]+m_lat_occurrencies+2, depth[goto_location[0]+m_lat_occurrencies+2]);
          else if(depth_400_below>m_args.threshold)
            spew("Vessel is heading to a point 400 meters north of a shallow point!! LINE:%d DEPTH:%d", goto_location[0]+m_lat_occurrencies, depth[goto_location[0]+m_lat_occurrencies]);
          else if(depth_400_left_400_above>m_args.threshold)
            spew("Vessel is heading to a point 565 meters south-east of a shallow point!! LINE:%d DEPTH:%d", goto_location[0]-m_lat_occurrencies-2, depth[goto_location[0]-m_lat_occurrencies-2]);
          else if(depth_400_right_400_above>m_args.threshold)
            spew("Vessel is heading to a point 565 meters south-west of a shallow point!! LINE:%d DEPTH:%d", goto_location[0]-m_lat_occurrencies+2, depth[goto_location[0]-m_lat_occurrencies+2]);
          else if(depth_400_above>m_args.threshold)
            spew("Vessel is heading to a point 400 meters south of a shallow point!! LINE:%d DEPTH:%d", goto_location[0]-m_lat_occurrencies, depth[goto_location[0]-m_lat_occurrencies]);
          else if(depth_800_left_800_above>m_args.threshold)
            spew("Vessel is heading to a point 1131 meters south-east of a shallow point!! LINE:%d DEPTH:%d", goto_location[0]-2*m_lat_occurrencies-4, depth[goto_location[0]-2*m_lat_occurrencies-4]);
          else if(depth_800_right_800_above>m_args.threshold)
            spew("Vessel is heading to a point 1131 meters south-west of a shallow point!! LINE:%d DEPTH:%d", goto_location[0]-2*m_lat_occurrencies+4, depth[goto_location[0]-2*m_lat_occurrencies+4]);
          else if(depth_800_above>m_args.threshold)
            spew("Vessel is heading to a point 800 meters south of a shallow point!! LINE:%d DEPTH:%d", goto_location[0]-2*m_lat_occurrencies, depth[goto_location[0]-2*m_lat_occurrencies]);
          else if(depth_400_left>m_args.threshold)
            spew("Vessel is heading to a point 400 meters east of a shallow point!! LINE:%d DEPTH:%d", goto_location[0]-2, depth[goto_location[0]-2]);
          else if(depth_800_left>m_args.threshold)
            spew("Vessel is heading to a point 800 meters east of a shallow point!! LINE:%d DEPTH:%d", goto_location[0]-4, depth[goto_location[0]-4]);
          else if(depth_400_right>m_args.threshold)
            spew("Vessel is heading to a point 400 meters west of a shallow point!! LINE:%d DEPTH:%d", goto_location[0]+2, depth[goto_location[0]+2]);
          else if(depth_800_right>m_args.threshold)
            spew("Vessel is heading to a point 800 meters west of a shallow point!! LINE:%d DEPTH:%d", goto_location[0]+4, depth[goto_location[0]+4]);
          else
            spew("WAYPOINT SURROUNDINGS ARE SAFE!");
        }
        else
        {
          for(int i=0; i<goto_location.size(); i++)
          {
            depth_400_above = depth[goto_location[i]-m_lat_occurrencies]; // 400m NORTH
            depth_400_below = depth[goto_location[i]+m_lat_occurrencies]; // 400m SOUTH
            depth_200_left = depth[goto_location[i]-1]; // 200m WEST
            depth_400_left = depth[goto_location[i]-2]; // 400m WEST
            depth_200_right = depth[goto_location[i]+1]; // 200m WEST
            depth_400_right = depth[goto_location[i]+2]; // 400m WEST
          }
          spew("CLOSE DEPTHS: %d %d %d %d %d %d", depth_400_above, depth_400_below, depth_200_left, depth_400_left, depth_200_right, depth_400_right);

          if(depth_400_above>m_args.threshold)
            spew("Vessel trajectory passing 400 south of a shallow point!!");
          else if(depth_400_below>m_args.threshold)
            spew("Vessel trajectory passing 400 north of a shallow point!!");
          else if(depth_200_left>m_args.threshold)
            spew("Vessel trajectory passing 200 east of a shallow point!!");
          else if(depth_400_left>m_args.threshold)
            spew("Vessel trajectory passing 400 east of a shallow point!!");
          else if(depth_200_right>m_args.threshold)
            spew("Vessel trajectory passing 200 west of a shallow point!!");
          else if(depth_400_right>m_args.threshold)
            spew("Vessel trajectory passing 400 west of a shallow point!!");
          else
            spew("SURROUNDINGS TO THE NEXT WAYPOINT ARE SAFE!");
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK

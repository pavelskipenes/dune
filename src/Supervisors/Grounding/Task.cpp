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
      //! Lat room limit.
      int lat_room_limit;
      //! Lon room limit.
      int lon_room_limit;
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
      //! Locations to Neptus.
      IMC::Surroundings m_locations_to_nept;
      //! String for tuple: locations_to_nept.
      std::string m_loc_tuple;
      //! Index of points to neptus.
      int m_index_to_neptus;
      //! Move East and North;
      bool m_move_north, m_move_east;
      //! Vehicle latitude
      double m_lat_vehicle;
      //! Vehicle longitude
      double m_lon_vehicle;
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
        m_lat_occurrencies(0),
        m_index_to_neptus(0)
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

        param("Latitude Room Limit", m_args.lat_room_limit)
        .defaultValue("5000")
        .units(Units::Meter)
        .description("Latitude room definition.");

        param("Longitude Room Limit", m_args.lon_room_limit)
        .defaultValue("5000")
        .units(Units::Meter)
        .description("Longitude room definition.");

        bind<IMC::Abort>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::PlanSpecification>(this);
        bind<IMC::GpsFix>(this);
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

      //! From GPS Task
        void
        consume(const IMC::GpsFix* msg)
        {
          m_lat_vehicle = msg->lat;
          m_lon_vehicle = msg->lon;
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

        for(int i=0; i<waypoints_list.rows(); i++) //
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
          spew("CLOSEST LOCATION ON MAP: %0.4f %0.4f %d IN LINE %d", lat[a-1], lon[a-1], depth[a-1], a-1);
          spew("DISTANCE FROM QUERIED POINT: %f", WGS84::distance(waypoints_list(i,0), waypoints_list(i,1), 0, Angles::radians(lat[a-1]), Angles::radians(lon[a-1]), 0));

          // Check the surroundings of the wp the vessel is heading to.
          bool waypoint = true; // means more accurate check.
          std::vector<int> waypoint_index;
          waypoint_index.push_back(a-1);
          checkSurroundingsAndRoom(waypoint_index, waypoint);

          // Add closest waypoint to the list of visited waypoints, locations in radians.
          std::string lat_closest, lon_closest, depth_closest;
          lat_closest = std::to_string(Angles::radians(lat[a-1]));
          lon_closest = std::to_string(Angles::radians(lon[a-1]));
          depth_closest = std::to_string(depth[a-1]);
          //std::string index = std::to_string(m_index_to_neptus);
          //m_index_to_neptus++;

          //m_loc_tuple = "lat" + index + "=" + lat_closest + ";" + "lon" + index + "=" + lon_closest + ";" + "depth" + index + "=" + depth_closest + ";";
          m_loc_tuple = "lat=" + lat_closest + ";lon=" + lon_closest + ";depth=" + depth_closest + ";";

          spew("TO NEPTUS: %s", m_loc_tuple.c_str());

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

            //! Choose direction for map lookup based on next wp and closest point positions wrt current wp.
            //! Always assume the closest point is closer than next wp.
            if(north_to_next>north_to_closest)
            {
              m_move_north = true;                // move north.
              if(east_to_next>east_to_closest)
                m_move_east = false;               // move east.
              else
                m_move_east = true;              // move west.
            } else
            {
              m_move_north = false;               // move south.
              if(east_to_next>east_to_closest)
                m_move_east = false;
              else
                m_move_east = true;
            }

            spew("MOVE NORTH AND EAST %d %d", m_move_north, m_move_east);

            //! Find map points on the line between two waypoints.
            computeInBetween(waypoints_list, a-1, i, j);
          }
        }

      }

      void
      computeInBetween(const Math::Matrix& wp_list, int last, int wp_index, int lat_diff_index)
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
          double range_to_next, range_to_possible_closest, bearing_to_next_wp, bearing_to_possible_closest, bearing_prev_diff = 10000.0;

          //! Get bearing and range between current and next wp.
          WGS84::getNEBearingAndRange(wp_list(wp_index,0), wp_list(wp_index,1),wp_list(wp_index+1,0), wp_list(wp_index+1,1),&bearing_to_next_wp,&range_to_next);

          for(b=0; b<number_of_lat_points; b++)
          { 
            int c=0;
            for(c=0; c<number_of_lon_points; c++)
            {
              //! Get bearing and range between current waypoint and possible waypoint(s) in between before the next waypoint.
              if(m_move_north == true && m_move_east == true)
              {
                move_lat_index = lat_diff_index-2-b;
                move_lon_index = last-(m_lat_occurrencies*jump)-c;
                get_last = 1;
                //spew("move_lat_index %d move_lon_index %d", move_lat_index, move_lon_index);
                //spew("NEW LAT: %f", m_lat_diff[move_lat_index]);
                //WGS84::getNEBearingAndRange(wp_list(wp_index,0), wp_list(wp_index,1),Angles::radians(m_lat_diff[move_lat_index]),Angles::radians(lon[move_lon_index]),&bearing_to_possible_closest,&range_to_possible_closest);
              } else if(m_move_north == true && m_move_east == false)
              {
                move_lat_index = lat_diff_index-2-b;
                move_lon_index = last-(m_lat_occurrencies*jump)+c;
                get_last = -1;
                //WGS84::getNEBearingAndRange(wp_list(wp_index,0), wp_list(wp_index,1),Angles::radians(m_lat_diff[move_lat_index]),Angles::radians(lon[move_lon_index]),&bearing_to_possible_closest,&range_to_possible_closest);
              } else if(m_move_north == false && m_move_east == true)
              {
                move_lat_index = lat_diff_index+b;
                move_lon_index = last+(m_lat_occurrencies*jump)-c;
                get_last = 1;
                //WGS84::getNEBearingAndRange(wp_list(wp_index,0), wp_list(wp_index,1),Angles::radians(m_lat_diff[move_lat_index]),Angles::radians(lon[move_lon_index]),&bearing_to_possible_closest,&range_to_possible_closest);
              } else if(m_move_north == false && m_move_east == false)
              {
                move_lat_index = lat_diff_index+b;
                move_lon_index = last+(m_lat_occurrencies*jump)+c;
                get_last = -1;
                //WGS84::getNEBearingAndRange(wp_list(wp_index,0), wp_list(wp_index,1),Angles::radians(m_lat_diff[move_lat_index]),Angles::radians(lon[move_lon_index]),&bearing_to_possible_closest,&range_to_possible_closest);
              }

              WGS84::getNEBearingAndRange(wp_list(wp_index,0), wp_list(wp_index,1),Angles::radians(m_lat_diff[move_lat_index]),Angles::radians(lon[move_lon_index]),&bearing_to_possible_closest,&range_to_possible_closest);

              double bearing_diff = std::fabs(bearing_to_next_wp-bearing_to_possible_closest);

              if(bearing_diff<bearing_prev_diff)
                bearing_prev_diff = bearing_diff;
              else
                break; // closest point for LAT m_lat_diff[j-2-b] is lon[lookup_index[j-2+c-1]
            }

            //spew("CAN THIS BE NEGATIVE??? %f BEARING DIFF %f",range_to_possible_closest, bearing_prev_diff);
            double minimum_distance_to_line = range_to_possible_closest*std::sin(std::fabs(bearing_prev_diff)); //bearing_prev_diff is the bearing to the closest point.

            jump++;
            bearing_prev_diff = 10000.0;

            spew("CLOSEST LOCATION: LAT %f LON %f DEPTH %d WHICH IS %f DISTANT FROM WHERE AUTONAUT WILL PASS", lat[move_lon_index+get_last], lon[move_lon_index+get_last], depth[move_lon_index+get_last], minimum_distance_to_line);
            //spew("FILE LINE %d", move_lon_index+get_last);

            // Add closest waypoint to line to the list of visited waypoints, locations in radians.
            std::string lat_closest_to_line, lon_closest_to_line, depth_closest_to_line;
            lat_closest_to_line = std::to_string(Angles::radians(lat[move_lon_index+get_last]));
            lon_closest_to_line = std::to_string(Angles::radians(lon[move_lon_index+get_last]));
            depth_closest_to_line = std::to_string(depth[move_lon_index+get_last]);
            //std::string index_line = std::to_string(m_index_to_neptus);

            //m_loc_tuple = m_loc_tuple + "lat" + index_line + "=" + lat_closest + ";" + "lon" + index_line + "=" + lon_closest + ";" + "depth" + index_line + "=" + depth_closest + ";";
            m_loc_tuple = m_loc_tuple + "lat=" + lat_closest_to_line + ";lon=" + lon_closest_to_line + ";depth=" + depth_closest_to_line + ";";
            //m_index_to_neptus++;

            index_points_close.push_back(move_lon_index+get_last);

            if(depth[move_lon_index+get_last]<m_args.threshold)
            {
              bool waypoint = false;
              checkSurroundingsAndRoom(index_points_close, waypoint); // last is the line containing the closest point to the wp.
              // ELSE THROW WARNING.
            }
          }
        }
      }
      

      bool
      checkSurroundingsAndRoom(std::vector<int> goto_location, bool wp)
      {
        int depth_400_above=0, depth_800_above=0, depth_400_below=0, depth_800_below=0, depth_200_left=0, depth_400_left=0, depth_800_left=0, depth_200_right=0;
        int depth_400_right=0, depth_800_right=0, depth_800_left_800_below=0, depth_800_right_800_below=0, depth_400_left_400_below=0, depth_400_right_400_below=0;
        int depth_400_left_400_above=0, depth_400_right_400_above=0, depth_800_left_800_above=0, depth_800_right_800_above=0;

        if(wp == true)
        {
          //int lat_checks = (int) std::floor(m_args.radius/m_lat_map_spacing);
          //int lon_checks = (int) std::floor(m_args.radius/m_lon_map_spacing);

          // Put all expanded locations into vector to Neptus.
          depth_800_left_800_below = depth[goto_location[0]+2*m_lat_occurrencies-4];
          m_loc_tuple = m_loc_tuple + "lat" + "=" + std::to_string(Angles::radians(lat[goto_location[0]+2*m_lat_occurrencies-4])) + ";" + "lon" + "=" + std::to_string(Angles::radians(lon[goto_location[0]+2*m_lat_occurrencies-4])) + ";" + "depth" + "=" + std::to_string(depth[goto_location[0]+2*m_lat_occurrencies-4]) + ";";
          depth_800_right_800_below = depth[goto_location[0]+2*m_lat_occurrencies+4];
          m_loc_tuple = m_loc_tuple + "lat" + "=" + std::to_string(Angles::radians(lat[goto_location[0]+2*m_lat_occurrencies+4])) + ";" + "lon" + "=" + std::to_string(Angles::radians(lon[goto_location[0]+2*m_lat_occurrencies+4])) + ";" + "depth" + "=" + std::to_string(depth[goto_location[0]+2*m_lat_occurrencies+4]) + ";";
          depth_800_below = depth[goto_location[0]+2*m_lat_occurrencies];
          m_loc_tuple = m_loc_tuple + "lat" + "=" + std::to_string(Angles::radians(lat[goto_location[0]+2*m_lat_occurrencies])) + ";" + "lon" + "=" + std::to_string(Angles::radians(lon[goto_location[0]+2*m_lat_occurrencies])) + ";" + "depth" + "=" + std::to_string(depth[goto_location[0]+2*m_lat_occurrencies]) + ";";

          depth_400_left_400_below = depth[goto_location[0]+m_lat_occurrencies-2];
          m_loc_tuple = m_loc_tuple + "lat" + "=" + std::to_string(Angles::radians(lat[goto_location[0]+m_lat_occurrencies-2])) + ";" + "lon" + "=" + std::to_string(Angles::radians(lon[goto_location[0]+m_lat_occurrencies-2])) + ";" + "depth" + "=" + std::to_string(depth[goto_location[0]+m_lat_occurrencies-2]) + ";";
          depth_400_right_400_below = depth[goto_location[0]+m_lat_occurrencies+2];
          m_loc_tuple = m_loc_tuple + "lat" + "=" + std::to_string(Angles::radians(lat[goto_location[0]+m_lat_occurrencies+2])) + ";" + "lon" + "=" + std::to_string(Angles::radians(lon[goto_location[0]+m_lat_occurrencies+2])) + ";" + "depth" + "=" + std::to_string(depth[goto_location[0]+m_lat_occurrencies+2]) + ";";
          depth_400_below = depth[goto_location[0]+m_lat_occurrencies];
          m_loc_tuple = m_loc_tuple + "lat" + "=" + std::to_string(Angles::radians(lat[goto_location[0]+m_lat_occurrencies])) + ";" + "lon" + "=" + std::to_string(Angles::radians(lon[goto_location[0]+m_lat_occurrencies])) + ";" + "depth" + "=" + std::to_string(depth[goto_location[0]+m_lat_occurrencies]) + ";";

          depth_400_left = depth[goto_location[0]-2];
          m_loc_tuple = m_loc_tuple + "lat" + "=" + std::to_string(Angles::radians(lat[goto_location[0]-2])) + ";" + "lon" + "=" + std::to_string(Angles::radians(lon[goto_location[0]-2])) + ";" + "depth" + "=" + std::to_string(depth[goto_location[0]-2]) + ";";
          depth_800_left = depth[goto_location[0]-4];
          m_loc_tuple = m_loc_tuple + "lat" + "=" + std::to_string(Angles::radians(lat[goto_location[0]-4])) + ";" + "lon" + "=" + std::to_string(Angles::radians(lon[goto_location[0]-4])) + ";" + "depth" + "=" + std::to_string(depth[goto_location[0]-4]) + ";";
          depth_400_right = depth[goto_location[0]+2];
          m_loc_tuple = m_loc_tuple + "lat" + "=" + std::to_string(Angles::radians(lat[goto_location[0]+2])) + ";" + "lon" + "=" + std::to_string(Angles::radians(lon[goto_location[0]+2])) + ";" + "depth" + "=" + std::to_string(depth[goto_location[0]+2]) + ";";
          depth_800_right = depth[goto_location[0]+4];
          m_loc_tuple = m_loc_tuple + "lat" + "=" + std::to_string(Angles::radians(lat[goto_location[0]+4])) + ";" + "lon" + "=" + std::to_string(Angles::radians(lon[goto_location[0]+4])) + ";" + "depth" + "=" + std::to_string(depth[goto_location[0]+4]) + ";";

          depth_400_left_400_above = depth[goto_location[0]-m_lat_occurrencies-2];
          m_loc_tuple = m_loc_tuple + "lat" + "=" + std::to_string(Angles::radians(lat[goto_location[0]-m_lat_occurrencies-2])) + ";" + "lon" + "=" + std::to_string(Angles::radians(lon[goto_location[0]-m_lat_occurrencies-2])) + ";" + "depth" + "=" + std::to_string(depth[goto_location[0]-m_lat_occurrencies-2]) + ";";
          depth_400_right_400_above = depth[goto_location[0]-m_lat_occurrencies+2];
          m_loc_tuple = m_loc_tuple + "lat" + "=" + std::to_string(Angles::radians(lat[goto_location[0]-m_lat_occurrencies+2])) + ";" + "lon" + "=" + std::to_string(Angles::radians(lon[goto_location[0]-m_lat_occurrencies+2])) + ";" + "depth" + "=" + std::to_string(depth[goto_location[0]-m_lat_occurrencies+2]) + ";";
          depth_400_above = depth[goto_location[0]-m_lat_occurrencies];
          m_loc_tuple = m_loc_tuple + "lat" + "=" + std::to_string(Angles::radians(lat[goto_location[0]-m_lat_occurrencies])) + ";" + "lon" + "=" + std::to_string(Angles::radians(lon[goto_location[0]-m_lat_occurrencies])) + ";" + "depth" + "=" + std::to_string(depth[goto_location[0]-m_lat_occurrencies]) + ";";

          depth_800_left_800_above = depth[goto_location[0]-2*m_lat_occurrencies-4];
          m_loc_tuple = m_loc_tuple + "lat" + "=" + std::to_string(Angles::radians(lat[goto_location[0]-2*m_lat_occurrencies-4])) + ";" + "lon" + "=" + std::to_string(Angles::radians(lon[goto_location[0]-2*m_lat_occurrencies-4])) + ";" + "depth" + "=" + std::to_string(depth[goto_location[0]-2*m_lat_occurrencies-4]) + ";";
          depth_800_right_800_above = depth[goto_location[0]-2*m_lat_occurrencies+4];
          m_loc_tuple = m_loc_tuple + "lat" + "=" + std::to_string(Angles::radians(lat[goto_location[0]-2*m_lat_occurrencies+4])) + ";" + "lon" + "=" + std::to_string(Angles::radians(lon[goto_location[0]-2*m_lat_occurrencies+4])) + ";" + "depth" + "=" + std::to_string(depth[goto_location[0]-2*m_lat_occurrencies+4]) + ";";
          depth_800_above = depth[goto_location[0]-2*m_lat_occurrencies];
          m_loc_tuple = m_loc_tuple + "lat" + "=" + std::to_string(Angles::radians(lat[goto_location[0]-2*m_lat_occurrencies])) + ";" + "lon" + "=" + std::to_string(Angles::radians(lon[goto_location[0]-2*m_lat_occurrencies])) + ";" + "depth" + "=" + std::to_string(depth[goto_location[0]-2*m_lat_occurrencies]) + ";";
          //m_index_to_neptus++;

          spew("TO NEPTUS WAYPOINT SURROUNDINGS: %s", m_loc_tuple.c_str());

          // Check room around waypoint.
          double distance_=0.0; //double lat_distance_above=0.0, lat_distance_below=0.0, lon_distance_above=0.0, lon_distance_below=0.0;
          int depth_=0.0; //int depth_above=0.0, depth_below=0.0;
          int index_ = 1; //int lat_index_above = 1, lat_index_below = 1, lon_index_above = 1, lon_index_below = 1;
          bool land_found = false; //bool land_found_above = false, land_found_below = false, land_found_west = false, land_found_east = false;
          bool limit_dist = false; //bool limit_dist_above = false, limit_dist_below = false, limit_dist_west = false, limit_dist_east = false;

          int line_location_safe; //int line_location_safe_above, line_location_safe_below, line_location_safe_west, line_location_safe_east;
          double distance_safe; //double distance_safe_above, distance_safe_below, distance_safe_west, distance_safe_east;

          // CHECK NORTH.
          while(!limit_dist && !land_found)
          {
            depth_ = depth[goto_location[0]-(m_lat_occurrencies*index_)]; // +400 above
            distance_ = index_*m_lat_map_spacing;//WGS84::distance(m_lat_vehicle, m_lat_vehicle, 0.0, Angles::radians(lat[goto_location[0]-(m_lat_occurrencies*lat_index_above)]), Angles::radians(lon[goto_location[0]-(m_lat_occurrencies*lat_index_above)]), 0.0);

            if(depth_ >= m_args.threshold)
              land_found = true;
            else if(distance_>m_args.lat_room_limit)
              limit_dist = true;
            else
              index_++;
          }
          
          if(limit_dist)
          {
            line_location_safe = goto_location[0]-(m_lat_occurrencies*index_);
            spew("----- LIMIT ABOVE REACHED: %f %f %d ---- DISTANCE: %f", lat[line_location_safe], lon[line_location_safe], depth[line_location_safe], distance_);
            spew("UPPER LIMIT: %f %f %d ---- DISTANCE: %f", lat[line_location_safe], lon[line_location_safe], depth[line_location_safe], distance_);
          }
          else
          {
            line_location_safe = goto_location[0]-(m_lat_occurrencies*(index_-1));
            distance_safe = (index_-1)*m_lat_map_spacing;
            spew("----- DANGEROUS AREA ABOVE: %f %f %d ---- DISTANCE: %f", lat[goto_location[0]-(m_lat_occurrencies*index_)], lon[goto_location[0]-(m_lat_occurrencies*index_)], depth[goto_location[0]-(m_lat_occurrencies*index_)], distance_);
            spew("UPPER LIMIT: %f %f %d ---- DISTANCE: %f", lat[line_location_safe], lon[line_location_safe], depth[line_location_safe], distance_safe);
          }

          // Re-initialize iteration variables.
          distance_ = 0.0;
          distance_safe = 0.0;
          depth_ = 0.0;
          index_ = 1;
          line_location_safe = 0;
          land_found = false;
          limit_dist = false;

          // CHECK SOUTH.
          while(!limit_dist && !land_found)
          {
            depth_ = depth[goto_location[0]+(m_lat_occurrencies*index_)]; // +400 below
            distance_ = index_*m_lat_map_spacing;//WGS84::distance(m_lat_vehicle, m_lat_vehicle, 0.0, Angles::radians(lat[goto_location[0]-(m_lat_occurrencies*lat_index_above)]), Angles::radians(lon[goto_location[0]-(m_lat_occurrencies*lat_index_above)]), 0.0);

            if(depth_ >= m_args.threshold)
              land_found = true;
            else if(distance_>m_args.lat_room_limit)
              limit_dist = true;
            else
              index_++;
          }
          
          if(limit_dist)
          {
            line_location_safe = goto_location[0]+(m_lat_occurrencies*index_);
            spew("----- LIMIT BELOW REACHED: %f %f %d ---- DISTANCE: %f", lat[line_location_safe], lon[line_location_safe], depth[line_location_safe], distance_);
            spew("LOWER LIMIT: %f %f %d ---- DISTANCE: %f", lat[line_location_safe], lon[line_location_safe], depth[line_location_safe], distance_);
          }
          else
          {
            line_location_safe = goto_location[0]+(m_lat_occurrencies*(index_-1));
            distance_safe = (index_-1)*m_lat_map_spacing;
            spew("----- DANGEROUS AREA BELOW: %f %f %d ---- DISTANCE: %f", lat[goto_location[0]+(m_lat_occurrencies*index_)], lon[goto_location[0]+(m_lat_occurrencies*index_)], depth[goto_location[0]+(m_lat_occurrencies*index_)], distance_);
            spew("LOWER LIMIT: %f %f %d ---- DISTANCE: %f", lat[line_location_safe], lon[line_location_safe], depth[line_location_safe], distance_safe);
          }

          // Re-initialize iteration variables.
          distance_ = 0.0;
          distance_safe = 0.0;
          depth_ = 0.0;
          index_ = 1;
          line_location_safe = 0;
          land_found = false;
          limit_dist = false;

          // CHECK EAST.
          while(!limit_dist && !land_found)
          {
            depth_ = depth[goto_location[0]+index_]; // +200 east
            distance_ = index_*m_lon_map_spacing;//WGS84::distance(m_lat_vehicle, m_lat_vehicle, 0.0, Angles::radians(lat[goto_location[0]-(m_lat_occurrencies*lat_index_above)]), Angles::radians(lon[goto_location[0]-(m_lat_occurrencies*lat_index_above)]), 0.0);

            if(depth_ >= m_args.threshold)
              land_found = true;
            else if(distance_>m_args.lat_room_limit)
              limit_dist = true;
            else
              index_++;
          }
          
          if(limit_dist)
          {
            line_location_safe = goto_location[0]+index_;
            spew("----- LIMIT EAST REACHED: %f %f %d ---- DISTANCE: %f", lat[line_location_safe], lon[line_location_safe], depth[line_location_safe], distance_);
            spew("EASTERN LIMIT: %f %f %d ---- DISTANCE: %f", lat[line_location_safe], lon[line_location_safe], depth[line_location_safe], distance_);
          }
          else
          {
            line_location_safe = goto_location[0]+index_-1;
            distance_safe = (index_-1)*m_lon_map_spacing;
            spew("----- DANGEROUS AREA EAST: %f %f %d ---- DISTANCE: %f", lat[goto_location[0]+index_], lon[goto_location[0]+index_], depth[goto_location[0]+index_], distance_);
            spew("EASTERN LIMIT: %f %f %d ---- DISTANCE: %f", lat[line_location_safe], lon[line_location_safe], depth[line_location_safe], distance_safe);
          }

          // Re-initialize iteration variables.
          distance_ = 0.0;
          distance_safe = 0.0;
          depth_ = 0.0;
          index_ = 1;
          line_location_safe = 0;
          land_found = false;
          limit_dist = false;

          // CHECK WEST.
          while(!limit_dist && !land_found)
          {
            depth_ = depth[goto_location[0]-index_]; // +200 east
            distance_ = index_*m_lon_map_spacing;//WGS84::distance(m_lat_vehicle, m_lat_vehicle, 0.0, Angles::radians(lat[goto_location[0]-(m_lat_occurrencies*lat_index_above)]), Angles::radians(lon[goto_location[0]-(m_lat_occurrencies*lat_index_above)]), 0.0);

            if(depth_ >= m_args.threshold)
              land_found = true;
            else if(distance_>m_args.lat_room_limit)
              limit_dist = true;
            else
              index_++;
          }
          
          if(limit_dist)
          {
            line_location_safe = goto_location[0]-index_;
            spew("----- LIMIT WEST REACHED: %f %f %d ---- DISTANCE: %f", lat[line_location_safe], lon[line_location_safe], depth[line_location_safe], distance_);
            spew("WESTERN LIMIT: %f %f %d ---- DISTANCE: %f", lat[line_location_safe], lon[line_location_safe], depth[line_location_safe], distance_);
          }
          else
          {
            line_location_safe = goto_location[0]-index_+1;
            distance_safe = (index_-1)*m_lon_map_spacing;
            spew("----- DANGEROUS AREA WEST: %f %f %d ---- DISTANCE: %f", lat[goto_location[0]-index_], lon[goto_location[0]-index_], depth[goto_location[0]-index_], distance_);
            spew("WESTERN LIMIT: %f %f %d ---- DISTANCE: %f", lat[line_location_safe], lon[line_location_safe], depth[line_location_safe], distance_safe);
          }

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
          {
            spew("WAYPOINT SURROUNDINGS ARE SAFE!");
            return true;
          }            
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
          {
            spew("SURROUNDINGS TO THE NEXT WAYPOINT ARE SAFE!");
            return true;
          }
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

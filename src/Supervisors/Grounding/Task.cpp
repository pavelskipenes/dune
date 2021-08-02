//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Nikolai Lauvås & Alberto Dallolio                                *
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
  //! @author Nikolai Lauvås & Alberto Dallolio
  namespace Grounding
  {
    using DUNE_NAMESPACES;
    struct Arguments
    {
      //! Path to DB file
      std::string db_path;
      //! Path to debug folder
      std::string debug_path;
      //! Map resolution.
      double map_res;
      //! Range around location of interest.
      double range;
      //! Grid size.
      double grid_size;
      //! Surroundings check frequency.
      double surr_check;
      //! GPS entity label.
      std::string elabel_gps;
      //! ID of possible static obstacles.
      std::string static_features;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Debug variable.
      int m_surr_num;
      //! Current Lat and Lon of vehicle.
      double m_current_lat, m_current_lon, m_cog;
      //! Timer.
      Time::Counter<float> m_timer;
      //! GPS entity eid.
      int m_gps_eid;
      //! Static features list.
      std::vector<std::string> m_features;
      // Task arguments
      Arguments m_args;
      // Nautical charts handle.
      SituationalAwareness::NauticalCharts* m_nc;
      // Features handle.
      SituationalAwareness::PointsOfInterest* m_poi;
      
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_surr_num(0),
        m_current_lat(0.0),
        m_current_lon(0.0),
        m_cog(0.0),
        m_nc(NULL)
      {
        param("Digital Map Path", m_args.db_path)
        .defaultValue("")
        .description("Path to digital map DB file");

        param("Debug Path", m_args.debug_path)
        .defaultValue("")
        .description("Path to where debuging files are saved");

        param("Digital Map Resolution", m_args.map_res)
        .units(Units::Meter)
        .defaultValue("")
        .description("Digital Map resolution in meters");

        param("Range Around Location", m_args.range)
        .units(Units::Meter)
        .defaultValue("")
        .description("Radius [m] of circle containing queried locations, around location of interest");

        param("Squared Grid Size", m_args.grid_size)
        .units(Units::Meter)
        .defaultValue("")
        .description("Grid Size");

        param("Surroundings Check Frequency", m_args.surr_check)
        .units(Units::Second)
        .defaultValue("180.0")
        .minimumValue("0.0")
        .description("Frequency at which current vehicles surroundings are observed");

        param("Entity Label - GPS", m_args.elabel_gps)
        .description("Entity label of 'GpsFix' message");

        param("ENC Features", m_args.static_features)
        .defaultValue("")
        .description("List of static ENC features");

        bind<IMC::Abort>(this);
        bind<IMC::PlanSpecification>(this);
        bind<IMC::GpsFix>(this);

      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if(paramChanged(m_args.surr_check))
          m_timer.setTop(m_args.surr_check);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
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

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        try {
          m_nc = new SituationalAwareness::NauticalCharts(m_args.db_path, m_args.map_res);
        } catch(std::runtime_error& e) {
          inf(DTR("Problem opening charts: %s"), e.what());
        }

        try {
          m_poi = new SituationalAwareness::PointsOfInterest(m_args.db_path);
        } catch(std::runtime_error& e) {
          inf(DTR("Problem opening charts: %s"), e.what());
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        //! Set timer for periodic check of surroundings.
        m_timer.setTop(m_args.surr_check);

        //! Retrieve features list from config file.
        std::string s = m_args.static_features;
        std::string delimiter = ",";
        size_t pos = 0;
        std::string token;
        while ((pos = s.find(delimiter)) != std::string::npos) {
            token = s.substr(0, pos);
            //std::cout << token << std::endl;
            m_features.push_back(token);
            s.erase(0, pos + delimiter.length());
        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        try {
         Memory::clear(m_nc);
        }
        catch(std::runtime_error& e) {
          err(DTR("Could not clear Nautical charts class: %s"), e.what());
        }
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
      consume(const IMC::GpsFix* msg)
      {
        if(msg->getSource() != getSystemId() || msg->getSourceEntity() != m_gps_eid)
          return;
        m_current_lat=msg->lat;
        m_current_lon=msg->lon;
        m_cog = msg->cog;

        if(m_timer.overflow())
        {
          //! Check vehicle surroundings.
          NauticalCharts::DepthVector a = m_nc->getWithinRadius(m_current_lat, m_current_lon, m_args.range);
          for (NauticalCharts::DepthVector::iterator itr = a.begin(); itr != a.end(); ++itr)
          {
            inf("%f %f %f", itr->Lat, itr->Lon, itr->Depth);
          }
          //! Is just a variable for debugging m_surr_num.
          m_nc->writeCSVfile(a, m_args.debug_path + "surroundings" + std::to_string(m_surr_num) + ".csv");
          m_surr_num++;

          m_timer.reset();
        }
      }

      void
      consume(const IMC::PlanSpecification* msg)
      {
        std::vector<IMC::Maneuver> maneuvers_list;
        std::vector<double> latitudes;
        std::vector<double> longitudes;
        //Create waypoints matrix: first row has vehicle current position.
        Math::Matrix waypoints(msg->maneuvers.size()+1, 2);
        waypoints(0,0) = m_current_lat;
        waypoints(0,1) = m_current_lon;

        unsigned i=0;
        // Iterate through plan maneuvers
        for (std::vector<IMC::PlanManeuver*>::const_iterator itr = msg->maneuvers.begin(); itr != msg->maneuvers.end(); ++itr)
        {
          // For now just to GoTos.
          const IMC::Goto* m = static_cast<const IMC::Goto*>((*itr)->data.get());
          //spew("LAT LON: %0.4f %0.4f", m->lat, m->lon);

          waypoints(i+1,0) = m->lat;
          waypoints(i+1,1) = m->lon;
          i=i+1;

          latitudes.push_back(m->lat);
          longitudes.push_back(m->lon);
        }

        // Build rectangle around mission area.
        auto max_lat = std::max_element(std::begin(latitudes), std::end(latitudes));
        auto min_lat = std::min_element(std::begin(latitudes), std::end(latitudes));
        auto max_lon = std::max_element(std::begin(longitudes), std::end(longitudes));
        auto min_lon = std::min_element(std::begin(longitudes), std::end(longitudes));
        double north_distance = WGS84::distance(*min_lat, *min_lon, 0, *max_lat, *min_lon, 0);
        double east_distance = WGS84::distance(*min_lat, *min_lon, 0, *min_lat, *max_lon, 0);

        double lat_center = *min_lat;
        double lon_center = *min_lon;
        WGS84::displace((north_distance+500)/2.0,(east_distance+500)/2.0,&lat_center,&lon_center);

        //std::vector<PointsOfInterest::LocationVector> features_location(m_features.size());
        //std::vector<PointsOfInterest::LocationVector> features_location;
        std::vector<double> features_lat;
        std::vector<double> features_lon;

        for(int j=0; j<m_features.size(); j++)
        {
          //features_location[j] = m_poi->getPOIRectangle(lat_center, lon_center, east_distance/2.0, north_distance/2.0, m_features[j]);
          PointsOfInterest::LocationVector current_feature = m_poi->getPOIRectangle(lat_center, lon_center, east_distance/2.0, north_distance/2.0, m_features[j]);
          spew("THERE ARE %d OF %s", current_feature.size(), m_features[j].c_str());
          if(!current_feature.empty())
          {
            //features_location.push_back(current_feature);
            for (LocationData::LocationVector::const_iterator itr = current_feature.begin(); itr != current_feature.end(); ++itr)
            {
              features_lat.push_back(itr->Lat);
              features_lon.push_back(itr->Lon);
              //distPoint2line(p1, v0, v1)
            }
          }
          m_poi->writeCSVfile(current_feature, m_args.debug_path + "features/" + m_features[j] + ".csv");
          inf("File written");
        }

        for(int j=1; j<waypoints.rows(); j++)
        {
          // Depthmap based grounding check
          spew("from (%0.4f, %0.4f) to (%0.4f, %0.4f)", Angles::degrees(waypoints(j-1,0)), Angles::degrees(waypoints(j-1,1)), Angles::degrees(waypoints(j,0)), Angles::degrees(waypoints(j,1)));
          std::string directory = m_args.debug_path + "dune_transect_" + std::to_string(j) + ".csv";
          std::pair<NauticalCharts::DepthVector, LocationData::LocationVector> transectcheck= m_nc->checkTransect(waypoints(j-1,0), waypoints(j-1,1), waypoints(j,0), waypoints(j,1));
          m_nc->writeCSVfile(transectcheck.first, directory);
          spew("%lu", transectcheck.second.size());
          if(transectcheck.second.size() !=0) {
            war(DTR("Transect is NOT safe!"));
            //inf("Aborted because of grounding (depthmap based)");
            //IMC::Abort abort;
            //abort.setDestination(getSystemId());
            //dispatch(abort);
          } else {
            inf("Supervisor.Grounding: Transect is safe!");
          }
          
        /*
         // DEPARE based grounding check
          std::string directory = m_args.debug_path + "dune_transect_" + std::to_string(j) + ".csv";
          NauticalCharts::DEPAREVector transectCorridor = m_nc->getDEPARECorridor(waypoints(j-1,0), waypoints(j-1,1), waypoints(j,0), waypoints(j,1), 20);
          m_nc->writeCSVfile(transectCorridor, directory);
          if(!m_nc->isDepthAbove(transectCorridor, 10)) {
            inf("Aborted because of grounding (depare based)");
            IMC::Abort abort;
            abort.setDestination(getSystemId());
            dispatch(abort);
          } else {
            inf("No grounding detected, maneuver approved");
          }*/


          // Check if there are features close to the transect.
          for(int k=0; k<features_lat.size(); k++)
          {
            // Points need to be transformed wrt center.
            double lat_start;
            double lon_start;
            double lat_end;
            double lon_end;
            double dummy_depth;

            WGS84::displacement(lat_center,lon_center,0.0,features_lat[k], features_lon[k],0.0,&features_lat[k], &features_lon[k],&dummy_depth);
            WGS84::displacement(lat_center,lon_center,0.0,waypoints(j-1,0), waypoints(j-1,1),0.0,&lat_start,&lon_start,&dummy_depth);
            WGS84::displacement(lat_center,lon_center,0.0,waypoints(j,0), waypoints(j,1),0.0,&lat_end,&lon_end,&dummy_depth);
            // Points need to be referenced to geometrical center.
            double d = distPoint2line(features_lat[k], features_lon[k], lat_start, lon_start, lat_end, lon_end);
            spew("DISTANCE: %f",d);
          }
        }
      }

      double distPoint2line(double lat_point, double lon_point, double lat_start, double lon_start, double lat_end, double lon_end)
      {
        Math::Matrix point(1,3);
        point(0,0) = lat_point;
        point(0,1) = lon_point;
        point(0,2) = 0;

        Math::Matrix start(1,3);
        start(0,0) = lat_start;
        start(0,1) = lon_start;
        start(0,2) = 0;

        Math::Matrix end(1,3);
        end(0,0) = lat_end;
        end(0,1) = lon_end;
        end(0,2) = 0;

        Math::Matrix a = start-end;
        Math::Matrix b = point-end;

        Math::Matrix c(1,3);
        c.cross(a,b);
        double d = c.norm_2()/a.norm_2();
        return d;
        /*
        Eigen::Vector3d a;
        Eigen::Vector3d b;
        a << (q1 - q2), 0;
        b << (p1 - q2), 0;

        Eigen::Vector3d c = a.cross(b);
        double d = c.norm()/a.norm();
        return d;
        */
      }

      void
      readCoordFromFile(std::string path)
      {
        std::vector<double> lat, lon;
        std::fstream in(path);

        std::string line;
        double lat_val, lon_val;

        while(std::getline(in, line))
        {
          std::istringstream iss(line);
          iss >> lat_val >> lon_val;
          lat.push_back(Angles::radians(lat_val));
          lon.push_back(Angles::radians(lon_val));
        }

        in.close();
      }

      //! Main loop.
      void
      onMain(void)
      {
        /*
        
        PointsOfInterest::LocationVector a= m_poi->getPOISquare(double(Angles::radians(63.5916861)), double(Angles::radians(8.4477)), 20000.0, "CTNARE");
        m_poi->writeCSVfile(a, m_args.debug_path + "bcn.csv");
        inf("File written");*/

        
        
        //m_nc->writeCSVfile(m_nc->getSquare(DUNE::Math::Angles::radians(63.4531), DUNE::Math::Angles::radians(10.4299), 500.0, 0), m_args.debug_path + "out.csv");

        //SituationalAwareness::PathPlanner* m_pp = new SituationalAwareness::PathPlanner(m_args.db_path, m_args.map_res);
        //inf("Start pp");
        
        //m_pp->writeCSVfile(m_pp->findPath(DUNE::Math::Angles::radians(63.4531), DUNE::Math::Angles::radians(10.4299), DUNE::Math::Angles::radians(63.4491), DUNE::Math::Angles::radians(10.4175)), m_args.debug_path + "pathplanner.csv");
        //2.4Km, <0sec
        //m_pp->writeCSVfile(m_pp->findPath(DUNE::Math::Angles::radians(63.4531), DUNE::Math::Angles::radians(10.4299), DUNE::Math::Angles::radians(63.4484), DUNE::Math::Angles::radians(10.3834)), m_args.debug_path + "pathplanner.csv");
        //9.8Km 11sec
        
        //m_pp->writeCSVfile(m_pp->findPath(DUNE::Math::Angles::radians(63.4531), DUNE::Math::Angles::radians(10.4299), DUNE::Math::Angles::radians(63.5384), DUNE::Math::Angles::radians(10.386)), m_args.debug_path + "pathplanner.csv");
        //40Km 4:44min 100m circle Much better result than 71m
        //m_pp->writeCSVfile(m_pp->findPath(DUNE::Math::Angles::radians(63.4626), DUNE::Math::Angles::radians(9.97906), DUNE::Math::Angles::radians(63.3007), DUNE::Math::Angles::radians(9.1013), 100.0), m_args.debug_path + "pathplanner.csv");
        
        //m_pp->writeCSVfile(m_pp->findPath(DUNE::Math::Angles::radians(63.478510716968124), DUNE::Math::Angles::radians(10.21862083494441), DUNE::Math::Angles::radians(63.6535), DUNE::Math::Angles::radians(9.76916), 100.0), m_args.debug_path + "pathplanner.csv");
        //inf("Finished pp");
        
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
//***************************************************************************
// Copyright 2013-2020 Norwegian University of Science and Technology (NTNU)*
// Department of Engineering Cybernetics (ITK)                              *
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
// Author: Nikolai Lauvås                                                   *
//***************************************************************************

// DUNE headers.
#include <DUNE/Coordinates.hpp>
#include <DUNE/Math.hpp>
#include <DUNE/System/Error.hpp>
#include <DUNE/SituationalAwareness/NauticalCharts.hpp>

// Other C++
#include <fstream>
#include <iostream>

namespace DUNE
{
  namespace SituationalAwareness
  {
    NauticalCharts::NauticalCharts(const std::string &dbPath, double dbGridSize):DUNE::SituationalAwareness::LocationData(dbPath), gridSize(dbGridSize) {
    }
    NauticalCharts::~NauticalCharts(void){
    }

    std::vector<double> NauticalCharts::getSingleDepth(double Lat, double Lon, double grid_size)
    {
      std::vector<double> ranges, bearings, depths;
      std::vector<double> return_vec;
      double range, bearing;

      //std::string db_statement
      std::string c_stmt = "select Depth from 'depthmapRad' where Lat = " + std::to_string(Lat) + " and Lon = " + std::to_string(Lon) + ";";
      
      try
      {
        Database::Statement* iterator_stmt = new Database::Statement(c_stmt.c_str(), *db_connection);
        std::pair<bool, double> DBDepth;

        while(iterator_stmt->execute())
        {
          *iterator_stmt >> DBDepth;
          
          if(std::get<0>(DBDepth))
          {
            iterator_stmt->reset();
            delete iterator_stmt;
            return_vec.push_back(std::get<1>(DBDepth));
            return return_vec;
          }
        }
      } catch(std::runtime_error& e)
      {
        throw Error("Problem while executing statement \"" + c_stmt + "\": ", System::Error::getLastMessage());
      }

      printf("This location does not exist in the map, retrieving the closest . . . \n");

      NauticalCharts::DepthVector four_closest = getClosestDepths(Lat, Lon, grid_size);
      for(NauticalCharts::DepthVector::iterator itr = four_closest.begin(); itr != four_closest.end(); ++itr)
      {
        //std::cout << itr->Lat << " " << itr->Lon << "\n";        
        Coordinates::WGS84::getNEBearingAndRange(Lat,Lon, itr->Lat, itr->Lon, &bearing, &range);
        ranges.push_back(std::fabs(range));
        bearings.push_back(bearing);
        depths.push_back(itr->Depth);
      }
      int min_index = std::min_element(ranges.begin(),ranges.end()) - ranges.begin();
      double min_range = *std::min_element(ranges.begin(), ranges.end());
      return_vec.push_back(depths[min_index]);
      return_vec.push_back(min_range);
      return_vec.push_back(bearings[min_index]);
      
      return return_vec;
    }

    NauticalCharts::DepthVector NauticalCharts::getClosestDepths(double Lat, double Lon, double grid_size)
    {
      double disp = 2*grid_size;
      std::string c_stmt = "select min(Lat+Lon), Lat, Lon, Depth from (select Lat, Lon, Depth from depthmapRad where " + makeSquareWhereClause(Lat, Lon, disp) + ") where Lat >= " + std::to_string(Lat) + " and Lon >= " + std::to_string(Lon) +
      " union select max(Lat+Lon), Lat, Lon, Depth from (select Lat, Lon, Depth from depthmapRad where " + makeSquareWhereClause(Lat, Lon, disp) + ") where Lat <= " + std::to_string(Lat) + " and Lon <= " + std::to_string(Lon) + 
      " union select min(Lat-Lon), Lat, Lon, Depth from (select Lat, Lon, Depth from depthmapRad where " + makeSquareWhereClause(Lat, Lon, disp) + ") where Lat >= " + std::to_string(Lat) + " and Lon <= " + std::to_string(Lon) + 
      " union select max(Lat-Lon), Lat, Lon, Depth from (select Lat, Lon, Depth from depthmapRad where " + makeSquareWhereClause(Lat, Lon, disp) + ") where Lat <= " + std::to_string(Lat) + " and Lon >= " + std::to_string(Lon) + ";";
      
      //std::cout << c_stmt;
      NauticalCharts::DepthVector returnMap;
      try{
        Database::Statement* iterator_stmt = new Database::Statement(c_stmt.c_str(), *db_connection);
        std::pair<bool, double> DBLat;
        std::pair<bool, double> DBLon;
        std::pair<bool, double> DBDepth;
        while (iterator_stmt->execute())
        {

          *iterator_stmt >> DBLat >> DBLat >> DBLon >> DBDepth; // Four because max/min column gets discarded
          if(std::get<0>(DBLat)) { // If row not empty (only checks first element)
            returnMap.push_back(NauticalCharts::DepthDataContainer_t(std::get<1>(DBLat), std::get<1>(DBLon), std::get<1>(DBDepth)));
          }
        }
        iterator_stmt->reset();
        delete iterator_stmt;
      } catch(std::runtime_error& e) {
        throw Error("Problem while executing statement \"" + c_stmt + "\": ", System::Error::getLastMessage());
      }
      return returnMap;
    }

    NauticalCharts::DepthVector NauticalCharts::getSquare(const NauticalCharts::LocationDataContainer_t &center, double half_size, double minDepth_m) {
      return this->getSquare(center.Lat, center.Lon, half_size, minDepth_m);
    }

    NauticalCharts::DepthVector NauticalCharts::getSquare(double Lat, double Lon, double half_size, double minDepth_m)
    {
      //select * from depthmapRad where depth > 20 and Lat between 1.1 and 1.101
     std::string c_stmt = "select Lat, Lon, Depth from depthmapRad where Depth > " +std::to_string(minDepth_m)+ " and " + makeSquareWhereClause(Lat, Lon, half_size) + ";";
      NauticalCharts::DepthVector returnMap;
      try{
        Database::Statement* iterator_stmt = new Database::Statement(c_stmt.c_str(), *db_connection);
        std::pair<bool, double> DBLat;
        std::pair<bool, double> DBLon;
        std::pair<bool, double> DBDepth;
        while (iterator_stmt->execute())
        {
          *iterator_stmt >> DBLat >> DBLon >> DBDepth;
          if(std::get<0>(DBLat)) { // If row not NULL
            returnMap.push_back(NauticalCharts::DepthDataContainer_t(std::get<1>(DBLat), std::get<1>(DBLon), std::get<1>(DBDepth)));
          }
        }
        iterator_stmt->reset();
        delete iterator_stmt;
      } catch(std::runtime_error& e) {
        throw Error("Problem while executing statement \"" + c_stmt + "\": ", System::Error::getLastMessage());
      }
      return returnMap;
    }

    NauticalCharts::DepthVector NauticalCharts::getWithinRadius(const NauticalCharts::LocationDataContainer_t &center, double radius, double minDepth_m) {
      NauticalCharts::DepthVector returnVector = NauticalCharts::DepthVector();
      NauticalCharts::DepthVector square = this->getSquare(center, radius, minDepth_m);
      for (NauticalCharts::DepthVector::iterator itr = square.begin(); itr != square.end(); ++itr)
      {
        double distance = Coordinates::WGS84::distance(center.Lat,center.Lon, 0, itr->Lat, itr->Lon, 0);
        if(distance<=radius) {
          returnVector.push_back(NauticalCharts::DepthDataContainer_t(itr->Lat, itr->Lon, itr->Depth));
        }
      }
      return returnVector;
    }

    NauticalCharts::DepthVector NauticalCharts::getWithinRadius(double Lat, double Lon, double radius, double minDepth_m)
    {
      NauticalCharts::LocationDataContainer_t center = NauticalCharts::LocationDataContainer_t(Lat, Lon);
      return this->getWithinRadius(center, radius, minDepth_m);
    }


    bool NauticalCharts::writeCSVfile(const NauticalCharts::DepthVector &depths, const std::string &outputFile)
    {
      std::ofstream file_(outputFile);
      file_ << "Lat,Lon,Depth"  << "\r\n";
      for (NauticalCharts::DepthVector::const_iterator itr = depths.begin(); itr != depths.end(); ++itr)
      {
        file_ << Math::Angles::degrees(itr->Lat) << "," << Math::Angles::degrees(itr->Lon) << "," << Math::Angles::degrees(itr->Depth) << "\r\n";
      }
      return false;
    }

    std::pair<NauticalCharts::DepthVector, NauticalCharts::LocationVector>
    NauticalCharts::checkTransect(double startLat, double startLon, double endLat, double endLon, double steps) { // Add depth limit
      float stepLat= (endLat-startLat)/steps;
      float stepLon= (endLon-startLon)/steps;
      NauticalCharts::LocationVector groundingPositions=NauticalCharts::LocationVector();
      NauticalCharts::DepthVector returnVector = NauticalCharts::DepthVector();
      
      // Iterate through points on line between start- and end-position
      for(unsigned int step=0; step<steps;step++) {

        // Get four closest depth soundings
        NauticalCharts::DepthVector fourClosest = this->getClosestDepths(startLat+step*stepLat, startLon+step*stepLon, gridSize);

        // If less than four depth soundings available, it's probably ground
        if(fourClosest.size() < 4) {
          groundingPositions.push_back(NauticalCharts::LocationDataContainer_t(startLat+step*stepLat, startLon+step*stepLon));
        } else {

          // Select the closest of the four depth soundings
          double closest_distance=-1;
          NauticalCharts::DepthDataContainer_t closest= NauticalCharts::DepthDataContainer_t();
          for (NauticalCharts::DepthVector::iterator itr = fourClosest.begin(); itr != fourClosest.end(); ++itr) {
            double distance = Coordinates::WGS84::distance(startLat+step*stepLat, startLon+step*stepLon,0, itr->Lat, itr->Lon,0);
            if (distance < closest_distance or closest_distance < 0.0) {
              closest_distance=distance;
              closest = *itr;
            }
          }
          returnVector.push_back(closest);
        }
      }
      return std::pair<NauticalCharts::DepthVector, NauticalCharts::LocationVector>(returnVector,groundingPositions);
    }


    std::pair<NauticalCharts::DepthVector, NauticalCharts::LocationVector>
    NauticalCharts::checkTransect(double startLat, double startLon, double endLat, double endLon) {
      double distance = Coordinates::WGS84::distance(startLat, startLon,0, endLat, endLon,0);
      return NauticalCharts::checkTransect(startLat, startLon, endLat, endLon, distance/gridSize);
    }

    NauticalCharts::DepthVector NauticalCharts::getCorridor(double startLat, double startLon, double endLat, double endLon, double steps, double corridorWidth) {
      float stepLat= (endLat-startLat)/steps;
      float stepLon= (endLon-startLon)/steps;

      NauticalCharts::DepthVector returnDepthVector = this->getSquare(startLat, startLon, corridorWidth);
      for(unsigned int step=1; step<steps;step++) {
        NauticalCharts::DepthVector squareAroundCurrentStep = this->getSquare(startLat+step*stepLat, startLon+step*stepLon, corridorWidth);

        returnDepthVector.insert(returnDepthVector.end(), squareAroundCurrentStep.begin(), squareAroundCurrentStep.end());
      }
      return returnDepthVector;
    }

    NauticalCharts::DepthVector NauticalCharts::getCorridor(double startLat, double startLon, double endLat, double endLon, double corridorWidth) {
      double distance = Coordinates::WGS84::distance(startLat, startLon,0, endLat, endLon,0);
      return getCorridor(startLat, startLon, endLat, endLon, distance/(gridSize/2*std::sqrt(2)), corridorWidth);
    }
  } // End of namespace SituationalAwareness
} // End of namespace DUNE

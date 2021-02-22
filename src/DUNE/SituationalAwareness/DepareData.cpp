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
#include <DUNE/SituationalAwareness/DepareData.hpp>
#include <DUNE/Coordinates.hpp>
#include <DUNE/Math.hpp>
#include <DUNE/System/Error.hpp>

// Other C++
#include <fstream>
#include <iostream>

namespace DUNE
{
  namespace SituationalAwareness
  {
    DepareData::DepareData(std::string dbPath, double dbGridSize):DUNE::SituationalAwareness::LocationData(dbPath), gridSize(dbGridSize){
    }

    DepareData::~DepareData(void) {
    }
    
    /// DEPARE functions////////////////////////////////////////////////////////////////////////////
    DepareData::DEPAREVector DepareData::getWithinRadius(double Lat, double Lon, double radius)
    {
      DepareData::DEPAREVector returnVector = DepareData::DEPAREVector();
      DepareData::DEPAREVector square = this->getSquare(Lat,Lon, radius);
      for (DepareData::DEPAREVector::iterator itr = square.begin(); itr != square.end(); ++itr)
      {
        double distance = Coordinates::WGS84::distance(Lat, Lon,0, itr->Lat, itr->Lon,0);
        if(distance<=radius) {
          returnVector.push_back(DepareData::DEPAREDataContainer_t(itr->Lat, itr->Lon,itr->DRVAL1,itr->DRVAL2));
        }
      }
      return returnVector;
    }

    DepareData::DEPAREVector DepareData::getWithinRadius(double Lat, double Lon, double drval2, double radius)
    {
      DepareData::DEPAREVector returnVector = DepareData::DEPAREVector();
      DepareData::DEPAREVector square = this->getSquare(Lat,Lon,drval2,radius);
      for (DepareData::DEPAREVector::iterator itr = square.begin(); itr != square.end(); ++itr)
      {
        double distance = Coordinates::WGS84::distance(Lat, Lon,0, itr->Lat, itr->Lon,0);
        if(distance<=radius) {
          returnVector.push_back(DepareData::DEPAREDataContainer_t(itr->Lat, itr->Lon,itr->DRVAL1,itr->DRVAL2));
        }
      }
      return returnVector;
    }




    bool
    DepareData::isDepthAbove(DepareData::DEPAREVector DEPAREinputVector, double minDepth) {
      for (DepareData::DEPAREVector::iterator itr = DEPAREinputVector.begin(); itr != DEPAREinputVector.end(); ++itr)
      {
        if(itr->DRVAL1<minDepth)
          return false;
      }
      return true;
    }

    DepareData::DEPAREVector DepareData::getSquare(double Lat, double Lon, double half_size)
    {
      std::string tablename = "DEPARE";
      std::string c_stmt = "select Lat, Lon, DRVAL1, DRVAL2 from " + tablename + " where " + makeSquareWhereClause(Lat, Lon, half_size) + ";";
      std::cout << Angles::degrees(Lat) << " " << Angles::degrees(Lon);
      std::cout << c_stmt;
      DepareData::DEPAREVector returnMap;
      try{
        Database::Statement* iterator_stmt = new Database::Statement(c_stmt.c_str(), *db_connection);
        std::pair<bool, double> SQLLat;
        std::pair<bool, double> SQLLon;
        std::pair<bool, double> SQLDRVAL1;
        std::pair<bool, double> SQLDRVAL2;
        unsigned int cntr=0;
        while (iterator_stmt->execute())
        {
          *iterator_stmt >> SQLLat >> SQLLon >> SQLDRVAL1 >> SQLDRVAL2;
          if(std::get<0>(SQLLat)) {
            returnMap.push_back(DepareData::DEPAREDataContainer_t(std::get<1>(SQLLat), std::get<1>(SQLLon),std::get<1>(SQLDRVAL1),std::get<1>(SQLDRVAL2)));
            cntr++;
          }
        }
        iterator_stmt->reset();
        delete iterator_stmt;
      } catch(std::runtime_error& e) {
        throw Error("Problem while executing statement \"" + c_stmt + "\": ", System::Error::getLastMessage());
      }
      return returnMap;
    }

    DepareData::DEPAREVector DepareData::getSquare(double Lat, double Lon, double drval2, double half_size)
    {
      std::string tablename = "DEPARE";
      std::string c_stmt = "select Lat, Lon, DRVAL1, DRVAL2 from " + tablename + " where DRVAL2=" +std::to_string(drval2) + " and " + makeSquareWhereClause(Lat, Lon, half_size) + ";";
      std::cout << c_stmt << std::endl;
      DepareData::DEPAREVector returnMap;
      try{
        Database::Statement* iterator_stmt = new Database::Statement(c_stmt.c_str(), *db_connection);
        std::pair<bool, double> SQLLat;
        std::pair<bool, double> SQLLon;
        std::pair<bool, double> SQLDRVAL1;
        std::pair<bool, double> SQLDRVAL2;
        unsigned int cntr=0;
        while (iterator_stmt->execute())
        {
          *iterator_stmt >> SQLLat >> SQLLon >> SQLDRVAL1 >> SQLDRVAL2;
          if(std::get<0>(SQLLat)) {
            returnMap.push_back(DepareData::DEPAREDataContainer_t(std::get<1>(SQLLat), std::get<1>(SQLLon),std::get<1>(SQLDRVAL1),std::get<1>(SQLDRVAL2)));
            cntr++;
          }
        }
        iterator_stmt->reset();
        delete iterator_stmt;
      } catch(std::runtime_error& e) {
        throw Error("Problem while executing statement \"" + c_stmt + "\": ", System::Error::getLastMessage());
      }
      return returnMap;
    }

    DepareData::DEPAREVector DepareData::getRectangle(double Lat, double Lon, double drval2, double east_from_center, double north_from_center)
    {
      std::string tablename = "DEPARE";
      std::string c_stmt = "select Lat, Lon from " + tablename + " where DRVAL2=" +std::to_string(drval2) + " and " + makeRectangleWhereClause(Lat, Lon, east_from_center, north_from_center) + ";";
      std::cout << c_stmt << std::endl;
      DepareData::DEPAREVector returnMap;
      try{
        Database::Statement* iterator_stmt = new Database::Statement(c_stmt.c_str(), *db_connection);
        std::pair<bool, double> SQLLat;
        std::pair<bool, double> SQLLon;
        std::pair<bool, double> SQLDRVAL1;
        std::pair<bool, double> SQLDRVAL2;
        unsigned int cntr=0;
        while (iterator_stmt->execute())
        {
          *iterator_stmt >> SQLLat >> SQLLon >> SQLDRVAL1 >> SQLDRVAL2;
          if(std::get<0>(SQLLat)) {
            returnMap.push_back(DepareData::DEPAREDataContainer_t(std::get<1>(SQLLat), std::get<1>(SQLLon),std::get<1>(SQLDRVAL1),std::get<1>(SQLDRVAL2)));
            cntr++;
          }
        }
        iterator_stmt->reset();
        delete iterator_stmt;
      } catch(std::runtime_error& e) {
        throw Error("Problem while executing statement \"" + c_stmt + "\": ", System::Error::getLastMessage());
      }
      return returnMap;
    }
    
    bool DepareData::writeCSVfile(DepareData::DEPAREVector depths, std::string outputFile)
    {
      std::ofstream file_(outputFile);
        for (DepareData::DEPAREVector::iterator itr = depths.begin(); itr != depths.end(); ++itr)
        {
          file_ << Math::Angles::degrees(itr->Lat) << "," << Math::Angles::degrees(itr->Lon) << "," << itr->DRVAL1 << "," << itr->DRVAL2 << "\r\n";
        }
      return false;
    }

    DepareData::DEPAREVector DepareData::getCorridor(double startLat, double startLon, double endLat, double endLon, double steps, double corridorWidth) {
      float stepLat= (endLat-startLat)/steps;
      float stepLon= (endLon-startLon)/steps;

      DepareData::DEPAREVector returnDEPAREVector = this->getSquare(startLat, startLon, corridorWidth);
      for(unsigned int step=1; step<steps;step++) {
        DepareData::DEPAREVector squareAroundCurrentStep = this->getSquare(startLat+step*stepLat, startLon+step*stepLon, corridorWidth);

        returnDEPAREVector.insert(returnDEPAREVector.end(), squareAroundCurrentStep.begin(), squareAroundCurrentStep.end());
      }
      return returnDEPAREVector;
    }

    DepareData::DEPAREVector DepareData::getCorridor(double startLat, double startLon, double endLat, double endLon, double corridorWidth) {
      double distance = Coordinates::WGS84::distance(startLat, startLon,0, endLat, endLon,0);
      return getCorridor(startLat, startLon, endLat, endLon, distance/(gridSize/2*std::sqrt(2)), corridorWidth);
    }

    Math::Matrix DepareData::getCAS(double vessel_lat, double vessel_lon, double drval2, double size, double cog, const Eigen::Matrix<double,-1,2> waypoints_, std::vector<double> directions){
      DepareData::DEPAREVector dep_vec = this->getSquare(vessel_lat, vessel_lon, drval2, size);
      int offset = 2;
      Math::Matrix ranges(directions.size(),2);
      Math::Matrix ret(directions.size(),4,0.0);

      Eigen::MatrixXd waypoints(waypoints_.rows(), waypoints_.cols()); waypoints = waypoints_;

      double psi_path = atan2(waypoints(1,1) - waypoints(0,1),
							waypoints(1,0) - waypoints(0,0)); // path course

      for(int i=0; i<directions.size(); i++)
      {
        ranges(i,0) = normalize_angle(psi_path + Angles::radians(directions[i] - offset));
        ranges(i,1) = normalize_angle(psi_path + Angles::radians(directions[i] + offset));
        //std::cout << "range 1 " << Angles::degrees(ranges(i,0)) << " range 2 " << Angles::degrees(ranges(i,1)) << std::endl;
        std::cout << "cog: " << cog << "psi_path: " << psi_path << std::endl;
      }

      for(DepareData::DEPAREVector::iterator itr = dep_vec.begin(); itr != dep_vec.end(); ++itr)
      {
        double bearing, range;
        WGS84::getNEBearingAndRange(vessel_lat, vessel_lon, itr->Lat, itr->Lon, &bearing, &range);
        //std::cout << " bearing " << Angles::degrees(bearing) << " range " << range << std::endl;

        for(int j=0; j<ranges.rows(); j++)
        {
          if(bearing>=ranges(j,0) && bearing<=ranges(j,1) && range<size)
          {
            if(ret(j,3) == 0.0)
            {
              ret(j,0)=itr->Lat;
              ret(j,1)=itr->Lon;
              ret(j,2)=Angles::degrees(bearing); //bearing; normalize_angle(bearing-cog)
              ret(j,3)=range;
            }
            else if(range < ret(j,3)){
              ret(j,0)=itr->Lat;
              ret(j,1)=itr->Lon;
              ret(j,2)=Angles::degrees(bearing); //bearing; normalize_angle(bearing-cog)
              ret(j,3)=range;
              //std::cout << "Lat " << itr->Lat << " Lon " << itr->Lon << " bearing " << Angles::degrees(normalize_angle(bearing-cog)) << " range " << range;
            }
          }
        }
      }

      return ret;
    }

    double DepareData::normalize_angle(double angle)
    {
      while(angle <= -M_PI) angle += 2*M_PI;
      while (angle > M_PI) angle -= 2*M_PI;
      return angle;
    }
  }
}

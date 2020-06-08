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
#include <DUNE/DUNE.hpp>
#include <DUNE/System/Error.hpp>
#include <DUNE/SituationalAwareness/PointsOfInterest.hpp>

// Other C++
    #include <fstream>
#include <iostream>

namespace DUNE
{
  namespace SituationalAwareness
  {
    PointsOfInterest::PointsOfInterest(std::string dbPath):DUNE::SituationalAwareness::LocationData(dbPath) {
    }

    PointsOfInterest::~PointsOfInterest(void){
    }

    PointsOfInterest::LocationVector PointsOfInterest::getPOISquare(double Lat, double Lon, double half_size, std::string tablename)
    {
      std::string c_stmt = "select Lat, Lon from " + tablename + " where " + makeSquareWhereClause(Lat, Lon, half_size);

      PointsOfInterest::LocationVector returnVector;
      try{
        Database::Statement* iterator_stmt = new Database::Statement(c_stmt.c_str(), *db_connection);
        std::pair<bool, double> SQLLat;
        std::pair<bool, double> SQLLon;
        unsigned int cntr=0;
        while (iterator_stmt->execute())
        {
          *iterator_stmt >> SQLLat >> SQLLon;
          if(std::get<0>(SQLLat)) {
            returnVector.push_back(PointsOfInterest::LocationDataContainer_t(std::get<1>(SQLLat), std::get<1>(SQLLon)));
            cntr++;
          }
        }
        iterator_stmt->reset();
        delete iterator_stmt;
      } catch(std::runtime_error& e) {
        throw Error("Problem while executing statement \"" + c_stmt + "\": ", System::Error::getLastMessage());
      }
      return returnVector;
    }

    PointsOfInterest::LocationVector PointsOfInterest::getPOIRectangle(double Lat, double Lon, double east_from_center, double north_from_center, std::string tablename)
    {
      std::string c_stmt = "select Lat, Lon from " + tablename + " where " + makeRectangleWhereClause(Lat, Lon, east_from_center, north_from_center);

      PointsOfInterest::LocationVector returnVector;
      try{
        Database::Statement* iterator_stmt = new Database::Statement(c_stmt.c_str(), *db_connection);
        std::pair<bool, double> SQLLat;
        std::pair<bool, double> SQLLon;
        unsigned int cntr=0;
        while (iterator_stmt->execute())
        {
          *iterator_stmt >> SQLLat >> SQLLon;
          if(std::get<0>(SQLLat)) {
            returnVector.push_back(PointsOfInterest::LocationDataContainer_t(std::get<1>(SQLLat), std::get<1>(SQLLon)));
            cntr++;
          }
        }
        iterator_stmt->reset();
        delete iterator_stmt;
      } catch(std::runtime_error& e) {
        throw Error("Problem while executing statement \"" + c_stmt + "\": ", System::Error::getLastMessage());
      }
      return returnVector;
    }
  } // End of namespace SituationalAwareness
} // End of namespace DUNE

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
//#include <DUNE/DUNE.hpp>
#include <DUNE/SituationalAwareness/LocationData.hpp>
#include <DUNE/Coordinates.hpp>
#include <DUNE/Math.hpp>
// Other C++
#include <fstream>
#include <iostream>

namespace DUNE
{
  namespace SituationalAwareness
  {
    LocationData::LocationData(const std::string &dbPath) {
      db_connection = NULL;
        try {
          db_connection = new Database::Connection(dbPath.c_str(), Database::Connection::CF_RDONLY);
        } catch(std::runtime_error& e) {
          throw Error("Could not make DB connection: ", System::Error::getLastMessage());
        }
    }

    LocationData::~LocationData(void) {
      if (db_connection!=NULL) {
        delete db_connection;
      }
    }
    
    std::string LocationData::makeSquareWhereClause(double Lat, double Lon, double half_size) {
      double lat_minus_displaced = Lat;
      DUNE::Coordinates::WGS84::displace(-half_size,0.0,&lat_minus_displaced, &Lon);

      double lat_plus_displaced = Lat;
      DUNE::Coordinates::WGS84::displace(half_size,0.0,&lat_plus_displaced, &Lon);

      double lon_minus_displaced = Lon;
      DUNE::Coordinates::WGS84::displace(0.0,-half_size,&Lat, &lon_minus_displaced);

      double lon_plus_displaced = Lon;
      DUNE::Coordinates::WGS84::displace(0.0,half_size,&Lat, &lon_plus_displaced);

      return std::string("Lat between " + std::to_string(lat_minus_displaced) + " and " + std::to_string(lat_plus_displaced) + " and Lon between " + std::to_string(lon_minus_displaced) + " and " + std::to_string(lon_plus_displaced));
    }

    std::string LocationData::makeRectangleWhereClause(double Lat, double Lon, double east_from_center, double north_from_center) {
      double lat_minus_displaced = Lat;
      DUNE::Coordinates::WGS84::displace(-north_from_center,0.0,&lat_minus_displaced, &Lon);

      double lat_plus_displaced = Lat;
      DUNE::Coordinates::WGS84::displace(north_from_center,0.0,&lat_plus_displaced, &Lon);

      double lon_minus_displaced = Lon;
      DUNE::Coordinates::WGS84::displace(0.0,-east_from_center,&Lat, &lon_minus_displaced);

      double lon_plus_displaced = Lon;
      DUNE::Coordinates::WGS84::displace(0.0,east_from_center,&Lat, &lon_plus_displaced);

      return std::string("Lat between " + std::to_string(lat_minus_displaced) + " and " + std::to_string(lat_plus_displaced) + " and Lon between " + std::to_string(lon_minus_displaced) + " and " + std::to_string(lon_plus_displaced));
    }

    bool LocationData::writeCSVfile(const LocationData::LocationVector &inVec, const std::string &outputFile) {
      std::ofstream file_(outputFile);
      file_ << "Lat,Lon"  << "\r\n";
      for (LocationData::LocationVector::const_iterator itr = inVec.begin(); itr != inVec.end(); ++itr)
      {
        file_ << DUNE::Math::Angles::degrees(itr->Lat) << "," << DUNE::Math::Angles::degrees(itr->Lon) << "\r\n";
      }
      return false;
    }

  } // End of namespace SituationalAwareness
} // End of namespace DUNE
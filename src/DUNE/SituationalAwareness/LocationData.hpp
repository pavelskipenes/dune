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
// Author: Nikolai Lauvås                                                  *
//***************************************************************************

#ifndef DUNE_SITUATIONALAWARENESS_LOCATIONDATA_HPP_INCLUDED_
#define DUNE_SITUATIONALAWARENESS_LOCATIONDATA_HPP_INCLUDED_

// DUNE headers.
//#include <DUNE/Config.hpp>
#include <DUNE/System.hpp>
#include <DUNE/Database.hpp>


namespace DUNE
{
  namespace SituationalAwareness
  {

    //! The NauticalCharts class 
    class LocationData
    {
    public:
      class Error: public std::runtime_error
      {
      public:
        Error(std::string op, std::string msg):
          std::runtime_error("Error (" + op + "): " + msg)
        { }
      };
      //! Data structure for storing location data 
      struct LocationDataContainer_t 
      {// Could this just be a std::pair<double,double>?
        double Lat;
        double Lon;
        LocationDataContainer_t() {
          Lat = 0.0;
          Lon = 0.0;
        }
        LocationDataContainer_t(double inLat, double inLon) {
          Lat = inLat;
          Lon = inLon;
        }
        bool operator<(const LocationDataContainer_t& rhs) const {
          if (this->Lat < rhs.Lat) return true;
          if (rhs.Lat < this->Lat) return false;
      
          // a==b for primary condition, go to secondary
          if (this->Lon < rhs.Lon) return true;
          if (rhs.Lon < this->Lon) return false;
          return false;
        }
      };
      typedef std::vector<LocationDataContainer_t> LocationVector;

      LocationData(const std::string &dbPath);
      ~LocationData(void);
      bool writeCSVfile(const LocationVector &inVec, const std::string &outputFile);
    protected:
      std::string makeSquareWhereClause(double Lat, double Lon, double half_size);
      std::string makeRectangleWhereClause(double Lat, double Lon, double east_from_center, double north_from_center);
      Database::Connection* db_connection;
    };
  }
}


#endif // END define DUNE_SITUATIONALAWARENESS_LOCATIONDATA_HPP_INCLUDED_

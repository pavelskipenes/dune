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

#ifndef DUNE_SITUATIONALAWARENESS_DEPAREDATA_HPP_INCLUDED_
#define DUNE_SITUATIONALAWARENESS_DEPAREDATA_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/SituationalAwareness/LocationData.hpp>
#include <DUNE/DUNE.hpp>


namespace DUNE
{
  namespace SituationalAwareness
  {

    //! The DepareData class 
    class DepareData: public LocationData
    {
    public:
      //! Data structure for storing depth range data, DRVAL1=mindepth, DRVAL2=maxdepth
      struct DEPAREDataContainer_t: LocationDataContainer_t
      {
        double DRVAL1;
        double DRVAL2;
        DEPAREDataContainer_t(): LocationDataContainer_t(0.0,0.0) {
          DRVAL1 = 0.0;
          DRVAL2 = 0.0;
        }
        DEPAREDataContainer_t(double inLat, double inLon, double inDRVAL1, double inDRVAL2): LocationDataContainer_t(inLat,inLon) {
          DRVAL1 = inDRVAL1;
          DRVAL2 = inDRVAL2;
        }
      };
      typedef std::vector<DEPAREDataContainer_t> DEPAREVector;

      DepareData(std::string dbPath, double dbGridSize);
      ~DepareData(void);
      
      bool isDepthAbove(DEPAREVector DEPAREinputVector, double minDepth);

      bool writeCSVfile(DEPAREVector depths, std::string outputFile);
      
      DEPAREVector getWithinRadius(double Lat, double Lon, double radius);

      DEPAREVector getWithinRadius(double Lat, double Lon, double drval2, double radius);

      DEPAREVector getCorridor(double startLat, double startLon, double endLat, double endLon, double steps, double corridorWidth);

      DEPAREVector getCorridor(double startLat, double startLon, double endLat, double endLon, double corridorWidth);

      DEPAREVector getSquare(double Lat, double Lon, double half_size);

      DEPAREVector getSquare(double Lat, double Lon, double drval2, double half_size);

      DEPAREVector getRectangle(double Lat, double Lon, double drval2, double east_from_center, double north_from_center);

      Math::Matrix getCAS(double vessel_lat, double vessel_lon, double drval2, double size, double cog, std::vector<double> directions);

      double normalize_angle(double angle);
    private:
        double gridSize;
    };
  }
}


#endif // END define DUNE_SITUATIONALAWARENESS_DEPAREDATA_HPP_INCLUDED_

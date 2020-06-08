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

#ifndef DUNE_SITUATIONALAWARENESS_NAUTICALCHARTS_HPP_INCLUDED_
#define DUNE_SITUATIONALAWARENESS_NAUTICALCHARTS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/SituationalAwareness/LocationData.hpp>


namespace DUNE
{
  namespace SituationalAwareness
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM NauticalCharts;

    //! The NauticalCharts class 
    class NauticalCharts: public LocationData
    {
    public:

      //! Data structure for storing depth data 
      struct DepthDataContainer_t: LocationDataContainer_t
      {
        double Depth;
        DepthDataContainer_t(): LocationDataContainer_t(0.0,0.0) {
          Depth = 0.0;
        } 
        DepthDataContainer_t(double inLat, double inLon, double inDepth): LocationDataContainer_t(inLat,inLon) {
          Depth = inDepth;
        }
      };
      
      typedef std::vector<DepthDataContainer_t> DepthVector;
      
      //! NauticalCharts constructor.
      NauticalCharts(const std::string &dbPath, double dbGridSize);
      
      //! NauticalCharts destructor.
      ~NauticalCharts(void);

      ///////////////////////////// DepthmapRad functions

      //! Returns the depth of the queried location if it exists. 
      //! Returns the depth of the location closest to the queried one, their distance and bearing.
      std::vector<double>
      getSingleDepth(double Lat, double Lon, double grid_size);

      DepthVector
      getClosestDepths(double Lat, double Lon, double grid_size);

      DepthVector
      getSquare(const LocationDataContainer_t &center, double half_size, double minDepth_m = 0.0);

      DepthVector
      getSquare(double Lat, double Lon, double half_size, double minDepth_m = 0.0);

      DepthVector
      getWithinRadius(double Lat, double Lon, double radius, double minDepth_m = 0.0);

      DepthVector
      getWithinRadius(const LocationDataContainer_t &center, double radius, double minDepth_m = 0.0);

      bool writeCSVfile(const DepthVector &depths, const std::string &outputFile);

      std::pair<DepthVector, LocationVector>
      checkTransect(double startLat, double startLon, double endLat, double endLon, double steps);

      std::pair<DepthVector, LocationVector>
      checkTransect(double startLat, double startLon, double endLat, double endLon);

      DepthVector
      getCorridor(double startLat, double startLon, double endLat, double endLon, double steps, double corridorWidth);
      
      DepthVector
      getCorridor(double startLat, double startLon, double endLat, double endLon, double corridorWidth);
    private:
      double gridSize;
    };
  }
}


#endif

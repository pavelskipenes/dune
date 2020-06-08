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

#ifndef DUNE_SITUATIONALAWARENESS_PATHPLANNER_HPP_INCLUDED_
#define DUNE_SITUATIONALAWARENESS_PATHPLANNER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/SituationalAwareness/NauticalCharts.hpp>
#include <map>

namespace DUNE
{
  namespace SituationalAwareness
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM PathPlanner;

    //! The NauticalCharts class 
    class PathPlanner: private DUNE::SituationalAwareness::NauticalCharts
    {
      public:
        class Error: public std::runtime_error
        {
          public:
            Error(std::string op, std::string msg):
              std::runtime_error("PathPlanner error (" + op + "): " + msg)
            { }
        };
        //! Data structure for search
        class searchData_t
        {
          public:
            double f;
            double g;
            LocationDataContainer_t parent;
            searchData_t(): f(0.0), g(0.0), parent() {
            } 
            searchData_t(double inF, double inG, double inLatParent, double inLonParent): f(inF), g(inG), parent(inLatParent, inLonParent)  {
            }
        };

        typedef std::pair<LocationDataContainer_t, searchData_t> searchNode;
        typedef std::map<LocationDataContainer_t, searchData_t> searchNodeMap;

        PathPlanner(const std::string &dbPath, double dbGridSize);
        ~PathPlanner(void);
        
        searchNodeMap findPath(double startLat, double startLon, double endLat, double endLon, unsigned int squareSize = 75, double goalDistance = 37.0, unsigned int maxIter = 1000000);
        
        searchNodeMap tracePath(PathPlanner::searchNodeMap::const_iterator endNode, const searchNodeMap &inNodeMap);
        void writeCSVfile(const searchNodeMap &inMap, const std::string &outputFile);
      private:
        double calcH(const LocationDataContainer_t &node, const LocationDataContainer_t &endNode);
        double calcG(const LocationDataContainer_t &node, const LocationDataContainer_t &endNode);
        
        bool isNodeGoal(const LocationDataContainer_t &node, const LocationDataContainer_t &goalNode, double distanceLimit);
        bool isNodeInMap(PathPlanner::searchNodeMap::const_iterator nodeItr, const searchNodeMap &inMap);

        searchNodeMap depthVecToSearchMap(const NauticalCharts::DepthVector &inDepthVec);

        searchNodeMap::const_iterator findParent(searchNodeMap::const_iterator inNodeItr, const searchNodeMap &inNodeMap);
        searchNodeMap::iterator findLowestf(searchNodeMap &inNodeMap);
    };
  }
}


#endif

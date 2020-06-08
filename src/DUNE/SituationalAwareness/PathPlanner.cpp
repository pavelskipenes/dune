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
#include <DUNE/SituationalAwareness/PathPlanner.hpp>
#include <DUNE/Coordinates.hpp>
#include <DUNE/Math.hpp>
// Other C++
#include <fstream>
#include <iostream>
namespace DUNE
{
  namespace SituationalAwareness
  {
    PathPlanner::PathPlanner(const std::string &dbPath, double dbGridSize):NauticalCharts(dbPath, dbGridSize){
      
    }
    PathPlanner::~PathPlanner(void){

    }
    ////////////////////////////////////////////////////////////// Path planning ////////////////////////////


    double PathPlanner::calcH(const PathPlanner::LocationDataContainer_t &node, const PathPlanner::LocationDataContainer_t &endNode) {
      // Diagonal Distance heuristic
      //return std::max( std::abs(nodeLon-endLon), std::abs(nodeLat-endLat) );
      // Diagonal Distance heuristic WGS84
      // return std::max(WGS84::distance(nodeLat, nodeLon,0, nodeLat, endLon,0), WGS84::distance(nodeLat, nodeLon,0, endLat, nodeLon,0));
      // Euclidian distance heuristic
      return Coordinates::WGS84::distance(node.Lat, node.Lon,0, endNode.Lat, endNode.Lon,0);
      // Manhattan distance heuristic WGS84
      // return WGS84::distance(nodeLat, nodeLon,0, nodeLat, endLon,0+WGS84::distance(nodeLat, nodeLon,0, endLat, nodeLon,0);
    }
    double PathPlanner::calcG(const PathPlanner::LocationDataContainer_t &fromNode, const PathPlanner::LocationDataContainer_t &toNode) {
      // Euclidian distance
      return Coordinates::WGS84::distance(fromNode.Lat, fromNode.Lon,0, toNode.Lat, toNode.Lon,0);
    }

    PathPlanner::searchNodeMap::iterator PathPlanner::findLowestf(PathPlanner::searchNodeMap &inNodeMap) {
      PathPlanner::searchNodeMap::iterator lowestFNode = inNodeMap.end();
      for (PathPlanner::searchNodeMap::iterator itr = inNodeMap.begin(); itr != inNodeMap.end(); ++itr) {
        if(lowestFNode==inNodeMap.end() || itr->second.f < lowestFNode->second.f) {
          lowestFNode = itr;
        }
      }
      return lowestFNode;
    }

    bool PathPlanner::isNodeGoal(const PathPlanner::LocationDataContainer_t &node, const PathPlanner::LocationDataContainer_t &goalNode, double distanceLimit){
      
      if( distanceLimit < Coordinates::WGS84::distance(node.Lat, node.Lon,0, goalNode.Lat, goalNode.Lon,0) ) {
        return false;
      } else {
        return true;
      }
    }

    bool PathPlanner::isNodeInMap(PathPlanner::searchNodeMap::const_iterator nodeItr, const PathPlanner::searchNodeMap &inMap) {
      PathPlanner::searchNodeMap::const_iterator match = inMap.find(nodeItr->first);
        if(match != inMap.end())
          return true;

      return false;
    }

    PathPlanner::searchNodeMap PathPlanner::depthVecToSearchMap(const NauticalCharts::DepthVector &inDepthVec) {
      PathPlanner::searchNodeMap returnNodes;
      for (NauticalCharts::DepthVector::const_iterator itr = inDepthVec.begin(); itr != inDepthVec.end(); ++itr) {
        returnNodes.emplace(LocationDataContainer_t(itr->Lat, itr->Lon), PathPlanner::searchData_t(0.0, -1.0, 0.0, 0.0));
      }
      return returnNodes;
    }

    PathPlanner::searchNodeMap::const_iterator PathPlanner::findParent(PathPlanner::searchNodeMap::const_iterator inNodeItr,const PathPlanner::searchNodeMap &inNodeMap) {
      return inNodeMap.find(inNodeItr->second.parent);
    }
    
    PathPlanner::searchNodeMap PathPlanner::tracePath(PathPlanner::searchNodeMap::const_iterator endNode, const PathPlanner::searchNodeMap &inNodeMap) {
      PathPlanner::searchNodeMap returnMap;
      unsigned int maxIter = 10000;
      unsigned int iter = 0;
      PathPlanner::searchNodeMap::const_iterator node = findParent(endNode, inNodeMap);
      while(!inNodeMap.empty()) {
        returnMap.emplace(*node);
        if(iter >= maxIter) {
          printf("maxIter reached");
          break;
        }
        if(node->second.f== -1) {
          printf("Start reached");
          break;
        }
        if(node == inNodeMap.end()) {
          printf("Parent not found");
          break;
        }
        node = findParent(node, inNodeMap);
        iter++;
      }
      return returnMap;
    }

    //! A* algorithm using depthmapRad
    PathPlanner::searchNodeMap PathPlanner::findPath(double startLat, double startLon, double endLat, double endLon,unsigned int squareSize,double goalDistance, unsigned int maxIter) {
      unsigned int iterations = 0;
      double minDepth_m = 0.0;
      PathPlanner::searchNodeMap openNodes;
      PathPlanner::searchNodeMap closedNodes;
      LocationDataContainer_t endLocation = LocationDataContainer_t(endLat, endLon);
      openNodes.emplace(LocationDataContainer_t(startLat, startLon),PathPlanner::searchData_t(-1.0, 0.0, 0.0, 0.0));

      // Allocating loop-variables
      PathPlanner::searchNodeMap::iterator currentNodeItr;
      std::pair<PathPlanner::searchNodeMap::iterator, bool> currentPair;
      PathPlanner::searchNode currentNode;
      double tentativeG;
      PathPlanner::searchNodeMap::iterator currentSuccessorNodeItr;
      while(!openNodes.empty()) {
        if(iterations >= maxIter) {
          break;
        }
        // Get element with smallest f, remove from openNodes and add to closedNodes
        currentNodeItr = findLowestf(openNodes);
        
        currentPair = closedNodes.emplace(*currentNodeItr);
        currentNode = *(currentPair.first);
        
        openNodes.erase(currentNodeItr);
        // Check if current node is goal
        if(isNodeGoal(currentNode.first, endLocation, goalDistance)) {
          printf("FoundDest, writing open\n");
          writeCSVfile(openNodes, "/home/nikolai/debugdune/ppopen.csv");
          printf("FoundDest, writing closed\n");
          writeCSVfile(closedNodes, "/home/nikolai/debugdune/ppclosed.csv");
          printf("Tracing path\n");
          return tracePath(currentPair.first,closedNodes);
        }
        
        // Get successors(in a square) and set parent location
        searchNodeMap successor = depthVecToSearchMap(this->getWithinRadius(currentNode.first, squareSize, minDepth_m));
        //searchNodeMap successor = depthVecToSearchMap(this->getSquare(currentNode.first, squareSize));

        // Process successors
        for (PathPlanner::searchNodeMap::iterator itr = successor.begin(); itr != successor.end(); ++itr) {
          tentativeG = currentNode.second.g + calcG(currentNode.first, itr->first);
          currentSuccessorNodeItr = openNodes.find(itr->first);
          if(currentSuccessorNodeItr != openNodes.end()) {//Is node already in openNodes
            if(tentativeG < currentSuccessorNodeItr->second.g) {//Has the g value improved?
              currentSuccessorNodeItr->second.parent = currentNode.first;
              currentSuccessorNodeItr->second.g = tentativeG;
              currentSuccessorNodeItr->second.f = currentSuccessorNodeItr->second.g + calcH(currentSuccessorNodeItr->first, endLocation);
              if(!isNodeInMap(currentSuccessorNodeItr, closedNodes)) {//Has the node neighbour of the node been expanded before?
                openNodes.emplace(*currentSuccessorNodeItr);
              }
            }
          } else {// Node not in Opennodes
            if(!isNodeInMap(itr, closedNodes)) {
              itr->second.parent = currentNode.first;
              itr->second.g = tentativeG;
              itr->second.f = itr->second.g + calcH(itr->first, endLocation);
              openNodes.emplace(*itr);
            }
          }
        }
        if(openNodes.empty()) { // Just for debugging
          printf("Empty Opennodes!\n");
          break;
        }/*
        if (iterations%1000 == 0) {
          printf("i: %u \n", iterations);
          //writeCSVfile(closedNodes, "/home/nikolai/debugdune/ppclosed.csv");
        }*/
        iterations++;
      }
      return closedNodes;
    }
    

    void PathPlanner::writeCSVfile(const PathPlanner::searchNodeMap &inMap, const std::string &outputFile)
    {
      std::ofstream file_(outputFile);
      file_ << "Lat,Lon,LatParent,LonParent,f,g"  << "\r\n";
      for (PathPlanner::searchNodeMap::const_iterator itr = inMap.begin(); itr != inMap.end(); ++itr)
      {
        file_ << Math::Angles::degrees(itr->first.Lat) << "," << Math::Angles::degrees(itr->first.Lon) << "," << Math::Angles::degrees(itr->second.parent.Lat) << "," << Math::Angles::degrees(itr->second.parent.Lon) << "," << itr->second.f << "," << itr->second.g << "\r\n";// << "," << itr->second.h << "\r\n";
      }
    }
  }
}

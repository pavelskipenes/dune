//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
#include <iostream>
#include <sstream>
#include <eigen3/Eigen/Dense>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  //! Operational Limits are operating parameters and conditions,
  //! chosen among all system/components, which, together, define
  //! the domain of the safe operation of the system in all foreseen
  //! system states (operation, maintenance, commissioning).
  //!
  //! %OperationalLimits is the task responsible to monitor system
  //! states and enter safety modes when/if necessary to guarantee
  //! mechanical/electrical safety of the device.
  //!
  //! @author Eduardo Marques
  namespace OperationalLimits
  {
    using DUNE_NAMESPACES;

    //! Task arguments.
    struct Arguments
    {
      //! Initial maximum depth.
      fp32_t i_max_depth;
      //! Initial minimum altitude.
      fp32_t i_min_altitude;
      //! Initial maximum altitude.
      fp32_t i_max_altitude;
      //! Initial minimum speed.
      fp32_t i_min_speed;
      //! Initial maximum speed.
      fp32_t i_max_speed;
      //! Initial maximum vertical rate.
      fp32_t i_max_vrate;
      //! Maximum depth hysteresis value.
      fp32_t h_max_depth;
      //! Minimum altitude hysteresis value.
      fp32_t h_min_altitude;
      //! Minimum depth to monitor altitude limits.
      fp32_t min_depth;
      //! Polygon interval.
      double interval;
      //! timeout, in seconds, for replies
      int reply_timeout;
      //! Activate limits check.
      bool activate;
      //! Drifting time before Iridium message is sent.
      double drifting_timeout;
    };

    //! Period for testing the area operational limits
    static const double c_atest_period = 30.0;

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Limit error struct
      struct LError
      {
        //! Error description
        std::string desc;
        //! Value 1
        double v1;
        //! Value 2
        double v2;
      };

      //! Mapping of error bitmask to op limits error.
      typedef std::map<uint8_t, LError> LErrorMap;

      //! Task arguments.
      Arguments m_args;
      //! Error map.
      LErrorMap m_errs;
      //! Limits in use.
      IMC::OperationalLimits m_ol;
      //! Last EstimatedState message
      IMC::EstimatedState m_estate;
      //! USV speed over ground.
      double m_sog;
      //! Error mask.
      uint8_t m_emask;
      //! Cache control message.
      IMC::CacheControl m_cc;
      //! Time of next area limit test.
      double m_atest_time;
      //! Use configuration flag.
      bool m_use_cfg;
      //! Absolute maximum depth
      float m_max_depth;
      //! New operational limits have arrived.
      bool m_oplims_arrived;
      //! Vertices of operational area.
      IMC::MessageList<IMC::PolygonVertex> m_oplims_loc;
      //! Timer.
      Time::Counter<float> m_counter; //m_counter_debug,bool sent_debug;
      //! Drifting timer.
      Time::Counter<float> m_timer_drifting;
      //! Check interval.
      double m_interval;
      //! Check vehicle state
      int m_vehiclestate;
      //! Transmission request id
      int m_reqid;
      //! Activate limits check.
      bool m_activate;
      //! True if vessel is driting.
      bool m_drifting;
      //! Drifting timeout.
      double m_drift_timeout;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
        m_atest_time(0),
        m_use_cfg(true),
        m_max_depth(50.0),
        m_oplims_arrived(false),
        m_reqid(0),
        m_drifting(false)
        //sent_debug(false)
      {
        param("Activate limits check", m_args.activate)
        .defaultValue("true")
        .description("Activates or deactivates limits check.");

        param("Check interval", m_args.interval)
        .units(Units::Second)
        .defaultValue("600")
        .description("Interval between checks of the USV location");

        param("Drifting timeout", m_args.drifting_timeout)
          .defaultValue("300")
          .minimumValue("1");

        param("Iridium Message timeout", m_args.reply_timeout)
          .defaultValue("60")
          .minimumValue("30");

        param("Initial Setting - Maximum Depth", m_args.i_max_depth)
        .units(Units::Meter)
        .defaultValue("-1")
        .description("Initial setting for maximum depth");

        param("Initial Setting - Minimum Altitude", m_args.i_min_altitude)
        .units(Units::Meter)
        .defaultValue("-1")
        .description("Initial setting for minimum altitude");

        param("Initial Setting - Maximum Altitude", m_args.i_max_altitude)
        .units(Units::Meter)
        .defaultValue("-1")
        .description("Initial setting for maximum altitude");

        param("Initial Setting - Minimum Speed", m_args.i_min_speed)
        .units(Units::MeterPerSecond)
        .defaultValue("-1")
        .description("Initial setting for minimum speed");

        param("Initial Setting - Maximum Speed", m_args.i_max_speed)
        .units(Units::MeterPerSecond)
        .defaultValue("-1")
        .description("Initial setting for maximum speed");

        param("Initial Setting - Maximum Vertical Rate", m_args.i_max_vrate)
        .units(Units::MeterPerSecond)
        .defaultValue("-1")
        .description("Initial setting for maximum vertical rate");

        param("Hysteresis Threshold - Maximum Depth", m_args.h_max_depth)
        .defaultValue("0.0")
        .description("Hysteresis value for maximum depth");

        param("Hysteresis Threshold - Minimum Altitude", m_args.h_min_altitude)
        .defaultValue("0.0")
        .description("Hysteresis value for minimum altitude");

        param("Minimum Depth to Check Altitude", m_args.min_depth)
        .minimumValue("0.0")
        .defaultValue("0.2")
        .description("Minimum depth required to check altitude operational limits");

        m_ctx.config.get("General", "Absolute Maximum Depth", "50.0", m_max_depth);

        bind<IMC::EstimatedState>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::GetOperationalLimits>(this);
        bind<IMC::OperationalLimits>(this);
      }

      //! Initialize op limits mask
      //! @param[out] v value of the limit
      //! @param[in] dfl value for the limit
      //! @param[in] mask initial mask
      void
      init(fp32_t& v, fp32_t dfl, uint8_t mask)
      {
        if (dfl > 0)
        {
          m_ol.mask |= mask;
          v = dfl;
        }
      }

      //! There's an absolute maximum depth rating, limit the "operational limit"
      void
      setMaxDepth(void)
      {
        if (m_ol.mask & IMC::OPL_MAX_DEPTH)
          m_ol.max_depth = std::min(m_ol.max_depth, m_max_depth);
        else
          m_ol.max_depth = m_max_depth;

        m_ol.mask |= IMC::OPL_MAX_DEPTH;
      }

      void
      onResourceAcquisition(void)
      {
        m_timer_drifting.setTop(m_drift_timeout);
      }

      void
      onResourceInitialization(void)
      {
        m_counter.setTop(m_interval);
        //m_counter_debug.setTop(60.0);
        m_activate = m_args.activate;
      }

      void
      onUpdateParameters(void)
      {
        if(paramChanged(m_args.drifting_timeout))
        {
          m_drift_timeout = m_args.drifting_timeout;
          m_timer_drifting.setTop(m_drift_timeout);
          debug("Drift timer set.");
        }

        if(paramChanged(m_args.interval))
        {
          m_interval = m_args.interval;
          m_counter.setTop(m_interval);
        }

        if(paramChanged(m_args.activate))
          m_activate = m_args.activate;

        if (m_use_cfg)
        {
          reset();
          m_ol.mask = 0;

          init(m_ol.max_depth, m_args.i_max_depth, IMC::OPL_MAX_DEPTH);
          init(m_ol.min_altitude, m_args.i_min_altitude, IMC::OPL_MIN_ALT);
          init(m_ol.max_altitude, m_args.i_max_altitude, IMC::OPL_MAX_ALT);
          init(m_ol.min_speed, m_args.i_min_speed, IMC::OPL_MIN_SPEED);
          init(m_ol.min_speed, m_args.i_max_speed, IMC::OPL_MAX_SPEED);
          init(m_ol.max_vrate, m_args.i_max_vrate, IMC::OPL_MAX_VRATE);

          setMaxDepth();
        }
      }

      //! Reset task to initial state.
      void
      reset(void)
      {
        m_atest_time = 0;
        m_emask = 0;
        m_ol.mask = 0;
        m_errs.clear();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      consume(const IMC::OperationalLimits* msg)
      {
        reset();
        m_use_cfg = false;
        m_oplims_arrived = true;

        m_ol = *msg;
        //setMaxDepth(); // Useless for a USV.
        m_ol.setSource(IMC::AddressResolver::invalid());
        m_ol.setDestination(IMC::AddressResolver::invalid());
        m_ol.setSourceEntity(getEntityId());
        inf("%s", DTR(Status::getString(Status::CODE_ACTIVE)));

        // Store it in cache
        //m_cc.op = IMC::CacheControl::COP_STORE;
        //m_cc.message.set(m_ol);
        //dispatch(m_cc);
      }

      //! Set an op limit to error mode
      //! @param[in] lmask new error bitmask
      //! @param[in] ldesc error description
      //! @param[in] v1 current value
      //! @param[in] v2 limit value
      void
      setError(uint8_t lmask, const char* ldesc, double v1, double v2)
      {
        m_emask |= lmask;

        LError& le = m_errs[lmask];
        le.desc = ldesc;
        le.v1 = v1;
        le.v2 = v2;

        err(DTR("%s -- operational limit breached: %0.2f > %0.2f"), ldesc, v1, v2);
      }

      //! Clear an op limit from error state
      //! @param[in] lmask new error bitmask
      //! @param[in] ldesc error description
      //! @param[in] v1 current value
      //! @param[in] v2 limit value
      void
      clearError(uint8_t lmask, const char* ldesc, double v1, double v2)
      {
        m_emask &= ~lmask;
        m_errs.erase(lmask);
        war(DTR("%s -- operational limit now sane: %0.2f <= %0.2f"), ldesc, v1, v2);
      }

      //! Clear an op limit from error state
      //! @param[in] lmask new error bitmask
      //! @param[in] ldesc error description
      //! @param[in] v1 current value
      //! @param[in] v2 limit value
      //! @param[in] hyst hysteresis factor to avoid chattering
      //! @return true if in error mode
      bool
      test(uint8_t lmask, const char* ldesc, double v1, double v2, double hyst = 0.0)
      {
        if (!(m_ol.mask & lmask))
          return false;

        bool limit_breached = v1 > v2;
        bool error = (m_emask & lmask) != 0;

        if (limit_breached)
        {
          if (!error)
          {
            setError(lmask, ldesc, v1, v2);
          }
        }
        else if (error && (v1 + hyst < v2))
        {
          clearError(lmask, ldesc, v1, v2);
        }
        return limit_breached;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_estate = *msg;
        m_sog = std::sqrt(std::pow(m_estate.u,2)+std::pow(m_estate.v,2));
      }

      void
      consume(const IMC::GetOperationalLimits* msg)
      {
        (void)msg;
        dispatch(m_ol);
      }

      void consume(const IMC::VehicleState *msg)
      {
        m_vehiclestate = msg->op_mode;
        //if(msg->op_mode == IMC::VehicleState::VS_MANEUVER)
        //  m_counter.setTop(m_interval);
      }

      std::string
      vehicleStateChar(const uint8_t vstate)
      {
        switch((IMC::VehicleState::OperationModeEnum) vstate)
        {
          case IMC::VehicleState::VS_BOOT:
            return "B";
          case IMC::VehicleState::VS_CALIBRATION:
            return "C";
          case IMC::VehicleState::VS_ERROR:
            return "E";
          case IMC::VehicleState::VS_EXTERNAL:
            return "X";
          case IMC::VehicleState::VS_MANEUVER:
            return "M";
          case IMC::VehicleState::VS_SERVICE:
            return "S";
          default:
            return "?";
        }
      }

       // This uses the ray-casting algorithm to decide whether the point is inside
      // the given polygon. See https://en.wikipedia.org/wiki/Point_in_polygon#Ray_casting_algorithm
      
      bool pnpoly(IMC::MessageList<IMC::PolygonVertex> locations)
      {
        // Reject if no vertices are defined. Later on, a more proper
        // check should be used that verifies if we have a 2D polygon.
        if (!locations.size())
        {
          err(DTR("undefined area"));
          return 0;
        }

        Math::Matrix poly; //(locations.size(),2)
        double locs[2];

        IMC::MessageList<IMC::PolygonVertex>::const_iterator it = locations.begin();

        for (; it != locations.end(); it++ )
        {
          locs[0] = (*it)->lon;
          locs[1] = (*it)->lat;
          poly = poly.vertCat(Math::Matrix(locs, 1, 2));

          trace("LAT: %f, LON: %f",locs[1],locs[0]);
        }

        //m_estate.lat = Angles::radians(63.503886); //1.108422;
        //m_estate.lon = Angles::radians(10.396586); //0.179812;
        
        // If we never cross any lines we're inside.
        bool inside = false;

        // Loop through all the edges.
        for (int i = 0; i < poly.rows(); ++i)
        {
            // i is the index of the first vertex, j is the next one.
            // The original code uses a too-clever trick for this.
            int j = (i + 1) % poly.rows();

            // The vertices of the edge we are checking.
            double xp0 = poly(i, 0);
            double yp0 = poly(i, 1);
            double xp1 = poly(j, 0);
            double yp1 = poly(j, 1);

            // Check whether the edge intersects a line from (-inf,y) to (x,y).

            // First check if the line crosses the horizontal line at y in either direction.
            if ((yp0 <= m_estate.lat) && (yp1 > m_estate.lat) || (yp1 <= m_estate.lat) && (yp0 > m_estate.lat))
            {
                // If so, get the point where it crosses that line. This is a simple solution
                // to a linear equation. Note that we can't get a division by zero here -
                // if yp1 == yp0 then the above if be false.
                double cross = (xp1 - xp0) * (m_estate.lat - yp0) / (yp1 - yp0) + xp0;

                // Finally check if it crosses to the left of our test point. You could equally
                // do right and it should give the same result.
                if (cross < m_estate.lon)
                    inside = !inside;
            }
        }
        if(inside)
          trace("USV INSIDE OP AREA!");
        else
        {
          //trace("USV OUTSIDE OP AREA!");
          war(DTR("USV OUTSIDE OP AREA!"));
          std::string now = Time::Format::getTimeDateISO(Clock::getSinceEpoch());
          std::string to_send = "(A) Sheep outside the fence! " + now + " " + std::to_string(Angles::degrees(m_estate.lat)) + " " + std::to_string(Angles::degrees(m_estate.lon)) + " - State: " + vehicleStateChar(m_vehiclestate);
          sendIridium(to_send);
        }
        
        m_counter.reset();

        return inside;
      }

      void
      sendIridium(std::string msg)
      {
        IMC::TransmissionRequest req;
        req.setDestination(m_ctx.resolver.id());
        req.data_mode = TransmissionRequest::DMODE_TEXT;
        req.txt_data = msg;
        req.deadline = Clock::getSinceEpoch() + m_args.reply_timeout;
        req.req_id = ++m_reqid;

        req.comm_mean = TransmissionRequest::CMEAN_SATELLITE;
        req.destination = "";
        inf("Sending via Iridium: '%s'", req.txt_data.c_str());
        dispatch(req);
      }

      //! Update state of the system.
      void
      updateState(void)
      {
        if (m_emask)
        {
          std::string desc = "";

          for (LErrorMap::iterator itr = m_errs.begin(); itr != m_errs.end(); ++itr)
          {
            std::stringstream ss;
            ss << std::fixed << std::setprecision(2) << itr->second.desc << ':' << itr->second.v1 << " > " << itr->second.v2 << ';';
            desc += ss.str();
          }

          setEntityState(IMC::EntityState::ESTA_FAILURE, desc);
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }
      }

      void
      task(void)
      {
        /*if(m_counter_debug.overflow() && !sent_debug)
        {
          sendIridium();
          sent_debug = true;
        }*/

        //! If the vessel is drifting and it is in service mode, start counter.
        if(!m_drifting && m_sog > 0.3 && m_vehiclestate == IMC::VehicleState::VS_SERVICE)
        {
          //! Drifting true and start counter.
          m_drifting = true;
          m_timer_drifting.reset();
          m_timer_drifting.setTop(m_drift_timeout);
        }

        if(m_timer_drifting.overflow() && m_drifting && m_vehiclestate == IMC::VehicleState::VS_SERVICE)
        {
          debug("AutoNaut is drifting, sending ALARM ...");
          std::string now = Time::Format::getTimeDateISO(Clock::getSinceEpoch());
          std::string to_send = "(A) Sheep is DRIFTING! " + now + " " + std::to_string(Angles::degrees(m_estate.lat)) + " " + std::to_string(Angles::degrees(m_estate.lon)) + " - State: " + vehicleStateChar(m_vehiclestate);
          sendIridium(to_send);
          m_drifting = false;
          m_timer_drifting.reset();
          m_timer_drifting.setTop(m_drift_timeout);
        }

        if(m_vehiclestate == IMC::VehicleState::VS_MANEUVER && m_activate)
        {
          double speed = std::sqrt(m_estate.vx * m_estate.vx + m_estate.vy * m_estate.vy + m_estate.vz * m_estate.vz);
          uint8_t omask = m_emask;
  /*
          test(IMC::OPL_MIN_SPEED, DTR("minimum speed"), m_ol.min_speed, speed);
          test(IMC::OPL_MAX_SPEED, DTR("maximum speed"), speed, m_ol.max_speed);
          test(IMC::OPL_MAX_DEPTH, DTR("depth"), m_estate.depth, m_ol.max_depth, m_args.h_max_depth);
          test(IMC::OPL_MAX_VRATE, DTR("vertical rate"), std::fabs(m_estate.vz), m_ol.max_vrate);

          if (m_estate.alt >= 0 && m_estate.depth >= m_args.min_depth)
          {
            test(IMC::OPL_MAX_ALT, DTR("maximum altitude"), m_estate.alt, m_ol.max_altitude);
            test(IMC::OPL_MIN_ALT, DTR("minimum altitude"), m_ol.min_altitude, m_estate.alt, m_args.h_min_altitude);
          }
          else
          {
            // Clear altitude errors if they exist.
            if (m_emask & IMC::OPL_MAX_ALT)
            {
              m_emask &= ~IMC::OPL_MAX_ALT;
              m_errs.erase(IMC::OPL_MAX_ALT);
            }

            if (m_emask & IMC::OPL_MIN_ALT)
            {
              m_emask &= ~IMC::OPL_MIN_ALT;
              m_errs.erase(IMC::OPL_MIN_ALT);
            }
          }

          if ((m_ol.mask & IMC::OPL_AREA) && (Clock::get() >= m_atest_time))
          {
            double x, y;

            WGS84::displacement(m_ol.lat, m_ol.lon, 0, m_estate.lat, m_estate.lon, 0, &x, &y);

            x += m_estate.x;
            y += m_estate.y;

            Angles::rotate(m_ol.orientation, true, x, y);

            double d2limits =
            std::max(std::fabs(x) - 0.5 * m_ol.length, std::fabs(y) - 0.5 * m_ol.width);
            test(IMC::OPL_AREA, DTR("Operational Area"), d2limits, 0);

            m_atest_time += c_atest_period;
          }*/

          if ((m_ol.mask & IMC::OPL_POLYGON) && m_oplims_arrived) //(Clock::get() >= m_atest_time) m_atest_time += c_atest_period;
          {
            m_oplims_loc = m_ol.vertices;
            m_oplims_arrived = false;
            m_counter.reset();
          }

          if(!m_oplims_loc.empty() && m_counter.overflow())
            pnpoly(m_oplims_loc);
            

          if (m_emask != omask)
            updateState();
        }
      }
    };
  }
}

DUNE_TASK

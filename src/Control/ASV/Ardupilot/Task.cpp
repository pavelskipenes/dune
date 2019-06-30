//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Petter Norgren                                                   *
//
// Reference: Control::USV::Ardupilot::Task.cpp
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <cmath>
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// MAVLink headers.
#include <mavlink/ardupilotmega/mavlink.h>

namespace Control
{
  namespace ASV
  {
    namespace Ardupilot
    {
      using DUNE_NAMESPACES;

      //! APM Type specifier.
      enum APM_Vehicle
      {
        //! Unset or unknown vehicle type
        VEHICLE_UNKNOWN,
        //! Rover types
        VEHICLE_ROVER
      };

      //! List of ArduRover modes.
      enum APM_roverModes
      {
        RO_MODE_MANUAL       = 0,
        RO_MODE_LEARNING     = 2,
        RO_MODE_STEERING     = 3,
        RO_MODE_HOLD         = 4,
        RO_MODE_AUTO         = 10,
        RO_MODE_RTL          = 11,
        RO_MODE_GUIDED       = 15,
        RO_MODE_INITIALISING = 16
      };

      //! %Task arguments.
      struct Arguments
      {
        //! Communications timeout
        uint8_t comm_timeout;
        //! Use Ardupilot's waypoint tracker
        bool ardu_tracker;
        //! TCP Port
        uint16_t TCP_port;
        //! TCP Address
        Address TCP_addr;
        //! Telemetry Rate
        uint8_t trate;
        //! WP seconds before reach
        int secs;
        //! WP Rover: Minimum wp switch radius
        float ro_wp_radius;
        //! HITL
        bool hitl;
        //! Convert MSL to WGS84 height
        bool convert_msl;
        //! Dispatch ExternalNavData rather than EstimatedState
        bool use_external_nav;
        //! Home latitude
        double latitude;
        //! Home longitude
        double longitude;
        //! Default speed setpoint
        double speed_default;
        //! Enable heading/speed c_control 
        bool enable_heading_speed_control;
        //! Lookahead distance for yaw c_controllable
        double lookahead;

      };

      struct Task: public DUNE::Tasks::Task
      {
        //! Task arguments.
        Arguments m_args;
        //! Type definition for Arduino packet handler.
        typedef void (Task::* PktHandler)(const mavlink_message_t* msg);
        typedef std::map<int, PktHandler> PktHandlerMap;
        //! Arduino packet handling
        PktHandlerMap m_mlh;
        double m_last_pkt_time;
        uint8_t m_buf[512];
        //! Estimated state message.
        IMC::EstimatedState m_estate;
        //! Battery messages
        IMC::Voltage m_volt;
        IMC::Current m_curr;
        IMC::FuelLevel m_fuel;
        //! Pressure message
        IMC::Pressure m_pressure;
        //! Temperature message
        IMC::Temperature m_temp;
        //! GPS Fix message
        IMC::GpsFix m_fix;
        //! Wind message
        IMC::EstimatedStreamVelocity m_stream;
        //! Path Control State
        IMC::PathControlState m_pcs;
        //! DesiredPath message
        IMC::DesiredPath m_dpath;
        //! DesiredHeading message
        IMC::DesiredHeading m_desHeading;
        //! DesiredPath message
        IMC::DesiredSpeed m_desSpeed;
        //! Control loops message
        IMC::ControlLoops m_controllps;
        //! TCP socket
        DUNE::Network::TCPSocket* m_TCP_sock;
        //! System ID
        uint8_t m_sysid;
        //! Last received position
        double m_lat, m_lon;
        //! Height received from the Ardupilot (Geoid/MSL).
        float m_hae_msl;
        //! Height offset to convert to WGS-84 ellipsoid.
        float m_hae_offset;
        //! Flag indicating task is booting.
        bool m_reboot;
        //! Flag indicating MSL-WGS84 offset has already been calculated.
        bool m_offset_st;
        //! External control
        bool m_external;
        //! Current waypoint
        int m_current_wp;
        //! Critical WP
        bool m_critical;
        //! Bitfield of enabled control loops.
        uint32_t m_cloops;
        //! Parser Variables
        mavlink_message_t m_msg;
        int m_desired_radius;
        int m_gnd_speed;
        int m_mode;
        bool m_changing_wp;
        bool m_error_missing, m_esta_ext;
        //! Setup rate hack
        bool m_has_setup_rate;
        //! Desired control
        float m_dspeed;
        //! Type of system to be controlled
        APM_Vehicle m_vehicle_type;
        //! Check vehicle state
        int m_vehiclestate;
        //! Time since last waypoint was sent
        float m_last_wp;
        //! Mission items queue
        std::queue<mavlink_message_t> m_mission_items;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_TCP_sock(NULL),
          m_sysid(1),
          m_lat(0.0),
          m_lon(0.0),
          m_hae_msl(0.0),
          m_hae_offset(0.0),
          m_reboot(true),
          m_offset_st(false),
          m_external(true),
          m_current_wp(0),
          m_critical(false),
          m_cloops(0),
          m_desired_radius(0),
          m_gnd_speed(0),
          m_mode(0),
          m_changing_wp(false),
          m_error_missing(false),
          m_esta_ext(false),
          m_has_setup_rate(false),
          m_dspeed(20),
          m_vehicle_type(VEHICLE_UNKNOWN),
          m_vehiclestate(IMC::VehicleState::VS_BOOT),
          m_last_wp(0)
        {
          param("Communications Timeout", m_args.comm_timeout)
          .minimumValue("1")
          .maximumValue("60")
          .defaultValue("10")
          .units(Units::Second)
          .description("Ardupilot communications timeout");

          param("Ardupilot Tracker", m_args.ardu_tracker)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .scope(Tasks::Parameter::SCOPE_MANEUVER)
          .defaultValue("false")
          .description("Use Ardupilot's waypoint tracker");

          param("TCP - Port", m_args.TCP_port)
          .defaultValue("5760")
          .description("Port for connection to Ardupilot");

          param("TCP - Address", m_args.TCP_addr)
          .defaultValue("127.0.0.1")
          .description("Address for connection to Ardupilot");

          param("Telemetry Rate", m_args.trate)
          .defaultValue("10")
          .units(Units::Hertz)
          .description("Telemetry output rate from Ardupilot");

          param("Seconds before waypoint", m_args.secs)
          .defaultValue("2")
          .units(Units::Second)
          .description("Seconds before actually reaching Waypoint that it is considered as reached");

          param("Rover - Minimum WP switch radius", m_args.ro_wp_radius)
          .defaultValue("5.0")
          .units(Units::Meter)
          .description("Used for waypoint switching for rovers. Rovers uses the seconds before reaching wp, but will also switch if this distance is met.");

          param("HITL", m_args.hitl)
          .defaultValue("false")
          .description("Hardware in the loop");

          param("Convert MSL to WGS84 height", m_args.convert_msl)
          .defaultValue("false")
          .description("Convert altitude extracted from the Ardupilot to WGS84 height");

          param("Use External Nav Data", m_args.use_external_nav)
          .defaultValue("false")
          .description("Dispatch ExternalNavData instead of EstimatedState");

          param("Home latitude", m_args.latitude)
          .description("Latitude defined as home.");

          param("Home longitude", m_args.longitude)
          .description("Longitude defined as home.");

          param("Default speed setpoint", m_args.speed_default)
          .defaultValue("1.5")
          .description("Default speed setpoint to use");

          param("Enable heading/speed control of vehicle", m_args.enable_heading_speed_control)
          .defaultValue("false")
          .description("Enable heading/speed control of vehicle");

          param("Lookahead distance for yaw control", m_args.lookahead)
          .defaultValue("200.0")
          .units(Units::Meter)
          .description("Used for calculating a waypoint a lookahead distance away from the rover.");

          //! Setup packet handlers
          //! IMPORTANT: set up function to handle each type of MAVLINK packet here
          m_mlh[MAVLINK_MSG_ID_ATTITUDE] = &Task::handleAttitudePacket;
          m_mlh[MAVLINK_MSG_ID_GLOBAL_POSITION_INT] = &Task::handlePositionPacket;
          m_mlh[MAVLINK_MSG_ID_HWSTATUS] = &Task::handleHWStatusPacket;
          m_mlh[MAVLINK_MSG_ID_SCALED_PRESSURE] = &Task::handleScaledPressurePacket;
          m_mlh[MAVLINK_MSG_ID_GPS_RAW_INT] = &Task::handleRawGPSPacket;
          m_mlh[MAVLINK_MSG_ID_WIND] = &Task::handleWindPacket;
          m_mlh[MAVLINK_MSG_ID_COMMAND_ACK] = &Task::handleCmdAckPacket;
          m_mlh[MAVLINK_MSG_ID_MISSION_ACK] = &Task::handleMissionAckPacket;
          m_mlh[MAVLINK_MSG_ID_MISSION_CURRENT] = &Task::handleMissionCurrentPacket;
          m_mlh[MAVLINK_MSG_ID_STATUSTEXT] = &Task::handleStatusTextPacket;
          m_mlh[MAVLINK_MSG_ID_HEARTBEAT] = &Task::handleHeartbeatPacket;
          m_mlh[MAVLINK_MSG_ID_NAV_CONTROLLER_OUTPUT] = &Task::handleNavControllerPacket;
          m_mlh[MAVLINK_MSG_ID_MISSION_ITEM] = &Task::handleMissionItemPacket;
          m_mlh[MAVLINK_MSG_ID_SYS_STATUS] = &Task::handleSystemStatusPacket;
          m_mlh[MAVLINK_MSG_ID_VFR_HUD] = &Task::handleHUDPacket;
          m_mlh[MAVLINK_MSG_ID_SYSTEM_TIME] = &Task::handleSystemTimePacket;
          m_mlh[MAVLINK_MSG_ID_MISSION_REQUEST] = &Task::handleMissionRequestPacket;
          m_mlh[MAVLINK_MSG_ID_RAW_IMU] = &Task::handleImuRaw;

          //! Setup processing of IMC messages
          bind<DesiredPath>(this);
          bind<DesiredHeading>(this);
          bind<DesiredSpeed>(this);
          bind<ControlLoops>(this);
          bind<VehicleState>(this);
          bind<SimulatedState>(this);
          bind<AutopilotMode>(this);

          //! Misc. initialization
          m_last_pkt_time = 0; //! time of last packet from Ardupilot
          m_estate.clear();
        }

        void
        onResourceRelease(void)
        {
          Memory::clear(m_TCP_sock);
        }

        void
        onResourceAcquisition(void)
        {
          openConnection();
        }

        void
        onUpdateParameters(void)
        {
          sendCommandPacket(MAV_CMD_DO_SET_HOME, 0, 0, 0, 0, m_args.latitude, m_args.longitude, 0.0);
          trace("Home changed to: Lat: %f, Long: %f", m_args.latitude, m_args.longitude);
        }

        void
        openConnection(void)
        {
          try
          {
            Memory::clear(m_TCP_sock);
            Delay::wait(1);
            m_TCP_sock = new TCPSocket;
            m_TCP_sock->connect(m_args.TCP_addr, m_args.TCP_port);
            m_TCP_sock->setNoDelay(true);
            setupRate(m_args.trate);
            setEntityState(IMC::EntityState::ESTA_BOOT, "Boot");
            inf(DTR("Ardupilot interface initialized"));
          }
          catch (...)
          {
            Memory::clear(m_TCP_sock);
            war(DTR("Connection failed, retrying..."));
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
          }
        }

        void
        setupRate(uint8_t rate)
        {
          uint8_t buf[512];
          mavlink_message_t msg;

          //! ATTITUDE and SIMSTATE messages
          mavlink_msg_request_data_stream_pack(255, 0, &msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_EXTRA1,
                                               rate,
                                               1);

          uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
          spew("ATTITUDE Stream setup to %d Hertz", rate);

          //! VFR_HUD message
          mavlink_msg_request_data_stream_pack(255, 0, &msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_EXTRA2,
                                               rate,
                                               1);

          n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
          spew("VFR Stream setup to %d Hertz", rate);

          //! GLOBAL_POSITION_INT message
          mavlink_msg_request_data_stream_pack(255, 0, &msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_POSITION,
                                               rate,
                                               1);

          n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
          spew("POSITION Stream setup to %d Hertz", rate);

          //! SYS_STATUS, POWER_STATUS, MEMINFO, MISSION_CURRENT,
          //! GPS_RAW_INT, NAV_CONTROLLER_OUTPUT and FENCE_STATUS messages
          mavlink_msg_request_data_stream_pack(255, 0, &msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_EXTENDED_STATUS,
                                               (int)(rate/5),
                                               1);

          n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
          spew("STATUS Stream setup to %d Hertz", (int)(rate/5));

          //! AHRS, HWSTATUS, WIND, RANGEFINDER and SYSTEM_TIME messages
          mavlink_msg_request_data_stream_pack(255, 0, &msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_EXTRA3,
                                               1,
                                               1);

          n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
          spew("AHRS-HWSTATUS-WIND Stream setup to 1 Hertz");

          //! RAW_IMU, SCALED_PRESSURE and SENSOR_OFFSETS messages
          mavlink_msg_request_data_stream_pack(255, 0, &msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_RAW_SENSORS,
                                               50,
                                               1);

          n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
          spew("SENSORS Stream setup to 1 Hertz");

          //! RC_CHANNELS_RAW and SERVO_OUTPUT_RAW messages
          mavlink_msg_request_data_stream_pack(255, 0, &msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_RC_CHANNELS,
                                               1,
                                               0);

          n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
          spew("RC Stream disabled");

          //! Setting speed setpoint parameter
          mavlink_msg_param_set_pack(255, 0, &msg,
                                     m_sysid, //! target_system System ID
                                     0, //! target_component Component ID
                                     "CRUISE_SPEED", //! Parameter name
                                     m_args.speed_default, //! Parameter value
                                     MAV_PARAM_TYPE_REAL32); //! Parameter type

          n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
          spew("Default cruise speed set to: %f", m_args.speed_default);
        }

        void
        sendCommandPacket(uint16_t cmd, float arg1=0, float arg2=0, float arg3=0, float arg4=0, float arg5=0, float arg6=0, float arg7=0)
        {
          uint8_t buf[512];

          mavlink_message_t msg;

          trace("%0.2f %0.2f %0.2f %0.2f %0.2f %0.2f %0.2f", arg1, arg2, arg3, arg4, arg5, arg6, arg7);

          mavlink_msg_command_long_pack(255, 0, &msg, m_sysid, 0, cmd, 0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);

          uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
        }

        //! Prints to terminal and log when control loops are activated and deactivated
        void
        info(uint32_t was, uint32_t is, uint32_t loop, const char* desc)
        {
          was &= loop;
          is &= loop;

          if (was && !is)
            inf("%s - deactivating", desc);
          else if (!was && is)
            inf("%s - activating", desc);
        }

        void
        consume(const IMC::ControlLoops* cloops)
        {
          if (m_external && cloops->enable)
          {
            m_controllps = *cloops;
            inf(DTR("ArduPilot is in Manual mode, saving control loops."));
            //! Control loops will be enabled when AUTO mode is activated
            return;
          }

          uint32_t prev = m_cloops;

          if (cloops->enable)
          {
            m_cloops |= cloops->mask;
            if ((!m_args.ardu_tracker) && (cloops->mask & IMC::CL_PATH))
            {
              inf("Ardupilot tracker is NOT enabled");
              m_cloops &= ~IMC::CL_PATH;
            }

            if (!(m_args.ardu_tracker))
            {
              onUpdateParameters();
            }
          }
          else
          {
            m_cloops &= ~cloops->mask;

            if (m_vehicle_type == VEHICLE_ROVER)
            {
              mavlink_message_t msg;
              uint8_t buf[512];

              //! Sending value 0 disables RC override for that channel
              mavlink_msg_rc_channels_override_pack(255, 0, &msg,
                                                    1,
                                                    1,
                                                    0, //! RC Channel 1 (roll)
                                                    0, //! RC Channel 2 (vertical rate)
                                                    0, //! RC Channel 3 (speed)
                                                    0, //! RC Channel 4 (rudder)
                                                    0, //! RC Channel 5 (not used)
                                                    0, //! RC Channel 6 (not used)
                                                    0, //! RC Channel 7 (not used)
                                                    0);//! RC Channel 8 (mode)
              uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
              sendData(buf, n);

              //! Set GUIDED mode
              mavlink_msg_set_mode_pack(255, 0, &msg,
                                        m_sysid,
                                        1,
                                        RO_MODE_GUIDED); //! DUNE mode on ardurover is 15

              n = mavlink_msg_to_send_buffer(buf, &msg);
              sendData(buf, n);
              debug("Guided MODE on ardupilot is set");
            }
          }

          info(prev, m_cloops, IMC::CL_SPEED, "speed control");
          info(prev, m_cloops, IMC::CL_PATH, "path control");
        }

        void consume(const IMC::VehicleState *msg)
        {
          uint8_t buf[512];
          mavlink_message_t mvmsg;

          if(msg->op_mode == IMC::VehicleState::VS_SERVICE 
              && (m_vehiclestate == IMC::VehicleState::VS_BOOT
              || m_vehiclestate == IMC::VehicleState::VS_ERROR))
          {
            //! Set HOLD mode
            mavlink_msg_set_mode_pack(255, 0, &mvmsg,
                                    m_sysid,
                                    1,
                                    RO_MODE_HOLD);

            uint16_t n = mavlink_msg_to_send_buffer(buf, &mvmsg);
            sendData(buf, n);
            debug("Boot completed. Autopilot mode set to HOLD.");
          }
          else if(msg->op_mode != IMC::VehicleState::VS_MANEUVER 
              && m_vehiclestate == IMC::VehicleState::VS_MANEUVER)
          {
            //! Set HOLD mode
            mavlink_msg_set_mode_pack(255, 0, &mvmsg,
                                    m_sysid,
                                    1,
                                    RO_MODE_HOLD);

            uint16_t n = mavlink_msg_to_send_buffer(buf, &mvmsg);
            sendData(buf, n);
            debug("Mission aborted. Autopilot mode set to HOLD.");
          }
          m_vehiclestate = msg->op_mode;
        }

        //! Converts value in range min_value:max_value to a value_pwm in range min_pwm:max_pwm
        int
        map2PWM(int min_pwm, int max_pwm, float min_value, float max_value, float value, bool reverse)
        {
          int value_pwm;

          if (reverse)
            value_pwm = (int) max_pwm - ((max_pwm - min_pwm) * (value - min_value) / (max_value - min_value));
          else
            value_pwm = (int) ((max_pwm - min_pwm) * (value - min_value) / (max_value - min_value)) + min_pwm;

          return trimValue(value_pwm, min_pwm, max_pwm);
        }

        //! Message for GUIDED/AUTO control (using Ardupilot's controllers)
        void
        consume(const IMC::DesiredPath* path)
        {
          if(m_args.enable_heading_speed_control)
          {
            return;
          }

          if (m_external)
          {
            m_dpath = *path;
            inf(DTR("ArduPilot is in Manual mode, saving desired path."));
            return;
          }

          if (!((m_cloops & IMC::CL_PATH) && m_args.ardu_tracker))
          {
            inf(DTR("path control is NOT active"));
            return;
          }

          if(m_vehicle_type != VEHICLE_ROVER)
          {
            inf(DTR("unknown vehicle type"));
            return;
          }

          uint8_t buf[512];
          mavlink_message_t msg;

          //! Setting speed setpoint parameter
          mavlink_msg_param_set_pack(255, 0, &msg,
                                     m_sysid, //! target_system System ID
                                     0, //! target_component Component ID
                                     "CRUISE_SPEED", //! Parameter name
                                     path->speed, //! Parameter value
                                     MAV_PARAM_TYPE_REAL32); //! Parameter type

          uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);

          m_dspeed = path->speed;
          debug("Speed setpoint set to: %f", m_dspeed);

          //! Set destination
          mavlink_msg_mission_item_pack(255, 0, &msg,
                                          m_sysid, //! target_system System ID
                                          0, //! target_component Component ID
                                          1, //! seq Sequence
                                          MAV_FRAME_GLOBAL, //! frame The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
                                          MAV_CMD_NAV_WAYPOINT, //! command The scheduled action for the MISSION. see MAV_CMD in ardupilotmega.h
                                          2, //! current false:0, true:1, guided mode:2
                                          0, //! autocontinue to next wp
                                          0, //! p1 - Radius of acceptance? Think not used.
                                          0, //! Not used
                                          0, // direction does not matter for rover.
                                          0, //! Not used
                                          (float)Angles::degrees(path->end_lat), //! x PARAM5 / local: x position, global: latitude
                                          (float)Angles::degrees(path->end_lon), //! y PARAM6 / y position: global: longitude
                                          -m_hae_offset);//! z PARAM7 / z position: global: altitude

          n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);

          m_changing_wp = true;

          m_pcs.start_lat = m_lat;
          m_pcs.start_lon = m_lon;

          m_pcs.end_lat = path->end_lat;
          m_pcs.end_lon = path->end_lon;
          
          m_pcs.flags = PathControlState::FL_NO_Z | PathControlState::FL_CCLOCKW;
          m_pcs.flags &= path->flags;
          m_pcs.lradius = path->lradius;
          m_pcs.path_ref = path->path_ref;

          dispatch(m_pcs);
          m_dpath = *path;
          m_last_wp = Clock::get();

          debug("Waypoint packet sent to Ardupilot");
        }

        void 
        consume(const IMC::DesiredHeading *msg)
        {
          if(!m_args.enable_heading_speed_control)
          {
            return;
          }

          if (m_external)
          {
            m_desHeading = *msg;
            inf(DTR("ArduPilot is in Manual mode, saving desired heading."));
            return;
          }

          if (!((m_cloops & IMC::CL_PATH) && m_args.ardu_tracker))
          {
            inf(DTR("path control is NOT active"));
            return;
          }

          if(m_vehicle_type != VEHICLE_ROVER)
          {
            inf(DTR("unknown vehicle type"));
            return;
          }

          uint8_t buf[512];
          mavlink_message_t mvmsg;

          double lat, lon, depth;
          
          lat = m_estate.lat;
          lon = m_estate.lon;
          depth = m_estate.z;

          WGS84::displace(m_args.lookahead*cos(msg->value), m_args.lookahead*sin(msg->value), 0, &lat, &lon, &depth);
          
          mavlink_msg_mission_item_pack(255, 0, &mvmsg,
                                          m_sysid, //! target_system System ID
                                          0, //! target_component Component ID
                                          1, //! seq Sequence
                                          MAV_FRAME_GLOBAL, //! frame The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
                                          MAV_CMD_NAV_WAYPOINT, //! command The scheduled action for the MISSION. see MAV_CMD in ardupilotmega.h
                                          2, //! current false:0, true:1, guided mode:2
                                          0, //! autocontinue to next wp
                                          0, //! p1 - Radius of acceptance? Think not used.
                                          0, //! Not used
                                          0, // direction does not matter for rover.
                                          0, //! Not used
                                          (float)Angles::degrees(lat), //! x PARAM5 / local: x position, global: latitude
                                          (float)Angles::degrees(lon), //! y PARAM6 / y position: global: longitude
                                          depth);//! z PARAM7 / z position: global: altitude

          uint16_t n = mavlink_msg_to_send_buffer(buf, &mvmsg);
          sendData(buf, n);

          debug("Yaw setpoint: %f sent to Ardupilot", (float)Angles::degrees(msg->value));
        }

        void
        consume(const IMC::DesiredSpeed *msg)
        {
          if(!m_args.enable_heading_speed_control)
          {
            return;
          }

          if (m_external)
          {
            m_desSpeed = *msg;
            inf(DTR("ArduPilot is in Manual mode, saving desired speed."));
            return;
          }

          if (!((m_cloops & IMC::CL_PATH) && m_args.ardu_tracker))
          {
            inf(DTR("path control is NOT active"));
            return;
          }

          if(m_vehicle_type != VEHICLE_ROVER)
          {
            inf(DTR("unknown vehicle type"));
            return;
          }

          double speed;

          if(msg->speed_units == Units::Knot)
          {
            speed = msg->value*(1/Units::c_ms_to_knot);
          }
          else
          {
            speed = msg->value;
          }

          uint8_t buf[512];
          mavlink_message_t mvmsg;

          //! Setting speed setpoint parameter
          mavlink_msg_param_set_pack(255, 0, &mvmsg,
                                      m_sysid, //! target_system System ID
                                      0, //! target_component Component ID
                                      "CRUISE_SPEED", //! Parameter name
                                      (float)speed, //! Parameter value
                                      MAV_PARAM_TYPE_REAL32); //! Parameter type

          uint16_t n = mavlink_msg_to_send_buffer(buf, &mvmsg);
          sendData(buf, n);

          debug("Speed setpoint: %f sent to Ardupilot.", (float)speed);
        }

        //! Used for HITL simulations
        void
        consume(const IMC::SimulatedState* sim_state)
        {
          if (!m_ctx.profiles.isSelected("HITL"))
            return;

          mavlink_message_t msg;
          uint8_t buf[512];

          double lat_ref = sim_state->lat;
          double lon_ref = sim_state->lon;
          float hei_ref = sim_state->height;

          int lat, lon, alt;

          WGS84::displace(sim_state->x, sim_state->y, sim_state->z,
              &lat_ref, &lon_ref, &hei_ref);

          lat = (int) (Angles::degrees(lat_ref) * 1E7);
          lon = (int) (Angles::degrees(lon_ref) * 1E7);
          alt = (int) (hei_ref * 1000);

          float vx, vy, vz;

          Coordinates::BodyFixedFrame::toInertialFrame(sim_state->phi, sim_state->theta, sim_state->psi,
              sim_state->u, sim_state->v, sim_state->w,
              &vx, &vy, &vz);

          mavlink_msg_hil_state_pack(255, 0, &msg,
                                     (unsigned long int) (Clock::getSinceEpochNsec() / 1000), //! Timestamp (microseconds since UNIX epoch or microseconds since system boot)
                                     sim_state->phi, //! Roll angle (rad)
                                     sim_state->theta, //! Pitch angle (rad)
                                     sim_state->psi, //! Yaw angle (rad)
                                     sim_state->p, //! Roll angular speed (rad/s)
                                     sim_state->q, //! Pitch angular speed (rad/s)
                                     sim_state->r, //! Yaw angular speed (rad/s)
                                     lat, //! Latitude, expressed as * 1E7
                                     lon, //! Longitude, expressed as * 1E7
                                     alt, //! Altitude in meters, expressed as * 1000 (millimeters)
                                     (short int) (vx * 100), //! Ground X Speed (Latitude), expressed as m/s * 100
                                     (short int) (vy * 100), //! Ground Y Speed (Longitude), expressed as m/s * 100
                                     (short int) (vz * 100), //! Ground Z Speed (Altitude), expressed as m/s * 100
                                     0, //! X acceleration (mg)
                                     0, //! Y acceleration (mg)
                                     0); //! Z acceleration (mg)

          uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
        }

        void
        consume(const IMC::AutopilotMode* msg)
        {
          // Arm/Disarm (used for Planes)
          if (msg->mode.compare("ARM") == 0)
            sendCommandPacket(MAV_CMD_COMPONENT_ARM_DISARM, 1);

          if (msg->mode.compare("DISARM") == 0)
            sendCommandPacket(MAV_CMD_COMPONENT_ARM_DISARM, 0);

          trace("IMC::AutoPilotMode->mode: %s", msg->mode.c_str());
          (void)msg;
        }

        void
        sendMissionItem(bool next)
        {
          if (next && !m_mission_items.empty())
            m_mission_items.pop();

          if (m_mission_items.empty())
          {
            debug("Mission Item queue is empty.");
            return;
          }

          uint8_t buf[512];

          uint16_t n = mavlink_msg_to_send_buffer(buf, &m_mission_items.front());
          sendData(buf, n);
        }

        void
        onMain(void)
        {
          while (!stopping())
          {
            // Handle data
            if (m_TCP_sock)
            {
              handleArdupilotData();
            }
            else
            {
              Time::Delay::wait(0.5);
              openConnection();
            }

            if (!m_error_missing)
            {
              if (m_external)
              {
                if (!m_esta_ext)
                {
                  setEntityState(IMC::EntityState::ESTA_NORMAL, "External Control");
                  m_esta_ext = true;
                }
              }
              else// if (getEntityState() != IMC::EntityState::ESTA_NORMAL)
              {
                setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
                m_esta_ext = false;
              }
            }

            // Handle IMC messages from bus
            consumeMessages();
          }
        }

        bool
        poll(double timeout)
        {
          if (m_TCP_sock != NULL)
            return Poll::poll(*m_TCP_sock, timeout);

          return false;
        }

        int
        sendData(uint8_t* bfr, int size)
        {
          if (m_TCP_sock && !stopping())
          {
            spew("Sending something");
            return m_TCP_sock->write((char*)bfr, size);
          }
          return 0;
        }

        int
        receiveData(uint8_t* buf, size_t blen)
        {
          if (m_TCP_sock && !stopping())
          {
            try
            {
              return m_TCP_sock->read(buf, blen);
            }
            catch (std::runtime_error& e)
            {
              err("%s", e.what());
              war(DTR("Connection lost, retrying..."));
              Memory::clear(m_TCP_sock);

              m_TCP_sock = new Network::TCPSocket;
              m_TCP_sock->connect(m_args.TCP_addr, m_args.TCP_port);
              return 0;
            }
          }
          return 0;
        }

        void
        handleArdupilotData(void)
        {
          mavlink_status_t status;

          double now = Clock::get();
          int counter = 0;

          while (poll(0.01) && counter < 100)
          {
            counter++;

            int n = receiveData(m_buf, sizeof(m_buf));
            if (n < 0)
            {
              debug("Receive error");
              break;
            }

            now = Clock::get();

            for (int i = 0; i < n; i++)
            {
              int rv = mavlink_parse_char(MAVLINK_COMM_0, m_buf[i], &m_msg, &status);
              if (status.packet_rx_drop_count)
              {
                switch(status.parse_state)
                {
                  case MAVLINK_PARSE_STATE_IDLE:
                    spew("failed at state IDLE");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_STX:
                    spew("failed at state GOT_STX");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_LENGTH:
                    spew("failed at state GOT_LENGTH");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_SYSID:
                    spew("failed at state GOT_SYSID");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_COMPID:
                    spew("failed at state GOT_COMPID");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_MSGID:
                    spew("failed at state GOT_MSGID");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_PAYLOAD:
                    spew("failed at state GOT_PAYLOAD");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_CRC1:
                    spew("failed at state GOT_CRC1");
                    break;
                  default:
                    spew("failed OTHER");
                }
              }
              if (rv)
              {
                switch ((int)m_msg.msgid)
                {
                  default:
                    spew("UNDEF: %u", m_msg.msgid);
                    break;
                  case MAVLINK_MSG_ID_HEARTBEAT:
                    spew("HEARTBEAT");
                    break;
                  case MAVLINK_MSG_ID_SYS_STATUS:
                    spew("SYS_STATUS");
                    break;
                  case MAVLINK_MSG_ID_SYSTEM_TIME:
                    spew("SYSTEM_TIME");
                    break;
                  case 22:
                    spew("PARAM_VALUE");
                    break;
                  case MAVLINK_MSG_ID_GPS_RAW_INT:
                    spew("GPS_RAW");
                    break;
                  case 27:
                    spew("IMU_RAW");
                    break;
                  case MAVLINK_MSG_ID_SCALED_PRESSURE:
                    spew("SCALED_PRESSURE");
                    break;
                  case MAVLINK_MSG_ID_ATTITUDE:
                    spew("ATTITUDE");
                    break;
                  case MAVLINK_MSG_ID_GLOBAL_POSITION_INT:
                    spew("GLOBAL_POSITION_INT");
                    break;
                  case 34:
                    spew("RC_CHANNELS_SCALED");
                    break;
                  case 35:
                    spew("RC_CHANNELS_RAW");
                    break;
                  case MAVLINK_MSG_ID_MISSION_ITEM:
                    spew("MISSION_ITEM");
                    break;
                  case MAVLINK_MSG_ID_MISSION_REQUEST:
                    spew("MISSION_REQUEST");
                    break;
                  case MAVLINK_MSG_ID_MISSION_CURRENT:
                    spew("MISSION_CURRENT");
                    break;
                  case MAVLINK_MSG_ID_MISSION_ACK:
                    spew("MISSION_ACK");
                    break;
                  case MAVLINK_MSG_ID_NAV_CONTROLLER_OUTPUT:
                    spew("NAV_CONTROLLER_OUTPUT");
                    break;
                  case MAVLINK_MSG_ID_VFR_HUD:
                    spew("VFR_HUD");
                    break;
                  case MAVLINK_MSG_ID_COMMAND_ACK:
                    spew("CMD_ACK");
                    break;
                  case 116:
                    spew("SCALED_IMU_2");
                    break;
                  case 136:
                    spew("TERRAIN_REPORT");
                    break;
                  case MAVLINK_MSG_ID_BATTERY_STATUS:
                    spew("BATTERY_STAT");
                    break;
                  case 150:
                    spew("SENSOR_OFFSETS");
                    break;
                  case 152:
                    spew("MEMINFO");
                    break;
                  case 162:
                    spew("FENCE_STATUS");
                    break;
                  case 163:
                    spew("AHRS");
                    break;
                  case 164:
                    spew("SIM_STATE");
                    break;
                  case MAVLINK_MSG_ID_HWSTATUS:
                    spew("HW_STATUS");
                    break;
                  case MAVLINK_MSG_ID_WIND:
                    spew("WIND");
                    break;
                  case 178:
                    spew("AHRS2");
                    break;
                  case MAVLINK_MSG_ID_STATUSTEXT:
                    spew("STATUSTEXT");
                    break;
                }

                PktHandler h = m_mlh[m_msg.msgid];

                if (!h)
                  continue;  // Ignore this packet (no handler for it)

                // Call handler
                (this->*h)(&m_msg);
                m_sysid = m_msg.sysid;

                m_last_pkt_time = now;
              }
            }
          }

          if (now - m_last_pkt_time >= m_args.comm_timeout)
          {
            if (!m_error_missing && !m_reboot)
            {
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_MISSING_DATA);
              m_error_missing = true;
              m_has_setup_rate = false;
              m_esta_ext = false;
            }
          }
          else
            m_error_missing = false;
        }

        void
        handleAttitudePacket(const mavlink_message_t* msg)
        {
          mavlink_attitude_t att;

          mavlink_msg_attitude_decode(msg, &att);
          m_estate.phi = att.roll;
          m_estate.theta = att.pitch;
          m_estate.psi = att.yaw;
          m_estate.p = att.rollspeed;
          m_estate.q = att.pitchspeed;
          m_estate.r = att.yawspeed;

          if (m_args.use_external_nav)
          {
            IMC::ExternalNavData extdata;
            extdata.state.set(m_estate);
            dispatch(extdata);
          }
          else
          {
            dispatch(m_estate);
          }
        }

        void
        handleImuRaw(const mavlink_message_t* msg)
        {
          mavlink_raw_imu_t raw;
          mavlink_msg_raw_imu_decode(msg, &raw);

          double tstamp = Clock::getSinceEpoch();

          IMC::Acceleration acce;
          acce.x = raw.xacc;
          acce.y = raw.yacc;
          acce.z = raw.zacc;
          acce.setTimeStamp(tstamp);
          dispatch(acce);

          IMC::AngularVelocity avel;
          avel.x = raw.xgyro;
          avel.y = raw.ygyro;
          avel.z = raw.zgyro;
          avel.setTimeStamp(tstamp);
          dispatch(avel);

          IMC::MagneticField magn;
          magn.x = raw.xmag;
          magn.y = raw.ymag;
          magn.z = raw.zmag;
          magn.setTimeStamp(tstamp);
          dispatch(magn);
        }

        void
        handlePositionPacket(const mavlink_message_t* msg)
        {
          mavlink_global_position_int_t gp;
          mavlink_msg_global_position_int_decode(msg, &gp);

          // We need to wait until we know the vehicle type to handle this
          if (m_vehicle_type == VEHICLE_UNKNOWN)
            return;

          m_lat = Angles::radians((double)gp.lat * 1e-07);
          m_lon = Angles::radians((double)gp.lon * 1e-07);
          m_hae_msl = (double) gp.alt * 1e-3;   //MSL

          if (m_args.convert_msl && m_fix.type == IMC::GpsFix::GFT_STANDALONE)
          {
            if (m_reboot)
            {
              Coordinates::WMM wmm(m_ctx.dir_cfg);
              m_hae_offset = wmm.height(m_lat, m_lon);
              m_reboot = false;
              m_offset_st = true;
            }
          }
          else
          {
            m_hae_offset = 0;
          }

          m_estate.lat = m_lat;
          m_estate.lon = m_lon;
          m_estate.height = getHeight();

          m_estate.x = 0;
          m_estate.y = 0;
          m_estate.z = 0;

          m_estate.vx = 1e-02 * gp.vx;
          m_estate.vy = 1e-02 * gp.vy;
          m_estate.vz = -1e-02 * gp.vz;

          // Note: the following will yield body-fixed *ground* velocity
          // Maybe this can be fixed w/IAS readings (anyway not too important)
          BodyFixedFrame::toBodyFrame(m_estate.phi, m_estate.theta, m_estate.psi,
                                      m_estate.vx, m_estate.vy, m_estate.vz,
                                      &m_estate.u, &m_estate.v, &m_estate.w);

          m_estate.alt = (double) gp.relative_alt * 1e-3;   //AGL (relative to home altitude)
          m_estate.depth = -1;
        }

        float
        getHeight(void)
        {
          return m_hae_msl + m_hae_offset;
        }

        void
        handleHWStatusPacket(const mavlink_message_t* msg)
        {
          mavlink_hwstatus_t hw_status;

          mavlink_msg_hwstatus_decode(msg, &hw_status);

          m_volt.value = 0.001 * hw_status.Vcc;

          dispatch(m_volt);
        }

        void
        handleSystemStatusPacket(const mavlink_message_t* msg)
        {
          mavlink_sys_status_t sys_status;

          mavlink_msg_sys_status_decode(msg, &sys_status);

          m_volt.value = 0.001 * (float)sys_status.voltage_battery;
          m_curr.value = 0.01 * (float)sys_status.current_battery;
          m_fuel.value = (float)sys_status.battery_remaining;

          dispatch(m_volt);
          dispatch(m_curr);
          dispatch(m_fuel);
        }

        void
        handleScaledPressurePacket(const mavlink_message_t* msg)
        {
          mavlink_scaled_pressure_t sc_press;

          mavlink_msg_scaled_pressure_decode(msg, &sc_press);

          m_pressure.value = sc_press.press_abs;
          m_temp.value = 0.01 * sc_press.temperature;

          dispatch(m_pressure);
          dispatch(m_temp);
        }

        void
        handleRawGPSPacket(const mavlink_message_t* msg)
        {
          mavlink_gps_raw_int_t gps_raw;

          mavlink_msg_gps_raw_int_decode(msg, &gps_raw);

          m_fix.cog = Angles::radians((double)gps_raw.cog * 0.01);
          m_fix.sog = (float)gps_raw.vel * 0.01;
          m_fix.hdop = (float)gps_raw.eph * 0.01;
          m_fix.vdop = (float)gps_raw.epv * 0.01;
          m_fix.lat = Angles::radians((double)gps_raw.lat * 1e-07);
          m_fix.lon = Angles::radians((double)gps_raw.lon * 1e-07);
          m_fix.height = (double)gps_raw.alt * 0.001;
          m_fix.satellites = gps_raw.satellites_visible;

          m_fix.validity = 0;
          if (gps_raw.fix_type > 1)
          {
            m_fix.validity |= IMC::GpsFix::GFV_VALID_POS;
            m_fix.type = IMC::GpsFix::GFT_STANDALONE;
          }
          else
            m_fix.type = IMC::GpsFix::GFT_DEAD_RECKONING;

          if (gps_raw.fix_type == 3)
          {
            m_fix.validity |= IMC::GpsFix::GFV_VALID_VDOP;
            m_fix.vdop = 5;
          }
        }

        void
        handleWindPacket(const mavlink_message_t* msg)
        {
          mavlink_wind_t wind;

          mavlink_msg_wind_decode(msg, &wind);

          double wind_dir_rad = wind.direction * Math::c_pi / 180;

          m_stream.x = -std::cos(wind_dir_rad) * wind.speed;
          m_stream.y = -std::sin(wind_dir_rad) * wind.speed;
          m_stream.z = wind.speed_z;

          dispatch(m_stream);
        }

        void
        handleCmdAckPacket(const mavlink_message_t* msg)
        {
          mavlink_command_ack_t cmd_ack;

          mavlink_msg_command_ack_decode(msg, &cmd_ack);
          trace("Command %d was received, result is %d", cmd_ack.command, cmd_ack.result);
          m_changing_wp = false;
          m_last_wp = 0;
        }

        void
        handleMissionAckPacket(const mavlink_message_t* msg)
        {
          mavlink_mission_ack_t miss_ack;

          mavlink_msg_mission_ack_decode(msg, &miss_ack);
          trace("Mission was received, result is %d", miss_ack.type);
          m_changing_wp = false;
          m_last_wp = 0;
        }

        void
        handleMissionCurrentPacket(const mavlink_message_t* msg)
        {
          mavlink_mission_current_t miss_curr;

          mavlink_msg_mission_current_decode(msg, &miss_curr);
          m_current_wp = miss_curr.seq;
          trace("Current mission item: %d", miss_curr.seq);

          uint8_t buf[512];

          mavlink_message_t msg_out;

          mavlink_msg_mission_request_pack(255, 0, &msg_out,
                                           m_sysid, //! target_system System ID
                                           0, //! target_component Component ID
                                           m_current_wp); //! Mission item to request

          uint16_t n = mavlink_msg_to_send_buffer(buf, &msg_out);
          sendData(buf, n);
        }

        void
        handleStatusTextPacket(const mavlink_message_t* msg)
        {
          mavlink_statustext_t stat_tex;
          mavlink_msg_statustext_decode(msg, &stat_tex);
          inf("AP Status: %.*s", 50, stat_tex.text);
        }

        void
        handleHeartbeatPacket(const mavlink_message_t* msg)
        {
          mavlink_heartbeat_t hbt;
          mavlink_msg_heartbeat_decode(msg, &hbt);

          // since GCS heartbeat are actually also sent, ignore if type is a GCS (6)
          if (static_cast<MAV_TYPE>(hbt.type) == MAV_TYPE_GCS)
            return;

          if (!m_has_setup_rate)
          {
            m_has_setup_rate = true;
            setupRate(m_args.trate);
            debug("Rates setup second time.");
          }

          if (hbt.system_status == MAV_STATE_CRITICAL)
            war("APM failsafe active");

          IMC::AutopilotMode mode;

          // Update vehicle type if applicable
          if (m_vehicle_type == VEHICLE_UNKNOWN)
          {
            MAV_TYPE mav_type = static_cast<MAV_TYPE>(hbt.type);
            switch (mav_type)
            {
            default:
              err(DTR("Controlling an unknown vehicle type."));
              printf("vehicle type is: %i (ROVER: %i, BOAT: %i)", mav_type, MAV_TYPE_GROUND_ROVER, MAV_TYPE_SURFACE_BOAT);
              return;
            case MAV_TYPE_SURFACE_BOAT:
              m_vehicle_type = VEHICLE_ROVER;
              inf(DTR("Controlling a surface boat."));
              break;
            case MAV_TYPE_GROUND_ROVER:
              m_vehicle_type = VEHICLE_ROVER;
              inf(DTR("Controlling a ground rover."));
              return;
            case MAV_TYPE_FIXED_WING:
            case MAV_TYPE_QUADROTOR:
            case MAV_TYPE_HEXAROTOR:
            case MAV_TYPE_OCTOROTOR:
            case MAV_TYPE_TRICOPTER:
              break;
            }
          }

          if (m_mode != (int)hbt.custom_mode)
            debug("Switched mode from %d to %d", m_mode, hbt.custom_mode);

          m_mode = hbt.custom_mode;
          if (m_vehicle_type == VEHICLE_ROVER)
          {
            switch(m_mode)
            {
              default:
                mode.autonomy = IMC::AutopilotMode::AL_MANUAL;
                mode.mode = "MANUAL";
                m_external = true;
                break;
              case RO_MODE_LEARNING:
                mode.autonomy = IMC::AutopilotMode::AL_MANUAL;
                mode.mode = "LEARNING";
                trace("LEARNING");
                m_external = true;
                break;
              case RO_MODE_HOLD:
                mode.autonomy = IMC::AutopilotMode::AL_AUTO;
                mode.mode = "HOLD";
                trace("HOLD");
                m_external = false;
                break;
              case RO_MODE_AUTO:
                mode.autonomy = IMC::AutopilotMode::AL_AUTO;
                mode.mode = "AUTO";
                trace("AUTO");
                m_external = false;
                break;
              case RO_MODE_RTL:
                mode.autonomy = IMC::AutopilotMode::AL_AUTO;
                mode.mode = "RTL";
                trace("RTL");
                m_external = false;
                break;
              case RO_MODE_GUIDED:
                mode.autonomy = IMC::AutopilotMode::AL_AUTO;
                mode.mode = "GUIDED";
                trace("GUIDED");
                m_external = false;
                break;
              case RO_MODE_INITIALISING:
                mode.autonomy = IMC::AutopilotMode::AL_AUTO;
                mode.mode = "INITIALISING";
                trace("INITIALISING");
                m_external = false;
                break;
            }
          }
          else
          {
            err(DTR("Controlling an unknown vehicle type."));
            return;
          }

          dispatch(mode);
        }

        void
        handleNavControllerPacket(const mavlink_message_t* msg)
        {
          mavlink_nav_controller_output_t nav_out;
          mavlink_msg_nav_controller_output_decode(msg, &nav_out);
          trace("WP Dist: %d", nav_out.wp_dist);
          IMC::DesiredRoll d_roll;
          IMC::DesiredPitch d_pitch;
          IMC::DesiredHeading d_head;
          IMC::DesiredZ d_z;

          // As wp_dist is an integer, we calculate distance manually.
          float vehicle_distance = 0;

          if (m_vehicle_type == VEHICLE_ROVER)
          {
            // As of AC 3.2, wp_dest is not updated in guided mode.
            // Calc distance between desired location and current location
            Matrix destination = Matrix(3, 1, 0.0);
            Matrix current_pos = Matrix(3, 1, 0.0);
            current_pos(0) = m_estate.x;
            current_pos(1) = m_estate.y;
            current_pos(2) = m_estate.z;

            //float alt = (m_dpath.end_z_units & IMC::Z_NONE) ? m_args.alt : (float)m_dpath.end_z;

            WGS84::displacement(m_estate.lat, m_estate.lon, m_estate.height,
                                m_dpath.end_lat, m_dpath.end_lon, 0,
                                &destination(0), &destination(1), &destination(2));

            vehicle_distance = (destination - current_pos).norm_2();

            // Store mavlink distance.
            nav_out.wp_dist = (uint16_t) vehicle_distance;
            trace("Rover waypoint dist now: %0.2f", vehicle_distance);
          }
          else
          {
            return;
          }

          d_roll.value = Angles::radians(nav_out.nav_roll);
          d_pitch.value = Angles::radians(nav_out.nav_pitch);
          d_head.value = Angles::radians(nav_out.nav_bearing);
          d_z.value = getHeight() + nav_out.alt_error;
          d_z.z_units = IMC::Z_HEIGHT;

          dispatch(d_roll);
          dispatch(d_pitch);

          if (m_args.ardu_tracker)
          {
            dispatch(d_head);
            dispatch(d_z);
          }

          if (!m_args.ardu_tracker)
            return;

          //! Check of guided mode
          bool is_valid_mode = false;

          if (m_vehicle_type == VEHICLE_ROVER)
            is_valid_mode = (m_mode == RO_MODE_GUIDED || (m_mode == RO_MODE_AUTO                     )) ? true : false;
          else
            is_valid_mode = (m_mode == 15             || (m_mode == 10           && m_current_wp == 3)) ? true : false;

          float since_last_wp = Clock::get() - m_last_wp;

          bool is_near = false;
          if (m_vehicle_type == VEHICLE_ROVER)
          {
            is_near = (!m_changing_wp
                && (vehicle_distance <= m_args.secs * m_gnd_speed
                    || vehicle_distance <= m_args.ro_wp_radius)
                && is_valid_mode
                && since_last_wp > 1.0);
          }
          else
          {
            err(DTR("Controlling an unknown vehicle type."));
            return;
          }

          if (is_near)
          {
            m_pcs.flags |= PathControlState::FL_NEAR;
          }

          if (m_last_wp && since_last_wp > 1.5)
            receive(&m_dpath);

          if (m_gnd_speed)
            m_pcs.eta = nav_out.wp_dist / m_gnd_speed;

          dispatch(m_pcs);
        }

        void
        handleMissionItemPacket(const mavlink_message_t* msg)
        {
          mavlink_mission_item_t miss_item;
          mavlink_msg_mission_item_decode(msg, &miss_item);
          trace("Mission type: %d", miss_item.command);

          switch(miss_item.command)
          {
            default:
              m_critical = false;
              break;
            case MAV_CMD_NAV_TAKEOFF:
              m_critical = true;
              break;
            case MAV_CMD_NAV_LAND:
              m_critical = true;
              break;
          }
        }

        void
        handleHUDPacket(const mavlink_message_t* msg)
        {
          mavlink_vfr_hud_t vfr_hud;
          mavlink_msg_vfr_hud_decode(msg, &vfr_hud);

          IMC::IndicatedSpeed ias;
          IMC::TrueSpeed gs;

          ias.value = (fp64_t)vfr_hud.airspeed;
          gs.value = (fp64_t)vfr_hud.groundspeed;
          m_gnd_speed = (int)vfr_hud.groundspeed;

          dispatch(ias);
          dispatch(gs);
        }

        void
        handleSystemTimePacket(const mavlink_message_t* msg)
        {
          mavlink_system_time_t sys_time;
          mavlink_msg_system_time_decode(msg, &sys_time);

          time_t t = sys_time.time_unix_usec / 1000000;
          struct tm* utc;
          utc = gmtime(&t);

          m_fix.utc_time = utc->tm_hour * 3600 + utc->tm_min * 60 + utc->tm_sec + (sys_time.time_unix_usec % 1000000) * 1e-6;
          m_fix.utc_year = utc->tm_year + 1900;
          m_fix.utc_month = utc->tm_mon +1;
          m_fix.utc_day = utc->tm_mday;

          if (m_fix.utc_year>2014)
            m_fix.validity |= (IMC::GpsFix::GFV_VALID_TIME | IMC::GpsFix::GFV_VALID_DATE);

          if (!m_args.hitl)
            dispatch(m_fix);
        }

        void
        handleMissionRequestPacket(const mavlink_message_t* msg)
        {
          mavlink_mission_request_t mission_request;
          mavlink_msg_mission_request_decode(msg, &mission_request);

          debug("Requesting item #%d", mission_request.seq);

          sendMissionItem(true);
        }
      };
    }
  }
}

DUNE_TASK

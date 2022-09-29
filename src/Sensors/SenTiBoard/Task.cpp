//***************************************************************************
// Copyright 2007-2018 Norwegian University of Science and Technology (NTNU)*
// Centre for Autonomous Marine Operations and Systems (AMOS)               *
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
// Author: João Fortuna based on work by Sigurd Albrektsen                  *
//***************************************************************************

//STL headers.
#include <map>
#include <utility>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Parser.hpp"
#include "Messages.hpp"
#include "uBlox.hpp"

namespace Sensors
{
  namespace SenTiBoard
  {
    using DUNE_NAMESPACES;

    //! Serial port baud rate.
    static const unsigned c_baud_rate = 115200;
    //! Maximum number of sensors connected to SenTiBoard
    static const unsigned c_max_sensors = 64;//9;

    //! Maximum number of triggers connected to SenTiBoard
    static const unsigned c_max_triggers = 64;//5;

    //! %Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Output frequency.
      unsigned output_frq;
      //! Number of seconds without data before reporting an error.
      //double timeout_error;
      //! Number of seconds without data before
      //! reporting a failure and restarting.
      //double timeout_failure;
      //! Sensor/trigger configuration
      std::string sensor_parser[c_max_sensors + c_max_triggers];
      //! Sensor/trigger Entity Labels
      std::string sensor_label[c_max_sensors];
      //! Trigger Entity Labels
      std::string trigger_label[c_max_triggers];
      //! Path to log directory
      std::string log_dir;
      //! Number of missing measurements before error is triggered
      uint8_t max_meas_drop_count_error[c_max_sensors + c_max_triggers];
      //! Number of missing measurements before restart
      uint8_t max_meas_drop_count_restart[c_max_sensors + c_max_triggers];
      //! Whether the data is used for only logging or in closed loop
      bool is_closed_loop;
      //! Whether data should be logged
      bool should_log;
      //! Bool disable parsing
      bool disable_parsing;
      //! Force non-GPS based TOV unwrapping
      bool unwrap_tov_internally;
      //! Experiment with new, simple TOV unwrap
      bool new_tov_unwrap;
    };

    struct TimeConversion
    {
      // Last GPS TOV in SenTiBoard time
      double senti_gps;
      // Last GPS TOV in Unix Epoch time
      double epoch_gps;
      // Last TOV in SenTiBoard time (any message)
      double senti_lst;
    };

    struct Task: public Tasks::Task
    {
      // IMU messages ///////////////////////////////////
      //! Angular velocity.
      IMC::AngularVelocity m_ang_vel;
      //! Acceleration.
      IMC::Acceleration m_accel;
      //! Delta angles.
      IMC::EulerAnglesDelta m_delt_ang;
      //! Delta velocity.
      IMC::VelocityDelta m_delt_vel;
      //! Euler Angles.
      IMC::EulerAngles m_euler;
      //! Magnetic Field.
      IMC::MagneticField m_magn;
      //! Temperature.
      IMC::Temperature m_temp;
      //! combined Acc and ang vel data
      IMC::Imu m_imu;
      //! Moving average for message drop outs, temperature
      Math::MovingAverage<double>* m_temp_avg;
      //! Moving average for message drop outs, delta vel x
      Math::MovingAverage<double>* m_deltvel_avg_x;
      //! Moving average for message drop outs, delta vel y
      Math::MovingAverage<double>* m_deltvel_avg_y;
      //! Moving average for message drop outs, delta vel z
      Math::MovingAverage<double>* m_deltvel_avg_z;
      //! Moving average for message drop outs, delta ang x
      Math::MovingAverage<double>* m_deltang_avg_x;
      //! Moving average for message drop outs, delta ang y
      Math::MovingAverage<double>* m_deltang_avg_y;
      //! Moving average for message drop outs, delta ang z
      Math::MovingAverage<double>* m_deltang_avg_z;

      /* // GNSS messages.
      //! GPS Fix.
      IMC::GpsFix m_gps_fix;
      //! GPS Nav Data.
      IMC::GpsNavData m_gps_nav;
      //! GNSS relative position
      IMC::UbxRelPosNED m_ubxrelpos;
      //! DOP
      IMC::UbxDOP m_ubxdop;
      //! Satellite info
      IMC::UbxSat m_ubxsat;
      //! Signal info
      IMC::UbxSig m_ubxsig;
      //! Receiver status
      IMC::UbxStatus m_ubxstatus;
      //! Receiver survey-in status
      IMC::UbxSvIn m_ubxsvin;*/
      

      //! Serial port device.
      SerialPort* m_uart;
      //! Scratch buffer.
      uint8_t m_buffer[2048];
      //! Parser state
      Parser m_parser;
      //! Type definition for SenTiBoard packet handler.
      typedef void (Task::* PktHandler)(const SenTiBoard::Packet* pkt);
      typedef std::map<uint8_t, PktHandler> PktHandlerMap;
      //! SenTiBoard packet handling.
      PktHandlerMap m_sbph;

      //! Map from SenTiBoard packet ID to ostream index
      typedef std::map<uint8_t, uint8_t> ostream_map;


      //! Last timestamp of message.
      std::map<uint8_t, double> m_timestamps;
      //double m_timestamps[c_max_sensors];
      //! Last TOV of message.
      std::map<uint8_t, uint32_t> m_prev_tov;
      //uint32_t m_prev_tov[c_max_sensors];
      //! Number of times TOV has wrapped
      std::map<uint8_t, uint32_t> m_num_wrapped_tov;
      //uint32_t m_num_wrapped_tov[c_max_sensors];
      //! Parser to use for each sensor.
      std::map<uint8_t, uint8_t> m_sensor_parser;
      //uint8_t m_sensor_parser[c_max_sensors];
      //! Entity to use for each sensor.
      std::map<uint8_t, unsigned> m_sensor_entity;
      //unsigned m_sensor_entity[c_max_sensors];
      //! Destination log folder.
      Path m_log_dir;
      //! Entity state timer.
      Counter<double> m_state_timer;
      //! Task arguments.
      Arguments m_args;
      //! TTime Conversion struct.
      TimeConversion m_tc;
      bool m_has_gps;
      //! Current number of missing messages
      std::map<uint8_t, uint8_t> m_bad_samples;
      //uint8_t m_bad_samples[c_max_sensors];
      
      //! Raw log outputs
      std::map<uint8_t, std::ofstream*> ostreams;
      //std::ofstream ostreams[c_max_sensors+c_max_triggers];
     
      int8_t m_control_operation = -1;

      //! Parsers ready
      bool m_parsers_ready;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_deltvel_avg_x(NULL),
        m_deltvel_avg_y(NULL),
        m_deltvel_avg_z(NULL),
        m_deltang_avg_x(NULL),
        m_deltang_avg_y(NULL),
        m_deltang_avg_z(NULL),
        m_uart(NULL),
        m_state_timer(1.0),
        m_has_gps(false),
        m_parsers_ready(false)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        /*param("Timeout - Error", m_args.timeout_error)
        .defaultValue("3.0")
        .minimumValue("1.0")
        .units(Units::Second)
        .description("Number of seconds without data before reporting an error");

        param("Timeout - Failure", m_args.timeout_failure)
        .defaultValue("6.0")
        .minimumValue("1.0")
        .units(Units::Second)
        .description("Number of seconds without data before restarting task");*/

        param("Used in closed loop", m_args.is_closed_loop)
        .defaultValue("false")
        .description("Error handling is more critical, and possibly time consuming, when this is enabled");

        param("Should log", m_args.should_log)
        .defaultValue("true")
        .description("Log raw sensor measurements");

        param("Disable parsing", m_args.disable_parsing)
        .defaultValue("false")
        .description("Disable parsing and IMC dispatch, can be used to reduce CPU load if the task is only used for logging raw data");

        param("Force non-GPS based TOV unwrapping", m_args.unwrap_tov_internally)
        .defaultValue("true")
        .description("Only base TOV unwrapping on previous TOV from the sensor, not last GPS TOV");

        param("New TOV unwrap", m_args.new_tov_unwrap)
        .defaultValue("true")
        .description("Detect TOV wrap by comparing TOV+2^31 < prev_time");

        // Extract sensor configurations
        for(unsigned i = 0; i < c_max_sensors; i++)
        {
          std::string option = String::str("Sensor %u - Entity Label", i);
          param(option, m_args.sensor_label[i])
          .defaultValue("")
          .description("Sensor Entity Label");

          option = String::str("Sensor %u - Parser", i);
          param(option, m_args.sensor_parser[i])
          .defaultValue("")
          .description("Parser to use on Sensor data");

          option = String::str("Sensor %u - max missing samples, error", i);
          param(option, m_args.max_meas_drop_count_error[i])
          .defaultValue("0")
          .description("Max number of consequtive dropped samples before error is triggered");

          option = String::str("Sensor %u - max missing samples, restart", i);
          param(option, m_args.max_meas_drop_count_restart[i])
          .defaultValue("0")
          .description("Max number of consequtive dropped samples before restart");
        }

        // Extract trigger configurations. Offset by 64 since
        // Sensors have IDs 0-63 while Triggers have ID 64-
        for(unsigned i = 0; i < c_max_triggers; i++)
        {
	        std::string option = String::str("Sensor %u - Entity Label", c_max_sensors+i);
          param(option, m_args.trigger_label[i])
          .defaultValue("")
          .description("Sensor Entity Label");

          option = String::str("Sensor %u - Parser", c_max_sensors+i);
          param(option, m_args.sensor_parser[ i + c_max_sensors ])
          .defaultValue("")
          .description("Parser to use on Sensor data");

          option = String::str("Sensor %u - max missing samples, error", c_max_sensors+i);
          param(option, m_args.max_meas_drop_count_error[ i + c_max_sensors ])
          .defaultValue("0")
          .description("Max number of consequtive dropped samples before error is triggered");

          option = String::str("Sensor %u - max missing samples, restart", c_max_sensors+i);
          param(option, m_args.max_meas_drop_count_restart[ i + c_max_sensors ])
          .defaultValue("0")
          .description("Max number of consequtive dropped samples before restart");
	      }

        param("Raw Log Dir", m_args.log_dir)
        .defaultValue("")
        .description("Path to SenTiBoard Log Directory");

        // Setup packet handlers to handle each type of packet here.
        m_sbph[SENTIBOARD_MSG_ID_ADIS] = &Task::handleADISPacket;
        //m_sbph[SENTIBOARD_MSG_ID_UBLX] = &Task::handleUBLXPacket;
        m_sbph[SENTIBOARD_MSG_ID_PULS] = &Task::handlePULSPacket;
        m_sbph[SENTIBOARD_MSG_ID_STIM] = &Task::handleSTIMPacket;
        m_sbph[SENTIBOARD_MSG_ID_HMR] = &Task::handleHMRPacket;
        //std::fill_n(m_timestamps, c_max_sensors, -1.0);
        //std::fill_n(m_prev_tov, c_max_sensors, -1);
        //std::fill_n(m_num_wrapped_tov, c_max_sensors, 0);
        //std::fill_n(m_bad_samples, c_max_sensors, 0.0);

        bind<IMC::LoggingControl>(this);
      }

      void
      onUpdateParameters(void)
      {
        //m_log_dir = m_args.log_dir;

        // need confirmation if we still have GPS
        m_has_gps = false;
        for(unsigned i = 0; i < c_max_sensors; i++)
        {
          if (m_args.sensor_parser[i] == "ADIS")
            m_sensor_parser[i] = SENTIBOARD_MSG_ID_ADIS;
          else if (m_args.sensor_parser[i] == "UBLOX")
            m_sensor_parser[i] = SENTIBOARD_MSG_ID_UBLX;
          else if (m_args.sensor_parser[i] == "PULSE")
            m_sensor_parser[i] = SENTIBOARD_MSG_ID_PULS;
          else if (m_args.sensor_parser[i] == "STIM")
            m_sensor_parser[i] = SENTIBOARD_MSG_ID_STIM;
          else if (m_args.sensor_parser[i] == "HMR")
            m_sensor_parser[i] = SENTIBOARD_MSG_ID_HMR;
          else if (m_args.sensor_parser[i] == "")
            m_sensor_parser[i] = 0;
          else
            err("Unknown Parser selected for Sensor %d: %s", i, m_args.sensor_parser[i].c_str());
        }
        m_parsers_ready = true;
        spew("End onUpdateParameters");
      }

      // un-wrap tov, by either comparing to GPS time (if available) or to prev_timestamp,
      //  and translate to timestamp
      double
      getTimestamp(uint32_t tov, uint8_t id)
      {
        double prev_timestamp = m_timestamps[id];
        double timestamp;

        if(!m_args.new_tov_unwrap)
        {
          timestamp  = 10.0 * (double)tov / Time::c_nsec_per_sec_fp;
          if (m_has_gps && !m_args.unwrap_tov_internally )
          {

            if (tov < m_tc.senti_gps)
            {
              timestamp += 10.0 * (double)UINT32_MAX / Time::c_nsec_per_sec_fp;
            }
          }
          else
          {
            // we must fake senti_gps, to avoid wrap in timestamp
            if ((timestamp + (m_tc.epoch_gps - m_tc.senti_gps)) < prev_timestamp)
            {
              m_tc.epoch_gps += 10.0 * (double)UINT32_MAX / Time::c_nsec_per_sec_fp;
            }
          }

          timestamp += (m_tc.epoch_gps - m_tc.senti_gps);
        }
        else
        {
          if( tov < m_prev_tov[id])
          {
            m_num_wrapped_tov[id] += 1;
          }
          spew("prev tov: %d", m_prev_tov[id]);
          
          m_prev_tov[id] = tov;
          
          timestamp  = (10.0 * (double)tov / Time::c_nsec_per_sec_fp) + (10.0 * m_num_wrapped_tov[id] * (double)(UINT32_MAX) / Time::c_nsec_per_sec_fp);
          spew("id: %d, tov: %d, num_wrapped: %d, timestamp: %f", id, tov, m_num_wrapped_tov[id], timestamp);
        }

        return timestamp;
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        unsigned eid = 0;

        for (unsigned i = 0; i < c_max_sensors; i++)
        {
          if (m_args.sensor_label[i].empty())
            continue;

          try
          {
            eid = resolveEntity(m_args.sensor_label[i]);
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity(m_args.sensor_label[i]);
          }

          m_sensor_entity[i] = eid;
        }
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        IMC::LoggingControl log_ctl;
        log_ctl.op = IMC::LoggingControl::COP_REQUEST_CURRENT_NAME;
        dispatch(log_ctl);

        m_deltvel_avg_x = new Math::MovingAverage<double>(3);
        m_deltvel_avg_y = new Math::MovingAverage<double>(3);
        m_deltvel_avg_z = new Math::MovingAverage<double>(3);
        m_deltang_avg_x = new Math::MovingAverage<double>(3);
        m_deltang_avg_y = new Math::MovingAverage<double>(3);
        m_deltang_avg_z = new Math::MovingAverage<double>(3);
        try
        {
          m_uart = new SerialPort(m_args.uart_dev, c_baud_rate);
        }
        catch (std::runtime_error& e)
        {
          err("Serial port initialization failed");
          throw RestartNeeded(DTR(e.what()), 5.0, false);
        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
        Memory::clear(m_temp_avg);
        Memory::clear(m_deltvel_avg_x);
        Memory::clear(m_deltvel_avg_y);
        Memory::clear(m_deltvel_avg_z);
        Memory::clear(m_deltang_avg_x);
        Memory::clear(m_deltang_avg_y);
        Memory::clear(m_deltang_avg_z);

        for( auto it = ostreams.begin(); it != ostreams.end(); ++it)
        {
          it->second->close();
          delete it->second;
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        if ((msg->getDestination() != getSystemId()))
          return;

        if (msg->op == IMC::LoggingControl::COP_CURRENT_NAME || msg->op == IMC::LoggingControl::COP_REQUEST_START)
        {
          m_log_dir = m_args.log_dir / msg->name / "sentiboard_1" ;
          m_log_dir.create();
          if ( m_args.should_log )
          {
            for(unsigned i = 0; i < c_max_sensors; i++)
            {
              // Open files for writing logs
              if (m_args.sensor_label[i] != "")
              {
		            war("Opening file for sensor %u!",i);
		
                // Create destination directory.
                Path path = m_log_dir / String::str("sensor_%u.stb", i);

                // Close, in case we were already logging
                ostreams.insert(std::make_pair(i, new std::ofstream));	
                ostreams[i]->close();
		
                // Open file for writing.
                ostreams[i]->open(path.c_str(), std::ios::binary | std::ios::app);     
              }
            }
            for(unsigned i = 0; i < c_max_triggers; i++)
            {
              // Open files for writing logs
              if (m_args.trigger_label[i] != "")
              {
                war("Opening file for sensor %u!",c_max_sensors+i);

                // Create destination directory
                Path path = m_log_dir / String::str("sensor_%u.stb", c_max_sensors+i);

                // Close, in case we were already logging
                ostreams.insert(std::make_pair(i+c_max_sensors, new std::ofstream));
                ostreams[c_max_sensors+i]->close();

                // Open file for writing
                ostreams[c_max_sensors+i]->open(path.c_str(), std::ios::binary |
                    std::ios::app);
              }
            }
	          m_control_operation = msg->op;
          }
        }
        else if (msg->op == IMC::LoggingControl::COP_REQUEST_STOP)
        {
          for(auto it = ostreams.begin(); it != ostreams.end(); ++it)
            it->second->close();
	        m_control_operation = msg->op;
        }
      }

      //! Read input from sensor.
      void
      readInput(void)
      {
        size_t rv = m_uart->read(m_buffer, sizeof(m_buffer));

        for (size_t i = 0; i < rv; ++i)
        {
          if (m_parser.parse(m_buffer[i]))
	        {
            Packet packet = m_parser.getPacket();
            spew("Packet received! Sensor: %u", packet.getID());

	          // Check if we are logging packets AND if the received packet ID is valid.
            if (m_args.should_log && ostreams.count(packet.getID()) &&
			        ((m_control_operation == IMC::LoggingControl::COP_REQUEST_START) ||
              (m_control_operation == IMC::LoggingControl::COP_CURRENT_NAME) ||
              (m_control_operation == IMC::LoggingControl::COP_STARTED)))
            {
              // Timestamp message  and write to file.
              char sync[2] =  {'^','C'}; //Change sync, to signify timestamp
              ostreams[packet.getID()]->write(sync,2);
              ostreams[packet.getID()]->write((char*)(packet.header + 2),6);
              double onboard_time = Clock::getSinceEpoch();
              ostreams[packet.getID()]->write(
			        reinterpret_cast<const char*>(&onboard_time),8);
              ostreams[packet.getID()]->write(
			        (char*)packet.data,m_parser.getLength());
              const uint16_t checksum = m_parser.getDataChecksum();
              uint8_t chk_arr[2];
              chk_arr[1] = checksum & 0xff;
              chk_arr[0] = checksum >> 8;
              ostreams[packet.getID()]->write((char*)chk_arr, 2);
              ostreams[packet.getID()]->flush();
            }
            // Give warning if packet ID is not valid.
            else if (m_args.should_log && (m_control_operation != -1))
            {
              war("m_control_operation = %u", m_control_operation);
              war("Packet with ID %u does not have a valid entry in the ostreams map!",
                  packet.getID());
            }

            if (m_args.disable_parsing)
            {
              continue;
            }

            PktHandler h = m_sbph[m_sensor_parser[packet.getID()]];
            if (!h)
            {
              trace("Parser not set up for sensor: %u", packet.getID());
              continue;  // Ignore this packet (no handler for it)
            }

            // Call handler
            (this->*h)(&packet);
          }
        }
      }

      void
      handleHMRPacket(const SenTiBoard::Packet* pkt)
      {
        m_magn.setTimeStamp();

        SenTiBoard::HMR hmr_message(pkt);

        spew("HMR: %f, %f, %f, %f, %f, %f, %f",
            hmr_message.tilt_x,
            hmr_message.tilt_y,
            hmr_message.mag_x,
            hmr_message.mag_y,
            hmr_message.mag_z,
            hmr_message.mag_t,
            hmr_message.heading);

        if (!hmr_message.isValid())
        {
          war("%s", hmr_message.getFault().c_str());
        }

        double timestamp = getTimestamp(hmr_message.getTOV(), pkt->getID());

        if (hmr_message.isValid())
        {
          m_magn.time = timestamp;
          m_magn.x = hmr_message.mag_x;
          m_magn.y = hmr_message.mag_y;
          m_magn.z = hmr_message.mag_z;

          m_magn.setSourceEntity(m_sensor_entity[pkt->getID()]);

          dispatch(m_magn);
        }

        m_timestamps[pkt->getID()] = timestamp;
      }

      void
      handleADISPacket(const SenTiBoard::Packet* pkt)
      {
        m_delt_ang.setTimeStamp();
        m_delt_vel.setTimeStamp(m_delt_ang.getTimeStamp());
        m_temp.setTimeStamp(m_delt_ang.getTimeStamp());
        m_accel.setTimeStamp(m_delt_ang.getTimeStamp());
        m_ang_vel.setTimeStamp(m_delt_ang.getTimeStamp());


        SenTiBoard::ADIS adis_message(pkt);

        if (!adis_message.isValid())
        {
        	war("%s", adis_message.getFault().c_str());
        }

        spew("ADIS: %f, %f, %f, %f, %f, %f, %f",
            adis_message.temperature,
            adis_message.dang_x,
            adis_message.dang_y,
            adis_message.dang_z,
            adis_message.dvel_x,
            adis_message.dvel_y,
            adis_message.dvel_z);

        double timestamp = getTimestamp(adis_message.getTOV(), pkt->getID());
        float fps = 1 / (timestamp - m_timestamps[pkt->getID()]);

        if (adis_message.isValid())
        {
          m_delt_ang.time = timestamp;
          m_delt_ang.x = adis_message.dang_x;
          m_delt_ang.y = adis_message.dang_y;
          m_delt_ang.z = adis_message.dang_z;

          m_delt_vel.time = timestamp;
          m_delt_vel.x = adis_message.dvel_x;
          m_delt_vel.y = adis_message.dvel_y;
          m_delt_vel.z = adis_message.dvel_z;

          m_temp.value = adis_message.temperature;

          m_delt_ang.setSourceEntity(m_sensor_entity[pkt->getID()]);
          m_delt_vel.setSourceEntity(m_sensor_entity[pkt->getID()]);
          m_temp.setSourceEntity(m_sensor_entity[pkt->getID()]);

          dispatch(m_delt_ang);
          dispatch(m_delt_vel);
          dispatch(m_temp);

          if (m_timestamps[pkt->getID()] > 0)
          {
            m_accel.time = timestamp;
            m_accel.x = adis_message.dvel_x * fps;
            m_accel.y = adis_message.dvel_y * fps;
            m_accel.z = adis_message.dvel_z * fps;

            m_ang_vel.time = timestamp;
            m_ang_vel.x = adis_message.dang_x * fps;
            m_ang_vel.y = adis_message.dang_y * fps;
            m_ang_vel.z = adis_message.dang_z * fps;

            m_accel.setSourceEntity(m_sensor_entity[pkt->getID()]);
            m_ang_vel.setSourceEntity(m_sensor_entity[pkt->getID()]);

            dispatch(m_accel);
            dispatch(m_ang_vel);

            //also dispatch IMU message
            m_imu.acceleration.set(m_accel);
            m_imu.angular_velocity.set(m_ang_vel);
            m_imu.setSourceEntity(m_sensor_entity[pkt->getID()]);
            dispatch(m_imu,DF_KEEP_TIME);
          }
        }

        m_timestamps[pkt->getID()] = timestamp;
      }

      void
      handleSTIMPacket(const SenTiBoard::Packet* pkt)
      {
        fp32_t temp;
        //int numBytes = 0;
        //uint32_t bytes;
        //const uint8_t* bfr;

        m_delt_ang.setTimeStamp();
        m_delt_vel.setTimeStamp(m_delt_ang.getTimeStamp());
        m_accel.setTimeStamp(m_delt_ang.getTimeStamp());
        m_ang_vel.setTimeStamp(m_delt_ang.getTimeStamp());
        m_temp.setTimeStamp(m_delt_ang.getTimeStamp());

        try
        {
          SenTiBoard::STIM stim_message(pkt);

          spew("STIM: %f %f %f, %f %f %f, %f %f %f, %f %f %f, %f",
              stim_message.gyro_x,
              stim_message.gyro_y,
              stim_message.gyro_z,
              stim_message.accl_x,
              stim_message.accl_y,
              stim_message.accl_z,
              stim_message.gyro_x_temp,
              stim_message.gyro_y_temp,
              stim_message.gyro_z_temp,
              stim_message.accl_x_temp,
              stim_message.accl_y_temp,
              stim_message.accl_z_temp,
              stim_message.PPS);
          spew("COUNT AND LATENCY: %u %u", stim_message.COUNT_P, stim_message.LATENCY_P);
          spew("STATUS: Gyro, Accl, Gyro_T, Accl_T, PPS  %u %u %u %u %u", stim_message.gyro_status, stim_message.accl_status, stim_message.gyro_t_status, stim_message.accl_t_status, stim_message.PPS_status);
/*               stim_message.incl_x,
              stim_message.incl_y,
              stim_message.incl_z); */

          double timestamp = getTimestamp(stim_message.getTOV(), pkt->getID());
          float fps = 1 / (timestamp - m_timestamps[pkt->getID()]);
          if (fps < 200)
          {
                  war("low FPS!");
                  // return;
          }

          m_temp.time = timestamp;
          temp = stim_message.gyro_x_temp + stim_message.gyro_y_temp + stim_message.gyro_z_temp
                 + stim_message.accl_x_temp + stim_message.accl_y_temp + stim_message.accl_z_temp;
          m_temp.value = temp / 6;

          spew("Temp value, time: %f, %f", m_temp.value, m_temp.time);

          m_delt_ang.time = timestamp;
          //STIM gyro is in degrees
          m_delt_ang.x = Angles::radians(stim_message.gyro_x);
          m_delt_ang.y = Angles::radians(stim_message.gyro_y);
          m_delt_ang.z = Angles::radians(stim_message.gyro_z);

          m_delt_vel.time = timestamp;
          m_delt_vel.x = stim_message.accl_x;
          m_delt_vel.y = stim_message.accl_y;
          m_delt_vel.z = stim_message.accl_z;

          m_temp.setSourceEntity(m_sensor_entity[pkt->getID()]);
          m_delt_ang.setSourceEntity(m_sensor_entity[pkt->getID()]);
          m_delt_vel.setSourceEntity(m_sensor_entity[pkt->getID()]);

          if (fps > 200)
          {
            dispatch(m_temp,DF_KEEP_TIME);
            dispatch(m_delt_ang,DF_KEEP_TIME);
            dispatch(m_delt_vel,DF_KEEP_TIME);
          }

          // fps is valid, we can find acc and rates
          if (m_timestamps[pkt->getID()] > 0)
          {
            m_accel.time = timestamp;
            m_accel.x = m_delt_vel.x * fps;
            m_accel.y = m_delt_vel.y * fps;
            m_accel.z = m_delt_vel.z * fps;

            m_ang_vel.time = timestamp;
            m_ang_vel.x = m_delt_ang.x * fps;
            m_ang_vel.y = m_delt_ang.y * fps;
            m_ang_vel.z = m_delt_ang.z * fps;

            m_accel.setSourceEntity(m_sensor_entity[pkt->getID()]);
            m_ang_vel.setSourceEntity(m_sensor_entity[pkt->getID()]);

            if (fps > 200)
            {
              dispatch(m_accel,DF_KEEP_TIME);
              dispatch(m_ang_vel,DF_KEEP_TIME);
            }
          }

          m_timestamps[pkt->getID()] = timestamp;
          if(m_args.is_closed_loop)
          {
            if (m_timestamps[pkt->getID()] > 0)
            {
              //also dispatch IMU message
              m_imu.acceleration.set(m_accel);
              m_imu.angular_velocity.set(m_ang_vel);
              m_imu.setSourceEntity(m_sensor_entity[pkt->getID()]);
              dispatch(m_imu, DF_KEEP_TIME);
            }
            //add measurements to moving average, in case of future dropout
            m_deltvel_avg_x->update(m_delt_vel.x);
            m_deltvel_avg_y->update(m_delt_vel.y);
            m_deltvel_avg_z->update(m_delt_vel.z);
            m_deltang_avg_x->update(m_delt_ang.x);
            m_deltang_avg_y->update(m_delt_ang.y);
            m_deltang_avg_z->update(m_delt_ang.z);
            m_bad_samples[pkt->getID()] = 0;
          }
        }
        catch(std::runtime_error& e)
        {
        
          //approximate the timestamp, to avoid wrong fps in next message
          // NB: Assume STIM runs at 250 Hz
          float fps = 1000; //250?
          double timestamp = m_timestamps[pkt->getID()] + 1.0/fps;
          m_timestamps[pkt->getID()] = timestamp;

          if(m_args.is_closed_loop)
          {
            war("%s. Approximating STIM data from previous data", e.what());
            
            // Error handling
            m_bad_samples[pkt->getID()]++;

            m_temp.time = timestamp;
            m_temp.value = m_temp_avg->mean();

            m_delt_ang.time = timestamp;
            //STIM gyro is in degrees
            m_delt_ang.x = Angles::radians(m_deltang_avg_x->mean());
            m_delt_ang.y = Angles::radians(m_deltang_avg_y->mean());
            m_delt_ang.z = Angles::radians(m_deltang_avg_z->mean());

            m_delt_vel.time = timestamp;
            m_delt_vel.x = m_deltang_avg_x->mean();
            m_delt_vel.y = m_deltang_avg_y->mean();
            m_delt_vel.z = m_deltang_avg_z->mean();

            m_temp.setSourceEntity(m_sensor_entity[pkt->getID()]);
            m_delt_ang.setSourceEntity(m_sensor_entity[pkt->getID()]);
            m_delt_vel.setSourceEntity(m_sensor_entity[pkt->getID()]);

            dispatch(m_temp,DF_KEEP_TIME);
            dispatch(m_delt_ang,DF_KEEP_TIME);
            dispatch(m_delt_vel,DF_KEEP_TIME);

            m_accel.time = timestamp;
            m_accel.x = m_deltvel_avg_x->mean() * fps;
            m_accel.y = m_deltvel_avg_y->mean() * fps;
            m_accel.z = m_deltvel_avg_z->mean() * fps;

            m_ang_vel.time = timestamp;
            m_ang_vel.x = m_deltang_avg_x->mean() * fps;
            m_ang_vel.y = m_deltang_avg_y->mean() * fps;
            m_ang_vel.z = m_deltang_avg_z->mean() * fps;

            m_accel.setSourceEntity(m_sensor_entity[pkt->getID()]);
            m_ang_vel.setSourceEntity(m_sensor_entity[pkt->getID()]);

            dispatch(m_accel,DF_KEEP_TIME);
            dispatch(m_ang_vel,DF_KEEP_TIME);
            //also dispatch IMU message
            m_imu.acceleration.set(m_accel);
            m_imu.angular_velocity.set(m_ang_vel);
            m_imu.setSourceEntity(m_sensor_entity[pkt->getID()]);
            dispatch(m_imu,DF_KEEP_TIME);
          }
	      }
      }

      /*void
      handleUBLXPacket(const SenTiBoard::Packet* pkt)
      {
        SenTiBoard::uBlox ubx_message(pkt);

        spew("uBlox message: ID:%u, Length: %u", ubx_message.id, ubx_message.getLength());

        if (ubx_message.id == UBX_MSG_NAV_PVT)
        {
          m_gps_fix.setTimeStamp();
          m_gps_nav.setTimeStamp(m_gps_fix.getTimeStamp());

          SenTiBoard::uBloxNavPvt pvt_msg = SenTiBoard::uBloxNavPvt(ubx_message);

          //! GPS Fix data
          m_gps_fix.utc_year = pvt_msg.year;
          m_gps_fix.utc_month = pvt_msg.month;
          m_gps_fix.utc_day = pvt_msg.day;
          m_gps_fix.utc_time = pvt_msg.time_of_fix;

          m_gps_fix.lat = pvt_msg.lat;
          m_gps_fix.lon = pvt_msg.lon;
          m_gps_fix.height = pvt_msg.height;

          m_gps_fix.satellites = pvt_msg.numSV;

          m_gps_fix.cog = pvt_msg.headMot;
          m_gps_fix.sog = pvt_msg.gSpeed;

          m_gps_fix.hacc = pvt_msg.hAcc;
          m_gps_fix.vacc = pvt_msg.vAcc;

          m_gps_fix.type = GpsFix::GFT_STANDALONE;
          m_gps_fix.validity = GpsFix::GFV_VALID_COG;
          m_gps_fix.validity |= GpsFix::GFV_VALID_DATE;
          m_gps_fix.validity |= GpsFix::GFV_VALID_HACC;
          m_gps_fix.validity |= GpsFix::GFV_VALID_POS;
          m_gps_fix.validity |= GpsFix::GFV_VALID_SOG;
          m_gps_fix.validity |= GpsFix::GFV_VALID_TIME;
          m_gps_fix.validity |= GpsFix::GFV_VALID_VACC;

          //! GPS Navigation Data
          m_gps_nav.itow = pvt_msg.iTOW;
          m_gps_nav.lat = pvt_msg.lat;
          m_gps_nav.lon = pvt_msg.lon;
          m_gps_nav.height_ell = pvt_msg.height;
          m_gps_nav.height_sea = pvt_msg.hMSL;
          m_gps_nav.hacc = pvt_msg.hAcc;
          m_gps_nav.vacc = pvt_msg.vAcc;
          m_gps_nav.vel_n = pvt_msg.velN;
          m_gps_nav.vel_e = pvt_msg.velE;
          m_gps_nav.vel_d = pvt_msg.velD;
          m_gps_nav.speed = std::sqrt(pvt_msg.velN * pvt_msg.velN +
              pvt_msg.velE * pvt_msg.velE +
              pvt_msg.velD * pvt_msg.velD);
          m_gps_nav.gspeed = pvt_msg.gSpeed;
          m_gps_nav.heading = pvt_msg.headMot;
          m_gps_nav.sacc = pvt_msg.sAcc;
          m_gps_nav.cacc = pvt_msg.headAcc;

          m_gps_fix.setSourceEntity(m_sensor_entity[pkt->getID()]);
          m_gps_nav.setSourceEntity(m_sensor_entity[pkt->getID()]);

          dispatch(m_gps_fix);
          dispatch(m_gps_nav);

          tm bdt = {0};
          bdt.tm_mday = pvt_msg.day;
          bdt.tm_mon = pvt_msg.month - 1;
          bdt.tm_year = pvt_msg.year - 1900;
          bdt.tm_hour = (int)pvt_msg.hour;
          bdt.tm_min = (int)pvt_msg.min;
          bdt.tm_sec = (int)pvt_msg.sec;

          time_t gps_time = mktime(&bdt);

          m_has_gps = true;
          m_tc.epoch_gps = (double)gps_time + 1e-9 * (double)pvt_msg.nano;
          m_tc.senti_gps = 10.0 * (double)ubx_message.getTOV() / Time::c_nsec_per_sec_fp;
        }

        else if (ubx_message.id == UBX_MSG_NAV_RELPOSNED)
        {
          m_ubxrelpos.setTimeStamp();
          SenTiBoard::uBloxNavRelposned relpos_msg = SenTiBoard::uBloxNavRelposned(ubx_message);
          m_ubxrelpos.setSourceEntity(m_sensor_entity[pkt->getID()]);
          m_ubxrelpos.refstationid = relpos_msg.refStationId;
          m_ubxrelpos.itow = relpos_msg.iTOW;
          m_ubxrelpos.relposn = relpos_msg.relPosN;
          m_ubxrelpos.relpose = relpos_msg.relPosE;
          m_ubxrelpos.relposd = relpos_msg.relPosD;
          m_ubxrelpos.relposlength = relpos_msg.relPosLength;
          m_ubxrelpos.relposheading = relpos_msg.relPosHeading;
          m_ubxrelpos.accn = relpos_msg.accN;
          m_ubxrelpos.acce = relpos_msg.accE;
          m_ubxrelpos.accd = relpos_msg.accD;
          m_ubxrelpos.gnssfixok = relpos_msg.flags & 1;
          m_ubxrelpos.diffsoln = (relpos_msg.flags >> 1) & 1;
          m_ubxrelpos.relposvalid = (relpos_msg.flags >> 2) & 1;
          m_ubxrelpos.ismoving = (relpos_msg.flags >> 5) & 1;
          m_ubxrelpos.refposmiss = (relpos_msg.flags >> 6) & 1;
          m_ubxrelpos.refobsmiss = (relpos_msg.flags >> 7) & 1;
          m_ubxrelpos.relposheadingvalid = (relpos_msg.flags >> 8) & 1;
          m_ubxrelpos.carrsoln = (relpos_msg.flags >> 3) & 3;
          dispatch(m_ubxrelpos);
        }

        else if (ubx_message.id == UBX_MSG_NAV_SAT)
        {
          m_ubxsat.clear();
          m_ubxsat.setTimeStamp();
          SenTiBoard::uBloxNavSat sat_msg = SenTiBoard::uBloxNavSat(ubx_message);
          m_ubxsat.setSourceEntity(m_sensor_entity[pkt->getID()]);
          m_ubxsat.numsvs = sat_msg.numSvs;
          for (int i = 0; i < sat_msg.numSvs; i++)
          {
            IMC::gnssSatellite sat;
            sat.gnssid = sat_msg.svInfo[i].gnssId;
            sat.svid = sat_msg.svInfo[i].svId;
            sat.elev = sat_msg.svInfo[i].elev;
            sat.azim = sat_msg.svInfo[i].azim;
            m_ubxsat.svs.push_back(sat);
          }
          dispatch(m_ubxsat);
        }

        else if (ubx_message.id == UBX_MSG_NAV_SIG)
        {
          m_ubxsig.clear();
          m_ubxsig.setTimeStamp();
          SenTiBoard::uBloxNavSig sig_msg = SenTiBoard::uBloxNavSig(ubx_message);
          m_ubxsig.setSourceEntity(m_sensor_entity[pkt->getID()]);
          m_ubxsig.numsigs = sig_msg.numSigs;
          for (int i = 0; i < sig_msg.numSigs; i++)
          {
            IMC::gnssSignal signal;
            signal.gnssid = sig_msg.signalInfo[i].gnssId;
            signal.svid = sig_msg.signalInfo[i].svId;
            signal.sigid = sig_msg.signalInfo[i].sigId;
            signal.freqid = sig_msg.signalInfo[i].freqId;
            signal.prres = sig_msg.signalInfo[i].prRes;
            signal.cno = sig_msg.signalInfo[i].cno;
            signal.qualityind = sig_msg.signalInfo[i].qualityInd;
            signal.corrsource = sig_msg.signalInfo[i].corrSource;
            signal.ionomodel = sig_msg.signalInfo[i].ionoModel;
            signal.health = sig_msg.signalInfo[i].sigFlags & 0x3;
            signal.sigflags = (sig_msg.signalInfo[i].sigFlags >> 2) & 0x7F;
            m_ubxsig.sigs.push_back(signal);
          }
          dispatch(m_ubxsig);
        }

        else if (ubx_message.id == UBX_MSG_NAV_STATUS)
        {
          //spew("uBlox message NAV-STATUS, ID:%u, Length: %u", ubx_message.id, ubx_message.getLength());
          m_ubxstatus.setTimeStamp();
          SenTiBoard::uBloxNavStatus status_msg = SenTiBoard::uBloxNavStatus(ubx_message);
          m_ubxstatus.setSourceEntity(m_sensor_entity[pkt->getID()]);
          m_ubxstatus.gpsfixtype = status_msg.gpsFix;
          m_ubxstatus.flags = status_msg.flags;
          m_ubxstatus.diffcorr = status_msg.fixStat & 0x01;
          dispatch(m_ubxstatus);
        }

        else if (ubx_message.id == UBX_MSG_NAV_SVIN)
        {
          m_ubxsvin.setTimeStamp();
          SenTiBoard::uBloxNavSvin svin_msg = SenTiBoard::uBloxNavSvin(ubx_message);
          m_ubxsvin.setSourceEntity(m_sensor_entity[pkt->getID()]);
          m_ubxsvin.meanx = svin_msg.meanX;
          m_ubxsvin.meany = svin_msg.meanY;
          m_ubxsvin.meanz = svin_msg.meanZ;
          m_ubxsvin.dur = svin_msg.dur;
          m_ubxsvin.meanacc = svin_msg.meanAcc;
          m_ubxsvin.obs = svin_msg.obs;
          m_ubxsvin.valid = svin_msg.valid;
          m_ubxsvin.active = svin_msg.active;
          dispatch(m_ubxsvin);
        }

        else if (ubx_message.id == UBX_MSG_NAV_DOP)
        {
          //spew("uBlox message NAV-DOP, ID:%u, Length: %u", ubx_message.id, ubx_message.getLength());
          m_ubxdop.setTimeStamp();
          SenTiBoard::uBloxNavDop dop_msg = SenTiBoard::uBloxNavDop(ubx_message);
          m_ubxdop.setSourceEntity(m_sensor_entity[pkt->getID()]);
          m_ubxdop.gdop = dop_msg.gDop;
          m_ubxdop.pdop = dop_msg.pDop;
          m_ubxdop.tdop = dop_msg.tDop;
          m_ubxdop.vdop = dop_msg.vDop;
          m_ubxdop.hdop = dop_msg.hDop;
          m_ubxdop.ndop = dop_msg.nDop;
          m_ubxdop.edop = dop_msg.eDop;
          dispatch(m_ubxdop);
        }

        else if (ubx_message.id == UBX_MSG_RXM_RAWX)
        {
          //SenTiBoard::uBloxRxmRawx raw_msg = SenTiBoard::uBloxRxmRawx(ubx_message);
          //spew("uBlox message RXM-RAWX, ID:%u, Length: %u", ubx_message.id, ubx_message.getLength());
        }

        else if (ubx_message.id == UBX_MSG_RXM_SFRBX)
        {
          //SenTiBoard::uBloxRxmSfrbx subframe_msg = SenTiBoard::uBloxRxmSfrbx(ubx_message);
          //spew("uBlox message RXM-SFRBX, ID:%u, Length: %u", ubx_message.id, ubx_message.getLength());
        }
        else
        {
          debug("Unhandled uBlox message, ID:%u, Length: %u", ubx_message.id, ubx_message.getLength());
        }

        double timestamp = getTimestamp(ubx_message.getTOV(),pkt->getID());
        m_timestamps[pkt->getID()] = timestamp;
      }*/

      void
      handlePULSPacket(const SenTiBoard::Packet* pkt)
      {
        SenTiBoard::Pulse pulse_message(pkt);

        double timestamp = getTimestamp(pulse_message.getTOV(), pkt->getID());

        IMC::Pulse pulse;

        pulse.setTimeStamp(timestamp);
        pulse.setSourceEntity(m_sensor_entity[pkt->getID()]);

        dispatch(pulse);
      }

      void
      reportEntityState(void)
      {
        //TODO: only check "active" sensors?
        for(unsigned i = 0; i < c_max_sensors; i++)
        {
          if( m_bad_samples[i] > m_args.max_meas_drop_count_error[i] )
          {
            // if (getEntityState() == IMC::EntityState::ESTA_NORMAL)
            //   m_faults_count++;

            std::string text = String::str(DTR("%d samples without valid data on sensor %s"),
                                           m_bad_samples[i], m_args.sensor_label[i].c_str());

            if (m_bad_samples[i] >= m_args.max_meas_drop_count_restart[i])
              throw RestartNeeded(text, 0);
            else
              setEntityState(IMC::EntityState::ESTA_ERROR, text);

            return;
          }
          //only care about the first sensor in error
          break;
        }

        if (!m_state_timer.overflow())
          return;

        // double time_elapsed = m_state_timer.getElapsed();
        // double frequency = Math::round(m_sample_count / time_elapsed);

        // std::string text = String::str(DTR("active | timeouts: %u | faults: %u | frequency: %u"),
        //                                m_timeout_count,
        //                                m_faults_count,
        //                                (unsigned)frequency);
        //TODO: add information on what sensors are active, and their FPS?

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_state_timer.reset();
      }


      void
      onMain(void)
      {
	      waitForMessages(5);
        while (!stopping())
        {
          consumeMessages();

          if (Poll::poll(*m_uart, 1.0) && m_parsers_ready)
            readInput();

          reportEntityState();
        }
      }
    };
  }
}

DUNE_TASK

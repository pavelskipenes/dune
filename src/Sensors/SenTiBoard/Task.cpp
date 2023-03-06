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
// Author: Alberto Dallolio based on work of Fortuna & Albrektsen           *
//***************************************************************************

#include <map>
#include <utility>
#include <sstream>
#include <iostream>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/SenTiBoardMng.hpp>
#include <Eigen/Dense>

namespace Sensors
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author AlbertoDallolio
  namespace SenTiBoard
  {
    using DUNE_NAMESPACES;

    struct TimeConversion
    {
      //! Last GPS TOV in SenTiBoard time
      double senti_gps;
      //! Last GPS TOV in Unix Epoch time
      double epoch_gps;
      //! Last TOV in SenTiBoard time (any message)
      double senti_lst;
    };

    //! Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Number of seconds without data before reporting an error.
      double inp_tout;
      //! Number of seconds with bad samples before raising a warning.
      double bad_samples_timer;
      //! Sensors parsers.
      std::string parsers;
      //! Packet IDs.
      std::string packetIDs;
      //! Sensors frequencies.
      std::string frequencies;
      //! Max missing samples - error trigger.
      std::string bad_samples_triggers;
      //! Sensors should log.
      std::string should_logs;
      //! Enable moving average on data.
      bool en_mv_avg;
      //! Bool disable parsing
      bool disable_parsing;
      //! Force non-GPS based TOV unwrapping
      bool unwrap_tov_internally;
      //! Experiment with new, simple TOV unwrap
      bool new_tov_unwrap;
      //! Path to log directory
      std::string log_dir;
      //! Two-speed decimation factor
      int decimation_factor;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port device.
      SerialPort* m_uart;
      //! Scratch buffer.
      uint8_t m_buffer[2048];
      //! Parser state
      SenTiBoardParser m_parser;
      //! Number of sensors the task expects.
      int m_parsers_qty;
      //! Destination log folder.
      Path m_log_dir;
      //! Input watchdog.
      Time::Counter<float> m_wdog;
      //! Check bad samples.
      Time::Counter<float> m_bad_samples_timer;
      //! Type definition for SenTiBoard packet handler.
      typedef void (Task::* PktHandler)(const SenTiBoardMng::SenTiBoardPacket* pkt);
      typedef std::map<uint8_t, PktHandler> PktHandlerMap;
      //! SenTiBoard packet handling.
      PktHandlerMap m_sbph;
      //! Parser to use for each sensor.
      std::map<uint8_t, int> m_sensor_parser;
      //! Entity to use for each sensor.
      std::map<uint8_t, int> m_sensor_entity;
      //! Max missing samples - error trigger.
      std::map<uint8_t, int> m_bad_samples_triggers;
      //! Should each sensor log?
      std::map<int, int> m_should_logs;
      //! Sensors packet IDs.
      std::vector<int> m_sensors_packetIDs;
      //! Sensors frequencies.
      std::map<uint8_t, double> m_sensors_frequencies;
      //! Parsers ready.
      bool m_parsers_ready;
      //! True if bad samples are being received from sensors.
      bool m_bad_samples_bool;
      //! Last timestamp of message.
      std::map<uint8_t, double> m_timestamps;
      //! Current number of missing messages
      std::map<uint8_t, int> m_bad_samples;
      //! Has GPS?
      bool m_has_gps;
      //! Control logging operation (?).
      int8_t m_control_operation;
      //! Last TOV of message.
      std::map<uint8_t, uint32_t> m_prev_tov;
      //! Number of times TOV has wrapped
      std::map<uint8_t, uint32_t> m_num_wrapped_tov;
      //! Raw log outputs
      std::map<uint8_t, std::ofstream*> ostreams;

      //! Handling functions.
      //! Magnetic Field.
      IMC::MagneticField m_magn;
      //! Delta angles.
      IMC::EulerAnglesDelta m_delt_ang;
      //! Delta velocity.
      IMC::VelocityDelta m_delt_vel;
      //! Temperature.
      IMC::Temperature m_temp;
      //! Angular velocity.
      IMC::AngularVelocity m_ang_vel;
      //! Acceleration.
      IMC::Acceleration m_accel;
      //! GPS Fix.
      IMC::GpsFix m_gps_fix;
      //! GPS Nav Data.
      IMC::GpsNavData m_gps_nav;
      //! Time Conversion struct.
      TimeConversion m_tc;
      //! GNSS relative position
      IMC::UbxRelPosNED m_ubxrelpos;
      //! Satellite info
      IMC::UbxSat m_ubxsat;
      //! Signal info
      IMC::UbxSig m_ubxsig;
      //! Receiver status
      IMC::UbxStatus m_ubxstatus;
      //! Receiver survey-in status
      IMC::UbxSvIn m_ubxsvin;
      //! DOP
      IMC::UbxDOP m_ubxdop;
      //! Combined IMU::Acceleration and IMU::AngularVelocity.
      IMC::Imu m_imu;
      //! STIM IMU data structures.
      Eigen::Vector3d m_alpha, m_beta, m_alpha_prev, m_delta_alpha_prev, m_delta_alpha, m_delta_nu, m_nu, m_nu_prev, m_delta_nu_prev, m_v_scul, m_incremental_angle, m_incremental_velocity;
      //! STIM IMU counter.
      int m_imu_counter;
      //! STIM time since last dispatch
      float m_imu_delta_t;
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

      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_parsers_ready(false),
        m_bad_samples_bool(false),
        m_has_gps(false),
        m_control_operation(-1),
        m_alpha(0,0,0),
        m_beta(0,0,0),
        m_alpha_prev(0,0,0),
        m_delta_alpha_prev(0,0,0),
        m_delta_alpha(0,0,0),
        m_delta_nu(0,0,0),
        m_imu_counter(0),
        m_imu_delta_t(0.0),
        m_deltvel_avg_x(NULL),
        m_deltvel_avg_y(NULL),
        m_deltvel_avg_z(NULL),
        m_deltang_avg_x(NULL),
        m_deltang_avg_y(NULL),
        m_deltang_avg_z(NULL)
      {
        //! Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("115200")
        .description("Serial port baud rate");

        param("Input timeout", m_args.inp_tout)
        .units(Units::Second)
        .defaultValue("10.0")
        .minimumValue("0.0")
        .description("Input timeout before error is thrown");

        param("Bad samples timeout", m_args.bad_samples_timer)
        .units(Units::Second)
        .defaultValue("10.0")
        .minimumValue("0.0")
        .description("Input timeout before bad samples are checked and eventually reported");

        param("Sensors parsers", m_args.parsers)
        .defaultValue("")
        .description("Parsers needed to interpret the sensors connected to the SenTiBoard");

        param("Sensors frequency", m_args.frequencies)
        .defaultValue("")
        .description("Transmission frequency of the sensors connected to the SenTiBoard");

        param("Packet IDs", m_args.packetIDs)
        .defaultValue("")
        .description("ID of packets from the sensors connected to the SenTiBoard");

        param("Bad samples triggers", m_args.bad_samples_triggers)
        .defaultValue("")
        .description("Max missed samples before warning is raised");

        param("Sensors raw logs", m_args.should_logs)
        .defaultValue("")
        .description("Log raw sensor measurements");

        param("Enable moving average", m_args.en_mv_avg)
        .defaultValue("false")
        .description("Error handling is more critical, and possibly time consuming, when this is enabled");

        param("Disable parsing", m_args.disable_parsing)
        .defaultValue("false")
        .description("Disable parsing and IMC dispatch, can be used to reduce CPU load if the task is only used for logging raw data");

        param("Force non-GPS based TOV unwrapping", m_args.unwrap_tov_internally)
        .defaultValue("true")
        .description("Only base TOV unwrapping on previous TOV from the sensor, not last GPS TOV");

        param("New TOV unwrap", m_args.new_tov_unwrap)
        .defaultValue("true")
        .description("Detect TOV wrap by comparing TOV+2^31 < prev_time");

        param("Raw Log Dir", m_args.log_dir)
        .defaultValue("")
        .description("Path to SenTiBoard Log Directory");

        param("Decimation factor", m_args.decimation_factor)
        .defaultValue("1")
        .description("Two-speed decimation factor for incremental downsampling");

        bind<IMC::LoggingControl>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        IMC::LoggingControl log_ctl;
        log_ctl.op = IMC::LoggingControl::COP_REQUEST_CURRENT_NAME;
        dispatch(log_ctl);

        if(m_args.en_mv_avg)
        {
          m_deltvel_avg_x = new Math::MovingAverage<double>(3);
          m_deltvel_avg_y = new Math::MovingAverage<double>(3);
          m_deltvel_avg_z = new Math::MovingAverage<double>(3);
          m_deltang_avg_x = new Math::MovingAverage<double>(3);
          m_deltang_avg_y = new Math::MovingAverage<double>(3);
          m_deltang_avg_z = new Math::MovingAverage<double>(3);
        }

        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        }
        catch (std::runtime_error& e)
        {
          err("Serial port initialization failed!");
          throw RestartNeeded(DTR(e.what()), 5.0, false);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        m_wdog.setTop(m_args.inp_tout);

        //! Prepare parsers and data structures based on expected sensors connected to the SenTiBoard.
        m_parsers_qty = count_commas(m_args.parsers) + 1;
        //! Check if the other parameters are specified for the same number of sensors.
        int bad_samples_qty = count_commas(m_args.bad_samples_triggers) + 1;
        int rawlogs_qty = count_commas(m_args.should_logs) + 1;
        int packetIDs_qty = count_commas(m_args.packetIDs) + 1;
        int frequencies_qty = count_commas(m_args.frequencies) + 1;

        debug("The task expects %d sensors data from the SenTiBoard",m_parsers_qty);

        if(packetIDs_qty == m_parsers_qty && bad_samples_qty == m_parsers_qty && rawlogs_qty == m_parsers_qty && frequencies_qty == m_parsers_qty)
        {
          std::string delimiter = ",";
          unsigned eid = 0;
          std::string parsers_tkn,elabel_tkn,IDs_tkn,bad_samples_tkn,rawlogs_tkn,freqs_tkn;

          for(int i=0;i<m_parsers_qty;i++)
          {
            parsers_tkn = m_args.parsers.substr(0, m_args.parsers.find(delimiter));

            elabel_tkn = "STB_" + parsers_tkn;
            //eid = reserveEntity(elabel_tkn);
            try
            {
              eid = resolveEntity(elabel_tkn);
            }
            catch (Entities::EntityDataBase::NonexistentLabel& e)
            {
              (void)e;
              eid = reserveEntity(elabel_tkn);
            }

            IDs_tkn = m_args.packetIDs.substr(0, m_args.packetIDs.find(delimiter));
            int ID_int = std::stoi(IDs_tkn);
            m_sensors_packetIDs.push_back(ID_int);

            freqs_tkn = m_args.frequencies.substr(0, m_args.frequencies.find(delimiter));
            float freq = std::stoi(freqs_tkn);

            if(parsers_tkn == "ADIS")
            {
              m_sbph[SENTIBOARD_MSG_ID_ADIS] = &Task::handleADISPacket;
              m_sensor_parser[ID_int] = SENTIBOARD_MSG_ID_ADIS;
              m_sensor_entity[ID_int] = eid;
              m_sensors_frequencies[ID_int] = freq;
            } else if(parsers_tkn == "UBLOX")
            {
              m_sbph[SENTIBOARD_MSG_ID_UBLX] = &Task::handleUBLXPacket;
              m_sensor_parser[ID_int] = SENTIBOARD_MSG_ID_UBLX;
              m_sensor_entity[ID_int] = eid;
              m_sensors_frequencies[ID_int] = freq;
            } else if(parsers_tkn == "PULSE")
            {
              m_sbph[SENTIBOARD_MSG_ID_PULS] = &Task::handlePULSPacket;
              m_sensor_parser[ID_int] = SENTIBOARD_MSG_ID_PULS;
              m_sensor_entity[ID_int] = eid;
              m_sensors_frequencies[ID_int] = freq;
            } else if(parsers_tkn == "STIM")
            {
              m_sbph[SENTIBOARD_MSG_ID_STIM] = &Task::handleSTIMPacket;
              m_sensor_parser[ID_int] = SENTIBOARD_MSG_ID_STIM;
              m_sensor_entity[ID_int] = eid;
              m_sensors_frequencies[ID_int] = freq;
            } else if(parsers_tkn == "HMR")
            {
              m_sbph[SENTIBOARD_MSG_ID_HMR] = &Task::handleHMRPacket;
              m_sensor_parser[ID_int] = SENTIBOARD_MSG_ID_HMR;
              m_sensor_entity[ID_int] = eid;
              m_sensors_frequencies[ID_int] = freq;
            } else if(parsers_tkn == "HEMISPHERE")
            {
              m_sbph[SENTIBOARD_MSG_ID_HEMISPHERE] = &Task::handleHEMISPHEREPacket;
              m_sensor_parser[ID_int] = SENTIBOARD_MSG_ID_HEMISPHERE;
              m_sensor_entity[ID_int] = eid;
              m_sensors_frequencies[ID_int] = freq;
            } else if(parsers_tkn == "")
              m_sensor_parser[ID_int] = 0;
            else
              err("Unknown parser %s selected for sensor %d",parsers_tkn.c_str(),ID_int);

            bad_samples_tkn = m_args.bad_samples_triggers.substr(0, m_args.bad_samples_triggers.find(delimiter));
            int errors_int = std::stoi(bad_samples_tkn);
            m_bad_samples_triggers[ID_int] = errors_int;

            rawlogs_tkn = m_args.should_logs.substr(0, m_args.should_logs.find(delimiter));
            int rawlogs_int;
            if(rawlogs_tkn == "true")
              rawlogs_int = 1;
            else
              rawlogs_int = 0;
            m_should_logs[ID_int] = rawlogs_int;

            m_args.parsers.erase(0, m_args.parsers.find(delimiter) + delimiter.length());
            m_args.packetIDs.erase(0, m_args.packetIDs.find(delimiter) + delimiter.length());
            m_args.bad_samples_triggers.erase(0, m_args.bad_samples_triggers.find(delimiter) + delimiter.length());
            m_args.should_logs.erase(0, m_args.should_logs.find(delimiter) + delimiter.length());
          }
          m_parsers_ready = true;
          m_bad_samples_timer.setTop(m_args.bad_samples_timer);
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        } else
          war("Incomplete information is provided, need fix and restart!");
      }

      int
      count_commas(std::string s)
      {
        int count = 0;

        for(int i = 0; i < s.size(); i++)
          if(s[i] == ',') count++;

        return count;
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        if((msg->getDestination() != getSystemId()))
          return;

        if(m_parsers_ready && (msg->op == IMC::LoggingControl::COP_CURRENT_NAME || msg->op == IMC::LoggingControl::COP_REQUEST_START))
        {
          m_log_dir = m_args.log_dir / msg->name;
          m_log_dir.create();
          for(int i = 0; i < m_parsers_qty; i++)
          {
            int pktID = m_sensors_packetIDs[i];
            // Open files for writing logs
            if(m_should_logs[pktID] == 1) //m_args.sensor_label[i] != "" && m_args.sensor_should_log[i] != 0
            {
              debug("Opening file for sensor with packet ID %d!",pktID);
              // Create destination directory.
              Path path = m_log_dir / String::str("sensor_%d.stb", pktID);

              // Close, in case we were already logging
              ostreams.insert(std::make_pair(pktID, new std::ofstream));
              ostreams[pktID]->close();

              // Open file for writing.
              ostreams[pktID]->open(path.c_str(), std::ios::binary | std::ios::app);
            } else
              debug("Sensor with packet ID %d will not be logged.",pktID);
          }
          m_control_operation = msg->op;
        }
        else if(msg->op == IMC::LoggingControl::COP_REQUEST_STOP)
        {
          for(auto it = ostreams.begin(); it != ostreams.end(); ++it)
            it->second->close();
	        m_control_operation = msg->op;
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

      void
      handleHMRPacket(const SenTiBoardMng::SenTiBoardPacket* pkt)
      {
        trace("Handling HMR packet!");
        m_magn.setTimeStamp();

        SenTiBoardMng::HMR hmr_message(pkt);

        spew("HMR: %f, %f, %f, %f, %f, %f, %f",
            hmr_message.tilt_x,
            hmr_message.tilt_y,
            hmr_message.mag_x,
            hmr_message.mag_y,
            hmr_message.mag_z,
            hmr_message.mag_t,
            hmr_message.heading);

        if(!hmr_message.isValid())
        {
          war("%s", hmr_message.getFault().c_str());
        }

        double timestamp = getTimestamp(hmr_message.getTOV(), pkt->getID());

        if(hmr_message.isValid())
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
      handleADISPacket(const SenTiBoardMng::SenTiBoardPacket* pkt)
      {
        trace("Handling ADIS packet!");
        m_delt_ang.setTimeStamp();
        m_delt_vel.setTimeStamp(m_delt_ang.getTimeStamp());
        m_temp.setTimeStamp(m_delt_ang.getTimeStamp());
        m_accel.setTimeStamp(m_delt_ang.getTimeStamp());
        m_ang_vel.setTimeStamp(m_delt_ang.getTimeStamp());


        SenTiBoardMng::ADIS adis_message(pkt);

        if(!adis_message.isValid())
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

        if(adis_message.isValid())
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

          if(m_timestamps[pkt->getID()] > 0)
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
      handleSTIMPacket(const SenTiBoardMng::SenTiBoardPacket* pkt)
      {
        trace("Handling STIM packet!");

        int pktID = pkt->getID();

        float imu_fps = m_sensors_frequencies[pktID];

        try
        {
          SenTiBoardMng::STIM stim_message(pkt);

          double timestamp = getTimestamp(stim_message.getTOV(), pktID);

          //spew("COUNT AND LATENCY: %u %u %u %u", stim_message.COUNT_P, stim_message.LATENCY_P, stim_message.CRC, stim_message.crc);
          //spew("STATUS: Gyro, Accl, Gyro_T, Accl_T, PPS  %u %u %u %u %u", stim_message.gyro_status, stim_message.accl_status, stim_message.gyro_t_status, stim_message.accl_t_status, stim_message.PPS_status);

          m_imu_counter += 1;
          m_imu_delta_t += (timestamp - m_timestamps[pktID]);

          if(m_imu_counter <= m_args.decimation_factor)
          {
            bool use_avg = false;
            //! Do anti-coning and anti-sculling math.
            coningSculling(stim_message, use_avg);

            //! Add measurement to filter.
            if(m_args.en_mv_avg)
            {
              //! Add measurements to moving average.
              m_deltvel_avg_x->update(stim_message.accl_x);
              m_deltvel_avg_y->update(stim_message.accl_y);
              m_deltvel_avg_z->update(stim_message.accl_z);
              m_deltang_avg_x->update(stim_message.gyro_x);
              m_deltang_avg_y->update(stim_message.gyro_y);
              m_deltang_avg_z->update(stim_message.gyro_z);
              m_bad_samples[pktID] = 0;
            }
          }

          if(m_imu_counter == m_args.decimation_factor)
            downsample(stim_message, timestamp, imu_fps, pktID);

          m_timestamps[pktID] = timestamp;
        } catch(std::runtime_error& e)
        {
          if(m_args.en_mv_avg)
          {
            SenTiBoardMng::STIM stim_message(pkt);

            war("Approximating STIM data from previous data!");

            //! Approximate the timestamp to avoid wrong fps in next message.
            double timestamp = m_timestamps[pktID] + 1.0/imu_fps;            

            // Error handling.
            m_bad_samples[pktID]++;

            m_imu_counter += 1;
            m_imu_delta_t += (timestamp - m_timestamps[pktID]);

            m_timestamps[pktID] = timestamp;

            if(m_imu_counter <= m_args.decimation_factor)
            {
              bool use_avg = true;
              coningSculling(stim_message,use_avg);
            }

            if(m_imu_counter == m_args.decimation_factor)
              downsample(stim_message, timestamp, imu_fps, pktID);

          } else
            debug("There is some error but we do nothing about it... though life man.");
	      }
      }

      void
      handleHEMISPHEREPacket(const SenTiBoardMng::SenTiBoardPacket* pkt)
      {
        trace("Handling HEMISPHERE packet!");
        SenTiBoardMng::Hemisphere hemisphere_message(pkt);

        double timestamp = getTimestamp(hemisphere_message.getTOV(), pkt->getID());

        if(timestamp - m_timestamps[pkt->getID()] != 0)
        {
          trace("Hemisphere message: ID:%u, Length: %u", hemisphere_message.id, hemisphere_message.getLength());
          //trace("Hemisphere message Timestamp: %f", timestamp);
          if(hemisphere_message.id == HEM_MSG_BIN_1)
          {
            SenTiBoardMng::HemisphereBin1 bin1_msg = SenTiBoardMng::HemisphereBin1(hemisphere_message);

            //! GPS Fix data
            m_gps_fix.utc_year   = bin1_msg.year;
            m_gps_fix.utc_month  = bin1_msg.month;
            m_gps_fix.utc_day    = bin1_msg.day;
            m_gps_fix.utc_time   = bin1_msg.utc_time;
            m_gps_fix.lat        = bin1_msg.lat;
            m_gps_fix.lon        = bin1_msg.lon;
            m_gps_fix.height     = bin1_msg.height;
            m_gps_fix.satellites = bin1_msg.NumOfSats;
            m_gps_fix.sog        = std::sqrt(bin1_msg.VNorth * bin1_msg.VNorth + bin1_msg.VEast * bin1_msg.VEast + bin1_msg.VUp * bin1_msg.VUp);
            if(m_gps_fix.sog > 0.1)
              m_gps_fix.cog = std::atan2(bin1_msg.VEast,bin1_msg.VNorth);

            switch (bin1_msg.NavMode)
            {
            case 0:
              war("Waiting for GPS fix");
              break;
            case 1:
              m_gps_fix.type = GpsFix::GFT_STANDALONE;
              break;
            case 2:
              m_gps_fix.type = GpsFix::GFT_STANDALONE;
              break;
            case 3:
              m_gps_fix.type = GpsFix::GFT_DIFFERENTIAL;
              break;
            case 4:
              m_gps_fix.type = GpsFix::GFT_DIFFERENTIAL;
              break;
            default:
              throw(DUNE::Exception("Given NavMode not supported!"));
            }

            m_gps_fix.validity |= GpsFix::GFV_VALID_POS;
            m_gps_fix.validity |= GpsFix::GFV_VALID_SOG;
            m_gps_fix.validity |= GpsFix::GFV_VALID_TIME;
            m_gps_fix.validity |= GpsFix::GFV_VALID_DATE;

            m_gps_fix.setSourceEntity(m_sensor_entity[pkt->getID()]);
            m_gps_fix.setTimeStamp(timestamp);

            dispatch(m_gps_fix, DF_KEEP_TIME);

            //trace("BIN 1 message time: Year:%u, Month:%u, Day:%u, Seconds:%f", bin1_msg.year, bin1_msg.month, bin1_msg.day, bin1_msg.utc_time);
            //trace("BIN 1 message: lat:%f, lon:%f, height:%f", bin1_msg.lat, bin1_msg.lon, bin1_msg.height);
            //trace("BIN 1 message: VNorth:%f, VEast:%f, VUp:%f", bin1_msg.VNorth, bin1_msg.VEast, bin1_msg.VUp);
            //trace("BIN 1 message: AgeOfDiff:%u, NumOfSats:%u, NavMode:%u, ExAgeOfDiff:%u", bin1_msg.AgeOfDiff, bin1_msg.NumOfSats, bin1_msg.NavMode, bin1_msg.ExAgeOfDiff);
          }
        m_timestamps[pkt->getID()] = timestamp;
        }
      }

      void
      handleUBLXPacket(const SenTiBoardMng::SenTiBoardPacket* pkt)
      {
        trace("Handling UBLX packet!");
        SenTiBoardMng::uBlox ubx_message(pkt);

        spew("uBlox message: ID:%u, Length: %u", ubx_message.id, ubx_message.getLength());

        if(ubx_message.id == UBX_MSG_NAV_PVT)
        {
          m_gps_fix.setTimeStamp();
          m_gps_nav.setTimeStamp(m_gps_fix.getTimeStamp());

          SenTiBoardMng::uBloxNavPvt pvt_msg = SenTiBoardMng::uBloxNavPvt(ubx_message);

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

        else if(ubx_message.id == UBX_MSG_NAV_RELPOSNED)
        {
          m_ubxrelpos.setTimeStamp();
          SenTiBoardMng::uBloxNavRelposned relpos_msg = SenTiBoardMng::uBloxNavRelposned(ubx_message);
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

        else if(ubx_message.id == UBX_MSG_NAV_SAT)
        {
          m_ubxsat.clear();
          m_ubxsat.setTimeStamp();
          SenTiBoardMng::uBloxNavSat sat_msg = SenTiBoardMng::uBloxNavSat(ubx_message);
          m_ubxsat.setSourceEntity(m_sensor_entity[pkt->getID()]);
          m_ubxsat.numsvs = sat_msg.numSvs;
          for(int i = 0; i < sat_msg.numSvs; i++)
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

        else if(ubx_message.id == UBX_MSG_NAV_SIG)
        {
          m_ubxsig.clear();
          m_ubxsig.setTimeStamp();
          SenTiBoardMng::uBloxNavSig sig_msg = SenTiBoardMng::uBloxNavSig(ubx_message);
          m_ubxsig.setSourceEntity(m_sensor_entity[pkt->getID()]);
          m_ubxsig.numsigs = sig_msg.numSigs;
          for(int i = 0; i < sig_msg.numSigs; i++)
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

        else if(ubx_message.id == UBX_MSG_NAV_STATUS)
        {
          //spew("uBlox message NAV-STATUS, ID:%u, Length: %u", ubx_message.id, ubx_message.getLength());
          m_ubxstatus.setTimeStamp();
          SenTiBoardMng::uBloxNavStatus status_msg = SenTiBoardMng::uBloxNavStatus(ubx_message);
          m_ubxstatus.setSourceEntity(m_sensor_entity[pkt->getID()]);
          m_ubxstatus.gpsfixtype = status_msg.gpsFix;
          m_ubxstatus.flags = status_msg.flags;
          m_ubxstatus.diffcorr = status_msg.fixStat & 0x01;
          dispatch(m_ubxstatus);
        }

        else if(ubx_message.id == UBX_MSG_NAV_SVIN)
        {
          m_ubxsvin.setTimeStamp();
          SenTiBoardMng::uBloxNavSvin svin_msg = SenTiBoardMng::uBloxNavSvin(ubx_message);
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

        else if(ubx_message.id == UBX_MSG_NAV_DOP)
        {
          //spew("uBlox message NAV-DOP, ID:%u, Length: %u", ubx_message.id, ubx_message.getLength());
          m_ubxdop.setTimeStamp();
          SenTiBoardMng::uBloxNavDop dop_msg = SenTiBoardMng::uBloxNavDop(ubx_message);
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

        else if(ubx_message.id == UBX_MSG_RXM_RAWX)
        {
          //SenTiBoardMng::uBloxRxmRawx raw_msg = SenTiBoardMng::uBloxRxmRawx(ubx_message);
          //spew("uBlox message RXM-RAWX, ID:%u, Length: %u", ubx_message.id, ubx_message.getLength());
        }

        else if(ubx_message.id == UBX_MSG_RXM_SFRBX)
        {
          //SenTiBoardMng::uBloxRxmSfrbx subframe_msg = SenTiBoardMng::uBloxRxmSfrbx(ubx_message);
          //spew("uBlox message RXM-SFRBX, ID:%u, Length: %u", ubx_message.id, ubx_message.getLength());
        }
        else
        {
          debug("Unhandled uBlox message, ID:%u, Length: %u", ubx_message.id, ubx_message.getLength());
        }

        double timestamp = getTimestamp(ubx_message.getTOV(),pkt->getID());
        m_timestamps[pkt->getID()] = timestamp;
      }

      void
      handlePULSPacket(const SenTiBoardMng::SenTiBoardPacket* pkt)
      {
        trace("Handling PULSE packet!");
        SenTiBoardMng::Pulse pulse_message(pkt);

        double timestamp = getTimestamp(pulse_message.getTOV(), pkt->getID());

        IMC::Pulse pulse;

        pulse.setTimeStamp(timestamp);
        pulse.setSourceEntity(m_sensor_entity[pkt->getID()]);

        dispatch(pulse);
      }

      //! Unwrap TOV, by comparing to GPS time (if available) or to prev_timestamp, and translate to timestamp.
      double
      getTimestamp(uint32_t tov, uint8_t id)
      {
        double prev_timestamp = m_timestamps[id];
        double timestamp;

        if(!m_args.new_tov_unwrap)
        {
          timestamp  = 10.0 * (double)tov / Time::c_nsec_per_sec_fp;
          if(m_has_gps && !m_args.unwrap_tov_internally)
          {

            if(tov < m_tc.senti_gps)
              timestamp += 10.0 * (double)UINT32_MAX / Time::c_nsec_per_sec_fp;
          }
          else
          {
            // we must fake senti_gps, to avoid wrap in timestamp
            if((timestamp + (m_tc.epoch_gps - m_tc.senti_gps)) < prev_timestamp)
            {
              m_tc.epoch_gps += 10.0 * (double)UINT32_MAX / Time::c_nsec_per_sec_fp;
            }
          }

          timestamp += (m_tc.epoch_gps - m_tc.senti_gps);
        }
        else
        {
          if(tov < m_prev_tov[id])
          {
            m_num_wrapped_tov[id] += 1;
          }
          spew("prev tov: %d", m_prev_tov[id]);

          m_prev_tov[id] = tov;

          timestamp = ( 10 *  (double)tov / Time::c_nsec_per_sec_fp ) + ( 10 * m_num_wrapped_tov[id] * (double)(UINT32_MAX) / Time::c_nsec_per_sec_fp );
          //timestamp = 10 * ( ((double)tov / Time::c_nsec_per_sec_fp) + (m_num_wrapped_tov[id] * ( ((double)(UINT32_MAX) + 1) / Time::c_nsec_per_sec_fp )));

          spew("id: %d, tov: %d, num_wrapped: %d, timestamp: %f", id, tov, m_num_wrapped_tov[id], timestamp);
        }

        return timestamp;
      }

      void
      coningSculling(SenTiBoardMng::STIM stim_msg, bool use_avg)
      {
        if(use_avg)
        {
          m_delta_alpha = {Angles::radians( m_deltang_avg_x->mean() ),
                               Angles::radians( m_deltang_avg_y->mean() ),
                               Angles::radians( m_deltang_avg_z->mean() )};
          m_delta_nu = { m_deltvel_avg_x->mean(),
                        m_deltvel_avg_y->mean(),
                        m_deltvel_avg_z->mean()};
        } else
        {
          m_delta_alpha = {Angles::radians(stim_msg.gyro_x),
                         Angles::radians(stim_msg.gyro_y),
                         Angles::radians(stim_msg.gyro_z)};
          m_delta_nu = {stim_msg.accl_x,
                      stim_msg.accl_y,
                      stim_msg.accl_z};
        }

        // Incremental values
        m_alpha  = m_alpha + m_delta_alpha;
        m_nu     = m_nu    + m_delta_nu;

        // Compute coning motion
        m_beta   = m_beta  + (1/2) * m_alpha_prev.cross(m_delta_alpha) + (1/12) * m_delta_alpha_prev.cross(m_delta_alpha);

        // Compute sculling motion
        m_v_scul = m_v_scul + 0.5*((1/6)*m_delta_alpha_prev * m_delta_nu.dot(m_alpha_prev) - m_alpha_prev * ((1/6)*m_delta_alpha_prev.dot(m_delta_nu)) + m_nu_prev.cross(m_delta_alpha) + (1/6)*m_delta_nu_prev.cross(m_delta_alpha));

        // save values for next iteration
        m_alpha_prev       = m_alpha;
        m_nu_prev          = m_nu;
        m_delta_alpha_prev = m_delta_alpha;
        m_delta_nu_prev    = m_delta_nu;
      }

      void
      downsample(SenTiBoardMng::STIM stim_message, double timestamp, float imu_fps, uint8_t pktID)
      {
        float fps = 1.0 / m_imu_delta_t;
        fp32_t temp;
        float scale_factor = m_imu_delta_t * (imu_fps / m_args.decimation_factor);

        m_incremental_angle    = m_alpha*scale_factor + m_beta;
        m_incremental_velocity = m_nu*scale_factor + 0.5*m_alpha.cross(m_nu) + m_v_scul;

        m_imu_counter      = 0;
        m_imu_delta_t      = 0;
        m_alpha            = {0,0,0};
        m_nu               = {0,0,0};
        m_beta             = {0,0,0};
        m_alpha_prev       = {0,0,0};
        m_delta_alpha_prev = {0,0,0};
        m_nu_prev          = {0,0,0};
        m_delta_nu_prev    = {0,0,0};
        m_v_scul           = {0,0,0};

        m_delt_ang.time = timestamp;
        m_delt_ang.x = m_incremental_angle[0];
        m_delt_ang.y = m_incremental_angle[1];
        m_delt_ang.z = m_incremental_angle[2];

        m_delt_vel.time = timestamp;
        m_delt_vel.x = m_incremental_velocity[0];
        m_delt_vel.y = m_incremental_velocity[1];
        m_delt_vel.z = m_incremental_velocity[2];

        m_ang_vel.time = timestamp;
        m_ang_vel.x = m_incremental_angle[0] * fps;
        m_ang_vel.y = m_incremental_angle[1] * fps;
        m_ang_vel.z = m_incremental_angle[2] * fps;

        m_accel.time = timestamp;
        m_accel.x = m_incremental_velocity[0] * fps;
        m_accel.y = m_incremental_velocity[1] * fps;
        m_accel.z = m_incremental_velocity[2] * fps;

        m_temp.time = timestamp;
        temp = stim_message.gyro_x_temp + stim_message.gyro_y_temp + stim_message.gyro_z_temp + stim_message.accl_x_temp + stim_message.accl_y_temp + stim_message.accl_z_temp;
        m_temp.value = temp / 6;

        //m_delt_ang.setTimeStamp();
        //m_delt_vel.setTimeStamp(m_delt_ang.getTimeStamp());
        //m_accel.setTimeStamp(m_delt_ang.getTimeStamp());
        //m_ang_vel.setTimeStamp(m_delt_ang.getTimeStamp());
        //m_temp.setTimeStamp(m_delt_ang.getTimeStamp());

        //! Set source entities.
        m_temp.setSourceEntity(m_sensor_entity[pktID]);
        m_delt_ang.setSourceEntity(m_sensor_entity[pktID]);
        m_delt_vel.setSourceEntity(m_sensor_entity[pktID]);
        m_accel.setSourceEntity(m_sensor_entity[pktID]);
        m_ang_vel.setSourceEntity(m_sensor_entity[pktID]);

        //! Dispatch.
        dispatch(m_delt_ang); //DF_KEEP_TIME
        dispatch(m_delt_vel);
        dispatch(m_accel);
        dispatch(m_ang_vel);
        dispatch(m_temp);
        //! Dispatch IMC::IMU message.
        m_imu.acceleration.set(m_accel);
        m_imu.angular_velocity.set(m_ang_vel);
        m_imu.setSourceEntity(m_sensor_entity[pktID]);
        dispatch(m_imu);

      }

      //! Read input from sensor.
      void
      readInput(void)
      {
        size_t rv = m_uart->read(m_buffer, sizeof(m_buffer));

        for(size_t i = 0; i < rv; ++i)
        {
          if(m_parser.parse(m_buffer[i]))
	        {
            SenTiBoardPacket packet = m_parser.getPacket();
            //debug("Packet received from sensor: %u", packet.getID());
            m_wdog.reset();
            int pktID = packet.getID();

	          // Check if we are logging packets AND if at least ONE sensor is logging AND if the received packet ID is valid.
            if(m_should_logs[pktID] == 1 && ostreams.count(packet.getID()) &&
			        ((m_control_operation == IMC::LoggingControl::COP_REQUEST_START) ||
              (m_control_operation == IMC::LoggingControl::COP_CURRENT_NAME) ||
              (m_control_operation == IMC::LoggingControl::COP_STARTED)))
            {
              // Timestamp message and write to file.
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
            } else if(m_should_logs[pktID] == 1 && (m_control_operation != -1))
            {
              // Give warning if packet ID is not valid.
              war("m_control_operation = %u", m_control_operation);
              war("Packet with ID %u does not have a valid entry in the ostreams map!",
                  packet.getID());
            }

            if(m_args.disable_parsing)
            {
              continue;
            }

            PktHandler h = m_sbph[m_sensor_parser[packet.getID()]];
            if(!h)
            {
              debug("Parser not set up for sensor: %u", packet.getID());
              continue;  // Ignore this packet (no handler for it)
            }

            // Call handler
            (this->*h)(&packet);
          }
        }
      }

      void
      checkBadSamples(void)
      {
        for(int i = 0; i < m_parsers_qty; i++)
        {
          int pktID = m_sensors_packetIDs[i];
          if(m_bad_samples[pktID] > m_bad_samples_triggers[pktID])
          {
            war("Received %d bad samples from sensor with packet ID %d",m_bad_samples[pktID], pktID);
            m_bad_samples_bool = true;
            return;
          }
          //only care about the first sensor in error
          break;
        }
        if(!m_bad_samples_timer.overflow())
          return;
        
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_bad_samples_timer.reset();
      }

      //! Main loop.
      void
      onMain(void)
      {
        waitForMessages(5.0);
        while(!stopping())
        {
          consumeMessages();

          if(Poll::poll(*m_uart, 1.0) && m_parsers_ready)
            readInput();

          if(m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
          }

          //if(m_bad_samples_timer.overflow())
          checkBadSamples();
        }
      }
    };
  }
}

DUNE_TASK

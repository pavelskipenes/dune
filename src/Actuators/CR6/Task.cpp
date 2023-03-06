//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Alberto Dallolio                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <cstdlib>
#include <cmath>
#include <cstddef>
#include <cstring>
#include <string>
#include <sstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  namespace CR6
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud.
      unsigned uart_baud;
      //! Rudder angle scale factor
      double scale;
      //! Send nmea sentences.
      bool send_nmea;
      //! Enable thruster [True = Controller | False = User defines]
      bool enable_thruster;
      //! Enable heading [True = Controller | False = User defines]
      bool enable_heading;
      //! User defines the rudder angle [Remote Control]
      int16_t rudder_USER;
      //! User defines the thruster actuation [Remote Control]
      int16_t thruster_USER;
      //! Print Serial msg
      bool print_serial;
      //! User-defined Power Settings String.
      std::string user_pwrSettings;
      // Critical battery voltage.
      double critical_voltage;
    };

    //! Labels for states voltages
    //const char* c_voltage_label = "12V";

    struct Task: public DUNE::Tasks::Task
    {
      //! Maximum buffer size.
      static const int c_bfr_size = 512;
      //! Serial port handle.
      SerialPort* m_uart;
      //! I/O Multiplexer
      Poll m_poll;
      //! Estimated state.
      IMC::EstimatedState m_estate;
      //! Desired Thruster Actuation
      int8_t thruster_act;
      //! Maximum Thruster Actuation
      float thrust_max;
      //! Maximum Rudder Angle
      int16_t rudder_max;
      //! Desired Rudder Angle
      int16_t rudder_cmd;
      //! Current line.
      std::string m_line;
      //! Task parameters.
      Arguments m_args;
      //! Timer.
      Time::Counter<float> m_timer;
      //! Timer.
      Time::Counter<float> m_timer_reboot;
      //! Battery Voltage.
      IMC::Voltage m_voltBS1, m_voltBS2;
      //! Previous Battery Voltage value.
      double m_voltBS1_prev, m_voltBS2_prev;
      //! Power Produced by Solar Panels.
      IMC::Power m_panelspwrBS1, m_panelspwrBS2;
      //! Power consumed by system and thruster.
      IMC::Power m_syspwr, m_thrpwr;
      //! Current consumed by system and thryster.
      IMC::Current m_syscurr, m_thrcurr, m_chargcurrBS1, m_chargcurrBS2;
      //! Dispatched power settings.
      IMC::PowerSettings m_pwr_settings;
      //! Power Settings String.
      std::string pwrSettings;
      //! Binary Integers for relays.
      // int l2, l3, iridium, modem, pumps, vhf;
      //! Check if Power Settings received from Task/Neptus.
      bool pwr_sett_rec;
      //! Characters to ignore in the beginning and end of a string.
      const char* c_blanks = " \t\r\n";
      //! Number of retries to sync task pwrSettings with pwrSettings in CR6
      int m_retries;
      //! Waiting for reboot.
      bool m_do_send;
      //! Transmission request id
      int m_reqid;
      //! Send iridium
      bool m_iridium;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_uart(NULL),
        thruster_act(0),
        thrust_max(100.0),
        rudder_max(45),
        rudder_cmd(0),
        m_voltBS1_prev(0.0),
        m_voltBS2_prev(0.0),
        pwr_sett_rec(false),
        m_do_send(true),
        m_reqid(0),
        m_iridium(false)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("4800")
        .description("Serial port baud rate");

        param("Maximum Rudder Angle", m_args.scale)
        .defaultValue("45.0")
        .minimumValue("20.0")
        .maximumValue("60.0")
        .units(Units::Degree)
        .description("Scale factor to be multiplied to the rudder actuation reference [-45, 45] degrees.");

        param("Send NMEA", m_args.send_nmea)
        .defaultValue("true")
        .description("Send NMEA sentences");

        param("Print Serial message", m_args.print_serial)
        .defaultValue("false")
        .description("Enable/Disable print of Serial message");

        param("Enable Thruster Controller", m_args.enable_thruster)
        .defaultValue("true")
        .description("Enable Thruster Controller [True = Controller, False = User defined]");

        param("Enable Heading Controller", m_args.enable_heading)
        .defaultValue("true")
        .description("Enable Heading Controller [True = Controller, False = User defined]");

        param("User Defined Rudder Angle", m_args.rudder_USER)
        .defaultValue("0.0")
        .minimumValue("-450.0")
        .maximumValue("450.0")
        .description("User defines the rudder angle which is to be applied / sent over serial. Condition: Enable Heading Controller = False.");

        param("User Defined Thruster Actuation", m_args.thruster_USER)
        .defaultValue("0.0")
        .minimumValue("-100.0")
        .maximumValue("100.0")
        .description("User defines the applied thruster actuation / sent over serial.  Condition: Enable Thruster Controller = False.");

        param("Power Settings", m_args.user_pwrSettings)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .defaultValue("000000")
        .description("User-defined relays settings on L1");

        param("Critical Voltage", m_args.critical_voltage)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .defaultValue("11")
        .minimumValue("9")
        .maximumValue("14")
        .description("Voltage value below which warning is sent via Iridium");

        bind<IMC::SetThrusterActuation>(this);
        bind<IMC::SetServoPosition>(this);
        bind<IMC::PowerSettings>(this);

        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_ACTIVATING);
      }

      void
      onEntityReservation(void)
      {
        m_voltBS1.setSourceEntity(reserveEntity("Parallel Battery Voltage")); //"Batteries"
        m_voltBS2.setSourceEntity(reserveEntity("Single Battery Voltage")); //"Batteries"
        m_panelspwrBS1.setSourceEntity(reserveEntity("Panels Power BS1"));
        m_panelspwrBS2.setSourceEntity(reserveEntity("Panels Power BS2"));
        m_syspwr.setSourceEntity(reserveEntity("System Consumed Power"));
        m_thrpwr.setSourceEntity(reserveEntity("Thruster Consumed Power"));
        m_syscurr.setSourceEntity(reserveEntity("System Consumed Current"));
        m_thrcurr.setSourceEntity(reserveEntity("Thruster Consumed Current"));
        m_chargcurrBS1.setSourceEntity(reserveEntity("Charging Current BS1"));
        m_chargcurrBS2.setSourceEntity(reserveEntity("Charging Current BS2"));
        m_pwr_settings.setSourceEntity(reserveEntity("Relay Power Settings"));
      }

      void
      onResourceAcquisition(void)
      {
        debug("Aquiring Serial Port: ");
        try{
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        }
        catch (std::exception& e)
        {
          war(DTR("Connection problem - %s"), e.what());
          throw RestartNeeded(DTR("I/O error"), 5);
        }
        debug("*** Success m_uart = new Serial Port");
      }

      //! Create NMEA & Controller Selector
      std::string createNMEA(void)
      {
        /* NMEA sentence description:
        // eg1. $BBB01,ACT,450,-100*43!(checksum)
        //        BBB01        Name of unit
        //          ACT        Type of message
        //        450           Desired heading, degrees
        //       -100           Thruster actuation, percent
        */

        NMEAWriter stn("BBB01");

        // Active controller selector: Remote or Heading &/or Speed
        if((!m_args.enable_thruster) && (!m_args.enable_heading)){        // User defined
          stn << String::str("%d,%d", m_args.rudder_USER, m_args.thruster_USER)
              << String::str("%d%d%d%d%d%d",m_pwr_settings.l2,m_pwr_settings.l3,m_pwr_settings.iridium,
                                            m_pwr_settings.modem,m_pwr_settings.pumps,m_pwr_settings.vhf);
        }
        else if((m_args.enable_thruster) && (!m_args.enable_heading)){    // Speed-Controller
          stn << String::str("%d,%d", m_args.rudder_USER, thruster_act)
              << String::str("%d%d%d%d%d%d",m_pwr_settings.l2,m_pwr_settings.l3,m_pwr_settings.iridium,
                                            m_pwr_settings.modem,m_pwr_settings.pumps,m_pwr_settings.vhf);
        }
        else if((!m_args.enable_thruster) && (m_args.enable_heading)){    // Heading-Controller
          stn << String::str("%d,%d", rudder_cmd, m_args.thruster_USER)
              << String::str("%d%d%d%d%d%d",m_pwr_settings.l2,m_pwr_settings.l3,m_pwr_settings.iridium,
                                            m_pwr_settings.modem,m_pwr_settings.pumps,m_pwr_settings.vhf);

        }
        else{
          stn << String::str("%d,%d", rudder_cmd, thruster_act)
              << String::str("%d%d%d%d%d%d",m_pwr_settings.l2,m_pwr_settings.l3,m_pwr_settings.iridium,
                                            m_pwr_settings.modem,m_pwr_settings.pumps,m_pwr_settings.vhf);        //    H- & S-Controller
        }

        return stn.sentence();
      }

      //! Sends NMEA message to UART
      void
      writeToUART(const std::string& str)
      {
        if (m_args.print_serial)
          trace("UART[Transmit]: NMEA sentence: %s", sanitize(str).c_str());
        m_uart->write(str.c_str(), str.size());

      }

      void
      sendNMEA()
      {
        std::string stn_str;
        if (m_args.send_nmea)
        {
          stn_str = createNMEA();
          // spew("sent: %s", stn_str.c_str());
          if(m_do_send)
            writeToUART(stn_str);
          else
            spew("NOT SENDING, WAITING REBOOT");

          if((m_pwr_settings.l2 == 2 || m_pwr_settings.l3 == 2 || m_pwr_settings.iridium == 2 || m_pwr_settings.modem == 2 || m_pwr_settings.pumps == 2 || m_pwr_settings.vhf == 2) && m_do_send)
          {
            spew("SOMETHING IS REBOOTING");
            m_timer_reboot.setTop(5.0);
            m_do_send = false;
          }
        }
      }

      //! Read UART buffer (message) & call processNMEA
      void
      readUART()
      {
        char bfr[c_bfr_size];

        try{
          size_t rv = m_uart->readString(bfr, sizeof(bfr));

          //! Creates a string from the buffer - to be processed.
          for (size_t i = 0; i < rv; ++i)
          {
            if (bfr[i] == '\n')
            {
              //setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
              debug("%s\n",m_line.c_str());
              // Process NMEA sentence.
              if(!pwr_sett_rec)
                extractNMEA(m_line);

              m_line.clear();
              // sendToCR6();
              sendNMEA();
              break;
            }
            else
            {
              m_line.push_back(bfr[i]);
            }
          }
        }
        catch (std::exception& e)
        {
          err("%s", e.what());
          sendNMEA();
          m_line.clear();
        }
      }

      //! Extract Info.
      void
      extractNMEA(const std::string sentence)
      {
        // Check for empty string
        if (sentence.length() == 0)
          return;

        // Clean sentence beginning.
        size_t lead_idx = sentence.find_first_not_of(c_blanks);
        // Clean sentence end.
        size_t trail_idx = sentence.find_last_not_of(c_blanks);
        // The calculation of length is off by one, but since we are
        // getting rid of the dollar sign it's correct.
        size_t m_length = trail_idx - lead_idx;
        ++lead_idx;
        // Create proper string.
        std::string proper = sentence.substr(lead_idx, m_length);
        // Locate Battery Voltage.
        std::vector<int> commas;
        for(unsigned int i=0; i < proper.size(); i++){
          if(proper[i] == ',')
            commas.push_back(i);
        }

        //! Power Settings
        std::stringstream pw1(proper.substr(commas[1]+1,1));
        int pwrsettings1_int = 0;
        pw1 >> pwrsettings1_int;
        std::stringstream pw2(proper.substr(commas[1]+2,1));
        int pwrsettings2_int = 0;
        pw2 >> pwrsettings2_int;
        std::stringstream pw3(proper.substr(commas[1]+3,1));
        int pwrsettings3_int = 0;
        pw3 >> pwrsettings3_int;
        std::stringstream pw4(proper.substr(commas[1]+4,1));
        int pwrsettings4_int = 0;
        pw4 >> pwrsettings4_int;
        std::stringstream pw5(proper.substr(commas[1]+5,1));
        int pwrsettings5_int = 0;
        pw5 >> pwrsettings5_int;
        std::stringstream pw6(proper.substr(commas[1]+6,1));
        int pwrsettings6_int = 0;
        pw6 >> pwrsettings6_int;
        
        m_pwr_settings.l2 = pwrsettings1_int;
        m_pwr_settings.l3 = pwrsettings2_int;
        m_pwr_settings.iridium = pwrsettings3_int;
        m_pwr_settings.modem = pwrsettings4_int;
        m_pwr_settings.pumps = pwrsettings5_int;
        m_pwr_settings.vhf= pwrsettings6_int;

        dispatch(m_pwr_settings);
        storePowerSettings();

        // Panels generated power.
        std::string pwrBS1 = proper.substr(commas[2]+1,5);
        m_panelspwrBS1.value = std::atof(pwrBS1.c_str());
        //spew("Panels Power:%f\n",m_panelspwrBS1.value);
        dispatch(m_panelspwrBS1);

        std::string pwrBS2 = proper.substr(commas[3]+1,5);
        m_panelspwrBS2.value = std::atof(pwrBS2.c_str());
        //spew("Panels Power:%f\n",m_panelspwrBS1.value);
        dispatch(m_panelspwrBS2);

        // Consumed current.
        std::string currentBS1 = proper.substr(commas[4]+1,5);
        m_syscurr.value = std::atof(currentBS1.c_str());
        //spew("System Drawn Current:%f\n",m_syscurr.value);
        dispatch(m_syscurr);

        std::string currentBS2 = proper.substr(commas[5]+1,5);
        m_thrcurr.value = std::atof(currentBS2.c_str());
        //spew("System Drawn Current:%f\n",m_thrcurr.value);
        dispatch(m_thrcurr);

        // Generated current.
        std::string chcurrentBS1 = proper.substr(commas[6]+1,5);
        m_chargcurrBS1.value = std::atof(chcurrentBS1.c_str());
        //spew("System Drawn Current:%f\n",m_chargcurrBS1.value);
        dispatch(m_chargcurrBS1);

        std::string chcurrentBS2 = proper.substr(commas[7]+1,5);
        m_chargcurrBS2.value = std::atof(chcurrentBS2.c_str());
        //spew("System Drawn Current:%f\n",m_chargcurrBS2.value);
        dispatch(m_chargcurrBS2);

        // Batteries voltage.
        std::string voltBS1 = proper.substr(commas[8]+1,5); //was 4 before.
        m_voltBS1.value = std::atof(voltBS1.c_str());
        //spew("Voltage:%f\n",m_voltBS1.value);
        dispatch(m_voltBS1);

        std::string voltBS2 = proper.substr(commas[9]+1,5); //was 4 before.
        m_voltBS2.value = std::atof(voltBS2.c_str());
        //spew("Voltage:%f\n",m_voltBS2.value);
        dispatch(m_voltBS2);

        if(m_voltBS1_prev == 0.0)
          m_voltBS1_prev = m_voltBS1.value;

        if(m_voltBS2_prev == 0.0)
          m_voltBS2_prev = m_voltBS2.value;

        // Consumed power.
        m_syspwr.value = m_syscurr.value * m_voltBS1.value;
        m_thrpwr.value = m_thrcurr.value * m_voltBS2.value;
        dispatch(m_syspwr);
        dispatch(m_thrpwr);

        if(!m_iridium && ((std::fabs(m_voltBS1_prev - m_voltBS1.value)<0.5 && m_voltBS1.value<m_args.critical_voltage) || (std::fabs(m_voltBS2_prev - m_voltBS2.value)<0.5 && m_voltBS2.value<m_args.critical_voltage)))
        {
          std::string msg;
          
          if(m_voltBS1.value<m_args.critical_voltage)
          {
            msg = "(A) Parallel batteries voltage is below ";
          } else if(m_voltBS2.value<m_args.critical_voltage)
            msg = "(A) Single battery voltage is below ";
          else if(m_voltBS2_prev - m_voltBS2.value<0.5 && m_voltBS1.value<m_args.critical_voltage && m_voltBS2.value<m_args.critical_voltage)
            msg = "(A) All batteries voltage is below ";

          std::string volt_ir = std::to_string(m_args.critical_voltage);
          std::string volt_ir_tr = volt_ir.substr(0,5);
          IMC::TransmissionRequest req;
          req.setDestination(m_ctx.resolver.id());
          req.data_mode = TransmissionRequest::DMODE_TEXT;
          req.txt_data = msg +volt_ir_tr+".";
          req.deadline = Clock::getSinceEpoch() + 60;
          req.req_id = ++m_reqid;

          req.comm_mean = TransmissionRequest::CMEAN_SATELLITE;
          req.destination = "";
          inf("Sending via Iridium: '%s'", req.txt_data.c_str());
          dispatch(req);

          m_iridium = true;
        }
      }

      void
      storePowerSettings()
      {
        char sett[7];

        sprintf(sett, "%d%d%d%d%d%d", m_pwr_settings.l2, m_pwr_settings.l3, m_pwr_settings.iridium, m_pwr_settings.modem,
         m_pwr_settings.pumps, m_pwr_settings.vhf);
        m_args.user_pwrSettings = sett;
        m_ctx.config.set("Actuators.CR6", "Power Settings", m_args.user_pwrSettings);
          
        IMC::EntityParameter parameter;
        parameter.name = "Power Settings";
        parameter.value = m_args.user_pwrSettings;
       
        IMC::SetEntityParameters params;
        params.params.push_back(parameter);
        params.name = "Servo Serial";

        dispatch(params, DF_LOOP_BACK);
        spew("Power settings have been set to %s.", m_args.user_pwrSettings.c_str());

      }
      
      // Helper function to get a certain token from a string  
      std::string getToken(std::string toParse, std::string delim, int n_token = 1)
      {
          std::string token;
          for (int i = 0; i<n_token; i++)
          {
              token = toParse.substr(0, toParse.find(delim));
              toParse.erase(0, toParse.find(delim) + delim.length());
          }
          return token;
      }

      void
      sendToCR6()
      {
        // Create a NMEA string and send it back to L1
        sendNMEA();

        // Try to sync power settings
        // If max_attempts > 0, try to compare the settings from L1 with the current settings
        // If they match, exit successfully
        int n_attempts = 0;
        while(n_attempts < m_retries){
          // Create a NMEA string and send it back to L1
          sendNMEA();
          
          // Assemble string with current settings
          std::string currSettings = String::str("%d%d%d%d%d%d",m_pwr_settings.l2,m_pwr_settings.l3,m_pwr_settings.iridium,
                                            m_pwr_settings.modem,m_pwr_settings.pumps,m_pwr_settings.vhf);
          // Get CR6 settings from UART
          while(Poll::poll(*m_uart, 1.0));
          readUART();
          std::string recvSettings = getToken(m_line, ",", 3);  // Third token is the power settings
          
          // If settings match, exit successfully
          if (currSettings.compare(recvSettings) == 0)
          {
            m_retries = 0;
            pwr_sett_rec = false;
            return;
          } else
            n_attempts++;
        }

        m_retries = 0;
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if(getEntityState() == IMC::EntityState::ESTA_NORMAL && paramChanged(m_args.user_pwrSettings))
        {
          m_pwr_settings.l2 = m_args.user_pwrSettings[0] - '0';
            m_pwr_settings.l3 = m_args.user_pwrSettings[1] - '0';
            m_pwr_settings.iridium = m_args.user_pwrSettings[2] - '0';
            m_pwr_settings.modem = m_args.user_pwrSettings[3] - '0';
            m_pwr_settings.pumps = m_args.user_pwrSettings[4] - '0';
            m_pwr_settings.vhf = m_args.user_pwrSettings[5] - '0';
            
            spew("Updated pwrSettings: %d%d%d%d%d%d",
                                    m_pwr_settings.l2, m_pwr_settings.l3,
                                    m_pwr_settings.iridium, m_pwr_settings.modem,
                                    m_pwr_settings.pumps, m_pwr_settings.vhf);

          // Set retries to compare between data from CR6 and new parameters
          m_timer.setTop(3.0);
          pwr_sett_rec = true;
        }
      }

      void
      onResourceInitialization(void)
      {
        rudder_max = m_args.scale*10;
        thrust_max = 100;
        
        m_timer.reset();

        // Set entity state so the task can begin
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      //! From Autopilot or TextActions.
      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        // Ensure thruster acutation range [-max, max]
        thruster_act = roundToInteger(msg->value * 100);
        thruster_act = trimValue(thruster_act, -thrust_max, thrust_max);

        spew("CR6 SetThrusterActuation value: %d", thruster_act);
      }

      //! From Autopilot or TextActions.
      void
      consume(const IMC::SetServoPosition* msg)
      {
        // Ensure rudder angle range [-max,max]. Scaled by 10 to become 3 digits, ex 450, then saturate.
        rudder_cmd = roundToInteger(msg->value * m_args.scale*10);
        rudder_cmd = trimValue(rudder_cmd, -rudder_max, rudder_max);

        spew("CR6 ServoPosition value: %d", rudder_cmd);
      }

      //! Consume a PowerSettings Message.
      void
      consume(const IMC::PowerSettings* msg)
      {
        m_pwr_settings.l2 = msg->l2;
        m_pwr_settings.l3 = msg->l3;
        m_pwr_settings.iridium = msg->iridium;
        m_pwr_settings.modem = msg->modem;
        m_pwr_settings.pumps = msg->pumps;
        m_pwr_settings.vhf = msg->vhf;

        // if(std::strcmp(resolveEntity(msg->getSourceEntity()).c_str(),"Relay Power Settings"))
        // {
        //     m_timer.setTop(3.0);
        //     pwr_sett_rec = true;
        //     debug("NEW ENTITYYYYYYYYYYY: %s",resolveEntity(msg->getSourceEntity()).c_str());
        // }

        spew("Received new pwrSettings through IMC:%d%d%d%d%d%d",
                                              m_pwr_settings.l2, m_pwr_settings.l3,
                                              m_pwr_settings.iridium, m_pwr_settings.modem,
                                              m_pwr_settings.pumps, m_pwr_settings.vhf);

        // Set retries to compare between data from CR6 and new parameters
        m_timer.setTop(3.0);
        pwr_sett_rec = true;

        storePowerSettings();
      
      }

      void
      onMain(void)
      {
        // Wait until entity has normal state
        while(getEntityState() != IMC::EntityState::ESTA_NORMAL);
        spew("Beginning main task loop");

        // Begin operation
        while (!stopping())
        {
          consumeMessages();          // Get IMC messages
          if(Poll::poll(*m_uart, 1.0))
          {
            IMC::VehicleMedium medium;
            medium.medium = IMC::VehicleMedium::VM_WATER;
            dispatch(medium);

            readUART();    // Read
            
          }

          if(m_timer_reboot.overflow())
          {
            m_do_send = true;
            m_timer_reboot.reset();
          }

          if(m_timer.overflow())
          {
            pwr_sett_rec = false;
            m_timer.reset();
          }
        }
      }
    };
  }
}

DUNE_TASK
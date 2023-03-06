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
// Alberto Dallolio                                                         *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  //! This task checks if internet connection is available.
  //! If the modem is ON it assumes we are in area with 4G/LTE coverage.
  //! If the modem is ON and no connection is present, it raises a warning and reboots it.

  //! @author Alberto Dallolio
  namespace Internet
  {
    using DUNE_NAMESPACES;

    //! Task arguments.
    struct Arguments
    {
      //! Connectivity check period.
      double timeout;
      //! Connectivity check period.
      double ping_timeout;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Connectivity check period.
      double m_timeout;
      //! Connectivity check period.
      double m_ping_timeout;
      //! Connectivity check timer.
      Counter<double> m_timer;
      //! Ping timer.
      Counter<double> m_ping_timer;
      //! 4G/LTE modem state.
      bool m_modem_on;
      //! Current power settings.
      IMC::PowerSettings m_pwr_settings;
      //! True if we attempt to re-establish connection.
      bool m_attempt;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
        m_modem_on(false),
        m_attempt(false)
      {
        param("Internet check interval", m_args.timeout)
        .units(Units::Second)
        .defaultValue("600")
        .description("Interval between checks of the 4G/LTE connectivity.");

        param("Ping period", m_args.ping_timeout)
        .units(Units::Second)
        .defaultValue("60")
        .description("Interval between internet pings before rebooting.");

        bind<IMC::PowerSettings>(this);
      }

      void
      onUpdateParameters(void)
      {
        if(paramChanged(m_args.timeout))
        {
          m_timeout = m_args.timeout;
          m_timer.setTop(m_timeout);
          debug("Internet timer set.");
        }

        if(paramChanged(m_args.ping_timeout))
          m_ping_timeout = m_args.ping_timeout;

      }

      void
      onResourceAcquisition(void)
      {
        m_timer.setTop(m_timeout);
      }

      //! Consume a PowerSettings message.
      void
      consume(const IMC::PowerSettings* msg)
      {
        std::string ent = resolveEntity(msg->getSourceEntity()).c_str();
        if(ent.compare("Relay Power Settings") == 0)
        {
          m_pwr_settings.l2 = msg->l2;
          m_pwr_settings.l3 = msg->l3;
          m_pwr_settings.iridium = msg->iridium;
          m_pwr_settings.modem = msg->modem;
          m_pwr_settings.pumps = msg->pumps;
          m_pwr_settings.vhf = msg->vhf;

          if(m_pwr_settings.modem == 0)
            m_modem_on = true;
          else
            m_modem_on = false;
        }
      }

      void
      checkConnectivity()
      {
        int x = system("ping -c1 -s1 8.8.8.8 > /dev/null 2>&1");
        if(x==0)
          debug("Internet connection available.");
        else
        {
          war("Internet connection NOT available, trying again in %f seconds.",m_ping_timeout);
          m_ping_timer.reset();
          m_ping_timer.setTop(m_ping_timeout);
          m_attempt = true;
        }

        //! Restart timer.
        m_timer.reset();
        m_timer.setTop(m_timeout);
      }

      void
      rebootModem()
      {
        m_pwr_settings.modem = 2;
        dispatch(m_pwr_settings,DF_LOOP_BACK);
        debug("Requested modem reboot.");

        m_attempt = false;
      }

      void
      task(void)
      {
        while(!stopping())
        {
          waitForMessages(1.0);

          if(m_timer.overflow() && m_modem_on)
            checkConnectivity();

          if(m_ping_timer.overflow() && m_modem_on && m_attempt)
            rebootModem();
        }
      }
    };
  }
}

DUNE_TASK

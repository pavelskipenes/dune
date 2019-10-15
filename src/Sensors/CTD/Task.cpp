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
// Author: renalberto                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace CTD
  {
    using DUNE_NAMESPACES;

    //! Task arguments.
    struct Arguments
    {
      //! GPIO toggle.
      bool state;
    };

    struct Task: public DUNE::Tasks::Task
    {
      Hardware::GPIO* m_gpio;
      bool m_gpio_state;
      Arguments m_args;
      
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx), m_gpio(NULL)
      {
        // Define configuration parameters.
        param("GPIO - State", m_args.state)
        .defaultValue("1")
        .minimumValue("0")
        .maximumValue("1")
        .description("Set GPIO state");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.state))
        {
          m_gpio_state = m_args.state;

          // If sensor has been turned on, activate the task
          // If sensor has been turned off, deactivate the task
          // SSRs are normally-closed (NC), so deactivation means GPIO state = 1
          if(m_args.state)
            requestDeactivation();
          else
            requestActivation();
        }
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
        m_gpio = new Hardware::GPIO(66);
        m_gpio->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
        m_gpio->setValue(0);
        
        // Set the task to sleep while the sensor is off
        requestDeactivation();
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_gpio);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          // protection to avoid dereferencing a NULL pointer
          if (m_gpio == NULL)
            return;

          m_gpio->setValue(1);
          Delay::wait(10.0);
          m_gpio->setValue(0);
          Delay::wait(10.0);
        }
      }
    };
  }
}

DUNE_TASK

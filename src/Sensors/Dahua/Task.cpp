//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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

// DUNE headers.
#include <DUNE/DUNE.hpp>


namespace Sensors
{
  namespace Dahua
  {
    using DUNE_NAMESPACES;

    double boot_time = 90.0;

    //! %Task arguments.
    struct Arguments
    {
      //! Activates stream broadcast.
      bool broadcast;
      //! Transmit to NTNU.
      bool transmit;
      //! Activates manual frame capture.
      bool man_frame;
      //! Activates manual video record.
      bool man_video;
      //! Video length.
      int video_length;
      //! Activates automatic frame capture.
      bool auto_frame;
      //! Activates automatic video record.
      bool auto_video;
      //! Automatic frame capture period.
      double auto_frame_period;
      //! Automatic video record period.
      double auto_video_period;
      //! Path to manual folder.
      std::string man_path;
      //! Path to automatic folder.
      std::string auto_path;
      //! Frame capture command.
      std::string m_frame_rec_cmd;
      //! Video capture command.
      std::string m_video_cmd;
    };

    struct Task: public Tasks::Task
    {
      //! GPIO state handle
      Hardware::GPIO* m_gpio;
      //! Indicates camera state.
      bool m_active;
      //! Enable/disable modes.
      bool m_broadcast, m_man_frame, m_man_video, m_video_saved, m_transmit;
      //! Video length.
      int m_video_length;
      //! Automaitc routines.
      bool m_auto_frame, m_auto_video;
      //! Periods of automatic routines.
      double m_auto_frame_period, m_auto_video_period;
      //! Timers for automatic routines.
      Counter<double> m_auto_frame_timer, m_auto_video_timer, m_video_length_timer;
      Counter<double> m_video_timer, m_camera_booting;
      //! Command string from Iridium.
      std::string m_cmd;
      //! Paths.
      std::string m_man_path, m_auto_path;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        //m_gpio(NULL),
        m_active(false),
        m_broadcast(false),
        m_transmit(false)
      {
        // Define configuration parameters.
        param("Stream broadcast", m_args.broadcast)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("false")
        .description("Activate/deactivate stream broadcast.");

        param("Transmit to NTNU", m_args.transmit)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("false")
        .description("Transmit data to NTNU automatically.");

        param("Manual frame capture", m_args.man_frame)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("false")
        .description("Capture a frame from the stream.");

        param("Manual video record", m_args.man_video)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("false")
        .description("Record a video from the stream.");

        param("Video length", m_args.video_length)
        .units(Units::Second)
        .defaultValue("10")
        .description("Record a video from the stream.");

        param("Automatic frame capture", m_args.auto_frame)
        .defaultValue("false")
        .description("Periodically capture a frame from the stream.");

        param("Automatic video capture", m_args.auto_video)
        .defaultValue("false")
        .description("Periodically record a video from the stream.");

        param("Frame capture period", m_args.auto_frame_period)
        .units(Units::Second)
        .defaultValue("3600")
        .description("Time after which a frame is captured.");

        param("Video record period", m_args.auto_video_period)
        .units(Units::Second)
        .defaultValue("1800")
        .description("Time after which a video is recorded.");

        param("Manual path", m_args.man_path)
        .defaultValue("")
        .description("Where manual frames/videos are stored.");

        param("Automatic path", m_args.auto_path)
        .defaultValue("")
        .description("Where automatic frames/videos are stored.");

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

      }

      void
      onUpdateParameters(void)
      {
        // If sensor is on and Neptus wants to turn it off.

        if(paramChanged(m_args.transmit))
          m_transmit = m_args.transmit;
        
        if(paramChanged(m_args.broadcast))
        {
          m_broadcast = m_args.broadcast;
          if(m_broadcast && !m_active)
          {
            spew("On update parameters: CAMERA ON");
            m_gpio->setValue(1); // UNCOMMENT AFTER DEBUGGING.

            // Device is on.
            m_active = true;

            // If a broadcast is requested, automatic routines are disabled.
            m_auto_frame = false;
            m_auto_video = false;
          }
          if(!m_broadcast && m_active) {
            // The camera is turned off, no matter if automatic routines are desired.
            spew("On update parameters: CAMERA OFF");
            m_gpio->setValue(0); // UNCOMMENT AFTER DEBUGGING.
            m_active = false;
          }
        }

        if(paramChanged(m_args.man_frame))
        {
          m_man_frame = m_args.man_frame;
          if(m_man_frame)
          {
            if(!m_active)
              turnOnandWait();
            else
              recordAndTransmitFrame();
          }
        }

        if(paramChanged(m_args.man_video))
        {
          m_man_video = m_args.man_video;
          if(m_man_video)
          {
            if(!m_active)
              turnOnandWait();
            else
              recordVideo();
          }
        }

        if(paramChanged(m_args.video_length))
          m_video_length = m_args.video_length;

        if(paramChanged(m_args.auto_frame_period))
          m_auto_frame_period = m_args.auto_frame_period;

        if(paramChanged(m_args.auto_frame))
        {
          m_auto_frame = m_args.auto_frame;
          if(m_auto_frame)
            m_auto_frame_timer.setTop(m_auto_frame_period);
        }

        if(paramChanged(m_args.auto_video_period))
          m_auto_video_period = m_args.auto_video_period;

        if(paramChanged(m_args.auto_video))
        {
          m_auto_video = m_args.auto_video;
          if(m_auto_video)
            m_auto_video_timer.setTop(m_auto_video_period);
        }

        if(paramChanged(m_args.man_path))
          m_man_path = m_args.man_path;

        if(paramChanged(m_args.auto_path))
          m_auto_path = m_args.auto_path;
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_video_timer.setTop(100000000.0);
        m_camera_booting.setTop(100000000.0);
        
        try
        {
          m_gpio = new Hardware::GPIO(60);
          m_gpio->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
          if(m_active)
            m_gpio->setValue(1);
          else
          {
            m_gpio->setValue(0);
            m_active = false;
          }
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_gpio);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {}

      void
      turnOnandWait(void)
      {
        if(!m_active)
        {
          spew("Camera is OFF, turning ON first ... ");
          m_gpio->setValue(1); // UNCOMMENT AFTER DEBUGGING.

          // Wait 5 seconds before capturing the frame.
          m_camera_booting.setTop(boot_time);
          m_active = true;
        }
      }

      void
      consume(const IMC::DevDataText * msg)
      {
        spew("Command arrived from Iridium.");
        m_cmd = msg->value;

        // Parse command.
        char what[32];
        std::sscanf(m_cmd.c_str(), "%s", what);
        
        if(!strcmp(what, "frame"))
        {
          m_man_frame = true; // enable manual frame capture.
          m_transmit = false; // disable transmission, we are on Iridium!
          if(!m_active)
            turnOnandWait();
          else
            recordAndTransmitFrame();
        } else
        {
          char video[32], length[32];
          std::sscanf(m_cmd.c_str(), "%s %s", video, length);
          m_video_length = std::atoi(length);

          m_man_video = true; // enable manual video capture.
          m_transmit = false; // disable transmission, we are on Iridium!
          if(!m_active)
            turnOnandWait();
          else
            recordVideo();
        }
      }      

      void
      recordAndTransmitFrame(void)
      {
        // Record.
        std::string m_frame_rec_cmd = String::str("cd /opt/lsts/camera/scripts/ && ash getFrameMan.sh >> /dev/null 2>&1");
        int ret = std::system(m_frame_rec_cmd.c_str())/256;

        if(m_transmit)
        {
          Delay::wait(5.0);
          // Transmit to NTNU server if internet connection is up.
          int x = system("ping -c1 -s1 8.8.8.8  > /dev/null 2>&1");
          if (x==0){
            spew("Internet connection available, transferring frame to NTNU ... ");
            std::string m_frame_transfer_cmd = String::str("cd /opt/lsts/camera/scripts/ && ash transmitFrameMan.sh >> /dev/null 2>&1");
            int scp = std::system(m_frame_transfer_cmd.c_str())/256; // This function does not return if the NTNU server cannot be reached, and it will get stuck here.
          }else{
            spew("Internet connection NOT available ... ");
          }
        }

        // Turn off the camera if it is not broadcasting.
        if(!m_broadcast)
        {
          spew("Frame captured and transmitted. Camera turning off..");
          m_gpio->setValue(0);
        }
      }
      
      void
      recordVideo(void)
      {
        // Record.
        std::string m_frame_rec_cmd = String::str("cd /opt/lsts/camera/scripts/ && ash getVideoMan.sh ") + std::to_string(m_video_length) + String::str(" >> /dev/null 2>&1");
        spew("Video string: %s", m_frame_rec_cmd.c_str());
        int ret = std::system(m_frame_rec_cmd.c_str())/256;

        m_video_timer.setTop((double)m_video_length + 5.0);
        m_video_saved = false;
      }

      void
      transmitVideo(void)
      {
        // Transmit to NTNU server if internet connection is up.
        int x = system("ping -c1 -s1 8.8.8.8  > /dev/null 2>&1");
        if (x==0){
          spew("Internet connection available, transferring video to NTNU ... ");
          std::string m_video_transfer_cmd = String::str("cd /opt/lsts/camera/scripts/ && ash transmitVideoMan.sh >> /dev/null 2>&1");
          int scp = std::system(m_video_transfer_cmd.c_str())/256; // This function does not return if the NTNU server cannot be reached, and it will get stuck here.
        }else{
          spew("Internet connection NOT available ... ");
        }

        // Turn off the camera if it is not broadcasting.
        if(!m_broadcast)
        {
          spew("Video captured and transmitted. Camera turning off..");
          m_gpio->setValue(0);
        }
      }

      void
      onMain(void)
      {

        while (!stopping())
        {
          waitForMessages(0.01);

          if(m_camera_booting.overflow() && m_man_video)
          {
            m_man_video = false;
            spew("Camera has booted, recording video ...");
            recordVideo();
          } else if(m_camera_booting.overflow() && m_man_frame)
          {
            m_man_frame = false;
            spew("Camera has booted, recording frame ...");
            recordAndTransmitFrame();
          }

          if(m_video_timer.overflow() && !m_video_saved && m_transmit)
          {
            m_video_saved = true;
            transmitVideo();
          }

          /*if(m_active && m_auto_frame_timer.overflow())
          {
            spew("Automatically capturing frame ... ");
            captureAndStoreFrame();
            m_auto_frame_timer.reset();
          }

          if(m_active && m_auto_video_timer.overflow())
          {
            spew("Automatically recording video ... ");
            recordAndStoreVideo();
            m_auto_video_timer.reset();
          }

          if(m_active && m_video_length_timer.overflow() && !m_broadcast)
          {
            spew("Video recorded, turning off camera.");
            m_gpio->setValue(0); // UNCOMMENT AFTER DEBUGGING.
            m_active = false;
          }*/
        }
      }
    };
  }
}

DUNE_TASK

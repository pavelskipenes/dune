//***************************************************************************
// Copyright 2018 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and OceanScan - Marine Systems &           *
// Technology, Lda. For licensing terms, conditions, and further            *
// information contact info@oceanscan-mst.com.                              *
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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef SENSORS_NORTEK_ADCP_500_DRIVER_HPP_INCLUDED_
#define SENSORS_NORTEK_ADCP_500_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace NortekADCP500
  {
    using DUNE_NAMESPACES;

    //! Break command
    static const std::string c_cmd_break = "\x03";
    //! Credentials
    static const std::string c_cmd_nortek = "nortek";
    //! No input trigger.
    static const std::string c_cmd_trg_no = "INTSR";
    //! Command reply timeout.
    static const float c_timeout = 10.0f;

    //! Driver class to configure Nortek Signature 500 ADCP.
    class Driver
    {
    public:
      //! Constructor.
      //! @param[in] task parent task.
      //! @param[in] handle io handle.
      //! @param[in] rate sampling rate.
      //! @param[in] bt_blank blanking distance for the bottom tracker.
      //! @param[in] power power level.
      //! @param[in] trigger input trigger.
      //! @param[in] trg_type type of input trigger.
      //! @param[in] dbg enable hardware diagnostics.
      //! @param[in] npings collect current profile every n-th ping.
      //! @param[in] ncells number of cells for the current profiler.
      //! @param[in] cellsize cell size of the current profiler.
      //! @param[in] cp_blank blanking distance of the current profiler.
      Driver(Tasks::Task* task, IO::Handle* handle, unsigned miavg, unsigned avg_enable, unsigned vd,
                                                    unsigned burst_enable, unsigned miburst, unsigned diburst,
                                                    float soundvel, std::string logfilename, 
                                                    unsigned ncells, float cellsize, float blank, std::string coord, std::string coord_tel,
                                                    float powerlevel, unsigned ainterval, float vrange, unsigned nping,
                                                    unsigned nbeam, std::string bandwidth, unsigned avg_tel_enable, 
                                                    unsigned celldivisor, unsigned packetdivisor, unsigned avg_tel_data,
                                                    unsigned store_vel, unsigned store_ampl,unsigned store_corr,
                                                    unsigned fo_enable, unsigned so_enable,unsigned data_format):
        m_task(task),
        m_handle(handle),

        m_cp_miavg(miavg),
        m_cp_avg_enable(avg_enable),
        m_cp_vd(vd),
        m_cp_burst_enable(burst_enable),
        m_cp_miburst(miburst),
        m_cp_diburst(diburst),
        m_cp_soundvel(soundvel),
        m_cp_logfilename(logfilename),
        m_cp_ncells(ncells),
        m_cp_cellsize(cellsize),
        m_cp_blank(blank),
        m_cp_coord(coord),
        m_cp_coord_tel(coord_tel),
        m_cp_powerlevel(powerlevel),
        m_cp_ainterval(ainterval),
        m_cp_vrange(vrange),
        m_cp_nping(nping),
        m_cp_nbeam(nbeam),
        m_cp_bandwidth(bandwidth),
        m_cp_avg_tel_enable(avg_tel_enable),
        m_cp_celldivisor(celldivisor),
        m_cp_packetdivisor(packetdivisor),
        m_cp_avg_tel_data(avg_tel_data),
        m_cp_store_vel(store_vel),
        m_cp_store_ampl(store_ampl),
        m_cp_store_corr(store_corr),
        m_cp_fo_enable(fo_enable),
        m_cp_so_enable(so_enable),
        m_cp_data_format(data_format),

        m_salinity(35.0),
        m_cmd_mode(false),
        m_firmware(false)
      {
      }

      //! Destructor.
      ~Driver(void)
      {
        // Gracefully disconnect from device.
        sendBreak();
        sendCommand("MC", true);
        sendCommand("POWERDOWN");
      }

      //! Reset parameters.
      //! @param[in] rate sampling rate.
      //! @param[in] bt_blank blanking distance for the bottom tracker.
      //! @param[in] npings collect current profile every n-th ping.
      //! @param[in] ncells number of cells for the current profiler.
      //! @param[in] csize cell size of the current profiler.
      //! @param[in] cp_blank blanking distance of the current profiler.
      void
      reset(unsigned npings, unsigned ncells,
            float csize, float cp_blank)
      {
        m_cp_nping = npings;
        m_cp_ncells = ncells;
        m_cp_cellsize = csize;
        m_cp_blank = cp_blank;
      }

      //! Login into device.
      //! @return true if login succeeded, false otherwise
      bool
      login(void)
      {
        replyLogin("nortekadcp Username: ");
        replyLogin("Password: ");

        return readUntil("Nortek nortekadcp Command Interface\r\r\n", c_timeout);
      }

      //! Device's setup sequence.
      //! @return true if command succeeded, false otherwise.
      bool
      setup(std::string& error)
      {
        // run setup routines.
        if (runSetup())
          return true;

        // get setup error and return.
        error = ": " + m_last_recv;
        return false;
      }

      //! Update salinity.
      //! @param[in] value salinity value.
      void
      setSalinity(double value)
      {
        if (value < 0.0 || value > 50.0)
          return;

        m_salinity = value;
        
        enterCommandMode();
        setADCPPlan();
        setAVGParams();
        start();
      }

    private:
      //! Reply with credentials
      bool
      replyLogin(const std::string& reply)
      {
        if (readUntil(reply, c_timeout))
          write(c_cmd_nortek);
        else
          return false;

        return true;
      }

      //! Run boot setup routines
      //! @return true if device is ready, false otherwise.
      bool
      runSetup(void)
      {
        m_last_recv.clear();
        if (!enterCommandMode())
          return false;

        if (!setDefaults())
          return false;

        if (!setInstrument())
          return false;

        if (!setTime())
          return false;

        if (!setADCPPlan())
          return false;

        if (!setAVGParams())
          return false;
        
        if (!setMAVGParams())
          return false;

        if (!setAbsPressure())
          return false;

        if (!saveUserParameters())
          return false;

        if (!save())
          return false;

        return start();
      }


      //! Start measuring.
      //! @return true if in measurement mode, false otherwise.
      bool
      start(void)
      {
        // go to measurement mode.
        if (sendCommand("START,PLAN=0"))
        {
          m_cmd_mode = false;
          return true;
        }

        return false;
      }

      //! Stop measuring and enter command mode.
      //! @return true if back in command mode, false otherwise.
      bool
      enterCommandMode(void)
      {
        // no need to stop, not in measurement mode.
        if (m_cmd_mode)
          return true;

        if (!sendBreak())
          return false;

        Delay::wait(1.0);
        if (!sendCommand("MC", true))
          return false;

        m_cmd_mode = true;
        return true;
      }

      //! Set device default parameters.
      //! @return true if command succeeded, false otherwise.
      bool
      setDefaults(void)
      {
        return sendCommand("SETDEFAULT,CONFIG");
      }

      //! Set device instrument parameters.
      //! @return true if command succeeded, false otherwise.
      bool
      setInstrument(void)
      {
        return sendCommand("SETINST,LED=\"OFF\",ORIENT=\"AHRS3D\"");
      }

      //! Set absolute pressure.
      //! @return true if command succeeded, false otherwise.
      bool
      setAbsPressure(void)
      {
        return sendCommand("SETUSER,POFF=0.0");
      }

      //! Save user parameters.
      //! @return true if command succeeded, false otherwise.
      bool
      saveUserParameters(void)
      {
        return sendCommand("SAVE,USER");
      }

      //! Wake up device.
      //! @return true if break was received, false otherwise.
      bool
      sendBreak(void)
      {
        if (!sendCommand(c_cmd_break, true))
          return sendCommand(c_cmd_break, true);

        return true;
      }

      //! Set device's time.
      //! @return true if configured successfully, false otherwise.
      bool
      setTime(void)
      {
        Time::BrokenDown tm(Clock::getSinceEpoch(), true);
        std::string cmd;
        cmd = String::str("SETCLOCK,YEAR=%d,MONTH=%d,DAY=%d,"
                          "HOUR=%d,MINUTE=%d,SECOND=%d",
                          tm.year, tm.month, tm.day, tm.hour,
                          tm.minutes, tm.seconds);

        return sendCommand(cmd);
      }

      //! Set Current Profiler's plan parameters.
      //! @return true if command succeeded, false otherwise.
      bool
      setADCPPlan(void)
      {

        std::string cmd;
        cmd = String::str("SETPLAN,MIAVG=%d,AVG=%d,DIAVG=0,VD=%d,MV=10,SA=%.1f,BURST=%d,MIBURST=%d,DIBURST=%d,SV=%.1f,FN=\"%s\",SO=1,FREQ=500,NSTT=0", // NSTT was not there.
                          m_cp_miavg, m_cp_avg_enable, m_cp_vd, m_salinity, 
                          m_cp_burst_enable, m_cp_miburst, m_cp_diburst, m_cp_soundvel, m_cp_logfilename.c_str());
        return sendCommand(cmd);
      }

      //! Set Current Profiler's averaging filter parameters.
      //! @return true if command succeeded, false otherwise.
      bool
      setAVGParams(void)
      {

        std::string cmd;
        cmd = String::str("SETAVG,NC=%d,CS=%.1f,BD=%.1f,CY=\"%s\",PL=%.1f,AI=%d,VR=%.1f,DF=3,NPING=%d,NB=%d,CH=0,MUX=0,BW=\"%s\",ALTI=0,BT=0,ICE=0,ALTISTART=0.5,ALTIEND=70,RAWALTI=1", //CH=4
                          m_cp_ncells, m_cp_cellsize, m_cp_blank, m_cp_coord.c_str(), 
                          m_cp_powerlevel, m_cp_ainterval, m_cp_vrange, m_cp_nping,
                          m_cp_nbeam, m_cp_bandwidth.c_str());
        return sendCommand(cmd);
      }

      //! Set Current Profiler's averaging mode telemetry parameters.
      //! @return true if command succeeded, false otherwise.
      bool
      setMAVGParams(void)
      {

        std::string cmd;
        cmd = String::str("SETTMAVG,EN=%d,CD=%d,PD=%d,AVG=%d,TV=%d,TA=%d,TC=%d,CY=\"%s\",FO=%d,SO=%d,DF=%d",
                          m_cp_avg_tel_enable, m_cp_celldivisor, m_cp_packetdivisor, m_cp_avg_tel_data, 
                          m_cp_store_vel, m_cp_store_ampl, m_cp_store_corr, m_cp_coord_tel.c_str(),
                          m_cp_fo_enable, m_cp_so_enable, m_cp_data_format);
        return sendCommand(cmd);
      }

      //! Save configuration.
      //! @return true if configured successfully, false otherwise.
      bool
      save(void)
      {
        if (!sendCommand("SAVE,CONFIG"))
        {
          sendCommand("GETERROR", false);
          return false;
        }

        return true;
      }

      //! Send command and wait for reply.
      //! @param[in] cmd command to send.
      //! @param[in] ignore ignore if device is in measurement mode or not.
      //! @param[in] print send replies to output stream.
      //! @return true if command succeeded, false otherwise.
      bool
      sendCommand(const std::string& cmd, bool ignore = false)
      {
        // if in measurement mode, stop stream and go to command mode.
        if (!ignore)
        {
          if (!enterCommandMode())
            return false;
        }

        write(cmd);
        std::string reply("OK\r\n");
        return readUntil(reply, c_timeout);
      }

      //! Write command.
      //! @param[in] cmd command to send.
      void
      write(const std::string& cmd)
      {
        std::string bfr(cmd + "\r\n");
        m_handle->write(bfr.c_str(), bfr.size());
        m_task->trace("sent: '%s'", sanitize(bfr).c_str());
      }

      //! Read input until a given sequence is received. Note that
      //! data after the sequence might be discarded.
      //! @param[in] sequence sequence to search.
      //! @param[in] timeout timeout in second.
      //! @param[in] print send replies to output stream.
      //! @return true if command succeeded, false otherwise.
      bool
      readUntil(const std::string& sequence, float timeout)
      {
        Counter<float> timer(timeout);
        char bfr[256] = {0};
        size_t offset = 0;

        while (!timer.overflow())
        {
          if (!Poll::poll(*m_handle, timer.getRemaining()))
            break;

          offset += m_handle->read(bfr + offset, sizeof(bfr) - offset);
          if (offset > sizeof(bfr))
            break;

          if (String::endsWith(bfr, sequence))
          {
            if (!m_firmware)
            {
              unsigned v1 = 0;
              unsigned v2 = 0;
              if (std::sscanf(bfr, "Signature500 - NORTEK AS.\r\nVersion %u_%u", &v1, &v2) == 2)
              {
                m_firmware = true;
                m_task->debug("firmware version: %u_%u", v1, v2);
              }
            }

            IMC::DevDataText dev_data;
            dev_data.value.assign(sanitize(bfr));
            m_task->dispatch(dev_data);
            m_last_recv = sanitize(bfr);
            m_task->trace("recv: '%s'", sanitize(bfr).c_str());

            return true;
          }
        }

        IMC::DevDataText dev_data;
        dev_data.value.assign(sanitize(bfr));
        m_task->dispatch(dev_data);

        m_task->trace("recv: '%s' (does not end with: '%s')",
                      sanitize(bfr).c_str(), sanitize(sequence).c_str());

        return false;
      }

      //! Parent task.
      Tasks::Task* m_task;
      //! IO Handle.
      IO::Handle* m_handle;
      
      //! ADCP SETPLAN parameters
      unsigned m_cp_miavg;
      unsigned m_cp_avg_enable;
      unsigned m_cp_vd;
      unsigned m_cp_burst_enable;
      unsigned m_cp_miburst;
      unsigned m_cp_diburst;
      float m_cp_soundvel;
      std::string m_cp_logfilename;
      
      //! ADCP SETAVG parameters
      unsigned m_cp_ncells;
      float m_cp_cellsize;
      float m_cp_blank;
      std::string m_cp_coord;
      std::string m_cp_coord_tel;
      float m_cp_powerlevel;
      unsigned m_cp_ainterval;
      float m_cp_vrange;
      unsigned m_cp_nping;
      unsigned m_cp_nbeam;
      std::string m_cp_bandwidth;

      //! ADCP SETTMAVG parameters
      unsigned m_cp_avg_tel_enable;
      unsigned m_cp_celldivisor;
      unsigned m_cp_packetdivisor;
      unsigned m_cp_avg_tel_data;
      unsigned m_cp_store_vel;
      unsigned m_cp_store_ampl;
      unsigned m_cp_store_corr;
      unsigned m_cp_fo_enable;
      unsigned m_cp_so_enable;
      unsigned m_cp_data_format;

      //! Salinity value.
      double m_salinity;
      //! Command Mode;
      bool m_cmd_mode;
      //! Show firmware once.
      bool m_firmware;
      //! Last received reply;
      std::string m_last_recv;
    };
  }
}

#endif

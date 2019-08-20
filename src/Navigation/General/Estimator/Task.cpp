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

// ISO C++ 98 headers.
#include <vector>
#include <cmath>
#include <complex>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace 
{
  //! Wave Estimator from IMU heave acceleration.
  //!
  //! @author Alberto Dallolio
  namespace Navigation
  {
    namespace General
    {
      namespace Estimator
      {
        using DUNE_NAMESPACES;

        //! %Task arguments.
        struct Arguments
        {
          //! Low-pass filter: cutoff frequency.
          double lp_ampl_cutoff;
          //! Low-pass filter: order.
          double lp_ampl_order;
          //! Low-pass filter: cutoff frequency.
          double lp_est_cutoff;
          //! Band-stop filter: high frequency.
          double bs_high_freq;
          //! Band-stop filter: low frequency.
          double bs_low_freq;
          //! Band-stop filter: order.
          double bs_order;
          //! Notch filter: cutoff frequency.
          double nf_cutoff;
          //! Notch filter: order.
          double nf_order;
          //! Acceleration Sampling Frequency.
          double data_sampl_freq;
          //! Estimator Period.
          float period;
          //! Estimation duration.
          float duration;
          //! Maximum Estimator Gain.
          double gain_max;
          //! Minimum Estimator Gain.
          double gain_min;
          //! Switching Amplitude.
          double a_switch;

        };

        struct Task: public DUNE::Tasks::Task
        {
          //! Constructor.
          //! @param[in] name task name.
          //! @param[in] ctx context.

          //! Task arguments.
          Arguments m_args;
          //! Acceleration.
          IMC::Acceleration m_accel;
          //! Heave Acceleration
          double m_heave_acc;
          //! Heave Acceleration Squared
          double m_heave_acc_sq;
          //! Estimated Amplitude
          double m_ampl_est;
          //! Estimator Gain.
          double m_gain;
          // Average factor.
          int m_avg;
          //! Estimation Duration timer.
          Time::Counter<float> m_timer;
          //! Derivative for Estimatore.
          Math::Derivative<double> m_deriv;
          //! Time window between values.
          Time::Delta m_delta;
          //! Estimator parameter 1.
          double m_zeta_1;
          //! Estimator parameter 2.
          double m_zeta_2;
          //! Estimator parameter 2 deriv.
          double m_zeta_2_dot;
          //! Parameter Estimate.
          //double m_phi_est;
          std::complex<double> m_phi_est;
          //! Estimated Wave Frequency - Complex.
          std::complex<double> m_wave_cplx;
          //! Parameter Estimate Derivative.
          double m_phi_est_dot;
          //! Parameter Estimate Last.
          std::complex<double> m_phi_est_last; //double m_phi_est_last;
          //Low-pass filter for amplitude estimation.
          FilterEstimator lowpass_ampl;
          //Lowpass filter for wave freq estimation.
          FilterEstimator lowpass_est;
          //Average Estimated Wave Frequency - Dispatch.
          IMC::EstimatedFreq m_wave_avg;
          // Last Average Estimated Wave Frequency.
          double m_wave_avg_last;
          // Estimated Wave Frequency.
          double m_wave;
          // Filter types.
          //filterType LPF, HPF, NF, BSF, BPF;



          Task(const std::string& name, Tasks::Context& ctx):
            DUNE::Tasks::Task(name, ctx),
            m_heave_acc(0.0),
            m_heave_acc_sq(0.0),
            m_ampl_est(0.0),
            m_gain(0.0),
            m_avg(0.0),
            m_zeta_1(0.0),
            m_zeta_2(0.0),
            m_zeta_2_dot(0.0),
            m_phi_est(0.0),
            m_wave_cplx(0.0),
            m_phi_est_dot(0.0),
            m_phi_est_last(0.0),
            m_wave_avg_last(0.0),
            m_wave(0.0)
          {
            param("Amplitude LP cutoff frequency", m_args.lp_ampl_cutoff)
              .units(Units::Hertz)
              .defaultValue("10.0")
              .description("Low-pass filter cutoff frequency");

            param("Amplitude LP order", m_args.lp_ampl_order)
              .defaultValue("1.0")
              .minimumValue("1.0")
              .description("Low-pass filter order");

            param("Omega_f LP cutoff frequency", m_args.lp_est_cutoff)
              .units(Units::Hertz)
              .defaultValue("10.0")
              .description("Low-pass filter cutoff frequency");              

            param("BS high frequency", m_args.bs_high_freq)
              .units(Units::Hertz)
              .defaultValue("10.0")
              .description("Band-stop filter high frequency");

            param("BS low frequency", m_args.bs_low_freq)
              .units(Units::Hertz)
              .defaultValue("10.0")
              .description("Band-stop filter low frqeuency");

            param("BS order", m_args.bs_order)
              .defaultValue("1.0")
              .minimumValue("1.0")
              .description("Band-stop filter order");

            param("NF cutoff frequency", m_args.nf_cutoff)
              .units(Units::Hertz)
              .defaultValue("10.0")
              .description("Notch filter cutoff frequency");

            param("NF order", m_args.nf_order)
              .defaultValue("1.0")
              .minimumValue("1.0")
              .description("Notch filter order");

            param("Data Sampling Frequency", m_args.data_sampl_freq)
              .units(Units::Hertz)
              .defaultValue("100.0")
              .description("Heave Acceleration Sampling Frequency");

            param("Period", m_args.period)
              .units(Units::Second)
              .defaultValue("1800.0")
              .description("Estimator Period");

            param("Estimation Duration", m_args.duration)
              .units(Units::Second)
              .defaultValue("600.0")
              .description("Estimation Duration");

            param("Minimum Gain", m_args.gain_min)
              .defaultValue("2.0")
              .minimumValue("1.0")
              .description("Estimator Minimum Gain");

            param("Maximum Gain", m_args.gain_max)
              .defaultValue("10.0")
              .maximumValue("100.0")
              .description("Estimator Maximum Gain");

            param("Switching Amplitude", m_args.a_switch)
              .units(Units::Meter)
              .defaultValue("0.1")
              .description("Amplitude for Gain Switching");

            // Setup processing of IMC messages
            bind<Acceleration>(this);

          }

          //! Update internal state with new parameter values.
          void
          onUpdateParameters(void)
          {
            if(paramChanged(m_args.duration))
              m_timer.setTop(m_args.period+m_args.duration);

            if(paramChanged(m_args.lp_ampl_cutoff) ||
              paramChanged(m_args.data_sampl_freq) ||
              paramChanged(m_args.lp_ampl_order) ||
              paramChanged(m_args.lp_est_cutoff) ||
              paramChanged(m_args.data_sampl_freq))
              buildFilters();
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
          }

          //! Initialize resources.
          void
          onResourceInitialization(void)
          {
            buildFilters();
            m_timer.setTop(m_args.period+m_args.duration);
          }

          //! Release resources.
          void
          onResourceRelease(void)
          {
          }

          void
          buildFilters(void)
          {
            lowpass_ampl.build("LPF", m_args.lp_ampl_cutoff, m_args.data_sampl_freq, m_args.lp_ampl_order);
            lowpass_est.build("LPF", m_args.lp_est_cutoff, m_args.data_sampl_freq, 2);
          }

          void
          consume(const IMC::Acceleration* acc)
          {

            m_heave_acc = acc->z;
            //spew("Consumed Acceleration:%f",m_heave_acc);

            if(m_timer.getElapsed()>=m_args.period && m_timer.getElapsed()<=m_args.period+m_args.duration)
            {
              
              //Estimation can start.
              //Create new LP Filter and Estimate Wave Amplitude. 
              m_heave_acc_sq = pow(m_heave_acc,2);
              //spew("Acceleration Squared:%f",m_heave_acc_sq);
              m_ampl_est = 2*lowpass_ampl.step(m_heave_acc_sq);
              m_ampl_est = sqrt(m_ampl_est);

              //spew("Estimated Amplitude:%f",m_ampl_est);

              if(m_ampl_est>m_args.a_switch)
                m_gain = m_args.gain_min;
              else
                m_gain = m_args.gain_max;

              //Compute zeta_2_dot.
              m_zeta_1 = lowpass_est.step(m_heave_acc);              
              m_zeta_2 = m_deriv.update(m_zeta_1);
              m_zeta_2_dot = -2*m_args.lp_est_cutoff*m_zeta_2 - pow(m_args.lp_est_cutoff,2)*m_zeta_1 + pow(m_args.lp_est_cutoff,2)*m_heave_acc;              

              //Compute phi_dot.
              m_phi_est_dot = m_gain*m_zeta_1*(m_zeta_2_dot-(real(m_phi_est)*m_zeta_1));

              // Compute Time Delta.
              double tstep = m_delta.getDelta();
              // Check if we have a valid time delta.
              if (tstep < 0.0)
                return;
              
              //Backward Euler Method.
              m_phi_est = m_phi_est_last + tstep*m_phi_est_dot;

              //Post-process data.
              m_wave_cplx = -m_phi_est;
              m_wave_cplx = sqrt(m_wave_cplx);
              //spew("Wave Frequency:%f\n ",m_wave_cplx);

              m_phi_est_last = m_phi_est;

              m_wave = real(m_wave_cplx);
              //spew("Wave Frequency:%f\n",m_wave);

              if(m_avg==0)
                m_wave_avg.value = m_wave;
              else
                m_wave_avg.value = (m_wave_avg_last * m_avg + m_wave) / (m_avg + 1);

              m_avg++;
              m_wave_avg_last = m_wave_avg.value;

            }

            if(m_timer.overflow())
            {
              //buildFilters();
              m_timer.reset();
              dispatch(m_wave_avg);
              //spew("Averaged Estimated Frequency: %f\n",m_wave_avg.value);
            }

            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          }

          //! Main loop.
          void
          onMain(void)
          {
            while (!stopping())
            {
              waitForMessages(1.0);
            }
          }
        };
      }
    }
  }
}

DUNE_TASK

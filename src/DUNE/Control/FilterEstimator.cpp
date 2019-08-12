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

// Local headers.
#include <DUNE/Control/FilterEstimator.hpp>
#include <DUNE/Math.hpp>

namespace DUNE
{
  namespace Control
  {

    //! Constructor.
    FilterEstimator::FilterEstimator(void):
      m_filt_t(),
      m_freq_sampl(0.0),
      m_freq_cutoff(0.0),
      m_order(0),
      m_freq_high(0.0),
      m_freq_low(0.0),
      m_omega(0.0),
      m_omega_low(0.0),
      m_omega_high(0.0),
      m_coeff(NULL)
      {}

        //! Destructor.
    FilterEstimator::~FilterEstimator()
    {
      if(m_coeff!= NULL) free(m_coeff);
    }

    // Low-pass, High-pass and Notch Filters.
    void
    FilterEstimator::build(std::string filt_t, double freq_cutoff, double freq_sampl, int order)
    {
      m_filt_t = filt_t;
      m_freq_sampl = freq_sampl;
      m_freq_cutoff = freq_cutoff;
      m_order = order;
      m_coeff = NULL;
      m_coeff = (double*)malloc(m_order * sizeof(double));
      if(m_filt_t.compare("LPF") == 0) LPF(m_freq_cutoff, m_freq_sampl, m_order);
      else if(m_filt_t.compare("HPF") == 0) HPF(m_freq_cutoff, m_freq_sampl, m_order);
      else if(m_filt_t.compare("NF") == 0) NF(m_freq_cutoff, m_freq_sampl, m_order);
    }

    // Band-pass and Band-stop Filters.
    void
    FilterEstimator::build(std::string filt_t, double freq_high, double freq_low, double freq_sampl, int order)
    {
      m_filt_t = filt_t;
      m_freq_sampl = freq_sampl;
      m_freq_high = freq_high;
      m_freq_low = freq_low;
      m_order = order;
      m_coeff = NULL;
      m_coeff = (double*)malloc(m_order * sizeof(double));
      // freq_high = highest frequency to be included.
      // freq_low = lowest frequency to be included.
      if(m_filt_t.compare("BPF") == 0) BPF(m_freq_high, m_freq_low, m_freq_sampl, m_order);
      // freq_high = highest frequency to be included in the bottom band.
      // freq_low = lowest frequency to be included in the top band.
      else if(m_filt_t.compare("BSF") == 0) BSF(m_freq_high, m_freq_low, m_freq_sampl, m_order);
    }

    void
    FilterEstimator::LPF(double freq_cutoff, double freq_sampl, int order)
    {
      //Normalize f_c and ω_c so that pi is equal to the Nyquist angular frequency
      m_freq_cutoff = freq_cutoff/freq_sampl;
      m_omega = 2*M_PI*freq_cutoff;
      int middle = order/2; //integer division, dropping remainder.
      int i;

      for(i=-middle;i<middle;i++)
      {
        if(i==0)
        {
          m_coeff[middle] = 2*freq_cutoff;
        }
        else
          m_coeff[i+middle] = sin(m_omega*i)/(M_PI*i);
      }
    }

    void 
    FilterEstimator::HPF(double freq_cutoff, double freq_sampl, int order)
    {
      //Normalize f_c and ω_c so that pi is equal to the Nyquist angular frequency
      m_freq_cutoff = freq_cutoff/freq_sampl;
      m_omega = 2*M_PI*freq_cutoff;
      int middle = order/2; //integer division, dropping remainder.

      int i;

      for(i=-middle;i<middle;i++)
      {
        if(i==0)
        {
          m_coeff[middle] = 1-2*freq_cutoff;
        }
        else
          m_coeff[i+middle] = -sin(m_omega*i)/(M_PI*i);
      }
    }

    void 
    FilterEstimator::NF(double freq_cutoff, double freq_sampl, int order)
    {
      //Implement a Notch Filter.
    }

    void
    FilterEstimator::BPF(double freq_high, double freq_low, double freq_sampl, int order)
    {
      m_freq_low = freq_low/freq_sampl;
      m_freq_high = freq_high/freq_sampl;
      m_omega_low = 2*M_PI*m_freq_low;
      m_omega_high = 2*M_PI*m_freq_high;
      int middle = order/2;    //integer division, dropping remainder.

      int i;

      for(i=-middle;i<middle;i++)
      {
        if(i==0)
        {
          m_coeff[middle] = 2*(m_freq_high-m_freq_low);
        }
        else
          m_coeff[i+middle] = sin(m_omega_high*i)/(M_PI*i)-sin(m_omega_low*i)/(M_PI*i);
      }
    }

    void
    FilterEstimator::BSF(double freq_high, double freq_low, double freq_sampl, int order)
    {
      // freq_high = highest frequency to be included in the bottom band.
      // freq_low = lowest frequency to be included in the top band.
      m_freq_low = freq_low/freq_sampl;
      m_freq_high = freq_high/freq_sampl; 
      m_omega_low = 2*M_PI*m_freq_low;
      m_omega_high = 2*M_PI*m_freq_high;
      int middle = order/2;    //integer division, dropping remainder.

      int i;

      for(i=-middle;i<middle;i++)
      {
        if(i==0)
        {
          m_coeff[middle] = 1-2*(m_freq_high-m_freq_low);
        }
        else
          m_coeff[i+middle] = sin(m_omega_high*i)/(M_PI*i)-sin(m_omega_low*i)/(M_PI*i);
      }
    }

    double 
    FilterEstimator::step(double data_sample)
    {
      int i;
      double result=0.0;
      for(i=0;i<m_order;i++)
      {
        result += data_sample * m_coeff[i];
      }
      return result;
    }
  }
}
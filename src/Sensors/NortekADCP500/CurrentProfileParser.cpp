
// Author: Andreas Våge

#include "CurrentProfileParser.hpp"
namespace Sensors
{
  namespace NortekADCP500
  {
    //! Parse Current Profile Status
    bool CurrentProfileParser::processMetaData(
        std::vector<uint8_t>::const_iterator itr_bfr,
        std::vector<uint8_t>::const_iterator itr_bfr_end )
    {
      if ( itr_bfr + CurrentProfileParser::IND_DATA_IND > itr_bfr_end )
      {
        m_task->err(
            "Current profile DF3 buffer iterator is out of range" );
        return false;
      }

      if ( c_df_version != itr_bfr[CurrentProfileParser::IND_VERSION] )
      {
        m_task->err(
            "Wrong Current Profiling format version: Got %08X, expected %08X.",
            itr_bfr[CurrentProfileParser::IND_VERSION], c_df_version );
        return false;
      }

      if ( CurrentProfileParser::IND_VEL_DATA != itr_bfr[CurrentProfileParser::IND_DATA_IND] )
      {
        m_task->debug(
            "Wrong Current Profiling Index: Expected %08X, using %08X.",
            CurrentProfileParser::IND_VEL_DATA, m_ind_vel_data );
        m_ind_vel_data = itr_bfr[CurrentProfileParser::IND_DATA_IND];
      }

      uint8_t config = itr_bfr[CurrentProfileParser::IND_CONF];
      if ( !( ( config >> c_vel_incl_bit ) & 1u ) )
      {
        m_task->err( "Current Velocity not included in current profile data." );
        return false;
      }
      if ( !( ( config >> c_amp_incl_bit ) & 1u ) )
      {
        m_task->err( "Amplitude not included in current profile data." );
        return false;
      }
      if ( !( ( config >> c_cor_incl_bit ) & 1u ) )
      {
        m_task->err( "Correlation not included in current profile data." );
        return false;
      }

      uint16_t binning;
      std::memcpy( &binning, &itr_bfr[CurrentProfileParser::IND_BINNING], 2 );
      uint16_t ncells = ( binning & c_ncells_mask );
      //m_nbeams =
      if ( ncells != m_ncells )
      {
        m_task->debug( "Wrong number of cells: Expected %u, using %u.",
                       m_ncells, ncells );
        m_ncells = ncells;
      }

      uint16_t cell_size;
      std::memcpy( &cell_size, &itr_bfr[CurrentProfileParser::IND_CELL_SIZE], 2 );
      float csize = (float) cell_size / 1000.0f; // Convert from mm to meter
      if ( !( m_csize * 0.999 < csize and csize < m_csize * 1.001 ) )
      {
        m_task->debug( "Wrong Current Profiling cell size: Expected %f m, using %f m.",
                       m_csize, csize );
        m_csize = csize;
      }

      int8_t vel_scale_pow10;
      std::memcpy( &vel_scale_pow10, &itr_bfr[CurrentProfileParser::IND_VEL_SCALE], 1 );
      if ( vel_scale_pow10 != m_vel_scale_pow10 )
      {
        m_task->debug( "Velocity scale power changed from %d to %d",
                       m_vel_scale_pow10, vel_scale_pow10 );
        m_vel_scale_pow10 = vel_scale_pow10;
        m_vel_scale = powf( 10, m_vel_scale_pow10 );
      }

      uint16_t error;
      std::memcpy( &error, &itr_bfr[CurrentProfileParser::IND_ERROR], 2 );
      if ( ( error & CurrentProfileParser::c_error_mask ) != 0 )
      {
        m_task->err(
            "Current profile error, see error description in Nortek integration guide: %16X", error );
        return false;
      }

      auto wake_up_bits_old = ( uint8_t )( ( c_wake_mask & m_cp_status ) >> c_wake_bit );
      std::memcpy( &m_cp_status, &itr_bfr[CurrentProfileParser::IND_STATUS], 4 );
      auto wake_up_bits_new = ( uint8_t )( ( c_wake_mask & m_cp_status ) >> c_wake_bit );
      if ( wake_up_bits_old != wake_up_bits_new )
      {
        processBits( wake_up_bits_new );
      }

      uint16_t blank;
      float f_blank;
      std::memcpy( &blank, &itr_bfr[CurrentProfileParser::IND_BLANK], 2 );
      if ( ( c_blank_scale_mask & m_cp_status ) == 0 )
      {
        f_blank = (float) blank / 1000.0f; // Convert from mm to meter
      }
      else
      {
        f_blank = (float) blank / 100.0f; // Convert from cm to meter
      }
      if ( !( m_blank * 0.999 < f_blank and f_blank < m_blank * 1.001 ) )
      {
        m_task->war(
            "Wrong Current Profiling blanking distance: Expected %f m, using %f m.",
            m_blank, f_blank );
        m_blank = f_blank;
      }
      return true;
    }
    //! Parse Current Profile Data
    bool CurrentProfileParser::parseData(
        const std::vector<uint8_t>::const_iterator itr_bfr,
        const std::vector<uint8_t>::const_iterator itr_bfr_end,
        IMC::CurrentProfile &msg_cp )
    {
      if ( itr_bfr + m_ind_vel_data + ( m_ncells * m_nbeams ) * 4 > itr_bfr_end )
      {
        m_task->err( "Current profile DF3 data buffer iterator is out of range" );
        return false;
      }

      if ( m_cp_vel.size() != m_nbeams or m_cp_vel[0].size() != m_ncells )
      {
        m_cp_vel.resize( m_nbeams );
        m_cp_amp.resize( m_nbeams );
        m_cp_cor.resize( m_nbeams );
        for ( size_t b = 0; b < m_nbeams; ++b )
        {
          m_cp_vel[b].resize( m_ncells );
          m_cp_amp[b].resize( m_ncells );
          m_cp_cor[b].resize( m_ncells );
        }
      }
      //! Parse velocity
      for ( size_t b = 0; b < m_nbeams; ++b )
      {
        for ( size_t c = 0; c < m_ncells; ++c )
        {
          std::memcpy( &m_cp_vel[b][c], &itr_bfr[m_ind_vel_data + ( b * m_ncells + c ) * 2], 2 );
        }
      }
      //! Parse amplitude
      for ( size_t b = 0; b < m_nbeams; ++b )
      {
        size_t ind_amp = m_ind_vel_data + ( m_ncells * m_nbeams ) * 2 + m_ncells * b;
        std::copy( itr_bfr + ind_amp, itr_bfr + ind_amp + m_ncells, m_cp_amp[b].begin() );
      }
      //! Parse correlation
      for ( size_t b = 0; b < m_nbeams; ++b )
      {
        size_t ind_cor = m_ind_vel_data + ( m_ncells * m_nbeams ) * 3 + m_ncells * b;
        std::copy( itr_bfr + ind_cor, itr_bfr + ind_cor + m_ncells, m_cp_cor[b].begin() );
      }
      //! Insert into IMC message
      msg_cp.prof.clear();
      IMC::CurrentProfileCell cp_cell;
      for ( size_t c = 0; c < m_ncells; ++c )
      {
        cp_cell.cellposition = m_blank + m_csize * c;
        cp_cell.x = m_cp_vel[0][c] * m_vel_scale; // m/s
        cp_cell.y = m_cp_vel[1][c] * m_vel_scale;
        cp_cell.z1 = m_cp_vel[2][c] * m_vel_scale;
        cp_cell.z2 = m_cp_vel[3][c] * m_vel_scale;
        cp_cell.cor0 = m_cp_cor[0][c]; // 0-100 %
        cp_cell.cor1 = m_cp_cor[1][c];
        cp_cell.cor2 = m_cp_cor[2][c];
        cp_cell.cor3 = m_cp_cor[3][c];
        cp_cell.amp0 = m_cp_amp[0][c] * c_amp_scale; // dB
        cp_cell.amp1 = m_cp_amp[1][c] * c_amp_scale;
        cp_cell.amp2 = m_cp_amp[2][c] * c_amp_scale;
        cp_cell.amp3 = m_cp_amp[3][c] * c_amp_scale;

        msg_cp.prof.push_back( cp_cell ); // push_back makes copy

        m_task->spew( "||Vel(Depth: %f m)|| = %f m/s",
                      m_blank + m_csize * c,
                      sqrt(
                          pow( m_cp_vel[0][c] * m_vel_scale, 2 ) +
                          pow( m_cp_vel[1][c] * m_vel_scale, 2 ) +
                          pow( ( m_cp_vel[2][c] * m_vel_scale + m_cp_vel[3][c] * m_vel_scale ) / 2, 2 ) ) );
      }
      return true;
    }

    //! Process Wake Up Bits
    //! @param[in] bits status bitmask.
    void CurrentProfileParser::processBits( uint8_t bits )
    {
      switch ( bits )
      {
        case ( WS_BAD_POWER ):
          m_task->err( DTR( "power is not good" ) );
          break;
        case ( WS_POWER_APP ):
          break;
        case ( WS_BREAK ):
          m_task->trace( "break" );
          break;
        case ( WS_RTC_ALARM ):
          m_task->err( DTR( "RTC alarm" ) );
        default:
          break;
      }
    }

  } // namespace NortekDVL
} // namespace Sensors

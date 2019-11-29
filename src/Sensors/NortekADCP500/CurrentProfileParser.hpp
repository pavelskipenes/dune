
// Author: Andreas Våge

#ifndef DUNE_CURRENTPROFILEPARSER_HPP
#define DUNE_CURRENTPROFILEPARSER_HPP

// DUNE headers.
#include <DUNE/DUNE.hpp>
namespace Sensors
{
  namespace NortekADCP500
  {
    using DUNE_NAMESPACES;

    //! Nortek Binary Data Format (Current Profile Data) parser.
    struct CurrentProfileParser
    {

      CurrentProfileParser(
          Tasks::Task *task, uint16_t cp_ncells, float cp_csize, float cp_blank, uint8_t beam_count ) :
          m_task( task ),
          m_ncells( cp_ncells ),
          m_csize( cp_csize ),
          m_blank( cp_blank ),
          m_nbeams( beam_count ),
          m_ind_vel_data( IND_VEL_DATA ),
          m_vel_scale_pow10( -3 ),
          m_vel_scale( pow( 10, m_vel_scale_pow10 ) ),
          m_cp_status()
      {
      }

      bool parseCP(
          std::vector<uint8_t>::const_iterator itr_bfr,
          std::vector<uint8_t>::const_iterator itr_bfr_end,
          IMC::CurrentProfile &msg_cp )
      {
        if ( processMetaData( itr_bfr, itr_bfr_end ) )
        {
          return parseData( itr_bfr, itr_bfr_end, msg_cp );
        }
        return false;
      }

      //! Set variable data settings
      void set( uint16_t cp_ncells, float cp_csize, float cp_blank, uint8_t beam_count )
      {
        m_ncells = cp_ncells;
        m_csize = cp_csize;
        m_blank = cp_blank;
        m_nbeams = beam_count;
      }

    private:

      //! Parse and Verify Current Profile Meta Data
      bool processMetaData(
          std::vector<uint8_t>::const_iterator itr_bfr,
          std::vector<uint8_t>::const_iterator itr_bfr_end );

      //! Parse Current Profile Data
      bool parseData(
          std::vector<uint8_t>::const_iterator itr_bfr,
          std::vector<uint8_t>::const_iterator itr_bfr_end,
          IMC::CurrentProfile &msg_cp );

      //! Parent task.
      Tasks::Task *m_task;
      //! Current profiler's expected number of cells.
      uint16_t m_ncells;
      //! Current profiler's expected cell size.
      float m_csize;
      //! Current profiler's expected blanking distance.
      float m_blank;
      //! Current profiler's expected number of beams.
      uint8_t m_nbeams;

      uint8_t m_ind_vel_data;
      int8_t m_vel_scale_pow10;
      float m_vel_scale;
      uint32_t m_cp_status;
      std::vector<std::vector<int16_t>> m_cp_vel;
      std::vector<std::vector<uint8_t>> m_cp_amp;
      std::vector<std::vector<uint8_t>> m_cp_cor;

      //! Amplitude count to dB scale
      static constexpr float c_amp_scale = 0.5;

      static constexpr uint8_t c_df_version = 3;
      static constexpr uint8_t c_vel_incl_bit = 5;
      static constexpr uint8_t c_amp_incl_bit = 6;
      static constexpr uint8_t c_cor_incl_bit = 7;
      //! Current profile number of cells bitmask.
      static constexpr uint16_t c_error_mask = 0b1111'1111'0011'1111;
      static constexpr uint16_t c_ncells_mask = 0b0000'0011'1111'1111;
      //! Wake Up status bitmask.
      static constexpr uint32_t c_wake_mask = 0xf0000000;
      static constexpr uint8_t c_wake_bit = 28;
      static constexpr uint32_t c_blank_scale_mask = 0x00000002;

      enum Index : uint8_t
      {
        IND_VERSION = 0,
        IND_DATA_IND = 1,
        IND_CONF = 2,
        IND_BINNING = 30,
        IND_CELL_SIZE = 32,
        IND_BLANK = 34,
        IND_VEL_SCALE = 58,
        IND_ERROR = 64,
        IND_STATUS = 68,
        IND_VEL_DATA = 76
      };

      //! Wake Up State
      enum WakeUpState
      {
        WS_BAD_POWER = 0x00,
        WS_POWER_APP = 0x01,
        WS_BREAK = 0x10,
        WS_RTC_ALARM = 0x11
      };

      //! Process Wake Up Bits
      //! @param[in] bits status bitmask.
      void processBits( uint8_t bits );
    };

  } // namespace NortekDVL
} // namespace Sensors

#endif //DUNE_CURRENTPROFILEPARSER_HPP

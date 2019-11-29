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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: a566b378b2df7546a7b7f9546a2b3f83                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.825475699153);
    msg.setSource(17762U);
    msg.setSourceEntity(200U);
    msg.setDestination(11181U);
    msg.setDestinationEntity(72U);
    msg.state = 219U;
    msg.flags = 188U;
    msg.description.assign("JRATZAPYVYHXMNTYECOAIWIIRIYAMWZHUTKHDMBKUFFVFAMNYTVWRVHBLWOGBOUXUJFGOXWGKJTSNVPMCCIBROYETCQFJZDIGNCLAELDPTRXQFREIFGZZDSPKQZAVBJGVGWQOMSXUHAJNJCDHCQSFVJXUSWSLPLJPQQDKUIOPULZVEKKIBQPEPFSNKBPZHJVXXCRHBXDEBT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.282234864793);
    msg.setSource(37048U);
    msg.setSourceEntity(223U);
    msg.setDestination(45908U);
    msg.setDestinationEntity(81U);
    msg.state = 203U;
    msg.flags = 19U;
    msg.description.assign("LQSWRAJNQHNHPRIASZGUXPJWENFTOGKOHAHLJDEQWNTIAKBMIRZQUPIUSEGFRLBWDKCVNKVCDCVBNCILLXRNQZPMWOKPALHFJDXIMUCINAQZGHHBEWPMNMOYDRUVGZMUAYOJBOFDVMHSDBXMZUYXU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.136017699075);
    msg.setSource(40021U);
    msg.setSourceEntity(12U);
    msg.setDestination(27472U);
    msg.setDestinationEntity(74U);
    msg.state = 28U;
    msg.flags = 174U;
    msg.description.assign("OSFDDONIQPHBWJVJHOSYGBATYIEZFQLFOFWLQRCMHPPUPWSTXWZNVRMHRDMWKKASDHODVLNAOJUDUEBMQJBKEZECPAYSLVCWTMXRBSERIYFUZHEETARCNYBOFZCBPYNETLVWFQILXVIHZEXGUGHOWFGQKTYXGVYUTLMTPXBBVUYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.299754090435);
    msg.setSource(20452U);
    msg.setSourceEntity(212U);
    msg.setDestination(29532U);
    msg.setDestinationEntity(228U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.0117647010892);
    msg.setSource(23012U);
    msg.setSourceEntity(2U);
    msg.setDestination(52266U);
    msg.setDestinationEntity(166U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.767394044707);
    msg.setSource(47353U);
    msg.setSourceEntity(203U);
    msg.setDestination(366U);
    msg.setDestinationEntity(172U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.443804674242);
    msg.setSource(1015U);
    msg.setSourceEntity(8U);
    msg.setDestination(42203U);
    msg.setDestinationEntity(243U);
    msg.id = 142U;
    msg.label.assign("FYVLKVIEFUCSMBEGQKSEHTTPQBBLKZXOTBXRWYSZOMMEXZCVQYOMGQGYCISHQFAJEASRMLETYSPKVPNIWUDLUMVRJFZNJRADENXDFQGDPNAJABNNQRPXRKAZDLXTQCXQRONSSRFWBLHPCJZUZBBVOHIRMWHOKTLYPWHIDSVIAFGVAVBJKTPWUURPCWUDCKFHBDTIKLPWMGLIHKFMZUYXICEWEJGDYZVEYAGONDWOUYQFNLZMHTJCSHJUGJ");
    msg.component.assign("OHTWLNVKNQCNOLGMXQIARJYIFXMWUVRFCUVROCPBWVAJPMKQYJLGEWJUMQQO");
    msg.act_time = 14653U;
    msg.deact_time = 59520U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.482097302553);
    msg.setSource(28741U);
    msg.setSourceEntity(182U);
    msg.setDestination(59409U);
    msg.setDestinationEntity(66U);
    msg.id = 140U;
    msg.label.assign("FXBONZJRDEEVNKYUBXWXEZRPNWYOBQCMQWGBEHCHUJXVPJUDXTKOVGETERVBEWIBIMYJLNXYKKILOANBZTLISRIGCHGIMDUMAFZLFQDAYPPINNQJYGSQHAZXHOPSTYKJZRPOGAUDUUWHXFYXTSCKHHLUVCABW");
    msg.component.assign("CEVQQJLQMSIUNNHIRSKRXYTKZBJHHHWCKTTTYMEZQVCPNXCMDOJADK");
    msg.act_time = 6831U;
    msg.deact_time = 7572U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.629826604935);
    msg.setSource(3113U);
    msg.setSourceEntity(78U);
    msg.setDestination(58911U);
    msg.setDestinationEntity(70U);
    msg.id = 110U;
    msg.label.assign("FQEKWHNPOCYZAXWCZHQRGQUHGHUATPLMPSBHOCEZEUFOBUCVZMBDRMVEUVAELCRWIKYUTYFVSXFXZQELSXWBTCZLCWNDXOKLGHRNXFTDDJNYMMMGQRJIMAXGMVQDWRNJDGSSHKAPIULBTSTYBKAWAAIPDXPUDZHDNETHJDURFJXEPSOKGCOLITQCQLAFZVIEREJVFJYKYABFRJYJTSRLB");
    msg.component.assign("ZFITEKWSYIBDPZGXOXXARKDK");
    msg.act_time = 39016U;
    msg.deact_time = 45539U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.928658921341);
    msg.setSource(31580U);
    msg.setSourceEntity(85U);
    msg.setDestination(63892U);
    msg.setDestinationEntity(194U);
    msg.id = 73U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.524482103612);
    msg.setSource(62535U);
    msg.setSourceEntity(219U);
    msg.setDestination(1197U);
    msg.setDestinationEntity(123U);
    msg.id = 192U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.443000374204);
    msg.setSource(10478U);
    msg.setSourceEntity(1U);
    msg.setDestination(38033U);
    msg.setDestinationEntity(70U);
    msg.id = 212U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.827529981562);
    msg.setSource(63047U);
    msg.setSourceEntity(214U);
    msg.setDestination(38296U);
    msg.setDestinationEntity(47U);
    msg.op = 242U;
    msg.list.assign("PTZNZCYQBKIAMDBDKIQZHUXIHGOXVYDKPZODFJGSBQJRXSMCUTKWODECIHZILQXLTHAAYVXEP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.0550965155899);
    msg.setSource(39249U);
    msg.setSourceEntity(84U);
    msg.setDestination(10311U);
    msg.setDestinationEntity(43U);
    msg.op = 50U;
    msg.list.assign("UBDGONDGIXAHAWOHVOKWBJSNLNGJUTUPHXHKNJLVRFEGWVY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.20957600511);
    msg.setSource(29209U);
    msg.setSourceEntity(207U);
    msg.setDestination(26893U);
    msg.setDestinationEntity(193U);
    msg.op = 120U;
    msg.list.assign("JCZXFURTYVKOUESBRYHASGRALWAWRTHNBGWIZNGQOAEZEZMKSQUNGKDFDHZWCIUFIHXPUUDLZYWHBKCPTKQOLYXFPSNMIAAYCVULOFZWJGVOPQJLJNHZNTDWXAJBRIAMNXNUSFPHDQBPVTEKFJLMMKADNCCBLJQBGMTRNFBPSVKXMISOESVTAYQZTXSTZPVRGJEJQLKJUERMCWXMVMTCCSXEBBEQOUHGOLPLGDVGCIFDIQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.885483840928);
    msg.setSource(24790U);
    msg.setSourceEntity(6U);
    msg.setDestination(22286U);
    msg.setDestinationEntity(122U);
    msg.value = 168U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.706292871094);
    msg.setSource(37729U);
    msg.setSourceEntity(155U);
    msg.setDestination(49752U);
    msg.setDestinationEntity(247U);
    msg.value = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.0894567353754);
    msg.setSource(41114U);
    msg.setSourceEntity(48U);
    msg.setDestination(48697U);
    msg.setDestinationEntity(126U);
    msg.value = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.249888339759);
    msg.setSource(52920U);
    msg.setSourceEntity(126U);
    msg.setDestination(58867U);
    msg.setDestinationEntity(4U);
    msg.consumer.assign("HVTAMWRZACVQWMXAWPEPDLUKCHJVLKRSYLGGFNMRRFIWYGKEVHLATJWAQVBYMRPMZIPXTCNVZDJXJHKEHEVZCEWYRF");
    msg.message_id = 40656U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.477026651819);
    msg.setSource(17153U);
    msg.setSourceEntity(110U);
    msg.setDestination(34040U);
    msg.setDestinationEntity(71U);
    msg.consumer.assign("YGHBAPBXNJRTFQHURTFOQKHLDJGQLXTFMWTBPYRCSRJKALIFFAYGSAMUKDVT");
    msg.message_id = 39980U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.683284034624);
    msg.setSource(21605U);
    msg.setSourceEntity(98U);
    msg.setDestination(30833U);
    msg.setDestinationEntity(172U);
    msg.consumer.assign("JSZLEURVMEWKUFQXYCBJINUYJMRGJOWTFBCSBGKOLHCMDUXNHTJOYANEWYMACHFRNLLANOYXTBQPKEIUIDPXQWLCVIATFBZOVOZNADWPGGIMGAHKTPUWKTQSTPFSSRPEGWOZTREPDPVRGXAZFKMDRKKEQTGXQXQYOPNCYDUOVLDBIBVXWKKIOWMHXQLCIFVWJJYYHZLSEURINJQSAIUMLFS");
    msg.message_id = 22825U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.167291013723);
    msg.setSource(3934U);
    msg.setSourceEntity(248U);
    msg.setDestination(28543U);
    msg.setDestinationEntity(151U);
    msg.type = 206U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.922175481424);
    msg.setSource(56390U);
    msg.setSourceEntity(124U);
    msg.setDestination(49845U);
    msg.setDestinationEntity(16U);
    msg.type = 225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.224438948652);
    msg.setSource(50478U);
    msg.setSourceEntity(203U);
    msg.setDestination(52065U);
    msg.setDestinationEntity(64U);
    msg.type = 167U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.647283703872);
    msg.setSource(34119U);
    msg.setSourceEntity(80U);
    msg.setDestination(20933U);
    msg.setDestinationEntity(190U);
    msg.op = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.0988380974706);
    msg.setSource(38691U);
    msg.setSourceEntity(76U);
    msg.setDestination(22997U);
    msg.setDestinationEntity(59U);
    msg.op = 80U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.0805978453717);
    msg.setSource(43575U);
    msg.setSourceEntity(52U);
    msg.setDestination(65303U);
    msg.setDestinationEntity(41U);
    msg.op = 99U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.678307172653);
    msg.setSource(47101U);
    msg.setSourceEntity(171U);
    msg.setDestination(41099U);
    msg.setDestinationEntity(123U);
    msg.total_steps = 114U;
    msg.step_number = 190U;
    msg.step.assign("VWLGSVKWJARMAZIWURPCYPXFAIEIZQRJQMRCNNGUQXLMYAWPKQSCOPYSUOVAMOBOOHQLDNYUTEPXJNKXUVBLZFHKOQJZMOGYMQBFPMMDYMNSUKLTBTZQAIUCNNI");
    msg.flags = 219U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.819145792179);
    msg.setSource(43246U);
    msg.setSourceEntity(218U);
    msg.setDestination(27024U);
    msg.setDestinationEntity(120U);
    msg.total_steps = 185U;
    msg.step_number = 73U;
    msg.step.assign("MQXMWNMZOFDOYVADYUYUZDOZYAATHSIKGBLANVFMUZQVNQNJWKGINIIBDPOTFVJRVFJQLPLCNILGQPCLADJYOQNHPRXVUVBPTBEYKOARQSUQPSHCIQFJHMPDCECEERTWKUVXREOTLEFDHGCZWFJCHBJORDUUXGBPNTKZBHSERIOLGRZTDMZSXEHVKTLBLWJZASBKGILVWSEXMCSRRTYTSGJNXFMYENXADIMMWWH");
    msg.flags = 253U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.247137147683);
    msg.setSource(54568U);
    msg.setSourceEntity(230U);
    msg.setDestination(16540U);
    msg.setDestinationEntity(19U);
    msg.total_steps = 52U;
    msg.step_number = 245U;
    msg.step.assign("EWVFIRMQOJSRUXXCSFPFPRFNYNPVZTUSWMOAITTJNFJJHHUQGKNIRXCCQWQWEKFVNWTRCVZUUYIYDRLJOFATRCKVNDAWOKEIY");
    msg.flags = 124U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.623915239717);
    msg.setSource(38469U);
    msg.setSourceEntity(241U);
    msg.setDestination(15369U);
    msg.setDestinationEntity(243U);
    msg.state = 211U;
    msg.error.assign("RGLCIAOUROWXSLTUDEDHUCWYBNKLOAPEKEQSYBODCVPWNVXRGOXIPSCWAEFMXKUWGHAPOMMSIFLZESIVHJSWFRCTUJZBZKUBFIBRONICXFPXMARZSKEUVISDRVDQGNPWQCTOHZXWVSMYEEQCTOMPCZEAYQNJNKVIJPMBZQDLDGRVRPBKPTNVHFTWWKHARIHJGYJYGTXFDTZAZDQHEQZLSGLGMJLTNFBM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.92059297516);
    msg.setSource(56877U);
    msg.setSourceEntity(139U);
    msg.setDestination(10054U);
    msg.setDestinationEntity(164U);
    msg.state = 56U;
    msg.error.assign("UAJXZXAGYXKHJRZMQNYEOOKTZIDSUROLGPQSKEEVLGETRJWYAAIEOBZDCJUVSKHSMFTNEMTWNWWUCVJLMTPNDTIZZYESYZEVRCHCXHQRJACB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.204797886884);
    msg.setSource(41999U);
    msg.setSourceEntity(211U);
    msg.setDestination(28032U);
    msg.setDestinationEntity(26U);
    msg.state = 26U;
    msg.error.assign("MLSBFTIUBGOYEHDPSYJVFMCGCBJRXYSYRJTLHGQYZCQPTUEELLXWIJJNVRQPKAUBSRBEDRJDZAOOFXLCQOHYXQORORMGWLUIFHMXCWMDAGNNAGOXYWFUWNRXYKPNEKIVXDMEZWOVTZVHPIZUCKQVHGDIFAIHAFBFUYDKQBGEGPZWNSDBKFHVCAYVKPIKULVERSLOAIDUMJBLPTWTKCKZHCENUTPFQZW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.531738938687);
    msg.setSource(15160U);
    msg.setSourceEntity(98U);
    msg.setDestination(29253U);
    msg.setDestinationEntity(83U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.427924376872);
    msg.setSource(58123U);
    msg.setSourceEntity(45U);
    msg.setDestination(31433U);
    msg.setDestinationEntity(176U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.690402140999);
    msg.setSource(42379U);
    msg.setSourceEntity(119U);
    msg.setDestination(1927U);
    msg.setDestinationEntity(104U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.419984562551);
    msg.setSource(15380U);
    msg.setSourceEntity(120U);
    msg.setDestination(40831U);
    msg.setDestinationEntity(104U);
    msg.op = 15U;
    msg.speed_min = 0.984174735251;
    msg.speed_max = 0.00274925324131;
    msg.long_accel = 0.667883475423;
    msg.alt_max_msl = 0.250886050614;
    msg.dive_fraction_max = 0.225251358473;
    msg.climb_fraction_max = 0.136034905612;
    msg.bank_max = 0.419540027037;
    msg.p_max = 0.19276096103;
    msg.pitch_min = 0.469589522428;
    msg.pitch_max = 0.37648793186;
    msg.q_max = 0.0211259785266;
    msg.g_min = 0.179429750025;
    msg.g_max = 0.833348518155;
    msg.g_lat_max = 0.902009225972;
    msg.rpm_min = 0.824687926043;
    msg.rpm_max = 0.947062444648;
    msg.rpm_rate_max = 0.748397833079;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.877195641953);
    msg.setSource(40224U);
    msg.setSourceEntity(168U);
    msg.setDestination(18971U);
    msg.setDestinationEntity(115U);
    msg.op = 234U;
    msg.speed_min = 0.742371849851;
    msg.speed_max = 0.308904365064;
    msg.long_accel = 0.0180106641654;
    msg.alt_max_msl = 0.371986937463;
    msg.dive_fraction_max = 0.998780854769;
    msg.climb_fraction_max = 0.986072342945;
    msg.bank_max = 0.105664693872;
    msg.p_max = 0.842420481042;
    msg.pitch_min = 0.0429881173888;
    msg.pitch_max = 0.41586337341;
    msg.q_max = 0.999078052576;
    msg.g_min = 0.500735131294;
    msg.g_max = 0.895755514285;
    msg.g_lat_max = 0.024047531771;
    msg.rpm_min = 0.249693919476;
    msg.rpm_max = 0.391769895385;
    msg.rpm_rate_max = 0.579540597175;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.374471724778);
    msg.setSource(23750U);
    msg.setSourceEntity(63U);
    msg.setDestination(18372U);
    msg.setDestinationEntity(179U);
    msg.op = 40U;
    msg.speed_min = 0.735595055781;
    msg.speed_max = 0.216535796795;
    msg.long_accel = 0.316350477149;
    msg.alt_max_msl = 0.473965019221;
    msg.dive_fraction_max = 0.551650924585;
    msg.climb_fraction_max = 0.99054525598;
    msg.bank_max = 0.0407493023822;
    msg.p_max = 0.389290121153;
    msg.pitch_min = 0.621359647278;
    msg.pitch_max = 0.262992607322;
    msg.q_max = 0.623971738134;
    msg.g_min = 0.623131392343;
    msg.g_max = 0.168160644918;
    msg.g_lat_max = 0.0529150509863;
    msg.rpm_min = 0.0540779823833;
    msg.rpm_max = 0.140511519332;
    msg.rpm_rate_max = 0.175153706055;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.868024490503);
    msg.setSource(45376U);
    msg.setSourceEntity(201U);
    msg.setDestination(34122U);
    msg.setDestinationEntity(31U);
    IMC::CompassHeading tmp_msg_0;
    tmp_msg_0.time = 0.804145719376;
    tmp_msg_0.ang = 0.342838751506;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.157129933981);
    msg.setSource(47694U);
    msg.setSourceEntity(3U);
    msg.setDestination(50181U);
    msg.setDestinationEntity(97U);
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 193U;
    tmp_msg_0.x = 16153U;
    tmp_msg_0.y = 56502U;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.894066287901);
    msg.setSource(1799U);
    msg.setSourceEntity(8U);
    msg.setDestination(46548U);
    msg.setDestinationEntity(167U);
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 47613U;
    tmp_msg_0.control_ent = 216U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 154U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.159211534592;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 161U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.618508457358;
    tmp_tmp_tmp_msg_0_0_1.z_units = 188U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.9473077092;
    tmp_tmp_msg_0_0.lon = 0.573201844485;
    tmp_tmp_msg_0_0.radius = 0.949484258501;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 158U;
    tmp_msg_0.proximity = 197U;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.553745223668);
    msg.setSource(24888U);
    msg.setSourceEntity(165U);
    msg.setDestination(19832U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.447215811986;
    msg.lon = 0.933258973135;
    msg.height = 0.989802731435;
    msg.x = 0.78909289366;
    msg.y = 0.0537644924501;
    msg.z = 0.750101077338;
    msg.phi = 0.112316255129;
    msg.theta = 0.789472985181;
    msg.psi = 0.111293703717;
    msg.u = 0.43771296797;
    msg.v = 0.517425475335;
    msg.w = 0.605038634783;
    msg.p = 0.605097543331;
    msg.q = 0.205633702952;
    msg.r = 0.287600966805;
    msg.svx = 0.723610796893;
    msg.svy = 0.0581297643295;
    msg.svz = 0.249363709244;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.507082176041);
    msg.setSource(29909U);
    msg.setSourceEntity(230U);
    msg.setDestination(55190U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.588655683978;
    msg.lon = 0.785668203366;
    msg.height = 0.0397846641595;
    msg.x = 0.410240429452;
    msg.y = 0.988277570171;
    msg.z = 0.311884813985;
    msg.phi = 0.900337366249;
    msg.theta = 0.929594851119;
    msg.psi = 0.361963411455;
    msg.u = 0.888113477632;
    msg.v = 0.00794704400401;
    msg.w = 0.70803509644;
    msg.p = 0.499031216407;
    msg.q = 0.103410203057;
    msg.r = 0.694623581083;
    msg.svx = 0.523345748378;
    msg.svy = 0.149228455567;
    msg.svz = 0.840777752149;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.108735990361);
    msg.setSource(55417U);
    msg.setSourceEntity(156U);
    msg.setDestination(32602U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.570955638814;
    msg.lon = 0.72819740369;
    msg.height = 0.228961879153;
    msg.x = 0.353884712456;
    msg.y = 0.188604953428;
    msg.z = 0.303738136317;
    msg.phi = 0.825380079375;
    msg.theta = 0.157125400307;
    msg.psi = 0.486438380112;
    msg.u = 0.367520608048;
    msg.v = 0.391925458721;
    msg.w = 0.31807530531;
    msg.p = 0.560232304198;
    msg.q = 0.884769511477;
    msg.r = 0.607783613844;
    msg.svx = 0.425934164624;
    msg.svy = 0.624195561051;
    msg.svz = 0.323228211005;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.394670862599);
    msg.setSource(26642U);
    msg.setSourceEntity(239U);
    msg.setDestination(11646U);
    msg.setDestinationEntity(125U);
    msg.op = 30U;
    msg.entities.assign("ACJPNNZRGKSPHLILKVCEQHUKGFWLVKLJWDSWQLQEBOBHSLOYTAMKZEMCUFPOAMHSQPCOTMKZRWLNEZCIOSHQTCYXYETCHGJFPUNAANMSXUWLVRGE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.780195211529);
    msg.setSource(50734U);
    msg.setSourceEntity(187U);
    msg.setDestination(49937U);
    msg.setDestinationEntity(22U);
    msg.op = 138U;
    msg.entities.assign("WCGULPULYTVFXWOGUJQGQZCRXXLDPGAAYSOYNWRJPFTNCFQOLRKEQKJQNORJFWCJFNZYNWDLCPLSMZUUATPRTYHKHIEAWTSDINOMFRDGCBHIGJWVYIP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.60949766821);
    msg.setSource(49564U);
    msg.setSourceEntity(13U);
    msg.setDestination(23083U);
    msg.setDestinationEntity(153U);
    msg.op = 220U;
    msg.entities.assign("AXZXPIJTNFEMRMRQVKGZPQRAMTXLFLQHUWUPUWUPPXKKINQRFOWVRDDFGHGJJAQLXICYVIWZCYPVZCQPDENCGZNHRBPTRJGOLMWUYQDXNYEOEJFWFWQEEDMBGFZZTIFQBYINUTHAHALEUOXMMVYLTBHQZTXSTKFSDMJXLBU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.950522576301);
    msg.setSource(3383U);
    msg.setSourceEntity(249U);
    msg.setDestination(44915U);
    msg.setDestinationEntity(159U);
    msg.type = 215U;
    msg.speed = 16300U;
    const char tmp_msg_0[] = {109, -67, -60, -16, 2, -53, -62, 12, -117, -54, -82, 64, -124, 14, -1, 31, 93, 47, 122, -116, -86, 23, 54, -71, -19, -48, -29, -123, -27, 68, 55, -110, 16, -1, -65, 66, -55, -116, -53, -56, 71, 102, 18, 121, 51, -87, -126, -126, -127, -70, -30, -40, 123, 7, -116, 118, 71, 21, 90, -87, 29, 118, -54, -59, -2, -26, -34, -49, -36, -28, 46, -128, -50, 98, 4, -112, -118, -96, -111, 23, 36, 18, 101, 15, 95, 105, 84, -106, 49, -29, 113, -98, 2, -77, 53, 37, -126, -79, 95, -102, -108, -82, 22, -35, -53, -31, -67, -118, -30, -26, 94, -13, 27, 123, -41, 102, 47, -100, 2, -29, -113, -4, -57, -122, 103, 11, -79, -14, -53, 73, 91};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.793332718076);
    msg.setSource(26120U);
    msg.setSourceEntity(101U);
    msg.setDestination(42905U);
    msg.setDestinationEntity(105U);
    msg.type = 202U;
    msg.speed = 4797U;
    const char tmp_msg_0[] = {-36, 35, -32, 54, -98, 30, 45, 55, -121, 44, 8, 70, 36, -9, 93, 71, 28, -60, 79, 42, 83, -66, -86, 78, 67, 26, 58, 125, 124, 122, -102, -90, -39, 12, 106, 89, 103, -21, -83, 56, -87, 111, 69, 11, -86, 45, 19, -112, -3, -108, 89, -36, -120, 42, -96, -8, -103, 23, 45, -121, 12, -119, 115, -25, 71, -12, 92, 102, -103, -40, 0, 55, 98, 34, 114, -50, 43, -47, 92, 45, 15, -71, -120, 50, -79, -19, -52, 106, -84, -112, 86, -118, -108, 110, -69, -6, 24, 21, -92, 65, 64, -8, -97, -109, 38, 101, -82, 1, 106, 74, 101, -7, -77, -51, 117, 66, 83, 99, -59, -77, 125, -92, -40, -126, -6, -77, -40, -23, -80, -122, 4, -80, -65, 24, 89, -28, 62, -99, -23, -57, -11, -86, -42, 47};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.303900557711);
    msg.setSource(12193U);
    msg.setSourceEntity(210U);
    msg.setDestination(56276U);
    msg.setDestinationEntity(44U);
    msg.type = 22U;
    msg.speed = 46822U;
    const char tmp_msg_0[] = {32, -19, 72, 109, -27, 35, 117, 38, -19, 16, -94, -11, 74, 57, -5, -1, 83, -111, -86, -119, -98, -49, 121, 104, 104, -112, -3, 14, -79, 67, -117, -31, 76, -95, -47, -62, 108, -56, -46, 119, 11, -50, 124, 70, -32, -62, 109, 32, 8, 116, 96, -52, 117, 47, -96, -4, -65, -7, 7, 11, -73, -15, 104, -73, 57, -46, 9, -38, -115, 110, -2, -34, -111, -109, 7, 90, 8, -92, 4, 28, 95, -33, -114, -61, 19, -100, -57, 36, -103, -107, 67, -20, 34, -56, 64, -107, -124, -59, -55, -22, 54, 101, 70, -97, -56, -24, -86};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.535789606936);
    msg.setSource(57775U);
    msg.setSourceEntity(66U);
    msg.setDestination(33362U);
    msg.setDestinationEntity(240U);
    msg.op = 220U;
    msg.tas2acc_pgain = 0.366363797656;
    msg.bank2p_pgain = 0.324904179888;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.99599053787);
    msg.setSource(7066U);
    msg.setSourceEntity(107U);
    msg.setDestination(20339U);
    msg.setDestinationEntity(118U);
    msg.op = 135U;
    msg.tas2acc_pgain = 0.417051831518;
    msg.bank2p_pgain = 0.00435079684532;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.862236717853);
    msg.setSource(11292U);
    msg.setSourceEntity(137U);
    msg.setDestination(46145U);
    msg.setDestinationEntity(253U);
    msg.op = 225U;
    msg.tas2acc_pgain = 0.558089475017;
    msg.bank2p_pgain = 0.728694877233;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.613003349433);
    msg.setSource(54512U);
    msg.setSourceEntity(70U);
    msg.setDestination(17310U);
    msg.setDestinationEntity(131U);
    msg.available = 702801198U;
    msg.value = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.636742445892);
    msg.setSource(26606U);
    msg.setSourceEntity(136U);
    msg.setDestination(13130U);
    msg.setDestinationEntity(107U);
    msg.available = 260157130U;
    msg.value = 53U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.785158255947);
    msg.setSource(45856U);
    msg.setSourceEntity(71U);
    msg.setDestination(38401U);
    msg.setDestinationEntity(134U);
    msg.available = 649750667U;
    msg.value = 81U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.942693770768);
    msg.setSource(34244U);
    msg.setSourceEntity(68U);
    msg.setDestination(53330U);
    msg.setDestinationEntity(234U);
    msg.op = 77U;
    msg.snapshot.assign("VRFPRNCFOKDBVPRHOAAMHJYTVVCTEQPYEPQZHVXKTKAOSZASDKOEDZORUJXWTJWNNMHZNBSYILMFBMQIZGPPBDVQILOOKWKYCYCRGIFZUEFSA");
    IMC::RestartSystem tmp_msg_0;
    tmp_msg_0.type = 14U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.549271453645);
    msg.setSource(23663U);
    msg.setSourceEntity(212U);
    msg.setDestination(44345U);
    msg.setDestinationEntity(17U);
    msg.op = 144U;
    msg.snapshot.assign("ONYTQAGUMRECGJLBDQNUVZRIEKCYLBXARQLRWYRSPFOIVMIMMHUIWTEZJZWSFJBGXFVNRIDTDOKVJJTPOHMOCVPMMLZSFJPFHWXQLVSFXENGBOOTUFCLVKQVGWERXWMDSTFBJZICDZXYYAURDNYENNZKLGGREJYOEHUPPUOEQIKHNUZYFNWLKIZXCISHPSACVMBIQTECSASUDMHQYLYFJQQWDX");
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 120U;
    tmp_msg_0.request_id = 10435U;
    tmp_msg_0.command = 155U;
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.781439509574;
    tmp_tmp_msg_0_0.lon = 0.640338893542;
    tmp_tmp_msg_0_0.z = 0.484435719386;
    tmp_tmp_msg_0_0.z_units = 192U;
    tmp_tmp_msg_0_0.speed = 0.409234342706;
    tmp_tmp_msg_0_0.speed_units = 162U;
    tmp_tmp_msg_0_0.custom.assign("PTPZUKOOOOFMGNBEJFQJGOVFSCUTYNYMZTJAAKNKNHCDGUNHCYYDVPXZOCTAFWDBBCIPTRVHVGGVOMERSKAWZTULXXJFMYWLUEUBHGJQWXXLKNGILSGFBKVPZDTPRQNTYKEZBEXDSFGTFMEURCHBJKZWJRUNAFEWQHYKSSGQS");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 56718U;
    tmp_msg_0.info.assign("FZRNLRFQDDRZSANDYUPURPINSUVYNTKISKLLP");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.707871401213);
    msg.setSource(61958U);
    msg.setSourceEntity(177U);
    msg.setDestination(37444U);
    msg.setDestinationEntity(30U);
    msg.op = 40U;
    msg.snapshot.assign("QIPUQJXGPVZGDGNOIEYQEFJZFLMCCTKKRAEUFHVNSJKDYNEXSVIUXCOBLIXNEQKESHUNBJMTAGLUBDRRAVYFCFFJMVMXUPWZLTJNECGMARONQBJQWBPGMMGDGHRYKHSLAXHINOZIZOBRDFIIUOOKVWVPEWMWSYFHCXBGAUVRLTPYGDHLBSORYKQAAQYKXFSWTXOCMRJWZTLXTTHVOBLBPCTYZZPCAYNTJDDCLWFSEQPQ");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.836823871688;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 58259U;
    tmp_msg_0.custom.assign("VGZXZOYVRWISSMHRGIWRSKPEVOUYKPCYOZQHLULYRVZWMQYIZXKIFHBZESMMFYFJVQADVGDPOEBJTIGKGPXWAJHENQGYMJZBOVAC");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.996112948893);
    msg.setSource(65498U);
    msg.setSourceEntity(108U);
    msg.setDestination(31988U);
    msg.setDestinationEntity(34U);
    msg.op = 27U;
    msg.name.assign("AIEQZSCNWRCPSIPRAKOTTESVNOT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.574089449968);
    msg.setSource(57636U);
    msg.setSourceEntity(233U);
    msg.setDestination(33575U);
    msg.setDestinationEntity(70U);
    msg.op = 164U;
    msg.name.assign("QSHYRVSXFKNPKIXBKDQYYZESCXPTZMHTFCZVPMJLRWEIMYFJFXPIKSBXXYUWVRRTLNQAIYYAEOFTQWVIRDTCDFMUXAVMCRPGPJAZWJBQZDHKC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.525424872532);
    msg.setSource(9037U);
    msg.setSourceEntity(7U);
    msg.setDestination(52605U);
    msg.setDestinationEntity(30U);
    msg.op = 68U;
    msg.name.assign("QHKIWGFBDKEPRFHKFJFZYEXKUDORPIHBVFJEENBZRPVXAJOGQRFESEIUZCAVDLZDAHSHUQYTRCPGZRAONGQCUMCJTPESAYYJAYT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.00176964177856);
    msg.setSource(60485U);
    msg.setSourceEntity(185U);
    msg.setDestination(44939U);
    msg.setDestinationEntity(60U);
    msg.type = 171U;
    msg.htime = 0.560404464218;
    msg.context.assign("JXMCENFLYNOLNBZHJCYRVWTJLUUDWRYMJFIMPCJZUVBZILFTPSKFGGDNXTXSAGBZCCKDHKEOAGDBBTCHUNICXBWHAQAAMYGJAMAMIOHVLLMEMLXQXTFOFKGMYREWBTGQWDIFPNVYQLJRERSVWOQUYPQKVVWPLCWXNPYKVXSNIKLHNUBEACTUPNPGXDSTWDHZZIOYISPZGQWCEVVOS");
    msg.text.assign("YVRTZAQAJNUZBGHGCWFLOFPTSNUIYYJGJSFVQQBAVKCHTECPSXXCRYDHEOGZAXVLXNUJVRMYKVQXHKSBLOULLEOBSEPLQUZDQQMKNDN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.482561238084);
    msg.setSource(37175U);
    msg.setSourceEntity(111U);
    msg.setDestination(58060U);
    msg.setDestinationEntity(248U);
    msg.type = 209U;
    msg.htime = 0.898775392731;
    msg.context.assign("HSIEUIWLRWZPPVHNHVAVVF");
    msg.text.assign("BVBJDIPCIPMTTQCILPUTJBPVLHEOKVYTYZBIHFYIXONAPUDZKFXODAKNNDSRWIICGBCZMRGRTPLRYHNAXFYVQUWLOOAIMQZFKJGGCXNUQGXSUZVFZRQORDPPHVGPYWSWXCUYFOMRLJVKGALDOHMFLEEUCKRSDEJTWCAQDRZGTEYVYDXNITSFHEVGNWOFBMWJLCASEZKJJKMQUWBTHFAHWSXAWKMBBQBMQSUXSMNKZOECILALZQSTXUNRJEVHH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.193851866989);
    msg.setSource(55670U);
    msg.setSourceEntity(32U);
    msg.setDestination(30214U);
    msg.setDestinationEntity(41U);
    msg.type = 7U;
    msg.htime = 0.680770370636;
    msg.context.assign("ALJXVXCBQGBBCBSHROTAIMJVVUGDQBSJICRLBEPSLOSVMTYUFZNOLEYSGGJLDROGUYQGURNQPXVLPZYMTLELPVUQRIPIKEIOAWEWNVEHZTXZSCRFISIKWHNBLJTUMJXNFZKZXRSBBWUVXFDTCTRWYPQASVAXW");
    msg.text.assign("VDQGJGALANTEVSDFOHQNESHEAMYDXUVIRRLQCJINXOOUCIBWKTDAKYJAMUBBXLURXRCIHIEBWQCHUKMTEAJOLXHILRRLWKJUVHYFCKYMZSSNWNTZYGPLFWIZJYLWJQSTKABXFABXVPGWJDGSGBFEFPSWCEUOWHBOPAZMZKXYOLPNEUVRZCQHSPYPILTZRNKNTFIP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.519747889298);
    msg.setSource(50589U);
    msg.setSourceEntity(154U);
    msg.setDestination(41121U);
    msg.setDestinationEntity(246U);
    msg.command = 196U;
    msg.htime = 0.498253488516;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 157U;
    tmp_msg_0.htime = 0.300270526844;
    tmp_msg_0.context.assign("LDGFAOEJCZIHBQHYNMIJAILUZUBVQISDDJSEHOOKGKAVGOZAJMUKMEQYTGHQVRXNIINIZECTRKBSWZPVVVUIGCVZCNGBNAMOEQQFYRMHZUWYJTVPBCNJCAJBZYPAOCFSPYPBUJGWCFANMOIJWGDLWTQKTSATDNTDXURDXLDFEULRLKFBBEUEXJWYMVRQLNOYRWPOFXKSHDZHLPSXMOCLYEUTHVMWWSHKCGWYFNXXRSSITRXZLXQPPEMFQKBR");
    tmp_msg_0.text.assign("TDJKAQFCUYUTUJLYTIXEBQOVYVAKXLBETYXYYNVSFQIEFZRHGCKYXGLTOEZWNJJKUPVWRVFOICADORURZEXSXPRKMFQEKIBMOJJGSHDAXHWNENLGDFLBWXBMIAZDMZMTJNHJSRCXGIUTGPWVNTZYHOPQNEEWPRSJCWQUIGAUWGHSRVSYQCBCDFEYOSZCPVOASPGKPUKASWBLQHZRMLDOHNCHBTAQDKFBTNPIFBMKIGXMMRDULOCD");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.376056230131);
    msg.setSource(31164U);
    msg.setSourceEntity(39U);
    msg.setDestination(42910U);
    msg.setDestinationEntity(184U);
    msg.command = 200U;
    msg.htime = 0.840378068245;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 15U;
    tmp_msg_0.htime = 0.594105296861;
    tmp_msg_0.context.assign("ZDCXHSRQSQTIJRVRLUQCBROBNMGSOGEYOOYEKBDHIWMADMWVDRGKKBPFPTPVHLCRWGACFHFOZXQFAXHXTQOULFTRIYPYAYLSHJOVZJLRICAJVTWXRUAEQUQMVOIPIWDXNKEXOENFCYELHAWDLFTGUGUHZEXCXSENCJTSWJVSZDRTUBNMK");
    tmp_msg_0.text.assign("BCWEZPVPYRDXAHDINLTQWVUEKKIKTYVUFTZUNFLQLDMWUKASUUFPGBTIVVGZCSWETQFQNCTEOJSEZWXQAFBXXH");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.919983155146);
    msg.setSource(62155U);
    msg.setSourceEntity(128U);
    msg.setDestination(62961U);
    msg.setDestinationEntity(73U);
    msg.command = 186U;
    msg.htime = 0.0371770159774;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.817463631547);
    msg.setSource(37625U);
    msg.setSourceEntity(14U);
    msg.setDestination(63061U);
    msg.setDestinationEntity(238U);
    msg.op = 176U;
    msg.file.assign("XLQBHWYULUDCAXCXUNASDNOOHTKHNGWFZOCXKWVDPQIWFEBQMXDAZSGVRJLXERACRTHJYKJZQWFNBGNKSFMSKHRWMQSBRWRAPQIXPUYUAUDKGOHODIFVUXGLYOYVJGPTZFOZGJGBMKWZPHXBFNVUMNVMAMGETLQTDBKOHBMYGZSVDTRPATTTPHWIIICQJPWLYF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.770058674618);
    msg.setSource(17568U);
    msg.setSourceEntity(244U);
    msg.setDestination(53092U);
    msg.setDestinationEntity(177U);
    msg.op = 42U;
    msg.file.assign("IXSNVPNEBWCMFJPJUEOXFGODTMQLVRBHYGLTJDOSEJONFUQAUHYLUOOYKILKPSRVJIQCWZXRBBZFGSWSYXMXWVV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.73984727167);
    msg.setSource(58531U);
    msg.setSourceEntity(229U);
    msg.setDestination(34699U);
    msg.setDestinationEntity(113U);
    msg.op = 163U;
    msg.file.assign("KZAEDHSJVZTWYXEWJLKVTXRVPEUTMFEDWDALAYPHVFGHNVOIJFTHLBMILLOPQZTDJHUXZRMSZKSEFRMYFZJXRDSSGOZTCVQLAQUYGRLVBYNBPLHSETCALFOUBEMGMAUCXNXJGNCOOHXKYJCAJNECWQQIJIEABXKF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.969884680101);
    msg.setSource(9882U);
    msg.setSourceEntity(246U);
    msg.setDestination(31901U);
    msg.setDestinationEntity(137U);
    msg.op = 71U;
    msg.clock = 0.796122881679;
    msg.tz = 36;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.484087200409);
    msg.setSource(32327U);
    msg.setSourceEntity(247U);
    msg.setDestination(38076U);
    msg.setDestinationEntity(109U);
    msg.op = 219U;
    msg.clock = 0.343699528219;
    msg.tz = -111;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.653781121273);
    msg.setSource(58960U);
    msg.setSourceEntity(107U);
    msg.setDestination(32313U);
    msg.setDestinationEntity(137U);
    msg.op = 87U;
    msg.clock = 0.422045614921;
    msg.tz = 29;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.0331760076939);
    msg.setSource(54369U);
    msg.setSourceEntity(173U);
    msg.setDestination(23046U);
    msg.setDestinationEntity(246U);
    msg.conductivity = 0.467839882066;
    msg.temperature = 0.727676953586;
    msg.depth = 0.0769002073354;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.130615397148);
    msg.setSource(13589U);
    msg.setSourceEntity(22U);
    msg.setDestination(44930U);
    msg.setDestinationEntity(237U);
    msg.conductivity = 0.759092795699;
    msg.temperature = 0.72919312624;
    msg.depth = 0.586327812446;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.267765538942);
    msg.setSource(44997U);
    msg.setSourceEntity(12U);
    msg.setDestination(20971U);
    msg.setDestinationEntity(186U);
    msg.conductivity = 0.675042137579;
    msg.temperature = 0.941412220832;
    msg.depth = 0.135846516901;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.234479430594);
    msg.setSource(57409U);
    msg.setSourceEntity(165U);
    msg.setDestination(34166U);
    msg.setDestinationEntity(183U);
    msg.altitude = 0.928369790322;
    msg.roll = 20055U;
    msg.pitch = 32376U;
    msg.yaw = 25136U;
    msg.speed = 26182;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.480347800143);
    msg.setSource(10869U);
    msg.setSourceEntity(124U);
    msg.setDestination(64370U);
    msg.setDestinationEntity(38U);
    msg.altitude = 0.529619961591;
    msg.roll = 13692U;
    msg.pitch = 64911U;
    msg.yaw = 56129U;
    msg.speed = 32711;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.770587968104);
    msg.setSource(21544U);
    msg.setSourceEntity(108U);
    msg.setDestination(6811U);
    msg.setDestinationEntity(133U);
    msg.altitude = 0.398977421355;
    msg.roll = 64172U;
    msg.pitch = 46368U;
    msg.yaw = 2014U;
    msg.speed = -11212;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.325389897728);
    msg.setSource(61454U);
    msg.setSourceEntity(63U);
    msg.setDestination(8828U);
    msg.setDestinationEntity(152U);
    msg.altitude = 0.669821501144;
    msg.width = 0.106530319627;
    msg.length = 0.300800060333;
    msg.bearing = 0.114568144411;
    msg.pxl = -3315;
    msg.encoding = 100U;
    const char tmp_msg_0[] = {-104, 53, 120, -109, 36, 53, -58, -64, 77, 14, 57, 119, 124, 28, 37, 97, 119, 38, 2, 94, -23, 55, -31, 20, 6, -18, -115, 43, 91, -80, -30, 52, -56, 94, 58, -15, -28, -78, -58, -35, -82, -113, 69, -12, -107, -64, 117, 101, 18, -18, -55, -117, 89, 104, -107, -101, -68, 116, 77, -105, -40, -89, -87, -45, 55, -128, -5, 13, 60, 43, 6, -89, 103, 21, -112, -47, -62, -102, -100, 106, 16, -32, -108, 124, -11, -52, -71, 11, -119, 104, 78, 126, 19, 52, 67, 67, 85, -114, 63, -51, 2, 7, 120, -37, -68, 57, 62, -40, 114, -26, -119, 115, -112, 105, 54, 126, 68, 119, 79, 82, -53, -29, -81, 31, -29, -53, 48, 6, 50, 64, 88, 13, 81, -116, -14, 94, -104, -24, 18, -13, -44, 53, 10, -96, -76, -95, -86, -120, -13, 56, -17, -101, 51, -36, 43, -100, -5, -91, -8, 2, -61, 7, 87, 58, 38, -121, 21, -10, -115, 40, 48, 113, -125, -83, -19, -13, 83, 88, -34, -114, 101, -89, -61, -86, -107, 51, -68, 74, -78, -81, 110, 104, 29, 35, -83, 27, 101, -71, -86, -10, 75, -22, -121, 30, 17, -125, 57, 60, 22, -102, -114, 93, 20, 126, 27, -21, 94, -123, -74, 18, 49, 86, 103, 85, 110, -57, 85, 35, -83, 75, -116, -87, 11, -95, 12, 3, -102, 120, 99, -17, 60, 73, -98};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.206164967615);
    msg.setSource(3037U);
    msg.setSourceEntity(187U);
    msg.setDestination(47983U);
    msg.setDestinationEntity(46U);
    msg.altitude = 0.494094657963;
    msg.width = 0.18567448333;
    msg.length = 0.377803937031;
    msg.bearing = 0.382412120169;
    msg.pxl = -1490;
    msg.encoding = 40U;
    const char tmp_msg_0[] = {114, -99, -70, 38, 122, -115, -57, -112, -34, 126, 27, 117, -127, 121, 5, -37, -13, 124, -90, -2, 12, -123, 82, -82, -105, 22, -104, 61, -13, 61, 2, -99, 54, -53, 108, 109, -31, -22, -106, -7, -10, 8, -128, -105, -121, -61, -71, 23, 51, -109, -17, -114, -33, 125, -75, 57, -91, -107, 56, 109, 9, -8, 101, -49, 106, -124, -39, -7, 72, -44, 2, -91, -105, 61, -27, 52, -81, -72, -8, 26, 114, -99, 71, -11, -88, -46, 23, -36, -114, 54, 31, 61, -50, 50, 24, 76, 11, 45, 107, 111, -121, 115, 46, -89, -63, -83, 39, 14, 22, 50, 38, 126, -71, -48, -66, 112, -70, 78, 46, 58, -76, 120, 125, -107, 5, -15, -44, -63, 13, 28, 11, 88, -98, 112, 43, -67, -57, 40, -72, -66, 13, -39, -24, -5, 12, -43, 111, 100, -23, 24, 103, -37, 14, 114, -30, -59, -50, 103, 67, -19, -14, -65, -32, -55, 74, 125, 90, 88, -82, -124, 64, -80};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.483968794081);
    msg.setSource(8708U);
    msg.setSourceEntity(248U);
    msg.setDestination(161U);
    msg.setDestinationEntity(250U);
    msg.altitude = 0.336240701422;
    msg.width = 0.426025105888;
    msg.length = 0.622050978976;
    msg.bearing = 0.996858388295;
    msg.pxl = -4740;
    msg.encoding = 1U;
    const char tmp_msg_0[] = {77, -97, 71, 98, -12, -126, -22, -108, 30, -64, -92, 113, 102, -70, -43, -11, -24, -116, 72, -117, 74, -7, 117, 20, 36, -53, 88, -16, 53, 88, -126, -72, 75, 95, 120, -95, -78, -17, -82, 58, -120, 15, 6, 75, 9, 125, -28, -6, 97, 25, 124, 95, -39, -14, 105, 58, -47, 43, 62, 19, -79, 53, 2, 105, -122, -91, -65, -70, 93, 69};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.512423681081);
    msg.setSource(57763U);
    msg.setSourceEntity(111U);
    msg.setDestination(2887U);
    msg.setDestinationEntity(250U);
    msg.text.assign("KOCYFMFGESMLGGYPBOBPJHTPRTEVXZTXZPXXXSFFZQTJAOFGVLWCMFUGSKKHJRKSMOWNKVEAUKIAGRKORLSKECCZGPIDZXYMXBFZHZBJJEBBNFVPONQYDWYIGNU");
    msg.type = 55U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.245513926876);
    msg.setSource(55922U);
    msg.setSourceEntity(213U);
    msg.setDestination(58520U);
    msg.setDestinationEntity(132U);
    msg.text.assign("AWVXQCQQJEMQQIKSKNZKPUHMYZVWATKNCTZKROXTVOFTDIXPUELIFNZQUGASPPAXMDUDTSMHHADUKONWLZVYJRMXQLNIAXYTDKNIAWIORQEBQJFBYJSGBCMSZLFJTA");
    msg.type = 35U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.0545312107784);
    msg.setSource(47329U);
    msg.setSourceEntity(17U);
    msg.setDestination(57341U);
    msg.setDestinationEntity(155U);
    msg.text.assign("LIQJCVIMZZZXXUOZUQIHBEULJUQLKBCZKTZSAHDNRVEDHHWYZNSGQAKPDIGOYTWEWXJEGTFNEGKSEMLSHRFFEHVXRYCUJWKBPOYQBBMWJHODOBJQCCNRJDUSVGLYJSPAYIQTMZPQZFDHYWGLELCKASDHUVNDGLNAAXWOXARCTVARUKKFTYFMONQVKFMRWFMBBQEJNTCCUXMNSSYOOIIVADAFTPRXSIPLLPCDMNPMBFTPJPIGXV");
    msg.type = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.994924713969);
    msg.setSource(54617U);
    msg.setSourceEntity(51U);
    msg.setDestination(7573U);
    msg.setDestinationEntity(94U);
    msg.parameter = 21U;
    msg.numsamples = 66U;
    msg.lat = 0.0312876963953;
    msg.lon = 0.877018514166;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.0448312498925);
    msg.setSource(20189U);
    msg.setSourceEntity(43U);
    msg.setDestination(32736U);
    msg.setDestinationEntity(182U);
    msg.parameter = 126U;
    msg.numsamples = 5U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 45981U;
    tmp_msg_0.avg = 0.507845928398;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.30863783544;
    msg.lon = 0.0523844922738;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.696996181076);
    msg.setSource(23427U);
    msg.setSourceEntity(142U);
    msg.setDestination(52810U);
    msg.setDestinationEntity(21U);
    msg.parameter = 232U;
    msg.numsamples = 122U;
    msg.lat = 0.344966456641;
    msg.lon = 0.680924961376;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.679533080454);
    msg.setSource(32218U);
    msg.setSourceEntity(56U);
    msg.setDestination(43718U);
    msg.setDestinationEntity(235U);
    msg.depth = 56601U;
    msg.avg = 0.902247866265;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.0741507703735);
    msg.setSource(55947U);
    msg.setSourceEntity(211U);
    msg.setDestination(24075U);
    msg.setDestinationEntity(64U);
    msg.depth = 11219U;
    msg.avg = 0.190806713687;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.891836153057);
    msg.setSource(33547U);
    msg.setSourceEntity(161U);
    msg.setDestination(62324U);
    msg.setDestinationEntity(112U);
    msg.depth = 1944U;
    msg.avg = 0.927862942831;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.419163276421);
    msg.setSource(30551U);
    msg.setSourceEntity(231U);
    msg.setDestination(54387U);
    msg.setDestinationEntity(37U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.855428591169);
    msg.setSource(21648U);
    msg.setSourceEntity(101U);
    msg.setDestination(27338U);
    msg.setDestinationEntity(86U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.133062562913);
    msg.setSource(37787U);
    msg.setSourceEntity(236U);
    msg.setDestination(64359U);
    msg.setDestinationEntity(244U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.237115596491);
    msg.setSource(48199U);
    msg.setSourceEntity(177U);
    msg.setDestination(31507U);
    msg.setDestinationEntity(134U);
    msg.sys_name.assign("FPBDCGMFZTGMDDISSMGIOCRMSMJQTJZVIYQTWRRYLGIOIPZVQMUXPFEODYSBCHUQVXGQJNWUWEPHAGCDIWIYLXZHNRUKEXFLYQJVPSWYVNLTRANBSZOSLNGLJEQWKCJCYAHFPUFJYLIXCTFPNKTXAZQRKBUPXCPBLKEGVHUNNARQXTUGDZMHLTWHEWIXAOSRDMHIYMJBHMWEECYENSDDETKLPATKJFFBORWDJORNUKFKVBUCVAZKV");
    msg.sys_type = 115U;
    msg.owner = 18547U;
    msg.lat = 0.461588173634;
    msg.lon = 0.885050536796;
    msg.height = 0.78120703559;
    msg.services.assign("XYFUSRVQSWRZJRWGHEHVZWDXRGXNNJCYKLTMLWTLXKFVGAWSPIKPLTRWWISSIQODVCZFCAIAHBENPNNFAWQGJHLOJKBHLUBNKIUMQCRVXHQEZEUFJNCDCRWFBXFZTAUNPIPIAJBZBVZOFMGTFBIXRDMEDDSCUGVOVNTAOBHOLXSDMOZEVZOYGKLDPTBKLVLKQUWAQQQMZEYPU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.440763276811);
    msg.setSource(30352U);
    msg.setSourceEntity(20U);
    msg.setDestination(10988U);
    msg.setDestinationEntity(109U);
    msg.sys_name.assign("ZKWUARFERYFFQHQVXHGSGPNPLEZUYDJMGWQLHZXUJERUFGAVEQNVLJSSFZMDJZFIXQPVYLTLPKRLQIBRMODJVUMXIQHCHDNKTOCRKAJVNUWIRVBKWNCALFWMIKTTOESOUKQOEKEAYGRGPVTUYVCDCDPEJTUJYSOBZMXDWNOESYCWBILHCZNPANWBNZSPTGLAAFXKEBLIWYJXDMZTHOFOBAZRRYIGGAIIDXNJGHCSYXQVXMMB");
    msg.sys_type = 66U;
    msg.owner = 35950U;
    msg.lat = 0.67711725921;
    msg.lon = 0.0548615030612;
    msg.height = 0.936972706148;
    msg.services.assign("SRBYGFEULCAMOWOCTDULXJEXAJYWPHJTYIM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.141129107456);
    msg.setSource(10666U);
    msg.setSourceEntity(222U);
    msg.setDestination(33103U);
    msg.setDestinationEntity(220U);
    msg.sys_name.assign("URJBZKTFKCNBQSGJRHNBMZJMOQOEIHZLGARKTSIUPADPPNSBICZCWKQVXULOCMDOADNLHCNEFYANLJHBYVDYRPPAKDZTAVVEKDEIGRJDWRNZIOHLNVMBKXDPYMQGYAQTTTFGJBMXVGWZYEIFOGKANXUXHUHPSVSYRUTITBATEMJUUWJSH");
    msg.sys_type = 171U;
    msg.owner = 51274U;
    msg.lat = 0.731224147313;
    msg.lon = 0.845106839275;
    msg.height = 0.323277110947;
    msg.services.assign("DXTLBUKATN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.301345988896);
    msg.setSource(39373U);
    msg.setSourceEntity(160U);
    msg.setDestination(26005U);
    msg.setDestinationEntity(118U);
    msg.service.assign("ICEAOUDUIVAZNVXWYTQLJQIUMTSAPNVBPVOJTWXATYKDHRTQOJEZHUVYKEHDZFTPNZUFYIRLSLHPCJYGVDAVWIIKYEIJUGBWSGGSBDXMZQPQXDNRMOEYSKIWHSLXKZFPAPCPWBYKZPGAMSMOXGBRYGNOEZMCMCRMNFUXJTSWWCDGIEYQBQPFREVBFVWFAJOUKJLBQHLDZDIOKMHGBGCXHCHZKVDLNQRASEQAOEFRNSUMCWLFT");
    msg.service_type = 124U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.771350230878);
    msg.setSource(52041U);
    msg.setSourceEntity(44U);
    msg.setDestination(11830U);
    msg.setDestinationEntity(5U);
    msg.service.assign("AQBKONRUUKCCAUQMLIFQHMQTBGZLJOBCHZGOHRMXAIVSEFHGZSAWRAFNJMETMJIYOAXSSTBFKCVXEVSGOBIECCRLXKFFGJTHEYZPUOHZRRIVKUMVWYIEQIILNEJALUPSPEQWHKJHHXGOKYNXMPLDAZDTPBCJSEMABEPWNUWLRWQJLSDTRJXGDHNFFYBDXXKZYVDGDPTBPQDYWZDFQFMZLXRNONVCNVGNSOPBPYJWK");
    msg.service_type = 2U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.500071387383);
    msg.setSource(10694U);
    msg.setSourceEntity(165U);
    msg.setDestination(57230U);
    msg.setDestinationEntity(113U);
    msg.service.assign("WKHOCLYEKSCXQATYZJQURPCWQNCLXQTIWNWHVMZSSLRMOUMJPPQGJMALHAYMBXNPMUVBABTSEPTJVITJKMPNXFERBUIDPMZEVSDLCGRDMNDVIYAAEDEKDYAGLRUWUUOSNYXEUSJKIACOXJOTSWFOFOHGFZJRF");
    msg.service_type = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.381350680427);
    msg.setSource(44176U);
    msg.setSourceEntity(254U);
    msg.setDestination(34943U);
    msg.setDestinationEntity(186U);
    msg.value = 0.0143844332717;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.528516024836);
    msg.setSource(7077U);
    msg.setSourceEntity(19U);
    msg.setDestination(35838U);
    msg.setDestinationEntity(247U);
    msg.value = 0.857120613317;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.323642366939);
    msg.setSource(8313U);
    msg.setSourceEntity(111U);
    msg.setDestination(51898U);
    msg.setDestinationEntity(43U);
    msg.value = 0.503510352233;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.23795484416);
    msg.setSource(36836U);
    msg.setSourceEntity(216U);
    msg.setDestination(63422U);
    msg.setDestinationEntity(67U);
    msg.value = 0.366200448976;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.0385722076973);
    msg.setSource(18798U);
    msg.setSourceEntity(247U);
    msg.setDestination(56786U);
    msg.setDestinationEntity(36U);
    msg.value = 0.707041676465;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.700001014902);
    msg.setSource(15089U);
    msg.setSourceEntity(233U);
    msg.setDestination(18976U);
    msg.setDestinationEntity(36U);
    msg.value = 0.197815853606;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.316011786731);
    msg.setSource(13207U);
    msg.setSourceEntity(66U);
    msg.setDestination(44688U);
    msg.setDestinationEntity(74U);
    msg.value = 0.505019985567;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.296573170718);
    msg.setSource(53179U);
    msg.setSourceEntity(15U);
    msg.setDestination(7065U);
    msg.setDestinationEntity(77U);
    msg.value = 0.0834993850436;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.20229528376);
    msg.setSource(27178U);
    msg.setSourceEntity(204U);
    msg.setDestination(57309U);
    msg.setDestinationEntity(245U);
    msg.value = 0.137879616524;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.703375736748);
    msg.setSource(42278U);
    msg.setSourceEntity(36U);
    msg.setDestination(63597U);
    msg.setDestinationEntity(60U);
    msg.number.assign("FAQLASQZBZCJTKQBFKIUFKBNLOOHS");
    msg.timeout = 24664U;
    msg.contents.assign("NTRBGCMDULNIKHYFEHDFGJHYBWJGMEXJCRGOTDZIILELLJYNUDSZZXVGPWAYRCWDJCRUXJX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.872003464764);
    msg.setSource(26991U);
    msg.setSourceEntity(93U);
    msg.setDestination(55626U);
    msg.setDestinationEntity(71U);
    msg.number.assign("EOOWTLNSMLLSVMUOCXCAWVZHDGSNZWIBTFZ");
    msg.timeout = 20243U;
    msg.contents.assign("JSIFPWZFWHFRMVLMXGASOKMSCAJYIIQKTTQLEDSDXQVURDWNJIBDJXCSPNMPZYWZWIYVTYPRKBALUUIKSAAPFBKKBGQTTCQCHENOVZWONLLOVVGQXVZMULEVWDEYJPIOPLKJGOHPHDNYJCYKTOSTOWDTSXMXGUCIABCRMZUYTCFRAIWEFEEHORPUSXBKHBERUZZXHZIGANSMGGMFVWYQDNDPORX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.149203939012);
    msg.setSource(58967U);
    msg.setSourceEntity(75U);
    msg.setDestination(51826U);
    msg.setDestinationEntity(17U);
    msg.number.assign("NJGLWQQNGUTSVUIIHDALPGVCMXQJPMXPSEHYACTZIJDKLAXWDBRRHRRELVAEZQIFMENFJPJCDOOLB");
    msg.timeout = 15239U;
    msg.contents.assign("CTJXXTRLUPXLHBEDDXPCFYBGOJXJSULQEZWCIMDDFBKRFHGGIVGRMKAAXFRTOWAEAVYVLIEOCAFRMVZWUNVSYYBXQIBHDILRMLJSJWSICPFDDPGGWGXEPDPSKNCMNDEUMWYQIHZCHNCNMNFLQHWZZOQZKEP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.899437244186);
    msg.setSource(30108U);
    msg.setSourceEntity(56U);
    msg.setDestination(21898U);
    msg.setDestinationEntity(105U);
    msg.seq = 1648508531U;
    msg.destination.assign("RJBHEPXXAMNABNOPYQZRTXEGLDSTCIFRAKOZVQHVLBVYTZKWNPWXRFEPMZNMBWQICVEEAANRKFJOTNLWDITNICZOPANANMUQGHXZKLKEDEHQCGMJFCWGZHTTOTLKAENSYOFQMRJUJXRDDRPSYGBHYDKBQZLHQQPTVCHUFUSGXJRKXYVGBVOLOGSEJGHMYMFCUIIIDLJYSDXWFKVSQALFGTLCSJBAPZWDF");
    msg.timeout = 12731U;
    const char tmp_msg_0[] = {-77, 45, -72, 44, 65, -63, -87, -43, 0, 10, 68, 106, 21, -111, 24, -2, 50, 51, -3, 85, -33, 87, -68, 97, -86, -110, -95, 5, 97, -34, -7, -83, 103, -107, 67, 96, 20, 29, 78, 62, 88, 5, 116, 120, -126, 31, 113, 1, 90, -23, 115, 99, 5};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.398964417645);
    msg.setSource(25681U);
    msg.setSourceEntity(5U);
    msg.setDestination(34564U);
    msg.setDestinationEntity(23U);
    msg.seq = 2883608038U;
    msg.destination.assign("FQILUDITWQVWGXKKYZCRORQCPSYNPJOPJUFKMHOQMSMTBXAXVXVUJLFUYCEBYFTWWXAVZPXPHHIDGOJSICFYDLYACWAMHRVLWSZNJKQRSFKWIGEBEOLHBSNYZYQIIKJTNQHAGMGLBVUYENXQHBBOEYBAECFZZGRJKDTRLTMDJEONZNTDZZQXKEQUCRMUGEO");
    msg.timeout = 3495U;
    const char tmp_msg_0[] = {51, -46, 94, -97, 112, -126, -56, 34, 31, 117, -95, 91, 124, 37, -92, -93, 102, 97, -64, 101, -36, -114, 70, 28, -63, -43, -40, -63, 64, 52, 68, 117, 21, -36, -28, -101, 61, 53, -46, 82, -41, 105, -115, 119, 58, -81, -90, 86, -15, 48, -68, -61, -6, -42, 78, 118, -66, 86, 74, 59, 22, 80, 41, 32, -112, 2, 27, 84, 89, 61, 29, 41, -49, 29, -37, -125, -28, 118, -12, -35, -79, 46, -113, 99, 105, 60, 74};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.90999694846);
    msg.setSource(42839U);
    msg.setSourceEntity(54U);
    msg.setDestination(41928U);
    msg.setDestinationEntity(213U);
    msg.seq = 2231116970U;
    msg.destination.assign("IBOOAWHLQUAHXUPMYQPXAGLKNSEKNETTCJSXWZTPIUHOHGEJAECYPOEPOMJSCLDCIWXKDDVLSAT");
    msg.timeout = 28406U;
    const char tmp_msg_0[] = {-74, 33, 78, -42, 122, 33, 46, -56, -104, 85, 26, -23, 69, 13, 82, 13, -1, 21, -2, 2, 68, 116, 36, -120, 2, 86, 5, -35, 21, 52, 95, 84, -12, 96, 30, -127, -87, -108, 36, 84, -106, -32, 77, -20, 103, 111, 8, 46, 17, 67, -54, -115, 56, 24, 99, 27, 12, 124, 85, -107, -13, 55, -4, -51, -100, -6, 102, -54, 61, -21, -123, 18, 68, 124, -76, 95, 34, -108, -75, -8, -7, -25, -3, 55, -110, -81, 113, -32, 121, 8, -85, 39, -119, 10, -36, -66, 70, -35, 34, -38, -98, 104, 88, -43, 34, -113, 69, -73, 34};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.44737213946);
    msg.setSource(25110U);
    msg.setSourceEntity(4U);
    msg.setDestination(22254U);
    msg.setDestinationEntity(240U);
    msg.source.assign("MRNRZBMTCLKDNBKDDDITJPRROMSNJWWOAIZPHQIXWWJPKULDWQXQWEDXOHORQOEAHLLJTGEAQQ");
    const char tmp_msg_0[] = {-51, 64, -73, -99, 116, -14, 42, 30, -39, 13, 100, 51, 40, -45, 23, -69, 108, 81, -104, -14, -41, 122, 51, -73, 14, 90, 56, -8, 14, 82, 50, 70, 9, 108, -81, 54, -35, 16, -38, 0, -99, 17, 109, -128, 59, 115, -87, -23, 58, -124, -42, 125, 57, -112, -7, 124, 28, 23, 108, 78, -20, 100, 119, -115, 27, -38, 55, 69, -107, -97, 66, -69, -116, 69, 87, -95, -128, -28, 80, 79, 9, -100, -98, -126, -46, -106, -69, 88, 45, -81, -64, 101, 11, 125, -58, 123, -62, 51, -75, 98, 43, -109, 23, 90, -102, -6, 5, 80, 64, 99, 86, 61, 79, -66, -92, 43, 124, 99, -16, 21, 18, -74, -110, -111, -121, -40, 113, -17, 117, 100, -92, -61, -52, 85, -41, 6, -90, -116, -59, -40, -24, 18, 83, -73, -64, 116, -16, -48, -96, 84, -24, 126, 70, -66, -18};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.642707968045);
    msg.setSource(44609U);
    msg.setSourceEntity(240U);
    msg.setDestination(21124U);
    msg.setDestinationEntity(243U);
    msg.source.assign("IGHAQUENHDGACUJBYAEIHBHBKQCNDAZTFRVFOKLFBNFNMMINKLPWBNXVYOBSAKNKLPKXEYJCCRRFKSZQUDEVIWZGRFLLUQBJMLJKDMVZVPXSZQDXFPTJCIEAUWXTBXPWYMHVMVBTNPDSTSKYOPZEPGHOQGIOFUWOXRYRHUYAJPLQGYLGITHDHXSZMXVSJOQONCTAJUYITDLWZROQEHCRWETW");
    const char tmp_msg_0[] = {50, -95, -117, 47, 120, 84, 117, -3, 100, 40, 7, 68, -95, 71, 43, 24, -16, -11, 111, -54, -105, -90, -119, -85, -100, -72, 34, -98, 9, -46, -67, 95, 66, 45, -96, 35, 109, -37, 124, 67, 46, 3, -111, -40, 82, -106, 17, -60, -69, -80, 36, -82, 81, 26, -44, 89, -3, -119, 105, -124, 45, 9, 15, -116, 117, -45, -19, -101, -108, 55, -26, -18, -121, -95, -33, 22, 62, 120, -14, 31, -34, -72, 70, 8, 120, -45, -127, -39, 9, 44, -15, 88, -38, 78, -32, 95, -109, 55, 104, -64, -107, 95, 109, -106, 12, -74, 111, 84, -102, 89, -24, 114, 33, 24, -107, -112, 35, -27, 54, -26, 5, -67, -78, 88, -119, 45};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.212419119575);
    msg.setSource(31695U);
    msg.setSourceEntity(17U);
    msg.setDestination(3897U);
    msg.setDestinationEntity(226U);
    msg.source.assign("GRQOLGSLUFQCPQBHGHTFMPNXZKRONZMBDDCJBUOCWRNDTZJGEVCGEQMYFVIBAOKPIHRWNILEXSVHTAQKSWAILEQKDVANEUVLAPJUAINB");
    const char tmp_msg_0[] = {-118, 33, -102, -35, 96, -4, 111, 91, 51, 84, -119, 49, 108, 38, 110, 78, 102, -38, -124, 111, -2, -93, 35, 111, -73, -71, -80, -87, 102, -22, -80, -3, -82, -87, -91, 66, -83, -121, -28, -6, 8, -58, 89, 42, -78, 78, 94, -59, -103, -15, 37, -17, -108, 22, 21, -71, 58, -28, -105, -21, -62, -2, 59, -84, 82, 61, -12, -100, 123, 122, 76, 64, -36, -126, 25, 47, 14, -110, -86, -124, -60, 38, 119, 20, -47, -38, 93, 108, -108, 30, 14, 57, 32, 5, 67, 36, -12, -14, -100, -82, 95, -112, 114, -19, -36, 87, 89, -40, -100, 60, -73, -73, 122, 86, 69, -18, 50, -33, -37, -29, 62, 103, -46, 55, -113, 62, -15, -4, 53, -92, -92, -114, -121, 102, 38, 73, -8, -4, -89, 92, -66, 64, -117, 121, -70, 68, -63, -27, -111, 22, -85, -87, -107, -66, -11, -110, -126, 91, 39, 42, -99, -19, 120, -76, -41, -84, 111, 84, -27, -54, -2, 120, -8, -114, -99, -99, 10, 75, -59, -124, 82, -65, 10, -66, -102, -120, -67, -104, -94, -10, -120, -54, 13, 55, -29, -7, 65, 32, -29, -83, 68, -22, 101, 8, -60, -100, -1, 56, -49, -31, 110, 3, -107, 125, 78, 115, 12, -27, -49, 117, 31, 115, 121, -9, -60, -79};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.713873357396);
    msg.setSource(59801U);
    msg.setSourceEntity(235U);
    msg.setDestination(34065U);
    msg.setDestinationEntity(188U);
    msg.seq = 3420091384U;
    msg.state = 184U;
    msg.error.assign("RVDEKKSUMMFJMCYPBIYWJOTZBFIJFAAEPCCJANKEMHSLCARPRVFQUUDZNDQHFXQHUAIHMUFFLHKDLZEKVDZZBZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.399465360947);
    msg.setSource(59880U);
    msg.setSourceEntity(67U);
    msg.setDestination(54882U);
    msg.setDestinationEntity(240U);
    msg.seq = 958523231U;
    msg.state = 238U;
    msg.error.assign("AIFOSUCRGJPGMOITGREHNKELEYTFRWYWCITRYTUCAJEYZMVKSDMMVQRZPOEPOABFUEJUVNRXWDXSLJKBFALVWWNLACVDGSYQLCNJDCTRBICFHYSHKFQXHHDUDSUNMTBSYCBGZKDGKTGNIWCJICBZGLLMHPDOXOTLMQHZFHEJPEXBPQJZGRIRYZQOXJVVLXYNVTZNQUWJVKUMWLUODGBZOBEPBNXATOIAYPPNXHRSFKVHSMAISIWXQQKWAPUQME");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.994346580115);
    msg.setSource(25110U);
    msg.setSourceEntity(61U);
    msg.setDestination(4650U);
    msg.setDestinationEntity(4U);
    msg.seq = 1201583820U;
    msg.state = 165U;
    msg.error.assign("BWXEJDGPSLYSTCFFCQCRNTMMLBEZSPNLYAJUKWOHCZDOFQNVKYPAODZVKZJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.0863262439212);
    msg.setSource(37521U);
    msg.setSourceEntity(81U);
    msg.setDestination(60507U);
    msg.setDestinationEntity(233U);
    msg.origin.assign("PPZAGTADZJCUBZGKNGRIGETFUNAADFOTPHKCSPAVXSMEEBXHENDUTQLBKNSKKCHIDCQMYESIZIISTWKDSOSKMINPCROEQCFPLHRVEMBPRMLFKTANJDWRYCHQQDWYOUBIOLFMRYLQNQLBOABUSTJOXVIEUULRJGCWOZZQ");
    msg.text.assign("MZPBEQKAFLSTXCVTWNCVRDMPETKDCRHHNWJVGUAFQSBLYAGDASQZDQSFXJPPDNOHFXBQCIPJBHERGBIAASFCGSIKCYZMAVRFTNWWZOMNYETSFHZMTPNUAUQVDMEYJFJYNZHTPYBNKDHDMJCWXRRULLTUOHHWESMKYOWQIBLJSWZIIQTQDCEJVCIOKQOKIVSGOOALBKLDKPJGNXVXZIZPFXGGXZLYEEWXLXOLGOUMCFWEGMUHYURI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.282237537716);
    msg.setSource(34213U);
    msg.setSourceEntity(161U);
    msg.setDestination(6909U);
    msg.setDestinationEntity(217U);
    msg.origin.assign("SWFMKILXEBTJJYSPTDHOMCUPQTXOWRHPHXVDCUNOXEYOBZLCGRP");
    msg.text.assign("JDKDTOBNDQXQAGQWIFZODZATTEGXRLLEPQKOMUYUVHKHLYDVREBHZPGMQYIZCRVYDXVRCBGTXTTRVNPMWDWUJDHKEWPNOCYPVFTBNUBKUJMPNDYKZIPBUPHXQGAEFYQBRLLZZROMEJHEEONILSYJOAIIZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.0787154154694);
    msg.setSource(13452U);
    msg.setSourceEntity(135U);
    msg.setDestination(9677U);
    msg.setDestinationEntity(79U);
    msg.origin.assign("GPHOWETUICSAMRKVQQEPCSOVJAHOQNTXRWHDJGXYYLIMHVFB");
    msg.text.assign("GKYQDVWQCFZISGWCMUDHFYDSUQFOMJEIHFVSDTLQFOZDXCJGIWJOBRAXZPWOVTGEZYNXOLTIGDUYDLBMSOSXMANTKCLKDXXMFALVOFUZIKVENQSNNBLBIELGCJRAZVBXTPHPHERJTSUTHVRSJKPYKTUKCKPMHXKIRQJRCVWPPRNGEMWTGKXJUPBNAWOWELHCWAOZNFFAVDGEHHMQSYLPYOXZLGHETBWPCSNAJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.791320156444);
    msg.setSource(34702U);
    msg.setSourceEntity(86U);
    msg.setDestination(37147U);
    msg.setDestinationEntity(249U);
    msg.origin.assign("AKDWQPWEQJZCASEFXKCVWGZMGDGEXLNHPEHJQAASBNCNPOTOJFEIMZAQZIDKLJRQXBMZYQNHLWOCGWNJSFRIJZTCHNYZSEPNLLZVZUVKLIJTSGTRVMRDMBPZHFGOSXGAQKGWDBPCWXTRODCIUXXBHNOUEDBWWAYWVXBOVXUUYJFISNLHQVMDBRLXFUNTYJVYTKBMSYJMMGV");
    msg.htime = 0.956918498316;
    msg.lat = 0.445809409489;
    msg.lon = 0.0285358583497;
    const char tmp_msg_0[] = {-87, 80, -79, -96, 25, -10, 0, 116, 110, -93, 115, 31, -12, -46, -79, -30, -58, 28};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.419944882176);
    msg.setSource(60805U);
    msg.setSourceEntity(246U);
    msg.setDestination(20819U);
    msg.setDestinationEntity(29U);
    msg.origin.assign("ZIWKUCXYALPUABWDMOHIXUJRXJYZERYZFDDLTOLPZMHZNKSCRWKIBRQNIQNAHCULEUSYYMTUWKOCKNJVNNVIFQCMQRYPPOBLGLFUIVGGLGPHRIGODMKTVJQHFEZGFDOXNPUIZYUFRWXTSPHZTTQNRSSTECNWUBOVAPKHDKRSCGOEQCMFDBWDWS");
    msg.htime = 0.154801012714;
    msg.lat = 0.122171860933;
    msg.lon = 0.664833530292;
    const char tmp_msg_0[] = {27, 24, -27, -112, -68, 16, 46, -44, 41, -69, -100, 76, 36, 113, -72, -33, 49, 64, 115, 65, -95, 29, -32, 10, -25, 93, -93, 101, -57, 59, 109, 17, 55, -80, -11, 0, -121, -6, 119, 24, -96, -116, 16, 92, 75, 44, 113, -61, -59, 62, -90, -127, 50, 86, -27, 35, 124, -27, -55, -39, -117, -110, 15, -27, 104, -45, -69, -90, 81, 96, -71, -22, -73, -53, -77, 102, -121, -58, -84, -61, 51, 52, 92, -47, -113, -102, -31, -119, -28, 91, -67};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.222658193216);
    msg.setSource(38156U);
    msg.setSourceEntity(104U);
    msg.setDestination(10417U);
    msg.setDestinationEntity(93U);
    msg.origin.assign("FQGUIXSDRVVFEPBNFMDSMKYNVDXTWXQVAFCXEACTUUOWJYHUKYRIDNKNEVCTJFRNUTOPVAIZARYZRYZTOJAEZQLPQ");
    msg.htime = 0.808478588934;
    msg.lat = 0.0611727608342;
    msg.lon = 0.823065842942;
    const char tmp_msg_0[] = {-32, -62, -116, -65, -77, -41, 37, 105, 4, 5, -65, -76, -101, 74, -79, 42, -63, -96, 111, 115, 63, -16, 64, -107, 112, -67, 54, 93, -92, 27, -17, -24, -104, -62, 117, 74, -12, 48, 125, 125, 25, 42, -26, 37, -49, 37, -118, 84, -88, -121, 80, 90, -79, 7, -111, 71, 60, -110, 17, -2, -52, -35, -66, -101, -76, -108, -62, -28, -71, 63, -109, 78, 48, -87, 11, 20, 123, -16};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.286025421959);
    msg.setSource(44812U);
    msg.setSourceEntity(150U);
    msg.setDestination(31936U);
    msg.setDestinationEntity(92U);
    msg.req_id = 21565U;
    msg.ttl = 45280U;
    msg.destination.assign("DPVMIBYVQLHPBTFDTCUSFSRAXCEMPRHDEDZPQGQOWTMXKUMARYGXUYRUZVIQXUNLZIP");
    const char tmp_msg_0[] = {102, -38, 9, -53, 46, -37, 47, 61, 65, -46, 67, 102, -88, -33, -37, -92, -26, 89, -67, -104, 94, -100, 56, -63, -38, 20, -38, 97, 72, 121, 45, 117, 110, 17, 64, 8, -14, -100, 123, -93, 53, -27, -43, 65, 46, 98, -20, -34, -78, 100, -3, 101, 76, 116, 63, -44, 88, -66, 71, -36, 38, -118, 108, 117, -9, 87, -82, -90, 93, 14, -4, -92, -86, -108, 60, -53, 83, 12, 64, 74, 38, 69, -127, 72, -50, 122, -70, 38, 78, 113, 76, 72, 26, 50, -50, -39, -25, 7, -20, 107, 14, 117, 118, -59, 61, 50, -106, -15, -126, -113, 60, -15, 13, -117, -14, 74, -6, 13, -63, -122, -115, -43, -112, -85, -35, 23, -101, 13, -90, -109, 71, -83, -116, 43, 77, 118, 78, -3, -124};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.269005459806);
    msg.setSource(10412U);
    msg.setSourceEntity(7U);
    msg.setDestination(14486U);
    msg.setDestinationEntity(173U);
    msg.req_id = 62768U;
    msg.ttl = 16929U;
    msg.destination.assign("LDRKIYKOSOPPNZBLVMLBECQHQUDMOJSLNTGAHKSNHPIPZBHOWMKUICJTMVDIVXBCRYATUMDPVAHWSJIIZAYXRKENRFQTEMQFBFWCNEUES");
    const char tmp_msg_0[] = {-27, 70, -8, 12, 0, 49, -81, -36, -92, -53, 106, -60, -104, -4, 89, 78, 3, 65, 23, 16, -125, -70, 82, -38, -107, -63, 38, 35, 64, 105, -79, 85, 122, -3, 26, 2, -96, -114, 7, -15, -73, 61, 10, -121, -104, -56, 52, -16, -55, 61, -86, -48, -83, 77, 93, 88, 26, -11, -46, -24, -62, -76, -64, -77, 105, 86, 120, -10, 110, -128, 86, 19, -10, 29, -55, 14, -92, -62, -21, 16, 72, -29, 7, 35, -40, -40, -56, 28, 60, 79, -85, 20, -25, 126, -85, -124, 14, -81, 84, 58, -71, 118, 80, -113, -62};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.172952567735);
    msg.setSource(826U);
    msg.setSourceEntity(178U);
    msg.setDestination(19640U);
    msg.setDestinationEntity(160U);
    msg.req_id = 45356U;
    msg.ttl = 48357U;
    msg.destination.assign("XXSDUQWEFQZQRXBMBHOFIEUCUFSWDWDYP");
    const char tmp_msg_0[] = {80, 85, 72, 61, 21, -80, 119, 82, -40, 36, -115, -39, -19, 95, -42, -90, -21, 92, 6, 83, -5, -63, 116, -1, 47, -112, 68, 68, -127, -41, -119, 24, 92, -60, -75, -52, -33, -68, 94, -105, 72, -89, 43, 43, 3, 120, -106, -61, 69, 46, -96, 88, 92, 122, 21, -100, -101, 120, -68, -121, 123, -44, -53, 35, -53, -79, -34, -84, -2, -12, 126, -45, 53};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.326182084432);
    msg.setSource(3679U);
    msg.setSourceEntity(42U);
    msg.setDestination(54607U);
    msg.setDestinationEntity(199U);
    msg.req_id = 48940U;
    msg.status = 63U;
    msg.text.assign("JVQHDAULSNHMISLGUHKKEOLUYEPRHNZFKGDTYVSOUUCDNEKPFQHWJWLNBSQRIALHFIAGMEY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.728360674232);
    msg.setSource(41028U);
    msg.setSourceEntity(138U);
    msg.setDestination(28514U);
    msg.setDestinationEntity(254U);
    msg.req_id = 9391U;
    msg.status = 223U;
    msg.text.assign("QUNYFRSNQROKJHASCYDIEEFTDMVZGZEUUYMIVJVFRYKEHQGPNSOCZBRUABHVRYDVBZVMQTSKKVXHPQRFWHIUCXLXIAZFGGJQXIVYGBFZLRWOABSXDWBZSVMYKXIVSUWGLDHJPLRFHXMXIEIYRLUPGDCOPMBTOIEMMNFDPJWKAETMKAJKYCLUDJJOWGJEFHNOCQWOBTNATUQZQCSLNMTROPDLGIAJHNDCFBHSOK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.214248209565);
    msg.setSource(46969U);
    msg.setSourceEntity(53U);
    msg.setDestination(2467U);
    msg.setDestinationEntity(137U);
    msg.req_id = 55134U;
    msg.status = 129U;
    msg.text.assign("KRZRXVPCJEFZUAULDYADVVLCHPOFKZWGVCODRNGHBWKTSWTHBNADEMAGLOMVKYZQQIVCLRKWZPCJFUSBPIRETOFMHGQMIGZLIAWZUSVOSMBURJVZCFYLXWLYJEGNASFPBDYXIOQERYUEQUTCDDHOGXQWHJJIMMKQBYLHHVUMUKJORWPFXMCPJREOQQIWAV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.486529488393);
    msg.setSource(56704U);
    msg.setSourceEntity(85U);
    msg.setDestination(31928U);
    msg.setDestinationEntity(155U);
    msg.group_name.assign("ZQDZPXEIRYMRXE");
    msg.links = 1948195080U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.89786959045);
    msg.setSource(31325U);
    msg.setSourceEntity(215U);
    msg.setDestination(8640U);
    msg.setDestinationEntity(1U);
    msg.group_name.assign("HFHIZOHXASKZZGVPYXLAUBPMHCIYQANXHNQQFUSTISBRZMXHBMYTFJEFUKTXKQDKYXWHDJRJATBVEAMYXECJFQRHQYUWPCMSMG");
    msg.links = 521660080U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.740450834361);
    msg.setSource(60996U);
    msg.setSourceEntity(32U);
    msg.setDestination(23922U);
    msg.setDestinationEntity(4U);
    msg.group_name.assign("LCJJDDJUABRYDFZBVVZZMDHMWYLJPVXQMGMHQITBKZPFNWVAGOTSYLQVZDHBLZALOVLIFWLCUWKFYUADKJENABXRPRFZCPWOLSSQXGEQPGQKVE");
    msg.links = 1639311575U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.270683694639);
    msg.setSource(53121U);
    msg.setSourceEntity(98U);
    msg.setDestination(360U);
    msg.setDestinationEntity(217U);
    msg.groupname.assign("XWITOOUGPEZVMERTQILXFLVKXRUHUMYXBDWTKFARWNHUEENTMHSEHJAMIGFJGIVGSYEOTCDVZGYLZMIXXOFKJSXFLUAF");
    msg.action = 237U;
    msg.grouplist.assign("WFURXJFNUOZEXUTQVAYYQGW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.789029868548);
    msg.setSource(14559U);
    msg.setSourceEntity(212U);
    msg.setDestination(22957U);
    msg.setDestinationEntity(181U);
    msg.groupname.assign("YNFBYUMAITRSVOPJPFNFTTWJMVLRRTE");
    msg.action = 211U;
    msg.grouplist.assign("MMGZKZSCXWYKQCDKVDDKPCPFYBEWUAOXIDCQBPMLLPUXRMWYWLKYGXSXANKSHIZJKICNOHXJMAZGUBXINJCOVZOKBZCRWMVATBFLHIHCNDXVLNHQQAGRDARDOUVHMOEBZYRUGDTYGEAJCFZKJEPVNQTEG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.219099339639);
    msg.setSource(16188U);
    msg.setSourceEntity(248U);
    msg.setDestination(37556U);
    msg.setDestinationEntity(19U);
    msg.groupname.assign("HSWCBUJXVZXTOWIXSLNMWGV");
    msg.action = 68U;
    msg.grouplist.assign("DVAJGDRFHV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.199744692907);
    msg.setSource(57479U);
    msg.setSourceEntity(34U);
    msg.setDestination(26806U);
    msg.setDestinationEntity(40U);
    msg.value = 0.839607359262;
    msg.sys_src = 36610U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.87998355984);
    msg.setSource(4216U);
    msg.setSourceEntity(205U);
    msg.setDestination(1458U);
    msg.setDestinationEntity(158U);
    msg.value = 0.567576814962;
    msg.sys_src = 46375U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.545540299767);
    msg.setSource(30533U);
    msg.setSourceEntity(244U);
    msg.setDestination(11224U);
    msg.setDestinationEntity(114U);
    msg.value = 0.0631059427725;
    msg.sys_src = 32963U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.95777539136);
    msg.setSource(58637U);
    msg.setSourceEntity(46U);
    msg.setDestination(23539U);
    msg.setDestinationEntity(9U);
    msg.value = 0.1180213781;
    msg.units = 91U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.46964834389);
    msg.setSource(55706U);
    msg.setSourceEntity(96U);
    msg.setDestination(18371U);
    msg.setDestinationEntity(42U);
    msg.value = 0.593657521095;
    msg.units = 161U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.51258482918);
    msg.setSource(47067U);
    msg.setSourceEntity(31U);
    msg.setDestination(47872U);
    msg.setDestinationEntity(58U);
    msg.value = 0.954379263786;
    msg.units = 61U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.371402040154);
    msg.setSource(18230U);
    msg.setSourceEntity(169U);
    msg.setDestination(20813U);
    msg.setDestinationEntity(131U);
    msg.base_lat = 0.481145063828;
    msg.base_lon = 0.762188246287;
    msg.base_time = 0.221295792208;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 51981U;
    tmp_msg_0.destination = 26597U;
    tmp_msg_0.timeout = 0.481389172104;
    IMC::CompassHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.46002987893;
    tmp_tmp_msg_0_0.ang = 0.200012429901;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.920180858645);
    msg.setSource(30462U);
    msg.setSourceEntity(82U);
    msg.setDestination(58225U);
    msg.setDestinationEntity(21U);
    msg.base_lat = 0.496594777223;
    msg.base_lon = 0.399195609305;
    msg.base_time = 0.787203371786;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 43867U;
    tmp_msg_0.destination = 16855U;
    tmp_msg_0.timeout = 0.00035394263504;
    IMC::StationKeeping tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.385035783615;
    tmp_tmp_msg_0_0.lon = 0.0850327318688;
    tmp_tmp_msg_0_0.z = 0.20149171041;
    tmp_tmp_msg_0_0.z_units = 196U;
    tmp_tmp_msg_0_0.radius = 0.31967398001;
    tmp_tmp_msg_0_0.duration = 36795U;
    tmp_tmp_msg_0_0.speed = 0.43711828734;
    tmp_tmp_msg_0_0.speed_units = 209U;
    tmp_tmp_msg_0_0.popup_period = 48511U;
    tmp_tmp_msg_0_0.popup_duration = 57206U;
    tmp_tmp_msg_0_0.flags = 111U;
    tmp_tmp_msg_0_0.custom.assign("TLINBIFNYZPSTOZTQRUSJACREPSXRXUXCVKWPIYEWLLDWANLNQLFVIBOMDHAOKFGOUZMEFSHQDSAZUYTUVBCDWLNPCAXDRDKQJKGLVTOFJMEBKOMOXJEMPMJWHWF");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.192714714705);
    msg.setSource(61297U);
    msg.setSourceEntity(65U);
    msg.setDestination(37333U);
    msg.setDestinationEntity(128U);
    msg.base_lat = 0.599846500354;
    msg.base_lon = 0.780788105629;
    msg.base_time = 0.513287551196;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.716929960194);
    msg.setSource(51274U);
    msg.setSourceEntity(87U);
    msg.setDestination(37842U);
    msg.setDestinationEntity(71U);
    msg.base_lat = 0.51048973483;
    msg.base_lon = 0.951321662708;
    msg.base_time = 0.426639667796;
    const char tmp_msg_0[] = {-42, 111, -43, -33, 11, 18, 46, -118, 26, -8, 58, -120, 101, 38, -44, -22, -4, 32};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.474155930652);
    msg.setSource(8444U);
    msg.setSourceEntity(61U);
    msg.setDestination(21136U);
    msg.setDestinationEntity(78U);
    msg.base_lat = 0.161649350418;
    msg.base_lon = 0.0768754757656;
    msg.base_time = 0.979197007012;
    const char tmp_msg_0[] = {-43, -124, -4, 121, 68, 109, -70, 107, -108, -45, -13, 39, 85, -45, 57, 97, 125, -70, -28, 11, 113, -76, 33, -11, -117, 20, 72, 45, 53, 54, 99, 12, 90, 48, 122, 5, 91, 85, -28, 52, -80, 123, -55, -14, 95, -69, -11, -27, 61, 97, 23, -114, 122, -44, 125, 79, -61, -99, -56, 12, -77, -47, 30, 97, 64, -69, 78, -40, -125, 62, 15, -13, 19, -121, -65, -126, 1, -3, 36, -32, -32, 120, 22, 99, 101, -14, -83, -23, 126, 71, 80, 76, -90, 36, 22, 121, 41, -76, 85, -65, -22, -123, 72, 83, -95, 99, 112, -3, -40, -18, 95, -78, 113, 3, 29, 45, 121, 55, -19, -35, 6, -54, -125, 42, 50, 90, 10, -84, -51, 87, 104, 45, -126, 17, -4, 35, 32, 51, -92, -39, 54, -63, 63, 25, 34, 10, 33, 79, -105, -104, -8, 121, 58, -115, -81, -69, 41, 70, 55, 11, 38, -52, 13, -62, -65, 70, -30, 68, -127, 25, -49};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.412332673953);
    msg.setSource(40967U);
    msg.setSourceEntity(224U);
    msg.setDestination(26509U);
    msg.setDestinationEntity(53U);
    msg.base_lat = 0.413192404974;
    msg.base_lon = 0.734192560124;
    msg.base_time = 0.600330739461;
    const char tmp_msg_0[] = {-84, 7, 117, -73, -67, -71, -54, 43, -121, 119, -118, -48, 93, -52, -73, -50, 27, 23, 63, -15, 65, -37, 36, 2, 13, -121, 77, -89, -67, 13, -76, 83, -22, -84, -123, 89, -36, -58, 76, -17, -62, -39, -47, 67, -17, -46, 44, 33, 124, -4, 38, 5, -32, 120, -51, 119, 118, 103, 50, -12, 3, 2, 90, -72, 113, -2, 68, -23, -56, -5, 8, -10, -10, -58, 117, 91, -8, -95, -59, 4, -83, 50, -64, 38, -71, -3, 69, 93, 108, -105, 90, -120, 51, 105, -1, 3, 78, 96, 38, 43, 101, -67, 100, 4, 35, -110, -71, -74, -73, 108, -105, 50, -55, 34, -71, -4, 118, 13, 74, 39, 94, 84, -78, -18, -102, -80, -58, -50, 16, 119, 118, -7, 49, -30, 29, 120, 42, -77, 108, 1, -15, 101, -49, 60, 22, 52, 83, -75, -33, -8, 89, 10, -111, -126, -22, 72, 20, 118, 70, 87, -69, 36, -23, -93, 92, -36, 62, 2, -124, -83, -75, -81, -87, -73, 75, -123, 84, 72, -90, -18, -66, -13, 6, 38, -50, 107, -51, -108, -69, -31, 123, 43, 73, 107, -8, 115, 19, 119, -79, -125, -2, 28, -22, 63, 97, 45, -79, -21, 64, 88, -78, -106, -33, -65, -116, -48, -9, 107, -68, -113, -67, 98, -116, 25, -60, 97, 109, 12, -20, 123, -18, -44, -79, 31, 30, 63, 6, 49, 18, 99, 111, -25, -97, 54, 12, 98, 99, 33, 26, -70, -125, 27};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.857768287902);
    msg.setSource(33044U);
    msg.setSourceEntity(165U);
    msg.setDestination(28732U);
    msg.setDestinationEntity(112U);
    msg.sys_id = 37728U;
    msg.priority = -80;
    msg.x = -17356;
    msg.y = -28320;
    msg.z = 11080;
    msg.t = -23519;
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 120U;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.985097536844);
    msg.setSource(61689U);
    msg.setSourceEntity(144U);
    msg.setDestination(4203U);
    msg.setDestinationEntity(59U);
    msg.sys_id = 49098U;
    msg.priority = 27;
    msg.x = -32734;
    msg.y = 21244;
    msg.z = -3487;
    msg.t = 29230;
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 69U;
    tmp_msg_0.mask = 1274052719U;
    tmp_msg_0.scope_ref = 1395734704U;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.135128022302);
    msg.setSource(16884U);
    msg.setSourceEntity(201U);
    msg.setDestination(34346U);
    msg.setDestinationEntity(51U);
    msg.sys_id = 14502U;
    msg.priority = 117;
    msg.x = 9537;
    msg.y = 3884;
    msg.z = 9683;
    msg.t = 31656;
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.196836236481;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.141564120407);
    msg.setSource(20925U);
    msg.setSourceEntity(237U);
    msg.setDestination(1155U);
    msg.setDestinationEntity(100U);
    msg.req_id = 57676U;
    msg.type = 187U;
    msg.max_size = 19019U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.720201304952;
    tmp_msg_0.base_lon = 0.521137783969;
    tmp_msg_0.base_time = 0.900389995281;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 44858U;
    tmp_tmp_msg_0_0.destination = 65110U;
    tmp_tmp_msg_0_0.timeout = 0.142458336648;
    IMC::ControlLoops tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.enable = 57U;
    tmp_tmp_tmp_msg_0_0_0.mask = 67520617U;
    tmp_tmp_tmp_msg_0_0_0.scope_ref = 1533143562U;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.555986734251);
    msg.setSource(30438U);
    msg.setSourceEntity(135U);
    msg.setDestination(39553U);
    msg.setDestinationEntity(17U);
    msg.req_id = 63126U;
    msg.type = 168U;
    msg.max_size = 7851U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0224698792942;
    tmp_msg_0.base_lon = 0.91781753708;
    tmp_msg_0.base_time = 0.203502593809;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.675987412519);
    msg.setSource(17990U);
    msg.setSourceEntity(221U);
    msg.setDestination(49633U);
    msg.setDestinationEntity(206U);
    msg.req_id = 33161U;
    msg.type = 67U;
    msg.max_size = 6562U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.755118073931;
    tmp_msg_0.base_lon = 0.753674446554;
    tmp_msg_0.base_time = 0.675156226108;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.722739003839);
    msg.setSource(16873U);
    msg.setSourceEntity(74U);
    msg.setDestination(49734U);
    msg.setDestinationEntity(134U);
    msg.original_source = 60341U;
    msg.destination = 43575U;
    msg.timeout = 0.886424345763;
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 92U;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.0247235151527);
    msg.setSource(31724U);
    msg.setSourceEntity(252U);
    msg.setDestination(18745U);
    msg.setDestinationEntity(202U);
    msg.original_source = 22195U;
    msg.destination = 64683U;
    msg.timeout = 0.869919844599;
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.409471466202;
    tmp_msg_0.lon = 0.381586947492;
    tmp_msg_0.height = 0.805059902693;
    tmp_msg_0.x = 0.755974437137;
    tmp_msg_0.y = 0.891743417325;
    tmp_msg_0.z = 0.58418880661;
    tmp_msg_0.phi = 0.24624298187;
    tmp_msg_0.theta = 0.937488095331;
    tmp_msg_0.psi = 0.539323135857;
    tmp_msg_0.u = 0.616881903365;
    tmp_msg_0.v = 0.136934526966;
    tmp_msg_0.w = 0.570329648973;
    tmp_msg_0.vx = 0.102621768591;
    tmp_msg_0.vy = 0.840587426917;
    tmp_msg_0.vz = 0.612927610146;
    tmp_msg_0.p = 0.226809685182;
    tmp_msg_0.q = 0.187764174656;
    tmp_msg_0.r = 0.833135472807;
    tmp_msg_0.depth = 0.822029569098;
    tmp_msg_0.alt = 0.721259400943;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.880754243821);
    msg.setSource(56283U);
    msg.setSourceEntity(210U);
    msg.setDestination(54202U);
    msg.setDestinationEntity(155U);
    msg.original_source = 18364U;
    msg.destination = 42847U;
    msg.timeout = 0.171827012682;
    IMC::AcousticSystemsQuery tmp_msg_0;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.354692900244);
    msg.setSource(57595U);
    msg.setSourceEntity(28U);
    msg.setDestination(47549U);
    msg.setDestinationEntity(110U);
    msg.type = 33U;
    msg.comm_interface = 40141U;
    msg.model = 32018U;
    msg.list.assign("FAAOKEXDWMHNTUYJRASEXMWUGMWOSKMTIRUTFWFETBSDCSVTQKJKUPJHKQTKAEIIOYEGXOPVUVUFNRNOWDJSRZBWEDDFILGMRUF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.275877628506);
    msg.setSource(33352U);
    msg.setSourceEntity(240U);
    msg.setDestination(38936U);
    msg.setDestinationEntity(8U);
    msg.type = 64U;
    msg.comm_interface = 5537U;
    msg.model = 46761U;
    msg.list.assign("ZRJWTAEEIPLDNCUBHWVULMSPMZOQCCCVPBIIOZFTQYBQAFITGEGNPQSGWRKWAXZRQJCOSDFXOYXZSDOJFKSTYGZBHACYTXNNVUKJSNCXNXQKOHSMCHYUYTRWTUWVIWPLVJVXYEJDPQGRBEUAQHXHAOMZRTRANXYHIHJOCAELVKEDNBXUGEWIPYSIKBZLKNIDJPLQGLDOFRSMILCERFGPVLYDSAFFNKBJUZQPVHMMRTWHADVKTEUBLJMFM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.459408338091);
    msg.setSource(36357U);
    msg.setSourceEntity(141U);
    msg.setDestination(32010U);
    msg.setDestinationEntity(52U);
    msg.type = 160U;
    msg.comm_interface = 20701U;
    msg.model = 35401U;
    msg.list.assign("HADPJEPUDOFZVGIZETRUOMTKILJHVJZTKJOYOGVKTHDYEGEZAXOMVVZIZHWFMLDAWKLMCDBPBRTQRCMAJUPSQNOSCLYHQAAFZVBXRSXKDLPBSLWQHTGXQWIIYOJQICFNGGFVFLYNBQTWFSRVNIMSAXMXTZAUCTJCHZKGVOCRBPXSUXKCZGEDGQEJPWYENIGNBWLWJAYEPSDSPYMQARURNRFMCVHNQWJTLUOXX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.898501059504);
    msg.setSource(4834U);
    msg.setSourceEntity(139U);
    msg.setDestination(9076U);
    msg.setDestinationEntity(69U);
    msg.type = 153U;
    msg.req_id = 3801141927U;
    msg.ttl = 58922U;
    msg.code = 148U;
    msg.destination.assign("RURQZLWPYCGREMFYZOJXAGJEHODGWDTKLBEPKNQNENFZKEUVQMMNYAIGOCACMSXYTUNCUKNVSPJJSIBORCIYZFEMVTLSUOPWKWPDBMSARTCZPITYFYGJHQYWHLHBKLKFTPADPHTWXQREQSKJWIOXPBUASDNNDUOJRTBCQBBWQIXLBEDGQKVEYUVABZXNRIXZHNWHGFDVKMSVXROUFID");
    msg.source.assign("JMMEWKOJKQYATWUBMTIEDPZAADVPFJTNOKVHHSKUBPGNWGFZYTWNLPSXEWCNBJOOMLZURIDSHDFHGWKCRVWYNISVMXGWIWEWHKVXHOVCRJUVPZNMBYTFCVXCRQLAKQGRFDEEQTJNYTEFNMUYZZGSCXIEAXBRDHTJSHUPPXICQLOGQRBUISKYDZGPXFDNCTMHARFOSBLXBCYGOAASBMAZJROPE");
    msg.acknowledge = 154U;
    msg.status = 173U;
    const char tmp_msg_0[] = {-18, -55, 18, 61, -123, -119, -26, 71, -78, 123, 100, 101, -117, 16, -80, 87, -61, 99, 101, -109, 16, 7, 5, -17, -45, -47, 53, 101, 72, 75, 112, 39};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.475378880892);
    msg.setSource(5297U);
    msg.setSourceEntity(58U);
    msg.setDestination(25140U);
    msg.setDestinationEntity(159U);
    msg.type = 100U;
    msg.req_id = 1009336147U;
    msg.ttl = 57784U;
    msg.code = 10U;
    msg.destination.assign("BSFNAGVEREXVWPJQIICYETJWHWMVPDCJYHGFYGWDQBGQYKHIYUIAMDTJMVYMMLCVBKWRDTONAX");
    msg.source.assign("XMTWVQGPQUSLELOXWODCLDQSXYIRCCMDVNINWMRKTTVJG");
    msg.acknowledge = 248U;
    msg.status = 79U;
    const char tmp_msg_0[] = {-25, -104, -90, -91, -38, -46, 22, 1, -110, 35, -47, -73, 92, 102, -78, -95, -23, 5, 56, -3, -122, 59, 107, 54, -3, 67, 76, -90, -62, 77, 62, 62, 68, -87, 84, 92};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.554973648104);
    msg.setSource(57171U);
    msg.setSourceEntity(20U);
    msg.setDestination(58838U);
    msg.setDestinationEntity(155U);
    msg.type = 39U;
    msg.req_id = 1351547144U;
    msg.ttl = 39850U;
    msg.code = 81U;
    msg.destination.assign("REGPMJLEWISBJUSNCBZLAVBQJFGPUCNWMTVAUPQXLFMM");
    msg.source.assign("ZTYLKVKGWBDLQRSOSLESFTQENHQPPUHWCDBEGHTCVKDLYKXZMOCKZWYQBVZUYGAIXXNPAMJCWOXXKUEURCJOAHRFDYUIFRDGGFOIORCEMVXFSLIRFFZPJBSSTGJBDOPVHYRMMJAQTBQFWQRGFHWKSEVSUECBPAFPGDHPNBWHXQTCPEUYOLKKBLIORLZSEAW");
    msg.acknowledge = 193U;
    msg.status = 0U;
    const char tmp_msg_0[] = {-7, -127, -42, -77, -23, -68, 25, 73, 64, -41, -70, -117, 35, 44, -124, 59, 59, 124, -119, 16, 35, 63, -54, 42, 4, 6, -105, -20, -67, 97, 34, -50, 68, -98, -21, 8, -84, 51, 41, -35, -9, -14, -49, -44, -47, 89, -124, 18, -3, -94, 68, 91, -11, -102, 114, 76, -12, 74, -123, 123, 50, -104, -89, 40, -92, 66, -10, -124, -101, 0, -112, 112, -12, -34, -110, -46, 52, -117, -43, -72, -73, 6, 121, 102, 31, -87, 72, 98, 9, -22, 73, -55, -2, 81, 9, 96, -5, -19, -96, -14, 34, -38, 38, -77, -103, -37, -38, 73, 65, -44, -86, 52, -114, -59, 78, 61, -75, 12, -78, 104, -11, -72, -94, 77, -59, 92, 45, -122, -117, 39, 104, 92, 111, -87, -63, -111, 67, 58, 97, 32, -41, -106, -75, -19, 39, -83, -87, -116, -94, 4, 62, 126, -117, -23, -21, 54};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.743268952293);
    msg.setSource(25912U);
    msg.setSourceEntity(175U);
    msg.setDestination(24630U);
    msg.setDestinationEntity(191U);
    msg.id = 187U;
    msg.range = 0.78180392181;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.571587383269);
    msg.setSource(31750U);
    msg.setSourceEntity(179U);
    msg.setDestination(36778U);
    msg.setDestinationEntity(136U);
    msg.id = 132U;
    msg.range = 0.55371994423;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.92215549983);
    msg.setSource(64694U);
    msg.setSourceEntity(187U);
    msg.setDestination(32564U);
    msg.setDestinationEntity(41U);
    msg.id = 187U;
    msg.range = 0.740175108072;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.885139897274);
    msg.setSource(9667U);
    msg.setSourceEntity(70U);
    msg.setDestination(11506U);
    msg.setDestinationEntity(180U);
    msg.beacon.assign("IBIMFRDCFSBGKPKIVWLMRD");
    msg.lat = 0.471941867967;
    msg.lon = 0.716552671392;
    msg.depth = 0.0862542642805;
    msg.query_channel = 12U;
    msg.reply_channel = 66U;
    msg.transponder_delay = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.683161305679);
    msg.setSource(64939U);
    msg.setSourceEntity(4U);
    msg.setDestination(30342U);
    msg.setDestinationEntity(176U);
    msg.beacon.assign("ZVCILBTNNTHLNKYDWOXCCYHJQAUFUOPUAHEUZPRFFZKTTNVVMTJUIIZGDBPGPESLYEQHHQBBJFGSIPFBENDKCYWMBWDNWUWXWEYLJXJMAINEIHSSHKJMFCZXU");
    msg.lat = 0.953706738328;
    msg.lon = 0.22210686172;
    msg.depth = 0.804101713166;
    msg.query_channel = 184U;
    msg.reply_channel = 222U;
    msg.transponder_delay = 58U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.104092080077);
    msg.setSource(49541U);
    msg.setSourceEntity(47U);
    msg.setDestination(50422U);
    msg.setDestinationEntity(183U);
    msg.beacon.assign("FXUTTNGZQRVAQRRMKQFNLLRUTDXVVHZVWMZOYPFSOPEOKWUAWYN");
    msg.lat = 0.82202769667;
    msg.lon = 0.602446074334;
    msg.depth = 0.308284094555;
    msg.query_channel = 181U;
    msg.reply_channel = 205U;
    msg.transponder_delay = 124U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.0519836923773);
    msg.setSource(61862U);
    msg.setSourceEntity(195U);
    msg.setDestination(33102U);
    msg.setDestinationEntity(135U);
    msg.op = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.68249249721);
    msg.setSource(60967U);
    msg.setSourceEntity(196U);
    msg.setDestination(282U);
    msg.setDestinationEntity(21U);
    msg.op = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.897775186005);
    msg.setSource(17447U);
    msg.setSourceEntity(223U);
    msg.setDestination(64592U);
    msg.setDestinationEntity(157U);
    msg.op = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.682581707327);
    msg.setSource(46355U);
    msg.setSourceEntity(93U);
    msg.setDestination(2957U);
    msg.setDestinationEntity(71U);
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.700180430169;
    tmp_msg_0.sys_src = 9058U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.795249519949);
    msg.setSource(65034U);
    msg.setSourceEntity(8U);
    msg.setDestination(53310U);
    msg.setDestinationEntity(229U);
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.866820269453;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.395575063125);
    msg.setSource(27870U);
    msg.setSourceEntity(190U);
    msg.setDestination(44029U);
    msg.setDestinationEntity(46U);
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.963682756081;
    tmp_msg_0.lon = 0.845539115883;
    tmp_msg_0.z = 0.948084628492;
    tmp_msg_0.z_units = 36U;
    tmp_msg_0.radius = 0.201798773712;
    tmp_msg_0.duration = 42502U;
    tmp_msg_0.speed = 0.720148003271;
    tmp_msg_0.speed_units = 187U;
    tmp_msg_0.popup_period = 5184U;
    tmp_msg_0.popup_duration = 20740U;
    tmp_msg_0.flags = 221U;
    tmp_msg_0.custom.assign("EMERRBNITANJSJWZAJPCPVGTMTKWWFGAKOZFNMNXKEEWVNOWBNPMEFPIYSMULIDBZETZOAJZOBFOYJQKUIHGJJNJNIUBVAL");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.0899763745602);
    msg.setSource(59435U);
    msg.setSourceEntity(42U);
    msg.setDestination(37652U);
    msg.setDestinationEntity(72U);
    msg.op = 102U;
    msg.system.assign("RSDLGYSPRIVUGPOXBPMGIAFAVAQDFLMFFSXTMWGUZQHZXIQRLKCTLZQHPOVNLDMUWOAKQJOBEUKGHTTAETYCBHOFCNFAANUNYLFKXZVWMCFHCRNMOKXBCWXCHHRNQPJHQJDKDWGIIZGOTUMAGZIYYJXFBSVJXKAY");
    msg.range = 0.326062653625;
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("KYCREJUUEZQGRPMXLIUOJYPAFWMHNAANSIGSCFFLVEQTBMZILNTHHLGEYBGJRTBPWMLTIIRRKIVQPHBFZMRTCNQLHKQDYZAB");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.98254059051);
    msg.setSource(29445U);
    msg.setSourceEntity(39U);
    msg.setDestination(36002U);
    msg.setDestinationEntity(145U);
    msg.op = 64U;
    msg.system.assign("USHTGZGOHDJLTJPWBJYOADVYEFZFMXNIZDVENXWSCPBAKOBQTQE");
    msg.range = 0.0706751372945;
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 18U;
    tmp_msg_0.numsamples = 170U;
    IMC::ProfileSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.depth = 29091U;
    tmp_tmp_msg_0_0.avg = 0.0265299063656;
    tmp_msg_0.samples.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.lat = 0.239906440554;
    tmp_msg_0.lon = 0.888775588117;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.12256882395);
    msg.setSource(64979U);
    msg.setSourceEntity(111U);
    msg.setDestination(3035U);
    msg.setDestinationEntity(39U);
    msg.op = 19U;
    msg.system.assign("GKNONMDVTMJDCAEDLXANPPEXLWHYMHSNJQXMEVREEHOLHQZRFTLHPLSYUGZNDYRKOXIJYKVCSORNZMWBHGCQJHBNFKZCAUFBTAMVSUMFOUOWNGXVDRSMJLCUTKKXTZVCWAHWUCQIIBYPWTBTXBSWLZDFQAKPWZZRSZIMQQFKVOTEVLVL");
    msg.range = 0.360103440999;
    IMC::Redox tmp_msg_0;
    tmp_msg_0.value = 0.693770634299;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.105397166491);
    msg.setSource(49753U);
    msg.setSourceEntity(112U);
    msg.setDestination(59928U);
    msg.setDestinationEntity(198U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.958397746124);
    msg.setSource(4996U);
    msg.setSourceEntity(61U);
    msg.setDestination(48047U);
    msg.setDestinationEntity(220U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.134972530468);
    msg.setSource(60989U);
    msg.setSourceEntity(154U);
    msg.setDestination(62090U);
    msg.setDestinationEntity(153U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.480786018707);
    msg.setSource(23323U);
    msg.setSourceEntity(222U);
    msg.setDestination(40082U);
    msg.setDestinationEntity(7U);
    msg.list.assign("MPYWWLXYVDYKKAUES");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.866169971554);
    msg.setSource(14751U);
    msg.setSourceEntity(237U);
    msg.setDestination(63033U);
    msg.setDestinationEntity(7U);
    msg.list.assign("MEJNVQSUVBYETINVEKUDKWKZWGQVBLYFZVPFXVEQYASLZMGFODGGKVTRPEDQKSUVZXCBRGOCBAYAUGTJNDJOYLJCXXSHMWZBHEDATTRFLNRCFTWIYHWJDIHWMAOGUAFDKOSBGNLRFVILSKOHBZJAVCAUQCLJCFZKQZTTNPDH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.196864411962);
    msg.setSource(57461U);
    msg.setSourceEntity(163U);
    msg.setDestination(12502U);
    msg.setDestinationEntity(71U);
    msg.list.assign("VMTRAGKTGRBJLEVXJFYRAKGAJCPUNMFTFWIJRW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.727855481723);
    msg.setSource(39820U);
    msg.setSourceEntity(187U);
    msg.setDestination(54841U);
    msg.setDestinationEntity(233U);
    msg.peer.assign("MQRXAYPULNXZOBFHTEKJPTPCPKGDNFFAQCDVHOJJWWIEJWXNPIAREDSRZDLGZGGFSYYDXUQEULAMHCKIKEHIWOVRJUFPJRPHUAZGZDTLZTUDMQICTLBSUE");
    msg.rssi = 0.976958918814;
    msg.integrity = 42033U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.499429955142);
    msg.setSource(35948U);
    msg.setSourceEntity(145U);
    msg.setDestination(43882U);
    msg.setDestinationEntity(12U);
    msg.peer.assign("XSWXBQRMEELGBFYAXGVUWPGWOGSYFWDPNOUVXUYAASRHKKXCGNCKQFHWSPITCCMUYZJCYSXITAAYERFZRIJVLL");
    msg.rssi = 0.654749717405;
    msg.integrity = 44207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.804253198075);
    msg.setSource(45892U);
    msg.setSourceEntity(59U);
    msg.setDestination(53339U);
    msg.setDestinationEntity(212U);
    msg.peer.assign("VHUWOTOIUQMRZHCORCPUISERZGGNRTTWSUSJZKTFKTCYHKPJVSOKHTALSBGSVAHOFVXDAJNIRPYOMNLVIRLRYGDENUJPYXLXFCRBBUDZHCWWVPQEYJUHTGSXXEQCMGBDFLCEVGXHKRMZHNSGJAQWFPRPQJSMWJIZLVGMWDOYYEXECFMVLPDZHFTNXTGWOPKMKIWWBIINCQQBYFNEAMNDYXFFALAIYBZNQAOSUKKUIKVT");
    msg.rssi = 0.304422007997;
    msg.integrity = 62245U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.669043698937);
    msg.setSource(22031U);
    msg.setSourceEntity(79U);
    msg.setDestination(64213U);
    msg.setDestinationEntity(128U);
    msg.req_id = 29237U;
    msg.destination.assign("CXENVVNTFKADELBSVFYVHTOMURTJSHOQWEEIVDRDYHPDCDBBGURQUXYOCEAIZSOVQHULIYAHBBXGAVQITWWMYFSURGSNJCCHMGXLCFZXOZIEXEXLPPDZUPFSKSJNRSMOKUPRNJWAPQJNNOPWZCUYMGZOPJHFTGARNMLRZZXDYGPQLKKEQNKUVIZRYHWKLLHIAUBJXCKOKIMWBGBIJAZFGWEMCJOQSTDVFLAGPHSJAIVDCETLXYMQ");
    msg.timeout = 0.220916486884;
    msg.range = 0.2200982401;
    msg.type = 92U;
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.567835999815;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.579844986613);
    msg.setSource(57899U);
    msg.setSourceEntity(170U);
    msg.setDestination(10547U);
    msg.setDestinationEntity(64U);
    msg.req_id = 36801U;
    msg.destination.assign("OPGHPHQZZOVLUZDJPTQVGNXYDHWQFIQHPZXOTIVYKTQFARESTSPLBMBJRXOLIADNJCXXSWITNGAEWBFEIZVLMSZLLKYYBAUTYMMUDLTWSNUEKSSAAPZMFRDOMRNMZTVJCHNRWKSJJJHEVUVCHI");
    msg.timeout = 0.483884620545;
    msg.range = 0.905102919426;
    msg.type = 168U;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.891883389708;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.683070111024);
    msg.setSource(36668U);
    msg.setSourceEntity(224U);
    msg.setDestination(16233U);
    msg.setDestinationEntity(199U);
    msg.req_id = 45628U;
    msg.destination.assign("UZAQLWQPCBXEEYOPWMECIFVRSJDXCKIWLQFVFRKSGJJNXVEHVGFDRRFZOAXOJMBXAYXPVSTKAQPKONKWODRSP");
    msg.timeout = 0.976145561928;
    msg.range = 0.539638209583;
    msg.type = 183U;
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.911480425583;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.61107809081);
    msg.setSource(27120U);
    msg.setSourceEntity(26U);
    msg.setDestination(12758U);
    msg.setDestinationEntity(134U);
    msg.req_id = 8406U;
    msg.type = 183U;
    msg.status = 228U;
    msg.info.assign("PZPBKGPAUNQZTDCKPIQTNYAHWJKUUYJHMRTIZQJSZVU");
    msg.range = 0.0874595736117;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.712795696075);
    msg.setSource(21990U);
    msg.setSourceEntity(204U);
    msg.setDestination(29852U);
    msg.setDestinationEntity(237U);
    msg.req_id = 64252U;
    msg.type = 49U;
    msg.status = 109U;
    msg.info.assign("RBSOJIUNCMLMDCJALFTSYQOVDTEPLWQHESHPCGOJEGXOQFAEFMQIJXA");
    msg.range = 0.201269703224;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.525215282252);
    msg.setSource(2686U);
    msg.setSourceEntity(245U);
    msg.setDestination(10730U);
    msg.setDestinationEntity(92U);
    msg.req_id = 34093U;
    msg.type = 8U;
    msg.status = 131U;
    msg.info.assign("WOVDJLIGEMEDSQIIUYJONONWAGKLDTYDTASHIWBFWLBLCSNRLPNKICIYLPSPCFIIUDYPHZUOGQHLSJHWIEJRZOGUQZTQNUMVXFVGQXEXYNCKGRPQFFPEQKYKPYDXBCUPWFRYVOALFKEOAYTKPS");
    msg.range = 0.437138679758;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.744141766987);
    msg.setSource(11478U);
    msg.setSourceEntity(23U);
    msg.setDestination(39747U);
    msg.setDestinationEntity(62U);
    msg.value = -14572;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.505729452007);
    msg.setSource(58481U);
    msg.setSourceEntity(182U);
    msg.setDestination(65053U);
    msg.setDestinationEntity(159U);
    msg.value = 16213;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.523124997528);
    msg.setSource(51372U);
    msg.setSourceEntity(221U);
    msg.setDestination(41033U);
    msg.setDestinationEntity(160U);
    msg.value = -18945;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.744901049225);
    msg.setSource(62441U);
    msg.setSourceEntity(242U);
    msg.setDestination(54530U);
    msg.setDestinationEntity(18U);
    msg.value = 0.0858504990014;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.54564647567);
    msg.setSource(21156U);
    msg.setSourceEntity(141U);
    msg.setDestination(57603U);
    msg.setDestinationEntity(137U);
    msg.value = 0.987184624404;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.489286644323);
    msg.setSource(21589U);
    msg.setSourceEntity(83U);
    msg.setDestination(57758U);
    msg.setDestinationEntity(230U);
    msg.value = 0.788329076098;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.21038949764);
    msg.setSource(10530U);
    msg.setSourceEntity(46U);
    msg.setDestination(916U);
    msg.setDestinationEntity(104U);
    msg.value = 0.320897953449;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.86976978843);
    msg.setSource(27898U);
    msg.setSourceEntity(95U);
    msg.setDestination(47159U);
    msg.setDestinationEntity(161U);
    msg.value = 0.766796112176;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.610766191526);
    msg.setSource(380U);
    msg.setSourceEntity(226U);
    msg.setDestination(57784U);
    msg.setDestinationEntity(141U);
    msg.value = 0.885921274392;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.819497711403);
    msg.setSource(45554U);
    msg.setSourceEntity(228U);
    msg.setDestination(29387U);
    msg.setDestinationEntity(153U);
    msg.validity = 25703U;
    msg.type = 4U;
    msg.utc_year = 1539U;
    msg.utc_month = 114U;
    msg.utc_day = 36U;
    msg.utc_time = 0.791006473277;
    msg.lat = 0.746050907872;
    msg.lon = 0.644831296136;
    msg.height = 0.551245789821;
    msg.satellites = 164U;
    msg.cog = 0.777193851562;
    msg.sog = 0.492449379942;
    msg.hdop = 0.208933243472;
    msg.vdop = 0.0938054464746;
    msg.hacc = 0.0603729624435;
    msg.vacc = 0.0622349385315;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.0637833377482);
    msg.setSource(7422U);
    msg.setSourceEntity(141U);
    msg.setDestination(43473U);
    msg.setDestinationEntity(179U);
    msg.validity = 1706U;
    msg.type = 118U;
    msg.utc_year = 57194U;
    msg.utc_month = 0U;
    msg.utc_day = 111U;
    msg.utc_time = 0.0138941688872;
    msg.lat = 0.588824650554;
    msg.lon = 0.766144498205;
    msg.height = 0.679808900917;
    msg.satellites = 213U;
    msg.cog = 0.962691026402;
    msg.sog = 0.857884490103;
    msg.hdop = 0.949221748427;
    msg.vdop = 0.524399653165;
    msg.hacc = 0.211818334061;
    msg.vacc = 0.743244528733;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.979913188986);
    msg.setSource(61233U);
    msg.setSourceEntity(234U);
    msg.setDestination(46101U);
    msg.setDestinationEntity(10U);
    msg.validity = 65533U;
    msg.type = 146U;
    msg.utc_year = 47843U;
    msg.utc_month = 132U;
    msg.utc_day = 225U;
    msg.utc_time = 0.435167251336;
    msg.lat = 0.984534880759;
    msg.lon = 0.276007088261;
    msg.height = 0.287979745246;
    msg.satellites = 1U;
    msg.cog = 0.487422779431;
    msg.sog = 0.627845248104;
    msg.hdop = 0.416483697103;
    msg.vdop = 0.0277977753746;
    msg.hacc = 0.496709582987;
    msg.vacc = 0.29286659863;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.722045184498);
    msg.setSource(29515U);
    msg.setSourceEntity(199U);
    msg.setDestination(53635U);
    msg.setDestinationEntity(150U);
    msg.time = 0.335959995722;
    msg.phi = 0.181298697853;
    msg.theta = 0.0793262503489;
    msg.psi = 0.335519632693;
    msg.psi_magnetic = 0.712332240075;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.887692852598);
    msg.setSource(47671U);
    msg.setSourceEntity(172U);
    msg.setDestination(8644U);
    msg.setDestinationEntity(249U);
    msg.time = 0.883969282946;
    msg.phi = 0.961813401718;
    msg.theta = 0.350764752373;
    msg.psi = 0.736350848717;
    msg.psi_magnetic = 0.920746337729;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.994756493971);
    msg.setSource(54996U);
    msg.setSourceEntity(200U);
    msg.setDestination(17459U);
    msg.setDestinationEntity(233U);
    msg.time = 0.483064659038;
    msg.phi = 0.768930153644;
    msg.theta = 0.839714872052;
    msg.psi = 0.511374688928;
    msg.psi_magnetic = 0.518557910129;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.0332983118052);
    msg.setSource(6603U);
    msg.setSourceEntity(114U);
    msg.setDestination(17258U);
    msg.setDestinationEntity(36U);
    msg.time = 0.317788004304;
    msg.x = 0.901968755999;
    msg.y = 0.774948130262;
    msg.z = 0.30029924187;
    msg.timestep = 0.350640695592;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.771063040666);
    msg.setSource(24365U);
    msg.setSourceEntity(128U);
    msg.setDestination(2393U);
    msg.setDestinationEntity(165U);
    msg.time = 0.896419256344;
    msg.x = 0.26426895699;
    msg.y = 0.343284992141;
    msg.z = 0.72752729819;
    msg.timestep = 0.380892164529;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.734597786519);
    msg.setSource(50999U);
    msg.setSourceEntity(34U);
    msg.setDestination(30683U);
    msg.setDestinationEntity(62U);
    msg.time = 0.0126719722962;
    msg.x = 0.960758867706;
    msg.y = 0.56363534363;
    msg.z = 0.0026008281302;
    msg.timestep = 0.342765751676;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.357866804456);
    msg.setSource(57839U);
    msg.setSourceEntity(232U);
    msg.setDestination(38046U);
    msg.setDestinationEntity(85U);
    msg.time = 0.971578701134;
    msg.x = 0.347483308888;
    msg.y = 0.586234645083;
    msg.z = 0.866255568135;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.192805821205);
    msg.setSource(25568U);
    msg.setSourceEntity(194U);
    msg.setDestination(15467U);
    msg.setDestinationEntity(203U);
    msg.time = 0.539041455752;
    msg.x = 0.553088917742;
    msg.y = 0.372798959195;
    msg.z = 0.484504055752;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.165904033836);
    msg.setSource(41681U);
    msg.setSourceEntity(82U);
    msg.setDestination(55439U);
    msg.setDestinationEntity(112U);
    msg.time = 0.604137737912;
    msg.x = 0.272803300864;
    msg.y = 0.448011953944;
    msg.z = 0.283233395455;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.5007082003);
    msg.setSource(39524U);
    msg.setSourceEntity(248U);
    msg.setDestination(27409U);
    msg.setDestinationEntity(246U);
    msg.time = 0.12238110764;
    msg.x = 0.0652772468592;
    msg.y = 0.953530093365;
    msg.z = 0.67374202721;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.364747353768);
    msg.setSource(37140U);
    msg.setSourceEntity(94U);
    msg.setDestination(50633U);
    msg.setDestinationEntity(91U);
    msg.time = 0.531880085786;
    msg.x = 0.414888161429;
    msg.y = 0.297551620533;
    msg.z = 0.862886293486;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.0354557514828);
    msg.setSource(27899U);
    msg.setSourceEntity(211U);
    msg.setDestination(61789U);
    msg.setDestinationEntity(36U);
    msg.time = 0.94739905853;
    msg.x = 0.635583829732;
    msg.y = 0.151735996345;
    msg.z = 0.10254432643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.191170827514);
    msg.setSource(9477U);
    msg.setSourceEntity(230U);
    msg.setDestination(47777U);
    msg.setDestinationEntity(18U);
    msg.time = 0.184297040507;
    msg.x = 0.197455488291;
    msg.y = 0.789785120949;
    msg.z = 0.280604939938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.596054962635);
    msg.setSource(26010U);
    msg.setSourceEntity(45U);
    msg.setDestination(48950U);
    msg.setDestinationEntity(188U);
    msg.time = 0.428289157879;
    msg.x = 0.473468402284;
    msg.y = 0.599402268074;
    msg.z = 0.485071254749;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.958480532073);
    msg.setSource(64767U);
    msg.setSourceEntity(172U);
    msg.setDestination(6474U);
    msg.setDestinationEntity(235U);
    msg.time = 0.684224063228;
    msg.x = 0.269490947265;
    msg.y = 0.77115506528;
    msg.z = 0.954685480993;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.729616531448);
    msg.setSource(54861U);
    msg.setSourceEntity(103U);
    msg.setDestination(48146U);
    msg.setDestinationEntity(79U);
    msg.validity = 109U;
    msg.x = 0.554971818845;
    msg.y = 0.333988028434;
    msg.z = 0.618803098505;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.641584783942);
    msg.setSource(3184U);
    msg.setSourceEntity(38U);
    msg.setDestination(41397U);
    msg.setDestinationEntity(45U);
    msg.validity = 13U;
    msg.x = 0.616991042722;
    msg.y = 0.772700820723;
    msg.z = 0.256706055133;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.790592294993);
    msg.setSource(51565U);
    msg.setSourceEntity(82U);
    msg.setDestination(14771U);
    msg.setDestinationEntity(180U);
    msg.validity = 175U;
    msg.x = 0.987699846306;
    msg.y = 0.403376039666;
    msg.z = 0.883487292382;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.841541222998);
    msg.setSource(55485U);
    msg.setSourceEntity(245U);
    msg.setDestination(30981U);
    msg.setDestinationEntity(51U);
    msg.validity = 163U;
    msg.x = 0.971407280258;
    msg.y = 0.233497886074;
    msg.z = 0.709517734399;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.0579406316167);
    msg.setSource(55625U);
    msg.setSourceEntity(245U);
    msg.setDestination(31733U);
    msg.setDestinationEntity(24U);
    msg.validity = 233U;
    msg.x = 0.189016877964;
    msg.y = 0.266896894725;
    msg.z = 0.736982407342;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.710137980524);
    msg.setSource(37827U);
    msg.setSourceEntity(196U);
    msg.setDestination(12464U);
    msg.setDestinationEntity(205U);
    msg.validity = 44U;
    msg.x = 0.0904250424114;
    msg.y = 0.720759206451;
    msg.z = 0.0558734955979;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.0377184966232);
    msg.setSource(1651U);
    msg.setSourceEntity(65U);
    msg.setDestination(3818U);
    msg.setDestinationEntity(58U);
    msg.time = 0.178249694393;
    msg.x = 0.0366531476348;
    msg.y = 0.103334111996;
    msg.z = 0.538397866597;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.326558654854);
    msg.setSource(52608U);
    msg.setSourceEntity(203U);
    msg.setDestination(51162U);
    msg.setDestinationEntity(202U);
    msg.time = 0.627266282974;
    msg.x = 0.680842373027;
    msg.y = 0.952200309266;
    msg.z = 0.0371583492799;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.854310601914);
    msg.setSource(50580U);
    msg.setSourceEntity(147U);
    msg.setDestination(46518U);
    msg.setDestinationEntity(184U);
    msg.time = 0.836232163916;
    msg.x = 0.937507726871;
    msg.y = 0.400983499489;
    msg.z = 0.538813097119;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.999171412647);
    msg.setSource(43585U);
    msg.setSourceEntity(94U);
    msg.setDestination(6909U);
    msg.setDestinationEntity(16U);
    msg.validity = 229U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.554374276516;
    tmp_msg_0.y = 0.79086046223;
    tmp_msg_0.z = 0.679087749959;
    tmp_msg_0.phi = 0.391840315903;
    tmp_msg_0.theta = 0.814177171669;
    tmp_msg_0.psi = 0.813823155198;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.0837132848341;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.513494666425);
    msg.setSource(2393U);
    msg.setSourceEntity(172U);
    msg.setDestination(52570U);
    msg.setDestinationEntity(177U);
    msg.validity = 94U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.149824523353;
    tmp_msg_0.y = 0.277088837448;
    tmp_msg_0.z = 0.428351742217;
    tmp_msg_0.phi = 0.765003307384;
    tmp_msg_0.theta = 0.123908407844;
    tmp_msg_0.psi = 0.99361080491;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.743210403764;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.96573848604);
    msg.setSource(39283U);
    msg.setSourceEntity(155U);
    msg.setDestination(30208U);
    msg.setDestinationEntity(36U);
    msg.validity = 47U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0297495574896;
    tmp_msg_0.beam_height = 0.561368163514;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.0110565588539;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.304376055299);
    msg.setSource(14286U);
    msg.setSourceEntity(53U);
    msg.setDestination(42421U);
    msg.setDestinationEntity(221U);
    msg.value = 0.0408289092207;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.71732791898);
    msg.setSource(7034U);
    msg.setSourceEntity(78U);
    msg.setDestination(46380U);
    msg.setDestinationEntity(133U);
    msg.value = 0.523995187916;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.132892704243);
    msg.setSource(32142U);
    msg.setSourceEntity(206U);
    msg.setDestination(59518U);
    msg.setDestinationEntity(40U);
    msg.value = 0.531836856378;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.168326199927);
    msg.setSource(65415U);
    msg.setSourceEntity(76U);
    msg.setDestination(2142U);
    msg.setDestinationEntity(231U);
    msg.value = 0.956216990478;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.886436556422);
    msg.setSource(18972U);
    msg.setSourceEntity(40U);
    msg.setDestination(9372U);
    msg.setDestinationEntity(73U);
    msg.value = 0.802355228936;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.529938246445);
    msg.setSource(12180U);
    msg.setSourceEntity(157U);
    msg.setDestination(1445U);
    msg.setDestinationEntity(211U);
    msg.value = 0.351324953059;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.824057425779);
    msg.setSource(32396U);
    msg.setSourceEntity(253U);
    msg.setDestination(7229U);
    msg.setDestinationEntity(80U);
    msg.value = 0.827820829986;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.571688463561);
    msg.setSource(42177U);
    msg.setSourceEntity(117U);
    msg.setDestination(42137U);
    msg.setDestinationEntity(139U);
    msg.value = 0.18585958397;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.0284670899678);
    msg.setSource(19533U);
    msg.setSourceEntity(193U);
    msg.setDestination(25667U);
    msg.setDestinationEntity(190U);
    msg.value = 0.290431978461;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.201845576365);
    msg.setSource(39015U);
    msg.setSourceEntity(119U);
    msg.setDestination(40762U);
    msg.setDestinationEntity(39U);
    msg.value = 0.82558037643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.113308239858);
    msg.setSource(37667U);
    msg.setSourceEntity(230U);
    msg.setDestination(56768U);
    msg.setDestinationEntity(154U);
    msg.value = 0.481234409391;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.585343789304);
    msg.setSource(49676U);
    msg.setSourceEntity(21U);
    msg.setDestination(56035U);
    msg.setDestinationEntity(8U);
    msg.value = 0.49789213253;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.184360663498);
    msg.setSource(56138U);
    msg.setSourceEntity(37U);
    msg.setDestination(14662U);
    msg.setDestinationEntity(168U);
    msg.value = 0.62862055432;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.664213480677);
    msg.setSource(45848U);
    msg.setSourceEntity(42U);
    msg.setDestination(43860U);
    msg.setDestinationEntity(225U);
    msg.value = 0.0984570242216;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.632499525035);
    msg.setSource(23662U);
    msg.setSourceEntity(169U);
    msg.setDestination(52174U);
    msg.setDestinationEntity(170U);
    msg.value = 0.931273712809;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.401895988635);
    msg.setSource(57698U);
    msg.setSourceEntity(8U);
    msg.setDestination(40747U);
    msg.setDestinationEntity(48U);
    msg.value = 0.383206379932;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.799370059103);
    msg.setSource(32736U);
    msg.setSourceEntity(20U);
    msg.setDestination(2434U);
    msg.setDestinationEntity(160U);
    msg.value = 0.48331457405;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.848514255644);
    msg.setSource(43544U);
    msg.setSourceEntity(231U);
    msg.setDestination(8457U);
    msg.setDestinationEntity(55U);
    msg.value = 0.365324922811;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.196706459685);
    msg.setSource(8787U);
    msg.setSourceEntity(13U);
    msg.setDestination(11982U);
    msg.setDestinationEntity(58U);
    msg.value = 0.00309241133338;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.91391375762);
    msg.setSource(12603U);
    msg.setSourceEntity(60U);
    msg.setDestination(30749U);
    msg.setDestinationEntity(129U);
    msg.value = 0.148478606558;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.409637330438);
    msg.setSource(3186U);
    msg.setSourceEntity(54U);
    msg.setDestination(8091U);
    msg.setDestinationEntity(149U);
    msg.value = 0.708385119221;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.15889526268);
    msg.setSource(8172U);
    msg.setSourceEntity(48U);
    msg.setDestination(55282U);
    msg.setDestinationEntity(187U);
    msg.value = 0.949614778819;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.760185229461);
    msg.setSource(20898U);
    msg.setSourceEntity(65U);
    msg.setDestination(52175U);
    msg.setDestinationEntity(245U);
    msg.value = 0.0500655222197;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.884563282585);
    msg.setSource(54132U);
    msg.setSourceEntity(92U);
    msg.setDestination(54131U);
    msg.setDestinationEntity(153U);
    msg.value = 0.814249748297;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.0274022965418);
    msg.setSource(21332U);
    msg.setSourceEntity(49U);
    msg.setDestination(24127U);
    msg.setDestinationEntity(102U);
    msg.direction = 0.675909936149;
    msg.speed = 0.468397923608;
    msg.turbulence = 0.72100386725;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.460935633226);
    msg.setSource(4661U);
    msg.setSourceEntity(92U);
    msg.setDestination(26062U);
    msg.setDestinationEntity(137U);
    msg.direction = 0.358793727985;
    msg.speed = 0.194729446915;
    msg.turbulence = 0.641778192968;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.780979498742);
    msg.setSource(11754U);
    msg.setSourceEntity(81U);
    msg.setDestination(29338U);
    msg.setDestinationEntity(81U);
    msg.direction = 0.0571090486495;
    msg.speed = 0.0687571739258;
    msg.turbulence = 0.491453863743;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.387033833245);
    msg.setSource(58325U);
    msg.setSourceEntity(33U);
    msg.setDestination(4835U);
    msg.setDestinationEntity(172U);
    msg.value = 0.541329658784;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.758988860052);
    msg.setSource(30201U);
    msg.setSourceEntity(88U);
    msg.setDestination(50914U);
    msg.setDestinationEntity(164U);
    msg.value = 0.0465817973954;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.672124188656);
    msg.setSource(2424U);
    msg.setSourceEntity(14U);
    msg.setDestination(17117U);
    msg.setDestinationEntity(117U);
    msg.value = 0.650706138935;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.873605863993);
    msg.setSource(55092U);
    msg.setSourceEntity(144U);
    msg.setDestination(12761U);
    msg.setDestinationEntity(71U);
    msg.value.assign("WYWCAKFUXVRTXRFAMXHBLMQCTJHHVOKWJXWTHJIZFXLIHXDCOQUWEOJEQBWKODIDFSRTMHEQRACIKUNYHNAGUNQUNBAVDVRSCLTMVBTVNWYPXTNFLXTMGBIFPRWXIGZMYJCSFQPCLXLUGDRUBVWKBLYDRQBPMEOLZTZEPMIOAOIQFMSPEOZRHZESGKHARLQGZKAGTGYFVNMBNKPDCUOZECFEZJUSLYPPPCDKKJYEAUQJADDINSVSZNIJVGWOSH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.731976496767);
    msg.setSource(61639U);
    msg.setSourceEntity(68U);
    msg.setDestination(54522U);
    msg.setDestinationEntity(124U);
    msg.value.assign("VJMROOVDWMMJNKPBHSPXHFSETPSCEGDADFOCUITVDNTVYKQZVENAILIISYEFQKYXYZTDNCUMJJXLUQHLKGBNUFRGFVEAUAPPIORHBJMDPJBAKKZPVQNGDYJOLCGJVZSHGGBJWRCLZB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.627856147069);
    msg.setSource(21696U);
    msg.setSourceEntity(102U);
    msg.setDestination(65155U);
    msg.setDestinationEntity(51U);
    msg.value.assign("ROAGVAZKVOBZICMQRJDSVWXTBLDDAASEFUNLOASBNDQTLMIXGZCLFCQVCIVKXLKPKEOKFJYSMANQSQFBEHJPPGZSXZUWQPIMRMMEBZNDWUDKKIDIFPMBJEW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.89956171799);
    msg.setSource(55259U);
    msg.setSourceEntity(70U);
    msg.setDestination(12850U);
    msg.setDestinationEntity(162U);
    const char tmp_msg_0[] = {-57, -12, 94, 6, -116, 126, -45, 25, 17, -10, 2, 53, 104, 78, -15, 89, 64, -62, -2, 18, 77, 7, -76, 82, -65, -112, -39, 47, -107, 96, -51, 64, -27, -3, 63, 24, 81, -43, -60, -113, 102, 52, 46, -66, -67, -111, -22, -31, -78, -59, 80, -20, -19, -17, 126, 95, 34, 113, 25, -101, -8, 13, -88, -92, 63, -87, -92, 7, -32, -105, 65, 56, -100, 22, -9, 85, 111, 98, 36, -14, -27, -124, 114, 47, 83, -48, 82, -113, -77, 87, 4, -15, 60, -126, -127, -63, 48, 30, -54, -45, -64, -63, 86, -71, 5, 62, 111, -66, 77, -62, -44, 108, 15, -6, 110, -52, -25, -81, -98, 94, -114, -13, -100, 85, -52, 86, 34, 71, 44, -4, -67, 4, 105, 24, 70, 16, 94, -119, -38, 49, -34, 81, 74, 123, -5, -35, -55, -45, 37, -70, -50, 22, 32, 19, 44, -102, 73, 80, -126, 92, -31, -32, 22, -4, -121, 85, 121, 18, 90, 68, 102, -91, 120, -23, -77, 35, -62, 74, 0, 85, -115, -101, 38, -22, 71, 70, 0, -85, -73, 51, 100, 17, 31, 28, 85, 26, -48, -2, -70, -65, -78, -7, -64, 111, -13, 9, 63, -124, -128, 81, 86, 49, 15, 25};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.882076790247);
    msg.setSource(8713U);
    msg.setSourceEntity(46U);
    msg.setDestination(8083U);
    msg.setDestinationEntity(50U);
    const char tmp_msg_0[] = {-11, -15, -36, 86, 1, -112, 23, -87, -125, -59, -40, -78, 24, 35, -84, -43, -3, 90, 26, -84, 116, 26, 101, -100, -111, 84, -1, -77, 35, 15, 3, -119, 2, -59, -52, 3, -19, -19, 31, 68, -97, 41, 32, 13, 72, -103, -105, 14, -69, 61, 67, -52, 24, -39, -38, -22, 90, -33, -52, 43, 51, 35, 53, -37, -43, -44, -34, -124, -68, -39, -51, -55, -42, -44, 51, 85, 22, -75, -9, -120, 24, -124, -92, 88, -71, 54, -3, -10, 114, -41, 54, 65, 91, 62, -30, -125, 80, -55, -126, 61, 12, 6, -108, 8, 24, 79, 44, 64, 76, -64, 123, -74, -72, -116, 62, -89, -26, -74, 46, 42, -78, 125, -19};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.16068541393);
    msg.setSource(46123U);
    msg.setSourceEntity(228U);
    msg.setDestination(26862U);
    msg.setDestinationEntity(102U);
    const char tmp_msg_0[] = {-39, 77, 113, 90, 53, -92, 58, 22, -11, -11, 77, -116, 92, -88, -91, -89, 6, 85, 84, -84, 103, -113, 1};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.0140657271314);
    msg.setSource(16851U);
    msg.setSourceEntity(11U);
    msg.setDestination(4616U);
    msg.setDestinationEntity(81U);
    msg.value = 0.217143317997;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.0490977089993);
    msg.setSource(22045U);
    msg.setSourceEntity(87U);
    msg.setDestination(9599U);
    msg.setDestinationEntity(219U);
    msg.value = 0.678508267434;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.277697643762);
    msg.setSource(51775U);
    msg.setSourceEntity(37U);
    msg.setDestination(3791U);
    msg.setDestinationEntity(44U);
    msg.value = 0.331934573446;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.769408236407);
    msg.setSource(46938U);
    msg.setSourceEntity(74U);
    msg.setDestination(16528U);
    msg.setDestinationEntity(164U);
    msg.type = 214U;
    msg.frequency = 1335830411U;
    msg.min_range = 25602U;
    msg.max_range = 31762U;
    msg.bits_per_point = 183U;
    msg.scale_factor = 0.480736326184;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.331133019241;
    tmp_msg_0.beam_height = 0.723770908161;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {68, -24, 4, -71, 73, -84, -99, 76, 99, -55, -122, -21, -14, 116, -111, -14, 42, 62, 116, 90, -112, -48, -84, -104, -49, -121, -87, -106, 32, -7, 112, -16, 97, -80, 116, 86, 121, 94, 83, -97, 23, 42, 92, 94, 99, 97, -46, 6, 95, 98, -11, 11, 34, 61, 46, -19, -70, 124, 37, 35, 29, 61, 114, -1, 88, 85, -65, -95, 6, 47, -109, 36, 53, -107, 75, -112, -34, -56, 81, -90, 17, -83, -79, -121, 35, -94, 98, -2, -6, 100, 15, 28, -75, 14, 53, 74, 115, -127, 93, -23, -77, -108, 46, 112, 3, -75, 58, -69, -101, 32, -62, 37, -71, -126, -69, 9, 64};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.163279824098);
    msg.setSource(12161U);
    msg.setSourceEntity(66U);
    msg.setDestination(46909U);
    msg.setDestinationEntity(132U);
    msg.type = 216U;
    msg.frequency = 1844157910U;
    msg.min_range = 7252U;
    msg.max_range = 30241U;
    msg.bits_per_point = 173U;
    msg.scale_factor = 0.410079853496;
    const char tmp_msg_0[] = {10, -46, 48, -116, -89, -40, 79, 75, -15, -9, 24, -21, -18, 20, 45, 115, 69, 84, 118, -26, 59, 35, 115, 36, 121, 126, -56, 87, 0, -21, 84, 42, -40, 99, -63, -123, 88, -78, -78, -110, 46, 82, 71, 78};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.223530323806);
    msg.setSource(34901U);
    msg.setSourceEntity(184U);
    msg.setDestination(41548U);
    msg.setDestinationEntity(242U);
    msg.type = 128U;
    msg.frequency = 2656348729U;
    msg.min_range = 9590U;
    msg.max_range = 50232U;
    msg.bits_per_point = 115U;
    msg.scale_factor = 0.319656418439;
    const char tmp_msg_0[] = {-102, 110, -107, -45, 78, 80, -14, 43, -30, -95, 107, -89, -88, -14, 36, 124, 79, -50, -99, -120, -6, 16, 106, -23, -83, 53, -8, -88, 44, 31, -5, 29, -15, -106, -88, 24, -28, -106, -19, 104, -73, 91, 115, -111, -16, 40, -49, -59, 7, -118, 105, -106, -52, -128, -72, -102, -11, -17, -73, -26, 75, 77, -38, -72, -21, -36, -1, 37, 126, -13, -122, -105, -56, 28, 39, 96, -13, -84, -15, -54, -74, -12, -108, -55, -31, -67, -66, 59, 7, 52, 1, -12, -122, -116, -80, 2, -115, -127, -72, -119, -47, -85, 117, 69, 17, -26, 72, 54, -94, 71, -45, -73, -99, -101, 71, 98, -21, -77, -31, -26, -1, -57, 0, 82, -19, 107, -111, 67, 40, 12, 66, -86, -94, -27, 120, -98, -14, 81, 53, 46, 28, 19, -115, 54, 20, 1, 88, 110, -18, 48, 88, 89, 54, -32, -28, -23, 47, -7, 11, 80, 44, -85, -121, -66, 119, -125, -62, 53, -110, -86, 35, 27, -5, -126, 58, -43, 110, -30, -37, 74, -36, 22, 83, 102, -9, -53, 57, -55, -90, -78, -57, 3, -89, -63, -23, -91, -59, 115, -59, 7, 86, 102, 34, 32, 43, -117, 27, -60, 20, 110, 86, 119, 45, -124, -91, -112, -43, -62, -70, 30, -75, -48, 44, 23, -24, 32, -70, 42, -47, 34, -46, 46, 29, 96, -97, -40, 33, 87, 27, -105, 110, 37, 23, -22, -10};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.635126991855);
    msg.setSource(37325U);
    msg.setSourceEntity(123U);
    msg.setDestination(1078U);
    msg.setDestinationEntity(116U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.208080817392);
    msg.setSource(65185U);
    msg.setSourceEntity(102U);
    msg.setDestination(58452U);
    msg.setDestinationEntity(160U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.539624191554);
    msg.setSource(63936U);
    msg.setSourceEntity(170U);
    msg.setDestination(24491U);
    msg.setDestinationEntity(84U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.153473599918);
    msg.setSource(21879U);
    msg.setSourceEntity(207U);
    msg.setDestination(9373U);
    msg.setDestinationEntity(72U);
    msg.op = 162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.305263278104);
    msg.setSource(29563U);
    msg.setSourceEntity(130U);
    msg.setDestination(23727U);
    msg.setDestinationEntity(91U);
    msg.op = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.313582144231);
    msg.setSource(30071U);
    msg.setSourceEntity(52U);
    msg.setDestination(40695U);
    msg.setDestinationEntity(84U);
    msg.op = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.478548647933);
    msg.setSource(21606U);
    msg.setSourceEntity(35U);
    msg.setDestination(50770U);
    msg.setDestinationEntity(190U);
    msg.value = 0.818463292548;
    msg.confidence = 0.0156873946251;
    msg.opmodes.assign("KHJBWGHLPXPWMYNFICILDQLXDMTSNRKIWUDSBSTYMLBCLKJXRPJXZNGQWTDNOHROSQKZEYVOWBPMPRUXGLGVMHZFFEWQNEWFGJODKEHWEOOJTPZAAURACMHBATYMXCNXYIVCHVRAUZEDHOBJDBSQMPSGUFJGSRSIPOSAKJCWYVTIVNQNZFZHUSVIXJEGDZXQBVCMUVKTNPQYBVEHNLDLUKEZZJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.507841793105);
    msg.setSource(18639U);
    msg.setSourceEntity(106U);
    msg.setDestination(55469U);
    msg.setDestinationEntity(226U);
    msg.value = 0.0633180795207;
    msg.confidence = 0.263835343295;
    msg.opmodes.assign("ZIDZCGRWCJPATVQOXPVXEHFWFHRZLVQEDQLLYJSSQIDEAPYFHWNFRHBWGNTVKUYOMSPNXXTRJYSLKZWANMELCKOKAYVMUFBTKUIHSTBPADOPCRJYYJAGXZPCTCYOHIFDRNJVUZQRHIEXBUEDAPGCSMCPEUMNDBRQQILIMZOKBMKKDCFGWZTZGUQJLQIPEIOKGXTLHUBVTQVDKREMBZXHRSOFVXANNSGFAXGBIYNSHMFJJYUECOWOVLD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.120760746289);
    msg.setSource(12821U);
    msg.setSourceEntity(244U);
    msg.setDestination(42597U);
    msg.setDestinationEntity(147U);
    msg.value = 0.709154102297;
    msg.confidence = 0.280369704916;
    msg.opmodes.assign("ADZQOXYKRDZSUKUSKABXQKFBFCRVPGUNRQTUHBJNHKOMHNCVQPDYMCKTFXTLJTZQAZJFSODYTOITRNEKEENHZFGMSXTWSDLEWXRTACMSDDUBGISQFXBHBHHLFULXJMKGHQQQECV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.102018780357);
    msg.setSource(36950U);
    msg.setSourceEntity(32U);
    msg.setDestination(22294U);
    msg.setDestinationEntity(64U);
    msg.itow = 282401109U;
    msg.lat = 0.403756071796;
    msg.lon = 0.773876100193;
    msg.height_ell = 0.197376806075;
    msg.height_sea = 0.348108724967;
    msg.hacc = 0.425451493415;
    msg.vacc = 0.853395731283;
    msg.vel_n = 0.38071621879;
    msg.vel_e = 0.324634115606;
    msg.vel_d = 0.185824566333;
    msg.speed = 0.781154178563;
    msg.gspeed = 0.896006232309;
    msg.heading = 0.721416318581;
    msg.sacc = 0.540096538113;
    msg.cacc = 0.542792412412;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.485795873303);
    msg.setSource(59153U);
    msg.setSourceEntity(238U);
    msg.setDestination(42112U);
    msg.setDestinationEntity(96U);
    msg.itow = 3954402272U;
    msg.lat = 0.198888744119;
    msg.lon = 0.797393572097;
    msg.height_ell = 0.120490412336;
    msg.height_sea = 0.417517175897;
    msg.hacc = 0.0142851880439;
    msg.vacc = 0.122262166266;
    msg.vel_n = 0.392132729546;
    msg.vel_e = 0.571880857121;
    msg.vel_d = 0.911564960745;
    msg.speed = 0.225890540313;
    msg.gspeed = 0.750240005218;
    msg.heading = 0.359128370403;
    msg.sacc = 0.614887742643;
    msg.cacc = 0.97951966089;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.92182318929);
    msg.setSource(40766U);
    msg.setSourceEntity(85U);
    msg.setDestination(64361U);
    msg.setDestinationEntity(58U);
    msg.itow = 3250956231U;
    msg.lat = 0.368661319852;
    msg.lon = 0.797532041606;
    msg.height_ell = 0.6932140602;
    msg.height_sea = 0.778304643924;
    msg.hacc = 0.213903868964;
    msg.vacc = 0.247138456445;
    msg.vel_n = 0.2319653666;
    msg.vel_e = 0.433565413885;
    msg.vel_d = 0.356981027189;
    msg.speed = 0.190020161698;
    msg.gspeed = 0.0805950694263;
    msg.heading = 0.0385046826961;
    msg.sacc = 0.873874377693;
    msg.cacc = 0.18091222722;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.165016049937);
    msg.setSource(57906U);
    msg.setSourceEntity(31U);
    msg.setDestination(8737U);
    msg.setDestinationEntity(194U);
    msg.id = 196U;
    msg.value = 0.842967290123;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.00434542702251);
    msg.setSource(29796U);
    msg.setSourceEntity(74U);
    msg.setDestination(61426U);
    msg.setDestinationEntity(49U);
    msg.id = 98U;
    msg.value = 0.852461601951;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.0618307709969);
    msg.setSource(60922U);
    msg.setSourceEntity(150U);
    msg.setDestination(63778U);
    msg.setDestinationEntity(226U);
    msg.id = 168U;
    msg.value = 0.908779777673;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.017310844563);
    msg.setSource(42396U);
    msg.setSourceEntity(119U);
    msg.setDestination(33529U);
    msg.setDestinationEntity(198U);
    msg.x = 0.0754984369606;
    msg.y = 0.154666003448;
    msg.z = 0.540391701984;
    msg.phi = 0.717817685283;
    msg.theta = 0.165685037944;
    msg.psi = 0.311227882984;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.510851751581);
    msg.setSource(24725U);
    msg.setSourceEntity(13U);
    msg.setDestination(43694U);
    msg.setDestinationEntity(109U);
    msg.x = 0.795188631423;
    msg.y = 0.671335479616;
    msg.z = 0.776650034165;
    msg.phi = 0.24890167396;
    msg.theta = 0.129181757033;
    msg.psi = 0.739645262545;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.516976075412);
    msg.setSource(27817U);
    msg.setSourceEntity(136U);
    msg.setDestination(62093U);
    msg.setDestinationEntity(32U);
    msg.x = 0.874507609805;
    msg.y = 0.974357828907;
    msg.z = 0.101959812514;
    msg.phi = 0.211736300877;
    msg.theta = 0.0758229600997;
    msg.psi = 0.0300057609472;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.683225864264);
    msg.setSource(12121U);
    msg.setSourceEntity(235U);
    msg.setDestination(1374U);
    msg.setDestinationEntity(82U);
    msg.beam_width = 0.332513170382;
    msg.beam_height = 0.296109568946;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.125619203022);
    msg.setSource(29385U);
    msg.setSourceEntity(81U);
    msg.setDestination(10649U);
    msg.setDestinationEntity(38U);
    msg.beam_width = 0.953696841362;
    msg.beam_height = 0.124026994979;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.439941069418);
    msg.setSource(49385U);
    msg.setSourceEntity(26U);
    msg.setDestination(64035U);
    msg.setDestinationEntity(43U);
    msg.beam_width = 0.0474798745889;
    msg.beam_height = 0.0596184859487;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.988315116326);
    msg.setSource(57337U);
    msg.setSourceEntity(219U);
    msg.setDestination(17323U);
    msg.setDestinationEntity(47U);
    msg.sane = 167U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.734645708204);
    msg.setSource(47304U);
    msg.setSourceEntity(48U);
    msg.setDestination(58919U);
    msg.setDestinationEntity(60U);
    msg.sane = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.990815210591);
    msg.setSource(5511U);
    msg.setSourceEntity(4U);
    msg.setDestination(11383U);
    msg.setDestinationEntity(24U);
    msg.sane = 222U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.224345956229);
    msg.setSource(57242U);
    msg.setSourceEntity(148U);
    msg.setDestination(41762U);
    msg.setDestinationEntity(79U);
    msg.value = 0.621374172236;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.35065959735);
    msg.setSource(13860U);
    msg.setSourceEntity(86U);
    msg.setDestination(17712U);
    msg.setDestinationEntity(212U);
    msg.value = 0.92579321258;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.593233122114);
    msg.setSource(14845U);
    msg.setSourceEntity(205U);
    msg.setDestination(12701U);
    msg.setDestinationEntity(144U);
    msg.value = 0.010651876541;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.46429964578);
    msg.setSource(19044U);
    msg.setSourceEntity(152U);
    msg.setDestination(20827U);
    msg.setDestinationEntity(243U);
    msg.value = 0.728899273654;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.886105652334);
    msg.setSource(36907U);
    msg.setSourceEntity(244U);
    msg.setDestination(5136U);
    msg.setDestinationEntity(16U);
    msg.value = 0.582714104613;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.114717482369);
    msg.setSource(6215U);
    msg.setSourceEntity(129U);
    msg.setDestination(33428U);
    msg.setDestinationEntity(238U);
    msg.value = 0.413428524257;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.66254702443);
    msg.setSource(8580U);
    msg.setSourceEntity(169U);
    msg.setDestination(61819U);
    msg.setDestinationEntity(160U);
    msg.value = 0.463058335765;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.514472298609);
    msg.setSource(50068U);
    msg.setSourceEntity(49U);
    msg.setDestination(11697U);
    msg.setDestinationEntity(226U);
    msg.value = 0.460959723196;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.0740401321808);
    msg.setSource(29842U);
    msg.setSourceEntity(207U);
    msg.setDestination(4250U);
    msg.setDestinationEntity(50U);
    msg.value = 0.360920196303;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.835262172906);
    msg.setSource(5248U);
    msg.setSourceEntity(163U);
    msg.setDestination(30877U);
    msg.setDestinationEntity(62U);
    msg.value = 0.367583947435;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.441727214239);
    msg.setSource(60513U);
    msg.setSourceEntity(19U);
    msg.setDestination(8570U);
    msg.setDestinationEntity(190U);
    msg.value = 0.899290925459;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.535991856099);
    msg.setSource(48078U);
    msg.setSourceEntity(203U);
    msg.setDestination(41574U);
    msg.setDestinationEntity(98U);
    msg.value = 0.784414017582;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.769163807018);
    msg.setSource(12976U);
    msg.setSourceEntity(217U);
    msg.setDestination(23050U);
    msg.setDestinationEntity(137U);
    msg.value = 0.818754086355;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.0700657848937);
    msg.setSource(41291U);
    msg.setSourceEntity(250U);
    msg.setDestination(19990U);
    msg.setDestinationEntity(1U);
    msg.value = 0.914860940551;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.908462511364);
    msg.setSource(20665U);
    msg.setSourceEntity(185U);
    msg.setDestination(32820U);
    msg.setDestinationEntity(186U);
    msg.value = 0.994253556586;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.87257033905);
    msg.setSource(9325U);
    msg.setSourceEntity(79U);
    msg.setDestination(35308U);
    msg.setDestinationEntity(176U);
    msg.value = 0.617641166009;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.347202455847);
    msg.setSource(21138U);
    msg.setSourceEntity(2U);
    msg.setDestination(63462U);
    msg.setDestinationEntity(181U);
    msg.value = 0.819347344923;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.313759998299);
    msg.setSource(10747U);
    msg.setSourceEntity(91U);
    msg.setDestination(15899U);
    msg.setDestinationEntity(20U);
    msg.value = 0.441745734572;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.69548588194);
    msg.setSource(16363U);
    msg.setSourceEntity(128U);
    msg.setDestination(294U);
    msg.setDestinationEntity(67U);
    msg.value = 0.458247828012;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.187781094006);
    msg.setSource(22004U);
    msg.setSourceEntity(215U);
    msg.setDestination(16633U);
    msg.setDestinationEntity(143U);
    msg.value = 0.0401077609133;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.584019085881);
    msg.setSource(24348U);
    msg.setSourceEntity(207U);
    msg.setDestination(18864U);
    msg.setDestinationEntity(181U);
    msg.value = 0.811886405552;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.865497901938);
    msg.setSource(46748U);
    msg.setSourceEntity(21U);
    msg.setDestination(13142U);
    msg.setDestinationEntity(52U);
    msg.value = 0.0512771666433;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.547300472877);
    msg.setSource(31687U);
    msg.setSourceEntity(228U);
    msg.setDestination(51492U);
    msg.setDestinationEntity(249U);
    msg.value = 0.687580173999;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.533291105642);
    msg.setSource(26771U);
    msg.setSourceEntity(73U);
    msg.setDestination(765U);
    msg.setDestinationEntity(167U);
    msg.value = 0.0716596219453;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.825126554093);
    msg.setSource(33828U);
    msg.setSourceEntity(227U);
    msg.setDestination(19687U);
    msg.setDestinationEntity(22U);
    msg.validity = 18876U;
    msg.type = 111U;
    msg.tow = 1134364768U;
    msg.base_lat = 0.0717998234079;
    msg.base_lon = 0.252667182838;
    msg.base_height = 0.838301749507;
    msg.n = 0.451194373119;
    msg.e = 0.352180012966;
    msg.d = 0.728061253297;
    msg.v_n = 0.980737117793;
    msg.v_e = 0.950854274972;
    msg.v_d = 0.00303083313711;
    msg.satellites = 104U;
    msg.iar_hyp = 17351U;
    msg.iar_ratio = 0.749203517151;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.620002942809);
    msg.setSource(15215U);
    msg.setSourceEntity(201U);
    msg.setDestination(31281U);
    msg.setDestinationEntity(49U);
    msg.validity = 11376U;
    msg.type = 3U;
    msg.tow = 709359045U;
    msg.base_lat = 0.939315830264;
    msg.base_lon = 0.716469795965;
    msg.base_height = 0.568560774275;
    msg.n = 0.403063849319;
    msg.e = 0.458157979274;
    msg.d = 0.523671319001;
    msg.v_n = 0.84782451878;
    msg.v_e = 0.34107987884;
    msg.v_d = 0.87479869219;
    msg.satellites = 114U;
    msg.iar_hyp = 57820U;
    msg.iar_ratio = 0.237845153409;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.344035056036);
    msg.setSource(13857U);
    msg.setSourceEntity(145U);
    msg.setDestination(60467U);
    msg.setDestinationEntity(246U);
    msg.validity = 24102U;
    msg.type = 111U;
    msg.tow = 1634995498U;
    msg.base_lat = 0.952430971635;
    msg.base_lon = 0.787050298171;
    msg.base_height = 0.865340210644;
    msg.n = 0.279094949099;
    msg.e = 0.636845188647;
    msg.d = 0.22157613443;
    msg.v_n = 0.896378204422;
    msg.v_e = 0.922297300742;
    msg.v_d = 0.581020709183;
    msg.satellites = 36U;
    msg.iar_hyp = 45755U;
    msg.iar_ratio = 0.389870216207;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.66590831251);
    msg.setSource(23100U);
    msg.setSourceEntity(47U);
    msg.setDestination(6312U);
    msg.setDestinationEntity(83U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.43972469408;
    tmp_msg_0.lon = 0.249505983215;
    tmp_msg_0.height = 0.728613896801;
    tmp_msg_0.x = 0.124985106573;
    tmp_msg_0.y = 0.46299112939;
    tmp_msg_0.z = 0.632852759262;
    tmp_msg_0.phi = 0.460527206898;
    tmp_msg_0.theta = 0.778235355038;
    tmp_msg_0.psi = 0.384979459395;
    tmp_msg_0.u = 0.224447366142;
    tmp_msg_0.v = 0.913363091583;
    tmp_msg_0.w = 0.710191618274;
    tmp_msg_0.vx = 0.203317550312;
    tmp_msg_0.vy = 0.365344022419;
    tmp_msg_0.vz = 0.93997650075;
    tmp_msg_0.p = 0.551094205015;
    tmp_msg_0.q = 0.366019516182;
    tmp_msg_0.r = 0.546038503752;
    tmp_msg_0.depth = 0.979269204487;
    tmp_msg_0.alt = 0.664622985224;
    msg.state.set(tmp_msg_0);
    msg.type = 180U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.558895882823);
    msg.setSource(63453U);
    msg.setSourceEntity(78U);
    msg.setDestination(50180U);
    msg.setDestinationEntity(101U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.661878548816;
    tmp_msg_0.lon = 0.654016701057;
    tmp_msg_0.height = 0.138496779169;
    tmp_msg_0.x = 0.0919707002825;
    tmp_msg_0.y = 0.348285791788;
    tmp_msg_0.z = 0.428501814292;
    tmp_msg_0.phi = 0.226965672286;
    tmp_msg_0.theta = 0.627183834694;
    tmp_msg_0.psi = 0.531252565104;
    tmp_msg_0.u = 0.392775714224;
    tmp_msg_0.v = 0.651911291822;
    tmp_msg_0.w = 0.693532602855;
    tmp_msg_0.vx = 0.849688278486;
    tmp_msg_0.vy = 0.0677558093461;
    tmp_msg_0.vz = 0.2462578553;
    tmp_msg_0.p = 0.454879979007;
    tmp_msg_0.q = 0.358695665964;
    tmp_msg_0.r = 0.750241734147;
    tmp_msg_0.depth = 0.413557240199;
    tmp_msg_0.alt = 0.318006364861;
    msg.state.set(tmp_msg_0);
    msg.type = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.441061087064);
    msg.setSource(24642U);
    msg.setSourceEntity(52U);
    msg.setDestination(9048U);
    msg.setDestinationEntity(178U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.762804275788;
    tmp_msg_0.lon = 0.985421911818;
    tmp_msg_0.height = 0.318943894273;
    tmp_msg_0.x = 0.442250428952;
    tmp_msg_0.y = 0.136567133081;
    tmp_msg_0.z = 0.528659951616;
    tmp_msg_0.phi = 0.789049403324;
    tmp_msg_0.theta = 0.288629962246;
    tmp_msg_0.psi = 0.322864744132;
    tmp_msg_0.u = 0.536126003189;
    tmp_msg_0.v = 0.759489538553;
    tmp_msg_0.w = 0.533891047018;
    tmp_msg_0.vx = 0.355996111863;
    tmp_msg_0.vy = 0.897909385723;
    tmp_msg_0.vz = 0.918991539797;
    tmp_msg_0.p = 0.172980334279;
    tmp_msg_0.q = 0.621107773898;
    tmp_msg_0.r = 0.999718145878;
    tmp_msg_0.depth = 0.114925428271;
    tmp_msg_0.alt = 0.55118671685;
    msg.state.set(tmp_msg_0);
    msg.type = 155U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.609561514608);
    msg.setSource(46507U);
    msg.setSourceEntity(206U);
    msg.setDestination(18538U);
    msg.setDestinationEntity(195U);
    msg.value = 0.0771250725088;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.46982774476);
    msg.setSource(15350U);
    msg.setSourceEntity(203U);
    msg.setDestination(65221U);
    msg.setDestinationEntity(211U);
    msg.value = 0.727299705324;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.506667278356);
    msg.setSource(47180U);
    msg.setSourceEntity(215U);
    msg.setDestination(42760U);
    msg.setDestinationEntity(137U);
    msg.value = 0.501215295357;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.155407037418);
    msg.setSource(39315U);
    msg.setSourceEntity(218U);
    msg.setDestination(29237U);
    msg.setDestinationEntity(99U);
    msg.value = 0.351963696265;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.297247746817);
    msg.setSource(28220U);
    msg.setSourceEntity(181U);
    msg.setDestination(22424U);
    msg.setDestinationEntity(246U);
    msg.value = 0.609175254977;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.965874425821);
    msg.setSource(50378U);
    msg.setSourceEntity(203U);
    msg.setDestination(27669U);
    msg.setDestinationEntity(235U);
    msg.value = 0.923870836199;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.838574552733);
    msg.setSource(51514U);
    msg.setSourceEntity(209U);
    msg.setDestination(7302U);
    msg.setDestinationEntity(128U);
    msg.value = 0.605170975364;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.254486219693);
    msg.setSource(34882U);
    msg.setSourceEntity(94U);
    msg.setDestination(31243U);
    msg.setDestinationEntity(219U);
    msg.value = 0.328883169986;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.831960726201);
    msg.setSource(65386U);
    msg.setSourceEntity(2U);
    msg.setDestination(22626U);
    msg.setDestinationEntity(132U);
    msg.value = 0.404414677874;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.871262864899);
    msg.setSource(31124U);
    msg.setSourceEntity(16U);
    msg.setDestination(42721U);
    msg.setDestinationEntity(93U);
    msg.value = 0.97057929738;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.113194524519);
    msg.setSource(39738U);
    msg.setSourceEntity(114U);
    msg.setDestination(46762U);
    msg.setDestinationEntity(206U);
    msg.value = 0.371902656006;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.0759955355027);
    msg.setSource(6332U);
    msg.setSourceEntity(122U);
    msg.setDestination(16562U);
    msg.setDestinationEntity(148U);
    msg.value = 0.081833706895;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.627622716039);
    msg.setSource(6390U);
    msg.setSourceEntity(170U);
    msg.setDestination(54457U);
    msg.setDestinationEntity(44U);
    msg.value = 0.325418995217;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.30596825591);
    msg.setSource(22898U);
    msg.setSourceEntity(235U);
    msg.setDestination(53488U);
    msg.setDestinationEntity(175U);
    msg.value = 0.533756480098;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.823901941115);
    msg.setSource(51030U);
    msg.setSourceEntity(90U);
    msg.setDestination(7724U);
    msg.setDestinationEntity(249U);
    msg.value = 0.470253352184;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.901121667406);
    msg.setSource(9393U);
    msg.setSourceEntity(206U);
    msg.setDestination(21957U);
    msg.setDestinationEntity(69U);
    msg.id = 48U;
    msg.zoom = 128U;
    msg.action = 153U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.141733440511);
    msg.setSource(10893U);
    msg.setSourceEntity(122U);
    msg.setDestination(44317U);
    msg.setDestinationEntity(82U);
    msg.id = 196U;
    msg.zoom = 153U;
    msg.action = 242U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.847070301936);
    msg.setSource(39326U);
    msg.setSourceEntity(31U);
    msg.setDestination(23357U);
    msg.setDestinationEntity(50U);
    msg.id = 18U;
    msg.zoom = 24U;
    msg.action = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.859191166996);
    msg.setSource(40921U);
    msg.setSourceEntity(253U);
    msg.setDestination(44233U);
    msg.setDestinationEntity(254U);
    msg.id = 177U;
    msg.value = 0.969406096213;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.968829189198);
    msg.setSource(3626U);
    msg.setSourceEntity(28U);
    msg.setDestination(47708U);
    msg.setDestinationEntity(254U);
    msg.id = 177U;
    msg.value = 0.207263449254;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.69284889891);
    msg.setSource(42897U);
    msg.setSourceEntity(217U);
    msg.setDestination(63068U);
    msg.setDestinationEntity(187U);
    msg.id = 177U;
    msg.value = 0.350545309386;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.4966294669);
    msg.setSource(49547U);
    msg.setSourceEntity(253U);
    msg.setDestination(62764U);
    msg.setDestinationEntity(152U);
    msg.id = 39U;
    msg.value = 0.953278423651;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.945351842657);
    msg.setSource(6782U);
    msg.setSourceEntity(23U);
    msg.setDestination(7277U);
    msg.setDestinationEntity(46U);
    msg.id = 16U;
    msg.value = 0.983142121454;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.0764286856549);
    msg.setSource(15202U);
    msg.setSourceEntity(210U);
    msg.setDestination(27708U);
    msg.setDestinationEntity(73U);
    msg.id = 55U;
    msg.value = 0.651466245615;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.639615527655);
    msg.setSource(35210U);
    msg.setSourceEntity(11U);
    msg.setDestination(15674U);
    msg.setDestinationEntity(233U);
    msg.id = 251U;
    msg.angle = 0.345970828198;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.8848534311);
    msg.setSource(17403U);
    msg.setSourceEntity(86U);
    msg.setDestination(16092U);
    msg.setDestinationEntity(235U);
    msg.id = 136U;
    msg.angle = 0.188452886924;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.42236897138);
    msg.setSource(26666U);
    msg.setSourceEntity(231U);
    msg.setDestination(27791U);
    msg.setDestinationEntity(249U);
    msg.id = 80U;
    msg.angle = 0.0851440375318;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.571688613021);
    msg.setSource(9238U);
    msg.setSourceEntity(41U);
    msg.setDestination(38052U);
    msg.setDestinationEntity(165U);
    msg.op = 252U;
    msg.actions.assign("GYVTEAXURFUVWEKKWJBCXQOHFRIYAGSWADCLMLZZSCKHIXZSBBJJNMLQKNIPJRSRIITDRYRYJDDWGRMHXDCWHYBJLZEDRYQFMXMMGMPWWDYYBFPNMSXTOVDJESAACNVIJPQLBOTTAXKNYHHOUGCPWBUFKDATEZWPWSKTHUPEREZQFNBQLUOVFEVZMSVBOLXGFGKGYVHLOHOUUQVCQEXXARZIMTOFEDNCFGKCLUGPNVJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.243888553133);
    msg.setSource(28063U);
    msg.setSourceEntity(172U);
    msg.setDestination(53664U);
    msg.setDestinationEntity(252U);
    msg.op = 188U;
    msg.actions.assign("HTYKMZDLYWNSGTMLSWOPNIGBWFXZBERWKFJYCISTQUCUKNNHAKLFUAAGWNTAJNVVQAIXYYVWHDSLHRJJPQTUQKDXVEXJCLGMDIJRPCSSAPNMKFQWEODWXAYHBOQOLZBFKVQWIRZOFVVFDKMOEZVQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.100234848169);
    msg.setSource(8462U);
    msg.setSourceEntity(227U);
    msg.setDestination(49494U);
    msg.setDestinationEntity(57U);
    msg.op = 140U;
    msg.actions.assign("IJTNCJXBAUVEQDSXRWCHWFENRPQRGRXCGOYCHZEANIGWLZGMMCKMMBUIPWKKQZZVNVWHUCKSZEJIVVLFZXCBMFFTKBKXBQUFZEOQXCSLNIGZAPTJTZLSVFOCDRDQIHTDYMAZF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.761881378061);
    msg.setSource(58237U);
    msg.setSourceEntity(71U);
    msg.setDestination(25U);
    msg.setDestinationEntity(114U);
    msg.actions.assign("BMARFURBTYMTNNRZPKHYAULWZDVODXTINQKBQPMQARMFWJHEZZXQCZYVHQMIFOWJDFBYOGQAOUVPLVJZFRMYLMWHECSQVIKNSEAZQOJRXEVCMJJTXHPASODHTRWKCBNKWSLRICGXPYPOWBAXHUMTBSIPL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.622004186557);
    msg.setSource(45027U);
    msg.setSourceEntity(19U);
    msg.setDestination(26737U);
    msg.setDestinationEntity(38U);
    msg.actions.assign("XYMDDAJCCIDKFMPLDCECDPEWXPRNXOQRLLYAZPFACMXYPUQWEUELSIKKGHRIUBVASB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.794474408451);
    msg.setSource(10299U);
    msg.setSourceEntity(245U);
    msg.setDestination(41694U);
    msg.setDestinationEntity(51U);
    msg.actions.assign("ZAKTSTUDMJURIVXJSLUCJXGHHSWQUUQIXRGDMDKPNKNOJAJVQWHYBALXRGRECNYNZZEMUNDIMSCKLABZRGNKUEXVCFPMKUAGVOIPEVQPQYABLFCAZBUDWRRNCTMHFPKZWTJJGYTLAIDMHMEDYOPWGACIHWQILIPEZYLDXFFHBDBXIBWGYYVBSSMQVNSTHFHKFQRUCCZJNOGNRRWOPLDSEJCJSSBOFZTLEEXWYEIOOAOZMKYTLHXTPVQWKF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.160403597596);
    msg.setSource(36762U);
    msg.setSourceEntity(201U);
    msg.setDestination(52973U);
    msg.setDestinationEntity(207U);
    msg.button = 232U;
    msg.value = 55U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.620335064559);
    msg.setSource(61505U);
    msg.setSourceEntity(29U);
    msg.setDestination(37115U);
    msg.setDestinationEntity(33U);
    msg.button = 226U;
    msg.value = 179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.885023318231);
    msg.setSource(20271U);
    msg.setSourceEntity(5U);
    msg.setDestination(25821U);
    msg.setDestinationEntity(136U);
    msg.button = 165U;
    msg.value = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.500937797998);
    msg.setSource(13875U);
    msg.setSourceEntity(115U);
    msg.setDestination(4592U);
    msg.setDestinationEntity(15U);
    msg.op = 29U;
    msg.text.assign("YDHCKANLRRQUKDGLHLYBJYMAPTXFROQXHWFCUZVPQDMKFMQQKINEORBTQWXQWSIHVWVJBXUFUSIUOBTLEHARHUZZEPFVJGSISEPDGZKOPAEPFTNKOSVLMYWYTWCJQNVEUGCMWSNNIUNEBOARFCBMOHYKIMLWORPTBLXRLTHAQJDVCYGEJVEZHICYPGUSGZXYZIVPEMLKXNZSGNBWCTMQMXNSJDAARTKGZRLCBHIU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.338917164058);
    msg.setSource(63812U);
    msg.setSourceEntity(16U);
    msg.setDestination(26946U);
    msg.setDestinationEntity(187U);
    msg.op = 216U;
    msg.text.assign("URQMGVOJTLWFJHYFDRXCLPTHIPIOCQNVEKDXUVUTOHQUJULLSYBKNDSJVSBRPWQSCARWAYALMSDYYIWHHHBNFBPUKWFMPTQPQEAMKJUCHDOBTZUQODGNEIOZLBODGKINRZKXEBHZDIRPGRPEDMFGLJVGJYHEXJOEAAEITOWVXDPKBTKSMNCEFZLU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.87773576171);
    msg.setSource(1731U);
    msg.setSourceEntity(214U);
    msg.setDestination(55100U);
    msg.setDestinationEntity(46U);
    msg.op = 14U;
    msg.text.assign("HYKYTAHNFZWBXZRSVFIMFZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.627701740922);
    msg.setSource(55810U);
    msg.setSourceEntity(78U);
    msg.setDestination(51176U);
    msg.setDestinationEntity(55U);
    msg.op = 232U;
    msg.time_remain = 0.684964074724;
    msg.sched_time = 0.110342070712;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.589724267323);
    msg.setSource(16383U);
    msg.setSourceEntity(242U);
    msg.setDestination(7662U);
    msg.setDestinationEntity(204U);
    msg.op = 78U;
    msg.time_remain = 0.651385578682;
    msg.sched_time = 0.672596975276;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.82932919975);
    msg.setSource(44068U);
    msg.setSourceEntity(166U);
    msg.setDestination(12577U);
    msg.setDestinationEntity(81U);
    msg.op = 6U;
    msg.time_remain = 0.895865344917;
    msg.sched_time = 0.0260216689317;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.646073317576);
    msg.setSource(34644U);
    msg.setSourceEntity(183U);
    msg.setDestination(54834U);
    msg.setDestinationEntity(163U);
    msg.name.assign("ZYBKLQOUOYXTETFEVMPMFUGKJMFTNBRPQPORMLSTRKYQZZIUWZYDXDGHAAGETGHEFOGATVNLBDBNQCAVYEQZMARWGSRJKGLFDDULJMFPXPASRNWBJZUWXLWPEVZSFNIXTWIYCWIYSJXZWK");
    msg.op = 204U;
    msg.sched_time = 0.711409011579;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.669656242699);
    msg.setSource(8691U);
    msg.setSourceEntity(114U);
    msg.setDestination(60813U);
    msg.setDestinationEntity(252U);
    msg.name.assign("PFBFXJJZTPNZWXMLMZYEYUWDEDEJXVAMMGUGQJWIIRNRGIIRXGLNSLWVJUFOLHUYZNEHAPISDKSGUTTJQXKELUQNJBBAPYXXEATGBKBNFMUERKJWZNNFROBPRHOOTEMGCDIUPTOBKSVKSGRLCFFYCFDHHLPYC");
    msg.op = 208U;
    msg.sched_time = 0.707814501304;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.788738772164);
    msg.setSource(45027U);
    msg.setSourceEntity(246U);
    msg.setDestination(21027U);
    msg.setDestinationEntity(98U);
    msg.name.assign("QXWLTYWVDPFAZUSIDSNOTDAHZGFYEMCOZZWTCHMDZAGUDALWTBZVRSFDWUYIQCNEHQNPRUBXSYOCDWSZQKPPTQGQNGUZEYPLHHINZQLNUFLFYKAKQCEVRVTWOAHKJOALJRPBSRODEEHMVFCIHLNKXAGPOFDYBJISSSLFUDNLWFNUCRPCBKGYWHIBMJEPAYPKEJVJJXOSVRNYTRJIGXMGGM");
    msg.op = 132U;
    msg.sched_time = 0.842638810378;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.414875138284);
    msg.setSource(2932U);
    msg.setSourceEntity(40U);
    msg.setDestination(31637U);
    msg.setDestinationEntity(38U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.854005275178);
    msg.setSource(11874U);
    msg.setSourceEntity(124U);
    msg.setDestination(16686U);
    msg.setDestinationEntity(83U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.451232597844);
    msg.setSource(48796U);
    msg.setSourceEntity(5U);
    msg.setDestination(63914U);
    msg.setDestinationEntity(185U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.0022628439826);
    msg.setSource(20101U);
    msg.setSourceEntity(168U);
    msg.setDestination(12255U);
    msg.setDestinationEntity(153U);
    msg.name.assign("DHEJPKEGGGNIYUQIYTFNJOTTUKHCKSESVYKQSLYZJDRTOGWUEVMCAVSCPTIKUXDDAXLAVNBZNFVNXXQVTWQJRKYKPPFZRZCBJOELZIYGDGGRIMJWOCJBCFBLJTHQZONVUNDKAZYDUASDIMRUABWGSTRUVHRCWWMIESMHERHRKFYHCSBIVPCFMWLYQHXHAFDLQOVIUXNOMGOYMTCBWWXJWXLEATBNPAIDOPHBNEZOGUMRPLSFQLELPQXQXZFAP");
    msg.state = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.161536280588);
    msg.setSource(13379U);
    msg.setSourceEntity(140U);
    msg.setDestination(3835U);
    msg.setDestinationEntity(207U);
    msg.name.assign("YXTDAEHQCUCOVQBJSALDLDGPRBTQAJPQHUWBPSFQVIIBJMHCZLIRSEOKHGCEUXZOTNFMGRFQNFWWYAMHNQRLQYIODUVYUJRPWMXFETMZITABVKENOKBAEMHFODDVNCSSPMCGPURIBWOTARXIGYFYQMN");
    msg.state = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.126636644567);
    msg.setSource(13784U);
    msg.setSourceEntity(197U);
    msg.setDestination(59002U);
    msg.setDestinationEntity(59U);
    msg.name.assign("BDEEYGZHIMARONAELMWCZWFKTTOEQSCKOSZOMVGIDARJZWRGZBLAZAJYBRKSQPHCVFJDJHWPZFKRNTB");
    msg.state = 116U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.839972064576);
    msg.setSource(50215U);
    msg.setSourceEntity(211U);
    msg.setDestination(28395U);
    msg.setDestinationEntity(120U);
    msg.name.assign("MJHVPYWFTWMUHMSDJDMBGBMMCPABPAXIHDOYDTNABEVQEIMNCCGOEZYMXLKGNKLEPTCKLFEBPPPHXLUWBIRWQSGSNFTVNGYNURKIMFJALYUWNOCJRHGEPGATQIJPDWJRQZRCQJXDNZVQGDHZUHSRQOFFVOYJASOBXQSYKDDOATXEVWROUWJRKUACOLKZSVXZKBRQBWUIIEBLUUZPHAKLGQFFCTVXSEYF");
    msg.value = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.792456616917);
    msg.setSource(20731U);
    msg.setSourceEntity(127U);
    msg.setDestination(48024U);
    msg.setDestinationEntity(42U);
    msg.name.assign("AIATJDSMMJIYTHWDUHVIGYUSQJYISUTDBXZOJEJOXERAXULKOEWQVCKXFTTSMUPORUFKQPTHRNQDFVCDNEUIHBNVGLNXCBJQHIWMODLFOQJRRGFLXRPWSPTZNCTALSGBZZNKQWXUNRSHQYBXRORPBULAYKVIZMFCFZMGWAXYQWZRYHZODOWC");
    msg.value = 171U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.00661468559855);
    msg.setSource(35224U);
    msg.setSourceEntity(45U);
    msg.setDestination(18652U);
    msg.setDestinationEntity(176U);
    msg.name.assign("KBAQLBVEAPZHKWYK");
    msg.value = 15U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.33306355396);
    msg.setSource(3353U);
    msg.setSourceEntity(2U);
    msg.setDestination(24735U);
    msg.setDestinationEntity(183U);
    msg.name.assign("CMPMDOWZWEKWMOQQKAQKAFBUOVRZTRCZLONVCEATLBWCNBIQA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.891377631154);
    msg.setSource(53491U);
    msg.setSourceEntity(123U);
    msg.setDestination(14333U);
    msg.setDestinationEntity(164U);
    msg.name.assign("EJYUCLISTADDPOWFGHOXWALRDKDNTCKIBLDVVRCJSUKJNWBQBQPESIWYXMCYHCMDPWEBNGLPHR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.658053686462);
    msg.setSource(8245U);
    msg.setSourceEntity(47U);
    msg.setDestination(48124U);
    msg.setDestinationEntity(131U);
    msg.name.assign("LGCGMQXLCEKRVVZBENZNYOOAIGHTJXHPKFKBIHPUSFCRSJDENHJRJGAZSNHTIJVOQSEFTWZVDUDSMYVZADNUKZSYIAPNPCKUIWACWNLEKLAOYNGIHEYKVXTVXSMXUCHDZAHTHOJCOKZJTIYFJLSXTWQMJGBMBQJBDDSQCKLRDEZURPWAEVFTRNIEYRMQXQGWYPTNRORYFFLIUEFYILXBHQXFMVUCWMKRGQOPTFGGOVDSLBZAXUWCPWMB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.987004107928);
    msg.setSource(8790U);
    msg.setSourceEntity(84U);
    msg.setDestination(58118U);
    msg.setDestinationEntity(217U);
    msg.name.assign("TTRMHPTFNQXPRJXCGWFEUODIKVVZNDGOPAKENIIQIOIBWPJYTUUKSIPIUWTYYAQVGOKRPFVFXBEFSLHZBTVSQWVTYWBAUVNZEDRMWGZRHJJXKCPAETJLALEPSGMLAVWONBYTCYLQJZVGHCHSOBINQBACLROSZTPZNPGCYW");
    msg.value = 32U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.273323087362);
    msg.setSource(43587U);
    msg.setSourceEntity(170U);
    msg.setDestination(63892U);
    msg.setDestinationEntity(110U);
    msg.name.assign("GXZQETRQEUALDLSTOXYUFEYHKVEWZEDYQJCUEEWJILBUIUZCVJDSPOJNUFASUXNHSDGMPRZAKZKCYYRPMLUMBKQBRVWKRXIUVMPGRIWQMPXDXTJKESXOCFBTANOJCOXNLZBAWLTZXWRBSQMIODKMHSJAKSCCNYNYBEADHLTVZCNHRFIBJHSPGNMATKLCFKMZ");
    msg.value = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.267189965138);
    msg.setSource(62270U);
    msg.setSourceEntity(213U);
    msg.setDestination(20732U);
    msg.setDestinationEntity(102U);
    msg.name.assign("KNKLUBFNFWNQBUMVGJBHCCRQPBCREMETWPQEOWNLXABXEWDKLEJHPYWJVRYSKOMSFYXOLGATJQMPTLLXPSQFJJDSHZYITHZFBUBSHWYXEVAKSXCGRSMVAOFAAYZUORGNZDFTWJRMDVPRJIRKMKFXUICVUZVVGNMBJYKEITTTYMIWZOOGZNBSDZSIHPESLQL");
    msg.value = 126U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.0981725433825);
    msg.setSource(58951U);
    msg.setSourceEntity(121U);
    msg.setDestination(33498U);
    msg.setDestinationEntity(178U);
    msg.id = 134U;
    msg.period = 2236877587U;
    msg.duty_cycle = 1117425374U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.511471696531);
    msg.setSource(30846U);
    msg.setSourceEntity(223U);
    msg.setDestination(50964U);
    msg.setDestinationEntity(142U);
    msg.id = 138U;
    msg.period = 1123557101U;
    msg.duty_cycle = 2723433985U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.665018116128);
    msg.setSource(8660U);
    msg.setSourceEntity(88U);
    msg.setDestination(19838U);
    msg.setDestinationEntity(12U);
    msg.id = 167U;
    msg.period = 524308165U;
    msg.duty_cycle = 3433981907U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.351562773535);
    msg.setSource(45311U);
    msg.setSourceEntity(7U);
    msg.setDestination(48315U);
    msg.setDestinationEntity(200U);
    msg.id = 131U;
    msg.period = 670209786U;
    msg.duty_cycle = 319855702U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.56535319738);
    msg.setSource(40967U);
    msg.setSourceEntity(193U);
    msg.setDestination(15913U);
    msg.setDestinationEntity(30U);
    msg.id = 17U;
    msg.period = 4261658501U;
    msg.duty_cycle = 2211362388U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.644918219684);
    msg.setSource(13146U);
    msg.setSourceEntity(124U);
    msg.setDestination(15325U);
    msg.setDestinationEntity(112U);
    msg.id = 37U;
    msg.period = 390938029U;
    msg.duty_cycle = 149638696U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.144567739222);
    msg.setSource(13476U);
    msg.setSourceEntity(105U);
    msg.setDestination(3937U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.809618166486;
    msg.lon = 0.949216271637;
    msg.height = 0.926754553386;
    msg.x = 0.942441547811;
    msg.y = 0.904298283043;
    msg.z = 0.602462113075;
    msg.phi = 0.29070820432;
    msg.theta = 0.530140651509;
    msg.psi = 0.676063232181;
    msg.u = 0.765972370901;
    msg.v = 0.27794369717;
    msg.w = 0.593091177809;
    msg.vx = 0.735557888608;
    msg.vy = 0.0108391657154;
    msg.vz = 0.98218533849;
    msg.p = 0.203607329131;
    msg.q = 0.702780683708;
    msg.r = 0.036725857865;
    msg.depth = 0.0255366122986;
    msg.alt = 0.892595794411;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.158622973124);
    msg.setSource(28703U);
    msg.setSourceEntity(163U);
    msg.setDestination(58091U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.269478579511;
    msg.lon = 0.165093587125;
    msg.height = 0.348619224315;
    msg.x = 0.885695624857;
    msg.y = 0.223741238593;
    msg.z = 0.972239187963;
    msg.phi = 0.0508240682708;
    msg.theta = 0.394275622388;
    msg.psi = 0.371916050502;
    msg.u = 0.539153277332;
    msg.v = 0.530104953012;
    msg.w = 0.27077893791;
    msg.vx = 0.0834330235957;
    msg.vy = 0.0289062074674;
    msg.vz = 0.525649953781;
    msg.p = 0.417717930137;
    msg.q = 0.612048427931;
    msg.r = 0.934009339508;
    msg.depth = 0.169243286088;
    msg.alt = 0.214404556732;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.552135062645);
    msg.setSource(27717U);
    msg.setSourceEntity(89U);
    msg.setDestination(42724U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.828164826566;
    msg.lon = 0.982561172532;
    msg.height = 0.719550769692;
    msg.x = 0.453708401401;
    msg.y = 0.552432674233;
    msg.z = 0.163419034273;
    msg.phi = 0.0412247210702;
    msg.theta = 0.0308740391037;
    msg.psi = 0.594681030644;
    msg.u = 0.0505849281874;
    msg.v = 0.525916710942;
    msg.w = 0.403808690073;
    msg.vx = 0.802008759906;
    msg.vy = 0.680641404065;
    msg.vz = 0.472860407109;
    msg.p = 0.647592799278;
    msg.q = 0.632775371777;
    msg.r = 0.748491928453;
    msg.depth = 0.387649193218;
    msg.alt = 0.00184060135577;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.556867113642);
    msg.setSource(28729U);
    msg.setSourceEntity(160U);
    msg.setDestination(49260U);
    msg.setDestinationEntity(70U);
    msg.x = 0.315068901695;
    msg.y = 0.299413890717;
    msg.z = 0.0641294199355;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.763792403693);
    msg.setSource(27680U);
    msg.setSourceEntity(25U);
    msg.setDestination(6111U);
    msg.setDestinationEntity(73U);
    msg.x = 0.298711803025;
    msg.y = 0.514145935077;
    msg.z = 0.714652723507;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.135667397924);
    msg.setSource(16526U);
    msg.setSourceEntity(177U);
    msg.setDestination(33082U);
    msg.setDestinationEntity(246U);
    msg.x = 0.293357435834;
    msg.y = 0.251185261747;
    msg.z = 0.612007761105;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.0971879867666);
    msg.setSource(51596U);
    msg.setSourceEntity(11U);
    msg.setDestination(259U);
    msg.setDestinationEntity(40U);
    msg.value = 0.591387447979;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.237880823101);
    msg.setSource(56785U);
    msg.setSourceEntity(217U);
    msg.setDestination(35694U);
    msg.setDestinationEntity(250U);
    msg.value = 0.958223147797;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.385765422763);
    msg.setSource(3088U);
    msg.setSourceEntity(150U);
    msg.setDestination(7548U);
    msg.setDestinationEntity(182U);
    msg.value = 0.520888796281;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.26247126262);
    msg.setSource(12029U);
    msg.setSourceEntity(235U);
    msg.setDestination(20763U);
    msg.setDestinationEntity(165U);
    msg.value = 0.0976194469195;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.557958674825);
    msg.setSource(44039U);
    msg.setSourceEntity(146U);
    msg.setDestination(50355U);
    msg.setDestinationEntity(110U);
    msg.value = 0.917239378597;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.62131350052);
    msg.setSource(19760U);
    msg.setSourceEntity(97U);
    msg.setDestination(16371U);
    msg.setDestinationEntity(162U);
    msg.value = 0.242532646593;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.314709603364);
    msg.setSource(41009U);
    msg.setSourceEntity(30U);
    msg.setDestination(22993U);
    msg.setDestinationEntity(218U);
    msg.x = 0.0427081686816;
    msg.y = 0.109823261266;
    msg.z = 0.276279689061;
    msg.phi = 0.50448556268;
    msg.theta = 0.738474545884;
    msg.psi = 0.853815403732;
    msg.p = 0.343243910593;
    msg.q = 0.244829094169;
    msg.r = 0.654716392263;
    msg.u = 0.733999511709;
    msg.v = 0.517593220727;
    msg.w = 0.281375487914;
    msg.bias_psi = 0.298975985596;
    msg.bias_r = 0.198053935374;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.5967212382);
    msg.setSource(33422U);
    msg.setSourceEntity(196U);
    msg.setDestination(9146U);
    msg.setDestinationEntity(127U);
    msg.x = 0.723609822113;
    msg.y = 0.129310984996;
    msg.z = 0.470845067467;
    msg.phi = 0.785399066509;
    msg.theta = 0.56478183429;
    msg.psi = 0.1446070101;
    msg.p = 0.0596102935471;
    msg.q = 0.484428850941;
    msg.r = 0.917662808242;
    msg.u = 0.414227551277;
    msg.v = 0.374419301541;
    msg.w = 0.0652042066676;
    msg.bias_psi = 0.256815936571;
    msg.bias_r = 0.762588933191;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.484648819514);
    msg.setSource(19456U);
    msg.setSourceEntity(62U);
    msg.setDestination(30563U);
    msg.setDestinationEntity(241U);
    msg.x = 0.915192182429;
    msg.y = 0.770749374786;
    msg.z = 0.331869924054;
    msg.phi = 0.258731041636;
    msg.theta = 0.856863630081;
    msg.psi = 0.401881843089;
    msg.p = 0.94078226553;
    msg.q = 0.191195906268;
    msg.r = 0.718183301683;
    msg.u = 0.699833877519;
    msg.v = 0.205050311762;
    msg.w = 0.92972923381;
    msg.bias_psi = 0.94402684186;
    msg.bias_r = 0.552049609625;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.349098939301);
    msg.setSource(57037U);
    msg.setSourceEntity(99U);
    msg.setDestination(5295U);
    msg.setDestinationEntity(60U);
    msg.bias_psi = 0.173983666708;
    msg.bias_r = 0.160633107948;
    msg.cog = 0.703643760237;
    msg.cyaw = 0.662387701754;
    msg.gps_rej_level = 0.523679696766;
    msg.lbl_rej_level = 0.409142526392;
    msg.custom_x = 0.672316556628;
    msg.custom_y = 0.105089100195;
    msg.custom_z = 0.876478883532;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.639916761885);
    msg.setSource(24508U);
    msg.setSourceEntity(12U);
    msg.setDestination(22084U);
    msg.setDestinationEntity(21U);
    msg.bias_psi = 0.18617809855;
    msg.bias_r = 0.692955712423;
    msg.cog = 0.297310654259;
    msg.cyaw = 0.0990996497615;
    msg.gps_rej_level = 0.699967005729;
    msg.lbl_rej_level = 0.00497880868922;
    msg.custom_x = 0.910359100375;
    msg.custom_y = 0.811319601073;
    msg.custom_z = 0.197895068647;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.42392171718);
    msg.setSource(49835U);
    msg.setSourceEntity(175U);
    msg.setDestination(42862U);
    msg.setDestinationEntity(17U);
    msg.bias_psi = 0.422594829629;
    msg.bias_r = 0.213675674266;
    msg.cog = 0.156852653525;
    msg.cyaw = 0.147367379822;
    msg.gps_rej_level = 0.85054341919;
    msg.lbl_rej_level = 0.972688942722;
    msg.custom_x = 0.944626119457;
    msg.custom_y = 0.998812011942;
    msg.custom_z = 0.0297361284227;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.676098270692);
    msg.setSource(56367U);
    msg.setSourceEntity(147U);
    msg.setDestination(34150U);
    msg.setDestinationEntity(205U);
    msg.utc_time = 0.555247772576;
    msg.reason = 230U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.297114762219);
    msg.setSource(22612U);
    msg.setSourceEntity(130U);
    msg.setDestination(44121U);
    msg.setDestinationEntity(10U);
    msg.utc_time = 0.737058681723;
    msg.reason = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.475711697649);
    msg.setSource(26114U);
    msg.setSourceEntity(82U);
    msg.setDestination(34240U);
    msg.setDestinationEntity(130U);
    msg.utc_time = 0.749293692361;
    msg.reason = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.0640240247677);
    msg.setSource(41034U);
    msg.setSourceEntity(65U);
    msg.setDestination(52631U);
    msg.setDestinationEntity(122U);
    msg.id = 125U;
    msg.range = 0.367107953227;
    msg.acceptance = 178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.980727621595);
    msg.setSource(62759U);
    msg.setSourceEntity(215U);
    msg.setDestination(23304U);
    msg.setDestinationEntity(129U);
    msg.id = 242U;
    msg.range = 0.473002839236;
    msg.acceptance = 220U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.258147423966);
    msg.setSource(52877U);
    msg.setSourceEntity(45U);
    msg.setDestination(64516U);
    msg.setDestinationEntity(127U);
    msg.id = 5U;
    msg.range = 0.334835833643;
    msg.acceptance = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.272594055806);
    msg.setSource(58600U);
    msg.setSourceEntity(185U);
    msg.setDestination(45761U);
    msg.setDestinationEntity(123U);
    msg.type = 162U;
    msg.reason = 96U;
    msg.value = 0.34987834592;
    msg.timestep = 0.922594650526;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.87702532724);
    msg.setSource(50886U);
    msg.setSourceEntity(28U);
    msg.setDestination(31680U);
    msg.setDestinationEntity(74U);
    msg.type = 133U;
    msg.reason = 28U;
    msg.value = 0.0582565751696;
    msg.timestep = 0.644789601391;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.907434060006);
    msg.setSource(8669U);
    msg.setSourceEntity(79U);
    msg.setDestination(18887U);
    msg.setDestinationEntity(252U);
    msg.type = 69U;
    msg.reason = 135U;
    msg.value = 0.0997337564969;
    msg.timestep = 0.503882630844;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.18688534918);
    msg.setSource(42080U);
    msg.setSourceEntity(18U);
    msg.setDestination(173U);
    msg.setDestinationEntity(54U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IBBJFHRMQMGONXCOPPOUHVLGMCHVCDRVWQZZLPDTEWDILQELIAHIDIQFJLVTRWJCUNCFMICNNAJZAVQZLPMORMZQSEWWYZFEEHYRUSQQFUMKXNAASUMWSAFTOPPDJPXXJYPTIXRKYTPJSKBTYGEOXMBEKXKRLFZUYVNWYEAVNXAQBKIFGTOUSKEGKSDRQKXCWCTBHKMDZYOZGHNEVGVIWATWBXJA");
    tmp_msg_0.lat = 0.06510703554;
    tmp_msg_0.lon = 0.159736621209;
    tmp_msg_0.depth = 0.219994506838;
    tmp_msg_0.query_channel = 102U;
    tmp_msg_0.reply_channel = 78U;
    tmp_msg_0.transponder_delay = 4U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.431413834497;
    msg.y = 0.326886640574;
    msg.var_x = 0.600970790733;
    msg.var_y = 0.820643714707;
    msg.distance = 0.541474570815;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.675362387405);
    msg.setSource(21026U);
    msg.setSourceEntity(216U);
    msg.setDestination(50609U);
    msg.setDestinationEntity(51U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HWPVMAEANFQDMSUKEZYRXVCEQJBJSGSYCBMIESOFLRAAZOLLWSLWJTNVEDWGBHTTQUIQHYDJRVMZXVHYZRJRQTBPWEAWISFPMVZVPIKCTWCCCEDSFJOLHXGKCVIDMGEHGINHYCKPPGJFGYFEDJBJZSZUITSGFOQSURULFXUNVXUHKZBYNTUXWVBARLGHKIOMOHDGALKXOPPQRARZKNYEMDIUWPDTYRCTNQBWJLXMBDIOFXUPTANNKB");
    tmp_msg_0.lat = 0.0727776963097;
    tmp_msg_0.lon = 0.774820750098;
    tmp_msg_0.depth = 0.769611491099;
    tmp_msg_0.query_channel = 202U;
    tmp_msg_0.reply_channel = 206U;
    tmp_msg_0.transponder_delay = 83U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0368626360736;
    msg.y = 0.25726757345;
    msg.var_x = 0.528961000206;
    msg.var_y = 0.359691740473;
    msg.distance = 0.683883261172;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.474008306492);
    msg.setSource(43139U);
    msg.setSourceEntity(146U);
    msg.setDestination(39584U);
    msg.setDestinationEntity(202U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YKYLBFFPEQOYKMMAYOHOHTIIZRCHTE");
    tmp_msg_0.lat = 0.783141626366;
    tmp_msg_0.lon = 0.42976825948;
    tmp_msg_0.depth = 0.445831894895;
    tmp_msg_0.query_channel = 90U;
    tmp_msg_0.reply_channel = 7U;
    tmp_msg_0.transponder_delay = 159U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.768582767563;
    msg.y = 0.614083704772;
    msg.var_x = 0.585224288166;
    msg.var_y = 0.611908932474;
    msg.distance = 0.0763368970951;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.697287081397);
    msg.setSource(64707U);
    msg.setSourceEntity(136U);
    msg.setDestination(38741U);
    msg.setDestinationEntity(52U);
    msg.state = 127U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.974689197715);
    msg.setSource(49742U);
    msg.setSourceEntity(125U);
    msg.setDestination(18907U);
    msg.setDestinationEntity(126U);
    msg.state = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.132165726022);
    msg.setSource(25470U);
    msg.setSourceEntity(186U);
    msg.setDestination(42722U);
    msg.setDestinationEntity(221U);
    msg.state = 23U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.633621137052);
    msg.setSource(12863U);
    msg.setSourceEntity(10U);
    msg.setDestination(12293U);
    msg.setDestinationEntity(168U);
    msg.x = 0.347970994516;
    msg.y = 0.374350176684;
    msg.z = 0.372882438665;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.662643591266);
    msg.setSource(49993U);
    msg.setSourceEntity(61U);
    msg.setDestination(8421U);
    msg.setDestinationEntity(172U);
    msg.x = 0.443658480456;
    msg.y = 0.91600085788;
    msg.z = 0.39131219736;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.408600274169);
    msg.setSource(24310U);
    msg.setSourceEntity(207U);
    msg.setDestination(51395U);
    msg.setDestinationEntity(10U);
    msg.x = 0.328112059538;
    msg.y = 0.0647566599855;
    msg.z = 0.084396592341;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.501832134501);
    msg.setSource(20810U);
    msg.setSourceEntity(247U);
    msg.setDestination(15011U);
    msg.setDestinationEntity(34U);
    msg.va = 0.594943513637;
    msg.aoa = 0.306340927357;
    msg.ssa = 0.992382718646;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.0759797395818);
    msg.setSource(8534U);
    msg.setSourceEntity(95U);
    msg.setDestination(20938U);
    msg.setDestinationEntity(156U);
    msg.va = 0.296751737242;
    msg.aoa = 0.888424909737;
    msg.ssa = 0.625882176473;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.691306149602);
    msg.setSource(48605U);
    msg.setSourceEntity(0U);
    msg.setDestination(39415U);
    msg.setDestinationEntity(2U);
    msg.va = 0.248041933271;
    msg.aoa = 0.324730949466;
    msg.ssa = 0.635233660507;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ObstacleState msg;
    msg.setTimeStamp(0.141568808285);
    msg.setSource(5627U);
    msg.setSourceEntity(37U);
    msg.setDestination(1961U);
    msg.setDestinationEntity(153U);
    msg.mmsi = 2569080683U;
    msg.lon = 0.686443592724;
    msg.lat = 0.58662451465;
    msg.x = 0.714118201627;
    msg.y = 0.99428687054;
    msg.psi = 0.248302031431;
    msg.u = 0.571253689794;
    msg.v = 0.421584709994;
    msg.a = 0.416220717267;
    msg.b = 0.925956850054;
    msg.c = 0.0841568222249;
    msg.d = 0.669841190692;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ObstacleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ObstacleState msg;
    msg.setTimeStamp(0.681067425211);
    msg.setSource(13911U);
    msg.setSourceEntity(13U);
    msg.setDestination(64414U);
    msg.setDestinationEntity(119U);
    msg.mmsi = 3894213033U;
    msg.lon = 0.305591911683;
    msg.lat = 0.51681851235;
    msg.x = 0.923198590354;
    msg.y = 0.321281276244;
    msg.psi = 0.0163328664693;
    msg.u = 0.337376978047;
    msg.v = 0.936898952189;
    msg.a = 0.0593093284621;
    msg.b = 0.536584485227;
    msg.c = 0.211224440919;
    msg.d = 0.163314706098;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ObstacleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ObstacleState msg;
    msg.setTimeStamp(0.21975653362);
    msg.setSource(2066U);
    msg.setSourceEntity(87U);
    msg.setDestination(62950U);
    msg.setDestinationEntity(245U);
    msg.mmsi = 3947049893U;
    msg.lon = 0.569480142315;
    msg.lat = 0.4315425221;
    msg.x = 0.639690865706;
    msg.y = 0.361494362129;
    msg.psi = 0.573077096894;
    msg.u = 0.641405417683;
    msg.v = 0.535501221226;
    msg.a = 0.440165464932;
    msg.b = 0.311501905694;
    msg.c = 0.134878489912;
    msg.d = 0.145226675507;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ObstacleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.493205326917);
    msg.setSource(22920U);
    msg.setSourceEntity(224U);
    msg.setDestination(27490U);
    msg.setDestinationEntity(113U);
    msg.value = 0.0485020089547;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.0821950913105);
    msg.setSource(40820U);
    msg.setSourceEntity(87U);
    msg.setDestination(8937U);
    msg.setDestinationEntity(2U);
    msg.value = 0.524052625136;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.796755342954);
    msg.setSource(43490U);
    msg.setSourceEntity(195U);
    msg.setDestination(44801U);
    msg.setDestinationEntity(0U);
    msg.value = 0.0226506192819;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.756018788622);
    msg.setSource(5139U);
    msg.setSourceEntity(101U);
    msg.setDestination(42764U);
    msg.setDestinationEntity(131U);
    msg.value = 0.278663473465;
    msg.z_units = 7U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.0504537973778);
    msg.setSource(59239U);
    msg.setSourceEntity(239U);
    msg.setDestination(21969U);
    msg.setDestinationEntity(69U);
    msg.value = 0.674485220889;
    msg.z_units = 57U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.808049441684);
    msg.setSource(224U);
    msg.setSourceEntity(237U);
    msg.setDestination(16703U);
    msg.setDestinationEntity(240U);
    msg.value = 0.311106399295;
    msg.z_units = 84U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.593865685827);
    msg.setSource(48981U);
    msg.setSourceEntity(150U);
    msg.setDestination(35641U);
    msg.setDestinationEntity(105U);
    msg.value = 0.71153521359;
    msg.speed_units = 234U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.0831405624982);
    msg.setSource(6744U);
    msg.setSourceEntity(187U);
    msg.setDestination(63701U);
    msg.setDestinationEntity(204U);
    msg.value = 0.174110647538;
    msg.speed_units = 147U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.122792468374);
    msg.setSource(31729U);
    msg.setSourceEntity(21U);
    msg.setDestination(31036U);
    msg.setDestinationEntity(106U);
    msg.value = 0.525528112343;
    msg.speed_units = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.602246835403);
    msg.setSource(65363U);
    msg.setSourceEntity(29U);
    msg.setDestination(61536U);
    msg.setDestinationEntity(204U);
    msg.value = 0.169774538212;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.00619601944878);
    msg.setSource(7892U);
    msg.setSourceEntity(169U);
    msg.setDestination(37788U);
    msg.setDestinationEntity(94U);
    msg.value = 0.987325057272;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.859785925778);
    msg.setSource(565U);
    msg.setSourceEntity(191U);
    msg.setDestination(49876U);
    msg.setDestinationEntity(16U);
    msg.value = 0.45961992197;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.201763499365);
    msg.setSource(14461U);
    msg.setSourceEntity(158U);
    msg.setDestination(29882U);
    msg.setDestinationEntity(170U);
    msg.value = 0.804617196256;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.935463315168);
    msg.setSource(55944U);
    msg.setSourceEntity(121U);
    msg.setDestination(57744U);
    msg.setDestinationEntity(7U);
    msg.value = 0.120630521546;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.268999981886);
    msg.setSource(32806U);
    msg.setSourceEntity(38U);
    msg.setDestination(32514U);
    msg.setDestinationEntity(9U);
    msg.value = 0.87991104877;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.029535317409);
    msg.setSource(26427U);
    msg.setSourceEntity(102U);
    msg.setDestination(58518U);
    msg.setDestinationEntity(119U);
    msg.value = 0.478276939407;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.0385549647009);
    msg.setSource(11278U);
    msg.setSourceEntity(189U);
    msg.setDestination(29150U);
    msg.setDestinationEntity(125U);
    msg.value = 0.615782173348;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.788709675302);
    msg.setSource(28155U);
    msg.setSourceEntity(169U);
    msg.setDestination(55587U);
    msg.setDestinationEntity(146U);
    msg.value = 0.287899369222;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.778711966679);
    msg.setSource(16055U);
    msg.setSourceEntity(134U);
    msg.setDestination(50541U);
    msg.setDestinationEntity(119U);
    msg.path_ref = 3130395577U;
    msg.start_lat = 0.111381563826;
    msg.start_lon = 0.594014866508;
    msg.start_z = 0.732004621089;
    msg.start_z_units = 19U;
    msg.end_lat = 0.403404842837;
    msg.end_lon = 0.243263791875;
    msg.end_z = 0.808029151707;
    msg.end_z_units = 1U;
    msg.speed = 0.883392313503;
    msg.speed_units = 88U;
    msg.lradius = 0.584926507514;
    msg.flags = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.107420705942);
    msg.setSource(50671U);
    msg.setSourceEntity(249U);
    msg.setDestination(48316U);
    msg.setDestinationEntity(164U);
    msg.path_ref = 519765538U;
    msg.start_lat = 0.415829753527;
    msg.start_lon = 0.933197877275;
    msg.start_z = 0.110478846416;
    msg.start_z_units = 193U;
    msg.end_lat = 0.551521883429;
    msg.end_lon = 0.376759959142;
    msg.end_z = 0.559162304683;
    msg.end_z_units = 232U;
    msg.speed = 0.976417034337;
    msg.speed_units = 119U;
    msg.lradius = 0.0429383181008;
    msg.flags = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.459005586859);
    msg.setSource(63998U);
    msg.setSourceEntity(37U);
    msg.setDestination(57743U);
    msg.setDestinationEntity(110U);
    msg.path_ref = 507268357U;
    msg.start_lat = 0.949767707542;
    msg.start_lon = 0.799504934533;
    msg.start_z = 0.503351759646;
    msg.start_z_units = 151U;
    msg.end_lat = 0.536050695154;
    msg.end_lon = 0.612746995202;
    msg.end_z = 0.311260827298;
    msg.end_z_units = 176U;
    msg.speed = 0.539428015403;
    msg.speed_units = 117U;
    msg.lradius = 0.372502057087;
    msg.flags = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.854884539786);
    msg.setSource(17673U);
    msg.setSourceEntity(139U);
    msg.setDestination(61107U);
    msg.setDestinationEntity(155U);
    msg.x = 0.162266205391;
    msg.y = 0.376934120596;
    msg.z = 0.443362185067;
    msg.k = 0.986219700852;
    msg.m = 0.340151509361;
    msg.n = 0.613225363742;
    msg.flags = 50U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.194262251265);
    msg.setSource(51685U);
    msg.setSourceEntity(32U);
    msg.setDestination(56308U);
    msg.setDestinationEntity(166U);
    msg.x = 0.356361767042;
    msg.y = 0.517887286564;
    msg.z = 0.209960066806;
    msg.k = 0.267049822271;
    msg.m = 0.0521303768041;
    msg.n = 0.40974095113;
    msg.flags = 133U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.428148743257);
    msg.setSource(36529U);
    msg.setSourceEntity(232U);
    msg.setDestination(61436U);
    msg.setDestinationEntity(154U);
    msg.x = 0.210557985719;
    msg.y = 0.214232216595;
    msg.z = 0.410231182327;
    msg.k = 0.430183494008;
    msg.m = 0.976284928088;
    msg.n = 0.973377728251;
    msg.flags = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.132917175139);
    msg.setSource(63338U);
    msg.setSourceEntity(123U);
    msg.setDestination(31912U);
    msg.setDestinationEntity(135U);
    msg.value = 0.761660638714;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.597023990468);
    msg.setSource(61133U);
    msg.setSourceEntity(29U);
    msg.setDestination(22258U);
    msg.setDestinationEntity(89U);
    msg.value = 0.905757042258;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.317150485642);
    msg.setSource(54372U);
    msg.setSourceEntity(92U);
    msg.setDestination(45697U);
    msg.setDestinationEntity(8U);
    msg.value = 0.676067865879;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.325007258358);
    msg.setSource(60507U);
    msg.setSourceEntity(43U);
    msg.setDestination(48961U);
    msg.setDestinationEntity(170U);
    msg.u = 0.36323462816;
    msg.v = 0.320088420644;
    msg.w = 0.692916865157;
    msg.p = 0.0326048863785;
    msg.q = 0.562988539072;
    msg.r = 0.900802893383;
    msg.flags = 231U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.349989529725);
    msg.setSource(44456U);
    msg.setSourceEntity(61U);
    msg.setDestination(64502U);
    msg.setDestinationEntity(194U);
    msg.u = 0.585309999563;
    msg.v = 0.804483803995;
    msg.w = 0.838304890428;
    msg.p = 0.483824526651;
    msg.q = 0.644353805878;
    msg.r = 0.0520261534933;
    msg.flags = 187U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.193157118301);
    msg.setSource(62576U);
    msg.setSourceEntity(225U);
    msg.setDestination(65210U);
    msg.setDestinationEntity(141U);
    msg.u = 0.596097566734;
    msg.v = 0.13565318391;
    msg.w = 0.573750037229;
    msg.p = 0.905412937999;
    msg.q = 0.676275398277;
    msg.r = 0.739821900739;
    msg.flags = 222U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.749220510533);
    msg.setSource(41848U);
    msg.setSourceEntity(230U);
    msg.setDestination(36563U);
    msg.setDestinationEntity(200U);
    msg.path_ref = 1302293092U;
    msg.start_lat = 0.715616993621;
    msg.start_lon = 0.950438238528;
    msg.start_z = 0.140795183463;
    msg.start_z_units = 187U;
    msg.end_lat = 0.981566418971;
    msg.end_lon = 0.571258373379;
    msg.end_z = 0.611520422704;
    msg.end_z_units = 82U;
    msg.lradius = 0.386498326024;
    msg.flags = 235U;
    msg.x = 0.909681789124;
    msg.y = 0.581544625701;
    msg.z = 0.464560872793;
    msg.vx = 0.244535651038;
    msg.vy = 0.504471060568;
    msg.vz = 0.824486610061;
    msg.course_error = 0.828940429524;
    msg.eta = 57874U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.819371971042);
    msg.setSource(17109U);
    msg.setSourceEntity(70U);
    msg.setDestination(43001U);
    msg.setDestinationEntity(137U);
    msg.path_ref = 969346323U;
    msg.start_lat = 0.717848313195;
    msg.start_lon = 0.911964859247;
    msg.start_z = 0.214945881456;
    msg.start_z_units = 79U;
    msg.end_lat = 0.858702535254;
    msg.end_lon = 0.917806702862;
    msg.end_z = 0.186446839772;
    msg.end_z_units = 105U;
    msg.lradius = 0.750164439785;
    msg.flags = 96U;
    msg.x = 0.852695344653;
    msg.y = 0.124353068269;
    msg.z = 0.568429595619;
    msg.vx = 0.932475331499;
    msg.vy = 0.271318603708;
    msg.vz = 0.444268670936;
    msg.course_error = 0.377857872315;
    msg.eta = 60103U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.669996706948);
    msg.setSource(29344U);
    msg.setSourceEntity(185U);
    msg.setDestination(20400U);
    msg.setDestinationEntity(3U);
    msg.path_ref = 2205842773U;
    msg.start_lat = 0.836884403972;
    msg.start_lon = 0.534790582109;
    msg.start_z = 0.812705137816;
    msg.start_z_units = 97U;
    msg.end_lat = 0.343492226961;
    msg.end_lon = 0.388408413748;
    msg.end_z = 0.309756339643;
    msg.end_z_units = 81U;
    msg.lradius = 0.0294487189451;
    msg.flags = 153U;
    msg.x = 0.20257268337;
    msg.y = 0.670879783183;
    msg.z = 0.454875495708;
    msg.vx = 0.435117150294;
    msg.vy = 0.360199073642;
    msg.vz = 0.31031237571;
    msg.course_error = 0.869659112327;
    msg.eta = 4888U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.0544999685269);
    msg.setSource(58853U);
    msg.setSourceEntity(59U);
    msg.setDestination(40999U);
    msg.setDestinationEntity(254U);
    msg.k = 0.411587151013;
    msg.m = 0.25531683438;
    msg.n = 0.243751835541;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.166295815041);
    msg.setSource(20502U);
    msg.setSourceEntity(37U);
    msg.setDestination(29760U);
    msg.setDestinationEntity(15U);
    msg.k = 0.0425485898844;
    msg.m = 0.279814046957;
    msg.n = 0.997564520592;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.0460781944072);
    msg.setSource(49494U);
    msg.setSourceEntity(8U);
    msg.setDestination(62700U);
    msg.setDestinationEntity(239U);
    msg.k = 0.506959722405;
    msg.m = 0.384273046253;
    msg.n = 0.0906944103256;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.976067667981);
    msg.setSource(6752U);
    msg.setSourceEntity(159U);
    msg.setDestination(28205U);
    msg.setDestinationEntity(163U);
    msg.p = 0.436174288291;
    msg.i = 0.445347268375;
    msg.d = 0.705648572538;
    msg.a = 0.988891827195;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.217542849784);
    msg.setSource(37880U);
    msg.setSourceEntity(87U);
    msg.setDestination(7007U);
    msg.setDestinationEntity(101U);
    msg.p = 0.864721297288;
    msg.i = 0.132765722058;
    msg.d = 0.572726326457;
    msg.a = 0.771220338599;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.513315820745);
    msg.setSource(51299U);
    msg.setSourceEntity(155U);
    msg.setDestination(44471U);
    msg.setDestinationEntity(174U);
    msg.p = 0.488340156161;
    msg.i = 0.253939126786;
    msg.d = 0.363658781996;
    msg.a = 0.752286022258;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.0921141675449);
    msg.setSource(653U);
    msg.setSourceEntity(100U);
    msg.setDestination(49912U);
    msg.setDestinationEntity(191U);
    msg.op = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.775337565874);
    msg.setSource(51874U);
    msg.setSourceEntity(36U);
    msg.setDestination(9856U);
    msg.setDestinationEntity(210U);
    msg.op = 65U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.505339645661);
    msg.setSource(50514U);
    msg.setSourceEntity(166U);
    msg.setDestination(39072U);
    msg.setDestinationEntity(106U);
    msg.op = 243U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.414898029315);
    msg.setSource(47964U);
    msg.setSourceEntity(175U);
    msg.setDestination(607U);
    msg.setDestinationEntity(48U);
    msg.x = 0.331272497539;
    msg.y = 0.502092002685;
    msg.z = 0.169472607481;
    msg.vx = 0.864723340345;
    msg.vy = 0.661507871497;
    msg.vz = 0.0157309258554;
    msg.ax = 0.313195836153;
    msg.ay = 0.108476814834;
    msg.az = 0.580834763108;
    msg.flags = 64542U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.291700527761);
    msg.setSource(51850U);
    msg.setSourceEntity(177U);
    msg.setDestination(44439U);
    msg.setDestinationEntity(155U);
    msg.x = 0.857724555337;
    msg.y = 0.445121102713;
    msg.z = 0.958624876232;
    msg.vx = 0.983395388712;
    msg.vy = 0.791611616863;
    msg.vz = 0.398542828682;
    msg.ax = 0.611608423153;
    msg.ay = 0.696292399852;
    msg.az = 0.168983316331;
    msg.flags = 12884U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.840329071771);
    msg.setSource(16528U);
    msg.setSourceEntity(57U);
    msg.setDestination(5443U);
    msg.setDestinationEntity(144U);
    msg.x = 0.199935442617;
    msg.y = 0.304567364435;
    msg.z = 0.574703001979;
    msg.vx = 0.458542295438;
    msg.vy = 0.0882578392621;
    msg.vz = 0.204818262634;
    msg.ax = 0.597135686992;
    msg.ay = 0.126321446611;
    msg.az = 0.200407859206;
    msg.flags = 59397U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.786765157684);
    msg.setSource(61248U);
    msg.setSourceEntity(249U);
    msg.setDestination(10800U);
    msg.setDestinationEntity(21U);
    msg.value = 0.968591338601;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.760877781268);
    msg.setSource(36541U);
    msg.setSourceEntity(183U);
    msg.setDestination(20030U);
    msg.setDestinationEntity(84U);
    msg.value = 0.113348909015;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.231287462693);
    msg.setSource(42970U);
    msg.setSourceEntity(82U);
    msg.setDestination(49901U);
    msg.setDestinationEntity(149U);
    msg.value = 0.540288152307;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PeekDesiredPath msg;
    msg.setTimeStamp(0.0179065630895);
    msg.setSource(57245U);
    msg.setSourceEntity(44U);
    msg.setDestination(9894U);
    msg.setDestinationEntity(122U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 580552188U;
    tmp_msg_0.start_lat = 0.810823531306;
    tmp_msg_0.start_lon = 0.720040928886;
    tmp_msg_0.start_z = 0.770100230917;
    tmp_msg_0.start_z_units = 114U;
    tmp_msg_0.end_lat = 0.286764986955;
    tmp_msg_0.end_lon = 0.547123663299;
    tmp_msg_0.end_z = 0.458922432327;
    tmp_msg_0.end_z_units = 38U;
    tmp_msg_0.speed = 0.374149508167;
    tmp_msg_0.speed_units = 167U;
    tmp_msg_0.lradius = 0.508196843004;
    tmp_msg_0.flags = 84U;
    msg.dpath.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PeekDesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PeekDesiredPath msg;
    msg.setTimeStamp(0.257142688878);
    msg.setSource(4148U);
    msg.setSourceEntity(117U);
    msg.setDestination(23316U);
    msg.setDestinationEntity(117U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1081842107U;
    tmp_msg_0.start_lat = 0.59156712032;
    tmp_msg_0.start_lon = 0.00729759039287;
    tmp_msg_0.start_z = 0.892066976986;
    tmp_msg_0.start_z_units = 148U;
    tmp_msg_0.end_lat = 0.560096084357;
    tmp_msg_0.end_lon = 0.825016705432;
    tmp_msg_0.end_z = 0.671700373034;
    tmp_msg_0.end_z_units = 108U;
    tmp_msg_0.speed = 0.399128143492;
    tmp_msg_0.speed_units = 107U;
    tmp_msg_0.lradius = 0.210016314058;
    tmp_msg_0.flags = 243U;
    msg.dpath.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PeekDesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PeekDesiredPath msg;
    msg.setTimeStamp(0.252631789375);
    msg.setSource(54769U);
    msg.setSourceEntity(25U);
    msg.setDestination(49995U);
    msg.setDestinationEntity(6U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1534950408U;
    tmp_msg_0.start_lat = 0.113236196947;
    tmp_msg_0.start_lon = 0.559198611157;
    tmp_msg_0.start_z = 0.904882587653;
    tmp_msg_0.start_z_units = 230U;
    tmp_msg_0.end_lat = 0.412589604844;
    tmp_msg_0.end_lon = 0.100089736586;
    tmp_msg_0.end_z = 0.952244314498;
    tmp_msg_0.end_z_units = 226U;
    tmp_msg_0.speed = 0.707643003444;
    tmp_msg_0.speed_units = 70U;
    tmp_msg_0.lradius = 0.801314571597;
    tmp_msg_0.flags = 127U;
    msg.dpath.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PeekDesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.756832994308);
    msg.setSource(24860U);
    msg.setSourceEntity(75U);
    msg.setDestination(50677U);
    msg.setDestinationEntity(14U);
    msg.timeout = 42386U;
    msg.lat = 0.629480513348;
    msg.lon = 0.765741582395;
    msg.z = 0.754342242844;
    msg.z_units = 122U;
    msg.speed = 0.909876297219;
    msg.speed_units = 135U;
    msg.roll = 0.9574226052;
    msg.pitch = 0.84761112305;
    msg.yaw = 0.882633606578;
    msg.custom.assign("QUYVPBQPPFASSWMXGBIULLKOVCRAPFPGIHPDEUYAIZURBXKFOVPMQGMXQVTQFRTIAXEMFBVCXUJSHJEDISCGTDBKXWYKNANWEHH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.751094911039);
    msg.setSource(37512U);
    msg.setSourceEntity(45U);
    msg.setDestination(31768U);
    msg.setDestinationEntity(243U);
    msg.timeout = 8671U;
    msg.lat = 0.296702601849;
    msg.lon = 0.390060074586;
    msg.z = 0.022864417805;
    msg.z_units = 195U;
    msg.speed = 0.556785467551;
    msg.speed_units = 195U;
    msg.roll = 0.658199789301;
    msg.pitch = 0.845260454652;
    msg.yaw = 0.580295933854;
    msg.custom.assign("TZAWXPXXBZUQTAMRSW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.697574607962);
    msg.setSource(42308U);
    msg.setSourceEntity(131U);
    msg.setDestination(31699U);
    msg.setDestinationEntity(81U);
    msg.timeout = 54666U;
    msg.lat = 0.634625902159;
    msg.lon = 0.74436772784;
    msg.z = 0.345007351347;
    msg.z_units = 213U;
    msg.speed = 0.226578996939;
    msg.speed_units = 85U;
    msg.roll = 0.357994551488;
    msg.pitch = 0.828685363292;
    msg.yaw = 0.0661270245333;
    msg.custom.assign("UFYDCPJTPEJTDSTYGVXYFKSAQXLQPZRLOEMEIOMAMMODZRMNIHRDVTNLTTNBFZDBXRWUB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.566880463113);
    msg.setSource(53096U);
    msg.setSourceEntity(160U);
    msg.setDestination(45504U);
    msg.setDestinationEntity(126U);
    msg.timeout = 61655U;
    msg.lat = 0.962450700034;
    msg.lon = 0.814108697264;
    msg.z = 0.358445701598;
    msg.z_units = 26U;
    msg.speed = 0.849441724569;
    msg.speed_units = 200U;
    msg.duration = 33771U;
    msg.radius = 0.775198227506;
    msg.flags = 73U;
    msg.custom.assign("UNRNFOCWSZOFNTKAKVSFEOLLYCBCKZVQMDSRXWRZCHEBMYDMFDHQXCPXUQKXGELMTHZBXJLPYWNYAEPWXNUJIHEJGHRPOHLEFDJQEDUDWBJMSTYULBUASEUTRHZPEWRIFNGLLSCMIFVNJVQWQQOXZATKGPWCBKVYYBDGHYKZHZMKCDSLVXIGPAKAABBQG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.796192344211);
    msg.setSource(38922U);
    msg.setSourceEntity(32U);
    msg.setDestination(52192U);
    msg.setDestinationEntity(215U);
    msg.timeout = 16954U;
    msg.lat = 0.0860521539128;
    msg.lon = 0.430909836282;
    msg.z = 0.794419361933;
    msg.z_units = 88U;
    msg.speed = 0.625411704665;
    msg.speed_units = 40U;
    msg.duration = 40044U;
    msg.radius = 0.640727905408;
    msg.flags = 45U;
    msg.custom.assign("FMFGDRLZQCECHPSUDZKHUEXEJUVEQOYBJFMGYWAPZXANWSITNODKQWVXUKNAGNJWBDJZJFMQPQKRFRMLDBJGDLYVCOWVVLJZGT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.973104215289);
    msg.setSource(38370U);
    msg.setSourceEntity(227U);
    msg.setDestination(26214U);
    msg.setDestinationEntity(28U);
    msg.timeout = 48064U;
    msg.lat = 0.929179616603;
    msg.lon = 0.634184202124;
    msg.z = 0.03694610169;
    msg.z_units = 207U;
    msg.speed = 0.0482567532252;
    msg.speed_units = 44U;
    msg.duration = 17506U;
    msg.radius = 0.0494841830485;
    msg.flags = 233U;
    msg.custom.assign("JWAWMDHFPEXZJNWCJNDLDWMYPHFAACWTBXDRYNESOGOXYGKCUWVTGZRGVKVPJSEPGCQBRHQMNZXKNQGXTVVJILHTCLXOGLZGICDTUODYWRGYSNPVSHFKFOUSFFSSIOAKTUKOTIBUERHAIUBLPQTMVQQEJADKURYBBNLEJWOMIITIQOYTVLQRPMXIICFEPM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.175132495611);
    msg.setSource(3901U);
    msg.setSourceEntity(104U);
    msg.setDestination(1326U);
    msg.setDestinationEntity(198U);
    msg.custom.assign("GCJOWVWNIVDKZHKCBULUZNQAPMUTXJEBLGVTSZGDQPGEESKZHASYHDBVGDYHJNOCXILBSLARNKRISSQAAWNSWHFKYDNBNEUDJBSPEZLLUSMAYKQKSVVDFVYMIHJIFZRMBVPQUWHLIVOM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.814804905365);
    msg.setSource(4291U);
    msg.setSourceEntity(92U);
    msg.setDestination(55049U);
    msg.setDestinationEntity(53U);
    msg.custom.assign("ODESOMBCCHMKVWKFEFRBRQLJHWTFFDMIBLVFTQGIAYNTVDEXZFMPSAUHQLTOUPCGBCCJNRVMVBOZZAGHOAKRJQMCRIRJAGNVPZTZIIPWWQEUBLNEPARSCUZEAGXUMCTIOYWYLUEZCPDSEJPWZLRDWHBXCVNJHQQODODSJIMPPAZGHHHUYGAFVKDLSBNWWDP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.340945055604);
    msg.setSource(39710U);
    msg.setSourceEntity(22U);
    msg.setDestination(34655U);
    msg.setDestinationEntity(14U);
    msg.custom.assign("EOVBZEVIRQEXSYCSSXWCHZOXNBJVHFAUFJLEHJXSVQYKMPAROZFJWCNOJAVQWTQBGUXSGTEHXAOGUYIMYKPQDEPKFZILWNUSVSRCLRNSVZCR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.885759122558);
    msg.setSource(36149U);
    msg.setSourceEntity(94U);
    msg.setDestination(42790U);
    msg.setDestinationEntity(240U);
    msg.timeout = 41884U;
    msg.lat = 0.434130420542;
    msg.lon = 0.25209919997;
    msg.z = 0.972531693707;
    msg.z_units = 249U;
    msg.duration = 15306U;
    msg.speed = 0.587733061744;
    msg.speed_units = 75U;
    msg.type = 143U;
    msg.radius = 0.0220071776359;
    msg.length = 0.198151554999;
    msg.bearing = 0.630568787526;
    msg.direction = 140U;
    msg.custom.assign("TXSBGRIBAUEGWUVXDMSCMKNQUVIKZRHPNIHISKNPSOUQEKHZOBXHZSJOCPMJQYBGITFWFQPEVZLDXDFKQLWDEYVEZMAXBJUBCGPRTROWEMPMJHVTIQGMWUINQACV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.277652895456);
    msg.setSource(10843U);
    msg.setSourceEntity(185U);
    msg.setDestination(62726U);
    msg.setDestinationEntity(161U);
    msg.timeout = 50679U;
    msg.lat = 0.340997534452;
    msg.lon = 0.0148456274937;
    msg.z = 0.792427166809;
    msg.z_units = 121U;
    msg.duration = 8826U;
    msg.speed = 0.961497775219;
    msg.speed_units = 47U;
    msg.type = 81U;
    msg.radius = 0.50671200958;
    msg.length = 0.243920025433;
    msg.bearing = 0.882522439681;
    msg.direction = 7U;
    msg.custom.assign("XGKZCSTQIJURLPDPLLSZUSQPMUYXCCMBSKHIZI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.49071014456);
    msg.setSource(17351U);
    msg.setSourceEntity(25U);
    msg.setDestination(18810U);
    msg.setDestinationEntity(131U);
    msg.timeout = 30141U;
    msg.lat = 0.313973638531;
    msg.lon = 0.191759123726;
    msg.z = 0.114717981348;
    msg.z_units = 110U;
    msg.duration = 21343U;
    msg.speed = 0.839079066527;
    msg.speed_units = 127U;
    msg.type = 17U;
    msg.radius = 0.533121227052;
    msg.length = 0.0885958807932;
    msg.bearing = 0.752563876752;
    msg.direction = 185U;
    msg.custom.assign("UUDXMDDISEEWFADFAJORYWFQATMQEZCZRCWTZAGXGXNEFPQJHRJHJYXLZLQMFIBK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.815569991113);
    msg.setSource(24666U);
    msg.setSourceEntity(183U);
    msg.setDestination(33598U);
    msg.setDestinationEntity(162U);
    msg.duration = 48338U;
    msg.custom.assign("WSOQXWBGKCUGLDDCVYQKGXHFTSLJPYIZCJIHKDDBWLTCCIOSYMPHGYTEPQLPRGKHPBBIWFPUCGWOXQGPYICTABZJDVFVLBZTMXIVJLFNJRWXXGCINLUEJXDEIFRKWIOSUEYZOAICCVHQTKWDQAJQRAFSLQHUYDOJJHAXEZQZF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.659348957645);
    msg.setSource(34123U);
    msg.setSourceEntity(153U);
    msg.setDestination(52436U);
    msg.setDestinationEntity(143U);
    msg.duration = 8181U;
    msg.custom.assign("LRCCBXKHHPAEOADKFNUQBJMEPOVOPJFSDMZIWTXQQRBWBOFZSWMPHFHFUKXMVLBXKRQZSRKSNYIITGQIJOTEKAEZLRTFRHMXEDUGLYMQAYOHTXYUNTTNVHLRCBLWBLYDDZKDBCRNGBVOXSCVVBTZSHWDJGEUWSUGHJMXMQPXYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.912976781206);
    msg.setSource(13255U);
    msg.setSourceEntity(213U);
    msg.setDestination(31964U);
    msg.setDestinationEntity(15U);
    msg.duration = 5895U;
    msg.custom.assign("JQVQKGYWUUMWSWTSADKFGEYOBEUEXFTYPCMZNFWRORIIOOHQULLWGPXNVDXVYJBFSCXKIICTRQKZFELYNKUGKXAAZJWOLRQYVRVSWXGUNLHFDEDTPDMSJQQPREZQOH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.197681946921);
    msg.setSource(57487U);
    msg.setSourceEntity(169U);
    msg.setDestination(45263U);
    msg.setDestinationEntity(35U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.75249621843;
    msg.control.set(tmp_msg_0);
    msg.duration = 59929U;
    msg.custom.assign("GKEGBYDNZDKQONUWUWEMJYDCETXINKVSHBIPGNWVVNEBQKDFEMFHSTAHKUOPSGAMHVWYMZDNOYXRKPBCGLUFLALOYYTTRANBZGCJTZOJAHSRRHMJYONQRQMAYWIXSSTTXOUPKLESJQVRLQFNRLCIIKOUJUXCWKJIXJFCGWKWFIAZUCRMZCDQSMOGGTAIJXVYMSCXHTQYAZFVEPXHWVJPDHESOHULZPRBPVMFG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.469247817405);
    msg.setSource(36930U);
    msg.setSourceEntity(45U);
    msg.setDestination(57321U);
    msg.setDestinationEntity(96U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.337444725946;
    msg.control.set(tmp_msg_0);
    msg.duration = 36437U;
    msg.custom.assign("WVKHUJSWDZCHPVNPWVGZOCUQYBQWFNMRRTCMNQHOBQXPTMYELDMCLAADXXLUOZGDVGZSBHDJFLLESFPPKJHONYMJKZRTOKHLDYIDRNYBECGEBQPZXJBCCAHSPXUNKOFWFTATQQXINXMLULVHRMORUVKDFLCEGIUAFYENSDBQIKUTSFBSJHGKPMPIECTMGROZAROYOVESJXGAUYWIZJFE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.691651891377);
    msg.setSource(4279U);
    msg.setSourceEntity(246U);
    msg.setDestination(7790U);
    msg.setDestinationEntity(117U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.33302419906;
    msg.control.set(tmp_msg_0);
    msg.duration = 34441U;
    msg.custom.assign("KWLSRJTVVYBHCWF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.343133991024);
    msg.setSource(61531U);
    msg.setSourceEntity(162U);
    msg.setDestination(56433U);
    msg.setDestinationEntity(161U);
    msg.timeout = 31504U;
    msg.lat = 0.64770641727;
    msg.lon = 0.810471276404;
    msg.z = 0.81731766006;
    msg.z_units = 194U;
    msg.speed = 0.987034069375;
    msg.speed_units = 19U;
    msg.bearing = 0.962473699408;
    msg.cross_angle = 0.365511393785;
    msg.width = 0.63287483177;
    msg.length = 0.727196877986;
    msg.hstep = 0.183985734128;
    msg.coff = 224U;
    msg.alternation = 86U;
    msg.flags = 176U;
    msg.custom.assign("JDANHGIECJKIXBWNFFHPYLBZNHSBEGFWHJCJGRSPFAGTBEGNU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.000502434087228);
    msg.setSource(19185U);
    msg.setSourceEntity(177U);
    msg.setDestination(9815U);
    msg.setDestinationEntity(60U);
    msg.timeout = 7105U;
    msg.lat = 0.82040051119;
    msg.lon = 0.302129944158;
    msg.z = 0.734595505879;
    msg.z_units = 186U;
    msg.speed = 0.645687794068;
    msg.speed_units = 2U;
    msg.bearing = 0.773000088843;
    msg.cross_angle = 0.375025820347;
    msg.width = 0.587766816108;
    msg.length = 0.574540821627;
    msg.hstep = 0.948876296292;
    msg.coff = 171U;
    msg.alternation = 225U;
    msg.flags = 247U;
    msg.custom.assign("CWHAKHIYWJCESFBNUWGHRCBGWUCMWREZDVHNISEOHLJBBFRDUAQFQDTLLZYWJAAVOAIKBCUBYTZNNJJBOZKFWNAIEMXOXDWSAOLMQHQYDMZLEKXFLJCVQICNJGQXCULETPXRGESPPUPCNIVGHKQLJRDSOVTXWVTHKMEPQPDFTGVYIZSSQOPEBUYMVXAXGGIYULIFDFKRKPBXRCZZMOYGMKFPONGMDNSSABMTPZFXRYADH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.48206639458);
    msg.setSource(39942U);
    msg.setSourceEntity(244U);
    msg.setDestination(4892U);
    msg.setDestinationEntity(49U);
    msg.timeout = 9209U;
    msg.lat = 0.359893157061;
    msg.lon = 0.00661318553204;
    msg.z = 0.445344938508;
    msg.z_units = 33U;
    msg.speed = 0.172835762342;
    msg.speed_units = 34U;
    msg.bearing = 0.607982353523;
    msg.cross_angle = 0.295374763665;
    msg.width = 0.515049826134;
    msg.length = 0.726043141081;
    msg.hstep = 0.340123574489;
    msg.coff = 89U;
    msg.alternation = 145U;
    msg.flags = 103U;
    msg.custom.assign("XWXKVPSXNDYQOWHJRLTMNPRHPGWWVBBANKYYFCYYAEBPZJXLLCDQHBDLFJETFTPYESGVZIWNHROMNJEGETBQRIJEIQGKRUDCJITOWDLSCZYOHBOBKWMFQAXGXIEMODHGUVCAVBTIAXYRWPCUVOXLSXQPXJAJTULKIRUFDEMUNGSSZJVUCNWFLIKIRLOFMEJKQSSNZCKACVOESZDPFQZMHZDOP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.952434134419);
    msg.setSource(40793U);
    msg.setSourceEntity(2U);
    msg.setDestination(14968U);
    msg.setDestinationEntity(166U);
    msg.timeout = 24992U;
    msg.lat = 0.339875864694;
    msg.lon = 0.925971364635;
    msg.z = 0.0346142178512;
    msg.z_units = 103U;
    msg.speed = 0.472729043427;
    msg.speed_units = 107U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.978066081167;
    tmp_msg_0.y = 0.429666228558;
    tmp_msg_0.z = 0.510007257348;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VACFCYUOHKTMBVFODPTWKAYPTPCKVYEMDFUGSLXWBUBESFINNSALDINAMMHJWGHLTRMVZPGQSCKUGYUSQYEMCAUVOBEIQNHQABJOKITQHGLUJZRVDWDBSPUCCOUZXBMSJXXZSCQWWXOWEVHDJZFXGJKOHDDPFZNLRPZIWEXLGBNCANPNLRU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.271037915753);
    msg.setSource(63113U);
    msg.setSourceEntity(116U);
    msg.setDestination(19109U);
    msg.setDestinationEntity(168U);
    msg.timeout = 3465U;
    msg.lat = 0.553483265392;
    msg.lon = 0.041511190202;
    msg.z = 0.235654381838;
    msg.z_units = 4U;
    msg.speed = 0.782894110251;
    msg.speed_units = 92U;
    msg.custom.assign("FSUTNSJHEYTMFKGOXBNICGBHGGBDWZQTIBXQDAYUVSHFHVZNPNDGIBFXTMZHXLDLNMQJIBVSOMOCUKDIOZZKJQZECZPBACWXFCYUMRALNPAUYTKLRRWQRMVYACDTMTVSIELUBIKOURTYEEURHSKRVMZWWCORLGXUGNPEOFSADHQYDSEPAHEXVIIIZFWQNMAUHPMXQCJJKTOWLJBGTRNQLSYJDDFCNKAPJZLAGJFB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.459889201916);
    msg.setSource(9496U);
    msg.setSourceEntity(107U);
    msg.setDestination(31328U);
    msg.setDestinationEntity(214U);
    msg.timeout = 3213U;
    msg.lat = 0.124518462818;
    msg.lon = 0.0265663310376;
    msg.z = 0.246367283885;
    msg.z_units = 70U;
    msg.speed = 0.718228799872;
    msg.speed_units = 91U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.572119484917;
    tmp_msg_0.y = 0.0139590129844;
    tmp_msg_0.z = 0.128856268243;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XLVDTZOEMOCZNFVYCVNIXAGLWBXHSWUUAXOCFRTOXPDBPOWGKEEVXJHTCMAHGUJCWQEEPDZNDTJTUQHLZJBNNUNMYHAGIJIETY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.145392727754);
    msg.setSource(26048U);
    msg.setSourceEntity(97U);
    msg.setDestination(26781U);
    msg.setDestinationEntity(158U);
    msg.x = 0.276164454791;
    msg.y = 0.717642463122;
    msg.z = 0.27621849605;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.695200232646);
    msg.setSource(53385U);
    msg.setSourceEntity(116U);
    msg.setDestination(26285U);
    msg.setDestinationEntity(133U);
    msg.x = 0.460597874346;
    msg.y = 0.0150579875305;
    msg.z = 0.366172098399;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.337487403722);
    msg.setSource(34145U);
    msg.setSourceEntity(46U);
    msg.setDestination(24989U);
    msg.setDestinationEntity(159U);
    msg.x = 0.35631944568;
    msg.y = 0.742825016584;
    msg.z = 0.0821560657631;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.744023675061);
    msg.setSource(24483U);
    msg.setSourceEntity(198U);
    msg.setDestination(64222U);
    msg.setDestinationEntity(92U);
    msg.timeout = 57882U;
    msg.lat = 0.94168292709;
    msg.lon = 0.727686045254;
    msg.z = 0.399583860443;
    msg.z_units = 168U;
    msg.amplitude = 0.980190591133;
    msg.pitch = 0.395449900151;
    msg.speed = 0.0487339345313;
    msg.speed_units = 215U;
    msg.custom.assign("LANGOQZFGWJPMIZYMIQJDULQLPXWRNAPNOLCFRZWTFVRAPDZDWZFVKRQMAUFPMQGLGEIBRUOSFATZCMAMDGXLXBUJWYNERNYOETHCSYCUKIUSCTWDPJOKTIYOFEKEBJHJFMKARNGBDTVUVCXTHQBHXQSDKGMZZCMWRKYCXUGSZIAEPHCJVHMDFERSJPVSLIUXXNSBYSV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.224408341992);
    msg.setSource(47590U);
    msg.setSourceEntity(160U);
    msg.setDestination(46930U);
    msg.setDestinationEntity(38U);
    msg.timeout = 38692U;
    msg.lat = 0.00413197110282;
    msg.lon = 0.557592036878;
    msg.z = 0.209297575751;
    msg.z_units = 165U;
    msg.amplitude = 0.845375878124;
    msg.pitch = 0.853584415009;
    msg.speed = 0.966463011781;
    msg.speed_units = 114U;
    msg.custom.assign("UEHYQBGPDSGIQHDTCDLOHCZSHKVFKYCIMGCYOMDYFUQQXBUXFSWVVNZEYYTDNCOJTXEBXPMVIRYMOJPUJVRHVNFEWLFGTIRTTWYBUFRXDFKRXMSFKAMZIUVTMPADEZLXALRLEDLGWBEQWVXTGGZNQNPFHCGKJASPOASEDWLCIHPWAYRWTCPSJJMPFINORWNQKKNNEZIPZJAYBOUHQJXE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.312027166937);
    msg.setSource(32085U);
    msg.setSourceEntity(81U);
    msg.setDestination(9522U);
    msg.setDestinationEntity(94U);
    msg.timeout = 63981U;
    msg.lat = 0.475542616211;
    msg.lon = 0.479471895494;
    msg.z = 0.575879909139;
    msg.z_units = 134U;
    msg.amplitude = 0.852557242144;
    msg.pitch = 0.391781179059;
    msg.speed = 0.501213746655;
    msg.speed_units = 165U;
    msg.custom.assign("AKBHMWIJSDCJYVTYGRABQHGBYYEDANHBTGVXZHLXDPJZEDHQHFQPEKRKULZDCHTLWJJDKMPVROPMVTKSFUEPYBOUEKHACLO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.0210916534984);
    msg.setSource(34583U);
    msg.setSourceEntity(197U);
    msg.setDestination(21308U);
    msg.setDestinationEntity(228U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.498088645372);
    msg.setSource(9007U);
    msg.setSourceEntity(3U);
    msg.setDestination(48919U);
    msg.setDestinationEntity(202U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.188567998747);
    msg.setSource(33981U);
    msg.setSourceEntity(174U);
    msg.setDestination(50992U);
    msg.setDestinationEntity(164U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.904249983303);
    msg.setSource(8299U);
    msg.setSourceEntity(68U);
    msg.setDestination(36349U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.536316153526;
    msg.lon = 0.943951135916;
    msg.z = 0.254450615581;
    msg.z_units = 106U;
    msg.radius = 0.0469357167068;
    msg.duration = 36616U;
    msg.speed = 0.240305074971;
    msg.speed_units = 245U;
    msg.popup_period = 25088U;
    msg.popup_duration = 59374U;
    msg.flags = 168U;
    msg.custom.assign("INNNFHFTZCJDRUILLRYYFKEIDNNLESEGAJDFCBKPLHMTAALPQWTGUMQDMQISTLEJSOUXWZVWAZQRMMJXOHPPYUEIKVLSWTNIJYIGGNXLBEREEACWDUPCQVHLDYOPCMPPVVZQGJHTEUCGUFYXARGSIJCAWYBXNZTWGKTC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.687742168383);
    msg.setSource(62145U);
    msg.setSourceEntity(77U);
    msg.setDestination(65338U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.91935785744;
    msg.lon = 0.827574551761;
    msg.z = 0.961391175689;
    msg.z_units = 15U;
    msg.radius = 0.710564686632;
    msg.duration = 52524U;
    msg.speed = 0.615222217219;
    msg.speed_units = 53U;
    msg.popup_period = 63703U;
    msg.popup_duration = 59280U;
    msg.flags = 14U;
    msg.custom.assign("BWPLTOCBPNTGWSMORYDGTVQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.569685657881);
    msg.setSource(6337U);
    msg.setSourceEntity(169U);
    msg.setDestination(59944U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.0368320910154;
    msg.lon = 0.648679030966;
    msg.z = 0.513247437172;
    msg.z_units = 218U;
    msg.radius = 0.206994786745;
    msg.duration = 47194U;
    msg.speed = 0.00891187568241;
    msg.speed_units = 181U;
    msg.popup_period = 61290U;
    msg.popup_duration = 34905U;
    msg.flags = 58U;
    msg.custom.assign("WFUIGVKYBGDUANOPPLZZGZJTGOWJEBJZXQCADNPMKUFHCJAJGLLXSHQTICRORWUZINMQCFKZNNJWCWTRTWJANCPPUHQWKBHXIKYCAEVAYOHVDXZJBWLYXKPLRUXIQNTRYXMZADHQFMSMIKAEJIVTMCYSKVSNTPVSHNYISSOMOLFRVROFDBGNBVQQSELRMESZWLKCJQIGUDAAGBDEPGFXLIEKPLGDDUBEOUWTSFBPQY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.231062640722);
    msg.setSource(4508U);
    msg.setSourceEntity(102U);
    msg.setDestination(36767U);
    msg.setDestinationEntity(35U);
    msg.timeout = 64822U;
    msg.flags = 205U;
    msg.lat = 0.427945308225;
    msg.lon = 0.534113173241;
    msg.start_z = 0.420748790668;
    msg.start_z_units = 71U;
    msg.end_z = 0.946623244558;
    msg.end_z_units = 128U;
    msg.radius = 0.704451190151;
    msg.speed = 0.00442085914418;
    msg.speed_units = 254U;
    msg.custom.assign("RVXZZGPCMWSZGAMIYHDOYCYSQOKTKJWPGUCZLCESHISCDEFUUPWJVSSDJKEVRAQAQHTXTNRLKAXNRLXOATQTINXMOMPJNUKMCBTODHOFYIJQOIYZHEFXRFAXWDHXCYZDGETAQBRUQGJFQVRBJEIETSGVDXOAIPCUONGPWPJBFFLGBWFYTFDAHNUXBLBHALJVBLUNWEPZGCKGPLWMTNBYZMIUJMDR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.291894611747);
    msg.setSource(24641U);
    msg.setSourceEntity(98U);
    msg.setDestination(6963U);
    msg.setDestinationEntity(15U);
    msg.timeout = 60782U;
    msg.flags = 35U;
    msg.lat = 0.940635373844;
    msg.lon = 0.724571557161;
    msg.start_z = 0.784622883401;
    msg.start_z_units = 137U;
    msg.end_z = 0.581078962145;
    msg.end_z_units = 190U;
    msg.radius = 0.995174594686;
    msg.speed = 0.43973793358;
    msg.speed_units = 227U;
    msg.custom.assign("XDEJHKWQFKBZZPAEUIBLUCEJDMBKXNOUCRFSHZEWFOWSYMAAQTSHPIKEZQORFCDWJTHRVIIVRCMGQQKBQVACKXLUOPYCJMNWLFYDNVTGYIFTZGLF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.822474114229);
    msg.setSource(17903U);
    msg.setSourceEntity(140U);
    msg.setDestination(55217U);
    msg.setDestinationEntity(13U);
    msg.timeout = 36088U;
    msg.flags = 197U;
    msg.lat = 0.115275008245;
    msg.lon = 0.987634443907;
    msg.start_z = 0.323530744341;
    msg.start_z_units = 179U;
    msg.end_z = 0.908746218456;
    msg.end_z_units = 50U;
    msg.radius = 0.811848727796;
    msg.speed = 0.924956889543;
    msg.speed_units = 123U;
    msg.custom.assign("XSGRJGFMZJNWDYCGPEXVHIDLZIUSELATVMLFURDTUPGGZUDNPCUZOEDQZTCVBJPREKGQUYHSODISAVCGYNHKMLMIHMHSOQVZTKHCMHDDHOKPRZIPMZYERHKNEWFQYFMLOBILYQTXJZVXQBVAFLWWBRYNJUJAIXAWYXVOXKJINLWPYBUDRL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.399904875267);
    msg.setSource(30087U);
    msg.setSourceEntity(4U);
    msg.setDestination(27340U);
    msg.setDestinationEntity(44U);
    msg.timeout = 43143U;
    msg.lat = 0.19305490149;
    msg.lon = 0.509383326941;
    msg.z = 0.915748119949;
    msg.z_units = 97U;
    msg.speed = 0.784416003187;
    msg.speed_units = 139U;
    msg.custom.assign("EEQBXLTKSSRXHGJFRZWQMGDRMHAPOJQKSVISETBUFLGHXCOQOUNWIDFKMUYZXZNUXXGEKMOTZVRAKRM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.0348761972545);
    msg.setSource(55457U);
    msg.setSourceEntity(24U);
    msg.setDestination(7672U);
    msg.setDestinationEntity(238U);
    msg.timeout = 58649U;
    msg.lat = 0.0236401637761;
    msg.lon = 0.0530393250203;
    msg.z = 0.554844295848;
    msg.z_units = 62U;
    msg.speed = 0.940600069133;
    msg.speed_units = 41U;
    msg.custom.assign("GBWRFPGVCJKZMXJHUXHPDGVTWLSCRPTJVERFYUSZRLKLRWMSLOFFJZFCPTLZDYCFEUAFAABLTHVZMMEUEUBYSXDNLIGYQVQYHDUWSJOAGCM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.510413119454);
    msg.setSource(50271U);
    msg.setSourceEntity(74U);
    msg.setDestination(48317U);
    msg.setDestinationEntity(241U);
    msg.timeout = 48613U;
    msg.lat = 0.977857128085;
    msg.lon = 0.592196810066;
    msg.z = 0.0162973954585;
    msg.z_units = 215U;
    msg.speed = 0.505763134923;
    msg.speed_units = 15U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.582398364304;
    tmp_msg_0.y = 0.486575441515;
    tmp_msg_0.z = 0.338825160762;
    tmp_msg_0.t = 0.14712156737;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WGMLSSIJWRCVMFBHSFZHFPS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.143739279658);
    msg.setSource(57691U);
    msg.setSourceEntity(120U);
    msg.setDestination(49772U);
    msg.setDestinationEntity(143U);
    msg.x = 0.550121846455;
    msg.y = 0.190652268491;
    msg.z = 0.642654648438;
    msg.t = 0.631290357046;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.353601017603);
    msg.setSource(65458U);
    msg.setSourceEntity(170U);
    msg.setDestination(38394U);
    msg.setDestinationEntity(249U);
    msg.x = 0.60437902263;
    msg.y = 0.318418292725;
    msg.z = 0.633082320017;
    msg.t = 0.382347739927;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.587996727082);
    msg.setSource(55897U);
    msg.setSourceEntity(148U);
    msg.setDestination(65273U);
    msg.setDestinationEntity(134U);
    msg.x = 0.329905155001;
    msg.y = 0.877985578018;
    msg.z = 0.456526160456;
    msg.t = 0.471979631909;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.390603296383);
    msg.setSource(22041U);
    msg.setSourceEntity(172U);
    msg.setDestination(5976U);
    msg.setDestinationEntity(103U);
    msg.timeout = 37512U;
    msg.name.assign("QKBFDUHEXUWWBUQHRKPANHBCQXAEFFWRMAIXDOKWCAMLIIDZOSZMXPSWGTWSTUDKUAHZOSEQXOGULPGOEBDTPQTVWJSEZNIPYFYXSJZFRNUICGBVZXCQNMZYUWACILJCJEKEMYHNKHNADZFOYVLRMHMRGWDPGPJTACORVLQEFRKPBZHJKPGGETMNKVODPLGTVFRIMWOCHYIENULNJDXYQQFYJLLZBJYVURB");
    msg.custom.assign("XYFCMAWJVUZPXPZFJOAOJMYQGFETGCIYUASDBPRNDNSRKKKLTLTWTNBKFIJLNZPTUKIYCJZZU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.21541261876);
    msg.setSource(19021U);
    msg.setSourceEntity(226U);
    msg.setDestination(57649U);
    msg.setDestinationEntity(130U);
    msg.timeout = 15931U;
    msg.name.assign("KSGYFFVGBXXKLBCYUKIQKWPXQSYMXZPEVEQEIVOGQADRWOHPJZBCDCAYPIYBHKHHZDHRMAAUWNHKLHDBTNSMTPCNLVJDRJLVOFSKEQTKRSMYTREBXCYUJHLRMRDNBERGYSNBDUHVOWRBFMINKWSCOXQBLPNLWIEPUOFEAQOIFPTOITICZFQJMEONMLIVQFSJUPOJTNJJALZEQGUTGKVXXAZDTWGCXSMHVZUWRDIJGWXFVYUWANCUATLGFZDPAS");
    msg.custom.assign("SEWKNHSTYLIGABJVPQCMKDHMVTDLHYPHNVFALRIRLMOQSNJNOZLBJYWTZVSPPNJUKENRCWIYPAPXDKCKVUKTRFO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.302748290591);
    msg.setSource(6724U);
    msg.setSourceEntity(29U);
    msg.setDestination(113U);
    msg.setDestinationEntity(182U);
    msg.timeout = 10593U;
    msg.name.assign("DUXQDJMAHOMIBVDYCSZNDOZWFEPHSTPUVOHYTZJSYEXDCUOAUQBMINCQGQJBINKWHFMQLMPVVZORBLRAGVFYAXTNOCOKPKPODYMGCVEPPGSKXSHZYTHLZZJPBHFEAFZLQTENJE");
    msg.custom.assign("VYTIDQWIFCQNGQPJMBMWRHRUULBZQDWPCNBVOYITSLFNUPOJEBQVTCQPESTGMYCNGWHPZYZSODXMMURXWURHYZPQKILCZCUNKHXB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.538152715792);
    msg.setSource(6299U);
    msg.setSourceEntity(88U);
    msg.setDestination(21830U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.254254612582;
    msg.lon = 0.906726899176;
    msg.z = 0.730422502069;
    msg.z_units = 237U;
    msg.speed = 0.473845412477;
    msg.speed_units = 214U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.446275147134;
    tmp_msg_0.y = 0.09406189853;
    tmp_msg_0.z = 0.0162127816415;
    tmp_msg_0.t = 0.489870722069;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.0974952568021;
    msg.custom.assign("NOWDTDHPGCMHAJLUIDOXJRSPBZHFMRFH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.349284290875);
    msg.setSource(12137U);
    msg.setSourceEntity(84U);
    msg.setDestination(59537U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.393488178229;
    msg.lon = 0.825702824722;
    msg.z = 0.459571617592;
    msg.z_units = 218U;
    msg.speed = 0.404098823247;
    msg.speed_units = 253U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.690995888991;
    tmp_msg_0.y = 0.167467906553;
    tmp_msg_0.z = 0.899673544502;
    tmp_msg_0.t = 0.903714369162;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 16461U;
    tmp_msg_1.off_x = 0.673938430782;
    tmp_msg_1.off_y = 0.257414034291;
    tmp_msg_1.off_z = 0.50222100323;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.467059506482;
    msg.custom.assign("UOGCHQWWARDXTSGOFKIKPXUFENNWGOAPDZRIFJUXSMKSJOBKLAMPNIHNDJQCDWAVZRDRFUIIGCJVBROYILOLLHTSAVZTOTMXTMGLPENUEENIJFJBPKOBDIOMCCEAAYQYJIWJHDZBCEMFZQBCSXGKTKGSMANTMPPHLYPCSYT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.474007263963);
    msg.setSource(42978U);
    msg.setSourceEntity(32U);
    msg.setDestination(27368U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.773660606837;
    msg.lon = 0.392397761054;
    msg.z = 0.021876528155;
    msg.z_units = 12U;
    msg.speed = 0.172967779442;
    msg.speed_units = 165U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.661716964034;
    tmp_msg_0.y = 0.803619022224;
    tmp_msg_0.z = 0.958149447262;
    tmp_msg_0.t = 0.631939781982;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 57203U;
    tmp_msg_1.off_x = 0.0604930567812;
    tmp_msg_1.off_y = 0.612583354343;
    tmp_msg_1.off_z = 0.416903080893;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.601211713554;
    msg.custom.assign("GJMLMFHPZQLICRYEYDDUGAMCSESOIRKLRHBYTWNRGZIXFGJHQFARTPLCWRBTFVQOJYZISMCGRSQPLTJAIMKKSVYJPFPCDLAWWSDOMQOGKAUZDHVOWFWIYUSTKUCBZRXZBLNINFQPUFEEKXNEABHBCJZLVUBHSJFOKXNTMBZKAQNDYHYWTHBUOTVUVGZNEJWJXWKDAOBU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.756561434249);
    msg.setSource(41887U);
    msg.setSourceEntity(243U);
    msg.setDestination(49501U);
    msg.setDestinationEntity(62U);
    msg.vid = 36381U;
    msg.off_x = 0.922816919455;
    msg.off_y = 0.91319860295;
    msg.off_z = 0.237018419464;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.449367571087);
    msg.setSource(46685U);
    msg.setSourceEntity(158U);
    msg.setDestination(57417U);
    msg.setDestinationEntity(78U);
    msg.vid = 60974U;
    msg.off_x = 0.74892329073;
    msg.off_y = 0.469079906514;
    msg.off_z = 0.541851839786;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.55340540674);
    msg.setSource(28172U);
    msg.setSourceEntity(197U);
    msg.setDestination(58473U);
    msg.setDestinationEntity(252U);
    msg.vid = 58936U;
    msg.off_x = 0.409008193538;
    msg.off_y = 0.370908496544;
    msg.off_z = 0.110991314738;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.520378547408);
    msg.setSource(32589U);
    msg.setSourceEntity(152U);
    msg.setDestination(29828U);
    msg.setDestinationEntity(183U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.666325585247);
    msg.setSource(62657U);
    msg.setSourceEntity(150U);
    msg.setDestination(11963U);
    msg.setDestinationEntity(150U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.170470538795);
    msg.setSource(62422U);
    msg.setSourceEntity(37U);
    msg.setDestination(25762U);
    msg.setDestinationEntity(7U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.826899192099);
    msg.setSource(12769U);
    msg.setSourceEntity(1U);
    msg.setDestination(11010U);
    msg.setDestinationEntity(244U);
    msg.mid = 41867U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.413586559099);
    msg.setSource(36754U);
    msg.setSourceEntity(108U);
    msg.setDestination(488U);
    msg.setDestinationEntity(67U);
    msg.mid = 11579U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.852081036512);
    msg.setSource(5509U);
    msg.setSourceEntity(211U);
    msg.setDestination(42353U);
    msg.setDestinationEntity(209U);
    msg.mid = 39429U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.498354173152);
    msg.setSource(658U);
    msg.setSourceEntity(77U);
    msg.setDestination(64987U);
    msg.setDestinationEntity(168U);
    msg.state = 199U;
    msg.eta = 43431U;
    msg.info.assign("GQAJVXQVNSSFTBGRHOJQENMULNKIWIGWMFXLTENJNQYVDQSVKPQRLCWIERRKPGYY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.636068811493);
    msg.setSource(48537U);
    msg.setSourceEntity(249U);
    msg.setDestination(18412U);
    msg.setDestinationEntity(69U);
    msg.state = 218U;
    msg.eta = 29309U;
    msg.info.assign("FXAFZNBCFVROUIJBKWWMRKUSZFCEJZQTIUAMHXMXEUPBYXPYFSVYSBIDXUPFVYKMKYUDOWQDGDBQCRDSHHLRGAJPYMLWNVYKWFHULVWGVMQINGXEGAJDTLAREUOTZYEOJAXDCSIBHHDKHCJSNHZOQEUSMQTFBAGPRJWPRBQXTAEACQKLMOXZTTCERXIPHLGZSKI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.225963516596);
    msg.setSource(48126U);
    msg.setSourceEntity(95U);
    msg.setDestination(58726U);
    msg.setDestinationEntity(185U);
    msg.state = 84U;
    msg.eta = 49566U;
    msg.info.assign("QHRARKUBPSXNIEBOFVEBYCOFROLGREOXDTFDKGLDHMKDVAMXELAVXNZLTMOEGUBCZSBFILOUIYXLWQUPOYPUPIEYIMEZMUPMJJGNMDOGVCNNBFHOOYXQCJYEGQCQRJBPTHLCEGGCSLNZRBRDWUSRVWUJWWZQDVFZISPXTYKCACRAAUPXTSSEFZLQSHLAWKKMVZUKSIKQJIKZNDNVPITTQBHWTNYAHXWADFVMZWGWYVICNJHSMJAH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.242357094015);
    msg.setSource(41770U);
    msg.setSourceEntity(91U);
    msg.setDestination(4462U);
    msg.setDestinationEntity(33U);
    msg.system = 19049U;
    msg.duration = 1008U;
    msg.speed = 0.468799439027;
    msg.speed_units = 166U;
    msg.x = 0.380301506996;
    msg.y = 0.596024888304;
    msg.z = 0.912466382829;
    msg.z_units = 155U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.839438976153);
    msg.setSource(27701U);
    msg.setSourceEntity(120U);
    msg.setDestination(15748U);
    msg.setDestinationEntity(45U);
    msg.system = 18497U;
    msg.duration = 15235U;
    msg.speed = 0.536993726317;
    msg.speed_units = 213U;
    msg.x = 0.301960637783;
    msg.y = 0.309957107664;
    msg.z = 0.0858113719804;
    msg.z_units = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.551120295614);
    msg.setSource(43116U);
    msg.setSourceEntity(52U);
    msg.setDestination(26982U);
    msg.setDestinationEntity(1U);
    msg.system = 11581U;
    msg.duration = 46458U;
    msg.speed = 0.217643821239;
    msg.speed_units = 23U;
    msg.x = 0.482663175312;
    msg.y = 0.639799536035;
    msg.z = 0.327479198919;
    msg.z_units = 179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.0266746289642);
    msg.setSource(5007U);
    msg.setSourceEntity(45U);
    msg.setDestination(7819U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.289370340519;
    msg.lon = 0.0601735842758;
    msg.speed = 0.769572763827;
    msg.speed_units = 165U;
    msg.duration = 21343U;
    msg.sys_a = 5266U;
    msg.sys_b = 15036U;
    msg.move_threshold = 0.115039144974;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.721899346769);
    msg.setSource(53938U);
    msg.setSourceEntity(118U);
    msg.setDestination(62719U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.739472195886;
    msg.lon = 0.229368910119;
    msg.speed = 0.893391706631;
    msg.speed_units = 4U;
    msg.duration = 53779U;
    msg.sys_a = 19695U;
    msg.sys_b = 25082U;
    msg.move_threshold = 0.545730162365;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.028347942786);
    msg.setSource(50178U);
    msg.setSourceEntity(21U);
    msg.setDestination(10178U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.310180946419;
    msg.lon = 0.702673847498;
    msg.speed = 0.767288089532;
    msg.speed_units = 97U;
    msg.duration = 32659U;
    msg.sys_a = 63383U;
    msg.sys_b = 5744U;
    msg.move_threshold = 0.0251956962951;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.391175977077);
    msg.setSource(16862U);
    msg.setSourceEntity(58U);
    msg.setDestination(24622U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.740570513438;
    msg.lon = 0.0621324529789;
    msg.z = 0.283396896081;
    msg.z_units = 221U;
    msg.speed = 0.66803948101;
    msg.speed_units = 119U;
    msg.custom.assign("YYQDWCFQNXDYGWVMLKSGIIKVTVTSDWWBGCBGPQUDJAQPXLBEZQFDDRDOYYCXTEBSRSHIZCLAVLBJGKCILBAHCZPQFMEZLEZRKRNVQAOIEUNPTXWOJJMTVAFMDKSUZYLLEAFYKNTRZWXVXTFMGGHVOMPKIPSIUZRNNUIPNWXSRJNJWXHYXATRPVKQFHUPMJLXOJOUOHKJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.383732658022);
    msg.setSource(62544U);
    msg.setSourceEntity(96U);
    msg.setDestination(37173U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.988254856744;
    msg.lon = 0.518340134127;
    msg.z = 0.926853041843;
    msg.z_units = 135U;
    msg.speed = 0.587304054327;
    msg.speed_units = 152U;
    msg.custom.assign("HCTLEAVBSRBERYXCVVEGJEXSICIIVOCVJSSCZFOYZSDYMEDJLRQYKHBGNWNY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.557781634312);
    msg.setSource(57165U);
    msg.setSourceEntity(97U);
    msg.setDestination(32594U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.70829957205;
    msg.lon = 0.514931371705;
    msg.z = 0.401771362848;
    msg.z_units = 173U;
    msg.speed = 0.115654639342;
    msg.speed_units = 14U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.681891482065;
    tmp_msg_0.lon = 0.155417609119;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GLPBMUWAKQIQRVMCXSMZNVD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.279158709017);
    msg.setSource(1088U);
    msg.setSourceEntity(130U);
    msg.setDestination(22210U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.918808747637;
    msg.lon = 0.779119888684;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.494573320261);
    msg.setSource(56360U);
    msg.setSourceEntity(235U);
    msg.setDestination(26807U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.978975895057;
    msg.lon = 0.657741626548;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.138405236023);
    msg.setSource(10525U);
    msg.setSourceEntity(93U);
    msg.setDestination(55436U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.205924518827;
    msg.lon = 0.226622137591;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.192125258075);
    msg.setSource(488U);
    msg.setSourceEntity(3U);
    msg.setDestination(44447U);
    msg.setDestinationEntity(20U);
    msg.timeout = 61225U;
    msg.lat = 0.998436703;
    msg.lon = 0.296937247782;
    msg.z = 0.888185424224;
    msg.z_units = 208U;
    msg.pitch = 0.852696542162;
    msg.amplitude = 0.0629469794167;
    msg.duration = 14600U;
    msg.speed = 0.172548098695;
    msg.speed_units = 203U;
    msg.radius = 0.970935853705;
    msg.direction = 83U;
    msg.custom.assign("MEEHSZXVJTRBEWBHXWGJODPJXNOMKGIAKTRGRCDMNWWPNKZCCSBBPBXNZILVGMTMISFDNSAZXPSQFXJZDENKSZLVEJQBFPYJLZAUKOPWHPKYINFVFPENYOGQXSUQLMOWYYHNYUGOPBSTYTLTEMIJHRIIWYUZFVFUFAEOZKHWRXQJQRIDRMLVUVTCLDCWHMAKDWKEGXLOACXYVCZTDLTGQNVGRACSEHMUSAQO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.28628232431);
    msg.setSource(43533U);
    msg.setSourceEntity(150U);
    msg.setDestination(47661U);
    msg.setDestinationEntity(89U);
    msg.timeout = 59672U;
    msg.lat = 0.459710710884;
    msg.lon = 0.478363657927;
    msg.z = 0.244029016901;
    msg.z_units = 4U;
    msg.pitch = 0.127344100156;
    msg.amplitude = 0.911654584473;
    msg.duration = 58404U;
    msg.speed = 0.875295537146;
    msg.speed_units = 16U;
    msg.radius = 0.869409525222;
    msg.direction = 107U;
    msg.custom.assign("EZFYRFUGBFWRGZPGXYGVDJFJPBYSJLAAMLTIAEONTVHECWKPLOK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.0331751448603);
    msg.setSource(22133U);
    msg.setSourceEntity(27U);
    msg.setDestination(2075U);
    msg.setDestinationEntity(66U);
    msg.timeout = 10606U;
    msg.lat = 0.117562846616;
    msg.lon = 0.211658070963;
    msg.z = 0.984914838664;
    msg.z_units = 81U;
    msg.pitch = 0.0189164422766;
    msg.amplitude = 0.308318943437;
    msg.duration = 9785U;
    msg.speed = 0.711489663369;
    msg.speed_units = 50U;
    msg.radius = 0.171109728719;
    msg.direction = 244U;
    msg.custom.assign("RAFWBVNYBNHKLAE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.548015411348);
    msg.setSource(14673U);
    msg.setSourceEntity(217U);
    msg.setDestination(44660U);
    msg.setDestinationEntity(80U);
    msg.formation_name.assign("FGJIUHPRYTERJBAKIFFWDLKELTCRNSKLKENIXZKXPHDRW");
    msg.reference_frame = 218U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27913U;
    tmp_msg_0.off_x = 0.422561582231;
    tmp_msg_0.off_y = 0.140263452257;
    tmp_msg_0.off_z = 0.143227288906;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("UJPYQWJHTNBLYLNYZRMPAJKXXLVPHAIUQEGYLSNAERGWEIFXJOBVVCMAEWCRLADMSARVSRJCPUYDAVTGCHMKIQXSLORXIDSZUSGBCIOWEGOIRWKNPHKMLMTGOSOZNJTFXKBDDHIQWHQTFUEOXFDRFCHAOCPZERMPTVSSVDAQWYOGCFKFZVBNWXJXUQHKRMMCQUZTNJUKBTDIGFCOPPFGLQJZZVKZLBUYDHIYWTEBFSJNYVIBDEG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.0905159664065);
    msg.setSource(33175U);
    msg.setSourceEntity(210U);
    msg.setDestination(56076U);
    msg.setDestinationEntity(109U);
    msg.formation_name.assign("FVRHWDHMKTNQPMHWSGUFFLEZHLQMWQPLMIWELRNUVZXXJIHUNUIZPCSNDOYTGRGGCDDPYYZRVDASWYIVKYZMNUUJACAKRNHNTPNOLPFDEQEWZWTMDISYSJKCUCXFFYSNQLXEZKFUJKRPCOWCHTEXBBQKSXIMZOEIVHQYLBJXKXKIBVWHTBPDCHQOLJQUAMSGDZDVAGFYFIERJ");
    msg.reference_frame = 88U;
    msg.custom.assign("XFAREQYUADZHPAGMTUZOXFXGLCFEJWZCUTHNBMYRQPEPSKIAPXYJJXCSJFWKZFKFDNDOAQOXWGNVKUSQBBBYWLDIKFLHSLXVWUTGYMJTJYMSHPZAKBNKIMLWIZVFSQKXMMRUNGRNRVQUQDTEIVSBOAPDXOAHSMDLOCGIURURBGJEYOQRANLNHMTJYIPHVVHCCBJAOLCBDHHENWPKZQISZFEELPYPQECILTWGMTRJGZVWVFTEYVTOSRBG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.119849951363);
    msg.setSource(36759U);
    msg.setSourceEntity(166U);
    msg.setDestination(60361U);
    msg.setDestinationEntity(20U);
    msg.formation_name.assign("PSWDZQQMEEUQJWLHLVMDGLHDVLUSCZXLRCJCXBFYRWILFPKGAVUGBAAKNQOTOVWJVKYEKEZPECSSDPABRANQJGRYJMBWMBKPGPIVIFIITORD");
    msg.reference_frame = 60U;
    msg.custom.assign("ZTWSIHOGMYKURIFKTFZAFRFCAXNQLYUEZWSPUKQJGNVGETKRHWJNKPKSVLPQIVAJQRPZMIWXDMHAOGBUORGLKYYHYACECNOJFQEPUUFZLSVMFSDPMEJJJLXCSJDNNQAUMPVTSXHHGRWWXBCBQATRXLZDXUITYSNINGWKFZQHVUYHOYGOMRZNEDBBIZLOZWIBOVBKV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.0587860184412);
    msg.setSource(58660U);
    msg.setSourceEntity(97U);
    msg.setDestination(13338U);
    msg.setDestinationEntity(231U);
    msg.group_name.assign("AXKGYLHVQRSXAZOMKNYLXMVZFUPBLXACIGNGZKECHHIFYHTUOZQJHTGASMMPSKNQNYAKFLIDXXJQMLBBVTUJCUGDPVOUSPRKSZWVXLDQKJQFPSMXGBEZGOATUVNWBOHTDOWWCAEKXMUEAKWTECEBWFUKFURDRRBBJWAWYR");
    msg.formation_name.assign("JGMVBAQKOYDEVKKEXOLZBLQDBBZKHFIPUWZBXMMINKBSQCLWANDRYEYUQSQLFIRFMAZSRZXOIWLUQUHYHXPOCMRXYMAKIJFWAYAWJSGUCIBVSOYQGHPDDEWEVHUPNZBMEJGEOSPVTKHZXLVZNCJOVSRQTNEXHAOGSWTMIVLYFXWCAMKKSJPUXYEFJCCDSCMGRLRTBPOVWDTPPCJFIFAWGTRUNBHOQNNKRZYTFNJDTFLD");
    msg.plan_id.assign("QTHFKUOASOGMRZGPPOVPHMCTNQXFRDKMBIECLKXKZQDBWIXHGNPYJSWNAYWBXSLTVFVOQMAWWASCGOMKDJEJQYZEIXHJWETKMHRBQUWPHVCLSYUSQXBJMACEZYGCYEDKIGDOUXPHFZSQXIDDPSRPROJXTLLROLVMGFNCOEHBFRUUKHATWVJMBAUTANTCMERGKNBILDUCGZFAHITQ");
    msg.description.assign("ZJPJBCILHBPJDESKPCTCJLWKEGROQODVEKKDUOZWNYCIZDGRBFRBGBKIACRSKEXQAVCJRLTMFGUWILIPFXOFPVPMSNXGHXVNJVEWBSTTHOFPGZAKQMDGRTWCITQFVFDYRQWKNVQDBCXXAENNLSMIJMDHJJMIGSMBFSVVOQCRYEULERJZHWTUMLPZYOZ");
    msg.leader_speed = 0.807990542778;
    msg.leader_bank_lim = 0.0994813347233;
    msg.pos_sim_err_lim = 0.613771740104;
    msg.pos_sim_err_wrn = 0.76425420295;
    msg.pos_sim_err_timeout = 45419U;
    msg.converg_max = 0.802108581887;
    msg.converg_timeout = 5226U;
    msg.comms_timeout = 65445U;
    msg.turb_lim = 0.0792413168013;
    msg.custom.assign("LHNVVMJNWYQRTSGVNSWAENBDOGRTYYRDPMSJGOCMVWXOKUSEYTZFIJAWPFJRVWSUETTQJHILGGPZOFOXHKQPABDSIOTYTJWPZRUQRLOOYJTIUOPDFLSMYILANKHNFWCSUQVOQXDGJENLRMDRKXMWRUBIHTNZUBAKEVPEFR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.357471961343);
    msg.setSource(54998U);
    msg.setSourceEntity(247U);
    msg.setDestination(33410U);
    msg.setDestinationEntity(182U);
    msg.group_name.assign("YAQDMTMMJB");
    msg.formation_name.assign("BPLMNUMBISIWOFKWENSQBRJDCCYEIQJDGORDXHHAVXDIZIPTHNJSQFQHVPYIMQMYITACGRSNPVWMVWWSCVELFGNZAJUWCMORJBGTGQZPPXAZVRCTGCBLMTKSZEJDLWQVTZQHOGKEDCTZFLQHARUOBX");
    msg.plan_id.assign("NLFPUPARKZARAUWRSCJIBFCFQJYFVSEQJSITLVDLSUERTUGNQCOKAPXDNPRAQONHWAMBFKLIOG");
    msg.description.assign("LZMUGSVJONKNDDKRDTNZDNPGNWXMIGBXECAULCQLCBMVXBAXQXORYFOSHDJTBVGQDYBEXQAMHDRZUEJSRFVQVHG");
    msg.leader_speed = 0.912842439853;
    msg.leader_bank_lim = 0.247846401883;
    msg.pos_sim_err_lim = 0.494893258547;
    msg.pos_sim_err_wrn = 0.00614869367978;
    msg.pos_sim_err_timeout = 59454U;
    msg.converg_max = 0.234542441452;
    msg.converg_timeout = 61494U;
    msg.comms_timeout = 37868U;
    msg.turb_lim = 0.686249412454;
    msg.custom.assign("VHEJFMCYLKRDZXIXPOVQQLHJORDQFCGKWKMIGGHKIKWYMXKBFLCKOGLBRNJMDZWWFCUVOEPPGTVUKQCPDQTTHXUADAKZCEBYRRHZUDJXOPWSZXBQXLMYAUNZTDFYOLLGHRQQOSTTJNPIFEL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.6712954543);
    msg.setSource(39339U);
    msg.setSourceEntity(221U);
    msg.setDestination(24330U);
    msg.setDestinationEntity(226U);
    msg.group_name.assign("AVMMMAOVNEPIVTGILCYZSQOFWMBWULQSIPGSJZYDVBETQFSKMLSHCURDUDVZHXCFOHYEXXVGEJWYAXEGTLSYVPAHVNWXOCGFQSDITZAIPHDETAWURQONKKFHQUAHBRQ");
    msg.formation_name.assign("PYWJBISJPQDMSYWMUEMILZMDZFBRRSCWDQRUSJFPYGZFLHHKCADOHXTFXCTE");
    msg.plan_id.assign("SMVDRXHEOITWFTDRDZRBMP");
    msg.description.assign("VOLDJAIIFQKQCZBSTQHONRRJQWAVWFEWBBOCQFMFRILZVBCZJXMJXBFDHRMS");
    msg.leader_speed = 0.909492750362;
    msg.leader_bank_lim = 0.578872219003;
    msg.pos_sim_err_lim = 0.346866693786;
    msg.pos_sim_err_wrn = 0.122656302464;
    msg.pos_sim_err_timeout = 2771U;
    msg.converg_max = 0.55946123629;
    msg.converg_timeout = 28666U;
    msg.comms_timeout = 61744U;
    msg.turb_lim = 0.790683869538;
    msg.custom.assign("PVIMQVZZGNPIXMPZKTJDUTMYNAALSUCBEFIYGIPOARFXIEELCSTSWUXOBCRFJMKBBNIDPEUQQEPTSABC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.243114891607);
    msg.setSource(14378U);
    msg.setSourceEntity(146U);
    msg.setDestination(15658U);
    msg.setDestinationEntity(215U);
    msg.control_src = 13339U;
    msg.control_ent = 214U;
    msg.timeout = 0.567799053613;
    msg.loiter_radius = 0.0621740510934;
    msg.altitude_interval = 0.234808856932;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.788384281505);
    msg.setSource(13779U);
    msg.setSourceEntity(11U);
    msg.setDestination(16458U);
    msg.setDestinationEntity(65U);
    msg.control_src = 257U;
    msg.control_ent = 203U;
    msg.timeout = 0.712732857447;
    msg.loiter_radius = 0.401363807868;
    msg.altitude_interval = 0.160450456042;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.972759611702);
    msg.setSource(16062U);
    msg.setSourceEntity(32U);
    msg.setDestination(2870U);
    msg.setDestinationEntity(174U);
    msg.control_src = 44310U;
    msg.control_ent = 12U;
    msg.timeout = 0.390562173491;
    msg.loiter_radius = 0.222472660323;
    msg.altitude_interval = 0.223131782833;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.708939149914);
    msg.setSource(27266U);
    msg.setSourceEntity(179U);
    msg.setDestination(7667U);
    msg.setDestinationEntity(3U);
    msg.flags = 182U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.259157758416;
    tmp_msg_0.speed_units = 59U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.940827975718;
    tmp_msg_1.z_units = 12U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.240403542461;
    msg.lon = 0.778855007759;
    msg.radius = 0.561471259503;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.560961564784);
    msg.setSource(48000U);
    msg.setSourceEntity(204U);
    msg.setDestination(10762U);
    msg.setDestinationEntity(71U);
    msg.flags = 133U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0879011411993;
    tmp_msg_0.speed_units = 221U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.353149922358;
    tmp_msg_1.z_units = 62U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0331104028026;
    msg.lon = 0.899092485805;
    msg.radius = 0.0857688409559;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.608329904179);
    msg.setSource(8884U);
    msg.setSourceEntity(221U);
    msg.setDestination(49237U);
    msg.setDestinationEntity(249U);
    msg.flags = 97U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.834517064148;
    tmp_msg_0.speed_units = 51U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.983284659592;
    tmp_msg_1.z_units = 192U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.365623012412;
    msg.lon = 0.787774399103;
    msg.radius = 0.341190235877;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.915302746666);
    msg.setSource(36703U);
    msg.setSourceEntity(70U);
    msg.setDestination(3851U);
    msg.setDestinationEntity(71U);
    msg.control_src = 54985U;
    msg.control_ent = 91U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 151U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.895691662062;
    tmp_tmp_msg_0_0.speed_units = 139U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.580766032254;
    tmp_tmp_msg_0_1.z_units = 163U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.631199754464;
    tmp_msg_0.lon = 0.531424452685;
    tmp_msg_0.radius = 0.261153100975;
    msg.reference.set(tmp_msg_0);
    msg.state = 234U;
    msg.proximity = 51U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.025504450784);
    msg.setSource(53910U);
    msg.setSourceEntity(151U);
    msg.setDestination(62298U);
    msg.setDestinationEntity(204U);
    msg.control_src = 22798U;
    msg.control_ent = 182U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 217U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.900889038599;
    tmp_tmp_msg_0_0.speed_units = 249U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.900896379443;
    tmp_tmp_msg_0_1.z_units = 199U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.858627077701;
    tmp_msg_0.lon = 0.657342103153;
    tmp_msg_0.radius = 0.781185044329;
    msg.reference.set(tmp_msg_0);
    msg.state = 15U;
    msg.proximity = 17U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.604291089515);
    msg.setSource(5677U);
    msg.setSourceEntity(154U);
    msg.setDestination(46177U);
    msg.setDestinationEntity(220U);
    msg.control_src = 32805U;
    msg.control_ent = 139U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 93U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.918428209236;
    tmp_tmp_msg_0_0.speed_units = 139U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.125152506356;
    tmp_tmp_msg_0_1.z_units = 46U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.651190417544;
    tmp_msg_0.lon = 0.538465129352;
    tmp_msg_0.radius = 0.115072695412;
    msg.reference.set(tmp_msg_0);
    msg.state = 126U;
    msg.proximity = 116U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.77422477481);
    msg.setSource(15824U);
    msg.setSourceEntity(189U);
    msg.setDestination(45559U);
    msg.setDestinationEntity(18U);
    msg.ax_cmd = 0.641585998854;
    msg.ay_cmd = 0.310463241306;
    msg.az_cmd = 0.0116010900176;
    msg.ax_des = 0.316797570578;
    msg.ay_des = 0.817027698724;
    msg.az_des = 0.34427183091;
    msg.virt_err_x = 0.403642162444;
    msg.virt_err_y = 0.424471581552;
    msg.virt_err_z = 0.797080815279;
    msg.surf_fdbk_x = 0.679255163169;
    msg.surf_fdbk_y = 0.599021580834;
    msg.surf_fdbk_z = 0.989344606967;
    msg.surf_unkn_x = 0.477378803022;
    msg.surf_unkn_y = 0.982496778133;
    msg.surf_unkn_z = 0.957935852609;
    msg.ss_x = 0.486048931375;
    msg.ss_y = 0.93353278548;
    msg.ss_z = 0.564180766949;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.0850451047768);
    msg.setSource(28004U);
    msg.setSourceEntity(120U);
    msg.setDestination(3854U);
    msg.setDestinationEntity(220U);
    msg.ax_cmd = 0.0467062035917;
    msg.ay_cmd = 0.735571153634;
    msg.az_cmd = 0.552057677161;
    msg.ax_des = 0.609474610011;
    msg.ay_des = 0.288255270756;
    msg.az_des = 0.369997589837;
    msg.virt_err_x = 0.591656239392;
    msg.virt_err_y = 0.910690291954;
    msg.virt_err_z = 0.763377129066;
    msg.surf_fdbk_x = 0.861883731638;
    msg.surf_fdbk_y = 0.530099725761;
    msg.surf_fdbk_z = 0.865058456951;
    msg.surf_unkn_x = 0.483230320302;
    msg.surf_unkn_y = 0.60012559157;
    msg.surf_unkn_z = 0.97697111151;
    msg.ss_x = 0.720966054207;
    msg.ss_y = 0.663860246519;
    msg.ss_z = 0.508601834404;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.675650027115);
    msg.setSource(27354U);
    msg.setSourceEntity(197U);
    msg.setDestination(7832U);
    msg.setDestinationEntity(164U);
    msg.ax_cmd = 0.779512121154;
    msg.ay_cmd = 0.0877207667461;
    msg.az_cmd = 0.0893332632882;
    msg.ax_des = 0.468657208723;
    msg.ay_des = 0.0233870157783;
    msg.az_des = 0.506090814348;
    msg.virt_err_x = 0.547656181236;
    msg.virt_err_y = 0.375405730776;
    msg.virt_err_z = 0.36015880047;
    msg.surf_fdbk_x = 0.896376123682;
    msg.surf_fdbk_y = 0.0338189439512;
    msg.surf_fdbk_z = 0.117868387294;
    msg.surf_unkn_x = 0.549217593197;
    msg.surf_unkn_y = 0.763108166321;
    msg.surf_unkn_z = 0.938143325274;
    msg.ss_x = 0.155988122139;
    msg.ss_y = 0.901870701403;
    msg.ss_z = 0.687438643895;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.164261261597);
    msg.setSource(32111U);
    msg.setSourceEntity(103U);
    msg.setDestination(45649U);
    msg.setDestinationEntity(176U);
    msg.s_id.assign("FDUFPSAKYRSZIXXYCWYMKNQMEIYNNNROEHQAQFJJPURIWVWQMHRQXITGZSKQBARBGFMTWEG");
    msg.dist = 0.102609795331;
    msg.err = 0.281550138232;
    msg.ctrl_imp = 0.460670034793;
    msg.rel_dir_x = 0.0500546828342;
    msg.rel_dir_y = 0.678803177678;
    msg.rel_dir_z = 0.72158533112;
    msg.err_x = 0.492204247312;
    msg.err_y = 0.405823634854;
    msg.err_z = 0.563138105959;
    msg.rf_err_x = 0.122515128845;
    msg.rf_err_y = 0.236331372981;
    msg.rf_err_z = 0.217223294481;
    msg.rf_err_vx = 0.896140695415;
    msg.rf_err_vy = 0.174721248389;
    msg.rf_err_vz = 0.0625283535684;
    msg.ss_x = 0.839562378287;
    msg.ss_y = 0.0428562778949;
    msg.ss_z = 0.071366027634;
    msg.virt_err_x = 0.491201984301;
    msg.virt_err_y = 0.928483252997;
    msg.virt_err_z = 0.0219722757087;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.992280259798);
    msg.setSource(48534U);
    msg.setSourceEntity(111U);
    msg.setDestination(47383U);
    msg.setDestinationEntity(89U);
    msg.s_id.assign("JEKILHZPRYGFJTJHJWNTZLEAQYMXNEIPBDOERUUYY");
    msg.dist = 0.996689394559;
    msg.err = 0.452268336162;
    msg.ctrl_imp = 0.959874605782;
    msg.rel_dir_x = 0.0147187774214;
    msg.rel_dir_y = 0.278079475631;
    msg.rel_dir_z = 0.742175903396;
    msg.err_x = 0.282997705775;
    msg.err_y = 0.0636051208581;
    msg.err_z = 0.333404226109;
    msg.rf_err_x = 0.340981999261;
    msg.rf_err_y = 0.224321895155;
    msg.rf_err_z = 0.531761236473;
    msg.rf_err_vx = 0.244840646462;
    msg.rf_err_vy = 0.168568385497;
    msg.rf_err_vz = 0.666340901841;
    msg.ss_x = 0.179882682388;
    msg.ss_y = 0.989625457957;
    msg.ss_z = 0.452659805905;
    msg.virt_err_x = 0.959770363161;
    msg.virt_err_y = 0.431060529903;
    msg.virt_err_z = 0.344862886881;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.920668494261);
    msg.setSource(32887U);
    msg.setSourceEntity(148U);
    msg.setDestination(18438U);
    msg.setDestinationEntity(97U);
    msg.s_id.assign("XZGOOPZJXVSCFDKDQUJZZNDSDHOTGEJYNGISODFIAMXHTNCRKMCBVTEUDFVCQEIZRYOIVAHMWJSCPFKHBYLEKLPLMMGRANKNHXSFGTRQJLOKGMWNXUOHWSYKRFULKRCEBEPRAWTJAPVUDWZXXQZISKEAUXFTOTABDLITETZBHOQAUVYGUXPNQYUNJFNSWVISPMDVEWBHURAJIXZIQHROSRIQ");
    msg.dist = 0.160759514989;
    msg.err = 0.0306304784815;
    msg.ctrl_imp = 0.980551325527;
    msg.rel_dir_x = 0.963330308261;
    msg.rel_dir_y = 0.600360587765;
    msg.rel_dir_z = 0.0449545825095;
    msg.err_x = 0.249120158668;
    msg.err_y = 0.357587100305;
    msg.err_z = 0.00881123049978;
    msg.rf_err_x = 0.456956665327;
    msg.rf_err_y = 0.400640421097;
    msg.rf_err_z = 0.250857032049;
    msg.rf_err_vx = 0.434142779214;
    msg.rf_err_vy = 0.154374881491;
    msg.rf_err_vz = 0.702630931971;
    msg.ss_x = 0.335374572345;
    msg.ss_y = 0.84925937071;
    msg.ss_z = 0.423115355275;
    msg.virt_err_x = 0.344897876895;
    msg.virt_err_y = 0.512552380851;
    msg.virt_err_z = 0.171409768095;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.846075691392);
    msg.setSource(6771U);
    msg.setSourceEntity(247U);
    msg.setDestination(34071U);
    msg.setDestinationEntity(62U);
    msg.timeout = 45465U;
    msg.rpm = 0.93395058534;
    msg.direction = 222U;
    msg.custom.assign("LPCQPOPWOYHVWWUQSWFWDJKHFPOBLVFLCUWIMPLJXRBSGVGHRIMIXDTMDVZYDVAGTYZYBYDWSGREKKOLCRIPPUWOTANEJHRJJEAVZNXRQUYGZIJZQLQLXNKKNMNQZUECZAREPTACXVCFSNGDTBXUQMIZYBXTWOMAMFZBEHLFBTSMNSVYHKECJSKFPSOQRCDGJFAGITKITIVHBAXGFRGNURHVZLEHCJMEYBAWOSUXQMOINDODNU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.778763150918);
    msg.setSource(55675U);
    msg.setSourceEntity(54U);
    msg.setDestination(57320U);
    msg.setDestinationEntity(199U);
    msg.timeout = 38848U;
    msg.rpm = 0.963217281756;
    msg.direction = 230U;
    msg.custom.assign("FUBGTVQPGILRRJFFLAHIGEXXXLTUSWHWXEYIDAENEOZKDDKQETRVRMZGYYJUWSLFVGVYJXKGOPBEVTQACROHLVIQSIDGLBCWWQLLCYOIPZGZMZJAUPZVNBAXD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.420475637696);
    msg.setSource(35689U);
    msg.setSourceEntity(99U);
    msg.setDestination(9738U);
    msg.setDestinationEntity(19U);
    msg.timeout = 59764U;
    msg.rpm = 0.190166609827;
    msg.direction = 241U;
    msg.custom.assign("SSDKZJVPXKOYQQWDPPGQKBPGHHACJGJYXMURRAKIGAYSJHUATBBMTNITNAEFLNGDWYLSLZMBHQGCYGIEZHWYNRCIVBXJXDMGPWNRTQCFUIOFPHOCOCDXDRMSTERSKOFTAQNOBVHEDA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.359449420435);
    msg.setSource(28196U);
    msg.setSourceEntity(223U);
    msg.setDestination(43359U);
    msg.setDestinationEntity(42U);
    msg.formation_name.assign("ENEIAEYFOACJWXYTWLZEKLHSOAOPDIQBIXQCXWKYJXYC");
    msg.type = 175U;
    msg.op = 101U;
    msg.group_name.assign("BSUQCCGDNVAGIJRXXXCREPJXJZTGZHJDHYRXGQPDMOLJGS");
    msg.plan_id.assign("FQSEGUJHDHCDDKZHOOYXBMVCBKYEOPSORETPCLREFFRBXTVOEVQQXXSEMQISGRS");
    msg.description.assign("WEJMMFUFRYBADHRIZVJFLQCLLICIEVPDLIIVYNQLYHNHSMXVAAATMWOJYBSSSCJBYHIDCUPMOBKBTUSVCENLZRYTYHHHUKPGNAXBTCFQGIZMJDCOXU");
    msg.reference_frame = 214U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 31030U;
    tmp_msg_0.off_x = 0.535571522713;
    tmp_msg_0.off_y = 0.698618106758;
    tmp_msg_0.off_z = 0.285217039319;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.975533032998;
    msg.leader_speed_min = 0.818009888407;
    msg.leader_speed_max = 0.17627930078;
    msg.leader_alt_min = 0.836791447976;
    msg.leader_alt_max = 0.363220852066;
    msg.pos_sim_err_lim = 0.168791883321;
    msg.pos_sim_err_wrn = 0.513809693156;
    msg.pos_sim_err_timeout = 18925U;
    msg.converg_max = 0.417269242848;
    msg.converg_timeout = 61171U;
    msg.comms_timeout = 63440U;
    msg.turb_lim = 0.282921572906;
    msg.custom.assign("GJELWQIEZGNSJGDPHLQTWMLEVDVJIWFSCWGNBDRLICNVGAM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.999651767254);
    msg.setSource(63506U);
    msg.setSourceEntity(171U);
    msg.setDestination(58028U);
    msg.setDestinationEntity(96U);
    msg.formation_name.assign("BNXZNXHBDLXPJYYNGDEWQDMFYIRHUIKZGGIWXZIBXELGIMSPABAJRGBHNMLWRKKMYTHTPLKTPREKAKBCLQXODQKOZCTNMCGFWYHQZCONOTNPVOYZJUBSRWMCZHQSQTZK");
    msg.type = 154U;
    msg.op = 111U;
    msg.group_name.assign("ZJCCDDAHBVGSFFXSWYUBOGDQYZPGIWYNKVBYKWQYECBDGCRPZPTQXPQOJSHSOEEAPILOIMLJZBCKULZSCDHHHFMIPSX");
    msg.plan_id.assign("GRMFOSBDHGWJYZYSINEBBIQXESHNPLPUXDXVLYMROFDFWGZPPXADSKCGWSAQVBVIMPMUYQAIDHOMZVKXJQVOVFNLQICKTCIWWPENSEHRZHCWBENWZMYXGTRNWDLXFBRJCAAKFXDVNYMFLSEANOIAYIVRKU");
    msg.description.assign("DPIYUHQKMELWMARRYONPCMSSDCZIKCTRAKQGBHNMDXUIFXTMPBVXWVTCEISLXOTGIVEEBNFYTBXOPRBFZIACHQRIUZYNWBJOMVZVCWRZJXDRRYJCQLZFKWFWS");
    msg.reference_frame = 53U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 53378U;
    tmp_msg_0.off_x = 0.330770123528;
    tmp_msg_0.off_y = 0.93364117764;
    tmp_msg_0.off_z = 0.319443180823;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.900579643292;
    msg.leader_speed_min = 0.448370651075;
    msg.leader_speed_max = 0.234462319968;
    msg.leader_alt_min = 0.606025308756;
    msg.leader_alt_max = 0.88903710243;
    msg.pos_sim_err_lim = 0.00533140596499;
    msg.pos_sim_err_wrn = 0.504475240532;
    msg.pos_sim_err_timeout = 3310U;
    msg.converg_max = 0.408059297444;
    msg.converg_timeout = 33459U;
    msg.comms_timeout = 54722U;
    msg.turb_lim = 0.215228664515;
    msg.custom.assign("KJHLYSSCLHKHRWATGKNKMYELMWNYVBGUXVFTJZLUDSCGOXBBQDQKATPJIOYRQPXZTGGTYQCLEVNRPVFANENWSJLRMDGASCSUIUIHSCZCFZCJXLZVTFUJUEIFRPAFODPPJUZWXN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.680958203669);
    msg.setSource(23298U);
    msg.setSourceEntity(10U);
    msg.setDestination(13869U);
    msg.setDestinationEntity(8U);
    msg.formation_name.assign("MUXMLRXEUTQBOGOCWSROSDRCVYXBVHKKNZYLASECNYVHZJYIEFOJZMBWXJVMYWSMRATTLWGLHAZERPCSUGPPUXFRAYBEHXGTHEQPMEHVNOPSVGVUABKJNTFNVMQDIMCYWXDJIKTDSDYIPUJBTO");
    msg.type = 40U;
    msg.op = 75U;
    msg.group_name.assign("UHYRVPKWJPGEIUSPEYKMEZJZSQJVSXGITMHYDKGFDSQKIMOZLWZWZLYWJSMPIKZLHTIHQLAACJOXRYEFATBLHNQEXABUUVDKEOHDFMCFSREVLRZUOMBCWMVLBBGTCKBGYXJQTGTFSRXQDJRNNGCQVCIPENNGVVJIDRQQBXMZOITHFFTBPCNTNXYPQPJUVSHOAFMOXWPERLNRNHOIYYJXLKBKOUGVAAMCCDZSADUAAWUER");
    msg.plan_id.assign("TQBVZCNIHHDCBZETYVDCOFLZHYRYMAYJUZMLZUECJYXDPKLOJITPBOLUKVSRKEYITRNJUKSSFPYNCFQLQAXTWGHDJDNIRBUCEBFWVMZLOTPUAMPZSHXXGJWFEMMFQTISWDMNGMRIVQDQSNKOXQFTILYVNTGIHXBUGAKRNBPBIBUHECQDWOFAOXGCRKRGHCRKTAWKKHJAAEVSDVOQPLVLZFVOFYGEZNZXP");
    msg.description.assign("WCVEGMLFUWHYTCRBCKGQTWWBUSOGCINLOMFYRUZUMOSWWUKYKZVAEURRBZYDJQQEYIIMXNBAFFHBZAJHYAHPPALGUMCFVDKWXFGMOLVDIUCIDJQENHQJERZSHYJMKAPRTEAOSDBDPOIYGWOYHDKNMNKBLRAJUHRZTPFUGGNTZNOTNESTQKINAICXZJJQVJVTCDGQPBRKMKYSVFNHWSQDXAZCSLLZPXWSPMERCSBVTHJPVELOXOP");
    msg.reference_frame = 253U;
    msg.leader_bank_lim = 0.292397065528;
    msg.leader_speed_min = 0.856236399476;
    msg.leader_speed_max = 0.202503552491;
    msg.leader_alt_min = 0.325850846269;
    msg.leader_alt_max = 0.134466208701;
    msg.pos_sim_err_lim = 0.578066983046;
    msg.pos_sim_err_wrn = 0.353703471148;
    msg.pos_sim_err_timeout = 42805U;
    msg.converg_max = 0.794060781419;
    msg.converg_timeout = 4954U;
    msg.comms_timeout = 54153U;
    msg.turb_lim = 0.958919504788;
    msg.custom.assign("UWMWIXJHDLPJWZLRPRZABXJHNDQTILVORYGUFXMBASVHCQCQFAWZDBTGHJFPYAUHRPZQFUTYOSYHIEDXGDZNAQVONKKAPQCIKIMFSQPB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.241060427247);
    msg.setSource(53197U);
    msg.setSourceEntity(138U);
    msg.setDestination(21179U);
    msg.setDestinationEntity(5U);
    msg.timeout = 48925U;
    msg.lat = 0.107047231812;
    msg.lon = 0.592400385914;
    msg.z = 0.887817636396;
    msg.z_units = 73U;
    msg.speed = 0.617936133946;
    msg.speed_units = 74U;
    msg.custom.assign("PJZZCPONXQQAEAGUTEFBLIXJQSSKVSFHBXALMEXNDBCJURLCWHLTNXMINKTDDPCEYQRHBYDUZSXHLVTJUMJUIVTZMBCDYLRMSEETHABQKUKVSICWQWEAYAGIQM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.564249399266);
    msg.setSource(63145U);
    msg.setSourceEntity(8U);
    msg.setDestination(31324U);
    msg.setDestinationEntity(109U);
    msg.timeout = 47682U;
    msg.lat = 0.332033065662;
    msg.lon = 0.61016193909;
    msg.z = 0.890736688035;
    msg.z_units = 0U;
    msg.speed = 0.954082719592;
    msg.speed_units = 228U;
    msg.custom.assign("DAOWVZWWDKRDNYXHXCLAOJGZLOYLMBDTOAGCMCHLEXIMOISVEEZPQXWRHIKEWNUVNDQBNEOYCHRNFXWWTUMSZTDYXTBSPZXKCZBAPUGWTUHMKBZUMXRALFBSXCLHPIBYGIT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.236518298791);
    msg.setSource(39404U);
    msg.setSourceEntity(187U);
    msg.setDestination(35867U);
    msg.setDestinationEntity(105U);
    msg.timeout = 43404U;
    msg.lat = 0.726244378754;
    msg.lon = 0.0736413305591;
    msg.z = 0.564400872959;
    msg.z_units = 83U;
    msg.speed = 0.455748317984;
    msg.speed_units = 151U;
    msg.custom.assign("HKLLOUWBRBEFDPBYMDADMLWCPEY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.832929127373);
    msg.setSource(59776U);
    msg.setSourceEntity(45U);
    msg.setDestination(22806U);
    msg.setDestinationEntity(234U);
    msg.timeout = 6185U;
    msg.lat = 0.828782035465;
    msg.lon = 0.571140412202;
    msg.z = 0.953464170662;
    msg.z_units = 71U;
    msg.speed = 0.518579383397;
    msg.speed_units = 198U;
    msg.custom.assign("HSAQAZRPBAWVJPYYFRTINTYQSXISZJMBZEEEMCHNMIMJHEFPBUJTGKVUGEGBCWKXCQSAWJALQJUWZLNZXTOVPUQHUXSBHDYQIOYODBPWQEBMOTFZVYZTBJUXDXIRAPGISLWMRQPRAHVLGSTDPNFIEKYZOHTJJSDOFHRWJSCOAMLLDZEDDHXKMUKVNGILLDRFGLGNGXECCCUVAYGVNKTTCRXUUYOVFVLQNANFNWOWRRBKPIQMXOMKHKB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.551919193461);
    msg.setSource(13913U);
    msg.setSourceEntity(1U);
    msg.setDestination(53524U);
    msg.setDestinationEntity(232U);
    msg.timeout = 425U;
    msg.lat = 0.791016161;
    msg.lon = 0.942873926394;
    msg.z = 0.610599989067;
    msg.z_units = 111U;
    msg.speed = 0.592355391842;
    msg.speed_units = 119U;
    msg.custom.assign("JEMBPTMAGQCESFWWLUHBZIMWPXDEYLXYEDUTXNOIOYACLBPSHMPFAKFJXPSAKNRVNFSHCZHAABGHOWHKGMD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.995340856077);
    msg.setSource(17221U);
    msg.setSourceEntity(55U);
    msg.setDestination(33812U);
    msg.setDestinationEntity(205U);
    msg.timeout = 15673U;
    msg.lat = 0.0913066541692;
    msg.lon = 0.316109586088;
    msg.z = 0.00295904071272;
    msg.z_units = 146U;
    msg.speed = 0.535156352037;
    msg.speed_units = 208U;
    msg.custom.assign("AXQSJBQDTVDFCBAUQMPDCTQJHQKTWIJMWAKBOYFOZCBXPGLBKRMDWTXNKHOJQZUMGMXPDZPJBTAMQZLRWTGUPGIFOAVCKZWNSXFXFHITCKTGDRAPLBORELCEWLFCURNFQDIVNSVEKJSSMMBCNLZRKYLUSDYFPOISTUZREUVBTLJLDCHHZSKRYNNEYVXDHFEHJNQIYOEXVGONMUYQIHWHLAAVWSGVGOFXREZYWJPIUYVPZHNJXSEACMUWGIGPR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.431670302718);
    msg.setSource(57415U);
    msg.setSourceEntity(152U);
    msg.setDestination(63105U);
    msg.setDestinationEntity(119U);
    msg.arrival_time = 0.874853189542;
    msg.lat = 0.686755603246;
    msg.lon = 0.0257326277408;
    msg.z = 0.537054472486;
    msg.z_units = 186U;
    msg.travel_z = 0.961223824492;
    msg.travel_z_units = 213U;
    msg.delayed = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.601091773932);
    msg.setSource(6346U);
    msg.setSourceEntity(63U);
    msg.setDestination(57139U);
    msg.setDestinationEntity(164U);
    msg.arrival_time = 0.767935249214;
    msg.lat = 0.678172463001;
    msg.lon = 0.388677491519;
    msg.z = 0.299991161002;
    msg.z_units = 94U;
    msg.travel_z = 0.843961461307;
    msg.travel_z_units = 12U;
    msg.delayed = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.619458576099);
    msg.setSource(22578U);
    msg.setSourceEntity(99U);
    msg.setDestination(53906U);
    msg.setDestinationEntity(7U);
    msg.arrival_time = 0.0524477223043;
    msg.lat = 0.532145222144;
    msg.lon = 0.84960791883;
    msg.z = 0.656392474757;
    msg.z_units = 210U;
    msg.travel_z = 0.108438465647;
    msg.travel_z_units = 133U;
    msg.delayed = 167U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.439613474994);
    msg.setSource(8694U);
    msg.setSourceEntity(147U);
    msg.setDestination(59248U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.890452990474;
    msg.lon = 0.0674432256668;
    msg.z = 0.787401396531;
    msg.z_units = 107U;
    msg.speed = 0.565126304841;
    msg.speed_units = 214U;
    msg.bearing = 0.568062576052;
    msg.cross_angle = 0.340427905132;
    msg.width = 0.408570478534;
    msg.length = 0.689553630548;
    msg.coff = 133U;
    msg.angaperture = 0.4298095182;
    msg.range = 3600U;
    msg.overlap = 3U;
    msg.flags = 220U;
    msg.custom.assign("RUEWHZSMJDWNIUMTPZLYOPDHCBFPEMOIAPUYADNJUQVXJZGDQGUBTVBSYLZFINCEPGBSYINCVTPSJRRGQTMIGJSBKVTQSOKYGQPHGMFIFKSAVAKZGHRQZLJXTLFKXMTUQBZCFXDZMXZXFYDKDSVNNROKKICGFV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.472433724619);
    msg.setSource(45800U);
    msg.setSourceEntity(55U);
    msg.setDestination(64603U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.143182247632;
    msg.lon = 0.846531037702;
    msg.z = 0.261627042595;
    msg.z_units = 2U;
    msg.speed = 0.316964261105;
    msg.speed_units = 88U;
    msg.bearing = 0.174021553334;
    msg.cross_angle = 0.629580840147;
    msg.width = 0.748507934682;
    msg.length = 0.0497890763149;
    msg.coff = 206U;
    msg.angaperture = 0.951013846158;
    msg.range = 1805U;
    msg.overlap = 42U;
    msg.flags = 222U;
    msg.custom.assign("HMHOXVMNZTZKDSRFVLIBMENFWXUJYQJHCSXVUELQTKRZEAMBPDLCWNWZKNNYJNYVFFIAGXOWSHPLUCOQEQSKTTAVWBIJDIMGNPXCURQRYQVGYSXRMXHISXBOOLACAWGHBKPFEAIRYUAQFCXJZWPTLOYGTUGACQEVFSGLCZOUYBSAVIUPMYHXRJFYDNKUFOQZZTINKKICDRJWFJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.0166742808138);
    msg.setSource(48222U);
    msg.setSourceEntity(182U);
    msg.setDestination(12180U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.516418232749;
    msg.lon = 0.503589369607;
    msg.z = 0.727256758477;
    msg.z_units = 50U;
    msg.speed = 0.073037072897;
    msg.speed_units = 26U;
    msg.bearing = 0.557764637191;
    msg.cross_angle = 0.230399433965;
    msg.width = 0.0380656924865;
    msg.length = 0.475246946193;
    msg.coff = 42U;
    msg.angaperture = 0.51825154705;
    msg.range = 12032U;
    msg.overlap = 23U;
    msg.flags = 40U;
    msg.custom.assign("JKBQKIBTBQJUNWDANGAWAZATGVQGMZCKITDKIZRPFCWQGOEIRYMZKODZCRTQCEWEQXTORAUNIOAMHSFFYVIKDMULHCOLIUIOILZTFVMTLBTHVCHYCXVOLNBBYCJNDKSUUSPERQLPJHCJMEMLXDGAAHGBWCBHPXYRYHRUYPFXBVKMDYPPMXOVFGEBWUGLMNQFPWTVSHFJOUZPRSFSIRPKGLS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.127909129912);
    msg.setSource(54854U);
    msg.setSourceEntity(89U);
    msg.setDestination(50251U);
    msg.setDestinationEntity(222U);
    msg.timeout = 31967U;
    msg.lat = 0.941712204886;
    msg.lon = 0.325182301667;
    msg.z = 0.581689816754;
    msg.z_units = 14U;
    msg.speed = 0.572112580499;
    msg.speed_units = 47U;
    msg.syringe0 = 146U;
    msg.syringe1 = 89U;
    msg.syringe2 = 15U;
    msg.custom.assign("QGVTSUAYLXGQTVPDPKVGINFJGDRMILUNRAQHPQEDUSAKCNZNOVGTSFBWWEMNRXMKHKMMAYDWXYQTDSVFKTGUXHCWCVSFJEMLJOSSHMZIQLBRNHEUTARBYQUNMCZAZCFBIAYRWRLJPJZVCLNPYCZKFAO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.584558165064);
    msg.setSource(49194U);
    msg.setSourceEntity(192U);
    msg.setDestination(64085U);
    msg.setDestinationEntity(220U);
    msg.timeout = 34441U;
    msg.lat = 0.030943316121;
    msg.lon = 0.777524679089;
    msg.z = 0.43759741105;
    msg.z_units = 4U;
    msg.speed = 0.148444077417;
    msg.speed_units = 57U;
    msg.syringe0 = 113U;
    msg.syringe1 = 69U;
    msg.syringe2 = 96U;
    msg.custom.assign("RJIEGVYHGNDDOZCXBMYWQJJXARAHSXDHLOQTIKWDLHDCMVBFSBBYDPYTTJMYZMNOGLEACWSIVWFOQGJZPTJNGXNQMIUPKMQCTZFAREVIPMOJYEHVSXBQXQBDHPHRULKWRTUMZKOHEMSZGFUVKGTRQUSPJPIRYLUAEIVNRFAOWYMAYQLAWXUFTOIUKEBPOSJRFFZNCC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.327134096294);
    msg.setSource(48061U);
    msg.setSourceEntity(13U);
    msg.setDestination(6030U);
    msg.setDestinationEntity(178U);
    msg.timeout = 57188U;
    msg.lat = 0.438110352757;
    msg.lon = 0.201186357699;
    msg.z = 0.690081156609;
    msg.z_units = 110U;
    msg.speed = 0.405172704153;
    msg.speed_units = 8U;
    msg.syringe0 = 221U;
    msg.syringe1 = 207U;
    msg.syringe2 = 2U;
    msg.custom.assign("AGGEPPJAQHKKENXCGNUDWZBXDQYKWFGUWYUOCAWZJHSVFNIRKQJHMMIIDUXNBFKV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.371761296588);
    msg.setSource(58806U);
    msg.setSourceEntity(127U);
    msg.setDestination(33581U);
    msg.setDestinationEntity(205U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.897921866895);
    msg.setSource(22809U);
    msg.setSourceEntity(103U);
    msg.setDestination(49932U);
    msg.setDestinationEntity(105U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.604282384988);
    msg.setSource(47121U);
    msg.setSourceEntity(32U);
    msg.setDestination(6825U);
    msg.setDestinationEntity(192U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.901849100896);
    msg.setSource(50248U);
    msg.setSourceEntity(240U);
    msg.setDestination(8442U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.571826494663;
    msg.lon = 0.0323530045786;
    msg.z = 0.814751006265;
    msg.z_units = 79U;
    msg.speed = 0.460323890982;
    msg.speed_units = 211U;
    msg.takeoff_pitch = 0.609037741574;
    msg.custom.assign("AYEDCYRWXDUJTNJRGALAVGSZIGRWUOLHQNKLBRXTCNWQVWVQUWJCYMSIQALAXITUFPCKZUBTMAEJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.855411919212);
    msg.setSource(48137U);
    msg.setSourceEntity(252U);
    msg.setDestination(53463U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.809009247496;
    msg.lon = 0.138929087619;
    msg.z = 0.775064438954;
    msg.z_units = 123U;
    msg.speed = 0.208558736709;
    msg.speed_units = 22U;
    msg.takeoff_pitch = 0.0371115525445;
    msg.custom.assign("ADUBUZJMKWXBJZKFSWOXHHJFNJFXCYBDTNNVLEMNJORSNFIAKAMLCYEETERNQNKLAQEGIPSSWRKWVJGRYARUOIVJISOCQXWFQOTZBAMHZWRPFQBBAIEUYYORWNHTNGRHZUXCZAFJTXMPCJLFYGTRTXTUMZMVDVVZKLMSYTTDPYABDGAPPUSOQQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.675190574794);
    msg.setSource(43432U);
    msg.setSourceEntity(70U);
    msg.setDestination(63237U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.0381231698471;
    msg.lon = 0.977873163602;
    msg.z = 0.845875773477;
    msg.z_units = 61U;
    msg.speed = 0.998792137967;
    msg.speed_units = 153U;
    msg.takeoff_pitch = 0.466376240188;
    msg.custom.assign("BPCXTMXUIFQDZVROMDIOVNHZDJOICSGMHMPESANEFIWRBPACMNMOEFHYKSZKASTYPYNQQBWOYFWLVSURALQBGCQSMWJLOTDLIEGVJKLEARJKBIXBMBEATKUYMHHEPMWHUYGYQDIOEPFWNRGCCBKLZGNSHZRJDOFPWBPGXCQEVRDTK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.000138942318127);
    msg.setSource(29379U);
    msg.setSourceEntity(206U);
    msg.setDestination(21082U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.168003054835;
    msg.lon = 0.271540007261;
    msg.z = 0.570702938227;
    msg.z_units = 233U;
    msg.speed = 0.783781439177;
    msg.speed_units = 107U;
    msg.abort_z = 0.659669553746;
    msg.bearing = 0.730680867619;
    msg.glide_slope = 82U;
    msg.glide_slope_alt = 0.850879823526;
    msg.custom.assign("CEMUOWOCSCTTLRGSVAGBDTVCTHNEZXMBYKJHJLBEQRSQOIJGRVKGQYJMAFZQIAJNKUYQDNCHBKHOVHFHYNTVDVIPIJUMXKHDNTWYXXWEMTWAXZRKNUFLZXEFJAZBCKVZWNMPDADGGOLZSKUOMRHFJPLBBFMUDWMVRPXPCQCPPHGZXEYUJCIYDQWAUKPUPGBRZUEMFPTYQLCAAIDJNRHFOGXLNWIDWLZVRKSIGYLONOEBTLSSFQATXSIRBVOQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.966926842129);
    msg.setSource(2255U);
    msg.setSourceEntity(197U);
    msg.setDestination(51864U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.150055655725;
    msg.lon = 0.774364001356;
    msg.z = 0.139467380398;
    msg.z_units = 4U;
    msg.speed = 0.901336434632;
    msg.speed_units = 117U;
    msg.abort_z = 0.379205211851;
    msg.bearing = 0.207136011296;
    msg.glide_slope = 188U;
    msg.glide_slope_alt = 0.561579295983;
    msg.custom.assign("LRTOREBUSYFWPVVDSWOVNDMIDJAACPENFNAIQRKHPQLXPZHRHPALHJSDNWHFXZNGCBRPMIBCGGJKOBVWWKEWZOXYUCOUECFFSGKPVOYAOVQFENQSJCYLRPTDGDRMZAPUUDXYAAQRNJQCSOSZGBBJZHFDTTJMIHGYQJSFXWYWFIHVXSUKLSAKCDXUYPIJEZLQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.743305153988);
    msg.setSource(19171U);
    msg.setSourceEntity(117U);
    msg.setDestination(61982U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.122669792182;
    msg.lon = 0.3054268819;
    msg.z = 0.110240474869;
    msg.z_units = 91U;
    msg.speed = 0.485682688033;
    msg.speed_units = 71U;
    msg.abort_z = 0.0933706186938;
    msg.bearing = 0.823259521799;
    msg.glide_slope = 52U;
    msg.glide_slope_alt = 0.421629023661;
    msg.custom.assign("FPSRYTBMBJKMKKNHMWW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.8961919549);
    msg.setSource(10064U);
    msg.setSourceEntity(94U);
    msg.setDestination(21836U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.352901845091;
    msg.lon = 0.401114476621;
    msg.speed = 0.591352066233;
    msg.speed_units = 165U;
    msg.limits = 102U;
    msg.max_depth = 0.505587544158;
    msg.min_alt = 0.671290881853;
    msg.time_limit = 0.546082897573;
    msg.controller.assign("UASBXKUAJHKJUSYEIUNZRVDPIMAVMHBJKSCSJGWFOKGDMKJOKEECPHKIQSKHMFMAYOUPCINPPOHAJTEPJHSRIOHOUWYEFDQHFVSOEBNLDCXRDXRBGV");
    msg.custom.assign("JEKZYUMIVUTVTGGIGCANXFKJWQFQEPBILRIGRDYSPQCUOANKYNXNQDSMFOTCOUYZMZEERCYKNPVABMIJCXDHPUZXEFLXMDNGZKWUPRNEITTSSETXSUPVSPJQFFRXUSLITLFLZSVQVBWBEOWOARICRDSKJXJOMNWKDMCAEWKJWYHZHBNMWOMBGHGPJKWYADVIFDODHRAHLHHBMBLAAOYCCYWGJNBQXQQPZZVLRUBTOITFJRDGSLVTQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.195278809547);
    msg.setSource(56981U);
    msg.setSourceEntity(145U);
    msg.setDestination(29754U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.729118322198;
    msg.lon = 0.789987205285;
    msg.speed = 0.551692579837;
    msg.speed_units = 236U;
    msg.limits = 243U;
    msg.max_depth = 0.47004406668;
    msg.min_alt = 0.505759890718;
    msg.time_limit = 0.758751112777;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.00806405271025;
    tmp_msg_0.lon = 0.668605156301;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("KZUHXXITOQXIFAQIRCISSJDTIIPWLODUTKXOSSLGPWABFLSRARQBBGHUMFENNZNRYJEJAGHKCHJMZKZPJBTBJDZFLZDHTQGBCBVSKLODTOVCYGMFIQVXGPOWQ");
    msg.custom.assign("LYAMCRNZJTUGQYIGCEOAMQFGYREHKIMXCDHFXSDWRPQAXVUODEFWORGLXWOYNNKDEHLSQYYRPTSMPNUFSPLQPNQDOXITLUXWKDJZIKJORZBUASFMYBKJVUGTIRBMZXBFWBGHAFFDCPYGEIZJUQWKVWXXLCNZIVSHIGKALDOBQMJBTJPVFSHTSUQGZROAZCRJMTQLPKBVPVSUKDEEZMVZEYVMNCSHTTABWVUAFHEIOPLWEAGWHJN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.911763207298);
    msg.setSource(34919U);
    msg.setSourceEntity(252U);
    msg.setDestination(266U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.855141314913;
    msg.lon = 0.984727975017;
    msg.speed = 0.293822007649;
    msg.speed_units = 252U;
    msg.limits = 234U;
    msg.max_depth = 0.0787275280156;
    msg.min_alt = 0.665373985536;
    msg.time_limit = 0.729500984308;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.318100341393;
    tmp_msg_0.lon = 0.875748285074;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("HODBQWNYDOKZD");
    msg.custom.assign("OXKGTFVAMTXJIOKSZBMWLEVYBCPVEYFLTFXYDOZQKCPE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.115659312171);
    msg.setSource(17188U);
    msg.setSourceEntity(85U);
    msg.setDestination(3175U);
    msg.setDestinationEntity(163U);
    msg.target.assign("UTGNCEBVBQNACNWOKRCRLCGTQU");
    msg.max_speed = 0.645141965856;
    msg.speed_units = 116U;
    msg.lat = 0.382633723416;
    msg.lon = 0.221518423605;
    msg.z = 0.419755792177;
    msg.z_units = 118U;
    msg.custom.assign("VMPFCLQWUWXGCEDQGEJNDBAFPQZDYUSOZOAZZVXVISWILJULHNCRKANWESIVXABLMBQJCTYXGLRXZGCOZTYRJGEGZEHJVBCWVKSXNABDKNYGTCWCDARCTJJMIMXLETYPVUURSPTNRFKROTMWNEUPUBBJMLIDPQUFHQKIJLMQRE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.227956171434);
    msg.setSource(54650U);
    msg.setSourceEntity(18U);
    msg.setDestination(3657U);
    msg.setDestinationEntity(116U);
    msg.target.assign("ONGRKVNQIYALBFICXQZJAWVVIFQAEWHHMSWSWNWHGYRSUXRAANKWFFEUALKSPOKHPDMKFEKFMSUXVQQZCJYCZXLMNVLGIYIBUPWYQGSXXEOWJHRPPDPHEGULPDHMDTRFATKSLUAIEXNCCVHPNCHNICQLCTUF");
    msg.max_speed = 0.661491764867;
    msg.speed_units = 203U;
    msg.lat = 0.777552256563;
    msg.lon = 0.664574588653;
    msg.z = 0.0161314043864;
    msg.z_units = 205U;
    msg.custom.assign("JEJXOGUTIHUIZOMJYEGRLMBYAYKPAFOMTWOXOXIZVHACVBGXKYYETDCBOUPQDUHHZEK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.321808357441);
    msg.setSource(14061U);
    msg.setSourceEntity(59U);
    msg.setDestination(35916U);
    msg.setDestinationEntity(8U);
    msg.target.assign("EJFNLYSXQDMCIXUOSGUVEATLXSANQINDMOKHFRZLPHNJFKSRXINZOSIFLABJFKSSWNOFZGJJRTSIWUGHCTPCMBNUVVDUDMGVGXLMTRHGVPCMVUOCCQWXUPKEWELDWCXFLNQZHMHPOKPKDDBDAFHYHZAXTXYWSYAIWCEFPHQBLOMYBP");
    msg.max_speed = 0.30027580653;
    msg.speed_units = 1U;
    msg.lat = 0.136320397238;
    msg.lon = 0.540883442639;
    msg.z = 0.487862878272;
    msg.z_units = 207U;
    msg.custom.assign("QAUZSGEVFTBNDPV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.83347045845);
    msg.setSource(33139U);
    msg.setSourceEntity(112U);
    msg.setDestination(30803U);
    msg.setDestinationEntity(60U);
    msg.timeout = 4674U;
    msg.lat = 0.989135935898;
    msg.lon = 0.495875580096;
    msg.speed = 0.420452624943;
    msg.speed_units = 147U;
    msg.custom.assign("OXVQGGTZXWLXABPYQBVNKMLXLS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.71891560488);
    msg.setSource(11271U);
    msg.setSourceEntity(148U);
    msg.setDestination(8570U);
    msg.setDestinationEntity(142U);
    msg.timeout = 6481U;
    msg.lat = 0.58545864746;
    msg.lon = 0.322002337235;
    msg.speed = 0.152060462392;
    msg.speed_units = 129U;
    msg.custom.assign("GWYQXVJCSGJNSJYLUTZHAYBIPRCOOUBHKDGIFNXEJUADNYBFICWDMUSNHUZCDLQYBFTTPYLVWHAQMAFPXPEQKFVGJMJNPMDXUCDHHKUMKKIAWNZEORIOBQLSYSOASDKHIRMBKBTBWJQNAMCOMLS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.937485529587);
    msg.setSource(60125U);
    msg.setSourceEntity(230U);
    msg.setDestination(61100U);
    msg.setDestinationEntity(202U);
    msg.timeout = 507U;
    msg.lat = 0.238153818856;
    msg.lon = 0.814774918669;
    msg.speed = 0.950822400009;
    msg.speed_units = 119U;
    msg.custom.assign("DWUQRDMFUMNGFRXTULWAXINOZFYQEFFEZHWDDRUQRSTGQHBYKVLOOMEKTYEPCUYFVBEKYDQONVIKSLWEBURGLNEOOLMOOTJHKDUZYTISKBQLUTRHNVCQHGZJIPKIJPTIVXAWTBFSHIOPXCJFAJWBNGBMAJHDGCOISQALYRARLVMGVPPKAZHZBZMCMXDCNTCSWYWXUSLMRXXXAHASVJXYEZLVWSJNNNEQAGVSIZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.170060693109);
    msg.setSource(18085U);
    msg.setSourceEntity(109U);
    msg.setDestination(27189U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.423974397275;
    msg.lon = 0.617186787538;
    msg.z = 0.399108681195;
    msg.z_units = 100U;
    msg.radius = 0.77250816244;
    msg.duration = 1485U;
    msg.speed = 0.658199264272;
    msg.speed_units = 7U;
    msg.popup_period = 32176U;
    msg.popup_duration = 51092U;
    msg.flags = 209U;
    msg.custom.assign("WTGPLOKVFLASYSFTMNPKOPBPYOYAMEUDXQEUSWYRRBUGDYVRNWAISIJTOVENEXFLGXVIFSQBUWCBBZGPQHJOMFSYXTLZPDTUXLWXTLGCBDBKEBJMAOMUGNSLAMSBKCFOYLXRDATRPUZCHAEDSFNSHLNZKIAHPDZMOCIHJKVHWIEIJHWIJKVWTZWERGOOWUXITQCGZFYVZRNUCZK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.703336172113);
    msg.setSource(61593U);
    msg.setSourceEntity(212U);
    msg.setDestination(33807U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.612255763732;
    msg.lon = 0.55073387958;
    msg.z = 0.428945518292;
    msg.z_units = 42U;
    msg.radius = 0.842395500475;
    msg.duration = 18247U;
    msg.speed = 0.793622194383;
    msg.speed_units = 112U;
    msg.popup_period = 8589U;
    msg.popup_duration = 14390U;
    msg.flags = 69U;
    msg.custom.assign("OFYPBHEUHWOWNBLRIMQNACZWLFVXLCODKGFIAZWLGNGMMSTHSGPJYOTEBSVOLDLPGIKDCSRYTTTTPZYOABRRJQDLJEFUECEILQQHSNVSWOARKXVBJARVOIGUPRCJPINJKYLKPFMJQIHUBVXJVFBTBUEDXCZKMGVFQTDSS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.144561168978);
    msg.setSource(40046U);
    msg.setSourceEntity(14U);
    msg.setDestination(23856U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.596641820048;
    msg.lon = 0.28113256786;
    msg.z = 0.626596709711;
    msg.z_units = 41U;
    msg.radius = 0.81021940722;
    msg.duration = 29942U;
    msg.speed = 0.834326302927;
    msg.speed_units = 161U;
    msg.popup_period = 42645U;
    msg.popup_duration = 55757U;
    msg.flags = 115U;
    msg.custom.assign("PAZCNWXGPIAQLEDAYHBYSPWZWDRZFGYOBFRADMIZFEOKHRSUQFXSLIDNYVBMFLQOJQNZVTQMJCYKVPSROJETFDDOJEMWYFWBOLUPRUJGKVLFCVKHBKJCMFENZBTZQVLXLHX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PeekManeuver msg;
    msg.setTimeStamp(0.782679848897);
    msg.setSource(22924U);
    msg.setSourceEntity(144U);
    msg.setDestination(9053U);
    msg.setDestinationEntity(51U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("TCYNIVNSSYSDAJLGLBHHTTFBFZVDJCICAGZMWHLEHHOLJNVKGVMPZGUVMQWYQAANMOJYPNZQKNBUCWEFYNTYGQPOJEADPWARQUSFIBXGXJVGIHQBSLVNCCCBTXONPQMDCRSBAOXWRFZZLPQYKSIUQUGHXHEXTMRRMKHMZOTZWKSCVRTIAJAZKJLX");
    IMC::AutonomousSection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.168029849856;
    tmp_tmp_msg_0_0.lon = 0.0833282889541;
    tmp_tmp_msg_0_0.speed = 0.267438582672;
    tmp_tmp_msg_0_0.speed_units = 211U;
    tmp_tmp_msg_0_0.limits = 70U;
    tmp_tmp_msg_0_0.max_depth = 0.505734819274;
    tmp_tmp_msg_0_0.min_alt = 0.105882738827;
    tmp_tmp_msg_0_0.time_limit = 0.0796965366447;
    tmp_tmp_msg_0_0.controller.assign("FPYWIDIQSDCNGUWMZRTHLQESEIFWGRDXOIWBMYRNECAIHVNQKJLPPMWZSQUVJFRBCBPJWVIQTEFCEDXYZCDVH");
    tmp_tmp_msg_0_0.custom.assign("YFNXENDWFBOLWIACHOXVJGAGSWSJEJJYPKBRRANCESF");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::VehicleOperationalLimits tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 119U;
    tmp_tmp_msg_0_1.speed_min = 0.946091807285;
    tmp_tmp_msg_0_1.speed_max = 0.624234516088;
    tmp_tmp_msg_0_1.long_accel = 0.498778057936;
    tmp_tmp_msg_0_1.alt_max_msl = 0.92359875432;
    tmp_tmp_msg_0_1.dive_fraction_max = 0.563870662696;
    tmp_tmp_msg_0_1.climb_fraction_max = 0.639521496998;
    tmp_tmp_msg_0_1.bank_max = 0.982598697992;
    tmp_tmp_msg_0_1.p_max = 0.25594689257;
    tmp_tmp_msg_0_1.pitch_min = 0.707223253977;
    tmp_tmp_msg_0_1.pitch_max = 0.97225388008;
    tmp_tmp_msg_0_1.q_max = 0.425490797848;
    tmp_tmp_msg_0_1.g_min = 0.554811983322;
    tmp_tmp_msg_0_1.g_max = 0.214912129751;
    tmp_tmp_msg_0_1.g_lat_max = 0.767466865849;
    tmp_tmp_msg_0_1.rpm_min = 0.173068810197;
    tmp_tmp_msg_0_1.rpm_max = 0.607929357476;
    tmp_tmp_msg_0_1.rpm_rate_max = 0.485121467822;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.man.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PeekManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PeekManeuver msg;
    msg.setTimeStamp(0.607878983628);
    msg.setSource(2465U);
    msg.setSourceEntity(77U);
    msg.setDestination(52649U);
    msg.setDestinationEntity(56U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("NVYSUHAIIDWHRYLLFZZDZGATBNPWSRRHAJSDFMDBCSFUCJKYKKMSKBEAHAZISGHUQJMHWIQPVGCUNJAPFIHMNEVLXNIGCNOFROXHLY");
    IMC::RowsCoverage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.508076221964;
    tmp_tmp_msg_0_0.lon = 0.821694170132;
    tmp_tmp_msg_0_0.z = 0.629670971251;
    tmp_tmp_msg_0_0.z_units = 194U;
    tmp_tmp_msg_0_0.speed = 0.761424940914;
    tmp_tmp_msg_0_0.speed_units = 218U;
    tmp_tmp_msg_0_0.bearing = 0.215778843997;
    tmp_tmp_msg_0_0.cross_angle = 0.341377921012;
    tmp_tmp_msg_0_0.width = 0.536618047575;
    tmp_tmp_msg_0_0.length = 0.606425537714;
    tmp_tmp_msg_0_0.coff = 2U;
    tmp_tmp_msg_0_0.angaperture = 0.993798364586;
    tmp_tmp_msg_0_0.range = 23152U;
    tmp_tmp_msg_0_0.overlap = 94U;
    tmp_tmp_msg_0_0.flags = 175U;
    tmp_tmp_msg_0_0.custom.assign("MDLMRIAHQUXWLDBLIPJLVTNCHUBIHDKOUEPZNJVXUPFGLJVSDGQPCVELRUMVFEPT");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::ImageTxSettings tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.fps = 240U;
    tmp_tmp_msg_0_1.quality = 61U;
    tmp_tmp_msg_0_1.reps = 188U;
    tmp_tmp_msg_0_1.tsize = 173U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.man.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PeekManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PeekManeuver msg;
    msg.setTimeStamp(0.933908688268);
    msg.setSource(18791U);
    msg.setSourceEntity(23U);
    msg.setDestination(54947U);
    msg.setDestinationEntity(62U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("QJIQCIZOSOYIMKUHFZGUXDGXYNVFSJQJWVZZFICCDVMUYTVUGYIAEDZIEFBGPCMKEMAWOXPJCMRYMLLKNLBWHXRTVLYXGNXAMUSHDBREZPHFZO");
    IMC::Dislodge tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 20727U;
    tmp_tmp_msg_0_0.rpm = 0.508750794833;
    tmp_tmp_msg_0_0.direction = 162U;
    tmp_tmp_msg_0_0.custom.assign("WLHEMRETVKVRNBJOFSKHNLRSPTSXVBMLJTHGQWSKZZHPWRYVVFDSDJOUVWJZYDFAMKDILCLQFUYDEYXMKBIANCALRLSMUPIQZCWBPERTEAIZBBZKUYBILOOXXGHYXPQXTGWAXDUGSAJDTTMYQOMHXPGATKIBVIZMHFCXGEJCEUQWNVSUEPRJYWNPPZSHQUNAJOZYDKDBNNMXFFTORCGCOJPFLZUIRHGEQUWCGVBLNOYJTMFKVIHACEDGSAC");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.man.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PeekManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.287539769011);
    msg.setSource(16350U);
    msg.setSourceEntity(251U);
    msg.setDestination(5362U);
    msg.setDestinationEntity(79U);
    msg.timeout = 44372U;
    msg.lat = 0.939689542878;
    msg.lon = 0.0125744281385;
    msg.z = 0.949331079419;
    msg.z_units = 24U;
    msg.speed = 0.199242001313;
    msg.speed_units = 69U;
    msg.bearing = 0.0352580240269;
    msg.width = 0.913297501545;
    msg.direction = 70U;
    msg.custom.assign("KVEBWAEVQWLPEOVZUVTJDPHZUXUSZXJXDBVCHUOFP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.997107810818);
    msg.setSource(22795U);
    msg.setSourceEntity(178U);
    msg.setDestination(14108U);
    msg.setDestinationEntity(152U);
    msg.timeout = 20945U;
    msg.lat = 0.914077936445;
    msg.lon = 0.585729596485;
    msg.z = 0.53031015715;
    msg.z_units = 201U;
    msg.speed = 0.344372898086;
    msg.speed_units = 167U;
    msg.bearing = 0.0551793491777;
    msg.width = 0.235614300677;
    msg.direction = 6U;
    msg.custom.assign("MTEBSLGNLSNALLGGLUQSKATNNBEKOWPSKUWBXSGJPKYVTZAJJFYQRSKHPFEXUYOJCWFOMQEJJHVXDOCVWWFRQDXEMBTNYHP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.189842785424);
    msg.setSource(7255U);
    msg.setSourceEntity(108U);
    msg.setDestination(33290U);
    msg.setDestinationEntity(183U);
    msg.timeout = 37455U;
    msg.lat = 0.528060323594;
    msg.lon = 0.972133609908;
    msg.z = 0.731385622406;
    msg.z_units = 162U;
    msg.speed = 0.38354352923;
    msg.speed_units = 120U;
    msg.bearing = 0.663937435618;
    msg.width = 0.067044690048;
    msg.direction = 58U;
    msg.custom.assign("LBHCGKOIQQFNOFZJFZOGZBGDJMMOEWQYIYSUCZQSJMZXOLELVCEWSUMJPOSJSYIEUVKRKYPFDCTUDCLKQTZDUXPEBNHJGIAASAQZPRHPNWJRVHUFETYQUBAHNTLXKMNBRMJSWLOBCDTAIYJFXVCVXRKRAEHZGGTQQOMWFDGPXFENWWEVUYBRRRPHLMOBXVLKILGZBAKHKJMNWWHVSSXIIUCFAOZYDGIIXVYCAVPFRSGEPYTDMULTCHTPT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.0378424145791);
    msg.setSource(10138U);
    msg.setSourceEntity(45U);
    msg.setDestination(65340U);
    msg.setDestinationEntity(144U);
    msg.op_mode = 179U;
    msg.error_count = 130U;
    msg.error_ents.assign("IJAPTTBMYVWNAQFYQCWZZDKAOAMHLREYRXBIXDJWMXZRSHETBHLHDKCIGQSUHNAAZROV");
    msg.maneuver_type = 27664U;
    msg.maneuver_stime = 0.266304736811;
    msg.maneuver_eta = 54601U;
    msg.control_loops = 659663327U;
    msg.flags = 52U;
    msg.last_error.assign("ZTVQLGUOAAWTCGNIRHJJJDWRSRSCDKVHOZBMN");
    msg.last_error_time = 0.421350554527;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.87479889275);
    msg.setSource(11443U);
    msg.setSourceEntity(79U);
    msg.setDestination(55566U);
    msg.setDestinationEntity(113U);
    msg.op_mode = 73U;
    msg.error_count = 206U;
    msg.error_ents.assign("NMXVGTTVFUCIUDEBIVWJJYSMQEVTNENZMQLMIZBIUUUNSWGGCJGYBFDQYPOARQNLEIHLHFFKIKTQKXXTEZMOYMNETDLPCHXUWPCHIRARLBUSROOCBHZNPWJOWTPMWADKORCYKDQUIHGBDHPVNUAXCMZSFSDYCJEKXAOZSGK");
    msg.maneuver_type = 19956U;
    msg.maneuver_stime = 0.324408760755;
    msg.maneuver_eta = 60045U;
    msg.control_loops = 596938666U;
    msg.flags = 206U;
    msg.last_error.assign("QKBWIDCXPUBTHNTEOGYFSJSABTMBSQXTYCQGFLEBJCTPXZRZKGROVFACRENSTFGOYJXXFOSLKMNMEZLOLDUMBNCGNIDAHRPNFHDCLDEJWHFICZNHWKOQHRMHHOWJVUHRLSNUYJDYKVMWJWSLJAVXIQSZIQWSUSDKCYJAIVXLRNOCYFUWA");
    msg.last_error_time = 0.113747350398;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.246244940391);
    msg.setSource(22713U);
    msg.setSourceEntity(90U);
    msg.setDestination(26253U);
    msg.setDestinationEntity(141U);
    msg.op_mode = 226U;
    msg.error_count = 121U;
    msg.error_ents.assign("PYYWDXDHGKVHCMFVZLMOIOAYTAPCWSXRPIKTRECLKMQHXRUJGAJCMLRNPWGHEFJZGQJLUSIDOZLLIEXANJWLMJ");
    msg.maneuver_type = 52077U;
    msg.maneuver_stime = 0.178431424097;
    msg.maneuver_eta = 65405U;
    msg.control_loops = 933212240U;
    msg.flags = 19U;
    msg.last_error.assign("EAKMLQXLTGKJBHZHHVHAJJJWLCQBHBHTNPKENKLNWDSTPIMYLATDCKPJKNSNRVOQRRJVYBWYYGIGFTVCQOXUGHFWDGASUTDARP");
    msg.last_error_time = 0.289752148454;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.414260372531);
    msg.setSource(23656U);
    msg.setSourceEntity(108U);
    msg.setDestination(63464U);
    msg.setDestinationEntity(153U);
    msg.type = 112U;
    msg.request_id = 18973U;
    msg.command = 23U;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 34802U;
    tmp_msg_0.lat = 0.580191197814;
    tmp_msg_0.lon = 0.409827408157;
    tmp_msg_0.z = 0.586961796886;
    tmp_msg_0.z_units = 47U;
    tmp_msg_0.speed = 0.432390818317;
    tmp_msg_0.speed_units = 185U;
    tmp_msg_0.syringe0 = 16U;
    tmp_msg_0.syringe1 = 24U;
    tmp_msg_0.syringe2 = 97U;
    tmp_msg_0.custom.assign("DNBDHBJMDPSPGTUAXKFNLWJDGORZBYMUNIVRAQHHCMIUCZNNIYCMJCEOLECGBRSBAWKHPTSZUEIORXGLNCVJKBRKZDKLAXPJAQTLYWDZVWOGODZEWPFJUWSUOUSEVIOHDYXLTPUKISXEHPZQLNVCWQVTVSGABMQWYGT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 21660U;
    msg.info.assign("QHXDVMBPNMSJYPVCFBGAJEDKATAYRUQMPRFXWYJSLZV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.777516832042);
    msg.setSource(60187U);
    msg.setSourceEntity(77U);
    msg.setDestination(50627U);
    msg.setDestinationEntity(121U);
    msg.type = 224U;
    msg.request_id = 51006U;
    msg.command = 148U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 6816U;
    tmp_msg_0.custom.assign("KJBSMVNIFNDEKOZLBMMAJWFMXNIJLIHRLUDBWCLYSCQRLFADUWGGYXPYZNHKYXMAZRESWQFFTAGCVRKVDKJCPZWTSHGAVNKTQJZWZPELAQOVLPIKERNGHXCOUJPYTOCGBEERPITTNOLBBRYGDMQXHMEZUZVSRDUSPBVAGSWCFQFBDXELATWAORDRKZGOUAX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 34031U;
    msg.info.assign("WYRIUBVTFXDMMRMJHKSOGFHLXHNRECRXITTOTBBUOIDPAIDEGHDRRSPTSWSEGNOACWXYNNBPQJVIKFCHTPWXEQLFKUXPCCYWYPMYMBMKHLZFUVEDJQGGDLCQDGBNEAQITUSWKGJBXGRWZLYTPIMSSJZPRQQWKNMNHHIZOQXYJYCCOJURTORALYZKECEC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.557937380751);
    msg.setSource(65053U);
    msg.setSourceEntity(23U);
    msg.setDestination(33388U);
    msg.setDestinationEntity(141U);
    msg.type = 181U;
    msg.request_id = 46608U;
    msg.command = 0U;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.748166506834;
    tmp_msg_0.lon = 0.513487813058;
    tmp_msg_0.speed = 0.858989428267;
    tmp_msg_0.speed_units = 91U;
    tmp_msg_0.limits = 191U;
    tmp_msg_0.max_depth = 0.129767499394;
    tmp_msg_0.min_alt = 0.788982444524;
    tmp_msg_0.time_limit = 0.413246567539;
    tmp_msg_0.controller.assign("NKJZUQWBYJKREHZVWULIWCOCANTGNBZEWDDUUVOBAVKKPLNTUNSHFRYLSE");
    tmp_msg_0.custom.assign("ONIQOIMNTRTTUQQEAACXDTKHBWUKRYXFCSQPWGRBDTUXWIQHNRXLDZQZUBVGRTVFWUHHWOBN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 18582U;
    msg.info.assign("SVHQLPPUNIYDDFKFVXAMZYILTWYCXTZECSDSQUSQWEMWRZCARPBCG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.22091206011);
    msg.setSource(48583U);
    msg.setSourceEntity(39U);
    msg.setDestination(56161U);
    msg.setDestinationEntity(130U);
    msg.command = 18U;
    msg.entities.assign("QGFQLDMQHHUTMRGFGDUBMOAVVHTK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.179954658511);
    msg.setSource(20622U);
    msg.setSourceEntity(143U);
    msg.setDestination(47248U);
    msg.setDestinationEntity(50U);
    msg.command = 198U;
    msg.entities.assign("DJUOMGLERQETOXEADHNFIXURQYPKVISTVUWVIVLAAQACWZZGALCWUAHOFSFSEZMNMONJODBQDUJDAACUPOKEQVJYTOUCMKMKSJPSLWEKFQHLGUNMLKEIOKFXFGVCGYZGDCBJWAQGYYYMRHBQRPRBODKJULBIRMBHKPLQIWFVPXZSBNRSJBCXXPHED");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.913616029604);
    msg.setSource(31310U);
    msg.setSourceEntity(105U);
    msg.setDestination(39302U);
    msg.setDestinationEntity(172U);
    msg.command = 164U;
    msg.entities.assign("RQJJOSGUGWNAVVUIUKEQMMCGKGINAPFYMXRCPDTLFEDBIABSXOZLSKPLBRNHOCWYJWUNNGQIWGMDKBWPEXITFTRAGKVLEF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.263499904091);
    msg.setSource(2613U);
    msg.setSourceEntity(1U);
    msg.setDestination(17240U);
    msg.setDestinationEntity(83U);
    msg.mcount = 117U;
    msg.mnames.assign("LZDJFPGETTPGXDAGQZOJYHWRNCFEZWHKWEZOGCOJQTCFERPIRBLOBOBMIJTYQFVQKLCYOVVSZWXWDTPCITAMBINOSBKLLQLRUKSNLDDWSOSITNTUDWNGMHUBUYWTMIGIVEXSMPAXRIKQHSJFJNFYYLXWVRHEBDCKJYPTQLUKGRPHAVNZXMPSHNEZAURYU");
    msg.ecount = 93U;
    msg.enames.assign("GOJHTIPWJHFZWXHKGNBRFVSJBSSFAGPEVYAPDPIMXNEPEDFCBTN");
    msg.ccount = 246U;
    msg.cnames.assign("PCJSTUHRFQSZGDAPUPIHGJVTVJHXNJPBCMPDEEXSECNKLKDCOVMLVQCKEQUIBVYULJKAYBGWYKVINWGHONT");
    msg.last_error.assign("XIITWMMRRGKAUZAUOKVMGETHRCSOQQEQEYDXJOMAISZPAAUNCHLFLDVSVRUKRSULNWBKLEHWNPWENIAMSWHFOGLXPDBDJBAIEYQUXBUTLFRVDQMPJBPNYFQUNCAGBFZBCTMVDXPEIQCJQOVHZJUECPWSHKJZHWWJPTLPLRMTAWKEDZCDVYZYLBEDOFG");
    msg.last_error_time = 0.909817200973;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.306053310308);
    msg.setSource(53213U);
    msg.setSourceEntity(160U);
    msg.setDestination(65381U);
    msg.setDestinationEntity(166U);
    msg.mcount = 91U;
    msg.mnames.assign("GMLOPFYSVJTSDKUKPWXPTVUWVLCTOTMBWRSUSRNUDJGJIKJGXIHOSDFEDWLPQZNXFZ");
    msg.ecount = 123U;
    msg.enames.assign("TWNDXECHTBVPHYOTYNOPCFENCKFHWMFSVCLPERILHAXBFVDPXUOHWYLJNGHZIZEGJXJUACPAQVFDZEJSZUCGBVZJXVJFQULOOBNBQJTRTPROSQSYLURJSVNZCPKZBLRQEMISJDOEOKDVDZAMYFLTXNWTKGKIYYWWIVKYZLRSGTWXLINE");
    msg.ccount = 116U;
    msg.cnames.assign("FMCIRHADQTPIKMZKWYDOPUMJOZOGVYJIBFTLODOXIDONWVNUMURRMUYMLZZXDIRARSJBCSQTFJZEVWWTABIHLBEVQKKIHFNYVSFBOWWSCYZDHTUYGC");
    msg.last_error.assign("EVZEDMPMUPBEHIOGLDAJYKHYWASVQLWPOCEBVWTFSJPEXKQUWFISZJMZFQRFFYUWGNRASGRFUBPXTDCPSGQINOKFCQBFXLKVDLDBZODIWCCJASBLTAGCNKBZYTPUDRJITRPOWULCEZGXJWT");
    msg.last_error_time = 0.678263510667;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.405013764552);
    msg.setSource(50749U);
    msg.setSourceEntity(132U);
    msg.setDestination(1149U);
    msg.setDestinationEntity(212U);
    msg.mcount = 131U;
    msg.mnames.assign("RDNMJBBSUFEIHKOAKPML");
    msg.ecount = 237U;
    msg.enames.assign("HZHPRSNXPWESVGKKNLCLLWTJITNFKWCIYQYFPELGJJRXDPBOPEQWZ");
    msg.ccount = 59U;
    msg.cnames.assign("VEFGVDJLWLFYMJDXXLTIZSQDVMAPCOHJTBXMQPMZCLSIECHONAOWRCWNKKKXVVJCAGBFXQLHUADUXBUPGRPJDABCXSRHQIWNHINTMBCRZLDONHVDOUQPIZFFTYWZEPNSOSUZSYPAGGFOZRDAIJXNOZZEGHTJKPNEREIUQKCJQKYASYHMFMDWUKKBPAJEQAINMGBTRMSY");
    msg.last_error.assign("ISLHWBJPISYTML");
    msg.last_error_time = 0.373629765154;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.955932092833);
    msg.setSource(54806U);
    msg.setSourceEntity(209U);
    msg.setDestination(50097U);
    msg.setDestinationEntity(86U);
    msg.mask = 103U;
    msg.max_depth = 0.22921790819;
    msg.min_altitude = 0.154135790393;
    msg.max_altitude = 0.61279949929;
    msg.min_speed = 0.278568107146;
    msg.max_speed = 0.335178910301;
    msg.max_vrate = 0.654200006135;
    msg.lat = 0.223425796005;
    msg.lon = 0.413077218387;
    msg.orientation = 0.973924617544;
    msg.width = 0.423160086726;
    msg.length = 0.735983665871;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.5245787951);
    msg.setSource(29016U);
    msg.setSourceEntity(42U);
    msg.setDestination(33536U);
    msg.setDestinationEntity(41U);
    msg.mask = 81U;
    msg.max_depth = 0.62009846144;
    msg.min_altitude = 0.493726797563;
    msg.max_altitude = 0.941578461631;
    msg.min_speed = 0.140105242195;
    msg.max_speed = 0.511677402522;
    msg.max_vrate = 0.960269203744;
    msg.lat = 0.48920870709;
    msg.lon = 0.87021585699;
    msg.orientation = 0.810261289646;
    msg.width = 0.829752494818;
    msg.length = 0.732724241954;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.343958880703);
    msg.setSource(28259U);
    msg.setSourceEntity(62U);
    msg.setDestination(16688U);
    msg.setDestinationEntity(155U);
    msg.mask = 94U;
    msg.max_depth = 0.841898202401;
    msg.min_altitude = 0.115508085047;
    msg.max_altitude = 0.864424576097;
    msg.min_speed = 0.266982166204;
    msg.max_speed = 0.701110061028;
    msg.max_vrate = 0.0307390710026;
    msg.lat = 0.998106990267;
    msg.lon = 0.934268389109;
    msg.orientation = 0.671249010182;
    msg.width = 0.753122777769;
    msg.length = 0.704362415085;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.661410044557);
    msg.setSource(20261U);
    msg.setSourceEntity(14U);
    msg.setDestination(15582U);
    msg.setDestinationEntity(189U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.455786563765);
    msg.setSource(4701U);
    msg.setSourceEntity(25U);
    msg.setDestination(56274U);
    msg.setDestinationEntity(107U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.451645504539);
    msg.setSource(53789U);
    msg.setSourceEntity(110U);
    msg.setDestination(48653U);
    msg.setDestinationEntity(148U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.361946758048);
    msg.setSource(27238U);
    msg.setSourceEntity(166U);
    msg.setDestination(47296U);
    msg.setDestinationEntity(176U);
    msg.duration = 32602U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.788584470833);
    msg.setSource(37027U);
    msg.setSourceEntity(191U);
    msg.setDestination(8136U);
    msg.setDestinationEntity(237U);
    msg.duration = 1135U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.0741069336201);
    msg.setSource(57592U);
    msg.setSourceEntity(9U);
    msg.setDestination(43528U);
    msg.setDestinationEntity(116U);
    msg.duration = 55601U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.840555387942);
    msg.setSource(39256U);
    msg.setSourceEntity(223U);
    msg.setDestination(31771U);
    msg.setDestinationEntity(205U);
    msg.enable = 172U;
    msg.mask = 224414450U;
    msg.scope_ref = 294803254U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.124546180958);
    msg.setSource(49004U);
    msg.setSourceEntity(128U);
    msg.setDestination(31420U);
    msg.setDestinationEntity(29U);
    msg.enable = 99U;
    msg.mask = 1507546720U;
    msg.scope_ref = 947898769U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.895667931754);
    msg.setSource(44742U);
    msg.setSourceEntity(150U);
    msg.setDestination(24308U);
    msg.setDestinationEntity(17U);
    msg.enable = 209U;
    msg.mask = 3162287549U;
    msg.scope_ref = 1909033935U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.494523778753);
    msg.setSource(9378U);
    msg.setSourceEntity(129U);
    msg.setDestination(7575U);
    msg.setDestinationEntity(29U);
    msg.medium = 76U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.984666980131);
    msg.setSource(868U);
    msg.setSourceEntity(154U);
    msg.setDestination(10289U);
    msg.setDestinationEntity(51U);
    msg.medium = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.0052474188478);
    msg.setSource(44951U);
    msg.setSourceEntity(7U);
    msg.setDestination(20245U);
    msg.setDestinationEntity(20U);
    msg.medium = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.830795938678);
    msg.setSource(64203U);
    msg.setSourceEntity(168U);
    msg.setDestination(62242U);
    msg.setDestinationEntity(93U);
    msg.value = 0.766028368426;
    msg.type = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.607206714465);
    msg.setSource(14328U);
    msg.setSourceEntity(15U);
    msg.setDestination(18478U);
    msg.setDestinationEntity(200U);
    msg.value = 0.99130549115;
    msg.type = 93U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.368380934207);
    msg.setSource(20317U);
    msg.setSourceEntity(45U);
    msg.setDestination(21558U);
    msg.setDestinationEntity(43U);
    msg.value = 0.477313418071;
    msg.type = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.626904781542);
    msg.setSource(3964U);
    msg.setSourceEntity(165U);
    msg.setDestination(53040U);
    msg.setDestinationEntity(135U);
    msg.possimerr = 0.36005091062;
    msg.converg = 0.131263974422;
    msg.turbulence = 0.19377216058;
    msg.possimmon = 153U;
    msg.commmon = 237U;
    msg.convergmon = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.340266145934);
    msg.setSource(26863U);
    msg.setSourceEntity(177U);
    msg.setDestination(65415U);
    msg.setDestinationEntity(234U);
    msg.possimerr = 0.411208716376;
    msg.converg = 0.757744812837;
    msg.turbulence = 0.681081323776;
    msg.possimmon = 14U;
    msg.commmon = 40U;
    msg.convergmon = 245U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.0791307114957);
    msg.setSource(59614U);
    msg.setSourceEntity(96U);
    msg.setDestination(59214U);
    msg.setDestinationEntity(9U);
    msg.possimerr = 0.849363688141;
    msg.converg = 0.76833645468;
    msg.turbulence = 0.470412728885;
    msg.possimmon = 6U;
    msg.commmon = 108U;
    msg.convergmon = 31U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.418705600018);
    msg.setSource(27184U);
    msg.setSourceEntity(64U);
    msg.setDestination(24177U);
    msg.setDestinationEntity(81U);
    msg.autonomy = 25U;
    msg.mode.assign("LAJHUIUWYZQAXYAFIHSPVERNPFBYTDRIUFTKNOGKCJTPHXGFKBARMQWCABWEWQKKWMOOEEIATOUWDHYBMTDTLJWRCNFVAJEJVGMYHNJPZSPMEDTWVBTMOZVXOYPIUVODKPEEYGLYSMBGGOTVVUHNHQNSLSDMXBXZQRZQLKCXPYQNHFCFZZROHZVUMRPSLDSWAGKDBUJCSNXLZRXHWMXFLSLFRVCXCNJIDEPGKIRQLQGFT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.255535832003);
    msg.setSource(11620U);
    msg.setSourceEntity(69U);
    msg.setDestination(21026U);
    msg.setDestinationEntity(78U);
    msg.autonomy = 208U;
    msg.mode.assign("JMZKDPKTZBITJWDOXCMWBQIQZYRRIAISVGCXYYSFLAXBIAFZBRIPOVTEIEDPTVCNEWGBWO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.942302237556);
    msg.setSource(14674U);
    msg.setSourceEntity(240U);
    msg.setDestination(58611U);
    msg.setDestinationEntity(111U);
    msg.autonomy = 13U;
    msg.mode.assign("OJFQOBZYUHLS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.458696092633);
    msg.setSource(5146U);
    msg.setSourceEntity(228U);
    msg.setDestination(15171U);
    msg.setDestinationEntity(193U);
    msg.type = 3U;
    msg.op = 212U;
    msg.possimerr = 0.804626966965;
    msg.converg = 0.991815455969;
    msg.turbulence = 0.469211382644;
    msg.possimmon = 234U;
    msg.commmon = 41U;
    msg.convergmon = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.336345795222);
    msg.setSource(48883U);
    msg.setSourceEntity(117U);
    msg.setDestination(47593U);
    msg.setDestinationEntity(86U);
    msg.type = 218U;
    msg.op = 41U;
    msg.possimerr = 0.345966718445;
    msg.converg = 0.144523866535;
    msg.turbulence = 0.536924435902;
    msg.possimmon = 109U;
    msg.commmon = 129U;
    msg.convergmon = 118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.499798949723);
    msg.setSource(20498U);
    msg.setSourceEntity(5U);
    msg.setDestination(8121U);
    msg.setDestinationEntity(123U);
    msg.type = 24U;
    msg.op = 12U;
    msg.possimerr = 0.489964319497;
    msg.converg = 0.731276463794;
    msg.turbulence = 0.0539082612168;
    msg.possimmon = 17U;
    msg.commmon = 173U;
    msg.convergmon = 159U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.00252016786123);
    msg.setSource(32037U);
    msg.setSourceEntity(78U);
    msg.setDestination(16297U);
    msg.setDestinationEntity(115U);
    msg.op = 57U;
    msg.comm_interface = 113U;
    msg.period = 9042U;
    msg.sys_dst.assign("SRGVWLGRATSETFMIMOMWJRFOZGQGIBXZAJWUVFUSEYBMQBDYZXKSNCODPFECPPFSYQTXXGWKQJTECBWRKXUAIEDYFVHDQANRJKYFXGONOQIOPNUPANINHWPIWAYHPXLOHSJMEUMAYZTJNRBRDIE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.159716174086);
    msg.setSource(57357U);
    msg.setSourceEntity(16U);
    msg.setDestination(59792U);
    msg.setDestinationEntity(29U);
    msg.op = 158U;
    msg.comm_interface = 209U;
    msg.period = 59753U;
    msg.sys_dst.assign("OAOMGYDMVTWVLXLLOVLSDNXEZKOXJDJJAVYLNXIIWUFBSLQWIDREHOYBIFEACYHPVPPPKRWOXNPDXWBUBIKDVXGJFATIN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.0918768603229);
    msg.setSource(3245U);
    msg.setSourceEntity(127U);
    msg.setDestination(37757U);
    msg.setDestinationEntity(46U);
    msg.op = 217U;
    msg.comm_interface = 19U;
    msg.period = 6460U;
    msg.sys_dst.assign("EICSMXCMLUVZIVRTQLAJNOAZAXVHESFZWOUGYNLICEAYPXGRSWSBEABYQGTDBYTLMIMKLPYWTKWSFZOJDRMFEEHPFRFUSVOLKXIDGDOHXZOUNZEWQQHCALPXVKNTHKCESGUKMJVITZCZPGBHQXTCKDGEGIXHQCQFMLPDYADDUBFQJBJFHVAFLNKMLHOWUTXWYBUONJGTUR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.29522633006);
    msg.setSource(22277U);
    msg.setSourceEntity(213U);
    msg.setDestination(28434U);
    msg.setDestinationEntity(27U);
    msg.stime = 559406498U;
    msg.latitude = 0.00564479030622;
    msg.longitude = 0.0993019910203;
    msg.altitude = 2270U;
    msg.depth = 29865U;
    msg.heading = 26715U;
    msg.speed = 3112;
    msg.fuel = 6;
    msg.exec_state = 121;
    msg.plan_checksum = 12094U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.52201790453);
    msg.setSource(59589U);
    msg.setSourceEntity(6U);
    msg.setDestination(26956U);
    msg.setDestinationEntity(88U);
    msg.stime = 1107762447U;
    msg.latitude = 0.561768138819;
    msg.longitude = 0.941972731386;
    msg.altitude = 10556U;
    msg.depth = 56083U;
    msg.heading = 54853U;
    msg.speed = 10177;
    msg.fuel = -46;
    msg.exec_state = -3;
    msg.plan_checksum = 9672U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.60572317625);
    msg.setSource(30603U);
    msg.setSourceEntity(214U);
    msg.setDestination(56751U);
    msg.setDestinationEntity(199U);
    msg.stime = 1896364737U;
    msg.latitude = 0.400823916767;
    msg.longitude = 0.271013474235;
    msg.altitude = 58402U;
    msg.depth = 28471U;
    msg.heading = 13739U;
    msg.speed = 1733;
    msg.fuel = -64;
    msg.exec_state = 38;
    msg.plan_checksum = 11205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.456163878831);
    msg.setSource(62840U);
    msg.setSourceEntity(93U);
    msg.setDestination(39050U);
    msg.setDestinationEntity(27U);
    msg.req_id = 7810U;
    msg.comm_mean = 167U;
    msg.destination.assign("CPDHPQKNWBLEUXOONUFCXVIHATYLVQHUZTLAGEQNGFWCKVRWUONFRLYYJFLBORBXMHTYXHYKWMCPTGZTAFQOADSAMRYRSVTSZWGKWBMGLDWVOJOJEDLDCGTMQFSKQIAZMNAKHWZCIVKSSQYEPZUNINBSDNIYECUNXXYMEXDJSPVQTPIAYXUJONGIOJLSJQTDPPEFRRVCMPEBKEKRDGIBMIVLZL");
    msg.deadline = 0.138993509613;
    msg.range = 0.982023302839;
    msg.data_mode = 182U;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("DAXIQGERJKOXEBMQKZKIMAWQFSZFSPLTTRMOVRHGXJODUXGPWPLSIHNZVMJQJEEEBHYGFNUTKDVBRNZVVRPFCROYTDOJYICFUDBHLYJYOZUYBFJQKCHLGDBVDONVVYLURSGXKEDCAWZXZMQKUWWNLHNIRIUFAUXIJSCFVSHTBEWONYKLBZDAGSJXGDAZKMPOVGENKXRLHPTNAEPLJIARXQCTCSPN");
    tmp_tmp_msg_0_0.lat = 0.897827053543;
    tmp_tmp_msg_0_0.lon = 0.0662634911618;
    tmp_tmp_msg_0_0.depth = 0.518226206101;
    tmp_tmp_msg_0_0.query_channel = 119U;
    tmp_tmp_msg_0_0.reply_channel = 108U;
    tmp_tmp_msg_0_0.transponder_delay = 247U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.40235000253;
    tmp_msg_0.y = 0.537591916264;
    tmp_msg_0.var_x = 0.318812028184;
    tmp_msg_0.var_y = 0.10010918088;
    tmp_msg_0.distance = 0.0446830392907;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XVKZKWMZCYCNJWIJESRUHOABBSWEVYHNPVJRTPLRHDCIOBXINHJOTDWNSQYZOEGVPTCADUIYWRJHKQMBPZRSNGEUXLFYIZYODXENYSALVLNHHEMDCFRKBMVJEJVITAXRQMGUQPBKITTBUDYDOKBTEAVFYWGEOOMQWPGDIPVEMHSAMCAPZWZPHMSXULKCXGRBXMFCFGBDPWKJL");
    const char tmp_msg_1[] = {-106, -22, 126, -80, 22, 4, -65, 97, -8, 32, 94, -49, -56, -124, 60, -16, -51, -66, -77, 12, -68, -57, -21, -83, -107, 113, -63, -42, 116, 79, -113, 17, -87, -121, -122, 38, 25, -9, 54, 24, 1, -43, 63, -55, -51, 22, 84, 46, -60, 20, -35, 40, -49, -7, 18, -99, 60, -31, -30, -25, 65, 1, -100, 83, -12, 5, 46, 103, -75, 1, -95, -54, 101, -40, -24, -86, -16, 38, 62, -16, -54, 112, -103, -49, -7, 96, 41, -23, -6, -127, 95, -27, -112, -39, -104, -55, -23, 59, 112, -106, -92, 17, -22, -91, 59, 20, -3, 108, 96, -117, -128, -56, 12, 119, -54, -77, 14, -30, -30, -116, 29, 90, -57, 65, -2, 42, 74, 73, -25, 9, 4, 24, -55, 80, -67, 18, 56, -38, 73, -13, 89, 95, 71, -43, 80, -30, -54, -94, 106, -87, 68, 60, 123, 90, -24, 120, 84, -47, 119, 35, 13, 93, 46, 77, -110, 104, -55, -28, -71, -79, -54, -8, 62, -27, -83, -111, 64, 108, 44, -57, -79, -77, 92, -108, 111};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.210299137119);
    msg.setSource(8765U);
    msg.setSourceEntity(203U);
    msg.setDestination(20731U);
    msg.setDestinationEntity(50U);
    msg.req_id = 35796U;
    msg.comm_mean = 99U;
    msg.destination.assign("ZQLESLTXZYKFLXZHDOIYGLCFQGPVMPIYDUUNFJFSHEDRWOCBSUQQVCKBFPACQEWBXSGRGMMHVABNPIJIWLYTESDGFXTMCROSMYFESWJXACPJQAJPEBJDPBTFZUKLXOLIUCQ");
    msg.deadline = 0.949575410647;
    msg.range = 0.979875297578;
    msg.data_mode = 58U;
    IMC::EstimatedFreq tmp_msg_0;
    tmp_msg_0.value = 0.171275068868;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LCOYBEDTURGZOBPMJMAZEYSSPRLRJWDIYSFECXDHNXBJOXMWEFWYKGCXERFYKQGTVZTXKLFAPUXPGLTZYQR");
    const char tmp_msg_1[] = {60, 25, 79, -8, 68, 6, -117, 64, 110, -48, 32, 124, -40, -107, 13, 119, 17, 108, -104, -86, 87, 112, -87, 114, -54, -105, 115, -16, -32, 65, 108, -38, 0, 27, -21, -114, -48, -46, -109, 97, 94, -93, -82, -91, -28, 44, -58, 87, -96, -34, -47, -52, -79, 122, -74, -89, -65, 110, 119, 118, 74, -84, -104, 42, 92, -126, -84, -24, 116, -116, -83, -92, 5, -61, -39, 113, 48, 32, 67, 39, -46, -101, -40, -64, -126, -3, 70, 55, -48, 91, -113, -115, -86, -53, -115, 74, 57, -29, 105, -52, -54, -18, 81, -117, -104, -66, -59, 126, -23, -95, 45, -55, -124, -35, -110};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.152131376419);
    msg.setSource(7039U);
    msg.setSourceEntity(111U);
    msg.setDestination(10872U);
    msg.setDestinationEntity(244U);
    msg.req_id = 36880U;
    msg.comm_mean = 147U;
    msg.destination.assign("LLMGRHJCTYTZIPVKUXERDEYHLHDOBQYORCNJPBQFIMMRMHUONFUNZ");
    msg.deadline = 0.462139274862;
    msg.range = 0.57540001946;
    msg.data_mode = 152U;
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 203U;
    tmp_msg_0.list.assign("YPHXOPSUQLJQNKFBMKRTVZYBIZFXKVDNFYDUVVQHQREDOCGSNTRUNDLXAJYXTUZCFVCWWLQESKVBJTIHZB");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ADZMPJKMRNRFXGPBFCBLMDPYFXNKCZXLKAAOCDPZYCEOXLWEQNPORR");
    const char tmp_msg_1[] = {-34, 37, 83, 84, 106, 91, 12, -49, -126, -36, 24, 59, 102, -106, -118, -33, -3, -90, -125, -118, -57, 33, 22, 62, -37, -52, 42, -36, -22, -100, 10, -4, 100, 122, -95, 99, -43, -46, 122, 63, 1, 94, -31, 60, -80, -73, 119, 34, 97, -3, 115, 31, 34, -66, 43, -35, 117, -51, -81, 56, -15, -74, 76, 4, -7, 96, 45, -68, -19, -42, 81, -56, -76, -41, -118, 97, -27, -89, 57, 78, 51, -3, -55, -121, -27, 35, 85, -116};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.466215419778);
    msg.setSource(53436U);
    msg.setSourceEntity(223U);
    msg.setDestination(34558U);
    msg.setDestinationEntity(92U);
    msg.req_id = 31624U;
    msg.status = 32U;
    msg.range = 0.52773336769;
    msg.info.assign("PZRSZQFQKRKGIWTTURVNVLQWJBPMODAOCNWHODPAIYXAOOVCIFEHKKWLTUACFTHLPILRCRLEPJQJPZQLWCQHYNKUWMABHUFSJMKABVZCQDNVPCZNAMYUOJBOAFNFEWBMECWMZGYNHNIATEDLSTQDYXTXTQSMHGXXNRYIJODZMUGEFGVBXETGWUGRVBPUOSGDCNZBLDBBPUIAEKQYIZXSKJJSUKEPIXFIMYCHSHJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.191873656701);
    msg.setSource(58638U);
    msg.setSourceEntity(174U);
    msg.setDestination(61889U);
    msg.setDestinationEntity(123U);
    msg.req_id = 23298U;
    msg.status = 199U;
    msg.range = 0.601215633623;
    msg.info.assign("ABVAOOLALDEXFEHBVDVZOZHRHRCAIEDFTDRUNKACBZOXSQDRNCQPCWIUFZZXATJTRVKKWEJBYHPWFTOHNQUIFGSPVGJAFXRYISYISJCPBTAQRMFZQCHODGGMHJNVJSIXGQWLHVZILPYJQBMPTRMNPGOFIGUVSGSKTBHMF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.76371510346);
    msg.setSource(27758U);
    msg.setSourceEntity(154U);
    msg.setDestination(40280U);
    msg.setDestinationEntity(231U);
    msg.req_id = 9381U;
    msg.status = 89U;
    msg.range = 0.0251989921998;
    msg.info.assign("FVUJABAFIHN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.407207246536);
    msg.setSource(2660U);
    msg.setSourceEntity(253U);
    msg.setDestination(8518U);
    msg.setDestinationEntity(134U);
    msg.req_id = 760U;
    msg.destination.assign("MIPTYSKGNVKCBPRKIERJJHJYZTZSDTXDLLHWOPWOXIMMHGGOMVIABASQUXAYGRBYDDLRFHHZKUEAXQEWVMLCEVCKCXLFEWBGCQRXPRIBHEUNDBHCBQKJXZUSRMJNFWXZCTMPSFGRHFAQTUUMOVTLTVZBZDWAMBGXFQQKGGSPRZNICEHGKFLILAYQAOAJOOJVZQDBUCNUKVFYXSWQUNPSKAFWZHYNLICN");
    msg.timeout = 0.877872086668;
    msg.sms_text.assign("FYTHQHJJJPZEVWEZLRRJPNFDFQDUYVKMNZRWYSLUTOUAHONTXTYRQLVVXMU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.186993141466);
    msg.setSource(32265U);
    msg.setSourceEntity(239U);
    msg.setDestination(49066U);
    msg.setDestinationEntity(148U);
    msg.req_id = 5845U;
    msg.destination.assign("ZDZGQMJANZEJOVAKTVQNOZCKJEDBRCGTDZONPFGMLISOJBCVXYPFDHMKYPJIBTSAMVOKOVCTQSQMSNDMYUWDVWGOLHUOBWMSKBUDAUXEWQQFKVZSALEYSOPKGPXASXVFGIYWRTKTNZRYYBJXEHCFEXIIJGXKRLRHWSDZAN");
    msg.timeout = 0.516460908936;
    msg.sms_text.assign("ZJPZPBTQXHFOIIMTHYGBTPHPKUFVCYWRIVLOSVDUVTRKYGOMOJAYYATAJSXCXBKNEAJBFSEEQNUEJYFGWSQQNHGKCQYNCTMDXZQLLHWVJVZWZYXUIUBBXBPONEKWFHVLSXAKNDQRUITICYEEKFFVATKFMMBSZWEPCQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.728986655576);
    msg.setSource(45990U);
    msg.setSourceEntity(24U);
    msg.setDestination(46173U);
    msg.setDestinationEntity(252U);
    msg.req_id = 633U;
    msg.destination.assign("BWZETPISUQXORCPZMVRTHONFRCJZUZQFCKDTZPRYXYDHVDKPXMXGCSTAIQZAXOHUWSKQKQFSGQLMSFHRNNKAESUWOZVRUWIWFFAGVVJGANZUTRWELDPLBLSDEZFJQWDUVGCMXTGYPT");
    msg.timeout = 0.392360644594;
    msg.sms_text.assign("WEXLNLRUQNNCXJTHGJMQOJSPXRCYAJLEGYGDPJXSELBLETVBMBQFVRJGOOBAYWNQFCMPATLRWPKPOUDJDLLINUPVJDUYFSMKEQRUAFZFBMDZZDOPELCSGHOGKXITIUIRHGCKTYSKCEIKMQSNFCGBPZIXQKGIYIYPJSRSTTFAHLVPXIOTZBVDZZXZWAFCWAQDTVFKKAMMEYWHYRAONBVSSZOCZYHNHVUWCHNRQEJUXIHNFQB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.821175308776);
    msg.setSource(42563U);
    msg.setSourceEntity(135U);
    msg.setDestination(46992U);
    msg.setDestinationEntity(240U);
    msg.req_id = 49053U;
    msg.status = 71U;
    msg.info.assign("AUKYRJWUNQNSOVMWLNCCRLFCDTFSWFVRBJWPHPGBVQOZIEVQDXRBNQGCERYYBOMQXAUHBJHXDIWCIZYSESLPDHNKXPGLUDSXPEHKJDYDBULGUWUIBANOXARTKUZIMKSCVVKZTIGOHSMRMVCPDYJMZXRBYABSJFIEBZMHMQYINCWEXOJJFGPKDPOTGLTVOVKECCAEZWKYKUZNGTMGPNSTHEFRJTIQAFQWXLLFLMPITFSYGHTAZAUXOJHRQA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.891449160918);
    msg.setSource(23844U);
    msg.setSourceEntity(211U);
    msg.setDestination(17174U);
    msg.setDestinationEntity(103U);
    msg.req_id = 39138U;
    msg.status = 4U;
    msg.info.assign("ACWBHXIVRVGHEVZSELZJYWIGMKTHOU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.833997007035);
    msg.setSource(53491U);
    msg.setSourceEntity(226U);
    msg.setDestination(30589U);
    msg.setDestinationEntity(11U);
    msg.req_id = 38322U;
    msg.status = 227U;
    msg.info.assign("AUQFENHAOIEKVMPGSYRULIRDUFEMEAMVQLEVQCFVWIKUMGBZQALWZNYJDLXFUCPFDPFWNZHSOUTXTQEOYUWBGDKPGMBKYJHKDRNYXBYBJCBDSNYXAFCGMLIIODDBOEILJHJMEPVAYHLCADQRPSIJKCFOIRKHMXTWWZAXZXVXNFXWDSWCSBTMAOZONNUOTSPGXWWGERPVFOGYQNIJTVSAHQRKPBIQZSPRVKQTKCGNJUZTCEY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.431295750885);
    msg.setSource(9988U);
    msg.setSourceEntity(84U);
    msg.setDestination(35640U);
    msg.setDestinationEntity(160U);
    msg.state = 143U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.410526208946);
    msg.setSource(15625U);
    msg.setSourceEntity(251U);
    msg.setDestination(63709U);
    msg.setDestinationEntity(45U);
    msg.state = 223U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.209053723953);
    msg.setSource(21147U);
    msg.setSourceEntity(242U);
    msg.setDestination(24557U);
    msg.setDestinationEntity(35U);
    msg.state = 238U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.995885320298);
    msg.setSource(9266U);
    msg.setSourceEntity(48U);
    msg.setDestination(21498U);
    msg.setDestinationEntity(104U);
    msg.state = 41U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.284878135009);
    msg.setSource(14637U);
    msg.setSourceEntity(151U);
    msg.setDestination(63750U);
    msg.setDestinationEntity(205U);
    msg.state = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.388289325487);
    msg.setSource(12254U);
    msg.setSourceEntity(132U);
    msg.setDestination(9193U);
    msg.setDestinationEntity(39U);
    msg.state = 219U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.143517334929);
    msg.setSource(63201U);
    msg.setSourceEntity(232U);
    msg.setDestination(35066U);
    msg.setDestinationEntity(140U);
    msg.req_id = 5664U;
    msg.destination.assign("LQDIFQFDBFOMAQBORBEZXGLENBOCGFDVVGOAWWZMUBRYGMVTYCPPRLANAVURNKDCUSZTHJTGSIDCSRSVYUQDLKKMNFVTLNCTPUBPQXOHTG");
    msg.timeout = 0.499888163949;
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 91U;
    tmp_msg_0.actions.assign("THUHICNYHTEEKGFHVJPIVEMGOIQBZYDPBBURJRFJIIEUWEZSELTSSHKROMWMPJXFLUROGJQAMFBDKLBJIPFAGAVQMBEXYBWKTOMYAPXZGJWSCMLADFDKVORSYQBRCHJUHMPPLWAYADJUQSTXTICGDGCYBVUGQARXFWNKEYWXXXTCNDRWLZKZTSVUHVNFLVKAZLINMDPDTBPEQVKQSOUYKINNZIFWLFGQHHOECYJZORODXSOWVUPG");
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.0949876325797);
    msg.setSource(33976U);
    msg.setSourceEntity(222U);
    msg.setDestination(40871U);
    msg.setDestinationEntity(196U);
    msg.req_id = 35163U;
    msg.destination.assign("NUQTFRAARDPJRRDNLQEPFSJHUEVGICOX");
    msg.timeout = 0.366143290669;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 110U;
    tmp_msg_0.lon_gain = 0.118090930496;
    tmp_msg_0.lat_gain = 0.531471649645;
    tmp_msg_0.bond_thick = 0.324529472151;
    tmp_msg_0.lead_gain = 0.998361140194;
    tmp_msg_0.deconfl_gain = 0.897445073532;
    tmp_msg_0.accel_switch_gain = 0.0222100150803;
    tmp_msg_0.safe_dist = 0.149231362414;
    tmp_msg_0.deconflict_offset = 0.0023974064452;
    tmp_msg_0.accel_safe_margin = 0.946241546349;
    tmp_msg_0.accel_lim_x = 0.749263177353;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.00198318012932);
    msg.setSource(56624U);
    msg.setSourceEntity(203U);
    msg.setDestination(9486U);
    msg.setDestinationEntity(66U);
    msg.req_id = 38561U;
    msg.destination.assign("UJGJBEOJAZXYPUBBXPCFDQJQVWEIGPOODQQENDHRMSMLZPHEXZIGRXMYKYKZMHDRLBEDSACBXQCF");
    msg.timeout = 0.424163916033;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 12291U;
    tmp_msg_0.duration = 39774U;
    tmp_msg_0.speed = 0.580758857072;
    tmp_msg_0.speed_units = 170U;
    tmp_msg_0.x = 0.315564360616;
    tmp_msg_0.y = 0.101562264141;
    tmp_msg_0.z = 0.0195328152177;
    tmp_msg_0.z_units = 61U;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.418783932781);
    msg.setSource(39373U);
    msg.setSourceEntity(53U);
    msg.setDestination(25806U);
    msg.setDestinationEntity(104U);
    msg.req_id = 54489U;
    msg.status = 40U;
    msg.info.assign("EZIANXIERINZFQKOMHYSWTYXDQBOKXVGYBJNPODSONJOHUKTAQXWGWKUPTPIFDPGBRWSMJRHUDPVTASFAOEMOIXJDJLDUAVJQJYZUFTGCEROSFX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.272224070406);
    msg.setSource(35194U);
    msg.setSourceEntity(254U);
    msg.setDestination(10768U);
    msg.setDestinationEntity(9U);
    msg.req_id = 41088U;
    msg.status = 9U;
    msg.info.assign("PNOXURSTAXZTQXEOGMVXCAWUJUSQMXWCGFVDHYAUSJYIZBMVOJGINKBYGC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.435187611714);
    msg.setSource(7428U);
    msg.setSourceEntity(73U);
    msg.setDestination(51503U);
    msg.setDestinationEntity(119U);
    msg.req_id = 16393U;
    msg.status = 216U;
    msg.info.assign("ZEEUMXIBTFVJLBXPESMYUHAYLTENEDPQPQSSPOLJFHBDRDCOGORLBWUFVPXAMCRPACU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.901703165229);
    msg.setSource(37791U);
    msg.setSourceEntity(16U);
    msg.setDestination(25865U);
    msg.setDestinationEntity(217U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.475772101837);
    msg.setSource(50363U);
    msg.setSourceEntity(25U);
    msg.setDestination(30522U);
    msg.setDestinationEntity(247U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.968954851079);
    msg.setSource(16837U);
    msg.setSourceEntity(215U);
    msg.setDestination(23034U);
    msg.setDestinationEntity(79U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.277868576451);
    msg.setSource(6195U);
    msg.setSourceEntity(91U);
    msg.setDestination(13308U);
    msg.setDestinationEntity(186U);
    msg.plan_id.assign("ZXVNEEIPHJKFNHZQRMFXXLOSJGULMWHHSPHROVKYRKDKTWOCWDOMPACAWHTGZWWSMYJSABWPBSNXIKJDOEDDHKRRRBQCFYDJGZUHVIPKNRXAEYXNEVXJCLBZMBOKFQTLUVITPBWTFIGMMICEIBGFZKNEYQVFP");
    msg.description.assign("EHFXNCWNNFECFAPGUKEBVKZLKZDBGINTRUPRISJRBTKBQUHHGUWMEKIZFCWWNASMOECDTWXKCYMBJTTADNUWVLTXJJVHFFMCMWLYVQUOXJXNODULQQIOJAYBHFPYRRPSQBOZJSXJRJXAWWHSPXEYXDSZTGRIIFRLSLOEDSLIWPVUSHKALMKLKMTNAJGMZYZPQVRUYS");
    msg.vnamespace.assign("SPVHWKRPGSXJLAIPWBWBJONVRKXOIBCAFMVTDQEGCSPVPC");
    msg.start_man_id.assign("FRBZJNEXZHVEPDZTTWSXYQKRSZVYJBTSRGKAGENLHIKGUFQINSKLTMPAKEDCRGRJDIXXWSEFAUHRDSPDWXENJAGIIDFBOPEOYYPFKNJNURIYHOVHMHXSIDRNUOQDTWVMUMFZBYNLNSLBMUHCQBAUFTZCMKANWXAGOTLCYMECALLYH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.589330715708);
    msg.setSource(43376U);
    msg.setSourceEntity(6U);
    msg.setDestination(32437U);
    msg.setDestinationEntity(77U);
    msg.plan_id.assign("TUPVIJIDOOXUNAXTLGYOUSLQNOHRYHGMVAPAWTPKECDVQBNUUPIHWUWAMQACEGCTWRXJDCXTRHKCEZQEIZETLJNJFBZAZDSCPENFOSHFNOJSXZUAXTOJKTYAUVGMMKNKXWUBHQIVOJBCVEDAHQKUWGLWSLVESKBLFIHPKNFNPJGRFVLXMTRSTFYVOOMZEPCWZRRJYIYABIJMQMDMHZFNZBFBPCLLBIGPGYSVXXRDEGRDBWWLSIYYCDQFMRSHZK");
    msg.description.assign("MHYZDLGUFIWAHFMPSSQUTJKGWKBQDNGGXEMWXLLYMDQYAEMCDJHMRITZBFURWBJZCVYDQCOLNMIAVGTBKNRRXUWSQIZBPUYPXEHVJL");
    msg.vnamespace.assign("RRZMRYBDVHMQHNXYQPCDUSYGGMTRVSOBBCXJMRTALWBYVLKYBCFOVIOLKZFMTPAJXECHUHYSDDFTOWELDQHUTVYLWIHNYJTLZPKXPNNKEOATTZJUZUNJFPEVZXEZGARDKEVAHFKWUJKXIGRINPWACCEKIOPAPBWED");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GJYJTDIJRAHLMMECFCLNNSDRMFQEAUWXQIKOGPDMPYUTCHUVXVYMYHDNIBFEXDPBRPYMCPMWNWHAZXFZZAKHRCWPUXULFPBTYATTJTN");
    tmp_msg_0.value.assign("YSJSZXNTGVPRLNYCGWRXTQQQICPTHIYYOZNYUZDAMKHLZAS");
    tmp_msg_0.type = 10U;
    tmp_msg_0.access = 254U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JHQRHDTFJIPKFWDRTGWEDEVTEWMTMQIIFEPEUPUYXGBIUCXICZGKYWIQQELOYLDAAVGAWZAXRGBPNESECCDSXBMIOJNAQYMRYVXILHRWWFDQXSOMCMZYOBZPGNDBBQLMZAATSRXJHJQZUSEFNWXAPOSHHMKSFYDZJKNITJMNKYRLUMFUHZTCYRHKSUSSQPJHFFNVKRNOWCGWOANCYDULKETDVBVHJKBGGONLVLCPQRLOTAP");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("HXFYCAQGVHDDXBWATKKGYUODLQYVETQWTNYNXVDJTWGHBBKOIUBBQHAGJKUZTJKLBZEMCHXWDPIZOJMCIIVLHFNSQPUTOPNENCPUPWSWJCRPVYSOFNXIRYXIESWTJRLGEDAUAUDKXYZAPERPV");
    tmp_msg_1.dest_man.assign("LEBURMRGFQKUHVXTSXUJMLXZOCDTOGQHBIKLHESSIRTIUDJGUQUPNIDNJYHGVWBWYCRBTPRUMYCATERVJNEGHCTMYPPYNVKPWZJXTLOIYXCKWMQMYDFXXEBSMPQBAPAOZXTNTJZMSJPQOZAAMFPTEOGWVOSFJVNGHDNANIW");
    tmp_msg_1.conditions.assign("AMHUTGTSBUDHVRIVYYKTYULVOPKFIGFBXPCREXSDWYFFBYTJVYRMRMIMNQOJNSXEFFLZSCCINJFUOZMWQDUGQXKIJCZSOUJKOQQFKAUUEGZQZDGIIWAHFQOULA");
    msg.transitions.push_back(tmp_msg_1);
    IMC::AnnounceService tmp_msg_2;
    tmp_msg_2.service.assign("CXLJDBZIMCPIYUDKTAHONTIANIXSHOODGFANOWPUSDXZPEXVUXKXGLXHVQWVONJABFRASWVGVKTSBQEPECZMUQFFYCSOUEAUAQVDKIERFGWTVAWPCPQUHTTAREIOHFPHIFJCYRZGMOSINBDCZUGYDBRSRRZGBJVZSEKYKTXJNHFNAYDYWJSLELLJIOCTKKYVGMKCGYNTHPMHQEMLFLMQNLMWMVP");
    tmp_msg_2.service_type = 19U;
    msg.start_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.666685112956);
    msg.setSource(21279U);
    msg.setSourceEntity(38U);
    msg.setDestination(20277U);
    msg.setDestinationEntity(28U);
    msg.plan_id.assign("JVBIKHJJGSXOJXE");
    msg.description.assign("TBZLPGENOWRXLYEBMQJPJOQVFDOVOLOJHUUCNQEFPGVMCHIQMCXLTRFDVATGMLDMZTJPNGWXGYWWGPXAXKNUQTN");
    msg.vnamespace.assign("TBGRJYBAZCLAJSBVXBGJZDDXWOSSUZAYIACMXYYGQKZHSMVVBJIIWSHNEYLAVKQNSZQJJKEIMEDKOBSSKRYSHNWCJGKNZNLVFUXFILJFHDGUNGUDRBONXKADKQWXOVWHTZWBGLHJPCPQIMMMUOBQTLEZIEPFRTAAUWOMWUOXQGXFRDRQNSYDPITHLEPOPHINYFV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TNMEZKOSXJWAHRRAGHOTIUALKEQHVLNXNFXGBPOPVIEHDLWEKXUPWSZATLEXGOAYMYXSKFKTBMKUSFQHPVZ");
    tmp_msg_0.value.assign("LOXDIEXUSJZFNTGSIABNODIMBEPJHYUTPDAXWMRMJROBQKVMBTQIWZFCEOMGNAVPESOZFYYLJNWKVIRLFDKH");
    tmp_msg_0.type = 116U;
    tmp_msg_0.access = 43U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("XFCAWIWYRKGAXMMYRWHRSSWVGMOSHCCBCUNHMYJWZVCFMPQPRIDTPNXAJKWLBASZYHDZGTL");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("KDNXXWBOEYMFCKHBNILJOCPRCYGGAJFVZQRBSZFSOTTKSTNLRPNTAKVIVFHOJUFNIZFICMYEWAVIVCNHAKYRBISYJVWEMBWDPZQAPNZUDAHCVZLRTAQTRMMRTDGHXPUWSCNKQLUMZCUDKPKGBVM");
    IMC::Teleoperation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.custom.assign("LPHQCSAMNORNXRBHLCCULUTPOBXLWNHSMZEFJADOLVQQ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::FollowTrajectory tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.timeout = 65377U;
    tmp_tmp_msg_1_1.lat = 0.588012037388;
    tmp_tmp_msg_1_1.lon = 0.727691145189;
    tmp_tmp_msg_1_1.z = 0.679750526321;
    tmp_tmp_msg_1_1.z_units = 140U;
    tmp_tmp_msg_1_1.speed = 0.907700884684;
    tmp_tmp_msg_1_1.speed_units = 137U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.x = 0.393286780188;
    tmp_tmp_tmp_msg_1_1_0.y = 0.927038267997;
    tmp_tmp_tmp_msg_1_1_0.z = 0.429698670503;
    tmp_tmp_tmp_msg_1_1_0.t = 0.798030204152;
    tmp_tmp_msg_1_1.points.push_back(tmp_tmp_tmp_msg_1_1_0);
    tmp_tmp_msg_1_1.custom.assign("WYEHTHWFBCOKOBIEIRSGCVGZCEZJLDXNIHXCDAFJMRKINUOOLZRYWPISGUJADVKPWQVEFUMAQQSLKYHLQPPUXXPBZLAZYDAZHPVPSCYQRMPUGAPLWKORJGGBKRVVMSKCUJMQOLMWXTWIVDFKJJJIWYMEDKYMPLWVZNOXEVCSABQFNNHSTNJBNRNJFMXBMSHTESGBHDQYUIIDXVH");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("OEQLSVZORLWSJRHWNRTJEMYKJFGPAGFTZEGHRCOIGJZLSOVWINMPVGNYIQEKNJRLAKQCQMAUYCKXCXNPELEOPWMBS");
    tmp_msg_2.dest_man.assign("CJJCXDYZBISWCMAYRAHTLISWEUJRDAZBBCKWKDNZWUIGJTCESPTAQUHRKXHONZSSTJHVZUYTYIVSEMDIQBREWJOLLLOPQCFVULXWNTMHSGXEQWFEZLVGQPPNGRWMGZUYHIAVJMGOGTHYSLRMXYIUBOGQZTQDNBFLVDPXXQFNFBBZFESFODJUEKNBIVYASFWAKKDJNFKOGDOEUDWVKHIHMOMMXNPRTALPRIHFJMLYBUNQTRYOCACPAPZ");
    tmp_msg_2.conditions.assign("VXZIERLCCPTEJHKFLTILRUNYKJPQMPNBMQVLYOBOJIKHFJWWAYZYFZVVNCQWIDHUXNAMCSVCGECIFIRTERHJMGZAOSZLZEWEPKUDENAJDBCIAKFDFDDMVMWQUOLTBXNUXQCEJRWDPSVUHUHSAXKEPZYZYDTKGJYDIBIQJXYEZSBANGASMMFYOXTKWPLYHJFCHBXROOWHVDSBGMTRWHUGPRCAATGLOR");
    IMC::VtolState tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.state = 12U;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::UamRxRange tmp_msg_3;
    tmp_msg_3.seq = 59192U;
    tmp_msg_3.sys.assign("RJLHYAUNDRIPTYWSVHIFDEJXQCARPECHSGXDBMWVKZJMFZJXDCVDHBTDPIDGUIZNOJTOKVIXGLZBKUSPWACAOIVNWZGEWUREFVKNMIQSTSCMHEAGFMRAUBFLPYMCLQOE");
    tmp_msg_3.value = 0.21041516957;
    msg.start_actions.push_back(tmp_msg_3);
    IMC::FineOil tmp_msg_4;
    tmp_msg_4.value = 0.747888057087;
    msg.end_actions.push_back(tmp_msg_4);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.236798492342);
    msg.setSource(47793U);
    msg.setSourceEntity(62U);
    msg.setDestination(43747U);
    msg.setDestinationEntity(47U);
    msg.maneuver_id.assign("SXEJLNTYFAQVQJSCOBUOHWHNZXTAFJYSZSDCPAMZKENVVTFLQQTQZGGMHDSEIWWZCBCZDYANVMIRIPYETNOUGGXMUVBLNOKHRPSDKHLOAEYHLIXYFBRDUQFJWWPLUBXXLVUMPKMEQAXNQJVBNSIGGGKCCROHZWGUAUIPJKNXLEFMYYJZYOMBI");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 55564U;
    tmp_msg_0.lat = 0.659349681768;
    tmp_msg_0.lon = 0.690031145598;
    tmp_msg_0.z = 0.416143198115;
    tmp_msg_0.z_units = 242U;
    tmp_msg_0.speed = 0.24671543875;
    tmp_msg_0.speed_units = 7U;
    tmp_msg_0.bearing = 0.356362392849;
    tmp_msg_0.cross_angle = 0.642451875926;
    tmp_msg_0.width = 0.927600605393;
    tmp_msg_0.length = 0.20348325164;
    tmp_msg_0.hstep = 0.747361448286;
    tmp_msg_0.coff = 120U;
    tmp_msg_0.alternation = 151U;
    tmp_msg_0.flags = 230U;
    tmp_msg_0.custom.assign("VPARYQCXEWOVPICYZLQMQOXYQQAGIPLRBESDSDKCXGPZUWNPJHRLMYJIRNGJWDZSOBTZNXTDVN");
    msg.data.set(tmp_msg_0);
    IMC::AisStaticInfo tmp_msg_1;
    tmp_msg_1.id.assign("BEHXXTUAYKYJEDWWDXCUKOTAZBWMQVDVUSKJRDPGNLWKPVXYDKAXYPXAUYQSRUKMIOMECZESHNMXRZPUAGDSICNQECIUJQZNKFNCTFBIEMEANZJTLPVMIVBUIRQLVFMCHMVAKDBBGMBNAKESU");
    tmp_msg_1.callsign.assign("NUDEVPBLTTAGFRMZXMIXYOSKXHQRZFZTHVYPWTOCDSIRWJUKWRFVROKITYTCWAMTBXQIGKQTFCNVZJACEXMHCALF");
    tmp_msg_1.name.assign("RMROHURUZLIEYKZIKVTVWUZMFZWXJBDDXUJTOIPYHKBQGRPWVDENIDEACILBTUJHAJSRFDONMAVDBOMNPQXUQBOWVGKSUMG");
    tmp_msg_1.type_and_cargo = 70U;
    tmp_msg_1.a = 0.563336815075;
    tmp_msg_1.b = 0.421889067746;
    tmp_msg_1.c = 0.0833248719894;
    tmp_msg_1.d = 0.751457046056;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.688406059895);
    msg.setSource(42933U);
    msg.setSourceEntity(221U);
    msg.setDestination(60908U);
    msg.setDestinationEntity(148U);
    msg.maneuver_id.assign("MDBFHPJYYUDPZDAEAZKPRAFCTNTVNGMUTPCTKVLMMMSFHDDVYTWOUNQPSBGNGXVXUOSQCPIKXWSYBWXTWKEGHHIEVZLNXWOHUJBZIQWQUGQAXDNEJDAIPFOLWWQPSYJRNIXEJNQGLOFIKZZBEHBAZLKHA");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.111991101364;
    tmp_msg_0.lon = 0.769564214402;
    tmp_msg_0.z = 0.961952037712;
    tmp_msg_0.z_units = 216U;
    tmp_msg_0.speed = 0.267074115525;
    tmp_msg_0.speed_units = 76U;
    tmp_msg_0.takeoff_pitch = 0.579076772433;
    tmp_msg_0.custom.assign("NFHAMKYNVOHCSIVOHUWXDWELWRJHDJUDQTCILKLQTWSLLCBCVPONWSDHESHREDPBKQNCWQSFTIJHPJMDIXOZPLIFUMERTOMGMBNHFSXAVJYAVQUXBVFRFWTQBNUJGGNIES");
    msg.data.set(tmp_msg_0);
    IMC::VehicleMedium tmp_msg_1;
    tmp_msg_1.medium = 65U;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.402993719204);
    msg.setSource(19253U);
    msg.setSourceEntity(11U);
    msg.setDestination(55875U);
    msg.setDestinationEntity(155U);
    msg.maneuver_id.assign("VAIYALYYFLDIZZHZFGMBXQGTGHPBQSZWYKWEPMOUXLRRBTVQRPSVQILHYFVDTWHFJLMFWPCGUHOBOYUWYZJJPBVDWPLDXEGGXGRQGKFELDTSRKQQDLEVOJHLDRUKOSCWJCATINEEZFKAASOOJAQZEXTDTMIMTIAEUTMRBRDPIXINZSLYCCJJBGYWAUZKJQXNKUBKHTCVUCMVJNNPUAFGXCCXIN");
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.0737080145907;
    tmp_msg_0.lon = 0.356617331514;
    tmp_msg_0.z = 0.153957228674;
    tmp_msg_0.z_units = 164U;
    tmp_msg_0.speed = 0.150791079112;
    tmp_msg_0.speed_units = 123U;
    tmp_msg_0.bearing = 0.875137676781;
    tmp_msg_0.cross_angle = 0.166421657025;
    tmp_msg_0.width = 0.753169489003;
    tmp_msg_0.length = 0.473745786511;
    tmp_msg_0.coff = 130U;
    tmp_msg_0.angaperture = 0.362489970553;
    tmp_msg_0.range = 3477U;
    tmp_msg_0.overlap = 65U;
    tmp_msg_0.flags = 12U;
    tmp_msg_0.custom.assign("OLBYBRVGHPHXZWNOYLNHEEWEGFWXPIFXGVHINBWATJXECTZIIPOLBQUXMICDBYPRAXBVSFKPDSVNSTJQPKVIMGUSUMCAJWIFTSONBSAHXZLYDDNAOAJGOZYFHETTIJYPTZQIUJZMELRTFVDUD");
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.754360161171);
    msg.setSource(268U);
    msg.setSourceEntity(1U);
    msg.setDestination(13744U);
    msg.setDestinationEntity(101U);
    msg.source_man.assign("TFAUBEPWUSWTMOAPITXPQTIDYMRWXZHERMQNAFJLXHCYWBIUJRZDYDHNPOJZQEERCSJXLKEOBQGOFZVGSUATPBIVUCVDDHANJKSLMFHBDRIAYKHOBPPESNMQLJXLISQJOKXWCGKRYJLNSGGWDCQCKWABMLOMBYBFHMFGGWHKQXPOVY");
    msg.dest_man.assign("YSJGMLBXEWUISWEDZYGINFVUMYT");
    msg.conditions.assign("XOIYJGDZFFCLLDJKUNMRWFODSXCRWBVBXGTWJHSQGBHRKPJGIVCFIGQOULMFYNFOAOYROBZGXPOTJUQFAMMJBCCVPATAKBPYKXUEMLLQEVEINDVDCPKUASUAUHTQMXENHRHKSCRZMTZJJCPYWNFHVHNISEWUVDHAQJUZTOSIBTKLFXKHJSSNQYLCLIGLAWWZBHXXNQUWVPGDNMPQKM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.581445012276);
    msg.setSource(22756U);
    msg.setSourceEntity(217U);
    msg.setDestination(7064U);
    msg.setDestinationEntity(220U);
    msg.source_man.assign("DAJIBTXOFGKBUZYTUYOOXGGDDXYLQLHPJKFUDLRNHAXJNEWPPVRAQSIMKMIKJTFJPVFJHVBGMUASPWKGEZPBJVZDKTZGGDNFMNSJCESHBAEMSY");
    msg.dest_man.assign("MENLNAFWGSIYEEOACHEGGCKKXMXGAREIUKZRNQVFSAHDCRCTQUPDBURCBILTAWGDPXBWXDSZUJAJDRCZETSMERTQQTCVHWVHWOAYSLBILZNROZLJJLSLLIUMTESMXRZBUQYRTDJJHQJYIISMBNTGOEFADEQXCPDNKYSPIBPHFYNHPFLNAKDGWVUBBZZFCXVMHQKPPINCGGOLOVODUFJZ");
    msg.conditions.assign("UISJQOWBDHFCUSZPYYYWMOUVJQZBIWPRJZBKSTIQRRAPMZTVZLBVCTQPIPQTPYIWDUGTLUYDUIDMHMRFNIEBBCOQYZKBZKNIEKXCJHNSADTFEWXVCNZRGKCLMJBXGPCOVHXMWFRFFRJDLEULFGFVSYDHNQEORKXKMNSKLB");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.179240466636;
    tmp_msg_0.lon = 0.931806721745;
    tmp_msg_0.z = 0.122485759069;
    tmp_msg_0.z_units = 187U;
    tmp_msg_0.radius = 0.753335952572;
    tmp_msg_0.duration = 48492U;
    tmp_msg_0.speed = 0.287871793923;
    tmp_msg_0.speed_units = 136U;
    tmp_msg_0.popup_period = 34446U;
    tmp_msg_0.popup_duration = 53202U;
    tmp_msg_0.flags = 140U;
    tmp_msg_0.custom.assign("UKLPDMXBZOPMKEBSCIDVVOPLHBRXRFSNXZHMMYHJTGWYKUHIRLIOGPQALNJADFEFJDAKZBGLKIPQQZPDWPMURNJFFEQNJATCCGQICUTIKBROZYSLJWZCTMSVLSWFZTVJLSYFJCHXNEQTHUQARSWNVZHMOMDLMJKEQSWEOORQBIEXOIWNERG");
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.64079382064);
    msg.setSource(2742U);
    msg.setSourceEntity(71U);
    msg.setDestination(40510U);
    msg.setDestinationEntity(13U);
    msg.source_man.assign("MLTTIBURROORLSFJCYHKZ");
    msg.dest_man.assign("QOMGSGZPEYFDPEKOKNJTREWDQGRNGQTETZSEHCISNWBJKTCGLJYOIMXHBWCQUJPMFBYTAUJRGESQIBSXNDRTCETVUTPIZGGFXXTHXTBMZKJEODAOYDBVAZNILVZJUQSRVWBURMHDAAOKWLCOYYZQ");
    msg.conditions.assign("ANGGHELGRRGSEXVKMEOFWAZGBJBAR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.415305080543);
    msg.setSource(62998U);
    msg.setSourceEntity(103U);
    msg.setDestination(15700U);
    msg.setDestinationEntity(206U);
    msg.command = 249U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MBAODTBMPKBLHSPWRQZMXBIGXDIVVSAVGPYBYIFAAWYUECZLTHRVHZXESOYCNIAIRENDKSKNCHKFEXZPGALREDQPJMBVWDUVUJEFHVNOCTSPDLZELCTEUBKQTPNSYWYXXEHZHNXHGFCQRWNXIOQZYOFQRHLTEKVMOCPJTSDIQXLUMOMUKDFRLGTSWOFJNPQAKSTYAZRRMBQDGBYKMGORUGTYJWWOVWGJZFALDJJGPFMLAVHFJJ");
    tmp_msg_0.description.assign("SRYGKMOUEXQTVIKGACRQLFUBRHWBMDJCNNEZVFLFCWBWKSDFLLCCLOQSROSGTVPDPRUZPNGMSECNLBSOECXHQEVONODWFXWRHMTLKYCBIZTXXGUDSJPZJYJEPIUIRFLTYRAMXFABKYTAKAXIHVWSYAYVXZUFXHTUUMJPKPPQEMVIONISKTZQIQGR");
    tmp_msg_0.vnamespace.assign("PGCGFLHVNKHJNDVJZDAEMKCDEQNDMSYOHJUIKBYOPSXYQLTUMOBINLXVUCAAPXDBSBTTINAJLIOONOVRFJLWHTCRRRLORWFGWTVNXPTSIAWWLPJGYGCFQFZZEXIHDQDVYHMZMTKYSEMMNGQVTCTFWSBYLQNNXWDKHMWBRFUZYJQFOKBEEVSCWGYQPJSUSZRP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KTMKKMPMAVYRXNVIAYLBJSCBIDIHOSUSLCURYUWQAKRQPEUWAAMVTDZDU");
    tmp_tmp_msg_0_0.value.assign("VFZEAAOYKGCSSJNEHRYGLVWFWGPYKHFRKURTGMPZLABYJTUIVKNDZWSTFZVXNPLXBYOXDBVIOJRPVKQNWPDGNJSWIZCCSLWQNVSAEXAQMFOTRMODDIUSSZXCUPAUTPVLEBQBHEGICFNICVLVQMXY");
    tmp_tmp_msg_0_0.type = 184U;
    tmp_tmp_msg_0_0.access = 51U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("QDPHREPKQQDPEQIDTCRMKAMVEFGYPFMRFBADTNWPQONKCDFNFDCJZPUOWSCHSKZBVZGEGLIQSHWYSEVNZUWRKLUSNGJLJNCKJNTGFUYLXTHAOCXVMBIEVBWFOGYIZEOXHEKIRSTLMKJFGBUHOXXJ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ZBPUCIJYTBVKGQAEPJDHKWWJCJFWBFSIOODLVSLMJPWANQESSLLIDWEIYNOGKDCJCZBDVGKZKLXEFOIAMP");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_1_0;
    IMC::DesiredRoll tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.value = 0.195053178212;
    tmp_tmp_tmp_msg_0_1_0.control.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.duration = 26050U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("MLITHFKQGDFYBPGRREUINXHGYPOGICVGAL");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::MessagePart tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.uid = 53U;
    tmp_tmp_tmp_msg_0_1_1.frag_number = 112U;
    tmp_tmp_tmp_msg_0_1_1.num_frags = 53U;
    const char tmp_tmp_tmp_tmp_msg_0_1_1_0[] = {0, -3, 7, 118, -80, 34, -77, -47, 25, 13, -67, -34, 25, 12, 71, 112, 95, 52, -36, -5, 57, -11, 21, 88, 19, -36, 81, 89, -81, 95, -64, -68, -80, 52, -118, 73, -128, 115, 50, 48, -36, -103, 83, 9, -24, 88, -102, -122};
    tmp_tmp_tmp_msg_0_1_1.data.assign(tmp_tmp_tmp_tmp_msg_0_1_1_0, tmp_tmp_tmp_tmp_msg_0_1_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_1_0));
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("OBCCBNBTRHQUZDHXMXEKEAMUTMZMZIJEMXULYVQODZHRWIRXNYZEEFWSWGNQGOGACELFZGVHVOHYZPBQMYOEOKFURFKYCEIFTPOPTRLYASJXFBTALFINBCJPKHSLUCGCZKBANJAGHDBAWHJUXJCWHWCLPRDLEIDNFMQUNVKKPUVGAXIDYSXLYYOOIDWLSJRIWGQQGQSXWPRIQEFVSTIYSVPLPBNH");
    tmp_tmp_msg_0_2.dest_man.assign("RUJOGXCRMILYOAAYHRWHIBUMTOFQEGGAQNJDOBJWHUNRDCSADBEEKTCMAAWFXZLICPAPLCZXMIPSWZOCROJPQPLBKGUJXOBKNQVMAPIXHNWPIWDVNVTDHEEKMJYZXGSDNTTBZGHEBVKJFUZODTTEFLUYGYNPUGJRSAMWEZSSWFBMHXCLNQHDQIMTUOYERSYVZJFFVWXSINVWTXYEZOLCUVIPSRKIHGDYPVQFRMFBKURXQ");
    tmp_tmp_msg_0_2.conditions.assign("VOCFVLNDSONKAHOGHJEUTHJAYXRQDNGXRXVDXJMSBFMMTOUPTGQAGGYPWVPEZVZCWOVJDWYWDIQSEHQBNEQUCJMNYCYKRFRBTZNRNCACTLUVZIGZJQICDKXFYLYLOASFNPTKQRSRPUWCHWFZMCLTVUNKEHBSSDFGIOXBSQTLKJEPHQMYHGBVIHHPCAEBPRJKMGIEQZXXLJFSLTBKIYZFBVOMALZP");
    IMC::DevCalibrationControl tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.op = 89U;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::SmsStatus tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.req_id = 10774U;
    tmp_tmp_msg_0_3.status = 15U;
    tmp_tmp_msg_0_3.info.assign("QHACVGFQEQALPRJCIMBOHYUUHNNFDYXSSAQIIPVQTLSOUDRKSGIVHKVRXZIKNHTRVCTTWXXCTPAXYJILMTDZUUNLMRHQKPEDNZYUOOEMZRPEGFAXVYF");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.170074919224);
    msg.setSource(58301U);
    msg.setSourceEntity(219U);
    msg.setDestination(5933U);
    msg.setDestinationEntity(42U);
    msg.command = 98U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MWMYSYGJQLCKTLQTTA");
    tmp_msg_0.description.assign("WWHYMTGNKYSTQATFUKLORJYQJBBTXPDWQEESYXZKCKMXWOROMHOYTGIKVAEMZFIZVRZTRUEZSTCFBDUGJMNNHECLAYODFAGVYWWSKQHHDBUHJNMXSXQQBRXVXLPPRJFFLLPKFKFBDVAUPECBSMHLMDNPIXTGZAJDOPBSTERTXQGRNLMIOIOCJBNWVQSEZES");
    tmp_msg_0.vnamespace.assign("GSMDGJHPFAZEMFMSCNMCVRTETVAXGLQYBFAUWWNNBTXNHRQIKNDXYQBVAQCXKRECEUKJSMVCAIYOBIQCLZQCSUMSIKJOJEOFQBWONUHAOOYPXPVTDZGJWBCFHKNRCHLPEOFULFPDDYUETKVSOVFDWIBVAKTLIPDGBPDHIQAMRHWTRKQYNWNTTJUVGOVOHPHUYWLGSWRLGRSLNJIMCZDK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MURYYKNVMYYKDADQLLJ");
    tmp_tmp_msg_0_0.value.assign("KSHRCUWABHNDTIZRXIFACLWPSNKJRWDCIWPQXUGFVLEBBLVWIQLRKAQJQPOEAFPCQQHODZIQMYAEAUSLGDSBUMJRVIUDGHNNIXXWSWEPGOAJSRXUJJENUDXCRBJMLIFARXMCQMPTBNXZWZTIVLNPPGQZJBKAYEBZHCLVXSZFOEZHYKEFCVVJOEKTKTMIXKOHMYUTASYYDOGYPBKCMGOGVGLPNTTFL");
    tmp_tmp_msg_0_0.type = 130U;
    tmp_tmp_msg_0_0.access = 136U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("NZTHNUQLJXFZGUCGWHGKSV");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("MRHEYDGMYUHKOXSJWLSUQZWKFIEIVKRUYRWYVGCPLUQNGT");
    IMC::Takeoff tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.902375970431;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.339160714148;
    tmp_tmp_tmp_msg_0_1_0.z = 0.738968955906;
    tmp_tmp_tmp_msg_0_1_0.z_units = 65U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.717507731805;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 4U;
    tmp_tmp_tmp_msg_0_1_0.takeoff_pitch = 0.766332112545;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("BGAYJHHGRTNEOENFAZNVJSGOIYAHTWSERDLLBLPLCNZVVHUWBVXUUDIJRSQYCRFJLOMDZVWUMRAXYZMXEUZORVQYBHZIOIOGWNQQDGOXOQZBDGEUDTPPTECA");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Abort tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("EGGDCDWGWACTVUJEPNEUSPTXAZWPVLQNWKSMHXBEHQTIBRNWQLYUJMFEXLCUFANJPXZOGHKIKSEVVAMYTHOQCVGQOHXVZCXDKMJZGYYVBWBHZNQHSWCJCHCISZRSKODYAGKLXPRRJSPLUGBMJUKF");
    tmp_tmp_msg_0_2.dest_man.assign("TNCQYPCSHNGIGZCAOQCXAPFZVKOXWWRJOYSJWNITRQWFODKUEAOVUVXFEUQE");
    tmp_tmp_msg_0_2.conditions.assign("BLUIEPURCAVSONXTSXBFWCSQJSQDLHAKLXCCRNVSQGYHUEPWQZZCIQHOBFEJTFVMEPJTOWNMLQLOIWIVGTQAGBGZCNUAKWZABOPEMTNXUEDZMMXYUDZTXLHZVSMJEKIFVHCPLPYKRTHU");
    IMC::TrexCommand tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.command = 18U;
    tmp_tmp_tmp_msg_0_2_0.goal_id.assign("SPGLWQDIDDQYLASSNJYPKRMBRG");
    tmp_tmp_tmp_msg_0_2_0.goal_xml.assign("OPNHEMZQVDHRKTJCQESVUPLICRRSL");
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::AnnounceService tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.service.assign("APIUQTWNHWIYVIAXGTOCDAVHENLOWGFZWOAOUYBCHUPC");
    tmp_tmp_msg_0_3.service_type = 36U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::SmsRx tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.source.assign("EUSRYMXANMFTMZCRMDPEQFYIKMPCRBRUVWTZYDXLCSFOTKAIJFOFKEWPMIYBIUDWQCWRKCQXSXNOFMUHUZSVYOHHSOHFRGVEBTPZOACNOKBOSVRHYSPGVTFTOBHQJUQAFPKDGZCLQELJHABGZIPEILNJERRJILZYLSWVXBNGLMTKWHHENPQC");
    const char tmp_tmp_tmp_msg_0_4_0[] = {103, -2, 83, -113, 122, 1, -117, 63, -98, -104, 25, -113, 71, 51, -89, 121, -107, 53, -115, 66, 29, 5, 71, 6, -20, 43, 33, 52, 57, -47, 88, 74, 9, 59, 89, 99, 73, -3, 114, -17, -93, -51, -96, 39, 102, 24, -48, -63, -19, 91, -17, -105, -35, -107, -54, 81, 66, -18, 31, -103, -126, -113, 100, -89, -99, 94, -107, -118, -21, 28, -91, -50, 50, 28, 30, 7, 37, -30, -124, -116, -21, 69, -30, -108, 71, 23, -50, 46, 64, 114, -125, -58, -61, 49, -11, -49, 37, -83, 81, 81, -62, -75, 59, 111, -25, -12, -90, 46, 84, -40, -75, -6, -60, -107, 107, 91, 22, -47, -119, 91, 54, 112, 122, -124, 19, -53, 23, -20, -63, -32, -37, -15, 13, -4, -14, -60, -128, -100, 61, -17, -78, -82, -116, -72, 90, 66, -61, 73, 84, -121, -99, -100, 58, 104, -111, 121, 47, 3, -112, -117, 9, -44, 28, -104, 3, -87, 65, 91, 12, -31, -83, -110, 124, -25, -16, 38, -13, -127, -110, 72, -60, -48, -123, 89, -46, -50, 84, 84, -50, 82, 114, 30, -10, 83, -75, 32, -60, 117, 14};
    tmp_tmp_msg_0_4.data.assign(tmp_tmp_tmp_msg_0_4_0, tmp_tmp_tmp_msg_0_4_0 + sizeof(tmp_tmp_tmp_msg_0_4_0));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.409636480294);
    msg.setSource(29874U);
    msg.setSourceEntity(204U);
    msg.setDestination(59738U);
    msg.setDestinationEntity(226U);
    msg.command = 85U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RFYUNQKJVTEOIIZMOXXCLQQKHNMUJEYGUKQHWZEUOEROMTBTBSTCOULMAHPCSHKARRFSAXTSZJQPIDQOJXWADIDMGEWFLAIUYXPFCKMLGRFEZQNDWJPYVYNHHWSSRQUTSLRTBSTJKHCPWLERUCANXANLHYGGBKYVEMIDUEWMDWJWVEXFFYMZFSJXFGBAIYAZNICVXDPDDVQPOTGNBYZNJGBAZKHXHOBVW");
    tmp_msg_0.description.assign("DXGPOSATERZSVXCNNHISAHUMNLPYQWBOMWIDDELVKBNBNCJMCJMILQJYWVBACTZHGQVOGKYPYKGSAEJXUCGYZUSMDTKDKABIHFKOFSLBOCUXVMZHMRUVDNXNBTVZVPDZARGLCXCTZJ");
    tmp_msg_0.vnamespace.assign("GJMBWMOFKSOWXCMXGKJLHYICRCTNPDUBVFBUGAWKIWQAHEJROFQTVAUVRTUSOXMYZAALSFHOEQHBMWKMCPHFUFWZWCYGGLEJPVV");
    tmp_msg_0.start_man_id.assign("RBMQTPEBJRSLKYGTNXGIZBLMXCSOCIG");
    IMC::PopEntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ENGHDXDKYNIRITTXTSUUPUCBYQRSVYYMLMKGTLZYEABALPYOOLLYXIZVAPJDIWBPFSTDTUODK");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.628827900138);
    msg.setSource(61829U);
    msg.setSourceEntity(64U);
    msg.setDestination(46191U);
    msg.setDestinationEntity(83U);
    msg.state = 146U;
    msg.plan_id.assign("FYLSGFZNTIJFOJZDLVQPJTBKFUCWMXHVXJTFQWUKPJLCSAMTRRSLIGWBXRCKQBNDQWQQSVQAAQKEYDMFEOPHOPLJBBVDWFNUPZDMGHDUGUZSSLGY");
    msg.comm_level = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.904068544605);
    msg.setSource(22016U);
    msg.setSourceEntity(68U);
    msg.setDestination(8260U);
    msg.setDestinationEntity(186U);
    msg.state = 143U;
    msg.plan_id.assign("WPRGZXIUMZAMVLAGPJHVWTSSMVATUBTADGVCVJQKEYWJVXCCJIMNOQZLNELGFFGNVDGOWRVYWTYXUPSCETSMYLDUNBZZSYBOOOHEMCVKDSUOOUFKHSHRKPEZJBRMSAEYAOEGCGMIBKFRRRPIHZXDDLPKKUIIICNROHAJWQALUKRTZTJGWNWIDQKLMQPFNPQPHNFYU");
    msg.comm_level = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.499647668698);
    msg.setSource(21699U);
    msg.setSourceEntity(122U);
    msg.setDestination(4496U);
    msg.setDestinationEntity(2U);
    msg.state = 87U;
    msg.plan_id.assign("DMQHXFXNPGKODRJDRTTGOYUWAKLJFWFVFUBNPENLAEGZOUFDRGQMDYELVMQIHNYBZAGWKUHVMTHKNUDQJOQIERJKACOAJPKLRLPTRVKEMXEWRVCISMPXYGXIYDUUIEXYSBZZNZNESHVZOYIFWRHCSLXIFBTOGFABHYXB");
    msg.comm_level = 3U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.702730398719);
    msg.setSource(37641U);
    msg.setSourceEntity(132U);
    msg.setDestination(51107U);
    msg.setDestinationEntity(69U);
    msg.type = 251U;
    msg.op = 132U;
    msg.request_id = 49318U;
    msg.plan_id.assign("RCIQMWLBYPSVHQJPNTGGDJQSWVTHZQWVJSDXYREULJNHAFSKMTIDUMGYMGUHRYLYWTISFFMZQWUTSOMNBAAKCAOOBCYWSHNGALVHFCYYXPBFTFGZUNILVVNLAFXDFVEMSYIZPJEMTVNECHHCSAUPUTXPGOPEFXPRBJROSXDQDILJRWDKDLVKNXPWRJYRUTCERXBJUEZGQIWAZOMPJHAFGWEKZNAEDXCUMKRKIQOZOQN");
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 25U;
    tmp_msg_0.htime = 0.0513965777969;
    tmp_msg_0.context.assign("AIPWXDRXCONFYFRTAJDRYFYLWULKCDESWKSBQMLFZZFCJYDPDMDXJEHWNNZLVTOTCFPHSZVPITHCFBOVXDGHEJGFIPQUNUXWTPIZIJHSZPVOWMNGFYIOPSNJBETRNKRZXVIH");
    tmp_msg_0.text.assign("WVQKLQDDTULZKBMYXHMEIXBKHAMLIF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FQKOLSIHVZN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.532628374186);
    msg.setSource(27822U);
    msg.setSourceEntity(97U);
    msg.setDestination(39407U);
    msg.setDestinationEntity(94U);
    msg.type = 149U;
    msg.op = 167U;
    msg.request_id = 32769U;
    msg.plan_id.assign("ZTCRCTKALVHEZNHKTVHZUWJADYWPKSXGZXVQZWCXMLEWMTKRGDFAWZNFESQLYSCEXPJDXUSIJLHTOJIACITGFRDKYPUIGEDFOONCVHFGJNVUFPBCRIFVGBRAHUZQOHTPBQXPOSBUWDPZXJIMNRLEMAFZIKCUVOIETQHUYYMPXHVBDZLBKRMGYOWUTDFGLYXBQOIMRESJVVNKHSGTWGAFMXYKAMCSQLNDQBPALJCNLKQRBNSI");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.263552080551;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LFGWLIZZSLIRRRRVECTPNVMWOHIBIWJTFDZJVYULFIGZBMXYMHOLJLMTPEYTJHBQDNNHKC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.880765476348);
    msg.setSource(46334U);
    msg.setSourceEntity(86U);
    msg.setDestination(35122U);
    msg.setDestinationEntity(68U);
    msg.type = 217U;
    msg.op = 44U;
    msg.request_id = 12248U;
    msg.plan_id.assign("RZNSCXOGYGXRCGJYFLLIW");
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("EKHBTEHJACNJZUAPUILYGQILTDSMPPPBFDQRRXIUTVWTDWHRGIJTLSGGWYKAJYBHFXBUFBJKIZPVWQDVVSDFMTBQCNKNOLVDINRCFKFOQQRJISWKZWVSUFZYYYROHFGCMYUQVSYBPAHORLCFQCWELZLFXUEAOMTPHPTLBZCZGAXNYKDCNAUKNHCSXENDMOUJJVROMIWMIVXXBSBMCINJNEMTQHPTVEOAXZZRDHOGWSAYDQALGZJE");
    tmp_msg_0.plan_size = 46006U;
    tmp_msg_0.change_time = 0.753817670059;
    tmp_msg_0.change_sid = 37614U;
    tmp_msg_0.change_sname.assign("ESVIUOOPQGLHGRWXFTNJCXNVWQRYTIDMIJCBEPFGGASSPEBBFARPYTMSDZRERSMGAWWEWIULRYKDLYXQLKYLCJGQUQWAWHNJXBAMVFUQRKH");
    const char tmp_tmp_msg_0_0[] = {122, 49, 75, 123, 63, 56, 26, -68, -33, 109, -109, -27, -81, -101, 125, 59, -98, 18, -36, 79, -63, 101, -103, -105, 117, 102, 32, -92, 97, -102, 17, 108, 115, -84, 93, -103, 119, 56, 44, 44, -36, 16, -110, -112, 45, 109, -38, -77, -69, -117, -69, -37, 121, 83, -65, -116, -21, 19};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JECRKOKCIEIUAGXXZUMVMTIEKGZOYTXEWWZVVIHAMLPQIWGWADUHBOUPCKCQXCOLWAHEYZIPQLJDDYELRYISWPRGNJZRZHTFNXUEUFBVVILTWOHJMALAWNDZFQXROANBQNRTVOTWVNFRNWJXEXNKIBHKSAMGJGMGMQFBFSDFSCRLUYKVXSDPGZSNIEHNMSRMYCQXJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.661094848791);
    msg.setSource(45264U);
    msg.setSourceEntity(32U);
    msg.setDestination(30416U);
    msg.setDestinationEntity(133U);
    msg.plan_count = 54593U;
    msg.plan_size = 3680769689U;
    msg.change_time = 0.088106372091;
    msg.change_sid = 22273U;
    msg.change_sname.assign("VVMKHZWICNLECZWJRBATFCNUQSNOXGLKWUKZHCKWBTSDQVDFUANYWIOHOPMDMOVRSLFLMCLRVRHZEQFBOVGGXXTMLPYDEKWQJQHYTPHCKSMVKPSTAVRPIRFGUSIAZSJQYDPYRBYTMDTZFRIXECPZXROEDNUPHFEGFUBITEGAOXCMGXCSJJWWWOJPIHDJJEOIXDAIASEUYNEBHMDFGZXYUFGZQGLAUNSNQNKKJXINZYKQMBAHBVALBPWBQOLJ");
    const char tmp_msg_0[] = {-124, -3, 23, -54, -127, -8, 45, -5, 35, 16, 123, 15, 16, -41, -59, 80, 77, -109, 8, -121, -4, -86, 50, -127, -33, 0, -50, 83, -55, 63, -9, -117, -53, 44, -9, -31, -24, -38, 21, 56, 112, 23, 17, -31, -25, 46, 88, 47, 6, 19, -32, 21, 7, -18, -120, 114, -89, -126, 109, 74, 57, -44, -125, 3, 8, 126, 54, -104, 116, 54, -26, -70, -54, -63, 37, 73, -46, -87, -110, -15, -52, -98, -7, 7, -13, -2, -51, -63, -95, 11, -90, 71, -19, -32, -33, -35, 83, -119, 83, -75, 71, -23, -69, 107, 58, 45, 20, 79, 56, 57, 10, 8, -67, 9, -98, 81, 42, -48, -105, -11, 125, 88, -58, 34, 106, 74, -97, 2, 66, -75, -105, -120, -85, 108, 54, -51, 6, 89, 77, -42, 56, -87, 125, -6, 9, -10, -96, -35, -107, -74, 68, 59, 41, 77, -79, -36, 118, 87, -70, 9, -47, 100, -114, 118, 37, 106, -128, 98, -97, 49, 102, -86, 45, -105, -57, 47, 96, -74, 87, -125, -89, -14, 103, -80, -14, -124, 72, -113, 52, 31, 76, -89, -32, -42, 123, 115, 62, -100, -94, 115, -11, 101, -85, 118, -18, 25, 12, 100, 26, -93, -11, -24, 42, -54, -45, -49, 66, -113, -26, 101, -100, -122, -107, -2, -52, 13, -61, 124, 0, -2, -109, 122, -37, -14, -44, -93, 6, -22, 28, 96, -17, -78, 28, -16, -46, -9, 83, 64};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.38613728175);
    msg.setSource(33256U);
    msg.setSourceEntity(133U);
    msg.setDestination(20084U);
    msg.setDestinationEntity(45U);
    msg.plan_count = 18050U;
    msg.plan_size = 583817213U;
    msg.change_time = 0.236612003866;
    msg.change_sid = 15250U;
    msg.change_sname.assign("CTTPHYBXKEBSVZAZDKIOYUYWIKUSFJYXCCOJTQGPJPXE");
    const char tmp_msg_0[] = {20, -75, -54, 42, -12, 99, -31, -82, -113, -34, -114, 25, -109, -114, 121, -88, 26, 47, 98, 6, -52, -84, -106, 48, -16, 43, 16, -30, -106, -127, 21, -1, 37, -95, 77, -35, -23, 26, 31, 46, 77, 109, 67, 54, -108, 52, 93, -117, -81, -41, 42, -34, 67, -44, 114, -25, -66, 69, 43, 37, 103, 107, 50, 118, 109, 17, -128, -11, 50, 40, 24, 93, 65, 52, 96, 96, 59, -70, -15, -86, 68, 90, 63, 12, 67, 27, 16, 38, -63, 72, -60, 100, 95, -37, 51, -79, 100, 114, -56, 93, 43, -28, -119, -11, -26, 92, -78, 89, 72, 5, -92, -65, 74, 107, -39, 111, -55, 70, 13, -86, -1, -15, -59, -16, 12, 22, -20, -110, 122, 62, 100, -114, 43, 114, -8, -9, 122, 46, 1, 9, -33, 111, -45, 50, -128, -109, -113, 88, 108, -121, -20, -36, -22, -98, 13, -102, -115, -74, 104, -101, -38, -13, 39, 29, -26, -48, -113, 108, 125, 35, 71, -71, 87, -65, 19, -113, -10, -17, 79, 70, -27, -27, 70, -49, 91, -103, 24, 90, -29, -115, -50, 51, -107, 121, 85, 29, 85, 106, 29, 39, 96, 106, -47, 31, -81, 56, -87, -82, 115, -72, 104, 124, 37, -38, 22, 92, -51, 101, 3, 46, -48};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PMIRHHERDCDPEMOEGFKRPZNMHN");
    tmp_msg_1.plan_size = 52331U;
    tmp_msg_1.change_time = 0.978991870125;
    tmp_msg_1.change_sid = 2058U;
    tmp_msg_1.change_sname.assign("XAKFPGDXKFITCJTWNMXLDLPFCDMRMAWCIYCEYAZLBZVGJTKEBZSIWLCQUPMDRLHBGVKJFJUHLDZUBRCDNQYTQOREWVGYYJISEFAIUNQNMRUQHBARRPKVVECUUHYCCHJPTIJBWXUPYBQTENJQIPGT");
    const char tmp_tmp_msg_1_0[] = {-74, 42, -27, 87, -69, -125, 3, -39, 83, 122, 54, -79, -116, 82, 122, -100, 83, -110, 42, -104, -9, -46};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.733729815558);
    msg.setSource(7672U);
    msg.setSourceEntity(126U);
    msg.setDestination(42539U);
    msg.setDestinationEntity(156U);
    msg.plan_count = 21007U;
    msg.plan_size = 5143815U;
    msg.change_time = 0.156557619087;
    msg.change_sid = 48621U;
    msg.change_sname.assign("RXLXRSSXQIBPADLLJELKKTYFDJQMAHUROKAUWSPCGGEVRVTHAOCMEOIMAKVDNRTMKUWYRZFJNGLTGXGPROIWWTDRCCNAHKBPJDRYQEAEFPUBMOFTAIKLOTVBLHFW");
    const char tmp_msg_0[] = {-111, 105, -62, 75, 67, -71, -30, 72, 29, -65, 105, 70, 34, 84, 25, -64, 124, 52, -38, 115, -66, 43, 95, 86, -2, 83, -67, -127, -84, 123, 74, -80, 57, 81, -96, 85, 9, -6, -83, -27, -109, 87, 97, -87, 29, 0, -92, 16, 69, -70, -60, 12, -81, -28};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FUBGEBRLAJQHIYWPCZKLJPHUVZLETCVMOWNDNWVSXILZXQFWENGCYGZLTXGZSZYUVRPDTDJBMFSDNCQEPJGBNSVOSJMCFARARMZJCOKLSFUABHFAKLGQHVABOINZSTKCXIHFKUXEFYGCXMUJQD");
    tmp_msg_1.plan_size = 13859U;
    tmp_msg_1.change_time = 0.492714612119;
    tmp_msg_1.change_sid = 25293U;
    tmp_msg_1.change_sname.assign("VFBCNTMRELWQJBBQNFZSJOEAWXPPWTKCYCKVIXXIVMRZSHGHUPFKHOBQGMVPYEVWDXHHWZSVFWXHZPONCTMFYPNTNAFZOTOBSGQSTDLEGYCSLLRCKJYEPUIGOEINXQJAJWMNOSAMVVFADADRHZKYQCJTIUNMKYLHCFILRGOBRFXXDAEJRVSXGQBSQ");
    const char tmp_tmp_msg_1_0[] = {-123, 3, -20, -11, -82, 16, -128, -105, -25, -64, -32, 50, 97, 67, 44, 73, 100, 14, 62, 60, -104, -114, 75, -41, 44, -38, 0, -52, 53, -114, -114, 32, -32, -49, -25, 37, -91, 36, 28, -5, 112, -51, -13, 25, 23, 27, 119, 95, 122, -87, 6, 74, 12, 91, -19, 106, 29, 121, -122, 85, -121, -89, -123, -109, 87, 84, 63, -72, -62, -86, 110, 49, -61, 54, 85, -78, 96, 79, -51, -125, 83, 68, -52, -31, -37, 5, 75, -3, 114, 44, 107, 4, 47, 39, -126, 71, -31, -32, 40, -123, 123, 100, 78, 51, -54, -114, 121, -116, -126, -116, 54, -8, -76, -30, -80, -11, -115, 19, 123, 11, 95, 115, -74, -78, 98, -31, -106, -86, 52, -44, 33, 19, -71, 96, 71, 15, 89, -87, 6, 89, 42, -35, -3, 16, 110, -107, -97, 19, -76, 9, -52, 4, -64, 53, 124, 18, 20, -59, 100, -88, -26, 13, 83, 24, -113, -121, -67, -96, 116, 70, -122, 8, -85, 44, 44, 25, -73, -64, 119, -77, 3, 18, -2, -14, 97, -101, -11, -66, -123, 56};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.818296020706);
    msg.setSource(34392U);
    msg.setSourceEntity(210U);
    msg.setDestination(41143U);
    msg.setDestinationEntity(32U);
    msg.plan_id.assign("LBWVYMNTBXTYZNAANBXVWINIZHUSGLHZBKVUDPQZDXRBSJCKYWECEEAMIPXEQZYDYYTVINMEAUANUADFCWSWMEPKXYDGXQJFJQEYFFDR");
    msg.plan_size = 285U;
    msg.change_time = 0.350086066801;
    msg.change_sid = 51363U;
    msg.change_sname.assign("JIORBHFYBGSHQTUVEHDGQNTNXDFKTZBFCLRKHGTWTJLQOHYLDIMRPALLMHVKTLFHGWQRXKDSWZJMGIEKEAAQOIPVYYMZITEFEYOUAIINNXYURYOXTDJFDTOHWAXIQKAVLCKWKZZIMPCJWQGXDGPJPOAFQGOMOCAPSBMPTKKVFJSPJDVWDBLYUSICPZWVUSRENJQCXCBRZSOXZLPVXRJCNEABGEXMBFSNZCBVVGNYQUDHRUFBHMEWUZYENNLRWA");
    const char tmp_msg_0[] = {-68, -7, -87, 65, -51, 93, 1, 55, -123, 4, -103, 37, 123, -61, -36, 2, 91, -78, -100, 119, 98, 20, -105, 57, 36, 16, 109, 118, -107, 102, -102, -28, -4, -90, -32, -41, -36, 114, -47, -32, 125, -79, 44, -113, 91, -121, -43, 97, -45, 74, -107, 108, 123, 125, 114, -115, -59, -108, -104, 26, 76, -112, 90, 9, 122, -73, 94, -22, 13, -106, -42, 56, 47, -86, 43, -122, 41, -64, -16, -37, -75, 11, -2, 125, -34, 115, -50, 19, -125, -68, -64, 95, -48, 81, -35, 3, 43, -86, 15, -11, 65, -72, -96, 42, 34, 100, -69, 57, -51, 48, 34, 51, -102, -18, 114, 39, 4, -35, 116, 76, 60, 99, -5, -34, 53, 19, -86, 20, 6, -91, 79, -74, 18, 57, 58};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.534632265216);
    msg.setSource(1598U);
    msg.setSourceEntity(23U);
    msg.setDestination(27676U);
    msg.setDestinationEntity(123U);
    msg.plan_id.assign("TQKFUHLYSXMMVFEEHZBOTYEIBGDXNYNKHSSOXM");
    msg.plan_size = 25691U;
    msg.change_time = 0.740343898682;
    msg.change_sid = 16898U;
    msg.change_sname.assign("LDWSMMNBJUVQKARPMUHOWRAQMYNYYYUBSKFV");
    const char tmp_msg_0[] = {-27, 88, 18, 56, 107, -92, 108, -95, 78, -1, 77, 35, 102, -87, -82, 62, -48, -22, -77, -76, 23, -20, -105, 96, -85, -40, -45, 115, -4, 126, -46, 111, 98, -38, -116, -35, -73, -48, -80, -66, 15, -91, -30, 10, 109, 15, -96, 64, 97, -63, 34, -32, 5, -23, 73, 54, -3, -72, 74, 21, -97, -13, 75, -87, 67, -102, -64, -4, -7, -29, 5, 90, -30, -9, -50, -63, 63, 47, -111, 52, -39, 112, 81, -7, 66, -86, -21, -56, -81, -102, 121, 35, 125, -28, -82, -14, -111, 60, -45, -55, 87, -5, -78, -73, 60, 87, 45, 19, -36, -100, -95, -76, -103, -78, 63, -17, -18, 23, -16, -7, 100, -94, -67, -81, -29, -46, -61, -89, -1, 15, 20, 51, 1, 65, -128, 85, 124, 98, 120, -58, -122, 16, -40, 56, -106, -22, 17, 4, 31, -107, 58, 25, 10, 46, 39, 86, -72, 76, 10};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.636851999717);
    msg.setSource(33252U);
    msg.setSourceEntity(209U);
    msg.setDestination(33663U);
    msg.setDestinationEntity(174U);
    msg.plan_id.assign("ZIUTGENVZMYJDBLLYJQOTWJYQGTXNTNOPAIQUJLIQPWHEKSWRTPMMFMRKHDXHSINRPDYMDWLZGCLAJOVORQKOMUFMMTAYCWVUSSMFBSVLICROSBXUSLAUGHDQFZOBEQILOONDPKCNRYZNKGVHEEBGXEAOAKVFFHFCYLXCJVXPKP");
    msg.plan_size = 35895U;
    msg.change_time = 0.822661440717;
    msg.change_sid = 46085U;
    msg.change_sname.assign("RCWNZYBKCAIEYHLLBKMLTJDZJKEXACVZBUYBWSAJIFRADAYFMTNKNUQXEWLBHRUVMNUJJENBFRJUMEHKGWSHQVLMXIWDWMUCJTVTSPXAQOXTFBRUTGVQFYIATNLDHDKBGKPZLGYFAJCEROLOGVZABOQEKWHQXILRS");
    const char tmp_msg_0[] = {-3, -48, 116, 106, -108, 49, 70, -18, -57, -90, -122, -66, 93, 125, -98, -121, 51, -50, 7, -47, -93, -102, -112, -24, -88, -85, -50, -103, -105, 49, 49, -83, 5, -29, 4, 126, -49, 28, -71, -7, 95, -89, -59, -115, 54, -101, -67, 54, -69, -62};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.151109691888);
    msg.setSource(42055U);
    msg.setSourceEntity(27U);
    msg.setDestination(63498U);
    msg.setDestinationEntity(193U);
    msg.type = 215U;
    msg.op = 4U;
    msg.request_id = 61495U;
    msg.plan_id.assign("SYOHVOJXDGDCYHEFLECIFAZRCUJUEXCLANGJMSDBCXBMURPIWGQAZNKFPBSUNTOULTIOSPR");
    msg.flags = 30906U;
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 107U;
    tmp_msg_0.actions.assign("SXCSHBKKHEPBDAHUNQIFNWFDWDHXIMRJNGEHBNOYRFSVNAOUOZXFALVAZARIZGLVHDSMHMQOYXZGUFWCZJCTAYPKQUPZJBXIKKDTADIHVAJWLZPXPXIETVGYNJCYGLTGMSRTSWMUKDFCTQPWZBWGBGQVKEWYRTOLYRSLHUIQORXGPRKUAMFFPKSCBFBJRLLIYUVXPESBVDPLSCLCRTQQAUMEOTMUZNHMMNWEB");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OTOCOZLONAGBZXYXHATKXJRLNCIBIZQAXBWVAOSDVJTRTUSRUBTFNYUURLNFNILCAQPXEHNYUBTARQPBHMDWYJQDDPOSPLHQBVIEJWJPPEIEPHNKWZMGWYVDKXYLVMGJEFVPXTNKSYEXMOFVLZRYGCAOFV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.436134924004);
    msg.setSource(24617U);
    msg.setSourceEntity(150U);
    msg.setDestination(58941U);
    msg.setDestinationEntity(128U);
    msg.type = 117U;
    msg.op = 162U;
    msg.request_id = 54486U;
    msg.plan_id.assign("ZJYQSKJBYMUPZTZOMBAVSJEMKIRYYOKOLDXVRJEPLNAJOSFIORQNKPHUYQPGKUSLKWXETERWCBDISISZAKXBWUAGYRFDELEYETDSUGGQOYTJRQWVFOCMHNTCFWJKDGPIKYGVXSQBBSFONAMAXZFMFWCHWENKACLQOHMIIHQXVUGOTCNZTLXIGHXHUJVMRDLVTLNRHAVFPCLBZNQWZEGUPPJETXPCJWWZNBBDFQFRCYS");
    msg.flags = 29151U;
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.644834255447;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CZJRIZUGOJQOB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.96234784519);
    msg.setSource(21232U);
    msg.setSourceEntity(52U);
    msg.setDestination(20914U);
    msg.setDestinationEntity(49U);
    msg.type = 40U;
    msg.op = 139U;
    msg.request_id = 31348U;
    msg.plan_id.assign("GXRDNEJVJWWORBOYPFGRMLHYTCCTBNQHKTUCLOXGJMLIWMOAVTRDDPFOEJWXPJNILSCVAGJJQEZKOOQPYAHOLRBKUKVZDEKQQSAGKOBWMDFGASYXVSXATNUZFRNDPCHFSQFCKYSUBSHGFIMIILKEYIVVRXEXOCBULPLWKIIGWESZDNBAMYCQZLWREHLVZZJFVDMBIHMA");
    msg.flags = 49875U;
    IMC::AcousticBackscatter tmp_msg_0;
    tmp_msg_0.beam1 = 0.0392154178789;
    tmp_msg_0.beam2 = 0.0434102240885;
    tmp_msg_0.beam3 = 0.122663767262;
    tmp_msg_0.beam4 = 0.83661302583;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BULRBZOZLTJDBWRDRFPESAEJOBHMYPEMG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.335915098351);
    msg.setSource(54121U);
    msg.setSourceEntity(186U);
    msg.setDestination(59155U);
    msg.setDestinationEntity(210U);
    msg.state = 6U;
    msg.plan_id.assign("HIDCRFZKUBGPCXTFTCKFOKRBKIWZFCIKAQSJAEEDAODMSYKEW");
    msg.plan_eta = 945555130;
    msg.plan_progress = 0.789221638304;
    msg.man_id.assign("EUDYZCHUQOTQKGFPLRHZZRWCVOKFSAXQFUBBUCDVRATZLFPWELIPLMSJUVUFSDFIEGCGFWXOVHSXHOONYBMVKSTGVSPBWAKKXNTDXPNABXUGCNIGMUAPOARRJTJNJFLOSNQTAMQRTGZRSBRJMYTTZYQAQRJCKSJJWADMINQEEPICELJPEDIY");
    msg.man_type = 13009U;
    msg.man_eta = 1888654558;
    msg.last_outcome = 124U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.128178956093);
    msg.setSource(61622U);
    msg.setSourceEntity(146U);
    msg.setDestination(24922U);
    msg.setDestinationEntity(207U);
    msg.state = 48U;
    msg.plan_id.assign("VTWBVHZGTVBAQYEKTCFKKTADXFTUPFGOJCELDRJLAXPMLHTTIRQXZSOEBLLDQK");
    msg.plan_eta = 7639876;
    msg.plan_progress = 0.0791969591374;
    msg.man_id.assign("TGYFDJUDTIXIEGTUSZBDAIMKOVQTRBMROKGSUFHUNSXCETYWHZZALNOAWFYOFIGSJCEVCNXKJNOMWXAZUHCCBVDABKQPPWPXRLUDPUIQSRFKLQYCVOEGIBKZQKLSGGHRPVVACIOJNVVYHBRORHTRXHNTATLVFXAZAMGWESBSJBZYQUQZFDFDZEBOPOICZSGJNIUYQYMLDJJ");
    msg.man_type = 34299U;
    msg.man_eta = 1261578585;
    msg.last_outcome = 152U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.659427996681);
    msg.setSource(54483U);
    msg.setSourceEntity(32U);
    msg.setDestination(9672U);
    msg.setDestinationEntity(210U);
    msg.state = 180U;
    msg.plan_id.assign("OZXMFYVWDCCKJZRBHFSEPLYFIIEPDJCOWONYZMKPATKBALIZQATLZREPJAOAEUIIYRMXDDSWSCAMQKFBWNXLRNVPLAZARNFQGVXYOQWOYOGSIRUQQEFJGCJYVYTTAPUNXJICUD");
    msg.plan_eta = 305699486;
    msg.plan_progress = 0.907829692672;
    msg.man_id.assign("SUEWLJQEGKAJFNEHMTLEXQTXJENAXMGBCVKWQZNIRJYMRNZSHWFHDYLVGJCFJGTJEIXYVYCBTUDHEMYWVZOTLHMTQSFDQPWKQGHBXRVOLVYPAVPQASUOJYSSDLHDVZUYHGXBID");
    msg.man_type = 8984U;
    msg.man_eta = 423925883;
    msg.last_outcome = 239U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.883944227745);
    msg.setSource(1013U);
    msg.setSourceEntity(135U);
    msg.setDestination(19053U);
    msg.setDestinationEntity(23U);
    msg.name.assign("IANURLCCPAFJILWJEJBLKFMGAQHBKDPWJXNYTHACCPRVYPXTLSHWUFODMWBYYLEBTXGCQWYLDIB");
    msg.value.assign("IGCHFOOEABOYFSXDLQMCHLBAYHXTZWGEVLU");
    msg.type = 58U;
    msg.access = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.022730690603);
    msg.setSource(49679U);
    msg.setSourceEntity(133U);
    msg.setDestination(13396U);
    msg.setDestinationEntity(206U);
    msg.name.assign("NWFEPHDZTUWAXOOQDOAOJFTYYDKFBMDPEQLPTIYGCHEEZVVDSMTJLAZFWIFJWKRCMXSSLYVVGVFODWVXXZZUTY");
    msg.value.assign("GWGDTZHRMSSKDJSNOPCBNKBFLKPEZDUAQMGESVVSECOEXIQBYXXLJJVQPGKYDUNIGTYPREUOUCQTJZJNZEDDTYKPIUGBOYRWGJWTUJZEHUZEVYQQTNLJLXAPJOFZBX");
    msg.type = 117U;
    msg.access = 105U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.423880293316);
    msg.setSource(30561U);
    msg.setSourceEntity(67U);
    msg.setDestination(59467U);
    msg.setDestinationEntity(26U);
    msg.name.assign("FDYBXSHPJIOKFJCPZMHRDVPLDJWCOETVAURHMWRCKNENXJRBWQQCUZPVQGSGMRDNFIDQKDBMAYZYIUAHJIMTQFBLPOJPYTNANWFKVEEZZWZMTXEFUBWFMLSCAJJADCMHKEHGIWCZKZYBZXOHSQUKBPQPVTRCOFVZTKTADAFVQNDKHRUWTCSUUVONBLXUTGXIVIBMYLTIYNYYIEXSRLDLGLSORGORPWXXE");
    msg.value.assign("VLHAZRYSYRNDFPWPUIQFIYKVQQTQRDIJNJYPOSGRPEISBZMWOEREKLVZXZHCBUGBAOBSQZJTCTQDWNVVPDMJSYCWXBFVODNHNBKDXJPGKZLLUFHCEXDOBEMIVHNJLMKPLCGKHTAULEACILRJPEZAIHXOUCPWAUSDHUSHMLBKMIXTFCTTMDX");
    msg.type = 212U;
    msg.access = 191U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.134688639619);
    msg.setSource(48843U);
    msg.setSourceEntity(151U);
    msg.setDestination(1442U);
    msg.setDestinationEntity(18U);
    msg.cmd = 213U;
    msg.op = 146U;
    msg.plan_id.assign("XROXFMVQASFJZHDITOJXUQJDOQRGFNJNUAYEMGQFASSZYHEGDGNRTWOQHYLKQXIKRRWUPZBFTBAYUSISKEZZBTZMJYLIGNWYFVODPYIEOUGGRPIWUWCRCGNQJZBSAMVECADBQ");
    msg.params.assign("DYLUAEBGXEFHVNIXBDVQPRWSFSNSWDMHDIEIMIKAVOUXYDTFFQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.598284865861);
    msg.setSource(63673U);
    msg.setSourceEntity(250U);
    msg.setDestination(37189U);
    msg.setDestinationEntity(83U);
    msg.cmd = 7U;
    msg.op = 141U;
    msg.plan_id.assign("VXQYEMHVCDSAYGOYLSCWJVNMOPLLQXHYIYRZULZJBBLKTUWAYPFZBMXAUEZUUCRXRHDSNFASAMAWKBCGIGSAHKXOPSLDAKNHOIIJOMDUWVJWRBMNREEYDPWZNUKCKQ");
    msg.params.assign("DCOCWPKRGJLEVUKSVQHYABGXG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.984039947968);
    msg.setSource(47627U);
    msg.setSourceEntity(217U);
    msg.setDestination(49481U);
    msg.setDestinationEntity(233U);
    msg.cmd = 12U;
    msg.op = 227U;
    msg.plan_id.assign("LHKNGOUTJHEGYQCWTIPPDIGKJLGQFEUBOOZTJJNQ");
    msg.params.assign("QCOZAZEPUQHKWOGVDFAMUPPUZVXTHYRDTTIOAAEBXTPOGRJDSEIQRIEUPJSSJCBCXENTVRQWGNFPKFBLFQYGFBTAKARPUQNZCIKIGSXFMJLGIYMOLNLMWFJIKWMTYOWJCVSBCQD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.960174837442);
    msg.setSource(798U);
    msg.setSourceEntity(17U);
    msg.setDestination(21106U);
    msg.setDestinationEntity(101U);
    msg.group_name.assign("HGBWIPWSDYASEGKVJMCVTQQSNQLPXRYVABJCQLZGBJZVNMALJMAWINOVPOEFKAJYGUEHYZBTVHZREBMNESODVMRZKNNOLECLSPYFNCQXXWXWNCCPJZBSDKTHQTLFEIUUFLQJHWXFUGDYGRDUGSRPAXMUIEYIWCXYSWICEBPDOWHOJBBZGYHBMDACKUUPKPKVLGTADR");
    msg.op = 200U;
    msg.lat = 0.275419189011;
    msg.lon = 0.507775738948;
    msg.height = 0.363953268034;
    msg.x = 0.261828526864;
    msg.y = 0.658192357327;
    msg.z = 0.757846455827;
    msg.phi = 0.918151399098;
    msg.theta = 0.875214529851;
    msg.psi = 0.161475540492;
    msg.vx = 0.891489960686;
    msg.vy = 0.304699970899;
    msg.vz = 0.392490705003;
    msg.p = 0.293870137967;
    msg.q = 0.891284064007;
    msg.r = 0.206483462372;
    msg.svx = 0.384104323832;
    msg.svy = 0.451056386683;
    msg.svz = 0.669897864941;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.492959200817);
    msg.setSource(55219U);
    msg.setSourceEntity(201U);
    msg.setDestination(25303U);
    msg.setDestinationEntity(210U);
    msg.group_name.assign("SHOYZDSQNUXQOBQAEVYHEHJDLTHLJEKDORUGLLRBUHRNBRVZNOFVWULTODUYQGWKLDIFBEVKAGDKNWCHALGGXDCYNFWMTKRNXYSZPPPBCZDWIPNZIPVBSFTJPEQSSUNJSQIMPKFCDGLYWVKCSRITMJQVJMBXVEPTFIETWRXMMGIOEKUGOAEORZJBACIAYMNHPXZXTQOKG");
    msg.op = 205U;
    msg.lat = 0.0171322134981;
    msg.lon = 0.926872539718;
    msg.height = 0.966986070752;
    msg.x = 0.984867591757;
    msg.y = 0.0918259309621;
    msg.z = 0.790536264728;
    msg.phi = 0.865639029036;
    msg.theta = 0.358740166999;
    msg.psi = 0.0272900859756;
    msg.vx = 0.686261255016;
    msg.vy = 0.129779170467;
    msg.vz = 0.315796932288;
    msg.p = 0.211925601707;
    msg.q = 0.974541094374;
    msg.r = 0.0272443932923;
    msg.svx = 0.206113010095;
    msg.svy = 0.829241352898;
    msg.svz = 0.903043149932;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.858591351146);
    msg.setSource(31072U);
    msg.setSourceEntity(77U);
    msg.setDestination(49582U);
    msg.setDestinationEntity(20U);
    msg.group_name.assign("DBYCLLEFHAJQPJNAAEGJDXJKBSSPACWGQRWNUXJKGQMYHFEOZPLRTNSUKWSFFSDCKZTETTJDRXHWANJ");
    msg.op = 102U;
    msg.lat = 0.457495170462;
    msg.lon = 0.364876330393;
    msg.height = 0.951152181936;
    msg.x = 0.112314869831;
    msg.y = 0.0858770690407;
    msg.z = 0.669432945975;
    msg.phi = 0.81147875371;
    msg.theta = 0.280422628526;
    msg.psi = 0.111683967613;
    msg.vx = 0.893553395547;
    msg.vy = 0.075332052896;
    msg.vz = 0.750669217992;
    msg.p = 0.518194809114;
    msg.q = 0.418566175238;
    msg.r = 0.66268097305;
    msg.svx = 0.776072002364;
    msg.svy = 0.147596842229;
    msg.svz = 0.473790752865;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.315431616482);
    msg.setSource(40042U);
    msg.setSourceEntity(102U);
    msg.setDestination(56108U);
    msg.setDestinationEntity(40U);
    msg.plan_id.assign("ZZJKPAKJEAMTTEHVAEEHCUZJTJNYNCVBVNONLDCZVHQHSCWLNMUXXLFCAUYRBPYFXTNIXLAAGRIOBSSKFSEKPRRHTYKSWPRMJWKNSXDOGGMDZMMDHLGIGZQCCBLVPIMVUJPDHCIZMDPEHLZ");
    msg.type = 44U;
    msg.properties = 224U;
    msg.durations.assign("NANISXSLZCGRECUUVUHTMYLNJKRQLPBQKISDDSZFTAFJPML");
    msg.distances.assign("DFFVKZGQRTIJYMLKWKFMTACQCYIUEWNNACXQMBXOPAWKTBIZUAHUUJLFUBPUADMSOTBKUVZSQITMDABNFGBARPF");
    msg.actions.assign("QEMLQGBFNGXENELBTWUQAYRGFXQPCYKNQPFVOHHXONJEVQGYWBVAUSSRCHTCEXMPLAVUQGMCSOHIKDJSJNMZPFWLWATYOVFNTSBTHRKIBKEDBTIGFUIZUSDBIXNJFWVXJROJTAZZYXSLYKFPDTGVRPDDZWAUYPIMCWLWHASZRUZOQGTHIQMFOKJRZKIGXCZVAQPDKUXBGONTKMCSWARNLHNECSAULOYIHRMUPBVLEJCJJMXEZVOIPYBMD");
    msg.fuel.assign("LTSYTRKHADHNFJWYXYBQOFHVOTLDRLEXXWQPCAQDAECBJGPTGZMMTHBPFURCVMOOQZSPSWOFEABWAEEHGWQTDBRRCIZRYIAUJCFOQSEXPSWRECLD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.761580257472);
    msg.setSource(56610U);
    msg.setSourceEntity(54U);
    msg.setDestination(63211U);
    msg.setDestinationEntity(193U);
    msg.plan_id.assign("OIPDWGBSRUPXBWMAJVBFKYCRIYUREFTHEZSJJQKEEYKWNYXHZVUDKKEQQZSHABSNPHRRSDWJJB");
    msg.type = 100U;
    msg.properties = 159U;
    msg.durations.assign("PJBXRKRTYDNHLVKQPKJCRHHUVQQZEVBREKGBGAIBNDDIYIWWTKXDGIPICXELFVUOCIFXBTHFCSPDHLJAZRXCZWUZNVAYJSCMDJOTZWFTNKMNJBYAPNXEGNT");
    msg.distances.assign("RGPEOVAMWHCXDARTKBDSCAQDNKGSXJVLZRSINOGUFALARQFABFCBFJYWIEHHQENXYWJQUXMOFBSRHACKOCPUZELRIEYYNTITGHZPWMIHWUKXGSVOCPBRTVSOLEEMHFFQWXIYKZHMYJGXMLOUQXFXFIDYDZTQBWOFWTWRKCRQPUXKTCJLPBNOIYJAYQLBDHDVZLJANUZTZQSNDZMBRPEMIVWKEC");
    msg.actions.assign("TLSRVEGADHNPZIOQGIWATMYZSCUWHIMICBEXXYUKQJPBVDJDBBSTZCQOPQVNBFVECSTVNUKOLSQFJGHQRMAIZKXVFSEMERMPNZFRBWYRXNXSAPSDAIEUIYKVOWALVJQFMGOLQDNBJEKQMGIKPMYWLUGSHCPXZHCIMZPZAEYWGRGUTDHQNOXTKDDURKXFCRYWWJLLK");
    msg.fuel.assign("TEKYFGSDQBGZXPVCVKIQOCOTZESSRNGASMIXMUEHBZKNVODROGNQYMQPKJTIQEUJBLRVLFBBWNRGMPTRTVETWUPHUJQGFNUCMDDPYDHHGQPTBAZANVHIIWVKWJLYRKAPAOYUALWKFEVHSFHI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.0547961551495);
    msg.setSource(30771U);
    msg.setSourceEntity(117U);
    msg.setDestination(38298U);
    msg.setDestinationEntity(191U);
    msg.plan_id.assign("RGXJNBZCPNNBEUNOMCJJITOYYQCWUDDCOQEMZKYSFTIZUMMCZPKYOHCLKSLEDULCHRGMAHAKGTQHQJBLFDMNXALSAHQBMLVIRVWPRTPUIKGPYXZSDVBWWCXZANLXKGPFJODLETONQAHUEKSSRFVXSAJB");
    msg.type = 183U;
    msg.properties = 83U;
    msg.durations.assign("XMOSFRIULCRFKKOAHXEQUURAYWZEQWDEAKXWKSTLDPWGVGUFJMHLKPKDPZTMWCOZCUIIHBTNHRGLAMMCTALZAZLFCAKGODMORRGHOTLHXBFIVQLVDSNZNJCINEVZCEJUVWFAGNLGBQZYSTGOYDIEJQXRPNITJFUIEKEOSBIVPHBWRYAXFBTGVNW");
    msg.distances.assign("JIUQYDWENZXPQHOQIGQMNPMNOLVBDRGPVIDIZLXUOYRZSESIIMWRXSGJLGSPPXQEESNJAVVFHLYUZTEGFKJWPFFUFDGMBHHXJRLBYUARQGJWCVANSAXOMXPTCYLTZCVADIRSABSWRFITMOMPWJYZKJAFYVHEVGWRTE");
    msg.actions.assign("NMMVUTFRXNCLKLBEQIQXRJSIHVPMNVHQJCADPTEJWTHTOGDBADRODKVXZKUVBZLZMRGPSGUIPFZCURUVWGSOIZWWFJRIYYLKPVEFUKIFQQJURAUNDMBCSRXAOXOYJAYHUQKEQFZZACLVOWMETTVBCFZGOINWNZSJNERPALNBBIWVAGHQGCKDGHUFTTWKWJPYYHHIEAIJXHYDYXAYFMXZ");
    msg.fuel.assign("PPYOHVEWOZBSPDHJUWEDMOPTMHBTJRNJDCFRTBVGTANBKQERTGXJIPYZKISJYVFNVSXIAMBKSCIOCAYRLZQKTGHFWGLMAWKUNHCTFXFFFZAULXQUDZLHKUNRNAEGGZEBOTJRUOFCQCVYHZYWMCHXZSWDSFXVUGCKDBSWOVFIMJALPWMNYBDMNALLOKLISEBECM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.376416315303);
    msg.setSource(21837U);
    msg.setSourceEntity(65U);
    msg.setDestination(34100U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.154072426989;
    msg.lon = 0.725694961553;
    msg.depth = 0.543824241937;
    msg.roll = 0.677209929788;
    msg.pitch = 0.494894538853;
    msg.yaw = 0.0584508512214;
    msg.rcp_time = 0.550536787688;
    msg.sid.assign("RBVTMELUFKPQIBQRZRHEVXBFUHDLOUYQFKVQYPXUXELJWZTSKKYPXPYWTDVWBIPTGDALLPJQLYCTDRQIRPAIWSERKZVTATOGGDT");
    msg.s_type = 130U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.0816365063535);
    msg.setSource(12675U);
    msg.setSourceEntity(186U);
    msg.setDestination(46102U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.730074630971;
    msg.lon = 0.919595716195;
    msg.depth = 0.44549482287;
    msg.roll = 0.254878498676;
    msg.pitch = 0.0665156084926;
    msg.yaw = 0.98856395978;
    msg.rcp_time = 0.938303493521;
    msg.sid.assign("QCFTAESDWBLMXCAMQTPDPEMBDIEEUXTBZNNFABDCPPWGJBGQZVTHDNAOVGKYLO");
    msg.s_type = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.0997789872317);
    msg.setSource(63287U);
    msg.setSourceEntity(31U);
    msg.setDestination(41001U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.379206614924;
    msg.lon = 0.459025451619;
    msg.depth = 0.121251174353;
    msg.roll = 0.910253851578;
    msg.pitch = 0.820270279567;
    msg.yaw = 0.304409867486;
    msg.rcp_time = 0.0885502527808;
    msg.sid.assign("HGFACCBNKQPHBJHSSHOKTFFZDPGMG");
    msg.s_type = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.165559072351);
    msg.setSource(38987U);
    msg.setSourceEntity(46U);
    msg.setDestination(46696U);
    msg.setDestinationEntity(156U);
    msg.id.assign("MNDVRPADHBZXTOPTNWDNNWKWSBJCLMFTJHHXRHXEAUXXDCIGVKFPOJKKWHJAVCLJRMFHBZNIPAMYOGASDHTDUEZCQXYRUDXSRIHAKFDTGQKCBTRSERZSVKQBYDNLWRNPFWEFUOKAYHMGRUJQOQCBPSIISBGSZIYEETJ");
    msg.sensor_class.assign("JAKFXTRGFBOSYJEHUXBWGNDCUZFOVXYTXZMTGNNPFZALFDWCDZWLHDLSOUEJLVTHCHURVPJGLBHUVGTYBDPIRLWSOIQQRNJIDVVTMGTWUNMQJWCZYGKSHKLKKRHOUTXGVJKL");
    msg.lat = 0.189286880093;
    msg.lon = 0.806754494832;
    msg.alt = 0.962299222008;
    msg.heading = 0.362944747951;
    msg.data.assign("UEYVSREZJAFFHJOADKCQGYGEZFPULITHKGVEDAWBYTNLNNSVEEYFWUIHSNSZHZLVFJXSCCIWRVSTGOMEDDXOMISATFKPGBUKPBNYGKGRUEEDZLOJXXXPWPOCYVSSKYJUPRTWOZNHHMCAIAHJLFBYBIHGBZVDNQUBRLLBWHQWJNQQOBLCZXRVCRQDKQKDDAARPAIXNIHMWMJPYWDQTQWIOMLUJQBFJTUFGSNMLORMXCZKXTTEGCRZP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.703364912224);
    msg.setSource(20877U);
    msg.setSourceEntity(216U);
    msg.setDestination(9044U);
    msg.setDestinationEntity(131U);
    msg.id.assign("XHSHCXEJEJOPLQNMHVRDWZEBFPEJMRTOPONUAKLKGHZUCMSDUQTGBEFNMLGGOCKDUJVGDHGKLHTYCZUFKIMLQWAMQIVCTABWTDWPWWMKNPRBHCIZJXYKGNEVEWXISHAFOPPVDSGQEOGKMVVAMIQDBWTUCABLSRARRYVYQFTUIETWYXFSADTNKUSKPCRISXFDJBCZVORPQRXTJYMSBBDNZICGAXLIQNJZYX");
    msg.sensor_class.assign("MXVNAOBPSIKWIDHVNCTYGDVRHBOUAHXQOPNGVROYHTULRDEWJCEIWYQBKCCBGAZEXFRDRMGJLXBMBZJCGWJWGCRVKFEPOFGCKFTEMFOUSFPDWMEJAOVWKPJMLGWFAISXBHURGRKUTZFYZHLNTUAZYHNQTZNRELYXPPDJXSZOHAQYIPYLHZVQNQXTWVLOQSXMNDNMUAIIKKOJDXIFUFEHTMPUQWYSK");
    msg.lat = 0.330896313519;
    msg.lon = 0.483655442357;
    msg.alt = 0.76161204877;
    msg.heading = 0.401756490014;
    msg.data.assign("UEJNWLSPTDKHVYOIMBPK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.285080841593);
    msg.setSource(20336U);
    msg.setSourceEntity(90U);
    msg.setDestination(16096U);
    msg.setDestinationEntity(181U);
    msg.id.assign("PUUSWEUAFIUWVTZLRXXRPVXRQVFSHZKJHLGAAQOCUDKXLRMWKMDQYNGEGHCMYEWTG");
    msg.sensor_class.assign("VZSSFCDEYUTHBSTIDDELUCKMNE");
    msg.lat = 0.88478693879;
    msg.lon = 0.244665589521;
    msg.alt = 0.178469492395;
    msg.heading = 0.465161525248;
    msg.data.assign("IHRWOEGHCABBTEWNWFVWNQYBNTUVCXZCOXSUGRXBDISRPVEMXKYOYNAZPEEIWJBGKIUCJENGWQCLXEPNYRNLCBJXIFDUGVFOTUOAOACGEQDYXOMXMFPTBJOSCTGMECHVSHIRKQOWFZGTKHLAKIRHNIJFAMYMZSLVWEJLJVGWPQSOHHQLDPKBMJDDIJLSABPPFKRDZRRYNQSQFMJBFZYTKZDUUCZUDRZPMDUYLKTYPGUSQLVILTXF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.508134228994);
    msg.setSource(48299U);
    msg.setSourceEntity(180U);
    msg.setDestination(27108U);
    msg.setDestinationEntity(204U);
    msg.id.assign("WVUSVJOGSSPKXFQBHAEFLAOJGERGEISULZBWTMQQKUUQAWUZNJPZBPOXHUPOXYEYCLHVXISMAAGJPZQGRSXPWOGZWKATVMBJFDBNNY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.863992601083);
    msg.setSource(25621U);
    msg.setSourceEntity(141U);
    msg.setDestination(24125U);
    msg.setDestinationEntity(71U);
    msg.id.assign("ZDTCCURHVHQNYWLRHOICNXVPOHPFDYWUNLRXE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.477331671089);
    msg.setSource(18672U);
    msg.setSourceEntity(181U);
    msg.setDestination(14634U);
    msg.setDestinationEntity(17U);
    msg.id.assign("BCKVDEJSNXOATUEMVKFHBWCXEMENLFARBORUSVWOZZKSCXQXXJFKHBWUYHFDPJFMQZWASFIRMOQMGTBMYCFTUOUBTCMEVORZYAABH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.108680462451);
    msg.setSource(1200U);
    msg.setSourceEntity(153U);
    msg.setDestination(55679U);
    msg.setDestinationEntity(162U);
    msg.id.assign("UTWLZGHDFSPVWTFDRWNRYOYAOILHFCMKPRALAACGS");
    msg.feature_type = 187U;
    msg.rgb_red = 51U;
    msg.rgb_green = 179U;
    msg.rgb_blue = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.174790990848);
    msg.setSource(19035U);
    msg.setSourceEntity(66U);
    msg.setDestination(40519U);
    msg.setDestinationEntity(251U);
    msg.id.assign("OQOHNUMVSUFZZMHTOEQRRDFUAAVPQMXBYYQXGFWBJRITODFKZHMDZEUWPHQGHXULCSAGINFBJJCGNPKXNITTKMHZOVYKKIIIRUSWRVSQVCEWPOOCKDXVCYIFTESKPFLVADXGLXZAXRHOHEMAPSMDWBBZSLVRRTQUMWLEQHYGILLBIPVJOAWDTLSEEKGOVBGKJCPCEAZJLEUXMGUWDANUMFNZYPNWYCGXZJTQITBQAWJHYYKLNNBNCBDRDPTR");
    msg.feature_type = 231U;
    msg.rgb_red = 107U;
    msg.rgb_green = 131U;
    msg.rgb_blue = 254U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.569801967512;
    tmp_msg_0.lon = 0.907392058621;
    tmp_msg_0.alt = 0.330691023362;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.141339857377);
    msg.setSource(34764U);
    msg.setSourceEntity(32U);
    msg.setDestination(42408U);
    msg.setDestinationEntity(169U);
    msg.id.assign("PKOXCHSTOEYBLMJYCHKRNNGLEEJSDZOJQGLHZVJGRNELNEMZNFFNPVUAVQRIAJXCMASUKGJUQSWFYJATLDKYQHIDSQCQLDGRSLCUVPXRBERWMKXETPICAIUJOKJGNRBMOPLKVHDSSUMISQASYORMNNTTWZXXGHB");
    msg.feature_type = 107U;
    msg.rgb_red = 169U;
    msg.rgb_green = 40U;
    msg.rgb_blue = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.648907222299);
    msg.setSource(60941U);
    msg.setSourceEntity(17U);
    msg.setDestination(42449U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.949319431944;
    msg.lon = 0.00968044794425;
    msg.alt = 0.235074369436;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.132403223748);
    msg.setSource(27362U);
    msg.setSourceEntity(167U);
    msg.setDestination(52802U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.184624052303;
    msg.lon = 0.543007553178;
    msg.alt = 0.334996049121;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.874925554147);
    msg.setSource(3246U);
    msg.setSourceEntity(177U);
    msg.setDestination(4231U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.904763524588;
    msg.lon = 0.547461851898;
    msg.alt = 0.217381729181;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.531703176154);
    msg.setSource(25581U);
    msg.setSourceEntity(21U);
    msg.setDestination(44024U);
    msg.setDestinationEntity(40U);
    msg.type = 250U;
    msg.id.assign("JZTFKJIGBUJFPECECIDEQXVBLUDJBASGNSGPPXKMIVXVWRDXRTYRYHTIOBWROCWLHAYGGNDCHKLQOSHUIZVXMZNGPLIYVAVVYFMXPWCTKQ");
    IMC::TransmissionRequest tmp_msg_0;
    tmp_msg_0.req_id = 59206U;
    tmp_msg_0.comm_mean = 206U;
    tmp_msg_0.destination.assign("UFIGLSPGKTVEOFBHKRGWXQSBCNYUDWULGLCNEQQQFGWZHWWNIIWTYFUJYSYYBRTMWGHJHEIVRLCVFPKLGVQETFCMKOZWEALRVOMFAMQRPDEXHAKQAYMBBSACUPUMICSPRJSOMXKDJDSJOZYOFDXYINOPNFDXPHDDRNZQWJZJBROJKIAXCXPMZUAILTHBXLRTICAHVDKSNGEBZQPNMZOAPETUHGQSVTO");
    tmp_msg_0.deadline = 0.283414678395;
    tmp_msg_0.range = 0.958702189789;
    tmp_msg_0.data_mode = 40U;
    IMC::CompassCalibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 22347U;
    tmp_tmp_msg_0_0.lat = 0.969186732438;
    tmp_tmp_msg_0_0.lon = 0.628456444193;
    tmp_tmp_msg_0_0.z = 0.573628968906;
    tmp_tmp_msg_0_0.z_units = 82U;
    tmp_tmp_msg_0_0.pitch = 0.589865404662;
    tmp_tmp_msg_0_0.amplitude = 0.155415627297;
    tmp_tmp_msg_0_0.duration = 17086U;
    tmp_tmp_msg_0_0.speed = 0.0775725873082;
    tmp_tmp_msg_0_0.speed_units = 188U;
    tmp_tmp_msg_0_0.radius = 0.0308997736792;
    tmp_tmp_msg_0_0.direction = 230U;
    tmp_tmp_msg_0_0.custom.assign("CSVOZDSFWRAMYXFPFUGORUFNCUJEXHMWPNNCODTJGJCLSOVFRIVBOLVQDXMMXKCZXZVEQMIZRZJRUAMLTKHWWVQGCDBTSJTKQEPANCKCKPAKYYYTBYSSSXTWDKMRZKHYPDBAQNWBPSI");
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
    tmp_msg_0.txt_data.assign("YUTIAXETFIAWJHKLQHKCRVFEYYVOBSWSZBPDJGHXMXLFJEGGVGTVRJPNIYITRUGZEADTSKQZKIAQKLUFXRMBJMPSOJRZNUETQVJLWLKBYHUMNKNCOQCPXDHPOSUDNCEUQSYKGDAFPBXHXXCZJQVVQBTHBD");
    const char tmp_tmp_msg_0_1[] = {121, -121, 56, 66, -126, -21, 0, 106, 73, -17, 65, 38, -109, 101, -30, -122, -114, 39, 63, -94, 44, -46, 102, 80, -43, -19, 126, -95, 112, -24, -96, 94, -78, -55, -98, 24, -115, -65, -83, -38, -21, 29, -113, 3, 11, 90, -74, 40, -79, -47, 58, -106, -12, -38, -65, -8, -80, 24, -82, 99, 39, -117, 73, 119, -112, -16, -39, 111, -16, 88, 96, 84, -111, 49, -96, -60, 32, 19, 125, 55, -104, -128, 50, 73, 82, -65, -16, -33, -30};
    tmp_msg_0.raw_data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.328036512777);
    msg.setSource(58310U);
    msg.setSourceEntity(79U);
    msg.setDestination(41039U);
    msg.setDestinationEntity(53U);
    msg.type = 244U;
    msg.id.assign("LTFJDMHZNLQOKBLALDASGDSQHJFVAFQEDBGHSXXUAQQRRIWDWKHCZIGMRBRMEUNTBABNRNVZAEKYBFQPUUZIWWYVJIDROBWJWGALCFCTSEKSYWUBUNMVSXAWWPWBOOCMNYGJHVKHVPJGSUHCOYIFIKOYYKEM");
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 79U;
    const char tmp_tmp_msg_0_0[] = {63, 5, 102, 73, 22, -62, -34, -104, -70, 37, -88, 45, 126, 48, -12, -88, -28, 11, 95, -70, -64, -36, -28, 68, -115, -122, 87, -84, -34, 21, 29, 38, 56, -104, -10, 29, -18, 93, -63, -60, 74, 81, -81, 35, -11, 87, 58, 37, -63, 108, 96, -109, -65, -10, 68, -105, -112, 45, 79, -72, 44, 46, 26, 11, -115, 69, -124, 62, 23, 38, -119, -105, -107, -43, -125, -89, -24, -89, -85, -71, -34, 50, 9, -22, 18, 11, -53};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.882081228327);
    msg.setSource(7303U);
    msg.setSourceEntity(179U);
    msg.setDestination(22737U);
    msg.setDestinationEntity(189U);
    msg.type = 49U;
    msg.id.assign("QAENWDIFTQJCJNXCBWLRZXZOPJCNCFOSCREOTGJDMRLLXIVKLSSIBHFQTQMMIUGKUKUSVPECHRMGYWKXADVWWAYPWERDBDAYEZPJPQKAXFGGGQNPSJBOXQ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XNJCPQSIUDNMGYDZYPYDORFBWCWVVZJTBWVOEEADVNRCUCMXDOJZDVKAHLUGLPBWVVYQHMSAGMLNOIVXOESKH");
    tmp_msg_0.attr_type = 233U;
    tmp_msg_0.min.assign("IAVJSEOBGBTCLBIQRYZQIWSKVHHLGJOREEXTKNLMKFX");
    tmp_msg_0.max.assign("VMWBYWEYVCTDZWEADOAQOXABGHEPZVGQXWLIMNQNCTMURVTLPHZBFROONOMVDRAXEHYZQTDXTULLCKPNJRVAHPRGVAYIURIZJYNDIKCSIKFQMUNDLXSHZMCXLYEGTQSMRNJXGGVNSUHSKVICUUZ");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisStaticInfo msg;
    msg.setTimeStamp(0.854571867535);
    msg.setSource(37838U);
    msg.setSourceEntity(163U);
    msg.setDestination(23517U);
    msg.setDestinationEntity(114U);
    msg.id.assign("XIVWYYBWVMQWJIUVHTPEPPZOXVZZSRCKSIOXNQUQUNAWGZRVVYJTMNYYMQHCSBFVFNSOMOAYPLWLFAJHACMGVRLNQCXBZFHCXLVXXKXPUTMOGBZDRFHKZSYOJFZIDGFFAEDIHYHXTBWUTJLHA");
    msg.callsign.assign("GVBBDEGTELPFJWJYUSNXVJBRMOWFYDQPAMIJZHKEKGDLEKFDXZICORWUAABOTMJT");
    msg.name.assign("FQBHEKGSXHZMNXZGTCXBGGMKSBPJOOESYINZUFDQGLVKVNJLRMEOVMOVUIJRGOJDZ");
    msg.type_and_cargo = 13U;
    msg.a = 0.296983415127;
    msg.b = 0.908713420345;
    msg.c = 0.891284483639;
    msg.d = 0.363618460566;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisStaticInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisStaticInfo msg;
    msg.setTimeStamp(0.0991125381535);
    msg.setSource(5745U);
    msg.setSourceEntity(21U);
    msg.setDestination(46551U);
    msg.setDestinationEntity(21U);
    msg.id.assign("DRIPVDCSFXYPLUWZFRICPROAKSTZJSQXSPIXDSXCQBVKFTNGIZVCUBHGHWROIFVQKLJDATMVNNUNHBHLWPFLRKW");
    msg.callsign.assign("XUYFTRYXUYVRGPIOMTWNSAXIUTGVZMBDXDNRRYMJVQNJEAWIIHBCWSAGUFHKTXQENOGRKCIWJEZSOUVXLDEHOPNMXRAHYNCCQKLAOHVLHTJIMRLFFJXKHQRVSVCDSAOGSNUPWETWHFEIQJEHAWQYMWFUNHZZZGABZYCWYLSJIXUBPQAMGPBYBKUCFJMJYZNARXKKTPESTBQCFJOBIL");
    msg.name.assign("OUTXOEFVIQEFMWPAQXBDDJAJGBQPWUEXLUZYROIOLWHLKGFYWDSREYJXJASAWOWQDTTSZTNGEHAGSBBHEI");
    msg.type_and_cargo = 35U;
    msg.a = 0.745084279441;
    msg.b = 0.576935434039;
    msg.c = 0.933163646973;
    msg.d = 0.276873730589;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisStaticInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisStaticInfo msg;
    msg.setTimeStamp(0.70162962667);
    msg.setSource(56858U);
    msg.setSourceEntity(0U);
    msg.setDestination(21793U);
    msg.setDestinationEntity(142U);
    msg.id.assign("CGAWZIRJDCSFNMDTXBDRNORHXERPUJGUXMMFCOEXFNUZTLQLHOYGNRNYYJXUXPBVOYFMETFISDNDQCKEUUKJLCJUKZBMITMNBLHSSZVMHRAEGOFAWSIPHZGAXWCMHJOZGWPYVCETBCAOAKKHFPVNWGZPLQIZPWQNNBVILLICRXBVBRYUUWDJOIJ");
    msg.callsign.assign("EMXCLHJUXUTMKSVRFCRYNMAKYGRNTDTBBVUNBHXLEGTCSQWWCYJKMGXBOKWCFFWYWYILYBOAZGJJCDIGMKVNBIFVFZEOSPXENHXTUFQWIPONGZAPNGTPOEAUTUVQSGPDAXSSAPKDFEGWKHLDWHQRHTLNYAMLVFQPDHRAJEOQRJNSDLQIEW");
    msg.name.assign("FGYTTRZIWXTYNWGBCLQWEKJMNTHFNETDEBKGARSFUJADBRNCAQTOIELDQMHBMMIIYXLORPMZTJVKWMYBZKZVUBPCSSVASOSYVEXDGCUYHPZKSKZASWBUVZLLHOGGOMCXUUMSKXPTTPXJJTPRJIDOGIVFDABFCKZPLVKPLYFSIDVCDGGRHOQSJUNCWEFUOQEAWRIHLFNHXKQLQZHVWBQXYWJXNBDENFOAAUHJMODPPRRQIHVEGCAQECN");
    msg.type_and_cargo = 146U;
    msg.a = 0.428362670861;
    msg.b = 0.209561545876;
    msg.c = 0.602031603556;
    msg.d = 0.027822025132;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisStaticInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.550835515254);
    msg.setSource(42304U);
    msg.setSourceEntity(43U);
    msg.setDestination(57055U);
    msg.setDestinationEntity(80U);
    msg.localname.assign("FKTUCFRDYPBHWEZSBCKWRJAMJQDLSEHLTYQMOYUEDQXRINZCEQVYJTVNXFISTEIONDTURFAGVXYZJJMKWRQMLPSFXOZSAMCSWKPZTBHDWDJBBKMGVCKKLJYAEIUGXEZFMBYONPSAQUBWVUOQXALPRUHXIGAMTLSLPHNWGEBOPHZKRFVWUQTOCGONCDXVYWIHSMAGPAEXZWNFTRZUJSNIBGICOVXF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.518145114032);
    msg.setSource(41842U);
    msg.setSourceEntity(29U);
    msg.setDestination(23877U);
    msg.setDestinationEntity(219U);
    msg.localname.assign("OSGDFLVHJKJPBEOKZRPDMKEEWRAXQHWNBRCOYEUXZFSXQFJGCKJMSMAZPGUFFUPSVXCZBGIUTZZOSJXNYAHWQPJTIUBHGVUNEVKHITUIDOREXYDQYNFODCFVLYMRYNHISZHDPWKAJZWEY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("AZWCVBKDRWIJIGQBMVLIJXJMAUKOMVNAPECANXGHRDORLODGBLKUHXNGSPHFRWLZUYZLKFUNZOUIZOVTTDBXLARSEHZTSYLQCKGFZUAXYWGWJEHVMOBFLDMMWTWTBISEKPKSQEZXSVQ");
    tmp_msg_0.sys_type = 18U;
    tmp_msg_0.owner = 56709U;
    tmp_msg_0.lat = 0.397037297796;
    tmp_msg_0.lon = 0.233210005429;
    tmp_msg_0.height = 0.486668189557;
    tmp_msg_0.services.assign("NIZPISTPMVBOFKLSBRCCVMMMVGEUORCUKCJQJTWKERTYOKDDGCJIGNRSLZJJPWBKVQHENZAHFKUYCKGXTYYRUEFPUKCBSADISGABMWZDMHWNVYETORDHLNRAXJHKOSFNYTQRHZFJFUFMBXWRHPNEZQSIRMEDUTCBVIDVAACEGBAZPODQHSGWIJNOUMWWXNYXL");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.414641833398);
    msg.setSource(27144U);
    msg.setSourceEntity(47U);
    msg.setDestination(5164U);
    msg.setDestinationEntity(172U);
    msg.localname.assign("ECQSDVCOCKEDRDHLGCAKANHHUGKAWKRWXUVVMNIIMWOTUQPJPFNQGYEQJMNKTEZAWRVNHSBZVMTPOEJFYICDKJRYWTTIVNNHSTAYOGRMBFLYIHLUYLZGMJHVMXBPSZGDJJBEITLSHBAWDXJR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JZOUQDEVUXLZJMQCSNCRIOOYITYDNYASPAUZLJYEXNGODITCUMTPJRPDLUHGDXDRRHFSTXLGFPFZCMTQBUEQYVRKRJJXNCIEFAXQSYAWWNKSCKFKABHSSGKDLQZEHPAFACWBCUOZYWLWXIDVGZZATCOWFOEHSPHRYMFHJJLPONODVETMMXUESBRTDBBNIHTJYECPVYFWTKBAVGXFHSMBUGK");
    tmp_msg_0.sys_type = 226U;
    tmp_msg_0.owner = 5750U;
    tmp_msg_0.lat = 0.461099309334;
    tmp_msg_0.lon = 0.482535982623;
    tmp_msg_0.height = 0.163081531993;
    tmp_msg_0.services.assign("JRIFAZSEHBDBKXOKRGFOHNZEQVSWXGFFGIJYSYMQOMCLVKNXTPAPJPQRGYIOSBZXHPKCNMBZOPUEMXNBFAFIDYHOUJRRSHWYAEG");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.406473223531);
    msg.setSource(24449U);
    msg.setSourceEntity(182U);
    msg.setDestination(43318U);
    msg.setDestinationEntity(66U);
    msg.timeline.assign("JBUSLIOOCLXNSHWVLJSPYNGTRCKIAZJYJIWCOCOOHENNHLCBCQBFHXRWEOCQYLOFWNYSVTXEVZATSPIMUQRPWSLATZWOAKEOVPEATUBRDRZRQJVDYBWXZIZUIDPRRLLTPWCJQKAOUIHLNKDEKGHVVFQSTQAYZDQIEUHGVVFBDADJDIHPKUKRSDXTZPCDNQEFMYMFGZQUENGSTMNMFXXMXPLMYKMA");
    msg.predicate.assign("OMISBOOZQNVAALXPYNEHJBLSDWGYRROWSEEUONKTVKBTJRLACYQUXKQDDQIYFZAITDFWDKVVXMZVYHXNJCXFGMRFSBJJQJNEYWVEPJMNLUFCNUBQIWLMXLMJBTKGDGTTSPYYKXDQIZBRLSDNGFGNWPIKIMCRGHVCEKMPQTWANSOQTJFRAHVHTPUSWS");
    msg.attributes.assign("QANYNVCSLACCBVOIMXELRSTEGRNHQAVHIWVCYKRRXWZUPKQNLCMEMRIBPYCQQBXXJIEXCCXSHPVGFZSPTYYWQSKTLWMTZSNWRAUVDOSUWMYGTJGTIUEHFQLPIYHUMZPVSNGKNT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.110122610555);
    msg.setSource(8528U);
    msg.setSourceEntity(26U);
    msg.setDestination(33783U);
    msg.setDestinationEntity(100U);
    msg.timeline.assign("KBAXESYSQOIWOUDMEPBYCUWQFQVIHUYRNVLFCJOJQGZBELXYDLNKRVHQAJDPVEACQOQMGUMCKZZWIKSVWFRHSBVRAATVZPNRPJTLMZDFHHOINAGPJUKLWQNOEIBCRYITRFYPGGGFYEZXZNTIFXHSOLFSHATDGVMCKVXCMRTYRWUTUXJENBXFIYGDLBBKARWTZUAFQTOESUHQMCJNWSMCNLLMKLUJSMOTPIDZVYWXXPPXSJDGBNBPZJEEDCAHI");
    msg.predicate.assign("DGUSSUSZGVXNZDCFJLWWNQYFPBPRDXLABDJVZKUXGBQSIAWVZCFISOWMGXMFKOYOLYZHKYVLLJTAA");
    msg.attributes.assign("MCPBFKKBYWNWDTNAOPLAIZSLHNYPCMEXJNVDJSSLWZQZOEVFAXQWHKWUBAGTJNODELAVETEMQYUBNPULCYIKLNCHJDTSXQGJXRRQHQWGXDRYRVRKCGRJSYFOYSUNEDRHGQMVYGD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.531732035236);
    msg.setSource(22432U);
    msg.setSourceEntity(18U);
    msg.setDestination(18159U);
    msg.setDestinationEntity(97U);
    msg.timeline.assign("KHEGPAJIGGQFUDBYSTRVIZVLZBFYMZSKPBRJOIVINOYNWWOVKORXVXFISAMYQPHMDVFKDSTQJTTBXELRJGLZWOMYNTMXVPZBTHPKQMWRNJPUYLQ");
    msg.predicate.assign("CATRJPPUTVOBYXOVAFGYJPCOCZXDKPMEEJZCKOZNDUUIFLLNMSZTQIBSSHLWGXURYDCOAZOTINFQYCEICPESTMAYHZVWKYOVOGNWBEXAWRIMYJJFHDJRPMUXUSVURACLDQKLNMZREXWCWVGRQAGDMGKBSMSFHZQEMMBFHSGHVK");
    msg.attributes.assign("CTDHTDRPGXLROMNHKCGMBNQWLJIBSEDTAZEUNFGRLOHZAATF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.276816351707);
    msg.setSource(36887U);
    msg.setSourceEntity(243U);
    msg.setDestination(48964U);
    msg.setDestinationEntity(254U);
    msg.command = 98U;
    msg.goal_id.assign("RGGEKSGZPSKUNVFJBLWXACOYGOKBYWLMAHAYLIIYESVAPLEKFNKLRPSNUHYQBTQQJJPHKNPUJZOFHLGADMEFMUDYQLWEYCVMMVTUTKAODTTNEPIEEGQZAWNYMODWIIDXRRVITDIHBOFKFHPDCSHRDACVWRYQSOQUHBDJUCLBFWNQGJSKTBIACLHQSAORUWUPRRCCZXXPXV");
    msg.goal_xml.assign("NTBKEPMWDCXYEEABYGTBZXRDLUCHLIVZCMWIURDIROTMKULVGPDUQILTMVXINAHGGLVINWDCKFEOJPHJLQHPQOBORERRPOUQSRUWBUEFKIND");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.406346436898);
    msg.setSource(40143U);
    msg.setSourceEntity(119U);
    msg.setDestination(36212U);
    msg.setDestinationEntity(156U);
    msg.command = 100U;
    msg.goal_id.assign("YDPUYNHOIPFIRBITJNPOSNMZAAMGTGGNDSRIJHVSVEWUYTZPHKEWLWEMXDCRAPRGOBILHFGFNRUWGMJXBKDQMIKCKFSAWOUFGWYCURXXKITQQQSANCSUCIZBPSXVUZLEATDKCQZKUQGSMACJVOCWVNERPFVHDYBTHJDFFKHTLIKBGABIXULBXQSPFMOVTOXVLLYHQJKLRDEBBOARGZWFEWPXCOMZAQ");
    msg.goal_xml.assign("HIDFBTRTOJMGXLSTWADDJELCGCAZIFAFTGCQYOSVYOEYFHOSIRPHHCZNYYNBGZBLMDCZWQPIAPYENWZMJTNLFKV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.143533407786);
    msg.setSource(56809U);
    msg.setSourceEntity(208U);
    msg.setDestination(43988U);
    msg.setDestinationEntity(113U);
    msg.command = 10U;
    msg.goal_id.assign("OCATNNMHYDYAMMSQULBWTXMMFXNGOSEKKHIPYIVXVGLREYJHFCEKYDOQJXCWQBGDZPBEXIKLVOTEOIWPWKAVDZYHULNYALSTGZVRIXPYWWHCUAJTDKPDMSBBGBZPZCHJJLABNHQPNHLOERYNIL");
    msg.goal_xml.assign("RVNFLHZPWHKSRMEHYVKOYLUNBMIGQTSXQVNFKBCTKXBMILEYMUGXELTDEJKSOGHOHAWPYCPHCNIUEAPCAGYOOESTJTYGSJCFSBVTBQRVDKGOPBJALNOZFMDBTNYFHZDXLPRWVUZLYWZGJUQZXPVNQFWFSOADRRWRWINJTPSOUNWQIYMADIZJJQIULHXTQGZUHFVYAECMEQLKMRAMFSBJPUACPCZZIEHLMITXKQEVDUABKBCDVOWRDINGJGXWDS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.298831640883);
    msg.setSource(16699U);
    msg.setSourceEntity(231U);
    msg.setDestination(11908U);
    msg.setDestinationEntity(84U);
    msg.op = 15U;
    msg.goal_id.assign("HQBIHGNYVIDLICYCCEUVEMULOTZNEMBUHSBWKZCJHOXWXLOBVKXKWSBDAEBAWMMIJWRUGFPXLKHUHPPYQAGPBBHZKCDZTWRCPTVDRPDTHSLINDLXVJFILASFRSAAKYEFXGQNDJAJNZUNJOQKTIYRJZOGHOTVRCKSAGICYMPPQLMNGVQVUZELNXYIXRAFMCMKCEEFYDDASFZOLFUSZSMRUFBQG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IJIKBGQKRLJSTRAHVDYMZXRSPOMYFGZBJATFJSIQZWFHCMPSUNQOOMGXBEQGLQNDDHMQYUSTEGAAGYARCSMVNIHCULBIGCWRDXCITZLEORKTQTPXZVEYCXJZNYBYAVFFNFDKITNJOXDSPKVLNFEHAWPYZOUZYEAENKQ");
    tmp_msg_0.predicate.assign("BSVVWFCKINSCXQZPDELKAQHOMHLXTZUOAPBPNGEVZKAHI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JGMAIKYFYCDOGEKVISKCSEMAMKRQMWXSAXULNQXSETHUNKZALGDIDH");
    tmp_tmp_msg_0_0.attr_type = 147U;
    tmp_tmp_msg_0_0.min.assign("GSJPUWVJEZZPPHMJZQYNEMTWMUKSYHZZTTYPUWZDETADAAARBOXCINKQFOCFTGMLPOCJTMFWQSDCZMKNPICJGEPYKARXNHLACXDDDGKHQLHNLLCNJYYXBXFUHRGIXGSBXEVAKJDSWBZLQFWRESWXDZVXQJAHIIGOJUIIPNELGOSTSWNWEMVRDIHCWRNTOQRQYJMHKUXRLKDRYVVQABOUYUITPRFLKFIVBZSBBGOCBUPEVBGKTMHNUASOCVYLF");
    tmp_tmp_msg_0_0.max.assign("HZOJKTASFQHIPJXJFOLRMRYRELSCLLUDYELHNQYQTBUKDGBIMZVZXKXZQANCIPMITCJCPGJQGJYSNKIBWRHHCVWXBHATXPILWDUJXPMRUABORAIJIRJHLHVYGEWPMEEBULGGDVRRVYFQWDEXMAUDOKKPUDAGVCFNRFVFOTVIGYBAIGWZYNCXNMHKNTQTFCKTMASKNBPZSCXTSLYOZO");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.210434208001);
    msg.setSource(15991U);
    msg.setSourceEntity(24U);
    msg.setDestination(3939U);
    msg.setDestinationEntity(196U);
    msg.op = 205U;
    msg.goal_id.assign("KEQGUPMQUFPYOKLGXJEXCTYOBTGILQDZHKTJAAOJDPMZIOHGUMQIMKZPJPVMSJBCKSBCTWCNOXQOYYFSZUOUX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MMFOAENEUVPCNORJLXSJLNBUBIFSFFYKXJATTP");
    tmp_msg_0.predicate.assign("MYNNBIIVQCDFDQOVJMHWGVLS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SSAUHIULMMYHCEOWXTRBTNXAWMQEJNOAKELQLBILKLSXYUJBIKRMMGRINRXHTIZGETBBTPWFZWLPHNVZVGMSQDABLCVAQDFPKOSHCXPPNXZVSO");
    tmp_tmp_msg_0_0.attr_type = 18U;
    tmp_tmp_msg_0_0.min.assign("MXZYCSSBOWAPWRSIYQKEDUBWKDFAUFSEQCSNXBFOCZASMOGULJDZXIUPPSORELIRTQMXPTGLILYZQHMMNGEUAHJKYGPLDPMRJHRNTUJQJKYWWVIQTOPZEPHGZVVEKRSYXBUHKTQVIFWKECQOCNBBCRYUSNTJRVVPXHDGHWITKLKXAUWOQEETZBONGXGNBTVASFWFHJYARJRIGIADFZHJFBVNPMZVLCFDVLQHCWMMXZXUOLOD");
    tmp_tmp_msg_0_0.max.assign("EJFZCEZMTNVOUPTKETLHWUCLNBIYPLCDCIWXXCUHIMWNSWMKXXMMYZHVTKRZOLLKYBJRNXGDBCJAKSMVGBDMOFQLYJYKVURAGSSEQIUARDOPWERLDKSRKFQGFBGCGXTEJAAIOIUNVYLCYIGJTCZSBMJWHGVOOPEZXQKPZDDDTXTSHORDUF");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.943745158083);
    msg.setSource(10866U);
    msg.setSourceEntity(152U);
    msg.setDestination(10797U);
    msg.setDestinationEntity(228U);
    msg.op = 66U;
    msg.goal_id.assign("RGWUYCMDDGDVPUVBZLRCWQJBFUCHQIMSUZBZCFNIFAJVKEONECEDOZALLOINFHGVLSSTVCWXYBYFJUEIXXJPSFZWIARHOLNQN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SAASMUJTOKWLRIIMYJDTKSCZNJFJWZIYFPDQXLAHBBHGNNKAQSGABLJHTKIEFZSNOCTQPGHHDQIVYXPOYEFEAXNBGMOLTNFZCQKVGYXVZEXAIENRULQMOKGDWZSFSNIQDVVVUMMYBFMCOFEAQOSZGRCADVBCOLCUXYDUKREWFKXVNVJPZPRIAPMERZIJXRUODXYEPW");
    tmp_msg_0.predicate.assign("ELHPCAORLJHOOVGWAMTYWLRIKTDJJVLDVXDTABIAPRTFYIVCUQCFOVBNWWZEYASWYSAFUKLRORGLSFYQUYISEWLIPDPCOOMSKEMNMSDDXTEWGUOPCENMAHVPEKQHSPKTUJZHZHZFUIZMXRRGZRQYBAQTFFNPJISGCFGODAAPFZBVYSSMHCKEJQVUMBGZJKLXNBXWRKHMXCFZBKJXCWJGIVPN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AXPSMDBIMECSBSZPFLRROSMOPQXPBJFMDSKWINGLSFRJRLZOEHJNYQLGUFLTYLDFZUXZHLYSHEGBVRXIHIDKGYYMWBGGUBKDVWLBAQHNXVJYK");
    tmp_tmp_msg_0_0.attr_type = 216U;
    tmp_tmp_msg_0_0.min.assign("AZKTMAJVHOHTIPIEBDJOHZJGNQYNXRGGKBUYIEDTINAJVYZHQDPUKXDDOKYLNQKEUVWPYVUJMVNWNSFGEXWNYHLKFSORHMGZFRQUQWZSWCI");
    tmp_tmp_msg_0_0.max.assign("YFDCOWRPHLGLMTQFQQQBHWJPFAZZBCEWJBDNHCYVDLNEOHANWSILT");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.436036558679);
    msg.setSource(50659U);
    msg.setSourceEntity(24U);
    msg.setDestination(9399U);
    msg.setDestinationEntity(121U);
    msg.name.assign("TPZWKGSLJGJPQOWTMLVUXPJPUDZLCXXYBWBHXVCRTMPKAAGHHSDHVOOWAXCASBWXSGAIMCEXYDFZVTWJLVNKTINEBFAHHDUCYAKRJZEOMKRFIYZRCJGMKSUOUGZDBMQBIVFSTDLTXAQSCBFOTRJYUMGVGSHKNRENGTPVLSEHUCZUEWIDPUFKWPFMACAR");
    msg.attr_type = 48U;
    msg.min.assign("JNVQHKQXJYLLOJAORQZVIASSJNDDTJIHYBAQGBTXHDMBAJEOCLGIBXFCTBYTVUQENMFDIGQLMBXGQUXARVTZYVKBIKRTNPCERUGTZVSWENKKWFERLSPLOOYPEYGUPNBZZKHPONWMZVRFIRUGWHKAPKHTXDVWHZJEMCZCYMLCNXVQRDMSATUYIZKPTKEBSEQDFAHGZA");
    msg.max.assign("PFYVECEUITHIBHXOQPGABWELXAHJENFYYNMMOLNDQIPRLKGSMIUPAVGBLSNYOWEMMZATJVCKHJONVDYTRCIZKAVAFAEKNLXQJWBKYGOZXMFTRRVLPRTBJLWSQKZDSVUXI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.540208897739);
    msg.setSource(43720U);
    msg.setSourceEntity(157U);
    msg.setDestination(18197U);
    msg.setDestinationEntity(157U);
    msg.name.assign("XTIUADYFJWPSHVMPZPJRQWVBXGGLONFQRQVISWCLGLOWFXBWSPKNZNICVKYNRZNNYWFHMNWBDURTPRVZQRRPJPZHSKUACVGWFYAFYHLLELYV");
    msg.attr_type = 147U;
    msg.min.assign("DHILTSTGQPAEJMOKBFWXYSJUQFUWLVOFAMYWXUKZIBDSDIXFNBFEPPXGVBQNVRCLRUWPKHQJMAECMMFYFOJLVOWPLNGISQJNJSALTFDCXVKUYZYEPHIKRQQHDTABSGDYAAVCHGKPSVTRPBTITDTVJKHWZMGZRZALEGACEVIFROXZZHIIKXCCQGNNFQHDHOXKBOUDBMNXUJRANEWTUMBNESJ");
    msg.max.assign("ZIXVKWTQNBECTXVANMOCJAGKOSDLOQFZZEJEUSLGEBDEBYBQRCJZHFTNVPNRXJASILMWBVKUKLAHFEJCZOHNOQLTXYIGMBYKWFHKYIKMQIVMQKPOWETUMYHPGOHBBVINDZHYGCNWEOGKA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.638732559387);
    msg.setSource(14388U);
    msg.setSourceEntity(76U);
    msg.setDestination(38344U);
    msg.setDestinationEntity(253U);
    msg.name.assign("NYQHENQEOXVKMFKNYH");
    msg.attr_type = 35U;
    msg.min.assign("KIFHQZVMFOXERUFBRUHJMPRLNOVXLKVPOXBKPNGRWBLKWMCAPTGNVHW");
    msg.max.assign("OYKCYISAQXHKBBEHHWXPTEZOSGMJDHSYTPZNTSIMBZTCIYEAXPGFYHPWJCOXOAWORFYLLEEUAVJJHQBMKXOSFPTLESXDIZVZMLYNIQODVROVXDWPXAHQCQRITRMNWJRWHJDUKGBAJFBGZYCAMFCLRKBHUGWGLVZCSWUUPFUWVUGHCVQUUBEW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.0407589844222);
    msg.setSource(36719U);
    msg.setSourceEntity(157U);
    msg.setDestination(61332U);
    msg.setDestinationEntity(163U);
    msg.timeline.assign("RJGFYMSVSYCLZKCQNINRHYAXFMTCSPSZXZQRJEVCHVGVCDTWIARKPWKMNLBHIERDQAKFVSIOQWXXIGOPHOXJL");
    msg.predicate.assign("NNYCPASHWPYLEHXTJUCXUQPVLWRXAKDKPDTJELQTYOHMQBGROIBYGARQVGYLYQDLCKVJUTSKNCPTMDLDNDKAJQEZSTJDIGIFHIWNCCAFFJIOECMXOVGOHGXPCESWSTEWLPPXARMQEVZFF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UMBPMTGHUSCXNJLNUXNNOLEBRYAEMYPUEUCEFRUIMXGWYVYNNJKWJHNHBWZVAHMKXBFSHAPSARQCCWQCVOYVQOPWMXLSJKIYZTLELWVFTOAHDNGFQDPCPUVSWKKKEQCZXUXBGGPRIZSINTFDJLGVYULAFAQGFDPNTOTKLWVRBHASLGISTZETBYMXQQBAFOXHJ");
    tmp_msg_0.attr_type = 72U;
    tmp_msg_0.min.assign("IEOHADTOMRLPWPUNXCUIBGOTAGSPHFVRTBQQLPXWWMKQNVHGRZLSRJRMXLYXQHIXOTQXOSWXHYVOKXFBKMZUDNPKRVNAWAKLOLUBUTFRCYTHCSFGBYYZQYEIQWINUHPIBRMZVMUIDYJ");
    tmp_msg_0.max.assign("EPHBRFDAFVXMVDJUQLGKPOKCWPWZIPMBJVE");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.645967629318);
    msg.setSource(25686U);
    msg.setSourceEntity(92U);
    msg.setDestination(38360U);
    msg.setDestinationEntity(171U);
    msg.timeline.assign("LRHTTNEQKUKGKAPDXZTVMOHPMSLIKZMMEMOMJCXDJFBNXSUOBFOSGBYDVKCHLNXOIORTZQBVBVUZFTVSKEBRUPFLVKNJWXMXCVQDLEBCWLIWYSRVMQQXFIWBZPADHFYELSIOTZQQXAKYGYYGOWYUINUSJJPHHCDSAYGGHNGVEJIICUPRCENFREZGFRGLJNKWIHYCCUTJZVDOFIZAOSRHJPUDBQMRPAEPAADANXBTJXNYEQWTQLWKHDL");
    msg.predicate.assign("OGZCIHRIXRYPTATOSCSLUBJJQKUHRJWLXAMVQUASAZBEFUIBGLTQASJNLUAWEWFERBYKBGQGRBLEMDYQMYIWVLKFNRMCYNVBYEISCFCPGPFDLNEYDAEXDJFURWWOAQHNLDCEHTSMTXJIXEWPKVNSNXJMUOTJVIBGEVNTUFKGVOHJWJCMHSVTDZKZTNRQOVRMDXZATWMGPBPRXYGPQAHUCFOKSCZOHICFBSHXZXLUPVKONZP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.36881840143);
    msg.setSource(49058U);
    msg.setSourceEntity(226U);
    msg.setDestination(58864U);
    msg.setDestinationEntity(123U);
    msg.timeline.assign("DUIFLSIWSJECTRNAPNFAMSQTQKFLONWBKUUFXIUBWEJQKBRYHKHCAPDXIZSOMHWYLLKRZZJVJGQRFDAWBNAYFWMGWIXKDYNHVQSAOOBRTLUPGVMDYEVZQBCZZMGCPDGQTQZWPJQAHIDBWNFDOLOTUGDSTMMDQEC");
    msg.predicate.assign("XPAURDVBEDVEHREARXYIUJFWSPPCXGBANLMTSCYZGCLCIRFCWKQHEGMSZIJOWOOIFTNBCBPDXNVHNZWXYMMJXJQUBUSVSFKYEVIGLDWCZHPGQLLRJDSJOEODUZKTQYUGKOUZYNQEDHOKRVIKXIIBSKKFZLWTEBGMQDNCTXNSJQBKYNWQKFAEOXZMHJFMMEZLLJBBRASATFTWFZRGNMTUVVPIPJALWCVDCUQA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("VXGZRFQAAONJLCQPSUCMGHKTRNTSGUCBMHPMNSJNVONCZKAJOHFMWXQIURYTBMKBALXWDGZDYGOLYEBIGPVRLPWSEDSFQAJCTLJFUHNXKOJKIODEONPLQUZUFWWTUYTMHBSWPLTJSZBBAREGYFBOSZJXHUDYEO");
    tmp_msg_0.attr_type = 165U;
    tmp_msg_0.min.assign("BKXSUMQXNPDDNKOGEVZLNYEVOTTTHPCLFPMPBEVIOXXBVLRMSIEKRYNZRTDPIQTFNKCAFZOUSQXRWLHVJPGRZUFIKLEVLBVMATCBRFIQSYBJIDJRSIWTRBUCZYHHJNJPPZWPYBRCAFGYWEMEQLVOBCADEEXJYUKKOARDSGFDFOSHKJXTMDUYQCUCQXKTSFGOMUZUINMASCZGIWLLHQUMNJ");
    tmp_msg_0.max.assign("NZYGOOLVSZTOOYJWNCDFQFJQZCLSUWTKACVGSSFFKQXPKYYPMINGJRBMUBEIUQPGDTCRYBABOJGNIXQYROSFKYWIXCJTVVGBMXPVLEMQGCSDAAZWLEPPKRSXMONKDYKJXFNETGSVVLRZRWFPVFDIVEZUBHNCPUXTPZNABXITYAOIDSRQETULHUIBAUHDRBPJMTSZVWGQOHCWIHHJEITHJXZLHFANBHWGMYWLMZQHWEJELCOEDRMN");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.786828855131);
    msg.setSource(45307U);
    msg.setSourceEntity(113U);
    msg.setDestination(27262U);
    msg.setDestinationEntity(103U);
    msg.reactor.assign("DWEQLGIFIFB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LTPWGOJOJSUBNMJZSMYVLBHUNRJNKCQLYJXKHANGTDXEFCVHVIXZPQLEAOCMIBYQLQZBMWTVNMUAEMQFFBRHJTCQOXKWDDGRMNGSAXVRANCLVHGBRITSPCCFFMXDSDLIKNAHSPDPASUX");
    tmp_msg_0.predicate.assign("INYJXFKGGZMHNUOZOLGYKMFIOIDSZFCBZQTNTOSTLLGAUWCMZSSSFXRXTJGDBIRWWLJUBOFXBBRDKUTQJKDTEFCPIAVCAPMSABVGIYCDZVVGNVZVPKJQUAYAHGPILEROYCDBXOQRXWHNJECHOVSKJRTHETJEEJAHKQLFNZVSUIQLGCXXKWMFEUMHVBMAMCGPZPONWYCDKNDMXYIWWEMQLLEHQZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UQRWUANNCLHOTZWLFWMANUDQCFQKHISYOKAWGFFXIWGUVZBHHMTDHFZBESJWJPNSGERPGNKDWGFCKUQNWB");
    tmp_tmp_msg_0_0.attr_type = 62U;
    tmp_tmp_msg_0_0.min.assign("JOTTLNZFXLKOUMQWXVKFOPWSEOMIPGKPYRBYTWJGC");
    tmp_tmp_msg_0_0.max.assign("XVJLTNBKHNEEWUOKLVQDOCKDGAHNBZWGLDIEOFPCBWFCCTFSWZZLXMBPOZITXFMXUZYMYHOYHGKVMNVVPODGOFFTCGMLDPRKKZNDRZESSAGGEIARGSMYKFONPGEWNLNYMKJLVSKYQCPVRMBAFXQYBXNZJRDWJFQSUIDCBUWSOXYEQQLUXEPOTIVBBLUIBPALNRQDCHWCHVZXECAQERJRUFUTDYWJSTZSTMHISWPAX");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.420958525567);
    msg.setSource(5039U);
    msg.setSourceEntity(74U);
    msg.setDestination(33890U);
    msg.setDestinationEntity(176U);
    msg.reactor.assign("TWWQQKKWLXDIRJGFYEJBOIDDNVHCEFOKNYMTABPYJQMOYRUXNNWAZEJHTNCBSKYBDBMFS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CBBVASMQGHFODSYEXXAKAMJSWCPSOPBROLJOXPJUKTTTEXKOTXORBMKXUQCHFPBCYCJQNOP");
    tmp_msg_0.predicate.assign("LOGKADXXPIJRAUBAPQYUYZZBQYHRIBAKGNGCRNLINMQESYPICZKDIAEHMTBJKQPQLGAGCALLDALHTQHEOJUVCVDPZWKAIKKXGJBJWVMPFDGQJSGKTLTTIPOBWFTXNXFMSSYWWDYZTNRPQIUSUJXRRZSMVRCHCFBWNEECPTUOWMDYTWSFSFGADLFMMRO");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.0455854852256);
    msg.setSource(22130U);
    msg.setSourceEntity(180U);
    msg.setDestination(40177U);
    msg.setDestinationEntity(5U);
    msg.reactor.assign("XHIYFKWYNMAIPMUKUACEGUPJYTYTCZJPGSGBBULWOFUKMFESCRBXWRIHKACWQJSNYHOJVVPAVWYIMOCFXYVTMOLFFENPLURJXTSQLLQNDKRQHVENFKVLPHDRTRFCGOJODSAHAEPITZMCGKILEYDVPMNBZEDFQEURWENWIXNIUGUSRCBSNSMYQIBDCFYXOTKBRHPTJQOOWMGIVZLXVZADKZETJKTDZJJAAZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.454209436458);
    msg.setSource(15465U);
    msg.setSourceEntity(164U);
    msg.setDestination(20328U);
    msg.setDestinationEntity(147U);
    msg.topic.assign("CPIMECGVWGMUJLXTFDPGOLAXEYPPFRYYVTBXLCKYOUMROQSWNFVIGCVPMDGWRQIZQRUWYBRFYCAQFXRDKTSRJRCJTBSHZKDHANMPTDPIZNIOHDT");
    msg.data.assign("FYNJUXEKZRDMVXIQJTUXKJSYAECJGGCKAXCCNQLDEHUNHZTDVOFGIDVGSLOGBXULDNYBLFMRFUSPRDWRRQKSJRLLHQZOLJZXUEMTPYIOLGMHWWXYBRVBFYNVJLJBTXVNAKHZIV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.110943160196);
    msg.setSource(51246U);
    msg.setSourceEntity(180U);
    msg.setDestination(23138U);
    msg.setDestinationEntity(144U);
    msg.topic.assign("BIBASCJSGTDXQRQIPTHHRTQNBLCWLVWZSUOMPTYNGQCEOKFXWBLRJIHEAFRGMPXDJEUVFUFAEJODRBNJSKCGGBVYCKRLTPGWJECGFOPPEAKYOXWRU");
    msg.data.assign("HISUKAHJOKQFNEVEPBWAVBQYVTQRXDJFDCXSPZRDRJKGSSLIMGJUNALYZLFIJBHTBOYGBVKTVGNNCOGDBPTJNYTRFERMPH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.305410056785);
    msg.setSource(40481U);
    msg.setSourceEntity(60U);
    msg.setDestination(54221U);
    msg.setDestinationEntity(145U);
    msg.topic.assign("XVLYOZEOPUESJIUPEOQUJGYAPFDGLIMXTEQNBGWQPHBSFRTFCNBQQZKJNMITHXFOHXSYFBCKEUFDDKAVTMWWVEBKSLLWEMRDNTBFCWVGLQTNDYHFHZCIDHPIXQ");
    msg.data.assign("BCUBITUKSFSQPZFQHXICCWNNNRVRGXYEDJIXXNIGIQKQEVFMTXLSTLCPVPJWNABLHSSDGTZHGKDPWVRAMFJSZZVXEJQWTWTJFFQAJHKYVRLDUAGNODFYVHMDZHGRJLXPFWTZONFTNLXOCBRTI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.545350487801);
    msg.setSource(6964U);
    msg.setSourceEntity(221U);
    msg.setDestination(17589U);
    msg.setDestinationEntity(214U);
    msg.frameid = 26U;
    const char tmp_msg_0[] = {-2, -127, -86, -42, 106, -120, -94, -62, 109, 84, 1, 39, 27, -115, 91, -80, 44, 51, -92, -9, 19, -103, -74, -40, 95, -49, -122, -93, -82, 114, 97, -79, -30};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.170296918601);
    msg.setSource(9048U);
    msg.setSourceEntity(131U);
    msg.setDestination(10654U);
    msg.setDestinationEntity(59U);
    msg.frameid = 3U;
    const char tmp_msg_0[] = {15, 43, 4, 30, -57, -73, 56, 63, 43, -123, -9, -97, -79, 88, -80, 39, -56, 67, -24, 64, -17, 34, 104, -111, -61, -29, -18, -53, -116, 50, -109, -9, -66, 103, 68, -31, 17, -31, 10, 118, -104, 88, -117, -119, 45, -99, -51, -96, -27, -109, -39, -83, -120, -116, 121, -31, -39, 21, 115, 105, 51, 101, -100, 92, 99, -64, -15, 93, 30, -85, 40, -78, -123, -119, 65, 85, 102, -33, -104, -98, 126, -48, 54, 46, 39, -25, 58, -99, 46, 8, 8, 18, -125, 101, 60, -123, -10, 110, -109, 29, 8, -116, -42, -63, 98, -21, 27, -101, -127, 23, 28, -21, -29, -93, 98, 114, 34, -124, -63, -49};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.752107239991);
    msg.setSource(14412U);
    msg.setSourceEntity(152U);
    msg.setDestination(58706U);
    msg.setDestinationEntity(170U);
    msg.frameid = 188U;
    const char tmp_msg_0[] = {-29, -84, 90, -4, -78, 11, 0, -60, -72, 46, -6, 101, 113, 83, -113, 10, 22, -121, 80, -41, 55, 46, 83, 111, -115, -82, -97, -28, -36, 35, -69, 22, -49, 121, 120, 84, -55, 99, 121, 3};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.92189851696);
    msg.setSource(53598U);
    msg.setSourceEntity(20U);
    msg.setDestination(62565U);
    msg.setDestinationEntity(214U);
    msg.fps = 29U;
    msg.quality = 113U;
    msg.reps = 87U;
    msg.tsize = 43U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.518681606164);
    msg.setSource(14078U);
    msg.setSourceEntity(40U);
    msg.setDestination(52805U);
    msg.setDestinationEntity(241U);
    msg.fps = 140U;
    msg.quality = 99U;
    msg.reps = 241U;
    msg.tsize = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.14887590528);
    msg.setSource(64880U);
    msg.setSourceEntity(113U);
    msg.setDestination(40515U);
    msg.setDestinationEntity(164U);
    msg.fps = 160U;
    msg.quality = 191U;
    msg.reps = 200U;
    msg.tsize = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.39764493897);
    msg.setSource(26266U);
    msg.setSourceEntity(147U);
    msg.setDestination(28389U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.916528217246;
    msg.lon = 0.956913986621;
    msg.depth = 48U;
    msg.speed = 0.541566718985;
    msg.psi = 0.722799899938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.420741024047);
    msg.setSource(33112U);
    msg.setSourceEntity(29U);
    msg.setDestination(5267U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.202837148647;
    msg.lon = 0.395242567711;
    msg.depth = 45U;
    msg.speed = 0.677457251149;
    msg.psi = 0.435475735505;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.815456417066);
    msg.setSource(35563U);
    msg.setSourceEntity(244U);
    msg.setDestination(4158U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.0515284284085;
    msg.lon = 0.0783793404296;
    msg.depth = 179U;
    msg.speed = 0.840143027006;
    msg.psi = 0.690053286489;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.997395499954);
    msg.setSource(43271U);
    msg.setSourceEntity(74U);
    msg.setDestination(32557U);
    msg.setDestinationEntity(246U);
    msg.label.assign("RTHOIOZBFRMLPQRHXKWOGQSAVCCZFFITHRZHSUSDBQWIVJKJCXWJWSWZATPZOLBKXZHGXWBXDI");
    msg.lat = 0.0630157072226;
    msg.lon = 0.515535063458;
    msg.z = 0.94331682023;
    msg.z_units = 200U;
    msg.cog = 0.730678830009;
    msg.sog = 0.559252994097;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.141114889153);
    msg.setSource(41664U);
    msg.setSourceEntity(218U);
    msg.setDestination(29994U);
    msg.setDestinationEntity(194U);
    msg.label.assign("KMTIXWQEJZTOWRPABJWAMZEXNIZMUCPVNHVXEATKKSXMKSUHDEXVVRPNFNDSLLR");
    msg.lat = 0.600804626276;
    msg.lon = 0.833925505622;
    msg.z = 0.144552503678;
    msg.z_units = 160U;
    msg.cog = 0.424070208499;
    msg.sog = 0.139685819059;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.802910768732);
    msg.setSource(7803U);
    msg.setSourceEntity(211U);
    msg.setDestination(57973U);
    msg.setDestinationEntity(126U);
    msg.label.assign("TLWCXPRFOZKIUMPNFJSFDZHUSWGTJWGMZAYHYBBGIBFXDDQNXFESLXRFZCQMRIZOUYMCUVNNCQXWUICNQEMQODVPPWEOACVWDXOOUGBEUHSYEGJAQWATIETMJVTYJTFWKYICBHLBROERGYZKPHCSRVJREBXNGKJKJSLHTJAAK");
    msg.lat = 0.526784762872;
    msg.lon = 0.286320901289;
    msg.z = 0.159156784751;
    msg.z_units = 108U;
    msg.cog = 0.793854247348;
    msg.sog = 0.220959054125;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.804437775183);
    msg.setSource(18671U);
    msg.setSourceEntity(253U);
    msg.setDestination(19714U);
    msg.setDestinationEntity(166U);
    msg.name.assign("VCUFNHMUNCTQYTFUGQEWYDQYMSCKKEKONPLYVQNBJGWFIHOPVZSNUFPJXQDLGURFTZAIUWSZRTW");
    msg.value.assign("IOBDMGFXEYKRZQTMEYCHNICORFIVNJGDKBBUEJJYNGZSNSOFTPLLVURXTHBAOJITPKOFTFOUVQLUJCNVBSGORKGACVUHNMGEBTOKXWCAAKSZQWRKWSMMFYEUDSQQIEMYWOHXYAJMKZMBTQVWCUUPXVPGDZLBJYWFPQDXLGIMRTLDRUSHLOKIZPHIDNQWPJNSWIEUEBJWCHDRTQIXXLVSAWPAFGPYHAFRGDZRXNCZXDNCYTYZHV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.231460507372);
    msg.setSource(58318U);
    msg.setSourceEntity(159U);
    msg.setDestination(29762U);
    msg.setDestinationEntity(102U);
    msg.name.assign("WVHAKVEFSNJVQXZCCKTERUPGTDZDWFJADGMWHZGNLKRKANUPAPEGXMKQXLSRDCLCTGLYRELIDEFLSMHOEIZLNYSMPNTUPWTBRRISBXFUFWMIKPVNXIBMAOZVJJ");
    msg.value.assign("FZQIHAXQRTDWAAFHYTMJHYIBZKKSUPPSOHVIRVUWNIFXKXSCLRDLPEDKRYFNFGMTCHSELXTDRYPUWCCVWQWCLZWLOHNEBDJZVGWTNGKLIABIZDEXCXFAZAWLYZJAXHWHNLMMQMBCOOFUXMEUQRFPRJBYERVMTBAGGGDM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.533928771325);
    msg.setSource(2009U);
    msg.setSourceEntity(102U);
    msg.setDestination(60195U);
    msg.setDestinationEntity(98U);
    msg.name.assign("JQVBGHRRFRXGITKEPWRZHROHPEGTPOEXGEUJL");
    msg.value.assign("NKJRDZUTKZGLCKJOBU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.711447855876);
    msg.setSource(55434U);
    msg.setSourceEntity(103U);
    msg.setDestination(53753U);
    msg.setDestinationEntity(83U);
    msg.name.assign("TUIKUSYHMGLOXDQQHPZEVUTULOVCSCYYWHDIQFCDOSJRORGJXLZOTVIYZAPJKWDYAGWLAEMBRQJWQIGPOBKCYPZNFCGDEBEUOIVWEPVZXJCONKRYISHLFRIIJEVDFELNBEGXQGDMHANSQLNUVISMUAWUNSPMXLKVMRADWFZOATBWBUBKRGASTJDX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EBWOQPTAJJREJPEGFIKSLPLKINRDYIGUUSQFUNVHIOEYKJZGGILNAJKDAUQNHVMCASELGLMFIHPXVQITRRYFYYXCBBK");
    tmp_msg_0.value.assign("QZJDZWJEVAIVLSKGDZFRUPIVXLFVKTVZHALGAAPDPCRQMFWWVYZJSMMTFAAVHWXRYJMAPRCSIMSKSKLXQHCKBMSDNUJTNPSNGODQWTQLLUOERQBBDTEHEJHFCGMEAIEQMCIXB");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.815556006168);
    msg.setSource(33629U);
    msg.setSourceEntity(205U);
    msg.setDestination(31121U);
    msg.setDestinationEntity(254U);
    msg.name.assign("ZUIFFTUVPCJABVENYCLWOHLOQNSYLNIHIXIIMVRKTHGNNZAHDOZXGJLOSNAQJVTNEURE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CDCPGFTMQBMUJSNZRKDMHMMOBXLGJJCHPSGLGKFWKUFVSYCTHHPFRKSLBRWINYJVQTQUDUTGFYMMKWOLQXEMYUQCNXWNXXTHHWPBVZMNDAVJAOQIXTZQVTUGEEEGSOTCLSDP");
    tmp_msg_0.value.assign("UZEDRQPUOVEGIQVSNTCVKAFBCGJQAZDYDYTNJQMAYHZCPBSMACLEDBWJMQYRCXSPGTHCAOEWFPBWFAERULBNRXNLWBEZRSKEFGSUXWVECSDDEIJGJVNIKRLYONWZRYDKLGPQOUNSSHHKYXFCRQ");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.641335927881);
    msg.setSource(35751U);
    msg.setSourceEntity(213U);
    msg.setDestination(53200U);
    msg.setDestinationEntity(251U);
    msg.name.assign("FTQBOJDGXKKZMSVSCPRVSYVFEJZLEGZZLOHIAKZJEKATRKGSBNNUUQPTPTGJHPPUVRZMDYSTPICBITMIJLBHWEYDRVEQUXPJQCBOLJNTYEXUJEYBAALWZDPHLYNODKUZYKZRCMAAIFGSWFREVIUEQEQOXAXMXLCKQVWOUADBPMXTONICDALZSHQDGRFXNSLBAIMFHSDVCOHHTLVGCUNWMNWONFDJFFOMRYPMFKWWCQG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.79132977122);
    msg.setSource(29397U);
    msg.setSourceEntity(189U);
    msg.setDestination(6155U);
    msg.setDestinationEntity(176U);
    msg.name.assign("BFZUUTXWRINWJXACPFFKYMVBIUTWHHEJFXDRSYRTOVNGACUCAGCPSFDDZGEHGIFSUJQGRDKSQEBFOWGXVCYLKPXZBYUOQHLCKDNNAGPZILNMBTHNLZZIQLNXPFVMMQPGQKEGJRZKRTQUPIGWKAWANAAWMDREUTSVOCURBOQYXVPODBDOSENQKKO");
    msg.visibility.assign("CAFIIEUTVILAQXGCGAMQEBXYUTMPEPHBYDQVOMWTNKINRLLMINAOYKFEJORGIFCDFWOM");
    msg.scope.assign("WIHQNMKZZDZRYWJQTMMQJZNPJDAXSHUGTCKTWEITXENTEFIVBHEQCGOKSGQRFIUXBQSRVQYELDSVAWVOCHHGWYDLCMYKELCJBOAGHOEQPHCFAKLLQFDJRXPOAUPBQDXVIFNCIYYIGXYLSRWLNPZDTNWOCPMHTFUEUAGKAUOYHUTPWZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.723189548445);
    msg.setSource(62387U);
    msg.setSourceEntity(169U);
    msg.setDestination(4267U);
    msg.setDestinationEntity(81U);
    msg.name.assign("BCBTYQFURURRQCZYOUVVXLFHLKCAICSFZAOEVYSTSSNFSJWTBWWZKJAPMLSNXQXDRMCEKFDGYLVHINBIPGMKLWIJLDKGOBXTAUIGZZIQNGUICIEQMHXEMWLZERMHSGRT");
    msg.visibility.assign("AANARBCGJNGWXGULQKUCXWKWIZNWQPLYDETIRVQNEGFSQEBUTSOBOSPPAGCCBZLEPAWHCPLXXYYKTXFREASMSDEBLFPDRKTAYFNCPYQPJTUDLRUVSDOTCWZQRVIGZNUJHZWHOCFZOFXVSUOSNLKFEAOGWJVUHLOHPYNBJMKFKZRHYOMXTBRVHVWX");
    msg.scope.assign("VODYYVIXDWEFGANZUKIEBUBGRAORVDQXKHGQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.214886385798);
    msg.setSource(1944U);
    msg.setSourceEntity(218U);
    msg.setDestination(16386U);
    msg.setDestinationEntity(130U);
    msg.name.assign("GQOGOKHALBCWOJXCCFLFRQNXMAZMARSMFGESTQRDZVHBYDZOAOQCMYUNHFAYXYSXHPIDIYSJTZYJDGBFMNJGEADOERVAWIURPUCLQFQ");
    msg.visibility.assign("ALHDORWOVGNEHSBPOKCCLTMWMVMXUDYSQOCJYNHAZBRVKUADINEBHHIDIPSAUZTUWWSATZIPRMNEELOVVZXWMBFYOCPPMGXCDABZYKNWWASQHILGGKUEMPWNJSCNSHX");
    msg.scope.assign("HCQWSPWLXSVVPRDDNFIAFLIIPGRNQFJCHKRKHJFEVOSMVZGEIWCRIMRAZOMOMIVDGNATCAPQBNXDPEPGCRHBLNRUCUSZIUOMXYRRAQTDHUTA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.223852389364);
    msg.setSource(16402U);
    msg.setSourceEntity(153U);
    msg.setDestination(34492U);
    msg.setDestinationEntity(4U);
    msg.name.assign("YAYSRCTBASCLWAGMTHDEGUTCJMXLQSSFUC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XTAHKOIWLTJBXXPMNMWIUWSZJRUYQKTZPWOALHFXNWESVNZCQUEFYQBSEWKBLIUWRRDLCRPDQZCJNCGNFWLPIALRHAEXKHYOOQTEOXLDTFWZHLNPZBIABSUZJXGBGKAZRACVHFU");
    tmp_msg_0.value.assign("YDCPAMUQFGDOKLBEHFPPJWBPXPPZAHZSDXIAQEDIGHIMGZXMIONQJFLOBYGADNNXTKNDGBOFLESYUTAROXCTKFTPLRJZMQVPYWXJENGSPVUCRGAQZWTHYFSBWZAVYRHUXDLNBNSICKLUHCUKMQXJOKIUJDPEVNMKBYRCUJMLQZVLSOCUOMKQVFRKVRRCFSWBSNES");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.0520581760484);
    msg.setSource(44028U);
    msg.setSourceEntity(8U);
    msg.setDestination(58883U);
    msg.setDestinationEntity(170U);
    msg.name.assign("ZFKRWVBHDKKDASNNALICAXWQSLJUCEOZTDCZDWPQLOLIUZMNVPUBTDIAMUAZPOGJLTXGWPHFUJHVDXGBMBNDIJVEVBPEFIJFJNRGEYYXHUFWFXWVQL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WJETTSCAVRIMSKKGNBZWJITBYYMTQFRFUZJXFATVQUULFIQSDNDCKWTHSDOPBGLHFOHOMMJZEQBPCCCOXJDOHYNMDUFICOKUSXELMXBRGINZYBIPDBZNZUPNWKCDUDPQUVAVAPFGKAXLRHSOGHVXEGUKYJRSLWUYLKZNEBRSSHDRTBVWLRVVQEPWNMTILEJXFYIMCRVPQWFAWOHGLAYEIXAGZQTXGFJASIPVNRAZCMOHMZYNCHDK");
    tmp_msg_0.value.assign("ULYVHUDWXGPJQEBMILQFBHJLJFTIZRTWWMCBEISOQEDLMEOXIFGAZDHHOLCYLUMZBFTGRVBCDRGTERCGMLUCFBKGODWXSTUIGXZHQACATOCDAZKYYSSNUJYYIOMLJZTBRWVTUTTJJUDPVYGWFHIRMJSGVNXAWONBISNMPAJEQWYUJBMFAQSKHNPCFKYQQPHPVDYVKEOKUZRKVOISHZZXCGWEPSVSFBAMLKZHXNONAQPLN");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.815843362697);
    msg.setSource(58435U);
    msg.setSourceEntity(218U);
    msg.setDestination(49165U);
    msg.setDestinationEntity(28U);
    msg.name.assign("VICQJAXTGTWOOWOLLUZTVTLCTFZSHJXRSUCCBXFCTZIDQDVPNIKFAFLLSKZRQUGBNYWYJUORLGDABDDEZWPQMNQFPQYKSQFDHRWMAINJSXJGDYOVEKAMYVLIGZEVXNKZHENUYMRQLZTJPUNXQXJRVCIKVMKRHHDRSEOHNCFSPOANQTMGDMCIPXOAICVWLPHHPWSSBRPCBMXBEUISWYLDJEAOTAMFUTUFKWJWKZYRXVYNGAMUPGIBBEHEBGHKYG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.369076598717);
    msg.setSource(5573U);
    msg.setSourceEntity(133U);
    msg.setDestination(16682U);
    msg.setDestinationEntity(160U);
    msg.name.assign("GNBWILJCYPSIBZZGARMRVUSXSEXBHSTSAXQIMMXIMHACESHBFEMPBNJNAERUIMCTPGCYWQXVIXLLOYHUKZPVZOBZXUUWVWJXPYNHJKCTIMJPJYFAQHEOKDDYNFLFYRTQONKAOJZYDUOBFHQLFANAEKGRNKPVIALNIW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.144564763533);
    msg.setSource(15147U);
    msg.setSourceEntity(128U);
    msg.setDestination(53343U);
    msg.setDestinationEntity(39U);
    msg.name.assign("XVEGLXQBXFMJCQFCPAKAXRONEEVZYELTZEXUUYOZLHKMFQFXBOLSQWQNDCMZRYDTTQPEETRUHACSDTVJJVAMNSOMWILACGYGDYHTYULPRGGWJFBOGKKJIYBWPBZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.109729790975);
    msg.setSource(1536U);
    msg.setSourceEntity(233U);
    msg.setDestination(6540U);
    msg.setDestinationEntity(140U);
    msg.name.assign("YABCDLDRCWNFDLHYFFPCUQANNBKDFJBXCGBCQOYGXFVLAUSIKZRZYZIQROZHHCSKMEARNERZIHUGHUICPAFGTLULZMVOYSKHEVNWIEVCSFXBKOPUGROYZEMTBLNHODWTJIVSLMPUTOAWEMILQXNEXVVQETMFDRYAXOJVMGRTYJINXBGPWK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.784588414445);
    msg.setSource(38570U);
    msg.setSourceEntity(181U);
    msg.setDestination(53782U);
    msg.setDestinationEntity(67U);
    msg.timeout = 2543106884U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.638024106413);
    msg.setSource(11499U);
    msg.setSourceEntity(173U);
    msg.setDestination(39842U);
    msg.setDestinationEntity(235U);
    msg.timeout = 1757909635U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.110548187026);
    msg.setSource(5911U);
    msg.setSourceEntity(11U);
    msg.setDestination(42733U);
    msg.setDestinationEntity(114U);
    msg.timeout = 2370417477U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.775446965879);
    msg.setSource(2332U);
    msg.setSourceEntity(195U);
    msg.setDestination(12903U);
    msg.setDestinationEntity(142U);
    msg.sessid = 2645037915U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.268562491521);
    msg.setSource(57845U);
    msg.setSourceEntity(87U);
    msg.setDestination(55861U);
    msg.setDestinationEntity(249U);
    msg.sessid = 3153570488U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.316662098577);
    msg.setSource(38866U);
    msg.setSourceEntity(246U);
    msg.setDestination(20598U);
    msg.setDestinationEntity(59U);
    msg.sessid = 492319366U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.718658312715);
    msg.setSource(44743U);
    msg.setSourceEntity(162U);
    msg.setDestination(22650U);
    msg.setDestinationEntity(107U);
    msg.sessid = 3937757249U;
    msg.messages.assign("XNBRLPUDBTXADQRGLKLORTZDPRCRPOXTBERZHUGWKMFGDYFFJCWJIPAIKKSOMIYEVDGRSSWVOUZNXTHSUXSXKZQZQQVNTEPDZFJUCGNXBCKJUCLKGFLHALFBASKMWMEBHWWJTNSNVUUYZYA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.630989841871);
    msg.setSource(7524U);
    msg.setSourceEntity(237U);
    msg.setDestination(54039U);
    msg.setDestinationEntity(205U);
    msg.sessid = 557492493U;
    msg.messages.assign("SMVZACCMULPFBSJUFMJHQVRFGNFWABBXVWLVXSGPXTMNABBIHYCNUUECVVIDOIISJKWLXFHCRYHLLIPBGOYTHFZFDKAFPLSUUNNZDDIAY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.221173317569);
    msg.setSource(30162U);
    msg.setSourceEntity(127U);
    msg.setDestination(29344U);
    msg.setDestinationEntity(91U);
    msg.sessid = 3182753917U;
    msg.messages.assign("RFIQSNFDSUJYJQLFGKBMPXIYHBASLMSJOCWBHARZUOJDPFLFRHISNKWXCLACOYEFLGNOTPPXKOIOJWKBQGDNNWUDUSTQUGBAUSNGZLCJYLWGMFCJSAZQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.239873702805);
    msg.setSource(17840U);
    msg.setSourceEntity(225U);
    msg.setDestination(26984U);
    msg.setDestinationEntity(155U);
    msg.sessid = 3861574051U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.467508782068);
    msg.setSource(13642U);
    msg.setSourceEntity(124U);
    msg.setDestination(14813U);
    msg.setDestinationEntity(233U);
    msg.sessid = 2827423532U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.57038136476);
    msg.setSource(32501U);
    msg.setSourceEntity(26U);
    msg.setDestination(42570U);
    msg.setDestinationEntity(253U);
    msg.sessid = 3248801112U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.46765345968);
    msg.setSource(7771U);
    msg.setSourceEntity(77U);
    msg.setDestination(60153U);
    msg.setDestinationEntity(196U);
    msg.sessid = 747049058U;
    msg.status = 142U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.206185992874);
    msg.setSource(47701U);
    msg.setSourceEntity(29U);
    msg.setDestination(58243U);
    msg.setDestinationEntity(70U);
    msg.sessid = 1673261774U;
    msg.status = 142U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.571251255053);
    msg.setSource(46099U);
    msg.setSourceEntity(49U);
    msg.setDestination(10667U);
    msg.setDestinationEntity(80U);
    msg.sessid = 3457669319U;
    msg.status = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.152095146934);
    msg.setSource(30969U);
    msg.setSourceEntity(121U);
    msg.setDestination(42872U);
    msg.setDestinationEntity(90U);
    msg.name.assign("WPAMCRPMBHMBMOQLUXXHDFPFJRKMIQQABIYZDCAEFVYPIOUWFBYGDMWPIKPJENKFCVIGXWEZISOEHHVAXGBWYZWUFZTSRTKTOSPPSJTLNHMOXFVRYLGSVKUFQKMRZSOUATVNOCCSRZGEEYGXMIKGBBXNLUUCHTCZFIAJVYNNBDBKVLVEZRZHISNLCUVKQXDQEJEJIAJSOCAQTKAYBDTOLZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.744627032785);
    msg.setSource(62093U);
    msg.setSourceEntity(119U);
    msg.setDestination(274U);
    msg.setDestinationEntity(32U);
    msg.name.assign("BGJIUKWETPUYVCTORYKGVDAESXIYQSXW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.54195074121);
    msg.setSource(56158U);
    msg.setSourceEntity(68U);
    msg.setDestination(51921U);
    msg.setDestinationEntity(68U);
    msg.name.assign("HRNVLZYTGBEJOIPDFGFJZSFENSERAYEOTJHQBVMRANHCCGIQUQMTYURTJQFCZDRJNLNSTZPGCHVFEU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.158291401493);
    msg.setSource(23937U);
    msg.setSourceEntity(46U);
    msg.setDestination(2103U);
    msg.setDestinationEntity(49U);
    msg.name.assign("ERXGRLMUAJSVNILTGKSCJUBKYFKOTVFGJPWKNVEWVMJDJBYGSFPHUVTHSDACELXMXSSQWDRUFFUC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.961015653652);
    msg.setSource(31814U);
    msg.setSourceEntity(224U);
    msg.setDestination(23239U);
    msg.setDestinationEntity(93U);
    msg.name.assign("SYEYICSDALGJRALXDGRYSLUPCZZCIBTGQXOAZHTRXIAOUMZQOMQUXVIJCBKYZKEJPQPBCAXUCWRGMUUEFQYSVSHTJPBEJITKEICWMAKDVEOBBBLWTAHCDNOHYVTIACZSNFFMGSOZPPDQDBZWJHGXXYTKDRNNKMOYRWQLLFWUFDWQVOVOYIFXKMQMRZVEAFMAFRNDPHPKPVFIUGHLKJVNHGJPNVSKN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.638685501511);
    msg.setSource(22633U);
    msg.setSourceEntity(199U);
    msg.setDestination(33693U);
    msg.setDestinationEntity(88U);
    msg.name.assign("ZIHUQOLUEDDAJACPFIMWVUGHAGYSHNRCVYVSKKFDWJGBNGTAHMZRIDTQRDZBHKVLOKVYZEOCNEYWZQNHBOSTOODUUPITQMTSXBOLDGECKCRAXNIOPONQGFYPAFXRTKWZOHNZFYGDRPIEFGCJYMAXSLDSNWABQFVEVIVPNXMUIEJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.70726097316);
    msg.setSource(59870U);
    msg.setSourceEntity(76U);
    msg.setDestination(43680U);
    msg.setDestinationEntity(73U);
    msg.type = 167U;
    msg.error.assign("XQABRIHINWVPQKDHINLCVISNRBZXBSSVLBUGFEEOOJTOSRTKFYFYAFQTIFDDNIMAZYLBUYAHTGJJJMZXOPRSZBNHKZUXZQGBIHPVRLVAU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.190873962947);
    msg.setSource(45975U);
    msg.setSourceEntity(238U);
    msg.setDestination(52820U);
    msg.setDestinationEntity(145U);
    msg.type = 97U;
    msg.error.assign("LVFROLPHEIZJFSRDJEHPIJHWZLYGNDNGVKXKBAMZCPUDUCCMYEHYQPKLWOSTNGZVDZXHQSHARKHFSZVWOTLLCKCTNFTUJHNZFOIVNFWDERQAUBBPXTVARWHCWSDSZW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.406954269528);
    msg.setSource(42847U);
    msg.setSourceEntity(191U);
    msg.setDestination(5075U);
    msg.setDestinationEntity(147U);
    msg.type = 155U;
    msg.error.assign("YTZHMAEMCNHLTIDODBXSOGXTJZJIE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.620244510948);
    msg.setSource(18467U);
    msg.setSourceEntity(25U);
    msg.setDestination(20277U);
    msg.setDestinationEntity(232U);
    msg.seq = 48356U;
    msg.sys_dst.assign("MDBVAZFDQLXMOYEPPSCTHHXTZEBNNCQRBZBCDRKTNOPSLJDMMVGIWADVBUTABHTIIQFVKUNRXWAKLYHLPQDNYOXURGSBOZLWGJSHBACRWUGKXCXWQENQYDRUHJMPBSGMIIMZQGMOPJRQJHQXJDITTZIYALNETSPNWOJXGSUSUVGCYFIFJFKBJHFUPFWAVS");
    msg.flags = 26U;
    const char tmp_msg_0[] = {-105, 100, 100, 108, 64, 12, 31, -51, -21, 51, 91, 34, 69, 64, -74, 9, 20, -26, -87, -30, -115, -1, 115, 22, -40, -55, 56, 126, -82, 79, 56, 80, 3, -116, -21, 104, 114, 124, 20, 85, 115, -102, -4, 72, 99, 58, -119, -126, -116, 54, 118, -82, 1, 68, 27, 53, -17, 11, 0, -22, -49, -87, -88, 30, -39, -75, 70, -122, 39, -81, 9, 2, -92, -9, 53, 120, 124, 99, 25, -48, -122, 100, 41, 51, -5, 96, -124, -35, -51, 126, -26, 49, -47, 71, -32, -62, -49, -53, 32, 30, -117, 53, -35, -91, -56, -22, -117, 122, 5, -91, -91, -8, -84, 51, -34, 37, -121, -81, 70, 74, -70, 44, -68, -83, -128, 39, 15, -109, -79, 22, 64, 0, 92, -48, 46, 52, 60, -103, -42, 0, -73, 57, -30, 112, 28, 116, 107, 75, 63, -43, -23, 72, 113, 78, -19, 14, 96, -43, -47, -16, -82, 77, -38, 8, 56, -86, 77, 122};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.67164423206);
    msg.setSource(5232U);
    msg.setSourceEntity(37U);
    msg.setDestination(48194U);
    msg.setDestinationEntity(170U);
    msg.seq = 54324U;
    msg.sys_dst.assign("FUWWBVZXADP");
    msg.flags = 63U;
    const char tmp_msg_0[] = {-85, -59, 79, 51, 96, 89, -3, -127, 105, -96, 99, 51, 100, -1, -93, -57, 104, -50, 85, -27, -72, -54, -114, -43, -110, -11, -60, -78, -1, -32, -31, -8, 125};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.932701524354);
    msg.setSource(18290U);
    msg.setSourceEntity(35U);
    msg.setDestination(27506U);
    msg.setDestinationEntity(163U);
    msg.seq = 63045U;
    msg.sys_dst.assign("BSKWVMEXYXSXJBEQFZKRFLOISJZKXDQMQHYBPOWHLWYZLIGHUTGHKMQY");
    msg.flags = 210U;
    const char tmp_msg_0[] = {-22, 109, -128, -101, -124, 101, 56, -59, 78, -19, 17, 58, -110, 21, -124, -44, 20, -50, -21, 67, -102, -103, -122, -39, 23, 69, 103, -110, 110, -79, -123, 10, -95, 41, -107, -69, 112, 100, 31, -99, 79, 64, -71, -115, -94, 45, 52, -115, 4, -89, -78, 71, 103, 64, 12, -47, 120, 5, -48, 30, -61, 6, -51, 8, -60, -68, 1, -106, -19, 90, -55, 44, -37, 58, -17, -112, 119, -37, 16, 99, 89, -1, 17, 116, 27, -13, 7, -61, 98, -11, -127, 2, 35, -37, 8, 32, 107, -3, 58, 23, 33, 8, -12, -22, -53, 62, -53, -24, 27, -39, 37, 101, -108, 80, -71, 75, 32, -103, -35, -35, -99, 48, 6, -77, -13, 104, 75, -84, -104, -88, 67, 8, -121, -121, 80, 114, -56, 72, -19, -15, 80, 82, 117, -73, 29, -6, -118, 33, 31, 89, -115, 31, 63, -41, 17, -38, -8, 30, -62, 106, -77, 109, 3, 101, -41, -116, -109, -64, 113, -66, 13, -100, -42, -10, 118, 89, 126, 9, -78, -128, 110, -19, -128, 27, 17, 103, 43, -125, -54, 75, -20, 65, -22, -22, 80, 54, 69, 123, 100, -55, -19, -15, 101, 35, -92, -117, -43, -104, -55, 91, 66, 96, 50, -79, 0, -70, 120, -65, 111, -52, 116, -95, -94, -120, 16, 22, -75, -61, 91, 83, 60, -18, 112, -116, 123, -84, -79, 57, -79, 30, 29, -15, -56, 7, -73, -62, -105};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.835429729125);
    msg.setSource(13321U);
    msg.setSourceEntity(72U);
    msg.setDestination(15214U);
    msg.setDestinationEntity(162U);
    msg.sys_src.assign("LPLSWNTSVEEGDNLEOEYHKOAMLKVZFSGYQOKPKMRJCNQGUPOOMZGUQXDSFJEIYDINFEZBTLWJIIMXGAXPZIYTQVTSCWWZJOKU");
    msg.sys_dst.assign("DEONHCIVMNBBOXMEDKGESLIAYYSFZWNFIUTYUCIHZORKZPVMAXPWEMDPUDTIDYNHFMGKEZHCBHVQQWPAFSPYAGKIMXVCXDPDLIVNAIHTN");
    msg.flags = 92U;
    const char tmp_msg_0[] = {-14, -100, -7, 76, 56, 22, -110, -10, -116, 94, -37, -6, 42, 89, 47, 46, -44, 22, 66, 110, 65, -58, 123, 9, 24, -57, -39, -30, 67, 65, 104, -76, -66, -93, -23, 80, 34, 55, -77, -93, 28, -25, -67, -16, 64, 96, -41, -101, -54, -90, -110, 74, -108, 94, 28, 53, -33, 112, -78, -56, -106, -31, -89, 89, 48, -57, -57, 46, 81, 8, 123, -26, 79, 88, -123, -48, -59, -118, 42, 28, -70, -99, -53, 8, 24, 103, -98, -126, 109, -20, 35, -100, -97, -40, 109, -77, 83, -7, -1, 23, -87, 19, -83, 68, -69, -10, 52, 25, 14, 99, 7, -101, -67, -56, -102, 51, 85, 75, -102, -69, -123, -42, -112, 92, -99, -105, 102, 35, -16, -42, -9, 29, 21, 123, -15, -73, 110, 125, 111, -71, 15, -12, 45, -23, 118, -4, -80, -84, 2, -73, 65, -43, -108, 115, -61, -101, -57, 2, -69, -17, 43, 125, -70, 39, -44, -46, 37, 74, -64, -7, -128, 63, 61, -25, -48, 28, 126, 29, 12, -5, -49, 2, 86, -104, -75, 68, 24};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.999829772834);
    msg.setSource(15472U);
    msg.setSourceEntity(75U);
    msg.setDestination(9439U);
    msg.setDestinationEntity(63U);
    msg.sys_src.assign("RQEUHOBCSXXIDTZDBTRIETUHAIXCLWSUTBQQPWVNONMCAMEWCVROGMWZMKBWNGNFRSLSLHNICOYJIMPFDJYLOLSROZPJZOUHZKGNGEWKVPBPYSITGCKLLTERFAGXPOFBVJSXQSZRDEUQHAZIELKFGBWPVPADCQEYAMVVFLBPQQJYINGQHUSHALXBDDWFVGPKKMUOXDVYGQVACIAFSEURZJHTMCYJKTMYHHFZBDEONXAYFCJKIWDNWNTMURUJZ");
    msg.sys_dst.assign("QKXSVKMLGNLIHVDCPTNUYVAMIZFKROLEPWTANXDBIMIRJWZWNYAJEXYDGOQMOMOABOMFEIBWTTRHKEZKHGCMDASPJTHRFNKHPMPLQQURFKYUIDFZDJJVYINBTWAOCSEIDUOBXPZJTZFHCUCLAGXINQUVWFGEXNPVDLUCWRJMYWVN");
    msg.flags = 58U;
    const char tmp_msg_0[] = {46, 66, 39, -74, -87, -76, 26, -97, 107, -117, 100, 62, -91, 53, 14, 43, -63, -24, 74, -8, 8, 66, 5, -16, -95, -89, 31, -54, -29, 93, -63, -49, -77, 14, -98, -40, 24, 84, -99, 47, 40, -84, 96, 19, -39, 104, 82, -65, 35, -103, -67, -52, -63, 84, -67, -2, 90, -6, 46, 1, -56, -50, 85, -58, -3, -109, 79, 100, -126, -50, 70, 76, 80, 90, -88, -88, -104, -117, -111, -63, 95, 32, -60, 118, 79, -7, 44, -43, -51, -89, -32, 41, -76, -99, -22, -1, 55, 30, 25, -79, -90, 18, 22, 83, -16, 94, 109, -18, -102, 38, 54, 59, -49, -47, -119, 124, 122, 107, 59, -74, -25, -94, 9, -75, -98, 36, -76, 76, -121, -59, 121, -115, -48, -65, -90, -99, 49, -78, -112, 32, 110, 125, -83, 54, -82, 99, -74, -101, -77, -40, -25, -52, -56, -27, 31, 1, -45, -97, 26, 92, -63, 24, 36, -97, -91};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.017146133443);
    msg.setSource(41368U);
    msg.setSourceEntity(78U);
    msg.setDestination(58420U);
    msg.setDestinationEntity(234U);
    msg.sys_src.assign("UFLUQJIIFTEXDMHCBNZIWWHUQKDHHBXK");
    msg.sys_dst.assign("ZKQYTFAVZWRUIRTMPAJOCLREEKBWHIFPUMRDTYUKSNNQBWFFXUJFVLXPEGACIZKMYFXXJZOTNUBNKKDMKSIM");
    msg.flags = 157U;
    const char tmp_msg_0[] = {-27, 42, -20, 7, -7, 115, -98, -41, -46, 47, 115, -49, 96, -116, 107, 33, -75, -107, 50, 1, 60, 80, -68, -15, -72, 48, -15, 48, 111, -53, 22, 78, 70, 73, -59, -116, -39, -59, 63, -50, -107, -1, -101, -74, -37, -5, -75, 44, -61, 98, 5, -116, -98, 16, -33, -56, -117, 17, 8, -33, -69, -7, 48, 108, -57, 35, 126, -15, 56, -89, 119, 58, -82, 52, -73, 112, 13, -125, -112, 68, -60, 107, 93, 7, -99, 34, -43, 52, 61, -44, -25, 1, -3, 120, -103, -47, 120, 4, 52, 69, 105, 2, -83, 34, 77, 98, -114, 95, 93, 74, -82, -34, 34, -63, 21, -61, 104, -15, 109, -90, 59, -83, -24, -69, -52, 22, -60, -76, -90, -64, -93, -93, -10, -19, -75, 32, -80, 29, 0, -2, 107, 93, 36, 57, 72, 34, -58, -126, 3, -9, -94, 11, -126, 30, 102, 34, 106, -66, -106, -80, -80, 68, -28};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.583326704756);
    msg.setSource(43212U);
    msg.setSourceEntity(206U);
    msg.setDestination(33057U);
    msg.setDestinationEntity(45U);
    msg.seq = 5141U;
    msg.value = 31U;
    msg.error.assign("ALOZBFDXKELNDFXIQLMCIHLOOFBQUUGKXUGJUSGINHTBETSBKEJUTWWVQWJV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.422676460636);
    msg.setSource(36676U);
    msg.setSourceEntity(57U);
    msg.setDestination(13138U);
    msg.setDestinationEntity(132U);
    msg.seq = 38988U;
    msg.value = 6U;
    msg.error.assign("WXFTNTXTOUWFGHUFEHHOLDTQTQPJROHAGRYHXX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.883215990673);
    msg.setSource(40383U);
    msg.setSourceEntity(20U);
    msg.setDestination(44775U);
    msg.setDestinationEntity(126U);
    msg.seq = 55762U;
    msg.value = 63U;
    msg.error.assign("XWDNCHKPEWWYCWDRJQSFLBSGXSFTNLXCNQZZXOQLVGZWMRJKJQWJVYCTYXLPGESFEHUSMEDBQDXFVPCPNXUCRDMETJVKFREOKEBGULTAZBDVYISVOHMBFOITBTPLUWCMKPINRSMAGORDSOFPUYSOQAFZUTJWRGEADYLAENCQIKIJNANGHPIHOZYMUTKYPAX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.209896070014);
    msg.setSource(42096U);
    msg.setSourceEntity(221U);
    msg.setDestination(55062U);
    msg.setDestinationEntity(211U);
    msg.seq = 28770U;
    msg.sys.assign("MJTNKXJZJFYIFXYVISISLOPUGRIZRJQRFHBCZVTLLYKISOLWEXVVPUAOGVQAJFZ");
    msg.value = 0.876678975657;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.160960681079);
    msg.setSource(59626U);
    msg.setSourceEntity(94U);
    msg.setDestination(9264U);
    msg.setDestinationEntity(156U);
    msg.seq = 11404U;
    msg.sys.assign("TLAIIQNJLIZQVFVEQPWFLGCDLBARMSNKMMVKCMHPMPODBEKUTOFDTYEMPTCQDUTULYFNKOPXWTHUCLTHGCAVAZHDSGYHTVNORRBSBNSYOAUIDHFNFRQEWXDYHIZAGXIDVRIGNSUVEQEBXOLDNIBJADMGPAKLOXZJWSGKWBQHGXPWTSWUOZYRYWLPJCSBJZKQBERIJLFSQYHESKXCGFVUZOVCBPZUCXUNFMCHNRAZAJWFJI");
    msg.value = 0.134557747618;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.704767269823);
    msg.setSource(19013U);
    msg.setSourceEntity(134U);
    msg.setDestination(31317U);
    msg.setDestinationEntity(15U);
    msg.seq = 25510U;
    msg.sys.assign("UXOJLPFCDUVKYDCAQUFWOMLNKAOCLFHPDYSMVMZNJFXEDFBIXGZFIZOZXPKOWAEYNTGMYPQTQDIDBJQAUNEHWBQPJSNRAOZGYVPMJSMXFDARSEOKQBSHRIKMUGWHYYSBLEOHJEZPHKHGDVS");
    msg.value = 0.425836207603;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.0249227815219);
    msg.setSource(27406U);
    msg.setSourceEntity(104U);
    msg.setDestination(47733U);
    msg.setDestinationEntity(92U);
    msg.action = 125U;
    msg.longain = 0.255142388922;
    msg.latgain = 0.804519690814;
    msg.bondthick = 2134823879U;
    msg.leadgain = 0.0287159470545;
    msg.deconflgain = 0.302039233538;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.69189760059);
    msg.setSource(32491U);
    msg.setSourceEntity(144U);
    msg.setDestination(10012U);
    msg.setDestinationEntity(107U);
    msg.action = 20U;
    msg.longain = 0.5475979361;
    msg.latgain = 0.105748756196;
    msg.bondthick = 2487418495U;
    msg.leadgain = 0.817049463917;
    msg.deconflgain = 0.668309227785;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.654220981527);
    msg.setSource(18971U);
    msg.setSourceEntity(74U);
    msg.setDestination(9620U);
    msg.setDestinationEntity(24U);
    msg.action = 242U;
    msg.longain = 0.961636425531;
    msg.latgain = 0.52206873774;
    msg.bondthick = 1426183080U;
    msg.leadgain = 0.684330216811;
    msg.deconflgain = 0.936976118047;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.846429021057);
    msg.setSource(45965U);
    msg.setSourceEntity(246U);
    msg.setDestination(18898U);
    msg.setDestinationEntity(191U);
    msg.err_mean = 0.819123092655;
    msg.dist_min_abs = 0.879966947521;
    msg.dist_min_mean = 0.396966167036;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.278386553998);
    msg.setSource(12833U);
    msg.setSourceEntity(123U);
    msg.setDestination(29280U);
    msg.setDestinationEntity(188U);
    msg.err_mean = 0.0584169086971;
    msg.dist_min_abs = 0.802670765377;
    msg.dist_min_mean = 0.698063849451;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.659478735298);
    msg.setSource(43205U);
    msg.setSourceEntity(149U);
    msg.setDestination(25807U);
    msg.setDestinationEntity(147U);
    msg.err_mean = 0.921222634968;
    msg.dist_min_abs = 0.872688960255;
    msg.dist_min_mean = 0.293629965063;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.0384981253378);
    msg.setSource(36944U);
    msg.setSourceEntity(124U);
    msg.setDestination(65223U);
    msg.setDestinationEntity(78U);
    msg.action = 89U;
    msg.lon_gain = 0.843228468056;
    msg.lat_gain = 0.246537179087;
    msg.bond_thick = 0.769458836983;
    msg.lead_gain = 0.00393484681268;
    msg.deconfl_gain = 0.882305570703;
    msg.accel_switch_gain = 0.895242416461;
    msg.safe_dist = 0.346325397537;
    msg.deconflict_offset = 0.971356824617;
    msg.accel_safe_margin = 0.084644376286;
    msg.accel_lim_x = 0.841269072071;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.992417472235);
    msg.setSource(27154U);
    msg.setSourceEntity(199U);
    msg.setDestination(16299U);
    msg.setDestinationEntity(245U);
    msg.action = 167U;
    msg.lon_gain = 0.263187827625;
    msg.lat_gain = 0.351991230369;
    msg.bond_thick = 0.504882484;
    msg.lead_gain = 0.262527192583;
    msg.deconfl_gain = 0.319793341234;
    msg.accel_switch_gain = 0.255155897992;
    msg.safe_dist = 0.97773305841;
    msg.deconflict_offset = 0.872660116818;
    msg.accel_safe_margin = 0.483031661992;
    msg.accel_lim_x = 0.122165082757;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.646683735164);
    msg.setSource(4924U);
    msg.setSourceEntity(183U);
    msg.setDestination(38492U);
    msg.setDestinationEntity(39U);
    msg.action = 228U;
    msg.lon_gain = 0.693619274747;
    msg.lat_gain = 0.126558689198;
    msg.bond_thick = 0.0279064590274;
    msg.lead_gain = 0.935930184996;
    msg.deconfl_gain = 0.0528691715313;
    msg.accel_switch_gain = 0.528071645738;
    msg.safe_dist = 0.602092267782;
    msg.deconflict_offset = 0.582728533845;
    msg.accel_safe_margin = 0.717621318626;
    msg.accel_lim_x = 0.893917770227;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.77298892753);
    msg.setSource(46653U);
    msg.setSourceEntity(88U);
    msg.setDestination(3827U);
    msg.setDestinationEntity(131U);
    msg.type = 178U;
    msg.op = 34U;
    msg.err_mean = 0.229101779909;
    msg.dist_min_abs = 0.118283883521;
    msg.dist_min_mean = 0.556463906892;
    msg.roll_rate_mean = 0.591521795917;
    msg.time = 0.699328036634;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 87U;
    tmp_msg_0.lon_gain = 0.944446534326;
    tmp_msg_0.lat_gain = 0.147981513298;
    tmp_msg_0.bond_thick = 0.64300155601;
    tmp_msg_0.lead_gain = 0.238993253564;
    tmp_msg_0.deconfl_gain = 0.546916469712;
    tmp_msg_0.accel_switch_gain = 0.400756057152;
    tmp_msg_0.safe_dist = 0.294442192946;
    tmp_msg_0.deconflict_offset = 0.0853441809544;
    tmp_msg_0.accel_safe_margin = 0.466889027308;
    tmp_msg_0.accel_lim_x = 0.323988170924;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.218410354865);
    msg.setSource(29344U);
    msg.setSourceEntity(113U);
    msg.setDestination(15970U);
    msg.setDestinationEntity(28U);
    msg.type = 32U;
    msg.op = 70U;
    msg.err_mean = 0.670340016313;
    msg.dist_min_abs = 0.981516545548;
    msg.dist_min_mean = 0.154541274362;
    msg.roll_rate_mean = 0.807655060034;
    msg.time = 0.0568912020386;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 128U;
    tmp_msg_0.lon_gain = 0.693337830753;
    tmp_msg_0.lat_gain = 0.423277104561;
    tmp_msg_0.bond_thick = 0.883472913505;
    tmp_msg_0.lead_gain = 0.167403339312;
    tmp_msg_0.deconfl_gain = 0.407602731533;
    tmp_msg_0.accel_switch_gain = 0.53659979197;
    tmp_msg_0.safe_dist = 0.385191181453;
    tmp_msg_0.deconflict_offset = 0.124157195746;
    tmp_msg_0.accel_safe_margin = 0.670970460095;
    tmp_msg_0.accel_lim_x = 0.1179825707;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.7043929126);
    msg.setSource(50435U);
    msg.setSourceEntity(207U);
    msg.setDestination(14355U);
    msg.setDestinationEntity(91U);
    msg.type = 122U;
    msg.op = 34U;
    msg.err_mean = 0.60183677674;
    msg.dist_min_abs = 0.703457383868;
    msg.dist_min_mean = 0.722999881942;
    msg.roll_rate_mean = 0.942773731618;
    msg.time = 0.227456541909;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 229U;
    tmp_msg_0.lon_gain = 0.675789254888;
    tmp_msg_0.lat_gain = 0.942843172775;
    tmp_msg_0.bond_thick = 0.51915362979;
    tmp_msg_0.lead_gain = 0.704388720724;
    tmp_msg_0.deconfl_gain = 0.518079139115;
    tmp_msg_0.accel_switch_gain = 0.83280538022;
    tmp_msg_0.safe_dist = 0.844546462234;
    tmp_msg_0.deconflict_offset = 0.615730588233;
    tmp_msg_0.accel_safe_margin = 0.380691811159;
    tmp_msg_0.accel_lim_x = 0.272387915942;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.789071563264);
    msg.setSource(32914U);
    msg.setSourceEntity(237U);
    msg.setDestination(59267U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.00287153747501;
    msg.lon = 0.738966779727;
    msg.eta = 3331129454U;
    msg.duration = 38957U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.682572784302);
    msg.setSource(61901U);
    msg.setSourceEntity(93U);
    msg.setDestination(39238U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.616890031288;
    msg.lon = 0.510904092911;
    msg.eta = 3785850053U;
    msg.duration = 15237U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.0961156142954);
    msg.setSource(19961U);
    msg.setSourceEntity(83U);
    msg.setDestination(31861U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.486073972476;
    msg.lon = 0.288413665737;
    msg.eta = 1765133090U;
    msg.duration = 55895U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.781530758895);
    msg.setSource(23011U);
    msg.setSourceEntity(235U);
    msg.setDestination(34596U);
    msg.setDestinationEntity(252U);
    msg.plan_id = 33527U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.0822669179577;
    tmp_msg_0.lon = 0.756305292851;
    tmp_msg_0.eta = 3244583678U;
    tmp_msg_0.duration = 9227U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.547481125282);
    msg.setSource(25064U);
    msg.setSourceEntity(135U);
    msg.setDestination(39564U);
    msg.setDestinationEntity(120U);
    msg.plan_id = 57990U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.816655514978);
    msg.setSource(9415U);
    msg.setSourceEntity(97U);
    msg.setDestination(2576U);
    msg.setDestinationEntity(94U);
    msg.plan_id = 3338U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.419109548565;
    tmp_msg_0.lon = 0.881382281871;
    tmp_msg_0.eta = 1415575568U;
    tmp_msg_0.duration = 33708U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.738941519771);
    msg.setSource(59404U);
    msg.setSourceEntity(22U);
    msg.setDestination(51452U);
    msg.setDestinationEntity(240U);
    msg.type = 175U;
    msg.command = 51U;
    msg.settings.assign("HOWRKJRFYGRSBMPOQUWRJTAGLSWUZXVEPTDKECRZPLGLCJWSOLUDOYONLZQKZMFZ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 6418U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("KPAVSGRNZALDVUZZGJAIGJVSXODBEASFYPSEPAHLADGVMQCKJYHNBIYMTDNFANEOKLFTRLEBYGDHEJCJYGRRPXUKQLUXZECUCBZUOYAROUQDCZMWWXEWM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.37724730584);
    msg.setSource(55063U);
    msg.setSourceEntity(11U);
    msg.setDestination(4558U);
    msg.setDestinationEntity(40U);
    msg.type = 210U;
    msg.command = 52U;
    msg.settings.assign("SKNTNMFVOBRYQFOGWNTILOZESOQXHEMERUJDNGKYRXIIBGZCRDFAJZSRLXXCYKJFFUBLZAKXINYYHZRHUXQLPJIJQBGENBFBGEYVXMDBANLDVQAJVCHHNVULHJMCSDFUAPPTYMRZPLPALZTBTLJAVIMYDWSFIEQGMNKFKHWVWGVIOSRVWAHWSCZJSXLRPJCOIEQMEGUOWZOKWMTCDKTDCTPGPUWSKXDODUUNBIBECRFTSOAAKQQPGUH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 37717U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.895292477337;
    tmp_tmp_msg_0_0.lon = 0.793563385272;
    tmp_tmp_msg_0_0.eta = 2272108521U;
    tmp_tmp_msg_0_0.duration = 59179U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CRRUKXWNKRFHNDHMFZPDYHLGXYGHOSKRWUTUGZVEUEHNLOBMLWNETRAKDOJMCYLBNQHFCVTVTTSQU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.373788078419);
    msg.setSource(58803U);
    msg.setSourceEntity(142U);
    msg.setDestination(61267U);
    msg.setDestinationEntity(155U);
    msg.type = 141U;
    msg.command = 106U;
    msg.settings.assign("CJTLYXQELCFRLANAYFNQRGITSHHJRVONBVSRWOVQKXBCIACAPFHZKQZDFESOLYNGXIRKITCTPBLYCBJOEUPAYNJVJWSECAZLHXXGYZGCULAGVIWFYWFJKAIPIDWSQSPFPKMLBWJXGKREXUDXDLDZNWEUQOHACB");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 10965U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.601414142255;
    tmp_tmp_msg_0_0.lon = 0.496986415173;
    tmp_tmp_msg_0_0.eta = 3668611890U;
    tmp_tmp_msg_0_0.duration = 46750U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("PHJJMSMGHSOAWNDWSKCKYJLWRBPKIHAFRWQKKEPNIYLLQFHUVOXCTLOSOKAEJGMIHEXZVXDJAHOVCNHRFIJRUTSINBZYUISTLAKLVELDIQVKSNKQJQNDJURRPEYBAOUHYNRIRVDGFMGMWDBIJCFWPMXCBDOZGSQGQQGNWOOYEBLTWZQRIFAZMJTFMPMCVUCPMWFQFXUGYHDGZBTNHXTVABTUCGOXUCZECYTUPBYZTVNEBPXYLVXXDFZPEK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.445284206166);
    msg.setSource(29159U);
    msg.setSourceEntity(115U);
    msg.setDestination(28380U);
    msg.setDestinationEntity(4U);
    msg.state = 40U;
    msg.plan_id = 845U;
    msg.wpt_id = 2U;
    msg.settings_chk = 10431U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.439375352987);
    msg.setSource(53550U);
    msg.setSourceEntity(116U);
    msg.setDestination(31268U);
    msg.setDestinationEntity(108U);
    msg.state = 111U;
    msg.plan_id = 22684U;
    msg.wpt_id = 157U;
    msg.settings_chk = 9799U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.959479488504);
    msg.setSource(63408U);
    msg.setSourceEntity(237U);
    msg.setDestination(48385U);
    msg.setDestinationEntity(125U);
    msg.state = 86U;
    msg.plan_id = 29131U;
    msg.wpt_id = 211U;
    msg.settings_chk = 55592U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.44686603282);
    msg.setSource(37380U);
    msg.setSourceEntity(133U);
    msg.setDestination(48525U);
    msg.setDestinationEntity(41U);
    msg.uid = 113U;
    msg.frag_number = 10U;
    msg.num_frags = 215U;
    const char tmp_msg_0[] = {83, -7, 30, -68, -44, 41, -7, 45, 14, 40, 114, -56, 110, -102, -48, 20, -81, 117, 64, 73, -99, -36, 33, 124, -86, -61, 121, 16, 49, 32, -67, 18, 34, -4, -42, 89, -44, -100, -27, 35, -82, 55, -61, -117, 107, 104, 64, -94, -58, -101, -84, 77, -10, 98, 62, 30, -68, 88, 17, -99, 121, 8, -45, 98, 42, -54, 108, 42, -42, -110, 126, 32, 57, 107, -108, 69, 45, 65, 87, 68, -44, -67, -68, -45, 58, -49, 66, 93, -11, -66, -38, -114, -116, 4, -72, 2, -125, -125, 107, -54, 87, -89, 79, -113, 27, 106, -23, 56, 40, 58, 109, 23, 34, -24, 106, 48, 76, -86, 122, 84, 3, 15, 44, -114, 102, 31, 55, -65, -15, -115, 101, -31, 111, -103, 83, -85, -8, 92, -4, 37, -38, -123, 5, -73, -110, -13, 120, 68, -13, 11, -91, 65, -114, 36, -25, -80, -28, -66, 3, 110, -34, -52, -6, -120, -16, -110, 109, -54, 18, -118, -13, -80, 28, -107, 91, 1, -64, -123, 96, -112, -105, -91, -78, -8, -12, -116, -33, -128, 47, 24, 93};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.286100696206);
    msg.setSource(20239U);
    msg.setSourceEntity(86U);
    msg.setDestination(35302U);
    msg.setDestinationEntity(190U);
    msg.uid = 64U;
    msg.frag_number = 89U;
    msg.num_frags = 211U;
    const char tmp_msg_0[] = {101, -111, -63, 121, 74, 111, 40, -86, -103, -5, -95, -25, 8, 123, 95, -91, 23, 122, -117, -22, 18, -60, 88, 41, 103, -10, 121, -42, -78, 118, -88, -50, -121, -89, -9, 82, -78, 52, -4, 8, -52, -63, -90, 22, -77, 103, -61, -110, -70, 117, 125, -7, -54, -123, -123, -33, 125, 38, -53, -13, 57, -5, -101, -91, -102, -50, -49, 18, -85, 42, -125, 104, 46, 67, 57, 12, -91, 117, 25, 37, -84, -27, -65, -40, 57, 54, 43, 61, 60, 96, -48, -126, -2, -93, 33, -97, 84, 125, -69, 88, 90, -93, -84, -95, -15, 45, 111, 120, 75, -73, 125, 99, 109, 36, -55, -97, -96, -81, 51, 122, 11, 31, -80, 119, -35, 89, 89, 54, 88, 112, -74, -113, 126, 28, 104, -109, 93, -114, -1, -1, -3, 96, -125, -77, -81, 79, 7, -74, -31, -25, -67, -92, -84, 52, -68, -66, 22, 69};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.930823766988);
    msg.setSource(27906U);
    msg.setSourceEntity(205U);
    msg.setDestination(41292U);
    msg.setDestinationEntity(188U);
    msg.uid = 44U;
    msg.frag_number = 103U;
    msg.num_frags = 224U;
    const char tmp_msg_0[] = {-4, -24, 24, 26, 15, -61, -19, 29, 49, -96, -75, 79, -106, -64, -57, 125, 65, 104, -100, -110, -123, 112, -115, 46, 43, -41, 120, 38, -115, 116, -101, 31, -20, -72, -87, -40, 112, -15, -7, -4, -102, -36, 84, 41, 4, -36, 114, -121, 22, 119, 99, 86, 37, -123, 93, 122, 98, 118, -57, 33, -13, 76, 93, 39, 73, 55, -43, -40, 103, 85, 10, -107, -124, 108, -98, 5};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.959915171162);
    msg.setSource(5430U);
    msg.setSourceEntity(129U);
    msg.setDestination(56215U);
    msg.setDestinationEntity(241U);
    msg.content_type.assign("ZANUNRHZARJWVRGJXVSLWJSAGDKKOHTWIPROGGZDFKBQHLTU");
    const char tmp_msg_0[] = {-106, -120, -16, -112, -53, -102, -75, -23, -45, -51, -17, 46, -4, 48, 114, -47, -19, 124, -126, -24, -112, -104, -41, 85, -39, -117, -105, 72, -71, -121, 8, -78, -119, -82, -13, -108, 81, -83, 38, -44, 27, 100, -25, -85, 89, -107, -122, 47, 76, -77, 29, 17, -26, 90, 62, 26, 87, -96, -22, 74, -7, -108, 86, 29, -91, -63, 77, -6, -23, 8, -119, 13, 59, -76, -39, 84, 117, -76, 110, 79, 68, 1, -119, 94, -76, 38, -88, -82, 77, -40, -49, -125, -37, 87};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.884420316069);
    msg.setSource(64608U);
    msg.setSourceEntity(133U);
    msg.setDestination(58432U);
    msg.setDestinationEntity(75U);
    msg.content_type.assign("NKZPDNCLBPWTBGREBYZZMYRSGGHHUJQQWSPNMKHJLPHDUVIGQYKKZXTWOYAOUBPIURETTUNHXBYWAUMIBDQDAYTGWCRLZZGSGQVEVXGOWDLLAVHCYSIAFVNPLZAFJECOHYXTMADEDSXXFPIJOSXMCKKRFNJUOELTVJBPPEDUESFSGMKJZVQCTDIQSOWSZCMAOLQRWFQJCLKXIEPA");
    const char tmp_msg_0[] = {-60, 15, 54, -91, 104, -89, 71, 53, -64, 89, -47, 61, 40, -101, -44, 67, 93, 2, -94, -127, -59, 81, 97, -125, 60, -2, -60, 42, -91, 21, 65, -36, 69, 16, 12, 123, -91, -95, -14, -116, -34, 69, -120, -88, -56, 110, -34, -120, -97, 19, 96, -50, -87, 82, -114, -47, -111, 23, -125, 93, -100, -43, -22, -67, -124, 90, 6, -71, -116, 108, -126, 88, -95, -78, 98, -92, 66, -108, 102, 88, -80, 3, -36, -117, 11, 49, 31, -55, 75, 35, -83, 103, 96, 1, 97, -61, -61, 121, 116, -15, -17, 51, 59, 104, -26, -33, 100, 103, 48, 100, 63, -102, -36, 69, 117, -88, 114, 81, 48, -119, 59, -90, -10, -70, 15, -54, -96, 43};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.707220983292);
    msg.setSource(5113U);
    msg.setSourceEntity(154U);
    msg.setDestination(7460U);
    msg.setDestinationEntity(218U);
    msg.content_type.assign("GGJRXPOKHYUBKGLCMRLOCASTCCHOZXLZDM");
    const char tmp_msg_0[] = {56, 91, -96, 8, 38, 1, -29, -3, -89, 118, 71, -99, 34, -87, -45, 41, -67, 96, 49, 17, 8, 121, -31, -76, 27, -63, -58, 101, 57, 17, 31, 75, 42, -114, -117, 111, 104, -114, 2, 30, -53, -104, 61, 87, -121, -55, 77, -43, -108, 88, -7, 7, -116, -85, 97, -66, 122, 69, -6, 49, 71, 37, 78, -49, -80, -66, 25, 85, -51, -31, 39, 26, 120, 69, -119, 99, -106, -15, -88, 94, 71, -28, -28, -95, 27, -92, 36, -76, -16, 106, -72, 104, -94, 65, -124, -36, -50, 1, 95, 82, 114, 31, 58, -111, -44, 46, 9, 4, 101, -26, -59, 21, 56, 36, 108, 61, -8, 92, -55, 56, -94, 25, 73, -78, 110, -100, 15, 66, 113, 60, 32, -98, 66, 39, 125, -41, 75, -59, 52, 48, 49, -87, 79, -83, -90, -91, -30, -92, -21, 109, -35};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.422991822823);
    msg.setSource(10813U);
    msg.setSourceEntity(194U);
    msg.setDestination(12164U);
    msg.setDestinationEntity(209U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.571812649618);
    msg.setSource(56828U);
    msg.setSourceEntity(8U);
    msg.setDestination(56936U);
    msg.setDestinationEntity(190U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.449936428321);
    msg.setSource(54931U);
    msg.setSourceEntity(95U);
    msg.setDestination(41094U);
    msg.setDestinationEntity(165U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.837812925118);
    msg.setSource(55274U);
    msg.setSourceEntity(8U);
    msg.setDestination(1692U);
    msg.setDestinationEntity(70U);
    msg.target = 23971U;
    msg.bearing = 0.853991771697;
    msg.elevation = 0.201739954506;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.468195247046);
    msg.setSource(12013U);
    msg.setSourceEntity(125U);
    msg.setDestination(9029U);
    msg.setDestinationEntity(155U);
    msg.target = 34766U;
    msg.bearing = 0.199265572261;
    msg.elevation = 0.55948064545;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.224190312361);
    msg.setSource(21774U);
    msg.setSourceEntity(244U);
    msg.setDestination(11170U);
    msg.setDestinationEntity(247U);
    msg.target = 54055U;
    msg.bearing = 0.740995964125;
    msg.elevation = 0.690825122148;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.253336667629);
    msg.setSource(44950U);
    msg.setSourceEntity(52U);
    msg.setDestination(53016U);
    msg.setDestinationEntity(231U);
    msg.target = 59303U;
    msg.x = 0.540037291069;
    msg.y = 0.257019068506;
    msg.z = 0.382877671476;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.585209869886);
    msg.setSource(7878U);
    msg.setSourceEntity(134U);
    msg.setDestination(29396U);
    msg.setDestinationEntity(198U);
    msg.target = 10614U;
    msg.x = 0.337475084216;
    msg.y = 0.369683845025;
    msg.z = 0.336017195289;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.536075493631);
    msg.setSource(23972U);
    msg.setSourceEntity(249U);
    msg.setDestination(20129U);
    msg.setDestinationEntity(150U);
    msg.target = 59219U;
    msg.x = 0.920496215264;
    msg.y = 0.166148879485;
    msg.z = 0.951433943992;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.735760824998);
    msg.setSource(59960U);
    msg.setSourceEntity(166U);
    msg.setDestination(3082U);
    msg.setDestinationEntity(207U);
    msg.target = 819U;
    msg.lat = 0.659755891268;
    msg.lon = 0.943441189219;
    msg.z_units = 81U;
    msg.z = 0.765518801073;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.0992566318003);
    msg.setSource(63209U);
    msg.setSourceEntity(102U);
    msg.setDestination(3653U);
    msg.setDestinationEntity(117U);
    msg.target = 47473U;
    msg.lat = 0.085244178179;
    msg.lon = 0.613358452929;
    msg.z_units = 120U;
    msg.z = 0.373494572522;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.265204894377);
    msg.setSource(55282U);
    msg.setSourceEntity(241U);
    msg.setDestination(46854U);
    msg.setDestinationEntity(176U);
    msg.target = 21023U;
    msg.lat = 0.233987830972;
    msg.lon = 0.866302212314;
    msg.z_units = 67U;
    msg.z = 0.141463338755;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.350860338772);
    msg.setSource(6291U);
    msg.setSourceEntity(80U);
    msg.setDestination(36506U);
    msg.setDestinationEntity(138U);
    msg.locale.assign("VOSRCCBOEIUBFKRQPKKWHMHXHVPCYRVEAMDJUALUYTABMFDLISRNXTNBXWNUAEVYSUISRKIRTLYFYLFRCQWSLLQJJFULZIDSQOXZESZYZTWWYVDGKFVNVTEQXLAOJNJTWGHQMZKXMHTPHEDNPCAYCPKIPXBRWNHGFHMUMEXBJERQMQYSNFJOODHOUSZKTPPXACJJPGZPCAIMDGNOBCUTQTBQIDMILDKBZVVWOUGGNZ");
    const char tmp_msg_0[] = {49, 99, 47, -20, 60, 97, -109, 103, 62, 98, -88, 109, 2, -63, -119, -120, -69, 29, 110, -66, 86, 1, -114, 68, 68, -30, -43, -76, -33, 83, -86, 59, -74, -4, 123, 64, -36, -125, -35, -58, 0, 73, -50, 68, 46, 114, -33, -37, -124, -94, -76, 60, -74, -47, 14, -29, -75, -58, 70, -51, 64, -48, -92, 41, 124, 112, 101, -106, -30, -91, 82, 11, 58, 74, -75, -45, -125, -16, -124, -107, 118, 30, -95, 95, 39, -98, -20, -50, -58, 87, 81, -74, 31, 106, -75, 50, -3, 48, -57, -124, 109, -111, 2, -37, 79, -60, 98, -52, 0, 29, -29, -5, 15, 76, -69, -38, -53, -104, 44, -116, -86};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.48470739252);
    msg.setSource(11637U);
    msg.setSourceEntity(207U);
    msg.setDestination(41533U);
    msg.setDestinationEntity(118U);
    msg.locale.assign("QEVZQUDGQANQGCBLVGWHTQMMROSROCCEHLKIPJZXLNMAIZDXAHWOWARTTKFQVYXRAIFBUBRNYSIVKUGJXEXZPNDTFLPBHPGFJACBXNVBDDOSANEHJLKDSMOIEYPBJYWF");
    const char tmp_msg_0[] = {-96, -81, -80, -128, -84, 92, -37, 104, -127, -107, 99, -109, 38, 0, 33, 113, 69, 79, 74, -101, 100, 46, -123, 96, 114, -70, 32, 115, 56, -26, 88, 84, 77, 30, -90, -89, -114, 117, -96};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.33219507598);
    msg.setSource(14337U);
    msg.setSourceEntity(205U);
    msg.setDestination(38817U);
    msg.setDestinationEntity(125U);
    msg.locale.assign("JPTILURVHDKLGYOBMZHQJUTBTVMYCSCUCJHMDSENASWVANXSCRTQQZTBEOGXVKHGUXCVBIDHGPCTNGLXRUOXFFCZBILCRSJQRXLGNLFMPJROUPOFSWDYVWNJKGVYBLNFZUMISL");
    const char tmp_msg_0[] = {67, 89, 1, 80, 70, -10, -31, 44, -114, -14, 96, 32, -17, 101, 29, 69, 100, -35, 30, 49, -70, 118, -115, -70, -58, -52, -11, -28, 104, -39, -98, -94, 64, -84, -3, -11, -30, 10, -6, 64, 21, 118, 86, 36, 73, -91, -10, 106, 126, -106, -32, 43, -6, 66, 112, -65, 25, -102, 43, -123, 60, -81, 101, -126, 81, 10, -43, 13, 99, 58, -89, -75, -59, -25, -104, -99, 94, 44, 104, -106, 7, -17, -86, -1, -48, -67, 11, -97, 42, 8, -64, -66, -63};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.967613415595);
    msg.setSource(34774U);
    msg.setSourceEntity(252U);
    msg.setDestination(12330U);
    msg.setDestinationEntity(126U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.504259318034);
    msg.setSource(7743U);
    msg.setSourceEntity(31U);
    msg.setDestination(40106U);
    msg.setDestinationEntity(123U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.0757173616568);
    msg.setSource(52691U);
    msg.setSourceEntity(86U);
    msg.setDestination(21836U);
    msg.setDestinationEntity(179U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.815125506948);
    msg.setSource(53974U);
    msg.setSourceEntity(98U);
    msg.setDestination(22885U);
    msg.setDestinationEntity(29U);
    msg.camid = 137U;
    msg.x = 57868U;
    msg.y = 54521U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.785112958309);
    msg.setSource(62126U);
    msg.setSourceEntity(127U);
    msg.setDestination(9955U);
    msg.setDestinationEntity(243U);
    msg.camid = 167U;
    msg.x = 28234U;
    msg.y = 65034U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.597738980704);
    msg.setSource(11497U);
    msg.setSourceEntity(33U);
    msg.setDestination(63029U);
    msg.setDestinationEntity(120U);
    msg.camid = 174U;
    msg.x = 3243U;
    msg.y = 48971U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.0642952210153);
    msg.setSource(7678U);
    msg.setSourceEntity(1U);
    msg.setDestination(20571U);
    msg.setDestinationEntity(242U);
    msg.camid = 210U;
    msg.x = 26834U;
    msg.y = 19533U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.46303801929);
    msg.setSource(36468U);
    msg.setSourceEntity(159U);
    msg.setDestination(56631U);
    msg.setDestinationEntity(201U);
    msg.camid = 90U;
    msg.x = 54902U;
    msg.y = 26941U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.844732895063);
    msg.setSource(53220U);
    msg.setSourceEntity(93U);
    msg.setDestination(15281U);
    msg.setDestinationEntity(62U);
    msg.camid = 127U;
    msg.x = 17579U;
    msg.y = 11465U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.889464129536);
    msg.setSource(10910U);
    msg.setSourceEntity(188U);
    msg.setDestination(50279U);
    msg.setDestinationEntity(53U);
    msg.tracking = 227U;
    msg.lat = 0.760746240413;
    msg.lon = 0.837499821724;
    msg.x = 0.557320150629;
    msg.y = 0.116309762761;
    msg.z = 0.844428845637;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.694407215411);
    msg.setSource(57612U);
    msg.setSourceEntity(66U);
    msg.setDestination(30316U);
    msg.setDestinationEntity(134U);
    msg.tracking = 125U;
    msg.lat = 0.806874628021;
    msg.lon = 0.692147056405;
    msg.x = 0.257957178215;
    msg.y = 0.0633504354686;
    msg.z = 0.00620294750508;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.371338254191);
    msg.setSource(36594U);
    msg.setSourceEntity(91U);
    msg.setDestination(31977U);
    msg.setDestinationEntity(244U);
    msg.tracking = 169U;
    msg.lat = 0.860833919697;
    msg.lon = 0.200165231324;
    msg.x = 0.566749130114;
    msg.y = 0.944777470293;
    msg.z = 0.623842817725;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.795816154586);
    msg.setSource(64446U);
    msg.setSourceEntity(195U);
    msg.setDestination(60062U);
    msg.setDestinationEntity(143U);
    msg.target.assign("PHUKYZXMQWTOBUXIREKWNRFUBYBGRDCMXBIVVQQZLPZNWYYELIVAHDUGLRIVRYYTNPWUKXILHBVEEVNTAJWSNJLSKFAIGSNZTCMODEKTOJUPKZLPPHMQQLMJUREOEBGTTVPWLJDQESNNSIYRWDRAIXFPQDSDDHWJCGXAMBROBUWFGSTGCAIKVXYETMVGSXHC");
    msg.lbearing = 0.959202231891;
    msg.lelevation = 0.0140264884882;
    msg.bearing = 0.181037574737;
    msg.elevation = 0.372962288579;
    msg.phi = 0.987856789235;
    msg.theta = 0.0773612578764;
    msg.psi = 0.446596645518;
    msg.accuracy = 0.00377943978227;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.581170219882);
    msg.setSource(22613U);
    msg.setSourceEntity(202U);
    msg.setDestination(37601U);
    msg.setDestinationEntity(115U);
    msg.target.assign("CCWZVNIGOYRHVTXFQHSVXRQUHAKMEPNPLHIEZVYOOILDIVCWDWQRGYKFBYRWZOCGAMMBYJKUJBAQRLYUFDZVSPPETGPTHFZNFUANXGMTOYVNLDRRVZWKKAXYIXMALJZNEGUFLTMDRKLWSIPBSNPFMSPXHWJEBIJXAMITQSABGTKSNDCTWCZDGBOWGHBCFLSBNQUUOAIJVOPKYEUETJEWGVQHQTJDKRXOMZEC");
    msg.lbearing = 0.887496292693;
    msg.lelevation = 0.815418585255;
    msg.bearing = 0.301305382432;
    msg.elevation = 0.483305308045;
    msg.phi = 0.036150359997;
    msg.theta = 0.763979619648;
    msg.psi = 0.823223184799;
    msg.accuracy = 0.394909489522;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.102962374965);
    msg.setSource(46778U);
    msg.setSourceEntity(38U);
    msg.setDestination(13359U);
    msg.setDestinationEntity(135U);
    msg.target.assign("NTBYQOQCAJKCDPZOLBVVNEGDOZDWHMDZLGVWERHSQMJRADVZTINILRHELXWKTYBFGQTUITGSLFOROSWXGGYMSHUGHCSQCQMIFXPWJNMRLFXFSSKQUBHLTSJWYZDNKMNAMSPVXYJ");
    msg.lbearing = 0.523304505147;
    msg.lelevation = 0.57356651401;
    msg.bearing = 0.982509000686;
    msg.elevation = 0.800919750669;
    msg.phi = 0.988098512019;
    msg.theta = 0.666855532723;
    msg.psi = 0.0445006885115;
    msg.accuracy = 0.621764168029;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.307915307726);
    msg.setSource(8542U);
    msg.setSourceEntity(164U);
    msg.setDestination(1112U);
    msg.setDestinationEntity(119U);
    msg.target.assign("UFUUGANGUCTWNSGLICGJFQJEIASTQIKDEOVRWSYNCGAVXOXTHTNNORBSZJKVQSOVBZEVCCYEBAURPZAOXJORWMPPHEQDKBSKJLYXZRVDEMAAJMDMGWHYTKFOHKUBURQPHMAEWRIMUBQGLYCFNGOFQHZBKIHWZLOSBSWADBEZLZEVFQJCNXJMTLWDCBGFLWYVKHZQDTINYCTQPJIGFYXRNLITXFPPYTHYRNUDXDRFMVMWLUID");
    msg.x = 0.652654917802;
    msg.y = 0.94932953857;
    msg.z = 0.982603665206;
    msg.n = 0.249559174889;
    msg.e = 0.665574199849;
    msg.d = 0.836468200872;
    msg.phi = 0.482075046592;
    msg.theta = 0.177540026256;
    msg.psi = 0.930092330587;
    msg.accuracy = 0.822984917848;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.217426418073);
    msg.setSource(25102U);
    msg.setSourceEntity(174U);
    msg.setDestination(8685U);
    msg.setDestinationEntity(33U);
    msg.target.assign("JJYOQPYNEEMWDDNYDXJASWXGIOKOSMGQPUGOVBACEGZTRVPVKLESLKXNNEBTRPVFXHGAZHROUUJAMIZOQKWQTWIYBVMKYBBSHQWSREXRNEJUFJFNWVWDGMUZRWLSZESXOPZDNITLORICLJLVIEKZTUJLGDAALPJOSLMKSHMHKRHXUZSYFQNPICAWFQCMCUVGZKIFBPHAFOVYNGLXCJ");
    msg.x = 0.231385379955;
    msg.y = 0.627651790393;
    msg.z = 0.138238528138;
    msg.n = 0.774085056032;
    msg.e = 0.183386392168;
    msg.d = 0.16884202125;
    msg.phi = 0.525543215929;
    msg.theta = 0.787812397253;
    msg.psi = 0.267210488575;
    msg.accuracy = 0.879616891562;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.960722770294);
    msg.setSource(8858U);
    msg.setSourceEntity(108U);
    msg.setDestination(41366U);
    msg.setDestinationEntity(243U);
    msg.target.assign("FCMXCEOAADWQLUVOATXBYRADLYAZWDNYRVWAEZSZBFEVGZBMIALMRCHNMDKGWNVNTEUFZBDPFZKF");
    msg.x = 0.751496076359;
    msg.y = 0.571922339557;
    msg.z = 0.0677217789866;
    msg.n = 0.751329520765;
    msg.e = 0.508004075166;
    msg.d = 0.648326091341;
    msg.phi = 0.663569655126;
    msg.theta = 0.679195864734;
    msg.psi = 0.370167175541;
    msg.accuracy = 0.801348116689;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.42883701608);
    msg.setSource(15294U);
    msg.setSourceEntity(1U);
    msg.setDestination(23397U);
    msg.setDestinationEntity(167U);
    msg.target.assign("EVIBXAFUUCQCKHIEVSHNQQWRBAECCZKNCFBLBGKSDRRYNYYQETJSWQSLOCTKWFXPUCIJCAGSAIJUG");
    msg.lat = 0.404907193086;
    msg.lon = 0.111040320128;
    msg.z_units = 66U;
    msg.z = 0.347006817242;
    msg.accuracy = 0.933010959215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.368770525831);
    msg.setSource(63107U);
    msg.setSourceEntity(128U);
    msg.setDestination(27690U);
    msg.setDestinationEntity(171U);
    msg.target.assign("JTEPMLVCBJXDWKVIDXNJFRKQWEGGIADNYQNWSYCUCHOZOPAOYNPYNFXG");
    msg.lat = 0.903046675702;
    msg.lon = 0.802323539959;
    msg.z_units = 47U;
    msg.z = 0.19606918679;
    msg.accuracy = 0.320035429863;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.265885999426);
    msg.setSource(4704U);
    msg.setSourceEntity(109U);
    msg.setDestination(17528U);
    msg.setDestinationEntity(84U);
    msg.target.assign("WIJRHEDFOKRSPRWLJDFZUGYFXCXFVBTNUCVOOWCXTPBETVSUWRHCLSCDBVRKVZOKHMIYAMGZ");
    msg.lat = 0.353974066505;
    msg.lon = 0.316635915643;
    msg.z_units = 136U;
    msg.z = 0.847320650958;
    msg.accuracy = 0.800958860858;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.00628486503492);
    msg.setSource(11601U);
    msg.setSourceEntity(2U);
    msg.setDestination(61885U);
    msg.setDestinationEntity(90U);
    msg.name.assign("XKTEWKWERTTNTVRTYXNDIBBLSDUAZYPGKGUQLOZJFYQHQHXGRTZBIMVKLSFWNASLZJDGBSVXEZTFPNZIGGCQDYNYCJPVDMEDKUIJFQMLDQPZOBOHTSCIMNMMCVOMRJBQFXLBJYFESPFSMNFNSHUCVNNDGRVYYGLWWRKDOIWPAIMKOJEGAQUSORZOHCCUUHPEJBCICVIHVAZPXARHJSILADORKWXYWXCVJOAAHMBFAKE");
    msg.lat = 0.843776768085;
    msg.lon = 0.574490430618;
    msg.z = 0.460971733679;
    msg.z_units = 122U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.910058747281);
    msg.setSource(40145U);
    msg.setSourceEntity(130U);
    msg.setDestination(6585U);
    msg.setDestinationEntity(207U);
    msg.name.assign("XBBTQKOHUXAFZFUYVKXLVGSEJVTDCDSZNJYKNVENIEDVNRGPTELJDFVNVOQISADCWGXWOMYRUMGZLQBSCFAALHHCLQRBFHXJJMFFDOUMRHKUPHZKMEWATBXIPBTHZPNTFYCYKSUZIOTEKZWVALKZAJTOYYMHRIDBQUGLQCWWBAUCMQRINGWMF");
    msg.lat = 0.571054034741;
    msg.lon = 0.630303189845;
    msg.z = 0.197008753638;
    msg.z_units = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.872941834565);
    msg.setSource(64240U);
    msg.setSourceEntity(205U);
    msg.setDestination(11319U);
    msg.setDestinationEntity(24U);
    msg.name.assign("ZWZOXLIETFWPIBOUVGROPEIQJYVJNADHKGWNUMGLNSHTERHAWZCXIDSAISKIEZU");
    msg.lat = 0.493450582427;
    msg.lon = 0.408937708019;
    msg.z = 0.827873371389;
    msg.z_units = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.598101549148);
    msg.setSource(28506U);
    msg.setSourceEntity(158U);
    msg.setDestination(45934U);
    msg.setDestinationEntity(197U);
    msg.op = 3U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("QNTOEICOKSRZGVSFIGRCWVXSPFYCYSMYGGELDDHCTANWCXMQERLJHDJOMURWMZPSLFGVSRROBDXMMNLKAOTZRRQVXHCXFA");
    tmp_msg_0.lat = 0.405835916889;
    tmp_msg_0.lon = 0.69185562335;
    tmp_msg_0.z = 0.0495837153197;
    tmp_msg_0.z_units = 201U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.523542412714);
    msg.setSource(33104U);
    msg.setSourceEntity(229U);
    msg.setDestination(17716U);
    msg.setDestinationEntity(64U);
    msg.op = 178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.387713817452);
    msg.setSource(7434U);
    msg.setSourceEntity(193U);
    msg.setDestination(32083U);
    msg.setDestinationEntity(70U);
    msg.op = 218U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("WHYFRSEHMCPNKGPWKZWDRIHLBCORATWRJDCFTIPVTBPBMJDNTDIZNUJISCLVAYJJYBFFPTXSHAFDZUTJQJXUNEVOQVBIDGCLADLNLGMLEBMQPUYYKXSNEPNHZISMACOPDFTWHTGSQMFTJIAMYGGCWMUGDRMHAXXMTJEQJZYOXCKNLUHUSHWZKVSLBKORBKPQIVZZFUIVQNEOKRXGEUEHYKVNYEGQYORZUXGEQSIROSRAVFFCWVPWBZALOX");
    tmp_msg_0.lat = 0.525953971866;
    tmp_msg_0.lon = 0.848404934056;
    tmp_msg_0.z = 0.969465572186;
    tmp_msg_0.z_units = 200U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.321668288074);
    msg.setSource(33244U);
    msg.setSourceEntity(101U);
    msg.setDestination(6501U);
    msg.setDestinationEntity(217U);
    msg.value = 0.28607946458;
    msg.type = 11U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.270095103857);
    msg.setSource(20644U);
    msg.setSourceEntity(99U);
    msg.setDestination(61271U);
    msg.setDestinationEntity(172U);
    msg.value = 0.713129241253;
    msg.type = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.207559389585);
    msg.setSource(52800U);
    msg.setSourceEntity(254U);
    msg.setDestination(45067U);
    msg.setDestinationEntity(232U);
    msg.value = 0.516618901914;
    msg.type = 38U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.857864088984);
    msg.setSource(41038U);
    msg.setSourceEntity(113U);
    msg.setDestination(64366U);
    msg.setDestinationEntity(194U);
    msg.value = 0.362813598843;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.82651952343);
    msg.setSource(63059U);
    msg.setSourceEntity(77U);
    msg.setDestination(22189U);
    msg.setDestinationEntity(129U);
    msg.value = 0.710411338863;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.883543526868);
    msg.setSource(7981U);
    msg.setSourceEntity(60U);
    msg.setDestination(61827U);
    msg.setDestinationEntity(52U);
    msg.value = 0.746109099214;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.0785361261536);
    msg.setSource(14947U);
    msg.setSourceEntity(31U);
    msg.setDestination(45988U);
    msg.setDestinationEntity(101U);
    msg.timestamp_last_service = 0.64842158476;
    msg.time_next_service = 0.729682049528;
    msg.time_motor_next_service = 0.686761424343;
    msg.time_idle_ground = 0.366247637141;
    msg.time_idle_air = 0.539468737755;
    msg.time_idle_water = 0.539510925139;
    msg.time_idle_underwater = 0.891090902902;
    msg.time_idle_unknown = 0.981863563655;
    msg.time_motor_ground = 0.59430238334;
    msg.time_motor_air = 0.265566895174;
    msg.time_motor_water = 0.452026179696;
    msg.time_motor_underwater = 0.416179146922;
    msg.time_motor_unknown = 0.0289893912289;
    msg.rpm_min = -357;
    msg.rpm_max = 23320;
    msg.depth_max = 0.920716391105;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.350581160315);
    msg.setSource(35420U);
    msg.setSourceEntity(90U);
    msg.setDestination(23058U);
    msg.setDestinationEntity(162U);
    msg.timestamp_last_service = 0.485561063643;
    msg.time_next_service = 0.906187328985;
    msg.time_motor_next_service = 0.684066304307;
    msg.time_idle_ground = 0.39462355841;
    msg.time_idle_air = 0.202996472191;
    msg.time_idle_water = 0.955831266172;
    msg.time_idle_underwater = 0.0321435549343;
    msg.time_idle_unknown = 0.838540391302;
    msg.time_motor_ground = 0.374366023564;
    msg.time_motor_air = 0.340390696957;
    msg.time_motor_water = 0.423360527253;
    msg.time_motor_underwater = 0.4425144757;
    msg.time_motor_unknown = 0.991594662263;
    msg.rpm_min = 10626;
    msg.rpm_max = -17573;
    msg.depth_max = 0.967569668723;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.947287792664);
    msg.setSource(62051U);
    msg.setSourceEntity(122U);
    msg.setDestination(43706U);
    msg.setDestinationEntity(243U);
    msg.timestamp_last_service = 0.651105373413;
    msg.time_next_service = 0.307219642364;
    msg.time_motor_next_service = 0.499792311911;
    msg.time_idle_ground = 0.0862858537903;
    msg.time_idle_air = 0.0591719119771;
    msg.time_idle_water = 0.22471562203;
    msg.time_idle_underwater = 0.841706590647;
    msg.time_idle_unknown = 0.893644726759;
    msg.time_motor_ground = 0.53835593269;
    msg.time_motor_air = 0.493489766445;
    msg.time_motor_water = 0.804057822102;
    msg.time_motor_underwater = 0.758243690963;
    msg.time_motor_unknown = 0.8017816264;
    msg.rpm_min = 8431;
    msg.rpm_max = -10345;
    msg.depth_max = 0.930816276476;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.386447740034);
    msg.setSource(49621U);
    msg.setSourceEntity(119U);
    msg.setDestination(43561U);
    msg.setDestinationEntity(56U);
    msg.severity = 106U;
    msg.text.assign("MDRNEKHWWIAIZGJBOKKYPCJONMYHJYRAGSMWPNKOACLFXPWEPSD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.646710591698);
    msg.setSource(1464U);
    msg.setSourceEntity(1U);
    msg.setDestination(50048U);
    msg.setDestinationEntity(50U);
    msg.severity = 122U;
    msg.text.assign("ADTNNFWFOLNULNQDBATIYJSUEOOHPGCLXSFXVAJODBWQYHKUQTBVGXVWFHRWSKNKCIONPTEPAZLOUVBSTZZBFJDCVPSFITYKTBHQYCEHJVEQMJZXLWUVVFXYRMSVDKQKSIQZRUJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.425023980925);
    msg.setSource(56619U);
    msg.setSourceEntity(236U);
    msg.setDestination(60681U);
    msg.setDestinationEntity(243U);
    msg.severity = 128U;
    msg.text.assign("IOOTJLPOXVAOMQNFXNLFJATYPSANNJCOIDTGCDDQDJYWOLHHSFXODBQJZXDSMRXLGYQKHLXQRKUBMRUHIKGDVOZHNENJICKAQPTNWJPMCOSFYVKQMJNBVBLCXHGEFWTVFYCTIAIDNWWSVLBZVBUXBUYUVTSAASPEEHDLZZUQHPFGZZECBCRQYRPYZTWKEEIDPMKSEZPKPUWFAIGMERVLZWBAHGOKQIJTMIXFRSBWCRUMRWGJRCSGAV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.0566517088108);
    msg.setSource(17608U);
    msg.setSourceEntity(175U);
    msg.setDestination(61506U);
    msg.setDestinationEntity(109U);
    msg.channel = -55;
    msg.value = -1576372526;
    msg.gain = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.607783880373);
    msg.setSource(49263U);
    msg.setSourceEntity(158U);
    msg.setDestination(46462U);
    msg.setDestinationEntity(147U);
    msg.channel = 26;
    msg.value = -715515131;
    msg.gain = 169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.39816175202);
    msg.setSource(25896U);
    msg.setSourceEntity(217U);
    msg.setDestination(20059U);
    msg.setDestinationEntity(56U);
    msg.channel = -121;
    msg.value = 1840882472;
    msg.gain = 180U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.782779098365);
    msg.setSource(36230U);
    msg.setSourceEntity(99U);
    msg.setDestination(47708U);
    msg.setDestinationEntity(131U);
    msg.ch01 = 0.745540486727;
    msg.ch02 = 0.99451035093;
    msg.ch03 = 0.98594760631;
    msg.ch04 = 0.70763490662;
    msg.ch05 = 0.373753172837;
    msg.ch06 = 0.0270162841281;
    msg.ch07 = 0.846724004634;
    msg.ch08 = 0.87512370465;
    msg.ch09 = 0.576127805087;
    msg.ch10 = 0.424293789255;
    msg.ch11 = 0.19878567463;
    msg.ch12 = 0.886686974963;
    msg.ch13 = 0.913715093099;
    msg.ch14 = 0.355088973727;
    msg.ch15 = 0.0986722642281;
    msg.ch16 = 0.155618083349;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.696030623238);
    msg.setSource(6167U);
    msg.setSourceEntity(133U);
    msg.setDestination(28254U);
    msg.setDestinationEntity(101U);
    msg.ch01 = 0.520945700683;
    msg.ch02 = 0.301024227968;
    msg.ch03 = 0.214335295865;
    msg.ch04 = 0.808152074454;
    msg.ch05 = 0.251913376359;
    msg.ch06 = 0.503088099132;
    msg.ch07 = 0.232879982119;
    msg.ch08 = 0.0188573824371;
    msg.ch09 = 0.598049119491;
    msg.ch10 = 0.420169289288;
    msg.ch11 = 0.49653168902;
    msg.ch12 = 0.51802361614;
    msg.ch13 = 0.804058548613;
    msg.ch14 = 0.545717256642;
    msg.ch15 = 0.583081503099;
    msg.ch16 = 0.528546351673;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.776996935191);
    msg.setSource(20946U);
    msg.setSourceEntity(197U);
    msg.setDestination(17260U);
    msg.setDestinationEntity(242U);
    msg.ch01 = 0.507135185893;
    msg.ch02 = 0.555961584949;
    msg.ch03 = 0.905473962878;
    msg.ch04 = 0.323620364731;
    msg.ch05 = 0.446105796782;
    msg.ch06 = 0.373263191498;
    msg.ch07 = 0.881279065969;
    msg.ch08 = 0.314946935957;
    msg.ch09 = 0.0922819854202;
    msg.ch10 = 0.250667116785;
    msg.ch11 = 0.888497101234;
    msg.ch12 = 0.822802147595;
    msg.ch13 = 0.95627947251;
    msg.ch14 = 0.630394220046;
    msg.ch15 = 0.196716088488;
    msg.ch16 = 0.0739642438044;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassHeading msg;
    msg.setTimeStamp(0.746259103208);
    msg.setSource(41541U);
    msg.setSourceEntity(80U);
    msg.setDestination(54617U);
    msg.setDestinationEntity(222U);
    msg.time = 0.662960711636;
    msg.ang = 0.333958511696;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassHeading msg;
    msg.setTimeStamp(0.165862052751);
    msg.setSource(54821U);
    msg.setSourceEntity(9U);
    msg.setDestination(2129U);
    msg.setDestinationEntity(154U);
    msg.time = 0.960063878194;
    msg.ang = 0.556970030967;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassHeading msg;
    msg.setTimeStamp(0.979825755322);
    msg.setSource(63511U);
    msg.setSourceEntity(9U);
    msg.setDestination(56511U);
    msg.setDestinationEntity(250U);
    msg.time = 0.914935529147;
    msg.ang = 0.86373751797;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.0801029962594);
    msg.setSource(58237U);
    msg.setSourceEntity(243U);
    msg.setDestination(52123U);
    msg.setDestinationEntity(10U);
    msg.value = 0.835091347728;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.785715242798);
    msg.setSource(26229U);
    msg.setSourceEntity(202U);
    msg.setDestination(39658U);
    msg.setDestinationEntity(102U);
    msg.value = 0.334934020153;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.618691106547);
    msg.setSource(819U);
    msg.setSourceEntity(247U);
    msg.setDestination(53757U);
    msg.setDestinationEntity(237U);
    msg.value = 0.0957057794808;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Power msg;
    msg.setTimeStamp(0.799961448915);
    msg.setSource(16309U);
    msg.setSourceEntity(6U);
    msg.setDestination(55532U);
    msg.setDestinationEntity(176U);
    msg.value = 0.267549882986;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Power #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Power msg;
    msg.setTimeStamp(0.868285605932);
    msg.setSource(14266U);
    msg.setSourceEntity(233U);
    msg.setDestination(52515U);
    msg.setDestinationEntity(126U);
    msg.value = 0.305286679953;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Power #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Power msg;
    msg.setTimeStamp(0.773085189045);
    msg.setSource(41623U);
    msg.setSourceEntity(117U);
    msg.setDestination(31571U);
    msg.setDestinationEntity(108U);
    msg.value = 0.403249900494;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Power #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedFreq msg;
    msg.setTimeStamp(0.51061637823);
    msg.setSource(16205U);
    msg.setSourceEntity(103U);
    msg.setDestination(10852U);
    msg.setDestinationEntity(85U);
    msg.value = 0.470981473321;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedFreq #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedFreq msg;
    msg.setTimeStamp(0.130843659031);
    msg.setSource(25764U);
    msg.setSourceEntity(101U);
    msg.setDestination(24414U);
    msg.setDestinationEntity(228U);
    msg.value = 0.686365838304;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedFreq #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedFreq msg;
    msg.setTimeStamp(0.387502568925);
    msg.setSource(27445U);
    msg.setSourceEntity(32U);
    msg.setDestination(20309U);
    msg.setDestinationEntity(250U);
    msg.value = 0.38926962998;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedFreq #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerSettings msg;
    msg.setTimeStamp(0.611133318562);
    msg.setSource(15713U);
    msg.setSourceEntity(155U);
    msg.setDestination(9826U);
    msg.setDestinationEntity(12U);
    msg.l2 = 50;
    msg.l3 = 32;
    msg.iridium = -122;
    msg.modem = 113;
    msg.pumps = -14;
    msg.vhf = 64;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerSettings msg;
    msg.setTimeStamp(0.758723992494);
    msg.setSource(60434U);
    msg.setSourceEntity(100U);
    msg.setDestination(43111U);
    msg.setDestinationEntity(253U);
    msg.l2 = 10;
    msg.l3 = -44;
    msg.iridium = -18;
    msg.modem = -58;
    msg.pumps = -18;
    msg.vhf = -47;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerSettings msg;
    msg.setTimeStamp(0.267334614813);
    msg.setSource(55927U);
    msg.setSourceEntity(146U);
    msg.setDestination(42872U);
    msg.setDestinationEntity(177U);
    msg.l2 = 70;
    msg.l3 = -92;
    msg.iridium = 87;
    msg.modem = 18;
    msg.pumps = -122;
    msg.vhf = -126;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VesselWind msg;
    msg.setTimeStamp(0.925469401395);
    msg.setSource(2644U);
    msg.setSourceEntity(59U);
    msg.setDestination(25236U);
    msg.setDestinationEntity(3U);
    msg.angle = 0.926122768379;
    msg.reference.assign("WCIKHIZHRZZOBABYPSXSMSORKIKIHEHLFDENVIGVYBMUMHGBTMXMYIEUQJWUDAASJEGE");
    msg.speed = 0.725392279624;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VesselWind #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VesselWind msg;
    msg.setTimeStamp(0.891377485122);
    msg.setSource(5810U);
    msg.setSourceEntity(167U);
    msg.setDestination(18626U);
    msg.setDestinationEntity(128U);
    msg.angle = 0.0125558080708;
    msg.reference.assign("LAHOPODAPWWIINMKBMPEMMSVASUUNGTNQKDAMZAVNJLREHYZJXEAUBTHCYXBHXLPOQQAGQVZLSXWJGLTBDPFWAUWYKMFOEHWMDLJOBHSGKLBIJQUVPEJWZGR");
    msg.speed = 0.16616219636;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VesselWind #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VesselWind msg;
    msg.setTimeStamp(0.717788408147);
    msg.setSource(35322U);
    msg.setSourceEntity(219U);
    msg.setDestination(6808U);
    msg.setDestinationEntity(46U);
    msg.angle = 0.651197538063;
    msg.reference.assign("JDPDZNSJFQIZIFMDRUQGFGAIVXOXGQLFPOESWWJLKSRZFWAYDAOCWNXPMUBZVEUAJFOWLVDZA");
    msg.speed = 0.726294320805;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VesselWind #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeWind msg;
    msg.setTimeStamp(0.194363016752);
    msg.setSource(35721U);
    msg.setSourceEntity(47U);
    msg.setDestination(24950U);
    msg.setDestinationEntity(105U);
    msg.angle = 0.371649265735;
    msg.direction.assign("SVSWWVGQYOKURELPGZLJKHJTBFBVTFNYAKBWPYGHNVKDUMWDFIZPMQYINIQFRFUTCUJTJWQNRYYPRHFXVYRHLDKIESEUMLHXVOXPENWZTRSGWUSFSOAMJICCVAFOMPCOKZXALFGZMEQYOBHMSUVXCXADKHARBZLWQOZNYAJECQZZSQGJVKSPBHHGOLLBCUITBDTNCACDRTGDHRAPJBXJLDIMQMEIEIXYPSQCKXDIFENKBOXUALO");
    msg.speed = 0.259222545408;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeWind #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeWind msg;
    msg.setTimeStamp(0.877639876222);
    msg.setSource(62079U);
    msg.setSourceEntity(62U);
    msg.setDestination(31945U);
    msg.setDestinationEntity(23U);
    msg.angle = 0.643348711195;
    msg.direction.assign("WIFWIPUUUHPJZXNKBFDLPYRCESCFKT");
    msg.speed = 0.131116249859;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeWind #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeWind msg;
    msg.setTimeStamp(0.542825838321);
    msg.setSource(34305U);
    msg.setSourceEntity(204U);
    msg.setDestination(19066U);
    msg.setDestinationEntity(124U);
    msg.angle = 0.27089272942;
    msg.direction.assign("JPAURRCQHQVJTPLKBRUOWMAZGSAIYLZSTMNEIPGSUNIAZALMDCXEHFVRTSMPCNDHTXQOYTQPKFLUDKABNFCQWOASXBCDRNYJVDEFGHEDBMMUMIPWOVYXGLSKVGNMHDOZGYWBGJBNWRZCBXQINOUFWSEHSLKEWAAOTMCFPZCYJZSODXVLGPCTTWBJYQI");
    msg.speed = 0.752929497392;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeWind #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentVelocity msg;
    msg.setTimeStamp(0.123582843357);
    msg.setSource(61999U);
    msg.setSourceEntity(103U);
    msg.setDestination(52991U);
    msg.setDestinationEntity(49U);
    msg.x = 0.542805301016;
    msg.y = 0.179953900855;
    msg.z1 = 0.291763507888;
    msg.z2 = 0.501569489564;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentVelocity msg;
    msg.setTimeStamp(0.0329683071801);
    msg.setSource(49141U);
    msg.setSourceEntity(211U);
    msg.setDestination(27834U);
    msg.setDestinationEntity(39U);
    msg.x = 0.579255836097;
    msg.y = 0.182926274819;
    msg.z1 = 0.807771109562;
    msg.z2 = 0.353307185682;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentVelocity msg;
    msg.setTimeStamp(0.575556443179);
    msg.setSource(59581U);
    msg.setSourceEntity(127U);
    msg.setDestination(20038U);
    msg.setDestinationEntity(124U);
    msg.x = 0.258951358854;
    msg.y = 0.781421699886;
    msg.z1 = 0.338845319911;
    msg.z2 = 0.806644940915;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticBackscatter msg;
    msg.setTimeStamp(0.646395184853);
    msg.setSource(24881U);
    msg.setSourceEntity(100U);
    msg.setDestination(34588U);
    msg.setDestinationEntity(238U);
    msg.beam1 = 0.955828222469;
    msg.beam2 = 0.222109624537;
    msg.beam3 = 0.517613454067;
    msg.beam4 = 0.508056075897;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticBackscatter msg;
    msg.setTimeStamp(0.501549755654);
    msg.setSource(11010U);
    msg.setSourceEntity(76U);
    msg.setDestination(64641U);
    msg.setDestinationEntity(81U);
    msg.beam1 = 0.922161929239;
    msg.beam2 = 0.41258657464;
    msg.beam3 = 0.917533507219;
    msg.beam4 = 0.0189689549715;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticBackscatter msg;
    msg.setTimeStamp(0.115696120103);
    msg.setSource(34502U);
    msg.setSourceEntity(21U);
    msg.setDestination(57805U);
    msg.setDestinationEntity(13U);
    msg.beam1 = 0.655610739408;
    msg.beam2 = 0.60304954708;
    msg.beam3 = 0.572040765005;
    msg.beam4 = 0.198338107576;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Correlation msg;
    msg.setTimeStamp(0.121215223175);
    msg.setSource(58254U);
    msg.setSourceEntity(107U);
    msg.setDestination(7333U);
    msg.setDestinationEntity(167U);
    msg.beam1 = 51U;
    msg.beam2 = 215U;
    msg.beam3 = 197U;
    msg.beam4 = 246U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Correlation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Correlation msg;
    msg.setTimeStamp(0.952608627589);
    msg.setSource(5782U);
    msg.setSourceEntity(108U);
    msg.setDestination(33335U);
    msg.setDestinationEntity(107U);
    msg.beam1 = 168U;
    msg.beam2 = 228U;
    msg.beam3 = 103U;
    msg.beam4 = 159U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Correlation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Correlation msg;
    msg.setTimeStamp(0.596601746526);
    msg.setSource(58177U);
    msg.setSourceEntity(252U);
    msg.setDestination(49913U);
    msg.setDestinationEntity(70U);
    msg.beam1 = 190U;
    msg.beam2 = 146U;
    msg.beam3 = 140U;
    msg.beam4 = 3U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Correlation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.931772148767);
    msg.setSource(16908U);
    msg.setSourceEntity(155U);
    msg.setDestination(9982U);
    msg.setDestinationEntity(168U);
    msg.cellposition = 132U;
    msg.x = 0.715956968589;
    msg.y = 0.180941310814;
    msg.z1 = 0.967393432644;
    msg.z2 = 0.689024270875;
    msg.amp0 = 0.54500804402;
    msg.amp1 = 0.935457071235;
    msg.amp2 = 0.413719222893;
    msg.amp3 = 0.879634703705;
    msg.cor0 = 195U;
    msg.cor1 = 133U;
    msg.cor2 = 245U;
    msg.cor3 = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.961562177426);
    msg.setSource(17323U);
    msg.setSourceEntity(202U);
    msg.setDestination(1894U);
    msg.setDestinationEntity(210U);
    msg.cellposition = 153U;
    msg.x = 0.21771497437;
    msg.y = 0.395344886364;
    msg.z1 = 0.572981543443;
    msg.z2 = 0.802797211744;
    msg.amp0 = 0.411689151123;
    msg.amp1 = 0.855936961836;
    msg.amp2 = 0.250840898597;
    msg.amp3 = 0.507508482836;
    msg.cor0 = 135U;
    msg.cor1 = 227U;
    msg.cor2 = 175U;
    msg.cor3 = 50U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.171732505695);
    msg.setSource(57649U);
    msg.setSourceEntity(244U);
    msg.setDestination(8638U);
    msg.setDestinationEntity(6U);
    msg.cellposition = 124U;
    msg.x = 0.726373040362;
    msg.y = 0.00155963161955;
    msg.z1 = 0.586273320493;
    msg.z2 = 0.203956435979;
    msg.amp0 = 0.905220795212;
    msg.amp1 = 0.193605190551;
    msg.amp2 = 0.917496491305;
    msg.amp3 = 0.438233663655;
    msg.cor0 = 97U;
    msg.cor1 = 108U;
    msg.cor2 = 26U;
    msg.cor3 = 19U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.12737194824);
    msg.setSource(11897U);
    msg.setSourceEntity(248U);
    msg.setDestination(7959U);
    msg.setDestinationEntity(34U);
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cellposition = 31U;
    tmp_msg_0.x = 0.591182842588;
    tmp_msg_0.y = 0.26562976589;
    tmp_msg_0.z1 = 0.763466718444;
    tmp_msg_0.z2 = 0.663234261256;
    tmp_msg_0.amp0 = 0.370093825235;
    tmp_msg_0.amp1 = 0.695898014282;
    tmp_msg_0.amp2 = 0.0382428418887;
    tmp_msg_0.amp3 = 0.493697208499;
    tmp_msg_0.cor0 = 95U;
    tmp_msg_0.cor1 = 91U;
    tmp_msg_0.cor2 = 133U;
    tmp_msg_0.cor3 = 251U;
    msg.currentprofile.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.471556213553);
    msg.setSource(65317U);
    msg.setSourceEntity(9U);
    msg.setDestination(24611U);
    msg.setDestinationEntity(167U);
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cellposition = 121U;
    tmp_msg_0.x = 0.187494141107;
    tmp_msg_0.y = 0.731598725827;
    tmp_msg_0.z1 = 0.161048844857;
    tmp_msg_0.z2 = 0.608358648136;
    tmp_msg_0.amp0 = 0.171516104261;
    tmp_msg_0.amp1 = 0.714494783622;
    tmp_msg_0.amp2 = 0.113968681945;
    tmp_msg_0.amp3 = 0.00330221667474;
    tmp_msg_0.cor0 = 184U;
    tmp_msg_0.cor1 = 120U;
    tmp_msg_0.cor2 = 108U;
    tmp_msg_0.cor3 = 145U;
    msg.currentprofile.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.0746274823837);
    msg.setSource(3511U);
    msg.setSourceEntity(105U);
    msg.setDestination(2295U);
    msg.setDestinationEntity(52U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}

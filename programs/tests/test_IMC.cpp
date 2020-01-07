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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 1f595091ca79f7a8a5e6402abbcfe0a5                            *
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
    msg.setTimeStamp(0.141767960151);
    msg.setSource(22484U);
    msg.setSourceEntity(42U);
    msg.setDestination(59547U);
    msg.setDestinationEntity(9U);
    msg.state = 218U;
    msg.flags = 249U;
    msg.description.assign("FPTGMDJEEKRWBLDWXFHPBKEZDHJSCBSCYVZFGECQMFIZDEXGWIYLAIINRHFDBOCTQCTTVYAIOUCONAOYBPTOHNKGFKXHMONYFTKSYSEEWLRGVDXTKXPNZQZQVQABARMKBKEMHQOIUCWSZSVBUORJHUAKYWZSHZEFULXQWNJVKVJNGSCLWPBPADJTDPDSURUSLHVFPVCLXUOCGZAYRGUAOXGXZRWTFITUDMLBLXPIIYEMYNNILWQQMGMHJRAJJP");

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
    msg.setTimeStamp(0.950716446683);
    msg.setSource(12662U);
    msg.setSourceEntity(10U);
    msg.setDestination(47919U);
    msg.setDestinationEntity(149U);
    msg.state = 137U;
    msg.flags = 250U;
    msg.description.assign("OXWEIPVOGENVUMEYNCVMHURCUNYXPZBVKJCMTRCAXNGSDOLBWOAYWMAM");

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
    msg.setTimeStamp(0.821972023533);
    msg.setSource(17610U);
    msg.setSourceEntity(160U);
    msg.setDestination(54593U);
    msg.setDestinationEntity(236U);
    msg.state = 49U;
    msg.flags = 207U;
    msg.description.assign("JQFXPOUFLJCOLAEVULJTMJUSKYJGNERLFPSAILSELXZWOFRAIBZYYUNAWOYDRTBIBHVBNGNVGFAVWQMDLPHJGMRISIMFKETAVDYYGKUFTJRUWRQDWINTEBBEXGIQHJWGNZCSACOAUEXKIDEWDLRDPNCQCT");

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
    msg.setTimeStamp(0.434716711233);
    msg.setSource(39922U);
    msg.setSourceEntity(103U);
    msg.setDestination(34799U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.0726850411791);
    msg.setSource(19001U);
    msg.setSourceEntity(240U);
    msg.setDestination(12617U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.606206306379);
    msg.setSource(47677U);
    msg.setSourceEntity(118U);
    msg.setDestination(10625U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.945819488672);
    msg.setSource(5977U);
    msg.setSourceEntity(51U);
    msg.setDestination(32908U);
    msg.setDestinationEntity(25U);
    msg.id = 165U;
    msg.label.assign("ACGFLKBAHQBPTHDISEUIOQJJCYPUIQJLXSPXRBZAMNMEWZQVBPGSRMKKCOMAGYSYRQSEYWFDVXKIOPLYLEGRCRZUWDBGZJWIRCGPGYIVTUNOCQIPEIOJKNJMJSHDGEVZNPHNKZRNDLACTHFVKIABFMLFQAZXSXTXFXFRHGMVHPHTRWQTCLUSUNNLBZHDQTSCAFOMJCBAEOVUZEWT");
    msg.component.assign("QTRGSDYFMHLACKAZIFLJLBBOMVVHXJTHXEYNIJCAGUQLIBNMPRJKIAZHNMSLYOTEAQFBINFJWVDTXUWNGGPJZVDPXSRFFKUUCXWNPSCOALTKGVDEGHIEYQHIPDKMPYFQBDIUUBHLRUDZAMTETDWLXKYMZQQBEA");
    msg.act_time = 43993U;
    msg.deact_time = 13165U;

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
    msg.setTimeStamp(0.241494478147);
    msg.setSource(4046U);
    msg.setSourceEntity(104U);
    msg.setDestination(59905U);
    msg.setDestinationEntity(188U);
    msg.id = 46U;
    msg.label.assign("SRKTFYXITWMMRXGGOGEHHDTSNNTIWJFWFFHQOATOXPHGNJJYLQGCUYXMGJFSLMCTMPBLNDACNPAMVUKBDUXGTECSZZXICVFHERWIRDQRNCJXIYBUPKNEZ");
    msg.component.assign("TLWWJMOWTWCBINGCGRXGCXFPRQFMOGJAUKBJOENIBUDXUKCHFEZOZYPEHOSNCTHGUPSIRRJQBAFOLJYZVJ");
    msg.act_time = 2017U;
    msg.deact_time = 45432U;

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
    msg.setTimeStamp(0.530777993951);
    msg.setSource(6247U);
    msg.setSourceEntity(159U);
    msg.setDestination(8464U);
    msg.setDestinationEntity(126U);
    msg.id = 65U;
    msg.label.assign("OWUGEPWCZKKSHPVVMWAFRCDIRTRKNMYNELZEYXYKDQAASVZSWJEICVXTLXCCERDZULZBTV");
    msg.component.assign("ZBPAXFVZFUUNTAMSWPOHJYWEVROWAXCOZDSFLKBLEBCNRBTCSLPOWBXQFCLPZKQDAXZWLBPNVAJLWNIVKKTFYVPAAXIXYUCDBIJKWDOYTOYQTEDEKOHDEBEUMQHEHMTQDDSIPICRZLUFRHZRDSRSSOGGSMTAUBHVGIMSQMPNEQMQKQRFNLRGHHJKOGXOIVLNTATYGPUUHJQAESZVCPRCFHMRFWUJYIWCYKMG");
    msg.act_time = 41697U;
    msg.deact_time = 10857U;

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
    msg.setTimeStamp(0.545975660331);
    msg.setSource(52333U);
    msg.setSourceEntity(79U);
    msg.setDestination(40623U);
    msg.setDestinationEntity(1U);
    msg.id = 109U;

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
    msg.setTimeStamp(0.0941593588672);
    msg.setSource(52612U);
    msg.setSourceEntity(15U);
    msg.setDestination(2801U);
    msg.setDestinationEntity(182U);
    msg.id = 19U;

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
    msg.setTimeStamp(0.181273500831);
    msg.setSource(24105U);
    msg.setSourceEntity(138U);
    msg.setDestination(24297U);
    msg.setDestinationEntity(115U);
    msg.id = 107U;

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
    msg.setTimeStamp(0.580812865459);
    msg.setSource(15071U);
    msg.setSourceEntity(206U);
    msg.setDestination(46753U);
    msg.setDestinationEntity(66U);
    msg.op = 183U;
    msg.list.assign("JJBCSHWAAMDEKGWCRYCTSDZRZOYKDWHXEHLOHGPGDXQJYKLIGOUCMUSAGFRKNO");

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
    msg.setTimeStamp(0.516603404599);
    msg.setSource(19483U);
    msg.setSourceEntity(104U);
    msg.setDestination(8752U);
    msg.setDestinationEntity(8U);
    msg.op = 142U;
    msg.list.assign("UXLZSUXOTJWHIRRSJPHXWQZNUWJLLFNNBONOCXIZZLXWHTAQHCKUGYSYYSAUMDFRVORQFLYWZBNJXRAXXHDGIOVYFPLILMUPVVVYJJYPAIBICIOMMVFJCEARBIKXTEFYMVNEPZCBGQMMOCHGCMGQWPETPFDKEODIKKABTIGDQJLZUVRWS");

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
    msg.setTimeStamp(0.581140513616);
    msg.setSource(25930U);
    msg.setSourceEntity(116U);
    msg.setDestination(32855U);
    msg.setDestinationEntity(32U);
    msg.op = 38U;
    msg.list.assign("QKYEYBRKAPUOZUJHGIFLJIVYZFRKCZFKEEALVKBXVWXNGAIGJOPKFPCZHDUIEXDI");

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
    msg.setTimeStamp(0.171411799208);
    msg.setSource(29350U);
    msg.setSourceEntity(54U);
    msg.setDestination(54577U);
    msg.setDestinationEntity(187U);
    msg.value = 141U;

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
    msg.setTimeStamp(0.685234679118);
    msg.setSource(62441U);
    msg.setSourceEntity(97U);
    msg.setDestination(63627U);
    msg.setDestinationEntity(165U);
    msg.value = 24U;

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
    msg.setTimeStamp(0.395969680192);
    msg.setSource(42246U);
    msg.setSourceEntity(116U);
    msg.setDestination(60422U);
    msg.setDestinationEntity(48U);
    msg.value = 210U;

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
    msg.setTimeStamp(0.418369445296);
    msg.setSource(62430U);
    msg.setSourceEntity(218U);
    msg.setDestination(47167U);
    msg.setDestinationEntity(112U);
    msg.consumer.assign("NNBJTYOWNSLMOABNLGBLJXZHVFGEDOIUTVUCBEBJWSSAQBEGITCELS");
    msg.message_id = 15894U;

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
    msg.setTimeStamp(0.547039302518);
    msg.setSource(23600U);
    msg.setSourceEntity(224U);
    msg.setDestination(23558U);
    msg.setDestinationEntity(107U);
    msg.consumer.assign("ERXDEDOFILRELUNPMRKHSUNUYTCWBQWXJYSVNPEESWGOWGCGHENCKYWAKLJRATGAAYXNVTIGSGKODYRLEGWFKAOZXUYBMXVAYYMDLPIZZCTSOQJADWVWVIQVNUMCVRCESOQHMBTQXKPDPDKMZFPTKMLDJXWANQPUADZILIQBVFOSXGOMJZIQ");
    msg.message_id = 21748U;

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
    msg.setTimeStamp(0.748582098452);
    msg.setSource(29251U);
    msg.setSourceEntity(191U);
    msg.setDestination(51824U);
    msg.setDestinationEntity(206U);
    msg.consumer.assign("YADLUTZMECDAUZYSZPFVLHLBFKXEWRIYWTBZYOBYXDHRWNQOKOIVCXXMDPPUEMUQJEWGQRAGKERKXFHPRVSCTTJBUVRDFJAJFPNUJDEFEMYGGQVSQGOGAOWEYLCNCYCBLZPGPHAOTIDFFZSAVFQKZWTBUROPMSCNNWXIRFDNJYAKJCVZDSGTAISIXVGZAOWKQPTHBSWLMVI");
    msg.message_id = 16745U;

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
    msg.setTimeStamp(0.0782756269032);
    msg.setSource(48999U);
    msg.setSourceEntity(252U);
    msg.setDestination(62826U);
    msg.setDestinationEntity(114U);
    msg.type = 100U;

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
    msg.setTimeStamp(0.606402601452);
    msg.setSource(60266U);
    msg.setSourceEntity(30U);
    msg.setDestination(61910U);
    msg.setDestinationEntity(71U);
    msg.type = 205U;

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
    msg.setTimeStamp(0.798328331132);
    msg.setSource(31595U);
    msg.setSourceEntity(108U);
    msg.setDestination(35063U);
    msg.setDestinationEntity(154U);
    msg.type = 172U;

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
    msg.setTimeStamp(0.87526925206);
    msg.setSource(18103U);
    msg.setSourceEntity(101U);
    msg.setDestination(37821U);
    msg.setDestinationEntity(237U);
    msg.op = 206U;

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
    msg.setTimeStamp(0.898819467875);
    msg.setSource(33863U);
    msg.setSourceEntity(118U);
    msg.setDestination(25414U);
    msg.setDestinationEntity(121U);
    msg.op = 178U;

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
    msg.setTimeStamp(0.966755337396);
    msg.setSource(28631U);
    msg.setSourceEntity(181U);
    msg.setDestination(27594U);
    msg.setDestinationEntity(122U);
    msg.op = 7U;

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
    msg.setTimeStamp(0.551274628037);
    msg.setSource(20997U);
    msg.setSourceEntity(241U);
    msg.setDestination(50640U);
    msg.setDestinationEntity(33U);
    msg.total_steps = 112U;
    msg.step_number = 64U;
    msg.step.assign("UNEEPZHAOAOAHSGVQQFTDYZQZIKPGKEQKWURFTMYBFVRWRGLBCZXKNMJYFDYVAYNDZQJLMIFPHRUMRMYKQSCWHAEVPLDKPVXCWHNHATYGNFKSIESRRJXWRIBTTUEHJJ");
    msg.flags = 53U;

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
    msg.setTimeStamp(0.263845578124);
    msg.setSource(35149U);
    msg.setSourceEntity(57U);
    msg.setDestination(26713U);
    msg.setDestinationEntity(213U);
    msg.total_steps = 195U;
    msg.step_number = 35U;
    msg.step.assign("CRHLDHFEEROLTKWPISHODV");
    msg.flags = 179U;

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
    msg.setTimeStamp(0.300337883514);
    msg.setSource(36544U);
    msg.setSourceEntity(216U);
    msg.setDestination(38436U);
    msg.setDestinationEntity(111U);
    msg.total_steps = 72U;
    msg.step_number = 120U;
    msg.step.assign("LVHNQWAGEJBTGKWCSPUOXTAHZPXZGXMSE");
    msg.flags = 15U;

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
    msg.setTimeStamp(0.0802568649852);
    msg.setSource(6568U);
    msg.setSourceEntity(23U);
    msg.setDestination(17668U);
    msg.setDestinationEntity(224U);
    msg.state = 196U;
    msg.error.assign("YNAUOGOEEOMOPKNHNHYXOFXPZNGMWTJSCRTHZGCKGUNATVCNCWRITWUDKUWZFUUBJXFTILPLXRIMEKPISQWXJCQJRPOFE");

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
    msg.setTimeStamp(0.972610556545);
    msg.setSource(43585U);
    msg.setSourceEntity(28U);
    msg.setDestination(5108U);
    msg.setDestinationEntity(131U);
    msg.state = 188U;
    msg.error.assign("YPMGSXRYJSKHNCKWUPMSDSIMXVGOWEVGSYYVFMYDIYNFZXKDWXQDTXJHQHYRUBBZPSEGTZOLUIBTUIZUIEAKTTQITNRKYGFHMJAVCQPQLJGBFOECPIGCQNXZRRUMIFCSZORCPUFILWDVLOEFMRDVHCGASAVUOLDBTKEQUADOHTROWQXSKYONPKJIOFHH");

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
    msg.setTimeStamp(0.558102647476);
    msg.setSource(33145U);
    msg.setSourceEntity(64U);
    msg.setDestination(8485U);
    msg.setDestinationEntity(68U);
    msg.state = 62U;
    msg.error.assign("KORQDPZYARNZRIUYZBUKHGZOVJEASDTBMKLXILJSDUECLXVAQDVPXIXJGMKBWFIFASICKMPVJGJOOUAGNQNQLRVMPREDGQSWKANVPGCHXPRMWSMQZOYYCDMVAYIPEQQWUEFWFTDWZWHPXRJOHZQEJRCDVCKUMIUKVYOTXTBLQABRFVYWLNHBTNESKURXGHCHHBAITJGBFLUGXJNCHFIPZHBTFFYTWTSMWJODDNEKYCZTMFLEIXNZGBUA");

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
    msg.setTimeStamp(0.840814461164);
    msg.setSource(35894U);
    msg.setSourceEntity(96U);
    msg.setDestination(48533U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.903801118881);
    msg.setSource(30204U);
    msg.setSourceEntity(208U);
    msg.setDestination(25567U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.369079406386);
    msg.setSource(32186U);
    msg.setSourceEntity(114U);
    msg.setDestination(63296U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.958891512759);
    msg.setSource(22561U);
    msg.setSourceEntity(111U);
    msg.setDestination(19397U);
    msg.setDestinationEntity(204U);
    msg.op = 49U;
    msg.speed_min = 0.936131313389;
    msg.speed_max = 0.906064610587;
    msg.long_accel = 0.726854639551;
    msg.alt_max_msl = 0.786334148014;
    msg.dive_fraction_max = 0.169572922638;
    msg.climb_fraction_max = 0.190247730431;
    msg.bank_max = 0.241311873549;
    msg.p_max = 0.430008610317;
    msg.pitch_min = 0.399184882237;
    msg.pitch_max = 0.700900757397;
    msg.q_max = 0.936095936074;
    msg.g_min = 0.839411171383;
    msg.g_max = 0.709901612846;
    msg.g_lat_max = 0.598869761197;
    msg.rpm_min = 0.254636753083;
    msg.rpm_max = 0.748326440212;
    msg.rpm_rate_max = 0.64697243046;

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
    msg.setTimeStamp(0.183624324043);
    msg.setSource(11712U);
    msg.setSourceEntity(103U);
    msg.setDestination(25163U);
    msg.setDestinationEntity(180U);
    msg.op = 235U;
    msg.speed_min = 0.574136724388;
    msg.speed_max = 0.334195388217;
    msg.long_accel = 0.55080995264;
    msg.alt_max_msl = 0.718720532021;
    msg.dive_fraction_max = 0.466081129302;
    msg.climb_fraction_max = 0.621681948036;
    msg.bank_max = 0.211323143268;
    msg.p_max = 0.54054303535;
    msg.pitch_min = 0.751167502892;
    msg.pitch_max = 0.686266898993;
    msg.q_max = 0.938766164049;
    msg.g_min = 0.952983384335;
    msg.g_max = 0.581270743523;
    msg.g_lat_max = 0.504682086664;
    msg.rpm_min = 0.798258762191;
    msg.rpm_max = 0.878918475894;
    msg.rpm_rate_max = 0.35968256439;

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
    msg.setTimeStamp(0.99523088771);
    msg.setSource(28450U);
    msg.setSourceEntity(50U);
    msg.setDestination(23952U);
    msg.setDestinationEntity(155U);
    msg.op = 141U;
    msg.speed_min = 0.997246553194;
    msg.speed_max = 0.439786604949;
    msg.long_accel = 0.569504510068;
    msg.alt_max_msl = 0.00558001068305;
    msg.dive_fraction_max = 0.494900745597;
    msg.climb_fraction_max = 0.725307944873;
    msg.bank_max = 0.222321870985;
    msg.p_max = 0.889471482453;
    msg.pitch_min = 0.73498726924;
    msg.pitch_max = 0.121647851035;
    msg.q_max = 0.858637234566;
    msg.g_min = 0.0374024113902;
    msg.g_max = 0.271163277162;
    msg.g_lat_max = 0.568364891809;
    msg.rpm_min = 0.710003795896;
    msg.rpm_max = 0.075462293187;
    msg.rpm_rate_max = 0.146776180308;

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
    msg.setTimeStamp(0.905810429493);
    msg.setSource(24406U);
    msg.setSourceEntity(68U);
    msg.setDestination(32587U);
    msg.setDestinationEntity(44U);
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("EBWMEECRARJDNFCCDEISMBHKSIUSCFHVXHZGLKINXKYXXBMRNEEFUINTMERJSQUTVTDWUXNFRPHFHRABXQS");
    tmp_msg_0.plan_size = 52164U;
    tmp_msg_0.change_time = 0.588974095355;
    tmp_msg_0.change_sid = 45295U;
    tmp_msg_0.change_sname.assign("WZCHFXJIXVFBUFKKRVDXBYRFXZDHCKKUWAITTNYAYTJSGZODTJQGAHCCDNRSARIGEXNTQIDSGCBSOVTPMREZSDXTAJKZPHAFNUPFMOCVDGGSJZYWHTXXXGMSXOPDHUNQUWBMEJAFYORPLKUOYSQZHMPQNMGUOWMJCVMBYFOMFYOHIKQBJBPVPBLLRADIAWLULNEQQCISGNWDIBWPWKKNEZIFWLJLBNVYVQRHQERRSTAEYHC");
    const char tmp_tmp_msg_0_0[] = {-54, -58, -68, -123, 98, -30, -35, 96, -109, -59, -107, 77, 41, -95, -73, -35, -74, 74, -110, -11, 28, 126, -49, -71, -42, 86, 45, -81};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.681349146296);
    msg.setSource(15794U);
    msg.setSourceEntity(52U);
    msg.setDestination(50829U);
    msg.setDestinationEntity(247U);
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.227389170701;
    tmp_msg_0.phi = 0.712679160852;
    tmp_msg_0.theta = 0.289296127577;
    tmp_msg_0.psi = 0.335840214189;
    tmp_msg_0.psi_magnetic = 0.252807148538;
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
    msg.setTimeStamp(0.763112125397);
    msg.setSource(54299U);
    msg.setSourceEntity(71U);
    msg.setDestination(13942U);
    msg.setDestinationEntity(41U);
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.286835523754;
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
    msg.setTimeStamp(0.0559215999339);
    msg.setSource(13812U);
    msg.setSourceEntity(48U);
    msg.setDestination(35882U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.84289900891;
    msg.lon = 0.00810387534914;
    msg.height = 0.845377209917;
    msg.x = 0.161706532406;
    msg.y = 0.284791193438;
    msg.z = 0.969914811271;
    msg.phi = 0.989750323398;
    msg.theta = 0.219779966044;
    msg.psi = 0.524771680003;
    msg.u = 0.460295433124;
    msg.v = 0.986924696957;
    msg.w = 0.83932671156;
    msg.p = 0.448469913401;
    msg.q = 0.335331131954;
    msg.r = 0.588185511027;
    msg.svx = 0.888644305524;
    msg.svy = 0.406738796453;
    msg.svz = 0.694266923529;

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
    msg.setTimeStamp(0.193919549632);
    msg.setSource(3608U);
    msg.setSourceEntity(102U);
    msg.setDestination(23798U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.32640539016;
    msg.lon = 0.793858834267;
    msg.height = 0.98785396545;
    msg.x = 0.712626025501;
    msg.y = 0.84432625031;
    msg.z = 0.61848884227;
    msg.phi = 0.660404874744;
    msg.theta = 0.697023733661;
    msg.psi = 0.562140117776;
    msg.u = 0.00744913108614;
    msg.v = 0.185125029588;
    msg.w = 0.0111217591998;
    msg.p = 0.875651846629;
    msg.q = 0.495749549071;
    msg.r = 0.720075420415;
    msg.svx = 0.968751551625;
    msg.svy = 0.283734772158;
    msg.svz = 0.89283202301;

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
    msg.setTimeStamp(0.0282407572022);
    msg.setSource(60984U);
    msg.setSourceEntity(97U);
    msg.setDestination(14071U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.684890112158;
    msg.lon = 0.832911805902;
    msg.height = 0.938405427933;
    msg.x = 0.957896874429;
    msg.y = 0.903569508241;
    msg.z = 0.549235978031;
    msg.phi = 0.822235068671;
    msg.theta = 0.651112418671;
    msg.psi = 0.88050406497;
    msg.u = 0.579740279482;
    msg.v = 0.0773822588757;
    msg.w = 0.928309294717;
    msg.p = 0.685194821353;
    msg.q = 0.779460643028;
    msg.r = 0.251339017283;
    msg.svx = 0.666786770885;
    msg.svy = 0.365525325851;
    msg.svz = 0.400066202718;

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
    msg.setTimeStamp(0.0812947218345);
    msg.setSource(61466U);
    msg.setSourceEntity(244U);
    msg.setDestination(8163U);
    msg.setDestinationEntity(253U);
    msg.op = 219U;
    msg.entities.assign("YQHDIIQFICWCKUWNPVYNXFJZUIIMYTFZRLRZZMGZSYENEQWVDOGBLMMFQOBEONSEYCDUCEIFEPZRUBGOTKKNKCSLATTOIXJUVLAMSJZUIBVWFGWRHACMSQVJTYYAEAJXVGDODBXDORQYQOXAWCKMLKBZQXKGDUNJKELXNHEWHFDQJVTSJIQRPIRTSGNGWSAZJXR");

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
    msg.setTimeStamp(0.616299073563);
    msg.setSource(18228U);
    msg.setSourceEntity(182U);
    msg.setDestination(38229U);
    msg.setDestinationEntity(103U);
    msg.op = 38U;
    msg.entities.assign("QZVBVGAQWJFZIYPHEIASFNXNKXAHMRVQIJPMPTXUKSXTYOFGOBAZFKQOJHCJWMEDXIRQJBGWLNVPMWTXPUZEWDBPARUSUEZNODZWEYHCQBTOLKQIGLRQVQLBGLHRCXYCAURSKSNWJBMDSPXMSEFJGYIPZKXTWDRIKZVHZJJBCTGFVYYNNSCWCTZNTAIHMNSUFCDOXTESDFPLIAEMUCQTEA");

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
    msg.setTimeStamp(0.471342740118);
    msg.setSource(4573U);
    msg.setSourceEntity(239U);
    msg.setDestination(38632U);
    msg.setDestinationEntity(116U);
    msg.op = 22U;
    msg.entities.assign("XRTSARBYKOMUWWZCFGQHFMESINDRMSQEPCUNKGBJVMAPBKZWFNLBLDQKHVNIJGRBSELCFUZDPVGGEYAQSMLUNQJBXPEVSPQIVBUEKNDYQGUFZCIUTYHWEXZXHSFZZFOMOUVWYYOTDPLNOLIXWKVTPJPDTQBCXHOJZATZEWXUKTMJWWAOIQXRNJQBDOXGTCKYSGCTRWMYSKAYLRKJAID");

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
    msg.setTimeStamp(0.257572897084);
    msg.setSource(10622U);
    msg.setSourceEntity(103U);
    msg.setDestination(63965U);
    msg.setDestinationEntity(7U);
    msg.type = 191U;
    msg.speed = 32065U;
    const char tmp_msg_0[] = {-17, -77, 21, -92, 102, -50, -31, -86, -43, -119, 125, -47, 35, 58, -119, -117, -125, -107, -82, 15, -107, -47, 20, 126, 27, -56, 5, -74, 26, -12, 37, -55, 90, -103, -98, 97, 123, -127, -51, 60, 82, 84, -65, 18, -102, 18, -100, -93, 87, -101, -39, 36, 1, -82, -69, -20, -107, -86, -56, 84, 84, -122, 105, -16, 17, 80, 58, 69, -25, -61, -38, -14, -52, 94, 46, 44, 104, -108, 46, 34, 84, 94, 88, -87, 54, -46, 20, -97, 105, -66, 33, -101, 66, 126, -120, -78, -128, -30, 108, -60, -105, 36, 102, 6, -87, 96, -25, 15, -120, -40, -76, -7, 67, -8, 21, -11, -52, -67, 123, 80, 41, 81, 109, 118, 125, -53, -53, 61, 41, 17, 104, 8, -102, -70, 98, 3, 49, -82, -73, 19, -62, -117, -5, 8, 88, 22, 104, 122, 11, -125, -101, 15, -47, -87, -90, 106, -117, -29, -3, -97, 102, 54, 3, 118, 98, 34, -36, 42, 74, 30, 14, 62, -68, -96, -114, -113, 41, -97, -119, 69, -9, -62, 107, 87, 30, -26, -106, -113, -124, -31, -108, -55, -73, 88, 78, 95, -27, 84, -79, 43, -15, -4, 96, 87, 55, 47, -68, -105, 79, -122, 59, -58, -47, 42, -126, 54, 84, -66, -89, 107, -32, -98, -55, -53, 88, 63, -54};
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
    msg.setTimeStamp(0.517145157285);
    msg.setSource(24692U);
    msg.setSourceEntity(115U);
    msg.setDestination(48144U);
    msg.setDestinationEntity(30U);
    msg.type = 205U;
    msg.speed = 41166U;
    const char tmp_msg_0[] = {28, -43, -73, -80, -25, 65, -78, -111, 20, -62, 68, -70, -15, 52, 89, 98, 56, 42, -51, 105, 48, -91, 55, 37, 35, 6, -30, 90, 67, -32, 84, 86, 33, -75, 11, 98, 57, 18, -114, 17, -27, 81, 103, -61, 32, -1, -90, -55, 121, 102, 55, 29, -88, -37, 118, -104, 23, -68, 111, 45, -36, 125, -35, 60, -82, 104, 7, -101, -86, 68, -59, -7, -84, -65, 105, 94, -78, 10, -61, -16, 25, 19, 14, 97, -10, -48, -102, 25, -107, -23, 45, 21, 87, -104, 82, -11, 3, 30, -28, -29, -110, 38, 81, 98, 37, 67, -88, 109, 19, -125, 17, 106, 34, -68, 115, 97, 101, -36, 6, -116, -92, -109, 69, -106, 8, 38, -14, 126, 37, 71, 110, 101, 39, -115, -87, -99, -96, -37, -101, -50, -72, -36, -2, -77, 7, -26, -25, 69, 7, -66, 51, 81, 28, 117, 41, 68, -51, -2, -119, 6, -83, 103, 92, 123, 22, -95, -68, 72, 36, -104, -121, 6, -4, 55, -38, -40, -7, 9, -66, 16, 101, 64, 92, 116, 55, 123, -51, 84, 91, 76, -71, 114, 90, -21, -46, 34, 4, 4, -87, -53, 34, -20, -83, -7, -115, 125, -4, 107, 2, 68, 54, 124, -46, -90, -83, -116, 87};
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
    msg.setTimeStamp(0.886572599988);
    msg.setSource(11335U);
    msg.setSourceEntity(144U);
    msg.setDestination(62699U);
    msg.setDestinationEntity(244U);
    msg.type = 249U;
    msg.speed = 62622U;
    const char tmp_msg_0[] = {43, 88, -20, 17, -21, 101, 41, -7, 62, 29, -81, -38, -1, -112, 55, 24, 86, -29, -57, 113, -110, -24, 66, -18, 96, 83, -82, -45, -74, 44, 58, 72, 45, 39, 88, -78, 121, -117, 108, -125, -124, -1, -123, -4, 104, -116, -79, 19, -38, -76, 6, 1, 71, 0, 40, -78, 33, 102, 26, 59, 3, 87, -35, -31, -53, -45, 122, 67, 19, 60, 80, -112, 49, 22, -18, -113, 39, 16, -10, 10, -75, 46, -86, -36, -89, -115, 75, -41, 112, 16, -41, -65, -93, -68, -37, 125, 122, -63, -126, 80, 9, 82, -5, -83, 103, 76, -61, 37, 71, -70, -45, 9, -101, -47, 39, 75, -124, -34, -32, 96, -66, -128, -21, -64, 21, -10, -64, -21, 92};
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
    msg.setTimeStamp(0.298755236379);
    msg.setSource(15496U);
    msg.setSourceEntity(197U);
    msg.setDestination(25785U);
    msg.setDestinationEntity(108U);
    msg.op = 183U;
    msg.tas2acc_pgain = 0.901655472195;
    msg.bank2p_pgain = 0.0406991198101;

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
    msg.setTimeStamp(0.297530019138);
    msg.setSource(9054U);
    msg.setSourceEntity(35U);
    msg.setDestination(60793U);
    msg.setDestinationEntity(251U);
    msg.op = 148U;
    msg.tas2acc_pgain = 0.864569395491;
    msg.bank2p_pgain = 0.323346015056;

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
    msg.setTimeStamp(0.147396348933);
    msg.setSource(64572U);
    msg.setSourceEntity(233U);
    msg.setDestination(57510U);
    msg.setDestinationEntity(11U);
    msg.op = 240U;
    msg.tas2acc_pgain = 0.542125752708;
    msg.bank2p_pgain = 0.476158070924;

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
    msg.setTimeStamp(0.264509352553);
    msg.setSource(19163U);
    msg.setSourceEntity(66U);
    msg.setDestination(13915U);
    msg.setDestinationEntity(177U);
    msg.available = 1853781717U;
    msg.value = 42U;

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
    msg.setTimeStamp(0.723434775626);
    msg.setSource(14228U);
    msg.setSourceEntity(59U);
    msg.setDestination(32747U);
    msg.setDestinationEntity(3U);
    msg.available = 2432741864U;
    msg.value = 229U;

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
    msg.setTimeStamp(0.0619320931451);
    msg.setSource(11738U);
    msg.setSourceEntity(168U);
    msg.setDestination(63090U);
    msg.setDestinationEntity(86U);
    msg.available = 3268572652U;
    msg.value = 216U;

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
    msg.setTimeStamp(0.559858365398);
    msg.setSource(19373U);
    msg.setSourceEntity(223U);
    msg.setDestination(24675U);
    msg.setDestinationEntity(33U);
    msg.op = 224U;
    msg.snapshot.assign("UYJMGWRKEPMGJWAYOEXDVUDDKJHSTZXPUXZHZGQMUWNAJCSDHVIWWSSTOMILZNKVFBICOHPGPXYRQUEUDLBRMOFBQYKRXQMBKPKVZFEATHGADFSWJLGQBOQUOTNTQEFLTJJZHYICPABTDLPKFIJIHIGVBAMEYLBNGTDSXYCVUOYXJPWTLNMBLAOSCKFZFYPCKCRNNIERFESGCJXRNMXVOVACHSXVNDCMZZA");
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 214U;
    tmp_msg_0.mode.assign("YHWJMOOOAMMNCTWBRCGUNTQBGJXLTJIYQFVBPFURJARYZQVYUQUGYSVOFYYESOCBCCXFNHAYSWALJWMHROPCXKJDDTMQWSSDVIBILAIPUMFNIUCSTFOSIIKHRZZWPPQHKCXEUPOLUXXOKZDIGFEUESLKXEMHKMTPHGGEMLXPNDACZNEHBAZKPZREJYDFZRM");
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
    msg.setTimeStamp(0.994518660482);
    msg.setSource(36126U);
    msg.setSourceEntity(44U);
    msg.setDestination(32590U);
    msg.setDestinationEntity(210U);
    msg.op = 140U;
    msg.snapshot.assign("EYPITWKSRDCKIMLIHWQFGEOMDLBSDQWXTMXOQLTHXKIMGJHRYIUOSGZTSTYFKQLKUNMHNCIOLVPBQAFNZMKVZWTBAQAXTNPTELMPYJJZWVTUERVPIDHGNWHOCYYLBYAHXPGCQGULRCDRAPFZACBXISVOZVJXZEPWOUNZUFBBUJREJABNCNRYKSYGCNSAKFPOMLP");
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 117U;
    tmp_msg_0.x = 0.186995762491;
    tmp_msg_0.y = 0.84252234942;
    tmp_msg_0.z = 0.567660181795;
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
    msg.setTimeStamp(0.787430517587);
    msg.setSource(33986U);
    msg.setSourceEntity(132U);
    msg.setDestination(40768U);
    msg.setDestinationEntity(106U);
    msg.op = 138U;
    msg.snapshot.assign("QFZAWWAZQORNKKHGJSUNFGVNJNKIHKQDVJFMPLZITCXRILJXSVCSBWSNMYRETPHRXDAAOSVXQYJAUEOQEGTUVOGDCRJGUKYOQPMEBPNCGPOQGTVDVOFUWATABDSXZYUPVHCEKDJRBWSBTICUWZW");
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 122U;
    tmp_msg_0.flags = 5U;
    tmp_msg_0.description.assign("KIUSONOGPPLYLHWCGSCBLVTN");
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
    msg.setTimeStamp(0.803580656193);
    msg.setSource(34066U);
    msg.setSourceEntity(133U);
    msg.setDestination(40592U);
    msg.setDestinationEntity(127U);
    msg.op = 82U;
    msg.name.assign("MXQUEXATHYHNQYZRTJEDVEHNJPBPLCOOCXRQOKBRQLZWFKHABVKTTPAIIGGZVOLVIYGVTHCYBDBAOAUKSSNXZCDKQWOMXBIILSPSVENCVGEFQKFPJEVSVJDZUFGDIHKPXRUCYZRPLFTQKLBYXSYDAGBBRFTEWGZHTLDXJNNJYGPRALOMMTFGKIZI");

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
    msg.setTimeStamp(0.275036525725);
    msg.setSource(22872U);
    msg.setSourceEntity(32U);
    msg.setDestination(51765U);
    msg.setDestinationEntity(90U);
    msg.op = 191U;
    msg.name.assign("EEMHCULNLJUXLELGZUUZFXHTZRFAWGNJCZJYIPPQNYLBMYJEAKWXRDWSKJPSDEHDRFKVWYIBXFHFYNHPBNUVCVJRYQIPBOYRHEESGRQITHMGIXSSUIVMCQGLATHOGDOJZCODMANWCUZXJLUND");

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
    msg.setTimeStamp(0.7019604417);
    msg.setSource(26296U);
    msg.setSourceEntity(13U);
    msg.setDestination(11219U);
    msg.setDestinationEntity(177U);
    msg.op = 192U;
    msg.name.assign("NWHFTZUJTDKASYSGWXWMRIKDMNSYINDKPIEGKXGBMAUPOUWFQJWHWUVQMRCPKTBQCUXVCGPQZWOLUIEAWYINAFFZJDNSRBOTPSLLOTJVXLRXOHCSNZVCDMSWCBBCEYQKXFAPDAPPUMILTHHQALIIFVGKZEGTTLKBSRVHGJRUYMVZU");

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
    msg.setTimeStamp(0.326713194054);
    msg.setSource(60389U);
    msg.setSourceEntity(54U);
    msg.setDestination(54876U);
    msg.setDestinationEntity(110U);
    msg.type = 109U;
    msg.htime = 0.248584226084;
    msg.context.assign("XCTYGWKCEIXPLIQ");
    msg.text.assign("ENCHAHHDZBGHZIBXKROWXQCYEFTODQXOPKTWTYXYMDO");

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
    msg.setTimeStamp(0.0978780870821);
    msg.setSource(50478U);
    msg.setSourceEntity(139U);
    msg.setDestination(41348U);
    msg.setDestinationEntity(178U);
    msg.type = 147U;
    msg.htime = 0.826914735951;
    msg.context.assign("BTIYPHWXNUKWIESWKFIQLFLZTJLUBVRJZCFAYATQDPHOWUXVXABUVNHZFCGFJIPGFJISYGDRTCKZEXXMQWLGGYNQKZRGIKDVRLDVSIHMLBYMLHRFNTGUSCMDERJROOTKSZSHATDYBESEYBNAYHCJJUNHVPAZEQUWPGPSPVFAOVRDDQMBSMEDEFLUGJQCWBFVZRIMMZPONHIQQMPKXTBOXEUOXKCCKNAKOXUWPTAGWMNRIDBLJEOYWXJNQLOZSA");
    msg.text.assign("UKTEQWUOAMWGWUHFQPVSLUIPASTOYGMLGOHIYQKRBBGXAZOYPMJZREHDVFVMCVIZNHCBZPRFJGHCUQKGZMELDXNNADSLMRNDSSNXWRGJXKQUSDKJUWOKFZRGBKTEIEHIDFBRLXIMOXAVAYEAEYXDHZXJBFBXLBPQKYJROZCMTF");

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
    msg.setTimeStamp(0.836156567267);
    msg.setSource(57037U);
    msg.setSourceEntity(47U);
    msg.setDestination(64112U);
    msg.setDestinationEntity(218U);
    msg.type = 178U;
    msg.htime = 0.189987856596;
    msg.context.assign("LVMYAHKBOHCXUISPUTQTJXFXSLRGNQWKWUQKQBWLRPXGFASHBIU");
    msg.text.assign("ZGWUOCNRYDEQAPMQLELAZHYVMJICKGUUHPYXCKRXMTCDJAJDMRLJVWRXOUWBWMSDGACEQAZBXANNEUPTVZDDKUABSPRGMNAYYTCPPOTSJMHYTRZQVGBNYLOIVLROCNIWBHNFXSKKFNIWUMUEZSFSUJOXHITKKSQLVHYSWBMQETBVLGDLOQXSXDQWEEZABTIFUIRKGNFQPOFVMVKHKTXFL");

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
    msg.setTimeStamp(0.72410389066);
    msg.setSource(23060U);
    msg.setSourceEntity(153U);
    msg.setDestination(60619U);
    msg.setDestinationEntity(187U);
    msg.command = 182U;
    msg.htime = 0.938873319677;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 227U;
    tmp_msg_0.htime = 0.0683535706493;
    tmp_msg_0.context.assign("OQMLQRIYUEPBELJZWAHMBICUDFVXNOTWVILGBBAANMAPIPRDLDUKFWBKSPYHKDXOBBTESSWYJYKGTMABPEZYSKWBHNYXXLDZHWNCCQSBCWJMDFHCOJUKLRVHLUNRVMJUTKTAIJCKWGQXEUYDFPKNFQUMWJCGSLVTZFRCQY");
    tmp_msg_0.text.assign("FTPMTGVXTKORAZGRTUEXPQOBQYHDMBDBMFWQ");
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
    msg.setTimeStamp(0.673808617713);
    msg.setSource(29497U);
    msg.setSourceEntity(127U);
    msg.setDestination(9039U);
    msg.setDestinationEntity(116U);
    msg.command = 239U;
    msg.htime = 0.147292617224;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 241U;
    tmp_msg_0.htime = 0.353986512119;
    tmp_msg_0.context.assign("WBNATTVIRHSBIBQHELTJJOCGYQOIWCGYNAKXFEDOFVSAZIOLDVOWYXRICYJMLDFEFCYCRTMPJKVJOUUUIKRE");
    tmp_msg_0.text.assign("CPAFEKGNYTSYVWTJLWTRPVDMWRSICGJLIKGLRQBXFUCXRIOAHJFBZUZEVKOVEVGSQKXTFABYAPJQBDXAFOYUBOEOJLHEOWFWATKJN");
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
    msg.setTimeStamp(0.833539028625);
    msg.setSource(46855U);
    msg.setSourceEntity(68U);
    msg.setDestination(60317U);
    msg.setDestinationEntity(119U);
    msg.command = 210U;
    msg.htime = 0.655834627059;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 146U;
    tmp_msg_0.htime = 0.162505332437;
    tmp_msg_0.context.assign("VFNPELPLCAOUPXZOTLGMZKXXJCCCWKUBXJAOZIVMOQSYCTHYQTDRLHDNVYTNANIHVHBFSPDGZVQBXRSKVEYFMMWCAWUPZGUNMXDGRQWGQLUOVIYTWXFJLZOE");
    tmp_msg_0.text.assign("CUSTXIUWGGSOCPTGMKITZEKAMZHXZOILTUAUAFVQGFQDXVTSAHTDBKENKMDCZBFZSUMXQSLLDXWKLFYVJCIKWGRPHY");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.724565042906);
    msg.setSource(2558U);
    msg.setSourceEntity(65U);
    msg.setDestination(64115U);
    msg.setDestinationEntity(246U);
    msg.op = 141U;
    msg.file.assign("FBAGMJRBIEFRXHPSJLTPXODVSZZAEXNTDGNJHIKXKVWPTAHOEWFTZRTRZAHKLUCFQQMUEEMQDBHAZH");

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
    msg.setTimeStamp(0.725766359364);
    msg.setSource(45803U);
    msg.setSourceEntity(114U);
    msg.setDestination(35947U);
    msg.setDestinationEntity(57U);
    msg.op = 81U;
    msg.file.assign("NQFTEZPNOMSTAAMRCABGQYMHQVVESCBXAAZDXBLANYECWWHVQVQJPSSRTWWPTESJKOJXLIXGUKRNFBGWPQUZMRXLYZOKAZHOIIYZOAQYBXTOU");

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
    msg.setTimeStamp(0.373859048047);
    msg.setSource(45655U);
    msg.setSourceEntity(18U);
    msg.setDestination(29082U);
    msg.setDestinationEntity(82U);
    msg.op = 142U;
    msg.file.assign("PWDRMLRVTHXNVIFNAOLYEYSAQIKSOFAEGJTQJTRGGJUTOUVDQMPXUACISZOFWBVBYGZNQWBKYOVKOKFSRGUTJJBKVTCXGCFMVZPFEXXMCDLHUAJLRFWDETPHEHZBSQAPDUYLDUNFHBYSAOWJLSZQDCNEAWIZAFPWQMYVKMXPGERHNZKSCTXFAOOJVEZIUMHYPOYQNZZCINEDCGGMYGERRUWXJDXMNBKHPIPVRITLKNHBTLHCBSQ");

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
    msg.setTimeStamp(0.855106575306);
    msg.setSource(30367U);
    msg.setSourceEntity(178U);
    msg.setDestination(5121U);
    msg.setDestinationEntity(149U);
    msg.op = 103U;
    msg.clock = 0.46811775825;
    msg.tz = -42;

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
    msg.setTimeStamp(0.389055910516);
    msg.setSource(39906U);
    msg.setSourceEntity(61U);
    msg.setDestination(35820U);
    msg.setDestinationEntity(27U);
    msg.op = 76U;
    msg.clock = 0.107370622048;
    msg.tz = -119;

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
    msg.setTimeStamp(0.0819553301723);
    msg.setSource(7731U);
    msg.setSourceEntity(20U);
    msg.setDestination(11584U);
    msg.setDestinationEntity(8U);
    msg.op = 34U;
    msg.clock = 0.980477472367;
    msg.tz = -23;

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
    msg.setTimeStamp(0.0397370548009);
    msg.setSource(59761U);
    msg.setSourceEntity(144U);
    msg.setDestination(63309U);
    msg.setDestinationEntity(229U);
    msg.conductivity = 0.875196851335;
    msg.temperature = 0.0572691114818;
    msg.depth = 0.884851140783;

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
    msg.setTimeStamp(0.53929935695);
    msg.setSource(1044U);
    msg.setSourceEntity(30U);
    msg.setDestination(40268U);
    msg.setDestinationEntity(132U);
    msg.conductivity = 0.862897378658;
    msg.temperature = 0.601164352145;
    msg.depth = 0.344270003131;

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
    msg.setTimeStamp(0.990958243279);
    msg.setSource(45098U);
    msg.setSourceEntity(245U);
    msg.setDestination(38947U);
    msg.setDestinationEntity(67U);
    msg.conductivity = 0.316431855622;
    msg.temperature = 0.307027628078;
    msg.depth = 0.154526128333;

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
    msg.setTimeStamp(0.164899599827);
    msg.setSource(3955U);
    msg.setSourceEntity(152U);
    msg.setDestination(12694U);
    msg.setDestinationEntity(212U);
    msg.altitude = 0.85347703264;
    msg.roll = 11124U;
    msg.pitch = 23782U;
    msg.yaw = 5549U;
    msg.speed = 14033;

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
    msg.setTimeStamp(0.822970779219);
    msg.setSource(63661U);
    msg.setSourceEntity(109U);
    msg.setDestination(17801U);
    msg.setDestinationEntity(34U);
    msg.altitude = 0.826412630972;
    msg.roll = 23271U;
    msg.pitch = 9458U;
    msg.yaw = 46437U;
    msg.speed = 27420;

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
    msg.setTimeStamp(0.157987465786);
    msg.setSource(11381U);
    msg.setSourceEntity(201U);
    msg.setDestination(26275U);
    msg.setDestinationEntity(38U);
    msg.altitude = 0.904927994739;
    msg.roll = 41298U;
    msg.pitch = 56699U;
    msg.yaw = 23856U;
    msg.speed = 24328;

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
    msg.setTimeStamp(0.803532035387);
    msg.setSource(32023U);
    msg.setSourceEntity(44U);
    msg.setDestination(5007U);
    msg.setDestinationEntity(170U);
    msg.altitude = 0.0985216106449;
    msg.width = 0.185333790294;
    msg.length = 0.562112707032;
    msg.bearing = 0.821908018235;
    msg.pxl = 1358;
    msg.encoding = 77U;
    const char tmp_msg_0[] = {87, -5, 79, 7, 110, 38, -111, 96, 55, 11, -54, -128, -109, 122, -84, -13, 104, -69, 4, -55, -109, 94, -14, 74, -54, -55, -18, -41, -63, -125, -103, -79, 82, -95, -86, -45, -27, 83, -101, 98, -12, -95, -19, -74, -25, -33, 22, -9, -52, 100, 1, -128, -20, 76, 96, 108, 61, -109, -6, -118, 17, 3, -9, -104, -27, -83, -107, -21, 27, 117, 55, 16, -119, -38, 23, 116, 55, 42, -27, -5, -76, -49, -127, 64, 105, 5, 85, 56, -119, 41, 52, 42, -11, 38, -111, -2, 114, -106, -20, -106, 45, -55, -127, -66, -35, -52, -118, 30, 89, 99, -7, -67, -49, -30, -34, 91, 77, -66, -125, -46, -101, 35, -47, -41, 98, -84, -42, -76, -46, -103, -113, -56, -52, 67};
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
    msg.setTimeStamp(0.597898534875);
    msg.setSource(10306U);
    msg.setSourceEntity(187U);
    msg.setDestination(48500U);
    msg.setDestinationEntity(197U);
    msg.altitude = 0.183714343226;
    msg.width = 0.00765295117319;
    msg.length = 0.273510995624;
    msg.bearing = 0.1549924171;
    msg.pxl = -30326;
    msg.encoding = 164U;
    const char tmp_msg_0[] = {80, 30, -9, 68, -27, -57, 48, 112, -63, -49, -40, 77, 65, 8, 34, 75, 90, 7, 10, 66, 13, 62, 61, 22, -120, -18, -87, -101, 48, 14, -43, -31, 125, -115, -79, -39, -36, -120, 112, -102, -65, -10, -41, 20, 115, -59, 124, -85, -105, -38, -89, -14, 95, 40, 73, 73, 43, -6, -107, -32, 108, 98, 15, 75, -83, 85, -74, -51, 92, 87, -8, -111, 25, 118, 20, -61, -13, -62, 71, -33, 70, 100, 71, 74, -87, 10, -3, 22, -50, -92, -59, -70, -110, -109, 58, -66, -113, 47, -102, 5, 3, -11, -8, 103, -5, -33, -71, -69, -24, -27, -91, -46, -18, 25, -14, 16, 71, -48, 43, -17, -101, -102, -50, -102, 66, 70, -95, -31, 113, 32, -7, 38, 125, 13, -108, 72, -25, 119, 57, -111, 33, 110, -78, -30, 98, -5, 17, -99, 59, -115, 46, 8, -38, 54, 112, -43, -80, 30, 35, -50, -96, -20, 50, -126, 50, -98, 68, -43, -116, 54, -111, 9, 38, 115, 24, -95, 36, 80, -31, 55, -121, 48, -8, -6, 99, 29, 51, -65, 1, 125, -54, -118, -115, 0};
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
    msg.setTimeStamp(0.156631632308);
    msg.setSource(8874U);
    msg.setSourceEntity(173U);
    msg.setDestination(32874U);
    msg.setDestinationEntity(249U);
    msg.altitude = 0.824444220776;
    msg.width = 0.163621371077;
    msg.length = 0.784891494298;
    msg.bearing = 0.99311072172;
    msg.pxl = 4931;
    msg.encoding = 77U;
    const char tmp_msg_0[] = {-19, -40, -47, 60, -76, 92, 95, -101, 70, 108, -56, 113, -28, -21, 16, -23, 119, 30, -42, -36, -12, 12, 10, -106, -20, 12, 19, -1, 18, 73, 77, -125, -117, 10, -10, 26, 23, 75, 59, -36, -61, -69, -112, 108, -9, -5, 83, 23, -92, -26, 43, -100, 120, 77, 45, 115, 63, 63, 54, 111, -114, -98, 106, -100, -81, -30, 65, -109, -31, -34, -24, 0, 80, -80, -120, -25, 120, -89, 49, 110, 28, -84, -10, -87, 112, -42, -57, 46, 42, 67, 119, 111, 68, 98, 46, 90, -53, 73, 65, -41, -110, -27, 97, -31, -47, -3, 44, -6, -11, -48, -107, 42, 79, 65, 74, -10, -50, 88, 2, 35, 124, -11, -65, -7, 4, -104, -13, 2, 51, -23, -18, 109, -116, -47, -108, -56, 76, -70, -56, 13, 93, -58, 45, -59, 54, 17, -115, -97, 124, 96, -12, -18, 45, -65, 8, 76, 94, 59, 19, 6, 35, 45, -19, 86, -123, -116, -47, -32, 49, -122, 12, -104, 56, 120, 9, -104, 118, 90, -95, -3, 46, -34, -121, -101, -49, -111, -29, 120, 31, 67, -111, -121, -63, 47, -126, 103, 108, 47, 41, 112, 91, 56, 13, -124, 86, -32, -73, 15, 118, -90, -97, -66, -9, -12, -15};
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
    msg.setTimeStamp(0.432559008425);
    msg.setSource(33679U);
    msg.setSourceEntity(168U);
    msg.setDestination(19670U);
    msg.setDestinationEntity(21U);
    msg.text.assign("IVMNBRLDQGUQCFFMTRGFJRHGUJIWFTMRDXRNOSNPYQXFWYBSTGJBNCJCWWEBMOYTDZYEWTIEPHKILFLVBCSMTSUGYKEYKVKPNORJZAHBVGPAHJWXBVKIFVMHZOWLOMUQDIHJUAGUAAZUSXNLQCFWEPEPZNDKTKLQSGJCKXRHSROPGWLDDUZMUOMFVDEOIEPPX");
    msg.type = 17U;

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
    msg.setTimeStamp(0.235907473505);
    msg.setSource(9370U);
    msg.setSourceEntity(123U);
    msg.setDestination(3396U);
    msg.setDestinationEntity(37U);
    msg.text.assign("EBZLNWSEMANLGTUAKSXBZSDPDZUHOGSDGPQMZRNHFJNECOGPRZKDYFUUIBLVKECOQSROQJNUBFBSCIDAEMLJXWGXI");
    msg.type = 130U;

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
    msg.setTimeStamp(0.507543906647);
    msg.setSource(30229U);
    msg.setSourceEntity(137U);
    msg.setDestination(10616U);
    msg.setDestinationEntity(186U);
    msg.text.assign("MFOIAHMIFASWJFVADWKZHBZFUOLJQZKWLOLALEAHRURZQHKVSDWGGBIWOQGYPEDRDTVBGLQDUHYYTJRPIFRLMJRAGYCJVTOPCVSXQNBJOUDYDTUUSVXMNIKTLKHEGGBDCTJPENDRYUZPNMHXDJKCHAWBXISRFJFORSJIYKPZEGCCYVWBBTPMZNZHIOKUPASSOPATHQNVYSXMGTKNECQWSUQFUNMXIFKZXGECMEPQBYVZ");
    msg.type = 140U;

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
    msg.setTimeStamp(0.990697782248);
    msg.setSource(54474U);
    msg.setSourceEntity(122U);
    msg.setDestination(58460U);
    msg.setDestinationEntity(66U);
    msg.parameter = 206U;
    msg.numsamples = 236U;
    msg.lat = 0.963861736911;
    msg.lon = 0.408261834404;

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
    msg.setTimeStamp(0.405047597464);
    msg.setSource(18021U);
    msg.setSourceEntity(145U);
    msg.setDestination(53744U);
    msg.setDestinationEntity(171U);
    msg.parameter = 197U;
    msg.numsamples = 229U;
    msg.lat = 0.6002728556;
    msg.lon = 0.164016388592;

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
    msg.setTimeStamp(0.333187866301);
    msg.setSource(55466U);
    msg.setSourceEntity(162U);
    msg.setDestination(6594U);
    msg.setDestinationEntity(29U);
    msg.parameter = 39U;
    msg.numsamples = 218U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 30466U;
    tmp_msg_0.avg = 0.224370862647;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.70639724713;
    msg.lon = 0.931605096305;

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
    msg.setTimeStamp(0.390548212131);
    msg.setSource(53266U);
    msg.setSourceEntity(52U);
    msg.setDestination(8187U);
    msg.setDestinationEntity(50U);
    msg.depth = 52269U;
    msg.avg = 0.691695005132;

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
    msg.setTimeStamp(0.953257929541);
    msg.setSource(19277U);
    msg.setSourceEntity(28U);
    msg.setDestination(9722U);
    msg.setDestinationEntity(139U);
    msg.depth = 49622U;
    msg.avg = 0.475311157799;

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
    msg.setTimeStamp(0.468301942994);
    msg.setSource(493U);
    msg.setSourceEntity(197U);
    msg.setDestination(33177U);
    msg.setDestinationEntity(2U);
    msg.depth = 48571U;
    msg.avg = 0.315532812797;

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
    msg.setTimeStamp(0.2335196231);
    msg.setSource(57811U);
    msg.setSourceEntity(240U);
    msg.setDestination(54262U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.871997132211);
    msg.setSource(16305U);
    msg.setSourceEntity(134U);
    msg.setDestination(40116U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.0769236594847);
    msg.setSource(38467U);
    msg.setSourceEntity(228U);
    msg.setDestination(19067U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.311222217828);
    msg.setSource(15302U);
    msg.setSourceEntity(249U);
    msg.setDestination(36931U);
    msg.setDestinationEntity(112U);
    msg.sys_name.assign("BGTPZKVTHKXHCDODUDZZLVJSRQOSMGIRHARVUIUEXNBEYVLGTHXQMIXQLLWUXDYZZMCTZEYPJELUIPXGNGHKNORBMXTXSFJCTQMZANWKCQPRZRVYIKEGFTFHPJYESCUWUHMUVNOQLGYFWHMFATFRNSPWNPOFAQRRJDVLTOACNPWBLMCWEOZESJWCRDFSLNGDKHVILYKQQBAJMMFKDPVDYKEXAT");
    msg.sys_type = 236U;
    msg.owner = 41825U;
    msg.lat = 8.09702142679e-06;
    msg.lon = 0.0778203957596;
    msg.height = 0.991653639779;
    msg.services.assign("BDFHFKWVAOBXADFMRVAUKHVEKBWDVXVJNGFRYLAWWDREKMGQQUQKPZXEQNBTFTRAYXXPKZEHUAAYWMFUNZDSVBCRJCPNVRAKZOEUIZJEVEIUPHCTFOODJSHGAPSSZULVLGZHTBLNSGGIBAQCMGBCZVTSYMBGLQPXFNKJHIHOFSRTOXOONIUYQSYQPDCSLLJJXKOMFPPQYDWPCGNMQREYTYJTTGMXJIWIBIJHNZD");

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
    msg.setTimeStamp(0.588514762356);
    msg.setSource(11095U);
    msg.setSourceEntity(128U);
    msg.setDestination(17565U);
    msg.setDestinationEntity(196U);
    msg.sys_name.assign("ZNVWLYYVAEKYSFV");
    msg.sys_type = 103U;
    msg.owner = 44948U;
    msg.lat = 0.53785401002;
    msg.lon = 0.947342143824;
    msg.height = 0.99803842094;
    msg.services.assign("KBZLQDWICOGHQCBLXDBHDQDPZABPRRSDYKEAEWYEMLMNWJKKOCFNOGTUNPISNQOAMJFZLSMICWHNXXLTTXAIUDTXBKQGRCHWESGNGSJYRBIQVJTEFYVFVWQHODCFHJAMI");

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
    msg.setTimeStamp(0.393009802658);
    msg.setSource(28512U);
    msg.setSourceEntity(94U);
    msg.setDestination(14582U);
    msg.setDestinationEntity(90U);
    msg.sys_name.assign("PCJGQUDZZCUOOMIKJWXQVZEJPWXFLBQTFYGICZEXPMOIYVNKPTGNSBCQOSNTLLRENJKHLGWMLSDFIAYWLOLTSFRVKXCTEPXWUGRIZQUD");
    msg.sys_type = 32U;
    msg.owner = 62230U;
    msg.lat = 0.399749018893;
    msg.lon = 0.984438544334;
    msg.height = 0.164046615526;
    msg.services.assign("MNVSJTFJIMEZWAFSDBODSGEMSWUZAGFCORWXLCIZJEEUCMLQKHHLDEGRMSKHRNUXEVWHWICYVAFAEQDXBCUECPLGHJVZTQZSHKQYMRUHLKBKQUYDJVGB");

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
    msg.setTimeStamp(0.0675819929488);
    msg.setSource(13809U);
    msg.setSourceEntity(239U);
    msg.setDestination(13846U);
    msg.setDestinationEntity(184U);
    msg.service.assign("PUWZTJEURKOFNYDTAOFBVHUCCISSAECOXHIGPWAONCOMPYKUEOQHILCWNETQZNLDGXWBKLPVBPBUQVCHKHRSWTYYDWTVFSFNEBKQHEBDNQRMHLSNKRFMYGMJDQEDLOGJKJXPAYMARBYZJMWRJKZPWMHLERSYLBDMXCIZZZVTCFFCGUULXTGOABUNSGMJNNCXOHEEAABDJXJWZYTJYQAQZVVMKIODRTFILTF");
    msg.service_type = 223U;

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
    msg.setTimeStamp(0.503196689354);
    msg.setSource(27981U);
    msg.setSourceEntity(218U);
    msg.setDestination(13883U);
    msg.setDestinationEntity(140U);
    msg.service.assign("SNZKDGGKJZKDUAJFBFMJCBLICSBGQCMPOLRXEWUIDCITMIRYRQVMRARGHLGTCZVSYUYNBVXOXCBJOSYYSTNMEFSUOGQBWXHEWOWQHIOUACJCKQKDLPWITGJZUBAAVCPBDDXXRPHITZVVTSPGMMZOUSCJPELAUBXNYMFVKLQDMFZKILEAGNQQYOYRKRNNKWFQFJRNTSENZAZAV");
    msg.service_type = 231U;

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
    msg.setTimeStamp(0.566208323417);
    msg.setSource(64861U);
    msg.setSourceEntity(4U);
    msg.setDestination(29731U);
    msg.setDestinationEntity(254U);
    msg.service.assign("XOLIYUMPRMXCBUWOORUOBDBMLYFBILVQECZFQAXTHVZYFAWEKXGXDZEUISJOZCQZJCYCZIBFHKGTPRIMIGUHQQBNWXCSXHMRRPSGOESPGLSFLAKTVSTAR");
    msg.service_type = 51U;

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
    msg.setTimeStamp(0.571154081817);
    msg.setSource(8083U);
    msg.setSourceEntity(231U);
    msg.setDestination(31894U);
    msg.setDestinationEntity(65U);
    msg.value = 0.136269576598;

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
    msg.setTimeStamp(0.386197743341);
    msg.setSource(64400U);
    msg.setSourceEntity(65U);
    msg.setDestination(17070U);
    msg.setDestinationEntity(141U);
    msg.value = 0.326240992676;

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
    msg.setTimeStamp(0.873224390556);
    msg.setSource(60037U);
    msg.setSourceEntity(169U);
    msg.setDestination(12882U);
    msg.setDestinationEntity(54U);
    msg.value = 0.814739272801;

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
    msg.setTimeStamp(0.149559786381);
    msg.setSource(50434U);
    msg.setSourceEntity(71U);
    msg.setDestination(31841U);
    msg.setDestinationEntity(32U);
    msg.value = 0.494760405999;

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
    msg.setTimeStamp(0.1082561074);
    msg.setSource(6194U);
    msg.setSourceEntity(118U);
    msg.setDestination(17132U);
    msg.setDestinationEntity(75U);
    msg.value = 0.424515288173;

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
    msg.setTimeStamp(0.517179845122);
    msg.setSource(63775U);
    msg.setSourceEntity(47U);
    msg.setDestination(56175U);
    msg.setDestinationEntity(32U);
    msg.value = 0.617847906474;

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
    msg.setTimeStamp(0.15072441389);
    msg.setSource(54240U);
    msg.setSourceEntity(154U);
    msg.setDestination(1827U);
    msg.setDestinationEntity(128U);
    msg.value = 0.00919329991378;

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
    msg.setTimeStamp(0.0135544120701);
    msg.setSource(28597U);
    msg.setSourceEntity(70U);
    msg.setDestination(59871U);
    msg.setDestinationEntity(110U);
    msg.value = 0.664331697523;

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
    msg.setTimeStamp(0.57503452352);
    msg.setSource(44319U);
    msg.setSourceEntity(145U);
    msg.setDestination(15443U);
    msg.setDestinationEntity(184U);
    msg.value = 0.607204405163;

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
    msg.setTimeStamp(0.198101669458);
    msg.setSource(59703U);
    msg.setSourceEntity(185U);
    msg.setDestination(30591U);
    msg.setDestinationEntity(90U);
    msg.number.assign("QYONBCBJVKBLHMDDFSVXBNRNPCTVOIUTFDNSNYLTXTXFOJFXQAYECFCOLHEUZASLSEVDEWKTQKUMIYRSHVPWZCSWGIGERHTMPXUGDMRHBSNLWGXQDDLZHRVAABVCDGWPTTKPXGHBMKGBGFUWKAMRAZBVLSAOYJJOJUHBEOMJWLPNLCUAVOFPQIZRXQYYQJXMKQJC");
    msg.timeout = 52494U;
    msg.contents.assign("RNNASNEOCCYQTRYWONBKKFXRFUWQKRJJDLOMPQZIBMJRNGSHPKIEBXDEEHSPHMMGHXBGHEHYZRYDQLTCIFQXUTFALCPQRGUDYXCZUJSJIJSOCVUMPGNSWQPKBBCTVARBUQLFIUOVKEIWGDLUBAKOIZAZYMOPH");

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
    msg.setTimeStamp(0.322102782911);
    msg.setSource(40373U);
    msg.setSourceEntity(185U);
    msg.setDestination(2952U);
    msg.setDestinationEntity(24U);
    msg.number.assign("BPLEPATBJTMVYNNNRNIGXGJCAERNILMVPHALBORHYFHSOYAJQFPIVTZVPDQNXWKQSRLWTVDEQHFDGVUKHOQPWHJKLPUUCNZJDQSZLCUNQUCCSGJPZMWOXXCGEYYHQSSHTZWGCCBJKAGKEUJOEHISSOIMPOZKZTQXJZFLIVKHMLBDBDIGAODOAMFRVSEFTYMWYCAESLQKPFTVMFBXIDYJARZZR");
    msg.timeout = 14271U;
    msg.contents.assign("MZHGAVBIWOIVUVXMWXAVZGKFHENSQUNRTTLNMSKIAKLBNDZHOOEQCGWNXYQMSIPOAYDOKOHBADLVKUKUJONCGRVTTNZJPWHDYEHKJNQ");

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
    msg.setTimeStamp(0.0600290166138);
    msg.setSource(43151U);
    msg.setSourceEntity(68U);
    msg.setDestination(47298U);
    msg.setDestinationEntity(37U);
    msg.number.assign("USDWPLSDQLIRSBFYMGNSQYGXMLVYUMHBEKMPHBLMKIQKGLTZLRB");
    msg.timeout = 11488U;
    msg.contents.assign("FSDIOJQRLPECKODVMKCZXBVRQYCWVNEVLNTUXZUWQDZLJQ");

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
    msg.setTimeStamp(0.925933077644);
    msg.setSource(33834U);
    msg.setSourceEntity(100U);
    msg.setDestination(54028U);
    msg.setDestinationEntity(18U);
    msg.seq = 4256551608U;
    msg.destination.assign("ZSBQPPBLQUOXQMSFZIF");
    msg.timeout = 53011U;
    const char tmp_msg_0[] = {-9, -48, 24, 68, -102, -12, 55, 7, 90, 57, -18, -11, 20, -116, 56, -66, -14, 122, 57, -36, 106, 68, -55, -108, 21, 79, -60, -23, 11, -122, -79, -33, 14, -89, -13, -71, -108, 7, 1, 80, -19, 108, -22, 28, -101, -115, 64, 16, 32, 41, 62, 109, -46, 82, 73, -23, 69, -10, 92, 2, 22, -113, 53, -63, -109, 112, 61, 93, 89, 47, 37, -42, 68, 112, 14, -92, 115, -105, -20, -66, -51, -2, 11, -60, -71, 34, -114, -79, -62, 89, -122, 85, 13, -88, 49, 22, -93, 55, -126};
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
    msg.setTimeStamp(0.0184829581994);
    msg.setSource(11732U);
    msg.setSourceEntity(241U);
    msg.setDestination(54294U);
    msg.setDestinationEntity(203U);
    msg.seq = 1215579694U;
    msg.destination.assign("RSNQJVEVQYYZFCSFCUOKVT");
    msg.timeout = 58496U;
    const char tmp_msg_0[] = {73, -64, 33, 79, -2, 2, -73, 90, 36, -92, 7, -16, 114, -109, -63, 57, -114, 43, -126, 83, 79, 81, 35, -54, -104, 92, 20, 29, 45, -64, -83, -74, 18, 110, -95, -104, -102, 98, 82, -112, 61, -63, 98, 65, 7, 3, 91, 17, 5, -125, 13, 126, -113, -116, -77, -92, -100, 66, -69, -75, 66, -28, -121, 24, 27, 53, 93, -78, 10, 71, 119, -81, -61, 45, 24, -32, -79, -12, -127, -45, 71, -106, 109, -2, -23, 111, 120, -98, -116, 24, -28, -89, -127, -84, 7, 29, 55, -110, -38, -6, 114, -24, 119, -77, -26, 13, -107, -73, 15, 64, -4, 93, -64, 85, 81, -91, -119, 52, 36, -10, -123, -70, -54, 78, -111, 55, -43, 101, 71, 108, 97, -78, 101, -43, -96, -55, -35, 71, 57, 116, 112, 52, 15, 113, -1, -100, -76, -65, 71, -1, -61, 73, 44, 94, 110, 39, -93, -114, 29, -28, 80, -119, -46, 4, -15};
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
    msg.setTimeStamp(0.313142734529);
    msg.setSource(6751U);
    msg.setSourceEntity(82U);
    msg.setDestination(34763U);
    msg.setDestinationEntity(101U);
    msg.seq = 348958676U;
    msg.destination.assign("HRRCMAVQANNQQAKMQTSCTDYKHFMVJKRTSFIFPZLXYSJLEUMPGICOSXYNETUJWJXJZGFTVXHULDGABUNVMIJQFYZCZBIIFGBRTOKQVEADTHCMKPPTDFRBFQNWOIPEBXODZLBPXWWZSFEJ");
    msg.timeout = 60461U;
    const char tmp_msg_0[] = {-120, -120, -51, -37, 100, -99, -82, 19, 20, 2, -94, 112, 98, 75, 36, -36, -69, 24, 20, -127, 112, -22, 115, 103, 108, 71, -78, -16, -37, -87, 8, -42, 117, -112, 52, -88, 1, 15, -92, -15, -45, -127, 1, -25, -69, 47, -6, -119, 89, -77, 110, -48, -80, 32, 111, -63, 104, 37, -43, 73, -84, 92, 67, -31, -73, -20, -19, 123, 36, -106, 109, 75, 82, 122, 10, -4, -105, 57, 120, 113, 17, 18, 72, -75, -27, 104, 98, -51, -58, 86, 9, 11, 105, 114, 0, 5, -108, 100, -120, 60, -121, -74, 65, -63, -47, 77, -102, 60};
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
    msg.setTimeStamp(0.994753161704);
    msg.setSource(38117U);
    msg.setSourceEntity(97U);
    msg.setDestination(58978U);
    msg.setDestinationEntity(212U);
    msg.source.assign("TKMOYJZXSYQUEDTZR");
    const char tmp_msg_0[] = {-63, 103, -49, -67, -106, -50, 74, -36, 70, -76, -82, 56, -96, -86, -33, 42, 98, -39, -58, -105, -25, -93, 96, 24, 39, 10, -95, 121, -107, 80, 51, 51, 25, 121, 42, -63, 84, -86, 22, -72, 65, -68, -49, 91, 30, 60, -29, 122, 77, -95, 4, 48, 26, -73, 1, -89, -8, 40, -35, 10, -60, 105, -69, -109, -89, 39, -70, 10, 81, 115, -91, 72, -114, 67, -86, -56, 97, 14, 123, -20, -42, 62, -31, -14, -83, 39, 118, 86, 39, -67, -27, 1, 97, -6, -36, -38, 55, -105, 20, 16, -7, 26, 97, 21, 32, 26, -65, -92, -74, -52, 73, -124, -80, 67, -76, 109, -24, -67, 71, -109, -25, 78, 88, -90, -58, 2, -40, -124, 6, -32, 27, -37, -125, 105, 37, 112, 28, 84, 36, -95, -110};
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
    msg.setTimeStamp(0.802503848038);
    msg.setSource(19470U);
    msg.setSourceEntity(198U);
    msg.setDestination(7797U);
    msg.setDestinationEntity(180U);
    msg.source.assign("HZKGTAFHEHPSGGVLJHCBKFCJAVKQOEUBDPMXDSJTVGUECONLLARALCMIBMSRVSNCQYUYNNG");
    const char tmp_msg_0[] = {106, -10, -128, 97, -77, -73, 26, 110, 66, 88, -26, -100, 46, 46, 120, 39, 8, -26, 5, -105, -126, 18, 79, -86, -71, 25, -77, -80, -44, -61, 4, 2, 55, -12, -80, -3, -90, 95, -117, 20, -26, 126, -112, 50, -114, -88, -52, 38, 65, 87, -70, -24, 90, -40, -26, 61, -76, -59, 19, 86, 88, -63, -62, 92, 82, 109, -71, 40, 96, 26, 2, -126, 108, 60, 101, 3, 106, -122, -75, 94, -35, -124, -111, -119, -25, -2, -114, -75, 3, 9, -68, 46, -113, 75, 74, -65, 107, -107, 110, 38, 46, -10, -63, 34, -96, 33, -92, 116, 90, -125, 20, 102, -44, -87, 55, -30, -5, 93, -81, 89, 38, 99, -53, 22, 66, 31, -26, -80, -43, 17, 10, -100, 24, -49, -10, -122, 48, 104, -100, 27, 62, -89, 11, -123, -56, 8, 120, 9, -94, -27, 6, -10, -52, -105, -49, 74, 54, -78, 72, -89, -65, -62, -42, 52, 24, -100, 4, -85, -57, -11, 22, 35, -93, -39, 84, -37, 100, 28, -25, 37, 20, 124, 118, 64, 38, -87, -87, 13, -54, 75, 108, -32, -35, -102, -115, -17, 57, -108, 58, -80, 36, 49, -56, -17, -85, -12, -3, 3, -113, 3, -56, -60};
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
    msg.setTimeStamp(0.758525763239);
    msg.setSource(31928U);
    msg.setSourceEntity(0U);
    msg.setDestination(5706U);
    msg.setDestinationEntity(104U);
    msg.source.assign("LDOGGWRCEREHQYPWDOSQSTO");
    const char tmp_msg_0[] = {4, 12, 45, 43, -53, 10, -64, 24, -45, 101, 126, 35, -23, 57, -57, 106, 53, -17, -91, 70, 74, -108, 102, -109, 94, -128, 45, 8, -26, -111, 55, -90, -112, -74, 21, 103, -20, 122, 76, -121, -54, -128, -86, -51, 22, -79, 102, 108, 65, -54, 120, 88, -66, -87, -35, 6, -119, -65, -69, -109, -78, -1, 27, 88, -100, 95, -115, -45, -1, -13, 76, -65, 14, 27, 105, -11, -102, -57, -78, 23, -120, 120, 122, -69, 42, 46, -97, 12, -9, -96, -18, 48, -12, 103, 2, -57, -127, 34, 22, -43, 5, 8, -117, 36, 23, -14, -52, 16, -44, -71, 30, -89, -52, 37, 63, 31, -86, -86, -97, -81, 44, 46, -24, -18, -119, -110, -88, -36, -115, -110, -43, -23, 45, 50, 111, 15, -115, -11, -3, 79, 77, 65, -62, 120, -98, -73, 27, -94, -112, 49, -48, -52, 66, -80, 29, 28, 7, 105, 76, 37, -123, 91, -29, -93, -125, 70, 122, 11, 22, -59, -31, -53, -17, -2, -38, 25, -124, 75, 15, -29, -39, 112, -45, 11, -61, 124, 27, -21, 76};
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
    msg.setTimeStamp(0.419250586759);
    msg.setSource(63617U);
    msg.setSourceEntity(248U);
    msg.setDestination(5543U);
    msg.setDestinationEntity(6U);
    msg.seq = 3486985444U;
    msg.state = 72U;
    msg.error.assign("LGIVSNTISMCSCIGONLQCQHTWJNOIUBLGFSLDZABRUYYAMXVZUDLEJPHUJKQRPSSADEXYHZCTFYGWQHWKIRZSDMXWKZADODLYAJMPOQHVZQDKHPJRTPTZYNQGFNFIUWXBGSEAWYCEQEAHKMRVXKTAFBFJR");

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
    msg.setTimeStamp(0.465549551052);
    msg.setSource(51440U);
    msg.setSourceEntity(151U);
    msg.setDestination(24556U);
    msg.setDestinationEntity(211U);
    msg.seq = 1308697442U;
    msg.state = 245U;
    msg.error.assign("NQEHDIEFBOKQDIZXGVZFDICIKZIHJOFKQRVBXXKFPYUPPNBUHZZEBQDGOPRYZUCACOARBOFBCWQHMODWTMRSWMRVAULUJUCFMSPDFDGRJBVGCCDLTQELGEVEDYWKPNSPXYOHLJHNMSJZLVTMVHGEENT");

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
    msg.setTimeStamp(0.448973734642);
    msg.setSource(840U);
    msg.setSourceEntity(107U);
    msg.setDestination(14587U);
    msg.setDestinationEntity(149U);
    msg.seq = 1434359070U;
    msg.state = 32U;
    msg.error.assign("AZYARQDZRJDPYKCQELVIOAWMQTHIEPLHECARYVEKGNFXQCWEYLPKNXWDTTLWIJOFMXNJROGFSOWSKPFFU");

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
    msg.setTimeStamp(0.164877823094);
    msg.setSource(12835U);
    msg.setSourceEntity(79U);
    msg.setDestination(21785U);
    msg.setDestinationEntity(73U);
    msg.origin.assign("QYMTKAEMOIFHSFRICWJUDBMLIAJBFPXLBGVLGOHJZFSUFVLUWNOYXSDUJVGRPVLYCDCKXSTXLXOXQZGCUAVQTRABFWZZWCWWXKSJNHFQQHKKXMNZPWJAUVKNHPHNMIMLZEZAGWSUEKANJEDSETCQUDLHV");
    msg.text.assign("LOJOFGLHBBAFQJRWVGWWVRUIMXPTCOHKQNHURZDWLUALZFPHDNCSGYOOZMCYMLZHNDSQPOILAZVABNAYNVYDXYRRJQPXENTWEFTCAFLIBGTAOOCFCEXVXZEENQDFCSGCJUNEADFWEZRDKTDWKHPGBFGRIJVLEVYYKQQXTIHGSTYSUBGQKUUMMH");

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
    msg.setTimeStamp(0.16446811254);
    msg.setSource(54783U);
    msg.setSourceEntity(132U);
    msg.setDestination(45566U);
    msg.setDestinationEntity(195U);
    msg.origin.assign("AFFAIQZSEPWBNTRLLMRWVVRTZAWMHUSDCWPDKUNBMIGIJUOYAYNKKXGRPQQGYBFEYDAXHMFMDBMCWAVEVXXLZPEFTKGNRJKRZFGTVTSUTSDJPZVFQSBPZIAMQSRXKHXHXRJGKCUEAZJMIQKV");
    msg.text.assign("VGBEZHGKYSSUKET");

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
    msg.setTimeStamp(0.980646679822);
    msg.setSource(11512U);
    msg.setSourceEntity(243U);
    msg.setDestination(45456U);
    msg.setDestinationEntity(166U);
    msg.origin.assign("VCAXWGXZYMRASFCKCILTQMYTILYVJEJNMQLKFGPOYUHNQDQMIFDAOOGYQDMFTECBWVPDZKPWSZJSHHOMCKRBKIGSICNJWKITWAUXLZPHCVJXNRXFWLILGEBFNVNNVABDQHXIWJ");
    msg.text.assign("YWVDJLUCTXXOEDYKCNOKEGXEBWHUVFDMAQOVYEQAKPGJLIEXYJAKSORNMSMCWWISUOPZLBKVHFABLXXMQYHWSNNOXRZRSHJYIITYOYIJCGNCBMGHDPLJAUVDNTBXKSAEIHTOGUFMCDEZRDRIJUSBACPVGGJKKNGFLFONTJQXBRHGIUWBRVPQLDUXBKUEPPZNFHEVKEDAWZQPUWFITCFRQGMWTVOMQR");

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
    msg.setTimeStamp(0.5644603942);
    msg.setSource(61855U);
    msg.setSourceEntity(28U);
    msg.setDestination(43410U);
    msg.setDestinationEntity(17U);
    msg.origin.assign("SMJICQDREQJAAFJCWBGAGTWHDIRVYERRPVPKMZSQRIKTREDLZTWHHSCBPQCHYRXNJYJAKFAEDOUQPRMWJUOBNFTVHMSVQNKBMANQRQOCVIPPWUTIEYZXHISYFODWYFIHPNLKWLKCGJUICAOEGPZOLQUTJNMCZUDHVOHEVIBDFKJUMLCKNDFMBOLEDFCLLMGSZJRZQSXGXXTUAUZTXGEVYTVSWYGBFGIAZBHPZDTGUEBLNWKSNONXOXPWKSAM");
    msg.htime = 0.857872938641;
    msg.lat = 0.701482895843;
    msg.lon = 0.376678434765;
    const char tmp_msg_0[] = {-18, -45, -66, -13, 81, -65, 21, -82, 60, -65, -16, 121, -87, -125, -59, 38, -17, 38, 14, -14, 94, -81, -62, 83, -68, 126, 95, -110, -22, 104, 28, -108, 12, 94, 27, -56, 115, 122, 5, -45, -52, -48, 8, -59, 91, 101};
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
    msg.setTimeStamp(0.696165615191);
    msg.setSource(19896U);
    msg.setSourceEntity(240U);
    msg.setDestination(3919U);
    msg.setDestinationEntity(166U);
    msg.origin.assign("ODWHCOIDUAURSGWPVJJNAOHJVSQLNMMFSJZZZUCDBKVOKJUAEQEIDHMRGYPMCPAZCYBPHMOZYLBURVAHTWWPEMCRGBLRPMNGZIZAEJQKFBHJPVJLTKKCFYEXQGGBEFTLRUSKPUSYCIZTARUAWYFISDNTIJWDXEYNFBHOJZWVMWLDELYBPXFBMTVVGIGNRMRCWSTXKIBOTCUNZQECXNOLXQTNXIUYOYROSHPSNQLXIA");
    msg.htime = 0.0654300193403;
    msg.lat = 0.522572863473;
    msg.lon = 0.406052616237;
    const char tmp_msg_0[] = {-11, -45, 106, -21, -66, -24, -67, 99, 120, -108, 71, -5, 58, 115, -6, -109, -20, 53, -19, 26, -11, 108, 16, 45, -56, -119, -31, 125, 113, 111, 51, -43, -43, -62, -90, -77, 86, -93, -124, 54, 34, -4, -65, 105, 45, -12, 95, -104, 98, -89, -9, -119, 82, -86, 54, 79, 94, 52, 83, 101, -91, 71, 119, -107, -26, -104, -1, -56, 61, -124, -58, -110, -94, 85, 8, 1, -109, -29, -85, 98, -80, -71, 73, -102, 93, -32, 50, 78, 35, 3, 37, -120, -126, 102, -68, -98, -123, 84, 36, 76, 126, 3, 115, 111, -42, -88, -104, 38, -51, -40, -68, -120, 33, -57, -122, 77, 45, -114, 8, 7, -94, 103, -121, 17, -106, 52, -50, -24, 48, -103, 49, -11, 30, 37, -6, 2, 57, 113, 27, 71, -11, 70, -33, -124, -51, 44, 11, 70, 126, 70, 13, -18, -108, -25, -118, -69, -97, -4, -25, -107, 31, -119, -122, -74, -47, -18, 26, -86, 83, 81, -120, -110, 32, -42, -4, 37, -77, -44, 11, -17, 13, -50, -107, -26, -88, -71, -72, 85, -78, 79, -80, 76, -88, -115, -11, 119, 11, -71, 53, 19, -114, 25, -72, 70, 45, 24, -55, -42, 87};
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
    msg.setTimeStamp(0.503504020616);
    msg.setSource(19747U);
    msg.setSourceEntity(214U);
    msg.setDestination(20323U);
    msg.setDestinationEntity(59U);
    msg.origin.assign("GJZYEWCYUBMNNAVRYZVNXTCUIPFVWQXWFCHEFZCNCFMAXKXYXSEESGDIMQKKWQBTDWQSCONAVLGHOUXUZZOXKHHRQFYTOVORLDSUYJSLHODDVZTOGLEAOM");
    msg.htime = 0.458956367907;
    msg.lat = 0.735662895692;
    msg.lon = 0.0142905571444;
    const char tmp_msg_0[] = {-79, 90, -45, 64, 122, 65, 19, 88, 54, 21, -29, 120, 26, 99, 20, 51, 63, -58, 68, 94, -98, 8, 2, -98, 12, -42, -104, 52, -77, -9, 20, -5, -60, -102, -8, 0, 124, -120, 76, 123, 78, -91, 14, -112, 75, -33, 75, 96, 38, -80, -26, -102, -104, -60, 59, -65, -65, 28, -27, -56, 16, 35, -69, -54, 25, 60, -122, -112, 15, 100, 117, 78, -75, 15, 62, 98, -125, 76, 112, 19, 60, -7, -117, -22, 73, -3, -70, -19, 31, -4, -10, -112, 34, -72, 42, 7, -99, -41, 43, 50, 58};
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
    msg.setTimeStamp(0.843874876824);
    msg.setSource(21356U);
    msg.setSourceEntity(133U);
    msg.setDestination(48375U);
    msg.setDestinationEntity(183U);
    msg.req_id = 53583U;
    msg.ttl = 30436U;
    msg.destination.assign("SIXOKRQUIHPGBOCEZRSLXXKPVCKMRAYGKUXZXIFNWPEQO");
    const char tmp_msg_0[] = {-47, 82, -59, -51, 16, -43, -15, -79, -60, -111, 20, 11, -122, -12, 21, 18, -99, 22, -30, -101, -123, 50};
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
    msg.setTimeStamp(0.900617792608);
    msg.setSource(27298U);
    msg.setSourceEntity(209U);
    msg.setDestination(61692U);
    msg.setDestinationEntity(40U);
    msg.req_id = 38115U;
    msg.ttl = 35057U;
    msg.destination.assign("ERLUPYDTRKQPNQTVDKYTSQGWTWDWFGEPRJOZHVMMUVYUHABHIXPGNYOIDQOBFFREQWXIOJKRFJPBSJEBKHTGUFUAVJNYSUNWEROPCCJZ");
    const char tmp_msg_0[] = {125, 30, -10, 84, 36, 99, 2, -44, -47, 10, -16, 117, 20, -26, 26, 46, -6, 89, -123, -80, -59, -102, -49, -116, 76, -13, -104, 71, 121, -86, -92, 71, -8, 97, -81, -95, 44, -51, 69, 41, 97, 87, -75, -67, 37, 29, 48, 20, 1, 125, -49, -37, 89, -67, 57, -19, 88, 34, -49, -61, -54, -14, -97, 80, -66, 63, 11, 18, -21, 59, -82, 38};
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
    msg.setTimeStamp(0.676469347392);
    msg.setSource(58671U);
    msg.setSourceEntity(93U);
    msg.setDestination(58747U);
    msg.setDestinationEntity(2U);
    msg.req_id = 61799U;
    msg.ttl = 57145U;
    msg.destination.assign("AFLAAVFOZYUOISHLUAURVNPGHLSWVZDEFDQCNCRCNAYWFSQUHQSFRYTWACTFZFGNTVBORESDCWXONDSDADXWGMLZIIOCXUOEHGNPASCQKDBEXTVIBFBEHIJSTZJQYEHQJMQJOGYBSZRXTTQKIPIXYEOKTGWUHLV");
    const char tmp_msg_0[] = {22, 79, 89, -97, 73, 22, 118, -39, 3, 87, -77, -52, -31, 36, 28, 125, -51, -88, 80, -86, 76, 124, 114, 48, -88, -64, -69, 25, -121, 126, -106, 11, -14, -38, -56, -60, 88, -57, -61, 24, -105, 5, 37, 33, 110, 26, -54, -35, -47, -30, 53, 13};
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
    msg.setTimeStamp(0.336016760979);
    msg.setSource(2572U);
    msg.setSourceEntity(172U);
    msg.setDestination(18951U);
    msg.setDestinationEntity(173U);
    msg.req_id = 53265U;
    msg.status = 41U;
    msg.text.assign("JYQXPNJZVBHIAOEXCLDRIUIWGDYZAHOFHWDXJGCYAEELIOTEBENBBIPSKMFWVMGQGKPLDILTQGSWDDDQANGAQE");

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
    msg.setTimeStamp(0.11652971949);
    msg.setSource(34937U);
    msg.setSourceEntity(94U);
    msg.setDestination(29341U);
    msg.setDestinationEntity(143U);
    msg.req_id = 2641U;
    msg.status = 51U;
    msg.text.assign("IPUXVFQNVIWYUDJSLEKHFEFUOVBHBYSBSRGZDXKZTGOGHKWUSIZMLXOGTDOJPNDTOVXYDIYWCWWZYHTHAGLIOSXHJFELQGMKCAGDLECCJFARZUSRPVRNCKVDEFFILCL");

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
    msg.setTimeStamp(0.92456910316);
    msg.setSource(18084U);
    msg.setSourceEntity(228U);
    msg.setDestination(23208U);
    msg.setDestinationEntity(147U);
    msg.req_id = 17466U;
    msg.status = 180U;
    msg.text.assign("TMXIURQLOPVQXIFBMRG");

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
    msg.setTimeStamp(0.285200529853);
    msg.setSource(25630U);
    msg.setSourceEntity(212U);
    msg.setDestination(31589U);
    msg.setDestinationEntity(158U);
    msg.group_name.assign("AZOJHXYMMBSXUIAXMEYIAUCXVZXHCWUGBFSXKCHLWZJDLSNMZNCHOLKQOFOMKBRDUZXZPQGFPDKYRVJPRCJBVMCLYSIAOAFNLDSJRIFTCGRZYKSMGGUTGUBVEHKVROGQECWKBAPZLAEUNZWJPULQNPDAQEVTIWIBKROQFHYYDOIWYDNXDFVITNOPGCWSFRVDPTJSTXDAW");
    msg.links = 1521260924U;

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
    msg.setTimeStamp(0.931897717969);
    msg.setSource(20996U);
    msg.setSourceEntity(140U);
    msg.setDestination(14947U);
    msg.setDestinationEntity(220U);
    msg.group_name.assign("VWTMZDMPEGLDICBFCOZARJCAGSCNAFOFKRLMYJIHLTPJHHWQNICFGEI");
    msg.links = 1993200520U;

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
    msg.setTimeStamp(0.295043717048);
    msg.setSource(18149U);
    msg.setSourceEntity(2U);
    msg.setDestination(49196U);
    msg.setDestinationEntity(71U);
    msg.group_name.assign("LRXEMFSBXUPDBTGFSMHOAWKGKWGVZYAPEKTGSPSIVRVEUZADQIDIAEUTYHXQXBRJVRHWDVBLHOQSZKUAZWQIHFHSPWJWPBGXNGJYXOFFNJNBLMICPXILZAITWPLUNAROUKKPYPVFYDJIBQGDSKEBSCECICGUENUFMAAQDKUPCHRMHJFYQSMDAHQDTTKUNVTLWMTYEXJIOLVZNWZRQLFVTCCCOQXSZCHBYZ");
    msg.links = 1998552210U;

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
    msg.setTimeStamp(0.693494421474);
    msg.setSource(41447U);
    msg.setSourceEntity(172U);
    msg.setDestination(29789U);
    msg.setDestinationEntity(6U);
    msg.groupname.assign("DZPESDDBKNZRGRENELDHLYABHZYKGHBKSVQPBIPASTFAINCZOXKNAYOZNWCISRYSPAXROJCBWTSFFELLZUSQTVOOPSCJUZRJFWUCMMNVUUBTQIOHVIKDPVTUOEJMMDQHKZVXYOGGVYRUDAJDFXGRMCTHNKMIXPXKYHQXMQFCYQIKBWRJTOUICFAPCLKRAQJXMHJLEAJGFMYBSAVVPBEQNYZLTPVXMUHWZDDJRFGCSB");
    msg.action = 86U;
    msg.grouplist.assign("KUKGDEJGRHMSPMLUDOZKYQPUQFZKEPXSMIEVUNPBTNAWZOUEMCGZYNRUTNFWVCOKXIVFCPGBPFUNDYQMXMRYOLLXGBISDVWLBDKOFRWZGCJRJQIJBATUWFTNRWHKSYZLQXKRNIHAOYTEYTDZRNVXKXATBGEFHAEM");

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
    msg.setTimeStamp(0.397936929325);
    msg.setSource(28949U);
    msg.setSourceEntity(110U);
    msg.setDestination(55907U);
    msg.setDestinationEntity(201U);
    msg.groupname.assign("GLAEPOZQTSJSBQAFQRDNCMHHDOSEPDESOYUNFIIPNQBVMFWYSIDCLMDXVAXVYFOIZYKONEHWZDSQPJIUNY");
    msg.action = 161U;
    msg.grouplist.assign("VLKMWKSMWPF");

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
    msg.setTimeStamp(0.113610995581);
    msg.setSource(50686U);
    msg.setSourceEntity(10U);
    msg.setDestination(41083U);
    msg.setDestinationEntity(143U);
    msg.groupname.assign("HCDZQPFDEFXCSUIEYONSRBBBGZSXPPZQCVWMTDJSEIGZHMMUZPKLNAAWLPZRXYSCVWBXQOTVPAYGCUKKZEFFOKTECLUJBULODEQHUICSTAXIYHSVW");
    msg.action = 213U;
    msg.grouplist.assign("UMBYHCGAZPTZPVIQIHCTSVSMWCLEAZRPRSEXHFRNIFGLJMMUSYIBX");

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
    msg.setTimeStamp(0.187007992651);
    msg.setSource(49132U);
    msg.setSourceEntity(19U);
    msg.setDestination(12395U);
    msg.setDestinationEntity(9U);
    msg.value = 0.728794675598;
    msg.sys_src = 33386U;

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
    msg.setTimeStamp(0.837337826834);
    msg.setSource(57509U);
    msg.setSourceEntity(48U);
    msg.setDestination(51495U);
    msg.setDestinationEntity(93U);
    msg.value = 0.193164751047;
    msg.sys_src = 38451U;

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
    msg.setTimeStamp(0.755798890656);
    msg.setSource(6417U);
    msg.setSourceEntity(135U);
    msg.setDestination(8419U);
    msg.setDestinationEntity(246U);
    msg.value = 0.661415792538;
    msg.sys_src = 59659U;

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
    msg.setTimeStamp(0.0435861693089);
    msg.setSource(35696U);
    msg.setSourceEntity(116U);
    msg.setDestination(21286U);
    msg.setDestinationEntity(7U);
    msg.value = 0.480427966099;
    msg.units = 52U;

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
    msg.setTimeStamp(0.570903025198);
    msg.setSource(25161U);
    msg.setSourceEntity(21U);
    msg.setDestination(49686U);
    msg.setDestinationEntity(157U);
    msg.value = 0.608638323263;
    msg.units = 126U;

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
    msg.setTimeStamp(0.0718218703522);
    msg.setSource(30062U);
    msg.setSourceEntity(150U);
    msg.setDestination(47057U);
    msg.setDestinationEntity(173U);
    msg.value = 0.0689799257301;
    msg.units = 70U;

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
    msg.setTimeStamp(0.358400670878);
    msg.setSource(41178U);
    msg.setSourceEntity(228U);
    msg.setDestination(46742U);
    msg.setDestinationEntity(36U);
    msg.base_lat = 0.111274843838;
    msg.base_lon = 0.851162350381;
    msg.base_time = 0.600209818284;

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
    msg.setTimeStamp(0.253920088416);
    msg.setSource(44836U);
    msg.setSourceEntity(222U);
    msg.setDestination(64920U);
    msg.setDestinationEntity(203U);
    msg.base_lat = 0.0302772928939;
    msg.base_lon = 0.336332736108;
    msg.base_time = 0.828212948705;

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
    msg.setTimeStamp(0.476012196788);
    msg.setSource(31331U);
    msg.setSourceEntity(2U);
    msg.setDestination(25771U);
    msg.setDestinationEntity(163U);
    msg.base_lat = 0.754617878592;
    msg.base_lon = 0.141746089195;
    msg.base_time = 0.471340890026;

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
    msg.setTimeStamp(0.481435243466);
    msg.setSource(53073U);
    msg.setSourceEntity(158U);
    msg.setDestination(34536U);
    msg.setDestinationEntity(199U);
    msg.base_lat = 0.376097617913;
    msg.base_lon = 0.549596485653;
    msg.base_time = 0.422837629453;
    const char tmp_msg_0[] = {-24, -119, 83, 80, -65, -81, 101, 77, -105, -56, -107, -108, 120, 87, -46};
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
    msg.setTimeStamp(0.0146243147391);
    msg.setSource(54391U);
    msg.setSourceEntity(250U);
    msg.setDestination(8723U);
    msg.setDestinationEntity(40U);
    msg.base_lat = 0.391320340136;
    msg.base_lon = 0.905455418789;
    msg.base_time = 0.673263547131;
    const char tmp_msg_0[] = {-113, 58, -73, -44, 92, 101, 22, 12, -61, 2, 92, 21, 12, -42, 63, -89, -74, -1, -76, 46, 117, 48, -117, 49, -51, -70, -52, -8, -85, -89, 120, 80, 23, 60, -78, 49, 42, 40, 93, 44, -78, -127, -57, 40, 28, -80, -111};
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
    msg.setTimeStamp(0.473204914473);
    msg.setSource(381U);
    msg.setSourceEntity(207U);
    msg.setDestination(33801U);
    msg.setDestinationEntity(69U);
    msg.base_lat = 0.1837862152;
    msg.base_lon = 0.450213690528;
    msg.base_time = 0.293645612547;
    const char tmp_msg_0[] = {-63, 86, -60, -120, 19, -127, 121, 114, 29, 29, 110, 12, -12, -13, -99, -83, 126, 114, 18, -97, -121, 44, -28, -71, 89, 96, 11, -82, -87, 65, -48, -81, 16, 88, 62, 118, 124, -11, 53, 88, 55, -1, -92, 22, 22, -35, -91, 121, 102, -85, -107, 89, 74, 65, 63, -4, -117, -31, 87, 116, 115, 74, 10, -107, -65, 30, -121, 126, 84, 120, -87, 89, 11, -114};
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
    msg.setTimeStamp(0.350072237408);
    msg.setSource(16943U);
    msg.setSourceEntity(123U);
    msg.setDestination(47626U);
    msg.setDestinationEntity(7U);
    msg.sys_id = 5893U;
    msg.priority = 52;
    msg.x = 19014;
    msg.y = -26539;
    msg.z = 31172;
    msg.t = -15388;
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.95625919773;
    tmp_msg_0.reason = 190U;
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
    msg.setTimeStamp(0.618939384093);
    msg.setSource(42572U);
    msg.setSourceEntity(129U);
    msg.setDestination(12989U);
    msg.setDestinationEntity(248U);
    msg.sys_id = 11813U;
    msg.priority = 123;
    msg.x = -25888;
    msg.y = -6914;
    msg.z = -9071;
    msg.t = 21416;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 69U;
    tmp_msg_0.op = 110U;
    tmp_msg_0.plan_id.assign("CAWDZDYILUEBIULCEDCDFGRVVEEFQFTFSFUQQIVGCAOHOMHOZOAFCBXMUCGYWOXOIPTDLQPEVBLPWXYHZPIRPKMZJXEHEHIYHVKWTNAYVIKTWXHYHKNZNZFBKJZXMPOWZIWNWBYWLZBMYDUFLFGXGJLCRROTNUETKGKAGGWPNIALJTSRQSBJAXRXF");
    tmp_msg_0.params.assign("VBKMTCOTFWOYBSGHOHKHNJORUBYAKSNPGZDWJHNRQTHFQCCWYYMXPDFBNXVIMINLHOKLZVEVGIGJETAUWXELDLIUKZEIPPGPLMFRBSQPDFTAZZJVTVBUGIZFSPMLKOCQYJISIQLASRVEZUAXGRYGGNUWEB");
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
    msg.setTimeStamp(0.183599798875);
    msg.setSource(14459U);
    msg.setSourceEntity(194U);
    msg.setDestination(1768U);
    msg.setDestinationEntity(48U);
    msg.sys_id = 51112U;
    msg.priority = -62;
    msg.x = -215;
    msg.y = 27583;
    msg.z = -12709;
    msg.t = -20846;
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 2U;
    tmp_msg_0.name.assign("VQKEIYKRIPWVLXZFOGKNXARAESSTRAFGMDHZPBUPEMJAYCVBNHPFVPYHJZVUZIZTNHWGTSOKXRPZELOZONEBISQFTLGCURDFKVGMUWLCQWDTLTUDBRILEBSQAOKVKFJTPOVMWKTHTI");
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
    msg.setTimeStamp(0.951681787964);
    msg.setSource(29046U);
    msg.setSourceEntity(206U);
    msg.setDestination(30594U);
    msg.setDestinationEntity(198U);
    msg.req_id = 1627U;
    msg.type = 218U;
    msg.max_size = 42936U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.624716575816;
    tmp_msg_0.base_lon = 0.0296924630786;
    tmp_msg_0.base_time = 0.779380556334;
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
    msg.setTimeStamp(0.0219932010369);
    msg.setSource(22940U);
    msg.setSourceEntity(173U);
    msg.setDestination(63556U);
    msg.setDestinationEntity(253U);
    msg.req_id = 36236U;
    msg.type = 47U;
    msg.max_size = 47705U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.778198379883;
    tmp_msg_0.base_lon = 0.846344239525;
    tmp_msg_0.base_time = 0.920821541583;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 41986U;
    tmp_tmp_msg_0_0.priority = 71;
    tmp_tmp_msg_0_0.x = 13867;
    tmp_tmp_msg_0_0.y = -20830;
    tmp_tmp_msg_0_0.z = 22650;
    tmp_tmp_msg_0_0.t = -23138;
    IMC::SadcReadings tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.channel = 80;
    tmp_tmp_tmp_msg_0_0_0.value = 1440839774;
    tmp_tmp_tmp_msg_0_0_0.gain = 48U;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.21057311595);
    msg.setSource(12968U);
    msg.setSourceEntity(13U);
    msg.setDestination(2138U);
    msg.setDestinationEntity(71U);
    msg.req_id = 34290U;
    msg.type = 24U;
    msg.max_size = 8822U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.862030604991;
    tmp_msg_0.base_lon = 0.241223504344;
    tmp_msg_0.base_time = 0.813769546174;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 2398U;
    tmp_tmp_msg_0_0.priority = -73;
    tmp_tmp_msg_0_0.x = -27210;
    tmp_tmp_msg_0_0.y = 26883;
    tmp_tmp_msg_0_0.z = -28618;
    tmp_tmp_msg_0_0.t = 18823;
    IMC::Announce tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sys_name.assign("CUTFLPTPKJFBHCBGGMCUASNYNAOKPYLHZVJULIPGMSPRCTHXZPHXWIWEXFBRDEEHBSGCWVBUEAIFENEOJZLISMVMIZYCGBXFKLNQKWZPAKWEKBXZBXMJOXQAHWJXTDDRZZDULIGWRNVMCOQTUJDQUOFQBGRSRLSDEYTGXCCYMGSOTOFVVLWJNXHPLAPFVKIYBNFLTARYRDANCDRJIISNTQQSEDOVYVKYUZWMVWTJQAJPUFKH");
    tmp_tmp_tmp_msg_0_0_0.sys_type = 187U;
    tmp_tmp_tmp_msg_0_0_0.owner = 57857U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.263880009297;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.23276599295;
    tmp_tmp_tmp_msg_0_0_0.height = 0.732676859972;
    tmp_tmp_tmp_msg_0_0_0.services.assign("TKBMYRVRNTNYFOCGQXPKNMNJCZOIKYJBYVSPWTABEIGFXLUBNPYGXIARQPZAFBLTHXHTIAVOLQRAFJZZVPGPSWAJLMQEEXHGQCASDKDUBFYCPRWDHGYBFHNEQYJRUZYGOIULBBQOOACRDSSUHWZUVLVHTOSDMRDEDHECJDDKKWPEEFJQPCVNXWWNRHOUIOIJUXLNKV");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.606325345534);
    msg.setSource(49587U);
    msg.setSourceEntity(177U);
    msg.setDestination(63780U);
    msg.setDestinationEntity(93U);
    msg.original_source = 52183U;
    msg.destination = 55029U;
    msg.timeout = 0.185748240177;
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {93, 75, 101, -128, 25, 126, 12, 41, 61, 97, 97, -94, 5, 40, 55, -19, 49, 124, 82, -126, 41, 31, -67, -122, 33, -85, -98, -85, -32, 106, -69, 77, 44, 82, 91, 114, 103, -99, -95, 44, 46, 113, 11, -5, 16, 14, 36, -66, -8, -101, 10, 30, -39, 109, 78, 91, -118, 14, 27, -96, -3, -105, -33, 74, -118, -9, 108, 62, -70, 38, -22, -10, -89, -70, -112, -125, -104, -87, -73, -8, -68, 1, -20, -36, -73, 88, -67, -88, -18, 22, -124, 22, 44, 89, -104, 19, -124, -116, -88, 45, 18, -84, -14, 89, 102, -60, -108, -14, 64, 26, 8, 95, -97, -127, -119, 54, 60, -109, 121, -32, -46, -9, 15, 93, 82, -95, -103, -52, -65, -103, -72, -21, 15, 83, 105, -90, 83, 112, 115, 84, -55, 20, -87, -18, -66, -9, 61, -94, -65, 1, -10, -46, -60, 22, -10, -6, 76, -50, -5, 63, -115, -94, 44, -113, -90, -127, -69, 121, 37, 118, 34, -118, -69, 51, 34, -126, 60, 87, 0, -16, -95, 63, 84, 18, 90, 95, -47, -67, 109};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.210403150039);
    msg.setSource(36939U);
    msg.setSourceEntity(192U);
    msg.setDestination(19514U);
    msg.setDestinationEntity(111U);
    msg.original_source = 29428U;
    msg.destination = 48853U;
    msg.timeout = 0.00759781307311;
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("NXLCAWEHSDWTKRUPINDUOIYHAAQFPQXZVYCQPONZXMUKWQSIEJXTURGGJFUIYOKJLZTJMBCPEMGMMPTKSEVRWBEGJZXYOMUNRMCZTJAIUOZQLJJBRYOBYTWDNHIDGZIZZBSKMFYMEVOVCFKWYSNEKPSELLBCFWHHSALQFDUTQWVQPYLKTVINDCROCPVGDHCHIMBJFLADAGFQZIOHNGQYCAOVKBRTWEBSFS");
    tmp_msg_0.action = 47U;
    tmp_msg_0.grouplist.assign("KJTSUUJTEXNISSJKJLOHWVWVLWMFXMHOCRXTZUDBNJFQGKARZBTZCLQUMCPQHEOIZZAVLYIDSBSCPLLGBBTOIYDPIDLBHTNJUFSZVZJYPMKXOAAWPGAXEHCNEKGODGZLYHHIITVWUERAOB");
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
    msg.setTimeStamp(0.492726146138);
    msg.setSource(20852U);
    msg.setSourceEntity(155U);
    msg.setDestination(10593U);
    msg.setDestinationEntity(27U);
    msg.original_source = 15021U;
    msg.destination = 19239U;
    msg.timeout = 0.864649999732;
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.79365169368);
    msg.setSource(55637U);
    msg.setSourceEntity(119U);
    msg.setDestination(50641U);
    msg.setDestinationEntity(252U);
    msg.type = 222U;
    msg.comm_interface = 4476U;
    msg.model = 58459U;
    msg.list.assign("FJCZBQFVJOOUFCMUMIXNAOIPUOFKJNZLVOTNKMCWTGLCYARLEDGGXKGQXSSHYMATFNSRHHCKFAFIMGEZVLRGFWOMTCJHVDRQXWHQYAPHKGPBBJYSDZWDQCSPAWLPLXNLFLPVOFIJZJCBVTNOESZZZAAEYHPPQNIRSJEKQNXQWPDIDJIBUQBMKBGVOLEYUCHRVKWISYJGLWUAEWRCRHYXQDUREDSTUXXEXKIETSBWBNZMYIDARTMDTTHVOBZV");

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
    msg.setTimeStamp(0.417190511941);
    msg.setSource(34065U);
    msg.setSourceEntity(212U);
    msg.setDestination(24378U);
    msg.setDestinationEntity(69U);
    msg.type = 181U;
    msg.comm_interface = 61185U;
    msg.model = 12134U;
    msg.list.assign("XBNMWRTZRTHMOAPMCAMNEGUBUGTNDCUOJDEYGEHNZCHTXPHRFZXLOQAUOAYKNWNEQJXVNDIYBFQJKBUYGAUWWNQCTSZKYPUSGMITX");

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
    msg.setTimeStamp(0.768123202391);
    msg.setSource(33196U);
    msg.setSourceEntity(150U);
    msg.setDestination(20727U);
    msg.setDestinationEntity(167U);
    msg.type = 226U;
    msg.comm_interface = 32232U;
    msg.model = 24541U;
    msg.list.assign("BBSDNOZPIQIBWOLGHGFVAQCWFVZSUIUUPDAEBBFVUKEJGJNSZQVHIODGVWQABKIRLCVCQNDMPXDAHXXISEXKKMDVVBZBQJTWMVYALDELZJCHXOYCBJZKH");

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
    msg.setTimeStamp(0.596364636199);
    msg.setSource(43224U);
    msg.setSourceEntity(154U);
    msg.setDestination(26188U);
    msg.setDestinationEntity(248U);
    msg.type = 13U;
    msg.req_id = 940162244U;
    msg.ttl = 57935U;
    msg.code = 124U;
    msg.destination.assign("FBBZHFPGQZEIBSLODVUKFQVLMHPKDEQXYOXTYEAFXWIMCNXPYIUFTOVBTSEPWPWIBRFNHQPUVSW");
    msg.source.assign("PMQVSJFCXOWRVYHPNVIRUNBKIYPHPARBJEAVJRPZDBQAGBMKHMEDLNJUNALAWFYFOMGRZSWPLTAIMMBHALDWWBHYWEIFSMPOHZIVFTTPIFCSEQUYBUPJEOUTQNLSLUKXANCGDBRUXCCZZLLNGTEXGKHJT");
    msg.acknowledge = 62U;
    msg.status = 209U;
    const char tmp_msg_0[] = {3, 46, -16, -45, -117, 66, 61, -10, -100, -103, 42, -46, 3, -71, -46, -79, 92, -17, 26, 123, 110, -50, -118, 108, -2, 98, -53, -16, 60, 122, 65, 1, 114, -102, 63, 125, -5, 57, -117, -19, 72, -24, -29, -122, -98, 105, -111, 48, -70, -28, -46, 105, 102, 90, -40, 18, 92, -4, -22, 45, -119, 92, 1, 112, -65, -35, 34, 67, -1, -90, -126, 91, 33, 4, 81, 34, -26, 90, 99, -29, 122, 26, -100, 37, -25, -55, -81, 80, -38, -87, 31, -64, -100, -85, 76, 49, 85, -95, 94, 45, -33, 13, -95, -46, 76, 46, 69, -32, -84, -55, -85, -95, 91, -63, 31, 81, 10, 39, 34, 35, -51, -11, 92, -70, 73, 62, -64, 69, -10, -115, 60, -74, 83, -116, -62, -67, 34, -59, 64, -15, -106, 30, -7, -107, -90, -76, 36, 48, 18, -29, 58, 96, -107, 81, 99, 23, 78, 12, -3, 116, 85, -72, 65, 66, -10, -105, 118, -61, -114, 24, -38, -107, 60, 38, 53, 58, -88, 76, -30, 68, 14, -125, 16, -1, 19, -127, -66, -110, 79, -114, 103, -15, -38, -43, -77, -119, -56, 121, -89, 20, 8, -93, 121, -42, 72, 21, -119, 34, -88, -125, 30, 48, 122, -26, 15, -54, 3, -88, -56, 44, 124, -11, 126, -89, 26, 84, -102, -79, 71, -116, -104, 73, -45, 107, 37, 124, 40, 46, 100, 34, 17, 17, -102, -31, 5, 12};
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
    msg.setTimeStamp(0.426224428533);
    msg.setSource(35383U);
    msg.setSourceEntity(203U);
    msg.setDestination(18530U);
    msg.setDestinationEntity(142U);
    msg.type = 187U;
    msg.req_id = 4277607970U;
    msg.ttl = 4611U;
    msg.code = 118U;
    msg.destination.assign("RNSWLDWPUMYCJCERIQDYGHENH");
    msg.source.assign("ZAYNHMJEHCAWYTNCVSGMNTAWGCHBRLNCXWTLYAADMVQQMZMILHYEIUONKMDQKYLLWKAVGGIH");
    msg.acknowledge = 117U;
    msg.status = 74U;
    const char tmp_msg_0[] = {-111, 60, 57, -33, 118, -60, 61, -60, -45, 73, 77, 120, -66, -21, 51, 99, -116, -21, 103, -116, -42, 60, 47, 0, 85, 20, 65, -86, 6, -83, 64, -69, -50, 7, 8, -96, 26, 112, 41};
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
    msg.setTimeStamp(0.375582027169);
    msg.setSource(2221U);
    msg.setSourceEntity(220U);
    msg.setDestination(57666U);
    msg.setDestinationEntity(108U);
    msg.type = 109U;
    msg.req_id = 1512604843U;
    msg.ttl = 26492U;
    msg.code = 205U;
    msg.destination.assign("DYWLQVNZRJCRWLVSSKNRLGXVIAMAWUKCNLIAFAYWTTUSGOPYPGYMIZMEKXJQHCVNIRGFBOKIHBSBCCEPUTWZODHJYOYZQXGPPJVKEVMTQBTINOLHOMKFOJQDLUHZJXZARDXFVTRQKLHVSPDNJJAH");
    msg.source.assign("VEISVPRMFAXMZSQWQQHLZXPJPGATOJJWFRZNVHFUGXPZKZMAYULAABOUBBONQYUZTCPYBPIHWCYHJCUFSNHBCKSVTXTKDLGGWTKYXKDDDTBQQCRBTNEHHLXDUMTKVWVOKINLWNAGWYZUVJRWICKJZ");
    msg.acknowledge = 165U;
    msg.status = 96U;
    const char tmp_msg_0[] = {-68, -68, -87, 60, -97, -116, -5, -47, -80, -98, 123, -48, -109, -122, -31, 86, 36, -107, -83, 45, 62, -70, 0, 25, 52, -8, 71, 115, 33, 54, 77, 3, -35, -16, -15, 2, 85, -80, 8, -73, 40, 54, 46, 69, 116, -4, -46, -35, 72, -33, -125, -75, -36, -35, 29, 35, -5, 55, -77, -94, -56, 45, 117, -111, -12, -61, -128, 111, -80, -92, -110, -128, 86, -11, -110, -18, 31, -45, -5, -110, -72, -73, -105, 76, 120, -112, -61, 58, 62, 44, -56, 38, 56, 122, 126, 6, -99, 65, 68, 125, -112, -73, -64, -89, 111, 126, -15, 109, -54, 58, 59, -100, -83, -62, 32, -10, 77, 35, 93, 43, -55, -108, -101, 58, 82, 78, -72, 66, -61, -5, -96, 78, 80, 34, 16, 16, -35, 9, -83, 44, -115, -9, -112, -109, -91, 24, -61, 115, 105, 16, -82, -42, -123, 69, 53, -106, 121, -7, -102, -37, 59, -6, 34, -42, 60, -101, 124, -9, -120, 103, 110};
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
    msg.setTimeStamp(0.246108457901);
    msg.setSource(17110U);
    msg.setSourceEntity(151U);
    msg.setDestination(6630U);
    msg.setDestinationEntity(122U);
    msg.id = 231U;
    msg.range = 0.522679904288;

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
    msg.setTimeStamp(0.604183692523);
    msg.setSource(36564U);
    msg.setSourceEntity(252U);
    msg.setDestination(21039U);
    msg.setDestinationEntity(114U);
    msg.id = 208U;
    msg.range = 0.121162583887;

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
    msg.setTimeStamp(0.936745906455);
    msg.setSource(21637U);
    msg.setSourceEntity(164U);
    msg.setDestination(39244U);
    msg.setDestinationEntity(253U);
    msg.id = 53U;
    msg.range = 0.461213835078;

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
    msg.setTimeStamp(0.898745579536);
    msg.setSource(14649U);
    msg.setSourceEntity(183U);
    msg.setDestination(53206U);
    msg.setDestinationEntity(158U);
    msg.beacon.assign("NOTDVWWGKKGGNUFEUCVZYPJUDJXCCIONYOIJTEHRDJGIAUBQKHYABAHFZCMBKYPBRDQUVMZFGSPLWSQWPIUHCBFKMPTMNJXXHOSRYNNYAATSHOQE");
    msg.lat = 0.759110682625;
    msg.lon = 0.578435667521;
    msg.depth = 0.373082554741;
    msg.query_channel = 252U;
    msg.reply_channel = 181U;
    msg.transponder_delay = 187U;

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
    msg.setTimeStamp(0.847185320395);
    msg.setSource(22803U);
    msg.setSourceEntity(249U);
    msg.setDestination(14268U);
    msg.setDestinationEntity(231U);
    msg.beacon.assign("KPNEFUGZRSRAZMVZJTNNWDPGMITLFUQVNDDTCGKOOPFBITHTUHIXXIJWWSBJUDFAGFQDJUKFJGOZAXEWYBYWYXQKUZJD");
    msg.lat = 0.542171357739;
    msg.lon = 0.0194573114838;
    msg.depth = 0.579589914702;
    msg.query_channel = 253U;
    msg.reply_channel = 197U;
    msg.transponder_delay = 93U;

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
    msg.setTimeStamp(0.702678700936);
    msg.setSource(18728U);
    msg.setSourceEntity(74U);
    msg.setDestination(22088U);
    msg.setDestinationEntity(214U);
    msg.beacon.assign("HDTOSUJTAOUZVDVIEJGOFWCQCHZEAINZZYOYDGC");
    msg.lat = 0.569515676094;
    msg.lon = 0.734918691579;
    msg.depth = 0.646238831432;
    msg.query_channel = 146U;
    msg.reply_channel = 204U;
    msg.transponder_delay = 19U;

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
    msg.setTimeStamp(0.446176680228);
    msg.setSource(52213U);
    msg.setSourceEntity(117U);
    msg.setDestination(50482U);
    msg.setDestinationEntity(40U);
    msg.op = 207U;

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
    msg.setTimeStamp(0.0816113897295);
    msg.setSource(11957U);
    msg.setSourceEntity(243U);
    msg.setDestination(63995U);
    msg.setDestinationEntity(130U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.618921655232);
    msg.setSource(56849U);
    msg.setSourceEntity(86U);
    msg.setDestination(30955U);
    msg.setDestinationEntity(113U);
    msg.op = 36U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SUHDOZODURKFNVYREWMTMTGLCRCCCAYZQKQNHIVAJFNDENVZFJKISPZUBBYBLPWIHSJUMYQUGOJUHNJXNMKYAVCPDP");
    tmp_msg_0.lat = 0.0451367601211;
    tmp_msg_0.lon = 0.720144464017;
    tmp_msg_0.depth = 0.154354737453;
    tmp_msg_0.query_channel = 247U;
    tmp_msg_0.reply_channel = 103U;
    tmp_msg_0.transponder_delay = 144U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.983982977204);
    msg.setSource(10492U);
    msg.setSourceEntity(161U);
    msg.setDestination(31328U);
    msg.setDestinationEntity(37U);
    IMC::PeekManeuver tmp_msg_0;
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("QLWSHPDWPUJZIHXLBUNCOFARTDDGNEGEUYFYINORNXQIAMRVPWEBRNKYXOXYFHRWVRVIVODFWLVSQSSWMCMY");
    IMC::YoYo tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 39183U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.227358559007;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.091799085954;
    tmp_tmp_tmp_msg_0_0_0.z = 0.199926432439;
    tmp_tmp_tmp_msg_0_0_0.z_units = 134U;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.0283425006935;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.581607902823;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.192847106808;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 149U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DLUQJUMRVOCDEUAXUGILWQNOSTPRBUPCFMYCAQYTGVOGKESIYDBLWRKLMBHEGACYPWDSPLWNBRICBLSXNTHVYUZFOSGHGFSZMJHLCIVVKEIXCFTUKWCFGLGZXJDDAHXJMIQNERZRHBQRREHXBTAPNHDAVEMKUFQKNSMDYJNFPSBSJKMXIFPNTYEJAAIVHZFWWBLFHVJGUOX");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanDBInformation tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.plan_id.assign("BEYRQXRZLSTCHGWP");
    tmp_tmp_tmp_msg_0_0_1.plan_size = 6992U;
    tmp_tmp_tmp_msg_0_0_1.change_time = 0.916869202159;
    tmp_tmp_tmp_msg_0_0_1.change_sid = 40252U;
    tmp_tmp_tmp_msg_0_0_1.change_sname.assign("UWGTKOBZRLPEMCXKZMLYHBRYELNDBIQAGOUWAYBZRLLPPHOSFTIVITCQKUTGVVAZBYKADBFCPLAQKEZDMASVTPXYJQNYSBAMCFQNHAWCUTELLHUDSGSNFLBFDXXXWTCDWQIGZYRRSWZWYJNKTOFQJRVHXKPNIXWUGNBIRCJSVKVGDNRPUHGZNOJAYWDSOXJF");
    const char tmp_tmp_tmp_tmp_msg_0_0_1_0[] = {-78, 76, 63, 46, -126, -111, -32, 71, 46, 68, -27, 55, 112, -43, -122, 56, -41, 41, -88, -9, -82, 32, 9, 62, -63, -51, -17, 122, 95, 46, 99, -65, 103, 71, -18, 24, 61, 108, 26, 13, -125, 72, 28, 103, -70, 126, 45, -37, -46, -55, 26, 119, -48, 84, -6, 32, -34, -30, -57, 119, -15, 5, 47, 24, 26, -50, -38, 9, -72, 116, -128, -82, 121, 91, -109, 66, -8, 73, 115, -89, -44, -105, -122, 56, 117, 102, -117, 116, -87, -92, -25, -17, -119, -4, 108, -95, -125, -76, -33, -124, -50, -5, 82, 101, -82, -124, -1, -21, 82, -105, 114, 103, 28, -110, -13, 9, -3, -32, -107, 52, -20, -88, 14, -55, 53, -128, 2, -2, -100, -101, -20, 17, -89, 69, -108, 59, -65, 105, -2, 88, 107, 44, 31, 90, -64, 43, 42, -22, 62, 30, 45, -14, -11, 14, 117, 97, -114, -71, -47, -127};
    tmp_tmp_tmp_msg_0_0_1.md5.assign(tmp_tmp_tmp_tmp_msg_0_0_1_0, tmp_tmp_tmp_tmp_msg_0_0_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_1_0));
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.man.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.669493098898);
    msg.setSource(52813U);
    msg.setSourceEntity(156U);
    msg.setDestination(60645U);
    msg.setDestinationEntity(28U);
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 353072930U;
    tmp_msg_0.messages.assign("CKYZPCIXRMXQQCKIIDLCVF");
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
    msg.setTimeStamp(0.208322117176);
    msg.setSource(35634U);
    msg.setSourceEntity(239U);
    msg.setDestination(43928U);
    msg.setDestinationEntity(141U);
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("SIIVBPUEDKBIJAFGRMNO");
    tmp_msg_0.max_speed = 0.433275255515;
    tmp_msg_0.speed_units = 39U;
    tmp_msg_0.lat = 0.854201524826;
    tmp_msg_0.lon = 0.943497871296;
    tmp_msg_0.z = 0.396259191306;
    tmp_msg_0.z_units = 127U;
    tmp_msg_0.custom.assign("CRVVJKGICOMLDTKMJAOEQJNXUBFOEHRBLFIXIHTPDHLBUAHBPPRDGECPE");
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
    msg.setTimeStamp(0.767664103806);
    msg.setSource(15663U);
    msg.setSourceEntity(200U);
    msg.setDestination(27246U);
    msg.setDestinationEntity(250U);
    msg.op = 214U;
    msg.system.assign("YSOCRDXTVOLWESXLSKOOVISBIEGJYYAFCUZFYID");
    msg.range = 0.513928330359;
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 27U;
    tmp_msg_0.mode.assign("AWKPIQFWNBMUHTDRATMZYIJQXLTGBVRNSDKCKEXKPDTJOOBSXZTLNVGRY");
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
    msg.setTimeStamp(0.0373287300733);
    msg.setSource(50498U);
    msg.setSourceEntity(245U);
    msg.setDestination(11328U);
    msg.setDestinationEntity(254U);
    msg.op = 64U;
    msg.system.assign("DKJSQQNGSANBLZLKOQPLPRQBUNHDDFRXJHADEXRFCRSCWEEKSOQYNFONLDTUMIMIGXDPGFKMDOCWUTXWVMHCVFPXZOHJSRNVDJHVGVLTJAEUCNJVPMNGKQZAORKPZYWFARUIWWEKHSPUCGHFLMQBLAILYMIPJMKBPFU");
    msg.range = 0.813728085003;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 8507U;
    tmp_msg_0.duration = 769U;
    tmp_msg_0.speed = 0.608953601963;
    tmp_msg_0.speed_units = 19U;
    tmp_msg_0.x = 0.194802592339;
    tmp_msg_0.y = 0.505792760881;
    tmp_msg_0.z = 0.829890218395;
    tmp_msg_0.z_units = 139U;
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
    msg.setTimeStamp(0.477425841757);
    msg.setSource(54669U);
    msg.setSourceEntity(155U);
    msg.setDestination(23851U);
    msg.setDestinationEntity(136U);
    msg.op = 200U;
    msg.system.assign("TARNSDFQPUXCQHYAYLKHNNGKJFFXPZUKIEEGETPHNJLBFFVIACUVQQWQTFWYZCXLMRVOTXANWTSZXQRLEHCCTBVIWSITPAPGRMIHMMSBJWNIZKETXOYEZNHUSWPD");
    msg.range = 0.307054532183;
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("FGRPXITPYASBQRYCEUUOSIWBNMZPXRSLTKNSREPXYMPKNDT");
    tmp_msg_0.links = 3811511052U;
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
    msg.setTimeStamp(0.875128762848);
    msg.setSource(31324U);
    msg.setSourceEntity(43U);
    msg.setDestination(2122U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.20553311542);
    msg.setSource(63617U);
    msg.setSourceEntity(122U);
    msg.setDestination(26651U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.813201154891);
    msg.setSource(18115U);
    msg.setSourceEntity(209U);
    msg.setDestination(17226U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.581444095975);
    msg.setSource(43449U);
    msg.setSourceEntity(215U);
    msg.setDestination(14639U);
    msg.setDestinationEntity(145U);
    msg.list.assign("JPKIURBMRYCYZBOMFVKQIHAAPEFTFEGXXCSWGNRDDXPWZEEZFLNBQTBLHEOZMCRRBNSWHHXLATAYXKDAVUNFDMDDTPNAVLUHXJQEHJKVCWDVBIDTMIMTYKOUYRZJTCWATZZPEOWRKIGLFHGHLSUKLOOFOKMYQAFLLVPGZSZJQXRLS");

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
    msg.setTimeStamp(0.0237649807753);
    msg.setSource(50844U);
    msg.setSourceEntity(25U);
    msg.setDestination(4981U);
    msg.setDestinationEntity(219U);
    msg.list.assign("BHLOLQGUGIQRVVAYSOKOZOZGIHCKJCCSRQVWVFCWEVMSRAMUBMIDGOBAKDTEHGOATRUDPQNCKJRXHXWSKQLXYMFWNWZBWNDPFLPQUBEYMTEPEPBZZEWHWKVUVIQQUSJTPYAFEKPJBFOCSIELOG");

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
    msg.setTimeStamp(0.856460976629);
    msg.setSource(24841U);
    msg.setSourceEntity(188U);
    msg.setDestination(53459U);
    msg.setDestinationEntity(89U);
    msg.list.assign("LXEMMVJMOGWVBDNMYFJTUSAEFVJYIYYLS");

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
    msg.setTimeStamp(0.0191671284729);
    msg.setSource(44291U);
    msg.setSourceEntity(41U);
    msg.setDestination(62541U);
    msg.setDestinationEntity(222U);
    msg.peer.assign("KREMIUYQRARUGELUXPTWYHCELBNAOBLSMACEIMUFCEWCPIVXVESTGTRXHKSQDHQYXJUFQMJHPQYLNJEGQJQUQKHLXQSNBVSKFGCFUIQXWBINOCYJEUDYLNNRHDKADYABLFPVCTKAAJBRKAAJYDUPXMWVZDVPGGMMNYLDPTPDZZJKJFZCVGWHHTZFBWSBWUZCZCZO");
    msg.rssi = 0.0792770635486;
    msg.integrity = 19113U;

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
    msg.setTimeStamp(0.0618291254414);
    msg.setSource(6641U);
    msg.setSourceEntity(245U);
    msg.setDestination(38564U);
    msg.setDestinationEntity(150U);
    msg.peer.assign("MBRPGCNFJQPUHVZXBQTLPRRVIELNGYRHOEITCXIEYZGFEIDOYQAHOHDWQBWJLTZXWBEJIVFSZCOLRLBJWGUYTYFSHKJLQMLBFIXQUWYYVKQGYANXMZSGRRESCFGODRMTDAHFFCVUCLNX");
    msg.rssi = 0.847404569842;
    msg.integrity = 47024U;

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
    msg.setTimeStamp(0.604874964236);
    msg.setSource(19030U);
    msg.setSourceEntity(93U);
    msg.setDestination(51536U);
    msg.setDestinationEntity(52U);
    msg.peer.assign("TNGTUDCUAFTHBWZFNSOIJSMGZKEQPXVCZEEKODVXDYKWQVMRJSVIBCHIHIQBKPJWLUOGPOEFFERUNIDJQSWHUBDYLRTZOUMYLPXMJLSWZASPBNCQZVSVRDKVCKJSONQQJOTNKYJYMTFZKCFZAATWGJRURXY");
    msg.rssi = 0.195514883208;
    msg.integrity = 23286U;

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
    msg.setTimeStamp(0.239999906685);
    msg.setSource(40871U);
    msg.setSourceEntity(250U);
    msg.setDestination(50184U);
    msg.setDestinationEntity(47U);
    msg.req_id = 57259U;
    msg.destination.assign("NKZKUDVCBRGBRDEDXOPZSBPHWCOJPIVMOEKJDDILKYQSUARVQOMWIUWHYJNDTRLHFHZXEPBQMZHQXVTSENEIICLBPOZXISFNTRHECUOHMMTVGPYQBF");
    msg.timeout = 0.541690737774;
    msg.range = 0.947726818718;
    msg.type = 60U;
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("JIXHVPEENZRVZXRRRZHB");
    const char tmp_tmp_msg_0_0[] = {59, 8, 102, -66, -96, 14, -72, 23, -47, -73, -13, 42, -104, 125, -12, 99, -87, 110, -84, -50, 24, -118, -115, -70, -52, 93, 46, 124, -108, 22, -25, -39, -112, 38, -80, -49, 44, -25, -66, -66, 23, -16, -36, 55, 27, -106, -108, -88, -39, 82, 120, 47, 80, -45, 20, -8, 9, 20, -77, 97, 76, -68, 114, -96, 110, 117, 6, -60, -124, -9, -114, -41, 37, -111, 56, -101, -18, 70, -41, -106, -122, 73, 122, -23, 34, -21, -5, -11, -120, -47, 84, 22, -21, -8, -48, -124, 26, 10, -117, -91, 100, -112, 111, -50, 31, 114, 71, 26, -55, -109, -45, -68, 103, 4, -75, -42, -78, -18, 99, 41, -46, 106, 79, -1, 0, 17, -79, -120, 67, 25, 42, 125, -33, 123, 28, 69, -46, -89, 100, -20, -26, -45, 100, 84, -68, -116, -114, 117, -76, 69, -43, 3, 25, 78, 21, 22, -61, 21};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.00156685138064);
    msg.setSource(42461U);
    msg.setSourceEntity(245U);
    msg.setDestination(1313U);
    msg.setDestinationEntity(225U);
    msg.req_id = 38504U;
    msg.destination.assign("GBRSYDXDMHBMXYLNTYMTVHKQXAEOTTWHFRKJMQIWUGFJCSVZPBJLYWOWVIXELTMFTOBYJMDUVCVNJRDCNDBWCEQTIALGNFITTPWLGPRHJBKNKRZXSPIKSHQ");
    msg.timeout = 0.650056694297;
    msg.range = 0.069152859354;
    msg.type = 60U;
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("UDPTEVRVTPSWUFWJEQIZUUAONKQZEFMPTXVBWTGAVK");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("FNXUQRETYMLBXOXQBDNJDAUZAMRYVRYJZWGGJSJACDTLUEVYGHWHKFNLHECWLZQHEMKNKVMDWTCJUVDSYBLEYXCXKPNSUTJOLRTWELNIJUMRQKQWLFKDESSAKVCHVFCZFVZWNSIJPMAUTNTHANPVGVXGYOQBAHQDPQIBITPXWUHMRDQOGQJGUCAG");
    tmp_tmp_msg_0_0.sys_type = 194U;
    tmp_tmp_msg_0_0.owner = 41761U;
    tmp_tmp_msg_0_0.lat = 0.790394889304;
    tmp_tmp_msg_0_0.lon = 0.681051582426;
    tmp_tmp_msg_0_0.height = 0.565675518886;
    tmp_tmp_msg_0_0.services.assign("UDELBHAUPOFCTYVQLGWCVBQRCUINOM");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.116069383967);
    msg.setSource(9568U);
    msg.setSourceEntity(234U);
    msg.setDestination(29403U);
    msg.setDestinationEntity(164U);
    msg.req_id = 30639U;
    msg.destination.assign("DCBDFHGHYLEVFVSLEZYVGMRJCLQBOTHGEVGXZMTIEWFPIQHJANPKQDKNEZQHOTSQIPQMBVMIGVWTXSMBURTWPQZFUJGHIKVPMGBRTYXNHRVTJSNQPPEVCFALAHIKPANPXSZXJIELCUYBYXNPNCVRARUXOIBDMKFKEDZIEHWIFRGJJRCLMDFAZDOQKOBWJKCXUTZGUUGKROOTSCZY");
    msg.timeout = 0.998627435166;
    msg.range = 0.797334057692;
    msg.type = 91U;
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 62193U;
    tmp_msg_0.ttl = 63214U;
    tmp_msg_0.destination.assign("JXTYYQPIEMPIZZHREGHZDTRULZEVTYHJAORBQFYOWYUUIBFKPQJLMUEEFIJMCRONIBQIJHWSAOZWZLKIGEOBNUHGSXRJCHYDKCJSSIMXYGVLYEUKVNADVTGUXKDXVSFFEHPMIQQERHCFMQFPFNDNBECVOTWANODOSTAVGKTDWFD");
    const char tmp_tmp_msg_0_0[] = {-53, 37, -121, -123, -117, -75, 89, -73, 99, 27, -81, -107, -70, 118, 78, -38, -99, 75, -73, 71, -14, -19, -114, 84, 101, -42, -23, -43, 38, 126, 20, 111, -81, 108, -104, 25, -52, -40, 26, -41, 122, -15, -102, 20, -28, 77, 80, -21, 74, 32, 17, -96, 20, 116, 111, -81, 8, -92, -100, -2, 16, 115, -69, 47, 62, -87, -126, 82, 91, 11, 110, -26, -27, -101, 90, -29, -98, -21, 118, -56, -64, 123, -122, 31, 18};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.968891789972);
    msg.setSource(28490U);
    msg.setSourceEntity(75U);
    msg.setDestination(62043U);
    msg.setDestinationEntity(197U);
    msg.req_id = 7492U;
    msg.type = 31U;
    msg.status = 156U;
    msg.info.assign("VZIRLYIRAZULYXKXSBESSUVLQHITDPJAYPKFBBSIQMVEFRYYGDONOCFJZHNZHFCAWTYAFEFHMRJFMHZTTLJFXGUDJNSJP");
    msg.range = 0.760674456339;

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
    msg.setTimeStamp(0.0423342319805);
    msg.setSource(54123U);
    msg.setSourceEntity(250U);
    msg.setDestination(42098U);
    msg.setDestinationEntity(91U);
    msg.req_id = 24761U;
    msg.type = 23U;
    msg.status = 233U;
    msg.info.assign("RXEANKFUSPJCTIVLWAJIRKMPMBKGBCXSDSLEIEDQZHTBDWJGHFXASDRDNIRHBNTADUVZDYPNGCUPZVEGEODKJUBELQEFRTYKTJNLYPCCQQGHFSWLIUOZXQZMAYTSOAOCWHMMCHMIOLAHHOXGJFEWLKNRJDFQYUVGZWYKRLBTXSIZSWKAGNMQCJZYYXKFYPOEYBOTVDUVNNRBFVUBQGCISHZPJUPQFNVOUABXRTCJMWSVMIE");
    msg.range = 0.473417160871;

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
    msg.setTimeStamp(0.751373191145);
    msg.setSource(43424U);
    msg.setSourceEntity(13U);
    msg.setDestination(60032U);
    msg.setDestinationEntity(202U);
    msg.req_id = 35606U;
    msg.type = 213U;
    msg.status = 48U;
    msg.info.assign("VPOMYKZIYYEHHFPAMFHSVJENBLALZOQSRGDDOHSGHPHUTBQXBSUERMKCPJX");
    msg.range = 0.380242594412;

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
    msg.setTimeStamp(0.273337420516);
    msg.setSource(58612U);
    msg.setSourceEntity(223U);
    msg.setDestination(826U);
    msg.setDestinationEntity(126U);
    msg.value = -5511;

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
    msg.setTimeStamp(0.306407712567);
    msg.setSource(2021U);
    msg.setSourceEntity(43U);
    msg.setDestination(60624U);
    msg.setDestinationEntity(51U);
    msg.value = 29135;

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
    msg.setTimeStamp(0.351053331796);
    msg.setSource(21509U);
    msg.setSourceEntity(69U);
    msg.setDestination(64043U);
    msg.setDestinationEntity(33U);
    msg.value = 8384;

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
    msg.setTimeStamp(0.762633740208);
    msg.setSource(63780U);
    msg.setSourceEntity(109U);
    msg.setDestination(2324U);
    msg.setDestinationEntity(19U);
    msg.value = 0.114400620139;

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
    msg.setTimeStamp(0.283869778355);
    msg.setSource(4189U);
    msg.setSourceEntity(187U);
    msg.setDestination(33421U);
    msg.setDestinationEntity(43U);
    msg.value = 0.671148775703;

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
    msg.setTimeStamp(0.30535636035);
    msg.setSource(57537U);
    msg.setSourceEntity(216U);
    msg.setDestination(51577U);
    msg.setDestinationEntity(32U);
    msg.value = 0.739767719586;

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
    msg.setTimeStamp(0.874370160315);
    msg.setSource(28831U);
    msg.setSourceEntity(209U);
    msg.setDestination(29000U);
    msg.setDestinationEntity(249U);
    msg.value = 0.655892451105;

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
    msg.setTimeStamp(0.439637511998);
    msg.setSource(54708U);
    msg.setSourceEntity(127U);
    msg.setDestination(39404U);
    msg.setDestinationEntity(93U);
    msg.value = 0.0109698280697;

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
    msg.setTimeStamp(0.276145451511);
    msg.setSource(15130U);
    msg.setSourceEntity(215U);
    msg.setDestination(54426U);
    msg.setDestinationEntity(95U);
    msg.value = 0.521874078256;

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
    msg.setTimeStamp(0.851877744481);
    msg.setSource(54252U);
    msg.setSourceEntity(7U);
    msg.setDestination(2095U);
    msg.setDestinationEntity(110U);
    msg.validity = 51185U;
    msg.type = 219U;
    msg.utc_year = 14555U;
    msg.utc_month = 200U;
    msg.utc_day = 252U;
    msg.utc_time = 0.91190270782;
    msg.lat = 0.132107078394;
    msg.lon = 0.147073401289;
    msg.height = 0.997495426028;
    msg.satellites = 203U;
    msg.cog = 0.701137063011;
    msg.sog = 0.164012108936;
    msg.hdop = 0.959200985119;
    msg.vdop = 0.887414049288;
    msg.hacc = 0.66398862075;
    msg.vacc = 0.216087381575;

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
    msg.setTimeStamp(0.0326654847696);
    msg.setSource(3954U);
    msg.setSourceEntity(194U);
    msg.setDestination(32255U);
    msg.setDestinationEntity(4U);
    msg.validity = 58874U;
    msg.type = 214U;
    msg.utc_year = 34263U;
    msg.utc_month = 192U;
    msg.utc_day = 74U;
    msg.utc_time = 0.362351573926;
    msg.lat = 0.426240219306;
    msg.lon = 0.497085438196;
    msg.height = 0.325828363181;
    msg.satellites = 99U;
    msg.cog = 0.000462224055949;
    msg.sog = 0.47667168324;
    msg.hdop = 0.020659813828;
    msg.vdop = 0.232247936212;
    msg.hacc = 0.401867782668;
    msg.vacc = 0.12796801667;

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
    msg.setTimeStamp(0.276530859146);
    msg.setSource(51197U);
    msg.setSourceEntity(156U);
    msg.setDestination(43209U);
    msg.setDestinationEntity(179U);
    msg.validity = 64918U;
    msg.type = 101U;
    msg.utc_year = 17380U;
    msg.utc_month = 91U;
    msg.utc_day = 6U;
    msg.utc_time = 0.177902969248;
    msg.lat = 0.874644142209;
    msg.lon = 0.533214957486;
    msg.height = 0.924383374493;
    msg.satellites = 110U;
    msg.cog = 0.659785229278;
    msg.sog = 0.256625905644;
    msg.hdop = 0.0884025250371;
    msg.vdop = 0.965400943083;
    msg.hacc = 0.322484929865;
    msg.vacc = 0.480212928364;

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
    msg.setTimeStamp(0.609745837533);
    msg.setSource(46559U);
    msg.setSourceEntity(123U);
    msg.setDestination(19491U);
    msg.setDestinationEntity(48U);
    msg.time = 0.9090656021;
    msg.phi = 0.276266041575;
    msg.theta = 0.182828780342;
    msg.psi = 0.365984109773;
    msg.psi_magnetic = 0.413035765245;

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
    msg.setTimeStamp(0.417279980658);
    msg.setSource(48333U);
    msg.setSourceEntity(132U);
    msg.setDestination(20381U);
    msg.setDestinationEntity(75U);
    msg.time = 0.466029027297;
    msg.phi = 0.395251357129;
    msg.theta = 0.607045420692;
    msg.psi = 0.18347797873;
    msg.psi_magnetic = 0.446163803296;

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
    msg.setTimeStamp(0.618952984886);
    msg.setSource(11920U);
    msg.setSourceEntity(27U);
    msg.setDestination(6588U);
    msg.setDestinationEntity(60U);
    msg.time = 0.874617596367;
    msg.phi = 0.199232627369;
    msg.theta = 0.575563691139;
    msg.psi = 0.12806795493;
    msg.psi_magnetic = 0.932942002181;

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
    msg.setTimeStamp(0.0982535737006);
    msg.setSource(11463U);
    msg.setSourceEntity(75U);
    msg.setDestination(50810U);
    msg.setDestinationEntity(127U);
    msg.time = 0.49430222876;
    msg.x = 0.753011572184;
    msg.y = 0.32382636947;
    msg.z = 0.877853887651;
    msg.timestep = 0.558016076158;

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
    msg.setTimeStamp(0.800391307554);
    msg.setSource(28188U);
    msg.setSourceEntity(231U);
    msg.setDestination(13680U);
    msg.setDestinationEntity(252U);
    msg.time = 0.213035939782;
    msg.x = 0.180638247697;
    msg.y = 0.229312894568;
    msg.z = 0.1951142279;
    msg.timestep = 0.369708319137;

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
    msg.setTimeStamp(0.433030594326);
    msg.setSource(63940U);
    msg.setSourceEntity(186U);
    msg.setDestination(163U);
    msg.setDestinationEntity(108U);
    msg.time = 0.830971393345;
    msg.x = 0.334534749826;
    msg.y = 0.592128002007;
    msg.z = 0.916174151869;
    msg.timestep = 0.765560885749;

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
    msg.setTimeStamp(0.59856394617);
    msg.setSource(51733U);
    msg.setSourceEntity(61U);
    msg.setDestination(31511U);
    msg.setDestinationEntity(8U);
    msg.time = 0.863990899;
    msg.x = 0.992327274374;
    msg.y = 0.49254237602;
    msg.z = 0.509321330444;

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
    msg.setTimeStamp(0.553240971115);
    msg.setSource(36918U);
    msg.setSourceEntity(113U);
    msg.setDestination(34399U);
    msg.setDestinationEntity(14U);
    msg.time = 0.761678054448;
    msg.x = 0.831172581857;
    msg.y = 0.467629396833;
    msg.z = 0.150765174609;

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
    msg.setTimeStamp(0.454324735523);
    msg.setSource(13869U);
    msg.setSourceEntity(33U);
    msg.setDestination(38405U);
    msg.setDestinationEntity(49U);
    msg.time = 0.0486391741666;
    msg.x = 0.42415541412;
    msg.y = 0.202968625099;
    msg.z = 0.635937510369;

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
    msg.setTimeStamp(0.901515504747);
    msg.setSource(37519U);
    msg.setSourceEntity(137U);
    msg.setDestination(45802U);
    msg.setDestinationEntity(81U);
    msg.time = 0.0219152861633;
    msg.x = 0.363899653954;
    msg.y = 0.462213908421;
    msg.z = 0.289077601446;

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
    msg.setTimeStamp(0.396286981069);
    msg.setSource(19946U);
    msg.setSourceEntity(16U);
    msg.setDestination(10400U);
    msg.setDestinationEntity(194U);
    msg.time = 0.43323523905;
    msg.x = 0.277845183532;
    msg.y = 0.49070590752;
    msg.z = 0.872143186844;

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
    msg.setTimeStamp(0.488345218615);
    msg.setSource(30727U);
    msg.setSourceEntity(227U);
    msg.setDestination(43030U);
    msg.setDestinationEntity(16U);
    msg.time = 0.0716857199448;
    msg.x = 0.0853620378819;
    msg.y = 0.785285882089;
    msg.z = 0.19746151302;

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
    msg.setTimeStamp(0.0988946196958);
    msg.setSource(47168U);
    msg.setSourceEntity(138U);
    msg.setDestination(48691U);
    msg.setDestinationEntity(228U);
    msg.time = 0.188790610026;
    msg.x = 0.22966155007;
    msg.y = 0.384804449671;
    msg.z = 0.786946483205;

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
    msg.setTimeStamp(0.522724963125);
    msg.setSource(41853U);
    msg.setSourceEntity(195U);
    msg.setDestination(36918U);
    msg.setDestinationEntity(142U);
    msg.time = 0.37958432606;
    msg.x = 0.722995714894;
    msg.y = 0.53971938276;
    msg.z = 0.953668670187;

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
    msg.setTimeStamp(0.871907094472);
    msg.setSource(26480U);
    msg.setSourceEntity(6U);
    msg.setDestination(39475U);
    msg.setDestinationEntity(240U);
    msg.time = 0.313390397493;
    msg.x = 0.169634296608;
    msg.y = 0.131338581811;
    msg.z = 0.707299906865;

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
    msg.setTimeStamp(0.244711600764);
    msg.setSource(12086U);
    msg.setSourceEntity(142U);
    msg.setDestination(32821U);
    msg.setDestinationEntity(205U);
    msg.validity = 48U;
    msg.x = 0.402196104002;
    msg.y = 0.519158364204;
    msg.z = 0.611031034607;

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
    msg.setTimeStamp(0.272813560573);
    msg.setSource(48240U);
    msg.setSourceEntity(79U);
    msg.setDestination(50013U);
    msg.setDestinationEntity(110U);
    msg.validity = 20U;
    msg.x = 0.877100117178;
    msg.y = 0.0159900857666;
    msg.z = 0.23517706608;

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
    msg.setTimeStamp(0.482440686087);
    msg.setSource(44550U);
    msg.setSourceEntity(243U);
    msg.setDestination(45430U);
    msg.setDestinationEntity(197U);
    msg.validity = 92U;
    msg.x = 0.121639775909;
    msg.y = 0.886396325067;
    msg.z = 0.955870567458;

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
    msg.setTimeStamp(0.694661071308);
    msg.setSource(10111U);
    msg.setSourceEntity(94U);
    msg.setDestination(22479U);
    msg.setDestinationEntity(167U);
    msg.validity = 133U;
    msg.x = 0.658051541345;
    msg.y = 0.65082131868;
    msg.z = 0.2690614009;

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
    msg.setTimeStamp(0.968484140695);
    msg.setSource(31774U);
    msg.setSourceEntity(241U);
    msg.setDestination(48669U);
    msg.setDestinationEntity(223U);
    msg.validity = 16U;
    msg.x = 0.806174407882;
    msg.y = 0.586497659496;
    msg.z = 0.384344427566;

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
    msg.setTimeStamp(0.575339766079);
    msg.setSource(32371U);
    msg.setSourceEntity(103U);
    msg.setDestination(31275U);
    msg.setDestinationEntity(193U);
    msg.validity = 227U;
    msg.x = 0.416134370952;
    msg.y = 0.785888955393;
    msg.z = 0.65277904805;

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
    msg.setTimeStamp(0.296362748101);
    msg.setSource(8639U);
    msg.setSourceEntity(69U);
    msg.setDestination(20990U);
    msg.setDestinationEntity(37U);
    msg.time = 0.634027417043;
    msg.x = 0.629661483816;
    msg.y = 0.140080659993;
    msg.z = 0.389980445967;

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
    msg.setTimeStamp(0.578113104568);
    msg.setSource(15181U);
    msg.setSourceEntity(188U);
    msg.setDestination(41830U);
    msg.setDestinationEntity(111U);
    msg.time = 0.694613042494;
    msg.x = 0.928403140648;
    msg.y = 0.632424051923;
    msg.z = 0.570820256006;

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
    msg.setTimeStamp(0.834420939829);
    msg.setSource(25362U);
    msg.setSourceEntity(101U);
    msg.setDestination(63529U);
    msg.setDestinationEntity(226U);
    msg.time = 0.327533723652;
    msg.x = 0.50574060841;
    msg.y = 0.189530582916;
    msg.z = 0.273874645047;

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
    msg.setTimeStamp(0.147769962487);
    msg.setSource(34007U);
    msg.setSourceEntity(33U);
    msg.setDestination(28436U);
    msg.setDestinationEntity(129U);
    msg.validity = 143U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.34509361745;
    tmp_msg_0.beam_height = 0.931702688244;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.698285908367;

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
    msg.setTimeStamp(0.587330621673);
    msg.setSource(32248U);
    msg.setSourceEntity(176U);
    msg.setDestination(62527U);
    msg.setDestinationEntity(253U);
    msg.validity = 208U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.348523627518;
    tmp_msg_0.y = 0.815911066581;
    tmp_msg_0.z = 0.535118150201;
    tmp_msg_0.phi = 0.92719440608;
    tmp_msg_0.theta = 0.606848446066;
    tmp_msg_0.psi = 0.211929212516;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.51065148357;
    tmp_msg_1.beam_height = 0.855297668191;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.0572189915648;

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
    msg.setTimeStamp(0.275721636629);
    msg.setSource(52663U);
    msg.setSourceEntity(144U);
    msg.setDestination(42594U);
    msg.setDestinationEntity(140U);
    msg.validity = 182U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.276524337402;
    tmp_msg_0.y = 0.384245256877;
    tmp_msg_0.z = 0.772756720625;
    tmp_msg_0.phi = 0.746214638145;
    tmp_msg_0.theta = 0.284186744027;
    tmp_msg_0.psi = 0.508506022499;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.419245140342;

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
    msg.setTimeStamp(0.189863237514);
    msg.setSource(6127U);
    msg.setSourceEntity(240U);
    msg.setDestination(59232U);
    msg.setDestinationEntity(11U);
    msg.value = 0.740875110585;

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
    msg.setTimeStamp(0.317084747239);
    msg.setSource(17555U);
    msg.setSourceEntity(136U);
    msg.setDestination(31900U);
    msg.setDestinationEntity(238U);
    msg.value = 0.644518515688;

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
    msg.setTimeStamp(0.4247738086);
    msg.setSource(32631U);
    msg.setSourceEntity(4U);
    msg.setDestination(35883U);
    msg.setDestinationEntity(206U);
    msg.value = 0.842257908605;

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
    msg.setTimeStamp(0.25325475064);
    msg.setSource(12208U);
    msg.setSourceEntity(244U);
    msg.setDestination(53901U);
    msg.setDestinationEntity(119U);
    msg.value = 0.689171436255;

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
    msg.setTimeStamp(0.0143875143714);
    msg.setSource(51633U);
    msg.setSourceEntity(149U);
    msg.setDestination(49978U);
    msg.setDestinationEntity(35U);
    msg.value = 0.661993816206;

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
    msg.setTimeStamp(0.530920201996);
    msg.setSource(38454U);
    msg.setSourceEntity(202U);
    msg.setDestination(24081U);
    msg.setDestinationEntity(237U);
    msg.value = 0.133644792698;

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
    msg.setTimeStamp(0.49633828721);
    msg.setSource(22627U);
    msg.setSourceEntity(62U);
    msg.setDestination(63628U);
    msg.setDestinationEntity(176U);
    msg.value = 0.112839227231;

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
    msg.setTimeStamp(0.0181889520192);
    msg.setSource(4377U);
    msg.setSourceEntity(47U);
    msg.setDestination(57277U);
    msg.setDestinationEntity(170U);
    msg.value = 0.841143247747;

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
    msg.setTimeStamp(0.335639573867);
    msg.setSource(59653U);
    msg.setSourceEntity(24U);
    msg.setDestination(62702U);
    msg.setDestinationEntity(99U);
    msg.value = 0.16469533475;

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
    msg.setTimeStamp(0.673191038433);
    msg.setSource(3870U);
    msg.setSourceEntity(249U);
    msg.setDestination(3497U);
    msg.setDestinationEntity(231U);
    msg.value = 0.298019604799;

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
    msg.setTimeStamp(0.599787874893);
    msg.setSource(33778U);
    msg.setSourceEntity(207U);
    msg.setDestination(57542U);
    msg.setDestinationEntity(119U);
    msg.value = 0.896231952828;

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
    msg.setTimeStamp(0.145692121867);
    msg.setSource(8177U);
    msg.setSourceEntity(107U);
    msg.setDestination(11585U);
    msg.setDestinationEntity(251U);
    msg.value = 0.685667337561;

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
    msg.setTimeStamp(0.10660581715);
    msg.setSource(4476U);
    msg.setSourceEntity(17U);
    msg.setDestination(20826U);
    msg.setDestinationEntity(37U);
    msg.value = 0.254947504504;

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
    msg.setTimeStamp(0.609305970547);
    msg.setSource(57628U);
    msg.setSourceEntity(117U);
    msg.setDestination(9558U);
    msg.setDestinationEntity(104U);
    msg.value = 0.00672675140404;

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
    msg.setTimeStamp(0.377261975785);
    msg.setSource(20074U);
    msg.setSourceEntity(212U);
    msg.setDestination(34735U);
    msg.setDestinationEntity(79U);
    msg.value = 0.65237981501;

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
    msg.setTimeStamp(0.715342336627);
    msg.setSource(60121U);
    msg.setSourceEntity(34U);
    msg.setDestination(35395U);
    msg.setDestinationEntity(163U);
    msg.value = 0.399163108604;

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
    msg.setTimeStamp(0.555682517379);
    msg.setSource(12684U);
    msg.setSourceEntity(215U);
    msg.setDestination(51947U);
    msg.setDestinationEntity(226U);
    msg.value = 0.562209311511;

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
    msg.setTimeStamp(0.238286357025);
    msg.setSource(63778U);
    msg.setSourceEntity(115U);
    msg.setDestination(20892U);
    msg.setDestinationEntity(234U);
    msg.value = 0.509185597054;

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
    msg.setTimeStamp(0.559155714244);
    msg.setSource(33217U);
    msg.setSourceEntity(108U);
    msg.setDestination(64982U);
    msg.setDestinationEntity(145U);
    msg.value = 0.50122254117;

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
    msg.setTimeStamp(0.50074883326);
    msg.setSource(47293U);
    msg.setSourceEntity(121U);
    msg.setDestination(24895U);
    msg.setDestinationEntity(92U);
    msg.value = 0.189747269862;

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
    msg.setTimeStamp(0.341090405537);
    msg.setSource(44825U);
    msg.setSourceEntity(46U);
    msg.setDestination(4186U);
    msg.setDestinationEntity(160U);
    msg.value = 0.33654121207;

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
    msg.setTimeStamp(0.590282715325);
    msg.setSource(16865U);
    msg.setSourceEntity(106U);
    msg.setDestination(34904U);
    msg.setDestinationEntity(3U);
    msg.value = 0.255806205026;

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
    msg.setTimeStamp(0.792346228727);
    msg.setSource(11703U);
    msg.setSourceEntity(158U);
    msg.setDestination(45400U);
    msg.setDestinationEntity(18U);
    msg.value = 0.250793466262;

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
    msg.setTimeStamp(0.922503640535);
    msg.setSource(21546U);
    msg.setSourceEntity(29U);
    msg.setDestination(63363U);
    msg.setDestinationEntity(69U);
    msg.value = 0.00684456855698;

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
    msg.setTimeStamp(0.569477165578);
    msg.setSource(49970U);
    msg.setSourceEntity(59U);
    msg.setDestination(6685U);
    msg.setDestinationEntity(252U);
    msg.direction = 0.0377824746333;
    msg.speed = 0.372525172899;
    msg.turbulence = 0.262802122295;

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
    msg.setTimeStamp(0.210294997701);
    msg.setSource(54762U);
    msg.setSourceEntity(51U);
    msg.setDestination(8866U);
    msg.setDestinationEntity(208U);
    msg.direction = 0.128571373009;
    msg.speed = 0.394302105052;
    msg.turbulence = 0.41341931781;

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
    msg.setTimeStamp(0.982763468307);
    msg.setSource(35154U);
    msg.setSourceEntity(193U);
    msg.setDestination(40312U);
    msg.setDestinationEntity(161U);
    msg.direction = 0.191842348928;
    msg.speed = 0.166313580443;
    msg.turbulence = 0.26872101783;

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
    msg.setTimeStamp(0.389892823931);
    msg.setSource(45403U);
    msg.setSourceEntity(212U);
    msg.setDestination(34564U);
    msg.setDestinationEntity(189U);
    msg.value = 0.636097809791;

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
    msg.setTimeStamp(0.586425054597);
    msg.setSource(23814U);
    msg.setSourceEntity(242U);
    msg.setDestination(64441U);
    msg.setDestinationEntity(95U);
    msg.value = 0.701868920975;

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
    msg.setTimeStamp(0.331453888441);
    msg.setSource(65320U);
    msg.setSourceEntity(104U);
    msg.setDestination(13336U);
    msg.setDestinationEntity(118U);
    msg.value = 0.823520390949;

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
    msg.setTimeStamp(0.986047344042);
    msg.setSource(58743U);
    msg.setSourceEntity(18U);
    msg.setDestination(621U);
    msg.setDestinationEntity(50U);
    msg.value.assign("ESTEYSNWDMZCIBALEBFUOYHDEXOAYXGDDGNXZN");

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
    msg.setTimeStamp(0.565015343461);
    msg.setSource(62319U);
    msg.setSourceEntity(103U);
    msg.setDestination(35251U);
    msg.setDestinationEntity(49U);
    msg.value.assign("FIQQBMQCVEXSFCHCYJKOEPHJMHDDXYHUBIKBADVVAEOANAPQLONSWAFKBSZPOQPJJGUPWTDRAOQYZGLXUIGECHFRZTIPMGWJZYCRCUFFRMXZCNTSVMYINEKUYVPTXLWLGZULGIFPWQDVWENSHNADKWINBLMXKFVYXIJCTTHZXLSVHGWARPMKDWYKMNEEFRSMABUBVMZDRPQUJCYGSLKVDLJQILXNU");

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
    msg.setTimeStamp(0.0920498268915);
    msg.setSource(26623U);
    msg.setSourceEntity(9U);
    msg.setDestination(33369U);
    msg.setDestinationEntity(237U);
    msg.value.assign("PIFWMSWYWKWRYYEPTCSLUVPCRTREAVKUGGNMSOEFOPLONXVIVGRIOPGFVBBPNCFNKDUJYWTMRPESHCQLYBDGMWHVJSXPVTZEKXNMUUQUJOAZXZWKXPQSIDLHYAYOALGDBUAHYPTJFJHNZMDZEWGXISVJZMIICDDFOBJXJTUZXKTBQHJBFTNEWDAHBYKKLIRKWBFECGGXFRVQEXCARQIM");

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
    msg.setTimeStamp(0.210897600556);
    msg.setSource(38333U);
    msg.setSourceEntity(193U);
    msg.setDestination(48348U);
    msg.setDestinationEntity(118U);
    const char tmp_msg_0[] = {95, 77, 56, -64, 7, -97, 90, -34, -93, -24, 115, -33, 17, -11, 32, -23, 116, 118, -84};
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
    msg.setTimeStamp(0.0171172696321);
    msg.setSource(7823U);
    msg.setSourceEntity(151U);
    msg.setDestination(42838U);
    msg.setDestinationEntity(12U);
    const char tmp_msg_0[] = {-78, 17, 42, 61, -82, 25, 35, -63, -49, -90, 59, 50, 18, 38, -31, 0, 119, -89, -103, -92, -85, -53, 122, 59, 13, -11, 66, -51, -77, 62, -44, -62, 118, -86, -49, 1, 91, -11, -123, 87, 5, -54, 73, 101, 61, -82, 70, 87, -42, -71, 76, 67, -66, -60, -26, 42, 121, 70, 64, -60, -25, 79, 40, 85, 55, 35, 21, -65, 39, -126, 16, 58};
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
    msg.setTimeStamp(0.0487046349689);
    msg.setSource(11952U);
    msg.setSourceEntity(40U);
    msg.setDestination(59227U);
    msg.setDestinationEntity(251U);
    const char tmp_msg_0[] = {66, 4, -120, 26, -26, -50, 125, -119, -5, -37, -73, 70, -70, -106, -3, 102, -124, -127, 102, 105, 67, -78, 55, -91, -35, 52, 93, 36, 47, -93, -91, -13, -53, 34, -75, -76, -20, -37, 42, 70, -78, 67, -109, 49, -37, -60, 107, 16, -32, 85, 59, 85};
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
    msg.setTimeStamp(0.185823230555);
    msg.setSource(9243U);
    msg.setSourceEntity(184U);
    msg.setDestination(10897U);
    msg.setDestinationEntity(38U);
    msg.value = 0.973303214632;

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
    msg.setTimeStamp(0.437339718946);
    msg.setSource(46283U);
    msg.setSourceEntity(242U);
    msg.setDestination(8728U);
    msg.setDestinationEntity(19U);
    msg.value = 0.127406348575;

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
    msg.setTimeStamp(0.433270021778);
    msg.setSource(28853U);
    msg.setSourceEntity(250U);
    msg.setDestination(22547U);
    msg.setDestinationEntity(223U);
    msg.value = 0.068617175055;

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
    msg.setTimeStamp(0.136538980957);
    msg.setSource(39924U);
    msg.setSourceEntity(106U);
    msg.setDestination(43815U);
    msg.setDestinationEntity(253U);
    msg.type = 206U;
    msg.frequency = 930863373U;
    msg.min_range = 13193U;
    msg.max_range = 23372U;
    msg.bits_per_point = 62U;
    msg.scale_factor = 0.625274527661;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.944945474636;
    tmp_msg_0.beam_height = 0.474893130381;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-58, -71, 60, -80, 1, -69, -61, -47, 49, 71, 55, 12, 122, 94, 121, -20, 25, -45, 74, -100, -14, -20, 97, 77, -73, 26, -83, 8, -93, -89, 36, -101, 43, -88, 39, -119, -98, -74, -87, 42, 83, 9, 41, -125, 17, 38, 118, -103, -48, -50, 99, 8, 110, -48, 103, -77, 34, 111, -87, -3, 42, -55, 14, 29, -125, -32, 76, -13, 51, -6, -9, 12, 56, -51, -6, -23, -100, 98, -102, -81, -58, 121, -106, -89, 9, -49, -23, 120, -103, 100, -34, 36, 17, 43, -73, 40, -27, -66, 3, -12, 98, 100, 19, 83, -66, -100, 55, 112, -57, 29, -124, 105, 21, 95, -95, -44, -18, 14, 67, 114, 90, 84, 71, 26, 52, 15, 26, -86, 85, 12, 47, -106, 85, -35, 83, 48, 58, -2, 73, -12, 77, 0, -127, 42, 14, 1, -21, -23, 15, 36, 33, 111, 111, -14, -65, 126, -11, 11, 8, 17, -14, 42, -46, 5, -105, -11, -126, 28, 23, -59, 38, 71, 125, 113, -108, -117, -51, 114, 114, -127, -117, -19, -85, -38, -80, 75, -117, 53, 113, -57, -90, -6, -22, 118, 114, -76, -88, -74, 39, 43, -52, -56, -60, -79, -3, 120, -13, 80, 69, 32, -105, -4, -98, 125, -54, -119, 4, 65, -128, -107, -125, -11, -62, 110, 39, -38, -24, -122, -22, 6, 106, 108, 31, -84, -64, 113, -67, -103, -68, 77, -48, 78, -77, -5, 93, -72, 40, 81, 74, 114, -72};
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
    msg.setTimeStamp(0.336965261808);
    msg.setSource(63119U);
    msg.setSourceEntity(110U);
    msg.setDestination(30366U);
    msg.setDestinationEntity(67U);
    msg.type = 60U;
    msg.frequency = 2520865184U;
    msg.min_range = 19398U;
    msg.max_range = 46523U;
    msg.bits_per_point = 139U;
    msg.scale_factor = 0.289647370797;
    const char tmp_msg_0[] = {-95, -106, -62, 100, -113, 122, -116, -73, -104, -23, -3, -26, -90, 27, -6, -124, 46, -12, -39, -84, 39, -12, -123, 58, 3, -47, -26, -41, -76, 104, -77, -120, 72, -46, 86, -74, 21, 66, 17, -111, 117, -50, 2, 88, 118, 6, -31, 33, -62, -6, -106, -112, 41, -5, 44, 82, -103, 97, 75, -81, -91, -70, 98, -107, 75, 18, 48, 115, 44, -48, 37, 105, -61, 87, 1, -48, 114, 33, -103, 125, -43, 120, -29, -20, 44, -17, 20, -114, 59, -23, -97, -34, 14, 4, 89, 8, -42, 82, -78, 23, -123, -23, -116, 62, 69, 88, -23, 61, 68, -119, -32, 106, 119, 101, -81, -116, -63, -21, 37, -120, -94, -11, 60, -9, 16, -97, 57, 1, -2, -55, -77, -35, -22, 64, 78, -44, 38, 57, -61, 114, 90, -28, 89, 19, -64, -52, 41, -49, 8, 30, 45, -126, -66, -39, 72, -33, 114, -57, -64, 122, 5};
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
    msg.setTimeStamp(0.616872767251);
    msg.setSource(39337U);
    msg.setSourceEntity(5U);
    msg.setDestination(48300U);
    msg.setDestinationEntity(15U);
    msg.type = 180U;
    msg.frequency = 2089220474U;
    msg.min_range = 8250U;
    msg.max_range = 58806U;
    msg.bits_per_point = 116U;
    msg.scale_factor = 0.631503388228;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.328226112835;
    tmp_msg_0.beam_height = 0.56901905799;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {96, -124, 39, 35, 111, 33, 45, -16, -60, 89, -20, -114, -65, -122, -64, -75, -50, -112, 47, -102, 27, -120, 42, -79, 50, -126, -109, -76, 2, -49, 34, 66, -73, -6, 86, 101, -47, -128, -1, -98, 13, 91, -66, 4, 21, 113, -36, -102, 3, -71, 27, 48, -15, -28, -22, -89, -15, -35, 105, 108, 52, 7, -84, 79, -54, -82, -108, -41, 9, 101, -27, -100, -39, -34, 11, -56, 22, -46, -21, 40, -101, 24, 116, 16, 87, -100, -98, -58, -115, 52, 122, 18, -101, 83, 29, 57, 40, -108, 3, 73, -25, -20, -20, 92, -43, 53, -66, 45, 102, -60, -35, 18, 17, 120, -35, -45, -84, -46, -54, -95, 4, -12, -120, -48, -110, 58, 52, -28, 23, -79, -62, 97, -29, -85, -52, 16, -122, -23, 87, -119, -90, -100, -83, 92, 72, 75, 76, 126, -77, 101, 99, 112};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.822111710733);
    msg.setSource(58435U);
    msg.setSourceEntity(150U);
    msg.setDestination(40385U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.528712853375);
    msg.setSource(60340U);
    msg.setSourceEntity(95U);
    msg.setDestination(41520U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.139865949801);
    msg.setSource(33499U);
    msg.setSourceEntity(74U);
    msg.setDestination(40615U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.515397292752);
    msg.setSource(24260U);
    msg.setSourceEntity(129U);
    msg.setDestination(12629U);
    msg.setDestinationEntity(192U);
    msg.op = 39U;

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
    msg.setTimeStamp(0.846075095656);
    msg.setSource(28865U);
    msg.setSourceEntity(138U);
    msg.setDestination(14655U);
    msg.setDestinationEntity(129U);
    msg.op = 89U;

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
    msg.setTimeStamp(0.974449873272);
    msg.setSource(33374U);
    msg.setSourceEntity(24U);
    msg.setDestination(57913U);
    msg.setDestinationEntity(247U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.68600465023);
    msg.setSource(119U);
    msg.setSourceEntity(131U);
    msg.setDestination(52976U);
    msg.setDestinationEntity(147U);
    msg.value = 0.131566337218;
    msg.confidence = 0.930750472225;
    msg.opmodes.assign("MQDNXNFPXRSJWYMAAOMACGJNFHMXAETJDWLQRHGEAUFINYVQYQMCODDBXOEUJPTPDAJWEKMWKURIPOGNJZCRLZSCLEKJNVTTCPQKWFAVPYFJSTLBEIQTBUFGHHBQIISSYEKFGVHCSXBWVFNNLYHUACDHKWXOXMYROHRFKUJZGIQMMSHNYYBVWDOKDXBZLZAFWPNRDVCZTSTEBZLULMKOURDYGKXZPPRO");

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
    msg.setTimeStamp(0.915728091218);
    msg.setSource(24156U);
    msg.setSourceEntity(186U);
    msg.setDestination(47557U);
    msg.setDestinationEntity(151U);
    msg.value = 0.45697290052;
    msg.confidence = 0.8812654944;
    msg.opmodes.assign("OBMGADXNWWESMDSWVCAHZXGHSGDVKWEGZBSPGFOWUFGLRBYVMDBHMJ");

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
    msg.setTimeStamp(0.789026782353);
    msg.setSource(34785U);
    msg.setSourceEntity(72U);
    msg.setDestination(16549U);
    msg.setDestinationEntity(78U);
    msg.value = 0.0136387127522;
    msg.confidence = 0.285742415546;
    msg.opmodes.assign("GGVHWSPXXGPAZLRINEOKBCEFUEBZAJVWOUXEGBZGDQNNVPPYNWLKAQDMMUSDITOSOPRPEULCRNDLJSHLWIOSXSXCGIHYEFHLWSDPBOSUCF");

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
    msg.setTimeStamp(0.201590202695);
    msg.setSource(14993U);
    msg.setSourceEntity(239U);
    msg.setDestination(61910U);
    msg.setDestinationEntity(206U);
    msg.itow = 4114077723U;
    msg.lat = 0.39166824035;
    msg.lon = 0.043428154639;
    msg.height_ell = 0.418155652945;
    msg.height_sea = 0.0995506363625;
    msg.hacc = 0.872386838076;
    msg.vacc = 0.620238751089;
    msg.vel_n = 0.966500965147;
    msg.vel_e = 0.482738440838;
    msg.vel_d = 0.440401155492;
    msg.speed = 0.995510818803;
    msg.gspeed = 0.786701461988;
    msg.heading = 0.128934034353;
    msg.sacc = 0.435090402318;
    msg.cacc = 0.690544270481;

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
    msg.setTimeStamp(0.109899346002);
    msg.setSource(13527U);
    msg.setSourceEntity(188U);
    msg.setDestination(37783U);
    msg.setDestinationEntity(85U);
    msg.itow = 3626104463U;
    msg.lat = 0.385503439605;
    msg.lon = 0.248535296212;
    msg.height_ell = 0.487356774315;
    msg.height_sea = 0.420738351921;
    msg.hacc = 0.972801931562;
    msg.vacc = 0.989858667422;
    msg.vel_n = 0.934515628375;
    msg.vel_e = 0.219111682207;
    msg.vel_d = 0.0616245492277;
    msg.speed = 0.49758822608;
    msg.gspeed = 0.978236851554;
    msg.heading = 0.106103844077;
    msg.sacc = 0.932012138711;
    msg.cacc = 0.597827083636;

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
    msg.setTimeStamp(0.907044834266);
    msg.setSource(65486U);
    msg.setSourceEntity(138U);
    msg.setDestination(17174U);
    msg.setDestinationEntity(179U);
    msg.itow = 803355397U;
    msg.lat = 0.279221120861;
    msg.lon = 0.63338055077;
    msg.height_ell = 0.60613866153;
    msg.height_sea = 0.018464321555;
    msg.hacc = 0.459888129298;
    msg.vacc = 0.851796851151;
    msg.vel_n = 0.927966651199;
    msg.vel_e = 0.877770751521;
    msg.vel_d = 0.601488205326;
    msg.speed = 0.478876383083;
    msg.gspeed = 0.660310679369;
    msg.heading = 0.162501241297;
    msg.sacc = 0.556706542257;
    msg.cacc = 0.27575734945;

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
    msg.setTimeStamp(0.538083897536);
    msg.setSource(34541U);
    msg.setSourceEntity(106U);
    msg.setDestination(55747U);
    msg.setDestinationEntity(44U);
    msg.id = 163U;
    msg.value = 0.515197101501;

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
    msg.setTimeStamp(0.558179446641);
    msg.setSource(13281U);
    msg.setSourceEntity(86U);
    msg.setDestination(48613U);
    msg.setDestinationEntity(99U);
    msg.id = 217U;
    msg.value = 0.799680958783;

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
    msg.setTimeStamp(0.302673375516);
    msg.setSource(40469U);
    msg.setSourceEntity(103U);
    msg.setDestination(27131U);
    msg.setDestinationEntity(39U);
    msg.id = 193U;
    msg.value = 0.312180091048;

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
    msg.setTimeStamp(0.63244848645);
    msg.setSource(23703U);
    msg.setSourceEntity(220U);
    msg.setDestination(10358U);
    msg.setDestinationEntity(154U);
    msg.x = 0.103639081138;
    msg.y = 0.14100201416;
    msg.z = 0.609175484655;
    msg.phi = 0.744370563698;
    msg.theta = 0.270301056494;
    msg.psi = 0.495366307161;

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
    msg.setTimeStamp(0.409409700154);
    msg.setSource(64454U);
    msg.setSourceEntity(166U);
    msg.setDestination(49556U);
    msg.setDestinationEntity(102U);
    msg.x = 0.990307429791;
    msg.y = 0.902657746939;
    msg.z = 0.541449548153;
    msg.phi = 0.556598979387;
    msg.theta = 0.977586717746;
    msg.psi = 0.178648422954;

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
    msg.setTimeStamp(0.315214012393);
    msg.setSource(30959U);
    msg.setSourceEntity(159U);
    msg.setDestination(46382U);
    msg.setDestinationEntity(159U);
    msg.x = 0.346929419351;
    msg.y = 0.810097487761;
    msg.z = 0.819204419276;
    msg.phi = 0.43612091404;
    msg.theta = 0.862966548058;
    msg.psi = 0.016249920285;

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
    msg.setTimeStamp(0.980730925752);
    msg.setSource(55510U);
    msg.setSourceEntity(205U);
    msg.setDestination(38328U);
    msg.setDestinationEntity(9U);
    msg.beam_width = 0.692597620138;
    msg.beam_height = 0.63916263106;

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
    msg.setTimeStamp(0.939442926164);
    msg.setSource(37761U);
    msg.setSourceEntity(222U);
    msg.setDestination(51619U);
    msg.setDestinationEntity(180U);
    msg.beam_width = 0.883673796678;
    msg.beam_height = 0.671036459952;

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
    msg.setTimeStamp(0.242171437434);
    msg.setSource(32131U);
    msg.setSourceEntity(39U);
    msg.setDestination(60312U);
    msg.setDestinationEntity(53U);
    msg.beam_width = 0.566447846649;
    msg.beam_height = 0.00340453568491;

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
    msg.setTimeStamp(0.56486539213);
    msg.setSource(49048U);
    msg.setSourceEntity(113U);
    msg.setDestination(61943U);
    msg.setDestinationEntity(125U);
    msg.sane = 195U;

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
    msg.setTimeStamp(0.628343002901);
    msg.setSource(12489U);
    msg.setSourceEntity(168U);
    msg.setDestination(37845U);
    msg.setDestinationEntity(167U);
    msg.sane = 19U;

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
    msg.setTimeStamp(0.0582728125977);
    msg.setSource(22197U);
    msg.setSourceEntity(253U);
    msg.setDestination(48664U);
    msg.setDestinationEntity(166U);
    msg.sane = 71U;

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
    msg.setTimeStamp(0.951773522375);
    msg.setSource(7039U);
    msg.setSourceEntity(189U);
    msg.setDestination(42951U);
    msg.setDestinationEntity(92U);
    msg.value = 0.175741484268;

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
    msg.setTimeStamp(0.120103284313);
    msg.setSource(37816U);
    msg.setSourceEntity(1U);
    msg.setDestination(39961U);
    msg.setDestinationEntity(241U);
    msg.value = 0.0954617688723;

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
    msg.setTimeStamp(0.882170123302);
    msg.setSource(55492U);
    msg.setSourceEntity(162U);
    msg.setDestination(32662U);
    msg.setDestinationEntity(170U);
    msg.value = 0.739389731589;

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
    msg.setTimeStamp(0.555851415582);
    msg.setSource(17522U);
    msg.setSourceEntity(55U);
    msg.setDestination(43230U);
    msg.setDestinationEntity(140U);
    msg.value = 0.760636960091;

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
    msg.setTimeStamp(0.885443322767);
    msg.setSource(48491U);
    msg.setSourceEntity(93U);
    msg.setDestination(50251U);
    msg.setDestinationEntity(16U);
    msg.value = 0.119718368748;

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
    msg.setTimeStamp(0.882284142898);
    msg.setSource(40077U);
    msg.setSourceEntity(45U);
    msg.setDestination(62225U);
    msg.setDestinationEntity(25U);
    msg.value = 0.37082148521;

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
    msg.setTimeStamp(0.348333412502);
    msg.setSource(61528U);
    msg.setSourceEntity(34U);
    msg.setDestination(59381U);
    msg.setDestinationEntity(181U);
    msg.value = 0.0997173613432;

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
    msg.setTimeStamp(0.300599138231);
    msg.setSource(2515U);
    msg.setSourceEntity(211U);
    msg.setDestination(7185U);
    msg.setDestinationEntity(98U);
    msg.value = 0.509144489225;

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
    msg.setTimeStamp(0.450688157127);
    msg.setSource(14674U);
    msg.setSourceEntity(220U);
    msg.setDestination(8979U);
    msg.setDestinationEntity(149U);
    msg.value = 0.486858699579;

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
    msg.setTimeStamp(0.858021371112);
    msg.setSource(26261U);
    msg.setSourceEntity(142U);
    msg.setDestination(53188U);
    msg.setDestinationEntity(164U);
    msg.value = 0.449458533098;

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
    msg.setTimeStamp(0.28422504803);
    msg.setSource(1428U);
    msg.setSourceEntity(14U);
    msg.setDestination(37436U);
    msg.setDestinationEntity(228U);
    msg.value = 0.68412125802;

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
    msg.setTimeStamp(0.205212585507);
    msg.setSource(9422U);
    msg.setSourceEntity(48U);
    msg.setDestination(14947U);
    msg.setDestinationEntity(20U);
    msg.value = 0.89718379237;

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
    msg.setTimeStamp(0.254433210236);
    msg.setSource(22608U);
    msg.setSourceEntity(40U);
    msg.setDestination(18219U);
    msg.setDestinationEntity(152U);
    msg.value = 0.125985898592;

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
    msg.setTimeStamp(0.124028111757);
    msg.setSource(36032U);
    msg.setSourceEntity(120U);
    msg.setDestination(17354U);
    msg.setDestinationEntity(27U);
    msg.value = 0.241042530741;

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
    msg.setTimeStamp(0.293935068154);
    msg.setSource(8035U);
    msg.setSourceEntity(53U);
    msg.setDestination(25577U);
    msg.setDestinationEntity(162U);
    msg.value = 0.0876272614561;

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
    msg.setTimeStamp(0.674547985621);
    msg.setSource(30340U);
    msg.setSourceEntity(24U);
    msg.setDestination(4971U);
    msg.setDestinationEntity(181U);
    msg.value = 0.879551675628;

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
    msg.setTimeStamp(0.532368967806);
    msg.setSource(25160U);
    msg.setSourceEntity(102U);
    msg.setDestination(33786U);
    msg.setDestinationEntity(189U);
    msg.value = 0.108851196501;

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
    msg.setTimeStamp(0.107814434989);
    msg.setSource(32153U);
    msg.setSourceEntity(184U);
    msg.setDestination(28851U);
    msg.setDestinationEntity(29U);
    msg.value = 0.307039463957;

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
    msg.setTimeStamp(0.525022059395);
    msg.setSource(19859U);
    msg.setSourceEntity(140U);
    msg.setDestination(64298U);
    msg.setDestinationEntity(86U);
    msg.value = 0.199295549494;

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
    msg.setTimeStamp(0.548591469721);
    msg.setSource(35446U);
    msg.setSourceEntity(100U);
    msg.setDestination(9223U);
    msg.setDestinationEntity(90U);
    msg.value = 0.518590737592;

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
    msg.setTimeStamp(0.413255304738);
    msg.setSource(28336U);
    msg.setSourceEntity(192U);
    msg.setDestination(26181U);
    msg.setDestinationEntity(217U);
    msg.value = 0.0771203267391;

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
    msg.setTimeStamp(0.583027539954);
    msg.setSource(16604U);
    msg.setSourceEntity(177U);
    msg.setDestination(37287U);
    msg.setDestinationEntity(12U);
    msg.value = 0.466983932846;

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
    msg.setTimeStamp(0.235198495773);
    msg.setSource(45571U);
    msg.setSourceEntity(76U);
    msg.setDestination(46478U);
    msg.setDestinationEntity(29U);
    msg.value = 0.626650316486;

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
    msg.setTimeStamp(0.995938789467);
    msg.setSource(20995U);
    msg.setSourceEntity(112U);
    msg.setDestination(15872U);
    msg.setDestinationEntity(45U);
    msg.value = 0.476392468671;

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
    msg.setTimeStamp(0.626489345121);
    msg.setSource(49126U);
    msg.setSourceEntity(0U);
    msg.setDestination(50462U);
    msg.setDestinationEntity(109U);
    msg.validity = 30012U;
    msg.type = 186U;
    msg.tow = 1534636507U;
    msg.base_lat = 0.0976860280244;
    msg.base_lon = 0.773506639238;
    msg.base_height = 0.4894937266;
    msg.n = 0.6594781539;
    msg.e = 0.120299144331;
    msg.d = 0.445369711106;
    msg.v_n = 0.58487144834;
    msg.v_e = 0.218042865883;
    msg.v_d = 0.25155979806;
    msg.satellites = 79U;
    msg.iar_hyp = 8096U;
    msg.iar_ratio = 0.798974517148;

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
    msg.setTimeStamp(0.179894489138);
    msg.setSource(4608U);
    msg.setSourceEntity(61U);
    msg.setDestination(18760U);
    msg.setDestinationEntity(243U);
    msg.validity = 24091U;
    msg.type = 98U;
    msg.tow = 616282866U;
    msg.base_lat = 0.282768279876;
    msg.base_lon = 0.216717034917;
    msg.base_height = 0.562524099453;
    msg.n = 0.682598536663;
    msg.e = 0.482806399486;
    msg.d = 0.852708094484;
    msg.v_n = 0.177427897477;
    msg.v_e = 0.21343428921;
    msg.v_d = 0.37807117515;
    msg.satellites = 14U;
    msg.iar_hyp = 33497U;
    msg.iar_ratio = 0.247965615065;

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
    msg.setTimeStamp(0.13129023721);
    msg.setSource(3365U);
    msg.setSourceEntity(17U);
    msg.setDestination(11833U);
    msg.setDestinationEntity(73U);
    msg.validity = 14758U;
    msg.type = 202U;
    msg.tow = 4286560832U;
    msg.base_lat = 0.538077098236;
    msg.base_lon = 0.675995147483;
    msg.base_height = 0.344198600281;
    msg.n = 0.28719608436;
    msg.e = 0.266247702555;
    msg.d = 0.563185566679;
    msg.v_n = 0.138881432079;
    msg.v_e = 0.0388177152513;
    msg.v_d = 0.928677249363;
    msg.satellites = 118U;
    msg.iar_hyp = 40403U;
    msg.iar_ratio = 0.156013564925;

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
    msg.setTimeStamp(0.74097840569);
    msg.setSource(10476U);
    msg.setSourceEntity(195U);
    msg.setDestination(3092U);
    msg.setDestinationEntity(118U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.962573527233;
    tmp_msg_0.lon = 0.407526471149;
    tmp_msg_0.height = 0.06056380349;
    tmp_msg_0.x = 0.208513718522;
    tmp_msg_0.y = 0.1921624827;
    tmp_msg_0.z = 0.990189347415;
    tmp_msg_0.phi = 0.727702682301;
    tmp_msg_0.theta = 0.0830383619207;
    tmp_msg_0.psi = 0.0359994907898;
    tmp_msg_0.u = 0.264551153392;
    tmp_msg_0.v = 0.562840894453;
    tmp_msg_0.w = 0.254247995655;
    tmp_msg_0.vx = 0.458951687042;
    tmp_msg_0.vy = 0.0892091102692;
    tmp_msg_0.vz = 0.921896699819;
    tmp_msg_0.p = 0.761792878094;
    tmp_msg_0.q = 0.0464143899798;
    tmp_msg_0.r = 0.0124027172611;
    tmp_msg_0.depth = 0.0526839636163;
    tmp_msg_0.alt = 0.838004428229;
    msg.state.set(tmp_msg_0);
    msg.type = 92U;

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
    msg.setTimeStamp(0.639478776875);
    msg.setSource(19557U);
    msg.setSourceEntity(166U);
    msg.setDestination(36133U);
    msg.setDestinationEntity(22U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.766466787674;
    tmp_msg_0.lon = 0.316293312122;
    tmp_msg_0.height = 0.0984971036775;
    tmp_msg_0.x = 0.593588765292;
    tmp_msg_0.y = 0.0958461776211;
    tmp_msg_0.z = 0.841989182922;
    tmp_msg_0.phi = 0.166018658873;
    tmp_msg_0.theta = 0.49980431223;
    tmp_msg_0.psi = 0.962158891271;
    tmp_msg_0.u = 0.583301158899;
    tmp_msg_0.v = 0.239046099449;
    tmp_msg_0.w = 0.0798707453148;
    tmp_msg_0.vx = 0.950052264076;
    tmp_msg_0.vy = 0.54177142213;
    tmp_msg_0.vz = 0.450244754783;
    tmp_msg_0.p = 0.7338716227;
    tmp_msg_0.q = 0.915428581225;
    tmp_msg_0.r = 0.163456334126;
    tmp_msg_0.depth = 0.00802201344699;
    tmp_msg_0.alt = 0.556566411833;
    msg.state.set(tmp_msg_0);
    msg.type = 78U;

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
    msg.setTimeStamp(0.278146101722);
    msg.setSource(27786U);
    msg.setSourceEntity(116U);
    msg.setDestination(14494U);
    msg.setDestinationEntity(16U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.184798342098;
    tmp_msg_0.lon = 0.525243656581;
    tmp_msg_0.height = 0.975164309612;
    tmp_msg_0.x = 0.0648019605815;
    tmp_msg_0.y = 0.0110543356089;
    tmp_msg_0.z = 0.163889329502;
    tmp_msg_0.phi = 0.923650730619;
    tmp_msg_0.theta = 0.784784513354;
    tmp_msg_0.psi = 0.910535057937;
    tmp_msg_0.u = 0.201115241735;
    tmp_msg_0.v = 0.50043661659;
    tmp_msg_0.w = 0.863376296474;
    tmp_msg_0.vx = 0.925340894047;
    tmp_msg_0.vy = 0.566222042719;
    tmp_msg_0.vz = 0.708209073756;
    tmp_msg_0.p = 0.00463776613924;
    tmp_msg_0.q = 0.95662853069;
    tmp_msg_0.r = 0.391907878343;
    tmp_msg_0.depth = 0.363783364721;
    tmp_msg_0.alt = 0.0368985492699;
    msg.state.set(tmp_msg_0);
    msg.type = 157U;

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
    msg.setTimeStamp(0.586466864286);
    msg.setSource(65227U);
    msg.setSourceEntity(142U);
    msg.setDestination(52730U);
    msg.setDestinationEntity(50U);
    msg.value = 0.915017862651;

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
    msg.setTimeStamp(0.791639794966);
    msg.setSource(45819U);
    msg.setSourceEntity(123U);
    msg.setDestination(58107U);
    msg.setDestinationEntity(21U);
    msg.value = 0.286445735202;

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
    msg.setTimeStamp(0.879319399837);
    msg.setSource(33573U);
    msg.setSourceEntity(230U);
    msg.setDestination(23145U);
    msg.setDestinationEntity(4U);
    msg.value = 0.000678040673776;

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
    msg.setTimeStamp(0.799596442153);
    msg.setSource(42255U);
    msg.setSourceEntity(110U);
    msg.setDestination(27755U);
    msg.setDestinationEntity(121U);
    msg.value = 0.107478737593;

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
    msg.setTimeStamp(0.834373046349);
    msg.setSource(31250U);
    msg.setSourceEntity(212U);
    msg.setDestination(16791U);
    msg.setDestinationEntity(206U);
    msg.value = 0.595560056247;

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
    msg.setTimeStamp(0.0525423334434);
    msg.setSource(15103U);
    msg.setSourceEntity(161U);
    msg.setDestination(34659U);
    msg.setDestinationEntity(6U);
    msg.value = 0.507170002571;

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
    msg.setTimeStamp(0.258338020964);
    msg.setSource(19049U);
    msg.setSourceEntity(106U);
    msg.setDestination(24397U);
    msg.setDestinationEntity(32U);
    msg.value = 0.0147857429846;

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
    msg.setTimeStamp(0.0560638490283);
    msg.setSource(57014U);
    msg.setSourceEntity(128U);
    msg.setDestination(44746U);
    msg.setDestinationEntity(147U);
    msg.value = 0.065476670596;

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
    msg.setTimeStamp(0.376381326563);
    msg.setSource(48179U);
    msg.setSourceEntity(169U);
    msg.setDestination(64818U);
    msg.setDestinationEntity(26U);
    msg.value = 0.945793565897;

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
    msg.setTimeStamp(0.838793521513);
    msg.setSource(41262U);
    msg.setSourceEntity(158U);
    msg.setDestination(7245U);
    msg.setDestinationEntity(95U);
    msg.value = 0.0460052464894;

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
    msg.setTimeStamp(0.894506979879);
    msg.setSource(43315U);
    msg.setSourceEntity(134U);
    msg.setDestination(8133U);
    msg.setDestinationEntity(107U);
    msg.value = 0.515916222298;

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
    msg.setTimeStamp(0.338194974761);
    msg.setSource(39430U);
    msg.setSourceEntity(152U);
    msg.setDestination(33106U);
    msg.setDestinationEntity(34U);
    msg.value = 0.894233320072;

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
    msg.setTimeStamp(0.397937386882);
    msg.setSource(5547U);
    msg.setSourceEntity(5U);
    msg.setDestination(33481U);
    msg.setDestinationEntity(226U);
    msg.value = 0.969699783854;

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
    msg.setTimeStamp(0.266355725775);
    msg.setSource(24595U);
    msg.setSourceEntity(189U);
    msg.setDestination(33968U);
    msg.setDestinationEntity(215U);
    msg.value = 0.330831981757;

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
    msg.setTimeStamp(0.704508361671);
    msg.setSource(25123U);
    msg.setSourceEntity(149U);
    msg.setDestination(8197U);
    msg.setDestinationEntity(233U);
    msg.value = 0.684995154472;

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
    msg.setTimeStamp(0.407601996946);
    msg.setSource(55346U);
    msg.setSourceEntity(235U);
    msg.setDestination(12914U);
    msg.setDestinationEntity(94U);
    msg.id = 54U;
    msg.zoom = 230U;
    msg.action = 138U;

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
    msg.setTimeStamp(0.26019589899);
    msg.setSource(54143U);
    msg.setSourceEntity(148U);
    msg.setDestination(28777U);
    msg.setDestinationEntity(85U);
    msg.id = 15U;
    msg.zoom = 61U;
    msg.action = 239U;

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
    msg.setTimeStamp(0.992769231458);
    msg.setSource(33357U);
    msg.setSourceEntity(119U);
    msg.setDestination(44800U);
    msg.setDestinationEntity(49U);
    msg.id = 194U;
    msg.zoom = 10U;
    msg.action = 28U;

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
    msg.setTimeStamp(0.240443662213);
    msg.setSource(28756U);
    msg.setSourceEntity(247U);
    msg.setDestination(19157U);
    msg.setDestinationEntity(59U);
    msg.id = 195U;
    msg.value = 0.635204004777;

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
    msg.setTimeStamp(0.273490113625);
    msg.setSource(14153U);
    msg.setSourceEntity(144U);
    msg.setDestination(26215U);
    msg.setDestinationEntity(95U);
    msg.id = 182U;
    msg.value = 0.266567636844;

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
    msg.setTimeStamp(0.915317123785);
    msg.setSource(36743U);
    msg.setSourceEntity(228U);
    msg.setDestination(12027U);
    msg.setDestinationEntity(121U);
    msg.id = 196U;
    msg.value = 0.919049273093;

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
    msg.setTimeStamp(0.343938535716);
    msg.setSource(54815U);
    msg.setSourceEntity(149U);
    msg.setDestination(45291U);
    msg.setDestinationEntity(136U);
    msg.id = 152U;
    msg.value = 0.117723714629;

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
    msg.setTimeStamp(0.125661459142);
    msg.setSource(63615U);
    msg.setSourceEntity(129U);
    msg.setDestination(10911U);
    msg.setDestinationEntity(205U);
    msg.id = 66U;
    msg.value = 0.171976556711;

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
    msg.setTimeStamp(0.119022280842);
    msg.setSource(54542U);
    msg.setSourceEntity(45U);
    msg.setDestination(27720U);
    msg.setDestinationEntity(180U);
    msg.id = 37U;
    msg.value = 0.291901663946;

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
    msg.setTimeStamp(0.822070322658);
    msg.setSource(51646U);
    msg.setSourceEntity(27U);
    msg.setDestination(50053U);
    msg.setDestinationEntity(23U);
    msg.id = 123U;
    msg.angle = 0.667481705727;

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
    msg.setTimeStamp(0.708251145786);
    msg.setSource(19253U);
    msg.setSourceEntity(37U);
    msg.setDestination(43129U);
    msg.setDestinationEntity(108U);
    msg.id = 249U;
    msg.angle = 0.759101441142;

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
    msg.setTimeStamp(0.364071710283);
    msg.setSource(26181U);
    msg.setSourceEntity(236U);
    msg.setDestination(31841U);
    msg.setDestinationEntity(160U);
    msg.id = 21U;
    msg.angle = 0.559355798359;

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
    msg.setTimeStamp(0.0299751276408);
    msg.setSource(9159U);
    msg.setSourceEntity(171U);
    msg.setDestination(56322U);
    msg.setDestinationEntity(81U);
    msg.op = 78U;
    msg.actions.assign("TPATTGCKQHOBXYONYVVXFKYEESXFPFSIMZZFAPMZMDRBLHVBMAQXEWGYSWAGHMBRRQQREEOQCNGDWCCULNZUPOPEYRZGJDHPTROBJKYVI");

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
    msg.setTimeStamp(0.656713523271);
    msg.setSource(31634U);
    msg.setSourceEntity(235U);
    msg.setDestination(53450U);
    msg.setDestinationEntity(34U);
    msg.op = 227U;
    msg.actions.assign("HLDPDOANWRKQBHZQAMLJZYYFJEOEADFSHHSXBTPXHMINJFVQVPPNVMMKYUFDSNJPQJRIZVMHUNNKFROCHQOCKSFOASOLBRFZZIKSTUZREPSPXRCMWHGNAQTGUTYNVYOLWMRCLHLVWMKVBLPOGLGGCOIICBRZSACXEIHVUVMXXMAYDOUKXKTYNWNTBFJQBIWWEZDQEUWVYXTIGEEZWGGEQY");

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
    msg.setTimeStamp(0.673406543641);
    msg.setSource(22879U);
    msg.setSourceEntity(173U);
    msg.setDestination(2214U);
    msg.setDestinationEntity(134U);
    msg.op = 140U;
    msg.actions.assign("EBGXNCWAMBSWCJODNKB");

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
    msg.setTimeStamp(0.622091503106);
    msg.setSource(47166U);
    msg.setSourceEntity(129U);
    msg.setDestination(24346U);
    msg.setDestinationEntity(27U);
    msg.actions.assign("ZUANPOEWGTFJWSCSEKEDOUMVLJVYYJOYVZVMELTDEOWJWGACMPPBSYLQMDNMUJPFCVOPIVMJHVKYSOHLQFYYDGQMRNMXHJGXBUDWPFHYUPRTIBJXBGZTAKSRGVHTAEBAINCCMDGSOPAKIWQUPBISKDKCOZAMUINYQBACFFYVUUFGRPZXZVZLXXLDILHBJSCWWLOIFESKQTRNNGZBHE");

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
    msg.setTimeStamp(0.857579142704);
    msg.setSource(19047U);
    msg.setSourceEntity(173U);
    msg.setDestination(47617U);
    msg.setDestinationEntity(247U);
    msg.actions.assign("YICDKAFVZTSBDTQUCFYJPDYLRLBTHDGBRLVUISFFQSOYAUTYRMFCXRDCFNHKBZEEALOHNQHZWMQWMORUSPBAFQRUZYSTMQIQGIXLOLWOHRNUNHRNCDFMPTXISLCIMBJASEZPIFGOFNCQPMUWVPKQWAHEWEXOTHJJILTKW");

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
    msg.setTimeStamp(0.188834353687);
    msg.setSource(36167U);
    msg.setSourceEntity(43U);
    msg.setDestination(36655U);
    msg.setDestinationEntity(10U);
    msg.actions.assign("JQCNBJUMHPQLTIGGBC");

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
    msg.setTimeStamp(0.498619589522);
    msg.setSource(25074U);
    msg.setSourceEntity(209U);
    msg.setDestination(34137U);
    msg.setDestinationEntity(81U);
    msg.button = 60U;
    msg.value = 167U;

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
    msg.setTimeStamp(0.628697106368);
    msg.setSource(5320U);
    msg.setSourceEntity(187U);
    msg.setDestination(49343U);
    msg.setDestinationEntity(66U);
    msg.button = 32U;
    msg.value = 159U;

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
    msg.setTimeStamp(0.631790622127);
    msg.setSource(47052U);
    msg.setSourceEntity(70U);
    msg.setDestination(61554U);
    msg.setDestinationEntity(128U);
    msg.button = 200U;
    msg.value = 207U;

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
    msg.setTimeStamp(0.842838183109);
    msg.setSource(6668U);
    msg.setSourceEntity(177U);
    msg.setDestination(39045U);
    msg.setDestinationEntity(159U);
    msg.op = 65U;
    msg.text.assign("AUNTCMSUOR");

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
    msg.setTimeStamp(0.243729114168);
    msg.setSource(61892U);
    msg.setSourceEntity(210U);
    msg.setDestination(50601U);
    msg.setDestinationEntity(149U);
    msg.op = 41U;
    msg.text.assign("JWHIGBNQTVVULIKOVFNDGANQHEHTEVCXYQLLJMBZFZNKFJHJQWOHDKNXUKSIOLHMKAYFOUBRXLIBOCGXTGLFFGGZGQADLMJBPWUDKRWYJPGUMMYDTOVWNRJORIQDRHCLRYVMASNDXBHPAZDSBKSTX");

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
    msg.setTimeStamp(0.660025143882);
    msg.setSource(30726U);
    msg.setSourceEntity(199U);
    msg.setDestination(34308U);
    msg.setDestinationEntity(24U);
    msg.op = 188U;
    msg.text.assign("YBYPYVZJWBMJMKRIDYVHZDWWHEACQUSAOGAEUJTXGHBHLQPTUIHZKZQWXUG");

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
    msg.setTimeStamp(0.0847235570405);
    msg.setSource(23003U);
    msg.setSourceEntity(239U);
    msg.setDestination(40629U);
    msg.setDestinationEntity(161U);
    msg.op = 48U;
    msg.time_remain = 0.485210012137;
    msg.sched_time = 0.0686326009254;

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
    msg.setTimeStamp(0.817742007446);
    msg.setSource(14620U);
    msg.setSourceEntity(11U);
    msg.setDestination(46553U);
    msg.setDestinationEntity(215U);
    msg.op = 167U;
    msg.time_remain = 0.816114091596;
    msg.sched_time = 0.759614543691;

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
    msg.setTimeStamp(0.863607227793);
    msg.setSource(19205U);
    msg.setSourceEntity(122U);
    msg.setDestination(56664U);
    msg.setDestinationEntity(20U);
    msg.op = 161U;
    msg.time_remain = 0.00072329450805;
    msg.sched_time = 0.659692569132;

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
    msg.setTimeStamp(0.977565761238);
    msg.setSource(52447U);
    msg.setSourceEntity(244U);
    msg.setDestination(12623U);
    msg.setDestinationEntity(43U);
    msg.name.assign("YJJTNENKRSPTCZ");
    msg.op = 67U;
    msg.sched_time = 0.792318348642;

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
    msg.setTimeStamp(0.123872508955);
    msg.setSource(38488U);
    msg.setSourceEntity(96U);
    msg.setDestination(10734U);
    msg.setDestinationEntity(212U);
    msg.name.assign("LLVJMDTXYSWQJQID");
    msg.op = 231U;
    msg.sched_time = 0.747226407456;

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
    msg.setTimeStamp(0.65828985014);
    msg.setSource(44603U);
    msg.setSourceEntity(144U);
    msg.setDestination(57778U);
    msg.setDestinationEntity(177U);
    msg.name.assign("EBNZPGDCWAESBNVAAIVKMXUASWTODBFDYXCGCJKBSAYHGLGKYYBZOJZMRJLRSEJBKWVXZGROTMXIGPOIQYPVGEAHYVTVDMAQRHWVYG");
    msg.op = 38U;
    msg.sched_time = 0.891022444723;

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
    msg.setTimeStamp(0.470346942722);
    msg.setSource(13476U);
    msg.setSourceEntity(106U);
    msg.setDestination(60014U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.58411181692);
    msg.setSource(10379U);
    msg.setSourceEntity(190U);
    msg.setDestination(40245U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.375142740806);
    msg.setSource(10155U);
    msg.setSourceEntity(121U);
    msg.setDestination(21462U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.272811112833);
    msg.setSource(21709U);
    msg.setSourceEntity(197U);
    msg.setDestination(17391U);
    msg.setDestinationEntity(152U);
    msg.name.assign("HMEHCDQWBRGMNWH");
    msg.state = 12U;

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
    msg.setTimeStamp(0.338696589818);
    msg.setSource(55012U);
    msg.setSourceEntity(248U);
    msg.setDestination(17861U);
    msg.setDestinationEntity(40U);
    msg.name.assign("DCEDYATUSEDUWHWHVHLNCKDHEPCUNCKBRTVRVJFFJJKJPJPZTYEFXCEMYPAAQGMCYLZAITTGNTOPRNVISFYNUCFSRCVXNBALGOLPQKIUHIMPBKTKSJEKEOVNBDRTVHAMFUUYJBEGDGEZOWODOLVWMXWIXSLAFRQQPMXWGBLOMWSXVXNHQOJYPRQTRNBZIUZTILWQQXSFWKDXMQMGYYUASEANWFHUZSOLZ");
    msg.state = 239U;

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
    msg.setTimeStamp(0.929322572659);
    msg.setSource(12043U);
    msg.setSourceEntity(241U);
    msg.setDestination(38739U);
    msg.setDestinationEntity(16U);
    msg.name.assign("WAMCIQTJZNKILMPNLHTUWBXQRDYHDLLPATVNVYRXGRCRBBZH");
    msg.state = 153U;

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
    msg.setTimeStamp(0.872699847497);
    msg.setSource(23615U);
    msg.setSourceEntity(106U);
    msg.setDestination(36231U);
    msg.setDestinationEntity(139U);
    msg.name.assign("QDPHHYGYICXRSYONXUWWWBAPZZMWQVVFJHUXQCJFYYRMKZS");
    msg.value = 145U;

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
    msg.setTimeStamp(0.180405771744);
    msg.setSource(32364U);
    msg.setSourceEntity(98U);
    msg.setDestination(11496U);
    msg.setDestinationEntity(1U);
    msg.name.assign("KVNKQRIZCSEISOGLHWKMPAXAXKFKXRNJRHTJYIXJJFZPNOIOEDGIWDQOCOTINYGWCFUMQPVPVLLUHUFGBBYHVBVHCAXRRDDUMUYSQABNEMRLKAFKDONZSZTDITNYIAFTEYQUWZBJUSQDYCMLHVGKZGRUYMOXPERGSVFLBCTWZGFSJKIQWLTAPPODDWYVGYJCEEPMBXPMNQHQNRJIXVKBNXTFS");
    msg.value = 13U;

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
    msg.setTimeStamp(0.253768265984);
    msg.setSource(48823U);
    msg.setSourceEntity(151U);
    msg.setDestination(729U);
    msg.setDestinationEntity(48U);
    msg.name.assign("NGLJRRPVRGBMGKNZHCKKLEIXFYTLEHMPUOBTWLVNBIDFOTPATLHZLFKXIXWJSDSZLCEJFXBGJECQXPJGDGCIYEBDWUYFOMUYJDTFXJTVIUYIOIEUEZRYOTSFLZNXKVPSWEQRWYVHSNXNUQTBSUTDGJSMGVMEHWUMCWHMAQVXJSUBNFIKNSYAIABGZRHDFAOABAZEQZOQFTAKXZNYQQMVAGLPRSCKOLRDKQPRHWPAMCOWCVVPJPQOKDHCMRUYWD");
    msg.value = 178U;

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
    msg.setTimeStamp(0.0681527727134);
    msg.setSource(20084U);
    msg.setSourceEntity(101U);
    msg.setDestination(30258U);
    msg.setDestinationEntity(152U);
    msg.name.assign("JADKQSGUJJVDTYCNPEXVFEOCXENSBEKQYEI");

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
    msg.setTimeStamp(0.218758313579);
    msg.setSource(35425U);
    msg.setSourceEntity(22U);
    msg.setDestination(5309U);
    msg.setDestinationEntity(132U);
    msg.name.assign("RHDHPYJPSZYTJIHBXROJXMZQYCWYNBRZANXEVPEMRPEPNNLJWVACWAYKCVGUMGMOAHEWEGUXXKURUMGCSKLBRSMKEUFNTYKGFRQVIQIAEUWKVQTQGDJONQIGVCQSYYDPJROBBVEWZNTOFPDAKDDFSZAGILDCTUOWNYQZTFQUFSLNCVMGITWFOFFLHIRALNXMLSCBLXAYBSAVKJZBPEHSUZCTK");

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
    msg.setTimeStamp(0.505314835169);
    msg.setSource(61767U);
    msg.setSourceEntity(226U);
    msg.setDestination(6468U);
    msg.setDestinationEntity(36U);
    msg.name.assign("PNAHGRWRBSAMUOGBYZKUIOJLKHCTKAQWXVWPIEDLOMPRLUKPFWEWWXYDEZAVVBINFMISCHJXGTSEUIVLZUFWVELLSYTVCMNBDEBTYLXRIDZYJXHDCPXSAZFRJCJRETYKQQQSNLGGOOKBHNUDPLNBRZSUGQYNNMGUFATZFBCJRLKHEDNQBCXHQTKCVZMFZQGPOWOYPKICDFIIPJGSRYCRHFOQSJVUSAWXKPUHMEJED");

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
    msg.setTimeStamp(0.972968155855);
    msg.setSource(43456U);
    msg.setSourceEntity(38U);
    msg.setDestination(37602U);
    msg.setDestinationEntity(95U);
    msg.name.assign("GCXHPVIEHIWWINSTEKPCQMQIMJ");
    msg.value = 41U;

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
    msg.setTimeStamp(0.844305319625);
    msg.setSource(50459U);
    msg.setSourceEntity(242U);
    msg.setDestination(16768U);
    msg.setDestinationEntity(81U);
    msg.name.assign("JHEXUFXZOMQARZBMTKZTNBEDXLEAXUOCXJSWXCVQDEFECHNPUTL");
    msg.value = 158U;

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
    msg.setTimeStamp(0.237537528226);
    msg.setSource(17525U);
    msg.setSourceEntity(42U);
    msg.setDestination(1202U);
    msg.setDestinationEntity(9U);
    msg.name.assign("YBOWBQJFDYARTLUTTIWBBMLVJXCWFWNGTROLHZUECZDGPQLJPLQYMSUJBQPSPYAZNYFIPJADKPELRREFEXOVJFTQNVEMFICRZKSOTBZSVTPHOPZLEMKFSWDKAWAPQIAUIYUKHHCCUFYSBKJQOLEGXGQNSZOXDEYVXZDQXIINGVRC");
    msg.value = 226U;

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
    msg.setTimeStamp(0.270330295631);
    msg.setSource(62968U);
    msg.setSourceEntity(59U);
    msg.setDestination(31853U);
    msg.setDestinationEntity(93U);
    msg.id = 230U;
    msg.period = 3272364939U;
    msg.duty_cycle = 858041320U;

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
    msg.setTimeStamp(0.996459546348);
    msg.setSource(5969U);
    msg.setSourceEntity(157U);
    msg.setDestination(39342U);
    msg.setDestinationEntity(170U);
    msg.id = 162U;
    msg.period = 17961402U;
    msg.duty_cycle = 2678543921U;

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
    msg.setTimeStamp(0.377109943313);
    msg.setSource(6264U);
    msg.setSourceEntity(129U);
    msg.setDestination(4162U);
    msg.setDestinationEntity(133U);
    msg.id = 88U;
    msg.period = 3876124713U;
    msg.duty_cycle = 25752672U;

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
    msg.setTimeStamp(0.896074003261);
    msg.setSource(25786U);
    msg.setSourceEntity(185U);
    msg.setDestination(15616U);
    msg.setDestinationEntity(95U);
    msg.id = 210U;
    msg.period = 1493807U;
    msg.duty_cycle = 2505377688U;

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
    msg.setTimeStamp(0.0160107903949);
    msg.setSource(44123U);
    msg.setSourceEntity(157U);
    msg.setDestination(33925U);
    msg.setDestinationEntity(206U);
    msg.id = 235U;
    msg.period = 2700688083U;
    msg.duty_cycle = 1848979793U;

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
    msg.setTimeStamp(0.112846522184);
    msg.setSource(24511U);
    msg.setSourceEntity(153U);
    msg.setDestination(12619U);
    msg.setDestinationEntity(201U);
    msg.id = 235U;
    msg.period = 2511691384U;
    msg.duty_cycle = 143259306U;

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
    msg.setTimeStamp(0.979861541271);
    msg.setSource(60525U);
    msg.setSourceEntity(34U);
    msg.setDestination(29885U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.882793484125;
    msg.lon = 0.219881123328;
    msg.height = 0.679952725166;
    msg.x = 0.424564533636;
    msg.y = 0.547584129235;
    msg.z = 0.00219615296026;
    msg.phi = 0.338379012932;
    msg.theta = 0.33296899015;
    msg.psi = 0.846569875064;
    msg.u = 0.16789840974;
    msg.v = 0.00864995600725;
    msg.w = 0.715034344818;
    msg.vx = 0.647157678583;
    msg.vy = 0.726186939618;
    msg.vz = 0.37243503147;
    msg.p = 0.469612414833;
    msg.q = 0.886487964415;
    msg.r = 0.751556503956;
    msg.depth = 0.294625699034;
    msg.alt = 0.68424779379;

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
    msg.setTimeStamp(0.224057349513);
    msg.setSource(30629U);
    msg.setSourceEntity(27U);
    msg.setDestination(52380U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.637673041142;
    msg.lon = 0.836435985836;
    msg.height = 0.0435742382931;
    msg.x = 0.431065096615;
    msg.y = 0.774740807555;
    msg.z = 0.516495957233;
    msg.phi = 0.0439983464253;
    msg.theta = 0.674910809172;
    msg.psi = 0.656631017093;
    msg.u = 0.333724988634;
    msg.v = 0.275775104904;
    msg.w = 0.748909796344;
    msg.vx = 0.687688457051;
    msg.vy = 0.288621784207;
    msg.vz = 0.990736751305;
    msg.p = 0.0845106127732;
    msg.q = 0.0710993078912;
    msg.r = 0.905498674211;
    msg.depth = 0.930419794885;
    msg.alt = 0.539182854657;

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
    msg.setTimeStamp(0.645029874687);
    msg.setSource(8191U);
    msg.setSourceEntity(53U);
    msg.setDestination(5743U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.16875196572;
    msg.lon = 0.706348358536;
    msg.height = 0.497424213818;
    msg.x = 0.541615302295;
    msg.y = 0.873123891548;
    msg.z = 0.785720436128;
    msg.phi = 0.72720747838;
    msg.theta = 0.563037775503;
    msg.psi = 0.270156269081;
    msg.u = 0.25200637287;
    msg.v = 0.133018102848;
    msg.w = 0.530518005811;
    msg.vx = 0.829383422533;
    msg.vy = 0.580104351999;
    msg.vz = 0.837967645219;
    msg.p = 0.506116127403;
    msg.q = 0.740444483007;
    msg.r = 0.908827366304;
    msg.depth = 0.901517191584;
    msg.alt = 0.0091796118743;

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
    msg.setTimeStamp(0.813784502997);
    msg.setSource(16667U);
    msg.setSourceEntity(201U);
    msg.setDestination(10564U);
    msg.setDestinationEntity(254U);
    msg.x = 0.882423882272;
    msg.y = 0.357174835072;
    msg.z = 0.0014928060957;

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
    msg.setTimeStamp(0.26782924742);
    msg.setSource(44722U);
    msg.setSourceEntity(238U);
    msg.setDestination(27577U);
    msg.setDestinationEntity(106U);
    msg.x = 0.421930751282;
    msg.y = 0.973284517471;
    msg.z = 0.329426607728;

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
    msg.setTimeStamp(0.434100041413);
    msg.setSource(35225U);
    msg.setSourceEntity(57U);
    msg.setDestination(6282U);
    msg.setDestinationEntity(63U);
    msg.x = 0.396699725133;
    msg.y = 0.198887694608;
    msg.z = 0.858758477195;

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
    msg.setTimeStamp(0.915086616461);
    msg.setSource(23659U);
    msg.setSourceEntity(156U);
    msg.setDestination(43347U);
    msg.setDestinationEntity(127U);
    msg.value = 0.74745043864;

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
    msg.setTimeStamp(0.988724920562);
    msg.setSource(49610U);
    msg.setSourceEntity(150U);
    msg.setDestination(17765U);
    msg.setDestinationEntity(8U);
    msg.value = 0.837813689328;

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
    msg.setTimeStamp(0.226321887772);
    msg.setSource(31914U);
    msg.setSourceEntity(5U);
    msg.setDestination(42229U);
    msg.setDestinationEntity(66U);
    msg.value = 0.389270799318;

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
    msg.setTimeStamp(0.209062415654);
    msg.setSource(5575U);
    msg.setSourceEntity(199U);
    msg.setDestination(62450U);
    msg.setDestinationEntity(65U);
    msg.value = 0.67157236529;

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
    msg.setTimeStamp(0.443749413996);
    msg.setSource(55868U);
    msg.setSourceEntity(15U);
    msg.setDestination(65339U);
    msg.setDestinationEntity(185U);
    msg.value = 0.333246549171;

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
    msg.setTimeStamp(0.114823570311);
    msg.setSource(27205U);
    msg.setSourceEntity(159U);
    msg.setDestination(21409U);
    msg.setDestinationEntity(18U);
    msg.value = 0.983504513782;

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
    msg.setTimeStamp(0.770832267178);
    msg.setSource(7534U);
    msg.setSourceEntity(118U);
    msg.setDestination(5341U);
    msg.setDestinationEntity(154U);
    msg.x = 0.576789353451;
    msg.y = 0.167817092415;
    msg.z = 0.670326293338;
    msg.phi = 0.649003343261;
    msg.theta = 0.570082075042;
    msg.psi = 0.589830643687;
    msg.p = 0.378844181502;
    msg.q = 0.691990105209;
    msg.r = 0.115043392206;
    msg.u = 0.391391454818;
    msg.v = 0.193505731317;
    msg.w = 0.579864369076;
    msg.bias_psi = 0.904371869461;
    msg.bias_r = 0.019407016948;

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
    msg.setTimeStamp(0.651699865759);
    msg.setSource(48932U);
    msg.setSourceEntity(67U);
    msg.setDestination(27586U);
    msg.setDestinationEntity(185U);
    msg.x = 0.565758266274;
    msg.y = 0.647557437967;
    msg.z = 0.753031749745;
    msg.phi = 0.62308323862;
    msg.theta = 0.519071148699;
    msg.psi = 0.640178239402;
    msg.p = 0.73324613833;
    msg.q = 0.221596187577;
    msg.r = 0.788272864437;
    msg.u = 0.133780910415;
    msg.v = 0.136576617225;
    msg.w = 0.369462295657;
    msg.bias_psi = 0.99793966548;
    msg.bias_r = 0.355862319306;

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
    msg.setTimeStamp(0.161822505232);
    msg.setSource(41268U);
    msg.setSourceEntity(218U);
    msg.setDestination(8506U);
    msg.setDestinationEntity(154U);
    msg.x = 0.564269416023;
    msg.y = 0.687806288525;
    msg.z = 0.0815036199417;
    msg.phi = 0.509681531556;
    msg.theta = 0.830574704712;
    msg.psi = 0.196793741616;
    msg.p = 0.0883006486391;
    msg.q = 0.3882278284;
    msg.r = 0.0404333018923;
    msg.u = 0.0815018526667;
    msg.v = 0.994401187444;
    msg.w = 0.4113561803;
    msg.bias_psi = 0.837081178728;
    msg.bias_r = 0.0656647672561;

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
    msg.setTimeStamp(0.433530697572);
    msg.setSource(20888U);
    msg.setSourceEntity(184U);
    msg.setDestination(7730U);
    msg.setDestinationEntity(161U);
    msg.bias_psi = 0.434005859364;
    msg.bias_r = 0.7584462824;
    msg.cog = 0.824879037832;
    msg.cyaw = 0.132447858681;
    msg.gps_rej_level = 0.885479998966;
    msg.lbl_rej_level = 0.936326308639;
    msg.custom_x = 0.832626643418;
    msg.custom_y = 0.776027706508;
    msg.custom_z = 0.993548880143;

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
    msg.setTimeStamp(0.436848124468);
    msg.setSource(31459U);
    msg.setSourceEntity(28U);
    msg.setDestination(19459U);
    msg.setDestinationEntity(144U);
    msg.bias_psi = 0.238127911229;
    msg.bias_r = 0.434130546701;
    msg.cog = 0.138295059518;
    msg.cyaw = 0.881694731862;
    msg.gps_rej_level = 0.0615126855616;
    msg.lbl_rej_level = 0.159039386753;
    msg.custom_x = 0.825405326379;
    msg.custom_y = 0.931513527316;
    msg.custom_z = 0.961449343854;

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
    msg.setTimeStamp(0.25238696634);
    msg.setSource(34314U);
    msg.setSourceEntity(14U);
    msg.setDestination(36670U);
    msg.setDestinationEntity(233U);
    msg.bias_psi = 0.111679128128;
    msg.bias_r = 0.251184822213;
    msg.cog = 0.617628378129;
    msg.cyaw = 0.484506715466;
    msg.gps_rej_level = 0.627197489317;
    msg.lbl_rej_level = 0.307482889123;
    msg.custom_x = 0.373071770315;
    msg.custom_y = 0.126745724201;
    msg.custom_z = 0.405408438159;

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
    msg.setTimeStamp(0.278979456766);
    msg.setSource(34783U);
    msg.setSourceEntity(106U);
    msg.setDestination(23049U);
    msg.setDestinationEntity(189U);
    msg.utc_time = 0.91189642925;
    msg.reason = 42U;

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
    msg.setTimeStamp(0.110958783361);
    msg.setSource(25441U);
    msg.setSourceEntity(149U);
    msg.setDestination(33530U);
    msg.setDestinationEntity(101U);
    msg.utc_time = 0.127807010848;
    msg.reason = 201U;

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
    msg.setTimeStamp(0.857249019789);
    msg.setSource(12573U);
    msg.setSourceEntity(236U);
    msg.setDestination(35464U);
    msg.setDestinationEntity(10U);
    msg.utc_time = 0.360143101125;
    msg.reason = 218U;

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
    msg.setTimeStamp(0.781449110179);
    msg.setSource(11677U);
    msg.setSourceEntity(92U);
    msg.setDestination(25231U);
    msg.setDestinationEntity(131U);
    msg.id = 35U;
    msg.range = 0.239695184862;
    msg.acceptance = 229U;

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
    msg.setTimeStamp(0.254462082535);
    msg.setSource(61943U);
    msg.setSourceEntity(129U);
    msg.setDestination(63907U);
    msg.setDestinationEntity(50U);
    msg.id = 142U;
    msg.range = 0.465119021671;
    msg.acceptance = 95U;

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
    msg.setTimeStamp(0.185237547036);
    msg.setSource(15158U);
    msg.setSourceEntity(126U);
    msg.setDestination(64174U);
    msg.setDestinationEntity(148U);
    msg.id = 72U;
    msg.range = 0.782754979025;
    msg.acceptance = 188U;

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
    msg.setTimeStamp(0.0939703752835);
    msg.setSource(42257U);
    msg.setSourceEntity(113U);
    msg.setDestination(2973U);
    msg.setDestinationEntity(5U);
    msg.type = 8U;
    msg.reason = 223U;
    msg.value = 0.757254995757;
    msg.timestep = 0.618087280311;

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
    msg.setTimeStamp(0.416001416023);
    msg.setSource(65349U);
    msg.setSourceEntity(183U);
    msg.setDestination(54981U);
    msg.setDestinationEntity(242U);
    msg.type = 138U;
    msg.reason = 211U;
    msg.value = 0.887282288355;
    msg.timestep = 0.553609879222;

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
    msg.setTimeStamp(0.355852913685);
    msg.setSource(26669U);
    msg.setSourceEntity(157U);
    msg.setDestination(17378U);
    msg.setDestinationEntity(189U);
    msg.type = 172U;
    msg.reason = 194U;
    msg.value = 0.762327892761;
    msg.timestep = 0.850513556357;

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
    msg.setTimeStamp(0.213390502556);
    msg.setSource(21232U);
    msg.setSourceEntity(218U);
    msg.setDestination(63576U);
    msg.setDestinationEntity(176U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MIXFPLYWCZOLCMBRCHAQPNPXIGGQHXBAWDFTFBEAJLNYQFPTKSJRDTYCZKGFWJGDQDUBJJXZCLV");
    tmp_msg_0.lat = 0.455300111789;
    tmp_msg_0.lon = 0.0496873819033;
    tmp_msg_0.depth = 0.839633507953;
    tmp_msg_0.query_channel = 254U;
    tmp_msg_0.reply_channel = 235U;
    tmp_msg_0.transponder_delay = 147U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.316456592044;
    msg.y = 0.801499177094;
    msg.var_x = 0.994516220425;
    msg.var_y = 0.743975057153;
    msg.distance = 0.588785558972;

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
    msg.setTimeStamp(0.776929456461);
    msg.setSource(34749U);
    msg.setSourceEntity(179U);
    msg.setDestination(29682U);
    msg.setDestinationEntity(215U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AFPCZBDZRSDXLODBOUVVFCTPKEWECGFUJRKZPSYTIBTSXWFMTDYZIEHPWZLTISSMXNWVPEGDLLUDLQBBAUJENSNBFTNDQOIKKXQDANHPUTKJWCDMBBFQOOVAEAYJOINXTFRRGCGXUJKQYDVNRBJ");
    tmp_msg_0.lat = 0.126495908678;
    tmp_msg_0.lon = 0.657775618896;
    tmp_msg_0.depth = 0.386395910978;
    tmp_msg_0.query_channel = 124U;
    tmp_msg_0.reply_channel = 19U;
    tmp_msg_0.transponder_delay = 144U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.214699480623;
    msg.y = 0.892635223369;
    msg.var_x = 0.563977502185;
    msg.var_y = 0.81048788978;
    msg.distance = 0.436375369887;

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
    msg.setTimeStamp(0.793721986966);
    msg.setSource(6588U);
    msg.setSourceEntity(252U);
    msg.setDestination(20514U);
    msg.setDestinationEntity(166U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XLJKHUHYDGEPOVZQMWJVVCBAPSM");
    tmp_msg_0.lat = 0.217173104621;
    tmp_msg_0.lon = 0.261352104;
    tmp_msg_0.depth = 0.634916025239;
    tmp_msg_0.query_channel = 117U;
    tmp_msg_0.reply_channel = 254U;
    tmp_msg_0.transponder_delay = 206U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.46798994282;
    msg.y = 0.66324053439;
    msg.var_x = 0.631779682611;
    msg.var_y = 0.377399043011;
    msg.distance = 0.158025758071;

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
    msg.setTimeStamp(0.891096049726);
    msg.setSource(43693U);
    msg.setSourceEntity(140U);
    msg.setDestination(36072U);
    msg.setDestinationEntity(221U);
    msg.state = 160U;

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
    msg.setTimeStamp(0.542790451355);
    msg.setSource(37709U);
    msg.setSourceEntity(229U);
    msg.setDestination(4734U);
    msg.setDestinationEntity(229U);
    msg.state = 145U;

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
    msg.setTimeStamp(0.961027292793);
    msg.setSource(39232U);
    msg.setSourceEntity(196U);
    msg.setDestination(55130U);
    msg.setDestinationEntity(121U);
    msg.state = 217U;

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
    msg.setTimeStamp(0.986893442413);
    msg.setSource(62652U);
    msg.setSourceEntity(31U);
    msg.setDestination(55866U);
    msg.setDestinationEntity(225U);
    msg.x = 0.211834855523;
    msg.y = 0.561273110016;
    msg.z = 0.992786686435;

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
    msg.setTimeStamp(0.186496999311);
    msg.setSource(8724U);
    msg.setSourceEntity(116U);
    msg.setDestination(18164U);
    msg.setDestinationEntity(27U);
    msg.x = 0.351980250614;
    msg.y = 0.718847974933;
    msg.z = 0.460407165734;

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
    msg.setTimeStamp(0.401478171713);
    msg.setSource(40033U);
    msg.setSourceEntity(198U);
    msg.setDestination(19967U);
    msg.setDestinationEntity(205U);
    msg.x = 0.433259832505;
    msg.y = 0.0554219908122;
    msg.z = 0.0313706529654;

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
    msg.setTimeStamp(0.290141882775);
    msg.setSource(9482U);
    msg.setSourceEntity(248U);
    msg.setDestination(61051U);
    msg.setDestinationEntity(77U);
    msg.va = 0.316336005819;
    msg.aoa = 0.087197684322;
    msg.ssa = 0.177114263329;

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
    msg.setTimeStamp(0.5993784502);
    msg.setSource(5686U);
    msg.setSourceEntity(37U);
    msg.setDestination(55930U);
    msg.setDestinationEntity(234U);
    msg.va = 0.414833415784;
    msg.aoa = 0.547033967415;
    msg.ssa = 0.596143097221;

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
    msg.setTimeStamp(0.0372849433569);
    msg.setSource(31155U);
    msg.setSourceEntity(205U);
    msg.setDestination(35661U);
    msg.setDestinationEntity(175U);
    msg.va = 0.0270756775118;
    msg.aoa = 0.703388039317;
    msg.ssa = 0.764450888034;

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
    msg.setTimeStamp(0.585872652831);
    msg.setSource(12236U);
    msg.setSourceEntity(53U);
    msg.setDestination(2495U);
    msg.setDestinationEntity(14U);
    msg.mmsi = 4111287596U;
    msg.lon = 0.772841797777;
    msg.lat = 0.239282667814;
    msg.x = 0.936141270759;
    msg.y = 0.559060740982;
    msg.psi = 0.600636189549;
    msg.u = 0.914353880759;
    msg.v = 0.66797622462;
    msg.a = 0.616756005237;
    msg.b = 0.832390500824;
    msg.c = 0.133842310378;
    msg.d = 0.63408684643;

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
    msg.setTimeStamp(0.722441001657);
    msg.setSource(18255U);
    msg.setSourceEntity(172U);
    msg.setDestination(45036U);
    msg.setDestinationEntity(249U);
    msg.mmsi = 371702688U;
    msg.lon = 0.442944625038;
    msg.lat = 0.693884876643;
    msg.x = 0.742344520304;
    msg.y = 0.013439723225;
    msg.psi = 0.236360574953;
    msg.u = 0.417921459439;
    msg.v = 0.847822404769;
    msg.a = 0.30421572409;
    msg.b = 0.969354126746;
    msg.c = 0.996990638318;
    msg.d = 0.624795901802;

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
    msg.setTimeStamp(0.813155669117);
    msg.setSource(3767U);
    msg.setSourceEntity(76U);
    msg.setDestination(37857U);
    msg.setDestinationEntity(230U);
    msg.mmsi = 1961405058U;
    msg.lon = 0.731818242225;
    msg.lat = 0.526675157065;
    msg.x = 0.137994598315;
    msg.y = 0.755707986019;
    msg.psi = 0.350861024504;
    msg.u = 0.53543207268;
    msg.v = 0.96997305091;
    msg.a = 0.830242222686;
    msg.b = 0.380192475223;
    msg.c = 0.865757472214;
    msg.d = 0.0917822472327;

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
    msg.setTimeStamp(0.812157826344);
    msg.setSource(26692U);
    msg.setSourceEntity(65U);
    msg.setDestination(39581U);
    msg.setDestinationEntity(34U);
    msg.value = 0.140497290173;
    msg.off = 0.69682077942;

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
    msg.setTimeStamp(0.752156569028);
    msg.setSource(32860U);
    msg.setSourceEntity(110U);
    msg.setDestination(10846U);
    msg.setDestinationEntity(254U);
    msg.value = 0.814423966439;
    msg.off = 0.0479910266896;

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
    msg.setTimeStamp(0.157848543025);
    msg.setSource(15718U);
    msg.setSourceEntity(204U);
    msg.setDestination(21569U);
    msg.setDestinationEntity(201U);
    msg.value = 0.6297254399;
    msg.off = 0.589179772215;

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
    msg.setTimeStamp(0.385899061487);
    msg.setSource(55319U);
    msg.setSourceEntity(240U);
    msg.setDestination(34619U);
    msg.setDestinationEntity(7U);
    msg.value = 0.213485371467;
    msg.z_units = 120U;

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
    msg.setTimeStamp(0.316556580326);
    msg.setSource(33547U);
    msg.setSourceEntity(193U);
    msg.setDestination(26685U);
    msg.setDestinationEntity(140U);
    msg.value = 0.133564734785;
    msg.z_units = 211U;

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
    msg.setTimeStamp(0.290259886966);
    msg.setSource(42248U);
    msg.setSourceEntity(16U);
    msg.setDestination(27562U);
    msg.setDestinationEntity(98U);
    msg.value = 0.649916302995;
    msg.z_units = 115U;

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
    msg.setTimeStamp(0.343426116504);
    msg.setSource(419U);
    msg.setSourceEntity(222U);
    msg.setDestination(14469U);
    msg.setDestinationEntity(89U);
    msg.value = 0.889328191529;
    msg.speed_units = 242U;

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
    msg.setTimeStamp(0.531032052933);
    msg.setSource(16407U);
    msg.setSourceEntity(98U);
    msg.setDestination(60691U);
    msg.setDestinationEntity(134U);
    msg.value = 0.688444868784;
    msg.speed_units = 136U;

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
    msg.setTimeStamp(0.89654581089);
    msg.setSource(43315U);
    msg.setSourceEntity(137U);
    msg.setDestination(239U);
    msg.setDestinationEntity(162U);
    msg.value = 0.644917636881;
    msg.speed_units = 146U;

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
    msg.setTimeStamp(0.0730393157686);
    msg.setSource(42347U);
    msg.setSourceEntity(87U);
    msg.setDestination(1968U);
    msg.setDestinationEntity(150U);
    msg.value = 0.264626371246;

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
    msg.setTimeStamp(0.149852283842);
    msg.setSource(47700U);
    msg.setSourceEntity(126U);
    msg.setDestination(63449U);
    msg.setDestinationEntity(46U);
    msg.value = 0.225554799018;

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
    msg.setTimeStamp(0.281312497089);
    msg.setSource(57351U);
    msg.setSourceEntity(103U);
    msg.setDestination(2143U);
    msg.setDestinationEntity(58U);
    msg.value = 0.00153325514754;

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
    msg.setTimeStamp(0.879511358169);
    msg.setSource(35291U);
    msg.setSourceEntity(240U);
    msg.setDestination(26016U);
    msg.setDestinationEntity(47U);
    msg.value = 0.0245632297215;

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
    msg.setTimeStamp(0.0154235639886);
    msg.setSource(14823U);
    msg.setSourceEntity(205U);
    msg.setDestination(61199U);
    msg.setDestinationEntity(3U);
    msg.value = 0.881800126432;

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
    msg.setTimeStamp(0.238345807155);
    msg.setSource(41839U);
    msg.setSourceEntity(39U);
    msg.setDestination(8469U);
    msg.setDestinationEntity(41U);
    msg.value = 0.147560871182;

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
    msg.setTimeStamp(0.684072381465);
    msg.setSource(5639U);
    msg.setSourceEntity(212U);
    msg.setDestination(49923U);
    msg.setDestinationEntity(182U);
    msg.value = 0.585300828737;

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
    msg.setTimeStamp(0.913952047583);
    msg.setSource(61749U);
    msg.setSourceEntity(9U);
    msg.setDestination(33219U);
    msg.setDestinationEntity(182U);
    msg.value = 0.802498221546;

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
    msg.setTimeStamp(0.475427860097);
    msg.setSource(17968U);
    msg.setSourceEntity(221U);
    msg.setDestination(43725U);
    msg.setDestinationEntity(62U);
    msg.value = 0.931156143557;

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
    msg.setTimeStamp(0.149923816002);
    msg.setSource(9119U);
    msg.setSourceEntity(155U);
    msg.setDestination(11523U);
    msg.setDestinationEntity(45U);
    msg.path_ref = 2697721992U;
    msg.start_lat = 0.810781347803;
    msg.start_lon = 0.642455520672;
    msg.start_z = 0.306457971155;
    msg.start_z_units = 216U;
    msg.end_lat = 0.294991205956;
    msg.end_lon = 0.0460551342066;
    msg.end_z = 0.159636542534;
    msg.end_z_units = 153U;
    msg.speed = 0.967801803144;
    msg.speed_units = 251U;
    msg.lradius = 0.96736807777;
    msg.flags = 90U;

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
    msg.setTimeStamp(0.35966883783);
    msg.setSource(44682U);
    msg.setSourceEntity(165U);
    msg.setDestination(27358U);
    msg.setDestinationEntity(222U);
    msg.path_ref = 2510754313U;
    msg.start_lat = 0.425718363514;
    msg.start_lon = 0.0856639237722;
    msg.start_z = 0.510314868914;
    msg.start_z_units = 12U;
    msg.end_lat = 0.00235345316909;
    msg.end_lon = 0.627499247571;
    msg.end_z = 0.857814051728;
    msg.end_z_units = 105U;
    msg.speed = 0.568124403172;
    msg.speed_units = 188U;
    msg.lradius = 0.95681978401;
    msg.flags = 52U;

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
    msg.setTimeStamp(0.985058956956);
    msg.setSource(3596U);
    msg.setSourceEntity(230U);
    msg.setDestination(45035U);
    msg.setDestinationEntity(73U);
    msg.path_ref = 2965815614U;
    msg.start_lat = 0.298575792768;
    msg.start_lon = 0.154867290931;
    msg.start_z = 0.0914188454;
    msg.start_z_units = 37U;
    msg.end_lat = 0.88412829645;
    msg.end_lon = 0.906424818558;
    msg.end_z = 0.895069267109;
    msg.end_z_units = 46U;
    msg.speed = 0.267687235914;
    msg.speed_units = 151U;
    msg.lradius = 0.327963833692;
    msg.flags = 109U;

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
    msg.setTimeStamp(0.326842020929);
    msg.setSource(59301U);
    msg.setSourceEntity(209U);
    msg.setDestination(28489U);
    msg.setDestinationEntity(171U);
    msg.x = 0.490793839496;
    msg.y = 0.346050164926;
    msg.z = 0.448971424935;
    msg.k = 0.0546181471457;
    msg.m = 0.896106757816;
    msg.n = 0.670875255029;
    msg.flags = 155U;

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
    msg.setTimeStamp(0.872670291678);
    msg.setSource(23054U);
    msg.setSourceEntity(239U);
    msg.setDestination(53825U);
    msg.setDestinationEntity(7U);
    msg.x = 0.525653565468;
    msg.y = 0.20965354678;
    msg.z = 0.414744416777;
    msg.k = 0.833054813018;
    msg.m = 0.79242207166;
    msg.n = 0.919718510924;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.474916669385);
    msg.setSource(8381U);
    msg.setSourceEntity(179U);
    msg.setDestination(44108U);
    msg.setDestinationEntity(118U);
    msg.x = 0.85143756454;
    msg.y = 0.421021215362;
    msg.z = 0.231090738923;
    msg.k = 0.357223984394;
    msg.m = 0.000565735731019;
    msg.n = 0.821748276015;
    msg.flags = 53U;

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
    msg.setTimeStamp(0.545767928541);
    msg.setSource(63714U);
    msg.setSourceEntity(169U);
    msg.setDestination(7586U);
    msg.setDestinationEntity(192U);
    msg.value = 0.0344149791206;

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
    msg.setTimeStamp(0.583837757839);
    msg.setSource(42554U);
    msg.setSourceEntity(188U);
    msg.setDestination(54271U);
    msg.setDestinationEntity(174U);
    msg.value = 0.979601646628;

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
    msg.setTimeStamp(0.331963382993);
    msg.setSource(5038U);
    msg.setSourceEntity(203U);
    msg.setDestination(18464U);
    msg.setDestinationEntity(16U);
    msg.value = 0.342382092501;

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
    msg.setTimeStamp(0.959911195864);
    msg.setSource(38983U);
    msg.setSourceEntity(221U);
    msg.setDestination(52825U);
    msg.setDestinationEntity(128U);
    msg.u = 0.174654349507;
    msg.v = 0.600363908671;
    msg.w = 0.386088227503;
    msg.p = 0.890216173746;
    msg.q = 0.37970427071;
    msg.r = 0.36447277109;
    msg.flags = 48U;

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
    msg.setTimeStamp(0.419046619619);
    msg.setSource(54970U);
    msg.setSourceEntity(143U);
    msg.setDestination(48089U);
    msg.setDestinationEntity(183U);
    msg.u = 0.178424989511;
    msg.v = 0.475515440685;
    msg.w = 0.964392183674;
    msg.p = 0.316639348521;
    msg.q = 0.390517407737;
    msg.r = 0.869558279381;
    msg.flags = 205U;

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
    msg.setTimeStamp(0.402194155806);
    msg.setSource(58359U);
    msg.setSourceEntity(30U);
    msg.setDestination(46086U);
    msg.setDestinationEntity(129U);
    msg.u = 0.504197829519;
    msg.v = 0.441860837599;
    msg.w = 0.326161854423;
    msg.p = 0.906471682693;
    msg.q = 0.137171265453;
    msg.r = 0.604146040246;
    msg.flags = 15U;

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
    msg.setTimeStamp(0.443207528599);
    msg.setSource(22382U);
    msg.setSourceEntity(44U);
    msg.setDestination(13839U);
    msg.setDestinationEntity(189U);
    msg.path_ref = 3809812136U;
    msg.start_lat = 0.539809094511;
    msg.start_lon = 0.313878648348;
    msg.start_z = 0.400446782058;
    msg.start_z_units = 120U;
    msg.end_lat = 0.368843931429;
    msg.end_lon = 0.688203830398;
    msg.end_z = 0.0666709337115;
    msg.end_z_units = 25U;
    msg.lradius = 0.614193493307;
    msg.flags = 244U;
    msg.x = 0.0965449578691;
    msg.y = 0.0978574230259;
    msg.z = 0.04647374797;
    msg.vx = 0.692098773147;
    msg.vy = 0.684719040508;
    msg.vz = 0.894135566896;
    msg.course_error = 0.309901645975;
    msg.eta = 24238U;

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
    msg.setTimeStamp(0.110647597266);
    msg.setSource(41549U);
    msg.setSourceEntity(60U);
    msg.setDestination(55963U);
    msg.setDestinationEntity(196U);
    msg.path_ref = 4036895435U;
    msg.start_lat = 0.862063380422;
    msg.start_lon = 0.838315224156;
    msg.start_z = 0.214844346453;
    msg.start_z_units = 212U;
    msg.end_lat = 0.193754871927;
    msg.end_lon = 0.659827694908;
    msg.end_z = 0.698933051529;
    msg.end_z_units = 158U;
    msg.lradius = 0.661437541091;
    msg.flags = 189U;
    msg.x = 0.922944419055;
    msg.y = 0.30714052512;
    msg.z = 0.991487969536;
    msg.vx = 0.936546798897;
    msg.vy = 0.297326536819;
    msg.vz = 0.112154160956;
    msg.course_error = 0.625925867757;
    msg.eta = 55638U;

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
    msg.setTimeStamp(0.0234478153996);
    msg.setSource(10979U);
    msg.setSourceEntity(119U);
    msg.setDestination(8796U);
    msg.setDestinationEntity(147U);
    msg.path_ref = 284100931U;
    msg.start_lat = 0.0615516499751;
    msg.start_lon = 0.263706612386;
    msg.start_z = 0.642605369248;
    msg.start_z_units = 179U;
    msg.end_lat = 0.688085599918;
    msg.end_lon = 0.759754794914;
    msg.end_z = 0.269577247672;
    msg.end_z_units = 180U;
    msg.lradius = 0.121371861115;
    msg.flags = 92U;
    msg.x = 0.583706334191;
    msg.y = 0.156255182399;
    msg.z = 0.416346522251;
    msg.vx = 0.842340146879;
    msg.vy = 0.752324888695;
    msg.vz = 0.38671046687;
    msg.course_error = 0.190890825909;
    msg.eta = 42484U;

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
    msg.setTimeStamp(0.459496366443);
    msg.setSource(39619U);
    msg.setSourceEntity(191U);
    msg.setDestination(3085U);
    msg.setDestinationEntity(136U);
    msg.k = 0.47282331068;
    msg.m = 0.891316434955;
    msg.n = 0.81218640746;

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
    msg.setTimeStamp(0.277307440387);
    msg.setSource(48810U);
    msg.setSourceEntity(16U);
    msg.setDestination(30692U);
    msg.setDestinationEntity(25U);
    msg.k = 0.487876158144;
    msg.m = 0.527893929911;
    msg.n = 0.104734241871;

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
    msg.setTimeStamp(0.0886779062823);
    msg.setSource(6594U);
    msg.setSourceEntity(18U);
    msg.setDestination(15258U);
    msg.setDestinationEntity(243U);
    msg.k = 0.110359960401;
    msg.m = 0.950532605086;
    msg.n = 0.321349918679;

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
    msg.setTimeStamp(0.218236008998);
    msg.setSource(52854U);
    msg.setSourceEntity(204U);
    msg.setDestination(31962U);
    msg.setDestinationEntity(127U);
    msg.p = 0.305054296837;
    msg.i = 0.750465239623;
    msg.d = 0.437028759789;
    msg.a = 0.58100106983;

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
    msg.setTimeStamp(0.736625620631);
    msg.setSource(64050U);
    msg.setSourceEntity(118U);
    msg.setDestination(61177U);
    msg.setDestinationEntity(95U);
    msg.p = 0.281398880908;
    msg.i = 0.351427885228;
    msg.d = 0.339480245784;
    msg.a = 0.963360362348;

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
    msg.setTimeStamp(0.14013314107);
    msg.setSource(46891U);
    msg.setSourceEntity(122U);
    msg.setDestination(47883U);
    msg.setDestinationEntity(60U);
    msg.p = 0.35037852858;
    msg.i = 0.553923206662;
    msg.d = 0.371814521714;
    msg.a = 0.08120243067;

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
    msg.setTimeStamp(0.612138233764);
    msg.setSource(4319U);
    msg.setSourceEntity(30U);
    msg.setDestination(40478U);
    msg.setDestinationEntity(144U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.851370348847);
    msg.setSource(17629U);
    msg.setSourceEntity(105U);
    msg.setDestination(38946U);
    msg.setDestinationEntity(158U);
    msg.op = 38U;

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
    msg.setTimeStamp(0.413581402615);
    msg.setSource(37808U);
    msg.setSourceEntity(32U);
    msg.setDestination(5213U);
    msg.setDestinationEntity(162U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.35755152176);
    msg.setSource(33U);
    msg.setSourceEntity(86U);
    msg.setDestination(39162U);
    msg.setDestinationEntity(130U);
    msg.x = 0.660553702614;
    msg.y = 0.0741808260759;
    msg.z = 0.838601901635;
    msg.vx = 0.469843173344;
    msg.vy = 0.932431536482;
    msg.vz = 0.470991820812;
    msg.ax = 0.471016753976;
    msg.ay = 0.296035033141;
    msg.az = 0.62092550796;
    msg.flags = 32710U;

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
    msg.setTimeStamp(0.192075877731);
    msg.setSource(54419U);
    msg.setSourceEntity(180U);
    msg.setDestination(27627U);
    msg.setDestinationEntity(146U);
    msg.x = 0.637465130335;
    msg.y = 0.835361411642;
    msg.z = 0.566994411426;
    msg.vx = 0.0671679317685;
    msg.vy = 0.315054101855;
    msg.vz = 0.658846162049;
    msg.ax = 0.925761875591;
    msg.ay = 0.866920868518;
    msg.az = 0.119014468863;
    msg.flags = 46626U;

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
    msg.setTimeStamp(0.00555961533221);
    msg.setSource(33512U);
    msg.setSourceEntity(189U);
    msg.setDestination(11245U);
    msg.setDestinationEntity(168U);
    msg.x = 0.747150694227;
    msg.y = 0.687301288948;
    msg.z = 0.765357323504;
    msg.vx = 0.151123490655;
    msg.vy = 0.64094922671;
    msg.vz = 0.953447051626;
    msg.ax = 0.297647596195;
    msg.ay = 0.119063904516;
    msg.az = 0.793742264216;
    msg.flags = 38880U;

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
    msg.setTimeStamp(0.829982490486);
    msg.setSource(58066U);
    msg.setSourceEntity(217U);
    msg.setDestination(39677U);
    msg.setDestinationEntity(34U);
    msg.value = 0.187650919667;

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
    msg.setTimeStamp(0.415868841258);
    msg.setSource(59369U);
    msg.setSourceEntity(240U);
    msg.setDestination(17081U);
    msg.setDestinationEntity(29U);
    msg.value = 0.629121315889;

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
    msg.setTimeStamp(0.739002840675);
    msg.setSource(21723U);
    msg.setSourceEntity(75U);
    msg.setDestination(29109U);
    msg.setDestinationEntity(224U);
    msg.value = 0.225197175961;

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
    msg.setTimeStamp(0.210572813033);
    msg.setSource(19025U);
    msg.setSourceEntity(21U);
    msg.setDestination(64419U);
    msg.setDestinationEntity(109U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3377045831U;
    tmp_msg_0.start_lat = 0.510053620993;
    tmp_msg_0.start_lon = 0.0374903449337;
    tmp_msg_0.start_z = 0.826635665328;
    tmp_msg_0.start_z_units = 110U;
    tmp_msg_0.end_lat = 0.0494712072043;
    tmp_msg_0.end_lon = 0.0142165288743;
    tmp_msg_0.end_z = 0.725032582497;
    tmp_msg_0.end_z_units = 185U;
    tmp_msg_0.speed = 0.600457755868;
    tmp_msg_0.speed_units = 133U;
    tmp_msg_0.lradius = 0.245908080379;
    tmp_msg_0.flags = 33U;
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
    msg.setTimeStamp(0.00214747059623);
    msg.setSource(34342U);
    msg.setSourceEntity(48U);
    msg.setDestination(64984U);
    msg.setDestinationEntity(36U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3471722441U;
    tmp_msg_0.start_lat = 0.275650601812;
    tmp_msg_0.start_lon = 0.27422077389;
    tmp_msg_0.start_z = 0.495520033688;
    tmp_msg_0.start_z_units = 28U;
    tmp_msg_0.end_lat = 0.344049804818;
    tmp_msg_0.end_lon = 0.374333945874;
    tmp_msg_0.end_z = 0.590812249753;
    tmp_msg_0.end_z_units = 7U;
    tmp_msg_0.speed = 0.379275662907;
    tmp_msg_0.speed_units = 188U;
    tmp_msg_0.lradius = 0.729239725057;
    tmp_msg_0.flags = 105U;
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
    msg.setTimeStamp(0.793687863012);
    msg.setSource(63651U);
    msg.setSourceEntity(183U);
    msg.setDestination(50016U);
    msg.setDestinationEntity(72U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 137369268U;
    tmp_msg_0.start_lat = 0.784556424081;
    tmp_msg_0.start_lon = 0.66090076639;
    tmp_msg_0.start_z = 0.381023330065;
    tmp_msg_0.start_z_units = 227U;
    tmp_msg_0.end_lat = 0.942950331037;
    tmp_msg_0.end_lon = 0.439161495963;
    tmp_msg_0.end_z = 0.659760004475;
    tmp_msg_0.end_z_units = 28U;
    tmp_msg_0.speed = 0.83716329095;
    tmp_msg_0.speed_units = 12U;
    tmp_msg_0.lradius = 0.641824484614;
    tmp_msg_0.flags = 157U;
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
    msg.setTimeStamp(0.709197774612);
    msg.setSource(18766U);
    msg.setSourceEntity(55U);
    msg.setDestination(62563U);
    msg.setDestinationEntity(248U);
    msg.timeout = 45338U;
    msg.lat = 0.56706427021;
    msg.lon = 0.887238345802;
    msg.z = 0.648962007973;
    msg.z_units = 126U;
    msg.speed = 0.843645993103;
    msg.speed_units = 3U;
    msg.roll = 0.496039174878;
    msg.pitch = 0.175759212348;
    msg.yaw = 0.243554203353;
    msg.custom.assign("BCWPUARGFCIURJSVMBILHBNIFUKOAVXQTDZNPEGALSLZXPBHOYZUMRNEQDNNGRBIJDCGIUESFVHWYLEZLYICWUEYLKFTHFAQFQYPUXDYXKFMWEKZTOHVAVCTWHYJKORWMEXJGZPNLBTKPLSTGOWRGSGGDDEXDFAXDO");

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
    msg.setTimeStamp(0.378671546212);
    msg.setSource(5082U);
    msg.setSourceEntity(163U);
    msg.setDestination(10224U);
    msg.setDestinationEntity(240U);
    msg.timeout = 54019U;
    msg.lat = 0.609393047641;
    msg.lon = 0.774845542804;
    msg.z = 0.84432980513;
    msg.z_units = 169U;
    msg.speed = 0.62620647317;
    msg.speed_units = 61U;
    msg.roll = 0.153972126858;
    msg.pitch = 0.996899484973;
    msg.yaw = 0.785497165713;
    msg.custom.assign("GJDSMGQMKTFNMPWRVAAMNWSVTHVXTSOADUQCTQTFESDHJKOHTMFHBYHFRLQEAUPPGXZWURBBLKOVEYFUCUFIQDZJDYXZFZTZZXISLAWFGKJIDJLTGMNXWVHZXBYTPHSONXTICCSKPKMQCNREMCJWIUVLASKYIVVAZXLGYQMJQYLROJVARECABXIONWBSCOFPCEPOEJMBYLPGYGQELUBCWEDSNXPKQIYKIUKRDVUEHOUABRL");

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
    msg.setTimeStamp(0.322643141029);
    msg.setSource(255U);
    msg.setSourceEntity(179U);
    msg.setDestination(56224U);
    msg.setDestinationEntity(81U);
    msg.timeout = 48060U;
    msg.lat = 0.334763997326;
    msg.lon = 0.00195435398277;
    msg.z = 0.330141968521;
    msg.z_units = 26U;
    msg.speed = 0.947817052014;
    msg.speed_units = 190U;
    msg.roll = 0.0747552092724;
    msg.pitch = 0.127266724228;
    msg.yaw = 0.164748359336;
    msg.custom.assign("HSAJRXXBYPMKPVWQNHUKSRALYMBKTIVSYEDVGKMJUAVNZQPROREQQOWRYCQBLKPJIJDHNWHZDVSNCWKKGLADJTNXZHTAIXQFKNMMPITRQWYEZKGGJUGFPOESQLCUIJUUXVHFEPEEDLGBBOPZOBNCZOHYWCAJRT");

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
    msg.setTimeStamp(0.102994048875);
    msg.setSource(16989U);
    msg.setSourceEntity(140U);
    msg.setDestination(51919U);
    msg.setDestinationEntity(245U);
    msg.timeout = 4022U;
    msg.lat = 0.617347564526;
    msg.lon = 0.200373264828;
    msg.z = 0.390862851204;
    msg.z_units = 226U;
    msg.speed = 0.951420958216;
    msg.speed_units = 27U;
    msg.duration = 61574U;
    msg.radius = 0.587296315138;
    msg.flags = 220U;
    msg.custom.assign("LQWNYFDWZKYSOHGKSZFHP");

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
    msg.setTimeStamp(0.753949386026);
    msg.setSource(23739U);
    msg.setSourceEntity(97U);
    msg.setDestination(38U);
    msg.setDestinationEntity(41U);
    msg.timeout = 51686U;
    msg.lat = 0.135128030522;
    msg.lon = 0.198705429462;
    msg.z = 0.592366711446;
    msg.z_units = 103U;
    msg.speed = 0.0755073133422;
    msg.speed_units = 240U;
    msg.duration = 905U;
    msg.radius = 0.456389851993;
    msg.flags = 94U;
    msg.custom.assign("TCHOUHZIUD");

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
    msg.setTimeStamp(0.44584377647);
    msg.setSource(43458U);
    msg.setSourceEntity(241U);
    msg.setDestination(64615U);
    msg.setDestinationEntity(166U);
    msg.timeout = 64677U;
    msg.lat = 0.968307751418;
    msg.lon = 0.84069833667;
    msg.z = 0.0134688708984;
    msg.z_units = 134U;
    msg.speed = 0.401883883471;
    msg.speed_units = 193U;
    msg.duration = 55945U;
    msg.radius = 0.735753080024;
    msg.flags = 104U;
    msg.custom.assign("MPYUKSKZRSAPFETZLRYLJGVHOFNCSXAMFHCYVOECNWPXYKBBTSERHZSUEKFTDWACTEMIKIWIKMYBIZKSLIFJJASAUHSMTHVMVMLCRAPZLQBWQVQQFLFJUGOKIBFUKGBXWHEGOWIFOFCDZNUOYMQYBJQOWTNL");

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
    msg.setTimeStamp(0.390276063563);
    msg.setSource(51326U);
    msg.setSourceEntity(72U);
    msg.setDestination(35261U);
    msg.setDestinationEntity(200U);
    msg.custom.assign("ITEJIHSDVKKZAXFSPXEIESCLYBEDWCZUVOYCIRMCLSRUEJAKJEBHANKEXHGRTKXRATHRXRHGGOYOXWUPWWNPKTFYBYYKPAONBQAISOGIQJQUURLUABCUJDOEDWPPVSNYVBEVYHSSNLCXRQLMZXVTLVPLZQZTCMSMMOTCRFGNNDPTJOMBVSAFQWYNFMQBLWDHRGXB");

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
    msg.setTimeStamp(0.383912501219);
    msg.setSource(57299U);
    msg.setSourceEntity(136U);
    msg.setDestination(63882U);
    msg.setDestinationEntity(59U);
    msg.custom.assign("TMOSQIAPZHTCRCXITDRFKMABNPKVHTEAGXXXHGLDQIRZCJIRMUDWEVJAQXDPBCZZSHPOOLINUHNYWBTTUBSODSRYXWECPIFJKIUQTHKSSQBOLCYDHYFZEUQSOGNZMUVYGALSBJJFJACLYEGPHBLGCKFVSAJNYVBQZXTRUBRNVJPPAZUVKZADJWVYELWFPNRFMIFPMFKNKDKILJXDGOXRRSEMQUMOWVA");

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
    msg.setTimeStamp(0.937883488146);
    msg.setSource(32311U);
    msg.setSourceEntity(46U);
    msg.setDestination(58907U);
    msg.setDestinationEntity(170U);
    msg.custom.assign("RCNELKZCREAEFYBPEQOSPKRXUXDVOTSISPLVUNCWCBYKSRKVAXGNNPPUAFWMDHAJSTUQYYISOKFB");

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
    msg.setTimeStamp(0.891123436274);
    msg.setSource(62118U);
    msg.setSourceEntity(27U);
    msg.setDestination(5906U);
    msg.setDestinationEntity(133U);
    msg.timeout = 45514U;
    msg.lat = 0.574512679201;
    msg.lon = 0.992395100075;
    msg.z = 0.573096240228;
    msg.z_units = 88U;
    msg.duration = 61089U;
    msg.speed = 0.542972699538;
    msg.speed_units = 217U;
    msg.type = 146U;
    msg.radius = 0.360627572321;
    msg.length = 0.985948086605;
    msg.bearing = 0.316116203863;
    msg.direction = 155U;
    msg.custom.assign("VEVKPYQLSGECSBLGFIMTCQPZMCXAKWJDRWFPYQWMDNLIVFFMAALIANEQSOKHMYTIZRRPLRZPHBTYZSCQEYSKXXXPVSOQGABVKBHLMLOUYTVRTONHZGOQXHHNWWUANFWUPKJJFERNQCXTVJHJIFYOMBTDPXOTRZLKLBQUWBDUXZURMICVIILHEDCGGDBGXAUDJUYZWKCESAEGEPGNDNHYJXNRCTONMZJKPDGUUWVZJESIJIOHKSBVAMFTO");

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
    msg.setTimeStamp(0.59920581562);
    msg.setSource(50592U);
    msg.setSourceEntity(80U);
    msg.setDestination(26551U);
    msg.setDestinationEntity(218U);
    msg.timeout = 33936U;
    msg.lat = 0.753326844272;
    msg.lon = 0.452999482029;
    msg.z = 0.705136982045;
    msg.z_units = 231U;
    msg.duration = 60786U;
    msg.speed = 0.523685262838;
    msg.speed_units = 24U;
    msg.type = 89U;
    msg.radius = 0.632510590819;
    msg.length = 0.223756801509;
    msg.bearing = 0.105579101592;
    msg.direction = 165U;
    msg.custom.assign("NICSQBMDRDGQFPIPTWEKPSBGPDVOZZLAZHFUYWLYYAZKQQVGZCTBBUJAOZBVHAJDBTIPIEUJXWXJMHTMCMUDJVYEXIFKVQHXIOCOGGNWUCJDEKAOJOTFVMSIZGTTJCVSLOUSYNIPFAFQBANPKRXKXPYYPFMEMQGHRBURUELWSMNSLCRNCRVKWYVLCHWEHSLTBUKGDLRKRAEOHNYQNSDXDQGBOXXTZRFCSVZFLNOR");

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
    msg.setTimeStamp(0.647675912148);
    msg.setSource(3186U);
    msg.setSourceEntity(204U);
    msg.setDestination(4588U);
    msg.setDestinationEntity(59U);
    msg.timeout = 61471U;
    msg.lat = 0.641161972817;
    msg.lon = 0.271611424534;
    msg.z = 0.555858301353;
    msg.z_units = 80U;
    msg.duration = 59469U;
    msg.speed = 0.9273015571;
    msg.speed_units = 145U;
    msg.type = 47U;
    msg.radius = 0.113210946947;
    msg.length = 0.438270414402;
    msg.bearing = 0.106168847997;
    msg.direction = 17U;
    msg.custom.assign("QNICMSDYWTDKZPBTQVGVZDHWSTNKMVJSMMDEWXFYQAEGVHTSNYRLODFPZVKAMCMHHFKYUIJROOBIJYJHCHIMZGSJEDBYRSWMFWONXRZAFKHGFWZUQGCAPQQZTOZTBDBIAUIOPIGRKJORIXXROFUPDWLZLJUPJYTAETEPEJNHLNXULANCKWEVMTFQCVHRXDAXVKKCFATWIPVQBCEHBPGNXFJCULQDE");

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
    msg.setTimeStamp(0.796602114333);
    msg.setSource(31813U);
    msg.setSourceEntity(116U);
    msg.setDestination(1141U);
    msg.setDestinationEntity(241U);
    msg.duration = 64218U;
    msg.custom.assign("EVERWBPQOFYSG");

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
    msg.setTimeStamp(0.498017333273);
    msg.setSource(9416U);
    msg.setSourceEntity(77U);
    msg.setDestination(51496U);
    msg.setDestinationEntity(17U);
    msg.duration = 51492U;
    msg.custom.assign("BZTAFIUKMZVETZLCCGJMBZJVDLIGPOOXDLBGQSZEE");

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
    msg.setTimeStamp(0.438912802059);
    msg.setSource(58200U);
    msg.setSourceEntity(132U);
    msg.setDestination(55906U);
    msg.setDestinationEntity(244U);
    msg.duration = 60475U;
    msg.custom.assign("EWQOLQWCBPEUFLKTYXAAKSVKWSWGYZQBDVZRUADUYDSDMHMPCP");

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
    msg.setTimeStamp(0.249795752371);
    msg.setSource(13695U);
    msg.setSourceEntity(68U);
    msg.setDestination(65284U);
    msg.setDestinationEntity(148U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.195521963755;
    tmp_msg_0.off = 0.925664921025;
    msg.control.set(tmp_msg_0);
    msg.duration = 17868U;
    msg.custom.assign("UGLOPCEHVCJZMTSTEVLIK");

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
    msg.setTimeStamp(0.934562310295);
    msg.setSource(48061U);
    msg.setSourceEntity(48U);
    msg.setDestination(35486U);
    msg.setDestinationEntity(69U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.458988756448;
    msg.control.set(tmp_msg_0);
    msg.duration = 42630U;
    msg.custom.assign("WPNUIHNWCKJLRPEFFVTWHDYIANRKAZBATNULLGZNAIQFETABQPLDIIGPRDOKQNXOJVEJCUIQEDZJMUNCLJQTAGGSSV");

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
    msg.setTimeStamp(0.795799474123);
    msg.setSource(51191U);
    msg.setSourceEntity(64U);
    msg.setDestination(34637U);
    msg.setDestinationEntity(207U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1925482480U;
    tmp_msg_0.start_lat = 0.487449989592;
    tmp_msg_0.start_lon = 0.752574663279;
    tmp_msg_0.start_z = 0.329467051948;
    tmp_msg_0.start_z_units = 209U;
    tmp_msg_0.end_lat = 0.419730328424;
    tmp_msg_0.end_lon = 0.185663692291;
    tmp_msg_0.end_z = 0.0923952548351;
    tmp_msg_0.end_z_units = 4U;
    tmp_msg_0.speed = 0.618132290731;
    tmp_msg_0.speed_units = 194U;
    tmp_msg_0.lradius = 0.733487649253;
    tmp_msg_0.flags = 130U;
    msg.control.set(tmp_msg_0);
    msg.duration = 44123U;
    msg.custom.assign("KXWNWHARUFKCTAJTSJEGOPC");

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
    msg.setTimeStamp(0.469111627961);
    msg.setSource(16235U);
    msg.setSourceEntity(197U);
    msg.setDestination(33895U);
    msg.setDestinationEntity(130U);
    msg.timeout = 48845U;
    msg.lat = 0.0965892671247;
    msg.lon = 0.650620551395;
    msg.z = 0.110261207343;
    msg.z_units = 161U;
    msg.speed = 0.929016805255;
    msg.speed_units = 45U;
    msg.bearing = 0.755056841061;
    msg.cross_angle = 0.969746054194;
    msg.width = 0.0316760403571;
    msg.length = 0.714252779227;
    msg.hstep = 0.685287527064;
    msg.coff = 103U;
    msg.alternation = 34U;
    msg.flags = 203U;
    msg.custom.assign("SBMHUODFEGKAGIXIYDOSSAKAVTZDVIIIQTLWWUQJWVYIONFLOHKZNLNCGZDWPRFZJWNKSHJXJQYTPUZCLFIMIGOSBMSRGVTDWHWBWQACOKENKHXMEJOFURNBCPCQOCJVOSBBGXFHEZBCVTEDJFETJFYPNNKQTFMMRYBIZAUP");

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
    msg.setTimeStamp(0.935578310805);
    msg.setSource(22357U);
    msg.setSourceEntity(239U);
    msg.setDestination(21453U);
    msg.setDestinationEntity(6U);
    msg.timeout = 62910U;
    msg.lat = 0.742817131558;
    msg.lon = 0.664272082606;
    msg.z = 0.396566693624;
    msg.z_units = 213U;
    msg.speed = 0.318253783723;
    msg.speed_units = 87U;
    msg.bearing = 0.92514498231;
    msg.cross_angle = 0.90713014944;
    msg.width = 0.610936056517;
    msg.length = 0.689219391788;
    msg.hstep = 0.463045134615;
    msg.coff = 165U;
    msg.alternation = 149U;
    msg.flags = 115U;
    msg.custom.assign("DNMSSJGSHAAIXUVJTHKMLEYVGKCZYQNIVGIOWUFHJZHBTSKPEJWXCKFPKFQXLFXRIZDBPERTIFOPEQXWZOGNRTDJSRJOETVAEPCTEQUCFTBBJKUJIOCHBMBXAOHXLXNBNIHIRAEPNPZWHDPTNGVSEBMTDRXLDCWWVADSHDZROQZNYUJVGZFWREMIONMUUQWQVM");

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
    msg.setTimeStamp(0.765332036338);
    msg.setSource(61404U);
    msg.setSourceEntity(230U);
    msg.setDestination(41457U);
    msg.setDestinationEntity(84U);
    msg.timeout = 44878U;
    msg.lat = 0.461754637225;
    msg.lon = 0.515839513246;
    msg.z = 0.561839367301;
    msg.z_units = 175U;
    msg.speed = 0.017941607416;
    msg.speed_units = 48U;
    msg.bearing = 0.747025685411;
    msg.cross_angle = 0.214183088755;
    msg.width = 0.181827709001;
    msg.length = 0.00531872833841;
    msg.hstep = 0.502817986987;
    msg.coff = 152U;
    msg.alternation = 253U;
    msg.flags = 31U;
    msg.custom.assign("FSZFDQZVERBWUNABARJHBNFWJICJWWFLTTRYGWRMEP");

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
    msg.setTimeStamp(0.0974696896752);
    msg.setSource(23277U);
    msg.setSourceEntity(232U);
    msg.setDestination(60461U);
    msg.setDestinationEntity(207U);
    msg.timeout = 20887U;
    msg.lat = 0.33214079061;
    msg.lon = 0.916604955578;
    msg.z = 0.428615785094;
    msg.z_units = 123U;
    msg.speed = 0.815972210621;
    msg.speed_units = 225U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0719922204633;
    tmp_msg_0.y = 0.664612656195;
    tmp_msg_0.z = 0.213581502966;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BKXOUCMMXABICECDKKHZRGYLYDJQZQCHOGDZOQHAFZWFCENQCUQMIYUIYTWSDOBJGVRAEUORKKRILXNIPFGMUHQYPSLWIKPCJEEPPFZFZHLQESRYHWFULVGJCWAWFGDJRSGYNVWBXMDUMIVDPWICGLHKBZATJXNOVNDOTUXEOHQCASPFVNADLNAMAQMZFNBTXMHBLDTXZTBEJTXRJRFSYJRSKNPA");

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
    msg.setTimeStamp(0.879086192243);
    msg.setSource(36695U);
    msg.setSourceEntity(130U);
    msg.setDestination(21537U);
    msg.setDestinationEntity(230U);
    msg.timeout = 12902U;
    msg.lat = 0.757297227644;
    msg.lon = 0.888960071594;
    msg.z = 0.605657041072;
    msg.z_units = 116U;
    msg.speed = 0.0219178090568;
    msg.speed_units = 27U;
    msg.custom.assign("JTVUZQGPSCOWKJFNDHCXFNBRBNLPBEQLDKIJOMWUIESWPFMUZDYEKZJZDSGUGYFQWZDSBQTLHXMRBHAJTIUVKPOOUCYEREOZNZPRUKEPGOFYQYQLBRIETLLZWGIISCTACYQWFQWBAAWJSXLEPVNPODANYOMDWXTJRCJXKLCIAFVPVDOKZLAXHKVBVXNRYCDKHSIAMEBAXXMEBH");

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
    msg.setTimeStamp(0.924266351254);
    msg.setSource(1235U);
    msg.setSourceEntity(115U);
    msg.setDestination(41884U);
    msg.setDestinationEntity(5U);
    msg.timeout = 45472U;
    msg.lat = 0.173780513703;
    msg.lon = 0.0834368079205;
    msg.z = 0.210512048108;
    msg.z_units = 67U;
    msg.speed = 0.0199127130742;
    msg.speed_units = 194U;
    msg.custom.assign("UMISWZEYPAWIMJIEGIMBLRWAIQRWLJTLNOHCCVFLCDDGQVTGIAMCDFODGBCNPTKKDRTXEIBGFPPHQFWXXDNFOLS");

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
    msg.setTimeStamp(0.909741913646);
    msg.setSource(53052U);
    msg.setSourceEntity(2U);
    msg.setDestination(18740U);
    msg.setDestinationEntity(20U);
    msg.x = 0.110154464643;
    msg.y = 0.768244300643;
    msg.z = 0.122119037699;

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
    msg.setTimeStamp(0.732768634567);
    msg.setSource(12358U);
    msg.setSourceEntity(176U);
    msg.setDestination(57827U);
    msg.setDestinationEntity(67U);
    msg.x = 0.0107932078076;
    msg.y = 0.293160605346;
    msg.z = 0.125159976912;

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
    msg.setTimeStamp(0.0695117649941);
    msg.setSource(9778U);
    msg.setSourceEntity(116U);
    msg.setDestination(18122U);
    msg.setDestinationEntity(51U);
    msg.x = 0.0169166185063;
    msg.y = 0.500318763697;
    msg.z = 0.896694690601;

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
    msg.setTimeStamp(0.927063856099);
    msg.setSource(28662U);
    msg.setSourceEntity(196U);
    msg.setDestination(29721U);
    msg.setDestinationEntity(204U);
    msg.timeout = 40589U;
    msg.lat = 0.917848323543;
    msg.lon = 0.0315183409489;
    msg.z = 0.226907832377;
    msg.z_units = 20U;
    msg.amplitude = 0.73575396601;
    msg.pitch = 0.355958857487;
    msg.speed = 0.374907739116;
    msg.speed_units = 2U;
    msg.custom.assign("ELAWASQGUJVGZUKXEUTDACSREFGJVHYJWYYESJYKMZZHUIBPZTPBQAUFWHLETBJTLFKQPBCOQZQPFWVDAHORMEBGZODBNUQSMNAZJCJIQYOUHRKLZJPMICVFIXSRDLXRTXNVQGHCOPPMWXXYCFIPWLQHWBTZSYTEYOHDMHOOVCNWABNMYKNDNRGFUKFWDXGKJGEVNLWLRIVNAHSDKPIERMLFXPJBDUAXQACITCDVKZOOSNTVTGBS");

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
    msg.setTimeStamp(0.712636291134);
    msg.setSource(48535U);
    msg.setSourceEntity(14U);
    msg.setDestination(36513U);
    msg.setDestinationEntity(105U);
    msg.timeout = 34876U;
    msg.lat = 0.524834748709;
    msg.lon = 0.738741553184;
    msg.z = 0.707459767573;
    msg.z_units = 50U;
    msg.amplitude = 0.363360417186;
    msg.pitch = 0.218421694626;
    msg.speed = 0.0452447483649;
    msg.speed_units = 231U;
    msg.custom.assign("NCBSKJXALDEBAADQSCLNPRLDNBLEUMUJDHOFKPKPVMTAWORZBWFCQIIBATMWQRSGVJXIOYGLKDEEYOYHYQDXTJZUBWPEDQQXSINUYVKVOGJZLPEUVHEYNFCMXODLCXMVESHCRFVMJWYCMZBCSKZDNFBTRZSGGQHQIKPOIRTMUXURFWGVTQNRAPACIPVPHARHOUQAXAZTJGKBSHXJWLTYGH");

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
    msg.setTimeStamp(0.696329064367);
    msg.setSource(54725U);
    msg.setSourceEntity(11U);
    msg.setDestination(35446U);
    msg.setDestinationEntity(149U);
    msg.timeout = 21830U;
    msg.lat = 0.796880387501;
    msg.lon = 0.146726235843;
    msg.z = 0.0629811170933;
    msg.z_units = 55U;
    msg.amplitude = 0.34886621164;
    msg.pitch = 0.5482499406;
    msg.speed = 0.485357638743;
    msg.speed_units = 65U;
    msg.custom.assign("HBFIDEQXQMYLOYEACCUKBSUZVDWCQJAWCUHKCPRGOHXAQWQIOSJMRVNKOGILGSYTAREAUAXZLNXNDPRKYJSLUTNGXQWJYMFSTWZZRIKDAMJYVBOSAWHZEEPQCWDGIGZVIOEXHNOWFCR");

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
    msg.setTimeStamp(0.13151946301);
    msg.setSource(26297U);
    msg.setSourceEntity(214U);
    msg.setDestination(8322U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.526221009343);
    msg.setSource(33876U);
    msg.setSourceEntity(92U);
    msg.setDestination(22401U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.927928713559);
    msg.setSource(14154U);
    msg.setSourceEntity(253U);
    msg.setDestination(11992U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.532676021173);
    msg.setSource(26394U);
    msg.setSourceEntity(49U);
    msg.setDestination(45838U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.256964190092;
    msg.lon = 0.729765768635;
    msg.z = 0.250610307967;
    msg.z_units = 13U;
    msg.radius = 0.634770203257;
    msg.duration = 19653U;
    msg.speed = 0.560075855743;
    msg.speed_units = 174U;
    msg.popup_period = 49453U;
    msg.popup_duration = 29487U;
    msg.flags = 191U;
    msg.custom.assign("FGNEBVZEVXCIWWOGVLBZBGSCVUSHBSDJHBCAPMFEFHJDAKGLFZADNSOIPGOTBNXDZOXEUJMMRFTZDTICDHRYNWTWB");

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
    msg.setTimeStamp(0.543244131887);
    msg.setSource(42692U);
    msg.setSourceEntity(23U);
    msg.setDestination(41656U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.70082155882;
    msg.lon = 0.982359959651;
    msg.z = 0.976542852291;
    msg.z_units = 230U;
    msg.radius = 0.507819606263;
    msg.duration = 53256U;
    msg.speed = 0.144024594672;
    msg.speed_units = 18U;
    msg.popup_period = 16855U;
    msg.popup_duration = 27682U;
    msg.flags = 138U;
    msg.custom.assign("MZNOZGZSDQLNDWDUBUSDCGYTXRCQOGYENKPYOCXAGAPFTIRJJHKZDBZJIJUFLJYOTWXFYILDPBFKVSXOWEVTTMLCSWELQASYHFVCQIMHQDBKVPEOYGLCTMBSGQOQMFZJHHLGXAKNQNVNNKAXSRWORGPCASEBMRZJPAKXEURFDYFUTIHUMFHIVWNUOSJHLMCHINHKPICEWLDBMFPWGQPUXAPETUSCXJBRROUZVEBNMRTZKVWEBVWQGTKVX");

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
    msg.setTimeStamp(0.662383769839);
    msg.setSource(18084U);
    msg.setSourceEntity(203U);
    msg.setDestination(53639U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.69943504462;
    msg.lon = 0.133602111756;
    msg.z = 0.231823628826;
    msg.z_units = 209U;
    msg.radius = 0.0435170391247;
    msg.duration = 33858U;
    msg.speed = 0.582557133149;
    msg.speed_units = 31U;
    msg.popup_period = 3675U;
    msg.popup_duration = 37054U;
    msg.flags = 22U;
    msg.custom.assign("DKAQQXNVNNQWEPZEQQCFXVPAYURXNIFXUDIIDHDNNFIUTBLKMJHRYZTGVVEJOTSAERMQKMKCGGTUMHEJYUIQPJEBMXWRPZSYVYACLYHXTWHJKZDMSIYAQAFXEHECHPXKRWLZVOTGLSFCBGIMUSVIPKSZFSYDJTKGLGDXUBOJJIHCBTWLEWDF");

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
    msg.setTimeStamp(0.262520238985);
    msg.setSource(9437U);
    msg.setSourceEntity(129U);
    msg.setDestination(55981U);
    msg.setDestinationEntity(38U);
    msg.timeout = 46291U;
    msg.flags = 53U;
    msg.lat = 0.857678336954;
    msg.lon = 0.780619176482;
    msg.start_z = 0.478419119647;
    msg.start_z_units = 225U;
    msg.end_z = 0.349853650471;
    msg.end_z_units = 83U;
    msg.radius = 0.266297070945;
    msg.speed = 0.928256835244;
    msg.speed_units = 90U;
    msg.custom.assign("ZKYPJGENHWUETQSHJDDTVUKXHKULRFXERCUSHCLKHCOMHIFOYWIJLXSBVSEQTRSWYM");

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
    msg.setTimeStamp(0.375583055139);
    msg.setSource(2199U);
    msg.setSourceEntity(147U);
    msg.setDestination(50346U);
    msg.setDestinationEntity(135U);
    msg.timeout = 8568U;
    msg.flags = 118U;
    msg.lat = 0.408742050506;
    msg.lon = 0.694341207977;
    msg.start_z = 0.588973498857;
    msg.start_z_units = 209U;
    msg.end_z = 0.798211270265;
    msg.end_z_units = 98U;
    msg.radius = 0.933546264774;
    msg.speed = 0.7458593652;
    msg.speed_units = 185U;
    msg.custom.assign("CTVPYZVETFDMRNPWGUGQUGATAMCNPBLNLICSPP");

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
    msg.setTimeStamp(0.962631271708);
    msg.setSource(44883U);
    msg.setSourceEntity(207U);
    msg.setDestination(45307U);
    msg.setDestinationEntity(23U);
    msg.timeout = 25424U;
    msg.flags = 247U;
    msg.lat = 0.14358026566;
    msg.lon = 0.256500721719;
    msg.start_z = 0.0152911955197;
    msg.start_z_units = 119U;
    msg.end_z = 0.300924970396;
    msg.end_z_units = 207U;
    msg.radius = 0.791533614257;
    msg.speed = 0.174706913913;
    msg.speed_units = 238U;
    msg.custom.assign("ZXUDJXOTTLQYLQULXGXGBPCYQBZMOIXCDGEYMIJNZLGNUWDMECHYXFFKYODLADLKVWOFPRAVYQSTIMWHJJHARWNHCHRWWIGQISVOBSYPGUJEXNZEYINFEO");

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
    msg.setTimeStamp(0.198864493385);
    msg.setSource(22885U);
    msg.setSourceEntity(64U);
    msg.setDestination(40220U);
    msg.setDestinationEntity(122U);
    msg.timeout = 28540U;
    msg.lat = 0.888199364513;
    msg.lon = 0.178526800264;
    msg.z = 0.649446788296;
    msg.z_units = 156U;
    msg.speed = 0.843924295027;
    msg.speed_units = 252U;
    msg.custom.assign("PGYUJMHFDAJACJWPUCSDQNORJHDDEXCVYROKDKLSVZRVQALDWSQSHUGYPJKXGHMPWEBOXZHQQNNTNWFZTEQDUBOW");

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
    msg.setTimeStamp(0.950408939254);
    msg.setSource(20224U);
    msg.setSourceEntity(166U);
    msg.setDestination(57380U);
    msg.setDestinationEntity(238U);
    msg.timeout = 22714U;
    msg.lat = 0.268286480794;
    msg.lon = 0.573579930947;
    msg.z = 0.496636647207;
    msg.z_units = 104U;
    msg.speed = 0.741245323818;
    msg.speed_units = 48U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.40263180865;
    tmp_msg_0.y = 0.571362823187;
    tmp_msg_0.z = 0.764269300597;
    tmp_msg_0.t = 0.467035271539;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XCPEAWISXLKJNANRMHYPWOOTMBUSMCNSFRGPUOIOFAAKDBLLNIGGLIFUQFYOKJVEELQMUBDEDZTJBJHHKKZLDJDXMTKFSNMHYPYWSZBGXJQAUFHLXZMGHMZRVSWOXVDZRRFVGOUVEAERVITFESGXEJQIHZMKZODZRPNYDCSBCAXQWKBCJPNRTKPHXGCSNTUOBGQXKYCRLHQSYEWQQUFUEIVWCDIOMAFWTVJDZHWPWPJAINU");

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
    msg.setTimeStamp(0.94261508756);
    msg.setSource(44194U);
    msg.setSourceEntity(156U);
    msg.setDestination(52511U);
    msg.setDestinationEntity(65U);
    msg.timeout = 64217U;
    msg.lat = 0.934792541622;
    msg.lon = 0.257710917095;
    msg.z = 0.55495260502;
    msg.z_units = 41U;
    msg.speed = 0.405987952567;
    msg.speed_units = 56U;
    msg.custom.assign("JVSLGEUMGCAMPNLKQRILHJHOYCUUURBQQLYZQVOZSGDGUTBHFSKYVDKKBMD");

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
    msg.setTimeStamp(0.346019974195);
    msg.setSource(4094U);
    msg.setSourceEntity(24U);
    msg.setDestination(41597U);
    msg.setDestinationEntity(146U);
    msg.x = 0.2676238254;
    msg.y = 0.373897201291;
    msg.z = 0.274585402265;
    msg.t = 0.466458504232;

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
    msg.setTimeStamp(0.678727350276);
    msg.setSource(44880U);
    msg.setSourceEntity(96U);
    msg.setDestination(57076U);
    msg.setDestinationEntity(231U);
    msg.x = 0.220017025962;
    msg.y = 0.871809966695;
    msg.z = 0.0899868889045;
    msg.t = 0.260796784334;

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
    msg.setTimeStamp(0.249742704148);
    msg.setSource(6654U);
    msg.setSourceEntity(235U);
    msg.setDestination(53163U);
    msg.setDestinationEntity(229U);
    msg.x = 0.374595572168;
    msg.y = 0.858184264904;
    msg.z = 0.894992788686;
    msg.t = 0.646735310703;

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
    msg.setTimeStamp(0.335529950352);
    msg.setSource(43523U);
    msg.setSourceEntity(152U);
    msg.setDestination(57432U);
    msg.setDestinationEntity(254U);
    msg.timeout = 23305U;
    msg.name.assign("YXWQDABPZJMQSPDBRUYFCZLPTHLFCMPECWDEKYNJAABCOEAMMPAPAZOGDWGKVWEYQHMCNJFVRZOWRZJVCYTEGSWUSIGSGQMXURWXVXQLBFLHABHFZUHYMFKYIVWOHZKLGOZRMFALCCVUTEJZIATYIOTYGDTEASNFQWPCREDXIIKZEPNGUJVNNFKKTINOSUXJNBGVQXYQDOXHDBDQVURPSTI");
    msg.custom.assign("WJELNCHPXDSPUECFFOGOGRETRCNOJWWCWORAAOJISVKDSOJKINZFNXDKBHLLLFOJKUBPXDCPFJLUYSNTOQBTWWRPR");

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
    msg.setTimeStamp(0.178745690925);
    msg.setSource(39623U);
    msg.setSourceEntity(6U);
    msg.setDestination(28277U);
    msg.setDestinationEntity(123U);
    msg.timeout = 3409U;
    msg.name.assign("XCJKNJFVOSAWABDEFYNJHLMGTLZKBJMUPCWHKOYXOGCRIAX");
    msg.custom.assign("INANSKVJFVWRKOUKFUCHAUWZPGPZWVRJNMURTBCVCINZJSDPZYFROTXMPBHIGNQLSACIGKJSGTTIOYJMFBTFEPLADTIEABFKRMGXQRRXBMKOGLWZAQLCCYFXAYDYRMEGJSCTWNXVUXQEJPVAMTHOESTNGWDSKHIDYMCVWXVASHODXUFQIEPLNWYORZYPWBQCLBQIDPBE");

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
    msg.setTimeStamp(0.098805708465);
    msg.setSource(39920U);
    msg.setSourceEntity(153U);
    msg.setDestination(27811U);
    msg.setDestinationEntity(104U);
    msg.timeout = 33762U;
    msg.name.assign("ZCSDPLQCBRBCZBBIYAJDUQFAMZBXZWXGDDAYJUMRHNOIASUONTOBUTVFQOYVITJNQLEWKPIAUF");
    msg.custom.assign("LHFLPXEVFGSUVDXZJD");

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
    msg.setTimeStamp(0.457216290636);
    msg.setSource(12872U);
    msg.setSourceEntity(25U);
    msg.setDestination(64954U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.250895463474;
    msg.lon = 0.94160095924;
    msg.z = 0.00790975918976;
    msg.z_units = 27U;
    msg.speed = 0.650931472074;
    msg.speed_units = 226U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 31320U;
    tmp_msg_0.off_x = 0.173985237402;
    tmp_msg_0.off_y = 0.506050272914;
    tmp_msg_0.off_z = 0.181876419769;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.201230282569;
    msg.custom.assign("JMRQDGBCMFVJCYSRWUEADVUZTTAWEHKZZRQCARVYPKYSWHWHORJPQZZZTFGMLCHSHWIMJUKXLRTBJEWVXQQZOAQPLBPNDCAUVFKBIOVZWYYJFMOKHKBGUQPWMVCRLFMHFRJ");

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
    msg.setTimeStamp(0.471254848596);
    msg.setSource(40054U);
    msg.setSourceEntity(108U);
    msg.setDestination(41360U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.348610677136;
    msg.lon = 0.959317472787;
    msg.z = 0.906998154303;
    msg.z_units = 179U;
    msg.speed = 0.78311751852;
    msg.speed_units = 229U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7999U;
    tmp_msg_0.off_x = 0.866340472464;
    tmp_msg_0.off_y = 0.522458655092;
    tmp_msg_0.off_z = 0.152386144823;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.875291734691;
    msg.custom.assign("BNEWUUTROXMTFJDMEANYVQPOMAAHKFKLBGKIHJXWKBHGTNECOFUIFSCRXFDVVKKBIGJMJJRXCYDNJWDYGXJYLSGQLBOZQAHWCHPZSYFOIAAXHYVNEWFZUGDPJYSWZRBEILSISMUOPQRFHWOGBHRRKUTXJSMZKDLYVTDAESIQCGDURJRTUMXNZTMULNQENQOVPCPBZEZYPCIL");

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
    msg.setTimeStamp(0.28612165783);
    msg.setSource(45211U);
    msg.setSourceEntity(33U);
    msg.setDestination(13989U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.2207511242;
    msg.lon = 0.247936917645;
    msg.z = 0.890114482365;
    msg.z_units = 211U;
    msg.speed = 0.163769944206;
    msg.speed_units = 238U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64626U;
    tmp_msg_0.off_x = 0.0860928131161;
    tmp_msg_0.off_y = 0.789046767081;
    tmp_msg_0.off_z = 0.268202004245;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.264722977618;
    msg.custom.assign("CNVEPNMQWDJTMSGSSDPZVRIZOHIZCTRVNQWAHWFEFGLMHEDGYGSVOXLKZIWQNQOKJUMGDJKOGYTDCEUFRJSFJIXTLCXQJWDDRVSSSWSPNKVGDZLPAWENMIMGMOJYTQLIECEABLTBPNQYBHBLZJCCJVBRUHLALBXNIPQPNHBPMRWICRO");

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
    msg.setTimeStamp(0.412482708396);
    msg.setSource(23445U);
    msg.setSourceEntity(122U);
    msg.setDestination(29484U);
    msg.setDestinationEntity(35U);
    msg.vid = 26526U;
    msg.off_x = 0.747949941438;
    msg.off_y = 0.208385420328;
    msg.off_z = 0.424300898631;

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
    msg.setTimeStamp(0.163468094874);
    msg.setSource(5691U);
    msg.setSourceEntity(99U);
    msg.setDestination(17320U);
    msg.setDestinationEntity(92U);
    msg.vid = 39008U;
    msg.off_x = 0.929323175507;
    msg.off_y = 0.555751557664;
    msg.off_z = 0.014387704927;

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
    msg.setTimeStamp(0.483729105389);
    msg.setSource(32756U);
    msg.setSourceEntity(129U);
    msg.setDestination(13910U);
    msg.setDestinationEntity(78U);
    msg.vid = 25396U;
    msg.off_x = 0.939863584014;
    msg.off_y = 0.200658523291;
    msg.off_z = 0.431129112344;

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
    msg.setTimeStamp(0.301045823244);
    msg.setSource(16383U);
    msg.setSourceEntity(165U);
    msg.setDestination(1875U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.0442090934706);
    msg.setSource(41070U);
    msg.setSourceEntity(146U);
    msg.setDestination(36766U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.632224435588);
    msg.setSource(14954U);
    msg.setSourceEntity(55U);
    msg.setDestination(30376U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.465267186727);
    msg.setSource(64709U);
    msg.setSourceEntity(190U);
    msg.setDestination(47694U);
    msg.setDestinationEntity(67U);
    msg.mid = 52299U;

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
    msg.setTimeStamp(0.495433745813);
    msg.setSource(2667U);
    msg.setSourceEntity(175U);
    msg.setDestination(58903U);
    msg.setDestinationEntity(57U);
    msg.mid = 34769U;

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
    msg.setTimeStamp(0.320916406171);
    msg.setSource(40817U);
    msg.setSourceEntity(135U);
    msg.setDestination(20403U);
    msg.setDestinationEntity(223U);
    msg.mid = 21827U;

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
    msg.setTimeStamp(0.127977910734);
    msg.setSource(38229U);
    msg.setSourceEntity(246U);
    msg.setDestination(1996U);
    msg.setDestinationEntity(62U);
    msg.state = 214U;
    msg.eta = 18017U;
    msg.info.assign("PAQCTIQYCITJTWPODWSNOFLZMICMWMGPRHNTVWIRWZKFEADDLICXFBWEUPRPNNVTHGLFSAMDNSXVYCIUDGQSNCMXRKWJODJVDFIEEYHOUYXEQGEPCKCVQRAOZAIIUNIMGAKSWKHSZPLTKLNOGHNXUFHTYLYBK");

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
    msg.setTimeStamp(0.119554681561);
    msg.setSource(52117U);
    msg.setSourceEntity(180U);
    msg.setDestination(64090U);
    msg.setDestinationEntity(135U);
    msg.state = 61U;
    msg.eta = 9777U;
    msg.info.assign("VTIFYTFCWJMKPKGSOXSABYDDXFPFIWYCLPIXKRNHFVLCCQNNIAQELHXHGWXJESTGZLYFPDHCJQBAUWKKDQAOFSXPDZMDJWGJRVRYRZVHXJMCJROZKRMOLZHKUVSTGRDGIWEWYTKYUOBHJ");

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
    msg.setTimeStamp(0.892631467425);
    msg.setSource(17192U);
    msg.setSourceEntity(201U);
    msg.setDestination(38400U);
    msg.setDestinationEntity(154U);
    msg.state = 42U;
    msg.eta = 14971U;
    msg.info.assign("ETCUGQFUFEBMLIOTNSLUNFKURHCJKVLPHMJLDSRKVAPILPOVMHZHYXZMZZYMHWTOBZYIPWKTFXWDBPJVNNQGHMRFJLABCQGRQIFPROCKMEFCWWSEXKIDKGUAGLNNGVOSJVBFDEHDNIIQWROYREQXHEPASUJTCDKGICEDGPDBAFBYRT");

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
    msg.setTimeStamp(0.271345138951);
    msg.setSource(43499U);
    msg.setSourceEntity(72U);
    msg.setDestination(34200U);
    msg.setDestinationEntity(208U);
    msg.system = 50941U;
    msg.duration = 38444U;
    msg.speed = 0.557351482771;
    msg.speed_units = 45U;
    msg.x = 0.366193206616;
    msg.y = 0.817423411128;
    msg.z = 0.465129993153;
    msg.z_units = 245U;

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
    msg.setTimeStamp(0.930841665148);
    msg.setSource(47804U);
    msg.setSourceEntity(106U);
    msg.setDestination(53548U);
    msg.setDestinationEntity(151U);
    msg.system = 44148U;
    msg.duration = 55953U;
    msg.speed = 0.0317763760957;
    msg.speed_units = 235U;
    msg.x = 0.533856950705;
    msg.y = 0.61214195599;
    msg.z = 0.165613158078;
    msg.z_units = 28U;

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
    msg.setTimeStamp(0.0410200357581);
    msg.setSource(39587U);
    msg.setSourceEntity(177U);
    msg.setDestination(54803U);
    msg.setDestinationEntity(31U);
    msg.system = 62371U;
    msg.duration = 5321U;
    msg.speed = 0.523756367451;
    msg.speed_units = 150U;
    msg.x = 0.0127495623463;
    msg.y = 0.537707122463;
    msg.z = 0.659241284594;
    msg.z_units = 117U;

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
    msg.setTimeStamp(0.855651480832);
    msg.setSource(14488U);
    msg.setSourceEntity(158U);
    msg.setDestination(23272U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.359854078225;
    msg.lon = 0.275183503462;
    msg.speed = 0.923314562259;
    msg.speed_units = 160U;
    msg.duration = 29726U;
    msg.sys_a = 63222U;
    msg.sys_b = 752U;
    msg.move_threshold = 0.511061724274;

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
    msg.setTimeStamp(0.498710514219);
    msg.setSource(18894U);
    msg.setSourceEntity(92U);
    msg.setDestination(19636U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.179981645772;
    msg.lon = 0.878395439542;
    msg.speed = 0.503197100463;
    msg.speed_units = 95U;
    msg.duration = 44445U;
    msg.sys_a = 47655U;
    msg.sys_b = 56402U;
    msg.move_threshold = 0.4559558771;

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
    msg.setTimeStamp(0.52351242533);
    msg.setSource(37016U);
    msg.setSourceEntity(174U);
    msg.setDestination(13448U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.923873118332;
    msg.lon = 0.978937308461;
    msg.speed = 0.719045038895;
    msg.speed_units = 237U;
    msg.duration = 48188U;
    msg.sys_a = 50796U;
    msg.sys_b = 36596U;
    msg.move_threshold = 0.986105292588;

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
    msg.setTimeStamp(0.848979727732);
    msg.setSource(29178U);
    msg.setSourceEntity(78U);
    msg.setDestination(43913U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.258805750963;
    msg.lon = 0.904460551798;
    msg.z = 0.650502756576;
    msg.z_units = 162U;
    msg.speed = 0.684852245801;
    msg.speed_units = 217U;
    msg.custom.assign("QJYDGKCNTDUKT");

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
    msg.setTimeStamp(0.68552644346);
    msg.setSource(45863U);
    msg.setSourceEntity(122U);
    msg.setDestination(23723U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.368576831018;
    msg.lon = 0.354908767675;
    msg.z = 0.0466871759108;
    msg.z_units = 211U;
    msg.speed = 0.668581631537;
    msg.speed_units = 192U;
    msg.custom.assign("BBRPONOGPAAEHKUOCARVVDQOJVDFEXZOFCQWFSQFQHEUSDCPQWHLNUPLCDLRERTAESKNWSMCYJFIVAIETHTOOYHPRXDJVIWPRLVZUHMULMHJCSMBKZELZUTNONUWVUZBNIQTHPMCJACSZMFVEJYXGLGEAKMPTXDTMIQDIACQXNWGIGONXOJUQBCBIZGZLTXDMJBRXFUATYJ");

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
    msg.setTimeStamp(0.859270249685);
    msg.setSource(2997U);
    msg.setSourceEntity(237U);
    msg.setDestination(29379U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.0699617439885;
    msg.lon = 0.77919512649;
    msg.z = 0.634014017114;
    msg.z_units = 246U;
    msg.speed = 0.930739000564;
    msg.speed_units = 20U;
    msg.custom.assign("QEBARTGNQEENQRFIRYVWCAYQRCJLIOYOAYHLXHKCJVMPNODXPIFJSJAVBVZIIAFLVEKEKZDGIFIBQJAGGTIRWCZUOMLHADHHGFGUBDYDSVSLEIZKFMMAOZXJQPPHXSFCUOUTTISHBOJPQDCTOTLXFQRFWZMDEXL");

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
    msg.setTimeStamp(0.0272299958972);
    msg.setSource(21345U);
    msg.setSourceEntity(106U);
    msg.setDestination(60083U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.796720501495;
    msg.lon = 0.706906981573;

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
    msg.setTimeStamp(0.842781118609);
    msg.setSource(17703U);
    msg.setSourceEntity(195U);
    msg.setDestination(60243U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.532546271915;
    msg.lon = 0.0215983663271;

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
    msg.setTimeStamp(0.909620271413);
    msg.setSource(12749U);
    msg.setSourceEntity(230U);
    msg.setDestination(56739U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.407157266136;
    msg.lon = 0.945244726682;

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
    msg.setTimeStamp(0.323713217691);
    msg.setSource(31477U);
    msg.setSourceEntity(160U);
    msg.setDestination(50893U);
    msg.setDestinationEntity(230U);
    msg.timeout = 46575U;
    msg.lat = 0.254949780918;
    msg.lon = 0.890842384612;
    msg.z = 0.671920641753;
    msg.z_units = 140U;
    msg.pitch = 0.0562323263582;
    msg.amplitude = 0.193860905478;
    msg.duration = 7131U;
    msg.speed = 0.525092436066;
    msg.speed_units = 32U;
    msg.radius = 0.901390457387;
    msg.direction = 219U;
    msg.custom.assign("GJGOKTKLFAPDXQQZKNMEHYCLVJIFBYTURILLWBOGRRNIRSJIJEBMTTDUJUYHCOKBVAYVASAMGGGE");

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
    msg.setTimeStamp(0.770951306176);
    msg.setSource(23593U);
    msg.setSourceEntity(226U);
    msg.setDestination(8148U);
    msg.setDestinationEntity(138U);
    msg.timeout = 17116U;
    msg.lat = 0.239964857018;
    msg.lon = 0.0539263410307;
    msg.z = 0.0242144801854;
    msg.z_units = 77U;
    msg.pitch = 0.580470461984;
    msg.amplitude = 0.458881539131;
    msg.duration = 9765U;
    msg.speed = 0.228758361413;
    msg.speed_units = 2U;
    msg.radius = 0.414457790671;
    msg.direction = 243U;
    msg.custom.assign("PCPJNIBGBXTULOZKRLPQIZXOAOYTPEQVFS");

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
    msg.setTimeStamp(0.740000624977);
    msg.setSource(7408U);
    msg.setSourceEntity(248U);
    msg.setDestination(54797U);
    msg.setDestinationEntity(136U);
    msg.timeout = 5771U;
    msg.lat = 0.483256629452;
    msg.lon = 0.944201532393;
    msg.z = 0.899788155581;
    msg.z_units = 201U;
    msg.pitch = 0.306257278216;
    msg.amplitude = 0.934723723892;
    msg.duration = 23141U;
    msg.speed = 0.427949025985;
    msg.speed_units = 122U;
    msg.radius = 0.369127289744;
    msg.direction = 215U;
    msg.custom.assign("JGOPDYCEIBGNPITZAOMUONLXNDTFBBGAIVZJCHGZVLDFXCMCGNYEGCLOAERRKPVHGOLQVDORBSHFHERUUHRUWTNQQNIPKBTZFYDENXGIBXXFCMFHLFZXRJKYSGTOAMCQMSKPOJVJC");

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
    msg.setTimeStamp(0.140131127242);
    msg.setSource(50143U);
    msg.setSourceEntity(130U);
    msg.setDestination(10985U);
    msg.setDestinationEntity(138U);
    msg.formation_name.assign("STDPGOZPICSGVGNELLXOCYHSNMZGXGVPNPZKCNINHWQJIQTBQBAETTOVELSZXTIQISPHFMNFDCFFGZEOVRQOASYKHKABEQTRQOZLKMHDYBRDYKAWMHDOJLJHRAJDADXGJNVKAFMEJMCSTXPYXFDAUMUUXXILNCFPREXOODFHOYETKZGWNUWYVLUHUWUBQCRWBGPFZVVSBJWKMDI");
    msg.reference_frame = 191U;
    msg.custom.assign("BFEXPXWAMTAHAFDEXILCHNLGDRCUAJLAIBPIZDOHEFIHDPZSGYRZAJBWOESBLLOAUKHSZZSNSMVVIDOKBBEFHGQCRBJKFCTSLYUNUZMQGCDYKUQWYRVGEKVPOMNRVJMQGXHETOTCKUEXSAPPFYATRBGXSVNGQPCNDRJSQWMLIOANPL");

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
    msg.setTimeStamp(0.539056200553);
    msg.setSource(6940U);
    msg.setSourceEntity(252U);
    msg.setDestination(64873U);
    msg.setDestinationEntity(180U);
    msg.formation_name.assign("GMCZUWZJRUHDTOAWKLVFMWYBPWYNFCAJEHGOEAHIPBPQOAAAQNVBYFVIYRJTIHOVQBMTUWBRHQBLLZEVHNIYXVUDVWODGKYPIIISPKCNKMWCDXTMWLYNKZENEGLZFMTVDKQTCELMXZFVPJLXTQKMSSFOKLSGWJJPBDATCJBRDXPRUPFVSOXLEFYWOQHNUYZBXNURRURSMCEAGRECCSIZDOJDBUJLUTQIRGQKAQGS");
    msg.reference_frame = 90U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 41635U;
    tmp_msg_0.off_x = 0.386218659396;
    tmp_msg_0.off_y = 0.774499651454;
    tmp_msg_0.off_z = 0.107454009334;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CBCSNVSFDBTAVLZDMVHVMCBMUFJROAXPZZJDUAXBZLRNDHBXPKTBKCFRJPCVMTOQZFPKEWXGUJZHLBPVDQXKVZRQSBNTFLOURIQMYSQGYPKDKYJOWOGPNDQFGIXZYUYLRQEPYUFSUDHOTWXHQHHPAFYRNVMROEOLPGBGELOUWEIVHSYEJNIQVWAUKEFYGQSWEEXGLDTTKGAZIWESUTRNSHMKICJNB");

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
    msg.setTimeStamp(0.312049596476);
    msg.setSource(13408U);
    msg.setSourceEntity(86U);
    msg.setDestination(62611U);
    msg.setDestinationEntity(156U);
    msg.formation_name.assign("GGLGBCVXVQINUMJDOUZUJAGFNKLDKFTHFFOXLLCVTENMIPUUVCAIBSJHRGBXURTVUNPBMNOIWDYPRKCKAIWFXDPWKFCAAOFIJYTNIAQQFKRX");
    msg.reference_frame = 131U;
    msg.custom.assign("GCVMFWOPEBIEHEDPLBBKJXSQVNANLKVYMDBOPVJZYWRFMITHCEZSNAPFFHHZCEKVAZLYMXVFQJZKXQQWMETAOCGJCGZYPJURLBTYGHFUXHSXCLAMVMKSGDIDKTWBFDHSDPXPRQJOUQYTWNLVIORSGNXAPWNOWIWGDQVSOAVNHUMOUCREITKMUKJGLLIHAAEZYSTODC");

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
    msg.setTimeStamp(0.496527755241);
    msg.setSource(59782U);
    msg.setSourceEntity(249U);
    msg.setDestination(52083U);
    msg.setDestinationEntity(179U);
    msg.group_name.assign("SPLPTXHPOTTZGRGIMGHSSDGUTYMWCLDYKIAKSPMPZXLULGVSTYEAMLQAOZZYKRUPUOWBVJERYMKYRRIOQANEBAKSBFEAJWJLJWNFSBROMJWGTLEFWHNZLAN");
    msg.formation_name.assign("EHCBHYZUFHCNXEIKSFLKRICMTLQKLILDGVJJINYVBORTXPZDVPMLAUTMMUXWMRDHDFZZGZOHJIIDXTIEXIO");
    msg.plan_id.assign("ZYCLEBDLZHBILMINZEGTLENPBBWYTEUVMNLRFXVCQUWSYRJDKSUIMKUXYABUIJMFCIXWZKBFHKWDAQPJFGLHYZAGGQVSWDFOKVDORDSQXEFRUCJWRQMJOADRWBZRLZUKKTPEOSSVGLIACPCTFSBFWMMKCWCVZIMTCKXHEDPIEROPPGJLHVHQENDQEXTVXQAUNUOXXNX");
    msg.description.assign("CHCVEOTHMKKHSDCZFJ");
    msg.leader_speed = 0.680665298144;
    msg.leader_bank_lim = 0.262089162917;
    msg.pos_sim_err_lim = 0.246983268691;
    msg.pos_sim_err_wrn = 0.653206544808;
    msg.pos_sim_err_timeout = 62925U;
    msg.converg_max = 0.445714434248;
    msg.converg_timeout = 7857U;
    msg.comms_timeout = 27635U;
    msg.turb_lim = 0.742774665173;
    msg.custom.assign("HOKNHDYGPOEIZQVDMOTRLZMDHSOQFIBQRKAFTRCANB");

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
    msg.setTimeStamp(0.749289879091);
    msg.setSource(12375U);
    msg.setSourceEntity(217U);
    msg.setDestination(15490U);
    msg.setDestinationEntity(113U);
    msg.group_name.assign("JYMCZLICQFNEIVPMMHWPSXZWQWEGKNFMFULZLROHEQUSDFUISVUGKKXVZFKUXOOBCQVGOUWQOHMZVXPNNGHIQQFAAZYJYZHNZCIBOGTALNRMDER");
    msg.formation_name.assign("IBIZQXTVCBTOBVDOHLCOMCFKCBSAJOHKMANGRLGZZBEQSOGHXTHTCVDYQJUMUWUPRKCAVYGDUPZRIEJLLYNIRZKAUETJYEYKNNEJWCPZEFJILXFNHTWDEYLWBJMDVLYXPXJSJFLWQPHORXQTVUAHKFAGASNPJSQFKCZNIQWPLBWUSGXZYBRSKMYWF");
    msg.plan_id.assign("JJBAIRPFTUVLRYTEJOMULKCMYCCPDJLBMVOYWRDAQDNIUKEXTUSSAPHMZGCBQGENYILCRQRYLJWWYBOEJQRRGREKOEUWDIVSVRXOBJPBGWSZKVUWUNAHKGYDFCUPOSIMCVXGYHWAODYVDQFPONLATNMARQGNXPOLQWPJCSZIDLFFHSPSBFXNIIGTCXPMHZGXFKHMXIATZENHQ");
    msg.description.assign("YIAENIDYCBCQSEUXBSGUTSXUBOCXQHPCMGSUHIMRFUYAFSMXPSWBBCGHHMEOKXEGHCNNNKTOUXYVENRVCFWPQSSVNDJQAODEFLGBLZAWWOWZPAWZQXIMTCJTLMKYPOKRJJ");
    msg.leader_speed = 0.317586420409;
    msg.leader_bank_lim = 0.786695700855;
    msg.pos_sim_err_lim = 0.00583309131087;
    msg.pos_sim_err_wrn = 0.721377202214;
    msg.pos_sim_err_timeout = 51275U;
    msg.converg_max = 0.725871218549;
    msg.converg_timeout = 38758U;
    msg.comms_timeout = 26225U;
    msg.turb_lim = 0.867219702317;
    msg.custom.assign("ZWILPABXFKMGVKJTZGAQMIYBDWHMOMPUPTOGJJLUIYVBUEGLKNJLCCFR");

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
    msg.setTimeStamp(0.270487503448);
    msg.setSource(51348U);
    msg.setSourceEntity(68U);
    msg.setDestination(50788U);
    msg.setDestinationEntity(240U);
    msg.group_name.assign("AYNYCQTSJFBOPYRLNFONXQOOVTZ");
    msg.formation_name.assign("TBMHSNVUJDKPINOLMWJUBVXRFRZUECGPEAPDXEGUKGZOSYRNVFMBAJWBORFKPOXBIDQSUGOSNNKTKZBYYZSDVRJKFREJZLEFZXQVIAYTMIUVGYLJVLLUPHIAHITMEMPSIDDYJWXNVCOLDQGQNNXAHFKKHHOCQUQEKCXPFYTHHYCSYQOVQJNZOGMUOSLDACWPKCMVWSXAILECHGNCWGBWZTZWIMTZTBLJ");
    msg.plan_id.assign("FASEREJTMLPOSZQVINXWGVMTWQAOSRMGMTEYQWUSUIUPFMBCJXCNYSFNTALUNDUOACPJGDWLBWRDQYZMQIGELXUWHKBSHIJGWXFCKKVADQAPOKPVRECQGZKMAJPDYAP");
    msg.description.assign("CGSDLPTSIUYLYPTCGUKPROQFFMJAZSZTAEGDVLOFSNXQXIXIAWMLVKVYTLVGMCQEFUIQWODPKHKCHWZDMNBKTAJODHWPTMNXGEYNXXZJJOVBEAZWWOAPWKTUUAKLEGLQWNECCKEHFTHHBNPNLVYMDBXNPZANSRRSAOEIRKISQSIRZDQMGOTILURVQITJIZGJ");
    msg.leader_speed = 0.528133894554;
    msg.leader_bank_lim = 0.676078326369;
    msg.pos_sim_err_lim = 0.842380894217;
    msg.pos_sim_err_wrn = 0.751105626068;
    msg.pos_sim_err_timeout = 50700U;
    msg.converg_max = 0.547295833456;
    msg.converg_timeout = 61672U;
    msg.comms_timeout = 33931U;
    msg.turb_lim = 0.814488026093;
    msg.custom.assign("NMVGHVSUADYLXVBXZVOHCRNRMVSMSSWTHNNTGQVOPKDIMEGXFXRGTEDKFWTMHHRRJCZOWOPXLZKBVUYLIGKLDQRFULDJJGSBCVGIQTNOILIKYLDNTEPCJYQHBLYQJZSEOZENYRHNDPFPJCCKOMZBXZJWMOBAAMPXHCBTWUIXWTFDTDAXEBCHIUUIISEQUWYHFNSCVPL");

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
    msg.setTimeStamp(0.909907875608);
    msg.setSource(57174U);
    msg.setSourceEntity(2U);
    msg.setDestination(32013U);
    msg.setDestinationEntity(86U);
    msg.control_src = 57987U;
    msg.control_ent = 161U;
    msg.timeout = 0.235333107077;
    msg.loiter_radius = 0.312063642646;
    msg.altitude_interval = 0.499286796168;

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
    msg.setTimeStamp(0.102008077241);
    msg.setSource(21870U);
    msg.setSourceEntity(122U);
    msg.setDestination(61596U);
    msg.setDestinationEntity(129U);
    msg.control_src = 35356U;
    msg.control_ent = 168U;
    msg.timeout = 0.259931402086;
    msg.loiter_radius = 0.215752147586;
    msg.altitude_interval = 0.0571458035945;

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
    msg.setTimeStamp(0.0121412330063);
    msg.setSource(18929U);
    msg.setSourceEntity(231U);
    msg.setDestination(7418U);
    msg.setDestinationEntity(137U);
    msg.control_src = 51889U;
    msg.control_ent = 122U;
    msg.timeout = 0.424249644832;
    msg.loiter_radius = 0.159343368361;
    msg.altitude_interval = 0.141697781306;

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
    msg.setTimeStamp(0.654902610176);
    msg.setSource(26286U);
    msg.setSourceEntity(234U);
    msg.setDestination(20906U);
    msg.setDestinationEntity(85U);
    msg.flags = 42U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.207407882308;
    tmp_msg_0.speed_units = 72U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.743359911255;
    tmp_msg_1.z_units = 72U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0095391958486;
    msg.lon = 0.422101347198;
    msg.radius = 0.538621382542;

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
    msg.setTimeStamp(0.704318933914);
    msg.setSource(12347U);
    msg.setSourceEntity(140U);
    msg.setDestination(61839U);
    msg.setDestinationEntity(30U);
    msg.flags = 142U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.475704124531;
    tmp_msg_0.speed_units = 162U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.472661012485;
    tmp_msg_1.z_units = 163U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.870033804458;
    msg.lon = 0.0117079256224;
    msg.radius = 0.240623067047;

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
    msg.setTimeStamp(0.96243757046);
    msg.setSource(63006U);
    msg.setSourceEntity(252U);
    msg.setDestination(18080U);
    msg.setDestinationEntity(133U);
    msg.flags = 159U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0438735438849;
    tmp_msg_0.speed_units = 152U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.261734238627;
    tmp_msg_1.z_units = 101U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.00607789800815;
    msg.lon = 0.206518274717;
    msg.radius = 0.772311051838;

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
    msg.setTimeStamp(0.0149330916554);
    msg.setSource(7306U);
    msg.setSourceEntity(40U);
    msg.setDestination(22922U);
    msg.setDestinationEntity(41U);
    msg.control_src = 54856U;
    msg.control_ent = 202U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 134U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.920406025354;
    tmp_tmp_msg_0_0.speed_units = 225U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0507537272549;
    tmp_tmp_msg_0_1.z_units = 90U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.965826047476;
    tmp_msg_0.lon = 0.947708284901;
    tmp_msg_0.radius = 0.280288528155;
    msg.reference.set(tmp_msg_0);
    msg.state = 236U;
    msg.proximity = 212U;

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
    msg.setTimeStamp(0.33632862686);
    msg.setSource(12305U);
    msg.setSourceEntity(87U);
    msg.setDestination(8911U);
    msg.setDestinationEntity(4U);
    msg.control_src = 45981U;
    msg.control_ent = 67U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 180U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.540089894583;
    tmp_tmp_msg_0_0.speed_units = 99U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.610880304576;
    tmp_tmp_msg_0_1.z_units = 22U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.900946721226;
    tmp_msg_0.lon = 0.233505742594;
    tmp_msg_0.radius = 0.0218306066394;
    msg.reference.set(tmp_msg_0);
    msg.state = 149U;
    msg.proximity = 232U;

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
    msg.setTimeStamp(0.575533150978);
    msg.setSource(27266U);
    msg.setSourceEntity(86U);
    msg.setDestination(45632U);
    msg.setDestinationEntity(169U);
    msg.control_src = 38480U;
    msg.control_ent = 29U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 161U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.13805115216;
    tmp_tmp_msg_0_0.speed_units = 146U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.26261078219;
    tmp_tmp_msg_0_1.z_units = 165U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.406312968551;
    tmp_msg_0.lon = 0.379200118887;
    tmp_msg_0.radius = 0.600504287599;
    msg.reference.set(tmp_msg_0);
    msg.state = 239U;
    msg.proximity = 128U;

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
    msg.setTimeStamp(0.803007699817);
    msg.setSource(13489U);
    msg.setSourceEntity(214U);
    msg.setDestination(31143U);
    msg.setDestinationEntity(37U);
    msg.ax_cmd = 0.214132664907;
    msg.ay_cmd = 0.110966699262;
    msg.az_cmd = 0.691835494665;
    msg.ax_des = 0.793973046969;
    msg.ay_des = 0.54303550985;
    msg.az_des = 0.594529453744;
    msg.virt_err_x = 0.347329144463;
    msg.virt_err_y = 0.000822216629381;
    msg.virt_err_z = 0.810918717598;
    msg.surf_fdbk_x = 0.807705859251;
    msg.surf_fdbk_y = 0.605455799857;
    msg.surf_fdbk_z = 0.172632461652;
    msg.surf_unkn_x = 0.684428669282;
    msg.surf_unkn_y = 0.156491369244;
    msg.surf_unkn_z = 0.155632191159;
    msg.ss_x = 0.0686233042408;
    msg.ss_y = 0.833842091528;
    msg.ss_z = 0.253333966046;

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
    msg.setTimeStamp(0.390202333071);
    msg.setSource(52657U);
    msg.setSourceEntity(42U);
    msg.setDestination(53277U);
    msg.setDestinationEntity(242U);
    msg.ax_cmd = 0.741151954198;
    msg.ay_cmd = 0.933588451117;
    msg.az_cmd = 0.102391712142;
    msg.ax_des = 0.238678496209;
    msg.ay_des = 0.931005258606;
    msg.az_des = 0.527202369539;
    msg.virt_err_x = 0.0247713879768;
    msg.virt_err_y = 0.122391932893;
    msg.virt_err_z = 0.32313814799;
    msg.surf_fdbk_x = 0.80765239659;
    msg.surf_fdbk_y = 0.515208336992;
    msg.surf_fdbk_z = 0.607574795837;
    msg.surf_unkn_x = 0.363262527376;
    msg.surf_unkn_y = 0.330214562632;
    msg.surf_unkn_z = 0.812885307334;
    msg.ss_x = 0.22919663524;
    msg.ss_y = 0.00908932360495;
    msg.ss_z = 0.386751363524;

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
    msg.setTimeStamp(0.458599360761);
    msg.setSource(30399U);
    msg.setSourceEntity(68U);
    msg.setDestination(58344U);
    msg.setDestinationEntity(179U);
    msg.ax_cmd = 0.204123557729;
    msg.ay_cmd = 0.888565997713;
    msg.az_cmd = 0.84756130487;
    msg.ax_des = 0.997082159972;
    msg.ay_des = 0.867009282958;
    msg.az_des = 0.0469226666283;
    msg.virt_err_x = 0.449517499546;
    msg.virt_err_y = 0.585539278654;
    msg.virt_err_z = 0.56950439198;
    msg.surf_fdbk_x = 0.934322190763;
    msg.surf_fdbk_y = 0.153400032167;
    msg.surf_fdbk_z = 0.483417725866;
    msg.surf_unkn_x = 0.378699441862;
    msg.surf_unkn_y = 0.0190171676665;
    msg.surf_unkn_z = 0.509916055548;
    msg.ss_x = 0.552249735862;
    msg.ss_y = 0.0579337297847;
    msg.ss_z = 0.756650162828;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("HYIKVCQUKDWOSKEPEHSJXLF");
    tmp_msg_0.dist = 0.607407427099;
    tmp_msg_0.err = 0.610411545784;
    tmp_msg_0.ctrl_imp = 0.426098298921;
    tmp_msg_0.rel_dir_x = 0.228672168879;
    tmp_msg_0.rel_dir_y = 0.736683209005;
    tmp_msg_0.rel_dir_z = 0.188793803574;
    tmp_msg_0.err_x = 0.667608591769;
    tmp_msg_0.err_y = 0.750861081932;
    tmp_msg_0.err_z = 0.00358920935031;
    tmp_msg_0.rf_err_x = 0.737911367103;
    tmp_msg_0.rf_err_y = 0.245187795563;
    tmp_msg_0.rf_err_z = 0.592644279308;
    tmp_msg_0.rf_err_vx = 0.766857924727;
    tmp_msg_0.rf_err_vy = 0.916491364614;
    tmp_msg_0.rf_err_vz = 0.614463706416;
    tmp_msg_0.ss_x = 0.518197902044;
    tmp_msg_0.ss_y = 0.806700203059;
    tmp_msg_0.ss_z = 0.349550442014;
    tmp_msg_0.virt_err_x = 0.73579107303;
    tmp_msg_0.virt_err_y = 0.203700026382;
    tmp_msg_0.virt_err_z = 0.520624058238;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.122418390074);
    msg.setSource(19207U);
    msg.setSourceEntity(13U);
    msg.setDestination(37961U);
    msg.setDestinationEntity(197U);
    msg.s_id.assign("SOBIADFVMVTOFRBSXPJDSVJWAJQASIQGBOYKQIZQQSUDMWMRHSUZKNQPMFSRFDDOQAYYXSQTDCRGZMCUZLRIUAONXUWCZNTKBLFWKTLVVKYTWEHKUGJFBUGCFEEMLJYKCPYBTVRJXEKMGSNLWPXEHYBATYBEFOSGLVNTMIGBNLEJCUXDEPIYDAQDLHHWNAHJOPNJCGFNVKHPQWROIAHUVCPOKIHMPTMZXVUCNRHCAOXGZXLIXGWZRLZ");
    msg.dist = 0.570574621551;
    msg.err = 0.885031543748;
    msg.ctrl_imp = 0.395131442889;
    msg.rel_dir_x = 0.859613681863;
    msg.rel_dir_y = 0.122856938461;
    msg.rel_dir_z = 0.363724468849;
    msg.err_x = 0.234691643474;
    msg.err_y = 0.699118813102;
    msg.err_z = 0.613849962901;
    msg.rf_err_x = 0.18031159714;
    msg.rf_err_y = 0.816423044123;
    msg.rf_err_z = 0.642801086428;
    msg.rf_err_vx = 0.480240061037;
    msg.rf_err_vy = 0.511689481681;
    msg.rf_err_vz = 0.807811724197;
    msg.ss_x = 0.937315353701;
    msg.ss_y = 0.423794077009;
    msg.ss_z = 0.715257039995;
    msg.virt_err_x = 0.998255900423;
    msg.virt_err_y = 0.45319699454;
    msg.virt_err_z = 0.395630981774;

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
    msg.setTimeStamp(0.284179361366);
    msg.setSource(24663U);
    msg.setSourceEntity(99U);
    msg.setDestination(37675U);
    msg.setDestinationEntity(210U);
    msg.s_id.assign("HHDVXLNSTHKTSZSCTIOAVILKZLPUOEJSGBBXHKWPSCQAUAIGNTRVINBWGGJIXWCZUHEUHMJTXMZVCONETKRHWOGEBQGQYMDWROWLRWFOAEHIWASIGDYLOMKCOJDAPMAZFXPNAFVQYVIMTKJEDXZYXCJETJYRCSL");
    msg.dist = 0.224247804633;
    msg.err = 0.763262572498;
    msg.ctrl_imp = 0.313191224376;
    msg.rel_dir_x = 0.662297821574;
    msg.rel_dir_y = 0.697039653009;
    msg.rel_dir_z = 0.284933781977;
    msg.err_x = 0.955035146077;
    msg.err_y = 0.102236506585;
    msg.err_z = 0.245479289963;
    msg.rf_err_x = 0.058765237876;
    msg.rf_err_y = 0.207193798494;
    msg.rf_err_z = 0.226611347158;
    msg.rf_err_vx = 0.505769091304;
    msg.rf_err_vy = 0.137982479977;
    msg.rf_err_vz = 0.275597216086;
    msg.ss_x = 0.949938233755;
    msg.ss_y = 0.1409264509;
    msg.ss_z = 0.0800902365633;
    msg.virt_err_x = 0.467432257376;
    msg.virt_err_y = 0.0391323790556;
    msg.virt_err_z = 0.356311672151;

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
    msg.setTimeStamp(0.04860448583);
    msg.setSource(35771U);
    msg.setSourceEntity(61U);
    msg.setDestination(22224U);
    msg.setDestinationEntity(123U);
    msg.s_id.assign("IDZQCUUBCQQOEIS");
    msg.dist = 0.492024526716;
    msg.err = 0.603876052335;
    msg.ctrl_imp = 0.981622497592;
    msg.rel_dir_x = 0.583312965784;
    msg.rel_dir_y = 0.47251637007;
    msg.rel_dir_z = 0.847364739466;
    msg.err_x = 0.945281731231;
    msg.err_y = 0.790440754511;
    msg.err_z = 0.953702564554;
    msg.rf_err_x = 0.288351165637;
    msg.rf_err_y = 0.0158203294936;
    msg.rf_err_z = 0.358837383785;
    msg.rf_err_vx = 0.844598557724;
    msg.rf_err_vy = 0.879210395472;
    msg.rf_err_vz = 0.150326989382;
    msg.ss_x = 0.106874349583;
    msg.ss_y = 0.682659266538;
    msg.ss_z = 0.363937565309;
    msg.virt_err_x = 0.372187224781;
    msg.virt_err_y = 0.358601716066;
    msg.virt_err_z = 0.948677221076;

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
    msg.setTimeStamp(0.228735562388);
    msg.setSource(10790U);
    msg.setSourceEntity(228U);
    msg.setDestination(43615U);
    msg.setDestinationEntity(25U);
    msg.timeout = 24833U;
    msg.rpm = 0.112474238473;
    msg.direction = 181U;
    msg.custom.assign("PBVQOIYBZFUEZVNJTIXEF");

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
    msg.setTimeStamp(0.77619021714);
    msg.setSource(28927U);
    msg.setSourceEntity(171U);
    msg.setDestination(59197U);
    msg.setDestinationEntity(221U);
    msg.timeout = 27398U;
    msg.rpm = 0.171704070911;
    msg.direction = 57U;
    msg.custom.assign("TMEIWCWEDHLQXNTJLCQDFGKQFAFVYBSACMIACYVUFIMZGVJZCQPQTZSVPEGDCUJXPKHBJJLLGUBBGUWINXGCKBNQJOBHJZYBHUGXYAMKKRDQJHNAU");

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
    msg.setTimeStamp(0.78750024645);
    msg.setSource(27764U);
    msg.setSourceEntity(26U);
    msg.setDestination(34580U);
    msg.setDestinationEntity(42U);
    msg.timeout = 5955U;
    msg.rpm = 0.529880171722;
    msg.direction = 72U;
    msg.custom.assign("IBNPVBLZPNNVYOWLYZCGMPLIJOPZAEVRMXREHAGFXYQSEYZTOCVMAUMJJGD");

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
    msg.setTimeStamp(0.877114578636);
    msg.setSource(28175U);
    msg.setSourceEntity(69U);
    msg.setDestination(59575U);
    msg.setDestinationEntity(161U);
    msg.formation_name.assign("CYTESLPKMEIEJTUXFBICSERMEXIBCWSINNTXLLUROXLFVUFZTYSNGUPJAUNYCTLZNVRKFCFTCPZJSLEPCGKKWZQDOMHADWMOPNBWUFDVVXILOQRIPGFIZKVSZRDRWSPKEUKWXZLB");
    msg.type = 110U;
    msg.op = 198U;
    msg.group_name.assign("ZFNYVWEZZQEXNYQVKAZIHSWGTALBZJSNNCHJWBMDLRFULEHKAWWSSWPKXPFUOPATGHHGJCBKPOQOCYYPQGGVCVNFQMQVMUOUKOYJTNXFWSIRQVF");
    msg.plan_id.assign("JQFGKRPZXMJPWYGWFSZACFIABXKEBSZIUQWRQNKNMLEUGWPVLFAFTHAMVCQAGXVPCIOKQMNEHBNLTJDGLTLALTBKOVYRYCFRJHVZYILBXOUSIKEFRHZEOMVZDYEXWPWUNXCSYJWIPGHCWDNMDPOZOUUPAGEOVYTCVGZRANJKHCEXARQQCDAWSOHSLIIOYDJUFJIZDGRXCETDXOKDJPUSSBDYLQHTQSFHIKKXZMBQLUB");
    msg.description.assign("ASBYODLCLIEMYWLBMCRZRYHHZTXHYDLKFVOSLTNKT");
    msg.reference_frame = 85U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55185U;
    tmp_msg_0.off_x = 0.526345299229;
    tmp_msg_0.off_y = 0.96361802121;
    tmp_msg_0.off_z = 0.0666458624158;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.114107366758;
    msg.leader_speed_min = 0.0883345782666;
    msg.leader_speed_max = 0.00756910779347;
    msg.leader_alt_min = 0.617027996142;
    msg.leader_alt_max = 0.320505147017;
    msg.pos_sim_err_lim = 0.315452238885;
    msg.pos_sim_err_wrn = 0.992765220722;
    msg.pos_sim_err_timeout = 24921U;
    msg.converg_max = 0.000617405550005;
    msg.converg_timeout = 35350U;
    msg.comms_timeout = 61100U;
    msg.turb_lim = 0.315181095256;
    msg.custom.assign("ROIUQZCSYLRSWQHGUDABBMJTELUOYALVEZBFZMUTTAMBENCMUKKATEDYLSKNNQVXPQKUCOHENAFPHUMLMOHRHSKDFQILVDSWXBFIJVUKWJICGFIMRMEVFJVQRXOJUNTNDEBLDPWYEHXWWYLCSQIGRXQQYJHGJOCGPOSTRZDXGTWTGNFCZXRYXOKZMIAUZAIJXFKPBPCPYH");

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
    msg.setTimeStamp(0.543315501317);
    msg.setSource(47988U);
    msg.setSourceEntity(25U);
    msg.setDestination(51337U);
    msg.setDestinationEntity(109U);
    msg.formation_name.assign("VAZZSUJFDCOMWATEMILXLPFWPXDLRXESCMXUUCYGKNPVIUXUPKKLUTZIKQMTNCDBUNOELDMPIJODQCGFNWZMBXAOGOQPGQACMQGKPVRFRBQNHUVMO");
    msg.type = 244U;
    msg.op = 32U;
    msg.group_name.assign("XMYXOCBBBQMZAXLZMPKCKPBVRDDCONSARVAIDSMSMLMHUWTAJXYWDFZAKHFHUNWCMGHAPEIUVRPXZTEFJVRAFPDOFACSKTJPWPIH");
    msg.plan_id.assign("BAJZZPOECYMJPBTHAROZRYTAIBHEKWHLBDUAGNBCUPTNYMBOGTHUZ");
    msg.description.assign("AVPQZORFPVBGFSCSAKNEOEIGQDRNPXASECDAPQOYCLIDKXOXOIABHCUELHCPHCLWWIBHZPLWKJVJVATZZZAUEFGWNSHODWYUNGNFGEAYXOYRRMFTLLRXTNQZMYPJZMPKTSFZQNGDVVHCBMJMWBLSTZILVJKVUIKC");
    msg.reference_frame = 148U;
    msg.leader_bank_lim = 0.742130543574;
    msg.leader_speed_min = 0.935869397903;
    msg.leader_speed_max = 0.678319293061;
    msg.leader_alt_min = 0.345561462235;
    msg.leader_alt_max = 0.467176522669;
    msg.pos_sim_err_lim = 0.991624285526;
    msg.pos_sim_err_wrn = 0.405515174157;
    msg.pos_sim_err_timeout = 42162U;
    msg.converg_max = 0.209587842841;
    msg.converg_timeout = 53232U;
    msg.comms_timeout = 51772U;
    msg.turb_lim = 0.213025892807;
    msg.custom.assign("GMHMDMVHFTCSUVIUXPDMAQSUAWZUDDCZOVJBLYJLGALYQGHFJXOLISDXLTHEPI");

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
    msg.setTimeStamp(0.53318969197);
    msg.setSource(37988U);
    msg.setSourceEntity(26U);
    msg.setDestination(5292U);
    msg.setDestinationEntity(87U);
    msg.formation_name.assign("KRVZSHNTCZYAQHQXRGOXEWKEHADM");
    msg.type = 71U;
    msg.op = 130U;
    msg.group_name.assign("HKUWSHVDKFK");
    msg.plan_id.assign("TAYSTSNSHBQXQDPKJOOUODWPIWEHNJEABOINUYJZZWNAXIWDVCXVJEEISAJQGDVRHKDMLXRIPKUMMYFGQQNPQVAYMRHYMCEOXSZGVIFLPTQKDSWHEUGGXUJZDYRKNBSITBAHBVNNTYXHTBGTCODSCCQPETBLLSZKEYNYCDRFTOVJRZPBWVCGXUFEPLSQKIXGUIBLLMAHFMJUOZHFUWJVWOZKLAFAFGZLLPC");
    msg.description.assign("LFGQXIEQITAVUQRSUONWRDFUCPWPTLGMPKCXDZMJOLJRDBFBZAYQKBWZHVCAKODTCELPOKRJAZVRMYNDIUTAAOGHSMGRUDOMKECKPJYQEZZECKRDXBTMRONXYNSSHXSVDHNEVGOCHUNBIJLACNGUYFWY");
    msg.reference_frame = 7U;
    msg.leader_bank_lim = 0.978881861493;
    msg.leader_speed_min = 0.949170362511;
    msg.leader_speed_max = 0.800263527358;
    msg.leader_alt_min = 0.577048337174;
    msg.leader_alt_max = 0.178271205329;
    msg.pos_sim_err_lim = 0.788927603014;
    msg.pos_sim_err_wrn = 0.763074206966;
    msg.pos_sim_err_timeout = 17947U;
    msg.converg_max = 0.819479933981;
    msg.converg_timeout = 45215U;
    msg.comms_timeout = 10052U;
    msg.turb_lim = 0.517998854334;
    msg.custom.assign("WQJNUCGKCOFQLPPJXLWGSYK");

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
    msg.setTimeStamp(0.353620247716);
    msg.setSource(24102U);
    msg.setSourceEntity(99U);
    msg.setDestination(38930U);
    msg.setDestinationEntity(251U);
    msg.timeout = 43258U;
    msg.lat = 0.461835840729;
    msg.lon = 0.504657483802;
    msg.z = 0.236138693383;
    msg.z_units = 117U;
    msg.speed = 0.0488313145521;
    msg.speed_units = 151U;
    msg.custom.assign("HJUBPNVZWJCBTETGZXMJQAYHHXWRVBRANRRRAUROLXMSCKNTJIWFPPETZDTOSALQBXSOLIWPALAZVYDZUGTFH");

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
    msg.setTimeStamp(0.222595355402);
    msg.setSource(52889U);
    msg.setSourceEntity(246U);
    msg.setDestination(45176U);
    msg.setDestinationEntity(142U);
    msg.timeout = 63847U;
    msg.lat = 0.546748648603;
    msg.lon = 0.0405157828061;
    msg.z = 0.907533533926;
    msg.z_units = 218U;
    msg.speed = 0.867406766828;
    msg.speed_units = 19U;
    msg.custom.assign("QOKAHYTEXKTBORIYGUBVXFQLWXIZNOJYQSZTDAXXLWRVUWFSOMHBXNIAQQYADTULLPZUYTMSEEDGEFFDQTCCHFAKMKUCBNIAZSYUVRRJCPTNZHMOHFOHJRSPCREXDKVPNEPSEIF");

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
    msg.setTimeStamp(0.150086297027);
    msg.setSource(58020U);
    msg.setSourceEntity(132U);
    msg.setDestination(49310U);
    msg.setDestinationEntity(114U);
    msg.timeout = 61000U;
    msg.lat = 0.801265031696;
    msg.lon = 0.817240057976;
    msg.z = 0.194841263772;
    msg.z_units = 83U;
    msg.speed = 0.99523992709;
    msg.speed_units = 192U;
    msg.custom.assign("GGHHZMMBEWLACJTQWWOOAZIYYOATZKLPPCDHNCAJBYDEUQGSMYQEXFBNFBZCOGYVVPFVDRFZLGRTJWAMONKXVKPWKTTNSXTPRXAVUUBRWCKRSXSJIIEO");

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
    msg.setTimeStamp(0.90568969301);
    msg.setSource(45271U);
    msg.setSourceEntity(247U);
    msg.setDestination(22562U);
    msg.setDestinationEntity(206U);
    msg.timeout = 36301U;
    msg.lat = 0.476339680903;
    msg.lon = 0.218025406955;
    msg.z = 0.0855775415269;
    msg.z_units = 237U;
    msg.speed = 0.872205307796;
    msg.speed_units = 6U;
    msg.custom.assign("SRDQFPISYMUIOFHQJGJRDXVRVCAURGHVUETGFYCYKZBCGDEHZCIXSPAAAQNXQNUORLOCKVKPGRWTXOFLAIGZXJOZBADYYNJHOSVJBLIKXOMYRWREOBYSSMTEYMACWUBTTUKZDPZYKUQXFWIKTFCZMBVWDPFSYPHEWACDQJHUTAPVLQUWJBJAENFIIGMSLONRNEQGEJSNUEMLTZRFNZBKBXKIWEQMFMNLLPIDLHVCGMJLHDPHZWHTCWTNO");

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
    msg.setTimeStamp(0.329047190382);
    msg.setSource(46617U);
    msg.setSourceEntity(46U);
    msg.setDestination(20301U);
    msg.setDestinationEntity(181U);
    msg.timeout = 61711U;
    msg.lat = 0.562421468399;
    msg.lon = 0.164446420687;
    msg.z = 0.118941421815;
    msg.z_units = 201U;
    msg.speed = 0.803720768016;
    msg.speed_units = 59U;
    msg.custom.assign("ZABEYFNHFWKLVQDZQW");

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
    msg.setTimeStamp(0.0245288272875);
    msg.setSource(25991U);
    msg.setSourceEntity(55U);
    msg.setDestination(29050U);
    msg.setDestinationEntity(68U);
    msg.timeout = 12531U;
    msg.lat = 0.651825935937;
    msg.lon = 0.946683972146;
    msg.z = 0.200861749548;
    msg.z_units = 41U;
    msg.speed = 0.53306641753;
    msg.speed_units = 178U;
    msg.custom.assign("UZJHXWLXLLIPEOYYAAHCDPEMSPOHQYQBLRKYXPTJYKKVLCAMVITBSWMNJVDLWUJRBCZZWHWMVMMGHZKSUNADLLBUOXNSNLAAUATKJBIORRNSBWGYDSN");

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
    msg.setTimeStamp(0.507430805645);
    msg.setSource(44304U);
    msg.setSourceEntity(84U);
    msg.setDestination(65413U);
    msg.setDestinationEntity(99U);
    msg.arrival_time = 0.969897367133;
    msg.lat = 0.492330462772;
    msg.lon = 0.716379945897;
    msg.z = 0.079317337562;
    msg.z_units = 192U;
    msg.travel_z = 0.134693145769;
    msg.travel_z_units = 248U;
    msg.delayed = 218U;

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
    msg.setTimeStamp(0.624953684244);
    msg.setSource(58765U);
    msg.setSourceEntity(254U);
    msg.setDestination(61098U);
    msg.setDestinationEntity(179U);
    msg.arrival_time = 0.149918899906;
    msg.lat = 0.829048312227;
    msg.lon = 0.507405171396;
    msg.z = 0.787835077037;
    msg.z_units = 30U;
    msg.travel_z = 0.0839615186666;
    msg.travel_z_units = 87U;
    msg.delayed = 133U;

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
    msg.setTimeStamp(0.881264077868);
    msg.setSource(20722U);
    msg.setSourceEntity(115U);
    msg.setDestination(31918U);
    msg.setDestinationEntity(135U);
    msg.arrival_time = 0.294784152686;
    msg.lat = 0.245879424741;
    msg.lon = 0.797586955777;
    msg.z = 0.20813884121;
    msg.z_units = 53U;
    msg.travel_z = 0.195102237255;
    msg.travel_z_units = 241U;
    msg.delayed = 76U;

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
    msg.setTimeStamp(0.771527927685);
    msg.setSource(30226U);
    msg.setSourceEntity(122U);
    msg.setDestination(25048U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.826497833945;
    msg.lon = 0.440276546348;
    msg.z = 0.271938986003;
    msg.z_units = 163U;
    msg.speed = 0.857073316907;
    msg.speed_units = 220U;
    msg.bearing = 0.853190753314;
    msg.cross_angle = 0.481576673861;
    msg.width = 0.938451635583;
    msg.length = 0.845182655938;
    msg.coff = 103U;
    msg.angaperture = 0.752161069133;
    msg.range = 37283U;
    msg.overlap = 42U;
    msg.flags = 184U;
    msg.custom.assign("ZREQTCVANZNLFKEMDTDBFPNWDSXYKLFYTVKQHEQGRTWIHDSTLIMFQKVQECTKPLOMROLDAUPBDPPMIVCHZTDEFMBXBRJXTVYAFVN");

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
    msg.setTimeStamp(0.741604182221);
    msg.setSource(20432U);
    msg.setSourceEntity(146U);
    msg.setDestination(54709U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.763327707277;
    msg.lon = 0.802054513283;
    msg.z = 0.170906409632;
    msg.z_units = 66U;
    msg.speed = 0.142436614315;
    msg.speed_units = 0U;
    msg.bearing = 0.892801788446;
    msg.cross_angle = 0.270948932396;
    msg.width = 0.159413593375;
    msg.length = 0.145154598057;
    msg.coff = 232U;
    msg.angaperture = 0.655204246914;
    msg.range = 34707U;
    msg.overlap = 206U;
    msg.flags = 63U;
    msg.custom.assign("XQLTCPDHHDQFZSJGJTNKUJHIDMCEHEULKZRVHVEGALWFMFPWSQVIQJBKWISXSRZMJKGFDORJREFLDXZNTKXOMRVMWPSEZIWAZYQCABLZPCHJGUPITUWVZUONZWRBGTBBXNAEFSKGWWNMDBLCEUVBIFYQDIMFCVYJCMRLPGBSTLCQUVTLKPKBTYYPXOGKXOVSOIIBANSMXOHUQGFQOSRCYHOAFDNXJZOTHMLRPXJCANEYNPKI");

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
    msg.setTimeStamp(0.758856205739);
    msg.setSource(38231U);
    msg.setSourceEntity(200U);
    msg.setDestination(42026U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.144035832516;
    msg.lon = 0.736416399809;
    msg.z = 0.817665143452;
    msg.z_units = 10U;
    msg.speed = 0.491956139674;
    msg.speed_units = 210U;
    msg.bearing = 0.700881235217;
    msg.cross_angle = 0.67894516585;
    msg.width = 0.165738582405;
    msg.length = 0.423675538242;
    msg.coff = 214U;
    msg.angaperture = 0.100271371091;
    msg.range = 54359U;
    msg.overlap = 51U;
    msg.flags = 46U;
    msg.custom.assign("GBZROSMZGCLYPEAJDXZDVOLEMQJYOIVBPIGWWAIMMAGAKAQKQLNQATTLUIXTCPANVISUTGNOUNRQVFYXCDWRBHRDULNIRWXMZREDSNAJZXUWJIFDHRFJORQDPBESGESFHUPYXCCCOWPJYLHCZXWTOMEGLVWXKZKTBOVFUGSKYTZVQVBZBBSGPDFMMHFISMQHNTLUVCPEUJ");

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
    msg.setTimeStamp(0.689361019639);
    msg.setSource(36040U);
    msg.setSourceEntity(97U);
    msg.setDestination(26302U);
    msg.setDestinationEntity(18U);
    msg.timeout = 23463U;
    msg.lat = 0.709233362939;
    msg.lon = 0.807078620918;
    msg.z = 0.10142589;
    msg.z_units = 85U;
    msg.speed = 0.0292500008495;
    msg.speed_units = 228U;
    msg.syringe0 = 51U;
    msg.syringe1 = 87U;
    msg.syringe2 = 204U;
    msg.custom.assign("ZAQYMSMJUGHNDWHLBFVYWCZXEZNKGQFZQQONSCAWIZAKDAYPVHSFXJIXOXJHIBGQHLEFTAKQYKYJSJEJFDRFPIZUOQGKLNREWGETOATJGTQWCEOBHHPCYVSDHUINGRVPWPRGMOVIDXRAYS");

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
    msg.setTimeStamp(0.966279629172);
    msg.setSource(44388U);
    msg.setSourceEntity(14U);
    msg.setDestination(56377U);
    msg.setDestinationEntity(37U);
    msg.timeout = 22245U;
    msg.lat = 0.0705927085027;
    msg.lon = 0.928964011346;
    msg.z = 0.921663877299;
    msg.z_units = 27U;
    msg.speed = 0.402762508589;
    msg.speed_units = 220U;
    msg.syringe0 = 189U;
    msg.syringe1 = 178U;
    msg.syringe2 = 19U;
    msg.custom.assign("HFNCZHFOQHPTLZHGZIMHWBKFXRRMJPUWXJURCRHJPSCGNDTEEJMTHGXCXPBNLSEOJEOSMICZSKOQALKUKWYRGEMVDEFXABAIVDPVAYBNRKTQJLGXCNNYIQJVZTQTBMNTWMLTXLPQ");

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
    msg.setTimeStamp(0.0955001550652);
    msg.setSource(4090U);
    msg.setSourceEntity(96U);
    msg.setDestination(36623U);
    msg.setDestinationEntity(96U);
    msg.timeout = 21632U;
    msg.lat = 0.568157216753;
    msg.lon = 0.204456010975;
    msg.z = 0.477656637644;
    msg.z_units = 237U;
    msg.speed = 0.27208771873;
    msg.speed_units = 189U;
    msg.syringe0 = 97U;
    msg.syringe1 = 136U;
    msg.syringe2 = 183U;
    msg.custom.assign("SBMULSKBVLGDUOAKGDTTEQBHBLBSSETOZUGGFLLWZRTNCOJMCSJIEHMAHOWIYIVFMKMKCRKMFFIJCUUMPWQFQVCSPYKTUXEXPKFRXVACFHTVNRIO");

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
    msg.setTimeStamp(0.796778824134);
    msg.setSource(12756U);
    msg.setSourceEntity(87U);
    msg.setDestination(19090U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.388732911341);
    msg.setSource(16544U);
    msg.setSourceEntity(218U);
    msg.setDestination(20332U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.461590826403);
    msg.setSource(17870U);
    msg.setSourceEntity(95U);
    msg.setDestination(56104U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.569509498434);
    msg.setSource(13651U);
    msg.setSourceEntity(244U);
    msg.setDestination(14334U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.784033309227;
    msg.lon = 0.439854506801;
    msg.z = 0.477321239999;
    msg.z_units = 65U;
    msg.speed = 0.0853752623576;
    msg.speed_units = 246U;
    msg.takeoff_pitch = 0.548309209583;
    msg.custom.assign("CJGFJXYOKGFBZCZZKRCCISWKEDPOQZMSVCCMYHWNRTRNFQAMGXUTGEVLSSYWRARNVEMVITDDKIJCCBLPYHYMHLQWXSSWMECHEIGQZOTRQTETDIJWUJXUSIMFXMXPGJWXIFKLYJJGLPHUZ");

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
    msg.setTimeStamp(0.0549957952276);
    msg.setSource(25708U);
    msg.setSourceEntity(2U);
    msg.setDestination(32824U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.958711055843;
    msg.lon = 0.422262858108;
    msg.z = 0.435805709516;
    msg.z_units = 24U;
    msg.speed = 0.73932000474;
    msg.speed_units = 220U;
    msg.takeoff_pitch = 0.406207214171;
    msg.custom.assign("NDTJSRWZFOSGMJARXLNQYLXEKEIMNBYBPUQFVDKXOYSSVSIZBEOYTXKICUFXDJOYGQADVVELRUHHVPTOLEIGWJXRBTLJBCCIANFOTXPQFUWSWKCEUJBPHKONWMSYUKYAHQZDALOWHUWIFDURKRGILVPYCEJTFLRGKNRCAXVXNMTOGFMUVWMDAPZGVZSTSNQOUQLVZHJGLHKCESEQKPTTQCANNPBPMGYBIDDBMJZWRHRXBJAMCAMFH");

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
    msg.setTimeStamp(0.81123639927);
    msg.setSource(63261U);
    msg.setSourceEntity(177U);
    msg.setDestination(5571U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.984933219785;
    msg.lon = 0.857937545762;
    msg.z = 0.233224850965;
    msg.z_units = 103U;
    msg.speed = 0.00883546050758;
    msg.speed_units = 225U;
    msg.takeoff_pitch = 0.304931500078;
    msg.custom.assign("SCCEPTCIEDRQAJYUPZTPLIPHKDZDSADRWVWTUWKIEVSUVJKRXXAHIPOYQTZEXBQRORBZANCEQJUZCXGGJHCIUWVLHEUHQQQVMGHXAAJTGNGWIUPVRBLFYXXJKZSDBYDBVOYMQAGULSLNBZILEJNFFJSYOKHFLUWCYPMMGIGMHRNTTDAHBXRWONPNSZFLGLDCWLOXFNKESOJKMWPMYTBCKNXFEPYFQRYFIUGB");

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
    msg.setTimeStamp(0.437505065204);
    msg.setSource(6459U);
    msg.setSourceEntity(231U);
    msg.setDestination(14656U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.865823270172;
    msg.lon = 0.0673175236604;
    msg.z = 0.0342077113547;
    msg.z_units = 198U;
    msg.speed = 0.763686693498;
    msg.speed_units = 216U;
    msg.abort_z = 0.159980899565;
    msg.bearing = 0.00410786298478;
    msg.glide_slope = 226U;
    msg.glide_slope_alt = 0.473999886649;
    msg.custom.assign("JHXNIIBUVJMNEVWAQRGPKPBSKKLFOBWPLOQOTRQOLRPSVTBHTTRVDKACUDVXFPHLQZQKUZOJQMBSCHRYDTGBJIAEACCINYGYAHDQILDSDIMVZUSZGMPJDLNYWKEMFJECXOTHKTLUSNTFESYXYJMMFKCYGHNDWGOYUUSGCIAVX");

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
    msg.setTimeStamp(0.52646838746);
    msg.setSource(20209U);
    msg.setSourceEntity(149U);
    msg.setDestination(55050U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.590791985076;
    msg.lon = 0.459124577769;
    msg.z = 0.0397511965786;
    msg.z_units = 148U;
    msg.speed = 0.239207943892;
    msg.speed_units = 188U;
    msg.abort_z = 0.615146932271;
    msg.bearing = 0.422519036744;
    msg.glide_slope = 147U;
    msg.glide_slope_alt = 0.498892272763;
    msg.custom.assign("CEANOHJLROQLMXFSETVMLJTUEVQWPJOCUZGDATZVLOFOASMPDGZLVCABZWQAMBMGWHEINPDVZDOTSUIRXSYVIQVAMKIHJHWKSCRPDSTQNYSBNLUNXNRHBQTRRPAJABCIPKZRXHYKXXAGPNXGUYMELHYVLGIDICXFKLTYYUDGJQPSFOXZJGCZROHRWKXBVQEJEBOEFMWWDLQPSSEZWPOYNKJIBKGVBWMUTF");

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
    msg.setTimeStamp(0.160546215474);
    msg.setSource(50036U);
    msg.setSourceEntity(176U);
    msg.setDestination(61451U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.0965806238084;
    msg.lon = 0.0567405267025;
    msg.z = 0.240484435702;
    msg.z_units = 96U;
    msg.speed = 0.927898342433;
    msg.speed_units = 173U;
    msg.abort_z = 0.275764662402;
    msg.bearing = 0.445177454819;
    msg.glide_slope = 216U;
    msg.glide_slope_alt = 0.00871999318896;
    msg.custom.assign("PTMCLZDRDVDPCGRTENXHXJFURIVWYDOOOWPHHXTRWHMTVYQBYENZYVUTNKY");

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
    msg.setTimeStamp(0.31663415798);
    msg.setSource(41768U);
    msg.setSourceEntity(154U);
    msg.setDestination(18992U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.450327514433;
    msg.lon = 0.70800783911;
    msg.speed = 0.914380348867;
    msg.speed_units = 40U;
    msg.limits = 196U;
    msg.max_depth = 0.167734621781;
    msg.min_alt = 0.603189483321;
    msg.time_limit = 0.468392613057;
    msg.controller.assign("ORXJGBVWCEWCAASBBQKKHDVVPDCQILIMOZLGXHESJAYDMJUNAFQIJQCUYPHMMOBSKVPSZ");
    msg.custom.assign("QBLGGWANYBKHAMDNUHBJBALFLPEEOZTDGYRSOSJQINKDFPKIXKLUNYGTILVMWBZVXVPUUJQKRWTYEVVGGXQHSGBDJHXGVHDLMOUZEOTWKFKQOOSKJLVTXZWYJFT");

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
    msg.setTimeStamp(0.688977551711);
    msg.setSource(36572U);
    msg.setSourceEntity(114U);
    msg.setDestination(2714U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.629176511282;
    msg.lon = 0.540286597252;
    msg.speed = 0.853736619528;
    msg.speed_units = 167U;
    msg.limits = 32U;
    msg.max_depth = 0.575596315815;
    msg.min_alt = 0.66338286631;
    msg.time_limit = 0.505749109566;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7166731796;
    tmp_msg_0.lon = 0.475103170986;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("WIURBQZUBQKVFHSRSUHMQEKXTDMYMKHCXFPGFUFVYYAARDUVENBGQPRPNZUGHCKOJRCXTWRJOH");
    msg.custom.assign("XTDYYGGBGSKJLZBHSCMFFLESPTVRHUTMUQXDAUERIASBKBJLTOAZTUUXVLCAOJOPTKEYUJIKWYOLQRXZKCFVZNXBBBNEDCIMLRSCGZRYMHWFFTKZNFEIKERXZSPNORKPTTQXWHSJMBVWRPHEELUQNJINQSXQMYSPBFHQPNSMNYMTHCFAREBICJGLYGFMPUAAONLIUDAYIDODMWVOPWZGUZVJVKAPXZRAEGQWHFDQJQGLVHCDWXK");

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
    msg.setTimeStamp(0.581037935671);
    msg.setSource(29642U);
    msg.setSourceEntity(166U);
    msg.setDestination(55406U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.550850078027;
    msg.lon = 0.982056968613;
    msg.speed = 0.548217540148;
    msg.speed_units = 134U;
    msg.limits = 111U;
    msg.max_depth = 0.467009254754;
    msg.min_alt = 0.225249651987;
    msg.time_limit = 0.788832853438;
    msg.controller.assign("YFVDQWOXBFLMZPAEICHGFZOPUHGNVGHPQGJSVYTVTMUCAMOZVVTMLKSABQMURZGAJMCWNYCYUHDTXDZKZEEMPZLREZIILCYFBDNTJFDQSGZZJLXISIHSRCEUGAWQIH");
    msg.custom.assign("QRKMCHMJBHPRNIJBYQDJVSZGMTPTSZNSYGTAOCFGNKXQIKFSTRLUMMGZJPAMMFHRCGUBWWPGXUVCDYKQAFPSVRAGAQWAYEQXPDAIFQYOKIZLKDXHGDIQIBVIPAOCFJFSNNHRGLTCEDAVWFLUKXXJXRCJKMDYDFTERHPSTICCIFEOOVXOMUDLKMZWRSVYLNZZNRWENEDSPUJ");

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
    msg.setTimeStamp(0.387559670895);
    msg.setSource(58293U);
    msg.setSourceEntity(53U);
    msg.setDestination(47928U);
    msg.setDestinationEntity(223U);
    msg.target.assign("DPGJDEPJHJCZBFQMXTOYBGRVAPGHPIQDKFJITKKWQDIUKBZVRTNXEOEXXVELWGAOODVWMENJVWKOOYWZAQZPQBSWQPCFUDUOJISDUBPHVHOVRLRFSCSVUXKMMAGRNGPHSRQICNTGYTGCKFGWLSEFXLMNVCELCGALWSFXMIRCTWONCVELJKIMHFYXHBEOBAFYBBPZAHNJYQLQMDNNLSSYQHUSXFDUZYB");
    msg.max_speed = 0.980335752658;
    msg.speed_units = 242U;
    msg.lat = 0.0235857013338;
    msg.lon = 0.542271971578;
    msg.z = 0.224174036418;
    msg.z_units = 148U;
    msg.custom.assign("EFBOPSSYCYKMRCRIVKRWECFGVOHLRFRMKOTZZBFLJJNUUXGZDUHBPIIWDTNBHWDNOZCDOHWDVUWTHXQOVKLAFRBACRAGDTXMZOOGQZMAKXYKSRMUUPNGYNAFJPEOAESKSMHIPHIPHYVKJPINQQWXHKSRTJVMFYAYKMEQTWHWBYDGBVZLGTJXWJQINLMYDUELSDZXGAVDCZBQOVTL");

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
    msg.setTimeStamp(0.462410313857);
    msg.setSource(38582U);
    msg.setSourceEntity(247U);
    msg.setDestination(55494U);
    msg.setDestinationEntity(34U);
    msg.target.assign("JDLMGGHAJLCBATOJKRCDFYAMEGMNUVQTPSKAMVINNPNFTDQIBHRTSYGUFWRMGWIRWSNSHNRIYFNVWTEUWZCSTZEOZJHSCBMYTULEKYPFWBVXWQZXGZJSKZOZQWIYRQKBMFTMXDOLHBQXKAHLXCUWYPVDOMTELZIPSRQJAVA");
    msg.max_speed = 0.185851174064;
    msg.speed_units = 92U;
    msg.lat = 0.14224284231;
    msg.lon = 0.122532649721;
    msg.z = 0.754398463871;
    msg.z_units = 15U;
    msg.custom.assign("HEYMFADHUTXLPYEDUMVSKLFTDEMOZZZKFMMVJYCQAOKHNMOBDRCWNNLJTBYUPCDQPLPZWJWVAVQVQBTKRJNDKOGNCCMJYPNLJFZRFVSSNISTISIJZDSZEKWLXIZSEYZVBDXOEEIBEWAJFRDMYPYEWXLXTKTAUOUKGOHNBMKLXOFUSIUBXVFCRHHAKQJGYZIUGUWMPRTDCLFPGPWRGWXJIBGGXSLCQNPRCHFATWQA");

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
    msg.setTimeStamp(0.158922380975);
    msg.setSource(6392U);
    msg.setSourceEntity(7U);
    msg.setDestination(27611U);
    msg.setDestinationEntity(112U);
    msg.target.assign("BWUUJYRLUERWNBJALPNMEKYOVWAFPDYZTRZADIWGQQ");
    msg.max_speed = 0.250257213765;
    msg.speed_units = 104U;
    msg.lat = 0.376384284312;
    msg.lon = 0.128482783125;
    msg.z = 0.381058407396;
    msg.z_units = 211U;
    msg.custom.assign("OQNTYLTGCARVJOYZYTXRAXJJQWEMWRAA");

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
    msg.setTimeStamp(0.765942128464);
    msg.setSource(12631U);
    msg.setSourceEntity(6U);
    msg.setDestination(45700U);
    msg.setDestinationEntity(46U);
    msg.timeout = 19327U;
    msg.lat = 0.323101058298;
    msg.lon = 0.193688299078;
    msg.speed = 0.494621357434;
    msg.speed_units = 177U;
    msg.custom.assign("HFLSDJLQXSVKHRTORTZOYLZXZQGKVFVAESJASNFVZLBEFCMIDMWGPNWQKZHEBPAOYJGRYXBQCISMMEVRIOZYUUUJHBFWGLEKUWEISFBUHTASOXYUTUQHNYNCNWSJJOCTGQOADUCCZAZAXRMPVRKDKHQXUBHEJMADXGWLQIBGCSVHIEMCADNMRGCGMWDCTPRFKYBXLPSKOKPLWTYQOEIDVGJRVBYIJXMNVQJPPWZL");

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
    msg.setTimeStamp(0.529793083112);
    msg.setSource(46313U);
    msg.setSourceEntity(113U);
    msg.setDestination(20058U);
    msg.setDestinationEntity(136U);
    msg.timeout = 55861U;
    msg.lat = 0.158913358886;
    msg.lon = 0.225827228813;
    msg.speed = 0.524125759633;
    msg.speed_units = 210U;
    msg.custom.assign("UUQQUFKMSGRWVYRPBAKNOLWMLOZXSYCTILJFXNBKXIMODDCQUFDQYICCPKXFDNWDYJYCGAONBUUTLNSCVDJKOBVZLKSIEPJWLEIHEJFVMEDPKYRMEOMSXGRDQLWXYLNJWWSHIFGVCZZRJPKZBZOEQHTOOEFCYXZGTJTVYVBXSSEITEHHWTLMBKGZTANANKRXPPGQATQRCHOHJFFPHZMRUWJRAHNSANVUQBSMM");

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
    msg.setTimeStamp(0.4924859223);
    msg.setSource(7689U);
    msg.setSourceEntity(23U);
    msg.setDestination(51404U);
    msg.setDestinationEntity(119U);
    msg.timeout = 16205U;
    msg.lat = 0.515379570177;
    msg.lon = 0.177670911574;
    msg.speed = 0.364685397008;
    msg.speed_units = 29U;
    msg.custom.assign("ETVHZWVIPIIWANKJZKTYWGQRQATCEYIRZIJJTTRKDMPBNNCCFIXDWGOXBYDUPKPBDEZYAHMUIDBRTZJXPXFPKPCLNGFQFISSMMQAWAWZMCSOJFSTWVNODKAVHNFHRCHLOEUZYUZCQXYHKHNJWTQHLVPDQNMLUOELERRQMBSTFTBYOXGUAOMXGKYCQOGESRFMNBUSGGLULVFDJFNJKOCBXDYAIVLSJOWKYGUEXVBAEAQRI");

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
    msg.setTimeStamp(0.887049353339);
    msg.setSource(27942U);
    msg.setSourceEntity(115U);
    msg.setDestination(43794U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.402212655011;
    msg.lon = 0.138831138145;
    msg.z = 0.310328769476;
    msg.z_units = 25U;
    msg.radius = 0.852713900032;
    msg.duration = 31137U;
    msg.speed = 0.279431444443;
    msg.speed_units = 190U;
    msg.popup_period = 29051U;
    msg.popup_duration = 35034U;
    msg.flags = 231U;
    msg.custom.assign("JKUEZUHVFCPXEJTOX");

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
    msg.setTimeStamp(0.31117902195);
    msg.setSource(57204U);
    msg.setSourceEntity(44U);
    msg.setDestination(23003U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.0637398426473;
    msg.lon = 0.697725500509;
    msg.z = 0.0156705938697;
    msg.z_units = 20U;
    msg.radius = 0.791876799753;
    msg.duration = 40679U;
    msg.speed = 0.713022750842;
    msg.speed_units = 77U;
    msg.popup_period = 2718U;
    msg.popup_duration = 9409U;
    msg.flags = 33U;
    msg.custom.assign("ETECMHOBAWQVNBJUIEUPTCXUJENOZKHSLZXQJQPORXMAFGWEQVHPVQAGQEWJNCYWRLDWMSKMWKKJSADWGGPBBIKMDYFJHVIIAHKCXNXRZLPTY");

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
    msg.setTimeStamp(0.446178876355);
    msg.setSource(17449U);
    msg.setSourceEntity(43U);
    msg.setDestination(47674U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.6146970423;
    msg.lon = 0.68713156166;
    msg.z = 0.725721651602;
    msg.z_units = 164U;
    msg.radius = 0.0876872742895;
    msg.duration = 12185U;
    msg.speed = 0.863775919298;
    msg.speed_units = 98U;
    msg.popup_period = 20122U;
    msg.popup_duration = 55554U;
    msg.flags = 120U;
    msg.custom.assign("FRBFIOUZCQPMZKAAFNFIRNWBUZOPSAEHCYONDJKEYJYXSTBMESLIXERTTORBNWCPOKWJXDAMFMHENVALPTGSZQHXFQPAJZQUCJHSFYCSHKBRTDECBGEORGLPADRNBOQVVDILHZKVMPRVIHDKGWDXVQDNHYSYXPQXLAQ");

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
    msg.setTimeStamp(0.118263283205);
    msg.setSource(57299U);
    msg.setSourceEntity(27U);
    msg.setDestination(49853U);
    msg.setDestinationEntity(77U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YUIOVNRVLGHZXXUDBPCFWPFQZRYUDHTSYUFDYIQOCEOLMZSEMVSUJTKQGYXLZPCM");
    IMC::FormationPlanExecution tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.group_name.assign("ZYCIJEVRDMOKPIUFIKHNUXHXRPLGENLRBABGSNSGMIZJSCODZXTNXSNESLXWVAMDUYKZMVBKKITWFHMATSIHGSOKPKVPOQODNRABEHFJPUPTXEPFCFYHCUQEMZGMDLDQIZTVSJQGUJBEGVLYAFJHBEHSSJZWQRXKCLFFBDRPBIYAHKPEWYCROAZPEWAVQWHLQVVDWQORJTNRTRMXUUCYCBDYAMQYWCLFWKGTGDJGOMOXTBYUXZQLOUWIJTNNN");
    tmp_tmp_msg_0_0.formation_name.assign("AOUDBSHETDGKLAACEZAVKFLYDXXIYRVJCEHSDQCNUGEIXRROFOUYHWYVGUHROAUNRKZKPTJYFWBKSPJBJMIJLSMVSBHKZQZREXBTIVGZQYQIEIJPXQFZPLWWWFRXQDONWXQMHUFEPWLRXOFMPANIPYETUVWZZIORP");
    tmp_tmp_msg_0_0.plan_id.assign("MEIQTSXABJMDGNUJBPMVUQZPCKNGEMCFDOBETTLXDPFDVEMZAVQZTUFRYUEFHRZXSQZVQDRDFIVZFKJGSICIKXKHWBPAIFGCUUSMEHLETHYWOKLWSBXPTVYMNGRWMDYJP");
    tmp_tmp_msg_0_0.description.assign("PUUDBKZCBXYIEFMVIZKVZNXABLEQZPURISXLQHXANIOORYBOJISGDTKVEKQELRPMZPTHBMRCNQNWUTIEMKQWISARHOFEYEXCSIOYCVRGTNPBDMUZDSAOXESNJCKWVTAFBHFVQQXRVURTAOTDCOJWLLBZDYJFJGLANBCNCGWMYYQAPL");
    tmp_tmp_msg_0_0.leader_speed = 4.9816291828e-05;
    tmp_tmp_msg_0_0.leader_bank_lim = 0.658537068591;
    tmp_tmp_msg_0_0.pos_sim_err_lim = 0.840781698141;
    tmp_tmp_msg_0_0.pos_sim_err_wrn = 0.462521800705;
    tmp_tmp_msg_0_0.pos_sim_err_timeout = 51436U;
    tmp_tmp_msg_0_0.converg_max = 0.695678162012;
    tmp_tmp_msg_0_0.converg_timeout = 54429U;
    tmp_tmp_msg_0_0.comms_timeout = 63832U;
    tmp_tmp_msg_0_0.turb_lim = 0.796595521127;
    tmp_tmp_msg_0_0.custom.assign("FBXYNIDAACBBRHSSAVKTBRFLHGOIENUZKCITIYZFQDHHJLWPUQHYUPTAKEOUGAUCGEMZGKXPJMHJSSRNZTETTTJXQSDSRIDAFG");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0240124380361);
    msg.setSource(15094U);
    msg.setSourceEntity(11U);
    msg.setDestination(50238U);
    msg.setDestinationEntity(207U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("WYFIJWDPXLPBFQYPKJHRCIPSVSAMDFFKDSMHMZERBAVNQTEZNQKUPVTIPZHWARBZCRFUNOKQGTCWMUJEESMUYSFCDQYQXFSTKZPRYNWHEEBDBQZYJVVJAUCKXOSREJDTMILITIUEWKPZDXLLYEIOLISAAICBBDQFBNYAEMVGYWITSLRCXVOLKZXFNRLGRGCTOTUULCOGHKWXYBQSZUAXHJUNGVNGAJOAJPMNG");
    IMC::RowsCoverage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.719656364021;
    tmp_tmp_msg_0_0.lon = 0.611056331235;
    tmp_tmp_msg_0_0.z = 0.625376149317;
    tmp_tmp_msg_0_0.z_units = 152U;
    tmp_tmp_msg_0_0.speed = 0.931356803247;
    tmp_tmp_msg_0_0.speed_units = 32U;
    tmp_tmp_msg_0_0.bearing = 0.629038053909;
    tmp_tmp_msg_0_0.cross_angle = 0.908283990499;
    tmp_tmp_msg_0_0.width = 0.65874431668;
    tmp_tmp_msg_0_0.length = 0.27005349903;
    tmp_tmp_msg_0_0.coff = 66U;
    tmp_tmp_msg_0_0.angaperture = 0.83896560073;
    tmp_tmp_msg_0_0.range = 18462U;
    tmp_tmp_msg_0_0.overlap = 246U;
    tmp_tmp_msg_0_0.flags = 127U;
    tmp_tmp_msg_0_0.custom.assign("FPOFIKYOBSRGDXYPHZEAZGCFMXYLAVUMOBUQNDTZPHBJDMNTVXJMDHAQKOKEFNBAURHVAUDQJMWHJJSUWNTMXZYBCARKLLIZYESIXNKPXOUKQVDQICTAQGPYNLFFOGWDSMRBAPHSPMPSXEULHTIOQSZNPKLVHVQXMECDZJWZMIURNGFLWTKABLFTGEDVNGWSPKBDINEHCJEYCICOWTOXGLVYBWRJRZHFEYSIAXUCGVZQKGUYWRVRC");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::GetOperationalLimits tmp_tmp_msg_0_1;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.733993483591);
    msg.setSource(20521U);
    msg.setSourceEntity(111U);
    msg.setDestination(18977U);
    msg.setDestinationEntity(65U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("QKMYZXITVTTZSNFESPMMVJWFSUCOCAFBDQGLJIOALQWCSWRSBDYGIYBKUHMRDXWELKMKOICFVOMOVTAESOTFLDPFDSXPKPBFQIBHOGNKTAFJPQUUKRZCXHDRJHFRVFEZREXNPDHEZZIYEUYZJAQCWNOJGNWYL");
    IMC::Loiter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 42756U;
    tmp_tmp_msg_0_0.lat = 0.986748690477;
    tmp_tmp_msg_0_0.lon = 0.619300036197;
    tmp_tmp_msg_0_0.z = 0.522996945002;
    tmp_tmp_msg_0_0.z_units = 113U;
    tmp_tmp_msg_0_0.duration = 46468U;
    tmp_tmp_msg_0_0.speed = 0.655206695373;
    tmp_tmp_msg_0_0.speed_units = 158U;
    tmp_tmp_msg_0_0.type = 39U;
    tmp_tmp_msg_0_0.radius = 0.280347521059;
    tmp_tmp_msg_0_0.length = 0.509427909984;
    tmp_tmp_msg_0_0.bearing = 0.167651131797;
    tmp_tmp_msg_0_0.direction = 150U;
    tmp_tmp_msg_0_0.custom.assign("WSOQLNIHNPIVLWRTDCZDKKPYCEGVEYQRWYTRQJJYJWVTKHXRFPNSSEIUSSZCTHYFQTVGNBSBSEAOPMONUDAXSZSQKATCWYVATVWCM");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::ButtonEvent tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.button = 242U;
    tmp_tmp_msg_0_1.value = 94U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::TelemetryMsg tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.type = 242U;
    tmp_tmp_msg_0_2.req_id = 1323476865U;
    tmp_tmp_msg_0_2.ttl = 5170U;
    tmp_tmp_msg_0_2.code = 176U;
    tmp_tmp_msg_0_2.destination.assign("IBHAPRXABLBFLQIAMFNGFEYDXVCGQFJZLUQHMOBPRNDEYYPULACQDDKCZUMSVWJSFYGYFQFCD");
    tmp_tmp_msg_0_2.source.assign("ERDDNBIBGQXBMYCMEYQROUEKSBNQXWVYAVRBNPWGJYAYHKNMLEPAJUPEFTSASHKPMVZRCOITFLIEFABHTCHYEKYPRDHLITDDUKRSLUSZKJFJSVRKTHDHXOLXWFVOQZZTUGBWVYNKNOOM");
    tmp_tmp_msg_0_2.acknowledge = 199U;
    tmp_tmp_msg_0_2.status = 200U;
    const char tmp_tmp_tmp_msg_0_2_0[] = {120, -10, 124, -16, 52, -26, 50, 100, -83, -48, 86, -108, -59, -68, -12, -48, -98, -70, -71, -66, 87, 99, 121, -30, 54, 99, -54, 98, -65, 52, 3, -125, 0, -112, 35, -95, 84, -47, -8, 93, 68, -7, 65, 54, 21, 90, 9, 100, 4, 36, 119, -88, 8, 117, 72, -119, 118, 25, 10, 54, -112, 20, 39, 107, -79, 51, -80, 80, 109, 21, -67, 13, 51, -107, -102, 120, 14, -15, -30, -126, 70, 0, -63, -31, -73, 40, -18, 86, 24, -31, -112, 124, -117, -30, 29, 28, 44, 90, -98, -62, -76, -5, -104, -43, -90, -78, 77, 85, 121, 86, -97, -112, -66, 108, 103, 118, 45, 109, -27, 7, 77, 107, -91, 113, -28, -39, 89, 17, 38, -115, -37, 55, -21, 113, 25, -65, -3, -13, 60, -93, -79, -27, 86, 91, -103, 105, -52, -53, 74, 40, 106, -38, -78, -44, 110, -24, -36, 113, -91, -97, 22, 4, -86, -4, -41, 78, 117, -84, 48, -88, 80, -113, 107, 4, -81, -104, -33, -15, -6, 100, 7, 116, 69, -90, 27, -90, 108, 65, -51, -60, -128, 15, 43, 33, 94, -38, 61, 49, 68, 96, 55, -66, 4, 88, 87, 28, -35, 65, -67, -15, 67, 107, 2, -127, 46, -118, -61, -26, -9, -55, -15, -106, 46, 55, 45, -40, 73, 48, -35, -46, 0, -62, 36, 12, -72, -110, -49, -4, -23, -32, -67, -59, -113, 44, 46, 45, 83, -4, 27};
    tmp_tmp_msg_0_2.data.assign(tmp_tmp_tmp_msg_0_2_0, tmp_tmp_tmp_msg_0_2_0 + sizeof(tmp_tmp_tmp_msg_0_2_0));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.643693670104);
    msg.setSource(4198U);
    msg.setSourceEntity(5U);
    msg.setDestination(6131U);
    msg.setDestinationEntity(134U);
    msg.timeout = 12847U;
    msg.lat = 0.57355144686;
    msg.lon = 0.825510187979;
    msg.z = 0.824730041984;
    msg.z_units = 11U;
    msg.speed = 0.617735568889;
    msg.speed_units = 56U;
    msg.bearing = 0.821777932246;
    msg.width = 0.54520567887;
    msg.direction = 69U;
    msg.custom.assign("GUJXLKXNHBEWVAFRBGVLYJMIMECWGJDKTOLKDNOPISRIWZTOLNACAJSWQHXNXDPQBIPNUADFBZYE");

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
    msg.setTimeStamp(0.44557034702);
    msg.setSource(10483U);
    msg.setSourceEntity(160U);
    msg.setDestination(41102U);
    msg.setDestinationEntity(51U);
    msg.timeout = 35678U;
    msg.lat = 0.678525971849;
    msg.lon = 0.845626925835;
    msg.z = 0.521385679965;
    msg.z_units = 37U;
    msg.speed = 0.17707115673;
    msg.speed_units = 64U;
    msg.bearing = 0.0746653983559;
    msg.width = 0.0351732684707;
    msg.direction = 254U;
    msg.custom.assign("GHPVPRUIZBDLXBXLIOPNNSWVRLBVNZTIHMZYHDUA");

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
    msg.setTimeStamp(0.142059500983);
    msg.setSource(18841U);
    msg.setSourceEntity(37U);
    msg.setDestination(30547U);
    msg.setDestinationEntity(103U);
    msg.timeout = 23851U;
    msg.lat = 0.0585886094653;
    msg.lon = 0.199991182071;
    msg.z = 0.347954930799;
    msg.z_units = 207U;
    msg.speed = 0.0805757870096;
    msg.speed_units = 72U;
    msg.bearing = 0.69055965708;
    msg.width = 0.644196410713;
    msg.direction = 66U;
    msg.custom.assign("QSIGMEDLNNKDBBZDJJFGHNUQPTDXWCSSUR");

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
    msg.setTimeStamp(0.0988864535239);
    msg.setSource(56525U);
    msg.setSourceEntity(8U);
    msg.setDestination(2458U);
    msg.setDestinationEntity(78U);
    msg.op_mode = 36U;
    msg.error_count = 204U;
    msg.error_ents.assign("YYLHUJZXTMXCAIWNTSUSXVQCKUJUJWFDMQNKYCQESBFHBPTIVVRHVSUJMCVGZPTFTWGEKNQJBBIUEGO");
    msg.maneuver_type = 10492U;
    msg.maneuver_stime = 0.466312525488;
    msg.maneuver_eta = 63150U;
    msg.control_loops = 2535841835U;
    msg.flags = 14U;
    msg.last_error.assign("PMKFOCAUEIBNFPSAIEFQPDNJRJRYBXFDSBW");
    msg.last_error_time = 0.293625566301;

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
    msg.setTimeStamp(0.533094646466);
    msg.setSource(51371U);
    msg.setSourceEntity(90U);
    msg.setDestination(2582U);
    msg.setDestinationEntity(13U);
    msg.op_mode = 126U;
    msg.error_count = 67U;
    msg.error_ents.assign("OKTHOXBWWBJYHVTOHVPHMBVXBPXKRMFCWCEEHKYYSBIGISQXCIBWQBOLJEYDSPVTPACMCMANWNJWVYRWHBVFQFAFLPDPLIRGURURNUQNIMXTQVBAQPF");
    msg.maneuver_type = 37666U;
    msg.maneuver_stime = 0.507177456453;
    msg.maneuver_eta = 29818U;
    msg.control_loops = 2911302469U;
    msg.flags = 192U;
    msg.last_error.assign("HAFMJUDAMRUBUZGQQKUVKCCQDLVPKORAZHLVODFRFAEMEDVXNSSDCLZTPHYTMAKXTJVNGDIHCFNTPQBKEYACLIQFFXTFOSCUERDHLGHUJYPGZGAOUCOSEJYZSJHQXPYHZLWMJBGSFWELXBIJGJXKDNNAVZNIXOPJCMVEXRYCWQHRKMYETSZDVPQWEDBWGTYYBUKFIOAONI");
    msg.last_error_time = 0.505794296244;

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
    msg.setTimeStamp(0.0803761326494);
    msg.setSource(25281U);
    msg.setSourceEntity(113U);
    msg.setDestination(21612U);
    msg.setDestinationEntity(228U);
    msg.op_mode = 153U;
    msg.error_count = 164U;
    msg.error_ents.assign("YZUTCVKWBWLLGHTBNDNLJPHETKPJBIDQGZKMFOVBELIXGSVGKRIIYYKHNWL");
    msg.maneuver_type = 6682U;
    msg.maneuver_stime = 0.56028835257;
    msg.maneuver_eta = 40474U;
    msg.control_loops = 3249922875U;
    msg.flags = 77U;
    msg.last_error.assign("TTHACSOHLNFLJLSLQPGBKZDUVYMOCYHGKVPGDQPOIKXHOIMREIWPKNMUZLFBCVIRCTVKCORULNSHIQQLHLATPBJDTICBMORYSKIJREKJFYDDMYTNBDYMYAGEJZHXFJBBQDRHZEKJGKEZEISGVRWAAMOTMYGZGCUONVHJSVHVZWJUWKZAUUBYSYWTSDXAFPXXEXMQEBAVUWABPRLFPRLWSWFUNNSIXQJQXEZXRODCWTGA");
    msg.last_error_time = 0.0662450796985;

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
    msg.setTimeStamp(0.0403745843945);
    msg.setSource(36925U);
    msg.setSourceEntity(253U);
    msg.setDestination(37129U);
    msg.setDestinationEntity(56U);
    msg.type = 146U;
    msg.request_id = 29212U;
    msg.command = 204U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0168471326539;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 59588U;
    tmp_msg_0.custom.assign("VPUZWUIOFVEODCOVPMGURLVJFHNOHLYLSOLWXFOKEKOKVDFRIDNXRCNNGQARXKHIJYNCTOQIOBLHBSSWWIUSNTTCHZGLELGDRBQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 2250U;
    msg.info.assign("TNWMSLZQNFSLICHOWBADXXIUQVTGNUGYWUJZIFBZJDVSVUANBAPVRTJKMQLAMFGBOGYPIIKN");

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
    msg.setTimeStamp(0.223252430551);
    msg.setSource(14595U);
    msg.setSourceEntity(24U);
    msg.setDestination(62888U);
    msg.setDestinationEntity(98U);
    msg.type = 113U;
    msg.request_id = 13704U;
    msg.command = 211U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 36391U;
    tmp_msg_0.lat = 0.324264750131;
    tmp_msg_0.lon = 0.474169714449;
    tmp_msg_0.z = 0.566530981863;
    tmp_msg_0.z_units = 251U;
    tmp_msg_0.speed = 0.0493998580763;
    tmp_msg_0.speed_units = 159U;
    tmp_msg_0.custom.assign("PUUAGYSEZPBRPZLIIAOQYHEOWDFHNHKOXUQOPYKGBQLQKSDTMDWCOLEYIILRDWDSYSMMJJTIOJMPIWWYHFPXGZVYLFJNUWNVOTNCDWVVDERGSKGHHSDFYNSJVSQERVZFCZZJYHAJCQKBFEIKUALGMACCYXRIVFGJBKPTHBMQDABXAIZUNATXLUBNEKCXKWWEDXOVTLBHRAEQPQVNZHCGMBX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 45858U;
    msg.info.assign("NYYFETLZBHMDREHQRUSSKGEQNPYSUDKYJKULLVMIKJVBXRKSHHYWMG");

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
    msg.setTimeStamp(0.690807022849);
    msg.setSource(23464U);
    msg.setSourceEntity(6U);
    msg.setDestination(60293U);
    msg.setDestinationEntity(176U);
    msg.type = 89U;
    msg.request_id = 14087U;
    msg.command = 9U;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 2124U;
    tmp_msg_0.lat = 0.263370696126;
    tmp_msg_0.lon = 0.84444893417;
    tmp_msg_0.z = 0.977518422588;
    tmp_msg_0.z_units = 206U;
    tmp_msg_0.speed = 0.0723714207511;
    tmp_msg_0.speed_units = 161U;
    tmp_msg_0.bearing = 0.555440664019;
    tmp_msg_0.width = 0.50117627265;
    tmp_msg_0.direction = 166U;
    tmp_msg_0.custom.assign("NTDCGZBEIQFWZTAOVKIKWSLWKTOXDDYXAAMXERDNJXKPZNUJISQNSVDHPFYUJZAHCFBTHXJMQUFDJRKGVRWVMUQTUACIVFBHOWIXTIQFYOLELAORXTZGMXOGMLLUDQPSJIKJCHBKYFBSQAGDPYPMKLYAGEGMVZNBGWWVUVSJDPPICCQCZCAEMNRHWMPEOQZUZUHPBYYFTFXSPBYEISAUTFLRYLNXSLNZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 31665U;
    msg.info.assign("YTFFYVLEQPMDTLAQXVPJAIQDULTXVTPTLHHDGPSSFJHJUIKIFDDRZKVNRLZNVWSOMOWLLLEMZMTEZNOFWCIOKSHMJOBUBBWIPXVOOAYMYCGCRZNCGDBKSPRVIKMTZUFJXGBEQAWYRVGXAUPEAESBGUODUTPVUZNJSKCRUQGWWGCJFSHDKLCUKINTPZDYAAWEQHYHKICAHXCMVYBQXPNDERNYNQAFWYCITOFZMQFJXKHIR");

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
    msg.setTimeStamp(0.658483695601);
    msg.setSource(16065U);
    msg.setSourceEntity(137U);
    msg.setDestination(48860U);
    msg.setDestinationEntity(65U);
    msg.command = 220U;
    msg.entities.assign("BZJFGVJTKSAFCWQLUWHLYASICYNNIXVHQABJMDU");

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
    msg.setTimeStamp(0.379175782296);
    msg.setSource(49466U);
    msg.setSourceEntity(201U);
    msg.setDestination(31910U);
    msg.setDestinationEntity(71U);
    msg.command = 107U;
    msg.entities.assign("XITKDJTZWOYDUDFYFRNBUTKBWXATSZNBPOWRXVEBQPYPZAWIGHHNGYCKQEMCIUILUZAVSGSELCISHXVAMMZZJJDRXTSINAVPFFDKDYWZPXTRYGUVWEMWIFLGQMGHXQLJMGCGMKJWCCVRSBBPUJLPCRQJDTQLVEF");

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
    msg.setTimeStamp(0.0635253287547);
    msg.setSource(8179U);
    msg.setSourceEntity(152U);
    msg.setDestination(43535U);
    msg.setDestinationEntity(195U);
    msg.command = 120U;
    msg.entities.assign("NPXEEVUOSADZYUNLVAQJTMEMICYJLDZYJPUPERDVTWLVPGKTFAXWCUIHNCOAWRBABRINXFXTNRYDXPRYOWBDRCTKBHNOCMAJSMYCOFZEJJOYHYWLCGPJRHQFDMMWBNKKVEYFIGZVXLEDUQIPLIKJOSWQBXOIFKO");

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
    msg.setTimeStamp(0.743058832186);
    msg.setSource(1915U);
    msg.setSourceEntity(87U);
    msg.setDestination(47186U);
    msg.setDestinationEntity(81U);
    msg.mcount = 100U;
    msg.mnames.assign("BWRUTECVBKMHQZTJFSDFONUEWEVJZARLNAWEQXANQSVBTPIZYQCCOVCXYJAOIWBYMAKMDGKQDCUXPLHESJYRXYJWPWAWVJRXQSNLFCGKSPJLZNOVHZVZIOTTMNGEOLCASGPIXVOTDRCLYBGDNKZK");
    msg.ecount = 231U;
    msg.enames.assign("FNSTXSIWYGQGKOTNRLHCVHICFJVNGBOAVDFTXZSFDAQAUTHVUIZDXJLCCSEZDJMFUPUUCFUWUZIFVXBNSBCHJDYVWAODPZBYZQOL");
    msg.ccount = 157U;
    msg.cnames.assign("GDKFAHTMJGBMBNBIIFUYFLVPMKJYDMJUCJTODNUHIRKGTQKEJVQESDTCRXENWACXQOXHPFZZVTIOLFQGNLPCKCIFYKODTJZWVRWBXBSAJSCAXQXUQFSMMRXWEPBVHYZPSDLUYXHPAENOOBVPGLMLZZASBHWDARESEUJZCGBRRZDPZLITMQNISYDKOYKWGWOJGINQMOTAYCWUJERKXRVKTICULVIZWMFSFSVEAHTHPLGEAVHQOLQUBND");
    msg.last_error.assign("IQJLDQEWWZPUFKLURBIVVRRDEZYNEUYPKVDWBKPYRHXLRKDQQGEJGAAHRFMYOZOXFIDPNZLQFIQOWTYBCPJEIXDSUJNVOIISSPANUFWAMMJXVUYLBBJEEGSQGGYXCETKCCBMTBHPAGMHOFKAXFSEHFONMTHKYAHMSGAXLLOQYCGLNVTIUUVURJLZG");
    msg.last_error_time = 0.755231577795;

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
    msg.setTimeStamp(0.868799185375);
    msg.setSource(5903U);
    msg.setSourceEntity(170U);
    msg.setDestination(60429U);
    msg.setDestinationEntity(134U);
    msg.mcount = 144U;
    msg.mnames.assign("FQSWHHGLKCLHBZPHYWYBUPOJVTLJVJDIDBILYTREAVDMJZWBPYKXURRTBJYCNMQKHGPFSAEKPCIYHHSNPTZLEUAPUUIXVUSROIMCYSMNJWGLJQWMLNBRVFT");
    msg.ecount = 78U;
    msg.enames.assign("FNTGOEJWYDTBCMFTRZV");
    msg.ccount = 154U;
    msg.cnames.assign("OQRZMGXFTICQTOOTFPKCETFIMKATBKQYUNJUEZJFMVLOJXWKUVHTNSWSUKCJDUQRCGMMSEIHAXEQXYOXLQKJSPFWFZMRWOLEOPRRCDSPPSYFHHNYYLUVFVBNAHAADBZHZGFLEDDRZRGTLLTQWBCNNUDCZIVQIISFPACYPOWGITVYDRXT");
    msg.last_error.assign("WKVYGEHIOQDCAOVNQUHLTBNDOSNRGOMFJUBYRVAKLYWREYFPXVODHZMEKNKIQCPABGWJWIZZPPXTYTHZAUFEOGIDCBAXBSCQVJTFHCGMWVPNQZRNGMHQJISWPRYXKVRYTDXOTBNVEBVNBTFXZGPIFAWFXEEUZPKAPRUJUQKSZQLUHMTUFCAUGXDFULPOXWSXJRIHJYLSZHOALMMOKNCMSQAJKDCRNEDSCCQRDYMWBEJIK");
    msg.last_error_time = 0.788552356361;

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
    msg.setTimeStamp(0.483334905672);
    msg.setSource(60779U);
    msg.setSourceEntity(158U);
    msg.setDestination(18644U);
    msg.setDestinationEntity(105U);
    msg.mcount = 216U;
    msg.mnames.assign("JNYBOISDYRFELTPLBVQFBZAJLU");
    msg.ecount = 63U;
    msg.enames.assign("SIJECOVGHNMXINWDAGQHZLBXCSKTBPUAAWPQFRGVZVERMWDYKXYOWXZHKBHRUJLGYAKLJFTGQMWLJQJQJKPUMIBODKFOQIXWDKBREXYNMEBRGCFUCSQATONDZPLAEJZHNLERXZSRHLSWPITUIHDCVKBAZSQVVIHGUUHYYUFEKZMJTNPCTAQGY");
    msg.ccount = 55U;
    msg.cnames.assign("KDDLMDUAFXSVKEVPJMDRTOWODSRTVLHCCTIKNAYXQOWIGDJQYKVCLZGBLFZOFUJOWBQFVPIQWJXUBUVRHCJJERMYGMOZUBRPTWBDYNQSHISCRSAAMTY");
    msg.last_error.assign("CJYQKOMXSLIRPZLAKLHEHZFYZKDMXZHCPJLIJVAQLQRQUXPOEGPVAJNDRWHWOFKZJXQYFNGMWQNDAVENTRIKWJTKGJBRCQRFUCDNTNSIVUKCPDSQMAYLFMBOVASVAOFHTCMPUYXIQGTVUSOWGHCCIEXILVMFKBTSHEHICJULESAWUPODCYRUABDQDETZH");
    msg.last_error_time = 0.291956074526;

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
    msg.setTimeStamp(0.396003467372);
    msg.setSource(35693U);
    msg.setSourceEntity(132U);
    msg.setDestination(57516U);
    msg.setDestinationEntity(105U);
    msg.mask = 162U;
    msg.max_depth = 0.0908781223613;
    msg.min_altitude = 0.667580599099;
    msg.max_altitude = 0.222565396876;
    msg.min_speed = 0.318322353033;
    msg.max_speed = 0.156497545096;
    msg.max_vrate = 0.529325015334;
    msg.lat = 0.669273818701;
    msg.lon = 0.81939412174;
    msg.orientation = 0.176736764018;
    msg.width = 0.673178007956;
    msg.length = 0.563424727916;

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
    msg.setTimeStamp(0.240997793556);
    msg.setSource(10607U);
    msg.setSourceEntity(149U);
    msg.setDestination(60956U);
    msg.setDestinationEntity(88U);
    msg.mask = 27U;
    msg.max_depth = 0.0701848378574;
    msg.min_altitude = 0.538016682935;
    msg.max_altitude = 0.16333193564;
    msg.min_speed = 0.678302495581;
    msg.max_speed = 0.152968970431;
    msg.max_vrate = 0.578764461464;
    msg.lat = 0.916210539153;
    msg.lon = 0.0618409166161;
    msg.orientation = 0.321183474275;
    msg.width = 0.556284849417;
    msg.length = 0.407364381124;

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
    msg.setTimeStamp(0.87290019725);
    msg.setSource(37829U);
    msg.setSourceEntity(106U);
    msg.setDestination(47395U);
    msg.setDestinationEntity(159U);
    msg.mask = 158U;
    msg.max_depth = 0.270424800425;
    msg.min_altitude = 0.494995893463;
    msg.max_altitude = 0.325757537717;
    msg.min_speed = 0.155919423053;
    msg.max_speed = 0.228085117145;
    msg.max_vrate = 0.562948838278;
    msg.lat = 0.909971020729;
    msg.lon = 0.101585667292;
    msg.orientation = 0.464654634157;
    msg.width = 0.766950997319;
    msg.length = 0.155195644548;

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
    msg.setTimeStamp(0.164036615003);
    msg.setSource(20793U);
    msg.setSourceEntity(192U);
    msg.setDestination(680U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.254525972508);
    msg.setSource(36972U);
    msg.setSourceEntity(250U);
    msg.setDestination(35923U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.304292569886);
    msg.setSource(44579U);
    msg.setSourceEntity(213U);
    msg.setDestination(58698U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.509697138122);
    msg.setSource(24714U);
    msg.setSourceEntity(128U);
    msg.setDestination(15694U);
    msg.setDestinationEntity(121U);
    msg.duration = 9148U;

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
    msg.setTimeStamp(0.507168163911);
    msg.setSource(24239U);
    msg.setSourceEntity(217U);
    msg.setDestination(11260U);
    msg.setDestinationEntity(31U);
    msg.duration = 3721U;

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
    msg.setTimeStamp(0.100350786923);
    msg.setSource(36454U);
    msg.setSourceEntity(196U);
    msg.setDestination(65137U);
    msg.setDestinationEntity(157U);
    msg.duration = 35931U;

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
    msg.setTimeStamp(0.885084902664);
    msg.setSource(17866U);
    msg.setSourceEntity(128U);
    msg.setDestination(40076U);
    msg.setDestinationEntity(56U);
    msg.enable = 97U;
    msg.mask = 1331273813U;
    msg.scope_ref = 3280156512U;

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
    msg.setTimeStamp(0.654921377525);
    msg.setSource(42715U);
    msg.setSourceEntity(218U);
    msg.setDestination(6200U);
    msg.setDestinationEntity(170U);
    msg.enable = 204U;
    msg.mask = 2838861375U;
    msg.scope_ref = 2133250055U;

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
    msg.setTimeStamp(0.86075488242);
    msg.setSource(10418U);
    msg.setSourceEntity(224U);
    msg.setDestination(8782U);
    msg.setDestinationEntity(48U);
    msg.enable = 63U;
    msg.mask = 555624711U;
    msg.scope_ref = 776395349U;

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
    msg.setTimeStamp(0.843264307322);
    msg.setSource(48759U);
    msg.setSourceEntity(60U);
    msg.setDestination(54085U);
    msg.setDestinationEntity(175U);
    msg.medium = 91U;

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
    msg.setTimeStamp(0.858593841379);
    msg.setSource(48711U);
    msg.setSourceEntity(246U);
    msg.setDestination(22776U);
    msg.setDestinationEntity(94U);
    msg.medium = 64U;

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
    msg.setTimeStamp(0.571436534101);
    msg.setSource(43294U);
    msg.setSourceEntity(204U);
    msg.setDestination(52810U);
    msg.setDestinationEntity(78U);
    msg.medium = 49U;

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
    msg.setTimeStamp(0.868369808616);
    msg.setSource(30220U);
    msg.setSourceEntity(114U);
    msg.setDestination(37278U);
    msg.setDestinationEntity(199U);
    msg.value = 0.429337409511;
    msg.type = 200U;

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
    msg.setTimeStamp(0.679619228127);
    msg.setSource(61646U);
    msg.setSourceEntity(23U);
    msg.setDestination(63174U);
    msg.setDestinationEntity(218U);
    msg.value = 0.387153564194;
    msg.type = 217U;

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
    msg.setTimeStamp(0.455812142855);
    msg.setSource(9614U);
    msg.setSourceEntity(82U);
    msg.setDestination(55495U);
    msg.setDestinationEntity(137U);
    msg.value = 0.912368359699;
    msg.type = 188U;

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
    msg.setTimeStamp(0.836067030423);
    msg.setSource(27769U);
    msg.setSourceEntity(136U);
    msg.setDestination(19813U);
    msg.setDestinationEntity(165U);
    msg.possimerr = 0.0841244977909;
    msg.converg = 0.425088989534;
    msg.turbulence = 0.0629572075313;
    msg.possimmon = 29U;
    msg.commmon = 196U;
    msg.convergmon = 101U;

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
    msg.setTimeStamp(0.740762318216);
    msg.setSource(50591U);
    msg.setSourceEntity(92U);
    msg.setDestination(22915U);
    msg.setDestinationEntity(140U);
    msg.possimerr = 0.503753458738;
    msg.converg = 0.300784055126;
    msg.turbulence = 0.119617850163;
    msg.possimmon = 68U;
    msg.commmon = 65U;
    msg.convergmon = 83U;

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
    msg.setTimeStamp(0.506776050659);
    msg.setSource(46042U);
    msg.setSourceEntity(38U);
    msg.setDestination(87U);
    msg.setDestinationEntity(182U);
    msg.possimerr = 0.223406866252;
    msg.converg = 0.338326369889;
    msg.turbulence = 0.752049348431;
    msg.possimmon = 120U;
    msg.commmon = 8U;
    msg.convergmon = 90U;

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
    msg.setTimeStamp(0.883568872345);
    msg.setSource(27642U);
    msg.setSourceEntity(24U);
    msg.setDestination(64808U);
    msg.setDestinationEntity(230U);
    msg.autonomy = 121U;
    msg.mode.assign("NQBETCCGBRNALJNTXDBYCJLKYTHMPSRHEPOUHZNIQGJHQGBKHXREOFSIKYTIRLNVKPOQUUGVTAKAYXOVTPEVUACVHBWOFBCJNZYUXRAKSSJXOYWCTYPRYSUGIAHULYHXLLZKWQNPMFJSOGMTQFFJLSKNXKEDWZCFWSMQZMDPDEAZMVBZPULIECCDWWPNMEDHVRI");

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
    msg.setTimeStamp(0.114679738988);
    msg.setSource(56965U);
    msg.setSourceEntity(227U);
    msg.setDestination(41964U);
    msg.setDestinationEntity(239U);
    msg.autonomy = 39U;
    msg.mode.assign("QCVOYKDDLMAZYGRFOWVILWCJLYKOGHPBQODRJATENZWFJKWFWSMBKVVWSXSAMWIEICMOBQBYOBCXIXFHUFSWZOTBDWYXKSLHFYNAAWKINTHRJQGGAEVKMEGRGACAFUIHVPIJCSHTUMCEVUQMHFNJIDYQN");

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
    msg.setTimeStamp(0.582912351279);
    msg.setSource(43101U);
    msg.setSourceEntity(213U);
    msg.setDestination(55970U);
    msg.setDestinationEntity(181U);
    msg.autonomy = 164U;
    msg.mode.assign("YEAOUEFREWGMNHCZLLNRNQVACHTZFIQVXLHCAMZPVGQCOENQDKQKYETXQCKWIFGGTNRPVJERRNUZPWXWSJKBYTFBOYSJKDDAHJMIMCICDMQOBWFS");

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
    msg.setTimeStamp(0.649240320317);
    msg.setSource(53366U);
    msg.setSourceEntity(28U);
    msg.setDestination(18519U);
    msg.setDestinationEntity(99U);
    msg.type = 191U;
    msg.op = 126U;
    msg.possimerr = 0.419961604337;
    msg.converg = 0.0839640075961;
    msg.turbulence = 0.672027886899;
    msg.possimmon = 26U;
    msg.commmon = 236U;
    msg.convergmon = 121U;

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
    msg.setTimeStamp(0.441387314245);
    msg.setSource(35727U);
    msg.setSourceEntity(73U);
    msg.setDestination(57505U);
    msg.setDestinationEntity(38U);
    msg.type = 73U;
    msg.op = 165U;
    msg.possimerr = 0.911091928976;
    msg.converg = 0.222517561175;
    msg.turbulence = 0.239323996397;
    msg.possimmon = 218U;
    msg.commmon = 29U;
    msg.convergmon = 218U;

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
    msg.setTimeStamp(0.854021005049);
    msg.setSource(53369U);
    msg.setSourceEntity(141U);
    msg.setDestination(23761U);
    msg.setDestinationEntity(148U);
    msg.type = 91U;
    msg.op = 192U;
    msg.possimerr = 0.931410485227;
    msg.converg = 0.666215842174;
    msg.turbulence = 0.177670166542;
    msg.possimmon = 84U;
    msg.commmon = 89U;
    msg.convergmon = 173U;

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
    msg.setTimeStamp(0.135409306417);
    msg.setSource(32571U);
    msg.setSourceEntity(78U);
    msg.setDestination(12422U);
    msg.setDestinationEntity(165U);
    msg.op = 65U;
    msg.comm_interface = 238U;
    msg.period = 51651U;
    msg.sys_dst.assign("UQRYTHJMFQXKXLGLZILZZQUONVPYDFLDOJJGDWUYKZFDLMTVJZVLFRZCNWVMCKUQABAVDYWWOFPAIMKSQNTBSREGDSRIUPSEZLAUICUGQOPMRXJGOPAQXEWPSTBKULTCMYAURPJONHRVJNIBXCCYIVMCSTZJEURTHICFGJFBDOHOTEIKTYVSHTFFPNKVNF");

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
    msg.setTimeStamp(0.677933651963);
    msg.setSource(63483U);
    msg.setSourceEntity(194U);
    msg.setDestination(26552U);
    msg.setDestinationEntity(133U);
    msg.op = 154U;
    msg.comm_interface = 117U;
    msg.period = 11245U;
    msg.sys_dst.assign("DYHYACKSPXUKMBOLGGCNFYSARXBZLBVRBNJHVPYVQWOJFRAEGQTRVCNXBSIGBIWXTVUQLVWEWQANVOSJLODHRCCL");

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
    msg.setTimeStamp(0.520488823203);
    msg.setSource(9148U);
    msg.setSourceEntity(91U);
    msg.setDestination(51352U);
    msg.setDestinationEntity(143U);
    msg.op = 163U;
    msg.comm_interface = 89U;
    msg.period = 16590U;
    msg.sys_dst.assign("HBAKHUDYXSMDWMBGJTUKBEGQVJCAGCKKPEBG");

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
    msg.setTimeStamp(0.7917623047);
    msg.setSource(12443U);
    msg.setSourceEntity(157U);
    msg.setDestination(61761U);
    msg.setDestinationEntity(110U);
    msg.stime = 3767224979U;
    msg.latitude = 0.52624295416;
    msg.longitude = 0.566414906563;
    msg.altitude = 23059U;
    msg.depth = 19931U;
    msg.heading = 34718U;
    msg.speed = -5215;
    msg.fuel = -122;
    msg.exec_state = 78;
    msg.plan_checksum = 21523U;

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
    msg.setTimeStamp(0.93839669824);
    msg.setSource(1656U);
    msg.setSourceEntity(179U);
    msg.setDestination(46317U);
    msg.setDestinationEntity(42U);
    msg.stime = 1726283646U;
    msg.latitude = 0.986487662953;
    msg.longitude = 0.380719848254;
    msg.altitude = 337U;
    msg.depth = 1954U;
    msg.heading = 15473U;
    msg.speed = -31079;
    msg.fuel = 114;
    msg.exec_state = 26;
    msg.plan_checksum = 47048U;

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
    msg.setTimeStamp(0.0405850822147);
    msg.setSource(14108U);
    msg.setSourceEntity(123U);
    msg.setDestination(43580U);
    msg.setDestinationEntity(59U);
    msg.stime = 1751500114U;
    msg.latitude = 0.791320165352;
    msg.longitude = 0.236064457471;
    msg.altitude = 24032U;
    msg.depth = 32058U;
    msg.heading = 53683U;
    msg.speed = -19368;
    msg.fuel = -112;
    msg.exec_state = 87;
    msg.plan_checksum = 56458U;

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
    msg.setTimeStamp(0.765582116536);
    msg.setSource(10522U);
    msg.setSourceEntity(73U);
    msg.setDestination(49533U);
    msg.setDestinationEntity(187U);
    msg.req_id = 58137U;
    msg.comm_mean = 107U;
    msg.destination.assign("SULNWVFVUWTPMFIGARHKIALCAFVGTXEMDIYKZVSQPNHNZIOFHNFAIQVVVRGZBEDCFTNJYSXICE");
    msg.deadline = 0.260811928401;
    msg.range = 0.578905031613;
    msg.data_mode = 158U;
    IMC::QueryEntityActivationState tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("RUXHYRKPHDUBWPMWZFAQFBWKQZNJHIGJNIEGTTWQWTMELAKUCYERDCWBOLROSELRKLVCIGUTHOTXQQSSBYPRGAQFXAMKYGYVSHSGZLEQDVVVWRNBJOPROZCMKQPPIMHGEJOXCTGVMVFBIFADLHBAJCUIWFRNDHY");
    const char tmp_msg_1[] = {55, 55, 46, -28, 106, -66, -57, 28, 97, -118, 19, -102, 89, 80, -109, 70, 100, -27, -2, -56, -115, 82, 73, 80, 2, -74, 51, -22, -52, 61, -33, 103, 39, 39, 67, 98, -96, -16, 14, -36, 72, 17, 103, 95, 36, 83, 120, -45, -30, 31, 23, 65, -41, -77, -62, 96, 28, 13, -81, 23, -39, -101, 0, 3, -42, 77, 92, -91, -105, 101, -46, -88, -84, 73, -78, -13, -110, -49, 123, 35, 32, 111, 26, 62, 2, 96, 35, 38, -122, -37, -115, 33, 110, -30, -108, 95, -117, -21, -95, -118, -20, -21, 21, 66, -85, 15, -116, -3, 93, -69, 99, 95, -4, 42, -100, 1, -83, -126, 49, -111, 82, 81, -46, 30, 15, 126, 36, -7, 100, -31, -124, 43, -92, 68, -108, 39, 48, 63, 95, 10, 45, 116, -62, -69, 57, -62, 110, 24, 81, 125, -98, -10, -117, -16, 10, -44, -66, 50, -103, 28, -66, -58, -79, 53, -45, 102, -95, -13, 77, -77, -116, 80, 35, -56, -104, 124, 120, -42, -70, 85, -77, -16, -87, 74, 39, 38, 88, 49, 27, 123, 61, 5, -72, -127, 21, 44, -106, -2, -20, -93, -119, 15, 21, 1, -34, -2, 95, 61, 100, -82, -113, 10, 86, 99, -101, -27, -126, -123, 123, 36, 5, -118, 83, 55, -125, -77, 88, -73, -72, -92, -78, -58, -115, 84, -91, -36, -69, -124, 38, 92, 40, 111, -64, -116, -79};
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
    msg.setTimeStamp(0.0557504502553);
    msg.setSource(6173U);
    msg.setSourceEntity(211U);
    msg.setDestination(28978U);
    msg.setDestinationEntity(218U);
    msg.req_id = 11209U;
    msg.comm_mean = 242U;
    msg.destination.assign("BGEMQRDAZKVTSIOXRJIOJJAZSGXRDFBUDAJKUCYBFMZIVNTEVSEXSYMWPEGFHMUPQYADJBTDVWNOLXMPONWVNOLBJSFHQPEWZLWHNWGWBRAEUIMKC");
    msg.deadline = 0.633655046311;
    msg.range = 0.998310624825;
    msg.data_mode = 81U;
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 3150487551U;
    tmp_msg_0.value = 29U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XRAODEUSUWBKDNBCMSGARHBUXFGVATRCVFAGXZODKCVETNCEMUPEOLKJWVDTUNGTZCPUBMJZZNJICVKILCQVMWHIKNTFRGFLJHEEMWWIIQQMIBALNMPDFHYYHZVSPHZAXHAFRFYIBRYOLVYGYTEZQWKGTAGSSYUKOEIOPFGHHYZPOBYRKLOQSLNDQTQYJNMEXXJXKUDFPRVOKXI");
    const char tmp_msg_1[] = {2, 110, -26, -55, 39, -44, -123, 118, 73, -91, -22, 10, 14, -53, 59, 125, 1, 105, -101, -67, -11, -73, -84, 21, 28, 109, -53, 9, 14, -99, 108, -54, -51, 123, -6, -114, -121, 45, 36, 121, 90, -24, -37, -99, 40, -76, -58, 109, -86, -47, 32, 68, -69, -88, 111, 78, -60, 89, -91, -43, -121, -36, -53, -84, -106, -19, 54, -11, 122, 19, 15, -15, -70, -58, -47, -102, 39, -36, -76, 23, 110, -125, -11, 30, 90, 17, -34, -113, -89, 82, 45, 54, 110, -53, -103, 79, -127, 113, 55, 104, 109, -7, -60, -114, -83, -37, -40, 125, -23, -41, 79, -88, 52, -88, 44, 50, -22, -115, -120, -61, 97, 51, 68, -47, -23, -63, -124, -54, 111, -92, -107, -108, 38, -30, 9, 50, -85, 79, -36, 59, -40, -46, 119, -127, -24, -35, 17, 45, -8, 22, -78, -85, 109, 84, -23, 1, 97, 74, -119, -25, 12, 11, -99, 24, -13, 72, -118};
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
    msg.setTimeStamp(0.993557052378);
    msg.setSource(42558U);
    msg.setSourceEntity(210U);
    msg.setDestination(30656U);
    msg.setDestinationEntity(227U);
    msg.req_id = 16373U;
    msg.comm_mean = 192U;
    msg.destination.assign("IZAUUJLSEWPGQBMPAAPXNIOTNJVPXVKBYSITDFRFWJZTU");
    msg.deadline = 0.379621614236;
    msg.range = 0.196707855495;
    msg.data_mode = 3U;
    IMC::TCPStatus tmp_msg_0;
    tmp_msg_0.req_id = 24455U;
    tmp_msg_0.status = 125U;
    tmp_msg_0.info.assign("ZTKALOKEGTSAAMYCJZBWIDFOTJXMVDLPBIBQXNDHCKEZKJHYIECSHFPOIAUIFVVKRYYYJVHIIFCUWXQL");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZZTFDWSZWUTAYUIDHENNGHPMXNSVNTOQDDBKHPEJRUYAAURAEGCIXQSZROIDIKALEERIGUMTFQYHKSJNK");
    const char tmp_msg_1[] = {47, -29, 116, 119, 5, 31, 44, 26, 103, 85, -44, 27, -85, -44, 103, 37, -31, 31, -35, -3, -87, -116, -117, -66, 120, 109, 105, 98, -90, -86, 34, -60, -36, -114, -69, -52, -3, 51, 98, -89, -38, 40, 17, -73, -105, 115, 25, -8, 10, 32, 34, 99, 49, -116, 66, 83, 26, -75, -66, 90, 114, -75, -127, -43, 34, -126, 87, 77, -117, -56, 105, 78, -83, 6, -120, -104, -21, -61, 46, 47, 114, 42, -87, 51, -66, -86, -99, -40, 38, -63, 7, 7, 124, 90, 88, 90, -45, 80, -31, 4, 2, -45, 14, 34, 116, 78, -29, -49, -94, 42, -105, -5, 62, -1, -44, 76, -94, 6, 83};
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
    msg.setTimeStamp(0.852920071999);
    msg.setSource(58111U);
    msg.setSourceEntity(23U);
    msg.setDestination(27321U);
    msg.setDestinationEntity(87U);
    msg.req_id = 6415U;
    msg.status = 237U;
    msg.range = 0.214647173963;
    msg.info.assign("LNGDSOMJHZUPLFDYWSMJVQDKKLREBVPTIJYJWTOCOZOOVLVKYCVEYKAHJWAQWYQPVVGDGPBPXYZEDACNSRNUMRCQQKZTWXTYEIAVRHJEBSLMHDWGRQTLOIIUYUIUULNHUXIFFYZECFSLOJSDUCKXDNXTNOFCQ");

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
    msg.setTimeStamp(0.49903065492);
    msg.setSource(1077U);
    msg.setSourceEntity(59U);
    msg.setDestination(997U);
    msg.setDestinationEntity(201U);
    msg.req_id = 11056U;
    msg.status = 206U;
    msg.range = 0.199624037265;
    msg.info.assign("JGOYXSFAUWRYPEEZBIPGNFFYWJFZANHMHCTLKRBYIHAHGAHPOYCQJQIJDWNDPGNOOVRQZCDRNLFCFJVKBWHKRYTKSXKQMMVDYZMLRBXANWCEXGVETZUXNBELTZBSILVTKWTDWBEUM");

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
    msg.setTimeStamp(0.95638567271);
    msg.setSource(32646U);
    msg.setSourceEntity(88U);
    msg.setDestination(25772U);
    msg.setDestinationEntity(151U);
    msg.req_id = 3908U;
    msg.status = 240U;
    msg.range = 0.482542478999;
    msg.info.assign("REEXQJSBIELEOLSUAAAFNUXHVSQPGPPLKKAYNOWNZGCCTOCNHIRDYDYOTDTBQAZKIFICSCAXRGCHRZVSTERNB");

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
    msg.setTimeStamp(0.608733933579);
    msg.setSource(34960U);
    msg.setSourceEntity(253U);
    msg.setDestination(8260U);
    msg.setDestinationEntity(179U);
    msg.req_id = 22606U;
    msg.destination.assign("SSXWZYJJNBXXVYSUCOHQNJIUAEFRPBPLRVZBNMIJISTRTMXYBVLPMYAIEMOEDQNOQQTPZ");
    msg.timeout = 0.3720361107;
    msg.sms_text.assign("VFVRWYZSJOBZKUTBMTCPCPQANKFHMVQFAVXHJUQTOUWWREJZCFGYGFQHGGAMSBXBSKILIPKJUKPMIGOYLYGVZATNTROXXRRBFPRDXOEZIKKLGWRPOWGSLWNSMEBENNXUHTMCRETNVDCFPCDHNZNAGXNYKBKJCAKOHTEIDUDYJUWAAPFD");

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
    msg.setTimeStamp(0.542503585918);
    msg.setSource(11153U);
    msg.setSourceEntity(199U);
    msg.setDestination(61613U);
    msg.setDestinationEntity(24U);
    msg.req_id = 29964U;
    msg.destination.assign("XDQBLWTBQZJJIHUGKODVPMHIORNFKJRUHMMODTFNGWLOZQKRORBPQGRKVTABWANPUPIZBNSYGNRAFBUGEMXCHYLWDUJSTLACWRXYPEFHVSASVEDCSNLCQZVOTIIQEUYSFMVJCEYVOWLDFLFXXSTTFXOGHPENCXQHIDNFRLJGAKFZUYECZZEMHJZMKBSLGBAPAUMDWVWZVYNVPUJQKSJPHOGRYACMHTDIWAQLMIUITEYTKER");
    msg.timeout = 0.831765623079;
    msg.sms_text.assign("IEVAGJVNZYNEGTBDPWEJRXEFBCJMDAJILOVMOXZWBEOICRFHHWIAHDKUEZLKLYWRQFAPTQXVTK");

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
    msg.setTimeStamp(0.51742516635);
    msg.setSource(58398U);
    msg.setSourceEntity(45U);
    msg.setDestination(35093U);
    msg.setDestinationEntity(225U);
    msg.req_id = 48123U;
    msg.destination.assign("ZEZPELDLQWBUJBFLASKXKSZRKOTLJOQNVURWODRQVGDBVIGMPYDVPXDNCCXKAWHSCUQACLNLOWWAMHTYQPEIWSRSHIFUMVGYKJOCWRKGIQP");
    msg.timeout = 0.808677786531;
    msg.sms_text.assign("ADAYWTQRQVENGZKVOKYDTOFLKWLHBFDBYYBJLTXQRVCRFCJWXVSUGFIQDCNMGVXAROBVDQFXYMINIMJGTMCKURSIQMJEBJJGJZXENLPGMSWRRKECFLKPEHY");

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
    msg.setTimeStamp(0.582356257359);
    msg.setSource(28246U);
    msg.setSourceEntity(252U);
    msg.setDestination(58283U);
    msg.setDestinationEntity(82U);
    msg.req_id = 52765U;
    msg.status = 80U;
    msg.info.assign("CIZOTEKQHGXLJXEOCZVJMHRFOIESHIILAFWKRENUTWNYTWNOPNZEBYUFMGJUHTPKWBIJGWZFEJFOSBSMEATMAT");

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
    msg.setTimeStamp(0.835228483823);
    msg.setSource(8433U);
    msg.setSourceEntity(89U);
    msg.setDestination(56013U);
    msg.setDestinationEntity(117U);
    msg.req_id = 42702U;
    msg.status = 142U;
    msg.info.assign("WPUBCGJHNDFILFNBPDDLWXKYPHQWOROMLPRZNJQSCXIVSMSVWQNACHEXMGSXSQFPWDUTFAPKYKJANRLGYGLNSOTKUBIUEVBCZZUZZHGKLBCS");

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
    msg.setTimeStamp(0.512349388543);
    msg.setSource(19884U);
    msg.setSourceEntity(98U);
    msg.setDestination(14933U);
    msg.setDestinationEntity(14U);
    msg.req_id = 45404U;
    msg.status = 225U;
    msg.info.assign("HKJYKZGRYRNCFGSFCTBLHGBLXZOACHSAQXWJZMKKMSKPAXSJYUQKZRXVEDOMYNTTCXSY");

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
    msg.setTimeStamp(0.228001099202);
    msg.setSource(51385U);
    msg.setSourceEntity(212U);
    msg.setDestination(63732U);
    msg.setDestinationEntity(15U);
    msg.state = 214U;

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
    msg.setTimeStamp(0.531694694633);
    msg.setSource(42478U);
    msg.setSourceEntity(248U);
    msg.setDestination(27076U);
    msg.setDestinationEntity(37U);
    msg.state = 122U;

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
    msg.setTimeStamp(0.816750368902);
    msg.setSource(32517U);
    msg.setSourceEntity(176U);
    msg.setDestination(56643U);
    msg.setDestinationEntity(200U);
    msg.state = 100U;

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
    msg.setTimeStamp(0.706305417671);
    msg.setSource(42377U);
    msg.setSourceEntity(151U);
    msg.setDestination(4079U);
    msg.setDestinationEntity(250U);
    msg.state = 1U;

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
    msg.setTimeStamp(0.999467871876);
    msg.setSource(11258U);
    msg.setSourceEntity(121U);
    msg.setDestination(28873U);
    msg.setDestinationEntity(115U);
    msg.state = 171U;

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
    msg.setTimeStamp(0.565415576089);
    msg.setSource(59089U);
    msg.setSourceEntity(226U);
    msg.setDestination(22484U);
    msg.setDestinationEntity(221U);
    msg.state = 203U;

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
    msg.setTimeStamp(0.585138576316);
    msg.setSource(57473U);
    msg.setSourceEntity(89U);
    msg.setDestination(43023U);
    msg.setDestinationEntity(196U);
    msg.req_id = 34360U;
    msg.destination.assign("OEBIBKIAYPFNNZSGMNRXMYUJUXGBCLDNYZZXQECHPQTTNYEIWKGDKLTDPORSMWULMKDPEQAIXYAVQFSZCHVDVGXTNTTGQKVCBNHHDGAB");
    msg.timeout = 0.640292956035;
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.887770427066;
    tmp_msg_0.dist_min_abs = 0.655270575033;
    tmp_msg_0.dist_min_mean = 0.302684452151;
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
    msg.setTimeStamp(0.788501667266);
    msg.setSource(1732U);
    msg.setSourceEntity(53U);
    msg.setDestination(47545U);
    msg.setDestinationEntity(118U);
    msg.req_id = 39506U;
    msg.destination.assign("RYKYHOOAWFLHPPUQLOJCQMILSOEZLOMSPNCQWFRXLYZPAMPIJFXUJQOKRUMSUAFRZESKBJJFKMZWNEFNQIBAVIMJGJYXTEIRPVKZWRNKWSEKCZGAEGNTZFEUSGVTFZNDFEUYUMRBDZACTVCDQBHKBGOLNPWHXXWBTDYTWHBIPGBUQXGYXVSRGDHYQLKLWHTJPZQCYWOYIUCDSKD");
    msg.timeout = 0.800496786745;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("ZMGUTKZYCQVDLBKXJWSHCKEPKNOSXVSEIAPRYZWLOKTYHSIXBWYSOQHWWVLTRSMUTFHJFCOZOWUQTLAMJMDBLWEMQJMYLMMRPUKYCIRDRVIFTRRXUOCDEVNVPBXBWAZXASUQMNGYZPTZHPAHJHRAGKGZFCYISUCNLWIHZUDGPQKFSGOVEP");
    tmp_msg_0.value = 39U;
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
    msg.setTimeStamp(0.189938055861);
    msg.setSource(5794U);
    msg.setSourceEntity(18U);
    msg.setDestination(5300U);
    msg.setDestinationEntity(151U);
    msg.req_id = 43979U;
    msg.destination.assign("OKTOJVZTOROTCNSBLYJZPXHBSVF");
    msg.timeout = 0.0940057289421;
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 3686526975U;
    tmp_msg_0.value = 59U;
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
    msg.setTimeStamp(0.221917225994);
    msg.setSource(13458U);
    msg.setSourceEntity(10U);
    msg.setDestination(3474U);
    msg.setDestinationEntity(28U);
    msg.req_id = 13281U;
    msg.status = 178U;
    msg.info.assign("YHVWBCERHAIYGTAZMDQCDEKXGRVNURBZZSTROJFUIBHQKKDZCLLOHQKXNELOSZIJPMHEKGXGCOBAFFSIKVKBJLNSTQUMLDKHHSGPZTIQOFUOWYLBSABIILBEAJICZWCPXUXOVDRPWNCDMJPFVYPPJJTTVSJGNOYYQSNNQFJURUPFURWZLGUU");

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
    msg.setTimeStamp(0.373197096563);
    msg.setSource(4604U);
    msg.setSourceEntity(179U);
    msg.setDestination(4970U);
    msg.setDestinationEntity(102U);
    msg.req_id = 51379U;
    msg.status = 62U;
    msg.info.assign("BNXYSCISHIMVCMNLWNPXLJXWOABOHQHHYVAWTJSZMEATYICAXFCULGKAEFDBOXN");

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
    msg.setTimeStamp(0.334597266535);
    msg.setSource(29308U);
    msg.setSourceEntity(95U);
    msg.setDestination(14356U);
    msg.setDestinationEntity(178U);
    msg.req_id = 51457U;
    msg.status = 241U;
    msg.info.assign("CSYYVMCQXXFQTWRNZAFGMKSKMBLJIEINGGEWBQEGQLYSELNETDMCUDDVYUCXVRSIGAUOGXSHUWYFUHLWJDOUOYICESJZ");

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
    msg.setTimeStamp(0.954550265758);
    msg.setSource(34341U);
    msg.setSourceEntity(78U);
    msg.setDestination(37187U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.885546418127);
    msg.setSource(944U);
    msg.setSourceEntity(162U);
    msg.setDestination(28181U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.625160258685);
    msg.setSource(7313U);
    msg.setSourceEntity(6U);
    msg.setDestination(1917U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.699545960666);
    msg.setSource(23340U);
    msg.setSourceEntity(100U);
    msg.setDestination(20020U);
    msg.setDestinationEntity(65U);
    msg.plan_id.assign("EDNYUXDSIGVLPYJFHIBEWROOGKJWHOZVXCXYYRTRKZOPWAXEFGGZOHUFICTWAZZUJFLNLKJHRPSLKLRMUCWPBIQJNLAPKRCQNMIDDHUPRATKOYNZVHTUCDSJIJMCFPRMMMBNBSFGAVFXJFNGTEVNBYSVXSBGLQEUT");
    msg.description.assign("CPNYPEFAOWURCXLKZMZMJMOAEHWBYRIKFJKGSLDBDSHUOXQOWQIYKXYMAVFMLGOZCSCFSTEWWFXTRVVVPXGRJJXHRFPBBEEADQBBSNHLUHYXZJTZQVAYDSCDUTOZTMRTJANSCWNGPNXMUVCLKGEHLKKFINZLWHIDAVEKDSFBDPOKPECWBEJZVRUWNHHQRUTZRMMXHPGZLNPLTYTPI");
    msg.vnamespace.assign("ZEZMYABLMUSCPTDDZKHPXRVJYQGPFBFHCDLNWNVQWSCZMIJBLGWMYKTURXVQAAAFTDIVYBJYHPVHJFNBCETKCIJHHTXRPPSXNZMSRLUVD");
    msg.start_man_id.assign("MJBCGBMROTYMEHCUDWTZYUHLJHRGJXUATLBKDZLJPARCSCEKCTHNLYBOIQSVIOZXGKQTRMHEAIABPJILRFUMYFNGDWAVRICJWVBGFWXMKZQVCBKSDKIBQQNSMDYWDOXGFOGMWQKHAFEKPOOUBEXOYSGPJZVHSDNYURVMJAPIYINNTLLHFVAIPXPEHFESSWSYNDAWKTCZNRADB");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("SNMBBILSKBCBCSXYALKIHRUUUJUGFNZDNWAWMPFZHYUEBKSGHQTEYFDNNTRDPXNHWZAXCAOWIBCFZHZMFPULYUVDIUPMNGL");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 59703U;
    tmp_tmp_msg_0_0.lat = 0.350150470756;
    tmp_tmp_msg_0_0.lon = 0.734434761854;
    tmp_tmp_msg_0_0.z = 0.715542162222;
    tmp_tmp_msg_0_0.z_units = 209U;
    tmp_tmp_msg_0_0.amplitude = 0.174848703961;
    tmp_tmp_msg_0_0.pitch = 0.566973448794;
    tmp_tmp_msg_0_0.speed = 0.216726098861;
    tmp_tmp_msg_0_0.speed_units = 91U;
    tmp_tmp_msg_0_0.custom.assign("NGOXNSRFHKL");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::SetPWM tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 165U;
    tmp_tmp_msg_0_1.period = 4077951888U;
    tmp_tmp_msg_0_1.duty_cycle = 3323920501U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::VesselWind tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.angle = 0.0455208037745;
    tmp_tmp_msg_0_2.reference.assign("DCLDPYXMSKVRJQOYJLDFPBHAMHUOTELJTHAWEPAFMLAUSPVLTTZCONHIOUGPLGSRIYNGNBUCZWKUMFLXSQEAQYENCQCGASFCRFBEOIJVNDQDKPTRISJVJCHTEJFNOWAEBXRZSOVGDIWSMFJGLHVUNIXWVHLTBYE");
    tmp_tmp_msg_0_2.speed = 0.807002558513;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("PBXQAQYYRZTAHKMWYABPDYMXNENUZYLDHHIRMXLSSZRBQWVHNJXXHGEPCBCMABWTHWNITBCGFLSUFUIHNMRTJGWSIFKQKGWKRMWXPIGNZQAUBFYJLLGIZNJDMNITSXELGPKEVPSGXLQYBWIZVFBKOLPRKEHJJVIVXDCOQATCDSOMZCPAUFLRMDTYSZDOJCRORZDTPURAECTVUQIGBJLEJVWOJUOCNT");
    tmp_msg_1.dest_man.assign("PLAWDRUXBWJJEQKQQVROAMOMCWHEKQZELUDALHNZVYWCGEQUZIOAUKEHCZIXMJUOVKGRJXKHMHECNFLISFYNJQWQUKNFDGABDG");
    tmp_msg_1.conditions.assign("EPLBNRDFMEMCWLAMIJRUULYAAYGVUMDKMXBHAASSZAOAAQRITFOURWXXUBRWNXEMLOCQYHBX");
    msg.transitions.push_back(tmp_msg_1);
    IMC::QueryEntityInfo tmp_msg_2;
    tmp_msg_2.id = 50U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::GetOperationalLimits tmp_msg_3;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.0265308974428);
    msg.setSource(43839U);
    msg.setSourceEntity(14U);
    msg.setDestination(45664U);
    msg.setDestinationEntity(50U);
    msg.plan_id.assign("BNPOEJPBWGKZAPIDLJYJVGLQUFKKHYCAZBGZMUOBENPZVQJVSTEYATLYSYJJCHFHRXEBNWMQISOOOGRFKZCKIMQLHXCBYKIRMPVTDSBKUEDTRRZJQLIUSESVMKGKPXTJFISUDFIVAIWUJXQXHCBSGGLQRGNRDAXMTZLNMCVCFAQSXFDZGSYXHLYNTWPLUBNOWRLEDHHPUHZTWNRU");
    msg.description.assign("SSXNEPBTZUYJEABNDLTDYQBQLNRZBXBXUZDZSCDNHFFIOPDRWNUJMAKPZBUCKWKVHKHHT");
    msg.vnamespace.assign("PVBYTEFOKUEAMFDQVLKVFZJSXPFJFODDSLPMVAZYFYGWPVLRWQLGSEARINKUNYIVNRQRCSVCNTYSWLJUJTCOQV");
    msg.start_man_id.assign("ADJSCTAKYTOWNZFGYGNKCTXKLQSJNACCOHHMLWFAPNPSNKOAHTXPMSFTG");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("FOVURVJUUADZQCDKEAKVGMXYMSGNXTHCNORQHUXPBYMHBATENVTYNXIPQDQHSTRZYZIQOWZLOLAYIQTFGPPHAMIGIFKEGWNTEIJPFNYMKTEYNPVYLWUOCZIBJJEOXCCCZUSVTJSQUBDBNLOPPASLKMPXZEQFKWVC");
    IMC::Goto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 8168U;
    tmp_tmp_msg_0_0.lat = 0.801031087744;
    tmp_tmp_msg_0_0.lon = 0.39352681627;
    tmp_tmp_msg_0_0.z = 0.0503382175626;
    tmp_tmp_msg_0_0.z_units = 0U;
    tmp_tmp_msg_0_0.speed = 0.876847116149;
    tmp_tmp_msg_0_0.speed_units = 220U;
    tmp_tmp_msg_0_0.roll = 0.343592468748;
    tmp_tmp_msg_0_0.pitch = 0.0232602927157;
    tmp_tmp_msg_0_0.yaw = 0.0826760872946;
    tmp_tmp_msg_0_0.custom.assign("QZIRWWTLNBPVHBWDKBHZIZTEKBNWAIBCAFGSBRZUXVSADCNVJXERDCUYJKUFHKUTLYZTWMQSGVJKFGCMJHKFNGOHEMXOTDCFYLZHXTLHPNSOXRWRGQYGQDCIYHDTIPRYPKPVSYQBJXCRMYRGIEBAKNEMEAVHLNCGLUNSQMHDLUQTXWZTEGFZCIXXZMTROEOSLNOODLAYQPDFSUCZYPJOMIFQQBEVDFKWSURWBJUIWMLXVJOSVJFAAJKOUVPAPP");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::FollowPoint tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.target.assign("XVKFPYRYCQGAEDEQHEIOZCCBBCGUKHIYZQUACIVUTVBSPZMQGVJNSXTAJWSIKYCJIWDAHFLJRKJAUGTDHQQOBRWIU");
    tmp_tmp_msg_0_1.max_speed = 0.582329245483;
    tmp_tmp_msg_0_1.speed_units = 235U;
    tmp_tmp_msg_0_1.lat = 0.981057642761;
    tmp_tmp_msg_0_1.lon = 0.916315194552;
    tmp_tmp_msg_0_1.z = 0.311804155837;
    tmp_tmp_msg_0_1.z_units = 38U;
    tmp_tmp_msg_0_1.custom.assign("BZVUEPTJPPJXFQNCIESKJDETHAQXKOPRORLFXZXFKIYFOFSULONRRESSNYYTLDWEIXLWPDKZHEVWMZIMJXNFEQYCGX");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Target tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.label.assign("PXXOSWQNUMEXDU");
    tmp_tmp_msg_0_2.lat = 0.126793970413;
    tmp_tmp_msg_0_2.lon = 0.337534106463;
    tmp_tmp_msg_0_2.z = 0.704259545681;
    tmp_tmp_msg_0_2.z_units = 184U;
    tmp_tmp_msg_0_2.cog = 0.57760638063;
    tmp_tmp_msg_0_2.sog = 0.146228535894;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.835201983652;
    tmp_msg_1.z_units = 33U;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.732213782409);
    msg.setSource(19461U);
    msg.setSourceEntity(186U);
    msg.setDestination(12932U);
    msg.setDestinationEntity(4U);
    msg.plan_id.assign("PVGENZRREIAXDATWLVWYDQGGBHKMJMSIPXXWVBOTCVSLLGOUCBRMOPSKYSWWDKLXHJECHCDIERACLHENBSOXAKNMFKVFSZJGMJNWDJXPCRIMYEANLDFFFTQTYHHWNOZJGCSOQAOPQAVBPBYTKKNZRIXK");
    msg.description.assign("XQRYCXOJLFRFXGZDLWAHEWRBBPIJCRUGHFDHZXWFDDEDSQPIOTUEKCILACCYBGKODRMPGPDJJAFGEUESSESYHIHAIJBPTMHOM");
    msg.vnamespace.assign("MCLUOVHDPNJHLEPWSGZAWLYWQVNJVRHZQWSEAWXSBUZQHZLMTUNTJIBHKSOEDPTVHOMNHOGZEELGUBBFJNCFDEKGCIRUHIVEIECWUYIYFGEFDOYYDHQRPMDXOFXYTTPKQBMMTIJZQLVEUAGKIMHWSVZUBAXCKCCXQXO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZAFZMVBKGSUGOZTJXUQCAGIFTVJFADGYNSSXMXJWRNJNRVNFUNJQIDQKLTBXDVIVYFEEOVWHLOYYYZWHYQORJSUGAMTLMN");
    tmp_msg_0.value.assign("UBFHXYKBEADBFPOUCDJWVLAKFNQRZNGXVBMVYTCTNJFXWSWKAFMMJCQSXWSQCXEMWUTWYDIXVOAITKUJLFOTO");
    tmp_msg_0.type = 59U;
    tmp_msg_0.access = 32U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("AEMAUJEDMKKGXVWRTMZYVVFAWHWHCAUWVIHTUHCLMGCROYPMOIBPCYQNDCJZLJBXDUJBZITUSLAQNFRNMGAQXWSIPVEKAFBGDHGLMKNTEBSWLLDIEXQIZXNFZVHPLGTIKPYZKBQRRXJOGULTWAQRKKVZRISFHWQJPYDSSZTBAPOCNWGZVDUIMLSTEDXHYEHMROFMBFQJOVFPZQXGODSOYNEEBBQNRJSXYVTHJUKNRNFUDLKPYGUSCEF");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("RUTKMZMSKOSQOJALL");
    IMC::Loiter tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 42492U;
    tmp_tmp_msg_1_0.lat = 0.965163610036;
    tmp_tmp_msg_1_0.lon = 0.587501581977;
    tmp_tmp_msg_1_0.z = 0.203521298433;
    tmp_tmp_msg_1_0.z_units = 98U;
    tmp_tmp_msg_1_0.duration = 59928U;
    tmp_tmp_msg_1_0.speed = 0.25716635089;
    tmp_tmp_msg_1_0.speed_units = 106U;
    tmp_tmp_msg_1_0.type = 196U;
    tmp_tmp_msg_1_0.radius = 0.324596622286;
    tmp_tmp_msg_1_0.length = 0.150489711106;
    tmp_tmp_msg_1_0.bearing = 0.272852782391;
    tmp_tmp_msg_1_0.direction = 10U;
    tmp_tmp_msg_1_0.custom.assign("NXFEMEYHXDVOETSLISJYJUIWKTKBBYWWCNOZPSUJJOMNJRAQUGKHRVIJGLUJBLMQLOHCVRDZEXRAPRPBZYQFAPMFXBOGELYHKQMQLICTTWQSOQHWRHNVRDKYTSKOHKZGMSQPXONCWDNB");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Target tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.label.assign("GBVZMJYOJPUKEIUZMYNSVQJZWPQTHNWESMMAZACHEULWRBAMVYLSLTCFDNRRTGIQCKXTRSZXKFYAQIDDXRBUPU");
    tmp_tmp_msg_1_1.lat = 0.0593709437022;
    tmp_tmp_msg_1_1.lon = 0.529889396083;
    tmp_tmp_msg_1_1.z = 0.0606219760275;
    tmp_tmp_msg_1_1.z_units = 161U;
    tmp_tmp_msg_1_1.cog = 0.805995132377;
    tmp_tmp_msg_1_1.sog = 0.563355524102;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("MMJAKMUHJRTWNKLINFLAFWQZIJBITVFQOCPEDOVPQREIBKSLKYRZYSBLVUNGSRMMBWDKQVXUKERJPIBMYLDXGPNCLBOXTDLJPSYQBGO");
    tmp_msg_2.dest_man.assign("MTJYXVIJEARLOSXNBGCXIYTZKSGPMKDFBOZKVZKAMGQTMTNFUKTLNJDWXYQYASWFVMLNASOZCCPWIYWUQMYASEYNPNZPECEUJGDRYEYRJHDXHTJVRCHLLRNGNFXFOUVEIDRHPBREQSDWGBYFLOHSUFWLCZDKQPFGWTRKGIHWPZVHXBWPQIUJMCTQHCTBOXLKOIHKAVEFBVACQIACMNDQSAKOGOXAZXPPURMTEGWVURQVIJZFSEULJO");
    tmp_msg_2.conditions.assign("LCGQPGJIGOETHWYAIZAIOTJDMVEKTRKCDHOSERQDHCMCKWXIFTEFNPZTBLRJKNRTBWSUTAXVQMMLVXNUUXLTABPMNLQKGNCILAXZZQTBNGZLSHYONLSVUVDVUEQFISBORWCGRUOWNAXPSBIPFXZFSYMNDLQY");
    IMC::UsblFixExtended tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.target.assign("CGWXHWILBZDCUUDUSLGIWPYOFUKKDXGCSUZWVRLDRJNZJLPEGKSYBTJXIQWSFLPTOWHAVHQMEHAAYZNTBPPXMVASHTCQPAHUFZYYSVKTJBXBRDRSGDQQOKVJKQIAMSEAPVCXOEBTZWXZ");
    tmp_tmp_msg_2_0.lat = 0.732462004956;
    tmp_tmp_msg_2_0.lon = 0.503656648623;
    tmp_tmp_msg_2_0.z_units = 253U;
    tmp_tmp_msg_2_0.z = 0.90915682074;
    tmp_tmp_msg_2_0.accuracy = 0.917434380753;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::TelemetryMsg tmp_msg_3;
    tmp_msg_3.type = 176U;
    tmp_msg_3.req_id = 1928203926U;
    tmp_msg_3.ttl = 32767U;
    tmp_msg_3.code = 239U;
    tmp_msg_3.destination.assign("YMAXRJMNXGHZYFUZSETMGNDQAPLRSWNOYCWTHOJMVLTOYXQPODKRYKROWMXTNJXDDLJQGFRRXBCELSSJRZFRBVAHFGZQCEEIZVWQNWILLJCSCFKNITJHPIXYHURKPBTNIUWVPZDESUVTDJZISSKQHUAPGIKQEPJLBCOQL");
    tmp_msg_3.source.assign("EXDXQSZKAMBZZYHJUOKZLNDWQCPFTSWANSQVTMVZTGRPALUEKWIBFRMEGHWFPBEILXZDRRQITUEBIAUYJDGVKQWPRVNBTUUPSCFHRJHXOJBIQKYYDCRGGSGLUYYCQADMATZRYIHXCUHOBGRIALOCLQBFVWVJYTJQBNHPYMOGOZDDVJNKLSJFLMRCXONVWXNMUKKGOQFSXIDOEBVLENSYPXPWPANDEKPMTCSHGCKWMLHAFMEIXZJZOEASHF");
    tmp_msg_3.acknowledge = 217U;
    tmp_msg_3.status = 158U;
    const char tmp_tmp_msg_3_0[] = {-115, -68, -103, -63, -66, -18, 94, 75, 71, 96, -24, -104, 90, 35, -114, -117, -72, -9, 17, -108, 112, -105, 4, -61, 10, -72, 43, -116, 31, -9, -61, 15, 56, -87, -1, -88, -28, 88, 9, 49, 104, -91, -38, -16, -124, 55, -44, -31, -86, -47, -53, -59, -32, -34, 91, -77, 100, -9, 55, 108, -114, -84, 66, 125, -122, 75, 72, 37, 47, -92, 54, -10, -50, 79, 40, -71, -32, -5, -2, -45, 116, -97, -111, 89, 86, -60, 2, 47, -62, -13, 73, 117, 41, 66, 59, -96, 62, 74, -122, 67, -34, 14, -122, -111, 57, 23, 26};
    tmp_msg_3.data.assign(tmp_tmp_msg_3_0, tmp_tmp_msg_3_0 + sizeof(tmp_tmp_msg_3_0));
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.916079281883);
    msg.setSource(57502U);
    msg.setSourceEntity(216U);
    msg.setDestination(15353U);
    msg.setDestinationEntity(242U);
    msg.maneuver_id.assign("BVSGBDJVZIMKCCDAGLBFZMNFHIZTFBOUBOTIKPHMROSWEFQLINYYQDEFPWOQHUHCHXMCARKRGJXTKXTOOCLPNAAKRAGKNBFRULLJLQSDHAVGTSJSPJZPXNJVZNKOFTTJVLSQOFIDPGTEMGWYFMUNGWYDVVBQZIUTUHGEQDVERKBCXJSJ");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 7486U;
    tmp_msg_0.lat = 0.095601872651;
    tmp_msg_0.lon = 0.733668890808;
    tmp_msg_0.z = 0.531407750731;
    tmp_msg_0.z_units = 216U;
    tmp_msg_0.speed = 0.702242012288;
    tmp_msg_0.speed_units = 10U;
    tmp_msg_0.custom.assign("BGIEMHAOYRQIXPDUZITDWVLSBJDYTMXFGETNMTLPFKNWKXMHFUQIPROTHQGMHBJZXBJCQMFRKXFQNCDYSLSQCGMKMEKTNDVQUJJBRNFSJJAGMZADPGKUZXWPVWGQAVYGUZCVFVKHTWMETNEPCKNLXVRUOBIDHPERIEIKPLAUZICZNNSWHOGAQWBNHLBFDFURKDBZZOLOLJEYSGWJYVCOARXEJCUBVYSSWRRSECZXOSCUTPHYDYQLIYL");
    msg.data.set(tmp_msg_0);
    IMC::TotalMagIntensity tmp_msg_1;
    tmp_msg_1.value = 0.665567140053;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.709222512028);
    msg.setSource(50661U);
    msg.setSourceEntity(174U);
    msg.setDestination(35687U);
    msg.setDestinationEntity(116U);
    msg.maneuver_id.assign("XHCWNOPZKGFNZJITXTMUQJMVYABIQFNLIQFSQXEJARFZMDHSIBRM");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 46496U;
    tmp_msg_0.lat = 0.943568123505;
    tmp_msg_0.lon = 0.360864835523;
    tmp_msg_0.z = 0.00410129182407;
    tmp_msg_0.z_units = 232U;
    tmp_msg_0.duration = 17537U;
    tmp_msg_0.speed = 0.482705906242;
    tmp_msg_0.speed_units = 127U;
    tmp_msg_0.type = 18U;
    tmp_msg_0.radius = 0.438707730939;
    tmp_msg_0.length = 0.125804351023;
    tmp_msg_0.bearing = 0.986798362734;
    tmp_msg_0.direction = 189U;
    tmp_msg_0.custom.assign("NUIXSOVBRLICNLOYKOPEIVKDIHLNRSSQGKSYFUEFJRDEMDITQEZFCUAWXBCFYJOMZWJQXHFQXQOYPEEYCTFMSPVNXDSLFMCXLUFWYLNQJDIHNCVGCBDAZYAYFSKIAPWBTZXBLGUEFPWTEBHOMUHKPWCZZXHRTQKTJTKPJMPDUDNDAAGMRENMRXYGKNLAEVZWDMGAISGW");
    msg.data.set(tmp_msg_0);
    IMC::PulseDetectionControl tmp_msg_1;
    tmp_msg_1.op = 127U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::UamTxFrame tmp_msg_2;
    tmp_msg_2.seq = 49013U;
    tmp_msg_2.sys_dst.assign("ZKGIVNAQJWDNDVLWCGOXUPCMZRINZDNZQHQEOAAEROGYFWUOUPBQLXMPMREDAJREYFZXXMPFKGDLBKCTPCYORKLHVXPEGI");
    tmp_msg_2.flags = 195U;
    const char tmp_tmp_msg_2_0[] = {17, -121, -52, 100, 55, 38, 58, 13, -75, -73, -70, -61, -96, 98, 37, 1, 15, -39, -35, -34, 65, 94, -1, 66, 60, -5, -38, -10, -67, 94, 122, 36, -58, 22, 22, 115, -25, -124, -88, 50, 77, -39, 11, -108, -24, -17, -54, -10, -84, -112, -42, 44, 97, -95, -113, -87, -28, 32, -85, -98, 12, -73, 66, 69, -65, -109, 123, 107, -26, -112, 115, 118, -72, -38, -48, 21, -74, -36, -44, -97, -120, 107, -9, 0, 18, -106, 92, 112, -84, 8, -84, 122, 63, 23, 96, -104, -43, -111, -107, -108, -90, 85, -114, -64, -49, -34, 61, 64, -17, 27, -14, 3, -63, 60, -60, 53, -66, 16, -118, -56, 73, 95, 113, 55, 38, 16, 100, -41, -8, 42, 69, 107, -55, -101, 107, -127, 14, -40, 75, 12, -79, -58, 39, -54, 31, -88, 87, 81, -122, -45, 71, -4, -30, 65, 10, -33, -88, -100, 106, -7, -9, -128, 95, 89, 74, 104, 78, 123, 6, 58, -41};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.169422637216);
    msg.setSource(12268U);
    msg.setSourceEntity(189U);
    msg.setDestination(26636U);
    msg.setDestinationEntity(76U);
    msg.maneuver_id.assign("FIABNBMZINUKIJD");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.0301713634278;
    tmp_msg_0.lon = 0.126757781016;
    tmp_msg_0.z = 0.723894647329;
    tmp_msg_0.z_units = 192U;
    tmp_msg_0.speed = 0.522600754351;
    tmp_msg_0.speed_units = 113U;
    tmp_msg_0.takeoff_pitch = 0.110321043975;
    tmp_msg_0.custom.assign("WLDDNEYIHRPERCVHVBINLXSCXHQQMIEWEUVKLFPUYJXCCQUADYINDHFYRCVBPZVQMQGCKWGKFUSYYAPAPEBJBOXXIEVUPMDTOSJLPRRTQNCZVXZFAKOUCVJGYPRQKQWZLJAMFTTWIGZNSLBSAEBMZOIUFTKWJJWHRHSXQKBGXGODLAJXMTWTTJZNUYRFAZDRAHHVOSOKMCBFHPWMLDCMOOGDILKUFK");
    msg.data.set(tmp_msg_0);
    IMC::TrexToken tmp_msg_1;
    tmp_msg_1.timeline.assign("DEIZTLDVLFLGZYPETAHLJKHTWCM");
    tmp_msg_1.predicate.assign("ZGOVYLWDDOOXIQUUDFTSCSTNYDATERGVZNIUNFXHSHVYBOTCZHRUUJYOYMZCVBQRQLLEVWNMHBSMSKQAXLIOZUCFWIDNRFCHMZBOLAWQDGIRGKICHWLWNFBKQAXAADJJYAHQVIQCFUMSNFMMLRRDJSNPUEDVXJTOUKPPJVCANWHRBE");
    IMC::TrexAttribute tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("WZKSTPATPIGYNOBUFKCNDVVLHAPSXURKXJRRKVVBBJHYOZMKUZNIQFIDIGHJYVCDFRNWCDDQRZINBCACTLXEJWSKXEGJGXUCIZESOTBIOWISRGMQTKTVETWGTOLAOQRPKCYUJZMKYUXZPQBQMGJOMRQLNMCLAFFLCEWWEYJAFGYHO");
    tmp_tmp_msg_1_0.attr_type = 140U;
    tmp_tmp_msg_1_0.min.assign("ZSTTDBWXTZKGTRDBCQHHDSXJJULRNFEPVMPOCIYVCGQYSNFWSYCOYUPXWWLRMMSFQIJFWZPBFOUPIWBYLUHQBFAIETGHIDXNHHOENUJNSTGMSERFXUAZXHASWLAKKDPLEKMOLDOQIZFRZGQDSMAAXNAQNIYBYKU");
    tmp_tmp_msg_1_0.max.assign("NSKYMSOPBSJOPIUMFTYNACOIZNOHTIHMKCFZNUKGEAECTLUVZDNUHVHQOZYWDEUIUTGAKTFPCQTJICPPRQOMLHZNTFDDRXKPYGCMMRWXEFHICZCARGBWSULEKPDDRMDWLPQZDBAAJEWPOQINFIG");
    tmp_msg_1.attributes.push_back(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.968581969124);
    msg.setSource(13983U);
    msg.setSourceEntity(22U);
    msg.setDestination(58086U);
    msg.setDestinationEntity(157U);
    msg.source_man.assign("WJXYINSPHDFSHODQDEZLJPFCFCAZD");
    msg.dest_man.assign("GOUQMBPECKXXJRQIWMLQIWQGZFTCGXNNHHDLKDSAJUSASYPSNTQEYWUGTIADFPMKVSGSZRAUUBICNVWYAIGHXJPFOKKZRLECXJARUNRMBQVFTCDWPHFLBUA");
    msg.conditions.assign("OCDZUTDKLIPVTXKOYVKDLSXCLIQFPGEG");

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
    msg.setTimeStamp(0.296834810033);
    msg.setSource(29611U);
    msg.setSourceEntity(221U);
    msg.setDestination(50497U);
    msg.setDestinationEntity(7U);
    msg.source_man.assign("ILBAZHRCZESTQUNWAMFGILCSCDMWWVDIPVMTSXFDDIKINPUJHOURZFZPRWITYDCFLOSBBYXOULKVYRBSQBPHYCLVCSWGNLDLBUFTXJFQKWJUBRAXFOGMKNVGAKAKDYSXMRJGHQEYYELLEZVQJQTBKMGZVWNCVKENNP");
    msg.dest_man.assign("UFRQJEBLTUSAJRPQOSEHRBMSDJXPNROJRVBTHYAWYCCNBJBSEKOJGJDUVHHPFNJIVCKYCQMPTGAHGVWWZYXUXMPYXEOCQHKUODKEDEPOKFKTEAODQIAEGXBXAVENSILUMRDCWBJLFJFFCRQVGKYFLIYAMXNHGWTNNTU");
    msg.conditions.assign("JMRRGRPBZUBFVV");

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
    msg.setTimeStamp(0.246616480084);
    msg.setSource(55207U);
    msg.setSourceEntity(230U);
    msg.setDestination(63417U);
    msg.setDestinationEntity(89U);
    msg.source_man.assign("GOVAIJKLOMENVVSUOHMBCOUDBSQQWHGWFGTUBCHJXAXTUMQSDCVDQFLQNCORQLACVILOLSGRZOKGQGTUKREYBWLIDCXOASJOYMGTAKEFHBRAHCTPJFESRLLMEZINRFBEIVVBOHWLSNEWNSUWSDXVTCIPZDHDZYKITFJQNZKYRZZJJFBP");
    msg.dest_man.assign("TNCDPFAWQFYXFSWZDBOIHDQKCUESQJXSPFNYOJBSEYDHPQNXIQPTEGBXQRHEMKRFXGSTJBLTPGNREUNKZDWVDRJIVTIP");
    msg.conditions.assign("NMKBHZTGQUCTDOESPMNKAFPVBTCAXJOXGOTNANNPHXWDNFEVVRAGBDEEPASIAJIRUSIHSQQRLBGCWTKUGGRPJWQJSEFYVSOMNUYXMVXDWFCUQHKHOYGCFJIVSEPOZEQARLBZLZLUDJVXBOUIAWTRCVDKYDZHACWMEZYTPQLHEQNQYCTXCXFZLUPLREMXJWYICMDPWBB");

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
    msg.setTimeStamp(0.262252131512);
    msg.setSource(22692U);
    msg.setSourceEntity(12U);
    msg.setDestination(32519U);
    msg.setDestinationEntity(105U);
    msg.command = 160U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GZLYYGQJPAZUBTAHZFWBKSFJTHEZJVCRWSMBMEBSSFUTZOIBQUATMZQOFENHXXRVYCHYTCPPWNGPNUIHZZQNWFVCWMKSRDUFYDTSVSSLCTPJLXWDLNGOIFCGOVJRTVEDW");
    tmp_msg_0.description.assign("YLDKGZLFXATFGBRQEHYVJNTVNVXMOXFYPBNCQVOFXRJZJULRHJSYHHBSKMAHPTSNIFYARNAPSRBEDMPYINIEIQDADUJSAKLBMVCYUUKZNIVFPBGMUAEWGWCMQTPMUBICLKSDWPIOWJXEYBKCOTEXCEGWKOMBKSDEXYHSUASHTNKKFENWLULWJZWSAOCQDHJVXXOFOIPHGZPNDQMGVGRGQYZV");
    tmp_msg_0.vnamespace.assign("PONKPKWBYXMMWLUAJHLSAGDDSJFAVXOVQSGZYICJXNAQSREOBVKWDPIFZJXRSBLNRVEMELQQNTFTXEYNIJBITQMCOZJEKYMWEHGQHXNHSPIIMKPGDE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JJCSFQPACMSUNHHHOFQVOFX");
    tmp_tmp_msg_0_0.value.assign("MGSQHDXAANYLYECWHUXXBJNTTMMNVHQPFLHSFHAREKFMDGFNTNXJJLRIEZGZULBRGIYRZVIYDOAMWTGHABUBZQZVJVIIAWPZONKRWGVJSIKCEPYRPECRD");
    tmp_tmp_msg_0_0.type = 91U;
    tmp_tmp_msg_0_0.access = 253U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("NQFYCEGLPCXXRBCKRTFAQDTBDGTXYIHJZI");
    IMC::AnnounceService tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.service.assign("AQUVWPTZUNDHXHZXYDSBQTDOVDONZLMXAFSNKTSTAEKIZYTRLKJQWHKZUXZORJWPWFIIYMAQLEVUDCDFWCSVCIOHVDECLHAAFDRIKASUPGJBWLYLOHSJLMKBXAYUFVBCXURYQGQAQEEVJNFMYJOTHQPXEPIEFNSPZCWVJQVEIMMLGCQXTMAIZXOTWLCXNGNHMJZYBERDEGRRPSNHDVUHNKWGSCLPIKGOWBPBF");
    tmp_tmp_msg_0_1.service_type = 71U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.436815029667);
    msg.setSource(59611U);
    msg.setSourceEntity(165U);
    msg.setDestination(63698U);
    msg.setDestinationEntity(13U);
    msg.command = 23U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZDFXWASTZBWJCKSRAWAUDXAPKIXMRYZMXQHLTCUNUYYBJGABUZ");
    tmp_msg_0.description.assign("HKDRKWZTYGCOFAFWLSURRJAGVZQIAKEDLBTLWVWXEZXBVSUFGHKXIBIOVNQQLGRZCXYOHJAUSUQVNVHMJLAYIKUBOZYOWJYMDCFNNESVWGXQBNDCXZDECSMKRBTTETIZKUMFTJIVWIJXOZMQHIDKABLQJPLHXAPNBSPHBQGMIKPNLCRWZEYEEUDDUNEESPPYQAFRBLOCHMVPYZFPSXKQXRIMPSVSUCNAMG");
    tmp_msg_0.vnamespace.assign("LBOAJXEZKEEUAGUVSWQMPTRDEWFTBCPLIZIRRBDXGNNPWMOCSAHMFCKBULLTRIOFLOXRJCMYZZHQHQQFDTTUCWADXTINJKMCQPINC");
    tmp_msg_0.start_man_id.assign("YKSRYLCJZXOLKNMIAYEMRIQFKUOZYVRVSVMGFQNSWEVPRSUAWULARIDYRAIUNLVYQPFAEERUFDJFGBWFGGQIYNZDOLJHUTHTVNOJDSZCYLZQEEXRHZATPPXDPTSZHHGTOIMQKSCOWWI");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("KUWJEYDAZSIETRMPOWUWWSTRNIDUVZAUDEHYQHMCPBUSENRGLMGOEXMNRWBQLSHGJAZQTYASCMJOQUZWHBYXNTFHPKLXKNIVJEQALLNFCJMRVDYIRYENQMNJUDDSWSTWVPFRCDAXMNQCDHQQYOGKHCBTOCFGAYOGSHGGNZZIKAVPVDPLIFKIXGHROKLOAPZVVEIBLGFJCKTPXXSBFERPLKPTZYSVYVZFZLJXIIOJUHQTMWXTWBK");
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.393019653936;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.341998795434;
    tmp_tmp_tmp_msg_0_0_0.z = 0.970371029872;
    tmp_tmp_tmp_msg_0_0_0.z_units = 245U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.113025118926;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 153U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("KUAOQMHVKXOSVNTKFRQHGHZAJTFUHHJLZVDJWUBCKBPYGCINFIDWXOIWDWQQUIOYHFJQKSRKKNOBZCT");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Conductivity tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.501187649851;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::PlanControl tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.type = 246U;
    tmp_tmp_tmp_msg_0_0_2.op = 18U;
    tmp_tmp_tmp_msg_0_0_2.request_id = 41826U;
    tmp_tmp_tmp_msg_0_0_2.plan_id.assign("TGUTHNMRZVPWSRWUJZJELSFILQDOBZXVDAIFMSCEQXLWYRZGZSUQKDJEFYIPAAFTHUXHHCMPVNPTQIZQKLMSOPJXYFEMPHJNWFYGKHGRCYBPZUQNCJVWSDXCKPGPRWBDTHLCDCYYBULZNKXONDAEIOORVGNLBREYHZSOWOOXAFJFVATBBUTGBHSVYJRATWWITVRE");
    tmp_tmp_tmp_msg_0_0_2.flags = 2126U;
    IMC::Loiter tmp_tmp_tmp_tmp_msg_0_0_2_0;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.timeout = 27487U;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.lat = 0.180749324892;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.lon = 0.107863056943;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.z = 0.0396242450504;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.z_units = 76U;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.duration = 31829U;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.speed = 0.731181033171;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.speed_units = 55U;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.type = 129U;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.radius = 0.716693113845;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.length = 0.941986172125;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.bearing = 0.858665340353;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.direction = 221U;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.custom.assign("BBRZQNASSOEQOYYLUBQQNQGGPFEDWMDTJXZOSHXTJPPHILACKCYVMYTPVVOTPBUFKUFNVQVDCLHLAFXLEXNADKXMGTXOOCVCOGRIIIIYNWCUMRBGDCAXVJUVXUQSCBRXAJCGPKJGBFGAKET");
    tmp_tmp_tmp_msg_0_0_2.arg.set(tmp_tmp_tmp_tmp_msg_0_0_2_0);
    tmp_tmp_tmp_msg_0_0_2.info.assign("ZKZIJRVBFXYPIENOIWYAEGEXARJWBMUJYSWADTVSCODYANAIZQGDLQLTLDCFTMJFFBZLDYXUZQOXPGBCQOUEWKJKOMJHRNRSTOILGHTCIIKLZFQAAKFDSMONNLGBPKMSPQHGRQEAJYFQHUODCAYZNVGGULPZVQWBJKIUKCFWIQMMEVOGTRMOVDHSJRHFWFNKWHKVNYYCHXUTEXNUTSMZCUBERGZSR");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("OXZWKULWMSHVEQAHUPLBFMNUKKLCICBMIKGGNCJLBVPHBSOYPVFLHIEOGBCSXPKAZJJMEDGCHDVTRBPAFNZSQAKUQIZWPGMYTFNZUGYAXRINRYKMGEPVJKGANTMQEDTSGJ");
    tmp_tmp_msg_0_1.dest_man.assign("YFJALLTRMYWMRYHZWQYPKQQBERCQCALKDHIJNWRVDEHICEYVAPZXBUNKNWHLDTTFEUCQZDB");
    tmp_tmp_msg_0_1.conditions.assign("EOMHCUSXRNTVEIFWOYROTRJZOWHMHKZRDCTTPDOSXPCABDSEQNWVKVKFJLIMXAXKGZZVJTTLLDUHCFGCPMGDZJCQIBGBBITNUVNATOFULQJOSILXVYFYPISJEFGBQEQDLEGRQLO");
    IMC::SoiCommand tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.type = 147U;
    tmp_tmp_tmp_msg_0_1_0.command = 166U;
    tmp_tmp_tmp_msg_0_1_0.settings.assign("YOKLVYQELJFKTFLNWNSTRKBCQDPUGAQGTWZIQKCLPNSHFBEKEJTISQUGEPFUJLWJSWHUNAZZGRRKBMDWZIGMAEQ");
    IMC::SoiPlan tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.plan_id = 33621U;
    IMC::SoiWaypoint tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.lat = 0.364570257269;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.lon = 0.760390025466;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.eta = 1647710440U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.duration = 62593U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.waypoints.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0);
    tmp_tmp_tmp_msg_0_1_0.plan.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.info.assign("QAQCNUDACVGVLDDSDBVZNGYHJUXBDXWJTMMLAUWETGMFOYQNFGIXUJHAITKINDSAVBHUOQLNLKPRHYMERPWNDEJGYQHOZSHZUOOZETJBEEOXOKJSLWLQIBRSIVYFCYMKBZMSXHRPRYRZKIORSPUALCYCZXHHALYUCQFRVWVSTIFPFVDCBNTJDUSFKXWOVGCBJWQFJZEKNEUGFCQBMRVEZABMP");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::QueryEntityParameters tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("GLMYMIUNNGTQPDOYREEKSWURKFATRFHWLCFSLIRJSVLWAGSNLIVOZDZSDBJUUCCFYXKXFCWFQTOVQXYREMRJPCAQONFYFVQPKGKOZVJIGNUMONWOHMZJYLEJSYBNIBKELYDNVAPHYGSQU");
    tmp_tmp_msg_0_2.visibility.assign("JTABJLSZQCUMWKRDATRZVBVHBCQVCBTORKEYXLWCNCYOTPIWOEK");
    tmp_tmp_msg_0_2.scope.assign("GCOGXIOYWXEHQFZ");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::AnnounceService tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.service.assign("OAOCQIPUAVQPSUYXDVLDQIMDHIOIIYFVNYKIGWOWRCQYSXZHOINHBG");
    tmp_tmp_msg_0_3.service_type = 109U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.035876226008);
    msg.setSource(64792U);
    msg.setSourceEntity(210U);
    msg.setDestination(12987U);
    msg.setDestinationEntity(16U);
    msg.command = 21U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RNLFRTQEIGFMKWXGMQMALUKPHAGQCQBYSJBYOKADBDAGRIZVWTHGKXORENRPAQDJVEEFHDRYCJYKNKNOZHWCJVBNIAUGUTFQZYDOLIYKJXPLZJWTSZDDVTPHBWTRBXSRJTJUESAELPOXCCHIMUCGFUVMFMNXJSILCZXRPMBSJGBHSLQFYQVCFUCSXTD");
    tmp_msg_0.description.assign("SVTVPYUSFENJRYKCKLNLUKNGPARQUVPFSWOWQBGEXIORAJSMFSKGLYCTFIWEWLYXPQTPZBOGBLBDWJJZXZTCXUAJNMOYCJYZZUXRBVXPOZNSQDMTQWAMTHBFVURALDXAHQYZVIGDUHMBLDWIMTPNECXQNYIGANDFRUJHPFCWZOFRQGIMEOOGBYVSKCALABRAVXELPDVTKHQYII");
    tmp_msg_0.vnamespace.assign("UYMRXSMYYNUGVHWHYWKDLJIPKOEHEFTSGXEYVUABGIMCXMMXCNCGKLFPJSEZUCCVGSSWADDXIPXTMGIEOVBZCTKRYRWPJECNURBAUHDCFDBCSMZTXDNWIAQQQQRFUNRMJHFOGHWJROAUPQKOGQYIKFROZVJSKNDFZHQNVWLLWIPKLBRRYZXKZLQUEKOXJFTJPLUZCLDTVOGNJDWHBIAJGZODTESPPAWTI");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HIKJXKEKWZHHSMOGRBCFQBOMRPRZLPWIQNGZBEGWNMBTOVDJIJNMCOEQPHEKVIZUJOLELNASQNXNSGHAWUSYKKQPGKRNMFMAWEKCCCPUVPYBQSJOSRIIYTDGYDKUACYBZLVPMJJQHXBTXTXEUGDLMZRVVXXVXACYVFMHCE");
    tmp_tmp_msg_0_0.value.assign("YZOSPICIAJHGVNCWEHSAWA");
    tmp_tmp_msg_0_0.type = 94U;
    tmp_tmp_msg_0_0.access = 46U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XUMUHRLLTEPWDDUJJLAMMTGYLQTVDVSMGHUPRKNLPNCMEUBJXHFQFCUNATYWZQPQIHEYBVBKVMYZJJGFVPCKCKIQKEZKFADEVPMXGLFGQITBCEANYGNCXUHOZHKTWZPCQVXTDXACSHISURFDHQJWFMGNASOWBYZCRTZBRYAWEZNYSZDBJBBTIQOPVXQIDSJEWIANGOKNFGIXAOSRKHXLWOWDXGLJFOOTMENRLIHDWZRYUFPMJSE");
    IMC::ControlParcel tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.p = 0.494007073007;
    tmp_tmp_msg_0_1.i = 0.0509823952023;
    tmp_tmp_msg_0_1.d = 0.507233910818;
    tmp_tmp_msg_0_1.a = 0.39319064717;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.663918504997);
    msg.setSource(44611U);
    msg.setSourceEntity(202U);
    msg.setDestination(17013U);
    msg.setDestinationEntity(9U);
    msg.state = 237U;
    msg.plan_id.assign("PHTEXKDZPORIIMSAEPEYNUQPVKRBSDUDXSOFWIKPXKSSYXDWJKVBHANIFW");
    msg.comm_level = 242U;

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
    msg.setTimeStamp(0.791134896795);
    msg.setSource(15563U);
    msg.setSourceEntity(105U);
    msg.setDestination(9082U);
    msg.setDestinationEntity(91U);
    msg.state = 158U;
    msg.plan_id.assign("QRVCVYGLHRSIKBYQWRTEZTFYCNQNWFHGVIHPOFJWOAPGTIGJEECONGWBSMEJCIZXWPUOXRYLHGDDU");
    msg.comm_level = 69U;

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
    msg.setTimeStamp(0.443672994187);
    msg.setSource(24004U);
    msg.setSourceEntity(222U);
    msg.setDestination(30810U);
    msg.setDestinationEntity(184U);
    msg.state = 111U;
    msg.plan_id.assign("WHXMRJQXZPPCTRIPBVKAJJINYTPTAKEBNZAF");
    msg.comm_level = 44U;

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
    msg.setTimeStamp(0.645080435498);
    msg.setSource(34835U);
    msg.setSourceEntity(208U);
    msg.setDestination(22968U);
    msg.setDestinationEntity(32U);
    msg.type = 185U;
    msg.op = 74U;
    msg.request_id = 57135U;
    msg.plan_id.assign("EUKZEWMHPRVEGQJUFYGASCVRWRQSBVEEUANYFLHBVZWHFNMAHDBVRMPEUPUUCZPYEMYIJPKQOFAJYRRSJDTVKPWRIHYLGSXNITT");
    IMC::QueryEntityActivationState tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MGKUVBIIJWGFZSVCMWYQBXLYBPIBZUCKDOWZZDUYJOZYJI");

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
    msg.setTimeStamp(0.251416836222);
    msg.setSource(52265U);
    msg.setSourceEntity(217U);
    msg.setDestination(11988U);
    msg.setDestinationEntity(96U);
    msg.type = 158U;
    msg.op = 229U;
    msg.request_id = 32677U;
    msg.plan_id.assign("UFEADSNPODXANCLYKNXZHMZRRUFOWQPMGHOBUTIQBKLDKVERTQIKWFQALTFNPUSCSJFTIVYGEPYGYHGCNOSWPSNDSXNFELMVKJAMVAPXKBACHJBFQOQMJIU");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.28694183761;
    tmp_msg_0.lon = 0.183147818861;
    tmp_msg_0.z = 0.217146605442;
    tmp_msg_0.z_units = 29U;
    tmp_msg_0.speed = 0.753336531497;
    tmp_msg_0.speed_units = 78U;
    tmp_msg_0.takeoff_pitch = 0.396074197347;
    tmp_msg_0.custom.assign("FWQODUTZQUBLOAIDKKZIVXJHSMGYYWRJRVOPXIPYANTLDXEXBJJTMRNKEIXDVQHZNVCBCZECHTDUZIOBJGDXFNAVZCHKRLEYSFBBOISMZCALBBNQHMLEDLMTXJSXAHNHOXPWYUEZGFLKQPSCKYLFVYUBQFKXCWIPHROMJHKUSFVORUATATJKNQPYTPVVPFSIHDCWGUMGEZIMGWFKJRNCDGMEZWSQRULSMBRQSWTIJWARYWNGPGOGFP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TLTIMMCLAHVCCQESZYUYNLGPZXRFGHNANMBJQLGVKPUREUQEEVSOYSXQCNGEEIGOCLIXXOYAFJPCVERUIZWTRKKWGIZFWMOTFDORTSNBJMZNRHDYPDFVIDIUDRJAVQQOAHPWMOEAUWTPAZJDFPK");

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
    msg.setTimeStamp(0.488939305167);
    msg.setSource(6907U);
    msg.setSourceEntity(101U);
    msg.setDestination(41436U);
    msg.setDestinationEntity(104U);
    msg.type = 92U;
    msg.op = 113U;
    msg.request_id = 20682U;
    msg.plan_id.assign("OHTLIRBUXNYPLHNOTNTYIKQNEMDLTALYSGLHZSDTNKRQGPULQVUFQJRRCFZBEZKUZZQCQMDQYGUXGAJXFTUPHBPZGJEVYFUSVAWEVCWBRPWEHBFKRVEQWMDCBKVYVEDPYIOOPDJCHSJIIXXOCMFISHBNNDKWRKGSOUIJYCOGADEJNEAAYFMKDJXNSGKXCGWJK");
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.955915810904;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VZNXIGMSLQJERNFLBHZGUBVUQZDIARCKDBKYRJGEPYZHIXBWLFWAHFTOGLMJWSQLRUBHZWQQDEJVQAHKOIVGYYKPMKREHXVFDNPUGECVJRGXNWKNQLWRJIAQNROHRYCSGPTTVJMWMOYSXQXBVSCTCNLECRYCWAJOFEBGTFSLATJXFPDGIBDSHIFKYYSUNMDWMAVDSUNZZDCOKZFNPKJWPBVMYUSOTXEAUUOUMD");

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
    msg.setTimeStamp(0.0945156407271);
    msg.setSource(16608U);
    msg.setSourceEntity(81U);
    msg.setDestination(34791U);
    msg.setDestinationEntity(149U);
    msg.plan_count = 37731U;
    msg.plan_size = 1246249657U;
    msg.change_time = 0.00301523654871;
    msg.change_sid = 3287U;
    msg.change_sname.assign("CWDEPBALLIUSVBENOXANLOGDCCKRHWVRGVPJQJEDJHSTAQOPOBTDIKLYGZVULPMSDNP");
    const char tmp_msg_0[] = {115, 79, -79, -84, 31, 65, -22, 6, -7, -117, -33, 50, -68, -66, 120, 117, 112, -117, -65, 32, 1, -108, -59, 120, -39, -14, -25, 72, 29, 6, -65, -44, -73, 60, 110, -127, 69, 18, 123, -65, -94, -37, -30, -13, 30, -58, 68, -3, -103, -127, 119, 40, -85, -76, -70, 22, 50, -119, 83, -41, 113, 97, -119, 36, 60, 122, -76, 35, -46, 28, 102, 30, 53, 33, -2, 53, -81, 116, 53, -73, -3, -61, 125, -101, 28, 69, -14, 92, 100, 107, -29, -112, 54, -11, 121, -29, -2, -82, 117, 16, -49, 90, 73, -30, -26, -78, -106, -61, 41, -72, 14, 92, 86, 121, 18, 53, -81, 111, 90, 78, -84, -77, -118, 38, 60, 78, -110, 9, -57};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("EIKBSZHYGDQSLMWBPTBRNOJ");
    tmp_msg_1.plan_size = 20476U;
    tmp_msg_1.change_time = 0.336108528333;
    tmp_msg_1.change_sid = 24594U;
    tmp_msg_1.change_sname.assign("DGSFAJVJSATXCOLKIESGAITWSCNRDKMMYVHFEGEYFEHMCURUTXLKADBMGMPSQWJARFJEUHVQGZIPNVPXQEIXCNADTRYNCMJFRBXOJEFZWPUOECOTGDVIFSVKMBUHOIMUAYZGFIOECLVHQHBLLBNNPKSLPUPXLHBBWKWFJHLFCNIOVVUDDQSTQTUQNIZYZKAQVJPNZQYCOXTYHRXTGMRSDOZLHKQBSKRTPBGYZZLZAMWWW");
    const char tmp_tmp_msg_1_0[] = {93, -92, -94, 19, -119, -33, -48, -125, 92, -13, -104, 61, -91, 58, 18, -61, 46, 118, 58, -39, -22, 76, 4, -102, -85, -67, -54, -22, -9, -74, 56, 119, 73, 87, -73, -33, -61, 100, -88, -110, 78, -121, -36, -56, -19, 40, 109, -43, 44, -44, -19, 110, 93, 103, -40, 86, 116, -99, -69, 64, 33, -35, -69, 55, 60, 42, -81, -101, -107, 76, -83, -68, -56, 1, -116, -85, -58, -45, 16, -4, 9, -112, 43, 75, 74, -57, -61, -62, 85, -47, 47, 78, -82, -21, -53, -34, -39, 41, -114, -62, -95, -72, -67, 119, -14, -99, 11, 6, -107, -122, -89, -118, -33, -46, 56, -57, 38, 96, 50, 82, -88, -113, -63, -117, -11, -34, -62, -63, -125, 85, -66, -27, -1, 14, -42, -37, -109, 12, -8, 33, 24, -44, 74, -19, -35, -128, -28, 48, -121, 3, -119, 50};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.851957431942);
    msg.setSource(27413U);
    msg.setSourceEntity(28U);
    msg.setDestination(22208U);
    msg.setDestinationEntity(203U);
    msg.plan_count = 51039U;
    msg.plan_size = 3729318758U;
    msg.change_time = 0.103004264509;
    msg.change_sid = 12968U;
    msg.change_sname.assign("JGPHGBHLKOCCWFJUQIZTFRSVPOXLGXPRMTWHHDUIRCRSOJCZIPEGSSBHDHHFAVEFYVUKLZDMRLILTLMXASQNBWRBTWCGEEFXYIQVMQADFYWKTAFKVEKSCSHOZXJDPOKNZFBIZNTAKAVIPBEMNWTNKUMLGCWOJG");
    const char tmp_msg_0[] = {-4, 17, -82, -102, 84, -113, -92, 14, -13, -69, 24, -40, 114, -21, 10, 96, 64, 7, -112, 25, 102, 72, -120, -97, 68, -51, 90, -32, -96, -16, -37, 78, -30, -113, 9, 0, -29, 99, -23, -44, 18, -77, 104, -124, 99, -58, -103, -49, 1, -23, 119, -99, 82, -115, -99, -98, 1, -1, -96, -39, -128, -86, 75, -126, -52, -102, -85, -29, -60, 20, -84, 74, 86, -69, -104, 38, 36, 40, -101, 91, -89, 91, 50, -24, -73, 68, -16, 1, -116, 17, 84, -22, -59, -76, 3, -105, -87, -36, 116, -104, 74, -41, -5, 109, -99, -89, 3, 70, -108, -81, 49, -85, -31, -47, -120, 0, -116, -77, -40};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.690440169221);
    msg.setSource(48339U);
    msg.setSourceEntity(83U);
    msg.setDestination(3664U);
    msg.setDestinationEntity(175U);
    msg.plan_count = 54762U;
    msg.plan_size = 1599806449U;
    msg.change_time = 0.40205236256;
    msg.change_sid = 61672U;
    msg.change_sname.assign("FNOALEXBCWSVZNALMAXXIPHOXRUDEDLYDOVCMVJQTWTOUJYIIZHOXPTEHU");
    const char tmp_msg_0[] = {57, 104, 113, -33, 52, -55, 60, 5, 29, 43, 9, 26, -65, 86, -33, -32, 53, -118, -85, -14, 42, -82, 112, 77, -10, 126, 36, -35, 100, -35, -109, 42, 29, -63, -75, 113, 24, -22, -43, 55, 120, 21, 65, -21, 11, 0, -120, -121, 111, -32, 61, 49, -36, -74, -125, 86, -79, -94, 121, -59, 11, -55, 74, -26, 122, 49, -88, 105, -105, 87, 100, -104, 25, -8, 106, 92, -52, -74, -57, 42, 51, -73, 67, -49, 108, 106, 97, -69, 109, -127, -74, 106, -58, -73, -112, 18, -107, -105, 76, -82, 74, -69, 59, 59, -111, -102, 70, -23, 105, -126, 101, 100, 4, -125, -8, -46, -65, -67, 114, -78, 58, -62, 52, 36, 37, -6, -115, -102, -68, -42, -28, -78, -97, 70, 115, -13, 4, 108, 101, 19, -73, -76, 88, 78, -12, -14, -42, -67, 39, -65, 23, -80, 54, 102, -106, -93, 108, 57, -84, -92, -15, -2, 40, 88, -42, -96, 85, 44, 73, -74, -39, 95, -16, 117, 76, 8, 68, -28, -27, -51, 31, 27, -6, 86, -122, -103, 12, 82, 102, 62, 79, 7, 116, -96, -99, 114, -82, -104, 84, 33, -99, 60, 34, -66, -108, -86, 126, -33, 95, 26, 58, -110, -71, -55, -81, -3, -102, -39, -76, 5, 126, 5, -55, -88, -29, -103, -99, -32, -31, 85, 126, 121, 91, -119, -109, -64, -121, 102, -126, 104, 6, 107, -32, -128, -110, -65, -102, 65};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KSWGSVNRIYVSUPXVXQCIQWZGZJTIFUJGJSMFMSUNCEHKBBACGMHEGMHDEZWNBPNVZEUIXBXODEYSFANRUKXYQESAZPKREWQLTTAYRLOFXELLOXCYGMPOGYJANIFVJAPBQCFHZMBIMLRWBAZBLKTMTZRJVDYWQOXQDBTCHTUNNFRNK");
    tmp_msg_1.plan_size = 35130U;
    tmp_msg_1.change_time = 0.477150913007;
    tmp_msg_1.change_sid = 8571U;
    tmp_msg_1.change_sname.assign("VDHZJBPTPJGXYGPZXJSQUGSNAIVYBFMRGEOKRZKPALGJUWVGFDHFKAWWBCCCZNYTKTVYONQMJBEPELDTKEEALSRRSFRYDRMPQIRICSOHITZODFUSFBXDKMPHGBMYJCEOIWUG");
    const char tmp_tmp_msg_1_0[] = {111, 76, 85, 17, 63, -31, 125, 32, 75, 53, 115, -114, -10, 114, 100, 7, -3, -7, 0, -27, -118, 83, 51, -35, 91, 116, -21, -14, -36, 9, -36, -114, -125, -75, -95, -115, 117, -6, -74, -5, -25, 51, 56, -28, 116, 74, -60, -115, 81, 13, -123, 88, 79, -36, 118, 111, 112, 113, 55, -127, 71, -28, -52, 11, 70, 102, -21, -110, -50, -99, -7, 116, 28, -76, 92, 79, 37, -70, -114, 110, -117, -37, 121, -101, -13, 77, 75, 59, 23, -9, 7, 24, 38, -22, 118, 63, -81, 61, 20, 56, 31, -71, 78, -26, 100, 72, 36, 15, -113, 122, 12, 34, 101, -13, -103, -49, 113, -4, -77, -78, 86, 29, 35, -15, 104, -97, 57, 49, -36, -21, 3, -98, -55, 97, 12, -19, -74, -109, -55, -15, 16, -116, 36, 1, 36, 14, 117, -75, 89, -105};
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
    msg.setTimeStamp(0.669573171758);
    msg.setSource(40967U);
    msg.setSourceEntity(26U);
    msg.setDestination(58283U);
    msg.setDestinationEntity(185U);
    msg.plan_id.assign("VFJNRRTJXOWRIYPCBCCWYMLOETLDDWOKDQLZVCQXIUYXVGMXAFWYEVJJZJIOEJLGLPDKGEGUSXPRBRUSWGQMZPHFXTIOUNNIDQASEHYHBJZOOLMWHBUHXIPCNPPKNMGEFMLVECCFBHGZSCZTQUAYMCVDDIYSQHKEAXISKTKGPWAZONMNOBFABBKUAQP");
    msg.plan_size = 27755U;
    msg.change_time = 0.0660054019805;
    msg.change_sid = 16656U;
    msg.change_sname.assign("DHFNMXIIUOGQVFMDYGVSETJEYUJBTOPRZYDZCYQRKTFXKVCMZMHFLPRKRXZDXFEGAQTZEHETCPYOCIDSQFZYMANJVTXULSDAQGXOHFLPWKWNIKKM");
    const char tmp_msg_0[] = {65, 90, 1, 78, -19, -98, 7, 106, -17, -23, 96, -98, 105, -30, -72, 86, 58, 77, 17, -75, -90, -103, -98, 108, -70, -47, 13, 46, -19, 10, 64, 64, -47, 121, -46, -102, -6, 94, 102, -112, -2, -79, 26, -117, 97, 52, -101, 42, -52, 93, -80, -11, -29, 5, 25, 0, -51, 56, -11, 120, -89, 119, -57, -71, 50, 68, 104, -52, -65, -34, -1, -26, -5, 59, 39, -3, 37, 96, -109, -117, 88, 88, 30, 100, -36, -14, 76, 72, 93, -101, 98, 87, -124, 33, 88, 86, 4, 36, 24, -7, -36, -89, -40, -91, 126, 84, -30, 37, 93, -98, 11, -75, -23, -69, 82, 106, 101, 59, 67, 50, 88, 107, 25, -101, -11, -86, -21, -35, 95, 55, -96, 116, 101, 54, 95, -69, -36, 45, 107, 23, -94, -98, -88, 111, -102, 73, -98, -10, 115, 90, 42, 26, 8, -26, 67, 2, -6, -124, -88, 120, 112, -107, -49, -75, 32, -46, 17, -76, -84, 88, -27, 62, -81, 9, 48, -33, 85, 50, -85, 14, -111, -36, 48, 18, -78, -29, 105, -121, -115, -88, 95, 54, -25, -1, 101, -69, -53, -65, -87, 24, -30, -2, 32, -7, 82, -102, 123, -1, 86, 99, -24, -33, -53, 35, 38};
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
    msg.setTimeStamp(0.0536005668029);
    msg.setSource(16456U);
    msg.setSourceEntity(239U);
    msg.setDestination(22933U);
    msg.setDestinationEntity(183U);
    msg.plan_id.assign("DEEJDCIIGCNELCRZKIOENMIDKHQDOFUTYWYRFGXQPTMGCJOBBCNQWEBSBWHSTDYFNJRVWVBURNYFAUJXNCAAVKQELUNYZSOWIXYPJWUULTZJTFPTOPMUWFAYVGFSFRDFLXMXMXVNZULTILGRJMSPETGWPHBBKGOYXPEGYQHDSVWMVIQHRXHAKHJDMZIKMZMOEHZBSBRSRYT");
    msg.plan_size = 26968U;
    msg.change_time = 0.924004291875;
    msg.change_sid = 14269U;
    msg.change_sname.assign("HBSTBHSLFYLZZBRVMTLGQWLVWXNUQMVKVZFPWFONOGVNFDFQWASUUEFHNOAXVORUTIZB");
    const char tmp_msg_0[] = {5, 20, -31, 113, 35, 126, -66, 117, 85, -8, -90, 19, -8, 64, 78, 8, -15, -27, -28, 81, 56, -29, 122, -84, 35, -121, 93, 99, -3, -23, 11, -33, -71, 105, 41, 65, 37, 124, -103, 44, 72, 42, 30, 104, -107, -35, -42, -19, -5, 59, 21, 95, 122, -1, -40, -28, 21, -63, 24, -33, -14, -2, -115, 9, -107, -25, -72, 99, 46, -105, -28, 38, 53, 7, -88, 24, 39, -63, 66, 93, 14, 50, -44, -56, 85, -76, -42, 126, -39, 58, -110, 102, -51, 3, 14, -110, 78, -46, -121, -62, 67, 83, -2, 1, 32, -85, -98};
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
    msg.setTimeStamp(0.00710806225072);
    msg.setSource(54288U);
    msg.setSourceEntity(108U);
    msg.setDestination(41801U);
    msg.setDestinationEntity(158U);
    msg.plan_id.assign("OQDSZCAJVUFUEGYQFGXGHNILJYDLWYPNDIXUCTESFQTRX");
    msg.plan_size = 52706U;
    msg.change_time = 0.273830299222;
    msg.change_sid = 62287U;
    msg.change_sname.assign("OLSMIVXHQBPVGHIJDNEGKVLENMXSCEUNUKOIFUQISBWFZCTJHMOBGJRFPBLDE");
    const char tmp_msg_0[] = {-99, -22, 124, 117, -77, 93, 86, -32, -10, 24, -99, -46, 27, 83, -31, 11, 10, 60, -57, 39, -14, -115, 7, -119, -70};
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
    msg.setTimeStamp(0.690894042354);
    msg.setSource(13748U);
    msg.setSourceEntity(9U);
    msg.setDestination(38529U);
    msg.setDestinationEntity(84U);
    msg.type = 172U;
    msg.op = 41U;
    msg.request_id = 13805U;
    msg.plan_id.assign("JMBQRDJGUGOQREGSHJNBDSGADJZNXPTWQVAYSQLGIPDHIUHGWNSQZHZDKSXLXELKNYMRNRISRTTFYMWMDEFEBWPOXHWQCNTRVALKJCXCOVICLTCOYACMQDDUI");
    msg.flags = 30022U;
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.0426943401272;
    tmp_msg_0.lon = 0.723451158075;
    tmp_msg_0.depth = 0.188219953558;
    tmp_msg_0.roll = 0.470923998091;
    tmp_msg_0.pitch = 0.294989474376;
    tmp_msg_0.yaw = 0.545973234257;
    tmp_msg_0.rcp_time = 0.281060204862;
    tmp_msg_0.sid.assign("GSHWSNCPIMCAVFSLGXUTQGPVVQMGPYDLTKCBTYWJHRBEXFNXVBERUCIDDSMMHRRKJUFNRLFJYTMUPBWINRUUJZHKQFCZLQTSGNJZEXEOFWARBGGORDBCKQXSJOEBHHXNISLKIUXAAQKPFDVKMLDIMXUYEUOQPYPZZMVQASGFIOQKFICGYNDVVZQYZNLHIEYHAHTLOJIODY");
    tmp_msg_0.s_type = 88U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EHVNWACFWXZGQRRXMEGKQMBTFBVYRFHGJORAIDHAOVSP");

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
    msg.setTimeStamp(0.685773100097);
    msg.setSource(18840U);
    msg.setSourceEntity(158U);
    msg.setDestination(263U);
    msg.setDestinationEntity(201U);
    msg.type = 232U;
    msg.op = 174U;
    msg.request_id = 60828U;
    msg.plan_id.assign("KJIRGFRAXEFJOSQFHOQQNLDBVBJHGZOHAOTHCTLJYSXRSGOJZEMJBRYJNUZOPZEWOBSDUVTYDAGWYCKNHCDUZMDIHKQVQAXYFAWILGMQUYVKMNTQRELNIRYAMWENI");
    msg.flags = 19864U;
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 197U;
    tmp_msg_0.angle = 0.593674454419;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LZGXHFIXQPOYBQQNAEQFMWCQTUFDVOKPKONFMJJITAEAHLPRIYPPJMFSXMVHPKBNABDSBGIPUDRGWYDKDRNVYXXLHKLRSVDRZQUDFEQPCZVHKOL");

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
    msg.setTimeStamp(0.15017888993);
    msg.setSource(61619U);
    msg.setSourceEntity(5U);
    msg.setDestination(13784U);
    msg.setDestinationEntity(193U);
    msg.type = 174U;
    msg.op = 57U;
    msg.request_id = 2419U;
    msg.plan_id.assign("UJGZVMKHWQLIVDCRKGNOJIYIIXBXOZMPXTRZSJEQYSWPCPWNDVUKAWACIKANHXFHGESYRLTJNLCOYXZAQUUGPUAMSPWDGFVHFFMEVCSJBXQDVMYAZBXUTPVBUTOWFEEWESRWIZWLGDTIETOGTBBEPVJFNUXOHYTWKHVAOSBAFDDLBINOJKZGDLDUEYVBRIKAHHRQNOKAPCCNLFPEHNSLCCDL");
    msg.flags = 6334U;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("PYCFUFUMWQRTWSCIMMXBBVFYGGSZFUFXWHYDPIREBRLRNNXBMANAATETHKVODSFTHJJRZYCSQHJERGSTWADDDXWELUCVWIOPXIWMMVITHCAJLDGXZWLVCEZLIRANPOIZMNOBHVDHBKFAILEKZAAMTVTJQOQIJKFTZUWPBEPJRZWCHVKYMXEGOPUNYLKBDSGOQSJGZQIHGECCUBVQKGOYLMOLKUPB");
    tmp_msg_0.value = 166U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UHQLHKSIFKGZDIKFGUETBFVZWJWRAINZVHEPTEXB");

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
    msg.setTimeStamp(0.938501056889);
    msg.setSource(5600U);
    msg.setSourceEntity(94U);
    msg.setDestination(2434U);
    msg.setDestinationEntity(91U);
    msg.state = 146U;
    msg.plan_id.assign("JTKBDIRDUAGWFZYKXNZUPMFMDUGBDVBRYRYEMSWXSJQWLYVOEEBFCEUJFJBKNMOIGUTTSPKPOGMEUIAQYAKAGIZSMQEMBSCDUSYREPQHRPTGIUZKLKNXNHFWTHUJRFWLKTZKCJAYDQXOVEGMBXVOTPZOCBUN");
    msg.plan_eta = -1856820676;
    msg.plan_progress = 0.766245271677;
    msg.man_id.assign("IRDXEDLROWLDGQCBFCXBMPLNVOTCFUICWIKQZBOJZHNHJNZKLJBUNJHSGJORPKMIDGHAILFNGBZNYOEGYGYCDIABHXKVANYLRWVXEKFIMHXUXEFWPGMUNNICEYHZZKQBSJPVSRLQOQSJFSLVKQFMTWSACJKAKZJBTWZOVKUCTUOFASTPAQOWAHXBPHP");
    msg.man_type = 8210U;
    msg.man_eta = -379075018;
    msg.last_outcome = 89U;

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
    msg.setTimeStamp(0.516795011987);
    msg.setSource(21364U);
    msg.setSourceEntity(25U);
    msg.setDestination(63568U);
    msg.setDestinationEntity(130U);
    msg.state = 149U;
    msg.plan_id.assign("WZFNJONDIVTIAWSGAMOQRENQEJHQHXPGWAISBHPXPVDXRUZMZMFHLSDBFBCPDJVALJNHOCEBGMYLWSEFVAJOEKKPWFKBMTCUVTIYILESLQKTWOIITPDFFXVCGGIQTLKUCESDQXZVNRKNOZOQUWDJSURGYAROMRWYFVEGAHZNPRTJHXLBSXRBBQYCYHLGHFKXZCNEHQDAGZRAAGTIPMMMBNYCVRXZXYSICLCPTY");
    msg.plan_eta = -348364697;
    msg.plan_progress = 0.274148011682;
    msg.man_id.assign("VANIYHQFJSSIQNDSZXUPRWCGJLPTEKHQNPVXDLVILFGBMUYTMWWFUAKHYTDTCJWQBCIZMBDMBNGPSFCUDJAFFGAYHRBQMEPZGNKCNUEQLMTKVHZFGVCTRPXUJGSBLEVNHMIBUXYWOSNWHSAWIOOMYHSZEPVEOAUXXAGHLFYYVJNAKVKR");
    msg.man_type = 24368U;
    msg.man_eta = -65187860;
    msg.last_outcome = 122U;

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
    msg.setTimeStamp(0.587943846537);
    msg.setSource(27470U);
    msg.setSourceEntity(174U);
    msg.setDestination(54566U);
    msg.setDestinationEntity(185U);
    msg.state = 119U;
    msg.plan_id.assign("CKRYUHMILFDQMOJQARMCMISNFCUENVLWBDBNEYYCXNZVOAMPIFZBZELYEYOZHMPDAUPETGXKXUNBUMGPFCIGOJSYQWDPWTDHSSERAEXW");
    msg.plan_eta = 1630120419;
    msg.plan_progress = 0.0752171737652;
    msg.man_id.assign("ZROUPJFEESVZVN");
    msg.man_type = 57839U;
    msg.man_eta = -560016826;
    msg.last_outcome = 109U;

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
    msg.setTimeStamp(0.962815202135);
    msg.setSource(47943U);
    msg.setSourceEntity(171U);
    msg.setDestination(28164U);
    msg.setDestinationEntity(191U);
    msg.name.assign("YTOBATXGOSYGLLUPKWDWCVSTXRXQHHMUIFTAIAIKIACCDSARJVKDGNPSBQPXBOFYSHFMCTXIEEFSBCTJXWNRBJFURAZNVPJIFEVLLUNDVTIZYQVNQCSKAREGZJWZFZSZWXLDOYMMTOUOEZLPUTNIEYLFJWKXXCIWIZNPDJFUQ");
    msg.value.assign("QKYMHZGBTK");
    msg.type = 110U;
    msg.access = 181U;

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
    msg.setTimeStamp(0.613255081454);
    msg.setSource(16389U);
    msg.setSourceEntity(119U);
    msg.setDestination(60546U);
    msg.setDestinationEntity(239U);
    msg.name.assign("SAYLHWFFBDAGWVUXMFGVGWOBBEMNQZNHGFFROZIGPQFFPWRJDJSBXDAKTLUBTMTSOJJWZLZGCPBYULIUUJABEVNXRGAOERIJFBHITKEEP");
    msg.value.assign("FVIZDEQLDZKQBCWZSJHZWNHGPLXWEKKMLFGOUEIIFXCNYQNXSZIDJFJPPFNLPHYCSSDWKKNPPWLWFSQCUTGDRRCHTPTULSGYMRLXAAJOYZIXMDQMVHIIOAGEXBLNOTBMTTQXXURCTUPRYOPVAVWRJNTOKGMSSBOYGRKVUXMBBJFXEVVDUKBAHJHAYJLNPOZZDBAUMGGMLDHVQITGJYHTIE");
    msg.type = 135U;
    msg.access = 90U;

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
    msg.setTimeStamp(0.129132329815);
    msg.setSource(32070U);
    msg.setSourceEntity(54U);
    msg.setDestination(42178U);
    msg.setDestinationEntity(17U);
    msg.name.assign("MAUAKYLQDUZNAYELCCNMMNYAJDLKJ");
    msg.value.assign("BBLKAKLPESHBCCGODBEDDEWPGMUSDWVZHKKTWHBORRGSOQBCZRQANPSDRVQE");
    msg.type = 29U;
    msg.access = 237U;

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
    msg.setTimeStamp(0.275689420748);
    msg.setSource(12558U);
    msg.setSourceEntity(165U);
    msg.setDestination(29146U);
    msg.setDestinationEntity(37U);
    msg.cmd = 68U;
    msg.op = 116U;
    msg.plan_id.assign("BLIHBUPAFISWENLHVPOQSICOYXDHNLGTNUEUQQIZMBMUHPKRPDVBQVRZEJVAGGIOGCWKXRTUVJYAUQUMOKOSXZYZDKZTMQWPUJSDEIOGYGVAJGRBLBMLHFCWFWJFMYVDDHWCVERFNASNGKYPXNJEKSVMUBZAKNDLJAHPXWTYZECLFXTDLTAOAKPIWIEYR");
    msg.params.assign("IBJPVDLSJFARGXFLXIVDSJOCPUHQBYPTAZYKPRNLUATZHUURVIPZJLJDQFKTMROGOAHLVPKWRUMQXMNWTLUWEWOIKMOKYFTGRHNWITSMQVAETUOKRNDFEGZHXLDORMYLTZCYEPHXKFSUYQVZLJXDWBIIZHWROCGKGTNWPWKQFFYBGCBJNBJNIUBOREDDYSAHNVEWMSYCECASXBCSBPNECQMPAYZJAFMQAHVVSQUZGLSBDGOCGKEENX");

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
    msg.setTimeStamp(0.752158211237);
    msg.setSource(5538U);
    msg.setSourceEntity(249U);
    msg.setDestination(55233U);
    msg.setDestinationEntity(59U);
    msg.cmd = 243U;
    msg.op = 143U;
    msg.plan_id.assign("HXRSRHGUHHLCQODVKUDNXGRUIVYOCBGYJWQKMMWUXDZGKPFSIXTZAVXVZMLHEJZUNXPTZ");
    msg.params.assign("RJEHYMTGGUHNBNFSHKNAEAJZGRLDTCKDFOWQSTZFCGJBVCXYEQHQBOMCUISIWRDVPUEHAUXIPALVJKMCLMRHAUMIUHWPDDMWUTXGTUCBKXXFFDFXBKNORUMBKPAMTJRZPPOWPTEOPGONJZG");

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
    msg.setTimeStamp(0.337543093343);
    msg.setSource(50809U);
    msg.setSourceEntity(115U);
    msg.setDestination(20928U);
    msg.setDestinationEntity(146U);
    msg.cmd = 27U;
    msg.op = 65U;
    msg.plan_id.assign("SEVMZBGSYSRJFAXQRHINXJEVOEVNCSKZYHVZKCLPKJJMYDWAFWPKYBEJLGQVOHHXFQQXABYIWLSUUBDEFXHNSZCUPMUZPPDZGTQKCLHDTDQTBZ");
    msg.params.assign("UWSFPHBOOIACIRNMQHXYBMAOTWNLSTEFPTJBKDGSNSPIZDFGCBVIGYQLQCKUJLZGZHCZWNVCXETELLGIYUHWZOATZAHUPUNXKXNZAEAJRCEWQDWXLHVYRTSPSWHILZBUPLBKKGZOVSMDCRDUGQV");

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
    msg.setTimeStamp(0.540526051388);
    msg.setSource(62930U);
    msg.setSourceEntity(186U);
    msg.setDestination(5367U);
    msg.setDestinationEntity(55U);
    msg.group_name.assign("YCVYSOIHCUPCCSRALMGXPNROJGZCWGURFNAVNYMSHVNJMMNKXTYKXLWAEJKCILZDHHCMFYZRKDKKRFCDBZDPHBHGOOZQZGTSBGCIUKCWXHMSWHVPOSWEQRTABEGPJOXOYXQIDQJFQYVUJJTUBPMOYXUDTFUEQTPRWQSEGXENQVF");
    msg.op = 99U;
    msg.lat = 0.737479895994;
    msg.lon = 0.806191522541;
    msg.height = 0.133272790108;
    msg.x = 0.791290007432;
    msg.y = 0.627404247165;
    msg.z = 0.877675091741;
    msg.phi = 0.081095705113;
    msg.theta = 0.727800466878;
    msg.psi = 0.463911276794;
    msg.vx = 0.954855242558;
    msg.vy = 0.415074058901;
    msg.vz = 0.324905577068;
    msg.p = 0.0720312465198;
    msg.q = 0.926587661915;
    msg.r = 0.822187396215;
    msg.svx = 0.829273354453;
    msg.svy = 0.299221480992;
    msg.svz = 0.510277301728;

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
    msg.setTimeStamp(0.784232493603);
    msg.setSource(61363U);
    msg.setSourceEntity(232U);
    msg.setDestination(3840U);
    msg.setDestinationEntity(181U);
    msg.group_name.assign("VYZCUKJTCTTUAPWGPKRMQJKTJJGRZQGRYVLOMQOHDNSOBRM");
    msg.op = 151U;
    msg.lat = 0.429508429704;
    msg.lon = 0.509634969783;
    msg.height = 0.511754751301;
    msg.x = 0.450590910705;
    msg.y = 0.0069318213237;
    msg.z = 0.829308744736;
    msg.phi = 0.398065754653;
    msg.theta = 0.501050189526;
    msg.psi = 0.532574792866;
    msg.vx = 0.703002921867;
    msg.vy = 0.67543322396;
    msg.vz = 0.403951303454;
    msg.p = 0.704260393757;
    msg.q = 0.365618027493;
    msg.r = 0.147549791886;
    msg.svx = 0.490084519147;
    msg.svy = 0.745314534502;
    msg.svz = 0.788670322844;

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
    msg.setTimeStamp(0.258086289522);
    msg.setSource(47110U);
    msg.setSourceEntity(88U);
    msg.setDestination(16899U);
    msg.setDestinationEntity(119U);
    msg.group_name.assign("FJIPEDYKFABQPCMGPGMASLWJFRDHBCO");
    msg.op = 211U;
    msg.lat = 0.737063144013;
    msg.lon = 0.877593864931;
    msg.height = 0.0277033559487;
    msg.x = 0.982401587314;
    msg.y = 0.83376357285;
    msg.z = 0.794716560972;
    msg.phi = 0.0438547424109;
    msg.theta = 0.102124662128;
    msg.psi = 0.91606489048;
    msg.vx = 0.456296690328;
    msg.vy = 0.231387533213;
    msg.vz = 0.0212886194482;
    msg.p = 0.830729448905;
    msg.q = 0.755816273734;
    msg.r = 0.634144776401;
    msg.svx = 0.0518572368478;
    msg.svy = 0.701542498029;
    msg.svz = 0.363321908998;

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
    msg.setTimeStamp(0.296547598354);
    msg.setSource(8112U);
    msg.setSourceEntity(200U);
    msg.setDestination(55909U);
    msg.setDestinationEntity(113U);
    msg.plan_id.assign("IUJWIBRPCRNURDZCMJPNWTZJTGNVMCKKIWTKDYPODBKBDYIGSHAKVUNJWKBFSXSUUGEROEFLALLNWLYABHUMUFHBKZWHHORBXAMMTQTAEOCGBXVNQEVZIFPDZSRJZYVBPVJXVJMQYYCLPLWGACQNAFDUIZKRXMYASUCXMADFOCFLYGQINKTVJHHGHEXIXOZXFFQNAKVREQMOTD");
    msg.type = 207U;
    msg.properties = 236U;
    msg.durations.assign("UPSOMDKRPBCOQBXPWFKPBMQWCMQZEEOXCELLDNSOLBIYDLWYGVCTSLFVYEQELOZHKOANWXGHAUJQJFGOZRUPWYR");
    msg.distances.assign("HVDOLMWCOHMHMWRIUVRGFJWSCVSAHOOXPUYELBGADLZOZYPJBSUEUMZZUKAECPZQZZRFXWMPDAPKMKGTIBVZJTBJKSCRUF");
    msg.actions.assign("WWMFCVKOQQDPODCRLSJPPHGMHQGAKXNGMTZSNLVGQXLBAIYJCTOEENDMILCYQVOEEFYJUHXZNSSSQPKKTUAUBMROJRQJWTCCLSBEFGYWWCISNBRGYSNDXIJOETUVADZNRLVOBPYEJAIBMOZXLEKMK");
    msg.fuel.assign("LSDAXNMYIEDHTFLMTNJIYKVYLGZTJEXQEQSARDALDBNCBAVKPWPCPKWAVIWASDFQNSQGUHTSCTQJJVHPAFHJYKDRQUOLEPARQRPSGNFRUMFWFWQGENSCOMJGVXPTRUBZIIWLHFCKIUGXOXMOZOKMPSYBTANQOVKVDUJYEZOGWKGGTOJLNJYRHEXIYYCXXELBWXFTRHCHZTMIBMCEUB");

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
    msg.setTimeStamp(0.491568693111);
    msg.setSource(16433U);
    msg.setSourceEntity(143U);
    msg.setDestination(12250U);
    msg.setDestinationEntity(142U);
    msg.plan_id.assign("VNGKIWMSLAPCNLAXMHUJQQGKDCKKOOHQFTFTGMSZAKSPRIPDBQJFVWGFNAXIYLLBCXSRJIUHIZVJENGPMKGLRJNDQPCBEIOFUTJ");
    msg.type = 123U;
    msg.properties = 155U;
    msg.durations.assign("MFQHHZWDCUGFOODGSUIEZJUPLAPGQXSOACOACFWMOXQREZVGNHALSIDQIIRMYYSCWUNBCFJOOPHVSVCXXNVOSDYWZQIDJLCQNBOEPVQFGOEHTRFUGUUFWVZIDXBDLVGXACZWTYKSTHVFQRQDJKTVPMJRMJTVLRNGEZBRPZKFDWNJKRSNTX");
    msg.distances.assign("BNPEVLJGGRWITHCLYELSYYMOKETZJCSTJXZTFTXNYLIIRVVCDNMKEHXHBFBYTCBTABWNGUJDFFMEOZLGLVTBYGVHGKZZCXWEHCQDNXKQIFRXHPERSGRKNIALQKMXDBRIBYZDWXSRAPOUOUPMSGPONFJWVLJODAVZZASLPFQDJQHEWK");
    msg.actions.assign("LRFRCJOSJUFCCSBGKDXSEGPSYGTJFSPFYDNNVKBLTJADNTPZTAYPLFHVNHODYFDVOEDXPWWAXXAUIEEBWEDVMGRGHMXROOFTKBVYGCBMUEHCIMTMUMIPCCTBJIAQKZVBORYIHZHXFWLUGIUJQISNNDAQFQSPRPVLNBWLZMSJZGZWKRMUGNFSXRLCYMJWZJLDUSB");
    msg.fuel.assign("OXTFHMPQTEDXUGEMAXTZTDQIZEOXRQCOSOHVBHDLCJPAETOCYPWSNQQKRNPMNAPCNTKOVCBPAAGYGUMEFPBVDEHNGLMZNTLCSFOKQCIJYJSSAVHZHWAJGYIKCVOXOTILHVJJGFJGZLLKYUFMLDWPSCYRE");

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
    msg.setTimeStamp(0.608352518082);
    msg.setSource(64248U);
    msg.setSourceEntity(132U);
    msg.setDestination(37978U);
    msg.setDestinationEntity(77U);
    msg.plan_id.assign("ZTUMHTMCBVMRXKCFGVFOYJJUHZKXYWZWTGOMVCSBLAHITROMNMXMRPKWNUNEVFXUNUGZVHNQATWCWPTDKQQUYHPTAIJFGJBEKLEIPOCZPCRSPFMDB");
    msg.type = 19U;
    msg.properties = 129U;
    msg.durations.assign("VJTJWQYEDQUNZARILZGXSHBTDNCQXZSTKFRAMKRUXHWFYUIXEERPTDQHXKVJAYIAEBHAQPGFCLXYCYPGUAGEKFMTWBHMWIJCYTUWQOUJVBDNIFPLPWRETHGMSLIGFUGESBXCNQSFKCEIRDVNJKBOTMSGZDJWPXMVNLQLHNYOUZWJLCFAVJYIDBIWVGSZEMZTSOPQAXHDPZMOCRRNACRHSVYP");
    msg.distances.assign("PJCJCUQMTUGLEZIUMDLAYYWRHMBQKXQBOOFTGPBWBQSOIQEHKSVKEPSOXVUHKNYUMHCXFTWLGIGGAPXFWHVZWZANQDVTPKRVEBCOLGAPITNPWCHXJMZUHDSSFBJTGCXDWLSRTHDOXRQABEGYPHFRNQUBJKOOJXYIDCZAAPGVRVCEXYYIZINVDRTHVLBDZIERFFJDMOUSVNAMYYEIZETWIJQFMWJPLSSZCALUKACNEK");
    msg.actions.assign("YRXJGTJXIGMKULOYRKFRLTFTGENYYMRJSAXKQCYPCTTYOWKHFPBGNRMHNFVNUCWPRXBFIJSTPZRHTOJPDDVUGLKGMJNIJSLNLTGASKNDXYWZPSECDFHJSQXFETIMUAEUZCOPYFHZOLRIZZQVUDBCAQLMIBKCZOXWVACSSMUO");
    msg.fuel.assign("SVRSBEUNPIPSQOHCPGBXZJOBYTAGYXGTXOXXDCCVADPAUESKEJLEITKUVNLDULFCGYZBUQZVMLHRKINBDBNAWSXXCYQALJOUHCPYZWNUMRFJXALJORTLGMHTRQQPJSKRWICFGZYUERFEGHMHMVAVAEGHZKOXMISBQQZRODQHRWGKNVV");

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
    msg.setTimeStamp(0.784527397332);
    msg.setSource(12427U);
    msg.setSourceEntity(208U);
    msg.setDestination(64973U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.736387678274;
    msg.lon = 0.539996866217;
    msg.depth = 0.61726788947;
    msg.roll = 0.882241612816;
    msg.pitch = 0.208681588067;
    msg.yaw = 0.735426839685;
    msg.rcp_time = 0.828766001294;
    msg.sid.assign("NWQBFBWFODJJDAZIRIMOUYZWVTQQSYKEBPVXATVBZWTWRXAGHJNLLHNQHCTYDBEYVRDUVQGCUZUSOZYXALVPCXNFCMTOPKPOEBKTKDELIPXNHWFGYZTJKAIIEDIKRWUGISRLAIHQACNHUJNKIQPRUDYWCJWELSMSUKZIPLMGVRJSZAETFJUGMOOWZEKHFDEMMPUXORRBGNCGGDSBKVFBSDYVCMXPZLSYHBXOVMAQCJALFHRLHSGNPFXTCMEF");
    msg.s_type = 69U;

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
    msg.setTimeStamp(0.585770062517);
    msg.setSource(20745U);
    msg.setSourceEntity(25U);
    msg.setDestination(16168U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.855807495017;
    msg.lon = 0.279920369839;
    msg.depth = 0.441002061074;
    msg.roll = 0.410489918641;
    msg.pitch = 0.960198052851;
    msg.yaw = 0.893582589396;
    msg.rcp_time = 0.870705365319;
    msg.sid.assign("VZQFIRSDRDRPBPUEYGYUMQIYFYZPOXKIXOUILHENLDPXECSJKLTRGMMWWSIQVOCGIJBNZIEXUWJDUFNFLWW");
    msg.s_type = 126U;

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
    msg.setTimeStamp(0.367565929588);
    msg.setSource(17375U);
    msg.setSourceEntity(200U);
    msg.setDestination(54238U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.0884077930107;
    msg.lon = 0.165326100469;
    msg.depth = 0.753259059629;
    msg.roll = 0.000487578799165;
    msg.pitch = 0.999661482694;
    msg.yaw = 0.797995235427;
    msg.rcp_time = 0.655286876103;
    msg.sid.assign("TYUWWONEVNVJPIKQXBPNESWRYNDODJNHWQXGOPVVJLEHLLMHQSYOZHRYNDQGGJQDMPBCRSTGTRXUOBEFXLHKZCJGFZNRPTRRPLVYJIBBQCGZTEGIIFDWBYSWKHHKOGUKVGMWEBCPUKVZXMPRDLZYBHKVFXALDHNOJAAFIQTUECOUXSS");
    msg.s_type = 93U;

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
    msg.setTimeStamp(0.241319891128);
    msg.setSource(1668U);
    msg.setSourceEntity(219U);
    msg.setDestination(61250U);
    msg.setDestinationEntity(3U);
    msg.id.assign("LYYSYPFSWPVYGPTDVUCWKFTGIBMSAGNLWIJHZGRXQZJGFNJFAKZUXYYEIHXSCZHJEHQWVVORFLUEHAEEPVNXFCJMAODVYNXNQDAZOKMDODDXHPRMJQXQTPXRSVCGIRBIELUCUFDMTIKUTMPWZABOWFHSEMMDEZKLRNZWYSSORWKLWAYYAUAMCKLFOOJXBRMPNWCBDBVPSBILFVQUVQQETGTDNATONUUOISLHIKZKQ");
    msg.sensor_class.assign("POXNBFLYRYJRPSUDRFEZTJAGIWKV");
    msg.lat = 0.611119083974;
    msg.lon = 0.0373094827855;
    msg.alt = 0.326050720599;
    msg.heading = 0.948617641145;
    msg.data.assign("LPSKYFKEGWUCEBDJIWAVBDXNVRHPRYUMRIBEZLRHMGJGCMQCWIDRWLLVTOTLDIYFZBSKNYEJUNXUUKEEQPXWZGKDYDJHLVATSNHHLMTXQFWIJJZCVKUSCZOCEBPAPCBUHFXQJYETSWFBNMCFQSHAUVYYSPJRFTBCINLIBTQKTLLDPXZMOBRXVZIEAGFKJGHOXAVWQ");

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
    msg.setTimeStamp(0.41811167869);
    msg.setSource(6405U);
    msg.setSourceEntity(232U);
    msg.setDestination(45279U);
    msg.setDestinationEntity(103U);
    msg.id.assign("IUYDGEFXIMHWRMAVMQMMCVUBKPNTYZWEKLQYXIVBYUWOXSINREAQLVS");
    msg.sensor_class.assign("QRVLQAWVJQXTNQJHWPFYXJGNEIJVZXUUAYXLFDRZCDGTMMHHEIDMHKXETCSDNNXACRWFKYNGEZXSDNAUZKOLRZASIBUIGVBMVBPPQCPCFLUIEAJQMHGUMORTHMJHVJCHPEBMKYOUVZWVDIQCFKAJNDGPPPEYFGOVIYZHJTWETTTFYALDBSRBTFFICKBRGJBGLLNSNOOVOQWQZERONUIWRDQKLLZSYSUSPPBMYCG");
    msg.lat = 0.791509503889;
    msg.lon = 0.241584113967;
    msg.alt = 0.180499543656;
    msg.heading = 0.339306660682;
    msg.data.assign("AJEHQQRQUIQBCRRNAGTDTHKVJLBZMPJPFYHHDKXORGXQPHCWEZGWWMSBQIFLXPCAIIZUBIVCGNSHXVYUC");

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
    msg.setTimeStamp(0.711291015613);
    msg.setSource(64627U);
    msg.setSourceEntity(200U);
    msg.setDestination(63272U);
    msg.setDestinationEntity(197U);
    msg.id.assign("JUHMSDBNLUDXQRGBFKQBGOJVWWUTTKBNKLFAYXGDKMKWQRIGFCJYZCIHSXKUMBPKBIJNHJNPYEVUYZXIOFWIQYKMXLMBOQCENWLLHGZOXAESTCOYNSZCHHSLDASCPFAVRLQETDTEYSOQTHIVISXRCEORKZOFLMJGNSUYRTTQHARZUWRXLRZZGDPIUCGWPDFAJ");
    msg.sensor_class.assign("FWWVVOFNUPOAXNYGAEQJVBYJRHSPKJPBROQGZCSDCKRYIDUKSJAJXKQJETQUJZXWILNHTITXVQQWAMZHVFWIEOPZGLUTSTHXMAPIEMSXVIZJYILINFBAMBJPOFYHOTEROYDAMMDDLNZVRJRERZUUUYENUICBCTBWQYFDMXGBGQUDNDWHFERXPWYGRXPMKTBGFAN");
    msg.lat = 0.770758716044;
    msg.lon = 0.980177349665;
    msg.alt = 0.539048646099;
    msg.heading = 0.156930289896;
    msg.data.assign("IKHYMJOWOROQSMURTOQMRZYIYTBHOAVTABUITJOXXYJNCOSYZDRAFQGZGYCVNGCPLBDPKIDGQEJXWFJYKGWFPMGIMQSAAQRVGIUCHVDWUEHIVTYFFDVGBMBJSHAWBQCQNDXIVUEPAORAYCRXNWEFDAPTNZVKKMNDULAGTEBNKEVWHSLLTSLNTSFDEC");

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
    msg.setTimeStamp(0.0882351673929);
    msg.setSource(8823U);
    msg.setSourceEntity(130U);
    msg.setDestination(65490U);
    msg.setDestinationEntity(215U);
    msg.id.assign("UUMWNCSZBJOEUVSELPRROFZLYOLJHFRCVGPYBLVIJPXN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NSYECZEOUDBHRFTMDVEYWN");
    tmp_msg_0.feature_type = 164U;
    tmp_msg_0.rgb_red = 240U;
    tmp_msg_0.rgb_green = 82U;
    tmp_msg_0.rgb_blue = 30U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.268828232874;
    tmp_tmp_msg_0_0.lon = 0.0133954750571;
    tmp_tmp_msg_0_0.alt = 0.115778314377;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.815608926783);
    msg.setSource(50158U);
    msg.setSourceEntity(149U);
    msg.setDestination(4834U);
    msg.setDestinationEntity(57U);
    msg.id.assign("NGDMZGXWYCSCDDMLJCAJDIMBLSEUORYBZWTRVUIGBPATZAVEOMECSYWABSZEPCTFXEJOJJTDVWDYHGOSSPHHTXHKLMBTTNWZAFYJKHCGRFQHCAOEFZMTUPQHNRLFDWZVVUUSAFSZYXPNNVD");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("VMYTCWSTRVJYKAXEPSPAKYHGCUFPLQHDCESVOFLMNEHIXIWOJEKJQXAYLXDDSQNZQWYOIBLDCBZDTGLDSUMQEWUDKLNEWJHJBUXPAKNGEGCQGZZIZQPVHU");
    tmp_msg_0.feature_type = 229U;
    tmp_msg_0.rgb_red = 95U;
    tmp_msg_0.rgb_green = 34U;
    tmp_msg_0.rgb_blue = 127U;
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.237657344165);
    msg.setSource(16991U);
    msg.setSourceEntity(159U);
    msg.setDestination(7325U);
    msg.setDestinationEntity(116U);
    msg.id.assign("DTKAQZEERZEVPIVQSAADYCDTDBEIRPFKCYUIYAPUHLAKXVRIHFZTMVBGGBVKJYHYWEBEQVHISJ");

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
    msg.setTimeStamp(0.447794452016);
    msg.setSource(39592U);
    msg.setSourceEntity(14U);
    msg.setDestination(24629U);
    msg.setDestinationEntity(26U);
    msg.id.assign("VTKZGAMOOCLM");
    msg.feature_type = 242U;
    msg.rgb_red = 246U;
    msg.rgb_green = 216U;
    msg.rgb_blue = 98U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.98969052005;
    tmp_msg_0.lon = 0.286710377967;
    tmp_msg_0.alt = 0.500939755892;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.415068244519);
    msg.setSource(65323U);
    msg.setSourceEntity(143U);
    msg.setDestination(20046U);
    msg.setDestinationEntity(116U);
    msg.id.assign("TZRTYKSOGNPLTXPNNKBUHTHHQINBCFHZGLCDDJCSTEKRFJWWOFWTYBANMUCWYPDCKJAYNDP");
    msg.feature_type = 231U;
    msg.rgb_red = 211U;
    msg.rgb_green = 182U;
    msg.rgb_blue = 186U;

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
    msg.setTimeStamp(0.746049805789);
    msg.setSource(18689U);
    msg.setSourceEntity(253U);
    msg.setDestination(12243U);
    msg.setDestinationEntity(185U);
    msg.id.assign("AKHSMOOFJDSMPBGFVINVLYSGZJCUWWBBPTCLMQKGLYQKPNAGXHCUDRTUZEDCTWOWAONALHBWRSVNNIAMRSCRKCEMFTTSUECYQBKYEIJAGLEKZSNCSOZZDCYSXIDJEJPBBPJTAMKPQBIGHEUMMAXZUYVTAYVQUVHCDQVKPNUXRGRYDXWW");
    msg.feature_type = 217U;
    msg.rgb_red = 63U;
    msg.rgb_green = 212U;
    msg.rgb_blue = 34U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.589336310021;
    tmp_msg_0.lon = 0.882555706611;
    tmp_msg_0.alt = 0.879968128902;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.361267637679);
    msg.setSource(20134U);
    msg.setSourceEntity(138U);
    msg.setDestination(47409U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.268228226037;
    msg.lon = 0.376645973359;
    msg.alt = 0.608298472;

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
    msg.setTimeStamp(0.259265910523);
    msg.setSource(38276U);
    msg.setSourceEntity(120U);
    msg.setDestination(461U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.585422704822;
    msg.lon = 0.579939423873;
    msg.alt = 0.566605390312;

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
    msg.setTimeStamp(0.940819129785);
    msg.setSource(31262U);
    msg.setSourceEntity(99U);
    msg.setDestination(19475U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.133623220744;
    msg.lon = 0.374479775989;
    msg.alt = 0.35999522691;

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
    msg.setTimeStamp(0.0767525378542);
    msg.setSource(57923U);
    msg.setSourceEntity(21U);
    msg.setDestination(49000U);
    msg.setDestinationEntity(92U);
    msg.type = 141U;
    msg.id.assign("RQTDMNHOPTUZUJSXWLTKSKQICSVTQOVFTHEPWWYSYJQNXRPFIAOMDEEXQJVQCEWYBQXPRUXJDRIGOARWZCWKOUVGFSGJYLBMQWUBHMDYUMPOPEDFFWCIMGXICBVGGMSLNCXTKLUMDIOYTRXSBYXHHVAHNFUQPNHUNBCHLKZMONVSZAEPGRKLYJJEDEAQYRSWPAKXINOIFTBB");
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.671202840138;
    tmp_msg_0.temperature = 0.951353871867;
    tmp_msg_0.depth = 0.22198712634;
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
    msg.setTimeStamp(0.946744157672);
    msg.setSource(55979U);
    msg.setSourceEntity(24U);
    msg.setDestination(6627U);
    msg.setDestinationEntity(116U);
    msg.type = 55U;
    msg.id.assign("IPJGIEDLCWFKSJTQPRGGGEBCIIAJYIKEOESLVOXVXGKPNUPVUHMOD");
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("BOLFNASQVDRLOFHQZZDQVTCEWMAJAOZHXBBDUTMZRGBWFPABWVXOGXNXIFNUEPKFSSJMHRNCZXLQVCHFDHYEFUWVWKGMAGFOUAYKRMXGCNC");
    tmp_tmp_msg_0_0.lat = 0.768453939607;
    tmp_tmp_msg_0_0.lon = 0.137464609613;
    tmp_tmp_msg_0_0.depth = 0.731002567118;
    tmp_tmp_msg_0_0.query_channel = 246U;
    tmp_tmp_msg_0_0.reply_channel = 86U;
    tmp_tmp_msg_0_0.transponder_delay = 84U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.264062655266;
    tmp_msg_0.y = 0.945961105314;
    tmp_msg_0.var_x = 0.804831731378;
    tmp_msg_0.var_y = 0.291031152421;
    tmp_msg_0.distance = 0.719798144868;
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
    msg.setTimeStamp(0.606765106682);
    msg.setSource(22784U);
    msg.setSourceEntity(190U);
    msg.setDestination(1410U);
    msg.setDestinationEntity(213U);
    msg.type = 212U;
    msg.id.assign("AOGVDYIZBYUCCHVFPXHTYVRXZBLGBRADYRYQYVWRQOHVIMGQGSUOBFNUQIFFGYALJOCNKYZOFGVPKRGMCKVMSUYOBOZCSFWQUZEHTPLQJDLJXJXQTSUHPEWJIUQWWNPRCAMAELKKWQZLIWEKZHMNCQBOCRDAKXFYEMXJMKIRLTWKITLABEPSS");
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 231U;
    tmp_msg_0.text.assign("YXNIWUELUUSOIGOYYPBODZTDUNBTHTVDQAEFKWDFOGBNDFABREBRXGZNIUGMLQHSVTJAAVZLWQRJWYZSLWOCVYFTSJYVOKQVBSHOEHGETZMCXCDPCCNPKEWNRH");
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
    msg.setTimeStamp(0.651502665723);
    msg.setSource(11301U);
    msg.setSourceEntity(238U);
    msg.setDestination(60158U);
    msg.setDestinationEntity(191U);
    msg.id.assign("KFJLEUBEQKZPUDYPIBNJGGFROUXSUMXZREZXCPALLDOPFOVG");
    msg.callsign.assign("DJUUCCTCSCSRLEZNQPEIKDKVRBBHZFKNDDQXATSTFWDWHWUZGYOAWXSFIIJJVJIFHYERHMJZOKVEMFDSHSKWFUGQOKBBMHNMIFEQKAXPJVKNVMFIIBMHLJCPEEUVLVDUYUNLOSSXMMULBYGOZLHNLNXDHPQJCWYOZEZAINOGTAHVMXROGZYXSTV");
    msg.name.assign("HUAOUBPBFTDUWEJAETXAKQYUMVMUGLUCBLGESBNWANVNRLPGUOTTTMQFMPROYDQXWPLNSGRJQRSFSHDQOFIBEFHHIZUJEWOSRTMSLGZYEIKBKVQLJNDCCDREBGITQEJJMVHCXZXTNAPVWJPHHPAFZSZMDZWIYDOJKZAWLGZNSFOYKEPGMCPIHDCEYKOGUKKXVGBIVKRYICZAJOQKWOVPTYDQDHCIBVFXMLXFXSYJXWCVRSZLTYHRWB");
    msg.type_and_cargo = 198U;
    msg.a = 0.483511382289;
    msg.b = 0.353592724793;
    msg.c = 0.493495555448;
    msg.d = 0.535984028988;

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
    msg.setTimeStamp(0.321355872492);
    msg.setSource(32383U);
    msg.setSourceEntity(3U);
    msg.setDestination(33513U);
    msg.setDestinationEntity(112U);
    msg.id.assign("DJENQYDVEXMUDVXFTBGILWKMQKZRDHOKSDFHSKWMQTBEQECVJBKXAFWJVJKHIYTSCYMJHSZIRUBQEVEPMUGSWEICWDGIBHCJOKTALAZCZZMQPOZNPNNGDRAVQLXYNQWAWHLPKZGXKVWSXYEHUABBCURLIBAEOXJGWNFCSPTARUUQMAULJGSPGVRTOPLTYNDDPIFMHFGBYFOIXRYOTUHFHFNY");
    msg.callsign.assign("DQXGBLRMDACFTFLICLVWISIJVQWYXXHUSHZCZZFVADEQTCDMVDHGNGOXCOSPNXXRTGJLNIJOGSNYOFQHCKYCUSPOBCKPJHTHGMWDWIUUGMFRNFVAQUQPNXZDMACOAWQNIWNSZLP");
    msg.name.assign("MVPHPOSOCGFVKQUJQCKCRZZJKSMZARRIDONMOGJIVUVXNNOPULPMJWYYKWJLOBFFFXRTMEDVVRABDBGCMMWYQPAFTUREDTXGNNNWTUIMYCNKSLJFMKKVHCDZEUNPXSLGXBBOINRYLCSGIXFJTOGHGLES");
    msg.type_and_cargo = 0U;
    msg.a = 0.407840285987;
    msg.b = 0.134137413135;
    msg.c = 0.855076363011;
    msg.d = 0.436477356729;

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
    msg.setTimeStamp(0.753704621489);
    msg.setSource(5135U);
    msg.setSourceEntity(38U);
    msg.setDestination(18426U);
    msg.setDestinationEntity(68U);
    msg.id.assign("NJKXCQXHWUFIIWDZTLAZSHCCLJMBZGXDUPDLNNCPCDBUYVRLIAUMMEKKMZFVPTVUBWVXGFEHKJBBGBPCGRLXDPXFNQCFMSFSYMDEXHVQVYIMTYTTJOVAERKSHTPGJQXJRCQRNFYLGDSMFAQJRWNSBRPODGTUPRYATATVOEUZOWOHKXNMZYISFJSLEOA");
    msg.callsign.assign("HWHRTGQTEXGCZDGVKSOXVFDTOQENOWTKRAAZSVNABMLCMRZFCMEBXHLJZELWTFHWJUIWNVXTBVJDMMXDJQHLRWUKLGEJPASXWT");
    msg.name.assign("IHFIXFXVCHRBHLVLYCDUJUROFLKUOUNGVPBAUCBIGAWNJWJLVIGMYPTHLBZQVWXCEOCFWOZREKAZGXFAKTADNBPXONJHJVYSYER");
    msg.type_and_cargo = 17U;
    msg.a = 0.862619363328;
    msg.b = 0.172049224741;
    msg.c = 0.156110175287;
    msg.d = 0.442244428229;

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
    msg.setTimeStamp(0.583442933134);
    msg.setSource(7469U);
    msg.setSourceEntity(53U);
    msg.setDestination(17610U);
    msg.setDestinationEntity(208U);
    msg.localname.assign("BHVYKHRMOGTXWWZUBYRTYHEVAWCDJTEPPFAJQETCYWRRSFYIPWQMKEJVMOQATJUBBWORRNSGWAGIESYLENZXKOZDIQHKVVKALCKCFICSMOGPIATHMYVESNEYLMXLSNXXPRLMWYVZZOROBBPBIGNXRHWJGCFUTNZAUCDBUOHPXLACGJJKTMIUBSOUKHDVTSDQZTEJNAMDFJLRKQLVYOJWPDFQFPUMQXGZEZDVU");

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
    msg.setTimeStamp(0.594660421472);
    msg.setSource(14838U);
    msg.setSourceEntity(82U);
    msg.setDestination(19150U);
    msg.setDestinationEntity(0U);
    msg.localname.assign("PKIOYIGKWHJRNYNLMHODKFSVAELSVLAETNDVIWZMLZHJZMVJFKGAQFHSQOCJNCOQNTZLUEXMQEBE");

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
    msg.setTimeStamp(0.737025761637);
    msg.setSource(4515U);
    msg.setSourceEntity(77U);
    msg.setDestination(55520U);
    msg.setDestinationEntity(86U);
    msg.localname.assign("QAXPWWFIWGTLPCMGHKURNDCHDNBJXEYXQNVQFBGMAYMTZOBOLUMYEJFYTSTJDXATLGZNLNGBZSZSDVRQBUDBKCXVXOUAMRVVPLXXKFOTIGZMAPMIBXWKGFOWHHKMJEIYQZOHDZISNPHCEQYLKNJDIFPZJAPYZSVCUYEUFWCRSNPWUTLKQTMNHUDHSRBPAZYVERBICUOQCSKRJWWEJOSWLJI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MDFSEIUMJYGQWEBFVNNPCPJFKYBRLCRSWESJIUOHCURGBDXXMDAHGVUCYNPWDUVIJEHLOSBKPCLNLCQOIFTQZQVKHLTEFNNYGNZXRTOEGAYIXQJIRBIUOLGTOLGWJVJWTZCENNKJWMJRVZTCUDFP");
    tmp_msg_0.sys_type = 84U;
    tmp_msg_0.owner = 25769U;
    tmp_msg_0.lat = 0.222505037822;
    tmp_msg_0.lon = 0.598002752809;
    tmp_msg_0.height = 0.408036096866;
    tmp_msg_0.services.assign("ZOQXKIVHEAPOMXXYMHJBTDASCYGOCGWAHYFLJSJPXBGMXVOMBSLAPWDNUUBYPXWAQDGSPMNGXDBFEOKEZNZULJCXIJOODMNPCYFZUUEGIVTYGWPAQJRMRAYHRTURPCTJWERFZEHRKWKPZHTLDKNMGLJUH");
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
    msg.setTimeStamp(0.966128215747);
    msg.setSource(31320U);
    msg.setSourceEntity(84U);
    msg.setDestination(9283U);
    msg.setDestinationEntity(66U);
    msg.timeline.assign("FQTRJOUSILBNATRPPCZEMVFJYPCCRIOLHLNPJQMAFQBEJKEMVMKRXQWGUBTLSLOGYDUKDNDDWCXHHMFHRZBRHRGCNNFIUPZJPAYONWTGGZHGOBJODKOCWWBKSUFJQPWXODIRWSXFVMVAAYHYCHQTAVQPQIHDSYUXETXXZVJLNPJWBUUDMRTGGSMCLVYLSINXKDIUSBOCEKEKINQVTTNLZZVIYCJIMWKEKWBMZOAHESBTGFSAXQAVLUGPYXDZ");
    msg.predicate.assign("ATGFFGJGQESOSOWHOFTKZZJICNYCVENVLAUGFIVQMTEMDYVCTYSZBUQEFDHXEBXSIDUEBPLXKFYNJZALZNKAJBYEFCAQHPNRQCKDWRPXFOHOXCLTSPSKXBRPRDEMKGUPUNINVAKVLKAUTJJNRQXVIORBJVUGLGCRQITWVHYOACLIUPMQ");
    msg.attributes.assign("RKIUIRYMXMUCMOZFWNVSFOXETBEILUMTKTADIHILLNFMUOHVBAGMDKHOJCDZQDSCXTI");

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
    msg.setTimeStamp(0.747297282653);
    msg.setSource(54544U);
    msg.setSourceEntity(198U);
    msg.setDestination(45957U);
    msg.setDestinationEntity(242U);
    msg.timeline.assign("FBEKWEKTLSMGVBOCQAZYDKTANYFBPYMYDIFAOKJOZIPMTWNHQLNQGHSNOXXDIVDJYNPNGAUCTCJIRXVWFRFQLSFGQKSKZIPTRLJYXERVMQBCGQEAZLMVPJROILMBADJECPDKSXTHWMRLSUIOJZNCFRUTKFSJNXETWBDLDDYJHZEQMYAUSKAREVZXBKXGUUAYPUGRVCLOCYNVWRFHGWQZEOPUHGIOZSXCQHWJHUPUGABWLMHTXBSTV");
    msg.predicate.assign("ETBISUFRPJNHFVDNKXBTKKOWGLWWIIDJBUHROOOGVPIAFULHLWVSDFMMBRQDKYPTJJXXKLFDNSMHRSZCBMZFMYVUXECBHUXOQJNQGGKSAWCRJPSTNWEUDQASSYKRYZAHQYSOZUMINLDYHMMGIMFCSYOCWIXXGEAAEWTAA");
    msg.attributes.assign("CSSYSAVODFTQIQKLAPZDJZFKETRMWLHUWESHLDJIBWLOROVRLDWFUCGGVXSRYZORKWCBRAJOKXSLRERUIMNZLDDTVHPYNZVXPUPUEBAMNUQERZAOQFEUPOXFTXMXMHXHTNJHIIFNJVJZACXYSFHDJTMGCGOGYZCPPTUXWQZBVSNWYPQFEKWJBBLGIROCYNHTDGKAVMBQYUCISGTWAISCPEIAKGUQEK");

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
    msg.setTimeStamp(0.363693225093);
    msg.setSource(42029U);
    msg.setSourceEntity(13U);
    msg.setDestination(63166U);
    msg.setDestinationEntity(181U);
    msg.timeline.assign("HEKOVWMNBIHLYNOLERHRIZGURCZPDLBWKZQMSEDIQSGPLKLSVJYILPRGIVME");
    msg.predicate.assign("YHNTXVWCNXVDPGGSLBNVTDIGHZJWFHLASGZYEJTLEYNUBBYZHWZJENWYRMGWSTCVSDTKOUZRJEZMORFHLBOPYYMQQPRS");
    msg.attributes.assign("EUAIJEPPSRGZPABKNABIQINEFNWXYTXQUXEFDKLMKMMJPGFNCLCLKEZWDHVCWHAWORLTKQSMHJKFJNCVYTDYYQXZYHQFXDRYRDTZJOMZPNFEPABSEHMATQRCEGOSXFPGNQIZPTLMOVITZ");

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
    msg.setTimeStamp(0.120102705035);
    msg.setSource(56624U);
    msg.setSourceEntity(85U);
    msg.setDestination(19964U);
    msg.setDestinationEntity(43U);
    msg.command = 92U;
    msg.goal_id.assign("RVVAXPDXJWGDUNTNSZTPHKZCEHEMJDQQAQESYUTHNQZDWIJHNMKELTDXABTDWQMFRTGSDFRFSJBRKKVYWIGICZVLIMAUCBSJGCXRYVIYSWUQMJFVMQTAIBEBANDFQVXYYPHSOEOOSFNVAZPHNXJLWBZPIKRXAODGYMGOWOLKTEGUPULRZHKBCBQMHWXSIPPBZCKAKNGDWZCYCYKFUMN");
    msg.goal_xml.assign("GKGQSQPUTOCPZDEFQSIBQVBJBCKHXUZFUXCSKWLZDVEXWMACTYNZIZGHUOPTZVMHPQEISTMABYKLNNWRPWNSPLHHWNDIJOWMRICYYQWNRJSKWSOIAFLRCQKCPZQKXJVFA");

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
    msg.setTimeStamp(0.0454927221383);
    msg.setSource(48904U);
    msg.setSourceEntity(74U);
    msg.setDestination(25767U);
    msg.setDestinationEntity(193U);
    msg.command = 236U;
    msg.goal_id.assign("FTGITUHWJZBHZUXPGBYMLXLWSHUOOWDSCEU");
    msg.goal_xml.assign("YQFVFCPRNMOKYJOVMUTVZBNNRMDJQQWCRQUBGTHBSWONRXZYKCCFMXJUVLQPHUJSFPGLEXEGLCWSBKQETDZKVZTLDZQFCPWROVZVKQASUTPBVFLSOFDJXAIYEIAPXIGADDPNRCKCPYAZCXMJUYKLSDBGGLUESFMETZUWSJKENABYWYDIEXIHGJNMIAKRGHOHOBHSJONWQMMYXIUQAOLHPGBILATGXZTODTVIHDCZHWPNW");

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
    msg.setTimeStamp(0.309778992907);
    msg.setSource(9147U);
    msg.setSourceEntity(182U);
    msg.setDestination(36453U);
    msg.setDestinationEntity(35U);
    msg.command = 91U;
    msg.goal_id.assign("OPQCTJEJPZINZOLFQSMQKDYSOGLGLMDSXJRJSCYIAKHKEVEPLFRZHWYOPBZVIVMBJIFUBUAWPDUHIOHPCXEQYRFIRXNVZWXDCTTDZCIFKUNYPYMVQSJEKKWNNBMMOTQJAUVPFFLKVDHRAOGGDKFAAXTC");
    msg.goal_xml.assign("DCYTOMFNGAOZLQJPLLMHSXGBBRXHBKUAMAKLODWSXTEXOUGGQTBAFXZQHYZIWFJPCUCNLYZJNVSQKZVAMEEWRVMRSRDHKJJYPICMQSLPKNLCVOBCOJQIYEGXULXHNFUIBIDGDHUJJC");

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
    msg.setTimeStamp(0.44162232337);
    msg.setSource(15367U);
    msg.setSourceEntity(159U);
    msg.setDestination(3007U);
    msg.setDestinationEntity(245U);
    msg.op = 210U;
    msg.goal_id.assign("NBSYTCZYYULUXYEGQEESGNKFHVKLUMTLCBSWAWHIYZUUDINGJRMNPVIUCCOOVTZFCITDAWHBJTMDFCHVVLFQPFLEKIAMPZOOQCSAXEJNJPXRBHZOBHQSKALGWZTAHAFKENVMQEWKVMGJNGLRYMNTJGXM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QCMXWGQWXZVVNLWMSDRZDPJNFJKIMHJTMCORABSQWFBYZCGDYSCIAHVVWLULSWXDSJPEHWGLZPEIVIAKNUPJRXQCHBOAMJNQDAKZRTPXNTEVUVKFPKQUCLIFHHUDYWILTAOOMJJPQKHSFKVGGROUJPBPMMXGEAEEFNVFIASZLRUHYDZRTKBYYQDQJITMXTZNQDNUDWFLYGXYZNUIBEGGXC");
    tmp_msg_0.predicate.assign("DJNTVFDYQWTTLMXKZEXAAUOGMBZZXEIMAQSXJUBIXGYMYKFEJJHWXKBDRIILLHVQYMKSDVTINBCAVPNHLKTAHRNGDQQSETPGPKWLOIIQBFKJGMOCZOKPGJJPSPLDAXDHFBVFFBYTNVMRHZTZRZRWAJAALREEXVENBUNCEUOAOBCKRYSCN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NZPOHZTSVLDKDVGJRIYYFWGLBDJOOCMPTPGBPQAAMLPEMSUKWSKQHVYVYULHIXWHXSJURREYTBAMAGZKJXMGCUQMTUNHCVISQRCNMYOFVULZIXNGFLUESERLIGDAWIXISWHTKKEMXFOPIHXYBPIBEJDNJSCKNLQZDCCQPAXWZRBUUWOYSTKNRWHWEXRVONQGAJBRQXFTVOAZOY");
    tmp_tmp_msg_0_0.attr_type = 234U;
    tmp_tmp_msg_0_0.min.assign("HVCRAIFLDXRMYTKYQCQGFSKNBVEUTJELJSGEXYUCJTATPXSTILEQQDFPWOPENYIDGXXRKYLEIVFKBHMTUBGAJFBXTNPFOKNDYTRRXJVLRSGWMYQZUDHOQIAPPCBESGNLCZRXONFNZTFTIQA");
    tmp_tmp_msg_0_0.max.assign("HZNCTSWQWVDWTNTMCVUVBBBWZOMFFOIVZIIIQHWYINYPARUCLJNFPNFSDRRCIXCMFPOQDXIBWSNHKJFZDXTGULPQULFEVHUDEVONJRTGCEHQKMDYQJMSKFYUYHCIDOLOURXWEBLOTBYATSSJTP");
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
    msg.setTimeStamp(0.687441794112);
    msg.setSource(42095U);
    msg.setSourceEntity(192U);
    msg.setDestination(57046U);
    msg.setDestinationEntity(123U);
    msg.op = 186U;
    msg.goal_id.assign("LLKLOPTMBKHBNXHVQPRSXBSHUDYDMZVYLLERYWHGHCJXMTOUQAXLBZJDRVZWHTEVKUAFVFXCSSQZPLQMANINLDNMCLSSJCGMJKVGVIQGJCSKXRPRZWDPDSWGUMIWVYTTEIGCOHZBORSFYQGNAXHIZEZYFFOOVBUGEFGQZNUIO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GHNSYUNNAXSLHZNRYIGGLMURXFCHTAPTXKCPORQPZHVSOAEWPJKVAQVNLBJMYBISGPGRNLZSFBXRVURFYTTXRMCZKQDCIKDLF");
    tmp_msg_0.predicate.assign("KHYTSBYWGKXTMQHXZXIVCDVDFTFWMOZEZZBJUJZIUNKHDKDKAMSHEAIMGNOATDLRIECEBLPUCCZFGRNYTUYQFKYISEIPWNGBHOWCFPQIBG");
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
    msg.setTimeStamp(0.784247594848);
    msg.setSource(1962U);
    msg.setSourceEntity(77U);
    msg.setDestination(37684U);
    msg.setDestinationEntity(9U);
    msg.op = 219U;
    msg.goal_id.assign("MWKUIXPLAOUDBRDCMGFZIRHFCMXEZLCZPNCUQSYBCSPNIEXRBRTLBQQHONOTNZSVVESAAQLYIQM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RCNZKGPSOIHTMNWRXVQCFAYOPOGNVPFNDKBUTSQSISDIFFTEAGVHYZLJJCEKCHZUYBMRQKUDLYEEGOXNMWDKFARKJHQSDIMQRIVRGRPZAWCOMQMQDH");
    tmp_msg_0.predicate.assign("VAXBKJLAQXYIXZKCFBFXVJFZHOELATXQRIDJYFZNNPAAEJIPBCOHB");
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
    msg.setTimeStamp(0.971687361454);
    msg.setSource(13266U);
    msg.setSourceEntity(224U);
    msg.setDestination(25750U);
    msg.setDestinationEntity(241U);
    msg.name.assign("BJPNHUELKYMHUWXBSVBTPPDBEESRNTVGDDXNECVWNVZYFKOYNWFYHMWKPLQTDCIGKFVUMJZOREXSESVUYOFJGKQZAPRUETAPAXULOCVSXLALFQZFLXEMJURQWIEMFIWGZKDARLBGJJMLYJFOJQZBHXNNNOQKSOPIJLATSDCHSQHUMRHPOIGKDWZBPHKRMAIAJVWIPQCCXSMDADEGOCRCMTXUWLDGFTTVAHRTYQGZNBNGSZYIYB");
    msg.attr_type = 31U;
    msg.min.assign("MZRNRRVSEBHYSGOYDKLINMLMTNCXNROTINDWLHJFVOMPUELBVIZZKHHVBZOZCBIDCKRCBSXXRYJXVCVLTLSAHQHSJTPSDJWQZIFAFCUVAUMDFXJHLKQGGZNIHABE");
    msg.max.assign("FQFUJDHXREIIBCJBGHYYSSJBDOHUTFYANOWWVHRLHVSDQBGEXBUVNCKXYARVWNLWOVVHZEZRPSDSIAQAUGMJFYZKRUJQNKEUFAWNNKOOPIFZXYOGQBICJXKSBXKRDTDPULFRBMEGTKVECSLTZFNQICWWQGDVRDUFTWMGQXEBPXTIOYCZSMYOMRDNJWKGVBIYLNUHZGEPMDSOQMPVCJPIFURZHHA");

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
    msg.setTimeStamp(0.112864607481);
    msg.setSource(23462U);
    msg.setSourceEntity(172U);
    msg.setDestination(29882U);
    msg.setDestinationEntity(7U);
    msg.name.assign("CKGQXAZFRDELENXQFLXIGAEUTPINRGBFYDZOXPSVVONQZMQKMSSTDWAUWXLIQRASEDBCWWCLPHYRJADTMMVDPUTMFRNYCNGZBIYTEIVCIJOGSAWQCLEEZNHIMDKTBFOBUJBFMFZNBMTGDHKSLTYPRKNAXYQK");
    msg.attr_type = 67U;
    msg.min.assign("GJOWWRKMZNZEKWYQZNAZWSDMUDVZHYBHTFMUOIXFLIEKQOVYEQRDPAAZIQYJRMGOLORRDUPNISNZFXWEKVRTSJGXSKBCULYJSHW");
    msg.max.assign("OUNSUXKWVJFPZXQKMLDUFJITQVSYKXPRUCLUTYRZAODQEJQIFPLBZVHFLJ");

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
    msg.setTimeStamp(0.602732851086);
    msg.setSource(20504U);
    msg.setSourceEntity(29U);
    msg.setDestination(12391U);
    msg.setDestinationEntity(157U);
    msg.name.assign("PWTZTYLWUOPBYTVGDGHZFPIKIRWUAXMVQTLLWMJCEYPCOMCINMMFDDOHXCIZSXUQNKHONHQRFZOIHNKEFCRCDZPVISJSSWXOCEWXSERVJUIBYYHRLJWTPIRDMTEMXMELXMKFRCGLHPHAFWXESUWJODTVBHBJYN");
    msg.attr_type = 218U;
    msg.min.assign("PUCLUBMYLAJBMOUXAVHRJKBCUIZDNGXTFRTRLREMZOJEXVNSXGWDQKQAWNYGJYZPPNUTXXUKFQNTVIFKVOBCYLQONHJFQDLLECDSQWGHQAOAZIHPQOFEVXBAIGVCHKFISPPSMTPAIFCNHRXHTRVBDWKMFECMVVGMNQSJUCOWRRJZVOOWGEHLSOIKNLURIYNEDIMZGCESDCTBFJYQYZTHIKTDXBPHKEZJYBBDPKYRSMTAYUWGJGZWAWWSUAMEP");
    msg.max.assign("BCTJGVKQMUCSWFSMOLFTPRBIIOUZYXTYBFYCJIWEBSYUFEKYQWXRFLPLRHDWFDXKAZSZAHGNDZCDNHCTUVPOZMKQGLMFEXTIYZOQPAMARYRRSTEXNNRWQXHSMJDXQJGCBRTULSDKXQKWZNNBJXBJZGVKJAPLVVVKUASYAMPMHWODNWTBHUPBKIWOVRGPSOOEI");

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
    msg.setTimeStamp(0.00581465584711);
    msg.setSource(41221U);
    msg.setSourceEntity(102U);
    msg.setDestination(5603U);
    msg.setDestinationEntity(4U);
    msg.timeline.assign("JCWTHDKECGFOZMFVCUBZHDLUKLIEGSQAYVJKQCOMQBXEEDHYEGNYAIPJWBYHGWNUJAQPLWOFPLEUDAQOPQISFBFOAFWZWFBQMMCHYOAXJSZRGLUNCJDDYYTTSZEHECTZXRSFGIIYMHVKSKPRCHKMVR");
    msg.predicate.assign("FLQKELFLIBSGVVTGAUMWNPEQEMPDYKZUXWTOZRRJWSGLEBQCHTKSWIRMXJEBYHJOBZLWTQRROYGSPOTXNCKCWHGSTIYXEGNBULAUBUJGNREKEDCJQFBLJRQCMXIDAMUAYJGZJPSXHNOAXMPLVSODXYMCZMOVDFHTIWZWJCMRGHEFFIYSXFVOQTDZJDHUTCN");

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
    msg.setTimeStamp(0.765181044173);
    msg.setSource(63413U);
    msg.setSourceEntity(18U);
    msg.setDestination(64631U);
    msg.setDestinationEntity(61U);
    msg.timeline.assign("PMEKFIJCUZJCBXFHYGLDLRTNPMHUGBPSHVVXTGPIWXXDADXQVUSGTQIPNELGDOBFAONIZQLWKBXJCAKLVIHYYRMVCOHWUPVMFNCHTEUMPUFMQADYSXJERCKCVPKFPQSDYTRIJLJHOBWECRKXWLKCFGNYOKMTAQSJONIKULYJSDGVWOWQIRUZBJBBZMTKSFTARZZEOLEOONAMTSZQNDVCDQZBZYINZUEYV");
    msg.predicate.assign("AFLRWZIXUCZIYGYGOQORRDTMFIKDYYROPJESHSICRJGQEMBSPAGKBGAPYGNZQLBHRJZKUSPECXXMBRGAJCMDKBOSVNHJFFOEETKFVLHDPBLGSIWKYCEVEXSNMHZWOTFHPIDWIWNNJAKDDKOTMLZJUTRSYPQSQCDDXGYDJCRJAXHQUYCWNVAVUUCMUUFKFXNFXBVQUSZMYQBVFTXHLMMLLTVA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("GTEYVVODLHAIODFQZDBOKHJGBDLEIOSXCOBHHEAHIHNCZSCRTYPQKRUNEYJMNZZHSLRGAYAWLQDCWCNPTVUGAXSJUJWDLICYBCAPUWJRBTZKPSADGRTMBYQKDDGZEIAAKNEJNXPRSBWFOPPWXFOYLQZRNMPPIEXSQKNLVNBHIYUBUJBVQNEWIHZTUODGTVXCGIOUPFQUSZJOKTMTFLVF");
    tmp_msg_0.attr_type = 229U;
    tmp_msg_0.min.assign("DSTRJYTXTDECAUFDU");
    tmp_msg_0.max.assign("XGJHUBENKCCAOTLKVCTGDFYSZXEXYBENVLFIZNPVJIGMQPPDZUUMRXHXRQMNOGLMSADDHZELTKRLJADWFHJRTYVYGASEKCIIQOSFICTIJPIQFOPNWMRALFNUMWEOFUVOPTANOMGIJZCBRLCKROEZFYYNNBTGBJMDHWMUWWZHLAHKWOXBUPXSJRLPSTUBEDAYPGQQSQVSRIAAKTCTDYVI");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.44926266467);
    msg.setSource(26797U);
    msg.setSourceEntity(150U);
    msg.setDestination(4743U);
    msg.setDestinationEntity(219U);
    msg.timeline.assign("HLYHEGSEPGTEZLZIZNEQSETJHCEPAPAXVCVYGLVOIDZWBRLEVQCQYIYSTMSRKCXOUQDUYEORMTAMKDPCLKKDSBWZIXUTXLSHXMPTZAXVNURAJGNYVHPSBFCNIPNWBOMFPLWUQWHGUVCXPKOOFSGRYQNGWONFZYUARFYDEROITRWFGOMSHZDUTIBHFHXHDKVOPQFZNKQBCYMVIDRECWXVGGDKFSBWLAJMXQIJCLA");
    msg.predicate.assign("JNJTJIORQMTKSTMVNWNCSUGPBPEVADKW");

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
    msg.setTimeStamp(0.742691340545);
    msg.setSource(64234U);
    msg.setSourceEntity(8U);
    msg.setDestination(1121U);
    msg.setDestinationEntity(252U);
    msg.reactor.assign("SGVMJENQSVMFFCNRGKWLZZWDCWFMFZQJVKFWP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LYITRIGAPBNEWEZGKSPZLOEIOHBPNUZJAPJYMK");
    tmp_msg_0.predicate.assign("NVNLCJGHOODGZZNMQFQZTCTKTJTFEIWSHJGNROBIQSVEVRWPSOPWHLAKWBMRXXEUEFELNOOAWZBQJIBROKGSYIANCZPRLKPQRVDXIIAKFMDHNTSLKZGLFXAFCDRMXQXZAMFMUVNUXLGXGYUQBLTUNUNYCYWOMSJUMZDAJDTTCGUKIAVMHVBVYVWYHCPXCPDEXEYFYR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QBXFRFTLGLIPGDGAKIBOBZHOJPMWUJLUAREHTTYNMQVPFZJROTIQIVZPJVJWFNJPHBVAWIHXEZU");
    tmp_tmp_msg_0_0.attr_type = 223U;
    tmp_tmp_msg_0_0.min.assign("UBWBSHWHXGEGQVFXKDADKBKYRNBJUIZLMXSXEQDOMDLGPGWWYSZCNLFPWSFTLJIAKUNTRM");
    tmp_tmp_msg_0_0.max.assign("XIROESJQPXFPUVFADOLYOBSWPJHHYIVEEPPCYJQRJFQYEZWBURNUWKYGNOXIXDGYAZRGKXOQVHPSVJPDCDFDUGZCLNMLVHFEMTCLBTKQRUWXKGRKNAWNGGDPUALGTKGAOFMDWIT");
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
    msg.setTimeStamp(0.0264747450927);
    msg.setSource(23495U);
    msg.setSourceEntity(52U);
    msg.setDestination(25423U);
    msg.setDestinationEntity(154U);
    msg.reactor.assign("LORKPOPZUFYRDGEDBLIJRXTUTYVALEYJWIOQXHKZZAXMZVLFHUBLEOSSNDTYWPGHMRVXNSZTOZAVUWTADDQQKCGNMPRNMLXOMUEBAUJPENGUUBIWFKDSYSCBCSPKTCGBFIFPQJAVFWWDHUDZUDTFLSKOHRHWXCFEJIX");

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
    msg.setTimeStamp(0.419990636488);
    msg.setSource(4669U);
    msg.setSourceEntity(170U);
    msg.setDestination(11266U);
    msg.setDestinationEntity(72U);
    msg.reactor.assign("TCCCMGWQYHULXLRANUIBSHHJNUQJYFYMADZAOYOTRGBKFYLOKOUJFEZSQEJAUBTDXKDGKBCCHAKBKNRRWGBGIRXFMZQLNAIEKTMWT");

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
    msg.setTimeStamp(0.885295245559);
    msg.setSource(19741U);
    msg.setSourceEntity(70U);
    msg.setDestination(59624U);
    msg.setDestinationEntity(179U);
    msg.topic.assign("MEYBKAALSOZTFNEGZUHAVATGYRDPXICDDJROQXZTPOGZBFYMBPLDMNQLDOCIDKFGBJMFPTDSCXWQUWOHYLJINHQIEFHADVQPUJSMVYXNMQBPVKPAIOEMMSANNORZRIYZAUJABISCVDQJITUWKOURJUYADILKNECGSFBECUBHEHZZWFCVTHKYVNCTXQ");
    msg.data.assign("JRAVPIWEHYWSCXLABIALCQNWEFDOMLULSJPBRPMGQRJKCQBNIAWLMJIWGNQTKULYVBYCHMSLNFZVETUCOWHNKIHYSFPCEJOQPZJ");

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
    msg.setTimeStamp(0.967560914031);
    msg.setSource(28256U);
    msg.setSourceEntity(33U);
    msg.setDestination(41816U);
    msg.setDestinationEntity(38U);
    msg.topic.assign("RNZPFTUHZPYDYTEWZOBFPWONIFDMTDOHJAOIEXTPXGRMOAKMKHJECGHREGJLLCUJKKXWSIWZWTGXQADKOCFHKPUTEOHIJEJWQZBLHUGYBLMMZRYACTUSVYRR");
    msg.data.assign("KMMNXHTQVQNEPGFECUMAXOOPYIXTYWZLHAZUBRUDCTGTYCNBMLFNOWRIXEGHBWAYPFTVAUZSYSFAUVEJJRRYIJQGDFKOYKHIYVCZLNRFLSRXSKJZQQECNIQJAIMCVWCUDTHPWGFHDDDYGMPWZKJBXLVIUEG");

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
    msg.setTimeStamp(0.590717949733);
    msg.setSource(44450U);
    msg.setSourceEntity(213U);
    msg.setDestination(50442U);
    msg.setDestinationEntity(227U);
    msg.topic.assign("PHFRQTUXOUJDWZPURUVJERDOIFZFKWNSRSFGZYXYQALTIXYOCMZWRFVWQAAIBGVTGNSJKOAYNOCTYVJAVCSHELRLWYZPTRTDXSCOJKKLJCKSDYPYZKIAHMGHMNTVVUCQNZUJQBEXUEXKOHRGKRQIYCBVHBVXLFDWFESCFTNPAXPDUGCUFIRMEGWDBNTQAWOGPELBPMDHKMILXONEVEBLSKSHDZJWGIQAXMPNCJIBSGHBU");
    msg.data.assign("TJGHRKZOVPTBWJQBGGOWBFXFCBBQNSRAFRZPMYXQAMJUQPEIYHKOOTILCGFZCJRWSORATKFACURNPJGAJSDDGFQHOULUVNLYTBVUILXKWPVDWQTKL");

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
    msg.setTimeStamp(0.860920210617);
    msg.setSource(48449U);
    msg.setSourceEntity(130U);
    msg.setDestination(18497U);
    msg.setDestinationEntity(243U);
    msg.frameid = 94U;
    const char tmp_msg_0[] = {-82, 29, 78, -3, 121, 47, -118, 79, -103, -30, -21, -86, -4, -1, -45, 19, 76, 57, -88, -29, 60, 120, -54, -22, -127, 81, 76, -15, 58, 115, -110, -80, 31, 16, 17, 122, -125, 70};
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
    msg.setTimeStamp(0.171484220968);
    msg.setSource(13913U);
    msg.setSourceEntity(231U);
    msg.setDestination(5509U);
    msg.setDestinationEntity(72U);
    msg.frameid = 154U;
    const char tmp_msg_0[] = {9, 92, 18, 78, 19, 124, -107, 117, 35, 111, 27, 119, -20, -43, -75, 55, 11, 3, 94, -120, 47, -33, 72, 57, -49, 61, 100, 95, 116, -104, -56, -99, -106, 5, -62, -68, -92, 40, -25, 70, 122, -64, 91, 65, -28, 59, -97, 6, -72, 112, 90, 55, 101, -1, -16, -43, -88, 86, 33, 84, 76, 56, -9, -118, -58};
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
    msg.setTimeStamp(0.799841975086);
    msg.setSource(42273U);
    msg.setSourceEntity(243U);
    msg.setDestination(11797U);
    msg.setDestinationEntity(134U);
    msg.frameid = 53U;
    const char tmp_msg_0[] = {16, -70, 17, 109, 99, 85, 25, -31, -30, -12, -61, -119, 123, 69, -20, 5, 110, 12, 71, 71, 96, 28, -96, -122, 85, 42, -55, 54, -92, 37, 108, -21, -93, -44, 107, -51, -49, 104, -12, 47, -64, 66, -96, 117, 125, -63, -14, 36, -10, 113, 3, -78, 44, 60, -69, -10, 98, -56, -24, -102, -88, 97, -119, 85, 68, -100, -23, 98, -83, 7, 80, -54, -116, 93, 57, -34, -19, -80, -13, 124, -90, -103, 61, 67, -36, 113, -57, 56, 86, 69, 90, 118, -8, 32, -94, 107, 111, -47, 32, -67, 32, 62, -65, -34, 118, -60, -101, 50, 87, 107, 121, 98, -38, -109, -97, 105, 1, -96, -46, 54, -76, -103, -59, 86, -71, 71, 117, -35, 11, 97, 100, 112, -63, 86, -42, 34, -51, 63, -38, 84, -78, -17, 53, -10, 50, -54, -45, -119, -15, 40, 66, -60, 38, -29, 109, 4, 59, 1, -79, -37, 80, -90, -66, 35, 36, 101, -87, 105, -98, 13, 79, 125, 109, 74, -15, 122, 71, -10};
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
    msg.setTimeStamp(0.361935687157);
    msg.setSource(40938U);
    msg.setSourceEntity(240U);
    msg.setDestination(41108U);
    msg.setDestinationEntity(23U);
    msg.fps = 228U;
    msg.quality = 101U;
    msg.reps = 174U;
    msg.tsize = 214U;

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
    msg.setTimeStamp(0.971546270399);
    msg.setSource(4265U);
    msg.setSourceEntity(83U);
    msg.setDestination(15918U);
    msg.setDestinationEntity(184U);
    msg.fps = 17U;
    msg.quality = 33U;
    msg.reps = 111U;
    msg.tsize = 110U;

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
    msg.setTimeStamp(0.68587988963);
    msg.setSource(39274U);
    msg.setSourceEntity(1U);
    msg.setDestination(48354U);
    msg.setDestinationEntity(22U);
    msg.fps = 184U;
    msg.quality = 187U;
    msg.reps = 45U;
    msg.tsize = 211U;

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
    msg.setTimeStamp(0.415651382224);
    msg.setSource(64538U);
    msg.setSourceEntity(98U);
    msg.setDestination(20871U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.670617719664;
    msg.lon = 0.716282908892;
    msg.depth = 141U;
    msg.speed = 0.39341727679;
    msg.psi = 0.0153380879628;

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
    msg.setTimeStamp(0.652273919878);
    msg.setSource(10052U);
    msg.setSourceEntity(105U);
    msg.setDestination(64157U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.112687234222;
    msg.lon = 0.337667838725;
    msg.depth = 160U;
    msg.speed = 0.54453195926;
    msg.psi = 0.0963848943725;

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
    msg.setTimeStamp(0.908256143611);
    msg.setSource(53267U);
    msg.setSourceEntity(103U);
    msg.setDestination(37293U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.0912835508174;
    msg.lon = 0.381232859502;
    msg.depth = 185U;
    msg.speed = 0.785258791208;
    msg.psi = 0.939278876014;

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
    msg.setTimeStamp(0.292790860478);
    msg.setSource(1256U);
    msg.setSourceEntity(136U);
    msg.setDestination(27892U);
    msg.setDestinationEntity(174U);
    msg.label.assign("WJRSFYNGJOTZDFYRCICNERKKLHWUCJTDMARUNQKGDYHPDRZQXUHQOIBYXCEMIZNWCBEWJIQCXXWHBPSSJJGPZIUALQPAQFYICQDTKSPGAOPTOXNOBPVWJGDHMIEAUFLKXYZXGAMSSDPNLVVNTOLVZJINRMGZUBNQXEXMGZRPVKMYVSMBLCFDOABBJLVTOIYBMRZHNURUTJFTHF");
    msg.lat = 0.429957959124;
    msg.lon = 0.654114143475;
    msg.z = 0.450164856523;
    msg.z_units = 208U;
    msg.cog = 0.940631765133;
    msg.sog = 0.575339447239;

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
    msg.setTimeStamp(0.00802656295847);
    msg.setSource(62009U);
    msg.setSourceEntity(134U);
    msg.setDestination(55902U);
    msg.setDestinationEntity(169U);
    msg.label.assign("SNOKCWJDDQTZTMLYCRIDCFGJYGQHWWZLJISUKOQOEHYNTVMUGCBMJTBVK");
    msg.lat = 0.212124718006;
    msg.lon = 0.244134148204;
    msg.z = 0.131536126592;
    msg.z_units = 36U;
    msg.cog = 0.493004526905;
    msg.sog = 0.0262961150353;

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
    msg.setTimeStamp(0.941355688855);
    msg.setSource(33632U);
    msg.setSourceEntity(160U);
    msg.setDestination(27238U);
    msg.setDestinationEntity(61U);
    msg.label.assign("RWYZOMTXJKEAUCSECYTKGLVDASWVUYOXKUHLIIJMQPDBLFUNBLVHDEWDAGONYKIQVBIYREMTCKRAWCVQEVTJAQCXTGJRQDSSABOPCXUCFWCTOKPPPFCENGJEZQXPWQAHTSBZUSQHORLNJZMKYPBDUJEOBZGQPVLIKJMSZWMGERATBDXRVOKKHNFASBIVYPE");
    msg.lat = 0.0526796601843;
    msg.lon = 0.0857702963523;
    msg.z = 0.963491957728;
    msg.z_units = 237U;
    msg.cog = 0.698827268393;
    msg.sog = 0.348553977776;

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
    msg.setTimeStamp(0.269525947211);
    msg.setSource(33634U);
    msg.setSourceEntity(169U);
    msg.setDestination(57361U);
    msg.setDestinationEntity(8U);
    msg.name.assign("DWGPUBDWYRKDFTBOJVJIXNKTINKAOODQEXVOAGDPVAYOILGLPTGZVFRDATQCSDNUXSAUSPGJUEBJJLESEFQJWRSKCYMPTHYRMLGPCDVLAMVMAYQBNCBFATGOHFAIIFKMOHQXMLCTUVUOWYXTMENRCLZIMEHXFSWZQZYGNLZCYLODUCJBUTJNZBHSYQMKKX");
    msg.value.assign("GJZLDUJABQFVVCYEUPHWXNUUNUBYDHUYTRHMX");

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
    msg.setTimeStamp(0.406844609946);
    msg.setSource(9014U);
    msg.setSourceEntity(132U);
    msg.setDestination(41121U);
    msg.setDestinationEntity(18U);
    msg.name.assign("EWJHFVITQUEWYKJMNNZHFLHGQWOIPPOWCSMNQIUVJCNYGRNKHAETAEWZPISCMYMLMTRJMRUBPCQSXCGFOGINOXMAVJELGWIXLJWSHZHPBBTGLFRRTVZYLVDDLDPFYVBIAWQAUOMUNQJRUIHXIMTZUPJZVZKRWRDWYENGBTJKXQDOFYPLQKKJCVBZRQFSZKBGCEUOONKIAHAOACEFQ");
    msg.value.assign("XKDWQQWWNCDCIHDMVEXBQQHHFRWGCXIMAYJYGNDUYZAYPDUOHRBYGOIFUFIEASDLYNUNEREFJPOHTPRNZCGTJKHSKMFQBZYXBSNYVIGBKUYKUFWJPLJGLJMDGOFAMHEOZWMNANXJOEZTUAHJVBBJKVKRWLZBMAVSKGLEKSSUIQQFXCDFLXVCGQULZHKUBTTCHCLNXIRTQWTPASFNXJQBPREVZLIMMPXCOWLATTORPZSRZIDRMOSPGOCDIEVYWT");

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
    msg.setTimeStamp(0.633474564355);
    msg.setSource(12739U);
    msg.setSourceEntity(66U);
    msg.setDestination(43853U);
    msg.setDestinationEntity(98U);
    msg.name.assign("DXZIRCZTFQYKPOPHVPLTVSRZXFLKWAMUUMTJWBONJOVMZPNEKTLWUNRWRDMRSVSVJFAFSKXOMHLYZGMBUWBGYJNBSMTPLIGGICRGMCECTEQKYAZXVZSPJCQPAZWDFAYIQYDTXEIRFFERNNHQETEAFKJBAHMBBYGDCPXIKOUSOYPBNEVVRDBKLHAFXWOUJDUAZULMWGQHHCXCWXSJUWLDLQQUEDIHLKGGQOITHSINFENZCSYK");
    msg.value.assign("ERAOWIZRMGLHKSDYPRWKWQVWTJCYTXSXYDUPXBNXLSAMADEUSFDCLFUKYQDHEIRNYNPLQKWGGOXNLRKBWVEHSHKBCTOGONAOOTLWDCPUBAVJFECLGYSDGIPYMIMDUEKQZMRNMUZPSQCVKTOIBTHHJAZPMIRBQLEJSFHJUMHAURTNFFDMZVQJVEFFGQATGGXSGQNXZCHVTKSELXPIAWMOEBLPJYF");

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
    msg.setTimeStamp(0.301605900821);
    msg.setSource(35997U);
    msg.setSourceEntity(145U);
    msg.setDestination(56176U);
    msg.setDestinationEntity(234U);
    msg.name.assign("WWRGXOJMVMOKXGVJNJFPMNYHRGQHRIPTOBCURTLZOLCPAHEBKPLDKXLGQQUHVTGMDDXSTSDTXEWQHCTVLRPPTCXOLGKFSNXEVFCQQYHYQAQVERIUAIUMPNPZFKJWJHVIVSJDVCRYKYBNSKIIMLIIWGDHBZUNMZDZTZBSQW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IACCZSCONPQBPGEPC");
    tmp_msg_0.value.assign("NJKFKNLFVBEHWGRBQTOTQITVOOBCPZJBQADIGVVLJFUSJNCWPAUPXQZKCSIXBZIPYYMBZTDSYAWJHEDUAYVUJHXAYSMUVJOPHYTRHRBGXLAELXSRBTUGEKNORGKLGPYXAWXWAAMQEEFCXCGEFT");
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
    msg.setTimeStamp(0.113747878813);
    msg.setSource(12926U);
    msg.setSourceEntity(249U);
    msg.setDestination(23601U);
    msg.setDestinationEntity(29U);
    msg.name.assign("QFHWYKXGDLFCPUDBKHZSIDKPGNOIFIYSSWOEJZAJUJSAGNNCZRERVGAPZPHWOPMWTITANZXICWOLBESTBATTZOJPFJOFVMJYXFRMBVYWDRGFOXUMMGYSCATDUHQAJXDCQOKXAWSDDLLWUTJQLAEMVUOIDIAKWPEMYNQXRUWOMKKBVVUTSVDITEEHVZSLGLBNCGVXCY");

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
    msg.setTimeStamp(0.949470087019);
    msg.setSource(59367U);
    msg.setSourceEntity(50U);
    msg.setDestination(63516U);
    msg.setDestinationEntity(62U);
    msg.name.assign("ZMQVGQBAWLBFXHVXIVWQPIUTJMSZPBJUELMIYDLSITJXNQCWGN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZEZCIPCLYPGWMRSVAZDUXDKDVKPQPYIDWOGHHDTNTAAFCRENLQXQOVLPXJKGZPTMMHQLRWBQKUYMVRFYHCIUZUOZAAVFRTSJFGWUSLPUHYEAMJWEBOVVTQKXNOLNSIBSXFBETDNTGUZBXOORCFGBEYPJPDKZNETLJJRHBWUZCFSXFMFLJQKKXNJYYHGORSUSZMVITMAGHOHDEGMNYVSAJL");
    tmp_msg_0.value.assign("DSOTNYZMIPEQTEOVSCKXNCCQAGQVQVRPNMXVOMASEICWUOMVQMIWPULHKWNHJWETYDZBTLLIRRFONTGEFXKOREWOYNYCQFEPJBAUWZMXGBVATADWSSAHBUXTSITRDEOHHJKFUDIRCNWOAHZDBZPCQZVLDIFRRYPYQEYBUDKQZYXUICKRGPVFSCPNGYUHLPUDMVWATZSXKMSLTGFZLJFEGGJDJLPKB");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.127129810101);
    msg.setSource(24882U);
    msg.setSourceEntity(109U);
    msg.setDestination(52165U);
    msg.setDestinationEntity(9U);
    msg.name.assign("PNREMABBSBJICJZNVMECRHQHENMPDUMCSOVRABQLDHYBSERKGORZMFZQMONWMUAURCIUBZE");
    msg.visibility.assign("DYBOCKUGRVFHAUHCFPXTQVZAPSFHXNJLMXDQBZUVBVKMYTSSCRTQGKFHEEXKLNEDZFOBVKIHGKQZUVGGWWBRMPWSOWERQAHJENOIDAFAZIFCBUTKWITDOGJPLJCZDIZJSSPE");
    msg.scope.assign("RWJQVYMHLVZQNLOBKZLXRLGLTNTJFMFRJQIGJKFCWBIAXCZKVYAEHNACBRMASEDDDGNIGDEQVGUKFOZMPSDVLRBHIZDTSUUMVQPUUIYQIWKOJJYCDMMSWOYRECWQZNYBLHRXZEOXBXSPSECAXKENAQSYBCGGPDHWASLUTPUPGJNIWLUPBWMF");

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
    msg.setTimeStamp(0.718036272008);
    msg.setSource(23881U);
    msg.setSourceEntity(202U);
    msg.setDestination(41735U);
    msg.setDestinationEntity(153U);
    msg.name.assign("RJWHTVZMHNHBEHDOJBTNMOSEVYQKUDJDEKATODKGNMLSWAUNJWNZEMPIWUJFUEPBZVCXCXUYQAOXPNRLNYYAHMFFOOWDQCZVFCRVKZOHTYKGPRWSZPTQYBFJGMFUXVQMIYTKSKEIRCIFDLVZYPFIVWGYXFKZYJJRLHUHRXGLXBAZETWICJIQEWWPMALABOKGNJATPHRXVLIQSFRMBISSAUVQHULDCTODQRSLCEAZSPBQCGUDDSPNCLNGEIK");
    msg.visibility.assign("UYOQXCZRTWILNDQCEGJDVMHIJYIXEQTGHCYVVTKAGWEAPVVKETMOSQSNCCBGUTGDZSQOEKFRMYANDBXUSMQYUVSCLGINXQKPFMVBNRUZHRMZIYWFWHEBBZHWWKAJLPVTTPKRBYDSAJBROIIZNQON");
    msg.scope.assign("MDUBMMMXASIRUCUINIDOEONJQXVBGPIHXOUHSWGUNBWGQQNTWZLMETEEZCLEPHQAKBYLTPVZFRAYJBCHBDYYOLMGPRNFQCTDJJYVOWHDNTLGHRKDMCPQRFNZUCYKJRFCSWFIRLZVWTVJJMFWXXLXTPYOLBGSQUVSFPREFPAJKPKDFUISYYRNJSDMEZTWKJCGMVEKOIWQHGAAHBZZASHGXRPOCXIWUQOKSNX");

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
    msg.setTimeStamp(0.971735779213);
    msg.setSource(9024U);
    msg.setSourceEntity(127U);
    msg.setDestination(44244U);
    msg.setDestinationEntity(104U);
    msg.name.assign("HZYDJQCDUAEIPDGZRCJHOAVUIYLJLYPPPOISZSEBAKZFJKTNGTWCSBBVMVRBWQPFGDOIFECDWGQIRJRUKWLCTATCGXRKJULMXQBEDVWYBPSBTALVRRNEZQOEGFXHONEVUJUMDIBSTLXMCYENGIKHKOZWKNYBFLFJZAWWSKOPYTUNOHXO");
    msg.visibility.assign("YUEGQUFVHXAAV");
    msg.scope.assign("NCITBSIKZLYQVGBIYYUKEWCKRXAMZWNCXQKFLMPVMLSUPTSPUBDSDFISQDDOEJPDZGSGAACGOSNPBMAZHJHXWRKJNCZSCVORESHXMFTVXWCVFATAEYXPRTLTWWQYUOEZIVHIFCGIHLLDAGMLE");

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
    msg.setTimeStamp(0.0541683585306);
    msg.setSource(10521U);
    msg.setSourceEntity(170U);
    msg.setDestination(44991U);
    msg.setDestinationEntity(173U);
    msg.name.assign("JTGCDLNBVGEVXWFOEMYAMFOHJJJLKVHUGZFPHWEZTXRISS");

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
    msg.setTimeStamp(0.791100484041);
    msg.setSource(63707U);
    msg.setSourceEntity(227U);
    msg.setDestination(18173U);
    msg.setDestinationEntity(53U);
    msg.name.assign("HERWIMQCYFETWWFSXZBEJRIQKSRHFELRELXHCWMYVBTOAMBPCPDYZCYCSZUTXGIIMQTRBKGKBKOUTAMJJSATAYRLVZBSVFJAIHINPDLUHZRGCVRHHRJJXCNYNCXMXFDEYARXVUE");

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
    msg.setTimeStamp(0.112846061264);
    msg.setSource(10544U);
    msg.setSourceEntity(237U);
    msg.setDestination(6717U);
    msg.setDestinationEntity(61U);
    msg.name.assign("QSSKPRRQCNCKGVASNGJUEQDPLNZCKWSQXWYZKJBGUVKMUBOXAOJCZCRZMKNHOZQTFWSYLPTKSGUWGZLWYXWCT");

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
    msg.setTimeStamp(0.500928580251);
    msg.setSource(19031U);
    msg.setSourceEntity(70U);
    msg.setDestination(61277U);
    msg.setDestinationEntity(179U);
    msg.name.assign("NHTWDQMLQVWILQLZJDUEIJBFOAXRCXZPKZWNTEKOUSKNUFOVEXIEGSRZOZAOOBPGBIJHCGYFSLDEYRJLXWJNQVWADIRZUEUMUEMQWNDTWYHVJZMBHQYUADHTVIXSCSRLKFCRVULDUKYYG");

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
    msg.setTimeStamp(0.293933155792);
    msg.setSource(10231U);
    msg.setSourceEntity(27U);
    msg.setDestination(32182U);
    msg.setDestinationEntity(104U);
    msg.name.assign("OHAIASGOGJXJLSECLLRNHWXPFPROBWMTJGBYQVTAMK");

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
    msg.setTimeStamp(0.719924544743);
    msg.setSource(56317U);
    msg.setSourceEntity(254U);
    msg.setDestination(51981U);
    msg.setDestinationEntity(130U);
    msg.name.assign("ITHAKCHNCUCARSWQLKRLBCATQOMYPQUTFZNIRHSVQNIWYMZCFQZSPOYQWVXLNUYYZSJPXMGXAASCZJOBTLPMWEHPLKMSDVACJ");

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
    msg.setTimeStamp(0.902472112006);
    msg.setSource(60504U);
    msg.setSourceEntity(85U);
    msg.setDestination(55658U);
    msg.setDestinationEntity(222U);
    msg.timeout = 3705794759U;

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
    msg.setTimeStamp(0.245401912513);
    msg.setSource(6863U);
    msg.setSourceEntity(234U);
    msg.setDestination(32518U);
    msg.setDestinationEntity(243U);
    msg.timeout = 792826696U;

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
    msg.setTimeStamp(0.845755357434);
    msg.setSource(43973U);
    msg.setSourceEntity(6U);
    msg.setDestination(9903U);
    msg.setDestinationEntity(99U);
    msg.timeout = 39063721U;

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
    msg.setTimeStamp(0.150063159779);
    msg.setSource(59379U);
    msg.setSourceEntity(136U);
    msg.setDestination(17199U);
    msg.setDestinationEntity(19U);
    msg.sessid = 1837708036U;

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
    msg.setTimeStamp(0.798073861537);
    msg.setSource(48202U);
    msg.setSourceEntity(100U);
    msg.setDestination(33190U);
    msg.setDestinationEntity(44U);
    msg.sessid = 3545884473U;

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
    msg.setTimeStamp(0.913607100433);
    msg.setSource(23533U);
    msg.setSourceEntity(218U);
    msg.setDestination(10236U);
    msg.setDestinationEntity(226U);
    msg.sessid = 2895473411U;

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
    msg.setTimeStamp(0.430628513705);
    msg.setSource(48516U);
    msg.setSourceEntity(147U);
    msg.setDestination(27732U);
    msg.setDestinationEntity(111U);
    msg.sessid = 2837666292U;
    msg.messages.assign("ZXTLZROIPFVUAMBDWKNLDURORPOIWNGMNUJKSODUSFPWGTVNEPZPRTJYJWUSIBVUXFZGZAHFMVEKGWQSYXQLDHDIOQCKUYBVKBPCLHTARZSJHAKYEJGAMSQCCIPXDZKTNMMBFLEGQICAMNLAXK");

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
    msg.setTimeStamp(0.603157024913);
    msg.setSource(26468U);
    msg.setSourceEntity(74U);
    msg.setDestination(46100U);
    msg.setDestinationEntity(131U);
    msg.sessid = 1680968139U;
    msg.messages.assign("WBJCNOOXRQZYGWOHFAXJNPUWXNIVQJTRWGRUTMYAGFKEXZZHYURTTCHDEISSORVFOMZBOEKXVZKXGLQPULJNDAOKNJIDMSBEGJZIMYSCUIHOGBCVPLFPDHPFJEYUIQYKXFNAEKSSQBBPQPTLCKHLDHZFKWRDPNLIGTFZFHDDCBRYURKELJDBSGMMEXYAVTRAQJUASPX");

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
    msg.setTimeStamp(0.821389774246);
    msg.setSource(65312U);
    msg.setSourceEntity(109U);
    msg.setDestination(28899U);
    msg.setDestinationEntity(60U);
    msg.sessid = 3983370494U;
    msg.messages.assign("HEVUEZJNSLQLYHVDLZCSQCXHGQAVUHUWRJSEWDNRPHLPVKAYVJZLROQMSZZIIINMOFGXCIGJTRGXYQIVKCMNREBVJCDFSNWELTPBBRTJTQSDWIGKSLDNMPQBAJXKCBUOBGNQTPUYGAWPNZBKUAKZTZIDUDARJIMAEZFLKHJOEOPXSYDFTZTAXOYKEUKMOHOWKYGNWCLTUQXTHDJRFNU");

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
    msg.setTimeStamp(0.388962066085);
    msg.setSource(44151U);
    msg.setSourceEntity(74U);
    msg.setDestination(16817U);
    msg.setDestinationEntity(234U);
    msg.sessid = 1165801872U;

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
    msg.setTimeStamp(0.989570781157);
    msg.setSource(17297U);
    msg.setSourceEntity(74U);
    msg.setDestination(45279U);
    msg.setDestinationEntity(194U);
    msg.sessid = 1330763447U;

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
    msg.setTimeStamp(0.773613360004);
    msg.setSource(33876U);
    msg.setSourceEntity(14U);
    msg.setDestination(37163U);
    msg.setDestinationEntity(204U);
    msg.sessid = 2241124901U;

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
    msg.setTimeStamp(0.486238866452);
    msg.setSource(13199U);
    msg.setSourceEntity(155U);
    msg.setDestination(32020U);
    msg.setDestinationEntity(158U);
    msg.sessid = 759058658U;
    msg.status = 27U;

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
    msg.setTimeStamp(0.904089725816);
    msg.setSource(27351U);
    msg.setSourceEntity(162U);
    msg.setDestination(6633U);
    msg.setDestinationEntity(248U);
    msg.sessid = 1379753946U;
    msg.status = 134U;

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
    msg.setTimeStamp(0.899306091933);
    msg.setSource(49144U);
    msg.setSourceEntity(185U);
    msg.setDestination(43857U);
    msg.setDestinationEntity(65U);
    msg.sessid = 3433027420U;
    msg.status = 206U;

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
    msg.setTimeStamp(0.697876676704);
    msg.setSource(11841U);
    msg.setSourceEntity(96U);
    msg.setDestination(24629U);
    msg.setDestinationEntity(206U);
    msg.name.assign("DNVOXBSYQATRLEDBNUDRGSGTKVSCBAJQERJOYNKCCMSCMUKRLRHMTRZBPKGUSAWJWCVPPMYRPNLLXSPAKEMUBSEEQKGGHNFDPICRMDFUIDPTVQZXYMRWJJDVZJGFJTHUXKEGYBXTOEPICIDZCYXLOAGHPUQFDTUCWXZNFMYHINKXEQMQTHZFBOCFYSJTWOBVA");

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
    msg.setTimeStamp(0.799328580232);
    msg.setSource(2163U);
    msg.setSourceEntity(220U);
    msg.setDestination(46411U);
    msg.setDestinationEntity(213U);
    msg.name.assign("LQWWQPBOAIXSVXLAFQZQJZSCUASWJNUQAIGNRCZGCDUDMLWGHZCGPOEGDLIHCMKBTXHSPBSVHQXRUDEJXLUXJVGYNIEMVYRDSJSWIZGOSVRKYNYQDFBQRJTDFIOWKRGCTUPHYJXYMKHUJMSUZEBSTHUANOLDPBWWAORAKNVBOZWMTXHIRDTEREXFJRVJKCTTKIHUYM");

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
    msg.setTimeStamp(0.937464401031);
    msg.setSource(26082U);
    msg.setSourceEntity(225U);
    msg.setDestination(22753U);
    msg.setDestinationEntity(198U);
    msg.name.assign("PWDRXSGJLRUYAASOCTOJKZGVEEMBQJHWMI");

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
    msg.setTimeStamp(0.389291381664);
    msg.setSource(36020U);
    msg.setSourceEntity(29U);
    msg.setDestination(30919U);
    msg.setDestinationEntity(212U);
    msg.name.assign("OHULFSPDIJIBCAPHCFTJZLKMGQLMIBPQZDXY");

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
    msg.setTimeStamp(0.562908068858);
    msg.setSource(7618U);
    msg.setSourceEntity(181U);
    msg.setDestination(9594U);
    msg.setDestinationEntity(117U);
    msg.name.assign("DEHZSGHLFLSTRKAYOJXLTVIVTBFNMUBOVBPRZRHKWDORYQVSCJ");

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
    msg.setTimeStamp(0.842886619349);
    msg.setSource(35757U);
    msg.setSourceEntity(11U);
    msg.setDestination(56221U);
    msg.setDestinationEntity(137U);
    msg.name.assign("VJYIVETOEIBFUMEUKKARTQXHCVDVNTZMYLDDSFOQCMOMTWKILDDAJEEXYAMVQSJPQBRYLAPKEBIHULMUSDZPVELYSUKZKRIQYLQJWIJOASNCSTVQUXBCGFRNUHPLUTFMTBTSWZVZOCIICRZCGZIJMBWPQOGL");

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
    msg.setTimeStamp(0.882060150453);
    msg.setSource(39475U);
    msg.setSourceEntity(115U);
    msg.setDestination(62705U);
    msg.setDestinationEntity(252U);
    msg.type = 243U;
    msg.error.assign("ECZOASJQLFITNIZOFGLHJANXAKYNBNGJFEQRBOVUHGMS");

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
    msg.setTimeStamp(0.196218955887);
    msg.setSource(16752U);
    msg.setSourceEntity(146U);
    msg.setDestination(14804U);
    msg.setDestinationEntity(101U);
    msg.type = 194U;
    msg.error.assign("ISPEGZBGVNUXFNEXKYXKTPBHTVYFCBERRXOFJZOKXVMWVWFNHTHJTFYWAFNQSEKGGPYFMVYAPKESCPCSEHOABIBHRTFHYEJUGUVHUQJI");

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
    msg.setTimeStamp(0.138945009705);
    msg.setSource(18278U);
    msg.setSourceEntity(35U);
    msg.setDestination(45014U);
    msg.setDestinationEntity(100U);
    msg.type = 40U;
    msg.error.assign("KKDUVTTGSFURDGVWVNUWHOHOIABPJOSABXYSKBFOPUTKDGJFEJCLZNKTSNMZZSMUFBXOFLEICMRTLYJVCGMYADWBYGLCAQR");

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
    msg.setTimeStamp(0.197895850131);
    msg.setSource(23523U);
    msg.setSourceEntity(204U);
    msg.setDestination(11505U);
    msg.setDestinationEntity(70U);
    msg.seq = 18594U;
    msg.sys_dst.assign("GFHVNCCTPBGXFGHBRDFKQIILBQZGEWTCNNUKGQRSEZKZVROSPMIWNFYKCWKJTRTGTITAPGLELADRIAKMQSQVZDCYYXLHIAKNKPEENPDFPMMXRJWGQSOZENFGENAUVJXKLBWCRJCVDHKVFBAUUZOOYMQVDZXDEHZYJDXXWMLSUA");
    msg.flags = 90U;
    const char tmp_msg_0[] = {67, 66, 44, 67, 48, 9, -119, -108, -31, -118, -113, -84, 35, 23, -42, -47, -67, -96, -18, 30, 41, 97, 74, -121, -52, 4, -15, -15, 15, 63, 98, -16, -19, -51, 72, 64, 27, -73, -34, 51, -69, -3, 14, -66, -11, -65, 103, -108, 5, 70, -56, 2, 120, -96, 19, -111, -83, 91, 84, 122, -37, -35, -21, -122, 35, 100, -80, -19, 20, 119, 126, 111, 45, 123, 123, -41, -17, 30, -84, 38, -54, -71, 72, -93, 12, -103, -8, 18, 88, -28, -40, 3, 46, -83, -83, 54, 119, 37, 109, 117, -120, 0, -41, -4, 20, -27, -14, 121, -29, -101, 39, -7, -94, -34, 96, -13, 90, 111, 111, -65, -21, -38, 120, 42, 6, 120, 97, 82, -110, -92, -42, 16, -8, 83, -112, -6, -56, -106, 64, -69, 59, 92, -104, -80, 68, 74, -26, 63, -96, -44, -20, 88, -37, 51, 91, 59, -73, -43, 119, 16, -30, -47, 24, 27, 4, 54, -7, -94, 98, 100, -27, 74, -106, 65, -11, -41, 46, -29, 11, -58, 10, -44, -62, 67, -26, 22, -102, -13, 72, 119, 54, 32, 118, 10, 18, 32, -59, 97, 22, 13, 16, 49, 64, -3, -65, -100, 116, -82, 87, -48, 48, -52, 76, 13, 30, -45, 100, 49, -6, 103, -86, -24, -81, 101, 122, 29, 31, 51, 23, 58, -125, 52, 57, -93};
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
    msg.setTimeStamp(0.0106983384544);
    msg.setSource(11968U);
    msg.setSourceEntity(195U);
    msg.setDestination(23183U);
    msg.setDestinationEntity(114U);
    msg.seq = 60628U;
    msg.sys_dst.assign("FOMITCSFQVNOWTVDAGBSDWHCALGWAVLDMCDGSYQAMBEYBOTDEPXAESBPMVASWZHZXIYHJRIMJHJYYJWVHQJSZTLGYGFXYSGZXIMOPOKQLAAFIRETKORJNWLUDBJMJKFLDTANPHKUPCWPEEKQHCIKNTIHVNJWVUZUPQFIVBKEGYUBMFZQYHPPGPUZRKFQBNRZQFSDCXTIOLGCMWOORVXCUUNGLLXXFVINTSBYLZERHQTUZEDBERKDMCNCNUXROJ");
    msg.flags = 115U;
    const char tmp_msg_0[] = {-74, -25, 116, -13, -126, -1, -21, 55, 94, -8, 24, 106, 6, -128, 108, 106, 124, -53, -88, 36, -39, 105, 94, 52, 30, 40, -11, 6, -119, 57, -59, -79, -6, -7, -32, 3, -94, 80, -92, -72, -23, -106, -73, -53, -41, 98, 27, -122, -114, -97, -124, -2, -82, -95, -26, 107, -40, -12, -58, 74, 57, 81, 97, 45, 51, 61, -67, 124, -122, -112, 0, 111, -128, -114, -12, 10, -36, -75, 107, -41, -23, -54, 6, -33, -119, -43, 77, 31, 81, 39, -78, 110, 18, 86, -61, -121, -35, 74, 69, 84, 19, 1, 59, 27, -89, 103, -75, -122, -100, -5, 16, -79, 13, 113, 99, 5, 124, 116, 122, 85, -20, -72, -29, 42, 14, -63, -38, -69, 39, -73, -98, 77, 102, -23, 28, 115, -38, -6, -65, -1, -68, -31, 27, -84, 83, -105, 57, -66, -81, -19, 104, -12, -87, -96, -86, -75, 18, -62, 25, -40, -13, -55, -73, -33, -37, 100, -14, -18, 38, -12, 84, -61, -78, 21, -94, -84, -56};
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
    msg.setTimeStamp(0.463531659282);
    msg.setSource(33187U);
    msg.setSourceEntity(117U);
    msg.setDestination(51603U);
    msg.setDestinationEntity(237U);
    msg.seq = 8892U;
    msg.sys_dst.assign("ADSDZYBPJNMEQVSOSKPUNERXVFXEXUPXIIKXMEGMMYVCQOVWHTQLHKKSFUZVMXJWIBYPEZFJEFRBHPKJBRLLAJQUJRUAHNKNZDVQYAGVRCUJQRFLLATKRTZTDNHAXABFHOQISEPBLAWMUQGMCGPTKLNZHTXXNLCGFIDYDYKGURBJNQIQSAWOYAGZNVCYCHOWKCWVPPGTJZCYLIOLSBW");
    msg.flags = 31U;
    const char tmp_msg_0[] = {-43, 59, -118, -22, 26, -120, 113, 50, 114, -61, -12, -21, 98, 30, 31, 71, -69, 110, -43};
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
    msg.setTimeStamp(0.0497518232703);
    msg.setSource(49866U);
    msg.setSourceEntity(244U);
    msg.setDestination(58787U);
    msg.setDestinationEntity(84U);
    msg.sys_src.assign("AFFTOHONNECGGDOWUWRPTUZLHBOMGGDIZAPXSLCGHOULKMUHEQPLWIJERRLUZQYVIKPZDQCUNILZXYHXKPGBNCGAYX");
    msg.sys_dst.assign("JILTONITQFMUPBLFIZIDQGHAHMRZTXHAPQRSONYI");
    msg.flags = 137U;
    const char tmp_msg_0[] = {-54, -24, 93, -91, -27, 71, 105, -120, -64, -124, -52, 85, 30, -91, -112, 113, -72, 70, -7, -71, -51, -40, 35, -98, 7, -118, -33, 72, -112, -53, -64, 99, -107, 94, 39, 66, 12, 32, 81, -93, -28, 52, -3, 79, 21, -44, 120, -92, -48, -62, -57, 73, -106, 124, -56, -81, -121, -32, -35, -79, 125, 22, 9, -26, 72, 52, 59, 56, -20, 72, 108, 7, 24, 33, -66, -31, 121, -74, -1, -44, 81, 115, 20, -21, -27, -71, -19, -118, -61, 31, -43, 78, 94, -69, -92, -61, -40, -86, 88, 5, -121, 39, 18, -92, 121, 55, 122, 87, -48, 0, -89, 43, 12, 30, -13, -2, 84, 11, -119, 56, -4, -127, -109, -16, 24, -74, -101, 93, 15, 117, -72, 118, 22, 13, 115, 107, 111, -33, -100, 63, -30, -7, 112, -17, 103, 47, 94, 23, -49, -47, 113, 5, 105, -105, 23, -28, 103, 70, 77, -74, 117, 33, -7, -123, -26, 28, -110, 55, -99, -69, -92, 69, -22, 103, -34, 112, 17, 40, -64, 40, 120, -80, -39, 104, -12, 94, 3, -35, 17, 29, -65, -3, -10, -97, 11, 78, 99, -97, 48, -37, -38, -104, 10, -102, -120, -87, -10, -26, -46, 93, -26, 99, 0, 25, 125, 16, 44, -56, 83, 60, -51, -35, -105, -34, -106, 5, -8};
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
    msg.setTimeStamp(0.526255877833);
    msg.setSource(13737U);
    msg.setSourceEntity(20U);
    msg.setDestination(47530U);
    msg.setDestinationEntity(129U);
    msg.sys_src.assign("PILAMWJVSTUUEXPOMSTQNQBOZEKMRMJBKHFBMJXSTMHCBJZRNWEWIQRFOBVZWRNTQHZZYCOWYXUCCUIXHJCXDQRKPAGPROHJEIQYAIRTXRHQLSDAUFILSYVQZGCAHZBYKCBNGNHVLSNQPEXPTJCIVXTDSDOGUJKRMTDFWMXG");
    msg.sys_dst.assign("NOJXVBTRIPOHSECIKQCGIFSFVNXVYPXDZCLSKKRRLKHOROXMJDFQGFPCFYODDPJCONBEZQZEUGZCZWWS");
    msg.flags = 238U;
    const char tmp_msg_0[] = {75, -58, 11, 2, 56, 112, -12, 42, 81, -96, 111, -120, -106, 70, 108, -93, 89, 28, -23, 114, 70, -2};
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
    msg.setTimeStamp(0.412710012548);
    msg.setSource(628U);
    msg.setSourceEntity(89U);
    msg.setDestination(55740U);
    msg.setDestinationEntity(158U);
    msg.sys_src.assign("IOLGAIYFDWMWNEFYCMVNUYDLGLNGNJNJXVTFMGBVMYKHGVKTIUBNFVYTEQWDSJUARPSDUPDRHKWQHRUOEZDELPKKUXIWIOCQSVGUOKGQCWCTWCIUACIARBYPCDCAVPPTLDXAYBFHAHHFLOVZUMRKZHTTGJBQZQNKDABACKTPONEWMLXW");
    msg.sys_dst.assign("QEHUANTDMYFKUJEDOOICGWXJPVMLYPNXUSWCHZRCAGELHRQQRHXRETQGDZBSHNY");
    msg.flags = 160U;
    const char tmp_msg_0[] = {36, 49, -32, -127, -15, 81, 84, 0, 80, -82, -74, -64, 109, 66, 123, -10, -45, -8, 107, 126, 122, 2, -108, -35, 24, -127, -11, -76, 9, -49, 14, 36, 22, -16, -5, -65, -57, -91, 2, -43, 15, 56, 82, 22, 13, 121, 27, 42, 25, -56, 60, -24, 108, -39, -46, -117, -49, -47, -106, -52, -53, 84, -94, 52, -14, 110, 123, 85, -61, -10, 121, 31, 76, -111, -43, -126, 32, -20, -105, -12, 108, -29, -103, -76, 103, -37, -18, 14, 66, 19, 78, -66, -62, -5, -73, 120, -91, -30, -116, 30, -43, 19, 12, -37, 66, -92, -35, 72, -122, 48, 74, -75, 26, -111, -38, -39, -66, -4, 16, -105, 65, -50, 0, 77, 30, -117, 45, -83, 27, 31, 80, 92, 90, 69, -98, 3, -15, 61, -123, 30, -101, -84, 61, -77, 12, -37, 27, -126, -115, -34, -25, 107, 122, 25, 91, -89, 31, -23, -59, 2, 39, -14, 36, 93, 70, 91, -96, -27, 77, 27, -76, 27, -97, 97, 115, 20, -55, 75, -31, -19, 107, 85, -82, -75, -20, -77, -59, 59, -19, -94, 53, 96, -8, -10, 103, -76, -104, -110, 94, -117, -61, 26, -66, 124, -105, -47, 15, -21, 69, -68, -15, 4, -45, 35, -25};
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
    msg.setTimeStamp(0.9334649781);
    msg.setSource(7425U);
    msg.setSourceEntity(187U);
    msg.setDestination(54410U);
    msg.setDestinationEntity(123U);
    msg.seq = 29038U;
    msg.value = 67U;
    msg.error.assign("ZMHQMPNLZTNCUKHHGIAPUKCDZNPRPOKESYRXEZXTHQBJXYKQLMCPQYOBYVAFQDUBFXFFHZCIBUNDVCSWGWZTRYEIBMRAJULXOUVSPBOVHKRIALGOOWZQJLJSYNBCTJUKTPJYNPAJXOMGTVJMNHRITXURSGCVDDBWQSDFRJLRDWBYCKVRETXEHLUVAKHBUGEISOEPIVENQ");

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
    msg.setTimeStamp(0.412978820597);
    msg.setSource(24749U);
    msg.setSourceEntity(17U);
    msg.setDestination(61614U);
    msg.setDestinationEntity(159U);
    msg.seq = 20975U;
    msg.value = 89U;
    msg.error.assign("HFMBEOAQUGROAWUASHSFTWLSLJHVNWMUAKTJVE");

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
    msg.setTimeStamp(0.0486727623682);
    msg.setSource(6004U);
    msg.setSourceEntity(235U);
    msg.setDestination(33378U);
    msg.setDestinationEntity(94U);
    msg.seq = 42365U;
    msg.value = 98U;
    msg.error.assign("ZDPIJOMUGAHZLGALWDPEFPVQZDQCFTXCJKCXXLRZGNWGGGCLMUHURUNDKZBWRHHFLNDWGNZTKJTSJJCYARVEXOLHQPTRSYROSTXBOIVSAQISQQOKOTBHLWLKQJYXIIOEHBOSBVZRMVADMPBAAUNGEPNCCFJYFIMQEYEORZHVTJWFZKMADBAKHNDPFLMBNSIEVWDIDBUGXMKPYUYIRNHLCFXPVRUNCYSWTSBEZFECYE");

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
    msg.setTimeStamp(0.853477736757);
    msg.setSource(45568U);
    msg.setSourceEntity(99U);
    msg.setDestination(1943U);
    msg.setDestinationEntity(170U);
    msg.seq = 16001U;
    msg.sys.assign("ZDOXKKWNGWLHEGQ");
    msg.value = 0.655490150055;

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
    msg.setTimeStamp(0.335863576531);
    msg.setSource(6840U);
    msg.setSourceEntity(42U);
    msg.setDestination(49896U);
    msg.setDestinationEntity(24U);
    msg.seq = 62215U;
    msg.sys.assign("ZGLPNILJKEEGMAGIPLGQBZYTQFOFGWGOPNRCXUFVWQZJRERJCFYBSKBMEZIXOGUSATKHVFYDLSIMUWAKNNYWMIFVMREVULCTVODMQQFLGTGZLSIKTSTKTLIYWQJFBDYHFQXDTWKVQAUUMDXVPJD");
    msg.value = 0.541733388388;

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
    msg.setTimeStamp(0.0251234847456);
    msg.setSource(32074U);
    msg.setSourceEntity(142U);
    msg.setDestination(2684U);
    msg.setDestinationEntity(150U);
    msg.seq = 37087U;
    msg.sys.assign("KWWYNWLVXNRLFCRZFWIAPPCWFVAHUOGVCXDLFHKMKKNCSQDLWLOVLVDJUMGIEFTEDGGQFHABNEIYRQGSBTETOSPNGJHRZJDOKFCMWWGEFVPERVHGPVTIJMULSUZSEXSNANKYCOLPPINDUEMDSSSOCOYTQGUIFXRHHZHBAYRNPAUZYXQRZTZJJIQWKKMOXKZOJU");
    msg.value = 0.334930823413;

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
    msg.setTimeStamp(0.916675725718);
    msg.setSource(43608U);
    msg.setSourceEntity(85U);
    msg.setDestination(29920U);
    msg.setDestinationEntity(129U);
    msg.action = 187U;
    msg.longain = 0.988222012565;
    msg.latgain = 0.067609164752;
    msg.bondthick = 231776571U;
    msg.leadgain = 0.801188106995;
    msg.deconflgain = 0.266771548463;

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
    msg.setTimeStamp(0.711930470077);
    msg.setSource(15725U);
    msg.setSourceEntity(168U);
    msg.setDestination(50081U);
    msg.setDestinationEntity(129U);
    msg.action = 202U;
    msg.longain = 0.383344260298;
    msg.latgain = 0.630844765249;
    msg.bondthick = 4010484501U;
    msg.leadgain = 0.276159636521;
    msg.deconflgain = 0.517980105711;

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
    msg.setTimeStamp(0.306465040377);
    msg.setSource(6190U);
    msg.setSourceEntity(71U);
    msg.setDestination(10940U);
    msg.setDestinationEntity(213U);
    msg.action = 193U;
    msg.longain = 0.171127558657;
    msg.latgain = 0.945414783919;
    msg.bondthick = 3504784116U;
    msg.leadgain = 0.583154864735;
    msg.deconflgain = 0.474992677048;

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
    msg.setTimeStamp(0.0139506609557);
    msg.setSource(11899U);
    msg.setSourceEntity(95U);
    msg.setDestination(9273U);
    msg.setDestinationEntity(205U);
    msg.err_mean = 0.707228698532;
    msg.dist_min_abs = 0.74695314341;
    msg.dist_min_mean = 0.78063661415;

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
    msg.setTimeStamp(0.733837606514);
    msg.setSource(33642U);
    msg.setSourceEntity(61U);
    msg.setDestination(64182U);
    msg.setDestinationEntity(150U);
    msg.err_mean = 0.887971617257;
    msg.dist_min_abs = 0.822736524085;
    msg.dist_min_mean = 0.167171056358;

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
    msg.setTimeStamp(0.588087191635);
    msg.setSource(1767U);
    msg.setSourceEntity(170U);
    msg.setDestination(3945U);
    msg.setDestinationEntity(111U);
    msg.err_mean = 0.125007751317;
    msg.dist_min_abs = 0.475329566887;
    msg.dist_min_mean = 0.898902958054;

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
    msg.setTimeStamp(0.649019564556);
    msg.setSource(10264U);
    msg.setSourceEntity(32U);
    msg.setDestination(9324U);
    msg.setDestinationEntity(113U);
    msg.action = 182U;
    msg.lon_gain = 0.137320132766;
    msg.lat_gain = 0.0914750153092;
    msg.bond_thick = 0.123997049844;
    msg.lead_gain = 0.530380449362;
    msg.deconfl_gain = 0.842127594863;
    msg.accel_switch_gain = 0.703257904573;
    msg.safe_dist = 0.0387808391719;
    msg.deconflict_offset = 0.968328450963;
    msg.accel_safe_margin = 0.941201292536;
    msg.accel_lim_x = 0.446966492542;

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
    msg.setTimeStamp(0.709390109588);
    msg.setSource(33766U);
    msg.setSourceEntity(10U);
    msg.setDestination(4835U);
    msg.setDestinationEntity(4U);
    msg.action = 246U;
    msg.lon_gain = 0.936439638075;
    msg.lat_gain = 0.788605833287;
    msg.bond_thick = 0.931357107019;
    msg.lead_gain = 0.335340151206;
    msg.deconfl_gain = 0.854757230747;
    msg.accel_switch_gain = 0.00760124506986;
    msg.safe_dist = 0.44043146251;
    msg.deconflict_offset = 0.426133743736;
    msg.accel_safe_margin = 0.296088270671;
    msg.accel_lim_x = 0.721466104967;

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
    msg.setTimeStamp(0.897080529016);
    msg.setSource(7616U);
    msg.setSourceEntity(27U);
    msg.setDestination(25873U);
    msg.setDestinationEntity(184U);
    msg.action = 72U;
    msg.lon_gain = 0.382356770301;
    msg.lat_gain = 0.487769073389;
    msg.bond_thick = 0.31858278627;
    msg.lead_gain = 0.925783603167;
    msg.deconfl_gain = 0.947878924208;
    msg.accel_switch_gain = 0.577548625203;
    msg.safe_dist = 0.270683301058;
    msg.deconflict_offset = 0.232993059563;
    msg.accel_safe_margin = 0.598776990788;
    msg.accel_lim_x = 0.366138579601;

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
    msg.setTimeStamp(0.367827920699);
    msg.setSource(33977U);
    msg.setSourceEntity(64U);
    msg.setDestination(36167U);
    msg.setDestinationEntity(106U);
    msg.type = 227U;
    msg.op = 145U;
    msg.err_mean = 0.778815096437;
    msg.dist_min_abs = 0.755029510404;
    msg.dist_min_mean = 0.845545766565;
    msg.roll_rate_mean = 0.213345569093;
    msg.time = 0.935690904989;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 0U;
    tmp_msg_0.lon_gain = 0.671870430362;
    tmp_msg_0.lat_gain = 0.0853038854849;
    tmp_msg_0.bond_thick = 0.945500907832;
    tmp_msg_0.lead_gain = 0.768289234329;
    tmp_msg_0.deconfl_gain = 0.376439056754;
    tmp_msg_0.accel_switch_gain = 0.660940635127;
    tmp_msg_0.safe_dist = 0.469604573556;
    tmp_msg_0.deconflict_offset = 0.81438035167;
    tmp_msg_0.accel_safe_margin = 0.366134805562;
    tmp_msg_0.accel_lim_x = 0.272284752901;
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
    msg.setTimeStamp(0.443467802901);
    msg.setSource(37684U);
    msg.setSourceEntity(246U);
    msg.setDestination(54397U);
    msg.setDestinationEntity(153U);
    msg.type = 189U;
    msg.op = 183U;
    msg.err_mean = 0.0613190848968;
    msg.dist_min_abs = 0.783217375829;
    msg.dist_min_mean = 0.892798804484;
    msg.roll_rate_mean = 0.622089622825;
    msg.time = 0.715575513175;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 162U;
    tmp_msg_0.lon_gain = 0.998828297827;
    tmp_msg_0.lat_gain = 0.652485477481;
    tmp_msg_0.bond_thick = 0.539597440658;
    tmp_msg_0.lead_gain = 0.0281593649564;
    tmp_msg_0.deconfl_gain = 0.981661427839;
    tmp_msg_0.accel_switch_gain = 0.926582331428;
    tmp_msg_0.safe_dist = 0.150494935945;
    tmp_msg_0.deconflict_offset = 0.0780724144187;
    tmp_msg_0.accel_safe_margin = 0.287139726386;
    tmp_msg_0.accel_lim_x = 0.971412699182;
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
    msg.setTimeStamp(0.614328981591);
    msg.setSource(45562U);
    msg.setSourceEntity(90U);
    msg.setDestination(45556U);
    msg.setDestinationEntity(200U);
    msg.type = 74U;
    msg.op = 93U;
    msg.err_mean = 0.154121484197;
    msg.dist_min_abs = 0.753171045861;
    msg.dist_min_mean = 0.210264094555;
    msg.roll_rate_mean = 0.581406836042;
    msg.time = 0.0522214589797;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 150U;
    tmp_msg_0.lon_gain = 0.159587743192;
    tmp_msg_0.lat_gain = 0.929880769797;
    tmp_msg_0.bond_thick = 0.0394684919038;
    tmp_msg_0.lead_gain = 0.976090496624;
    tmp_msg_0.deconfl_gain = 0.202563346227;
    tmp_msg_0.accel_switch_gain = 0.935392111675;
    tmp_msg_0.safe_dist = 0.44442223413;
    tmp_msg_0.deconflict_offset = 0.93380114451;
    tmp_msg_0.accel_safe_margin = 0.329625728434;
    tmp_msg_0.accel_lim_x = 0.387546242565;
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
    msg.setTimeStamp(0.291613945901);
    msg.setSource(54108U);
    msg.setSourceEntity(253U);
    msg.setDestination(57653U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.581470386705;
    msg.lon = 0.943137620347;
    msg.eta = 1610851092U;
    msg.duration = 5948U;

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
    msg.setTimeStamp(0.973603958607);
    msg.setSource(3423U);
    msg.setSourceEntity(203U);
    msg.setDestination(47465U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.788114269748;
    msg.lon = 0.316357991337;
    msg.eta = 1473380044U;
    msg.duration = 13127U;

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
    msg.setTimeStamp(0.848718264065);
    msg.setSource(53173U);
    msg.setSourceEntity(165U);
    msg.setDestination(23243U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.998974590903;
    msg.lon = 0.939950433339;
    msg.eta = 2053425806U;
    msg.duration = 39216U;

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
    msg.setTimeStamp(0.515497982819);
    msg.setSource(11631U);
    msg.setSourceEntity(151U);
    msg.setDestination(17416U);
    msg.setDestinationEntity(20U);
    msg.plan_id = 56308U;

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
    msg.setTimeStamp(0.243455089909);
    msg.setSource(31849U);
    msg.setSourceEntity(123U);
    msg.setDestination(625U);
    msg.setDestinationEntity(103U);
    msg.plan_id = 59761U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.287727114172;
    tmp_msg_0.lon = 0.695354595492;
    tmp_msg_0.eta = 3998330031U;
    tmp_msg_0.duration = 10803U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.245944418409);
    msg.setSource(17740U);
    msg.setSourceEntity(108U);
    msg.setDestination(13649U);
    msg.setDestinationEntity(79U);
    msg.plan_id = 52518U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.365898383325;
    tmp_msg_0.lon = 0.748030633727;
    tmp_msg_0.eta = 1785886595U;
    tmp_msg_0.duration = 31822U;
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
    msg.setTimeStamp(0.395038130347);
    msg.setSource(45206U);
    msg.setSourceEntity(247U);
    msg.setDestination(37742U);
    msg.setDestinationEntity(93U);
    msg.type = 205U;
    msg.command = 156U;
    msg.settings.assign("JVKKYRSOQUDJQDZGDUEYYUTTRWXLQTSHAEOYAZBAWIMPFRWIIXGGXOVNGRDYDJNYUCPSOVUQNWAWZ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 50490U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.53368276998;
    tmp_tmp_msg_0_0.lon = 0.502928782442;
    tmp_tmp_msg_0_0.eta = 3043431182U;
    tmp_tmp_msg_0_0.duration = 9419U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ACHGJNOHXWTQAFZIKOWVQOLBZCNHMNWEXYSPNVBZBIWSIUUBFPDKUHLQDGJQESLWCBCZNYKVFIFMCZTRJMFEYROKXQJQZULGWYHCBQQOFDPAQEPCOTYXNHVPGUMILJMSTTULDXPUTXMDRLGWGJKNHZETLGDRRMKAXV");

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
    msg.setTimeStamp(0.211894085571);
    msg.setSource(26414U);
    msg.setSourceEntity(24U);
    msg.setDestination(44061U);
    msg.setDestinationEntity(187U);
    msg.type = 3U;
    msg.command = 123U;
    msg.settings.assign("AZMQKUKAORFCPBJBWKXULDUWFQOFI");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 60435U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.284758728853;
    tmp_tmp_msg_0_0.lon = 0.221896648506;
    tmp_tmp_msg_0_0.eta = 3294559407U;
    tmp_tmp_msg_0_0.duration = 17124U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YBSOJZYXAXJXZKAVXWFTBJOCNNYVFJEJWIZPKLTETJTAGKRGSDWAQXPVTUPNPIKNCBCVVBBZBCIFIPECGTYJSHSDXFZVURQNAKEIZLKUSKMDIEGFRRLEMCFJTJSFGNWQSUDEXNLHMUPWFNHQMWEMQGZUHKAEFOMHADJGYWUQTOGHCBMRDUHWIQLSZDQIVBROGARV");

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
    msg.setTimeStamp(0.835555906471);
    msg.setSource(37913U);
    msg.setSourceEntity(243U);
    msg.setDestination(64768U);
    msg.setDestinationEntity(134U);
    msg.type = 66U;
    msg.command = 104U;
    msg.settings.assign("CSKLXVGIIQPWZTWUMSVBFTRJPWQHOVEUCRXEHRDVAYBEAFMZEFQFEDAZTVIFLNIXLVRRPCQJGJMHXPFYDZZAZHNDNQAAWSUWGIMGATCTDKKLMYSYFTLZQPZCBEBVDHCYSONKXJKGESJDBPHNUHFPVYVMTGNUOKLNQHLOHUBBTLEQFUKNOIXXCWR");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 11974U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BMASCJYXAEOTWQNLNFSAEOYNDQMKYFPZEZDHUBRIEKFFFZDJLVDNRSVTUUJTLXOEYKKAKVOKJUWVZGXMRSRFVBJGBVKTLICMRIAKKQVPLTGSYEYYEUUCNFNLQOHGSFLSDSWGYIZPQWWQPHKWUXR");

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
    msg.setTimeStamp(0.428570710817);
    msg.setSource(38427U);
    msg.setSourceEntity(201U);
    msg.setDestination(57694U);
    msg.setDestinationEntity(91U);
    msg.state = 250U;
    msg.plan_id = 7821U;
    msg.wpt_id = 60U;
    msg.settings_chk = 1532U;

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
    msg.setTimeStamp(0.0606234531665);
    msg.setSource(24735U);
    msg.setSourceEntity(33U);
    msg.setDestination(40294U);
    msg.setDestinationEntity(156U);
    msg.state = 96U;
    msg.plan_id = 26061U;
    msg.wpt_id = 43U;
    msg.settings_chk = 25063U;

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
    msg.setTimeStamp(0.658173321924);
    msg.setSource(34235U);
    msg.setSourceEntity(43U);
    msg.setDestination(55751U);
    msg.setDestinationEntity(68U);
    msg.state = 75U;
    msg.plan_id = 14169U;
    msg.wpt_id = 111U;
    msg.settings_chk = 17286U;

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
    msg.setTimeStamp(0.00906629866411);
    msg.setSource(17865U);
    msg.setSourceEntity(12U);
    msg.setDestination(46279U);
    msg.setDestinationEntity(154U);
    msg.uid = 78U;
    msg.frag_number = 176U;
    msg.num_frags = 135U;
    const char tmp_msg_0[] = {-17, 104, 49, -116, 12, -85, -31, 2, -127, 119, -14, -19, -105, 81, -74, -94, 16, -109, 30, 54, -34, -13, 120, -91, -40, -10, -125, -1, 2, -122, -69, -76, -61, 39, 109, 6, 77, 56, 87, -74, 104, -58, 3, -36, 117, 82, 74, 26, -87, 96, 111, 14, -93, 23, -28, -80, -31, -123, -98, 29, 66, 56, 118, -6, -104, -4, 18, 41, 5, 12, -43, -47, 99, 95, -98, 49, -84, -25, -49, 111, -113, 38, -19, -12, 65, 28, -83, -78, -74, -55, 17, -85, -104, -13, 103, 118, 85, -110, -38, -14, -53, -118, 26, 51, -126, 18, 55, 18, 2, -37, 120, -119, 67, 89, -93, 31, -91, -79, 42, 48, -34, -18, 9, 95, 37, -16, 96, -69, 10, 54, 30, 40, -16, -95, 119, 26, -116, 93, -105, 38, 21, 93, 67, -102, -3, 11, -115, -87, -79, -94, 112, 95, 61, -127, -83, -39, 27};
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
    msg.setTimeStamp(0.458239292623);
    msg.setSource(56966U);
    msg.setSourceEntity(186U);
    msg.setDestination(59347U);
    msg.setDestinationEntity(38U);
    msg.uid = 119U;
    msg.frag_number = 85U;
    msg.num_frags = 129U;
    const char tmp_msg_0[] = {49, 1, 41, -73, -71, 100, -23, -102, -67, -22, -41, 123, -47, -79, -54, -13, -59, 98, 32, -7, 99, 80, 10, 48, 82, 61, -2, -82, -121, 117, 25, -71, 13, 39, -24, 81, -90, 84, 87, -86, -103, -45, -31, -80, -89, -21, -5, -119, 99, -83, 25, 26, 63, -13, -114, 42, 53, 18, 0, -63, -40, 40, 91, -29, 123, -42, 124, -92, -62, 52, -22, -28, 125, -124, -58, -48, 61, 67, -77, -80, 57, 16, -121, 73, 45, -26, -71, 13, -100, -101, -40};
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
    msg.setTimeStamp(0.265984725215);
    msg.setSource(60129U);
    msg.setSourceEntity(220U);
    msg.setDestination(64678U);
    msg.setDestinationEntity(145U);
    msg.uid = 43U;
    msg.frag_number = 248U;
    msg.num_frags = 148U;
    const char tmp_msg_0[] = {-102, -47, -1, 51, 33, -56, -85, -126, 116, 83, -104, 96, -44, -63, -49, -104, 71, 97, -124, -2, -88, 29, -19, 113, 71, -116, -120, -2, -123, -79, 22, 32, 7, -78, -60, 86, -109, 84, -45, 51, -128, 8, 28, 62, 83, 97, -45, -107, 122, -80, 102, 75, -26, -128, 88, 90, -12, -60, 28, -31, -70, 29, 45, -35, 103, 79, 88, 36, -33, 117, 105, 24, 53, 106, 103, -63, -75, 29, -102, -98, 112, -118, 114, 51, 79, -37, -97, -52, -79, 16, 15, 68, -19, 104, 78, -17, 9, 99, -103, -64, -3, -124, -90, -90, -107, -117, 65, -114, -3, 11, 70, -105, -31, -36, -15, -59, -65, -13, 90, 118, 114, 57, 66, 78, 116, 66, -88, -40, -97, 97, 64, 34, -53, 28, -121, -26, -107, 51, 101, -42, -37, -46, -42, -67, 101, 28, -59, -115, -56, 0, 125, 35, 107, -123, 16, -52, 93, 124, 63, -106, -100, 19, 64, 39, 44, 7, -4, 61, -81, -37, 46, 58, -42, -72, 12, 109, 65, 111, 58, -50, 9, -2, -125, 97, 97, 115, 75, -113, -76, 126, 32, 118, -125, -1};
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
    msg.setTimeStamp(0.826205200486);
    msg.setSource(50301U);
    msg.setSourceEntity(176U);
    msg.setDestination(56436U);
    msg.setDestinationEntity(35U);
    msg.content_type.assign("UJCZVMEYCHKQHYRODUVRJEKJOFWWIBLDIYVPHAQCDNHVSYFXEUMIMLUMFJAZRIGEBTMGUNQCDNLPZHYGKVBVOEONPEGSCBZZPHJYBZFXMHBNGAFCRIMXMQLKGUSHTDAIQRVPPWEWTUJSIXAKEILTSNWDOCSSJQYZWDNCZMAKSFTOZOIJXMNQDQXCCBNTTDLVNFJPVUHXBXVKAG");
    const char tmp_msg_0[] = {-105, -28, -103, -125, -41, -71, 44, -4, 30, 41, -40, -21, -122, 54, -65, 39, -3, 111, -57, 121, 49, -127, -13, 114, 49, 71, 120, 47, -93, 91, 119, 26, -108, -68, -118, 59, -45, 90, 126, -1, 85, 79, -53, -52, -104, -50, -42, -72, 19, -13, 94, -113, 67, 98, 49, -126, -119, -24, 20, -5, -123, 52, 48, -14, 115, -101, 90, 57, -7, 47, -73, -14, 13, -127, 28, 15, 104, 111, -110, -48, -1, 87, 16, -53, 46, -45, -79, -60, 84, -38, -74, 34, 103, 126, -111, -66, 15, -8, 29, -100, 40, -2, -31, -18, 69, -7, 51, -28, 55, -15, -8, 80, -43, 15, 122, -51, -112, 103, 6, 34, -59, 119, 91, -73, 120, -69, 74, -89, 18, -64, -118, -128, 103, 19, -30, -5, -23, 6, 48, -116, -53, 38, 111, -72, -10, 103, -82, -1, 60, 83, -84, 23, 9, -123, 9, 26, 89, -123, 34, -80, -99, 116, -116, -23, -107, 68, -105, -78, -59, -71, -100, -35, -88, -62, -82, -26, -101, -36};
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
    msg.setTimeStamp(0.0565637605081);
    msg.setSource(12956U);
    msg.setSourceEntity(99U);
    msg.setDestination(11060U);
    msg.setDestinationEntity(30U);
    msg.content_type.assign("ZLVHFUQQFBOKIOXRAEYSVADUQKVRHYNFNCEWDNUKJMPYSLJVCFWGGMQUGDKIXFQIEUCSOZBDYSVNOZKULEMJGTNKOTACJHCFCPPFJYFQBTTWAPYTVZKZFNXNJZTPIEXDMBGGB");
    const char tmp_msg_0[] = {47, -111, -79, -33, -100, -116, 123, 40, -77, -4, 75, 35, 69, 21, -121, -3, -43, -2, 116, -98, 112, -110, 14, -21, -45, -117, 109, 91, 41, -97, -108, -85, -65, -121, 10, 26, -71, -19, 52, -63, 85, -6, -95, 111, 26, -96, -75, 67, 45, -100, -47, -62, 63, -25, 24, -35, -114, 55, 15, 49, 32, 102, -3, 69, -6, 75, 73, -63, 48, -6, -60, 78, -39, -124, -88, -62, 17, -35, -126, 58, -26, -93, 27, -80, 11, -66, 42, -98, -2, -23, -50, 100, -72, -110, 69, -108, 53, 85, 66, 72, -59, -112, 69, 3, 56, 125, 59, -72, 22, 62, 98, 38, -16, 81, -48, 38, 108, 104, -64, 48, 49, 5, 99, 53, -98, -101, 25, -111, 72, -37, -33, -128, 110, 6, 49, 33, -46, -72, 23, 74, -28, 60, 118};
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
    msg.setTimeStamp(0.310463825784);
    msg.setSource(61593U);
    msg.setSourceEntity(142U);
    msg.setDestination(35181U);
    msg.setDestinationEntity(56U);
    msg.content_type.assign("UJANIXGVNPTSPGPRSPRBQMLWBHEGYXBPOGHTNLTBNINBCTVDXQDNUEWPLALHMCUVHCFRRGAJGSTFIQLCYRFCUBLUKHIDYWRQKVMCQOEQYODYTNUXSAHZVOGEMPUIKOZWDQNJFZZGAL");
    const char tmp_msg_0[] = {-5, -33, -124, 7, -38, 38, 103, -63, 66, 45, -83, 90, -45, -65, -96, 17, 63, -63, -45, 75, 40, 56, 18, -32, -83, -29, -87, -115, -52, 123, -105, 61, -119, -125, -124, 56, -33, -108, 85, 90, 119, -8, -83, -76, -14, 3, -63, -44, -86, 76, -59, 15, -23, 45, 83, 77, 45, 28, -13, -125, 85, -69, 60, -73, 78, -39, 96, 111, -47, 91, -87, -104, 24, -54, 12, -17, -60, 52, -28, -90, 75, 107, -10, -27, -98, -112, -118, 97, -75, -31, -39, -118, 105, -26, 42, -27, 72, 107, 55, 121};
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
    msg.setTimeStamp(0.723527805048);
    msg.setSource(36703U);
    msg.setSourceEntity(227U);
    msg.setDestination(63876U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.127740854133);
    msg.setSource(9339U);
    msg.setSourceEntity(114U);
    msg.setDestination(12597U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.0737412551281);
    msg.setSource(44786U);
    msg.setSourceEntity(131U);
    msg.setDestination(4135U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.24886633135);
    msg.setSource(26741U);
    msg.setSourceEntity(128U);
    msg.setDestination(30258U);
    msg.setDestinationEntity(79U);
    msg.target = 50985U;
    msg.bearing = 0.759548342926;
    msg.elevation = 0.799017101573;

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
    msg.setTimeStamp(0.594825746894);
    msg.setSource(13250U);
    msg.setSourceEntity(204U);
    msg.setDestination(35438U);
    msg.setDestinationEntity(185U);
    msg.target = 35279U;
    msg.bearing = 0.054544430217;
    msg.elevation = 0.480438617658;

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
    msg.setTimeStamp(0.798042750383);
    msg.setSource(55387U);
    msg.setSourceEntity(92U);
    msg.setDestination(31866U);
    msg.setDestinationEntity(237U);
    msg.target = 5630U;
    msg.bearing = 0.712060930098;
    msg.elevation = 0.468900491937;

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
    msg.setTimeStamp(0.629331382191);
    msg.setSource(44842U);
    msg.setSourceEntity(79U);
    msg.setDestination(28109U);
    msg.setDestinationEntity(92U);
    msg.target = 14247U;
    msg.x = 0.274877575256;
    msg.y = 0.0389671115205;
    msg.z = 0.361131031512;

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
    msg.setTimeStamp(0.933278965726);
    msg.setSource(62504U);
    msg.setSourceEntity(104U);
    msg.setDestination(25685U);
    msg.setDestinationEntity(214U);
    msg.target = 45956U;
    msg.x = 0.599619633495;
    msg.y = 0.228245156393;
    msg.z = 0.673513483474;

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
    msg.setTimeStamp(0.284199185515);
    msg.setSource(51250U);
    msg.setSourceEntity(53U);
    msg.setDestination(58486U);
    msg.setDestinationEntity(33U);
    msg.target = 59174U;
    msg.x = 0.656872390763;
    msg.y = 0.868797330916;
    msg.z = 0.162364126356;

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
    msg.setTimeStamp(0.671543674264);
    msg.setSource(57837U);
    msg.setSourceEntity(107U);
    msg.setDestination(32324U);
    msg.setDestinationEntity(187U);
    msg.target = 49426U;
    msg.lat = 0.677865620984;
    msg.lon = 0.661244878543;
    msg.z_units = 30U;
    msg.z = 0.99775851407;

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
    msg.setTimeStamp(0.209317386123);
    msg.setSource(39205U);
    msg.setSourceEntity(191U);
    msg.setDestination(16738U);
    msg.setDestinationEntity(117U);
    msg.target = 6781U;
    msg.lat = 0.407208499126;
    msg.lon = 0.0445005541613;
    msg.z_units = 76U;
    msg.z = 0.379262900594;

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
    msg.setTimeStamp(0.485015771682);
    msg.setSource(27408U);
    msg.setSourceEntity(139U);
    msg.setDestination(41769U);
    msg.setDestinationEntity(213U);
    msg.target = 57150U;
    msg.lat = 0.53916485753;
    msg.lon = 0.579233294392;
    msg.z_units = 172U;
    msg.z = 0.599714707751;

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
    msg.setTimeStamp(0.0072769123409);
    msg.setSource(49608U);
    msg.setSourceEntity(7U);
    msg.setDestination(20626U);
    msg.setDestinationEntity(49U);
    msg.locale.assign("JERADXSZZKRSGIVHRFQYSUTBZVZVZGRYOJHSTOALYYNKGHRPOSDUVTWJDPFAWGJPSTWCZIDUERQFMLFIGXDVVNKEOSCNMENLZDKIOZXZMHBJAMLSEWFXTNSNKWAIPTFAYHHZJKJVCUBRHLGFXDKYSQLARKMQOEENQEIBWOIGBCTXXCBADXCOVAOKCPQLEUTCUYIPFV");
    const char tmp_msg_0[] = {58, 42, 50, 15, -50, -71, 60, 85, -62, 36, -6, 12, -33, -84, -1, 125, 21, 1, -84, 4, 1, 17, -13, -104, -62, 76, 125, -22, 87, -48, 11, -76, -54, -86, -22, -123, 28, -58, 47, -51, -3, 40, -21, -96, -8, 106, 40, -26, -15, 75, -118, 85, 108, -9, 50, 103, 57, 67, 122, 67, -92, 38, -115, 98, -106, 34, 15, -54, 99, 93, -25, 100, -90, 64, -34, 36, -69, 113, -109, -43, 99, 117, -50, 4, 56, -118, -74, -69, -42, -13, 113, -60, 44, 114, 97, -38, -103, -78, 26, 54, 39, -50, 47, 22, -57, -128, 43, 110, 57, -117, 58, -74, -121, 80, -30, -113, 0, 125, 83, 15, 26, 20, 48, 57, 45, 41, -70, -60, 81, 64, -8, 27, 36, -53, -125, -111, -104, 90, 15, -36, -50, 106, -44, -87, 2, 70, 73, 25, 122, -114, 5, 95, 17, -101, 84, -21, -93, -84, -87, -85, 119, -111, 43, 115, 64, -26, -13, 56, 45, 96, 22, -70, -28, -77, 123, -67, -36, 71, -9, 10, 31, 0, 46, -68, -22, -25, 11, 24, -67, 19, -71, -65, -12, -11, 71, 123, 120, -97, -58, -60, -78, -67, 28, 59, -88, -81, -87, 18, -31, 9, -38, 23, -68, -81, -66, -71, 77, 76, -69, 52, 124, 81, 67, -86, 2, -65, 93, -123, -78, -45, 101, 65, -69, -48, -27, -123, -48, 70, 62, -87, -92, -31, -77, -95, -12, 124, -25, 85};
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
    msg.setTimeStamp(0.0782794680674);
    msg.setSource(33985U);
    msg.setSourceEntity(233U);
    msg.setDestination(49670U);
    msg.setDestinationEntity(191U);
    msg.locale.assign("QRWRQKKACJYVDMWOFQTZPRCAXZJJZSTHZMXYXJVVGIBYVHOSOQHOFSLRURGMWDWJTGFVGNUSODKULDXUMWPYXQLQHHPQABNCDHNOPYLSORSFQLBNZFNAAUIPTAJMYHDBCWULFRKVYFTEMPJLMHUNGHIIABVTPADICEDXCBYNXZZCEINCSMESJWBVNIC");
    const char tmp_msg_0[] = {-55, -39, -122, -22, -104, -117, 113, -26, -6, -114, -45, -23, -69, 99, 104, -34, 54, 25, 83, -32, -35, -30, 36, -119, 53, 21, -67, 44, -45, -124, 15, 95, -8, -35, -30, 103, -58, 32, 27, 114, -85, -55, 101};
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
    msg.setTimeStamp(0.320665437917);
    msg.setSource(62364U);
    msg.setSourceEntity(46U);
    msg.setDestination(64245U);
    msg.setDestinationEntity(2U);
    msg.locale.assign("AMBHTLQKTIPPDFILCOYTNQSOYBYUDQSXPUMAGZSEUVCGCVKZWDQXFHJMMDLGTMABICVLRABEUJOFEIPPGJ");
    const char tmp_msg_0[] = {-28, -128, -110, -40, -86, -39, -40, -39, -39, -93, -83, 67, -98, -108, 66, 65, -63, -98, 39, 83, 109, -78, 46, 53, 28, -9, 65, 86, 110, -95, -31, -4, -6, 60, 126, 29, -36, -27, -105, 109, -55, -83, 9, -102, 101, -15, 106, 89, 65, -91, 63, 83, 87, 52, 6, 1, 16, -92, -11, -74, 69, -102, -86, 78, 19, 56, 57, -118, -68, 105, 113, 12, -12, -93, 106, 25, 70, -33, -34, 48, -38, -32, 19, 86, -11, -89, 94, -53, -5, -110, 95, 35, 33, -108, -86, -15, -115, -83, 12, 51, -27, -34, -86, -100, 62, -128, -27, -53, -18, -69, 52, 29, -32, -90, -123, 8, 101, 52, -60, -3, -20, 23, -60, 101, -38, 104, 64, 41, -113, 30, 56, -123, 84, -34, 26, -30, -33, -82, -80, 9, -70, -18, 111, 58, 37, -3, -104, -119, -22, -38, 87, 114, -95, -95, -112, -92, 116, -58, -63, 89, -102, 38, 111, 76, 37, 97, -81, 96, -11, 125};
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
    msg.setTimeStamp(0.794908393429);
    msg.setSource(44921U);
    msg.setSourceEntity(133U);
    msg.setDestination(22379U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.409557321916);
    msg.setSource(60212U);
    msg.setSourceEntity(149U);
    msg.setDestination(50848U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.461613492311);
    msg.setSource(13065U);
    msg.setSourceEntity(35U);
    msg.setDestination(57438U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.0293564209832);
    msg.setSource(12350U);
    msg.setSourceEntity(209U);
    msg.setDestination(26142U);
    msg.setDestinationEntity(53U);
    msg.camid = 224U;
    msg.x = 58831U;
    msg.y = 33184U;

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
    msg.setTimeStamp(0.506213807506);
    msg.setSource(37395U);
    msg.setSourceEntity(202U);
    msg.setDestination(36850U);
    msg.setDestinationEntity(161U);
    msg.camid = 128U;
    msg.x = 35377U;
    msg.y = 46904U;

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
    msg.setTimeStamp(0.61533677932);
    msg.setSource(32981U);
    msg.setSourceEntity(51U);
    msg.setDestination(57215U);
    msg.setDestinationEntity(84U);
    msg.camid = 201U;
    msg.x = 10950U;
    msg.y = 15760U;

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
    msg.setTimeStamp(0.271577978736);
    msg.setSource(34298U);
    msg.setSourceEntity(214U);
    msg.setDestination(17454U);
    msg.setDestinationEntity(53U);
    msg.camid = 189U;
    msg.x = 12398U;
    msg.y = 59423U;

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
    msg.setTimeStamp(0.8691972759);
    msg.setSource(47531U);
    msg.setSourceEntity(167U);
    msg.setDestination(59823U);
    msg.setDestinationEntity(1U);
    msg.camid = 151U;
    msg.x = 6305U;
    msg.y = 35410U;

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
    msg.setTimeStamp(0.474561565387);
    msg.setSource(26578U);
    msg.setSourceEntity(232U);
    msg.setDestination(16889U);
    msg.setDestinationEntity(191U);
    msg.camid = 69U;
    msg.x = 42427U;
    msg.y = 34858U;

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
    msg.setTimeStamp(0.679596356226);
    msg.setSource(17697U);
    msg.setSourceEntity(74U);
    msg.setDestination(64320U);
    msg.setDestinationEntity(27U);
    msg.tracking = 13U;
    msg.lat = 0.696295786094;
    msg.lon = 0.510161018606;
    msg.x = 0.710039505084;
    msg.y = 0.388001007711;
    msg.z = 0.156798626744;

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
    msg.setTimeStamp(0.579261204107);
    msg.setSource(57679U);
    msg.setSourceEntity(178U);
    msg.setDestination(63142U);
    msg.setDestinationEntity(138U);
    msg.tracking = 92U;
    msg.lat = 0.56136768074;
    msg.lon = 0.818587963632;
    msg.x = 0.109806413576;
    msg.y = 0.439863845141;
    msg.z = 0.844209736405;

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
    msg.setTimeStamp(0.976539904898);
    msg.setSource(29199U);
    msg.setSourceEntity(48U);
    msg.setDestination(44233U);
    msg.setDestinationEntity(105U);
    msg.tracking = 17U;
    msg.lat = 0.0460167080248;
    msg.lon = 0.176405742432;
    msg.x = 0.36403104253;
    msg.y = 0.543054612295;
    msg.z = 0.622371132306;

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
    msg.setTimeStamp(0.380255849154);
    msg.setSource(41142U);
    msg.setSourceEntity(113U);
    msg.setDestination(58971U);
    msg.setDestinationEntity(127U);
    msg.target.assign("LRUDBZSHDWPIHOEPNELYJEIHOZGFULUTSSUXGAYEWBIEDUGPHMWVFQPNSLZHRUQCAUVQCKB");
    msg.lbearing = 0.656750172957;
    msg.lelevation = 0.228229273661;
    msg.bearing = 0.74024107837;
    msg.elevation = 0.63870116979;
    msg.phi = 0.298427003332;
    msg.theta = 0.407433547562;
    msg.psi = 0.293753580332;
    msg.accuracy = 0.992940033028;

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
    msg.setTimeStamp(0.340009480245);
    msg.setSource(63378U);
    msg.setSourceEntity(31U);
    msg.setDestination(60849U);
    msg.setDestinationEntity(12U);
    msg.target.assign("HGZRRYFLJOMBYZSCYVIGPWUPQWGQVRXBYQHLPWGCZHKCCPITNSFQTSNBEAYTD");
    msg.lbearing = 0.999113564506;
    msg.lelevation = 0.694909791072;
    msg.bearing = 0.928190672263;
    msg.elevation = 0.651621214891;
    msg.phi = 0.182525794135;
    msg.theta = 0.235635646237;
    msg.psi = 0.694060019424;
    msg.accuracy = 0.505650810646;

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
    msg.setTimeStamp(0.217614807914);
    msg.setSource(20015U);
    msg.setSourceEntity(230U);
    msg.setDestination(56392U);
    msg.setDestinationEntity(172U);
    msg.target.assign("NNBCRMOXRFFASMVYBIGFSUVJFCQHWNIRFVYUURGVBGLEHCOBNWETXQEAUMBXXEJWYARMDCGLQZWEEPABZJGQSYPBMJJUZPBGZZRLTGQQXHCUCTEWHLJMOLWAZDJTXOXYPVISHTJKKKPSLCOUYRNOHOAKZSIPSCZNQLXASGYOPRLIENZKSUTHKKDFDWIFCPQWDEDQFV");
    msg.lbearing = 0.953980852627;
    msg.lelevation = 0.830347843582;
    msg.bearing = 0.466984951312;
    msg.elevation = 0.696445019907;
    msg.phi = 0.481937179095;
    msg.theta = 0.767562920383;
    msg.psi = 0.996260638021;
    msg.accuracy = 0.355953490375;

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
    msg.setTimeStamp(0.938733554761);
    msg.setSource(33401U);
    msg.setSourceEntity(117U);
    msg.setDestination(45407U);
    msg.setDestinationEntity(210U);
    msg.target.assign("DIFNSNWXUYPVCHLTUHRCVSINYHMFPFMGEMRCHJUXKLMBGLETOZZGHDWWOMKYMDNIWDCVKIPNJMVSLPOTVODXRFXFOCPJRPGQRLTEVPDIAUKLXJTSSUTAIAEZKFZCGAQBPRWMTHGQWBFVBQUVJYOQNLTUIJKOKILWBOVTCGBSNSIDGFRFXQDSCZHYYKDGBOUQIEXEZUYAALANWECSKZJJOHAXBZQYLEXJNMBNAKBRRQEMUWCQZAHYZDWHRTFEXP");
    msg.x = 0.997163159632;
    msg.y = 0.841554016502;
    msg.z = 0.188198086262;
    msg.n = 0.83067428787;
    msg.e = 0.767492274029;
    msg.d = 0.211469573946;
    msg.phi = 0.810430758311;
    msg.theta = 0.658654560604;
    msg.psi = 0.936183741273;
    msg.accuracy = 0.335199727267;

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
    msg.setTimeStamp(0.81121295105);
    msg.setSource(37541U);
    msg.setSourceEntity(120U);
    msg.setDestination(14085U);
    msg.setDestinationEntity(233U);
    msg.target.assign("WGGPAZJDDSTHSFEWPECZUAKXEKYMNJTALUOTVOCIYEFNAGZPRGNGSSBXZBDZQYPHVEUVRHQXLOFHZLMTYNE");
    msg.x = 0.520461694406;
    msg.y = 0.334295372103;
    msg.z = 0.24356248246;
    msg.n = 0.0597461586217;
    msg.e = 0.570950722883;
    msg.d = 0.814398357216;
    msg.phi = 0.448609768445;
    msg.theta = 0.868368290593;
    msg.psi = 0.565682285694;
    msg.accuracy = 0.833173893744;

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
    msg.setTimeStamp(0.545768183997);
    msg.setSource(8941U);
    msg.setSourceEntity(139U);
    msg.setDestination(9699U);
    msg.setDestinationEntity(25U);
    msg.target.assign("ZYSTFFFCUQKQRQHDAWQVNVJKXZWPKCSUYXDAWHCNDHSGBSTEFAZTKENUMDIVNIWRDPHITJJZRUMNSLY");
    msg.x = 0.127607681618;
    msg.y = 0.408459283234;
    msg.z = 0.101461695365;
    msg.n = 0.148695073697;
    msg.e = 0.534066136092;
    msg.d = 0.904571403388;
    msg.phi = 0.764167117026;
    msg.theta = 0.00906935659242;
    msg.psi = 0.570097820071;
    msg.accuracy = 0.451546611283;

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
    msg.setTimeStamp(0.65770685123);
    msg.setSource(4939U);
    msg.setSourceEntity(87U);
    msg.setDestination(37711U);
    msg.setDestinationEntity(52U);
    msg.target.assign("FECMVYGLZBNSKNXJIAOVIVYVDFUNLJDPTHCGLXPVAQBGRAXQVHTP");
    msg.lat = 0.374500268058;
    msg.lon = 0.442084413741;
    msg.z_units = 117U;
    msg.z = 0.00514807558607;
    msg.accuracy = 0.29998178628;

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
    msg.setTimeStamp(0.849010808006);
    msg.setSource(1405U);
    msg.setSourceEntity(79U);
    msg.setDestination(31804U);
    msg.setDestinationEntity(182U);
    msg.target.assign("FSFSQPZOSZGNKNRBWIJPHHKKLJWKVJFPPLQQFVNRDBCTYXCMTLQXTJCLINGYDAEXCOGVYOJFMHVEYYQAJUCEEKLOYNHTWYSWHPINKIUHKAIECBRJLPTONVOZUAHDDEVPVFQGQQWNMBGOYJZIHDEIQCBHIWCILJXRSGUSGRYGNWBSFUXVKKUOATUXMXMRAUEXBHNMUARBFZYVIWBZEOXKWPDTGMWUPDSGMZZCMXDQODRSSFZLERT");
    msg.lat = 0.0635812920704;
    msg.lon = 0.241758158631;
    msg.z_units = 155U;
    msg.z = 0.830713575031;
    msg.accuracy = 0.489661565391;

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
    msg.setTimeStamp(0.74888032124);
    msg.setSource(32460U);
    msg.setSourceEntity(159U);
    msg.setDestination(26618U);
    msg.setDestinationEntity(154U);
    msg.target.assign("NCNIUBWZPIMLLHFTQSXBGZQOVQJSYGXMSJLBCBYWAMDTRRDNTAKUZZJFYJFYMUBAELWFGJOSQUMRPSUFYGUEYWOPPHXETZKEFQXOZDKAHSHBUPOYESONAPKLRLDGKMXVJNICGTRDXEBCAHLWPGUATXEATZFCFHVWZIYPVOLFNHWSCWTKVEKPIIRVXHRRNQ");
    msg.lat = 0.194337426869;
    msg.lon = 0.51754274967;
    msg.z_units = 247U;
    msg.z = 0.070539094631;
    msg.accuracy = 0.324652832757;

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
    msg.setTimeStamp(0.94314935333);
    msg.setSource(9537U);
    msg.setSourceEntity(178U);
    msg.setDestination(8158U);
    msg.setDestinationEntity(104U);
    msg.name.assign("VLFZUQLCTDXJFOVSRGUERTPSOQHKXWZOVFGPEWG");
    msg.lat = 0.159768488204;
    msg.lon = 0.897089199212;
    msg.z = 0.208199550389;
    msg.z_units = 140U;

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
    msg.setTimeStamp(0.890277846586);
    msg.setSource(30422U);
    msg.setSourceEntity(7U);
    msg.setDestination(948U);
    msg.setDestinationEntity(130U);
    msg.name.assign("OJKADWTVCHIAVPCAGMNBLRDIJFWZWAVDDLBITQHFF");
    msg.lat = 0.461549146141;
    msg.lon = 0.915951429324;
    msg.z = 0.596333231913;
    msg.z_units = 3U;

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
    msg.setTimeStamp(0.707859785673);
    msg.setSource(30222U);
    msg.setSourceEntity(146U);
    msg.setDestination(4681U);
    msg.setDestinationEntity(226U);
    msg.name.assign("JTVFSPJEMVWQFIVGKOWRHTTSOWZFAXDWMBNZITXSPNBLRFBJTMEKACPKZNKPDXGUQBGRYFSLAUIZEMQIHIEUMCNYERCDQIUTHFBBRDHBOWMEBJECAJTYWNLAYRVOIJWGLFNMVCPXHXOZGQHPVAXLVUKDPMNQLKHDQORYFDRNGPLQMDZZLZUXKWKXXDGPBSSNCAYUGCUSYYOPWOFQIJDQ");
    msg.lat = 0.882784048891;
    msg.lon = 0.804117256872;
    msg.z = 0.0246473114304;
    msg.z_units = 179U;

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
    msg.setTimeStamp(0.197149644558);
    msg.setSource(43107U);
    msg.setSourceEntity(157U);
    msg.setDestination(42664U);
    msg.setDestinationEntity(53U);
    msg.op = 110U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("FROLPPUFMHGACPSNXWUYKMMOWKEHQOBUZUCQLELFYBSGIDNZETRADRTRZIFFBTPUJUVCLKMKOZJCEQDPWNESWMYDZXKIUHCVXJNZDKVPAIFXRCYFOOCBWHTBZRZSMOTMFNRUQUAXALVLZTTVXAYCDGYJVJYSSKIGBMNUKEFETDENMFHHIDENVARIP");
    tmp_msg_0.lat = 0.933332434902;
    tmp_msg_0.lon = 0.64257236284;
    tmp_msg_0.z = 0.0153983070234;
    tmp_msg_0.z_units = 208U;
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
    msg.setTimeStamp(0.243976601832);
    msg.setSource(9482U);
    msg.setSourceEntity(194U);
    msg.setDestination(36116U);
    msg.setDestinationEntity(210U);
    msg.op = 234U;

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
    msg.setTimeStamp(0.0352823430254);
    msg.setSource(40832U);
    msg.setSourceEntity(210U);
    msg.setDestination(32569U);
    msg.setDestinationEntity(123U);
    msg.op = 138U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("WALLTZTSQIOOUQVRWZZGHBKIBTYZOXWBTIDUKMMEJWMXTPKLLKLIEDDBCYPKBZUTPQCXNERPXJPOQEFDQVJCSPPGAGGZSTQRJIAEVWESVUFMVCXWXOVSCLISYBAHQSGRHCT");
    tmp_msg_0.lat = 0.957300615465;
    tmp_msg_0.lon = 0.369787645259;
    tmp_msg_0.z = 0.0652496266505;
    tmp_msg_0.z_units = 165U;
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
    msg.setTimeStamp(0.185326602764);
    msg.setSource(30192U);
    msg.setSourceEntity(60U);
    msg.setDestination(22417U);
    msg.setDestinationEntity(125U);
    msg.value = 0.688830699647;
    msg.type = 85U;

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
    msg.setTimeStamp(0.435629995232);
    msg.setSource(14255U);
    msg.setSourceEntity(147U);
    msg.setDestination(46222U);
    msg.setDestinationEntity(67U);
    msg.value = 0.27181117019;
    msg.type = 245U;

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
    msg.setTimeStamp(0.681692230373);
    msg.setSource(58451U);
    msg.setSourceEntity(182U);
    msg.setDestination(29332U);
    msg.setDestinationEntity(193U);
    msg.value = 0.810750691872;
    msg.type = 185U;

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
    msg.setTimeStamp(0.905390631717);
    msg.setSource(24174U);
    msg.setSourceEntity(208U);
    msg.setDestination(31933U);
    msg.setDestinationEntity(221U);
    msg.value = 0.639833290727;

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
    msg.setTimeStamp(0.35542790098);
    msg.setSource(55861U);
    msg.setSourceEntity(195U);
    msg.setDestination(34681U);
    msg.setDestinationEntity(180U);
    msg.value = 0.0119829600437;

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
    msg.setTimeStamp(0.991660655583);
    msg.setSource(51849U);
    msg.setSourceEntity(225U);
    msg.setDestination(35378U);
    msg.setDestinationEntity(191U);
    msg.value = 0.647381499331;

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
    msg.setTimeStamp(0.752250540264);
    msg.setSource(47249U);
    msg.setSourceEntity(227U);
    msg.setDestination(39531U);
    msg.setDestinationEntity(68U);
    msg.timestamp_last_service = 0.697186024329;
    msg.time_next_service = 0.681426577999;
    msg.time_motor_next_service = 0.949802841727;
    msg.time_idle_ground = 0.73669654685;
    msg.time_idle_air = 0.624934645021;
    msg.time_idle_water = 0.566503680136;
    msg.time_idle_underwater = 0.529983374355;
    msg.time_idle_unknown = 0.0815293105206;
    msg.time_motor_ground = 0.623035597917;
    msg.time_motor_air = 0.903413867817;
    msg.time_motor_water = 0.49952777336;
    msg.time_motor_underwater = 0.566462078125;
    msg.time_motor_unknown = 0.302974115011;
    msg.rpm_min = -26664;
    msg.rpm_max = -12257;
    msg.depth_max = 0.907827903773;

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
    msg.setTimeStamp(0.617479890836);
    msg.setSource(48919U);
    msg.setSourceEntity(128U);
    msg.setDestination(604U);
    msg.setDestinationEntity(92U);
    msg.timestamp_last_service = 0.737923377333;
    msg.time_next_service = 0.31279724558;
    msg.time_motor_next_service = 0.0162136375549;
    msg.time_idle_ground = 0.574655034435;
    msg.time_idle_air = 0.106442266621;
    msg.time_idle_water = 0.77421807473;
    msg.time_idle_underwater = 0.41793932756;
    msg.time_idle_unknown = 0.710677909406;
    msg.time_motor_ground = 0.132342948131;
    msg.time_motor_air = 0.167903592282;
    msg.time_motor_water = 0.457611271213;
    msg.time_motor_underwater = 0.367761345814;
    msg.time_motor_unknown = 0.492302652432;
    msg.rpm_min = -20244;
    msg.rpm_max = -19040;
    msg.depth_max = 0.424560485629;

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
    msg.setTimeStamp(0.864080699425);
    msg.setSource(11312U);
    msg.setSourceEntity(69U);
    msg.setDestination(61719U);
    msg.setDestinationEntity(103U);
    msg.timestamp_last_service = 0.312348446322;
    msg.time_next_service = 0.873705198513;
    msg.time_motor_next_service = 0.211837550814;
    msg.time_idle_ground = 0.220795148207;
    msg.time_idle_air = 0.155139620125;
    msg.time_idle_water = 0.0478615577276;
    msg.time_idle_underwater = 0.316879747793;
    msg.time_idle_unknown = 0.271801337684;
    msg.time_motor_ground = 0.910813161609;
    msg.time_motor_air = 0.828794877852;
    msg.time_motor_water = 0.768082064063;
    msg.time_motor_underwater = 0.018766755129;
    msg.time_motor_unknown = 0.598221318034;
    msg.rpm_min = 30052;
    msg.rpm_max = 6510;
    msg.depth_max = 0.652666707848;

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
    msg.setTimeStamp(0.224011949191);
    msg.setSource(42733U);
    msg.setSourceEntity(204U);
    msg.setDestination(16288U);
    msg.setDestinationEntity(70U);
    msg.severity = 199U;
    msg.text.assign("NFCBCLYXGWRFJPMBYOWVECAYQCRCKQKNSXWSHDNLWASYOSPSBVXUGZGAYLZGWPDRZGXESVEADDUBXPVMEMAOOLXJHVDKPWJKGKQDUJBEKYFSTIKOYXCRNZRPWTPEQHCIHEBMUKIKMCALSLMLJHQMJIPZKZQURUTXODFFVNNYOBWBPIFVJFGQIBHLHZGITOFLTVPJGTCMDCIFWLEINZAUTSUZHZSQH");

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
    msg.setTimeStamp(0.755489682293);
    msg.setSource(22963U);
    msg.setSourceEntity(236U);
    msg.setDestination(56667U);
    msg.setDestinationEntity(14U);
    msg.severity = 225U;
    msg.text.assign("UURKRHZJJMBOFWXRHAENMMJVNEOGPQFGKKPMZWTHADDOZXLKOWWAHIGQBZTYPPFUGJCIXKYUXYDYNHBXEBJNSQNOOLTEFJIXCNHEXTQGXCAHJCTAQIEFSUYLWMEZXSQYUUWKDHJRWVGXGELOLQOFASRYQVBLWFRMJFIAPSNYIICCRVZSDRIVDVUSKYVVBUZAUFPGBSTNFBDPEILCSJQRZPILNKHDPTVACQTYWBKVZDMSDECMTCM");

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
    msg.setTimeStamp(0.0193175561674);
    msg.setSource(49104U);
    msg.setSourceEntity(168U);
    msg.setDestination(5917U);
    msg.setDestinationEntity(113U);
    msg.severity = 77U;
    msg.text.assign("QZQJJKMUMINIGJKNQHYEXHYVTRVDWVEWKOHRRSETCZKUT");

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
    msg.setTimeStamp(0.368975508726);
    msg.setSource(31912U);
    msg.setSourceEntity(124U);
    msg.setDestination(35114U);
    msg.setDestinationEntity(108U);
    msg.channel = 126;
    msg.value = -1162341946;
    msg.gain = 226U;

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
    msg.setTimeStamp(0.252303529464);
    msg.setSource(37601U);
    msg.setSourceEntity(105U);
    msg.setDestination(18760U);
    msg.setDestinationEntity(232U);
    msg.channel = -29;
    msg.value = 1374942052;
    msg.gain = 250U;

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
    msg.setTimeStamp(0.485311257057);
    msg.setSource(51447U);
    msg.setSourceEntity(129U);
    msg.setDestination(10603U);
    msg.setDestinationEntity(235U);
    msg.channel = 1;
    msg.value = -1602080000;
    msg.gain = 102U;

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
    msg.setTimeStamp(0.39649265615);
    msg.setSource(55766U);
    msg.setSourceEntity(214U);
    msg.setDestination(3905U);
    msg.setDestinationEntity(172U);
    msg.ch01 = 0.145460656017;
    msg.ch02 = 0.102952581468;
    msg.ch03 = 0.851632017746;
    msg.ch04 = 0.13261049306;
    msg.ch05 = 0.70457719793;
    msg.ch06 = 0.368923319416;
    msg.ch07 = 0.597190465263;
    msg.ch08 = 0.816139624121;
    msg.ch09 = 0.64468722557;
    msg.ch10 = 0.437778406807;
    msg.ch11 = 0.626174006907;
    msg.ch12 = 0.22504186317;
    msg.ch13 = 0.315208010162;
    msg.ch14 = 0.703804027796;
    msg.ch15 = 0.265088893532;
    msg.ch16 = 0.641057238308;

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
    msg.setTimeStamp(0.349784383867);
    msg.setSource(5630U);
    msg.setSourceEntity(112U);
    msg.setDestination(64640U);
    msg.setDestinationEntity(135U);
    msg.ch01 = 0.324928891253;
    msg.ch02 = 0.613238646819;
    msg.ch03 = 0.476218835652;
    msg.ch04 = 0.408625179309;
    msg.ch05 = 0.557258654372;
    msg.ch06 = 0.322791861193;
    msg.ch07 = 0.16335457505;
    msg.ch08 = 0.368276803489;
    msg.ch09 = 0.162541510113;
    msg.ch10 = 0.308938165303;
    msg.ch11 = 0.973658853455;
    msg.ch12 = 0.0135004605269;
    msg.ch13 = 0.633488125087;
    msg.ch14 = 0.786637779214;
    msg.ch15 = 0.878607931094;
    msg.ch16 = 0.0583505088883;

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
    msg.setTimeStamp(0.585373620893);
    msg.setSource(63720U);
    msg.setSourceEntity(171U);
    msg.setDestination(16957U);
    msg.setDestinationEntity(31U);
    msg.ch01 = 0.0430833391032;
    msg.ch02 = 0.473276032671;
    msg.ch03 = 0.120156807011;
    msg.ch04 = 0.646390909808;
    msg.ch05 = 0.497514722907;
    msg.ch06 = 0.669269510404;
    msg.ch07 = 0.863175651207;
    msg.ch08 = 0.804401395455;
    msg.ch09 = 0.721327494193;
    msg.ch10 = 0.638722857195;
    msg.ch11 = 0.800274096408;
    msg.ch12 = 0.186024647605;
    msg.ch13 = 0.593844536514;
    msg.ch14 = 0.300929649933;
    msg.ch15 = 0.121323794004;
    msg.ch16 = 0.775537507545;

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
    msg.setTimeStamp(0.614930615592);
    msg.setSource(4263U);
    msg.setSourceEntity(59U);
    msg.setDestination(18079U);
    msg.setDestinationEntity(100U);
    msg.time = 0.685140716161;
    msg.ang = 0.194052651449;

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
    msg.setTimeStamp(0.95724483966);
    msg.setSource(20898U);
    msg.setSourceEntity(215U);
    msg.setDestination(50190U);
    msg.setDestinationEntity(71U);
    msg.time = 0.956865418036;
    msg.ang = 0.424320118703;

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
    msg.setTimeStamp(0.945616057213);
    msg.setSource(55575U);
    msg.setSourceEntity(178U);
    msg.setDestination(27008U);
    msg.setDestinationEntity(99U);
    msg.time = 0.436826488449;
    msg.ang = 0.159389245022;

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
    msg.setTimeStamp(0.106683132461);
    msg.setSource(64854U);
    msg.setSourceEntity(144U);
    msg.setDestination(43186U);
    msg.setDestinationEntity(191U);
    msg.value = 0.908097435578;

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
    msg.setTimeStamp(0.479508757536);
    msg.setSource(51203U);
    msg.setSourceEntity(188U);
    msg.setDestination(60645U);
    msg.setDestinationEntity(179U);
    msg.value = 0.668661133697;

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
    msg.setTimeStamp(0.406033973079);
    msg.setSource(27037U);
    msg.setSourceEntity(189U);
    msg.setDestination(50305U);
    msg.setDestinationEntity(86U);
    msg.value = 0.554332250686;

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
    msg.setTimeStamp(0.231183312328);
    msg.setSource(38476U);
    msg.setSourceEntity(251U);
    msg.setDestination(44255U);
    msg.setDestinationEntity(185U);
    msg.value = 0.7475185556;

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
    msg.setTimeStamp(0.756909165752);
    msg.setSource(46506U);
    msg.setSourceEntity(114U);
    msg.setDestination(59168U);
    msg.setDestinationEntity(145U);
    msg.value = 0.403709793199;

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
    msg.setTimeStamp(0.234951123076);
    msg.setSource(1330U);
    msg.setSourceEntity(212U);
    msg.setDestination(14847U);
    msg.setDestinationEntity(32U);
    msg.value = 0.993073329473;

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
    msg.setTimeStamp(0.130531203604);
    msg.setSource(50165U);
    msg.setSourceEntity(184U);
    msg.setDestination(47051U);
    msg.setDestinationEntity(53U);
    msg.value = 0.166893875521;

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
    msg.setTimeStamp(0.943511146875);
    msg.setSource(16440U);
    msg.setSourceEntity(104U);
    msg.setDestination(35136U);
    msg.setDestinationEntity(123U);
    msg.value = 0.995841160608;

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
    msg.setTimeStamp(0.415938513091);
    msg.setSource(3900U);
    msg.setSourceEntity(80U);
    msg.setDestination(14940U);
    msg.setDestinationEntity(237U);
    msg.value = 0.432431539975;

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
    msg.setTimeStamp(0.778202568817);
    msg.setSource(19593U);
    msg.setSourceEntity(122U);
    msg.setDestination(41128U);
    msg.setDestinationEntity(59U);
    msg.l2 = -38;
    msg.l3 = 20;
    msg.iridium = -81;
    msg.modem = 61;
    msg.pumps = -62;
    msg.vhf = 5;

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
    msg.setTimeStamp(0.757159167406);
    msg.setSource(18559U);
    msg.setSourceEntity(165U);
    msg.setDestination(49330U);
    msg.setDestinationEntity(32U);
    msg.l2 = -52;
    msg.l3 = -111;
    msg.iridium = 19;
    msg.modem = 122;
    msg.pumps = 7;
    msg.vhf = 80;

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
    msg.setTimeStamp(0.15062363279);
    msg.setSource(65285U);
    msg.setSourceEntity(38U);
    msg.setDestination(22909U);
    msg.setDestinationEntity(240U);
    msg.l2 = 119;
    msg.l3 = -41;
    msg.iridium = -31;
    msg.modem = -25;
    msg.pumps = 24;
    msg.vhf = 41;

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
    msg.setTimeStamp(0.232384076342);
    msg.setSource(19071U);
    msg.setSourceEntity(145U);
    msg.setDestination(26227U);
    msg.setDestinationEntity(146U);
    msg.angle = 0.326543848668;
    msg.reference.assign("AUYBEXAXXRPUXBOGCTYDPGYPCTLTFVMLPVJROIJNRUKFSQPUYLBZJNQEZJWKIKCOXHESVHHMODOPSVNSIZQAEDVJWKYUBDDAGFAVHDEIWCSJQSNQCLQGUFPVCSETTBHPCTLGVKYMOFMWYWRFWAMNSOJRWEMOYFZZLDIUQHWXTKBHMOIKVDCSUGBLFRFETTKHIMDHJIIBAXZLEAPKSUNHRRRGCXAZULGZBZDZ");
    msg.speed = 0.181579616315;

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
    msg.setTimeStamp(0.603484474104);
    msg.setSource(58553U);
    msg.setSourceEntity(247U);
    msg.setDestination(43926U);
    msg.setDestinationEntity(100U);
    msg.angle = 0.652742099778;
    msg.reference.assign("GOAMEJCQZMOVZBLTVLUTUSTFRQTANABEEHIWIECBYSCIOJPLNLTKAUWXXKDZZWWXKUDLWDTCXUUJONEAAGAYVRYSOQWWKZYHEPZKTXIGJCKMSHYDUBOTPVYSQJSGULBHWPMMXFJRJQVHRGHVENUQRXVXXSFICCRMKQFFGPEPOPQMHYBXRPGAED");
    msg.speed = 0.938994754698;

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
    msg.setTimeStamp(0.987933484326);
    msg.setSource(51271U);
    msg.setSourceEntity(229U);
    msg.setDestination(39248U);
    msg.setDestinationEntity(252U);
    msg.angle = 0.120801296915;
    msg.reference.assign("BCMMAXVNAAGLELONDQOBJTPJNHWBLVVIYPCKFKNMYICOTZPLFJBAUICZWWXYEOTVKUMESNFNDEOZKQALUEGVPLPFUMIRHUEDDHLSBSZFENDJCXBOVTHCQAQVXHRFQSKMRYNEOKSXPWGZQWVMZIROIQQITFLIEXQGZFHSCXJYRBBJTDYJSUSWPBZYRGGGYTLGHXCKHDAVMIBWNG");
    msg.speed = 0.254855773078;

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
    msg.setTimeStamp(0.520369038833);
    msg.setSource(25856U);
    msg.setSourceEntity(43U);
    msg.setDestination(40880U);
    msg.setDestinationEntity(16U);
    msg.angle = 0.729673040311;
    msg.direction.assign("YCEOAVYCPTEMTCTHGEWHSQLGLLZZDGWPLNUWIBXGDRHHJHWRYHMPBOKFBFQBDDJGIXSATJNDPOKBZQUIJXFSBRLZTKYNAHYPCTIRCDSTGJEKGOLAVNDEKGTCRQNVXQALUARXFGKTGEWEZRNXMSJWLVIUUINVMBPZJJXOCNWBFAAAKBOEQYUZI");
    msg.speed = 0.365107275388;

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
    msg.setTimeStamp(0.68790580614);
    msg.setSource(8221U);
    msg.setSourceEntity(40U);
    msg.setDestination(11817U);
    msg.setDestinationEntity(111U);
    msg.angle = 0.182341137976;
    msg.direction.assign("LBQBFDJUBLUSVFWJDRVVPWUFQNOGGQMIPSJLEHYTIKCUKQJYHTGYEIEWDAYZPWSQRRMTTBOGPJPKPHZRQRYZBQTXDZHFBVWTBZCRVLGPVYUKXOTXINCNETACOKGTZKONWNLMAPKVYMGUCZF");
    msg.speed = 0.728793012962;

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
    msg.setTimeStamp(0.0157495020688);
    msg.setSource(56623U);
    msg.setSourceEntity(243U);
    msg.setDestination(20568U);
    msg.setDestinationEntity(71U);
    msg.angle = 0.731073255971;
    msg.direction.assign("WRNRBHHPDCGBKIZIQCFOYGRNXDPWKORMQHJYEJCESTQPQCGBDLTUOZMTFVWEONJYXZOQXOQXVIBKZEMXFSENWYVCEXATKVOXGDIVRHNFEHLHDBBXABISQPILPKTFQGQFGPJYWDBDMSVZBARAPSJAUEKYPURNDJWHVTSUAFGMZGKIACLWAJJ");
    msg.speed = 0.213186356524;

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
    msg.setTimeStamp(0.345587805739);
    msg.setSource(9017U);
    msg.setSourceEntity(30U);
    msg.setDestination(33467U);
    msg.setDestinationEntity(199U);
    msg.x = 0.275589817125;
    msg.y = 0.212160325013;
    msg.z1 = 0.31841418708;
    msg.z2 = 0.84297399937;

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
    msg.setTimeStamp(0.321820523458);
    msg.setSource(22199U);
    msg.setSourceEntity(125U);
    msg.setDestination(38884U);
    msg.setDestinationEntity(63U);
    msg.x = 0.168617239691;
    msg.y = 0.518601857111;
    msg.z1 = 0.411798154268;
    msg.z2 = 0.251147821529;

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
    msg.setTimeStamp(0.599359109272);
    msg.setSource(28786U);
    msg.setSourceEntity(26U);
    msg.setDestination(62823U);
    msg.setDestinationEntity(48U);
    msg.x = 0.860686929437;
    msg.y = 0.825741620448;
    msg.z1 = 0.264900887652;
    msg.z2 = 0.737598730532;

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
    IMC::CollisionAvoidance msg;
    msg.setTimeStamp(0.878020118605);
    msg.setSource(50308U);
    msg.setSourceEntity(187U);
    msg.setDestination(64365U);
    msg.setDestinationEntity(76U);
    msg.mmsi = 0.573302079191;
    msg.lat = 0.885193589451;
    msg.lon = 0.152531540475;
    msg.x = 0.530895359341;
    msg.y = 0.673980115484;
    msg.speed = 0.542970550839;
    msg.course = 0.847781005712;
    msg.dist = 0.679313377198;
    msg.length = 0.416830720102;
    msg.width = 0.762572423724;
    msg.o_vect = 0.673233730862;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CollisionAvoidance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CollisionAvoidance msg;
    msg.setTimeStamp(0.850174843692);
    msg.setSource(30559U);
    msg.setSourceEntity(20U);
    msg.setDestination(4813U);
    msg.setDestinationEntity(11U);
    msg.mmsi = 0.229227354066;
    msg.lat = 0.62530345509;
    msg.lon = 0.48308473369;
    msg.x = 0.565242659963;
    msg.y = 0.557329571098;
    msg.speed = 0.324844631509;
    msg.course = 0.771422400074;
    msg.dist = 0.777979474432;
    msg.length = 0.13737070355;
    msg.width = 0.257584615635;
    msg.o_vect = 0.929197283227;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CollisionAvoidance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CollisionAvoidance msg;
    msg.setTimeStamp(0.177641462564);
    msg.setSource(56330U);
    msg.setSourceEntity(52U);
    msg.setDestination(43453U);
    msg.setDestinationEntity(115U);
    msg.mmsi = 0.128432038597;
    msg.lat = 0.112156523997;
    msg.lon = 0.1140689499;
    msg.x = 0.186701677363;
    msg.y = 0.291272024992;
    msg.speed = 0.708844004143;
    msg.course = 0.745337848307;
    msg.dist = 0.0872629696482;
    msg.length = 0.294011362152;
    msg.width = 0.364437873273;
    msg.o_vect = 0.871286098629;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CollisionAvoidance #2", msg == *msg_d);
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
    msg.setTimeStamp(0.732121582271);
    msg.setSource(55264U);
    msg.setSourceEntity(192U);
    msg.setDestination(32854U);
    msg.setDestinationEntity(224U);
    msg.beam1 = 0.642917072984;
    msg.beam2 = 0.947911930027;
    msg.beam3 = 0.801136952977;
    msg.beam4 = 0.375394883342;

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
    msg.setTimeStamp(0.151722176672);
    msg.setSource(1779U);
    msg.setSourceEntity(33U);
    msg.setDestination(29132U);
    msg.setDestinationEntity(88U);
    msg.beam1 = 0.288080376013;
    msg.beam2 = 0.0454012938198;
    msg.beam3 = 0.627544035162;
    msg.beam4 = 0.931544630678;

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
    msg.setTimeStamp(0.535204883267);
    msg.setSource(57786U);
    msg.setSourceEntity(111U);
    msg.setDestination(27519U);
    msg.setDestinationEntity(99U);
    msg.beam1 = 0.440277905268;
    msg.beam2 = 0.485756558728;
    msg.beam3 = 0.942202215773;
    msg.beam4 = 0.994281700444;

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
    msg.setTimeStamp(0.845601355442);
    msg.setSource(27615U);
    msg.setSourceEntity(12U);
    msg.setDestination(19995U);
    msg.setDestinationEntity(243U);
    msg.beam1 = 212U;
    msg.beam2 = 17U;
    msg.beam3 = 147U;
    msg.beam4 = 239U;

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
    msg.setTimeStamp(0.316693641595);
    msg.setSource(23674U);
    msg.setSourceEntity(109U);
    msg.setDestination(43415U);
    msg.setDestinationEntity(130U);
    msg.beam1 = 173U;
    msg.beam2 = 188U;
    msg.beam3 = 160U;
    msg.beam4 = 25U;

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
    msg.setTimeStamp(0.181117686265);
    msg.setSource(14145U);
    msg.setSourceEntity(21U);
    msg.setDestination(62447U);
    msg.setDestinationEntity(35U);
    msg.beam1 = 221U;
    msg.beam2 = 122U;
    msg.beam3 = 49U;
    msg.beam4 = 128U;

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
    msg.setTimeStamp(0.716339833157);
    msg.setSource(35521U);
    msg.setSourceEntity(224U);
    msg.setDestination(53635U);
    msg.setDestinationEntity(20U);
    msg.cellposition = 0.498508283973;
    msg.x = 0.488019909294;
    msg.y = 0.53681570668;
    msg.z1 = 0.567336954142;
    msg.z2 = 0.698311514158;
    msg.amp0 = 0.334584477682;
    msg.amp1 = 0.211732995217;
    msg.amp2 = 0.134272061997;
    msg.amp3 = 0.467401471104;
    msg.cor0 = 206U;
    msg.cor1 = 180U;
    msg.cor2 = 141U;
    msg.cor3 = 75U;

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
    msg.setTimeStamp(0.250586387906);
    msg.setSource(5098U);
    msg.setSourceEntity(201U);
    msg.setDestination(13302U);
    msg.setDestinationEntity(115U);
    msg.cellposition = 0.781479710534;
    msg.x = 0.279256358757;
    msg.y = 0.853641227961;
    msg.z1 = 0.300586837963;
    msg.z2 = 0.168979618238;
    msg.amp0 = 0.531484860665;
    msg.amp1 = 0.929156006298;
    msg.amp2 = 0.808782654035;
    msg.amp3 = 0.533564804717;
    msg.cor0 = 117U;
    msg.cor1 = 130U;
    msg.cor2 = 184U;
    msg.cor3 = 102U;

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
    msg.setTimeStamp(0.307065598351);
    msg.setSource(35937U);
    msg.setSourceEntity(220U);
    msg.setDestination(33702U);
    msg.setDestinationEntity(114U);
    msg.cellposition = 0.172685416808;
    msg.x = 0.588182990992;
    msg.y = 0.494611191711;
    msg.z1 = 0.972261476138;
    msg.z2 = 0.238085080829;
    msg.amp0 = 0.90392341291;
    msg.amp1 = 0.93796074775;
    msg.amp2 = 0.217277860076;
    msg.amp3 = 0.0381256609217;
    msg.cor0 = 176U;
    msg.cor1 = 58U;
    msg.cor2 = 35U;
    msg.cor3 = 218U;

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
    msg.setTimeStamp(0.806570704319);
    msg.setSource(10534U);
    msg.setSourceEntity(156U);
    msg.setDestination(12029U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.775923122797);
    msg.setSource(42387U);
    msg.setSourceEntity(168U);
    msg.setDestination(10167U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.0379262474059);
    msg.setSource(26649U);
    msg.setSourceEntity(59U);
    msg.setDestination(11625U);
    msg.setDestinationEntity(198U);

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

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
// IMC XML MD5: 14884693e4e0aba1e21d150de3a768be                            *
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
    msg.setTimeStamp(0.380275090244);
    msg.setSource(55482U);
    msg.setSourceEntity(159U);
    msg.setDestination(33405U);
    msg.setDestinationEntity(5U);
    msg.state = 78U;
    msg.flags = 128U;
    msg.description.assign("IHZWVVXVBXXSOHRQOIOYB");

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
    msg.setTimeStamp(0.701757644);
    msg.setSource(584U);
    msg.setSourceEntity(16U);
    msg.setDestination(43550U);
    msg.setDestinationEntity(63U);
    msg.state = 222U;
    msg.flags = 237U;
    msg.description.assign("PHBMKRVVMLWTFVZHAZWSVWFGGJUPDWGOFXCPDEFABSHUKOUHBQEZYUBNPTBCZWJCYTKXFEDUYDYNGWIOJLBHMDZDMETHSKGPWLTJVKUTNFUPXPSZDIKAVIIHHFQXM");

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
    msg.setTimeStamp(0.775490033955);
    msg.setSource(56047U);
    msg.setSourceEntity(39U);
    msg.setDestination(6116U);
    msg.setDestinationEntity(177U);
    msg.state = 196U;
    msg.flags = 73U;
    msg.description.assign("DMNJADTFGKKNFJIRGVBYIUAYYVPWHUYHZJZIJOBJGEDKOPPNZXESXCTBVGXSKIAITPZQCZSFLKWYBWYZTBLPJOXCWLTMHQCMWIHDHVRMSY");

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
    msg.setTimeStamp(0.497900326984);
    msg.setSource(37122U);
    msg.setSourceEntity(156U);
    msg.setDestination(57871U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.444866285834);
    msg.setSource(15346U);
    msg.setSourceEntity(42U);
    msg.setDestination(24417U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.548057664993);
    msg.setSource(33864U);
    msg.setSourceEntity(178U);
    msg.setDestination(30986U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.0634315976458);
    msg.setSource(8638U);
    msg.setSourceEntity(162U);
    msg.setDestination(29089U);
    msg.setDestinationEntity(113U);
    msg.id = 219U;
    msg.label.assign("VNPFHISRFYLIAGNVGHEQDLZMQEWZBXDMQHUAUCOYPKFDPRWZLLPZVYSTCSLTFSSTKPJRQWHFSOSCMAOFQRIAOHNLRKBDRRXHTBQGICSCUMPYHMLNAOZORXCKJHYDQTUCYQRUMKPXDNTY");
    msg.component.assign("BSMUGFQNOLIDHJWMHFZQDIQXEZXVEUCZNOGGFAQEJVSOMBBXJNDPXUQXPQGXOSSKNKHUAKPHEZKWIHZRYSVBEBRBLEIYRKTTLALWWJSVVZPYYOGMUPCGYAOOCGLSJCXITRADHQGOINMWJPTBAZHXMEFTVWLRTRYWMLVJRFIWT");
    msg.act_time = 64489U;
    msg.deact_time = 15594U;

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
    msg.setTimeStamp(0.704495336537);
    msg.setSource(50806U);
    msg.setSourceEntity(75U);
    msg.setDestination(49326U);
    msg.setDestinationEntity(224U);
    msg.id = 174U;
    msg.label.assign("STYXOWJPZBGQPHTJEIOASDRHRKMPWUUQDLNAKTQIRZIEIZWSNCCTGBPXMMGVFUHZXTUHVVLVSCGMAWKZQKTZBFNDQWLCPVAGFKJWKELKAHNMHXRBSGUASLLJGVQSUFQKJWFPXYIENFPMQCDDOTRJJIXHUGXOUEVDHSYJCSCEMWEEBBLXNAZILBLIOOYFYHTWPVNCBEUFAWNYMRRDTZ");
    msg.component.assign("ITLHRAODUIKBKPVLDCBPNGFIYQISXHLYBIHAEVDACHOGMSOSARJSOPNWQGEVTRXYAEWTKYCJWFFDZRPTXMCAKXNBTQCCLJVKXTVDYMMCQXKNJSZJLXWQLMYHNYGFWTACBLAVFWTOFFUTRQFUIZJVBEMMAYPQDXOEOOGUWVBHYHGHXMHQNNGKKUIIFNLRDLZMXVATVOCEUWNROSRSBLZJHPSZNJDIPUQZSPSPJGBFYEUJPWCGZQ");
    msg.act_time = 42185U;
    msg.deact_time = 42124U;

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
    msg.setTimeStamp(0.60266070698);
    msg.setSource(24536U);
    msg.setSourceEntity(252U);
    msg.setDestination(54272U);
    msg.setDestinationEntity(99U);
    msg.id = 203U;
    msg.label.assign("YOSFBNHDHYDNZJVKKTBEPKXMCZQCITVGOWUELLRORAXDAKZDDMAWZUCJKTPEDUPPOXUHTYZSIXGVOTADXIFYGAQFYHAVJXTQIIBYGLCAVHMJZUCGZOUKOKSRAFJDCUSMRWURCGHBXJBXRCRQVLHQXWSNZOLINMNFWQDIEAPVGFIFFTENKOSMBSIBRLRZNQQHMMYHETKDUPEJVWLHBAXQTVGKNQEWZPJSPFESWBVWSYU");
    msg.component.assign("GYJINECFYHMJGDWZIAVLLTUV");
    msg.act_time = 9464U;
    msg.deact_time = 18441U;

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
    msg.setTimeStamp(0.98520066471);
    msg.setSource(10030U);
    msg.setSourceEntity(178U);
    msg.setDestination(23639U);
    msg.setDestinationEntity(178U);
    msg.id = 108U;

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
    msg.setTimeStamp(0.92115376764);
    msg.setSource(63441U);
    msg.setSourceEntity(230U);
    msg.setDestination(60349U);
    msg.setDestinationEntity(218U);
    msg.id = 123U;

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
    msg.setTimeStamp(0.752804459357);
    msg.setSource(44134U);
    msg.setSourceEntity(241U);
    msg.setDestination(52447U);
    msg.setDestinationEntity(51U);
    msg.id = 36U;

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
    msg.setTimeStamp(0.0892727779048);
    msg.setSource(90U);
    msg.setSourceEntity(131U);
    msg.setDestination(31735U);
    msg.setDestinationEntity(92U);
    msg.op = 120U;
    msg.list.assign("FYUPUHWVETIZTLXKAEEWZUMTAPTKJGAASLXKGDCZYOYRHMLDEKFIWMNSRKGTJCBNUIQSENIIJVNERYDJFMDXZLBAUOIVOHMVQXDZISCKFYYQGVJEPDARXUXUKGBVVHPAWVNNAPVCHPHWPNBYFBXSWCN");

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
    msg.setTimeStamp(0.0654009765007);
    msg.setSource(15911U);
    msg.setSourceEntity(72U);
    msg.setDestination(6328U);
    msg.setDestinationEntity(82U);
    msg.op = 14U;
    msg.list.assign("DQFOXORNQWWZAKSLMFTSAJSJRJFYRUXSVXXGHYKXGWCERPUELKLUWTERPKNNJDQUCTCUBDRNOBHPKRWKIQPVRNYMONMTCTIBXECVTOFEEGFRBOGZHSCKVYXMKIEHUNZHBQPLCJVAIP");

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
    msg.setTimeStamp(0.0305016899481);
    msg.setSource(64452U);
    msg.setSourceEntity(21U);
    msg.setDestination(54453U);
    msg.setDestinationEntity(230U);
    msg.op = 198U;
    msg.list.assign("PJUXNUEDNVVHMKFZLQOFSQMQLDHYSCAIJLXFTDBGPWTNFVOQATPFZHZNGLNYPBLJDOFMWQJRGDRKBPFVIJECXUXNHKZKCMZSCRTRLPDOTORONSJAMBSPEGYYGRZRRPSBTLGWHHSAQXYVZVUGVMCQCBIGTHUAUYPCKLNWWXLQEBUMY");

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
    msg.setTimeStamp(0.952303858185);
    msg.setSource(21416U);
    msg.setSourceEntity(132U);
    msg.setDestination(13090U);
    msg.setDestinationEntity(163U);
    msg.value = 60U;

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
    msg.setTimeStamp(0.855484687738);
    msg.setSource(7504U);
    msg.setSourceEntity(131U);
    msg.setDestination(35160U);
    msg.setDestinationEntity(123U);
    msg.value = 134U;

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
    msg.setTimeStamp(0.754106898228);
    msg.setSource(8837U);
    msg.setSourceEntity(89U);
    msg.setDestination(49958U);
    msg.setDestinationEntity(14U);
    msg.value = 58U;

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
    msg.setTimeStamp(0.627251517996);
    msg.setSource(44146U);
    msg.setSourceEntity(243U);
    msg.setDestination(10833U);
    msg.setDestinationEntity(94U);
    msg.consumer.assign("HBACOIMPBOYSKEGFJUMVXDTXHFBAVQNFTISQLKQMGKVXHWAALURFYYYKPCRRCOLNGMOOSYZTTMOHMVNZQGSNCGUETTQDJYAYQDLSAZIAPXRDJDBUDFBRYIEVOIJGIXPJLIFNPCELQVPCKVXZEYSFZZTNWTBEHXVWKOIGJJUSWDBAZURUIOVPNNXODHKBHSDWCZJRWVWGMQHAFDECEKLZQLSCBBJKECRGUMNAXPHLQWRPGNIFLJ");
    msg.message_id = 48542U;

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
    msg.setTimeStamp(0.373805395142);
    msg.setSource(23697U);
    msg.setSourceEntity(27U);
    msg.setDestination(19050U);
    msg.setDestinationEntity(134U);
    msg.consumer.assign("CJDJCMPSUHPZISGBIULIDMSBYTJEDUJGVKWSZGYDEEPKBEZNNMRGJHGQVVNKXDTOAFFKLLORWQZMLYXDGGWWMORCDAXLZXVZKSJTEWASXAXRAJWHOKFBZTWAIXLPFTOTMLOYQXZEOJMKEGISBWOVQCFKOBGQKANLINZTFDHTHHCHDPUNECTYPUUOIHEQRWQUVARFNJ");
    msg.message_id = 62544U;

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
    msg.setTimeStamp(0.424201796261);
    msg.setSource(28209U);
    msg.setSourceEntity(120U);
    msg.setDestination(19405U);
    msg.setDestinationEntity(72U);
    msg.consumer.assign("MHQDURGMPTFUBJSTWDHXEXSIBZNZKMDBFVBIDMPXKFQDLNAABTYPKBUIAVFTXPHJSNEGQFFYJOHMJTPHZPVKBUJJRILVXWDIKIRYFSUKWCXVLIEZMLTYPUXZSADXJQEGGGGNXVYWRBLSFWQSCQMSEVONCCOHOOOAZVQRANTRRKFLRIOSCQRJKEMEWLXHWUJ");
    msg.message_id = 17894U;

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
    msg.setTimeStamp(0.230711538005);
    msg.setSource(17421U);
    msg.setSourceEntity(246U);
    msg.setDestination(61068U);
    msg.setDestinationEntity(80U);
    msg.type = 87U;

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
    msg.setTimeStamp(0.10820525597);
    msg.setSource(8298U);
    msg.setSourceEntity(217U);
    msg.setDestination(495U);
    msg.setDestinationEntity(26U);
    msg.type = 43U;

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
    msg.setTimeStamp(0.794194907404);
    msg.setSource(17159U);
    msg.setSourceEntity(118U);
    msg.setDestination(48930U);
    msg.setDestinationEntity(101U);
    msg.type = 38U;

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
    msg.setTimeStamp(0.544044809681);
    msg.setSource(22493U);
    msg.setSourceEntity(93U);
    msg.setDestination(52739U);
    msg.setDestinationEntity(45U);
    msg.op = 178U;

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
    msg.setTimeStamp(0.0785190370271);
    msg.setSource(64914U);
    msg.setSourceEntity(34U);
    msg.setDestination(23854U);
    msg.setDestinationEntity(38U);
    msg.op = 189U;

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
    msg.setTimeStamp(0.113867939447);
    msg.setSource(5475U);
    msg.setSourceEntity(125U);
    msg.setDestination(44507U);
    msg.setDestinationEntity(220U);
    msg.op = 66U;

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
    msg.setTimeStamp(0.95632578428);
    msg.setSource(37318U);
    msg.setSourceEntity(182U);
    msg.setDestination(1441U);
    msg.setDestinationEntity(131U);
    msg.total_steps = 222U;
    msg.step_number = 133U;
    msg.step.assign("HXMSBASUJHLZNXWAMFARXNPWDACDECIEBHIAPEVSKPBNMYTJUCWOWZBRELGUTTGBTKFZRLANNFBXZQHSWTNWHTZCPYHVWRDIDPUZCJGVOHDZSBRIUNQIHOKPQCEGJTEHDJGMQNLBVVKLCSSFUXKYOMNVQZOOGPFIMVZIIQSMDJAYKRYSBDXXNGJAURUAVMWOYIYOFALTDEXUQVMRUJKTF");
    msg.flags = 14U;

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
    msg.setTimeStamp(0.340023976103);
    msg.setSource(52864U);
    msg.setSourceEntity(189U);
    msg.setDestination(26470U);
    msg.setDestinationEntity(164U);
    msg.total_steps = 193U;
    msg.step_number = 228U;
    msg.step.assign("SEHAIBDGOENDIIXGOBYCWHYZMVXLZWAVOFVBCVNCZWLGTETNGKLFIODQCTQRBCJEHJUOIKMTVOHFNFZUPEPSVODRQAAAZYERNPSMSLWYQZMYJRWZGHJBJUUWLRJKSGYMZTPBIUAHVPFXOMIUJUPCTSRGRUZQRECNKQYUWXNWBRWVAFFPXVHTMILIMDFGSZKTLPMSBQPYKSQDDOJHRTJHAFBKYKDDXNMQEEXPCLAAXJ");
    msg.flags = 173U;

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
    msg.setTimeStamp(0.189309094319);
    msg.setSource(54666U);
    msg.setSourceEntity(172U);
    msg.setDestination(50269U);
    msg.setDestinationEntity(14U);
    msg.total_steps = 172U;
    msg.step_number = 16U;
    msg.step.assign("ETKVNXIXKXBHCIKZJDVGXOHXVCOMTWSQEBPBOTMKCLSZDHJEYDKEZJJSDRZXANQYCACHJJSDTGUUFSXRIWUDVAQGTURHVWMYWDCAFYBMFFLVBBOWZENTSUCFTVLWQFIJQPETIIUKFOUZAAHKYUDOGFALLCNWXBBIFPIIRNR");
    msg.flags = 18U;

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
    msg.setTimeStamp(0.142600633936);
    msg.setSource(45647U);
    msg.setSourceEntity(106U);
    msg.setDestination(44908U);
    msg.setDestinationEntity(222U);
    msg.state = 57U;
    msg.error.assign("GSQQEVQVXNMCCVMRLKKVSESLLASWKPI");

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
    msg.setTimeStamp(0.533509095908);
    msg.setSource(9210U);
    msg.setSourceEntity(90U);
    msg.setDestination(50909U);
    msg.setDestinationEntity(105U);
    msg.state = 205U;
    msg.error.assign("NBLSCILDRKYHPOYZQKWKLDXFODSJEATWPNILIAEXTUIDOJJHZLTKRYPZRDTKMVMFKMZSCUUQWEWALNCSEKLECNRNJGOJGICIWFCTPYYIWDBLFEQSYWXGCRMAUHVUBJHYXBQQHFYQFHDEXJVTTQVQTNDPMHQGUNWVIVRBUGNZ");

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
    msg.setTimeStamp(0.0864215585487);
    msg.setSource(24172U);
    msg.setSourceEntity(95U);
    msg.setDestination(25524U);
    msg.setDestinationEntity(249U);
    msg.state = 16U;
    msg.error.assign("UAALLPAOOLQIDOTZWVCHEVISBZFYOZWJUJOCTBQJDKMLOHFWRKIOBSIKXOMNGEBGYUGGUHENHRYXDOZZCUDKFPLCZPQLUYHURJABYNHCRBRFJGQKACSSFQGTACDXMRMDPEVYZWIJNYGHSVRIENTQXTWASMGPETLHVJZXWUJAMPKXPZTTMMQJWYIBUMKSHBEFYLCTOYDAXRRKVLUIHXPCWNFZSWGVBLECPAENSVI");

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
    msg.setTimeStamp(0.81914209271);
    msg.setSource(29448U);
    msg.setSourceEntity(95U);
    msg.setDestination(31256U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.325208297617);
    msg.setSource(23727U);
    msg.setSourceEntity(78U);
    msg.setDestination(63317U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.775845429129);
    msg.setSource(57119U);
    msg.setSourceEntity(130U);
    msg.setDestination(60176U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.641922258334);
    msg.setSource(2641U);
    msg.setSourceEntity(185U);
    msg.setDestination(25434U);
    msg.setDestinationEntity(37U);
    msg.op = 32U;
    msg.speed_min = 0.106012958435;
    msg.speed_max = 0.0104354306899;
    msg.long_accel = 0.252971116062;
    msg.alt_max_msl = 0.929314659086;
    msg.dive_fraction_max = 0.886260640936;
    msg.climb_fraction_max = 0.493919320703;
    msg.bank_max = 0.5622551947;
    msg.p_max = 0.201383719561;
    msg.pitch_min = 0.257710103295;
    msg.pitch_max = 0.0350980041161;
    msg.q_max = 0.737678927999;
    msg.g_min = 0.123865337235;
    msg.g_max = 0.704821052029;
    msg.g_lat_max = 0.445638614462;
    msg.rpm_min = 0.559145272847;
    msg.rpm_max = 0.139533936456;
    msg.rpm_rate_max = 0.337583184687;

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
    msg.setTimeStamp(0.565371262438);
    msg.setSource(9128U);
    msg.setSourceEntity(180U);
    msg.setDestination(59647U);
    msg.setDestinationEntity(57U);
    msg.op = 159U;
    msg.speed_min = 0.40345073009;
    msg.speed_max = 0.32902144444;
    msg.long_accel = 0.403744165126;
    msg.alt_max_msl = 0.762842162895;
    msg.dive_fraction_max = 0.00638617211365;
    msg.climb_fraction_max = 0.393828217986;
    msg.bank_max = 0.609672308569;
    msg.p_max = 0.705694051719;
    msg.pitch_min = 0.11105004587;
    msg.pitch_max = 0.285394162641;
    msg.q_max = 0.981199718445;
    msg.g_min = 0.171842854573;
    msg.g_max = 0.575915045859;
    msg.g_lat_max = 0.54771659802;
    msg.rpm_min = 0.569104628482;
    msg.rpm_max = 0.0507144495698;
    msg.rpm_rate_max = 0.80138960691;

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
    msg.setTimeStamp(0.446309619199);
    msg.setSource(41943U);
    msg.setSourceEntity(2U);
    msg.setDestination(61323U);
    msg.setDestinationEntity(222U);
    msg.op = 140U;
    msg.speed_min = 0.906373731541;
    msg.speed_max = 0.264502915585;
    msg.long_accel = 0.813289579138;
    msg.alt_max_msl = 0.330550161178;
    msg.dive_fraction_max = 0.220052112443;
    msg.climb_fraction_max = 0.907578455373;
    msg.bank_max = 0.436844740976;
    msg.p_max = 0.720569287742;
    msg.pitch_min = 0.207896751194;
    msg.pitch_max = 0.50063938886;
    msg.q_max = 0.118063364313;
    msg.g_min = 0.0206879745819;
    msg.g_max = 0.539164709618;
    msg.g_lat_max = 0.795669234096;
    msg.rpm_min = 0.841779428999;
    msg.rpm_max = 0.00885829384038;
    msg.rpm_rate_max = 0.0570583483298;

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
    msg.setTimeStamp(0.649626524223);
    msg.setSource(15834U);
    msg.setSourceEntity(92U);
    msg.setDestination(50869U);
    msg.setDestinationEntity(195U);
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.940777862455;
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
    msg.setTimeStamp(0.107949034579);
    msg.setSource(43206U);
    msg.setSourceEntity(233U);
    msg.setDestination(63146U);
    msg.setDestinationEntity(252U);
    IMC::EstimatedFreq tmp_msg_0;
    tmp_msg_0.value = 0.415686536038;
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
    msg.setTimeStamp(0.739866716927);
    msg.setSource(57067U);
    msg.setSourceEntity(202U);
    msg.setDestination(54962U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.873998507177);
    msg.setSource(56508U);
    msg.setSourceEntity(210U);
    msg.setDestination(12332U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.8042132218;
    msg.lon = 0.828771130949;
    msg.height = 0.436844944819;
    msg.x = 0.687462038526;
    msg.y = 0.828448093412;
    msg.z = 0.661782193977;
    msg.phi = 0.0245826426709;
    msg.theta = 0.568997799899;
    msg.psi = 0.512400210996;
    msg.u = 0.76513004043;
    msg.v = 0.925121812749;
    msg.w = 0.128081696412;
    msg.p = 0.312735406421;
    msg.q = 0.741536588727;
    msg.r = 0.363538299026;
    msg.svx = 0.929088566852;
    msg.svy = 0.7823896739;
    msg.svz = 0.24729783453;

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
    msg.setTimeStamp(0.3462738786);
    msg.setSource(56910U);
    msg.setSourceEntity(84U);
    msg.setDestination(39867U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.105980818026;
    msg.lon = 0.715298169977;
    msg.height = 0.865021742598;
    msg.x = 0.287398098545;
    msg.y = 0.930539402207;
    msg.z = 0.619000645004;
    msg.phi = 0.11894860791;
    msg.theta = 0.225559993361;
    msg.psi = 0.259766635568;
    msg.u = 0.442022783196;
    msg.v = 0.909972098869;
    msg.w = 0.631378071894;
    msg.p = 0.449559728415;
    msg.q = 0.189829813883;
    msg.r = 0.940248090621;
    msg.svx = 0.147799884465;
    msg.svy = 0.660684118554;
    msg.svz = 0.400828401028;

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
    msg.setTimeStamp(0.332529247144);
    msg.setSource(62087U);
    msg.setSourceEntity(117U);
    msg.setDestination(57819U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.36259769956;
    msg.lon = 0.635812485693;
    msg.height = 0.170591296029;
    msg.x = 0.912227767695;
    msg.y = 0.996246074124;
    msg.z = 0.925757866509;
    msg.phi = 0.0467938300845;
    msg.theta = 0.429975740111;
    msg.psi = 0.123923269767;
    msg.u = 0.332427177267;
    msg.v = 0.50481299721;
    msg.w = 0.0664461597782;
    msg.p = 0.518970184955;
    msg.q = 0.300761387767;
    msg.r = 0.0520903931009;
    msg.svx = 0.985122331693;
    msg.svy = 0.925684087875;
    msg.svz = 0.769592697611;

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
    msg.setTimeStamp(0.839602892047);
    msg.setSource(53250U);
    msg.setSourceEntity(7U);
    msg.setDestination(11661U);
    msg.setDestinationEntity(55U);
    msg.op = 26U;
    msg.entities.assign("QPBPIOIOWGZNWFKBXVTGJRIAVEICWGFDOXAXPSMQGYJASONJQQTEZHNLKAKSJLMWVMSXPNCXVPPGJMHLECHXDUXQDUHTBMRODTXKSRNHVRTWAASFASCLFZIWEEZBOYNRUZYYGDZYKLZ");

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
    msg.setTimeStamp(0.197301069707);
    msg.setSource(46565U);
    msg.setSourceEntity(251U);
    msg.setDestination(27734U);
    msg.setDestinationEntity(36U);
    msg.op = 242U;
    msg.entities.assign("TVMWLHMYIJTE");

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
    msg.setTimeStamp(0.356674669173);
    msg.setSource(19991U);
    msg.setSourceEntity(170U);
    msg.setDestination(30612U);
    msg.setDestinationEntity(92U);
    msg.op = 138U;
    msg.entities.assign("VZNTQMNVBVIRHNENOMLLTCFBDAHAWZGJDRPCNGIVH");

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
    msg.setTimeStamp(0.959642532502);
    msg.setSource(39110U);
    msg.setSourceEntity(85U);
    msg.setDestination(8099U);
    msg.setDestinationEntity(22U);
    msg.type = 151U;
    msg.speed = 30212U;
    const char tmp_msg_0[] = {-39, -83, 42, 21, 17, 106, -18, 80, 32, 35, -86, 29, 124, -59, -76, -125, 112, -28, 52, 10, -117, -98, 87, 123, -26, -60, -112, -22, 76, -19, 97, 37, 50, 97, 96, 85, 74, -68, -42, -53, -2, 17, 37, -116, -23, -51, 106, -22, 49, -88, 124, -41, 89, 22, -3, 38, 45, -88, -84, 101, 72, 82, -37, 16, -76, -76, 62, 47, -22, 63, 88, -66, 57};
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
    msg.setTimeStamp(0.114862360562);
    msg.setSource(3210U);
    msg.setSourceEntity(71U);
    msg.setDestination(30478U);
    msg.setDestinationEntity(165U);
    msg.type = 66U;
    msg.speed = 26585U;
    const char tmp_msg_0[] = {-122, -88, 61, 62, -2, -4, -21, -44, 57, 86, 28, -2, -29, 16, 32, -90, 71, 45, -57, 66, 87, 95, 32, 115, -95, 60, 107, 124, 80, -120, -32, -1, -42, 107, 116, -90, 115, 121, 88, -97, -47, 19, 55, 76};
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
    msg.setTimeStamp(0.850488524286);
    msg.setSource(50502U);
    msg.setSourceEntity(106U);
    msg.setDestination(56591U);
    msg.setDestinationEntity(170U);
    msg.type = 22U;
    msg.speed = 12782U;
    const char tmp_msg_0[] = {-102, -1, -96, -23, -123, 21, 20, 3, -62, -16, -78, 20, 3, -50, 3, 47, -36, -18, 26, -102, -79, 28, 20, -101, -38, 95, 126, 41, -47, -3, 85, 20, 40, -16, -107, 9, 11, -102, 90, -82, -27, 18, -45, -71, 96, 32, -45, -109, -89, 79, -89, 68, 5, 101, 85, 50, 20, -30, -65, 89, 40, -2, -110, -62, -56, -108, 28, -124, -23, 76, -123, -92, 44};
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
    msg.setTimeStamp(0.525249360362);
    msg.setSource(22602U);
    msg.setSourceEntity(248U);
    msg.setDestination(25294U);
    msg.setDestinationEntity(87U);
    msg.op = 135U;
    msg.tas2acc_pgain = 0.52705385748;
    msg.bank2p_pgain = 0.55174660019;

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
    msg.setTimeStamp(0.305120420861);
    msg.setSource(6916U);
    msg.setSourceEntity(39U);
    msg.setDestination(48705U);
    msg.setDestinationEntity(204U);
    msg.op = 28U;
    msg.tas2acc_pgain = 0.686499741093;
    msg.bank2p_pgain = 0.459248088428;

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
    msg.setTimeStamp(0.404307982612);
    msg.setSource(58664U);
    msg.setSourceEntity(139U);
    msg.setDestination(62271U);
    msg.setDestinationEntity(241U);
    msg.op = 129U;
    msg.tas2acc_pgain = 0.32635428276;
    msg.bank2p_pgain = 0.529610084708;

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
    msg.setTimeStamp(0.993564840009);
    msg.setSource(10392U);
    msg.setSourceEntity(241U);
    msg.setDestination(23131U);
    msg.setDestinationEntity(217U);
    msg.available = 2662750551U;
    msg.value = 129U;

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
    msg.setTimeStamp(0.493656621955);
    msg.setSource(1550U);
    msg.setSourceEntity(117U);
    msg.setDestination(41081U);
    msg.setDestinationEntity(105U);
    msg.available = 777050350U;
    msg.value = 176U;

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
    msg.setTimeStamp(0.382745138808);
    msg.setSource(27369U);
    msg.setSourceEntity(181U);
    msg.setDestination(52774U);
    msg.setDestinationEntity(121U);
    msg.available = 1531673230U;
    msg.value = 111U;

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
    msg.setTimeStamp(0.157064886809);
    msg.setSource(64749U);
    msg.setSourceEntity(199U);
    msg.setDestination(28331U);
    msg.setDestinationEntity(245U);
    msg.op = 163U;
    msg.snapshot.assign("PSIBLKQOZRIMDPDRIXFYHGJYQFTBYKLNOZOKMVXUZJOFVTVXJLPWKHQQBXMLCIKHNKFDXTJOJSGRQAZPUMJVUZMILXSFDNBGBRZESAPOALHHYGYGTVKSEDWFGTUXQZOHNGUNWIBNJEWEQALMUVEWYCUPNIUNIZCCBRPOAHVALJEWYHYFBTJQECKPCNMFCDMKCRPAUEDBGC");
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 251U;
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
    msg.setTimeStamp(0.703323874871);
    msg.setSource(12428U);
    msg.setSourceEntity(68U);
    msg.setDestination(57323U);
    msg.setDestinationEntity(106U);
    msg.op = 237U;
    msg.snapshot.assign("MPLBLEHSSTFZMQEIMHALPYCHIALJVITXEUWROBGYFQUSECHZMQOSEDAVDYCNCIKKGCJJGJKKYNIAUSYWYXLGNHWVWTDUZFYJWDMCQIWAFMRMKAWNTSQSRBEGJXHOEAVZDCLAIAQUBVBNENYLNFGUKEC");
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.450321107121;
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
    msg.setTimeStamp(0.533471684406);
    msg.setSource(9732U);
    msg.setSourceEntity(59U);
    msg.setDestination(40567U);
    msg.setDestinationEntity(26U);
    msg.op = 94U;
    msg.snapshot.assign("CSGAHPMHFQAFIDLBFVJUXSRZIRSURQXKLGXDWAQMBMEKJWNECMHQBNFTOZKJVDDFUTKWXCXCNHNNRZTMJMYBAVJRWUEYHQEBDOQYUXGREYZFXVZXSLZPKPPVLVTBCPCAJVGAUREODBYUNATZJFJDYAIGGLSENQPVASLCHKXOMAPOYKRLIQRNP");
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 55533U;
    tmp_msg_0.value = 66U;
    tmp_msg_0.error.assign("ODOPKFFABQRUXNFFGQHEJIGQGAMQYPNWBZOJSJSOPYACPEZIYVTATYOQPRXVVKWRUSJBEP");
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
    msg.setTimeStamp(0.247688483635);
    msg.setSource(63278U);
    msg.setSourceEntity(197U);
    msg.setDestination(28166U);
    msg.setDestinationEntity(155U);
    msg.op = 198U;
    msg.name.assign("CDPCIYORADZBFBWNMKSNHFFVBXZTYKTAQURARGZGAWYIXOAFYBLFHPZNGZFTOKQLRVURVBOICMUPVNIMBDACUSBUVUMUZSPBYJUDYEAMWJSNQNKLXXHX");

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
    msg.setTimeStamp(0.296935177463);
    msg.setSource(50576U);
    msg.setSourceEntity(68U);
    msg.setDestination(54284U);
    msg.setDestinationEntity(193U);
    msg.op = 131U;
    msg.name.assign("FZTVCDMQGFAEDYBAWWHHYMLMXDUSMQLRSLZZUOKJNSOSBOXVREAUAUCIWBTZLILQJJSFCGJTCGL");

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
    msg.setTimeStamp(0.991117878192);
    msg.setSource(34903U);
    msg.setSourceEntity(121U);
    msg.setDestination(45281U);
    msg.setDestinationEntity(183U);
    msg.op = 191U;
    msg.name.assign("NCGEHOMHWCZFJABSMWFQAIFRAVOZDXKQGZAYDIEFAHVMOGRFQHZRMIZMNILEKYLESDULVBZJJKACPVGHGOCEXYWYDMTQXWQTKOAWYPJ");

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
    msg.setTimeStamp(0.808990899458);
    msg.setSource(30525U);
    msg.setSourceEntity(207U);
    msg.setDestination(40496U);
    msg.setDestinationEntity(196U);
    msg.type = 145U;
    msg.htime = 0.846015835637;
    msg.context.assign("XTAFFGMTEWMGQNTBYMLIEBDJZYRRLVAUKJPATIHACEWTZEMIWBSGNKRCKQSIZKRLTLUONVTBDDTQBPGOEJCUGJKWZZXCVANNVUGYBZJQMRDZDIHCPOWUVEXSPVJDKVFRVGXSLISFQXFIAWLYMKUDPRQIZFEHZGHQKHSRBXPJXFWROZFHOUCWYCQOVELO");
    msg.text.assign("SWMZPEDZILYEOCLWVQIPPSFZFXNNXTNAUOLKENMPTGKDMKQRIBGXMCRPJ");

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
    msg.setTimeStamp(0.184329928852);
    msg.setSource(10431U);
    msg.setSourceEntity(162U);
    msg.setDestination(56817U);
    msg.setDestinationEntity(181U);
    msg.type = 79U;
    msg.htime = 0.0998045696555;
    msg.context.assign("JUXCGSBEPGWKYZALOVAHMDHFJMBSCALDRMQLVPYYIFUPLXKWRTDBCQAUNEXUCZKHLRRGQHBYTUNSJREMJISDCNVZYXHLHTTOVAJANYROYSFGNQGUSIHTPWIQLJVDQFYTKXOWCISTGCAAUOKQIEXPWOFWVBKHGWPVPY");
    msg.text.assign("UZUJSACWJUKHRAHPDPJNCQDPYBSIAQHCLITLKKDKUGFWEHVVLMUOPKXQWLNLFJKMYKCYNNFREJZLJXBLBIAOFLILT");

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
    msg.setTimeStamp(0.062561462415);
    msg.setSource(29186U);
    msg.setSourceEntity(188U);
    msg.setDestination(10326U);
    msg.setDestinationEntity(139U);
    msg.type = 144U;
    msg.htime = 0.717493211671;
    msg.context.assign("DLCGAMVSXSPWZHDFLYQMANIAUMUKWTPJPHBYQSWIJXYVAARGDJUEGDZWQPRUPQTMKCESWITHKRIFVKOWYGYDYRGFLTUXSZSSLIVKOAEHMEQCFBBLCHCPWXVBODJGHEJQNQDPMNBVFLTMKUZDNOJMPRCGISVZLMHEBCHAVFURLKBLBIBYTSFCDUIRAWEYHRKXXVOWENY");
    msg.text.assign("LKMYJQLFNWPTUCFDZIRXBPHJQGNFGQDWTAQRKOXWZOCUQOICDHWMDKVQZJTHRDVRXGBVJSLUJAINHRGEXJTAKDMWGKNBMHRUSCXFRIQBJOPVGATZPYXWNMJARWUPCFEIYJPKGWLYCITBOQSULYEAUZNZQEXPUSEAORXDQSLOAFWPTXVNNKOCWBNSUSHSOHEZOEEVVYMZYMEIELLBPMPVBSJTLITKVDZXYIKYYBMTAMGFKL");

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
    msg.setTimeStamp(0.999694633643);
    msg.setSource(42446U);
    msg.setSourceEntity(121U);
    msg.setDestination(33447U);
    msg.setDestinationEntity(83U);
    msg.command = 107U;
    msg.htime = 0.57421404348;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 237U;
    tmp_msg_0.htime = 0.453189999949;
    tmp_msg_0.context.assign("XSXWNUAUDEHWAIUDRSSIZSF");
    tmp_msg_0.text.assign("GOWBDEFWTVKJHPEUEISWBZXKHCJIRLASCDSQRAKOCYFMFBHVLVMRROSHDPWUOOPNBQNJUJVZIYIRPMSWUTPMTBJXLREZBIFITPJJLUTNKGUGSZUPMCWJ");
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
    msg.setTimeStamp(0.39800886216);
    msg.setSource(56076U);
    msg.setSourceEntity(15U);
    msg.setDestination(43868U);
    msg.setDestinationEntity(19U);
    msg.command = 125U;
    msg.htime = 0.695908389036;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 235U;
    tmp_msg_0.htime = 0.368634804205;
    tmp_msg_0.context.assign("UIDKSGLNUWBYJUIXARKDVIAYIOBCCCEYWKPHPLICAJNTJQWGS");
    tmp_msg_0.text.assign("DPDQMKBYJNKRVWDETGKTZBHPIOGEINLFKOXUUZTVHBYONSDPAONEYZJTONLGARXLXYPGZMVMVIPTSJUILTKQSRNFSWHOIJTOCICLJRPWQJBCVTCFARQJBBVXXVUAASCMUHYYYUPRWEQRRZHKXVFASMWDQAZJSFDSFVHXMQUPWRYEZMOCKD");
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
    msg.setTimeStamp(0.715768732611);
    msg.setSource(730U);
    msg.setSourceEntity(29U);
    msg.setDestination(9803U);
    msg.setDestinationEntity(89U);
    msg.command = 87U;
    msg.htime = 0.0375340906845;

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
    msg.setTimeStamp(0.49772093407);
    msg.setSource(9143U);
    msg.setSourceEntity(165U);
    msg.setDestination(3346U);
    msg.setDestinationEntity(84U);
    msg.op = 116U;
    msg.file.assign("PEGDKUSNDAVTLFTUJVQOAEZZMLPUGRPLBEEMGOGNIEHRDFJHMVTFJIBLUHHAJEOBFMNWCPNXNFSSQYPSZWRYRVCSOLYIFQRXNMQVFQCKUXKBTCLHAFWKWKYSWGMUIRBTWCKSJHXIGOKCOVSAIQJDLXVODUTPCXHGWJXGCKRIZABAMKOOBZMQVCIJGJWSFENNMNVUALTLEZTMERFDIYYXGOXYBWJHZ");

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
    msg.setTimeStamp(0.322879209089);
    msg.setSource(45227U);
    msg.setSourceEntity(135U);
    msg.setDestination(55013U);
    msg.setDestinationEntity(172U);
    msg.op = 153U;
    msg.file.assign("LPAZQEVWSWTDXVDWRMEFGMBTUWNMFHPMFJUTEZTNHRLIXINZADJNXSKBPFXVUBOMJTJVKKDZDMSVEULTONMBKMJSSKQGDPNHPCBFOIFACBRJKUUQAXGOICREPTSWVPSGWTDOTYUGLWIYNSFCQQFREZKAAIZTFYVEDGKJLFKGAZRHXCWDYAPRQHCXLBUXNBHYUHEOGZQVGNEWONIYQIMUCLGEZSJSLLIYHPKCWCYBMYQLCYB");

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
    msg.setTimeStamp(0.681083954701);
    msg.setSource(29697U);
    msg.setSourceEntity(108U);
    msg.setDestination(35559U);
    msg.setDestinationEntity(249U);
    msg.op = 107U;
    msg.file.assign("XEMQRLDXQHNEGMRRZIOUITUTKJCDBIWSIOVEDCSYEQWPVNUYCSJFIJQLDJNCFVBQKFOJVKETPMXHZG");

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
    msg.setTimeStamp(0.604198167623);
    msg.setSource(61211U);
    msg.setSourceEntity(100U);
    msg.setDestination(23250U);
    msg.setDestinationEntity(210U);
    msg.op = 65U;
    msg.clock = 0.484272373036;
    msg.tz = -73;

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
    msg.setTimeStamp(0.65300079306);
    msg.setSource(57871U);
    msg.setSourceEntity(54U);
    msg.setDestination(57816U);
    msg.setDestinationEntity(208U);
    msg.op = 152U;
    msg.clock = 0.668631892035;
    msg.tz = 22;

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
    msg.setTimeStamp(0.875663088674);
    msg.setSource(27577U);
    msg.setSourceEntity(85U);
    msg.setDestination(49543U);
    msg.setDestinationEntity(105U);
    msg.op = 101U;
    msg.clock = 0.900262171647;
    msg.tz = -89;

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
    msg.setTimeStamp(0.831252991489);
    msg.setSource(36161U);
    msg.setSourceEntity(134U);
    msg.setDestination(37621U);
    msg.setDestinationEntity(46U);
    msg.conductivity = 0.259214551262;
    msg.temperature = 0.765425683269;
    msg.depth = 0.8070631225;

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
    msg.setTimeStamp(0.137949802663);
    msg.setSource(11948U);
    msg.setSourceEntity(93U);
    msg.setDestination(7108U);
    msg.setDestinationEntity(220U);
    msg.conductivity = 0.728856007437;
    msg.temperature = 0.549870003205;
    msg.depth = 0.994112797494;

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
    msg.setTimeStamp(0.309433254198);
    msg.setSource(12585U);
    msg.setSourceEntity(53U);
    msg.setDestination(55058U);
    msg.setDestinationEntity(188U);
    msg.conductivity = 0.694374967432;
    msg.temperature = 0.592125586235;
    msg.depth = 0.467052219438;

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
    msg.setTimeStamp(0.15427553798);
    msg.setSource(29754U);
    msg.setSourceEntity(4U);
    msg.setDestination(25543U);
    msg.setDestinationEntity(120U);
    msg.altitude = 0.421474394416;
    msg.roll = 64420U;
    msg.pitch = 316U;
    msg.yaw = 39958U;
    msg.speed = 10855;

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
    msg.setTimeStamp(0.553441441652);
    msg.setSource(7742U);
    msg.setSourceEntity(2U);
    msg.setDestination(52662U);
    msg.setDestinationEntity(72U);
    msg.altitude = 0.968412094987;
    msg.roll = 61154U;
    msg.pitch = 56263U;
    msg.yaw = 58896U;
    msg.speed = -7563;

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
    msg.setTimeStamp(0.156111084736);
    msg.setSource(55530U);
    msg.setSourceEntity(113U);
    msg.setDestination(60729U);
    msg.setDestinationEntity(227U);
    msg.altitude = 0.91547640732;
    msg.roll = 53761U;
    msg.pitch = 12452U;
    msg.yaw = 33266U;
    msg.speed = -27264;

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
    msg.setTimeStamp(0.0819168345574);
    msg.setSource(65122U);
    msg.setSourceEntity(161U);
    msg.setDestination(31029U);
    msg.setDestinationEntity(237U);
    msg.altitude = 0.491715416863;
    msg.width = 0.256483905883;
    msg.length = 0.895793035129;
    msg.bearing = 0.189057571207;
    msg.pxl = 4800;
    msg.encoding = 69U;
    const char tmp_msg_0[] = {-31, 33, 40, -99, 11, 91, 74, -31, -4, -25, -61, -127, 67, -94, 82, 57, -3, -23, -83, 106, -6, 23, -109, -58, 59, -41, -63, -72, 118, -94, 91, -8, 64, 35, 91, -119, 29, 116, -39, 97, 123, 107, 6, -38, 93, 109, -2, 59, -94, -99, -7, -109, 45, -107, 63, 119, 31, -51, 125, 27, -101, -15, -29, -99, -120, 99, -59, -73, 104, 97, 96, -108, -123, -94, -122, -123, -122, 96, -8, -128, 34, 91, 97, -60, 95, -13, 102, 37, -127, 33, -113, -12, -120, 73, -21, 86, -117, 21, -26, 41, -104, -32, 3, 21, -47, 63, -45, 60, 78, -45, -19, -119, 86, -124, -123, -54, -82, 11, -87, -25, -106, 1, 76, 104, 4, 66, 33, -23, -116, -3, -88, -63, -84, 10, 97, -109, 103, 28, -1, -1, 74, -105, -78, -122, 75, -103, 11, 58, -20};
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
    msg.setTimeStamp(0.865776384714);
    msg.setSource(59475U);
    msg.setSourceEntity(88U);
    msg.setDestination(42308U);
    msg.setDestinationEntity(121U);
    msg.altitude = 0.401509212859;
    msg.width = 0.905866783994;
    msg.length = 0.461776800342;
    msg.bearing = 0.234341619856;
    msg.pxl = -22379;
    msg.encoding = 137U;
    const char tmp_msg_0[] = {-111, 119, -94, -38, -36, 52, 88, 96, -101, 84, 92, -118};
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
    msg.setTimeStamp(0.340420445285);
    msg.setSource(18563U);
    msg.setSourceEntity(95U);
    msg.setDestination(33400U);
    msg.setDestinationEntity(47U);
    msg.altitude = 0.69237152522;
    msg.width = 0.0643852508281;
    msg.length = 0.101704049222;
    msg.bearing = 0.35118552172;
    msg.pxl = 10700;
    msg.encoding = 173U;
    const char tmp_msg_0[] = {61, 34, -88, -81, -89, -30, 111, 76, 70, -42, -41, 123, -73, -55, -56, -69, -75, -110, 84, 89, -116, -122, 21, 102, 5, -100, 76, 73, 36, 11, -64, 90, -74, -112, -51, 71, -16, 25, -53, -24, -89, -84, -10, 57, -50, 103, 18, 48, -51, -16, 7, -55, -73, 32, -69, -39, -41, 107, -59, 97, -94, 126, -37, 69, -85, 67, -106, -16, -60, 11, -117, -3, 104, 5, -9, -62, -71, -114, -13, 16, 29, 25, 5, -31, -108, -15, 27, 82, 59, 103, -87, 112, 92, 35, -30, -114, 28, -76, 5, -66, -29, 17, -87, 114, 111, 21, 10, 26, -43, 107, -115, -95, 1, 110, 0, 100, -66, 46, 4, -81, -97, 122, -9, 92, 126, -1, -126, 110, -109, -37, 93, 62, -103, 11, 98, -20, -127, 4, 114, -21, 67, 73};
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
    msg.setTimeStamp(0.566170591665);
    msg.setSource(3749U);
    msg.setSourceEntity(204U);
    msg.setDestination(19696U);
    msg.setDestinationEntity(138U);
    msg.text.assign("FPGHMPVUREDVKPYZMWGOPSEIQBLRJUDMXQCZIVXDYTHMCSQPCFFCTVNHKMBZEBUKMPGAXLNPHJKJUQRNDJQOYOITWZOJCXVTWOAZ");
    msg.type = 8U;

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
    msg.setTimeStamp(0.654612113403);
    msg.setSource(54683U);
    msg.setSourceEntity(164U);
    msg.setDestination(38964U);
    msg.setDestinationEntity(245U);
    msg.text.assign("EQJVULHYWSYPSVIVXTHINDSCBHIGDITGNTTPQRNXDBKBNQWCWYZQOLYABGGTLZOOQKFZHUJOEORWPMCXASICMJTNIMDHGXHVJAMSFYTAPWLFIFLLOLRGVYXBYDETBSLBCAKMXSFJFCBEYALESNLZEAFUKKWIHCDUONCNZPIOHEKQNYUPRVUJMJZQUQVDJGOMFBACJHDZHGSMPXPDXVXSWRZPCTE");
    msg.type = 238U;

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
    msg.setTimeStamp(0.0921640013263);
    msg.setSource(6411U);
    msg.setSourceEntity(44U);
    msg.setDestination(25397U);
    msg.setDestinationEntity(179U);
    msg.text.assign("FDGOVCRQQMPIQPTXAZZUVQOZHXJJNPFJFFNKXINOYCWBNYLCSFEHXRHPWJUAWXWTOCBG");
    msg.type = 81U;

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
    msg.setTimeStamp(0.544806669715);
    msg.setSource(50395U);
    msg.setSourceEntity(148U);
    msg.setDestination(44683U);
    msg.setDestinationEntity(131U);
    msg.parameter = 24U;
    msg.numsamples = 138U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 13786U;
    tmp_msg_0.avg = 0.921949536493;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.371690398571;
    msg.lon = 0.659211304084;

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
    msg.setTimeStamp(0.804926852092);
    msg.setSource(51464U);
    msg.setSourceEntity(76U);
    msg.setDestination(4554U);
    msg.setDestinationEntity(227U);
    msg.parameter = 50U;
    msg.numsamples = 55U;
    msg.lat = 0.55153680688;
    msg.lon = 0.549778329892;

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
    msg.setTimeStamp(0.176984752352);
    msg.setSource(47142U);
    msg.setSourceEntity(35U);
    msg.setDestination(36267U);
    msg.setDestinationEntity(103U);
    msg.parameter = 190U;
    msg.numsamples = 53U;
    msg.lat = 0.79099765283;
    msg.lon = 0.544956487975;

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
    msg.setTimeStamp(0.14093177074);
    msg.setSource(13918U);
    msg.setSourceEntity(4U);
    msg.setDestination(23695U);
    msg.setDestinationEntity(113U);
    msg.depth = 21249U;
    msg.avg = 0.749393718452;

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
    msg.setTimeStamp(0.90592045468);
    msg.setSource(29377U);
    msg.setSourceEntity(59U);
    msg.setDestination(16716U);
    msg.setDestinationEntity(234U);
    msg.depth = 59225U;
    msg.avg = 0.950159760253;

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
    msg.setTimeStamp(0.873467896053);
    msg.setSource(60932U);
    msg.setSourceEntity(226U);
    msg.setDestination(55382U);
    msg.setDestinationEntity(24U);
    msg.depth = 51883U;
    msg.avg = 0.0860150022314;

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
    msg.setTimeStamp(0.315234850927);
    msg.setSource(28347U);
    msg.setSourceEntity(134U);
    msg.setDestination(12346U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.980510740984);
    msg.setSource(35135U);
    msg.setSourceEntity(215U);
    msg.setDestination(56046U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.552966622238);
    msg.setSource(63206U);
    msg.setSourceEntity(224U);
    msg.setDestination(16737U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.107700340751);
    msg.setSource(92U);
    msg.setSourceEntity(0U);
    msg.setDestination(36006U);
    msg.setDestinationEntity(116U);
    msg.sys_name.assign("JUYIPOFJMUDRASCMJTTEFZGKUSMGWFLQMACIBBQIOGFRAZXZYFHKJKQIB");
    msg.sys_type = 83U;
    msg.owner = 47742U;
    msg.lat = 0.962731986577;
    msg.lon = 0.0694843918406;
    msg.height = 0.149923818716;
    msg.services.assign("MLGUMXZSRCSSVQELTJGGPXCRDJOQWZXGALOBFVTJIRSYKCSJUOIQFKHHFGXPTGVIPIBOJKQINMOA");

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
    msg.setTimeStamp(0.38602162795);
    msg.setSource(10428U);
    msg.setSourceEntity(12U);
    msg.setDestination(40002U);
    msg.setDestinationEntity(47U);
    msg.sys_name.assign("KHGQWBFAJYFXQTYBICQYIXYOWBNKIRSKZPOSBDXVTCRDSFHKMBPANGOCNSPVW");
    msg.sys_type = 88U;
    msg.owner = 48686U;
    msg.lat = 0.495939257249;
    msg.lon = 0.903114051944;
    msg.height = 0.579422399396;
    msg.services.assign("TFUWOGDSUOSQZWCBVOYSIRCELPRVIKBAMXQCRDTZZLRROMWWIYMYSBCXCHMMHLNVJIKLXGXJYLMYEIAKLMMDNHVNIXYPSPNTWBLYACEPTKHDREQWOCTQTPXFGBULGXCKJVUQTFBWFKNEACNOQNJOGADBPKAYXEGAFTPNZEGIDJNKJFJIASSARWRRHZVEVZUPGUPHZUSFCHYHNFWZYDBHEGMBRZIJJFMOBUSFQALOVSQIKXTQDDQJVVWT");

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
    msg.setTimeStamp(0.628880154413);
    msg.setSource(58994U);
    msg.setSourceEntity(25U);
    msg.setDestination(3593U);
    msg.setDestinationEntity(196U);
    msg.sys_name.assign("ACDGSVBXFDOUJHGAKPUXDJAPVCNOFWVSRXROKBRQQERXBTZNUEJFCFCQWSVOAJXORPFTLPZKXYAXJUKHQGLRINEJEQVQOSNORPNWPLLTYBVDJLZKWVQUIIWIOLYHBTZASZPCRGXTCGUSIENREGUXMGSMJRTDWMWKIHPOMEWOMYPTXZWESBDUALZMFLWNYGZIKTEYH");
    msg.sys_type = 50U;
    msg.owner = 35388U;
    msg.lat = 0.0896858108251;
    msg.lon = 0.250717371651;
    msg.height = 0.577703118995;
    msg.services.assign("FWFQNVNVONYBNXEUQSIBJPHTFRYAZLQRBTFULEXVQQFNMBYKLRLPYLTLBODQHHTOLGGADAMIOJJMUKVRMNRXYHKUGHFAIAFRSBFAVCZSSGRZCTQWKUAOZPJPGDTXGGWYWNCVRXTCKOWQDUKGJOYTDMWOXZECLIMSPCEENHXDJOVYCQYMADIDBXJCRLAEF");

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
    msg.setTimeStamp(0.335749033386);
    msg.setSource(13684U);
    msg.setSourceEntity(50U);
    msg.setDestination(20250U);
    msg.setDestinationEntity(241U);
    msg.service.assign("WYCUBRTMCCISSTYFGPNEHKZTLWUQHHNEUEJWDCJITSMOYIFSYKBGSNVDYMNOAQAPEYCKMZHOEJMELCFQVXVTUSBHWRDMQXXDVRCJRQJUOQFITPXMFRVHZWDDXKNKBIJAZQOFXZGBVREZNALHLPLKWHPLFADNNOVUKLBYWRAGVSRVAMSVPSQPGULXZHAYTEBJXMYPLKWGKGTNEKD");
    msg.service_type = 180U;

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
    msg.setTimeStamp(0.465943648546);
    msg.setSource(45471U);
    msg.setSourceEntity(181U);
    msg.setDestination(12717U);
    msg.setDestinationEntity(2U);
    msg.service.assign("KIRVXDQUHWRDUSCIDN");
    msg.service_type = 251U;

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
    msg.setTimeStamp(0.0629015743179);
    msg.setSource(5208U);
    msg.setSourceEntity(58U);
    msg.setDestination(13636U);
    msg.setDestinationEntity(165U);
    msg.service.assign("JKKHUNBPTRFXEWELPBPYDJBGVPGRAKEMRIDMCDDWFOFSYLVIGYAUYMVQNSWIBYXDQFTHLCWJGEIOTZJCNKEPEBFJEYCOQHWNAZSBSNUJAMIHIMBVNKCROKRYWFAEXTWSBVLGWQUHBXTOGGYRSUVXNKSXTVUDZNM");
    msg.service_type = 108U;

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
    msg.setTimeStamp(0.208424100758);
    msg.setSource(7840U);
    msg.setSourceEntity(204U);
    msg.setDestination(56924U);
    msg.setDestinationEntity(15U);
    msg.value = 0.158329480281;

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
    msg.setTimeStamp(0.568854697989);
    msg.setSource(49233U);
    msg.setSourceEntity(27U);
    msg.setDestination(38639U);
    msg.setDestinationEntity(226U);
    msg.value = 0.13344557823;

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
    msg.setTimeStamp(0.655456964094);
    msg.setSource(5275U);
    msg.setSourceEntity(37U);
    msg.setDestination(39587U);
    msg.setDestinationEntity(49U);
    msg.value = 0.778846832532;

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
    msg.setTimeStamp(0.0934966029942);
    msg.setSource(25888U);
    msg.setSourceEntity(27U);
    msg.setDestination(16411U);
    msg.setDestinationEntity(27U);
    msg.value = 0.413945528941;

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
    msg.setTimeStamp(0.186937364955);
    msg.setSource(56322U);
    msg.setSourceEntity(57U);
    msg.setDestination(55925U);
    msg.setDestinationEntity(95U);
    msg.value = 0.661948691367;

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
    msg.setTimeStamp(0.789170228641);
    msg.setSource(36250U);
    msg.setSourceEntity(221U);
    msg.setDestination(11958U);
    msg.setDestinationEntity(39U);
    msg.value = 0.104745039988;

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
    msg.setTimeStamp(0.100146942337);
    msg.setSource(24768U);
    msg.setSourceEntity(55U);
    msg.setDestination(46704U);
    msg.setDestinationEntity(31U);
    msg.value = 0.153215865665;

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
    msg.setTimeStamp(0.270476360508);
    msg.setSource(2685U);
    msg.setSourceEntity(142U);
    msg.setDestination(18124U);
    msg.setDestinationEntity(157U);
    msg.value = 0.0459076814297;

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
    msg.setTimeStamp(0.684968746562);
    msg.setSource(16589U);
    msg.setSourceEntity(248U);
    msg.setDestination(25789U);
    msg.setDestinationEntity(92U);
    msg.value = 0.331670613255;

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
    msg.setTimeStamp(0.0488807526589);
    msg.setSource(29592U);
    msg.setSourceEntity(110U);
    msg.setDestination(36021U);
    msg.setDestinationEntity(43U);
    msg.number.assign("AYJUQHYOWYGMVBEAPJMKWLKVPXCGLJURNYSQASOYUBUSTEPGXNHOIEFRIHJWFDSTZRXXTDMBALHNMZJREVOYMJIHZBRMXNWNTJARPFVIIXKFHYVQCPDOFDKNIKDDZWTOFKLFQGRGCHRBMZAHCNXTNLYIWAPCVCXUOZZJCAUBPZPVKYAVEKBFJPLGONUXFGMITFTCLGWMUQGUQSWJVXCLQLEKHSLECHYETWBGNORWZEBRMQZISSTADQKQ");
    msg.timeout = 58488U;
    msg.contents.assign("BRKJUONMKQLAYIOFQWLNKJZCMZOTBNPNRQIGHGYGZITCXLKWEJLRRRYPLKJFKACRWGYKADDUTXOYDPQZWTTYUMQVSNJNVKYJIQJBQWCUSHZYBMGXBVUNSLQMMBZHFTXVHSFDPZSGFBCADDXDQFCRCDPVGTWHHVJKYULLVLHNXSJOPVAS");

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
    msg.setTimeStamp(0.392144857181);
    msg.setSource(43273U);
    msg.setSourceEntity(10U);
    msg.setDestination(13515U);
    msg.setDestinationEntity(153U);
    msg.number.assign("FVKSIUZNQELHOBYCMUFZZYDOJGJPQNPMHFXJNQCHSTANKQAVPJFQYAYSTMWWWRTGWUYUVVCZUVIESOLMPWJK");
    msg.timeout = 22607U;
    msg.contents.assign("QPUEHMYQSTSW");

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
    msg.setTimeStamp(0.617658612329);
    msg.setSource(37554U);
    msg.setSourceEntity(213U);
    msg.setDestination(38932U);
    msg.setDestinationEntity(88U);
    msg.number.assign("OJFZSRMHKIMGZSGJZHSHBVEAFBVIWTSLUPKEEYHPYSDHSKNLNGBPGTWIOYLBSXOJHZHYPUCBOAZEYNJKBVDQOXYEMQHCKJV");
    msg.timeout = 18480U;
    msg.contents.assign("XEFSLVBXYMRSFPZOWXQHFNZIFCYTOSKMZDFWPUUWCNBTQBLZCOTDXOVDKUAHWTCQMJRCHZVNYZAIHJLZVAPRSOARGKCXEFHSPMRBZGGAREPFUAWOASUUIRVVYCQDHCHWTOVPYNUQNGGK");

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
    msg.setTimeStamp(0.673981864163);
    msg.setSource(18334U);
    msg.setSourceEntity(87U);
    msg.setDestination(8309U);
    msg.setDestinationEntity(236U);
    msg.seq = 4132973820U;
    msg.destination.assign("JMOZHRKOVGXJTADRC");
    msg.timeout = 1951U;
    const char tmp_msg_0[] = {63, 99, -18, -76, -104, 116, -81, 50, -70, 7, 65, 65, -127, 41, -97, 20, 9, -97, -44, -82, -26, -43, 91, 23, -25, 59, 111, 31, -64, 99, 77, -72, -114, 110, -1, 86, 99, 58, 54, -51, 120, 116, -75, -54, 88, 52, 123, 9, 57, 0, 94, -13, 77, -128, 124, -44, -126, 76, 67, 49, 94, 68, 114, -102, 13, 36, 39, 108, 121, 55, -113, 28, -118, -50, -98, 66, -46, -14, -4, -63, 81, 62, 96, 29, 92, -30, -55, 62, 21, -57, 97, 64, 13, 27, 114, 70, 42, 77, 126, 117, 99, -51, 109, -123, 78, 117, -36, -42, -13, 72, 125, 50, 93, -110, -46, 117, -86, 43, -85, 93, -53, 24, -126, 82, -54, 27, -67, -107, 44, -112, 9, 12, -115, 69, 60, -38, 5, -49, -48, -40, 93, -121, -70, 50, 21, -94, -65, -39, 120, -124, 105, -35, 32, -98, 117, -42, -100, -88, 114, -118, 95, -1, 82, -116, -71, -17, 87, 4, -26, -51, -65, -32, 41};
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
    msg.setTimeStamp(0.251215146831);
    msg.setSource(3653U);
    msg.setSourceEntity(250U);
    msg.setDestination(3348U);
    msg.setDestinationEntity(33U);
    msg.seq = 2880717323U;
    msg.destination.assign("BISIAXMIVIDOVCRSIQWJHFIUMNNZAUBCTKEXKDHNKXGVETARBNJKOYKWDZSTVPW");
    msg.timeout = 396U;
    const char tmp_msg_0[] = {0, 52, -109, -77, -101, 76, 28, 74, -75, 4, -126, -16};
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
    msg.setTimeStamp(0.645850802789);
    msg.setSource(40776U);
    msg.setSourceEntity(113U);
    msg.setDestination(35422U);
    msg.setDestinationEntity(105U);
    msg.seq = 4162116798U;
    msg.destination.assign("HICTVLHKDJZEXHPKXSYJDKHGBQHPVNHZTGDWAIDVHUEUNKVXYNCRKSQHZDFMDEATBXQ");
    msg.timeout = 39362U;
    const char tmp_msg_0[] = {29, 21, 12, -40, -33, 73, 17, -42, 81, -3, -103, -58, -8, -79, 33, 25, 80, -81, -107, 92, -110, 57, 46, -75, -115, 70, -50, 62, -127, 17, -99, 45, 70, 109, 99, 87, -97, -5, -1, -96, 34, 99, -93, -40, -77, 34, -71, 39, -24, 117, 71, -100, -30, 40, -125, 74, 53, -128, 89, 64, 114, 5, 3, 65, -97, 61, -75, 118, -40, 74, 58, 44, -90, -7, 116, 66, -99, 112, 85, -128, -89, 28, -66, 32, 37, -17, -4, 47, -73, 57, 97, 22, -124, 97, -89, -51, 105, 43, 93, -37, -104, 91, 92, 116, -19, 47, -1, 31, -85, 25, -53, 92, -126, -39, -64, 122, -66, 39, 53, -20, 103, -36, -1, 121, 68, -46, 52, 68, 2, 43, -75, 93, 4, -19, 94, 87, -47, -22, -119, 63, 108, -99, -52, 56, -75, -115, -90, 33, -61, -80, 111, -54, -85, 20, -45, 16, -92, -122, 47, -66, -47, 88, -9, 8, 36, 104, -65, 119, 117, -72, 57, -102, 56, 68, 56, -127, 18, -63, 72, 12, 28, 33, -87, -30, -6, -109, 110, 75, -125, -115, 102, 110, -71, -56, -70, 125, 9, 40, 64};
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
    msg.setTimeStamp(0.145633536264);
    msg.setSource(60533U);
    msg.setSourceEntity(148U);
    msg.setDestination(40748U);
    msg.setDestinationEntity(124U);
    msg.source.assign("VBVLDNBJPWNMDXIVLVIGNPWJGGXWCUSUBLEGKGKBLREFFEVDBPZYXUOFTLMYZCCXTRLVBAKADEUDALOTBHRNPTEIZFLMMWHWYKYTCVQZOPHQKYSCIZSVEOUXMNDYBJOHMKZIXFZPQNBJSIXTONOEWSSOKAIUQQRTHLDKQRHAZGNIDRAQOFJYWLGWEHGDHSCYFGBPJSZWHEYTCCDVCIAWRRAJKFQSTYJMRAAEUPMF");
    const char tmp_msg_0[] = {106, 74, -73, 82, -123, 0, 112, -17, 2, -8, -84, -125, 52, 75, -128, -100, -62, -76, 69, 75, -20, -124, -5, 108, -125, 71, 108, 100, 79, 50, 75, 107, -127, -76, 37, -33, -65, 10, -95, 95, 85, -116, -41, 115, -79, 116, -33, 106, 45, -128, -69, -97, -50, 0, -7, -121, -57, 12, -128, -36, -8, 88, -42, -105, 4, 34, -67, 103, -56, 65, -53, 13, -104, 113, 17, -91, 30, -68, 24, -93, -31, 32, 31, 89, -37, 28, 18, -8, -49, 13, 106, 72, 114, -39, 30, 85, 25, -70, -64, 14, -33, -89, -88, 76, -119, 27, -37, 95, 54, -9, -77, -105, 63, 93, 58, 112, 67, 11};
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
    msg.setTimeStamp(0.554011647518);
    msg.setSource(13842U);
    msg.setSourceEntity(232U);
    msg.setDestination(8857U);
    msg.setDestinationEntity(135U);
    msg.source.assign("QKZNGHWEDWUINUOEVOXEYJPBDCMEVXRWNEIYMUDEOCRCQLIGBYZAFOIPMJFXLLJDQBDYZXSHPZPSWSTKRJACKDHIRNVSPRDEJWILBXOMRQSCQSQQNUESRRHIHVFTWNWJTVKRLUTSKHCCTFAVJMWHAYGOSPTZXKXMABFTPGXNBBXEWGJKYIGHZRKCPQWOHLIGTFGPAVDPUAIBXZENSNYYQLFNGFLDLCVLUKMMG");
    const char tmp_msg_0[] = {-6, 104, 15, -121, 44, -77, -54, -119, 60, 108, -105, -25, 124, -74, 67, -88, -75, -47, 117, 91, -109, 9, 100, 81, -1, 100, -114, 109, 4, -49, 98, -106, 20, 36, -30, -119, 80, -48, -44, 29, 103, -48, 83, 88, -8, 121, 120, -34, 15, -51, 113, -1, 120, -26, -44, -34, -70, -9, -75, 100, -84, -68, 121, 5, 30, -63, -36, 96, -46, -127, -103, -56, 21, 69, 18, -73, -42, -4, 119, 82, 35, 108, 97, -76, -17, 101, -71, -5, 93, 21, -13, -39, 28, 37, 91, -24, -92, -27, -110, -120, -121, -35, -52, -127, 99, 17, -112, 60, 7, 126, -20, 88, 52, 113, -118, -44, 19, 68, -58, -89, 103, -35, -27, 76, -52, -20, 123, 9, 9, -77, 68, 73, -68, 50, -90, -65, -51, -5, 6, 2, 75, 27, 118, -85, 77, -4, 69, -50, -51, 103, 43, -28, 4, -18, 98, -21, -3, 54, -103, 8, 89, 34, -63, 21, 80, -86, 28, -85, 9, 72, -103, -4, 86, -100};
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
    msg.setTimeStamp(0.442080526697);
    msg.setSource(59703U);
    msg.setSourceEntity(141U);
    msg.setDestination(10857U);
    msg.setDestinationEntity(118U);
    msg.source.assign("TZGGANSWQOQQYAMQGHPBFBXAILXRJDFOCWVJOBMOTJIPVKXRRMSZIACUMYLWTOTDRHBFOHBDFHBKUZNDTHKMGPDFYPHYRGFPQHJNCREWCQKTKAQYNGCBDLWUCXLRIWGZUHXDUMBCVEUEEOWWHJWUEJYZJLBHTKITVDMWISXAEPYLSRJLGUKPRNNESXEDLJNVEIDCIKLPKFULYZVTVAGKGRPEZMONMUFCPNQBTAVZVXFZASVSZAMJCQOYXSNSQY");
    const char tmp_msg_0[] = {-67, 71, 101, -30, -3, -73, 75, -37, -128, -23, 122, 52, 60, 98, 16, 92, -67, -95, -18, -118, -50, 89, -40, -47, -62, -11, -77, -68, 28, 103, -9};
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
    msg.setTimeStamp(0.0339407055527);
    msg.setSource(1235U);
    msg.setSourceEntity(143U);
    msg.setDestination(62579U);
    msg.setDestinationEntity(51U);
    msg.seq = 4292581051U;
    msg.state = 206U;
    msg.error.assign("PETGICJGTZFSGRUSOJGCFWZXTTRHJBNVRYSBDXVZOLNYUFNWEEVNQGSVPALKERILSCYDNAARYAKSQHHLLKOVOPQWBLCMIDHBXMTYFXLJVMFZPKM");

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
    msg.setTimeStamp(0.206521116398);
    msg.setSource(11802U);
    msg.setSourceEntity(143U);
    msg.setDestination(33262U);
    msg.setDestinationEntity(47U);
    msg.seq = 3748115377U;
    msg.state = 143U;
    msg.error.assign("HOOIOLWUPEORJFZXWLANRQMHDMTYQEYULXSVJZCMEFRNNKMVBYEFCXUGOCYXCAZSXDARGDSSEKVKCAKDPPTFBCMCQVQVFGVHQ");

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
    msg.setTimeStamp(0.0548860353283);
    msg.setSource(40736U);
    msg.setSourceEntity(194U);
    msg.setDestination(23423U);
    msg.setDestinationEntity(32U);
    msg.seq = 3075093730U;
    msg.state = 190U;
    msg.error.assign("EAKSBVBYXDYXMXCBFQURCOTPEMCYKOKBILTUQIEABBWMQFTGEICKAQIXECVFNTXPBSZQYKTIYUPEARHIRHHKVSMVVZWKJXGT");

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
    msg.setTimeStamp(0.120842657088);
    msg.setSource(10522U);
    msg.setSourceEntity(61U);
    msg.setDestination(57949U);
    msg.setDestinationEntity(45U);
    msg.origin.assign("DGZYLNJSTQSCMVKZYHVKGPPETJTMWIEHGNWCHZSUNIAJEJRCYMVIQXNXBQUAEMIDNIOMKBGGAZZBFXAKOOYEQWRTOTYZZLVPHJRTRLCWTOUCKAJHBKBVVOOPMAEIYDFJLTTKDLXLQLRBQAXHHYVUUWDSNBKPMZJJGEYBULUFFTMDIDHSWBRKLNQYBXVGIKUDCVSEFHEMFXQDFGDWRRZYSHSONUISZPXIPM");
    msg.text.assign("OREODQFBNKORIUOXAQXWBDZLMMLZKSRPWHEAZRZWSUCGYPEHFJEQLUIXGULILKHSECYYFGGVANLZCVWDQAYQHDTPRCBTOGXSLXMDVSBWZBVQKQJYOJCQUBZPAUTCHEUTMEYNLZFWEFJAJNTIFSKOIPNRPTLMOSHIQUVMPMCCGYXKWWXUVETJXKSYPTHBIREGWVNUIDVJRNMGLRXSOPFCJZJDSJMBFRK");

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
    msg.setTimeStamp(0.118673171484);
    msg.setSource(56084U);
    msg.setSourceEntity(249U);
    msg.setDestination(65529U);
    msg.setDestinationEntity(141U);
    msg.origin.assign("WMXLVMZZOHNLDAOPFYOOKEWUABKDOAGTVSFREWNKGV");
    msg.text.assign("CFACHVQDOPGGHKYKUPSTJUAYI");

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
    msg.setTimeStamp(0.512803831219);
    msg.setSource(15367U);
    msg.setSourceEntity(222U);
    msg.setDestination(55920U);
    msg.setDestinationEntity(16U);
    msg.origin.assign("APQFXNLTQKTVPYHBQHBAZNZPMECXLCKIFDRYCNOPDXUDLYHBPLEDARSIHIURJTNXRYOAJFJVRKFRNDNVQKJCZZZTDY");
    msg.text.assign("DRIVSDOGQQHVXZWOBKO");

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
    msg.setTimeStamp(0.892896285529);
    msg.setSource(11603U);
    msg.setSourceEntity(227U);
    msg.setDestination(32303U);
    msg.setDestinationEntity(146U);
    msg.origin.assign("GMXOBTGHAVWZFQAIPFESPAEKITUHSSQYAPVRRDIRNSFCCJANZPYEKDMRXXZOVMTWVODNJYMGESZTLIXNHATGHNFLDIXIBLJPCARZUUJUIDCQGJJCRTUUGVPWFIGJWPZYVOLVXZFWNBCHEUIOSYLOOWJMSZMMLHYSTBDWVNEGFBHWMISEHCJBUKOCDXFNOGCRQBGMKYZKQEKQPHADALHBVWMXYVNCWBXQBEREQPYYDJUUQRTAQK");
    msg.htime = 0.312389454343;
    msg.lat = 0.534495365616;
    msg.lon = 0.441216529196;
    const char tmp_msg_0[] = {117, -112, -48, 25, 100, -44, -94, 111, -51, 112, 123, 28, 69, -4, 92, -60, 89, -108, -26, -85, -15, 24, 32, 71, -100, 37, 53, 1, -8, -83, 16, 33, -82, 42, 47, 15, -40, -56, 117, 98, 124, 61, -43, 69, 26, -113, 78, -100, 104, 28, -75, -8, -84, 36, 13, 118, -15, -68, 58, -47, 40, 31, 18, -9, -17, -102, 74, 40, 118, -32, 58, -73, 24, 0, 32, 105, 0, 60, 14, 125, -100, -22, -44, -66, -104, -4, 99, -37, 16, -119, -107, -99, 41, -69, 99, 4, -118, -59, -39, -11, 2, -23, -16, -11, 102, -122, -11, 71, 122, -43, 13, 117, 51, -57, 110, -44, -102, -126, -39, 13, -108, 116, -20, -86, -50, -2, 111, 36, -24, 11, 118, 46, 15, 36, -63, -41, 29, -10, 34, -119, -2, 37, -119, 33, 38, -15, 100, 22, -52, 104, 7, -60, -67, 36, -90, -74, -96, -59, -41, 53, 108, -54, 85, -101, -4, -33, 81, 83, -9, -43, 115, -99, -91, 111, 108, 121, -16, 24, 82, -70, -128, -73, -43, -69, 67, -96, -79, 34, 119, -52, 49, 59, -13, 25, -80, -82, 76, 104, -81, 25, -60, 114, -89, -60, -117, 67, -14, 41, 101, 120, -37, 42, -94, 46, 5, 26, 103, 112, -27, 89, -83, -14, -125, -96, 99, 56, -23, -97, -107, -72};
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
    msg.setTimeStamp(0.285269588131);
    msg.setSource(64268U);
    msg.setSourceEntity(152U);
    msg.setDestination(52501U);
    msg.setDestinationEntity(102U);
    msg.origin.assign("THTQOROXHTYVBNCHDFZSUEACCAGTPEZMSKKHXWZAEXITAHGSPIYHEGQDJLCMBBYLQCGQIVWIBFMPBDFUSJPLQSGNCRHVFMDERXHUTIAIFORYJVIBKYQKLYZROEGFAWVOYSWLLNKYMZLCZEGGOCLONOFQAIJBOBQKUTHSVOUXVAUWWKXPKXPDJGXF");
    msg.htime = 0.488158100641;
    msg.lat = 0.231808765509;
    msg.lon = 0.762628670185;
    const char tmp_msg_0[] = {117, -63, 117, 8, 93, 28, -34, 23, 1, 40, 108, -98, -100, -69, -32, -56, -97, 111, 16, -114, -52, -115, 112, 111, -114, -99, -126, -89, 1, -77, 4, 53, 23, 110, -46, 74, -28, -57, 93, 107, 52, -37, 86, 43, 111, 80, 46, 106, 89, -66, 26, -54, 121, -117, -51, 99, 91, -27, 57, -52, 55, -3, 100, -75, -101, -26, 47, -89};
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
    msg.setTimeStamp(0.648758677476);
    msg.setSource(2935U);
    msg.setSourceEntity(159U);
    msg.setDestination(21464U);
    msg.setDestinationEntity(145U);
    msg.origin.assign("GNOQTWLTZMFIWUNCVCFTEDEELNVZZTBFUAZSWCJPQYARULNBXIRNHMILJPKAQMVBDUNSJLYCRHTBZODHIEHQNRPKWOBZHAMFALKDGZXWRUSCBGRPMTJLPIHSXRZGARCGLOVRSGKNPDCEIBUASXPYZJAPMWUDGWYYWIIOXVVOKFMDJTFOYDCZYBTVXEIYFVXSMBXHFFUQQEQYJEUIQOSNVEV");
    msg.htime = 0.45292645211;
    msg.lat = 0.968844148557;
    msg.lon = 0.327520482569;
    const char tmp_msg_0[] = {-72, 43, 38, -78, 38, 62, -32, 79, -37, -19, -110, 58, -39, 94, 35, 84, -95, -19, -119, 117, 25, 17, 56, 80, 112, 36, 6, -51, -62, 104, 117, -27, 61, -38, -111, 75, 42, 117, 92, -65, -72, -103, 42, -54, 86, 24, 71, -87, 32, 123, 52, 33, -20, -87, 1, 57, 75, 119, 10};
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
    msg.setTimeStamp(0.388751877593);
    msg.setSource(12661U);
    msg.setSourceEntity(148U);
    msg.setDestination(64686U);
    msg.setDestinationEntity(80U);
    msg.req_id = 16192U;
    msg.ttl = 31379U;
    msg.destination.assign("SKHJOSWQZDQOTEJIKVYWKWRVSBWXCOBTUDEDMQVOGBTPYGDEDHQKKNJOYFLFMPXRTAARDARFAXAQEEGVLVMWGFLUIFFQYNVYUBNOQIZRBVXMDSZ");
    const char tmp_msg_0[] = {91, 63, -45, 120, -18, 100, -34, 78, 69, 114, 91, -14, -79, 65, -101, -24, 25, -6, 9, -118, 123, 94, -109, -43, 33, -13, 9, 3, -95, -60, 121, -10, -10, -36, 18, -8, 88, 2, -128, 45, 55, -54, 23, -75, -109, 10, -127, 73, 94, -98, 86, -24, 8, 63, 51, -77, -73, 17, -61, -120, 24, -44, 62, -114, -120, -127, 64, 66, 24, 3, -29, -93, -126, 2, 110, 62, 97, 60, 112, 125, 66, -98, -46, 124, -122, -84, -99, 113, 46, 63, -107, -55, -25, 53, -68, 95, 126, 34, -100, -98, -44, 58, 81, 77, 66, -77, -128, 86, 117, 64, 10, -67, 17, -103, 121, 45, 125, -23, 62, -32, 102, -42, 111, -39, 91, -90, -39, 111, 114, 110, -31, 120, -94, -73, -105, -49, 81, -26, 112, -27, -50, -31, -92, -64, -96, -113, 95, 118, -88, 20, 10, 30, 25, 109, -21, -32, -61, -61, -41, -41, 66, -70, 22, -18, -70, 59, 110, -111, 24, -25, -37, -45, -70, 49, -3, -128, -113, -5, 40, 66, -40, 9, -42, -14, -92, -82, -87, 50, -63, 47, 19, -102, -117};
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
    msg.setTimeStamp(0.49793933503);
    msg.setSource(2306U);
    msg.setSourceEntity(236U);
    msg.setDestination(2610U);
    msg.setDestinationEntity(219U);
    msg.req_id = 5236U;
    msg.ttl = 33642U;
    msg.destination.assign("PFMKBQOUSBBTGSYFWWFCUHIKBDZRUOMDVNGGSQXZUJDSAXFOQCMYWGFWDWLEVENDTVZTPLFITDJRDGJXGXGQWLDVPYHEAKLAJIKHMHOOTYEQNQAIXPVQIWFJSPSCTHUXWKEYBYHRSCQIMOAIRVLRZZMJYXELMMPXZVCNLJZJYKRRBAHSPCSQAUIBWUGHTCMUZBFIGLJFNEJXNODGESTOWOBNEVAM");
    const char tmp_msg_0[] = {0, 34, 20, 3, 110, -110, -104, 29, 19, -5, 48, 13, 21, -83, 58, -23, -26, 117, 38, -68, 84, -104, 85, -97, 53, -55, 99, -10, 88, -70, 36, 125, -41, 118, -102, -118, 112, -29, 82, 91, -38, -76, 10, 71, 39, -62, -21, 96, 73, 84, -108, -116, -127, 44, 126, 92, -102, 63, -69, 48, -39, 99, -64, 119, 13, 108, 81, 24, 101, -124, -78, 29, 91, -54, 2, -57, -47, -71, -33, -48, -122, 23, 32, 104, 53, -25, 3, -124, 64, -25, -101};
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
    msg.setTimeStamp(0.29209634961);
    msg.setSource(38636U);
    msg.setSourceEntity(233U);
    msg.setDestination(12406U);
    msg.setDestinationEntity(65U);
    msg.req_id = 31322U;
    msg.ttl = 32122U;
    msg.destination.assign("NWCFESYLXFTJICJVINTZGKFKUKYADXJQGMZPUYXEWDJIAUNBSZPFNMRRSDHETZYXPFPWIXPMPEQZCBQBUAFJQJWIYHVDDFBRUW");
    const char tmp_msg_0[] = {-91, 87, 73, -108, 101, 124, 97, -49, 83, -72, 4, -98, 45, -68, 64, -118, 22, 109, 35, -8, 83, 92, 26, -116, 25, -95, -12, 121, 63, -99, -25, 126, -44, 56, 104, -115, -97, -74, -100, -32, 65, -97, 13, 99, -62, -22, -64, 50, 119, 4, -49, 111, 34, 91, -109, 23, 109, -2, -6, 51, 115, 94, 64, 89, -2, 5, 65, 10, 11, 16, 48, 96, -128, 91, 76, -7, 68, -14, -100, 52, -87, 10, 72, 41, -24, -63, 71, -102, -11, -71, -54, -23, -52, -113, 46, -83, 67, 41, -17, -94, -33, 92, 113, -91, 117, -1, -55, -29, -19, 123, -21, -71, 56, 100, 44, 45, -124, 47, 47, 11, 27, 78, 37, -23, 109, 3, -5, -84, -49, -58, 59, -60, -42, 64, 87, 16, -123, -112, -42, -42, 28, -30, -27, -1, 32, -101, 27, -25, 56, -11, 28, 107, -92, 104, 92, -1, 11, 110, -86, -116, 54, -74, -79, 124, 126, 71, -39, -6};
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
    msg.setTimeStamp(0.331326546848);
    msg.setSource(39576U);
    msg.setSourceEntity(228U);
    msg.setDestination(1177U);
    msg.setDestinationEntity(22U);
    msg.req_id = 2385U;
    msg.status = 154U;
    msg.text.assign("VNLANHZOTCXIQZUBVHVKZQRHMATKWXKCQJYURZGLHNRREGJMSODTTDHNZEMIOTLVMSFYFSLOJAISRJNYBNTBWWRXJLIVQPCBPBMKCFWRUKQTQVBLHDUPGWIRYUWPNIGINHMYEZFVSEWJSTDCIAOPOYKLOFYRLXXUQCS");

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
    msg.setTimeStamp(0.111892372222);
    msg.setSource(948U);
    msg.setSourceEntity(243U);
    msg.setDestination(54308U);
    msg.setDestinationEntity(39U);
    msg.req_id = 46823U;
    msg.status = 202U;
    msg.text.assign("MSPMRAZAIHXNFAYNHNMKLEFIQNI");

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
    msg.setTimeStamp(0.757428435856);
    msg.setSource(25508U);
    msg.setSourceEntity(4U);
    msg.setDestination(58921U);
    msg.setDestinationEntity(227U);
    msg.req_id = 59182U;
    msg.status = 73U;
    msg.text.assign("IYTSHWOQDTSAAXDZJOBLDWDGRQTVJLBGAZYCCYLVWHKYMSFBSIXRTJPEYJHLIRE");

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
    msg.setTimeStamp(0.782860394221);
    msg.setSource(36074U);
    msg.setSourceEntity(19U);
    msg.setDestination(40443U);
    msg.setDestinationEntity(32U);
    msg.group_name.assign("FXNVUZWUJGSKXNMTOYSKYRCEPFMYSSPOESAIDCMXKDRYYGMOBOCFMULNJYBHHMADUMUNEGJKGRFFAPCUEZAIUFVVJTFPKYFNDDAQWFGQCLWTAABAQQUGTNRTXRDLOEGOKNHXWMRBXVYBQKILBLOHPKXJSZQWOLWZWRBEJRVJJKHVZZGQILIHDXALNDBAUMBVEIHLCZWI");
    msg.links = 1248592969U;

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
    msg.setTimeStamp(0.337921285366);
    msg.setSource(34024U);
    msg.setSourceEntity(71U);
    msg.setDestination(46910U);
    msg.setDestinationEntity(203U);
    msg.group_name.assign("VXJHNITXVTWSWUQBMKTDWNTNEYKVPLEPWYGOLMTYLBUUTJKBFRAGMYRCJGXYTXIIHAOLZ");
    msg.links = 3830592096U;

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
    msg.setTimeStamp(0.894966366954);
    msg.setSource(59190U);
    msg.setSourceEntity(144U);
    msg.setDestination(36247U);
    msg.setDestinationEntity(222U);
    msg.group_name.assign("GILDPKFMODGJNCKINLOFNEIPZTBFRHACOHJSOXULEUFOWKVILYYPSVDEMLYEAHJTJDKZBVTBTNUFQVMRKQXHBAAAXAIPKOARCZZIMCBXDXZRGHUSMQOXUYKZPEWSPMRGYWVHXIUIYXJECRVBMZTYHFWLV");
    msg.links = 1952044410U;

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
    msg.setTimeStamp(0.0345791701834);
    msg.setSource(57860U);
    msg.setSourceEntity(203U);
    msg.setDestination(5836U);
    msg.setDestinationEntity(56U);
    msg.groupname.assign("CWNHOLSAYPZCVRLUQPCTFLPNWTLXFHOWGFLOACTARCBCIQBQDDIIBTGMXROSKDNNESYHJBXJFSRYMJGDZYFPAZUUKJEMBWCBSMVHFURJPNCSKTVZLYRELHTIDOHZUCWGSOOZU");
    msg.action = 86U;
    msg.grouplist.assign("GFHDKAUEQZGZUWVUXXOKOIUMEOSACGYUUMBOTALEMZNRINUIBGRPRWJSRZZTAXXLOVVFSIBKAZXPJLQZOYCJDWWNFZZNEMDFKYXTHZRCLNDPVIQKPFWPESCXJWXSQCIQPJVYMLDAFHUHJTMJBTKOMAKCHDMEYXVJGKVGEJDCILHCTRRDVIMSFDLVRYHWYULEVAQ");

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
    msg.setTimeStamp(0.100268749399);
    msg.setSource(16561U);
    msg.setSourceEntity(16U);
    msg.setDestination(44476U);
    msg.setDestinationEntity(12U);
    msg.groupname.assign("YBZPSYQQAHEVKEQOIWBHJZ");
    msg.action = 90U;
    msg.grouplist.assign("NVOEIOCJJTYWVGSSTHNEAWTQQJIHVAVFCDNLWUJUHCDSOJLSSFXXJIYQSKTZVHHNUZFMSAWPGKXNBXODBQEPDQWEXCKYMGRRRITFONVYZZEKZFXURTRDFKLYJIPXVHLBIKQAIZBHVBNOXFZILFDPAYGRWFZWMUADRROPKVOQDFPBSQNQKLBSM");

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
    msg.setTimeStamp(0.52804576693);
    msg.setSource(57957U);
    msg.setSourceEntity(172U);
    msg.setDestination(39011U);
    msg.setDestinationEntity(101U);
    msg.groupname.assign("ZEHLVHQWAZXFNPCNUBPVBENZMGPPLOSMJNVXMBVKPYFUYHVTZTRINDQOSPQYRLYEBGHCJKDKSJIAFJDILWLIGJEJNDHJVBRSTMYRSCGYKRIAWHPFOEKXYBWGBXGLUZJYPORTZLXFLEFRXMHSADEROFHAITMLYELSFPCVGUTQBSNDCTQVKNTUCDACWQWZZKCBMEAURSWIWU");
    msg.action = 249U;
    msg.grouplist.assign("ZXVXRGJHNMGOHXREBYWNZBTLLPIFENZPZRCJLFRJOVTQNLVSEKWUMTHDXGYXWLABJRWOOUEDNMSFCITBOQAQJGLRMTFTBMFPJAXDAEDAECDMEFQWLOETK");

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
    msg.setTimeStamp(0.176031568942);
    msg.setSource(35824U);
    msg.setSourceEntity(234U);
    msg.setDestination(42073U);
    msg.setDestinationEntity(209U);
    msg.value = 0.304957749856;
    msg.sys_src = 59160U;

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
    msg.setTimeStamp(0.943603043632);
    msg.setSource(63989U);
    msg.setSourceEntity(72U);
    msg.setDestination(27783U);
    msg.setDestinationEntity(160U);
    msg.value = 0.163610703804;
    msg.sys_src = 37630U;

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
    msg.setTimeStamp(0.735581168428);
    msg.setSource(5090U);
    msg.setSourceEntity(182U);
    msg.setDestination(6329U);
    msg.setDestinationEntity(132U);
    msg.value = 0.518856295026;
    msg.sys_src = 32465U;

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
    msg.setTimeStamp(0.8434596223);
    msg.setSource(1520U);
    msg.setSourceEntity(176U);
    msg.setDestination(31306U);
    msg.setDestinationEntity(214U);
    msg.value = 0.0849857614759;
    msg.units = 17U;

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
    msg.setTimeStamp(0.817652543846);
    msg.setSource(38391U);
    msg.setSourceEntity(96U);
    msg.setDestination(36193U);
    msg.setDestinationEntity(130U);
    msg.value = 0.961004462695;
    msg.units = 202U;

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
    msg.setTimeStamp(0.664296155753);
    msg.setSource(65288U);
    msg.setSourceEntity(75U);
    msg.setDestination(1454U);
    msg.setDestinationEntity(27U);
    msg.value = 0.490609905075;
    msg.units = 68U;

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
    msg.setTimeStamp(0.480535937788);
    msg.setSource(57593U);
    msg.setSourceEntity(230U);
    msg.setDestination(42673U);
    msg.setDestinationEntity(171U);
    msg.base_lat = 0.237848398765;
    msg.base_lon = 0.373398857962;
    msg.base_time = 0.0106384049211;

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
    msg.setTimeStamp(0.778592867058);
    msg.setSource(33603U);
    msg.setSourceEntity(149U);
    msg.setDestination(39837U);
    msg.setDestinationEntity(147U);
    msg.base_lat = 0.561125807098;
    msg.base_lon = 0.889499825878;
    msg.base_time = 0.0472219304863;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 15948U;
    tmp_msg_0.destination = 35488U;
    tmp_msg_0.timeout = 0.42661065196;
    IMC::UamTxFrame tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.seq = 58928U;
    tmp_tmp_msg_0_0.sys_dst.assign("VLRDLJWHVYORBTTKWAUEAYKAKMPOEQAJLYUXROWDATTNERDPQNDSJHQNOEUJRLNSQJPMGVMBNKHJKJNWTRJQCIETYQTZMFFHKRDKWODXBFXSYXAFZVIBCVXAOUTBILDQCITFQIGLPZGKGRMLFZAXOGCXY");
    tmp_tmp_msg_0_0.flags = 138U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {50, 90, 6, -107, -115, 114, 99, -66, 124, 106, 77, 55, 27, 21, -112, 90, -2, 101, -60, -55, -16, 69, 103, -7, 26, -112, 32, 60, 67, -8, 65, -78, 57, 25, 107, 3, 104, -66, -12, 122, -29, 56, -37, 70, 111, -18, -95, 18, -13, 15, -86, -122, -56, -99, -34, 100, -20, -3, 89, -112, -64, 1, -32, -24, 23, -119, 105, -19, -1, -37, 12, -128, -78, -108, -101, -16, -73, 53};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
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
    msg.setTimeStamp(0.342429369447);
    msg.setSource(17123U);
    msg.setSourceEntity(126U);
    msg.setDestination(29439U);
    msg.setDestinationEntity(50U);
    msg.base_lat = 0.0130111550657;
    msg.base_lon = 0.172623300336;
    msg.base_time = 0.953369744043;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 7153U;
    tmp_msg_0.destination = 5853U;
    tmp_msg_0.timeout = 0.794873767055;
    IMC::StopManeuver tmp_tmp_msg_0_0;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.337625989439);
    msg.setSource(56937U);
    msg.setSourceEntity(195U);
    msg.setDestination(23531U);
    msg.setDestinationEntity(69U);
    msg.base_lat = 0.538053206179;
    msg.base_lon = 0.0275260973991;
    msg.base_time = 0.481063058282;
    const char tmp_msg_0[] = {-119, 95, 29, -122, 34, 48, 13, -118, 75, 64, -10, -34, -72, 106, 109, -70, -71, -100, -11, -119, 52, 59, 55, 16, 49, 54, 117, -106, -92, -102, -81, -108, 53, 76, 80, 54, -16, 105, -55, -58, -55, 117, 52};
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
    msg.setTimeStamp(0.595012080238);
    msg.setSource(64443U);
    msg.setSourceEntity(52U);
    msg.setDestination(21815U);
    msg.setDestinationEntity(4U);
    msg.base_lat = 0.22511674828;
    msg.base_lon = 0.529899086201;
    msg.base_time = 0.665233758546;
    const char tmp_msg_0[] = {-19, -17, 15, -8, -23, 75, 33, -72, 57, -30, -31, -98, -119, 52, -47, 27, -117, -82, -54, -85, 50, -104, 119, -61, 115, 109, -44, 52, 22, -62, 115, 7, 78, -80, -62, 33, -124, 61, 105, -93, 63, 69, -59, -36, 103, 38, 114, -115, -72, 13, 121, 26, -104, 1, -29, 55, -126, 15, -94, -86, -72, 97, -105, -73, -67, -107, -56, 84, 37, 103, 12, -66, 78, 93, -16, 48, -107, -38, -90};
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
    msg.setTimeStamp(0.929694712017);
    msg.setSource(35269U);
    msg.setSourceEntity(251U);
    msg.setDestination(61091U);
    msg.setDestinationEntity(208U);
    msg.base_lat = 0.927584199978;
    msg.base_lon = 0.159335518759;
    msg.base_time = 0.769127124534;
    const char tmp_msg_0[] = {122, 115, 2, 32, -97, 82, -38, -16, 4, -128, 98, -61, 47, -90, -116, -5, -62, -51, 34, 47, 29, -98, 84, 61, 26, -53, 94};
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
    msg.setTimeStamp(0.992338465666);
    msg.setSource(64833U);
    msg.setSourceEntity(100U);
    msg.setDestination(21163U);
    msg.setDestinationEntity(100U);
    msg.sys_id = 58460U;
    msg.priority = -79;
    msg.x = -12256;
    msg.y = 23271;
    msg.z = -24017;
    msg.t = 18178;
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.170852045444;
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
    msg.setTimeStamp(0.440061308968);
    msg.setSource(22183U);
    msg.setSourceEntity(241U);
    msg.setDestination(60855U);
    msg.setDestinationEntity(139U);
    msg.sys_id = 61770U;
    msg.priority = -7;
    msg.x = 7879;
    msg.y = 1642;
    msg.z = 11631;
    msg.t = 10230;
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 175U;
    tmp_msg_0.goal_id.assign("PQREYXDBXMUWBTFYKYHZBXXLTKSIIKYBJSHTCEKSLKVCNYAMEIEYWFIIKIL");
    tmp_msg_0.goal_xml.assign("FYKRYVFZZIMIPJGVUHSZSLHTXWNTHANSBSGPFVSEGOQCMRLEMOGKMNNLOORJMFBPXLSOTCPEAHVUCYOKZTLIVVCQXREZIZTCZDFQUHNHUKDJVPAIUKRNHEFAJEDNLACOHLGQTBCCWXRDESAWWAQERHRUBBEGYPZDFTDYURAZAIWXYTEFMJROQWPJPCICB");
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
    msg.setTimeStamp(0.499995324255);
    msg.setSource(9305U);
    msg.setSourceEntity(136U);
    msg.setDestination(38906U);
    msg.setDestinationEntity(229U);
    msg.sys_id = 7064U;
    msg.priority = 93;
    msg.x = -27718;
    msg.y = -24610;
    msg.z = -12151;
    msg.t = -32178;
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.978846965226;
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
    msg.setTimeStamp(0.533963032564);
    msg.setSource(40560U);
    msg.setSourceEntity(157U);
    msg.setDestination(21072U);
    msg.setDestinationEntity(242U);
    msg.req_id = 30643U;
    msg.type = 209U;
    msg.max_size = 34496U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.625293085331;
    tmp_msg_0.base_lon = 0.198061550302;
    tmp_msg_0.base_time = 0.448232344271;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 14772U;
    tmp_tmp_msg_0_0.destination = 2914U;
    tmp_tmp_msg_0_0.timeout = 0.0807490531612;
    IMC::RelativeWind tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.angle = 0.84551640214;
    tmp_tmp_tmp_msg_0_0_0.direction.assign("VQWHSDBOPRWHBTKLCFDKZTMOCIXMIKKWHSPLIXACXBSYVPC");
    tmp_tmp_tmp_msg_0_0_0.speed = 0.883083021113;
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
    msg.setTimeStamp(0.34432242169);
    msg.setSource(20165U);
    msg.setSourceEntity(78U);
    msg.setDestination(61473U);
    msg.setDestinationEntity(169U);
    msg.req_id = 62100U;
    msg.type = 174U;
    msg.max_size = 61743U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.174911372781;
    tmp_msg_0.base_lon = 0.228297010703;
    tmp_msg_0.base_time = 0.257434017989;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 51567U;
    tmp_tmp_msg_0_0.destination = 58811U;
    tmp_tmp_msg_0_0.timeout = 0.307666154975;
    IMC::Takeoff tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0436676960501;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.867606487523;
    tmp_tmp_tmp_msg_0_0_0.z = 0.985566013375;
    tmp_tmp_tmp_msg_0_0_0.z_units = 147U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.208727419783;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 30U;
    tmp_tmp_tmp_msg_0_0_0.takeoff_pitch = 0.72141320456;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("FMIZOOZLCTALUQDZVAYXBMBRASLRQBADHATQDFHUWZYIUATQGFPM");
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.458886024134);
    msg.setSource(47809U);
    msg.setSourceEntity(91U);
    msg.setDestination(17760U);
    msg.setDestinationEntity(81U);
    msg.req_id = 3417U;
    msg.type = 20U;
    msg.max_size = 54685U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.79215044495;
    tmp_msg_0.base_lon = 0.198756561688;
    tmp_msg_0.base_time = 0.375121645606;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 9236U;
    tmp_tmp_msg_0_0.priority = -37;
    tmp_tmp_msg_0_0.x = 22604;
    tmp_tmp_msg_0_0.y = 49;
    tmp_tmp_msg_0_0.z = -21376;
    tmp_tmp_msg_0_0.t = 13984;
    IMC::Temperature tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.273041124456;
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
    msg.setTimeStamp(0.699000069989);
    msg.setSource(43884U);
    msg.setSourceEntity(128U);
    msg.setDestination(26835U);
    msg.setDestinationEntity(233U);
    msg.original_source = 35884U;
    msg.destination = 48520U;
    msg.timeout = 0.518352892078;
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 23U;
    tmp_msg_0.value = 212U;
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
    msg.setTimeStamp(0.364590104022);
    msg.setSource(11443U);
    msg.setSourceEntity(229U);
    msg.setDestination(29663U);
    msg.setDestinationEntity(22U);
    msg.original_source = 50241U;
    msg.destination = 47963U;
    msg.timeout = 0.481272335499;
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.201564425253;
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
    msg.setTimeStamp(0.158813400813);
    msg.setSource(40818U);
    msg.setSourceEntity(181U);
    msg.setDestination(49949U);
    msg.setDestinationEntity(182U);
    msg.original_source = 7715U;
    msg.destination = 58175U;
    msg.timeout = 0.735291378741;
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.710887463271;
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
    msg.setTimeStamp(0.0534348988686);
    msg.setSource(61590U);
    msg.setSourceEntity(227U);
    msg.setDestination(53639U);
    msg.setDestinationEntity(191U);
    msg.type = 119U;
    msg.comm_interface = 28657U;
    msg.model = 18228U;
    msg.list.assign("JWXUZQDGBVNQRFSNTYABPRYIRHTCMEBDTXJBXQHSLZCWCIUSTVYPYAVCTKENWXIAVTYFNIMCFKEBEGDARBNNZMWOGLVSEWDVFKAJSGVPLAJYDOWVIUZTZOHWOCQPZYWXNCEJDMFDEMPXNEOFAJAVZRSLIJTFXOUKGGUMDJJYWGFVMQHRNMUOHUDBNIORPZAGXQPIKTWCKQJHRUHKSGHQYEQBOLFSBCKUZOPTQGCASBMPXLFIKIDRHMYLUXLP");

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
    msg.setTimeStamp(0.0462568884426);
    msg.setSource(25130U);
    msg.setSourceEntity(237U);
    msg.setDestination(55114U);
    msg.setDestinationEntity(37U);
    msg.type = 26U;
    msg.comm_interface = 13424U;
    msg.model = 41733U;
    msg.list.assign("NMLONSGFHOPFHSJXNAFYOSSUBYBARDWFADAPBMCMETQKSQIIVPQUJBFMXZTGKLICZRJRBJJABGGHIDKWLRKGLCFGWUEPKWETUZPREVWAOZNYH");

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
    msg.setTimeStamp(0.583880112672);
    msg.setSource(38716U);
    msg.setSourceEntity(153U);
    msg.setDestination(24543U);
    msg.setDestinationEntity(171U);
    msg.type = 33U;
    msg.comm_interface = 47854U;
    msg.model = 8933U;
    msg.list.assign("IISZGSYVEKHYTCXHGFDWJHVEICAGKFQBUNSOIZNFLZYGHSNWCJGACRDWTAQDWNUMQXJEGPKDLUOJKTVNUMRUHMQMUEMAJULYWIPPXPTRQKZBBZBQJCWEUQDRIFCSVUZORGMIPDXFXCJWCSYQFMZTLARBFEIFHDLAOTHLPJABMYDXOOBZXVNCQPODAWEVQROBPTAXVWEHGGENTZUFRYNLVTK");

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
    msg.setTimeStamp(0.112609197341);
    msg.setSource(31990U);
    msg.setSourceEntity(190U);
    msg.setDestination(17383U);
    msg.setDestinationEntity(80U);
    msg.type = 145U;
    msg.req_id = 3152822307U;
    msg.ttl = 54705U;
    msg.code = 22U;
    msg.destination.assign("BZPQCCLMUEMYUOLZJESESXDHJHVYLNRERPASZYZVGRMFIHXTBYVWCWKAFIVZJUDOROYCRVJUYQMHLNHZBSJTLHHNXXJYTPTOBNIWQFOMGWJGPEAIGWDAEXBBVNKCQYHVMDTNARZTDULEFHUAMKDFDVSYZAXLEFQWRKRVGXONGZGPFOJQDBSODTIOFTPCCPUTXIKFQWYURLPIWGWFXKQPICDENCBJUNOX");
    msg.source.assign("PTNXUAETLYQZUNWADNFKEDMOKNKEVTNJXSPXJKDFAFQYYOHRKALCFNTDFNEIUZGIJGJHHJQNZQCFAIOOGZQVUVRJSDPAYETUWBUAOXPYRBARBMZBEEZBTTYMDQJGIRLKQKUSPYHMHCRVWSWIWPXMHKCKBDETXGYMIQGFVDPOPTJHHMYXQDWRCYZWMRLGDXPOLSLCGCOJBVLRLSFFSENPUXLEHGSVQWWBOLMIICVIXVCSTIHSGUBAFJMZ");
    msg.acknowledge = 30U;
    msg.status = 146U;
    const char tmp_msg_0[] = {108, 91, 64, -21, 51, -35, 34, 55, -104, -19, -55, 120};
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
    msg.setTimeStamp(0.96131571871);
    msg.setSource(24904U);
    msg.setSourceEntity(143U);
    msg.setDestination(29783U);
    msg.setDestinationEntity(110U);
    msg.type = 74U;
    msg.req_id = 204690749U;
    msg.ttl = 36885U;
    msg.code = 200U;
    msg.destination.assign("KXTJYKIZXOFPVHWEPNLNHNKYGHTYCWARGUJ");
    msg.source.assign("AUGVAZWIPQZEWCUKBGPZGJWINEXRYIQSBXEHLESAPPOMOXKLMDIGVACJGHQDEDCKNXFSTTUNMDOSMAZTNNLCBPJWQCTSKQVKLRLRFBTLHHZEVYMPHWOUMYHKWEKYDNASUMTSOFYQXFRTCDJXKDNEZIYGOMVKCEVCBMSUJQRZYFFMYSPHRAHIPBTXKQNWUVVWYSHZIFOITWHQXJAIVLO");
    msg.acknowledge = 170U;
    msg.status = 162U;
    const char tmp_msg_0[] = {-33, 38, -110, -32, -24, -46, -70, -126, -111, 109, -112, -32, 81, -57, 55, -30, 32, 119, 105, 93, 95, -70, 37, -64, -70, -47, -128, 96, -28, 92, -7, -97, -69, -117, -114, 20, -27, 93, 126, 65, -64, -48, -99, -40, -115, 48, -41, -89, -124, -104, 47, -13, -50, 30, -41, -12, -122, 123, 39, -55, 70, 16, 62, 43, 11, 87, 83, 45, -61, 102, -16, -22, 33, -28, 12, -15, 66, -124, 112, -40, -41, 91, 8, -63, -80, 19, -30, -122, -60, -105, 110, -128, 89, 4, -1, 115, 12, -62, -33, 77, -31, -50, 17, -45, -109, -73, 94, 81, -100, 34, 14, -90, -13, 63, 66, 95, 28, -64, 62, -54, -68, 66, -84, -78, 55, -37, -31, 70, 116, -125, -21, -39, -106, -27, -99, 2, 32, -54, -76, -105, -9, -107, 21, 21, -5, 51, -91, -91, 115, 21, 66, -29, -77, 52, 88, 11, 123, 40, -7, 63, 112, 13, -41, -57, 123, 45, 38, -57, 44, -28, -74, -62, -106, -3, 20, -78, 33, -72, 57, 71, 108, -62, 16, -62, -20, -68, 24, 43, 50, -38, -21, -81, -117, 33, 34, -55, 111, 61, -121, 122, 35, 58, -49, -105, -98, 109, -47, 9, 30, -103};
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
    msg.setTimeStamp(0.353952385215);
    msg.setSource(55590U);
    msg.setSourceEntity(134U);
    msg.setDestination(58495U);
    msg.setDestinationEntity(159U);
    msg.type = 29U;
    msg.req_id = 1703731703U;
    msg.ttl = 44921U;
    msg.code = 11U;
    msg.destination.assign("DTXMPWHAZNFOGUOFKMBZUQUFLUCIDNLEPJNLPQIOBVLONADPASNGYRTVMFLVSIWVTXMJEDQARVIDEIURNFHGRWBOBYHFUXEDYOMGESSQWHVRLJREJAWKTPMXBZYFXYX");
    msg.source.assign("KMIFOTLQAWELPQBEVNOSDTUZGVDHHKIJTFNPNBINBPJZOLMPRGHDLIDJNSUHZQRMNOWZCIAENRHDNBKEAYJDLMAZPAUXTACPJOKXFFKHDQGKYTUTYKPZPJZOYWAZGIXUYHGMJABXBYUGMWCOKNXLSPZFQSRQMYVJCALFEVUTSMBQNYTSCWBWQCHCYXISCGHEBDROSSAFVELRXECDMUWRUQFWSOOVXKTIC");
    msg.acknowledge = 51U;
    msg.status = 184U;
    const char tmp_msg_0[] = {-37, 45, 83, -29, -107, 96, 98, 73, -59, 119, 36, 45, 35, -126, -79, -49, 11, 118, -46, -79, 15, -55, 90, -71, 91, -89, -23, 68, 116, 5, -16, 119, -76, -43, 99, -62, 43, 22, 6, -32, -117, 14, 111, -86, -67, -93, -47, -5, 95, -92, 91, -23, -7, 89, -24, 20, 18, -121, 45, 64, -101, -121, 72, 58, 109, 89, 73, 54, 38, 99, -53, 5, -89, -112, -25, -65, -27, 30, -64, 91, 9, -112, 106, 115, -106, -30, -3, -83, -30, -12, -122, 69, 1, -71, 102, 93, 1, 39, -18, -48, -43, 122, 38, 91, 56, -121, -72, -118, 73, -32, 12, -68, 28, 111, -114, -106, -91, 103, -39, -89, -124, 91, 8, 15, 87, 35, -111, 8, -2, -69, 15, -13, 96, -60, 27, 5, 61, 55, -36, -17, -126, -82, -59, 100, 115, -56, 61, 96, 91, -42, 111, 42, -52, -107, -36, -53, 6, -88, -80, 124, -56, -118, 34, 55, 23, -13, -59, -23, -8, -102, -105, -83, -3, 124, 100, -49, -85, 58, 34, -57, -37, 120, -55, 123, -6, 83, -79, -93, 15, -19, 96, -57, 47, 126, -66, 10, 97, -46, -102, 3, -19, 62, -95, 58, -119};
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
    msg.setTimeStamp(0.13734098762);
    msg.setSource(3443U);
    msg.setSourceEntity(11U);
    msg.setDestination(16018U);
    msg.setDestinationEntity(146U);
    msg.id = 170U;
    msg.range = 0.0125712749241;

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
    msg.setTimeStamp(0.454252103726);
    msg.setSource(62912U);
    msg.setSourceEntity(47U);
    msg.setDestination(52175U);
    msg.setDestinationEntity(165U);
    msg.id = 0U;
    msg.range = 0.439496424575;

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
    msg.setTimeStamp(0.353563296231);
    msg.setSource(60106U);
    msg.setSourceEntity(254U);
    msg.setDestination(47077U);
    msg.setDestinationEntity(71U);
    msg.id = 104U;
    msg.range = 0.946813688826;

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
    msg.setTimeStamp(0.432830265168);
    msg.setSource(57963U);
    msg.setSourceEntity(132U);
    msg.setDestination(14158U);
    msg.setDestinationEntity(130U);
    msg.beacon.assign("CWPJZMSNVEVCAISFZPYHMVJRKAHAURHVNSMZILDACFLHUVDUZQNWZMQXWAYTFEBRZFAWEXDXCZSEEWOHBTEOXGIOENGGUTVNRTKOAQB");
    msg.lat = 0.183398256474;
    msg.lon = 0.404893356161;
    msg.depth = 0.939522905347;
    msg.query_channel = 179U;
    msg.reply_channel = 195U;
    msg.transponder_delay = 40U;

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
    msg.setTimeStamp(0.405664821085);
    msg.setSource(37126U);
    msg.setSourceEntity(128U);
    msg.setDestination(4992U);
    msg.setDestinationEntity(238U);
    msg.beacon.assign("BZZZAGRLYAJQBIWOWMSSOKDZOICBYGFWQAPLQFCWIVNQCTXERMLFADFFNBYMGBEGKAHJIPQHDUVEOTJRCMJDKUNWUXNYJYYPACXHUVVORECNVPDKQFMZXRSWXSCTKMLEUEJTZVSTRGDBHKDUSQRXFHXAOJQBVDHCNLYEHXDGWPHLPQLFEBNMANTGIWBPUUVKRZEIQGGPZCTLUVZMSPYOSGFRWBATZCOTKIXXHJFANKILIPNEDJYKV");
    msg.lat = 0.406010804324;
    msg.lon = 0.440028927341;
    msg.depth = 0.0768109809082;
    msg.query_channel = 158U;
    msg.reply_channel = 168U;
    msg.transponder_delay = 71U;

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
    msg.setTimeStamp(0.548175258786);
    msg.setSource(33926U);
    msg.setSourceEntity(228U);
    msg.setDestination(44692U);
    msg.setDestinationEntity(218U);
    msg.beacon.assign("RZOSQGIXXWCCKFCOYXSHEEXDKOUJATNPVTGDDYOWHASSRPMXXOYHECUTVKVVDUCQBYNBNAWLBJBRRGKEAMLNJRMZSIAOFOSHZZIXPFKFYRINOEPFMEKHUWWCKFGMEQCJVHLJEMSINBMTVYRBUYWGHTQAIUCXDQLWTRVWVSIZAHGN");
    msg.lat = 0.51618338872;
    msg.lon = 0.803098743346;
    msg.depth = 0.0645075358059;
    msg.query_channel = 23U;
    msg.reply_channel = 113U;
    msg.transponder_delay = 216U;

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
    msg.setTimeStamp(0.512477223559);
    msg.setSource(39194U);
    msg.setSourceEntity(88U);
    msg.setDestination(64419U);
    msg.setDestinationEntity(187U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.844813058575);
    msg.setSource(11609U);
    msg.setSourceEntity(163U);
    msg.setDestination(9697U);
    msg.setDestinationEntity(168U);
    msg.op = 224U;

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
    msg.setTimeStamp(0.646858814889);
    msg.setSource(58560U);
    msg.setSourceEntity(92U);
    msg.setDestination(32952U);
    msg.setDestinationEntity(77U);
    msg.op = 222U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SXJMNEMWNHOLIEGVYOSOXVHJPBIXVEAZDHVAMGSQEXJMVTCPCLFOZHNWQQDOGJBGPGAXTRUFAXRZBBZDQPJWYOSBFINJUGCLDWPAVNUJMHRYBBPCGLZLXFVITHSKRCAGLUVOREVLW");
    tmp_msg_0.lat = 0.69545229646;
    tmp_msg_0.lon = 0.128998412196;
    tmp_msg_0.depth = 0.307216782825;
    tmp_msg_0.query_channel = 88U;
    tmp_msg_0.reply_channel = 242U;
    tmp_msg_0.transponder_delay = 244U;
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
    msg.setTimeStamp(0.702493641937);
    msg.setSource(21354U);
    msg.setSourceEntity(17U);
    msg.setDestination(49908U);
    msg.setDestinationEntity(167U);
    IMC::TCPRequest tmp_msg_0;
    tmp_msg_0.req_id = 8098U;
    tmp_msg_0.destination.assign("GHLHXXZSKCTAFRWJJQLAQYWDCBMJUQEKFQPIQTBMMWVYAHFEGGNMVJIOXEWEVSPKBRFEJHASHFQOPJZYUXKOXOIBHNIPDCVCJGTRXVXRDOIPMXICTNBNRBRMTUUCKEAUYOENVSYVUBGSKVKZUFHOJPPAARZLAEXBJAICMHBVLOLLENRIDZFDCPTNTYIHOUQLYXMSZZDG");
    tmp_msg_0.timeout = 0.937232823385;
    IMC::Brake tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 73U;
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.744457895692);
    msg.setSource(13278U);
    msg.setSourceEntity(217U);
    msg.setDestination(5071U);
    msg.setDestinationEntity(130U);
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.621411527773;
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
    msg.setTimeStamp(0.210442930797);
    msg.setSource(23481U);
    msg.setSourceEntity(64U);
    msg.setDestination(11059U);
    msg.setDestinationEntity(248U);
    IMC::QueryEntityActivationState tmp_msg_0;
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
    msg.setTimeStamp(0.188107543286);
    msg.setSource(8536U);
    msg.setSourceEntity(248U);
    msg.setDestination(60498U);
    msg.setDestinationEntity(132U);
    msg.op = 140U;
    msg.system.assign("CFZCABIZBLEGYKXPKVOOQLTGRZSVDJXSNGAEUPTYESIWQRHQLFPRSSCYMQLFLQNSWKJYYJGFOCNVDTJPHRIJATIOIBDMWPQUZEZNMWKCZABUVAPWNIJBOEJKCPXYTSMOASMXZXEFLAJERKCBJNHONJHQNNXIDXFLUYYBRZSTVTCL");
    msg.range = 0.837494915366;
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.991239299535;
    tmp_msg_0.x = 0.972180414015;
    tmp_msg_0.y = 0.757333758987;
    tmp_msg_0.z = 0.618476129752;
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
    msg.setTimeStamp(0.582028466957);
    msg.setSource(21343U);
    msg.setSourceEntity(63U);
    msg.setDestination(41036U);
    msg.setDestinationEntity(36U);
    msg.op = 155U;
    msg.system.assign("ZLRYSAQMKDKZUYBBAQQDFWAIDIWIEQWHPXCLKUUIOBKTVPBVQHOVCNJKFYTBPHRJMOHDHDMYJOMZJBQFENUREXTLNFLNZQFCMSIHADCBCESXRCXYNIRDGCUWADEETUQOPGONSRIZUFHXOGCITYGRYLAFZLHJKVNJIKEVTUBDUVSGXXVBEPINUFACZXYMNFWTGWMQKHWVJPJKMVSWEXALPTLJJWRP");
    msg.range = 0.280763754457;
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.268057198845;
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
    msg.setTimeStamp(0.711474923777);
    msg.setSource(61707U);
    msg.setSourceEntity(56U);
    msg.setDestination(41245U);
    msg.setDestinationEntity(63U);
    msg.op = 219U;
    msg.system.assign("UACGPJMTOCADSOZYMQUSBULJIQXJPWBFSRFFDPWVYEVSARNNKHMX");
    msg.range = 0.0514927386549;
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("ETTPWPHRJLNDXUKKKPTQXMMORYFSB");
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
    msg.setTimeStamp(0.812537227218);
    msg.setSource(10572U);
    msg.setSourceEntity(30U);
    msg.setDestination(27454U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.20624935571);
    msg.setSource(6221U);
    msg.setSourceEntity(100U);
    msg.setDestination(11094U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.702484819167);
    msg.setSource(10370U);
    msg.setSourceEntity(185U);
    msg.setDestination(18354U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.260157858412);
    msg.setSource(20188U);
    msg.setSourceEntity(128U);
    msg.setDestination(13925U);
    msg.setDestinationEntity(88U);
    msg.list.assign("LQAOFWDCMBXIKJHMMDGKOAOSDLSFVEKKUQJLGYUDBNVTXHYAQOTXRNSXSUBUNCZNJXED");

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
    msg.setTimeStamp(0.921516599747);
    msg.setSource(25563U);
    msg.setSourceEntity(102U);
    msg.setDestination(13568U);
    msg.setDestinationEntity(37U);
    msg.list.assign("BDKDGGJGWVLBTWUIMCPASBIPONXHHFRTFPSWMXGFVEMCHYNWNZXSTRKAITTLMQUSIOZEUNDDGEAQBWVIXDKT");

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
    msg.setTimeStamp(0.365084551999);
    msg.setSource(24807U);
    msg.setSourceEntity(99U);
    msg.setDestination(33333U);
    msg.setDestinationEntity(0U);
    msg.list.assign("HOWGFDEXMFTDEXUIXGVDVARVRKNULIYCMRJQZTMCTWAHAJOXOLHXZMSQHJGTQFAUBAAWAQBUIEIWSRUTBMQNFKNKHNQKICYPLMXLPP");

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
    msg.setTimeStamp(0.614713771349);
    msg.setSource(30722U);
    msg.setSourceEntity(230U);
    msg.setDestination(39753U);
    msg.setDestinationEntity(152U);
    msg.peer.assign("UIXQXPFJNZXQITNOXSOTJJIBIURFUERDRHUKLGWXKFTGSDQKRWJGTCJPLXQLNLUGXVEEPTINCBBLKWZVNMDSGBCYKYRVFNYPPVCFOFDAJMVTVMSEYVZZFCGLWPOUIFGJAOQECYDZTCIXIPOQSNZWHVJNQNLERZWHDUMYQVZPLZBROEFXNABZKMXGDHMKHEHKSAMADISRALHKEAWKRUMGBFQ");
    msg.rssi = 0.791244959268;
    msg.integrity = 47901U;

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
    msg.setTimeStamp(0.0801843295097);
    msg.setSource(63648U);
    msg.setSourceEntity(6U);
    msg.setDestination(33390U);
    msg.setDestinationEntity(13U);
    msg.peer.assign("TTFNOEOZUNDXYIOHINSBMYJRBCUOVOKKCSVECHHOSPEQUABREYCDKTHUOWYJRRWCWIGGZDQLIRJQGNHZJQUVXSBPMTXKVHLAXPUSCSMGVYCDODMWJVFZVYEXRXAMHYAOPAZZKGIPZWJQBQRYLLGILXLEGBQFTEDDXKCBPZLELPWVBITUJETLHCKFFFNWFSMQUBXJWZKMVTIRPBZAKJANF");
    msg.rssi = 0.255251878117;
    msg.integrity = 5999U;

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
    msg.setTimeStamp(0.136555445971);
    msg.setSource(35967U);
    msg.setSourceEntity(225U);
    msg.setDestination(16610U);
    msg.setDestinationEntity(82U);
    msg.peer.assign("FFZPBVJOSEYVTXVHLRSZQCEGYOLUZJGCBMZGGKQJIGPVINJHGKPYDVOULWHATTNHQXJXVDMRMETOZSXALYPMUBHJFLKOVKFKSNRMAABOPBWQBHUMNOIBCXGEWAQEPKOMBVQSCRDGMSENCYFALNZHQWSSGTXKRHIYAADDWEEQUUYSEIDFPSKLWJMRRITYIJJOTDNCTZRJXCRBKLABFCURWUPWLZE");
    msg.rssi = 0.169155224441;
    msg.integrity = 5222U;

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
    msg.setTimeStamp(0.93906858055);
    msg.setSource(27152U);
    msg.setSourceEntity(201U);
    msg.setDestination(45635U);
    msg.setDestinationEntity(177U);
    msg.req_id = 34097U;
    msg.destination.assign("WKBRZPTXLMQUMGFCKGRZDTPWSDXXILSCZDQUJMGEHCXTVDRDGYWXCWHGEVJZTAPEANHPNTOOFWAMIFYO");
    msg.timeout = 0.913300674821;
    msg.range = 0.245545368379;
    msg.type = 4U;
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 818792265U;
    tmp_msg_0.lat = 0.248931429869;
    tmp_msg_0.lon = 0.891495719305;
    tmp_msg_0.height_ell = 0.56078928365;
    tmp_msg_0.height_sea = 0.173405727098;
    tmp_msg_0.hacc = 0.576076753066;
    tmp_msg_0.vacc = 0.239702428079;
    tmp_msg_0.vel_n = 0.728810746347;
    tmp_msg_0.vel_e = 0.66050970541;
    tmp_msg_0.vel_d = 0.0302235409349;
    tmp_msg_0.speed = 0.550223823298;
    tmp_msg_0.gspeed = 0.075666055805;
    tmp_msg_0.heading = 0.7622370345;
    tmp_msg_0.sacc = 0.314274672963;
    tmp_msg_0.cacc = 0.616250390436;
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
    msg.setTimeStamp(0.414437932732);
    msg.setSource(59401U);
    msg.setSourceEntity(89U);
    msg.setDestination(13157U);
    msg.setDestinationEntity(90U);
    msg.req_id = 11380U;
    msg.destination.assign("YFGFSWYVJALOVTAZZQAASECFNYNVIRRSCEWLYPDTJUBWYORYQRIWVFQDPJDMPOMBQQUQMKRBZGPZDISWKSWRGNKKVPEMFWHLLYDGOSBLOHTHLPCLNSFKLQFVUHFQBNMUXRQPPGEIREAUOZFHNRHDUXBISBNOJDCATKTXHMGXUBPJIHTEHDGGOWTUXOCTFELJORXCTKJZGBMVMYCIZSPNCMWEEISUTCDJBVVJUXAXNQZXKAVNDWKLJH");
    msg.timeout = 0.496888449566;
    msg.range = 0.00182078068564;
    msg.type = 157U;
    IMC::Chlorophyll tmp_msg_0;
    tmp_msg_0.value = 0.852177919707;
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
    msg.setTimeStamp(0.112172839159);
    msg.setSource(23576U);
    msg.setSourceEntity(113U);
    msg.setDestination(777U);
    msg.setDestinationEntity(63U);
    msg.req_id = 40419U;
    msg.destination.assign("BUCDGVIQYAJFBNPGCDBDQWLVRSRCLOIVNQUETPZOVFPRPKSAAIZYNDYRHRQGPJXSAFJTKWOKJESYNJLMGHBQDMFJWVIXCZGEFAZRYBQJEYVFOZLNXNSZPISFJKHKRQRVGZSLBGZKGWWOQUMUDKO");
    msg.timeout = 0.792071216674;
    msg.range = 0.239589578548;
    msg.type = 133U;
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("LMUONTWJEKVZCHMNZBEFZTGSKPWGXGQUQJUGRCSDWHVTDBFKQCYCUQAXGWJSVMJRRHDSZBFXISVIJROHGSRDQQNYEUWUBCWAPMGQNDLMBKLEETLVXCNGX");
    tmp_msg_0.feature_type = 68U;
    tmp_msg_0.rgb_red = 158U;
    tmp_msg_0.rgb_green = 170U;
    tmp_msg_0.rgb_blue = 146U;
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
    msg.setTimeStamp(0.202392192587);
    msg.setSource(343U);
    msg.setSourceEntity(89U);
    msg.setDestination(31697U);
    msg.setDestinationEntity(54U);
    msg.req_id = 39235U;
    msg.type = 252U;
    msg.status = 243U;
    msg.info.assign("NLBLQKIAPCJJERNTHPJNSJEBYLLHS");
    msg.range = 0.497688189672;

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
    msg.setTimeStamp(0.119294237869);
    msg.setSource(56442U);
    msg.setSourceEntity(94U);
    msg.setDestination(4227U);
    msg.setDestinationEntity(88U);
    msg.req_id = 4156U;
    msg.type = 152U;
    msg.status = 163U;
    msg.info.assign("IFHJSMDWOVVZPRIURETMBVWKZAQYBVQKDROFULTOSFJNYXSWFBIETOSMQLZLNHAXHHPSHYYHTKSIIDWEODGMOEHGRMOYGZRONKUGYXTCUNPJTRLX");
    msg.range = 0.755746797343;

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
    msg.setTimeStamp(0.249323685094);
    msg.setSource(34868U);
    msg.setSourceEntity(140U);
    msg.setDestination(42574U);
    msg.setDestinationEntity(30U);
    msg.req_id = 5089U;
    msg.type = 0U;
    msg.status = 200U;
    msg.info.assign("DDSJOVGCXUMYYCLHIKDDQYQ");
    msg.range = 0.539338032327;

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
    msg.setTimeStamp(0.13440221847);
    msg.setSource(31718U);
    msg.setSourceEntity(124U);
    msg.setDestination(9226U);
    msg.setDestinationEntity(70U);
    msg.value = 10456;

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
    msg.setTimeStamp(0.437201240202);
    msg.setSource(38369U);
    msg.setSourceEntity(69U);
    msg.setDestination(735U);
    msg.setDestinationEntity(204U);
    msg.value = 31225;

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
    msg.setTimeStamp(0.676466768549);
    msg.setSource(47710U);
    msg.setSourceEntity(191U);
    msg.setDestination(36436U);
    msg.setDestinationEntity(37U);
    msg.value = 3280;

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
    msg.setTimeStamp(0.0179758055552);
    msg.setSource(244U);
    msg.setSourceEntity(118U);
    msg.setDestination(57719U);
    msg.setDestinationEntity(174U);
    msg.value = 0.784740574132;

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
    msg.setTimeStamp(0.0993332155595);
    msg.setSource(48078U);
    msg.setSourceEntity(17U);
    msg.setDestination(2010U);
    msg.setDestinationEntity(124U);
    msg.value = 0.914207120489;

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
    msg.setTimeStamp(0.924204396507);
    msg.setSource(24041U);
    msg.setSourceEntity(78U);
    msg.setDestination(34951U);
    msg.setDestinationEntity(146U);
    msg.value = 0.742818240941;

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
    msg.setTimeStamp(0.278470943086);
    msg.setSource(24710U);
    msg.setSourceEntity(178U);
    msg.setDestination(60347U);
    msg.setDestinationEntity(160U);
    msg.value = 0.765785440515;

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
    msg.setTimeStamp(0.212770224034);
    msg.setSource(14039U);
    msg.setSourceEntity(78U);
    msg.setDestination(45362U);
    msg.setDestinationEntity(104U);
    msg.value = 0.734625991158;

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
    msg.setTimeStamp(0.836469876415);
    msg.setSource(35284U);
    msg.setSourceEntity(117U);
    msg.setDestination(63781U);
    msg.setDestinationEntity(59U);
    msg.value = 0.433831220431;

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
    msg.setTimeStamp(0.845979566728);
    msg.setSource(30082U);
    msg.setSourceEntity(194U);
    msg.setDestination(46583U);
    msg.setDestinationEntity(1U);
    msg.validity = 46756U;
    msg.type = 199U;
    msg.utc_year = 36992U;
    msg.utc_month = 125U;
    msg.utc_day = 193U;
    msg.utc_time = 0.617210438924;
    msg.lat = 0.235987775179;
    msg.lon = 0.65564321201;
    msg.height = 0.212392152262;
    msg.satellites = 131U;
    msg.cog = 0.649989641668;
    msg.sog = 0.984760309947;
    msg.hdop = 0.641356935914;
    msg.vdop = 0.681743131126;
    msg.hacc = 0.081655143933;
    msg.vacc = 0.757526273911;

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
    msg.setTimeStamp(0.874858897028);
    msg.setSource(31953U);
    msg.setSourceEntity(250U);
    msg.setDestination(38086U);
    msg.setDestinationEntity(145U);
    msg.validity = 46048U;
    msg.type = 20U;
    msg.utc_year = 50324U;
    msg.utc_month = 11U;
    msg.utc_day = 188U;
    msg.utc_time = 0.785019687507;
    msg.lat = 0.326228211626;
    msg.lon = 0.671009938032;
    msg.height = 0.433336372628;
    msg.satellites = 101U;
    msg.cog = 0.13832644283;
    msg.sog = 0.453946031656;
    msg.hdop = 0.892384383857;
    msg.vdop = 0.805322797643;
    msg.hacc = 0.474418426944;
    msg.vacc = 0.709703895525;

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
    msg.setTimeStamp(0.992025199859);
    msg.setSource(25048U);
    msg.setSourceEntity(220U);
    msg.setDestination(53569U);
    msg.setDestinationEntity(170U);
    msg.validity = 6500U;
    msg.type = 44U;
    msg.utc_year = 22410U;
    msg.utc_month = 193U;
    msg.utc_day = 219U;
    msg.utc_time = 0.09079712134;
    msg.lat = 0.984310281668;
    msg.lon = 0.0610270027492;
    msg.height = 0.0193694127788;
    msg.satellites = 213U;
    msg.cog = 0.271845663825;
    msg.sog = 0.939225477965;
    msg.hdop = 0.625253634143;
    msg.vdop = 0.198959865409;
    msg.hacc = 0.54827168303;
    msg.vacc = 0.517899536459;

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
    msg.setTimeStamp(0.864639971383);
    msg.setSource(19008U);
    msg.setSourceEntity(82U);
    msg.setDestination(6189U);
    msg.setDestinationEntity(131U);
    msg.time = 0.966833483609;
    msg.phi = 0.468460112947;
    msg.theta = 0.700300592122;
    msg.psi = 0.623049007871;
    msg.psi_magnetic = 0.749414752489;

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
    msg.setTimeStamp(0.848421706136);
    msg.setSource(6449U);
    msg.setSourceEntity(234U);
    msg.setDestination(5075U);
    msg.setDestinationEntity(6U);
    msg.time = 0.807088702706;
    msg.phi = 0.976131672725;
    msg.theta = 0.426930609521;
    msg.psi = 0.293188132013;
    msg.psi_magnetic = 0.398871267963;

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
    msg.setTimeStamp(0.421666100915);
    msg.setSource(1204U);
    msg.setSourceEntity(118U);
    msg.setDestination(64050U);
    msg.setDestinationEntity(47U);
    msg.time = 0.603090979609;
    msg.phi = 0.0043731818126;
    msg.theta = 0.0922618336089;
    msg.psi = 0.541925908067;
    msg.psi_magnetic = 0.65935081966;

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
    msg.setTimeStamp(0.197460960658);
    msg.setSource(26307U);
    msg.setSourceEntity(67U);
    msg.setDestination(18175U);
    msg.setDestinationEntity(119U);
    msg.time = 0.85356369854;
    msg.x = 0.0485511704279;
    msg.y = 0.94376982096;
    msg.z = 0.670661994769;
    msg.timestep = 0.301543194137;

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
    msg.setTimeStamp(0.900601125891);
    msg.setSource(44557U);
    msg.setSourceEntity(171U);
    msg.setDestination(47982U);
    msg.setDestinationEntity(152U);
    msg.time = 0.795605881333;
    msg.x = 0.566268092245;
    msg.y = 0.59701551585;
    msg.z = 0.499733524317;
    msg.timestep = 0.835962264502;

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
    msg.setTimeStamp(0.160300077429);
    msg.setSource(41382U);
    msg.setSourceEntity(54U);
    msg.setDestination(4771U);
    msg.setDestinationEntity(70U);
    msg.time = 0.474289809095;
    msg.x = 0.154080979755;
    msg.y = 0.191725750627;
    msg.z = 0.431972906856;
    msg.timestep = 0.272559796182;

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
    msg.setTimeStamp(0.386046579066);
    msg.setSource(37525U);
    msg.setSourceEntity(78U);
    msg.setDestination(13140U);
    msg.setDestinationEntity(107U);
    msg.time = 0.794321708469;
    msg.x = 0.272206265482;
    msg.y = 0.949713126615;
    msg.z = 0.195539973257;

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
    msg.setTimeStamp(0.330955850106);
    msg.setSource(3505U);
    msg.setSourceEntity(120U);
    msg.setDestination(15918U);
    msg.setDestinationEntity(156U);
    msg.time = 0.889147841341;
    msg.x = 0.352400727209;
    msg.y = 0.232047403974;
    msg.z = 0.955995986307;

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
    msg.setTimeStamp(0.190849862282);
    msg.setSource(12717U);
    msg.setSourceEntity(111U);
    msg.setDestination(2157U);
    msg.setDestinationEntity(150U);
    msg.time = 0.104953746418;
    msg.x = 0.748932081023;
    msg.y = 0.886557167015;
    msg.z = 0.583364740937;

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
    msg.setTimeStamp(0.530755974106);
    msg.setSource(60295U);
    msg.setSourceEntity(8U);
    msg.setDestination(15767U);
    msg.setDestinationEntity(109U);
    msg.time = 0.532859651103;
    msg.x = 0.816824012042;
    msg.y = 0.522353737581;
    msg.z = 0.361711393843;

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
    msg.setTimeStamp(0.627994483018);
    msg.setSource(55497U);
    msg.setSourceEntity(145U);
    msg.setDestination(28U);
    msg.setDestinationEntity(86U);
    msg.time = 0.775771098023;
    msg.x = 0.648823043948;
    msg.y = 0.690993842099;
    msg.z = 0.91081301204;

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
    msg.setTimeStamp(0.0182220062092);
    msg.setSource(53694U);
    msg.setSourceEntity(177U);
    msg.setDestination(3542U);
    msg.setDestinationEntity(148U);
    msg.time = 0.208324048817;
    msg.x = 0.521799335902;
    msg.y = 0.898324938825;
    msg.z = 0.17133274435;

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
    msg.setTimeStamp(0.676542332449);
    msg.setSource(9563U);
    msg.setSourceEntity(38U);
    msg.setDestination(8640U);
    msg.setDestinationEntity(114U);
    msg.time = 0.979102681293;
    msg.x = 0.37980778682;
    msg.y = 0.0800814971497;
    msg.z = 0.392246313805;

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
    msg.setTimeStamp(0.515951362448);
    msg.setSource(52295U);
    msg.setSourceEntity(20U);
    msg.setDestination(22252U);
    msg.setDestinationEntity(71U);
    msg.time = 0.635899230736;
    msg.x = 0.767852999036;
    msg.y = 0.015749555799;
    msg.z = 0.124759670744;

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
    msg.setTimeStamp(0.353789887048);
    msg.setSource(33576U);
    msg.setSourceEntity(29U);
    msg.setDestination(1418U);
    msg.setDestinationEntity(228U);
    msg.time = 0.652825430906;
    msg.x = 0.279465298885;
    msg.y = 0.808349447548;
    msg.z = 0.0294847236728;

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
    msg.setTimeStamp(0.729883340853);
    msg.setSource(54581U);
    msg.setSourceEntity(5U);
    msg.setDestination(38890U);
    msg.setDestinationEntity(182U);
    msg.validity = 254U;
    msg.x = 0.643098355972;
    msg.y = 0.448620529048;
    msg.z = 0.691423460433;

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
    msg.setTimeStamp(0.212967976075);
    msg.setSource(65035U);
    msg.setSourceEntity(90U);
    msg.setDestination(35106U);
    msg.setDestinationEntity(34U);
    msg.validity = 151U;
    msg.x = 0.177188374389;
    msg.y = 0.675668183057;
    msg.z = 0.279424746266;

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
    msg.setTimeStamp(0.111177764759);
    msg.setSource(47436U);
    msg.setSourceEntity(3U);
    msg.setDestination(48130U);
    msg.setDestinationEntity(194U);
    msg.validity = 38U;
    msg.x = 0.364829686372;
    msg.y = 0.127783765692;
    msg.z = 0.0249952959081;

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
    msg.setTimeStamp(0.436064270547);
    msg.setSource(25123U);
    msg.setSourceEntity(144U);
    msg.setDestination(59846U);
    msg.setDestinationEntity(234U);
    msg.validity = 45U;
    msg.x = 0.14605259259;
    msg.y = 0.219206078061;
    msg.z = 0.429341676591;

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
    msg.setTimeStamp(0.638076412297);
    msg.setSource(17684U);
    msg.setSourceEntity(158U);
    msg.setDestination(4580U);
    msg.setDestinationEntity(29U);
    msg.validity = 58U;
    msg.x = 0.340923118736;
    msg.y = 0.447910700377;
    msg.z = 0.644593822951;

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
    msg.setTimeStamp(0.488349837656);
    msg.setSource(20039U);
    msg.setSourceEntity(99U);
    msg.setDestination(56412U);
    msg.setDestinationEntity(53U);
    msg.validity = 104U;
    msg.x = 0.275286496272;
    msg.y = 0.161505793287;
    msg.z = 0.746056234097;

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
    msg.setTimeStamp(0.980095326397);
    msg.setSource(61905U);
    msg.setSourceEntity(245U);
    msg.setDestination(3706U);
    msg.setDestinationEntity(186U);
    msg.time = 0.487179752072;
    msg.x = 0.0155797293771;
    msg.y = 0.614077979759;
    msg.z = 0.00413082324035;

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
    msg.setTimeStamp(0.966010848168);
    msg.setSource(39377U);
    msg.setSourceEntity(11U);
    msg.setDestination(20790U);
    msg.setDestinationEntity(150U);
    msg.time = 0.840524531512;
    msg.x = 0.358746058829;
    msg.y = 0.400849286947;
    msg.z = 0.518772807996;

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
    msg.setTimeStamp(0.554691687378);
    msg.setSource(60519U);
    msg.setSourceEntity(73U);
    msg.setDestination(43648U);
    msg.setDestinationEntity(80U);
    msg.time = 0.0233641943515;
    msg.x = 0.115488712302;
    msg.y = 0.314649924838;
    msg.z = 0.458836890017;

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
    msg.setTimeStamp(0.858351372467);
    msg.setSource(3561U);
    msg.setSourceEntity(106U);
    msg.setDestination(19613U);
    msg.setDestinationEntity(192U);
    msg.validity = 205U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.852784220408;
    tmp_msg_0.beam_height = 0.939436530678;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.530833034343;

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
    msg.setTimeStamp(0.781763357724);
    msg.setSource(62432U);
    msg.setSourceEntity(100U);
    msg.setDestination(28438U);
    msg.setDestinationEntity(191U);
    msg.validity = 129U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.269340351572;
    tmp_msg_0.y = 0.691779523193;
    tmp_msg_0.z = 0.310164902178;
    tmp_msg_0.phi = 0.996964731841;
    tmp_msg_0.theta = 0.62591315197;
    tmp_msg_0.psi = 0.578697659725;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.725134445367;

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
    msg.setTimeStamp(0.200496146914);
    msg.setSource(8609U);
    msg.setSourceEntity(119U);
    msg.setDestination(32536U);
    msg.setDestinationEntity(29U);
    msg.validity = 233U;
    msg.value = 0.222516021769;

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
    msg.setTimeStamp(0.574160789056);
    msg.setSource(11837U);
    msg.setSourceEntity(38U);
    msg.setDestination(54890U);
    msg.setDestinationEntity(135U);
    msg.value = 0.84040896551;

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
    msg.setTimeStamp(0.215482056257);
    msg.setSource(60265U);
    msg.setSourceEntity(57U);
    msg.setDestination(18495U);
    msg.setDestinationEntity(195U);
    msg.value = 0.8298086176;

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
    msg.setTimeStamp(0.015694278819);
    msg.setSource(54615U);
    msg.setSourceEntity(154U);
    msg.setDestination(30111U);
    msg.setDestinationEntity(80U);
    msg.value = 0.420616810075;

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
    msg.setTimeStamp(0.484211916011);
    msg.setSource(41521U);
    msg.setSourceEntity(1U);
    msg.setDestination(16198U);
    msg.setDestinationEntity(141U);
    msg.value = 0.856646848954;

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
    msg.setTimeStamp(0.384148064248);
    msg.setSource(13810U);
    msg.setSourceEntity(218U);
    msg.setDestination(17914U);
    msg.setDestinationEntity(73U);
    msg.value = 0.617036861881;

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
    msg.setTimeStamp(0.052073896551);
    msg.setSource(27197U);
    msg.setSourceEntity(102U);
    msg.setDestination(55164U);
    msg.setDestinationEntity(68U);
    msg.value = 0.825363931784;

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
    msg.setTimeStamp(0.0417289608775);
    msg.setSource(57321U);
    msg.setSourceEntity(119U);
    msg.setDestination(50613U);
    msg.setDestinationEntity(227U);
    msg.value = 0.0699141750323;

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
    msg.setTimeStamp(0.39162525761);
    msg.setSource(63498U);
    msg.setSourceEntity(223U);
    msg.setDestination(6540U);
    msg.setDestinationEntity(83U);
    msg.value = 0.634083784353;

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
    msg.setTimeStamp(0.670185796454);
    msg.setSource(43406U);
    msg.setSourceEntity(25U);
    msg.setDestination(10292U);
    msg.setDestinationEntity(143U);
    msg.value = 0.0919405297476;

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
    msg.setTimeStamp(0.835880204654);
    msg.setSource(60939U);
    msg.setSourceEntity(141U);
    msg.setDestination(25420U);
    msg.setDestinationEntity(209U);
    msg.value = 0.220361094402;

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
    msg.setTimeStamp(0.632033618132);
    msg.setSource(62942U);
    msg.setSourceEntity(130U);
    msg.setDestination(36460U);
    msg.setDestinationEntity(9U);
    msg.value = 0.645370769408;

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
    msg.setTimeStamp(0.469617269831);
    msg.setSource(52832U);
    msg.setSourceEntity(220U);
    msg.setDestination(27508U);
    msg.setDestinationEntity(38U);
    msg.value = 0.221799637311;

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
    msg.setTimeStamp(0.230110602429);
    msg.setSource(44568U);
    msg.setSourceEntity(41U);
    msg.setDestination(21848U);
    msg.setDestinationEntity(50U);
    msg.value = 0.0794075705812;

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
    msg.setTimeStamp(0.372033232114);
    msg.setSource(60551U);
    msg.setSourceEntity(63U);
    msg.setDestination(19690U);
    msg.setDestinationEntity(195U);
    msg.value = 0.895260688533;

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
    msg.setTimeStamp(0.488572543018);
    msg.setSource(57733U);
    msg.setSourceEntity(197U);
    msg.setDestination(15322U);
    msg.setDestinationEntity(42U);
    msg.value = 0.672623066924;

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
    msg.setTimeStamp(0.0911886283012);
    msg.setSource(43697U);
    msg.setSourceEntity(55U);
    msg.setDestination(38418U);
    msg.setDestinationEntity(119U);
    msg.value = 0.798408713497;

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
    msg.setTimeStamp(0.0645259342613);
    msg.setSource(8311U);
    msg.setSourceEntity(206U);
    msg.setDestination(42070U);
    msg.setDestinationEntity(244U);
    msg.value = 0.381563159192;

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
    msg.setTimeStamp(0.0969495929793);
    msg.setSource(43054U);
    msg.setSourceEntity(167U);
    msg.setDestination(46841U);
    msg.setDestinationEntity(65U);
    msg.value = 0.212496981326;

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
    msg.setTimeStamp(0.764298869549);
    msg.setSource(28447U);
    msg.setSourceEntity(154U);
    msg.setDestination(29175U);
    msg.setDestinationEntity(191U);
    msg.value = 0.582315891406;

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
    msg.setTimeStamp(0.783573306429);
    msg.setSource(35484U);
    msg.setSourceEntity(5U);
    msg.setDestination(55760U);
    msg.setDestinationEntity(106U);
    msg.value = 0.358885344426;

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
    msg.setTimeStamp(0.99675141982);
    msg.setSource(26704U);
    msg.setSourceEntity(221U);
    msg.setDestination(63869U);
    msg.setDestinationEntity(219U);
    msg.value = 0.0709257392221;

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
    msg.setTimeStamp(0.536351914231);
    msg.setSource(58020U);
    msg.setSourceEntity(99U);
    msg.setDestination(35260U);
    msg.setDestinationEntity(222U);
    msg.value = 0.0629239550057;

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
    msg.setTimeStamp(0.619751273321);
    msg.setSource(18734U);
    msg.setSourceEntity(146U);
    msg.setDestination(5792U);
    msg.setDestinationEntity(101U);
    msg.value = 0.994472185923;

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
    msg.setTimeStamp(0.113817124631);
    msg.setSource(54942U);
    msg.setSourceEntity(99U);
    msg.setDestination(20466U);
    msg.setDestinationEntity(239U);
    msg.value = 0.71672075778;

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
    msg.setTimeStamp(0.646529538596);
    msg.setSource(61102U);
    msg.setSourceEntity(236U);
    msg.setDestination(53147U);
    msg.setDestinationEntity(113U);
    msg.direction = 0.108714982765;
    msg.speed = 0.587223854355;
    msg.turbulence = 0.543659273021;

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
    msg.setTimeStamp(0.788283510106);
    msg.setSource(49196U);
    msg.setSourceEntity(133U);
    msg.setDestination(28066U);
    msg.setDestinationEntity(54U);
    msg.direction = 0.494422619283;
    msg.speed = 0.972582698872;
    msg.turbulence = 0.04926045912;

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
    msg.setTimeStamp(0.41947545021);
    msg.setSource(42525U);
    msg.setSourceEntity(131U);
    msg.setDestination(45551U);
    msg.setDestinationEntity(50U);
    msg.direction = 0.207286313145;
    msg.speed = 0.667553815054;
    msg.turbulence = 0.829090980957;

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
    msg.setTimeStamp(0.885275847544);
    msg.setSource(51353U);
    msg.setSourceEntity(91U);
    msg.setDestination(60202U);
    msg.setDestinationEntity(62U);
    msg.value = 0.566086935461;

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
    msg.setTimeStamp(0.976244505341);
    msg.setSource(16225U);
    msg.setSourceEntity(105U);
    msg.setDestination(3319U);
    msg.setDestinationEntity(92U);
    msg.value = 0.424417821756;

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
    msg.setTimeStamp(0.0428489228004);
    msg.setSource(31164U);
    msg.setSourceEntity(6U);
    msg.setDestination(57696U);
    msg.setDestinationEntity(168U);
    msg.value = 0.642773757523;

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
    msg.setTimeStamp(0.17573290959);
    msg.setSource(22159U);
    msg.setSourceEntity(15U);
    msg.setDestination(31115U);
    msg.setDestinationEntity(122U);
    msg.value.assign("RNIOPSNEJNNYQQLRENCMEJXYCSIJSZTUSXOBTUKAHFRJOSIUAKDRMZUEAACQZDGLRRMGOTLQBUWOJOHQESHYWTXVLCDYXDGOFVCW");

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
    msg.setTimeStamp(0.166285429019);
    msg.setSource(51400U);
    msg.setSourceEntity(93U);
    msg.setDestination(59271U);
    msg.setDestinationEntity(63U);
    msg.value.assign("QBXFTQXDJJGBWFVVNQDIUAWVZAPKAVTJGQWGGPILIAERZYMABHMKTYODGYFUUBZKZWKENDERPHLOFHWCKNZRFNNTLXAXFYCSRLFCMDGFKCEIBGQJQAWPDCZVSYAELZRSTURUVVPOJGDBQKHEICXQFQQJLWSPPWSEIC");

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
    msg.setTimeStamp(0.843915116684);
    msg.setSource(56185U);
    msg.setSourceEntity(221U);
    msg.setDestination(46228U);
    msg.setDestinationEntity(237U);
    msg.value.assign("UAPYPQZLGIHPLDXKMSUWZLOFTXVBUIRQTOSJFKMDPXOJKBHIJMTYMIWTJKNKCZKHBJPVNQIFYYKOVLTGHARGNUQTFBSBSDCWVYEJKBQYDCZACLBZOYWEEERXHSQFSGMEUXGYWXVRPNXOBONFFZDOIBMFGIMROAUATQFDRYQWWYZECDGWGAGARPXHGKVUMXNFVUVLSUCKJCCEHULCDTHHLRCQTZDILRNDEHZOVMVJNLEJWBZNAAPJWQXE");

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
    msg.setTimeStamp(0.466188525771);
    msg.setSource(52017U);
    msg.setSourceEntity(132U);
    msg.setDestination(7788U);
    msg.setDestinationEntity(221U);
    const char tmp_msg_0[] = {-78, -45, 45, 92, 114, -69, 45, 11, -54, -113, -120, -53, 108, 120, 97, -23, 57, 21, 101, 25, 2, 72, -44, -20, 73, 84, -58, 5, -119, -4, 94, 59, -70, 108, -126, 45, -9, 28, -101, 61, -13, -96, 36, 84, 122, -56, -52, -126, 87, -30, 103, -108, -123, 54, -32, -62, 85, -111, 69, 33, -52, 76, 7, 78, -2, 79, -102, -17, -80, 64, 74, -50, 20, 12, -116, 51, 57, 93, 100, -94, 71, -118};
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
    msg.setTimeStamp(0.5812803299);
    msg.setSource(47419U);
    msg.setSourceEntity(210U);
    msg.setDestination(7327U);
    msg.setDestinationEntity(187U);
    const char tmp_msg_0[] = {-47, 21, -57, 75, -63, -88, 64, 120, 96, -63, 18, -104, 113, 87, 78, 36, 11, -123, -60, -90, 59, -68, 45, 34, -120, -100, 71, 18, -97, -26, -19, -84, 118, -107, -109, -112, -40, 62, -5, 73, 113, -49, -107, 10, 122, -89, -73, -98, 40, -93, -41, -43, 49, -86, 120, -6, 2, -48, -116, -12, -61, 53, 76, -104, 97, -32, -25, 112, 9, 69, 76, 8, -96, 106, 3, 29, -32, -13, 58, -19, -40, 67, 16, 52, 88, 42, -119, 69, 2};
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
    msg.setTimeStamp(0.512545524753);
    msg.setSource(25091U);
    msg.setSourceEntity(223U);
    msg.setDestination(61672U);
    msg.setDestinationEntity(191U);
    const char tmp_msg_0[] = {-55, 71, -18, -38, 109, -99, 2, 83, -1, -113, -75, 54, -92, -124, 32, 58, -91, -61, -14, -19, -90, -6, 103, -94, 98, -8, -128, -99, 35, -63, -77, 113, -99, -11, 59, 54, -102, 55, -60, 16, 77, -19, -126, -120, 93, -101, 120, 61, -46, -75, 92, 12, -86, -92, 122, 19, -83, -2, -20, -104, 15, 26, -59, -6, -127, -70, 85, -67, 31, 10, -35, -86, -105, -108, 72, 123, -103, -29, 119, -76, 71, -62, -65, 42, -49, -69, -84, 106, 79, 33, -121, -6, -94, 60, 2, -49, -68, 80, 69, -100, 97, 27, -8, 105, -102, 85, -117, -127, 81, -13, 99, -23, 104, 83, 64, 59, -92, 26, -68, -109, 62, -19, -91, -87, 19, 126, -95, 13, 90, 123, -8, 34, -55, 21, -117, -26, 94, -108, 68, 48, 24, -30, -118, -36, -58, 76, 25, -114, 7, -123, -123, 83, -11, -90, 109, -10, -121, 17, 123, -29, 99, 65, -41, -67, -51, 29, 48, 29, -40, -38, 86, -71, -96, -12, 52, -85, -5, 14, -97, -2, 105, -52, -79};
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
    msg.setTimeStamp(0.546342995396);
    msg.setSource(26300U);
    msg.setSourceEntity(17U);
    msg.setDestination(63692U);
    msg.setDestinationEntity(204U);
    msg.value = 0.801918752114;

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
    msg.setTimeStamp(0.542899216812);
    msg.setSource(52877U);
    msg.setSourceEntity(67U);
    msg.setDestination(45540U);
    msg.setDestinationEntity(243U);
    msg.value = 0.49024270147;

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
    msg.setTimeStamp(0.81565884235);
    msg.setSource(88U);
    msg.setSourceEntity(144U);
    msg.setDestination(11094U);
    msg.setDestinationEntity(78U);
    msg.value = 0.250246679205;

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
    msg.setTimeStamp(0.493704407921);
    msg.setSource(3615U);
    msg.setSourceEntity(234U);
    msg.setDestination(39649U);
    msg.setDestinationEntity(226U);
    msg.type = 190U;
    msg.frequency = 3131795098U;
    msg.min_range = 13975U;
    msg.max_range = 11958U;
    msg.bits_per_point = 133U;
    msg.scale_factor = 0.359892707143;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.286387450783;
    tmp_msg_0.beam_height = 0.406563309958;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-32, -31, 109, 108, -102, 105, 9, -112, 26, 33, 22, -19, -110, 10, 11, 111, -43, -43, -52, 79, 30, 42, 53, 126, -61, 80, -59, -73, -5, -99, 62, 80, 111, 107, 104, 91, 107, 29, -30, 35, -89, 66, -62, 95, 92, -110, 80, -30, -83, -108, 61, -19, 40, -124};
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
    msg.setTimeStamp(0.109316415537);
    msg.setSource(23399U);
    msg.setSourceEntity(40U);
    msg.setDestination(50193U);
    msg.setDestinationEntity(253U);
    msg.type = 155U;
    msg.frequency = 1475616006U;
    msg.min_range = 65252U;
    msg.max_range = 2286U;
    msg.bits_per_point = 166U;
    msg.scale_factor = 0.995616998803;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.283852570751;
    tmp_msg_0.beam_height = 0.592701125134;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-97, -31, -122, 102, 36, -77, 59, -47, -117, 42, 102, -62, -63, 15, -116, -77, -111, -72, -117, -5, -2, -24, -108, -95, -79, -110, 41, -100, -72, -15, -87, -127, -40, 96, -103, -12, 74, 27, 80, 75, 14, 104, 12, -100, 17, 24, 88, 101, -115, 6, 57, -123, 102, 21, -44, 119, -17, -71, -38, -26, -89, -128, 67, 23, 20, -97, 126, -14, -36, 125, 97, -101, 57, 106, -8, -97, 80, -68, -117, 105, -93, -32, 82, 82, 88, -82, 69, -85, -1, 114, 53, 10, 31, -21, -93, -38, -48};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.0611648445642);
    msg.setSource(47769U);
    msg.setSourceEntity(204U);
    msg.setDestination(55676U);
    msg.setDestinationEntity(53U);
    msg.type = 18U;
    msg.frequency = 2133628985U;
    msg.min_range = 35606U;
    msg.max_range = 34415U;
    msg.bits_per_point = 196U;
    msg.scale_factor = 0.561681601039;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0400531729786;
    tmp_msg_0.beam_height = 0.856432726634;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {125, -20, -112, 51, -96, 72, 53, 83, -47, -47, 37, -68, -55, 126, -54, 106, -107, 63, 39, -73, 61, 49, 51, 90, 124, 83, 64, 54, 56, 53, 113, 101, -91, 119, -110, 50, 47, -113, 16, 56, -3, -126, -119, -63, -17, 20, -5, -95, 29, -84, -1, 3, -47, 107, 53, 74, -28, 57, 23, 18, 4, -57, 68, 54, -52, 61, 7, -10, -69, -127, 17, 116, 40, -107, 104, -105, -101, 49, 29, 32, -6, 40, -26, -101, 112, 110, -114, -100, -94, 5, 55, -75, 88, 89, 20, -126, -8, -25, -86, -103, 47, -70, 34, 78, 45, -91, -42, 2, -66, 42, -26, -79, -55, -103, -103, 8, -111, 13, -3, 11, -1, 105, -111, -35, -60, 52, -46, -17, -52, 119, 113, -85, 79, -31, 8, -49, -119, 73, 118, 106, 114};
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
    msg.setTimeStamp(0.181891886361);
    msg.setSource(528U);
    msg.setSourceEntity(114U);
    msg.setDestination(48644U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.190608928915);
    msg.setSource(15828U);
    msg.setSourceEntity(228U);
    msg.setDestination(23163U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.562110728418);
    msg.setSource(10621U);
    msg.setSourceEntity(238U);
    msg.setDestination(286U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.97124263161);
    msg.setSource(33398U);
    msg.setSourceEntity(192U);
    msg.setDestination(10335U);
    msg.setDestinationEntity(227U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.0724268666581);
    msg.setSource(45182U);
    msg.setSourceEntity(17U);
    msg.setDestination(56717U);
    msg.setDestinationEntity(59U);
    msg.op = 129U;

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
    msg.setTimeStamp(0.945537094824);
    msg.setSource(5203U);
    msg.setSourceEntity(205U);
    msg.setDestination(10459U);
    msg.setDestinationEntity(94U);
    msg.op = 72U;

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
    msg.setTimeStamp(0.628361071763);
    msg.setSource(58498U);
    msg.setSourceEntity(82U);
    msg.setDestination(48323U);
    msg.setDestinationEntity(245U);
    msg.value = 0.86838506113;
    msg.confidence = 0.83189786907;
    msg.opmodes.assign("WAECOLWBOLKVQZRVPFOXWBSVJIJQTDTWSFVIVPRQTWFGGAJDHXJUNYEZYPHFIORQLCTHFSEBIICJMFYUOLGPVMINIJPRBKUBDYSYUWDHXXZNUPKPZFKGADPZIHBNQOBJQGHXTASQDUIEAHHCIMGZGXYSVWXCWGSMLFRNZQQCLYZKCEACUFDJCKWRAOQNMXGSEUDEROVKYOPNNWKAMMLESTTKKTBTXCLBUETMNDPVGYMZDX");

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
    msg.setTimeStamp(0.369319784938);
    msg.setSource(30175U);
    msg.setSourceEntity(183U);
    msg.setDestination(43381U);
    msg.setDestinationEntity(75U);
    msg.value = 0.494814083487;
    msg.confidence = 0.109036261419;
    msg.opmodes.assign("SCFOHLCENIQLNZFWFXELQMWVLSCXIRSNJXUNMDXJLUHDIADTERPTORBJUKNPKTXQXNGDSVKMCXCBGMKZVNMDGRPLAIPFKCSMASVTG");

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
    msg.setTimeStamp(0.368862405555);
    msg.setSource(28750U);
    msg.setSourceEntity(28U);
    msg.setDestination(28058U);
    msg.setDestinationEntity(9U);
    msg.value = 0.318749090782;
    msg.confidence = 0.2203664106;
    msg.opmodes.assign("PQYJJNNGBZCZYCCVUKDQVWJPYAXILKGCSMEMELFARABXTPJIDP");

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
    msg.setTimeStamp(0.485988327143);
    msg.setSource(29101U);
    msg.setSourceEntity(111U);
    msg.setDestination(19066U);
    msg.setDestinationEntity(110U);
    msg.itow = 425965984U;
    msg.lat = 0.959759233089;
    msg.lon = 0.656444199004;
    msg.height_ell = 0.395428251325;
    msg.height_sea = 0.416998559475;
    msg.hacc = 0.605740459495;
    msg.vacc = 0.202620504625;
    msg.vel_n = 0.399556520303;
    msg.vel_e = 0.340627317713;
    msg.vel_d = 0.860785873584;
    msg.speed = 0.478802467545;
    msg.gspeed = 0.53496555606;
    msg.heading = 0.276992667566;
    msg.sacc = 0.294714243813;
    msg.cacc = 0.927683284571;

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
    msg.setTimeStamp(0.388492777495);
    msg.setSource(33495U);
    msg.setSourceEntity(70U);
    msg.setDestination(57472U);
    msg.setDestinationEntity(246U);
    msg.itow = 2173806326U;
    msg.lat = 0.648498994203;
    msg.lon = 0.972640548165;
    msg.height_ell = 0.936285984525;
    msg.height_sea = 0.548831415028;
    msg.hacc = 0.986522989255;
    msg.vacc = 0.403422217258;
    msg.vel_n = 0.337463273343;
    msg.vel_e = 0.791334232568;
    msg.vel_d = 0.951915975983;
    msg.speed = 0.363438620472;
    msg.gspeed = 0.684236471573;
    msg.heading = 0.16441531737;
    msg.sacc = 0.643936737757;
    msg.cacc = 0.913821039976;

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
    msg.setTimeStamp(0.205807684279);
    msg.setSource(7332U);
    msg.setSourceEntity(8U);
    msg.setDestination(61455U);
    msg.setDestinationEntity(240U);
    msg.itow = 760362769U;
    msg.lat = 0.788043829473;
    msg.lon = 0.171072144756;
    msg.height_ell = 0.641149799793;
    msg.height_sea = 0.397578691172;
    msg.hacc = 0.131754959863;
    msg.vacc = 0.822211227483;
    msg.vel_n = 0.684960555809;
    msg.vel_e = 0.784201235584;
    msg.vel_d = 0.995699894003;
    msg.speed = 0.802892646169;
    msg.gspeed = 0.437242046187;
    msg.heading = 0.62702342249;
    msg.sacc = 0.814239641603;
    msg.cacc = 0.631271497178;

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
    msg.setTimeStamp(0.734237878158);
    msg.setSource(56261U);
    msg.setSourceEntity(75U);
    msg.setDestination(17916U);
    msg.setDestinationEntity(75U);
    msg.id = 28U;
    msg.value = 0.467337212258;

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
    msg.setTimeStamp(0.0282581819041);
    msg.setSource(52416U);
    msg.setSourceEntity(63U);
    msg.setDestination(32057U);
    msg.setDestinationEntity(182U);
    msg.id = 130U;
    msg.value = 0.403199644377;

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
    msg.setTimeStamp(0.385821953651);
    msg.setSource(38797U);
    msg.setSourceEntity(48U);
    msg.setDestination(2370U);
    msg.setDestinationEntity(218U);
    msg.id = 139U;
    msg.value = 0.326116445196;

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
    msg.setTimeStamp(0.448564884051);
    msg.setSource(55302U);
    msg.setSourceEntity(245U);
    msg.setDestination(49300U);
    msg.setDestinationEntity(241U);
    msg.x = 0.163013040416;
    msg.y = 0.671952405956;
    msg.z = 0.389016213988;
    msg.phi = 0.948051563513;
    msg.theta = 0.124921639437;
    msg.psi = 0.0608085654444;

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
    msg.setTimeStamp(0.723072821451);
    msg.setSource(4522U);
    msg.setSourceEntity(1U);
    msg.setDestination(17891U);
    msg.setDestinationEntity(241U);
    msg.x = 0.227143354142;
    msg.y = 0.781900155403;
    msg.z = 0.753866691315;
    msg.phi = 0.707069531328;
    msg.theta = 0.980174927308;
    msg.psi = 0.291904984095;

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
    msg.setTimeStamp(0.154345676912);
    msg.setSource(41435U);
    msg.setSourceEntity(51U);
    msg.setDestination(16010U);
    msg.setDestinationEntity(224U);
    msg.x = 0.27221950748;
    msg.y = 0.162782318707;
    msg.z = 0.645962018261;
    msg.phi = 0.679520626538;
    msg.theta = 0.170415708025;
    msg.psi = 0.34346203235;

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
    msg.setTimeStamp(0.126088997177);
    msg.setSource(26929U);
    msg.setSourceEntity(253U);
    msg.setDestination(29665U);
    msg.setDestinationEntity(181U);
    msg.beam_width = 0.201637050094;
    msg.beam_height = 0.833207526022;

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
    msg.setTimeStamp(0.314344546189);
    msg.setSource(60673U);
    msg.setSourceEntity(155U);
    msg.setDestination(48725U);
    msg.setDestinationEntity(190U);
    msg.beam_width = 0.655531735196;
    msg.beam_height = 0.619915423921;

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
    msg.setTimeStamp(0.00087667972852);
    msg.setSource(50296U);
    msg.setSourceEntity(97U);
    msg.setDestination(8010U);
    msg.setDestinationEntity(237U);
    msg.beam_width = 0.712781299599;
    msg.beam_height = 0.261285389704;

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
    msg.setTimeStamp(0.442998424201);
    msg.setSource(60054U);
    msg.setSourceEntity(113U);
    msg.setDestination(46468U);
    msg.setDestinationEntity(84U);
    msg.sane = 164U;

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
    msg.setTimeStamp(0.308325208906);
    msg.setSource(54514U);
    msg.setSourceEntity(71U);
    msg.setDestination(30913U);
    msg.setDestinationEntity(121U);
    msg.sane = 240U;

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
    msg.setTimeStamp(0.974617067143);
    msg.setSource(36017U);
    msg.setSourceEntity(127U);
    msg.setDestination(23778U);
    msg.setDestinationEntity(76U);
    msg.sane = 20U;

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
    msg.setTimeStamp(0.213446277548);
    msg.setSource(61310U);
    msg.setSourceEntity(15U);
    msg.setDestination(23296U);
    msg.setDestinationEntity(198U);
    msg.value = 0.710188422457;

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
    msg.setTimeStamp(0.328735841642);
    msg.setSource(35090U);
    msg.setSourceEntity(251U);
    msg.setDestination(63949U);
    msg.setDestinationEntity(245U);
    msg.value = 0.131601556125;

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
    msg.setTimeStamp(0.0815404187809);
    msg.setSource(32887U);
    msg.setSourceEntity(152U);
    msg.setDestination(47510U);
    msg.setDestinationEntity(45U);
    msg.value = 0.283523969785;

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
    msg.setTimeStamp(0.450045129186);
    msg.setSource(517U);
    msg.setSourceEntity(125U);
    msg.setDestination(46599U);
    msg.setDestinationEntity(33U);
    msg.value = 0.205065854501;

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
    msg.setTimeStamp(0.440094845785);
    msg.setSource(17U);
    msg.setSourceEntity(81U);
    msg.setDestination(23654U);
    msg.setDestinationEntity(137U);
    msg.value = 0.945189823058;

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
    msg.setTimeStamp(0.356182178253);
    msg.setSource(28091U);
    msg.setSourceEntity(5U);
    msg.setDestination(18215U);
    msg.setDestinationEntity(185U);
    msg.value = 0.794469955131;

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
    msg.setTimeStamp(0.949353808103);
    msg.setSource(47835U);
    msg.setSourceEntity(76U);
    msg.setDestination(56567U);
    msg.setDestinationEntity(201U);
    msg.value = 0.550536933508;

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
    msg.setTimeStamp(0.898969266677);
    msg.setSource(38005U);
    msg.setSourceEntity(148U);
    msg.setDestination(4131U);
    msg.setDestinationEntity(152U);
    msg.value = 0.574479471545;

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
    msg.setTimeStamp(0.397298957415);
    msg.setSource(63623U);
    msg.setSourceEntity(67U);
    msg.setDestination(58995U);
    msg.setDestinationEntity(155U);
    msg.value = 0.250332142193;

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
    msg.setTimeStamp(0.395687909761);
    msg.setSource(47232U);
    msg.setSourceEntity(241U);
    msg.setDestination(29190U);
    msg.setDestinationEntity(211U);
    msg.value = 0.683061677677;

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
    msg.setTimeStamp(0.929270575648);
    msg.setSource(38339U);
    msg.setSourceEntity(98U);
    msg.setDestination(10206U);
    msg.setDestinationEntity(20U);
    msg.value = 0.732143479309;

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
    msg.setTimeStamp(0.519691539373);
    msg.setSource(14039U);
    msg.setSourceEntity(250U);
    msg.setDestination(5352U);
    msg.setDestinationEntity(123U);
    msg.value = 0.200715426442;

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
    msg.setTimeStamp(0.143979584704);
    msg.setSource(23718U);
    msg.setSourceEntity(205U);
    msg.setDestination(22972U);
    msg.setDestinationEntity(237U);
    msg.value = 0.998033869108;

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
    msg.setTimeStamp(0.29517181838);
    msg.setSource(43020U);
    msg.setSourceEntity(78U);
    msg.setDestination(1303U);
    msg.setDestinationEntity(197U);
    msg.value = 0.739083860514;

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
    msg.setTimeStamp(0.485670908406);
    msg.setSource(33854U);
    msg.setSourceEntity(116U);
    msg.setDestination(43893U);
    msg.setDestinationEntity(196U);
    msg.value = 0.0740342074384;

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
    msg.setTimeStamp(0.736166951534);
    msg.setSource(51736U);
    msg.setSourceEntity(110U);
    msg.setDestination(41787U);
    msg.setDestinationEntity(41U);
    msg.value = 0.357533421492;

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
    msg.setTimeStamp(0.0867115752111);
    msg.setSource(40151U);
    msg.setSourceEntity(132U);
    msg.setDestination(65451U);
    msg.setDestinationEntity(55U);
    msg.value = 0.973656185238;

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
    msg.setTimeStamp(0.625783188406);
    msg.setSource(36850U);
    msg.setSourceEntity(30U);
    msg.setDestination(26175U);
    msg.setDestinationEntity(187U);
    msg.value = 0.819967034563;

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
    msg.setTimeStamp(0.106313036343);
    msg.setSource(32179U);
    msg.setSourceEntity(220U);
    msg.setDestination(64286U);
    msg.setDestinationEntity(144U);
    msg.value = 0.665889502611;

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
    msg.setTimeStamp(0.420425851373);
    msg.setSource(38565U);
    msg.setSourceEntity(41U);
    msg.setDestination(65213U);
    msg.setDestinationEntity(8U);
    msg.value = 0.543076037458;

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
    msg.setTimeStamp(0.795944303158);
    msg.setSource(23670U);
    msg.setSourceEntity(161U);
    msg.setDestination(26678U);
    msg.setDestinationEntity(58U);
    msg.value = 0.668919379562;

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
    msg.setTimeStamp(0.557393676613);
    msg.setSource(33319U);
    msg.setSourceEntity(80U);
    msg.setDestination(13297U);
    msg.setDestinationEntity(129U);
    msg.value = 0.580197033653;

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
    msg.setTimeStamp(0.924713867094);
    msg.setSource(7846U);
    msg.setSourceEntity(49U);
    msg.setDestination(947U);
    msg.setDestinationEntity(102U);
    msg.value = 0.869735499814;

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
    msg.setTimeStamp(0.347270274461);
    msg.setSource(2161U);
    msg.setSourceEntity(80U);
    msg.setDestination(40361U);
    msg.setDestinationEntity(66U);
    msg.value = 0.701342714948;

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
    msg.setTimeStamp(0.0626411963628);
    msg.setSource(32969U);
    msg.setSourceEntity(251U);
    msg.setDestination(24747U);
    msg.setDestinationEntity(214U);
    msg.validity = 29827U;
    msg.type = 113U;
    msg.tow = 372932199U;
    msg.base_lat = 0.828037466036;
    msg.base_lon = 0.697328592559;
    msg.base_height = 0.247407116288;
    msg.n = 0.82846591722;
    msg.e = 0.860374474945;
    msg.d = 0.335300430532;
    msg.v_n = 0.556454331029;
    msg.v_e = 0.647709436534;
    msg.v_d = 0.815682239933;
    msg.satellites = 227U;
    msg.iar_hyp = 28022U;
    msg.iar_ratio = 0.472765280612;

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
    msg.setTimeStamp(0.212711869278);
    msg.setSource(55822U);
    msg.setSourceEntity(249U);
    msg.setDestination(26844U);
    msg.setDestinationEntity(27U);
    msg.validity = 10871U;
    msg.type = 90U;
    msg.tow = 3385233282U;
    msg.base_lat = 0.73896335276;
    msg.base_lon = 0.218811986086;
    msg.base_height = 0.933523439756;
    msg.n = 0.0501299372041;
    msg.e = 0.548405533464;
    msg.d = 0.00800170941167;
    msg.v_n = 0.139836175016;
    msg.v_e = 0.0745089473168;
    msg.v_d = 0.045905836775;
    msg.satellites = 158U;
    msg.iar_hyp = 39945U;
    msg.iar_ratio = 0.399049771367;

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
    msg.setTimeStamp(0.712641375829);
    msg.setSource(13066U);
    msg.setSourceEntity(1U);
    msg.setDestination(24374U);
    msg.setDestinationEntity(165U);
    msg.validity = 35455U;
    msg.type = 143U;
    msg.tow = 725496790U;
    msg.base_lat = 0.337788631637;
    msg.base_lon = 0.574331332798;
    msg.base_height = 0.238824760414;
    msg.n = 0.279455159384;
    msg.e = 0.868640423938;
    msg.d = 0.8351043572;
    msg.v_n = 0.574824540577;
    msg.v_e = 0.239460512091;
    msg.v_d = 0.885405061192;
    msg.satellites = 221U;
    msg.iar_hyp = 14662U;
    msg.iar_ratio = 0.572071187245;

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
    msg.setTimeStamp(0.762445272397);
    msg.setSource(50344U);
    msg.setSourceEntity(246U);
    msg.setDestination(65028U);
    msg.setDestinationEntity(9U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.731413899353;
    tmp_msg_0.lon = 0.540854594222;
    tmp_msg_0.height = 0.816314221454;
    tmp_msg_0.x = 0.897081542364;
    tmp_msg_0.y = 0.652527759448;
    tmp_msg_0.z = 0.908488401549;
    tmp_msg_0.phi = 0.933775002562;
    tmp_msg_0.theta = 0.393561057916;
    tmp_msg_0.psi = 0.357881520448;
    tmp_msg_0.u = 0.590696397292;
    tmp_msg_0.v = 0.492108847694;
    tmp_msg_0.w = 0.774162980853;
    tmp_msg_0.vx = 0.722957263609;
    tmp_msg_0.vy = 0.914369396748;
    tmp_msg_0.vz = 0.737616821861;
    tmp_msg_0.p = 0.266702145438;
    tmp_msg_0.q = 0.590286725865;
    tmp_msg_0.r = 0.633123100202;
    tmp_msg_0.depth = 0.614784275794;
    tmp_msg_0.alt = 0.344697550008;
    msg.state.set(tmp_msg_0);
    msg.type = 48U;

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
    msg.setTimeStamp(0.993296057403);
    msg.setSource(49340U);
    msg.setSourceEntity(39U);
    msg.setDestination(12786U);
    msg.setDestinationEntity(135U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0729129732403;
    tmp_msg_0.lon = 0.264118638923;
    tmp_msg_0.height = 0.0845967737787;
    tmp_msg_0.x = 0.441777547166;
    tmp_msg_0.y = 0.674740864618;
    tmp_msg_0.z = 0.404328857024;
    tmp_msg_0.phi = 0.964853015043;
    tmp_msg_0.theta = 0.0700090518578;
    tmp_msg_0.psi = 0.358901754074;
    tmp_msg_0.u = 0.273698418015;
    tmp_msg_0.v = 0.824341765897;
    tmp_msg_0.w = 0.739278490476;
    tmp_msg_0.vx = 0.282204992363;
    tmp_msg_0.vy = 0.209478372369;
    tmp_msg_0.vz = 0.840213979704;
    tmp_msg_0.p = 0.667151045867;
    tmp_msg_0.q = 0.978326715159;
    tmp_msg_0.r = 0.94278029279;
    tmp_msg_0.depth = 0.649433630786;
    tmp_msg_0.alt = 0.327143619864;
    msg.state.set(tmp_msg_0);
    msg.type = 106U;

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
    msg.setTimeStamp(0.0933579322719);
    msg.setSource(264U);
    msg.setSourceEntity(213U);
    msg.setDestination(34847U);
    msg.setDestinationEntity(186U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.993684250412;
    tmp_msg_0.lon = 0.694625293956;
    tmp_msg_0.height = 0.927597948453;
    tmp_msg_0.x = 0.810365411643;
    tmp_msg_0.y = 0.786974915618;
    tmp_msg_0.z = 0.359748063965;
    tmp_msg_0.phi = 0.772179010592;
    tmp_msg_0.theta = 0.978463295355;
    tmp_msg_0.psi = 0.681890718442;
    tmp_msg_0.u = 0.710767350831;
    tmp_msg_0.v = 0.620725616499;
    tmp_msg_0.w = 0.96356955743;
    tmp_msg_0.vx = 0.526730933678;
    tmp_msg_0.vy = 0.280857321931;
    tmp_msg_0.vz = 0.93127685533;
    tmp_msg_0.p = 0.347152259868;
    tmp_msg_0.q = 0.714494695416;
    tmp_msg_0.r = 0.0547943359798;
    tmp_msg_0.depth = 0.613200647482;
    tmp_msg_0.alt = 0.257605322981;
    msg.state.set(tmp_msg_0);
    msg.type = 71U;

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
    msg.setTimeStamp(0.918783020244);
    msg.setSource(51325U);
    msg.setSourceEntity(99U);
    msg.setDestination(48959U);
    msg.setDestinationEntity(214U);
    msg.value = 0.688874229029;

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
    msg.setTimeStamp(0.518129257669);
    msg.setSource(23107U);
    msg.setSourceEntity(28U);
    msg.setDestination(60649U);
    msg.setDestinationEntity(29U);
    msg.value = 0.0017507202614;

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
    msg.setTimeStamp(0.971240419535);
    msg.setSource(35481U);
    msg.setSourceEntity(45U);
    msg.setDestination(11787U);
    msg.setDestinationEntity(138U);
    msg.value = 0.521942712105;

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
    msg.setTimeStamp(0.527668340146);
    msg.setSource(64384U);
    msg.setSourceEntity(93U);
    msg.setDestination(1664U);
    msg.setDestinationEntity(126U);
    msg.value = 0.0196024044555;

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
    msg.setTimeStamp(0.0335923983578);
    msg.setSource(61962U);
    msg.setSourceEntity(38U);
    msg.setDestination(36659U);
    msg.setDestinationEntity(123U);
    msg.value = 0.387725363587;

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
    msg.setTimeStamp(0.893717864131);
    msg.setSource(9240U);
    msg.setSourceEntity(181U);
    msg.setDestination(56133U);
    msg.setDestinationEntity(30U);
    msg.value = 0.866533796969;

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
    msg.setTimeStamp(0.255325053784);
    msg.setSource(63898U);
    msg.setSourceEntity(91U);
    msg.setDestination(60971U);
    msg.setDestinationEntity(254U);
    msg.value = 0.620454907653;

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
    msg.setTimeStamp(0.125068387556);
    msg.setSource(14450U);
    msg.setSourceEntity(21U);
    msg.setDestination(42651U);
    msg.setDestinationEntity(244U);
    msg.value = 0.367489016852;

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
    msg.setTimeStamp(0.571124688664);
    msg.setSource(43928U);
    msg.setSourceEntity(17U);
    msg.setDestination(8275U);
    msg.setDestinationEntity(215U);
    msg.value = 0.216211438724;

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
    msg.setTimeStamp(0.370152408136);
    msg.setSource(57767U);
    msg.setSourceEntity(2U);
    msg.setDestination(55565U);
    msg.setDestinationEntity(157U);
    msg.value = 0.932071333819;

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
    msg.setTimeStamp(0.216129054995);
    msg.setSource(64398U);
    msg.setSourceEntity(243U);
    msg.setDestination(31034U);
    msg.setDestinationEntity(148U);
    msg.value = 0.614448673181;

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
    msg.setTimeStamp(0.548783857232);
    msg.setSource(5778U);
    msg.setSourceEntity(115U);
    msg.setDestination(32964U);
    msg.setDestinationEntity(158U);
    msg.value = 0.790543887484;

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
    msg.setTimeStamp(0.426851881457);
    msg.setSource(61425U);
    msg.setSourceEntity(69U);
    msg.setDestination(45275U);
    msg.setDestinationEntity(97U);
    msg.value = 0.358475392922;

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
    msg.setTimeStamp(0.51465548477);
    msg.setSource(44646U);
    msg.setSourceEntity(45U);
    msg.setDestination(11779U);
    msg.setDestinationEntity(149U);
    msg.value = 0.747059945499;

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
    msg.setTimeStamp(0.459964047849);
    msg.setSource(59464U);
    msg.setSourceEntity(63U);
    msg.setDestination(59683U);
    msg.setDestinationEntity(199U);
    msg.value = 0.294114104016;

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
    msg.setTimeStamp(0.154165775613);
    msg.setSource(60695U);
    msg.setSourceEntity(156U);
    msg.setDestination(42955U);
    msg.setDestinationEntity(202U);
    msg.id = 201U;
    msg.zoom = 138U;
    msg.action = 131U;

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
    msg.setTimeStamp(0.635696730504);
    msg.setSource(51171U);
    msg.setSourceEntity(146U);
    msg.setDestination(17166U);
    msg.setDestinationEntity(105U);
    msg.id = 119U;
    msg.zoom = 20U;
    msg.action = 168U;

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
    msg.setTimeStamp(0.145218967293);
    msg.setSource(23078U);
    msg.setSourceEntity(234U);
    msg.setDestination(29852U);
    msg.setDestinationEntity(71U);
    msg.id = 136U;
    msg.zoom = 181U;
    msg.action = 51U;

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
    msg.setTimeStamp(0.722262120193);
    msg.setSource(57840U);
    msg.setSourceEntity(113U);
    msg.setDestination(59068U);
    msg.setDestinationEntity(108U);
    msg.id = 125U;
    msg.value = 0.649214981869;

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
    msg.setTimeStamp(0.0863253330176);
    msg.setSource(46273U);
    msg.setSourceEntity(9U);
    msg.setDestination(38460U);
    msg.setDestinationEntity(166U);
    msg.id = 167U;
    msg.value = 0.358274297889;

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
    msg.setTimeStamp(0.91716540911);
    msg.setSource(20581U);
    msg.setSourceEntity(95U);
    msg.setDestination(16830U);
    msg.setDestinationEntity(156U);
    msg.id = 212U;
    msg.value = 0.368491827547;

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
    msg.setTimeStamp(0.242050973254);
    msg.setSource(6232U);
    msg.setSourceEntity(9U);
    msg.setDestination(31133U);
    msg.setDestinationEntity(105U);
    msg.id = 148U;
    msg.value = 0.244010829344;

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
    msg.setTimeStamp(0.803855413551);
    msg.setSource(25234U);
    msg.setSourceEntity(115U);
    msg.setDestination(59613U);
    msg.setDestinationEntity(89U);
    msg.id = 147U;
    msg.value = 0.498246314288;

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
    msg.setTimeStamp(0.13908727176);
    msg.setSource(13722U);
    msg.setSourceEntity(19U);
    msg.setDestination(62988U);
    msg.setDestinationEntity(113U);
    msg.id = 81U;
    msg.value = 0.170733077928;

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
    msg.setTimeStamp(0.72122275444);
    msg.setSource(50196U);
    msg.setSourceEntity(234U);
    msg.setDestination(51974U);
    msg.setDestinationEntity(167U);
    msg.id = 49U;
    msg.angle = 0.232169789802;

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
    msg.setTimeStamp(0.304980005539);
    msg.setSource(51459U);
    msg.setSourceEntity(95U);
    msg.setDestination(58505U);
    msg.setDestinationEntity(139U);
    msg.id = 38U;
    msg.angle = 0.450252346496;

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
    msg.setTimeStamp(0.580825705998);
    msg.setSource(32633U);
    msg.setSourceEntity(161U);
    msg.setDestination(17807U);
    msg.setDestinationEntity(171U);
    msg.id = 220U;
    msg.angle = 0.986439757074;

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
    msg.setTimeStamp(0.290463812639);
    msg.setSource(38549U);
    msg.setSourceEntity(175U);
    msg.setDestination(65295U);
    msg.setDestinationEntity(142U);
    msg.op = 138U;
    msg.actions.assign("XUJLGQNARJEPQXBLFJNFPVJGUKWTIWNPJRXSVJGMVHEVZBIJLQ");

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
    msg.setTimeStamp(0.75947493634);
    msg.setSource(7480U);
    msg.setSourceEntity(115U);
    msg.setDestination(16608U);
    msg.setDestinationEntity(146U);
    msg.op = 215U;
    msg.actions.assign("EVBZEQOJUACDRJAIGNQIYDEDYFSRZUIUBOJFOUWWXOPWVWKTRHTQJSQWAMBYFGUCBTKWVIHQXDXZIQXYNINPDNGTSICBAUOSKLERDELBMAMVUYVFEKMTZKORLLFXBWFJLXZCYNGQPTMQNITEPVTCABAJWOKAHZNVYREMSPKGLZ");

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
    msg.setTimeStamp(0.9418881734);
    msg.setSource(46232U);
    msg.setSourceEntity(156U);
    msg.setDestination(20794U);
    msg.setDestinationEntity(23U);
    msg.op = 138U;
    msg.actions.assign("ILAIGPZONYNSBGHGHODXWBRBSTVTYROBEQQAFTMLCWDUCGKPUNPJKPLOWOIJZDWFOWMWIETIGHVXAWCZUARKHNXASCDTRYRUGTGXONDPPNYFMCZNMCZMAFVRIFJLYMFJQKUXEURVPLLXIBTQEAXLXBVUSFRHBXIFDKJZIRUNWQQH");

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
    msg.setTimeStamp(0.0863218803725);
    msg.setSource(12152U);
    msg.setSourceEntity(79U);
    msg.setDestination(5570U);
    msg.setDestinationEntity(80U);
    msg.actions.assign("IWCMBUSHDNLVHZEALECZTOXYPTKOZALDVXWEUTTYYNRRVRNOQVGGCQEFRIJYOWDWIMWAZVQRSFKBEHAMGSUNAONUKIJKDMFLFUDJNPUNXTTNZLZHAIPRGWFTKJGQFCJXSOXXIQLCSDRHAQCEVYWSQUBGPGXYTTMOBTLMUZJHDUZIVDSWWJKOEHIQVMPNEUHRCPALBHXJFXCXICAZSBPZNBFGQLYSM");

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
    msg.setTimeStamp(0.339452061153);
    msg.setSource(48251U);
    msg.setSourceEntity(75U);
    msg.setDestination(45885U);
    msg.setDestinationEntity(145U);
    msg.actions.assign("UBZOCMKQKVCWJLBAPHAQSBLSUGPXTGQIQEVUTDACSKIQMYVETTRCYEXODGXUDNSFBNZXBLEZPTFNKPKJJ");

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
    msg.setTimeStamp(0.688007512918);
    msg.setSource(33137U);
    msg.setSourceEntity(105U);
    msg.setDestination(21307U);
    msg.setDestinationEntity(57U);
    msg.actions.assign("BVRUPLMPPBVKJBDSXJBHILCZTNWDYJPTIVIZQQRWOEKXQLBKTZJSOMDWTEWCVIAQHRXZVWFOPXAYLNMJVHCAUYMFLGFNBCHAFZTCGRCLHOSHNSYLUINFCGQMPZEJXJ");

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
    msg.setTimeStamp(0.551742927833);
    msg.setSource(17912U);
    msg.setSourceEntity(160U);
    msg.setDestination(58131U);
    msg.setDestinationEntity(170U);
    msg.button = 231U;
    msg.value = 254U;

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
    msg.setTimeStamp(0.755857444306);
    msg.setSource(58135U);
    msg.setSourceEntity(228U);
    msg.setDestination(44947U);
    msg.setDestinationEntity(13U);
    msg.button = 197U;
    msg.value = 89U;

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
    msg.setTimeStamp(0.104636801133);
    msg.setSource(22758U);
    msg.setSourceEntity(46U);
    msg.setDestination(2614U);
    msg.setDestinationEntity(214U);
    msg.button = 229U;
    msg.value = 127U;

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
    msg.setTimeStamp(0.885377864252);
    msg.setSource(7749U);
    msg.setSourceEntity(10U);
    msg.setDestination(44754U);
    msg.setDestinationEntity(150U);
    msg.op = 95U;
    msg.text.assign("OFQCMOJDPIPNJTKDDKAXMCESZLIOIRFILHITXNMWGPKYTODXKQSZVQCLLANESGWCFBUXUTJQFJDARSOEJRMFZ");

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
    msg.setTimeStamp(0.757902149041);
    msg.setSource(50926U);
    msg.setSourceEntity(230U);
    msg.setDestination(47872U);
    msg.setDestinationEntity(220U);
    msg.op = 180U;
    msg.text.assign("OWLULGVVVYHBVDXCOJADXFCRAKTFMZGDQMPRFXSVTHPDERJYDAM");

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
    msg.setTimeStamp(0.241064827437);
    msg.setSource(29927U);
    msg.setSourceEntity(15U);
    msg.setDestination(10431U);
    msg.setDestinationEntity(142U);
    msg.op = 127U;
    msg.text.assign("BXLEDOMMXMYFYXQTUFEKV");

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
    msg.setTimeStamp(0.223323782841);
    msg.setSource(24394U);
    msg.setSourceEntity(206U);
    msg.setDestination(47682U);
    msg.setDestinationEntity(187U);
    msg.op = 200U;
    msg.time_remain = 0.502734318538;
    msg.sched_time = 0.80575289398;

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
    msg.setTimeStamp(0.838700395505);
    msg.setSource(39051U);
    msg.setSourceEntity(61U);
    msg.setDestination(19721U);
    msg.setDestinationEntity(227U);
    msg.op = 120U;
    msg.time_remain = 0.521546481984;
    msg.sched_time = 0.272082740533;

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
    msg.setTimeStamp(0.84670613489);
    msg.setSource(30404U);
    msg.setSourceEntity(50U);
    msg.setDestination(63530U);
    msg.setDestinationEntity(162U);
    msg.op = 7U;
    msg.time_remain = 0.0330444358465;
    msg.sched_time = 0.764457027359;

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
    msg.setTimeStamp(0.727166360442);
    msg.setSource(26900U);
    msg.setSourceEntity(133U);
    msg.setDestination(41329U);
    msg.setDestinationEntity(116U);
    msg.name.assign("UOXLQTITVVPKHVSPISUIXRBHAUUXKNTQSAMWFNNMCNYPRSFDRDKWECJLCEBLDRQXMUHPSTHENMIHCMMSCBVIASALMDXKGSWQXUVDNKQZAIPXIZITNYQRTVMZKAJGNZVPEFEKFFWGDQZESJCAYRJEQGKQWZGCLZZMRJPSBBOVPLFRYXCDBDUPKOJBLGAAOBMLXJOYVARBUTRDXU");
    msg.op = 163U;
    msg.sched_time = 0.944119559107;

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
    msg.setTimeStamp(0.326163371193);
    msg.setSource(39484U);
    msg.setSourceEntity(110U);
    msg.setDestination(23946U);
    msg.setDestinationEntity(198U);
    msg.name.assign("TYWVYGYGSZPHPTPFFTSTHLUZVUHROVLMQKQBDDUBCUMJFMZIQJENXOJSRXHBGYGTKBCXPUDIAPVVJBSVXFOLWKDABNAGWNCWHHIONBOSNVPZBZRLMYFTZLDEGJANXZKEPTUGJJDNCRHQZIOGK");
    msg.op = 87U;
    msg.sched_time = 0.882720842331;

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
    msg.setTimeStamp(0.932845764303);
    msg.setSource(34666U);
    msg.setSourceEntity(50U);
    msg.setDestination(47305U);
    msg.setDestinationEntity(9U);
    msg.name.assign("TQFNLHBMTOODMTWEJYFAFGDVWTKTGHUWBLZBZXGBEIZDVWISXUWPJQYVYRBQOVCZNMUWDREMIBTSUFERPJHUMABDJLOZMAPNDSLACKEIV");
    msg.op = 242U;
    msg.sched_time = 0.299241084296;

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
    msg.setTimeStamp(0.708724846263);
    msg.setSource(21808U);
    msg.setSourceEntity(73U);
    msg.setDestination(4778U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.129742842546);
    msg.setSource(43509U);
    msg.setSourceEntity(189U);
    msg.setDestination(19332U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.791144219656);
    msg.setSource(64755U);
    msg.setSourceEntity(212U);
    msg.setDestination(494U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.276963356384);
    msg.setSource(23816U);
    msg.setSourceEntity(113U);
    msg.setDestination(43702U);
    msg.setDestinationEntity(110U);
    msg.name.assign("HJHHEPKIAQDCWQLZJZRORKVBJCDJZHKMILBGKKTZNVF");
    msg.state = 26U;

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
    msg.setTimeStamp(0.433445881928);
    msg.setSource(41897U);
    msg.setSourceEntity(223U);
    msg.setDestination(53270U);
    msg.setDestinationEntity(29U);
    msg.name.assign("WGIJHBYOWOYIKNIBXVPNLFPPWIRDNUDUWKTDSJUPJFDNZASLREBMFK");
    msg.state = 156U;

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
    msg.setTimeStamp(0.399877356763);
    msg.setSource(59334U);
    msg.setSourceEntity(215U);
    msg.setDestination(27195U);
    msg.setDestinationEntity(209U);
    msg.name.assign("JONVTYKVSLXQRTAEGRIZPZCJKKIMUVQBYFHYNRQTBONETZIHURHBLGMNUNEMRDPYVJWYMGFXDAEIAQZNLEUUJVCCDVKWKXAWROFBJWODSLLEAPWWGGFIDMTQXGDFCRZCHNTZXZSFPRTSSRNOXSKVGMKDUWZHHKJDPZXIOWNHOVKOSULHDYRYTIGJYYIHQTVEJPCFSC");
    msg.state = 102U;

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
    msg.setTimeStamp(0.387406130863);
    msg.setSource(6510U);
    msg.setSourceEntity(12U);
    msg.setDestination(51193U);
    msg.setDestinationEntity(215U);
    msg.name.assign("KVJJJYGUSOMZMQHRPPBVQGIQSRVMSBYXZCTKMLENLYPWSEQWHLTSECKVIVXTNZUJIOXAQQFZCNKCGGBKVACHFYSFFEAXTRZHTYBKB");
    msg.value = 210U;

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
    msg.setTimeStamp(0.300174835977);
    msg.setSource(42303U);
    msg.setSourceEntity(34U);
    msg.setDestination(1824U);
    msg.setDestinationEntity(103U);
    msg.name.assign("YNVHYHDRLRANAWSYIFIMXVLPZKUGONGCETIJVXRUCAHULWBEZGWHCDOMUDDCLCBGJYPSWDIWCIMAFVJNYFHSCBZQBRMFZTWQHBJLPPMCHXSJFNXQRABVJKIWYFDEESSDGXKZYFPRODEOZZQATZOSNZBKIWQOBUVALMRDKLDPAF");
    msg.value = 2U;

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
    msg.setTimeStamp(0.0935538969765);
    msg.setSource(17946U);
    msg.setSourceEntity(89U);
    msg.setDestination(31119U);
    msg.setDestinationEntity(244U);
    msg.name.assign("LDZKCQOWSIJRFIJIKMPVEEVELCEGKVIYMGSUGIXAZYBLKSZHBDOBQRCJTHGAQYGFOEXQRLHLPRLRBTTJBIKHZCSMMSPILSSEURYSYUEKCWOKZSVMKQSDHZXUWITJULHHURMAJGNAFWWXEWMPNZVANNAQKPDYOBOPOCXVQHDJTFNAJOXACEGCZLFVRUHYPIFZFGMLJGYAVYUHBPXPVZWBOOXBJMNWDRDTKAXDMNGCPFDNCTUQYBNQWQ");
    msg.value = 232U;

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
    msg.setTimeStamp(0.551293071764);
    msg.setSource(58355U);
    msg.setSourceEntity(110U);
    msg.setDestination(44774U);
    msg.setDestinationEntity(2U);
    msg.name.assign("KEYKADSJPDOPIZLQPHMSUDBZPDBGHKFRCFCAQQFLFNJUSTXQOIQJRRBWHJERGFKWTGIVFACBTLEMGKDNHFNVPORWJMSGWLWRFTISPDXMWUGLNVMIINVVYXVZWOXSAYJHUYIOKTJCTXQYREMWLJEHIXE");

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
    msg.setTimeStamp(0.234510838969);
    msg.setSource(7207U);
    msg.setSourceEntity(195U);
    msg.setDestination(37961U);
    msg.setDestinationEntity(246U);
    msg.name.assign("BPKAHDIOQFAMBOHAEHDWGYMZPBEVVCXRSXXJVNENJFJEXMZZTWJZMVMOBCRSPTJTBSGBTVHTUNMFXGRJQHJCJ");

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
    msg.setTimeStamp(0.415443810755);
    msg.setSource(25281U);
    msg.setSourceEntity(55U);
    msg.setDestination(43106U);
    msg.setDestinationEntity(89U);
    msg.name.assign("TSFZYHMOXIKFQFFURNCJPIZXKGYKHCKZERIBNJOJVNMAMJCGGERWLAWSXWDCNGTSJXTLHJGEDLTYNDHUFAAYDZYIEPMTIZWPPYXSARCPHZPISBFFBGDQHQSLWQLQMAWCOVWUVHFBNKWXLODPBYMOUQUEYNIELKZSOTXVGBMTVIRLDPMCEHEQXJIZYAJBOGRWSORK");

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
    msg.setTimeStamp(0.371483400904);
    msg.setSource(15264U);
    msg.setSourceEntity(7U);
    msg.setDestination(7601U);
    msg.setDestinationEntity(190U);
    msg.name.assign("MIYFUTOLRXZVB");
    msg.value = 109U;

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
    msg.setTimeStamp(0.485385555513);
    msg.setSource(57624U);
    msg.setSourceEntity(178U);
    msg.setDestination(5881U);
    msg.setDestinationEntity(63U);
    msg.name.assign("PWWUVEJHBBQMSSAWRBRHNLHIAVUQAOXMOPHFJQFXYBAUZGSIBLSQIDVUWPPKNOLSIFZADVHGHZUHQEQBJESRNLPDRZKGTRNFYMMXOEJNJEULCKGXWFWUXUMBMKGTUBEKEOFPMTIDAZCCPUEWKDKDGVDSXTCCOLIDRYVMTOOKFTNRRB");
    msg.value = 108U;

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
    msg.setTimeStamp(0.2230585569);
    msg.setSource(47939U);
    msg.setSourceEntity(67U);
    msg.setDestination(63952U);
    msg.setDestinationEntity(129U);
    msg.name.assign("LADSDAQCCJNPLXUUMMTQGQWPVKVXQSKNCLZQTSDFQOOHXKMXVUJVRXXPUJOJIXUUNJGKZAIAJDWFEVIRYHTAJJAAUBECDLHSHMRLLSLNWCVZPCA");
    msg.value = 83U;

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
    msg.setTimeStamp(0.802422772456);
    msg.setSource(40733U);
    msg.setSourceEntity(25U);
    msg.setDestination(53594U);
    msg.setDestinationEntity(198U);
    msg.id = 124U;
    msg.period = 3131981527U;
    msg.duty_cycle = 419557212U;

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
    msg.setTimeStamp(0.352030654735);
    msg.setSource(65163U);
    msg.setSourceEntity(153U);
    msg.setDestination(55838U);
    msg.setDestinationEntity(13U);
    msg.id = 236U;
    msg.period = 2820705243U;
    msg.duty_cycle = 2875681023U;

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
    msg.setTimeStamp(0.149036946397);
    msg.setSource(59532U);
    msg.setSourceEntity(50U);
    msg.setDestination(620U);
    msg.setDestinationEntity(170U);
    msg.id = 53U;
    msg.period = 2850952720U;
    msg.duty_cycle = 2742078072U;

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
    msg.setTimeStamp(0.313694032609);
    msg.setSource(19133U);
    msg.setSourceEntity(163U);
    msg.setDestination(21988U);
    msg.setDestinationEntity(229U);
    msg.id = 9U;
    msg.period = 1605024861U;
    msg.duty_cycle = 274009715U;

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
    msg.setTimeStamp(0.0130587443623);
    msg.setSource(2129U);
    msg.setSourceEntity(82U);
    msg.setDestination(19462U);
    msg.setDestinationEntity(84U);
    msg.id = 131U;
    msg.period = 1179338880U;
    msg.duty_cycle = 202679483U;

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
    msg.setTimeStamp(0.276781487646);
    msg.setSource(27589U);
    msg.setSourceEntity(167U);
    msg.setDestination(27812U);
    msg.setDestinationEntity(186U);
    msg.id = 175U;
    msg.period = 970268378U;
    msg.duty_cycle = 3304502529U;

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
    msg.setTimeStamp(0.455659257326);
    msg.setSource(8393U);
    msg.setSourceEntity(168U);
    msg.setDestination(28294U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.53525607759;
    msg.lon = 0.65784830062;
    msg.height = 0.722316840547;
    msg.x = 0.620633281748;
    msg.y = 0.606694614218;
    msg.z = 0.36485560696;
    msg.phi = 0.814937541325;
    msg.theta = 0.780231388926;
    msg.psi = 0.174006387907;
    msg.u = 0.873156888928;
    msg.v = 0.71736920784;
    msg.w = 0.476009131274;
    msg.vx = 0.0385627861667;
    msg.vy = 0.854833298623;
    msg.vz = 0.254225264237;
    msg.p = 0.427861556237;
    msg.q = 0.74602884789;
    msg.r = 0.525834638138;
    msg.depth = 0.279455999747;
    msg.alt = 0.573556129829;

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
    msg.setTimeStamp(0.182149016572);
    msg.setSource(37438U);
    msg.setSourceEntity(246U);
    msg.setDestination(26024U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.717601208556;
    msg.lon = 0.718259932356;
    msg.height = 0.365745242536;
    msg.x = 0.825873875313;
    msg.y = 0.41015632978;
    msg.z = 0.654461452109;
    msg.phi = 0.205508648301;
    msg.theta = 0.635474472299;
    msg.psi = 0.0982208915887;
    msg.u = 0.904872755401;
    msg.v = 0.253653725399;
    msg.w = 0.162971522318;
    msg.vx = 0.531235134148;
    msg.vy = 0.703524198207;
    msg.vz = 0.850467555883;
    msg.p = 0.950838782248;
    msg.q = 0.719305218479;
    msg.r = 0.472957185459;
    msg.depth = 0.797790564979;
    msg.alt = 0.814576919803;

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
    msg.setTimeStamp(0.818872434272);
    msg.setSource(7499U);
    msg.setSourceEntity(252U);
    msg.setDestination(27000U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.187114466644;
    msg.lon = 0.71528821201;
    msg.height = 0.0349376778244;
    msg.x = 0.785562345215;
    msg.y = 0.932546248609;
    msg.z = 0.898148441715;
    msg.phi = 0.192403877826;
    msg.theta = 0.393680042643;
    msg.psi = 0.728757210278;
    msg.u = 0.0806527082681;
    msg.v = 0.388100018575;
    msg.w = 0.866970391803;
    msg.vx = 0.0729261482928;
    msg.vy = 0.0495792680078;
    msg.vz = 0.408858568623;
    msg.p = 0.580468945525;
    msg.q = 0.988633629245;
    msg.r = 0.467404600815;
    msg.depth = 0.083065672322;
    msg.alt = 0.984466308131;

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
    msg.setTimeStamp(0.532168908767);
    msg.setSource(60855U);
    msg.setSourceEntity(213U);
    msg.setDestination(21760U);
    msg.setDestinationEntity(250U);
    msg.x = 0.433897112028;
    msg.y = 0.995374536861;
    msg.z = 0.0562484750733;

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
    msg.setTimeStamp(0.659844203554);
    msg.setSource(52710U);
    msg.setSourceEntity(129U);
    msg.setDestination(59327U);
    msg.setDestinationEntity(221U);
    msg.x = 0.507653021599;
    msg.y = 0.950863553238;
    msg.z = 0.826541076449;

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
    msg.setTimeStamp(0.195351032364);
    msg.setSource(56895U);
    msg.setSourceEntity(35U);
    msg.setDestination(40712U);
    msg.setDestinationEntity(119U);
    msg.x = 0.315295172208;
    msg.y = 0.239995233977;
    msg.z = 0.0928957890491;

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
    msg.setTimeStamp(0.538283689164);
    msg.setSource(48165U);
    msg.setSourceEntity(74U);
    msg.setDestination(4527U);
    msg.setDestinationEntity(18U);
    msg.value = 0.345627120657;

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
    msg.setTimeStamp(0.602116841503);
    msg.setSource(41216U);
    msg.setSourceEntity(182U);
    msg.setDestination(15481U);
    msg.setDestinationEntity(10U);
    msg.value = 0.99596950378;

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
    msg.setTimeStamp(0.423543004234);
    msg.setSource(56165U);
    msg.setSourceEntity(73U);
    msg.setDestination(57055U);
    msg.setDestinationEntity(117U);
    msg.value = 0.588204670316;

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
    msg.setTimeStamp(0.577887859092);
    msg.setSource(11925U);
    msg.setSourceEntity(254U);
    msg.setDestination(61133U);
    msg.setDestinationEntity(142U);
    msg.value = 0.734479190588;

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
    msg.setTimeStamp(0.94004911369);
    msg.setSource(62617U);
    msg.setSourceEntity(207U);
    msg.setDestination(58716U);
    msg.setDestinationEntity(24U);
    msg.value = 0.150241530968;

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
    msg.setTimeStamp(0.763290743605);
    msg.setSource(1944U);
    msg.setSourceEntity(246U);
    msg.setDestination(51081U);
    msg.setDestinationEntity(195U);
    msg.value = 0.421119781016;

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
    msg.setTimeStamp(0.244172403715);
    msg.setSource(36129U);
    msg.setSourceEntity(177U);
    msg.setDestination(4501U);
    msg.setDestinationEntity(99U);
    msg.x = 0.201631993553;
    msg.y = 0.422194850716;
    msg.z = 0.915504884439;
    msg.phi = 0.386602039123;
    msg.theta = 0.340611158466;
    msg.psi = 0.186348923019;
    msg.p = 0.657571767451;
    msg.q = 0.0756108965555;
    msg.r = 0.804928209036;
    msg.u = 0.564281015104;
    msg.v = 0.366683372157;
    msg.w = 0.744242330759;
    msg.bias_psi = 0.60788786823;
    msg.bias_r = 0.84693520636;

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
    msg.setTimeStamp(0.108678107897);
    msg.setSource(54074U);
    msg.setSourceEntity(224U);
    msg.setDestination(51209U);
    msg.setDestinationEntity(184U);
    msg.x = 0.174195069449;
    msg.y = 0.466734757914;
    msg.z = 0.963877667662;
    msg.phi = 0.234573730408;
    msg.theta = 0.116175740353;
    msg.psi = 0.254615313323;
    msg.p = 0.139637634161;
    msg.q = 0.284549678277;
    msg.r = 0.666674494037;
    msg.u = 0.371615816567;
    msg.v = 0.524485068279;
    msg.w = 0.628036656604;
    msg.bias_psi = 0.843221370521;
    msg.bias_r = 0.302175178402;

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
    msg.setTimeStamp(0.0715811236489);
    msg.setSource(30569U);
    msg.setSourceEntity(246U);
    msg.setDestination(59780U);
    msg.setDestinationEntity(30U);
    msg.x = 0.737267739719;
    msg.y = 0.383959532015;
    msg.z = 0.812952885792;
    msg.phi = 0.728394699519;
    msg.theta = 0.459842308159;
    msg.psi = 0.427687865211;
    msg.p = 0.734171162338;
    msg.q = 0.235303055394;
    msg.r = 0.182990763091;
    msg.u = 0.703945134085;
    msg.v = 0.902463288368;
    msg.w = 0.425176095092;
    msg.bias_psi = 0.564264005114;
    msg.bias_r = 0.685178294808;

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
    msg.setTimeStamp(0.559844210216);
    msg.setSource(25814U);
    msg.setSourceEntity(185U);
    msg.setDestination(29990U);
    msg.setDestinationEntity(10U);
    msg.bias_psi = 0.963023679309;
    msg.bias_r = 0.741126787026;
    msg.cog = 0.0628853334751;
    msg.cyaw = 0.326315952003;
    msg.gps_rej_level = 0.0103813976437;
    msg.lbl_rej_level = 0.840586192362;
    msg.custom_x = 0.868971998568;
    msg.custom_y = 0.745756339898;
    msg.custom_z = 0.109850528501;

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
    msg.setTimeStamp(0.140325341913);
    msg.setSource(48726U);
    msg.setSourceEntity(49U);
    msg.setDestination(25309U);
    msg.setDestinationEntity(176U);
    msg.bias_psi = 0.837583980885;
    msg.bias_r = 0.572693279887;
    msg.cog = 0.393805911005;
    msg.cyaw = 0.120888994027;
    msg.gps_rej_level = 0.654686893854;
    msg.lbl_rej_level = 0.212257766922;
    msg.custom_x = 0.659025539874;
    msg.custom_y = 0.929656165211;
    msg.custom_z = 0.483401910736;

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
    msg.setTimeStamp(0.456157160066);
    msg.setSource(47240U);
    msg.setSourceEntity(164U);
    msg.setDestination(42832U);
    msg.setDestinationEntity(100U);
    msg.bias_psi = 0.574000783355;
    msg.bias_r = 0.0504351544736;
    msg.cog = 0.101676333281;
    msg.cyaw = 0.794365812685;
    msg.gps_rej_level = 0.189331744694;
    msg.lbl_rej_level = 0.923922200605;
    msg.custom_x = 0.37378977012;
    msg.custom_y = 0.521245108795;
    msg.custom_z = 0.248983535629;

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
    msg.setTimeStamp(0.508011239949);
    msg.setSource(8567U);
    msg.setSourceEntity(129U);
    msg.setDestination(626U);
    msg.setDestinationEntity(6U);
    msg.utc_time = 0.336764619245;
    msg.reason = 78U;

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
    msg.setTimeStamp(0.272416324675);
    msg.setSource(45819U);
    msg.setSourceEntity(175U);
    msg.setDestination(59653U);
    msg.setDestinationEntity(219U);
    msg.utc_time = 0.221254030405;
    msg.reason = 66U;

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
    msg.setTimeStamp(0.669085959287);
    msg.setSource(11165U);
    msg.setSourceEntity(119U);
    msg.setDestination(27809U);
    msg.setDestinationEntity(116U);
    msg.utc_time = 0.668379752376;
    msg.reason = 185U;

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
    msg.setTimeStamp(0.35753036932);
    msg.setSource(45336U);
    msg.setSourceEntity(234U);
    msg.setDestination(20951U);
    msg.setDestinationEntity(33U);
    msg.id = 42U;
    msg.range = 0.474261519542;
    msg.acceptance = 150U;

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
    msg.setTimeStamp(0.83415260135);
    msg.setSource(42745U);
    msg.setSourceEntity(43U);
    msg.setDestination(51180U);
    msg.setDestinationEntity(80U);
    msg.id = 10U;
    msg.range = 0.189336983217;
    msg.acceptance = 143U;

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
    msg.setTimeStamp(0.429703960245);
    msg.setSource(38206U);
    msg.setSourceEntity(238U);
    msg.setDestination(10231U);
    msg.setDestinationEntity(198U);
    msg.id = 213U;
    msg.range = 0.347772263739;
    msg.acceptance = 187U;

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
    msg.setTimeStamp(0.867646212609);
    msg.setSource(19000U);
    msg.setSourceEntity(66U);
    msg.setDestination(28445U);
    msg.setDestinationEntity(148U);
    msg.type = 214U;
    msg.reason = 251U;
    msg.value = 0.267970700594;
    msg.timestep = 0.334320201012;

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
    msg.setTimeStamp(0.759418444837);
    msg.setSource(50262U);
    msg.setSourceEntity(40U);
    msg.setDestination(28623U);
    msg.setDestinationEntity(195U);
    msg.type = 155U;
    msg.reason = 64U;
    msg.value = 0.677031408765;
    msg.timestep = 0.301479221537;

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
    msg.setTimeStamp(0.480840751437);
    msg.setSource(49906U);
    msg.setSourceEntity(157U);
    msg.setDestination(47317U);
    msg.setDestinationEntity(98U);
    msg.type = 64U;
    msg.reason = 68U;
    msg.value = 0.164569330948;
    msg.timestep = 0.393221853957;

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
    msg.setTimeStamp(0.43052266581);
    msg.setSource(47320U);
    msg.setSourceEntity(19U);
    msg.setDestination(2929U);
    msg.setDestinationEntity(80U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FJSKTJPLSZVCRJSNUYFHUWANRDHPPMMGXTZUKMMOHVBCZQQAEUJHRYBUJJSVJTQELZRLRYBRBSINSCYXKPFEQXIKRLQNEIFFCJXOYGMDIDTKNWMYDBFODZLNVCEUHXTTIFKMVARTWOYAADQTCPGENGCOZWMXBSGAHZWPBWJFBVKAZNLWQEVWOTIGOEZ");
    tmp_msg_0.lat = 0.366709003126;
    tmp_msg_0.lon = 0.896759111091;
    tmp_msg_0.depth = 0.681635733264;
    tmp_msg_0.query_channel = 123U;
    tmp_msg_0.reply_channel = 24U;
    tmp_msg_0.transponder_delay = 135U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.168292449933;
    msg.y = 0.681556288219;
    msg.var_x = 0.185165407951;
    msg.var_y = 0.00620943469294;
    msg.distance = 0.902979096331;

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
    msg.setTimeStamp(0.276427775792);
    msg.setSource(766U);
    msg.setSourceEntity(167U);
    msg.setDestination(42460U);
    msg.setDestinationEntity(197U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SATQFRQJFTYOINRRXNUPACQAVFBMGELOBWHMLLISSNQXDAJQMYKZNHITKOLUACKWLFWNHHVEONKCPSMEGCLLZQVSCTIVZAVMUPIPOAIYUUOGZWMMDYKBZYSREVBMJYOWJYDUFHFBXHCQETDGYEZCEPOJUZFQHLRNXCQHDNDVLVXDQVYPXTZGXDGGBTREPWENLCKVRWD");
    tmp_msg_0.lat = 0.187347686361;
    tmp_msg_0.lon = 0.848469759089;
    tmp_msg_0.depth = 0.588824018953;
    tmp_msg_0.query_channel = 10U;
    tmp_msg_0.reply_channel = 73U;
    tmp_msg_0.transponder_delay = 105U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.20342768559;
    msg.y = 0.621246170466;
    msg.var_x = 0.957556716457;
    msg.var_y = 0.495030822309;
    msg.distance = 0.175394478665;

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
    msg.setTimeStamp(0.68471618877);
    msg.setSource(21338U);
    msg.setSourceEntity(114U);
    msg.setDestination(41553U);
    msg.setDestinationEntity(54U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JKFOKGEOPLORSJSEFGLPOAYWSXGYBQHRUWVRNPFQGXKMVJJXMDNGZSDNOERUZMYTQDZWMHKEVCMELWVDCJLCYVHNRTNAWTXPUPQMAALXWEZZVHSBHJNWFEEOUDTLKWIVQLTYNPOPBHXVYNDNWCUIDXUWGRBIDKAHQHTADZYAMQCFSZQ");
    tmp_msg_0.lat = 0.498248268112;
    tmp_msg_0.lon = 0.547462355148;
    tmp_msg_0.depth = 0.430579539943;
    tmp_msg_0.query_channel = 237U;
    tmp_msg_0.reply_channel = 172U;
    tmp_msg_0.transponder_delay = 71U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.824401417491;
    msg.y = 0.134522592557;
    msg.var_x = 0.352420932085;
    msg.var_y = 0.276917611346;
    msg.distance = 0.735407732944;

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
    msg.setTimeStamp(0.0837596501737);
    msg.setSource(57149U);
    msg.setSourceEntity(91U);
    msg.setDestination(12108U);
    msg.setDestinationEntity(185U);
    msg.state = 28U;

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
    msg.setTimeStamp(0.258475918755);
    msg.setSource(12924U);
    msg.setSourceEntity(132U);
    msg.setDestination(29385U);
    msg.setDestinationEntity(91U);
    msg.state = 119U;

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
    msg.setTimeStamp(0.134634892914);
    msg.setSource(36097U);
    msg.setSourceEntity(210U);
    msg.setDestination(19497U);
    msg.setDestinationEntity(152U);
    msg.state = 55U;

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
    msg.setTimeStamp(0.869244626769);
    msg.setSource(7663U);
    msg.setSourceEntity(190U);
    msg.setDestination(5624U);
    msg.setDestinationEntity(77U);
    msg.x = 0.902175391897;
    msg.y = 0.891191485814;
    msg.z = 0.0497560032998;

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
    msg.setTimeStamp(0.477096299566);
    msg.setSource(60082U);
    msg.setSourceEntity(39U);
    msg.setDestination(56221U);
    msg.setDestinationEntity(113U);
    msg.x = 0.472733473134;
    msg.y = 0.243309860073;
    msg.z = 0.842154231582;

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
    msg.setTimeStamp(0.948258557969);
    msg.setSource(63316U);
    msg.setSourceEntity(226U);
    msg.setDestination(32694U);
    msg.setDestinationEntity(252U);
    msg.x = 0.0203131721906;
    msg.y = 0.7812393918;
    msg.z = 0.787230372733;

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
    msg.setTimeStamp(0.261323642482);
    msg.setSource(9689U);
    msg.setSourceEntity(16U);
    msg.setDestination(36760U);
    msg.setDestinationEntity(209U);
    msg.va = 0.976664653944;
    msg.aoa = 0.558988325618;
    msg.ssa = 0.331832411248;

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
    msg.setTimeStamp(0.313292452726);
    msg.setSource(9513U);
    msg.setSourceEntity(120U);
    msg.setDestination(63071U);
    msg.setDestinationEntity(110U);
    msg.va = 0.414423396632;
    msg.aoa = 0.34383312897;
    msg.ssa = 0.510644623416;

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
    msg.setTimeStamp(0.887103730805);
    msg.setSource(37325U);
    msg.setSourceEntity(83U);
    msg.setDestination(789U);
    msg.setDestinationEntity(3U);
    msg.va = 0.278880978322;
    msg.aoa = 0.979429851777;
    msg.ssa = 0.592990742164;

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
    msg.setTimeStamp(0.435140867166);
    msg.setSource(65429U);
    msg.setSourceEntity(225U);
    msg.setDestination(53725U);
    msg.setDestinationEntity(226U);
    msg.mmsi = 3341387477U;
    msg.lon = 0.336815038569;
    msg.lat = 0.120671468515;
    msg.x = 0.556975408082;
    msg.y = 0.420796673161;
    msg.psi = 0.479998820523;
    msg.u = 0.709782965557;
    msg.v = 0.106550426398;
    msg.a = 0.446049547751;
    msg.b = 0.542599058643;
    msg.c = 0.13972222538;
    msg.d = 0.770598990975;

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
    msg.setTimeStamp(0.446035913943);
    msg.setSource(10637U);
    msg.setSourceEntity(85U);
    msg.setDestination(6268U);
    msg.setDestinationEntity(80U);
    msg.mmsi = 430139542U;
    msg.lon = 0.756290132362;
    msg.lat = 0.661940490786;
    msg.x = 0.82338541895;
    msg.y = 0.408263688478;
    msg.psi = 0.0490455169863;
    msg.u = 0.073477588631;
    msg.v = 0.0218481460524;
    msg.a = 0.2851839323;
    msg.b = 0.409321915791;
    msg.c = 0.32906287281;
    msg.d = 0.392843651142;

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
    msg.setTimeStamp(0.557849881833);
    msg.setSource(56395U);
    msg.setSourceEntity(186U);
    msg.setDestination(7575U);
    msg.setDestinationEntity(98U);
    msg.mmsi = 3792584366U;
    msg.lon = 0.654442377801;
    msg.lat = 0.955272876964;
    msg.x = 0.554199009124;
    msg.y = 0.135836408349;
    msg.psi = 0.704735407881;
    msg.u = 0.018752231039;
    msg.v = 0.331939710747;
    msg.a = 0.600361092047;
    msg.b = 0.360673605566;
    msg.c = 0.154191034916;
    msg.d = 0.879694738047;

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
    msg.setTimeStamp(0.0652098783389);
    msg.setSource(21178U);
    msg.setSourceEntity(235U);
    msg.setDestination(48492U);
    msg.setDestinationEntity(202U);
    msg.value = 0.666555625696;

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
    msg.setTimeStamp(0.132427956597);
    msg.setSource(12425U);
    msg.setSourceEntity(113U);
    msg.setDestination(12704U);
    msg.setDestinationEntity(33U);
    msg.value = 0.145398641647;

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
    msg.setTimeStamp(0.282047984937);
    msg.setSource(30678U);
    msg.setSourceEntity(212U);
    msg.setDestination(15987U);
    msg.setDestinationEntity(240U);
    msg.value = 0.128523494814;

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
    msg.setTimeStamp(0.997580552151);
    msg.setSource(64665U);
    msg.setSourceEntity(130U);
    msg.setDestination(46916U);
    msg.setDestinationEntity(214U);
    msg.value = 0.543095197705;
    msg.z_units = 40U;

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
    msg.setTimeStamp(0.822362453734);
    msg.setSource(10950U);
    msg.setSourceEntity(44U);
    msg.setDestination(23597U);
    msg.setDestinationEntity(14U);
    msg.value = 0.45773687033;
    msg.z_units = 60U;

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
    msg.setTimeStamp(0.232500695715);
    msg.setSource(48479U);
    msg.setSourceEntity(213U);
    msg.setDestination(29229U);
    msg.setDestinationEntity(126U);
    msg.value = 0.889580603026;
    msg.z_units = 219U;

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
    msg.setTimeStamp(0.7161200663);
    msg.setSource(1278U);
    msg.setSourceEntity(76U);
    msg.setDestination(11378U);
    msg.setDestinationEntity(91U);
    msg.value = 0.48963905465;
    msg.speed_units = 33U;

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
    msg.setTimeStamp(0.102303364217);
    msg.setSource(63236U);
    msg.setSourceEntity(99U);
    msg.setDestination(8967U);
    msg.setDestinationEntity(208U);
    msg.value = 0.824667558736;
    msg.speed_units = 205U;

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
    msg.setTimeStamp(0.0476520507728);
    msg.setSource(12966U);
    msg.setSourceEntity(35U);
    msg.setDestination(50742U);
    msg.setDestinationEntity(129U);
    msg.value = 0.0903182469556;
    msg.speed_units = 101U;

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
    msg.setTimeStamp(0.78993269927);
    msg.setSource(27384U);
    msg.setSourceEntity(148U);
    msg.setDestination(35557U);
    msg.setDestinationEntity(207U);
    msg.value = 0.641386536112;

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
    msg.setTimeStamp(0.701229801317);
    msg.setSource(49392U);
    msg.setSourceEntity(33U);
    msg.setDestination(65532U);
    msg.setDestinationEntity(40U);
    msg.value = 0.212791975227;

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
    msg.setTimeStamp(0.581585760485);
    msg.setSource(33000U);
    msg.setSourceEntity(32U);
    msg.setDestination(21325U);
    msg.setDestinationEntity(11U);
    msg.value = 0.437146744811;

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
    msg.setTimeStamp(0.596335885585);
    msg.setSource(40135U);
    msg.setSourceEntity(219U);
    msg.setDestination(15403U);
    msg.setDestinationEntity(98U);
    msg.value = 0.696303439199;

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
    msg.setTimeStamp(0.260840139636);
    msg.setSource(64626U);
    msg.setSourceEntity(133U);
    msg.setDestination(13433U);
    msg.setDestinationEntity(4U);
    msg.value = 0.623306170993;

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
    msg.setTimeStamp(0.48759134967);
    msg.setSource(33584U);
    msg.setSourceEntity(198U);
    msg.setDestination(49077U);
    msg.setDestinationEntity(34U);
    msg.value = 0.728880168759;

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
    msg.setTimeStamp(0.71292167465);
    msg.setSource(28003U);
    msg.setSourceEntity(92U);
    msg.setDestination(31226U);
    msg.setDestinationEntity(0U);
    msg.value = 0.985634106736;

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
    msg.setTimeStamp(0.451994027673);
    msg.setSource(59465U);
    msg.setSourceEntity(248U);
    msg.setDestination(2937U);
    msg.setDestinationEntity(123U);
    msg.value = 0.913147013901;

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
    msg.setTimeStamp(0.358710497815);
    msg.setSource(27749U);
    msg.setSourceEntity(14U);
    msg.setDestination(61107U);
    msg.setDestinationEntity(253U);
    msg.value = 0.928444881165;

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
    msg.setTimeStamp(0.801873413681);
    msg.setSource(37852U);
    msg.setSourceEntity(129U);
    msg.setDestination(38864U);
    msg.setDestinationEntity(95U);
    msg.path_ref = 2716540171U;
    msg.start_lat = 0.14199823684;
    msg.start_lon = 0.581673258043;
    msg.start_z = 0.262876659787;
    msg.start_z_units = 62U;
    msg.end_lat = 0.452148110711;
    msg.end_lon = 0.028893544865;
    msg.end_z = 0.5931965253;
    msg.end_z_units = 116U;
    msg.speed = 0.345488408576;
    msg.speed_units = 242U;
    msg.lradius = 0.445294673506;
    msg.flags = 168U;

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
    msg.setTimeStamp(0.964399811859);
    msg.setSource(22128U);
    msg.setSourceEntity(164U);
    msg.setDestination(16331U);
    msg.setDestinationEntity(176U);
    msg.path_ref = 426485611U;
    msg.start_lat = 0.273765301629;
    msg.start_lon = 0.527340673061;
    msg.start_z = 0.266683680424;
    msg.start_z_units = 63U;
    msg.end_lat = 0.395559829248;
    msg.end_lon = 0.372556804194;
    msg.end_z = 0.140310081046;
    msg.end_z_units = 135U;
    msg.speed = 0.236741409021;
    msg.speed_units = 44U;
    msg.lradius = 0.390827219457;
    msg.flags = 127U;

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
    msg.setTimeStamp(0.908301190964);
    msg.setSource(11175U);
    msg.setSourceEntity(42U);
    msg.setDestination(33309U);
    msg.setDestinationEntity(114U);
    msg.path_ref = 2768634052U;
    msg.start_lat = 0.0355633393697;
    msg.start_lon = 0.396936233833;
    msg.start_z = 0.605114754888;
    msg.start_z_units = 217U;
    msg.end_lat = 0.104666425831;
    msg.end_lon = 0.265089850682;
    msg.end_z = 0.432793339718;
    msg.end_z_units = 17U;
    msg.speed = 0.709963821948;
    msg.speed_units = 209U;
    msg.lradius = 0.129030684761;
    msg.flags = 63U;

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
    msg.setTimeStamp(0.416276526586);
    msg.setSource(51426U);
    msg.setSourceEntity(50U);
    msg.setDestination(40434U);
    msg.setDestinationEntity(39U);
    msg.x = 0.00176840788653;
    msg.y = 0.55533724082;
    msg.z = 0.834882992823;
    msg.k = 0.444904623509;
    msg.m = 0.271183402296;
    msg.n = 0.8588710876;
    msg.flags = 17U;

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
    msg.setTimeStamp(0.147822934893);
    msg.setSource(12491U);
    msg.setSourceEntity(203U);
    msg.setDestination(43715U);
    msg.setDestinationEntity(178U);
    msg.x = 0.618057705147;
    msg.y = 0.920104658041;
    msg.z = 0.827254103931;
    msg.k = 0.934645723315;
    msg.m = 0.00826758505295;
    msg.n = 0.0907317573243;
    msg.flags = 169U;

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
    msg.setTimeStamp(0.626288729077);
    msg.setSource(44882U);
    msg.setSourceEntity(201U);
    msg.setDestination(31242U);
    msg.setDestinationEntity(182U);
    msg.x = 0.472922667012;
    msg.y = 0.833371592165;
    msg.z = 0.67296452485;
    msg.k = 0.772481783555;
    msg.m = 0.330815510329;
    msg.n = 0.799107302099;
    msg.flags = 55U;

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
    msg.setTimeStamp(0.481549452061);
    msg.setSource(51700U);
    msg.setSourceEntity(126U);
    msg.setDestination(3014U);
    msg.setDestinationEntity(104U);
    msg.value = 0.488224794009;

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
    msg.setTimeStamp(0.628782183192);
    msg.setSource(34649U);
    msg.setSourceEntity(226U);
    msg.setDestination(6304U);
    msg.setDestinationEntity(214U);
    msg.value = 0.274036524632;

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
    msg.setTimeStamp(0.00999583338064);
    msg.setSource(27335U);
    msg.setSourceEntity(106U);
    msg.setDestination(1649U);
    msg.setDestinationEntity(146U);
    msg.value = 0.773358937489;

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
    msg.setTimeStamp(0.49382798303);
    msg.setSource(34327U);
    msg.setSourceEntity(107U);
    msg.setDestination(31498U);
    msg.setDestinationEntity(95U);
    msg.u = 0.342950803015;
    msg.v = 0.802766395346;
    msg.w = 0.878156208864;
    msg.p = 0.256817052777;
    msg.q = 0.174497072303;
    msg.r = 0.951138904792;
    msg.flags = 193U;

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
    msg.setTimeStamp(0.739372677997);
    msg.setSource(8324U);
    msg.setSourceEntity(173U);
    msg.setDestination(13094U);
    msg.setDestinationEntity(238U);
    msg.u = 0.840553295375;
    msg.v = 0.125873213488;
    msg.w = 0.982805012137;
    msg.p = 0.915209450355;
    msg.q = 0.444956466897;
    msg.r = 0.703653149267;
    msg.flags = 117U;

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
    msg.setTimeStamp(0.403692533472);
    msg.setSource(48286U);
    msg.setSourceEntity(222U);
    msg.setDestination(29949U);
    msg.setDestinationEntity(215U);
    msg.u = 0.725641680652;
    msg.v = 0.0663446985257;
    msg.w = 0.899705408147;
    msg.p = 0.0142495344623;
    msg.q = 0.335062417938;
    msg.r = 0.70212635768;
    msg.flags = 130U;

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
    msg.setTimeStamp(0.877909353196);
    msg.setSource(50474U);
    msg.setSourceEntity(14U);
    msg.setDestination(21486U);
    msg.setDestinationEntity(155U);
    msg.path_ref = 781291075U;
    msg.start_lat = 0.535274907548;
    msg.start_lon = 0.750880575587;
    msg.start_z = 0.590790491789;
    msg.start_z_units = 128U;
    msg.end_lat = 0.708589614834;
    msg.end_lon = 0.141565197003;
    msg.end_z = 0.942963975166;
    msg.end_z_units = 44U;
    msg.lradius = 0.459506640484;
    msg.flags = 179U;
    msg.x = 0.392586491458;
    msg.y = 0.384851915;
    msg.z = 0.262869087336;
    msg.vx = 0.165363888171;
    msg.vy = 0.146744356478;
    msg.vz = 0.386132401474;
    msg.course_error = 0.714713781064;
    msg.eta = 49660U;

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
    msg.setTimeStamp(0.682533092566);
    msg.setSource(53718U);
    msg.setSourceEntity(148U);
    msg.setDestination(32777U);
    msg.setDestinationEntity(191U);
    msg.path_ref = 556053360U;
    msg.start_lat = 0.474776404557;
    msg.start_lon = 0.863757221555;
    msg.start_z = 0.0983273093105;
    msg.start_z_units = 207U;
    msg.end_lat = 0.972746742071;
    msg.end_lon = 0.871572486669;
    msg.end_z = 0.616207671735;
    msg.end_z_units = 190U;
    msg.lradius = 0.861982009599;
    msg.flags = 2U;
    msg.x = 0.263054998277;
    msg.y = 0.735637105152;
    msg.z = 0.877277889631;
    msg.vx = 0.0768838823465;
    msg.vy = 0.0469464184727;
    msg.vz = 0.647163167021;
    msg.course_error = 0.388127705519;
    msg.eta = 42522U;

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
    msg.setTimeStamp(0.841729982159);
    msg.setSource(61867U);
    msg.setSourceEntity(72U);
    msg.setDestination(63866U);
    msg.setDestinationEntity(225U);
    msg.path_ref = 4163830171U;
    msg.start_lat = 0.506134051162;
    msg.start_lon = 0.0208506760274;
    msg.start_z = 0.6472674631;
    msg.start_z_units = 179U;
    msg.end_lat = 0.28006448118;
    msg.end_lon = 0.983151999625;
    msg.end_z = 0.615708612148;
    msg.end_z_units = 70U;
    msg.lradius = 0.683609677978;
    msg.flags = 114U;
    msg.x = 0.137294628827;
    msg.y = 0.0522255307006;
    msg.z = 0.94716194981;
    msg.vx = 0.150206051454;
    msg.vy = 0.0351966580516;
    msg.vz = 0.275313662967;
    msg.course_error = 0.624079721542;
    msg.eta = 41758U;

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
    msg.setTimeStamp(0.52551725827);
    msg.setSource(38565U);
    msg.setSourceEntity(242U);
    msg.setDestination(29112U);
    msg.setDestinationEntity(106U);
    msg.k = 0.446483964241;
    msg.m = 0.0258506185005;
    msg.n = 0.954599857176;

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
    msg.setTimeStamp(0.00474168503307);
    msg.setSource(23562U);
    msg.setSourceEntity(41U);
    msg.setDestination(26698U);
    msg.setDestinationEntity(80U);
    msg.k = 0.118585347979;
    msg.m = 0.722036215178;
    msg.n = 0.811238556371;

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
    msg.setTimeStamp(0.633173529951);
    msg.setSource(38698U);
    msg.setSourceEntity(90U);
    msg.setDestination(6252U);
    msg.setDestinationEntity(97U);
    msg.k = 0.742391449824;
    msg.m = 0.39203300143;
    msg.n = 0.239051736117;

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
    msg.setTimeStamp(0.990477754028);
    msg.setSource(30155U);
    msg.setSourceEntity(72U);
    msg.setDestination(55010U);
    msg.setDestinationEntity(202U);
    msg.p = 0.831751752112;
    msg.i = 0.108640261454;
    msg.d = 0.712539025672;
    msg.a = 0.819829263964;

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
    msg.setTimeStamp(0.461426160925);
    msg.setSource(20446U);
    msg.setSourceEntity(78U);
    msg.setDestination(40026U);
    msg.setDestinationEntity(217U);
    msg.p = 0.400682549755;
    msg.i = 0.738202228455;
    msg.d = 0.206705139479;
    msg.a = 0.390973032799;

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
    msg.setTimeStamp(0.589338820871);
    msg.setSource(29663U);
    msg.setSourceEntity(70U);
    msg.setDestination(48868U);
    msg.setDestinationEntity(175U);
    msg.p = 0.852336481729;
    msg.i = 0.812009553377;
    msg.d = 0.651636333669;
    msg.a = 0.435526756055;

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
    msg.setTimeStamp(0.999947251061);
    msg.setSource(43794U);
    msg.setSourceEntity(149U);
    msg.setDestination(55784U);
    msg.setDestinationEntity(252U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.0788357318543);
    msg.setSource(40022U);
    msg.setSourceEntity(70U);
    msg.setDestination(52939U);
    msg.setDestinationEntity(146U);
    msg.op = 180U;

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
    msg.setTimeStamp(0.0701460458063);
    msg.setSource(46861U);
    msg.setSourceEntity(86U);
    msg.setDestination(56022U);
    msg.setDestinationEntity(2U);
    msg.op = 107U;

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
    msg.setTimeStamp(0.325853070333);
    msg.setSource(26278U);
    msg.setSourceEntity(94U);
    msg.setDestination(50514U);
    msg.setDestinationEntity(57U);
    msg.x = 0.575130975032;
    msg.y = 0.800387495395;
    msg.z = 0.530225727534;
    msg.vx = 0.288840021043;
    msg.vy = 0.506515767519;
    msg.vz = 0.589958380364;
    msg.ax = 0.133510676474;
    msg.ay = 0.0749632159486;
    msg.az = 0.00355225029087;
    msg.flags = 26137U;

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
    msg.setTimeStamp(0.881766726468);
    msg.setSource(59880U);
    msg.setSourceEntity(47U);
    msg.setDestination(37904U);
    msg.setDestinationEntity(244U);
    msg.x = 0.568408963281;
    msg.y = 0.493260029807;
    msg.z = 0.85589485237;
    msg.vx = 0.631594179038;
    msg.vy = 0.699146796904;
    msg.vz = 0.294003090612;
    msg.ax = 0.0731544104062;
    msg.ay = 0.774393247334;
    msg.az = 0.833510974586;
    msg.flags = 50200U;

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
    msg.setTimeStamp(0.808211645019);
    msg.setSource(25837U);
    msg.setSourceEntity(167U);
    msg.setDestination(44943U);
    msg.setDestinationEntity(248U);
    msg.x = 0.691557402437;
    msg.y = 0.490922793325;
    msg.z = 0.550417989609;
    msg.vx = 0.105864875691;
    msg.vy = 0.988461252815;
    msg.vz = 0.129063681748;
    msg.ax = 0.28970402892;
    msg.ay = 0.319026025402;
    msg.az = 0.00728434729327;
    msg.flags = 38472U;

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
    msg.setTimeStamp(0.60092399866);
    msg.setSource(22281U);
    msg.setSourceEntity(207U);
    msg.setDestination(16248U);
    msg.setDestinationEntity(185U);
    msg.value = 0.848850151308;

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
    msg.setTimeStamp(0.933764953298);
    msg.setSource(57628U);
    msg.setSourceEntity(218U);
    msg.setDestination(30592U);
    msg.setDestinationEntity(70U);
    msg.value = 0.496526722213;

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
    msg.setTimeStamp(0.374610420524);
    msg.setSource(17733U);
    msg.setSourceEntity(37U);
    msg.setDestination(57859U);
    msg.setDestinationEntity(0U);
    msg.value = 0.796993259982;

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
    msg.setTimeStamp(0.0313186021335);
    msg.setSource(46644U);
    msg.setSourceEntity(220U);
    msg.setDestination(61015U);
    msg.setDestinationEntity(164U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1381108601U;
    tmp_msg_0.start_lat = 0.925184473605;
    tmp_msg_0.start_lon = 0.0227759170901;
    tmp_msg_0.start_z = 0.67132741959;
    tmp_msg_0.start_z_units = 234U;
    tmp_msg_0.end_lat = 0.208241213979;
    tmp_msg_0.end_lon = 0.855884314878;
    tmp_msg_0.end_z = 0.22838113468;
    tmp_msg_0.end_z_units = 205U;
    tmp_msg_0.speed = 0.718400280346;
    tmp_msg_0.speed_units = 230U;
    tmp_msg_0.lradius = 0.168798700993;
    tmp_msg_0.flags = 148U;
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
    msg.setTimeStamp(0.85798930967);
    msg.setSource(53033U);
    msg.setSourceEntity(55U);
    msg.setDestination(31560U);
    msg.setDestinationEntity(16U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2097618898U;
    tmp_msg_0.start_lat = 0.623420585892;
    tmp_msg_0.start_lon = 0.787302115712;
    tmp_msg_0.start_z = 0.794312706454;
    tmp_msg_0.start_z_units = 203U;
    tmp_msg_0.end_lat = 0.513452013882;
    tmp_msg_0.end_lon = 0.713231854124;
    tmp_msg_0.end_z = 0.142412414596;
    tmp_msg_0.end_z_units = 17U;
    tmp_msg_0.speed = 0.157255164609;
    tmp_msg_0.speed_units = 204U;
    tmp_msg_0.lradius = 0.884051282447;
    tmp_msg_0.flags = 188U;
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
    msg.setTimeStamp(0.837235611369);
    msg.setSource(24673U);
    msg.setSourceEntity(33U);
    msg.setDestination(25803U);
    msg.setDestinationEntity(51U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1588272074U;
    tmp_msg_0.start_lat = 0.4011999021;
    tmp_msg_0.start_lon = 0.164792014632;
    tmp_msg_0.start_z = 0.247678062307;
    tmp_msg_0.start_z_units = 54U;
    tmp_msg_0.end_lat = 0.824884177068;
    tmp_msg_0.end_lon = 0.475087710698;
    tmp_msg_0.end_z = 0.864506535044;
    tmp_msg_0.end_z_units = 56U;
    tmp_msg_0.speed = 0.791858965521;
    tmp_msg_0.speed_units = 235U;
    tmp_msg_0.lradius = 0.333572083394;
    tmp_msg_0.flags = 109U;
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
    msg.setTimeStamp(0.985978584203);
    msg.setSource(12711U);
    msg.setSourceEntity(108U);
    msg.setDestination(1524U);
    msg.setDestinationEntity(166U);
    msg.timeout = 33262U;
    msg.lat = 0.932145673394;
    msg.lon = 0.328383411341;
    msg.z = 0.646484259461;
    msg.z_units = 11U;
    msg.speed = 0.425549733137;
    msg.speed_units = 204U;
    msg.roll = 0.529241468993;
    msg.pitch = 0.609626344781;
    msg.yaw = 0.163439721279;
    msg.custom.assign("FQTZUFSMLNUAKUDDIYUEWZBJDOGMWSRSDFBYALZPLOYBILKKHIAMRPHVYQOSBTRQSCTTLLVEDLMXZRHJFVGI");

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
    msg.setTimeStamp(0.865550201915);
    msg.setSource(61658U);
    msg.setSourceEntity(50U);
    msg.setDestination(37080U);
    msg.setDestinationEntity(187U);
    msg.timeout = 63880U;
    msg.lat = 0.495444827802;
    msg.lon = 0.744702307292;
    msg.z = 0.713117746743;
    msg.z_units = 74U;
    msg.speed = 0.496907504566;
    msg.speed_units = 218U;
    msg.roll = 0.35966951268;
    msg.pitch = 0.748468206731;
    msg.yaw = 0.29815548118;
    msg.custom.assign("FOVDRAJQKZRTVOGWZULJALKGURUBDZXWGYEMNWPSTPZFBBVAHELURTMNYWIQBIJLKHMYWXEIPKDSCEFDVDJCEUCGXYRSSITGJBHPIKRD");

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
    msg.setTimeStamp(0.685810780658);
    msg.setSource(54022U);
    msg.setSourceEntity(5U);
    msg.setDestination(13463U);
    msg.setDestinationEntity(189U);
    msg.timeout = 51899U;
    msg.lat = 0.122218016661;
    msg.lon = 0.854447486552;
    msg.z = 0.416121802131;
    msg.z_units = 89U;
    msg.speed = 0.676784294573;
    msg.speed_units = 206U;
    msg.roll = 0.694429028403;
    msg.pitch = 0.565184838405;
    msg.yaw = 0.32832056098;
    msg.custom.assign("OCQJMZNOKPUIJPSIAAFHEWDFWRTBXGZGDORWHPAONKTZQSKMLXXAYMBDRR");

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
    msg.setTimeStamp(0.0609799463652);
    msg.setSource(49724U);
    msg.setSourceEntity(37U);
    msg.setDestination(48724U);
    msg.setDestinationEntity(100U);
    msg.timeout = 45524U;
    msg.lat = 0.671942123864;
    msg.lon = 0.00821443485012;
    msg.z = 0.0701240234165;
    msg.z_units = 240U;
    msg.speed = 0.623123011968;
    msg.speed_units = 98U;
    msg.duration = 18803U;
    msg.radius = 0.535940336152;
    msg.flags = 210U;
    msg.custom.assign("BHTMAFVVRAVVBKYWIDKJRNCBSYIJD");

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
    msg.setTimeStamp(0.0358184246091);
    msg.setSource(8689U);
    msg.setSourceEntity(83U);
    msg.setDestination(59545U);
    msg.setDestinationEntity(206U);
    msg.timeout = 31890U;
    msg.lat = 0.200952716951;
    msg.lon = 0.177917001112;
    msg.z = 0.16919346837;
    msg.z_units = 229U;
    msg.speed = 0.604667970857;
    msg.speed_units = 143U;
    msg.duration = 22082U;
    msg.radius = 0.380028665729;
    msg.flags = 175U;
    msg.custom.assign("MGAYXAKWFSYGDBAGQXNKZECORVEFBBWTPEYIXXDUANOWNEPDHMVTWHZVSKPSQWHBGNJAJGMATDKWZUPBUCDHQIPVRBBPKRKKJXJNODFDJIJLJXUJHMSQDMNUSEFYYZIRSREAFSJWTNZOBMUZZLOGLYQSCDMTOTZZHTYGMQMVBKLRGEVLUXCTIQROARCGOWVDOZUIAXHNQLLNPFUEINGYOW");

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
    msg.setTimeStamp(0.296563776116);
    msg.setSource(21329U);
    msg.setSourceEntity(134U);
    msg.setDestination(28300U);
    msg.setDestinationEntity(116U);
    msg.timeout = 54753U;
    msg.lat = 0.559490268335;
    msg.lon = 0.45771583518;
    msg.z = 0.845085785048;
    msg.z_units = 148U;
    msg.speed = 0.334931584481;
    msg.speed_units = 150U;
    msg.duration = 37467U;
    msg.radius = 0.147001228715;
    msg.flags = 218U;
    msg.custom.assign("JWBZBSBGBDNVZVMOVFCHMOYDJARUBEQJDMHQPTSYRMHKXBKUPJGFSXPPWAVKJNLACNUZGITIUKRLLAFXEOXUWGFHOQCUNSYYBKOAHCSWSUSDPBWYQTETQZMTDVGHXIOTANQNDVORTMGGPEHMJCTPBBULMXYQTKKLVLCVLEIYZZGXIPPEUFZRSAGIZIFFGKIOMZFCMNWNLECDRZYAHYLWHJNFHIACX");

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
    msg.setTimeStamp(0.299210347535);
    msg.setSource(19627U);
    msg.setSourceEntity(170U);
    msg.setDestination(18355U);
    msg.setDestinationEntity(10U);
    msg.custom.assign("YWZNUEPMBBTWXFQTHGHHPVKPAHTSYEINONHVYSOCKSIMDBGKLDVHVOQCXRUJWPONJPWYMZCMPZDDEMRZKNAKIXRLKJLBEEJBYHSMZGMXQNMJFZMCUYOYPKPDFGCGJJYEIALQL");

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
    msg.setTimeStamp(0.366746409937);
    msg.setSource(186U);
    msg.setSourceEntity(196U);
    msg.setDestination(46469U);
    msg.setDestinationEntity(143U);
    msg.custom.assign("GQJTHGUQXZARHZRMMREHCISHGV");

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
    msg.setTimeStamp(0.318850524924);
    msg.setSource(21132U);
    msg.setSourceEntity(195U);
    msg.setDestination(52772U);
    msg.setDestinationEntity(153U);
    msg.custom.assign("ONTEUTILRDDORJPWUXLVANRYKCSSUTRPAQRMSVYCFIXBXBCKVHXTHEIYEDHDQUNLAYERMWLQDNSOYWWSCMXFZNBCFBYJGYIXVF");

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
    msg.setTimeStamp(0.895414805233);
    msg.setSource(56675U);
    msg.setSourceEntity(193U);
    msg.setDestination(61224U);
    msg.setDestinationEntity(40U);
    msg.timeout = 13982U;
    msg.lat = 0.179918068828;
    msg.lon = 0.894413075192;
    msg.z = 0.0891344766444;
    msg.z_units = 35U;
    msg.duration = 24042U;
    msg.speed = 0.78883234839;
    msg.speed_units = 147U;
    msg.type = 88U;
    msg.radius = 0.868898272274;
    msg.length = 0.958131659642;
    msg.bearing = 0.470603159508;
    msg.direction = 64U;
    msg.custom.assign("JMTBPECNZRKCYIXJJODFYFUCNWZRYOGIBQGGQIXDVJSGAOEZOXEMSVMGFTCYEHUTRIOFJTIYSQRNJLKTCRUQNEVTVJDBWIMYPUESKLFJEWJACBXLMSHRLCYNNGKWBPQRLPUYXTVPBKMKIATRWSQAFDHHUDDOZOHCPNFCWK");

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
    msg.setTimeStamp(0.3711861302);
    msg.setSource(2451U);
    msg.setSourceEntity(110U);
    msg.setDestination(52375U);
    msg.setDestinationEntity(227U);
    msg.timeout = 63663U;
    msg.lat = 0.840366327458;
    msg.lon = 0.695587837623;
    msg.z = 0.215482904618;
    msg.z_units = 164U;
    msg.duration = 50691U;
    msg.speed = 0.59575360468;
    msg.speed_units = 17U;
    msg.type = 202U;
    msg.radius = 0.362211309848;
    msg.length = 0.404399394505;
    msg.bearing = 0.727422107885;
    msg.direction = 244U;
    msg.custom.assign("FXXXXSSCKZPPLQHHZQLQAFSFGWRODPNVEXPVPZXRVUZWHMBRHJKMQSHECYKYZHLYNJUJIUWDDFSETQUULULBWPATLJCPOQNXKZSGGVFWYWOYLKUAXQMIRJEXGTCDINKKFJVVKZD");

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
    msg.setTimeStamp(0.86344231523);
    msg.setSource(43042U);
    msg.setSourceEntity(231U);
    msg.setDestination(63804U);
    msg.setDestinationEntity(144U);
    msg.timeout = 42733U;
    msg.lat = 0.442272218516;
    msg.lon = 0.0286694978548;
    msg.z = 0.197797700141;
    msg.z_units = 72U;
    msg.duration = 386U;
    msg.speed = 0.768366574187;
    msg.speed_units = 6U;
    msg.type = 39U;
    msg.radius = 0.72808240447;
    msg.length = 0.0971371136591;
    msg.bearing = 0.245362573858;
    msg.direction = 170U;
    msg.custom.assign("JQOAOSXMZOGYUIJEBQAWZNELPIDHFYNFDUMETAOICTLOVHEFHUWMKV");

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
    msg.setTimeStamp(0.904210298122);
    msg.setSource(32701U);
    msg.setSourceEntity(56U);
    msg.setDestination(18513U);
    msg.setDestinationEntity(66U);
    msg.duration = 26229U;
    msg.custom.assign("JWZFNRTUGSUUIJVSBWVTQASARDKQTAMBYJORFTKYACHFBEAVZQNLUDDNKXXFPQIIYIXDOZXMXKNEGAZUWCATURFKKNFMMYLSLQGWNGHZH");

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
    msg.setTimeStamp(0.048364940596);
    msg.setSource(32139U);
    msg.setSourceEntity(153U);
    msg.setDestination(35084U);
    msg.setDestinationEntity(210U);
    msg.duration = 63988U;
    msg.custom.assign("MPRDRSFUYVRFZGOAAKMMSHPLXMAMLJMDIRXFGGOTPMEOKJXTKCUWCCVAQYCYBKRGAOLSSYNWAYGXXNSLGRDYKYNYOUBJCEYDJFBQIQWNFWUZFDVSQJKGLUXEOSHJWELPDGAAQZIWFTUAINBLMHKHKZQHEESIJLVCBQNJXBJNJTNHLMTEZZIYRVUZQIHTSFVP");

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
    msg.setTimeStamp(0.0132904210546);
    msg.setSource(13888U);
    msg.setSourceEntity(164U);
    msg.setDestination(46677U);
    msg.setDestinationEntity(132U);
    msg.duration = 19335U;
    msg.custom.assign("RZEVOLPPGVLLZKABBRMPYCHFJWBNOTPYIAQUZAJXKOUIXSKZDIGRIGXOGWHJDSXOSXTKHFJWMCPYQSMKJTEPMSQYFNCRSWYVBVQCTKFIMIGZHTJCSLEJBUHFM");

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
    msg.setTimeStamp(0.840823784169);
    msg.setSource(7187U);
    msg.setSourceEntity(6U);
    msg.setDestination(39731U);
    msg.setDestinationEntity(171U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.906459539716;
    msg.control.set(tmp_msg_0);
    msg.duration = 61127U;
    msg.custom.assign("WQWDGFFFTAT");

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
    msg.setTimeStamp(0.702169810731);
    msg.setSource(7459U);
    msg.setSourceEntity(127U);
    msg.setDestination(16568U);
    msg.setDestinationEntity(69U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.145499536813;
    msg.control.set(tmp_msg_0);
    msg.duration = 19676U;
    msg.custom.assign("EADWETASTJGGCIMPHIWAZKHFOEQQFNBBDNDNEOQAIMDSZNBXXUNPBUVNALEVGKSSSZDRPCXRSXNBLHCGEZTYQYDWHQMRAGPYRTLOPTIZQKIRMWEKNKVHCGWSGFWYSYZUTPBCDZGVOMLEBSMOZFBAHRLWFXRFCCVXEFVXJCMYYHJQTMTJPSLOPODJJIOXDURHEVHWAUNCILQIABFVVJKLGHMGKYQPD");

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
    msg.setTimeStamp(0.184893014216);
    msg.setSource(13844U);
    msg.setSourceEntity(10U);
    msg.setDestination(3234U);
    msg.setDestinationEntity(220U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.897096548553;
    msg.control.set(tmp_msg_0);
    msg.duration = 45940U;
    msg.custom.assign("HLNNHPWGDSAYYEHOEUZKNEJLZBPDFYMEPQO");

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
    msg.setTimeStamp(0.260005404195);
    msg.setSource(42132U);
    msg.setSourceEntity(192U);
    msg.setDestination(10772U);
    msg.setDestinationEntity(53U);
    msg.timeout = 38838U;
    msg.lat = 0.752505704241;
    msg.lon = 0.713137612057;
    msg.z = 0.730954115405;
    msg.z_units = 23U;
    msg.speed = 0.0837339127204;
    msg.speed_units = 41U;
    msg.bearing = 0.855659329111;
    msg.cross_angle = 0.741885643396;
    msg.width = 0.549025640068;
    msg.length = 0.0512697965236;
    msg.hstep = 0.0414811563251;
    msg.coff = 15U;
    msg.alternation = 145U;
    msg.flags = 66U;
    msg.custom.assign("DOKWXUDTPHBHZXPCRENKNLPOLJYUSVSMGDZHGNSGNMOCWLCQSVRITCFFZLEHHATVDHSTEHFWYELWWAUNVUZQRUORUUCDGUMGJPWYSYMDOIKAYGOMIYXJTNWKRPOTCXDXL");

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
    msg.setTimeStamp(0.739026784205);
    msg.setSource(46432U);
    msg.setSourceEntity(30U);
    msg.setDestination(38545U);
    msg.setDestinationEntity(25U);
    msg.timeout = 13977U;
    msg.lat = 0.264213792392;
    msg.lon = 0.187196424638;
    msg.z = 0.830089226084;
    msg.z_units = 36U;
    msg.speed = 0.478261964856;
    msg.speed_units = 185U;
    msg.bearing = 0.335191743228;
    msg.cross_angle = 0.0426264732241;
    msg.width = 0.413400107981;
    msg.length = 0.291071305298;
    msg.hstep = 0.993955297702;
    msg.coff = 40U;
    msg.alternation = 101U;
    msg.flags = 199U;
    msg.custom.assign("EUUHVFEHBCVCMJRGECIQPZOABNPL");

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
    msg.setTimeStamp(0.40059965182);
    msg.setSource(4252U);
    msg.setSourceEntity(188U);
    msg.setDestination(14393U);
    msg.setDestinationEntity(140U);
    msg.timeout = 27304U;
    msg.lat = 0.41790706676;
    msg.lon = 0.0859810074307;
    msg.z = 0.441775453151;
    msg.z_units = 182U;
    msg.speed = 0.421720601715;
    msg.speed_units = 96U;
    msg.bearing = 0.0237916378948;
    msg.cross_angle = 0.380698544576;
    msg.width = 0.0456143702632;
    msg.length = 0.344715923371;
    msg.hstep = 0.0405173568878;
    msg.coff = 10U;
    msg.alternation = 33U;
    msg.flags = 36U;
    msg.custom.assign("UCHPMAMOEKVRIBKTPHAGBVDFYAVWFHCQPHVJXWCZVSEUZIGSDVYZZWPZRZGGAUYFMDUAWYXZKFYVR");

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
    msg.setTimeStamp(0.37544503745);
    msg.setSource(56882U);
    msg.setSourceEntity(182U);
    msg.setDestination(10057U);
    msg.setDestinationEntity(57U);
    msg.timeout = 11925U;
    msg.lat = 0.265544407515;
    msg.lon = 0.774088866471;
    msg.z = 0.0603637986153;
    msg.z_units = 102U;
    msg.speed = 0.979600320062;
    msg.speed_units = 249U;
    msg.custom.assign("TJTDEWFIVGQGNCKVRNYGAESVANYDCGLOABPHXODXEITIEPTMUDNRUZFDXUWIPOYATRXOEKLRFFSVHUVCUUUQRQSASXHJKOSWUMZTPHTYECNRGOYLDADHCMLMGLS");

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
    msg.setTimeStamp(0.981683381416);
    msg.setSource(34181U);
    msg.setSourceEntity(74U);
    msg.setDestination(4049U);
    msg.setDestinationEntity(112U);
    msg.timeout = 32164U;
    msg.lat = 0.170670544961;
    msg.lon = 0.589356048956;
    msg.z = 0.141026073705;
    msg.z_units = 202U;
    msg.speed = 0.855151228267;
    msg.speed_units = 69U;
    msg.custom.assign("SMMCCJQKJGJOLKFMAGBVOGZNBCCNPSAOYMUQLXUKCIEXHLPISVLQQWSTEHYGNKUSLDSGWBHYIZXFDMOCXEQDBKPVAFMBJMVHAURELTROJUNODVNFEISIYZBIPUZYPNXLTVBUQTWGTXKPVZFBNRWACCVYMGGHUQRGZCHDZAPOSRSYOEIBJXFOKDXHRTRRSFRKEWOTDLQPPDJWHNTVQEAKZDYFFUGXWFPENZWTNEXVHJIWJKHUAZABM");

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
    msg.setTimeStamp(0.614317428684);
    msg.setSource(5020U);
    msg.setSourceEntity(185U);
    msg.setDestination(38803U);
    msg.setDestinationEntity(32U);
    msg.timeout = 58802U;
    msg.lat = 0.788281056463;
    msg.lon = 0.561844035768;
    msg.z = 0.700319788644;
    msg.z_units = 88U;
    msg.speed = 0.880866688355;
    msg.speed_units = 111U;
    msg.custom.assign("RNCRJVBELTWQHKKVSOHPEODXHUNDXZQOLFPMQMUMNBTICOYOGQFAYGMWHYSNPTUUZDKAKAWJCTDIXURPYMQJBPZPQBDARSCJXQFPIOCLJSVMYOKWGIFETJLSFTFGEBSJSCWINFTMTRRXGLMTFQEJWBGCMIRVOGDI");

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
    msg.setTimeStamp(0.00292448604705);
    msg.setSource(9350U);
    msg.setSourceEntity(190U);
    msg.setDestination(23765U);
    msg.setDestinationEntity(70U);
    msg.x = 0.138954990176;
    msg.y = 0.733264541342;
    msg.z = 0.11966415145;

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
    msg.setTimeStamp(0.200493423064);
    msg.setSource(44011U);
    msg.setSourceEntity(147U);
    msg.setDestination(52778U);
    msg.setDestinationEntity(162U);
    msg.x = 0.200277186959;
    msg.y = 0.542152021858;
    msg.z = 0.988816117023;

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
    msg.setTimeStamp(0.281392648397);
    msg.setSource(26428U);
    msg.setSourceEntity(169U);
    msg.setDestination(1640U);
    msg.setDestinationEntity(241U);
    msg.x = 0.803994809562;
    msg.y = 0.471803021118;
    msg.z = 0.875336821362;

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
    msg.setTimeStamp(0.521213318205);
    msg.setSource(13721U);
    msg.setSourceEntity(106U);
    msg.setDestination(38412U);
    msg.setDestinationEntity(136U);
    msg.timeout = 21418U;
    msg.lat = 0.631308639246;
    msg.lon = 0.417822098222;
    msg.z = 0.695472557093;
    msg.z_units = 55U;
    msg.amplitude = 0.519422571833;
    msg.pitch = 0.363498886877;
    msg.speed = 0.64081183482;
    msg.speed_units = 219U;
    msg.custom.assign("IZCTWMXZKKQPEIZALCSJWQROPJNVHVUCXTDKYWMYQGOOMRRAYAIBLXXZEFGOXIOTSPTXHIVKPTTNSECUWDCQDDETLSRHOWGHHYIBZSYXOFHCMPRJPQEFNXF");

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
    msg.setTimeStamp(0.215305851281);
    msg.setSource(63982U);
    msg.setSourceEntity(143U);
    msg.setDestination(45804U);
    msg.setDestinationEntity(239U);
    msg.timeout = 50607U;
    msg.lat = 0.650445248231;
    msg.lon = 0.226996341561;
    msg.z = 0.37063203483;
    msg.z_units = 44U;
    msg.amplitude = 0.514051340171;
    msg.pitch = 0.830093862077;
    msg.speed = 0.430562866703;
    msg.speed_units = 220U;
    msg.custom.assign("VRACMQZLHMJBZOBRGQOHJWXJRFUGWCXIRWYOQCVMSMZGJEAJLWPIZHAANBAINUISHQEMWKFLZNPKIFPPBSIVRCUEBJGDNPRUMUTOOAVEDCIWPVTRPBRPDLSFKUDXTEECXEMHFSXAKTFLOOCBHCOIJPXSPLIKKQKZXVDRGNGYVHT");

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
    msg.setTimeStamp(0.300743601882);
    msg.setSource(12444U);
    msg.setSourceEntity(239U);
    msg.setDestination(6496U);
    msg.setDestinationEntity(13U);
    msg.timeout = 59799U;
    msg.lat = 0.45842582379;
    msg.lon = 0.686716451086;
    msg.z = 0.794725907095;
    msg.z_units = 59U;
    msg.amplitude = 0.0909430528059;
    msg.pitch = 0.644343827315;
    msg.speed = 0.88902309862;
    msg.speed_units = 6U;
    msg.custom.assign("ZUSHESEKAHUFSTEHSDUVZDNDKICNRVFUKTZHMWIFFKVGBCKWVGZZIKTYOJQLEAUBQWHBITECJTRTNXPVUEJPMPBOMJRBLNHUJQVJEFLRXPSDWORAFGLNKYMPGYOZXVBAGJDYGBNBBIYLJIRFSZTHQRSWIAHSNYDTDQLQILRMEPMC");

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
    msg.setTimeStamp(0.00304998336726);
    msg.setSource(63506U);
    msg.setSourceEntity(156U);
    msg.setDestination(17316U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.261350661479);
    msg.setSource(51836U);
    msg.setSourceEntity(20U);
    msg.setDestination(13971U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.456826988703);
    msg.setSource(33835U);
    msg.setSourceEntity(153U);
    msg.setDestination(1707U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.909311908937);
    msg.setSource(47529U);
    msg.setSourceEntity(77U);
    msg.setDestination(14799U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.711693073461;
    msg.lon = 0.905362171075;
    msg.z = 0.46602868671;
    msg.z_units = 204U;
    msg.radius = 0.71703491359;
    msg.duration = 38840U;
    msg.speed = 0.951309654509;
    msg.speed_units = 143U;
    msg.popup_period = 14571U;
    msg.popup_duration = 33348U;
    msg.flags = 83U;
    msg.custom.assign("GBJSXWEERBIZMEGUSFQXRKIVKKZIGRWSQPAIIAOGVTRNNTFKMGDOYOOWQMTCXHODQOVNILZVAQVIDRZATNUYQEHWKDCRLRRACVJVKXPLCFMKJMZUJV");

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
    msg.setTimeStamp(0.151382647915);
    msg.setSource(61859U);
    msg.setSourceEntity(82U);
    msg.setDestination(49230U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.0100408774817;
    msg.lon = 0.158704858762;
    msg.z = 0.358091575567;
    msg.z_units = 37U;
    msg.radius = 0.367372417726;
    msg.duration = 21345U;
    msg.speed = 0.509165958066;
    msg.speed_units = 8U;
    msg.popup_period = 38635U;
    msg.popup_duration = 49493U;
    msg.flags = 92U;
    msg.custom.assign("SLDEDEUTRNQNACLNRWGLSMDOTSOCHBJIVYNGEQDUKQBTWOHHTDASFOVWVNMLYWBIBALWOQZQKIIPKCAQJPF");

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
    msg.setTimeStamp(0.969660297581);
    msg.setSource(13384U);
    msg.setSourceEntity(25U);
    msg.setDestination(39065U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.646297802083;
    msg.lon = 0.171560983317;
    msg.z = 0.796050842106;
    msg.z_units = 252U;
    msg.radius = 0.934084233403;
    msg.duration = 30487U;
    msg.speed = 0.356744595262;
    msg.speed_units = 200U;
    msg.popup_period = 35937U;
    msg.popup_duration = 30071U;
    msg.flags = 2U;
    msg.custom.assign("UVAEHXBNGTMSEHGZKIHWCWEHRMHKYRBDGAUUYXZPAXUCNTXBFKPKKTGLSDUKWTQJZLBAJLGQYUFASUGJDTFNEDOPAAYQRQDNXRDETIYTWLSCOQVMEBTYZPBVNBROJKZSNYOOQIOHBOPYRHWZVPCDXHNBDFYIKJXMKKZVPVSFWJAELIQCRQMMYONCJVOCJFVMRGILDIHCBQFNTXDOZMJU");

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
    msg.setTimeStamp(0.409867001724);
    msg.setSource(39194U);
    msg.setSourceEntity(77U);
    msg.setDestination(41729U);
    msg.setDestinationEntity(248U);
    msg.timeout = 59229U;
    msg.flags = 52U;
    msg.lat = 0.879392176345;
    msg.lon = 0.758446341756;
    msg.start_z = 0.854280127263;
    msg.start_z_units = 175U;
    msg.end_z = 0.130724740176;
    msg.end_z_units = 5U;
    msg.radius = 0.655572948183;
    msg.speed = 0.315694616197;
    msg.speed_units = 4U;
    msg.custom.assign("GTZNBNLAQRVCDAGRYSOKJFXLMNXQWXOWABHULIMZDIBKWTNGXXALRJFKEBFPENSMSWPFZUEJDGDGXVZDYSIRKHZAKAPIMFQIVFNNOYFELFCHHDORGTAIELAOVBYEIRUCIJKLRARRUSJOHPYTEKUGQMYWJTHHTZBUVNRCCBPMZWCYSPXYZXCLWTXQVMOMXVZLICEMTDVSTUVEKYD");

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
    msg.setTimeStamp(0.995405878113);
    msg.setSource(2790U);
    msg.setSourceEntity(135U);
    msg.setDestination(2377U);
    msg.setDestinationEntity(54U);
    msg.timeout = 42270U;
    msg.flags = 202U;
    msg.lat = 0.286013042938;
    msg.lon = 0.854460294557;
    msg.start_z = 0.359427021857;
    msg.start_z_units = 25U;
    msg.end_z = 0.103069781371;
    msg.end_z_units = 143U;
    msg.radius = 0.728203837472;
    msg.speed = 0.00447685496352;
    msg.speed_units = 187U;
    msg.custom.assign("IAOVGXWOJCDJNQQZTXXFWVODLWKGKWPKUCHRDEELUNYCZENVHOFAAKZNOJEGVKBCPNHNPNLQMGTULVZZJYFPUBMGDZILDMIPUYPRKAYWTLGWONVTAYZDCRJMHCKEACJHLYXDEUQIBQMBMBFJFSTSREFDIXBLKKSH");

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
    msg.setTimeStamp(0.350007510182);
    msg.setSource(30074U);
    msg.setSourceEntity(147U);
    msg.setDestination(17031U);
    msg.setDestinationEntity(173U);
    msg.timeout = 43786U;
    msg.flags = 137U;
    msg.lat = 0.765236817567;
    msg.lon = 0.0545582678021;
    msg.start_z = 0.642843750155;
    msg.start_z_units = 84U;
    msg.end_z = 0.478964083506;
    msg.end_z_units = 206U;
    msg.radius = 0.347200096442;
    msg.speed = 0.816008345491;
    msg.speed_units = 178U;
    msg.custom.assign("EPNZQJQPJPQUTBHEUAOZIBKVQXGXPMGAPOKUUHEHKWUADFGNMLFCXEQKJVKSJVDBADKUONKDT");

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
    msg.setTimeStamp(0.223766199921);
    msg.setSource(51937U);
    msg.setSourceEntity(65U);
    msg.setDestination(29962U);
    msg.setDestinationEntity(161U);
    msg.timeout = 17471U;
    msg.lat = 0.34363675866;
    msg.lon = 0.0573115310883;
    msg.z = 0.0232462163822;
    msg.z_units = 23U;
    msg.speed = 0.641803979207;
    msg.speed_units = 141U;
    msg.custom.assign("OXXQONQZBPBHLKTDSTSACFDBJUCQIRLFEEWMXTFESHFVCZHNDFVGVJCUYHFTPWYDYSRKWQRNASBPXQYEFRPGVRLZCNNUYXUHITEIXGSKINEPYGUMAKSAGWBMCHIJFHBEZIHLOMBWHNBPDCIZXTMQLZAOLEWLOAVADMWANPRVGEIOVJRTUXU");

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
    msg.setTimeStamp(0.575274520913);
    msg.setSource(568U);
    msg.setSourceEntity(95U);
    msg.setDestination(6887U);
    msg.setDestinationEntity(70U);
    msg.timeout = 8253U;
    msg.lat = 0.297970480747;
    msg.lon = 0.0978985742135;
    msg.z = 0.956442389009;
    msg.z_units = 97U;
    msg.speed = 0.362509123188;
    msg.speed_units = 98U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.494277212515;
    tmp_msg_0.y = 0.441531992883;
    tmp_msg_0.z = 0.638901515726;
    tmp_msg_0.t = 0.628605802545;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CSDFRJTORQCVPMQMGGTSNAPYUEIYFMLRPNHFWWQZLESBIIIJVXENUKGKZKTPIMRJUXDBRONNOAGQQEKPWELRXVBYANJKICSCYTBYRXTLDWMDXEFCOKUDAYJAZAMGOTWCTZUQAHSPHODFIBLSWFWMTXYVJRYCGBNSFOUEHDDKGTGQVKXHMNLMJQF");

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
    msg.setTimeStamp(0.10475546314);
    msg.setSource(30195U);
    msg.setSourceEntity(207U);
    msg.setDestination(16111U);
    msg.setDestinationEntity(100U);
    msg.timeout = 25923U;
    msg.lat = 0.747804630413;
    msg.lon = 0.832401297554;
    msg.z = 0.112835540424;
    msg.z_units = 64U;
    msg.speed = 0.414521457965;
    msg.speed_units = 186U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.835167619983;
    tmp_msg_0.y = 0.122422775617;
    tmp_msg_0.z = 0.192542445002;
    tmp_msg_0.t = 0.168164806013;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EDETRWDLDMZFBQTPWCUVZKKUCCNVCHTSGSHJTFXISVMMVRZAUWMCBOPIOYEONJNJYYYUURMEOPGUBACJARBGWRLTLVMXLTDDFEWOBZJNZULMLWSFIOKCXQOTFIYPDNLYAPTQQQHWCHWJBYFVGGSDAHNAUJISOKAGSXKNBFWFKYPPDOKLCQZMRFXHJHSBPLJGRADINQBSKHFAZEKROTIYLUGVQYJS");

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
    msg.setTimeStamp(0.407241629804);
    msg.setSource(35245U);
    msg.setSourceEntity(188U);
    msg.setDestination(63913U);
    msg.setDestinationEntity(79U);
    msg.x = 0.821177575065;
    msg.y = 0.528358119555;
    msg.z = 0.354488338514;
    msg.t = 0.3891789467;

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
    msg.setTimeStamp(0.504029452133);
    msg.setSource(47133U);
    msg.setSourceEntity(173U);
    msg.setDestination(5310U);
    msg.setDestinationEntity(191U);
    msg.x = 0.0496113863403;
    msg.y = 0.590287220413;
    msg.z = 0.977925776793;
    msg.t = 0.935538123033;

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
    msg.setTimeStamp(0.109414607811);
    msg.setSource(19974U);
    msg.setSourceEntity(48U);
    msg.setDestination(59472U);
    msg.setDestinationEntity(84U);
    msg.x = 0.622529653871;
    msg.y = 0.0199585475816;
    msg.z = 0.423836260718;
    msg.t = 0.784062138255;

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
    msg.setTimeStamp(0.317137325945);
    msg.setSource(53984U);
    msg.setSourceEntity(28U);
    msg.setDestination(25071U);
    msg.setDestinationEntity(128U);
    msg.timeout = 17053U;
    msg.name.assign("WGLNSEJLQFNPNIOTBRCIMJWOBAGANHAEGXFVNVANQUVLJLKUHGYOSVFQQXYDGSUABXGOUJBPMOBJDIOYXPJEBCKFZUCVNCZLODWDMWILTSDHDVDEIMAYXPMUC");
    msg.custom.assign("LBSVOBMHCGLNNOXSSFUQCKLONDVCYIEDERPWCWKRQLQIARGKKJFAETZJWHABVUQFMLLDFTNSYXGVTPUSCBVFXQNUBMRWNUCJKWPQYEVHKJMZLVVPAPCWKNBVBPCZXMFJHRIYFDDRPLEHIMRQTJMXHCEGLUUIGPOBIYOAWINYEBZTCPMRPKUDYBOOZTGAJTJJAEGZQTQLDHSMHYGW");

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
    msg.setTimeStamp(0.968115107415);
    msg.setSource(11386U);
    msg.setSourceEntity(135U);
    msg.setDestination(45008U);
    msg.setDestinationEntity(91U);
    msg.timeout = 25751U;
    msg.name.assign("FYOWQCLSVHBNPNMWCXUMJOMHNPMPRVNYRLSSPTSQRKZNWWFYGGRXUOWSUUDAUZZSYLDBUDUZCTELIYXMXJAEMTPWJICHVKMGRBDPUINEJLEAHFDPOAKAMETXXVEADIOJTAUWSGZBCKSAZCGEEPTKKVBINETDZLCLTLHJZSFTKUOIQNGEQJQSVDKYQBOQKXQAVZRNPFMCHXRRLFHORDJXRYXZHVKIIOB");
    msg.custom.assign("ALMBNFNAWCBKUFYMWLRTOWZAVJEALFRTILKNSUQQAHFTBEYGZXEPNPUGQXPOIIKMDGHIDDYBCDUSNSXAYIJQOSBQWFZQIJXEVEUHYGJQJTVLJKJ");

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
    msg.setTimeStamp(0.964113841089);
    msg.setSource(22906U);
    msg.setSourceEntity(207U);
    msg.setDestination(28494U);
    msg.setDestinationEntity(46U);
    msg.timeout = 49698U;
    msg.name.assign("YJIJYJIMWXYNAFVJWXBTMHBUOPDKEEFUASH");
    msg.custom.assign("TBREYFEDKGPNEKJKAVUCEFWFDMKEONRZOXCNTHYTBCHARKOFIOZFLMBPNILKHQHLWAAAFYQYTUSXLGRRPE");

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
    msg.setTimeStamp(0.961773428991);
    msg.setSource(26263U);
    msg.setSourceEntity(82U);
    msg.setDestination(44912U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.473088903041;
    msg.lon = 0.989414419709;
    msg.z = 0.630495601062;
    msg.z_units = 101U;
    msg.speed = 0.18045756429;
    msg.speed_units = 160U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 24256U;
    tmp_msg_0.off_x = 0.666265576484;
    tmp_msg_0.off_y = 0.706686432321;
    tmp_msg_0.off_z = 0.288778898691;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.0363859205089;
    msg.custom.assign("UEPCFOZGOQSASRAWLHCJVPRZVYZCQKXFXDEWDXWQKFLSUJRANSXHVTWHMMAXETBGZTTHUKOCFEOOGNKYPBQAYXLUWDGADILBJWPUJTICBNIXXCAMSLDQVLUSRCHGRQEJNNHKCMLKSEQBIKULZQCSNEYZHGVDVHJTBFFFYPOGUPDAYTOOBEMUIRDJEIXMVYJGWPQHPIAMNTVDRMWRKHJBGDSSTMOKPVWCBZTXYNFYGINRELQJF");

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
    msg.setTimeStamp(0.0460902014174);
    msg.setSource(19784U);
    msg.setSourceEntity(181U);
    msg.setDestination(14103U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.673684223474;
    msg.lon = 0.859042693524;
    msg.z = 0.185428390419;
    msg.z_units = 221U;
    msg.speed = 0.905201171459;
    msg.speed_units = 155U;
    msg.start_time = 0.39792559251;
    msg.custom.assign("HPATXFIGWZZTBMNYBQQEZTOOPZFSDGFJCVWADLQDROOAWEKKCZYEXLQQDUZQGFGSDKIKKVHWXYBYKDICYRPAFDYXBVZALUYIQJOBHOHDQSYGEYQCKBARWUXSRAQJGCAXROMGD");

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
    msg.setTimeStamp(0.579691154759);
    msg.setSource(1025U);
    msg.setSourceEntity(13U);
    msg.setDestination(47620U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.524222536293;
    msg.lon = 0.4422817798;
    msg.z = 0.458144040053;
    msg.z_units = 76U;
    msg.speed = 0.899313993462;
    msg.speed_units = 176U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59726U;
    tmp_msg_0.off_x = 0.748012101095;
    tmp_msg_0.off_y = 0.815223393263;
    tmp_msg_0.off_z = 0.539056495087;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.0860216263394;
    msg.custom.assign("UJIAMOMWOKIJEHUQEBNOWRGYTXQUSCFOKMRBENXLKHSZVBQVKJFEKARJQYDPGYSEEUDBGGCUTKQCRHKDWQPMAPQYNJQIEAJYNZZFOXERFVTPROL");

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
    msg.setTimeStamp(0.659644521644);
    msg.setSource(11676U);
    msg.setSourceEntity(204U);
    msg.setDestination(25104U);
    msg.setDestinationEntity(93U);
    msg.vid = 2710U;
    msg.off_x = 0.583309628436;
    msg.off_y = 0.678276161061;
    msg.off_z = 0.847006786791;

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
    msg.setTimeStamp(0.881005818315);
    msg.setSource(13127U);
    msg.setSourceEntity(253U);
    msg.setDestination(64655U);
    msg.setDestinationEntity(16U);
    msg.vid = 63390U;
    msg.off_x = 0.395493446171;
    msg.off_y = 0.577595959287;
    msg.off_z = 0.0365120370918;

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
    msg.setTimeStamp(0.745116918577);
    msg.setSource(30439U);
    msg.setSourceEntity(71U);
    msg.setDestination(30944U);
    msg.setDestinationEntity(219U);
    msg.vid = 22155U;
    msg.off_x = 0.195330954814;
    msg.off_y = 0.770513086385;
    msg.off_z = 0.62596667607;

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
    msg.setTimeStamp(0.101338859118);
    msg.setSource(29498U);
    msg.setSourceEntity(212U);
    msg.setDestination(8350U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.41022804752);
    msg.setSource(44493U);
    msg.setSourceEntity(46U);
    msg.setDestination(37640U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.323214033163);
    msg.setSource(3168U);
    msg.setSourceEntity(240U);
    msg.setDestination(44491U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.157618216799);
    msg.setSource(45286U);
    msg.setSourceEntity(129U);
    msg.setDestination(61473U);
    msg.setDestinationEntity(76U);
    msg.mid = 9127U;

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
    msg.setTimeStamp(0.445769357417);
    msg.setSource(39100U);
    msg.setSourceEntity(111U);
    msg.setDestination(11990U);
    msg.setDestinationEntity(46U);
    msg.mid = 54935U;

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
    msg.setTimeStamp(0.690012070369);
    msg.setSource(55483U);
    msg.setSourceEntity(210U);
    msg.setDestination(16867U);
    msg.setDestinationEntity(33U);
    msg.mid = 6439U;

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
    msg.setTimeStamp(0.39847818646);
    msg.setSource(17522U);
    msg.setSourceEntity(173U);
    msg.setDestination(27110U);
    msg.setDestinationEntity(136U);
    msg.state = 111U;
    msg.eta = 34047U;
    msg.info.assign("LXZFERIJXTUODGGRPJLPZFGDIPSWTCIVOBVXQQIZVYOUATAHWJQCJXKMBPGXZCWSEDHCYSFOZKLFYISTRHBALKHDRQTGQIMELMKGUENKJUGAODIQWAQNJNUEEETMVKMRSUNXXFKMZHGHJYPYBXVAVJYJDYUNBLNUGNGEHIUCYVSLEBMFKZMTDWUVFASZETZXRIZPBKRFOHHODBJPOOYAQAHMPCANRFTXCSTRWDBNBV");

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
    msg.setTimeStamp(0.255221835643);
    msg.setSource(2465U);
    msg.setSourceEntity(251U);
    msg.setDestination(32515U);
    msg.setDestinationEntity(227U);
    msg.state = 58U;
    msg.eta = 57590U;
    msg.info.assign("AWXEBEIKJZDJCEVKBSLOWTMTKBMOHVDYJWLESLELZMKSHRVXZEFHVIQYXPRUSRHPYCMUPIGXQIWAQGLURXWVZMRSUIZPONIAPPTHCRCQCBYIVMFDXBAOAPUHDDDTUFWESMGAOGZFQAOTGVUQJGTGLCYGFQUZFYGHWBIJCNRJBFKMLBNTKHKZQCPGDOESDONLODTIRVEYBJCRMZRZNAYNUKFXLQJBXTSNTYYUHNX");

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
    msg.setTimeStamp(0.707129394033);
    msg.setSource(55048U);
    msg.setSourceEntity(146U);
    msg.setDestination(38756U);
    msg.setDestinationEntity(159U);
    msg.state = 253U;
    msg.eta = 53086U;
    msg.info.assign("FEZJPCFRNHENTKZMIUGPJHXWGWQOILZCHRLOULRMDJAAJTZKSKKVZJQNVXAFVDSCPQBGSBCOATUUQEDZOJNEDAUGOYFZETEFOLWUJOYDYIXYT");

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
    msg.setTimeStamp(0.000679332248554);
    msg.setSource(16215U);
    msg.setSourceEntity(6U);
    msg.setDestination(10212U);
    msg.setDestinationEntity(29U);
    msg.system = 55225U;
    msg.duration = 1320U;
    msg.speed = 0.806776310088;
    msg.speed_units = 97U;
    msg.x = 0.541349793698;
    msg.y = 0.387519501178;
    msg.z = 0.829634267478;
    msg.z_units = 26U;

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
    msg.setTimeStamp(0.871262849564);
    msg.setSource(27214U);
    msg.setSourceEntity(194U);
    msg.setDestination(49624U);
    msg.setDestinationEntity(220U);
    msg.system = 13344U;
    msg.duration = 37201U;
    msg.speed = 0.70086422603;
    msg.speed_units = 77U;
    msg.x = 0.0496956421764;
    msg.y = 0.0920722824256;
    msg.z = 0.5169791287;
    msg.z_units = 117U;

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
    msg.setTimeStamp(0.305423130625);
    msg.setSource(17373U);
    msg.setSourceEntity(112U);
    msg.setDestination(27685U);
    msg.setDestinationEntity(34U);
    msg.system = 22079U;
    msg.duration = 23676U;
    msg.speed = 0.221487248537;
    msg.speed_units = 152U;
    msg.x = 0.85955134802;
    msg.y = 0.97616160407;
    msg.z = 0.077515475672;
    msg.z_units = 154U;

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
    msg.setTimeStamp(0.703399173753);
    msg.setSource(18378U);
    msg.setSourceEntity(159U);
    msg.setDestination(62991U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.166924559002;
    msg.lon = 0.10974383964;
    msg.speed = 0.812801876748;
    msg.speed_units = 248U;
    msg.duration = 47283U;
    msg.sys_a = 11349U;
    msg.sys_b = 62511U;
    msg.move_threshold = 0.466167111361;

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
    msg.setTimeStamp(0.523112186369);
    msg.setSource(30333U);
    msg.setSourceEntity(156U);
    msg.setDestination(6151U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.681355525393;
    msg.lon = 0.630689664765;
    msg.speed = 0.0760633496706;
    msg.speed_units = 181U;
    msg.duration = 39276U;
    msg.sys_a = 51053U;
    msg.sys_b = 3768U;
    msg.move_threshold = 0.725252921564;

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
    msg.setTimeStamp(0.154867253245);
    msg.setSource(30980U);
    msg.setSourceEntity(244U);
    msg.setDestination(5294U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.997951884469;
    msg.lon = 0.114644898049;
    msg.speed = 0.739455078468;
    msg.speed_units = 33U;
    msg.duration = 12821U;
    msg.sys_a = 24166U;
    msg.sys_b = 64910U;
    msg.move_threshold = 0.826062874434;

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
    msg.setTimeStamp(0.555539892583);
    msg.setSource(26755U);
    msg.setSourceEntity(240U);
    msg.setDestination(49087U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.276275595841;
    msg.lon = 0.544052312289;
    msg.z = 0.470588686434;
    msg.z_units = 229U;
    msg.speed = 0.157464168906;
    msg.speed_units = 83U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.134939810769;
    tmp_msg_0.lon = 0.478712531511;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GTJFRAEVUMNRSKAWGKYASWXMLPNCUUVQAKJMUJUKWEJBZZWAHGQOPYIEBFXOMCLWJXCTVZYALMSLINPVBIEQPRIDSJHOXZQNGDOBZKNNPHEWEKKAOYBITEKHVXFGDDIOYDOEQFCDSXWTCRUXIFZSVYAHATTDSFDMXQGYBXHRBVCTQNPQOHZHBYVWTGNILKJKPIWQALEMFXFNURLWGSPZODRMLMSORYMUUJCIYZHCDJZLBR");

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
    msg.setTimeStamp(0.253740823183);
    msg.setSource(40218U);
    msg.setSourceEntity(104U);
    msg.setDestination(58032U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.653001785202;
    msg.lon = 0.00681787652615;
    msg.z = 0.375270872366;
    msg.z_units = 131U;
    msg.speed = 0.368856398265;
    msg.speed_units = 202U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.730193238957;
    tmp_msg_0.lon = 0.639386552556;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GBDFEUCMMOFKHHIYYLRUHIZBXMWVFGBOOCGJOUQNHKIMQLNNNCBLTMDUMFZNXJ");

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
    msg.setTimeStamp(0.0552694668419);
    msg.setSource(53199U);
    msg.setSourceEntity(215U);
    msg.setDestination(48891U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.318778367789;
    msg.lon = 0.424072568962;
    msg.z = 0.794586434175;
    msg.z_units = 117U;
    msg.speed = 0.907745625262;
    msg.speed_units = 165U;
    msg.custom.assign("JUJBDBAAMCJLCTBXFMWBBKQTIPNEXFPTRMDEZSHAOQMLVANHHKKXGJKAFWMLXKAASTPRUDLPUYJICZVNEDVQEDGYGLKXCGIOTOEIPJRVY");

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
    msg.setTimeStamp(0.448628013704);
    msg.setSource(25996U);
    msg.setSourceEntity(40U);
    msg.setDestination(59878U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.133613612401;
    msg.lon = 0.00542435407905;

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
    msg.setTimeStamp(0.567900898801);
    msg.setSource(19956U);
    msg.setSourceEntity(84U);
    msg.setDestination(7095U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.449782422651;
    msg.lon = 0.648605664849;

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
    msg.setTimeStamp(0.434050860802);
    msg.setSource(52726U);
    msg.setSourceEntity(127U);
    msg.setDestination(10031U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.563059884743;
    msg.lon = 0.563835709118;

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
    msg.setTimeStamp(0.659829505162);
    msg.setSource(44230U);
    msg.setSourceEntity(119U);
    msg.setDestination(57696U);
    msg.setDestinationEntity(163U);
    msg.timeout = 30229U;
    msg.lat = 0.568599204007;
    msg.lon = 0.686762904979;
    msg.z = 0.130364791924;
    msg.z_units = 229U;
    msg.pitch = 0.0192169174236;
    msg.amplitude = 0.209996185659;
    msg.duration = 49442U;
    msg.speed = 0.879230100778;
    msg.speed_units = 76U;
    msg.radius = 0.0202128827993;
    msg.direction = 62U;
    msg.custom.assign("MJELPDALDSAYHUBFRUBJALVYMKQNAVKRIZTHDVWXHWKRVGTEWSQQLAHMIWYOZSGBZCJJDOGYQCNDPHQSYMELGGJYXBGOW");

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
    msg.setTimeStamp(0.488445513239);
    msg.setSource(57596U);
    msg.setSourceEntity(195U);
    msg.setDestination(57735U);
    msg.setDestinationEntity(122U);
    msg.timeout = 12851U;
    msg.lat = 0.438874954224;
    msg.lon = 0.719421646422;
    msg.z = 0.149954562032;
    msg.z_units = 91U;
    msg.pitch = 0.16173864144;
    msg.amplitude = 0.536435534428;
    msg.duration = 20279U;
    msg.speed = 0.135659817156;
    msg.speed_units = 84U;
    msg.radius = 0.581719716601;
    msg.direction = 94U;
    msg.custom.assign("HAGRMZONNPYCLISDWGTSKPCFHXZPVKKEHKRTOSKKRBGYFINSENFWMLEYCUWLCOCYXDKZTWIOTTRVJDAQQORUDQQCGN");

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
    msg.setTimeStamp(0.0174899187584);
    msg.setSource(30846U);
    msg.setSourceEntity(100U);
    msg.setDestination(5239U);
    msg.setDestinationEntity(172U);
    msg.timeout = 63416U;
    msg.lat = 0.0687741232524;
    msg.lon = 0.0490974504881;
    msg.z = 0.977900597046;
    msg.z_units = 169U;
    msg.pitch = 0.277520174018;
    msg.amplitude = 0.755038995714;
    msg.duration = 31648U;
    msg.speed = 0.346454370013;
    msg.speed_units = 131U;
    msg.radius = 0.621620594979;
    msg.direction = 38U;
    msg.custom.assign("PRKGNXHFJBLRQJMXVXMZYJKJGPMFIWIYFNABHDYWWWHPHGTRLVCVFUTNHDLDLCZJVXKTTXDR");

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
    msg.setTimeStamp(0.90261329654);
    msg.setSource(40180U);
    msg.setSourceEntity(29U);
    msg.setDestination(22888U);
    msg.setDestinationEntity(107U);
    msg.formation_name.assign("JYTYRILDOXNSAUXQWLAZHSGYMHQIZWZNKURMEBIEUPJUKPFDBVEOCBJVROCQFQVLZFOGAVFHAPTEXMWWENTYWEDMLGQAWPCICROKXKLIRCPTHKOIBDEZIPUJTHJHN");
    msg.reference_frame = 168U;
    msg.custom.assign("JBOOIYCEXFLTAPMNBDZAKDGVRWOISUKNGFTQLEWBJMTFGFVMNQFKBJKTBETUHXVAYBRUUGALLLVHMSZUFEPWCWOGPHFWGJIJDXIVRRRQKTMIOPPSNCIJZWPBGBWXDFQLKWQKHOJEXZIHCTODKDHQBENPQGMFZOGJTYJIZEDYCHBRNRSAWMQPNSEYEDTGLZYCONUZAKAJEI");

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
    msg.setTimeStamp(0.885574723736);
    msg.setSource(4361U);
    msg.setSourceEntity(179U);
    msg.setDestination(60195U);
    msg.setDestinationEntity(116U);
    msg.formation_name.assign("FZWWZXTRVHZHNOSAQKETAVYHUDDJTYUJIJCXAUMICGBZQVFXXIKFVIOBCUNYAYNPZJCBBGTAYHHSRTUCQRZKQASSTXOGCRHOQZQSOONUBNZGEOGPBNDKXGJLQKTAKYYKOAFYWPWVPCMFVPSRWCMWUVYOOLTEZFMKMGCRSGPJPIMJGNKMEXMZAHLMVRUNIJHFSDJLFIXLPLNSILDHFIGLWBWEYBSDWHEUXVXWULBEEMQPP");
    msg.reference_frame = 184U;
    msg.custom.assign("LMHOKVVCCRBCQFYTKUSKAUUVLYPYFWBZDITFMSFXHWNIOOXEGSSGVIDLDBPDZPXSSRQIKUEBYIDSXPQXTOOJPBQLCUPEDNCPCHJMTHREMHEXAVSMTNYZNJBMVHYTROERMTACPILHBJJLLMUEHGGAEIDYNFRRFVYKAGXRVFCXFDUFTPKWVALWWNMHZEGVGDAFOQNZJOKORAYWJNPIGBGKWKSBXTJUC");

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
    msg.setTimeStamp(0.193436411491);
    msg.setSource(11424U);
    msg.setSourceEntity(156U);
    msg.setDestination(17141U);
    msg.setDestinationEntity(73U);
    msg.formation_name.assign("KTMNCGHTNAVUAS");
    msg.reference_frame = 191U;
    msg.custom.assign("SPPPWLFRXJWXKBAWSSFEMTALWXTMHKLGTSCZRZFOKBGZAAFNCQRPMRIYPQG");

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
    msg.setTimeStamp(0.784271808945);
    msg.setSource(52886U);
    msg.setSourceEntity(124U);
    msg.setDestination(39617U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("TCTDLQENBDTMONTELAFEFQUVRRJVGDYTQPEXAUBRMSTFDWPUEEJBRZIHZZOGLXKCVPOIUAIQHXHOKCZRFVCOCPAGDHSFNWFOUAGJYJXWXVPWLELDMBEPZCTY");
    msg.formation_name.assign("ADFPXMUFKWUOVHPRBUWQBPAMPCHRJUG");
    msg.plan_id.assign("XUORJEDERSNSJAHGQIMGUNIZKGBVUMEVKCLWWKIQQDIPZBTVWPUQNTCZOEYLBVTWGIMKLZRPOAMBXCAXBFPDTNBILLGFIEL");
    msg.description.assign("ZERGBDOPEPPYLMNNWJZHIITNSOHZOABZCUGNQFVMPAFWIVCWEMHLFGXDDLHCGJGZNDXXTBIIUXUIWLJAQXQTE");
    msg.leader_speed = 0.276425653646;
    msg.leader_bank_lim = 0.346715139929;
    msg.pos_sim_err_lim = 0.306551688965;
    msg.pos_sim_err_wrn = 0.709270215778;
    msg.pos_sim_err_timeout = 33883U;
    msg.converg_max = 0.825167736469;
    msg.converg_timeout = 34044U;
    msg.comms_timeout = 6823U;
    msg.turb_lim = 0.513958058868;
    msg.custom.assign("NAOLVHWXXRIGONSN");

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
    msg.setTimeStamp(0.690768267008);
    msg.setSource(36203U);
    msg.setSourceEntity(151U);
    msg.setDestination(38607U);
    msg.setDestinationEntity(123U);
    msg.group_name.assign("DMMUMQTCIYMBYIZMDYFWEYVSKTGEALQCA");
    msg.formation_name.assign("TJQBTPUEZNJPTWRRRYVNDHSDSXUGANRLVJQYPMUMYFCKJQNUGBYHVETCUHPCVFMCSWAMBZUISIQJVLNZBZEPYKQKALEWTIVKYJWGDZOTSMRWDLBAXQNZDYEKXWVMRFKIEZCAIMOOOZHQTUXI");
    msg.plan_id.assign("YCRCBUJTZVGNSDAOZWEFOSOEBJYBTRPHQH");
    msg.description.assign("YUFMBFOBKGUMQIXDYIQDYFPHJPCLULIGXBTUYJGFXTTYPHANXTUURZSRDQMNLWAXFNMCRNFBNVACIZWXACMZPHMLLXTBCVDMEYSHNDVBEAJSOWSOMOZOENDLZABAHKFBJSEVWHXSTQWOJPLEONMCTQQSIXRLEBJEKWKJBRKMVTLRZWIXPQVNDNTZFQZOGCHHUKK");
    msg.leader_speed = 0.40099029095;
    msg.leader_bank_lim = 0.346709192687;
    msg.pos_sim_err_lim = 0.251239181359;
    msg.pos_sim_err_wrn = 0.182175877639;
    msg.pos_sim_err_timeout = 17029U;
    msg.converg_max = 0.815664204101;
    msg.converg_timeout = 16721U;
    msg.comms_timeout = 9036U;
    msg.turb_lim = 0.29794972064;
    msg.custom.assign("FXOTVAXNPDYJVMGDJKXFRHLWCZJYVEPRAUUZMAPDUAYNTCPKQYWQLGSQMZEIDZZWOPKHKIABLIJBTYTBXBHCBISNAFOGIETQFSCJFQFIPEOVFVIMURUSGXGYFLVMXXJTDSBZCSUBWRKHPDCRQJDGYQNWGDOYIANHRPAQHVXXNRZHNGWPBELYFMLTLKWSCMOOEYQKSOJCZKAEWIUGUNVKXRLTWDEAOJSK");

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
    msg.setTimeStamp(0.633623991141);
    msg.setSource(7137U);
    msg.setSourceEntity(194U);
    msg.setDestination(10037U);
    msg.setDestinationEntity(55U);
    msg.group_name.assign("HSUIVYEGTGVBXNGSDZSJAQIMXEFPIFBVTCTCJKAPVRKBJVCGJVNLCDSDACFPLLOECZNYNPXOAYBWEHJNWEPZELFDSLEMYBNODMINJIVUHUYJQBSRWBQZFPUGSIFJRTTKQPYAPPZKYSNHUHNAAIOOORMWQMMKMZRQKGRUQXFUGEBOHYSJQJIFXETFTEUORLDKKMHFNA");
    msg.formation_name.assign("VZJWRGEPLPKAHDFKVRFBCMQYVWBGR");
    msg.plan_id.assign("ULUOGCHVABIFTPZIHNAXXVSFDUUDRGIHUSOZSVPEYFLBKDBVOPPDVUUCCQAMWVNOTZBARAWTFMMPKSYUXPGQCMTCQEGDFNKYIDYNEHQGMJREIVLYSNEPRZFLSZVPUGNWXXIYAEZAEPSQGRYLKKCQOWJXZBXIPXRNNRBODWOJFFXMRMERSJTVYLIAQNBCKAWCZHBXIOGTJLGWKRJEMSJKWHMTHKNTZQO");
    msg.description.assign("VQVAUHOMCJNNXTBUYCPCMF");
    msg.leader_speed = 0.629284721273;
    msg.leader_bank_lim = 0.64568666332;
    msg.pos_sim_err_lim = 0.600377750067;
    msg.pos_sim_err_wrn = 0.49357080821;
    msg.pos_sim_err_timeout = 36353U;
    msg.converg_max = 0.662799776482;
    msg.converg_timeout = 51052U;
    msg.comms_timeout = 15165U;
    msg.turb_lim = 0.222739488394;
    msg.custom.assign("VBPDZKUNEWMJPDK");

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
    msg.setTimeStamp(0.289177381014);
    msg.setSource(20998U);
    msg.setSourceEntity(151U);
    msg.setDestination(62668U);
    msg.setDestinationEntity(200U);
    msg.control_src = 59621U;
    msg.control_ent = 107U;
    msg.timeout = 0.818270759652;
    msg.loiter_radius = 0.386993490072;
    msg.altitude_interval = 0.0306769388234;

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
    msg.setTimeStamp(0.368877486831);
    msg.setSource(48991U);
    msg.setSourceEntity(213U);
    msg.setDestination(7941U);
    msg.setDestinationEntity(17U);
    msg.control_src = 37925U;
    msg.control_ent = 3U;
    msg.timeout = 0.242470178653;
    msg.loiter_radius = 0.708369719735;
    msg.altitude_interval = 0.926798135196;

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
    msg.setTimeStamp(0.385968297283);
    msg.setSource(22072U);
    msg.setSourceEntity(189U);
    msg.setDestination(41851U);
    msg.setDestinationEntity(16U);
    msg.control_src = 54807U;
    msg.control_ent = 74U;
    msg.timeout = 0.787329906054;
    msg.loiter_radius = 0.784985155919;
    msg.altitude_interval = 0.562488508164;

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
    msg.setTimeStamp(0.432506997332);
    msg.setSource(54971U);
    msg.setSourceEntity(2U);
    msg.setDestination(56482U);
    msg.setDestinationEntity(90U);
    msg.flags = 217U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.721031664724;
    tmp_msg_0.speed_units = 89U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.765411193515;
    tmp_msg_1.z_units = 80U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.972029090921;
    msg.lon = 0.00716292203612;
    msg.radius = 0.808475839934;

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
    msg.setTimeStamp(0.292495949308);
    msg.setSource(35276U);
    msg.setSourceEntity(159U);
    msg.setDestination(37216U);
    msg.setDestinationEntity(243U);
    msg.flags = 14U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.515130407595;
    tmp_msg_0.speed_units = 147U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.605465789735;
    tmp_msg_1.z_units = 135U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.938358944632;
    msg.lon = 0.0186392567471;
    msg.radius = 0.8231130543;

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
    msg.setTimeStamp(0.425798078043);
    msg.setSource(59775U);
    msg.setSourceEntity(40U);
    msg.setDestination(36967U);
    msg.setDestinationEntity(208U);
    msg.flags = 1U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.939082677866;
    tmp_msg_0.speed_units = 100U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.237298907071;
    tmp_msg_1.z_units = 135U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.366220936865;
    msg.lon = 0.931872770026;
    msg.radius = 0.336249113659;

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
    msg.setTimeStamp(0.268782257222);
    msg.setSource(28538U);
    msg.setSourceEntity(164U);
    msg.setDestination(62032U);
    msg.setDestinationEntity(239U);
    msg.control_src = 42028U;
    msg.control_ent = 241U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 174U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.837119232551;
    tmp_tmp_msg_0_0.speed_units = 177U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.328406554694;
    tmp_tmp_msg_0_1.z_units = 26U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.136832163323;
    tmp_msg_0.lon = 0.16008037097;
    tmp_msg_0.radius = 0.622559074174;
    msg.reference.set(tmp_msg_0);
    msg.state = 133U;
    msg.proximity = 165U;

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
    msg.setTimeStamp(0.00339541271767);
    msg.setSource(29774U);
    msg.setSourceEntity(34U);
    msg.setDestination(38632U);
    msg.setDestinationEntity(4U);
    msg.control_src = 60406U;
    msg.control_ent = 209U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 2U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.635277357606;
    tmp_tmp_msg_0_0.speed_units = 14U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.270923135851;
    tmp_tmp_msg_0_1.z_units = 126U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.506054870719;
    tmp_msg_0.lon = 0.0865797375063;
    tmp_msg_0.radius = 0.797613137097;
    msg.reference.set(tmp_msg_0);
    msg.state = 177U;
    msg.proximity = 161U;

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
    msg.setTimeStamp(0.19392087455);
    msg.setSource(44513U);
    msg.setSourceEntity(83U);
    msg.setDestination(49U);
    msg.setDestinationEntity(177U);
    msg.control_src = 42779U;
    msg.control_ent = 254U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 44U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.515356414716;
    tmp_tmp_msg_0_0.speed_units = 87U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.598247471183;
    tmp_tmp_msg_0_1.z_units = 157U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.62205715632;
    tmp_msg_0.lon = 0.903735301918;
    tmp_msg_0.radius = 0.555259165772;
    msg.reference.set(tmp_msg_0);
    msg.state = 62U;
    msg.proximity = 64U;

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
    msg.setTimeStamp(0.886742205043);
    msg.setSource(52029U);
    msg.setSourceEntity(46U);
    msg.setDestination(54083U);
    msg.setDestinationEntity(113U);
    msg.ax_cmd = 0.36120590161;
    msg.ay_cmd = 0.41249344936;
    msg.az_cmd = 0.319661610729;
    msg.ax_des = 0.555040818665;
    msg.ay_des = 0.321628046989;
    msg.az_des = 0.570665542194;
    msg.virt_err_x = 0.334516290348;
    msg.virt_err_y = 0.279377817764;
    msg.virt_err_z = 0.0796401610192;
    msg.surf_fdbk_x = 0.289480755099;
    msg.surf_fdbk_y = 0.0437307331402;
    msg.surf_fdbk_z = 0.941713471297;
    msg.surf_unkn_x = 0.820299740263;
    msg.surf_unkn_y = 0.665056709437;
    msg.surf_unkn_z = 0.65573330145;
    msg.ss_x = 0.501224120675;
    msg.ss_y = 0.341608421313;
    msg.ss_z = 0.913286412124;

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
    msg.setTimeStamp(0.747144622316);
    msg.setSource(23119U);
    msg.setSourceEntity(62U);
    msg.setDestination(50092U);
    msg.setDestinationEntity(170U);
    msg.ax_cmd = 0.74604376051;
    msg.ay_cmd = 0.267296092524;
    msg.az_cmd = 0.580379655227;
    msg.ax_des = 0.973270842139;
    msg.ay_des = 0.887683628909;
    msg.az_des = 0.369504315345;
    msg.virt_err_x = 0.321959460333;
    msg.virt_err_y = 0.827405299027;
    msg.virt_err_z = 0.405733161958;
    msg.surf_fdbk_x = 0.156343171065;
    msg.surf_fdbk_y = 0.00751434301614;
    msg.surf_fdbk_z = 0.605481845348;
    msg.surf_unkn_x = 0.704840159659;
    msg.surf_unkn_y = 0.293904847807;
    msg.surf_unkn_z = 0.118067042176;
    msg.ss_x = 0.528979531391;
    msg.ss_y = 0.215291988444;
    msg.ss_z = 0.255402920794;

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
    msg.setTimeStamp(0.671069390619);
    msg.setSource(3685U);
    msg.setSourceEntity(191U);
    msg.setDestination(33434U);
    msg.setDestinationEntity(189U);
    msg.ax_cmd = 0.611979511564;
    msg.ay_cmd = 0.114647254106;
    msg.az_cmd = 0.594292450142;
    msg.ax_des = 0.481915763641;
    msg.ay_des = 0.734773226829;
    msg.az_des = 0.813389505797;
    msg.virt_err_x = 0.870694702654;
    msg.virt_err_y = 0.403387290539;
    msg.virt_err_z = 0.374833331859;
    msg.surf_fdbk_x = 0.398134847598;
    msg.surf_fdbk_y = 0.136277711626;
    msg.surf_fdbk_z = 0.77661003385;
    msg.surf_unkn_x = 0.0633151804544;
    msg.surf_unkn_y = 0.392887046184;
    msg.surf_unkn_z = 0.807320445334;
    msg.ss_x = 0.170778784669;
    msg.ss_y = 0.507626843652;
    msg.ss_z = 0.645465132787;

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
    msg.setTimeStamp(0.226251253117);
    msg.setSource(30888U);
    msg.setSourceEntity(254U);
    msg.setDestination(32376U);
    msg.setDestinationEntity(25U);
    msg.s_id.assign("EOOBVXWFMLEOQEXCBAKFQZRPFHFLSKUMMKJLSSYHNFVJWOTGNHZHUPMIESZPJGYYGYCNASMVMGRSMVVLZBITXKZGFZITSYLVBNJTJBZRWREDRRIYXGFIDHUTKEQTFNWRYADSKSTPDCAMCWAYIXWFRCPIJHMXNBIIDGPVPQDRJVNTZAUPNOYUUABALWCQXETOBKD");
    msg.dist = 0.305962245176;
    msg.err = 0.479251745034;
    msg.ctrl_imp = 0.822612712721;
    msg.rel_dir_x = 0.292067494985;
    msg.rel_dir_y = 0.757738649419;
    msg.rel_dir_z = 0.353163989484;
    msg.err_x = 0.343884931735;
    msg.err_y = 0.564790764488;
    msg.err_z = 0.632933073335;
    msg.rf_err_x = 0.0290338694568;
    msg.rf_err_y = 0.760474602199;
    msg.rf_err_z = 0.730386274185;
    msg.rf_err_vx = 0.585988723601;
    msg.rf_err_vy = 0.240518203469;
    msg.rf_err_vz = 0.254504803077;
    msg.ss_x = 0.755121305595;
    msg.ss_y = 0.276014994531;
    msg.ss_z = 0.181780942876;
    msg.virt_err_x = 0.673314535022;
    msg.virt_err_y = 0.998690223602;
    msg.virt_err_z = 0.339948980992;

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
    msg.setTimeStamp(0.404002485245);
    msg.setSource(22904U);
    msg.setSourceEntity(216U);
    msg.setDestination(25290U);
    msg.setDestinationEntity(226U);
    msg.s_id.assign("XUHZPZYWVNRXTYPKLTAUKJWIEJZXAJSOKEXLJQGRJMHYCYGAUQLYEUWHWTMDFGCFPWZMVIPNGSDNGBXWCQFPVBDIOXZSPNWT");
    msg.dist = 0.485908047967;
    msg.err = 0.93571521481;
    msg.ctrl_imp = 0.909584972067;
    msg.rel_dir_x = 0.0712192788447;
    msg.rel_dir_y = 0.613238788864;
    msg.rel_dir_z = 0.275025461042;
    msg.err_x = 0.0476731756385;
    msg.err_y = 0.573165568217;
    msg.err_z = 0.040809273185;
    msg.rf_err_x = 0.112480946768;
    msg.rf_err_y = 0.74161538588;
    msg.rf_err_z = 0.837076094182;
    msg.rf_err_vx = 0.823800941596;
    msg.rf_err_vy = 0.322378215056;
    msg.rf_err_vz = 0.600288811962;
    msg.ss_x = 0.381415052843;
    msg.ss_y = 0.237711963315;
    msg.ss_z = 0.858140898124;
    msg.virt_err_x = 0.468918591322;
    msg.virt_err_y = 0.492982259964;
    msg.virt_err_z = 0.787071152888;

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
    msg.setTimeStamp(0.878594709746);
    msg.setSource(15587U);
    msg.setSourceEntity(226U);
    msg.setDestination(30741U);
    msg.setDestinationEntity(89U);
    msg.s_id.assign("DKEKERTENZGNGQUMLDIJFITWYWXOCVOAJSVDO");
    msg.dist = 0.172573572154;
    msg.err = 0.425721188426;
    msg.ctrl_imp = 0.885573212398;
    msg.rel_dir_x = 0.668086994934;
    msg.rel_dir_y = 0.194550055481;
    msg.rel_dir_z = 0.19674243762;
    msg.err_x = 0.836016220983;
    msg.err_y = 0.660828537584;
    msg.err_z = 0.959567488375;
    msg.rf_err_x = 0.0507851544888;
    msg.rf_err_y = 0.792877983586;
    msg.rf_err_z = 0.712480597186;
    msg.rf_err_vx = 0.483365393759;
    msg.rf_err_vy = 0.860853393727;
    msg.rf_err_vz = 0.337150077328;
    msg.ss_x = 0.678516584486;
    msg.ss_y = 0.83293546059;
    msg.ss_z = 0.896443173028;
    msg.virt_err_x = 0.224648257879;
    msg.virt_err_y = 0.872625220503;
    msg.virt_err_z = 0.821269787652;

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
    msg.setTimeStamp(0.619212308211);
    msg.setSource(60058U);
    msg.setSourceEntity(88U);
    msg.setDestination(45920U);
    msg.setDestinationEntity(32U);
    msg.timeout = 61597U;
    msg.rpm = 0.537778904041;
    msg.direction = 179U;
    msg.custom.assign("PEVFCDAWKLQCSYMKBCIIWLSPLOSEJJJNIDQGOAGOLMYPRTQFIKHAJRRQSKUHQVEAXBUXSFGYBXZBGYOHVRMWKDFBROXDPZEKWEMXYTCIACKHEGRYLOAKHETVLLTIMQRJFCTBMJRNBRVUKAADHVMHSSUTA");

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
    msg.setTimeStamp(0.052685047835);
    msg.setSource(10456U);
    msg.setSourceEntity(51U);
    msg.setDestination(64413U);
    msg.setDestinationEntity(190U);
    msg.timeout = 13268U;
    msg.rpm = 0.475790539142;
    msg.direction = 81U;
    msg.custom.assign("UJQAEIRXYBYSWRWPWEDBVQLMJEXGFGDKRQKDCCPZQSITUGTCBKQGYUSOCCNPBLTBUAKNEOGLNSPHOAXEAPYXGVSDSWSONPURIOAXMDZHWBMZYMFNKQMUDFGYRTEAVGAS");

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
    msg.setTimeStamp(0.808362159348);
    msg.setSource(33138U);
    msg.setSourceEntity(193U);
    msg.setDestination(64283U);
    msg.setDestinationEntity(52U);
    msg.timeout = 29324U;
    msg.rpm = 0.235525862057;
    msg.direction = 104U;
    msg.custom.assign("ECINHORRERSRMVCDEUDLNCEQCKXJWBFLALXJGYOWPTYAISKVWRXTQGKFMRMHTBKAPCBPIKKQWZSUDGZBDFGMZNTWSUWFIFZNQANFBMYHTYCNOBNHIVOKDZGYLFYEAFRZTKUMGMXNCTQJISXOAJWZJDVO");

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
    msg.setTimeStamp(0.785038204116);
    msg.setSource(4218U);
    msg.setSourceEntity(193U);
    msg.setDestination(58396U);
    msg.setDestinationEntity(252U);
    msg.formation_name.assign("UBYUAHSRFCRINAQVEVTOFCTMEGZKRXCQZMLVOFZHSMNPSKXWHLYAPWIJSNOVKYPLIETDXWEIDKULDGLSTUHKUCQMQQJGIBODUXRCPVPSOBQHKMGWLONYNAYRNSACNXJQTXCAGJSFBBUPHBTQCZHERBEUZIYPZDMDAHULDDSIJKGCQIRVGGLFWZFEPYVYXAXKIIZWAKWUKEP");
    msg.type = 155U;
    msg.op = 0U;
    msg.group_name.assign("RQOPDRVMDWCCELGLLOQVYZPUKOTGJNNEHFUWZWRVOXGWPQTVRBWKNBQIRMZNCEPMAKZEWFELSQNMBBJSGPEDPPYZZRPFFODTSAOIDKVUTLFVXDCFFKHSSQBNKNQSJJXMPWMBTTEQAIUBXWHCIWIKEYLCLFUATEXYIMEJGAHJNFYPRYRQAKBSUYRXTACTGMAVHVLOCABLUYSCJDLRVYNHH");
    msg.plan_id.assign("XRFRALYQVIWJUTAIJNUHFJICJCHQXVPRFMAUIJJTQEZTTOWSOPAVGRKHPWBHZQZYXUBTCCZZOLFBEVNKXEBCDTHALDWZMKWIUYRCMWVSQAEOLSIYBRSMYYGHZGDTLITPTNXNFOJNYIMYDOWSCGNKZUARUVKEJWROUDYUPKRIIGPKDXGBJKSMFFQQMDBAMZHNPVPDRFCPWSLSKLNGOVSBEHMA");
    msg.description.assign("RLFXDFVWCIGULWOKZYEXTJGSZBKGHTMAHIVWWAMFCNESXLRIGKLHWRHQIPHDSEMRTPSPSOQZNEYMBYUESEBAKDGZUKRBCVEHZRKQMPOTOAUNYVMPGARADRWOKNCJBCEJOVQOBFCXLYIUOJOSYJDHIFPXWUHYENGTFHDMJLTAMRQOFNPWDBZUFKTPUWRYZLZCF");
    msg.reference_frame = 150U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 36831U;
    tmp_msg_0.off_x = 0.00795494154728;
    tmp_msg_0.off_y = 0.264543207023;
    tmp_msg_0.off_z = 0.787426322435;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.955062210286;
    msg.leader_speed_min = 0.677857294324;
    msg.leader_speed_max = 0.367225551498;
    msg.leader_alt_min = 0.521281686361;
    msg.leader_alt_max = 0.322332192785;
    msg.pos_sim_err_lim = 0.611893759798;
    msg.pos_sim_err_wrn = 0.652543279072;
    msg.pos_sim_err_timeout = 10214U;
    msg.converg_max = 0.487932976871;
    msg.converg_timeout = 41216U;
    msg.comms_timeout = 59645U;
    msg.turb_lim = 0.696176483167;
    msg.custom.assign("KQGZDVUREEJIGLEKRXWMFOBVRFQJOTABENMFJFEOBCAXYGGRIQKKKZPLCVRZXUPXLDARBOWYUFTBYOCUZWJDRYXIJHBPYLDWPMXCVHLWEBNZMTHUEXXJSGSNXUFHPQFQBDQQIWSVCDRBIZTYLRDIIFQEBIMSATPOXCSAMNAHPUNLKJVT");

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
    msg.setTimeStamp(0.701115447672);
    msg.setSource(112U);
    msg.setSourceEntity(12U);
    msg.setDestination(40941U);
    msg.setDestinationEntity(82U);
    msg.formation_name.assign("NGKXSNFUPOMKCSTPYVPIJKEGCIBWQEBLT");
    msg.type = 15U;
    msg.op = 127U;
    msg.group_name.assign("DVDVFFPOYNLWLBEGNFCUHZLUYJAHXFJLDCEWZEWWCOUKSWCVBCGWMB");
    msg.plan_id.assign("PWKMHTYIDZTSLHAGOLRRVJNZBXFXRTLLOMJNHWEACFYPJEWUFZOLKHNZHZAGTYPQOZT");
    msg.description.assign("JIWFGAIJHZZZKNDIQDSHCCGAXALCPFCPNOHEDTVFFPJKHPXTAOZVHECQYOXWPTGSYWOYCDBLQWNEIOIDWPKVFOPXSPVJJXVQBXLLHARDFRIDRPGYVBKGHUEAKQEFEUVMYBCKUC");
    msg.reference_frame = 198U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 39452U;
    tmp_msg_0.off_x = 0.553007957141;
    tmp_msg_0.off_y = 0.862564353319;
    tmp_msg_0.off_z = 0.220352463103;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.292183502432;
    msg.leader_speed_min = 0.392233741228;
    msg.leader_speed_max = 0.107637863444;
    msg.leader_alt_min = 0.754746739736;
    msg.leader_alt_max = 0.918439054347;
    msg.pos_sim_err_lim = 0.218872222482;
    msg.pos_sim_err_wrn = 0.643555346882;
    msg.pos_sim_err_timeout = 34720U;
    msg.converg_max = 0.473868529759;
    msg.converg_timeout = 30059U;
    msg.comms_timeout = 3851U;
    msg.turb_lim = 0.779480140073;
    msg.custom.assign("IHERNPKBZALSHZGWTQZSYPQNDWAVUPPSWYUBSAUJURMEKVOJBEDTVFWQKBRCPUTZMLVZJNERHMLXMROHSOCNYDKLOACPVZZIFLCWWKUFXIIIWHBGXYIGRCWGVTSDRGMKMLQNXOPFFRTRGRWEYTXANVEYJJKSZAOFQHKZAYBDJCWSXQ");

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
    msg.setTimeStamp(0.55432169681);
    msg.setSource(47200U);
    msg.setSourceEntity(249U);
    msg.setDestination(34806U);
    msg.setDestinationEntity(212U);
    msg.formation_name.assign("LGNFRRCAZHEYJNQKZYTSOWXUWDMPHYBNKIDLXQCPHZLZDNINWHZPSFKKOUTSKFLBHEXNJLUVXPIY");
    msg.type = 227U;
    msg.op = 12U;
    msg.group_name.assign("ICGQAQRGBMHTIRNWLXXEYEZSVJZSKCYRYOBVGFPVZLVYRNIQMSAONCOPIYMJSUEBVNWWDKWQHCHPIUPKBXXUGGEVXSDMAKLYSMJLQPCGJHNLNATSIVAIDZZDTLHXPNDUQDLJEKTPVAJMDOIKWRKMOWHDJHBFROFWNFUFOEAVAFYHEQTZDLUHUBZQANDBRFFCYOWLYXJGKUHOSKGIRTQWXVTUPMKYAZEBFBEIJXZLTUO");
    msg.plan_id.assign("VHRDHASVFLQHCSVRFGPGPQMDEFYXUWWUSBJRRDTNTBXMQYOZERJFIGQKEJUHHEISXDZZPYVZWJGEVDCGQVJNUZVTKKFBFJQJILQDWZQAYANFCSBKWVDYLOMAJGJSITTNFAYLOTHYXUCSOMPCLPUTRWTNPIFDXGCKAWYEHXALPNKSUUIXOIZJFDILBMYCKXPURKCUKORCIE");
    msg.description.assign("SBQVBLAEKPOTYKWEMNARFGCHLMIQFSGHDLVCHJMYBQMBYRZVOSYDPAVPVEKGUKBNYFFIMWJTRIPZFEASPHZKAKDRBNGNXOCTLXQMFEPOQXDSM");
    msg.reference_frame = 185U;
    msg.leader_bank_lim = 0.531798923615;
    msg.leader_speed_min = 0.336592538616;
    msg.leader_speed_max = 0.596779475645;
    msg.leader_alt_min = 0.109589195471;
    msg.leader_alt_max = 0.384320505846;
    msg.pos_sim_err_lim = 0.68595759422;
    msg.pos_sim_err_wrn = 0.914623045123;
    msg.pos_sim_err_timeout = 57820U;
    msg.converg_max = 0.488583578391;
    msg.converg_timeout = 43643U;
    msg.comms_timeout = 49981U;
    msg.turb_lim = 0.855090595302;
    msg.custom.assign("XSXOKPBLNUZOMARHMHSOAGCPNBZRGTKDWECHTAAZNQUCRJUWFCSJTDZOVPGWYWTKNDNDHYJLFYMLMXCKNSUYCKIDPIDCQSWKJRGEQDNXYQJFWMMTOZEOXMJHOBVAIXEFGLE");

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
    msg.setTimeStamp(0.00997194189774);
    msg.setSource(6748U);
    msg.setSourceEntity(130U);
    msg.setDestination(43108U);
    msg.setDestinationEntity(241U);
    msg.timeout = 37059U;
    msg.lat = 0.415871768957;
    msg.lon = 0.274016058744;
    msg.z = 0.802301624492;
    msg.z_units = 163U;
    msg.speed = 0.278907075366;
    msg.speed_units = 99U;
    msg.custom.assign("OTBATAQOUXKORZAFOZBPMQVZXXMEFGRHJUWWUXYBCNWKQZSONFEJMPRTHGCHCTDDOCQJVGVEMQDUBGVINWXYIKFZGTSJFIVJDQBHCSFNFKVYLUINVSFT");

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
    msg.setTimeStamp(0.163262333644);
    msg.setSource(59291U);
    msg.setSourceEntity(22U);
    msg.setDestination(56664U);
    msg.setDestinationEntity(228U);
    msg.timeout = 10397U;
    msg.lat = 0.677724376947;
    msg.lon = 0.0533149726666;
    msg.z = 0.983542488653;
    msg.z_units = 9U;
    msg.speed = 0.168604189549;
    msg.speed_units = 205U;
    msg.custom.assign("SGOASXWXBIBPAZALCYXFMUDTUWSXTLINVDYJAQDKCQUTZWRSSQVEMYRIUEHZJOXTGCLJAHFPNLOEMLQMAAUKBGAZUFLMIFOBNVOUSVNKKHPWWSHIINDXTIELGTWVFVGQWRVRGKEHQSBSCHFZMLMZKYXKXDJHYPZZCRUNNHLCMCROPGPFFBPBGROUXIDCTNCWNTJRUADTGKQYBCAXEDFRWDQKEVBYPMVNDZGJLJYEKIEEYBYIWVPOZQSH");

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
    msg.setTimeStamp(0.152898755253);
    msg.setSource(46869U);
    msg.setSourceEntity(249U);
    msg.setDestination(62382U);
    msg.setDestinationEntity(109U);
    msg.timeout = 30816U;
    msg.lat = 0.732713583354;
    msg.lon = 0.575567757436;
    msg.z = 0.141754439525;
    msg.z_units = 125U;
    msg.speed = 0.317733209034;
    msg.speed_units = 200U;
    msg.custom.assign("AWKUQYCKFCRNGDDVIBAOIVJLJCRYRHEUITXQWJIWKZZMNWALSKUTORUHIRMTYAXHPGWNIEBQMVDEYOAOBYAPFPCVLCGIQLJOIENSCNVULAHTSSDMWEBYOGTGKNPEDKAAQVIXPRZKCMTGFJDUHZZXO");

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
    msg.setTimeStamp(0.190527556238);
    msg.setSource(44259U);
    msg.setSourceEntity(65U);
    msg.setDestination(12159U);
    msg.setDestinationEntity(37U);
    msg.timeout = 33041U;
    msg.lat = 0.585859138286;
    msg.lon = 0.862076500878;
    msg.z = 0.919897921525;
    msg.z_units = 22U;
    msg.speed = 0.977831395121;
    msg.speed_units = 6U;
    msg.custom.assign("ZQAHDVJBGTDQKEFLWIROGYBMFTHKVCSGNPYJDSEUEYSJUKAIBYWKOHZCEGQTMJFDLWVPUSSFLFJDYBTYJNEYADNCGOIJSLOZRLZBCXVHBRUREKHBWFNERFNXRGEXYLVYQVZUQPFNZRAMPKLITOKXAACJZIDUVBQQFUOVHUGLZKWTQJDMNERSHSXOIGMLXCXWBWDQAOHCHBPXGOCCYMTIEZWHKIONPFPTKMARCNGLPXMVTANPUSWJIPAW");

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
    msg.setTimeStamp(0.568706826786);
    msg.setSource(34585U);
    msg.setSourceEntity(132U);
    msg.setDestination(5374U);
    msg.setDestinationEntity(71U);
    msg.timeout = 52142U;
    msg.lat = 0.16655472832;
    msg.lon = 0.135414444597;
    msg.z = 0.690255568219;
    msg.z_units = 58U;
    msg.speed = 0.247829498293;
    msg.speed_units = 202U;
    msg.custom.assign("IIZHVJRULODBUFXIGJAQPIHMCZUAOCAJORXBHOXNPVZJAWQWATEOHBXOQJDNKMMKNW");

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
    msg.setTimeStamp(0.288131568049);
    msg.setSource(14095U);
    msg.setSourceEntity(159U);
    msg.setDestination(39503U);
    msg.setDestinationEntity(236U);
    msg.timeout = 37087U;
    msg.lat = 0.349412641535;
    msg.lon = 0.227530779459;
    msg.z = 0.90381464733;
    msg.z_units = 155U;
    msg.speed = 0.480590619948;
    msg.speed_units = 21U;
    msg.custom.assign("NRHFDSBEDFNYPOVHYHETMCSPKNMTXQAGNHGUMMDKXPIWVJFIYMYGOTHATDJWEXHSUZEYUILECJSZDZVQQTCLKGWWLBPUUOGAAZUJBNLCVKGERJQFLZTXRDCNODIVVWRKIKRXUMLBQDRFTMANYDYZLWPLAVBGGXZFTBIIQXJQRCGHZIJDTBHWKREPAYPKSWJMKICXJFPWAXOIRQAMBEBY");

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
    msg.setTimeStamp(0.941760921331);
    msg.setSource(5806U);
    msg.setSourceEntity(32U);
    msg.setDestination(53625U);
    msg.setDestinationEntity(232U);
    msg.arrival_time = 0.235091478917;
    msg.lat = 0.20263633288;
    msg.lon = 0.444194631531;
    msg.z = 0.775032293999;
    msg.z_units = 68U;
    msg.travel_z = 0.00351713349927;
    msg.travel_z_units = 76U;
    msg.delayed = 105U;

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
    msg.setTimeStamp(0.337704446226);
    msg.setSource(14919U);
    msg.setSourceEntity(120U);
    msg.setDestination(51612U);
    msg.setDestinationEntity(144U);
    msg.arrival_time = 0.939819007056;
    msg.lat = 0.918325610864;
    msg.lon = 0.869181265738;
    msg.z = 0.179940839681;
    msg.z_units = 142U;
    msg.travel_z = 0.337195760508;
    msg.travel_z_units = 230U;
    msg.delayed = 34U;

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
    msg.setTimeStamp(0.171857895981);
    msg.setSource(26343U);
    msg.setSourceEntity(103U);
    msg.setDestination(2171U);
    msg.setDestinationEntity(17U);
    msg.arrival_time = 0.03285742382;
    msg.lat = 0.130958124287;
    msg.lon = 0.185107426373;
    msg.z = 0.453863640822;
    msg.z_units = 194U;
    msg.travel_z = 0.011024799856;
    msg.travel_z_units = 16U;
    msg.delayed = 41U;

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
    msg.setTimeStamp(0.179413982553);
    msg.setSource(39666U);
    msg.setSourceEntity(131U);
    msg.setDestination(40087U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.0923613141985;
    msg.lon = 0.285541891915;
    msg.z = 0.733668896173;
    msg.z_units = 133U;
    msg.speed = 0.555408569124;
    msg.speed_units = 75U;
    msg.bearing = 0.94212300147;
    msg.cross_angle = 0.473537046524;
    msg.width = 0.0887977738516;
    msg.length = 0.94421358608;
    msg.coff = 22U;
    msg.angaperture = 0.972922050543;
    msg.range = 60707U;
    msg.overlap = 90U;
    msg.flags = 53U;
    msg.custom.assign("IRWAILVDGFEITNKZRERPWPGSVUCB");

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
    msg.setTimeStamp(0.781572533148);
    msg.setSource(40520U);
    msg.setSourceEntity(177U);
    msg.setDestination(59881U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.31315021354;
    msg.lon = 0.1928668558;
    msg.z = 0.78846690316;
    msg.z_units = 149U;
    msg.speed = 0.542243530354;
    msg.speed_units = 241U;
    msg.bearing = 0.590284417177;
    msg.cross_angle = 0.385780459884;
    msg.width = 0.246243997027;
    msg.length = 0.766491505717;
    msg.coff = 243U;
    msg.angaperture = 0.930555588966;
    msg.range = 63014U;
    msg.overlap = 237U;
    msg.flags = 111U;
    msg.custom.assign("YSBIAUCOTEIJUXFVDPFYQXYUPGEXSMFDDKWZVFHZYNJIUPCMIQIWVKICBTWCZGWYKDIVMEKDBJYEAAOYPVTBQZRKIWDQRNCOQREYAITLHWGPCOWMMLOUYSZWURYCLPSRAJWEDLNOVESKTVGRQKVHUHOMBHBFVATBQFXNAOOEFLSTZUJJRBWVGNXQQFZBGKENQHAGOAFDXTMTJRZNLDPZ");

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
    msg.setTimeStamp(0.642834052878);
    msg.setSource(11030U);
    msg.setSourceEntity(76U);
    msg.setDestination(323U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.724438031261;
    msg.lon = 0.644330814352;
    msg.z = 0.977372944559;
    msg.z_units = 220U;
    msg.speed = 0.0388806457594;
    msg.speed_units = 217U;
    msg.bearing = 0.955423791165;
    msg.cross_angle = 0.476779746503;
    msg.width = 0.760121420211;
    msg.length = 0.955993776433;
    msg.coff = 46U;
    msg.angaperture = 0.846510886736;
    msg.range = 60070U;
    msg.overlap = 127U;
    msg.flags = 25U;
    msg.custom.assign("RGLUYTDQUGLDSOSGKIUUNSEABVPGYJVXFXXUMJCHKOPHEIMKMCMEPZPFMKQOYEKSYVWGVBLYFQPYABWRUWMEPULJHPXKRZHXEJDRVWOYIGLLZKIMZENCAWDMXOFNPQIWNYVGWLNEREIAUJWDYBCFPYCOZKCSVOPDUWGDLNHRTKJQBJLVZXRTQIDBFOHJREVKQSCXAAJNZTZFBTLMJCANOARDAHHIXIOHCSQSNQDGXZSBQWNV");

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
    msg.setTimeStamp(0.282739705217);
    msg.setSource(8879U);
    msg.setSourceEntity(33U);
    msg.setDestination(32213U);
    msg.setDestinationEntity(218U);
    msg.timeout = 6714U;
    msg.lat = 0.462621497869;
    msg.lon = 0.30766016861;
    msg.z = 0.43558381903;
    msg.z_units = 100U;
    msg.speed = 0.377665534172;
    msg.speed_units = 128U;
    msg.syringe0 = 150U;
    msg.syringe1 = 147U;
    msg.syringe2 = 93U;
    msg.custom.assign("RMMDBQITZXJPLAZRWHPNZOTAYGHJSPAENSIOTOGXCBKSZSLBLIYISHHKXTLNJVRYHNEUJMUHKBLFWXLUCSGKFNMHQRRNPLKSMFQZQGLHZFRWVKCMHSQXFYTEVRXJKOAJDTYTEEDUTDBYGDAWOJIZSPWPCDZAWN");

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
    msg.setTimeStamp(0.808175645302);
    msg.setSource(30535U);
    msg.setSourceEntity(191U);
    msg.setDestination(41732U);
    msg.setDestinationEntity(20U);
    msg.timeout = 55522U;
    msg.lat = 0.738486047206;
    msg.lon = 0.572424603234;
    msg.z = 0.147082234304;
    msg.z_units = 57U;
    msg.speed = 0.0612367551057;
    msg.speed_units = 51U;
    msg.syringe0 = 66U;
    msg.syringe1 = 94U;
    msg.syringe2 = 74U;
    msg.custom.assign("BXYQVDTASBHARSWWOIDABYCEGJMNYXNQPVRARFXKOKZGCDLSBEIMLHELUSSJZDOHSZSJCWEZSIWOOPFZUJOMVRGTFCCXBYCZHEMAHXIAQMIJQDTXAWZJFGNSVRTIKJICNLPXYDKXWZVUXVBDBADHTLFYLAQNENYKZNATCRHNCLUVTEVEUPUFPFRPMIIVIBJWRFEUBMRDOYW");

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
    msg.setTimeStamp(0.135306644331);
    msg.setSource(852U);
    msg.setSourceEntity(29U);
    msg.setDestination(518U);
    msg.setDestinationEntity(150U);
    msg.timeout = 56308U;
    msg.lat = 0.553364507048;
    msg.lon = 0.311566203449;
    msg.z = 0.850811458241;
    msg.z_units = 0U;
    msg.speed = 0.241982379903;
    msg.speed_units = 178U;
    msg.syringe0 = 248U;
    msg.syringe1 = 174U;
    msg.syringe2 = 65U;
    msg.custom.assign("EMLLIWMDLCGNNOINXQZHXSHKGWICVIBNDJMTAESSWDTOUAWKLOTWCHLGAGBELYPABOUFPJQECQLQXHXHIWZZEEXTGRVNCBSDNPDPYFFBITUJKRJDIEXMDNUINJMHFFQRPBYPBRHKXYKLJGULUQGUSCVZMHTOUJDNZCBZYBSYOKMRQFZSXCD");

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
    msg.setTimeStamp(0.326327034758);
    msg.setSource(42242U);
    msg.setSourceEntity(234U);
    msg.setDestination(25740U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.163971066527);
    msg.setSource(10994U);
    msg.setSourceEntity(161U);
    msg.setDestination(43549U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.287531535959);
    msg.setSource(38533U);
    msg.setSourceEntity(76U);
    msg.setDestination(16493U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.431580624406);
    msg.setSource(12574U);
    msg.setSourceEntity(76U);
    msg.setDestination(34487U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.678003540537;
    msg.lon = 0.705054904602;
    msg.z = 0.914231286194;
    msg.z_units = 40U;
    msg.speed = 0.80516240386;
    msg.speed_units = 193U;
    msg.takeoff_pitch = 0.0775726822175;
    msg.custom.assign("OGTUQJVDMCTRXUQIEV");

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
    msg.setTimeStamp(0.152276206137);
    msg.setSource(3788U);
    msg.setSourceEntity(173U);
    msg.setDestination(50184U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.268276758242;
    msg.lon = 0.467241877623;
    msg.z = 0.222777666156;
    msg.z_units = 72U;
    msg.speed = 0.690066404106;
    msg.speed_units = 234U;
    msg.takeoff_pitch = 0.564742237151;
    msg.custom.assign("NDOOHKUISBJXMHDFZMUYAQZWIUYWMRLPJABISJQZINCDSMSLLGVVQULPXQMINXFAKTISKOARBPUFZPHACNNZYKHUOMHOBYQREXMTZBTOABBETJRQLDNZHQWGEUKJFDSSTLQTVACDHBXEXCNVDDIKCOBYPWTPZYMNGWEADGSFRFLJKQGWLRPASYGEAPYCHJZTVCRKHJFNUJEJOWLD");

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
    msg.setTimeStamp(0.903516829764);
    msg.setSource(26713U);
    msg.setSourceEntity(252U);
    msg.setDestination(22842U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.736883231098;
    msg.lon = 0.636203964701;
    msg.z = 0.652782179221;
    msg.z_units = 24U;
    msg.speed = 0.231725127677;
    msg.speed_units = 198U;
    msg.takeoff_pitch = 0.123302026595;
    msg.custom.assign("VCEUSYFITERDSWRDYLFHXCFZUJNNPLCIDYOTKXNAGPRMDICNGCYVYIIRMXQLTVYAXITEFOTPOPDCCETSPRIVQFFYKHKGPBCMOMHPTMSQJASHOEGBHRALZXNUVXKUQZXBOZSKWBZJVGGPNNICUHLZJTGTLXFUAOXIBCOEMSHDUKDQQNRNJG");

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
    msg.setTimeStamp(0.453489203241);
    msg.setSource(43724U);
    msg.setSourceEntity(181U);
    msg.setDestination(10985U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.109929845874;
    msg.lon = 0.516193870286;
    msg.z = 0.157453200781;
    msg.z_units = 127U;
    msg.speed = 0.378330431124;
    msg.speed_units = 137U;
    msg.abort_z = 0.482644302462;
    msg.bearing = 0.304538860769;
    msg.glide_slope = 157U;
    msg.glide_slope_alt = 0.369619096482;
    msg.custom.assign("TOAAODALKSRZEEIISOPVXRYIYSBTZNHNWZYNWRGMZPSGIOKEZWCELGMEBHOPQKCVSLOZLOWYFMRCVZOUDGDPYXTFSJXRMSNDNGVGWGQXBJUTNPGUCKRVXSFZUIWMILYHNAJQXQUYCHRHLSINCNYJDTVEFVUKPJB");

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
    msg.setTimeStamp(0.349298735556);
    msg.setSource(63891U);
    msg.setSourceEntity(26U);
    msg.setDestination(16366U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.581819196842;
    msg.lon = 0.898890802644;
    msg.z = 0.938177327547;
    msg.z_units = 195U;
    msg.speed = 0.441804479568;
    msg.speed_units = 247U;
    msg.abort_z = 0.58874410288;
    msg.bearing = 0.421472502042;
    msg.glide_slope = 171U;
    msg.glide_slope_alt = 0.71101001984;
    msg.custom.assign("PGYKPCBTCFTNOREHYBB");

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
    msg.setTimeStamp(0.766758354708);
    msg.setSource(57175U);
    msg.setSourceEntity(106U);
    msg.setDestination(8520U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.125221812258;
    msg.lon = 0.671001944725;
    msg.z = 0.983059134561;
    msg.z_units = 186U;
    msg.speed = 0.206638314812;
    msg.speed_units = 2U;
    msg.abort_z = 0.597070786009;
    msg.bearing = 0.0949816334316;
    msg.glide_slope = 181U;
    msg.glide_slope_alt = 0.923826547947;
    msg.custom.assign("KKMVZPYYIAPCURHYMVVHDDSNSWKVJWTTSVGBMEARRIEHNRBYAMTSQPAOGQJUFTKDQXWJCOWCNUEBNBFUKRGWPZGLJFJGQLDQMEJQADDWSUGHCNPSCXMAOCTZBHKPHZULGUYZOXMAGERWWNTOOBMGFROLDRQVLIXXLUHYDYDZHFWTXXZYTSAINHWCCNLEKULOFZLIJJMIVQYXMRFKBLSOPIIBSVXXFKTQTNBBREDI");

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
    msg.setTimeStamp(0.922654753581);
    msg.setSource(11612U);
    msg.setSourceEntity(89U);
    msg.setDestination(19982U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.037842749101;
    msg.lon = 0.948946730534;
    msg.speed = 0.00302510709852;
    msg.speed_units = 136U;
    msg.limits = 41U;
    msg.max_depth = 0.349624896183;
    msg.min_alt = 0.735707855439;
    msg.time_limit = 0.403068143473;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.146955124205;
    tmp_msg_0.lon = 0.182331685636;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("MIFMAKBVWGRLBKRVXSQENRHADUODYVNLSELUTWEPSBHIQCVRXNUZYCDLOGO");
    msg.custom.assign("EVCICOXXPMSMSLLUKVRLYRRQNUQHIMOJQYAQZAYZWIBYXCZMPKGLSDJJUDTUOBXBWJXYSFIZTEPNJSGRSFWAKWVWLTWRIPIWDMXUYVJYTFACEP");

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
    msg.setTimeStamp(0.898580700546);
    msg.setSource(24745U);
    msg.setSourceEntity(34U);
    msg.setDestination(62894U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.110804165028;
    msg.lon = 0.578463310281;
    msg.speed = 0.508151586429;
    msg.speed_units = 126U;
    msg.limits = 206U;
    msg.max_depth = 0.353374258182;
    msg.min_alt = 0.332025756834;
    msg.time_limit = 0.986649370723;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.29902377865;
    tmp_msg_0.lon = 0.753780337342;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("AIXJCFFHNPTWHNO");
    msg.custom.assign("JSEGXLNGUANOVDDHEYAIPHSXHWJPFWKCTOVRQPZZZYHXCSMOFNTRMMSPOUBNPWWPDKVQJSBPCUZOERWVUIHKCTRLEGKTUELLEBYYXOVPQJLZTJJTKLZAMQDXUOHWFGPJERRFCUHKVMGHNAZEZJYYBJFDOKFRWDRWRYMLMBAJMIFDCXHKQGCIACXSVXBWFQNNFNUAASAIIIXVMCOCTGASGBQHNTLMDR");

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
    msg.setTimeStamp(0.0974349516966);
    msg.setSource(58243U);
    msg.setSourceEntity(112U);
    msg.setDestination(55781U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.623517255352;
    msg.lon = 0.620527718007;
    msg.speed = 0.076040945514;
    msg.speed_units = 215U;
    msg.limits = 126U;
    msg.max_depth = 0.106692877078;
    msg.min_alt = 0.767743852475;
    msg.time_limit = 0.159584448249;
    msg.controller.assign("JMAKHJYICKREABNCWTQPNHYELVMISPJIIKGCFGOKKNNSEXUVCWWSPWZQXSDWLDHTPXOEKBLMPDTDACORPQXFCTBAAQDGLWOQMBPYZZLRUIVYZHHS");
    msg.custom.assign("WCFNGKUDCVVDKNYXXEKWRPDMLWEULOCNPJPPHVBQNKXKZOUDXWJNBHFCIRPULOFUTAEFVAGUGVFYMXYAEGQPBRNGEXVEYPBRAWZLGRRZRCWICZEJMNFQTFTIMTJEKQRPDELXOBGACYGPUIGONTJYXYKDTYUSZFWJQOMDICMUHBMHZLTZQQIASSCGFKKAYZCVSDFMXKOZDBWWUORSVILHHASBYQLJBZBTMHAQLTOOSNMHSVWSISRXJVTD");

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
    msg.setTimeStamp(0.250336825456);
    msg.setSource(52223U);
    msg.setSourceEntity(55U);
    msg.setDestination(7973U);
    msg.setDestinationEntity(219U);
    msg.target.assign("NJCHXVUZBAGGAXSI");
    msg.max_speed = 0.45964288766;
    msg.speed_units = 35U;
    msg.lat = 0.971692813061;
    msg.lon = 0.488065126505;
    msg.z = 0.836801313386;
    msg.z_units = 71U;
    msg.custom.assign("UBZAOVHNCUNCOKGSKYRKLMIVJXSDWXTZBQGITAGCDEZLNIWHTRVGTAOGFLOGRDDPJSCANXKNCKBMQHIDBHJPHXEMFTPKVBJJNINUEFLYLYUHUMJWZKJVSSNGVYHTCDYEWMXPRIGVQUPRHSWAFFBORPPXZUVSVEUYMXTPDVCBZMCTWBFG");

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
    msg.setTimeStamp(0.389130314079);
    msg.setSource(54934U);
    msg.setSourceEntity(251U);
    msg.setDestination(65513U);
    msg.setDestinationEntity(153U);
    msg.target.assign("VOGKTGXWUKFLPHDFVDVSRYPWAWTXYJDNQTDVEIZFADBPEOFGEBDLNWNUHBXRFJLSHAUMZTIGHOTRSQAPFZQSMJGUNBBQPVEQCWPLYBONKJLYXCFQIDIUGPCZJQAGVMWYJZIXUXGOBTWRKPLDCSCHYNKVYMAS");
    msg.max_speed = 0.811760458351;
    msg.speed_units = 110U;
    msg.lat = 0.793602300086;
    msg.lon = 0.229318373552;
    msg.z = 0.378982017241;
    msg.z_units = 248U;
    msg.custom.assign("YUGMLZXNPYOMPQBAUZKEPUNILQPAXENORYZKLDEBDRWHGIWIYXHUEADYZSXQBJKAUQDJLOEVMJTMAJUSLQAQCLISKNFJJHFLFBYIMBJXWMSXWKCCSETMTTMIPFASLZDINYYCQOHXBWBRHWF");

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
    msg.setTimeStamp(0.297218147638);
    msg.setSource(14003U);
    msg.setSourceEntity(127U);
    msg.setDestination(44329U);
    msg.setDestinationEntity(162U);
    msg.target.assign("MGHOSCPJGSILMASF");
    msg.max_speed = 0.719274516422;
    msg.speed_units = 234U;
    msg.lat = 0.8970706404;
    msg.lon = 0.774624870434;
    msg.z = 0.0875636344096;
    msg.z_units = 55U;
    msg.custom.assign("VQKUZWHZWIZYGRRIUFCGOVZQUBIUGJOHTMZIJCRUCJQQITGEVOLZSSSFBBOSHXFLHNOZPPYQAUJMMRTNNTYAQPBDLOLTEFCPJXZWGXMQVUDSYEYMVATRCLEDXRKKGJQEYFKXMHGKEGLTHAJDXXVYAWRLISDINRAOUPDVBBJJTRBECHGSXTZBWMSKLCLMVWFKQPJAKYYLMWFANIPXVNNB");

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
    msg.setTimeStamp(0.0808267403415);
    msg.setSource(37169U);
    msg.setSourceEntity(149U);
    msg.setDestination(11831U);
    msg.setDestinationEntity(85U);
    msg.timeout = 47102U;
    msg.lat = 0.137920671539;
    msg.lon = 0.474125982707;
    msg.speed = 0.476003108565;
    msg.speed_units = 78U;
    msg.custom.assign("PGQODVZEFCSPSVISPMKLSRMEDPLLBZOMXHNQGGDHTYDQAWUTRJTGZUNMJFTYFTCSYPKFYQWMGRZHIBBUCTPDSNIGQHVQPDJZVRXCRELBCLNWUUOPXJEUEYQESWAQKZARDMKBYWCAPKJBUHSRXJVFHYASIFKCBLLHRPUEEYWROTIEDTMOJLTVTMHXRCMOOB");

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
    msg.setTimeStamp(0.72751039702);
    msg.setSource(2749U);
    msg.setSourceEntity(119U);
    msg.setDestination(17487U);
    msg.setDestinationEntity(215U);
    msg.timeout = 51453U;
    msg.lat = 0.771995466034;
    msg.lon = 0.575889812022;
    msg.speed = 0.787450566311;
    msg.speed_units = 145U;
    msg.custom.assign("FBEZBENRSYG");

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
    msg.setTimeStamp(0.0428884035561);
    msg.setSource(14748U);
    msg.setSourceEntity(109U);
    msg.setDestination(19898U);
    msg.setDestinationEntity(194U);
    msg.timeout = 43212U;
    msg.lat = 0.693029540857;
    msg.lon = 0.0431151966432;
    msg.speed = 0.382013236841;
    msg.speed_units = 7U;
    msg.custom.assign("RFJGUDSACFSPANCWXBHGSBVNHAJOUUYNMVBQ");

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
    msg.setTimeStamp(0.203462656183);
    msg.setSource(52127U);
    msg.setSourceEntity(137U);
    msg.setDestination(19173U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.126686400422;
    msg.lon = 0.107754701528;
    msg.z = 0.0877035031925;
    msg.z_units = 150U;
    msg.radius = 0.352755784345;
    msg.duration = 30604U;
    msg.speed = 0.85263924521;
    msg.speed_units = 5U;
    msg.popup_period = 6044U;
    msg.popup_duration = 53592U;
    msg.flags = 210U;
    msg.custom.assign("MIPBCHJNJBMYMDQVBSGRLEGMPXZFGAPNCDDSOPTMAECDOJTILARQNOWOHCIWSFJIHYNESFQOBPKOGUUYLQPOSFPYYQWKDHFVAKEWZXLJZWIVXDJMOQNRMIXVQFOGEFEEGCUZLNZHBTTXEHLUKTFURCXTZSYAAYWNCDLRHTBIQKCAJWWSLRBIYLSVJMVJSYWVVGXBRHKMBIRUJYXZZ");

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
    msg.setTimeStamp(0.979880279536);
    msg.setSource(19750U);
    msg.setSourceEntity(42U);
    msg.setDestination(62813U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.340353669775;
    msg.lon = 0.461931384609;
    msg.z = 0.963527837361;
    msg.z_units = 139U;
    msg.radius = 0.109805961009;
    msg.duration = 54764U;
    msg.speed = 0.0190225027482;
    msg.speed_units = 247U;
    msg.popup_period = 37333U;
    msg.popup_duration = 21406U;
    msg.flags = 194U;
    msg.custom.assign("PWFMBBZOIUOQXIDCJETKHWLDHCPXWBZYVICXEBCHHQWVSASSGPZTQNBOVRYQTVLADTKPBQRGNEXLZDYGNSMHCUQPKSVPDUKJACKFDOOQEJNTDAWGFNIUIIBZAYUYSEGVIKHJZKLJZMXPMVVXXOMEFFPMRLC");

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
    msg.setTimeStamp(0.489892338738);
    msg.setSource(11020U);
    msg.setSourceEntity(229U);
    msg.setDestination(43793U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.273265160012;
    msg.lon = 0.585028409453;
    msg.z = 0.235011934344;
    msg.z_units = 213U;
    msg.radius = 0.859674630473;
    msg.duration = 37362U;
    msg.speed = 0.750015412059;
    msg.speed_units = 235U;
    msg.popup_period = 22162U;
    msg.popup_duration = 36016U;
    msg.flags = 94U;
    msg.custom.assign("PDNOVOFOMHKQMYGVOUATOZRYFAWZZIYREJXGUEQMZYXXMOXMLHLDSTM");

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
    msg.setTimeStamp(0.821980537739);
    msg.setSource(26457U);
    msg.setSourceEntity(165U);
    msg.setDestination(47355U);
    msg.setDestinationEntity(157U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("BXQXHQPONNXBXSWDRXIFRQZXOCCMLGJZOLBUHJVQBHGAOAFHAEINUUDFJMXGKWJXOBGKASFPHFJDMCMLEEIYEHEOPIBVLTFFRQTWGLVIWNDJMKFTUB");
    IMC::Drop tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 13613U;
    tmp_tmp_msg_0_0.lat = 0.874595853042;
    tmp_tmp_msg_0_0.lon = 0.490815600865;
    tmp_tmp_msg_0_0.z = 0.204060225033;
    tmp_tmp_msg_0_0.z_units = 141U;
    tmp_tmp_msg_0_0.speed = 0.316458969243;
    tmp_tmp_msg_0_0.speed_units = 104U;
    tmp_tmp_msg_0_0.custom.assign("QKWYOOYVTFLFVJECIBEAHIRJDPQFNLROEXKFSROUJQVAPFGKCMUWKDTXCOXYJVWMBITCCHBJQIXHNNRZSPHONMOUVZONXLWHMZLBGRZVJYYKYJGSTGFEELBMKLLFPQBFGWTDSWPCUASRSZHIZEAIYCUKLAPYSTRELZCDBIQQPXWARXHAQBIXGKINOZUVSBNUUNQDDYPJUWTOGXTHLZECPIEGGQMVSWMTUDXDPDNJCYJMRFMKHABAKTDHZ");
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
    msg.setTimeStamp(0.416528528446);
    msg.setSource(6485U);
    msg.setSourceEntity(150U);
    msg.setDestination(60550U);
    msg.setDestinationEntity(144U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("NXXNTNIOSDOZVRZYEISXXPKMKBHBQYUUGVODKNPGTRFKENUABUJRLEFKQRQSSQYVWYOJRUGFUWPHKTXUSCXQYWQIJUSQQUHRDWICZLVDACILINTZTYNJQOZTDPNULKYAYVCGHWWHGDHIFRCZLYLSMMLVAICJWDOGMFBTRKHCKZVBBDAPKEEMCYAEJOXGPRFMPWPJLMBWFOAGHJHLAFIMXFJGSZEPDBGLHJVSADOSVZMEXICZOENNRCMXEWPB");
    IMC::RowsCoverage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.896089452691;
    tmp_tmp_msg_0_0.lon = 0.00423340447677;
    tmp_tmp_msg_0_0.z = 0.236435228311;
    tmp_tmp_msg_0_0.z_units = 114U;
    tmp_tmp_msg_0_0.speed = 0.773850638349;
    tmp_tmp_msg_0_0.speed_units = 39U;
    tmp_tmp_msg_0_0.bearing = 0.872992694017;
    tmp_tmp_msg_0_0.cross_angle = 0.120158050506;
    tmp_tmp_msg_0_0.width = 0.293617084969;
    tmp_tmp_msg_0_0.length = 0.321864117868;
    tmp_tmp_msg_0_0.coff = 26U;
    tmp_tmp_msg_0_0.angaperture = 0.434114344199;
    tmp_tmp_msg_0_0.range = 20814U;
    tmp_tmp_msg_0_0.overlap = 62U;
    tmp_tmp_msg_0_0.flags = 110U;
    tmp_tmp_msg_0_0.custom.assign("SZHHKJHLATIOJULGQDZXQNKAQKSMHWBZWSOGIFJUEBFQELKEPKOIBZPTYPYHACSVRLZKEUUZBNDDHFVXPAQTCHMWBWDEXEVMRNZKZMYFOKTCRYYNZVSOMVXIPSFVLFGYCBRTBHRQIDMUOJBVDXGWJNOUJFMRLURRYVI");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::TelemetryMsg tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 0U;
    tmp_tmp_msg_0_1.req_id = 3058215124U;
    tmp_tmp_msg_0_1.ttl = 14571U;
    tmp_tmp_msg_0_1.code = 52U;
    tmp_tmp_msg_0_1.destination.assign("WFBDIDOZSJBJJNYVRREWYBHKTYGIFXTGVEZMFQNEUQWOZIBWOFSEKVEFBVYBTDZMFHPR");
    tmp_tmp_msg_0_1.source.assign("GQMTQHSOPMJEDQHCFREWQJWXHUKBNJEOFHKINUORANCVCULAXWTYYVYQSABADTGZXKYKODJDWRJLNQZNXMIMOORDLTYBLG");
    tmp_tmp_msg_0_1.acknowledge = 50U;
    tmp_tmp_msg_0_1.status = 188U;
    const char tmp_tmp_tmp_msg_0_1_0[] = {59, -119, -16, 18, -38, -110, -56, -71, -86, -1, 21, 110, 116};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
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
    msg.setTimeStamp(0.63342470685);
    msg.setSource(19675U);
    msg.setSourceEntity(230U);
    msg.setDestination(48168U);
    msg.setDestinationEntity(151U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("IUVDFBDXSZKOTLVLVTKPNJMXQOOLLPHDTQMVDRVXBENKGVXIEHSIZSBFCTYZNAIKSYSNM");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.644211402368;
    tmp_tmp_msg_0_0.lon = 0.446168231872;
    tmp_tmp_msg_0_0.z = 0.320356903207;
    tmp_tmp_msg_0_0.z_units = 167U;
    tmp_tmp_msg_0_0.speed = 0.0143524586802;
    tmp_tmp_msg_0_0.speed_units = 59U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.20214929673;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.197264353127;
    tmp_tmp_msg_0_0.polygon.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("WUQAPEWHZPPDMNRUYEMJKWQSYJLNGRPLNIFABHWRCYSNDEBOFRKQPEKELGAPIXASPYSKBXTCQTGLLTNFCIVUWEVZPGFILRXDUJTTZDKOJHDUNTJUAYCFHEQLRZVTAVQYWDIMSCWVHKYHZBNWIEGMFYMVNQX");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::TrexPlan tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.reactor.assign("HQXDNRKQJAOPIMQRJVZOCRKKBBDLVGUEIUIYTCHUPLIGWMKVNASDELOQWGBBVPTKVWOYSNNZKXJXJWVOBPDGXBVAZASMDYPRRTTICXDDMWIGJFEXKYZMCPXFVKWCLOSERFALINNUUFQYFTETNJNBEWFDELHXMGOLBYKJTRBUPBNMGCXFSWOAUHECJIEOCCTIQZZHAGZCTSUPYRQ");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.258815241401);
    msg.setSource(41658U);
    msg.setSourceEntity(207U);
    msg.setDestination(58652U);
    msg.setDestinationEntity(81U);
    msg.timeout = 15265U;
    msg.lat = 0.0189439931247;
    msg.lon = 0.882000277201;
    msg.z = 0.770856889377;
    msg.z_units = 22U;
    msg.speed = 0.810158346246;
    msg.speed_units = 59U;
    msg.bearing = 0.300635047732;
    msg.width = 0.365326776691;
    msg.direction = 118U;
    msg.custom.assign("RMSVDUOWBBMWECVPBUFPRGNZUWPQYLLFQSEOQSRCZYZGONDJXYTZIEANAQHQDKTIWBHDHSQTHJOKLEHJXYIYQUCOERIFNOEDZYLIHEWTIKNJZUWGKLDSNRYCTGJLLCAKG");

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
    msg.setTimeStamp(0.710732307275);
    msg.setSource(9003U);
    msg.setSourceEntity(37U);
    msg.setDestination(45958U);
    msg.setDestinationEntity(177U);
    msg.timeout = 39669U;
    msg.lat = 0.325227979252;
    msg.lon = 0.569083968852;
    msg.z = 0.813916084638;
    msg.z_units = 114U;
    msg.speed = 0.765051916021;
    msg.speed_units = 151U;
    msg.bearing = 0.751467333252;
    msg.width = 0.944788214083;
    msg.direction = 157U;
    msg.custom.assign("GVEMDSYOWFNFOJFUYZKGCEMHQXUDILGIEGKAHLJLPTIDDXKRVUNXCZIFPOMTLSBYHELWMSDCKLGMTKZISCJTJVWNKWKASFRTSMBGPIEXPJQAEXJOWVINEFPVLZMJSQVUGWNIRDRHDJRTIRXKUYMLFMDURYORHCSZNQRVFKNUKCBQCAOQ");

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
    msg.setTimeStamp(0.312888426197);
    msg.setSource(12889U);
    msg.setSourceEntity(67U);
    msg.setDestination(30606U);
    msg.setDestinationEntity(190U);
    msg.timeout = 60772U;
    msg.lat = 0.367978637692;
    msg.lon = 0.325728771862;
    msg.z = 0.125738175332;
    msg.z_units = 61U;
    msg.speed = 0.540351949548;
    msg.speed_units = 175U;
    msg.bearing = 0.349834914142;
    msg.width = 0.397694444089;
    msg.direction = 144U;
    msg.custom.assign("XPBJGPSAFNTXIHZCYISKUHFAKEXZ");

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
    msg.setTimeStamp(0.121718836341);
    msg.setSource(46434U);
    msg.setSourceEntity(33U);
    msg.setDestination(59906U);
    msg.setDestinationEntity(187U);
    msg.op_mode = 184U;
    msg.error_count = 101U;
    msg.error_ents.assign("OUKMWDAJLLWUHQMENGAAXEVPMRJPFYILBPPFQBWZCEDWROVKWTPIHAICYIS");
    msg.maneuver_type = 16338U;
    msg.maneuver_stime = 0.93587623102;
    msg.maneuver_eta = 38780U;
    msg.control_loops = 52715194U;
    msg.flags = 74U;
    msg.last_error.assign("MIHHDRZVCYLYBKAODWXTQUUFQMDQXCRJOIGXFWCJOECGVLHGLUDEOCOKTPNXKGCDUSLYQRLGNKSMNFSLJROQXVYZIJMIZIUZSWLBCPVBUODKNGSXFWPPDOPSAZZPXWETLNRKSBRFGFUDVSHTZIEKERHJQAHNVYOFHZVJGRDEKJPTBGEUQKHSTIQCNATXOLJWVFBY");
    msg.last_error_time = 0.323182923575;

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
    msg.setTimeStamp(0.0551230083003);
    msg.setSource(24496U);
    msg.setSourceEntity(208U);
    msg.setDestination(10282U);
    msg.setDestinationEntity(209U);
    msg.op_mode = 18U;
    msg.error_count = 128U;
    msg.error_ents.assign("RFSCULTFNOTCQAJAYOZRBSLIFMFEZEEMPYOCSLINBMHEAARDQWGEPASZJNNCHNTRFBLURXMZOWPXLHZFXPPMCFWXTXCWUEOEGCKWZMBGDVGOVHFMQNDGJFITYHGLWYJQRDMHQNRKULUHXOZJXOIPAZBWYIHGEMMQCBUFVOCPKDSNEJJWUUXGUPQIVETKHYQXLVASRBBDWVJVRBLAJNTVOIASUNBYDSWSKRIDQYZAVVLGCKK");
    msg.maneuver_type = 58307U;
    msg.maneuver_stime = 0.295326715974;
    msg.maneuver_eta = 46409U;
    msg.control_loops = 2850216053U;
    msg.flags = 223U;
    msg.last_error.assign("XZWEZMOLABQXLMTXNQUHBEATMSYXBSVYRYLMVYKTGONWDEBORLQGDUSTC");
    msg.last_error_time = 0.883349094406;

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
    msg.setTimeStamp(0.662491155908);
    msg.setSource(40975U);
    msg.setSourceEntity(213U);
    msg.setDestination(62769U);
    msg.setDestinationEntity(25U);
    msg.op_mode = 145U;
    msg.error_count = 205U;
    msg.error_ents.assign("MVITZIVKXHTAFRUHDHNRWUPOVTHEYJRDEMHCKCSBDAMJ");
    msg.maneuver_type = 8202U;
    msg.maneuver_stime = 0.868687885974;
    msg.maneuver_eta = 50482U;
    msg.control_loops = 3821491809U;
    msg.flags = 89U;
    msg.last_error.assign("KHVNKSZMBMIXZSXNQLRIAAQXJCZXAVMHMKFOPBUFHKQZJYJRBVIDZMMVYHLOFPRVKIEFTTUWLIJHSRGJCCBOWATVAFOSXLJIXROGEJHUXLPTFJDCTMAPTTWYYXNRVWMCQLDUUUBEQUCUNRSQTBYXLCPNSWPP");
    msg.last_error_time = 0.807604194554;

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
    msg.setTimeStamp(0.97384040759);
    msg.setSource(39532U);
    msg.setSourceEntity(78U);
    msg.setDestination(33355U);
    msg.setDestinationEntity(201U);
    msg.type = 21U;
    msg.request_id = 54842U;
    msg.command = 197U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 38135U;
    tmp_msg_0.rpm = 0.295983373146;
    tmp_msg_0.direction = 106U;
    tmp_msg_0.custom.assign("ISYFNMMRMHZPCVTLRTGKAADEKYYQLTIPVBMOPVXVLRVGYHHCDNDILKXLICWXVPUTPYRGPYCLEDPOJZGUZTYAHTRIXOCRAPESFZIEZXQNCUMMAXQFHMBKNSIBNQMBTRHQKCLLVDBHWBMVJGTUUQWFNPBXFOZJJASIZWXOGIEKSZYODAMNGQTZEWJYWCFNKEDFJBHWGRHKWJQFNEJXAZUDULYOSPK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 19742U;
    msg.info.assign("ONXFWCBYCGOEMKXKMJORGLYDALFQMDFIEOQGHJHNUJJWFSZNEYRMVKAGWXANWJYUZIJWGPMWIGEPCSOPSONQRJZYERBBTXGCHWSLUVCKESBMUHAFQCQZXRIQFVIYINLTDDTYDHRHOZLNZIMDYVRPATMDU");

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
    msg.setTimeStamp(0.66227588494);
    msg.setSource(35149U);
    msg.setSourceEntity(231U);
    msg.setDestination(55194U);
    msg.setDestinationEntity(172U);
    msg.type = 244U;
    msg.request_id = 2955U;
    msg.command = 148U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 14246U;
    tmp_msg_0.lat = 0.365130347284;
    tmp_msg_0.lon = 0.661701355362;
    tmp_msg_0.z = 0.75603212389;
    tmp_msg_0.z_units = 44U;
    tmp_msg_0.speed = 0.401761902262;
    tmp_msg_0.speed_units = 179U;
    tmp_msg_0.custom.assign("FDNYVWKCBIUXXRYMAQFKOFEMNFWCPWWDPKUSUBNJRDEAXHBIHEQONSYYBHEJUIJHZJOLDDFLJKZDZBAGKGMBKBYQGXURCMWJYQVPCAXNSUMVGPTTBRQWKGLXZDJOYWRGOFKZSRUJCECEWWHILPKQXISIHRSOKMDEZXULNPRCSSTTZZDTHHFAIESVFLZXBFTLJGMDTYTCJEQAPBGTVPIRICQLVQWNAHORVEIOATOVN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 532U;
    msg.info.assign("NXYPHDGCUMYYSQOBRUIKHCTCFMZGGEBHZLKGOWXXOQLQNVDPMALJVCLSIIMBWEBRFQBGKHWOXTXPRGKJLDWEADJEWBLQJKJVXTZDKJRZAZZSUNFPRTIWSCFSTCPDFHTENFNIFRJXETIEQIZLIVXNVSRTJFVAFWNGPPMAVKIQDAUUDGPHQQGMOKCAOROMAUSCHUUCHBYYJYAWAEKPTX");

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
    msg.setTimeStamp(0.650841211178);
    msg.setSource(9168U);
    msg.setSourceEntity(226U);
    msg.setDestination(30277U);
    msg.setDestinationEntity(142U);
    msg.type = 52U;
    msg.request_id = 19759U;
    msg.command = 178U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 36964U;
    tmp_msg_0.lat = 0.460158788602;
    tmp_msg_0.lon = 0.844628226602;
    tmp_msg_0.z = 0.483658968447;
    tmp_msg_0.z_units = 43U;
    tmp_msg_0.speed = 0.470206946156;
    tmp_msg_0.speed_units = 254U;
    tmp_msg_0.roll = 0.275604009455;
    tmp_msg_0.pitch = 0.985901177641;
    tmp_msg_0.yaw = 0.225182823728;
    tmp_msg_0.custom.assign("RRFZWNMNGDWPVHUTXNLDUOUAJOARMRGLXEIDRRMPTBDIFYSQSDULKOUBPQLVCDSYOSJUWGIWKZAAKSMKJNIZVWSGXQGASPBFQBBXTLXTFOVXTJMWJRUFEQFLXCEZPCMGVGYSMXAPGEXYGTMHJLEOTQNDKOFQAFCPIEGWYRZCHWRAIJDKACYWJNTCZUQHLIJTOELZEJCHEPHOHQPVBNHEYLKVCIUKWVSDZYQNYFKKIBHHBZODYUVS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 24644U;
    msg.info.assign("QBUZPNHSFGCONGSZVJXZGYWAECKYLORJSWDDEWQHOTMPDUNKWWPZEUQXSARUJZDHSGDUBDNCHX");

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
    msg.setTimeStamp(0.108425397783);
    msg.setSource(46562U);
    msg.setSourceEntity(174U);
    msg.setDestination(60244U);
    msg.setDestinationEntity(86U);
    msg.command = 249U;
    msg.entities.assign("HKJZHCNOWHFDPVDBSARRWXHPAZIZOPLSLSCDVLZZKKNOIDTHBENUYOKICWFJMEDYPHYYZEIKNRUAZVXPBEURAWAXOAPGRYFQVJQQYNNSTCJGXTTQ");

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
    msg.setTimeStamp(0.249246726246);
    msg.setSource(20409U);
    msg.setSourceEntity(28U);
    msg.setDestination(42356U);
    msg.setDestinationEntity(83U);
    msg.command = 203U;
    msg.entities.assign("KUZDLEHMEVGIEJXLESFXVLUUGTRWJHEDKBIWFNYVKSKPJSOPVDTYFAGFQTNANMIKINBOKJTIPMNZRJJUKRQUMADTRBTCBOYHJNAQEXMCDJWZAQGIPVZLE");

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
    msg.setTimeStamp(0.981173704559);
    msg.setSource(65385U);
    msg.setSourceEntity(88U);
    msg.setDestination(54230U);
    msg.setDestinationEntity(201U);
    msg.command = 133U;
    msg.entities.assign("FTQUZWMIVKQSQTMQZPZEYKVJEEBGJSNCCVRNXDXKRSHMWGQGFJFYIVNSXPRGUCZOLWNFHPAREDAUZUJBKPTHBSSOCEDQYZNTBNXKRLHYDTJBDAQHIUTNLMRJGABCLFIWOYXVSZKDIARUFWZOIOCCFJDYSXGTJWOEPNXWSXQNLGCBPWHXGK");

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
    msg.setTimeStamp(0.026740941198);
    msg.setSource(21635U);
    msg.setSourceEntity(105U);
    msg.setDestination(55406U);
    msg.setDestinationEntity(152U);
    msg.mcount = 71U;
    msg.mnames.assign("QITCZDOMZKSCYPYQYHSTRORU");
    msg.ecount = 142U;
    msg.enames.assign("OJACIUYFEVGOXQUJDNBQIUJRTPFRQYVBDMTELJPRQPWOGCMJDVMIVDHQNOMGERTLVGSEHCWNLHOUVMHYVNBDWCNLWCQJVLIKTCZTSHPYJPYRLICFBUDTIZYMDJTIHCFZAFLAKEXLZWZCVZWJZEZN");
    msg.ccount = 214U;
    msg.cnames.assign("EXGNBMYTGNMCNLEKYEPXUJQXGFPBRHCBONBSFSYDRAKYTRRXVTIPYHYG");
    msg.last_error.assign("JECVOLRIXTNAOEJNCXTAFEYIPIFIROYPOTDUVYJBFVWSFRWQZAELMFVGBNOVMAAGLQKFAKCIOVYDURHHGTGPCZYGJDJHVRPRTWLJAPJZKMKDBQQMNKNFSTSFLYCTMTHZUDYTTHZVSQGDSCUHVNJMYLIDYDPHVLGSWEXIBEQBKWNWXHLZUC");
    msg.last_error_time = 0.881859754924;

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
    msg.setTimeStamp(0.929486449734);
    msg.setSource(13537U);
    msg.setSourceEntity(50U);
    msg.setDestination(31823U);
    msg.setDestinationEntity(91U);
    msg.mcount = 5U;
    msg.mnames.assign("SLMMZFOQQYCCJSGPGFKZUAUPDWRXZLOSANQSCRUFBIRHRZOKEEECGYBIFNZMYDEACNDGKXSPILYYBPJCEHWRFKJJRWOBDIHFBQRCKQZDXNEDWWUZJMKHAINHBEJCALIBXDKASXLYTGTCVNLZHGKBMBHZHTHLWNFIGHSMTOYJVNMEETWGSFIAMVIPXAOVBVKMOUVSWIDFPOQNXDDRRTOSJXUYJQ");
    msg.ecount = 45U;
    msg.enames.assign("IBTNUIXWFTKVDIJTIPEVWENOCQLKSMTCCAIYJDPWZDGGVNMHJDYAPAFMCGKKYJPLBJJTWRJSIEBHRTEFRIBSWKFTQHQKDBUERRLQLRZQCKZZSMERNSVDSFLFINDXZOYNAQHWHESWQMXYXFZPIGGGPT");
    msg.ccount = 82U;
    msg.cnames.assign("LPVIURUXEVMFRDNLTXTNHJEZYOHEKCYFWMJQBFILRDPWJISZBEJOIMNSGMYOJZAOYCTULNPNFRXRIQTSXSAHQDMEPEYENLFUQRPBIUKUGDLAQXJVSEXMKWKDTNRGSOKVEZVUTFIGCVTFFPTFMYBIMWAUCRHBTNAXZAQSBPEJJSHKKCDHYODVGZVIPBWRFWGAXLLDTLZQXQOZDSONBCUYKB");
    msg.last_error.assign("RNSLJSQSDBWUVVTUEEDUETQTHGVGFMRKMECLOAKIWHYDUXRIWLJYISPZTPWXLRGSYKMNJHXXQUCMABNWPFFVIJFWBFNYKRLZIKDOEVWAUDCHRPFISOZDIYTTCIOQFOINCJSKLVFSDWGGJRVBJGOMKOPWPMOULZXCBXIYNWBEPVQETPRZCLSDXOSUJTHCENLCMRQQXMZAYLTFXKVNUHKVCJOMGZDABPP");
    msg.last_error_time = 0.592563002992;

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
    msg.setTimeStamp(0.196929977505);
    msg.setSource(3635U);
    msg.setSourceEntity(183U);
    msg.setDestination(29573U);
    msg.setDestinationEntity(252U);
    msg.mcount = 9U;
    msg.mnames.assign("DZTTQIRWYBZNIXTJWLNUODYAMMVKBWZHSOPCUUQIKVEMRRQJXXDVTGQYGSGDYNJKLUNAIWABWZPFHFHCRDZAHJHFWGGULIOKHMMMJDQHTVYCZIPFIOHBHLTPPJGBQBWPUPHUCSZCSFATB");
    msg.ecount = 45U;
    msg.enames.assign("VMSJGFEPVGBZDZDDBNRCPYUCNDEAKHJQAUXCUNVFKXUBJWPTBAJLVSBTNQTOUZZYPXYGAKKJQYYSWKFFHEGEIDLHMKNQREMOQOTVDNCSLHJEZILNMVLXMCPQJNXANBOSMDSRFOGGHZALIOWMWYUXCERSATLYSPHQYYACIDXIQMDBGVAXOBGTLRQPZIRAMEWQOFUHPBIJKRFNZRIUVXRCVDVWTKZI");
    msg.ccount = 107U;
    msg.cnames.assign("TISXXXUWCYLDTRPRHXQRLIJVM");
    msg.last_error.assign("TCAZHEMCHNPAWIDKXMEQLCRGIHDYUKHVYLKSIFSBWDWBUBMIRICQSFVEXKFAALROUMYQPWPORVZUJFGTUXMKHNIJRDJUDSEBXARLRAWRGDHTOQWBKVXYNCULTPGGDJVZADTRJYEBWZQEPXSEIQVBGQHTGYNJKEJYZWMKPNSGMJOSNWXQJYXWFMFVCNANYHFZTABZBAUVVHJDSZZEFMIXUEPUDKSCZ");
    msg.last_error_time = 0.396279625034;

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
    msg.setTimeStamp(0.165485169387);
    msg.setSource(12259U);
    msg.setSourceEntity(162U);
    msg.setDestination(16463U);
    msg.setDestinationEntity(122U);
    msg.mask = 50U;
    msg.max_depth = 0.0770467444411;
    msg.min_altitude = 0.793703193006;
    msg.max_altitude = 0.131066872742;
    msg.min_speed = 0.179216391037;
    msg.max_speed = 0.92427079251;
    msg.max_vrate = 0.701833187534;
    msg.lat = 0.589507679262;
    msg.lon = 0.302193248887;
    msg.orientation = 0.582783405103;
    msg.width = 0.696954731196;
    msg.length = 0.861786762975;

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
    msg.setTimeStamp(0.809009576125);
    msg.setSource(1126U);
    msg.setSourceEntity(61U);
    msg.setDestination(50425U);
    msg.setDestinationEntity(243U);
    msg.mask = 168U;
    msg.max_depth = 0.531190915903;
    msg.min_altitude = 0.314864196179;
    msg.max_altitude = 0.196423416725;
    msg.min_speed = 0.951974909884;
    msg.max_speed = 0.0859466776684;
    msg.max_vrate = 0.696144640764;
    msg.lat = 0.121129336456;
    msg.lon = 0.256027709844;
    msg.orientation = 0.752254945326;
    msg.width = 0.771393766083;
    msg.length = 0.657826238247;

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
    msg.setTimeStamp(0.513022416267);
    msg.setSource(19172U);
    msg.setSourceEntity(41U);
    msg.setDestination(42267U);
    msg.setDestinationEntity(107U);
    msg.mask = 15U;
    msg.max_depth = 0.510506439784;
    msg.min_altitude = 0.918845886891;
    msg.max_altitude = 0.934559462966;
    msg.min_speed = 0.0901561960709;
    msg.max_speed = 0.229290710842;
    msg.max_vrate = 0.963757594076;
    msg.lat = 0.4387120607;
    msg.lon = 0.875617457703;
    msg.orientation = 0.778568669957;
    msg.width = 0.317176627465;
    msg.length = 0.437468125155;

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
    msg.setTimeStamp(0.14653859621);
    msg.setSource(2U);
    msg.setSourceEntity(95U);
    msg.setDestination(2000U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.279409768841);
    msg.setSource(37846U);
    msg.setSourceEntity(188U);
    msg.setDestination(2202U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.905331727595);
    msg.setSource(51564U);
    msg.setSourceEntity(119U);
    msg.setDestination(10249U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.94654031983);
    msg.setSource(43509U);
    msg.setSourceEntity(249U);
    msg.setDestination(7414U);
    msg.setDestinationEntity(8U);
    msg.duration = 35096U;

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
    msg.setTimeStamp(0.236875326004);
    msg.setSource(49455U);
    msg.setSourceEntity(228U);
    msg.setDestination(50009U);
    msg.setDestinationEntity(247U);
    msg.duration = 34174U;

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
    msg.setTimeStamp(0.517122590321);
    msg.setSource(46327U);
    msg.setSourceEntity(214U);
    msg.setDestination(20464U);
    msg.setDestinationEntity(104U);
    msg.duration = 8847U;

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
    msg.setTimeStamp(0.747488592594);
    msg.setSource(21192U);
    msg.setSourceEntity(163U);
    msg.setDestination(8177U);
    msg.setDestinationEntity(90U);
    msg.enable = 238U;
    msg.mask = 530353721U;
    msg.scope_ref = 576378267U;

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
    msg.setTimeStamp(0.162509312282);
    msg.setSource(64615U);
    msg.setSourceEntity(190U);
    msg.setDestination(21115U);
    msg.setDestinationEntity(141U);
    msg.enable = 208U;
    msg.mask = 3766893523U;
    msg.scope_ref = 1799026462U;

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
    msg.setTimeStamp(0.461924540115);
    msg.setSource(14553U);
    msg.setSourceEntity(194U);
    msg.setDestination(54047U);
    msg.setDestinationEntity(173U);
    msg.enable = 140U;
    msg.mask = 2766200132U;
    msg.scope_ref = 519259492U;

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
    msg.setTimeStamp(0.558907259832);
    msg.setSource(38858U);
    msg.setSourceEntity(152U);
    msg.setDestination(57837U);
    msg.setDestinationEntity(44U);
    msg.medium = 156U;

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
    msg.setTimeStamp(0.873184241097);
    msg.setSource(19428U);
    msg.setSourceEntity(93U);
    msg.setDestination(26135U);
    msg.setDestinationEntity(113U);
    msg.medium = 41U;

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
    msg.setTimeStamp(0.312150748207);
    msg.setSource(19652U);
    msg.setSourceEntity(172U);
    msg.setDestination(42147U);
    msg.setDestinationEntity(16U);
    msg.medium = 176U;

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
    msg.setTimeStamp(0.0408778797513);
    msg.setSource(33093U);
    msg.setSourceEntity(8U);
    msg.setDestination(21776U);
    msg.setDestinationEntity(24U);
    msg.value = 0.826657848179;
    msg.type = 197U;

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
    msg.setTimeStamp(0.530231867342);
    msg.setSource(21402U);
    msg.setSourceEntity(98U);
    msg.setDestination(21588U);
    msg.setDestinationEntity(58U);
    msg.value = 0.348811290735;
    msg.type = 33U;

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
    msg.setTimeStamp(0.82690533028);
    msg.setSource(58971U);
    msg.setSourceEntity(177U);
    msg.setDestination(13776U);
    msg.setDestinationEntity(200U);
    msg.value = 0.299797941664;
    msg.type = 15U;

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
    msg.setTimeStamp(0.916007473761);
    msg.setSource(11575U);
    msg.setSourceEntity(249U);
    msg.setDestination(48533U);
    msg.setDestinationEntity(93U);
    msg.possimerr = 0.76549696039;
    msg.converg = 0.149576221154;
    msg.turbulence = 0.335141982894;
    msg.possimmon = 61U;
    msg.commmon = 230U;
    msg.convergmon = 182U;

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
    msg.setTimeStamp(0.314418624605);
    msg.setSource(19736U);
    msg.setSourceEntity(40U);
    msg.setDestination(660U);
    msg.setDestinationEntity(197U);
    msg.possimerr = 0.846574265802;
    msg.converg = 0.913236942461;
    msg.turbulence = 0.231896380989;
    msg.possimmon = 102U;
    msg.commmon = 72U;
    msg.convergmon = 241U;

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
    msg.setTimeStamp(0.18616761977);
    msg.setSource(60974U);
    msg.setSourceEntity(78U);
    msg.setDestination(55096U);
    msg.setDestinationEntity(241U);
    msg.possimerr = 0.437060473587;
    msg.converg = 0.979882454356;
    msg.turbulence = 0.35423617975;
    msg.possimmon = 2U;
    msg.commmon = 160U;
    msg.convergmon = 109U;

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
    msg.setTimeStamp(0.690547475452);
    msg.setSource(34856U);
    msg.setSourceEntity(31U);
    msg.setDestination(27928U);
    msg.setDestinationEntity(245U);
    msg.autonomy = 122U;
    msg.mode.assign("MMGUUBYFMSNJKOHEMZUCIKIKBBWFWRPUZFBDCPEBQLCIYQSAVSCSBHALVRLKZHLYJEQTWYSXJGIFAEV");

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
    msg.setTimeStamp(0.75335173932);
    msg.setSource(32685U);
    msg.setSourceEntity(96U);
    msg.setDestination(47554U);
    msg.setDestinationEntity(32U);
    msg.autonomy = 128U;
    msg.mode.assign("INOZQNQWEEGLYSQAONNAFEOYDKXQKJLONRIWAGXADLZDBTKXPSGPRFJHMCWNPXSLTSUGMMEBVTZMIZJEPNIFKYQFTXGGHAWOYBRHSEHGNKMVYHVLCUTPDMAYQOUVXBFUTUDAFYZJNRIQCTJPKIXMKFPRCUNASVOWYLDPFRLOHBCPKZWVHJRFUBEDMBZUJTZITYKGQMKGZRDSVP");

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
    msg.setTimeStamp(0.550984007729);
    msg.setSource(7354U);
    msg.setSourceEntity(226U);
    msg.setDestination(20935U);
    msg.setDestinationEntity(171U);
    msg.autonomy = 106U;
    msg.mode.assign("KDOMZWYSHIEOYZZYDMJJOFGDUAPXKRYIZQACFOBICIQWRWNWZETOTNJVFQBCEQVBCEUO");

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
    msg.setTimeStamp(0.568079355151);
    msg.setSource(41518U);
    msg.setSourceEntity(128U);
    msg.setDestination(25839U);
    msg.setDestinationEntity(21U);
    msg.type = 210U;
    msg.op = 131U;
    msg.possimerr = 0.712931215181;
    msg.converg = 0.334762972654;
    msg.turbulence = 0.674566430711;
    msg.possimmon = 103U;
    msg.commmon = 109U;
    msg.convergmon = 139U;

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
    msg.setTimeStamp(0.190237718558);
    msg.setSource(63558U);
    msg.setSourceEntity(193U);
    msg.setDestination(61957U);
    msg.setDestinationEntity(49U);
    msg.type = 50U;
    msg.op = 188U;
    msg.possimerr = 0.189461629513;
    msg.converg = 0.948625325901;
    msg.turbulence = 0.531128969249;
    msg.possimmon = 109U;
    msg.commmon = 238U;
    msg.convergmon = 109U;

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
    msg.setTimeStamp(0.338988580016);
    msg.setSource(9383U);
    msg.setSourceEntity(191U);
    msg.setDestination(46046U);
    msg.setDestinationEntity(93U);
    msg.type = 194U;
    msg.op = 82U;
    msg.possimerr = 0.230784116601;
    msg.converg = 0.0430526031141;
    msg.turbulence = 0.19584949841;
    msg.possimmon = 43U;
    msg.commmon = 220U;
    msg.convergmon = 103U;

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
    msg.setTimeStamp(0.332985124333);
    msg.setSource(45160U);
    msg.setSourceEntity(106U);
    msg.setDestination(53606U);
    msg.setDestinationEntity(106U);
    msg.op = 231U;
    msg.comm_interface = 87U;
    msg.period = 45348U;
    msg.sys_dst.assign("PQKDKNKIWLKSMAPLZVTCNFOF");

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
    msg.setTimeStamp(0.806457477979);
    msg.setSource(32057U);
    msg.setSourceEntity(38U);
    msg.setDestination(331U);
    msg.setDestinationEntity(185U);
    msg.op = 140U;
    msg.comm_interface = 232U;
    msg.period = 3631U;
    msg.sys_dst.assign("KAWARZRLSGZMRNOQVSNVTKLEVPWGGGGSHFSJTXDVNENBIBJAFQKRMORYJNMODSWNPIJBAZPNWIECHUJJZZNXXJDABHEIYGHUUCVVTIKYIQLTPBOTPUPOQXHXPFDMBXCSYJQMMDBDQGAYLZOWCEAXRIOOKTGYAZBXUJVXFWETEOKMPDQRXUCVSUFDTQRCHKWLEDTOVQRCJHFCLPDUMTKUUIWE");

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
    msg.setTimeStamp(0.981863811175);
    msg.setSource(8922U);
    msg.setSourceEntity(136U);
    msg.setDestination(21456U);
    msg.setDestinationEntity(112U);
    msg.op = 192U;
    msg.comm_interface = 13U;
    msg.period = 29664U;
    msg.sys_dst.assign("QHXFZXDEACXFOLDYCJBUJHVDXAPDONJUCKWFFYZSIWMWPDNZPILDOQEPKNYLJTFEUVTIJJBOYGKTCGDMRRTUHVZIEUXNECZDAHMCGHZUXRAMIKLTGNVBSAAUYEKHCYBKQPRCGIRWHMPQQMWMYQZONGXSEJUITOPDBFGSLXW");

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
    msg.setTimeStamp(0.516630972803);
    msg.setSource(23048U);
    msg.setSourceEntity(142U);
    msg.setDestination(59553U);
    msg.setDestinationEntity(224U);
    msg.stime = 3985076925U;
    msg.latitude = 0.746749710253;
    msg.longitude = 0.855161172155;
    msg.altitude = 3322U;
    msg.depth = 21361U;
    msg.heading = 859U;
    msg.speed = -20522;
    msg.fuel = -25;
    msg.exec_state = -96;
    msg.plan_checksum = 12096U;

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
    msg.setTimeStamp(0.995553438947);
    msg.setSource(42056U);
    msg.setSourceEntity(217U);
    msg.setDestination(38214U);
    msg.setDestinationEntity(188U);
    msg.stime = 1467353615U;
    msg.latitude = 0.800857604697;
    msg.longitude = 0.967676792523;
    msg.altitude = 8854U;
    msg.depth = 19454U;
    msg.heading = 33522U;
    msg.speed = 12982;
    msg.fuel = -97;
    msg.exec_state = -12;
    msg.plan_checksum = 12988U;

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
    msg.setTimeStamp(0.681017539322);
    msg.setSource(15565U);
    msg.setSourceEntity(9U);
    msg.setDestination(49291U);
    msg.setDestinationEntity(254U);
    msg.stime = 2823585216U;
    msg.latitude = 0.182527701826;
    msg.longitude = 0.875505167858;
    msg.altitude = 17381U;
    msg.depth = 12546U;
    msg.heading = 57196U;
    msg.speed = -1115;
    msg.fuel = -117;
    msg.exec_state = 26;
    msg.plan_checksum = 12125U;

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
    msg.setTimeStamp(0.289117767293);
    msg.setSource(38660U);
    msg.setSourceEntity(9U);
    msg.setDestination(9638U);
    msg.setDestinationEntity(92U);
    msg.req_id = 10122U;
    msg.comm_mean = 19U;
    msg.destination.assign("XUVLPLZRSZRQJDCWMTYQABFZTMGFPDKHWASIOKXMYFIIDHVAGILSEHOAEREXGSFNZGISYDMVZRAOMYNAJHDFEKWMBELZTMNCOFGAVJRZWEJWBNWCXPKPADUBWCEKBXQVGYELLISXSEXGUPPIHAXDBOOVPGXTBYJCRDMRISQXJZMRLYNHGCDFBUHCLVFDKJSFWSUYOLBKHCCNPKYHRTGUTWVNTMLNQWFKBNIZQAVTJQUVQPORZOJIYKNPUOEC");
    msg.deadline = 0.409063818667;
    msg.range = 0.906510260349;
    msg.data_mode = 143U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 51524U;
    tmp_msg_0.lat = 0.474840118595;
    tmp_msg_0.lon = 0.0371866519729;
    tmp_msg_0.z = 0.0561698505966;
    tmp_msg_0.z_units = 32U;
    tmp_msg_0.speed = 0.520896878354;
    tmp_msg_0.speed_units = 140U;
    tmp_msg_0.custom.assign("ZLOPWSYQURVMMYZFUIUWGBJBAXTBQBIBPMJGXFVJFYXHOWYJUAEEARJGCZOBESFEYHKQZSPDILRGDGSGHNUCKK");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("HINEACSNLUCDCRBTNPKELRKJFXLSDTVOLRICVPKPLYWOYWPSQAOFZSBLTRNZNQIFQJFGXXOTLOIIJELQPZXZZVWVWGBOEBHHSTGTFKRQYBEAIYMANKKVAVOUWMRDZJTISYRPRGWWQZDYWEGQNMRBJHAMIBIROKGJXEEGVUFEDPHUAIDCFJUCYOGMDGLNHXMYSAUZKMFDBTVKAVSYBHTQF");
    const char tmp_msg_1[] = {41, 34, 37, -91, 124, 96, 59, -123, -111, 78, 109, -72, -97, -33, -41, 106, -40, -102, 59, 109, 20, -125, 50, 19, -69, -85, -82, -128, 104, -94, 45, -8, 17, 59, -123, -126, 97, 45, 73, -15, 77, -96, 118, -94, 107, -30, -122, -100, 94, -66, 124, -20, 97, -30, -10, 86, -45, -39, 97, -89, -88, -100, 58, -43, 12, -36, -52, -51, -34, -45, -126, -7, 48, -63, 53, 13, -119, 88, -18, 50, 10, 83, -99, -46, -47, -18, 27, 33, -95, 116, 101, 68, 41, -62, -104, -104, -104, 22, 37, 42, -46, 30, -68, -36, -32, 69, -7, -105, -120, -90, -5, -124, -34, 69, -22, -29, -28, -76, -98, 83, -78, 95, 64, 21, 88, -102, 81, 109, 115, 91, -63, -49, 73, -28, 93, -113, 24, 109, -123, 86, -12, 84, 121, -88, -50, 60, 112, -15, 84, -56, -78, -33, -68, 72, 71, -24, -67, -77, -23, -124, 20, 64, -42, 84, 33, 13, -77, 53, -83, 63, -41, -78, 107, -80, 86};
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
    msg.setTimeStamp(0.644191006189);
    msg.setSource(39871U);
    msg.setSourceEntity(123U);
    msg.setDestination(37162U);
    msg.setDestinationEntity(75U);
    msg.req_id = 36938U;
    msg.comm_mean = 254U;
    msg.destination.assign("ZECDPKEWONZIUIDSFTPMTINZPCE");
    msg.deadline = 0.033378157643;
    msg.range = 0.623081718258;
    msg.data_mode = 71U;
    IMC::ArmingState tmp_msg_0;
    tmp_msg_0.state = 112U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("YIPUGFZMKXHNHUEOVPEVLUNBUMNBGSLUSSMTSJLDPVDMGWFCJCTRNSOPROKHF");
    const char tmp_msg_1[] = {-119, 102, -107, 48, 5, 76, 48, 19, -48, -24, 75, 17, -121, 109, -64, -109, -28, 85, -47, -66, -102, -56, 48, 82, -52, 70, -110, 0, -46, 28, -32, 114, -91, -116, 33, 91, 0, -1, 102, 49, 96, 120, 84, -117, 9, 122, 19, -52, -77, 101, -11, -64, 67, -81, 122, 46, -96, 75, 35, 72, -18, 92, -116, 48, 81, -110, -18, -99};
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
    msg.setTimeStamp(0.404546229219);
    msg.setSource(39843U);
    msg.setSourceEntity(227U);
    msg.setDestination(61597U);
    msg.setDestinationEntity(58U);
    msg.req_id = 15532U;
    msg.comm_mean = 57U;
    msg.destination.assign("PVCGXCQMHZAPYZVHSZWHQZLBVSKOWFGADUOBHMOLWRCWVAQTLHIRZSUXACFWJQBZFKTCOPMEPRIBPXMFFJFSQHVJPESQTSCWJTTRPCRWKXSCUEPSGQBSVGOJHGTDCTNQMINIKYQHXDUEIZHNKACDTWXAHMGNNADKODYJNIEJULMAUEXXDKFBYYIRYGNAJRNYLRXGEOJSUGTIFDJZARPV");
    msg.deadline = 0.0459590632314;
    msg.range = 0.107921612846;
    msg.data_mode = 95U;
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 64118U;
    tmp_msg_0.value = 179U;
    tmp_msg_0.error.assign("CDLPKOPILONRRHGPMTGTHEUVKHIKIUBYEFJPSJBW");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("KUCMIODPQBEJQJCJMFWRYNVYPQCGNBOJXFHNTABIERXTYVQJQBGSXDHYMAOHZULVQ");
    const char tmp_msg_1[] = {-65, -15, -41, -43, -67, 68, -8, -46, 122, 14, -122, -37, 46, 118, 107, -95, -72, 102, 115, 75, 11, -88, -30, 14, 21, 61, 100, -125, -63, 81, -86, -37, -30, 37, -111, 91, 93, 69, 50, -73, 64, 95, -101, -44, 124, -79, 46, 75, 40, 100, 51, -108, -19, 92, -5, -104, -97};
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
    msg.setTimeStamp(0.729751239662);
    msg.setSource(52830U);
    msg.setSourceEntity(102U);
    msg.setDestination(33227U);
    msg.setDestinationEntity(14U);
    msg.req_id = 8675U;
    msg.status = 38U;
    msg.range = 0.465894212965;
    msg.info.assign("RYBVLNECSDALGYGPSMSWTALFEPVCHFYZBDTXHOWXDJHIIPOMDYICFMUOJRWYGUSPUHQCKATJFGRGVHRVILADVJTOWCNGXRPCALSHLEPKXLSEMTHWVQRVBMTEWTRMGIZXMIWZEEYCJYFNUZCFOOXUGBZBSPFDEEOMZDFSZXBZUJTQNTNRAQXIVKBKHPAWOBNJGQIPDZHDBALXOUNKKQKYMPKOLLKQWIJSWV");

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
    msg.setTimeStamp(0.353573777389);
    msg.setSource(20003U);
    msg.setSourceEntity(83U);
    msg.setDestination(63000U);
    msg.setDestinationEntity(107U);
    msg.req_id = 883U;
    msg.status = 125U;
    msg.range = 0.720729796747;
    msg.info.assign("HLRVINPFSKCUMIJGAQXVLBPCAZYMKGQDJQN");

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
    msg.setTimeStamp(0.957710799512);
    msg.setSource(31417U);
    msg.setSourceEntity(77U);
    msg.setDestination(26545U);
    msg.setDestinationEntity(249U);
    msg.req_id = 17366U;
    msg.status = 80U;
    msg.range = 0.799637740791;
    msg.info.assign("AHNLQBNSGOMGQVSVRYHLGBGFXFNMJTDICTOHFSHCQBXFBUNJJMSWUDJAXSMRUTWPKPBLVBFBUWHLUFEAFFENPNFACMEBKDGTVOCJRXOFYOEIIIUGLUNHZKDTYLCKZEQPHZIPCUSCZOTSDAWPYPZQDTQNLWDSIPREVVEAZKUDYIKYOCKBXIZVVMZWRMSHLXPYHBKRQTAXEWMOCXALRGSQTMEKRKGIGWHCOJ");

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
    msg.setTimeStamp(0.345400578463);
    msg.setSource(4085U);
    msg.setSourceEntity(23U);
    msg.setDestination(13015U);
    msg.setDestinationEntity(16U);
    msg.req_id = 44659U;
    msg.destination.assign("ARCMZELATCENTZRSSASXDIBLNYHWCI");
    msg.timeout = 0.574119680458;
    msg.sms_text.assign("BDAWJISBABRKDSLDPYVEMWUQPMPAPJJIKZEWIYFKWKOEEHZDOARORLSTMVOEZLXVWRNRZQZOYEQTLQIRWUNMJWYUMAWVIBOYDVIHOUHGYPHZHVGQCUUHGBUPHNPXKABJFSTYTFDCJGBMTKSQDAVCGIKAXGTWNCERNXDRXNCBGCCFQKVJXITBVFUJMMPXLLHFGSSFESTPOVUNQMCZNTILXOYNN");

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
    msg.setTimeStamp(0.805120776287);
    msg.setSource(64006U);
    msg.setSourceEntity(126U);
    msg.setDestination(34031U);
    msg.setDestinationEntity(169U);
    msg.req_id = 32209U;
    msg.destination.assign("FYBUJDRYVMZFLRWVGSXZDYEFEFVLXADKIXNKSAGIEZJKNBSKVRJGLBDSPMUDSLLNTUCJBKGQVQYCKXXCZCIWOJVDUBPVSMQBEREPRYGTEBTFITKXRTDUOZNBHLKNQYNPRNMGIBISUQWHPFOJZWTWYHGJNAYVISTYPZCFHOKZAMVLRNULRWAXUPSQGGADOMTZCAHJPXUIAHOWDPFCIOMZCTGDQTWQJWOCERIEALHKPBQOHEMNUQFLYMVSHWXXH");
    msg.timeout = 0.587279722083;
    msg.sms_text.assign("NZSULOFCXFNCAKCLRFXMRAOUNDHINOHYGTAGHPBGJUILEJSCMRQHHVPVWGGJQIZYNBKLRSGZXIVRZOTMBDPVXDKALRWDTQOVZXFSKPLIJWQYEVBNLRJFHOEIJSYGMFHTZMSNTMTUKV");

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
    msg.setTimeStamp(0.208703217612);
    msg.setSource(37950U);
    msg.setSourceEntity(223U);
    msg.setDestination(23984U);
    msg.setDestinationEntity(91U);
    msg.req_id = 17457U;
    msg.destination.assign("ZGHBURVBBORCJSCRKRMLMWEOBQVGKTIZFQSSIQCGLCAZHIBLIICRNJGXNUYFNXTYWQVYSOTECKJNCYDGLMQJSEKTENIKDLEMTSPRMICOOFDIUQNNBMXDWAZAGZUXWNSRPWHDXFVDAGPEHCMQGLHNSVFIUKKPTYFYBRZCYQUOAEOEPWZAWXVWFMYJPOGVYQDVDHVLFGAHJHBVTXKXAFNPEPEOQTYPAPJKLTUMJUXZJTUMFWWZSHDHS");
    msg.timeout = 0.783065755082;
    msg.sms_text.assign("AHMDCDUSPARRNMGPGBDPEKGNVWILTABHBZSJPZVPEUZSWWJMMLNJFCISYSIBWAULITYBAAKBFWXUURBSWUZYJGQCZYTFCMVYVLLZAKKXELQVPHUSMCDIQKONXSQWOMVYRNUODWGJAEDLRTDQCEVTEHZVSKKOOZTOJGPDEPHYXQPTQXTRBWWTGCXMYFIGSOYZNIFJGXTFKAQHOMFPEYGHRQENEOINHFJFVLXMXCBCOZFJVKRUKCX");

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
    msg.setTimeStamp(0.794947170424);
    msg.setSource(59472U);
    msg.setSourceEntity(103U);
    msg.setDestination(1908U);
    msg.setDestinationEntity(221U);
    msg.req_id = 40379U;
    msg.status = 181U;
    msg.info.assign("IVZXOXGHMSMHTEJTTLUEAJKTLILNZRUNGCXQRDUVMTGUCGSIOYSYKYONNEYJPQAWEAIXLS");

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
    msg.setTimeStamp(0.173189431309);
    msg.setSource(28640U);
    msg.setSourceEntity(149U);
    msg.setDestination(62902U);
    msg.setDestinationEntity(171U);
    msg.req_id = 7681U;
    msg.status = 58U;
    msg.info.assign("USPHIEXHUIXBXNFKCRPNRXMYDESWGNOIREVXAUJNDACNEZDLIYXMLTYQFDTFPCTVNM");

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
    msg.setTimeStamp(0.411297823332);
    msg.setSource(1210U);
    msg.setSourceEntity(101U);
    msg.setDestination(20144U);
    msg.setDestinationEntity(89U);
    msg.req_id = 53394U;
    msg.status = 113U;
    msg.info.assign("KXOFCXWDRUUROERQIDUMFSALBOSJJDQHCHYMWPRINKFEQMBGVGOUSYDFRKAHRCKPXMVCDHUJWVRPNNCNVPETDBJNDSJUGCTYJONNBWEVQMYIELGSPBQPVJIFBWPBAOXLWEPLWZHIZTBIUTOKAALHNSHVIDRDZPMYCPSFKOXZZQCIFKYJOIAEFBMLTZHAQOTQZDMGIKETTYQQTJMNUEFH");

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
    msg.setTimeStamp(0.151342197483);
    msg.setSource(31723U);
    msg.setSourceEntity(225U);
    msg.setDestination(21118U);
    msg.setDestinationEntity(226U);
    msg.state = 105U;

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
    msg.setTimeStamp(0.387847038232);
    msg.setSource(46564U);
    msg.setSourceEntity(131U);
    msg.setDestination(59025U);
    msg.setDestinationEntity(82U);
    msg.state = 107U;

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
    msg.setTimeStamp(0.649712007239);
    msg.setSource(50791U);
    msg.setSourceEntity(82U);
    msg.setDestination(29739U);
    msg.setDestinationEntity(197U);
    msg.state = 110U;

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
    msg.setTimeStamp(0.924902164559);
    msg.setSource(3567U);
    msg.setSourceEntity(53U);
    msg.setDestination(9597U);
    msg.setDestinationEntity(72U);
    msg.state = 11U;

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
    msg.setTimeStamp(0.6123119202);
    msg.setSource(4690U);
    msg.setSourceEntity(251U);
    msg.setDestination(28438U);
    msg.setDestinationEntity(212U);
    msg.state = 145U;

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
    msg.setTimeStamp(0.0591868451972);
    msg.setSource(31201U);
    msg.setSourceEntity(175U);
    msg.setDestination(35803U);
    msg.setDestinationEntity(251U);
    msg.state = 106U;

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
    msg.setTimeStamp(0.73772675592);
    msg.setSource(7003U);
    msg.setSourceEntity(100U);
    msg.setDestination(43412U);
    msg.setDestinationEntity(30U);
    msg.req_id = 49593U;
    msg.destination.assign("HIINPFNNPUFNPUKBBYCJNDY");
    msg.timeout = 0.280154596972;
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 199U;
    tmp_msg_0.value = 0.396161565878;
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
    msg.setTimeStamp(0.488647290702);
    msg.setSource(4521U);
    msg.setSourceEntity(96U);
    msg.setDestination(10704U);
    msg.setDestinationEntity(28U);
    msg.req_id = 26760U;
    msg.destination.assign("TJVORXIUFMSRHYSTMKQJLBFKISURHVOOZPGXBSZSQRYDVUI");
    msg.timeout = 0.991365767266;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.358367735752;
    tmp_tmp_msg_0_0.lon = 0.0615220919209;
    tmp_tmp_msg_0_0.height = 0.11808605936;
    tmp_tmp_msg_0_0.x = 0.938550357899;
    tmp_tmp_msg_0_0.y = 0.229281182892;
    tmp_tmp_msg_0_0.z = 0.18746913194;
    tmp_tmp_msg_0_0.phi = 0.526355926667;
    tmp_tmp_msg_0_0.theta = 0.0845163141557;
    tmp_tmp_msg_0_0.psi = 0.425157294114;
    tmp_tmp_msg_0_0.u = 0.200362356652;
    tmp_tmp_msg_0_0.v = 0.965799246329;
    tmp_tmp_msg_0_0.w = 0.410057618877;
    tmp_tmp_msg_0_0.vx = 0.887490384284;
    tmp_tmp_msg_0_0.vy = 0.123477197955;
    tmp_tmp_msg_0_0.vz = 0.292119719144;
    tmp_tmp_msg_0_0.p = 0.876897169357;
    tmp_tmp_msg_0_0.q = 0.637896590611;
    tmp_tmp_msg_0_0.r = 0.570072323004;
    tmp_tmp_msg_0_0.depth = 0.22076184699;
    tmp_tmp_msg_0_0.alt = 0.872244137623;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 47U;
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
    msg.setTimeStamp(0.242016602428);
    msg.setSource(28129U);
    msg.setSourceEntity(63U);
    msg.setDestination(20275U);
    msg.setDestinationEntity(134U);
    msg.req_id = 33146U;
    msg.destination.assign("XFVKIPRCNVHLECTORDFTBWDIDNIFYCQGEEUNROMAHHHMABQXVPELHOFCLHPBJERFAOOMUYJWQMVJSAVRDIARQMYOODRKRTKZSEZZISYWULNIGSITXPGUFAXQSFSLPRCQQUKXAREDJOWPTYYXZWOQXBKXDSXYMHGNVBWIMJQVMFLYKJTAJPPUBIMNPXTVSZWQDNHZGVDZWLTMKCKIP");
    msg.timeout = 0.114932584924;
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("YOWRBUKAESFWEILLTYCKNZXMHJQVJFQVOPIWVAPPPXBGK");
    tmp_msg_0.links = 501125680U;
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
    msg.setTimeStamp(0.420394321425);
    msg.setSource(43794U);
    msg.setSourceEntity(120U);
    msg.setDestination(4654U);
    msg.setDestinationEntity(250U);
    msg.req_id = 55606U;
    msg.status = 139U;
    msg.info.assign("JWLVYCTSACQGNUCGEHTSLOHMGXWYVDMSYKMNIQBPJTYJHSMKUDQURUYBHHTBPSLW");

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
    msg.setTimeStamp(0.530973862049);
    msg.setSource(43532U);
    msg.setSourceEntity(104U);
    msg.setDestination(64459U);
    msg.setDestinationEntity(82U);
    msg.req_id = 32221U;
    msg.status = 151U;
    msg.info.assign("TYPMFFZOBNSZNMTAWVQGXUAJSHLHAKQZOKSVEWGWTDYNKSIYXCRKJXQSGJGIWWJRSVLDCUZMUQIIAMFJAMYTNCZORXCLIOIVPVIPKLKHOYUNMRDDVFLCOTJRXTYAMBEBFZGEJQGPXDWLORAIPLQHJCOERBTGCUHMESYKHUYWPKFLSGZJUZ");

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
    msg.setTimeStamp(0.557948439145);
    msg.setSource(64053U);
    msg.setSourceEntity(64U);
    msg.setDestination(59763U);
    msg.setDestinationEntity(115U);
    msg.req_id = 48367U;
    msg.status = 146U;
    msg.info.assign("BXRHVLLODSUIHYLTXUUUPZNJMTCESZFEIBZWEAZJZIIHRMEXDKOZLT");

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
    msg.setTimeStamp(0.303610734002);
    msg.setSource(50259U);
    msg.setSourceEntity(62U);
    msg.setDestination(4600U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.586507266197);
    msg.setSource(30210U);
    msg.setSourceEntity(197U);
    msg.setDestination(41250U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.760401254342);
    msg.setSource(18512U);
    msg.setSourceEntity(1U);
    msg.setDestination(21086U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.0620102617857);
    msg.setSource(56017U);
    msg.setSourceEntity(18U);
    msg.setDestination(23766U);
    msg.setDestinationEntity(205U);
    msg.plan_id.assign("DVGALPUAHUXCQTJKNPOSSJKTBCHMFIPNYVLEIMRWLZABLPNFUGMZABLSHFWSXDLNKJYIELFIOFGNPQJW");
    msg.description.assign("CYSFALSBNELEQXWJSOWVBPKRIHEZOITCNYVRZODIMHGHNFHXGVFDWQZLKQGSHGNJLPRMQRGRAPWCXJKUBPKFPWQQHKANSGOYRUCFHYFFAJPJDOZNXTIEJKUNMBIDASSTTQLCRQXYIRNTTUZKYEASWHZBHWUTFUKAUMPNXZIAYCODDYICMRJVOQFBDJNTDWGXEXVPUTEVBMK");
    msg.vnamespace.assign("HJJFMTAKZPCVIBTQBRFXJWQRBWQZAMVXNGLBNKUSNLKWSSHHUHSUBYOELDNUEVRKJXXNTSXSFDMDTOBMQYCYIQZYBGGZJZSQOPYTHGTVLFVAPRHFYRUDEFCVCRISGTOM");
    msg.start_man_id.assign("FNZJAQBSVIJOTJVUNYXJVZLCGSMTTFLOYMRCUZTPXRHDYIZLIKA");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.906064739261;
    tmp_msg_0.lon = 0.137759486118;
    tmp_msg_0.z = 0.0612693834644;
    tmp_msg_0.z_units = 154U;
    tmp_msg_0.speed = 0.0015488945802;
    tmp_msg_0.speed_units = 204U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.469503757037;
    tmp_tmp_msg_0_0.y = 0.124544388623;
    tmp_tmp_msg_0_0.z = 0.183537370866;
    tmp_tmp_msg_0_0.t = 0.452774886478;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 19461U;
    tmp_tmp_msg_0_1.off_x = 0.869390006831;
    tmp_tmp_msg_0_1.off_y = 0.568942822979;
    tmp_tmp_msg_0_1.off_z = 0.304895284652;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.00181347635389;
    tmp_msg_0.custom.assign("QVLRNHVMCBPMZBAHURET");
    msg.start_actions.push_back(tmp_msg_0);
    IMC::Magnetometer tmp_msg_1;
    tmp_msg_1.timeout = 38652U;
    tmp_msg_1.lat = 0.0283626531425;
    tmp_msg_1.lon = 0.262388011073;
    tmp_msg_1.z = 0.221015904552;
    tmp_msg_1.z_units = 49U;
    tmp_msg_1.speed = 0.155698985646;
    tmp_msg_1.speed_units = 88U;
    tmp_msg_1.bearing = 0.593574708276;
    tmp_msg_1.width = 0.201789602406;
    tmp_msg_1.direction = 94U;
    tmp_msg_1.custom.assign("YTOLBWBRPKLBPLDXIYITOSDDSIICUHSQJCINRGXQFQVRAELDPRJDWMVAQBMEUNSINCZHUVBXZCFMBBKOEMCMAEUEKXPKNFZCKHFMFHXESAKNDOTIRSWTNTQGMOUGCGZXYWTJDJUWASXKNHYPGDPWHRRTQVY");
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.408456892786);
    msg.setSource(29361U);
    msg.setSourceEntity(172U);
    msg.setDestination(16911U);
    msg.setDestinationEntity(238U);
    msg.plan_id.assign("AGFWWOAXJDPCEWYYURLENXJVBLXAKBVOSBNPERAPEPCANZTMIISUFXETQWHB");
    msg.description.assign("GJCWJLBTMCZOGBAZLATHHZZWPUZKSYFZQURWOTMUCEUJBYIXZXAKTQPKFLBKDKSMGHYPMLEEHMCKEPENKERPWBUHNNJUEBRXKHYCVBZP");
    msg.vnamespace.assign("AFFSDIXBQVZXBQGEFQMTFHUNTUAIPFJHGCRXLLHJHSYWBBVTLELLNNYZMGYI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("URUCYPUZKKAEBPCIDZKCVKDEXTPUTLJZHVHZWU");
    tmp_msg_0.value.assign("RBWSWNEDPLJPTKZFBTQOISTEJCXSCJKGVYOFZDKHKVMUDRRLSBXJVKNZUKOHBNEPQLCGFEIHBWCPPOQGXBPYRUUGTSOMIXSLQINLQJWYRSJWQGFIJRYFBIFCCPCGGQPZSVF");
    tmp_msg_0.type = 4U;
    tmp_msg_0.access = 84U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("XSFGOVMEZFVJZHYASCHXAVCRGVPTGGPVHADVJRWGKCALOXKENIOMUKVDLBKRJGUHLEVEEJHCFNRTQNNGXJTAWSGSUBWORWSOKJJWOYKMIOHTRXMNULUQQVWZECIHIYQDEJPYYTSBTTQPWMXFADLCCACLPROKBOMHBBBCTNIZYESMEQRKPGEHPXSDXPACDBQDTLFIZFXNFDIIZFGQY");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("WCWJTOYQSEEAQZEPISHKASHVURNVQOWNOIO");
    tmp_msg_1.dest_man.assign("CTDJQDBVGGORWFOIGSBNTAWCYPXKLZUZIOWTHDLQUFZSLXDCOXTKOXGCEOIZHEACHRJVSGNCTVUJMMCXFEWEVHWHFNYLHQGARIEAYWKCQKPVKCOTPYAIUFYRSFUFJUTJNNLCMYNEPMZIJADYDRDVPOZWVTQGIKTXHJMRPLUWXSQNEOMZUEWHSUMNSAAS");
    tmp_msg_1.conditions.assign("RTXJYAKFCYBXJSJNAUHCXKDIPUIUJBUYDJWYSUNKVZSARVGYMOEICNUQKFFLSJQOKFHPILTGFWUMSBLPDMVEVZIPLCRURWZCXCTOYELOMGWTZZAFTNMQQMIHSAPTCGRFNULGAGVJTXECLJRHWEFQOAXQUESHVPSRBKZQOHTJKWPKIWATNSNYDGDXZODEFEPGP");
    msg.transitions.push_back(tmp_msg_1);
    IMC::UamRxFrame tmp_msg_2;
    tmp_msg_2.sys_src.assign("OXQPONXQZIQHIUPSDAPQIJBGRAIBLOKJSZVILDTOJWFFERARQMZUJKQVDIHXGACUYLZBHFPBOYKZEXIEENMSACIKURDDCGETHOTNGRUEPCGNHFXHRQTONXUBSRVUYRJNKOMPYKTLUJYLVWECEYJZFVNF");
    tmp_msg_2.sys_dst.assign("BGRGQOXSILAMFPRUYNNGFESIWGTKPRRHYSJMYAODBUIUKHTRXTWIYJKVZNSGAJFEZKPRMSOZQBWMMCNGGDMXGYZGNNLWUZHFRUHZFAJLCDFFPTAPHAABYJCQPPKKLVDZIDJKLITYECSRBAXFCSDYICCVHNQYBEBGLVOQCLXOOSUNBQVDVTZPWEEMDQEBCVIWZMBEYTLZNVAUHLXQHXTNDXTKERSLMXUHWROJ");
    tmp_msg_2.flags = 211U;
    const char tmp_tmp_msg_2_0[] = {40, -9, 60, 5, 96, -71, 85, -32, -53, -59, 17, 36, -116, -101, 96, 2, -10, 98, 28, -72, 26, 111, -32, -114, 81, -70, -22, -108, -99, 74, -65, -83, -13, 123, -39, -77, 57, 36, 5, 12, 32, 112, -11, 118, -96, -101, 109, -14, 61, 44, 107, -103, 13, 99, 23, -20, -90, -73, 73, -109, 80, 46, -45, -87, 45, 113, 71, -56, 84, -14, 17, 58, 44, 83, -80, 99, -117, 49, 83, -104, -104, -126, 125, 48, 30, -68, -77, 31, -120, 4, -7, 99, 106, 33, -79, -121, -73, 116, -32, 67, 109, 35, 30, -34, -10, 120, 99, -24, -93, 52, 39, -126, -114, -128, -58, -105, 39, 98, -67, 85, -54, -73, 104, 78, -32, 121, 64, 16, 7, -107, 8, -94, -95, -65, 21, -63, 75, 22, 28, 90, -13, 39, -57, 18, 58, 27, 109, -100, 126, -35, -117, 92, 20, 82, 64, -127, 105, -26, 68, 60, 95, -54, 75, 108, 37, -86, -42, -121, -106, -37, -92, -110, 21, -89, -83, -100, -30, 46, -107, -81, 39, -82, 41, -35, -6, 87, 114, 12, -33, 68, -71, -46, 64, -119, -35, -71, 92, -109, -92, 112, 18, -50, -67, -72, 91, 1, 52, -92, -53, -24, -88, 93, -104, 124, -6, 33, -82, 74, 62, -69, -85, -30, 21, 86, -90, 78, -26, -112, -51, -50, -88, 36, 71, 87, -87, 84, 97, 77, -92, 20, -15, -99, 93, 45, 5, 64, 76, -112};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
    msg.start_actions.push_back(tmp_msg_2);
    IMC::YoYo tmp_msg_3;
    tmp_msg_3.timeout = 55088U;
    tmp_msg_3.lat = 0.310871511844;
    tmp_msg_3.lon = 0.306143287069;
    tmp_msg_3.z = 0.249720593052;
    tmp_msg_3.z_units = 186U;
    tmp_msg_3.amplitude = 0.577319582429;
    tmp_msg_3.pitch = 0.262083048568;
    tmp_msg_3.speed = 0.919264091099;
    tmp_msg_3.speed_units = 116U;
    tmp_msg_3.custom.assign("MRUJLYUOEVPYSCHTQEPARBJUMIJRWMBBJNSTTTWVOROEAECUKJYESIQNPQUBIPQAJXPCTXBGQDHDWRVBOYTCIFWWSLLDAVSIXINZNDXLMLUTPKCYAUMOUFVSOVIGUFVCKYQSSNJEKEKGFNWHNMKXZMPPZDRGFGKFHFNYDDSMJWQBZRXXCRFCLZVDCLAOYFLZLZKBWP");
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.86595435628);
    msg.setSource(18988U);
    msg.setSourceEntity(117U);
    msg.setDestination(15876U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("MWXKACVXQMAYAGTXPYKOHZBESVPIYAUSMSGVWIJAFOUCTJDYYKMGWTCKOBECUMQLJT");
    msg.description.assign("ZBOMJBVZJTVTXGEVSQCZLBVKRIEJPYIFEEKUJMLLFQFUNYHIBNMHESWXOQDNLCDZORRSHYCTQIQDLYPVYBDNWGPNKYOGJFWMJDHHISZXKFGVWXCVWOTSGQLFZAJ");
    msg.vnamespace.assign("VHIXYKULXHHKLOZSNSNCUVPEGMJBZCJQPFNKIGHTGRDDGDILTCQEOLSQFDEFDYXABFSJVAZJWJARHPY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("UNRDTQEHCEGSUBWUTEFYVLFLRNUCMJKOZASCTWWPDPMVWTICCBOZITKMIQHZMBTOICDSMVZERELDXGWSXEZLFMHHNASBXNBYNNLJAGCJPZYTXFEASWOXXVGQRDRLAEBRYCLPYDDHCITVKNZKNRQARPPPIPFQPBHJXDOHOIAXOQDBVALSGOAUKHMFLHRYMIYYQJUBSJOKKVVDLCWRSJFXGI");
    tmp_msg_0.value.assign("OZPTTKVCPQJKHOLPUYQQCRXNQBDFHDRZRUTJEKUIIWTULZCUAJAFVGZGSVOPVUDBLXGXICMTLFT");
    tmp_msg_0.type = 1U;
    tmp_msg_0.access = 43U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ASVBGUDOVJFWECSJX");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("OFJOLPMZOLVEL");
    IMC::Launch tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 63150U;
    tmp_tmp_msg_1_0.lat = 0.797726303813;
    tmp_tmp_msg_1_0.lon = 0.917373551684;
    tmp_tmp_msg_1_0.z = 0.57976424043;
    tmp_tmp_msg_1_0.z_units = 226U;
    tmp_tmp_msg_1_0.speed = 0.0570385802372;
    tmp_tmp_msg_1_0.speed_units = 52U;
    tmp_tmp_msg_1_0.custom.assign("BEIWZGYVJGPMRJALGKHVOTUCZLCLONQTAQJAWUHUBPBXNFFEYFBUAMLZWJHRMSXGIXSVHDOWIEAXOSYSCSZMCEQRUTVCUQHUEGXPEANQRMYQPATHIYBAVERVWNETOPOTDGJMDCRDOJQKBNJGHWRLKKYVPWPIZIEDZFCFRXHLWTEFNSVOMXZKCCTNYLJFDLYVGSFQJJLKMRYFXHTUKRZGGBNPPSWAXUDIBVTQFMSAICQ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::NeptusBlob tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.content_type.assign("JABNYWDYXPHZIKIUTJUVGKYZCXMKPLGO");
    const char tmp_tmp_tmp_msg_1_1_0[] = {93, -82, 118, 53, 24, -17, 83, 102, -7, -55, 19, 48, -82, -80, 60, -71, -15, 6, 100, 58, 79, -12, 27, 126, -78, -29, -106, -55, 55, -45, 103, 20, 125, 18, 93, 96, -41, -128, -31, 85, -24, 29, -38, 22, -49, -71, -18, -73, -10, 83, -76, -78, 25, 123, 44, -127, -97, -99, 51, 66, 25, -73, -106, 52, 63, 73, -56, -125, -45, -83, 89, -112, 110, 28, 43, 39, 53, 125, -94, -96, 80, 116, 31, 16, 52, 5, 60, -106, 81, 77, 18, 60, 10, 96, -108, 12, 4, -25, 48, 91, -111, 79, 109, 25, -7, 57, 54, -63, -3, -64, -97, -24, -109, 39, -93, 11, -64, 110, -95, -123, 95, -85, -20, -61, -107, -9, 45, 86, 8, 100, -11, -59, -74, 0, 94, 103, -32, -93, 32, 27, -89, -10, -95, 21, 115, -60, -52, -116, -63, -18, -124, 26, -30, 125, 71, 5, -11, -117, -4, -34, -114, 66, 87, -36, 1, -25, 106, -71, -117, -105, 119, -39, 119, 124, 74, 94, -13, -101, 122, -26, 35, -41, 84, 57, 9, 60, -66, 85, 66, -63, 40, 78, 59, 69, -62, -87, -84, -16, 119, 102, 31, -31, 68, -125, -34, 104, 42, -15, -24, 37, -118, 21, -96, -85, -68, 29, -36, -80, -128, 82, 121, 94, 68, -78, -31, 55, 51, 14, -125, 50, -56, -96, 77, -32, 44, 43, -77, -53, 104, 96, 68, 84, -123, -101, -128, -122, 19, -64, 95, -20, 78, -21, 98};
    tmp_tmp_msg_1_1.content.assign(tmp_tmp_tmp_msg_1_1_0, tmp_tmp_tmp_msg_1_1_0 + sizeof(tmp_tmp_tmp_msg_1_1_0));
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("GMXSSBYMJJEIUKZZESSYPLMCWPFV");
    tmp_msg_2.dest_man.assign("RSMDJOAMJKWWZNKNKHOPYXSJHYXOZVYCXQGFKROWKAQEXUBNGGXOCJDAJVMOEWNWHSBGPLWHIAELZTYBCKPVBVBRMYFGQJYWROBMLMUDSGUIFNPNYQALDVPUSPFHTHWTIPPJVABOMWXFISICFIE");
    tmp_msg_2.conditions.assign("NPSNRWWVREYTODJIHL");
    msg.transitions.push_back(tmp_msg_2);
    IMC::Phycocyanin tmp_msg_3;
    tmp_msg_3.value = 0.873432310791;
    msg.start_actions.push_back(tmp_msg_3);
    IMC::VehicleFormation tmp_msg_4;
    tmp_msg_4.lat = 0.836096410385;
    tmp_msg_4.lon = 0.945758902243;
    tmp_msg_4.z = 0.747733661504;
    tmp_msg_4.z_units = 86U;
    tmp_msg_4.speed = 0.139185425587;
    tmp_msg_4.speed_units = 220U;
    tmp_msg_4.start_time = 0.100587214839;
    tmp_msg_4.custom.assign("WUCCCTEZUEEZACTMVAMXRIPKZAONBDRLXIDVFOAMGDWASJQCTHYHPEFQYVFJAJHRXYOHMOUSHAP");
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
    msg.setTimeStamp(0.906749980457);
    msg.setSource(28976U);
    msg.setSourceEntity(114U);
    msg.setDestination(23771U);
    msg.setDestinationEntity(228U);
    msg.maneuver_id.assign("BGKAOWKDIVZZMPLXPZYBESGQYJMMKVNVGUUGHOSV");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.0117937746371;
    tmp_msg_0.lon = 0.70206290366;
    tmp_msg_0.z = 0.870859277513;
    tmp_msg_0.z_units = 105U;
    tmp_msg_0.speed = 0.792722396869;
    tmp_msg_0.speed_units = 222U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.308332019204;
    tmp_tmp_msg_0_0.lon = 0.543797871644;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("NJBMCIUGLKFK");
    msg.data.set(tmp_msg_0);
    IMC::Elevator tmp_msg_1;
    tmp_msg_1.timeout = 62788U;
    tmp_msg_1.flags = 79U;
    tmp_msg_1.lat = 0.405424783407;
    tmp_msg_1.lon = 0.939859116207;
    tmp_msg_1.start_z = 0.96209160571;
    tmp_msg_1.start_z_units = 123U;
    tmp_msg_1.end_z = 0.52776627865;
    tmp_msg_1.end_z_units = 17U;
    tmp_msg_1.radius = 0.0554741237474;
    tmp_msg_1.speed = 0.824504512341;
    tmp_msg_1.speed_units = 231U;
    tmp_msg_1.custom.assign("CSEKUCRYTAOHKIWTINRGSNLMNGFGUUDYVASEERCXQLUBFOFNRLRWXJCATMJFGVUFLAEZAMYKWNWRVLEDTHXVJDYA");
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
    msg.setTimeStamp(0.756456982748);
    msg.setSource(10407U);
    msg.setSourceEntity(46U);
    msg.setDestination(15588U);
    msg.setDestinationEntity(21U);
    msg.maneuver_id.assign("VWUUXABIZUVHCVFDJPJXLYTZ");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 40985U;
    tmp_msg_0.lat = 0.781473456919;
    tmp_msg_0.lon = 0.840152717599;
    tmp_msg_0.z = 0.25868041347;
    tmp_msg_0.z_units = 71U;
    tmp_msg_0.speed = 0.608167546453;
    tmp_msg_0.speed_units = 72U;
    tmp_msg_0.bearing = 0.0499063773795;
    tmp_msg_0.cross_angle = 0.546144808381;
    tmp_msg_0.width = 0.866554405322;
    tmp_msg_0.length = 0.567555832796;
    tmp_msg_0.hstep = 0.0385240663276;
    tmp_msg_0.coff = 108U;
    tmp_msg_0.alternation = 141U;
    tmp_msg_0.flags = 120U;
    tmp_msg_0.custom.assign("HIJOLKJFVPKLUIOJLBKDSSYOSLREQNCOMRKGOZEVQPEUUAYMYFKLLAJABXHPFN");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.706832905302);
    msg.setSource(20263U);
    msg.setSourceEntity(150U);
    msg.setDestination(9356U);
    msg.setDestinationEntity(124U);
    msg.maneuver_id.assign("CETVHTVLHHJDUGIKVEXNMVDCBMBBRAQDJWJDKGHMHGNBENMVWLZQZPRFAYWAUK");
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 40962U;
    tmp_msg_0.lat = 0.880557790156;
    tmp_msg_0.lon = 0.709006198686;
    tmp_msg_0.speed = 0.342197190013;
    tmp_msg_0.speed_units = 82U;
    tmp_msg_0.custom.assign("EYMCVDWBCDAEFMKRGYIOJDVSKZKOQQEMDWKYBKOGTMPGWKFGDUQRUFNXBSFRLHIVLBGJOVAWIRKGYTQEGIIMPHORCXVAXUFCHLNRHBJZPUOZHLQECPNBCQQZTANWWSJALPQINBHMGSXSUITDONXWPLKVMPZFJPRFAVUHRYZDHOLHWFZEYQXH");
    msg.data.set(tmp_msg_0);
    IMC::MessagePart tmp_msg_1;
    tmp_msg_1.uid = 139U;
    tmp_msg_1.frag_number = 190U;
    tmp_msg_1.num_frags = 97U;
    const char tmp_tmp_msg_1_0[] = {122, -126, -101, -55, 9, 126, 69, -14, 123, 61, -6, -61, -10, 28, -58, 0, -4, -92, -107, -89, 105, 101, -112, 105, -71, -88, -10, 32, 90, 11, 7, 92, 88, 16, 119, 83, 94, 89, -19, -66, -42, 40, -18, -74, -37, 126, -54, 35, 58, -104, -26, 125, 3, -97, 28, 20, 66, -85, -28, -104, 48, -83, -114, 52, 36, -51, -122, 34, 58, 86, 101, -122, -32, -102, 11, 61, 118, 35, -101, 12, 40, 90, 7, -80, -74, -3, -120, 58, 110, 33, 107, -94, 58, 68, 28, -4, 53, -84, 60, -48, 65, -93, 22, 109, 3, -109, 83, 76, 81, 37, 125, 61, -53, -15, 21, -110, -40, 23, 94, -9, 104, 47, 11, 43, -6, -30, -120, 110, -70, -110, 20, 41, -125, 123, 85, -17, -16, -125, -75, -3, -82, 119, 32, -13, 16, 110, -87, 105, 103, -26, -101, 121, -42, 59, -44, 63, -79, -54, -76, -124, -125, -114, 71, -101, -90, 17, -25, -20, 34, 69, -15, 34, -30, 86, 31, -75, 87, -18, -52, 94, -37, 28};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PlanSpecification tmp_msg_2;
    tmp_msg_2.plan_id.assign("EODCIYCUGOCDXJTBKYPWHQLXGYVFD");
    tmp_msg_2.description.assign("SRRUWPMGIIVNUVVBTKCYAHBPBUEDSPMGMHZDHGEETATKORFXFAGAGHMORIOFCUPFWUBIKVADRBMSDHSTCSROHTQNNUPKXKPZWJVDMIXKNLNVIIYSGKZSDUILJXGDAQYWGECAVFBXCTZAGZOEHJCARIKXFQLHSDVPXOSNOQXJWWCUYCPFOMMWJ");
    tmp_msg_2.vnamespace.assign("MJJKAUYKKMDSSADYNPDILVFJHIWKAWQUBGHCZGHLNESJTZIRGWACNBD");
    tmp_msg_2.start_man_id.assign("JVYVRSXRFEZCUQGKNYTALDUXBFVMVQPHFXCEDLVTFBILIXQVWCSDIGNSBSMNVTBGWGXAJEYWNCOGPUUQLBBBMVAOBMWDBQZNIWFUJVEKQMSFNOIALNLASWKQMDPHSGDUJCWYKRPGIITSJWAHFXCYKXRZJJDTOFYOWNLQYEZOXQFNKOZOELUDKYPLDUPAPHEEGPOACTYSEXZLEUCATTRTRTZJIHVDWRMNHJYAMRKMXIHGBHZUCPRQIRHZPSG");
    IMC::PlanManeuver tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.maneuver_id.assign("WRNGZANHYCVIMSDEMXQERBXIYMQOBITPKDYFOOTHADXYAYCYEAQKLCNRBNVHUSGRGCLEMBPPD");
    IMC::RowsCoverage tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.lat = 0.950410987489;
    tmp_tmp_tmp_msg_2_0_0.lon = 0.171347431153;
    tmp_tmp_tmp_msg_2_0_0.z = 0.716529389269;
    tmp_tmp_tmp_msg_2_0_0.z_units = 184U;
    tmp_tmp_tmp_msg_2_0_0.speed = 0.454178532996;
    tmp_tmp_tmp_msg_2_0_0.speed_units = 237U;
    tmp_tmp_tmp_msg_2_0_0.bearing = 0.827465503461;
    tmp_tmp_tmp_msg_2_0_0.cross_angle = 0.395973060782;
    tmp_tmp_tmp_msg_2_0_0.width = 0.396956086891;
    tmp_tmp_tmp_msg_2_0_0.length = 0.556993481665;
    tmp_tmp_tmp_msg_2_0_0.coff = 106U;
    tmp_tmp_tmp_msg_2_0_0.angaperture = 0.994183710127;
    tmp_tmp_tmp_msg_2_0_0.range = 18481U;
    tmp_tmp_tmp_msg_2_0_0.overlap = 173U;
    tmp_tmp_tmp_msg_2_0_0.flags = 186U;
    tmp_tmp_tmp_msg_2_0_0.custom.assign("XLNLAXXOARSPGFCNHPIVGJHQCXCODBXGHPCRQWDIKPFECRTAIPLFWWBXOVTVDJJTJHUTLDWYYHJKUTXCOBNAXYOBTRFWUMSPKLGZIHSYFUSISMJUMAIJECPGQZUOULAUWBAEGKWNYOYAHRQU");
    tmp_tmp_msg_2_0.data.set(tmp_tmp_tmp_msg_2_0_0);
    IMC::SmsRequest tmp_tmp_tmp_msg_2_0_1;
    tmp_tmp_tmp_msg_2_0_1.req_id = 51447U;
    tmp_tmp_tmp_msg_2_0_1.destination.assign("GZHPUWFSLXYPPRHGQPOJTXLQYSCFPORGVDQKVKMDYPJFEIYPMCUIAFYS");
    tmp_tmp_tmp_msg_2_0_1.timeout = 0.819703799631;
    tmp_tmp_tmp_msg_2_0_1.sms_text.assign("EMGWGDGDSSMJTIJKHOLPFXCBKRTHHUWPFMISZAYIEXTHPDGFVBSOXLBXKDKZJRGGWYMKLOOOJQSTRVWFQXGTBIEY");
    tmp_tmp_msg_2_0.start_actions.push_back(tmp_tmp_tmp_msg_2_0_1);
    tmp_msg_2.maneuvers.push_back(tmp_tmp_msg_2_0);
    IMC::PlanTransition tmp_tmp_msg_2_1;
    tmp_tmp_msg_2_1.source_man.assign("KSDWHXBJKFPTUCYRFPVFNMGEGWVNZLGMQGGRDHLUUYSSQUNCBYPMRQEYQWDXLZEZBUAIRJLPWGSEBOMFLURKLWKXBWLAFCAMQDZOOICXVQSEYCXCLVYZOBOAUHDUDTJDOMLVSWJKNPJVBXPROKVHAJMMVQHVCSTFWUGCWZTIEH");
    tmp_tmp_msg_2_1.dest_man.assign("GGQSYQKAUOJLNMFCDRNLSRKWMPCSIXYXJIPDSTWMFGVREWADHZUGGDODKDOZHPWUEFLCBOSKRAZBJPSUZXAUHPLREIHQWFNNOTLZMRARJZVVVVMUBBQBAOAQVXOKPTCJFHJXOYTEYSUSNILJEQENGPJKWDRTTIANNCYABPZTXWGTIMQVKEZRKJZISUQHWQYRXCWDZILFETFVXYGYDEPBVLCJKXCLXNQBMGUWUAVHCFOLHOEDGNIBCSHT");
    tmp_tmp_msg_2_1.conditions.assign("JTKOGDUEWHSUHEZXIMRMMVJLUKEXOIRYSVXDSBAPFAEXFVWDLAKYDBGECZLNXLFMNVFBJJBPWBAOTQSGKIMHJHVRSYKZTBFY");
    tmp_msg_2.transitions.push_back(tmp_tmp_msg_2_1);
    IMC::HistoricTelemetry tmp_tmp_msg_2_2;
    tmp_tmp_msg_2_2.altitude = 0.316330447562;
    tmp_tmp_msg_2_2.roll = 34150U;
    tmp_tmp_msg_2_2.pitch = 51026U;
    tmp_tmp_msg_2_2.yaw = 47622U;
    tmp_tmp_msg_2_2.speed = -15932;
    tmp_msg_2.start_actions.push_back(tmp_tmp_msg_2_2);
    IMC::OpticalBackscatter tmp_tmp_msg_2_3;
    tmp_tmp_msg_2_3.value = 0.486223881827;
    tmp_msg_2.end_actions.push_back(tmp_tmp_msg_2_3);
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.375037200911);
    msg.setSource(32957U);
    msg.setSourceEntity(46U);
    msg.setDestination(14363U);
    msg.setDestinationEntity(114U);
    msg.source_man.assign("LQJOMZMULTGXJINDVCZKISJGKMDNNJQWPGQVIBEAOQGYTOTRYBYLHBLHZDFYNFUCIWYQTMSFJGUFIQSXEJRMEOCCUZWLZVLHBYJSDYUPHKWPULQOOUBWPJMMAPPDUFRCNXPHMZZPAIYXDRTQRBITHBI");
    msg.dest_man.assign("YMTYCRLVBIZWHXJBOYDOMWQYVQFWIGQNRPEZNNKXBHOJLXRXROUBDJPADWIZDGLMDZQPCCHJEOOXPGIGJGPHOKHIGVVFUTFNEUWJDZIONZCTMRZOEEMNFBEBVIDHCRNXMTVSOSFABSYMQYYWHXSWRURBZQPQU");
    msg.conditions.assign("CAAYFQSFQJDUANXGMHZJGQTLEJEOKNNLGINLNKMJCJWOTXKVMDVPCOUOBHIBPKXHIZLOEZUHCFQRDIUZ");
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 28519U;
    tmp_msg_0.status = 30U;
    tmp_msg_0.text.assign("SNZFXMXJNWRARYMNQRWXNZTCLCQULPOYOQZUJGZHHGWUEBFRSKDEPIBAMPEBUFSHEZVAYQULCYQOSLUUHBGCJTHFYREMKPEOIZTNVXGYINPCOJCTDULIJTWWXXIYQMODAURYMCWMRJZALWEOSKGPONKGXTDLCPTHWKTVKDIKVBZGVFSNYXBRATHNHEFQQDMIMIEMUBXJEGKKBDOJHPODBYZFQZRFKQJFNRWVSADAPGLSCTVBGAAVCVSJSVF");
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.959614428502);
    msg.setSource(23169U);
    msg.setSourceEntity(24U);
    msg.setDestination(17879U);
    msg.setDestinationEntity(65U);
    msg.source_man.assign("RMHOMPQTPHJLUFLIGJWZBOHYRRTRFINVNAKLSZPNWFQMQOTHGPAHVKGUBALQFWHYTSZDSQSZCBMJTGUDYOGRAPTJEAUZDVGKBJEVKFMZWIQPCKFXBXWSLYDASCTFEFUPFXDZNYNMBE");
    msg.dest_man.assign("MHAJRMXQBGPKENUDZCLPHDTXFHOJVZYGLMBWLNRWQMRUSOOHBEBIHQXUAIZHZZDSIKONAYXUXVLUBQDLJHARVJDBGANDEELSLMBJQEQPMAXXNYLRKEQETWFISAYFAOGDTMUITPNJTVPQOUHIKRKYDKKENYJHJCEYOSFLYGSKZ");
    msg.conditions.assign("KHNDHAMRTHUCCEQJNJQNOYKPSOOXHTDEGAIMJNILLPGHETREAMBQCLTFROIMFYLOQETYSRNMTAQKRH");
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.385582330943;
    tmp_msg_0.temperature = 0.425008301683;
    tmp_msg_0.depth = 0.933815015398;
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
    msg.setTimeStamp(0.181690495822);
    msg.setSource(6286U);
    msg.setSourceEntity(195U);
    msg.setDestination(27174U);
    msg.setDestinationEntity(8U);
    msg.source_man.assign("XTYTDZWTVADFMORMMZCUWLTANEVYNLIYHZCIDPHFXCVFUNJPCWTDTRZAXZMGZHEYSKVCGWIPHHCBBJGDXNEQMIXEBQGIBRKUYSUHAOPPGWFSOQXTKPQQYOWQJXSEFGSLJCQSKXNARWBOSFIJGZKRVWKCXQYSZOYEKNKRXWMSHHMUFJUHYUQTBMZHGFVUUGEOYCLNDNLL");
    msg.dest_man.assign("XBTNFZTFXTGMCLZHUSGVRRXHTOWWWYQNBQEMSAFHJRVCCFEEOMKWRZLLOGFZAJKCFYWITKTDFXSATUHVXGHENAVBPQXDJKPDOUBMYFJJDWLGUUGBLQISVUZQPWRUHDKNLSVSCVXDYZOJGRCOYWAAIYAIKODOUEREBAFMCJXWNZGMPUNVYSRGQNEVJFQZTINDVXCIMJMYDOJULKNPPEHZLTZMHKMQSRKQHIRBEP");
    msg.conditions.assign("TXJWILXFKJFSYPLRCSGWU");

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
    msg.setTimeStamp(0.712328918978);
    msg.setSource(51035U);
    msg.setSourceEntity(145U);
    msg.setDestination(35071U);
    msg.setDestinationEntity(85U);
    msg.command = 64U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GNNRLPXTXWJCSTXDCCPGATPFYNOURUWSQHAVTIOQSQLNAOQPBHEJKNJZVUHMXCVWZKMPLPOKNZAELTWDIIGPGEDJYGVUNJCJMMOMQDGDXSOHUFJHSCVKSNIAYLKBYZGXZSRDAYAZTHXCVEZZQFXDLWBHRGVBWCCPWDZCUTWXBIJLBYYYMAEIRTKEVEDXOWGRH");
    tmp_msg_0.description.assign("HWXSSVKYIEGZPZWRFREDDMMRATZPOLSJWMIVCAKIALCXDHJYLSUSMDPXWPDRODGJIXUNBSYXWZOTPHAFHEGPAVBDUNRABZGAMYVKVDFNRUWVKOBEHFXJIZTGZUYIORQDKWFGTQXWLCHNJQMOVORSKRFNWJEMKXJITESBGULJTQDPBOWYBOGT");
    tmp_msg_0.vnamespace.assign("PLPZJPSXMZAEZFWWAITNFJMKXBSCDBIFJTGRUWQTEROJRCBUDKGBHJSWQIAZRYKMTOEVZHQIJYOQWGCNEPOWJDRHSIMRBKASLVABXKMIMLWQFWDEOTPRFHLUCEVKCHBAPUBMQYMOEKDONRHVDFUQVZSBNDDIVIJEXNPQCYITYVNJWXLYSVKULAWNINOYPHTTZGRGVFLAYCXGOEAZHQXALZSQNUVXGCLF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VRPWKQSUIDWPURLMLAKILKQIPJSPDCLAIDHXHZESNDIKXSUXGFTVIYPPZSHXKZMMAQXYOYOWCCMNSGBBOAFZYRAGHPQGXGVJZVCYFPWY");
    tmp_tmp_msg_0_0.value.assign("YUVNSVQMBOWR");
    tmp_tmp_msg_0_0.type = 49U;
    tmp_tmp_msg_0_0.access = 128U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JMGEXSFHLWVDLKODGIQRVDUBCHZILUGTPFNFUIABWCKNRMHKALVHLNFLYCDUCKVQXAJBIMRWAPWXYBZUIOINWMWZHME");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("HSVVPHDZHKXYHORZJPGWZSNTAQEWQKQZFEXEPSAONKZPICEMTLCVAABFLDBMDBTFZOGBXTLWFBVIXGGMQRCPIJANFPZH");
    tmp_tmp_msg_0_1.dest_man.assign("ALJATFTICXUHLHZYQZOYMMSPEMTEVJDNFNLETMGQAQWGZBMUZHHZPOSCLIVIHOAGNZRCXSKKKYDEBCCBUNCXOCKESLDSJMYDYTOZGXTPAQQESROPFJDK");
    tmp_tmp_msg_0_1.conditions.assign("FTYNWJXLFZWAQOZIOHPDQSVBEVBLXNGBFVEHRCDXWIFQGRCCGVPKUIIXSKDEFUXCCKUCP");
    IMC::GroupStreamVelocity tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.x = 0.680779293139;
    tmp_tmp_tmp_msg_0_1_0.y = 0.0637706491772;
    tmp_tmp_tmp_msg_0_1_0.z = 0.844394547504;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::LogBookControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.command = 211U;
    tmp_tmp_msg_0_2.htime = 0.910518706619;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::UamRxRange tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.seq = 61057U;
    tmp_tmp_msg_0_3.sys.assign("SLXQBOPGZDHXUDE");
    tmp_tmp_msg_0_3.value = 0.650563710412;
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
    msg.setTimeStamp(0.00215497310246);
    msg.setSource(20122U);
    msg.setSourceEntity(151U);
    msg.setDestination(30739U);
    msg.setDestinationEntity(220U);
    msg.command = 14U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XKMQFKOXAVLBCUKHCROOZBSLPYSIJNLMQDAPIAIVZKCLDDGBNTQHIESRICFSUDVXL");
    tmp_msg_0.description.assign("AXBQRKUVUTVMWXNEEHIVAWAUUKKZGUVYZZUJJZRMGPYIZYPDWLUSPTOIFSAIXMUOFCXDHKBWMLRMMUMQRIESLDRWNHZCGTNGLJQYBQJKKAAFJHM");
    tmp_msg_0.vnamespace.assign("SQPCOROGVTJLQUSNCVJKYXFXDGS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KRBKIJEMMWFXCQLICNZVYIQTS");
    tmp_tmp_msg_0_0.value.assign("KLUVCROGFXEVXWMTURLUMUXIPINJEVSUKUYKLPDPWHRGDJEJIKNLKWFEJCNTSMPIJAAAQBQSKKIACFUARYKYYSPFOQCTGMOJXGSKZGZDBXRSZFPBDYAOEZMDOQPSXJADHQBMHBZLLVIVRXHYHHZLWOJTWZYIRHDBAUOTVAGRNVFTFQWZHINRTMDOXZIGYMOLSQFFEFQN");
    tmp_tmp_msg_0_0.type = 250U;
    tmp_tmp_msg_0_0.access = 62U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YIOLGFBTIXIYHCXXKIFTYDZLRKDWLMUUYIHJMDUUWBLFESEBVDEKTYPWNYYFIMDAHAOWQDV");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("VJAGMOTMHZVKBOWFXFLQRPETKETLRVWUKYQIUTXBSAMECUMGTNWTHJNZDFPYDEXVNNHCRAOMCSMRIPLDWLGOTGZYOLIFSMFNYBYRMIKYKPWUUNFBHKQOHJJSYPLXDSFLJDSLBANNKWJCAUVEDFLSJMEDHVPPQZQBCQQOWTZDQCIHVYAZTNSEGAAOHQHLJWBSJGXVK");
    IMC::FollowReference tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.control_src = 35757U;
    tmp_tmp_tmp_msg_0_1_0.control_ent = 20U;
    tmp_tmp_tmp_msg_0_1_0.timeout = 0.529343061946;
    tmp_tmp_tmp_msg_0_1_0.loiter_radius = 0.121767077708;
    tmp_tmp_tmp_msg_0_1_0.altitude_interval = 0.373084841012;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::AutopilotMode tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.autonomy = 210U;
    tmp_tmp_tmp_msg_0_1_1.mode.assign("UINGXWNURRLZIMCAMPUYWBNVSDKUACRFHYWKUPEISVAWBPAGFAXMGUDZZIPDDSAFTOJHDETTSOWDBKXGAFYGSIPTHICZHXEFDLOJYJKXKIJQIMXEXRQOIXJYCKUBWGIEUQNSQLBCQVYOXBVRCFAMEJHWLTKSSLZZEGSOZMNRFYNTJMQRPRALECNHTPSFDLBKJHRVDUJEBFVCTHPWOMTZL");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("MGWSBSTRAQMTWCIGJILCYKILXTSHILOPDLODRCROTZBHUHEJM");
    tmp_tmp_msg_0_2.dest_man.assign("ILTKLOYOGRUACFJJQYVRDKSJRKDNAZJFUMYISBQIVPVWWEVTIGMBZVCJHNDFZAREQAEXUEEXDLZQYCNFSLLKPVXYXKIP");
    tmp_tmp_msg_0_2.conditions.assign("JCPCKODNHLYGAKFKMMBOVBLOEEEGAJDJFZKPBCDQIBKPEYEF");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::ImageTracking tmp_tmp_msg_0_3;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.871543897935);
    msg.setSource(56014U);
    msg.setSourceEntity(75U);
    msg.setDestination(10416U);
    msg.setDestinationEntity(19U);
    msg.command = 113U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LAYVEZFGUACQJTUGUNIOIXGDKGFYBUVFRICNXBNBECEDXREQJONALSRADDCHGJDWNZLTJUQXJNWWFXFLKCKVGRMPVAEFQWOUXLOJMAGSIOGYZKZBQEMAYQMYWKHEHRDIBLZOVRSPBRPQPAVJOHYODUZPBIUVMWDPEKIKQTFKTZCOSHDLSHQTGHANYXYAFHMLLZJBICJSPKTCTNYSHMDI");
    tmp_msg_0.description.assign("BWRCYEWQFMBEBYEOKGRDHMIOSLQGYAQMZEGJWLTPGLXAIJALDGBGMXOUXZBTDORDIUIMQOZZXUWXGEKRDCXIXTSWNZLYHDHCLJRWJAYGJCVFOSVJUIWBQRFHMINVVKZBONTOAHQECFTKHLUQXRIHSWZPCFAMJFAVUCCYGPOAWTKP");
    tmp_msg_0.vnamespace.assign("DNCGHDCKPMFATYJCRJVFQRVHSANMYOQAPCBGDLIQWFLAQDMEGDUVMSJPIROMKJHNRYSMFSFTIYRLUVDMPSBYQWKKSAHZKLJVBLJXMKLYGFEXUACTCANXHKVIIGOMNBTQBCELHXNOKAOFXNLWZKWIDXISZSFUVZCUBYZOCEEGHJRPDRZZWGWZHOOUOJCHETLG");
    tmp_msg_0.start_man_id.assign("CPOIPZRXMCTAXZKWHQDHLFYVOBDJZXPXLNRFWCGUEEPBLNFWSOOCZMETKYWWGMH");
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
    msg.setTimeStamp(0.487231873955);
    msg.setSource(28650U);
    msg.setSourceEntity(116U);
    msg.setDestination(45409U);
    msg.setDestinationEntity(228U);
    msg.state = 99U;
    msg.plan_id.assign("TOTHQTCRCDCTHCZVVETQMXJADEROAYUKFBAGYOCXOPITUSINLALPJWZBPEKXIGVBNNCWPURGRZLVXYIJJIDKGDLPSIVKHVYSNIOUELHFVBCDWFMMZCUNKSNOQYHEGWHFXSIQVIMPXMYQYFUPRTBDDWYLEHGDBWWJHAZRAIXSREXEMZABNFLUMTSXJWTWSBSDAWKMZZNFROFOMCVQRALPKOCXGVAHZ");
    msg.comm_level = 105U;

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
    msg.setTimeStamp(0.557418393849);
    msg.setSource(18430U);
    msg.setSourceEntity(209U);
    msg.setDestination(6683U);
    msg.setDestinationEntity(241U);
    msg.state = 150U;
    msg.plan_id.assign("WKJXIVNEVDHTYMUOSEELFAFXNVBBWINHUJJZAXPXILOMCZYWTMWNQUXDEGPFJJBFMZGLDQZVLKYORBNBSKLYIAEDBVX");
    msg.comm_level = 113U;

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
    msg.setTimeStamp(0.546419602167);
    msg.setSource(54517U);
    msg.setSourceEntity(66U);
    msg.setDestination(248U);
    msg.setDestinationEntity(226U);
    msg.state = 96U;
    msg.plan_id.assign("WEAYIPAGLSZHISOVVPGXDMCBKVYVUCOYJMRVROFEXADUNFKBTUSTUYWSXVYOFPCSABXVRBGFIMMHQMNQZUOIUMPQQYDJMJGCOKP");
    msg.comm_level = 59U;

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
    msg.setTimeStamp(0.664888036042);
    msg.setSource(13292U);
    msg.setSourceEntity(66U);
    msg.setDestination(48153U);
    msg.setDestinationEntity(29U);
    msg.type = 82U;
    msg.op = 164U;
    msg.request_id = 46096U;
    msg.plan_id.assign("IJTBJBIWULDXOKBUVNENAQBUEKMCYOMS");
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("LUSWQKCUMZKBSFACBQPYDGUNIEFWMBJSUMZJEKMCEDTKGJVCUWNPSOINNFUEQKCLWTYHLDVDMTYLVYHWKOXWHASJIEMWZXYSVLJUOAVHIGDZINGHZYJRBJVIOPQEGOAQWYBXNJVERRTGEIKTPOHNBFWMZMUVQGNFPAAFZQXE");
    tmp_msg_0.type = 193U;
    tmp_msg_0.properties = 109U;
    tmp_msg_0.durations.assign("KBUSGVOUEJEYAQTWNWDCCDMZQZCWBDWLWTWUXXYMCIZEXQHITMIPYEOXKAZZQQWRXOIKUKKDTLUMOYIVCVFHIGIKHLPOAGBMYLIASAJFKNFBLCQFRJVHPB");
    tmp_msg_0.distances.assign("ETXSNEEPRIOYNTWPOKXIHURSCCKPEWRZNIAHDGNRUGDTKGWVOLUTJAWEQATTSFIXWMDNUYXLOVVIIKHHJFMYBZZJSNUQACVGPXRZFIQKYMLVLHAEJQJVQHZQIYKRGEFDGUUTUBG");
    tmp_msg_0.actions.assign("XPENLSCJYWETSLZIQPZTTAGHVQMFLNRHYGVOMVLXYCITGCWMFBRFHFROBUGEPLZTZZCQRIBNFVQLFJSXDHURFZRKQENAOAJDXDLQUYYDRPPNUDLSHVNQBHYKZHNOOZTFUXQFXCSDZXEBSEASSEKBDAWJVGZVAIHFGGTBXTBCQCKWOISLJGWUJQXDAHWYBWPJMNIUAPCJIYWJJNIRGKRVPEKUBGMDV");
    tmp_msg_0.fuel.assign("QDPAXDZXEPGOBGFNTACZEWCXKXOSNIXQKVRRDOHYYFKVOMCSVAGRVSUJUMCRLNRTCCWXYODHRFZPUIQQTXOUGBNHZIAWTYYEMNIVPDLMTGOQETBILBDKBEYTLUZWNFTILQBSQAWGPQRUHVCYPMIEFBEBAJVLJAIQKVKSCFKFSJN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XSVRGMAGIZKKTGTIMWNHTQODQSNZRHMLBMPLSNWZJSTAMOZODDGTVWAIPQJLGJFICPLTBYAIIEZNLVBJOOQPUNPFRGVFBYMUAUXUXSQDIFSPDCZBTYHGQEWL");

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
    msg.setTimeStamp(0.636122253262);
    msg.setSource(13675U);
    msg.setSourceEntity(156U);
    msg.setDestination(13572U);
    msg.setDestinationEntity(226U);
    msg.type = 185U;
    msg.op = 128U;
    msg.request_id = 49547U;
    msg.plan_id.assign("TUMNXVWYIFEJODGVRZGNDAHJNXHGIIPHOUIEEOGDHHNXKBAFLMPFUTZKOQNUGBVLTMCAPZZFKYIKJBBQTYVWEDRPDZAQMNHWBLR");
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("WDWHZXJMYXUXMBCJVSKRBIJKVBWGYATSQGAVNNQBMBCUIUADWLQTQYEWVRPIWUCHJKDCAXZMTSLHITVKLWKHODMRBLKOQEZGBETXYXOAQUJELQDOQMNQCCYZPUZZTLDUISSFANCPENHJFFFCQAKOMUNBRUBNBVLXZRCOTZPJPNIEVKWECSGXMAXIVVZLSDUAFGWFDYTOHYT");
    const char tmp_tmp_msg_0_0[] = {1, -29, 39, 111, -116, 96, 26, 75, -96, -57, -113, -39, 53, 34, -67, -88, -79, 69, -84, -72, 93, 34, 121, -115, 6, 108, 53, -114, -50, 58, 0, 86, -13, -66, -95, -35, 96, -127, -93, 91, 13, -87, -81, 56, 64, 33, -79, 42, 20, 126, -107, -103, 59, 13, -114, 44, -49, 64, 109, 37, -115, -105, -111, 72, -76, -110, -128, -66, -58, 41, 38, -109, 32, -62, -75, -39, 78, -99, 112, 64, -8, -39, 28, -10, -87, 53, 53, 124, 54, 68, -61, 60, 123, 107};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QIHHVFFTMFEPPABERIDWSJHPSDXWAUHJNXXPTTQWNAVXKUZVNDLCYAZSSOQKHQVZCNBKLCLOHYNOGVQZMTHNBISKZEOQVDPOJITLZXFDYXKHGCYAQKTYRESTQRWMEARBODNFGOKVTBEGJWVGDY");

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
    msg.setTimeStamp(0.878393718549);
    msg.setSource(11577U);
    msg.setSourceEntity(249U);
    msg.setDestination(25455U);
    msg.setDestinationEntity(191U);
    msg.type = 191U;
    msg.op = 222U;
    msg.request_id = 41982U;
    msg.plan_id.assign("QROOISYSBXMPBMEINTJPLPWFDTJAAMEVVBUISJKILGBLDUYUHRGADRUJVDVNKFKPNFNHLEI");
    IMC::VesselWind tmp_msg_0;
    tmp_msg_0.angle = 0.668438901908;
    tmp_msg_0.reference.assign("NXSOTIKWZYJCRFWHDCHNWHYZOGFOODUQRZIHXRGZBAMDMESUEYWJINBSWVYJQGFJFUPZJWLAFYQVLTFMRUUXAKRYIVDBCDMGLBGTLBISLVNVEHULNSEWCBDBOLNIJHZQQXGLLGKRDPOYBPWNXRXXNJWWVEMEBJZVOUAZIOJJXKTEGTTFAHESMASEVZRMCUIKYAMKGDXTHADSHPPYFBIZQRCACKHLVORIKUVPNQ");
    tmp_msg_0.speed = 0.0808067016005;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EAPLIRSPOXIPTWVPQSJIPZAMIJ");

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
    msg.setTimeStamp(0.866306780385);
    msg.setSource(37532U);
    msg.setSourceEntity(159U);
    msg.setDestination(25639U);
    msg.setDestinationEntity(50U);
    msg.plan_count = 52759U;
    msg.plan_size = 2713286177U;
    msg.change_time = 0.820142702532;
    msg.change_sid = 49499U;
    msg.change_sname.assign("XJYGWGRUNXLSEWQGGQOTANEEPCMYQSAKIZVUQSKADZWFOHCNWVHOBJQNOHROTNQABRTTECHQROHZCKCBHOINUJDVIGRLNXUSGEYFOVTPVJPWPYCMZLPDNAZDZTFWTTLBEJIRBFNIXLXAMRCHBLNYZX");
    const char tmp_msg_0[] = {1, 124, -114, 115, 3, 107, 104, 119, -44, -101, 98, -60, 92, 102, -40, 65, 119, -49, -33, -128, -117, -72, -57, -50, 104, 36, 50, -30, -29, -77, 42, 22, 52, -116, 36, -59, -124, 81, -69, -58, 94, 75, -74, 63, -71, -66, -25, -4, 75, 126, 49, 3, 26, -28, -98, -13, 70, -3, 116, -53, -11, -3, -37, -116, -87, -38, 35, 60, -60, 98, -51, 119, -29, 114, 48, -3, 84, -12, -98, -79, 67, -15, 64, -32, 116, 88, 60, 87, -124, -1, 15, 112, -120, 85, 21, -69, -102, 46, 113, 102, -51, 109, 118, -63, -107, -100, 85, 28, -71, 108, 101, -96, 125, -61, 11, 49, -27, -123, 63, -17, 29, 19, -29, 60, -120, -59, 21, -114, -124, 28, 107, -128, 52, -93, -118, -8, 71, -55, -121, -105, 86, 13, 21, 65, -128};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KSDIKAEOSOIEFSKCWDJPQWKYHGXPRYTNYUIXFDWRPWFSQNYIXNMEFPWVMJXPTVHFCMIRSWAVJTELPPWVKGIIQBCWLTYHTAPYEPJAMTCGXJGHHACDFMUECFBJZNBGLTUUVUFNLZUSABIVNZOJBMNOLCYOSLKVIEYOOGYJGDEKOLZQDRMAZXRCGEBTWZQFIXULBCKBTVPHZOBASR");
    tmp_msg_1.plan_size = 43591U;
    tmp_msg_1.change_time = 0.842719912147;
    tmp_msg_1.change_sid = 48367U;
    tmp_msg_1.change_sname.assign("WQJOZINWOYDTTCXKHOMIBZFZNQIPQIQXNVCXVLJVBXNAYPJAVZSZIAHDFKFREDROKSBLLSEJNXYVIY");
    const char tmp_tmp_msg_1_0[] = {-61, -91, -109, -126, -44, 118, -60, -69, 44, 117, -96, 103, -121, -88, -78, -115, -35, 72, 92, 102, -49, -29, -2, -66, 1, -57, 70, -62, -69, -128, -70, 26, 17, -58, 43, 118, 28, -36, 91, -89, -86, -4, -59, -20, -114, 71, 12, 78, 112, 81, -111, 88, -48, 110, -103, -15, 59, 75, 66};
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
    msg.setTimeStamp(0.188033395384);
    msg.setSource(12751U);
    msg.setSourceEntity(58U);
    msg.setDestination(46309U);
    msg.setDestinationEntity(29U);
    msg.plan_count = 3965U;
    msg.plan_size = 3479893375U;
    msg.change_time = 0.0446116203931;
    msg.change_sid = 43826U;
    msg.change_sname.assign("SWVRTODHDXSWSKIBIANHYFESJOSKBEHRUQTFLEWJACMXAHVYNVBVZKETQGYRMWKODUAMRTGVDGMZBRZPHLZYJEYKKSPOSEZNNQBPPCVDMUQBBZKIBTEFMLDMWQZCJPBGERGCVWFFAKGDXKYTRWNFSUJUOTLIINYJVCOZNSRJPWPCCXIFXGDYULPUUQQNZXUBAHQRHFMLTHCFWWALOFJOXTHSIIGKVYIYPALEODVXMLOAJ");
    const char tmp_msg_0[] = {18, 51, -55, -20, 45, 99, -87, -52, -48, 120, -92, 86, 7, -31, -26, 52, -19, 68, 42, -124, -9, 122, 15, 50, -76, 33, -54, 55, -48, -36, 96, 109, -69, -17, -60, 83, 106, 106, 86, -93, 107, -24, 13, 12, 97, 55, -22, -60, 87, 53, -88, -57, -64, -41, 110, 47, 98, -64, 4, -34, 47, 109, -79, -4, -75, 35, -111, 63, -9, 34, -54, -128, -98, 76, -20, 51, -79, 41, -20, 15, 126, -123, -104, 123, -96, -77, 16, -68, -90, -51, -87, -82, 1, -31, 103, 9, 1, 96, -72, 37, -31, 22, -45, 41, 10, 108, 59, -109, -89, -73, 100, -44, 86, 13, 24, -4, 64, 57, -31, -18, -62};
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
    msg.setTimeStamp(0.0191507926416);
    msg.setSource(50571U);
    msg.setSourceEntity(111U);
    msg.setDestination(3259U);
    msg.setDestinationEntity(14U);
    msg.plan_count = 47214U;
    msg.plan_size = 874646533U;
    msg.change_time = 0.276002531191;
    msg.change_sid = 2845U;
    msg.change_sname.assign("FHMNKEAVVKDYZHBJSNWWQOQYJQVYVDGUQIDWCOCXMAPFEJMUNJSFLWXXWFPLVPBNZMKIURTUDA");
    const char tmp_msg_0[] = {-45, -20, 46, -90, 107, -80, 75, 125, -26, -49, -89, 77, 86, 12, 77, -72, 30, -39, -117, -42, -54, 45, 27, -92, -86, 37, 80, 17, -77, -23, 78, 70, 73, 68, 44, 124, -90, 95, -18, -66, -37, -88, -40, -89, 2, 102, 124, 10, -69, -106, 104, 66, 124, 111, 116, 41, 120, 126, 46, -111, 113, 56, 99, -32, 112, -31, 93, 100, 101, 37, 37, -96, -42, 117, -8, 103, 114, -33, 99, 24, -57, -93, -106, 65, 28, 80, 73, -13, -47, -7, -20, 53};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("SSBAKTTLMFNDEWLOLSBYKHBRDIZHJMRTHXOWJMYIVTBUJXABECWFWXCPIJGSVJPDEKHTSDOCRMOQVDZQEKFYSNNWFPCXJIDZNQGESAGIHUBZNVLYHZBUNPJNFZPPRYMGKUQGUXQLYDDZRCQMZFRYLSAMFSADWIIGNOWHJFCXLIFNZPXJLUSIWHDEVVVUCXVYLKGRRVVQZKEWCAYQO");
    tmp_msg_1.plan_size = 4643U;
    tmp_msg_1.change_time = 0.992028368718;
    tmp_msg_1.change_sid = 23503U;
    tmp_msg_1.change_sname.assign("RIFZOXLOTOQQRZWFIKVBJPPRNWDBHZHCSXVAKGVRGBDLYTMUAGSNLDCESILIQKTYEACKQUMESQPMAMCFKRSJUXKYGXJGIZNURMMSOZVCIRUABFINLFIRHCDHYAQOMVJHFAIFSTGOJVVW");
    const char tmp_tmp_msg_1_0[] = {-42, 36, -127, 53, -108, 99, -22, 89, 75, 32, 31, -70, -13, -51, -76, 53, -101, 41, 12, 91, 82, 41, 1, -97, -50, 62, -83, 111, -106, 35, 89, 99, 32, -89, 2, -39, 93, -74, -78, 113, 80, -122, 29, -22, -100, 73, 37, -88, 91, -19, -125, 97, 53, -101, -45, 52, -1, -12, 62, 70, -12, -20, -50, -120, -44, 6, 55, -77, -74, 74, 32, 67, -81, -106, -30, -12, 3, 57, -61, 83, 122, -20, -12, -38, 15, -125, -16, -100, -63, -88, -41, -67, -44, 50, 98, 4, 124, -88, 89, -21, -24, 86, -1, 30, 62, 57, 124, 45, -128, -127, -49, -47, -90, -62, 125, 4, 83, 45, 72, 67, 78, -113, -61, -52, -10, 93, -104, 91, -56};
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
    msg.setTimeStamp(0.262820480408);
    msg.setSource(21777U);
    msg.setSourceEntity(19U);
    msg.setDestination(2921U);
    msg.setDestinationEntity(7U);
    msg.plan_id.assign("WXYHVWCBRDYEMZQXNWCMIGZMZSFGDAFHPTXFLBTIKYGRYELSCEO");
    msg.plan_size = 26166U;
    msg.change_time = 0.359197096789;
    msg.change_sid = 10275U;
    msg.change_sname.assign("BLPHGCYTFWWBZTVMFJEFNWRNGRBMIOTYKIMSCKNAYDVEJXHZAOQRNZIZOUCAMSDWEPKCIJGZBLCWXVVKHDSUUZRXFHBKSUVODQEATBYHZLJEQQNLPVKKAYBPXYNMCPIXLJVRSRSUEZBYPIU");
    const char tmp_msg_0[] = {103, 95, 0, -53, -53, 113, -54, -84, 16, -65};
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
    msg.setTimeStamp(0.589646987164);
    msg.setSource(24421U);
    msg.setSourceEntity(78U);
    msg.setDestination(38927U);
    msg.setDestinationEntity(18U);
    msg.plan_id.assign("OWLOZLSRCONAQQTBLZYLMZMHDXFTZPAXQEWKBZHUESUIGIOOIHQXRJVKSGQJDTWYMKJDRJRABUFTIQFMHAJFHPIFACKBTDPZKIAZBGXGNPTKWXBXFWADFBEMGWHMECMWUVYVUQHNRSGGZOERNPKHMKQZFIFYJOVNIAESNVGSJPDSYCUUOQXNATSRDECPOWJPCIKZMOCTDLPEFYBIYESVTBXQUCMLULDXRC");
    msg.plan_size = 23044U;
    msg.change_time = 0.892794447926;
    msg.change_sid = 4375U;
    msg.change_sname.assign("AQBRGLBLGDJMXUZWLPFJSJVWZZJYQBYZPAEWRHNVOXVQRSEZRRMUMQIGVKHZVBDXCNECWFNIRTCTNVEVXCDHSBTBGSGIOKQEQRLCAGYLXXQEFOJGKGIGTOWPNYSDJMLWPJFWZJOHIDBFADCMPUDSEYKYXZIMEGOUMMPANIYMKRFAERHKHKPUQCUSIUYASVINMFNCDODBTHLSVFZQHONPYTWFHCHXFZITKTCLBUUJJEVWDAY");
    const char tmp_msg_0[] = {117, 108, -78, 60, 25, 28, 118, 81, 95, 106, 58, 79, 35, 21, 15, 105, -36, -113, -58, 76, 103, 64, 88, -29, -106, 34, -118, -25, -78, 3, 69, 103, 67, 67, -10, -37, 49, 78, -45, 6, 56, -55, -96, 12, 31, -94, -72, 57, -112, -51, 109, 34, 60, -49, 56, 69, -37, 1, 17, 71, 48, -25, -66, 45, 98, 42, -4, -15, 101, -83, 38, -38, 45, -3, 103};
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
    msg.setTimeStamp(0.639339476826);
    msg.setSource(7343U);
    msg.setSourceEntity(211U);
    msg.setDestination(28343U);
    msg.setDestinationEntity(60U);
    msg.plan_id.assign("USFJIIHVXWEJMIJHNDBLDKLTZQIMZMENKHDOPRFGJGEPMSUKQNIECJNHBWZGJSBAGAQIYAAYRASPGLWTWYTDHADXJMNQDHBVSXOQCVSDUEMZGXUZJKDFFSTMTBTQFSCCANEYAQMYRSGXDGWXHOWPVMLKEAVRUONXOJPXXYWJBWZRLTVCODOVUVLPOIIIPKUWEW");
    msg.plan_size = 13772U;
    msg.change_time = 0.915364997149;
    msg.change_sid = 35949U;
    msg.change_sname.assign("IAMXHGZXJXYMJQGJUEYMROBSGYHAASFFYCIJ");
    const char tmp_msg_0[] = {-63, 30, -71, -79, -86, -46, -11, 99, 99, 48, -18, 110, 62, 44, -73, -92, -21, 62, 63, -72, 8, 84, 40, 40, 80, -79, 5, 78, 6};
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
    msg.setTimeStamp(0.727996836864);
    msg.setSource(28017U);
    msg.setSourceEntity(160U);
    msg.setDestination(38970U);
    msg.setDestinationEntity(91U);
    msg.type = 46U;
    msg.op = 147U;
    msg.request_id = 65502U;
    msg.plan_id.assign("THUNVPBSFZWNBZWDLHJNHRMRIACPHOO");
    msg.flags = 17212U;
    IMC::AcousticSystemsQuery tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WXLWCRKNBFWCJWIPADLTBKYOPFGLXWAVMPKYCTXQUXJESIMLHVTYBKEDMQSZCQAWBNKPAODHFZDGOQEFOUNFORHXVEAJYJICERBDOXRVZWNJHITTYBRETHYGJFXDSPACLFIMZXSBQFVGCUOXMYTJSSFLKNHUCRAAHML");

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
    msg.setTimeStamp(0.423331365338);
    msg.setSource(13198U);
    msg.setSourceEntity(183U);
    msg.setDestination(11690U);
    msg.setDestinationEntity(206U);
    msg.type = 218U;
    msg.op = 31U;
    msg.request_id = 20416U;
    msg.plan_id.assign("AWLBRGUPXJYUBABBRQHVDTBXMVRIRMFVHEOMXCFKZWYMHMYINOARXEKAUCPQYVQTKQTANNCCAIOJHELGOPIWDUDSRDBIJJWNAUSZHLDAUGUCZEYDNJOEXFEWGPMEHODWSGYCBIMSLUDZIVWFHIQWPNZLPHTPGWTVTOXKGX");
    msg.flags = 11367U;
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("DQVQJHJOHFPBXLNWSLSKARQBKEAWIEHCJZRSEFCLXANRLGTFTOJGKGWAKUDQIXOKPHKTCBG");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("USIEJFLCXQJJIGEKWILAKALGLNFUWTQQHPWDAZBABGSTTUVCRXZXNOSFPRJJGUVBHNRMRDHOGLKCAXWVNVYJESACPRMTTKVGXNEFLNEBQGUTSISQY");

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
    msg.setTimeStamp(0.88557470634);
    msg.setSource(48755U);
    msg.setSourceEntity(11U);
    msg.setDestination(60151U);
    msg.setDestinationEntity(65U);
    msg.type = 191U;
    msg.op = 187U;
    msg.request_id = 31870U;
    msg.plan_id.assign("BGPAHFYFZMOEUIOUDBOLLNTBSADIDTQKLWHRTGUPKGTBOCCBTQWFWJYJSDZXYVJWTRZUQWURMMGZSQRZQVWFSAMFBJUPYYKGGAHRQBFCPRIAPXEMOJNQXEXYQFNJMHHOCVZDETHK");
    msg.flags = 2092U;
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.415800313718;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XTFCRTUFESDYMFFWGVDTZJOIPNTLMPFNNAQARCFTWIEXPSHNSJHZXQWWOUYJCOHIJVKYZMARCPVKNCRYATDWMLZXBJXLYTZEIOBOLPDOXLQQZCKXQGMHNXQRLAQPPSNXLGJWAKZVKUYHKBBRNEJHJQSYMRETBELSGBANIFBKGKD");

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
    msg.setTimeStamp(0.168229011473);
    msg.setSource(24488U);
    msg.setSourceEntity(169U);
    msg.setDestination(41044U);
    msg.setDestinationEntity(154U);
    msg.state = 54U;
    msg.plan_id.assign("RGGAJKWQSVOGDBIWRRSZZQHOUWCBEYZKKCIEXNADUTRRBOVPNGICTHJUJRBLBVOVIFCHCBWMYHPYPVSTEBNZMXQMLPAISNYEIJKXWLTHELJKVMQHVAWFJJXKULSNMKHSTMUYUYENPZTYFGXERUUZJKQAGXOAFGAXZFXMLXFSASIPQPDBQWNUAGTIHDOZLDWHQSIJFXRVISLOEHANMOCPPZRYOCPDWLECBGQDDBCMDRFDUNEGTKYYKOT");
    msg.plan_eta = 743218145;
    msg.plan_progress = 0.505931253504;
    msg.man_id.assign("YDSNHIDCXAXGTZFPEOVJWEZBSWHQYHYIOOACQOQDXEHBKEKIDKXYOFVSWZNMOUUVVCAGJWQZMKVGZKJAUPVNIBXASDPACSKFPUGMQFOIWSHBNGONJLKMRHNLZCOTLTPZEFVWWRZRDMMUHBQHMCETKCTAGMNRDYIBFNRTIKEJEFYQLFSYXQBNYWGSCTCLPSLBFE");
    msg.man_type = 64449U;
    msg.man_eta = 1287982609;
    msg.last_outcome = 189U;

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
    msg.setTimeStamp(0.4082736681);
    msg.setSource(30403U);
    msg.setSourceEntity(6U);
    msg.setDestination(62542U);
    msg.setDestinationEntity(177U);
    msg.state = 138U;
    msg.plan_id.assign("UMOTVQLQUXXFEEAFHEMCDACBMZWEDTEIXSCTOQOICGVHVKZCPJNDMKOBQGIVVKKYDGZGGNGGYUHMWPDLEFTINGJP");
    msg.plan_eta = 684329964;
    msg.plan_progress = 0.240911210538;
    msg.man_id.assign("DDVAUHFONVWCMYXGZOSEMVGTLUVCPWQEYZPDEKBPRVIKQSEGWBAVCKSGWHWGPXURBEXGXRGZMMVOOQNYZGFAMHEITMQZXSBKYHIEOYFJRTNBIOOLDYOPRZPFLBASCTJMRKFCLLTEIHIDRYCXENYIDFZWYPCCSZRLWPNQQWXHIVFAJUZQQFJMSNFSMUPLBJVNJZNBTEKXACODBIWGKKHDMTJIFASQGSVLCYPADBHTWUAUUKHOLNUNURTXAHTD");
    msg.man_type = 2637U;
    msg.man_eta = -795168679;
    msg.last_outcome = 202U;

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
    msg.setTimeStamp(0.894721914627);
    msg.setSource(52595U);
    msg.setSourceEntity(241U);
    msg.setDestination(26660U);
    msg.setDestinationEntity(76U);
    msg.state = 41U;
    msg.plan_id.assign("QCCCQFWEUABTRZVQGOALRMKDIOUZQXSFLFBVZGURRPZATWNIKANECFQVIJCNKOACUQJEDNLISHJIWMTGLYJXAMVCUHYNQUPILEYURILGANYMBOTKVZSHTPAQHBQWDM");
    msg.plan_eta = 399618990;
    msg.plan_progress = 0.393905075925;
    msg.man_id.assign("FIIDVZZEMCBZZNONCRAHSFJEGNJIMQGZPMGNWJLNBVLSTERFYIRHCPLMCIKJB");
    msg.man_type = 45974U;
    msg.man_eta = -1720129490;
    msg.last_outcome = 225U;

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
    msg.setTimeStamp(0.518896579523);
    msg.setSource(6361U);
    msg.setSourceEntity(107U);
    msg.setDestination(9699U);
    msg.setDestinationEntity(21U);
    msg.name.assign("QMLCLIMEFQGWLRYXXZARXGYCJUONZXLTXJYXVGBNMZTSUUPYOOGEIMSRETEZGCFYVFONWRVLWJJYBHDTBCJKXUAFFPLCKMYSGWOAOTUMBIIPTDFTVHJDHHWAPDQPUAVDPQLPSMSHSXKQKANGCKATQJFDWZRQVRZKZYNGJWIBBRHKUSZYARZFCBNWOKIHBIWZUADHWVUHEPHQLSFNCEBEPEMKQVFLNXNSJISYIVODDNJDMO");
    msg.value.assign("UTFVIKWUGQEQBEQHWXGESHZTNNTCLYOFJOGKUIAAHNAHXYLOTTKCZUSHXCMMGLKPOHPOCXBDAYWTCRWUFKHVAXFDGLJDPZLIRGDNVYJACLKVWNUIIQTBEJEBGALMZPYLDMXJERPJAQWKSVSACEMMPVIAXKORWUKJECWPVYRZBGNOZRCNRG");
    msg.type = 218U;
    msg.access = 118U;

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
    msg.setTimeStamp(0.254576031108);
    msg.setSource(17792U);
    msg.setSourceEntity(241U);
    msg.setDestination(33255U);
    msg.setDestinationEntity(26U);
    msg.name.assign("SFDDGFOEMLPDQDFPIXKXJSV");
    msg.value.assign("PEXSKAWHYLIYZHFZFPKWURQTIOVNLOQJBZJGOFLUCSYQTWTCNXMRLULRATVQIZJNCRNGXHHADLDZNUZRIZQIZAPEYSQIGKXYADSKETPGVCBDTSPTCDNIPLKFCBEIBLTBDEIOYZRHUVGAOSYGWYXMCDUQLUIKMAMRWRJXVHGOJYPJRYOXHUSSUNFMLEJQXFWBHEVDJVBNKBPMGVENWEVATGZMAAJBXSCKFOCOBSP");
    msg.type = 158U;
    msg.access = 103U;

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
    msg.setTimeStamp(0.483137464007);
    msg.setSource(4145U);
    msg.setSourceEntity(192U);
    msg.setDestination(23701U);
    msg.setDestinationEntity(127U);
    msg.name.assign("INNANQZWISOKNMTXTFNHLCEXRMJDLUODBTBFOCKHXVCSXURDRLEGNKZNFQEPRCQUVDH");
    msg.value.assign("EPZYVIONZNUYZQFEKKZJGYPWEGJNHSUSXBHQZFAZYAFLGHSSOJUYIWDHTQAQTDWSC");
    msg.type = 175U;
    msg.access = 208U;

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
    msg.setTimeStamp(0.460955441005);
    msg.setSource(47897U);
    msg.setSourceEntity(55U);
    msg.setDestination(29506U);
    msg.setDestinationEntity(226U);
    msg.cmd = 70U;
    msg.op = 246U;
    msg.plan_id.assign("CQMCLAGUHCDGEPIFFJHHQILXACXXDRAQYZFTLVZNMIEYECYQBVMZSOXKTKYZXBDVKSQXDOV");
    msg.params.assign("AMHRXFWLMJHXXPROCTSCJMOUWGWLOSNKFHERTZYTIPXZXQIHNAWBCNVFLULSOHWPNLKTXEUBSUQRINGDYZ");

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
    msg.setTimeStamp(0.334386706901);
    msg.setSource(46234U);
    msg.setSourceEntity(135U);
    msg.setDestination(20820U);
    msg.setDestinationEntity(13U);
    msg.cmd = 158U;
    msg.op = 213U;
    msg.plan_id.assign("NGELARMAQTYAIWEOLZEUXKKPFVKORMQHXSHVFFOYCEUETFCYWRNPYRFTQNBMPWTINVXLZHOKCZAHPSMPRJTVZKCOMMDPGHEIHGFBQFTJLPTYALCQIXUGWNDMFAIRTJUINBHADDBKTXVBJGJGCXPIZZGURAQLJHXIMBCDDESKWGJCE");
    msg.params.assign("FHNSBTAMTTAJZHW");

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
    msg.setTimeStamp(0.781890739722);
    msg.setSource(1056U);
    msg.setSourceEntity(74U);
    msg.setDestination(45959U);
    msg.setDestinationEntity(155U);
    msg.cmd = 102U;
    msg.op = 52U;
    msg.plan_id.assign("GKYHBWFSPPRUVGBIUNQNCHKGENXDSFDONZILRQWCTEHBQ");
    msg.params.assign("SAAPIXVFCKZXAZNMOTGASHKEENMPKQUGVBBVNYDDUIWXVTUWRPLFDANFRHSXNZSDVJUHPGRNTMIATLHTOTKPZGWIGWGVBMXFHCVIDQJSZVUMKBAEKZNVEDKPITUCEHUYCOSCGFNGZUFRLJYWXZHRPKUCLES");

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
    msg.setTimeStamp(0.145854065152);
    msg.setSource(50757U);
    msg.setSourceEntity(31U);
    msg.setDestination(14221U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("GQQFKRPXOLABVTONUSAWWIMBMUCKYGHBYLUJNZBAGZWQIMWDCXHVGYDZIICFX");
    msg.op = 79U;
    msg.lat = 0.814325777076;
    msg.lon = 0.776277105033;
    msg.height = 0.673365777543;
    msg.x = 0.903157451293;
    msg.y = 0.23592067801;
    msg.z = 0.462613375271;
    msg.phi = 0.882790673978;
    msg.theta = 0.202197820262;
    msg.psi = 0.759317182143;
    msg.vx = 0.722782738175;
    msg.vy = 0.591239159303;
    msg.vz = 0.403676543414;
    msg.p = 0.424213532814;
    msg.q = 0.164783785586;
    msg.r = 0.73701166162;
    msg.svx = 0.660023607655;
    msg.svy = 0.519387599174;
    msg.svz = 0.760325696779;

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
    msg.setTimeStamp(0.810586222751);
    msg.setSource(6048U);
    msg.setSourceEntity(197U);
    msg.setDestination(41986U);
    msg.setDestinationEntity(201U);
    msg.group_name.assign("SUSMFBMZELOQWRAWJXOSVFFCNLVJNOLBZTUMMYNWSQPZKYHPDEKEZICMKARIEQDJJSLOMRTWBLIWCGRDWCFSANEIKOANLLBWWQ");
    msg.op = 61U;
    msg.lat = 0.974460101377;
    msg.lon = 0.559290331774;
    msg.height = 0.398420036175;
    msg.x = 0.804521322034;
    msg.y = 0.18367966881;
    msg.z = 0.980737271704;
    msg.phi = 0.408605383336;
    msg.theta = 0.251710415425;
    msg.psi = 0.476366810304;
    msg.vx = 0.0866984181563;
    msg.vy = 0.0844112925434;
    msg.vz = 0.157368338902;
    msg.p = 0.461767571241;
    msg.q = 0.171697006012;
    msg.r = 0.0348497391906;
    msg.svx = 0.388759236099;
    msg.svy = 0.393974540344;
    msg.svz = 0.494677468651;

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
    msg.setTimeStamp(0.640168517169);
    msg.setSource(45752U);
    msg.setSourceEntity(1U);
    msg.setDestination(41220U);
    msg.setDestinationEntity(68U);
    msg.group_name.assign("QVHGWZTDBPXDOBRLEVXRJIPEEJSDKGKJKOFHWGUHZHBUTBBFIKCGPVFQXSIPUTHBKYFNRUD");
    msg.op = 175U;
    msg.lat = 0.474403171793;
    msg.lon = 0.635841279858;
    msg.height = 0.592387918932;
    msg.x = 0.761635536457;
    msg.y = 0.936816871861;
    msg.z = 0.816896091948;
    msg.phi = 0.0565733800576;
    msg.theta = 0.659109440455;
    msg.psi = 0.424985497368;
    msg.vx = 0.148815896008;
    msg.vy = 0.141482330772;
    msg.vz = 0.854534722411;
    msg.p = 0.0665040727811;
    msg.q = 0.255324973955;
    msg.r = 0.200584690588;
    msg.svx = 0.36238733803;
    msg.svy = 0.506894754485;
    msg.svz = 0.722260103174;

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
    msg.setTimeStamp(0.667415244535);
    msg.setSource(238U);
    msg.setSourceEntity(190U);
    msg.setDestination(33549U);
    msg.setDestinationEntity(76U);
    msg.plan_id.assign("QVFVHGBUZNAOEJHBNRBAUFPJPNBYVGBYAHOZOQCTSIELWKCFLLOTLLADYVWMFMQXPDMNUDNERIMFRYSTSSJCCXNPKKLPVUGTSCTCNWWZQQDMWXXFDPHIBJHIAKHBYFURW");
    msg.type = 177U;
    msg.properties = 33U;
    msg.durations.assign("ZJUVENXQGSCBJCYCDHASKSSXWHAFONMTBQPUTMLUTBPXYPVRONFKZTRWZLVDJCFTIWHBTOOHARYGOECDMBKZPBAKIFGRQGJP");
    msg.distances.assign("AXMBLUDCPTYYBRFRSDGHLQXBPQOXNAUCSYUEIAMMOGFPWCGJELPVVKKWWZVYWTOUICQCZNROXIZXJOOWUQFVBGDHCXNTTQLZMAIGKYJHRBRPYRDSCDZLPYKLQAQPXWKLYKSEMMOOISTQEJFNOZUHTUQXCEDLNJX");
    msg.actions.assign("IJZTLWPQNZUEKACMKBTBFDECGBUYGHYMIAXVWCXACIOBMRSGXILPJYSTDQDFOMCICQHHLSDPZPLVKWCLSSNVGVWUQMQWKMTFJHHEFNIHBXWEQGTHPNISLDXRPG");
    msg.fuel.assign("MOUJISWNJOXHAPKSGAQTWWQRFZZNBBTOCHKPDALAMJOLBQNPPSDKIVMCQMDGBCVXZYYULXDFCARKWKUTCYOERZZ");

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
    msg.setTimeStamp(0.663100506508);
    msg.setSource(43343U);
    msg.setSourceEntity(132U);
    msg.setDestination(46514U);
    msg.setDestinationEntity(185U);
    msg.plan_id.assign("DCAITADWLPBYFLOBKVYQOVREFBYKKAZHYDLJIILGKOUDYRTNEXADMIKPBHNGHKZCXBGPXNPJMWQENBIMJZDACMKFROZGTFJFUSAXYZTHWARIXVPSWYSSOFIFEUOFFMJYQBGGJACDCWHMQKHHXWGNMVVHJSKMQTBDUVTCZVXNZGYODUMGABNFWRYNWBPXLGRKULNNVVUTTECLQPHJEQIEQQCROSRXAWSSTTRRSZCEQUPJCLWPZL");
    msg.type = 20U;
    msg.properties = 231U;
    msg.durations.assign("YYHTURDTFSOCWQOZFUOXPLZWKVUMRDCGPUNCCKMCIQNAOKQIRMZWIQXFZNMMSAFHQZKUTSFLIJTBLZBPLSADLCATXURKVVMQXSJMEYNGTSHPGJIOSENPIDEQIBAHPTKSXSZ");
    msg.distances.assign("GVRHUDTHFZQZEBZZRWUFKAHOFEMQFEOUXCTQAVHTDSNONPTCCRHRLAXUQGWSCJZVYEYBHFDRMAXSUUBOKPPIYEVUMJHLPUOHCBUWWKWCCVBHEGOYDJNXWLSBXNSKXTWBXMIMQBDZGMDNNQSTPKZAMAZLJPKRCKILXLPOVEGPSDQAWNYORVYUYJIMBIAGGYRAPAZSOYVQFNDIFICDNMPKCDQKELMFXQSTVIWGGRJFL");
    msg.actions.assign("KCIRTHASIXMECBKHOUKXAGIZZSSFCXABWHZGJLYCQXURYVTEQUSNGAQJSJHGYCIXRYBMIRKDSELMMPDBJIWTTNRUAOVLJOMAAIZWRXLJFMSBVUFLQFELGUDRNVEAVXZMVNFNCNCWYDBXHLOOKIJQXYOZETGWWPDYTWLOBCRHAFPOUIUKPMMQDYDQDTEVNCVPPJSOAUDXFHKHHKPJLNJFRBBLRGZZZHKKGDSVWG");
    msg.fuel.assign("DXICYDALCIGSRQAYNGOFFMTIDMOTKOCHRWLZJEIGPPJLKPPONFXDPCYSUATMRFVHMNTLBSCFJZYYBDZIWXXGHOMFBVAZBQZMVNCXR");

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
    msg.setTimeStamp(0.292652984772);
    msg.setSource(13467U);
    msg.setSourceEntity(20U);
    msg.setDestination(24561U);
    msg.setDestinationEntity(58U);
    msg.plan_id.assign("WPDUXSJEUIIOPGXDARZOCJEKMPZTNEGXSCVAWILUJLNIEMCAWPBPRGYDTJYIEGKYSFLVVYLFSOITSKVDKQAPNKZNXRLAFYLJQXZOIOHVTZDWNFMQHIAMRKJDEFHDHLTJXWNBVBSSEGPVSUNYYZDCCNPAOCRGWMFQSIWHGWUYORUUOBRQPXXFFKXTMMIAQFTGOBZMSJGQMJKCABHQWMRQKEQLPTKDONWECRNZYBCHTYBCGEUVBXZVJVB");
    msg.type = 202U;
    msg.properties = 112U;
    msg.durations.assign("HDRVRVPJEYRSAJDVCDEHPWFANXCKMNDLJFCJNQUKIULOTGLQTLVXSTXKDORFWKGNAWYJYXZGSLNBLOHOONNTDZZUCPIWMPKWAPWHMPSYMLEEUSRGMDIBCEXIOMFTSAAFJVPULNWFEZLBAFQZWYRUOGLQBRKOCBQSEKZEHJKJSMTQTAFQKEHBYCIVHMYIRVIDVPAJRXOGBOZCFMUHUWHNUEIZTYXUBWSDPJXPZNVTGGKXZYQXFY");
    msg.distances.assign("WIHZFIQXAZMETPEXTKLEISDVZSYYWGXNOYBMZUHGIGYGXEQIHJLBHVXFALBTRZAZJYFNQOFSVMCKKXWDXJQJBOMEIILBBOGBDEZBTSRAOGYUFICCRLMWHOWFJGJQREL");
    msg.actions.assign("FNHLKWUVMSLPKKQTPGUTDRMMAXQEUSIBJGNTDMIYJBEUOSTCEJULZYXHWBUNYZMKRUIXQQWGAFVCHYYSOITHGKUCHGVDFXGVJIBNAXSXOEDIXZPESDEFCCYBPJVNVASKBQYBMCKFWOTFLNNEQHCFTMOYJLHDWROPLZPDVLPFCAMAXSVOWZCZRRBPVIJEFTQGKXAZZFIPTRGYORZ");
    msg.fuel.assign("JXSFEGZJMTVZBFRNKBYWKTDIYHCPUIJTGUSQMHFHEOULRQVRQMGBNSYJPBYBCZENFNXXKVTSQNLCUHDCNVFMMWDEOPWFMOKBOAMYWOBYIUSEJZDFWNYTWLQSZDACUBQILAIIRSCXEOAXPJEKOXAGLEDGSZTALRPSJOVVMCVNIMZGWWIJFXKTULLIDBPRPAHMXQGKYFBVXJODRHRULEQ");

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
    msg.setTimeStamp(0.543735752399);
    msg.setSource(55686U);
    msg.setSourceEntity(249U);
    msg.setDestination(56767U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.610385913621;
    msg.lon = 0.11165081062;
    msg.depth = 0.30093434034;
    msg.roll = 0.826959533476;
    msg.pitch = 0.195486664729;
    msg.yaw = 0.150728895584;
    msg.rcp_time = 0.241525410974;
    msg.sid.assign("KGTCLONLSIGYSPHMIZCSYRREGRWZSOICNGIRIMXETASQXMGEYYGUXVYESBBOHKOXTRCXBMVP");
    msg.s_type = 93U;

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
    msg.setTimeStamp(0.0451522883355);
    msg.setSource(38987U);
    msg.setSourceEntity(13U);
    msg.setDestination(10250U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.860561055994;
    msg.lon = 0.0194279164026;
    msg.depth = 0.0460724107727;
    msg.roll = 0.591666064067;
    msg.pitch = 0.913545980595;
    msg.yaw = 0.0649032220385;
    msg.rcp_time = 0.60063852454;
    msg.sid.assign("NBSYHLVQXNDBXNYLMOVSYNLDXCZKODCKULSHUDWGKAZZGBOQEGTWQJBMXSEOKPGAJGNVUHQDZPHCMFYVPKVJDKHWREYNPBAHJLCKOAUJWZMORUUDTUUKBFTHEPGCHMVVSRFPCQAXFENBSDCAVGFIGIJPTZFXXRIXRJXGPIIBQ");
    msg.s_type = 237U;

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
    msg.setTimeStamp(0.0502752034697);
    msg.setSource(60200U);
    msg.setSourceEntity(166U);
    msg.setDestination(42437U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.823961357661;
    msg.lon = 0.916866700713;
    msg.depth = 0.564617464541;
    msg.roll = 0.956127660787;
    msg.pitch = 0.277959952039;
    msg.yaw = 0.17587595318;
    msg.rcp_time = 0.608988257902;
    msg.sid.assign("WZSTYGNLQFE");
    msg.s_type = 128U;

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
    msg.setTimeStamp(0.507987637151);
    msg.setSource(53261U);
    msg.setSourceEntity(102U);
    msg.setDestination(47601U);
    msg.setDestinationEntity(18U);
    msg.id.assign("NGDNINSBLWETXGYYVLACEKKNKNVBVBMIDHAMDEHEQQUWWOXVKSDXHVYESWJOOSXAUAWCZSIZQFQYLQPEBNELWAICGXMTFTIURUKNFSIPHVXDDMRRHZZUMBRRTROOKCOFQYZVZHJWKPYMOQZMBPOJEVDTCBFKELTGLQCJUPHZCSBJSPBZILXGJMFUMLQTAYUVPGADMRWHWXKKGDAX");
    msg.sensor_class.assign("HTKSJFMRVERXWBPRYOYHURBUJJIBWOKHMBLWRZLWICFSMBNYLGJWDDOLDUJWTQPIXEYCMEGGPZUZAFXPXCOOVHDYINBJSCZVKLDKAYCHTMRQEEYXMOBMFFULJQSRFNSGXSSQUDKHLXCQZZWTGJUGFQ");
    msg.lat = 0.953689505279;
    msg.lon = 0.315691072782;
    msg.alt = 0.18744555488;
    msg.heading = 0.181152024649;
    msg.data.assign("WGKRJQKIBWVBNIARQXQMSSWPIJCANNHNSTPFKDOMBKRILUHHHADXHONTSZDRLGXTEYDZYGLACCYOVPMIEDKBPVJIDEUFUFMBJWSEPPKBMIJMAIYZSQGZATUDGBLYNFLCPYWJNQORNLHVGQIYXHTOJFTOEJEMZFLNCCXNDIVLRXVERJVFKDUKWHXSFKMSAUJXRHAPVFUTGSZMOAMYYBLPBZEWLXWRUVZTKU");

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
    msg.setTimeStamp(0.00777910175744);
    msg.setSource(29765U);
    msg.setSourceEntity(85U);
    msg.setDestination(5157U);
    msg.setDestinationEntity(106U);
    msg.id.assign("YOUYTEXGDBSSWWEYNQUEICOKALMQWVGHFCOBIPUAEPCPTQXGFRJUPEQFFFYIMMXGVWMJPOBZWSRAPBDQUXKDAYALGSLAEGFDLHDZBIOYKWVXIAHNFVQHMWRDQKRGJNASNHOAWBCMZGZPIUYYDUEJSOWUXJLVZHSGPBRQKJREHQVUZDCHSKLENMXYZCOVTJTRIJPVNKIVLJLWCCOGBZTKXMOTKJLZTXXFIEBCNTASQIVPRZCNNDUFRTTHKYMN");
    msg.sensor_class.assign("PGZFEHLNTMUPMFABPPCUXCKHXBSOCRQDVJHIDTGZSMKKKJBGCYEOLRGVISLPXITFGXGDQSJIQCUYLEDTWRNIEYNTGOLAHQHJMDQDXHKIZACZFUGCVWLNVJXLQBYHNAVWADWFWIOSVSEEKIXCRKYAJLBMCIV");
    msg.lat = 0.0185486972795;
    msg.lon = 0.0787087948088;
    msg.alt = 0.292959512405;
    msg.heading = 0.509482546772;
    msg.data.assign("CZZLGWLLGSPYSYFKJIONODWQEXIVBKHFXBBRURYCHBTMSYTUIJBKCNXHBLFTDOESBZKUZPELAQPKNIQHPHCHTATFWHGJXITIPLTVRIMKGXUYONDCIKVKCRNQDEKQOALQQFEPMAYLBUDTVXAEOUPDTJVRDXFVYHAZVRJNCJZRFNJUMZROAYZPVWGWQPMWWGQECLGWEQGVNDZFOIW");

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
    msg.setTimeStamp(0.0786480080746);
    msg.setSource(64918U);
    msg.setSourceEntity(55U);
    msg.setDestination(29839U);
    msg.setDestinationEntity(78U);
    msg.id.assign("CWSREQSJBECCOZFGYBQETKHLNMUYTDMMBUOWUTDRGVHQXAH");
    msg.sensor_class.assign("OJWAUNUCCABKRQMWEADTERV");
    msg.lat = 0.363928923032;
    msg.lon = 0.460247581943;
    msg.alt = 0.562372794164;
    msg.heading = 0.379579168938;
    msg.data.assign("YQXOTMOBUQEFYMTDEDKRHWENSCXLYUHPTCUHNPSSPCNGHJHCNJVAALVJREZBIHRGZQRUDSEXOAKFEVPPMRXWCAQKYHIFUSCHRZWYWRNNKLYGFGUJKAQXAWUWQPIMLFOWXIYNQOMBJLHVBOZKXTZGSXEPISYCLKGMPJJPEDIQBTLJVMIKZFEFMJXNRYWVC");

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
    msg.setTimeStamp(0.604135386053);
    msg.setSource(6688U);
    msg.setSourceEntity(53U);
    msg.setDestination(27924U);
    msg.setDestinationEntity(56U);
    msg.id.assign("KAQZMSPMYBOMHZQVZWGBAEGTJHCPRCLFHEPXVLEJLJORMLWTQPWBCOIUMKDVHUUUQXOEXUJWNIDFTIMFIBOYQKWKERLYIRKCITDSRONSMSNKBZDTABCFEFHVUSZXYZZHVNWKIGLUJXBANSQIQRGNICYAHZLKNTTACGS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SBDYRAQVUHIEKHGPZFKFMGNOVQMKANWSVOJLIHZGCMFJOLZFUXQZKOEWTXAB");
    tmp_msg_0.feature_type = 113U;
    tmp_msg_0.rgb_red = 112U;
    tmp_msg_0.rgb_green = 158U;
    tmp_msg_0.rgb_blue = 180U;
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
    msg.setTimeStamp(0.398406476152);
    msg.setSource(17098U);
    msg.setSourceEntity(214U);
    msg.setDestination(26482U);
    msg.setDestinationEntity(166U);
    msg.id.assign("WKFHMQEUGANAFOQDLLASRZYDRQQGQQUFOFHGCZMRLPRJOZTEYBXYSIZMWONCKPNXIBENRZLSEMNTTVYWBTGLHTVJPIQOUKILAPX");

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
    msg.setTimeStamp(0.0394517467413);
    msg.setSource(30671U);
    msg.setSourceEntity(16U);
    msg.setDestination(10787U);
    msg.setDestinationEntity(122U);
    msg.id.assign("KKRNCAFPRHMQEWJQGEMJJONXXQJSHHVSHZNRMTVSIZVNKMGGNPLXFKRUNGJGSVMSKVOXIYFVLJUVBDAETWISGDZBJEGIHBSICLUPBTIAKIBIBLWJQWCSFUEQHNZFUTETDPZQNTGEWLOIVEOYYXHTYYCUJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RAOAQWDEGJEFEKNPIGJVUFPOOKQJTTZZTBYPRHPWKVIUGODUFRQXSTJYSMOSUCOZLBOWXWODQEPATHKHGDLHQZTVQLRAAIXDCKFRFXDFBANIHVJAN");
    tmp_msg_0.feature_type = 112U;
    tmp_msg_0.rgb_red = 75U;
    tmp_msg_0.rgb_green = 118U;
    tmp_msg_0.rgb_blue = 254U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.353562989347;
    tmp_tmp_msg_0_0.lon = 0.656791945559;
    tmp_tmp_msg_0_0.alt = 0.185916060457;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.0246618856975);
    msg.setSource(45070U);
    msg.setSourceEntity(56U);
    msg.setDestination(29073U);
    msg.setDestinationEntity(228U);
    msg.id.assign("ZBLNIHPYMPZNKCMAIOQZYHMHMXEVELGQUJXQEITNJPHNJPMUKNNECFRSKYQLRUSEKJHWKEJAIFOFIAXCTR");
    msg.feature_type = 198U;
    msg.rgb_red = 223U;
    msg.rgb_green = 128U;
    msg.rgb_blue = 67U;

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
    msg.setTimeStamp(0.394502406835);
    msg.setSource(8505U);
    msg.setSourceEntity(146U);
    msg.setDestination(12944U);
    msg.setDestinationEntity(124U);
    msg.id.assign("BRYNJEDDRIWKZQVJTORGKAQOIZFSNNHAEABWVXTHPSPUMJVAJQPYITHIWKUBHEZXIXEMYUVAIMIMICNODKFVZSHFSJLPXJYTLTEPNHGTFDZTGYOCKIXOOPHRCKSWKCZNXVLJQWZRUZDNLUORLVOCYHF");
    msg.feature_type = 42U;
    msg.rgb_red = 220U;
    msg.rgb_green = 110U;
    msg.rgb_blue = 111U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.902619191229;
    tmp_msg_0.lon = 0.573306619193;
    tmp_msg_0.alt = 0.911343821438;
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
    msg.setTimeStamp(0.601010848128);
    msg.setSource(58224U);
    msg.setSourceEntity(144U);
    msg.setDestination(36842U);
    msg.setDestinationEntity(36U);
    msg.id.assign("ANRQDJBRZFSEVYJNLTOOQVHAPFCLTFEBPJXHXVXMVWQGHWHBAIKNCIWRNOZBURGIJPLGVIPMVOUPAYIJWYGVHASJMBGDNMVKTKZ");
    msg.feature_type = 52U;
    msg.rgb_red = 230U;
    msg.rgb_green = 17U;
    msg.rgb_blue = 17U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.122398063569;
    tmp_msg_0.lon = 0.430182756957;
    tmp_msg_0.alt = 0.842839684425;
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
    msg.setTimeStamp(0.91151267322);
    msg.setSource(15824U);
    msg.setSourceEntity(248U);
    msg.setDestination(30761U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.886846590706;
    msg.lon = 0.870387705713;
    msg.alt = 0.739318093143;

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
    msg.setTimeStamp(0.47806773736);
    msg.setSource(37962U);
    msg.setSourceEntity(21U);
    msg.setDestination(20534U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.495263601979;
    msg.lon = 0.427301600591;
    msg.alt = 0.117460754292;

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
    msg.setTimeStamp(0.677435054611);
    msg.setSource(38781U);
    msg.setSourceEntity(75U);
    msg.setDestination(47965U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.667130052654;
    msg.lon = 0.435099116631;
    msg.alt = 0.153967298974;

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
    msg.setTimeStamp(0.640004168833);
    msg.setSource(14460U);
    msg.setSourceEntity(202U);
    msg.setDestination(33245U);
    msg.setDestinationEntity(27U);
    msg.type = 63U;
    msg.id.assign("BANAPUORGTGACMVFTLXEMDXOFWLWTLJTQUNIUMYVJZTCZSJSUVLXYMHPXNRSBFCCQJELOMDBQQZQVQKTWFCPIZKIAGJMZRCYYPZHNLPRQEVNUVMEFWNTIHZBAFMVWDIHLEKIWYIPOOQGPBKLRQJHLCXDTQJULUVEKDOYAWSRWONYRDSCSTHEOHFWTPHJSRXZGDIFMNSRBZHBVRPXNDGP");
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 55U;
    tmp_msg_0.reason = 192U;
    tmp_msg_0.value = 0.418921357653;
    tmp_msg_0.timestep = 0.503787892986;
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
    msg.setTimeStamp(0.689651257292);
    msg.setSource(29222U);
    msg.setSourceEntity(135U);
    msg.setDestination(33153U);
    msg.setDestinationEntity(43U);
    msg.type = 0U;
    msg.id.assign("JQQJRYBPFICATFBOVAHASPPQBLDKWHPELBNZCYYOTIBBMFPOUKVCVJNGOQGWCHKARSHRLKEJVHDDEMSSPOZGWLUJAVVGHMGLUCIPQUJIYJAZPGKCCSWTXWVXPTANQAIRZWEOTYVJFODMWYWUKIINQSAEBIMNKWXLCIGQNFXXYZHSHZTC");
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = -90;
    tmp_msg_0.value = -2138356593;
    tmp_msg_0.gain = 183U;
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
    msg.setTimeStamp(0.322961035695);
    msg.setSource(35276U);
    msg.setSourceEntity(141U);
    msg.setDestination(24694U);
    msg.setDestinationEntity(102U);
    msg.type = 148U;
    msg.id.assign("HVTHNJKWXTAEYQQOEPXOGUJUHGKUZNRGRMPRDNMVRTROJKTBASUWIFIBTNBLMJZIVEPOVAZKHOHWKADNIIEEBQJTGADLPYODDGSZCSXDEHPG");
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 3913U;
    tmp_msg_0.type = 242U;
    tmp_msg_0.utc_year = 7356U;
    tmp_msg_0.utc_month = 81U;
    tmp_msg_0.utc_day = 42U;
    tmp_msg_0.utc_time = 0.999462049549;
    tmp_msg_0.lat = 0.0575129086468;
    tmp_msg_0.lon = 0.660112355677;
    tmp_msg_0.height = 0.703716851086;
    tmp_msg_0.satellites = 194U;
    tmp_msg_0.cog = 0.563179289735;
    tmp_msg_0.sog = 0.976789074483;
    tmp_msg_0.hdop = 0.678194299466;
    tmp_msg_0.vdop = 0.541080726813;
    tmp_msg_0.hacc = 0.0511508778393;
    tmp_msg_0.vacc = 0.113302260556;
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
    msg.setTimeStamp(0.971105184478);
    msg.setSource(36446U);
    msg.setSourceEntity(127U);
    msg.setDestination(5392U);
    msg.setDestinationEntity(13U);
    msg.id.assign("QDVXPYLIEYHAHWBNKMHNSBRASPMWPGCLGECMDEHYCESZTLQDUQQAVBCOPNRBZAZOHHXSFROECEUJRUYEMAMFTIBUFGCIOYTTMUHDHVAJLDJFKGAIKJKTFBSYBQZPVGGXRUXOSFKKZGPJUWQUKZVSTPLRGZRHDAYUSOXCOHDMFLIXTTRNNUNINGKQPWJTVVJTYOZLEZAWPFWPVNXEJFKCVORYQJNYIWQCXIFSWAJQBIRNIGWD");
    msg.callsign.assign("LMCJYTKPWAQZSRNCFRELTHHAARGOENXDUQNYZAIBCMZMFOBBRLUNYNOSXWLZJCDZAGSLBJPJBVGEXHJNCVWFFHGXINVVOMBIWZFTPJVTSIFHQSKEARZBPNGDCYEHKXOEPYESSSDKVKHJRUZPTDBKTLHRAZTUHDGEVMRGWAOMYPOMBIVGXLISWCQMIFXSYKROYGDNUJQPCTOKIHFKYD");
    msg.name.assign("OJCNTXVNCAYSWQONMVMHFKAYJBYVWISPJDAVXRFKIYIRFIYMMKDPLIHLHWPNZKNEHVUFWFZPPGLCELDCKANYSMGLMBBRTHQVXXDMAASICNFQAJHTOOUSXLTPOJ");
    msg.type_and_cargo = 225U;
    msg.a = 0.38112114759;
    msg.b = 0.626509701274;
    msg.c = 0.399444491235;
    msg.d = 0.735935007692;

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
    msg.setTimeStamp(0.0532312108058);
    msg.setSource(57330U);
    msg.setSourceEntity(169U);
    msg.setDestination(61087U);
    msg.setDestinationEntity(114U);
    msg.id.assign("IKNBUFTNRHNNZJSOVEXLKROZOVMSJNFONGKGNZWCYWJFSCZJVDVWMDCXDUILDBLYRPFGTBAZMEWKEXBCMQMNDYPQXA");
    msg.callsign.assign("OALJSVRLWGLCCEUGXLOQKFBNXWZRQUHIGMFIYDXTQDMKDISOHLKGMDJUUYWGILDIHLCYAJRUGZJATYCZZRVCHSMPQTNSKJNVYHEOPLQTPFRLSTGQBIXRVRCLNRCBJOYUDBSXBHKAOWZBAEMEKTFNFAYQKNKWJYTEQNQBSGAWWABDHA");
    msg.name.assign("DFSPTMGWMTIYWZKLQNVWWBGIKDCNCUXRYSKMJGXPRYMAVCDRELDNTHHLXLZOYAIVNBZDQNHSVJZHTOFKAOKNFJQLC");
    msg.type_and_cargo = 166U;
    msg.a = 0.930980874224;
    msg.b = 0.891159132147;
    msg.c = 0.491452597276;
    msg.d = 0.791753880869;

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
    msg.setTimeStamp(0.614839888178);
    msg.setSource(46616U);
    msg.setSourceEntity(136U);
    msg.setDestination(5568U);
    msg.setDestinationEntity(69U);
    msg.id.assign("XBVMVHVMCHDYJNTWOQYQZRKOBIUIXPLKVXDTESIPKOVQHFTLDOYLOWCEVIUEGDMJCOFRPYASXMZBPYZKASMTFLUIKUQJDMDFWSSMLUTBSBEJSGPFGRYCWYGCBTIPMALZHYUTZCUXKLHPOQLNANGGZBCMQFWAPDNKNVAAQFUEWITGCHAXZBOVQPZJMWFGFVOSEYUEXJCPXTWNWYVGDNEZHIRTGRNXJCDQRJNBHFKRZXDKSRJLEWNUO");
    msg.callsign.assign("HGUFJSXILFSTOLGAXEILQT");
    msg.name.assign("UDQOMVFVHHCKUHLDIOFASJUWJEZJKRALUTJHHXARJOIZSGXIWHSWTBDHWSTQSQQCXXNEVMBLWJCNBZTGUNYJXIIUGYCZIDNNAKTFVQQASJYDDSOELCYWCJKMKWEUVWLYEBHMFTYROPQPNDFECMSMPBBZAGTZDAFDCQARXPIGOFH");
    msg.type_and_cargo = 131U;
    msg.a = 0.115845704071;
    msg.b = 0.0244489737453;
    msg.c = 0.756591395068;
    msg.d = 0.881411254916;

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
    msg.setTimeStamp(0.804890802057);
    msg.setSource(20236U);
    msg.setSourceEntity(139U);
    msg.setDestination(40618U);
    msg.setDestinationEntity(113U);
    msg.localname.assign("KEVKSBGAJFRGYFPVNNQOOBHCERVNTIQRTJWTKMZBUSILPDFFVMNXYYKJWASOXBOQKEBXKLHXQYYTASZUIETBFSWNUVWUQPZDWUZTOCAIL");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("EQCVUZKCDMMVTFRSJKYUVEPBMURWXHQTHSCXKQJYPTPODZIAZRMUMDZBAXZEHHGBGNSWNGONA");
    tmp_msg_0.sys_type = 228U;
    tmp_msg_0.owner = 49154U;
    tmp_msg_0.lat = 0.77408086967;
    tmp_msg_0.lon = 0.62482163542;
    tmp_msg_0.height = 0.555063304908;
    tmp_msg_0.services.assign("ISKAWMOVWDHLNPLBQBTFYCBPPNWJQJZSUUKUVOJAZECJHXRBTBRMFQLLYMIXIYRXVROKXHWCYYFKICNJPYPZLDTAVBKGTDCXVGPFELYHLYETRPDZEQFWTXHEJIRIEZWVPDZIHOSOSCVOHNHKGQZDUKCHOJUSDJTPUHBUNLKRNYBMGGZMUJCSIBTWFEFWMAPMGQNEQKXLVRTVNQBFUKSDZJQFTEAAMFAYEZILSA");
    msg.links.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.818647911358);
    msg.setSource(62490U);
    msg.setSourceEntity(182U);
    msg.setDestination(1091U);
    msg.setDestinationEntity(166U);
    msg.localname.assign("PSBINKSJCAOFYDCIPTRFUPHTLADCKVUMDUZKXNTGRXKXUSHVMWWWXWLTKFNCSLOLBUSQEODDIFNMRHGPZMZKZVKTDPOMOUJFVRIIJSJLZTMGPY");

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
    msg.setTimeStamp(0.426005776885);
    msg.setSource(39962U);
    msg.setSourceEntity(229U);
    msg.setDestination(11574U);
    msg.setDestinationEntity(74U);
    msg.localname.assign("JJYSLJTEJVIZXDZRDJCIVPHUGJSMVEXRCMUNVMGCFLUBIXAZOVLJUUFKBLSHVWIFIBYWQBDARDKALOYQJYMTNAVOEBRKOATTWCMKKDVPQUJFYOKIADYGHVRUQOOGNFDWTMNGAOFCZQZHZH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DUNHHHZFZMWGROSMPPUJUBUYWQIKXZPLWPOPYXDOIRTJOWMYAGBTYTHJKPXJVRAQDTSUFEFUZDYEVYVCLMBTOALXVMFABMDCWFECDHKOENXCLQEKOCQLKIXKXSZVYQRNRBQOXMGNDSRASMCT");
    tmp_msg_0.sys_type = 182U;
    tmp_msg_0.owner = 49430U;
    tmp_msg_0.lat = 0.0201862859491;
    tmp_msg_0.lon = 0.0798263212452;
    tmp_msg_0.height = 0.693237869051;
    tmp_msg_0.services.assign("YFYBZYJSCPEKFJYTGGZXZUEPJTBOWKTVOQJQGWPFWBKIVCRCCLPFMMFPECUIFNLSSYIDHYOAKLUSXMEVWFAZTRPKXQXADHFNWESHPHUJKOMCOZVGTMZGDWNYFNTDHAHNCAQKKEZSBORKISAAUBHXWQLTIRFSTLRGPDMAMWGTJDQUDZOMIOJVVNRSLULLJGZBBQHCAIJNPVQMOHUERDKNDMERIPVXCLDIGNXAZXWXETBXSQUQ");
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
    msg.setTimeStamp(0.354339426801);
    msg.setSource(3825U);
    msg.setSourceEntity(93U);
    msg.setDestination(33130U);
    msg.setDestinationEntity(206U);
    msg.timeline.assign("TMSTPGAHXAGPBOUQYCNMTTIZIMQVJBXZJLREZWXHYBNYAMTIW");
    msg.predicate.assign("VHMJEHWOVVMCMUJYUMNEXFCZBILAGYCAIDKAOBQDOLDTKMPCXJFWZTNJSQFNUXCRUNPQKEZYIGSRFREEUIRIFTQLFWIBNFZEVQBKKHWTTQONDHOWVZOMNMLPGYCCQZTHHCFRRIODBGSLPSDLKKPLMSXBAINTOKEGHXBQAXQXRGLTVGOPYJAWCTLXRAVZSUVBED");
    msg.attributes.assign("BUGWAAAILYMWVGIZVMR");

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
    msg.setTimeStamp(0.750162186532);
    msg.setSource(33158U);
    msg.setSourceEntity(38U);
    msg.setDestination(40326U);
    msg.setDestinationEntity(58U);
    msg.timeline.assign("XFWHTWJTFTPHYJLIPYGQGFAEAAWUHPCZSLLDMHLDWMFQMUCRKVAOSNGVIDDTUOCANDZTNPKZEZVIWBYODPQGKTWHWVMEZYBTKOBVKXYBE");
    msg.predicate.assign("XTBDIIEQSLROVSGGWRLMNP");
    msg.attributes.assign("OBGKVJHLWZXTFXKUFETRGQHWTVSYCFRVMECTJNUCYXFFTOLKNRSDVROHOIIINUMEKCFJQKZMBNNDLMGBQWLJEQNSYUQEKLDUHBHLCFJKEIGPCIXXDABZMTIZWACSY");

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
    msg.setTimeStamp(0.79345626856);
    msg.setSource(61409U);
    msg.setSourceEntity(126U);
    msg.setDestination(23808U);
    msg.setDestinationEntity(74U);
    msg.timeline.assign("FHVNEMCOPXTLULISBHZARGYYMZZSOYAJRBUGWRMQHFRUOKTGLVWVDLYXSUWNEATHHIENYDJMIAXJIOVCWJHQNYNICCJXPCDTPQEKTUVFSTFJUQKSOZPRBQBMFCDGPCGWMPUCRKLNHKSOZVRXBXIMBBQGTEDWWLCKQNKIFLYZJKYBJPJIMSHWCETDILZGFSGEPEAUGMZVFANBBLFXUDXDNVROASHQZXKHKTAUROYPGXLJIWDYVZQOWSDFN");
    msg.predicate.assign("MHGKTZNMESSEXEDOHSYLXEKWWUOMYPUPWGXTJAXFZIQMUYWNQUOSGLHJVSWBCPWUGAPLOGPCBLSFDFCQVYVKZCWOQFEBGRFTWQLTZJDXZZRILBXRTXKIEOYHTASKILNEIZECSN");
    msg.attributes.assign("ETWNDFZSUMBXLVUIRXUNWIAPHLJCQWDIKRSZQBVZLGPGLVGMOFXAMRQQQWSPRYAPWMGSNMKFBPPYKPYZDCANCHGLERQRCGZPBLUCIWVJKNJWVMEGKCDIADCYVNTOYFEFJHSJOZNJEGJIIKGHEQZLUYAQHSRBCOZABIOBUNVCTJXTTGCMJFEBMLTK");

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
    msg.setTimeStamp(0.769310881621);
    msg.setSource(21198U);
    msg.setSourceEntity(118U);
    msg.setDestination(1851U);
    msg.setDestinationEntity(22U);
    msg.command = 125U;
    msg.goal_id.assign("YSCZCNPMHHZQONQOXIGXXOKLGGEUZZVUMNLPWCAXGZWKCPNZOJRMFPJRSGYDMDQVDAQBNBEETGRBEHTPFSGJFHVJFCNXSAZSJUYOKBCRQZXACXDRJVYDEQGEHDIMUKBVMAIITVSYIMXBKRXRQLTJALVOHBWHRPDTFLWFFNGUBYYCJYKOHTDTBOOKMPRLQRIFLOYPKKTLMWUWCAQSQADGVLBV");
    msg.goal_xml.assign("DRUNEPXPVWLQMCQXLHALMEPOWSYWIVRZHPYPCDHIFQXMTOJJWPOYW");

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
    msg.setTimeStamp(0.424292363802);
    msg.setSource(62218U);
    msg.setSourceEntity(70U);
    msg.setDestination(51683U);
    msg.setDestinationEntity(50U);
    msg.command = 237U;
    msg.goal_id.assign("UEFCFMWWPBSAVBZQRXIPPTHKCAYWJEXNWSGEJSNHLOYJIHVDGAPEMLMYTGCMFIWAHYRVEHCRBFSTZQKIBXUZVQWZJVZHMTCUQSGWRNPGDDIKMPAFUSQIDCKDLPGQEKKTWEOJGNKNUTXUBBJRMXRFFDFIOZLTVJXYOZVEOGPDRAZMTVSTYBKDODCYNXWAXHNYLIBOJPMNHQJRSERODBGLRIFTQCEOYWLYVJBQA");
    msg.goal_xml.assign("NVMIZGQEGDFGJAAHIHYTZKBTCNVDPMSVXPBLLXWYMVVNNWEGJPLGKTJDSPLRFSKUVSMRPHNRLWWYQTUCCVPZKKHW");

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
    msg.setTimeStamp(0.923777319417);
    msg.setSource(64227U);
    msg.setSourceEntity(190U);
    msg.setDestination(35119U);
    msg.setDestinationEntity(215U);
    msg.command = 74U;
    msg.goal_id.assign("UXNPSMMIOUBLOWXHIWRTGLSVUIQXQZPOLTRNENFKQRWRNKTEODMEJXXXZPWCWRHUOVNDNHHZJFLJHIFQMCYGPGBIZIAFKUMHECVMTSZXEWBTCBUJLGBNRUCVDSKOQWIRVDFJHTC");
    msg.goal_xml.assign("EZLXSAELSLMGSRYUUKDJEWFZQVDFOHHYOAEYQQMGOXULUGHGPA");

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
    msg.setTimeStamp(0.365131251425);
    msg.setSource(33091U);
    msg.setSourceEntity(16U);
    msg.setDestination(25222U);
    msg.setDestinationEntity(52U);
    msg.op = 109U;
    msg.goal_id.assign("XHTQMXZHQJFGXXZSOPSREECAKYZETWNJVVADMQNLUJFRYIEBMGSFBFDPUHQIWLOVLEUFWWVGWTXKQNDYBCAYBNGXMIHXAWAJRCHPRSCQDWJRZVXXPMVFKVHGO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AFJHMKNGOBECIXJPZUCWZOUPCRFA");
    tmp_msg_0.predicate.assign("WEOPFZIZSUZGCUYELOSJSWOKNAWWANJMHFXORUQKGHWZMEFRFIQCTUSFBITAKBDFVLYFXOVNLSHFAORRSJYGVMMCQIOCCVTPDDXYBMNPTNEUBQPRXTSPILLIMJDZZJKLRBHRIZHNKCDMQZVKAQMXAXGCHYSQOTTEGYKHJZGESNUSPWLGBJYBHPTGMYXUTYUPELAKFVVYDOJNBVDFEANTZWMPAWJLWVLAJHINEKDOGPVDD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NIUHNVZTCLDPQMBEZRNLXDXNGPDPSSMBPFEHRKJKAUYKWEZSTTAOIBRFHFDCJXNKZUCJXQWOHVLMJHYFQILVEEEBGOQPYGRTZZVGWYKSYWVGLYZDWGVSIINGXYUBCZHDXUPSZSRDSAAINXTWYJAGHMICBQYPCFUCQJQFBPWPRQUKARDAGWMVOZDCFEHMXBQLT");
    tmp_tmp_msg_0_0.attr_type = 195U;
    tmp_tmp_msg_0_0.min.assign("KBGRZTUIOILHFNDL");
    tmp_tmp_msg_0_0.max.assign("LVRBOIJWHPBYPLGUTOYMOVCNKRHYCWBFKHLXDHMNETRTZZZBBCIPDEBQLJWGGSFKSTAWVRGDNVJSIUXJPOIXFKQUAWNTNNEZVQCHZMEAVXVXPZZ");
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
    msg.setTimeStamp(0.900664311176);
    msg.setSource(43805U);
    msg.setSourceEntity(21U);
    msg.setDestination(16292U);
    msg.setDestinationEntity(138U);
    msg.op = 100U;
    msg.goal_id.assign("NUGFIYCUUDNCUOPZMGJHYEYXAISACFWTRMBDMKMZOBJFRHQVNIZGCSBHAWUYOQSSXDPTLQMRJIGRUUWPNKMYHQCNVETNWFYFBJDXYKDHMHWPGCGLJPFHEEQIRKRSBKAVKUOWTSFXUZOZCHIPTDBVVOQTSLAFYPXILUJINBZOQLKJBZELEJOCDGXJJANYZZNQEFEL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RVLCGGLBCRMIGKEGELXJKTAEUTUYVIMPDANYMHMJZLFEFQJQSVEGUBVHHWUZMZHAIWPSERKFQLAZCDHUREQGGTTNQJKPRIUIXCAEMEHFYFNZDYSAYJMWUCNFTDVZPRORCBYLMZQACSPYXXIHTLDBIOLZVHGXLKOQQTPIFOCDXWAKKYHHDJBROJDNXNBSXJSNWO");
    tmp_msg_0.predicate.assign("NGBZDMXHTDNRBIFKCWPUHLEKOQOHXSGGPHAGNVINHLIFVZYYIDNVWEFDWPTSJDPOTOZWTYHBXWYDEQFKQCBEUKDRKLGCUFQAPBVQHMMWTPNJBRQTDQBZCMWLIREQAHRLUVSXLYXNJLPXGMURYASZUVXCJFGJIEJKQSOKPRFXAJFHBWBCJSVSQYKTRVIAONMUYUSJMPVXAAT");
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
    msg.setTimeStamp(0.996226060899);
    msg.setSource(45885U);
    msg.setSourceEntity(89U);
    msg.setDestination(34927U);
    msg.setDestinationEntity(212U);
    msg.op = 59U;
    msg.goal_id.assign("FKKYPMTYXIPWJMZUORYAGKTWCTHYEJWAOBNQLMQVQZILILUGXWVILSEDTLFCGWQCPHVLEPNWQWOESYCTASZQXZRSACVAVNIYDLHE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("INIWCPEYTWBHAUSGIBLIZXRVOVOJCHTFNIKQVGEVLEMPVKUSYPDVLQDYLQMKBLXDGFXYPBADGLMZHMRRSRYNMZHKBOQOTXDHYKRCZOFTSDAQHNWRTLNZFMIZFJJSNDKRWXWKEJJHXGNFGJSZPSKNOJAAMZTFCLXCACEUTNXOETLXRWNBVAWDQYUOXWVDAEOPUJRCAVYTULZGHPUEKURBJIVCAWBIEEMSGBGQYUSQMPWQCIPB");
    tmp_msg_0.predicate.assign("RQJVPBYMQQLZFKOXINSLHFUHFUDXPBEQPZJDWMRMILZEAKOANBBWFAYVUDGKHWMSSLQTZIJYTZYFEQDKUFVUEENBGFPGVDXIONWMGOVSVQMWEJLNRDOYRVTICFRIERKCOSCXLJCNEZDYHMOHNXYSZCVOPYJNWAOCTLZCPHKZKMHWINGJNAGBUPUPLSIVPUARKXJOHBGKLMXXTTBRKAGABVFAISDJEYHRUWXDTZPTTMSAURXQGJQQESIGDCH");
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
    msg.setTimeStamp(0.467417788644);
    msg.setSource(40039U);
    msg.setSourceEntity(11U);
    msg.setDestination(19288U);
    msg.setDestinationEntity(183U);
    msg.name.assign("VJMHBLQVBOBOKEFFJFNALSRYJHVBPNWVZMRZHYAUFYPZAPAOOKCWVGYVWSQNOMHQBRLGDGJHXPKIQFKXC");
    msg.attr_type = 42U;
    msg.min.assign("MUNZZIVGKBTOXYAZXOCFBGGDFRTZJWUEB");
    msg.max.assign("AGXVEMUGJFCZKSKARJJYIAUNEHUYQAJVOABHDYSTYIO");

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
    msg.setTimeStamp(0.157482248168);
    msg.setSource(38633U);
    msg.setSourceEntity(121U);
    msg.setDestination(29631U);
    msg.setDestinationEntity(53U);
    msg.name.assign("TOXQCHNHEEGALKMLNKJUHYG");
    msg.attr_type = 83U;
    msg.min.assign("IKMLBEVOLPGTTIUOYYQTKARLVCPWELMAYZOHXDNLMOIIUTUEMGGNARAXNPEVBFXFSMKOVBPAZKCRDBQIQSRTJWZXUCHMSXWXEWUYVNDKMHHJOFAKXZDJLXFQEPBYVOVHTTNUGFMWLBEDPRQGHGQBAZ");
    msg.max.assign("LIMTYVZDLAKPMCNXFTORWNXONYVFEDTTBC");

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
    msg.setTimeStamp(0.974671957076);
    msg.setSource(29346U);
    msg.setSourceEntity(100U);
    msg.setDestination(61885U);
    msg.setDestinationEntity(219U);
    msg.name.assign("ZHRDZTZKHEGBWBNLXGNXBOLANLCMUNQTCRKHWTZZYVNICMBXTAJONELORZKRQHDMXAPFOAWCYRCXAAQIMYTKBWGGPIESMUIOKUOENLUFDNGEICLJGWWTMGNKHVFU");
    msg.attr_type = 213U;
    msg.min.assign("FSLQKUXRKCDSAKUIWTOQGJXMZQGGRINMFUS");
    msg.max.assign("BLJQUGWNNXMOWAHJSOVSNZNOAPYQWOIXPXNZZYYTUDBMASGBOKSNQRKCEZOCZUDICDDQKQYFLNRIMILRJBQFSWRLHVASXBRKNCNLCXJOUCEGJRTYYKLPORJQVTESELMHZEBPCHTFPWKRFTEGWZTAEFYDWVGVFDQWVYTIJCQDKTAXMGJUGRPHVOVUESFBHSUMIPZWTAGJJLXCXEQBBHUAMWMVTXLUIHLVIFY");

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
    msg.setTimeStamp(0.438000779347);
    msg.setSource(10439U);
    msg.setSourceEntity(215U);
    msg.setDestination(3567U);
    msg.setDestinationEntity(125U);
    msg.timeline.assign("IEKLQJPBETEXCRJPPJRDKMONBNQICOVSSCAGWVZJNSBLREDZTXUHITGOVCXLZXYXHLQFIVFERYFEYYCWAKUKDXJSXPOVDGKHDTUWVDPMVAUIPVWEONSIZRCLCNFTWVHAIBLTXYINYESWRBGJZAGMNBDEUGLOTTLQIENUJYOMPTVZFGTMKPXO");
    msg.predicate.assign("ERHLUZUMCZISBMMIVGHRAAKYCOVATAFJYDXQXVKFTFLZHOJXSNERGNVNWSDIEHJGGOJXNTSOUSSFFYQQKTTPCNBAALKADDRTIOQLRIVDNQSJGXYHBVWTXBDBIBEKKAUFPIXUJVREYTMJWHJPWQWCZBPMWOKTVGZCLDZSTMPSLSRPGMPCPNACFROXGZHERORLEWQVWLYEOWLXHDVZFXNQMKUUJQIFHYUUWEZDKYYPUJKGCNL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TNKLMCRSAGHJEKCWZYNLGDKSYHGXGVJDIDXJODHZETSAVDPYNDAHLBYFPWLMQLOAVTCUTQDEEAXYAIVCYTAHQKSUSWKPUQBC");
    tmp_msg_0.attr_type = 223U;
    tmp_msg_0.min.assign("JXVBIIFMRSUERYIXVLRFUYKSGARXSEAHMWPXIMOYIDEYNYGPJQCCRPPUOJFFDKIFUGGWGHHLMSRRYXOHMVDMAEZKJTWPECFSYPSWANZONHDXSFZLPEKLWTVTDJJXGRLGHQHBOHHCKPZATVBBRUZLCJICTYXYNQQTCLGNNKLHIWTBKJUBQZQVTAAWX");
    tmp_msg_0.max.assign("UEWQFQRRHXHDRPXKQJQBNEFNCGHEK");
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
    msg.setTimeStamp(0.26483943991);
    msg.setSource(62988U);
    msg.setSourceEntity(94U);
    msg.setDestination(109U);
    msg.setDestinationEntity(227U);
    msg.timeline.assign("LRMOSGIQTOXMPXMADOOCEJGVXMGOUABTTBJFDVWOQZCQRKILFBEUWPUNKYWVMJGRSACVWYMLLLREENXUIINEPYKXQHZJGBFQCVGRMWVPUEHSTUQQRTVVCYKFAJZLAUMCVPZBMEYJZTWDLKYWCZFAYKBZBZWKTRCQNXSCWMDZSXKELDSBFPJPYQRVKDSHJSHSIFGAJOTBTFGTXKUCLPRNDJNAGHFONDBHHIEPIOADO");
    msg.predicate.assign("TMYUKGHBMRAEKONJZAJXUHLUBGUELGTZIDCWKAIRWNMBALVYMYXOGTBFRYSOQRIYIHZRVBVJILWWHEHWQKSVTQTEFENWESZFFBDXXGPJKKMCDXHXBKZDDOCLZSCXRWNHYQOSEIYUBFHPANLEYJTRZRVCCYNPISIRJBFUWLDNLBJGQQCPILVSQDVGPAHPDGXKZAMMDSKWCTQJOFXZFPZCROVLOJAVHNUNMGWMA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("VPEEOHHLPWGANTNYPUILDGMVFIMEKUMSAFQSXVCIJHJTDPLWFQTQWESIINCODXBIWOSZYOAWPQUGSNVMSGNJISKZKYPLUNUDOZTIMXCIICKRTGRQWLLNYXEZWJYJNDVZLMRBMXYNKCKLEXVYMZQQFRCKZLBTXEOUTKEDVOMFJHAOVEFLYAAXJWHGGNYBDGHXVPQHHJUBUZSOYSMAWQR");
    tmp_msg_0.attr_type = 211U;
    tmp_msg_0.min.assign("VTLFSFCWHZHVZQUPWWRKDTAAZXNSHJZHUJAABZIBUMBYDRRRKNNMAYIPGUSQMLMGNSIMLDZUSWMXNPBTPBTIYWRWWVTQPMJOIWZHTJHPJBBYXSVSFRYPJCUNAORGKLCNLOOVCKOOTKZFCUBLLJMEUDIZTFDVNYGGRGWDAHOKJQQSYCOQGQEICKCEVLKKYFIGDNPAXBJTXXWSIAECPXOKIGNMMLE");
    tmp_msg_0.max.assign("PSTEKCYQPHQHXIFPRV");
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
    msg.setTimeStamp(0.672840155442);
    msg.setSource(26694U);
    msg.setSourceEntity(231U);
    msg.setDestination(59777U);
    msg.setDestinationEntity(7U);
    msg.timeline.assign("NRPCGZCQYLIOVNUUTORHZEROFKPEHJULKKLQPCQAOPZPGWFDLJSSIKAKHAAHIDQTBKIYBGTEEEVDNDHDMXMIGKMEOVPJIOWWXRBSPQNZKXCFVXHJULFTRGCWLACBCSEDLAHWXYNSPKJTUFLVWMJRDSAXTVWGADMYEBHXZSBSJNWYVQNIJCYBCDUTKYYSQQVTEUMSVFWMOANRZG");
    msg.predicate.assign("OFTXHZWSGNEUTOEOULCDMGZPDSNJMPXJNVMPSYXMDACOJHUTLFWWSEHFWRZTTNNTYFUBEYNEYFDBAJSRFQRLCOZIJVBRAKTFGFGIKJPKUBYIWGRTWLAUMLHQR");

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
    msg.setTimeStamp(0.487943962735);
    msg.setSource(50230U);
    msg.setSourceEntity(60U);
    msg.setDestination(27446U);
    msg.setDestinationEntity(195U);
    msg.reactor.assign("POAEUCJXWSIPMTJMFWILCXDYBJOILQKGOKKUTAKQYOFCGZFNLOWPFOKNGHSR");

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
    msg.setTimeStamp(0.794854469681);
    msg.setSource(22223U);
    msg.setSourceEntity(37U);
    msg.setDestination(18077U);
    msg.setDestinationEntity(6U);
    msg.reactor.assign("LKWFGOQYBFWBTEODIRQQHDIHAMDWETPEFLEAMKWAYYHQHRSUOVVYVLMQHJUWNDLNLEWRSZAGNOXJYSQPZOWRBYCOEVBPOAPNYXZIULZTAKSJZDEXVXKTSHVLRAWOGEEUNQICKBTTPTLSOCPDCYPDURJZIWUKFRXBGSXNZUWQXKFHGFZFQJSZRINJBIZGDTFUMKSMVKVFTIBROE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OIXHGPMTDIFGRIKWOWHTWEJKTRNSSLINXUMZDTPJJSISAVTKGTEPENSTCDHQSEZQVKQEAVFONUDOZFHUCBREKBVMJXOXYABRZUNWXHVORLNECXBUFJQVGTMCKTGELPPWPLLQIYHRCJZMZMWJPMUBYIUYMORQGFYYIFAMHZDEFVEAWIYRDKAUZATCSFXJOFJS");
    tmp_msg_0.predicate.assign("QJEVJFWXAISMRFQPQPUGVKWFYPCTPHNPADEENFKDSNOSVBOBHYRKYUWMNOUONOUARTNRGBXQDJCEKQZUWYLHLUJLCJIVTBWRMCBABEZLVTNZMXODBMQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CEREZTOMCZDBJPYFBRZJUFWDUBRYWAJBVJWFJGGHNOBVPGUFIHPOSVGQTGASKJUTWSNDIASWKSXFXKXNMGQKRAAXFRZUFFBRXTRBNLECCVGQHTECPV");
    tmp_tmp_msg_0_0.attr_type = 15U;
    tmp_tmp_msg_0_0.min.assign("HJFUPLZUGMRLQBCETZCKOMOOIFYZRDABUKQMPYHODQIZAAXPLWVMDIKCMACEHGGBDUTXUCNFYJMUNYXIIHAHQVASWR");
    tmp_tmp_msg_0_0.max.assign("OYQLJLCZTXSGYHYFPNTAVYGCBMNNCICCIHKTMPLZASDEDFESRYRTQLPVBAMRYJDEKARDDESOVTFSHWMEKZBUTOCYJLDMUZQACWMFFBWYLVKUTXKBFLRMRXGQTHZJNGGIRLPUHAAOLWHOSUWWHIBOWSQFUOIUQPNDMNVJSIHBQJXAEXHPLTCEPDFQCUQGVNXJGXRBOAZTIEGANWZIKZWKEXIZVNXIVGKMCPFSVVO");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.336255145062);
    msg.setSource(51086U);
    msg.setSourceEntity(94U);
    msg.setDestination(51787U);
    msg.setDestinationEntity(168U);
    msg.reactor.assign("SXRELNPFSJJXATNARQWNWESZVHUQZCKJTEOILFYSKJONMEXJBTMCGVN");

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
    msg.setTimeStamp(0.659242033559);
    msg.setSource(50523U);
    msg.setSourceEntity(161U);
    msg.setDestination(30565U);
    msg.setDestinationEntity(17U);
    msg.topic.assign("FOCFDKEIXOTCNXERCHCSGTIFDD");
    msg.data.assign("ZTITVPIYPNFYPZCXBGITDMKKDSXQTWZLNSKSUSXEGXSYVCLAPTQLBZLVAZTWMNJJCLWVIHUEGJQOJABBTXOJKAWXFHEHRWCJIZWRDFUCNAKJYWCQUUSPUWBSYDNNIQB");

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
    msg.setTimeStamp(0.363671637547);
    msg.setSource(18906U);
    msg.setSourceEntity(168U);
    msg.setDestination(33029U);
    msg.setDestinationEntity(254U);
    msg.topic.assign("QASLGBKLPRGHUXDTJBAGVWHIUGWWEUIRYKCFYMKEWYFIKZJUJLHJTBBPZVNEKTPFTNTQXGMXUHQIZXLZOFLQNFBOBCYXDMHDRDUSLZCCTILVMUNVZDHLROMSYEQOCBWNPWVAJPWKTEKDRFCCDFSQZOINJTVGCNIAVMZKXFVPY");
    msg.data.assign("BDBWQXSVYUHKFTWJICYCMQKETRRFUYAMDHZLZJJORXAAZFXJEXKLZNHPMRYNIZKRCENSVMKJGOWIDSWYFYZMMXUXKOADZMEILAVTFGJKVNFZVUNGMOXHAOUPKXKYPHXUQFQRLVTGQMBLNPHAJQTUPUEZLIGSDMWONCNQJQP");

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
    msg.setTimeStamp(0.0998684869747);
    msg.setSource(4915U);
    msg.setSourceEntity(229U);
    msg.setDestination(54572U);
    msg.setDestinationEntity(252U);
    msg.topic.assign("XEWNBQCVEVRXAKYCKCMWCKSSEWUTCIFJMKTUHHPYWQHCPZOIMQJGZEDAREPTSKUIRZYGAZYRURWJBANOOBPGSCUBSVPHRDSQLGQUKRZFZVOVORLMVTEGINJLNEFJGVMSHWPXUIWBLWITLYNGSPFAYM");
    msg.data.assign("NJPWCPKUASUTSOKDDDEAULNWYRPGOZSCCSYHIEEKWEIVMEPYFSWHTLVODVTEXTTJQQZRBLCKOXNCMFLJQHBJNLKUWODHMSAUWOAVDXKFVDUXZEGSQMVEQFRAONXFXPNXLQKGTYCMVGZAYZCKWUAIIORGARKRFBIWDHCIUBCRZGQLYSBRUMSPLJYYHEPFNOGMYSLYMUDMQQZBJAINXGHPJIFBMTVTFRTGECKJVVHHBXANIJXIBTWLPWZHJOFRPZ");

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
    msg.setTimeStamp(0.975219606532);
    msg.setSource(33706U);
    msg.setSourceEntity(34U);
    msg.setDestination(22219U);
    msg.setDestinationEntity(193U);
    msg.frameid = 247U;
    const char tmp_msg_0[] = {98, -115, 34, -95, -96, 90, 92, -2, -62, 121, 96, 57, -12, -94, -5, 82, 81, 28, -25, -36, -10, -103, -85, 110, 74, -103, -120, 62, 38, -87, 32, 97, -116, 2, -94, -115, 25, -81, 88, -51, 23, 62, 18, -41, -38, 41, 119, -97, 10, -57, 39, 32, -70, -24, -87, 25, 92, 67, -54, -125, -122, 83, 32, 74, 29, 31, 45, -127, 71, -58, 76, -98, -121, 122, -94, -86, -8, 94, -26, -50, -73, -104, 103, 44, 22, 108, 77, -84, 7, -32, -67, -7, -68, -120, -117, 21, 10, 111, 124, 34, -115, -38, -5, 44, -126, -121, -104, 52, -38, 66, -15, -17, -35, -37, -8, -96, -78, 15, -120, -122, 64, 32, 32, 112, -116, 32, 95, -2, 48, 121, -118, 112, 4, 95, -126, -105, 108, 33, -18, 25, 93, 102, 19, -94, 24, -84, -19, 72, -42, -20, -109, 84, -5};
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
    msg.setTimeStamp(0.522656847438);
    msg.setSource(13227U);
    msg.setSourceEntity(207U);
    msg.setDestination(21030U);
    msg.setDestinationEntity(238U);
    msg.frameid = 212U;
    const char tmp_msg_0[] = {120, -19, 66, -55, 21, -103, -4, -62, 59, 122, 36, -80, -86, 118, 98, 86, 35, 27, -13, -107, 78, 122, 93, 126, 74, 120, -33, -40, 6, -90, 12, -45, -98, 27, 24, 56, 76, 64, -109};
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
    msg.setTimeStamp(0.907197640547);
    msg.setSource(58748U);
    msg.setSourceEntity(181U);
    msg.setDestination(62409U);
    msg.setDestinationEntity(78U);
    msg.frameid = 100U;
    const char tmp_msg_0[] = {-21, -97, 105, 84, 89, 62, -37, -72, 23, 13, 25, 27, 76, -86, -113, -17, 51, 101, -43, -62, 42, -58, 90, -57, -66, -40, 44, -79, 41, -32, -9, -36, 12, -53, 10, 117, -1, 61, -72, -98, -115, -59, -50, -68, -49, 39, -62, -27, -66, 120, 104, 122, 122, -68, -92, -47, -120, 82, 106, 102, 50, 24, 64, -112, 87, -37, 37, -121, -82, -78, -39, 11, -65, 120, -10, -21, 95, -25, 51, 107, 67, 43, 75, 56, 98, -100, 113, -71, -42, -10, -49, 44, -108, 1, 104, 92, -91, -106};
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
    msg.setTimeStamp(0.540291179319);
    msg.setSource(2584U);
    msg.setSourceEntity(190U);
    msg.setDestination(37376U);
    msg.setDestinationEntity(231U);
    msg.fps = 132U;
    msg.quality = 8U;
    msg.reps = 0U;
    msg.tsize = 9U;

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
    msg.setTimeStamp(0.897880788552);
    msg.setSource(63148U);
    msg.setSourceEntity(168U);
    msg.setDestination(49466U);
    msg.setDestinationEntity(204U);
    msg.fps = 197U;
    msg.quality = 64U;
    msg.reps = 46U;
    msg.tsize = 119U;

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
    msg.setTimeStamp(0.96619898004);
    msg.setSource(46161U);
    msg.setSourceEntity(69U);
    msg.setDestination(63473U);
    msg.setDestinationEntity(15U);
    msg.fps = 83U;
    msg.quality = 148U;
    msg.reps = 1U;
    msg.tsize = 199U;

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
    msg.setTimeStamp(0.286578205681);
    msg.setSource(1252U);
    msg.setSourceEntity(116U);
    msg.setDestination(49197U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.389767358629;
    msg.lon = 0.775529690435;
    msg.depth = 241U;
    msg.speed = 0.666930516156;
    msg.psi = 0.17886283354;

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
    msg.setTimeStamp(0.0176531097843);
    msg.setSource(14387U);
    msg.setSourceEntity(190U);
    msg.setDestination(53318U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.938435592295;
    msg.lon = 0.291129320127;
    msg.depth = 198U;
    msg.speed = 0.566565529683;
    msg.psi = 0.769020101741;

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
    msg.setTimeStamp(0.0801910795597);
    msg.setSource(63757U);
    msg.setSourceEntity(94U);
    msg.setDestination(61656U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.553753307182;
    msg.lon = 0.904634183188;
    msg.depth = 238U;
    msg.speed = 0.683509136268;
    msg.psi = 0.780140639169;

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
    msg.setTimeStamp(0.805695053848);
    msg.setSource(63605U);
    msg.setSourceEntity(165U);
    msg.setDestination(52699U);
    msg.setDestinationEntity(72U);
    msg.label.assign("NCOXDVCZCDUITZXSEXYTESDVQGCGSSVWDRGTVUNJPKOLLHWSMOCXYANOWMUXLILBAKBIPEGWDNZDDQYRFWHFMANHFVWUILBEHASUQHDUPQGRKOFXZIJJRTJDIUTBJWBPYZYIEKZHYRHXKJOLCVLJMEAMUDAXURGKCFHAMIBE");
    msg.lat = 0.761303262331;
    msg.lon = 0.134038564384;
    msg.z = 0.363981832242;
    msg.z_units = 127U;
    msg.cog = 0.748666060644;
    msg.sog = 0.46481412692;

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
    msg.setTimeStamp(0.930942154862);
    msg.setSource(19584U);
    msg.setSourceEntity(231U);
    msg.setDestination(22602U);
    msg.setDestinationEntity(122U);
    msg.label.assign("KZLYHSTAEDFHWCUTAEYQNSUGVFPYEZKKLHNNJTFCISGQRFCQSIRUQOBWJIUIMHZGUWMBWALARCNEXLYXXIONRVKGVIWLFEXTGSQIYGNSQYKJUHBNTBMLFNZQFQFXOSDOESVCUIXVKUCKYVVP");
    msg.lat = 0.708005146918;
    msg.lon = 0.296041719305;
    msg.z = 0.59928061242;
    msg.z_units = 97U;
    msg.cog = 0.47235161092;
    msg.sog = 0.647720337451;

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
    msg.setTimeStamp(0.00339243992598);
    msg.setSource(44631U);
    msg.setSourceEntity(191U);
    msg.setDestination(36567U);
    msg.setDestinationEntity(144U);
    msg.label.assign("GTSOFOYAIQXOKZEMMDTRXQHNKXJPACEDHXYYFBSVLNGCDWCJUXZSYDNMIPETRHLOIKPXQQTYEMFIOKMAQNEQDRJRKBVAETHOJTMZLIHXFSPHJOPRYBMCZVCAWSBWXYOEYAYISVUWVKZLCMWKZBIIGQKPBJOBPKZFDKNPRPWLGDJRHAZLGCLUURJWAGGUTEWTETQMTWFNQLVBHNHGXFNDFVCFSHZGESUGSWYASUNCV");
    msg.lat = 0.319211494909;
    msg.lon = 0.461399840827;
    msg.z = 0.129038091189;
    msg.z_units = 190U;
    msg.cog = 0.772363781056;
    msg.sog = 0.131965508519;

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
    msg.setTimeStamp(0.718676055665);
    msg.setSource(27563U);
    msg.setSourceEntity(251U);
    msg.setDestination(52956U);
    msg.setDestinationEntity(212U);
    msg.name.assign("WBIHURXFPBH");
    msg.value.assign("DVFCUYIWSVAAIQZRZTBHKLFJNYEWHXJPELCOXXKVFPYAWGHCTJPLRSTGSOFPWFFBOSHWENKWTQONZQRCAOTFOXQNIDCLYUBFIUWLWRJPUPRPFXJIAPNGJGLVBKWUMRJMIUPZHZZEQMICTACFYCK");

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
    msg.setTimeStamp(0.8352327202);
    msg.setSource(60534U);
    msg.setSourceEntity(105U);
    msg.setDestination(28915U);
    msg.setDestinationEntity(201U);
    msg.name.assign("MDCEEPOEXLAIEMVPLLDRMSSHMFSCOKBZQOQWUGWXYNCXYCFZTEBVTHHNTCJYBANUHBXYNKPCITXKKDGVTBORKILBOKWUFZCJKTMFJXMPICOYJVSBVGSIPJRQBTUUAIIZHGBPFPYSEAQRJFNNFYPKDJMSPGFBHGSMIRNENRELOWGHHTZEUKJKFQALSDTLVRYRZ");
    msg.value.assign("FEOXRTGUWJYURDONRVKLBSJPRVZHCDZUJTNSAIKAYRIZCYDWWZMKECXHSLDNJBIUWLBETAVFLMCUXFQGVYQQVWUXLSQRXVCOJWOZLUNNQOZTEHQBBRFVFYHPQKIIXQNSIZGDPLFPILJZOGBBNCOKTAESRIRBXNHJLSNJEGKVITOAUOHAWRDJKTFCQYHSNPDFPPVXMTHWCXKLGJQHYOZIBETWEVAMAMGFKYKHFMWPBUXSCMYMZCTPADGGUDMA");

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
    msg.setTimeStamp(0.950306886086);
    msg.setSource(7315U);
    msg.setSourceEntity(165U);
    msg.setDestination(8370U);
    msg.setDestinationEntity(48U);
    msg.name.assign("CUFAOVQMOGFARFNZCFAWOGKWFHWXQGTKPVJNZRZGV");
    msg.value.assign("EAYMHFWFBRTHWQAXOPGZXXHUIPTVKRLDWESNHOGFVSHWUKEOPWHAKQUCTSGLOJULREPQZIPFDYATVEISRJFYKOCZTBOQQWTDSUDGDKSFBXVCRMHNOMEYXPXRGBYOCQKJAHDXGTJSIGNNUEZBOCXTNBRFMEQPYBW");

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
    msg.setTimeStamp(0.0708536189073);
    msg.setSource(15521U);
    msg.setSourceEntity(25U);
    msg.setDestination(5346U);
    msg.setDestinationEntity(177U);
    msg.name.assign("AIOYPGHACJEQCHCWILBFDPLWXDAMRKGVCAGQYXGOYHOSZACECNSHLRRLIHIJPANIPMTVLZRVBJAYBIZNBWOUHOFXDZRVMBENFBDPAEDHBSMVLSNTMUEOLKOQQGXSONFKVRYEKPEZNITUWQEYTPKVUFUYHMVWTYPWBJFLLKUWDDTACXMTJBRJSDQEYZUFVICNI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AXQRBERAZJDOEPIMHTOHKDMWVBUPNXXRLJDIDYQNYKXWOIFTTSMZRNXGVN");
    tmp_msg_0.value.assign("VIRYUIOKKMVVHGFMVLIDFC");
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
    msg.setTimeStamp(0.645725170648);
    msg.setSource(88U);
    msg.setSourceEntity(99U);
    msg.setDestination(52633U);
    msg.setDestinationEntity(141U);
    msg.name.assign("HABWVUOQRQAUOFLJFIWMSTVVFGZOZNONMKTKWJITGREFKWSRQGUNWFIVBONSUELZOMTTMDCZIZYYJRPXBEZFWQDDFOEXMTPASDCHFQKZH");

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
    msg.setTimeStamp(0.962249382215);
    msg.setSource(19238U);
    msg.setSourceEntity(46U);
    msg.setDestination(30620U);
    msg.setDestinationEntity(55U);
    msg.name.assign("PVFEADLDIIXXPCKVJDLJGRZXKAVWRKFVQVDSFJCRNCVBGOPQBFCZTJRIQWOQXJATRFYJNZIL");

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
    msg.setTimeStamp(0.639513696815);
    msg.setSource(36180U);
    msg.setSourceEntity(39U);
    msg.setDestination(49047U);
    msg.setDestinationEntity(189U);
    msg.name.assign("EMEAQPEQUBIKDMZJIWGSBGDHRWCHVEKYPKFLSUAQDQQGCVXUGWNBTHVQZHSOTJLKGFOOCQIPAEBXTGQEMORMMNWBIMCUVNTXTCBCIDNOJJMKUSASKLNWXDXKCTVLJZTIRURMLEFVRNKPLWLLHWAJPLKHOFPYHPRZHWUZUPOXEDFFPCSZTHRWDOVAYGGYJBEZHNFADSRNIXXQYWDBULJZNYFMROVJMEOBSGTSVAURYIFCXYZAJ");
    msg.visibility.assign("TNGWUGNXGNKPBFUWUIVZRCQUDHFADLZNADYAUORYCBSGGXKANHWJTCHGSYZUTVORGKEEXJDDJOUZZAMVMMDHQPFSFYRDTWOESXSGFOPIHQVLQGDJFZEKRAOIPFRHKOCTTCOCYBWEZHILVEWZAYMJLYWUCFJXIIOJQIMXEWUINSLTDAVSFLHJXPHRJCXMKARCATXHPMTQBNQSBUVGCMMMPRFOLWPEKKVJRBNQLBNQPL");
    msg.scope.assign("HPQJAOOJVBMLPHUBEAGBTQDFHAMKMBXFBXHBETRKIOMDOUQOAICNFPKIPXRJVMNHZZJDASVLDSXEMMGNZDYWETLYKHOKEEKDIQUCCRSFWCBRPSENZTCTWHDQVTOZYUHGIYVSVVOKSHNNFFZFSXAXWJTZUFFCJADXPVZREGPJNGJILLEBY");

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
    msg.setTimeStamp(0.412741302493);
    msg.setSource(42207U);
    msg.setSourceEntity(181U);
    msg.setDestination(26531U);
    msg.setDestinationEntity(235U);
    msg.name.assign("NIRRBNEMNNWJRXICPRXDCZGZTGJUCYGLTUFMTAFYTMWNOKYXUHHEVSZIYHRSAPXLAIPPTLGPTUFBMFKQJQEZDUSRADUGX");
    msg.visibility.assign("IJHQCTOISVLWZTRG");
    msg.scope.assign("LVNHHBCGQZGQLYPNKEDFOHYWJGUESKDNVETLZAXDAWBARSNQVJNYICKMALKMSHCWKGNXLHLSSMFATZIUODICWPWELMYQBOJAFIFZFOGSPFYIYDUXRVYXMQKXGK");

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
    msg.setTimeStamp(0.609486360416);
    msg.setSource(1200U);
    msg.setSourceEntity(228U);
    msg.setDestination(41354U);
    msg.setDestinationEntity(125U);
    msg.name.assign("KLXSNHKYIWAGFLASADQAZDMMSWDEUXPIJNQUOKKZOWFSPC");
    msg.visibility.assign("LLTXFQKQZSPLMWRBGHFWOLJFUPKOWUMKIMIVDWXZCEXFTOHCGIMOPHEVRYBNESOFPJUVWBVNIYRKSODGVIYHXQDAGYYIWJWHUNSQOURIDXJFEMSIEEHBQPREAFPFAYXPEEAZVAAKMCXDTUDZRYYBDTUXSVUOKWAIZOBQBNITDZLLKJMJHKSLTYBRNNEHXDLRZGJLVWLJHYRGCCNATGOSURBUNS");
    msg.scope.assign("GMZYFPRYGJMRIODXCLFSWRVUQXGEBQRVOSGNZFOHBWGFBDVFRWULIYSAPIOPTYXKKLQXEDPHGGMVFUAAZCLCNLWROQJANJDSCZIJMWKATFOQEOKJVRDEESPUUQNDSBYPJKPMTKWIWTCDXJIVYPDZHHXELT");

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
    msg.setTimeStamp(0.883762098379);
    msg.setSource(5864U);
    msg.setSourceEntity(97U);
    msg.setDestination(28363U);
    msg.setDestinationEntity(87U);
    msg.name.assign("HDDOVQUFWYMTKCOWRVNPEJXTOTUZKARUCUDJJLRZDINGNWJHAUIJQCTPHXWQKLFJKUJOEEVQBKLYQBMPTGFNWKFXWCLQZXCMPXIBYHXMJL");

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
    msg.setTimeStamp(0.650683660198);
    msg.setSource(12241U);
    msg.setSourceEntity(119U);
    msg.setDestination(19147U);
    msg.setDestinationEntity(156U);
    msg.name.assign("LSMAPRUQUSFVJOHYFILBWFBCPVZQOWCUQTTYUWMTOEPFKTJCAIGOKW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DIVIYCXVMNMQPTGDQ");
    tmp_msg_0.value.assign("MLPQIIZIMGSGJDYWDKHRGXOTYUQAOBCWJTOUSFROTXRZFGRSVCPRBHYVPJLLCUTNZKWIRIVDEADK");
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
    msg.setTimeStamp(0.934927907757);
    msg.setSource(41501U);
    msg.setSourceEntity(190U);
    msg.setDestination(11204U);
    msg.setDestinationEntity(166U);
    msg.name.assign("JAQIMRRNRSSIUMTHFUCJR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WAJJDESVGKZOZBHACRLZNTNXSNGOYWSMSTPRJQFTNHCMUZOYBMYIGFYWZLDGIDAKESUTEFXYIPOGVJQQHLNDPYSKKUBOWITBSGRVPPNEPYXBZUVHNBRQ");
    tmp_msg_0.value.assign("FJNKKCBIYVMNIOTLKPXQTOCMTPEXNRIYVLGMPHFSXEABOTZSLQUWNAWFVPYMRTQNWGMQFUJCUMBSYERHBXGHZCQIVULPIVYJJMZRMGKIYVSLSSCHZACHJXLAKQRAREKWFHHDZVOXPUDDKSGBRFCBGOZOPF");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.234328039886);
    msg.setSource(43552U);
    msg.setSourceEntity(7U);
    msg.setDestination(1689U);
    msg.setDestinationEntity(208U);
    msg.name.assign("MWVCEJTWFQDQAJQVHSVHMMFAYJUOBRULXPYDKOFGQPDHLOEYXRAYPPIZJGTFHEZYMAJVCXFIFTTBGODFHZSBROEBMEZYZLXKNEMBFKTKUVRWOSADEEXMYBWUOJCPCHAVMAUJOQDNMLZCKGGCLCKLEDATCDRISRTNGUXVCDLKRIXBRWULQAGNRNSOSYUDUW");

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
    msg.setTimeStamp(0.391385141395);
    msg.setSource(47097U);
    msg.setSourceEntity(227U);
    msg.setDestination(32487U);
    msg.setDestinationEntity(235U);
    msg.name.assign("LPUSKRDZAKPJVHPDOGEAMOGIRHKEQWLILYOZZONTSBKLYRJHQHSVOJGQWIZATUPFUVIGCUEKLTSNJBDGEVBSTOCDCPZUSWQNZVMAELPUOIFVKXQSSANLIPF");

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
    msg.setTimeStamp(0.478072436563);
    msg.setSource(21290U);
    msg.setSourceEntity(93U);
    msg.setDestination(35792U);
    msg.setDestinationEntity(166U);
    msg.name.assign("MCMFBOXLKQLOUHKIEHTRGNFYLRHMALUXVQELCFHSOQHJXABIOIYRSJDRCGJTB");

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
    msg.setTimeStamp(0.708724594151);
    msg.setSource(27975U);
    msg.setSourceEntity(24U);
    msg.setDestination(59787U);
    msg.setDestinationEntity(212U);
    msg.timeout = 2383266550U;

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
    msg.setTimeStamp(0.922604666807);
    msg.setSource(23826U);
    msg.setSourceEntity(36U);
    msg.setDestination(1004U);
    msg.setDestinationEntity(135U);
    msg.timeout = 1981932370U;

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
    msg.setTimeStamp(0.095891092663);
    msg.setSource(25233U);
    msg.setSourceEntity(47U);
    msg.setDestination(29521U);
    msg.setDestinationEntity(206U);
    msg.timeout = 1135393300U;

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
    msg.setTimeStamp(0.595346804837);
    msg.setSource(21792U);
    msg.setSourceEntity(2U);
    msg.setDestination(4187U);
    msg.setDestinationEntity(93U);
    msg.sessid = 4066045873U;

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
    msg.setTimeStamp(0.798002742759);
    msg.setSource(49091U);
    msg.setSourceEntity(8U);
    msg.setDestination(19746U);
    msg.setDestinationEntity(51U);
    msg.sessid = 3133630242U;

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
    msg.setTimeStamp(0.988548549777);
    msg.setSource(22747U);
    msg.setSourceEntity(49U);
    msg.setDestination(56961U);
    msg.setDestinationEntity(214U);
    msg.sessid = 1556664234U;

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
    msg.setTimeStamp(0.11716247082);
    msg.setSource(62407U);
    msg.setSourceEntity(212U);
    msg.setDestination(27640U);
    msg.setDestinationEntity(169U);
    msg.sessid = 1202212822U;
    msg.messages.assign("EIOTRLNXSTRBLIUMYLJDCWQTQLKOPUQBWTPRNTMPGZJHCMJN");

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
    msg.setTimeStamp(0.485968750415);
    msg.setSource(19221U);
    msg.setSourceEntity(163U);
    msg.setDestination(1539U);
    msg.setDestinationEntity(43U);
    msg.sessid = 355756095U;
    msg.messages.assign("ZQBDAOFGMOAMA");

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
    msg.setTimeStamp(0.549804907451);
    msg.setSource(37328U);
    msg.setSourceEntity(149U);
    msg.setDestination(8766U);
    msg.setDestinationEntity(204U);
    msg.sessid = 2564704927U;
    msg.messages.assign("CFKNKBQEROVCTAALCQSFUBRNYJVWYEYFHVRQJFSRDDEJSZVBKTJGXSPGXRHAXWFMSQLNXHERHPEAKIPIVXOY");

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
    msg.setTimeStamp(0.0883949620993);
    msg.setSource(9203U);
    msg.setSourceEntity(238U);
    msg.setDestination(10073U);
    msg.setDestinationEntity(16U);
    msg.sessid = 890038616U;

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
    msg.setTimeStamp(0.133060136571);
    msg.setSource(48267U);
    msg.setSourceEntity(27U);
    msg.setDestination(56001U);
    msg.setDestinationEntity(101U);
    msg.sessid = 2415511022U;

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
    msg.setTimeStamp(0.475518941586);
    msg.setSource(55436U);
    msg.setSourceEntity(183U);
    msg.setDestination(30440U);
    msg.setDestinationEntity(130U);
    msg.sessid = 294779178U;

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
    msg.setTimeStamp(0.125809214769);
    msg.setSource(20904U);
    msg.setSourceEntity(189U);
    msg.setDestination(50730U);
    msg.setDestinationEntity(87U);
    msg.sessid = 401589676U;
    msg.status = 189U;

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
    msg.setTimeStamp(0.114155127839);
    msg.setSource(60277U);
    msg.setSourceEntity(39U);
    msg.setDestination(32908U);
    msg.setDestinationEntity(202U);
    msg.sessid = 1932900230U;
    msg.status = 182U;

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
    msg.setTimeStamp(0.923677110715);
    msg.setSource(31530U);
    msg.setSourceEntity(174U);
    msg.setDestination(9124U);
    msg.setDestinationEntity(144U);
    msg.sessid = 215476447U;
    msg.status = 217U;

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
    msg.setTimeStamp(0.711664854867);
    msg.setSource(36768U);
    msg.setSourceEntity(198U);
    msg.setDestination(46088U);
    msg.setDestinationEntity(85U);
    msg.name.assign("KOHANSADWHQVYUAPQKERKAUPFVJXNZGSECXRDQKUPGSZITBAREXGFKOIFQJKSGTNXHPNNXLBVIEWVHDURFESBLDBYHN");

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
    msg.setTimeStamp(0.392703356306);
    msg.setSource(45217U);
    msg.setSourceEntity(3U);
    msg.setDestination(1596U);
    msg.setDestinationEntity(103U);
    msg.name.assign("KJTGBZZUAOBNGVHWDLCQILDALXWZIIEEHQVNNTMFAOXQWPPHQRVMWLYHUWMDKPTMPLTECIOGQYVPTRATLESUBXWXNCTBMDFXPSREWYSJWYRASJTKNQOIZMHBBZFZUYLFMOKEJTYFVNVLAKVGDKUQIIXSEQZSISXZZROCJGONBPFFMERHKAP");

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
    msg.setTimeStamp(0.475554046079);
    msg.setSource(65436U);
    msg.setSourceEntity(153U);
    msg.setDestination(20548U);
    msg.setDestinationEntity(99U);
    msg.name.assign("JACWPITSCJPUTIHGBAAHJNYESXBRUPYCVOCVXPMAQLXOEWABXHBNTRNHMLDYEIUEEOVRFDLOEONFYADUZMDXEMOLZXRPOHMYGIPSAKFQHAFQRVTMKSSIFENMSQKFEBSCAFRGWKWFDQJMGKUGJXHLYTL");

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
    msg.setTimeStamp(0.817147736364);
    msg.setSource(44690U);
    msg.setSourceEntity(202U);
    msg.setDestination(11147U);
    msg.setDestinationEntity(91U);
    msg.name.assign("LYXNFWYVLVQALPQTTNLUDKIDMFWXBKDSDNMHMTKQNSCIKRPSBHWSZGIB");

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
    msg.setTimeStamp(0.530444321127);
    msg.setSource(3910U);
    msg.setSourceEntity(154U);
    msg.setDestination(38429U);
    msg.setDestinationEntity(125U);
    msg.name.assign("RJUBSACJTPFIOBENDIZPSHRSLBLMHAWRRJFASVUXZXFE");

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
    msg.setTimeStamp(0.8709696333);
    msg.setSource(45634U);
    msg.setSourceEntity(156U);
    msg.setDestination(5000U);
    msg.setDestinationEntity(69U);
    msg.name.assign("SBAKLUTIMVOWCUYBQOFTDRLKGOOCZAFYXCGYHSQIKQPIGEUXUNEZCWXAYBKVVUIHMTBIBSNJIXIZFPQYCDSQTHMM");

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
    msg.setTimeStamp(0.753217897353);
    msg.setSource(45881U);
    msg.setSourceEntity(12U);
    msg.setDestination(14972U);
    msg.setDestinationEntity(183U);
    msg.type = 94U;
    msg.error.assign("UAGRBNLDBCNTRRECQRJRYPGYLXLIXANSIGLIXRDWIZWMDTWHZHNVSFLWRBSOHHOAFHIAXSIUOZNPMTAKOBPNHWDSIXPMFCCDCQURLIRQJPQKKWYZZVKVV");

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
    msg.setTimeStamp(0.079345743061);
    msg.setSource(65081U);
    msg.setSourceEntity(12U);
    msg.setDestination(19137U);
    msg.setDestinationEntity(225U);
    msg.type = 126U;
    msg.error.assign("XEXPVXJARJNGXNNPIWUUHTJDITLEIREFLFDHYOXOFIOYWDTJKVHPTZYISHNTKKNGFMCKUSDHWBTMYPXOSULBJOIXNWSIUEYWUGJHASDUCFXGYNPPWCZPTDJBC");

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
    msg.setTimeStamp(0.172081281127);
    msg.setSource(1530U);
    msg.setSourceEntity(57U);
    msg.setDestination(38963U);
    msg.setDestinationEntity(166U);
    msg.type = 144U;
    msg.error.assign("VHCJZUEINRFMYGTPQFYOBGCRRKJXGCSFXYYXWKNTXUMPUHSIITKLMUPNGYDNBIOUPCAFPEUHZKOXDVTRDVJBRIKLDJXHHCFYEVWNELYJWBPRGIAUZEMZESVNVAFWXSSSJHVPYFJPBULXSACQWDCGWVKDJACNR");

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
    msg.setTimeStamp(0.735179352045);
    msg.setSource(64220U);
    msg.setSourceEntity(47U);
    msg.setDestination(25073U);
    msg.setDestinationEntity(95U);
    msg.seq = 487U;
    msg.sys_dst.assign("FWDOFPELXKZWIPOVIQUUTCSGYXUJXNQDOKPKTPJDVNUHDKBTOBLQQGBZXQPECCSIPEDAMCCSPCKTRFVUTCMHGAPWSKPOWOTHSSFSRJZUF");
    msg.flags = 250U;
    const char tmp_msg_0[] = {22, -30, 71, -96, 113, 116, -111, 115, -56, -55, -107, -60, -22, -108, -1, -105, -104, 77, -17, -33, -104, -115, 55, -28, 46, 125, 107, 46, -95, -44, 85, 101, -67, -15, -46, -40, 17, 30, -4, 13, -107, 49, 6, 43, 107, -71, 62, 28, 120, 100, 107, -68, -116, -85, -24, 77, 120, -65};
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
    msg.setTimeStamp(0.72996125874);
    msg.setSource(23475U);
    msg.setSourceEntity(27U);
    msg.setDestination(3641U);
    msg.setDestinationEntity(5U);
    msg.seq = 29605U;
    msg.sys_dst.assign("DEITYGFDOWCPOOCOJBGMBAJZHTQGFHHSMHYTGVLXHSSWUBWISZPCKQZFCTGBKFWPTYBWOECMTYMVRTVWWXUPQIY");
    msg.flags = 144U;
    const char tmp_msg_0[] = {-125, -90, 107, 66, 12, 40, 63, -89, -80, 42, 79, -67, -81, -74, 35, 14, -104, 45, 111, -126, -97, 102, -23, 64, 39, 41, 73, 92, 83, 80, -61, -7, 78, 48, 1, -37, 123, 85, 75, 100, -77, 97, 81, 66, 70, 89, 72, -54, -67, 11, -93, -98, 114, -5, -94, 94, -51, 12, 102, -3, 16, -38, -70, -53, -91, -34, 96, -112, 18, -78, 57, 64, 92, -81, -6, -7, 124, -40, -10, -64, -122, 83, 34, -48, -58, 74, -23, 81, 79, 39, 83, -128, -65, 12, -105, 118, -12, 14, -120, 117, -60, 87, 106, 0, -85, 83, -80, 97, 20, -87, -21, -127, -86, -67, -69, 92, -9, -50, 104, 112, -55, -101, -126, -47, -76, -88, 58, 124, -37, 77, -72, -39, -6, -108, -48, -94, -65, 119, -8, -69, -100, 121, -69, 124, -10, 78, 111, -117, -44, -24, 90, -6, -34, -34, -82, 16, -27, 112, 34, -40, 48, -52, 29, -119, -128, -39, 122, 103, 103, 118, -95, 63, 9, -17, -90, 25, -46, -128, 24, -49, -2, -36, -13, 26, -69, -50, -39, -2, -6, 90, -114, -56, 48, -8, -57, -46, -91, 83, 103, -17, -42, -63, 61, 2, 0, -37, -4, -78, -106, -27, 54, 82, -113, 117, 74, -77, -32, -84, 90, 72, 39, 42, 3, 83, -128, -113, -88, 23, 113, -91, 34, -122, -25, -116, -56, -99, 47, 17, 114, 36, 25, 36, -66, 22, 24, 16, -60, -48, 73, -42, 22};
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
    msg.setTimeStamp(0.290269730637);
    msg.setSource(61323U);
    msg.setSourceEntity(204U);
    msg.setDestination(29724U);
    msg.setDestinationEntity(60U);
    msg.seq = 4874U;
    msg.sys_dst.assign("ZUCOXZLIXDFFTOBQOQAQEHGONAXIBLYLIQVBCFBPYWTXQBNMFIPDTFAEUXSIMIAXTLDUPOAAKGBUSMWGKJYHIYUZGZPFXKKLRDCHYRNOCFXUOXITJJWORTJELJMZHVZGHXHLLVATEEMVWMQGZJWQTDDEYGJRWJAPNDSWMCZHNUUPKWNVVVBRIKHNDBSLBOPTDTKYJGNKBVRYGUANPRSHKCHIPGMZEFZRQFWCUDSYV");
    msg.flags = 181U;
    const char tmp_msg_0[] = {-123, -103, 34, 30, 78, -113, -55, 36, -93, 93, 28, 105, 40, 20, 82, 108, 84, 11, -111, 66, -52, 72, -15, -113, -102, -8, 75, -121, 100, -54, -19, 122, 121, -106, -1, 0, 13, -108, -94, -102, -100, -33, 113, -77, 18, -25, 5, -95, 99, -55, 73, -4, -34, -84};
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
    msg.setTimeStamp(0.211958533588);
    msg.setSource(31822U);
    msg.setSourceEntity(41U);
    msg.setDestination(58611U);
    msg.setDestinationEntity(106U);
    msg.sys_src.assign("CARDREVTHTBGXKWUAIYYUHBXNKQWFYIPZBKIXTNTMUZAEQFVGUCSBENPYIJJSWZDWIHXNKDHZFJT");
    msg.sys_dst.assign("AXBDMXBBQRRQXRSDXSXTAFPEMRHLAHKUYJNBQODLGEVJHKTSYAPUELQFEJZJDNSGDELWJSXFBMNOUOQJROWRASWNTJKLLIGSQHOUVBVHDOWMAFJVCHKCTOCFZFIMLQNZYVCLVWSJGFDTCIAAVUUVWKGXDZCCIFXPMMCPKTCGPTVTWLXGYDMMPAAENWIVGEKBUZNSZHNBXNIWRIIUHFOOUPHBRQQPTGZNKCEFLRDZGHYQMUYYYEWOZTYRJPBYEK");
    msg.flags = 14U;
    const char tmp_msg_0[] = {-100, -74, 18, 43, 85, -32, -55, 78, 20, 44, -84, -121, -121, -96, 37, 81, -25, -125, 22, 79, -80, -61, -61, -56, 123, -78, -43, -55, -76, 57, -19, -105, -92, 48, 78, -2, -14, -69, -97, -124};
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
    msg.setTimeStamp(0.402379199737);
    msg.setSource(65209U);
    msg.setSourceEntity(151U);
    msg.setDestination(31549U);
    msg.setDestinationEntity(207U);
    msg.sys_src.assign("SFHQDPYJDKVKPCNVEOBAJTTXKXDFIMFXPIOEWUGTEKVAIJRGNCP");
    msg.sys_dst.assign("QMEIFKXTUXCRAWTPHUECRFIUUKFSDTLICOYHXGCHFVYDQRNXGBDBMIIWP");
    msg.flags = 120U;
    const char tmp_msg_0[] = {120, 124, -71, 51, -123, 86, 108, -46, 121, -98, 51};
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
    msg.setTimeStamp(0.380463448043);
    msg.setSource(30644U);
    msg.setSourceEntity(94U);
    msg.setDestination(44372U);
    msg.setDestinationEntity(8U);
    msg.sys_src.assign("HIEFLREIDUVJTOKVVQSBRTIGSO");
    msg.sys_dst.assign("WAAZJIJWTCIQIVXUBLJOAMUDBSYMULKPPWADGLXNQSXKGYIJVVPBYTDZBMIHVLUKSOEUFSHKFZPIFURQXXEFDQZGOPANZXVV");
    msg.flags = 9U;
    const char tmp_msg_0[] = {-22, 17, -18, 107, -15, 25, -35, -41, 86, 61, -119, 41, -3, 75, 77, 95, 70};
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
    msg.setTimeStamp(0.652551461387);
    msg.setSource(45666U);
    msg.setSourceEntity(200U);
    msg.setDestination(6458U);
    msg.setDestinationEntity(236U);
    msg.seq = 64807U;
    msg.value = 208U;
    msg.error.assign("YCFGYWBDETXCAFFZVFOBWWRBVUYHZTVJZNZDXHCIHKOSWYQGURFMAPNNCGLPZCJIUZDWXRASBJJTPNCHWCLNPXPOKLONELKIIDJEHERGBDMPXAOMVCXIUPSGOQJRNUYXEKKDDYKTUCOSUGBFIWRNQRYQRABGMAMAKGOZHMSOBPKZZESAHI");

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
    msg.setTimeStamp(0.895677010115);
    msg.setSource(10660U);
    msg.setSourceEntity(30U);
    msg.setDestination(59766U);
    msg.setDestinationEntity(82U);
    msg.seq = 44249U;
    msg.value = 2U;
    msg.error.assign("ZSPLDPKQRHQEVNGAOZARIZJDBXBUSCROPRCRWHPTJEBZMDWVWIBPZUQDEDHMXESAICCMVSJZTYRWLOQVJKHYTMCXIEVYKNYMXGPHD");

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
    msg.setTimeStamp(0.0522083572312);
    msg.setSource(24247U);
    msg.setSourceEntity(20U);
    msg.setDestination(59154U);
    msg.setDestinationEntity(127U);
    msg.seq = 20805U;
    msg.value = 84U;
    msg.error.assign("RJBCVRTPPJARWMNWSILDQJRHDIEUJMNPMZKQENFAUJVQEOYYOIGXTTZPB");

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
    msg.setTimeStamp(0.610652601444);
    msg.setSource(41602U);
    msg.setSourceEntity(168U);
    msg.setDestination(51608U);
    msg.setDestinationEntity(55U);
    msg.seq = 13959U;
    msg.sys.assign("TKTUCKWPPSNEKFQGKJMXYMOYSONRCLYQHZYSA");
    msg.value = 0.964652797985;

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
    msg.setTimeStamp(0.0217309500723);
    msg.setSource(40543U);
    msg.setSourceEntity(108U);
    msg.setDestination(32077U);
    msg.setDestinationEntity(138U);
    msg.seq = 62256U;
    msg.sys.assign("KJHNZPXYOXISKLFEXSTCZJUSUHVISTGCSQZCDDLAOGTRBVMZJIYDMTEGOJZXXQEXMWWEIDUQXALUNUUMWPGTHHKLES");
    msg.value = 0.752712327167;

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
    msg.setTimeStamp(0.726452163802);
    msg.setSource(1191U);
    msg.setSourceEntity(48U);
    msg.setDestination(24641U);
    msg.setDestinationEntity(193U);
    msg.seq = 64948U;
    msg.sys.assign("XWVECVKMHYAPTPWXIZCLKOSDDHLZALBLLRYGJHITJSCNCKTHTFISBPOSYGFZDPGHHFRFGSJVSSODERRQTPGNYFAERJHULVBMZKMUWMBIWWULTPMDTCXGIGGDAAMTQRJSUYSKEEAHROQVINKSNVXOGQ");
    msg.value = 0.0810612596824;

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
    msg.setTimeStamp(0.998565744695);
    msg.setSource(54158U);
    msg.setSourceEntity(79U);
    msg.setDestination(56100U);
    msg.setDestinationEntity(66U);
    msg.action = 104U;
    msg.longain = 0.826133184148;
    msg.latgain = 0.42945731889;
    msg.bondthick = 3435875759U;
    msg.leadgain = 0.988948550166;
    msg.deconflgain = 0.103680288353;

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
    msg.setTimeStamp(0.973271551251);
    msg.setSource(31610U);
    msg.setSourceEntity(14U);
    msg.setDestination(2954U);
    msg.setDestinationEntity(29U);
    msg.action = 87U;
    msg.longain = 0.196166651079;
    msg.latgain = 0.41426601398;
    msg.bondthick = 2236964397U;
    msg.leadgain = 0.503222688377;
    msg.deconflgain = 0.59777220389;

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
    msg.setTimeStamp(0.403116040777);
    msg.setSource(43245U);
    msg.setSourceEntity(52U);
    msg.setDestination(6161U);
    msg.setDestinationEntity(105U);
    msg.action = 146U;
    msg.longain = 0.508786838459;
    msg.latgain = 0.117785665584;
    msg.bondthick = 1028910851U;
    msg.leadgain = 0.551071465158;
    msg.deconflgain = 0.988560831032;

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
    msg.setTimeStamp(0.137144366795);
    msg.setSource(52845U);
    msg.setSourceEntity(92U);
    msg.setDestination(47355U);
    msg.setDestinationEntity(156U);
    msg.err_mean = 0.84306873837;
    msg.dist_min_abs = 0.665776911314;
    msg.dist_min_mean = 0.598252224603;

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
    msg.setTimeStamp(0.483361200238);
    msg.setSource(44590U);
    msg.setSourceEntity(127U);
    msg.setDestination(45161U);
    msg.setDestinationEntity(63U);
    msg.err_mean = 0.158696073985;
    msg.dist_min_abs = 0.0289435984927;
    msg.dist_min_mean = 0.610933388677;

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
    msg.setTimeStamp(0.545799906888);
    msg.setSource(20686U);
    msg.setSourceEntity(10U);
    msg.setDestination(12272U);
    msg.setDestinationEntity(183U);
    msg.err_mean = 0.0800785012989;
    msg.dist_min_abs = 0.779771900516;
    msg.dist_min_mean = 0.254134683049;

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
    msg.setTimeStamp(0.205643532846);
    msg.setSource(55464U);
    msg.setSourceEntity(167U);
    msg.setDestination(37025U);
    msg.setDestinationEntity(159U);
    msg.action = 186U;
    msg.lon_gain = 0.429379388411;
    msg.lat_gain = 0.83300637953;
    msg.bond_thick = 0.25868715666;
    msg.lead_gain = 0.52868782195;
    msg.deconfl_gain = 0.134797891618;
    msg.accel_switch_gain = 0.736294421237;
    msg.safe_dist = 0.384512806505;
    msg.deconflict_offset = 0.148933351249;
    msg.accel_safe_margin = 0.300356655147;
    msg.accel_lim_x = 0.420204749928;

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
    msg.setTimeStamp(0.782171182207);
    msg.setSource(47194U);
    msg.setSourceEntity(191U);
    msg.setDestination(45698U);
    msg.setDestinationEntity(97U);
    msg.action = 129U;
    msg.lon_gain = 0.484145633104;
    msg.lat_gain = 0.787943023785;
    msg.bond_thick = 0.778774417316;
    msg.lead_gain = 0.333762196989;
    msg.deconfl_gain = 0.440407209627;
    msg.accel_switch_gain = 0.798280240119;
    msg.safe_dist = 0.954686257319;
    msg.deconflict_offset = 0.178092298741;
    msg.accel_safe_margin = 0.184956054805;
    msg.accel_lim_x = 0.496499103072;

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
    msg.setTimeStamp(0.29912963849);
    msg.setSource(18177U);
    msg.setSourceEntity(62U);
    msg.setDestination(33278U);
    msg.setDestinationEntity(214U);
    msg.action = 141U;
    msg.lon_gain = 0.625088179358;
    msg.lat_gain = 0.96873424265;
    msg.bond_thick = 0.299371692943;
    msg.lead_gain = 0.815475213553;
    msg.deconfl_gain = 0.3993332952;
    msg.accel_switch_gain = 0.312128564991;
    msg.safe_dist = 0.31633368091;
    msg.deconflict_offset = 0.805571183052;
    msg.accel_safe_margin = 0.0126050262022;
    msg.accel_lim_x = 0.527535321267;

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
    msg.setTimeStamp(0.857332015258);
    msg.setSource(36868U);
    msg.setSourceEntity(49U);
    msg.setDestination(34516U);
    msg.setDestinationEntity(125U);
    msg.type = 164U;
    msg.op = 122U;
    msg.err_mean = 0.588009465364;
    msg.dist_min_abs = 0.559066055646;
    msg.dist_min_mean = 0.0308350788832;
    msg.roll_rate_mean = 0.826069917065;
    msg.time = 0.91966136572;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 96U;
    tmp_msg_0.lon_gain = 0.37984890675;
    tmp_msg_0.lat_gain = 0.997539475434;
    tmp_msg_0.bond_thick = 0.8871989381;
    tmp_msg_0.lead_gain = 0.320781190206;
    tmp_msg_0.deconfl_gain = 0.888444440898;
    tmp_msg_0.accel_switch_gain = 0.697108553837;
    tmp_msg_0.safe_dist = 0.275828288353;
    tmp_msg_0.deconflict_offset = 0.997496612246;
    tmp_msg_0.accel_safe_margin = 0.588453760066;
    tmp_msg_0.accel_lim_x = 0.299995614273;
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
    msg.setTimeStamp(0.386393363654);
    msg.setSource(889U);
    msg.setSourceEntity(163U);
    msg.setDestination(62205U);
    msg.setDestinationEntity(38U);
    msg.type = 55U;
    msg.op = 173U;
    msg.err_mean = 0.916790512886;
    msg.dist_min_abs = 0.805572622662;
    msg.dist_min_mean = 0.529387946258;
    msg.roll_rate_mean = 0.0895808090332;
    msg.time = 0.642039952743;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 97U;
    tmp_msg_0.lon_gain = 0.636944502406;
    tmp_msg_0.lat_gain = 0.164698555053;
    tmp_msg_0.bond_thick = 0.953887053168;
    tmp_msg_0.lead_gain = 0.151835396189;
    tmp_msg_0.deconfl_gain = 0.152496192683;
    tmp_msg_0.accel_switch_gain = 0.061976384421;
    tmp_msg_0.safe_dist = 0.810351603146;
    tmp_msg_0.deconflict_offset = 0.57532423531;
    tmp_msg_0.accel_safe_margin = 0.508093654985;
    tmp_msg_0.accel_lim_x = 0.00268960559584;
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
    msg.setTimeStamp(0.762320411481);
    msg.setSource(61682U);
    msg.setSourceEntity(222U);
    msg.setDestination(34544U);
    msg.setDestinationEntity(66U);
    msg.type = 174U;
    msg.op = 213U;
    msg.err_mean = 0.526497487087;
    msg.dist_min_abs = 0.0989393449419;
    msg.dist_min_mean = 0.41908577697;
    msg.roll_rate_mean = 0.0322895619734;
    msg.time = 0.108612799584;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 203U;
    tmp_msg_0.lon_gain = 0.956501887879;
    tmp_msg_0.lat_gain = 0.479077558256;
    tmp_msg_0.bond_thick = 0.406117862341;
    tmp_msg_0.lead_gain = 0.203887293679;
    tmp_msg_0.deconfl_gain = 0.407988031395;
    tmp_msg_0.accel_switch_gain = 0.787058298352;
    tmp_msg_0.safe_dist = 0.107701049695;
    tmp_msg_0.deconflict_offset = 0.988624677309;
    tmp_msg_0.accel_safe_margin = 0.927908528586;
    tmp_msg_0.accel_lim_x = 0.390210074625;
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
    msg.setTimeStamp(0.430607183069);
    msg.setSource(58816U);
    msg.setSourceEntity(167U);
    msg.setDestination(8438U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.620081474669;
    msg.lon = 0.0369901592263;
    msg.eta = 1921978299U;
    msg.duration = 4666U;

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
    msg.setTimeStamp(0.740198054745);
    msg.setSource(44206U);
    msg.setSourceEntity(143U);
    msg.setDestination(38581U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.902962349912;
    msg.lon = 0.614233077606;
    msg.eta = 118248660U;
    msg.duration = 52511U;

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
    msg.setTimeStamp(0.427189970541);
    msg.setSource(22003U);
    msg.setSourceEntity(230U);
    msg.setDestination(19515U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.239682164381;
    msg.lon = 0.470123703834;
    msg.eta = 2141478086U;
    msg.duration = 26095U;

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
    msg.setTimeStamp(0.927714034033);
    msg.setSource(38465U);
    msg.setSourceEntity(250U);
    msg.setDestination(48654U);
    msg.setDestinationEntity(210U);
    msg.plan_id = 30783U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.0469054941379;
    tmp_msg_0.lon = 0.272434732122;
    tmp_msg_0.eta = 1100144687U;
    tmp_msg_0.duration = 24023U;
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
    msg.setTimeStamp(0.108657051425);
    msg.setSource(3327U);
    msg.setSourceEntity(214U);
    msg.setDestination(9275U);
    msg.setDestinationEntity(244U);
    msg.plan_id = 62835U;

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
    msg.setTimeStamp(0.777649025691);
    msg.setSource(47459U);
    msg.setSourceEntity(165U);
    msg.setDestination(60934U);
    msg.setDestinationEntity(100U);
    msg.plan_id = 45411U;

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
    msg.setTimeStamp(0.880168452794);
    msg.setSource(10147U);
    msg.setSourceEntity(12U);
    msg.setDestination(38312U);
    msg.setDestinationEntity(71U);
    msg.type = 9U;
    msg.command = 142U;
    msg.settings.assign("PBBSQIYBTMMYAGBVPHNFJYJYFKBZWALTRMQCRMEVQGOXDDOJJKCQMYRBLSXNGLLFKEXVOMOFJCKUYAWUTYUXPFGGCNTOIHCZHZJAHVNXPUPSTEIEWDBTRDSXGLRS");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 36337U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.58871045629;
    tmp_tmp_msg_0_0.lon = 0.809142327827;
    tmp_tmp_msg_0_0.eta = 2508908323U;
    tmp_tmp_msg_0_0.duration = 1795U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ZFQJJDQHZRUUTQOWJXRNIMKNJLGPHNVDVKRQWOIOZMMHDQCCHKTQYZXYTLIOREVPBKRJCHVBCYFAUKMTEZPTFFZZMTSSGAWOIIMZXXAZXJDVWSDLPKYYXUIBBESFSZPMOPKFQROSVUTBUCGJJHIFNPPOYQCLLDNYMBGIUHDKSNKBCNWGVEGELTK");

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
    msg.setTimeStamp(0.675778548937);
    msg.setSource(27507U);
    msg.setSourceEntity(209U);
    msg.setDestination(16800U);
    msg.setDestinationEntity(191U);
    msg.type = 123U;
    msg.command = 116U;
    msg.settings.assign("VXODWOJDKTORBJFESRQOCVPMZVBYZAESATUFCTNQTTJPHCQULUMKXDRUNDAEYFDQUCXUJLHVRBTNGGAVPZBWRGG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 58980U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XLVLELPAMQOETCGNPARDTQLYFTMIFSCUTCVJVBHMVPEWRHJYIERUVKHFUBJHUZDIFYCSKBRSBJHHFIGJBOJOYKOGGZPGUQMKDQLFDSISWWQKDMFKONXLDMYZBXWCLNJZXMJQZVSBJWRHUGBCFGLVUQWSPHGGPNSXKEABXWNCXTZAJIAIVADNYEOALOK");

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
    msg.setTimeStamp(4.4818187322e-05);
    msg.setSource(51704U);
    msg.setSourceEntity(221U);
    msg.setDestination(15821U);
    msg.setDestinationEntity(204U);
    msg.type = 197U;
    msg.command = 84U;
    msg.settings.assign("MUFRSFSVLMPCAWGZQIZQIOTWKKNJMBE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 20794U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ECYYZPLMAWYDNKVGZPMPA");

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
    msg.setTimeStamp(0.565196812897);
    msg.setSource(45986U);
    msg.setSourceEntity(240U);
    msg.setDestination(1611U);
    msg.setDestinationEntity(20U);
    msg.state = 207U;
    msg.plan_id = 20966U;
    msg.wpt_id = 145U;
    msg.settings_chk = 59004U;

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
    msg.setTimeStamp(0.857076548448);
    msg.setSource(40236U);
    msg.setSourceEntity(68U);
    msg.setDestination(24002U);
    msg.setDestinationEntity(37U);
    msg.state = 181U;
    msg.plan_id = 27915U;
    msg.wpt_id = 106U;
    msg.settings_chk = 29598U;

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
    msg.setTimeStamp(0.321892128766);
    msg.setSource(32739U);
    msg.setSourceEntity(162U);
    msg.setDestination(63994U);
    msg.setDestinationEntity(123U);
    msg.state = 231U;
    msg.plan_id = 55302U;
    msg.wpt_id = 207U;
    msg.settings_chk = 15698U;

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
    msg.setTimeStamp(0.212151812439);
    msg.setSource(59316U);
    msg.setSourceEntity(84U);
    msg.setDestination(54763U);
    msg.setDestinationEntity(124U);
    msg.uid = 7U;
    msg.frag_number = 111U;
    msg.num_frags = 181U;
    const char tmp_msg_0[] = {33, -57, -88, 77, -50, 29, -34, 12, -87, 53, 103, -4, -58, -16, 31, 17, 66, -14, 61, 119, 59, 108, 0, -79, -17, -115, -66, 73, -51, 124, 71, 15, 25, -93, -109, 106, -42, -8, 76, 51, 112, 23, -121, -127, 106, 104, -85, -98, 115, -37, -124, -116, 20, -85, -18, -8, 27, 60, -26, -3, -113, -118, 42, -20, -60, 89, 105, -99, -78, -31, 118, 49, 92, -57, -105, 48, -4, 70, -45, 12, 104, -47, 74, 101, 15, -19, -104, -119, 26, 5, 55, -92, -63, -68, 53, -96, -99, 78, -54, 57, -111, -95, -121, 27, -79, 102, -50, -71, 64, 70, -50, -26, -124, 73, -37, 79, 56, -19, -90, 81, 62, 121, -99, -81, 119, -111, 50, 76, -82, 79, -69, 66, 123, 123, 62, 28, 31, -20, -27, 70, -61, 84, 106, -108, -73, 92, -94, 56, 108, 82, 113, -46, -117, -70, -112, 43, 106, 34, -60, -47, 91, 37, -100, 56, -125, 22, 63, -33, -58};
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
    msg.setTimeStamp(0.999808415329);
    msg.setSource(45747U);
    msg.setSourceEntity(98U);
    msg.setDestination(47942U);
    msg.setDestinationEntity(237U);
    msg.uid = 252U;
    msg.frag_number = 160U;
    msg.num_frags = 221U;
    const char tmp_msg_0[] = {85, -110, -18, 115, 107, -119, 80, 46, 14, -108, -34, 30, -45, -84, 50, -100, -2, -128, 75, 42, -55, -30, -40, -128, 82, -70, 120, -20, -6, -9, 87, 55, 11, -88, -121, -84, -19, 66, -13, 64, -26, -69, -77, 13, 30, 108, 112, -40, 99, -17, 36, -29, -93, 126, -123, 63, 100, 84, -80, -48, -61, 16, -36, 14, 88, -99, 123, 30, -79, -92, 120, -95, 58, -37, 103, 98, -2, -114, -71, -106, 69, -43, -81, -79, -47, -61, -45, 28, -97, 1, -23, -89, 6, -75};
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
    msg.setTimeStamp(0.327804634112);
    msg.setSource(6556U);
    msg.setSourceEntity(70U);
    msg.setDestination(51104U);
    msg.setDestinationEntity(70U);
    msg.uid = 9U;
    msg.frag_number = 65U;
    msg.num_frags = 106U;
    const char tmp_msg_0[] = {-73, 88, 33, -66, -112, -7, 92, -68, 58, -60, -88, 67, -115, -33, -65, -128, 40, 66, 3, 122, -29, 122, 92, 65, -47, -30, -83, -69, 67, -65, 54, 107, 93, 74, -127, 54, 31, 42, -101, -55, 69, -24, 51, -56, 17, 62, 39, 47, -89, 53, 65, -118, -88, -20, 25, 115, 75, -9, 13, 71, -51, -58, -84, -100, 85, 91, -33, 45, 58, 8, -100, -64, 95, 31, -16, 63, 116, -13, 19, 116, 120, -121, -30, -107, 97, -78, -56, 29, -109, -86, -6, -121, 97, -85, 47, 34, -31, -49, -61, -98, -72, 87, 123, -69, 100, -103, 20, -76, -67, -32, 86, -92, -20, -79, 21, -119, 9, 43, -93, -72, 80, 72, 39, -68};
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
    msg.setTimeStamp(0.749363210704);
    msg.setSource(32301U);
    msg.setSourceEntity(159U);
    msg.setDestination(53073U);
    msg.setDestinationEntity(38U);
    msg.content_type.assign("FOWEQRLHUWEGBVYIMAJBDCGTTNTTZXNFBIZMSYRZFLOADYRIEMOGVKSUDIZUHH");
    const char tmp_msg_0[] = {-37, 32, 19, -27, -122, -124, -87, 97, -115, 85, -38, -95, -58, 92, -97, 42, 13, 61, -50, 67, -43, 98, 66, 77, -68, 64, -67, 106, 75, 88, -14, 82, -60, 43, 52, 89, 30, 27, -11, -90, -59, -14, 98, 17, 66, -118, -111, -118, 66, 55, -89, 126, -18, -19, -38, 86, -65, 57, -21, -70, 19, 6, -46, -86, 28, -22, 76, 63, 109, -114, -37, 83, -43, 6, 60, 53, -2, 36, -24, 40, -60, -71, 38, 20, -123, 126, -63, 0, -34, -127, -64, 113, 45, 35, -26, 11, -20, 4, 35, 21, -79, -92, 69, 86, -40, -4, 56, -38, -114, 93, -2, -45, 69, -27, -18, 23, 64, -20, 34, 10, -98, -81, -26, -58, -104, -105, -41, 51, -108, 33, 31, 108, 4, -94, 73, -91, 16, 106, 95, -93, -12, -65, -72, 43, 83, 90, -87, -41, 62, 96, -46, -108};
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
    msg.setTimeStamp(0.158959010882);
    msg.setSource(39099U);
    msg.setSourceEntity(230U);
    msg.setDestination(39036U);
    msg.setDestinationEntity(132U);
    msg.content_type.assign("SFIKONEGXKIULLNRILBUIBMAEYOFWYOHKVQAPZKPWJZWADFJSXIZORRVMHVGFZHDNQWFPCDIVOXFFNERVBUMQBSNHSKDIYIDTOUSXGLEEDRYATAWIRBLXQKPERPKLCNBFZJHHASWJGAZDJGMQ");
    const char tmp_msg_0[] = {43, -38, 9, 97, 119, 79, -123, -120, 27, -10, 56, -78, -7, 53, -115, 67, 47, -35, -25, -44, 77, 123, -101, -104, -73, -109, -58, 1, 68, 43, -9, 63, 9, -78, 91, -34, 52, -1, 21, -109, -79, 51, 46, 93, -10, 28, 2, -45, -128, -83, 61, 107, 47, 83, 89, 4, -34, 35, -17, 105, -63, 54, 53, 109, -18, -40, 16, -80, 70, 116, -96, 18, -99, 50, -27, 106, 83, -103, 40, -23, -61, -55, -120, -124, 49, 9, -16, 66, 57, -87, -77, -93, 44, 56, 54, 90, 37, -72, 2, 99, 34, -94, 11, 25, 122, 76, -105, -119, -62, -62, -100, 76, -58, -35, 67, 48, 67, -55, -70, -85, -114, -35, -79, 33, 27, 52, 90, 15, -40, 110, -68, 120, 72, 121, -4, 55, -66, 69, 68, -112, 25, 120, -111, -128, -52, 102, -82, 88, -29, -47, -69, -89, -63, 66, 93, -22, -79, -128, -90, 36, 87, 40, -73, -29, 118, -32, 28, 46, -114, -37, 36, -23, 61, -49, 46, 2, -123, 72, -64, 56, 2, 73, -17, 123, 116, -11, 69, -101, -9, -80, 5, -20, 85, 34, 36, 63, -59, 30, -8, 117, -55, -32, -106, -105, 3, -91, 33, 18, 16, -3, -1, -31};
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
    msg.setTimeStamp(0.876666635462);
    msg.setSource(9099U);
    msg.setSourceEntity(210U);
    msg.setDestination(7887U);
    msg.setDestinationEntity(27U);
    msg.content_type.assign("NKPJQLTBWVHFLBNOEAGOMAFMOKZYHDPUXATFAIHHRJPODIBMDNHQIQMUQNUGLWVQELQGUDVJHI");
    const char tmp_msg_0[] = {-2, 38, 12, 1, -118, -50, -124, -59, 0, 19, -63, -4, 0, 103, -59, 29, 97, 87, 103, -79, -95, 9, 57, 45, -79, 58, 104, 58, -27, -62, 104, -2, 97, 68, -102, 51, 72, 27, -60, -114, 63, -7, 98, -60, 70, -64, 66, 14, -1, -113, -85, -48, 64, -127, -62, 76, 112, 98, -16, -100, 116, 123, -5, 76, 29, -127, 47, -124, 74, 65, 101, -113, 116, 47, 109, -11, -14, -118, 75, 38, -80, 98, -68, 17, -126, 17, -69, 20, 24, -123, -101, 99, -83, 81, -113, 0, 21, -7, -72, -80, 44, -79, -70, -64, 5, -69, -80, 56, 52, -97, 58, -78, -106, 66, -99, -119, -104, 89, 100, 72, -120, -43, 78, 73, 8, 69, -125, 16, 71, 0, 89, -1, 29, 21, -124, 101, -85, -42, -96, 107, -46, -69, 31, 90, 77, 104, 89, 51, 39, 81, 61, -33, -35, -54, -101, -89, -115, 28, -70, -40, 78, -40, -25, 55, -110, -83, -101, 27, -117, 104, 63, -54, 30, 31, 61, -10, 50, 113, 4, 67, -37, 11, -63, -71, -94, -54, -27, 91, 99, 106, 78, -10, -121, 74, -128, 40, 95, 97, -33, 122, 50, 54, 76, 71, 77, 10, -9, 119, 83, 98, -1, -75, -65, 88, -67, 41, 7, 125, -108, -32, -75, 32, -105, 123, -1, -105, -50, -111, -20, 113, -38, -96, -48, -23, -43, -97, -81, 0, -81, -106, 95, 39, 5, -89, -128};
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
    msg.setTimeStamp(0.269378691271);
    msg.setSource(47951U);
    msg.setSourceEntity(227U);
    msg.setDestination(46228U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.861546004687);
    msg.setSource(5803U);
    msg.setSourceEntity(74U);
    msg.setDestination(53782U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.264050186936);
    msg.setSource(22173U);
    msg.setSourceEntity(40U);
    msg.setDestination(40495U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.625462217332);
    msg.setSource(36094U);
    msg.setSourceEntity(50U);
    msg.setDestination(42993U);
    msg.setDestinationEntity(254U);
    msg.target = 7540U;
    msg.bearing = 0.690102952357;
    msg.elevation = 0.768710484152;

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
    msg.setTimeStamp(0.672820341111);
    msg.setSource(776U);
    msg.setSourceEntity(85U);
    msg.setDestination(36787U);
    msg.setDestinationEntity(219U);
    msg.target = 33591U;
    msg.bearing = 0.946963497916;
    msg.elevation = 0.242637080489;

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
    msg.setTimeStamp(0.568941014924);
    msg.setSource(41774U);
    msg.setSourceEntity(92U);
    msg.setDestination(16042U);
    msg.setDestinationEntity(190U);
    msg.target = 64921U;
    msg.bearing = 0.971105979561;
    msg.elevation = 0.97070641311;

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
    msg.setTimeStamp(0.483272780941);
    msg.setSource(43428U);
    msg.setSourceEntity(143U);
    msg.setDestination(23191U);
    msg.setDestinationEntity(232U);
    msg.target = 4743U;
    msg.x = 0.922053094635;
    msg.y = 0.111499835301;
    msg.z = 0.720515105258;

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
    msg.setTimeStamp(0.418624047768);
    msg.setSource(7805U);
    msg.setSourceEntity(195U);
    msg.setDestination(62468U);
    msg.setDestinationEntity(175U);
    msg.target = 15645U;
    msg.x = 0.354853228615;
    msg.y = 0.852533436555;
    msg.z = 0.973968746716;

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
    msg.setTimeStamp(0.557668221388);
    msg.setSource(13584U);
    msg.setSourceEntity(13U);
    msg.setDestination(5055U);
    msg.setDestinationEntity(252U);
    msg.target = 21827U;
    msg.x = 0.585518696138;
    msg.y = 0.0049797354096;
    msg.z = 0.469288639564;

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
    msg.setTimeStamp(0.386865049946);
    msg.setSource(12273U);
    msg.setSourceEntity(22U);
    msg.setDestination(29668U);
    msg.setDestinationEntity(8U);
    msg.target = 29674U;
    msg.lat = 0.420752718598;
    msg.lon = 0.367013833245;
    msg.z_units = 15U;
    msg.z = 0.38553302625;

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
    msg.setTimeStamp(0.355344421579);
    msg.setSource(16261U);
    msg.setSourceEntity(92U);
    msg.setDestination(63762U);
    msg.setDestinationEntity(39U);
    msg.target = 16552U;
    msg.lat = 0.939612457822;
    msg.lon = 0.295466719801;
    msg.z_units = 61U;
    msg.z = 0.247494994206;

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
    msg.setTimeStamp(0.291889144011);
    msg.setSource(46503U);
    msg.setSourceEntity(28U);
    msg.setDestination(26692U);
    msg.setDestinationEntity(94U);
    msg.target = 6083U;
    msg.lat = 0.917066515106;
    msg.lon = 0.882406142988;
    msg.z_units = 7U;
    msg.z = 0.936525830181;

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
    msg.setTimeStamp(0.564058185957);
    msg.setSource(10319U);
    msg.setSourceEntity(70U);
    msg.setDestination(51625U);
    msg.setDestinationEntity(101U);
    msg.locale.assign("MFCYUJSIGLJRHWQONSLMKLVVSCAIXLWYKOQZLYLOVYTKHEAP");
    const char tmp_msg_0[] = {122, -27, 55, -121, -66, 119, 50, -1, 89, -116, 26, -26, 113, 98, 45, -96, 25, -64, 100, 7, -74, 27, -107, -126, 42, 66};
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
    msg.setTimeStamp(0.353245612336);
    msg.setSource(51661U);
    msg.setSourceEntity(28U);
    msg.setDestination(49993U);
    msg.setDestinationEntity(175U);
    msg.locale.assign("BOEMYYXNLMWNVCLJAGOUFWOROETGZBCGJULURDKYHKBYIOSDQVPDZOJAEAHICSYCW");
    const char tmp_msg_0[] = {49, -104, -110, 103, 65, 5, 10, -81, -56, 79, 69, 76, 101, -80, -28, -109, 103, 8, -89, -1, 39, -85, 116, -88, 123, -8, 120, -7, 29, -95, 94, -77, -120, 15, -51, 58, -34, -2, -33, 63, 99, -124, 19, -32, 99, -126, 102, -95, -97, 35, 63, -6, 101, -55, -108, -116, 92, 117, 59, -43, -69, 68, 22, -77, 126, 98, 119, -102, 7, 15, 67, -38, -40, -97, -50, 12, -29, 37, -114, -43, -117, -105, -3, 90, 85, -89, -81, -76, 76, 108, 31, -106, 122, 116, 104, 69, 125, -49, 28, 6, -54, -45, 3, 25, -70, -6, -12, -5, -29, 108, 115, -58, -37, -82, 27, -23, 76, 111, -70, 78, 44, 120, 91, -107, -58, -55, 9, 18, -7, 96, -24, 87, -64, -79, -17, -44, -105, 79, 68, -123, 13};
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
    msg.setTimeStamp(0.951216301791);
    msg.setSource(40653U);
    msg.setSourceEntity(43U);
    msg.setDestination(13690U);
    msg.setDestinationEntity(135U);
    msg.locale.assign("UCSRLQYDILKGAGZBUEGCFKKIMSSPEZDXQYFANMZZGZHRZAQUHWQBVALCNKPFBDXTGHKMTNLNMJOANDUUVHYRITPENDOFZVIJIIIHFSDFIMTRFSTQVEOXLWOYJLVDFMYCMANHFWHBMJUPJZAEQNOWMFDUBPBVBKSHVRWXTHYXCLOQJVLRWXIVYPJOPJGQKRUNYBDXGPSGAUGESYYRHCLXJXOQTEJWRTBIWVOQ");
    const char tmp_msg_0[] = {-90, 59, 7, 10, -82, 114, 23, 123, 78, 104, 121, 22, 31, 23, -38, -52, 30, 44, -65, -16, 69, 115, -11, 65, -63, -21, 56, 53, -92, 0, -98, -37, -117, 7, -55, -109, -74, -78, 20, -45, 66, -47, 126, 70, -90, 125, -30, -112, -127, 82, -71, -120, 11, -22, 61, -53, 117, 50, -65, 59, 63, 122, 99, 30, -24, -45, -61, -65, 64, -3, -16, -116, -127, 83, -113, -101, 83, 0, 50, 23, -101, -42, 106, -41, 15, 47, 32, -32, -59, 27, -110, 73, -125, 104, -103, 91, -7, 125, -39, -6, -68, 90, -89, -109, -126, 34, 45, 97, 32, 67, -65, 115, 37, 100, 19, 59, -37, -102, -107, -82, -65, -77, 38, 30, 31, -81, 125, 62, 88, -15, -110, -54, 118, -92, -71, -86, -128, -99, 87, -11, 46};
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
    msg.setTimeStamp(0.457697256374);
    msg.setSource(18734U);
    msg.setSourceEntity(236U);
    msg.setDestination(64081U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.594761712452);
    msg.setSource(51234U);
    msg.setSourceEntity(204U);
    msg.setDestination(54795U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.187462807673);
    msg.setSource(15881U);
    msg.setSourceEntity(232U);
    msg.setDestination(49551U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.466669805294);
    msg.setSource(909U);
    msg.setSourceEntity(175U);
    msg.setDestination(35815U);
    msg.setDestinationEntity(70U);
    msg.camid = 237U;
    msg.x = 51304U;
    msg.y = 56292U;

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
    msg.setTimeStamp(0.619720592919);
    msg.setSource(60973U);
    msg.setSourceEntity(143U);
    msg.setDestination(15297U);
    msg.setDestinationEntity(158U);
    msg.camid = 46U;
    msg.x = 36471U;
    msg.y = 50209U;

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
    msg.setTimeStamp(0.42904399924);
    msg.setSource(64735U);
    msg.setSourceEntity(139U);
    msg.setDestination(1243U);
    msg.setDestinationEntity(78U);
    msg.camid = 186U;
    msg.x = 59331U;
    msg.y = 38856U;

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
    msg.setTimeStamp(0.619020941707);
    msg.setSource(64338U);
    msg.setSourceEntity(99U);
    msg.setDestination(18144U);
    msg.setDestinationEntity(58U);
    msg.camid = 216U;
    msg.x = 7302U;
    msg.y = 55849U;

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
    msg.setTimeStamp(0.62821527814);
    msg.setSource(36811U);
    msg.setSourceEntity(103U);
    msg.setDestination(33568U);
    msg.setDestinationEntity(43U);
    msg.camid = 99U;
    msg.x = 19502U;
    msg.y = 14631U;

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
    msg.setTimeStamp(0.195801302694);
    msg.setSource(63369U);
    msg.setSourceEntity(229U);
    msg.setDestination(4241U);
    msg.setDestinationEntity(67U);
    msg.camid = 142U;
    msg.x = 53483U;
    msg.y = 33513U;

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
    msg.setTimeStamp(0.942559765234);
    msg.setSource(44731U);
    msg.setSourceEntity(133U);
    msg.setDestination(60891U);
    msg.setDestinationEntity(195U);
    msg.tracking = 97U;
    msg.lat = 0.131769159464;
    msg.lon = 0.890876195229;
    msg.x = 0.864074903518;
    msg.y = 0.764127094238;
    msg.z = 0.293304483235;

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
    msg.setTimeStamp(0.436897080393);
    msg.setSource(50553U);
    msg.setSourceEntity(70U);
    msg.setDestination(9194U);
    msg.setDestinationEntity(30U);
    msg.tracking = 136U;
    msg.lat = 0.356665661918;
    msg.lon = 0.204650112524;
    msg.x = 0.811019729544;
    msg.y = 0.162957436995;
    msg.z = 0.282386741508;

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
    msg.setTimeStamp(0.418739606927);
    msg.setSource(9554U);
    msg.setSourceEntity(102U);
    msg.setDestination(37720U);
    msg.setDestinationEntity(210U);
    msg.tracking = 34U;
    msg.lat = 0.504591986878;
    msg.lon = 0.912912763446;
    msg.x = 0.840798818427;
    msg.y = 0.925280243134;
    msg.z = 0.353323676756;

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
    msg.setTimeStamp(0.238703985779);
    msg.setSource(9705U);
    msg.setSourceEntity(103U);
    msg.setDestination(6357U);
    msg.setDestinationEntity(50U);
    msg.target.assign("JCSMAGEJTSTWNWYJCXSGOHCRDWBOHFENXRYYQWUQRVXFOUOIQIJMRATDPWAPITZQJLTCBEDIVMVSOMNFIBBWMECLRCJHXQJEEONSPYPDWTBXZTNLWFGYLIOULZGSVMZAPKRECBB");
    msg.lbearing = 0.70272117552;
    msg.lelevation = 0.127883720674;
    msg.bearing = 0.485089118886;
    msg.elevation = 0.971754198942;
    msg.phi = 0.106976169139;
    msg.theta = 0.943750128386;
    msg.psi = 0.819078646682;
    msg.accuracy = 0.781547600615;

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
    msg.setTimeStamp(0.0683456762576);
    msg.setSource(22055U);
    msg.setSourceEntity(179U);
    msg.setDestination(1983U);
    msg.setDestinationEntity(51U);
    msg.target.assign("MUSXPWOVTLQJHQIXJAGARYGWIRPJYEVWXQMLYUBPCXPIOHKSFHJIAOVFMDYCYAMTNBCGNLEDRTNJWWIBEVLUZGDMLVIRDZFJFBPTAOCZQSNQUUVNCVOYISKXTXSKPCBPWNTFMRADZJDFKLHQOKOHXCGZSXJRGMCVRZBSQLNQVINHLFCWWOIPEMZRDRDUUMQCTHUNTSAA");
    msg.lbearing = 0.922163440122;
    msg.lelevation = 0.999250227989;
    msg.bearing = 0.0673556576639;
    msg.elevation = 0.38013588268;
    msg.phi = 0.788163849755;
    msg.theta = 0.0267328855428;
    msg.psi = 0.336444802032;
    msg.accuracy = 0.969863136219;

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
    msg.setTimeStamp(0.227353453322);
    msg.setSource(21727U);
    msg.setSourceEntity(67U);
    msg.setDestination(50087U);
    msg.setDestinationEntity(64U);
    msg.target.assign("YUMWVZPAXCSYJ");
    msg.lbearing = 0.222911401204;
    msg.lelevation = 0.990185709244;
    msg.bearing = 0.24834228893;
    msg.elevation = 0.706663552284;
    msg.phi = 0.561991633829;
    msg.theta = 0.797010665998;
    msg.psi = 0.744767205458;
    msg.accuracy = 0.140524894519;

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
    msg.setTimeStamp(0.881013237223);
    msg.setSource(5374U);
    msg.setSourceEntity(241U);
    msg.setDestination(11779U);
    msg.setDestinationEntity(124U);
    msg.target.assign("GLVLKBFMTPCQXIWUHCYNYQERURCMADRFKMBZAHQEXHYLTJLZKGXYXGUVTXUNAFORZZLOQPPLVKQZRTTFNGFWFSFKUMVDOQLISGEABEENMCTIIIGBNEDMHSORG");
    msg.x = 0.312474559484;
    msg.y = 0.463639008969;
    msg.z = 0.63999172817;
    msg.n = 0.246305007608;
    msg.e = 0.989949484256;
    msg.d = 0.749077334644;
    msg.phi = 0.874704004443;
    msg.theta = 0.0132681599013;
    msg.psi = 0.0128981609909;
    msg.accuracy = 0.778861423682;

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
    msg.setTimeStamp(0.303137485339);
    msg.setSource(52288U);
    msg.setSourceEntity(82U);
    msg.setDestination(34660U);
    msg.setDestinationEntity(185U);
    msg.target.assign("YQJLCXCGEMASJBMWQHIIESBGILAUXMUIMFXODFJNPULSUIZRFWNPLWNHRRLHTEOOKPHPQKMKCMWCPPUENJKXXAOYGFAERGAADIWZSHRNUCERRYDUYMTNRTDRWTXJPCGKTWGDYAFZLQCKUVTYQ");
    msg.x = 0.767315793178;
    msg.y = 0.174692557745;
    msg.z = 0.17707237981;
    msg.n = 0.482425536393;
    msg.e = 0.401664382396;
    msg.d = 0.195199484538;
    msg.phi = 0.361570734137;
    msg.theta = 0.425435092135;
    msg.psi = 0.565392363371;
    msg.accuracy = 0.655661322529;

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
    msg.setTimeStamp(0.26825779167);
    msg.setSource(29143U);
    msg.setSourceEntity(65U);
    msg.setDestination(29385U);
    msg.setDestinationEntity(49U);
    msg.target.assign("HEVNIMFPJQEHOXMRWLKUZCOZGCHFVDPHXSKVRBKBRRCMTXXNPGIHNJDAADRGLCOFWCVNNAMESXIDTKAUTRWZSMIPMULMFXABUUYJUGVMWJRWYMZIBSKAAGRSNSPPTDYOYVQHGPLCYQEUUYPDETWOFZOEYAESNWKKRZVBIITHKVZDQAOYJPWQCLGZFUSEDJMVNGZBOOBXNU");
    msg.x = 0.312943565676;
    msg.y = 0.91704141319;
    msg.z = 0.420499239291;
    msg.n = 0.0524331354791;
    msg.e = 0.63440800581;
    msg.d = 0.211430147685;
    msg.phi = 0.828651057729;
    msg.theta = 0.158481843042;
    msg.psi = 0.481311823645;
    msg.accuracy = 0.956649358366;

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
    msg.setTimeStamp(0.952791327399);
    msg.setSource(22501U);
    msg.setSourceEntity(139U);
    msg.setDestination(63444U);
    msg.setDestinationEntity(188U);
    msg.target.assign("JXQWXZLIPEZHQWAX");
    msg.lat = 0.325385346008;
    msg.lon = 0.405136373128;
    msg.z_units = 149U;
    msg.z = 0.208991937447;
    msg.accuracy = 0.0330392304705;

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
    msg.setTimeStamp(0.856618936073);
    msg.setSource(4558U);
    msg.setSourceEntity(230U);
    msg.setDestination(27548U);
    msg.setDestinationEntity(209U);
    msg.target.assign("DITECUDWYQJNHDVDQIKURQOWGVXXURBOUGFBGPOSGCOAQVRXNPTBLMKSFAANLTEPVEOMDYVVLXWIQYVMQYUMMBGKACBZEDWLGYKGFFSSDHJIQCCMJVXKRWCKLHSIXGINYGOATZJFGHJUMICEZ");
    msg.lat = 0.954630741541;
    msg.lon = 0.594874250293;
    msg.z_units = 168U;
    msg.z = 0.165501656886;
    msg.accuracy = 0.851652345043;

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
    msg.setTimeStamp(0.199761795363);
    msg.setSource(49566U);
    msg.setSourceEntity(218U);
    msg.setDestination(18018U);
    msg.setDestinationEntity(117U);
    msg.target.assign("LYMMQQJHWOAVPGXELPKZEWTYQUUGWLOWFNNTSFABCPESDTPZXRZQNOGXRCAMSORMBPUVSDHTADJYBZXHRJJUNDBDJIGFPOSHAUXCKNUQXTYRPVZSIIDBLQOWNKMKBAMQYSZPMV");
    msg.lat = 0.71969957314;
    msg.lon = 0.808148440069;
    msg.z_units = 210U;
    msg.z = 0.0717103858222;
    msg.accuracy = 0.42825338875;

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
    msg.setTimeStamp(0.844738116806);
    msg.setSource(40401U);
    msg.setSourceEntity(69U);
    msg.setDestination(23513U);
    msg.setDestinationEntity(27U);
    msg.name.assign("NTZMPLYWGTOWVMHNUIWXSWEYKRZPOCLIZBRAJDABRAFHOGHUVWSRKRQUSBEVGWFMAPIFJJHZINZMBJMTBRXYDLZAXEAQCYTVUMEGORGFPEVISLCKXJMFWUCOQWNXDUDIVGPECYUDLELBASJOYKYZEKSFJRIVQDCUFFOTBBNTAPQPKDFHTZLOSJJPBEHPXDMRWZQQFMHHGQKXTTQUH");
    msg.lat = 0.183995963634;
    msg.lon = 0.544788639662;
    msg.z = 0.297921088846;
    msg.z_units = 6U;

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
    msg.setTimeStamp(0.852884648209);
    msg.setSource(385U);
    msg.setSourceEntity(146U);
    msg.setDestination(21108U);
    msg.setDestinationEntity(26U);
    msg.name.assign("BVHWVEBDKRGYFNXDFQHYGXFBLOSFGACSYDXWCOLZHAEUUINXSSMRCGVNJIQSWLGQWPZKPVZUFOJOXMXVCBPSTYNLRBPAYDILMBCKJNAQVDOHAXQUTWHPTTGKPAAAQJVQYFORYECITWNQNEBPJMEMJPOEFZBHVZSLQNCMIZHOIULHTRWYH");
    msg.lat = 0.575761104048;
    msg.lon = 0.0922310689972;
    msg.z = 0.807776222983;
    msg.z_units = 196U;

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
    msg.setTimeStamp(0.88206171814);
    msg.setSource(12690U);
    msg.setSourceEntity(3U);
    msg.setDestination(16904U);
    msg.setDestinationEntity(179U);
    msg.name.assign("YEXHAVIPEQSJNHYGKAZCJMCJXSRXZANVRPQONSHHQZSDNXGZYDSPJDXBQUPCDZYBVVEKKPBIEUDHMLFVOWJMTXBELCZUAJRTRMQFGMSZHOGWJYLTQMOFWTEOHKVHUKUV");
    msg.lat = 0.938871315985;
    msg.lon = 0.29017337088;
    msg.z = 0.0482025180846;
    msg.z_units = 150U;

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
    msg.setTimeStamp(0.405031807182);
    msg.setSource(573U);
    msg.setSourceEntity(240U);
    msg.setDestination(51976U);
    msg.setDestinationEntity(96U);
    msg.op = 223U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("MCTSPAEHRBEGHTVPJMIVMYJOFYZWZTDLJWPNFPACPRQAUNGBGKXBTZKSGEJVCYAISJKCONXYFOGCSRLTHSWNUXQTRDMJWICYDRQENONCIBUEGQAVQIYLIHXLVVCUNBKXMSFSKXGFDGSZYBLRIDWWHKHHWNDWAOPZBQFORPKUXEBSSKVLFXBUBZNOYUTUERFUOFW");
    tmp_msg_0.lat = 0.29201473781;
    tmp_msg_0.lon = 0.289954239233;
    tmp_msg_0.z = 0.82300978887;
    tmp_msg_0.z_units = 211U;
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
    msg.setTimeStamp(0.606578156301);
    msg.setSource(1966U);
    msg.setSourceEntity(199U);
    msg.setDestination(846U);
    msg.setDestinationEntity(130U);
    msg.op = 39U;

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
    msg.setTimeStamp(0.402184607094);
    msg.setSource(21178U);
    msg.setSourceEntity(155U);
    msg.setDestination(38617U);
    msg.setDestinationEntity(32U);
    msg.op = 201U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("WBCRLJJZDZYQOWFADUMIRIZAVFXWBTNITLKVUVDLZBGPXIVSYMENKMTSWHWMNCAOYHUNDMQLFEDLFHNBVJUJZTVNOSCVORVGHAKSQQOEYOPJBVAYZIWBMSNFXPDKSKIAMGAMKFQGOOPGZHKPJQYCENYTAZSAPKKXSORXNPEGCBGEWLLJ");
    tmp_msg_0.lat = 0.399094283866;
    tmp_msg_0.lon = 0.463442792748;
    tmp_msg_0.z = 0.864290693877;
    tmp_msg_0.z_units = 208U;
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
    msg.setTimeStamp(0.291804157448);
    msg.setSource(36606U);
    msg.setSourceEntity(250U);
    msg.setDestination(40683U);
    msg.setDestinationEntity(47U);
    msg.value = 0.435199854182;
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
    msg.setTimeStamp(0.998355464808);
    msg.setSource(41482U);
    msg.setSourceEntity(177U);
    msg.setDestination(4580U);
    msg.setDestinationEntity(38U);
    msg.value = 0.756950491375;
    msg.type = 44U;

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
    msg.setTimeStamp(0.750122468152);
    msg.setSource(55015U);
    msg.setSourceEntity(187U);
    msg.setDestination(56347U);
    msg.setDestinationEntity(157U);
    msg.value = 0.214812588319;
    msg.type = 46U;

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
    msg.setTimeStamp(0.679304831744);
    msg.setSource(8856U);
    msg.setSourceEntity(53U);
    msg.setDestination(12546U);
    msg.setDestinationEntity(13U);
    msg.value = 0.568946265396;

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
    msg.setTimeStamp(0.607591364537);
    msg.setSource(36952U);
    msg.setSourceEntity(242U);
    msg.setDestination(64900U);
    msg.setDestinationEntity(116U);
    msg.value = 0.148217061662;

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
    msg.setTimeStamp(0.298714476181);
    msg.setSource(2887U);
    msg.setSourceEntity(75U);
    msg.setDestination(55263U);
    msg.setDestinationEntity(44U);
    msg.value = 0.738823291559;

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
    msg.setTimeStamp(0.521681085139);
    msg.setSource(32562U);
    msg.setSourceEntity(66U);
    msg.setDestination(57406U);
    msg.setDestinationEntity(74U);
    msg.timestamp_last_service = 0.59280183439;
    msg.time_next_service = 0.942133063536;
    msg.time_motor_next_service = 0.333904266452;
    msg.time_idle_ground = 0.531379127318;
    msg.time_idle_air = 0.190779604369;
    msg.time_idle_water = 0.611396332273;
    msg.time_idle_underwater = 0.329616777246;
    msg.time_idle_unknown = 0.14182588039;
    msg.time_motor_ground = 0.703382715889;
    msg.time_motor_air = 0.0280698073626;
    msg.time_motor_water = 0.599036272311;
    msg.time_motor_underwater = 0.553869957871;
    msg.time_motor_unknown = 0.632602882464;
    msg.rpm_min = -9134;
    msg.rpm_max = -6019;
    msg.depth_max = 0.0506088652045;

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
    msg.setTimeStamp(0.104929195265);
    msg.setSource(36572U);
    msg.setSourceEntity(191U);
    msg.setDestination(29140U);
    msg.setDestinationEntity(3U);
    msg.timestamp_last_service = 0.461123689458;
    msg.time_next_service = 0.60690055168;
    msg.time_motor_next_service = 0.373662364833;
    msg.time_idle_ground = 0.0391727930737;
    msg.time_idle_air = 0.680250316723;
    msg.time_idle_water = 0.122727072983;
    msg.time_idle_underwater = 0.932881150433;
    msg.time_idle_unknown = 0.472635154064;
    msg.time_motor_ground = 0.860649069879;
    msg.time_motor_air = 0.422953274595;
    msg.time_motor_water = 0.390741119354;
    msg.time_motor_underwater = 0.767290083337;
    msg.time_motor_unknown = 0.909107724196;
    msg.rpm_min = -4562;
    msg.rpm_max = -4379;
    msg.depth_max = 0.234211473686;

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
    msg.setTimeStamp(0.278219922605);
    msg.setSource(54083U);
    msg.setSourceEntity(83U);
    msg.setDestination(27243U);
    msg.setDestinationEntity(199U);
    msg.timestamp_last_service = 0.304470094875;
    msg.time_next_service = 0.432205093159;
    msg.time_motor_next_service = 0.113762718725;
    msg.time_idle_ground = 0.228276907694;
    msg.time_idle_air = 0.132316994758;
    msg.time_idle_water = 0.997351317267;
    msg.time_idle_underwater = 0.646278805338;
    msg.time_idle_unknown = 0.65719396961;
    msg.time_motor_ground = 0.861819021732;
    msg.time_motor_air = 0.315932642968;
    msg.time_motor_water = 0.13791816534;
    msg.time_motor_underwater = 0.839046817025;
    msg.time_motor_unknown = 0.814145030724;
    msg.rpm_min = 31151;
    msg.rpm_max = 3738;
    msg.depth_max = 0.439846816505;

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
    msg.setTimeStamp(0.0915651568085);
    msg.setSource(9154U);
    msg.setSourceEntity(46U);
    msg.setDestination(60844U);
    msg.setDestinationEntity(70U);
    msg.severity = 224U;
    msg.text.assign("HKCFKRADMBIWOZCSDGYOIWSIUJVHKTKRKTNFXZOYNSMKPBXKMLQWEMRRBEJRYCBPIIXTYJGMMOFCXLXGZFVQLOLPLFRIGFHQFCJPRJAZBYTNADUCMSPNAQSTXI");

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
    msg.setTimeStamp(0.766165956144);
    msg.setSource(51189U);
    msg.setSourceEntity(213U);
    msg.setDestination(351U);
    msg.setDestinationEntity(161U);
    msg.severity = 27U;
    msg.text.assign("DOSYOQOYZYEGSOPGJSUPMUTLXVUIMQNGAUITEYUYCXEZBDJJBZCAOADPYRVMINHVBDXOGOLQXWKJRMAWNSNGEPWZSGDAPITVDJSTJCIYQPGKDXLZIHFZHPIQURYRCWLPDCLPZRLMLWRTSZFJFMVFONFUEHREFCFAZDKAKXWTAMVRUTFFELHGWXTBJERSVQDYE");

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
    msg.setTimeStamp(0.809533873997);
    msg.setSource(38689U);
    msg.setSourceEntity(26U);
    msg.setDestination(10325U);
    msg.setDestinationEntity(121U);
    msg.severity = 67U;
    msg.text.assign("CIKZNVGCMAFBYJCZTWUSAEAYSTPFOCVDNILGFQZSWZUIMLYLDQTTLYDHGLYHPFXQMRZFSNPYUSFVMOTBABCHDUIEXCNRXESEKNOJBKVVWHBRZQAQZVHRVTODBHBBFIXDGZKQPMWJFGLAYRWJGQUKDJCARPNNTAXPJJWKZUWIKWMCGDXXFGBMOJLVHJQHQTKMEIP");

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
    msg.setTimeStamp(0.0072048150303);
    msg.setSource(49244U);
    msg.setSourceEntity(89U);
    msg.setDestination(39683U);
    msg.setDestinationEntity(178U);
    msg.channel = -78;
    msg.value = -1473510776;
    msg.gain = 244U;

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
    msg.setTimeStamp(0.179972755064);
    msg.setSource(10324U);
    msg.setSourceEntity(22U);
    msg.setDestination(49314U);
    msg.setDestinationEntity(131U);
    msg.channel = -109;
    msg.value = 1505512549;
    msg.gain = 207U;

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
    msg.setTimeStamp(0.442563718273);
    msg.setSource(52828U);
    msg.setSourceEntity(92U);
    msg.setDestination(573U);
    msg.setDestinationEntity(240U);
    msg.channel = 79;
    msg.value = -795851417;
    msg.gain = 115U;

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
    msg.setTimeStamp(0.709209280044);
    msg.setSource(41003U);
    msg.setSourceEntity(155U);
    msg.setDestination(45705U);
    msg.setDestinationEntity(58U);
    msg.ch01 = 0.046163361653;
    msg.ch02 = 0.784734905616;
    msg.ch03 = 0.356591311228;
    msg.ch04 = 0.945656407431;
    msg.ch05 = 0.634903728471;
    msg.ch06 = 0.0180755523607;
    msg.ch07 = 0.152025092719;
    msg.ch08 = 0.513763140766;
    msg.ch09 = 0.0201148981845;
    msg.ch10 = 0.566840419808;
    msg.ch11 = 0.344726755892;
    msg.ch12 = 0.502079832518;
    msg.ch13 = 0.382035614705;
    msg.ch14 = 0.0918335092;
    msg.ch15 = 0.60251919417;
    msg.ch16 = 0.945159821351;

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
    msg.setTimeStamp(0.155926667988);
    msg.setSource(6492U);
    msg.setSourceEntity(179U);
    msg.setDestination(20098U);
    msg.setDestinationEntity(149U);
    msg.ch01 = 0.933986731292;
    msg.ch02 = 0.736127219657;
    msg.ch03 = 0.128713666391;
    msg.ch04 = 0.166481035304;
    msg.ch05 = 0.414514821002;
    msg.ch06 = 0.00771417350768;
    msg.ch07 = 0.160417143181;
    msg.ch08 = 0.684233035101;
    msg.ch09 = 0.496329286157;
    msg.ch10 = 0.340167726629;
    msg.ch11 = 0.39995224549;
    msg.ch12 = 0.426679026351;
    msg.ch13 = 0.27317773449;
    msg.ch14 = 0.560687094773;
    msg.ch15 = 0.868939124206;
    msg.ch16 = 0.0207697290172;

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
    msg.setTimeStamp(0.74263864755);
    msg.setSource(39257U);
    msg.setSourceEntity(118U);
    msg.setDestination(36718U);
    msg.setDestinationEntity(125U);
    msg.ch01 = 0.958849511013;
    msg.ch02 = 0.953083463737;
    msg.ch03 = 0.772532105184;
    msg.ch04 = 0.876488615975;
    msg.ch05 = 0.325770565558;
    msg.ch06 = 0.310972557499;
    msg.ch07 = 0.329469817313;
    msg.ch08 = 0.686654446568;
    msg.ch09 = 0.291236929318;
    msg.ch10 = 0.329705246555;
    msg.ch11 = 0.1331349679;
    msg.ch12 = 0.998885796956;
    msg.ch13 = 0.496594788177;
    msg.ch14 = 0.926665356446;
    msg.ch15 = 0.235047540762;
    msg.ch16 = 0.0603490631551;

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
    msg.setTimeStamp(0.910891203317);
    msg.setSource(64839U);
    msg.setSourceEntity(59U);
    msg.setDestination(36287U);
    msg.setDestinationEntity(5U);
    msg.time = 0.105123466213;
    msg.ang = 0.257237360195;

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
    msg.setTimeStamp(0.617891687621);
    msg.setSource(37115U);
    msg.setSourceEntity(148U);
    msg.setDestination(41547U);
    msg.setDestinationEntity(17U);
    msg.time = 0.0395405227901;
    msg.ang = 0.427567895269;

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
    msg.setTimeStamp(0.613420853434);
    msg.setSource(38089U);
    msg.setSourceEntity(239U);
    msg.setDestination(26846U);
    msg.setDestinationEntity(111U);
    msg.time = 0.6223001646;
    msg.ang = 0.299183752172;

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
    msg.setTimeStamp(0.0867604536804);
    msg.setSource(5493U);
    msg.setSourceEntity(246U);
    msg.setDestination(18394U);
    msg.setDestinationEntity(117U);
    msg.value = 0.230196009604;

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
    msg.setTimeStamp(0.461626361934);
    msg.setSource(48838U);
    msg.setSourceEntity(222U);
    msg.setDestination(42723U);
    msg.setDestinationEntity(223U);
    msg.value = 0.151143352449;

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
    msg.setTimeStamp(0.25511843236);
    msg.setSource(3991U);
    msg.setSourceEntity(192U);
    msg.setDestination(26674U);
    msg.setDestinationEntity(10U);
    msg.value = 0.904954934777;

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
    msg.setTimeStamp(0.88771077153);
    msg.setSource(5856U);
    msg.setSourceEntity(48U);
    msg.setDestination(22953U);
    msg.setDestinationEntity(169U);
    msg.value = 0.173647317353;

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
    msg.setTimeStamp(0.976000120443);
    msg.setSource(7359U);
    msg.setSourceEntity(242U);
    msg.setDestination(14586U);
    msg.setDestinationEntity(115U);
    msg.value = 0.602990808747;

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
    msg.setTimeStamp(0.0425681041194);
    msg.setSource(64156U);
    msg.setSourceEntity(199U);
    msg.setDestination(31395U);
    msg.setDestinationEntity(21U);
    msg.value = 0.178664446998;

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
    msg.setTimeStamp(0.211062426467);
    msg.setSource(54082U);
    msg.setSourceEntity(133U);
    msg.setDestination(47508U);
    msg.setDestinationEntity(151U);
    msg.value = 0.260289832095;

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
    msg.setTimeStamp(0.364705852567);
    msg.setSource(51752U);
    msg.setSourceEntity(27U);
    msg.setDestination(42974U);
    msg.setDestinationEntity(221U);
    msg.value = 0.231492080785;

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
    msg.setTimeStamp(0.614807570693);
    msg.setSource(60193U);
    msg.setSourceEntity(146U);
    msg.setDestination(27363U);
    msg.setDestinationEntity(37U);
    msg.value = 0.710183696506;

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
    msg.setTimeStamp(0.153895069109);
    msg.setSource(25675U);
    msg.setSourceEntity(19U);
    msg.setDestination(33134U);
    msg.setDestinationEntity(86U);
    msg.l2 = 58;
    msg.l3 = -114;
    msg.iridium = -75;
    msg.modem = -39;
    msg.pumps = -27;
    msg.vhf = -48;

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
    msg.setTimeStamp(0.208062733676);
    msg.setSource(51009U);
    msg.setSourceEntity(124U);
    msg.setDestination(65255U);
    msg.setDestinationEntity(184U);
    msg.l2 = -45;
    msg.l3 = -42;
    msg.iridium = -34;
    msg.modem = -68;
    msg.pumps = -9;
    msg.vhf = 90;

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
    msg.setTimeStamp(0.521208977553);
    msg.setSource(23337U);
    msg.setSourceEntity(95U);
    msg.setDestination(50261U);
    msg.setDestinationEntity(219U);
    msg.l2 = -80;
    msg.l3 = 35;
    msg.iridium = -85;
    msg.modem = -89;
    msg.pumps = 55;
    msg.vhf = -25;

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
    msg.setTimeStamp(0.00126781817155);
    msg.setSource(55347U);
    msg.setSourceEntity(71U);
    msg.setDestination(17135U);
    msg.setDestinationEntity(37U);
    msg.angle = 0.383417527912;
    msg.reference.assign("MZDBBHEBISTXXLPIQOEUOOUFNRCWDNJFNYYHGQGYPLTFPRTAXKWQKGIQSXWTZWQHFKEQLHSRGMWVSRNKMZVDJPVBIJBEXKVXXYMROCAJDYDNUTSMIGVQSKCEXZNLDUIULDATCE");
    msg.speed = 0.852102164854;

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
    msg.setTimeStamp(0.951232454708);
    msg.setSource(49788U);
    msg.setSourceEntity(248U);
    msg.setDestination(4831U);
    msg.setDestinationEntity(166U);
    msg.angle = 0.0945571764614;
    msg.reference.assign("ZBFDHZQYAEHVYURVAFNXZDFNGEJCFYDTMLJXOCLPPQCXQQMOQJNHSLTKRBGXM");
    msg.speed = 0.469408869125;

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
    msg.setTimeStamp(0.673446073969);
    msg.setSource(19070U);
    msg.setSourceEntity(240U);
    msg.setDestination(60403U);
    msg.setDestinationEntity(170U);
    msg.angle = 0.47321096097;
    msg.reference.assign("RLUPBZEUEFZTSUMKQVXSUYXTUQZAJJEFWWGGMFLRQOFOTLETKYNUINCQKEBSRQSSOUKCTMIPXWOXELNYFGOOSCDIZRNCTTWBDADRPVBWNGVNRYCAXAYQFZPDBHY");
    msg.speed = 0.816881913836;

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
    msg.setTimeStamp(0.193228754278);
    msg.setSource(22705U);
    msg.setSourceEntity(216U);
    msg.setDestination(27422U);
    msg.setDestinationEntity(237U);
    msg.angle = 0.216259144286;
    msg.direction.assign("DEVRPLYHDMSYUXMOPOECBFANBMTUFRZHGUXQQCZKJWQDYRRFALJDJQNZIKEFVMAIAARMWOOUJFVOCXIOIHKYBDXBWLIHXVWIZUVCECTOSLSOPHZHGAKXMZYNADWQJITBPDBBNPRUNMRYCNTSYFFIVJRPRGSZBVYWSZJMNPLCGJHAIXLQNTXGUBNLKGJQXTFEKVINMYPVOKHDGDFLUEVQZKGXLQYOGWPAESHWTZPUTECTDUF");
    msg.speed = 0.312933819192;

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
    msg.setTimeStamp(0.0921674598915);
    msg.setSource(41886U);
    msg.setSourceEntity(57U);
    msg.setDestination(11427U);
    msg.setDestinationEntity(90U);
    msg.angle = 0.816463224216;
    msg.direction.assign("LVDGEMAWWNLPEGVQRKGXXSPPXUBFSIBMUJZHYOYSNFBAMTIQRIFMUZTWFXOEGCJGLNH");
    msg.speed = 0.589892273934;

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
    msg.setTimeStamp(0.860447909493);
    msg.setSource(57894U);
    msg.setSourceEntity(114U);
    msg.setDestination(50352U);
    msg.setDestinationEntity(146U);
    msg.angle = 0.957622021784;
    msg.direction.assign("FNTURBVITYHFOZOQOMMPECEBTTAUPBJCVJXBQKPVMVFIVUBUDIDKTMNJLMBQKOOILONSDZASZRVH");
    msg.speed = 0.526306526907;

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

  return test.getReturnValue();
}

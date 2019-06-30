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
// IMC XML MD5: 39c2acd684582792490e08b15fccb515                            *
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
    msg.setTimeStamp(0.357713485882);
    msg.setSource(48518U);
    msg.setSourceEntity(5U);
    msg.setDestination(9246U);
    msg.setDestinationEntity(139U);
    msg.state = 243U;
    msg.flags = 17U;
    msg.description.assign("IOKENSZIPIOMROEQGMNFTWUVXCVNWKNSAW");

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
    msg.setTimeStamp(0.546367272596);
    msg.setSource(24211U);
    msg.setSourceEntity(42U);
    msg.setDestination(56567U);
    msg.setDestinationEntity(173U);
    msg.state = 174U;
    msg.flags = 85U;
    msg.description.assign("UAKFIZTWGBZYYVCUZWTDXE");

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
    msg.setTimeStamp(0.479400485248);
    msg.setSource(30951U);
    msg.setSourceEntity(35U);
    msg.setDestination(51466U);
    msg.setDestinationEntity(24U);
    msg.state = 7U;
    msg.flags = 80U;
    msg.description.assign("BVPIMECRBCWUNVFXEUUVTTECCWFKQDNSRHPDJNBTDCIFINPIKYSHLPAPZZDFXRYWLHZBHMEZMJXMSLLPB");

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
    msg.setTimeStamp(0.998743778718);
    msg.setSource(46279U);
    msg.setSourceEntity(138U);
    msg.setDestination(23262U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.328937769777);
    msg.setSource(13778U);
    msg.setSourceEntity(167U);
    msg.setDestination(41414U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.762076608964);
    msg.setSource(41494U);
    msg.setSourceEntity(162U);
    msg.setDestination(8210U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.404522739632);
    msg.setSource(46447U);
    msg.setSourceEntity(68U);
    msg.setDestination(31097U);
    msg.setDestinationEntity(119U);
    msg.id = 247U;
    msg.label.assign("DUCGUQMGIVAUJWXVOTWWCBYXZSXSJSBDYMXPUTUKGPVHMPEBIASFGGDCXJIQKMHRCRRDALJAGTYRYTM");
    msg.component.assign("XNYZHAJQKKDTPOUJEFUSKNQJOLGQLBHRATVQNCYTXIIVYENMQPWOXIOKGUQJRSUOOGDUDSMLWYACRGHLLLLHSSBDGYICLCBCZMBWYKGWFD");
    msg.act_time = 35497U;
    msg.deact_time = 58121U;

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
    msg.setTimeStamp(0.755416238678);
    msg.setSource(8470U);
    msg.setSourceEntity(185U);
    msg.setDestination(2739U);
    msg.setDestinationEntity(236U);
    msg.id = 243U;
    msg.label.assign("ZRMKAYGJPNWQMOXYZFEMXHOACPOQLTQVRVIOEDZTBEBQRTHJQBWSZPUNOLMIKUUBHSQAWKVSIJYAXRKTKGNSRDLNRYQUBXWICVFZDYLOCATOEOUVAZCNOAXMIFMRRJSKXDCWACXJRDKGJPEUFPZEGLTBU");
    msg.component.assign("VHBDMNTCYCVJHRIRPRBDJCPEZDSADWGNIYNVTSKSTZIFQJDXZFQBFWDNTGZAOERVBWRVTYIHAJMCGPFMLASGGZGBVHQRHPWXKFAEDEMGUYSDMHIYFLZSZZRQPYBMJKOLUQGPBLKXQIMJMPWSLASOJCXEBVEKAATFKPGIGXKZSNCLENKRCOBUXLQUWWVDBIXDRLTHYRTQPHUHEFNOUWICESJVQTWOOMCJEVNPN");
    msg.act_time = 1859U;
    msg.deact_time = 37227U;

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
    msg.setTimeStamp(0.49696851971);
    msg.setSource(55123U);
    msg.setSourceEntity(76U);
    msg.setDestination(4859U);
    msg.setDestinationEntity(1U);
    msg.id = 12U;
    msg.label.assign("NYTAJVHYSIIUYCTAROLEPPHWSFECJOMGVIFZLJFMXNFJNQHYDYKDZZQBYXQUPLBYPMJOAGPSRADIGIPWHEXCDZXXSUAFFEINGUOOFLXHAEXQRJRGOMKDCBPKEIZGMXCINBOMLVZKKBWUTMSGUJWNVUDFHRHHOEMEPXWSTTTKBEQWJTOLRNVAANFVWTKCKDUCTSTHLKJOGDRFBNMZHIVPCU");
    msg.component.assign("EYORZMZMSXFWFDPVYFABGRURBMVTSKLDCRXJVMIQHJVYAKXPREQYEPVPETLVCXXAAKIGHVSNBOUWNQOLLICPKOZGGSEZJHJPJTCUQLYXPEJABTCZQWEZOBCILQWTTFTBMYZTNLDGDAFTTHAMGKSKFANAUNZXIEHROWHXHFLNQGRSPSVUORDBPGIEQ");
    msg.act_time = 1202U;
    msg.deact_time = 65388U;

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
    msg.setTimeStamp(0.230608658488);
    msg.setSource(21657U);
    msg.setSourceEntity(117U);
    msg.setDestination(47862U);
    msg.setDestinationEntity(109U);
    msg.id = 238U;

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
    msg.setTimeStamp(0.0255462419944);
    msg.setSource(31580U);
    msg.setSourceEntity(30U);
    msg.setDestination(16949U);
    msg.setDestinationEntity(59U);
    msg.id = 172U;

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
    msg.setTimeStamp(0.345610165542);
    msg.setSource(17034U);
    msg.setSourceEntity(64U);
    msg.setDestination(4776U);
    msg.setDestinationEntity(233U);
    msg.id = 186U;

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
    msg.setTimeStamp(0.931015137387);
    msg.setSource(50684U);
    msg.setSourceEntity(131U);
    msg.setDestination(15677U);
    msg.setDestinationEntity(80U);
    msg.op = 123U;
    msg.list.assign("EUCWWIGPJXSMJAEYBLOJSPTHJHYXTKLWPCCHDVBLOORHMRURZATVZOKVGLVCZMQABMWJUSKLBFLHRZIYDBIJGPMQUKWPNMVBQNPLDKRHCKFLDUUNVRXUFZSSRKEZCOWX");

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
    msg.setTimeStamp(0.670116812639);
    msg.setSource(62732U);
    msg.setSourceEntity(97U);
    msg.setDestination(11893U);
    msg.setDestinationEntity(38U);
    msg.op = 249U;
    msg.list.assign("ZSDCKKJGTJMJVQEENYTYTDUSARXZQBEPCVYWMEOTSBJIYKCLGQUMSCOTOIVJMMEELDZROIUUGIUKRF");

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
    msg.setTimeStamp(0.472321213082);
    msg.setSource(37308U);
    msg.setSourceEntity(198U);
    msg.setDestination(370U);
    msg.setDestinationEntity(116U);
    msg.op = 80U;
    msg.list.assign("BXKAQSBGELERZJJSPQHBOIINABAGKBXRPODZWKAKUCSCMDJSUCGUSDAVZTWWAUBEXVATZPQWEXCVMXYMQJOUZWDTHOYTGIYG");

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
    msg.setTimeStamp(0.0429810786576);
    msg.setSource(39767U);
    msg.setSourceEntity(43U);
    msg.setDestination(3535U);
    msg.setDestinationEntity(108U);
    msg.value = 239U;

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
    msg.setTimeStamp(0.0897028487261);
    msg.setSource(28212U);
    msg.setSourceEntity(138U);
    msg.setDestination(18117U);
    msg.setDestinationEntity(89U);
    msg.value = 238U;

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
    msg.setTimeStamp(0.0177631783451);
    msg.setSource(37192U);
    msg.setSourceEntity(9U);
    msg.setDestination(58371U);
    msg.setDestinationEntity(145U);
    msg.value = 9U;

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
    msg.setTimeStamp(0.405146021303);
    msg.setSource(49357U);
    msg.setSourceEntity(7U);
    msg.setDestination(701U);
    msg.setDestinationEntity(146U);
    msg.consumer.assign("XULYMJPBUZJRHETNACLDSAHXUPCSCVEFIIUYAQLDVEGFDSZCQJZVQOKWLMWTGDOIOLTO");
    msg.message_id = 62098U;

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
    msg.setTimeStamp(0.32815701116);
    msg.setSource(64275U);
    msg.setSourceEntity(29U);
    msg.setDestination(46697U);
    msg.setDestinationEntity(136U);
    msg.consumer.assign("GSGXUFBJAXCIJMMDXQHKUWRNEMLSGNEPRDLNGREIKLJQDGCOGY");
    msg.message_id = 7673U;

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
    msg.setTimeStamp(0.562701570701);
    msg.setSource(26699U);
    msg.setSourceEntity(64U);
    msg.setDestination(17195U);
    msg.setDestinationEntity(122U);
    msg.consumer.assign("SRVMNMGBNTFPGHYJQZCIKTNEYJIYDYOIAJOFCYKTORLSAMSKMDWMWBIGGQKZMHAVIZGAGTUDAFJOCOCPWYBJFEWVRIHBBSKDVFNLVZWTPZLZWNQZKLAXDFMQHSUEJEUZPDGGBHTMXPYAVUXKNXRNBJKUFNIVQECNKUOQRNUTBVLYWXDHDMYBSGFTECPSPJXHMXISTJXQFCBSLVEZCROKUXTOZOHOCHXGFEPIEDREUQRQJHWRWLULYVW");
    msg.message_id = 21686U;

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
    msg.setTimeStamp(0.0874955193599);
    msg.setSource(13459U);
    msg.setSourceEntity(64U);
    msg.setDestination(36508U);
    msg.setDestinationEntity(204U);
    msg.type = 138U;

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
    msg.setTimeStamp(0.723391958725);
    msg.setSource(52931U);
    msg.setSourceEntity(203U);
    msg.setDestination(18184U);
    msg.setDestinationEntity(225U);
    msg.type = 78U;

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
    msg.setTimeStamp(0.603014012142);
    msg.setSource(64104U);
    msg.setSourceEntity(125U);
    msg.setDestination(15132U);
    msg.setDestinationEntity(48U);
    msg.type = 194U;

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
    msg.setTimeStamp(0.585686584769);
    msg.setSource(55723U);
    msg.setSourceEntity(47U);
    msg.setDestination(11560U);
    msg.setDestinationEntity(0U);
    msg.op = 220U;

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
    msg.setTimeStamp(0.556021006399);
    msg.setSource(42853U);
    msg.setSourceEntity(87U);
    msg.setDestination(13625U);
    msg.setDestinationEntity(100U);
    msg.op = 55U;

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
    msg.setTimeStamp(0.662308261492);
    msg.setSource(19118U);
    msg.setSourceEntity(211U);
    msg.setDestination(41577U);
    msg.setDestinationEntity(175U);
    msg.op = 53U;

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
    msg.setTimeStamp(0.860795028723);
    msg.setSource(20099U);
    msg.setSourceEntity(247U);
    msg.setDestination(20091U);
    msg.setDestinationEntity(169U);
    msg.total_steps = 108U;
    msg.step_number = 0U;
    msg.step.assign("ABUBJJXSOBHNYKDDZVZEQFXCRIPPRQHFSQOBOPZDLKLFYNZGEOVLCQKZQEQTGLRDOF");
    msg.flags = 85U;

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
    msg.setTimeStamp(0.990522382698);
    msg.setSource(55538U);
    msg.setSourceEntity(87U);
    msg.setDestination(29567U);
    msg.setDestinationEntity(241U);
    msg.total_steps = 196U;
    msg.step_number = 160U;
    msg.step.assign("ZQECTPSJEQSUFCYATXDZHVEHZIBCSMDXVRJUHHTQJDWIXPKDZRIKAEROWOWSIWDRNMXFSGVFNTMPUNDQIOSYFOHWBIKGKGIXEBPVRXALOPEJIMEDCJSFMLONXYUXGQPYAPLKTCVHWDBVWGJEELIOGBJECUKHNKPBXZJBLMKYWTQHLKHDGPFAQFZZYSSTJVURIRMNGOFQLCFBZAUYDBRCKOYBGLFRASGRVQTOMVAUMLUNATWCVYMPCTLUXJQ");
    msg.flags = 46U;

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
    msg.setTimeStamp(0.762187365499);
    msg.setSource(58879U);
    msg.setSourceEntity(31U);
    msg.setDestination(30459U);
    msg.setDestinationEntity(9U);
    msg.total_steps = 7U;
    msg.step_number = 137U;
    msg.step.assign("RCJVEIEDCIUVGQQTZZLPKTIWHJWUSKOCZCYAHBADBCJWUVXNRTLXOAOVHXZXPOAIGSNHAJAZGUTEUDQARTPSHUPJTFWUNHNLBXJIBDDPZEQSSV");
    msg.flags = 55U;

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
    msg.setTimeStamp(0.338151812055);
    msg.setSource(40309U);
    msg.setSourceEntity(207U);
    msg.setDestination(9704U);
    msg.setDestinationEntity(253U);
    msg.state = 183U;
    msg.error.assign("SQKUUVWGFQZBBYQVWLZTIVPMAUEITAFTQPLEJRTBRWQMHNWLAKSPGTBMAVDYYSCGNZJEHFTFEBCXOUFVQSHPGBHDHUFMBNAPCCTGVADKQMNZPVAKOGNAG");

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
    msg.setTimeStamp(0.285035994352);
    msg.setSource(1071U);
    msg.setSourceEntity(201U);
    msg.setDestination(57005U);
    msg.setDestinationEntity(162U);
    msg.state = 218U;
    msg.error.assign("BBWTJMHWYQMHDLYNZEITGKNFRIYDFDENNPWUAFDLWXGHUARTLLVDHZSUXJPRYKSLNJJQSKKQIGENHCKVQOYYXQNZBABTFCMKSMMSYGPZEXFQNCOVFLAMNJKXDYTAMSFLXUSUUBSVFFMAPLUVTHYLRRWBIOQARBIJQTWAICECMR");

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
    msg.setTimeStamp(0.325138081115);
    msg.setSource(63400U);
    msg.setSourceEntity(121U);
    msg.setDestination(11765U);
    msg.setDestinationEntity(138U);
    msg.state = 108U;
    msg.error.assign("YBZFLXRVCWYAPYKUFHKQUDUGCBIUBAWOMJNUZFDKWSILGJPRPQRFTEASANOMXYSZEFEJQRTAGXZEWOQGASHAVUMBP");

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
    msg.setTimeStamp(0.539297485929);
    msg.setSource(65410U);
    msg.setSourceEntity(34U);
    msg.setDestination(59377U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.879906371077);
    msg.setSource(44994U);
    msg.setSourceEntity(49U);
    msg.setDestination(553U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.58940445901);
    msg.setSource(41669U);
    msg.setSourceEntity(17U);
    msg.setDestination(6658U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.292057032985);
    msg.setSource(52794U);
    msg.setSourceEntity(202U);
    msg.setDestination(53938U);
    msg.setDestinationEntity(150U);
    msg.op = 154U;
    msg.speed_min = 0.682368501781;
    msg.speed_max = 0.946085804528;
    msg.long_accel = 0.824225276729;
    msg.alt_max_msl = 0.930766635421;
    msg.dive_fraction_max = 0.304628501416;
    msg.climb_fraction_max = 0.133190982146;
    msg.bank_max = 0.780344286144;
    msg.p_max = 0.0422523116736;
    msg.pitch_min = 0.138563484158;
    msg.pitch_max = 0.408745647812;
    msg.q_max = 0.633033002575;
    msg.g_min = 0.0805161458208;
    msg.g_max = 0.444253358646;
    msg.g_lat_max = 0.831707866107;
    msg.rpm_min = 0.306813980274;
    msg.rpm_max = 0.480740771368;
    msg.rpm_rate_max = 0.172942504632;

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
    msg.setTimeStamp(0.353600183767);
    msg.setSource(59582U);
    msg.setSourceEntity(169U);
    msg.setDestination(60302U);
    msg.setDestinationEntity(124U);
    msg.op = 20U;
    msg.speed_min = 0.346844100106;
    msg.speed_max = 0.732606779681;
    msg.long_accel = 0.780856777696;
    msg.alt_max_msl = 0.0867514580225;
    msg.dive_fraction_max = 0.256151665402;
    msg.climb_fraction_max = 0.633869725691;
    msg.bank_max = 0.729120814459;
    msg.p_max = 0.967711418294;
    msg.pitch_min = 0.413977721186;
    msg.pitch_max = 0.425649273515;
    msg.q_max = 0.35430917688;
    msg.g_min = 0.22208303266;
    msg.g_max = 0.346822993608;
    msg.g_lat_max = 0.175790529202;
    msg.rpm_min = 0.811202082813;
    msg.rpm_max = 0.106393148525;
    msg.rpm_rate_max = 0.91495432782;

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
    msg.setTimeStamp(0.000147586618693);
    msg.setSource(31159U);
    msg.setSourceEntity(17U);
    msg.setDestination(53936U);
    msg.setDestinationEntity(95U);
    msg.op = 221U;
    msg.speed_min = 0.735296711688;
    msg.speed_max = 0.235266639405;
    msg.long_accel = 0.517233698969;
    msg.alt_max_msl = 0.408134420016;
    msg.dive_fraction_max = 0.018226407521;
    msg.climb_fraction_max = 0.468029252202;
    msg.bank_max = 0.162275069752;
    msg.p_max = 0.290722849993;
    msg.pitch_min = 0.480827759088;
    msg.pitch_max = 0.501175747999;
    msg.q_max = 0.0220290589949;
    msg.g_min = 0.250941653739;
    msg.g_max = 0.433668437459;
    msg.g_lat_max = 0.812304090008;
    msg.rpm_min = 0.667081418342;
    msg.rpm_max = 0.524570834203;
    msg.rpm_rate_max = 0.495680051734;

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
    msg.setTimeStamp(0.18490779701);
    msg.setSource(50404U);
    msg.setSourceEntity(237U);
    msg.setDestination(23080U);
    msg.setDestinationEntity(93U);
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.814798024715;
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
    msg.setTimeStamp(0.573715686216);
    msg.setSource(63644U);
    msg.setSourceEntity(127U);
    msg.setDestination(59814U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.701074527543);
    msg.setSource(40732U);
    msg.setSourceEntity(134U);
    msg.setDestination(10911U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.506461375751);
    msg.setSource(43786U);
    msg.setSourceEntity(241U);
    msg.setDestination(60313U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.609641928242;
    msg.lon = 0.938742587846;
    msg.height = 0.24003367135;
    msg.x = 0.796952417544;
    msg.y = 0.929044323195;
    msg.z = 0.346930566043;
    msg.phi = 0.135555984192;
    msg.theta = 0.285840493371;
    msg.psi = 0.674755759923;
    msg.u = 0.505143826294;
    msg.v = 0.231585274099;
    msg.w = 0.123401550388;
    msg.p = 0.644548754125;
    msg.q = 0.195137679111;
    msg.r = 0.0916050842743;
    msg.svx = 0.139807708348;
    msg.svy = 0.311004112698;
    msg.svz = 0.377048730977;

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
    msg.setTimeStamp(0.34119849029);
    msg.setSource(60016U);
    msg.setSourceEntity(187U);
    msg.setDestination(14119U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.23173934934;
    msg.lon = 0.54427841097;
    msg.height = 0.074969490659;
    msg.x = 0.628871981051;
    msg.y = 0.928844917756;
    msg.z = 0.0539630475858;
    msg.phi = 0.421466673601;
    msg.theta = 0.932150137171;
    msg.psi = 0.750828430192;
    msg.u = 0.617904224367;
    msg.v = 0.242069355338;
    msg.w = 0.319228533844;
    msg.p = 0.310548642868;
    msg.q = 0.465361881968;
    msg.r = 0.273159800367;
    msg.svx = 0.165754531572;
    msg.svy = 0.172421741138;
    msg.svz = 0.0144429124859;

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
    msg.setTimeStamp(0.701214820541);
    msg.setSource(13434U);
    msg.setSourceEntity(242U);
    msg.setDestination(51643U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.538089014211;
    msg.lon = 0.382788684544;
    msg.height = 0.582043892347;
    msg.x = 0.696724569915;
    msg.y = 0.433211212336;
    msg.z = 0.377898485244;
    msg.phi = 0.187678229204;
    msg.theta = 0.707894855216;
    msg.psi = 0.270465533559;
    msg.u = 0.891394900852;
    msg.v = 0.351826032329;
    msg.w = 0.464298467817;
    msg.p = 0.150445610883;
    msg.q = 0.450085557379;
    msg.r = 0.281458931297;
    msg.svx = 0.756968090081;
    msg.svy = 0.763160405619;
    msg.svz = 0.271935842954;

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
    msg.setTimeStamp(0.654463219074);
    msg.setSource(2731U);
    msg.setSourceEntity(203U);
    msg.setDestination(41888U);
    msg.setDestinationEntity(229U);
    msg.op = 114U;
    msg.entities.assign("IASZUJZTHQAAWDPMNEFLYIDYIYOSURCMYHFPBKJKMLESNRGPAAPFNILVRCWJPUOKGFVQKJBLOIVTTAVUKWZDHAIULZGOQEKGXVOXCPSNBMXZDQKLTMTNRYYBGVKXPXWOWSXMJZXXZZGLGMSBGFRSEHJINDMHYDDAUBQRGEBFIEFPJSLOBZWHJNWHRJQVYS");

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
    msg.setTimeStamp(0.293833543677);
    msg.setSource(35508U);
    msg.setSourceEntity(159U);
    msg.setDestination(47799U);
    msg.setDestinationEntity(81U);
    msg.op = 229U;
    msg.entities.assign("XXOXNXURHGOXJXOWLOVUMYUEIPIKSLAMMFMHWSMIVZLSBOVKPPFELWLEFYRNEQDQCTHAEJWZJJZFANDEGYSDVTZPNCIPAHQVYOREQZZUDXHNGMSWIYNKMGHCFRAJDROTBBYRJJEYUSJVNTTCGUZVZQMCGLJWKFSFGQKDKCSCLHTKXNOPYXTCBLGHVMVIFEWPTXRANYWBPUUWECKLHIQOAZHCDDVTPOPJQDQFGSGALABBTIB");

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
    msg.setTimeStamp(0.63883523842);
    msg.setSource(9195U);
    msg.setSourceEntity(54U);
    msg.setDestination(27346U);
    msg.setDestinationEntity(173U);
    msg.op = 163U;
    msg.entities.assign("YQZMGTCEJDHIODYSJEHNFLXCJQOFVXKCLEPCNYCRJZDTILPTHUACROGHPRAKWNJQWGGTBJGAAERLIKSIAMZFBOSWLNLZPWLI");

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
    msg.setTimeStamp(0.204486260326);
    msg.setSource(34881U);
    msg.setSourceEntity(170U);
    msg.setDestination(36664U);
    msg.setDestinationEntity(215U);
    msg.type = 190U;
    msg.speed = 38421U;
    const char tmp_msg_0[] = {-72, -17, 38, 106, -38, 98, -83, 17, 81, -68, -70, -123, -117, 59, -36, -90, 100, -44, 28, 97, -17, -55, 87, 17, -78, 29, 16, -102, -6, 112, -27, 37, 94, -40, -92, -95, 9, 8, -109, 112, 115, -61, 35, -113, 95, -118, -36, -96, 42, -29, 47, 28, 99, 63, 23, 48, 78, 23, 47, -5, 45, 58, 47, -65, -120, -2, 85, -79, 1, 58, 122, 80, 33, 21, 124, -80, 46, -117, -87, 25, -112, -63, -46, -115, -124, -118, -81, -102, -74, 36, -95, -64, -64, 80, 86, 80, 102, 92, -106, -75, -116, 78, -21, 47, 95, 8, -5, -3, -83, -115, -93, 95, 123, 6, -34, 64, -101, 47, -62, -57, 69, 85, -27, -31, 90, 63, 0, 31, -120, 18, -5, 111, 126, -48, 22, -96, 48, -90, -64, -55, 10, 20, 2, 6, -122, -73, 107, -72, 18, 44, -122, -59, 67, 120, -4, -11, 69, -70, 77, 122, -20, 6, 2, 86, 20, -73, -100, 60, 45, -71, 82, -60, -96, 55, -68, 123, -52, -100, -112, 114, -68, 31, 77, 117, 123};
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
    msg.setTimeStamp(0.501514963968);
    msg.setSource(330U);
    msg.setSourceEntity(80U);
    msg.setDestination(32169U);
    msg.setDestinationEntity(136U);
    msg.type = 65U;
    msg.speed = 12611U;
    const char tmp_msg_0[] = {56, -10, 15, -119, 103, 86, -93, -121, 62, -103, -47, 40, -84, -49, -124, -29, -100, 89, -128, 110, 19, -52, 33, 123, 98, 43, 37, -127, -58, -123, 79, 15, -40, 21, -21, 31, 91, 86, 19, 74, -15, 51, 34, 80, 94, -50, 28, 114, -42, 3, 82, -53, 39, -38, -75, -105, -113, 17, -71, 104, -99, 52, -101, 76, -53, -9, -120, -123, -124, -38, 28, -48, 30, -86, -59, 55, 103, 66, 10, 122, 86, -46, -42, -60, -59, -98, -63, -30, 64, 35, 91, 94, 99, -107, 7, 86, 104, 58, 125, -94, -75, 110, 77, -32, -34, -98, -42, -39, 119, -121, 98, 124, 33, 64, -92, 16, 105, -56, -100, -63, -86, 36, -26, 51, -102, 56, -104, -106, 102, -64, 104, 61, -32, 48, -67, 31, 100, -56, 31, -123, -93, 8, 113, 61, 46, -14, -123, -127, -115, -99, -110, -23, -13, -70, -91, -31, 50, 37, -48, -76, -15, -91, 7, -46, 59, -80, -87, 109, 114, -83, -64, 69, 115, 85, 92, -94, 17, 55, 92, 44, 72, -82, -74, -64, 91, -88, 80, -80, 118, 15, 115, -59, 101, 32, 118, -85, 40, -48, -111, 115, 41, 109, -35, 10, -66, -73, -42, -102};
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
    msg.setTimeStamp(0.42903997077);
    msg.setSource(11375U);
    msg.setSourceEntity(12U);
    msg.setDestination(22527U);
    msg.setDestinationEntity(141U);
    msg.type = 98U;
    msg.speed = 49650U;
    const char tmp_msg_0[] = {-19, -75, -70, 51, -41, 57, -98, 63, 106, 64, -1, 3, 90, 119, 32, 82, -71, 37, 119, 100, 48, 121, -33, -37, -15, 73, -79, -125, -9, -121, -12, 74, -42, 81, 70, -14, 121, -4, 95, -2, -54, -45, -111, 18, -114, -2, -45, -62, 54, 21, 90, -62, 69, 93, -119, 43, -102, -20, 104, -64, 91, -90, -29, -126, -109, -74, -114, -123, -100, -78, -96, -91, 11, -122, 63, 57, -113, 126, -63, -106, -58, 104, 47, -81, -78, 107, 95, -113, -126, 29, 120, 33, -10, -26, 89, -20, -11, 81, 3, 110, 52, 53, 80, -19, -27, -80, 88, 36, -107, -5, -60};
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
    msg.setTimeStamp(0.512898954927);
    msg.setSource(47582U);
    msg.setSourceEntity(132U);
    msg.setDestination(51434U);
    msg.setDestinationEntity(254U);
    msg.op = 130U;
    msg.tas2acc_pgain = 0.0717639518498;
    msg.bank2p_pgain = 0.545918647259;

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
    msg.setTimeStamp(0.683670287832);
    msg.setSource(34290U);
    msg.setSourceEntity(16U);
    msg.setDestination(26381U);
    msg.setDestinationEntity(216U);
    msg.op = 215U;
    msg.tas2acc_pgain = 0.0890004146327;
    msg.bank2p_pgain = 0.951465502945;

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
    msg.setTimeStamp(0.349502849633);
    msg.setSource(8371U);
    msg.setSourceEntity(108U);
    msg.setDestination(4948U);
    msg.setDestinationEntity(69U);
    msg.op = 242U;
    msg.tas2acc_pgain = 0.569473985585;
    msg.bank2p_pgain = 0.15955683974;

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
    msg.setTimeStamp(0.0514447277555);
    msg.setSource(4820U);
    msg.setSourceEntity(2U);
    msg.setDestination(28301U);
    msg.setDestinationEntity(168U);
    msg.available = 2866067276U;
    msg.value = 251U;

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
    msg.setTimeStamp(0.335251141181);
    msg.setSource(55895U);
    msg.setSourceEntity(41U);
    msg.setDestination(658U);
    msg.setDestinationEntity(164U);
    msg.available = 77640878U;
    msg.value = 184U;

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
    msg.setTimeStamp(0.914547495367);
    msg.setSource(25288U);
    msg.setSourceEntity(66U);
    msg.setDestination(62691U);
    msg.setDestinationEntity(122U);
    msg.available = 2805063353U;
    msg.value = 42U;

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
    msg.setTimeStamp(0.979150754826);
    msg.setSource(36563U);
    msg.setSourceEntity(71U);
    msg.setDestination(59114U);
    msg.setDestinationEntity(117U);
    msg.op = 155U;
    msg.snapshot.assign("JXOKXGSIIZSJKAFSGZFBVBQQYCADBFNHO");
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.399668170512;
    tmp_msg_0.x = 0.659665493124;
    tmp_msg_0.y = 0.515821041153;
    tmp_msg_0.z = 0.308114371251;
    tmp_msg_0.timestep = 0.833001255761;
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
    msg.setTimeStamp(0.981013109514);
    msg.setSource(182U);
    msg.setSourceEntity(88U);
    msg.setDestination(6190U);
    msg.setDestinationEntity(88U);
    msg.op = 242U;
    msg.snapshot.assign("BKAUAFDIPYTJCCOLBIQIUNJYXHGOVWCRFAXVXPXHLNSF");
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.954181530624;
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
    msg.setTimeStamp(0.66893561991);
    msg.setSource(37203U);
    msg.setSourceEntity(34U);
    msg.setDestination(21797U);
    msg.setDestinationEntity(233U);
    msg.op = 226U;
    msg.snapshot.assign("VUNCJDXCMSFTXFIDUWKBQEYYSJVGOIWXYSUPPI");
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 186U;
    tmp_msg_0.x = 0.495434410555;
    tmp_msg_0.y = 0.748861999245;
    tmp_msg_0.z = 0.194629269014;
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
    msg.setTimeStamp(0.242529195254);
    msg.setSource(2515U);
    msg.setSourceEntity(74U);
    msg.setDestination(54906U);
    msg.setDestinationEntity(39U);
    msg.op = 113U;
    msg.name.assign("OSCKRIYSEVBQJUSQZUAQFHQBHHSVXQYAGLUJYBUOBGWLAYPODYBWNDKLWMTPKETPGEEXXETWCOKNVSFXMHAXPKSYWEDFYLVEHFIVXIJWDZMWCLCSQIKNLWG");

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
    msg.setTimeStamp(0.0254114364219);
    msg.setSource(34U);
    msg.setSourceEntity(70U);
    msg.setDestination(27899U);
    msg.setDestinationEntity(145U);
    msg.op = 242U;
    msg.name.assign("AFABHJTXXIKMNNDOMAUNWMQBLGHLQSBZVEXYIFFQLUWZPRPGANULRGXLTRTCEPZKESAAECERWLOTMJUGEQHMWLJTMUOOCVBINUCSQDPBQWOIPFFJSXAJOJZLSADYNMFCTYGYSFVCCINEKYSJYFOUBLKJBEOZKHQVHOHNVBRXXGZQAWPVPJIDGVWDNYVTD");

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
    msg.setTimeStamp(0.028302334899);
    msg.setSource(30131U);
    msg.setSourceEntity(194U);
    msg.setDestination(48240U);
    msg.setDestinationEntity(61U);
    msg.op = 114U;
    msg.name.assign("RWLXPDNOSQKYYPZOFKNSVLJCLVIJEWBJMOALYMHAYGUROICLPFCGPPJNIMXKHTZGVTQQHZSOIHXZKFLUXJSPAKJMPEVBYBZWGCCKXCNCZZDRHRQFLUDGIKSFWKBNCXYNHWUAGYJEOXORMQIYCTDPFEDVNHYXSDMAFQMBWRKQAZDVIQ");

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
    msg.setTimeStamp(0.857831343351);
    msg.setSource(59684U);
    msg.setSourceEntity(133U);
    msg.setDestination(31065U);
    msg.setDestinationEntity(120U);
    msg.type = 154U;
    msg.htime = 0.99704292222;
    msg.context.assign("EMRHBTYIDUMGXQBVCLHOEJGJSRPOGPMZJWUIVIDXHTFZXTRDAFSVYCLKCRCHJPVNSQFYDQUGYEUKEXBXMODASYUUMX");
    msg.text.assign("RFIPZLMXVFBTODMGRLCKQKXTHHNUKABAOKRAVQZLDNJJOEBUPHNERLYKOTJAEYGS");

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
    msg.setTimeStamp(0.0467567051183);
    msg.setSource(16379U);
    msg.setSourceEntity(99U);
    msg.setDestination(6291U);
    msg.setDestinationEntity(66U);
    msg.type = 2U;
    msg.htime = 0.536869276477;
    msg.context.assign("WACYJNLBFIXTNVDKOITBOUIWMBULEPFBNIZLRWGKAQZRYBZOZPFTZJQSJJJMSTYEFJREDXGXWURVVGHKQIZQCFNAWUXUHFEWLMOMVWYVJIKOPMCYJIVKPKQBXTLTAYGLOJPLABHVNHESPTKHAXHJRAUBYWSEODXSXCXVCCOLTGCODMNQ");
    msg.text.assign("QDREOVZDALQOKTKDTDJQUOYMGHLBREZPUUXJFIFVLWITCHLADVMQLZYQVRABYDFOARXDXSAFESUUJECFSM");

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
    msg.setTimeStamp(0.0514411795452);
    msg.setSource(39766U);
    msg.setSourceEntity(210U);
    msg.setDestination(49698U);
    msg.setDestinationEntity(245U);
    msg.type = 212U;
    msg.htime = 0.214064128417;
    msg.context.assign("DWMJPFZDYSKXDPOBRPCKEPQKHLSCUBWCSKCUTUQFNE");
    msg.text.assign("JKYGOOWQNDEFKWSDWLGJJXANBBKMSKTCRPCGLILTWGZRZCEMLGPOZIYHOJLPLPWZLTATPDHSPQVDDTXWABLRFPKVYSNFMFGAXUHUECSWXDTYFAHGZBVUOJLKSNOVCAHWQIEXGMIJJIVXIAKDZTFFSJOPDTSJGCBHORGRUHCCKSAFMWUIRZZYNNTIBEVUMHRWXFBHAUUPVMIXQVEEURQYKYNUTJZ");

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
    msg.setTimeStamp(0.189615096483);
    msg.setSource(63855U);
    msg.setSourceEntity(80U);
    msg.setDestination(955U);
    msg.setDestinationEntity(104U);
    msg.command = 36U;
    msg.htime = 0.883001926658;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 132U;
    tmp_msg_0.htime = 0.215893273295;
    tmp_msg_0.context.assign("PURKYJBQXDYXQNAZZZXCWAFWVYYEWLBFTBRYSEJSEDZLJLLLFEMGJWIAPGLFVKJDEOSZNOUUCKDROKENQJOYWHMFNWHVQIAWHZNIPWLUUNUYFTBSPCHVRPQABDGKXCIUYTCKHGTXCWJVISNPLGKCOIRGDHHVXIEXQHFXKESZDBSQTEVURPGMMMKFMSNVAZWRZDVYKAFHNJBQJIA");
    tmp_msg_0.text.assign("XZIXTBCHOSOQAVUQPGTOPSXDHFSZRMJPTNDACEQVSYOKOQGBVXOXEDILLKVTVUYLAGUKEXQMUIKFXHIPAXWLODCZWDNEQAWJWVDBTXYHCIULNCBUWVETDBIRGYRGZHEFTYLRIOVIJQGKQYF");
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
    msg.setTimeStamp(0.282995431001);
    msg.setSource(26773U);
    msg.setSourceEntity(240U);
    msg.setDestination(54145U);
    msg.setDestinationEntity(204U);
    msg.command = 239U;
    msg.htime = 0.110903427619;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 56U;
    tmp_msg_0.htime = 0.573004445688;
    tmp_msg_0.context.assign("ZCMVZMPHITRPFRUMMQEJ");
    tmp_msg_0.text.assign("DMDKYPIFYNRQQYBLCKMTCYOABFZWWQYAFUEQSTVQGVJKILIXEJZVUWBGGAVO");
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
    msg.setTimeStamp(0.691576813191);
    msg.setSource(46086U);
    msg.setSourceEntity(183U);
    msg.setDestination(8858U);
    msg.setDestinationEntity(112U);
    msg.command = 251U;
    msg.htime = 0.350532186504;

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
    msg.setTimeStamp(0.306702304598);
    msg.setSource(15362U);
    msg.setSourceEntity(30U);
    msg.setDestination(47486U);
    msg.setDestinationEntity(78U);
    msg.op = 209U;
    msg.file.assign("QPODXMLYLEBPFAMICYAGTQKBCJRRTCOGWFILYKTPGERYDAOLGDVMBZFSVMPPSVCWXNCFUHDSCEQTYMQSQRPKRZSTOJJBEARWHHVWUNWMWYNKZJBGKDTTTGQOHAGNCLZOBDVXWPUXDZUBDWIZZBAHNFVUXVXKJGESRNIZWKVOSNRIJMYIDIALYJFGIQXRLQCONHABCHUFNKLJYUJFXAHSMGUSBLQKCIZTWPHFLUVOEMZEYXKOURFXMJ");

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
    msg.setTimeStamp(0.852652860263);
    msg.setSource(34562U);
    msg.setSourceEntity(61U);
    msg.setDestination(13334U);
    msg.setDestinationEntity(61U);
    msg.op = 170U;
    msg.file.assign("JGPDEXLLTPTMZBSDQALAGPSIMRDGFQFKZMKVAJKEUBDIBNYMUOREBLJTWEHYQGGEHPWCGRPMOZGCHSQSYIACQZIRNWKICBEGOCAKXMTVBIFCFHDXYTLSVPWWFRJPLDQNPJVZJNMUUZMUBDJOLVEPAOKHXDXOXTIZHSYBXFDUOTVHVAVJRBNLWCYHYEFGFFFCNNSIUXJKAYDCWLNZKRIHSCWLZBGQYHRAVQUYPWEMIKRA");

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
    msg.setTimeStamp(0.443385397982);
    msg.setSource(49660U);
    msg.setSourceEntity(201U);
    msg.setDestination(6494U);
    msg.setDestinationEntity(190U);
    msg.op = 253U;
    msg.file.assign("ZOUJTBNOIPPSOOQDRNYKEUGGSOMIJRWFILVDNGTFRIXELCCEQAASYNXEWOHTKRCUSAOEVXYBTJQKGDFPCWNQEUWLITFFNPPVRYYFZUGGYBFCBRSMQGCNBUFFVVRMSTHLBDLJHCKLUEXGHNHUQEAMAKQSYJHNIDPCDHJZZHWVKJOMIVZLDWMUJGPXMXAZMO");

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
    msg.setTimeStamp(0.0992979521437);
    msg.setSource(57399U);
    msg.setSourceEntity(103U);
    msg.setDestination(45950U);
    msg.setDestinationEntity(250U);
    msg.op = 175U;
    msg.clock = 0.627033006708;
    msg.tz = -9;

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
    msg.setTimeStamp(0.0508920834869);
    msg.setSource(64408U);
    msg.setSourceEntity(126U);
    msg.setDestination(40663U);
    msg.setDestinationEntity(117U);
    msg.op = 197U;
    msg.clock = 0.888816742608;
    msg.tz = -81;

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
    msg.setTimeStamp(0.930397642951);
    msg.setSource(2393U);
    msg.setSourceEntity(195U);
    msg.setDestination(12507U);
    msg.setDestinationEntity(65U);
    msg.op = 164U;
    msg.clock = 0.951665802167;
    msg.tz = -53;

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
    msg.setTimeStamp(0.519510248342);
    msg.setSource(35583U);
    msg.setSourceEntity(224U);
    msg.setDestination(29483U);
    msg.setDestinationEntity(95U);
    msg.conductivity = 0.955357777638;
    msg.temperature = 0.808423877702;
    msg.depth = 0.491699195592;

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
    msg.setTimeStamp(0.391067269964);
    msg.setSource(36397U);
    msg.setSourceEntity(1U);
    msg.setDestination(54850U);
    msg.setDestinationEntity(67U);
    msg.conductivity = 0.136390098451;
    msg.temperature = 0.303845058954;
    msg.depth = 0.478895775846;

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
    msg.setTimeStamp(0.949228907076);
    msg.setSource(63807U);
    msg.setSourceEntity(5U);
    msg.setDestination(59800U);
    msg.setDestinationEntity(63U);
    msg.conductivity = 0.0698899183107;
    msg.temperature = 0.342322921815;
    msg.depth = 0.743559303663;

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
    msg.setTimeStamp(0.126144436879);
    msg.setSource(6350U);
    msg.setSourceEntity(238U);
    msg.setDestination(59029U);
    msg.setDestinationEntity(147U);
    msg.altitude = 0.93293148252;
    msg.roll = 24425U;
    msg.pitch = 43328U;
    msg.yaw = 17474U;
    msg.speed = -30861;

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
    msg.setTimeStamp(0.41447867129);
    msg.setSource(3445U);
    msg.setSourceEntity(200U);
    msg.setDestination(41617U);
    msg.setDestinationEntity(186U);
    msg.altitude = 0.469760649941;
    msg.roll = 48707U;
    msg.pitch = 60036U;
    msg.yaw = 51455U;
    msg.speed = 19713;

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
    msg.setTimeStamp(0.45086162147);
    msg.setSource(6174U);
    msg.setSourceEntity(178U);
    msg.setDestination(47461U);
    msg.setDestinationEntity(52U);
    msg.altitude = 0.730667639362;
    msg.roll = 62398U;
    msg.pitch = 16190U;
    msg.yaw = 36108U;
    msg.speed = 2828;

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
    msg.setTimeStamp(0.495031212414);
    msg.setSource(30880U);
    msg.setSourceEntity(40U);
    msg.setDestination(60322U);
    msg.setDestinationEntity(32U);
    msg.altitude = 0.731478756317;
    msg.width = 0.134556462882;
    msg.length = 0.313987521871;
    msg.bearing = 0.566698721925;
    msg.pxl = 4598;
    msg.encoding = 169U;
    const char tmp_msg_0[] = {119, -75, 70, 74, -81, -75, 69, -30, -52, -12, -74, 53, -81, -52, 76, -52, -29, 42, -107, 75, 2, -38, 24, -106, -9, 114, -117, -43, 36, -79, -26, -84, 10, 74, -28, 67, 117, 72, 65, -115, -88, -63, 70, -71, 67, 82, -73, 19, -36, 60, 29, -1, 52, -90, -8, -94, 52, -106, 108, -87, 47, 38, 43, 84, 40, 12, -71, -95, 38, 124, 90, 30, 21, -48, 113, 117, 90, 26, -82, 12, 77, -64, -63, 96, -20, -58, 109, -112, -54, -2, 16, 14, -13, -8, 71, 121, 23, -59, 52, 126, 47, 125, -81, -17, -97, 101, -52, 39, -94, 123, 83, -24, 23, -102, 20, 93, -16, -91, 106, -21, 23, 36, -27, 19, -20, -113, -55, -57, 65, -9, 126, -54, 98, 105, 16, -27, 49, 59, 45, -27, 60, 90, -97, 68, 45, 84, -101, 39, 96, 24, -112, 4, -51, -107, -89, -7, 34, -108, -26, -124, 64, -35, -123, -45, -19, -123, -13, -111, -74, -21, -85, -9, -69, -114};
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
    msg.setTimeStamp(0.274655722462);
    msg.setSource(25983U);
    msg.setSourceEntity(221U);
    msg.setDestination(59780U);
    msg.setDestinationEntity(0U);
    msg.altitude = 0.254245025064;
    msg.width = 0.155337908424;
    msg.length = 0.685790456492;
    msg.bearing = 0.283052050176;
    msg.pxl = -2804;
    msg.encoding = 33U;
    const char tmp_msg_0[] = {-104, 61, -108, -77, -118, -23, 14, 52, -74, 101, -94, -50, 91, -116, 30, 109, 4, 39, 0, -70, -73, 96, 67, -51, 43, -90, -12, -89, 105, -121, 19, 106, 56, 2, 61, -117, -108, 45, -60, -95, -77, -45, 4, 55, 65, -35, 87, -63, 17, 46, -24, -123, 1, 16, -66, -95, -117, -27, -59, -61, 60, -98, 23, 69, -105, 32, -35, 40, 23, 28, 79, 52, 18};
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
    msg.setTimeStamp(0.121113116597);
    msg.setSource(61877U);
    msg.setSourceEntity(242U);
    msg.setDestination(34864U);
    msg.setDestinationEntity(160U);
    msg.altitude = 0.905741478277;
    msg.width = 0.45283291281;
    msg.length = 0.63490579549;
    msg.bearing = 0.960672981478;
    msg.pxl = -11709;
    msg.encoding = 184U;
    const char tmp_msg_0[] = {100, -54, 28, -83, -51, 17, 53, -122, 17, -98, -44, 97, -99, -45, -96, 56, -78, 88, 16, -28, -99, -35, -103, -72, 84, 111, -75, -6, -83, 19, 125, -61, 32, -70, 2, 34, -95, 24, 59, 67, 93, 91, -48, -126, -10, 40, -71, -84, -117, -113, 35, 56, 123, 59, -120, 19, -50, 52, 56, 100, -65, 126, 58, -35, 10, 72, -65, -52, 10, 44, 125, 29, 14, -113, -100, -70, -65, 99, -98, -36, 20, 34, -38, 116, -111, 93, -88, -23, 90, 17, -93, -59, 65, -77, 126, 64, -14, 34, -84, 21, 44, -14, -31, -118, -37, -123, 48, -102, -99, 12, -119, -99, -37, 110, 35, 11, 89, -106, -7, -98, -119, -115, 0, -54, -27, -49, -24, -117, -68, -86, -93, -97, 108, 51, 10, 24, -95, -88, 112, 70, 10};
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
    msg.setTimeStamp(0.480618688938);
    msg.setSource(14724U);
    msg.setSourceEntity(67U);
    msg.setDestination(31277U);
    msg.setDestinationEntity(28U);
    msg.text.assign("UKYJQINOFVSFCESXIQTHDWYKZVPXCWJQSRLRGAMWDDSFHWEFQUYBRBKBFUIFGVLJXGRIADZYEYOOVRDQUYJFAWDESPIHIBQTVWLQAYATUCTZMQPNKXMHLAOAWWKESUBESOLNWOXGAVCXGVMNDNPSJDNXRNLLHDVVKMVOMMLOEEEQEPTHHAZBPCCZIXNRHHTLBRJBOYKCPRTTXKITMJGIGGCZNBBCJUYG");
    msg.type = 173U;

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
    msg.setTimeStamp(0.0963744511821);
    msg.setSource(42759U);
    msg.setSourceEntity(151U);
    msg.setDestination(6776U);
    msg.setDestinationEntity(113U);
    msg.text.assign("XYNEKZBPHZKFZBAGIABVQTETNPEMVQOGOQNILBUFAWBUMBGFSTTWQCZAUBHBQRLNIYPKRXLWRDWJUSRFGEHVTFWZSDMDJWTTUCHOXKCICFLVWR");
    msg.type = 54U;

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
    msg.setTimeStamp(0.226202982682);
    msg.setSource(51248U);
    msg.setSourceEntity(142U);
    msg.setDestination(41644U);
    msg.setDestinationEntity(33U);
    msg.text.assign("TPSFCLAUXQIYWKEUZMRAPWSIZWQWDKEMWMUFOHUBTEAPVHHKQDTZDCGPWQYMXQOJPQZFMLGAILLUNDYXCVJBYTXQKF");
    msg.type = 21U;

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
    msg.setTimeStamp(0.747330236236);
    msg.setSource(64147U);
    msg.setSourceEntity(125U);
    msg.setDestination(53514U);
    msg.setDestinationEntity(240U);
    msg.parameter = 176U;
    msg.numsamples = 71U;
    msg.lat = 0.579819577103;
    msg.lon = 0.452529869222;

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
    msg.setTimeStamp(0.362673142629);
    msg.setSource(39853U);
    msg.setSourceEntity(162U);
    msg.setDestination(44045U);
    msg.setDestinationEntity(221U);
    msg.parameter = 153U;
    msg.numsamples = 185U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 17483U;
    tmp_msg_0.avg = 0.906003450229;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.0966687470252;
    msg.lon = 0.215645938281;

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
    msg.setTimeStamp(0.942571312178);
    msg.setSource(32285U);
    msg.setSourceEntity(236U);
    msg.setDestination(18083U);
    msg.setDestinationEntity(186U);
    msg.parameter = 220U;
    msg.numsamples = 181U;
    msg.lat = 0.310745700996;
    msg.lon = 0.583326050753;

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
    msg.setTimeStamp(0.926436357815);
    msg.setSource(54906U);
    msg.setSourceEntity(150U);
    msg.setDestination(4045U);
    msg.setDestinationEntity(65U);
    msg.depth = 35795U;
    msg.avg = 0.546444217405;

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
    msg.setTimeStamp(0.178582770042);
    msg.setSource(2774U);
    msg.setSourceEntity(64U);
    msg.setDestination(30661U);
    msg.setDestinationEntity(177U);
    msg.depth = 27636U;
    msg.avg = 0.492862865732;

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
    msg.setTimeStamp(0.349494914312);
    msg.setSource(50604U);
    msg.setSourceEntity(85U);
    msg.setDestination(15407U);
    msg.setDestinationEntity(151U);
    msg.depth = 46314U;
    msg.avg = 0.8265982255;

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
    msg.setTimeStamp(0.366107127666);
    msg.setSource(10046U);
    msg.setSourceEntity(70U);
    msg.setDestination(6181U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.156731278059);
    msg.setSource(22943U);
    msg.setSourceEntity(116U);
    msg.setDestination(26775U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.333527286337);
    msg.setSource(57187U);
    msg.setSourceEntity(200U);
    msg.setDestination(32437U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.325041657819);
    msg.setSource(62019U);
    msg.setSourceEntity(80U);
    msg.setDestination(35996U);
    msg.setDestinationEntity(14U);
    msg.sys_name.assign("YKIKQOHPQSBYNXPTKWVPBRYADBWKRPCUDARPBRGSGKAMOAMFOXWXTUALNQWRZTCJTGKY");
    msg.sys_type = 163U;
    msg.owner = 59292U;
    msg.lat = 0.283737522086;
    msg.lon = 0.835448640893;
    msg.height = 0.423081548841;
    msg.services.assign("HGHQKVBEDOBLRBPVTMDYWLAYRIIQTLXXPQKTKNMGPLRETTMDCCDCSOSOUYEWFSNWUXWVGAGQMDYRZNSHURRLIDKQBCLZYCUBJBNEJYXFKCRWOJVBZUXTJNPYUPVPJQFNACSWGHZXXVYIMIZEIMFAJUFGHKXFQZLTQAVLJGIZIHZVNTCNSQOUSNOAKCPZJHOWIPYFRAAUPZARERJMPTGHBSKSKTFKWL");

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
    msg.setTimeStamp(0.939569826877);
    msg.setSource(29185U);
    msg.setSourceEntity(136U);
    msg.setDestination(9391U);
    msg.setDestinationEntity(191U);
    msg.sys_name.assign("NXUEWHLWPUUSYZGTEOPQGMHZPYZDAQXHYGQLBBMYAKLMSDSXOQOLLBYCOPVITQNJMXBLEKAIUMRCBEICMBMXIVMLDFQRTZEYMEGPZATRVVNVQSSEYFRDSXCJZLFUTUZNJTRHWUNFDIFXFIBRAAKDHCPFPFWATOHSVAVPWXBECUNGUNTMSGXDJONCFHKORVZSYKDDJKWHOUJJITQQNKWZEHZIGVIFDKOPVGAKWBYWRSYRHJJLEQL");
    msg.sys_type = 223U;
    msg.owner = 59930U;
    msg.lat = 0.0641810414651;
    msg.lon = 0.23991644061;
    msg.height = 0.0364523588005;
    msg.services.assign("CVNMPYWELGYTTAKNZQSRJIVLXYAOGRNWCXSJVVMVZEYAJJMBEHPPDMHKGD");

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
    msg.setTimeStamp(0.571484797793);
    msg.setSource(23743U);
    msg.setSourceEntity(160U);
    msg.setDestination(51053U);
    msg.setDestinationEntity(185U);
    msg.sys_name.assign("LQPOWFNZPJKBZVFJIATQQYSSPACRSZFAJRMZHNUEPVADHINHAJFKWURXOQCRHNNVNIOIRSCRXOBTYUXTZCDVTKPKDQKQMWYLQGARBUXMBWGROEVCBMMBVCRJKBXTXEDOXYECPADFTOFDBKZIEHUTFGWLEIVVYSIKGHQSYL");
    msg.sys_type = 233U;
    msg.owner = 1231U;
    msg.lat = 0.540063439437;
    msg.lon = 0.818196191418;
    msg.height = 0.397910633792;
    msg.services.assign("AMRUERVCHGRDFKSYMDGDQLIBJLZGIRKZPHZAYKOQTHCAWBDNVBMDXVJTNFQDMOFZMJRCRQSWBYCJVFSLSVUKHIUPXIZQTTROQSWFSAWJZNPWGXMLHHWVXCXGUUSWBYEDIZMIETINKU");

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
    msg.setTimeStamp(0.711029530243);
    msg.setSource(46731U);
    msg.setSourceEntity(28U);
    msg.setDestination(64610U);
    msg.setDestinationEntity(142U);
    msg.service.assign("DDPRWRLSGLGBJACLNUWVSKRQIPOHXZWXUSONFSQHZMNAJXWCKDVJUOTAQDHBWEZCBDBCLNJPMFAXXSOQXLZRGAUGDPXHSYEWZVLICDAJMYWNULHKYFQMCTRCTVFUPSECLTQPUJMIPLKEZGDZMYXVGVOMQYASJEVAKHVKIZVJFPHTEIPSIFWJRATZGTGYAEZNFGJMUYUTOYMBPGBQ");
    msg.service_type = 184U;

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
    msg.setTimeStamp(0.573210957914);
    msg.setSource(37821U);
    msg.setSourceEntity(208U);
    msg.setDestination(52557U);
    msg.setDestinationEntity(105U);
    msg.service.assign("GOSZDKNZBEWWFHLYPSPUNHCLKMXUYHYABCEWAEIJVMQICMBYRACJLJIEQWRMASDDETDLNDRVXHFMXQRJAGUZCYOVBPTNGSVQRYWOMXYLVKGHZARERTEDZQVPJIBJWCHVDYT");
    msg.service_type = 238U;

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
    msg.setTimeStamp(0.0431622565033);
    msg.setSource(494U);
    msg.setSourceEntity(46U);
    msg.setDestination(1972U);
    msg.setDestinationEntity(141U);
    msg.service.assign("POANQTAXETVTKCROAGPTMFLDFGNXYZDLIPPMI");
    msg.service_type = 57U;

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
    msg.setTimeStamp(0.132758369652);
    msg.setSource(8976U);
    msg.setSourceEntity(234U);
    msg.setDestination(57738U);
    msg.setDestinationEntity(127U);
    msg.value = 0.996044919087;

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
    msg.setTimeStamp(0.834310281053);
    msg.setSource(3823U);
    msg.setSourceEntity(218U);
    msg.setDestination(57777U);
    msg.setDestinationEntity(202U);
    msg.value = 0.0552954031504;

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
    msg.setTimeStamp(0.629315985181);
    msg.setSource(25004U);
    msg.setSourceEntity(43U);
    msg.setDestination(12178U);
    msg.setDestinationEntity(68U);
    msg.value = 0.920550358178;

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
    msg.setTimeStamp(0.359377167451);
    msg.setSource(5539U);
    msg.setSourceEntity(11U);
    msg.setDestination(33437U);
    msg.setDestinationEntity(156U);
    msg.value = 0.0847750618633;

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
    msg.setTimeStamp(0.947430322125);
    msg.setSource(49293U);
    msg.setSourceEntity(199U);
    msg.setDestination(56686U);
    msg.setDestinationEntity(129U);
    msg.value = 0.134012391197;

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
    msg.setTimeStamp(0.186029991963);
    msg.setSource(1089U);
    msg.setSourceEntity(13U);
    msg.setDestination(34586U);
    msg.setDestinationEntity(128U);
    msg.value = 0.344531444717;

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
    msg.setTimeStamp(0.540704767051);
    msg.setSource(42768U);
    msg.setSourceEntity(53U);
    msg.setDestination(21965U);
    msg.setDestinationEntity(90U);
    msg.value = 0.251714941371;

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
    msg.setTimeStamp(0.542400251122);
    msg.setSource(31725U);
    msg.setSourceEntity(234U);
    msg.setDestination(32186U);
    msg.setDestinationEntity(213U);
    msg.value = 0.559364202827;

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
    msg.setTimeStamp(0.386362172323);
    msg.setSource(25083U);
    msg.setSourceEntity(102U);
    msg.setDestination(44231U);
    msg.setDestinationEntity(236U);
    msg.value = 0.620128257594;

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
    msg.setTimeStamp(0.542707107334);
    msg.setSource(7939U);
    msg.setSourceEntity(118U);
    msg.setDestination(32470U);
    msg.setDestinationEntity(89U);
    msg.number.assign("TGNRBVTLVSICHJRVEVSISFQAVLMJKDCOFXPCUNHCGBKEYAJNSLMPDDKUSAMYGMQYFPLQMAOJUKUMRPFWJPRQTHXLKLZNGUWWJTAOFEYULEOTSPOOFZJIHUWXIWFNXSFOSDGXQDDZWIIGZCHUWZEZLYENXGZFKYAKCMRAUTMHZOWIBIQBECKOYINXDTVPBUQRORZAWNMTDVYDSBFBHNBPTAQPDCRPEVHQRCBBC");
    msg.timeout = 47095U;
    msg.contents.assign("VLAWQYPIKZUCASTDMFLGMKMZQGEYMFGUYPOWUDTJWQPWCGNWPUMEVCMDAUYFRHNLZLLIXEMBXXEHRSBCWSFBFXHBIAUZBXRSGOVVPVJMOCEJYDOGBPVHGYVQKZKJEYEGTSOFIKBLOKARVBTTVTBLAHXJYNDQAQJMAWIIYFTEPSFSXATNCFTPPQXGENKHTKUDEXOZ");

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
    msg.setTimeStamp(0.860269920218);
    msg.setSource(47678U);
    msg.setSourceEntity(48U);
    msg.setDestination(54360U);
    msg.setDestinationEntity(33U);
    msg.number.assign("LGFRKCMTWFCWSLGNMFOEXRYZPFDEIJNYIXQIHGLRAXDYNZPHJMTESIZVJKERHTCMVOKMYSHQPWAXVOKBVFMWTTVCKLWGZSSCQVVBGAPWAYQJTCUJPTWNQUEJDMBBIQXHODCRNREQZZDUWFSBQCPUGXFRVKIHTHEYPUORYYINCNNDGNFGKSFEOLBOXRXEKBQUJQHALFCWKDSMDLUJKLYUOGBXJAHOASOPYRVTIZI");
    msg.timeout = 43635U;
    msg.contents.assign("VALEGBIFFNDUMWKTJZGPMDZHLQQFCXOKOTUCABHWTKUEDGRYOSTGMBCIBUONZNYPAOUSZIJCOVVEYKDVXXDHEUWHSAMFLMPGZDOHVYECFFXLOMPNHBTLSYMWPIBJBWARQXMVNJLUTRSGBRYIVXULSJZRQINYDMZVSHWYIOLPHXFZUSURQFNNHRKXDCTXTGDPDZWLGPI");

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
    msg.setTimeStamp(0.410647973485);
    msg.setSource(26646U);
    msg.setSourceEntity(227U);
    msg.setDestination(18944U);
    msg.setDestinationEntity(63U);
    msg.number.assign("XHQDKMAMSVJAMPQNZYDWYHKQSBYJDCLIBNWGAZWSVXKYGMWJCGVPFEQQFPFCHOLVWDAYCIDWAAODFRCTMCTBERYAJRUVPLHUPETCMNLQMJUPTDGUJIHGCQVTPCFLBFKHISAEHXRIKNBXGLRVSD");
    msg.timeout = 57729U;
    msg.contents.assign("MUXLNUXYHLDMBLSCUYCBVHXEUDJKOZXFQFDREBDGX");

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
    msg.setTimeStamp(0.176070673395);
    msg.setSource(4295U);
    msg.setSourceEntity(234U);
    msg.setDestination(30076U);
    msg.setDestinationEntity(29U);
    msg.seq = 2770535065U;
    msg.destination.assign("CWJUKXOKXGXIWUFIGNRFMHHXLBFXXIMBEHCMJHDPPRYEINDKADCUVRVQOQEFPKALBVPCAQDWYVIJOYCVPKANTBMMXGQBRUDDNPZSMQNWSQULBTELQHLIAGVGUDRESWXCNDVFONYJGZWPRUSNWMOGWHCOIZDZVXWJTAOMBYRJJJLSFZTOVBXCPSAFU");
    msg.timeout = 64230U;
    const char tmp_msg_0[] = {82, -116, -94, -29, 48, -18, -53, 27, 38, -105, -108, -125, -117, 12, -31, -50, 115, 67, 41, 105, -34, 124, -124, 11, 33, -37, -102, 73, 39, 74, -97, 33, 19, -44, 45, -85, 60, -5, -119, 79, -109, -72, -83, 23, -89, 44, 116, 49, 101, 50, -72, 45, 90, 32, 72, 29, -89, 16, 12, 51, -8, -104, 36, 99, -41, -2, -60, -115, -83, -85, -55, 55, 83, -33, -66, 72, 45, 81, -6, 83, 53, 116, -125, -88, -6, 7, -113, -127, -95, -126, 60, -76, 85, -49, -115, 46, 54, 14, 74, 46, 47, 71, 80, -82, 118, 76, -107, -33, -45, 108, -103, -100, -59, -38, -125, 21, -65, 98, 108, -73, -17, 41, -51, 80, -71, 57, -53, -31, 27, 51, 30, 16, 24, -117, 83, 89, 115, -94, 112, 17, 20, -17, -25, 91, 112, 94, -40, 111, -48, -26, -114, -96, -18, -18, -80, 50, -92};
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
    msg.setTimeStamp(0.949161673869);
    msg.setSource(45040U);
    msg.setSourceEntity(171U);
    msg.setDestination(39885U);
    msg.setDestinationEntity(106U);
    msg.seq = 283196424U;
    msg.destination.assign("UGLAKPHTNKSBUNKWHZIPFOVNYRLL");
    msg.timeout = 56175U;
    const char tmp_msg_0[] = {-12, -98, 121, -40, 11, 110, -111, -7, 70, 44, 25, 82, -56, 84, 40, 65, 6, -123, -86, 55, -38, -93, 50, -66, -39, 82, 46, -4, 118, 40, -66, -42, -18, 96, -67, -79, 92, 10, 102, -58, -9, -119, -3, -91, -54, 21, -125, -76, 18, -34, -98, 87, 125, -88, -88, 2, -78, 27, 116, -115, 97, 114, -101, 91, 83, -51, 11, 30, 101, -90, 87, 21, 13, -79, 57, -124, -63, 111, -106, 2, 104, 89, 28, -8, -34, 75, -73, -79, -113, 30, 1, -67, 59, -53, -117, -58, 6, -26, 78, 112, -28, 77, 94, -75, -33, -38, -15, 92, 63, 79, -95, 10, -52, -45, -5, 20, 26, -78, 66, -99, -54, -25, -35, -40, 14, -121, -109, -32, 64, 106, 27, 74, -10, -90, -65, -72, -95, -119, -63, -26, 47, 121, -12, 45, 97, -51, 119, 98, -19, 94, -80, 102, -116, -79, -38, -16, -77, -88, -75, -77, -31, -3, 124, -103, 61, 87, 75, 52, 12, 42, -93, -88, -84, 19, 116, 112, -34, 87, -4, -87, 37, -107, 101, 100, 16, -125, -70, 103, 106, -118, 50, -85, -75, 16, 109};
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
    msg.setTimeStamp(0.886718567996);
    msg.setSource(24516U);
    msg.setSourceEntity(249U);
    msg.setDestination(54077U);
    msg.setDestinationEntity(193U);
    msg.seq = 3780641850U;
    msg.destination.assign("RKGPHXBUDJDYUQANNMVCCJBVXFFGFMBCVORZEJAUHWDESOQYNVEGILE");
    msg.timeout = 34771U;
    const char tmp_msg_0[] = {-19, 36, 94, 122, 45, -92, -87, 1, 91, -64, -115, 38, -49, 93, 80, -70, 98, -41, -88, -123, -102, 27, 79, 59, -69, 19, -57, 37, -6, 108, 24, -2, 10, 34, 6, -87, 98, -84, -29, -43, 115, -19, -84, 125, -11, 64, -37, -38, 1, 51, -79, -120, 72, 22, 65, -113, 123, 38, 80, -80, -8, -36, 14, 116, -100, 66, -94, -35, -97, -34, -66, 18, -58, 79, -102, 56, -49, 28, 104, 80, -62, -5, -1, -15, 87, 7, -110, -116, -66, 54, -24, 52, 76, -92, -10, -127, -90, 52, -14, -55, -89, -124, 66, -117, 96, 7, 81, -57, -100, 72, -56, -11, -13, 41, 95, 11, -123, 25, -17, -65, 76, 9, -53, -51, 73, -37, 32, 7, 23, -74, -4, -72, -64, -34, -48, 82, -57, 61, -108, 108, 100, -101, -14, 29, -65, -45, 47, 105, 117, -28, 31, 35, 29, 66, -25};
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
    msg.setTimeStamp(0.93620250881);
    msg.setSource(22971U);
    msg.setSourceEntity(93U);
    msg.setDestination(52345U);
    msg.setDestinationEntity(154U);
    msg.source.assign("NTDDBKXRTRXZLCIGTEVZTNJVQOODJBBDYDHZLVXQVIPCCYQYSSQFALLIM");
    const char tmp_msg_0[] = {-40, 18, -100, 69, 53, -18, 4, -119, 82, 35, 95, -1, -46, -8, 26, 105, -115, -10, 89, 39, -128, -17, -91, -56, 94, -62, -96, 2, -122, -19, 81, 62, -72, 66, 59, -24, -31, -87, 72, -125, 58, -96, -55, 89, 126, -38, -14, -81, 112, 59, -109, 62, -88, 70, -109, -14, 96, 48, -122, 80, -60, -125, 93, -103, -107, 27, 102, 108, 48, -37, -32, 71, 14, -2, 98, 21};
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
    msg.setTimeStamp(0.349970985829);
    msg.setSource(33674U);
    msg.setSourceEntity(115U);
    msg.setDestination(19362U);
    msg.setDestinationEntity(245U);
    msg.source.assign("WQGGMFREEYOUVVWWJDLDCBBTZCLSMFXSMKETLMHQFUJCGOWQLXLDDZWLRBYGXAOGEOBHCJXXOQRNUYYVMPQKFDSURJBIWOJNWAOYZWNOLGAVUSQIUANUMPPIXIIBANZLNKYKBMTXXRNDCQHYEHTEHQENVFCTVOGSYMTMACEZDKYPQTZCGAEPPNWDDBVZTJOPDTQIKJISKLZKBSEH");
    const char tmp_msg_0[] = {86, -25, 83, 8, 37, -101, 63, -21, 98, -38, -76, -110, -50, 93};
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
    msg.setTimeStamp(0.933446935672);
    msg.setSource(41029U);
    msg.setSourceEntity(125U);
    msg.setDestination(60342U);
    msg.setDestinationEntity(161U);
    msg.source.assign("UTXDYZKDKNSNKZNWWYUAMYYFLCFDIETOWVJXVQZENELNHTFVMNIQDAIJSJZTTKPSPAGBIMVUHWSJOBYGVWJYTJUFDRBZLASJROMRLICHPQQYWGYRLWLFEVHGAVXVQGMQKUFLETEZPMLAXKOSBJNHKXZICUYDSNFBWLOHFISQXHRBCWSCRGRUAXUPRTQPDPAXCQZCDMCHIFZZAKYHEIWSKONGXXPVUBUMCQPOITRDTDHOGB");
    const char tmp_msg_0[] = {2, -58, -79, 38, 61, 116, -74, -82, 49, -55, 122, 55, 109, 107, -36, -57, -98, -104, -93, 32, 18, 105, -19, -36, 77, -73, -63, 62, 34, 93, -84, -111, 81, -55, -64, 23, 48, 36, 46, -70, 55, -91, -21, -15, -38, 29, -8, -69, 57, 57, 20, 52, 44, 1, -44, 55, -8, -46, 113, -10, -31, 2, -78, -45, -86, -44, -93};
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
    msg.setTimeStamp(0.729093938297);
    msg.setSource(42178U);
    msg.setSourceEntity(101U);
    msg.setDestination(16086U);
    msg.setDestinationEntity(199U);
    msg.seq = 2058030062U;
    msg.state = 186U;
    msg.error.assign("MLTILRMRVMGBTPNCHEEDWICQZSSXHSQAHKVHSATHVPRIWNQOYGTQIUIJCBJOGNRTYHOIKCUBXLNRSBFGKUFPFIZOXNBYHOUENDNLHSZKEACCBIPXRLUBTVHZELWFPCZJUPGEERYTVXQBWATKMZSKFJVRQYSNLPMMXJPPJWULFKEMOUGGIDZZSWJTKZJMXXROMFRFDQAEAFDQPONDAFJWDXVAQY");

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
    msg.setTimeStamp(0.385644369727);
    msg.setSource(52448U);
    msg.setSourceEntity(208U);
    msg.setDestination(9111U);
    msg.setDestinationEntity(133U);
    msg.seq = 2305972027U;
    msg.state = 11U;
    msg.error.assign("YNJEPDEZVJZFRICJFXMXYNFSWWZLFQHLBUNUGYSIDYAQMYHTSQWKDIOLMITHPIXGQILEADENMFODWTTWHFNIEBJAVCWHHFYMWKPMQVHQBJTVCQLWPJGZLCCCPQOKUACOJZXBEZOJZSYUAKADURUGFRGCNSSRFKNOGJGNKRRMPIFZUKWBBTXSHRITYADVXXUWVDRATBTCDXSDLLTVXJOCEBGSYMSQRVZHMUMQYZEUERKABEPKAHNPGVXLOPOB");

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
    msg.setTimeStamp(0.689434592771);
    msg.setSource(46277U);
    msg.setSourceEntity(254U);
    msg.setDestination(62159U);
    msg.setDestinationEntity(188U);
    msg.seq = 2241413290U;
    msg.state = 72U;
    msg.error.assign("EXWOLQYINMNDNBJXYGMZQFUVNYYULVFECVXSULADWZHQBTPATBITHEBKECZGYUTDITEXRGVAAXXOISJJIERSULWOUSZGNGFQPVZTGLXXYPVMWEEMFGRQSRJGIMVAVQJBUIWPXSDNFIRYBFZHKDGZWHTBQQVWSMMZCAQMHKPHFEJKUCWMROTAURRCSPDKOLCFZYGHPHJQCOJTNBXJTLYSPFFPDBNAKKACDHRNVDZYKUWLKRSCIKLNOADJ");

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
    msg.setTimeStamp(0.306273835587);
    msg.setSource(28212U);
    msg.setSourceEntity(44U);
    msg.setDestination(38874U);
    msg.setDestinationEntity(222U);
    msg.origin.assign("EBFAWUKYHCZSHVZCJSYRABIFPZQXUCQQFOOKSZXOLTEYCJUBUPGCDCHMWECCDZITPKMXTLSGNWRVEFDKLNMKPIDPRBINROEXEHLTYJIHXBDRGNAABFFJHEEWMGKBISKUPNOVQURMVCPSHYLBLQZRNVKDQEZZYUYXHASSJRWYFMNGLLPYRIIQIOQAKWMDPCTPVJRMODVUAVOUMTWQOBWGI");
    msg.text.assign("RMGPKAVGAUSHZDNLDOPNPIPMFKTCNSNWXCHSRJENXVXIWKSFBVFKEWNMYCAJWEEJVIYBFRHZXRQGAAFPZBUTQSSSZKRTYYMTGLYYIGWGANJUCMZTCUIEPZ");

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
    msg.setTimeStamp(0.886385575045);
    msg.setSource(5811U);
    msg.setSourceEntity(236U);
    msg.setDestination(13737U);
    msg.setDestinationEntity(148U);
    msg.origin.assign("DIIYAJSPYEZAVLTLPKBDHXVHLORZMQSLRRHDIROARJJZYCXEFLEOOEWNJAZTGSDEGCUYGVUQLUNHHNMSEDRUJTZZHUQRKEQYFFDFBXJVQBKCRNJXWWROXYWSCIATQOSPCYUYZEIIGGQABKILPFCMOMKCCWHGYNQSSSMQMXKAONWPCTRYAOUVKVPUXMDMLGHJLBBZBVBVUSTJPWATXPBGHIITDHVNFEBFMQMKFITXUNJEVPDKGWPWFLG");
    msg.text.assign("UZSMAYBDCLNOYUKRPFJFOUVLPWIQRXICAJNYEEXLKAKZGGRUWTCIGVZRTVPMJNWEWTATWGMKNTZAYLGWBDUTOEIMNXHISBSOZXGYOORGBH");

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
    msg.setTimeStamp(0.760175358476);
    msg.setSource(17375U);
    msg.setSourceEntity(129U);
    msg.setDestination(30930U);
    msg.setDestinationEntity(66U);
    msg.origin.assign("TWRTENHVXXSRVIPHGCFSFTMYP");
    msg.text.assign("XVPOLGYRALKMTUWABWFGNXYOEJESBSMNXYXNBLESMMZOALNWDDTHRJVSOKJZSXRGNXMNMFRZLSIWQQHIFXNJZFFSPYGHBDKYRYJNWFVMVKEUZDUFEMGGUEOPQGGLUHXUWNIPWEFD");

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
    msg.setTimeStamp(0.284689969416);
    msg.setSource(15679U);
    msg.setSourceEntity(86U);
    msg.setDestination(63317U);
    msg.setDestinationEntity(185U);
    msg.origin.assign("JGWEVXBXUONBMDAFIGBQCCTILPNBNLELIVWYRCCYKZUIJSFAEOTRNPSDTBVJRQMQVESWNJ");
    msg.htime = 0.381320101021;
    msg.lat = 0.849132020142;
    msg.lon = 0.958770491827;
    const char tmp_msg_0[] = {-75, 32, -104, -34, -21, -96, 53, 124, 79, 17, 76, 86, -110, -107, 93, 28, 32, -113, 42, -50, -80, 79, 11, -45, 28, 63, -64, -63, -56, -113, 34, -89, -58, 21, -110, -80, 122, 31, 5, 0, -6, 11, 112, -66, -70, 81, 108, 60, -99, -61, 69, -51, -48, -54, 116, -32, 20, 121, -116, 29, 46, 15, -102, -63, 90, -83, 28, 26, 119, 89, 74, -23, -17, -41, -95, 126, 69, -6, -87, -73, 98, 121, -34, -30, -78, -128, 93, -20, 84, 31, 32, -18, 22, -65, -47, -99, 57, -126, 60, 81, -66, 21, 110, -11, -47, -25, -94, 64, 24, 125, 50, 71, -70, -5, -22, -73, 97, -98, -73, -123, -105, 53, -101, 45, -110, -109, -93, 110, -112, 12, 73, -88, 115, -19, 97, 77, -94, 0, 78, -35, 59, -34, -15, 9, 34, 37, 9};
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
    msg.setTimeStamp(0.670500312802);
    msg.setSource(8656U);
    msg.setSourceEntity(65U);
    msg.setDestination(17996U);
    msg.setDestinationEntity(159U);
    msg.origin.assign("AQJHEVGBVAYOTMVISOXVXZNFKWPPUGRHVKMSHNFWCJMMTRDHHRYVJANVARLVEXSDKRRKXZFQEODBKIOGCLTAQMBALRBZOEFLSSBPJEGPIWWLVIDUYLOBWTCMMMGONCHNFUZKHYXAPDY");
    msg.htime = 0.46413276364;
    msg.lat = 0.223144600271;
    msg.lon = 0.230920410682;
    const char tmp_msg_0[] = {125, -33, 98, 80, -61, -15, -76, -89, -38, 84, -112, -33, -124, 20, 103, -87, -107, -43, -13, 73, -61, 111, 13, 51, 100, -110, 23, 60, 29, 102, -29, 38};
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
    msg.setTimeStamp(0.824650515105);
    msg.setSource(30809U);
    msg.setSourceEntity(210U);
    msg.setDestination(21761U);
    msg.setDestinationEntity(89U);
    msg.origin.assign("FJYZRTFBCPHPHMFHOVEOPRZUQDTLPDMFJASGCTKNSXSNTJNBTZZDMSWKXCPBNAWFNKLODDLXRLMMIAUJFXFDEQTXPYBOYTVGLQWZXHOWSUKHRBVUKVYICGWVBUSOQGCJEYUVRTMQHLVHYMEMQVAWDIRNZVCMBYPAFUZOCWCDWGCEHQJUGKBIAZFDKINIEBJMUKVXZ");
    msg.htime = 0.899076945755;
    msg.lat = 0.230312151795;
    msg.lon = 0.199647804888;
    const char tmp_msg_0[] = {99, -30, 41, 114, -31, 33, 14, -113, -4, -68, -121, -54, 66, 116, 52, -92, -24, -86, -69, -58, -9, -14, -84, -16, 2, 97, 14, 8, 40, -94, -90, 121, 124, 48, 76, -15, 84, -17, -22, -63, -83, 21, 9, 25, -28, 1, 52, 113, -32, -105, 65, 1, -49, -107, 85, 107, -53, 93, 58, -69, 99, 5, -37, 91, -42, 5, -117, -116, -27, -127, -68, 89, -88, 62, -26, 26, 61, -3, 59, 51, -23, -7, 61, 50, 64, 75, -96, 71, -91, 20, -12, 69, 82, -51, 102, -112, -122, 97, 104, -6, -122, 124, -121, -39, 64, -18, 2, -25, 6, -113, -79, 51, -3, 14, -42, 65, -113, 109, -5, 20, 5, 6, -85};
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
    msg.setTimeStamp(0.434701934668);
    msg.setSource(3834U);
    msg.setSourceEntity(18U);
    msg.setDestination(39381U);
    msg.setDestinationEntity(22U);
    msg.req_id = 26913U;
    msg.ttl = 44543U;
    msg.destination.assign("YVMWAUHTDEURCTXVXKAFBZTLMTZAUAPRNTOOLACZSBLAZOGJDLPENIKIOYDMYEGBKQJVRJMVPFIVLHLGPXSQKQWKWNMUJKYRWUJNFYKQMYUHTWPMQOQXUISRSIVYUPZWEDOVRRWZFHFBMASRHOGQHVSARHIGFETQEFDLCKZTNVAKGPOTYMPBXXOFZDBXCJYHGCQEXZSTXFDIDCGJPFBALBESEWWJGWDNLQIJHJ");
    const char tmp_msg_0[] = {-113, 24, 80, -122, 94, -56, -7, -41, 94, -79, 33, 122, -22, 85, 111, -70, 55, -91, -81, -125, 46, 22, -5, -27, -74, 104, 116, 96, -48, -31, -34, 62, 1, 44, 28, 96, -94, 95, -52, -66, 28, -4, 46, 32, -68, -122, -99, -87, 103, -96, 40, 99, 84, 83, -128, -52, 81, 53, 21, 58, 97, -80, 116, -61, -87, 50, 110, 20, -81, -43, -124, 76, 103, -61, 102, 4, 108, -114, 64, -115, 96, -106, -98, -13, -89, 15, -85, -123, 62, 80, 19, 100, 71, -67, 16, 126, 101, 13, 126, 27, 106, -42, -49, -38, -30, -65, 74, 89, 71, 112, 61, 104, -99, -65, -20, 124, 24, 79, -18, 126, 26, -79, -82, 33, 103, 90, -83, 77, -117, -34, -52, 86, 68, -31, 103, -68, 56, -44, 102, -121, 21, -46, 93, 19, 12, 110, -9, 59, -29, 6, -102, -29, -25, -17, -70, 20, -112, 97};
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
    msg.setTimeStamp(0.0153922916793);
    msg.setSource(36676U);
    msg.setSourceEntity(117U);
    msg.setDestination(42110U);
    msg.setDestinationEntity(185U);
    msg.req_id = 7493U;
    msg.ttl = 25478U;
    msg.destination.assign("DTMJZHNVUGYZFPGRRHIELIFOPHOUFTZWQPBKIUFAYWWNVXFWZBYDVSKERJPXGGGBNHXLLLPBKMDUXTTFCMNIPAQBAJMOWTGARKTLIIREASUAJEGHUYKEEEQMSPRCJACKBODXMTSUCXWXQRVM");
    const char tmp_msg_0[] = {-18, 77, -24, -73, -57, -37, 110, 25, 71, 48, -64, -45, -125, 2, 86, 106, 62, -34, 36, 18, -109, 11, -65, 64, 24, 3, 73, -51, 69, -52, 108, -77, -115, 111, 19, 14, 12, -113, -20, 108, -47, 29, 68, 30, 67, -20, 22, 5, 32, -32, 110, 84, 10, 126, -41, 23, 121, -50, -89, -81, 113, -63, -115, -125, -12, 92, 46, 59, -118, 18, 47, -102, -90, -63, -102, -6, 57, 56, -12, -82, 111, 90, 6, -115, 11, 34, -8, 26, -77, 30, -17, -20, 7, -99, 79, 51, -27, 56, -46, 61, -37, 120, -115, -126, -107, -62, -109, 79, 82, 94, 86, -39, -17, 32, 76, 19, 113, 28, -111, -79, 70, -114};
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
    msg.setTimeStamp(0.686372595801);
    msg.setSource(46197U);
    msg.setSourceEntity(23U);
    msg.setDestination(26994U);
    msg.setDestinationEntity(203U);
    msg.req_id = 42641U;
    msg.ttl = 38754U;
    msg.destination.assign("TAXJGDYQOMKBVBDDAGSZPZVYQPIOZGVDFVQXOHRUEAGENFDNZCHHLUMLJUSEXIMEQNCKFHEDIVSXSNUNJXVYGVULSWOFMGHQGCCSPAHTIXGUZPMBFMXRBPKPZBIKMJAWWOIMFYREFRRQWEOLARLKTWIZYXDZQQJGETJKUZHCUHMEDONVLIKFPAAKCRSYTBFBYJQJPWNECVLQSIJCAMRPRTKHYOLNSL");
    const char tmp_msg_0[] = {110, -15, 20, 25, -68, 37, -47, -40, -91, -126, -18, 19, -85, 98, 110, 124, 62, -75, 93, -49, 117, 33, -117, -40, 104, -128, 67, -107, -86, 8, -80, 29, -126, 90, 27, -58, 11, -77, 32, 77, -14, 71, -110, 70, 36, 4, 114, -78, -119, 104, 88, -128, 14, 109, -52, 126, 23, -66, -105, 80, 87, 100, -27, -36, -53, -106, -48, -52, -92, -34, 73, -118, -95, -30, 93, -64, -95, -56, 34, 10, 111, -102, 99, 36, 107, 12, -28, 31, -88, -64, 98, 42, 65, -82, -33, 98, 53, 107, -38, 99, 49, 42, -85, -70, 40, -4, -56, -63, -51, -123, -1, 90, 2, -104, 35, -100, -39, -29, -101, 79, 48, 16, -21, 28, 3, 101, 110, -59, 115, -99, -126, -124, 3, 98, 76, -77, -19, -19, 61, -19, -97, -52, -101, 35, -32, 10, 90, 116, -113, 93, -14, -44, 120, -20, -24, 113, -50, -125, 5, 1, -17, -125, 2, 60, 13, -121, -97, 23, 49, 108, 62, 2, -33, -69, 112, -15, -120, 56, 29, -100, -96, -23, 78, 74, 23, -28, -18, 64, 32, 98, -9, -75, -60, -15, -48, 42, 109, 36, -10, 27, -29, 10, 7, -52, 78, 98, 115, 37, 31, -49, -123, 115, -17, 84, 12, -25};
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
    msg.setTimeStamp(0.629923354977);
    msg.setSource(39673U);
    msg.setSourceEntity(21U);
    msg.setDestination(47539U);
    msg.setDestinationEntity(172U);
    msg.req_id = 35965U;
    msg.status = 151U;
    msg.text.assign("OYLYCCQKTTUJYZANUJLRHRBGDAOICOHNBKEMSIOQQDVQRZWUSBTGEZFSIFMIXYDAZTGAYJLJAUUAZOOOCWEXKLDXHJVOPEJFXNGUMQUGNCHXZNVZUFWRHQPPPTVVWCPJNIJMTKIYLXVNRHFFRSCXKQIDOFNDMRTTHKGSJMXGFWXHWESHLAENYPGRICBSCEJWXDPM");

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
    msg.setTimeStamp(0.409054471056);
    msg.setSource(1399U);
    msg.setSourceEntity(224U);
    msg.setDestination(42549U);
    msg.setDestinationEntity(68U);
    msg.req_id = 45474U;
    msg.status = 143U;
    msg.text.assign("CTJWEFINEOKMJHUNSNEDFLFINRMNMUWYRILAGWWXPZLQYROXCPQEXTLDZUWQLREDCZGKUSMFKVLCHORIXFHSQPCOTNWKCVZVYHPZDGAABBARDDMSHASAIVOBMPILKVTJXETEUHERMHGOCZYOBKSTTHNZBYHFSWIJVYZCLQRJNBDQAGUOKAYDSAPNOHAFXXWIXSJUBTKUBEVUQVJCFRPXQYFLEBIMVTYGZYVLKMPBPCXJNGGSOZGI");

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
    msg.setTimeStamp(0.253825590624);
    msg.setSource(33142U);
    msg.setSourceEntity(225U);
    msg.setDestination(50707U);
    msg.setDestinationEntity(171U);
    msg.req_id = 57871U;
    msg.status = 81U;
    msg.text.assign("PDTBVKIELOBESWQDHVLALBCZKMOSWCYGXPPMZPFUQGKTUGZHNGSTNZJAPOHKNLAVOCWQLGMLJJTTTQGFVUZFNSHXBMCEAIKRABFISXYPMIYEKTPIZGCYANERMSGMARNSVOQFYRBIFRGRFUYOQCJPECDLAELBQXFQDK");

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
    msg.setTimeStamp(0.639892315192);
    msg.setSource(65528U);
    msg.setSourceEntity(137U);
    msg.setDestination(64682U);
    msg.setDestinationEntity(98U);
    msg.group_name.assign("YCKPKWIVXYVLYNMUPFFSDDJCKPIYJXSHPBRFILLZHTJRAVMENDFEFNARKOZFRXODBFSKVYJCZQLTJMH");
    msg.links = 3155801169U;

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
    msg.setTimeStamp(0.023180395118);
    msg.setSource(15827U);
    msg.setSourceEntity(131U);
    msg.setDestination(31587U);
    msg.setDestinationEntity(171U);
    msg.group_name.assign("RRWURTKRGINDBSWHNPFXDNXYSYWKTZFNP");
    msg.links = 2046152359U;

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
    msg.setTimeStamp(0.128262028216);
    msg.setSource(22699U);
    msg.setSourceEntity(213U);
    msg.setDestination(32421U);
    msg.setDestinationEntity(63U);
    msg.group_name.assign("WCJSZGEUSLKMNZQSEWFZSSJZVZRYVNJLTBHBONSCPJJVSBGDQAKLYIWIQ");
    msg.links = 4283865404U;

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
    msg.setTimeStamp(0.836259839997);
    msg.setSource(11990U);
    msg.setSourceEntity(107U);
    msg.setDestination(55734U);
    msg.setDestinationEntity(44U);
    msg.groupname.assign("SOVYEDTQDPDWMTPICORIOMIHGFCHFFSOESZTBLKKJUJPQLSVEYFHKGUAWNGMRJSCWQEXUHCFIYYJOZTZGRNNVMZGGINVDUAKJZMOYKXWOVHXHWNIEMTNPSLFLHLCSTTFPQJOQAAKQKRDVODIMWEATEKHGQBPPHXZFRBBBYWGJD");
    msg.action = 211U;
    msg.grouplist.assign("PJEZZXSKERO");

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
    msg.setTimeStamp(0.198382158344);
    msg.setSource(53120U);
    msg.setSourceEntity(108U);
    msg.setDestination(2888U);
    msg.setDestinationEntity(43U);
    msg.groupname.assign("EJCGIQMJZVUBPFANJTGWUQIUPHHNLCVUHYHMYDRDNVGBIASSKZPRYVJNELSSEVXBEPROLOVRYHXOTCRFUYMBWHRDMJYZAAPLPBSWHAOODKOOVC");
    msg.action = 9U;
    msg.grouplist.assign("HPLBXZPOOGUWCEQOZQATYJSBGSVXLDTDWBSJPMZCATHEBHMYKMBWTONAKRRYHFNUCOHRPYNPIVIVGROBFNSSERQEJQPSEJHLCYISZWHKUKFLINADBQAIKNJYFRRXWQQZPWCQUEXEMKMARXEDUSBDJFJXEYAFUVMTFJWMYTNVWVLFDJMUWJGKBKGCUPGQK");

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
    msg.setTimeStamp(0.633961670163);
    msg.setSource(8191U);
    msg.setSourceEntity(74U);
    msg.setDestination(22684U);
    msg.setDestinationEntity(4U);
    msg.groupname.assign("OLIYGQPUSSYDDLRKTZJWBENGPNPBYZSPVBSKOFJGXCTIHCJHGYCHEZQYCMEKDAVMQMIQBXOTORBMBHNRBIHJRPZWLSOXVIMEAWDSWMLSKSXHEJDDZXRAAFVQGTLFWDYKILNDMUOXYUITERLZZLFCCNAPTIUQBQXINFYBGMPYRAUJWWQXIKWTURGFJOPFJEKUEBTGFEXDUNVSZECJZUOXZTVPML");
    msg.action = 114U;
    msg.grouplist.assign("SVYOPNCNSRWXGUXCPQDYVXMYIPUNBEVTKZJHFSWVPFSAQKHLIJSHWESOIRSZCNXWMZGLXIZGEQZUYLDOYPPLHRDTEHUASMKLVXCTQEBTAGQQJJXZPUWLVJFHZBMPHOQNIUKRDRBILBCZMEYNHDEGFHWDGUOKFAUEVYCFKLALJXGBVPWCTDYEWYUCADTAVJGFBIFDROKGBPRMWGMBYRJITNDOUOQTHEIXO");

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
    msg.setTimeStamp(0.53771057079);
    msg.setSource(58177U);
    msg.setSourceEntity(111U);
    msg.setDestination(29223U);
    msg.setDestinationEntity(161U);
    msg.value = 0.463694559167;
    msg.sys_src = 29928U;

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
    msg.setTimeStamp(0.033623470701);
    msg.setSource(6202U);
    msg.setSourceEntity(104U);
    msg.setDestination(56463U);
    msg.setDestinationEntity(24U);
    msg.value = 0.5240302026;
    msg.sys_src = 14300U;

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
    msg.setTimeStamp(0.760337952105);
    msg.setSource(40776U);
    msg.setSourceEntity(182U);
    msg.setDestination(19072U);
    msg.setDestinationEntity(158U);
    msg.value = 0.723253737372;
    msg.sys_src = 60106U;

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
    msg.setTimeStamp(0.212907151613);
    msg.setSource(63763U);
    msg.setSourceEntity(180U);
    msg.setDestination(4362U);
    msg.setDestinationEntity(101U);
    msg.value = 0.0458614454344;
    msg.units = 67U;

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
    msg.setTimeStamp(0.834323455954);
    msg.setSource(7453U);
    msg.setSourceEntity(66U);
    msg.setDestination(6794U);
    msg.setDestinationEntity(198U);
    msg.value = 0.693955577441;
    msg.units = 250U;

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
    msg.setTimeStamp(0.425345981774);
    msg.setSource(29809U);
    msg.setSourceEntity(115U);
    msg.setDestination(48186U);
    msg.setDestinationEntity(20U);
    msg.value = 0.691416089782;
    msg.units = 80U;

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
    msg.setTimeStamp(0.0662721874767);
    msg.setSource(52289U);
    msg.setSourceEntity(120U);
    msg.setDestination(38106U);
    msg.setDestinationEntity(31U);
    msg.base_lat = 0.167643244086;
    msg.base_lon = 0.611344800724;
    msg.base_time = 0.548941908677;

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
    msg.setTimeStamp(0.996775658017);
    msg.setSource(23494U);
    msg.setSourceEntity(18U);
    msg.setDestination(33670U);
    msg.setDestinationEntity(12U);
    msg.base_lat = 0.355196157897;
    msg.base_lon = 0.0240744768266;
    msg.base_time = 0.550112353373;

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
    msg.setTimeStamp(0.339242226824);
    msg.setSource(14977U);
    msg.setSourceEntity(72U);
    msg.setDestination(61985U);
    msg.setDestinationEntity(83U);
    msg.base_lat = 0.697203294842;
    msg.base_lon = 0.886383156724;
    msg.base_time = 0.564683811447;

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
    msg.setTimeStamp(0.813560383544);
    msg.setSource(39151U);
    msg.setSourceEntity(220U);
    msg.setDestination(52034U);
    msg.setDestinationEntity(237U);
    msg.base_lat = 0.323039976987;
    msg.base_lon = 0.150895836784;
    msg.base_time = 0.0109230685408;
    const char tmp_msg_0[] = {40, 114, -119, -1, 33, 43, -103, -30, -123, -12, -44, -27, -39, 35, 39, 34, -35, -63, -63, -128, -27, 42, -105, -57, 92, 88, 121, 103, 87, 63, 36, -8, -10, 14, 89, 101, -64, -49, -17, 22, -102, 85, 87, 90, 54, 4, 100, 40, 67, 6, -92, -29, 71, -78, -12, -69, 119, 19, -95, -79, -10, -117, 19, 66, 123, 66, 81, -67, -25, -120, -100, 69, 26, 105, 22, -112, 101, 99, 64, 66, -57, -34, 24, -10, -105, -15, 68, 8, -20, -62, -42, -51, 34, 103, 31, -127, -118, -78, -44, -71, 81, 40, -116, 67, 125, -107, 12, 107, 59, -102, 57, 3, 67, 105, -45, -58, -106, -115, 52, -103, -90, 111, 61, -62, 6, -8, -62, 85, 87, -36, 27, 60, 64, 74, -66, -56, -94, 110, 76, 22, 118, 27, -60, -23, 94, -31, 121, 91, 122, 89, 43};
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
    msg.setTimeStamp(0.471783601639);
    msg.setSource(42839U);
    msg.setSourceEntity(214U);
    msg.setDestination(63272U);
    msg.setDestinationEntity(67U);
    msg.base_lat = 0.274924604748;
    msg.base_lon = 0.744621820147;
    msg.base_time = 0.797359972958;
    const char tmp_msg_0[] = {-62, 87, 58, -63, 80, 105, -91, 30, -32, 53, 105, 125, -13, 89, -101, 98, 55, 81, 97, 22, 28, -54, -14, 51, 0, -50, -30, -60, -89, 82, 25, 18, -97, 58, 108, 22, -52, -100};
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
    msg.setTimeStamp(0.988652909524);
    msg.setSource(53489U);
    msg.setSourceEntity(168U);
    msg.setDestination(2935U);
    msg.setDestinationEntity(116U);
    msg.base_lat = 0.977429952845;
    msg.base_lon = 0.0775014248394;
    msg.base_time = 0.000705142190109;
    const char tmp_msg_0[] = {-83, -84, -65, 54, -77, -11, -95, -54, -4, -80, 79, -106, 8, 17, 89, 40, -73, 43, 1, 17, 90, 69, 15, -23, 94, -38, -100, -90, 26};
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
    msg.setTimeStamp(0.57350265251);
    msg.setSource(62324U);
    msg.setSourceEntity(187U);
    msg.setDestination(2902U);
    msg.setDestinationEntity(10U);
    msg.sys_id = 27333U;
    msg.priority = 110;
    msg.x = 10477;
    msg.y = 17768;
    msg.z = -28692;
    msg.t = -19743;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 35760U;
    tmp_msg_0.lat = 0.103532025509;
    tmp_msg_0.lon = 0.117228413264;
    tmp_msg_0.z = 0.449385520116;
    tmp_msg_0.z_units = 7U;
    tmp_msg_0.speed = 0.378623384532;
    tmp_msg_0.speed_units = 233U;
    tmp_msg_0.syringe0 = 73U;
    tmp_msg_0.syringe1 = 238U;
    tmp_msg_0.syringe2 = 225U;
    tmp_msg_0.custom.assign("NUQVJYWUSNZSLUJPKJPRVRKFEMHJSLBMWBTWFWSAWQBFOAGTPYFXPKOHOXXVHIQGORMLESOXAZIEGEVBXNMRSCTNKTEETAUCEUUTJNBDCVVMYHBVYSADDIIPZRKWRJMZUJTKAKGGRBVOHELPWUIQNXDMSYDFETVFC");
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
    msg.setTimeStamp(0.757448427738);
    msg.setSource(54190U);
    msg.setSourceEntity(102U);
    msg.setDestination(56634U);
    msg.setDestinationEntity(79U);
    msg.sys_id = 65030U;
    msg.priority = 65;
    msg.x = -13636;
    msg.y = -8175;
    msg.z = -1999;
    msg.t = 8774;
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MRVPYFRWEVHNUJCRETQCGZZYCCRYRVOKMQLYVFEKTJFWJVYLLYPVCIQOYLNGXLXXKHKOPBTZUHL");
    tmp_msg_0.feature_type = 131U;
    tmp_msg_0.rgb_red = 111U;
    tmp_msg_0.rgb_green = 80U;
    tmp_msg_0.rgb_blue = 0U;
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
    msg.setTimeStamp(0.462040197435);
    msg.setSource(59709U);
    msg.setSourceEntity(10U);
    msg.setDestination(5485U);
    msg.setDestinationEntity(240U);
    msg.sys_id = 1361U;
    msg.priority = 50;
    msg.x = 8745;
    msg.y = -28111;
    msg.z = -633;
    msg.t = 24784;
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 28U;
    tmp_msg_0.x = 13882U;
    tmp_msg_0.y = 31807U;
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
    msg.setTimeStamp(0.192340166116);
    msg.setSource(19870U);
    msg.setSourceEntity(17U);
    msg.setDestination(48644U);
    msg.setDestinationEntity(185U);
    msg.req_id = 15875U;
    msg.type = 206U;
    msg.max_size = 31400U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.88826754455;
    tmp_msg_0.base_lon = 0.720161858016;
    tmp_msg_0.base_time = 0.373177513991;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 28178U;
    tmp_tmp_msg_0_0.destination = 5186U;
    tmp_tmp_msg_0_0.timeout = 0.957616063915;
    IMC::GroupMembershipState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.group_name.assign("AAJNGGCOOSADBCLOBPUHEPWRLDVMMZHDOHQBAIHRXFXMRVWYCAJPTSYZNURMMHFKHKJTLZKSDJI");
    tmp_tmp_tmp_msg_0_0_0.links = 228032405U;
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
    msg.setTimeStamp(0.206237755499);
    msg.setSource(46754U);
    msg.setSourceEntity(139U);
    msg.setDestination(46687U);
    msg.setDestinationEntity(72U);
    msg.req_id = 11104U;
    msg.type = 59U;
    msg.max_size = 27934U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.505722528559;
    tmp_msg_0.base_lon = 0.890560792176;
    tmp_msg_0.base_time = 0.75291308847;
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
    msg.setTimeStamp(0.473962301372);
    msg.setSource(25280U);
    msg.setSourceEntity(237U);
    msg.setDestination(41832U);
    msg.setDestinationEntity(166U);
    msg.req_id = 44219U;
    msg.type = 11U;
    msg.max_size = 29281U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.991719320586;
    tmp_msg_0.base_lon = 0.561086744844;
    tmp_msg_0.base_time = 0.224440202058;
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
    msg.setTimeStamp(0.214280888805);
    msg.setSource(58738U);
    msg.setSourceEntity(44U);
    msg.setDestination(46779U);
    msg.setDestinationEntity(115U);
    msg.original_source = 62014U;
    msg.destination = 51419U;
    msg.timeout = 0.228281583705;
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("YMXTLCEQMRSGIBHRDLNLUMAKXFAWZLDGELQIYBCENKTLPHWULRKOGBRYGFOOOSKCXAEIEOURYLSJSZHWUXBZGCYXFU");
    tmp_msg_0.reference_frame = 108U;
    tmp_msg_0.custom.assign("CSVPJJSAXHIOJTLDTBRBKWLGKICXUPZBMHPWHTYAVXVPTWHZZEQFYFGYPLYXQMXELMRFHLOKSKNBPWUDHNAJPRDWZRIUWTVUVVTRQUSCAZYNBASEDOOUTQCORBFRGDQNYMUXBOAGM");
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
    msg.setTimeStamp(0.682169653388);
    msg.setSource(37264U);
    msg.setSourceEntity(108U);
    msg.setDestination(35555U);
    msg.setDestinationEntity(160U);
    msg.original_source = 24759U;
    msg.destination = 58523U;
    msg.timeout = 0.0136603461264;
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.703768221181;
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
    msg.setTimeStamp(0.363851580964);
    msg.setSource(7354U);
    msg.setSourceEntity(203U);
    msg.setDestination(39633U);
    msg.setDestinationEntity(123U);
    msg.original_source = 14214U;
    msg.destination = 35803U;
    msg.timeout = 0.0341690423843;
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.981573041889;
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
    msg.setTimeStamp(0.0947337081126);
    msg.setSource(18229U);
    msg.setSourceEntity(180U);
    msg.setDestination(29354U);
    msg.setDestinationEntity(116U);
    msg.type = 99U;
    msg.comm_interface = 3433U;
    msg.model = 47581U;
    msg.list.assign("EGEPKDPUBDIFYLUIVOYRCJCARG");

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
    msg.setTimeStamp(0.00661467845034);
    msg.setSource(54066U);
    msg.setSourceEntity(7U);
    msg.setDestination(40397U);
    msg.setDestinationEntity(199U);
    msg.type = 129U;
    msg.comm_interface = 15417U;
    msg.model = 4495U;
    msg.list.assign("OHEZBBEKWXXMPJFZVJDZFPXCIGLEYTCUUWJQXMRKTVWPCBKULRNAZTMPQKEGHHJGPDKCMMEBJELSAYZGKUISMRTBUDEKOTCQLZCHXKJXFFYCXWVJDQIBULHZSDBPJXAEXYYVSYSRTAONSAUGBI");

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
    msg.setTimeStamp(0.553125319249);
    msg.setSource(64568U);
    msg.setSourceEntity(249U);
    msg.setDestination(4514U);
    msg.setDestinationEntity(162U);
    msg.type = 204U;
    msg.comm_interface = 60354U;
    msg.model = 12476U;
    msg.list.assign("YXISRGHESJIZKBZMZFGMLDTWFUDBVZLJQGNVAUBCFRYNMNJHYCLHSXIYRSHIDOMQGNWNGKYLDHCMHIDYZXSLEAMNP");

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
    msg.setTimeStamp(0.953143807549);
    msg.setSource(65045U);
    msg.setSourceEntity(80U);
    msg.setDestination(29502U);
    msg.setDestinationEntity(244U);
    msg.type = 118U;
    msg.req_id = 1545785005U;
    msg.ttl = 17653U;
    msg.code = 232U;
    msg.destination.assign("MPHJIQMRTVDVOFCBWDSBNIDRRFCKZHEXJJKCXBTUOYWKNODBMLEOGFIPJHALWFZZRUUSQXBETTAVWZOQKQIPYBJPFCPBXWZHWURTVMBPCSGLFDMLUWHXYUFSACDCJNEPHVXV");
    msg.source.assign("MUAJRPHJWDEEOBSMUEXXOFVTWANQVKNJLSWERQRZGAWAJXNTJHSPEIGTNSGCOAHLAPZGVZHHPHQPZSLKAWUAVZEDIYPJXOVTDIZGBQDITIZQXLYFRTFGESPCNNSDRGLLARLEUQPCSTWQFZIFWXTNGCOZGWQEKNIDLVLYKFKQCDUNFDXOJFMOBYMDIRUMKBOPGWTYHHYZKRYBRQYVREMJKMTHSVBCBBFKOCXCXMSYAMCBWFUYIDVJHCNJBMLUUK");
    msg.acknowledge = 76U;
    msg.status = 124U;
    const char tmp_msg_0[] = {-82, -89, -121, -49, -30, -24, 42, -21, 124, 35, 28, -55, 40, -36, -117, -78, -32, -122, -21, -75, 100, -23, -39, -59, -56, 74, 14, 38, 91, 113, 97, 117, -94, -91, 104, 112, 57, 5, -6, -88, -96, 117, 99, 58, -123, -10, -125, 18, 90, 89, 98, -8, -123, -44, -100, -110, -111, -52, 106, -17, 46, 107, -80, -50, -109, -23, -78, 2, 81, 63, -113, -57, 58, -8, 62, -76, -12, 42, -15, 38, 90, 52, -13, -115, -41, 119, 88, 0, 81, 53, -31, -103, 27, 86, 97, 91, -15, 96, 57, -57, 49, 74, -108, -120, 37, -90, -9, 55, 91, -122, 68, 97, 97, 88, 85, 18, -45, -56, 73, -128, -127, -2, 83, 97, -67, -115, 34, 55, 61, 93, 71, -107, 24, -69, -63, 119, 81, -100, 72, 87, 6, 39, 11, -82, -63, 109, 58, 15, -91, -118, 72, -7};
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
    msg.setTimeStamp(0.834203221685);
    msg.setSource(48457U);
    msg.setSourceEntity(106U);
    msg.setDestination(42654U);
    msg.setDestinationEntity(49U);
    msg.type = 35U;
    msg.req_id = 1641015080U;
    msg.ttl = 6606U;
    msg.code = 191U;
    msg.destination.assign("OZRBOKAJXVRBODPMPYSUFYCBEFKJTTKWSXCWVIXEXCWIGHVWORRHCXZDXFRFWNVAFJMUAUVWCJSNRDEDZTNVSLXAMMEJEDRIROBGQZKWLZMTNYGQINPDNOLHHXGSLGAIBFPBJFIJQMDKCFCVZCTWMBTPPPJCJADOPRTWBYUFLZRYDSTHDIQHPGSQUNITEOPEKOULZGQGSQAAXNSTYEAMLQKZCZVLWHKXGFQJYU");
    msg.source.assign("JDDNLUBQASPBYTRCBYGNRDMHYIZKJXESINRMBFNSITMLJXHLWPUR");
    msg.acknowledge = 40U;
    msg.status = 233U;
    const char tmp_msg_0[] = {-12, -1, 93, 31, 56, -105, 21, -48, 64, 42, -26, 121, 82, 33, 62, 104, -105, -4, 104, 87, -56, -2, 95, 30, -115, -113, -116, -108, -10, -51, 80, -96, -21, -122, 55, -43, -99, 15, -27, 102, -3, -68, 27, 83, -64, 107, 36, -76, -42, 47, 111, -89, -8, -55, -18, -100, -24, 9, -96, -24, 47, 62, -40, -88, 6, -24, 2, 9, 66, -49, 81, -106, -82, -65, -28, 83, 82, -106, 7, 47, 93, -30, -21, -120, 19, 39, -74, 24, -99, 120, -61, -56, 16, 56, 104, 49, 65, 25, -54, -107, 60, 31, -41, 10, -31, 34, 9, -58, 11, 96, -54, -72, 118, -35, -84, -113, 59, -63, 81, 79, -85, 42, 58, 18, 88, 39, 106, 28, 19, 65, -6, 119, -38, -32, -109, -76, -62, -29, -6, -14, 109, 93, 121, -89, -34, 34, 45, -61, 65, 72, -107, 38, 83, 66, -66, -109, 76, -35, -93, -19, 46, -33, -48, 9, 118, -42, -117, -23, 35, -109, -87};
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
    msg.setTimeStamp(0.783618380319);
    msg.setSource(30154U);
    msg.setSourceEntity(229U);
    msg.setDestination(65001U);
    msg.setDestinationEntity(144U);
    msg.type = 162U;
    msg.req_id = 1827142194U;
    msg.ttl = 40866U;
    msg.code = 63U;
    msg.destination.assign("QDYAVLSZBCMOTVOVNQRVJTTE");
    msg.source.assign("VZXYONCOMJJLFPDSKWOKXBRCLQQXFGIPFPFOLGIYOQSAPNBMTRNCBSOVCTNJAVMXPVAUJGGIVLSUJQGHQYAAZHWYMWPTXLHIKPAJHFEZKBXQJNEPCBGSDGHHILYBJKDFUOEBLKNNJEEHVBTDZXFDOEVRZRDMFGUTWZBIOIYWWSVRMTHMIUZDEZIRULWXWGUNMURFZCTPTHKVUEWTYDDHCSQVYTIMBGQDLPF");
    msg.acknowledge = 244U;
    msg.status = 55U;
    const char tmp_msg_0[] = {-87, 55, 120, -29, 116, 14, 88, -11, -97, 83, -103, 89, -119, 17, -90, -40, 66, 85, -34, 32, 42, 46, 46, 97, 49, 119, -10, -111, -21, -7, -10, -18, -62, -43, -53, 83, 53, 88, 35, 2, 53, -97, -53, 41, 120, -94, -10, -14, 13, 58, 78, 89, 67, 27, -57, -2, 110, 83, -115, -74, 9, 27, -46, -118, -5, -107};
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
    msg.setTimeStamp(0.628579050674);
    msg.setSource(6811U);
    msg.setSourceEntity(181U);
    msg.setDestination(34785U);
    msg.setDestinationEntity(145U);
    msg.id = 251U;
    msg.range = 0.144267701833;

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
    msg.setTimeStamp(0.19372424301);
    msg.setSource(55351U);
    msg.setSourceEntity(235U);
    msg.setDestination(55697U);
    msg.setDestinationEntity(27U);
    msg.id = 226U;
    msg.range = 0.596919444607;

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
    msg.setTimeStamp(0.816733915261);
    msg.setSource(55747U);
    msg.setSourceEntity(40U);
    msg.setDestination(52960U);
    msg.setDestinationEntity(199U);
    msg.id = 24U;
    msg.range = 0.984592214797;

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
    msg.setTimeStamp(0.265981046541);
    msg.setSource(563U);
    msg.setSourceEntity(210U);
    msg.setDestination(45075U);
    msg.setDestinationEntity(19U);
    msg.beacon.assign("WCLSARHMMIETXKJNBAHWXYLZCYDZDMCECZXRQCLEAEMLPNUDQJTIBFPJOTNERUXEWZAYJTRSDZQCRSGXKRCQNXHLUGHQBXSOBWYLLYEYWDQGOFZPTSOEIJNVGDWYVLQUVPRJJBGPGZMPHIBOZXNVHWFHMIUTHUIDYVLTLODHCMSBDPOKVJKKQDVKMFXFGVFNANEIPGHKSXRFJANPAVOZQOTITMKF");
    msg.lat = 0.213874747532;
    msg.lon = 0.74915764181;
    msg.depth = 0.655201952292;
    msg.query_channel = 240U;
    msg.reply_channel = 135U;
    msg.transponder_delay = 67U;

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
    msg.setTimeStamp(0.421398418913);
    msg.setSource(33979U);
    msg.setSourceEntity(234U);
    msg.setDestination(3746U);
    msg.setDestinationEntity(76U);
    msg.beacon.assign("CBBEIAXDJQCST");
    msg.lat = 0.665292490489;
    msg.lon = 0.93983736289;
    msg.depth = 0.219598539769;
    msg.query_channel = 164U;
    msg.reply_channel = 254U;
    msg.transponder_delay = 124U;

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
    msg.setTimeStamp(0.527579738465);
    msg.setSource(50514U);
    msg.setSourceEntity(138U);
    msg.setDestination(57833U);
    msg.setDestinationEntity(31U);
    msg.beacon.assign("RNBRDLATFSOMNCIUAQMBBUQQERREQKHNYYVYCWJHQNUKDWUIKPBLMDXHXAGACDHVPPCSGOZKXDVCLRHTDETRJDVPRTTPYBGPUVLXFTYCJKWPWHSANYXEWFXUKDLRAOKBBMZA");
    msg.lat = 0.938351167332;
    msg.lon = 0.32281962188;
    msg.depth = 0.780553484674;
    msg.query_channel = 139U;
    msg.reply_channel = 186U;
    msg.transponder_delay = 238U;

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
    msg.setTimeStamp(0.893655259544);
    msg.setSource(54241U);
    msg.setSourceEntity(33U);
    msg.setDestination(2089U);
    msg.setDestinationEntity(160U);
    msg.op = 166U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MMJQLTHSSCQKAAINLUQNADBYFHKJNCYVXHMELPKVHZMWIYFKMOWIGCCFPORBETGRZTWJXEJSBRVDQONRLOXVWUGPKWUOEMSDEILKDQHUGGLAVTUVIPZATMHBSZIYJBZEAHDYEQO");
    tmp_msg_0.lat = 0.209055768448;
    tmp_msg_0.lon = 0.683914405116;
    tmp_msg_0.depth = 0.786387455496;
    tmp_msg_0.query_channel = 59U;
    tmp_msg_0.reply_channel = 67U;
    tmp_msg_0.transponder_delay = 180U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.786899031983);
    msg.setSource(29506U);
    msg.setSourceEntity(47U);
    msg.setDestination(20890U);
    msg.setDestinationEntity(213U);
    msg.op = 193U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GWKTKZVTOEJQYNSGCDAPYSFPSIKBYSQZDMNXFEULNWGOPIJNPESHSRCBITWKOBPQCJPCEAPLMQDXPBTRVRWHLZYYFLLBRVBAREFHUSGVXHHJWPXDDLNYLWNUMTOMSRCVJCDROJOIVXZDIIGEXFYBQYDOCZJQMKJHAMNDMXQMJIVCZQQOANBWKDGRHNXYEUXTFHIWBMAEGUSZTATUGGUIPHXFBNOURLSTICLGA");
    tmp_msg_0.lat = 0.317160139448;
    tmp_msg_0.lon = 0.640687826066;
    tmp_msg_0.depth = 0.811365615657;
    tmp_msg_0.query_channel = 56U;
    tmp_msg_0.reply_channel = 226U;
    tmp_msg_0.transponder_delay = 180U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.150643038357);
    msg.setSource(10191U);
    msg.setSourceEntity(63U);
    msg.setDestination(50107U);
    msg.setDestinationEntity(168U);
    msg.op = 87U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KCVDLHUJUSSNFCMDINKMQLEWLSUQAVZEHGXHVBZJOJATKDKTUOGLYTRBQGZRLRGABDOQYUKPKGMNPWYTINDWQVRUIBXRMBEPZCXIMWMHSCCUBRJIPLKGHCVXCFXDBLRMBQOYSPDLEOCVONUFBH");
    tmp_msg_0.lat = 0.675753402726;
    tmp_msg_0.lon = 0.0122134070926;
    tmp_msg_0.depth = 0.124404674978;
    tmp_msg_0.query_channel = 253U;
    tmp_msg_0.reply_channel = 181U;
    tmp_msg_0.transponder_delay = 94U;
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
    msg.setTimeStamp(0.400767467445);
    msg.setSource(41193U);
    msg.setSourceEntity(59U);
    msg.setDestination(33982U);
    msg.setDestinationEntity(28U);
    IMC::TransmissionStatus tmp_msg_0;
    tmp_msg_0.req_id = 35543U;
    tmp_msg_0.status = 5U;
    tmp_msg_0.info.assign("GSPWRSADFEHTIZHNMZOWMMUPOTZZFULBTAFSHSBLHZXSNGVKBLFOBEAJCXMDDODKCYLQHNDNSDIPRVAIVTZUGXTZZGXMAPOEBOEXWKKDYVUYXCFRYWKPWHPJEXJYHBYJAPQRVCILOEVFLYJEYYFGCVJNKBV");
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
    msg.setTimeStamp(0.210199406173);
    msg.setSource(57629U);
    msg.setSourceEntity(197U);
    msg.setDestination(2966U);
    msg.setDestinationEntity(69U);
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 119U;
    tmp_msg_0.plan_id.assign("PWZIOECZSTGFRENHFGIYESNMNVLZXSHVYVZELSFXRVNYNATTODRIQBXZBYASAGMEFQJZCYSTQDGMSJYBEHBLEXIWJXROGKMWPMZCGVLIIODRVKHOUXVJWPFDJZKAOTETQWPCTIIXNLWZCFCQKRKUQUPOWSNHVMJMAUGNYPMJWOQBLGFEQVJCHDDTNTUOGABQQHCRUHACXTFUWUDKYDAVSIJADHYFLFPUXKRSPMLGLRWXOPCEBZURKKBIBYNJDM");
    tmp_msg_0.plan_eta = -1575659602;
    tmp_msg_0.plan_progress = 0.762373948938;
    tmp_msg_0.man_id.assign("DIBWBEGHVWVXOBMSV");
    tmp_msg_0.man_type = 13321U;
    tmp_msg_0.man_eta = 383205194;
    tmp_msg_0.last_outcome = 98U;
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
    msg.setTimeStamp(0.3557273345);
    msg.setSource(21216U);
    msg.setSourceEntity(252U);
    msg.setDestination(43327U);
    msg.setDestinationEntity(121U);
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("RCWAMPSVTOQWZIHUFFZQDSMQGAYBYTZIODHWYLGSDRLHEFFJJHPFXFLVGTSUTOSXPKWHANWRCCKFCTHXIADUHFOMVSCOAXDUICVCKSROOYUKYCNRQLQKWGTLBQXZKTEHGVHXDVZEPXZPGVGXNASJZIJVISRJEIPEZJJNOJKBBEUQULWBWDMEJNLQFIUOAUPVRGBNQALEOAZDPBBKMNNLIDUEQWYCMYAHKKYNGSRMYVFPGRDWEMNPMIYTXR");
    tmp_msg_0.timeout = 56467U;
    tmp_msg_0.contents.assign("UGYTDVGZHZDWAWJFQURMIYCOBFFBWTXXJKFMHQNYHIPKDOYWPDORNMSUHJKXLKYNYSWLNQXQXJSPYGTSODJUPQURFIYFSGPVEMBZNKVSSQXSNTIHIWNEMEQRPKBUGCCHHVVITZKLVPMWBWACUALVNKACIBVLGXAQJRAOLCWDGNJIPNJQZEVHTDSEFGXUTFCRBZSLGVJBLYELMRZO");
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
    msg.setTimeStamp(0.810963076299);
    msg.setSource(18024U);
    msg.setSourceEntity(172U);
    msg.setDestination(21789U);
    msg.setDestinationEntity(139U);
    msg.op = 226U;
    msg.system.assign("MCHKUTIAVSNA");
    msg.range = 0.00210972666088;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.745415012293;
    tmp_msg_0.speed = 0.0485530535329;
    tmp_msg_0.turbulence = 0.536478121984;
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
    msg.setTimeStamp(0.61810530672);
    msg.setSource(38545U);
    msg.setSourceEntity(79U);
    msg.setDestination(62027U);
    msg.setDestinationEntity(100U);
    msg.op = 124U;
    msg.system.assign("RZNIXPGSOVCOLTVNVWIFWEWAEHAQQMGVEHBEZDZMMFJUWCNROSBXBEKLCUMTMSXHRUSXPERYFPYVEJNRGPGXYIIZJTBTEUWZCKAYYBNVFGZMPQWDOIYSJJVOKSEPPBTLJRDXZDCWDOQLGKIBRQWHQBZGMGTFTYUCWOFDXSHHIUNYYDSCKIMXBNAKAAGRHQMBSQTOKLAWFNRNALDTJA");
    msg.range = 0.870617224753;
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 59U;
    tmp_msg_0.tas2acc_pgain = 0.543009845948;
    tmp_msg_0.bank2p_pgain = 0.395170029759;
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
    msg.setTimeStamp(0.016980178283);
    msg.setSource(51380U);
    msg.setSourceEntity(51U);
    msg.setDestination(1017U);
    msg.setDestinationEntity(95U);
    msg.op = 166U;
    msg.system.assign("ZWLLROUNFHYKBQKWBAJUKCNJOWWJYTWCSRWDYOXOFDDYITNHNLCFNZQDEXIZAKLEHQPHGWQHATMSLCLWVNFTZSKVVUEQFODSJEGDNISJIDAGKEZDV");
    msg.range = 0.986443130511;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.0802903258931;
    tmp_msg_0.temperature = 0.035440450941;
    tmp_msg_0.depth = 0.888780320875;
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
    msg.setTimeStamp(0.851217271196);
    msg.setSource(5584U);
    msg.setSourceEntity(141U);
    msg.setDestination(24755U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.952475606744);
    msg.setSource(13449U);
    msg.setSourceEntity(152U);
    msg.setDestination(26732U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.279662877181);
    msg.setSource(48645U);
    msg.setSourceEntity(64U);
    msg.setDestination(56191U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.0972345661494);
    msg.setSource(4177U);
    msg.setSourceEntity(165U);
    msg.setDestination(36573U);
    msg.setDestinationEntity(206U);
    msg.list.assign("COCEOAVDHYEBEIKRNFWBLXLHMMPLBHNUUU");

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
    msg.setTimeStamp(0.81478174957);
    msg.setSource(38511U);
    msg.setSourceEntity(40U);
    msg.setDestination(29809U);
    msg.setDestinationEntity(251U);
    msg.list.assign("YPDZVTHROMVNIWBYIXZTKCKVGLZEGPFJLPUAQHSDUBLFIJQHMHZWFMATBFNGLNFQWROGSUMXJBVILXIJDZQGTRHQOENNXMJZYIYRJKNKKOUIYIDQUDSKCSQSGZGEPCCDRQFKUWASNEFKIOWEYEWLDVFAKWTYLUXSCOJRBNTYRJGHPRVMUATPBHBBLTUCOXOWQFSYKBUXEXRBVZZSEXECHLIAVASWGOFCO");

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
    msg.setTimeStamp(0.926264051866);
    msg.setSource(63238U);
    msg.setSourceEntity(88U);
    msg.setDestination(17038U);
    msg.setDestinationEntity(242U);
    msg.list.assign("WXKKJRDVZVNHKRLTSMFETPSSIJPVWZGWODSAFMCMYOYGQNBBHTWGXMHKYOCKXSCENBMQXHNEOJFPRLEZMXFBUAUUGLLFSDUC");

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
    msg.setTimeStamp(0.926884104225);
    msg.setSource(15732U);
    msg.setSourceEntity(84U);
    msg.setDestination(23908U);
    msg.setDestinationEntity(16U);
    msg.peer.assign("KOHSZRBVLKLECLBDPBKEDTKBPUQJAPCZEBCFRSAHWQZH");
    msg.rssi = 0.977195848698;
    msg.integrity = 63021U;

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
    msg.setTimeStamp(0.991107027513);
    msg.setSource(14740U);
    msg.setSourceEntity(175U);
    msg.setDestination(30177U);
    msg.setDestinationEntity(247U);
    msg.peer.assign("YSZLUWYBMXUBZJEGNJMJJAMDGHDHADUQPTVGXHQAWRVGDHWIEGDSKVEFVPKEFGSFTTWZTXQJRKMEEIZJHZMTPNARISQAIJQCGWYRSWKEFRLHXJZNUCMZIFRDZNUMUFODMVCQPRINCIYGBUSUBHODVQOZVNMLTWNPAKEEXTLICJAWULOBPKYFULVBOFYLOOKSICYCQBKHLZBOBPDAXCHYOYITCKPRD");
    msg.rssi = 0.0896559536783;
    msg.integrity = 1882U;

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
    msg.setTimeStamp(0.587387004161);
    msg.setSource(27763U);
    msg.setSourceEntity(211U);
    msg.setDestination(18956U);
    msg.setDestinationEntity(210U);
    msg.peer.assign("QSAXGVZKJBOWPZNTFLGHCNHQBLDAZMVTQUDPZXQXLPNSWQFGPPEQPVWQJJIVVPUCYBDFTFEMKXYECLTLCMGFYYLJHIWIRUEAYHBNXFDUBIOAHHCLIRZLSTANKJSNVOUUBRRROIDGFNUTUFJMDHNJKDKYWMERTGIDERPBSVSYEHYKVTJBXMXPCOMRRAWYCYTNMMZAPZLSSXELGKUCGOIZJKEZ");
    msg.rssi = 0.371825581102;
    msg.integrity = 42090U;

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
    IMC::Rpm msg;
    msg.setTimeStamp(0.826503847412);
    msg.setSource(5037U);
    msg.setSourceEntity(17U);
    msg.setDestination(48118U);
    msg.setDestinationEntity(218U);
    msg.value = -7990;

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
    msg.setTimeStamp(0.931448845382);
    msg.setSource(14809U);
    msg.setSourceEntity(189U);
    msg.setDestination(28091U);
    msg.setDestinationEntity(61U);
    msg.value = -25368;

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
    msg.setTimeStamp(0.767155070758);
    msg.setSource(41663U);
    msg.setSourceEntity(226U);
    msg.setDestination(15730U);
    msg.setDestinationEntity(111U);
    msg.value = 28419;

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
    msg.setTimeStamp(0.775223102039);
    msg.setSource(49279U);
    msg.setSourceEntity(23U);
    msg.setDestination(51843U);
    msg.setDestinationEntity(215U);
    msg.value = 0.354115772412;

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
    msg.setTimeStamp(0.727585531162);
    msg.setSource(23401U);
    msg.setSourceEntity(125U);
    msg.setDestination(58805U);
    msg.setDestinationEntity(36U);
    msg.value = 0.322235378985;

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
    msg.setTimeStamp(0.0483119008352);
    msg.setSource(19361U);
    msg.setSourceEntity(166U);
    msg.setDestination(27927U);
    msg.setDestinationEntity(155U);
    msg.value = 0.454638195463;

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
    msg.setTimeStamp(0.231899007469);
    msg.setSource(33211U);
    msg.setSourceEntity(179U);
    msg.setDestination(46368U);
    msg.setDestinationEntity(222U);
    msg.value = 0.250232121132;

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
    msg.setTimeStamp(0.0457920396602);
    msg.setSource(62253U);
    msg.setSourceEntity(54U);
    msg.setDestination(58905U);
    msg.setDestinationEntity(6U);
    msg.value = 0.308276244712;

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
    msg.setTimeStamp(0.611245732375);
    msg.setSource(37310U);
    msg.setSourceEntity(65U);
    msg.setDestination(16467U);
    msg.setDestinationEntity(102U);
    msg.value = 0.328774320017;

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
    msg.setTimeStamp(0.707444439816);
    msg.setSource(17749U);
    msg.setSourceEntity(239U);
    msg.setDestination(57103U);
    msg.setDestinationEntity(170U);
    msg.validity = 18066U;
    msg.type = 221U;
    msg.utc_year = 54535U;
    msg.utc_month = 205U;
    msg.utc_day = 26U;
    msg.utc_time = 0.861733564962;
    msg.lat = 0.738539594834;
    msg.lon = 0.79997756947;
    msg.height = 0.268897597915;
    msg.satellites = 105U;
    msg.cog = 0.782921644198;
    msg.sog = 0.736761213982;
    msg.hdop = 0.223120835333;
    msg.vdop = 0.523253650909;
    msg.hacc = 0.622160362737;
    msg.vacc = 0.0463703627248;

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
    msg.setTimeStamp(0.27079301825);
    msg.setSource(62088U);
    msg.setSourceEntity(126U);
    msg.setDestination(64864U);
    msg.setDestinationEntity(224U);
    msg.validity = 41130U;
    msg.type = 14U;
    msg.utc_year = 64688U;
    msg.utc_month = 229U;
    msg.utc_day = 59U;
    msg.utc_time = 0.839349469639;
    msg.lat = 0.453905651071;
    msg.lon = 0.00879584436386;
    msg.height = 0.555840521356;
    msg.satellites = 241U;
    msg.cog = 0.325511454993;
    msg.sog = 0.556132879412;
    msg.hdop = 0.817083327667;
    msg.vdop = 0.741610896963;
    msg.hacc = 0.730382318834;
    msg.vacc = 0.0315349796439;

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
    msg.setTimeStamp(0.864464317221);
    msg.setSource(65133U);
    msg.setSourceEntity(61U);
    msg.setDestination(51294U);
    msg.setDestinationEntity(199U);
    msg.validity = 49325U;
    msg.type = 46U;
    msg.utc_year = 33508U;
    msg.utc_month = 132U;
    msg.utc_day = 191U;
    msg.utc_time = 0.711844631219;
    msg.lat = 0.421629243753;
    msg.lon = 0.440353343838;
    msg.height = 0.469657904641;
    msg.satellites = 225U;
    msg.cog = 0.0737616782032;
    msg.sog = 0.972977393747;
    msg.hdop = 0.673725618507;
    msg.vdop = 0.00534415636456;
    msg.hacc = 0.991798835306;
    msg.vacc = 0.14639819005;

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
    msg.setTimeStamp(0.750802965767);
    msg.setSource(30347U);
    msg.setSourceEntity(72U);
    msg.setDestination(25651U);
    msg.setDestinationEntity(150U);
    msg.time = 0.112154049545;
    msg.phi = 0.878418603896;
    msg.theta = 0.4967224449;
    msg.psi = 0.506355348959;
    msg.psi_magnetic = 0.794192696289;

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
    msg.setTimeStamp(0.170488387911);
    msg.setSource(715U);
    msg.setSourceEntity(226U);
    msg.setDestination(50242U);
    msg.setDestinationEntity(5U);
    msg.time = 0.569273837857;
    msg.phi = 0.206260515739;
    msg.theta = 0.756752262;
    msg.psi = 0.967977308298;
    msg.psi_magnetic = 0.206765685854;

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
    msg.setTimeStamp(0.38905589079);
    msg.setSource(49692U);
    msg.setSourceEntity(48U);
    msg.setDestination(46582U);
    msg.setDestinationEntity(117U);
    msg.time = 0.755148900154;
    msg.phi = 0.427477363835;
    msg.theta = 0.390889874939;
    msg.psi = 0.0961239849379;
    msg.psi_magnetic = 0.263218790848;

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
    msg.setTimeStamp(0.830364113691);
    msg.setSource(15180U);
    msg.setSourceEntity(8U);
    msg.setDestination(923U);
    msg.setDestinationEntity(164U);
    msg.time = 0.126328264492;
    msg.x = 0.0973730283708;
    msg.y = 0.64980757357;
    msg.z = 0.87973461848;
    msg.timestep = 0.916955170538;

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
    msg.setTimeStamp(0.731225573971);
    msg.setSource(22296U);
    msg.setSourceEntity(227U);
    msg.setDestination(46903U);
    msg.setDestinationEntity(12U);
    msg.time = 0.667896165721;
    msg.x = 0.885480273728;
    msg.y = 0.386182061087;
    msg.z = 0.148054384373;
    msg.timestep = 0.297596554984;

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
    msg.setTimeStamp(0.364427240591);
    msg.setSource(17994U);
    msg.setSourceEntity(33U);
    msg.setDestination(7294U);
    msg.setDestinationEntity(126U);
    msg.time = 0.230785846609;
    msg.x = 0.500512883871;
    msg.y = 0.48630508714;
    msg.z = 0.214839046025;
    msg.timestep = 0.0109508407469;

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
    msg.setTimeStamp(0.221087852772);
    msg.setSource(8734U);
    msg.setSourceEntity(220U);
    msg.setDestination(6337U);
    msg.setDestinationEntity(242U);
    msg.time = 0.411039594244;
    msg.x = 0.0836510272891;
    msg.y = 0.399148614059;
    msg.z = 0.833699467594;

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
    msg.setTimeStamp(0.872016978148);
    msg.setSource(28641U);
    msg.setSourceEntity(199U);
    msg.setDestination(33912U);
    msg.setDestinationEntity(200U);
    msg.time = 0.521802563274;
    msg.x = 0.297418903214;
    msg.y = 0.123315691905;
    msg.z = 0.961096665792;

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
    msg.setTimeStamp(0.774548297673);
    msg.setSource(43824U);
    msg.setSourceEntity(119U);
    msg.setDestination(36230U);
    msg.setDestinationEntity(224U);
    msg.time = 0.933929721393;
    msg.x = 0.760295895429;
    msg.y = 0.886010515496;
    msg.z = 0.986037981722;

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
    msg.setTimeStamp(0.206822747762);
    msg.setSource(44172U);
    msg.setSourceEntity(5U);
    msg.setDestination(48764U);
    msg.setDestinationEntity(211U);
    msg.time = 0.690948344808;
    msg.x = 0.545772915135;
    msg.y = 0.814161354606;
    msg.z = 0.827879372218;

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
    msg.setTimeStamp(0.41197449481);
    msg.setSource(7782U);
    msg.setSourceEntity(242U);
    msg.setDestination(45492U);
    msg.setDestinationEntity(62U);
    msg.time = 0.834527354307;
    msg.x = 0.45254893244;
    msg.y = 0.943630085202;
    msg.z = 0.295180008683;

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
    msg.setTimeStamp(0.234520598546);
    msg.setSource(43372U);
    msg.setSourceEntity(118U);
    msg.setDestination(21243U);
    msg.setDestinationEntity(130U);
    msg.time = 0.411598450563;
    msg.x = 0.72584347363;
    msg.y = 0.744972681199;
    msg.z = 0.390958794513;

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
    msg.setTimeStamp(0.512674000244);
    msg.setSource(3966U);
    msg.setSourceEntity(172U);
    msg.setDestination(27176U);
    msg.setDestinationEntity(65U);
    msg.time = 0.964556490887;
    msg.x = 0.937837454099;
    msg.y = 0.161803686286;
    msg.z = 0.0405718851739;

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
    msg.setTimeStamp(0.348766268883);
    msg.setSource(24829U);
    msg.setSourceEntity(61U);
    msg.setDestination(10989U);
    msg.setDestinationEntity(204U);
    msg.time = 0.956991739037;
    msg.x = 0.987610610569;
    msg.y = 0.898167648453;
    msg.z = 0.608697524662;

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
    msg.setTimeStamp(0.249356778527);
    msg.setSource(57630U);
    msg.setSourceEntity(244U);
    msg.setDestination(3300U);
    msg.setDestinationEntity(81U);
    msg.time = 0.513141119738;
    msg.x = 0.501002308289;
    msg.y = 0.979166939058;
    msg.z = 0.623676863488;

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
    msg.setTimeStamp(0.86522899904);
    msg.setSource(16305U);
    msg.setSourceEntity(147U);
    msg.setDestination(52151U);
    msg.setDestinationEntity(35U);
    msg.validity = 35U;
    msg.x = 0.988570464653;
    msg.y = 0.942372703936;
    msg.z = 0.727939791124;

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
    msg.setTimeStamp(0.130955212268);
    msg.setSource(40368U);
    msg.setSourceEntity(240U);
    msg.setDestination(14937U);
    msg.setDestinationEntity(62U);
    msg.validity = 207U;
    msg.x = 0.207438920118;
    msg.y = 0.529740503461;
    msg.z = 0.504574692458;

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
    msg.setTimeStamp(0.88843679641);
    msg.setSource(20739U);
    msg.setSourceEntity(140U);
    msg.setDestination(13714U);
    msg.setDestinationEntity(137U);
    msg.validity = 253U;
    msg.x = 0.808389849377;
    msg.y = 0.498397922829;
    msg.z = 0.727726086221;

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
    msg.setTimeStamp(0.187338937057);
    msg.setSource(3906U);
    msg.setSourceEntity(232U);
    msg.setDestination(7183U);
    msg.setDestinationEntity(34U);
    msg.validity = 150U;
    msg.x = 0.780073560331;
    msg.y = 0.821165459003;
    msg.z = 0.974185835965;

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
    msg.setTimeStamp(0.350054288374);
    msg.setSource(15272U);
    msg.setSourceEntity(65U);
    msg.setDestination(18005U);
    msg.setDestinationEntity(23U);
    msg.validity = 119U;
    msg.x = 0.193630534271;
    msg.y = 0.454683095138;
    msg.z = 0.131575454859;

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
    msg.setTimeStamp(0.0183370715318);
    msg.setSource(13007U);
    msg.setSourceEntity(152U);
    msg.setDestination(2444U);
    msg.setDestinationEntity(182U);
    msg.validity = 70U;
    msg.x = 0.849566067452;
    msg.y = 0.628226991136;
    msg.z = 0.30332517949;

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
    msg.setTimeStamp(0.974616484931);
    msg.setSource(41014U);
    msg.setSourceEntity(180U);
    msg.setDestination(20020U);
    msg.setDestinationEntity(39U);
    msg.time = 0.448009475902;
    msg.x = 0.39031643934;
    msg.y = 0.182583471443;
    msg.z = 0.140128032333;

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
    msg.setTimeStamp(0.846397642592);
    msg.setSource(17237U);
    msg.setSourceEntity(89U);
    msg.setDestination(2543U);
    msg.setDestinationEntity(55U);
    msg.time = 0.766721170084;
    msg.x = 0.469693584304;
    msg.y = 0.263742266315;
    msg.z = 0.762950019225;

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
    msg.setTimeStamp(0.132909233209);
    msg.setSource(7419U);
    msg.setSourceEntity(39U);
    msg.setDestination(49188U);
    msg.setDestinationEntity(55U);
    msg.time = 0.304569692256;
    msg.x = 0.67316803695;
    msg.y = 0.449656346234;
    msg.z = 0.175769733672;

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
    msg.setTimeStamp(0.103409064105);
    msg.setSource(27661U);
    msg.setSourceEntity(55U);
    msg.setDestination(3228U);
    msg.setDestinationEntity(183U);
    msg.validity = 215U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.138800300606;
    tmp_msg_0.y = 0.0461893214272;
    tmp_msg_0.z = 0.814721854187;
    tmp_msg_0.phi = 0.583677521484;
    tmp_msg_0.theta = 0.226029737772;
    tmp_msg_0.psi = 0.262797532097;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.26856390903;

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
    msg.setTimeStamp(0.958804626283);
    msg.setSource(1057U);
    msg.setSourceEntity(119U);
    msg.setDestination(21148U);
    msg.setDestinationEntity(76U);
    msg.validity = 189U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.47887026532;
    tmp_msg_0.beam_height = 0.526970122344;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.85057758711;

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
    msg.setTimeStamp(0.633591686907);
    msg.setSource(51350U);
    msg.setSourceEntity(200U);
    msg.setDestination(51330U);
    msg.setDestinationEntity(154U);
    msg.validity = 246U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.319776973866;
    tmp_msg_0.y = 0.923985780708;
    tmp_msg_0.z = 0.32350516857;
    tmp_msg_0.phi = 0.46161552777;
    tmp_msg_0.theta = 0.844160089644;
    tmp_msg_0.psi = 0.218614442869;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.860045178762;
    tmp_msg_1.beam_height = 0.919487417442;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.867356103184;

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
    msg.setTimeStamp(0.636815583359);
    msg.setSource(54900U);
    msg.setSourceEntity(117U);
    msg.setDestination(63059U);
    msg.setDestinationEntity(133U);
    msg.value = 0.639604971124;

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
    msg.setTimeStamp(0.520265611468);
    msg.setSource(47930U);
    msg.setSourceEntity(5U);
    msg.setDestination(19407U);
    msg.setDestinationEntity(155U);
    msg.value = 0.733309846708;

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
    msg.setTimeStamp(0.969914510586);
    msg.setSource(61867U);
    msg.setSourceEntity(78U);
    msg.setDestination(24055U);
    msg.setDestinationEntity(201U);
    msg.value = 0.473540073275;

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
    msg.setTimeStamp(0.0861183230246);
    msg.setSource(34457U);
    msg.setSourceEntity(146U);
    msg.setDestination(46545U);
    msg.setDestinationEntity(222U);
    msg.value = 0.239944047058;

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
    msg.setTimeStamp(0.000934337801799);
    msg.setSource(32254U);
    msg.setSourceEntity(113U);
    msg.setDestination(49061U);
    msg.setDestinationEntity(54U);
    msg.value = 0.245241603363;

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
    msg.setTimeStamp(0.144133825955);
    msg.setSource(52684U);
    msg.setSourceEntity(121U);
    msg.setDestination(21021U);
    msg.setDestinationEntity(71U);
    msg.value = 0.204746132433;

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
    msg.setTimeStamp(0.950328286004);
    msg.setSource(10677U);
    msg.setSourceEntity(113U);
    msg.setDestination(9834U);
    msg.setDestinationEntity(107U);
    msg.value = 0.792270376954;

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
    msg.setTimeStamp(0.0217240018527);
    msg.setSource(51611U);
    msg.setSourceEntity(244U);
    msg.setDestination(48116U);
    msg.setDestinationEntity(22U);
    msg.value = 0.103371582334;

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
    msg.setTimeStamp(0.465129106193);
    msg.setSource(56688U);
    msg.setSourceEntity(219U);
    msg.setDestination(21764U);
    msg.setDestinationEntity(228U);
    msg.value = 0.534372229386;

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
    msg.setTimeStamp(0.437713542255);
    msg.setSource(29557U);
    msg.setSourceEntity(204U);
    msg.setDestination(57255U);
    msg.setDestinationEntity(187U);
    msg.value = 0.116800872426;

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
    msg.setTimeStamp(0.0547576955624);
    msg.setSource(21844U);
    msg.setSourceEntity(42U);
    msg.setDestination(28188U);
    msg.setDestinationEntity(190U);
    msg.value = 0.0162984292988;

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
    msg.setTimeStamp(0.112550229377);
    msg.setSource(17201U);
    msg.setSourceEntity(230U);
    msg.setDestination(1174U);
    msg.setDestinationEntity(209U);
    msg.value = 0.603965191554;

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
    msg.setTimeStamp(0.158309236586);
    msg.setSource(25459U);
    msg.setSourceEntity(230U);
    msg.setDestination(54494U);
    msg.setDestinationEntity(57U);
    msg.value = 0.609794089687;

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
    msg.setTimeStamp(0.303359852722);
    msg.setSource(35369U);
    msg.setSourceEntity(79U);
    msg.setDestination(30444U);
    msg.setDestinationEntity(119U);
    msg.value = 0.126286208141;

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
    msg.setTimeStamp(0.752156170323);
    msg.setSource(31643U);
    msg.setSourceEntity(105U);
    msg.setDestination(54345U);
    msg.setDestinationEntity(139U);
    msg.value = 0.0810630933753;

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
    msg.setTimeStamp(0.395925976098);
    msg.setSource(37998U);
    msg.setSourceEntity(6U);
    msg.setDestination(53503U);
    msg.setDestinationEntity(111U);
    msg.value = 0.719744412222;

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
    msg.setTimeStamp(0.689324132081);
    msg.setSource(21087U);
    msg.setSourceEntity(121U);
    msg.setDestination(35044U);
    msg.setDestinationEntity(134U);
    msg.value = 0.966032313456;

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
    msg.setTimeStamp(0.724460000861);
    msg.setSource(8696U);
    msg.setSourceEntity(92U);
    msg.setDestination(46006U);
    msg.setDestinationEntity(166U);
    msg.value = 0.111041211183;

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
    msg.setTimeStamp(0.751364631091);
    msg.setSource(17085U);
    msg.setSourceEntity(217U);
    msg.setDestination(58552U);
    msg.setDestinationEntity(163U);
    msg.value = 0.209070686667;

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
    msg.setTimeStamp(0.924701205964);
    msg.setSource(40662U);
    msg.setSourceEntity(234U);
    msg.setDestination(24200U);
    msg.setDestinationEntity(52U);
    msg.value = 0.826798202987;

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
    msg.setTimeStamp(0.37607218235);
    msg.setSource(60529U);
    msg.setSourceEntity(172U);
    msg.setDestination(44366U);
    msg.setDestinationEntity(228U);
    msg.value = 0.355929310161;

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
    msg.setTimeStamp(0.116009349597);
    msg.setSource(23748U);
    msg.setSourceEntity(150U);
    msg.setDestination(14398U);
    msg.setDestinationEntity(186U);
    msg.value = 0.349109869698;

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
    msg.setTimeStamp(0.191935912666);
    msg.setSource(53797U);
    msg.setSourceEntity(127U);
    msg.setDestination(7348U);
    msg.setDestinationEntity(149U);
    msg.value = 0.739453517571;

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
    msg.setTimeStamp(0.657443357482);
    msg.setSource(349U);
    msg.setSourceEntity(12U);
    msg.setDestination(24534U);
    msg.setDestinationEntity(242U);
    msg.value = 0.0757259214656;

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
    msg.setTimeStamp(0.824262111006);
    msg.setSource(13124U);
    msg.setSourceEntity(1U);
    msg.setDestination(50686U);
    msg.setDestinationEntity(9U);
    msg.direction = 0.789236025384;
    msg.speed = 0.853143671238;
    msg.turbulence = 0.925443111466;

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
    msg.setTimeStamp(0.194031314566);
    msg.setSource(8720U);
    msg.setSourceEntity(69U);
    msg.setDestination(2068U);
    msg.setDestinationEntity(70U);
    msg.direction = 0.778616343815;
    msg.speed = 0.929187537231;
    msg.turbulence = 0.0696958086315;

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
    msg.setTimeStamp(0.770260480899);
    msg.setSource(56266U);
    msg.setSourceEntity(35U);
    msg.setDestination(13650U);
    msg.setDestinationEntity(130U);
    msg.direction = 0.524872643899;
    msg.speed = 0.163805720013;
    msg.turbulence = 0.385398108332;

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
    msg.setTimeStamp(0.961789383442);
    msg.setSource(27917U);
    msg.setSourceEntity(59U);
    msg.setDestination(2965U);
    msg.setDestinationEntity(97U);
    msg.value = 0.458935974393;

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
    msg.setTimeStamp(0.76736259369);
    msg.setSource(63184U);
    msg.setSourceEntity(50U);
    msg.setDestination(33210U);
    msg.setDestinationEntity(166U);
    msg.value = 0.612635811596;

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
    msg.setTimeStamp(0.00693064128652);
    msg.setSource(45771U);
    msg.setSourceEntity(227U);
    msg.setDestination(42004U);
    msg.setDestinationEntity(109U);
    msg.value = 0.937774876833;

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
    msg.setTimeStamp(0.227584105179);
    msg.setSource(10282U);
    msg.setSourceEntity(197U);
    msg.setDestination(25310U);
    msg.setDestinationEntity(245U);
    msg.value.assign("DWYBOXDWNXWBQCZNVNPOLUHMGSURVACTVTKYLRZUHSSHIFDNRGFVPQVOIOFWX");

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
    msg.setTimeStamp(0.101396427182);
    msg.setSource(41478U);
    msg.setSourceEntity(5U);
    msg.setDestination(4342U);
    msg.setDestinationEntity(204U);
    msg.value.assign("MDCJRDEAPARESMQHIPMLSAHGDKFYNOBHDCIJOJLUASGZXXVVFFNNXGRVTQYDDFVCPSJEBVNGCDRZWWBQQUJLNKZRZBTGLFSHIMWCRMUKNXBTUNDALOEUJPBPPXQURENLXVXMXOTWMZBSOOYLYCPFEGWMLBWACJB");

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
    msg.setTimeStamp(0.0626964789012);
    msg.setSource(16887U);
    msg.setSourceEntity(112U);
    msg.setDestination(3023U);
    msg.setDestinationEntity(182U);
    msg.value.assign("WWDIPBCZYGLWFZTCGIIKHNSTPMLPEJFFRBLKQMMCKBESEDNRWTXMAFLEJCVOUTETTYMTHARYXVXTNIUACNZKHQPYGVNEBPEHYNJRFFOLSJXJRCHHJBGWDMSRHVXMKIBFJLDMRUIQJGESKVZQXNCXK");

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
    msg.setTimeStamp(0.528333196093);
    msg.setSource(63406U);
    msg.setSourceEntity(41U);
    msg.setDestination(22462U);
    msg.setDestinationEntity(82U);
    const char tmp_msg_0[] = {116, -94, -19, 31, 39, 86, -122, -125, -53, -42, 35, 38, -94, 87, -123, -91, 70, -60, 84, -65, 113, -47, -73, -8, -8, -124, 28, -111, -50, -47, 31, 54, 112, 68, -43, -35, -3, -42, 70, 124, -30, 99, 98, -115, -76, -124, -87, 90, -28, -29, 91, -33, 36, 0, 115, 74, 109, -88, 95, 17, -32, 64, -120, 64, -57, 120, -50, 18, -11, 67, 23, 17, 96, -100, 126, -83, -21, 14, -127, -103, -109, -59, 36, -12, -79, 126, -94, 44, 70, 113, 115, -31, -106, 98, 104, -102, 6, 59, 54, -20, -127, 82, -74, 9, 54, 14, 114, 52, 19, 103, 86, -81, -111, 92, -105, -21, 23, -113, 13, 109, -18, 69, -3, -124, 117, -58, -104, 18, 90, 74, -59, -15, -15, 76, 119, 120, -106, 56, -81, 86, 20, -19, 35, 54, -75, 13, 121, -23, -19, -95, 122};
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
    msg.setTimeStamp(0.374903433831);
    msg.setSource(65378U);
    msg.setSourceEntity(3U);
    msg.setDestination(21842U);
    msg.setDestinationEntity(191U);
    const char tmp_msg_0[] = {18, 33, 15, 14, -65, -52, -67, -98, 98, -64, 59, -90, -32, -90, -28, 60, -79, 77, 13, -29, 48, 94, -121, 122, -22, -4, 66, 116, 89, -64, -116, -115, -48, -122, -58, -9, 55, 54, 9, -87, 41, -79, -106, -18, 79, -30, 102, 29, -48, 89, -31, -128, -88, 24, -111, -22, -51, -74, 88, 52, 25, 23, 72, -44, 17, 108, -92, -68, 33, 47, 57, -50, 50, 6, -123, 103, 98, 102, 54, 35, -58, 51, 6, -35, -61, -1, -89, 109, -35, -115, 65, 73, -24, 46, -79, 21, -11, -81, 0, -15, -69, 29, -52, -61, -72, 80, 45, -51, -6, -83, -71, -52, -125, 13, 87, 12, 102, -84, -25, 63, 120, -49, 109, 19, 27, -43, -42, -72, -53, -108, -69, -47, -117, -32, -104, -104, 61, -83, -121, -24, -115, -118, -85, -12, -92, -94, -71, 4, -31, 10, 104, -105, 101, -101, -119, -67, 27, -126, -95, 88, -18, 36, 78, 29, 68, -13, 86, -115, -22, 90, -85, -77, 121, -41, -95, -22, 17, -113, 118, -69, -55, -49, -119, -5, 67, -101, -61, 85, -30, -80, -50, 57, -63, 100, -18, 123, -104, 44, -99, -34, 38, 113, -110, -105, -10, 20, 52, 44, 49, 61, -116, 111, -64, -25, -61, 18};
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
    msg.setTimeStamp(0.63137596657);
    msg.setSource(29500U);
    msg.setSourceEntity(208U);
    msg.setDestination(18160U);
    msg.setDestinationEntity(237U);
    const char tmp_msg_0[] = {66, -54, -71, -102, 126, 1, -10, -30, -84, 91, 54, 105, -106, -119, -97, -115, 25, -15, 101, 96, -62, 86, 106, 27, 126, 60, -81, 98, 57, -85, 45, -18, -69, 26, -117, 124, -12, -2, 62, 109, 11, 103, 89, -105, 20, -123, -83, 118, -15, 124, -71, -74, 44, -37, 123, 18, 0, 30, 48, 20, -49, -122, 36, -99, -97, 48, -84, 102, -39, -65, -78, 1, -6, 43, -9, 113, 90, 67, -15, -21, 49, 115, -25, -26, 20, 46, 115, 62, 91, 55, 60, 46, -27, -120, -16, 102, 116, -2, -29, 100, -8, 112, -2, 97, 112, -74, -63, 81, 96, -116, 123, 46, 16, -110, -49, -77, -18, 54, 64, -57, -47, 81, -6, 24, -37, 30, -24, -25, 13, 19, -116, -100, 109, 98, 108, 60, 80, -38, -54, -9, -120, 124, 95, -88, 2, -90, -62, 43, -29, 73, -16, -37, -1, 110, 107, -38, 51, -30, -101, -104, 15, -58, 86, -106, -82, -97, 91, -127, 70, 2, -52, 80, -36, 54, -119, -4, -78, -126, -83, -68, 124, 5, -48, -1, -125, 62, -127, 67, 18, -24, -5, 101, -32, -64, -84, -4, -77, -86, 122, -44, -71, -21, -52, -73, -108, -26, -29, -62, 41, 26, 41, -61, 57, -26, 117, -100, 81, -91, 92, 112, -74, 69, -45, 13, -71, -3, 35, 30, -101, -8, -94, -109, 27, -113, -59, -5, -49, -31, -114, -87, -84, -108, 96, 13, -120, -74, 47, 106};
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
    msg.setTimeStamp(0.70159615757);
    msg.setSource(43816U);
    msg.setSourceEntity(116U);
    msg.setDestination(59856U);
    msg.setDestinationEntity(250U);
    msg.value = 0.782418062721;

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
    msg.setTimeStamp(0.530865113997);
    msg.setSource(11445U);
    msg.setSourceEntity(162U);
    msg.setDestination(54499U);
    msg.setDestinationEntity(169U);
    msg.value = 0.394361241237;

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
    msg.setTimeStamp(0.278701525215);
    msg.setSource(36272U);
    msg.setSourceEntity(74U);
    msg.setDestination(6611U);
    msg.setDestinationEntity(94U);
    msg.value = 0.909534254672;

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
    msg.setTimeStamp(0.591608986306);
    msg.setSource(14714U);
    msg.setSourceEntity(69U);
    msg.setDestination(1122U);
    msg.setDestinationEntity(232U);
    msg.type = 227U;
    msg.frequency = 3574035514U;
    msg.min_range = 52966U;
    msg.max_range = 56307U;
    msg.bits_per_point = 75U;
    msg.scale_factor = 0.245833965788;
    const char tmp_msg_0[] = {-98, -32, 75, -100, 89, 53, -104, 7, 19, 35, -95, 116, 112, 49, -47, 86, 22, 43, -10, 101, 126, 23, -107, -16, -109, -122, -96, -72, -34, -87};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.468439785609);
    msg.setSource(58505U);
    msg.setSourceEntity(68U);
    msg.setDestination(7241U);
    msg.setDestinationEntity(92U);
    msg.type = 239U;
    msg.frequency = 2504498555U;
    msg.min_range = 20632U;
    msg.max_range = 44436U;
    msg.bits_per_point = 242U;
    msg.scale_factor = 0.713541485151;
    const char tmp_msg_0[] = {-41, -6, -78, -104, -42, -28, -54, 75, 60, -116, -127, -55, -27, 78, -4, 9, 105, -5, 51, -95, -69, 30, 100, -5, -72, -122, -88, -77, -49, 18, 46, -22, 17, 40, 64, -99, -87, 93, -118, -63, -125, -65, -122, -85, 3, -69, 19, 73, -91, -11, 40, -28, 89, 53, 5, -74, -70, 51, 107, 117, 71, -101, -76, -63, -63, 116, 94, 36, -71, -61, -35, -88, -26, 126, 115, -10, 18, 16, -6, -125, 18, -2, 64};
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
    msg.setTimeStamp(0.310898969626);
    msg.setSource(38197U);
    msg.setSourceEntity(149U);
    msg.setDestination(31818U);
    msg.setDestinationEntity(150U);
    msg.type = 125U;
    msg.frequency = 497907993U;
    msg.min_range = 46881U;
    msg.max_range = 8225U;
    msg.bits_per_point = 86U;
    msg.scale_factor = 0.207671773066;
    const char tmp_msg_0[] = {124, 27, -32, 89, 119, 51, 65, 20, -2, 76, -90, 96, 56, -124, -31, -97, 9, 79, -37, -50, -109, 120, 110, -64, 63, -127, -7, -117, -124, -124, -26, -82, -93, -104, 61, 64, -5, -94, -64, 109};
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
    msg.setTimeStamp(0.117634062374);
    msg.setSource(48283U);
    msg.setSourceEntity(168U);
    msg.setDestination(7111U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.153406979883);
    msg.setSource(61560U);
    msg.setSourceEntity(82U);
    msg.setDestination(24371U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.0494540182585);
    msg.setSource(44298U);
    msg.setSourceEntity(82U);
    msg.setDestination(22296U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.377696787713);
    msg.setSource(53065U);
    msg.setSourceEntity(234U);
    msg.setDestination(44925U);
    msg.setDestinationEntity(181U);
    msg.op = 13U;

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
    msg.setTimeStamp(0.0608317775671);
    msg.setSource(8994U);
    msg.setSourceEntity(224U);
    msg.setDestination(62037U);
    msg.setDestinationEntity(142U);
    msg.op = 30U;

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
    msg.setTimeStamp(0.122028064403);
    msg.setSource(25962U);
    msg.setSourceEntity(248U);
    msg.setDestination(34579U);
    msg.setDestinationEntity(125U);
    msg.op = 235U;

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
    msg.setTimeStamp(0.766880547433);
    msg.setSource(47509U);
    msg.setSourceEntity(135U);
    msg.setDestination(29716U);
    msg.setDestinationEntity(12U);
    msg.value = 0.840517139768;
    msg.confidence = 0.882606501906;
    msg.opmodes.assign("CQKXXCMEULBQQAZLZYBKNMLTQKSTXCVSJIHKYMCWADRJMCJGRSTMXDZZYIAHHNWPLGIHK");

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
    msg.setTimeStamp(0.504148003259);
    msg.setSource(22605U);
    msg.setSourceEntity(200U);
    msg.setDestination(17860U);
    msg.setDestinationEntity(162U);
    msg.value = 0.647860618521;
    msg.confidence = 0.406648322334;
    msg.opmodes.assign("JGXUCXSAOHXTEJRTKLHWLYFWCXZIZPUACOEEZJMFXNCTHDUOZENQMSDVCNFFPJCCIBSSUEHBIQYWHIGPUNPVZDEFNVYBMLDZSJJVLWIGQLJCUOAMCYRNXRXCMZAAPSKPGXDBTQWHJKBOSMFUTZYIDPOAQNGPTLUWWBRYQDNNAGVGUMSREQLKHWZQNMOVOYBHIKAMTHFPKPRVOXBDXKAIYKTDEKLVYIUYDJTEZBFMVRFQTOIKSWGELSGHARLGJV");

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
    msg.setTimeStamp(0.276444173668);
    msg.setSource(45737U);
    msg.setSourceEntity(236U);
    msg.setDestination(37841U);
    msg.setDestinationEntity(191U);
    msg.value = 0.430621049464;
    msg.confidence = 0.190331319976;
    msg.opmodes.assign("CMSAZKRXITVGFTRIUMAVTTGIDL");

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
    msg.setTimeStamp(0.376931207734);
    msg.setSource(43382U);
    msg.setSourceEntity(165U);
    msg.setDestination(39074U);
    msg.setDestinationEntity(185U);
    msg.itow = 1735388602U;
    msg.lat = 0.4174125387;
    msg.lon = 0.724140987985;
    msg.height_ell = 0.0111953853753;
    msg.height_sea = 0.603209331193;
    msg.hacc = 0.130320207893;
    msg.vacc = 0.392376626916;
    msg.vel_n = 0.889942945559;
    msg.vel_e = 0.882554068201;
    msg.vel_d = 0.982137496821;
    msg.speed = 0.300498602343;
    msg.gspeed = 0.761788173859;
    msg.heading = 0.422435739967;
    msg.sacc = 0.495784094668;
    msg.cacc = 0.21902643929;

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
    msg.setTimeStamp(0.00508548732767);
    msg.setSource(21410U);
    msg.setSourceEntity(203U);
    msg.setDestination(54452U);
    msg.setDestinationEntity(237U);
    msg.itow = 209314870U;
    msg.lat = 0.566003477979;
    msg.lon = 0.0192650202182;
    msg.height_ell = 0.953127372477;
    msg.height_sea = 0.963578617525;
    msg.hacc = 0.188320837994;
    msg.vacc = 0.777021962551;
    msg.vel_n = 0.818779447897;
    msg.vel_e = 0.825487316436;
    msg.vel_d = 0.535286107873;
    msg.speed = 0.186520568447;
    msg.gspeed = 0.911375026377;
    msg.heading = 0.560913893842;
    msg.sacc = 0.184694100574;
    msg.cacc = 0.218069332034;

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
    msg.setTimeStamp(0.491998740334);
    msg.setSource(56795U);
    msg.setSourceEntity(254U);
    msg.setDestination(192U);
    msg.setDestinationEntity(51U);
    msg.itow = 4067498258U;
    msg.lat = 0.87434686448;
    msg.lon = 0.804157794627;
    msg.height_ell = 0.458514903742;
    msg.height_sea = 0.356473405076;
    msg.hacc = 0.946599793032;
    msg.vacc = 0.50866316139;
    msg.vel_n = 0.10456242611;
    msg.vel_e = 0.988995882491;
    msg.vel_d = 0.25878061844;
    msg.speed = 0.0247589741825;
    msg.gspeed = 0.728421285337;
    msg.heading = 0.432985833343;
    msg.sacc = 0.15364191597;
    msg.cacc = 0.290031301223;

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
    msg.setTimeStamp(0.379790650725);
    msg.setSource(50547U);
    msg.setSourceEntity(99U);
    msg.setDestination(29048U);
    msg.setDestinationEntity(129U);
    msg.id = 136U;
    msg.value = 0.826001928492;

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
    msg.setTimeStamp(0.293833838355);
    msg.setSource(50394U);
    msg.setSourceEntity(191U);
    msg.setDestination(47579U);
    msg.setDestinationEntity(237U);
    msg.id = 1U;
    msg.value = 0.601433060119;

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
    msg.setTimeStamp(0.229830437839);
    msg.setSource(49428U);
    msg.setSourceEntity(168U);
    msg.setDestination(3357U);
    msg.setDestinationEntity(173U);
    msg.id = 68U;
    msg.value = 0.603645283214;

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
    msg.setTimeStamp(0.188512987162);
    msg.setSource(39741U);
    msg.setSourceEntity(108U);
    msg.setDestination(9059U);
    msg.setDestinationEntity(246U);
    msg.x = 0.363173415367;
    msg.y = 0.840975735571;
    msg.z = 0.301641276451;
    msg.phi = 0.2973503805;
    msg.theta = 0.953094722584;
    msg.psi = 0.21702073686;

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
    msg.setTimeStamp(0.11807830039);
    msg.setSource(56752U);
    msg.setSourceEntity(172U);
    msg.setDestination(34654U);
    msg.setDestinationEntity(128U);
    msg.x = 0.956111655931;
    msg.y = 0.642897946708;
    msg.z = 0.525824777284;
    msg.phi = 0.864508076167;
    msg.theta = 0.790744686958;
    msg.psi = 0.666137250582;

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
    msg.setTimeStamp(0.0249273978357);
    msg.setSource(52969U);
    msg.setSourceEntity(83U);
    msg.setDestination(6134U);
    msg.setDestinationEntity(145U);
    msg.x = 0.549660809428;
    msg.y = 0.25309413986;
    msg.z = 0.678254699316;
    msg.phi = 0.901096831739;
    msg.theta = 0.404453487883;
    msg.psi = 0.593946772665;

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
    msg.setTimeStamp(0.494985064535);
    msg.setSource(18383U);
    msg.setSourceEntity(205U);
    msg.setDestination(28843U);
    msg.setDestinationEntity(138U);
    msg.beam_width = 0.627180786886;
    msg.beam_height = 0.153941551553;

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
    msg.setTimeStamp(0.89790316274);
    msg.setSource(63515U);
    msg.setSourceEntity(222U);
    msg.setDestination(27137U);
    msg.setDestinationEntity(90U);
    msg.beam_width = 0.837345862391;
    msg.beam_height = 0.784521727442;

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
    msg.setTimeStamp(0.499604599736);
    msg.setSource(34681U);
    msg.setSourceEntity(52U);
    msg.setDestination(24692U);
    msg.setDestinationEntity(100U);
    msg.beam_width = 0.17245924252;
    msg.beam_height = 0.489973557375;

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
    msg.setTimeStamp(0.649512392107);
    msg.setSource(3657U);
    msg.setSourceEntity(104U);
    msg.setDestination(51568U);
    msg.setDestinationEntity(92U);
    msg.sane = 45U;

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
    msg.setTimeStamp(0.76884728832);
    msg.setSource(10219U);
    msg.setSourceEntity(104U);
    msg.setDestination(51915U);
    msg.setDestinationEntity(162U);
    msg.sane = 103U;

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
    msg.setTimeStamp(0.0729416822288);
    msg.setSource(32613U);
    msg.setSourceEntity(163U);
    msg.setDestination(4764U);
    msg.setDestinationEntity(136U);
    msg.sane = 160U;

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
    msg.setTimeStamp(0.471214303954);
    msg.setSource(27574U);
    msg.setSourceEntity(156U);
    msg.setDestination(2564U);
    msg.setDestinationEntity(193U);
    msg.value = 0.52851104625;

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
    msg.setTimeStamp(0.692785575258);
    msg.setSource(26514U);
    msg.setSourceEntity(124U);
    msg.setDestination(46789U);
    msg.setDestinationEntity(44U);
    msg.value = 0.433653888637;

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
    msg.setTimeStamp(0.806478697446);
    msg.setSource(54232U);
    msg.setSourceEntity(101U);
    msg.setDestination(22444U);
    msg.setDestinationEntity(210U);
    msg.value = 0.212184687912;

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
    msg.setTimeStamp(0.619203444228);
    msg.setSource(36211U);
    msg.setSourceEntity(188U);
    msg.setDestination(23436U);
    msg.setDestinationEntity(134U);
    msg.value = 0.611424432765;

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
    msg.setTimeStamp(0.39033875231);
    msg.setSource(13238U);
    msg.setSourceEntity(7U);
    msg.setDestination(18626U);
    msg.setDestinationEntity(201U);
    msg.value = 0.67039696118;

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
    msg.setTimeStamp(0.214763037126);
    msg.setSource(1335U);
    msg.setSourceEntity(206U);
    msg.setDestination(59165U);
    msg.setDestinationEntity(187U);
    msg.value = 0.959545983082;

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
    msg.setTimeStamp(0.838757341451);
    msg.setSource(21998U);
    msg.setSourceEntity(146U);
    msg.setDestination(2491U);
    msg.setDestinationEntity(232U);
    msg.value = 0.589988605787;

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
    msg.setTimeStamp(0.086380573667);
    msg.setSource(15201U);
    msg.setSourceEntity(30U);
    msg.setDestination(42769U);
    msg.setDestinationEntity(211U);
    msg.value = 0.440810747314;

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
    msg.setTimeStamp(0.778235010951);
    msg.setSource(29179U);
    msg.setSourceEntity(57U);
    msg.setDestination(58997U);
    msg.setDestinationEntity(116U);
    msg.value = 0.447924057726;

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
    msg.setTimeStamp(0.172065227612);
    msg.setSource(35840U);
    msg.setSourceEntity(50U);
    msg.setDestination(9376U);
    msg.setDestinationEntity(216U);
    msg.value = 0.674496191892;

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
    msg.setTimeStamp(0.811717831889);
    msg.setSource(40515U);
    msg.setSourceEntity(166U);
    msg.setDestination(1227U);
    msg.setDestinationEntity(68U);
    msg.value = 0.158085349811;

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
    msg.setTimeStamp(0.995354791484);
    msg.setSource(10545U);
    msg.setSourceEntity(228U);
    msg.setDestination(23848U);
    msg.setDestinationEntity(15U);
    msg.value = 0.613820258424;

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
    msg.setTimeStamp(0.0355639381453);
    msg.setSource(17729U);
    msg.setSourceEntity(77U);
    msg.setDestination(33051U);
    msg.setDestinationEntity(2U);
    msg.value = 0.655252835702;

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
    msg.setTimeStamp(0.868701737541);
    msg.setSource(54588U);
    msg.setSourceEntity(183U);
    msg.setDestination(1574U);
    msg.setDestinationEntity(88U);
    msg.value = 0.231437759395;

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
    msg.setTimeStamp(0.330877963412);
    msg.setSource(24515U);
    msg.setSourceEntity(17U);
    msg.setDestination(14944U);
    msg.setDestinationEntity(188U);
    msg.value = 0.185166829606;

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
    msg.setTimeStamp(0.628142285346);
    msg.setSource(9502U);
    msg.setSourceEntity(20U);
    msg.setDestination(36096U);
    msg.setDestinationEntity(25U);
    msg.value = 0.079574760906;

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
    msg.setTimeStamp(0.763902530404);
    msg.setSource(10346U);
    msg.setSourceEntity(156U);
    msg.setDestination(29888U);
    msg.setDestinationEntity(220U);
    msg.value = 0.787552894949;

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
    msg.setTimeStamp(0.745512377794);
    msg.setSource(22360U);
    msg.setSourceEntity(25U);
    msg.setDestination(21331U);
    msg.setDestinationEntity(78U);
    msg.value = 0.890664224024;

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
    msg.setTimeStamp(0.571053341539);
    msg.setSource(65421U);
    msg.setSourceEntity(251U);
    msg.setDestination(6204U);
    msg.setDestinationEntity(223U);
    msg.value = 0.929796517136;

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
    msg.setTimeStamp(0.785260165726);
    msg.setSource(48212U);
    msg.setSourceEntity(57U);
    msg.setDestination(47132U);
    msg.setDestinationEntity(127U);
    msg.value = 0.89826194911;

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
    msg.setTimeStamp(0.386937598566);
    msg.setSource(64555U);
    msg.setSourceEntity(203U);
    msg.setDestination(47213U);
    msg.setDestinationEntity(57U);
    msg.value = 0.902880393368;

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
    msg.setTimeStamp(0.947277043107);
    msg.setSource(9857U);
    msg.setSourceEntity(129U);
    msg.setDestination(28588U);
    msg.setDestinationEntity(210U);
    msg.value = 0.486287065888;

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
    msg.setTimeStamp(0.627916161505);
    msg.setSource(15973U);
    msg.setSourceEntity(33U);
    msg.setDestination(25404U);
    msg.setDestinationEntity(138U);
    msg.value = 0.260710735037;

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
    msg.setTimeStamp(0.652701709809);
    msg.setSource(2778U);
    msg.setSourceEntity(211U);
    msg.setDestination(34397U);
    msg.setDestinationEntity(155U);
    msg.value = 0.365261865786;

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
    msg.setTimeStamp(0.820797384439);
    msg.setSource(14624U);
    msg.setSourceEntity(208U);
    msg.setDestination(47433U);
    msg.setDestinationEntity(32U);
    msg.validity = 30788U;
    msg.type = 138U;
    msg.tow = 3329631638U;
    msg.base_lat = 0.865047247195;
    msg.base_lon = 0.345466658004;
    msg.base_height = 0.0790146050599;
    msg.n = 0.283728538674;
    msg.e = 0.192563946659;
    msg.d = 0.738828618805;
    msg.v_n = 0.316028237001;
    msg.v_e = 0.440641340886;
    msg.v_d = 0.213040880774;
    msg.satellites = 199U;
    msg.iar_hyp = 21809U;
    msg.iar_ratio = 0.970145681535;

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
    msg.setTimeStamp(0.199382008206);
    msg.setSource(3865U);
    msg.setSourceEntity(199U);
    msg.setDestination(32155U);
    msg.setDestinationEntity(86U);
    msg.validity = 22715U;
    msg.type = 156U;
    msg.tow = 1387249359U;
    msg.base_lat = 0.921489066244;
    msg.base_lon = 0.942242488172;
    msg.base_height = 0.578324030939;
    msg.n = 0.126805764027;
    msg.e = 0.218918487839;
    msg.d = 0.746437787248;
    msg.v_n = 0.324887238909;
    msg.v_e = 0.922146087851;
    msg.v_d = 0.610764785728;
    msg.satellites = 9U;
    msg.iar_hyp = 51816U;
    msg.iar_ratio = 0.681585333515;

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
    msg.setTimeStamp(0.816924442423);
    msg.setSource(46756U);
    msg.setSourceEntity(35U);
    msg.setDestination(34829U);
    msg.setDestinationEntity(45U);
    msg.validity = 28867U;
    msg.type = 132U;
    msg.tow = 4138981099U;
    msg.base_lat = 0.35935550164;
    msg.base_lon = 0.447935681745;
    msg.base_height = 0.75246045537;
    msg.n = 0.363559667892;
    msg.e = 0.404817522592;
    msg.d = 0.450106373389;
    msg.v_n = 0.746001729358;
    msg.v_e = 0.147295080042;
    msg.v_d = 0.508923394455;
    msg.satellites = 149U;
    msg.iar_hyp = 45331U;
    msg.iar_ratio = 0.212695574746;

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
    msg.setTimeStamp(0.249805686225);
    msg.setSource(23482U);
    msg.setSourceEntity(81U);
    msg.setDestination(1417U);
    msg.setDestinationEntity(207U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.180659940984;
    tmp_msg_0.lon = 0.149183972644;
    tmp_msg_0.height = 0.365090016862;
    tmp_msg_0.x = 0.517892699209;
    tmp_msg_0.y = 0.798525855621;
    tmp_msg_0.z = 0.958422955167;
    tmp_msg_0.phi = 0.783744648942;
    tmp_msg_0.theta = 0.0732613164882;
    tmp_msg_0.psi = 0.767418270582;
    tmp_msg_0.u = 0.619197498601;
    tmp_msg_0.v = 0.763808242494;
    tmp_msg_0.w = 0.342820489115;
    tmp_msg_0.vx = 0.146036843291;
    tmp_msg_0.vy = 0.0595408509635;
    tmp_msg_0.vz = 0.600984563876;
    tmp_msg_0.p = 0.918999951839;
    tmp_msg_0.q = 0.986321812456;
    tmp_msg_0.r = 0.886980128606;
    tmp_msg_0.depth = 0.300505141667;
    tmp_msg_0.alt = 0.994980681715;
    msg.state.set(tmp_msg_0);
    msg.type = 45U;

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
    msg.setTimeStamp(0.651949681868);
    msg.setSource(31169U);
    msg.setSourceEntity(18U);
    msg.setDestination(48723U);
    msg.setDestinationEntity(142U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.462922596294;
    tmp_msg_0.lon = 0.51466215231;
    tmp_msg_0.height = 0.464167291486;
    tmp_msg_0.x = 0.243053635738;
    tmp_msg_0.y = 0.485078522482;
    tmp_msg_0.z = 0.743769031855;
    tmp_msg_0.phi = 0.601552329747;
    tmp_msg_0.theta = 0.301211492219;
    tmp_msg_0.psi = 0.635520118649;
    tmp_msg_0.u = 0.613137077325;
    tmp_msg_0.v = 0.449181149689;
    tmp_msg_0.w = 0.820531738184;
    tmp_msg_0.vx = 0.455895903578;
    tmp_msg_0.vy = 0.750441342522;
    tmp_msg_0.vz = 0.850832577519;
    tmp_msg_0.p = 0.0212903399918;
    tmp_msg_0.q = 0.778402325069;
    tmp_msg_0.r = 0.334628269133;
    tmp_msg_0.depth = 0.586567630509;
    tmp_msg_0.alt = 0.559235661961;
    msg.state.set(tmp_msg_0);
    msg.type = 133U;

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
    msg.setTimeStamp(0.140743326895);
    msg.setSource(37892U);
    msg.setSourceEntity(202U);
    msg.setDestination(6079U);
    msg.setDestinationEntity(101U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.797405821262;
    tmp_msg_0.lon = 0.564573981564;
    tmp_msg_0.height = 0.75952400492;
    tmp_msg_0.x = 0.0853069542703;
    tmp_msg_0.y = 0.87106949864;
    tmp_msg_0.z = 0.779543376786;
    tmp_msg_0.phi = 0.836167109488;
    tmp_msg_0.theta = 0.114547570406;
    tmp_msg_0.psi = 0.102854058247;
    tmp_msg_0.u = 0.875529593839;
    tmp_msg_0.v = 0.12672751991;
    tmp_msg_0.w = 0.787401963853;
    tmp_msg_0.vx = 0.68736090025;
    tmp_msg_0.vy = 0.208491174645;
    tmp_msg_0.vz = 0.265993733426;
    tmp_msg_0.p = 0.68650120687;
    tmp_msg_0.q = 0.763864438859;
    tmp_msg_0.r = 0.144442462138;
    tmp_msg_0.depth = 0.189715367942;
    tmp_msg_0.alt = 0.769893264818;
    msg.state.set(tmp_msg_0);
    msg.type = 186U;

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
    msg.setTimeStamp(0.777217980681);
    msg.setSource(59561U);
    msg.setSourceEntity(34U);
    msg.setDestination(20084U);
    msg.setDestinationEntity(105U);
    msg.value = 0.933803399581;

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
    msg.setTimeStamp(0.446088088954);
    msg.setSource(38522U);
    msg.setSourceEntity(163U);
    msg.setDestination(43858U);
    msg.setDestinationEntity(153U);
    msg.value = 0.99144254696;

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
    msg.setTimeStamp(0.0449866030722);
    msg.setSource(56855U);
    msg.setSourceEntity(253U);
    msg.setDestination(37111U);
    msg.setDestinationEntity(145U);
    msg.value = 0.497343215957;

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
    msg.setTimeStamp(0.834520256372);
    msg.setSource(48676U);
    msg.setSourceEntity(246U);
    msg.setDestination(65382U);
    msg.setDestinationEntity(63U);
    msg.value = 0.915219175923;

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
    msg.setTimeStamp(0.0192222533747);
    msg.setSource(14359U);
    msg.setSourceEntity(126U);
    msg.setDestination(62246U);
    msg.setDestinationEntity(235U);
    msg.value = 0.836046861334;

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
    msg.setTimeStamp(0.477333113979);
    msg.setSource(32449U);
    msg.setSourceEntity(27U);
    msg.setDestination(3919U);
    msg.setDestinationEntity(41U);
    msg.value = 0.640177515235;

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
    msg.setTimeStamp(0.741159296016);
    msg.setSource(30475U);
    msg.setSourceEntity(233U);
    msg.setDestination(63688U);
    msg.setDestinationEntity(61U);
    msg.value = 0.744877845711;

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
    msg.setTimeStamp(0.431517807583);
    msg.setSource(51037U);
    msg.setSourceEntity(242U);
    msg.setDestination(10980U);
    msg.setDestinationEntity(151U);
    msg.value = 0.635390614716;

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
    msg.setTimeStamp(0.036392867049);
    msg.setSource(13608U);
    msg.setSourceEntity(253U);
    msg.setDestination(1434U);
    msg.setDestinationEntity(0U);
    msg.value = 0.350518629222;

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
    msg.setTimeStamp(0.907939247456);
    msg.setSource(9230U);
    msg.setSourceEntity(108U);
    msg.setDestination(64728U);
    msg.setDestinationEntity(242U);
    msg.value = 0.0155597963317;

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
    msg.setTimeStamp(0.326662464558);
    msg.setSource(14780U);
    msg.setSourceEntity(147U);
    msg.setDestination(61334U);
    msg.setDestinationEntity(114U);
    msg.value = 0.344347777477;

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
    msg.setTimeStamp(0.0724295569975);
    msg.setSource(12016U);
    msg.setSourceEntity(248U);
    msg.setDestination(13090U);
    msg.setDestinationEntity(24U);
    msg.value = 0.960969365365;

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
    msg.setTimeStamp(0.389559063534);
    msg.setSource(35934U);
    msg.setSourceEntity(43U);
    msg.setDestination(48832U);
    msg.setDestinationEntity(110U);
    msg.value = 0.992815510341;

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
    msg.setTimeStamp(0.0773067332206);
    msg.setSource(19254U);
    msg.setSourceEntity(45U);
    msg.setDestination(5902U);
    msg.setDestinationEntity(8U);
    msg.value = 0.933858851176;

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
    msg.setTimeStamp(0.281178919795);
    msg.setSource(2648U);
    msg.setSourceEntity(41U);
    msg.setDestination(55521U);
    msg.setDestinationEntity(32U);
    msg.value = 0.804619175785;

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
    msg.setTimeStamp(0.96334897621);
    msg.setSource(23233U);
    msg.setSourceEntity(108U);
    msg.setDestination(46820U);
    msg.setDestinationEntity(104U);
    msg.id = 22U;
    msg.zoom = 49U;
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
    msg.setTimeStamp(0.502247064135);
    msg.setSource(49032U);
    msg.setSourceEntity(107U);
    msg.setDestination(11408U);
    msg.setDestinationEntity(178U);
    msg.id = 178U;
    msg.zoom = 150U;
    msg.action = 133U;

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
    msg.setTimeStamp(0.488939397736);
    msg.setSource(35204U);
    msg.setSourceEntity(248U);
    msg.setDestination(6086U);
    msg.setDestinationEntity(239U);
    msg.id = 165U;
    msg.zoom = 126U;
    msg.action = 224U;

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
    msg.setTimeStamp(0.129366499255);
    msg.setSource(8977U);
    msg.setSourceEntity(155U);
    msg.setDestination(13919U);
    msg.setDestinationEntity(113U);
    msg.id = 155U;
    msg.value = 0.917068149301;

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
    msg.setTimeStamp(0.702084237487);
    msg.setSource(12429U);
    msg.setSourceEntity(8U);
    msg.setDestination(29992U);
    msg.setDestinationEntity(208U);
    msg.id = 158U;
    msg.value = 0.764541337309;

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
    msg.setTimeStamp(0.282294949671);
    msg.setSource(7720U);
    msg.setSourceEntity(99U);
    msg.setDestination(47739U);
    msg.setDestinationEntity(213U);
    msg.id = 16U;
    msg.value = 0.330821160167;

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
    msg.setTimeStamp(0.998929247596);
    msg.setSource(22570U);
    msg.setSourceEntity(245U);
    msg.setDestination(32910U);
    msg.setDestinationEntity(252U);
    msg.id = 251U;
    msg.value = 0.379999867721;

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
    msg.setTimeStamp(0.744252613022);
    msg.setSource(65032U);
    msg.setSourceEntity(134U);
    msg.setDestination(93U);
    msg.setDestinationEntity(64U);
    msg.id = 18U;
    msg.value = 0.809596806014;

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
    msg.setTimeStamp(0.24834776976);
    msg.setSource(50869U);
    msg.setSourceEntity(149U);
    msg.setDestination(34039U);
    msg.setDestinationEntity(165U);
    msg.id = 65U;
    msg.value = 0.968893715463;

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
    msg.setTimeStamp(0.446424276332);
    msg.setSource(59021U);
    msg.setSourceEntity(188U);
    msg.setDestination(24807U);
    msg.setDestinationEntity(80U);
    msg.id = 76U;
    msg.angle = 0.763363355238;

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
    msg.setTimeStamp(0.628727958648);
    msg.setSource(33048U);
    msg.setSourceEntity(88U);
    msg.setDestination(33075U);
    msg.setDestinationEntity(187U);
    msg.id = 133U;
    msg.angle = 0.71259501672;

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
    msg.setTimeStamp(0.52984027011);
    msg.setSource(45251U);
    msg.setSourceEntity(114U);
    msg.setDestination(7063U);
    msg.setDestinationEntity(136U);
    msg.id = 105U;
    msg.angle = 0.0422765213593;

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
    msg.setTimeStamp(0.116426507128);
    msg.setSource(61364U);
    msg.setSourceEntity(50U);
    msg.setDestination(6276U);
    msg.setDestinationEntity(92U);
    msg.op = 78U;
    msg.actions.assign("PBALLPGZXBHONVHVCKZKXQZOWCUVHDTWSDVWOPVMWNQLDWBHYQMKTDQAPPACOXGF");

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
    msg.setTimeStamp(0.553550337895);
    msg.setSource(22906U);
    msg.setSourceEntity(114U);
    msg.setDestination(13484U);
    msg.setDestinationEntity(76U);
    msg.op = 89U;
    msg.actions.assign("SFJIWAISWAERLGGQVHQWMCOKYHVPWAGZTCRETVVGWMXQYEMVQRPVVZWKXEAUBCNJSQKMEKFCGDRUJTXLOBXKORZFDADJJYHMBDCBRNZYYPKKLNVYLRNQSILICCFUNXSHSWHZOVNMPLQFINUTCUIXJBIOGWUZAMUDAEMFSKDIBJFOOTAYHOXQTGBFLANHGELPJGSDXIUYFQURZDKZRQWOPKW");

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
    msg.setTimeStamp(0.976459499704);
    msg.setSource(48588U);
    msg.setSourceEntity(5U);
    msg.setDestination(38821U);
    msg.setDestinationEntity(224U);
    msg.op = 50U;
    msg.actions.assign("BOXQKTUQHJUSAFAJYMPTSGWXJNKG");

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
    msg.setTimeStamp(0.503642262262);
    msg.setSource(41615U);
    msg.setSourceEntity(204U);
    msg.setDestination(36891U);
    msg.setDestinationEntity(177U);
    msg.actions.assign("WDAJUUDMASAVKIROGYLOWVLAMIQUVQISNKOIQHETOZKXQAGPFIPWMUXYDBFZHKHZFFYRBEXNMPXGYNPCMWRQHUSPKTWYDZXSWEASLSJTHLEBUPMZNCBCSTRJIRHVVDXEHCLBISWYZGKCZUJFIWFJOBDQGTJTRYVHGJTMCBOYHGKNLXRSMLPELPMHPCVWB");

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
    msg.setTimeStamp(0.290536901958);
    msg.setSource(51379U);
    msg.setSourceEntity(238U);
    msg.setDestination(6649U);
    msg.setDestinationEntity(104U);
    msg.actions.assign("NNZATNQNDFHVUBMEOTXMOUCGKRGRCEWQFSOKSNQYPZUBEGREAROAZTVHCGKXZSPIDDLXJBXKFIFPDTELVVJIPDNBSNT");

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
    msg.setTimeStamp(0.106594368155);
    msg.setSource(60123U);
    msg.setSourceEntity(75U);
    msg.setDestination(46599U);
    msg.setDestinationEntity(238U);
    msg.actions.assign("SIUAYZMJAPTFIUSHLPYKYDFLMYUIAVABUZTCEEBWNLNMRODSGEOIRHSHBCPWGECVNFIQTTYAZYJGPPBHVKHPTFBHNEEYRASUJGXDDYWBCTNXXCJDWIZLGDMGFQOWFVLMMZTHCWPWCQRKDWBXXFLREZCXOQOENWRQZKIALYGGRKATDFDEYRVBRJUXTLQXVSPOQSHNJKBOKOJZZUVVGJAQHIVDXHOJMSLQKXPGMIKRFUBTJOEAVZSWNUNLMUMP");

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
    msg.setTimeStamp(0.124888843807);
    msg.setSource(38142U);
    msg.setSourceEntity(159U);
    msg.setDestination(9859U);
    msg.setDestinationEntity(69U);
    msg.button = 119U;
    msg.value = 6U;

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
    msg.setTimeStamp(0.360888915206);
    msg.setSource(43946U);
    msg.setSourceEntity(195U);
    msg.setDestination(31857U);
    msg.setDestinationEntity(211U);
    msg.button = 165U;
    msg.value = 58U;

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
    msg.setTimeStamp(0.831346886465);
    msg.setSource(10471U);
    msg.setSourceEntity(7U);
    msg.setDestination(47899U);
    msg.setDestinationEntity(126U);
    msg.button = 105U;
    msg.value = 23U;

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
    msg.setTimeStamp(0.527566606044);
    msg.setSource(43795U);
    msg.setSourceEntity(251U);
    msg.setDestination(26062U);
    msg.setDestinationEntity(199U);
    msg.op = 37U;
    msg.text.assign("PFRGENLPZFHGJFKUZLPURZXYSGZCQVPJAHPEVTIHBYVJIQRRMTEOXZOKMOLSAWJPMBFPAIHKINEZLLVXHSWGYICCUXUBCJYCPJOTDYTATWRCNKQWXJNRNTKBEGFDXFAKCHQOIIOBVZRAAHITNCIMVOSUHKBVHFJJSWOZGSNXXDUDPEMWN");

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
    msg.setTimeStamp(0.453132939363);
    msg.setSource(32785U);
    msg.setSourceEntity(116U);
    msg.setDestination(985U);
    msg.setDestinationEntity(72U);
    msg.op = 71U;
    msg.text.assign("FSJUYAIHDCONCWOHZOZKDXBWECLXUKGTGRYZNSEGEZZBLNWCNUSLMSPPXTHYKJDYFMEPUTQJBXIGNIIMQA");

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
    msg.setTimeStamp(0.319936892731);
    msg.setSource(58175U);
    msg.setSourceEntity(13U);
    msg.setDestination(46322U);
    msg.setDestinationEntity(132U);
    msg.op = 185U;
    msg.text.assign("BHFOZJIKCLCHINHYVAZVLDGXDHJDCLEADJFQLEXFYCPNMGNZYCPEQVRJXTHKJNXLUUJSCSRNWKWFHWR");

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
    msg.setTimeStamp(0.342288731107);
    msg.setSource(16732U);
    msg.setSourceEntity(84U);
    msg.setDestination(6458U);
    msg.setDestinationEntity(50U);
    msg.op = 198U;
    msg.time_remain = 0.0851563683209;
    msg.sched_time = 0.959689340357;

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
    msg.setTimeStamp(0.262435393416);
    msg.setSource(33296U);
    msg.setSourceEntity(12U);
    msg.setDestination(42827U);
    msg.setDestinationEntity(210U);
    msg.op = 102U;
    msg.time_remain = 0.96107709758;
    msg.sched_time = 0.00916995830256;

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
    msg.setTimeStamp(0.765977037577);
    msg.setSource(29525U);
    msg.setSourceEntity(73U);
    msg.setDestination(35342U);
    msg.setDestinationEntity(208U);
    msg.op = 33U;
    msg.time_remain = 0.913224760324;
    msg.sched_time = 0.812814154478;

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
    msg.setTimeStamp(0.578485116338);
    msg.setSource(48998U);
    msg.setSourceEntity(247U);
    msg.setDestination(8665U);
    msg.setDestinationEntity(235U);
    msg.name.assign("SNMUOSOZDFOAMRKQMIPMLAFTXZASCJFJRCETSKCAVMHKYWIQHRRVUGRCBELFVHPMHSPWKHWSXMVDUZBFAXMYOZGUZYYHUQEGTBQGGPNELELEJWURVFEXIRNKIIKADFOXDAQNBHYIGPBRJIVOPLCUKFGBXIDEVVWULJHQQWTBTDCFXCXXCKMZVJPVOTYTGDTF");
    msg.op = 60U;
    msg.sched_time = 0.0571142122485;

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
    msg.setTimeStamp(0.927213563295);
    msg.setSource(47883U);
    msg.setSourceEntity(114U);
    msg.setDestination(33914U);
    msg.setDestinationEntity(150U);
    msg.name.assign("HLGTNKLKENVNJYEQJQPJCJJIQPXIJEDOOMDBANPYGSHCGKAZNXBOWGIUGNIVMFZ");
    msg.op = 25U;
    msg.sched_time = 0.427661044564;

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
    msg.setTimeStamp(0.680414238288);
    msg.setSource(18165U);
    msg.setSourceEntity(197U);
    msg.setDestination(9762U);
    msg.setDestinationEntity(48U);
    msg.name.assign("ISPJYKUIJBXNGFLIPJNHCBEZIYDFKGMPNHVCKXOABWBCGMEZKTUTDCMMKUZROALIPHEKKQGFSDLURCTCEQHXQEYRHTOMWGWLYFWDHOQFLURSWXRQNIMABNBFVAGCKVCQSHNSWTPDRVZHZXMYGVRPWJBXRQJAJYSKOZD");
    msg.op = 248U;
    msg.sched_time = 0.985232352055;

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
    msg.setTimeStamp(0.0487561027395);
    msg.setSource(2714U);
    msg.setSourceEntity(71U);
    msg.setDestination(27022U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.230897016714);
    msg.setSource(16471U);
    msg.setSourceEntity(213U);
    msg.setDestination(58380U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.128091672211);
    msg.setSource(24337U);
    msg.setSourceEntity(170U);
    msg.setDestination(28727U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.99896429465);
    msg.setSource(11387U);
    msg.setSourceEntity(66U);
    msg.setDestination(39272U);
    msg.setDestinationEntity(129U);
    msg.name.assign("MHWRUTGNZZLDARXTYSCHQSFAGUDTBDAYFRKUYCDIHVXANIIOMYDIWHBFOXHZKYASW");
    msg.state = 113U;

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
    msg.setTimeStamp(0.637452446605);
    msg.setSource(10504U);
    msg.setSourceEntity(236U);
    msg.setDestination(55464U);
    msg.setDestinationEntity(27U);
    msg.name.assign("QNEKPDYMXFORKSKDZYATARVIATEIYKURYDQUUHJPSWLMKGVNOPFWSUEJNOGZCCMJDMBKOERLQPFVQCCTUFHCBTZZWZYYNEAIVVFYIAMDELROUIPGKUYDA");
    msg.state = 107U;

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
    msg.setTimeStamp(0.265250540729);
    msg.setSource(34554U);
    msg.setSourceEntity(44U);
    msg.setDestination(42496U);
    msg.setDestinationEntity(186U);
    msg.name.assign("HRLUFNNRPLXVVAMWJZYQNQVDLWQBEHZADUGKAGVRDZUGZEWBAKXRHYBTHPUQCOFYLFSHAAQGMFKGOYLFDKQOQNMUAJIBDXEPJTINSMJRXXFKGUUIFQWIHTATEIZEFALPJYGOHJTOBLPBYUWVXMJTHCPDSJKVCMNGGQNKOPLNWBSEOSICZRROYSBEZSIKFTMDKRSLM");
    msg.state = 199U;

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
    msg.setTimeStamp(0.785525703996);
    msg.setSource(52403U);
    msg.setSourceEntity(128U);
    msg.setDestination(48256U);
    msg.setDestinationEntity(25U);
    msg.name.assign("RAEYTPXZDYYSOHINWKIWUKKRDZUXMGSTJGARQXCTOOZLNUMUGVNLSKSBDULCRBNKEXBGKMLGGYPEQKDWFAWWVCYVUVFNVFLGKNCOJQMIUCNEJGHLVLXSJBWDPBLBIQIT");
    msg.value = 254U;

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
    msg.setTimeStamp(0.440175860128);
    msg.setSource(60636U);
    msg.setSourceEntity(91U);
    msg.setDestination(47371U);
    msg.setDestinationEntity(154U);
    msg.name.assign("CXUUVBJSYFPFLPGFIMFDGDJWDZEHOLVEHRJMFHBRZFWNHMPEQYOTZRQIBSVLUOOAPVMNIIUMVMQNACWGDWNSPNSPWIGRXCOWASORRWXPRYTMILEALHFT");
    msg.value = 161U;

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
    msg.setTimeStamp(0.546987972529);
    msg.setSource(33753U);
    msg.setSourceEntity(185U);
    msg.setDestination(29024U);
    msg.setDestinationEntity(168U);
    msg.name.assign("OTTBYDFFYYYVQHGOAFXUJWNMSJCBNXHQSCZRKYHDAMNSSXMAGPGROVXTEQBPEAWDBINLVOZJNWFRPFJJWZTFTTUHIWFWRIUQ");
    msg.value = 154U;

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
    msg.setTimeStamp(0.400373609398);
    msg.setSource(53397U);
    msg.setSourceEntity(54U);
    msg.setDestination(33387U);
    msg.setDestinationEntity(106U);
    msg.name.assign("GHCSKRMSVVRFFPKZUJIMTSANIPWEAEXNEIWQUSOBXXQGAJUOKYTNLHZUJCIEJLOSFXYNLYRHJMBBTIZAPJORCNKQCHYSHHVOBHSTVITFOEVWTDVSZKKCMGMXBQ");

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
    msg.setTimeStamp(0.606323618999);
    msg.setSource(2318U);
    msg.setSourceEntity(233U);
    msg.setDestination(24475U);
    msg.setDestinationEntity(126U);
    msg.name.assign("RDWHLLHHPEBFACSUVJRXGTXCKOWYIUQSIGOKMJJYKMUNTGTNAIKNNCLBNISCZTAWDOVVTLCPYYELXZMVZDE");

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
    msg.setTimeStamp(0.53100035543);
    msg.setSource(62009U);
    msg.setSourceEntity(81U);
    msg.setDestination(54352U);
    msg.setDestinationEntity(11U);
    msg.name.assign("GAKNMZFBHRIOOYHUXQJXIEONIUFTGANEHHZBUZTLKSYDSIOWIXOQHSJMNEMDQJVEVYFJXZXAZQCYDPZLFBYWEKFMWRWRCWJQJCKZXSRSARMZUJEVPPKBNRBVCWKKUYHLGTULWAFHXHGKEPLCXMLIRXGIYWTNHNOGDVKZTMFVPTDRDCQA");

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
    msg.setTimeStamp(0.974063532185);
    msg.setSource(6638U);
    msg.setSourceEntity(75U);
    msg.setDestination(13784U);
    msg.setDestinationEntity(148U);
    msg.name.assign("TOCKXPDVVURELMXSUZVTEWPSOIAINMGNBRUTTDAMLKNRCWKROWCAGBLFOBBHRHYOFEISGAGCEXQTSIVQTOFUBHLZECYVGQXJCJWRIPTMIWQAGNBTPZAZLHJNPTFDWUUHRYDVIJPCJYZLOSNHWFUKJNBSMAYCJHIJZYAZPOVXQZNND");
    msg.value = 206U;

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
    msg.setTimeStamp(0.00898512480371);
    msg.setSource(2066U);
    msg.setSourceEntity(145U);
    msg.setDestination(53911U);
    msg.setDestinationEntity(77U);
    msg.name.assign("RSAFDBUUSVNIBWNKKEBNPLARMWGGDFNFOQFJJYQYQJTJCIBDMNPZDPVKHOHXFAFIREJOBMEZHGOJGQVLZKCDDHYTDELCIKZTTKHJWQIGKZXKAXNXBRSA");
    msg.value = 185U;

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
    msg.setTimeStamp(0.0749036504001);
    msg.setSource(31511U);
    msg.setSourceEntity(18U);
    msg.setDestination(10465U);
    msg.setDestinationEntity(13U);
    msg.name.assign("BMFATCBWADPEAAYNSTMYLZQXJHKNISKVWVRNYBKUUZRMHECUOCYXLQGRXHYLZMKPOMRCVZJWQHNQYADHOGOAHJUYLJIMECSVDIQUQTLNMXMJKSHWNNGFFXWTQMI");
    msg.value = 19U;

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
    msg.setTimeStamp(0.907146102347);
    msg.setSource(17678U);
    msg.setSourceEntity(43U);
    msg.setDestination(42411U);
    msg.setDestinationEntity(120U);
    msg.id = 161U;
    msg.period = 3717674758U;
    msg.duty_cycle = 3693115637U;

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
    msg.setTimeStamp(0.149934841572);
    msg.setSource(32792U);
    msg.setSourceEntity(127U);
    msg.setDestination(3132U);
    msg.setDestinationEntity(170U);
    msg.id = 124U;
    msg.period = 1415038148U;
    msg.duty_cycle = 682661370U;

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
    msg.setTimeStamp(0.806355939645);
    msg.setSource(35290U);
    msg.setSourceEntity(122U);
    msg.setDestination(24371U);
    msg.setDestinationEntity(131U);
    msg.id = 82U;
    msg.period = 2507488881U;
    msg.duty_cycle = 2620118002U;

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
    msg.setTimeStamp(0.269481535543);
    msg.setSource(64895U);
    msg.setSourceEntity(60U);
    msg.setDestination(10593U);
    msg.setDestinationEntity(237U);
    msg.id = 175U;
    msg.period = 2996899689U;
    msg.duty_cycle = 3660449929U;

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
    msg.setTimeStamp(0.615051260509);
    msg.setSource(62171U);
    msg.setSourceEntity(177U);
    msg.setDestination(24308U);
    msg.setDestinationEntity(112U);
    msg.id = 90U;
    msg.period = 1465683966U;
    msg.duty_cycle = 1385543969U;

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
    msg.setTimeStamp(0.552506736333);
    msg.setSource(64739U);
    msg.setSourceEntity(237U);
    msg.setDestination(64731U);
    msg.setDestinationEntity(216U);
    msg.id = 202U;
    msg.period = 1725401566U;
    msg.duty_cycle = 2539992022U;

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
    msg.setTimeStamp(0.31934587181);
    msg.setSource(39864U);
    msg.setSourceEntity(58U);
    msg.setDestination(39124U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.226770240048;
    msg.lon = 0.557702745812;
    msg.height = 0.0944944247139;
    msg.x = 0.838312359739;
    msg.y = 0.238511963921;
    msg.z = 0.0437720418832;
    msg.phi = 0.42099661057;
    msg.theta = 0.0197538736963;
    msg.psi = 0.600951686955;
    msg.u = 0.451945809407;
    msg.v = 0.54389808353;
    msg.w = 0.200306748917;
    msg.vx = 0.582691643769;
    msg.vy = 0.741690093437;
    msg.vz = 0.809974100915;
    msg.p = 0.932475149156;
    msg.q = 0.658232214616;
    msg.r = 0.727955557697;
    msg.depth = 0.566305437083;
    msg.alt = 0.539677420094;

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
    msg.setTimeStamp(0.534370228133);
    msg.setSource(18820U);
    msg.setSourceEntity(140U);
    msg.setDestination(42631U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.957551571152;
    msg.lon = 0.31009045511;
    msg.height = 0.254690451911;
    msg.x = 0.29639785511;
    msg.y = 0.372828623167;
    msg.z = 0.0235338616122;
    msg.phi = 0.711996428344;
    msg.theta = 0.688710335837;
    msg.psi = 0.808545578707;
    msg.u = 0.244381337446;
    msg.v = 0.212334588859;
    msg.w = 0.232831196806;
    msg.vx = 0.155109807482;
    msg.vy = 0.298489522267;
    msg.vz = 0.671399212411;
    msg.p = 0.642538023602;
    msg.q = 0.443168589458;
    msg.r = 0.805304370467;
    msg.depth = 0.430408983736;
    msg.alt = 0.633916104122;

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
    msg.setTimeStamp(0.847683163174);
    msg.setSource(21992U);
    msg.setSourceEntity(149U);
    msg.setDestination(15550U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.9593673509;
    msg.lon = 0.170935371378;
    msg.height = 0.564089919507;
    msg.x = 0.492456429859;
    msg.y = 0.379386025931;
    msg.z = 0.232825847633;
    msg.phi = 0.802689920788;
    msg.theta = 0.785750389898;
    msg.psi = 0.353162656846;
    msg.u = 0.286421535566;
    msg.v = 0.195879859029;
    msg.w = 0.221251098714;
    msg.vx = 0.665661009168;
    msg.vy = 0.97132535315;
    msg.vz = 0.905048722201;
    msg.p = 0.736876034489;
    msg.q = 0.752437808863;
    msg.r = 0.0083294160798;
    msg.depth = 0.220460028215;
    msg.alt = 0.192336545088;

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
    msg.setTimeStamp(0.560720278358);
    msg.setSource(64734U);
    msg.setSourceEntity(142U);
    msg.setDestination(42444U);
    msg.setDestinationEntity(217U);
    msg.x = 0.524492425143;
    msg.y = 0.653840455647;
    msg.z = 0.272670732774;

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
    msg.setTimeStamp(0.149720114111);
    msg.setSource(12101U);
    msg.setSourceEntity(118U);
    msg.setDestination(25882U);
    msg.setDestinationEntity(75U);
    msg.x = 0.974615356825;
    msg.y = 0.011575231165;
    msg.z = 0.297782260689;

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
    msg.setTimeStamp(0.814899988305);
    msg.setSource(53650U);
    msg.setSourceEntity(148U);
    msg.setDestination(48451U);
    msg.setDestinationEntity(67U);
    msg.x = 0.467720639799;
    msg.y = 0.177777420681;
    msg.z = 0.112675945334;

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
    msg.setTimeStamp(0.198994156792);
    msg.setSource(63236U);
    msg.setSourceEntity(134U);
    msg.setDestination(49636U);
    msg.setDestinationEntity(132U);
    msg.value = 0.597396658207;

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
    msg.setTimeStamp(0.268873302831);
    msg.setSource(40805U);
    msg.setSourceEntity(95U);
    msg.setDestination(25913U);
    msg.setDestinationEntity(169U);
    msg.value = 0.849431189274;

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
    msg.setTimeStamp(0.0256808714856);
    msg.setSource(20019U);
    msg.setSourceEntity(240U);
    msg.setDestination(16890U);
    msg.setDestinationEntity(22U);
    msg.value = 0.198755673234;

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
    msg.setTimeStamp(0.404888447415);
    msg.setSource(58066U);
    msg.setSourceEntity(231U);
    msg.setDestination(41770U);
    msg.setDestinationEntity(183U);
    msg.value = 0.0544081871991;

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
    msg.setTimeStamp(0.885649050093);
    msg.setSource(12933U);
    msg.setSourceEntity(207U);
    msg.setDestination(19939U);
    msg.setDestinationEntity(71U);
    msg.value = 0.538513962963;

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
    msg.setTimeStamp(0.401169306624);
    msg.setSource(57748U);
    msg.setSourceEntity(217U);
    msg.setDestination(37012U);
    msg.setDestinationEntity(11U);
    msg.value = 0.719316604286;

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
    msg.setTimeStamp(0.639469126984);
    msg.setSource(25701U);
    msg.setSourceEntity(23U);
    msg.setDestination(6869U);
    msg.setDestinationEntity(56U);
    msg.x = 0.792992289807;
    msg.y = 0.997864696152;
    msg.z = 0.681675292023;
    msg.phi = 0.0168788630007;
    msg.theta = 0.33130659412;
    msg.psi = 0.0139389273953;
    msg.p = 0.664217596114;
    msg.q = 0.341741965625;
    msg.r = 0.762143344021;
    msg.u = 0.392088453425;
    msg.v = 0.0424115580493;
    msg.w = 0.149778129295;
    msg.bias_psi = 0.701058759102;
    msg.bias_r = 0.0306494273112;

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
    msg.setTimeStamp(0.557628343596);
    msg.setSource(64374U);
    msg.setSourceEntity(202U);
    msg.setDestination(5067U);
    msg.setDestinationEntity(30U);
    msg.x = 0.376552863264;
    msg.y = 0.223927579916;
    msg.z = 0.396213897982;
    msg.phi = 0.171597443535;
    msg.theta = 0.791155315142;
    msg.psi = 0.856456127037;
    msg.p = 0.24382185732;
    msg.q = 0.357211408735;
    msg.r = 0.28651662188;
    msg.u = 0.337744509403;
    msg.v = 0.971490880806;
    msg.w = 0.678478481073;
    msg.bias_psi = 0.21435444215;
    msg.bias_r = 0.919035877848;

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
    msg.setTimeStamp(0.470056403902);
    msg.setSource(41374U);
    msg.setSourceEntity(239U);
    msg.setDestination(28428U);
    msg.setDestinationEntity(140U);
    msg.x = 0.575750605278;
    msg.y = 0.551967204828;
    msg.z = 0.0696453625038;
    msg.phi = 0.57331052607;
    msg.theta = 0.717517647711;
    msg.psi = 0.56200262958;
    msg.p = 0.271685957745;
    msg.q = 0.973578065502;
    msg.r = 0.0389153494496;
    msg.u = 0.52178974725;
    msg.v = 0.666977185138;
    msg.w = 0.554140755891;
    msg.bias_psi = 0.028793348666;
    msg.bias_r = 0.417229387408;

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
    msg.setTimeStamp(0.660236395759);
    msg.setSource(32984U);
    msg.setSourceEntity(191U);
    msg.setDestination(25250U);
    msg.setDestinationEntity(101U);
    msg.bias_psi = 0.488738813348;
    msg.bias_r = 0.689285114426;
    msg.cog = 0.468072760603;
    msg.cyaw = 0.230885598796;
    msg.gps_rej_level = 0.721294916159;
    msg.lbl_rej_level = 0.0472877383364;
    msg.custom_x = 0.0184314100456;
    msg.custom_y = 0.101511448914;
    msg.custom_z = 0.242621817493;

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
    msg.setTimeStamp(0.521147941652);
    msg.setSource(58613U);
    msg.setSourceEntity(138U);
    msg.setDestination(32240U);
    msg.setDestinationEntity(232U);
    msg.bias_psi = 0.217714210819;
    msg.bias_r = 0.222598876184;
    msg.cog = 0.786158911463;
    msg.cyaw = 0.766107392976;
    msg.gps_rej_level = 0.093777345439;
    msg.lbl_rej_level = 0.806768525905;
    msg.custom_x = 0.393355629601;
    msg.custom_y = 0.641673464695;
    msg.custom_z = 0.41740233806;

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
    msg.setTimeStamp(0.351243484287);
    msg.setSource(14260U);
    msg.setSourceEntity(60U);
    msg.setDestination(18599U);
    msg.setDestinationEntity(193U);
    msg.bias_psi = 0.132628235001;
    msg.bias_r = 0.75567016136;
    msg.cog = 0.821211208997;
    msg.cyaw = 0.0834337912368;
    msg.gps_rej_level = 0.324404085174;
    msg.lbl_rej_level = 0.96115540582;
    msg.custom_x = 0.363347597811;
    msg.custom_y = 0.708571055339;
    msg.custom_z = 0.996633215797;

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
    msg.setTimeStamp(0.348035428759);
    msg.setSource(59912U);
    msg.setSourceEntity(131U);
    msg.setDestination(18275U);
    msg.setDestinationEntity(72U);
    msg.utc_time = 0.908022121797;
    msg.reason = 20U;

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
    msg.setTimeStamp(0.108404570913);
    msg.setSource(20391U);
    msg.setSourceEntity(201U);
    msg.setDestination(22202U);
    msg.setDestinationEntity(56U);
    msg.utc_time = 0.624915365143;
    msg.reason = 112U;

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
    msg.setTimeStamp(0.625228464058);
    msg.setSource(27224U);
    msg.setSourceEntity(242U);
    msg.setDestination(14324U);
    msg.setDestinationEntity(49U);
    msg.utc_time = 0.12934936318;
    msg.reason = 9U;

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
    msg.setTimeStamp(0.447920526405);
    msg.setSource(14345U);
    msg.setSourceEntity(134U);
    msg.setDestination(52134U);
    msg.setDestinationEntity(53U);
    msg.id = 208U;
    msg.range = 0.841640828986;
    msg.acceptance = 159U;

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
    msg.setTimeStamp(0.40383306168);
    msg.setSource(19792U);
    msg.setSourceEntity(92U);
    msg.setDestination(42196U);
    msg.setDestinationEntity(14U);
    msg.id = 164U;
    msg.range = 0.961115644006;
    msg.acceptance = 191U;

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
    msg.setTimeStamp(0.875793930229);
    msg.setSource(30160U);
    msg.setSourceEntity(137U);
    msg.setDestination(34395U);
    msg.setDestinationEntity(27U);
    msg.id = 66U;
    msg.range = 0.859103157809;
    msg.acceptance = 229U;

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
    msg.setTimeStamp(0.482084099393);
    msg.setSource(18761U);
    msg.setSourceEntity(233U);
    msg.setDestination(28464U);
    msg.setDestinationEntity(51U);
    msg.type = 235U;
    msg.reason = 129U;
    msg.value = 0.0820629618859;
    msg.timestep = 0.318860169271;

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
    msg.setTimeStamp(0.49055131129);
    msg.setSource(229U);
    msg.setSourceEntity(220U);
    msg.setDestination(15008U);
    msg.setDestinationEntity(31U);
    msg.type = 57U;
    msg.reason = 8U;
    msg.value = 0.11930972284;
    msg.timestep = 0.375309217497;

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
    msg.setTimeStamp(0.894936464331);
    msg.setSource(47826U);
    msg.setSourceEntity(136U);
    msg.setDestination(3035U);
    msg.setDestinationEntity(113U);
    msg.type = 224U;
    msg.reason = 148U;
    msg.value = 0.835981235244;
    msg.timestep = 0.310944431756;

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
    msg.setTimeStamp(0.77546760663);
    msg.setSource(19669U);
    msg.setSourceEntity(213U);
    msg.setDestination(47487U);
    msg.setDestinationEntity(212U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CZZWRSODTAYJXQKAXDPTYYHXGCNWTNVDREMZUOFKCHQPZUXOIVOAPGFOIYGMPUREGTXDJOBALAMAINDNIGEBDABLVSIZGGRFTMVZRBOBLIEHWWHVCLFUGANUQJEMGJPKSTNQERKMOWBSLSRZJNCFUSLADLPDVKSYEFFZJWQQVELLQUNCXKUSWTQJMYVECHEHC");
    tmp_msg_0.lat = 0.212627164949;
    tmp_msg_0.lon = 0.567517087946;
    tmp_msg_0.depth = 0.89510645698;
    tmp_msg_0.query_channel = 196U;
    tmp_msg_0.reply_channel = 71U;
    tmp_msg_0.transponder_delay = 55U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.503573878978;
    msg.y = 0.416419693069;
    msg.var_x = 0.148069908006;
    msg.var_y = 0.935506250001;
    msg.distance = 0.199905050824;

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
    msg.setTimeStamp(0.620479127464);
    msg.setSource(48935U);
    msg.setSourceEntity(245U);
    msg.setDestination(43389U);
    msg.setDestinationEntity(100U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EONHXICCLLLQUKKAJOJUHQIGVBOHWVXRLXMOQMBWXFBEGGROQAAQTCEPTGMVMORDTBQBFPOTYAYEKRFJHYSIKVXLHRAPTAAUPWCSNSYWWPSJDEBALKZZJDTMWFZCDKDFIIXQJHNPNUZAFUORVIRUYHFSZGDTZFVUGPCIKITGXDDGUSSIOURMEEYKHYNEZIQGDKFEBYJEMBMCTUNNYYGMVHLJPTBJWJSXNPANHKRNBVLCSSZQPWLF");
    tmp_msg_0.lat = 0.0969699166767;
    tmp_msg_0.lon = 0.534576994504;
    tmp_msg_0.depth = 0.204364455173;
    tmp_msg_0.query_channel = 30U;
    tmp_msg_0.reply_channel = 10U;
    tmp_msg_0.transponder_delay = 188U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.264570304254;
    msg.y = 0.363680840042;
    msg.var_x = 0.592819845175;
    msg.var_y = 0.944504993809;
    msg.distance = 0.283678886899;

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
    msg.setTimeStamp(0.0029390905109);
    msg.setSource(23882U);
    msg.setSourceEntity(237U);
    msg.setDestination(57230U);
    msg.setDestinationEntity(246U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TWZPFUSRRZDKLDDJQXJHSVOWBQDNLSAMALSBQCEIVLJXMHLHLGEUNTQSFXMZHOVVBBFZPNTIBNALGVROINXAOQXUAEOVYUYCXOYDJMFHNQVMZCEIAASTDTBNERTMCZMVSBKEUMDYUPWWERGFCKYRUXQKRORRJQJCFGLVGZQYZBKWCOFX");
    tmp_msg_0.lat = 0.913727825086;
    tmp_msg_0.lon = 0.524592308861;
    tmp_msg_0.depth = 0.309278172432;
    tmp_msg_0.query_channel = 147U;
    tmp_msg_0.reply_channel = 21U;
    tmp_msg_0.transponder_delay = 129U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0112082480459;
    msg.y = 0.593464149349;
    msg.var_x = 0.760109813163;
    msg.var_y = 0.638323763797;
    msg.distance = 0.0337285647835;

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
    msg.setTimeStamp(0.483390210508);
    msg.setSource(30531U);
    msg.setSourceEntity(246U);
    msg.setDestination(9257U);
    msg.setDestinationEntity(149U);
    msg.state = 228U;

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
    msg.setTimeStamp(0.0440400538117);
    msg.setSource(11577U);
    msg.setSourceEntity(90U);
    msg.setDestination(55046U);
    msg.setDestinationEntity(109U);
    msg.state = 83U;

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
    msg.setTimeStamp(0.315119417801);
    msg.setSource(30304U);
    msg.setSourceEntity(68U);
    msg.setDestination(5262U);
    msg.setDestinationEntity(142U);
    msg.state = 208U;

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
    msg.setTimeStamp(0.852965894681);
    msg.setSource(32818U);
    msg.setSourceEntity(158U);
    msg.setDestination(28009U);
    msg.setDestinationEntity(146U);
    msg.x = 0.480998051088;
    msg.y = 0.704259608904;
    msg.z = 0.318020906212;

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
    msg.setTimeStamp(0.613030582478);
    msg.setSource(6284U);
    msg.setSourceEntity(89U);
    msg.setDestination(54967U);
    msg.setDestinationEntity(169U);
    msg.x = 0.0169491919375;
    msg.y = 0.657458534266;
    msg.z = 0.341166835614;

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
    msg.setTimeStamp(0.921699826535);
    msg.setSource(8133U);
    msg.setSourceEntity(144U);
    msg.setDestination(18178U);
    msg.setDestinationEntity(108U);
    msg.x = 0.0676524189775;
    msg.y = 0.367988414797;
    msg.z = 0.707620704103;

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
    msg.setTimeStamp(0.693730986357);
    msg.setSource(17520U);
    msg.setSourceEntity(167U);
    msg.setDestination(30320U);
    msg.setDestinationEntity(36U);
    msg.va = 0.423390351702;
    msg.aoa = 0.0909391948727;
    msg.ssa = 0.931144332362;

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
    msg.setTimeStamp(0.371891847079);
    msg.setSource(38432U);
    msg.setSourceEntity(10U);
    msg.setDestination(59931U);
    msg.setDestinationEntity(191U);
    msg.va = 0.343359179499;
    msg.aoa = 0.578985091098;
    msg.ssa = 0.0198688068678;

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
    msg.setTimeStamp(0.6978393597);
    msg.setSource(25662U);
    msg.setSourceEntity(95U);
    msg.setDestination(25121U);
    msg.setDestinationEntity(179U);
    msg.va = 0.0122596447666;
    msg.aoa = 0.832389898556;
    msg.ssa = 0.99654618429;

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
    msg.setTimeStamp(0.827883772571);
    msg.setSource(2227U);
    msg.setSourceEntity(111U);
    msg.setDestination(28489U);
    msg.setDestinationEntity(38U);
    msg.mmsi = 3468171624U;
    msg.lon = 0.498472028341;
    msg.lat = 0.249306501861;
    msg.x = 0.300776029663;
    msg.y = 0.357030203134;
    msg.psi = 0.363132463003;
    msg.u = 0.221276009493;
    msg.v = 0.30620571564;
    msg.a = 0.14966076921;
    msg.b = 0.285046840863;
    msg.c = 0.661829476902;
    msg.d = 0.521569150548;

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
    msg.setTimeStamp(0.760692032272);
    msg.setSource(29621U);
    msg.setSourceEntity(46U);
    msg.setDestination(38189U);
    msg.setDestinationEntity(177U);
    msg.mmsi = 3609396026U;
    msg.lon = 0.222132719662;
    msg.lat = 0.688682080988;
    msg.x = 0.773117476199;
    msg.y = 0.245234731993;
    msg.psi = 0.192066160338;
    msg.u = 0.401324978628;
    msg.v = 0.62696084135;
    msg.a = 0.407571596143;
    msg.b = 0.63917618021;
    msg.c = 0.99290230506;
    msg.d = 0.251312820645;

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
    msg.setTimeStamp(0.147942126282);
    msg.setSource(61137U);
    msg.setSourceEntity(5U);
    msg.setDestination(23860U);
    msg.setDestinationEntity(234U);
    msg.mmsi = 5473396U;
    msg.lon = 0.145763292384;
    msg.lat = 0.88175853409;
    msg.x = 0.520813706957;
    msg.y = 0.14057661578;
    msg.psi = 0.639886720668;
    msg.u = 0.710279447331;
    msg.v = 0.945707812625;
    msg.a = 0.520633382365;
    msg.b = 0.131400033597;
    msg.c = 0.10788339244;
    msg.d = 0.0689879392108;

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
    msg.setTimeStamp(0.778261672722);
    msg.setSource(53033U);
    msg.setSourceEntity(89U);
    msg.setDestination(27748U);
    msg.setDestinationEntity(32U);
    msg.value = 0.559221130011;

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
    msg.setTimeStamp(0.964633389233);
    msg.setSource(59581U);
    msg.setSourceEntity(197U);
    msg.setDestination(63768U);
    msg.setDestinationEntity(61U);
    msg.value = 0.75427792771;

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
    msg.setTimeStamp(0.286608346541);
    msg.setSource(63809U);
    msg.setSourceEntity(154U);
    msg.setDestination(28890U);
    msg.setDestinationEntity(65U);
    msg.value = 0.022825004113;

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
    msg.setTimeStamp(0.881003614703);
    msg.setSource(15527U);
    msg.setSourceEntity(237U);
    msg.setDestination(15169U);
    msg.setDestinationEntity(96U);
    msg.value = 0.649982648998;
    msg.z_units = 86U;

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
    msg.setTimeStamp(0.531892842447);
    msg.setSource(59040U);
    msg.setSourceEntity(205U);
    msg.setDestination(37081U);
    msg.setDestinationEntity(220U);
    msg.value = 0.0195339152224;
    msg.z_units = 203U;

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
    msg.setTimeStamp(0.936234614747);
    msg.setSource(17311U);
    msg.setSourceEntity(232U);
    msg.setDestination(22853U);
    msg.setDestinationEntity(205U);
    msg.value = 0.54847428326;
    msg.z_units = 231U;

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
    msg.setTimeStamp(0.090354886617);
    msg.setSource(47139U);
    msg.setSourceEntity(190U);
    msg.setDestination(7263U);
    msg.setDestinationEntity(173U);
    msg.value = 0.392399577828;
    msg.speed_units = 63U;

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
    msg.setTimeStamp(0.175871120519);
    msg.setSource(15121U);
    msg.setSourceEntity(90U);
    msg.setDestination(32162U);
    msg.setDestinationEntity(177U);
    msg.value = 0.12654243116;
    msg.speed_units = 217U;

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
    msg.setTimeStamp(0.435525978658);
    msg.setSource(56172U);
    msg.setSourceEntity(115U);
    msg.setDestination(51885U);
    msg.setDestinationEntity(81U);
    msg.value = 0.520038476623;
    msg.speed_units = 121U;

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
    msg.setTimeStamp(0.378482657649);
    msg.setSource(218U);
    msg.setSourceEntity(85U);
    msg.setDestination(36165U);
    msg.setDestinationEntity(119U);
    msg.value = 0.558659112991;

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
    msg.setTimeStamp(0.634115346442);
    msg.setSource(11852U);
    msg.setSourceEntity(215U);
    msg.setDestination(54278U);
    msg.setDestinationEntity(85U);
    msg.value = 0.636653591552;

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
    msg.setTimeStamp(0.678486571747);
    msg.setSource(32430U);
    msg.setSourceEntity(96U);
    msg.setDestination(45605U);
    msg.setDestinationEntity(185U);
    msg.value = 0.904941928709;

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
    msg.setTimeStamp(0.924967585187);
    msg.setSource(39380U);
    msg.setSourceEntity(152U);
    msg.setDestination(58692U);
    msg.setDestinationEntity(54U);
    msg.value = 0.996892079027;

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
    msg.setTimeStamp(0.671326292635);
    msg.setSource(11052U);
    msg.setSourceEntity(65U);
    msg.setDestination(10821U);
    msg.setDestinationEntity(195U);
    msg.value = 0.83384384607;

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
    msg.setTimeStamp(0.568147654767);
    msg.setSource(37588U);
    msg.setSourceEntity(254U);
    msg.setDestination(26789U);
    msg.setDestinationEntity(5U);
    msg.value = 0.194192043716;

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
    msg.setTimeStamp(0.76893223805);
    msg.setSource(48739U);
    msg.setSourceEntity(169U);
    msg.setDestination(28117U);
    msg.setDestinationEntity(184U);
    msg.value = 0.177191365741;

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
    msg.setTimeStamp(0.868819518901);
    msg.setSource(15389U);
    msg.setSourceEntity(170U);
    msg.setDestination(4272U);
    msg.setDestinationEntity(192U);
    msg.value = 0.118450624908;

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
    msg.setTimeStamp(0.08203595944);
    msg.setSource(34702U);
    msg.setSourceEntity(26U);
    msg.setDestination(54809U);
    msg.setDestinationEntity(150U);
    msg.value = 0.0298235426496;

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
    msg.setTimeStamp(0.915848224538);
    msg.setSource(1688U);
    msg.setSourceEntity(139U);
    msg.setDestination(17685U);
    msg.setDestinationEntity(136U);
    msg.path_ref = 752543848U;
    msg.start_lat = 0.141718321184;
    msg.start_lon = 0.138217911305;
    msg.start_z = 0.810771261611;
    msg.start_z_units = 105U;
    msg.end_lat = 0.919601106294;
    msg.end_lon = 0.435158000232;
    msg.end_z = 0.977508444011;
    msg.end_z_units = 151U;
    msg.speed = 0.298482861084;
    msg.speed_units = 160U;
    msg.lradius = 0.414815406859;
    msg.flags = 100U;

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
    msg.setTimeStamp(0.956078420289);
    msg.setSource(38014U);
    msg.setSourceEntity(9U);
    msg.setDestination(20699U);
    msg.setDestinationEntity(246U);
    msg.path_ref = 3793455815U;
    msg.start_lat = 0.237282678223;
    msg.start_lon = 0.21965135762;
    msg.start_z = 0.652597744864;
    msg.start_z_units = 202U;
    msg.end_lat = 0.041394142281;
    msg.end_lon = 0.15016674559;
    msg.end_z = 0.0675841769384;
    msg.end_z_units = 142U;
    msg.speed = 0.40071364064;
    msg.speed_units = 125U;
    msg.lradius = 0.742780601993;
    msg.flags = 245U;

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
    msg.setTimeStamp(0.248979717);
    msg.setSource(38781U);
    msg.setSourceEntity(141U);
    msg.setDestination(46017U);
    msg.setDestinationEntity(229U);
    msg.path_ref = 365741220U;
    msg.start_lat = 0.377273450067;
    msg.start_lon = 0.98491456934;
    msg.start_z = 0.199299186783;
    msg.start_z_units = 75U;
    msg.end_lat = 0.150987173817;
    msg.end_lon = 0.423811240704;
    msg.end_z = 0.34920657805;
    msg.end_z_units = 252U;
    msg.speed = 0.0408685173115;
    msg.speed_units = 31U;
    msg.lradius = 0.0526350099458;
    msg.flags = 204U;

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
    msg.setTimeStamp(0.685830948289);
    msg.setSource(33656U);
    msg.setSourceEntity(82U);
    msg.setDestination(32601U);
    msg.setDestinationEntity(129U);
    msg.x = 0.682817632473;
    msg.y = 0.942427190683;
    msg.z = 0.844317497447;
    msg.k = 0.109959417137;
    msg.m = 0.817761335782;
    msg.n = 0.938397399526;
    msg.flags = 119U;

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
    msg.setTimeStamp(0.974075428049);
    msg.setSource(50190U);
    msg.setSourceEntity(141U);
    msg.setDestination(18409U);
    msg.setDestinationEntity(244U);
    msg.x = 0.448228681803;
    msg.y = 0.0782975294582;
    msg.z = 0.904793633448;
    msg.k = 0.39378698338;
    msg.m = 0.319907226591;
    msg.n = 0.902693045353;
    msg.flags = 197U;

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
    msg.setTimeStamp(0.290198755952);
    msg.setSource(31489U);
    msg.setSourceEntity(128U);
    msg.setDestination(53119U);
    msg.setDestinationEntity(8U);
    msg.x = 0.560808125876;
    msg.y = 0.999251453089;
    msg.z = 0.175168031922;
    msg.k = 0.763899681873;
    msg.m = 0.843720107255;
    msg.n = 0.134391328048;
    msg.flags = 23U;

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
    msg.setTimeStamp(0.629454935985);
    msg.setSource(59092U);
    msg.setSourceEntity(27U);
    msg.setDestination(5467U);
    msg.setDestinationEntity(193U);
    msg.value = 0.945414714408;

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
    msg.setTimeStamp(0.526216271237);
    msg.setSource(32281U);
    msg.setSourceEntity(196U);
    msg.setDestination(11577U);
    msg.setDestinationEntity(74U);
    msg.value = 0.757735605566;

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
    msg.setTimeStamp(0.0536084811629);
    msg.setSource(36961U);
    msg.setSourceEntity(5U);
    msg.setDestination(13798U);
    msg.setDestinationEntity(24U);
    msg.value = 0.0812425499846;

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
    msg.setTimeStamp(0.0293649376201);
    msg.setSource(8924U);
    msg.setSourceEntity(137U);
    msg.setDestination(12150U);
    msg.setDestinationEntity(197U);
    msg.u = 0.220528591895;
    msg.v = 0.731766768299;
    msg.w = 0.229158216773;
    msg.p = 0.611718350319;
    msg.q = 0.000799589771163;
    msg.r = 0.489461002094;
    msg.flags = 115U;

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
    msg.setTimeStamp(0.132345700676);
    msg.setSource(2187U);
    msg.setSourceEntity(80U);
    msg.setDestination(9361U);
    msg.setDestinationEntity(94U);
    msg.u = 0.715029368921;
    msg.v = 0.443082284684;
    msg.w = 0.734579881234;
    msg.p = 0.874480819261;
    msg.q = 0.879443521454;
    msg.r = 0.289158689678;
    msg.flags = 92U;

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
    msg.setTimeStamp(0.207664666905);
    msg.setSource(17245U);
    msg.setSourceEntity(53U);
    msg.setDestination(34180U);
    msg.setDestinationEntity(71U);
    msg.u = 0.486997958269;
    msg.v = 0.00216054215088;
    msg.w = 0.907030537832;
    msg.p = 0.752958369813;
    msg.q = 0.335207107954;
    msg.r = 0.206872543734;
    msg.flags = 50U;

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
    msg.setTimeStamp(0.737346266369);
    msg.setSource(52033U);
    msg.setSourceEntity(187U);
    msg.setDestination(34017U);
    msg.setDestinationEntity(70U);
    msg.path_ref = 2846723903U;
    msg.start_lat = 0.343939464784;
    msg.start_lon = 0.373727500248;
    msg.start_z = 0.346383010815;
    msg.start_z_units = 121U;
    msg.end_lat = 0.386777073293;
    msg.end_lon = 0.900378943956;
    msg.end_z = 0.348194216741;
    msg.end_z_units = 9U;
    msg.lradius = 0.928580546757;
    msg.flags = 65U;
    msg.x = 0.682251095901;
    msg.y = 0.75847530041;
    msg.z = 0.340290331744;
    msg.vx = 0.449798912357;
    msg.vy = 0.250395320789;
    msg.vz = 0.923896862475;
    msg.course_error = 0.164492322663;
    msg.eta = 10855U;

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
    msg.setTimeStamp(0.769278762877);
    msg.setSource(16717U);
    msg.setSourceEntity(243U);
    msg.setDestination(42096U);
    msg.setDestinationEntity(104U);
    msg.path_ref = 373512719U;
    msg.start_lat = 0.771435946799;
    msg.start_lon = 0.512568602916;
    msg.start_z = 0.827164742395;
    msg.start_z_units = 26U;
    msg.end_lat = 0.49530434373;
    msg.end_lon = 0.584412886985;
    msg.end_z = 0.773153379941;
    msg.end_z_units = 23U;
    msg.lradius = 0.416942433184;
    msg.flags = 84U;
    msg.x = 0.36499670726;
    msg.y = 0.296871830064;
    msg.z = 0.463170588205;
    msg.vx = 0.67536971437;
    msg.vy = 0.427204322792;
    msg.vz = 0.977717363558;
    msg.course_error = 0.479747665095;
    msg.eta = 5553U;

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
    msg.setTimeStamp(0.641447670914);
    msg.setSource(54080U);
    msg.setSourceEntity(126U);
    msg.setDestination(25861U);
    msg.setDestinationEntity(154U);
    msg.path_ref = 1303799819U;
    msg.start_lat = 0.643928052787;
    msg.start_lon = 0.32785179361;
    msg.start_z = 0.596461717521;
    msg.start_z_units = 176U;
    msg.end_lat = 0.285003690939;
    msg.end_lon = 0.776734635914;
    msg.end_z = 0.399432077377;
    msg.end_z_units = 200U;
    msg.lradius = 0.550265266526;
    msg.flags = 17U;
    msg.x = 0.0194702350601;
    msg.y = 0.749873576957;
    msg.z = 0.300714610512;
    msg.vx = 0.325619832771;
    msg.vy = 0.990750828899;
    msg.vz = 0.30334051081;
    msg.course_error = 0.514179640818;
    msg.eta = 48042U;

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
    msg.setTimeStamp(0.207584684922);
    msg.setSource(8896U);
    msg.setSourceEntity(141U);
    msg.setDestination(19454U);
    msg.setDestinationEntity(177U);
    msg.k = 0.498723221151;
    msg.m = 0.499751966411;
    msg.n = 0.955574130423;

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
    msg.setTimeStamp(0.787952289206);
    msg.setSource(11066U);
    msg.setSourceEntity(96U);
    msg.setDestination(9942U);
    msg.setDestinationEntity(103U);
    msg.k = 0.442604531075;
    msg.m = 0.215933854975;
    msg.n = 0.6587051546;

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
    msg.setTimeStamp(0.882796213791);
    msg.setSource(2175U);
    msg.setSourceEntity(19U);
    msg.setDestination(50818U);
    msg.setDestinationEntity(117U);
    msg.k = 0.282735967373;
    msg.m = 0.118955472354;
    msg.n = 0.947458769294;

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
    msg.setTimeStamp(0.39592171004);
    msg.setSource(36920U);
    msg.setSourceEntity(235U);
    msg.setDestination(59979U);
    msg.setDestinationEntity(142U);
    msg.p = 0.4222334213;
    msg.i = 0.00222389318394;
    msg.d = 0.264775516335;
    msg.a = 0.997272429664;

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
    msg.setTimeStamp(0.570336862679);
    msg.setSource(14468U);
    msg.setSourceEntity(144U);
    msg.setDestination(10985U);
    msg.setDestinationEntity(221U);
    msg.p = 0.280663936085;
    msg.i = 0.150405987264;
    msg.d = 0.381953536821;
    msg.a = 0.67861078106;

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
    msg.setTimeStamp(0.174867859738);
    msg.setSource(57852U);
    msg.setSourceEntity(212U);
    msg.setDestination(42380U);
    msg.setDestinationEntity(169U);
    msg.p = 0.0402601927445;
    msg.i = 0.631939736054;
    msg.d = 0.00531025077818;
    msg.a = 0.00824028009913;

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
    msg.setTimeStamp(0.82512939294);
    msg.setSource(48978U);
    msg.setSourceEntity(178U);
    msg.setDestination(14036U);
    msg.setDestinationEntity(84U);
    msg.op = 80U;

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
    msg.setTimeStamp(0.868786485737);
    msg.setSource(24907U);
    msg.setSourceEntity(65U);
    msg.setDestination(41997U);
    msg.setDestinationEntity(188U);
    msg.op = 89U;

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
    msg.setTimeStamp(0.0775431833852);
    msg.setSource(45957U);
    msg.setSourceEntity(29U);
    msg.setDestination(31261U);
    msg.setDestinationEntity(201U);
    msg.op = 73U;

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
    msg.setTimeStamp(0.938106198511);
    msg.setSource(31995U);
    msg.setSourceEntity(164U);
    msg.setDestination(3432U);
    msg.setDestinationEntity(11U);
    msg.x = 0.687729722368;
    msg.y = 0.0861647010863;
    msg.z = 0.810718728327;
    msg.vx = 0.545995588171;
    msg.vy = 0.824309096461;
    msg.vz = 0.0976459991401;
    msg.ax = 0.808321376735;
    msg.ay = 0.831045051129;
    msg.az = 0.626041032474;
    msg.flags = 24235U;

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
    msg.setTimeStamp(0.409233556036);
    msg.setSource(14128U);
    msg.setSourceEntity(66U);
    msg.setDestination(36516U);
    msg.setDestinationEntity(152U);
    msg.x = 0.51347409976;
    msg.y = 0.702880120595;
    msg.z = 0.326036761197;
    msg.vx = 0.0393370936241;
    msg.vy = 0.0179873254268;
    msg.vz = 0.395163651881;
    msg.ax = 0.0138205814673;
    msg.ay = 0.456991488635;
    msg.az = 0.291660809187;
    msg.flags = 19125U;

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
    msg.setTimeStamp(0.667097308213);
    msg.setSource(27902U);
    msg.setSourceEntity(56U);
    msg.setDestination(53552U);
    msg.setDestinationEntity(20U);
    msg.x = 0.899451479027;
    msg.y = 0.153340815509;
    msg.z = 0.65231395212;
    msg.vx = 0.333531850919;
    msg.vy = 0.551269660366;
    msg.vz = 0.847198409269;
    msg.ax = 0.799356100154;
    msg.ay = 0.762534408131;
    msg.az = 0.33862721753;
    msg.flags = 56613U;

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
    msg.setTimeStamp(0.609299853591);
    msg.setSource(6455U);
    msg.setSourceEntity(192U);
    msg.setDestination(51023U);
    msg.setDestinationEntity(36U);
    msg.value = 0.425516418523;

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
    msg.setTimeStamp(0.869781897254);
    msg.setSource(49931U);
    msg.setSourceEntity(30U);
    msg.setDestination(21422U);
    msg.setDestinationEntity(214U);
    msg.value = 0.60017577334;

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
    msg.setTimeStamp(0.805195502881);
    msg.setSource(50443U);
    msg.setSourceEntity(213U);
    msg.setDestination(46213U);
    msg.setDestinationEntity(21U);
    msg.value = 0.3731512144;

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
    IMC::Goto msg;
    msg.setTimeStamp(0.608591484971);
    msg.setSource(25462U);
    msg.setSourceEntity(227U);
    msg.setDestination(36828U);
    msg.setDestinationEntity(45U);
    msg.timeout = 59070U;
    msg.lat = 0.136241870727;
    msg.lon = 0.484412469346;
    msg.z = 0.386294189629;
    msg.z_units = 149U;
    msg.speed = 0.623841912471;
    msg.speed_units = 111U;
    msg.roll = 0.37189066523;
    msg.pitch = 0.55321773193;
    msg.yaw = 0.549523552646;
    msg.custom.assign("ZXFZUPHJBHZRVUIQKKTWDLGHYFHFZEATPSPWNITIGLRBBQENQYUOPCNDLDHPCMRIVAEMJHVVWWXJDDKSXBRCALBZVOZPXFVJEAUOXKQXAEWLUOJBAEBUYDKCYZNICPIYGFDSMKCFSVAGXMDNQHXAFKFNMZEIZBWSQOXLKUAGWNIYSCHSDLQUKVLTTMSQYESTCXRPVRONFJWRCGOWNPURTTRJMEGYUPWLIJTS");

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
    msg.setTimeStamp(0.572398914381);
    msg.setSource(28897U);
    msg.setSourceEntity(210U);
    msg.setDestination(51180U);
    msg.setDestinationEntity(75U);
    msg.timeout = 53513U;
    msg.lat = 0.750649746883;
    msg.lon = 0.864991971129;
    msg.z = 0.647962495843;
    msg.z_units = 9U;
    msg.speed = 0.647704017771;
    msg.speed_units = 126U;
    msg.roll = 0.760423310953;
    msg.pitch = 0.338673438977;
    msg.yaw = 0.889968994197;
    msg.custom.assign("BNJWRBSHIDAKBZPPURBESTQ");

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
    msg.setTimeStamp(0.773406243407);
    msg.setSource(19141U);
    msg.setSourceEntity(193U);
    msg.setDestination(1855U);
    msg.setDestinationEntity(69U);
    msg.timeout = 58722U;
    msg.lat = 0.0177583584541;
    msg.lon = 0.592113861721;
    msg.z = 0.633271613657;
    msg.z_units = 94U;
    msg.speed = 0.211563725296;
    msg.speed_units = 162U;
    msg.roll = 0.871398025467;
    msg.pitch = 0.659057172934;
    msg.yaw = 0.744932791739;
    msg.custom.assign("YXQKUMNZNTXTYXNWSDQDTGVHIAFZZWTOOVJGHUTHBANSIQHQLWFWFPMOTIHLVOFTYNIPJAEEHCLHJZUYFPMSIUNRMPJGXWABIAM");

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
    msg.setTimeStamp(0.470821636757);
    msg.setSource(27078U);
    msg.setSourceEntity(64U);
    msg.setDestination(15133U);
    msg.setDestinationEntity(89U);
    msg.timeout = 2484U;
    msg.lat = 0.982596168127;
    msg.lon = 0.0953773890657;
    msg.z = 0.623820802623;
    msg.z_units = 203U;
    msg.speed = 0.793091999518;
    msg.speed_units = 235U;
    msg.duration = 3285U;
    msg.radius = 0.282155604364;
    msg.flags = 156U;
    msg.custom.assign("XRSWMPULWMTWO");

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
    msg.setTimeStamp(0.54789788234);
    msg.setSource(32026U);
    msg.setSourceEntity(144U);
    msg.setDestination(48221U);
    msg.setDestinationEntity(44U);
    msg.timeout = 6955U;
    msg.lat = 0.950265059205;
    msg.lon = 0.638050776439;
    msg.z = 0.416928077522;
    msg.z_units = 91U;
    msg.speed = 0.737740208132;
    msg.speed_units = 56U;
    msg.duration = 64727U;
    msg.radius = 0.938940414107;
    msg.flags = 238U;
    msg.custom.assign("MVHCXVOEERHZKKIFXVQTWJXHRIUGAYYGTGDYVCIBWUDJRTJYYZHFDPJWCQAIHGZGGWQWPQFMRZSASKDHZSEKJEDLOJNOSAWPKFEPGZVYVLRGRULWIQNXVASBFECDYPDAFPAYNSBXUOUNAZTNTAEIZDFITRZKQUBUMMSYGLHELQECLKJFBMBOJUXKVLI");

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
    msg.setTimeStamp(0.530882274033);
    msg.setSource(53946U);
    msg.setSourceEntity(33U);
    msg.setDestination(59422U);
    msg.setDestinationEntity(252U);
    msg.timeout = 45649U;
    msg.lat = 0.180013650928;
    msg.lon = 0.483564160547;
    msg.z = 0.726303815111;
    msg.z_units = 49U;
    msg.speed = 0.00992640098546;
    msg.speed_units = 119U;
    msg.duration = 1362U;
    msg.radius = 0.279837616058;
    msg.flags = 204U;
    msg.custom.assign("ANSLYFAGDENNVOWJXDXVMQNGEKXHNMPBPBRHKVLWUZMVAKX");

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
    msg.setTimeStamp(0.714502086892);
    msg.setSource(19404U);
    msg.setSourceEntity(86U);
    msg.setDestination(43492U);
    msg.setDestinationEntity(164U);
    msg.custom.assign("IVFJHYWEGQSAFXRBMPLVWWCYLPLAQOWBKBCVMRCXNOSXNTDYDAFYYGHNKMGHBPVYDUJSKVBPKWBSARZUGZE");

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
    msg.setTimeStamp(0.747483851327);
    msg.setSource(21231U);
    msg.setSourceEntity(2U);
    msg.setDestination(37196U);
    msg.setDestinationEntity(128U);
    msg.custom.assign("RAJBMGFPRFSQKWLPVVMGXKXNBDNDLFZEFEBOOHKKRUPEAFUFCEGFITRQCYXBZMHMCRQ");

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
    msg.setTimeStamp(0.282966004984);
    msg.setSource(56730U);
    msg.setSourceEntity(1U);
    msg.setDestination(64207U);
    msg.setDestinationEntity(184U);
    msg.custom.assign("BFNUMXJXBAUOKQSLQDZUQSHSINJBPCWBGRDHCERZTCXFAKHWTEPVBVENGYPHLQGTDDHRRRLYPWMMVLZFCZQQTWRUCAFAE");

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
    msg.setTimeStamp(0.650687370265);
    msg.setSource(43187U);
    msg.setSourceEntity(140U);
    msg.setDestination(19904U);
    msg.setDestinationEntity(251U);
    msg.timeout = 29089U;
    msg.lat = 0.0986937626946;
    msg.lon = 0.704437581778;
    msg.z = 0.153001794977;
    msg.z_units = 64U;
    msg.duration = 11802U;
    msg.speed = 0.895299428863;
    msg.speed_units = 196U;
    msg.type = 98U;
    msg.radius = 0.827508806254;
    msg.length = 0.639043788416;
    msg.bearing = 0.983014843454;
    msg.direction = 5U;
    msg.custom.assign("FKCWEQDIDDXMFHYQUVRYCTBWZNAAUHHAIRXUQRIMPGLBLIA");

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
    msg.setTimeStamp(0.0129914798145);
    msg.setSource(33556U);
    msg.setSourceEntity(32U);
    msg.setDestination(7402U);
    msg.setDestinationEntity(87U);
    msg.timeout = 39332U;
    msg.lat = 0.658377254045;
    msg.lon = 0.353707689273;
    msg.z = 0.227427170755;
    msg.z_units = 189U;
    msg.duration = 54401U;
    msg.speed = 0.662389184007;
    msg.speed_units = 79U;
    msg.type = 114U;
    msg.radius = 0.536818573876;
    msg.length = 0.807019433664;
    msg.bearing = 0.241999539161;
    msg.direction = 60U;
    msg.custom.assign("SMFGUMFMDVYNGNUQRCHLNVIGZMUWRKUYIJYYRZMHIIIECCASSQJPAQWTUQFXERISFJSZXJLYOOPTMNAOPGBXSMDERTHYCAULEHPPDYWKXDWSRBBXUUHPKYMRNLKNNUZRLXFXPDHLBWLAKSKTQJPFDGWVMJLBZNHEGJZKWMXONZPOKQVAKWACLGEWFBTQNQGXCKGTUBOOORVCITSAAIFLPCQVIBEJEVGYOITDHZ");

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
    msg.setTimeStamp(0.548406278255);
    msg.setSource(47556U);
    msg.setSourceEntity(4U);
    msg.setDestination(28134U);
    msg.setDestinationEntity(42U);
    msg.timeout = 23193U;
    msg.lat = 0.613010801242;
    msg.lon = 0.775884025995;
    msg.z = 0.0340828580378;
    msg.z_units = 37U;
    msg.duration = 41323U;
    msg.speed = 0.119614309834;
    msg.speed_units = 236U;
    msg.type = 137U;
    msg.radius = 0.960509767972;
    msg.length = 0.731294715452;
    msg.bearing = 0.00274536728493;
    msg.direction = 91U;
    msg.custom.assign("IIUWMIMKWBJNPYPFTEXNNKLOIYALCCGCGLIRMRJHMNDXLFIJCBOKDAAZVVRXRNTSNXETNQKHSRMJDGSAQUEWGKHCCSHEDWUWHUMXBSBBBZZDOZOEGSBFKSAVFHZNZJFGUOOMXBPOLEADHXQYOYRRUYPSTTFYVGFLQCQCDUUJVBVKGLDKZUWDYYTVVHWYLIMEPSAETNXQQEBILOGGOAYHJRQAQJCSKMMJXWFDZLWRJ");

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
    msg.setTimeStamp(0.201806433213);
    msg.setSource(28403U);
    msg.setSourceEntity(76U);
    msg.setDestination(12563U);
    msg.setDestinationEntity(223U);
    msg.duration = 9663U;
    msg.custom.assign("HGNWOOXRPGKZLZAWZURBTYXFVVMNJMBFYUBISJHTYDMIHKRGIQGVNRIPRRCVZEOKTYMUSGJKRQUEIEYMHEXOWPNTDAJXLDWFSWTAVFDDAMDILNQUEMTATESKNDBJPOYJFUCGCFPKAQAFELIWJVYJSMPUWZLXSGVTHNSUQASCVBCEVXTINRDFFQRSJZNUJBBQZYYXKOQHKLECNDHCWMXPLLDGIZWOVECYUCZFBCOTXHM");

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
    msg.setTimeStamp(0.357158788979);
    msg.setSource(41111U);
    msg.setSourceEntity(112U);
    msg.setDestination(24501U);
    msg.setDestinationEntity(108U);
    msg.duration = 25353U;
    msg.custom.assign("HBQYDNUKZOFIZWCSCXVNTGQKOWAADBJCXRKSXRNJUCBBWURFJEUZYVNMQWMSIXGBHHJXXJLSPGVUPYZFLMODWHUOYTCQNRYKYTRVKRZEIPJSYLPWPCHTVIOZHBRJMCTPQIPUFJXXDOCLEMIQNDQTBTNRYMLTVAHAAGSVSMIBQFAEUAOKYHFOKGKMWBGLWUQOH");

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
    msg.setTimeStamp(0.181833149559);
    msg.setSource(33514U);
    msg.setSourceEntity(43U);
    msg.setDestination(43206U);
    msg.setDestinationEntity(210U);
    msg.duration = 35229U;
    msg.custom.assign("OEAFWTYBMXPVHXIIIJSSMGAGFFQQVYENYGNLFJFLMNTUMSJKKLSGVOXCOWMUFKWDRWYPTHEZVAVBUCGDUAQQBOTFRUHVYRCHPKVDCZKICYEDJEKGDKINOEMZEYBSBLUIXHFGOISFUNLYPLWJCLALQJXODCRENJTDIHOYVTDZGLNUZARHZRKZQJIXXXSIQESTBUMFQMDPXZSMNHVPADQGBWZK");

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
    msg.setTimeStamp(0.939039443227);
    msg.setSource(6071U);
    msg.setSourceEntity(244U);
    msg.setDestination(62342U);
    msg.setDestinationEntity(162U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.033029709408;
    tmp_msg_0.speed_units = 61U;
    msg.control.set(tmp_msg_0);
    msg.duration = 42048U;
    msg.custom.assign("XYIBVGMAJHFQRLOSAWVQUQNREITMOGBNFIINUZFKXIVEGQQANMTRXXHKPJQLEAZFOGWTUMLIPBBADFTUMEIYMDEETMWDFROIRB");

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
    msg.setTimeStamp(0.819162007216);
    msg.setSource(45883U);
    msg.setSourceEntity(128U);
    msg.setDestination(16298U);
    msg.setDestinationEntity(64U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.356220958332;
    tmp_msg_0.z_units = 70U;
    msg.control.set(tmp_msg_0);
    msg.duration = 45576U;
    msg.custom.assign("AMCAVQYNPYTFGRJIWSKFOQZDRKTBYQOQKOWOAMTCMSVYOQQJGMSQVYYHXAHFBBCFPXKRGDIGHNZRDUNIEHZSPINCCUZAWGQWHEWTLNHZJVFUDRDAVWKPDXOKUFUCAYXTSAWGJLXVIPPETJRHVHTXHPPLLXPMMLEBUCWSIOKIBFTH");

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
    msg.setTimeStamp(0.170425559412);
    msg.setSource(51961U);
    msg.setSourceEntity(245U);
    msg.setDestination(50738U);
    msg.setDestinationEntity(221U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.628139962671;
    msg.control.set(tmp_msg_0);
    msg.duration = 16943U;
    msg.custom.assign("NNRMAWIJQEPDRABZIHICWDQKPQDXKDNGOCWSFWBHDNKQMEIIFGHTMSQSZORZIAOQXZYCZYKMCJVMJGUHLHZBGBORCQYXVMMPLQTFRIUFVDJHTEHLETPOPQLCFEOWUUDULGLYULMJRBEP");

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
    msg.setTimeStamp(0.685903283054);
    msg.setSource(16949U);
    msg.setSourceEntity(96U);
    msg.setDestination(65483U);
    msg.setDestinationEntity(216U);
    msg.timeout = 25916U;
    msg.lat = 0.211384306924;
    msg.lon = 0.634248736088;
    msg.z = 0.271614136962;
    msg.z_units = 90U;
    msg.speed = 0.690698916737;
    msg.speed_units = 197U;
    msg.bearing = 0.0518115244608;
    msg.cross_angle = 0.971864233166;
    msg.width = 0.903218950528;
    msg.length = 0.342776461971;
    msg.hstep = 0.931596726134;
    msg.coff = 98U;
    msg.alternation = 81U;
    msg.flags = 11U;
    msg.custom.assign("BLTQGGXJJDMXLDXNXJFCNDOHYMBJQEEJKCVFYBEFEROKFBFECIHBJZIQAI");

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
    msg.setTimeStamp(0.579327405469);
    msg.setSource(24041U);
    msg.setSourceEntity(163U);
    msg.setDestination(24913U);
    msg.setDestinationEntity(55U);
    msg.timeout = 26868U;
    msg.lat = 0.424776462579;
    msg.lon = 0.56956609848;
    msg.z = 0.978921799293;
    msg.z_units = 232U;
    msg.speed = 0.10556286924;
    msg.speed_units = 61U;
    msg.bearing = 0.0925978127351;
    msg.cross_angle = 0.356876671729;
    msg.width = 0.829008314141;
    msg.length = 0.132570694571;
    msg.hstep = 0.594968128394;
    msg.coff = 191U;
    msg.alternation = 74U;
    msg.flags = 205U;
    msg.custom.assign("EBUDXXKTYHNKRZGXRZZPQYCHLKCGTOZNCOPKOHKC");

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
    msg.setTimeStamp(0.0327972653753);
    msg.setSource(41728U);
    msg.setSourceEntity(48U);
    msg.setDestination(56358U);
    msg.setDestinationEntity(108U);
    msg.timeout = 3128U;
    msg.lat = 0.999166874297;
    msg.lon = 0.90829071969;
    msg.z = 0.883595615949;
    msg.z_units = 138U;
    msg.speed = 0.522130837244;
    msg.speed_units = 216U;
    msg.bearing = 0.290515971705;
    msg.cross_angle = 0.202019086021;
    msg.width = 0.198247151869;
    msg.length = 0.958144890098;
    msg.hstep = 0.523121832896;
    msg.coff = 234U;
    msg.alternation = 90U;
    msg.flags = 171U;
    msg.custom.assign("BBRXFBSQUQYDSLWSZABKITZRDRARMLPTZHQTHJKSHNDXRMAOOJVTIEVFNMNPEJGSVMYVITW");

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
    msg.setTimeStamp(0.671635278515);
    msg.setSource(2754U);
    msg.setSourceEntity(81U);
    msg.setDestination(829U);
    msg.setDestinationEntity(17U);
    msg.timeout = 38501U;
    msg.lat = 0.480415545121;
    msg.lon = 0.568350933746;
    msg.z = 0.80989094908;
    msg.z_units = 29U;
    msg.speed = 0.506757921561;
    msg.speed_units = 165U;
    msg.custom.assign("HIBOIWDTTGIXHSAWHXRDRQJOSZWMJDHRJZKXCYTWTGKUWLGBXHPOUJOFCLVDIKGQBHNHNAMMYVFXLAPQFYJNZXILSUOFFEMLXKSPZDCZDKJPNYVYNURETRTMTBQPUZMGFFEHSUMARHCPQZTISYUSEVPWUCVBIKQSLQBIEOSUSQEEIXXWAODNBKVZVLTDATOLLVGMNVMWKBWZAWCJVXPZCGGEGRNU");

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
    msg.setTimeStamp(0.734336762877);
    msg.setSource(50457U);
    msg.setSourceEntity(232U);
    msg.setDestination(4709U);
    msg.setDestinationEntity(3U);
    msg.timeout = 12192U;
    msg.lat = 0.977721152087;
    msg.lon = 0.58582543145;
    msg.z = 0.0262461877788;
    msg.z_units = 140U;
    msg.speed = 0.91557195163;
    msg.speed_units = 167U;
    msg.custom.assign("OWWPCXDFEASWENIOJNHISMBJFAKORDJLHRLYNNQNOWTIEBNZQFTKZV");

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
    msg.setTimeStamp(0.994330840709);
    msg.setSource(45469U);
    msg.setSourceEntity(202U);
    msg.setDestination(46238U);
    msg.setDestinationEntity(91U);
    msg.timeout = 17117U;
    msg.lat = 0.17834883598;
    msg.lon = 0.134846252385;
    msg.z = 0.534557679281;
    msg.z_units = 97U;
    msg.speed = 0.726125769042;
    msg.speed_units = 4U;
    msg.custom.assign("ZROCRDDQKZEPDRWVLFNNZUEXJANGRKXXMLUVAJDBCMSMVWNFUCDALMLMHLTCOPVDXBW");

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
    msg.setTimeStamp(0.0722906252441);
    msg.setSource(14100U);
    msg.setSourceEntity(64U);
    msg.setDestination(6018U);
    msg.setDestinationEntity(92U);
    msg.x = 0.898887397153;
    msg.y = 0.895226753651;
    msg.z = 0.329109740994;

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
    msg.setTimeStamp(0.647228727065);
    msg.setSource(59518U);
    msg.setSourceEntity(158U);
    msg.setDestination(15755U);
    msg.setDestinationEntity(189U);
    msg.x = 0.50999585987;
    msg.y = 0.976375108609;
    msg.z = 0.215123341524;

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
    msg.setTimeStamp(0.527844682084);
    msg.setSource(19178U);
    msg.setSourceEntity(80U);
    msg.setDestination(47166U);
    msg.setDestinationEntity(75U);
    msg.x = 0.263170056528;
    msg.y = 0.527801227078;
    msg.z = 0.80774795547;

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
    msg.setTimeStamp(0.481475722641);
    msg.setSource(41052U);
    msg.setSourceEntity(151U);
    msg.setDestination(32896U);
    msg.setDestinationEntity(150U);
    msg.timeout = 52809U;
    msg.lat = 0.535627927769;
    msg.lon = 0.33891813881;
    msg.z = 0.00968177458335;
    msg.z_units = 13U;
    msg.amplitude = 0.309345198015;
    msg.pitch = 0.419336819114;
    msg.speed = 0.439622674799;
    msg.speed_units = 239U;
    msg.custom.assign("GKVDQLPBIEMPUYQYWOZGEFUHAMJJBTHIKVPIWZLMZORKNSAFQUFJAVLKWXDXHSLCIGZRFJXBNRKBSEGBGMLFMSNULBSCBTEQWOWTVSGZPXFGEOVJKYZHJCIDAWPMCDRLRUN");

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
    msg.setTimeStamp(0.372344557308);
    msg.setSource(9173U);
    msg.setSourceEntity(100U);
    msg.setDestination(9662U);
    msg.setDestinationEntity(85U);
    msg.timeout = 27805U;
    msg.lat = 0.735668114618;
    msg.lon = 0.284672950805;
    msg.z = 0.0139064233675;
    msg.z_units = 104U;
    msg.amplitude = 0.00192200624696;
    msg.pitch = 0.0428585943828;
    msg.speed = 0.565204919969;
    msg.speed_units = 19U;
    msg.custom.assign("ACFGVQADAAONJPUYCVOBPEKMTZPIOXXMXYLRLMWISJWIQGIKPGVEUGDVQD");

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
    msg.setTimeStamp(0.021975008973);
    msg.setSource(26225U);
    msg.setSourceEntity(1U);
    msg.setDestination(45566U);
    msg.setDestinationEntity(93U);
    msg.timeout = 3264U;
    msg.lat = 0.626935110238;
    msg.lon = 0.0978941804917;
    msg.z = 0.00798127173867;
    msg.z_units = 18U;
    msg.amplitude = 0.319114328639;
    msg.pitch = 0.521892411093;
    msg.speed = 0.0544933125726;
    msg.speed_units = 68U;
    msg.custom.assign("AKKJZLSSEQWYKNOWCMAVTNBBTMXVZIEHGMALMVDUQWCIAPWUYORUBKKFUKPYGEWGVDCLRYPVNLBQHVBPPHNGMAUKCRNGLQSGZTTQSIQHAGEJBRLTHLRWHVHTNRCUYUEESNPWWOREMPVIHXBJSXFLMYFJOMZVXU");

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
    msg.setTimeStamp(0.890790959592);
    msg.setSource(64153U);
    msg.setSourceEntity(64U);
    msg.setDestination(60490U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.665539120306);
    msg.setSource(55556U);
    msg.setSourceEntity(227U);
    msg.setDestination(42231U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.255566350641);
    msg.setSource(47686U);
    msg.setSourceEntity(1U);
    msg.setDestination(62183U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.679089777759);
    msg.setSource(23193U);
    msg.setSourceEntity(79U);
    msg.setDestination(40148U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.382474708882;
    msg.lon = 0.472028035904;
    msg.z = 0.86807650534;
    msg.z_units = 137U;
    msg.radius = 0.371725310929;
    msg.duration = 53847U;
    msg.speed = 0.533448126722;
    msg.speed_units = 198U;
    msg.custom.assign("RMLSRKNQUAMZEFUIKYRFPTKTSSCOADFJJNNENHDOMXYLJLJALSJFMHOPGTMEYCUWRNPSRHEPCVUYROFILBIDTZLGWZTDJKYZEUGUVDCHQWNIIGGISDADFAE");

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
    msg.setTimeStamp(0.783123393024);
    msg.setSource(12894U);
    msg.setSourceEntity(94U);
    msg.setDestination(24737U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.132731602902;
    msg.lon = 0.960556309393;
    msg.z = 0.157319418038;
    msg.z_units = 222U;
    msg.radius = 0.806779761673;
    msg.duration = 36905U;
    msg.speed = 0.778471159659;
    msg.speed_units = 86U;
    msg.custom.assign("UJHMXHCHMYYMWNBMGOFIGHRFXUXWDLUYDDAAWZAHDJYPFRBCTENAMTKORYCPUYUAVLNZCZSAWPVEFMYRJHBXNNYWQNNSJDJXSEOTJRDFKDLJEVBIXSMZGZLTTJZCSAOQXCRQZUPTRKNIASGBEBPRCELJUSKZKCQHYVPLJGIRWWIUMFWTKVVILTIPUOQFGYDVKTBFCDQMPKHFEPIFIRLLNZQHGCOXBG");

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
    msg.setTimeStamp(0.98489917969);
    msg.setSource(48303U);
    msg.setSourceEntity(203U);
    msg.setDestination(52839U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.634028696517;
    msg.lon = 0.107674552729;
    msg.z = 0.096351196205;
    msg.z_units = 118U;
    msg.radius = 0.836747492645;
    msg.duration = 58140U;
    msg.speed = 0.248550707569;
    msg.speed_units = 25U;
    msg.custom.assign("NSPNFOMWDBFYMDAZQNCGXJEJOERSGZWUSGHVNZSQVOQIGHVQUYSLDSXGXWHXILHZOLZVSRPFADNAMCTLANDCMMTEPRIOTICXWUZFHPUYWBHQ");

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
    msg.setTimeStamp(0.370306512234);
    msg.setSource(22634U);
    msg.setSourceEntity(184U);
    msg.setDestination(22432U);
    msg.setDestinationEntity(65U);
    msg.timeout = 1953U;
    msg.flags = 244U;
    msg.lat = 0.918670473621;
    msg.lon = 0.0441300985982;
    msg.start_z = 0.3850742426;
    msg.start_z_units = 202U;
    msg.end_z = 0.364603194112;
    msg.end_z_units = 199U;
    msg.radius = 0.535801097304;
    msg.speed = 0.372082097157;
    msg.speed_units = 133U;
    msg.custom.assign("MFCWQMCAUIPIIJFTTREHGEHKMNDYOCETAERXBKSSRLJCJHKCVNJRGVZJKAWPZLYVSZRDNKUZVLYQSNVLOAIHXSFDZCEXPIWRAZXFGETPUODXYWNBMYZASGVKLGRICNUXLFTIRPFBNJSGQLWLIDYHYBLSWUMHZPBDFDQGJOFVTBOMNNQYBMPECKYNJTOKAKHLWUXSXUWIVPSBGQIHVHTQURBMPETQGQWDCJMUAGXZEDYFHWARXZPVOMOEOUFBT");

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
    msg.setTimeStamp(0.675476145172);
    msg.setSource(21765U);
    msg.setSourceEntity(40U);
    msg.setDestination(16249U);
    msg.setDestinationEntity(11U);
    msg.timeout = 30850U;
    msg.flags = 182U;
    msg.lat = 0.312759581692;
    msg.lon = 0.70783185155;
    msg.start_z = 0.600917533044;
    msg.start_z_units = 97U;
    msg.end_z = 0.242979911406;
    msg.end_z_units = 138U;
    msg.radius = 0.166822718214;
    msg.speed = 0.593854420182;
    msg.speed_units = 181U;
    msg.custom.assign("ZWPGYSKLUWNPGUDDFYZMTJAKOIAJVCCSTLOYGOWRTLZIDVBBTCNPGLMSFCPRITQXQQDEBLWSNBYUJYXRMQYCVUBCUWBNGKGMCXQEKBQHWYVUIHEXTALX");

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
    msg.setTimeStamp(0.697882009159);
    msg.setSource(15562U);
    msg.setSourceEntity(74U);
    msg.setDestination(45959U);
    msg.setDestinationEntity(81U);
    msg.timeout = 49216U;
    msg.flags = 30U;
    msg.lat = 0.0315461076636;
    msg.lon = 0.835025347813;
    msg.start_z = 0.917235068948;
    msg.start_z_units = 206U;
    msg.end_z = 0.393749630063;
    msg.end_z_units = 174U;
    msg.radius = 0.61453883333;
    msg.speed = 0.0477275167458;
    msg.speed_units = 170U;
    msg.custom.assign("GNBIJPDMFLAAXRKBLTVRKZZHLDTWXPCXOGJHKOOEVWSYQRUTJVIHSLINACFVUHJOOVKAYXBXFYEFRYPACPGSTSWRIEEGSAFHMUZDNEBWQLJIGZNUQIOHPWPTECMNCLUOSQMQGZKMFUZEVCAPFXLNIOVGNZHBFHDLYRXIDTVYSCVCDKYAYHMXBPKWBFXMBBTXIOJJUPEEOUSYQRRUMBDQGGIKKZCDZJN");

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
    msg.setTimeStamp(0.973038345973);
    msg.setSource(21136U);
    msg.setSourceEntity(55U);
    msg.setDestination(277U);
    msg.setDestinationEntity(119U);
    msg.timeout = 8730U;
    msg.lat = 0.545533177463;
    msg.lon = 0.517521486907;
    msg.z = 0.87213468911;
    msg.z_units = 149U;
    msg.speed = 0.363373573336;
    msg.speed_units = 168U;
    msg.custom.assign("YFCTIUPMBGOKEOBJVUHCKZLWVQZERMIMUUEPKIYAONPDWJGHUTMKHALGMSJXEJCRLLNMGCAEZVQBBRXHFENNCIJMFLDPFCCCVXQWSZIF");

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
    msg.setTimeStamp(0.99098551327);
    msg.setSource(30024U);
    msg.setSourceEntity(96U);
    msg.setDestination(35492U);
    msg.setDestinationEntity(55U);
    msg.timeout = 27276U;
    msg.lat = 0.921380215746;
    msg.lon = 0.241237777208;
    msg.z = 0.612577422168;
    msg.z_units = 245U;
    msg.speed = 0.887758776726;
    msg.speed_units = 77U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.711216261733;
    tmp_msg_0.y = 0.333441099795;
    tmp_msg_0.z = 0.122588669864;
    tmp_msg_0.t = 0.705391931378;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YZDUPYYGJFXPZRACGHVEPSYOEPILFHLVNQMZLGKXMNOEVBTCOXMSJOEXPIQDSISLNTUJVHOTUCNZMJSDSABFNCMRQZPGRLJFPWMCTIOOQNFOXFNBHGIMYSBTUPPTKGHUDZUBRZIEVBTJYAWCEVSHBWYAWMOYREUXQMCCBEQCLXWVADLG");

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
    msg.setTimeStamp(0.46090581487);
    msg.setSource(2329U);
    msg.setSourceEntity(20U);
    msg.setDestination(45984U);
    msg.setDestinationEntity(0U);
    msg.timeout = 45716U;
    msg.lat = 0.769549370144;
    msg.lon = 0.00751272661652;
    msg.z = 0.746240457766;
    msg.z_units = 0U;
    msg.speed = 0.452813642217;
    msg.speed_units = 142U;
    msg.custom.assign("OSYZXDQAYMADPSVDIURPBZTEWBRLBIQXJEQHREW");

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
    msg.setTimeStamp(0.990204165882);
    msg.setSource(183U);
    msg.setSourceEntity(182U);
    msg.setDestination(48592U);
    msg.setDestinationEntity(220U);
    msg.x = 0.553919990092;
    msg.y = 0.257851351633;
    msg.z = 0.490581707979;
    msg.t = 0.175713364421;

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
    msg.setTimeStamp(0.0500993107145);
    msg.setSource(34453U);
    msg.setSourceEntity(196U);
    msg.setDestination(7718U);
    msg.setDestinationEntity(103U);
    msg.x = 0.239462839981;
    msg.y = 0.600810829024;
    msg.z = 0.22364958427;
    msg.t = 0.344683264818;

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
    msg.setTimeStamp(0.309039015225);
    msg.setSource(15993U);
    msg.setSourceEntity(142U);
    msg.setDestination(55459U);
    msg.setDestinationEntity(92U);
    msg.x = 0.0520730341592;
    msg.y = 0.129215149398;
    msg.z = 0.714538061041;
    msg.t = 0.363326527316;

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
    msg.setTimeStamp(0.303682197393);
    msg.setSource(18929U);
    msg.setSourceEntity(128U);
    msg.setDestination(38784U);
    msg.setDestinationEntity(217U);
    msg.timeout = 7301U;
    msg.name.assign("IVWLJQHDTQTMHAHTKYDGPBEIAVOOXJSRNXPWMJYMCPFAJMEUWYDOKJPVYGKBTCZCQFVAAQJZADDSQJNXPSCGQIVFJHUHSGAGOHSTCQOBTRRDQBGNJIBDQLMYWEFAFDOPGPORESUVZUEQZTSBXVEUEZXITBLRHJBDCXCZYNGBXSCAMFYNIWFZIHPKIGPUIVVRNUDX");
    msg.custom.assign("GDULKCAKNJSSSQYVDAZYFOKNCAEBZBWGYMZQXSUASFEECKRAMDYHIWUNICWHHRXFEJKWEZWJMNZEQZDOFCMWYYQGBRKFKMFCGEJUAZBLACTVUGUVTNXTWSOWTCYCPQNPXZHVXUK");

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
    msg.setTimeStamp(0.753668967398);
    msg.setSource(62457U);
    msg.setSourceEntity(18U);
    msg.setDestination(24738U);
    msg.setDestinationEntity(247U);
    msg.timeout = 36539U;
    msg.name.assign("QYJHEPUTJKZBAQTHZPMXURWNMBBQLUTJBTYNWRBZKROOMABBWXNALVOXPLHZWHVRYOHDXANUGQCJVLAEZMLLQFEIMKMVXIEGIUKESWTAQCYWADLICPIMSRGONJXKOUZAZCZZYBYGLQTGVCUJIYSWVJXRVDMSFOUFSQSQNGJPPDIFHTWFKOGGDZSSE");
    msg.custom.assign("XFZSTRFNGGPOXUQGDOKCKMGAZERTTHDNQTFQKLOUNAOQFYZGDUVEXEFLEZDYPLOFLFHABYUNDEASKRLJPPLOSHXXXCYJOWCIZTWVHDTSXPLNVDXQDCRGHBEJJI");

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
    msg.setTimeStamp(0.969932595473);
    msg.setSource(20957U);
    msg.setSourceEntity(87U);
    msg.setDestination(36288U);
    msg.setDestinationEntity(118U);
    msg.timeout = 31611U;
    msg.name.assign("SBCGYHXTGKATQAUHSNTOGUVFBTPXJTWTDFJNJEBVRPRLFBKOEDPDFXZGCAEQMGKLKNEKGSSSWBXKQWIERNIFLHBJIIILWVAXUIFGRPNMZEDZVVZYYOJPMTWCHJLGQHCYBEOZAMYVBQKPLHRXDMHOZNSAZRFIJAEXSFOODOWGCDARTRNCFHUBBLPVSDPEAQUDKUTJVUZHVWZXJKWNYMYACKYQQUCPM");
    msg.custom.assign("BCFAUXTDXVRFXQKZVAGWMLKZEAQTNLHZSIFCWCBCTYPVZWOOAWEYPFBKCSV");

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
    msg.setTimeStamp(0.588661426125);
    msg.setSource(30147U);
    msg.setSourceEntity(204U);
    msg.setDestination(31702U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.957206504201;
    msg.lon = 0.215232142677;
    msg.z = 0.0235392637912;
    msg.z_units = 249U;
    msg.speed = 0.991364211884;
    msg.speed_units = 143U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.253121938019;
    tmp_msg_0.y = 0.951177755961;
    tmp_msg_0.z = 0.878303824376;
    tmp_msg_0.t = 0.837364543234;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.83983293164;
    msg.custom.assign("SRZNPHHZGLJRHFUGCASEHDHXKRFXEDEZKAWIKAYUYSFLAXLGAMVILTSTQGFPGJUWNPWDGVRHOKFCQNYTMIUUEYRMSEYFSMCXJGTSVLNREJZOMOXWQKDIXINGBMVPPWMMONBULOUAKMTCITABPYUBLKRZTFWRJJDMKPBWTCEVGKJOQHUZYXSNQ");

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
    msg.setTimeStamp(0.529007847343);
    msg.setSource(3559U);
    msg.setSourceEntity(247U);
    msg.setDestination(49377U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.795195891732;
    msg.lon = 0.178889886357;
    msg.z = 0.321126636584;
    msg.z_units = 47U;
    msg.speed = 0.349396668964;
    msg.speed_units = 40U;
    msg.start_time = 0.601791194757;
    msg.custom.assign("BPQQFIJCBSHLAPWOTZUMNAOLCWYAQEGUKZERGSLVNNYDSTVDWOMBVQF");

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
    msg.setTimeStamp(0.279102314507);
    msg.setSource(60700U);
    msg.setSourceEntity(160U);
    msg.setDestination(47648U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.173106127468;
    msg.lon = 0.984473154878;
    msg.z = 0.0747143411923;
    msg.z_units = 218U;
    msg.speed = 0.661333296751;
    msg.speed_units = 170U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1379U;
    tmp_msg_0.off_x = 0.512791948273;
    tmp_msg_0.off_y = 0.624630665625;
    tmp_msg_0.off_z = 0.710060983819;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.527297993334;
    msg.custom.assign("EQIHEOSOVVHCTKNHMFZIQRLYBQNQSVXVZDDAIJPTKYWMHGPMMKFWLFGOSKNXXXRTLFQEWAYLGPLAWCFEXCKBVUCUUPPJHLUDNXTCANOFFGJRUEYRUUSGGPVKKOCHFCPBYBKSIZWRCQIUWTSTPBOWTHXXDAETQNYHZWWSTCJRYHNMGSNEGPNBVYCIJDOQZGJYAZEFSLRARNVMOEBLPIZVEJZDIXJUJLDD");

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
    msg.setTimeStamp(0.265126716453);
    msg.setSource(7146U);
    msg.setSourceEntity(133U);
    msg.setDestination(21111U);
    msg.setDestinationEntity(176U);
    msg.vid = 52338U;
    msg.off_x = 0.249099632687;
    msg.off_y = 0.200073299744;
    msg.off_z = 0.336945879583;

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
    msg.setTimeStamp(0.170273404378);
    msg.setSource(49264U);
    msg.setSourceEntity(26U);
    msg.setDestination(4388U);
    msg.setDestinationEntity(249U);
    msg.vid = 52144U;
    msg.off_x = 0.903573197466;
    msg.off_y = 0.426722807353;
    msg.off_z = 0.874244123927;

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
    msg.setTimeStamp(0.101842526727);
    msg.setSource(7082U);
    msg.setSourceEntity(184U);
    msg.setDestination(57729U);
    msg.setDestinationEntity(201U);
    msg.vid = 26938U;
    msg.off_x = 0.582356839147;
    msg.off_y = 0.0100199640693;
    msg.off_z = 0.38480746241;

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
    msg.setTimeStamp(0.631664459606);
    msg.setSource(2641U);
    msg.setSourceEntity(66U);
    msg.setDestination(47018U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.110424596944);
    msg.setSource(56737U);
    msg.setSourceEntity(59U);
    msg.setDestination(2314U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.467923349535);
    msg.setSource(7340U);
    msg.setSourceEntity(88U);
    msg.setDestination(63177U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.7070613491);
    msg.setSource(16492U);
    msg.setSourceEntity(74U);
    msg.setDestination(19639U);
    msg.setDestinationEntity(247U);
    msg.mid = 15776U;

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
    msg.setTimeStamp(0.100921200085);
    msg.setSource(23239U);
    msg.setSourceEntity(185U);
    msg.setDestination(2381U);
    msg.setDestinationEntity(211U);
    msg.mid = 9365U;

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
    msg.setTimeStamp(0.855791497233);
    msg.setSource(23404U);
    msg.setSourceEntity(247U);
    msg.setDestination(6043U);
    msg.setDestinationEntity(86U);
    msg.mid = 1092U;

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
    msg.setTimeStamp(0.0191646009944);
    msg.setSource(48610U);
    msg.setSourceEntity(124U);
    msg.setDestination(6493U);
    msg.setDestinationEntity(103U);
    msg.state = 154U;
    msg.eta = 28716U;
    msg.info.assign("NLOQCRWVLSVKYWDPUTAUWUJFZXGXQPCSIVJSMEMLYIMJFHYDSHOEQPQLKOTSXETGHFNOHNGXWCZRMHAUCAJYFFZQVHURXNRHYQLAPBJNZCQROSDDBUYHENSPBBQAPZYKLTNFRZ");

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
    msg.setTimeStamp(0.344274697851);
    msg.setSource(18599U);
    msg.setSourceEntity(100U);
    msg.setDestination(46232U);
    msg.setDestinationEntity(87U);
    msg.state = 96U;
    msg.eta = 43314U;
    msg.info.assign("FGCLNXGBYAYRWZWSJWMFLECOBHEKFLFYMACDUFJIJCVGOGGTIAYFYPBPSPTRDDBOUWGNFAKRUHJZREBULHMMGANQVRHDJOVXCKLYKTQKDZHOLRJZXDNWSSJWTIESXPBSLQKTMQSMEANXCQWMVHHUIPJXWLVVNIYKGBAEQDZHSNPYURTXHBFZEMCNEKODC");

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
    msg.setTimeStamp(0.641107995226);
    msg.setSource(1772U);
    msg.setSourceEntity(52U);
    msg.setDestination(65505U);
    msg.setDestinationEntity(203U);
    msg.state = 227U;
    msg.eta = 46142U;
    msg.info.assign("TLVYTJZLVTQKNVXRILFOKYHQLQQOWCICNLHSRMIJVEFRHOYXNDKSWCIRSJZXJWHEMNXYVAGUTDRXPVAGFELLJAESKGSQEXMBACUPTOUJXFDIJATKEASTKHFZBDORDCOLXVYPPTWBKRMVYCZDINEHR");

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
    msg.setTimeStamp(0.643652014365);
    msg.setSource(7138U);
    msg.setSourceEntity(44U);
    msg.setDestination(6659U);
    msg.setDestinationEntity(132U);
    msg.system = 56053U;
    msg.duration = 58509U;
    msg.speed = 0.660409592142;
    msg.speed_units = 120U;
    msg.x = 0.768399711323;
    msg.y = 0.424719547457;
    msg.z = 0.91713367785;
    msg.z_units = 29U;

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
    msg.setTimeStamp(0.672283762092);
    msg.setSource(22282U);
    msg.setSourceEntity(195U);
    msg.setDestination(55594U);
    msg.setDestinationEntity(245U);
    msg.system = 20265U;
    msg.duration = 46493U;
    msg.speed = 0.727250922918;
    msg.speed_units = 245U;
    msg.x = 0.447470705398;
    msg.y = 0.347904437091;
    msg.z = 0.644443626078;
    msg.z_units = 187U;

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
    msg.setTimeStamp(0.129524090354);
    msg.setSource(43394U);
    msg.setSourceEntity(49U);
    msg.setDestination(42823U);
    msg.setDestinationEntity(141U);
    msg.system = 32856U;
    msg.duration = 1563U;
    msg.speed = 0.883064026005;
    msg.speed_units = 118U;
    msg.x = 0.0181148023422;
    msg.y = 0.734581007458;
    msg.z = 0.264199194307;
    msg.z_units = 153U;

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
    msg.setTimeStamp(0.442575470357);
    msg.setSource(48203U);
    msg.setSourceEntity(22U);
    msg.setDestination(45971U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.174353266792;
    msg.lon = 0.530107288044;
    msg.speed = 0.0961593449775;
    msg.speed_units = 218U;
    msg.duration = 34297U;
    msg.sys_a = 58207U;
    msg.sys_b = 11995U;
    msg.move_threshold = 0.795916524541;

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
    msg.setTimeStamp(0.721249546518);
    msg.setSource(63423U);
    msg.setSourceEntity(226U);
    msg.setDestination(22129U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.680793706951;
    msg.lon = 0.339938955902;
    msg.speed = 0.450061476346;
    msg.speed_units = 140U;
    msg.duration = 52675U;
    msg.sys_a = 41037U;
    msg.sys_b = 7867U;
    msg.move_threshold = 0.781395954402;

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
    msg.setTimeStamp(0.0156381534598);
    msg.setSource(31858U);
    msg.setSourceEntity(79U);
    msg.setDestination(42247U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.198042825214;
    msg.lon = 0.736519826713;
    msg.speed = 0.364583057397;
    msg.speed_units = 191U;
    msg.duration = 15011U;
    msg.sys_a = 24045U;
    msg.sys_b = 6548U;
    msg.move_threshold = 0.41294201905;

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
    msg.setTimeStamp(0.338229566954);
    msg.setSource(39537U);
    msg.setSourceEntity(101U);
    msg.setDestination(2703U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.674002717711;
    msg.lon = 0.92859685773;
    msg.z = 0.277318091961;
    msg.z_units = 246U;
    msg.speed = 0.7561292602;
    msg.speed_units = 9U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.704372008043;
    tmp_msg_0.lon = 0.592384661421;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZLCEDDRULZARPBNXHITDGFBZUDCSTKEOTEUIX");

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
    msg.setTimeStamp(0.114103541241);
    msg.setSource(47376U);
    msg.setSourceEntity(39U);
    msg.setDestination(56457U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.297346949572;
    msg.lon = 0.618823157705;
    msg.z = 0.643034172014;
    msg.z_units = 24U;
    msg.speed = 0.29872765279;
    msg.speed_units = 14U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0355759729027;
    tmp_msg_0.lon = 0.675640022911;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KQWGPIYGYTHCOHFWDUKUDRSQSOOMNLSQPJAAIMBACRCCJTEJTWTZKFXMZWBNMGLPYWBFWNSPEHRGPYXMVESLGTQKXHYVBWYDKCUQNIXJMXQULGUHEZSDEGQCBJEMIJGFIZOCMODYNMYBZGVPWURSPLOT");

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
    msg.setTimeStamp(0.0815140365774);
    msg.setSource(18870U);
    msg.setSourceEntity(230U);
    msg.setDestination(41794U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.828900270531;
    msg.lon = 0.905012711827;
    msg.z = 0.220045088303;
    msg.z_units = 143U;
    msg.speed = 0.226020280098;
    msg.speed_units = 164U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.890882636991;
    tmp_msg_0.lon = 0.13878179087;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YSZKBUWTPHHJKIWRUIRKICGEJKICVYPXOFNFHVCFMRMHRSLAHZKSRWVANLMXXKIQYTKLZXONQDFAEPBYGIXHPABKOXKHUSNYAWSUPQICSEMBDRYZJQDN");

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
    msg.setTimeStamp(0.691487548593);
    msg.setSource(9755U);
    msg.setSourceEntity(176U);
    msg.setDestination(17673U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.211547882041;
    msg.lon = 0.368617620699;

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
    msg.setTimeStamp(0.572415919812);
    msg.setSource(17203U);
    msg.setSourceEntity(94U);
    msg.setDestination(11139U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.335058724307;
    msg.lon = 0.952645588748;

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
    msg.setTimeStamp(0.519842229812);
    msg.setSource(17417U);
    msg.setSourceEntity(113U);
    msg.setDestination(21689U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.255850004073;
    msg.lon = 0.779724943928;

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
    msg.setTimeStamp(0.436708590965);
    msg.setSource(40388U);
    msg.setSourceEntity(231U);
    msg.setDestination(48550U);
    msg.setDestinationEntity(4U);
    msg.timeout = 3791U;
    msg.lat = 0.560915889452;
    msg.lon = 0.102952834051;
    msg.z = 0.0879609065485;
    msg.z_units = 186U;
    msg.pitch = 0.256243474045;
    msg.amplitude = 0.481943904087;
    msg.duration = 62164U;
    msg.speed = 0.597560811127;
    msg.speed_units = 98U;
    msg.radius = 0.285980528131;
    msg.direction = 56U;
    msg.custom.assign("XXETIXEUDMOXJZCPYHSFNQVUBIZVDLPXAZWKKNYMS");

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
    msg.setTimeStamp(0.944509811193);
    msg.setSource(17936U);
    msg.setSourceEntity(41U);
    msg.setDestination(44188U);
    msg.setDestinationEntity(119U);
    msg.timeout = 27340U;
    msg.lat = 0.0957167061527;
    msg.lon = 0.511033651162;
    msg.z = 0.208471438048;
    msg.z_units = 182U;
    msg.pitch = 0.369752041906;
    msg.amplitude = 0.192173335138;
    msg.duration = 28004U;
    msg.speed = 0.341170656266;
    msg.speed_units = 228U;
    msg.radius = 0.166078734082;
    msg.direction = 226U;
    msg.custom.assign("VRTTNBYVSQSQDRZYISJTAXVAZMGYREWHIXOEIDJFGEVKEXDDRJUKTCXCFCODSPGFOGKBNREOPBXUGEHRPTHLYZLMGPKJAWFSGMUKKRNUFGNCVZGUPWVWHMWFKQSURVXLLI");

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
    msg.setTimeStamp(0.800290632629);
    msg.setSource(1393U);
    msg.setSourceEntity(94U);
    msg.setDestination(36516U);
    msg.setDestinationEntity(4U);
    msg.timeout = 25763U;
    msg.lat = 0.782240153473;
    msg.lon = 0.330061078533;
    msg.z = 0.30563510006;
    msg.z_units = 217U;
    msg.pitch = 0.0131023597287;
    msg.amplitude = 0.520655353477;
    msg.duration = 35931U;
    msg.speed = 0.772124740547;
    msg.speed_units = 182U;
    msg.radius = 0.263748204403;
    msg.direction = 53U;
    msg.custom.assign("TAFAIWUCIAMZ");

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
    msg.setTimeStamp(0.631952956301);
    msg.setSource(31630U);
    msg.setSourceEntity(12U);
    msg.setDestination(47894U);
    msg.setDestinationEntity(180U);
    msg.formation_name.assign("XEMKLYUCQEHXSGLJPIADRWYPGGITFKHJLCGFATRBOPHIVZWNESGBFOXRAGFWEHUUNNLEEYJKKRWUYZOZHQISJVMCWROQDXLOJIABLJJBOENBFFCMYCQQPVYPKDLKFGKNOUTTWMZNQBBAXVCTSBLPNPGUHFXMVYVUSXSRYVMSDRRPMDS");
    msg.reference_frame = 141U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20881U;
    tmp_msg_0.off_x = 0.733214333218;
    tmp_msg_0.off_y = 0.496501379593;
    tmp_msg_0.off_z = 0.113968281591;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BTOSVLOXNGPZZAZBUCJRSKRZEIYVZJTFTDOHGJEPPNMKAQETAIJDXREHDUWPMDAWQUXDSVTFZGOQKUCJAMHHAMXOICOISEEBZIMZNFYTURPFDDFAGRFINPIYKOPBNQCLFNGCLHJFQMJSEUQKYBLBUGUWV");

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
    msg.setTimeStamp(0.290503989622);
    msg.setSource(48992U);
    msg.setSourceEntity(155U);
    msg.setDestination(56041U);
    msg.setDestinationEntity(93U);
    msg.formation_name.assign("PWZCKODXYPBGRAMTLZDONIJCXWAWHKYSAWIHFFSJFOKSINWEGKKHBLGVQROYMFEGTOSHQZCZIBZEMVT");
    msg.reference_frame = 229U;
    msg.custom.assign("MMEITLAXTKXRZXGTQXBZECHDWDBLFRNUXETEKYMHKNSZVFJGCSRFTM");

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
    msg.setTimeStamp(0.917391695457);
    msg.setSource(18309U);
    msg.setSourceEntity(78U);
    msg.setDestination(64630U);
    msg.setDestinationEntity(101U);
    msg.formation_name.assign("OLFTLUQWNCFBSLDNABKTTQIOJXODZFAFCGUESBGRBRMZVACRJSSJYZVWTCYZNAVJEHVMQNYIVJBZSUCPJLEUGKIFAMHBFFQVHODEMVSIPXNSPIUNCEHVMQDKCWPLKKZDLNGYXZQJOKW");
    msg.reference_frame = 113U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 18186U;
    tmp_msg_0.off_x = 0.464301241827;
    tmp_msg_0.off_y = 0.604694733644;
    tmp_msg_0.off_z = 0.612917241101;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("OPLSPCZOSYTFXRBAEJKBXBWXJKTXLXRNMNAYIQDRYJUAKXDUDBJOISPPRTFURUMTGKVNWLFEPFRTJKHWSDEGOZEWQSKWTYJFGGMFTDWMAZGBHDCROOVBFUAAHOYLSAOBSM");

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
    msg.setTimeStamp(0.306993123349);
    msg.setSource(32348U);
    msg.setSourceEntity(154U);
    msg.setDestination(46434U);
    msg.setDestinationEntity(136U);
    msg.group_name.assign("SACNAOFUKSSUDJEUWTVGQOCXITOWIVWSZFEZAILBWLBTVIWVHYUARADXDBRJKPHBCEKIGZGNPNLHYVYGAIMMVGGJPFETFYETWOUHSQQ");
    msg.formation_name.assign("LADZEUWJVHRSJLXKUTCNEVVXDAYRKPLAPBSGDMIIFEZLVZQRTRAGVIEHNCAUKWGDORLBAYCTGTNSBPJYZGRQCVYCFTQNBJMZEHUYLHEOKTUBRMDQDXOEEPVTFTHBOYIVEKXPMTUIZQFUMLFKKCUHKJQMYWDWPCGJBJGXPAFF");
    msg.plan_id.assign("KFBXDRGNAUZBJWFE");
    msg.description.assign("ISYGUYVBBLAGLEPIRWBMHYEDDDQSSGREJXIAQUGXRTOQFZWDTHNDSKAIPAIPFFUKFUSQVVLNPLTAEVSILLXHOONTYKG");
    msg.leader_speed = 0.216275916368;
    msg.leader_bank_lim = 0.299077706866;
    msg.pos_sim_err_lim = 0.185607511573;
    msg.pos_sim_err_wrn = 0.357094904614;
    msg.pos_sim_err_timeout = 18552U;
    msg.converg_max = 0.200706595132;
    msg.converg_timeout = 24499U;
    msg.comms_timeout = 42600U;
    msg.turb_lim = 0.961846973163;
    msg.custom.assign("QECMZFBXQEYHZXLJKUREFKNXRZERYMFYNMSWYTIWSGDCBYXXUBPQVKQMGCJJCOUUNWPDGTHFVAWUTZJSBNCKMZKXMPAJZFIBWHSSJAMLNGJEAEFJFPQPDQYYSA");

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
    msg.setTimeStamp(0.323692704088);
    msg.setSource(13152U);
    msg.setSourceEntity(41U);
    msg.setDestination(19555U);
    msg.setDestinationEntity(251U);
    msg.group_name.assign("FZINOKOMIMTFLPPNNRPCXUJDLLNMMYXBGHBIPKNUWCEQSYOQNLIJWGTXDFPEFRGSSKEUOZZYMXGTJDHMBJUHBACZCYRDMEVPWPOZERRBYAUTCACRAERSPTBEINTRGIXYGHOYCKTPJGXZLWHNKWOJSQIPXXIEJEBAJUFRSXQWQGYDKSRHXVFKQDCVBWOHHHWFYMLDTGAEVZWFSFZAZILND");
    msg.formation_name.assign("ZJRORUYNXARILLAYTHUNYWPGOYKHEIGLVJXFWDVRXLURJWRQFVJXKBKDESWQEMLJMNYPHPWSJFFUHISGQLFGTTBUIAGSIWDDZBCAXBKDEYAZYDCTTLLFBDXICWSXOMJXFEQUCSIANYASNWNSVZQOWOZGXTALPKNQGKPUBGQHSOIDLRVQXGZZCDCMZQPMKEPCMEECQOODIEGUNYIHRHFKVBMAUVHVFCBFWOKJJNOJRYPCARMHBZVTPSTBMPHTEN");
    msg.plan_id.assign("KKSNDDNMKZDWYLXRVYSIGAHUEWKXYZJEFGOVRNAQTTGXECYJBKMXINHZHORMZMUPQSJHRDWCMOIOUDILRQKDATCCUTRUWBVLIBBETTYYEZBFJZPPBYDGRZJKVPPWJZXISKXHBVLFFWQGJNPMVMODCCGQBLGUSOUOOEHOLSPTEAASYNXXIWYDEALCJAAQXZCSUFIHSNQMGJNASFTBDVFEYUWQUNKRHCGVVBZFPVFECPNTKHWLWQILHRJTIXQ");
    msg.description.assign("UNMZYDSRBVBUQRTHMWKKZVNIBEOYLWWASSTJQAMODTDPFVCEKAMLVGYMWFQNKCSGNFTQAGTTZUMJAPQORNIPXUSXGLPGFEPAOXFZNDYLEXPEQUYHEUXDHTBIWCCCHBUYFKWOTNXXDXCJQPURHYMRUZBSTGKGEHOWWRRMIRDCEJVENISVCM");
    msg.leader_speed = 0.524041328474;
    msg.leader_bank_lim = 0.92226827037;
    msg.pos_sim_err_lim = 0.150638367358;
    msg.pos_sim_err_wrn = 0.0205271663232;
    msg.pos_sim_err_timeout = 50736U;
    msg.converg_max = 0.682600217963;
    msg.converg_timeout = 13460U;
    msg.comms_timeout = 543U;
    msg.turb_lim = 0.337304334995;
    msg.custom.assign("TCHCQPKKXDGLGUZKIDQBCADBGYWHAFEKQCVHOEYNWWLNZGRCGLUPMSFHMJOIXRDRLRYPALXNUSBRMY");

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
    msg.setTimeStamp(0.615033296133);
    msg.setSource(60918U);
    msg.setSourceEntity(52U);
    msg.setDestination(54463U);
    msg.setDestinationEntity(182U);
    msg.group_name.assign("TXBJRYZMUHODTQEPYCTKHOVGLNJSJHJCMLQFUADCCUZUVEITAIFPDOENPBWWXSFEGDSBRSWQYZQCFKAPNYYPIMRFNLODFMZIUVYRZHCMLHK");
    msg.formation_name.assign("RXEGYKMDBLJCSWJXOFXBZISODSYJHDDYCORVUJUKGJWPMCHA");
    msg.plan_id.assign("OPAOZSYWCKYJDNFRAXECGHPGWLOZPATJEMWZEREGKEAWICONXDTHYRXLEDMTJCONIAAKWLIITDRNJRRSDSEKKHZDGLQCLZNVNVDXCOGTLBLVQCOSBFQCFXLBURSZDYHNMOJIEQFFUKPJZQSGYIZILOVPBVFY");
    msg.description.assign("YNGLMPBLJMKSGDTOCSVBCPSKJUOBGSBPARAFJJWPAYDGNXBVGVZEQVAQGOKRYSRDAMEFRUXHDZSAOTPWKGIZBQNQTIQUETFFXPIBJCJXBMJKTTCYUUUHQWHWSHQZDUXEHPLFQKYZ");
    msg.leader_speed = 0.0668033473469;
    msg.leader_bank_lim = 0.668515276442;
    msg.pos_sim_err_lim = 0.0881833812339;
    msg.pos_sim_err_wrn = 0.954085016038;
    msg.pos_sim_err_timeout = 34893U;
    msg.converg_max = 0.857257329215;
    msg.converg_timeout = 33220U;
    msg.comms_timeout = 48351U;
    msg.turb_lim = 0.943297910692;
    msg.custom.assign("XVYZBUOJVUAFICMWNJWEASPPVPQIGDJJXULFVTJLIHDWOTTHEIYZNIUFEMMSDLOSYJZELTWBKXQQDGNIPKCAQCIPYIUZEWRUYKQMHNTTYERCHMRPDODKTMLJACLBURBGHWXKEUHQYLJTNQBVPXHBFMEDVXESZYFPBPDKOCLPFGBMVCSLQXGNVJONZWGKHZOFRSRMLAZSZGGAQZOKSJAXYUX");

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
    msg.setTimeStamp(0.357197175775);
    msg.setSource(15550U);
    msg.setSourceEntity(28U);
    msg.setDestination(12079U);
    msg.setDestinationEntity(142U);
    msg.control_src = 1784U;
    msg.control_ent = 164U;
    msg.timeout = 0.579164007464;
    msg.loiter_radius = 0.475298506907;
    msg.altitude_interval = 0.0573068178282;

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
    msg.setTimeStamp(0.995333357894);
    msg.setSource(63711U);
    msg.setSourceEntity(31U);
    msg.setDestination(42290U);
    msg.setDestinationEntity(201U);
    msg.control_src = 26094U;
    msg.control_ent = 218U;
    msg.timeout = 0.0203820352714;
    msg.loiter_radius = 0.941979504481;
    msg.altitude_interval = 0.0436321306354;

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
    msg.setTimeStamp(0.704679897862);
    msg.setSource(737U);
    msg.setSourceEntity(7U);
    msg.setDestination(33524U);
    msg.setDestinationEntity(159U);
    msg.control_src = 1408U;
    msg.control_ent = 71U;
    msg.timeout = 0.124745949663;
    msg.loiter_radius = 0.465796615732;
    msg.altitude_interval = 0.345707183864;

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
    msg.setTimeStamp(0.849466018067);
    msg.setSource(30763U);
    msg.setSourceEntity(57U);
    msg.setDestination(4298U);
    msg.setDestinationEntity(23U);
    msg.flags = 248U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.945958849135;
    tmp_msg_0.speed_units = 53U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0888224644708;
    tmp_msg_1.z_units = 228U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.129526115758;
    msg.lon = 0.482366562085;
    msg.radius = 0.0776452074162;

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
    msg.setTimeStamp(0.93501892138);
    msg.setSource(2705U);
    msg.setSourceEntity(61U);
    msg.setDestination(17810U);
    msg.setDestinationEntity(23U);
    msg.flags = 207U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.821752817397;
    tmp_msg_0.speed_units = 87U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.80141322288;
    tmp_msg_1.z_units = 129U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.370553866261;
    msg.lon = 0.800882667541;
    msg.radius = 0.480685895539;

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
    msg.setTimeStamp(0.0546521429796);
    msg.setSource(9685U);
    msg.setSourceEntity(218U);
    msg.setDestination(4449U);
    msg.setDestinationEntity(172U);
    msg.flags = 13U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.638427571517;
    tmp_msg_0.speed_units = 177U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.927881392473;
    tmp_msg_1.z_units = 199U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.997947656928;
    msg.lon = 0.688168758572;
    msg.radius = 0.0640267667786;

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
    msg.setTimeStamp(0.826156301714);
    msg.setSource(52565U);
    msg.setSourceEntity(36U);
    msg.setDestination(3266U);
    msg.setDestinationEntity(163U);
    msg.control_src = 54894U;
    msg.control_ent = 4U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 250U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.284472177419;
    tmp_tmp_msg_0_0.speed_units = 238U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.745014184392;
    tmp_tmp_msg_0_1.z_units = 187U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.902698781928;
    tmp_msg_0.lon = 0.94522453943;
    tmp_msg_0.radius = 0.42666220629;
    msg.reference.set(tmp_msg_0);
    msg.state = 16U;
    msg.proximity = 176U;

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
    msg.setTimeStamp(0.799175119972);
    msg.setSource(14544U);
    msg.setSourceEntity(110U);
    msg.setDestination(14561U);
    msg.setDestinationEntity(159U);
    msg.control_src = 24925U;
    msg.control_ent = 142U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 59U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.422829225769;
    tmp_tmp_msg_0_0.speed_units = 93U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.68108624284;
    tmp_tmp_msg_0_1.z_units = 104U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.826201122761;
    tmp_msg_0.lon = 0.641775498219;
    tmp_msg_0.radius = 0.918935241402;
    msg.reference.set(tmp_msg_0);
    msg.state = 145U;
    msg.proximity = 244U;

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
    msg.setTimeStamp(0.994881328456);
    msg.setSource(25699U);
    msg.setSourceEntity(28U);
    msg.setDestination(51023U);
    msg.setDestinationEntity(4U);
    msg.control_src = 8397U;
    msg.control_ent = 197U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 89U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.163155480719;
    tmp_tmp_msg_0_0.speed_units = 7U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.509267843198;
    tmp_tmp_msg_0_1.z_units = 141U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.794941324868;
    tmp_msg_0.lon = 0.967435512852;
    tmp_msg_0.radius = 0.563214299265;
    msg.reference.set(tmp_msg_0);
    msg.state = 229U;
    msg.proximity = 84U;

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
    msg.setTimeStamp(0.103209367893);
    msg.setSource(46535U);
    msg.setSourceEntity(221U);
    msg.setDestination(26173U);
    msg.setDestinationEntity(22U);
    msg.ax_cmd = 0.42232619652;
    msg.ay_cmd = 0.975923974132;
    msg.az_cmd = 0.981463245137;
    msg.ax_des = 0.760088747967;
    msg.ay_des = 0.653548958529;
    msg.az_des = 0.804367013377;
    msg.virt_err_x = 0.798710826826;
    msg.virt_err_y = 0.971511101817;
    msg.virt_err_z = 0.839895504656;
    msg.surf_fdbk_x = 0.201026165314;
    msg.surf_fdbk_y = 0.647999898328;
    msg.surf_fdbk_z = 0.612602716944;
    msg.surf_unkn_x = 0.920670522461;
    msg.surf_unkn_y = 0.397137579452;
    msg.surf_unkn_z = 0.12402971649;
    msg.ss_x = 0.484215949507;
    msg.ss_y = 0.561155427898;
    msg.ss_z = 0.855311098552;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("GUPXTTRBVCFKDOSNDRHRDGVYYKJLVBEWVJGBXTCBXHUUNJPXRKGTTCFJILQULCQAPIXOIFMMEXBODLTKWIKNMYMFZLHENHEODFAZUCTYJSCZXRVYGWGBYMWUAVZLQSPSBVUVXQNNZSPQMIOLBJZKQCSJWCSGQGQREPRGFLSNKOZEQWEECYQTOAYBSULCIOJHJXBP");
    tmp_msg_0.dist = 0.0602288666188;
    tmp_msg_0.err = 0.633249407558;
    tmp_msg_0.ctrl_imp = 0.501109987024;
    tmp_msg_0.rel_dir_x = 0.575833883;
    tmp_msg_0.rel_dir_y = 0.280796143947;
    tmp_msg_0.rel_dir_z = 0.603707747322;
    tmp_msg_0.err_x = 0.826100326245;
    tmp_msg_0.err_y = 0.135991088282;
    tmp_msg_0.err_z = 0.000684855501857;
    tmp_msg_0.rf_err_x = 0.135290696178;
    tmp_msg_0.rf_err_y = 0.397547150504;
    tmp_msg_0.rf_err_z = 0.875288720844;
    tmp_msg_0.rf_err_vx = 0.772616614943;
    tmp_msg_0.rf_err_vy = 0.142664674936;
    tmp_msg_0.rf_err_vz = 0.81823601105;
    tmp_msg_0.ss_x = 0.101795818565;
    tmp_msg_0.ss_y = 0.865958001191;
    tmp_msg_0.ss_z = 0.215570056908;
    tmp_msg_0.virt_err_x = 0.304269114019;
    tmp_msg_0.virt_err_y = 0.682448439558;
    tmp_msg_0.virt_err_z = 0.0694919544088;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.803937171927);
    msg.setSource(44614U);
    msg.setSourceEntity(244U);
    msg.setDestination(28672U);
    msg.setDestinationEntity(139U);
    msg.ax_cmd = 0.482432583017;
    msg.ay_cmd = 0.471217325456;
    msg.az_cmd = 0.930207438604;
    msg.ax_des = 0.178103638984;
    msg.ay_des = 0.0383511971589;
    msg.az_des = 0.290629025574;
    msg.virt_err_x = 0.458260490245;
    msg.virt_err_y = 0.960246642245;
    msg.virt_err_z = 0.683389761227;
    msg.surf_fdbk_x = 0.734558144948;
    msg.surf_fdbk_y = 0.339770994942;
    msg.surf_fdbk_z = 0.923387834043;
    msg.surf_unkn_x = 0.610906035764;
    msg.surf_unkn_y = 0.915985846303;
    msg.surf_unkn_z = 0.442124177189;
    msg.ss_x = 0.635496851;
    msg.ss_y = 0.596638329629;
    msg.ss_z = 0.285366384412;

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
    msg.setTimeStamp(0.370320389314);
    msg.setSource(3550U);
    msg.setSourceEntity(244U);
    msg.setDestination(63677U);
    msg.setDestinationEntity(74U);
    msg.ax_cmd = 0.338001286555;
    msg.ay_cmd = 0.168307065286;
    msg.az_cmd = 0.174542754325;
    msg.ax_des = 0.119667535761;
    msg.ay_des = 0.294169161459;
    msg.az_des = 0.65694243814;
    msg.virt_err_x = 0.898190272646;
    msg.virt_err_y = 0.802491801383;
    msg.virt_err_z = 0.316927860811;
    msg.surf_fdbk_x = 0.407702357303;
    msg.surf_fdbk_y = 0.281773182752;
    msg.surf_fdbk_z = 0.770361140194;
    msg.surf_unkn_x = 0.679123754365;
    msg.surf_unkn_y = 0.21820110611;
    msg.surf_unkn_z = 0.545757319989;
    msg.ss_x = 0.802410540382;
    msg.ss_y = 0.87735493782;
    msg.ss_z = 0.470896696093;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("XFQHHVIYZRUAHVNENYHTPKSILEXQ");
    tmp_msg_0.dist = 0.295418780241;
    tmp_msg_0.err = 0.130747129139;
    tmp_msg_0.ctrl_imp = 0.680062760486;
    tmp_msg_0.rel_dir_x = 0.373956506959;
    tmp_msg_0.rel_dir_y = 0.824932287679;
    tmp_msg_0.rel_dir_z = 0.0709243708823;
    tmp_msg_0.err_x = 0.578879339949;
    tmp_msg_0.err_y = 0.499010017417;
    tmp_msg_0.err_z = 0.333125928097;
    tmp_msg_0.rf_err_x = 0.527920877968;
    tmp_msg_0.rf_err_y = 0.405051848144;
    tmp_msg_0.rf_err_z = 0.0770967543621;
    tmp_msg_0.rf_err_vx = 0.773202665276;
    tmp_msg_0.rf_err_vy = 0.760502496698;
    tmp_msg_0.rf_err_vz = 0.425079092262;
    tmp_msg_0.ss_x = 0.0800318540729;
    tmp_msg_0.ss_y = 0.429871877996;
    tmp_msg_0.ss_z = 0.138110012511;
    tmp_msg_0.virt_err_x = 0.807201441313;
    tmp_msg_0.virt_err_y = 0.158767315861;
    tmp_msg_0.virt_err_z = 0.912850139634;
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
    msg.setTimeStamp(0.138700553121);
    msg.setSource(13703U);
    msg.setSourceEntity(215U);
    msg.setDestination(43566U);
    msg.setDestinationEntity(147U);
    msg.s_id.assign("TREXMOUGSAZPKVBGAXCZBSQCEZTVAUJDRXOUYUBIRHEYOTMQDXZWLNXCCVFQYGYZWIUDCHKFAYFMNSVPOSKDWKELJBHPJQLQVYJIGQWRAFZHNJBJQPILHDFCGVQUVWAULLNDIPRKGUFYACDMRLWWJUCPTIMNBP");
    msg.dist = 0.737971204102;
    msg.err = 0.862577269085;
    msg.ctrl_imp = 0.372280465138;
    msg.rel_dir_x = 0.535174770425;
    msg.rel_dir_y = 0.964716477648;
    msg.rel_dir_z = 0.803605809952;
    msg.err_x = 0.105771081115;
    msg.err_y = 0.358234499696;
    msg.err_z = 0.160350149461;
    msg.rf_err_x = 0.234061050141;
    msg.rf_err_y = 0.607743529184;
    msg.rf_err_z = 0.982818834254;
    msg.rf_err_vx = 0.829399223143;
    msg.rf_err_vy = 0.399824314226;
    msg.rf_err_vz = 0.861839195554;
    msg.ss_x = 0.437931573572;
    msg.ss_y = 0.934140517849;
    msg.ss_z = 0.625107998781;
    msg.virt_err_x = 0.479896474199;
    msg.virt_err_y = 0.4873240464;
    msg.virt_err_z = 0.190176853068;

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
    msg.setTimeStamp(0.588868001172);
    msg.setSource(27193U);
    msg.setSourceEntity(142U);
    msg.setDestination(44980U);
    msg.setDestinationEntity(17U);
    msg.s_id.assign("UDPSELZGRFNBYZDHLINTSIKWMOIZJXTVXPGOGOHFCWZJYVHWMRNKVARRJUXZGYYVUIKQJPARWJCZAQXQUGHUHPYSVJLWQTOIEEEFMNTFNHIEFKICPUNQXKGIASDARP");
    msg.dist = 0.950433541648;
    msg.err = 0.628026086756;
    msg.ctrl_imp = 0.164253133258;
    msg.rel_dir_x = 0.794900955924;
    msg.rel_dir_y = 0.238921402011;
    msg.rel_dir_z = 0.711937054951;
    msg.err_x = 0.158968059156;
    msg.err_y = 0.814134849628;
    msg.err_z = 0.121440717767;
    msg.rf_err_x = 0.122815391447;
    msg.rf_err_y = 0.236427347692;
    msg.rf_err_z = 0.0635797818361;
    msg.rf_err_vx = 0.435908538273;
    msg.rf_err_vy = 0.303702838857;
    msg.rf_err_vz = 0.989349409952;
    msg.ss_x = 0.271163756009;
    msg.ss_y = 0.707229781943;
    msg.ss_z = 0.612697407441;
    msg.virt_err_x = 0.543364263783;
    msg.virt_err_y = 0.42983229945;
    msg.virt_err_z = 0.918216476232;

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
    msg.setTimeStamp(0.986679211173);
    msg.setSource(9386U);
    msg.setSourceEntity(203U);
    msg.setDestination(2554U);
    msg.setDestinationEntity(108U);
    msg.s_id.assign("SPNSPIQZJYRPUJAUGGLVCZAHJOAQXEJORKXMWFFMUUSPWMEXDIZNFYYBAQDMQEAKBOEHIRLVDPCLWZURFXVVIMIGJSAYINFTSNWRMZVVEZHTEKPOTXSTKPFBHOETLWJPEMHDZICRNCTONFTVBXTSGJJFLORWCFMYUKDHBYVKXVLHHPKCUAURCNQWGJOXXAIFBSYBINEAMHKRIGBXHBWLTNDQRCSSKGMYYZYDKGTQOQOLQLNPJWCUEB");
    msg.dist = 0.279077912725;
    msg.err = 0.896824929288;
    msg.ctrl_imp = 0.8063188111;
    msg.rel_dir_x = 0.314787038622;
    msg.rel_dir_y = 0.610790026487;
    msg.rel_dir_z = 0.95437839749;
    msg.err_x = 0.603442981745;
    msg.err_y = 0.994199267575;
    msg.err_z = 0.863979862477;
    msg.rf_err_x = 0.817904017358;
    msg.rf_err_y = 0.791902074485;
    msg.rf_err_z = 0.0928919863642;
    msg.rf_err_vx = 0.427816215881;
    msg.rf_err_vy = 0.11660494922;
    msg.rf_err_vz = 0.346297976499;
    msg.ss_x = 0.13692268043;
    msg.ss_y = 0.684915836665;
    msg.ss_z = 0.307727700897;
    msg.virt_err_x = 0.681477920785;
    msg.virt_err_y = 0.00105477107942;
    msg.virt_err_z = 0.894183255795;

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
    msg.setTimeStamp(0.798338152704);
    msg.setSource(25457U);
    msg.setSourceEntity(191U);
    msg.setDestination(40373U);
    msg.setDestinationEntity(145U);
    msg.timeout = 12981U;
    msg.rpm = 0.91958653151;
    msg.direction = 27U;
    msg.custom.assign("UPPXNQFGEYOCXCBUQNZFPRNRZXDPTXZCRJKXVAIDQWUDKRPXQMWKZWP");

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
    msg.setTimeStamp(0.518501682474);
    msg.setSource(4322U);
    msg.setSourceEntity(254U);
    msg.setDestination(28985U);
    msg.setDestinationEntity(118U);
    msg.timeout = 28005U;
    msg.rpm = 0.61018899932;
    msg.direction = 72U;
    msg.custom.assign("FRUIJBXSZMTFDZGDYTBXPBIDMOUIAPPFVLICQUXKAXHECKVYHOTABKYEWWUCWSRLVGWELBFNVRAINUYZEVFKOSQJJWIWGUBCXYOBHXLMCXIHZEVKVNTNDFRUTBOLGTZOLYDFRZYFCPWDJGEGTYTQOMORSEACRXTANYANNZKQSUFVCJXZCJQMULIONUFRYPJNSWCQDHHDMPG");

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
    msg.setTimeStamp(0.368791671647);
    msg.setSource(63815U);
    msg.setSourceEntity(139U);
    msg.setDestination(43108U);
    msg.setDestinationEntity(58U);
    msg.timeout = 38999U;
    msg.rpm = 0.633791052481;
    msg.direction = 23U;
    msg.custom.assign("JERBPKRDLNECLTYMLZKHUZQDTIBIUJIXZXUBR");

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
    msg.setTimeStamp(0.668513922771);
    msg.setSource(65007U);
    msg.setSourceEntity(55U);
    msg.setDestination(24113U);
    msg.setDestinationEntity(240U);
    msg.formation_name.assign("IXKAFWGRYKGBBWIMIXZNAVCQEFLYRMANZOUQIDOTQDVLSKOWRTAOYRXZDARIBEDPSLKWBLEXAHTOHGTZUBOEHYPRWAYWBZUNQZEIUJNYSEJZOKGCGGIFJIUKVFLYPSOQ");
    msg.type = 38U;
    msg.op = 114U;
    msg.group_name.assign("ZFAMJFBSBHCCYSCVQGAPCYEDSAZZLHQEEOYUXYNVLOGIHJLAWMBZQUPMHJDSEFUOLPOBEBTJKWQDMAZSYLHQZRZYXUZWQTBWVPPBEARQWYXNSHVTJRVOJPLKLU");
    msg.plan_id.assign("GZTGWXOVLXLLONCMAJNKWEWTLCQBDVAAIOYOQVQAWSSOFHQIODRZGVDYBWYLCCWPYMFSZHFUBYHGREYPWNJUHBNNGVADEQJRKFIOHKUMLOWDSCEQBZEDKCNYGFGMJINVSFKZRBGBGPU");
    msg.description.assign("MJVGFFMBMSXKPEFNFJLCVWANVWUVAAZFNWKMFLXNMKEARSFGITXRHKEPSTSYXEIOCRDDNYODMCTKBNUK");
    msg.reference_frame = 198U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64968U;
    tmp_msg_0.off_x = 0.980052445717;
    tmp_msg_0.off_y = 0.194251764994;
    tmp_msg_0.off_z = 0.99656977018;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.634273389795;
    msg.leader_speed_min = 0.271511696875;
    msg.leader_speed_max = 0.554280515454;
    msg.leader_alt_min = 0.0717826391275;
    msg.leader_alt_max = 0.285039904188;
    msg.pos_sim_err_lim = 0.848585401573;
    msg.pos_sim_err_wrn = 0.885832604973;
    msg.pos_sim_err_timeout = 21744U;
    msg.converg_max = 0.512371599679;
    msg.converg_timeout = 53103U;
    msg.comms_timeout = 26025U;
    msg.turb_lim = 0.791582105911;
    msg.custom.assign("CUYVTRHPUNQZIFRIOJRCGNYUCTWJUKLKSUWFAETAMZQWLTOCEFIZSVSQTFTVQQPESNIZPDUDGVKBXKRBVDFBLYHZYHBIGVNKOBYCQMIFBHAXJQNXSCIHAIWCKKAKRMACBEJLXHPYZJPMLMERPNOVLY");

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
    msg.setTimeStamp(0.169867280644);
    msg.setSource(10845U);
    msg.setSourceEntity(141U);
    msg.setDestination(14855U);
    msg.setDestinationEntity(73U);
    msg.formation_name.assign("SIDPJUKNGSZDYXCUFOERFLZLHIPSTNPZNYLESQHPFHKAVYHSDEWXVTCPVABCKJOAWNSXNUMAHBMISTFPHYSFOQTIOQEMECATGKFJGRGECLMIGQEXRVJEXDWVOVDNGYLLBMWHBRDATUIMKZUPUUOKHIWNYWNYQIRLIHNMZQENGYFLGRXZMSQJKYBBMFCJRGVMDWQTDTZAVYKOFHIARDTQXWZJWTBLRCVOZBJOJSXDPKCVQUPXJACPOKBULBZF");
    msg.type = 49U;
    msg.op = 254U;
    msg.group_name.assign("XTFKAMWNNIKCWJNPYVHXJOQHJNCWWHTQVGYZHIEQQRADXMRIGBMKSEILNTGGGPVXDEDGVICRPLKNNYXPBHDTQABSJRVTHOPYEVVTNLPZTDXELYFFMPZJIWOHKCVFGWJAOKZSYLWELMJCHGYPFCENMXSQFWCYUROPRBBOJSAAFZKMWUESYYRVLTIGHZZBBLRBODHCKSVKARDBUDALAXAUDISZCPQQLOUMFEFOTIXBDUUIKUMG");
    msg.plan_id.assign("NYIARTAIUERFKOMNAHCOJBUSIAJZQSDIWQYODFALGGWYZEHNAALHGTYPHKTHWNNMYTGDIWGSDMJCMPOAMSJBRSWZKEBDPWWTPYKBGCDOVUSVCMCLN");
    msg.description.assign("CJVWIALIURPXUSLRSVTQWZBZBAPECIGEJWUWCANLGKTIAFUWQVGBXKJSGEHJESPNHFDMKLHHFOBSCLQPIPZQBQYFNQQSDDCMAFZEBURMLODXFVTPVVKLZKIUIBJJVSO");
    msg.reference_frame = 82U;
    msg.leader_bank_lim = 0.846254461787;
    msg.leader_speed_min = 0.936649581629;
    msg.leader_speed_max = 0.834492869866;
    msg.leader_alt_min = 0.455007038972;
    msg.leader_alt_max = 0.888608883177;
    msg.pos_sim_err_lim = 0.155125327837;
    msg.pos_sim_err_wrn = 0.0399268296493;
    msg.pos_sim_err_timeout = 50545U;
    msg.converg_max = 0.325994445873;
    msg.converg_timeout = 61089U;
    msg.comms_timeout = 53022U;
    msg.turb_lim = 0.265643393447;
    msg.custom.assign("DADTPYDVQNGOGLGFHIEFQPWQDLMZEFXHNFBGQTICGBKICJLYGWNE");

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
    msg.setTimeStamp(0.316868718603);
    msg.setSource(35951U);
    msg.setSourceEntity(108U);
    msg.setDestination(47445U);
    msg.setDestinationEntity(135U);
    msg.formation_name.assign("TPQTXLLXXVYSOMHRRDEQIUUPLGTMQMOJXEZZRYYDNZFBTCDSIGGGPQFLCCMMNWJKVUSUNOHZOTPVKNGQBIOFTXRPSMWASSPFLATAHYQUREGDHKGZICQEDWAAXRDJHACCVJAPKWBQFHFEJTYGCRISOQMCMMHXAVVZRVNTDKAXDWLLSGJZZBOCOVY");
    msg.type = 73U;
    msg.op = 151U;
    msg.group_name.assign("NIEMMJKPVQTURDVSNZXOTWLCJSJHSMQYCFJSKKTFJPJRKEUIYZNCIMMZXGRPZEHBHWXGEUXBBDNBADFFVIAT");
    msg.plan_id.assign("YLMSBIXNWLAKQPUHJRTVJFZXJVQXZLBGNSA");
    msg.description.assign("JMZZCPVUNGNAQTXIRLNOKCDPTTAKUHHOOBMHWGYJFSFLKGRWYTZIALAAKZZEBTWOPMFAIJBWBDHPJACURDPWLRYHJLEXWXEZODIPSXAMIYFIRLIKJIOGCTQWYVMSXJSTFPFGDJUDYAYBFWKNCFSEYTBAKYDXBBQNQGOSEENNDFWXHCYIBCGHVLVUZRLHTQEVQECMUUFEUXSDKBXN");
    msg.reference_frame = 159U;
    msg.leader_bank_lim = 0.359873121591;
    msg.leader_speed_min = 0.849854870037;
    msg.leader_speed_max = 0.612609537312;
    msg.leader_alt_min = 0.373608701439;
    msg.leader_alt_max = 0.728584806462;
    msg.pos_sim_err_lim = 0.681435893153;
    msg.pos_sim_err_wrn = 0.795630763202;
    msg.pos_sim_err_timeout = 51387U;
    msg.converg_max = 0.338079349416;
    msg.converg_timeout = 13218U;
    msg.comms_timeout = 38615U;
    msg.turb_lim = 0.683885575723;
    msg.custom.assign("UCBZTERCNYWTRGHIPBUFVFFJQCGUKTYRQDXADEXIBAKOAOBTVJLUPMIJZAWIRFZXCHAJFGGWSLXZNPAY");

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
    msg.setTimeStamp(0.702497674612);
    msg.setSource(49386U);
    msg.setSourceEntity(121U);
    msg.setDestination(27938U);
    msg.setDestinationEntity(0U);
    msg.timeout = 7705U;
    msg.lat = 0.318567886075;
    msg.lon = 0.619028719132;
    msg.z = 0.0215692204469;
    msg.z_units = 110U;
    msg.speed = 0.779005039625;
    msg.speed_units = 108U;
    msg.custom.assign("BEKYZTFBVLXFIWDCNVLBSJVAEGJNBJREHUCOHDQTZFECVIHNCXYIXZYEHPXTYSQKXJHENQFAFPAIUDQGSACPZZABMIROHVXUOKATBOVMDUIRWNTQYNRLCORBPQKUQAAYHPDPKOFWLJUZWFIPVIWGMJCFQJWPSOKBCPZDGSLIMHUYTNWXIATMOMRRJSGWFKENEXUKJLQGJLHREUZSTRXSOYVKDNVEMDTLNBSCRGAW");

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
    msg.setTimeStamp(0.770470809051);
    msg.setSource(19555U);
    msg.setSourceEntity(55U);
    msg.setDestination(14394U);
    msg.setDestinationEntity(71U);
    msg.timeout = 31848U;
    msg.lat = 0.269387923887;
    msg.lon = 0.913138359939;
    msg.z = 0.361550981394;
    msg.z_units = 146U;
    msg.speed = 0.259438767287;
    msg.speed_units = 61U;
    msg.custom.assign("JOUJGGBMOVTKQNNXMZHZNKNOODSEZGYPAGJCGTKVTKWDIMIGVYWBAVDZXPTSVAJEOABQTHQRMHNJYMFMWMXLYERSLAF");

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
    msg.setTimeStamp(0.147188735945);
    msg.setSource(30832U);
    msg.setSourceEntity(13U);
    msg.setDestination(10885U);
    msg.setDestinationEntity(217U);
    msg.timeout = 44993U;
    msg.lat = 0.87419204243;
    msg.lon = 0.225571357765;
    msg.z = 0.800376022564;
    msg.z_units = 23U;
    msg.speed = 0.0164216423372;
    msg.speed_units = 86U;
    msg.custom.assign("OCRWHVTAQNXFBQRLZSZNZSPJNMUTONALGERWUHWSDJMZPHNILCMKGEAUGTEAWGUDCUJYDKYVFZXQEVREGJLPAMJPBVFBSPUZSYBIFXIJJXFQSTCAWRWEKBYVXGOFIQLKLLTORDHNOTVAUGGZTWXYQMIAIBIDCKYMWBVEXNCIYGYAXMIDRDQVCBWHKUPJOUMVSDFDDMZLZHCHHQYMSFAOPWOSJSKTOXNPFYLRTRQPLXKJNTZVEUIKBRCFBH");

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
    msg.setTimeStamp(0.338908619943);
    msg.setSource(63625U);
    msg.setSourceEntity(154U);
    msg.setDestination(53642U);
    msg.setDestinationEntity(167U);
    msg.timeout = 1432U;
    msg.lat = 0.850937769468;
    msg.lon = 0.467277874755;
    msg.z = 0.783208867369;
    msg.z_units = 93U;
    msg.speed = 0.0710171114668;
    msg.speed_units = 243U;
    msg.custom.assign("TSNYHMDASZFZKMEIQARBXJOECNEGBRHXUEDMJUZANPBGTJVYXZZZPCYBNXAYBXWYRGKOHNUWPOWVRWLTBSTBJPAKAICEYNVVLQRSUYVA");

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
    msg.setTimeStamp(0.697534228031);
    msg.setSource(2578U);
    msg.setSourceEntity(127U);
    msg.setDestination(58902U);
    msg.setDestinationEntity(173U);
    msg.timeout = 17918U;
    msg.lat = 0.0279251399361;
    msg.lon = 0.103551240456;
    msg.z = 0.269927781865;
    msg.z_units = 4U;
    msg.speed = 0.953896377157;
    msg.speed_units = 188U;
    msg.custom.assign("SIBAPJGDQLCXPLVM");

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
    msg.setTimeStamp(0.187069747537);
    msg.setSource(59025U);
    msg.setSourceEntity(28U);
    msg.setDestination(44039U);
    msg.setDestinationEntity(47U);
    msg.timeout = 42156U;
    msg.lat = 0.289571346643;
    msg.lon = 0.132004398082;
    msg.z = 0.549753919036;
    msg.z_units = 86U;
    msg.speed = 0.33333369118;
    msg.speed_units = 130U;
    msg.custom.assign("YFKJDIVRCDRANFUZDX");

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
    msg.setTimeStamp(0.423614138434);
    msg.setSource(40620U);
    msg.setSourceEntity(19U);
    msg.setDestination(41241U);
    msg.setDestinationEntity(133U);
    msg.arrival_time = 0.259640138778;
    msg.lat = 0.187149702594;
    msg.lon = 0.0797682003465;
    msg.z = 0.00308160983248;
    msg.z_units = 252U;
    msg.travel_z = 0.427256576449;
    msg.travel_z_units = 49U;
    msg.delayed = 102U;

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
    msg.setTimeStamp(0.0111284219274);
    msg.setSource(45990U);
    msg.setSourceEntity(141U);
    msg.setDestination(51015U);
    msg.setDestinationEntity(0U);
    msg.arrival_time = 0.803004624048;
    msg.lat = 0.79235823835;
    msg.lon = 0.560160480198;
    msg.z = 0.376798435112;
    msg.z_units = 139U;
    msg.travel_z = 0.270469887147;
    msg.travel_z_units = 122U;
    msg.delayed = 224U;

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
    msg.setTimeStamp(0.737345692897);
    msg.setSource(18345U);
    msg.setSourceEntity(23U);
    msg.setDestination(54338U);
    msg.setDestinationEntity(90U);
    msg.arrival_time = 0.544436237975;
    msg.lat = 0.395421833047;
    msg.lon = 0.856761682876;
    msg.z = 0.0565459576182;
    msg.z_units = 241U;
    msg.travel_z = 0.0558031350434;
    msg.travel_z_units = 147U;
    msg.delayed = 35U;

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
    msg.setTimeStamp(0.755170451356);
    msg.setSource(32658U);
    msg.setSourceEntity(188U);
    msg.setDestination(59586U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.112379883266;
    msg.lon = 0.846006077835;
    msg.z = 0.0848683997108;
    msg.z_units = 32U;
    msg.speed = 0.977796559292;
    msg.speed_units = 197U;
    msg.bearing = 0.751478651449;
    msg.cross_angle = 0.96834944982;
    msg.width = 0.0179123944105;
    msg.length = 0.961243496934;
    msg.coff = 213U;
    msg.angaperture = 0.511769688296;
    msg.range = 26896U;
    msg.overlap = 89U;
    msg.flags = 220U;
    msg.custom.assign("YGSLSITPLVYCRTVCPRMJCKPUEUYVJUKATHOZIJWWHJHCEGNFRSFTJBDIHRISXVBACYPASZQDMZHOUWAHAFJXNBENUTUFOQOMPMLRKFBWWZEEYVOHLMBHXMDDPSOKYKRGLNBWSYVCUIQDGZAZATIFNWLDKBHAQIXXXXRFGFKV");

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
    msg.setTimeStamp(0.135980335092);
    msg.setSource(11564U);
    msg.setSourceEntity(64U);
    msg.setDestination(40807U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.651573951715;
    msg.lon = 0.215911641359;
    msg.z = 0.2106200675;
    msg.z_units = 200U;
    msg.speed = 0.109510087136;
    msg.speed_units = 253U;
    msg.bearing = 0.958459718558;
    msg.cross_angle = 0.638130376749;
    msg.width = 0.818865843752;
    msg.length = 0.464233840662;
    msg.coff = 31U;
    msg.angaperture = 0.824086527076;
    msg.range = 55455U;
    msg.overlap = 85U;
    msg.flags = 20U;
    msg.custom.assign("WCSHIBPKSUNGKQZZRQMFTPTNFHOJIBLCVPDAZTPKPL");

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
    msg.setTimeStamp(0.406385115692);
    msg.setSource(9257U);
    msg.setSourceEntity(153U);
    msg.setDestination(21015U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.50993375869;
    msg.lon = 0.944390360707;
    msg.z = 0.777321783374;
    msg.z_units = 176U;
    msg.speed = 0.423849034848;
    msg.speed_units = 74U;
    msg.bearing = 0.523186330076;
    msg.cross_angle = 0.425132452061;
    msg.width = 0.906667038321;
    msg.length = 0.607879209259;
    msg.coff = 205U;
    msg.angaperture = 0.0404573016394;
    msg.range = 29333U;
    msg.overlap = 46U;
    msg.flags = 95U;
    msg.custom.assign("FHFTDKRVURDKSXJKSFANZWUMSHXOOGK");

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
    msg.setTimeStamp(0.818168474143);
    msg.setSource(11391U);
    msg.setSourceEntity(239U);
    msg.setDestination(8168U);
    msg.setDestinationEntity(35U);
    msg.timeout = 58384U;
    msg.lat = 0.831054648646;
    msg.lon = 0.479059435303;
    msg.z = 0.401275516755;
    msg.z_units = 195U;
    msg.speed = 0.986692431717;
    msg.speed_units = 241U;
    msg.syringe0 = 225U;
    msg.syringe1 = 43U;
    msg.syringe2 = 109U;
    msg.custom.assign("ZDTOVAMFXOMCVGXKRIGYUXKLLRHQLIZEOWJQUQOVOWTZUESFYEXNMPJCLQRGZLPTDKCAMJZPRWXZVRPWXZBYDYPNVADTRLCTMIEOSFOVZBESUJVHNSGEAKDUBMGAJPDYXBBEXQQCMPGIANRUQGHBKGDQWKXFNJKTFYTSHUHS");

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
    msg.setTimeStamp(0.0358948794806);
    msg.setSource(29449U);
    msg.setSourceEntity(30U);
    msg.setDestination(5188U);
    msg.setDestinationEntity(30U);
    msg.timeout = 21684U;
    msg.lat = 0.121160132652;
    msg.lon = 0.653864044093;
    msg.z = 0.842425848453;
    msg.z_units = 94U;
    msg.speed = 0.510834372036;
    msg.speed_units = 5U;
    msg.syringe0 = 236U;
    msg.syringe1 = 70U;
    msg.syringe2 = 233U;
    msg.custom.assign("QORZELBKUOCJBYKPRDNGBOQRGERCSFRVPMSXISMZXULTFEZTEOBUEOBKNVPJERFMBLFZMGUCHNMOZTIDSHQDGRJOINWKCYLJXHVVKFGQIWLXMPIAKTTOMHZCSWLNTDDZDQPGFAYHLOZPWWUBKPIXCQJNYYDASSCKTQYEVNLYBRPTHJNMGLJXHINERAYAPWPCJAAIVOBQJBYFXFDVZKUXHKTUQIWUVNEZTECVAXMSDYULHXMSHWCWAUAWQVIRGJ");

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
    msg.setTimeStamp(0.832202387668);
    msg.setSource(37398U);
    msg.setSourceEntity(182U);
    msg.setDestination(23472U);
    msg.setDestinationEntity(160U);
    msg.timeout = 711U;
    msg.lat = 0.35958552458;
    msg.lon = 0.442090427444;
    msg.z = 0.275119250231;
    msg.z_units = 12U;
    msg.speed = 0.602788099653;
    msg.speed_units = 182U;
    msg.syringe0 = 122U;
    msg.syringe1 = 202U;
    msg.syringe2 = 129U;
    msg.custom.assign("KSASVTMOUDEGZVKPHQBBWKHIULESHENWXNDVZGCMUOIMPIOOAMUICXORRCTEVDITXHXYECQASNMDWEMRMJSNZPJWPKYIWYVMRXVIXFROSFNVNJURBFZEUYFSHTBNDGOSMGKVJGQRQBNZUFLTRCKGLLWXLPTGLQOAC");

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
    msg.setTimeStamp(0.739794602198);
    msg.setSource(47510U);
    msg.setSourceEntity(39U);
    msg.setDestination(8165U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.926341875747);
    msg.setSource(58538U);
    msg.setSourceEntity(213U);
    msg.setDestination(50941U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.768118032013);
    msg.setSource(52020U);
    msg.setSourceEntity(113U);
    msg.setDestination(37921U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.68229686209);
    msg.setSource(44918U);
    msg.setSourceEntity(111U);
    msg.setDestination(7314U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.0834280216574;
    msg.lon = 0.832760878481;
    msg.z = 0.500448628171;
    msg.z_units = 3U;
    msg.speed = 0.70537745362;
    msg.speed_units = 229U;
    msg.takeoff_pitch = 0.66043055104;
    msg.custom.assign("HTHYAGBWYPIGJYBIBSSPLMMIRACIHWZFKUXSJTWMFCEFODQFPZQPBSRZVTLJQUREFWXAIGCQGCBRADX");

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
    msg.setTimeStamp(0.17679286156);
    msg.setSource(10782U);
    msg.setSourceEntity(141U);
    msg.setDestination(17286U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.362221396183;
    msg.lon = 0.0290890512183;
    msg.z = 0.975551860439;
    msg.z_units = 101U;
    msg.speed = 0.34712054203;
    msg.speed_units = 163U;
    msg.takeoff_pitch = 0.77057855367;
    msg.custom.assign("GJUVRQRIVIYKFSAEGMSFFLDUGHKKSJXJPZP");

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
    msg.setTimeStamp(0.652076996062);
    msg.setSource(15996U);
    msg.setSourceEntity(41U);
    msg.setDestination(4652U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.452722304059;
    msg.lon = 0.388187890695;
    msg.z = 0.782985803612;
    msg.z_units = 141U;
    msg.speed = 0.297880511761;
    msg.speed_units = 122U;
    msg.takeoff_pitch = 0.802835393817;
    msg.custom.assign("OOFCKEYLWKVXKXFIZHIDSCPFRUDCCLGGHYNE");

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
    msg.setTimeStamp(0.409533391932);
    msg.setSource(3983U);
    msg.setSourceEntity(254U);
    msg.setDestination(690U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.747585860884;
    msg.lon = 0.987439971343;
    msg.z = 0.206975667007;
    msg.z_units = 119U;
    msg.speed = 0.905602326908;
    msg.speed_units = 224U;
    msg.abort_z = 0.0882636373929;
    msg.bearing = 0.942329669358;
    msg.glide_slope = 233U;
    msg.glide_slope_alt = 0.420497677645;
    msg.custom.assign("YBTPIRYRCXYUQUCQHYHGVREKHUPQPEISPZITMNRKDMLQAUHMZGMKNHBHYQAOPTNLDKXFWLSGJIMDHFJFLWORWAZTVZOAGPZUCLMKYAFGGBVDUXNJETSZMVRJSUIZKTICROHGWNAAESYFCUDDOCYDHPQY");

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
    msg.setTimeStamp(0.544232891022);
    msg.setSource(58886U);
    msg.setSourceEntity(220U);
    msg.setDestination(65308U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.718695811499;
    msg.lon = 0.98226957014;
    msg.z = 0.961745736915;
    msg.z_units = 45U;
    msg.speed = 0.303845326285;
    msg.speed_units = 227U;
    msg.abort_z = 0.342864435965;
    msg.bearing = 0.648506806019;
    msg.glide_slope = 156U;
    msg.glide_slope_alt = 0.110949466492;
    msg.custom.assign("JVLTROHLBJJICHMSWYQGVOIBAEJPTCMNNFFBNLCQSLZTJZUXAAHXBIYHXTVCAFCRENCMYPKIHVWFWBRYIZSMPGYQILQLCPPHDDZOWUAHTAKJSEBRMPIRSBIJDWONNFKDGOJNYSYMZVRMSRGJNXRAKLGXDDFKORQTZETBZTKWQGMXGHINDDLPAEOOWUVYHURNQDVVTCVC");

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
    msg.setTimeStamp(0.0367330534825);
    msg.setSource(24654U);
    msg.setSourceEntity(236U);
    msg.setDestination(19309U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.569620665997;
    msg.lon = 0.189146071982;
    msg.z = 0.436810663166;
    msg.z_units = 96U;
    msg.speed = 0.227461735995;
    msg.speed_units = 121U;
    msg.abort_z = 0.887110610743;
    msg.bearing = 0.564419810946;
    msg.glide_slope = 239U;
    msg.glide_slope_alt = 0.751181334815;
    msg.custom.assign("QWYPGADVDUOFOWKAOLZWTUUCNGLDQKCMTJRTUQHAMOOGNHHLXSSORJXNMLGZFTBODSPDNBQSXWJNZGSIHIHROTFPFKRGUVUZHELCEJLIZPPTEIQCFCIQYFXFCOYLFZWCZDABNKBQXVHWRFKWGLRNKBOYMCPMHIXTRVBYTVMRYEYKAZ");

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
    msg.setTimeStamp(0.139273718157);
    msg.setSource(54031U);
    msg.setSourceEntity(115U);
    msg.setDestination(18044U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.166135755566;
    msg.lon = 0.793384392225;
    msg.speed = 0.960995467561;
    msg.speed_units = 121U;
    msg.limits = 102U;
    msg.max_depth = 0.920147132261;
    msg.min_alt = 0.439961656789;
    msg.time_limit = 0.771040650981;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.577019647729;
    tmp_msg_0.lon = 0.106081750285;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("TFTHKPIQTISSFZPJWWOAVXNMZEAFJMUXPVFXPNBTAKIGXEDRAESRMRCPDJSJABCTWUBMNMWSULXCLDYXAOVUZKHTLBWIUTSVGHOFRXYGFLLARJEYCQAJBQHGFCQUEJHLVNOULFBMTDNYTVGWOSMDNDFKPRGQGYBCN");
    msg.custom.assign("CJCUNDJRSIOZERLPHKEMMNXQJRAJBDCINCVQGERHH");

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
    msg.setTimeStamp(0.474432857074);
    msg.setSource(40759U);
    msg.setSourceEntity(60U);
    msg.setDestination(31209U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.0661505085213;
    msg.lon = 0.651336260941;
    msg.speed = 0.627441255024;
    msg.speed_units = 102U;
    msg.limits = 143U;
    msg.max_depth = 0.639334305673;
    msg.min_alt = 0.844356220484;
    msg.time_limit = 0.292350154033;
    msg.controller.assign("KHVIBBSDZQVXOUSLMFDDSFVEZCEOALAJFJXDWDKMQQMYIXHBQJYTHRLVWHKTINYOGXABXOBNOUJKUJYNQBZNUCPFLEWSCSOZTQTIQZWYHXLMDRRRBHBHJKCARRCJCGTEDTLDSLRAQPU");
    msg.custom.assign("RPXFIMFYBKSZKMJSODTBDWJJMUWYZVABINFCVTXBUWFUWKTOVXVPXVEUBTWAMCQLRXACDPFRBPJIBRVNBNJHNYDOZSGOKMZBMXMJTCXNDJGQLHSQPAFAZSUSHMNIXHKIPVHSWYBNJZVOHGFSZLQYORNRYUUECHGPTLICTIWLVMKILUJVODRHEQAGYOZIOWQEXMYLNN");

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
    msg.setTimeStamp(0.569400078326);
    msg.setSource(8530U);
    msg.setSourceEntity(120U);
    msg.setDestination(60765U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.86117809271;
    msg.lon = 0.0757421105932;
    msg.speed = 0.782192257527;
    msg.speed_units = 26U;
    msg.limits = 56U;
    msg.max_depth = 0.419205614541;
    msg.min_alt = 0.596860405674;
    msg.time_limit = 0.381689153087;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.523532037228;
    tmp_msg_0.lon = 0.234174429571;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("RHXDZSLKFDRAVDBWONEGTJPCLWZHNBBUAUILTGEDCEDCIIXZGRQZOSSHLGGWDXKFSRRXSMACYKBMBXKHTSUEEBBJFKONJHDZFSNRQQAAUFEWGMEBCXOAQALJMHLYNIMRMOHAVZSDP");
    msg.custom.assign("MESCZFZHDTRZO");

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
    msg.setTimeStamp(0.119450578729);
    msg.setSource(32534U);
    msg.setSourceEntity(223U);
    msg.setDestination(36672U);
    msg.setDestinationEntity(179U);
    msg.target.assign("GMZHEWAHPKEPJGTWVFHJMQCJQQYXAVDFTJPHFFBLRTNGCGONZQQWOSONAYKIZIMJMJKXCDKNUSIQLEEWDLISKAHZGAPXPYTJNYFAJIZNBUVYOHOTNSRMJPXQASQEVQLDUYDTNMFYRSBECSTCOVXKGBLWXZBDXGEOILTWNIOLLUEZL");
    msg.max_speed = 0.00144239297347;
    msg.speed_units = 14U;
    msg.lat = 0.340127344438;
    msg.lon = 0.699111447029;
    msg.z = 0.378265614768;
    msg.z_units = 28U;
    msg.custom.assign("NESTTKQCKORLHUXNZQDDAWUBALVBAXPQUAGBKYRIZGIFRVH");

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
    msg.setTimeStamp(0.502833921565);
    msg.setSource(20358U);
    msg.setSourceEntity(137U);
    msg.setDestination(11010U);
    msg.setDestinationEntity(52U);
    msg.target.assign("CEVKPXTTXMORN");
    msg.max_speed = 0.85543099243;
    msg.speed_units = 230U;
    msg.lat = 0.313775215069;
    msg.lon = 0.179558730964;
    msg.z = 0.153151196977;
    msg.z_units = 126U;
    msg.custom.assign("VRNCVMHGBKJLJKZUOUSALPFKUEEQKOBIRHQNVWRAZFCBYDTPWFREZTOTRZCXLIHDDYSYFFYFQKTODHYTXGTYCZHANUKJINZNVPAYZWDFOFSMNDKQUSGIMXIVQEEXXJMROQXSXBDJUIGPIDWARGGEVKTDKQANTJPOLCJSWHOACTJBMUGSLPMVWIRRVTJMQAXPEKVWCPNHNMHY");

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
    msg.setTimeStamp(0.472166751341);
    msg.setSource(30009U);
    msg.setSourceEntity(166U);
    msg.setDestination(61816U);
    msg.setDestinationEntity(40U);
    msg.target.assign("EHTZDXCVZLIISIGBIQXFNDMFGWXZXPWSQCSVJLWZFRUONVKCHJSWOEXJEORVHCDPVWFYZYSNSFDRLLTYJTANGPKFOHLZFNPSDPBAPEVLTQYUDMZWVXBVZLNBG");
    msg.max_speed = 0.0697012638412;
    msg.speed_units = 129U;
    msg.lat = 0.371450535576;
    msg.lon = 0.803486083754;
    msg.z = 0.404387104933;
    msg.z_units = 145U;
    msg.custom.assign("CHEKMEYXPSQZZRCDVHWEUQBWWDIKTMHIIEFOHAOIYOIRZWAESGRYZTGFPBZBAUQUKOJPIRGUFDWMEBECKXLTZOUATHRGLXWNRINOLYYFJAHVKBFXTSUPVLNVWYXKUCXPBWXVUSJDBVMNGGXOLAJPKLTPSQZQRJCCVDHV");

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
    msg.setTimeStamp(0.206376063276);
    msg.setSource(54147U);
    msg.setSourceEntity(252U);
    msg.setDestination(44838U);
    msg.setDestinationEntity(251U);
    msg.timeout = 56476U;
    msg.lat = 0.523083567881;
    msg.lon = 0.0632946860151;
    msg.speed = 0.00712721088198;
    msg.speed_units = 178U;
    msg.custom.assign("GCSARWSWLEBHFYKPQZADUWPWYSLAAOVNWBSKJQAMEJTLTJUQRGXQFXDNHAUWCXYSGGIFKMJZCVVGJDBIC");

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
    msg.setTimeStamp(0.131292915459);
    msg.setSource(4610U);
    msg.setSourceEntity(158U);
    msg.setDestination(3983U);
    msg.setDestinationEntity(65U);
    msg.timeout = 55909U;
    msg.lat = 0.794862432966;
    msg.lon = 0.503781250985;
    msg.speed = 0.262357211647;
    msg.speed_units = 175U;
    msg.custom.assign("HRBYVSTZOY");

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
    msg.setTimeStamp(0.829338273865);
    msg.setSource(16827U);
    msg.setSourceEntity(106U);
    msg.setDestination(64424U);
    msg.setDestinationEntity(201U);
    msg.timeout = 19921U;
    msg.lat = 0.0550506754701;
    msg.lon = 0.998612534334;
    msg.speed = 0.0170767865466;
    msg.speed_units = 154U;
    msg.custom.assign("TMQWJXBNYHFIVDTFQWYVEXIHGCTBQSNQKNDPCJNPLPINXXBEFURBEPJAVLWYHFRRKLPIHGRAAKERUASCMVVFRYHNDIGWZFSIYXSCKGPSLHZZOYSSBUKVTWJOHSIHQZWECHVPXONAUPUUZCWMVFQAHEDMGQMABYXZZOAADKWMTOBNCMUVDCTKDQIGJLLRSMQOGJVPKTLPJALBDONQIFGTIRSBFWORTMEGEXU");

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
    msg.setTimeStamp(0.978464491887);
    msg.setSource(36125U);
    msg.setSourceEntity(193U);
    msg.setDestination(20728U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.772143201991;
    msg.lon = 0.508719848263;
    msg.z = 0.660244363929;
    msg.z_units = 162U;
    msg.radius = 0.0755473505868;
    msg.duration = 14222U;
    msg.speed = 0.369537055886;
    msg.speed_units = 61U;
    msg.popup_period = 54238U;
    msg.popup_duration = 47159U;
    msg.flags = 244U;
    msg.custom.assign("EFCPBLUZHGLAJBITPWJMTHCEXWZTNYLURPBWLAYPQOYJBLMCRRNCWTOCONHFTTHGAYAKDOEYNZGOTVLDELTNIHAUUPAGQAGQWEJHHQFXUUFKNINZMKGZXBSPSKJOADFQYFHESIZBFGXXDWRWCQWDGMJXJLMPENENHWGKPKDYIDVMOSFCCPKXUZUBBDGFBRTOPIQVXBVCMMIOKYXEVWNIQUCZSRUDYVSRJSZL");

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
    msg.setTimeStamp(0.70377287851);
    msg.setSource(51466U);
    msg.setSourceEntity(231U);
    msg.setDestination(15401U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.272619961766;
    msg.lon = 0.625330368935;
    msg.z = 0.568562884988;
    msg.z_units = 141U;
    msg.radius = 0.529401881104;
    msg.duration = 65224U;
    msg.speed = 0.728511228776;
    msg.speed_units = 81U;
    msg.popup_period = 55348U;
    msg.popup_duration = 62526U;
    msg.flags = 31U;
    msg.custom.assign("AIENTLHCXBCZPAFJLXDURCNIMWDYTORUBDZZLUDKJXFIYDVYLGVCBUTOSGHXAKYGORNZMLPDGJHJQIKEEKNZFDZGTMVRUGWORMXSSPJYMFLMVZLNUYBJFKVH");

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
    msg.setTimeStamp(0.355377635975);
    msg.setSource(24611U);
    msg.setSourceEntity(204U);
    msg.setDestination(12682U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.78021579678;
    msg.lon = 0.815672218321;
    msg.z = 0.420432887777;
    msg.z_units = 58U;
    msg.radius = 0.244453542413;
    msg.duration = 16659U;
    msg.speed = 0.0690675479672;
    msg.speed_units = 22U;
    msg.popup_period = 23118U;
    msg.popup_duration = 14863U;
    msg.flags = 171U;
    msg.custom.assign("GTAIDVLYOFUWPIGKFOHPYYIWRXDVONEFQTIFPGXBSEWFPJICLLIHSJOQFSKMCLOYZZZMMRMJIKGUPLXIHHPWKATGCEYDQADWAUYVTQKRBARURYCUESOHWKVSCUGGQTVYRDCBEGJQQEPTAVNWA");

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
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.146850362633);
    msg.setSource(58693U);
    msg.setSourceEntity(226U);
    msg.setDestination(36786U);
    msg.setDestinationEntity(45U);
    msg.timeout = 52281U;
    msg.lat = 0.744662739182;
    msg.lon = 0.426795600375;
    msg.z = 0.264955553505;
    msg.z_units = 199U;
    msg.speed = 0.949569811246;
    msg.speed_units = 76U;
    msg.bearing = 0.44008814485;
    msg.width = 0.263295815904;
    msg.direction = 5U;
    msg.custom.assign("USDWJXTRXEWCBHXZKNDWFLNTJSYPIYFEUMNGKVBRCQUYIYDPYEPUNLAGFEIFQCLAJVATYOPSYOMSBCZAQVBVLXVOQPGDLLRWEOYUXZHOSROONHGVKHOEXWDYHRPZMHADJHBICIESQDUKXGWBXGNJHEMRSKVRCICMRUFDBQHFWNTIJHGSWLMMQJYOJBCGNMZUWULKZZTAEMKTLMDTPJPOSI");

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
    msg.setTimeStamp(0.623041949049);
    msg.setSource(29922U);
    msg.setSourceEntity(22U);
    msg.setDestination(31365U);
    msg.setDestinationEntity(50U);
    msg.timeout = 31292U;
    msg.lat = 0.746876017015;
    msg.lon = 0.545403856819;
    msg.z = 0.0509359946614;
    msg.z_units = 160U;
    msg.speed = 0.57174036351;
    msg.speed_units = 151U;
    msg.bearing = 0.244336407005;
    msg.width = 0.988061587842;
    msg.direction = 91U;
    msg.custom.assign("FQSVDQFQINUAWIVSBRBRTFTOTVHRXWMYXTPIEWUJQHDBSCLCEQAKHTTOCCVKKABZHRTYMTCKDHCJDPXRNVFSUOYNWJRQHGDBKLUYSOQULYSVLFNUMMMNQCOLHEZNXOAMODJAMGX");

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
    msg.setTimeStamp(0.181572679119);
    msg.setSource(28520U);
    msg.setSourceEntity(193U);
    msg.setDestination(29802U);
    msg.setDestinationEntity(58U);
    msg.timeout = 21540U;
    msg.lat = 0.88240177618;
    msg.lon = 0.39614507931;
    msg.z = 0.841286659043;
    msg.z_units = 170U;
    msg.speed = 0.248883360235;
    msg.speed_units = 236U;
    msg.bearing = 0.666444207818;
    msg.width = 0.303556984815;
    msg.direction = 176U;
    msg.custom.assign("IVKVDXESYQWGBPXMOUUEXFMKVVVMUVEZRKQNNIBWGNKCCAVWXOAIOOMOSRUTLHGANTPZRPSRNSIOZPYHOACIOYZNGHXJMWYURQUKWVCZFJSMJLPRPAONLYEDYCRNTBFSGBYPMXSQKKTEVFHUGSKFEJDTQJLRARFBBAS");

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
    msg.setTimeStamp(0.262656243941);
    msg.setSource(16419U);
    msg.setSourceEntity(190U);
    msg.setDestination(13640U);
    msg.setDestinationEntity(242U);
    msg.op_mode = 35U;
    msg.error_count = 160U;
    msg.error_ents.assign("BYICCOPHYVRDFUFESMDSJHJWIPFBNXXPBANBEVFCLTNWDNMSCJPYKJZARAABVESGIHQWJCUDYCTCDGLTOHBIFQLEGYZQGGTMGDRAWFUGYYKLNKZQNAAXWNZ");
    msg.maneuver_type = 31511U;
    msg.maneuver_stime = 0.77332476402;
    msg.maneuver_eta = 36872U;
    msg.control_loops = 2522665274U;
    msg.flags = 244U;
    msg.last_error.assign("IEHJZWTYMEUTTDPHOXOMHUJPDCSVTGCGHTVCCFNJORGWNPBPMGRAGSPGQBZRZCKCGFVIJZYWLEYTFRNAIKRRKWGWAXPIACLQPI");
    msg.last_error_time = 0.995254697483;

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
    msg.setTimeStamp(0.0216944944614);
    msg.setSource(42502U);
    msg.setSourceEntity(252U);
    msg.setDestination(65392U);
    msg.setDestinationEntity(16U);
    msg.op_mode = 20U;
    msg.error_count = 198U;
    msg.error_ents.assign("SDGUZRMVKJRPEZDEBMMTLQFCZNIKJOCPSWSPIASKZIQBCFUNCRTRHQMHXQOYYUTHLHTZYTDERBCFKURSHWJDLEFQDGGNXQPBHRZXYMEYHA");
    msg.maneuver_type = 30854U;
    msg.maneuver_stime = 0.2708198076;
    msg.maneuver_eta = 33778U;
    msg.control_loops = 387276799U;
    msg.flags = 30U;
    msg.last_error.assign("NVUOJPAEONPJYZLXASYFMJYHFZMLGBRTEUPNENICGYRRHXGMKAHUMOJGLGQTBQHJRULTXSTQVIZCDEZL");
    msg.last_error_time = 0.814730129571;

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
    msg.setTimeStamp(0.840763312587);
    msg.setSource(2939U);
    msg.setSourceEntity(184U);
    msg.setDestination(6739U);
    msg.setDestinationEntity(15U);
    msg.op_mode = 207U;
    msg.error_count = 34U;
    msg.error_ents.assign("CLYTBZCEFMMKCQWAEQOPCZTXANOWKOSQGFKONPUXHOLJJALIIUWDBCVWVRGWIHPHWDTEYLWTNTVZNSOTHDPOJGYNIBIJYFMRXXPXIKANLLAKAEGVCICRRENBQKRYLFWUUMPZBFXZDFDPYSYIXJCSFGTNMSRKGRBEMTQHCECNAXVQNDXZAGRQFHOSVXZWRUOVGVHTWDVBYTIJPDEKUDLBOISMUZFAJUJMEBPALKSLSQHHBYG");
    msg.maneuver_type = 5401U;
    msg.maneuver_stime = 0.0439986841285;
    msg.maneuver_eta = 34122U;
    msg.control_loops = 3753627570U;
    msg.flags = 217U;
    msg.last_error.assign("CWWAZVRNQZHLJNOYYHXXULOLKMSCCEIKESPBSTXCTQKBLYPBSRTNUNQVFFUKVFTAPZPEONVRZFRBQOECOYMFWXEBOLWSJVIWLPVQGAWJATNXKDMCUZPIWQVRCXQIIKPDUBTDJGKCBOLHBZARYSAGDCI");
    msg.last_error_time = 0.591904092356;

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
    msg.setTimeStamp(0.937990500126);
    msg.setSource(20410U);
    msg.setSourceEntity(41U);
    msg.setDestination(37603U);
    msg.setDestinationEntity(220U);
    msg.type = 235U;
    msg.request_id = 54884U;
    msg.command = 253U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 11806U;
    tmp_msg_0.lat = 0.591430828214;
    tmp_msg_0.lon = 0.0459523267985;
    tmp_msg_0.z = 0.267835638798;
    tmp_msg_0.z_units = 116U;
    tmp_msg_0.pitch = 0.610722999091;
    tmp_msg_0.amplitude = 0.797754015508;
    tmp_msg_0.duration = 53364U;
    tmp_msg_0.speed = 0.216643138198;
    tmp_msg_0.speed_units = 64U;
    tmp_msg_0.radius = 0.608341091316;
    tmp_msg_0.direction = 220U;
    tmp_msg_0.custom.assign("ZWNGOOAZGSDNUXLBOBRUMHYYAOQKSHCDCNWUXFTWBDLJKGTTSWMGHDVSVFDQFLIUEIQXVRQIEESAXNCUZEYWR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 18611U;
    msg.info.assign("ZVXAAKWQBFFYODVTISQZITVGESZWHDWRJLLIXZPYRAOPLQPAPFWCXDBWCVGSZTKHBTWMQOSPNVWKMVQFUDUTNDDSLTIBHKRQBXVIYIVYHSGMNCMBNBKYKREMMHOFUMFJJCIUYHXAZHJOPAJFABRTGKQSYCNTMKOGOYEGEKECEBTZRBVMDNLGXJEURCPCGOXHXFIUHJCPUQGDVDLOFZNNXNMIKQCARUQO");

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
    msg.setTimeStamp(0.801295635753);
    msg.setSource(3449U);
    msg.setSourceEntity(199U);
    msg.setDestination(33653U);
    msg.setDestinationEntity(60U);
    msg.type = 222U;
    msg.request_id = 16653U;
    msg.command = 186U;
    IMC::ImageTracking tmp_msg_0;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 33983U;
    msg.info.assign("JJENXWDBBVHVXIM");

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
    msg.setTimeStamp(0.974579169479);
    msg.setSource(62257U);
    msg.setSourceEntity(5U);
    msg.setDestination(27088U);
    msg.setDestinationEntity(82U);
    msg.type = 34U;
    msg.request_id = 47082U;
    msg.command = 178U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 235U;
    tmp_msg_0.lat = 0.612464473405;
    tmp_msg_0.lon = 0.376327222936;
    tmp_msg_0.z = 0.482985595757;
    tmp_msg_0.z_units = 42U;
    tmp_msg_0.speed = 0.229456066862;
    tmp_msg_0.speed_units = 2U;
    tmp_msg_0.bearing = 0.845107709218;
    tmp_msg_0.cross_angle = 0.0321586620891;
    tmp_msg_0.width = 0.123931708818;
    tmp_msg_0.length = 0.520007654031;
    tmp_msg_0.hstep = 0.542905161399;
    tmp_msg_0.coff = 224U;
    tmp_msg_0.alternation = 92U;
    tmp_msg_0.flags = 146U;
    tmp_msg_0.custom.assign("ZDZOEQLLDGXOZINDRJCREUHIXTIMQQOZQPEUAPZOFSVELJJNETADMGQLDKPUYEXCMHXRTACTCIPYCTXTKWOVWSNPURJJJCBBUARGLGVLGJHTFJXFVKXQTCYIZLELATRIFWAIZRYGOKNASEMNHHA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 12798U;
    msg.info.assign("MWJEPFKWOKEPEEVPISDFRMOVYWLEWGQNPRGRXPPYYFUDPBRQBIGCYRXDAXYDLBTVQZGCZBRYBIHSVSMBIWFTHHYKGVNVOFKNEJBLTVDYSURQLRTTNMZACVHNMZFBICGIWOZLDHJOALAAFANNKCHPIYSFUQWWEDTTIJWHZCGEBGXI");

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
    msg.setTimeStamp(0.71877970333);
    msg.setSource(58713U);
    msg.setSourceEntity(181U);
    msg.setDestination(18367U);
    msg.setDestinationEntity(14U);
    msg.command = 130U;
    msg.entities.assign("MHTWWNJOTHZMFXPLPUBIGXGGJAAAMINYWZVZGTUOBGBQSDRJJBGSCYSSMKGXUAYZACKV");

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
    msg.setTimeStamp(0.294804454641);
    msg.setSource(25397U);
    msg.setSourceEntity(154U);
    msg.setDestination(35606U);
    msg.setDestinationEntity(168U);
    msg.command = 139U;
    msg.entities.assign("YBEKQTDNTZAIEPUNELNILICJCHIGHABFIJMJESZEAW");

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
    msg.setTimeStamp(0.269957592318);
    msg.setSource(61047U);
    msg.setSourceEntity(98U);
    msg.setDestination(42726U);
    msg.setDestinationEntity(99U);
    msg.command = 231U;
    msg.entities.assign("LPXYSSDJDDZIBUIXVULZCLKUFPARJKMIERTPVILNGSRWUOFRLGJILZIEUCMHDDKZCXBPCXCCBWVECTZGXHWOETTTOFLGQUZCHYGVCQKQXNKNYHJJDJMWPHTGXQNVMWFFPJVXWQYKRAOMNUEYYMS");

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
    msg.setTimeStamp(0.857101462495);
    msg.setSource(48382U);
    msg.setSourceEntity(225U);
    msg.setDestination(51112U);
    msg.setDestinationEntity(21U);
    msg.mcount = 238U;
    msg.mnames.assign("AOMHDGFORFVEOLIHNK");
    msg.ecount = 136U;
    msg.enames.assign("EAYJVDNSNXLYZTCNSFJRXFAGHWTBJCVFQPGR");
    msg.ccount = 156U;
    msg.cnames.assign("CHWZAFIXBBHZ");
    msg.last_error.assign("TUBNBEIDCEXSORDPIKRJMQIXKWPQRVEUJTWUXKOPTLBHOOGOGGAGVBGYLAYQNFRENIFUEDUZDXSEAVFZPYYQQFRZQGBNLCSFOSTVTVQZNCKNFMVLOXUQGTJUXWHHNKZYCTILY");
    msg.last_error_time = 0.368875340621;

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
    msg.setTimeStamp(0.153859013184);
    msg.setSource(43715U);
    msg.setSourceEntity(238U);
    msg.setDestination(13431U);
    msg.setDestinationEntity(122U);
    msg.mcount = 81U;
    msg.mnames.assign("EJHYDAECUHGTYLDRVABDLCZJNEQAQJPVYIKSWXUJLBDWGKPOUIRMUTEFOQIASQFHCNCPGFVPOZRRMFIKOTZRXDKBSSBKWKCLUS");
    msg.ecount = 228U;
    msg.enames.assign("VNXLTRSJZDVZCEWDPVCWGZHIXXDQSRNMGDNFFAFFNNOQWLLHWKOYUOTNESHXRTRWKYXIGOXIBJDQXVSBEUFKJHOPWVGHIBRMSIVBTFMTXQYBELKJTRMIQBAYZQPZBLKLIDNPTCFJHACSAUAPJBQAOGZKTUAGPIRSOUKCSYLAMPGJGGDGXINECWBFHWYEYLVUKOHRAUCMMCPKTRXNOWFPYFKVHICSZUZTMMCJWEVPZYE");
    msg.ccount = 159U;
    msg.cnames.assign("YQQNJWRPDSCYWTXBAFTMPTKTILZMKNWECOYMHKDLUFVURYLKEBAQGVUSNLQPPNLSEOWVWTCRDDXFHXMTURQSPLDYEHEKCDITBMLAZGBLHWYMUVEKIOGFRINJWVSONBWFGAAPVGJCSRGHOVNKQAXXNDCCIMIAZKBHZOBOQJUCTAJCVOMCPSXFGUJDGBEUSZFJINTKHZSQZHHIEQLXAZVEFRZXRPQOPAYXGDWXMH");
    msg.last_error.assign("IROVUQAABZYBZTJOLQAHCMSDUPUZYCLEUNKJEBFXOWIQUCDQJUMVIHJSPSMFXLRJGFKFABXMDOUURZVFIOTKWLODGZIYQJEEXNPTGXJCNDYCTHTLHNWPQLPZWHKFNEBJZCSTLSHUGVTHHIYPDMZGTZYEDNGFSWAVRYYFAFAOWVWOTWMDTGRKLDXQYRDAMANIOYHKSRVPISRLVJACK");
    msg.last_error_time = 0.180003832014;

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
    msg.setTimeStamp(0.877711888237);
    msg.setSource(14883U);
    msg.setSourceEntity(189U);
    msg.setDestination(41711U);
    msg.setDestinationEntity(81U);
    msg.mcount = 165U;
    msg.mnames.assign("OYMBQQZXCAEZTXNWIIBTVSVRWXFAOTEUEDZMFJDEROIOHJZOEISPMDNKPTZTSSGSCIWGQTTAEKHKCUMCSZNOHALGAYKANIQFAGJBPCKQMHDMBYVHEEWUVLIGRHGZPLWYPKJPCXWBJNTULPGCPRTXNSDRVRJBBXUCMLWCDZBOAYZGKFAUWERLYQORGWPULQRUFVJUYFQICKNZMNNVTHBEQHNYAFLPOV");
    msg.ecount = 121U;
    msg.enames.assign("FFJAIFJNLMZLHDABKDXKVFEOCXPYXMRHFHDPJEQIYZLCYVHEGRJTSOQLYARLBZLCKMUSYMXQACVIWZPXIINVVXPFIVZJQPYQWDSBNDUUUKAOFHLWDVREOIJTMJBDWXJSCMOOBTLORDQHISTRRCXOEMTVMYTMERQKKZAPFWZKQWIQPCNOXWMUUGVNHSUBBKLTACFIHWWZXY");
    msg.ccount = 32U;
    msg.cnames.assign("JPCQGHYCHZIRVZZBNKWCEWVHECIYTDXPNPQCQZAEPOEYAGCCSDSIRPTJJLEYXUMJURMZRXOIBOJKHBGSNLUBKQHJYZFDWKVQPEADCWSAWLHVOHUUFAFFBZTLWQIWSTFLMRCNWQLMXLDGNK");
    msg.last_error.assign("UPOLJXJJAPVQKGJQTNHXGMYXESEAWTLGEOOVPKGTFSTZFFBSO");
    msg.last_error_time = 0.0505263810812;

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
    msg.setTimeStamp(0.274773579002);
    msg.setSource(8453U);
    msg.setSourceEntity(174U);
    msg.setDestination(29769U);
    msg.setDestinationEntity(112U);
    msg.mask = 69U;
    msg.max_depth = 0.947704836947;
    msg.min_altitude = 0.249375236099;
    msg.max_altitude = 0.35282157541;
    msg.min_speed = 0.222330758543;
    msg.max_speed = 0.387407080029;
    msg.max_vrate = 0.177165311614;
    msg.lat = 0.249745771527;
    msg.lon = 0.2107195682;
    msg.orientation = 0.479287893369;
    msg.width = 0.660670410094;
    msg.length = 0.919047961835;

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
    msg.setTimeStamp(0.494106225199);
    msg.setSource(51168U);
    msg.setSourceEntity(190U);
    msg.setDestination(24343U);
    msg.setDestinationEntity(54U);
    msg.mask = 229U;
    msg.max_depth = 0.0782824312698;
    msg.min_altitude = 0.723523108389;
    msg.max_altitude = 0.612146217739;
    msg.min_speed = 0.0765549154186;
    msg.max_speed = 0.902403284407;
    msg.max_vrate = 0.453541909889;
    msg.lat = 0.94561974846;
    msg.lon = 0.800468545114;
    msg.orientation = 0.326137658322;
    msg.width = 0.584616865248;
    msg.length = 0.535737707213;

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
    msg.setTimeStamp(0.155256666708);
    msg.setSource(18631U);
    msg.setSourceEntity(190U);
    msg.setDestination(53391U);
    msg.setDestinationEntity(230U);
    msg.mask = 3U;
    msg.max_depth = 0.586943120865;
    msg.min_altitude = 0.549035712149;
    msg.max_altitude = 0.412169710572;
    msg.min_speed = 0.681321632873;
    msg.max_speed = 0.0748579232162;
    msg.max_vrate = 0.873258547037;
    msg.lat = 0.712006130679;
    msg.lon = 0.496190051136;
    msg.orientation = 0.97112502197;
    msg.width = 0.51576547688;
    msg.length = 0.23407904093;

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
    msg.setTimeStamp(0.126175928283);
    msg.setSource(56962U);
    msg.setSourceEntity(60U);
    msg.setDestination(36831U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.18308615843);
    msg.setSource(36762U);
    msg.setSourceEntity(210U);
    msg.setDestination(39327U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.261421754833);
    msg.setSource(64193U);
    msg.setSourceEntity(18U);
    msg.setDestination(50485U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.355735621265);
    msg.setSource(60483U);
    msg.setSourceEntity(151U);
    msg.setDestination(26463U);
    msg.setDestinationEntity(196U);
    msg.duration = 4125U;

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
    msg.setTimeStamp(0.282940570294);
    msg.setSource(53776U);
    msg.setSourceEntity(107U);
    msg.setDestination(34646U);
    msg.setDestinationEntity(69U);
    msg.duration = 58742U;

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
    msg.setTimeStamp(0.524676999302);
    msg.setSource(44284U);
    msg.setSourceEntity(86U);
    msg.setDestination(64020U);
    msg.setDestinationEntity(102U);
    msg.duration = 51554U;

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
    msg.setTimeStamp(0.209668359547);
    msg.setSource(4533U);
    msg.setSourceEntity(148U);
    msg.setDestination(11814U);
    msg.setDestinationEntity(115U);
    msg.enable = 139U;
    msg.mask = 1252856688U;
    msg.scope_ref = 1824044177U;

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
    msg.setTimeStamp(0.701228341057);
    msg.setSource(47704U);
    msg.setSourceEntity(159U);
    msg.setDestination(13563U);
    msg.setDestinationEntity(83U);
    msg.enable = 89U;
    msg.mask = 4197730127U;
    msg.scope_ref = 3957049016U;

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
    msg.setTimeStamp(0.187844862942);
    msg.setSource(21284U);
    msg.setSourceEntity(66U);
    msg.setDestination(34252U);
    msg.setDestinationEntity(13U);
    msg.enable = 86U;
    msg.mask = 3785320857U;
    msg.scope_ref = 2933333089U;

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
    msg.setTimeStamp(0.813891132031);
    msg.setSource(17334U);
    msg.setSourceEntity(15U);
    msg.setDestination(37496U);
    msg.setDestinationEntity(226U);
    msg.medium = 129U;

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
    msg.setTimeStamp(0.571701984496);
    msg.setSource(42619U);
    msg.setSourceEntity(62U);
    msg.setDestination(33855U);
    msg.setDestinationEntity(145U);
    msg.medium = 12U;

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
    msg.setTimeStamp(0.516881975819);
    msg.setSource(1385U);
    msg.setSourceEntity(199U);
    msg.setDestination(51271U);
    msg.setDestinationEntity(84U);
    msg.medium = 20U;

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
    msg.setTimeStamp(0.220797983853);
    msg.setSource(43139U);
    msg.setSourceEntity(72U);
    msg.setDestination(49019U);
    msg.setDestinationEntity(42U);
    msg.value = 0.661196857228;
    msg.type = 225U;

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
    msg.setTimeStamp(0.189538253578);
    msg.setSource(27736U);
    msg.setSourceEntity(162U);
    msg.setDestination(54609U);
    msg.setDestinationEntity(98U);
    msg.value = 0.713741768368;
    msg.type = 151U;

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
    msg.setTimeStamp(0.445559483812);
    msg.setSource(16050U);
    msg.setSourceEntity(190U);
    msg.setDestination(30900U);
    msg.setDestinationEntity(57U);
    msg.value = 0.907431731014;
    msg.type = 166U;

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
    msg.setTimeStamp(0.998818100748);
    msg.setSource(46646U);
    msg.setSourceEntity(100U);
    msg.setDestination(50417U);
    msg.setDestinationEntity(201U);
    msg.possimerr = 0.883206965649;
    msg.converg = 0.907879153209;
    msg.turbulence = 0.727848263074;
    msg.possimmon = 218U;
    msg.commmon = 182U;
    msg.convergmon = 50U;

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
    msg.setTimeStamp(0.120595262624);
    msg.setSource(25542U);
    msg.setSourceEntity(78U);
    msg.setDestination(401U);
    msg.setDestinationEntity(123U);
    msg.possimerr = 0.0801124083005;
    msg.converg = 0.0203751026163;
    msg.turbulence = 0.386680047018;
    msg.possimmon = 5U;
    msg.commmon = 143U;
    msg.convergmon = 243U;

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
    msg.setTimeStamp(0.0197217161359);
    msg.setSource(59309U);
    msg.setSourceEntity(184U);
    msg.setDestination(57394U);
    msg.setDestinationEntity(19U);
    msg.possimerr = 0.925981054045;
    msg.converg = 0.982305105229;
    msg.turbulence = 0.249712716903;
    msg.possimmon = 26U;
    msg.commmon = 228U;
    msg.convergmon = 167U;

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
    msg.setTimeStamp(0.752939232727);
    msg.setSource(8273U);
    msg.setSourceEntity(77U);
    msg.setDestination(15983U);
    msg.setDestinationEntity(91U);
    msg.autonomy = 30U;
    msg.mode.assign("LYIEIOVFBPZKCFGKEWYEHLNGXKDPXVUUMNXJCTTRPMJEDUPBDWBOPTVPKYZKVYAOXQLZRSKGDJPNWJAPGWPJVBQSCYNMRTBXTFCSLEGJHXNIOZDXKZETIHISJGHESUXYMCTRLQCFFMDWUJYCQLYKEEGXLNTQSFQAALVWAWHOWCUFMW");

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
    msg.setTimeStamp(0.796082615653);
    msg.setSource(60675U);
    msg.setSourceEntity(92U);
    msg.setDestination(13066U);
    msg.setDestinationEntity(115U);
    msg.autonomy = 7U;
    msg.mode.assign("FGHRTYGPNUXWNOJLOFKOPDTQEXTTTVITARHHIVNIBTFHGMVNBKYMIPZJNERLBDUCYPJZNUCTAXZAAPOCEJBGVPDSPISAOOKHKODQCNRUOAJRJSGRRQJWWSCZFGLVRSMJHXQSXVCWMQNZXFBSIEEWHAWLDYDLCMXSEIOTBSQBUNKGMCQCVTLLQXBVZGPYUFZPWFCJYHYGGB");

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
    msg.setTimeStamp(0.922481168737);
    msg.setSource(36340U);
    msg.setSourceEntity(35U);
    msg.setDestination(51921U);
    msg.setDestinationEntity(9U);
    msg.autonomy = 69U;
    msg.mode.assign("ISEVRQTWBRDELLJMLFKMHWBYAIGDZEEVAOUBWQGZYSQOFRDMMQLUBPUCNRYMWPZMHKRHZEYAKASIXIHTJNFVCOPOAVFTPDYGRXFJWZRFXXOSTLYJINSSPDVQ");

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
    msg.setTimeStamp(0.18697607594);
    msg.setSource(38734U);
    msg.setSourceEntity(152U);
    msg.setDestination(25557U);
    msg.setDestinationEntity(247U);
    msg.type = 211U;
    msg.op = 100U;
    msg.possimerr = 0.908704272644;
    msg.converg = 0.690036954381;
    msg.turbulence = 0.47724115274;
    msg.possimmon = 162U;
    msg.commmon = 49U;
    msg.convergmon = 50U;

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
    msg.setTimeStamp(0.855531785852);
    msg.setSource(50742U);
    msg.setSourceEntity(69U);
    msg.setDestination(13401U);
    msg.setDestinationEntity(214U);
    msg.type = 48U;
    msg.op = 6U;
    msg.possimerr = 0.311914988558;
    msg.converg = 0.685267280361;
    msg.turbulence = 0.860641083104;
    msg.possimmon = 138U;
    msg.commmon = 39U;
    msg.convergmon = 14U;

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
    msg.setTimeStamp(0.642347241221);
    msg.setSource(55411U);
    msg.setSourceEntity(10U);
    msg.setDestination(17321U);
    msg.setDestinationEntity(205U);
    msg.type = 242U;
    msg.op = 114U;
    msg.possimerr = 0.665913109398;
    msg.converg = 0.795600631923;
    msg.turbulence = 0.591509316276;
    msg.possimmon = 226U;
    msg.commmon = 240U;
    msg.convergmon = 134U;

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
    msg.setTimeStamp(0.430257209191);
    msg.setSource(9205U);
    msg.setSourceEntity(164U);
    msg.setDestination(5510U);
    msg.setDestinationEntity(140U);
    msg.op = 205U;
    msg.comm_interface = 214U;
    msg.period = 7931U;
    msg.sys_dst.assign("FTFVRYRHFBHIRVAUKMIDTPKERSIALRVZJBKAACZVNGIRSXRBEETSFEPKMRGTYWSWFWUDVCUMDXZXNLNXUFPQHOOANZPQNHSJIXWC");

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
    msg.setTimeStamp(0.651747702973);
    msg.setSource(9398U);
    msg.setSourceEntity(43U);
    msg.setDestination(41357U);
    msg.setDestinationEntity(215U);
    msg.op = 102U;
    msg.comm_interface = 110U;
    msg.period = 62636U;
    msg.sys_dst.assign("SMJRLJZEUGRMRGTWBSRHVRXVDCUYHYIWURPFWEUKUQFDOCMXDXBISSNLJCGOYBTKBWEANGKKDAUWTULUAQAUDZXRHBWPMCGZPVGTIMYTXZMLQSGUTEKVVHASYXFIDOFNMZDIBZKHSIAISJPJNFLBCPMJGKWNQTGFPXCDQEXBKOYVEMSCFFFOWEHAKAVTPOZLGPNBNJOTRVJAZZNOIQCYNBISLKLILCRJQFXCOODH");

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
    msg.setTimeStamp(0.530576807762);
    msg.setSource(33155U);
    msg.setSourceEntity(92U);
    msg.setDestination(7517U);
    msg.setDestinationEntity(168U);
    msg.op = 11U;
    msg.comm_interface = 182U;
    msg.period = 61764U;
    msg.sys_dst.assign("FKXQUWTNOHWGWSMMBMBTCLEXZUVHLBRBCISSWWVGJEUEPTLGBOYDWBMJDELJDIFVJYZNHNRCFBQZOFZGRNRVEURKUARKSIEUTH");

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
    msg.setTimeStamp(0.605886326159);
    msg.setSource(23063U);
    msg.setSourceEntity(92U);
    msg.setDestination(4706U);
    msg.setDestinationEntity(15U);
    msg.stime = 1313480458U;
    msg.latitude = 0.884154173673;
    msg.longitude = 0.611325236331;
    msg.altitude = 59775U;
    msg.depth = 12548U;
    msg.heading = 31993U;
    msg.speed = -1031;
    msg.fuel = -58;
    msg.exec_state = 120;
    msg.plan_checksum = 56000U;

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
    msg.setTimeStamp(0.892710568968);
    msg.setSource(1487U);
    msg.setSourceEntity(70U);
    msg.setDestination(8531U);
    msg.setDestinationEntity(243U);
    msg.stime = 926607322U;
    msg.latitude = 0.591416023828;
    msg.longitude = 0.216674472557;
    msg.altitude = 31625U;
    msg.depth = 63703U;
    msg.heading = 28307U;
    msg.speed = -30654;
    msg.fuel = 54;
    msg.exec_state = 74;
    msg.plan_checksum = 16272U;

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
    msg.setTimeStamp(0.466178859344);
    msg.setSource(10283U);
    msg.setSourceEntity(55U);
    msg.setDestination(57649U);
    msg.setDestinationEntity(250U);
    msg.stime = 2065823892U;
    msg.latitude = 0.647449987565;
    msg.longitude = 0.0757939919757;
    msg.altitude = 6510U;
    msg.depth = 25196U;
    msg.heading = 55269U;
    msg.speed = 15984;
    msg.fuel = -4;
    msg.exec_state = -19;
    msg.plan_checksum = 19424U;

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
    msg.setTimeStamp(0.136634447402);
    msg.setSource(38269U);
    msg.setSourceEntity(219U);
    msg.setDestination(16521U);
    msg.setDestinationEntity(253U);
    msg.req_id = 53024U;
    msg.comm_mean = 48U;
    msg.destination.assign("LLNAIZMSDMSYVHUDWQMCMBJFZJIWUXMKUVXRDTOXJIRMSOQMNSPJXHXLZTVVURMZJFDXPTGIVKDCIYGQGJQRWATAHPMEDUYYDCUQVPAOWOWHGWCOWPNDIXHCFNLBITRROKPLJGQUTEHCQUBVABVCIFOBBRYHNKYUYKTSBPKPHRWJEFZTFSVGWMLTENSNKNZCXQBAEZZVOGBWDEEDZ");
    msg.deadline = 0.226726142663;
    msg.data_mode = 75U;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.13733173334;
    tmp_tmp_msg_0_0.lon = 0.473139780397;
    tmp_tmp_msg_0_0.height = 0.362062507414;
    tmp_tmp_msg_0_0.x = 0.855945797041;
    tmp_tmp_msg_0_0.y = 0.0894480205652;
    tmp_tmp_msg_0_0.z = 0.787674146382;
    tmp_tmp_msg_0_0.phi = 0.333425674543;
    tmp_tmp_msg_0_0.theta = 0.490179093173;
    tmp_tmp_msg_0_0.psi = 0.596974423272;
    tmp_tmp_msg_0_0.u = 0.138136426735;
    tmp_tmp_msg_0_0.v = 0.751215469502;
    tmp_tmp_msg_0_0.w = 0.99245611366;
    tmp_tmp_msg_0_0.vx = 0.946102169435;
    tmp_tmp_msg_0_0.vy = 0.248491114455;
    tmp_tmp_msg_0_0.vz = 0.627954777107;
    tmp_tmp_msg_0_0.p = 0.742774903587;
    tmp_tmp_msg_0_0.q = 0.300497797467;
    tmp_tmp_msg_0_0.r = 0.177126619362;
    tmp_tmp_msg_0_0.depth = 0.690809674254;
    tmp_tmp_msg_0_0.alt = 0.714963263648;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 187U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BKDKODWBVEMDCWAEJULMAOBNUHRWTYSUPQXHWCPJPDIVOATMCQWLTKFBQPIHSRFUWZECVDTHQZVNRLYNKJWTCGRXGIFMUVKSNJMGGMNFBRPISCXJZFHMYZZFIMQAMOXLWNIDQCWPOOQLKBIQZJUVPJMSSSHFBOEQCGYYNPDBBHAXR");
    const char tmp_msg_1[] = {81, -75, 107, -30, -21, 42, 116, 95, -103, 125, 61, 83, 123, 114, -69, -37, -69, -11, 82, 50, -16, -41, -12, 65, 33, -20, -123, 112, -72, -124, -116, -127, 19, 11, 61, 8, 28, 2, -70, -62, 45, -18, -68, 126, 12, -16, 75, 55, 102, -94, -62, 41, 119, -59, -6, 42, 24, 79, 36, 104, -61, -71, -3, 107, 20, 106, 64, -16, 117, -64, 49, -70, 85, 76, 52, 102, 19, -120, -62, -89, 112, 68, -79, 47, -100, 77, -12, 87, -125, 119, 56, 43, -120, 113, 32, 68, 8, 117, -82, 111, 125, 78, -21, -50, -86, -1, 13, 85, 37, -100, 41, -51, -5, 45, 47, -90, 92, -91, 82, -105, 58, -113, 93, 112, -25, 39, -83, 102, -41, -111, -10, 52, 28, 9, -104, -22, -12, 33, 113, 63, 101, 81, 42, 46, 105, 56, 97, -37, 115, 40, 15, -101, 14, 28, -20, -14, 57, 125, -11, -44, -62, 107, 104, -124, 49, 46, -32, -127, 112, 73, -106, -124, 4, -94, 10, 113, -127, 111, -78, -87, 77, 92, -87, 19, -57, -85, -17, 125, -35, -42, -8, 45, 1, 66, 4, 88, 12, 15, 93, 13, -123, 19, -116, -92, 51, -112, 47, -80, 72, -93, -118, 42, -16, 18, -110, -98, 70, -84, -87, 48, -73, -14, 19, -70, 52, 125, 72, -93, 6, -59, -89, 3, -102, 29, 105, 121, 4, -72, -102, 62, 46, -86, 85, 62, 58, 60};
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
    msg.setTimeStamp(0.446896454218);
    msg.setSource(25297U);
    msg.setSourceEntity(24U);
    msg.setDestination(54663U);
    msg.setDestinationEntity(102U);
    msg.req_id = 26405U;
    msg.comm_mean = 68U;
    msg.destination.assign("HPIGBJBJXXOKPQQILTXQRCEUTWRVHQGZSKWUAUHRRYDRZMWFAOSSSDUFMJNJNOXYILPCPLCIBADPFIIEWARXTAQCGUSUZZDKHDNYELFTGXFNYKTVNLMODCYFSFPMVOOJVVMCOMAQEWELYCAPQXATCHZWLTKXBYHJMSBJANSUIPSHVOOWBKFKTYDENLWCBMBDVHZJTJGXZNDQIEYZIAXKHVNBIZU");
    msg.deadline = 0.345692603327;
    msg.data_mode = 175U;
    IMC::Heartbeat tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WXMAJTZGJKOXYKIVJTGHVFCPAYUKAEIIMPWMWPKXMYJQBNQFQYQKHBOWLAISSGCUMFDCVBDVHURFVCZJTFCRWIRALZVAHZNSTZRXOWXNVTKOSYGLSUAEENPZLQERONWLCICTUHJPPOMHWYQJLHCNVQBUYGBVNZJXSTPHBIDJOMHNENWFXVMGMOZZFBIHLQPYPLMTYSDTJRBGAUFXLTLPBIWUFKEUDGRGSXIE");
    const char tmp_msg_1[] = {-53, -39, -59, 1, -93, -105, -89, -122, 69, -58, -83, -96, 83, -9, -47, 55, 83, -48, -59, 46, -50, -2, -40, -7, 25, -40, -17, 59, 46, -77, 64, -13, -110, -122, -42, 70, 119, -87, -23, 100, -81, -93, -110, 101, -30, -71, 98, 83, -99, -47, -46, 110, 64, 76, 10, -69, -69, 87, -85, 116, 101, -44, 72, 61, 84, -105, 107, 118, -97, -110, -2, -30, -68, -3, -97, -20, -4, -22, -20, 40, -5, 18, 117, -121, 102, 75, -81, 125, 110, -115, 47, -28, 56, 56, 36, -119, 112, 73, 112, 32, -58, -123, 120, -125, 26, 47, -1, -17, -35, 9, -33, -35, -37, 68, 114, 31, 50, 75, 94, -47, -121, -99, -21, 112, 56, 83, 56, -16, -28, 75, -113, -76, 93, 32, -2, 0, 7, 109, 84, 115, 18, -18, -34, -112, -17, -117, 126, -90, 69, 93, -84, -93, 120, 117, 69, -94, -75, -89, 83, 9, -25, -82, 124, 110, 115, 59, -102, 103, 94, -58, -101, 56, -12, 71, -101, 49, 27, -2, 53, -90, 75, 42, 64, 96, -121, -119, 106, 54, 30, 85, 81, -112, 14, -76, -76, 70, 106, 12, 85, 111, -54, -41, -109, -84, 125, -33, -91, 126, -67, 103, -86, -117, 12, 90, -40, -127, 11, 100, -69, 87};
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
    msg.setTimeStamp(0.182017464908);
    msg.setSource(49381U);
    msg.setSourceEntity(74U);
    msg.setDestination(32863U);
    msg.setDestinationEntity(106U);
    msg.req_id = 37755U;
    msg.comm_mean = 176U;
    msg.destination.assign("JHVHURPZCGYSKITJZRKAWDCHRSWGLKBPDPDZTIFYIPFXSSPOFVWGAFLHFVOEHAPBGQJBJZMQLXEWABHNZRLSLGZKBIPJMVODENTBTXKYODAWCRWQJYXUVISAHFKBMYNJERIPOXCZGUWHXEKYATOJLQMICW");
    msg.deadline = 0.209444865624;
    msg.data_mode = 178U;
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.084595137022;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XRDJJFFHLWTIOYNUJDRQFYPRVXDWESBRCFZWAJKOXPINVFSYXAOMVSCWHHUJKQWBI");
    const char tmp_msg_1[] = {19, -12, -2, 37, -115, 9, -107, 69, 75, -88, 75, 112, -38, 96, 47, 111, 105, 120, -77, 0, 32, 9, -61, 87, -48, -101, 13, 56, 42, -119, 92, -26, -23, 109, 39, 26, -75, -53, -111, 39, -5, -34, 106, 10, -2, 12, 52, -27, -42, -63, -119, 48, -54, 74, -64, -27, -52, -99, 103, -64, 9, 117, 77};
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
    msg.setTimeStamp(0.812743265798);
    msg.setSource(54937U);
    msg.setSourceEntity(232U);
    msg.setDestination(34411U);
    msg.setDestinationEntity(230U);
    msg.req_id = 57505U;
    msg.status = 197U;
    msg.info.assign("SDNVOFIVORNXLGHFAZJVLJCFABUMEYIV");

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
    msg.setTimeStamp(0.146141927323);
    msg.setSource(57480U);
    msg.setSourceEntity(7U);
    msg.setDestination(62906U);
    msg.setDestinationEntity(74U);
    msg.req_id = 51617U;
    msg.status = 28U;
    msg.info.assign("HCDHZELSUPQHXYNULKMVYSGWXZTEQPBXETONCUBWTVDFYTXRDCTMSAUGJGIGYMNVDHANSEZNAPSKMMCPBWZSQSVASOMHFWQJRZKARIJGRJX");

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
    msg.setTimeStamp(0.220804322068);
    msg.setSource(32947U);
    msg.setSourceEntity(112U);
    msg.setDestination(34413U);
    msg.setDestinationEntity(39U);
    msg.req_id = 33871U;
    msg.status = 26U;
    msg.info.assign("ZSBBMYUHOKRUPJGKMIRQSOKTETGVXAVZMLXJSNGMKTYQZVFSYGUZVCOZQJWRMSFPPDXJXVIIIBUIHIMZLGOWAYWUBDKPQOUEDIFOFLBNZKWXCFWNABTETTEJJPSCERCLDCAUASLHSKXWEVISDYTGNVPUCGEYFQZTKWYKJWGQAGDRYFXNRTUDNYNHRDMGQOAEAVWJEQLCZBHPNHRXFHPI");

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
    msg.setTimeStamp(0.716740478782);
    msg.setSource(63336U);
    msg.setSourceEntity(32U);
    msg.setDestination(35650U);
    msg.setDestinationEntity(64U);
    msg.req_id = 41045U;
    msg.destination.assign("RYSRTKQDNWEAAWAZOONKWGFUDFFDHAPGJQQCJPLZLDPYFJJHCXIONQHYYXPBVQPMRVFVORCHIHWBNYZJMTJTCNZJMSROWUISBMMMUDUYVZHUXDTFWBVNEEUAIBKRCEELSSSEEWVFQUTYDLGQGKKPILUXMOOBOFZD");
    msg.timeout = 0.45218016799;
    msg.sms_text.assign("QBTCAPUFDPWOGJSXEBCZAVCXISWTTFWECKKNXQMOEYTSHOPSJJTNZOEPIGGCHWRRHMTOWWUYXKZYUGVKKLLMJYHZAVLWLONDPGPOXECZLMIAYPEFWIDXNQUGRSI");

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
    msg.setTimeStamp(0.0423015896114);
    msg.setSource(52829U);
    msg.setSourceEntity(54U);
    msg.setDestination(18586U);
    msg.setDestinationEntity(102U);
    msg.req_id = 27836U;
    msg.destination.assign("DOCDDDLERSNNBCTKQBWDJJIW");
    msg.timeout = 0.140642662118;
    msg.sms_text.assign("BMDGVWYDFSFOZEQZVJMGXTSRCYFBJEOXQRLBGDTWYBHZWWOJZKCAKMUSIUJR");

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
    msg.setTimeStamp(0.267235561598);
    msg.setSource(17957U);
    msg.setSourceEntity(74U);
    msg.setDestination(56557U);
    msg.setDestinationEntity(159U);
    msg.req_id = 32505U;
    msg.destination.assign("DQWFUYYPGTIAJQEIRVCJQJHVUFPXMXUMLTSARVDYMDERXONIIAUQKFEMQKDSSULUEILZJXNFGBALVFQRKZVPYGGNXZMSZKKXQOHXNJZBELAAWCYAWOTYHCVTZDLTZJKPRHGNHHYALHGCJJHEGADBVZBIWLXXCCIWNKBKGNGJWOOUSPDGMBCBMVRMLUBCTWHNI");
    msg.timeout = 0.283751337744;
    msg.sms_text.assign("WZKHWDOWKDCMDSFHDFUBFZNGRZNFOUNOKSSBADOCTXATRHNEPIQILETGHMNWEJIYUCDELJRQTEBWBCRTQXNFSXQTUVLIYUPVRYTDZXGQTQGPSAOL");

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
    msg.setTimeStamp(0.912560874821);
    msg.setSource(40673U);
    msg.setSourceEntity(234U);
    msg.setDestination(41261U);
    msg.setDestinationEntity(104U);
    msg.req_id = 52133U;
    msg.status = 5U;
    msg.info.assign("QWNQOYWZRNIHOQZBYXNGXSUMJTOMAMPWSLHBDRUSRSVVILTPOTPWGOWATKDFYYQACLEGFDIJHWUECOXXGDXJQSLEYLTCQBGQVKAFWHRJAPFISBVANVTBHXKFZCBYZJE");

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
    msg.setTimeStamp(0.497878781604);
    msg.setSource(24684U);
    msg.setSourceEntity(94U);
    msg.setDestination(19093U);
    msg.setDestinationEntity(189U);
    msg.req_id = 11555U;
    msg.status = 171U;
    msg.info.assign("NRTNCRJQEHVVPJWKBVSKVBREGFYSLLIIYIBZKZTORMDYCHVEPIG");

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
    msg.setTimeStamp(0.267714112025);
    msg.setSource(58064U);
    msg.setSourceEntity(176U);
    msg.setDestination(14844U);
    msg.setDestinationEntity(134U);
    msg.req_id = 51426U;
    msg.status = 149U;
    msg.info.assign("ABYSUGHOABPUCWBAKZKQFNECKYPWDNJLAKZMHCWJASVEYAQWCRHORDWBBFCZQIFZPRSZUODT");

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
    msg.setTimeStamp(0.921394775392);
    msg.setSource(12803U);
    msg.setSourceEntity(72U);
    msg.setDestination(62902U);
    msg.setDestinationEntity(108U);
    msg.state = 1U;

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
    msg.setTimeStamp(0.979310918347);
    msg.setSource(39420U);
    msg.setSourceEntity(58U);
    msg.setDestination(29029U);
    msg.setDestinationEntity(214U);
    msg.state = 50U;

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
    msg.setTimeStamp(0.409560128096);
    msg.setSource(63760U);
    msg.setSourceEntity(73U);
    msg.setDestination(9072U);
    msg.setDestinationEntity(82U);
    msg.state = 230U;

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
    msg.setTimeStamp(0.172582254328);
    msg.setSource(43616U);
    msg.setSourceEntity(7U);
    msg.setDestination(63874U);
    msg.setDestinationEntity(83U);
    msg.state = 151U;

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
    msg.setTimeStamp(0.289770062605);
    msg.setSource(48720U);
    msg.setSourceEntity(212U);
    msg.setDestination(51919U);
    msg.setDestinationEntity(150U);
    msg.state = 50U;

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
    msg.setTimeStamp(0.486884341955);
    msg.setSource(49516U);
    msg.setSourceEntity(18U);
    msg.setDestination(39323U);
    msg.setDestinationEntity(79U);
    msg.state = 248U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.848350702633);
    msg.setSource(13392U);
    msg.setSourceEntity(12U);
    msg.setDestination(4818U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.304445619609);
    msg.setSource(38505U);
    msg.setSourceEntity(72U);
    msg.setDestination(61752U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.986477601036);
    msg.setSource(64922U);
    msg.setSourceEntity(13U);
    msg.setDestination(36131U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.930129201557);
    msg.setSource(46546U);
    msg.setSourceEntity(64U);
    msg.setDestination(28946U);
    msg.setDestinationEntity(145U);
    msg.plan_id.assign("MMNCXNKKXRTYMWXGQBEDWGCVBZ");
    msg.description.assign("DRLISALIUQEAFBFOZJXLDWVHKUPGLLKEZRALDTEDDNFJHBJBECXZKREUTHVZZZEGHSWMNNKICUNNWPOHOWIQRJQUAEMVIDAZCSWBMBKOVCWCBVDXGGUGAFGDOMNWNJPNWLXTKXTQEXUTHJCVPQ");
    msg.vnamespace.assign("IWNNDIDHXAWKIERBESGOFUZATKQFJAALY");
    msg.start_man_id.assign("MQCDGTNHURYRGAGWGIQJBADVCTGKQYZYBGKLPVUYNTTNZZFMCLAOFXIVEZVRRWITRQOJZNXFZJYSWFBIJPQSRSRWSKIWRJAKOLJFVVCZKDYVPVRRCKMSGUULOMPUAICMXAXENZSDLHPZFHPHNSCNFQBQQAETDWOYJXKHWHIYKGNUC");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ATWCROWACHGYQKAIFVPZUYDBGUXLJWMRDJPOIAXJMIFOTJMVLBSZLJUVAZTGECAWMKTXBHNXQCEQGNTDJEAOPSILWZPMXHSELPOCQVFXHOREROWJGFHTQLEFZNCNQWYKVYFAINKAYXPWTDREMKUXHSUGTBRIIHCYHDMNXGUDSNSUFMFOYBUIVLBDRROZDITSBARBJKGEWIVLXPPCTBPZHUBQKJQLSKVUPWGJZCFZZQMNVCGYLEYVR");
    IMC::Alignment tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 63911U;
    tmp_tmp_msg_0_0.lat = 0.322732850785;
    tmp_tmp_msg_0_0.lon = 0.0992246034435;
    tmp_tmp_msg_0_0.speed = 0.917449803095;
    tmp_tmp_msg_0_0.speed_units = 62U;
    tmp_tmp_msg_0_0.custom.assign("CUBRMTUBKFXMEDYWMHGGUHKLEVIVDOPJTRANODAPKIRZHYMRQPEVHQBSLJFAWQOAAILZZWRPWHQVGBPWCACSNBDVHNOGUGVDXFMXIRGIKLLDTQBXDKZHEWTJYBVMYJPMPFOHSRPSPQAAOPTFROCJYECGIQCYFELEKLSQUUQSFNTTZMZORVKBCBHKYKIIEXXVREJCZJNJ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::SmsRequest tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.req_id = 52394U;
    tmp_tmp_msg_0_1.destination.assign("KLNUDYDBRFHIODAOOELGUQKFMBYHKWDWGAFIAEUGUGSWQBHKPKVGOKTJZNQODQIUSXTWQIBNQHMOTPXMLJNMYINWVO");
    tmp_tmp_msg_0_1.timeout = 0.335414579992;
    tmp_tmp_msg_0_1.sms_text.assign("FZDLOTWWINSQWERAZQUVJOUDVVMCUKNGZCLMMRPPJGBIMAEXXZDPSIKNRQWEIVYHJRQTLHBHYKUJOECQOGZTBAITQLOBULXDKYESNSHKPFQSUXYAVKXHVCBFCPHK");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.19934941512);
    msg.setSource(23586U);
    msg.setSourceEntity(139U);
    msg.setDestination(24698U);
    msg.setDestinationEntity(160U);
    msg.plan_id.assign("WIVQATRXCDTGTRDOEVZWJEAKDHVPZCCCIHXYSOOZCJNXAFOLOUKPPZVYLQLWGEFDXOHQPMWYZSXLILJAXUDBFGYJJAHUHKHWGVGEZCUZMTNBPUQFYMVIITNGNDVRPYBKMKMAQJRMSVIMVJDBESCLOEIDWUIBHERTRBYPJVUBGCHOCSRQJXMNYRYSKHLFAYZFZQHOKFCD");
    msg.description.assign("ZHPMSLZCWWKQMCUCVUJZOCJIUSSWSFPTKHAUDRNLIJAHMMWIQJUBXRXPXNMCGBOFPFXEZCBTDMOIPGSWDHWCCWPKBFHLQMFONENXOAWJYRRGKGLPHXNHFYJQSQVMRVKIQJFYRTXLMSZSBZDANXVLTDNQULTYICBRTAZKMJEUYDBGDPHEZBEYJIQKGF");
    msg.vnamespace.assign("VFSKSVSUHGMUCENPAEEFPHZIRTOJPKICPWLYQLRMRRPKAUDAOVPZBQXMCHZDSOOYUPMUJBXCZUWQGYWBYNTXHJOLDNOFOYTEUFWVTKZNSIGQLOTFMVAEJIZWOKJVYBHDETDQRYZDGVXN");
    msg.start_man_id.assign("WNKSVNORTFBYMUPSEMDCHWYVTXEFGUWIBDVMZKVSICFVHJHDBFIWDDUZXAMGCRZLDLLXMSODZGDQPKFWNLRRUBXVRSULMQAUQJAAQPGTEPJIBIUPWRNSHDJMHVZEVERZBPEYBOTKZJAFCSJJJLCGYISTRON");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("GQYFAEONDMPCIGILJDNHLMVUJIKUOBPOZUBLDISLSZZQHRUVMZAPDEEIFDZGDBYWOQCMJPAHQKOSFTKBTWLONNQZXPCYGBJMWFYJEAFNXHRGSWRUVRKHNWETYHIHRRUPLUOXDVFUPYCQWIGGYCXFSVSDMXKAREWJAKBLVNQYSRENT");
    IMC::Drop tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 1075U;
    tmp_tmp_msg_0_0.lat = 0.0710591708639;
    tmp_tmp_msg_0_0.lon = 0.646294007356;
    tmp_tmp_msg_0_0.z = 0.67536458339;
    tmp_tmp_msg_0_0.z_units = 34U;
    tmp_tmp_msg_0_0.speed = 0.165713931763;
    tmp_tmp_msg_0_0.speed_units = 180U;
    tmp_tmp_msg_0_0.custom.assign("TCUIQILFLCNWMAFYFZYJMIHPKERIZQTHYIHIRZITBBSNNFYXJMBYUHVCVARMSTMUETGBBXLQTRDLJOFZQGJASEERALKVGPOJVGWIHWYJCAWOZVUJBLCATWNGHSLGSNMXZWARVWOLJCXJDSKZUVIQMDCPCXEPHOUGXGFDOQBKYOBRSFSPYLKOZWBPNNJOCFGXHCUEDPBPAAZPQDEZVXKMQDLSUMUNIDDTPKYERXKHKRSQOUXTYTKMRQHV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("OOTNQDCALHEDIADQIGMDVETMJKGVXBORARUWOLRHYMIWMYXPHKUPSHEUOXVKUTWFIBFIJWYWLGPKWMDWBDQBFKZIACCGAZCMCSMJLYASVWBSG");
    tmp_msg_1.dest_man.assign("YMZUCFIAPWLCDBQYVSAQOTGKQNYEKNBLIFNDHMDZCDBOIUQFDSFJKVWTFTDHEEJVWWCZTJPHZPNVEOFOKBCKIQIBBKACQKWXDAMY");
    tmp_msg_1.conditions.assign("DIQRGKVYMSINPCXZQPORTUIXFSJUIIIJJGEFKVZBIMTHIXMLAHREWCFEVZFSHGW");
    msg.transitions.push_back(tmp_msg_1);
    IMC::CloseSession tmp_msg_2;
    tmp_msg_2.sessid = 1354263588U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::Pressure tmp_msg_3;
    tmp_msg_3.value = 0.632454657092;
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
    msg.setTimeStamp(0.0900516805889);
    msg.setSource(14815U);
    msg.setSourceEntity(24U);
    msg.setDestination(63475U);
    msg.setDestinationEntity(79U);
    msg.plan_id.assign("NCBJUKFITSMEAAPFBGCWIDWQWLCGBWVPVFBZAOGXGQXQJVZMJRNUKLHTFDQDJCUMDITBTKCWLOBPLWAHBKXRLVKCPRPRF");
    msg.description.assign("RVIHMSIBBLRZXMFYCDMETFLRQPIWJSGQIMGLKNJVDPSJUBRTKYZPCEANKASIUSOYWQYLTLNCOEOHFHKUERDYVKYWQQAXRFYCJDDEFVDYBEFIVWBPHZHNRXZUFYJLZMXVNWBNNSELJFMCEFZWNZTEQNQQCMRTIQGOORLVPCGMSKSVTIAQXPDSYOZLO");
    msg.vnamespace.assign("ZJCWBQCZFPAVHRHUXYIHTKCYUMMZLQTDUJYAFVKXYTWGQAWZBTHCUKNOELDTZACTAWNUWYVPJRFHRMILEIO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JJBAEQBKELCSAUXEUQMZXKTQQRYBACLDJJIIEOELIXCHVMSYTSPLDHSXWOMAXUOBHMWICXAPOLNFVLWTDVJPUYUGHFBOWBIGRPTVYIFRQPMCTFYRDUYRNVEEPDSTZQKRVFLPZAQZNBTACGGKNYNFVLRVCQZFIWXSKMBTSKURDOWKLDYGWWNJOWSFAEHJJLPNGKZRIVKGXZEIOHDAUIOPCHXFYXFNJBCQMHMONUDNQGC");
    tmp_msg_0.value.assign("YEVLYYAHESUKUKMLXPAXQGPHCIDJCABBXKNNJPGSTCZQDPNAUWHDORYMIAAAVWNKYVQIBYXJWFEDWVTEKDQAHQFCCBCRFIOFGWOZHMFODONJERYGVZSPFPMZNA");
    tmp_msg_0.type = 90U;
    tmp_msg_0.access = 160U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("XGISRMKBGVAAIEQBZRRPGOOHAFJCUIXWVZKL");
    IMC::LogBookControl tmp_msg_1;
    tmp_msg_1.command = 133U;
    tmp_msg_1.htime = 0.827112568465;
    IMC::LogBookEntry tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.type = 146U;
    tmp_tmp_msg_1_0.htime = 0.636938182142;
    tmp_tmp_msg_1_0.context.assign("HVKVUJRMPYKAEOVQW");
    tmp_tmp_msg_1_0.text.assign("BSAPANGUJUMCPYAILXGPCDTCTEOLAHVVYVKOWDOIFNAOZUFRDZKRYNHWZWABYVMEYMGHKQIMRDBXVFSJAQFCWOTUXEXELZMMKRIEWQGKNHPLCNAXHHNFBCJZLHJENJEJEWJIECYYUQKYZGZXOSIZSZBBDXKRXYEBJFGMTOCLJPMHTILBHKBSZQ");
    tmp_msg_1.msg.push_back(tmp_tmp_msg_1_0);
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.682229360822);
    msg.setSource(30556U);
    msg.setSourceEntity(224U);
    msg.setDestination(24295U);
    msg.setDestinationEntity(163U);
    msg.maneuver_id.assign("HUKPKDSJHWFECDIKQCUBSIZGUSNPPFTGQWNTOVMYEBOGCJQBDRCHVDMKMZINKLUBLSLAXXVWBFRGAZVVGDZAI");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 19272U;
    tmp_msg_0.lat = 0.400155008075;
    tmp_msg_0.lon = 0.829896379044;
    tmp_msg_0.z = 0.839843107283;
    tmp_msg_0.z_units = 42U;
    tmp_msg_0.speed = 0.184112080341;
    tmp_msg_0.speed_units = 204U;
    tmp_msg_0.roll = 0.135832925801;
    tmp_msg_0.pitch = 0.0645321141925;
    tmp_msg_0.yaw = 0.968035588308;
    tmp_msg_0.custom.assign("VLOXZXMAWOFMOGIRPLVGZKBNJZIXTJBSPUNLAGGEQGFECZWCVGSDTHJYDYARTRAVBPBOFXJBKYHUQ");
    msg.data.set(tmp_msg_0);
    IMC::HistoricData tmp_msg_1;
    tmp_msg_1.base_lat = 0.66796996924;
    tmp_msg_1.base_lon = 0.501952742031;
    tmp_msg_1.base_time = 0.485311680838;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Formation tmp_msg_2;
    tmp_msg_2.formation_name.assign("XWANXOSZNSNGYKKVEEJCWEUTQTCBVMRLTEASOXGPMDYZTQYURYDASDBVRCQMLLXUALWRXIHULWDJKZPIOAIVCTYZCVPWOIUNVJAKBUFTDQVDHHAKJYEVXPXFHZMIOPIHQIXAOVOBRMQDHAERMKSFDGEEYFTSPKYZSGXLBULB");
    tmp_msg_2.type = 166U;
    tmp_msg_2.op = 243U;
    tmp_msg_2.group_name.assign("KMSFTTILWVKABOVDEIMUWNNBKIIRMSFIQXEBLAJFHIRDVELJNKMRB");
    tmp_msg_2.plan_id.assign("JBPZGVKTCMMZIEFSODLZIRLFE");
    tmp_msg_2.description.assign("FGHDLNRLBA");
    tmp_msg_2.reference_frame = 94U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.vid = 5267U;
    tmp_tmp_msg_2_0.off_x = 0.148397390066;
    tmp_tmp_msg_2_0.off_y = 0.873025899019;
    tmp_tmp_msg_2_0.off_z = 0.963154483928;
    tmp_msg_2.participants.push_back(tmp_tmp_msg_2_0);
    tmp_msg_2.leader_bank_lim = 0.280482289322;
    tmp_msg_2.leader_speed_min = 0.0605210148935;
    tmp_msg_2.leader_speed_max = 0.495370130424;
    tmp_msg_2.leader_alt_min = 0.606969203594;
    tmp_msg_2.leader_alt_max = 0.176036749929;
    tmp_msg_2.pos_sim_err_lim = 0.928970684891;
    tmp_msg_2.pos_sim_err_wrn = 0.242620854133;
    tmp_msg_2.pos_sim_err_timeout = 10270U;
    tmp_msg_2.converg_max = 0.102997163951;
    tmp_msg_2.converg_timeout = 18684U;
    tmp_msg_2.comms_timeout = 10605U;
    tmp_msg_2.turb_lim = 0.300446537791;
    tmp_msg_2.custom.assign("FXNOCBNPNGXKRSIKBMFWFGAXBNOEGARBWZUXTSJOECTXMIZVYDJJHDWKTMXLVFDFHOBNAZLTHWULAJBYLUQQIOUVVRXSHCTOKMUVNKRYVLLDZHZTIBTEZLFJONNFXYTGIRRJGLTSZRSFRICDGQUBPYSEYDWADEIUCQSIESBPLQCJLEYWHVDQEHQDQMVCKAQRDXMBKPHFAWAYMKEPWJIVAOPXYMQEVSZGHAJJPPOPZNCUPTIGGYRMHZN");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.897563004165);
    msg.setSource(17573U);
    msg.setSourceEntity(183U);
    msg.setDestination(19851U);
    msg.setDestinationEntity(26U);
    msg.maneuver_id.assign("FXYWQRWYAFCAKRITLEIOCZZAGPTSJGGWMXQDJCOUNYNEPHWMLVYYAMKPGHYUMOVGQURMBIUSSRXQXDWMVSONVYBKBYCLKCCNNDTZGHEMAIJE");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 338U;
    tmp_msg_0.lat = 0.769282112269;
    tmp_msg_0.lon = 0.346109474724;
    tmp_msg_0.z = 0.445804924768;
    tmp_msg_0.z_units = 89U;
    tmp_msg_0.speed = 0.391544353167;
    tmp_msg_0.speed_units = 130U;
    tmp_msg_0.bearing = 0.300672228235;
    tmp_msg_0.cross_angle = 0.508562601193;
    tmp_msg_0.width = 0.829372271042;
    tmp_msg_0.length = 0.936472877904;
    tmp_msg_0.hstep = 0.486693162396;
    tmp_msg_0.coff = 49U;
    tmp_msg_0.alternation = 131U;
    tmp_msg_0.flags = 98U;
    tmp_msg_0.custom.assign("JQHDLKBCGYTEGVWEXXNSTBHQEGMZUIOLVGUFKJBRUBAYWAEFWHBQVOOHDVQYLWTJLFESVUEGZKJYRSGMPHBWDPKJEIWXQLZIOQINWTVFLUTPZEOKDOVSHLAZRFJKHLCXCNFXO");
    msg.data.set(tmp_msg_0);
    IMC::Pressure tmp_msg_1;
    tmp_msg_1.value = 0.0726032446058;
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
    msg.setTimeStamp(0.328973195501);
    msg.setSource(1503U);
    msg.setSourceEntity(165U);
    msg.setDestination(47252U);
    msg.setDestinationEntity(220U);
    msg.maneuver_id.assign("ODAKVYFNCCACYGYVXQRBZEMJITFXKDQYPKBBHOUZDZIJBPJKALBRHBAQFRXCKUMYHSWDAXTGNLDIGPOUCKUIKCEPHHNFQESSCWYWMEWKLCGYEWAECTWHZUJMELWZTBGLDMGIHBTZJLBFGTPRXRMDMVIABGHUOQQIFVTJZMFTJZPPOLLGLWENVRQDNXAQKOWVYWUYUUTNOLIMPKXOXXFRJPMNZYEXJVQSVANOZSVERRFA");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("WWWBZVKYACCZHZRJNRSUJOQDYGRKXUXOAGTIISFBFUVXBPAHNZUMQXRGMNVVHRXGTODQLCKTIMDYNKNHTOASHTWMFMXXIRFSSEYVFKDPSIOEPJTMQWDYOWNCYBDDIXGCADEAHCPNJVYSZMHZHRMOTKPJWSIUELOLJLUVCPGWGNADYDPMOZ");
    tmp_msg_0.max_speed = 0.467642492354;
    tmp_msg_0.speed_units = 102U;
    tmp_msg_0.lat = 0.788698280926;
    tmp_msg_0.lon = 0.769302264031;
    tmp_msg_0.z = 0.527148607742;
    tmp_msg_0.z_units = 84U;
    tmp_msg_0.custom.assign("SYEAJQOIPAZAIFOZIITHNPNTIMXGFLJDVLVKUPBOESFTMFJWGDBZTIPWRYALBYNUJACGXLCOGHKPKIUKORUTBVYEGICUXVLEDSYLYGNGQMXHECZWLJWQHSQVFDGKCSSRQFQMPAUNRXSHSLFAMBBMBHSDKRD");
    msg.data.set(tmp_msg_0);
    IMC::FormationControlParams tmp_msg_1;
    tmp_msg_1.action = 170U;
    tmp_msg_1.lon_gain = 0.254743946283;
    tmp_msg_1.lat_gain = 0.118818841835;
    tmp_msg_1.bond_thick = 0.438278608528;
    tmp_msg_1.lead_gain = 0.391994861754;
    tmp_msg_1.deconfl_gain = 0.0362825496983;
    tmp_msg_1.accel_switch_gain = 0.672109827761;
    tmp_msg_1.safe_dist = 0.0904030223247;
    tmp_msg_1.deconflict_offset = 0.678317528927;
    tmp_msg_1.accel_safe_margin = 0.274029217016;
    tmp_msg_1.accel_lim_x = 0.645501506267;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.0650105983456);
    msg.setSource(41195U);
    msg.setSourceEntity(74U);
    msg.setDestination(40501U);
    msg.setDestinationEntity(122U);
    msg.source_man.assign("ARHKVFXGZVFCDCFSNWAWOEEDIETEUHVALHIPAZFRDZGCMTJXASZDJCIPGJGUAQOQUSREGPCDZUXAXHKVCMLYQZRJPJOHEKGCYBSMCGXLLFUBXIFRXCMLFQPMAIXKYDOUWTBPPRWMMSYHSXZZDOMNWNQUDYQBOKORV");
    msg.dest_man.assign("KIZSMOIBGVPTAFPCAKYOQR");
    msg.conditions.assign("SJCYAKWNQROTLBZFVCEZJNNWVZLMDGATTGYIYXKNFAWPCTJNRWBOAKBDOILUVKODWRUMDLKPPCWFWOMFZXYLQUXKKBUVIMLUBCYLTHYHMUQYPKDADQIPZEESADUBZESHVYLSVNBRFXHOPUJCQADFUEQXGIOMNPHGIXSSMPHBAGLEYRCGHVKEFDGVKNEFCCRJPOIZMTWGVITVXQHHEYREAWQP");
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 245U;
    tmp_msg_0.id.assign("SKWRQFZAKCVXCQJVZFNVLECXJIEIAUMNYRZNJLGMQKPACOZPDDIEFLYSZHBIQYFDXEDPGBNWVHOCBWZANXPRXMQDPJBYAHFLMDSMILKMJYAIUVCVXWTTCWOCTALPOTRMIQTBCHVFGTOQCGARQUVNHUGKOZXONASLJYOYQZPMSRKPUOYJPTPGLNUSNYFEESEERDHJDERJTSKBVWIXUXSGISUNRZZHLJWKKWFDFWUHKYDUMHOBBTTFB");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("JGQRAVRCBIDWXXDZALJGCGFSQOMBLSETGAGENUBHRCRZRRKPCAKLKTEYYIIVNFOHPPCEHIXZTEXKAUGJKZXGBVOUTWQANUFLZZOHGVFWJRSYNJPEXDMBINPKKXJHZWOMUETLFAYBMBULBYVULYQFHTMVSGNYVJPOTRDQIDWNWXDQLMKOHRZEWJYFISFZSHAWROCDMMGFCQTQSDBNULYCDTCIVLQNHAEXZMNETAKMWBSVKSFQJOCPOUYDXI");
    tmp_tmp_msg_0_0.sys_type = 71U;
    tmp_tmp_msg_0_0.owner = 37061U;
    tmp_tmp_msg_0_0.lat = 0.679790303691;
    tmp_tmp_msg_0_0.lon = 0.317429865111;
    tmp_tmp_msg_0_0.height = 0.0110484302191;
    tmp_tmp_msg_0_0.services.assign("AIHYQBTTWALTXWDCJLFONPHSDSQFYCXISNGLQSPGGHVQCKKJMCRIWEDTXPWQSMWKVFJJMCVXOLQRTAJKJZAOZEYFMBQKJWKETQGFHPUYVNXLNLIEOTXXWYDZHZUXCVCLVFFPIGNHIOWFSKSUBSONNAEBPCZCYBIRMPDRURBQBPEHXHQDAAVGYEOFRLWMKBJNWNAGKDEUUFAGNATSZJMGYBMY");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.507345616785);
    msg.setSource(11030U);
    msg.setSourceEntity(155U);
    msg.setDestination(64014U);
    msg.setDestinationEntity(163U);
    msg.source_man.assign("AEEWVLHTARLRFRLUOSEJPUXZBOFYXTSXVKQZSRORVGBAKLEXMVIMFXRJNCQUKYFMLRBYXTCUDIMHSVBRBDLQAWMGSVYGAAC");
    msg.dest_man.assign("ETETAYANWAGQOEVBWLODWJVPJHCQDWYHHGOWZIOJRPDBVZSXDXBF");
    msg.conditions.assign("WWRHIZVHDEWUXGCKVVUMQHKKLTHLYQSKOJWFCPIRYTHERWTCKJODQAKDZUFXVOZTXQOWJBUPYSGUOAOYFSLXRFCNSBAQGCFEMQQLNHCOZMIBEJWXZJTZVIUVCHNDCGGXUIVFVDLMKCAMZIVKJRYSUYVRWNQPJMKQPPAXGBHTTNDEOULNBBMANJTPAENSWGFFZBPMLLYDEHDDBOEXPYZHLMERTXDSWPGBITFSRGN");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10415U;
    tmp_msg_0.off_x = 0.138425800567;
    tmp_msg_0.off_y = 0.545026986024;
    tmp_msg_0.off_z = 0.233101779265;
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
    msg.setTimeStamp(0.276985071161);
    msg.setSource(55576U);
    msg.setSourceEntity(201U);
    msg.setDestination(2579U);
    msg.setDestinationEntity(164U);
    msg.source_man.assign("QMMLODVCUROEANDJPCEFCHNNBFST");
    msg.dest_man.assign("VRNWILFAFUHSZLGORNNZNXKRDSNNPXLDILPAGIAZJBYENAUQZGCNMZOMRJGGMDUQTZFJEFUALHSUBHMCMNLIAOGOIHSOPDSOKHEURCQAUCCVERKQVMQRRQLKD");
    msg.conditions.assign("PXJZVOLBJUPAABYQQRTOZDSWUQJQZPYCCMESEUNCOBFXBLUFEIWIS");
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.190966005318;
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.626928147492);
    msg.setSource(30796U);
    msg.setSourceEntity(238U);
    msg.setDestination(2323U);
    msg.setDestinationEntity(150U);
    msg.command = 175U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MWNIGONOJVPBQXXEXJWJSAWLONTUQCKUEDLPFEDFPGNPCCKTECHXZYEUNHUNGUTTVWOXRJXADSOJOWGWICKMQSTXLYCUWVSW");
    tmp_msg_0.description.assign("OIDCQCDKBHFFAVLLIAYKSUIAHNPAWSGXJQSBQXTIYTFIENINRSDYGKOCCHMAWNZCWHPCNYXZJLKUZDMPMHYCGMIFRVXURNAFXMQSTPOTLVONKESEEKVOPGNRJUJLDQDTBOVIGPBOHZAVRANLTMGCUUROWGDARJBLSRBQPYYTWXWEPFXXMCODEMWUGPLSXFLKIZELMQDFKPBYTSWFZQHU");
    tmp_msg_0.vnamespace.assign("GWXEWOQIVJUFIDNQWFWQKHPMRNHAPEPSATYJGVCTXFMBMTQBDYFLEDBSPNCAXVBBSYYQFMSQAWYUDZHSKLNXJICRXEVGCTJEHAENZDRMSIKQZMHFCNLYZKUUPOUADDOXULXTIBLZZZSUFIIVHALSHURLEWGKYJLDDHGKOVLNOVZOVTERPVGGTBGAFPROCWRKORJTCQOIFMKNSMSVQYMLIDYBACRPHJHWXYUGFBEPJ");
    tmp_msg_0.start_man_id.assign("UXIXNKKLUDYTPXDLQZJABZXOWXPOOTWPVZOAQDBCSNFEEQMKDJVHTXZFISMLCRDCXYSNGOKSTRIQPYCLKWQBAWKIPWQKFFDSFMFRWALIGTOBTKKGMEHGURHTNTAVMXGJEOUPMBBCWAEJVWCNXSIVACEDUCMOZJQKUDO");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("NBJYOIJEXHIYSQJVDDIUBJKGBNGLMJGTPFFPUOYRWODOBGULMGRWEUUDGECAMPXFEALBKPKF");
    tmp_tmp_msg_0_0.dest_man.assign("PLHXYGNRMELMYOINISUAOMTZZFYDSI");
    tmp_tmp_msg_0_0.conditions.assign("KXGOBYGAGPWDLWHONZRRSQQTJQYPFSHPNSCNCIOVDIVXUFYCFUWHSUBANCTSLHJOHDUHZJKQIOEMRMDZQNYQFMLVKDUBLNYXOPCWXOETTMHVZRQSADBBECGVVVYZRHBDLKMPBWGKSZTEHBMERGPYKWCQEJJCWXWAAXGAGOOUPFPVR");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.955325602886);
    msg.setSource(39073U);
    msg.setSourceEntity(1U);
    msg.setDestination(17781U);
    msg.setDestinationEntity(159U);
    msg.command = 127U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("APURWZKMOZEFPXKJBGWYVLQZXNUUNA");
    tmp_msg_0.description.assign("MIXBCURRYCJWKHLFNXWJAYGYBHZUVDWSIQGOWFTJHKNXELBFVEGNSRPUAUMZFTELLGYMCPAFLXDXGNTZFVFAKBMMCECGWIDGUOQAMZLTQNABNQPEIX");
    tmp_msg_0.vnamespace.assign("OAUZRBWUJNFMUKBVXTPKMFDUFKXIWSIVLQIJNCLKMAQFUHXTEADVTHOGVLBIFHZWENTJMWGCMECSNCOKGMYTFDBXEGQFLYBFECGPSYBZKZPIWPFXTRSKALARBDMLPHENQHOWYDIETULBQCKJJZZRTQNTSCHUCDRXIDDHARJIRDPJUWHENTGILXWHODYZYXHNOZOQROSOVYWFPGMYRZWELJGAK");
    tmp_msg_0.start_man_id.assign("HDOJCOIWNHGYCQAVDEPFSBABHXYHWYSSQFTRQSMIIUDLRLOIKGWNKGUQXBZLOLRLXPUZXUZDRJJEXRYTXZUPIYKKWPTMSHAOUXLNIVEUYRGBNMNKOMXACSBPCZHYVDBQXBCIVVFZBMQFWIKAMROEEHWVLNNFYYTCJRVJHSMJFEDXKI");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("RAMGHREILPAQZUJGXYINKQTFQTQERGKMRWTYRTTJHSVWFGXVSUHQFJRYUASBDIOOFEGGUPBPEJKSDUTXKVOSGUHNWVRTXWMHFMZKPBHDUYCCTOCMBRPUCLOXNPDPFOGANJHTBWAWBEIIGCBOFDZDLICMABANFEEMIJOLZAAXIPZWPZVQQAYLVZSVDRXJWLKLQGCNJNZYPOEFDTXVKKVMJSLUVZDNBWQUHKM");
    IMC::FollowReference tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.control_src = 47671U;
    tmp_tmp_tmp_msg_0_0_0.control_ent = 152U;
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.775805092222;
    tmp_tmp_tmp_msg_0_0_0.loiter_radius = 0.944835109807;
    tmp_tmp_tmp_msg_0_0_0.altitude_interval = 0.948681250066;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::EulerAngles tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.time = 0.904224179049;
    tmp_tmp_tmp_msg_0_0_1.phi = 0.982076037509;
    tmp_tmp_tmp_msg_0_0_1.theta = 0.153326260892;
    tmp_tmp_tmp_msg_0_0_1.psi = 0.607376686013;
    tmp_tmp_tmp_msg_0_0_1.psi_magnetic = 0.880064493456;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::UsblAngles tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.target = 47699U;
    tmp_tmp_tmp_msg_0_0_2.bearing = 0.749330894975;
    tmp_tmp_tmp_msg_0_0_2.elevation = 0.342810892957;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JPWVKCSOJOQXEYEDVPYABIBJSEMRMKBMHGCLVYSKFYPVPHWXXZDZJOWFLONXKZIAFWWLGNYBSDGUWTANOIDLCVMQYNPWGUUEQKXWLBXWECBJURQHTPXGRZJHEHKDRUTTMNQFSEADXJFIHPETHQTVPRIMRKYBQGZAZJAAQLAINLUIIZMZWEOJFABFH");
    tmp_tmp_msg_0_1.dest_man.assign("XKWICDHUHPZBXUBNRZGJLMCJHTJPSAIPVHLRWLNFGVWSAVXDVTEUTZQPYPWUNDVGZWULVNVKKTCALTLATZGHJGQFDSROKYRIKZ");
    tmp_tmp_msg_0_1.conditions.assign("WHGIXKUPEKASXYPYHAZKUAVCYFGGMGTDSBPVBTWNDMDFBXEBWJUIIDPMTTQECLQWFECAECASLQMLGNOINGGPQLZJRNURLSHWC");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.0115397012439);
    msg.setSource(9404U);
    msg.setSourceEntity(59U);
    msg.setDestination(28884U);
    msg.setDestinationEntity(202U);
    msg.command = 142U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XLKWHNQFPMILXFKSOTKJJXAPMURCYAUQRTTCDGKUCEDEASDRVUJHONUDKNVOBXWSLFYJWZOSIUDRSBUEHPVBPQMYRBJEOYIWWHLWRKEHVMQ");
    tmp_msg_0.description.assign("OUQBNYQFPRKUTGRCIFKOQKQSZLOVFAESXRSKANPCFUOMOYJGSFKYQMJHCHYRYYQHTXKHXNEYTWJADSDLBIVDOVZRNVZHLXOWJERZHARGVLDPTDOBETAZXFZLMPFEBUEIWMTIUCEMMSBNWHCGQIINWPPWNDLUHDJAXUJCGYJHWDPXGGDFJTMHSKGLGKPFIFWVWOTPZDUXNXSSVQNGYEBCOQACEAUBWCLBECAZJILVTVQRIZKXRKITUMMBA");
    tmp_msg_0.vnamespace.assign("JTUGGSVYAXDHDFMUUTOFPRCMPDQOZBBTBNAHLDWEUZXHHNMVUBJCVTXYXPGZWSYVFIEVLSOASVJREKJXKWADLWQYEKWQDRIJYNEDDSPXFDNPTQWXFCZATPOFSRKHBVKRTPSPAGJLQZLGNAVRGLZNYVRUQOOCTIERJGKZMXNBQOAKHQRHSCSWMMHCNPWNZSMAFOYDZBJCIHMPTLAEIVCHIBGXIUEZMRTLLYQUOXFCUJBOMNCBUWLFQK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KRFEUXGIAHSARDXKLLMHMDEHSGTJLBPGDTNWGEFPPEICUTPBOAUHSBECSYQJIVOEEXTOQAEZBMCBCBADOQSPXUYGOXOHZTPCDCPGWQHCGJVLNXVTKVXMDFWOFJJMN");
    tmp_tmp_msg_0_0.value.assign("DQCLPFNDCMBIYEH");
    tmp_tmp_msg_0_0.type = 32U;
    tmp_tmp_msg_0_0.access = 116U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YBCLWXXFDJRBFJPNKTJZTGMOHMANCMKGRGMZVBKXMQJMKFYQILGETYQJFVLVVDPANWQAUZXKHVBEXSVFTLETWKJRLMSXPDUIMCBLOYCVDQKWLCEOCRDPKTRGZPHYHBGIZHYFCQIVNDFLIUPUOWIRNRXUHSDSVAFQBDUDRNNHHBABZEUSKYAXIYFUZJCPBHGWAPRQAIZEOCQGXOLSVAAOGETTOOZYWMJQ");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("BSVXHITWPMYZTDCPZNFXGKRIEYIXLVFSKFCJWM");
    tmp_tmp_msg_0_1.dest_man.assign("CLKDYDUINZUEKWHAOWIHGBJZPVEFUZTEFHRIPLUWMIXRTZHQMYYIINGBQBHBABCZDHKMFBNNLXPNIEBQSPTYMAPJSQXPYNTDVYUQEXSLOJGDORPTSJAYEJGYRMVDBA");
    tmp_tmp_msg_0_1.conditions.assign("CMHJYOSNBWSAECXAKCRTRWYKUSZQXNBZTUKQGABDOCLH");
    IMC::StorageUsage tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.available = 1699772275U;
    tmp_tmp_tmp_msg_0_1_0.value = 112U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::NavigationUncertainty tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.x = 0.189858929422;
    tmp_tmp_msg_0_2.y = 0.813207590876;
    tmp_tmp_msg_0_2.z = 0.250930401279;
    tmp_tmp_msg_0_2.phi = 0.223008839261;
    tmp_tmp_msg_0_2.theta = 0.665190527193;
    tmp_tmp_msg_0_2.psi = 0.949943720685;
    tmp_tmp_msg_0_2.p = 0.512265031448;
    tmp_tmp_msg_0_2.q = 0.668477700107;
    tmp_tmp_msg_0_2.r = 0.711387415183;
    tmp_tmp_msg_0_2.u = 0.390965927776;
    tmp_tmp_msg_0_2.v = 0.848144056051;
    tmp_tmp_msg_0_2.w = 0.0909422593052;
    tmp_tmp_msg_0_2.bias_psi = 0.279636281533;
    tmp_tmp_msg_0_2.bias_r = 0.0166538969029;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.717403409489);
    msg.setSource(21265U);
    msg.setSourceEntity(21U);
    msg.setDestination(4944U);
    msg.setDestinationEntity(228U);
    msg.state = 133U;
    msg.plan_id.assign("GAMMLGDAEWGOAYDWXRNHUUYILTFCVMEFBFALFNVKEMVMWOIACRIKODKKFZAZRSXDHZCEQTGYQPHLVXHBFIOBHGPSERZWUADGKEOTIUMPOZGV");
    msg.comm_level = 168U;

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
    msg.setTimeStamp(0.590252968973);
    msg.setSource(27985U);
    msg.setSourceEntity(174U);
    msg.setDestination(56779U);
    msg.setDestinationEntity(125U);
    msg.state = 191U;
    msg.plan_id.assign("ZKGTBJVRPGMEDPDBQRBNHSOOMJYNGFKINAIDDKFZZUYJDKFSBPVHLTSFWGOQUNIFXZZHVOEIJPQICSJHUTXFVEFLBQXXWBMKWDCLKRYJYMJJGHJNAAVEAMRQOLVRHAYXSXMGGOGTTBLVRPAPIKAWWECPTWIHCAAMNCULJZRAQRXEBYDRFGEOFUNMCXVHYSUHIQKRZPSPIYWYTODCQTSBLCUZ");
    msg.comm_level = 48U;

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
    msg.setTimeStamp(0.0828809094395);
    msg.setSource(27377U);
    msg.setSourceEntity(1U);
    msg.setDestination(16813U);
    msg.setDestinationEntity(203U);
    msg.state = 173U;
    msg.plan_id.assign("AUSCJXGQFMQTKCWIWHMFSAUONCLPEHVQXKGDRPCNJTRAUKMAVDXMQDJVPREVTPVXVYIPXFJHNTBCSXJYWSLDAXTUNZULEZYKCPKKDWELXHNEOYMZICKM");
    msg.comm_level = 233U;

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
    msg.setTimeStamp(0.426308512963);
    msg.setSource(19428U);
    msg.setSourceEntity(16U);
    msg.setDestination(14985U);
    msg.setDestinationEntity(40U);
    msg.type = 233U;
    msg.op = 230U;
    msg.request_id = 46514U;
    msg.plan_id.assign("EPPDQLXWHGTOKSDQYZBRQJOVHVPLUXXVCQMGULHYFMBZDRPCKUBQEIKTOJBNAJVWOABGBBVFMZMLEATYWKWGPHIQZUKVIWEONMIJHSFZDZYSQSSDUOYGJEAUGAPFOPZLRWCNLCXMYPUFATCFJRCTERICGRBVETXTMMBOXANSLOFRLJHBLQQWNRXQKSZKVMWGDTIYSCJNDHCEGNNJTIDTRCFUYHIPEZXHHGLD");
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.570051359073;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SFBFJPNGWUGJRROSJSYBCDUAIUFGALSVIDPQCMHUEQRCGTJHXTCXUGHLBAIIJLSMATLYSVPPWCPKZZZZOZNFMUYPXWQIVOIOVBYLDZZEJRDANGNNMKVTKOFJEPEALVLLGT");

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
    msg.setTimeStamp(0.266727329278);
    msg.setSource(9340U);
    msg.setSourceEntity(101U);
    msg.setDestination(10654U);
    msg.setDestinationEntity(201U);
    msg.type = 59U;
    msg.op = 185U;
    msg.request_id = 38697U;
    msg.plan_id.assign("NJURUREDBJTCQDDOLERBOGZHCSVVTAHQAFDVHFDYBMEWXCXTEYOJFFISAO");
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("YLHWORBLRBZSRVLKQOVOACVOTUPGLVNBJGAFDXNHLTLAKBUAFQDZFKHPMAXFMEKGISHCRWUIMYSWYEQXRQNUEGLVCGAZETPNCCJVUKPNDFVUYDZOFMWVXCMWQBHHOWJWKMTOASYDJQZA");
    tmp_msg_0.links = 4127385729U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IHDJOZCFCLLUJYKEUJZRUAYWONWMJGSOYTJOUQGWEGKJTDPALUMMFHLEAESIGVFOCHQWNDOAWMWRLCAZQVDZEMRYIYVJWSHLSORYALFCSIONUTSBEMCVQXAUBVNKUTDVBZEIYQPOGVRLAFHXETTXYVGBDPMXFKEKCPIILCKSKZJQDTAIHXWBOKZF");

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
    msg.setTimeStamp(0.197321699934);
    msg.setSource(10977U);
    msg.setSourceEntity(220U);
    msg.setDestination(25892U);
    msg.setDestinationEntity(84U);
    msg.type = 161U;
    msg.op = 85U;
    msg.request_id = 6577U;
    msg.plan_id.assign("KMYZABZOYVQMEBDCDONLIKANGLSUVSWSBTOFHWNJAUVFTJDFQABY");
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("LPQGUUMNCUQQOYLFWDDVJFBXLBIUHMZXJXYDVRFQMIBATCQAAIKFAIAHKBWKXGQLYAVKSRPSTIRSIDGIVNQOGERRLYRUTVYKNCIGZMRPMKBOWHFBWOOUMSWGUEDAESHKLUOXHCEQJHSTFTTGMUZWSGOCLDFHZRWDDKNAHCPKETHXOEKWZLEZDEEJYNRESXDHTFXZGCFJPVRJCPJSLYIVWPIZWCYNQPZAMJZFBLMUBATOVVNYPVJBGYB");
    tmp_msg_0.value = 144U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TZXDWYKKOPXJSMZZLUIRQBMGPWAIFRJAFVRXVUEYHUTYTPUHROHCEMWBHVSQBNNCLMMANEYKVDBOGGGDLERFTWOSCIVNXQIJKDNZDTSFROBQVOKCWHWJJUJPYXAMAPEFVJQLNZUORZNETSDTIMXCTOEIYFUESRILJHCHVBYBLPOLZBUJPNBEBGGPKGXHZAGDWSCLGYJOHZSSMLQQFKMIAHCTENAWPKDCVXD");

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
    msg.setTimeStamp(0.436228117302);
    msg.setSource(32337U);
    msg.setSourceEntity(142U);
    msg.setDestination(52160U);
    msg.setDestinationEntity(15U);
    msg.plan_count = 1368U;
    msg.plan_size = 1927356365U;
    msg.change_time = 0.459956180223;
    msg.change_sid = 24512U;
    msg.change_sname.assign("LKDZNTJXYDLZSDPEWCAGAVYNYLRZEFIJCMHAJMWQUGKMUTNZUNEGRTQIRNKHBRJVQZOKVJCTYBPAXSBITTBQHLMNSDUMUPWXSREEVOBXPIDZOMGTTYSDNHJIAFPXHVIJYFDNJPKOWNWGAMERMHFGDOVOUZOUPEBXWFAWALKSTHRSXULKXFFPQVLAYBBLZRSBHKSCFQWBEPOYFGLNCVJIXXIIVDEMCW");
    const char tmp_msg_0[] = {117, -19, 58, -92, 123, 69, -10, 17, -111, -47, 45, 35, -69, 9, 54, 11, 79, 38, -82, -118, -95, 21, -49, -127, -37, -53, 54, -51, -42, -74, -21, 30, 63, 50, -92, 54, -33, -94, -28, 66, 58, -68, 64, 53, -115, -46, 82, 46, 6, -102, 63, 25, -66, 55, -39, 91, 85, 34, 95, -50, 122, 19, -67, 29, -41, 45, -39, -57, -32, 42, -66, 56, 79, 0, -58, -27, 48, -119, -11, -73, -115, 57, -42, -117, -3, -23, -105, -25, 6, 78, 76, 104, -115, -74, -119, -56, 70, 62, 34, 100, 19, -59, 47, -113, 73, -42, -18, 32, -54, -103, 44, 93, 13, 4, 56, -23, -32, -83, 80, 76, -30, -16, 30, 25, 55, 16, 109, 88, 72, 21, 8, 24, -89, -96, 107, -75, 13, -43, 35, 53, -79, -70, 122, 99, 35, 83, 90, -28, 84, -16, -109, 78, -58, -114, -57, -44, 81, 3, 51, -56, -47, 92, -23, -122, -110, 30, 33, -17, -98, 53, -88, -107, -94, -86, 31, 68, 48, -76, 9, 44, 20, 72, -119, 44, 29, -77, -44, 74, -32, 94, -86, 60, -3, -50, 1, -3, 60, 18, -55, 0, 107, 71, -25, -126, -85, 21, 92, -11, -91, -117, -80, 26};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CPLIBUPTCYMUOYONUGGYUSZHTXIAIPTEFYHXVSYVHYOXILZUZHVQTPIXCFVQPTWKORABFJWAKAEMPHMIJYCJUGJJJWZRDWLVJFZZNHNNKOBUODAQLETZGERWKCRPSQDVBTDNLEJTWIFBGNCIVVTBOAUCJGSGRCQZPFGRRXEDSBYALLMWDMZQEBHMDKUDIBKCFEMDKSXHLFTPQSRXKQJWOHMDVE");
    tmp_msg_1.plan_size = 8098U;
    tmp_msg_1.change_time = 0.0238629627124;
    tmp_msg_1.change_sid = 6512U;
    tmp_msg_1.change_sname.assign("TJBJEFZZIAATQPFWVMPQPYJWUBSJDWAWUTHDJDGXSKYLSACOPYKONFEHEHKVVJFRBVIRGYEBRKZQSTYFJOBQFOTEEKZLMOWZJJZHPUYYQREEMCSCKVFMIUXVLDWMDDHZRZWSMMNUTLOHLAXTRXWXOMKVCDDOWGXPNFSLYCINRRXPQGHOIUUINKSTAGEKBLNJACNCZQKIU");
    const char tmp_tmp_msg_1_0[] = {78, 17, 105, 46, 14, 53, 58, -72, -62, -36, 21, 33, -39, 65, -44, -100, 102, 8, 42, 50, -13, -64, -50, 50, -59, -128, 74, -112, -110, 117, -102, 120, -17, 2, 86, -48, -52, -67, -56, -70, -79, 104, -30, 42, -20, 47, 101, 18, 118, 74, -49, -127, -98, -71, -77, 100, -100, 100, -86, 83, -19, 27, 90, 17, -98, -4, 63, 53, 76, 44, 73, 16, 93, 62, 83, -106, 104, 86, 56, 25, 48, 33, -34, -128, 122, -91, -59, 35, 58, 45, 50, 99, 96, -56, -113, 90, -10, -17, -49, -127, 35, -63, 16, -77, 29, -127, -32, 43, -71, 119, 31, 113, -3, -27, 91, 66, -83, -18, 73, -27, -39, 58, 70, 69, -104, 108, 34, -65, 25, 94, 25, -35, -125, 65, -41, 111, 114, 122, 50, -96, 84, -20, -68, 70, 116, 52, -95, 94, 29, 48, 117, 125, 37, 38, -40, 116, 44, -119, 65, 108, -35, -43, -98, 24};
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
    msg.setTimeStamp(0.519895469073);
    msg.setSource(64644U);
    msg.setSourceEntity(145U);
    msg.setDestination(4882U);
    msg.setDestinationEntity(187U);
    msg.plan_count = 1508U;
    msg.plan_size = 4105207387U;
    msg.change_time = 0.776723842049;
    msg.change_sid = 52942U;
    msg.change_sname.assign("LGKAJKXHRUTOVYXSXKMHVEOONLKMHYAWQFGGFJDVQCBDIIUARRTLVJXANDFCZHGHEAAQFZRVTTKSYLBLWUKTDEMFXCSJZPQJMJWZBVBYXBWZGKOQICHEXFXJUZXHSV");
    const char tmp_msg_0[] = {-19, -76, -6, -104, 39, -13, 49, 77, -48, -64, 95, -60, 38, 15, -5, -99, -73, -83, -115, 124, -105, 47, -108, 99, -118, -55, -107, 57};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("YQHZSOPWGEFIXATGAAKSVREIICZQGHBKYADHRRVLNIFXOCMFYOFHOLCJDTBNSDQLFKGAWYJWXRJWLPLEJHQTPCSJNIYURVHYZEVBMDXYJGSAQDENWVPTWONNEHGUULQPQEUSCYKMDZPZZSLJUKCHYPKRZABWSZUMDEUFNGQBNUXUIEBIIPMVMOGZSCATTTOPQVKCLRMTOTOJRGWXZSUBL");
    tmp_msg_1.plan_size = 17141U;
    tmp_msg_1.change_time = 0.000582530038946;
    tmp_msg_1.change_sid = 18302U;
    tmp_msg_1.change_sname.assign("OJSVNQYQDDTZSIFVUIUWSHAXFAABSEXGGFVZHSEOBMAQKHPUUAWEUQVFIIJCAZPHLDDNUXHVTMWNZRYTKOMOJ");
    const char tmp_tmp_msg_1_0[] = {-38, 37, 119, -11, -66, 102, 24, 76, -26, -122, 17, -108, 56, -32, -6, -52, 26, 103, -95, 23, 8, 101, -65, 119, 48, 44, -55, -51, -126, 34, 64, -31, 19, 25, -127, -45, -35, 93, -79, 126, 26, 109, 109, 103, -119, 90, 61, 100, -33, -121, -12, 92, 54, 118, 99, -34, -58, -31, 79, -110, 99, -95, 105, 8, -118, -23, -80, 110, -29, 87, -43, 4, 9, -34, 73, 49, 114, 3, -65, -85, -107, -98, 3, 94, 11, 72, 84, -111, 83, 99, 116, -126, -120, 50, 54, 79, 90, -66, -62, 58, 85, -63, 48, -46, -74, 37};
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
    msg.setTimeStamp(0.013348761223);
    msg.setSource(7471U);
    msg.setSourceEntity(32U);
    msg.setDestination(32451U);
    msg.setDestinationEntity(213U);
    msg.plan_count = 55794U;
    msg.plan_size = 2399816958U;
    msg.change_time = 0.00416002898357;
    msg.change_sid = 44303U;
    msg.change_sname.assign("ACNJTNOHEQJRVAPJISDEMEIBLVZYCVSHJCFIBMGLQIHMFBKSENTJAEHPGFXCGUJXDWPKHYMZEYGLSOVHIUAPKALFVRQLNZRRYARNITPAKGHZEQRIYWUDSGQNUJWDYBLBTOZUVLVPKHMCOBXBZFMTNNXSICWTVWGJZYOPUQDCHEYZNWDQODDLFSMQWXOXEKTQWDUAMFRDSXLRAFPZCYNZTXAIXKVWBRCQPMGUWEOXURO");
    const char tmp_msg_0[] = {72, -57, 106, 54, -6, -15, 4, 95, 34, -8, -36, 10, 17, -56, -42, 117, 42, 83, -69, -123, 4, -49, -55, -17, -25, 112, -107, 54, 60, -127, -66, -118, 109, -105, 92, 4, 52, 26, -2, 26, 11, -39, 85, 80, -37};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FICTDIZNUIGIBFDGFZOHSACJLBJQTVGJUKCMIRLBPRVJWAPMEMLAKHQZFZWQTPJHCGRDWEQBVZMVBVCFEMITBYUPZLFURLOYGWCPKTOYDNPOSJHTHUDRADSNXLXUBGJZEEJEUAFXOIRRLTHCKJYSKVSAEELDDMOTKJZXPWWNPQSIUWFXGHWNHPYZHHCENUOQURPYAWNQYXDMAMGERGKSVWFTXVTYLNCFDMOSVQBIQNIRQSMXKC");
    tmp_msg_1.plan_size = 58610U;
    tmp_msg_1.change_time = 0.80730210415;
    tmp_msg_1.change_sid = 39413U;
    tmp_msg_1.change_sname.assign("DDBDTSJMGVCIHRLWSFYAKDCROXDZFPIEXTRQVEUHOZHAALOIVVBRLIMJCMJNXSBTPZYWJNUQTDZXDWFBCMS");
    const char tmp_tmp_msg_1_0[] = {107, 110, 22, 43, 10, 122, -22, -25, 68, 12, -28, -70, -79, 11, -108, -120, -22, 7, 112, -94, -68, -125, -128, -4, -108, 28, 56, -6, 113, 32, 55, -127, 57, -8, 33, 117, 113, -90, 103, -121, 77, -55, 41, 12, 36, -45, 92, -49, 106, -40, -22, 29, 94, -90, -66, 74, 87, -102, -25, -65, -72, -38, -121, -29, 79, -70, 92, 92, -78, -35, 65, 2, -117, 89, -88, -14, -107, 73, 55, 45, -9, 119, -3, -73, 95, -53, 1, 71, -15, 38, 22, -44, 52, 102, -97, -48, 108, -67, 125, -25, -93, -40, -113, 52, 119, 13, 3, 98, -61, 113, 24, -25, -122, 41, -62, 57, 97, 20, -77, -90, -42, -105, -14, 19, 55, -84, 102, 75, -94, 80, 92, -64, 51, 37, 102, 66, -122, -5, 90, 114, -20, 114, -115, -31, 21, 91, -38, -90, 48, 23, 32, 35, -85, -52, -36, 83, -9, 93, 16, 12, -111, 5, -91, -3, 74, -24, -67, -90, -15, 98, 18, -1, -16, -42, 18, 102, -116, 46, -37, 34, 121, -72, 25, 115, 2, 115, 110, -58, 44, 60, 73, -2, -33, 31, -42, 27, -38, -12, 14, -78, 90, 124, 97, 64, -56, -18, -64, -12};
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
    msg.setTimeStamp(0.646092032572);
    msg.setSource(46599U);
    msg.setSourceEntity(11U);
    msg.setDestination(3664U);
    msg.setDestinationEntity(107U);
    msg.plan_id.assign("VANFESDUSHMPHCZFUQTCDAUDGYNOOPWROJVXITHFHXNMQKETULXMBVBTDIJWVMINAWIXPNOLQCPALLGIFSBLKSRPKGXYZXDCFCIOPDWYSNZGULWYAKOYORHBJZGGXBFHJUAJHTSCTFZSZJGAGMAQOLNJWNEEKLXKEUSBMRHPQVGIRARZQDABRGUCXUMUFVKIZHBCYOFNE");
    msg.plan_size = 28684U;
    msg.change_time = 0.442921440258;
    msg.change_sid = 41398U;
    msg.change_sname.assign("HFJHVROOFXOGFWKTTBGROQPBQOJFFEXXVKDEVNGDINMCCUGTHQOCTGWMNAWLEBQDZLYGUNNECYHZQRLAJUKLJZWJZYLGXHWIRRKALDFAYTUZJPDZUUBEAMJUTYPCHPYKABNKDKACELNBHECROSROWZSJCMMXEYPAHVMQQIEZPXMVNSJMUXRHRTFDDXADQVPKFIGJTLVIVDPWYISWGIVBBTOQZNRQISLLXPNUHMCCTYBBGSKO");
    const char tmp_msg_0[] = {-66, 91, -18, -46, 113, -44, -116, -110, 48, -120, -2, 44, 89, 80, 93, -65, 41, 119, 69, 15, -42, 17, 90, -19, -10, 109, -53, 35, -95, -11, -27, 41, -44, 90, 119, 29, 100, 63, 47, -102, -75, -91, -123, 63, -118, -97, 126, 99, 55, -118, -73, -102, 87, -111, 65, -113, -14, 117, -108};
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
    msg.setTimeStamp(0.803215079926);
    msg.setSource(5913U);
    msg.setSourceEntity(212U);
    msg.setDestination(24361U);
    msg.setDestinationEntity(162U);
    msg.plan_id.assign("JMXMFXMVNCVGHISGNABNFULPBJMPUVWUPFUBWFJEDYPGMBSCOSYXMPQIQYPNORBGPSEYPCOVUKTLLIMQDWNZLRIHDKNZRUVXYCQAJBHOTAVJOSRRODHDSZJMAWFZIQOXWDSHGJWNUXGQZOBPOGNLYVNXFYSZXTRQHTRUQBKHKKJDCQZTKYIJRXSCFEKWFTWIZTYLUCIAVAQFEDWFULCLGABEAOPYKRGXECDLEZCTLGW");
    msg.plan_size = 48451U;
    msg.change_time = 0.555828245513;
    msg.change_sid = 13470U;
    msg.change_sname.assign("DBAABMZATLZDQZXJROWOVSMHFCQSALCYZOIJUIOIWJTUJKOMFYLCNUPMNDMIESOLPPSXJPRZEUKZLLVZLFLVQVFDKSDVYHNUUKKJXHQNIWTYRRKAQYPRNNEQRZPGEFGWMGHURTUCZAEXSOYIBCEWNTPHDPKMUDHGQNSJCCKIZHTYWHWTVBKXPBUIBRXPOFQJTYNAWVGCXQLSEEHJXBJVYATMGBIOTXB");
    const char tmp_msg_0[] = {9, 101, -103, 4, 51, 70, -114, -22, 125, 46, -104, 96, -27, -77, -127, 123, -62, 118, -127, -16, -8, -54, 83, -89, 115, 10, -60, 111, 122, 8, 27, 23, 67, 123, 46, 103, -83, -19, -68, 126, -114, 13, 68, -30, 40, 19, -5, -1, 54, -121, -25, 95, -125, 79, 24, 8, 107, 81, 36, -75, 9, 8, -118, -126, -43, 122, -43, 66, -87, 121, 66, -70, -113, 20, -61, 104, -30, 72, 37, -121, -48, -113, -63, 34, -47, 31, -115, -103, -87, -33, 39, -22, -51, -52, -72, 106, 16, -105, -125, -118, 25, -22, 82, -5, -78, 99, -63, -46, -7, -81, -11, -82, -27, 16, 61, 47, 22, -44, 77, 69, -86, -35, -2, -51, 9, 52, -114, -104, -119};
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
    msg.setTimeStamp(0.961368937715);
    msg.setSource(27828U);
    msg.setSourceEntity(48U);
    msg.setDestination(18380U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("TPPXRGYOMWCS");
    msg.plan_size = 63750U;
    msg.change_time = 0.253835606131;
    msg.change_sid = 3273U;
    msg.change_sname.assign("PFGMNJDKELJLAPWCXADDLDGVUQROCNHZHXZBJIYQMUHVMDKAKJMGQXFVBKVEJYJNROUYKFPSVPTPCZOTSIBWPNUOTDDSTZTC");
    const char tmp_msg_0[] = {-86, -56, -65, -28, 94, -7, -73, 60, 61, -64, -91, 30, 117, 81, -70, 105, -57, -125, 59, -36, -10, -23, -61, -51, -68, -78, -43, -108, 41, -14, -28, -44, -122, 29, 82, -101, -85, -8, 91, 57, 74, -126, -33, -98, -72, 71};
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
    msg.setTimeStamp(0.735528230638);
    msg.setSource(56803U);
    msg.setSourceEntity(215U);
    msg.setDestination(58602U);
    msg.setDestinationEntity(54U);
    msg.type = 42U;
    msg.op = 116U;
    msg.request_id = 55154U;
    msg.plan_id.assign("TYUXFBAATUVSTYZIOCXQJAKZVJMMLJCPRSLUBGDOQDAWTJSVHWYSJNLISCHHBVPFZMAMGEUVBTMYEKBINMIHOWLRRKWHYOLOIQYGJRQWCTZDAHFJBGQHGFSWNBQZNRAFHUWDCLVNTTQVDRTHADNMXGLOXPSXKZELDLGUZJIISYUXBDEOHFFGZTEJPPCAPMIIPVMKXVU");
    msg.flags = 10733U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OWTONAULCCZJTHQBEXDSPYAYJCLINITVBMLOCDEPIYVDCXQSWPAKKBKTFFEJX");
    tmp_msg_0.lat = 0.163569940144;
    tmp_msg_0.lon = 0.141157701212;
    tmp_msg_0.depth = 0.404889136897;
    tmp_msg_0.query_channel = 106U;
    tmp_msg_0.reply_channel = 59U;
    tmp_msg_0.transponder_delay = 167U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WVFCRTAUIJGQGYZSIPGXMNHVMUJOSETTNKJWUVNDFSRDIXWLFOAZWQOCDPICIJYAZBPFNEWLLPVXMIMYRRA");

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
    msg.setTimeStamp(0.675282266624);
    msg.setSource(41245U);
    msg.setSourceEntity(181U);
    msg.setDestination(50076U);
    msg.setDestinationEntity(218U);
    msg.type = 129U;
    msg.op = 6U;
    msg.request_id = 24058U;
    msg.plan_id.assign("ETDKPABRGLZA");
    msg.flags = 27457U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ACHKLDLRJGJNPTWXCNTUTFMMUSYRHYVXSZUBJLYGINVNFAXZXFXWSYNKBGIQHFUESGXXHQXRKAECABOOSKUETVYMHJDBZVJFYYRMRYEBFJERQWDFUXGHMUKCCAOZTDJPINUSIMODFOQWKJQEYYLBDVWALHFBRTLIOWNGQCAWPJCZHIPCUKHTRPLSN");
    tmp_msg_0.description.assign("ONUSRRCFEBSIHYINLUSJTYYOKHDFJ");
    tmp_msg_0.vnamespace.assign("UPLKGDKYTDKLJOTYXEJKJZZYNV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OXAWFDUWYNJTWNKMCIFUISDBSAYZKQCMYBRUHBR");
    tmp_tmp_msg_0_0.value.assign("VGEHQUBREDFQHLSRVQIEKABMLYMGEKAFRLUUVDOFWJVOJMKMTFUOWENHEYCBYRFDFGWWRWRLTROSZDSNMLXRAOYLSWCGOJCRQPUJK");
    tmp_tmp_msg_0_0.type = 178U;
    tmp_tmp_msg_0_0.access = 129U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("EVLOXHBLXRPNFTVXJUMTIJCYZKORGSHMTBJYJTOGOBHFHMRNEQAOXHTFUAEADSVRUMSBVSZFNAFUQIDJYAALIABKEJXPPXQAHQEFWDLXGYVWJINPNML");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("WTJZHKGRDOHQTQEYJJRWNQVMBIWAZCIFJJAVJBECIPXNKTNANMIYJKTQNXERCCUSCYKTZTPLODEJZAONSGTESUHBHKECZNSCGWZXYXYDBXZWAGLBPSGRIMTELPWTRMVROPSKSDIPVDPOZKDSBQVFFXMVLAUFGIRLWFHEYZQOOGYAMPFCFDUBYGLHKQAILDFISMDJBXHGNOLFEPUUVAXUCWUTKOZWUHPHABFOXXIVJQKVQUSMMLCVWBLY");
    IMC::Alignment tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 50515U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.17656075847;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.828895779024;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.90298306707;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 4U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("ELNRDQLVLRPCIKSD");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::ProfileSample tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.depth = 5405U;
    tmp_tmp_tmp_msg_0_1_1.avg = 0.996545278019;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("DWNSREJPIDMNGBZBXTVTHRLCGFHSCQGIUUBOXLYDDEZVLKWGZLBLLYWPBBTHOXNFTKQFDKRQUWHAVCAQEWFNSIVMROYXESSYZAKPLZHGAMGIBHVUYXOJRDOWFYONUTQODPTFCUEXKUQXHACSIWPRUJDFMWCTNCBSNWIPMJKVCXSWLATCZYVHYFICVMFXIX");
    tmp_tmp_msg_0_2.dest_man.assign("EPXADRZUREHIKNJLLGEJSMXFVRVOASUOIHSHKUURFBOHYDMTRQXACKYAJHWTGSOOZWNJYOAXBKCYZVPMZGXQTFBZFHRKJLIEDMTDGPHZDMPIUCSKWJLIFWYMFRWIDXGIQCAMBWRHDDNNZPXGJGINCPYHQNLTUNQYAZOCLBWJNOAPQVVOXFEKDHTJQFUGBYUQUPILUSSJVSVANLBEPTMSKBOKBXCSGFCVDEWYRVMZQFGTVCTEBNEXYEPZMLRWW");
    tmp_tmp_msg_0_2.conditions.assign("GWFTFIAMRNRXVVXKBILITWWRSURXNHFHVLPDRLCKMXACQGOQXWNPPCEEQEZHSDGCNTCHPDRQKJOBGMEUYMAWGZVNVPGFZSXJWAZYXKIQXOMRTCEKUEHIJMLTZCHDDKBDIJLYLXYSOHTVASJWONDEDZYPBSWFUUNAUU");
    IMC::AcousticOperation tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.op = 147U;
    tmp_tmp_tmp_msg_0_2_0.system.assign("KCIYJOFGAVZPTEQWGVMDQIZIGLMOAERLNORJVTVKFWEOLXJPMAWIICHBOHPPAFTTDOMVZDTXXGKFVMUZPTFZBFIKHCTRWDBYXWWWPHDMZLNHVNGPCILJPUPVJAEOSDEFFUMUUCDRQJZUKHRKBGLHSYBRBBGIQYXYKQUQUSXJHIXBLHOCZOCGNWCOECSWSYMRXBKDYYCNLRINUQMETGTEGBVYZNSLNHFZEVXRANAX");
    tmp_tmp_tmp_msg_0_2_0.range = 0.49294879002;
    IMC::RhodamineDye tmp_tmp_tmp_tmp_msg_0_2_0_0;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.value = 0.239004495173;
    tmp_tmp_tmp_msg_0_2_0.msg.set(tmp_tmp_tmp_tmp_msg_0_2_0_0);
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::OpticalBackscatter tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.866397480282;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DCEMLTBXXYTPCFQGHYQVPVIMWUCMMWAGQWLDXTBKPMLQKAIDHXOSJGOUKIJMYJZCMUAHGRYPWJCSTRUPNWUZABULFQAGKKDEENYONGJKDRZSBPBXNRLROFXCFVFFHOZOTECRIJEZZDFXKJEDSVNILUMW");

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
    msg.setTimeStamp(0.505507542855);
    msg.setSource(51498U);
    msg.setSourceEntity(227U);
    msg.setDestination(41203U);
    msg.setDestinationEntity(225U);
    msg.type = 13U;
    msg.op = 186U;
    msg.request_id = 5802U;
    msg.plan_id.assign("GKUXFIHMVEJQXMIBINRTDPKGYBWPUNYRZPJKMXCSHKCVJWTRGDEDDHCRAFCTUQYPSGYMQOLSNPZWHZKIOVMZRGIVBCTPIEVUVNJRMUWNWHUXHMNTZHCDBXFXCFMLZVNLQQJPSOTBWDJUBECS");
    msg.flags = 36402U;
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("ALJBSOJHXCWZUCKTILNKXRJXACBEHTYIUDWBZTLJVQWSZZVOGCPIFZEDXHXJVZVZIQIUPCAHORGTMOHZENAKQGKROKVGEJFYULPHUPQYAXSSCRWGOJUMKNMBSVEMMBUTXGRFSBKXWUNNQIIQYAPHCRTBFYFNVRGTTQBYCIXBEMPGMWLCDWWQJYFDMAVNYIHZFWKA");
    const char tmp_tmp_msg_0_0[] = {-119, 32, -76, -107, -26, 85, 3, 48, -86, -18, 33, 48, -20, 113, 92, 34, -78, -66, 113, 65, -86, 4, -3, 7, -115, 42, -77, -121, 64, 11, 42, 77, -46, 114, -112, -115, -121, 31, 126, 57, 24, -11, -38, -20, -106, 2, -99, 89, -15, -105, 87, 6, 55, 109, -83, -123, -18, 41, 71, -102, -57, -22, 54, 30, -81, 58, 81, 44, -18, 93, 14, 106, -4, 116, -50, -32, 64, 90, -49, -100, -126, -27, 43, 102, 6, -63, -44, -70, 27, -45, -53, -43, 51, -82, 11, -77, 7, 1, -126, 13, 111, 0, -40, 21, 87, -57, 84, 102, -105, -16, 10, -87, 65, 39, 67, -96, 66, 11, -10, -49, 32, -65, -100, 120, -124, 30, 8, -107, 32, 87, -109, 31, 21, 94, 100, 34, -95, 6, 37, -6, 109, 3, -115, -57, -104, 36, 50, 83, -116, 95, -87, 96, 102, -56, -123, 3, 93, -74, -54, -14, -92, -49, -18, 52, -35, -110, 92, -31, -107, 87, -74, 91, -4, 60, -93, 34, -119, -56, 86, 115, -15, -24, 63, -47, 6, -122, -120, -5, -57, 77, 53, -103, 63, 92, -87};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MVVBWOLOSLNDNFTZNQXYPJAEPFQTUAKOAKUFXSSVJGWVXRTVWPOAIKVGCPWNCJUWTFYUHIMUGBJCTEHDSYYTBUBLFXEPHITJKFFENSDCGWBRHCZFWDDCXXBREYQJOKSNIIYPDAERQBNZJZPBC");

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
    msg.setTimeStamp(0.303818061318);
    msg.setSource(22862U);
    msg.setSourceEntity(73U);
    msg.setDestination(3725U);
    msg.setDestinationEntity(184U);
    msg.state = 35U;
    msg.plan_id.assign("AHESVOBGXHUNGARVNZKMYLPYGRPOTIOIEQNCAZRYKNBKZIPUXLCBPZVBPYKWSKCNLLEGOWJJDBQQUQEVLSBQXDOPTZYIHDWZYLFKXNVNFVCDMTGESURDOAMSCOMSVCJWWXFVLAVQOFJGRHHRGPEDJIGYADELQHEETIWCFJMFMFBAHXSDXPDXOLWZNOHF");
    msg.plan_eta = -1786132896;
    msg.plan_progress = 0.99065390556;
    msg.man_id.assign("YXSYCBAZUXUADTWBMRGWYXWFKOETHHZZLKCDAECPDXMHQFCGJOBCEDPVFLYIHFZJUXNJWQVYHAFRFKVFAVZNISKGKOXBXDQSUPWQRGQAFHPRSHBHDYSPGVMNEDLJICZXOGWUKDWOUVDQBTCNBXMMISQTUGTBMWEVNPOHIZKNEIZLNEEBLFXSJGEYCWVLNAYUSTMRALKOVVIKNRWLBAZ");
    msg.man_type = 45014U;
    msg.man_eta = 1391348127;
    msg.last_outcome = 37U;

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
    msg.setTimeStamp(0.212004300831);
    msg.setSource(6910U);
    msg.setSourceEntity(237U);
    msg.setDestination(64528U);
    msg.setDestinationEntity(222U);
    msg.state = 128U;
    msg.plan_id.assign("VGRJKSVNRIDYSCNHLYPWVFTAGMLUGHBLRUMDSRKCETPGYLKMQMTQMEDWWLKLTUBNUECJQFXBZXOZPAIMNKVOSLVPJFZWEPJHXGYZKEDGCSBNJDISRBUJEYLFUFZVADAGNIMJECEBDOOFEWDYQJYNUNRAGFHTKHRHTWSIOYPURLRPHNMVSCDXYWBHOJSEIKZSO");
    msg.plan_eta = -398168375;
    msg.plan_progress = 0.648623380555;
    msg.man_id.assign("ANTSJMNDITLWZMNQHZCIVBVMAAOPCGPFUYNMGQWPYUGLJMVDIJGWWRRKBHTDLQZOJQVUFCBKR");
    msg.man_type = 632U;
    msg.man_eta = -1727766470;
    msg.last_outcome = 69U;

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
    msg.setTimeStamp(0.605996868348);
    msg.setSource(41026U);
    msg.setSourceEntity(252U);
    msg.setDestination(40656U);
    msg.setDestinationEntity(92U);
    msg.state = 15U;
    msg.plan_id.assign("ARDFTBMGNKVPJSNISYGPKWLCHQXGIYWCYZLTBPVGRDRDCTVHVUKZMKZXGEXSENFAIZSAKMUWOTBANSNVECQTFTFDIYYQLWCXQQVXCBDQUSJBOKUJFUEMZVCRHBAIOTAWPZYUPDROMXMKEZCMQNJFGICHLRQIBVJGVNNTAYAPZDPJNYMQFUMHOXKIBLLPJGFHXMWULONEDOKSVSIBSRDPEZ");
    msg.plan_eta = 1687781120;
    msg.plan_progress = 0.976308869221;
    msg.man_id.assign("OQZVIKCBDARZPHAVVHBLFKOTWAFTKYVQGFUDUZOFKMVXLSYRVTCNUTLCNYXOMBBVNHJAGJIOROXWQCJGDJMTQEFDSB");
    msg.man_type = 26852U;
    msg.man_eta = 1032610971;
    msg.last_outcome = 155U;

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
    msg.setTimeStamp(0.0476495462228);
    msg.setSource(22669U);
    msg.setSourceEntity(233U);
    msg.setDestination(50402U);
    msg.setDestinationEntity(165U);
    msg.name.assign("EZKJQXKDHERYFRKVMBWZJVJMBQUAIBIHOQFDNIDOPFDZNGMNXKCUZPUMUSOKNPZXIBGCGVAMPWHAAAHWTLZIHJYTVEASHWCJDFTWLUKDRUMQCLOWXMUCRNTIFQNELVWGYXHGFCYANPOEVTYNSPOOTBDKGDTQSSRBJXWHMJTXQZAFYEUXZCBOKFUQMPHJOJSZYGLRVFCCALYEKXXSYBZTOPQLEQVVYRAWBGJDDUN");
    msg.value.assign("FBMMIFZYUKKYRCZNBUCADEZGHYSEOZOTLOMRSHXNCCXWDRBGKTMGPVFOMHPGYDUQVYJFPNKIUPLSQCEBNRJNNFNGRPAOZXYKSDCTDAOKSXVZXVTOIQFJQAZWWJRVDTJDJSGWNOPDMOZXTABGKXLDIRLVMC");
    msg.type = 204U;
    msg.access = 232U;

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
    msg.setTimeStamp(0.382512295684);
    msg.setSource(28870U);
    msg.setSourceEntity(51U);
    msg.setDestination(26429U);
    msg.setDestinationEntity(167U);
    msg.name.assign("RMKVJQHNMURGCBXJDPGHQFKYAJUVQE");
    msg.value.assign("BSWVPTVHQXKOHXMLZZNCBUXTHBFHPCPQYQLZWDYMEGBJVKZXPYDGZJTTMFRMOLFEODMKHLKNTPXCSDCIAUFDRORUPIRYFQBFJD");
    msg.type = 96U;
    msg.access = 232U;

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
    msg.setTimeStamp(0.294995843162);
    msg.setSource(3933U);
    msg.setSourceEntity(122U);
    msg.setDestination(53849U);
    msg.setDestinationEntity(210U);
    msg.name.assign("VMPLKSUJJDCHLBXXHEMPXUGNVMDQWOADGZYNHASFDKLEKJUHPLXMBTNZIXENIAPVWZPILIPRVRMVQHLRDWVATTONWAHYPYQAJORYLGIKAYBJLZOFIUHZVBAYWUIPFBRCFTGSIOMJUGPUBMYQEHZCSOTD");
    msg.value.assign("YTAYIUANDTTNAQGHGMJVQZWFMPLCPMJREFRZQUFEIVGASQDTURYTSNLLNOJLMUBBDVVCNCMSBBHTKQJIW");
    msg.type = 51U;
    msg.access = 32U;

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
    msg.setTimeStamp(0.572541046828);
    msg.setSource(58899U);
    msg.setSourceEntity(190U);
    msg.setDestination(38479U);
    msg.setDestinationEntity(62U);
    msg.cmd = 32U;
    msg.op = 55U;
    msg.plan_id.assign("SWGWEPUUNQEJIBRABHRJLWSMVYGBBFGOQLTZOBLXTKOPLXBNKIQXLPJMKUDWYBKJPHNGUBCJTZTTZNKQVZHNRDEFELAURHYQAIQVTZCMDTMNXCBNVAJRGEVCCQGAXIXLSSSMXRVOCROEVZRYMTPSIKWLHHYYHPMMESGHCAJRWUAJEUGSUVIAFNSUDFCZZ");
    msg.params.assign("WPUSYRHDLQYHMOMCYOVQXXMYUFOJPJSSJKTQVLMOTPDERKCLLPDNEBFCPNFRNQDGHXWCPAMRIVBBHFXBK");

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
    msg.setTimeStamp(0.688352325074);
    msg.setSource(25459U);
    msg.setSourceEntity(150U);
    msg.setDestination(48715U);
    msg.setDestinationEntity(236U);
    msg.cmd = 16U;
    msg.op = 85U;
    msg.plan_id.assign("ADEAYKBXEVNQBZBMYFHSRXGEKZWFEJLLCSTTIDSZEUTMASKEIUQOLKBLXOVYRXAMBYEDSWLKFPNXFPGYTIAVGBMAWKPLVJZBKPHCFMNZWNLVRQXSDIUETVRCPESBQJWUNZWPBGYHWLCCNNXAAZOROJIRPVXHCMQQQZQIHPGHOITMDDJDVHHYOLEGDBJAFHUPMGYWORDSIOCIFNZGOVKCFGRW");
    msg.params.assign("JFEGHZGKMXQJKYWWUPNHFJTLMNAVQPVBORVYJYUGSLWPIZDLICUTXCMWNAIINFXXACYAJFRVWSOTLFBBQRMSSHZEHEKBIDOIVGZJYWQDFUCAVORQDENYYKKCTANULPCXXLLXQBAOGKIQMMVDGPQFRHDROBPLERHJYHGSYTJGRSGJIMZNOTZ");

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
    msg.setTimeStamp(0.0157301805591);
    msg.setSource(9256U);
    msg.setSourceEntity(149U);
    msg.setDestination(1852U);
    msg.setDestinationEntity(187U);
    msg.cmd = 77U;
    msg.op = 223U;
    msg.plan_id.assign("PKWZRATOPXIABNHQGZVVRTNQOFXYOBNRJURJLEMYZPUIWZAAQFGXYCMZDBXSFDJDQCXIHCKAJEBSTNBFYVMWMCGKZUMPS");
    msg.params.assign("JKXBQKEHROYDKZUVFMUQCIBOPHAHIOKXGRSNDIJZQQAGHYNEIEUPFIMELCKQSDVVJGJLMZLDLOCZOSYXTACEPRIBSMRJBTYPHZGZOGWVVUCNYHPRCSFBRYDJTOMQTMPHMOUDAFBKYGRYMSHXAFUSRFPZIJTNTRDXSFNCCANOGUBTXWNKONELTWCVLXFQULZKAS");

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
    msg.setTimeStamp(0.705468309789);
    msg.setSource(14018U);
    msg.setSourceEntity(158U);
    msg.setDestination(8679U);
    msg.setDestinationEntity(220U);
    msg.group_name.assign("PZYOWXJGGSQZDYEPWISBHGJHPPAAMUMXJUUXULMQVFUTFFCVDVUXHIATDGLLZVPBAKNYIJMSFZFQHDSLGNGKXFWCJLFYOROEWGNANHDBTQKSOGCACOJDIAOTOKACFLNEJTLAKHTZMXKNBIGFVR");
    msg.op = 81U;
    msg.lat = 0.895408339215;
    msg.lon = 0.575790361006;
    msg.height = 0.857716864869;
    msg.x = 0.458474113652;
    msg.y = 0.17154825564;
    msg.z = 0.437444437782;
    msg.phi = 0.642831969824;
    msg.theta = 0.0989007094323;
    msg.psi = 0.400876842168;
    msg.vx = 0.33279645506;
    msg.vy = 0.831567885554;
    msg.vz = 0.920858003495;
    msg.p = 0.48711414364;
    msg.q = 0.469849274309;
    msg.r = 0.47332892504;
    msg.svx = 0.884717763014;
    msg.svy = 0.655602936652;
    msg.svz = 0.19102326821;

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
    msg.setTimeStamp(0.415242217606);
    msg.setSource(28873U);
    msg.setSourceEntity(158U);
    msg.setDestination(748U);
    msg.setDestinationEntity(13U);
    msg.group_name.assign("HLJUIRWESHRXAXOGAKQFJNZUSYMVSAXPPYXAKEVDMMGPLTTRZBWRYDIOEQILMYPDGFQTKCBBINUGWKZWSNFJJABCZTURVFYMVPZIFDZJXHXASEVDUHBTYYSBVPBFGZJPMFNISPGVCJAWOCQNEXLUMGHKBZIMFBRGQDTEHOGNUEQHIOCLGCRND");
    msg.op = 254U;
    msg.lat = 0.321809624364;
    msg.lon = 0.788103695664;
    msg.height = 0.33612826273;
    msg.x = 0.947435261722;
    msg.y = 0.175845881552;
    msg.z = 0.439797132252;
    msg.phi = 0.934973906138;
    msg.theta = 0.832382541915;
    msg.psi = 0.779766734355;
    msg.vx = 0.0434185916645;
    msg.vy = 0.619819715642;
    msg.vz = 0.434981361533;
    msg.p = 0.687564811047;
    msg.q = 0.608916531845;
    msg.r = 0.678939599767;
    msg.svx = 0.902403300003;
    msg.svy = 0.965353645032;
    msg.svz = 0.998412959956;

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
    msg.setTimeStamp(0.698677298293);
    msg.setSource(52873U);
    msg.setSourceEntity(89U);
    msg.setDestination(16935U);
    msg.setDestinationEntity(160U);
    msg.group_name.assign("UXMLMPRFTVSZAFHEHFFVAOACGMBZJHCGZWRWMXKODVMFPVQRSHTFVBWAPGKJWCBJGNESQQFBMCCXIZBWRRXJPCMYOQSDNHPBTSXCDUUMSINBYSFSRANIEKBROXKCKHTTIGIGIYNYKDWJCAO");
    msg.op = 30U;
    msg.lat = 0.787954635187;
    msg.lon = 0.7559122514;
    msg.height = 0.990186507818;
    msg.x = 0.841276840557;
    msg.y = 0.456114102411;
    msg.z = 0.11923466904;
    msg.phi = 0.779132869662;
    msg.theta = 0.546759421026;
    msg.psi = 0.993079617839;
    msg.vx = 0.90435275505;
    msg.vy = 0.659964281283;
    msg.vz = 0.941417107029;
    msg.p = 0.414668664026;
    msg.q = 0.498341868827;
    msg.r = 0.832998932034;
    msg.svx = 0.674399551533;
    msg.svy = 0.621459724441;
    msg.svz = 0.143742502409;

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
    msg.setTimeStamp(0.308534940873);
    msg.setSource(28223U);
    msg.setSourceEntity(254U);
    msg.setDestination(27278U);
    msg.setDestinationEntity(103U);
    msg.plan_id.assign("ROOCGGKTYRTFAOUIENICXPELSRMOHZMSYBVTACYFDKSKXSUMDVBFEPTRBELCNSIXOBJHBXDCWVACZFDTVLMQESKWMQDGJDHNXGUFMEWTQHSKCZFZOKWPGYIZDWQQZUTMMLVBIUYAOJKHFGWXLYJOZBPHCNNNRWGAPRDUQHEII");
    msg.type = 123U;
    msg.properties = 115U;
    msg.durations.assign("VIDUFIRBTOVUGEIAAOHHSZWKOVLJJBDRUHIYEMCEEABRFAZHVAHTXBSLNXOFQRK");
    msg.distances.assign("KFELLNLUTKLJUUSCYJNOWQROVOALTKTCEPPAZNDKFQQHUOVSPEFWVBTAMDSDUZFCSWZTJNWFOKUOARVDESIMBSJAUOBMKJMSJQASFCYXBYGPRBIVFRWLSPJNVJVREGHXMERZGNFDUFXXHCQBPKVSZHZRJYIPDTXICCYVCQMGHVKZHFTIRNMINUMYYBXHYBKICZAHYIMBPWTGGIEHLPQWARDXNQJGEWQ");
    msg.actions.assign("CXJMMNYCHHJUDMBTGYFVXMIQQENFBEZSOTLWLBQWUXCOCLGCZLBWFURKCNOJMOWPQMLDYXUEUDSFLRZTZXTBBRNJZVBQEFDPXKHVJETGYQZSQTGVGWHMFMGJXXHSWKHXVESPRDKOGZK");
    msg.fuel.assign("COPQAPSPEDNIVWHZVJSVFMUEZXRKGPBAYGMQJFRJXORZLNKERGCSHOFRJEKPTERZEEOSSFYUHGTPDMJXA");

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
    msg.setTimeStamp(0.887683596656);
    msg.setSource(49734U);
    msg.setSourceEntity(136U);
    msg.setDestination(45960U);
    msg.setDestinationEntity(208U);
    msg.plan_id.assign("BRXCQNTCUTDWGD");
    msg.type = 24U;
    msg.properties = 184U;
    msg.durations.assign("EHLIGTBYUKFWOMODCYKLJHCBKZTUJSRENDNQHPNWLAFQFWDEBRWLHURQGYKKPSERWCTAXWMQZZYGNPITVWTYNXASHUQGDVXZHRSJVAEJBVMLOMQUXACVVHSIXEGSIMLVIUFYCUTOLTHSZWKPKCXPZZLBJNQEKUFVDBF");
    msg.distances.assign("OVIJQFLGWVHAHHJGPAQLKUXLVLDEEPWWODMZDFDMYDSHKMLXTGFRAGHRYKK");
    msg.actions.assign("ZFIYQVLOZGPPMMCXHYVQVPJIUYKEZVRGACUESRNSCUPFCPOQXFULXZHINYVBYEILTOOCDGIPEMQCFWMAZEZYBRORKADKDAFJZYKDSKHIRPXYWBTBGULASZLQVUOPQSAMWNHMJQHEGFDSAQLTEXASJWPVNXCKXKDNDIWVNRITOMBJBXJOPRFKCCWNLGHYCJJBGEGSIFTTSOE");
    msg.fuel.assign("DOYVSRHFBKEITXOTGUFMIPRHSBXBCTLUWKBLXLXOCGAHESDXHFMFBIOMQGOZKCABYRONKMBXWJDOVUJYQNJXLNKPULGHKAWFYCRGVREOCQDOAACNJIEZSSNNAIJEIAMUASFXXCUUFRFEUTQUYRVZZYFFDKVIQZGQRTLHWUIDYYHDKPZVVNHJMQILQPGSEWVVTCMJHWAHWAPBWYOLPVKSTINTGBNSSJZYE");

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
    msg.setTimeStamp(0.106716343886);
    msg.setSource(30145U);
    msg.setSourceEntity(47U);
    msg.setDestination(55068U);
    msg.setDestinationEntity(138U);
    msg.plan_id.assign("KTMBDENAGCOVOTODDCUQNNJAEEDLAUSIJPZWIKQZUWABHCGFLDMMIZXVQCNGMJRXHJLFRRHFNWJCVYAKMOMUNPXTCWNECDWLJPHQIVSZAOVWSIAZFKPIPLZEHGFGEIJUZRYBPLGRBSMTOLNVYVQWYRPDTNGKWKLYXUMFXMUXARHSTETUJVFITGSBQPHSBQBB");
    msg.type = 23U;
    msg.properties = 68U;
    msg.durations.assign("GWISUVPMCLQKDEWWFVDKECFCQNYDQIBBLNYAPWMVNNTZXTDYKKAQNKECEHVOIDFWUJSYOCQKZRPYZSHZNIZDUQIURAEGSJ");
    msg.distances.assign("OVKDRLYPCXUCKVGOBJXCISLOIWSPTFUZIZMXIVLMNHHVGTBDNBLYKXIQBYBOLZVWUXAGGCSNJMOHDVHPPSRSPTAEWCVCBRRQMFSFYGFRQWRLZNXIDJFNDCXZSGOFTAQJOIFYAPIQPNHEJCYWMJSYIEKBNTHGJDQEMTUBZILKBMGUWTLVQHLJPZHFAWXNUR");
    msg.actions.assign("MVTPTPARLNTZGVADOOLFCHEFKQNFCLYXFBJQGURBUQJELKZIJZDGRORHCGMOWVQXWOBMLMITXHADNCJGXCSMPGPBBEIIUXVCYBAIHXPHL");
    msg.fuel.assign("GQHROGYQWTLXASGGSDHITKIABRUEYPIJVSBEVFMAOJC");

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
    msg.setTimeStamp(0.191146038621);
    msg.setSource(17051U);
    msg.setSourceEntity(20U);
    msg.setDestination(10989U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.838742266974;
    msg.lon = 0.963285007668;
    msg.depth = 0.795246483475;
    msg.roll = 0.117590347991;
    msg.pitch = 0.87319701474;
    msg.yaw = 0.476898373513;
    msg.rcp_time = 0.494811470716;
    msg.sid.assign("TAYKYJEFXWRJPLBTEFDEQZTGCKRNJSRROYNHUBXPDVWIVFVOLJOFDUAVQXESEBBLIHJHSWYTYWYMCENWVSWYGMBBFQZNISOEMRLZVZXGYKASDKLPOHRHPLAMNLMQTIGXVJKZQCOBDOKTIZDYGUIFZQNMBELIINGIRLPDFHCSUDSCWIPOAHUDQQLKFOGRTAOACXAJMHRGYPJCJAPMHTTZUXKPUMRBWUNESXCKCFHWA");
    msg.s_type = 171U;

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
    msg.setTimeStamp(0.355982310095);
    msg.setSource(56859U);
    msg.setSourceEntity(75U);
    msg.setDestination(58001U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.692392682207;
    msg.lon = 0.477895455595;
    msg.depth = 0.432747360187;
    msg.roll = 0.196419038708;
    msg.pitch = 0.0657177804878;
    msg.yaw = 0.584997713153;
    msg.rcp_time = 0.0147172236493;
    msg.sid.assign("GFQSIWACNIPEOCWXCAGQW");
    msg.s_type = 144U;

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
    msg.setTimeStamp(0.449892928573);
    msg.setSource(50466U);
    msg.setSourceEntity(146U);
    msg.setDestination(1598U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.976600168267;
    msg.lon = 0.0701070514135;
    msg.depth = 0.848858290107;
    msg.roll = 0.62562576167;
    msg.pitch = 0.454165503619;
    msg.yaw = 0.492474759686;
    msg.rcp_time = 0.323481224329;
    msg.sid.assign("BWMJBWSQBBPPPJNWTIFOFGBDUNCPZLPABOTHHCGUYYOLYSPHDVEJILQBUYJAGFLLMXNXCKOHCLDJOBCAKQAGRVXWLTSZCEWIIIYGZXHHDRHJXMMYJKTDHXXIV");
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
    msg.setTimeStamp(0.458679527258);
    msg.setSource(38939U);
    msg.setSourceEntity(61U);
    msg.setDestination(13070U);
    msg.setDestinationEntity(158U);
    msg.id.assign("DYTCBQDWKDKCHFDADOSUBPGIRIQVVMDYEAAEFUIYPVYOKLLJSDBOMTQ");
    msg.sensor_class.assign("NAWBNGQYVQMQNYGUKQHBHFUBUOTYLCMFXTEGPJBIYUGSHXCB");
    msg.lat = 0.969511933224;
    msg.lon = 0.380012344024;
    msg.alt = 0.618042316866;
    msg.heading = 0.923942006562;
    msg.data.assign("NIXHSDJTTHYEKHWWSDL");

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
    msg.setTimeStamp(0.622159705208);
    msg.setSource(27677U);
    msg.setSourceEntity(97U);
    msg.setDestination(58834U);
    msg.setDestinationEntity(197U);
    msg.id.assign("TRJWDDUHGKIQLCMEUDPBJRNQGXTZUVCRBUKEYGHMLANNFBJKZVNNBGYWZPQQMTTWXMRVBMFFIEOYKIKLUWTYHCGPMHAWDPYXLOPESJKNSYHTCSDFHTNNQCWWLXVQJESZKEYAPYLBXRQYSVOOLILEAFPZZZCZEBHFMHOXPXGANATJIEHQLXOQHQXPJYCSFGMRGCVCRMJVVDFIRSVVGBAMGFKWDPEXZTNUOKIB");
    msg.sensor_class.assign("RXAFIWZDFPILJJAIHCFYJAGDPJBYKPIJIHVDJIQVYUCMFDNSMKTTSLDBMLNOPAECRVXOCRMESURZZZZXXQNJLYFGNIUQHRHBSPKWDUMUDUWKVUONCLITCOPVYEETYLNWOOOBQVCQHSAVMQHCWIWSSEVWNFFAMXNDAZHCNSJYGKHZQUBTURGBNQLKYPTAZKYQHPERKRAOXRPWEXTOHGITRZZGJMLBBTYWPFFJEXQLLVKUDDGGSFEE");
    msg.lat = 0.443817945563;
    msg.lon = 0.78360678352;
    msg.alt = 0.254062344459;
    msg.heading = 0.27652430162;
    msg.data.assign("BRYJKIKUCIYCZIVGOWIPSANCOFKEGNCMFPQUNMQKLZJQPNYIGYAMASZEZHUBQJMGXWRTJDIASYQILEMEHTJ");

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
    msg.setTimeStamp(0.711522956678);
    msg.setSource(19176U);
    msg.setSourceEntity(38U);
    msg.setDestination(48444U);
    msg.setDestinationEntity(59U);
    msg.id.assign("GTGPHCJRPABRKLRUHRUDIYEZXLJTWCOHJHTVAEKLOZOUWULFMDCGNINCIEJTCYZGELZKYBBETKSKCDZJNLCJRQTYANQVAEBRNULFJVBWFOVGYOERNFGCIXSMBXSOJBXJPDTKBULDHWVXPQSHWRIAPNKMSUMSPQEAOFPMHFUAVYWVGJPDWEVPTLIMZANCSDDVUXZXQGXXOCBPOARRKBYIFNUMHFGZKQHQTXTWOF");
    msg.sensor_class.assign("WBYTKCCDWUJCEXRZZBTGMYQIKERTLFOGHMGCKGBIOCZSYQVFTRIPD");
    msg.lat = 0.654671511618;
    msg.lon = 0.432699114501;
    msg.alt = 0.53748212678;
    msg.heading = 0.483240824472;
    msg.data.assign("KTDZIMXLEILLFSVZASHTQJEDAUXNWTHNOERIOTZCGCULZSGLPVNMGFKIZUDDKTTHOAASQESAQJXVBKOCCQRCSPHCYOIGRFYWTMCWXZOLHNJUMCUGNZMPDXWLKQPJIDSIVXBNBDTTANLMYFFPFEIPSJTSYXGEVDEEQJRVNLWUJYZJUKWGFMAVOXAJBCGBLADVOPYFHFBQNSVYBYNBWZQUORCUHMGKWRRHKWPPRQR");

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
    msg.setTimeStamp(0.13788342148);
    msg.setSource(65093U);
    msg.setSourceEntity(5U);
    msg.setDestination(42665U);
    msg.setDestinationEntity(217U);
    msg.id.assign("YGUAIEXTZYOKKJFKURSHCLQGDYZMDNSCJQCONTXMKKMLRIECODNQLWRQRITIYSGELPOMSS");

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
    msg.setTimeStamp(0.132756957749);
    msg.setSource(57985U);
    msg.setSourceEntity(16U);
    msg.setDestination(55356U);
    msg.setDestinationEntity(45U);
    msg.id.assign("CPDQNYVLJALLYHFBFKTBEJIWBWARSNIQTMEJRQCATPMOKDYNAUAYSXVLHMFILUXPJZPEOXBPBGTCHTHWZYLECCOWNMRTGAZJSICSUHZFJVDHLAVZUZPDDVJJXQWPRSQLAFGVYZODTYIKDNTWKZPBNUMOGJUMVSQGSB");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("BSEYRFDTPZKKHGHSBHWJQTKXQVOVULYLAFBBINBGQLOAJIAKYHCBLQHDXUVYMCSWLITXYMLNASGWTPAHGRZGUHOGJYOOCPMQBUIQRVMCOZGMAJQCAZKXURTWENTDZLRMQTIVTTJUPEJES");
    tmp_msg_0.feature_type = 138U;
    tmp_msg_0.rgb_red = 85U;
    tmp_msg_0.rgb_green = 57U;
    tmp_msg_0.rgb_blue = 39U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.730249653133;
    tmp_tmp_msg_0_0.lon = 0.827987738845;
    tmp_tmp_msg_0_0.alt = 0.568366724984;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.16707471898);
    msg.setSource(22648U);
    msg.setSourceEntity(142U);
    msg.setDestination(34185U);
    msg.setDestinationEntity(178U);
    msg.id.assign("AQOWTINUXWIEHSGB");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TAAKREMHJDJEVYAVTTRIGISUWFAGKAWIVECPKMJOQMGFGWRDZACBFHQYYBPZYXDOVOALFJPTNLNPNNWGPKLHSNIQXBTLMQTPNKVTSZGCYXAFRUMQHDLXEEXUOOQREHCJOXROUWWPNZEXBKRMOZDLGWIHCWUQTVXVHNBZSDDY");
    tmp_msg_0.feature_type = 221U;
    tmp_msg_0.rgb_red = 10U;
    tmp_msg_0.rgb_green = 229U;
    tmp_msg_0.rgb_blue = 88U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.632833057011;
    tmp_tmp_msg_0_0.lon = 0.397208946144;
    tmp_tmp_msg_0_0.alt = 0.0524492906984;
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
    msg.setTimeStamp(0.719500606576);
    msg.setSource(18388U);
    msg.setSourceEntity(35U);
    msg.setDestination(54947U);
    msg.setDestinationEntity(77U);
    msg.id.assign("CSTYDVRCTZOQXVDITBZNAT");
    msg.feature_type = 7U;
    msg.rgb_red = 70U;
    msg.rgb_green = 47U;
    msg.rgb_blue = 76U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.565897829529;
    tmp_msg_0.lon = 0.668716480443;
    tmp_msg_0.alt = 0.496938061759;
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
    msg.setTimeStamp(0.303272193123);
    msg.setSource(37532U);
    msg.setSourceEntity(76U);
    msg.setDestination(42336U);
    msg.setDestinationEntity(178U);
    msg.id.assign("VYZGXTJBRMXNKBZIMPVPCBJAOZFZPTLBYJKMIOXWWWVAOUMAEVUKGGRLSRTYYCXIWFIVCOOXTYNYOIIHMKFJVZTNBPCCOQMEDCWBUSLSNYDPXANGDYDLQQFOAPFUEFTGNHPHQASFXEQWUPZZWTGNDQKIKJGVTSZDFMHYDUKCXINAHWRLOAPRSNCRDFYTUCJIWJRHHLDVXEZHAQRSLVXUGBEKQUSHLAQJITVHLRRSBDFQGPJEBEKGBEC");
    msg.feature_type = 94U;
    msg.rgb_red = 210U;
    msg.rgb_green = 79U;
    msg.rgb_blue = 220U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.702683326868;
    tmp_msg_0.lon = 0.905199604207;
    tmp_msg_0.alt = 0.998648019217;
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
    msg.setTimeStamp(0.943157152247);
    msg.setSource(21110U);
    msg.setSourceEntity(96U);
    msg.setDestination(42492U);
    msg.setDestinationEntity(192U);
    msg.id.assign("MUZZWOEXVLFD");
    msg.feature_type = 107U;
    msg.rgb_red = 70U;
    msg.rgb_green = 83U;
    msg.rgb_blue = 23U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.410807247644;
    tmp_msg_0.lon = 0.87473663823;
    tmp_msg_0.alt = 0.674081612235;
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
    msg.setTimeStamp(0.403061072099);
    msg.setSource(31072U);
    msg.setSourceEntity(165U);
    msg.setDestination(32469U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.336091374469;
    msg.lon = 0.366437512017;
    msg.alt = 0.763786221268;

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
    msg.setTimeStamp(0.988479564108);
    msg.setSource(48683U);
    msg.setSourceEntity(23U);
    msg.setDestination(29571U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.816496200556;
    msg.lon = 0.0222820424194;
    msg.alt = 0.847768980827;

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
    msg.setTimeStamp(0.00819367611607);
    msg.setSource(49384U);
    msg.setSourceEntity(242U);
    msg.setDestination(54572U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.827443449589;
    msg.lon = 0.342315614053;
    msg.alt = 0.447361498633;

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
    msg.setTimeStamp(0.314487226639);
    msg.setSource(62795U);
    msg.setSourceEntity(183U);
    msg.setDestination(38181U);
    msg.setDestinationEntity(112U);
    msg.type = 147U;
    msg.id.assign("DEAHPVKBKACHMKKKHBZBIIJJVETHVFQRXPIYMKVYKERAAIFXNZJZIMXUUJZRQWAENYKRUBRVLDXCSWGHQSN");
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.809593078448;
    tmp_msg_0.type = 134U;
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
    msg.setTimeStamp(0.409438543092);
    msg.setSource(1247U);
    msg.setSourceEntity(68U);
    msg.setDestination(62191U);
    msg.setDestinationEntity(204U);
    msg.type = 201U;
    msg.id.assign("RRHWCVQCHQQSNAGHSJGKAWJIZMHFQJAXADWZVIZUOMNFUOVLRDQZKWKABADXRHSKEJESNKYRYGLNHRLWSGAJJUXDJYCLEYDDNGCVTUJTIHWLEWGATUSWABDFEQBKVJXITBEQFSTPBXOFOFYHMYTSPVOINUBXBGZVYZYMNFZUZPVEBFLZOTEPAKLHPPQBEPLK");
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.826869695664;
    tmp_msg_0.y = 0.567170151741;
    tmp_msg_0.z = 0.279871640617;
    tmp_msg_0.vx = 0.936112711377;
    tmp_msg_0.vy = 0.810780215309;
    tmp_msg_0.vz = 0.774344442489;
    tmp_msg_0.ax = 0.162570713346;
    tmp_msg_0.ay = 0.81417813868;
    tmp_msg_0.az = 0.595139071486;
    tmp_msg_0.flags = 29857U;
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
    msg.setTimeStamp(0.888037815683);
    msg.setSource(15612U);
    msg.setSourceEntity(139U);
    msg.setDestination(59743U);
    msg.setDestinationEntity(251U);
    msg.type = 243U;
    msg.id.assign("SEEBSEOWGHSVUKTUZGTWRGNAOIQMABHBDLGTMIQXGHXUJLJMJHKQY");
    IMC::TotalMagIntensity tmp_msg_0;
    tmp_msg_0.value = 0.625005644952;
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
    msg.setTimeStamp(0.817286128648);
    msg.setSource(60807U);
    msg.setSourceEntity(214U);
    msg.setDestination(54290U);
    msg.setDestinationEntity(16U);
    msg.id.assign("YMTHWEQQZGMGRPBFVMVYLHE");
    msg.callsign.assign("FHJEUMXMGPXANQODMEOCGTTNOSUZOAUNSIIBZVWDEXCPINPWZCUCHLHQOBKGVCLHDWBNJQYWIYQTIEMIOWVBKTXDDKJZZJKSKLLFPAGUVLJRCAIEXDMYMQSYPHUZXP");
    msg.name.assign("HNRYCRQONLKMEMZFCTMJPTTEIKYDOMKLFPCJGMFGTDNPVIAXSUFW");
    msg.type_and_cargo = 79U;
    msg.a = 0.401508709008;
    msg.b = 0.936337367364;
    msg.c = 0.0637953880909;
    msg.d = 0.711332311413;

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
    msg.setTimeStamp(0.942016989263);
    msg.setSource(55691U);
    msg.setSourceEntity(113U);
    msg.setDestination(1789U);
    msg.setDestinationEntity(21U);
    msg.id.assign("LSPWINMVDECXYLSTYTCMGEJOKWKGQUGZDICKHCYKWQIEWULZLLFGXNQAODRFRBNXDFXPIQHZWGDHEOEPTCJIKKAUSZWVBJMYVMYDRSEXPVQHGUKSMFFZOHIOJYXRVLAATWHUMVINGBAKKJHZNNPXADPJRMTB");
    msg.callsign.assign("TVHDLXYZWWISPMNJBMMSGLKBFAFCSCDIBSIXTYGPNPGDKWUCZYFMHCAINFNENEHETUZVASBZHCONRIRQUIBFDYAAFEYBLYXQKXLXJDUGVKIKPPLVICXLIVXJONQGZDSFIOEVRJNOQQH");
    msg.name.assign("MEDWWZTXGDBOGEWCMAWIKTL");
    msg.type_and_cargo = 247U;
    msg.a = 0.784527967646;
    msg.b = 0.760598088566;
    msg.c = 0.21391080559;
    msg.d = 0.595307479612;

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
    msg.setTimeStamp(0.640412355636);
    msg.setSource(47161U);
    msg.setSourceEntity(172U);
    msg.setDestination(14603U);
    msg.setDestinationEntity(86U);
    msg.id.assign("SFUCGEZPHGIHFLCHDNXUROVLBBROMBFVQMWWNEQAENWSWLTLTVZBRZTQAMXCCYNQSJEADAMVAJNWLKOYYXJBODTICAUXBIEKZCVSHNOYUJVQXIWSITXOOITPGDJDYMEFKMLSKODPZOXMNRNHBQZBPZDBOKNWGZXVTUVIMI");
    msg.callsign.assign("UOWLYSRLYWPGTMMBHFITAGYKAVMGBUZIOPDPCGDBBFHKJKVJCNZVWIYEWEEYDYRXHBTRCLLWXOJHVBUREWSAVQIJMGNOTHTWTZYRXDYLAFDJWKXLAZNMQJCDOGTJUEDUQGUMBIEOJQGNPDNZRREKQHRXHSNXUFXUUUAZAKCL");
    msg.name.assign("FUGXXMRSVLLVOCDVLSNIVGYPACIPZABSTKQUVOFKHZTXFALNUILDAAMHZPIYIWEJWVRXCHDDPEQBPELPKFJEUARZUGTLJYIGUGLTHTBGRZDHGMWMVKXPELHVRMTBOWMKXJJRNXKRCNJUPKDZJQSXXYADCTODELUSYNYFFNW");
    msg.type_and_cargo = 218U;
    msg.a = 0.231400313414;
    msg.b = 0.293211326326;
    msg.c = 0.567104338621;
    msg.d = 0.629819154156;

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
    msg.setTimeStamp(0.496733474177);
    msg.setSource(365U);
    msg.setSourceEntity(51U);
    msg.setDestination(63432U);
    msg.setDestinationEntity(172U);
    msg.localname.assign("YTODKLXLVMIZIRRIUPWAGDAKBXXULMJVCBDJHSF");

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
    msg.setTimeStamp(0.565372869376);
    msg.setSource(53971U);
    msg.setSourceEntity(254U);
    msg.setDestination(53647U);
    msg.setDestinationEntity(113U);
    msg.localname.assign("DFEWNKMECEKCZUHLXBQTWIZSPOXQTVHXCLTFZZYEUZSJPSDFOLJHJSULIO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DNVZMNIXHCXMLGSLQYJLCRAAWSCCZLIJRKRAYLPEWIUHDLODSBJQTHWYUDVEDUQVOGPYAMDGGVFJFVUEPXFCPTLXSIQRRJMCZZEAEHOZASKXNDKNBRZARDAURFBTTUGYGASQHMEXBIYMOYWGZBXMGWSJGINDNTVQPJIPHWVIEFNORFMQHVKXBYOKLTCLVFYYCTOXWZPKTUO");
    tmp_msg_0.sys_type = 56U;
    tmp_msg_0.owner = 52235U;
    tmp_msg_0.lat = 0.929166147113;
    tmp_msg_0.lon = 0.53248315993;
    tmp_msg_0.height = 0.167767614724;
    tmp_msg_0.services.assign("VAHYFZVJGIQOCFCVPLCDEMXBAZDYJCGWFKMDQEDOGXHIFQGGBXEERATOBQITOTATXSNPQSQOISPJ");
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
    msg.setTimeStamp(0.715321567406);
    msg.setSource(44954U);
    msg.setSourceEntity(179U);
    msg.setDestination(55397U);
    msg.setDestinationEntity(195U);
    msg.localname.assign("AEILMQUWAOOEPBVRLSMOHEZKSABZMYHXDJSIGTHBFAYHEFIYJCLUNVORVYJPFBDJPWYIGZPRQRSGUKCBKRWWYXHYQJXSFSRYSQBOSXWOCTXTVNLKECKZKWVBKQSCFQTBWABPLFTZDNNMIGFMGGCEHHSC");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("CZWCMFAGKHLEDNMPCWUYIOHXKJGMPADVDSYCZIYLGTJCBHROSJZIUWUAUZQTEXYOKXBBCVNGSTOZYMNFRVOPYXNEOFEJPLJJDBYXPDCXTHGLWIQBKRNBVOTUINPKNXOSLGWGUHRPVGQLMSLHZEPGSYPTLSRWJCISVMFFQ");
    tmp_msg_0.sys_type = 6U;
    tmp_msg_0.owner = 15312U;
    tmp_msg_0.lat = 0.750338677218;
    tmp_msg_0.lon = 0.653669888806;
    tmp_msg_0.height = 0.712379270193;
    tmp_msg_0.services.assign("NEDCVRPEVTZBMHXBMTJSHNBFPGOTGKBYWNSFDMRZUQSOOIQBDAYSRXILOKCWXNAIFLHICFRJVRBOXGFLGIYXBOASQJKCXEKIYPXWADNEQQEPNGXWVGZQZWUKPTWUMMTVMYALNTVWZCKLFGTRCSCMWKOXJCKYHGEJHZICSSJDILBQUJLVKFPAGYRBJUUAXCNNOFMYDUSAMFWIFRPQUVZTEDDRQZHPEHYTWIDESQUHDMGPHZHVPZYOLAKJLUAO");
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
    msg.setTimeStamp(0.130978443954);
    msg.setSource(57695U);
    msg.setSourceEntity(187U);
    msg.setDestination(8294U);
    msg.setDestinationEntity(87U);
    msg.timeline.assign("XHQMLUAHZBUIQRRXZQWCYPOFGKGERLPAOITHFEUAJCLQCDQXTLRDPXWOOBKYQTNAUDTXAMJVBPMOFGKSINEHERYKLCIZFNUYEKEAWNLMHNMHTIUWBUZVDFYVYZSIONFZOSCOUWITTDPYNWFYLRSGPYHHKWUFXSFGHMEVACDBCMSXQXTL");
    msg.predicate.assign("XCARUBECNGAMRYOBEFOHFMZKUXHSZXDTDJOTNWHWBTVWLNIBSJXQWROTRZNGADPWWUFMI");
    msg.attributes.assign("KFDEOMRNSYJTXSLVPZGQVKARYLGVOHHNRECUIVWZFRYFJMBBRJGDWXJUWJRZIZUOPEHPXZBGOPCCFRZTQLHUKJHASUDYNHLUIEOTWKTILTXCWNIYCHOSBAFURXCWNICJUPGKPPFLUWQTMDAJIPLVWGTHCXYFEFQADBMEUBZQEBITGDMBRIFQBKEMTWGMMLGYKMNVAFHDOXQSQVXY");

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
    msg.setTimeStamp(0.502622692993);
    msg.setSource(28168U);
    msg.setSourceEntity(188U);
    msg.setDestination(42041U);
    msg.setDestinationEntity(252U);
    msg.timeline.assign("JJTPRWFTXPGWAKMHPWGQLESMTEFLGKJZVCPZVTBVEZTTKULRDJKGLVIUJKUI");
    msg.predicate.assign("ULNCXNXCSYJCHCGNSLMLFBVQKZTBQEZZWXCZMMOMDBZWEJUKYDFVADSLIPHIAZURIEPNKRPYGERJVAODQOCLTRFQKFOYGEVTYQ");
    msg.attributes.assign("KQXGYEXPWRJSRNWAPGGGTOZXIIMDOTOSBUOGDMVCMJEDVDVTBQLEUGIEPPPMJCSVZSHXSJTEAWNBGJMHDYMRJAQ");

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
    msg.setTimeStamp(0.927318749281);
    msg.setSource(29824U);
    msg.setSourceEntity(232U);
    msg.setDestination(32537U);
    msg.setDestinationEntity(123U);
    msg.timeline.assign("IBCRYYIPJHZEUECHYVCSKLLYESAZTFHDQMALSKVYJABUNZKGSXLYIIQWJXGTVFLVGPOXYMWAGTEKQTCNJAPNDTCKKXQNAIWNKOJMLCWZGTWBIHNPLXIFOHBOJPPHERZHXUVBNRMLRRMDRCCGRLUXTDV");
    msg.predicate.assign("ZFWDKQNNMCQWAUZWZUOXSMAETAAFWTQYKWPHCXPGLMQLPQJRGEVBVYRRXMLUVBEOOTMTCHKGHEZOSHJDQQLCHQPRTJEYBAGIECZECOTMZXDVKZJRRVDRUGLNUNXJLXFHPESNLQIBMBKTHXCIZIOYTYHSOOPWBQCYBUAJYOFHNIRSXTVNPGRMENUIZXWIWGLDSSSU");
    msg.attributes.assign("PCJNCFMEBCIYNFQPQMKJXEQGWKZHKZZFXZLCVOPYZGPLNOUVKJYCFLRNGENSKLDZRWCALAFJDSODCVZVVARYKUIHASVMXH");

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
    msg.setTimeStamp(0.771996481772);
    msg.setSource(7521U);
    msg.setSourceEntity(152U);
    msg.setDestination(5682U);
    msg.setDestinationEntity(209U);
    msg.command = 111U;
    msg.goal_id.assign("EWLVHZVUWIJCVAGSTHCTKYRONYUZZEHYUTLSUVGTFJOCJPZLWGYFBQGWIPQZAGSRNFTLIOIGADAYOGMRFWLCOIYCAMMHQVNDQVKDKZZQABCPLLFVJSWSWCYOBJMXBFZSNDKSXBSUNQRIRIPTKXVBWXEPJLIOIKENDWKETDDPHJOHDYRFRHQOKURUKSBPMMHXXXNCNZOTG");
    msg.goal_xml.assign("YQZCSYZMTBLYPREXXQGOIUXGBXYKANUFTWKVEANVCKHJJCKMNUIWPNXGTMWJIDWLEVDBSNCUITJIGFDZRRVRHNMLBVLNUAZALEOVHAJLFRDGGTZTSDMPNQPJVOOIAGWXAHPETSYDXTZ");

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
    msg.setTimeStamp(0.419898130905);
    msg.setSource(15907U);
    msg.setSourceEntity(43U);
    msg.setDestination(62280U);
    msg.setDestinationEntity(188U);
    msg.command = 210U;
    msg.goal_id.assign("UYWYKTDYNXWTOYWVGGBASMIVNSRPESDCPXVXCXBHIBBKCOFVANRIQMO");
    msg.goal_xml.assign("CJRXXPOSWHLSXYZQDRGDLMOQDYFMZJTFMIBUASKKPXUCHYMLFCOWWQSNLHPBYQLVJJPWTBFEYHRHUOCYAVVTYBSQRDBBMGZZGJYPGWXMQZLWFNSEIJGNPGUDBCGDGQNATTEORMIUQSNTPXMUYXSNHMEQKRCFJEARWCWRATBHVHINDABTSNBKVIULVLRNVGMKFUVDQCTXLA");

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
    msg.setTimeStamp(0.849161871847);
    msg.setSource(15893U);
    msg.setSourceEntity(58U);
    msg.setDestination(49137U);
    msg.setDestinationEntity(76U);
    msg.command = 32U;
    msg.goal_id.assign("NOHQQXVOUISKVHYDOHJQGGIRXMRCTUACXIGVPBURYMAJNPCFCGDGSFDIWGPTEODNBOGWXEQEUWGNKCLTCYWDLZOFTECAHALMNJZNCUFXHNMJEIPLKSBPQPYBZTMUEUQTZWVLNPYKMRBKRKDTZSJCWLJSSOFBFBCLN");
    msg.goal_xml.assign("FLTSXKFYMFRKAMOYAVVXNEFADTBTCXSSNGRYEZULWRYLIIGPWKOHRPTXZYWKGUPDGBBQVAFAQODQCVDEJUHGQTJAEADQJOGJHDYIOXJKRKAMQMSZPBNQDIGURDSLLEHJOXHIDXSEJQNKZZUVPDIAVCCZKLMSJHNXENNBTETYWRRMMCVBMQWSWENOVILHHCRFFPWTSHCFLLSUYCMYUTCVANJPEKU");

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
    msg.setTimeStamp(0.216575693443);
    msg.setSource(18653U);
    msg.setSourceEntity(221U);
    msg.setDestination(49214U);
    msg.setDestinationEntity(78U);
    msg.op = 167U;
    msg.goal_id.assign("OQZWGZEWRGJUDHTDNFHEPMBDIPEKCLMOPSAW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RMGOKKNKDUKEBIJLCLEWAYZWJRHFMILQZYYSSOVAZOOZFHPXIVULYKZUHWBUSSGIHUXLOTYIAJSWBTVRBBADDILZJCKCQNXFEHUPLUPDSCXGDMFMGCUQROVZJMPZGJCSKRZXOANRERPKLWEEAOTCVWQSNGJQQEIEATNTXHYLGEWJMNWNHNDVFBPXPMBEAVKGVDSUICIXGQMOTCYPFJFBTGTF");
    tmp_msg_0.predicate.assign("MYKGCUMDOLJFRAZWYPQOJGXANDPAXQHFELNNJMFQZKBZBASIIWGOIFSMQOBPHHEBBDNYOTRCXJHQTUHHWWGDTCXVXUFFYCEOCTOZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UHKZLXDLXFOHSFFCLTJSCKDKYISPHTCVZQJBOPGIRKWGXRHZLYGLJLYXAEWTNVCVDOEIBKXUQYYIWURIFVBWFNGRRYNWCPKAYEAJDJVLQOQVCMWHKDFHMFUHSBRRM");
    tmp_tmp_msg_0_0.attr_type = 95U;
    tmp_tmp_msg_0_0.min.assign("QUFXLQUZRAMBUNPHAREGPDMRHOJSDZYMYYZNPQDJPIPTBGAKWUOFWHNHORCXMAHKQNIO");
    tmp_tmp_msg_0_0.max.assign("MPNEVPKQOJGHBTKVHQIXWOUDAYRRMNVFXAATCBPAAGEMEDTNBJIUVXJLAQFPWBNMEETOMLVZILJPATPOXHCXSRJIFWBRYDZINMVUGCQRECYWWXHGQIOOGGFOFFSYYZXSYMTNXPUQKFDWHKYGVQDIAEVFLHHBCOGKBUIJPCKMICIBZGDEQNS");
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
    msg.setTimeStamp(0.695402206723);
    msg.setSource(12551U);
    msg.setSourceEntity(74U);
    msg.setDestination(54383U);
    msg.setDestinationEntity(227U);
    msg.op = 84U;
    msg.goal_id.assign("KCDOOWCRVCYDXTEQYLQWTRLFBWDMHCFSOPIDFVSAMDQOMEABPAEEOJUUHMGRWANQSYGJRFAUEFIWVOIYMOVHBYXZLJKBKNDGJSMDDEOGPYKJALZOKGZUHUXCXTVMZLHZVBSVKJPZGLNHSBPRAPHFCSCDQKHCWIYTTQZSJWXOQYTGWNBFFTNILGKPTLPPZGVVTJNQMYRAQENURRSXCIUGNUDFBJTNAC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YYVRKBNZRXOQJUUTFHEDMEEENFFAGTMISKMQBRUHZBVXFAXTZEXZIWZFZWACECVCABGWDXCODDGTSKNAMJZCNUWMBTYSVBDUGAQRIOSLYPOXCRYWEIJDMQQXIUZEMTVFQNQYLNPXSKZWRVSCUSXOBGPLGEW");
    tmp_msg_0.predicate.assign("EIFTKFYOISEDSWWIGHYVKDDKCZGWCONHQKLBZQCBKFQQGMCVPTGTLQSIZFOCJKCYIQKDZOCUTIMYXUFFSZEAUOYMUJDROAOVLAPCDHDRLXVSAYYPWGUEBNIDXBANHHAAVXUBWJHXBIJRWYUCGSVLKJJQUPXRZBDMTNHGQNVOLYZGJSIBDNSROVXGFEPMRJPJXGY");
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
    msg.setTimeStamp(0.908568444502);
    msg.setSource(32189U);
    msg.setSourceEntity(221U);
    msg.setDestination(63191U);
    msg.setDestinationEntity(19U);
    msg.op = 230U;
    msg.goal_id.assign("TITOXKDQZPFCMOJOVRKZXKGPZRBPTBWEBQWDCTMJOIYXKOVXNLFGUUDUVPDNJLLAISGDIAVH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VETSIRKHZAKUNGZDZSDIEBLVHWCRHCGGOFTPAMXBKVPXLANKUWCTOOFPVSMGSQRGAURWXWGHCENNSAZKQSGAPQDOMZWOUUESMDBWDUEQDKQPXFLTT");
    tmp_msg_0.predicate.assign("VRBNDOMDILGCLHDCSHMPRRBXYWGCBJUPGPFHPTVFHJHNHOVLXISKZBJFFPMHQDLANSMTLIVUPCNPOSSDLYRFRXSICVEKBPKYIWZOCNYYCYUYJTNECTQ");
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
    msg.setTimeStamp(0.0161984751485);
    msg.setSource(40881U);
    msg.setSourceEntity(238U);
    msg.setDestination(53460U);
    msg.setDestinationEntity(66U);
    msg.name.assign("WHACAABNONXJJWZNO");
    msg.attr_type = 130U;
    msg.min.assign("GNOMOUPLNWBRWYZUAIYZSACKQZCQYLGBRHCGBJRLEOPYFUWWMRIUSPXEHVKVLTTVOBHSXNFPDYMUY");
    msg.max.assign("UPRHAJCAWUUNDIJZIGCHYSOPPVNJEHSBBAAULJHFTZEFKKEBAYTMGNDZLQDIMBEILBRHPVARZKVQWDUZJNPJXFVHRLLVUKJFWZGGEGAINSFVFRTGIAGDXXSYNFNXEVZGFBXPONKCUJQLCWOKCEDBCSSJPDWWALWVTOYRSODIKPJCTWYLHUCUDANTSOSXRZYFQROYMTPTXHBDVYQMKIMPMXKNZBFSCMOYGITEMRMOOQZMURQHQ");

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
    msg.setTimeStamp(0.892000594451);
    msg.setSource(7224U);
    msg.setSourceEntity(197U);
    msg.setDestination(19302U);
    msg.setDestinationEntity(35U);
    msg.name.assign("KAFPWVKTJLJSRJCXGVVRQFWSCIULCBMHAZURMOFCBQLQSYHUBJTHCDCLQLXT");
    msg.attr_type = 7U;
    msg.min.assign("ULXFLQKZDWGBYXPBKHQTRQRFBGZXTKAEPVZDSAEPYO");
    msg.max.assign("RWGXURXLZYEPDVKLQIKLHETPMOBDZGXCKYMCYUGNMKJJMQABPAUXZCOKWTKZTLBHEKECQCO");

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
    msg.setTimeStamp(0.882246112907);
    msg.setSource(10827U);
    msg.setSourceEntity(124U);
    msg.setDestination(63965U);
    msg.setDestinationEntity(253U);
    msg.name.assign("MYHBPOFXRZKIINIFKQOSEUSQVRYDIYADUXBALYVWPQIOYRBNYAYZDRJLSEGJMAUNPBBTAWVWGOTULIECBXZBWSXHQWXHPVALGHLSSCXENFXGJPZOJUOEZKCCIOUYMRMPEFNNRDZKAQCGHVVOQTOKTCUMSERZATUUNRFHWFMPGRJPLGLSRMCDMZDTGTNFFFEWKQDDHPIKJQVIXHELNZUXIBKJGBDFTVWZJMCXJLGJCYYLHQDAWKMSAPCBKEVQNT");
    msg.attr_type = 30U;
    msg.min.assign("QRXVEJYQDMDSGAHEAO");
    msg.max.assign("SSGOFTETBIAQUETOAAFCMDPVFRNNXABCBVYEIGPTALPWVOKMDBPNYXTRMKQBGIUUMOMSZSVLCHAXUJLXLQJFEJIZJPZKCQQSACKIWMTWHRUAOVJDLZZBPDEGJOWSXSHQJWNYWXJIZCSFXNX");

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
    msg.setTimeStamp(0.246863587446);
    msg.setSource(52037U);
    msg.setSourceEntity(19U);
    msg.setDestination(16023U);
    msg.setDestinationEntity(135U);
    msg.timeline.assign("LWNYUGEZOKREDUNIVTYPHIEMSRZBVNTIYJYFFLGHDUUQCTRUJYTNJJHTQOOAREBSKMGNIFXFLLFZDOODB");
    msg.predicate.assign("XAEVVHCLMQTYUZNSFFGYXVEOFLFKETLVTRWHGWKQMTKMGZELBRCZMEWHVWGPYVIXXISUACONHQZJBFIQKJSQJYKUBYUAEDWWMAABVXVTLRLOBDWJZTUFR");

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
    msg.setTimeStamp(0.244240693436);
    msg.setSource(19464U);
    msg.setSourceEntity(215U);
    msg.setDestination(2655U);
    msg.setDestinationEntity(113U);
    msg.timeline.assign("ZTIEQHSVOPMTBFDMVPWAQWOOYGSTKUHKUZZDVULADGJMYJNPFITNGNTIERZRLSYPSHAAHBGWHCBIIMCFITRUCROOPOQLMLYWNWOXFWRQSYGXSWRBXTRKIHZNCTAOJKXCXJUPOLLEXFBVL");
    msg.predicate.assign("WWXURDEZAZSYOTZRSTSMNXCYOPQXLGXVNDIYYZFZJIHVQEWIRQOCAHAVZYGSXDGJLEBA");

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
    msg.setTimeStamp(0.898773938352);
    msg.setSource(28432U);
    msg.setSourceEntity(235U);
    msg.setDestination(32258U);
    msg.setDestinationEntity(234U);
    msg.timeline.assign("WBXDWWBCUNYRHTFDNOIYNKUGYUPRWLPEASRPFEOIMNZTTZLHXLSZHGGXHXMGJXJFOUTAEFRGNRZCIRQCNWBXUDPNCGVDLGQUSOKBHCJSQELVRSKMGLTTKTMBIVVFAEQBUCIIELMHKNFXEZFJRJQNVSYWSBCHSLYEXYK");
    msg.predicate.assign("WIPLJKYENMGNRYPAXHTBJTUQMOODHYHRLIXIHFETJBXQDVMPURXATHCMOICQHSBYSMUWBMVYLSUCAORSDPWVFBVAQHOUFQPLGDXNJSJUNRRHENZHEVGKZDZPQVKWSJGBLEGPE");

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
    msg.setTimeStamp(0.494832289594);
    msg.setSource(45723U);
    msg.setSourceEntity(76U);
    msg.setDestination(56334U);
    msg.setDestinationEntity(159U);
    msg.reactor.assign("GXHMVIGKFDHAJTYLSRYUACACFNDGMAJUUWZCBJKHXTQXOVEHVGYUYDMAAVNRPIUJNTSJXCXMURTXRJTJCNOAGWKNJYJBQNSAWOGTBSKNSWNKIHLEHDVUQQHOZFFKEFGAXGUS");

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
    msg.setTimeStamp(0.243842232892);
    msg.setSource(33953U);
    msg.setSourceEntity(236U);
    msg.setDestination(64718U);
    msg.setDestinationEntity(26U);
    msg.reactor.assign("RNPLLUTJPZXGQSGBNOVYJHYSYQJSURCDKJHBEAUCXYMRYCFCGBBPPGJZRYXSBOSWFDKWTJCPWSNAMEDNAFFTQSUGPARIYQKXII");

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
    msg.setTimeStamp(0.408379846579);
    msg.setSource(2048U);
    msg.setSourceEntity(117U);
    msg.setDestination(42081U);
    msg.setDestinationEntity(199U);
    msg.reactor.assign("TWFALMZIQEARMKPCOOJDQNPIHYXJILMNFCYJRMQQZKSVOPTZSTWJFUKSFVINQ");

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
    msg.setTimeStamp(0.95067399763);
    msg.setSource(639U);
    msg.setSourceEntity(223U);
    msg.setDestination(48699U);
    msg.setDestinationEntity(179U);
    msg.topic.assign("IMIKELKSJLDHCEOPLTJLYEIBJKYWGYJEFEWHWTFRMRKGJOBGECWUUWXVHCZZKXVIJEJUMIXPRYVMMUUZGZYURRLBQANWQDOCXMEDALGIZKXUHUAHSKXPXZOTXFONFDQRSNBIMHTBDD");
    msg.data.assign("KZFNKBLVQQILTNMSCBCMRYQBAQMZGENJKMPURAGCYIRHIAZHSEWBBTWTLWJUUZCSZAXGMYOJGSZIATRPQOWFOFDSJOYVCEZ");

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
    msg.setTimeStamp(0.00197486502263);
    msg.setSource(30457U);
    msg.setSourceEntity(110U);
    msg.setDestination(8405U);
    msg.setDestinationEntity(202U);
    msg.topic.assign("YJRZTJPRZSOLWU");
    msg.data.assign("HSHPDLZETOCDFJHXSUNPKQARTOGCZXNMWCOHPUZZXUNSHLIJOYEMHORUWUOJGIMIXPKLBKNQZVVQJXE");

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
    msg.setTimeStamp(0.429587201649);
    msg.setSource(59983U);
    msg.setSourceEntity(122U);
    msg.setDestination(58815U);
    msg.setDestinationEntity(107U);
    msg.topic.assign("JOVICBVXKIRYGKIVDQSOWEJMMZBLNXOOVUXNFYXLTFURBQFGFLJOVHALPWMUQWZDSATONCTTGEOEJZLQGSNDQMFLYFSDYKVPXXKRYABYPTNLEXAQTCYKRIYJYOCHPBZPMJIKMKZ");
    msg.data.assign("NAKEQERHVXKYBXTGMNRLYQBNORMBBGVJJQWTXEKIMHAIZRUNYDZRDPCIQIRKMHWOU");

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
    msg.setTimeStamp(0.321695089231);
    msg.setSource(59996U);
    msg.setSourceEntity(55U);
    msg.setDestination(58873U);
    msg.setDestinationEntity(32U);
    msg.frameid = 210U;
    const char tmp_msg_0[] = {-125, -13, -18, 94, -90, -94, 36, 78, -112, -80, 116, -71, 9, 60, 72, -126, -112, -58, -75, -98, 91, -10, -77, -124, -119, -71, -19, 40, 80, -106, 16, 95, 104, 44, -120, 122, 31, -68, -101, -73, 124, -38, 72, 125, 112, 114, 65, 27, 66, -96, 36, 86, -70, -9, 125, -109, -108, -63, 51, -51, -7, -95, -118, -106, 77, 25, -20, -22, -35, -68, 105, 66, 74, -94, 76, -36, 88, -77, 61, -18, 80, 50, 47, 8, -61, 114, -115, -20, 13, -105, 72, 2, -11, -50, -24, -37, 82, -87, 36, 36, -45, 72, 13, 110, -59, 51, 17, 86, -60, 63, -42, 118, -7, -66, -82, -78, -123, -124, -118, -72, -47, -47, -120, 74, 50, -81, -20, 40, -21, 45, -52, 72, -69, 25, 56, 76, 60, -89, -115, 65, 75, -42, -77, -50, 19, 34, 63, 89, -5, 65, 23, -27, 88, -29, 3, -4, 34, 53, 93, 96, 84, 0, -92, -15, 31, 78, 105, -116, -82, -69, 112, -54, -60, 91, -73, 90, 63, 21, 41, -60, 9, 3, -74, -94, -20, 3, -30, -42, -75, 50, -111, -56, -67, -87, 57, 110, 65, -108, -6, -112, -51, -9, -126, 49, 89, 58, 66, 84, -56, 97, 95, -53, -37, 14, -62, -39};
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
    msg.setTimeStamp(0.95605676004);
    msg.setSource(28915U);
    msg.setSourceEntity(216U);
    msg.setDestination(19300U);
    msg.setDestinationEntity(107U);
    msg.frameid = 82U;
    const char tmp_msg_0[] = {-24, -107, 123, 34, 17, 42, -55, 35, -46, 23, -83, -111, -85, -19, 107, 49, 32, 95, 10, 49, 48, 100, 102, -58, -41, -106, 73, 103, -19, 11, -32, -113, 57, 10, -44};
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
    msg.setTimeStamp(0.411781057357);
    msg.setSource(22803U);
    msg.setSourceEntity(67U);
    msg.setDestination(11383U);
    msg.setDestinationEntity(42U);
    msg.frameid = 108U;
    const char tmp_msg_0[] = {10, -11, -115, 78, -123, 40, 42, -54, 88, 123, -118, -56, -105, 98, -113, -32, 73, -1, 104, -36, 40, 91, -71, -79, 122, 66, 70, 35, 20, 92, 126, 113, -28, -125, 114, -81, 38, -24, 121, -4, -104, -21, -5, 31, 22, 7, 108, 32, -108, 105, -25, -14, -113};
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
    msg.setTimeStamp(0.00226210941278);
    msg.setSource(21142U);
    msg.setSourceEntity(163U);
    msg.setDestination(44824U);
    msg.setDestinationEntity(156U);
    msg.fps = 60U;
    msg.quality = 199U;
    msg.reps = 231U;
    msg.tsize = 63U;

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
    msg.setTimeStamp(0.8924132074);
    msg.setSource(58669U);
    msg.setSourceEntity(21U);
    msg.setDestination(8635U);
    msg.setDestinationEntity(11U);
    msg.fps = 25U;
    msg.quality = 46U;
    msg.reps = 165U;
    msg.tsize = 223U;

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
    msg.setTimeStamp(0.0164335168239);
    msg.setSource(44102U);
    msg.setSourceEntity(222U);
    msg.setDestination(32171U);
    msg.setDestinationEntity(184U);
    msg.fps = 69U;
    msg.quality = 88U;
    msg.reps = 147U;
    msg.tsize = 136U;

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
    msg.setTimeStamp(0.0111198275298);
    msg.setSource(19119U);
    msg.setSourceEntity(2U);
    msg.setDestination(26754U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.420605000306;
    msg.lon = 0.905200912409;
    msg.depth = 254U;
    msg.speed = 0.846605228915;
    msg.psi = 0.386383464893;

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
    msg.setTimeStamp(0.201704252283);
    msg.setSource(61391U);
    msg.setSourceEntity(197U);
    msg.setDestination(19926U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.647517138396;
    msg.lon = 0.838151396574;
    msg.depth = 42U;
    msg.speed = 0.642288235969;
    msg.psi = 0.905705287132;

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
    msg.setTimeStamp(0.528734695433);
    msg.setSource(19485U);
    msg.setSourceEntity(64U);
    msg.setDestination(30928U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.831861707363;
    msg.lon = 0.830015002056;
    msg.depth = 153U;
    msg.speed = 0.0870407263423;
    msg.psi = 0.926715597885;

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
    msg.setTimeStamp(0.718029884379);
    msg.setSource(28098U);
    msg.setSourceEntity(29U);
    msg.setDestination(30566U);
    msg.setDestinationEntity(66U);
    msg.label.assign("LEIGXYWTUEYTIATMLDAQJWGLTNBJDRXDUXKGGSMIZXXPOIBBOCOASJETBXOV");
    msg.lat = 0.3824250207;
    msg.lon = 0.475083668;
    msg.z = 0.872752824639;
    msg.z_units = 149U;
    msg.cog = 0.224783153487;
    msg.sog = 0.204930562809;

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
    msg.setTimeStamp(0.867877696139);
    msg.setSource(49480U);
    msg.setSourceEntity(222U);
    msg.setDestination(62716U);
    msg.setDestinationEntity(42U);
    msg.label.assign("ESGUPJBXGPQZFQBFHDOWEYXQIMBOXVQHDFBCWRMHOZAJPNQFBEHIAHIXASAPREGMHDYYYBEMNQRBRNPPKZTPMUEAPLZIEWSRRUJVVOYIRSLMQITJTXMKCGVZCAVZRCSGLPLXQMZYJKUKHCY");
    msg.lat = 0.769786290505;
    msg.lon = 0.0811597418484;
    msg.z = 0.21630255976;
    msg.z_units = 92U;
    msg.cog = 0.482944293189;
    msg.sog = 0.725403021248;

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
    msg.setTimeStamp(0.380000007571);
    msg.setSource(21906U);
    msg.setSourceEntity(230U);
    msg.setDestination(26465U);
    msg.setDestinationEntity(160U);
    msg.label.assign("YSPHSMUQVXBHCYMHDRRWBPSXEKIRBTEIYODVETZUNMIOFRSHPPVOAOJHTZMSBCYZBNRUQCGRCCGIHWUHXTDSZOANCZZZULHOYTGUDOFFBDKLXQDQPLDBQQDFJPMP");
    msg.lat = 0.0528808926302;
    msg.lon = 0.897688655777;
    msg.z = 0.89012701786;
    msg.z_units = 237U;
    msg.cog = 0.646594463421;
    msg.sog = 0.789681363414;

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
    msg.setTimeStamp(0.297752306183);
    msg.setSource(46570U);
    msg.setSourceEntity(117U);
    msg.setDestination(948U);
    msg.setDestinationEntity(150U);
    msg.name.assign("TVLOHNLUFRTRNUKOHZOVXXYLVDMPMNVTJDFKVRMCLSGJTFSNJUVSQNYDRZZHRLOPJUMAOPGGDKCIWQQBPVQZJILELQRZEDUSKHCWQBYWTCLEUPKBMBSYJFIGEFFXWXWXKZEIDLJIRURUHNBKCXFGATQLKMCPKBREAIHWHFMBXJCCEGGUAEGHWVMGIYDIZPMDHBYNQ");
    msg.value.assign("CDUZVBGQRRDFRGSAIYEZXWQJGJCAINPOJHYLEVISPGXZNGXUFCTDKWQVJOBOOEICHCMJGRDALMKEHFRKHPVBTWIWNNOVDFLGMNHFAZCMZQYSTUXDGUIAXMCFSVJMDHEDUEURIYINWAXUIOLTRLYBPSOKLSYJXASK");

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
    msg.setTimeStamp(0.116686519437);
    msg.setSource(4684U);
    msg.setSourceEntity(23U);
    msg.setDestination(26288U);
    msg.setDestinationEntity(1U);
    msg.name.assign("HFOIPYNESIXGMCBUWPURJVMPAHLPKJYKFOKULWBAVUFZKECHMATBHXABYTBPVTSXNTEUGKDNO");
    msg.value.assign("CDBRXCSGKSGRLTGQIHMMYTZFWLWLONAADVUJUXNUIRZUAERVMDTLUBYOCNTRIMERWYMOFFHJCWWKNCJXSMMZPPKFBPGDWPTKXNIROMFRYKSHEVSXGBZONYSZLFJNEZPQIUVCZQIETLCHQFSKJPPVRJYBBTHNMXGJNMQAIKYWDCEHACLGDHBIQPWXKDVUHXD");

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
    msg.setTimeStamp(0.281912603669);
    msg.setSource(54496U);
    msg.setSourceEntity(143U);
    msg.setDestination(53605U);
    msg.setDestinationEntity(69U);
    msg.name.assign("LCEJOJAKNOKBVLIOPGDLRDITIKZAOEYLLQYPHXYUAXSIZITEMNYBBDDXIFTWNLSIKGDTSEBOEQOKFGWUVAAQJAKJHTLYSXSMMCNMSNSPMNTDRRVHVVDYECXEJBIVWCNUJXTWMAAYDTBZUXJFEYERCOSQYMQRXARH");
    msg.value.assign("XVFPBOWAUISGRQKPGWNJMSXBWLAPAEBXGCLJEXMXDPXFYFELDPKTXL");

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
    msg.setTimeStamp(0.389541634885);
    msg.setSource(37198U);
    msg.setSourceEntity(179U);
    msg.setDestination(11021U);
    msg.setDestinationEntity(231U);
    msg.name.assign("RJHBHIYMQUMHPFTNMQVJEQNIKGZSLINDCIJRGSKQQEVDOJCFIBFRBAGVXPBSOLTQWNXXLUYZEUMAFPMWZNLDBJKFYBSURMWEGXKFSFVBXCNZJDKYYDABCUHHCYXFCOETLUTTTRFVKOMMELYSIHWUXOSTBXPPNPWZWCZAVAROJP");

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
    msg.setTimeStamp(0.972019390789);
    msg.setSource(13417U);
    msg.setSourceEntity(137U);
    msg.setDestination(50611U);
    msg.setDestinationEntity(129U);
    msg.name.assign("MTBRQUDLHQFRYGFIVGZJRXSFIFWRFJKXUALNQCB");

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
    msg.setTimeStamp(0.804414870373);
    msg.setSource(45207U);
    msg.setSourceEntity(69U);
    msg.setDestination(54880U);
    msg.setDestinationEntity(139U);
    msg.name.assign("ETIVQUSGBDHUQCUUCBSHVESMGVPSADEDZMDMBWRPRBUNEOTWPXAXQNXXZVOWCEH");

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
    msg.setTimeStamp(0.386515937012);
    msg.setSource(59168U);
    msg.setSourceEntity(224U);
    msg.setDestination(54634U);
    msg.setDestinationEntity(15U);
    msg.name.assign("KPPMNVFWCNGPUGDOOFLRVISILYLBPOJEJCLIXWFSEQMMFHOYNFXLRJCOBATAQGWWPPHLFIAQHUXMENANSEQHBAZPAVRDGTEEMSVDGBXZRUBOXDQHXHDSFSMUEBTYDTKCKYTZETNZZMDXBNMYHZGNHTPQKJHTICAVQURUJLYCWRCYFERKXIDKKBCQPIUBOXLCKUPRSMNVDFWVMJTZGZTGJIYQOWZAKKUWDG");
    msg.visibility.assign("BMBWGNCFGJKJIKJWXZLHZRLITAZXUDHKNLWQZGQTYMEDTODKVKTHOQGEYGPFXWNIVEPFJFDFOSRJWRNJQSCYUZQARVZUYNBJEDTIEVVCBWDKVOHUJZJQFELTSAKCIPFBEMUYQMQXVOXKKXEUAOXAHMRPOFWQOSNSIBLUAYNUYEMBDHPLSPVHBSHZPIJPMXZZHDBLLWGCWRGMSRCOAYGTXLTPRIQT");
    msg.scope.assign("AUBMTCSIXSYCYBVMEGOKPLZQPEUOEZHLICVSRJJYIILPEIRIZQEXHYFNRZOPUFSRWLHAAWWRQDCNLCTBUTKVYQJSDNGXUTJQZRFHJEWDFKNHUYMKSJRLICVIKLBAWFNUPMRNKYBBKFXMTPNMUWSADZHXECYDBXCXVGQTDXOPDFQBIEZXXVGMVUAOGLPGATKBHQJEBOZKHVLUOPFWVJLHMQNMDQ");

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
    msg.setTimeStamp(0.805864162606);
    msg.setSource(11471U);
    msg.setSourceEntity(24U);
    msg.setDestination(25183U);
    msg.setDestinationEntity(214U);
    msg.name.assign("VDDOEWNKWGNSIIRJYBYZNLWZJFHUAGXJFWNGFRAULBGSDFAPYKXIBWMFSMTDTQXHIAMHFQBBKEVAPRDCNRFZEEPOANHMYTWZOGUCXKKYBRO");
    msg.visibility.assign("ZMVMXOYPURNMTWVBXVOYKKCJRKDHKFOTAYLECGIUYQLAFMODXLHFKXMXBZPDAPWWIKPHJXTBCUTL");
    msg.scope.assign("DLWSAAXOBWQZHQFZBSUSRJDNTPHFAIYXIZMHGREFOXONICAPVPQYUYBQGBCRXOTINJVAXLUTULRFRTTLJMHRVBTFWCLOWJDUICPWZDUIQKRPXYELBJSKMYMTXZFEEVKHSIPJCPEKMHDANQCWVRZ");

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
    msg.setTimeStamp(0.377157495147);
    msg.setSource(55053U);
    msg.setSourceEntity(157U);
    msg.setDestination(57004U);
    msg.setDestinationEntity(197U);
    msg.name.assign("YKNLPJHAAQZKXWDIWEUCGVAFXZHRQUIGBRRQXCEMAKFPSPYCBZWVLSUNNMCRDUEECTNKVYMKAITGLLSGYFEOJTJAXHIPXUWKAWDMRDLEVOVUZECUEBUEIYHZZXDNQGLJOMDUODCQNVZJ");
    msg.visibility.assign("QDOGWJJOWAJSOXPHNWCGXCAVJKIFPODEOVGBXLBZSYUZHFAHPLFIEDYENTYRWLWHZEPQLMRGZNYVIHOMVWSQGYKOTXNFKBMLMFMPZUTBVVWBCXJEKUFKYQCEQLCSIBAJZKNTVBNX");
    msg.scope.assign("PYWEURBKLGJXOENTMQBSDDWYUAHNYIQKJDDRRYAWIAEBMIQXEVVPVVQIAPBQCYVUAEZSUDJRWLALZNSHZNXCCZZBBIMCFLOHCZRWTJZGAUARCNXGDTPJFATGFXCGFYCDUVROVOPVRJXWHKFIDQKMPDEFLWSKHBSMCGLV");

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
    msg.setTimeStamp(0.819887783657);
    msg.setSource(63164U);
    msg.setSourceEntity(253U);
    msg.setDestination(35570U);
    msg.setDestinationEntity(117U);
    msg.name.assign("JAVBICNMRETUTUHTQNAFITERBHGJBBXIFBPUQUWKCYCRYGQOJNHHMTXXFBZFVBGDRXUAHOWJROMTPSSDUYVYLCKSIACLLQSCCZMWFWVYLZMXZNNQUEPADBSXOXXOQSQWSFDRPWTYYKGZGHWWFGBYAKAEFHNNLBDOZVKQF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IVDBEIITRDNPHRSUSTJGKUDSNHFEXFJFURIPRBIWNJSDEWQYTRZQOEYLCNLTIWQDSVFOLWPQBSRQDCWLMUJMZSGNLZEZSGKVUAGDOTMAEGQZSYJXUZYQCOYVYPFPXLOYRBHYHIKJDBHXCKMUNCFGNZAAPKXZILQOUJEGVNJWCALEFNXTXEWUMBPOYHDIMGTHXHJZAQZMQFIAHFUAKVAATSEHMWLOCCCBFDBPNCMBJG");
    tmp_msg_0.value.assign("DEKGKAXJPMIPGSZSBNQABEUHQNVQWDXIMKEDTNNLZHLEJEBYLRWLRLRLCVKDEJVFNURFFPN");
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
    msg.setTimeStamp(0.97966999967);
    msg.setSource(50834U);
    msg.setSourceEntity(197U);
    msg.setDestination(5904U);
    msg.setDestinationEntity(83U);
    msg.name.assign("IJFBYVNMCTHOCDVZRWUUVIMDZBSBPYFCKTWQKNIBEXZORFLIEFGULYPWKXFCDZLSKGDWONGIQTEKPXTNZRBBFHFNEDJHFQQUXQPVXAXMKUJSCQCOBMAJNMNXPEZACAZDYOZBTQXQHWGGLYKGNXTYDHSSRAPMWLVWEJRAYTOIBRHASUAOJAPJDSTICM");

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
    msg.setTimeStamp(0.69729933842);
    msg.setSource(52712U);
    msg.setSourceEntity(70U);
    msg.setDestination(12700U);
    msg.setDestinationEntity(20U);
    msg.name.assign("FPMVGJWBQLMXCSQGBUJAPKSFSXLRILCSJWEEZBXMWFDMKYEWHCVOAUPZYNVBAEISQKWZMYTH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AXYBZFEKXCEMUODLVNTBEAYBJMOJHPWURBYVQWDRBUXPHQIGIMERQGUQUFXFWKWZNASCSIFRCPLWOYRXWQQAOLJIVBXAKYPOHGFZVCZRZXDVOZHGZCWXCKGIDJKLZWQDPFHWDKNPEYISBNAEWCLLGEPOTPCGQTFHRLUENIVLZ");
    tmp_msg_0.value.assign("JSKHHTBLYAQXWKOGAZCERHDQBKURLNCINESKRALEXOACHBNDCGBRNNHLUTVOMZIHFXWTP");
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
    msg.setTimeStamp(0.465660143681);
    msg.setSource(32527U);
    msg.setSourceEntity(113U);
    msg.setDestination(37103U);
    msg.setDestinationEntity(17U);
    msg.name.assign("GIAOVTXPFZHCYCKDUDVRWWMAMKSQLFWULVMXDOABFOUEZHBGUCNGJAEQCCYJKVUZKXYLRMTJOQDVLPTQ");

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
    msg.setTimeStamp(0.455075124837);
    msg.setSource(58884U);
    msg.setSourceEntity(245U);
    msg.setDestination(34264U);
    msg.setDestinationEntity(71U);
    msg.name.assign("MSOQKHJBWRCGGHPCVBJXJOQRYKNPHNADWYFNRNPFLMUKFENGUUHBDBQCINULCYLQESWCMUYXYVIZFBTZLEOOUGQCPYHRAVOIAPHBZXDMECZRXTYTRKA");

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
    msg.setTimeStamp(0.251558508392);
    msg.setSource(35111U);
    msg.setSourceEntity(34U);
    msg.setDestination(44626U);
    msg.setDestinationEntity(82U);
    msg.name.assign("GMQXCKWOVNZFJMSNXFSQOYE");

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
    msg.setTimeStamp(0.273014447697);
    msg.setSource(55345U);
    msg.setSourceEntity(125U);
    msg.setDestination(29821U);
    msg.setDestinationEntity(62U);
    msg.timeout = 853733816U;

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
    msg.setTimeStamp(0.261533339951);
    msg.setSource(3326U);
    msg.setSourceEntity(39U);
    msg.setDestination(38253U);
    msg.setDestinationEntity(137U);
    msg.timeout = 1746996667U;

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
    msg.setTimeStamp(0.0210784644349);
    msg.setSource(29568U);
    msg.setSourceEntity(70U);
    msg.setDestination(51983U);
    msg.setDestinationEntity(89U);
    msg.timeout = 3003872085U;

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
    msg.setTimeStamp(0.295225892805);
    msg.setSource(297U);
    msg.setSourceEntity(210U);
    msg.setDestination(64322U);
    msg.setDestinationEntity(233U);
    msg.sessid = 303165393U;

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
    msg.setTimeStamp(0.424202535957);
    msg.setSource(56951U);
    msg.setSourceEntity(144U);
    msg.setDestination(32728U);
    msg.setDestinationEntity(226U);
    msg.sessid = 2099308501U;

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
    msg.setTimeStamp(0.54651314364);
    msg.setSource(60168U);
    msg.setSourceEntity(6U);
    msg.setDestination(37767U);
    msg.setDestinationEntity(75U);
    msg.sessid = 706696666U;

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
    msg.setTimeStamp(0.0793470542785);
    msg.setSource(34559U);
    msg.setSourceEntity(229U);
    msg.setDestination(43553U);
    msg.setDestinationEntity(3U);
    msg.sessid = 1879050679U;
    msg.messages.assign("JCXGURLUKBSHPMGZBZIBFPDVELHCBZBFAKXRMBAOEUERMPPGITDVCFYFFOINQACTUAKNZSGVRKRUAMUCJKBNFESOUXZNMZQYLDYXRJIFDYHOSWDECVCQOMFWEMAIJLSWQTQWPKGYWDDNYHJVMNQLJHTATOBVEAZWRLBOKWHGHISJQZHWJISKXTWDYZXTKEOVLOASVVFUXZGPGGIJLNYNP");

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
    msg.setTimeStamp(0.119637128772);
    msg.setSource(22632U);
    msg.setSourceEntity(135U);
    msg.setDestination(24584U);
    msg.setDestinationEntity(29U);
    msg.sessid = 2491178670U;
    msg.messages.assign("GSULARSUDBBLKOPFANLZDYNOLWPQIQURCYVRGBDELAGQZYMLNDXAXCTAXJOKRFDOTTVWNQYSTBFVJTULAIFWGXWNUCHZUSSUCJHZFGCSDVVRJKTUMDQTZVIBPAWEIDSMVJKTEEGKAHKLAXFEIJYPQNERPOZIBRSTJQWMMPLIJWRYHBQGDXODNWBZJCXHPTKYNOHWHWSCHXFFOYVQAOGBPYXIMZEKHCBYR");

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
    msg.setTimeStamp(0.294420502297);
    msg.setSource(8371U);
    msg.setSourceEntity(60U);
    msg.setDestination(19971U);
    msg.setDestinationEntity(182U);
    msg.sessid = 2767661114U;
    msg.messages.assign("LTKEWZXXVVKLLTWJCQWUURMGAYPFMROVHMUIOKHTSNZIJEEPGEHHNHNCYNOTEJSVSQTICAAIBOQLNGBMFTMXRWLXIHQWSYTSRPAASVRUVJRQUJHRJL");

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
    msg.setTimeStamp(0.538941265612);
    msg.setSource(14428U);
    msg.setSourceEntity(110U);
    msg.setDestination(20048U);
    msg.setDestinationEntity(227U);
    msg.sessid = 3127784435U;

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
    msg.setTimeStamp(0.736053583886);
    msg.setSource(24102U);
    msg.setSourceEntity(159U);
    msg.setDestination(4783U);
    msg.setDestinationEntity(15U);
    msg.sessid = 123492686U;

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
    msg.setTimeStamp(0.588227011623);
    msg.setSource(44566U);
    msg.setSourceEntity(206U);
    msg.setDestination(52699U);
    msg.setDestinationEntity(81U);
    msg.sessid = 1867086522U;

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
    msg.setTimeStamp(0.083115555798);
    msg.setSource(41073U);
    msg.setSourceEntity(200U);
    msg.setDestination(60644U);
    msg.setDestinationEntity(101U);
    msg.sessid = 4014970537U;
    msg.status = 112U;

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
    msg.setTimeStamp(0.840968224896);
    msg.setSource(15696U);
    msg.setSourceEntity(39U);
    msg.setDestination(7703U);
    msg.setDestinationEntity(67U);
    msg.sessid = 1226014063U;
    msg.status = 113U;

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
    msg.setTimeStamp(0.385874030806);
    msg.setSource(53104U);
    msg.setSourceEntity(231U);
    msg.setDestination(29628U);
    msg.setDestinationEntity(187U);
    msg.sessid = 1757656609U;
    msg.status = 145U;

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
    msg.setTimeStamp(0.506380940934);
    msg.setSource(48327U);
    msg.setSourceEntity(215U);
    msg.setDestination(2558U);
    msg.setDestinationEntity(188U);
    msg.name.assign("SXPJDXMVWUKQMRKBZEUHGFOVVAGJTRHYWCIVVQCYNJXDKGVQYWFSUSKENDYXSMFSZCSGWMIIXLZTBRYIXRLA");

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
    msg.setTimeStamp(0.689970505563);
    msg.setSource(63939U);
    msg.setSourceEntity(70U);
    msg.setDestination(54689U);
    msg.setDestinationEntity(210U);
    msg.name.assign("APGVHMFVQIIJWXBSAKLDJFVQEERHUKUZQAUFDWGMYGYLEEDNRRVXNYZMUXNMHZJZONJKQFKQBOTXKFUIDOKTTLGUPSWDJMDMFPELCXSASTOWTHYANHAIUOIFLJBSPJDWKQPRNTCESNTYLBUVSTYORWHGKJNACVRRMBTNXRCPUAWXCIPHMCZEONGWVLQCTZCDBW");

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
    msg.setTimeStamp(0.778888324105);
    msg.setSource(36259U);
    msg.setSourceEntity(110U);
    msg.setDestination(13435U);
    msg.setDestinationEntity(202U);
    msg.name.assign("DJNRKKXDOCTYSOGNUKTMLECTEKHDFLKLGSYVLSLEQDSIVMBJBRQZXNEJTHEX");

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
    msg.setTimeStamp(0.516505568312);
    msg.setSource(17193U);
    msg.setSourceEntity(154U);
    msg.setDestination(4883U);
    msg.setDestinationEntity(239U);
    msg.name.assign("FDURQJFVHREDFPMZEZBEHPLPXGQJGJOVFUEHHRLGQVFONTITKGQKLIULYABCLXXBGNJBTKAPBEWYOFYUDVYVESCQVPWJHDXNLOWYUGWEZFXQZJECXNTRCAVWARDKMCSUNAZNNKSXAJNEPYYOTIITNISLOALXMSDLRORCCXYJCHHCHMBPSPSTDMMIWLVXGARAZMNHIVZOGOQGTOGSFICZKMWSFMHMVYTBEIZRIUBZPWAQ");

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
    msg.setTimeStamp(0.915232537886);
    msg.setSource(13547U);
    msg.setSourceEntity(150U);
    msg.setDestination(53100U);
    msg.setDestinationEntity(189U);
    msg.name.assign("KOVMJGSBCXVFUOKVNQGHEKULBUFBAAPKWEGCNNVDGBBDKAQRSDZZZIAMHLUKEMOZIQITVIX");

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
    msg.setTimeStamp(0.818085363618);
    msg.setSource(37305U);
    msg.setSourceEntity(109U);
    msg.setDestination(12322U);
    msg.setDestinationEntity(249U);
    msg.name.assign("YTPXNTLBSBQVRIHZZZPMADPUSTACAAHHDKRSKEDCQFRLOZOXSVVEODSJZTQIRKHPMYUSBEXVXUCFIQEI");

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
    msg.setTimeStamp(0.550157495027);
    msg.setSource(55184U);
    msg.setSourceEntity(102U);
    msg.setDestination(26612U);
    msg.setDestinationEntity(80U);
    msg.type = 9U;
    msg.error.assign("RNXHFCINVSHYFHTTJTSOQTEKWVXQCHTYKKLRTUIMDIHMXPLAQZIGEFPPXBKCKVIULZEPOLBXOBWPJNYYWFEAZZTJCHCIOADAGGPLQBDCZVRBDZSXFUWSEYAFUPYMNPFRFNWDTKHRANDIQGLYJOLIQUVGWOCJVCMWKLDEZQHYWTJMVDHEOMYFJGGAKVJYGUEQRRVEWMSRNBKUMUSLOJZHENMPQGVUZXWBJAGXSI");

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
    msg.setTimeStamp(0.583607058286);
    msg.setSource(16311U);
    msg.setSourceEntity(156U);
    msg.setDestination(4896U);
    msg.setDestinationEntity(151U);
    msg.type = 189U;
    msg.error.assign("DWFGHGQJRBHCMHGYTTTMRPIWYAYAQTKRCCRPIOIADSFNZBGJTLJWOFVZOSQOPAABVDBQAVRMVNMCJXLFDIUXWCUPEOSERHHPZDNDGFFUSWLTMGHXVILFSXBQQYZGGEUCTKUHDSZQNDHEIVLDJYBNITTZXIVKWWHKYCMRSPPUOAZVCHBOIMLDBPUOKMXQKGNGRYPETWCNZULKWAYLFWRJBNOXJEBFKKVEMQUZNSZJEVXYALEKFJE");

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
    msg.setTimeStamp(0.531945807807);
    msg.setSource(34846U);
    msg.setSourceEntity(190U);
    msg.setDestination(32907U);
    msg.setDestinationEntity(80U);
    msg.type = 52U;
    msg.error.assign("SGSQJJOCULGFTPMJTSEDOBVRGLGCCZGMUUHCNIDPHEIZAVBNSBTHZXBANXWIYHVEMLPJBLCJQJXAPWOOTQXSGJFHWKACQBPWUZXWKSALTVMEWTAKFKAQEQKCSZQHFFYROLMODXSKZHUHBEUWTVPHFZIKZRYFODQNUJDVUDNARNGNKNOBEQGREBYRAMLXNFSIQPAMOUDIKXBXTWHLOJPVIFZDMYWRJPV");

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
    msg.setTimeStamp(0.703421881381);
    msg.setSource(3778U);
    msg.setSourceEntity(65U);
    msg.setDestination(2302U);
    msg.setDestinationEntity(224U);
    msg.seq = 55474U;
    msg.sys_dst.assign("WSCOALOADREYTJYBAIIMRCAFNSTDLVN");
    msg.flags = 201U;
    const char tmp_msg_0[] = {-86, -69, 51, 86, 5, -84, -51, 57, 86, 52, -113, 100, 34, -18, 50, 125, -62, 9, 90, 7, 53, -95, 13, -31, 59, 9, 9, -20, -15, 8, 68, 34, -81, -8, 95, -106, 115, 99, -110, -115, 32, 3, -49, 35, -120, 81, 104, -79, -26, -15, 119, -98, 3, 85, -100, -124, -58, -84, -29, 37, -121, -57, 92, 82, 92, 45, 78, -25, -27, -33, 100, 12, -122, -120, -79, 90, 28, -42, 92, -112, -71, 65, 120, 10, 33, -29, 45, 122, 17, 55, 27, 101, 81, -121, -18, -11, -19, 126, 21, -78, 32, 75, -70, -125, 66, -72, 58, -84, 78, 18, -18, -2, 60};
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
    msg.setTimeStamp(0.618935710034);
    msg.setSource(5383U);
    msg.setSourceEntity(14U);
    msg.setDestination(7268U);
    msg.setDestinationEntity(66U);
    msg.seq = 5965U;
    msg.sys_dst.assign("DQPYJGJGNOHVEXRRAJCZXOXGBLZVRCHYLUAVAJJQILTSUJGERGMOT");
    msg.flags = 118U;
    const char tmp_msg_0[] = {-35, 42, -60, -49, -1, 103, -52, -20, -87, -124, -59, 29, -95, -2, 9, 37, -100, 26, 78, -95, -33, -124, 63, -95, 112, 32, -35, 72, 88, -115, -113, 32, 29, -106, 62, -8, -41, 76, -63, -73, -5, -35, 126, -49, -24, -53, -111, -80, 78, -39, -58, -118, -50, 63, 106, -43, -48, 96, 46, -88, 66, -58, 54, 114, -4, 89, -73, 97, 125, -63, 31, -76, 19, -95, 63, -86, -21, -59, -2, 72, -33, -94, -19, 2, 116, 40, 13, 19, -47};
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
    msg.setTimeStamp(0.685296449611);
    msg.setSource(17738U);
    msg.setSourceEntity(177U);
    msg.setDestination(3139U);
    msg.setDestinationEntity(75U);
    msg.seq = 44903U;
    msg.sys_dst.assign("MOQSLGEYABAVLTNVIUUGPZTSAXTINVXJPMOGTPYIZHCFQTVBUFOMXXDHBLMUQABKZFWXHGGXORFNQKBAEVFASCEMOWHOICWG");
    msg.flags = 184U;
    const char tmp_msg_0[] = {-22, -10, 57, 74, -6, 12, 48, 47, -124, 107, 80, 90, 114, 126, 87, -92, 4, 86, -71, 114, -103, -72, 84, 60, 7, 6, -33, -94, 83, -102, -42, 58, 30, 31, -76, 35, -78, -46, 6, -123, 12, -26, 64, 43, -92, -73, 58, -78, -92, 77, -69, 107, -85, 101, -61, -53, 126, 36, -98, 45, 90, 58, 86, 38, -124, -61, 68, 13, 125, -74, -40, 85, -63, -33, 57, -62, -106, 102, 92, -26, -100, -24, 123, -19, -61, -101, 81, -119, -74, -42, -123, 113, 63, -72, 63, -17, -24, -120, 5, -103, -94, 98, 107, -85, -100, 12, -55, -52, -19, 44, -28, 53, -2, -80, 66, -104, 103, 5, 10, 29, 56, 34, 56, 26, -108, 45, 66, 92, -8, 52, 91, 54, 2, 47, -127, 5, -102, 121, 39, -120, 35, 22, -7, 7, 55, -125, 85, 93, 25, 61, 40, 51, -10, 74, -50, 118, 122, -99, -68, -109, 29, 99, 17, -10, 1, 91, -62, 82, 59, -109, 98, -84, 0, 55, -18, 0, 33, 1, 0, 93, -79, 123, -37, 117, -56, 7, -30, 11, 89, -23, 36, 45, 98, 53, -80, -24, 4, -28, -33, -45, -62, 75};
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
    msg.setTimeStamp(0.565621051855);
    msg.setSource(3468U);
    msg.setSourceEntity(96U);
    msg.setDestination(48912U);
    msg.setDestinationEntity(35U);
    msg.sys_src.assign("QIXCPLKJVOLPPEZQYYXDIRMLUOGJFDMBIIVXWPK");
    msg.sys_dst.assign("WHERJSZLUIOABTMNQDRABTSUQYBIQCGWEMPIGNSJECUYCXDMJXZVRNWPUKLDMJ");
    msg.flags = 206U;
    const char tmp_msg_0[] = {18, 105, -115, -81, 90, 101, -84, -123, -25, -77, -22, -28, -108, 30, 42, -122, 24, 79, -42, -108, 18, -49, 45, 10, 59, -74, -11, 28, -55, -50, -113, -125, 113, -27, 112, 76, -52, -60, -98, 75, -127, -54, 117, 26, -28, -69, 94, 102, 91, -40, -71, 75, -103, -95, -10, -30, 100, -78, -69, -3, 22, -32, 55, 105, 120, -56, -94, 85, -15, -84, -126, 51, -127, -44, -84, 58, 1, -112, -100, -15, 77, 99, 7, -95, 35, -5, 31, 64, -50, -70, 24, -10, 88, -125, 47, 71, -106, -113, 44, -61, -38};
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
    msg.setTimeStamp(0.42462343078);
    msg.setSource(7589U);
    msg.setSourceEntity(68U);
    msg.setDestination(552U);
    msg.setDestinationEntity(122U);
    msg.sys_src.assign("YVBFGVIAFUFINJHOJMXIWAYLLXOJNJNICRMYRTMIIMZEFHTUPBNMBKKQTVUXTYPXJAEPEOWZZDTLILLPVMEBOFQAQLRDZXUSFQWHVWIXSDKXDOBAKSLOQUOJOTQRFZPPEMDAZKGGZKDXSCUVFTSLCYGRGRNNWKYEHBAEYTSSJUVSVFEIMWZRKRHYHWYBUCDSQPKNHNGZSXCPDHHDQOBRGHBBMRMCJAWICUNCYUWAPXK");
    msg.sys_dst.assign("QZPGYMRTNLKBOOIHXVBSEJDRKHHIYNFJGYCCSTURDLMAWDVAGFXASMOAGTUIZNLSONRLDZMOPVGPNFSBRZCMWMZBRSTINIXIXHMCYTXKXLANXVRHHNEJFCHARUUDWOVEBJUFEOMYKYD");
    msg.flags = 163U;
    const char tmp_msg_0[] = {3, 83, 47, 115, -116, -61, 38, 64, 93, -88, -90, 74, 93, 35, -111, -106, 117, 72, 96, -43, 124, 92, 35, -123, -23, -10, -50, 7, 49, 9, -96, -20, -91, 42, 118, 5, 44, -121, -119, -49, -65, -27, 66, 41, -9, 44, 94, 82, 45, -40, -75, -103, 81, -83, 116, -118, 35, -125, 80, 3, -46, 37, -80, 93, 114, -55, 45, 81, -112, 32, 43, 114, -94, -113, -43, 4, 114, 24, -80, -40, -95, -58, 66, -6, -119, -103, -75, 125, 43, 85, -31, 26, -38, -120, -64, -77, 69, 36, -52, 90, 29, -107, 25, 95, 72, 22, 31, 42, -63, -109, -125, -71, -123, -128, -102, -124, -75, 90, 69, 92, 114, -42, -52, -18, 31, 70, -3, 98, 78, 70, 62, 110, -17, 5, 100, 61, -93, -8, 100, 112, 24, -75, -34, -89, -90, 54, -92, -18, -24, -27, -1, -80, -45, 39, -68, 34, -121, 16, -10, 86, -52, -120, 115, -97, -75, -110, -55, 115, 68, -109, 23, 29, 121, -110, 110, 90, -77, -99, -84, -34, -5, 21, -77, -37, -27, -35, -90, 119, -30, -49, 55, -74, 22, -34, 6, 120, 47, 6, -25, -113, -110, 119, 100, 42, -16, 118, -97, 103, -55, 32, 98, 11, 76, -127, -83, 60, 40};
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
    msg.setTimeStamp(0.67041825515);
    msg.setSource(47638U);
    msg.setSourceEntity(147U);
    msg.setDestination(4752U);
    msg.setDestinationEntity(31U);
    msg.sys_src.assign("EPCHKDUOACQTOYZLJTFTSQUOVWX");
    msg.sys_dst.assign("KMDAEAPZXOOGDFCTDDREMSLXIURRFCPGEFTQJGATFUAQQISBWYYWNUGVURAQKPEHCTYEKPAMPCNDYKCWOHYLVNCTNXKBYSLIFBZVNBRMLOFDLCJSHYUWEEVQYUVBRNUBOMMVDARYAIHOZNGNPUZEWNKQOWWJRIMSTOSHKOUXTWFDCXYEVBJGHMIRIIVZKNPKPFFTWMSIZHDPCGREJJQXVXZCIHJSQHJVJJLLGHUOFXBGZMWKZSZATSTBX");
    msg.flags = 207U;
    const char tmp_msg_0[] = {-21, 40, -96, 9, -52, -37, 121, 69, 80, 64, -15, -57, -20, 24, -99, 17, 111, -5, -42, 23, 111, 106, 0, 101, -10, 67, 45, 35, -83, 9, 38, 68, -50, -64, 65, 93, 118, -96, -28, -95, -47, -88, -123, -40, -13, -10, 68, 26, -27, -26, 37, -69, 116, 110, 41, 101, -38, 70, -27, 92, 3, -16, -70, -123, 75, 33, -24, 46, 121, -81, 60, 68, 90, -121, 72, -25, -35, -73, -66, 50, 19, 19, 97, -102, 31, 51, 57, -116, 19, 92, 84, 120, 20, 83, 118, -16, 66, 86, -119, -93, 13, -30, 30, 86, 112, -88, 91, 25, -123, -74, 108, 4, 77, 103, -85, -63, 4, 27, 112, -18, -21, 24, 18, 124, -121, -84, 124, 51, 97, 75, 100, 114, 81, 58, -19, -89, 51, 43, 48, -37, 94, 122, 125, 71, -52, 42, 113, 84, -112, 27, 77, 23, -97, 114, -97, 76, 11, 105, -125, 23, 88, 39, 67, 23, -3, 40, 42, 110, 126, -25, -45, -1, -126, -41, 98, -64, -105, -1, -77, 15, -38, 87, -95, -76, 89, -46, 85, 88, -19, 92, 46, 98, -81, 18, 10, 61, -44};
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
    msg.setTimeStamp(0.101185520794);
    msg.setSource(9661U);
    msg.setSourceEntity(210U);
    msg.setDestination(19381U);
    msg.setDestinationEntity(73U);
    msg.seq = 55093U;
    msg.value = 199U;
    msg.error.assign("NFMVCYZMMPBWBPDUNVXJCMXKCLEAIVRHWVKIUDNXZQCVKWDYFSJDSXLSZBUNQFYJCKBQIHM");

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
    msg.setTimeStamp(0.318082853031);
    msg.setSource(64200U);
    msg.setSourceEntity(239U);
    msg.setDestination(33377U);
    msg.setDestinationEntity(44U);
    msg.seq = 19222U;
    msg.value = 113U;
    msg.error.assign("MUIFZPBLTGHUJHGYZEHEAXPVYYXYKQDJMRBAHOBTZXAOQFVAKJJJUVDFKSBUYHGOORLMACBUETSGIBYQPECLKTCHZMFWNUQHKSDRDAAUOKVISJELIKCBKIXNFLVCDCNCFNFNESFXDNOTHWNWMHZBAKGWWZDRFXUWWNMTSPYLOXUJEZCVEOPYRGRGZMIPIBEICSUQXGTQQITSLSOYMPHLWPWBJ");

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
    msg.setTimeStamp(0.984456975405);
    msg.setSource(50433U);
    msg.setSourceEntity(82U);
    msg.setDestination(51918U);
    msg.setDestinationEntity(61U);
    msg.seq = 40200U;
    msg.value = 160U;
    msg.error.assign("LZTMBUUWAWEGIBXEYXFQGLVHYTEYDUJEMZYNIJNZVJSUAGKPLJQCAIKMXLHWZRGCRUQMLCDTUJFFHAXVSTXWRQLRUNLDXIODNJJGDHDRVNKTQHBJBWKJBDZWBEMWAQNEGKHHBBZRLCTTTCISAVNZPGOYUDAAKRFQFSYXFDUSDVKMMWRZOHOPUKICGGOSYBMKPGOIPFLCQHOPOXCFIVZEQPPYXVIPNJRHSWSY");

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
    msg.setTimeStamp(0.0925776935122);
    msg.setSource(23110U);
    msg.setSourceEntity(75U);
    msg.setDestination(48174U);
    msg.setDestinationEntity(78U);
    msg.seq = 6013U;
    msg.sys.assign("HNNKPFWGPUOZHLWXFFDOYCFGSZKYHHDZRYEFRWFTNMVBEMVEAMSYKWXJMIKZGZSRGBPCYIVEQCNSVISIBLUYAXHLNMNDFEIHOLNNLFWEPJUCBVGHZAYEATCQSCICYUQVKMJEPAQGLSUBEJQOGTXFBPKRIQDRDVJRXTAJWTUZMNKUIDZPMGAPJXGJVGUITBOLYAKVXZOWBNSQWUXYQADMRQTFOSHDWQTKVPRLJABMCUSKCEHOHWTX");
    msg.value = 0.995737915719;

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
    msg.setTimeStamp(0.354246157368);
    msg.setSource(32389U);
    msg.setSourceEntity(172U);
    msg.setDestination(47232U);
    msg.setDestinationEntity(67U);
    msg.seq = 4124U;
    msg.sys.assign("CBZSNKRJDELCWETHUKZFOSWILQOA");
    msg.value = 0.254377589716;

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
    msg.setTimeStamp(0.344476036908);
    msg.setSource(63934U);
    msg.setSourceEntity(40U);
    msg.setDestination(16946U);
    msg.setDestinationEntity(62U);
    msg.seq = 61845U;
    msg.sys.assign("GUXSFVABAUPYZJFLVQTHUWXYXNTRZNCWPHUDBNEDHGIHQDGWRISIRZTNOVRABHZNCNSNIPUFQDMWYXKJKRKDDZMKQCHQMLYGGKMFJMGAIPSSTASTAHDQREOJFWPJOCVBSXFKLPRSOEEBEABPARNTYKHLCTECMIMNHMYYHGAYELFBMOXPSBOQGZDKQJWGIGLPSOLWQOJLWFVUMJWTJRWBKXLQNZKIZCXVERVTVUPFDBUOUYVICVLODJEFYZZT");
    msg.value = 0.0244067984427;

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
    msg.setTimeStamp(0.0487110873193);
    msg.setSource(43187U);
    msg.setSourceEntity(247U);
    msg.setDestination(65114U);
    msg.setDestinationEntity(172U);
    msg.action = 71U;
    msg.longain = 0.780919831072;
    msg.latgain = 0.333658012959;
    msg.bondthick = 4080409036U;
    msg.leadgain = 0.69977182025;
    msg.deconflgain = 0.999862170072;

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
    msg.setTimeStamp(0.509096702732);
    msg.setSource(28357U);
    msg.setSourceEntity(58U);
    msg.setDestination(46820U);
    msg.setDestinationEntity(0U);
    msg.action = 67U;
    msg.longain = 0.376737805237;
    msg.latgain = 0.773139053741;
    msg.bondthick = 3160218110U;
    msg.leadgain = 0.194085302249;
    msg.deconflgain = 0.510376144593;

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
    msg.setTimeStamp(0.443436833652);
    msg.setSource(39290U);
    msg.setSourceEntity(248U);
    msg.setDestination(5349U);
    msg.setDestinationEntity(166U);
    msg.action = 208U;
    msg.longain = 0.465879284464;
    msg.latgain = 0.155252283616;
    msg.bondthick = 299178746U;
    msg.leadgain = 0.456871656979;
    msg.deconflgain = 0.265077561491;

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
    msg.setTimeStamp(0.39340151958);
    msg.setSource(29513U);
    msg.setSourceEntity(5U);
    msg.setDestination(44169U);
    msg.setDestinationEntity(12U);
    msg.err_mean = 0.435946116767;
    msg.dist_min_abs = 0.498862105428;
    msg.dist_min_mean = 0.993163360489;

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
    msg.setTimeStamp(0.438928054627);
    msg.setSource(58566U);
    msg.setSourceEntity(159U);
    msg.setDestination(38481U);
    msg.setDestinationEntity(60U);
    msg.err_mean = 0.025994789176;
    msg.dist_min_abs = 0.536228461465;
    msg.dist_min_mean = 0.440276509503;

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
    msg.setTimeStamp(0.0738305496511);
    msg.setSource(10624U);
    msg.setSourceEntity(50U);
    msg.setDestination(55661U);
    msg.setDestinationEntity(223U);
    msg.err_mean = 0.0636584659991;
    msg.dist_min_abs = 0.544426434271;
    msg.dist_min_mean = 0.714111318795;

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
    msg.setTimeStamp(0.440133445454);
    msg.setSource(51963U);
    msg.setSourceEntity(247U);
    msg.setDestination(6237U);
    msg.setDestinationEntity(249U);
    msg.action = 9U;
    msg.lon_gain = 0.894218458522;
    msg.lat_gain = 0.764442893327;
    msg.bond_thick = 0.171247651545;
    msg.lead_gain = 0.351889439026;
    msg.deconfl_gain = 0.653674993634;
    msg.accel_switch_gain = 0.437458283554;
    msg.safe_dist = 0.138052955062;
    msg.deconflict_offset = 0.107914400749;
    msg.accel_safe_margin = 0.754822389598;
    msg.accel_lim_x = 0.0725543787423;

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
    msg.setTimeStamp(0.183161233499);
    msg.setSource(36549U);
    msg.setSourceEntity(40U);
    msg.setDestination(61187U);
    msg.setDestinationEntity(189U);
    msg.action = 85U;
    msg.lon_gain = 0.491509033265;
    msg.lat_gain = 0.670099121117;
    msg.bond_thick = 0.898080581611;
    msg.lead_gain = 0.218039444426;
    msg.deconfl_gain = 0.0321289370969;
    msg.accel_switch_gain = 0.304554625199;
    msg.safe_dist = 0.0171788942972;
    msg.deconflict_offset = 0.58735408088;
    msg.accel_safe_margin = 0.00741877105303;
    msg.accel_lim_x = 0.555221944683;

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
    msg.setTimeStamp(0.262263432062);
    msg.setSource(54963U);
    msg.setSourceEntity(82U);
    msg.setDestination(31308U);
    msg.setDestinationEntity(148U);
    msg.action = 182U;
    msg.lon_gain = 0.77033828601;
    msg.lat_gain = 0.766469393997;
    msg.bond_thick = 0.655059331564;
    msg.lead_gain = 0.560877748212;
    msg.deconfl_gain = 0.559452475833;
    msg.accel_switch_gain = 0.350581144505;
    msg.safe_dist = 0.886309820433;
    msg.deconflict_offset = 0.4850392368;
    msg.accel_safe_margin = 0.65650650203;
    msg.accel_lim_x = 0.0796977611562;

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
    msg.setTimeStamp(0.847265067528);
    msg.setSource(17443U);
    msg.setSourceEntity(123U);
    msg.setDestination(38825U);
    msg.setDestinationEntity(58U);
    msg.type = 87U;
    msg.op = 138U;
    msg.err_mean = 0.689371676952;
    msg.dist_min_abs = 0.011523873365;
    msg.dist_min_mean = 0.319752776489;
    msg.roll_rate_mean = 0.569869362935;
    msg.time = 0.171111291848;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 89U;
    tmp_msg_0.lon_gain = 0.7521395836;
    tmp_msg_0.lat_gain = 0.0814180320647;
    tmp_msg_0.bond_thick = 0.224814944017;
    tmp_msg_0.lead_gain = 0.115977320564;
    tmp_msg_0.deconfl_gain = 0.863110473371;
    tmp_msg_0.accel_switch_gain = 0.530393683554;
    tmp_msg_0.safe_dist = 0.842834430833;
    tmp_msg_0.deconflict_offset = 0.185258832541;
    tmp_msg_0.accel_safe_margin = 0.839359104736;
    tmp_msg_0.accel_lim_x = 0.69647852142;
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
    msg.setTimeStamp(0.681281240374);
    msg.setSource(38996U);
    msg.setSourceEntity(12U);
    msg.setDestination(59321U);
    msg.setDestinationEntity(162U);
    msg.type = 182U;
    msg.op = 133U;
    msg.err_mean = 0.946254354874;
    msg.dist_min_abs = 0.414405106153;
    msg.dist_min_mean = 0.823746773669;
    msg.roll_rate_mean = 0.450005705147;
    msg.time = 0.414816581306;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 55U;
    tmp_msg_0.lon_gain = 0.0154559428387;
    tmp_msg_0.lat_gain = 0.424142401321;
    tmp_msg_0.bond_thick = 0.251911092282;
    tmp_msg_0.lead_gain = 0.668798451298;
    tmp_msg_0.deconfl_gain = 0.0845584261155;
    tmp_msg_0.accel_switch_gain = 0.535572567352;
    tmp_msg_0.safe_dist = 0.957744912306;
    tmp_msg_0.deconflict_offset = 0.0160089757723;
    tmp_msg_0.accel_safe_margin = 0.783928814857;
    tmp_msg_0.accel_lim_x = 0.257848325922;
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
    msg.setTimeStamp(0.651830824884);
    msg.setSource(32610U);
    msg.setSourceEntity(177U);
    msg.setDestination(12755U);
    msg.setDestinationEntity(98U);
    msg.type = 172U;
    msg.op = 100U;
    msg.err_mean = 0.981454456676;
    msg.dist_min_abs = 0.72849525661;
    msg.dist_min_mean = 0.229772632541;
    msg.roll_rate_mean = 0.92024761848;
    msg.time = 0.609450481898;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 183U;
    tmp_msg_0.lon_gain = 0.397002503212;
    tmp_msg_0.lat_gain = 0.60143320509;
    tmp_msg_0.bond_thick = 0.693267979798;
    tmp_msg_0.lead_gain = 0.516437118724;
    tmp_msg_0.deconfl_gain = 0.618805762213;
    tmp_msg_0.accel_switch_gain = 0.591828278635;
    tmp_msg_0.safe_dist = 0.118387028438;
    tmp_msg_0.deconflict_offset = 0.313993466872;
    tmp_msg_0.accel_safe_margin = 0.920504742292;
    tmp_msg_0.accel_lim_x = 0.0422691278171;
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
    msg.setTimeStamp(0.963043079622);
    msg.setSource(63231U);
    msg.setSourceEntity(124U);
    msg.setDestination(62023U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.96911343068;
    msg.lon = 0.2600316739;
    msg.eta = 652111524U;
    msg.duration = 33592U;

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
    msg.setTimeStamp(0.23722923678);
    msg.setSource(59314U);
    msg.setSourceEntity(144U);
    msg.setDestination(34405U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.476058042701;
    msg.lon = 0.571185074913;
    msg.eta = 2963761446U;
    msg.duration = 56738U;

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
    msg.setTimeStamp(0.445731842983);
    msg.setSource(14441U);
    msg.setSourceEntity(195U);
    msg.setDestination(42932U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.129433684089;
    msg.lon = 0.759042948854;
    msg.eta = 2623127708U;
    msg.duration = 63170U;

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
    msg.setTimeStamp(0.252465977397);
    msg.setSource(10148U);
    msg.setSourceEntity(77U);
    msg.setDestination(59970U);
    msg.setDestinationEntity(39U);
    msg.plan_id = 58335U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.585795370242;
    tmp_msg_0.lon = 0.337993151968;
    tmp_msg_0.eta = 1907788722U;
    tmp_msg_0.duration = 12182U;
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
    msg.setTimeStamp(0.656525838664);
    msg.setSource(65486U);
    msg.setSourceEntity(11U);
    msg.setDestination(30105U);
    msg.setDestinationEntity(80U);
    msg.plan_id = 64395U;

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
    msg.setTimeStamp(0.0748760709927);
    msg.setSource(26425U);
    msg.setSourceEntity(217U);
    msg.setDestination(24912U);
    msg.setDestinationEntity(205U);
    msg.plan_id = 42655U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.0356802155022;
    tmp_msg_0.lon = 0.369904568198;
    tmp_msg_0.eta = 205881914U;
    tmp_msg_0.duration = 9183U;
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
    msg.setTimeStamp(0.609113479168);
    msg.setSource(23917U);
    msg.setSourceEntity(84U);
    msg.setDestination(8068U);
    msg.setDestinationEntity(223U);
    msg.type = 118U;
    msg.command = 105U;
    msg.settings.assign("RRKMVJACSQILCYTSUHPGBAGDERIJVUZOXYROOVTFDSVEBXMXSTFXPWZBQCDRGUGPBFAXXQWYJVKGYHROSMNNBKOEZAORILZLLBWLSRNKUHZHVTAOSD");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 25679U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DQDGVNEUGGMPGABQTBWPYRBZIQFXFXRUFBLJYTTPYDEUCV");

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
    msg.setTimeStamp(0.875999570323);
    msg.setSource(2536U);
    msg.setSourceEntity(19U);
    msg.setDestination(59729U);
    msg.setDestinationEntity(177U);
    msg.type = 174U;
    msg.command = 23U;
    msg.settings.assign("INNJGBIUOUFUFLRQNKWYISHMZLEZDSPPIFSPEZDKYEJUVQJYCHXXKWVYOCGGTFCUSUFZKRLDOPVPTWXIYBERLXTQWSXITMRXBMKSKQIMADYTTJYEAPPJOVDVCA");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 4038U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GOVTCZJUQUHYBNUMDKBTQVUVIUOESOZUMKXZKVPFJFNAKBLTGBBSKCHNZTFADXSWFADKVSATLFNMNRIUNAXARRGDPMMNVFN");

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
    msg.setTimeStamp(0.622885475538);
    msg.setSource(30397U);
    msg.setSourceEntity(196U);
    msg.setDestination(4279U);
    msg.setDestinationEntity(103U);
    msg.type = 4U;
    msg.command = 185U;
    msg.settings.assign("DGSDZECDATPSQDMVPETZOGFAGRKEULCCZMVQZFJXTFTXMLQCNCEOZSHXAUOJGTLFYIRSAJFBJWVRKRBJKEFOTEBLHEZJQJHUOQQHSALWOUNCR");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 55281U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FQZYEYIHBHDTSMKYTWLLNRYTVXFKGSAOLQWCVQXXEPDXBZAGZMFVPBNECGLFJUBNNKZJMSLCJQUQCLRTSEYHMVOHPJHUZLCJFCUUQGAMLWABWMDTKICZRSBRNUJNVEJNTGKDPAEMIM");

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
    msg.setTimeStamp(0.833472997676);
    msg.setSource(12988U);
    msg.setSourceEntity(137U);
    msg.setDestination(52200U);
    msg.setDestinationEntity(7U);
    msg.state = 63U;
    msg.plan_id = 44367U;
    msg.wpt_id = 193U;
    msg.settings_chk = 1747U;

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
    msg.setTimeStamp(0.422376069217);
    msg.setSource(57818U);
    msg.setSourceEntity(176U);
    msg.setDestination(16914U);
    msg.setDestinationEntity(221U);
    msg.state = 124U;
    msg.plan_id = 38381U;
    msg.wpt_id = 49U;
    msg.settings_chk = 27131U;

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
    msg.setTimeStamp(0.00947971772489);
    msg.setSource(28430U);
    msg.setSourceEntity(96U);
    msg.setDestination(46264U);
    msg.setDestinationEntity(123U);
    msg.state = 53U;
    msg.plan_id = 22060U;
    msg.wpt_id = 233U;
    msg.settings_chk = 713U;

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
    msg.setTimeStamp(0.731930055294);
    msg.setSource(1611U);
    msg.setSourceEntity(97U);
    msg.setDestination(12430U);
    msg.setDestinationEntity(143U);
    msg.uid = 155U;
    msg.frag_number = 17U;
    msg.num_frags = 10U;
    const char tmp_msg_0[] = {-70, 82, -112, -117, 78, 50, -87, -128, -125, -109, -42, 65, -70, -123, -68, -128, 93, 70, 25, -67, 37, -63, 41, -22, -58, 115, 23, 28, -31, 87, 118, 51, -51, -40, 49, -87, 40, -108, 5, 58, 85, 47, -50, -8, 41, 120, -68, 16, -98, -25, 124, 60, -23, -91, 118, 86, -67, -2, -29, -75, -11, 82, 61};
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
    msg.setTimeStamp(0.918987942635);
    msg.setSource(11732U);
    msg.setSourceEntity(48U);
    msg.setDestination(9701U);
    msg.setDestinationEntity(207U);
    msg.uid = 202U;
    msg.frag_number = 102U;
    msg.num_frags = 253U;
    const char tmp_msg_0[] = {-76, -104, 2, -34, 53, 88, -35, -118, -16, 1, 89, 109, -98, 40, -1, 68, -83, -80, 64, 3, -102, 50, 72, 54, -100, 116, -50, -1, -30, 38, 45, -92, -36, -91, 96, 60, 8, 30, -56, 75, 94, 120, 20};
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
    msg.setTimeStamp(0.303812755906);
    msg.setSource(3253U);
    msg.setSourceEntity(234U);
    msg.setDestination(49460U);
    msg.setDestinationEntity(68U);
    msg.uid = 155U;
    msg.frag_number = 147U;
    msg.num_frags = 246U;
    const char tmp_msg_0[] = {16, 72, -110, -10, 116, 40, -74, -94, 32, 42, -92, 122, 63, 9, 35, 41, -25, 21, 97, -76, 66, 20, -61, 19, 75, -37, 40, 24, 90, 32, -89, -25, 119, -120, 76, -121, -109, -85, -101, 26, 83, -101, -78, 57, 78, -109, -24, -72, -65, 43, 107, 126, -119, -38, -50, -66, 53, -24, 61, 106, -97, 125, -36, -110, -55, -100, 61, -28, -16, -104, 12, -113, 58, 93, -44, -43, 29, 38, -49, -40, -97, 126, 122, 69, 78, 85, -95, 80, -45, 57, -67, 14, 74, 30, -122, -128, 96, -120, 102, 86, -89, -91, 94, -8, -113, -80, -127, -9, -118, -37, 82, 22, -46, 89, 39, -20, 72, 17, -68, -13, 103, -41, 75, -81, 57, 23, -38, 30, -110, 125, -60, -40, 2, 97, 43, 5, 96, -75, 107, 53, 53, -72, -105, 64, -77, -76, 95, -60, 100, 103, 116, 23, -81, -120, -123, -79, -24, 44, -94, 92, -73, 12, -78, -18, -78, -46, -3, 93, -62, -66, -125, 9, -76, 29, -62, -124, -52, -107, -19, 56, -46, 22, -78, -17, 33, -95, -84, 106, 66, -86, 121, 0, 78, -37, 94, 84, 124, -113, -119, -70, 67, -15, 21, -39, 9, 58, -124, -112, 0, -46, 13, -118, -23, -91, -65, 11, -79, 93, 117, 1, 109, -114, -87, 40, -16, 71, 106, -44, -107, -42, -93, -93, 24, 20, -67, -53, -23, 55, 85, -71, -119, -10, 25, -27, -124, -40, 27, -26, 69, -106, 93};
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
    msg.setTimeStamp(0.803044129365);
    msg.setSource(22028U);
    msg.setSourceEntity(169U);
    msg.setDestination(64492U);
    msg.setDestinationEntity(158U);
    msg.content_type.assign("HTEKDANKLFVOIFGVWSZFOEWOCMBBYXGVXSGNRBARDVKHQCVJXATYYBGCIAQEHIMLOULPBEQSYHDTPTUBWIMSJLWLPNEAKKTLFZYVACZQWFSQOVASJFPKUKSHDECXRIUDTLDVUUZGOJPYGDNCRGRYXHFRPVMBUSEQJRGDRUMHEQEKORHGNXZXCMNXGHQPYNRLNNTZESJXOHMIFIJALUPWWWDFIZTCPSCIBZFMUIXWQOQDZKMYJNVOLTABA");
    const char tmp_msg_0[] = {-85, 97, -62, 22, 79, -111, -83, 100, -43, 33, -120, 108, 1, -45, -49, 1, -35, -35, 62, 60, 104, 123, 125, -117, -102, -128, 58, 69, 125, 0, -89, 122, 111, -62, -7, 53, -43, -124, 63, 29, -30, -111, 92, -50, 44, -45, -23, 78, -54, -128, 74, -94, 74, -27, -113, 76, -87, 114, 99};
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
    msg.setTimeStamp(0.11711481152);
    msg.setSource(22710U);
    msg.setSourceEntity(238U);
    msg.setDestination(30843U);
    msg.setDestinationEntity(201U);
    msg.content_type.assign("CZHRUGTNHMFHSNKXGJHKWYEZURPHBAICMARJPJTVLPVEAGFIVVNALMUUUCVSVSSIMCUVHWRLZVOIEWFOTRPJGBDSEOLNQXDFTMFVMYPPGFMDKKWZDYZUMQOETABEOHGPQTINYBTTHSRMNSPXEOBSHQWNWBQAFLJATELRUXKQZABWYJXIDKLBZBFNINMN");
    const char tmp_msg_0[] = {-7, -122, 75, 101, 53, -49, 101, 70, -5, 58, 80, 34, 121, 49, -65, 47, -1, 45, 114, -60, 36, -50, 104, 49, -31, -124, 4, -89, -72, -36, -53, 41, -40, -125, -44, -124, 15, -127, -16, -10, 77, 22, 77, 89, -60, 112, -3, -124, -18, -73, -37, -54, 119, -127, -39, 69, -79, 114, -33, -20, 18, 10, -39, -111, 92, -34, -21, -122, -100, 6, -99, -83, 116, 33, -73, -15, -83, 98, 9, -79, -83, -93, 110, 68, -8, -111, 58, -16, -44, 100, 6, -17, 80, 115, -91, -70, -43, -40, 79, -100, -116, -77, -15, 95, -31, 43, 11, 20, 0, 43, 25, -107, -17, -43, -1, -56, -108, -71, -58, 57, 55, 53, -19, -48, -115, 60, -7, -107, -95, 9};
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
    msg.setTimeStamp(0.652445680029);
    msg.setSource(46410U);
    msg.setSourceEntity(187U);
    msg.setDestination(21036U);
    msg.setDestinationEntity(212U);
    msg.content_type.assign("UTVFEZRQSAAIMBFSJZMXFTPCAXTZVVEHMMULUUUHEFGITKHWXGNHYPRXTNJFKMKESFJRTPCQMASCCWDGLYOVULYQDEYAXONBSOOLTOWJLDDGERZENYIVHBYGHVTROIZVKNVWNZWLWEBIZHCCZQJSKAIGQRXK");
    const char tmp_msg_0[] = {-26, -94, -126, 40, 57, 126, 116, -44, 89, -64, -121, -19, -81, -102, 86, -91, -113, -21, -14, -124, 66, 60, 29, 114, -98, 71, -110, -9, -67, 70, 57, -32, 75, 79, -69, 104, -122, -106, -48};
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
    msg.setTimeStamp(0.572665668137);
    msg.setSource(51042U);
    msg.setSourceEntity(31U);
    msg.setDestination(63099U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.698483930809);
    msg.setSource(25791U);
    msg.setSourceEntity(107U);
    msg.setDestination(62013U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.128006930141);
    msg.setSource(28971U);
    msg.setSourceEntity(51U);
    msg.setDestination(35162U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.596606872597);
    msg.setSource(14255U);
    msg.setSourceEntity(72U);
    msg.setDestination(22412U);
    msg.setDestinationEntity(14U);
    msg.target = 15469U;
    msg.bearing = 0.528613994073;
    msg.elevation = 0.57082949798;

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
    msg.setTimeStamp(0.161533379386);
    msg.setSource(29326U);
    msg.setSourceEntity(3U);
    msg.setDestination(40738U);
    msg.setDestinationEntity(239U);
    msg.target = 7409U;
    msg.bearing = 0.878755751326;
    msg.elevation = 0.524747328417;

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
    msg.setTimeStamp(0.392443447769);
    msg.setSource(54897U);
    msg.setSourceEntity(89U);
    msg.setDestination(34604U);
    msg.setDestinationEntity(22U);
    msg.target = 49778U;
    msg.bearing = 0.780247846235;
    msg.elevation = 0.309591312807;

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
    msg.setTimeStamp(0.399422438138);
    msg.setSource(64688U);
    msg.setSourceEntity(128U);
    msg.setDestination(27881U);
    msg.setDestinationEntity(230U);
    msg.target = 57370U;
    msg.x = 0.635756390135;
    msg.y = 0.786788474155;
    msg.z = 0.939167028196;

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
    msg.setTimeStamp(0.82789907673);
    msg.setSource(16280U);
    msg.setSourceEntity(122U);
    msg.setDestination(44605U);
    msg.setDestinationEntity(120U);
    msg.target = 20885U;
    msg.x = 0.788556343544;
    msg.y = 0.0403532499811;
    msg.z = 0.545296589284;

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
    msg.setTimeStamp(0.679933997213);
    msg.setSource(7487U);
    msg.setSourceEntity(124U);
    msg.setDestination(15612U);
    msg.setDestinationEntity(24U);
    msg.target = 61923U;
    msg.x = 0.0631975027213;
    msg.y = 0.527578145899;
    msg.z = 0.448849342772;

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
    msg.setTimeStamp(0.454184238384);
    msg.setSource(8552U);
    msg.setSourceEntity(233U);
    msg.setDestination(56260U);
    msg.setDestinationEntity(89U);
    msg.target = 23174U;
    msg.lat = 0.83561933436;
    msg.lon = 0.989003894598;
    msg.z_units = 182U;
    msg.z = 0.934843219951;

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
    msg.setTimeStamp(0.171208583535);
    msg.setSource(12367U);
    msg.setSourceEntity(252U);
    msg.setDestination(56999U);
    msg.setDestinationEntity(193U);
    msg.target = 54227U;
    msg.lat = 0.978295276602;
    msg.lon = 0.191127381481;
    msg.z_units = 17U;
    msg.z = 0.778251227379;

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
    msg.setTimeStamp(0.660439414403);
    msg.setSource(27513U);
    msg.setSourceEntity(64U);
    msg.setDestination(17777U);
    msg.setDestinationEntity(196U);
    msg.target = 22336U;
    msg.lat = 0.146588428626;
    msg.lon = 0.914884765811;
    msg.z_units = 12U;
    msg.z = 0.635542105747;

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
    msg.setTimeStamp(0.130065490348);
    msg.setSource(21453U);
    msg.setSourceEntity(147U);
    msg.setDestination(22026U);
    msg.setDestinationEntity(105U);
    msg.locale.assign("MQTPJYCMPIDFBIIESMPXAGURDYOQAYWMPDBUFDCSLVZWTNWZYMRCOCSCKTSMAXOPPYOJBGHFRHJCGUAMWAMNKNEXNKISWMKQGVJEKFRLGBJJLRQDSREIQFKQVNQUUECWBVVXLDYVZBKPAHOHVPIXVZROHTDZIALLCUATTHSGHLFCARHBQZTTLBWMYEJUUQLEISGXTOPCLOSDQUDHNVYJXXOERDWNYZJWONFIRKAUFNEVPIH");
    const char tmp_msg_0[] = {115, -47, 88, 68, -97, -64, 37, -24, -92, -109, -114, 1, -5, 93, -24, 120, 77, 119, 6, 10, 51, 54, 9, 112, 4, -7, 64, -58, -53, 62, -56, 53, -41, -77, 86, 74, -2, -71, 116, 31, -125, 78, 63, 65, -41, -37, 72, -81, -37, -73, 90, -27, -97, -8, -116, 69, 86, 22, -5, -12, 101, 7, 104, 86, -75, 43, 112, -101, 107, -112, 4, 52, 34, 28, 59, -88, -27, 105, -28, -125, 13, 119, -63, -59, -20, 115, -85, -117, -86, 36, -41, -80, 88, 100, -25, -120, 18, 77, 89, 54, 13, 95, 34, 51, 20, -113, 106, 65, -41, 78, -88, -57, -125, 84, 111, -9, -31, -125, 119, -5, 91, -53, -101, -47, 98, -45, -54, 41, -50, -118, -4, 95, 98, -47, 7, 115, -74, -112, 95, -112, -51, -119, 28, -117, -60, 126, -99, 124, -81, -126, -42, 4, 60, -46, 65, 81, 33, 107, 115, -14, -20};
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
    msg.setTimeStamp(0.865400004239);
    msg.setSource(48741U);
    msg.setSourceEntity(194U);
    msg.setDestination(10236U);
    msg.setDestinationEntity(139U);
    msg.locale.assign("YNWIDMYEBCRYGHTAJCNIEQPGBBHCZUWQUUIPSCRTAPGDANQVGFCOECGRSUNPCOHMVONTQYRBKESUETBFLPCNWVZDZTHAFZBDHPIJEVNZALJGXECIZVSQALKJXUBQKZDJZMWXPFAWGOMKGMJUJPPISPKSMX");
    const char tmp_msg_0[] = {-30, -47, 72, -79, 57, -57, 106, 6, -43, 1, 41, 95, -80, -19, -50, -10, 15, 118, 58, 110, 119, -8, -42, -45, -124, 46, 91, -55, 36};
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
    msg.setTimeStamp(0.175188478816);
    msg.setSource(21520U);
    msg.setSourceEntity(200U);
    msg.setDestination(34331U);
    msg.setDestinationEntity(203U);
    msg.locale.assign("RLUYFMRSRILKXOZZHXHNVIAEGXHEIDDLAQS");
    const char tmp_msg_0[] = {-38, 15, 91, 83, 32, -71, 52, -84, 86, -100, -30, -66, -97, 33, 8, -74, 83, -84, -49, -49, -128, 91, -108, -9, 88, 79, 73, 113, -70, -122, 62, 31, -77, -81, -50, 84, -70, -14, -73, -92, 12, 47, -95, -77, -16, 39, 2, -115, 8, 110, -27, -34, 15, -84, 86, 72, 33, 120, 125, 94, 23, -76, 69, -23, 46, -16, 64, 98, 2, 51, -23, -113, 18, 101, -79, -10, -53, 42, -89, 27, 97, -11, -88, -61, 13, 101, -101, -99, 62, -72, -37, -102, -87, 121, 91, -101, -123, -39, -10, -26, 58, -50, 99, -13, 80, -9, 37, 34, 23, 97, -110, -98, 41, -121, -120, -90, -128, 23, 95, -54, 64, 70, 126, 10, 42, -1, 12, -102, -69, 62, -27, 66, -11, 9, 75, -74, -95, -29, 66, -88, -21, 11, 110, -3, -50, 29, -19, 104, -99, 8, -63, -121, -41, -56, -101, -109, 111, 50, 91, -77, 59, -10, -65, -82, 91, 37, -24, -41, 61, -21, -66, -14, -18, -107, 45, 116, -29, -50, 43, 90, 93, 2, -22, 96, -60, 82, 63, 115, 74, -95, -119, 87, -52, -117, 71, 125, 101, 57, -94, 3, -27, 75, -8, 107, -17, -13, 98, 100, 13, -86, 95, 115, -8, -53, 126, 104, -115, -81, -119, -36, -58, -55, -99, 126, -120, 63, 48, 17, -97, -19, 40, -64};
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
    msg.setTimeStamp(0.197011764756);
    msg.setSource(13299U);
    msg.setSourceEntity(36U);
    msg.setDestination(5127U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.202131970874);
    msg.setSource(22997U);
    msg.setSourceEntity(59U);
    msg.setDestination(49069U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.0617503731656);
    msg.setSource(17622U);
    msg.setSourceEntity(138U);
    msg.setDestination(8461U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.0831079337282);
    msg.setSource(59153U);
    msg.setSourceEntity(164U);
    msg.setDestination(58276U);
    msg.setDestinationEntity(147U);
    msg.camid = 57U;
    msg.x = 11855U;
    msg.y = 59730U;

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
    msg.setTimeStamp(0.551196658905);
    msg.setSource(47677U);
    msg.setSourceEntity(157U);
    msg.setDestination(47244U);
    msg.setDestinationEntity(198U);
    msg.camid = 160U;
    msg.x = 22951U;
    msg.y = 91U;

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
    msg.setTimeStamp(0.723301698911);
    msg.setSource(41237U);
    msg.setSourceEntity(234U);
    msg.setDestination(46324U);
    msg.setDestinationEntity(184U);
    msg.camid = 75U;
    msg.x = 40898U;
    msg.y = 49865U;

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
    msg.setTimeStamp(0.9841866919);
    msg.setSource(43248U);
    msg.setSourceEntity(201U);
    msg.setDestination(58783U);
    msg.setDestinationEntity(115U);
    msg.camid = 82U;
    msg.x = 46910U;
    msg.y = 34350U;

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
    msg.setTimeStamp(0.160764690037);
    msg.setSource(25013U);
    msg.setSourceEntity(173U);
    msg.setDestination(62128U);
    msg.setDestinationEntity(95U);
    msg.camid = 48U;
    msg.x = 17440U;
    msg.y = 62760U;

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
    msg.setTimeStamp(0.802161100697);
    msg.setSource(23857U);
    msg.setSourceEntity(106U);
    msg.setDestination(33373U);
    msg.setDestinationEntity(152U);
    msg.camid = 148U;
    msg.x = 44362U;
    msg.y = 23844U;

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
    msg.setTimeStamp(0.668654687671);
    msg.setSource(65062U);
    msg.setSourceEntity(44U);
    msg.setDestination(17535U);
    msg.setDestinationEntity(144U);
    msg.tracking = 147U;
    msg.lat = 0.921559284461;
    msg.lon = 0.00212453921359;
    msg.x = 0.227181036872;
    msg.y = 0.421432401078;
    msg.z = 0.715772899187;

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
    msg.setTimeStamp(0.190126719646);
    msg.setSource(32495U);
    msg.setSourceEntity(31U);
    msg.setDestination(61985U);
    msg.setDestinationEntity(142U);
    msg.tracking = 140U;
    msg.lat = 0.64470477204;
    msg.lon = 0.499942080146;
    msg.x = 0.885290889876;
    msg.y = 0.987634322701;
    msg.z = 0.826002607223;

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
    msg.setTimeStamp(0.900945375019);
    msg.setSource(10556U);
    msg.setSourceEntity(85U);
    msg.setDestination(54052U);
    msg.setDestinationEntity(226U);
    msg.tracking = 1U;
    msg.lat = 0.010824117046;
    msg.lon = 0.502847726478;
    msg.x = 0.940118251328;
    msg.y = 0.122015677234;
    msg.z = 0.962185692951;

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
    msg.setTimeStamp(0.799458872259);
    msg.setSource(3056U);
    msg.setSourceEntity(14U);
    msg.setDestination(45374U);
    msg.setDestinationEntity(127U);
    msg.target.assign("YEUJJYMVGZINYBMPSKMJRUUDPPCDTDCILTJUNLWXLTLEXPUEFISZWCILXHKPRRSYZWKMTVNWOXJDYLQKAEGDHQJUDDRSAHNNXKPYEEPOFPTBRKSGPIACJVTFQBOIXKCVWMSNFLDFOGSYOHNLAZAIAFBFMZWSHMFYQWVHTBUQXUGRWEGHZRAJMGGUVRKWQXPQEZAASQFBOXRZIJOXGFTSZUZJNRGLCBCEH");
    msg.lbearing = 0.695954840028;
    msg.lelevation = 0.267122665596;
    msg.bearing = 0.58915540335;
    msg.elevation = 0.247638048197;
    msg.phi = 0.696891765871;
    msg.theta = 0.471008954554;
    msg.psi = 0.636544372095;
    msg.accuracy = 0.313568621962;

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
    msg.setTimeStamp(0.582742152873);
    msg.setSource(44693U);
    msg.setSourceEntity(105U);
    msg.setDestination(11189U);
    msg.setDestinationEntity(239U);
    msg.target.assign("EEEQSBKEKXEEVDZSYFTIXPXUZYEFQBKPVGDNHGVDNJIMLRGSMWTNVQCWJPGGOGCRPCYSLUPWHTCVVKLKWLQFPVVEIHOAIGRSRAOCNDKZXKWOJILTBLYTCDUWYIUGFKFOJBR");
    msg.lbearing = 0.960550763682;
    msg.lelevation = 0.520783132092;
    msg.bearing = 0.393468513328;
    msg.elevation = 0.606410651798;
    msg.phi = 0.646562364353;
    msg.theta = 0.904861448063;
    msg.psi = 0.884133951247;
    msg.accuracy = 0.909900170566;

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
    msg.setTimeStamp(0.463625965443);
    msg.setSource(35710U);
    msg.setSourceEntity(32U);
    msg.setDestination(2005U);
    msg.setDestinationEntity(32U);
    msg.target.assign("YBAASNNZQIISALMFHTEZWEMHISRHJSKNMLTJPLQJXZVNXSURJUDOPUXGEPPXKKECPWAHNYHOQNIUTYDEIOZGVWY");
    msg.lbearing = 0.648441105814;
    msg.lelevation = 0.963416450398;
    msg.bearing = 0.0858387600822;
    msg.elevation = 0.481791182016;
    msg.phi = 0.350769626508;
    msg.theta = 0.642935506469;
    msg.psi = 0.201172680088;
    msg.accuracy = 0.500390313291;

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
    msg.setTimeStamp(0.285420015327);
    msg.setSource(60217U);
    msg.setSourceEntity(162U);
    msg.setDestination(3087U);
    msg.setDestinationEntity(136U);
    msg.target.assign("GEFHTWRMCPDYTRNXADGHOKJKMJUGDHYKWCYUKRUFLMBDFOLWTWCBQURCWQYILVYDGHGLEVAGBZBCRVODIJVVTOEJXUASZTWRIXJBFSPOMPBNBNCNHZTPRBCZBJYIUUCZVZAITSMRDFPLNVIKATXLZAWEEKZWJEQIPQJYRJPQNQALOHHEQPFXMSHXIXUHMQKADNPWOB");
    msg.x = 0.60946501663;
    msg.y = 0.817511949855;
    msg.z = 0.61217070707;
    msg.n = 0.152282746198;
    msg.e = 0.512263396163;
    msg.d = 0.560318041076;
    msg.phi = 0.423072952942;
    msg.theta = 0.703033928066;
    msg.psi = 0.467173727772;
    msg.accuracy = 0.819010438621;

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
    msg.setTimeStamp(0.985676372512);
    msg.setSource(16685U);
    msg.setSourceEntity(158U);
    msg.setDestination(54177U);
    msg.setDestinationEntity(101U);
    msg.target.assign("ITXPQPCJSCLTXMWQTMLUVVEHIXFAENFJXCYCDJITRQRTSIUKEAMPAKSLZYIATZCSKXVWUUFOFZTEHVYRRYHFPBNGKDRMOTHSGBQJLVRFOUWJNGHBKECYGBMOSDYBCENPAQHLSVWXVNGQKNQHXGQWBEUNYZLSFOJJKWHKPSVDRVGLKNBBLOJAQBDLZXRQPACMZIXIYJHMPWFFGZDCLAOTYSEMABUXNUDRDCEPNOA");
    msg.x = 0.660700432537;
    msg.y = 0.983910418719;
    msg.z = 0.355439922602;
    msg.n = 0.867851454045;
    msg.e = 0.170498922344;
    msg.d = 0.368076846845;
    msg.phi = 0.878423391671;
    msg.theta = 0.655396543628;
    msg.psi = 0.854293289191;
    msg.accuracy = 0.92408068803;

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
    msg.setTimeStamp(0.172182382282);
    msg.setSource(57682U);
    msg.setSourceEntity(48U);
    msg.setDestination(14855U);
    msg.setDestinationEntity(168U);
    msg.target.assign("EBGBJYFRZYFXLEVYLOIPSMLJIPTOTNKDQIHTCMGLGWJYBPTXCSBZKB");
    msg.x = 0.260325737939;
    msg.y = 0.7101610746;
    msg.z = 0.382202832155;
    msg.n = 0.560829782217;
    msg.e = 0.853433278758;
    msg.d = 0.112899200541;
    msg.phi = 0.822159977659;
    msg.theta = 0.108154001548;
    msg.psi = 0.0562062352191;
    msg.accuracy = 0.942626788197;

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
    msg.setTimeStamp(0.438953126373);
    msg.setSource(62999U);
    msg.setSourceEntity(25U);
    msg.setDestination(36213U);
    msg.setDestinationEntity(163U);
    msg.target.assign("OYWTRFBEWOWQSDBJEFCEUASVLDGVUDMRYSINGXWZONANJDTBRTWOCDOHQPNDOLWASPUHPHTGBQQEBHIGGDKEPIVTVKQSPJIGXAYQRPASQZLOWGRUQCMMLIXTXMZVFVOEKPFYRLLNYKFNTIVSTZJVUKHZC");
    msg.lat = 0.120859503603;
    msg.lon = 0.220611449741;
    msg.z_units = 79U;
    msg.z = 0.691932759621;
    msg.accuracy = 0.678307244482;

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
    msg.setTimeStamp(0.781049268249);
    msg.setSource(7756U);
    msg.setSourceEntity(154U);
    msg.setDestination(59369U);
    msg.setDestinationEntity(244U);
    msg.target.assign("RJYSCIOYVUXXCAGNENJJBNTMUBSMQXFAKWODXEVNKVEOYLWQUDKWLPJFXJIGMWNBVSQRXSQCSIOZNUTOHQTSAUPXPEJUQJPJGETUONBHPLQWYTWITOHRZLYZKXPWDMIMXDGZFEMKKLCBPHUBFFDRL");
    msg.lat = 0.667891265902;
    msg.lon = 0.119043566844;
    msg.z_units = 183U;
    msg.z = 0.770369628443;
    msg.accuracy = 0.472109388046;

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
    msg.setTimeStamp(0.479684223875);
    msg.setSource(17162U);
    msg.setSourceEntity(103U);
    msg.setDestination(37368U);
    msg.setDestinationEntity(7U);
    msg.target.assign("IVGCUANNOJEQKMTGRTVFSRTRYOQCOTQYADLIAYCFZSSMQAKUJLRPEWGABUKECJZUAHCPYBKXHMFYEIXRFWWPXANLXTINGPLOZDSXBUJWUSKYMMSZVUTFWACYQGROALEBGFGIK");
    msg.lat = 0.110029362397;
    msg.lon = 0.862004517251;
    msg.z_units = 49U;
    msg.z = 0.888881903541;
    msg.accuracy = 0.255457469017;

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
    msg.setTimeStamp(0.891165440948);
    msg.setSource(33256U);
    msg.setSourceEntity(157U);
    msg.setDestination(46503U);
    msg.setDestinationEntity(44U);
    msg.name.assign("BPSWNNRVUCEAJMAIVB");
    msg.lat = 0.434186362045;
    msg.lon = 0.14689541559;
    msg.z = 0.0159075932992;
    msg.z_units = 103U;

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
    msg.setTimeStamp(0.288110702958);
    msg.setSource(34295U);
    msg.setSourceEntity(74U);
    msg.setDestination(32195U);
    msg.setDestinationEntity(157U);
    msg.name.assign("VRVRDUEOEPCLZ");
    msg.lat = 0.506791539489;
    msg.lon = 0.147925693791;
    msg.z = 0.9779435389;
    msg.z_units = 187U;

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
    msg.setTimeStamp(0.372776126709);
    msg.setSource(41274U);
    msg.setSourceEntity(254U);
    msg.setDestination(30437U);
    msg.setDestinationEntity(244U);
    msg.name.assign("EVBTWOXXRJNVDJQYTAJWPBZZZHFSFNGQZTRB");
    msg.lat = 0.2405908939;
    msg.lon = 0.162693999366;
    msg.z = 0.478869458428;
    msg.z_units = 96U;

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
    msg.setTimeStamp(0.393119594523);
    msg.setSource(4656U);
    msg.setSourceEntity(104U);
    msg.setDestination(36492U);
    msg.setDestinationEntity(201U);
    msg.op = 47U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("ALSGDXHKLVEVQNDCAVNBX");
    tmp_msg_0.lat = 0.610402663267;
    tmp_msg_0.lon = 0.0933362706806;
    tmp_msg_0.z = 0.624875864608;
    tmp_msg_0.z_units = 195U;
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
    msg.setTimeStamp(0.99504706378);
    msg.setSource(17111U);
    msg.setSourceEntity(180U);
    msg.setDestination(57368U);
    msg.setDestinationEntity(212U);
    msg.op = 71U;

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
    msg.setTimeStamp(0.155764007216);
    msg.setSource(26284U);
    msg.setSourceEntity(177U);
    msg.setDestination(5285U);
    msg.setDestinationEntity(146U);
    msg.op = 227U;

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
    msg.setTimeStamp(0.0654080233151);
    msg.setSource(13991U);
    msg.setSourceEntity(48U);
    msg.setDestination(7884U);
    msg.setDestinationEntity(135U);
    msg.value = 0.207934294452;
    msg.type = 190U;

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
    msg.setTimeStamp(0.429957939091);
    msg.setSource(46491U);
    msg.setSourceEntity(185U);
    msg.setDestination(61964U);
    msg.setDestinationEntity(49U);
    msg.value = 0.590859758111;
    msg.type = 84U;

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
    msg.setTimeStamp(0.631311331976);
    msg.setSource(3555U);
    msg.setSourceEntity(147U);
    msg.setDestination(18928U);
    msg.setDestinationEntity(14U);
    msg.value = 0.816093707641;
    msg.type = 224U;

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
    msg.setTimeStamp(0.0569818487612);
    msg.setSource(45819U);
    msg.setSourceEntity(55U);
    msg.setDestination(25379U);
    msg.setDestinationEntity(10U);
    msg.value = 0.714411744386;

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
    msg.setTimeStamp(0.960300880354);
    msg.setSource(41522U);
    msg.setSourceEntity(78U);
    msg.setDestination(65373U);
    msg.setDestinationEntity(108U);
    msg.value = 0.0607657775639;

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
    msg.setTimeStamp(0.885264768886);
    msg.setSource(35627U);
    msg.setSourceEntity(139U);
    msg.setDestination(48627U);
    msg.setDestinationEntity(86U);
    msg.value = 0.395804506971;

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
    msg.setTimeStamp(0.68287139135);
    msg.setSource(8599U);
    msg.setSourceEntity(65U);
    msg.setDestination(12118U);
    msg.setDestinationEntity(115U);
    msg.timestamp_last_service = 0.365222352977;
    msg.time_next_service = 0.562837214318;
    msg.time_motor_next_service = 0.176110231396;
    msg.time_idle_ground = 0.227326521341;
    msg.time_idle_air = 0.798229576862;
    msg.time_idle_water = 0.796127005941;
    msg.time_idle_underwater = 0.437097705632;
    msg.time_idle_unknown = 0.316140790346;
    msg.time_motor_ground = 0.908186787801;
    msg.time_motor_air = 0.382372373222;
    msg.time_motor_water = 0.660997620539;
    msg.time_motor_underwater = 0.103233133094;
    msg.time_motor_unknown = 0.481875960581;
    msg.rpm_min = 17284;
    msg.rpm_max = 8855;
    msg.depth_max = 0.176586804755;

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
    msg.setTimeStamp(0.230374322267);
    msg.setSource(24267U);
    msg.setSourceEntity(17U);
    msg.setDestination(16572U);
    msg.setDestinationEntity(220U);
    msg.timestamp_last_service = 0.0552362282407;
    msg.time_next_service = 0.740641947671;
    msg.time_motor_next_service = 0.495565135546;
    msg.time_idle_ground = 0.130619813531;
    msg.time_idle_air = 0.35426109556;
    msg.time_idle_water = 0.336686431173;
    msg.time_idle_underwater = 0.431521410223;
    msg.time_idle_unknown = 0.179910311687;
    msg.time_motor_ground = 0.761195022413;
    msg.time_motor_air = 0.643141954296;
    msg.time_motor_water = 0.0321171462709;
    msg.time_motor_underwater = 0.701461960529;
    msg.time_motor_unknown = 0.251188008644;
    msg.rpm_min = 2009;
    msg.rpm_max = 27905;
    msg.depth_max = 0.158919699007;

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
    msg.setTimeStamp(0.17409320107);
    msg.setSource(1007U);
    msg.setSourceEntity(113U);
    msg.setDestination(55080U);
    msg.setDestinationEntity(212U);
    msg.timestamp_last_service = 0.854833647975;
    msg.time_next_service = 0.134061349262;
    msg.time_motor_next_service = 0.420160018653;
    msg.time_idle_ground = 0.177573053329;
    msg.time_idle_air = 0.773276650467;
    msg.time_idle_water = 0.392056518632;
    msg.time_idle_underwater = 0.02562699111;
    msg.time_idle_unknown = 0.98912065099;
    msg.time_motor_ground = 0.838706784769;
    msg.time_motor_air = 0.194323273091;
    msg.time_motor_water = 0.610221163962;
    msg.time_motor_underwater = 0.711228116318;
    msg.time_motor_unknown = 0.213050040741;
    msg.rpm_min = 1323;
    msg.rpm_max = -8044;
    msg.depth_max = 0.227537063398;

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
    msg.setTimeStamp(0.936818567248);
    msg.setSource(51728U);
    msg.setSourceEntity(12U);
    msg.setDestination(24185U);
    msg.setDestinationEntity(108U);
    msg.severity = 232U;
    msg.text.assign("BCBBLCDAOFHWPSSXOTFFZKCWDQZUCSYPFHPQUGIYOHFKKAXYLJYVBREVFGCWTBPQXWJWMMDFUGQJXLSNMPENWREFMNHRWTRHSEUCPMLGSNEBIRNGDFVGNIXGIZNJJVUQIKZORAZTOCEVXYHLRGIATYSAXFDETRSBHLMADDTKIAMGTLXMK");

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
    msg.setTimeStamp(0.763905550814);
    msg.setSource(17246U);
    msg.setSourceEntity(154U);
    msg.setDestination(2265U);
    msg.setDestinationEntity(138U);
    msg.severity = 136U;
    msg.text.assign("ANEXNDPAFFYFHFRKULNVWXSPKEKVDOWEAIFMEOYXUTEJAXHGPFDRGSUXPCJBGBYVCNQCKKMUDUHKYCBLTAJWJNOWULTXANTTZJIQBKVYZFBPUDDRGRROERIO");

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
    msg.setTimeStamp(0.886541188469);
    msg.setSource(12596U);
    msg.setSourceEntity(93U);
    msg.setDestination(26453U);
    msg.setDestinationEntity(132U);
    msg.severity = 123U;
    msg.text.assign("HWIRJDKECTYUGUFMPSNYXUZRZGLFJGMZWQICXYRYJOEUAYAXUSPQFERUSYBNDUFRBJAWXHZICECAABIMVPIHPRKXKQVMYFLSQAKVJMTPOTCOHWLLGEEVGBSSWZKLFQPJNVGJADXDLTJHMASHLZCKIESBJUKQMMYVXWOPWPDHFOZELCTGWDTARFQSXHGNDMGFWIGTDAQQRLRVYLOHSTTVBOIHUBXKMTFXCKOKPQNRDIZDIJWPCYCV");

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
    msg.setTimeStamp(0.593474247115);
    msg.setSource(8863U);
    msg.setSourceEntity(134U);
    msg.setDestination(16016U);
    msg.setDestinationEntity(72U);
    msg.channel = 74;
    msg.value = -1438451966;
    msg.gain = 104U;

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
    msg.setTimeStamp(0.0576779594025);
    msg.setSource(63934U);
    msg.setSourceEntity(228U);
    msg.setDestination(4254U);
    msg.setDestinationEntity(64U);
    msg.channel = 100;
    msg.value = -174392133;
    msg.gain = 131U;

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
    msg.setTimeStamp(0.983975304207);
    msg.setSource(51097U);
    msg.setSourceEntity(5U);
    msg.setDestination(15052U);
    msg.setDestinationEntity(107U);
    msg.channel = -19;
    msg.value = 34238950;
    msg.gain = 250U;

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
    msg.setTimeStamp(0.215610152154);
    msg.setSource(152U);
    msg.setSourceEntity(124U);
    msg.setDestination(19046U);
    msg.setDestinationEntity(55U);
    msg.ch01 = 0.269504822963;
    msg.ch02 = 0.860236414074;
    msg.ch03 = 0.535908758016;
    msg.ch04 = 0.217473122293;
    msg.ch05 = 0.493831521197;
    msg.ch06 = 0.525232418591;
    msg.ch07 = 0.0304178211505;
    msg.ch08 = 0.108560727064;
    msg.ch09 = 0.840220864127;
    msg.ch10 = 0.524454436296;
    msg.ch11 = 0.0912642795036;
    msg.ch12 = 0.474789847051;
    msg.ch13 = 0.177565355181;
    msg.ch14 = 0.700379678219;
    msg.ch15 = 0.530643539617;
    msg.ch16 = 0.196245068017;

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
    msg.setTimeStamp(0.100884278894);
    msg.setSource(45767U);
    msg.setSourceEntity(131U);
    msg.setDestination(31091U);
    msg.setDestinationEntity(170U);
    msg.ch01 = 0.32147360148;
    msg.ch02 = 0.167117576921;
    msg.ch03 = 0.336328370228;
    msg.ch04 = 0.388978218531;
    msg.ch05 = 0.487915752075;
    msg.ch06 = 0.642574028162;
    msg.ch07 = 0.97803453163;
    msg.ch08 = 0.83097612456;
    msg.ch09 = 0.498488954191;
    msg.ch10 = 0.605297484317;
    msg.ch11 = 0.773760663724;
    msg.ch12 = 0.76395434326;
    msg.ch13 = 0.410923938693;
    msg.ch14 = 0.216957046028;
    msg.ch15 = 0.0345544471738;
    msg.ch16 = 0.588516406482;

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
    msg.setTimeStamp(0.621675590661);
    msg.setSource(58230U);
    msg.setSourceEntity(199U);
    msg.setDestination(46397U);
    msg.setDestinationEntity(167U);
    msg.ch01 = 0.0205232989127;
    msg.ch02 = 0.161925343394;
    msg.ch03 = 0.654954959163;
    msg.ch04 = 0.461346190321;
    msg.ch05 = 0.647127920786;
    msg.ch06 = 0.404989239953;
    msg.ch07 = 0.376213531004;
    msg.ch08 = 0.18727873221;
    msg.ch09 = 0.468101142924;
    msg.ch10 = 0.729938992325;
    msg.ch11 = 0.885056545809;
    msg.ch12 = 0.307889226785;
    msg.ch13 = 0.137421768992;
    msg.ch14 = 0.727626515509;
    msg.ch15 = 0.0839964432051;
    msg.ch16 = 0.701842789878;

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
    msg.setTimeStamp(0.504064981953);
    msg.setSource(48008U);
    msg.setSourceEntity(210U);
    msg.setDestination(34263U);
    msg.setDestinationEntity(119U);
    msg.time = 0.809727390792;
    msg.ang = 0.896996380265;

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
    msg.setTimeStamp(0.978942583118);
    msg.setSource(23694U);
    msg.setSourceEntity(2U);
    msg.setDestination(2352U);
    msg.setDestinationEntity(65U);
    msg.time = 0.869120989644;
    msg.ang = 0.330553008211;

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
    msg.setTimeStamp(0.129708265508);
    msg.setSource(29418U);
    msg.setSourceEntity(240U);
    msg.setDestination(53424U);
    msg.setDestinationEntity(36U);
    msg.time = 0.855221939128;
    msg.ang = 0.778724147323;

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
    msg.setTimeStamp(0.535999235529);
    msg.setSource(22143U);
    msg.setSourceEntity(35U);
    msg.setDestination(13369U);
    msg.setDestinationEntity(145U);
    msg.value = 0.298776613197;

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
    msg.setTimeStamp(0.0352437552414);
    msg.setSource(50496U);
    msg.setSourceEntity(223U);
    msg.setDestination(342U);
    msg.setDestinationEntity(45U);
    msg.value = 0.708383795774;

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
    msg.setTimeStamp(0.130179900312);
    msg.setSource(24102U);
    msg.setSourceEntity(146U);
    msg.setDestination(41701U);
    msg.setDestinationEntity(183U);
    msg.value = 0.672617319194;

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

  return test.getReturnValue();
}

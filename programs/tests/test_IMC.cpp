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
    msg.setTimeStamp(0.02382248451);
    msg.setSource(37941U);
    msg.setSourceEntity(63U);
    msg.setDestination(39969U);
    msg.setDestinationEntity(112U);
    msg.state = 151U;
    msg.flags = 68U;
    msg.description.assign("GKKLAXDIOFWWDDBZFMDPLFUELUANEBBWZCNRWEDPAZCLCUWPILTMTIQYOZKTIBHDDZ");

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
    msg.setTimeStamp(0.849276446959);
    msg.setSource(58574U);
    msg.setSourceEntity(102U);
    msg.setDestination(49816U);
    msg.setDestinationEntity(80U);
    msg.state = 47U;
    msg.flags = 5U;
    msg.description.assign("TBPZJDLIYWFSSAIMLGSFBROEDDXKBMPFEXVLKXOKWTQRBKNEMHJDWXHQDUZLOPMBOCGKLXGOYIFVTBSWFUYHIAQYH");

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
    msg.setTimeStamp(0.144519173297);
    msg.setSource(83U);
    msg.setSourceEntity(68U);
    msg.setDestination(61905U);
    msg.setDestinationEntity(36U);
    msg.state = 248U;
    msg.flags = 134U;
    msg.description.assign("LCLCZDBEAJVGHBIBFLWJUZFCKSZLVVTQEOFBXTKZVHODFRXSFMGGIVIROFYYUCXGHTJZBRSWONTEBCIYKIHVCAKEHOOZELEQABVUDQRJTLPHWGQWDOENEJGACTVSNSRCPKKYPNMLXIKSU");

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
    msg.setTimeStamp(0.588657780702);
    msg.setSource(39658U);
    msg.setSourceEntity(243U);
    msg.setDestination(42791U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.294563353233);
    msg.setSource(11092U);
    msg.setSourceEntity(12U);
    msg.setDestination(26638U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.133314454349);
    msg.setSource(50747U);
    msg.setSourceEntity(220U);
    msg.setDestination(29427U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.200006437183);
    msg.setSource(3878U);
    msg.setSourceEntity(72U);
    msg.setDestination(26499U);
    msg.setDestinationEntity(41U);
    msg.id = 115U;
    msg.label.assign("VMLLJQVTDGKRTFZUKVXEDSUMQKMRLYCVRAHEOJBMPRZZPUYPMTYFSYANFIFUGLOYCQVGCHDJYYMUKBIHFXGTXFZKELNDWGAQOCZZPBTUWENKQCRHDSNDUAZSVNJIKPSJULJINOTYLDKFBPSQHYXSGEUEWFCMRAWVQLMTESUPRKDGOJNCFIMBKWGNIWCPIIZHWABRYLEXOPVXJZOQXRHCDETBBFGEIXXSVGZADWCNHAHAQSORTHVPBOJ");
    msg.component.assign("UPHSYXWRMBKCOHDRMKYQXVHADYCTAADDUELDZVXIRVIWCTBRXUAWDIUDWCSJFJOPBKMIEHQEMYRJWOYWXRRFXYPTCSBKQQOWVGYOQKEMVZEFGHTYIBHEVNLSIZLAZUSITNZIUJLVHXCSKQGMKBBUYAOAIYLHGPLPTOKCSONJXCAEECLBSMJTV");
    msg.act_time = 51580U;
    msg.deact_time = 49478U;

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
    msg.setTimeStamp(0.613810919969);
    msg.setSource(31149U);
    msg.setSourceEntity(74U);
    msg.setDestination(8650U);
    msg.setDestinationEntity(120U);
    msg.id = 41U;
    msg.label.assign("MUSTRGLWFRFKJAKXALMGCZYRNFCQLOTDBRFVDIZINQPXVHNJLUBWBNGFXQVWUZTTUYNPONTHGBLSZBKDSELUIFZSGSAJZVYWJZAPMCKXBCFAKGUHPLAFHDAXUYLTCZIYKZWEIRRSGVFHHSVBPWWOKDPXJKMWYHUQIPHLDXIADIMCOTMOMRQJQFMASPITQOKLBQZECSNG");
    msg.component.assign("HCOAFCKPLXXBPCJANTELSDSTYZZQEJNPHYJYALMSWOMBTGUFBNERSOBYGKFQNLDWLKAXIICMQVNDJPWXGWUZVSYZBMHSJOLZADJWWHSZOOONMVBSDXRAMYGEGMGCOHEETFCPHXDRKNDCRNUNKEIBD");
    msg.act_time = 6468U;
    msg.deact_time = 48074U;

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
    msg.setTimeStamp(0.819874641981);
    msg.setSource(39723U);
    msg.setSourceEntity(44U);
    msg.setDestination(49737U);
    msg.setDestinationEntity(91U);
    msg.id = 36U;
    msg.label.assign("SLHGBCTHYFOTZZTGFEBFETHJKBCHFWGQGCCCOASKUYDDIIZBSOUNAYOVMCYVRRSWARTVWPAIAQVFGXHRUDFEDFVNLTHLGPNAGXMXJHIOBVOESXQNWYJIUVKRJQXYFYMUASTMBODUPOVRHQSCZMDLKWS");
    msg.component.assign("KBMFXGOKMNOSBYRQPQXFYUEQYRZAZYWTGIDECC");
    msg.act_time = 61997U;
    msg.deact_time = 59967U;

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
    msg.setTimeStamp(0.761212435298);
    msg.setSource(59617U);
    msg.setSourceEntity(198U);
    msg.setDestination(11944U);
    msg.setDestinationEntity(70U);
    msg.id = 5U;

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
    msg.setTimeStamp(0.397780670431);
    msg.setSource(22230U);
    msg.setSourceEntity(5U);
    msg.setDestination(53084U);
    msg.setDestinationEntity(247U);
    msg.id = 2U;

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
    msg.setTimeStamp(0.272662683825);
    msg.setSource(59123U);
    msg.setSourceEntity(106U);
    msg.setDestination(49686U);
    msg.setDestinationEntity(120U);
    msg.id = 34U;

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
    msg.setTimeStamp(0.960833443535);
    msg.setSource(29303U);
    msg.setSourceEntity(65U);
    msg.setDestination(40764U);
    msg.setDestinationEntity(87U);
    msg.op = 89U;
    msg.list.assign("JJMFSEKMMGJFXVGPAYPRBIOCVODNMYBBGPEJVHBDCJVEPSBHFEYXGHXXCINYCZRTDRSFJLPQKGNIIQUPOKRWHHVDBLGKSDKXIREMCWDRZYKODAFHZLLVMOMWKCAAHUXZHGGLLHCVYZSTWGENNAUTWJZYLTDOOUAAMNNTQBRUIXEQTPRBTOQQUUWKENIJWSBADYWSAKZEQITNYVMEOAFFPQUZVGOIBUSKXXWMTLZJXWSCQSLPPCZLRRJUFFTIYH");

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
    msg.setTimeStamp(0.624149421075);
    msg.setSource(54310U);
    msg.setSourceEntity(120U);
    msg.setDestination(9539U);
    msg.setDestinationEntity(245U);
    msg.op = 99U;
    msg.list.assign("CAKTBRVUHEWMXOBSVYKZBQECMJMYORPRMF");

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
    msg.setTimeStamp(0.940869164931);
    msg.setSource(32808U);
    msg.setSourceEntity(185U);
    msg.setDestination(38244U);
    msg.setDestinationEntity(55U);
    msg.op = 101U;
    msg.list.assign("ZIUHQQMXVFFYGYZVOYVSBTKSQMPNXKBYQCCOJDPOCAGRSMPOKGYVXJULBYCJUIQCIABBDWGEWPWUIJODRKDWNTXUUIGHZILFWZKXZLYOSZEHMITVEAHGASVEFKNZLROMRTMFKBHYTWUQDMADERZZEHROSICTKVUJTJG");

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
    msg.setTimeStamp(0.329811511694);
    msg.setSource(31361U);
    msg.setSourceEntity(167U);
    msg.setDestination(29073U);
    msg.setDestinationEntity(141U);
    msg.value = 196U;

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
    msg.setTimeStamp(0.404414402742);
    msg.setSource(47563U);
    msg.setSourceEntity(243U);
    msg.setDestination(10459U);
    msg.setDestinationEntity(66U);
    msg.value = 29U;

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
    msg.setTimeStamp(0.191749214901);
    msg.setSource(56736U);
    msg.setSourceEntity(173U);
    msg.setDestination(30114U);
    msg.setDestinationEntity(92U);
    msg.value = 253U;

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
    msg.setTimeStamp(0.548239824571);
    msg.setSource(64280U);
    msg.setSourceEntity(75U);
    msg.setDestination(11090U);
    msg.setDestinationEntity(203U);
    msg.consumer.assign("XVXAZSTFWGBDOVHABDOTIKEOVCZZGMGLXLGRTUFTDRCKNCYBJSGUHKPQQWZCDWPOIYQZTLKKEBBSAYELMFVPRVFQJTHQFDWULHHRHLAJTGYSNBFANZIYSNEKXEWFRTWOMMIJXBQZEYLBZSHLWEPNXVRVCPUMWUXAPHQKOJRSOKPWKQVGXIMYPGJEONFMLOEFJAVCUDRDBAVZBKXNSGWMYNRUHQTSOIXCADEDIUINMPITICCJYSYFUJQNLHZCRM");
    msg.message_id = 5591U;

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
    msg.setTimeStamp(0.688678992293);
    msg.setSource(30908U);
    msg.setSourceEntity(183U);
    msg.setDestination(33176U);
    msg.setDestinationEntity(148U);
    msg.consumer.assign("YJVUWICXOXXWHIBZBTTXSNQBILFCWEQRVYEMHQLSKNKTNGRZBNZNLCYDHQTLVXHHHWHPGUNXMFOZZYCICDCTDBDOLJAPAPVNIYQGNOLCBGFKIMPQAUKHSZLSBMSAIPJSUTEZWDNJGGQEGQDZEEWERDVSFWPBPFXVPJUIYKEFKCUHVMACACRTROYSDZAKVJIXAV");
    msg.message_id = 29745U;

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
    msg.setTimeStamp(0.993818089211);
    msg.setSource(51207U);
    msg.setSourceEntity(59U);
    msg.setDestination(32004U);
    msg.setDestinationEntity(113U);
    msg.consumer.assign("PLQWSIVBNNMIUGVFURJGTGUJNVCDKEBWHIDRTALNTWOFBXGYVGPKJTSGSKOKVFRAELWQICTDOJUBTIXZNCJKZXUSNXCLEZSZQOEZTVGQVJWUYUVGVYIYCTHLVFNPIAQGKDNFM");
    msg.message_id = 61526U;

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
    msg.setTimeStamp(0.296259813273);
    msg.setSource(50312U);
    msg.setSourceEntity(209U);
    msg.setDestination(48197U);
    msg.setDestinationEntity(19U);
    msg.type = 106U;

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
    msg.setTimeStamp(0.612602864242);
    msg.setSource(27928U);
    msg.setSourceEntity(123U);
    msg.setDestination(16446U);
    msg.setDestinationEntity(9U);
    msg.type = 50U;

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
    msg.setTimeStamp(0.573433303895);
    msg.setSource(60858U);
    msg.setSourceEntity(6U);
    msg.setDestination(16130U);
    msg.setDestinationEntity(106U);
    msg.type = 77U;

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
    msg.setTimeStamp(0.696204819669);
    msg.setSource(54113U);
    msg.setSourceEntity(68U);
    msg.setDestination(48648U);
    msg.setDestinationEntity(83U);
    msg.op = 98U;

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
    msg.setTimeStamp(0.942201461786);
    msg.setSource(18871U);
    msg.setSourceEntity(156U);
    msg.setDestination(6083U);
    msg.setDestinationEntity(120U);
    msg.op = 228U;

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
    msg.setTimeStamp(0.498006137717);
    msg.setSource(63365U);
    msg.setSourceEntity(223U);
    msg.setDestination(35543U);
    msg.setDestinationEntity(40U);
    msg.op = 152U;

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
    msg.setTimeStamp(0.424306377083);
    msg.setSource(54517U);
    msg.setSourceEntity(87U);
    msg.setDestination(18588U);
    msg.setDestinationEntity(84U);
    msg.total_steps = 5U;
    msg.step_number = 226U;
    msg.step.assign("XLQGQITIGWADHRLFOKQKDMPWBGMPNTEFJEOMAKZTZPRUSERBPLZZTOICUYRTLVVIB");
    msg.flags = 217U;

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
    msg.setTimeStamp(0.667196938609);
    msg.setSource(27508U);
    msg.setSourceEntity(212U);
    msg.setDestination(10827U);
    msg.setDestinationEntity(138U);
    msg.total_steps = 84U;
    msg.step_number = 165U;
    msg.step.assign("OYSDHGGDXTMGQKTORYDIZTTFJGBDTSVBFSAVRNOEQIOJALYWCEMZEIFKZZFEOXBQYIVATNDAJUJHVPEZQTRNYCHYUTGNYWFUPPAZHCYWRXLJSUJZEIKFCKSAMGRSRKOHVJGNMHCHRWPZXKFRBTPWBOHKMMPMVPZWEEMEYMDLJNQIPNLOONXFGVMFISPSTBINKBGRILUCAOKNRDUDL");
    msg.flags = 35U;

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
    msg.setTimeStamp(0.227180306976);
    msg.setSource(4792U);
    msg.setSourceEntity(181U);
    msg.setDestination(12766U);
    msg.setDestinationEntity(5U);
    msg.total_steps = 90U;
    msg.step_number = 158U;
    msg.step.assign("EIHHBRWGVMPCMSCRBBQXLPJGQMWNFUREXAFXWELNCLEVVPJEQURVRTTDSVPKETHYLMRWZNCAUKSOHCUACZOYKHUOGMIAKQENBUVVJDWFNKTTUXJLISPSDMZJKUKLNHPJXSOVRWZGICFTTHYMQGDZZOFOYHAGTFIOXQXBDXWONZOMAQZCPYLEQBKSAIXBTPIPDKFEWNNYDYSDFIAMQWPVARJCQJODDSYFUWBGNTUCIIHBFGHAGRYRJ");
    msg.flags = 92U;

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
    msg.setTimeStamp(0.724066847904);
    msg.setSource(2127U);
    msg.setSourceEntity(153U);
    msg.setDestination(60088U);
    msg.setDestinationEntity(242U);
    msg.state = 7U;
    msg.error.assign("ESFTPDZWELXRKGOHMYVSZVSTIKRMJBPVULTXJWWPDGMLARKFUGAPNRTQIXWPJFSSODVAUIENOKCVRQHNEJTDZVOYEFDJFECHNOVYMOHCAIKRCWMZJHBBZRWQHK");

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
    msg.setTimeStamp(0.0210465162449);
    msg.setSource(19740U);
    msg.setSourceEntity(215U);
    msg.setDestination(61314U);
    msg.setDestinationEntity(97U);
    msg.state = 69U;
    msg.error.assign("FOJFREWZFUYYEDHTIXCETUFVCSKPADMEZQSMFRUWICLBYRNRSMBTPMKRCPQHQCLLPEAJOQIIYPOXNDDSVMKHPNKWMFRVNTPKXXLYJ");

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
    msg.setTimeStamp(0.565876375118);
    msg.setSource(63170U);
    msg.setSourceEntity(223U);
    msg.setDestination(65009U);
    msg.setDestinationEntity(251U);
    msg.state = 84U;
    msg.error.assign("XIXGKOEGKPNHNLCCLNKLACJMLBSEJGRZVCZEMJRQDXIAETSSKBDRKUIPZXPAWEQXVKFJBWYVRYBXTTLAPTXCYNVCLEFDWCMJUTHIJBZSRAOZTFIBVT");

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
    msg.setTimeStamp(0.0910895869263);
    msg.setSource(165U);
    msg.setSourceEntity(228U);
    msg.setDestination(30544U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.55355306603);
    msg.setSource(36598U);
    msg.setSourceEntity(230U);
    msg.setDestination(48719U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.531212762296);
    msg.setSource(28931U);
    msg.setSourceEntity(45U);
    msg.setDestination(54034U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.0203006904549);
    msg.setSource(58046U);
    msg.setSourceEntity(174U);
    msg.setDestination(16930U);
    msg.setDestinationEntity(149U);
    msg.op = 100U;
    msg.speed_min = 0.650993465018;
    msg.speed_max = 0.791580202049;
    msg.long_accel = 0.992911619282;
    msg.alt_max_msl = 0.854456708274;
    msg.dive_fraction_max = 0.176769876549;
    msg.climb_fraction_max = 0.984456271019;
    msg.bank_max = 0.209602839379;
    msg.p_max = 0.0149928941151;
    msg.pitch_min = 0.00810853636495;
    msg.pitch_max = 0.854678254806;
    msg.q_max = 0.575592974959;
    msg.g_min = 0.560789161518;
    msg.g_max = 0.017503306732;
    msg.g_lat_max = 0.505715380855;
    msg.rpm_min = 0.939729660458;
    msg.rpm_max = 0.379093017752;
    msg.rpm_rate_max = 0.515821493746;

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
    msg.setTimeStamp(0.643237325937);
    msg.setSource(47683U);
    msg.setSourceEntity(181U);
    msg.setDestination(38048U);
    msg.setDestinationEntity(52U);
    msg.op = 39U;
    msg.speed_min = 0.972132910444;
    msg.speed_max = 0.103099370993;
    msg.long_accel = 0.219593538263;
    msg.alt_max_msl = 0.601683308779;
    msg.dive_fraction_max = 0.171641436745;
    msg.climb_fraction_max = 0.836138290797;
    msg.bank_max = 0.258115486547;
    msg.p_max = 0.0973755315662;
    msg.pitch_min = 0.0169447284915;
    msg.pitch_max = 0.912596154935;
    msg.q_max = 0.807575187105;
    msg.g_min = 0.804912826275;
    msg.g_max = 0.594817168789;
    msg.g_lat_max = 0.160042514746;
    msg.rpm_min = 0.470344841837;
    msg.rpm_max = 0.302310549779;
    msg.rpm_rate_max = 0.00502131103738;

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
    msg.setTimeStamp(0.690058098144);
    msg.setSource(3370U);
    msg.setSourceEntity(131U);
    msg.setDestination(54477U);
    msg.setDestinationEntity(15U);
    msg.op = 172U;
    msg.speed_min = 0.371885204106;
    msg.speed_max = 0.287031927073;
    msg.long_accel = 0.840737081898;
    msg.alt_max_msl = 0.37938128539;
    msg.dive_fraction_max = 0.152667526628;
    msg.climb_fraction_max = 0.263826425242;
    msg.bank_max = 0.816122128714;
    msg.p_max = 0.694778375028;
    msg.pitch_min = 0.171627769543;
    msg.pitch_max = 0.00134286924647;
    msg.q_max = 0.889914848183;
    msg.g_min = 0.761442783667;
    msg.g_max = 0.762674081791;
    msg.g_lat_max = 0.47813472122;
    msg.rpm_min = 0.847944958639;
    msg.rpm_max = 0.0715625856537;
    msg.rpm_rate_max = 0.225954611432;

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
    msg.setTimeStamp(0.406743533743);
    msg.setSource(57045U);
    msg.setSourceEntity(22U);
    msg.setDestination(31888U);
    msg.setDestinationEntity(159U);
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 31U;
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
    msg.setTimeStamp(0.120115157044);
    msg.setSource(12318U);
    msg.setSourceEntity(206U);
    msg.setDestination(54611U);
    msg.setDestinationEntity(100U);
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.13148441162;
    tmp_msg_0.lon = 0.245057892302;
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
    msg.setTimeStamp(0.0127435590579);
    msg.setSource(41336U);
    msg.setSourceEntity(58U);
    msg.setDestination(57086U);
    msg.setDestinationEntity(162U);
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.630686709166;
    tmp_msg_0.ch02 = 0.618253014525;
    tmp_msg_0.ch03 = 0.0805854121248;
    tmp_msg_0.ch04 = 0.419107848386;
    tmp_msg_0.ch05 = 0.804879221759;
    tmp_msg_0.ch06 = 0.98813726414;
    tmp_msg_0.ch07 = 0.167461260283;
    tmp_msg_0.ch08 = 0.792328999907;
    tmp_msg_0.ch09 = 0.516279883317;
    tmp_msg_0.ch10 = 0.614490337525;
    tmp_msg_0.ch11 = 0.842990269038;
    tmp_msg_0.ch12 = 0.358030212988;
    tmp_msg_0.ch13 = 0.457420221651;
    tmp_msg_0.ch14 = 0.513475791972;
    tmp_msg_0.ch15 = 0.663989878845;
    tmp_msg_0.ch16 = 0.92912963745;
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
    msg.setTimeStamp(0.853257044938);
    msg.setSource(52294U);
    msg.setSourceEntity(146U);
    msg.setDestination(2548U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.0297442265473;
    msg.lon = 0.123560679201;
    msg.height = 0.0561038564467;
    msg.x = 0.439134267767;
    msg.y = 0.0253602656773;
    msg.z = 0.857801599122;
    msg.phi = 0.985853248894;
    msg.theta = 0.473614988447;
    msg.psi = 0.504491600627;
    msg.u = 0.461832823828;
    msg.v = 0.898956124104;
    msg.w = 0.630940261075;
    msg.p = 0.495897487171;
    msg.q = 0.777861679653;
    msg.r = 0.93757727615;
    msg.svx = 0.501064055735;
    msg.svy = 0.765700285235;
    msg.svz = 0.924987746386;

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
    msg.setTimeStamp(0.891992349914);
    msg.setSource(48163U);
    msg.setSourceEntity(244U);
    msg.setDestination(813U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.244569349158;
    msg.lon = 0.844187292803;
    msg.height = 0.525646407579;
    msg.x = 0.479632196935;
    msg.y = 0.667622444332;
    msg.z = 0.0769186464519;
    msg.phi = 0.243142818711;
    msg.theta = 0.367765969558;
    msg.psi = 0.398467892965;
    msg.u = 0.167141786011;
    msg.v = 0.419252973723;
    msg.w = 0.836814425333;
    msg.p = 0.355436902327;
    msg.q = 0.477208101338;
    msg.r = 0.646611340751;
    msg.svx = 0.46113677411;
    msg.svy = 0.697078325469;
    msg.svz = 0.92768881403;

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
    msg.setTimeStamp(0.491569316012);
    msg.setSource(60328U);
    msg.setSourceEntity(238U);
    msg.setDestination(16428U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.313200273386;
    msg.lon = 0.590752212639;
    msg.height = 0.620676948549;
    msg.x = 0.472924373036;
    msg.y = 0.327860290122;
    msg.z = 0.614383282418;
    msg.phi = 0.575123712461;
    msg.theta = 0.548784476531;
    msg.psi = 0.793911010302;
    msg.u = 0.200599684509;
    msg.v = 0.891254362665;
    msg.w = 0.764602839488;
    msg.p = 0.255842843977;
    msg.q = 0.86592282082;
    msg.r = 0.939399792045;
    msg.svx = 0.774906288097;
    msg.svy = 0.298823216534;
    msg.svz = 0.484715188095;

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
    msg.setTimeStamp(0.467557137825);
    msg.setSource(48727U);
    msg.setSourceEntity(67U);
    msg.setDestination(9672U);
    msg.setDestinationEntity(168U);
    msg.op = 77U;
    msg.entities.assign("LTYUOPRAXRZTVFHCROJMMYTCCPSOHRHIUGWFJSTLSFDYBFMVGBQHUCXLWPRUKQAADQQFZEAIHWITLMMPUIPAZMUBZEVOIAVINOPBQZKBJRFHQKNBNVSWKVUVUJLZRGDP");

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
    msg.setTimeStamp(0.0723999330996);
    msg.setSource(35715U);
    msg.setSourceEntity(116U);
    msg.setDestination(34741U);
    msg.setDestinationEntity(252U);
    msg.op = 203U;
    msg.entities.assign("NEFDDAIHXBDQZMKQNNROFKJCIUVEJCWTPTLHBFUFGKYOJGJAJITDIXGOIVYGTSBUCGHFTO");

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
    msg.setTimeStamp(0.0507659234297);
    msg.setSource(43104U);
    msg.setSourceEntity(0U);
    msg.setDestination(41054U);
    msg.setDestinationEntity(187U);
    msg.op = 13U;
    msg.entities.assign("DPCQEOTPWRJYFPXZISJKRXJIRSOBWOIUOOGCDUHKSTLDVGMNFMTYLFGKZEEYDZAATATITXXLWZGRBYSYEMRTFEVYN");

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
    msg.setTimeStamp(0.299548448795);
    msg.setSource(65216U);
    msg.setSourceEntity(3U);
    msg.setDestination(62654U);
    msg.setDestinationEntity(66U);
    msg.type = 128U;
    msg.speed = 20558U;
    const char tmp_msg_0[] = {-23, 28, 24, 45, -31, 77, -96, -85, -38, -62, -77, 74, -42, -41, -44, -110, 91, -92, -10, 18, -112, -74, -14, 74, 54, 60, -55, -40, 51, -90, -5, 69, -95, 52, -128, 80, -83, 29, 16, 88, -18, -87, -109, 38, -94, -17, 27, -78, -67, -114, -44, -55, 57, 22};
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
    msg.setTimeStamp(0.173857937745);
    msg.setSource(41721U);
    msg.setSourceEntity(159U);
    msg.setDestination(50640U);
    msg.setDestinationEntity(78U);
    msg.type = 224U;
    msg.speed = 17341U;
    const char tmp_msg_0[] = {76, 23, 101, 22, 53, 47, 78, 26, -53, 80, 123, 101, 97, 52, 86, -40, 16, 32, 97, -2, -71, -18, 119, -76, -55, 91, 90, -39, 82, 64, -28, 56, -63, -45, 67, 119, 32, -110, 85, 87, -70, 94, 61, -48, 114, -82, 113, -123, -24, 36, 83, -54, -100, -115, -10, -77, 48, 20, -90, 54, 89, 74, -111, 11, 95, -61, -112, 79, 110, -56, -28, 44, 1, 26, -47, 92, 106, 45, -108, -36, 90, 8, -26, 23, 18, 36, -69, 124, -80, 11, -127, -95, -115, 24, 84, 53, -53, -70, -87, 113, 14, -69, -32, 43, 41, 101, -109, 67, 14, 111, 61, 63, 16, 17, -95, 53, -86, 2, -84, -4, -48, 110, 110, 98, -32, 27, -100, -20, 58, -107, -89, 119, 109, 13, -121, 114, 119, 74, 97, -55, -18, -109, 79, -68, 64, -95, 28, 110, 67, -56, 27, -49, 13};
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
    msg.setTimeStamp(0.860762263587);
    msg.setSource(45546U);
    msg.setSourceEntity(236U);
    msg.setDestination(56979U);
    msg.setDestinationEntity(141U);
    msg.type = 12U;
    msg.speed = 7261U;
    const char tmp_msg_0[] = {-33, -109, 104, -68, -44, 104, -117, 122, -78, -30, -123, 70, 92, -44, -54, -67, 106, -101, -3, 125, -70, -32, 121, 93, -118, -9, -56, -86, 68, -69, -46, 42, 7, 112, -35, 66, -66, -30, -24, 106, -9, 35, -7, -15, -37, -60, -54, -6, 122, -41, 17, -2, -83, -108, 30, 94, 23, 67, -104, -69, 88, 33, -109, -120, 21, 61, 31, -125, -95, 58, -120, 62, -120, -92, -23, -86, -36, -34, -66, 2, -71, 91, 52, 123, 112, -7, 66, -109, 101, 28, 60, 33, -110, -83, 14, 77, 84, -70, 63, 50, -23, 116, 37, -64, 61, 74, -62, 93, 21, 51, 109, 82, -62, -76, -36, 69, -117, 92, -76, 20, 80, -60, 61, 110, 73, 28, -24, -108, -73, 18, 59, 9, 37, -97, 31, -36, 9, 82, -93, -109, 78, -1, -99, 38, 28, 73, -61, 4, -98, -79, 34, -28, 84, 24, -96, 46, 0, -109, 35, 11, 59, 66, -114, -65, -72, -118, 27, -112, 66, 58, -92};
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
    msg.setTimeStamp(0.437043035173);
    msg.setSource(18956U);
    msg.setSourceEntity(120U);
    msg.setDestination(55555U);
    msg.setDestinationEntity(182U);
    msg.op = 129U;
    msg.tas2acc_pgain = 0.661350983356;
    msg.bank2p_pgain = 0.223407351946;

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
    msg.setTimeStamp(0.12396998145);
    msg.setSource(4767U);
    msg.setSourceEntity(215U);
    msg.setDestination(42475U);
    msg.setDestinationEntity(161U);
    msg.op = 217U;
    msg.tas2acc_pgain = 0.5391189863;
    msg.bank2p_pgain = 0.742818428157;

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
    msg.setTimeStamp(0.636719715053);
    msg.setSource(64857U);
    msg.setSourceEntity(212U);
    msg.setDestination(60059U);
    msg.setDestinationEntity(156U);
    msg.op = 52U;
    msg.tas2acc_pgain = 0.919319635158;
    msg.bank2p_pgain = 0.431452214368;

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
    msg.setTimeStamp(0.645580311408);
    msg.setSource(56538U);
    msg.setSourceEntity(104U);
    msg.setDestination(52379U);
    msg.setDestinationEntity(77U);
    msg.available = 749399382U;
    msg.value = 243U;

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
    msg.setTimeStamp(0.251172314566);
    msg.setSource(4313U);
    msg.setSourceEntity(158U);
    msg.setDestination(14261U);
    msg.setDestinationEntity(90U);
    msg.available = 3981491634U;
    msg.value = 210U;

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
    msg.setTimeStamp(0.892611649448);
    msg.setSource(8655U);
    msg.setSourceEntity(21U);
    msg.setDestination(55656U);
    msg.setDestinationEntity(108U);
    msg.available = 2161382842U;
    msg.value = 130U;

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
    msg.setTimeStamp(0.298525966599);
    msg.setSource(32224U);
    msg.setSourceEntity(111U);
    msg.setDestination(48888U);
    msg.setDestinationEntity(20U);
    msg.op = 247U;
    msg.snapshot.assign("SDKYKDECQYCNLRGNMWZVHCPYRTQTMPZOFWARZWNOJDQHUTM");
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 32578U;
    tmp_msg_0.sys.assign("ETEAJATICZKERHWWWQGOHSSSXSZOWXNTPALXZDOBNVYNLDQXIMPAUEPBDYFPTNTVRGFCEAYEOZVIGREKYWJTKBWCAJQMKTYLHOCVYUWQPFPYUJHNYSPMFWUMCOUGDIJTNKJBQCJOIMFRGGFTPBZNCYECUGTDEAVOLPZMFLABVBBUVZHW");
    tmp_msg_0.value = 0.180421139499;
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
    msg.setTimeStamp(0.695136419679);
    msg.setSource(1702U);
    msg.setSourceEntity(246U);
    msg.setDestination(677U);
    msg.setDestinationEntity(79U);
    msg.op = 150U;
    msg.snapshot.assign("JLSVEJHTVWZSOXMVSHJMHEAENCABLUNWCGEZRPMWMESBDKGBPRYHNCLQGJDXOKDPCXMYHQFVZGFKYZMTAFKXCPLKLGUSVYIDJMHPTUVTZTRGXTYGAAWVXRWBQRNKWOHQEUNRYOFLDEFPCKOXGSFAIHQQTRWLSNCMJOGEOROXLIZUICRMUKTPFANUGPWTZEPNKHYDWWILMNOIYFYBZACCJINVABHQVKZLOSVJFQUBJFIDDAYQIDIBZS");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("CWGGETXQNPVHVXUQCZBXVLBRFHDIFDPLATQOGIAINOZRFYSTPKJVETFDUEKHJJRUOMJUSKECCZMBZMAZSEWOVKPSXIQBGIINSYDQOVAKHGBDZWQCVKZKMHXAWTIIETLONQIYTSRDDXJYWLMOKYFKFKXANRTMVEBUFIJGAAMHBJRYTJFMPFSADGWHJRSUGPUJYEVGNXRXMYAUPSOTCCZNLGUNHCOVSODBYBRHWBPQ");
    tmp_msg_0.max_speed = 0.606309405403;
    tmp_msg_0.speed_units = 147U;
    tmp_msg_0.lat = 0.643647840549;
    tmp_msg_0.lon = 0.0643063294896;
    tmp_msg_0.z = 0.876969812726;
    tmp_msg_0.z_units = 185U;
    tmp_msg_0.custom.assign("IPRGXMQUGEKAYVZRYSOJGXONVWFDWVQQLUPRMCFUIQYCTFEHKTNECWDVTBYRAGFVFGXCWJJRKLRMKOLHQGTZETYPMPXUNEAAWUPOOALCTIUHOVFBWQJGHUKBDODDDXCJBZYXVZLPFRFVSKTOISOZUSZNMQHUJPT");
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
    msg.setTimeStamp(0.651626541799);
    msg.setSource(1476U);
    msg.setSourceEntity(106U);
    msg.setDestination(46693U);
    msg.setDestinationEntity(153U);
    msg.op = 51U;
    msg.snapshot.assign("VXRNHXHEVUAAZJOFATIDCWBEWZMXEUJCBGFMUTFZXTHWZFJFIFRGKNXHNMPJNRIVBBDWYQMDCLGIPYC");
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 226U;
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
    msg.setTimeStamp(0.585814876444);
    msg.setSource(2512U);
    msg.setSourceEntity(39U);
    msg.setDestination(28190U);
    msg.setDestinationEntity(50U);
    msg.op = 220U;
    msg.name.assign("RMQNQYQXRICWVPGSZZUXLBMWITDEGODLQKSBFXELWCNTINRKVUZCOAPPHYAHUFGKNPRNIUYEVLMYAOPUTHDKJVFDJSHINDVYGKGCGQGTSMSTKTTBYDUQCTTCINODQXZCVBROSJXLWAHZBGWRBXAIWVC");

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
    msg.setTimeStamp(0.724378564293);
    msg.setSource(40694U);
    msg.setSourceEntity(222U);
    msg.setDestination(6236U);
    msg.setDestinationEntity(135U);
    msg.op = 54U;
    msg.name.assign("INXZPXTJVREBFSMXEJKUWISKFNUVFROOYQPPHWYLHWRCRTNKTTZNVMIRZAKJBBDPRBGCBYHVALRTAGUHQDUOVQBDIMNCVOJQJAXFLHHJDVDNYFEGKXKSGXZSEJSMALSOZHRMTWZLZWQETLYJQRWKDFYAFPDIGBMPCQEPFHSGBBCGIPUBMTUIQJSWXXIUQCYDIUNWVCMTEESLEAUFVLOPVCWCYPNAZZMHRHEYUINKXJGKOANQMOLDAWYDGFKCOZ");

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
    msg.setTimeStamp(0.461523128309);
    msg.setSource(51838U);
    msg.setSourceEntity(83U);
    msg.setDestination(29711U);
    msg.setDestinationEntity(71U);
    msg.op = 26U;
    msg.name.assign("DILYZWEKXGOVZOIXKSQHRBEXUJGMMTJNIGXRLOVWKYJSXHPFUDB");

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
    msg.setTimeStamp(0.472333987133);
    msg.setSource(64960U);
    msg.setSourceEntity(88U);
    msg.setDestination(50404U);
    msg.setDestinationEntity(26U);
    msg.type = 141U;
    msg.htime = 0.711011107945;
    msg.context.assign("WRFXXZROXKVCJFHSVCBYMBMAYMIPOIIBBWQISGSGDKJGPUCLXVHFYWQSSIJMJXNIPVINZNWSGVEJTGDKIVUAOYUKSDBURRVJFYNLASMCLZXEMNTJGBBOZGNTUMFAEZMECHOLQEXUMUOKNOPPFBUCVIZOWZHTRCLDBCXMLADKTHLRYDZNQRQYERPVPAYKHXCQJQOVXNATKKQADUTOFGF");
    msg.text.assign("HZSXAUXOKOBWXEOLYFOFFZHEPSWLMFEJNQUXOAIWEQUAWNTPEIBXNVRMWVKUXSXHAPBJPQTCGWNCLCCGQGGBYSBQBLHJVPBFHQSRDSKLGWMKYUXPARDMPFQAFTDPGHANSYPJDGJKBVMIKJZYTLDSLMXMKCCREEIXSUSOMTNUVNDYIGUNTEZRIJAVQYCVBRUHKZQOBRLIOYTEOZCKIJZVQZIHGIDMVLTDMFRENRJL");

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
    msg.setTimeStamp(0.891956981224);
    msg.setSource(44976U);
    msg.setSourceEntity(22U);
    msg.setDestination(53823U);
    msg.setDestinationEntity(119U);
    msg.type = 6U;
    msg.htime = 0.65206976501;
    msg.context.assign("QKTITEEHRIGHNALTOBQBWVVBISAORIVLGRQQXTCSODXTZRZPTWMEAWHEFNLKUEIBXWCOSKAKZSVHFAELYAHMGNYQCJDYMAJEDEXNMKIPUNJPZOBJNBCPYMJWIHIGLDJTYKQTXVTCMWCXVIDYVPKZURFTHZVWJEJBQZHSGFWRRBNPRFEJXPFSMFDOGLFUGAZSS");
    msg.text.assign("FCLBFLDSNURVUPZHLXYWZWAZYLCHAQLKQGRCPSQBYHBXLEOHTKVPTKUDTNUZRNJLPDKIEKPYUYTDZFIUBXRVRIJJPWXZAKOSUUHVHFFGBBMSQPGYKOPEARWMQMEGGK");

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
    msg.setTimeStamp(0.549072735896);
    msg.setSource(64275U);
    msg.setSourceEntity(181U);
    msg.setDestination(57455U);
    msg.setDestinationEntity(120U);
    msg.type = 65U;
    msg.htime = 0.473039806995;
    msg.context.assign("LJHWYAWXGSGQCCSWQACLUOZTYHDLTGIJACWOUJXANQJBROHBRVDDVNUBKNVLFQLNXMZKMRCIYWJPFEUNMIMRXSVSGBKEEXTENHABGSCPSPQFLEPMFIZARRVOFTQFCJKPXIRHVSYEIFEVRHMUDMNWQXVKKTKSSGLBBTYHBTK");
    msg.text.assign("RFJOOKNOXAIWHGSTXKASVGFTJANM");

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
    msg.setTimeStamp(0.0481310571593);
    msg.setSource(57504U);
    msg.setSourceEntity(211U);
    msg.setDestination(13810U);
    msg.setDestinationEntity(103U);
    msg.command = 232U;
    msg.htime = 0.270789901237;

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
    msg.setTimeStamp(0.107974382683);
    msg.setSource(30058U);
    msg.setSourceEntity(5U);
    msg.setDestination(65316U);
    msg.setDestinationEntity(222U);
    msg.command = 87U;
    msg.htime = 0.515891371026;

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
    msg.setTimeStamp(0.0684877830672);
    msg.setSource(48231U);
    msg.setSourceEntity(248U);
    msg.setDestination(47065U);
    msg.setDestinationEntity(238U);
    msg.command = 10U;
    msg.htime = 0.563211814818;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 156U;
    tmp_msg_0.htime = 0.971865951558;
    tmp_msg_0.context.assign("XYNCGPOCSDCDEFZGHLSUQFABXVTUWVRZOYGGGCYRUSBUKTTRMSWHNJBFMZFCXJQETMZBTOQCAZZZSFHGWBOOVAPVTJYDBL");
    tmp_msg_0.text.assign("CSLQYNBGVXOCZQMLUMTFGPQGMJDANHHVIJUABVHRUICEHQPFXPTDYUNJMQQSLGSLVFVFUGLTYXOCOHDZVYZIJMERERWEPJJALOMNVSDUNAFYTXYOMRZPYZQYW");
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
    msg.setTimeStamp(0.999489915413);
    msg.setSource(61369U);
    msg.setSourceEntity(63U);
    msg.setDestination(32419U);
    msg.setDestinationEntity(245U);
    msg.op = 240U;
    msg.file.assign("OSSKLTTGWKGCWZLEHNRIVMZIRFAMNPIWQWELMUHATKTSDICDSMPWFISLYQGRNFPXLCPXQVUKUIOJOYJCEFHEQYZSKLFKBJZWUXBTAPSNELFOXPDDQGZYFBXKKUAVAACWQDONOMCOHXJYBCYUDNSSPJNXYDNMVYEPVFRQMQJCGHZRIBYOOSZZFBQETMRBGEGWAXLZHWVGRTBABFGHCCJTXJVGUTVPXNMVLPVAOEZLUDHTKRHIJHWQIBURJDDIE");

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
    msg.setTimeStamp(0.875370629194);
    msg.setSource(11715U);
    msg.setSourceEntity(106U);
    msg.setDestination(26714U);
    msg.setDestinationEntity(54U);
    msg.op = 24U;
    msg.file.assign("IHGEDCGBVWVASGLTGSIWEXJLIYLRGPLUAKEACZPSSHQQPYKNZYUWQBWZKYNGJQEHWZPYRKATMFLMRUUSCYUNHMHTLUBYDDLSFZMQORCC");

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
    msg.setTimeStamp(0.534933129744);
    msg.setSource(56777U);
    msg.setSourceEntity(238U);
    msg.setDestination(58119U);
    msg.setDestinationEntity(250U);
    msg.op = 72U;
    msg.file.assign("UTINVHYLMHTWOLJZWATKJAHJQVKNVTQNWEKJRCSBARSDFIYXPCQXOMSSJILR");

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
    msg.setTimeStamp(0.942487321698);
    msg.setSource(383U);
    msg.setSourceEntity(252U);
    msg.setDestination(32047U);
    msg.setDestinationEntity(130U);
    msg.op = 154U;
    msg.clock = 0.455879080136;
    msg.tz = 65;

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
    msg.setTimeStamp(0.400000008787);
    msg.setSource(24263U);
    msg.setSourceEntity(189U);
    msg.setDestination(64709U);
    msg.setDestinationEntity(233U);
    msg.op = 224U;
    msg.clock = 0.509705620432;
    msg.tz = -35;

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
    msg.setTimeStamp(0.369096788177);
    msg.setSource(46864U);
    msg.setSourceEntity(11U);
    msg.setDestination(11143U);
    msg.setDestinationEntity(40U);
    msg.op = 200U;
    msg.clock = 0.506267825511;
    msg.tz = 1;

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
    msg.setTimeStamp(0.570794348572);
    msg.setSource(25826U);
    msg.setSourceEntity(208U);
    msg.setDestination(39144U);
    msg.setDestinationEntity(115U);
    msg.conductivity = 0.424528196155;
    msg.temperature = 0.752794969248;
    msg.depth = 0.0684252321172;

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
    msg.setTimeStamp(0.80865016794);
    msg.setSource(51658U);
    msg.setSourceEntity(241U);
    msg.setDestination(5068U);
    msg.setDestinationEntity(194U);
    msg.conductivity = 0.749251283261;
    msg.temperature = 0.428823588698;
    msg.depth = 0.263181859735;

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
    msg.setTimeStamp(0.973863446321);
    msg.setSource(57471U);
    msg.setSourceEntity(168U);
    msg.setDestination(30582U);
    msg.setDestinationEntity(7U);
    msg.conductivity = 0.0272930328166;
    msg.temperature = 0.830723334942;
    msg.depth = 0.798549141416;

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
    msg.setTimeStamp(0.770757188665);
    msg.setSource(48695U);
    msg.setSourceEntity(186U);
    msg.setDestination(12189U);
    msg.setDestinationEntity(152U);
    msg.altitude = 0.46572325778;
    msg.roll = 50351U;
    msg.pitch = 8214U;
    msg.yaw = 43869U;
    msg.speed = -27823;

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
    msg.setTimeStamp(0.654689666398);
    msg.setSource(32457U);
    msg.setSourceEntity(245U);
    msg.setDestination(9675U);
    msg.setDestinationEntity(232U);
    msg.altitude = 0.476628747033;
    msg.roll = 8586U;
    msg.pitch = 53797U;
    msg.yaw = 60276U;
    msg.speed = 6534;

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
    msg.setTimeStamp(0.857620273373);
    msg.setSource(1621U);
    msg.setSourceEntity(149U);
    msg.setDestination(7696U);
    msg.setDestinationEntity(207U);
    msg.altitude = 0.976728683184;
    msg.roll = 52811U;
    msg.pitch = 55725U;
    msg.yaw = 59035U;
    msg.speed = -9443;

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
    msg.setTimeStamp(0.770199636533);
    msg.setSource(48959U);
    msg.setSourceEntity(189U);
    msg.setDestination(60500U);
    msg.setDestinationEntity(226U);
    msg.altitude = 0.0135279342147;
    msg.width = 0.5859126257;
    msg.length = 0.170639213636;
    msg.bearing = 0.460652851747;
    msg.pxl = -17807;
    msg.encoding = 209U;
    const char tmp_msg_0[] = {4, 64, 98, -121, 110, 9, 54, 58, -14, 105, 97, -97, -31, -112, -96, -89, 61, -49, -76, 45, -36, 117, 99, 74, -113, 25, 75, 32, 117, 90, -118, 65, -127, 23, 125, 48, -17, -111, -27, -121, 46, 7, 5, -27, -3, -24, -105, 26, 6, -110};
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
    msg.setTimeStamp(0.526543099133);
    msg.setSource(45353U);
    msg.setSourceEntity(89U);
    msg.setDestination(40781U);
    msg.setDestinationEntity(32U);
    msg.altitude = 0.267226936297;
    msg.width = 0.376911396719;
    msg.length = 0.293907103745;
    msg.bearing = 0.327353686611;
    msg.pxl = 7410;
    msg.encoding = 95U;
    const char tmp_msg_0[] = {10, 94, 50, -83, 98, 97, 107, -64, -104, 9, -20, 25, 0, 53, 66, -2, -124, 106, 102, -27, -111, -124, -95, 3, 33, 29, 10, 64, -109, 48, 45, 7, 89, 120, 73, -121, 98, -49, -65, -40, 6, -70, -42, 113, -48, -103, -72, 35, -80, 59, 118, -40, -60, 78, 117, -5, 63, -96, -89, 10, -94, 17, -20, 45, -121, 3, -35, 33, 100, -78, -25, -16, 6, -63, 56, -31, 32, 47, 65, 122, -8, -119, -112, 38, 118, -8, 106, -90, 6, 5, 56, -122, 5, -98, -117, -34, -60, -48, 126, 22, -96, 0, 25, -23, -2, -66, -62, -27, -13, 37, 67, -65, -42, -90, -56, -27, -110, -80, -119, -100, -55, -45, -18, 33, -91, 54, -44, 77, -39, 0, -67, 106, -31, 18, -21, 117, 99, -125, -13, 84, 72, 1, -80, -107, -37, -121, -10, -122, 81, 76, 18, -5, 102, 104, -73, -110, 122, -92, -96, 110, -106, 84, 34, 68, -61, 43, 10, -53, -97, 27, -115, 84, -80, -126, 34, -96, -16, 122, -21, -99, 79, 74, -114, 40};
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
    msg.setTimeStamp(0.750840522949);
    msg.setSource(54640U);
    msg.setSourceEntity(62U);
    msg.setDestination(61273U);
    msg.setDestinationEntity(35U);
    msg.altitude = 0.339815408181;
    msg.width = 0.0885092456805;
    msg.length = 0.936587821293;
    msg.bearing = 0.00186360538418;
    msg.pxl = -30803;
    msg.encoding = 13U;
    const char tmp_msg_0[] = {-126, 60, -77, 106, -74, -24, -124, 66, 50, -59, -106, 82, -28, 8, -90, -32, -70, 56, -107, 53, 51, 110, -74, -59, 70, 17, 102, -18, 57, 7, -54, 57, 16, 66, 114, 48, -69, 105, -88, 53, -54, -3, 103, 74, -22, -98, -2, -8, -65, -28, -43, -28, -86, 47, -5, -105, -48, -78, 80, 24, -65, -5, 19, 0, -48, -66, -11, -17, -14, -58, 113, 76, 85, -48, 77, 92, 108, 41, 89, -85, -26, -49, -20, 42, 19, 35, -64, -14, -5, 122, 122, -103, 47, -85, -15, 55, -33, -25, 14, 77, -94, 61, -121, 32, -123, -53, 63, 120, 98, 15, 89, -62, 61, -117, 62, -73, -11, 70, -1, -38, -19, 119, 99, -19, 93, 13, 95, 26, -84, -44, 46, -43, -44, -49, -103, -98, -85, -118, -56, 46, 68, -24, 66, 34, -10, -91, -94, -89, -109, 58, -121};
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
    msg.setTimeStamp(0.872544081692);
    msg.setSource(1860U);
    msg.setSourceEntity(191U);
    msg.setDestination(47686U);
    msg.setDestinationEntity(230U);
    msg.text.assign("ZTJAZQZQWBNASNEYEQYAEWIPLTTSGHYMWUEZEBYSSIGKZOMANLXNRRHTCQSDMFGDTCMSRWZZROHLPSICHIJOOPLPBTNDFEIHDIDCVRGHZPQNKVDSWILRUKFUNAXEGLVCOVCEKPBHBNUOCBTXTMOVGHPJCSAFRXZFUKJPWDSXEGDOBVFKFJYATBDQAKNQBLMQKBXKXYGRGHLNYYQJOWXYJWFJMUGMIMREUIUXWRPLYAQAVJCDTCWFFL");
    msg.type = 35U;

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
    msg.setTimeStamp(0.800840126821);
    msg.setSource(9690U);
    msg.setSourceEntity(112U);
    msg.setDestination(36426U);
    msg.setDestinationEntity(230U);
    msg.text.assign("UDYNGGVUQPLGLZBFEUJQVUIPKOBZAZWAFWAIXMBHCCUHFNOKHJFFNLXWOZWFANEJTMCXEQCEBCSTEGIVDDCRZTKDFRMGAANVC");
    msg.type = 80U;

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
    msg.setTimeStamp(0.192556869321);
    msg.setSource(22326U);
    msg.setSourceEntity(120U);
    msg.setDestination(41528U);
    msg.setDestinationEntity(158U);
    msg.text.assign("XACQAJHFACCNOZJBKHCKBTDSMNESALTAIPKODOLRQUIBRYYDRMGTFJOEV");
    msg.type = 189U;

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
    msg.setTimeStamp(0.565169409061);
    msg.setSource(39313U);
    msg.setSourceEntity(131U);
    msg.setDestination(23895U);
    msg.setDestinationEntity(11U);
    msg.parameter = 96U;
    msg.numsamples = 226U;
    msg.lat = 0.826761343675;
    msg.lon = 0.962200378676;

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
    msg.setTimeStamp(0.833176672966);
    msg.setSource(53005U);
    msg.setSourceEntity(197U);
    msg.setDestination(53681U);
    msg.setDestinationEntity(200U);
    msg.parameter = 52U;
    msg.numsamples = 51U;
    msg.lat = 0.751035959289;
    msg.lon = 0.896511864123;

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
    msg.setTimeStamp(0.126857991667);
    msg.setSource(26265U);
    msg.setSourceEntity(206U);
    msg.setDestination(19282U);
    msg.setDestinationEntity(22U);
    msg.parameter = 71U;
    msg.numsamples = 125U;
    msg.lat = 0.469411705871;
    msg.lon = 0.712364458433;

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
    msg.setTimeStamp(0.996425749401);
    msg.setSource(2655U);
    msg.setSourceEntity(149U);
    msg.setDestination(62743U);
    msg.setDestinationEntity(197U);
    msg.depth = 25537U;
    msg.avg = 0.714987445772;

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
    msg.setTimeStamp(0.228464928827);
    msg.setSource(44079U);
    msg.setSourceEntity(27U);
    msg.setDestination(55577U);
    msg.setDestinationEntity(78U);
    msg.depth = 60350U;
    msg.avg = 0.210489142953;

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
    msg.setTimeStamp(0.764860279121);
    msg.setSource(64730U);
    msg.setSourceEntity(135U);
    msg.setDestination(6186U);
    msg.setDestinationEntity(114U);
    msg.depth = 63115U;
    msg.avg = 0.119134974622;

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
    msg.setTimeStamp(0.131614942979);
    msg.setSource(2724U);
    msg.setSourceEntity(237U);
    msg.setDestination(25609U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.90842262627);
    msg.setSource(9671U);
    msg.setSourceEntity(0U);
    msg.setDestination(48725U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.832539984965);
    msg.setSource(4305U);
    msg.setSourceEntity(241U);
    msg.setDestination(9547U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.591001089919);
    msg.setSource(19449U);
    msg.setSourceEntity(172U);
    msg.setDestination(23263U);
    msg.setDestinationEntity(26U);
    msg.sys_name.assign("VXAORJSXJTSNOGHAJPERMMOQKOUOJIHCKRFSIKYZTDAWVAPVBIYIYTTCIGZHMUDFFDZPHNQFIEKFWCQLWNBEAACTIEXZBQYKTWZERRTDFZMTQFK");
    msg.sys_type = 44U;
    msg.owner = 60874U;
    msg.lat = 0.122030464733;
    msg.lon = 0.577180969126;
    msg.height = 0.911094090376;
    msg.services.assign("KDXJSRHUPYYAQTBKGPWEAFWXBAXGJZHIZKVEBJRMIYLRBIELMIFHJYYOONUHFKSDKTCVRSSPGJLNAUQSBASMENEWLIOUNMTBADVQEPMHQOGCLHUKZVJNPCRHXHFNBBTEWOTCQCQAFPNJKXJYOMMXHGUWZLZLIFYRWXQLNAPQPUYOZKBCCVNLGTCHUOFDDRFWJDZWONSPVRXRZYSCDOTFGLWJIGDCYKPZQ");

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
    msg.setTimeStamp(0.286603316132);
    msg.setSource(8051U);
    msg.setSourceEntity(63U);
    msg.setDestination(36107U);
    msg.setDestinationEntity(75U);
    msg.sys_name.assign("RIVMEENITNOJLFJZCRLQNTFKSLWFJVYWBHBJKZFMDALNRZOPAUAZHJQTKTGDRWVCBWREIUFGCAQJFZVUEYVQXLVLWVBADOVYVKWVXRQMXMKXZGDEUCNQUUPIHXPWTDZCYKEZRXJ");
    msg.sys_type = 169U;
    msg.owner = 10468U;
    msg.lat = 0.0733683276549;
    msg.lon = 0.776510379394;
    msg.height = 0.834562641773;
    msg.services.assign("EDWFEVXVXFHZZUATKZFSLSXLQGQBKZNOMCHGQEBXEJFMPXNNGQIBQTHRUAPOEPRIDVBBMWOTKLAPJPFDJNLVQXFKPRYDWWOCRXIODLHYBLRNSEMCWTWYJAQISYKKMCLEPVGTOZRLSMFIUJUPUUTYAMUQWDZVARPJDECHDOBGYAYSZBZFMGJHZTRJ");

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
    msg.setTimeStamp(0.158668995825);
    msg.setSource(63662U);
    msg.setSourceEntity(192U);
    msg.setDestination(28573U);
    msg.setDestinationEntity(187U);
    msg.sys_name.assign("GRYOGHNTBJNEUBCUIDVXJYUMVXQTBYWEXAKXRJWPDWBNDUASACFDJRSYUUQWKMEFKQIENMWORQFUEIVHHGCYLPHJPBJLFKSNEGTXROGHEGVZFBZLSAPNTCVKEYTAPATDRZGDZ");
    msg.sys_type = 90U;
    msg.owner = 40993U;
    msg.lat = 0.944741798657;
    msg.lon = 0.89437140048;
    msg.height = 0.843269619042;
    msg.services.assign("KPRRIGZRKNUBLRQUUUJCMWTTOAJNZSVYASCODFBVIJPPWFHITASKZUAKHENMGJCFSVBWRWQIVJDSX");

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
    msg.setTimeStamp(0.127254384595);
    msg.setSource(19262U);
    msg.setSourceEntity(184U);
    msg.setDestination(1381U);
    msg.setDestinationEntity(127U);
    msg.service.assign("KNAROMORKSWKWCNHGAOROSRSYWOUIEYJOQIOXJIJWBHNROYKCUEZQPSEDRBXPHEZRGVXQDHFLUKCFEAFMHDFUNMDDLHQTCYVRSXMJFIIYNCFVMWEHPIUYKOATFJWPFSQKWVJGZKXYDTXSBAGMVAXTXDNBUZZGJGLQAELATSKYBMEGVMJHAZGPLCLPVLZGVNKXZNLTCCELUCPEUIQBQBZNWBWUCPAVMZIHHDJTND");
    msg.service_type = 22U;

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
    msg.setTimeStamp(0.0958205221233);
    msg.setSource(28718U);
    msg.setSourceEntity(192U);
    msg.setDestination(43067U);
    msg.setDestinationEntity(12U);
    msg.service.assign("JINFCPJBSCYYVNREHFFSEOZXOWMDRYBUBFIORKAHCIVDPQYZKEVDOWJCKFSZBAKSPVQACQDIXNGKMRBUTGLEDGQZGUYNXFHJZYPXJHFRPLWDATDTZROKHSILMAXTNJPYNDOIWEALECNABIVYBXARUCPCYNC");
    msg.service_type = 106U;

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
    msg.setTimeStamp(0.233498359518);
    msg.setSource(24081U);
    msg.setSourceEntity(58U);
    msg.setDestination(3419U);
    msg.setDestinationEntity(57U);
    msg.service.assign("IJJZCUSDHJYCACRKSQLOEDOSFDPN");
    msg.service_type = 115U;

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
    msg.setTimeStamp(0.320152475201);
    msg.setSource(4336U);
    msg.setSourceEntity(42U);
    msg.setDestination(13668U);
    msg.setDestinationEntity(155U);
    msg.value = 0.268504669245;

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
    msg.setTimeStamp(0.0776329423302);
    msg.setSource(7411U);
    msg.setSourceEntity(151U);
    msg.setDestination(16502U);
    msg.setDestinationEntity(157U);
    msg.value = 0.760264473266;

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
    msg.setTimeStamp(0.806515365176);
    msg.setSource(57513U);
    msg.setSourceEntity(232U);
    msg.setDestination(3757U);
    msg.setDestinationEntity(203U);
    msg.value = 0.396885825772;

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
    msg.setTimeStamp(0.348928929222);
    msg.setSource(60004U);
    msg.setSourceEntity(229U);
    msg.setDestination(60040U);
    msg.setDestinationEntity(201U);
    msg.value = 0.53216221166;

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
    msg.setTimeStamp(0.954741677283);
    msg.setSource(16584U);
    msg.setSourceEntity(140U);
    msg.setDestination(20084U);
    msg.setDestinationEntity(124U);
    msg.value = 0.0413336570207;

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
    msg.setTimeStamp(0.961630135549);
    msg.setSource(57731U);
    msg.setSourceEntity(53U);
    msg.setDestination(12097U);
    msg.setDestinationEntity(73U);
    msg.value = 0.703129627795;

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
    msg.setTimeStamp(0.271561723755);
    msg.setSource(53496U);
    msg.setSourceEntity(192U);
    msg.setDestination(41227U);
    msg.setDestinationEntity(143U);
    msg.value = 0.0945516859968;

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
    msg.setTimeStamp(0.245583303867);
    msg.setSource(26575U);
    msg.setSourceEntity(82U);
    msg.setDestination(43439U);
    msg.setDestinationEntity(178U);
    msg.value = 0.391564723676;

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
    msg.setTimeStamp(0.411871428931);
    msg.setSource(10168U);
    msg.setSourceEntity(160U);
    msg.setDestination(16742U);
    msg.setDestinationEntity(202U);
    msg.value = 0.465487419204;

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
    msg.setTimeStamp(0.198921983066);
    msg.setSource(65133U);
    msg.setSourceEntity(86U);
    msg.setDestination(21408U);
    msg.setDestinationEntity(199U);
    msg.number.assign("OMGSBBYMCDZWGAWWBUHITOFUHFPFJA");
    msg.timeout = 20520U;
    msg.contents.assign("OYSPQSRTOKYZYTAXYBUPUYOJLKVJHMUNEJVBPMHXMFIPIWDRHBIT");

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
    msg.setTimeStamp(0.881362664382);
    msg.setSource(46892U);
    msg.setSourceEntity(45U);
    msg.setDestination(21212U);
    msg.setDestinationEntity(159U);
    msg.number.assign("LMWQDFXFAVPJAQGLTMLDALEKEIVUFGZBIGCJMHXRSSIODEHYDRPZIFYVVSUCEPTDRJMKCXUSN");
    msg.timeout = 31766U;
    msg.contents.assign("YVHCJOCVFUDTCYDYTPMRBQJFLGRSEOUDGNSEVAUJFHWLTXRCGFWUTNPUNYZWJIIMTVUEZUUBONXSEQFGAPMEHTFKIHIZCXQBNKKWFYBGCIGZPHCALXJEBOAPVAVAJTUDGWHRDMKMKH");

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
    msg.setTimeStamp(0.654395385033);
    msg.setSource(41726U);
    msg.setSourceEntity(150U);
    msg.setDestination(37863U);
    msg.setDestinationEntity(165U);
    msg.number.assign("DBUBOUPJVC");
    msg.timeout = 15451U;
    msg.contents.assign("BBWJFBYUKQJQPXWIYHEQZOWJLAASYEOYHWUMHCBXNLPLXOLRZMZSOMGEPPJGHIUVNQGZOHKNMQWZZOBFOJFHBPRDRVICBAKSVDGQEQSIVEPBBYTLNSSCCVIDNCKFVFRNLRWZTAVEXOBCNYTRTXZERTALKFDUDJXUWXKSTKGIPUCMRXDIHYMD");

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
    msg.setTimeStamp(0.236416567848);
    msg.setSource(28070U);
    msg.setSourceEntity(135U);
    msg.setDestination(42141U);
    msg.setDestinationEntity(75U);
    msg.seq = 1399512647U;
    msg.destination.assign("DHJBSQFOLWODFTTGYZPCLYXKZWGSKJYOQFVGWHFPTIOMNKXPULSZZRHJIBYPFSMJBSIHJRIMFZKYODADUOCLHEHSICMQBXJEVDBEFWIZBGTREUGZEERKPFWZSTXCLJZMXQCTEQQCUBSPMDIIUAVNUHKBXXGUNCZMFKBQJYWRNNUGLPRASQWNXTLVJWMJUYECNXU");
    msg.timeout = 45574U;
    const char tmp_msg_0[] = {-79, -98, 91, -33, 34, 10, -95, 119, -36, -72, 10, 111, -50, -107, 1, -97, -5, 111, -78, -17, -93, -66, -12, -63, -3, -8, 56, -111, -78, 69, 73, 56, -100, 17, 56, 32, 118, -85, 105, -20, 24, -78, 35, 65, -84, -23, -85, -45, 45, -10, -78, 96, -118, -60, 121, -59, -122, 119, -6, 57, 49, -68, 4, 118, -80, 82, -64, 111, 96, -22, 41, 10, 41, 69, -47, -93, 37, -58, -79, 76, 83, 53, 45, 22, 13, -11, 91, 38, -95, -79, -95, -28, 46, -112, -94, -29, -57, 31, 106, -118, -13, 90, 99, -81, 49, 5, 13, -102, -4, 97, -11, 103, 124, -56, -51, -113, -16, -45, -40, -84, 66, -7, 74, 55, 7, 37, 120, -87, -127, 120, -7, -63, 49, 117, -56, 12, -116, 79, -93, 84, 79, -79, 98, -4, -87, 105, -123, 58, -111, 93, 31, 6, 77, 69, -21, -57, -33, 0, 63, 70, -2, -58, -34, 26, -25, -69, 2, -71, 26, 105, 99, 15, -61, -15, 48, -48, -56, -126, -96, -14, -41};
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
    msg.setTimeStamp(0.917429884109);
    msg.setSource(17476U);
    msg.setSourceEntity(136U);
    msg.setDestination(9802U);
    msg.setDestinationEntity(241U);
    msg.seq = 1700428624U;
    msg.destination.assign("DYBQYZKHBIQBGHRSFKKXZTGDZKMKHQOVFUIWVHLCPWTAFRENYWOFNVUZOEFKQERTUBGBITYACIGWEORCMSPAXJPGAFDDPZVMBLXUYXXEZFUKYFDOBSACWNYOXJQLIMAEMHLIWONJJSOVPHIMRAGERRNTDH");
    msg.timeout = 51590U;
    const char tmp_msg_0[] = {-7, 36, 110, 31, -116, -67, -77, 116, 67, -4, -51, -7, 13, 78, -10, 54, -88, -55, 116, 13, -7, -28, 74, 78};
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
    msg.setTimeStamp(0.188004409377);
    msg.setSource(55935U);
    msg.setSourceEntity(217U);
    msg.setDestination(57254U);
    msg.setDestinationEntity(164U);
    msg.seq = 3469915331U;
    msg.destination.assign("UYVUCIFIWHAWBIHEAXIOUERJUHNHJMOTYLGMHPQLRJPWRQFBMDLMYLSQORVQXVTAGNUWAXILINWAJKVTSTTXXFRJNJDMAGJVGZNTHKQTLJDKFGSEGRKSSFEDOFSBBSVDGOFVLCMODXNPLWKGYZCXBYRKMODPUTKV");
    msg.timeout = 44641U;
    const char tmp_msg_0[] = {-113, -64, 108, -115, 12, 110, -17, 14, 97, -13, 13, -106, -19, 105, -44, 70, 47, -79, -58, -87, 119, -56, -7, -106, 97, 63, -115, -71, 111, -115, 30, 93, 6, -104, -20, 36, 17, 4, -63, -92, 17, 64, -116, 59, 65, -24, 59, 114, -18, -9, 55, 1, -75, 117, -88, -19, 97, -69, -67, -124, -33, -52, -85, 89, 25, -26, -120, -91, 25, 66, 121, -16, 117, 90, 107, -24, 95, -28, 106, 17, -52, -126, 75, 13, 63, 93, -39, -95, -119, -48, 26, -84, -55, -104, 87, -11, -66, -119, 66, 88, 36, -110, 84, -48, -8, -19, 15, 76, -71, -3, -128, -95, 81, 16, 34, 14, -9, 59, -94, 87, -71, -97, -69, -59, -31, -57, -106, 48, -116, 59, -13, 122, -94, -63, 109, 63, -5, -22, -124, 84, -82, -67, 24, -106, 55, 113, 117, 114, -27, -31, -22, 103, 114, 71, 19, 98, 44, -71, 107, -87, 120, 43, 39, 85, 95, 7, 113, 38, -46, 46, 95, 83, 67, 15, 59, 82, -32, 120, 118, -16, -14, 53, -5, 65, -112, 105, -3, -108, 11, 36, 74, 105, 80, -123, 39, 33, -111, 36, 18, 33, 113, 84, -2, 1, 104, -25, 92, 100, 9, 96, 112, -71, 30, 90, -28, -3, -42, 67, 105, 106, -74, -81, 89, -124, -9, 19, -4, -52, -75, -58, -119, -117, 3, 99, -75, -3, -112, -75, -8, 109, 70, -115, -115};
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
    msg.setTimeStamp(0.495190849698);
    msg.setSource(44408U);
    msg.setSourceEntity(7U);
    msg.setDestination(20362U);
    msg.setDestinationEntity(0U);
    msg.source.assign("ECXVVVVQQIEGEDUTRSGBNIWRSJYLXRXQAPFNUGTJXDDYDJEFARRYXOIXLLYPQCEDHSBDPKWQHQSNIQXATLVWMAUMHNAVCUULJTUIUZOVLZRHAPKSEFVTQWRUBZKOHBBKYRCYPECGOWKFGPKJHFZLCZSIDGAWYRATMMXJKEBLOGNIDSXQNORMMQ");
    const char tmp_msg_0[] = {13, 63, 107, -5, -102, 1, 26, -69, -66, 66, -20, 94, 49, 71, -61, -100, -44, -86, 43, -122, -105, -44, -14, -73, -121, 124, -98, 16, -52, 91, -90, 84, -100, 91, -39, 59, 67, 124, 77, -96, 55, -119, 91, -4, -40, -102, 42, 29, 113, -108, -123, 43, 86, -111, 98, -41, 45, -24, -122, -111, -36, 108, 24, 69, -47, 48, -25, -120, -117, -72, 41, 1, -41, 87, -85, 81, 29, 13, -111, -40, -105, -30, 82, -56, 111, -106, 100, 68, -39, 76, 15, 53, 114, -90, 122, -89, 12, 47, -86, -120, -84, -91, -7, 58, -72, 75, -63, 3, -125, 14, -14, -54, 70, 82, -55, 57, 81, 69, -51, 106, 69, -119, -72, -105, -54, 14, -39, 108};
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
    msg.setTimeStamp(0.958354693081);
    msg.setSource(46102U);
    msg.setSourceEntity(234U);
    msg.setDestination(44247U);
    msg.setDestinationEntity(209U);
    msg.source.assign("HUCZYSLJZUPIJRFKGFMDLVYJJTUKWGAPHVYHGVOUBDZNIBLALAORS");
    const char tmp_msg_0[] = {89, 110, 11, -109, 44, 24, 91, 22, -90, 29, 78, 73, -117, 105, -125, -10, -73, -57, 105, 70, -15, 114, 88, -88, -94, 11, -120, -77, 97, 82, 40, -105, -51, 74, 101, -121, 41, -64, -1, -4, -126, 99, -99, -118, -59, 103, 27, 29, 49, 20, 38, -93, -95, 78, -29, -90, -109, -109, -105, 62, -38, 116, 103, 118, -110, 120, 33, -76, 62, 2, 102, -95, -61, 13, -80, -60, -3, 87, -102, 39, 23, -101};
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
    msg.setTimeStamp(0.543225234361);
    msg.setSource(20522U);
    msg.setSourceEntity(134U);
    msg.setDestination(31776U);
    msg.setDestinationEntity(235U);
    msg.source.assign("SLIVADEXWRDCZHKTRTNHUDKGFXKOKFRPREKQNITVVPAVMSTSDLXVBPAOKPSSMLUEVAWTAGJXIYHQHMYRZYUOGDSABUDWVSIGJBSUNKWMLMJOMQMHHHGNKNQVONUUELHZJPEYFCVXYOQTJZLWJCSGXYYDZQXCCFURRORWP");
    const char tmp_msg_0[] = {-35, -114, -38, -47, -78, 2, 41, 64, -108, 81, -87, 115, 66, 125, 55, 5, -113, 100, 1, -15, 44, -7, 74, 18, -80, 87, 68, 62, -29, -106, -34, 105, 4, 116, 98, 10, 23, -24, 102, 72, -83, -88, 30, -6, -56, 66, 10, 54, -90, 111, 15, 65, -122, -25, 113, -115, -40, 59, 42, -81, -89, -90, -27, -69, -120, -15, -61, 50, 124, -41, 24, 96, 96, 87, -90, 82, 117, -124, -5, -63, -29, 54, 23, -82, -87, -9, -119, -36, 119, -121, 37, -38, -83, -43, 97, -80, 52, -71, -59, 86, -126, 117, -36, -78, 9, 4, 72, 121, -12, -87, -126, -18, 104, -62, 40, 27, 110, -99, -2, 122, -27, -11, -68, 51, -31, 87, 31, 61, -17, 80, -43, 98, -86, -117, 89, 106, 65, 95, -78, 52, -121, 26, 118, -10, 80, -73, -98, -90, 126, -78, -31, 32, -85, -110};
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
    msg.setTimeStamp(0.581980109417);
    msg.setSource(48150U);
    msg.setSourceEntity(187U);
    msg.setDestination(48380U);
    msg.setDestinationEntity(100U);
    msg.seq = 2898143009U;
    msg.state = 103U;
    msg.error.assign("LMZXZKDMRFCTXPJYSEDJSPYGAGDADUHQVWJMLVOEGWVGVCGBHKKNTCOUILFCJBNZCTVXANHWCIFFUXHWNIJQDKTBYPRGSYOBQIOSKLMHWEHGMOPVZXNPIUWTUIPBEKUWLZNNBZSQTDOVHGFSOQOFYAYMLDFEKWCYJRRYNVILTZWBRNYTYSHQPBXBXUQEUGAGEQALMUPIRAWSHNTKZZFJHB");

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
    msg.setTimeStamp(0.811242349736);
    msg.setSource(6665U);
    msg.setSourceEntity(60U);
    msg.setDestination(29987U);
    msg.setDestinationEntity(118U);
    msg.seq = 276087458U;
    msg.state = 111U;
    msg.error.assign("KTYPJCQJFWKSOFLILQRGHHSZWREUHLSJVDTMUBJCWJEJJLXSQBNDDWYXPYSLWWNIOMKBBQCIECVFODLSVNKJPHLUIQOABKFXFCCEYXEVEGDGPGGMAAXVKDKPAYPUUQGEJCFVINVXTNFHXRYDLYJTMIAOHTIZGXIVARYPKKAFMQDR");

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
    msg.setTimeStamp(0.809206023858);
    msg.setSource(661U);
    msg.setSourceEntity(19U);
    msg.setDestination(44597U);
    msg.setDestinationEntity(244U);
    msg.seq = 2078144036U;
    msg.state = 236U;
    msg.error.assign("YNSMTDBFFZQIQGYESOSQPZVAKUVJPCAPFBBWT");

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
    msg.setTimeStamp(0.817817604768);
    msg.setSource(65147U);
    msg.setSourceEntity(64U);
    msg.setDestination(12892U);
    msg.setDestinationEntity(157U);
    msg.origin.assign("JYVWLUVBHMCPJENTZVJDUDOJTUEJFQUBPWKRCOFZNJALQVONZWUMKGQSSWZFXGVOHFB");
    msg.text.assign("TWQEBKNUWPPBONSITRNGGRZRDOXOLJIWXKATV");

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
    msg.setTimeStamp(0.308577644142);
    msg.setSource(53927U);
    msg.setSourceEntity(232U);
    msg.setDestination(35062U);
    msg.setDestinationEntity(61U);
    msg.origin.assign("QGUKWCMZHJYWMIHKRGEZFQZNIERFHIXPDPXCLLJOPOYSMBWGQXHKDTFUXCGSCKXSRQEKNBRCQYKHBWPUXIBXYUYDVAUAMSZMZTFWFYGJZATELDQKUIDAJKYXVNVTXISVPWNCYVBLSUVNPLBALFOOIRNDOBHZVBSIEGWTYVSOZDTRDGGWNHPVSEMJQEA");
    msg.text.assign("UUGLQSADANYCBBXTLTZOMWEHJLFRUIMGKVNCOMQMOJZPADEUBIOZTXELBXDKMBKUBZOTMFQVSFFQMP");

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
    msg.setTimeStamp(0.578321261338);
    msg.setSource(9486U);
    msg.setSourceEntity(144U);
    msg.setDestination(51896U);
    msg.setDestinationEntity(135U);
    msg.origin.assign("EOTHEJWGCWWKJQDIF");
    msg.text.assign("IXEWOPUSDDUBPWJFWQFHPNQUNFZBSASARAXMGTCLKYJLRRJYVXVEM");

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
    msg.setTimeStamp(0.314524436179);
    msg.setSource(53251U);
    msg.setSourceEntity(204U);
    msg.setDestination(32661U);
    msg.setDestinationEntity(225U);
    msg.origin.assign("KGATXYTYNJUZVUAJGOTSTSCSOILFUCSWSLSHLFWJCYBKJSNHPWIEBRDBTCEMPYNCDVJZXFFPLRVOUZCXZUOJLKDAPAMPDGXCFBSWJNIMUPIXATGLQRTQKBDZHHPKSSEQO");
    msg.htime = 0.838929019105;
    msg.lat = 0.0223700222583;
    msg.lon = 0.189056134615;
    const char tmp_msg_0[] = {-104, -51, -19, 68, -127, -46, 0, -79, 49, -26, -100, 122, 49, -23, -126, -66, 62, 5, 33, 85, -73, -97, -15, 70, -69, -28, -60, -101, -120, -29, -126, -98, 10, 113, -124, -15, -57, 28, 12, 47, 71, -78, -74, 92, -74, 24, 26, -43, -83, 2, -120, -47, -58, -124, -41, -43, -58, -72, -36, 114, 16, -34, 94, -127, 37, -69, -99, -36, 125, 108, -11, 34, -7, -2, 94, -53, 22, -93, -13, -21, -79, -43, 72, -83, 119, -12, -9, 9, -24, 101, 52, 32, -119, -36, 33, 122, -17, -122, 41, 28, 33, 6, 87, 110, 7, -43, 33, 19, -114, 32, -3, 6, -24, -18, -123, -63, -128, -24, 64, 112, 7, -66, 114, 66, 120, -86, 59, -1, 112, 120, -127, 121, 13, -19, 14, -56, 51, -86, -61, 39, 35, 56, 46, -53, -111, -14, -58, 100, 121, 93, -52, -2, 102, 81, -15, 6, 41, 69, -69, 109, -99, 74, -119, 21, 43, 67, -14};
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
    msg.setTimeStamp(0.184252178073);
    msg.setSource(53765U);
    msg.setSourceEntity(184U);
    msg.setDestination(25317U);
    msg.setDestinationEntity(53U);
    msg.origin.assign("PJXGYMHFLAVNYYPRAYJAXLOINUMQIIRJVBIVKWSXDUYKUJHCGQLHQWVABZQEKYHNCQFFOEFXMDPURENULIRMLOLSMDMERBHIWQZFGVAZANMOJJDNPBZJFCCNKRVBCEWSOTSVDJGZWWZEXCDTKYTIRUJBCEGTXFRDBNUIDVNOFUQXZHARMHEPSNKTPKWQULPYAGHTSZPGJEGFUQPKWYCPOMOTSS");
    msg.htime = 0.929299180211;
    msg.lat = 0.859464172578;
    msg.lon = 0.0259117005584;
    const char tmp_msg_0[] = {122, 115, -84, -81, -109, 9, 110, 23, 53, 43, 35, 8, -39, -35, -103, 35, 123, 109, -122, -123, 25, -18, -77, 53, -103, 2, 7, -20, 18, -34, -58, 12, -59, 104, -42, -34, 64, 24, 78, -116, -128, 104, -49, 56, 121, -16, -89, 28, -38, 74, 77, 62, 45, 81, 50, 80, 81, -85, 38, 118, 16, -57, -50, -53, 22, -56, -54, -62, -31, 5, -91, 85, 22, -115, -86, -32, -115, 52, 18, -28, -42, -124, -16, 34, -19, 125, 6, 0, -62, 62, -13, -15, 51, -33, -49, -58, 40, 27, 86, 67, -43, -57, 115, -18, 64, -31, 71, 67, 13, -63, 23, 57, -120, -123, -94, 72, 24, -76, -3, 112, -32, -119, 7, -30, 96, -115, -120};
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
    msg.setTimeStamp(0.573515946851);
    msg.setSource(62410U);
    msg.setSourceEntity(68U);
    msg.setDestination(13883U);
    msg.setDestinationEntity(63U);
    msg.origin.assign("ZVQRGZFWLNYQZAMALISJPSSABQGBHOPPNULLGEKRRXOYWNDMNPUWEGOUDCEGNUXLVAHMAIWDSKZJEHDRIGYYZXJSKGYHVCBEDCTFKCZWAMKDMRHTJYMIDHCVJGPPIQPVYQBLQMQJVTZXEADANWF");
    msg.htime = 0.270747099393;
    msg.lat = 0.535462539557;
    msg.lon = 0.033357431768;
    const char tmp_msg_0[] = {80, -117, 14, 72, 6, -43, 93, -65, 74, -48, -17, -11, -117, 109, -85, 49, 54, -60, 1, 92, 101, 61, 124, -46, 85, -35, -43, -117, -124, 46, -83, 24, 40, 15, 1, -105, -21, -85, 43, 116, -22, -64, -52, -104, 3, 14, 69, -80, 59, 103, -113, -65, -37, -24};
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
    msg.setTimeStamp(0.300976110651);
    msg.setSource(28842U);
    msg.setSourceEntity(72U);
    msg.setDestination(19887U);
    msg.setDestinationEntity(137U);
    msg.req_id = 573U;
    msg.ttl = 35868U;
    msg.destination.assign("FHQNVVMIKBZTTNJDDHXOOOZALGTPBWBCWYVEEZPFQRQKYOPLJTOJFSPAWMMSLJGYLMGNIRKSCLZVUIJPAMCGDARWHVICXWZAXQYJEDKJWGANZRDHNLUPCFMXSLLYSDYWGQOUBNDDKZQIXVHFEOE");
    const char tmp_msg_0[] = {-117, -4, -88, -80, -44, -123, 107, 125, 30, 34, -22, -114, -15, 51, 107, -37, -15, 91, -109, 18, 52, -122, -118, 118, -69, 82, -101, -28, 104, 39, -78, 87, 108, 80, -122, 111, -45, -63, -99, -48, 124, -2, -11, 29, 96, 52, 118, 124, -88, -45, 118, -51, -43, -52, -71, -22, -104, 90, 22, -30};
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
    msg.setTimeStamp(0.621576995974);
    msg.setSource(41625U);
    msg.setSourceEntity(26U);
    msg.setDestination(33008U);
    msg.setDestinationEntity(178U);
    msg.req_id = 43705U;
    msg.ttl = 18552U;
    msg.destination.assign("ZNMTOXQNMJIJYHFJZPMRCEQNHLNOUVEWEGESVQUMTETJVOETGJPIGJBFMURWBJZKBYWPQQXWPAVLIEAVOUPLDHOXVZYXNYKDWRZWKHRMMOVXCVYECHKANMZFYLXZGSTIDYDPHJCWKOCGFFINPIAZFBFZOLCCKMRLFIECTDMX");
    const char tmp_msg_0[] = {-93, 29, -24, 78, -39, -58, 78, 74, 113, -51, -24, 30, 64, -15, 66, -40, -83, 111, 40, 65, 89, 94, 29, -60, -33, -40, 73, 33, -15, 53, -104, 104, -115, 44, 76, -1, -81, -87, 84, 76, 96, -13, -34, -18, 21, 88, -90, -48, -48, -63, -94, -2, 78, -112, -48, -69, -127, 2, -47, -47, 96, 88, -30, -111, -26, 55, 59, 45, -31, 85, 15, 125, 122, 114, -9, 4, 85, 94, -99, 75, 65, -84, 124, 47, 96, -110, 42, 105, 109, -80, -99, -108};
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
    msg.setTimeStamp(0.381560528623);
    msg.setSource(39874U);
    msg.setSourceEntity(134U);
    msg.setDestination(26774U);
    msg.setDestinationEntity(220U);
    msg.req_id = 46863U;
    msg.ttl = 24436U;
    msg.destination.assign("VFHJZAWYAKYDQBDSTFFHBZBMEUSGCFZOOOPIMLTPNIBPKXOLIHAJIFVANVZNLWOQBTDFYNKXSBZUC");
    const char tmp_msg_0[] = {29, 114, -63, 94, -58, -102, 41, -58, 10, -71, -81, 22, -15, 39, -6, 42, -5, 64, -104, -5, 5, 105, -4, 77, -118, 126, 78, -29, 110, -62, 73, -108, 69, -52, -38, -109, 24, 70, -53, 73, -55, 69, 69, -72, 104, -20, 98, 118, 86, -79, -18, -110, -83, 20, -21, -61, 121, -81, 114, 24, 124, -96, -104, 15, 103, -102, 76, -78, 71, -100, 40, -32, -14, -83, 58, -3, -31, 111, -24, -17, 22, -89, 57, 30, 17, 102, -63, 71, 78, -2, -79, -45, 71, 111, -83, 100, -106, 3, 9, -25, 72, -70, -128, -78, -18, -79, -56, -113, 42, -16, 87, -98, 83, 110, 0, 71, 82, 33, 85, -36, -116, -75, 0, -60, -102, -39, -74, 97, 71, 55, -29, 117, -67, -72, -102, -112, 51, 61, 89, 20, -23, 43, -117, 97, 122, -35, -7, -65, 76, 115, -50, 102, 7, -24, 99};
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
    msg.setTimeStamp(4.55836576881e-05);
    msg.setSource(60153U);
    msg.setSourceEntity(36U);
    msg.setDestination(34276U);
    msg.setDestinationEntity(136U);
    msg.req_id = 13497U;
    msg.status = 245U;
    msg.text.assign("VWZLUWMEKDFPSAPFSDHIAXGDPOSLUFGUOQSMLAECDAFEXTGNBCMWPTNPXRZEIMFYYTBNKZDXEJFVQEJTWAGJEQXIOEKCJWZVYCDDQIUHEZNPBRVIHRUCMZBBWQONENCRARFTJIVUXBFGJNXYLAQQHA");

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
    msg.setTimeStamp(0.523371967972);
    msg.setSource(50178U);
    msg.setSourceEntity(120U);
    msg.setDestination(57226U);
    msg.setDestinationEntity(73U);
    msg.req_id = 52103U;
    msg.status = 137U;
    msg.text.assign("FDUZXJYFKBXSZCVCLRJTJMRQABLGFCALNSZHFJHOZIFSDOXJGRPEEAVKKBNOUYHFRWNPCIZTHOMKOT");

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
    msg.setTimeStamp(0.343326032488);
    msg.setSource(53303U);
    msg.setSourceEntity(47U);
    msg.setDestination(22505U);
    msg.setDestinationEntity(176U);
    msg.req_id = 46957U;
    msg.status = 207U;
    msg.text.assign("GGHQAMCDUSOLTZMDSLKAMXNIUVLYPHASZWWPZFVBVCFYULJXTCDHTPQKTMOEWRPZCQAWGLKKQHPFRAPBMSEHGEYXRHMNBJCXZIZNDXFOMHOFIZSUU");

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
    msg.setTimeStamp(0.93409878887);
    msg.setSource(54644U);
    msg.setSourceEntity(159U);
    msg.setDestination(34800U);
    msg.setDestinationEntity(209U);
    msg.group_name.assign("GVXMMHQVSYHADZRTHMJJDMSGRWJRPSKWHOCGPTAFGNGUMRMLTYAQSRVBUCAJWZRPPAALQPFBYEXI");
    msg.links = 950052379U;

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
    msg.setTimeStamp(0.282579249565);
    msg.setSource(4037U);
    msg.setSourceEntity(108U);
    msg.setDestination(48359U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("ZVBXTTMNIMWBOOVCNWCLPMKOIHXSDYDHQREEDJGLDSWXMAYZBOHBVBFHDLONZQJSPKERRWFUUOFLBCOHYPGRJLQYGNKPUAZCKITVCLVN");
    msg.links = 1165684947U;

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
    msg.setTimeStamp(0.218249079976);
    msg.setSource(61185U);
    msg.setSourceEntity(114U);
    msg.setDestination(15552U);
    msg.setDestinationEntity(80U);
    msg.group_name.assign("MCSLWDPMDIVMHUFWBJWNVRGFVWN");
    msg.links = 3402198828U;

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
    msg.setTimeStamp(0.596216399893);
    msg.setSource(55310U);
    msg.setSourceEntity(36U);
    msg.setDestination(24217U);
    msg.setDestinationEntity(157U);
    msg.groupname.assign("IOPTQYGJMLEGRZNCYHMMJESPDRQOUHHUNPTUGRUQQXZXFNCWLJRNMISWIZSTTHHBLRLIWLCYRXHWBZHJUZEBVRQGFNQDKWKEBZJKCSIDMJQAQNOAAESEZXYG");
    msg.action = 99U;
    msg.grouplist.assign("KTEFRZZJBATW");

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
    msg.setTimeStamp(0.604103586459);
    msg.setSource(23373U);
    msg.setSourceEntity(174U);
    msg.setDestination(49373U);
    msg.setDestinationEntity(142U);
    msg.groupname.assign("GGLANVREOSIKXWYCAJKLLEEDHXJXZJXVGVJVSPPMDCAIGSITTYQGUUKBKFZJMBADDRAYBRTQGONFFSIUWXBEZCGTPFQRKBFMRHXJLULXQTCWROKWNGHQMTIJEFOSAQHDSZAJPLZMSQBYHXMZKROWDLUWKEOVFCTVWAXQNZFSRUJLEIWYICDZOSFYMKHBIVMRWIMPHLNXCNPOEYUYZB");
    msg.action = 248U;
    msg.grouplist.assign("CDTJDGRUOOXTJOJTULXGQYRQXBDYSIPGNBELWMPXWLHXOAGQUYSSBKMAKVMXHVB");

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
    msg.setTimeStamp(0.339953368139);
    msg.setSource(539U);
    msg.setSourceEntity(252U);
    msg.setDestination(50009U);
    msg.setDestinationEntity(215U);
    msg.groupname.assign("KIUHOMZFAWGDJFUJCJOEIAVRBQZITYUNEHARHWDPFCBAVYRIZKYKPMXOILTVWNUTZOVBPCXYJGSRUAWSXDCLOMPAOFHSCAWVKBSXBJCQQUYJLZZMSSOTSWJHRNEEDPBVQMDGGZYFIAEZRRTUMAJUYWHZQLPGXDLNXQSTBBKSJTTNGWEGDFDGUXWQRCFBVIF");
    msg.action = 207U;
    msg.grouplist.assign("LZHVDGHROLNWNKAEIEIMODQSUWBXBYALNRPJBWPFYXDDWGCSEIPBZNKMKQJZHZLYRQZNGYVUVIOXPVRNXWFCKJCMNSSSSTUPVFIRCFCHQHEAZSUHWCUBTTDJOLBTQEQYFRDBGTHMXSYGPWEOAOWUGIMPTQFKLZLJFKFDLKGHXHOIXAEVBDTOKRYRLXMFVYMXKCTAYCDQRJG");

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
    msg.setTimeStamp(0.230479707318);
    msg.setSource(9571U);
    msg.setSourceEntity(161U);
    msg.setDestination(27595U);
    msg.setDestinationEntity(99U);
    msg.value = 0.419331799206;
    msg.sys_src = 35163U;

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
    msg.setTimeStamp(0.0830100941962);
    msg.setSource(3884U);
    msg.setSourceEntity(214U);
    msg.setDestination(62721U);
    msg.setDestinationEntity(169U);
    msg.value = 0.993723734103;
    msg.sys_src = 9779U;

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
    msg.setTimeStamp(0.3626980361);
    msg.setSource(46015U);
    msg.setSourceEntity(250U);
    msg.setDestination(19075U);
    msg.setDestinationEntity(79U);
    msg.value = 0.0281896239399;
    msg.sys_src = 18597U;

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
    msg.setTimeStamp(0.273728400139);
    msg.setSource(30986U);
    msg.setSourceEntity(25U);
    msg.setDestination(49690U);
    msg.setDestinationEntity(139U);
    msg.value = 0.942054664265;
    msg.units = 224U;

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
    msg.setTimeStamp(0.364062366738);
    msg.setSource(34184U);
    msg.setSourceEntity(150U);
    msg.setDestination(7533U);
    msg.setDestinationEntity(104U);
    msg.value = 0.975600293342;
    msg.units = 11U;

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
    msg.setTimeStamp(0.685101500314);
    msg.setSource(28533U);
    msg.setSourceEntity(30U);
    msg.setDestination(15479U);
    msg.setDestinationEntity(11U);
    msg.value = 0.670673476277;
    msg.units = 189U;

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
    msg.setTimeStamp(0.236743790665);
    msg.setSource(23019U);
    msg.setSourceEntity(244U);
    msg.setDestination(35627U);
    msg.setDestinationEntity(127U);
    msg.base_lat = 0.473832813544;
    msg.base_lon = 0.696075879579;
    msg.base_time = 0.63773064956;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 15652U;
    tmp_msg_0.priority = 120;
    tmp_msg_0.x = 26605;
    tmp_msg_0.y = -21006;
    tmp_msg_0.z = -32489;
    tmp_msg_0.t = -13307;
    IMC::SetControlSurfaceDeflection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 82U;
    tmp_tmp_msg_0_0.angle = 0.0923287548675;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.937888102577);
    msg.setSource(15528U);
    msg.setSourceEntity(83U);
    msg.setDestination(3906U);
    msg.setDestinationEntity(48U);
    msg.base_lat = 0.852421401006;
    msg.base_lon = 0.388846400595;
    msg.base_time = 0.686598654668;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 29359U;
    tmp_msg_0.priority = 115;
    tmp_msg_0.x = 25999;
    tmp_msg_0.y = 314;
    tmp_msg_0.z = -27161;
    tmp_msg_0.t = 3605;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8052511731;
    tmp_tmp_msg_0_0.speed_units = 104U;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.532591968843);
    msg.setSource(33092U);
    msg.setSourceEntity(49U);
    msg.setDestination(56471U);
    msg.setDestinationEntity(103U);
    msg.base_lat = 0.081510073087;
    msg.base_lon = 0.760258503666;
    msg.base_time = 0.774591559518;

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
    msg.setTimeStamp(0.635920991694);
    msg.setSource(48857U);
    msg.setSourceEntity(32U);
    msg.setDestination(26397U);
    msg.setDestinationEntity(60U);
    msg.base_lat = 0.942239055486;
    msg.base_lon = 0.959793293184;
    msg.base_time = 0.766507595662;
    const char tmp_msg_0[] = {5, -108, 68, -115, -92, 36, -43, -95, -109, 99, 116, -13, 50, -36, 75, -48, -43, 49, -99, 105, 64, -19, 98, 61, 91, -63, 67, -65, -3, -70, -11, 61, 42, -11, 37, -4, 56, 45, 69, 18, 58, 101, -79, -52, 96, -92, -7, -27, 83, 73, -42, 29, -125, -51, -8, -21, -46, -51, 83, -124, 106, 73, 71, 16, 47, 55, 6, -50, -83, -6, -91, 119, 102, 86, 59, 120, 43, 21, 113, 50, 60, 15, -108, -93, 97, 30, -92, 46, -108, 92, 40, 84, 119, 40, 107, -113, 47};
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
    msg.setTimeStamp(0.94241853311);
    msg.setSource(46566U);
    msg.setSourceEntity(5U);
    msg.setDestination(63391U);
    msg.setDestinationEntity(106U);
    msg.base_lat = 0.317588408692;
    msg.base_lon = 0.0208424731574;
    msg.base_time = 0.166691593718;
    const char tmp_msg_0[] = {121, -10, -111, -8, -111, 116, -117, -44, -68, -13, 62, 10, -99, -79, 32, 24, 42, -20, 106, -20, 99, -88, -85, -90, 99, 35, -121, 91, 17, -60, 58, -60, -4, 118, -86, -117, -105, -55, -53, 53, 77, 79, -15, -127, 94, 68, 92, 118, -124, 25, -7, -19, 32, -53, 84, 56, 114, 84, -86, 120, -39, -41, -86, 32, 47, -126, -125, 106, 102, -128, -51, -71, 39, 17, 96, -46, 93, -29, 112, -86, 105, -3, -96, 0, 64, 27, -107, 68, -118, 11, -29, 51, -123, -66, 2, 94, 25, 80, 30, -28, -75, 91, -59, 124, 35, 9, -53, 59, -125, 85, 95, -88, -90, 125, 46, 74, 46, 90, -38, 58, -39, 23, -124, -35, 55, -44, 5, 24, 68, -82, -9, -101, -44, -43, -11, -82, -52, 98, -90, -16, -86, 11, -36, 48, -112, 95, 102, -93, 120, 83, 92, 97, -76, -88, 105, 92, -9, 87, -49, 66, 90, 77, 46, -67, -49, 41, 105, 116, -21, 43, -6, -109, 33, -97, 74, 11, 13, 112, 85, -51, 77, -78, 40, -58, -84, 63, -58, 52, 84, -95, -82, 20};
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
    msg.setTimeStamp(0.0504864772735);
    msg.setSource(24554U);
    msg.setSourceEntity(5U);
    msg.setDestination(37044U);
    msg.setDestinationEntity(179U);
    msg.base_lat = 0.94749952536;
    msg.base_lon = 0.331895681633;
    msg.base_time = 0.156952026485;
    const char tmp_msg_0[] = {-9, -52, -116, -9, -41, -40, 70, -60, -2, -77, -31, 115, -88, 79, -28, 39, -118, -26, 122, -97, 90, 40, -103, -127, 121, 76, -9, -84, 60, 52, -110, 65, 39, 108, 73, 117, -118, 87, 2, -85, -40, -1, -38, 7, 107, 2, 90, -125, -29, -17, 78, 27, -2, -10, 74, 126, 48, -55, -70, -78, -1, -73, 80, -68, -33, 81, 126, 18, -62, 43, 45, 88, -80, 83, -6, -56, 67, 125, 89, 62, -98, -37, -84, 60, -5, 118, -25, -9, 114, -9, 67, 86, 39, 46, -110, -70, -83, 42, -11, -62, -105, 105, 61, -116, -12, 30, 7, 53, -14, 21, 61, -91, -74, 62, -7, -1, -47, -77, 8, 7, -93, 78, 6, -109, -59, -117, -54, -11, 27, -87, 81, -30, -68, -37, -53, 2, -25, 104, 116, -113, 16, 76, 5, 23, 48, 74, 52, 80, -71, -47, -75, 14, 94, -70, 66, -62, -50, -5, 114, 4, 34, -49, 89, 112, 38, 57, -122, 119, -26, -79, 36, 46, 70, -120, 112, -97, 35, 30, -3, -58, -117, 117, 65, -82, 1, -45, 51, -36, 68, 42, 119, -63, -96, 28, -2, -47, 30, 56, -64, 43, 103, 26, 119, 19, -16, -122, -1, -125, -48, 43, 82, -5, 54, 31, 8, -11, 113, -29, -67, -1, 95, 13, -38, -117, -15, 112, -29, -77};
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
    msg.setTimeStamp(0.148076117526);
    msg.setSource(53328U);
    msg.setSourceEntity(237U);
    msg.setDestination(35332U);
    msg.setDestinationEntity(158U);
    msg.sys_id = 36116U;
    msg.priority = -74;
    msg.x = -3586;
    msg.y = -26671;
    msg.z = 13797;
    msg.t = 30794;
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.672659794661;
    tmp_msg_0.v = 0.0930434542098;
    tmp_msg_0.w = 0.706436615148;
    tmp_msg_0.p = 0.296202713095;
    tmp_msg_0.q = 0.782882931602;
    tmp_msg_0.r = 0.367963808834;
    tmp_msg_0.flags = 168U;
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
    msg.setTimeStamp(0.950529831294);
    msg.setSource(18321U);
    msg.setSourceEntity(136U);
    msg.setDestination(53240U);
    msg.setDestinationEntity(27U);
    msg.sys_id = 65265U;
    msg.priority = 53;
    msg.x = -9699;
    msg.y = 15556;
    msg.z = -26886;
    msg.t = -12210;
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 59U;
    tmp_msg_0.x = 40249U;
    tmp_msg_0.y = 39838U;
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
    msg.setTimeStamp(0.971796400099);
    msg.setSource(47246U);
    msg.setSourceEntity(111U);
    msg.setDestination(16087U);
    msg.setDestinationEntity(128U);
    msg.sys_id = 25214U;
    msg.priority = 29;
    msg.x = -30103;
    msg.y = -10670;
    msg.z = -32104;
    msg.t = 29538;
    IMC::TotalMagIntensity tmp_msg_0;
    tmp_msg_0.value = 0.0970561692371;
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
    msg.setTimeStamp(0.856166487687);
    msg.setSource(62595U);
    msg.setSourceEntity(185U);
    msg.setDestination(52847U);
    msg.setDestinationEntity(80U);
    msg.req_id = 53966U;
    msg.type = 65U;
    msg.max_size = 28284U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.945474538726;
    tmp_msg_0.base_lon = 0.506790074305;
    tmp_msg_0.base_time = 0.792654814789;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 50059U;
    tmp_tmp_msg_0_0.destination = 30386U;
    tmp_tmp_msg_0_0.timeout = 0.177629937095;
    IMC::FormationMonitor tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.ax_cmd = 0.72641261956;
    tmp_tmp_tmp_msg_0_0_0.ay_cmd = 0.467942615281;
    tmp_tmp_tmp_msg_0_0_0.az_cmd = 0.26521068967;
    tmp_tmp_tmp_msg_0_0_0.ax_des = 0.140885150579;
    tmp_tmp_tmp_msg_0_0_0.ay_des = 0.205853996068;
    tmp_tmp_tmp_msg_0_0_0.az_des = 0.536904899109;
    tmp_tmp_tmp_msg_0_0_0.virt_err_x = 0.593582028618;
    tmp_tmp_tmp_msg_0_0_0.virt_err_y = 0.849886997927;
    tmp_tmp_tmp_msg_0_0_0.virt_err_z = 0.502689816166;
    tmp_tmp_tmp_msg_0_0_0.surf_fdbk_x = 0.424504630383;
    tmp_tmp_tmp_msg_0_0_0.surf_fdbk_y = 0.106340822101;
    tmp_tmp_tmp_msg_0_0_0.surf_fdbk_z = 0.52512142789;
    tmp_tmp_tmp_msg_0_0_0.surf_unkn_x = 0.467443828347;
    tmp_tmp_tmp_msg_0_0_0.surf_unkn_y = 0.895123084962;
    tmp_tmp_tmp_msg_0_0_0.surf_unkn_z = 0.317509194472;
    tmp_tmp_tmp_msg_0_0_0.ss_x = 0.687088381452;
    tmp_tmp_tmp_msg_0_0_0.ss_y = 0.555444785932;
    tmp_tmp_tmp_msg_0_0_0.ss_z = 0.466339318954;
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
    msg.setTimeStamp(0.155253449694);
    msg.setSource(55269U);
    msg.setSourceEntity(43U);
    msg.setDestination(49055U);
    msg.setDestinationEntity(48U);
    msg.req_id = 13562U;
    msg.type = 196U;
    msg.max_size = 7851U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0717283103841;
    tmp_msg_0.base_lon = 0.171824725642;
    tmp_msg_0.base_time = 0.50168205988;
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
    msg.setTimeStamp(0.119965486291);
    msg.setSource(3790U);
    msg.setSourceEntity(222U);
    msg.setDestination(15831U);
    msg.setDestinationEntity(219U);
    msg.req_id = 53959U;
    msg.type = 162U;
    msg.max_size = 44727U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.436099892001;
    tmp_msg_0.base_lon = 0.833391462979;
    tmp_msg_0.base_time = 0.742410847502;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 32791U;
    tmp_tmp_msg_0_0.destination = 45283U;
    tmp_tmp_msg_0_0.timeout = 0.466478937553;
    IMC::LogBookEntry tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.type = 130U;
    tmp_tmp_tmp_msg_0_0_0.htime = 0.0820893562524;
    tmp_tmp_tmp_msg_0_0_0.context.assign("RTNWMXFDMHZPEEHIOGFQYVZDQLRZCINWEVFKMNSCZHUGXQJXOTYANLRLLKPHREWAVQXUIDSQZAXPGHQUYRIBPABWLOTIUUJSXFBHNGHNGCKVXELQBCVONFYRHPXDMKEOBJTSUTWFDYKSGCFBYJRPAWVA");
    tmp_tmp_tmp_msg_0_0_0.text.assign("VNGNYBDEIJSQPMHFSMVOECMYPPPZPZLKQOQDYWDUXUCNDRIUEHHZWTCDKKISQQBSIADZSNMWJJCVVLBASFJZFECRWMPSSHHKRXKATGEQILFRJYQXAYCMNQGRLBAGIFFOXPZBVKJBDXRWNKPHTTQIAOGHMBEJOBFUTLYOAZYWVGUWHBVYSVXO");
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.875931033998);
    msg.setSource(60955U);
    msg.setSourceEntity(48U);
    msg.setDestination(25957U);
    msg.setDestinationEntity(208U);
    msg.original_source = 44238U;
    msg.destination = 46098U;
    msg.timeout = 0.635376305407;
    IMC::TransmissionRequest tmp_msg_0;
    tmp_msg_0.req_id = 48327U;
    tmp_msg_0.comm_mean = 195U;
    tmp_msg_0.destination.assign("PGUBTKSNKKCWIXMABAJGNHPBOFLVIFJWKPIXLWASYREAYLVBSCTRURJDNPGDMQVOGHNQMRCXFZLKZOMVIUZAGLTRGNIMLRIBSTSXHTERKCQHEAOEXYXLKFCWWKJODZNCUHBQ");
    tmp_msg_0.deadline = 0.613350164317;
    tmp_msg_0.range = 0.323807330845;
    tmp_msg_0.data_mode = 221U;
    IMC::PlanControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 42U;
    tmp_tmp_msg_0_0.op = 94U;
    tmp_tmp_msg_0_0.request_id = 14553U;
    tmp_tmp_msg_0_0.plan_id.assign("ERDHOHDJKUOWSZOCMYFHSQZZVBCQTHXWCXZUVFUFKJUCXBBHGKSIRVMIYIKRERZKPMWAITNAKJGGMEPRFQXTNSKRSQPPNONVQOXEESQYAXIXCVMVDNDNMLPIGZWYCYJMLUYBVC");
    tmp_tmp_msg_0_0.flags = 11310U;
    IMC::UamRxRange tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.seq = 38682U;
    tmp_tmp_tmp_msg_0_0_0.sys.assign("TLGMRDICHVSYJWRELGLLPTEWTOFVFINPLBXBJFWRSOEGHS");
    tmp_tmp_tmp_msg_0_0_0.value = 0.317943868697;
    tmp_tmp_msg_0_0.arg.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.info.assign("HHSRBQQFGNOTQCVNXWEMBXVSWJLLMSQJFYHYOZHAESYRPLRXORPFWADFNIUAOLMWNQIGZSLCHZTNCJXADKTDMAIIMPJZTUIPCMBKEWYEOYKHULRFNIVFMNHURSGPVKDOKTEALPJVVPWJJKVKBYLAXUJJRTSPVGZSSEFONWBNXBUZEDMUJYQUACDGIKTEMECIMRFDZWCATVOBCBUXGCNIZPVDZSKYUPRFGBWTCQQGDLOTXW");
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
    tmp_msg_0.txt_data.assign("YZDSSCKFMJYOFOHNAXWUSJSDHYTKCVLNLMVTBRAVCIXHEXICBPPSTKPBBZWPIPYKPRYDIDGWNC");
    const char tmp_tmp_msg_0_1[] = {25, -11, -49, 53, 42, 86, 1, 112, -104, -2, 93, -31, -105, 85, -36, 93, 42, -18, -91, 101, 43, -27, -91, -29, 118, -95, 88, -115, -39, 117, -119, -55, -37, -2, -91, -100, -126, -115, 31, 25, -58, -53, -126, 96, -9, -85, 78, 83, -38, 98, -53, 16, 13, 126, 61, -51, -121, 69, 100, 91, -31, -3, -128, -21, 124, 3, -83, 84, 10, 17, -87, 15, -110, -116, 112, -67, 90, -73, 16, -97, 49, -109, 40, -124, -76, 94, 13, 54, -110, -56, 8, 28, -32, 87, 18, 115, -94, -74, -16, -128, -53, -9, -75, 18, 72, -5, -59, 106, -115, -53, -31, -122, -18, -113, 26, 35, 99, -2, -3, 57, 92, -48, -111, -97, 84, -49, 33, 25, 118, 23, -126, -128, -6, 56, -39, 100, 107, -76, 49, 26, 8, 53, -112, 16, -4, 101, 55, -105, -84, 107, -85, 121, 68, -52, 107, 112, 10, -24, 45, -67, -114, -122, 110, 99, -83, 56, 31, -64, -50, 62, 61, 109, -7, 87, 1, -98, -49, -67, -76, 106, -20, -96, 93, 69, -32, 5};
    tmp_msg_0.raw_data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
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
    msg.setTimeStamp(0.824598894972);
    msg.setSource(14696U);
    msg.setSourceEntity(79U);
    msg.setDestination(12015U);
    msg.setDestinationEntity(58U);
    msg.original_source = 27599U;
    msg.destination = 60437U;
    msg.timeout = 0.559880306788;
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("JFRRHVHJXSSMVVEPMBNGAPWZFPOSJNTKLUDRUUYTEGIFAPLGNQSUCOJQVLRQJXBXTLRKJMTYBIWXBUHYQLWJCAQDFLGEELAPFPUMIGNZOYZBBOYHNXVZQHSGMOINSRATQPT");
    tmp_msg_0.lat = 0.334950274718;
    tmp_msg_0.lon = 0.850204795325;
    tmp_msg_0.z = 0.411102609846;
    tmp_msg_0.z_units = 91U;
    tmp_msg_0.cog = 0.267535818595;
    tmp_msg_0.sog = 0.222191583611;
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
    msg.setTimeStamp(0.916615882196);
    msg.setSource(12373U);
    msg.setSourceEntity(64U);
    msg.setDestination(3322U);
    msg.setDestinationEntity(224U);
    msg.original_source = 9288U;
    msg.destination = 44034U;
    msg.timeout = 0.989296240236;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.922719833946;
    tmp_msg_0.base_lon = 0.258419317267;
    tmp_msg_0.base_time = 0.451067867786;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 12533U;
    tmp_tmp_msg_0_0.priority = -69;
    tmp_tmp_msg_0_0.x = -3605;
    tmp_tmp_msg_0_0.y = -16147;
    tmp_tmp_msg_0_0.z = -25143;
    tmp_tmp_msg_0_0.t = 15247;
    IMC::Temperature tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.95774946922;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.00708664354739);
    msg.setSource(57033U);
    msg.setSourceEntity(72U);
    msg.setDestination(37667U);
    msg.setDestinationEntity(172U);
    msg.type = 202U;
    msg.comm_interface = 55238U;
    msg.model = 5614U;
    msg.list.assign("XXUZSXZZNXPVWHYUJZGNCLCVSHHSXJQNFGKFCDSYPKMDWDJOIKKGADAVMEOWSBGNVOMFXFHYTKLMEPKVRLPEMIULBNCOBTGPVQOSDRGDGZRNOWQRANQEFKYZHTCXSMN");

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
    msg.setTimeStamp(0.852524272556);
    msg.setSource(7173U);
    msg.setSourceEntity(254U);
    msg.setDestination(21069U);
    msg.setDestinationEntity(164U);
    msg.type = 77U;
    msg.comm_interface = 23179U;
    msg.model = 27928U;
    msg.list.assign("YDCKPALPSCOINVIYCSPUVCULLSDETSAQXJMKTJHGWVWMPGKOAFLXNCSMKDLQQBODZFJRWZUITKVWKYBVNCMNOHSZMNEZWSOFNUVEOAPRYHXUZQRUHKJWAWPMBYXHJQAAGNMVIKCYDUPIRAFBGTTFVOYHPUWLGVOXRJEDESMGJTGTJFZFEQFGHBZZXDBIPXQPTATGELUIUOHCIADDRHWRSNFOLFQBBZVEQSCLTJW");

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
    msg.setTimeStamp(0.124929600225);
    msg.setSource(21752U);
    msg.setSourceEntity(17U);
    msg.setDestination(47172U);
    msg.setDestinationEntity(160U);
    msg.type = 41U;
    msg.comm_interface = 1064U;
    msg.model = 9079U;
    msg.list.assign("BDIKANKCCSPKJXIWWJOVEKQIJTUAJBUSWRIHPAJILCESUSPLFERATMKAYTQYKMTNNFPLSTTUYTDNHEEXDDQZOXKQAAUZFFTWNOYWCVQPKCVWUJWDYWMFGCDLMDERGXVVMGEYFTSLFTPYFWGH");

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
    msg.setTimeStamp(0.322295718466);
    msg.setSource(9211U);
    msg.setSourceEntity(54U);
    msg.setDestination(61345U);
    msg.setDestinationEntity(243U);
    msg.type = 63U;
    msg.req_id = 204320093U;
    msg.ttl = 44592U;
    msg.code = 62U;
    msg.destination.assign("CNPIJDZLIZWKQTL");
    msg.source.assign("CFFQRGKPEWEQKVSAPBRHJ");
    msg.acknowledge = 91U;
    msg.status = 153U;
    const char tmp_msg_0[] = {66, 2, 104, 15, 12, 58, -11, -98, -8, 49, -88, -61, 22, -43, -9, -49, -107, 84, 80, -89, 33, 22, -95, 65, 103, -68, 121, 19, -15, -66, -14, 86, -39, -77, -94, 122, 23, 119, 20, 62, 13, -41, 11, -64, 104, -91, -120, -107, -18, -124, 104, -115, 106, 107, -35, -68, 95, 78, -19, -81, -20, 33, -78, 77, -88, -55, 68, 77, 66, -80, -69, -69, 80, -84, 108, 103, -45, 37, -37, 100, 79, 92, -23, 83, 76, 95, 105, 103, 69, 49, -36, 88, -85, 22, -69, -128, 51, -49, -118, 117, 19, 4, -46, -63, -44, -128, 65, 42, -48, 101, 71, 2, 84, -15, 59, -50, 52, 80, -94, 1, 34, -87, 115, -42, 83, -2, 40, 17, 58, -28, -51, 34, -14, -44, -84, 29, 84, 48, 126, 65, -124, 115, -54, -5, 105, 123, 78, -29, -20, 91, -128, -80, 34, 101, 46, -4, 82, 102, 91, -128, -11, -85, -23, -128, -89, -95, -8, 19, -18, 102, -57, 100, 49, -22, -102, 124, -105, 23, 44, -87, 120, 26, -41, -58, -119, -124, 80};
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
    msg.setTimeStamp(0.577766305911);
    msg.setSource(14825U);
    msg.setSourceEntity(185U);
    msg.setDestination(50216U);
    msg.setDestinationEntity(71U);
    msg.type = 166U;
    msg.req_id = 3759917029U;
    msg.ttl = 14770U;
    msg.code = 41U;
    msg.destination.assign("UXODLOUUSCSRYWKNWEGCXDFTWLVEHQQYPYGIACROZHYEOJ");
    msg.source.assign("LUIZHBQRXYWKENEGRKWAWVEECHXGLPWYKZROFHPAKSQNNCQOGKTNNAZQMJSZPDYOJVSYRTTNUVIBESUJRCKDXELMDCDILYMTIIDCADMHOMVPIJOWZEHBOJNEMZFXQYGBTBPXMFCGBQJWLRAPIARYJVOQPFMFTSFJGUWDCPNULHXGXRJHTHHKFNMNBFAATIU");
    msg.acknowledge = 72U;
    msg.status = 17U;
    const char tmp_msg_0[] = {50, 84, 51, 30, -82, 95, -105, 81, -127, 69, -123, 53, -58, 72, 5, 36, -101, 94, 48, -70, 60, -109, 31, -73, -124, -40, 84, 9, -124, 61, 53, 123, -46, -112, 20, 3, -30, -21, 8, 61, -91, -20, -69, 10, 11, 109, 46, -62, 43, 46, -46, 106, 33, 16, 115, -15, 5, 14, -68, 84, -25, -6, 32, 24, 21, 102, -98, -112, 50, 47, 44, -33, 26, 76, -123, 64, -27, 90, -61, 45, 33, 47, 24, -31, 49, -69, 43, 24, -10, -51, -103, 41, 111, -79, 2, 121, 4, 37, 87, -72, 0, -1, -37, 70, 2, 72, 30, -73, 124, 45, 97, 107, 22, -3, -5, 119, -62, -14, -108, -16, 18, 85, 0, -24, 27, 42, -119, 47, -36, -115, -49, 39, -3, 66, 40, -61, 90, -107, 9, -77, -107, -64, -78, 11, -76, 90, -68, 95, 4, -99, -91, -6, 91, 76, -84, 100, 101, -14, -53, 12, -113, 114, -97, 102, -68, 53, 63, -117, 32, 39, 33, -81, 57, -73, 58, -107, 123, -116, -112, 84, -20, 70, 79, 44, 20, 54, -71, -125, -10, -67, -90, 17, -35, -78, -53, -22, 104, 28, -45, -106, -65, -34, 17, 119};
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
    msg.setTimeStamp(0.761112255529);
    msg.setSource(48090U);
    msg.setSourceEntity(241U);
    msg.setDestination(46395U);
    msg.setDestinationEntity(209U);
    msg.type = 230U;
    msg.req_id = 4103771U;
    msg.ttl = 31674U;
    msg.code = 46U;
    msg.destination.assign("CHXESUHDHQPDXHZUVVBYWMWQAORREHYIAUNOWELEQZKCDDYWWAGOFUKDXNABNTFEZVINTIGCSLRUAOOLTOAEZKMMIBNAZQHSFZFIXOFZGBLICKVPIJYEMCLHGBGPIWUPLJJCISKVRBMLSKMNCANTGQBVQMMUYYEWKZPAXYQKZRDOPGKLPYEURSUVQFJXRPTSSTBMBFZRMPWHHGTWDAQGKWDBSVFTNQYXNIUYPJJOJNDJRDFH");
    msg.source.assign("CDAPOEYBTPTDARJVXTBXSFEBIZCISOOPCNTUCKQYSZBHHIJWAAVJOROUPGPJZNKWLLNQMHSQSYDFWPGUXRSMCCNUMXZGHTLEDFKYIHFUXSDVAVQSKVTLXEKUNMKENVLHNXYAIQKOYGMBAZNEJKGHKHEHSDQRIRREOLAZDOWNFBLJMGEAFUZUCRM");
    msg.acknowledge = 12U;
    msg.status = 109U;
    const char tmp_msg_0[] = {18, -40, 18, 18, -32, -117, 69, -40, 45, 13, -27, -20, 99, 105, -31, -47, -96, 9, 124, -78, 46, 81, -8, -122, -120, 124, 121, 48, -3, -113, 0, 74, 122, 41, 64, 103, 51, -123, 51, -48, 65, 125, -40, -127, 88, 58, 31, 70, 79, -88, -46, -89, -69, 30, -93, -114, -115, -54, -42, 33, -20, -108, 0, 78, 9, 119, -116, 73, -120, 6, -102, 50, -111, 80, 79, -100, -23, -64, 60, -5, 82, -66, 3, -43, -64, -124, -75, -82, -126, -58, -74, 30, 30, 86, -9, 74, -58, -91, -98, 55, 4, 104, -42, 103, 97, -2, -74, -51, 126, 0, 87, -59, -36, 96, -75, 24, -103, -1, 12, 3, -1, -95, -105, -106, 65, -7, -26, -62, 55, 13, 83, 0, -31, -121, 74, -84, 7, 90, -50, 113, -24, 68, 68, -72, 25, -51, 92, -4, 65, -20, 15, 53, 98, -91, -107, -49, 0, -90, 108, 28, -69, -61, 105, 5, -63, 126, -2, -58, 105, 67, 87, -122, 39, 49, 57, 0, -102, -43, -110, -122, 9, 99, -102, -120, 121, 5, 82, -3, 73, -67, 20};
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
    msg.setTimeStamp(0.706574261988);
    msg.setSource(39680U);
    msg.setSourceEntity(61U);
    msg.setDestination(21775U);
    msg.setDestinationEntity(50U);
    msg.id = 29U;
    msg.range = 0.199835073061;

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
    msg.setTimeStamp(0.314822530503);
    msg.setSource(13345U);
    msg.setSourceEntity(86U);
    msg.setDestination(43967U);
    msg.setDestinationEntity(92U);
    msg.id = 58U;
    msg.range = 0.0421792690119;

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
    msg.setTimeStamp(0.970789348987);
    msg.setSource(17107U);
    msg.setSourceEntity(170U);
    msg.setDestination(62329U);
    msg.setDestinationEntity(170U);
    msg.id = 193U;
    msg.range = 0.701868557692;

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
    msg.setTimeStamp(0.436936233115);
    msg.setSource(24670U);
    msg.setSourceEntity(205U);
    msg.setDestination(4243U);
    msg.setDestinationEntity(99U);
    msg.beacon.assign("UZSZILHMCPMXEFUVZDCHLOLURZMWAVVCMNWHFSDPIXJCVULGIKLIXOIHEMATAEOLJARFBRCWYJIYMRDCUEUTROSHUEFPMJZWBTJQRRRF");
    msg.lat = 0.101955628905;
    msg.lon = 0.727552613234;
    msg.depth = 0.947149112643;
    msg.query_channel = 200U;
    msg.reply_channel = 106U;
    msg.transponder_delay = 231U;

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
    msg.setTimeStamp(0.660628322507);
    msg.setSource(2495U);
    msg.setSourceEntity(32U);
    msg.setDestination(37696U);
    msg.setDestinationEntity(22U);
    msg.beacon.assign("QVGWKSDBAJTNEOCQHWNVOOGBORAMESIDSWCPMRZTSIBWXZVHYKVTXRYEUEFFMYQMVJXPEGPQCDCZQEVNXNYZBCFPKZZEVSJDQGDHBYAOIFOAIG");
    msg.lat = 0.317851076231;
    msg.lon = 0.505139475144;
    msg.depth = 0.522645396134;
    msg.query_channel = 103U;
    msg.reply_channel = 254U;
    msg.transponder_delay = 27U;

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
    msg.setTimeStamp(0.0723600970781);
    msg.setSource(45967U);
    msg.setSourceEntity(159U);
    msg.setDestination(12040U);
    msg.setDestinationEntity(103U);
    msg.beacon.assign("WZXRTAFRIJEDCULFIQLBGVAIQXTEWTYMYJFTZJOIYHUONRHAOPLQRSOYMQIXHAUPKZPQDOSUSYDCWHROMAGXKZRIMDHFYNTRVVTFGRTDJJNUKWJKAOQGVFCGFSVPMWBYCWIGLFVNPBNQM");
    msg.lat = 0.184487651151;
    msg.lon = 0.749793649619;
    msg.depth = 0.164145271086;
    msg.query_channel = 254U;
    msg.reply_channel = 214U;
    msg.transponder_delay = 42U;

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
    msg.setTimeStamp(0.771130259218);
    msg.setSource(5771U);
    msg.setSourceEntity(1U);
    msg.setDestination(49948U);
    msg.setDestinationEntity(244U);
    msg.op = 193U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LGOUWODEWJUVRWZRSNZAZTVRXDMOVXAEWBGXDUSPNRAWIFOQAJJLKDPUPBBUCJPKGFFZEXDMAMTGLIJNMQNIJCMFLRAHTFAZKDOOHEKVFFGVCNGTLZIXWYVHHLRY");
    tmp_msg_0.lat = 0.188201489443;
    tmp_msg_0.lon = 0.135907492946;
    tmp_msg_0.depth = 0.921011373108;
    tmp_msg_0.query_channel = 231U;
    tmp_msg_0.reply_channel = 222U;
    tmp_msg_0.transponder_delay = 173U;
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
    msg.setTimeStamp(0.216721099334);
    msg.setSource(63977U);
    msg.setSourceEntity(238U);
    msg.setDestination(29689U);
    msg.setDestinationEntity(189U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.75023661098);
    msg.setSource(3086U);
    msg.setSourceEntity(167U);
    msg.setDestination(42599U);
    msg.setDestinationEntity(107U);
    msg.op = 253U;

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
    msg.setTimeStamp(0.338188299161);
    msg.setSource(19959U);
    msg.setSourceEntity(94U);
    msg.setDestination(43136U);
    msg.setDestinationEntity(144U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.783125465584;
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
    msg.setTimeStamp(0.698836082922);
    msg.setSource(27948U);
    msg.setSourceEntity(120U);
    msg.setDestination(56292U);
    msg.setDestinationEntity(219U);
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("CYGWTMKVLWRVKHLPSPVBHXQWARZXZGDQLKRABUNZGJISFVBZHTQFCHMWSQONXGBZLXNVPDXGBUNZVJURUBWSOMPMRYOBKYIUFYHQHKRTUPMUXOESAGQCKZICXILXEVRZAPDLPJDXFHSEMWTBNDACQNJLQNOERPKZNCFUFLYIJIRFOEOUCMUHDJOEMCATVDIYIYWHGIETGPTFZSLWQYCVEQOEW");
    tmp_msg_0.data.assign("QETTVIGOFZKGXNMPFTQJNSQBKIQMDEYONAFFECDMRILYUMPZQSIJBHTCFBNLVEOFPLGKRSQXOLNKWACJVCDIUOLPPJIGXICFOVBEAUHUBITZTMVCMDQUMCRDVJGEKMYGCASLBYROTHVFXJEYRHWWSGPNDDODLMNXNZUVSWHKULOAYNRJHZAADKCEZGXLYYUGRBRXWASPZYWJXZEVWASOWYITPESGIHXHPKWZBZUQQKRLQNHJAFJKWVUCX");
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
    msg.setTimeStamp(0.843959837591);
    msg.setSource(49006U);
    msg.setSourceEntity(113U);
    msg.setDestination(37553U);
    msg.setDestinationEntity(8U);
    IMC::VesselWind tmp_msg_0;
    tmp_msg_0.angle = 0.279962353003;
    tmp_msg_0.reference.assign("HHSIERPFDCQRSLIQUJZFLYKWGLSOJJNAMMWDOPEJBBDKQEBLGTBADJOLAEURVGFYWWHQWLMSKREIX");
    tmp_msg_0.speed = 0.165448344471;
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
    msg.setTimeStamp(0.491636058153);
    msg.setSource(9626U);
    msg.setSourceEntity(25U);
    msg.setDestination(188U);
    msg.setDestinationEntity(171U);
    msg.op = 73U;
    msg.system.assign("IOZHDFCPALKQHICDUMLDGEISXLTAYWPCFHKBKWFXQJGADKLFQXYVHAKAOBHBFAANJSAGUEKMYCPWUKLLMREIGLTDOVWOAZZFJCXIBMOYCVEYVZTBXMNIRLTHJQRVUWGDMIVXHPUEZRIFVWBWIFUVURCOEGOBTEEJMPDTSSMDJPXZQSSANPQCHVBMDGPSRKQZR");
    msg.range = 0.393598538274;
    IMC::HistoricEvent tmp_msg_0;
    tmp_msg_0.text.assign("ZPMTAELQGXGJVRCJCAKMTEVTMSONCDTVPBJXRUESMDZNHDDROLBZUMURZDUFXKFRXYOWNIFWSQXQETHFKZQOHPVYJSPCTASTHQNQKNHNIIRXVVOTKZBOIRVOHKNHGBIIRBALYJIWUXXYANFDNVXSEVSZPMLKMSMCOLGHUKCLANDDJEGTPZMHGUQGLGULYPFBWWFYBKYMEQCOJAWSVAQPXYFGUWRCJWCLAYPCIIDBPEGAYBKE");
    tmp_msg_0.type = 148U;
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
    msg.setTimeStamp(0.125159724698);
    msg.setSource(14028U);
    msg.setSourceEntity(153U);
    msg.setDestination(3205U);
    msg.setDestinationEntity(56U);
    msg.op = 141U;
    msg.system.assign("YRJHWJGEMFEURSQTBFVPPBZKDCSDPEVVPAZDHJZKVNWOYXAOJQFOOGXACLTSCGKRIIQPQNOCJJKBUVQREBUHLLTHMYERSGFBAFCKNQSXHHDIJKFSVALOPHORKJUZCNMGGZMTBCNLIMLCPOIUZNDMDUTIWHCQTOKYAZLOFQNWXZTYSEWVAQUAJLBWMLSBTXNXHLPPIUKJWHCUKWYXXMPYFBDIVNFGVIETYIYRGVSEYTRGAX");
    msg.range = 0.0363653255501;
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.722702161467;
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
    msg.setTimeStamp(0.787287471551);
    msg.setSource(29914U);
    msg.setSourceEntity(231U);
    msg.setDestination(28465U);
    msg.setDestinationEntity(78U);
    msg.op = 182U;
    msg.system.assign("WGHNEOKLTSKDCSSEBCRQSUMPHPPQPDXNBXIDHKFMNDGLFJLAVQGO");
    msg.range = 0.0999170504997;
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 39351U;
    tmp_msg_0.sys_dst.assign("KGZEKJIRMCQNYDPHQB");
    tmp_msg_0.flags = 167U;
    const char tmp_tmp_msg_0_0[] = {-82, 52, 121, 78, -111, -93, -108, -67, 51, 111, 86, -19, -124, 68, 59, -105, 0, -76, -14, -128, -104, -16, -83, 100, -102, -3, 24, 1, 98, 106, 2, -4, -111, 45, 26, 24, 10, 31, 76, -118, 70, 7, 89, 72, 80, -20, 53, -10, 85, 4, -2, -47, 103, -33, -104, 55, 18, -36, 1, 90, 121, -9, -85, -54, 74, -120, -60, -25, 64, 69, -123, -67, 38, 80, 125, 11, 25, 100, -124, -111, -9, -7, -48, -19, 114, -48, 20, -100, 44, 99, -70, 47, -31, -14, -111, -112, -86, -35, 75, -1, -115, 26, 9, 63, 83, -69, -70, -57, -121, -39, 41, -18, -88, 74, -46, -62, 43, -114, -4, -62, -28, 46, -58, 70, 45, -104, -76, -81, 17, 15, 26, -108, -21, 91, 48, -54, 42, 16, -70, -76, 43, -96, 87, -74, -124, 49, -57, -104, 94, 108, -73, -106, 7, 88, -114, -112, 79, -17, -13, 126, 89, 103, 26, 5, -114, 6, 38, -115, -47, 31, -19, 36, 0, 55, 0, -16, -76, 84, 108, -30, 64, 31, -118, 22, -87, -74, 21, 25, 11, -2, -102, 80, -85, -125, -93, -105, -35, -75, -109, -17, 79, 22, -110, -50, 48, 100, 55, 10, 12, 24, 65, -126, 37, -50, 23, 100, -27, 53, 18, 15, -121, 19, -103, 35, 41, 119, 123, -89, -113, -41, -47, -26, 121, -87, -55, -121};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.157995525818);
    msg.setSource(18355U);
    msg.setSourceEntity(81U);
    msg.setDestination(55703U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.683345664691);
    msg.setSource(25185U);
    msg.setSourceEntity(90U);
    msg.setDestination(24325U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.519228622073);
    msg.setSource(29443U);
    msg.setSourceEntity(212U);
    msg.setDestination(56671U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.247719484803);
    msg.setSource(3162U);
    msg.setSourceEntity(147U);
    msg.setDestination(54356U);
    msg.setDestinationEntity(234U);
    msg.list.assign("CJQGISPLWOSZNYBZSBPIJZBNNGMVFTAQYKDGMQRKGHISVZMVRPDDTKRXULZMLBYRMGMCYJMEZAEYHAABKDDUYOFCYJIALCRSWADAGCNQXDXLNMK");

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
    msg.setTimeStamp(0.898397231559);
    msg.setSource(33620U);
    msg.setSourceEntity(37U);
    msg.setDestination(6553U);
    msg.setDestinationEntity(48U);
    msg.list.assign("MYMDYVCQQVEXLNSMOEGUGAJZXSEYBSHARZCKBZSCVBABTNULKLZOUMHCGKCQCKTJWPAEZOOFPTFONETMHPOIPDFYXCELMRRDVRLAGQPIBVGAHZAJCSBBJSRUJWMFTNWWLKWS");

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
    msg.setTimeStamp(0.382081970198);
    msg.setSource(43650U);
    msg.setSourceEntity(92U);
    msg.setDestination(52096U);
    msg.setDestinationEntity(158U);
    msg.list.assign("HHMRMURKQPTXVTNCVGHDYANCLAAYVQCHLOEUXKNIKRBKMMUOQILTXBLOJBDWJITHSJWXEYZQLUJBJEBTPKPRGPZRYLPTFEHMJTPSJSIIQOCELCQIZRCJPOSTSFAVMIJURYRQFVHDNNGHCHAQMGSGOAZDFXYDEZYGTBUANYESOQVGVWDKWDXPGZKEZDFXBPGANBWLEWNWIYNCBXEDYRHWKASFLKJWNIUCIBMKZRFWFQSUDTUSUOFOFAC");

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
    msg.setTimeStamp(0.0635762740209);
    msg.setSource(26539U);
    msg.setSourceEntity(42U);
    msg.setDestination(26251U);
    msg.setDestinationEntity(119U);
    msg.peer.assign("YOXGZCQKLEGYOFPTUNJFLATJCPOQIRBWQDPROZPDHXBJJQLOMWXFZSSUVUZNVMMNQIKALLACOLYQYVHDXWMXFYWHXYRQSASIUEMRKJKBVEATPCCKTJZOBUOIQETFQHRYTXRFHHKKDWDUSNLYFHYMFGCGISTGMBICZNZD");
    msg.rssi = 0.0501817700953;
    msg.integrity = 8155U;

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
    msg.setTimeStamp(0.689942249385);
    msg.setSource(58878U);
    msg.setSourceEntity(198U);
    msg.setDestination(5513U);
    msg.setDestinationEntity(208U);
    msg.peer.assign("LVOWWYDEXEADSCCMKLZAWQDPBKLAFJQCEXJLKXQSNXIRRZVDAHOBWKZEQPFLHBGFTLVVSVQYFZOIDHSPSWDEHNLPNNHZCUATKCNMEAIKBFGGNJAJFJPGTPDYFMMDYARUYPQUJYSJZSPMOKLVRMTUNRHXIGWRGKKIEWHGNQSHNAUGTYVLQMOUOTSUXFIXBCTZZHXTDRGPWFABEEUJRQUMBGLIOXK");
    msg.rssi = 0.485164811734;
    msg.integrity = 30433U;

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
    msg.setTimeStamp(0.209225486986);
    msg.setSource(19701U);
    msg.setSourceEntity(88U);
    msg.setDestination(56558U);
    msg.setDestinationEntity(132U);
    msg.peer.assign("AALXPGQENVIPRRIQJFMMEKJQWFGLSDU");
    msg.rssi = 0.610573431935;
    msg.integrity = 30170U;

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
    msg.setTimeStamp(0.405688503526);
    msg.setSource(13671U);
    msg.setSourceEntity(99U);
    msg.setDestination(40759U);
    msg.setDestinationEntity(29U);
    msg.req_id = 34572U;
    msg.destination.assign("EGHDJFQJOACFKFOZXGNRGNYNUGPZSLJSOOTMXMIAKYLBDIUNKJWLDOICOGPJHTEKLSTMUJYAUXWIJBSIWAFJHHKZQPSLVAFRWORVVPDVMDCUPGYBGQMUIAYQCBWKWBEEDZELMGV");
    msg.timeout = 0.156771213353;
    msg.range = 0.217929509127;
    msg.type = 160U;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 4114581558U;
    tmp_msg_0.destination.assign("GZYOPZJQYFAGMSKRMBGGCMNXCHJEQPDUMZTPKVKKAOLTXOYWBYVRZEIISQ");
    tmp_msg_0.timeout = 59805U;
    const char tmp_tmp_msg_0_0[] = {-103, -7, -33, -94, -94, -61, 26, -97, 93, -61, 116, -101, 34, 47, -26, 57, -45, -66, 124, -26, 40, 44, -35, -11, 60, 84, -51, 24, 39, 80, -14, 110, 76, 100, 37, -45, -84, 18, 122, 96, 89, 27, -114, 48, 95, -42, 30, 72, -42, -73, 56, 35, 2, -87, -93, -10, -74, 110, 107, -7, 71, 49, -61, -107};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.996519720536);
    msg.setSource(2771U);
    msg.setSourceEntity(90U);
    msg.setDestination(6752U);
    msg.setDestinationEntity(102U);
    msg.req_id = 20826U;
    msg.destination.assign("ZNRDPFRJAWHZKLHIYLCLIGEMIXSCOHUXNOUVQEHRQSWTQGFKPDVEFPNJSZJPQRLGPTQYXDYZNBBBVGUXVXDWVQOMQRQXSOEEMVHFOWGKTMZDSWVHUFLJWKFUYANKAVJFSUBTFLCJYMLYSDKAAEICCHB");
    msg.timeout = 0.387882597724;
    msg.range = 0.332451246141;
    msg.type = 211U;
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("UFPMBGEOAMGKQXKAALZNQMTIHMTEEJWWFKOUDAVVYKIBJKZGCFQQOMTHMBJYTROUGQIJCNYNBQQCQYRYAYBEDYPSOSLCNXDNLMCDWHOIHFWRNVJFXSCYPGFWDHGVBIKUMTFMNOGZCSPVNDEXXZHCREZTSJXDYBXENYGEDULFLWSIAVFDIPVAIQBOZUVPLXAOCHKXNT");
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
    msg.setTimeStamp(0.128392443321);
    msg.setSource(54334U);
    msg.setSourceEntity(159U);
    msg.setDestination(43338U);
    msg.setDestinationEntity(163U);
    msg.req_id = 42097U;
    msg.destination.assign("CAAIELALPCYWOOHIKCFJHVGLEJBTDPVYKGZBKZNUDWTBQPDMICQFEORHHHAGREHEMIUZJLHPQZGHMUIMWQVSJUETBSGV");
    msg.timeout = 0.267720722236;
    msg.range = 0.576182387466;
    msg.type = 245U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 92U;
    tmp_msg_0.op = 107U;
    tmp_msg_0.request_id = 56821U;
    tmp_msg_0.plan_id.assign("XVMINGIHCURQEBJZENLHUGFOOWCUCFCDCQFBBGLCPEWRPVEYMYGNWHFAMYTXIZKDAVZDVMRFYUXOHJBROJGRNGTPHSDJABIVURPGREVLKQIUNYUBSAGMNWXNQALOAZPIQJJYHKLJBIAZTVVE");
    IMC::SetThrusterActuation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 202U;
    tmp_tmp_msg_0_0.value = 0.0237469460423;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("VCSXUXZKLZTOKFPCDNXNHOEFIMUZGKOOFMJPIXXKRTPHSOCSCNIHASBINUJLBFGUEHVACDATCLZWFSZYJLGRIXPRKDWPKQWNBSYKCNNRGCCWILLWYYWGEYOHJVYRQMFRVJRJJLAPLSEPNEWUUOVAGQCYAEQHMTBTMADHQUIBPWELJGDFZMBBFPWWUAVMSPYXHLXJHYDDQEJZTVEHOSKOBQGZTVBRQOMZFNDVIIQEFRGMGBTAKDQU");
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
    msg.setTimeStamp(0.844086703386);
    msg.setSource(42168U);
    msg.setSourceEntity(57U);
    msg.setDestination(61355U);
    msg.setDestinationEntity(203U);
    msg.req_id = 4681U;
    msg.type = 108U;
    msg.status = 73U;
    msg.info.assign("RNMSSQBPNNJIQDMXLWCMUWFVXYQUBMOJDMNZHWJTOZEIRKMVBJHPWQOZKSENSTTPCWVGQEFHVATWARLFIDPLKUKLGBUEFTHSSNGTQNRQZYQTEADYJEGUXAXJEWHYJRDYGLDVJXOBJCXUXXKNVOFUGHEOIRZBPOSAHHYNTDFPYZFGJLPZDWRVTRLCGGKIMFVZEAOCAIIRFPHZMVUKWAZKEOBMGPMVNOXBCXYUQBCDDSTLAKQLBYSYIHFKIA");
    msg.range = 0.873277850225;

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
    msg.setTimeStamp(0.15081624827);
    msg.setSource(59777U);
    msg.setSourceEntity(47U);
    msg.setDestination(30268U);
    msg.setDestinationEntity(178U);
    msg.req_id = 42554U;
    msg.type = 134U;
    msg.status = 183U;
    msg.info.assign("PRXSGGDRJCISLWSSMBBFZOADBNGRMIEGONWUTVVKCWFWJALCHQWSCHHQJSYNUCGVEGQOMP");
    msg.range = 0.877309961861;

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
    msg.setTimeStamp(0.211522651859);
    msg.setSource(52507U);
    msg.setSourceEntity(172U);
    msg.setDestination(36930U);
    msg.setDestinationEntity(224U);
    msg.req_id = 45953U;
    msg.type = 83U;
    msg.status = 108U;
    msg.info.assign("HSWSEJCWJZFFDUSQKMDGECIMCGNZMEWXYESMWJVTOJFVHWDVPFGCRAALYHJSMAGKYJHMBLXAGVYTOPQJZIZYRZEGHWUDNYLLEIEQQCUQRIGOCBTHJFCEFXSMSYRFNWKKKHDVQXUMUXJUZUHBLDVTGACRNSQLX");
    msg.range = 0.976754873936;

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
    msg.setTimeStamp(0.0223473407566);
    msg.setSource(32847U);
    msg.setSourceEntity(174U);
    msg.setDestination(45408U);
    msg.setDestinationEntity(120U);
    msg.value = -10940;

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
    msg.setTimeStamp(0.724051121991);
    msg.setSource(60872U);
    msg.setSourceEntity(228U);
    msg.setDestination(35697U);
    msg.setDestinationEntity(119U);
    msg.value = 15448;

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
    msg.setTimeStamp(0.36807744089);
    msg.setSource(32418U);
    msg.setSourceEntity(205U);
    msg.setDestination(34536U);
    msg.setDestinationEntity(76U);
    msg.value = -31844;

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
    msg.setTimeStamp(0.258730028111);
    msg.setSource(3927U);
    msg.setSourceEntity(82U);
    msg.setDestination(65197U);
    msg.setDestinationEntity(139U);
    msg.value = 0.0451606225216;

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
    msg.setTimeStamp(0.538449237301);
    msg.setSource(29064U);
    msg.setSourceEntity(87U);
    msg.setDestination(45897U);
    msg.setDestinationEntity(159U);
    msg.value = 0.461778627053;

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
    msg.setTimeStamp(0.190324550065);
    msg.setSource(27958U);
    msg.setSourceEntity(253U);
    msg.setDestination(51969U);
    msg.setDestinationEntity(207U);
    msg.value = 0.464518669126;

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
    msg.setTimeStamp(0.712207902623);
    msg.setSource(4396U);
    msg.setSourceEntity(16U);
    msg.setDestination(31385U);
    msg.setDestinationEntity(246U);
    msg.value = 0.585515832114;

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
    msg.setTimeStamp(0.674343155356);
    msg.setSource(34528U);
    msg.setSourceEntity(249U);
    msg.setDestination(22367U);
    msg.setDestinationEntity(118U);
    msg.value = 0.456650277577;

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
    msg.setTimeStamp(0.243042019399);
    msg.setSource(50128U);
    msg.setSourceEntity(62U);
    msg.setDestination(13404U);
    msg.setDestinationEntity(197U);
    msg.value = 0.203688004005;

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
    msg.setTimeStamp(0.245697028552);
    msg.setSource(44468U);
    msg.setSourceEntity(89U);
    msg.setDestination(29462U);
    msg.setDestinationEntity(135U);
    msg.validity = 21346U;
    msg.type = 194U;
    msg.utc_year = 16278U;
    msg.utc_month = 54U;
    msg.utc_day = 87U;
    msg.utc_time = 0.1014244791;
    msg.lat = 0.629328412467;
    msg.lon = 0.272319627727;
    msg.height = 0.537565062486;
    msg.satellites = 66U;
    msg.cog = 0.861636816897;
    msg.sog = 0.00534078400728;
    msg.hdop = 0.980145972511;
    msg.vdop = 0.964704798231;
    msg.hacc = 0.629066976893;
    msg.vacc = 0.367259738206;

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
    msg.setTimeStamp(0.261433281606);
    msg.setSource(41198U);
    msg.setSourceEntity(241U);
    msg.setDestination(48963U);
    msg.setDestinationEntity(194U);
    msg.validity = 39020U;
    msg.type = 92U;
    msg.utc_year = 1323U;
    msg.utc_month = 66U;
    msg.utc_day = 45U;
    msg.utc_time = 0.197496316342;
    msg.lat = 0.722458279648;
    msg.lon = 0.0439771165972;
    msg.height = 0.0649296333951;
    msg.satellites = 243U;
    msg.cog = 0.351571669019;
    msg.sog = 0.807611743892;
    msg.hdop = 0.595600565298;
    msg.vdop = 0.141983230831;
    msg.hacc = 0.642347525421;
    msg.vacc = 0.898771632732;

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
    msg.setTimeStamp(0.48321752218);
    msg.setSource(34810U);
    msg.setSourceEntity(196U);
    msg.setDestination(10484U);
    msg.setDestinationEntity(125U);
    msg.validity = 16982U;
    msg.type = 73U;
    msg.utc_year = 25446U;
    msg.utc_month = 189U;
    msg.utc_day = 47U;
    msg.utc_time = 0.871749647937;
    msg.lat = 0.0223009330341;
    msg.lon = 0.352088255999;
    msg.height = 0.544492534833;
    msg.satellites = 190U;
    msg.cog = 0.103514854455;
    msg.sog = 0.555859947298;
    msg.hdop = 0.126138666269;
    msg.vdop = 0.17235935073;
    msg.hacc = 0.196285265634;
    msg.vacc = 0.70432002231;

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
    msg.setTimeStamp(0.552164983157);
    msg.setSource(25676U);
    msg.setSourceEntity(86U);
    msg.setDestination(12919U);
    msg.setDestinationEntity(153U);
    msg.time = 0.057240833448;
    msg.phi = 0.871862423176;
    msg.theta = 0.998932150529;
    msg.psi = 0.292991123626;
    msg.psi_magnetic = 0.759373869589;

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
    msg.setTimeStamp(0.66663831938);
    msg.setSource(31465U);
    msg.setSourceEntity(201U);
    msg.setDestination(38206U);
    msg.setDestinationEntity(6U);
    msg.time = 0.418165963812;
    msg.phi = 0.212245062651;
    msg.theta = 0.884961830356;
    msg.psi = 0.679967967136;
    msg.psi_magnetic = 0.498836269271;

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
    msg.setTimeStamp(0.357592158534);
    msg.setSource(443U);
    msg.setSourceEntity(239U);
    msg.setDestination(48481U);
    msg.setDestinationEntity(114U);
    msg.time = 0.395109061704;
    msg.phi = 0.846603982218;
    msg.theta = 0.660256933867;
    msg.psi = 0.168732639346;
    msg.psi_magnetic = 0.786432466263;

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
    msg.setTimeStamp(0.00483005744674);
    msg.setSource(38797U);
    msg.setSourceEntity(216U);
    msg.setDestination(11347U);
    msg.setDestinationEntity(97U);
    msg.time = 0.307047524799;
    msg.x = 0.78084853817;
    msg.y = 0.234231674284;
    msg.z = 0.522704027947;
    msg.timestep = 0.678736827952;

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
    msg.setTimeStamp(0.476982078081);
    msg.setSource(49960U);
    msg.setSourceEntity(167U);
    msg.setDestination(62918U);
    msg.setDestinationEntity(124U);
    msg.time = 0.444980748253;
    msg.x = 0.14240417326;
    msg.y = 0.514240063611;
    msg.z = 0.384707196902;
    msg.timestep = 0.126461084441;

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
    msg.setTimeStamp(0.221797665016);
    msg.setSource(6798U);
    msg.setSourceEntity(87U);
    msg.setDestination(17823U);
    msg.setDestinationEntity(31U);
    msg.time = 0.258658442409;
    msg.x = 0.566291386706;
    msg.y = 0.819103941104;
    msg.z = 0.473670891725;
    msg.timestep = 0.298920294226;

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
    msg.setTimeStamp(0.107164952766);
    msg.setSource(57648U);
    msg.setSourceEntity(100U);
    msg.setDestination(49798U);
    msg.setDestinationEntity(154U);
    msg.time = 0.686302149314;
    msg.x = 0.466566995431;
    msg.y = 0.0866402792897;
    msg.z = 0.195095877324;

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
    msg.setTimeStamp(0.486383499301);
    msg.setSource(14427U);
    msg.setSourceEntity(139U);
    msg.setDestination(3507U);
    msg.setDestinationEntity(169U);
    msg.time = 0.0583543701716;
    msg.x = 0.0882837324084;
    msg.y = 0.0866422731717;
    msg.z = 0.299795635814;

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
    msg.setTimeStamp(0.993038225466);
    msg.setSource(59737U);
    msg.setSourceEntity(251U);
    msg.setDestination(54102U);
    msg.setDestinationEntity(167U);
    msg.time = 0.425291046209;
    msg.x = 0.270972741137;
    msg.y = 0.220371036591;
    msg.z = 0.278408937345;

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
    msg.setTimeStamp(0.188103395232);
    msg.setSource(34984U);
    msg.setSourceEntity(142U);
    msg.setDestination(55769U);
    msg.setDestinationEntity(251U);
    msg.time = 0.678359355273;
    msg.x = 0.985798730631;
    msg.y = 0.355848569714;
    msg.z = 0.975393740171;

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
    msg.setTimeStamp(0.88180121831);
    msg.setSource(35105U);
    msg.setSourceEntity(173U);
    msg.setDestination(37214U);
    msg.setDestinationEntity(249U);
    msg.time = 0.254589260283;
    msg.x = 0.960524633023;
    msg.y = 0.0301672143137;
    msg.z = 0.860562626524;

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
    msg.setTimeStamp(0.278694776389);
    msg.setSource(54434U);
    msg.setSourceEntity(1U);
    msg.setDestination(47899U);
    msg.setDestinationEntity(0U);
    msg.time = 0.955374748823;
    msg.x = 0.509477477281;
    msg.y = 0.0288683525792;
    msg.z = 0.814537202843;

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
    msg.setTimeStamp(0.857692869985);
    msg.setSource(41096U);
    msg.setSourceEntity(142U);
    msg.setDestination(54109U);
    msg.setDestinationEntity(17U);
    msg.time = 0.969541056248;
    msg.x = 0.961400751282;
    msg.y = 0.84183060527;
    msg.z = 0.341629195544;

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
    msg.setTimeStamp(0.564999199771);
    msg.setSource(53076U);
    msg.setSourceEntity(38U);
    msg.setDestination(9185U);
    msg.setDestinationEntity(221U);
    msg.time = 0.886525259683;
    msg.x = 0.320005933662;
    msg.y = 0.710376287922;
    msg.z = 0.544216353576;

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
    msg.setTimeStamp(0.85029353804);
    msg.setSource(13622U);
    msg.setSourceEntity(101U);
    msg.setDestination(5183U);
    msg.setDestinationEntity(101U);
    msg.time = 0.478935575605;
    msg.x = 0.0857939540807;
    msg.y = 0.526923335613;
    msg.z = 0.0918350584493;

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
    msg.setTimeStamp(0.510681619376);
    msg.setSource(23889U);
    msg.setSourceEntity(125U);
    msg.setDestination(46483U);
    msg.setDestinationEntity(40U);
    msg.validity = 18U;
    msg.x = 0.904443863953;
    msg.y = 0.0688729492567;
    msg.z = 0.595435164352;

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
    msg.setTimeStamp(0.985304616433);
    msg.setSource(21774U);
    msg.setSourceEntity(108U);
    msg.setDestination(48058U);
    msg.setDestinationEntity(70U);
    msg.validity = 40U;
    msg.x = 0.0886504882322;
    msg.y = 0.345492013818;
    msg.z = 0.849405164602;

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
    msg.setTimeStamp(0.278385001747);
    msg.setSource(32604U);
    msg.setSourceEntity(62U);
    msg.setDestination(43494U);
    msg.setDestinationEntity(36U);
    msg.validity = 239U;
    msg.x = 0.333395149466;
    msg.y = 0.825235815081;
    msg.z = 0.682069207325;

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
    msg.setTimeStamp(0.292689912226);
    msg.setSource(63240U);
    msg.setSourceEntity(212U);
    msg.setDestination(41755U);
    msg.setDestinationEntity(20U);
    msg.validity = 151U;
    msg.x = 0.327911099095;
    msg.y = 0.504122752283;
    msg.z = 0.21882411971;

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
    msg.setTimeStamp(0.148467160108);
    msg.setSource(28999U);
    msg.setSourceEntity(152U);
    msg.setDestination(58306U);
    msg.setDestinationEntity(46U);
    msg.validity = 3U;
    msg.x = 0.511143279043;
    msg.y = 0.920071651346;
    msg.z = 0.0903016999131;

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
    msg.setTimeStamp(0.862042621855);
    msg.setSource(49858U);
    msg.setSourceEntity(150U);
    msg.setDestination(3360U);
    msg.setDestinationEntity(139U);
    msg.validity = 253U;
    msg.x = 0.794343003822;
    msg.y = 0.816435210833;
    msg.z = 0.744266746579;

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
    msg.setTimeStamp(0.559608688936);
    msg.setSource(20430U);
    msg.setSourceEntity(72U);
    msg.setDestination(55015U);
    msg.setDestinationEntity(232U);
    msg.time = 0.830148114751;
    msg.x = 0.924380242319;
    msg.y = 0.52782296864;
    msg.z = 0.144773325798;

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
    msg.setTimeStamp(0.407448606787);
    msg.setSource(30384U);
    msg.setSourceEntity(236U);
    msg.setDestination(15887U);
    msg.setDestinationEntity(2U);
    msg.time = 0.72780699753;
    msg.x = 0.902184257347;
    msg.y = 0.55334331262;
    msg.z = 0.871450088214;

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
    msg.setTimeStamp(0.246250595421);
    msg.setSource(24705U);
    msg.setSourceEntity(145U);
    msg.setDestination(18245U);
    msg.setDestinationEntity(178U);
    msg.time = 0.274519565632;
    msg.x = 0.0753236982504;
    msg.y = 0.299289395126;
    msg.z = 0.082117563114;

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
    msg.setTimeStamp(0.382582756746);
    msg.setSource(54102U);
    msg.setSourceEntity(150U);
    msg.setDestination(10053U);
    msg.setDestinationEntity(76U);
    msg.validity = 225U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.177648009985;
    tmp_msg_0.y = 0.0132797367605;
    tmp_msg_0.z = 0.434180526089;
    tmp_msg_0.phi = 0.13112325179;
    tmp_msg_0.theta = 0.824630017473;
    tmp_msg_0.psi = 0.661279476756;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.886627023163;
    tmp_msg_1.beam_height = 0.129225399002;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.577243909174;

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
    msg.setTimeStamp(0.528913875287);
    msg.setSource(44097U);
    msg.setSourceEntity(201U);
    msg.setDestination(12227U);
    msg.setDestinationEntity(241U);
    msg.validity = 20U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.534658318882;
    tmp_msg_0.y = 0.130368337333;
    tmp_msg_0.z = 0.64773098239;
    tmp_msg_0.phi = 0.942740380123;
    tmp_msg_0.theta = 0.937904850731;
    tmp_msg_0.psi = 0.902602416102;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.703063981388;
    tmp_msg_1.beam_height = 0.0241556211685;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.741031487475;

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
    msg.setTimeStamp(0.444720504781);
    msg.setSource(24774U);
    msg.setSourceEntity(156U);
    msg.setDestination(3368U);
    msg.setDestinationEntity(211U);
    msg.validity = 20U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.442705191786;
    tmp_msg_0.y = 0.410220417677;
    tmp_msg_0.z = 0.700143792207;
    tmp_msg_0.phi = 0.553571844717;
    tmp_msg_0.theta = 0.9876551569;
    tmp_msg_0.psi = 0.861890223382;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.52275902088;

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
    msg.setTimeStamp(0.404409175083);
    msg.setSource(31093U);
    msg.setSourceEntity(18U);
    msg.setDestination(59691U);
    msg.setDestinationEntity(14U);
    msg.value = 0.385002717814;

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
    msg.setTimeStamp(0.115022063346);
    msg.setSource(61431U);
    msg.setSourceEntity(187U);
    msg.setDestination(19303U);
    msg.setDestinationEntity(179U);
    msg.value = 0.245266710417;

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
    msg.setTimeStamp(0.688137604398);
    msg.setSource(54062U);
    msg.setSourceEntity(125U);
    msg.setDestination(64555U);
    msg.setDestinationEntity(2U);
    msg.value = 0.945951007142;

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
    msg.setTimeStamp(0.0235353001401);
    msg.setSource(6807U);
    msg.setSourceEntity(239U);
    msg.setDestination(47081U);
    msg.setDestinationEntity(66U);
    msg.value = 0.703357377644;

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
    msg.setTimeStamp(0.719163512835);
    msg.setSource(42869U);
    msg.setSourceEntity(84U);
    msg.setDestination(21220U);
    msg.setDestinationEntity(241U);
    msg.value = 0.617784355022;

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
    msg.setTimeStamp(0.870517720568);
    msg.setSource(19427U);
    msg.setSourceEntity(113U);
    msg.setDestination(62542U);
    msg.setDestinationEntity(225U);
    msg.value = 0.468680315059;

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
    msg.setTimeStamp(0.828093195707);
    msg.setSource(9280U);
    msg.setSourceEntity(133U);
    msg.setDestination(46837U);
    msg.setDestinationEntity(213U);
    msg.value = 0.605567028176;

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
    msg.setTimeStamp(0.0851656165343);
    msg.setSource(33845U);
    msg.setSourceEntity(100U);
    msg.setDestination(39984U);
    msg.setDestinationEntity(144U);
    msg.value = 0.625121438905;

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
    msg.setTimeStamp(0.0963650803499);
    msg.setSource(36847U);
    msg.setSourceEntity(42U);
    msg.setDestination(24916U);
    msg.setDestinationEntity(168U);
    msg.value = 0.961280493907;

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
    msg.setTimeStamp(0.595334718137);
    msg.setSource(20853U);
    msg.setSourceEntity(92U);
    msg.setDestination(8380U);
    msg.setDestinationEntity(44U);
    msg.value = 0.266961607855;

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
    msg.setTimeStamp(0.236990733995);
    msg.setSource(4720U);
    msg.setSourceEntity(127U);
    msg.setDestination(42518U);
    msg.setDestinationEntity(156U);
    msg.value = 0.987313740253;

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
    msg.setTimeStamp(0.383030653017);
    msg.setSource(25126U);
    msg.setSourceEntity(148U);
    msg.setDestination(51063U);
    msg.setDestinationEntity(149U);
    msg.value = 0.340801443472;

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
    msg.setTimeStamp(0.401737077777);
    msg.setSource(61292U);
    msg.setSourceEntity(104U);
    msg.setDestination(44963U);
    msg.setDestinationEntity(165U);
    msg.value = 0.954505508504;

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
    msg.setTimeStamp(0.857443466934);
    msg.setSource(6341U);
    msg.setSourceEntity(112U);
    msg.setDestination(63946U);
    msg.setDestinationEntity(44U);
    msg.value = 0.960402362803;

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
    msg.setTimeStamp(0.167779363612);
    msg.setSource(40108U);
    msg.setSourceEntity(178U);
    msg.setDestination(62438U);
    msg.setDestinationEntity(204U);
    msg.value = 0.454765818242;

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
    msg.setTimeStamp(0.412392386769);
    msg.setSource(42880U);
    msg.setSourceEntity(91U);
    msg.setDestination(9259U);
    msg.setDestinationEntity(175U);
    msg.value = 0.690220439671;

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
    msg.setTimeStamp(0.998067750648);
    msg.setSource(34832U);
    msg.setSourceEntity(80U);
    msg.setDestination(49117U);
    msg.setDestinationEntity(219U);
    msg.value = 0.955794357182;

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
    msg.setTimeStamp(0.593804392951);
    msg.setSource(9824U);
    msg.setSourceEntity(191U);
    msg.setDestination(34219U);
    msg.setDestinationEntity(164U);
    msg.value = 0.401672023641;

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
    msg.setTimeStamp(0.333457946011);
    msg.setSource(29621U);
    msg.setSourceEntity(138U);
    msg.setDestination(62916U);
    msg.setDestinationEntity(44U);
    msg.value = 0.910477605982;

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
    msg.setTimeStamp(0.079428212242);
    msg.setSource(49390U);
    msg.setSourceEntity(0U);
    msg.setDestination(34267U);
    msg.setDestinationEntity(4U);
    msg.value = 0.525949538796;

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
    msg.setTimeStamp(0.762271157556);
    msg.setSource(25237U);
    msg.setSourceEntity(69U);
    msg.setDestination(60135U);
    msg.setDestinationEntity(130U);
    msg.value = 0.0907957480926;

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
    msg.setTimeStamp(0.177604862717);
    msg.setSource(63085U);
    msg.setSourceEntity(115U);
    msg.setDestination(30356U);
    msg.setDestinationEntity(164U);
    msg.value = 0.620942674289;

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
    msg.setTimeStamp(0.895890207394);
    msg.setSource(55560U);
    msg.setSourceEntity(59U);
    msg.setDestination(30157U);
    msg.setDestinationEntity(43U);
    msg.value = 0.890202631776;

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
    msg.setTimeStamp(0.0327458203969);
    msg.setSource(32372U);
    msg.setSourceEntity(108U);
    msg.setDestination(17626U);
    msg.setDestinationEntity(225U);
    msg.value = 0.841994502476;

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
    msg.setTimeStamp(0.355720228298);
    msg.setSource(31145U);
    msg.setSourceEntity(207U);
    msg.setDestination(26281U);
    msg.setDestinationEntity(162U);
    msg.direction = 0.9290945685;
    msg.speed = 0.602872241627;
    msg.turbulence = 0.246739213644;

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
    msg.setTimeStamp(0.54740574812);
    msg.setSource(51438U);
    msg.setSourceEntity(48U);
    msg.setDestination(60095U);
    msg.setDestinationEntity(230U);
    msg.direction = 0.477088863146;
    msg.speed = 0.0581895503172;
    msg.turbulence = 0.876524653079;

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
    msg.setTimeStamp(0.236858776788);
    msg.setSource(17997U);
    msg.setSourceEntity(115U);
    msg.setDestination(2521U);
    msg.setDestinationEntity(39U);
    msg.direction = 0.467776799715;
    msg.speed = 0.975915711714;
    msg.turbulence = 0.85745097451;

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
    msg.setTimeStamp(0.525934961231);
    msg.setSource(20029U);
    msg.setSourceEntity(164U);
    msg.setDestination(3641U);
    msg.setDestinationEntity(167U);
    msg.value = 0.300361681935;

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
    msg.setTimeStamp(0.19232914941);
    msg.setSource(42541U);
    msg.setSourceEntity(50U);
    msg.setDestination(14308U);
    msg.setDestinationEntity(178U);
    msg.value = 0.255670095728;

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
    msg.setTimeStamp(0.751196032201);
    msg.setSource(13289U);
    msg.setSourceEntity(173U);
    msg.setDestination(59003U);
    msg.setDestinationEntity(80U);
    msg.value = 0.931753574899;

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
    msg.setTimeStamp(0.603083346601);
    msg.setSource(42219U);
    msg.setSourceEntity(33U);
    msg.setDestination(13709U);
    msg.setDestinationEntity(163U);
    msg.value.assign("UPKIOKZHLKRZFYAGPTCYBTIIHCVAUHVDYAGSELZQVHJFPELLOZYKITKGHFGWCMWXWXFNGWUPUHDMLLFYHBFEIWJWYUSEMOJNVJQOJUOLSUGZVPNCAEZQBBRTSRCXBRRNXVMGHUUMWJIQZNFNAVBDSDKOTELZJLDAFPECDMBBUADYQOSKCMLSONQQRRCXXAFQPIJSQDNCZNRBWTEGJBVQPTTKXZDEM");

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
    msg.setTimeStamp(0.16431365453);
    msg.setSource(3987U);
    msg.setSourceEntity(90U);
    msg.setDestination(37085U);
    msg.setDestinationEntity(83U);
    msg.value.assign("XHUTSEONTIVHQJRABYAMPWGPDWBZSACNGVLYAKTCSTUIRQKYRAIPNBTDSAAVVNCVZSFUMFGQEZTFPEUGHKURWLDHXJVKZZODIYLJUCQSOCFSGBM");

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
    msg.setTimeStamp(0.811199134975);
    msg.setSource(62111U);
    msg.setSourceEntity(37U);
    msg.setDestination(48348U);
    msg.setDestinationEntity(145U);
    msg.value.assign("LOJRJNXWGDIJCEOUTYBSZIFRQONKFTZYWGFSHBYEWQHCKLETPCWAPXKJNVZSNQWRMSZWUIQJYYUBSFSLHXMOCLGFWZDIDEZZKOAAWGENUPJICRFIMXFQVSHPOQKMXANYRWIFPE");

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
    msg.setTimeStamp(0.0524900642845);
    msg.setSource(5433U);
    msg.setSourceEntity(67U);
    msg.setDestination(31050U);
    msg.setDestinationEntity(49U);
    const char tmp_msg_0[] = {119, 103, -114, -128, -36, 5, -105, 98, -24, 64, 40, -68, -80, -73, 9, 0, 60, -87, 56, -34, 38, -12, 121, 14, 80, -13, 82, -56, -9, 96, 87, -46, 76, 10, 76, 66, 56, 88, -126, -96, 39, 112, 82, 117, -29, 117, 15, 121, 31, -118, -116, 39, -60, 103, -45, -11, 15, 6, 2, -120, 109, -32, -125, -1, -120, 56, 49, 92, 16, -74, -52, 73, 51, 71, 126, 113, -90, -37, 106, -49, -55, 28, -30, 81, 72, 87, -25, 55, 57, 17, 41, 68, 14, -61, 5, -94, 103, -96, 16, -70, 94, -29, -54, 79, 37, -31, 57, -77, 21, 0, 90};
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
    msg.setTimeStamp(0.0319869082388);
    msg.setSource(1863U);
    msg.setSourceEntity(183U);
    msg.setDestination(10274U);
    msg.setDestinationEntity(252U);
    const char tmp_msg_0[] = {117, -29, -73, -81, -94, -30, 51, -110, 26, -25, -88, 111, -93, 49, -48, -45, -120, 92, -120, 79, -119, -126, -22, -117, -53, 84, 78, -80, 104, -127, -114, -67, 33, 14, 40, 102, -100, 45, -10, 125, 45, -84, -122, 4, -109, 5, 125, -54, 6, 14, -2, 17, 97, -123, -118, 50, 6, 61, 19, -1, 65, -28, 100, 9, -62, -17, 123, 14, 67, -53, -87, -64, 79, -79, 9, 51, -23, -25, 116, -5, 85, -100, -25, -50, -52, 53, 12, 9, 114, 80, -123, 67, 82, 92, 25, 43, 59, 45, -3, -23, 28, 24, -28, -38, 120, -124, 114, -39, 93, 117, -45, -4, -123, 92, -57, -13, -57, -44, 18, 108, -105, -73, 37, 66, 67, -113, -27, 85, -65, -91, -37, -56, -67, -82, -45, 96, -30, -36, 82, -47, -6, 29, 55, 31, 102, -53, 102, 45, 53, 56, 58, -79, 106, 109, 102, -69, 119, -10, 77, 103, 0, 75, -20, -123, 8, -21, -75, -69, -108, 92, 37, -23, -116, -92, -97, -72, -82, 63, -49, -40, -64, 60, -5, 108, -59, -102, 100, -73, -65, 121, -94, 82, -124, -21, 77, 70, 64, -43, -18, 58, 73, -101, 16, 120, -31};
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
    msg.setTimeStamp(0.675070802628);
    msg.setSource(23997U);
    msg.setSourceEntity(5U);
    msg.setDestination(18713U);
    msg.setDestinationEntity(134U);
    const char tmp_msg_0[] = {-26, 55, -94, 80, 98, 28, 57, -101, -92, -98, 122, -95, -61, -30, -72, -87, 70, 13, -86, 16, -54, 41, 59, 28, -26, 13, 111, 36, -15, 35, -24, 50, -79, -114, 91, 61, -7, -48, -53, 105, -53, 21, -61, -109, 125, -110, -89, 5, 52, -107, 65, -37, -30, -12, 29, -79, -52, 112, 16, 60, 112, 10, -116, 89, 101, 0, 64, 87, -43, -59, -30, -98, 34, -11, 122, 30, -27, 67, 53, 47, -58, -38, 64, -61, -23, 36, -30, 95, 4, 91, -69, -94, -30, 85, -128, 54, 53, 124, -92, -89, 16, 1, 115, -126, 90, -102, 26, 73, -113, 61, 92, 20, 55, 118, 63, -99, -46, -71, 46, 32, 61, -119, 77, 45, 48, -120, 109, -54, 38, 28, 60, -54, -76, 71, -10, 1, 122, -98, -7, -104, 32, 0, 22, -54, -45, -86, 74, -58, -27, -17, 38, -104, 20, -58, -104, -21, 57, -45, 36, -3, 99, 120, -68, 53, 25, -90, -49, -94, -9, -1, -80, 37, 56, 27, -39, 28, -41, -51, -6, 62, 20, 36, 42, 61, -2, -67, -50, -14, -127, 119, -39, -37, -103, -76, 77, -109, 8, -117, 126, 2, 122, -55, 118, -79, 104, -24, 87, -114, 97, -2, -55, -64, 50, 84, -59, 61, 121, 38, -94, -92, 120, 103, 27, 115, -118, -78, 117, -89, 87, 21, 64, 20, -3, -43, 13, -106, -119};
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
    msg.setTimeStamp(0.365210668506);
    msg.setSource(55957U);
    msg.setSourceEntity(13U);
    msg.setDestination(7306U);
    msg.setDestinationEntity(102U);
    msg.value = 0.973070067646;

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
    msg.setTimeStamp(0.634513118078);
    msg.setSource(24112U);
    msg.setSourceEntity(22U);
    msg.setDestination(30940U);
    msg.setDestinationEntity(165U);
    msg.value = 0.331574344891;

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
    msg.setTimeStamp(0.173062054017);
    msg.setSource(51951U);
    msg.setSourceEntity(45U);
    msg.setDestination(39829U);
    msg.setDestinationEntity(145U);
    msg.value = 0.272493056961;

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
    msg.setTimeStamp(0.188946553752);
    msg.setSource(56136U);
    msg.setSourceEntity(210U);
    msg.setDestination(35077U);
    msg.setDestinationEntity(51U);
    msg.type = 246U;
    msg.frequency = 1519292774U;
    msg.min_range = 16325U;
    msg.max_range = 38217U;
    msg.bits_per_point = 231U;
    msg.scale_factor = 0.122510260597;
    const char tmp_msg_0[] = {-83, 102, 8, 14, -123, 87, 75, -28, -18, -12, -101, 94, 56, 88, -54, 13, 101, 63, 87, -121, -66, -106, 39, -58, -58, -56, -99, -121, 63, -109, 94, 62, -10, 112, -109, -68, -106, 75, 2, 70, 12, -44, -5, 59, 39, 105, 96, -119};
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
    msg.setTimeStamp(0.387816629735);
    msg.setSource(49963U);
    msg.setSourceEntity(192U);
    msg.setDestination(41251U);
    msg.setDestinationEntity(244U);
    msg.type = 110U;
    msg.frequency = 750993228U;
    msg.min_range = 19808U;
    msg.max_range = 29757U;
    msg.bits_per_point = 211U;
    msg.scale_factor = 0.09721884622;
    const char tmp_msg_0[] = {68, 91, 25, 96, 53, -65, -78, -127, -4, 38, 72, 12, 85, -43, -128, -91, -89, 40, -90, -120, -31, 69, 62, 83, -17, -41, -60, 68, -35, 51, 110, -64, -21, 16, 28, 96, 30, -103, 31, -111, -127, 13, 88, -99, -9, -8, 123, 45, 1, -97, 119, 109, 113, -55, -8, -106, 101, -25};
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
    msg.setTimeStamp(0.0136003455847);
    msg.setSource(54534U);
    msg.setSourceEntity(107U);
    msg.setDestination(39264U);
    msg.setDestinationEntity(114U);
    msg.type = 117U;
    msg.frequency = 505917752U;
    msg.min_range = 42654U;
    msg.max_range = 34307U;
    msg.bits_per_point = 248U;
    msg.scale_factor = 0.442595187413;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.598390918568;
    tmp_msg_0.beam_height = 0.0422085124807;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {69, 0, -85, -111, -15, 26, -21, -37, -8, -26, -17, 57, 12, 10, 95, 83, 125, 32, -105, 85, 108, -109, 62, -96, 63, 95, -65, -43, 77, -35, -28, -18, 30, -59, 3, 50, 81, -98, 50, 73, 66, -124, 25, -69, 94, 110, -90, -9, -61, -34, -37, -125, 125, -18, 94, 5, -102, 37, 112, 112, -123, -7, 47, 2, 91, -61, -30, 54, 22, -76, 103, 34, -125, -105, 115, 34, 11, 19, 92, 61, 4, 124, -27, 41, 13, -25, -17, -30, -53};
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
    msg.setTimeStamp(0.137916996904);
    msg.setSource(16200U);
    msg.setSourceEntity(59U);
    msg.setDestination(39128U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.376145359632);
    msg.setSource(28779U);
    msg.setSourceEntity(143U);
    msg.setDestination(40835U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.817935352408);
    msg.setSource(45354U);
    msg.setSourceEntity(212U);
    msg.setDestination(18789U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.199360977044);
    msg.setSource(54442U);
    msg.setSourceEntity(133U);
    msg.setDestination(47713U);
    msg.setDestinationEntity(17U);
    msg.op = 174U;

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
    msg.setTimeStamp(0.120546661723);
    msg.setSource(57431U);
    msg.setSourceEntity(199U);
    msg.setDestination(9887U);
    msg.setDestinationEntity(141U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.490009631183);
    msg.setSource(34573U);
    msg.setSourceEntity(57U);
    msg.setDestination(40431U);
    msg.setDestinationEntity(105U);
    msg.op = 158U;

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
    msg.setTimeStamp(0.214515596238);
    msg.setSource(20357U);
    msg.setSourceEntity(139U);
    msg.setDestination(5342U);
    msg.setDestinationEntity(1U);
    msg.value = 0.695548952477;
    msg.confidence = 0.417068973906;
    msg.opmodes.assign("VQNWXRVYQJWDPURPMRAPRBUFOKOLLOCVMWENJDXHCJGHYHMCTFAEITVREHYDPDZXFVHHROIDUTMSUGUWBJIEVXLCFXLCRZQXIZVBZKDSOKLDBRHLMISPXHSLCOBNLZZCAZSZUBMBKYMXVSJTMCKYAPCWSNGBQGYFQNIPGMFDNWEWOQWNTIEJSXKIYLHWRTDZXTYUNFZQGANTOBQTFAJYKQS");

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
    msg.setTimeStamp(0.943696374221);
    msg.setSource(8644U);
    msg.setSourceEntity(205U);
    msg.setDestination(24585U);
    msg.setDestinationEntity(112U);
    msg.value = 0.0109048266624;
    msg.confidence = 0.867422819451;
    msg.opmodes.assign("VGLZYFDCEHYLZCACCPWRUJUSFIBBR");

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
    msg.setTimeStamp(0.868667839412);
    msg.setSource(21427U);
    msg.setSourceEntity(188U);
    msg.setDestination(58837U);
    msg.setDestinationEntity(214U);
    msg.value = 0.210452966824;
    msg.confidence = 0.831733596453;
    msg.opmodes.assign("HKARTYWRIBQYNQZGIGUHASXDOLVBZFOTMBVOJOPISOSZMZLHQFAZXTRKA");

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
    msg.setTimeStamp(0.150836251609);
    msg.setSource(42203U);
    msg.setSourceEntity(179U);
    msg.setDestination(1365U);
    msg.setDestinationEntity(132U);
    msg.itow = 3347342716U;
    msg.lat = 0.22922963993;
    msg.lon = 0.475052037173;
    msg.height_ell = 0.13560042639;
    msg.height_sea = 0.194061536581;
    msg.hacc = 0.952508746416;
    msg.vacc = 0.041132115131;
    msg.vel_n = 0.99741040044;
    msg.vel_e = 0.873085220986;
    msg.vel_d = 0.130215979936;
    msg.speed = 0.873938089498;
    msg.gspeed = 0.556830026853;
    msg.heading = 0.969528358222;
    msg.sacc = 0.331648870694;
    msg.cacc = 0.152173838685;

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
    msg.setTimeStamp(0.649985765482);
    msg.setSource(13920U);
    msg.setSourceEntity(11U);
    msg.setDestination(42628U);
    msg.setDestinationEntity(15U);
    msg.itow = 2182756225U;
    msg.lat = 0.491721639446;
    msg.lon = 0.350501477589;
    msg.height_ell = 0.109090403236;
    msg.height_sea = 0.127415239026;
    msg.hacc = 0.283148232626;
    msg.vacc = 0.128235537899;
    msg.vel_n = 0.57042697544;
    msg.vel_e = 0.790316812531;
    msg.vel_d = 0.424935958943;
    msg.speed = 0.297990163329;
    msg.gspeed = 0.385743153937;
    msg.heading = 0.518211271149;
    msg.sacc = 0.0240333997828;
    msg.cacc = 0.875219531083;

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
    msg.setTimeStamp(0.370637227011);
    msg.setSource(14084U);
    msg.setSourceEntity(116U);
    msg.setDestination(44887U);
    msg.setDestinationEntity(232U);
    msg.itow = 633813383U;
    msg.lat = 0.0959384973176;
    msg.lon = 0.496235545144;
    msg.height_ell = 0.181959598107;
    msg.height_sea = 0.155886087774;
    msg.hacc = 0.172978826686;
    msg.vacc = 0.527750904228;
    msg.vel_n = 0.711466077732;
    msg.vel_e = 0.48470445387;
    msg.vel_d = 0.793260252162;
    msg.speed = 0.198418303435;
    msg.gspeed = 0.0247812822147;
    msg.heading = 0.331305712228;
    msg.sacc = 0.872914946865;
    msg.cacc = 0.854314247333;

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
    msg.setTimeStamp(0.345377142868);
    msg.setSource(28046U);
    msg.setSourceEntity(104U);
    msg.setDestination(16737U);
    msg.setDestinationEntity(134U);
    msg.id = 150U;
    msg.value = 0.879628365722;

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
    msg.setTimeStamp(0.405608368005);
    msg.setSource(55950U);
    msg.setSourceEntity(38U);
    msg.setDestination(41211U);
    msg.setDestinationEntity(115U);
    msg.id = 126U;
    msg.value = 0.323612168042;

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
    msg.setTimeStamp(0.652569011585);
    msg.setSource(50962U);
    msg.setSourceEntity(117U);
    msg.setDestination(3790U);
    msg.setDestinationEntity(74U);
    msg.id = 137U;
    msg.value = 0.734437737838;

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
    msg.setTimeStamp(0.296993968212);
    msg.setSource(3875U);
    msg.setSourceEntity(23U);
    msg.setDestination(15262U);
    msg.setDestinationEntity(249U);
    msg.x = 0.331725879378;
    msg.y = 0.636520441224;
    msg.z = 0.720871937867;
    msg.phi = 0.525232307664;
    msg.theta = 0.922702423045;
    msg.psi = 0.685589235554;

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
    msg.setTimeStamp(0.595037156761);
    msg.setSource(20070U);
    msg.setSourceEntity(44U);
    msg.setDestination(35833U);
    msg.setDestinationEntity(67U);
    msg.x = 0.589329543327;
    msg.y = 0.611326226405;
    msg.z = 0.895992749385;
    msg.phi = 0.294726510075;
    msg.theta = 0.95303779084;
    msg.psi = 0.475768695643;

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
    msg.setTimeStamp(0.231305474454);
    msg.setSource(42767U);
    msg.setSourceEntity(93U);
    msg.setDestination(35720U);
    msg.setDestinationEntity(6U);
    msg.x = 0.288069336845;
    msg.y = 0.455757638781;
    msg.z = 0.0546366371053;
    msg.phi = 0.614979080529;
    msg.theta = 0.497123905585;
    msg.psi = 0.0141499505567;

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
    msg.setTimeStamp(0.586489367375);
    msg.setSource(26890U);
    msg.setSourceEntity(124U);
    msg.setDestination(41953U);
    msg.setDestinationEntity(248U);
    msg.beam_width = 0.863156939282;
    msg.beam_height = 0.651847893269;

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
    msg.setTimeStamp(0.751875626708);
    msg.setSource(21667U);
    msg.setSourceEntity(90U);
    msg.setDestination(7962U);
    msg.setDestinationEntity(58U);
    msg.beam_width = 0.338365348675;
    msg.beam_height = 0.910768665043;

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
    msg.setTimeStamp(0.257503100318);
    msg.setSource(60925U);
    msg.setSourceEntity(0U);
    msg.setDestination(41098U);
    msg.setDestinationEntity(38U);
    msg.beam_width = 0.874714495733;
    msg.beam_height = 0.909057719538;

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
    msg.setTimeStamp(0.730117180783);
    msg.setSource(26736U);
    msg.setSourceEntity(169U);
    msg.setDestination(56895U);
    msg.setDestinationEntity(114U);
    msg.sane = 97U;

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
    msg.setTimeStamp(0.555152965976);
    msg.setSource(61981U);
    msg.setSourceEntity(185U);
    msg.setDestination(22879U);
    msg.setDestinationEntity(135U);
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
    msg.setTimeStamp(0.329010797273);
    msg.setSource(51U);
    msg.setSourceEntity(6U);
    msg.setDestination(29432U);
    msg.setDestinationEntity(165U);
    msg.sane = 54U;

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
    msg.setTimeStamp(0.846190461828);
    msg.setSource(55837U);
    msg.setSourceEntity(3U);
    msg.setDestination(55254U);
    msg.setDestinationEntity(125U);
    msg.value = 0.0863985841494;

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
    msg.setTimeStamp(0.576554509678);
    msg.setSource(29132U);
    msg.setSourceEntity(228U);
    msg.setDestination(13064U);
    msg.setDestinationEntity(3U);
    msg.value = 0.468327989708;

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
    msg.setTimeStamp(0.964373760387);
    msg.setSource(62101U);
    msg.setSourceEntity(107U);
    msg.setDestination(22578U);
    msg.setDestinationEntity(77U);
    msg.value = 0.604737346541;

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
    msg.setTimeStamp(0.166183099402);
    msg.setSource(5152U);
    msg.setSourceEntity(94U);
    msg.setDestination(27409U);
    msg.setDestinationEntity(58U);
    msg.value = 0.767005664377;

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
    msg.setTimeStamp(0.664475723331);
    msg.setSource(34631U);
    msg.setSourceEntity(166U);
    msg.setDestination(1875U);
    msg.setDestinationEntity(137U);
    msg.value = 0.855491288559;

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
    msg.setTimeStamp(0.856557412304);
    msg.setSource(29644U);
    msg.setSourceEntity(155U);
    msg.setDestination(35120U);
    msg.setDestinationEntity(16U);
    msg.value = 0.70951194791;

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
    msg.setTimeStamp(0.990790623826);
    msg.setSource(18945U);
    msg.setSourceEntity(143U);
    msg.setDestination(44230U);
    msg.setDestinationEntity(193U);
    msg.value = 0.610380777344;

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
    msg.setTimeStamp(0.300249491018);
    msg.setSource(35535U);
    msg.setSourceEntity(215U);
    msg.setDestination(7420U);
    msg.setDestinationEntity(217U);
    msg.value = 0.720964277356;

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
    msg.setTimeStamp(0.716937533004);
    msg.setSource(18316U);
    msg.setSourceEntity(252U);
    msg.setDestination(18310U);
    msg.setDestinationEntity(224U);
    msg.value = 0.886240212339;

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
    msg.setTimeStamp(0.601907634504);
    msg.setSource(53027U);
    msg.setSourceEntity(185U);
    msg.setDestination(10821U);
    msg.setDestinationEntity(18U);
    msg.value = 0.0766173578318;

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
    msg.setTimeStamp(0.101210266349);
    msg.setSource(40937U);
    msg.setSourceEntity(72U);
    msg.setDestination(4643U);
    msg.setDestinationEntity(165U);
    msg.value = 0.0961834406969;

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
    msg.setTimeStamp(0.864491588262);
    msg.setSource(37576U);
    msg.setSourceEntity(33U);
    msg.setDestination(10209U);
    msg.setDestinationEntity(106U);
    msg.value = 0.798058922221;

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
    msg.setTimeStamp(0.957148660803);
    msg.setSource(52693U);
    msg.setSourceEntity(155U);
    msg.setDestination(14448U);
    msg.setDestinationEntity(71U);
    msg.value = 0.722331438171;

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
    msg.setTimeStamp(0.356037153303);
    msg.setSource(34016U);
    msg.setSourceEntity(157U);
    msg.setDestination(30165U);
    msg.setDestinationEntity(169U);
    msg.value = 0.967915549019;

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
    msg.setTimeStamp(0.85626389769);
    msg.setSource(51567U);
    msg.setSourceEntity(236U);
    msg.setDestination(1684U);
    msg.setDestinationEntity(72U);
    msg.value = 0.143431138017;

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
    msg.setTimeStamp(0.438095669159);
    msg.setSource(23262U);
    msg.setSourceEntity(179U);
    msg.setDestination(32865U);
    msg.setDestinationEntity(9U);
    msg.value = 0.306450422318;

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
    msg.setTimeStamp(0.128879490317);
    msg.setSource(13173U);
    msg.setSourceEntity(66U);
    msg.setDestination(40452U);
    msg.setDestinationEntity(240U);
    msg.value = 0.697502913062;

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
    msg.setTimeStamp(0.991111508301);
    msg.setSource(39243U);
    msg.setSourceEntity(3U);
    msg.setDestination(8258U);
    msg.setDestinationEntity(110U);
    msg.value = 0.52888893202;

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
    msg.setTimeStamp(0.165887291167);
    msg.setSource(24274U);
    msg.setSourceEntity(187U);
    msg.setDestination(20149U);
    msg.setDestinationEntity(53U);
    msg.value = 0.663252194494;

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
    msg.setTimeStamp(0.548276982882);
    msg.setSource(41030U);
    msg.setSourceEntity(113U);
    msg.setDestination(31757U);
    msg.setDestinationEntity(115U);
    msg.value = 0.572804953747;

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
    msg.setTimeStamp(0.176397370845);
    msg.setSource(53552U);
    msg.setSourceEntity(169U);
    msg.setDestination(16818U);
    msg.setDestinationEntity(92U);
    msg.value = 0.632122171155;

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
    msg.setTimeStamp(0.241493862786);
    msg.setSource(56457U);
    msg.setSourceEntity(85U);
    msg.setDestination(38413U);
    msg.setDestinationEntity(137U);
    msg.value = 0.979220402037;

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
    msg.setTimeStamp(0.802887267078);
    msg.setSource(54469U);
    msg.setSourceEntity(79U);
    msg.setDestination(16435U);
    msg.setDestinationEntity(165U);
    msg.value = 0.556081795692;

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
    msg.setTimeStamp(0.209936138227);
    msg.setSource(33586U);
    msg.setSourceEntity(68U);
    msg.setDestination(17346U);
    msg.setDestinationEntity(41U);
    msg.value = 0.97667609816;

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
    msg.setTimeStamp(0.678906752251);
    msg.setSource(7178U);
    msg.setSourceEntity(92U);
    msg.setDestination(1778U);
    msg.setDestinationEntity(123U);
    msg.validity = 10753U;
    msg.type = 184U;
    msg.tow = 1070999873U;
    msg.base_lat = 0.838770690057;
    msg.base_lon = 0.601987622198;
    msg.base_height = 0.0633649864308;
    msg.n = 0.263111550969;
    msg.e = 0.851235388676;
    msg.d = 0.353106963971;
    msg.v_n = 0.148054095022;
    msg.v_e = 0.973770937101;
    msg.v_d = 0.623675241785;
    msg.satellites = 72U;
    msg.iar_hyp = 24286U;
    msg.iar_ratio = 0.528673515546;

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
    msg.setTimeStamp(0.0921702086062);
    msg.setSource(21793U);
    msg.setSourceEntity(157U);
    msg.setDestination(51331U);
    msg.setDestinationEntity(69U);
    msg.validity = 15840U;
    msg.type = 27U;
    msg.tow = 1525012027U;
    msg.base_lat = 0.234650691925;
    msg.base_lon = 0.983202005942;
    msg.base_height = 0.731164021706;
    msg.n = 0.765294567277;
    msg.e = 0.425824631023;
    msg.d = 0.264352911523;
    msg.v_n = 0.528630124804;
    msg.v_e = 0.26282611941;
    msg.v_d = 0.339477929354;
    msg.satellites = 156U;
    msg.iar_hyp = 45474U;
    msg.iar_ratio = 0.974947243573;

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
    msg.setTimeStamp(0.00698263619236);
    msg.setSource(32855U);
    msg.setSourceEntity(208U);
    msg.setDestination(22118U);
    msg.setDestinationEntity(219U);
    msg.validity = 44259U;
    msg.type = 103U;
    msg.tow = 4236588239U;
    msg.base_lat = 0.539937356922;
    msg.base_lon = 0.262851674929;
    msg.base_height = 0.657114451675;
    msg.n = 0.00152523758277;
    msg.e = 0.398567260862;
    msg.d = 0.080226414967;
    msg.v_n = 0.378093563801;
    msg.v_e = 0.733120552807;
    msg.v_d = 0.392452164781;
    msg.satellites = 14U;
    msg.iar_hyp = 7800U;
    msg.iar_ratio = 0.694578940986;

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
    msg.setTimeStamp(0.243448333195);
    msg.setSource(56962U);
    msg.setSourceEntity(240U);
    msg.setDestination(59691U);
    msg.setDestinationEntity(16U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.793625240185;
    tmp_msg_0.lon = 0.403030812327;
    tmp_msg_0.height = 0.0384268669828;
    tmp_msg_0.x = 0.325410259958;
    tmp_msg_0.y = 0.0386365779336;
    tmp_msg_0.z = 0.315187574098;
    tmp_msg_0.phi = 0.774152771203;
    tmp_msg_0.theta = 0.0312061492437;
    tmp_msg_0.psi = 0.394920307893;
    tmp_msg_0.u = 0.711679248025;
    tmp_msg_0.v = 0.476861093328;
    tmp_msg_0.w = 0.0985061690069;
    tmp_msg_0.vx = 0.40286573959;
    tmp_msg_0.vy = 0.612137355947;
    tmp_msg_0.vz = 0.0607913027234;
    tmp_msg_0.p = 0.835938490352;
    tmp_msg_0.q = 0.922262888613;
    tmp_msg_0.r = 0.182120723995;
    tmp_msg_0.depth = 0.488362535867;
    tmp_msg_0.alt = 0.0715105813173;
    msg.state.set(tmp_msg_0);
    msg.type = 176U;

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
    msg.setTimeStamp(0.366146076817);
    msg.setSource(25151U);
    msg.setSourceEntity(136U);
    msg.setDestination(29843U);
    msg.setDestinationEntity(103U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.00760266285406;
    tmp_msg_0.lon = 0.683799782752;
    tmp_msg_0.height = 0.169482423585;
    tmp_msg_0.x = 0.747037805779;
    tmp_msg_0.y = 0.216846501172;
    tmp_msg_0.z = 0.565548550541;
    tmp_msg_0.phi = 0.598675351781;
    tmp_msg_0.theta = 0.0476272938324;
    tmp_msg_0.psi = 0.744566206135;
    tmp_msg_0.u = 0.470150821058;
    tmp_msg_0.v = 0.154301464655;
    tmp_msg_0.w = 0.00435718960999;
    tmp_msg_0.vx = 0.67193133187;
    tmp_msg_0.vy = 0.759399390372;
    tmp_msg_0.vz = 0.673550606362;
    tmp_msg_0.p = 0.460938854168;
    tmp_msg_0.q = 0.659800233572;
    tmp_msg_0.r = 0.833265956552;
    tmp_msg_0.depth = 0.153561865724;
    tmp_msg_0.alt = 0.733579163079;
    msg.state.set(tmp_msg_0);
    msg.type = 1U;

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
    msg.setTimeStamp(0.483378816651);
    msg.setSource(41487U);
    msg.setSourceEntity(21U);
    msg.setDestination(26570U);
    msg.setDestinationEntity(160U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.870791688982;
    tmp_msg_0.lon = 0.3332332135;
    tmp_msg_0.height = 0.707404596613;
    tmp_msg_0.x = 0.819583358398;
    tmp_msg_0.y = 0.25613940776;
    tmp_msg_0.z = 0.624288773753;
    tmp_msg_0.phi = 0.451658374296;
    tmp_msg_0.theta = 0.778568994697;
    tmp_msg_0.psi = 0.944819373188;
    tmp_msg_0.u = 0.46819102565;
    tmp_msg_0.v = 0.843489883548;
    tmp_msg_0.w = 0.126288316985;
    tmp_msg_0.vx = 0.570164640876;
    tmp_msg_0.vy = 0.870450572274;
    tmp_msg_0.vz = 0.740884858821;
    tmp_msg_0.p = 0.103164160808;
    tmp_msg_0.q = 0.0755310531927;
    tmp_msg_0.r = 0.423620642885;
    tmp_msg_0.depth = 0.50949684745;
    tmp_msg_0.alt = 0.571390239598;
    msg.state.set(tmp_msg_0);
    msg.type = 24U;

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
    msg.setTimeStamp(0.105665956929);
    msg.setSource(10890U);
    msg.setSourceEntity(5U);
    msg.setDestination(57619U);
    msg.setDestinationEntity(179U);
    msg.value = 0.48246167171;

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
    msg.setTimeStamp(0.270773270294);
    msg.setSource(4448U);
    msg.setSourceEntity(3U);
    msg.setDestination(37615U);
    msg.setDestinationEntity(159U);
    msg.value = 0.878999058592;

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
    msg.setTimeStamp(0.960796832184);
    msg.setSource(21879U);
    msg.setSourceEntity(124U);
    msg.setDestination(54877U);
    msg.setDestinationEntity(108U);
    msg.value = 0.638559220952;

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
    msg.setTimeStamp(0.466767799703);
    msg.setSource(23200U);
    msg.setSourceEntity(180U);
    msg.setDestination(28276U);
    msg.setDestinationEntity(98U);
    msg.value = 0.0750642940407;

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
    msg.setTimeStamp(0.335307726044);
    msg.setSource(2399U);
    msg.setSourceEntity(233U);
    msg.setDestination(57084U);
    msg.setDestinationEntity(91U);
    msg.value = 0.616069551471;

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
    msg.setTimeStamp(0.054670879453);
    msg.setSource(65175U);
    msg.setSourceEntity(198U);
    msg.setDestination(20492U);
    msg.setDestinationEntity(221U);
    msg.value = 0.167700460413;

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
    msg.setTimeStamp(0.915318858607);
    msg.setSource(5970U);
    msg.setSourceEntity(248U);
    msg.setDestination(5948U);
    msg.setDestinationEntity(208U);
    msg.value = 0.759475458233;

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
    msg.setTimeStamp(0.385064010218);
    msg.setSource(46166U);
    msg.setSourceEntity(32U);
    msg.setDestination(22005U);
    msg.setDestinationEntity(42U);
    msg.value = 0.625712297401;

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
    msg.setTimeStamp(0.619391363598);
    msg.setSource(42502U);
    msg.setSourceEntity(12U);
    msg.setDestination(5462U);
    msg.setDestinationEntity(22U);
    msg.value = 0.288587286071;

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
    msg.setTimeStamp(0.0777626167706);
    msg.setSource(44724U);
    msg.setSourceEntity(64U);
    msg.setDestination(6142U);
    msg.setDestinationEntity(83U);
    msg.value = 0.0812163868593;

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
    msg.setTimeStamp(0.500729529819);
    msg.setSource(45666U);
    msg.setSourceEntity(65U);
    msg.setDestination(55871U);
    msg.setDestinationEntity(126U);
    msg.value = 0.175868058879;

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
    msg.setTimeStamp(0.677901553396);
    msg.setSource(40977U);
    msg.setSourceEntity(138U);
    msg.setDestination(45951U);
    msg.setDestinationEntity(191U);
    msg.value = 0.752201472994;

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
    msg.setTimeStamp(0.197180652742);
    msg.setSource(239U);
    msg.setSourceEntity(156U);
    msg.setDestination(27379U);
    msg.setDestinationEntity(147U);
    msg.value = 0.514612871995;

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
    msg.setTimeStamp(0.933426722799);
    msg.setSource(34337U);
    msg.setSourceEntity(41U);
    msg.setDestination(9300U);
    msg.setDestinationEntity(12U);
    msg.value = 0.584939406553;

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
    msg.setTimeStamp(0.778033926613);
    msg.setSource(52996U);
    msg.setSourceEntity(127U);
    msg.setDestination(22125U);
    msg.setDestinationEntity(106U);
    msg.value = 0.57414325044;

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
    msg.setTimeStamp(0.952815997086);
    msg.setSource(43603U);
    msg.setSourceEntity(88U);
    msg.setDestination(2486U);
    msg.setDestinationEntity(216U);
    msg.id = 231U;
    msg.zoom = 228U;
    msg.action = 102U;

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
    msg.setTimeStamp(0.55576629474);
    msg.setSource(17613U);
    msg.setSourceEntity(119U);
    msg.setDestination(5411U);
    msg.setDestinationEntity(58U);
    msg.id = 113U;
    msg.zoom = 231U;
    msg.action = 75U;

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
    msg.setTimeStamp(0.254538542463);
    msg.setSource(27639U);
    msg.setSourceEntity(153U);
    msg.setDestination(41936U);
    msg.setDestinationEntity(192U);
    msg.id = 92U;
    msg.zoom = 246U;
    msg.action = 26U;

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
    msg.setTimeStamp(0.500474813981);
    msg.setSource(62187U);
    msg.setSourceEntity(176U);
    msg.setDestination(13667U);
    msg.setDestinationEntity(114U);
    msg.id = 174U;
    msg.value = 0.59426534946;

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
    msg.setTimeStamp(0.384970164642);
    msg.setSource(48455U);
    msg.setSourceEntity(175U);
    msg.setDestination(28313U);
    msg.setDestinationEntity(148U);
    msg.id = 219U;
    msg.value = 0.324219667262;

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
    msg.setTimeStamp(0.763404665019);
    msg.setSource(10560U);
    msg.setSourceEntity(163U);
    msg.setDestination(4488U);
    msg.setDestinationEntity(27U);
    msg.id = 118U;
    msg.value = 0.487737764747;

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
    msg.setTimeStamp(0.998010605238);
    msg.setSource(61375U);
    msg.setSourceEntity(216U);
    msg.setDestination(56297U);
    msg.setDestinationEntity(42U);
    msg.id = 153U;
    msg.value = 0.40232311756;

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
    msg.setTimeStamp(0.303836787663);
    msg.setSource(10131U);
    msg.setSourceEntity(54U);
    msg.setDestination(12218U);
    msg.setDestinationEntity(104U);
    msg.id = 179U;
    msg.value = 0.364876150826;

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
    msg.setTimeStamp(0.203100467656);
    msg.setSource(64327U);
    msg.setSourceEntity(211U);
    msg.setDestination(20930U);
    msg.setDestinationEntity(253U);
    msg.id = 84U;
    msg.value = 0.833915707555;

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
    msg.setTimeStamp(0.65167064097);
    msg.setSource(416U);
    msg.setSourceEntity(242U);
    msg.setDestination(27595U);
    msg.setDestinationEntity(231U);
    msg.id = 65U;
    msg.angle = 0.363526022847;

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
    msg.setTimeStamp(0.663404821977);
    msg.setSource(48458U);
    msg.setSourceEntity(179U);
    msg.setDestination(18822U);
    msg.setDestinationEntity(231U);
    msg.id = 250U;
    msg.angle = 0.486536722426;

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
    msg.setTimeStamp(0.390456853316);
    msg.setSource(53970U);
    msg.setSourceEntity(2U);
    msg.setDestination(50567U);
    msg.setDestinationEntity(248U);
    msg.id = 179U;
    msg.angle = 0.236856872211;

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
    msg.setTimeStamp(0.897022917261);
    msg.setSource(14165U);
    msg.setSourceEntity(181U);
    msg.setDestination(29075U);
    msg.setDestinationEntity(202U);
    msg.op = 71U;
    msg.actions.assign("ATSZRLZEORRJDKNHCKLNNYBTORSMHJIJSUNZUPSRMREYLGAMZANYQEGWIDBXSFVOPLYNIJATJODBFOBVPXZFLATDKYDVQGPWAROHDWQTLCAJSLUAXMXCVECKKHKBLQLJJXYWCSXIHICCZTMPYYNDJOQSTIYYENWKWGQPGIZITKVFPDPNKXHRUDEUESAEQJGFUUGIBZZVWXPXEVTVLUSCFATXCMMFRBGHOGHOFDBMIVOQENGWURZ");

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
    msg.setTimeStamp(0.823493854758);
    msg.setSource(43712U);
    msg.setSourceEntity(88U);
    msg.setDestination(57871U);
    msg.setDestinationEntity(122U);
    msg.op = 117U;
    msg.actions.assign("XEENDZAOPZAOBMAFQOWRGKZWTFFAWOGRYWIDGUBCENKMQS");

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
    msg.setTimeStamp(0.277391995336);
    msg.setSource(36438U);
    msg.setSourceEntity(197U);
    msg.setDestination(49181U);
    msg.setDestinationEntity(198U);
    msg.op = 92U;
    msg.actions.assign("NHZLKGSWJCELWHCMDFCBNBXDRUOJTYDYLALJZTKCADFFINMWVFBGMQYOLYHEKZXUMEXFQMERKHQWUBQLYFJMBUUFGZFOYDLAVROVOVRWBSJQPEPIIZHHZYVCMJWPRGNJMNYSWCTGQKVWMHDAKXHYQLPUACPVXMUGSSNUIINKIXZHP");

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
    msg.setTimeStamp(0.599587548205);
    msg.setSource(53204U);
    msg.setSourceEntity(175U);
    msg.setDestination(28522U);
    msg.setDestinationEntity(24U);
    msg.actions.assign("URBJBQRQFOAAHBPFTKVXGQYZTQBUREHIHULIMTGIWXOGCKXPGOBLOGCXQXFVCFOMTFVPMGGDHACWEWRHDJINHDJUSORBSMLXHLQLJJEBNAWDNPZGTLDOZRKQTAESNKZZHXIKTYUDVBAYYCQWJZNNRKPEMPSMTBXKTGJXWODCPZFWYHAUMFZRFDVYKEYUZVVHEITPLPEPDOONNDXGWJIAELNQFYUVBUCQWMRJL");

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
    msg.setTimeStamp(0.317004354561);
    msg.setSource(47347U);
    msg.setSourceEntity(200U);
    msg.setDestination(64847U);
    msg.setDestinationEntity(202U);
    msg.actions.assign("SEVDPWYYHWSOAXTIJOPIWIDLLOYRAMEBNRTYUKALRUSEGKZGEZAJVWOCMTEBSSIDPQJUMFCLLBHASTNODRUIXAPLNDHYLGNJRURNFBFHUBZEXOXNPHXXZZGYBFKPUVWMZTLUDQHWITSNTRTKODVRXRICAMOKYQVEUJKJM");

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
    msg.setTimeStamp(0.137940946279);
    msg.setSource(31331U);
    msg.setSourceEntity(142U);
    msg.setDestination(47777U);
    msg.setDestinationEntity(247U);
    msg.actions.assign("WRDUIIMNOURUBVZAQNDCGFZWUNOKOIDDAVRYTIPTQXYXPXCULWJCMSTONHFBCQGCIPCGSJFYIOXLHCJEELIAQJEDWKFRMACXSWJTQSYRTVODABNKHCSRKOVQMEKHEGXHGSMEIZVXPVEPHBEWPJQ");

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
    msg.setTimeStamp(0.670190314415);
    msg.setSource(45202U);
    msg.setSourceEntity(124U);
    msg.setDestination(51632U);
    msg.setDestinationEntity(36U);
    msg.button = 103U;
    msg.value = 109U;

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
    msg.setTimeStamp(0.0993206785652);
    msg.setSource(47035U);
    msg.setSourceEntity(33U);
    msg.setDestination(59505U);
    msg.setDestinationEntity(20U);
    msg.button = 30U;
    msg.value = 108U;

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
    msg.setTimeStamp(0.255173335645);
    msg.setSource(35595U);
    msg.setSourceEntity(143U);
    msg.setDestination(5672U);
    msg.setDestinationEntity(190U);
    msg.button = 124U;
    msg.value = 47U;

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
    msg.setTimeStamp(0.562794107871);
    msg.setSource(47507U);
    msg.setSourceEntity(113U);
    msg.setDestination(47838U);
    msg.setDestinationEntity(202U);
    msg.op = 142U;
    msg.text.assign("RFCMXVJIFTCUBLXPDESGBNHAMTKBWJKOPFTYHTXWNSLKQAAHBCSPNLJOTVNKHWGWIVLRRYUVKCGCRIDQJQWYAMAFZGWADQIYUJQJSELWJNXDSUNIAFTNYUQVMVQADQEIXOUJHOZSQDVVZFRWCRPPYEEYMCDXLUEZNRKIZJIEGMZBHSXPVSCMRGPBISHIEXOGWKNPEBZE");

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
    msg.setTimeStamp(0.401038392784);
    msg.setSource(64927U);
    msg.setSourceEntity(244U);
    msg.setDestination(42639U);
    msg.setDestinationEntity(223U);
    msg.op = 174U;
    msg.text.assign("ZOYNYIWLGNEVAYLDFEVXMACLUPFFDHKJKCIBGVFACSJDCHBGRSUNPFRSOHHFGELVWBIGFMUBVLUHBEDTQOWYUARGJIZQVMWXJHTCGIUNSPDIOQJBNWBTGQULA");

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
    msg.setTimeStamp(0.708845008645);
    msg.setSource(64837U);
    msg.setSourceEntity(22U);
    msg.setDestination(28542U);
    msg.setDestinationEntity(182U);
    msg.op = 15U;
    msg.text.assign("DXTRKOBKSIRKDQJLRPFZOLZTNAFGPMHBAATJ");

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
    msg.setTimeStamp(0.355444072709);
    msg.setSource(57431U);
    msg.setSourceEntity(191U);
    msg.setDestination(24188U);
    msg.setDestinationEntity(247U);
    msg.op = 172U;
    msg.time_remain = 0.913453364257;
    msg.sched_time = 0.256164309782;

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
    msg.setTimeStamp(0.0835158287141);
    msg.setSource(11161U);
    msg.setSourceEntity(106U);
    msg.setDestination(56274U);
    msg.setDestinationEntity(145U);
    msg.op = 15U;
    msg.time_remain = 0.735353590994;
    msg.sched_time = 0.452230924481;

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
    msg.setTimeStamp(0.147519244298);
    msg.setSource(49769U);
    msg.setSourceEntity(138U);
    msg.setDestination(12113U);
    msg.setDestinationEntity(196U);
    msg.op = 8U;
    msg.time_remain = 0.178995177168;
    msg.sched_time = 0.705487596339;

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
    msg.setTimeStamp(0.860779917272);
    msg.setSource(46495U);
    msg.setSourceEntity(180U);
    msg.setDestination(16903U);
    msg.setDestinationEntity(113U);
    msg.name.assign("VPYBWHMOEVARVPFYIMEWIZRDBREMOLLFHYEJPRFSJBOSSZMNXEBIGBQAKMAXFILUGWNOJICQNDHOTSCQVTZGZNBEWXRVGKWNNFHWTQUMSVUWDQEQZJXXGKLCCIJRSDEZOJLYQKTEYQUIDZJVJOYDTBLMRHXLUARM");
    msg.op = 205U;
    msg.sched_time = 0.270087433641;

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
    msg.setTimeStamp(0.157463876272);
    msg.setSource(3029U);
    msg.setSourceEntity(157U);
    msg.setDestination(5861U);
    msg.setDestinationEntity(26U);
    msg.name.assign("DLMIEWQTVBQHIJUZLLYFGMJBCMOMNWBKRLPRMYYSLTTHIYGDTOIZUWIEXQMFVHXUOWDNRFDZLPENFAELWFNJJGHRKXUXGSDGKTVK");
    msg.op = 31U;
    msg.sched_time = 0.139253132443;

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
    msg.setTimeStamp(0.145479996428);
    msg.setSource(4610U);
    msg.setSourceEntity(157U);
    msg.setDestination(12063U);
    msg.setDestinationEntity(200U);
    msg.name.assign("XJRHMNPGBVZCRPYNVVIGVPCHSFKDWIXSPLHTDLEUUFBIHSIBTXHQQTQDGYXAYYJLLBAFMRMFYERIBRUCQSJOXULFKLEVVWHEXVLYZNSTDZXZYATNHAPOGPMKSCYVYAPTJRJRGQCGJSQEEEFT");
    msg.op = 47U;
    msg.sched_time = 0.363575586603;

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
    msg.setTimeStamp(0.460435470085);
    msg.setSource(43707U);
    msg.setSourceEntity(64U);
    msg.setDestination(4694U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.953229762309);
    msg.setSource(27468U);
    msg.setSourceEntity(58U);
    msg.setDestination(11487U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.823207645265);
    msg.setSource(56540U);
    msg.setSourceEntity(101U);
    msg.setDestination(48997U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.158466870466);
    msg.setSource(35602U);
    msg.setSourceEntity(218U);
    msg.setDestination(7753U);
    msg.setDestinationEntity(40U);
    msg.name.assign("AHBXRNMQDFGYZLHBLRLGEMLMREDIKFCQLDHQNOXMIKVVED");
    msg.state = 192U;

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
    msg.setTimeStamp(0.00136779687623);
    msg.setSource(15553U);
    msg.setSourceEntity(206U);
    msg.setDestination(44821U);
    msg.setDestinationEntity(125U);
    msg.name.assign("ETVERSUTLKUFMGUOKNFOPQMSNOHZHIIZBZEMSROVPUEKPSYFQYLIGUANFFIAZLCHFCYJAPGCXGUHRRSVCSOEB");
    msg.state = 82U;

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
    msg.setTimeStamp(0.165820087864);
    msg.setSource(34476U);
    msg.setSourceEntity(108U);
    msg.setDestination(12208U);
    msg.setDestinationEntity(63U);
    msg.name.assign("ZBCFXHMFBPRXZIOWZIRANNNILECBXVMOKHJMQCRKSMVFVAOGSGQOZESBUGTXSPQNCHDZKIFYLYIVWCLRFLZEKMDQSYTNKKGUEWLOLATJWPCPQAVCFLTRTADTGSOEJYBJUNXCEQRPGJBDVGSOANUPJQKHLQXWLZUBGNBZHTWJAYADIYJUYUCWGDIVPKPZJXDDHYSXFEMOORSXYUDKWMTQFMS");
    msg.state = 78U;

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
    msg.setTimeStamp(0.105087951753);
    msg.setSource(16616U);
    msg.setSourceEntity(11U);
    msg.setDestination(9255U);
    msg.setDestinationEntity(233U);
    msg.name.assign("GAPMUKQKCKITDAGCWVMDLDLMEWEASQYKNOLJNDTUPMRZWVGUJRZPOSCXTHAIMUKCTEZKXIFBDGWPOTYZRFYPTFLTSMGJDRBJEAXQYYMHBSISWHDSVZNHRESQGNZRKCGLLUYOKPGEWNAHHJNBWOTYXCGMWFWUVIYPDQOOEPFJZXVQSOCXJNAJRHPZFSMUOYZJTSCHUXQEDRRJAQIXBIZPIMIBFQFLCQ");
    msg.value = 11U;

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
    msg.setTimeStamp(0.372941588086);
    msg.setSource(64796U);
    msg.setSourceEntity(105U);
    msg.setDestination(22526U);
    msg.setDestinationEntity(131U);
    msg.name.assign("CFYXOQWFOKUMNNNTWHOJGEPXFZDZBZARREVXGYPAWC");
    msg.value = 27U;

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
    msg.setTimeStamp(0.127649958175);
    msg.setSource(17685U);
    msg.setSourceEntity(115U);
    msg.setDestination(34719U);
    msg.setDestinationEntity(57U);
    msg.name.assign("KBCRDHWOEMBEQCUYKOJNZRMTNLGSBNOZYHTJSGCJNCJWZLLJXIEVZXPQBQPYWFEKUYBSDHYJUCXECLAPJYFCETVAXTYAGVDZNRERTAJFQLQBPQCLJFPLBSHMAQQWZGNIMAGUIHHLOWUGMTIUDXDVMPRVJYUDWSWCDXKONRZHXMSSFZKBRZXCLNK");
    msg.value = 53U;

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
    msg.setTimeStamp(0.804266368969);
    msg.setSource(25860U);
    msg.setSourceEntity(24U);
    msg.setDestination(14008U);
    msg.setDestinationEntity(204U);
    msg.name.assign("ZQTUDVKAFWNQNHOBKFEEGZQWIOHMGYCHTEMLWJITXXQZUPRBYMFFFBUUSRGRVUJYWSFGWXSDNTOAAIMHRVXXJDOIKGCSPOODCCMWKCHFAQOSEGZDYLADXBEFMZZZTJHQAPNCE");

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
    msg.setTimeStamp(0.837098669798);
    msg.setSource(22016U);
    msg.setSourceEntity(153U);
    msg.setDestination(51349U);
    msg.setDestinationEntity(201U);
    msg.name.assign("QVHPCFJIBYLRIRGGNRWECDEPQDTJLEOYUDVHREVAXJQIJHYVZEREJOSETMXFRWCWNXSDMNIMZWUDELKLHOHQVJGCCIUKMXODSTTMLXVIWOGKVTASPCBSAGMARFLZARNNPFZBYMQLXEAKGQXIDJFVFYATQ");

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
    msg.setTimeStamp(0.016765948266);
    msg.setSource(13949U);
    msg.setSourceEntity(242U);
    msg.setDestination(57263U);
    msg.setDestinationEntity(2U);
    msg.name.assign("EVKDMHGDQFQPWKLZFOJDISJJMTOFHOUUHSXBSCBMYBYQWHPUZCAMNRGJIWFYKLODTTTOSZEPLTLE");

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
    msg.setTimeStamp(0.798672842917);
    msg.setSource(35112U);
    msg.setSourceEntity(125U);
    msg.setDestination(56859U);
    msg.setDestinationEntity(111U);
    msg.name.assign("UWAYYOPZUAWKHKVMUEPIQZZKNMNPBLQRQVTKFHILZIRUC");
    msg.value = 223U;

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
    msg.setTimeStamp(0.809513540598);
    msg.setSource(24214U);
    msg.setSourceEntity(62U);
    msg.setDestination(48169U);
    msg.setDestinationEntity(96U);
    msg.name.assign("UBCGLVBSAW");
    msg.value = 147U;

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
    msg.setTimeStamp(0.754628421071);
    msg.setSource(54355U);
    msg.setSourceEntity(83U);
    msg.setDestination(2095U);
    msg.setDestinationEntity(157U);
    msg.name.assign("LKPFBQHTXPYXJGVFBHMMBSBMHZNAMJLDRZGUHBPAQMAJUROVYSENKPQTTGJXQACG");
    msg.value = 225U;

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
    msg.setTimeStamp(0.408598618271);
    msg.setSource(41491U);
    msg.setSourceEntity(122U);
    msg.setDestination(63570U);
    msg.setDestinationEntity(51U);
    msg.id = 246U;
    msg.period = 3940796031U;
    msg.duty_cycle = 4125335875U;

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
    msg.setTimeStamp(0.744994372556);
    msg.setSource(10244U);
    msg.setSourceEntity(50U);
    msg.setDestination(60521U);
    msg.setDestinationEntity(90U);
    msg.id = 55U;
    msg.period = 189157590U;
    msg.duty_cycle = 2680203691U;

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
    msg.setTimeStamp(0.213323378036);
    msg.setSource(20931U);
    msg.setSourceEntity(225U);
    msg.setDestination(16479U);
    msg.setDestinationEntity(204U);
    msg.id = 184U;
    msg.period = 3354273336U;
    msg.duty_cycle = 267596223U;

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
    msg.setTimeStamp(0.733016461805);
    msg.setSource(64250U);
    msg.setSourceEntity(178U);
    msg.setDestination(15309U);
    msg.setDestinationEntity(252U);
    msg.id = 224U;
    msg.period = 3674266916U;
    msg.duty_cycle = 3067615387U;

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
    msg.setTimeStamp(0.364462469432);
    msg.setSource(28086U);
    msg.setSourceEntity(116U);
    msg.setDestination(31514U);
    msg.setDestinationEntity(192U);
    msg.id = 3U;
    msg.period = 2238493579U;
    msg.duty_cycle = 3098153913U;

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
    msg.setTimeStamp(0.34238563303);
    msg.setSource(49213U);
    msg.setSourceEntity(57U);
    msg.setDestination(948U);
    msg.setDestinationEntity(107U);
    msg.id = 209U;
    msg.period = 595303550U;
    msg.duty_cycle = 1659488931U;

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
    msg.setTimeStamp(0.248861346856);
    msg.setSource(2473U);
    msg.setSourceEntity(34U);
    msg.setDestination(28839U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.671520875274;
    msg.lon = 0.654174962332;
    msg.height = 0.210212097017;
    msg.x = 0.0820442508349;
    msg.y = 0.193718309404;
    msg.z = 0.79327503302;
    msg.phi = 0.101667822164;
    msg.theta = 0.735251770875;
    msg.psi = 0.895743729125;
    msg.u = 0.872487663597;
    msg.v = 0.28651484194;
    msg.w = 0.482962463401;
    msg.vx = 0.288746459518;
    msg.vy = 0.085200041225;
    msg.vz = 0.304898916521;
    msg.p = 0.752487494105;
    msg.q = 0.168599015044;
    msg.r = 0.297409463751;
    msg.depth = 0.60717287536;
    msg.alt = 0.214099480241;

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
    msg.setTimeStamp(0.902523114515);
    msg.setSource(34649U);
    msg.setSourceEntity(179U);
    msg.setDestination(50483U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.657122593752;
    msg.lon = 0.343250901759;
    msg.height = 0.19491154554;
    msg.x = 0.571626732234;
    msg.y = 0.299219635308;
    msg.z = 0.175155766277;
    msg.phi = 0.89653940426;
    msg.theta = 0.237674140498;
    msg.psi = 0.868340897003;
    msg.u = 0.736295383739;
    msg.v = 0.0400835501597;
    msg.w = 0.897647518686;
    msg.vx = 0.771634107454;
    msg.vy = 0.426003443066;
    msg.vz = 0.849817313038;
    msg.p = 0.313207815833;
    msg.q = 0.62033859682;
    msg.r = 0.261863835737;
    msg.depth = 0.4188639483;
    msg.alt = 0.407428054985;

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
    msg.setTimeStamp(0.0445376616414);
    msg.setSource(55266U);
    msg.setSourceEntity(144U);
    msg.setDestination(21960U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.292427413927;
    msg.lon = 0.673690417495;
    msg.height = 0.0530564517814;
    msg.x = 0.858766940265;
    msg.y = 0.836857778333;
    msg.z = 0.621731197213;
    msg.phi = 0.59446285565;
    msg.theta = 0.267623246468;
    msg.psi = 0.0731840320216;
    msg.u = 0.946759340597;
    msg.v = 0.863119777837;
    msg.w = 0.40438271851;
    msg.vx = 0.447969710834;
    msg.vy = 0.882040714847;
    msg.vz = 0.454029613175;
    msg.p = 0.214836175818;
    msg.q = 0.2618292393;
    msg.r = 0.703676068005;
    msg.depth = 0.697430375415;
    msg.alt = 0.54809799154;

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
    msg.setTimeStamp(0.604169251147);
    msg.setSource(20341U);
    msg.setSourceEntity(130U);
    msg.setDestination(16816U);
    msg.setDestinationEntity(64U);
    msg.x = 0.197666265995;
    msg.y = 0.776108164296;
    msg.z = 0.154780423457;

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
    msg.setTimeStamp(0.876815018397);
    msg.setSource(46666U);
    msg.setSourceEntity(96U);
    msg.setDestination(28620U);
    msg.setDestinationEntity(205U);
    msg.x = 0.569553828815;
    msg.y = 0.194414260101;
    msg.z = 0.959977311507;

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
    msg.setTimeStamp(0.641286870518);
    msg.setSource(33130U);
    msg.setSourceEntity(7U);
    msg.setDestination(5949U);
    msg.setDestinationEntity(28U);
    msg.x = 0.433689654645;
    msg.y = 0.097712154797;
    msg.z = 0.591823952636;

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
    msg.setTimeStamp(0.451641327711);
    msg.setSource(6262U);
    msg.setSourceEntity(231U);
    msg.setDestination(36137U);
    msg.setDestinationEntity(24U);
    msg.value = 0.124006123865;

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
    msg.setTimeStamp(0.836949760468);
    msg.setSource(5281U);
    msg.setSourceEntity(200U);
    msg.setDestination(8074U);
    msg.setDestinationEntity(31U);
    msg.value = 0.223615124886;

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
    msg.setTimeStamp(0.52492534043);
    msg.setSource(28976U);
    msg.setSourceEntity(170U);
    msg.setDestination(11699U);
    msg.setDestinationEntity(126U);
    msg.value = 0.513511331183;

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
    msg.setTimeStamp(0.755147955895);
    msg.setSource(49941U);
    msg.setSourceEntity(154U);
    msg.setDestination(49277U);
    msg.setDestinationEntity(59U);
    msg.value = 0.560440433553;

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
    msg.setTimeStamp(0.663977499168);
    msg.setSource(33500U);
    msg.setSourceEntity(103U);
    msg.setDestination(27635U);
    msg.setDestinationEntity(134U);
    msg.value = 0.523426945002;

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
    msg.setTimeStamp(0.699305601399);
    msg.setSource(3071U);
    msg.setSourceEntity(175U);
    msg.setDestination(33004U);
    msg.setDestinationEntity(203U);
    msg.value = 0.177462286145;

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
    msg.setTimeStamp(0.391512471295);
    msg.setSource(1543U);
    msg.setSourceEntity(253U);
    msg.setDestination(19990U);
    msg.setDestinationEntity(13U);
    msg.x = 0.504997089984;
    msg.y = 0.233764464962;
    msg.z = 0.61844081732;
    msg.phi = 0.548041364037;
    msg.theta = 0.413921579069;
    msg.psi = 0.405766647585;
    msg.p = 0.681527751073;
    msg.q = 0.494497169921;
    msg.r = 0.870792614887;
    msg.u = 0.498035217535;
    msg.v = 0.628607061115;
    msg.w = 0.271634776687;
    msg.bias_psi = 0.481432291624;
    msg.bias_r = 0.546364879854;

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
    msg.setTimeStamp(0.0259229931861);
    msg.setSource(44119U);
    msg.setSourceEntity(97U);
    msg.setDestination(48585U);
    msg.setDestinationEntity(60U);
    msg.x = 0.489399980312;
    msg.y = 0.381381526762;
    msg.z = 0.194150295305;
    msg.phi = 0.494642383767;
    msg.theta = 0.727528503147;
    msg.psi = 0.730482967791;
    msg.p = 0.0295835864266;
    msg.q = 0.318810049714;
    msg.r = 0.530858930926;
    msg.u = 0.944405722487;
    msg.v = 0.29773536071;
    msg.w = 0.413499461167;
    msg.bias_psi = 0.830357353876;
    msg.bias_r = 0.215702255297;

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
    msg.setTimeStamp(0.473100182144);
    msg.setSource(21201U);
    msg.setSourceEntity(69U);
    msg.setDestination(17289U);
    msg.setDestinationEntity(14U);
    msg.x = 0.14231407437;
    msg.y = 0.203090736075;
    msg.z = 0.147464250008;
    msg.phi = 0.513228742133;
    msg.theta = 0.507719691508;
    msg.psi = 0.337730553845;
    msg.p = 0.820297835528;
    msg.q = 0.307005516393;
    msg.r = 0.397550162633;
    msg.u = 0.411755835929;
    msg.v = 0.326925059585;
    msg.w = 0.931413177248;
    msg.bias_psi = 0.60879599291;
    msg.bias_r = 0.287005339637;

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
    msg.setTimeStamp(0.985071223561);
    msg.setSource(10948U);
    msg.setSourceEntity(173U);
    msg.setDestination(8129U);
    msg.setDestinationEntity(166U);
    msg.bias_psi = 0.659452231203;
    msg.bias_r = 0.430556672575;
    msg.cog = 0.0815486821662;
    msg.cyaw = 0.679541846443;
    msg.gps_rej_level = 0.0316230603162;
    msg.lbl_rej_level = 0.424615421939;
    msg.custom_x = 0.603882447755;
    msg.custom_y = 0.522538684461;
    msg.custom_z = 0.474590999977;

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
    msg.setTimeStamp(0.984147215314);
    msg.setSource(60201U);
    msg.setSourceEntity(199U);
    msg.setDestination(28230U);
    msg.setDestinationEntity(197U);
    msg.bias_psi = 0.946169077499;
    msg.bias_r = 0.224087218864;
    msg.cog = 0.744613393594;
    msg.cyaw = 0.878953117809;
    msg.gps_rej_level = 0.0956901048987;
    msg.lbl_rej_level = 0.462864678784;
    msg.custom_x = 0.229982245149;
    msg.custom_y = 0.168097291042;
    msg.custom_z = 0.984444898836;

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
    msg.setTimeStamp(0.96776255857);
    msg.setSource(27858U);
    msg.setSourceEntity(113U);
    msg.setDestination(61794U);
    msg.setDestinationEntity(1U);
    msg.bias_psi = 0.439839569972;
    msg.bias_r = 0.236049389861;
    msg.cog = 0.318408306549;
    msg.cyaw = 0.73993118488;
    msg.gps_rej_level = 0.708105210228;
    msg.lbl_rej_level = 0.702429742396;
    msg.custom_x = 0.414145642367;
    msg.custom_y = 0.427256979024;
    msg.custom_z = 0.800275051682;

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
    msg.setTimeStamp(0.0192125412359);
    msg.setSource(59978U);
    msg.setSourceEntity(123U);
    msg.setDestination(48363U);
    msg.setDestinationEntity(138U);
    msg.utc_time = 0.842653218042;
    msg.reason = 196U;

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
    msg.setTimeStamp(0.381730629459);
    msg.setSource(1692U);
    msg.setSourceEntity(32U);
    msg.setDestination(33726U);
    msg.setDestinationEntity(65U);
    msg.utc_time = 0.148922631483;
    msg.reason = 237U;

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
    msg.setTimeStamp(0.754611494992);
    msg.setSource(64872U);
    msg.setSourceEntity(69U);
    msg.setDestination(31969U);
    msg.setDestinationEntity(6U);
    msg.utc_time = 0.0412802960796;
    msg.reason = 212U;

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
    msg.setTimeStamp(0.623797457275);
    msg.setSource(2169U);
    msg.setSourceEntity(167U);
    msg.setDestination(53814U);
    msg.setDestinationEntity(51U);
    msg.id = 45U;
    msg.range = 0.744810266797;
    msg.acceptance = 53U;

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
    msg.setTimeStamp(0.208791044624);
    msg.setSource(397U);
    msg.setSourceEntity(61U);
    msg.setDestination(50569U);
    msg.setDestinationEntity(11U);
    msg.id = 105U;
    msg.range = 0.542955024953;
    msg.acceptance = 180U;

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
    msg.setTimeStamp(0.978173123268);
    msg.setSource(61798U);
    msg.setSourceEntity(0U);
    msg.setDestination(37871U);
    msg.setDestinationEntity(60U);
    msg.id = 44U;
    msg.range = 0.956132061798;
    msg.acceptance = 60U;

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
    msg.setTimeStamp(0.781032194527);
    msg.setSource(55027U);
    msg.setSourceEntity(44U);
    msg.setDestination(37705U);
    msg.setDestinationEntity(171U);
    msg.type = 167U;
    msg.reason = 249U;
    msg.value = 0.201926965899;
    msg.timestep = 0.609237293077;

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
    msg.setTimeStamp(0.63191518776);
    msg.setSource(35343U);
    msg.setSourceEntity(117U);
    msg.setDestination(18441U);
    msg.setDestinationEntity(166U);
    msg.type = 185U;
    msg.reason = 134U;
    msg.value = 0.593451440229;
    msg.timestep = 0.0851459807823;

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
    msg.setTimeStamp(0.198207734161);
    msg.setSource(13039U);
    msg.setSourceEntity(21U);
    msg.setDestination(34230U);
    msg.setDestinationEntity(159U);
    msg.type = 25U;
    msg.reason = 82U;
    msg.value = 0.564745541949;
    msg.timestep = 0.54577743924;

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
    msg.setTimeStamp(0.766143196631);
    msg.setSource(23439U);
    msg.setSourceEntity(108U);
    msg.setDestination(45289U);
    msg.setDestinationEntity(148U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OHGYKHHDNQXGFV");
    tmp_msg_0.lat = 0.388730006147;
    tmp_msg_0.lon = 0.634049526603;
    tmp_msg_0.depth = 0.833057885;
    tmp_msg_0.query_channel = 178U;
    tmp_msg_0.reply_channel = 175U;
    tmp_msg_0.transponder_delay = 240U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.501714186012;
    msg.y = 0.957607262568;
    msg.var_x = 0.160696765231;
    msg.var_y = 0.68416101586;
    msg.distance = 0.802111422117;

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
    msg.setTimeStamp(0.966936409954);
    msg.setSource(14976U);
    msg.setSourceEntity(48U);
    msg.setDestination(749U);
    msg.setDestinationEntity(184U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YKXXKPSCAQGTHLAOPQGZXXIRBBBAETLUECYKZRZNJCSNNGDGHNVHLLPBAMSRYISAJHJYUJMBWJYRZOCOFGCCWLUPKTTZUMBVUQXONUKHCENDDITLWJIAIVNVBJQEGLADWHWOOKETQKMDDZZMAUNLVDLQMVGDTBEDQEREQPSRKFANJFRYWHHPWCTVZPYFZSIIWQXGOFKOXGDUIQCSFMRCWOIUMSXRBSXFEBFVLHJKYNJUTFVVPH");
    tmp_msg_0.lat = 0.205606304814;
    tmp_msg_0.lon = 0.838435539775;
    tmp_msg_0.depth = 0.241197521146;
    tmp_msg_0.query_channel = 185U;
    tmp_msg_0.reply_channel = 55U;
    tmp_msg_0.transponder_delay = 27U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0657089893431;
    msg.y = 0.627690560664;
    msg.var_x = 0.127492736778;
    msg.var_y = 0.47599241063;
    msg.distance = 0.18544810937;

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
    msg.setTimeStamp(0.242159609509);
    msg.setSource(30378U);
    msg.setSourceEntity(147U);
    msg.setDestination(11044U);
    msg.setDestinationEntity(192U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BOXJAQOJCDTKBTUEMPDQVIEVBIMROLHWWSRRYSAZKTJWNUQXLCKPYKWEFTELLHBPGGVJRYGWQRLVIBGJYZWENDLEZQUWSYTILCPZTMRFQZXZDAIESCXXCBTCVFFMQDSGKPA");
    tmp_msg_0.lat = 0.799650862512;
    tmp_msg_0.lon = 0.982465776702;
    tmp_msg_0.depth = 0.767898118214;
    tmp_msg_0.query_channel = 21U;
    tmp_msg_0.reply_channel = 94U;
    tmp_msg_0.transponder_delay = 228U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.47243615816;
    msg.y = 0.00216149276831;
    msg.var_x = 0.214025842626;
    msg.var_y = 0.0722400629901;
    msg.distance = 0.19527450047;

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
    msg.setTimeStamp(0.28895670793);
    msg.setSource(58535U);
    msg.setSourceEntity(106U);
    msg.setDestination(17816U);
    msg.setDestinationEntity(7U);
    msg.state = 189U;

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
    msg.setTimeStamp(0.313928003895);
    msg.setSource(7101U);
    msg.setSourceEntity(168U);
    msg.setDestination(63563U);
    msg.setDestinationEntity(197U);
    msg.state = 51U;

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
    msg.setTimeStamp(0.585981149829);
    msg.setSource(1203U);
    msg.setSourceEntity(54U);
    msg.setDestination(22981U);
    msg.setDestinationEntity(36U);
    msg.state = 130U;

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
    msg.setTimeStamp(0.373609176882);
    msg.setSource(41337U);
    msg.setSourceEntity(192U);
    msg.setDestination(36410U);
    msg.setDestinationEntity(122U);
    msg.x = 0.00201054952359;
    msg.y = 0.182374107621;
    msg.z = 0.0523588823329;

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
    msg.setTimeStamp(0.925795259498);
    msg.setSource(6787U);
    msg.setSourceEntity(120U);
    msg.setDestination(32722U);
    msg.setDestinationEntity(144U);
    msg.x = 0.482998396312;
    msg.y = 0.595972511215;
    msg.z = 0.130984435446;

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
    msg.setTimeStamp(0.945306470959);
    msg.setSource(56640U);
    msg.setSourceEntity(62U);
    msg.setDestination(64441U);
    msg.setDestinationEntity(72U);
    msg.x = 0.312398142121;
    msg.y = 0.34368387124;
    msg.z = 0.366946238132;

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
    msg.setTimeStamp(0.429041133905);
    msg.setSource(52323U);
    msg.setSourceEntity(54U);
    msg.setDestination(51464U);
    msg.setDestinationEntity(251U);
    msg.va = 0.982243660123;
    msg.aoa = 0.135978624108;
    msg.ssa = 0.89147115265;

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
    msg.setTimeStamp(0.411822220744);
    msg.setSource(12828U);
    msg.setSourceEntity(215U);
    msg.setDestination(35957U);
    msg.setDestinationEntity(251U);
    msg.va = 0.456673264883;
    msg.aoa = 0.124919029745;
    msg.ssa = 0.246277385786;

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
    msg.setTimeStamp(0.789344770249);
    msg.setSource(11328U);
    msg.setSourceEntity(240U);
    msg.setDestination(55833U);
    msg.setDestinationEntity(14U);
    msg.va = 0.568749027695;
    msg.aoa = 0.148263435237;
    msg.ssa = 0.898368299683;

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
    msg.setTimeStamp(0.750974210071);
    msg.setSource(50838U);
    msg.setSourceEntity(211U);
    msg.setDestination(6246U);
    msg.setDestinationEntity(226U);
    msg.mmsi = 3793097485U;
    msg.lon = 0.42831561983;
    msg.lat = 0.518707833583;
    msg.x = 0.460418211686;
    msg.y = 0.272751473453;
    msg.psi = 0.207721030746;
    msg.u = 0.933640725961;
    msg.v = 0.0167414736151;
    msg.a = 0.85538965414;
    msg.b = 0.164878687254;
    msg.c = 0.523959175332;
    msg.d = 0.20486706573;

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
    msg.setTimeStamp(0.745444486203);
    msg.setSource(62631U);
    msg.setSourceEntity(74U);
    msg.setDestination(48044U);
    msg.setDestinationEntity(104U);
    msg.mmsi = 83841798U;
    msg.lon = 0.697824531609;
    msg.lat = 0.796223552188;
    msg.x = 0.828038784885;
    msg.y = 0.749350239868;
    msg.psi = 0.590838577688;
    msg.u = 0.357468528748;
    msg.v = 0.738993462471;
    msg.a = 0.18660905864;
    msg.b = 0.629763133968;
    msg.c = 0.333040241796;
    msg.d = 0.214894355315;

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
    msg.setTimeStamp(0.445416418369);
    msg.setSource(9252U);
    msg.setSourceEntity(129U);
    msg.setDestination(63806U);
    msg.setDestinationEntity(12U);
    msg.mmsi = 1293647751U;
    msg.lon = 0.591147852305;
    msg.lat = 0.128735206598;
    msg.x = 0.532955739489;
    msg.y = 0.0491131361825;
    msg.psi = 0.173853859215;
    msg.u = 0.0653052826321;
    msg.v = 0.467795575743;
    msg.a = 0.32518028152;
    msg.b = 0.194834854383;
    msg.c = 0.679272217463;
    msg.d = 0.871652044414;

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
    msg.setTimeStamp(0.187395166801);
    msg.setSource(3648U);
    msg.setSourceEntity(17U);
    msg.setDestination(33941U);
    msg.setDestinationEntity(128U);
    msg.value = 0.309931552804;

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
    msg.setTimeStamp(0.0783468934559);
    msg.setSource(5917U);
    msg.setSourceEntity(196U);
    msg.setDestination(5972U);
    msg.setDestinationEntity(31U);
    msg.value = 0.15959109153;

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
    msg.setTimeStamp(0.174447075958);
    msg.setSource(36668U);
    msg.setSourceEntity(67U);
    msg.setDestination(55740U);
    msg.setDestinationEntity(204U);
    msg.value = 0.512877429615;

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
    msg.setTimeStamp(0.233055611392);
    msg.setSource(59795U);
    msg.setSourceEntity(223U);
    msg.setDestination(39626U);
    msg.setDestinationEntity(238U);
    msg.value = 0.128091460684;
    msg.z_units = 82U;

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
    msg.setTimeStamp(0.755626721978);
    msg.setSource(6425U);
    msg.setSourceEntity(29U);
    msg.setDestination(45530U);
    msg.setDestinationEntity(159U);
    msg.value = 0.455828196425;
    msg.z_units = 182U;

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
    msg.setTimeStamp(0.181336221775);
    msg.setSource(21744U);
    msg.setSourceEntity(134U);
    msg.setDestination(45819U);
    msg.setDestinationEntity(62U);
    msg.value = 0.877394899574;
    msg.z_units = 75U;

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
    msg.setTimeStamp(0.402899519904);
    msg.setSource(17935U);
    msg.setSourceEntity(86U);
    msg.setDestination(9399U);
    msg.setDestinationEntity(88U);
    msg.value = 0.202983954794;
    msg.speed_units = 69U;

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
    msg.setTimeStamp(0.959526293225);
    msg.setSource(59476U);
    msg.setSourceEntity(120U);
    msg.setDestination(32653U);
    msg.setDestinationEntity(68U);
    msg.value = 0.483085346101;
    msg.speed_units = 84U;

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
    msg.setTimeStamp(0.372832837906);
    msg.setSource(12375U);
    msg.setSourceEntity(224U);
    msg.setDestination(14992U);
    msg.setDestinationEntity(198U);
    msg.value = 0.65980145608;
    msg.speed_units = 45U;

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
    msg.setTimeStamp(0.181251495838);
    msg.setSource(41606U);
    msg.setSourceEntity(66U);
    msg.setDestination(4499U);
    msg.setDestinationEntity(45U);
    msg.value = 0.264131586965;

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
    msg.setTimeStamp(0.966744036397);
    msg.setSource(15905U);
    msg.setSourceEntity(204U);
    msg.setDestination(39323U);
    msg.setDestinationEntity(229U);
    msg.value = 0.451876327939;

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
    msg.setTimeStamp(0.499317489045);
    msg.setSource(13500U);
    msg.setSourceEntity(115U);
    msg.setDestination(64184U);
    msg.setDestinationEntity(120U);
    msg.value = 0.796453710447;

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
    msg.setTimeStamp(0.353662250588);
    msg.setSource(22358U);
    msg.setSourceEntity(151U);
    msg.setDestination(35423U);
    msg.setDestinationEntity(43U);
    msg.value = 0.565270095208;

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
    msg.setTimeStamp(0.789970396337);
    msg.setSource(48513U);
    msg.setSourceEntity(180U);
    msg.setDestination(65112U);
    msg.setDestinationEntity(81U);
    msg.value = 0.965573162314;

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
    msg.setTimeStamp(0.193004317487);
    msg.setSource(11961U);
    msg.setSourceEntity(113U);
    msg.setDestination(26978U);
    msg.setDestinationEntity(159U);
    msg.value = 0.679333029542;

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
    msg.setTimeStamp(0.21670803876);
    msg.setSource(51806U);
    msg.setSourceEntity(125U);
    msg.setDestination(3781U);
    msg.setDestinationEntity(44U);
    msg.value = 0.776588839524;

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
    msg.setTimeStamp(0.976278700509);
    msg.setSource(32213U);
    msg.setSourceEntity(158U);
    msg.setDestination(22697U);
    msg.setDestinationEntity(157U);
    msg.value = 0.395556516722;

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
    msg.setTimeStamp(0.666175782389);
    msg.setSource(19092U);
    msg.setSourceEntity(186U);
    msg.setDestination(52579U);
    msg.setDestinationEntity(19U);
    msg.value = 0.851165831899;

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
    msg.setTimeStamp(0.986263049045);
    msg.setSource(62696U);
    msg.setSourceEntity(163U);
    msg.setDestination(24637U);
    msg.setDestinationEntity(67U);
    msg.path_ref = 3249415440U;
    msg.start_lat = 0.590370428709;
    msg.start_lon = 0.829247914999;
    msg.start_z = 0.471421544922;
    msg.start_z_units = 84U;
    msg.end_lat = 0.431640692941;
    msg.end_lon = 0.399598840498;
    msg.end_z = 0.280364946565;
    msg.end_z_units = 1U;
    msg.speed = 0.340084993326;
    msg.speed_units = 81U;
    msg.lradius = 0.883559220072;
    msg.flags = 214U;

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
    msg.setTimeStamp(0.497548079785);
    msg.setSource(49448U);
    msg.setSourceEntity(209U);
    msg.setDestination(65310U);
    msg.setDestinationEntity(20U);
    msg.path_ref = 3920035982U;
    msg.start_lat = 0.743985747385;
    msg.start_lon = 0.383606718408;
    msg.start_z = 0.974923780235;
    msg.start_z_units = 18U;
    msg.end_lat = 0.319721660077;
    msg.end_lon = 0.0790765704057;
    msg.end_z = 0.93058575007;
    msg.end_z_units = 66U;
    msg.speed = 0.197361638186;
    msg.speed_units = 222U;
    msg.lradius = 0.104861554219;
    msg.flags = 103U;

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
    msg.setTimeStamp(0.265549701176);
    msg.setSource(38469U);
    msg.setSourceEntity(201U);
    msg.setDestination(16393U);
    msg.setDestinationEntity(104U);
    msg.path_ref = 34044961U;
    msg.start_lat = 0.612130897075;
    msg.start_lon = 0.643423852201;
    msg.start_z = 0.0439382822358;
    msg.start_z_units = 105U;
    msg.end_lat = 0.418927474604;
    msg.end_lon = 0.979234544447;
    msg.end_z = 0.598934607387;
    msg.end_z_units = 9U;
    msg.speed = 0.227527377727;
    msg.speed_units = 236U;
    msg.lradius = 0.121811330006;
    msg.flags = 191U;

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
    msg.setTimeStamp(0.983450021108);
    msg.setSource(45557U);
    msg.setSourceEntity(4U);
    msg.setDestination(16236U);
    msg.setDestinationEntity(65U);
    msg.x = 0.0933023371034;
    msg.y = 0.03317009468;
    msg.z = 0.171464764155;
    msg.k = 0.330844408019;
    msg.m = 0.905402898141;
    msg.n = 0.630977271006;
    msg.flags = 187U;

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
    msg.setTimeStamp(0.455073592857);
    msg.setSource(28117U);
    msg.setSourceEntity(101U);
    msg.setDestination(39250U);
    msg.setDestinationEntity(5U);
    msg.x = 0.18645230312;
    msg.y = 0.872989330293;
    msg.z = 0.282754783376;
    msg.k = 0.933302144332;
    msg.m = 0.597043514228;
    msg.n = 0.74082603309;
    msg.flags = 79U;

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
    msg.setTimeStamp(0.312961001444);
    msg.setSource(25683U);
    msg.setSourceEntity(62U);
    msg.setDestination(21061U);
    msg.setDestinationEntity(236U);
    msg.x = 0.0188198547268;
    msg.y = 0.541416029241;
    msg.z = 0.396051226341;
    msg.k = 0.0821640286859;
    msg.m = 0.0615823537593;
    msg.n = 0.610968477395;
    msg.flags = 109U;

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
    msg.setTimeStamp(0.222727022888);
    msg.setSource(27024U);
    msg.setSourceEntity(201U);
    msg.setDestination(58767U);
    msg.setDestinationEntity(157U);
    msg.value = 0.727662752009;

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
    msg.setTimeStamp(0.626287130374);
    msg.setSource(53431U);
    msg.setSourceEntity(91U);
    msg.setDestination(53330U);
    msg.setDestinationEntity(69U);
    msg.value = 0.823750338165;

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
    msg.setTimeStamp(0.540811669764);
    msg.setSource(45602U);
    msg.setSourceEntity(236U);
    msg.setDestination(24991U);
    msg.setDestinationEntity(214U);
    msg.value = 0.529028523193;

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
    msg.setTimeStamp(0.0582287779509);
    msg.setSource(12426U);
    msg.setSourceEntity(238U);
    msg.setDestination(41920U);
    msg.setDestinationEntity(184U);
    msg.u = 0.0279382734279;
    msg.v = 0.0801693051844;
    msg.w = 0.0264405917684;
    msg.p = 0.666180085704;
    msg.q = 0.975699654513;
    msg.r = 0.326245412229;
    msg.flags = 97U;

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
    msg.setTimeStamp(0.137635881498);
    msg.setSource(3693U);
    msg.setSourceEntity(29U);
    msg.setDestination(15466U);
    msg.setDestinationEntity(8U);
    msg.u = 0.252290406224;
    msg.v = 0.553540488897;
    msg.w = 0.803603393806;
    msg.p = 0.869674689751;
    msg.q = 0.070553257208;
    msg.r = 0.269158022557;
    msg.flags = 119U;

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
    msg.setTimeStamp(0.419484958113);
    msg.setSource(32538U);
    msg.setSourceEntity(146U);
    msg.setDestination(2529U);
    msg.setDestinationEntity(82U);
    msg.u = 0.962583239953;
    msg.v = 0.0268637572865;
    msg.w = 0.510835415785;
    msg.p = 0.945261239326;
    msg.q = 0.137631552958;
    msg.r = 0.474908266934;
    msg.flags = 46U;

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
    msg.setTimeStamp(0.508813741591);
    msg.setSource(40560U);
    msg.setSourceEntity(182U);
    msg.setDestination(64809U);
    msg.setDestinationEntity(4U);
    msg.path_ref = 673616150U;
    msg.start_lat = 0.0273402951404;
    msg.start_lon = 0.813975270738;
    msg.start_z = 0.179532511761;
    msg.start_z_units = 83U;
    msg.end_lat = 0.0430790661994;
    msg.end_lon = 0.693720181971;
    msg.end_z = 0.550404692333;
    msg.end_z_units = 120U;
    msg.lradius = 0.296011483254;
    msg.flags = 107U;
    msg.x = 0.7400299519;
    msg.y = 0.986990540453;
    msg.z = 0.34163228266;
    msg.vx = 0.564424457338;
    msg.vy = 0.186108255239;
    msg.vz = 0.173304874442;
    msg.course_error = 0.813667037056;
    msg.eta = 5377U;

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
    msg.setTimeStamp(0.815368017467);
    msg.setSource(54124U);
    msg.setSourceEntity(52U);
    msg.setDestination(35976U);
    msg.setDestinationEntity(248U);
    msg.path_ref = 1887520835U;
    msg.start_lat = 0.53693950323;
    msg.start_lon = 0.764568341907;
    msg.start_z = 0.24867762014;
    msg.start_z_units = 125U;
    msg.end_lat = 0.780336969698;
    msg.end_lon = 0.52951373433;
    msg.end_z = 0.807192284468;
    msg.end_z_units = 41U;
    msg.lradius = 0.41707213338;
    msg.flags = 94U;
    msg.x = 0.785005624063;
    msg.y = 0.738431768574;
    msg.z = 0.642722730435;
    msg.vx = 0.853154847165;
    msg.vy = 0.764421318789;
    msg.vz = 0.268563373763;
    msg.course_error = 0.465521963227;
    msg.eta = 29824U;

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
    msg.setTimeStamp(0.662915915229);
    msg.setSource(42147U);
    msg.setSourceEntity(82U);
    msg.setDestination(42453U);
    msg.setDestinationEntity(146U);
    msg.path_ref = 3341659931U;
    msg.start_lat = 0.121801181637;
    msg.start_lon = 0.470378289573;
    msg.start_z = 0.0366069833242;
    msg.start_z_units = 241U;
    msg.end_lat = 0.929038587831;
    msg.end_lon = 0.125573342232;
    msg.end_z = 0.0756284570002;
    msg.end_z_units = 75U;
    msg.lradius = 0.183733548457;
    msg.flags = 82U;
    msg.x = 0.255428719278;
    msg.y = 0.703293538825;
    msg.z = 0.992687462005;
    msg.vx = 0.875329991475;
    msg.vy = 0.243920762995;
    msg.vz = 0.058698312565;
    msg.course_error = 0.855953584587;
    msg.eta = 24512U;

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
    msg.setTimeStamp(0.590871567547);
    msg.setSource(24499U);
    msg.setSourceEntity(208U);
    msg.setDestination(28458U);
    msg.setDestinationEntity(169U);
    msg.k = 0.973263009521;
    msg.m = 0.123837442915;
    msg.n = 0.219676510802;

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
    msg.setTimeStamp(0.524683880759);
    msg.setSource(9336U);
    msg.setSourceEntity(11U);
    msg.setDestination(12486U);
    msg.setDestinationEntity(16U);
    msg.k = 0.465942390188;
    msg.m = 0.292280197612;
    msg.n = 0.811490392849;

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
    msg.setTimeStamp(0.286310206027);
    msg.setSource(8176U);
    msg.setSourceEntity(233U);
    msg.setDestination(57007U);
    msg.setDestinationEntity(224U);
    msg.k = 0.754264489136;
    msg.m = 0.356713728314;
    msg.n = 0.275828341012;

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
    msg.setTimeStamp(0.535484799756);
    msg.setSource(35276U);
    msg.setSourceEntity(208U);
    msg.setDestination(15580U);
    msg.setDestinationEntity(45U);
    msg.p = 0.38547714317;
    msg.i = 0.40275839177;
    msg.d = 0.100393637769;
    msg.a = 0.830325343283;

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
    msg.setTimeStamp(0.99089401901);
    msg.setSource(925U);
    msg.setSourceEntity(31U);
    msg.setDestination(53705U);
    msg.setDestinationEntity(68U);
    msg.p = 0.0813308835689;
    msg.i = 0.175863694114;
    msg.d = 0.825663902781;
    msg.a = 0.7149813791;

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
    msg.setTimeStamp(0.117024384099);
    msg.setSource(63378U);
    msg.setSourceEntity(24U);
    msg.setDestination(41226U);
    msg.setDestinationEntity(193U);
    msg.p = 0.0693782200682;
    msg.i = 0.344028616673;
    msg.d = 0.0125912979318;
    msg.a = 0.0407847129838;

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
    msg.setTimeStamp(0.667499449136);
    msg.setSource(34597U);
    msg.setSourceEntity(13U);
    msg.setDestination(11842U);
    msg.setDestinationEntity(81U);
    msg.op = 28U;

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
    msg.setTimeStamp(0.349195404358);
    msg.setSource(14534U);
    msg.setSourceEntity(200U);
    msg.setDestination(29314U);
    msg.setDestinationEntity(93U);
    msg.op = 234U;

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
    msg.setTimeStamp(0.666522439052);
    msg.setSource(8559U);
    msg.setSourceEntity(54U);
    msg.setDestination(52470U);
    msg.setDestinationEntity(6U);
    msg.op = 249U;

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
    msg.setTimeStamp(0.375611184723);
    msg.setSource(5878U);
    msg.setSourceEntity(102U);
    msg.setDestination(34935U);
    msg.setDestinationEntity(237U);
    msg.x = 0.216090582954;
    msg.y = 0.834883149634;
    msg.z = 0.976308700393;
    msg.vx = 0.655423508819;
    msg.vy = 0.293350632375;
    msg.vz = 0.356914685896;
    msg.ax = 0.455702438967;
    msg.ay = 0.320444079766;
    msg.az = 0.513072780308;
    msg.flags = 54206U;

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
    msg.setTimeStamp(0.402477365969);
    msg.setSource(42131U);
    msg.setSourceEntity(248U);
    msg.setDestination(37597U);
    msg.setDestinationEntity(76U);
    msg.x = 0.271770466961;
    msg.y = 0.331679298394;
    msg.z = 0.793171067323;
    msg.vx = 0.495197183241;
    msg.vy = 0.882607827364;
    msg.vz = 0.375279610265;
    msg.ax = 0.25409343722;
    msg.ay = 0.976034515929;
    msg.az = 0.745475172417;
    msg.flags = 34404U;

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
    msg.setTimeStamp(0.624978636727);
    msg.setSource(34186U);
    msg.setSourceEntity(141U);
    msg.setDestination(19999U);
    msg.setDestinationEntity(242U);
    msg.x = 0.121883894263;
    msg.y = 0.72802849756;
    msg.z = 0.303597903878;
    msg.vx = 0.678410927025;
    msg.vy = 0.544781795733;
    msg.vz = 0.93533277393;
    msg.ax = 0.340059687664;
    msg.ay = 0.76868773577;
    msg.az = 0.828656636522;
    msg.flags = 38771U;

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
    msg.setTimeStamp(0.530080608364);
    msg.setSource(13678U);
    msg.setSourceEntity(84U);
    msg.setDestination(64254U);
    msg.setDestinationEntity(48U);
    msg.value = 0.314999701824;

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
    msg.setTimeStamp(0.209328930648);
    msg.setSource(60492U);
    msg.setSourceEntity(209U);
    msg.setDestination(53921U);
    msg.setDestinationEntity(253U);
    msg.value = 0.372027693679;

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
    msg.setTimeStamp(0.180754924189);
    msg.setSource(23599U);
    msg.setSourceEntity(119U);
    msg.setDestination(17205U);
    msg.setDestinationEntity(95U);
    msg.value = 0.601586155034;

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
    msg.setTimeStamp(0.715998291158);
    msg.setSource(41923U);
    msg.setSourceEntity(228U);
    msg.setDestination(55126U);
    msg.setDestinationEntity(171U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3445036646U;
    tmp_msg_0.start_lat = 0.986795427527;
    tmp_msg_0.start_lon = 0.29085998504;
    tmp_msg_0.start_z = 0.660099962727;
    tmp_msg_0.start_z_units = 117U;
    tmp_msg_0.end_lat = 0.0575396382004;
    tmp_msg_0.end_lon = 0.816386996074;
    tmp_msg_0.end_z = 0.615124485812;
    tmp_msg_0.end_z_units = 33U;
    tmp_msg_0.speed = 0.142380893901;
    tmp_msg_0.speed_units = 86U;
    tmp_msg_0.lradius = 0.380331945645;
    tmp_msg_0.flags = 157U;
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
    msg.setTimeStamp(0.739756808928);
    msg.setSource(60362U);
    msg.setSourceEntity(55U);
    msg.setDestination(22784U);
    msg.setDestinationEntity(89U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2658103307U;
    tmp_msg_0.start_lat = 0.969507844482;
    tmp_msg_0.start_lon = 0.0738113180177;
    tmp_msg_0.start_z = 0.225460288365;
    tmp_msg_0.start_z_units = 47U;
    tmp_msg_0.end_lat = 0.318231629032;
    tmp_msg_0.end_lon = 0.497367364026;
    tmp_msg_0.end_z = 0.141733499093;
    tmp_msg_0.end_z_units = 101U;
    tmp_msg_0.speed = 0.704807629046;
    tmp_msg_0.speed_units = 124U;
    tmp_msg_0.lradius = 0.264410980845;
    tmp_msg_0.flags = 97U;
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
    msg.setTimeStamp(0.624208799331);
    msg.setSource(33362U);
    msg.setSourceEntity(97U);
    msg.setDestination(25133U);
    msg.setDestinationEntity(183U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2929334663U;
    tmp_msg_0.start_lat = 0.078960277912;
    tmp_msg_0.start_lon = 0.979220517018;
    tmp_msg_0.start_z = 0.134153710079;
    tmp_msg_0.start_z_units = 30U;
    tmp_msg_0.end_lat = 0.65326306315;
    tmp_msg_0.end_lon = 0.521374209416;
    tmp_msg_0.end_z = 0.968769475813;
    tmp_msg_0.end_z_units = 182U;
    tmp_msg_0.speed = 0.896895472056;
    tmp_msg_0.speed_units = 64U;
    tmp_msg_0.lradius = 0.147088937778;
    tmp_msg_0.flags = 104U;
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
    msg.setTimeStamp(0.19154199529);
    msg.setSource(43393U);
    msg.setSourceEntity(192U);
    msg.setDestination(12449U);
    msg.setDestinationEntity(166U);
    msg.timeout = 2309U;
    msg.lat = 0.873739553112;
    msg.lon = 0.350638080678;
    msg.z = 0.494489616639;
    msg.z_units = 20U;
    msg.speed = 0.320652614613;
    msg.speed_units = 162U;
    msg.roll = 0.450835955446;
    msg.pitch = 0.377243831949;
    msg.yaw = 0.877477214208;
    msg.custom.assign("TLFSBDILSAWVWDXVWDXAPPXWMINWWAZOHUUCWMBSVQBCCIPYSNNLEDGPEUQCFRIEZKSVZTPVHBM");

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
    msg.setTimeStamp(0.670237656712);
    msg.setSource(27906U);
    msg.setSourceEntity(87U);
    msg.setDestination(50558U);
    msg.setDestinationEntity(160U);
    msg.timeout = 19983U;
    msg.lat = 0.209924367879;
    msg.lon = 0.972518677569;
    msg.z = 0.415226437622;
    msg.z_units = 22U;
    msg.speed = 0.437258951744;
    msg.speed_units = 249U;
    msg.roll = 0.767977153164;
    msg.pitch = 0.0464415841418;
    msg.yaw = 0.613546649195;
    msg.custom.assign("ISTMEBRFNWYZSDOSTHQRGMJQCBDVVFVXADIOJNQZKLIHBZJKMUOZUMTZCWOHVUTMCCLADXIWJYEDLGRBHCIWRFILZUPYJHIYIHCCPSSPGOEHQGGENSEKSPNBCPEFLVAKCEUUWPLKBMWXRTMITADJDKBZBOGHHMXZVYXJFEYFFKTYUJGWXNPBLBQWLNPOVXDXTRFZZEMFFYAMOVQRYQDAQRK");

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
    msg.setTimeStamp(0.888777139075);
    msg.setSource(7359U);
    msg.setSourceEntity(99U);
    msg.setDestination(21605U);
    msg.setDestinationEntity(158U);
    msg.timeout = 12580U;
    msg.lat = 0.759174502883;
    msg.lon = 0.408074038041;
    msg.z = 0.56787467738;
    msg.z_units = 152U;
    msg.speed = 0.542298032302;
    msg.speed_units = 65U;
    msg.roll = 0.524375949411;
    msg.pitch = 0.231740686541;
    msg.yaw = 0.855681246992;
    msg.custom.assign("ZGGYKEDBVCLEXRYISSOTDKDGQYUQGZWZAYMBNUTJFCXAAROMWHXVYOHJVAFZJSVUATDSORPIGSHPQ");

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
    msg.setTimeStamp(0.796641184056);
    msg.setSource(16428U);
    msg.setSourceEntity(37U);
    msg.setDestination(6571U);
    msg.setDestinationEntity(134U);
    msg.timeout = 59816U;
    msg.lat = 0.493730446448;
    msg.lon = 0.783682959995;
    msg.z = 0.715133667951;
    msg.z_units = 49U;
    msg.speed = 0.694594428294;
    msg.speed_units = 85U;
    msg.duration = 13279U;
    msg.radius = 0.591689009144;
    msg.flags = 123U;
    msg.custom.assign("BPDXDMOOVIJPZYWGDNETBYPIXKJUIXNSOFCALQLMSWRVUBIAWPSAVHTRJCFHUWMCAVMZKLGFSPYVGYOCANLNDSGKGWDZJREPZHYRYBSFKGQFTIECHTYSQCVJSEUSJKTA");

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
    msg.setTimeStamp(0.166414794108);
    msg.setSource(53199U);
    msg.setSourceEntity(160U);
    msg.setDestination(29562U);
    msg.setDestinationEntity(174U);
    msg.timeout = 11737U;
    msg.lat = 0.813188569026;
    msg.lon = 0.5275409234;
    msg.z = 0.070313854651;
    msg.z_units = 43U;
    msg.speed = 0.972776468533;
    msg.speed_units = 150U;
    msg.duration = 3551U;
    msg.radius = 0.980862582278;
    msg.flags = 99U;
    msg.custom.assign("LCPDNASUAARJYSJHAOYWYYDGCKMYJHASFHBITODRSNZOUZNIGZWGFBWSURNAKIBJQELURQQNKFFUIUMUSDORUWDGIDAFZGJQXKIQJPPJDYGVXEMLBKWAWQDSWQQGPXPLUPZCCVIGNVEMCKOHCNXENRRLBTBLSHQEDX");

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
    msg.setTimeStamp(0.885076637646);
    msg.setSource(26785U);
    msg.setSourceEntity(214U);
    msg.setDestination(53950U);
    msg.setDestinationEntity(253U);
    msg.timeout = 3356U;
    msg.lat = 0.471701642636;
    msg.lon = 0.113715203175;
    msg.z = 0.644940575266;
    msg.z_units = 118U;
    msg.speed = 0.508165427737;
    msg.speed_units = 63U;
    msg.duration = 45909U;
    msg.radius = 0.198829319522;
    msg.flags = 215U;
    msg.custom.assign("GDIXPMGOGLSVITVVURFBSJQCUUNVMOAEOGDQTAOYWZDTSSVGDGPGFSHXZCYPNMSZFBKZVYXFOXYVPKKPRZFUULGXTQHDQRCIKJYXDOVDFLBMWJRBHSPJJQBIYUSNNWESFAJTEIENHORNNMEHHYLTLBAWLCYRUBEAWDRXHZKULCMKCAACFEITAXCVBCWHWUZG");

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
    msg.setTimeStamp(0.320174563949);
    msg.setSource(37112U);
    msg.setSourceEntity(72U);
    msg.setDestination(19893U);
    msg.setDestinationEntity(124U);
    msg.custom.assign("WNVOPVUNIXJOPOTINUNQKHDCRQHFOMFNYJEMRAWLHJAHXPWKNTPAPFSFAQZYGGZLEEQDKGDIZBQNRUVGMEMDMOYATUWIILDIVTFZFTXOXRUQECXCTCYCYNMUHCPK");

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
    msg.setTimeStamp(0.512310556116);
    msg.setSource(27907U);
    msg.setSourceEntity(50U);
    msg.setDestination(17045U);
    msg.setDestinationEntity(24U);
    msg.custom.assign("MQKIRBQJQYCEMEVXJWBSLOBZMIUZGNPUATOEYBYRDUHTEONOWPXRW");

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
    msg.setTimeStamp(0.223824396887);
    msg.setSource(9308U);
    msg.setSourceEntity(208U);
    msg.setDestination(60639U);
    msg.setDestinationEntity(44U);
    msg.custom.assign("QMKRCSPVEFJQVOAOETQNRAXWXDMATEECJZBFMCXGBAZYNBJCJTXMGXWZGYIEDBGTGLECNJPNJHHWDUFXIZZSBAFKBTTPELPOGVAMN");

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
    msg.setTimeStamp(0.964505875223);
    msg.setSource(8114U);
    msg.setSourceEntity(221U);
    msg.setDestination(17490U);
    msg.setDestinationEntity(140U);
    msg.timeout = 8874U;
    msg.lat = 0.973940022837;
    msg.lon = 0.702995397397;
    msg.z = 0.738265155226;
    msg.z_units = 89U;
    msg.duration = 2518U;
    msg.speed = 0.290624818367;
    msg.speed_units = 46U;
    msg.type = 195U;
    msg.radius = 0.123108450858;
    msg.length = 0.920271457751;
    msg.bearing = 0.631140811632;
    msg.direction = 110U;
    msg.custom.assign("GNKHOLDNSETALEKJWMQROVBRMTXLLNKNAOBXGROCGLNHBHIZKHYYDUKQXWAXPFVBZURFFUKJSOAZGWWXPISHULPYGVNJSV");

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
    msg.setTimeStamp(0.555407960178);
    msg.setSource(59966U);
    msg.setSourceEntity(87U);
    msg.setDestination(18955U);
    msg.setDestinationEntity(25U);
    msg.timeout = 34222U;
    msg.lat = 0.748365538865;
    msg.lon = 0.929935312417;
    msg.z = 0.545642565271;
    msg.z_units = 151U;
    msg.duration = 877U;
    msg.speed = 0.707359471925;
    msg.speed_units = 70U;
    msg.type = 15U;
    msg.radius = 0.477975899214;
    msg.length = 0.735107464433;
    msg.bearing = 0.0181794677064;
    msg.direction = 145U;
    msg.custom.assign("NNKIXMNFKMZXTGWHCUWLGLSYXYQDEPFHVKUQTEVSVVAIADNOGLNFPHIQLJCUUQVINDYLPJGUYHJFEORMWGLABGWRBLOTEPOQWBSRJXIMAHPQHZQEDGTTRKNCWDRZ");

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
    msg.setTimeStamp(0.00177433611199);
    msg.setSource(20612U);
    msg.setSourceEntity(65U);
    msg.setDestination(65218U);
    msg.setDestinationEntity(184U);
    msg.timeout = 54947U;
    msg.lat = 0.409276717816;
    msg.lon = 0.0235869012396;
    msg.z = 0.104697781276;
    msg.z_units = 139U;
    msg.duration = 20423U;
    msg.speed = 0.579731718622;
    msg.speed_units = 81U;
    msg.type = 229U;
    msg.radius = 0.0792798355025;
    msg.length = 0.440944797032;
    msg.bearing = 0.604160866154;
    msg.direction = 19U;
    msg.custom.assign("XFVWKHRIFRGZTLBLYECHYKHDAYXEPFUNWCBVIVAXQTNZETGCPBDPIIJOASSNMXYALJUGACGWBRSQYGDFPLIKKSEIMNQQPXDBNTHAWLDPMPCKTSALOSIBOHUYDWQRUOXLVNVUSOQVFUNDUZUMZTPGXFIQYJETRBCBHJRLMXQEWQKJTIDJQYBSPRZJMRGZRDJVSKWWSVXGEZRVFAHBKVPCHKENEOZK");

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
    msg.setTimeStamp(0.18086530739);
    msg.setSource(35340U);
    msg.setSourceEntity(68U);
    msg.setDestination(57273U);
    msg.setDestinationEntity(62U);
    msg.duration = 48078U;
    msg.custom.assign("MLTNQADXHVGDCUYLLFVBRKNCWADWODOKRAPEDOSPPWHILBEVYQWBEJSGYIMTGOXKEEQYTKZBZDNUWSYZRCDOOUTTLHNBQKUIVYRZMSXXEPNGXVUHUNLXRVRLUUIISQCMKKIJNFYHFHAXEZJMURTGCGFGFOWMGMQXFSB");

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
    msg.setTimeStamp(0.197353980519);
    msg.setSource(1084U);
    msg.setSourceEntity(11U);
    msg.setDestination(40245U);
    msg.setDestinationEntity(210U);
    msg.duration = 20348U;
    msg.custom.assign("WDPLCZQRLYIHHHVNVUOIYBEAQXVRVLCKQEGBXZSRWYTISZRVTRQEXDDGBUAPIUFNGMUYPVEYIWVHFPQYJCDOOONQLMXTIFICKDPTLQZFPCJNVFJAEJSNZBEQHXMABBNWKTLMZBHMLYDQMFUESHGSRIROJROYRGMPFMLLLEONJXCTCXTICBCWPGAOATKFWRYPBZDNDJHJIKZUSNPEYMXGXKUWST");

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
    msg.setTimeStamp(0.781151644178);
    msg.setSource(3202U);
    msg.setSourceEntity(163U);
    msg.setDestination(7808U);
    msg.setDestinationEntity(63U);
    msg.duration = 44465U;
    msg.custom.assign("QDTHYMOAHOTGSFUHIGCSWUXQUAKVZTIDHDFZKGVCOWPYYIPIMUPMXLNPOLNQGVVMNE");

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
    msg.setTimeStamp(0.152074202038);
    msg.setSource(2483U);
    msg.setSourceEntity(191U);
    msg.setDestination(54593U);
    msg.setDestinationEntity(95U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.767855678036;
    msg.control.set(tmp_msg_0);
    msg.duration = 42398U;
    msg.custom.assign("USDILLSWUAOPKULAZCUNEFASZUKGCGGXXPZMZGRJRTWBFFBBQGTTNVDGWTXIMHVBXJYLMSAPRYMNYWPKXZRWKPFVPOWMYHJSWRZAYFWESRBZFSILKJNMPSFRHELTHXQFJPWDEMUQCJLYBZZFBHUAQTIQCCNVJEBODVCHEAUOKMIORTLQVODIRTQIVYZOXCDSTQIYOUJHIAN");

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
    msg.setTimeStamp(0.994835502066);
    msg.setSource(10506U);
    msg.setSourceEntity(169U);
    msg.setDestination(4536U);
    msg.setDestinationEntity(104U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.736597860355;
    msg.control.set(tmp_msg_0);
    msg.duration = 39708U;
    msg.custom.assign("CMPDUJKMNEHUROAQOHLKNPZQJFFFBISOSYECWOWIAYGLNFEPXZGCFBGHGOZLBVMMPTQIRZYDXGWWYSEXBBZUHTMZCJIUBLFIMTPUDNPIDHWCWURZEVLVOSRAMOIFD");

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
    msg.setTimeStamp(0.876816531129);
    msg.setSource(45833U);
    msg.setSourceEntity(235U);
    msg.setDestination(18924U);
    msg.setDestinationEntity(69U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.0601075389139;
    msg.control.set(tmp_msg_0);
    msg.duration = 48377U;
    msg.custom.assign("QTPMWYSUBQPYBMJULSLGKHQJRZVVRJWVWZDYGMAXCFVOONKITFLXWLNXQSAJTBOEMFODUNKEOKBUSUXYXXRYUZLVHEQLFWBXTNSXNCMYSJPNITHUBSQNOIGMARPXAORJFKRSHZGPKFQIMTVGSGZBPUPYJHKYDWCYVCFFDQNDDJQWTQH");

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
    msg.setTimeStamp(0.449765241367);
    msg.setSource(9750U);
    msg.setSourceEntity(192U);
    msg.setDestination(42277U);
    msg.setDestinationEntity(128U);
    msg.timeout = 48536U;
    msg.lat = 0.655172672814;
    msg.lon = 0.470812009659;
    msg.z = 0.425862883994;
    msg.z_units = 224U;
    msg.speed = 0.693028657434;
    msg.speed_units = 186U;
    msg.bearing = 0.780049316289;
    msg.cross_angle = 0.526939526012;
    msg.width = 0.833890634296;
    msg.length = 0.392178638837;
    msg.hstep = 0.1641805636;
    msg.coff = 118U;
    msg.alternation = 71U;
    msg.flags = 99U;
    msg.custom.assign("TVUUBEYBDISMBFANVVWQEYXCFOPXRJKZEPJKFWGLNIGJWQLPEZUCHLAJRMRMUBKQFCFOVOOGZCKSLQTHZUNBLQYGNTUQOIRHAEWRMEPLWITJCFBYZPJDGHAOERPKUVINJRMPMCIOZUIASJTTRGFQGAVKCCPYTSHBGXXINTPMGYHSRH");

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
    msg.setTimeStamp(0.816054488346);
    msg.setSource(1990U);
    msg.setSourceEntity(162U);
    msg.setDestination(56959U);
    msg.setDestinationEntity(86U);
    msg.timeout = 22857U;
    msg.lat = 0.0800242311869;
    msg.lon = 0.231504842868;
    msg.z = 0.932880951011;
    msg.z_units = 193U;
    msg.speed = 0.201639958403;
    msg.speed_units = 239U;
    msg.bearing = 0.695392452332;
    msg.cross_angle = 0.527677054146;
    msg.width = 0.768453958361;
    msg.length = 0.939151866258;
    msg.hstep = 0.683016711152;
    msg.coff = 224U;
    msg.alternation = 105U;
    msg.flags = 236U;
    msg.custom.assign("QLYKDUQVIZAMQPSVVBRIUNSAUFXNYNJIXQEMTZYWLTSLXSNBLDJZLEWYOSTAIPGXTODXKKLRRNDZEOSIDEAMZPPZPAQHJGFQYVRQRIBJUGOOICCKNWRMWRYOJETHHSPEVGPNMKATHXPDJH");

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
    msg.setTimeStamp(0.85849849954);
    msg.setSource(60927U);
    msg.setSourceEntity(220U);
    msg.setDestination(5442U);
    msg.setDestinationEntity(48U);
    msg.timeout = 25665U;
    msg.lat = 0.345998807818;
    msg.lon = 0.287801509722;
    msg.z = 0.714098162638;
    msg.z_units = 146U;
    msg.speed = 0.828960839813;
    msg.speed_units = 93U;
    msg.bearing = 0.573030135833;
    msg.cross_angle = 0.133409560725;
    msg.width = 0.994688835511;
    msg.length = 0.0960618001712;
    msg.hstep = 0.32123199317;
    msg.coff = 222U;
    msg.alternation = 231U;
    msg.flags = 84U;
    msg.custom.assign("ZFJXBBIEIOCEFEJCIZGEWBWUJRNMCUOUDDYOFTAWPKTXJILWNHWGMEUARHKSJEZYZBSQKUCHQHJRRJOYVNLSPRXUGDADPDYAWZQZWIVYNXSDBSXXNYOVOEGPAWMUKVXAQYKMPBVSLHTXLJESKPCYUACTILROVFFQLGXNPHKARQWLTBMUGOSBMRLNCDRHMSQFQITDWOCVRBMKDZ");

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
    msg.setTimeStamp(0.256920426142);
    msg.setSource(33845U);
    msg.setSourceEntity(1U);
    msg.setDestination(844U);
    msg.setDestinationEntity(209U);
    msg.timeout = 46126U;
    msg.lat = 0.169036926749;
    msg.lon = 0.20703918884;
    msg.z = 0.70174110189;
    msg.z_units = 187U;
    msg.speed = 0.424719713798;
    msg.speed_units = 125U;
    msg.custom.assign("YVPDXOCGSEVKBUFLBAAWRXPQNIUFGJMOTMPVDRUYQ");

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
    msg.setTimeStamp(0.310966727371);
    msg.setSource(5051U);
    msg.setSourceEntity(124U);
    msg.setDestination(62498U);
    msg.setDestinationEntity(206U);
    msg.timeout = 32537U;
    msg.lat = 0.178900739635;
    msg.lon = 0.228997863548;
    msg.z = 0.335794083128;
    msg.z_units = 23U;
    msg.speed = 0.371682711492;
    msg.speed_units = 202U;
    msg.custom.assign("XUXWSMGOBUBKJCRIWJKGAYJTUBTXZIFEVVNKFAITSOFTHUVMQKKBJGEDAEICBTHRRMGTYMVCYDZAJCFRBCWSVHLZERPEVUQEAZYBVLNXF");

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
    msg.setTimeStamp(0.381873341061);
    msg.setSource(40346U);
    msg.setSourceEntity(54U);
    msg.setDestination(33613U);
    msg.setDestinationEntity(101U);
    msg.timeout = 8421U;
    msg.lat = 0.549495786738;
    msg.lon = 0.688939387422;
    msg.z = 0.230817090603;
    msg.z_units = 20U;
    msg.speed = 0.906026804198;
    msg.speed_units = 243U;
    msg.custom.assign("YMRLGMOLGPISDJHNYAFDJRYWTLTAOASZAXOXTO");

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
    msg.setTimeStamp(0.981841103658);
    msg.setSource(4592U);
    msg.setSourceEntity(94U);
    msg.setDestination(26426U);
    msg.setDestinationEntity(18U);
    msg.x = 0.0586283563854;
    msg.y = 0.776422440089;
    msg.z = 0.174835193705;

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
    msg.setTimeStamp(0.251969824829);
    msg.setSource(9843U);
    msg.setSourceEntity(249U);
    msg.setDestination(62657U);
    msg.setDestinationEntity(201U);
    msg.x = 0.976417587833;
    msg.y = 0.825329161409;
    msg.z = 0.237807073664;

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
    msg.setTimeStamp(0.283689619408);
    msg.setSource(44934U);
    msg.setSourceEntity(210U);
    msg.setDestination(47676U);
    msg.setDestinationEntity(142U);
    msg.x = 0.973937427309;
    msg.y = 0.302431583482;
    msg.z = 0.0999739646582;

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
    msg.setTimeStamp(0.423248558931);
    msg.setSource(57271U);
    msg.setSourceEntity(112U);
    msg.setDestination(4814U);
    msg.setDestinationEntity(18U);
    msg.timeout = 23557U;
    msg.lat = 0.905970237592;
    msg.lon = 0.414814080557;
    msg.z = 0.0591132575133;
    msg.z_units = 227U;
    msg.amplitude = 0.947944467582;
    msg.pitch = 0.293462039274;
    msg.speed = 0.772528239419;
    msg.speed_units = 143U;
    msg.custom.assign("XGNTOPVSHGKOKBRZQBSB");

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
    msg.setTimeStamp(0.706350199003);
    msg.setSource(48492U);
    msg.setSourceEntity(148U);
    msg.setDestination(3673U);
    msg.setDestinationEntity(65U);
    msg.timeout = 8320U;
    msg.lat = 0.00923532405693;
    msg.lon = 0.925948697999;
    msg.z = 0.336932814459;
    msg.z_units = 212U;
    msg.amplitude = 0.984743772225;
    msg.pitch = 0.709759146891;
    msg.speed = 0.398661343119;
    msg.speed_units = 55U;
    msg.custom.assign("WPTCUNGXXFWURYDOEFGCJHZFMEAUWOIQBCWNHAEOZSVKHTOMSAHXKCLHCJNYRPDZPIAXFEWWLEQVEFTTIGJFCWIRUHCPKYXMBOSBATBENIRNSQNTSYUAUGKQBIRMVSYZPMMKYWIA");

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
    msg.setTimeStamp(0.308824942671);
    msg.setSource(57216U);
    msg.setSourceEntity(34U);
    msg.setDestination(45704U);
    msg.setDestinationEntity(42U);
    msg.timeout = 16559U;
    msg.lat = 0.00263043868593;
    msg.lon = 0.263524529986;
    msg.z = 0.50190777012;
    msg.z_units = 244U;
    msg.amplitude = 0.886736304663;
    msg.pitch = 0.100363025713;
    msg.speed = 0.62976860017;
    msg.speed_units = 166U;
    msg.custom.assign("XUEAQNMFXRDZJCWLVAWVLNDBADAWGGMVONZBSPLJXVMBPPKKEULUOLTHAWCTSQCBHNETNCOMAMQWLXYUZQTDIRIXAZRHYZFLNPFZZTYFSWSPEODILMIFSGEPMBVSIBENGIXJSAYPYV");

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
    msg.setTimeStamp(0.0551320187665);
    msg.setSource(53699U);
    msg.setSourceEntity(23U);
    msg.setDestination(21466U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.790780895027);
    msg.setSource(62172U);
    msg.setSourceEntity(21U);
    msg.setDestination(64746U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.983271463517);
    msg.setSource(21086U);
    msg.setSourceEntity(196U);
    msg.setDestination(25047U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.322260399166);
    msg.setSource(40933U);
    msg.setSourceEntity(86U);
    msg.setDestination(42013U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.842140860284;
    msg.lon = 0.799246049783;
    msg.z = 0.828148834269;
    msg.z_units = 146U;
    msg.radius = 0.482662423884;
    msg.duration = 18388U;
    msg.speed = 0.660438465385;
    msg.speed_units = 83U;
    msg.popup_period = 59231U;
    msg.popup_duration = 8134U;
    msg.flags = 89U;
    msg.custom.assign("AVDHTOFYDQFFBNPJHWIFHZXLHIXLUSVTRMTYJHSAOYJMOWKWPBPQGUQGJADLFTHOYKXSFGZWKAEVBUOPESHBPQTCMMBZYPIRDYKGHZNKC");

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
    msg.setTimeStamp(0.0971737557015);
    msg.setSource(59806U);
    msg.setSourceEntity(138U);
    msg.setDestination(24912U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.311504392257;
    msg.lon = 0.389207922199;
    msg.z = 0.894681171702;
    msg.z_units = 65U;
    msg.radius = 0.799302736278;
    msg.duration = 22435U;
    msg.speed = 0.24085027109;
    msg.speed_units = 184U;
    msg.popup_period = 40250U;
    msg.popup_duration = 54555U;
    msg.flags = 35U;
    msg.custom.assign("QFUEBRNIOAPSTIVHJBSWRNFYJUZGPNEMMYQJWIIDATRJKJVNSHSICOKMPEDWKNPIRFLTICKWSZTQOFON");

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
    msg.setTimeStamp(0.212702076965);
    msg.setSource(23909U);
    msg.setSourceEntity(102U);
    msg.setDestination(14136U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.118442310318;
    msg.lon = 0.640692687976;
    msg.z = 0.587612082196;
    msg.z_units = 4U;
    msg.radius = 0.98430476998;
    msg.duration = 21796U;
    msg.speed = 0.714545906985;
    msg.speed_units = 180U;
    msg.popup_period = 35413U;
    msg.popup_duration = 17666U;
    msg.flags = 224U;
    msg.custom.assign("QDRPEBBWDRXRDKZMAWYQBJLFFYIGOYXQTEOGTUNLVKBKALLZOTMMUODTDEQQSRZAFNERFGSSWNPMVHWXYRYVEJNZOZCSPHIKWSWCDJATJNBDTCMAIHUSWIVERZWHUV");

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
    msg.setTimeStamp(0.858700319663);
    msg.setSource(30368U);
    msg.setSourceEntity(160U);
    msg.setDestination(44535U);
    msg.setDestinationEntity(157U);
    msg.timeout = 31992U;
    msg.flags = 208U;
    msg.lat = 0.256992496739;
    msg.lon = 0.715867703182;
    msg.start_z = 0.491609318582;
    msg.start_z_units = 188U;
    msg.end_z = 0.865804106366;
    msg.end_z_units = 27U;
    msg.radius = 0.856926233108;
    msg.speed = 0.422361360924;
    msg.speed_units = 100U;
    msg.custom.assign("LZXLQYLMZBHZGGURVKPGCJCAFPNSSDRGZHLDDIXVTUVWYYQRELANZNELPWIIYCZUPYDQFDAQXQFPTFMEROATNXEMRAKFJSYWRLTVTOTJOMABNHOQKHVGWMLPXOSPWVDNFJOFKHMGSMAKRVAEDTXOWDQNTISJTGKEIVEZUPCCIRJTQBCBFUUPNYOKRVLVMZKBBFOSHGUSNIWWWDSQKJBCAZYGMFIKUIBNELIXRH");

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
    msg.setTimeStamp(0.882159124402);
    msg.setSource(21515U);
    msg.setSourceEntity(172U);
    msg.setDestination(33163U);
    msg.setDestinationEntity(71U);
    msg.timeout = 59507U;
    msg.flags = 182U;
    msg.lat = 0.179339197758;
    msg.lon = 0.323121967339;
    msg.start_z = 0.418300340924;
    msg.start_z_units = 232U;
    msg.end_z = 0.611050979178;
    msg.end_z_units = 139U;
    msg.radius = 0.568200699623;
    msg.speed = 0.231594905552;
    msg.speed_units = 46U;
    msg.custom.assign("FFZVPYROXRYNVLWDUMLTGBZLLYSPHTAJZQKIVDOPGTYCZNNRPFYIXCAWFYYLZOAWXDMIDUJHJGARVUWKPDMIK");

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
    msg.setTimeStamp(0.388969442072);
    msg.setSource(64109U);
    msg.setSourceEntity(15U);
    msg.setDestination(41264U);
    msg.setDestinationEntity(22U);
    msg.timeout = 51594U;
    msg.flags = 60U;
    msg.lat = 0.107035917365;
    msg.lon = 0.194655321839;
    msg.start_z = 0.240713571925;
    msg.start_z_units = 205U;
    msg.end_z = 0.153492831836;
    msg.end_z_units = 46U;
    msg.radius = 0.921474294238;
    msg.speed = 0.408925547169;
    msg.speed_units = 28U;
    msg.custom.assign("JVFJEXIKYVMBSGDVVSASSXUGNDMQBCOCWDTSCRTXWHTRCJEEJWEPBSRNFTVQNTVYZGYSZTSOHQXMOGNMDQHXCWJQXEIHNULLVENLDKLRUBFHTGZIMUROVWPUVWKQIEJZLZKBMIFFBZIOLDSFQKGNLWQMXPKIRTGEAYTNABZARFCAIHVRKEBNPUJAJGKDYJUPWLGDYHUMFFDOFUNPIKSLCAYRP");

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
    msg.setTimeStamp(0.141120476893);
    msg.setSource(41587U);
    msg.setSourceEntity(52U);
    msg.setDestination(59689U);
    msg.setDestinationEntity(14U);
    msg.timeout = 16183U;
    msg.lat = 0.882126423618;
    msg.lon = 0.554786031551;
    msg.z = 0.0347002567051;
    msg.z_units = 108U;
    msg.speed = 0.887287632475;
    msg.speed_units = 200U;
    msg.custom.assign("OFYSBJNYWHTDUAPETHHSGEVOSBULI");

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
    msg.setTimeStamp(0.566168326937);
    msg.setSource(19873U);
    msg.setSourceEntity(51U);
    msg.setDestination(37688U);
    msg.setDestinationEntity(8U);
    msg.timeout = 40041U;
    msg.lat = 0.377651934581;
    msg.lon = 0.851400055179;
    msg.z = 0.634822073548;
    msg.z_units = 172U;
    msg.speed = 0.88617017103;
    msg.speed_units = 196U;
    msg.custom.assign("ZBBIDLNKAKDSFAJGYCOULOXRHJWTGNKEZCCXVENSEMJADJEISZDTZFMXCDJYMFRROZHTXLQWMYFQAVS");

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
    msg.setTimeStamp(0.343701967699);
    msg.setSource(10569U);
    msg.setSourceEntity(9U);
    msg.setDestination(41786U);
    msg.setDestinationEntity(118U);
    msg.timeout = 48471U;
    msg.lat = 0.835640202256;
    msg.lon = 0.151291164808;
    msg.z = 0.405920642195;
    msg.z_units = 164U;
    msg.speed = 0.881356395241;
    msg.speed_units = 60U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.562332809632;
    tmp_msg_0.y = 0.421941144129;
    tmp_msg_0.z = 0.700439043735;
    tmp_msg_0.t = 0.563015354036;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KRZMVZRCEUQMXGW");

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
    msg.setTimeStamp(0.813800273337);
    msg.setSource(20741U);
    msg.setSourceEntity(219U);
    msg.setDestination(2610U);
    msg.setDestinationEntity(171U);
    msg.x = 0.00504363124928;
    msg.y = 0.742619010234;
    msg.z = 0.194105125514;
    msg.t = 0.118569785712;

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
    msg.setTimeStamp(0.499754961149);
    msg.setSource(7894U);
    msg.setSourceEntity(247U);
    msg.setDestination(30286U);
    msg.setDestinationEntity(201U);
    msg.x = 0.809219253932;
    msg.y = 0.377333670094;
    msg.z = 0.22120851546;
    msg.t = 0.361467814141;

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
    msg.setTimeStamp(0.0465447822309);
    msg.setSource(25490U);
    msg.setSourceEntity(182U);
    msg.setDestination(24083U);
    msg.setDestinationEntity(52U);
    msg.x = 0.0188528013015;
    msg.y = 0.347342007459;
    msg.z = 0.70832136025;
    msg.t = 0.16101772013;

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
    msg.setTimeStamp(0.120307435218);
    msg.setSource(46265U);
    msg.setSourceEntity(23U);
    msg.setDestination(24637U);
    msg.setDestinationEntity(166U);
    msg.timeout = 50369U;
    msg.name.assign("KTBYVCSSJFQQGZFMGMOACRYNWUNJJMTXEUEIMAJDICUXHZKAOMLEOILOHSANEETJPOXMDICIBUPIEVKGGZBXLUZFCTDKWYVEPBWQWTCHYFOBCKUAVQYRBXJMAKUXISZZJLVHPFGMNXPSUQXPIBLJYSZVAWQDNSHNRMFWHQLGTREKBDHUPJHPSRKFNLUCYGOFTVPWCGLVBKDEZNZIQXKGYF");
    msg.custom.assign("GNRVGEWSYFHFSEXVYLQJBZWNKXBXFWWEHCEEITYFWIPVNZMVOXFHPBIKPGGHHYJ");

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
    msg.setTimeStamp(0.685521010879);
    msg.setSource(45356U);
    msg.setSourceEntity(53U);
    msg.setDestination(34561U);
    msg.setDestinationEntity(125U);
    msg.timeout = 61924U;
    msg.name.assign("BIEIIMZUAKRPSPEQKNNUTOCBVDTVTIHOGWOHVYRQHSFWJWMXFPVSGARELQ");
    msg.custom.assign("FKBWIHUYLSNQTYYDUJAXYTLGOZGEHVDTDHUXKDRWRFCSVAFILLDPHDZXMQJAAYGAJOPLORJDF");

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
    msg.setTimeStamp(0.928276934781);
    msg.setSource(65033U);
    msg.setSourceEntity(108U);
    msg.setDestination(34367U);
    msg.setDestinationEntity(150U);
    msg.timeout = 36644U;
    msg.name.assign("AUSEHDLFDXILQGYNWYHIAOBBCZZKHCLSZXQEKUJJLFGDFGGUTYDRSRUEXKUXWVQBOXMFYVDPTBVTFNJHVKENNWPIOXQRCZIOZKMZFTISMNMBOXDCYFWJUMVCYERBCCSEQROJGKKMBEASDARBAZNKWTGWOVJKQTPAGPHULXYWDLLDMEUCVWUZRQRLNSG");
    msg.custom.assign("FOSYQCZXIXANFPFIUCYJLMOYOCERWVUALREWKTFGYGQTOKEXZCSHPMOCAJBSXVHWRVVBMMNRYFRSEAXGVEFIMDHZWSPTTPPKQEFNTZLSWL");

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
    msg.setTimeStamp(0.619636507021);
    msg.setSource(58106U);
    msg.setSourceEntity(236U);
    msg.setDestination(14091U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.721195393189;
    msg.lon = 0.451181544815;
    msg.z = 0.626302327073;
    msg.z_units = 190U;
    msg.speed = 0.896605916736;
    msg.speed_units = 88U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27275U;
    tmp_msg_0.off_x = 0.943146160357;
    tmp_msg_0.off_y = 0.698608844708;
    tmp_msg_0.off_z = 0.114035011536;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.32664948634;
    msg.custom.assign("HTFAOMWAJUXRCUABWVFGVEUXAKPULFOUABSSESTINEVRYVGEQFGNDTRCQERNUIVARLDTPXCOMSYWLEUGYLBJKDOVRQFVHLNPZIPYISMXYOIPCHMGIMNZWEQZYFJFAZMPJUXDRCWJIZHKXKZFLBXOHKKLWQDYDOTSKNDHMCHGZSOKJCBSTNIURHQTYQXRAWZPYYBKPFQUZPVLCGZJXJJQC");

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
    msg.setTimeStamp(0.967934205006);
    msg.setSource(54221U);
    msg.setSourceEntity(251U);
    msg.setDestination(41661U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.93857851484;
    msg.lon = 0.29592367141;
    msg.z = 0.229693416696;
    msg.z_units = 8U;
    msg.speed = 0.164582450875;
    msg.speed_units = 194U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.929278608714;
    tmp_msg_0.y = 0.92525674105;
    tmp_msg_0.z = 0.658162152902;
    tmp_msg_0.t = 0.823222766355;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 33355U;
    tmp_msg_1.off_x = 0.656053301359;
    tmp_msg_1.off_y = 0.616774962136;
    tmp_msg_1.off_z = 0.0798341389445;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.168276932217;
    msg.custom.assign("RGULMHYRXXFZZHS");

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
    msg.setTimeStamp(0.648945625597);
    msg.setSource(4823U);
    msg.setSourceEntity(228U);
    msg.setDestination(65087U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.390766998205;
    msg.lon = 0.32428659631;
    msg.z = 0.240325989042;
    msg.z_units = 25U;
    msg.speed = 0.450304962495;
    msg.speed_units = 237U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.990832625662;
    tmp_msg_0.y = 0.180283889006;
    tmp_msg_0.z = 0.271637686865;
    tmp_msg_0.t = 0.737604214369;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.0618333883275;
    msg.custom.assign("UQCRXPFDLCEVMRMGZFHGWUSPBKCBIUJVQMJJEPSFHGGXYZCHJALVUKX");

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
    msg.setTimeStamp(0.0435150094704);
    msg.setSource(35399U);
    msg.setSourceEntity(128U);
    msg.setDestination(52693U);
    msg.setDestinationEntity(111U);
    msg.vid = 9764U;
    msg.off_x = 0.971656241758;
    msg.off_y = 0.923841167366;
    msg.off_z = 0.484023582465;

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
    msg.setTimeStamp(0.566538720314);
    msg.setSource(5339U);
    msg.setSourceEntity(161U);
    msg.setDestination(59912U);
    msg.setDestinationEntity(59U);
    msg.vid = 43198U;
    msg.off_x = 0.97954611589;
    msg.off_y = 0.132484683889;
    msg.off_z = 0.594559697526;

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
    msg.setTimeStamp(0.707265600364);
    msg.setSource(21266U);
    msg.setSourceEntity(101U);
    msg.setDestination(26559U);
    msg.setDestinationEntity(35U);
    msg.vid = 59140U;
    msg.off_x = 0.807731925505;
    msg.off_y = 0.961907895234;
    msg.off_z = 0.628370286188;

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
    msg.setTimeStamp(0.0946273271046);
    msg.setSource(19329U);
    msg.setSourceEntity(53U);
    msg.setDestination(57332U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.462282863512);
    msg.setSource(22206U);
    msg.setSourceEntity(155U);
    msg.setDestination(5175U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.10394449003);
    msg.setSource(25662U);
    msg.setSourceEntity(102U);
    msg.setDestination(38851U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.108460247962);
    msg.setSource(51642U);
    msg.setSourceEntity(225U);
    msg.setDestination(60819U);
    msg.setDestinationEntity(128U);
    msg.mid = 15184U;

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
    msg.setTimeStamp(0.312351054883);
    msg.setSource(39932U);
    msg.setSourceEntity(149U);
    msg.setDestination(12706U);
    msg.setDestinationEntity(31U);
    msg.mid = 26145U;

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
    msg.setTimeStamp(0.625929379937);
    msg.setSource(21112U);
    msg.setSourceEntity(50U);
    msg.setDestination(22050U);
    msg.setDestinationEntity(157U);
    msg.mid = 35659U;

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
    msg.setTimeStamp(0.403509128488);
    msg.setSource(49491U);
    msg.setSourceEntity(177U);
    msg.setDestination(1752U);
    msg.setDestinationEntity(171U);
    msg.state = 182U;
    msg.eta = 46097U;
    msg.info.assign("RDVFGTJSLGRQMLXGHZFUQAITWLFTGXZYNFJGAPVKUKYXKHTSCPMNOYADPAREXWIKPNWEEMBULETCGNCVVQCLICSAILVHFRWAFRMKKZZEPJQOJMZXEOVWVJAIZLXOXGDBXWJOIDFYMURSUPVRPAAWUNRHGSDYOZMZQXHISLQWUUJBSPWDIJBOYZDBIKCQBHFJCINBGRFUYZHJCMNHDPHTQS");

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
    msg.setTimeStamp(0.306008489662);
    msg.setSource(29628U);
    msg.setSourceEntity(177U);
    msg.setDestination(33837U);
    msg.setDestinationEntity(225U);
    msg.state = 153U;
    msg.eta = 7729U;
    msg.info.assign("DCHYNZKJWGIVOTPHUTSSVTZPDPTKCSLAUUKMRHJBLTWRYRKLYNKYQLXIBXFPXFLGVWEVSFXMILNKTEPGSFPBDNRFMZIFJLZIBOHGRQRBACWIEQFDVJREEEWKVSJQVVZBMM");

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
    msg.setTimeStamp(0.987661292293);
    msg.setSource(9433U);
    msg.setSourceEntity(56U);
    msg.setDestination(30257U);
    msg.setDestinationEntity(77U);
    msg.state = 121U;
    msg.eta = 61862U;
    msg.info.assign("WROEBKXXVAGGTBPKVOSQBRVFJDOXDLHJAQPKMWCZNOOYREWON");

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
    msg.setTimeStamp(0.510524197495);
    msg.setSource(63062U);
    msg.setSourceEntity(41U);
    msg.setDestination(18878U);
    msg.setDestinationEntity(180U);
    msg.system = 54996U;
    msg.duration = 58672U;
    msg.speed = 0.815491007112;
    msg.speed_units = 68U;
    msg.x = 0.288405951431;
    msg.y = 0.251948009078;
    msg.z = 0.740599164508;
    msg.z_units = 146U;

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
    msg.setTimeStamp(0.651529633061);
    msg.setSource(30298U);
    msg.setSourceEntity(58U);
    msg.setDestination(47206U);
    msg.setDestinationEntity(81U);
    msg.system = 2595U;
    msg.duration = 44080U;
    msg.speed = 0.996955644598;
    msg.speed_units = 119U;
    msg.x = 0.992352237614;
    msg.y = 0.460582379491;
    msg.z = 0.287943201825;
    msg.z_units = 241U;

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
    msg.setTimeStamp(0.867972314767);
    msg.setSource(19985U);
    msg.setSourceEntity(144U);
    msg.setDestination(13195U);
    msg.setDestinationEntity(156U);
    msg.system = 15917U;
    msg.duration = 8043U;
    msg.speed = 0.568550308895;
    msg.speed_units = 113U;
    msg.x = 0.239246508141;
    msg.y = 0.990685255641;
    msg.z = 0.133590983982;
    msg.z_units = 21U;

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
    msg.setTimeStamp(0.348655764632);
    msg.setSource(34759U);
    msg.setSourceEntity(139U);
    msg.setDestination(15033U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.37837001956;
    msg.lon = 0.888136301908;
    msg.speed = 0.209676308285;
    msg.speed_units = 162U;
    msg.duration = 46022U;
    msg.sys_a = 18085U;
    msg.sys_b = 50276U;
    msg.move_threshold = 0.472439237338;

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
    msg.setTimeStamp(0.882693568683);
    msg.setSource(25892U);
    msg.setSourceEntity(139U);
    msg.setDestination(60274U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.302892000737;
    msg.lon = 0.646778308497;
    msg.speed = 0.653430309715;
    msg.speed_units = 84U;
    msg.duration = 18435U;
    msg.sys_a = 32230U;
    msg.sys_b = 2486U;
    msg.move_threshold = 0.145202341361;

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
    msg.setTimeStamp(0.36222842477);
    msg.setSource(65330U);
    msg.setSourceEntity(43U);
    msg.setDestination(26813U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.84766985441;
    msg.lon = 0.11361415794;
    msg.speed = 0.0538712298351;
    msg.speed_units = 12U;
    msg.duration = 41395U;
    msg.sys_a = 24620U;
    msg.sys_b = 31527U;
    msg.move_threshold = 0.0973347944865;

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
    msg.setTimeStamp(0.44709213455);
    msg.setSource(28851U);
    msg.setSourceEntity(108U);
    msg.setDestination(45010U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.188907085501;
    msg.lon = 0.123974888734;
    msg.z = 0.146699771199;
    msg.z_units = 140U;
    msg.speed = 0.16695298342;
    msg.speed_units = 135U;
    msg.custom.assign("IGAEFXANOHUUNIPIUJVNZRMLXNQMDOQHLLMWUXEJSCYGYAHGLCEDWGNIZTNYWNKQRSBTRQPKVZOLRTBPB");

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
    msg.setTimeStamp(0.269201171399);
    msg.setSource(15682U);
    msg.setSourceEntity(225U);
    msg.setDestination(61201U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.381368894369;
    msg.lon = 0.225293913742;
    msg.z = 0.888837753281;
    msg.z_units = 161U;
    msg.speed = 0.033439148754;
    msg.speed_units = 70U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.912427041484;
    tmp_msg_0.lon = 0.830477598112;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ODPJVASYXFTHGZWDFDEVTXPBZUCYYHHKBLYRTOGRHGQFUQBRECCDYMYBFBOBDGIXIFKOXRISJZWXNNUPCSVLAILRPKPRNRWHNNJAUKEASNDJZLKCGQOFMDYUZQSBEWVCAMX");

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
    msg.setTimeStamp(0.687259061661);
    msg.setSource(30970U);
    msg.setSourceEntity(220U);
    msg.setDestination(19639U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.922656137184;
    msg.lon = 0.359934367406;
    msg.z = 0.0149979326362;
    msg.z_units = 8U;
    msg.speed = 0.955012528916;
    msg.speed_units = 44U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.841095761075;
    tmp_msg_0.lon = 0.545869282144;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IDQVLYLEABUFBIIXBIWWERADBDSHRAGKUOHRLJVRUQVKDAFCVEARBWPGTVWJUTMFFKNUCCNHJKLWHNHCRYVMHREOSLYBEXCVSEXYOZBOGZDMNEDBYTYVPMSFYNQGPICPSIUWMJLDTFIXYIB");

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
    msg.setTimeStamp(0.436533941077);
    msg.setSource(54735U);
    msg.setSourceEntity(35U);
    msg.setDestination(55143U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.165871222819;
    msg.lon = 0.422916643392;

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
    msg.setTimeStamp(0.242928960918);
    msg.setSource(2495U);
    msg.setSourceEntity(226U);
    msg.setDestination(32530U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.533039522286;
    msg.lon = 0.158693809657;

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
    msg.setTimeStamp(0.36756591483);
    msg.setSource(62936U);
    msg.setSourceEntity(240U);
    msg.setDestination(13185U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.929779514377;
    msg.lon = 0.422422321491;

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
    msg.setTimeStamp(0.785578788344);
    msg.setSource(11570U);
    msg.setSourceEntity(153U);
    msg.setDestination(37313U);
    msg.setDestinationEntity(97U);
    msg.timeout = 11819U;
    msg.lat = 0.224882802506;
    msg.lon = 0.860584114881;
    msg.z = 0.956743792718;
    msg.z_units = 233U;
    msg.pitch = 0.491502906399;
    msg.amplitude = 0.57836652292;
    msg.duration = 18984U;
    msg.speed = 0.309111006175;
    msg.speed_units = 118U;
    msg.radius = 0.987813705955;
    msg.direction = 32U;
    msg.custom.assign("JYFGVOKKYCAEUIXCEUCGAMOCOCIXOKHXFDWDVNKSSIMWDGEVYRKAEGDXBJMFAEPNTTHWJIYAQOBGUPZIUUATZPLWPVFFOFJENYGWMDNRQIKDJURJQKTQSLQDFWXLLZPSOFTHAR");

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
    msg.setTimeStamp(0.415370760698);
    msg.setSource(3718U);
    msg.setSourceEntity(104U);
    msg.setDestination(39020U);
    msg.setDestinationEntity(82U);
    msg.timeout = 13923U;
    msg.lat = 0.242927428686;
    msg.lon = 0.0445072026718;
    msg.z = 0.551614275715;
    msg.z_units = 119U;
    msg.pitch = 0.382303913388;
    msg.amplitude = 0.786212431218;
    msg.duration = 64116U;
    msg.speed = 0.636584998724;
    msg.speed_units = 24U;
    msg.radius = 0.869363484454;
    msg.direction = 30U;
    msg.custom.assign("RIDDHHNJQMWAFFNSFIVUVHFIYNCSUKYBEWPAQIOKBGBBKJWDYVMOVUUIJGMBNPFZWENPBEDRRPLZJLIQRWOXKVVYEUWJTCLCMPQXBCUTOGYVPTDHPPRRZPZBDQKEJFJVWSEHVLMGZAAJLARUHBMXOORKCDUXCMIZOIHDFYECXSALEUDTRZYNTYFNQHTESTGFGLDNWFHONLGMICKKMGSVTSWTJCRXXLX");

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
    msg.setTimeStamp(0.733598124697);
    msg.setSource(53431U);
    msg.setSourceEntity(203U);
    msg.setDestination(47824U);
    msg.setDestinationEntity(27U);
    msg.timeout = 42147U;
    msg.lat = 0.528641250648;
    msg.lon = 0.0151247910288;
    msg.z = 0.600443709639;
    msg.z_units = 160U;
    msg.pitch = 0.230634398232;
    msg.amplitude = 0.466825818105;
    msg.duration = 57601U;
    msg.speed = 0.629693024983;
    msg.speed_units = 233U;
    msg.radius = 0.55248307284;
    msg.direction = 121U;
    msg.custom.assign("KIPDJLDPAQNUZOHKMLZYBXAXSGXKCRQBQQEFCTHQDTGTUTOYECANSFLKTKAGEGOREOKZPMVVCMWMDWAJNCBXRBSYLJMYLBWRXDSFIKPXBGHVDKZEOOQICFXICFLIUWZOHNWUHGNGPQULVSIWAUSDFJHPPJRNMFGYSHMVBIYFNOTBTQCFFVVVXEJKXIUTPAAJGNSYRIZTNBRULQTIERCMEDPLOQZRJUL");

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
    msg.setTimeStamp(0.576873367104);
    msg.setSource(42133U);
    msg.setSourceEntity(59U);
    msg.setDestination(33275U);
    msg.setDestinationEntity(193U);
    msg.formation_name.assign("KVZBGPMRFHJDYDJJKFTQSWQTOWJJMOEGBASUOSXMLZYDDUUEUMFFJGPRHXLAPAINJSUBRWKIWIAUTRPWXVTFLQQCFTUSVOWZSLNVCFPFAKTKHEIMPYPIRMGTKKDXZTOXYYBCSZETNVSMKDIIR");
    msg.reference_frame = 207U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20283U;
    tmp_msg_0.off_x = 0.802390134372;
    tmp_msg_0.off_y = 0.73601438929;
    tmp_msg_0.off_z = 0.806403329502;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("VUPXULNQYTTDUNVEFR");

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
    msg.setTimeStamp(0.655595404413);
    msg.setSource(22716U);
    msg.setSourceEntity(110U);
    msg.setDestination(14873U);
    msg.setDestinationEntity(7U);
    msg.formation_name.assign("HOMSHGFSYQXREWTTDYCMPRJQSARLNWSDVXHPTMWIGJNIMJVMFHNPKTLVHCYLJFFPOCPPZUUWVGILYMWKOUFYOXAXEFH");
    msg.reference_frame = 242U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 4401U;
    tmp_msg_0.off_x = 0.286280255937;
    tmp_msg_0.off_y = 0.521198335189;
    tmp_msg_0.off_z = 0.183430746815;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ZATFWSUSEEUNYYYBLKNIDOHWGURVECDAZTYLGIOFQUYCAR");

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
    msg.setTimeStamp(0.692930190896);
    msg.setSource(36984U);
    msg.setSourceEntity(18U);
    msg.setDestination(54500U);
    msg.setDestinationEntity(35U);
    msg.formation_name.assign("PCYJEJBMJWGBUSHIGLQFSPZJTNVGDZTLACOQMHTXVBBUVG");
    msg.reference_frame = 46U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 49581U;
    tmp_msg_0.off_x = 0.570248228091;
    tmp_msg_0.off_y = 0.90995241371;
    tmp_msg_0.off_z = 0.763628151636;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FPVALCCZHDIZYYVFWTUYBPQPQTMUHHVCFEWFHODFVZCNHRTQIXGRIOSFIXXSGHZLWBMOAQENXTTJYIETCBNDRDBDJSIVMFIPBUULOPKKYNPVKXMGXGJRNJBLGKSUWITNJYZZVNZVMUQCZONPUOHEEHBEEWAQKBFLBMSSKJT");

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
    msg.setTimeStamp(0.777314955337);
    msg.setSource(1253U);
    msg.setSourceEntity(51U);
    msg.setDestination(57584U);
    msg.setDestinationEntity(160U);
    msg.group_name.assign("SSUQVARHIIPHQFZVXUYSLXTKBIGWKIUTRXGMJSDHTSODTRIVIEURQPPTACXYDXGIEPRUZVAEMJVEPKHFLCUTMMDFJYJGOMWYKNZBHZYOHMEVACBZMFMHOIJYXUPVKYZNDFJONIXGHAKXPWXAFCSDQWLRAWFTQND");
    msg.formation_name.assign("MUJFSITFWELSWCYPOHFNEIGICKAEKBAUJNYXBCTBQOYWKMZKHXFKLCIFSUEQOIATJJPWGBXCVEWTDZRBQVWZYEDRWSIQWMKPDHJISZNGGVNJTZCLSHQUXGCYEFQOSYDMVKBFGVYATPYRMLJUBAVJRAMSMZOGTCEPRPVELNMUIOPTXXTKDXZXMFYROHNHDQQWLFZQRPEQJLHRAAFHMNKONOVULBKNZZJABCHDPILVXDDPCUXSWARGUHBLNGT");
    msg.plan_id.assign("RYLYKOLRUDDGWAAOZVIMBNJATSKXKYKNAXLLCPNHWXNSYHGEQBGBQEIPBQXORORVUSNIJQEUJNGHGIHALOHJIZXXTJWDZVTIUOYZQSDYRCQDYMHWD");
    msg.description.assign("JDAOZZHSAKQSLBVBUSAOEMNHJNDWUODPVKDNTINRFWUZOJHHPFFTIDGLSXFRWWBUSFRYMEVOTBEJZRZVXQ");
    msg.leader_speed = 0.25502500349;
    msg.leader_bank_lim = 0.590036739764;
    msg.pos_sim_err_lim = 0.612109554491;
    msg.pos_sim_err_wrn = 0.394002273242;
    msg.pos_sim_err_timeout = 39554U;
    msg.converg_max = 0.579381762695;
    msg.converg_timeout = 5980U;
    msg.comms_timeout = 57250U;
    msg.turb_lim = 0.0732988913867;
    msg.custom.assign("TEOFNRDXEQXZADBKGVFFWIWYJRETDMJHSDOQFCMCHBVXVKJFDEWHYPTILKDUPCOLRZGLUNVMZEMEISIVESGYXEFXPRJNTLVMJKXXRXKPWUVBAWUCUPUHBMHY");

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
    msg.setTimeStamp(0.360436128037);
    msg.setSource(32897U);
    msg.setSourceEntity(105U);
    msg.setDestination(13971U);
    msg.setDestinationEntity(46U);
    msg.group_name.assign("TYOLKDFXWWNNSFVKQURJDYZNGEIXLRLOGNWHSHBYDADIBBLQGBAGPCZPMTTGKEYSVBRKVERTJAONJTRSWZRLQAWMDZOFOKMNJXKKUKSFIZEMIUONWPSTYOMAEPRIVYX");
    msg.formation_name.assign("WUUYZCBPIPIFQHFSIFFUSABMEALURPEKYYFBGVJQXEGIIXDWVBINEGRARRDCGFINMFBNFGFZXKUIRJMONYEKLTVYIZETWCTUTMVTMOCBKGTOHYHZXVWWUTZDLCYKHLXQPJHHJEXWQHKSEMCNCBBXLU");
    msg.plan_id.assign("KPFHXLRDMCDEQWUTMBDYVEJOYADMMDBBWUZLZI");
    msg.description.assign("YRXEUVVRMIUYTZFIRCTUGSRCBHQXNOTWGBXKDFIPNLQ");
    msg.leader_speed = 0.520023588523;
    msg.leader_bank_lim = 0.633547070138;
    msg.pos_sim_err_lim = 0.554197014744;
    msg.pos_sim_err_wrn = 0.0796653373113;
    msg.pos_sim_err_timeout = 60501U;
    msg.converg_max = 0.124543555807;
    msg.converg_timeout = 63648U;
    msg.comms_timeout = 7961U;
    msg.turb_lim = 0.421617295731;
    msg.custom.assign("QJWEWUJDFIPSUWGPPVYMTLCVESPXFMDMBNZIWNOTMATGBEIBAWBBALAOGJZOKCMHIHZBJUEDBTZQCQCZVZPWXZTAYSQMPKCRQAFZPXHIWWKAVYNOVLNMORJMAELS");

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
    msg.setTimeStamp(0.897932571218);
    msg.setSource(5732U);
    msg.setSourceEntity(36U);
    msg.setDestination(50967U);
    msg.setDestinationEntity(10U);
    msg.group_name.assign("KVGYOLVPMLZYMVNGSBNFTEJVDJRQPBZIXVHGLQUTVTDBXCUSRLBYBXPYINWGZDNUXCMWIDFXQIHSY");
    msg.formation_name.assign("OFYOTOZWMIWGKHYXILPJIHUTJIQCFQKRPFJCWANPLUWSHLSPL");
    msg.plan_id.assign("NXROVBWMKQPLNIYGOAJCAKVTKVBMDHKSGPXUOGPZTLQKOJLZKMLCSNBRRHXTIMYZYAECHTNAUBLLSRIIJNZQDQ");
    msg.description.assign("RUCFDSPQRFHPWTNGVDXIAOJLFCKYBQLKTQECVGFAWKMIZUTXJSRJFLKNHECSSWYYKBLZREQHRSEVDIMVGHFWNRXBGIEYTTOVONNYQQDBHBUQRKZFHWZVGLIIVSZNAOSLUEYUCBXJASINBDFZWCUCJXLBAZJAUMSPD");
    msg.leader_speed = 0.478753689896;
    msg.leader_bank_lim = 0.115212390159;
    msg.pos_sim_err_lim = 0.377988196085;
    msg.pos_sim_err_wrn = 0.764282676741;
    msg.pos_sim_err_timeout = 39189U;
    msg.converg_max = 0.701987898366;
    msg.converg_timeout = 39958U;
    msg.comms_timeout = 16477U;
    msg.turb_lim = 0.689909043381;
    msg.custom.assign("WQEUSPBNDZSWMCJIFKYSYFBSZOEKPMGSWGVKAUHQTDLYCWQUBVFSBDXXRLTMWOUWWZJOFZXFYMRFOCHKCVLYHHKAOOQTVQJAUUHACFEWGUGERHARZRPDDXVQTEWWVZBHRY");

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
    msg.setTimeStamp(0.743850686709);
    msg.setSource(42964U);
    msg.setSourceEntity(77U);
    msg.setDestination(6632U);
    msg.setDestinationEntity(164U);
    msg.control_src = 35365U;
    msg.control_ent = 127U;
    msg.timeout = 0.0158861265256;
    msg.loiter_radius = 0.6314861354;
    msg.altitude_interval = 0.0594651783268;

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
    msg.setTimeStamp(0.648241646735);
    msg.setSource(56015U);
    msg.setSourceEntity(82U);
    msg.setDestination(62893U);
    msg.setDestinationEntity(226U);
    msg.control_src = 49758U;
    msg.control_ent = 173U;
    msg.timeout = 0.219889588036;
    msg.loiter_radius = 0.795856724237;
    msg.altitude_interval = 0.887897534662;

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
    msg.setTimeStamp(0.107615179723);
    msg.setSource(41552U);
    msg.setSourceEntity(153U);
    msg.setDestination(13170U);
    msg.setDestinationEntity(90U);
    msg.control_src = 26755U;
    msg.control_ent = 185U;
    msg.timeout = 0.472688000133;
    msg.loiter_radius = 0.359876593013;
    msg.altitude_interval = 0.952158883485;

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
    msg.setTimeStamp(0.181910874619);
    msg.setSource(30035U);
    msg.setSourceEntity(88U);
    msg.setDestination(50043U);
    msg.setDestinationEntity(149U);
    msg.flags = 216U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.113580922723;
    tmp_msg_0.speed_units = 77U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6920516772;
    tmp_msg_1.z_units = 179U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.837044789231;
    msg.lon = 0.348970226051;
    msg.radius = 0.855694512329;

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
    msg.setTimeStamp(0.57251795043);
    msg.setSource(24051U);
    msg.setSourceEntity(130U);
    msg.setDestination(64014U);
    msg.setDestinationEntity(66U);
    msg.flags = 118U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.112485812339;
    tmp_msg_0.speed_units = 192U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.508236159381;
    tmp_msg_1.z_units = 186U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.467777061585;
    msg.lon = 0.996032573579;
    msg.radius = 0.213140601973;

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
    msg.setTimeStamp(0.225320565147);
    msg.setSource(23374U);
    msg.setSourceEntity(239U);
    msg.setDestination(29064U);
    msg.setDestinationEntity(91U);
    msg.flags = 250U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.556903436327;
    tmp_msg_0.speed_units = 242U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.994622883085;
    tmp_msg_1.z_units = 25U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.875259054566;
    msg.lon = 0.0437604510398;
    msg.radius = 0.760024959953;

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
    msg.setTimeStamp(0.209652365264);
    msg.setSource(25268U);
    msg.setSourceEntity(225U);
    msg.setDestination(32669U);
    msg.setDestinationEntity(48U);
    msg.control_src = 40428U;
    msg.control_ent = 59U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 82U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.748526740633;
    tmp_tmp_msg_0_0.speed_units = 119U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.14952232525;
    tmp_tmp_msg_0_1.z_units = 230U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.877557699105;
    tmp_msg_0.lon = 0.74342311471;
    tmp_msg_0.radius = 0.656133799651;
    msg.reference.set(tmp_msg_0);
    msg.state = 239U;
    msg.proximity = 193U;

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
    msg.setTimeStamp(0.271490490151);
    msg.setSource(31330U);
    msg.setSourceEntity(124U);
    msg.setDestination(25144U);
    msg.setDestinationEntity(101U);
    msg.control_src = 43627U;
    msg.control_ent = 217U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 7U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.862952868177;
    tmp_tmp_msg_0_0.speed_units = 166U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.856822414012;
    tmp_tmp_msg_0_1.z_units = 132U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.124613064143;
    tmp_msg_0.lon = 0.383486878858;
    tmp_msg_0.radius = 0.83143423857;
    msg.reference.set(tmp_msg_0);
    msg.state = 125U;
    msg.proximity = 93U;

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
    msg.setTimeStamp(0.28936390381);
    msg.setSource(16537U);
    msg.setSourceEntity(92U);
    msg.setDestination(56540U);
    msg.setDestinationEntity(137U);
    msg.control_src = 20573U;
    msg.control_ent = 95U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 198U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.265406874139;
    tmp_tmp_msg_0_0.speed_units = 237U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.316014370815;
    tmp_tmp_msg_0_1.z_units = 116U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0746016753668;
    tmp_msg_0.lon = 0.237200714492;
    tmp_msg_0.radius = 0.0878070086857;
    msg.reference.set(tmp_msg_0);
    msg.state = 140U;
    msg.proximity = 10U;

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
    msg.setTimeStamp(0.448989850706);
    msg.setSource(1405U);
    msg.setSourceEntity(116U);
    msg.setDestination(54441U);
    msg.setDestinationEntity(67U);
    msg.ax_cmd = 0.543421322192;
    msg.ay_cmd = 0.456021992713;
    msg.az_cmd = 0.946305844813;
    msg.ax_des = 0.8074443642;
    msg.ay_des = 0.748704012452;
    msg.az_des = 0.327464943249;
    msg.virt_err_x = 0.988987249705;
    msg.virt_err_y = 0.210016225399;
    msg.virt_err_z = 0.979385896723;
    msg.surf_fdbk_x = 0.000718943181537;
    msg.surf_fdbk_y = 0.983496137138;
    msg.surf_fdbk_z = 0.689868382594;
    msg.surf_unkn_x = 0.647585110531;
    msg.surf_unkn_y = 0.950842672819;
    msg.surf_unkn_z = 0.485349936362;
    msg.ss_x = 0.881073795302;
    msg.ss_y = 0.992666643821;
    msg.ss_z = 0.646808239193;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ZLOAILGVNQZSAPVTRHAFMJQJGJYAYMQVISERYTJDGGVKBEMBKRHVOCLIQEFRSBCRXYWBHZWKDQOWUJQWSXTXXMYJSDTINEHRTTZGFZNWOLDCWMTQFPCHDMXLRJADPVHUWCYQUIWJHNGQYSSYLNGKCMRFK");
    tmp_msg_0.dist = 0.907542365964;
    tmp_msg_0.err = 0.0964408447946;
    tmp_msg_0.ctrl_imp = 0.00916256602902;
    tmp_msg_0.rel_dir_x = 0.998591193795;
    tmp_msg_0.rel_dir_y = 0.593412319043;
    tmp_msg_0.rel_dir_z = 0.64349286175;
    tmp_msg_0.err_x = 0.794388726846;
    tmp_msg_0.err_y = 0.461455972454;
    tmp_msg_0.err_z = 0.102975202342;
    tmp_msg_0.rf_err_x = 0.180541460573;
    tmp_msg_0.rf_err_y = 0.248685587749;
    tmp_msg_0.rf_err_z = 0.301980940446;
    tmp_msg_0.rf_err_vx = 0.539246308034;
    tmp_msg_0.rf_err_vy = 0.134292650032;
    tmp_msg_0.rf_err_vz = 0.762343068257;
    tmp_msg_0.ss_x = 0.311114858455;
    tmp_msg_0.ss_y = 0.0805512497179;
    tmp_msg_0.ss_z = 0.117313459982;
    tmp_msg_0.virt_err_x = 0.516901161814;
    tmp_msg_0.virt_err_y = 0.138334694496;
    tmp_msg_0.virt_err_z = 0.89611277137;
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
    msg.setTimeStamp(0.539919530064);
    msg.setSource(23444U);
    msg.setSourceEntity(19U);
    msg.setDestination(1137U);
    msg.setDestinationEntity(122U);
    msg.ax_cmd = 0.43550967754;
    msg.ay_cmd = 0.787069988025;
    msg.az_cmd = 0.0755891959066;
    msg.ax_des = 0.112927163134;
    msg.ay_des = 0.115553775814;
    msg.az_des = 0.987957280274;
    msg.virt_err_x = 0.334035818983;
    msg.virt_err_y = 0.95033397482;
    msg.virt_err_z = 0.148707960825;
    msg.surf_fdbk_x = 0.618628400131;
    msg.surf_fdbk_y = 0.407980025609;
    msg.surf_fdbk_z = 0.189146585583;
    msg.surf_unkn_x = 0.393350775845;
    msg.surf_unkn_y = 0.2953146579;
    msg.surf_unkn_z = 0.793774295198;
    msg.ss_x = 0.180140389116;
    msg.ss_y = 0.375842510518;
    msg.ss_z = 0.0255841934603;

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
    msg.setTimeStamp(0.0583287596264);
    msg.setSource(64520U);
    msg.setSourceEntity(208U);
    msg.setDestination(6883U);
    msg.setDestinationEntity(14U);
    msg.ax_cmd = 0.262835228292;
    msg.ay_cmd = 0.495881110208;
    msg.az_cmd = 0.110262644791;
    msg.ax_des = 0.409380858182;
    msg.ay_des = 0.0943048681754;
    msg.az_des = 0.14477884037;
    msg.virt_err_x = 0.975337418006;
    msg.virt_err_y = 0.244121760245;
    msg.virt_err_z = 0.717314085002;
    msg.surf_fdbk_x = 0.294739297195;
    msg.surf_fdbk_y = 0.577159064242;
    msg.surf_fdbk_z = 0.19624871082;
    msg.surf_unkn_x = 0.181282419105;
    msg.surf_unkn_y = 0.811448906276;
    msg.surf_unkn_z = 0.637434274519;
    msg.ss_x = 0.816774027368;
    msg.ss_y = 0.842625061038;
    msg.ss_z = 0.752663818723;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("BUFSQUUFFXIQUHMSHPXYSCZIUEZUKCBXPMSUQLNYCRQMBXPGVDN");
    tmp_msg_0.dist = 0.182013485721;
    tmp_msg_0.err = 0.887290498453;
    tmp_msg_0.ctrl_imp = 0.658970214545;
    tmp_msg_0.rel_dir_x = 0.945007631809;
    tmp_msg_0.rel_dir_y = 0.0856017989516;
    tmp_msg_0.rel_dir_z = 0.23365029765;
    tmp_msg_0.err_x = 0.0799105225843;
    tmp_msg_0.err_y = 0.687146733317;
    tmp_msg_0.err_z = 0.322921307825;
    tmp_msg_0.rf_err_x = 0.128047541123;
    tmp_msg_0.rf_err_y = 0.283777101365;
    tmp_msg_0.rf_err_z = 0.730506887336;
    tmp_msg_0.rf_err_vx = 0.159976195376;
    tmp_msg_0.rf_err_vy = 0.337062236686;
    tmp_msg_0.rf_err_vz = 0.191227258994;
    tmp_msg_0.ss_x = 0.506763074468;
    tmp_msg_0.ss_y = 0.113725178762;
    tmp_msg_0.ss_z = 0.920873594196;
    tmp_msg_0.virt_err_x = 0.361671408939;
    tmp_msg_0.virt_err_y = 0.603095057634;
    tmp_msg_0.virt_err_z = 0.508117494705;
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
    msg.setTimeStamp(0.76819442034);
    msg.setSource(9940U);
    msg.setSourceEntity(37U);
    msg.setDestination(59873U);
    msg.setDestinationEntity(195U);
    msg.s_id.assign("OHJNLSWEXDEGYFDZISNNHQIYMHQJMNGOSIPXTUWYPJSEODRWHEPXDBZQZYFSAGBFKRLANUMMJVYSEOTIRVUQBAGKYOGNJTPTCZFIXXMGPHGTFOMZNETXNYTAJVPFTTLPYBSNEIUHALWIROLYCKSKLBVZDCMCUALLJBXRUWVBOORCQTPZCDXFFVUIKXVHORHQLKDWIFCKMQUUJKBWRSMCXAMGICDZQWWYBPQFKGSHARHRPEGN");
    msg.dist = 0.914950004303;
    msg.err = 0.741371298939;
    msg.ctrl_imp = 0.537315760686;
    msg.rel_dir_x = 0.874663758843;
    msg.rel_dir_y = 0.801644992745;
    msg.rel_dir_z = 0.983929895792;
    msg.err_x = 0.20213326754;
    msg.err_y = 0.0101190703848;
    msg.err_z = 0.308674285751;
    msg.rf_err_x = 0.655272713816;
    msg.rf_err_y = 0.64246923016;
    msg.rf_err_z = 0.0158400005399;
    msg.rf_err_vx = 0.337004244938;
    msg.rf_err_vy = 0.301495389832;
    msg.rf_err_vz = 0.214851803932;
    msg.ss_x = 0.60852426459;
    msg.ss_y = 0.359451481053;
    msg.ss_z = 0.816122158175;
    msg.virt_err_x = 0.163601080095;
    msg.virt_err_y = 0.480180603549;
    msg.virt_err_z = 0.703758121568;

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
    msg.setTimeStamp(0.853107567187);
    msg.setSource(21226U);
    msg.setSourceEntity(1U);
    msg.setDestination(44373U);
    msg.setDestinationEntity(81U);
    msg.s_id.assign("GTSEUBDMFRFLUVMZYUUDRGGWQDMZMCVPWYJDSXEMONJJXSJHZGABJVQHFJFXNUFGSABPBFLTIOZRKXTLPEAAEHEOROPWTRJZSYHJVHXIMPNKDIRQEQQQOHCGAXGILONXKIAKZYPFMTOWRALTOVUBYBZEVYTVEYZLQICGLWKZTWDHLJAICCSQWYMSRRKVXPMDFFUCSCBWPHGPGIKAYSOZIBUNVTRNQLBOUYXWMDTKEHDNAKQNBFCJCU");
    msg.dist = 0.381850633065;
    msg.err = 0.176422336675;
    msg.ctrl_imp = 0.413364755066;
    msg.rel_dir_x = 0.75857742122;
    msg.rel_dir_y = 0.100215928824;
    msg.rel_dir_z = 0.928158246322;
    msg.err_x = 0.222346990506;
    msg.err_y = 0.815288382935;
    msg.err_z = 0.653543356872;
    msg.rf_err_x = 0.557073869198;
    msg.rf_err_y = 0.267682561757;
    msg.rf_err_z = 0.399473937552;
    msg.rf_err_vx = 0.656247052521;
    msg.rf_err_vy = 0.638190934163;
    msg.rf_err_vz = 0.274605987299;
    msg.ss_x = 0.801867206593;
    msg.ss_y = 0.205612667026;
    msg.ss_z = 0.284899515678;
    msg.virt_err_x = 0.88772945048;
    msg.virt_err_y = 0.515497295188;
    msg.virt_err_z = 0.838938608025;

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
    msg.setTimeStamp(0.718062526087);
    msg.setSource(31405U);
    msg.setSourceEntity(106U);
    msg.setDestination(26500U);
    msg.setDestinationEntity(12U);
    msg.s_id.assign("GIJTEEJULSNLNAWIBAATZZXVQVIFZWMTDPFXUKYGKIVYGJZBOLFMHAYUSOZHBDCOCQNNIATHYMCGNOUDLOYCTCAZVQDTMIJEPL");
    msg.dist = 0.216595450117;
    msg.err = 0.414727588087;
    msg.ctrl_imp = 0.962947216611;
    msg.rel_dir_x = 0.563969191109;
    msg.rel_dir_y = 0.191124804222;
    msg.rel_dir_z = 0.39025186135;
    msg.err_x = 0.101349168981;
    msg.err_y = 0.911282797267;
    msg.err_z = 0.203140812477;
    msg.rf_err_x = 0.112700157144;
    msg.rf_err_y = 0.551615413932;
    msg.rf_err_z = 0.840476166285;
    msg.rf_err_vx = 0.390020623772;
    msg.rf_err_vy = 0.0284409152552;
    msg.rf_err_vz = 0.318281873149;
    msg.ss_x = 0.52244224544;
    msg.ss_y = 0.397563553952;
    msg.ss_z = 0.826658773032;
    msg.virt_err_x = 0.0798791264067;
    msg.virt_err_y = 0.8619910684;
    msg.virt_err_z = 0.885033418101;

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
    msg.setTimeStamp(0.0589064172428);
    msg.setSource(65075U);
    msg.setSourceEntity(191U);
    msg.setDestination(64071U);
    msg.setDestinationEntity(206U);
    msg.timeout = 23354U;
    msg.rpm = 0.643683494838;
    msg.direction = 41U;
    msg.custom.assign("ZWYBTYIUVPLXUICYGHMOCSJSRAKOIJAPBBJZXCGIDFDJAIRQWDAYVOTVZJI");

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
    msg.setTimeStamp(0.990297463193);
    msg.setSource(50208U);
    msg.setSourceEntity(30U);
    msg.setDestination(48546U);
    msg.setDestinationEntity(184U);
    msg.timeout = 62467U;
    msg.rpm = 0.751637698307;
    msg.direction = 179U;
    msg.custom.assign("XUGJWWKVKHVBMBXUZDWXECIMZYVFVWJNECAAOWLFKICZDSOYCDKUNIJLMBZZSGOQBRJNUFEUXGQTSMHRYFVWLOJHDHVCTSEPPDHEXLHYMBNGSONXNUTPHWBKROYGCXRMULNAJQGIKBRARRZSFAOEDYQLHXFTWYJIKFZNFGP");

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
    msg.setTimeStamp(0.246454931305);
    msg.setSource(54830U);
    msg.setSourceEntity(190U);
    msg.setDestination(55055U);
    msg.setDestinationEntity(10U);
    msg.timeout = 45711U;
    msg.rpm = 0.945684977441;
    msg.direction = 117U;
    msg.custom.assign("HLERZXZEMUMTHUWVLCVXECCNOLQR");

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
    msg.setTimeStamp(0.298338376651);
    msg.setSource(2891U);
    msg.setSourceEntity(223U);
    msg.setDestination(31140U);
    msg.setDestinationEntity(137U);
    msg.formation_name.assign("SKDSHMJPXUZDBTAJRNTZEDQPONPIOVZSTQBAKFYLTNHKQOKVNUALQUHVLFUQWHAUYOLONMXSECKEAAGJYQDEXWJVURTUAIKGYETM");
    msg.type = 181U;
    msg.op = 122U;
    msg.group_name.assign("DXVQEKXTWLHSQOXYLIHAJGYABHQFNAZHOJDBDKJTZHZKNWEVFPDDCCGNFHMHCCKJMLBOYIEXNOSOEURYKNSBYTLRCFQFAFUYNMVDVWXPCSFBFVGEKRQETQQIIJPATCPZRHTNLOSGRWULMWBYGCLVUQMOLVJWNXAGHDGXTEXRZZPBJBODKMKNAKVIOQYWTUAPLQIXEPVSUUHMZASJWDWMLIJS");
    msg.plan_id.assign("QISMQAJHRAPHKDQRJDSJUVGHUJTEKMFHENGNHXIZNVGNBVRVQFLHENOGFGFUMSPWTQGOIVHKZZZCQYHBOZPED");
    msg.description.assign("IZHLARFXPETUCHRARPAWPVHXIVEVNDHOIHMTROBCARKOYKCWLCXVUBYKWHLPFYDKZBTJFIUSEAJSMNTTVNRQPBYMSZROELCQQLMZCFPTIIWLDQYCTJVOWYZZJGWCVKDKJNBSRFJKKOWNUGBQSGPBHFMVADNAZGXMASAJBXKZXRZWOYMLGPUCTFBAMJUSPQWSIPGQHRHENTISQLEBXXODFIGSXDNF");
    msg.reference_frame = 238U;
    msg.leader_bank_lim = 0.139178619238;
    msg.leader_speed_min = 0.420891261165;
    msg.leader_speed_max = 0.302235338951;
    msg.leader_alt_min = 0.0578722749439;
    msg.leader_alt_max = 0.554600789867;
    msg.pos_sim_err_lim = 0.111803574964;
    msg.pos_sim_err_wrn = 0.349768123304;
    msg.pos_sim_err_timeout = 29055U;
    msg.converg_max = 0.514169935809;
    msg.converg_timeout = 11388U;
    msg.comms_timeout = 50371U;
    msg.turb_lim = 0.635792259568;
    msg.custom.assign("MYXOBKHLXOKEQNIAIKBUYBTIDOIRJKHNXPYRUJZPPEIKNJSFLYVFNZFXQGHPMWOGUOJTWCNCZFQPGPLSNDYIQLJMMADYEMYVFASVMZTZFWQJLZLBSZOVWCDXJNBMEUIWRXUIWECHKSWLVHWOGJZVWEXNCHMASJWEQDCQLCKGQRERBCSLXHBHZAFSHHQDRVNIATR");

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
    msg.setTimeStamp(0.40032818631);
    msg.setSource(50895U);
    msg.setSourceEntity(237U);
    msg.setDestination(38315U);
    msg.setDestinationEntity(28U);
    msg.formation_name.assign("HOWFYYYTRJKHADXCEVEHYDPHEGOHNIVFKHFQYFSURJKMBCWMCTKJQKUOCDRXJUQEGNEKQSZRQVSOIFWBRXQJPRPPKAJDZZZMVQMJFBBZPVQFCGGAZZEYGAIGADIOUTWRMUSFBALRUMGHMTUGCNAXTLOALLYXVDEVHCADJJNOVYPKMWLCCXPXIOBRLBSNVTLQPZKDWIKTFOXBXYTGGNUIOENESBD");
    msg.type = 117U;
    msg.op = 187U;
    msg.group_name.assign("GVTFANETOBFTZHXPQOGVGUCPYQFUSWIMXLDZCJSZBFQRXTPPXSLANBLEYPGMBHCYGRPXEBGAXPIJFASGAUYTQOIARNYCRSLEUCORWVKIHNBOMOEVJWDZ");
    msg.plan_id.assign("HWFPWTXOVAMPCXLRWDSJMNFMEQAWLLLCHEZTWHWAEDBJVZDAIOASMRACLLYFGDAAXQMYHKSGIDCNKTVGOQOKUIOGZJEYF");
    msg.description.assign("NLFRSHUXFICBOUXFJMZMNVVZKBKPSBZXFTFNEXTRAMCKLIYPDMKUIVGKHY");
    msg.reference_frame = 222U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 48035U;
    tmp_msg_0.off_x = 0.15883120991;
    tmp_msg_0.off_y = 0.141188033397;
    tmp_msg_0.off_z = 0.937750030312;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.708592135317;
    msg.leader_speed_min = 0.277106749447;
    msg.leader_speed_max = 0.221284277271;
    msg.leader_alt_min = 0.26064763523;
    msg.leader_alt_max = 0.00113697017287;
    msg.pos_sim_err_lim = 0.0149862760047;
    msg.pos_sim_err_wrn = 0.306396852658;
    msg.pos_sim_err_timeout = 42085U;
    msg.converg_max = 0.2509793839;
    msg.converg_timeout = 53077U;
    msg.comms_timeout = 28535U;
    msg.turb_lim = 0.527519865432;
    msg.custom.assign("CVSTSXBNYZROVLKFVWAYDIGCZBYFMHWAZJUMPJODGLORNOHPUWBICNKFHORPKFHYIHJLLYZXREXSYSKDGAPGAFJTKNTEJXOMJRBRJXPMGCSUQKXERPWVQFMXAWVRTHGTDMNEZEOQAIKTHKDSGQIVBWDBLNNIGHTVDILJCXCHXIJTLVYSUEZTPZFAYEVANSGKDMRALWWYBFNQNQEYDBCWROIZBOUPTMQSMOUGVPZPBXKUAQUCWEFU");

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
    msg.setTimeStamp(0.883066953561);
    msg.setSource(8334U);
    msg.setSourceEntity(141U);
    msg.setDestination(27560U);
    msg.setDestinationEntity(79U);
    msg.formation_name.assign("MXQDLJLANXKOKGSCKCYVLTFDORWIGFSOIZHWTTEHBPUNAAXGLRTZWINJJXXCG");
    msg.type = 6U;
    msg.op = 201U;
    msg.group_name.assign("TFOYMRFGADWPCPSVSEINESKKICFGMOHTBZFXTJPPDCVIEWIQBQLAFQWICYJBDLGQNXLLYLWNFAQNZTKUZJKJVSBMBYRURBESAADKBVSYKLGZCTH");
    msg.plan_id.assign("UGRKULCNPTEYILCTFDRSEHFLYYHILMIDWNMAKOVKJYRAAKIARRNVNQHJDTAVHIILZFOJSRBVXFFXXQLUEHYHVRONVSYCDAXPFHHSKTTOGBBNQGRLGGOAATXNZMBVIIGJZWMMEFZVGGXOYDPUDQFOOTXNHSOKUPAEYXZXNHFCSDTDNQCFPWCGMTSEVPPZXJBVMCSJKKEQUWJLBEUELTUW");
    msg.description.assign("IGSXCCUGHWQVUIYSEIKTIOMROTQQMZFXBUPUWRIGODEQVPTGPTQFKMGIALHJMAWTVRUPGSSBBEEECONTTNFOENYKBXMZKWYRPLUOLTWDDZMMQALBANSPSPJMDYAWDFXAEPYNJVMZSUHHKRCKURPVADVNDLYZWGWNQKCEJUVKOBJIYJRHLSCXONHCJXHOCFBDQHRRZWQJFFAVYPLGNZVZDLHJRHZGEBBFXKX");
    msg.reference_frame = 55U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54964U;
    tmp_msg_0.off_x = 0.137321427971;
    tmp_msg_0.off_y = 0.188240524758;
    tmp_msg_0.off_z = 0.0600947427697;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.906842477495;
    msg.leader_speed_min = 0.411530820645;
    msg.leader_speed_max = 0.555017603559;
    msg.leader_alt_min = 0.818060246086;
    msg.leader_alt_max = 0.453726745509;
    msg.pos_sim_err_lim = 0.398615493163;
    msg.pos_sim_err_wrn = 0.0331075721091;
    msg.pos_sim_err_timeout = 26227U;
    msg.converg_max = 0.964987130265;
    msg.converg_timeout = 40078U;
    msg.comms_timeout = 41502U;
    msg.turb_lim = 0.934489711885;
    msg.custom.assign("ECUTQMPDKMNTPS");

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
    msg.setTimeStamp(0.61113847661);
    msg.setSource(30280U);
    msg.setSourceEntity(192U);
    msg.setDestination(52540U);
    msg.setDestinationEntity(162U);
    msg.timeout = 62921U;
    msg.lat = 0.00260342137497;
    msg.lon = 0.665330037401;
    msg.z = 0.660997077304;
    msg.z_units = 184U;
    msg.speed = 0.805933528567;
    msg.speed_units = 161U;
    msg.custom.assign("PICDCVSLTNAFQEEAUPVRUXWTVLDDOLZTNIHXEJRPVPJYADYWIDSFLIGBUZUVKKWUORWDTLFBZDCFBKRJQOHOTHUPOQVUMHYJFACAXZAMOARBVDZXGWLMOHNFGEETNKGWZFYMQSTVIHKMTLZVRCBWGHEGCJSQIFKFRTRDNNEJBNSZHBYKOQBYXMMKLACONPBGJCRSPHCGHPBWKKLUJIXTNCFZJMQDYNLXWPSGZPWEVXQSEJXUYSXSA");

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
    msg.setTimeStamp(0.282084042106);
    msg.setSource(28965U);
    msg.setSourceEntity(137U);
    msg.setDestination(60612U);
    msg.setDestinationEntity(251U);
    msg.timeout = 55646U;
    msg.lat = 0.57842535993;
    msg.lon = 0.972933299117;
    msg.z = 0.042398164309;
    msg.z_units = 138U;
    msg.speed = 0.526290450395;
    msg.speed_units = 189U;
    msg.custom.assign("WPPBWANKXIZUPNXEBNSURTEJDHIXYNCCHGQRICMYKAQRJZEELUXOCRSZZIOCBVHPSVPJQUICNDORTKLUDVXKFUYGFPRLAXVJOGRNTKSXSCGSKLLWTAZSOHFWJSRQVDFVFXEMTFYWABZQHXBUGVFTSOOLUZKNKADMQIBFLYNWQERCUOGEATFVSPNDMMWJKYTRWMHMILMPMAQTMZEHWUOBOADJGCYDWTHDYPJ");

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
    msg.setTimeStamp(0.513026049373);
    msg.setSource(37056U);
    msg.setSourceEntity(201U);
    msg.setDestination(29204U);
    msg.setDestinationEntity(96U);
    msg.timeout = 24307U;
    msg.lat = 0.613248328267;
    msg.lon = 0.472119391941;
    msg.z = 0.418394306649;
    msg.z_units = 44U;
    msg.speed = 0.227558113668;
    msg.speed_units = 66U;
    msg.custom.assign("ZDYCICMPJUNOPLMMPCDHYOJRWLVWXGQXCURVKIRQHPSTEEOQAXJBKNKDYZAFBVEETEELDQITJCTFAOSTWZXLFZSQWJMJMVBZDSKMFVJBBGGZGMMPATBQMSUHFGQAORSPPTWXSRCVCPHONNRZLNIKSVUANUFYKIPRRAFNCLHWCYBTGZUAQHPIHHQDSWIEDOKUHWLMYVY");

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
    msg.setTimeStamp(0.938924873009);
    msg.setSource(46370U);
    msg.setSourceEntity(245U);
    msg.setDestination(38795U);
    msg.setDestinationEntity(226U);
    msg.timeout = 9560U;
    msg.lat = 0.490251192154;
    msg.lon = 0.293557920258;
    msg.z = 0.961002396642;
    msg.z_units = 2U;
    msg.speed = 0.65523927461;
    msg.speed_units = 124U;
    msg.custom.assign("ZOTJSCUDPMFOAKMESRDVKQCPSXGROLZKPZZUBEZPFHWMBBEATPZANXFKJMR");

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
    msg.setTimeStamp(0.822499114772);
    msg.setSource(23629U);
    msg.setSourceEntity(208U);
    msg.setDestination(47030U);
    msg.setDestinationEntity(222U);
    msg.timeout = 43000U;
    msg.lat = 0.322934977717;
    msg.lon = 0.415728131236;
    msg.z = 0.0843046930819;
    msg.z_units = 159U;
    msg.speed = 0.950138422509;
    msg.speed_units = 150U;
    msg.custom.assign("XSBFAZTGKCEWTMQTTDCJJYWOAVKVZPPCZEULLNNNIOJAPMMZRDHYKMVTHXYYTXKGZQJSDKCAFUHCPNCYIZEOJUBAI");

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
    msg.setTimeStamp(0.682147619824);
    msg.setSource(6669U);
    msg.setSourceEntity(72U);
    msg.setDestination(14525U);
    msg.setDestinationEntity(136U);
    msg.timeout = 59523U;
    msg.lat = 0.647740219094;
    msg.lon = 0.967506541051;
    msg.z = 0.668007488164;
    msg.z_units = 207U;
    msg.speed = 0.606463064184;
    msg.speed_units = 104U;
    msg.custom.assign("ZPNEFPKRPKEUEWNDQXDXOALNQMTB");

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
    msg.setTimeStamp(0.850515994687);
    msg.setSource(2854U);
    msg.setSourceEntity(13U);
    msg.setDestination(25222U);
    msg.setDestinationEntity(218U);
    msg.arrival_time = 0.885909556638;
    msg.lat = 0.187045039974;
    msg.lon = 0.731756519543;
    msg.z = 0.88297968043;
    msg.z_units = 36U;
    msg.travel_z = 0.203850626327;
    msg.travel_z_units = 0U;
    msg.delayed = 56U;

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
    msg.setTimeStamp(0.939621808);
    msg.setSource(14431U);
    msg.setSourceEntity(20U);
    msg.setDestination(38646U);
    msg.setDestinationEntity(57U);
    msg.arrival_time = 0.600554433465;
    msg.lat = 0.616790796954;
    msg.lon = 0.814806456336;
    msg.z = 0.559587238916;
    msg.z_units = 87U;
    msg.travel_z = 0.234169974821;
    msg.travel_z_units = 192U;
    msg.delayed = 251U;

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
    msg.setTimeStamp(0.878839361569);
    msg.setSource(64785U);
    msg.setSourceEntity(185U);
    msg.setDestination(39476U);
    msg.setDestinationEntity(190U);
    msg.arrival_time = 0.521491908976;
    msg.lat = 0.539383860624;
    msg.lon = 0.341169954185;
    msg.z = 0.746535831428;
    msg.z_units = 71U;
    msg.travel_z = 0.0602406863097;
    msg.travel_z_units = 193U;
    msg.delayed = 74U;

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
    msg.setTimeStamp(0.354267347735);
    msg.setSource(63503U);
    msg.setSourceEntity(125U);
    msg.setDestination(9519U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.193321942371;
    msg.lon = 0.314367116952;
    msg.z = 0.931138217462;
    msg.z_units = 72U;
    msg.speed = 0.26637445101;
    msg.speed_units = 136U;
    msg.bearing = 0.252877965375;
    msg.cross_angle = 0.561063543509;
    msg.width = 0.534228789309;
    msg.length = 0.553434337788;
    msg.coff = 146U;
    msg.angaperture = 0.998927489635;
    msg.range = 11487U;
    msg.overlap = 93U;
    msg.flags = 224U;
    msg.custom.assign("WSGVLLZFQMWIYYEJNAVXPHTKXMBXHXKCQMEECCCCFGGAHIRSRZGJYVKARZLWHCAPQEQPDXORZFIWJAXKONYGYWIEVBTMRNOODCBMIKDLSJDXLBIHJKKBARMHNNTVPIUAQSPWZDLZGSOGNOAWLXWOURTQYUBYSKYPJBEJTESFUGVHFUSTVYSZYAFQUZOENTLTRKSDQWUUVDFBEJVVCMULJPFMANMNGPQGTZXLIMPQRDKCTWEDBOBXOH");

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
    msg.setTimeStamp(0.292767494245);
    msg.setSource(15462U);
    msg.setSourceEntity(96U);
    msg.setDestination(33366U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.0468322077321;
    msg.lon = 0.560238565745;
    msg.z = 0.404437374085;
    msg.z_units = 164U;
    msg.speed = 0.736382425254;
    msg.speed_units = 201U;
    msg.bearing = 0.808584370801;
    msg.cross_angle = 0.671694414289;
    msg.width = 0.530375392669;
    msg.length = 0.573307234098;
    msg.coff = 162U;
    msg.angaperture = 0.950148795633;
    msg.range = 15398U;
    msg.overlap = 212U;
    msg.flags = 244U;
    msg.custom.assign("BIIKCEYZMKPYOWBAEZWQWELSLHFGTFRXVTYNBOGPVMLABJBYLUVZPVWSPDODZGBTSQZPHOSREIJRGURPMWXHABYNMCLJVNJKIOZXMXKZFEWDDKQNQJQHQPJIHRFNNBTCLORKVVCHAQDIYXWLGFNFYZVFSXXEOKHFDGGAVMKWLXERDMCTQMUJAD");

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
    msg.setTimeStamp(0.111533212828);
    msg.setSource(24267U);
    msg.setSourceEntity(220U);
    msg.setDestination(49067U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.0346864241589;
    msg.lon = 0.748281789536;
    msg.z = 0.276242157867;
    msg.z_units = 151U;
    msg.speed = 0.333371077174;
    msg.speed_units = 198U;
    msg.bearing = 0.924072314858;
    msg.cross_angle = 0.254393261714;
    msg.width = 0.579052360166;
    msg.length = 0.328146990325;
    msg.coff = 91U;
    msg.angaperture = 0.397574178554;
    msg.range = 24415U;
    msg.overlap = 30U;
    msg.flags = 25U;
    msg.custom.assign("NAFLUSCMSMFRZLEBHYMVVPTJZJLHRVLQKGIYSSQA");

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
    msg.setTimeStamp(0.710889843011);
    msg.setSource(52031U);
    msg.setSourceEntity(113U);
    msg.setDestination(62899U);
    msg.setDestinationEntity(17U);
    msg.timeout = 18905U;
    msg.lat = 0.100824249293;
    msg.lon = 0.516828921834;
    msg.z = 0.404787962096;
    msg.z_units = 80U;
    msg.speed = 0.957175478425;
    msg.speed_units = 154U;
    msg.syringe0 = 173U;
    msg.syringe1 = 193U;
    msg.syringe2 = 85U;
    msg.custom.assign("FSRZBUCNAFAVCXFVHOXFYWFKDATOBFRQDSGMQDCFCCGCBXQTHKWETSRLEHWHDMLQTHMEXBZYYGJXLNEGWYUJYWOMDMZPEYIMEJXAMALDJFKXGCBNPEXYKQIZSDLPIOIOESBTENHTAZOUKNPNAXVCLGAVNKQUDYTBZOWRDZPGVFULOQVXPJVIHIYRLHOJTIKQSNOLAYHJRBIKQCMIUEAPZLNUFGRRBTKJVPUZWIRTZCSWGWMWUDPRBJUHSVQKSS");

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
    msg.setTimeStamp(0.342620781418);
    msg.setSource(32716U);
    msg.setSourceEntity(221U);
    msg.setDestination(49093U);
    msg.setDestinationEntity(129U);
    msg.timeout = 58210U;
    msg.lat = 0.574527420861;
    msg.lon = 0.177400774186;
    msg.z = 0.316083943359;
    msg.z_units = 243U;
    msg.speed = 0.63932312215;
    msg.speed_units = 103U;
    msg.syringe0 = 52U;
    msg.syringe1 = 99U;
    msg.syringe2 = 46U;
    msg.custom.assign("ZBKMXJONHXQMVOYHAMRNIOKGMGRMEAFJQDDQACWIVZTTHETDXJLPTDVFZAUMBUYAXOBTQBJHHLNNYTHUTDQDCNEBRIGWNZTXCKAVFHRJRGVRLOSVYRESKBDZLKNPQOBIZCPJXMWLJPCEGJHNBCAMDGFVSXQZLRLBQASUCSHSZNKLVCPKIUEXJWYOVTEI");

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
    msg.setTimeStamp(0.314004966366);
    msg.setSource(62077U);
    msg.setSourceEntity(198U);
    msg.setDestination(56830U);
    msg.setDestinationEntity(174U);
    msg.timeout = 62580U;
    msg.lat = 0.513739345377;
    msg.lon = 0.527538305613;
    msg.z = 0.49925999397;
    msg.z_units = 174U;
    msg.speed = 0.604796507837;
    msg.speed_units = 98U;
    msg.syringe0 = 101U;
    msg.syringe1 = 171U;
    msg.syringe2 = 72U;
    msg.custom.assign("GOLXYRGWPIXTBFWRIZDCCHKFOUGUZCSDDIPCQDWNGHYLGYJORJWOSVESQNCCHJEQTGPTNAOJZLKHMGYTIOBDWPJKDRAFWKAVNILBXYNMHEQABNHLWVQQSDRBAHYKACSPKPPXRXFDVXLKHQFMCVGBRWTTZEJEJHDBYBDGYGQZOVUXNSRFUMEKYXUCEBTPIMVUZSVJLVEFIFULNEKPSNAZMZSSIQKOMNQAZRXFIPIMCMMOWOLHEWJBTRLJTFUA");

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
    msg.setTimeStamp(0.22503011364);
    msg.setSource(29567U);
    msg.setSourceEntity(39U);
    msg.setDestination(48199U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.107403869928);
    msg.setSource(3574U);
    msg.setSourceEntity(197U);
    msg.setDestination(3724U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.188334167622);
    msg.setSource(63065U);
    msg.setSourceEntity(9U);
    msg.setDestination(38649U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.176518411609);
    msg.setSource(40109U);
    msg.setSourceEntity(228U);
    msg.setDestination(9055U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.988589523543;
    msg.lon = 0.466512919801;
    msg.z = 0.283212871044;
    msg.z_units = 93U;
    msg.speed = 0.392767876139;
    msg.speed_units = 138U;
    msg.takeoff_pitch = 0.663417268911;
    msg.custom.assign("RIUYHRWCIPMZFVVSJUCARMHOXOCNZCZNGWDIFNAFMOXSRSEEDWEVDPMTQNBSDFQTIDCOPLFFARYQWOUKTGWOSCDWOHBYXLBKKNRYGVPNXXQYBWPZEITKHIHXKZTJXJMRXWVSPMOLOJVYYKDVEIGVJAAOZUNKXTKRELJTPHKXSJATAURBQYJEAPHSQFZCJLLUIEEZGLZCIQMGMNQKWSQJBSYGYMUBBNDUCDTZBWL");

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
    msg.setTimeStamp(0.124431549275);
    msg.setSource(32695U);
    msg.setSourceEntity(111U);
    msg.setDestination(45675U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.522226960391;
    msg.lon = 0.725337241265;
    msg.z = 0.0750740885772;
    msg.z_units = 250U;
    msg.speed = 0.492754596267;
    msg.speed_units = 85U;
    msg.takeoff_pitch = 0.516756725022;
    msg.custom.assign("LZQGSDEPGNSYMJTYWUWQGCCWHBNQFUWWGTZACTCVFNXTXHXVQCNXISUIFIEKFILZPGLJOAOWBALRDPDHXJMOSVKSZMWKTJXJNADISYFNQLHPKERMNGOMRRXZBJVSFGWTGZDBBUYQ");

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
    msg.setTimeStamp(0.0644301443005);
    msg.setSource(32264U);
    msg.setSourceEntity(131U);
    msg.setDestination(5326U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.697578274885;
    msg.lon = 0.133309100404;
    msg.z = 0.0586463391574;
    msg.z_units = 101U;
    msg.speed = 0.436375798359;
    msg.speed_units = 184U;
    msg.takeoff_pitch = 0.4771469883;
    msg.custom.assign("JJCHLPWJBCRROLRSOYTKBLIUKQSCVDLUDIRVMSYKWUGTYYBKZURUCBEYLGSHDFJTMDXGPPMGQQMRAEESHTNXRHWNFLQDRP");

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
    msg.setTimeStamp(0.298817606019);
    msg.setSource(53181U);
    msg.setSourceEntity(239U);
    msg.setDestination(22595U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.996752487082;
    msg.lon = 0.437268842453;
    msg.z = 0.411747814745;
    msg.z_units = 9U;
    msg.speed = 0.456293817457;
    msg.speed_units = 207U;
    msg.abort_z = 0.80270660069;
    msg.bearing = 0.865176960223;
    msg.glide_slope = 30U;
    msg.glide_slope_alt = 0.256745475561;
    msg.custom.assign("HBIJSQAUYDTVBJZKZUEOMTATQVGNNTIRBWHRKCFIEVBFYHPFQKHQCVHJKNREPGG");

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
    msg.setTimeStamp(0.496400523493);
    msg.setSource(65502U);
    msg.setSourceEntity(178U);
    msg.setDestination(11161U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.0876839923431;
    msg.lon = 0.85390301661;
    msg.z = 0.458730660586;
    msg.z_units = 151U;
    msg.speed = 0.720148519774;
    msg.speed_units = 192U;
    msg.abort_z = 0.600853100426;
    msg.bearing = 0.290683458278;
    msg.glide_slope = 140U;
    msg.glide_slope_alt = 0.890253781002;
    msg.custom.assign("NBHKFTBIXRWCSJJQLFQKZRIVGGHQFKILHNALRRYTCBAFLLBUVNUYORMFOKCETEIZBATLDHYOXQIUOTZOBQBXPZDPFLEUIGRYPDKZVUEXIEZNJCEEPLWUKMUGYZWPWYERCPTXFSWQTGYOPUDCOMBQHCAUKFSAAZOAVKXGSHIYSGXJJKINVAVWHXRUPWYSSLHJMVHQMDWQYJIMHJVDTZDONEFGEKDRXDSMVTONDALCRWSASNGPWQJXMT");

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
    msg.setTimeStamp(0.440004527801);
    msg.setSource(3147U);
    msg.setSourceEntity(249U);
    msg.setDestination(29208U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.499035599065;
    msg.lon = 0.46901847531;
    msg.z = 0.205259615807;
    msg.z_units = 51U;
    msg.speed = 0.316860084454;
    msg.speed_units = 61U;
    msg.abort_z = 0.368815680233;
    msg.bearing = 0.639068353741;
    msg.glide_slope = 59U;
    msg.glide_slope_alt = 0.101532134594;
    msg.custom.assign("FSNGJATXWLERCEAOKCIYKAKLYOGMVMAFIPDKKHLNVQYUCSXXLULHWPSPWSRBO");

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
    msg.setTimeStamp(0.412985696887);
    msg.setSource(23125U);
    msg.setSourceEntity(187U);
    msg.setDestination(29058U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.842411620785;
    msg.lon = 0.881401484225;
    msg.speed = 0.341621939984;
    msg.speed_units = 92U;
    msg.limits = 55U;
    msg.max_depth = 0.96595842235;
    msg.min_alt = 0.953496635408;
    msg.time_limit = 0.157064620979;
    msg.controller.assign("ZZOCLOHXJAZQPXDMYXKNZIKKJSZFFQWMMCKUGRJNDAPHFSEXAOPYVONFVMHUOPTRAUBRKJWQQZHFOHSMWESRPRYZDVQKRXBIFHIAWVQFRPLYXNVYEJSHPMCWTUBPVUGZMWADCEVCUWTGSDCYKINLQXCICDYQJFIEXGEBESWDJKLR");
    msg.custom.assign("QZTNORWIHYEHIFVOSYEKGNUCXAGEMZUKWQTVYITFNWNRPYXLJUKGHBYMUQXAKIICMLWYXQVZSWHJRXYMVFHOBTKAHJORRPFPLXCCPRNKRBXNFKEBPGKOGWTOIBLDUDUCRNNUAGZXSAOEMQGJSKLLXVADFDPYITEOTZZZSCS");

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
    msg.setTimeStamp(0.0803136175085);
    msg.setSource(61738U);
    msg.setSourceEntity(16U);
    msg.setDestination(41616U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.765154177478;
    msg.lon = 0.158443184204;
    msg.speed = 0.455063607981;
    msg.speed_units = 218U;
    msg.limits = 82U;
    msg.max_depth = 0.772525565416;
    msg.min_alt = 0.739259033519;
    msg.time_limit = 0.336945936501;
    msg.controller.assign("DMMVPOGAAZMTZEXMDKATYXXTCBUJJQZRFALBGGHUQJQRMAJJZUWEAENENZZWPFXRCZQNTFOBIMLXTVJRXMZDUYONSWBCTHEKQVNGXVHUCOLYXIQDWBDNHQCHSIICGBPWBWTANTEDOGGIYOZLKKAPERHOFJHSXLOSHEKFFMSPEUDNBRGWIKRFQHTIAUIVSZJJMFCRVVMHTBUYOVPBKVYISE");
    msg.custom.assign("PADBLLSSCCLUFPUETKYHENLIMJMWEUNWMDAJAIOXQRBKOOOIBDNGEVVJVMFFZWMKZSSQDCCORFFGOKUHDDOZPWCHQAFXMCYTGJSEYXNHTQBGRRVOOJIBDQLIIURQDGNLJEAHLZPVUUVDXRK");

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
    msg.setTimeStamp(0.522892009261);
    msg.setSource(36784U);
    msg.setSourceEntity(141U);
    msg.setDestination(40183U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.750251590327;
    msg.lon = 0.25851540415;
    msg.speed = 0.445006571079;
    msg.speed_units = 76U;
    msg.limits = 238U;
    msg.max_depth = 0.132779300678;
    msg.min_alt = 0.419706043066;
    msg.time_limit = 0.195490809582;
    msg.controller.assign("JAZQDQMXHVNGFPRJASTVZBGAOPIKEPTRSGKZXMVHDRFKVDXRXUIGMTKVDTOPKHCMCYOAVUZTKGJZLBKSFNWPFUZFGBAWXSDKHCVDPEYLVLGWFMNBJSLHPFZPIJQOIELRPLQLEIQQYMEVNOE");
    msg.custom.assign("ARJUTDOVDNNBYNOPUQZXLHSOJKLYWROPRXXOMOEYWMOFVFIXNXOPROFCTVCYHCSTDSFLTFLGKTEWZTMREDQFDUHKKVUNPFQGJDZUYBIGADCQBSAUMZACXCUVQVZYZCSEDBLMBLZPEQANYWQQXBMGAHEPTTLKSIEWTUASBBJRGMHWUKWNJGNYAHKACRZGLGZBEHLGHGPLVNKHAPJXJTHQVZ");

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
    msg.setTimeStamp(0.667690570453);
    msg.setSource(35182U);
    msg.setSourceEntity(79U);
    msg.setDestination(2209U);
    msg.setDestinationEntity(185U);
    msg.target.assign("PQYVLHGVBYBAJHIVPNPBKGMCYKCNAISSDQTP");
    msg.max_speed = 0.0631849205276;
    msg.speed_units = 74U;
    msg.lat = 0.168131653897;
    msg.lon = 0.705915482042;
    msg.z = 0.258352486735;
    msg.z_units = 144U;
    msg.custom.assign("NMQVARDNXBFINTRMVZCXAHHAFYVKSHUVDIHOTSREQBIHSWIKSZFYPOHYHJIFCLLVBEFYOQMBEGKRJLXQENQKEUVGKTCUBJUABLIXCEDZIYGUPTOFTZCXTOKZTNDAQUSEOJAEDHOQWSNGCVCRTMYBYAGRQZPRM");

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
    msg.setTimeStamp(0.49294932192);
    msg.setSource(50204U);
    msg.setSourceEntity(114U);
    msg.setDestination(39936U);
    msg.setDestinationEntity(189U);
    msg.target.assign("GLBLBDDGLWTUMUILSGLQICEMXMVUDTGIAZVPNOWGSXAIVQIODZGEUOSHCOTVVZZJRQDDPPJIBRFAXYNMRETLAPIWJQHAKEBFGRVNRDIFWGKMUEOHOOKXIJBNNPQBAZOWEIBXTYHLATCRQFQHWKQMOKLHCJBNXRWPZTKFCYRYATCSDCQPBZFWOBTHFJNPHYVESZFYVYKCMZYU");
    msg.max_speed = 0.201961619871;
    msg.speed_units = 88U;
    msg.lat = 0.944008336275;
    msg.lon = 0.45838848035;
    msg.z = 0.832199560479;
    msg.z_units = 243U;
    msg.custom.assign("TMHCOJXGDHPZNAGVOKVYQVDXWWWONDIUYMEWPTTCLZXOVPHVGQGIPANGLUXUSVUPBWJEDKLNSSYYFYDCZKTBGULGLRBLECWUYF");

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
    msg.setTimeStamp(0.675724616511);
    msg.setSource(36627U);
    msg.setSourceEntity(98U);
    msg.setDestination(14266U);
    msg.setDestinationEntity(235U);
    msg.target.assign("MONJFNAFBDNRPYSKRKUJSQGBFCMUPOOSHSZENBXVEUICXUETPLCARIIIPBVJRNMKGGOETFTYCLQVZDHTXVSQNSKCDMFRVARLCYVNPXZ");
    msg.max_speed = 0.889083742228;
    msg.speed_units = 24U;
    msg.lat = 0.553744049433;
    msg.lon = 0.135504249714;
    msg.z = 0.292619816503;
    msg.z_units = 53U;
    msg.custom.assign("JFQMEOEWWWQIBIMQBVRFTECRLFKVVGBLGCUGBJNSJRTOFABKIEQVFKZKXJOYSCOWXJCHNNYJLUPSMJHWDCYRQMRTKREAGBUZSWEIZYXRFDMVCGDZAROCSXSXHPTNSULQRWUVCITHMJDIBIDECOHF");

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
    msg.setTimeStamp(0.667194137227);
    msg.setSource(50104U);
    msg.setSourceEntity(156U);
    msg.setDestination(18275U);
    msg.setDestinationEntity(76U);
    msg.timeout = 44060U;
    msg.lat = 0.572336019381;
    msg.lon = 0.335033360355;
    msg.speed = 0.859431950497;
    msg.speed_units = 44U;
    msg.custom.assign("DJZJIUVCZWSCCQGKZCXPNVUUKHEAQBKDQPINAKKOXWTCSGPUYXNTPJMEKOMVMBRDEAWLSTOYEWWIGJELDQWJRCXTZJQDTZLLLQMHGLVJOGBOUCBYZJURBEZQANCXARPNBRDNIIFJTAIKMZOTFMXVFFPRQIHHXKYYHCOEHSNCVPLNUSEYKXTPAIMWDVGDXYAHSARSFFQWZMPXFWENWRQSPSZVOYFGFLUBBBNYDGIDHRGJTLVUVRHOTHME");

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
    msg.setTimeStamp(0.625017031419);
    msg.setSource(56025U);
    msg.setSourceEntity(102U);
    msg.setDestination(2487U);
    msg.setDestinationEntity(104U);
    msg.timeout = 56475U;
    msg.lat = 0.579438431;
    msg.lon = 0.243072260699;
    msg.speed = 0.151824172735;
    msg.speed_units = 116U;
    msg.custom.assign("QJJDCLFERKIHZXQNSKFSVKLVFZUSOJNVANRNAMSCNRWYTELEOABULTGQTVEFUXYBOWJXNCOGITUPLUQNEJAIPTFDLBMMJOWTOXWDVMDGVICULISKARBWEPHPZGSACTWBECEDAZHDBCMBMLHPZGNH");

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
    msg.setTimeStamp(0.312409796693);
    msg.setSource(5424U);
    msg.setSourceEntity(200U);
    msg.setDestination(16326U);
    msg.setDestinationEntity(180U);
    msg.timeout = 19080U;
    msg.lat = 0.212210041254;
    msg.lon = 0.136612219835;
    msg.speed = 0.85932393742;
    msg.speed_units = 79U;
    msg.custom.assign("GISDMDQPQQVUTPFWAHYLVJAEJHNEGIYKBFFNUDSALFIHLSMIJGGSGXWMCXLCUWPWNRLHSCTBJEODCEHHEZVORTORMZZSOUPGIXDFDEIQQMXTYBYQVLYKUHNREZQKPWCKLMRJUOSRXZKNDPEQVUAFVNJAOIXFAZZGJAWRTCENHOAMJBTBYAOGZTCKCFVZJHTCBZBUWPANPWMDRIIMOOXHJWGDSSP");

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
    msg.setTimeStamp(0.0127729325317);
    msg.setSource(64362U);
    msg.setSourceEntity(227U);
    msg.setDestination(46034U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.907425075606;
    msg.lon = 0.499288233863;
    msg.z = 0.980611289077;
    msg.z_units = 193U;
    msg.radius = 0.68145553294;
    msg.duration = 38346U;
    msg.speed = 0.341480378655;
    msg.speed_units = 175U;
    msg.popup_period = 1308U;
    msg.popup_duration = 61192U;
    msg.flags = 164U;
    msg.custom.assign("PWSRAFGDEUETYZAYWIANSNCEIOUEDVQWUUUTLWQBQEWFISQZKMCNZONRRROJPDEJAZGLWKGABNXSBGKBRCNGACKJPYVTEZXULODYVRNGGLYOUWSO");

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
    msg.setTimeStamp(0.16262983773);
    msg.setSource(15217U);
    msg.setSourceEntity(232U);
    msg.setDestination(44916U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.624892438581;
    msg.lon = 0.232376369097;
    msg.z = 0.604383957648;
    msg.z_units = 40U;
    msg.radius = 0.432781985102;
    msg.duration = 60021U;
    msg.speed = 0.896073853318;
    msg.speed_units = 107U;
    msg.popup_period = 6593U;
    msg.popup_duration = 64645U;
    msg.flags = 200U;
    msg.custom.assign("XHWQMKAXXTSHPGDAWQRWYGEAZIMHKVFAYAWTEUFAFHGAYUJYIDDTABEXYNAGRPGJRTHPEBSBIFBPJMQCRFDJQENUCACUXLRMSIBKVUERMVIIKZEI");

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
    msg.setTimeStamp(0.99388881456);
    msg.setSource(35828U);
    msg.setSourceEntity(86U);
    msg.setDestination(28991U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.572476447595;
    msg.lon = 0.681037762301;
    msg.z = 0.575224160941;
    msg.z_units = 74U;
    msg.radius = 0.770885968298;
    msg.duration = 13162U;
    msg.speed = 0.372350902001;
    msg.speed_units = 237U;
    msg.popup_period = 54170U;
    msg.popup_duration = 42149U;
    msg.flags = 55U;
    msg.custom.assign("RJUKQRKXNRUJOJTABDPCWURROVBKYABAVBFHXZMKGQMPBCFHFZRAWXSMOEDQFJINMKUNMKMVY");

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
    msg.setTimeStamp(0.617072362134);
    msg.setSource(11984U);
    msg.setSourceEntity(253U);
    msg.setDestination(17723U);
    msg.setDestinationEntity(58U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("NPIKNOMLJCCCUNRVNGARMZGMNBBOKQWBEUWUGQFVAFFDXVAGMXJLYIWLAKBKZTHCXFFFGHFZMXRYFWODCJSMOICPCSHYRPOLDDPPZXQ");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 21619U;
    tmp_tmp_msg_0_0.custom.assign("OASMKHRSLTHUOYFZXGOEPJGUCVWOFTUPYGEKZYIEVEZZPTTKRKFXCODMPXZNGFXTUBTQSDLGXHRYSCZCYNN");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Heartbeat tmp_tmp_msg_0_1;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.827076920503);
    msg.setSource(48552U);
    msg.setSourceEntity(1U);
    msg.setDestination(47965U);
    msg.setDestinationEntity(18U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ZNQUCDVEMNXSSAJXWRGXGZGYJCVYQASJYAZKYKJTBQQZVKXHAKOBEYUMEXDLCPNTMGZYQLMPLRBYHPBPTCXFCKAOAOUVYPNDDNHLGXIPSRRPJUGFJZZHFDFWIJCBITJMSCMNSHXYRZBHZLBDWDUCRERXJIJQWZTINNLBMVWDGNPU");
    IMC::Elevator tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 12812U;
    tmp_tmp_msg_0_0.flags = 242U;
    tmp_tmp_msg_0_0.lat = 0.608162306427;
    tmp_tmp_msg_0_0.lon = 0.689410898076;
    tmp_tmp_msg_0_0.start_z = 0.735092257142;
    tmp_tmp_msg_0_0.start_z_units = 250U;
    tmp_tmp_msg_0_0.end_z = 0.401888706641;
    tmp_tmp_msg_0_0.end_z_units = 232U;
    tmp_tmp_msg_0_0.radius = 0.591116544627;
    tmp_tmp_msg_0_0.speed = 0.260511895703;
    tmp_tmp_msg_0_0.speed_units = 253U;
    tmp_tmp_msg_0_0.custom.assign("POUEQPPHVFOPGDPDYAIJYQVSNUXRWQUUJZLBPTHQVGCBQDGXGTHBYKMNVTSGVZGMUMEXPJXOKSNKAYCEOIWATDYOIVSHLIECNXVSUDGUOEIMSVMNYFENFOIZCKMMYYQILZKYWHCXREDLRZWMRTGKABZVRKUKUQFA");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::LoggingControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 91U;
    tmp_tmp_msg_0_1.name.assign("JSBIQQSLQQDODYMIZMBNBVGFHWVCDZHCZSNFNCNCAKYTRIVOJPSGXQDDKYIJLWBFVPENXXVBYWRSBFVHCIJUEXVUMGRPZJGMLKXEODQJRLSIRHLPKTQQKKLWCOUXLETRYSRBBPAWYNOTEHMAYEFUCEKKNSFULUHYFXWTUTXNORAFVYRXCZEGZITJHUEMIZLPTKGBHPHDZQQSGZOCGDWLAVEMJJPITMYPDSNOAGWWGIFOKAXNOVRP");
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
    msg.setTimeStamp(0.0342856355814);
    msg.setSource(15197U);
    msg.setSourceEntity(73U);
    msg.setDestination(50169U);
    msg.setDestinationEntity(167U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("KQYNICWILXFNVWOMMTQNRWCGZZAYGKPFHMSFWAUZBDAZFUEJCPPVOXBLOFJVUX");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 35595U;
    tmp_tmp_msg_0_0.lat = 0.417818277822;
    tmp_tmp_msg_0_0.lon = 0.031329488678;
    tmp_tmp_msg_0_0.z = 0.777225042926;
    tmp_tmp_msg_0_0.z_units = 75U;
    tmp_tmp_msg_0_0.amplitude = 0.846626392429;
    tmp_tmp_msg_0_0.pitch = 0.730980978108;
    tmp_tmp_msg_0_0.speed = 0.339414471869;
    tmp_tmp_msg_0_0.speed_units = 89U;
    tmp_tmp_msg_0_0.custom.assign("XIEWKCQDGXKLOSTMOLWCCVGSZSOBAMCUWHNVSPLZPIXEBFXVJEUQMPQEALKPYBOIYZZVFTATUUYWIGRVCUSNDZDRJEMHTCZDKTGGTYLHYBFDKVFPEYZQAPVSQMERPFYXFOUMIVUETNXPOEXBCWZAOEFNRCDTYGHDGWNBANMMOOJWHHBTJMAIIKKKAIJABGRJRHLKZSRYTLNHUHJPVQQJRRR");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Chlorophyll tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.674268190016;
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
    msg.setTimeStamp(0.348215077865);
    msg.setSource(6352U);
    msg.setSourceEntity(74U);
    msg.setDestination(39322U);
    msg.setDestinationEntity(12U);
    msg.timeout = 50731U;
    msg.lat = 0.0745516873627;
    msg.lon = 0.793289106877;
    msg.z = 0.883121417648;
    msg.z_units = 234U;
    msg.speed = 0.787764280069;
    msg.speed_units = 9U;
    msg.bearing = 0.881375486298;
    msg.width = 0.0937170754035;
    msg.direction = 206U;
    msg.custom.assign("VNPERJWSAVXCRYBIYUDBICHINMCINBSDLAODFGETREWJSLUEOMTPCAMKJGRGXDLJCYBOLLAXRXSHKHJXUZPWLRFZTTZXOTTQNOSCPVMAQQHQJEWYWZSXIQIZRLCVBZYFDCBTSVVUOCIEHDAKRYPVFOHEAGNPWEUWYBQPFUMGQXDYIDKAJUGRZYGJF");

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
    msg.setTimeStamp(0.253215143505);
    msg.setSource(39793U);
    msg.setSourceEntity(107U);
    msg.setDestination(65386U);
    msg.setDestinationEntity(128U);
    msg.timeout = 53945U;
    msg.lat = 0.284140337822;
    msg.lon = 0.882680593739;
    msg.z = 0.363663584487;
    msg.z_units = 76U;
    msg.speed = 0.813020610177;
    msg.speed_units = 161U;
    msg.bearing = 0.967292034283;
    msg.width = 0.104942065782;
    msg.direction = 232U;
    msg.custom.assign("SCQAZXNDEL");

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
    msg.setTimeStamp(0.694509043563);
    msg.setSource(32143U);
    msg.setSourceEntity(34U);
    msg.setDestination(31314U);
    msg.setDestinationEntity(110U);
    msg.timeout = 16623U;
    msg.lat = 0.734998987799;
    msg.lon = 0.196535072875;
    msg.z = 0.474503695232;
    msg.z_units = 52U;
    msg.speed = 0.390939155027;
    msg.speed_units = 227U;
    msg.bearing = 0.384433625215;
    msg.width = 0.15396344153;
    msg.direction = 171U;
    msg.custom.assign("HWQILFUEGIAMXFWLXDOLYCPEUACPJSSPZQKXLXFWJEHTGLHGTURTYIO");

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
    msg.setTimeStamp(0.10667844476);
    msg.setSource(34394U);
    msg.setSourceEntity(163U);
    msg.setDestination(62551U);
    msg.setDestinationEntity(109U);
    msg.op_mode = 72U;
    msg.error_count = 39U;
    msg.error_ents.assign("SVQGUNJXTEGPDDYYRVBZJXAJKRLMXFHZDUMGAQMJIF");
    msg.maneuver_type = 11622U;
    msg.maneuver_stime = 0.0956817554032;
    msg.maneuver_eta = 58955U;
    msg.control_loops = 3471782286U;
    msg.flags = 233U;
    msg.last_error.assign("GQPFDHEZTZOJDZNUGOOFGIPSG");
    msg.last_error_time = 0.326898444709;

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
    msg.setTimeStamp(0.403487605917);
    msg.setSource(28660U);
    msg.setSourceEntity(195U);
    msg.setDestination(11478U);
    msg.setDestinationEntity(229U);
    msg.op_mode = 246U;
    msg.error_count = 97U;
    msg.error_ents.assign("MFYBSXWCVIJYVPBYHASLLWVLTAFINVYETIASQVNTZVYJGCOJLPKBQCNCPNFYOQAZPFVAEAXZUIKFAIVAGDRHWOTKTXWJVKPJHCYTIGDSTLENPKJOGZXQUURUSFDNBXGRXNDGQEMXMHQLUSRWFSFWJRYZQEQRLGMMZBNAPUKAQECWZIYLQKZHCNGDREECKMUPBFBKSSDMUOCUMTHZJLCMMPOBOFJHEDRDSWORDJXIRETHIWBVL");
    msg.maneuver_type = 50033U;
    msg.maneuver_stime = 0.264978644486;
    msg.maneuver_eta = 58012U;
    msg.control_loops = 2147891766U;
    msg.flags = 12U;
    msg.last_error.assign("UZLKLCAIVXNMSIYZPDDHZHNWAXBBWKRVEESPIEWZVVYQGTZKEMJRLSCHOUXFZTSZVTPQUESANJLQEDLBVAOCMRDSEOPFUMRUAAJFHPOWAIUUOIFYCI");
    msg.last_error_time = 0.363677459784;

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
    msg.setTimeStamp(0.794115384191);
    msg.setSource(19803U);
    msg.setSourceEntity(205U);
    msg.setDestination(29032U);
    msg.setDestinationEntity(103U);
    msg.op_mode = 211U;
    msg.error_count = 235U;
    msg.error_ents.assign("EIPSMYAQTPZKPKDMBBQDASWISJOYNCMNZWTKKOURARISQUBBEZNMLBOEFPAAHCXYNT");
    msg.maneuver_type = 61506U;
    msg.maneuver_stime = 0.200730436959;
    msg.maneuver_eta = 52602U;
    msg.control_loops = 2129529248U;
    msg.flags = 205U;
    msg.last_error.assign("HAATIJDHKHUNJSIXSPO");
    msg.last_error_time = 0.454472179843;

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
    msg.setTimeStamp(0.107071936428);
    msg.setSource(54203U);
    msg.setSourceEntity(30U);
    msg.setDestination(51852U);
    msg.setDestinationEntity(164U);
    msg.type = 184U;
    msg.request_id = 50540U;
    msg.command = 38U;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.659335931453;
    tmp_msg_0.lon = 0.522467840305;
    tmp_msg_0.z = 0.329507149503;
    tmp_msg_0.z_units = 7U;
    tmp_msg_0.speed = 0.484644097533;
    tmp_msg_0.speed_units = 236U;
    tmp_msg_0.bearing = 0.691976420287;
    tmp_msg_0.cross_angle = 0.930188034234;
    tmp_msg_0.width = 0.348416642136;
    tmp_msg_0.length = 0.35937124141;
    tmp_msg_0.coff = 99U;
    tmp_msg_0.angaperture = 0.414817561169;
    tmp_msg_0.range = 3855U;
    tmp_msg_0.overlap = 197U;
    tmp_msg_0.flags = 194U;
    tmp_msg_0.custom.assign("WIWDTVFQTIDQEOSRYMSZHJPBUCXTQKWW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32666U;
    msg.info.assign("XVGARSLUQTUHWNHMQJBPHGNOYVEOISLONJSBBPPYUCSWXYTBLAKOSCELDAPREDIFXZUHQJJNAFPXAUSAXDMWMXRKCARLJEMZBLPIFWJOIAYWVISVZZLMKOFYZALOO");

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
    msg.setTimeStamp(0.637363632114);
    msg.setSource(3566U);
    msg.setSourceEntity(51U);
    msg.setDestination(2675U);
    msg.setDestinationEntity(116U);
    msg.type = 84U;
    msg.request_id = 50289U;
    msg.command = 36U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.923347061282;
    tmp_msg_0.lon = 0.163345082933;
    tmp_msg_0.speed = 0.734502919855;
    tmp_msg_0.speed_units = 65U;
    tmp_msg_0.duration = 57806U;
    tmp_msg_0.sys_a = 10535U;
    tmp_msg_0.sys_b = 4891U;
    tmp_msg_0.move_threshold = 0.435752005416;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56196U;
    msg.info.assign("LNGUAZAYJKSGXQLEIAMFCORWMAVIFZMOQLEXGNFQXUHFEIFRCTKNDSHMBAPGTDTMBXQIQTVNOLEJEPHYNDCEBTPUNLKGTECKPSXTMUFVQISCAVDFTWJYQNPSACWMLCKUKVWUYUHTWZHWFKMJPODWI");

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
    msg.setTimeStamp(0.180826506499);
    msg.setSource(10594U);
    msg.setSourceEntity(53U);
    msg.setDestination(55321U);
    msg.setDestinationEntity(89U);
    msg.type = 86U;
    msg.request_id = 971U;
    msg.command = 113U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 59550U;
    tmp_msg_0.lat = 0.650541377599;
    tmp_msg_0.lon = 0.2096754248;
    tmp_msg_0.z = 0.348799681593;
    tmp_msg_0.z_units = 42U;
    tmp_msg_0.speed = 0.273303378797;
    tmp_msg_0.speed_units = 229U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.695020379386;
    tmp_tmp_msg_0_0.y = 0.299789561464;
    tmp_tmp_msg_0_0.z = 0.79096902552;
    tmp_tmp_msg_0_0.t = 0.256103609976;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("VPSUMQRLOIXQUEZMAAWCBMQCGDLPWBEPRXIGHNLJGSLHSGDEADURYMVFVXHBUKHPQTSFYOITVFHBTKBSXZQZCURVQHVVYMFOKXSYKGWDFRDUINJYKQWPPMZRZEKTYB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 63836U;
    msg.info.assign("YWLSSFNOWLXFPVAZBOZQKEIXYSNJXZJYGSMCTPCUVCEUPUEPIIYRIMHJJXAHNMGBYZOXMCYQNXWKGOYFABMYOVPEKMHJDPGFHKBVQZLAJSDOLLLUTXHFUPNIRZSBUPSGORIUNSNBVNB");

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
    msg.setTimeStamp(0.260938012385);
    msg.setSource(16474U);
    msg.setSourceEntity(247U);
    msg.setDestination(17854U);
    msg.setDestinationEntity(177U);
    msg.command = 12U;
    msg.entities.assign("TIVLTPNJXGUPMAOVOAATFVOZWVYGSUKLBQGDIEQACLIQRXWGIFURVJCRNPCMCDXMMWIKJCKVQOYHQZKKROHESCBUUDPZTFWETBMQECKGFVNMECVOFJLXDJTVNDUDHEMEJWPRSCIRWTLDYYHXGBFZSSHADPBHZIJHEDQOREMJVQNYIASXS");

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
    msg.setTimeStamp(0.750414117621);
    msg.setSource(51290U);
    msg.setSourceEntity(133U);
    msg.setDestination(19271U);
    msg.setDestinationEntity(244U);
    msg.command = 131U;
    msg.entities.assign("ESUHJOMXUYQLPOQWJQHJMQUCAODVIRSLMVNAANEUEADNAWRHMZYOLZPHLNTFQKBIBWBNPOSZDJXRQIFSNSQKEYLDCGQFKFUCTMJGQXRPW");

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
    msg.setTimeStamp(0.684040936773);
    msg.setSource(10268U);
    msg.setSourceEntity(21U);
    msg.setDestination(5942U);
    msg.setDestinationEntity(8U);
    msg.command = 186U;
    msg.entities.assign("HVCSGOASUYIHCZBRODUKCAUYYLRQKPSXOZKCKCSKANEQAUHIRYJGIETFGQ");

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
    msg.setTimeStamp(0.340840826249);
    msg.setSource(47814U);
    msg.setSourceEntity(114U);
    msg.setDestination(34252U);
    msg.setDestinationEntity(13U);
    msg.mcount = 238U;
    msg.mnames.assign("WEGJBPDNBYXALDKBHTWDJYWWOATAGPUIWOCTGKZSAU");
    msg.ecount = 2U;
    msg.enames.assign("WGQVADXURLJSKPDWFLDXERKEMHTWMRPLEBNEVEIOZTOPFEZUZUYSHQZLRPUUXXJLYMYLOTKIOHAHPSUYXVGITBXDINQIFMLDEMVKOYBRQNTNOBRAOJSSQAUWDAHFZEZYOFUSVECSBKPWOSRNIMZAGHCVWIBGIUIZKJEXDSHCCBTCQWMCNTCKPGFLGLWJBPNFNYQCRORCYUDVJGANGQMPQMICSWZHPTZX");
    msg.ccount = 87U;
    msg.cnames.assign("WBGZJOKKJJEJORRFSDWKPALYIICQIGOLKJQMHNPVOKZPKTEZEKZHIBWAJXGYQZFDTHBDIFKRPBMLCWCXWSCRYCWGNJQURTEDBUFFCIVWSLQBRYAHZHNEMWJXGVHYZXONYRVTVSXIZHNYLPFOCSEMEUST");
    msg.last_error.assign("BKCFHYEQYTSKDOROAJPRMNUBKNGEXRBMFLTEVGJVCMWDLAYDTNROJBNXMSD");
    msg.last_error_time = 0.734415826947;

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
    msg.setTimeStamp(0.9962211455);
    msg.setSource(28592U);
    msg.setSourceEntity(114U);
    msg.setDestination(11510U);
    msg.setDestinationEntity(166U);
    msg.mcount = 58U;
    msg.mnames.assign("BNJOFEVRCQGUGYWZERMOXHHGPLBEPVGRCZOHQFKEFJFVTASGVUNRDOPJDOSBTXRWPPEHVQWTHZVAMXIQHYVCONAGKTNEZNKFAYJIAPXTJTSESLDIYKCFUJHOQTSZYUSXAHUOKRDCWZHPGLIYDTDTVYRNALKXXOQLJNNFMIVKNPRLYIKQRWSDWZWAWGYPSTUJFUMSKBMRLCELWFMILMBMQBCHLGBXCEIZDMCBXO");
    msg.ecount = 35U;
    msg.enames.assign("MCPTNZLHTEZJOWHLOVWTIYMUSHSPXAGFNQDXUFEQB");
    msg.ccount = 15U;
    msg.cnames.assign("ZKAWTMFTJCXPAMUDCRQQZKGBHQJGORGKLIQZDDOYKUBACZJPUEFDDOLGRWBEKVWYAAGIVEOATWZUTSAPSHMZZVQXTEWHCCFUFCKSELBQVLKSOVVIWDJSTQLYXJJV");
    msg.last_error.assign("XFPIGCXABOTDYRLLFSGOGIATPGJNECAAKPFKHPRUQAQGXRNKUFIRNJZUKWFJBVZLPZFYQWYMOBZGKEDUDVELXTSSNRBDZAXGMYJSVKZEUEJYVWYVEZZQLCBMXJHLDXDTXEKXORMTKGPUNWNAURPCLQNMVUCTDEBOSJICWOSWOVGNWIMMSMWZYWHQJKDAUPSHUV");
    msg.last_error_time = 0.883805792556;

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
    msg.setTimeStamp(0.255473703113);
    msg.setSource(42027U);
    msg.setSourceEntity(192U);
    msg.setDestination(23713U);
    msg.setDestinationEntity(226U);
    msg.mcount = 205U;
    msg.mnames.assign("IRDGTOYCSJNXCULKMIDRVJVSKQLAFVTHWDSONXERROUECHPLGMMUGCWEWRKMUGMCYPVOJOSTCBKZCWLVLEXZYJJOOHXWXNQMBSITYFYVVKGBKVVDLZBQLSUXLQFRMIGNDNYKHJAHPFNPPUQIBPUHMTJRSAEBZJZSJXPROTBHSEXNPRQWCHDBAWDBIAFIXCINYAWFG");
    msg.ecount = 50U;
    msg.enames.assign("HCAFVDSJDOQUYSYHXGFAFFDNGACPXCWNQITXVCPVSUCHONGEFMOGZLESRZBSLNEKKEWBMPPCUWHLGPLOWUGDMUMGXAWCDVIYAJHKLMRIUUYOMIZIN");
    msg.ccount = 110U;
    msg.cnames.assign("MXNTDAVFHRWWIOCMNJBYJOPSFRYQAUXKXHEDUVNKGWQSDSIETGTAOJMJLDYUMVCZEKITIBUUESDFSFJFFPCSACLQQVYNDPAVZFLEZXUIRRVLNQMABCJMDKTVEMKMDZJREPUUXQRCIWBIINVKBKQGGK");
    msg.last_error.assign("MWCBFVNAGOOITYSBEGJMITLWYKVGPAXXOHTXRCBZPPSLXDXYPKGACGZZFVTAOKVAJFSCHEQQDGXBEDYOYUIJVJTDUIYLXERUMFFOUVXCQPANENFAGONZPIHWRZIRXQYYBQJDKPJYMSXULKKHKJWQLWPWHSRIICYUVRRLKZTWEZKDUZDCWMGJ");
    msg.last_error_time = 0.0997855208832;

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
    msg.setTimeStamp(0.553865418932);
    msg.setSource(28875U);
    msg.setSourceEntity(84U);
    msg.setDestination(15840U);
    msg.setDestinationEntity(92U);
    msg.mask = 19U;
    msg.max_depth = 0.0815191869824;
    msg.min_altitude = 0.909187528957;
    msg.max_altitude = 0.49626727567;
    msg.min_speed = 0.838808734846;
    msg.max_speed = 0.834682160245;
    msg.max_vrate = 0.922125135656;
    msg.lat = 0.0893092664524;
    msg.lon = 0.347354677399;
    msg.orientation = 0.311189344278;
    msg.width = 0.210000692594;
    msg.length = 0.903089134432;

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
    msg.setTimeStamp(0.100006796973);
    msg.setSource(32492U);
    msg.setSourceEntity(62U);
    msg.setDestination(13186U);
    msg.setDestinationEntity(173U);
    msg.mask = 21U;
    msg.max_depth = 0.55602781197;
    msg.min_altitude = 0.328197085127;
    msg.max_altitude = 0.961859630466;
    msg.min_speed = 0.687263863701;
    msg.max_speed = 0.66793650723;
    msg.max_vrate = 0.641777518947;
    msg.lat = 0.303837787719;
    msg.lon = 0.0378710099184;
    msg.orientation = 0.772477376213;
    msg.width = 0.353695684404;
    msg.length = 0.929672667191;

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
    msg.setTimeStamp(0.94395431074);
    msg.setSource(47009U);
    msg.setSourceEntity(85U);
    msg.setDestination(10702U);
    msg.setDestinationEntity(190U);
    msg.mask = 132U;
    msg.max_depth = 0.156678316911;
    msg.min_altitude = 0.461854358914;
    msg.max_altitude = 0.480194355889;
    msg.min_speed = 0.108014612215;
    msg.max_speed = 0.0555057766772;
    msg.max_vrate = 0.105381396031;
    msg.lat = 0.298740448901;
    msg.lon = 0.251791173431;
    msg.orientation = 0.592225624314;
    msg.width = 0.909204649619;
    msg.length = 0.0925590347129;

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
    msg.setTimeStamp(0.0776526827759);
    msg.setSource(36899U);
    msg.setSourceEntity(66U);
    msg.setDestination(43204U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.0943254287655);
    msg.setSource(55673U);
    msg.setSourceEntity(247U);
    msg.setDestination(44850U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.359843316467);
    msg.setSource(21950U);
    msg.setSourceEntity(40U);
    msg.setDestination(35409U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.530138795685);
    msg.setSource(56082U);
    msg.setSourceEntity(192U);
    msg.setDestination(37704U);
    msg.setDestinationEntity(141U);
    msg.duration = 62943U;

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
    msg.setTimeStamp(0.051792273254);
    msg.setSource(55484U);
    msg.setSourceEntity(11U);
    msg.setDestination(7950U);
    msg.setDestinationEntity(100U);
    msg.duration = 39710U;

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
    msg.setTimeStamp(0.48169431905);
    msg.setSource(61706U);
    msg.setSourceEntity(77U);
    msg.setDestination(57715U);
    msg.setDestinationEntity(129U);
    msg.duration = 36899U;

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
    msg.setTimeStamp(0.813033475267);
    msg.setSource(33915U);
    msg.setSourceEntity(231U);
    msg.setDestination(57045U);
    msg.setDestinationEntity(129U);
    msg.enable = 41U;
    msg.mask = 3998067127U;
    msg.scope_ref = 2553375922U;

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
    msg.setTimeStamp(0.898832966509);
    msg.setSource(46804U);
    msg.setSourceEntity(26U);
    msg.setDestination(32747U);
    msg.setDestinationEntity(47U);
    msg.enable = 247U;
    msg.mask = 4272480787U;
    msg.scope_ref = 3136516546U;

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
    msg.setTimeStamp(0.299349669802);
    msg.setSource(36628U);
    msg.setSourceEntity(195U);
    msg.setDestination(3056U);
    msg.setDestinationEntity(95U);
    msg.enable = 192U;
    msg.mask = 1675280059U;
    msg.scope_ref = 3801483152U;

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
    msg.setTimeStamp(0.361313904689);
    msg.setSource(49828U);
    msg.setSourceEntity(143U);
    msg.setDestination(13249U);
    msg.setDestinationEntity(11U);
    msg.medium = 79U;

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
    msg.setTimeStamp(0.585813086591);
    msg.setSource(54727U);
    msg.setSourceEntity(166U);
    msg.setDestination(49435U);
    msg.setDestinationEntity(61U);
    msg.medium = 93U;

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
    msg.setTimeStamp(0.178087423299);
    msg.setSource(27525U);
    msg.setSourceEntity(91U);
    msg.setDestination(16146U);
    msg.setDestinationEntity(73U);
    msg.medium = 164U;

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
    msg.setTimeStamp(0.168877519057);
    msg.setSource(8796U);
    msg.setSourceEntity(172U);
    msg.setDestination(43848U);
    msg.setDestinationEntity(99U);
    msg.value = 0.715855772183;
    msg.type = 18U;

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
    msg.setTimeStamp(0.108047193806);
    msg.setSource(59131U);
    msg.setSourceEntity(6U);
    msg.setDestination(16503U);
    msg.setDestinationEntity(242U);
    msg.value = 0.358403347605;
    msg.type = 231U;

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
    msg.setTimeStamp(0.562311907349);
    msg.setSource(61935U);
    msg.setSourceEntity(235U);
    msg.setDestination(15083U);
    msg.setDestinationEntity(34U);
    msg.value = 0.971117743556;
    msg.type = 78U;

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
    msg.setTimeStamp(0.515589658885);
    msg.setSource(36020U);
    msg.setSourceEntity(112U);
    msg.setDestination(3397U);
    msg.setDestinationEntity(174U);
    msg.possimerr = 0.648670455959;
    msg.converg = 0.642327452646;
    msg.turbulence = 0.10422251237;
    msg.possimmon = 248U;
    msg.commmon = 138U;
    msg.convergmon = 206U;

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
    msg.setTimeStamp(0.501186864363);
    msg.setSource(21303U);
    msg.setSourceEntity(230U);
    msg.setDestination(10270U);
    msg.setDestinationEntity(222U);
    msg.possimerr = 0.0701971257773;
    msg.converg = 0.813547219944;
    msg.turbulence = 0.0880488336027;
    msg.possimmon = 233U;
    msg.commmon = 189U;
    msg.convergmon = 167U;

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
    msg.setTimeStamp(0.961352355508);
    msg.setSource(24360U);
    msg.setSourceEntity(94U);
    msg.setDestination(50090U);
    msg.setDestinationEntity(121U);
    msg.possimerr = 0.984752565816;
    msg.converg = 0.549506144171;
    msg.turbulence = 0.813981181089;
    msg.possimmon = 44U;
    msg.commmon = 248U;
    msg.convergmon = 211U;

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
    msg.setTimeStamp(0.906832416728);
    msg.setSource(54196U);
    msg.setSourceEntity(122U);
    msg.setDestination(22926U);
    msg.setDestinationEntity(252U);
    msg.autonomy = 174U;
    msg.mode.assign("NPBPZBKOQXWHQVNPCIHPUOKRANLHDXUZKNVQYRECBTFMUDVLSAOZFTITRAVCZVQWZHRRNRNUGGXFYECWZKFTUBPYXONGJDUUHVJUVPSDLMCEFYLRXBEDQRXCOCMQJBNDMHESGGPXJRAJXTDSHMOUEOKAXWDFPDVYGBWVWXKFWIYZSEKZGDJLBAMYHNQINYEWLREPUJZHOISBSAYTFIJAGLHKCYGWFSTKFOPJTIMMSJSMZGEAIIQ");

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
    msg.setTimeStamp(0.00568635230457);
    msg.setSource(45461U);
    msg.setSourceEntity(245U);
    msg.setDestination(56024U);
    msg.setDestinationEntity(112U);
    msg.autonomy = 42U;
    msg.mode.assign("APABPTHCTIUBZATDQYRRGVFICHWMHFAJFIWGZKCGAHKSKDNYFJORSZZBHTFYHIEJKYWAFFPMGYUIOWYVCJOLEUDGVVKRLANXPTOCNKGYLJEDEOURMUGSZQXUTQXNBLQVNCIGLRJLQVWPJAPHLXPIBDBNUDODFIQS");

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
    msg.setTimeStamp(0.620462897053);
    msg.setSource(30156U);
    msg.setSourceEntity(251U);
    msg.setDestination(24240U);
    msg.setDestinationEntity(14U);
    msg.autonomy = 129U;
    msg.mode.assign("JPFJCEGWMUGQJLTOHFLYFRXAMDARABTQYTCLNQWHSOXAKXRTJSKQUHPPPBFJYRSBBUBUOLXWHQIAEGBDEMZDICDWHYGMHZZQWVBOKWQMLYGGVEWONVRILKFNCEXXZADIPFTOPGMRSMTUJRCKT");

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
    msg.setTimeStamp(0.633419827903);
    msg.setSource(42986U);
    msg.setSourceEntity(143U);
    msg.setDestination(32508U);
    msg.setDestinationEntity(207U);
    msg.type = 215U;
    msg.op = 135U;
    msg.possimerr = 0.393510899414;
    msg.converg = 0.921927299926;
    msg.turbulence = 0.0682405520922;
    msg.possimmon = 39U;
    msg.commmon = 91U;
    msg.convergmon = 161U;

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
    msg.setTimeStamp(0.897442777257);
    msg.setSource(25261U);
    msg.setSourceEntity(86U);
    msg.setDestination(55779U);
    msg.setDestinationEntity(93U);
    msg.type = 112U;
    msg.op = 101U;
    msg.possimerr = 0.285796488872;
    msg.converg = 0.276067548122;
    msg.turbulence = 0.301970503868;
    msg.possimmon = 58U;
    msg.commmon = 77U;
    msg.convergmon = 0U;

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
    msg.setTimeStamp(0.0158163465349);
    msg.setSource(20807U);
    msg.setSourceEntity(90U);
    msg.setDestination(27175U);
    msg.setDestinationEntity(119U);
    msg.type = 54U;
    msg.op = 82U;
    msg.possimerr = 0.820025906232;
    msg.converg = 0.226423156527;
    msg.turbulence = 0.588945323625;
    msg.possimmon = 171U;
    msg.commmon = 218U;
    msg.convergmon = 224U;

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
    msg.setTimeStamp(0.943747053328);
    msg.setSource(28750U);
    msg.setSourceEntity(74U);
    msg.setDestination(25633U);
    msg.setDestinationEntity(36U);
    msg.op = 110U;
    msg.comm_interface = 214U;
    msg.period = 31885U;
    msg.sys_dst.assign("LPCLJMAIIJXGIKVSHYMZFOAUXSQOXKLAENTBJULGTGXDHQUUTASIIVRASYYWVACOKMQITYWPJHYDRDPTAMBBKGCJGUHGCCSZRVAQW");

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
    msg.setTimeStamp(0.168796515919);
    msg.setSource(17079U);
    msg.setSourceEntity(109U);
    msg.setDestination(52562U);
    msg.setDestinationEntity(236U);
    msg.op = 95U;
    msg.comm_interface = 163U;
    msg.period = 14778U;
    msg.sys_dst.assign("QZEXMMANQSZZJCYYHHETAKZEYQFSTESUWGRBFFOHNSVRGIADCWHMNJUXAGTAUPNEMUUYIOCLNZFWV");

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
    msg.setTimeStamp(0.280578208825);
    msg.setSource(5623U);
    msg.setSourceEntity(93U);
    msg.setDestination(60546U);
    msg.setDestinationEntity(115U);
    msg.op = 178U;
    msg.comm_interface = 111U;
    msg.period = 60906U;
    msg.sys_dst.assign("HXLWYNLDAOAPFFFGZEEUUGDSFJELMGCLPHZDXQZIZGMTSJXAVK");

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
    msg.setTimeStamp(0.244974931061);
    msg.setSource(45257U);
    msg.setSourceEntity(251U);
    msg.setDestination(14673U);
    msg.setDestinationEntity(142U);
    msg.stime = 3829812001U;
    msg.latitude = 0.970555581698;
    msg.longitude = 0.529248329391;
    msg.altitude = 63669U;
    msg.depth = 8232U;
    msg.heading = 48536U;
    msg.speed = -25788;
    msg.fuel = 24;
    msg.exec_state = -52;
    msg.plan_checksum = 1821U;

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
    msg.setTimeStamp(0.753620260094);
    msg.setSource(19395U);
    msg.setSourceEntity(164U);
    msg.setDestination(10178U);
    msg.setDestinationEntity(179U);
    msg.stime = 1617040258U;
    msg.latitude = 0.0272999365286;
    msg.longitude = 0.744629219378;
    msg.altitude = 26544U;
    msg.depth = 54378U;
    msg.heading = 46119U;
    msg.speed = -27868;
    msg.fuel = -45;
    msg.exec_state = -97;
    msg.plan_checksum = 4850U;

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
    msg.setTimeStamp(0.921020295573);
    msg.setSource(12788U);
    msg.setSourceEntity(12U);
    msg.setDestination(51208U);
    msg.setDestinationEntity(9U);
    msg.stime = 2680242443U;
    msg.latitude = 0.00387903806231;
    msg.longitude = 0.523453961937;
    msg.altitude = 59412U;
    msg.depth = 46031U;
    msg.heading = 1551U;
    msg.speed = 6833;
    msg.fuel = -53;
    msg.exec_state = 11;
    msg.plan_checksum = 61665U;

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
    msg.setTimeStamp(0.132059711977);
    msg.setSource(22663U);
    msg.setSourceEntity(190U);
    msg.setDestination(49547U);
    msg.setDestinationEntity(154U);
    msg.req_id = 33394U;
    msg.comm_mean = 85U;
    msg.destination.assign("MJPBJURADKLFDSXCTRFBJILYNQHHGOFRPVGTSIZMXAUVQRFBMTZOLVTMNTEFSUBGSEGKSLIUXHCNLYIVJDWHAPUQQEXXAIBZFCCPRKBAAWIOAWJBJKRYOCFZRZRTYWKDXCWHXLOGNNGSFZACOGDRWXYDUADBEUWQIPQZZFCEHPMZ");
    msg.deadline = 0.598905444978;
    msg.range = 0.858157995895;
    msg.data_mode = 147U;
    IMC::QueryPowerChannelState tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WVGNFJQALYCVCSZZKGMWIDWZNFFVOEJRADYEHKDPQWEPADVVULGJAFWPUIHQXVTQVBSQPGFZSUKXSSYKCMLFSEICLEAIPOWPYYVXFTHBXRMBOAQLFCBZMQSWOAJZBRFLZICRAEKNLMBXCZDGEEHXUSDNIUEBIWRMNTLXTDJQHFVYGWOJYHLIOGXLPUHPEOZYMOTXYBAROUCMIRGJQKQJNZDUDUKHNTPTRK");
    const char tmp_msg_1[] = {35, 101, 85, 111, -81, -80, -64, -72, 44, 62, -35, 81, 1, -75, 39, 38, 42, -101, 70, -106, -109, 47, -119, -84, -57, 54, 78, 98, 32, -54, 78, -30, -116, 29, 34, -98, 125, -93, -80, 33, 79, 57, -81, 120, -97, -17, 59, 82, -93, -38, 29, -42, 119, -14, -8, 46, 117, 88, -127, -108, 19, 89, -124, -92, 106, 73, 117, 42, -15, -19, 71, 40, -56, -90, 38, 58, -77, 25, -5, 11, 119, -108, -83, -86, -102, -116, 32, 9, -12, 92, 117, -75, -70, 76, -17, -86, 62, 66, 20, 102, -102, 126, -33, 58, 57, -91, -16, -112, -25, 6, -72, 32, 94, -96, 69, 104, -104, -16, 61, -19, -82, -70, -7, 37, -109, -35, -108, 92, -70, 93, -35, 100, 9, -105, -78, 36, 107, -113, -122, -82, -14, 100, 112, 48, 12, 28, 38, -125, 43, 126, 56, 61, 5, 11, 52, 27, -122, 65, 15, 85, -54, 82, 115, -40, 15, -115, -104, -1, -12, 37, -44, -110, 30, -27, 29, -42, 76, 54, -115, -61, -83, -94, -20, 89, -58, -16, 43, 91, -80, 81, -63, -25, -49, 36, 48, 23, -41, -109, 47, -32, -87, -109, 34, 15, -35, -114, -82, -80, 101, -100, -82, 30, 79, -44, 75, -115, 57, 27, -74, 55, 104, -51, 75, -95, -105, 42, 17, 43, 62, -111, 106, 40, 64, -106, 21, -28, 71, -50, -86, 37, 98, 19, -66, 59, 41, 107, -108, -104};
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
    msg.setTimeStamp(0.486981962416);
    msg.setSource(15535U);
    msg.setSourceEntity(239U);
    msg.setDestination(61135U);
    msg.setDestinationEntity(178U);
    msg.req_id = 19320U;
    msg.comm_mean = 172U;
    msg.destination.assign("PUSEDDWLQMAHKHLGYOHIGNHRBMSENQKLQNXFKYCWFQYSKTSVCOKONPCXSVHZZXHEIISAIODBMLAZTENNHTZFJAXWXDXDWNTUMSRCZLXRVNOYSJJDDLPMEFIPREZAUKFGGPRFCJYLH");
    msg.deadline = 0.590654705212;
    msg.range = 0.663754521818;
    msg.data_mode = 63U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 43966U;
    tmp_msg_0.lat = 0.283683797141;
    tmp_msg_0.lon = 0.263474927151;
    tmp_msg_0.z = 0.0750628351596;
    tmp_msg_0.z_units = 32U;
    tmp_msg_0.speed = 0.677883204686;
    tmp_msg_0.speed_units = 192U;
    tmp_msg_0.bearing = 0.288794001526;
    tmp_msg_0.cross_angle = 0.139499259089;
    tmp_msg_0.width = 0.105901168362;
    tmp_msg_0.length = 0.59771412819;
    tmp_msg_0.hstep = 0.381056781016;
    tmp_msg_0.coff = 145U;
    tmp_msg_0.alternation = 85U;
    tmp_msg_0.flags = 96U;
    tmp_msg_0.custom.assign("WQLDZLUAIJCXRJNRIRMXMNSKYZNNVJUPXIKAGXKZBVWFZHTHLXJCOENWFEGY");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("SSAKPZRGTDPGBZRBSKJWPWCMRRTOALOVFMCXPGDSNSYLBIQOWVIESXLLJWAXRJWQTOSFURAWPXNKPCBTIDUHEFVVZWMCUVUXOKCIF");
    const char tmp_msg_1[] = {-13, -43, -40, 64, -67, 63, 4, 40, -97, 65, -106, 18, 33, 33, -119, -19, -112, -72, 71, 25, 24, 92, 28, 35, -91, 10, -69, -36, -106, -34};
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
    msg.setTimeStamp(0.675577743693);
    msg.setSource(10611U);
    msg.setSourceEntity(177U);
    msg.setDestination(47738U);
    msg.setDestinationEntity(47U);
    msg.req_id = 27288U;
    msg.comm_mean = 153U;
    msg.destination.assign("XFLBHVLHYUFOJWRUOQGYLIOSUPFEMSKOHWILSEIQADDVEJMMZGCZDQIHNCCYZQTOAGOWNDUKHPEHRTDANWTOAFWRYZUDVZWBRUXRHABIJIMZFAKFYHTBRPSYHMXVWYAQBIMSMJXPNWPDPZJJBVSCMGRFLCEBEOGSBPNWVCXBKTDNSPLYZNRJKETCJNFQZVELJAVGOLRJEKWZXMXLKNCTSCXAIIV");
    msg.deadline = 0.738492494568;
    msg.range = 0.862658778256;
    msg.data_mode = 177U;
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 192U;
    tmp_msg_0.max_depth = 0.632911597235;
    tmp_msg_0.min_altitude = 0.796800966457;
    tmp_msg_0.max_altitude = 0.570659198282;
    tmp_msg_0.min_speed = 0.979401159538;
    tmp_msg_0.max_speed = 0.0977284925204;
    tmp_msg_0.max_vrate = 0.361282357563;
    tmp_msg_0.lat = 0.778981687439;
    tmp_msg_0.lon = 0.790251812555;
    tmp_msg_0.orientation = 0.873485363766;
    tmp_msg_0.width = 0.986012570435;
    tmp_msg_0.length = 0.82246904086;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GLKHYHPIZVZFIPHANOBPENRWMSWLCFXQJZWYRLMECTZLIKZPSDTCBDJTATHVXTNDUOBTWLEZDFMSFNOACYQCFXAVHKYUQTWTRBAZJRPRMVPCOUGJVBKWXUEO");
    const char tmp_msg_1[] = {4, -72, 31, 12, -109, 78, -72, 68, 120, -111, 8, -21, 116, -94, 115, 76, -35, 37, 115, 31, -56, -96, 14, 0, -1, 107, 17, -72, 86, 36, 4, 82, -95, -14, 42, 78, -4, 44, 124, -71, 84, -18, -95, -47, -38, 4, 101};
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
    msg.setTimeStamp(0.515597813386);
    msg.setSource(42433U);
    msg.setSourceEntity(110U);
    msg.setDestination(50005U);
    msg.setDestinationEntity(157U);
    msg.req_id = 2786U;
    msg.status = 227U;
    msg.range = 0.0598396834774;
    msg.info.assign("ZFMPIPYGETLMZOIYQQOSLFXWSMRCPENGNTAW");

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
    msg.setTimeStamp(0.682277600178);
    msg.setSource(17705U);
    msg.setSourceEntity(34U);
    msg.setDestination(46835U);
    msg.setDestinationEntity(164U);
    msg.req_id = 37813U;
    msg.status = 199U;
    msg.range = 0.31692859507;
    msg.info.assign("FTPBBODNZGHJQUZYYQMOMCZPOTNARENGSNJKATGSIMATGTDEKHVCRWXFDEMYBUUUONSXWZQVWCVRTMWLAFMTRVVWRZXZKMJGIIPLKCSJDYPWFELCZQQUNGNLQMIYJRXDKDSPJAWFRVEEJVAZPMYYIXEBSIDXHNVCWOMIUSDKGO");

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
    msg.setTimeStamp(0.539829606615);
    msg.setSource(5053U);
    msg.setSourceEntity(239U);
    msg.setDestination(27502U);
    msg.setDestinationEntity(7U);
    msg.req_id = 20817U;
    msg.status = 87U;
    msg.range = 0.0103341801453;
    msg.info.assign("VPPRXNWNLDUGLWJQMGRHVZOYBXQYFHSCEMOWOFWVLZJCXRZYOKTSKCEAHNEHADCHDXPZIMKBJGTUWVTCGVTVCOPNIQDRKJEUQSEHUSMWOHMNZQPGQTEYDHMEAOEXNALLJDCAWZUEZKXQFYBSARCRABBKMRKKDXADSUHBFMVYWRMXAZTJORH");

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
    msg.setTimeStamp(0.476586767044);
    msg.setSource(37616U);
    msg.setSourceEntity(94U);
    msg.setDestination(60625U);
    msg.setDestinationEntity(150U);
    msg.req_id = 33812U;
    msg.destination.assign("BYSANSPAWAUIZOKCEKUEOCQNYPWALRLGZGOMBHWSXDCKWTKLGBBHFXPZY");
    msg.timeout = 0.435661513618;
    msg.sms_text.assign("HCFYNKJZSZCXTBLUYOCKHNNAPSUSFOXINEKNHAGYPFRIAIAJXIRJPYDTBXNXOIEKJIBFXOJLOEMMZSJZUQZBSQXHBVTVROALZRIVDZCLIRAAYOMTPLTYGOMCMZEPETWPWVVDMPUQERYQMWWDLTGTSRRBWVJMISJDQFXSFUWAQDEBUQTXGFEWHSH");

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
    msg.setTimeStamp(0.40019540767);
    msg.setSource(30140U);
    msg.setSourceEntity(52U);
    msg.setDestination(43816U);
    msg.setDestinationEntity(18U);
    msg.req_id = 41319U;
    msg.destination.assign("HTYGIVHYIKTUMCNJFOBNVHVYUBPKYEDXGQLRXGSAXSWAIQHWEBUICOFIBGNEEVENLTTSABXJRRAQHTUJIKYVKFPYULPZMJMHDEWROKPMEZRVVYSTGWDUDFXXWYCSGLZOZCUTXQBMFPJBQAIMMOOFCJCRVSLKPUOTKEGCAHDCEPDWNJWKHZDJBRHQIJTNORDRNVFFFFBSDXMHQZSQMSRUPAYNGMGOITBWQJIQGXLVPXLLUKLOAWADZCWNCNZ");
    msg.timeout = 0.597676183027;
    msg.sms_text.assign("IYSWAFLUHLUBUQKSCJPGPWWUVEZXXTZOOZTKJTORYDEIPHGZFGLSSUQRQBYIBTEBRVSAYAZHJPWEQRFFNLWAGTJGBDYPOUTRQBXIJEBYLTDANFQKPKKORGMTAQNMAEYUENHMOCVEXGHJBKXXECBCIGQYSUSDGKPPQDSSWHLYDKWHVNIDWDXQYBCPIWNIVHPTDLVAVMXRLFGROWJHMOZMLMUNHVCOMJNS");

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
    msg.setTimeStamp(0.200947250585);
    msg.setSource(61849U);
    msg.setSourceEntity(118U);
    msg.setDestination(29240U);
    msg.setDestinationEntity(179U);
    msg.req_id = 42281U;
    msg.destination.assign("SRPXAGZSUPPWRMOXPTIROUKRHTDSUBWLNNMLVMQCJAQXFTZAHCMNQCVYEUIBLFOMRKFEZHLOUFEWQHREJXGNJVDALKFNDZGJQSVXFYQAVUKTAAYKREKYGEJTPU");
    msg.timeout = 0.303806147155;
    msg.sms_text.assign("KROAESNGFTBUIMAEQENEUKJODBMLMODXRJFVSHHDGUMWHRDPXOSFMVMQOSYDHBLKKZFKBQLGMNYAWZAJWVYNVOEXLVNQKNXDDXPIINVJFCQCRUX");

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
    msg.setTimeStamp(0.000570989922521);
    msg.setSource(8062U);
    msg.setSourceEntity(226U);
    msg.setDestination(20409U);
    msg.setDestinationEntity(212U);
    msg.req_id = 9744U;
    msg.status = 21U;
    msg.info.assign("IZVCLNZGIGKOWQVQFMMLMTKVUHDIRLDSCX");

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
    msg.setTimeStamp(0.193953616735);
    msg.setSource(24175U);
    msg.setSourceEntity(102U);
    msg.setDestination(12590U);
    msg.setDestinationEntity(180U);
    msg.req_id = 16418U;
    msg.status = 8U;
    msg.info.assign("JNUONWNOTCLUXVCHOIZYQUGSEPRFATDADAOFHIEXFBRUOFSGZQJMNDQOWPGXWXJVMVBYVJKFYWBCXTCYSSXKHYTHGCMSWMDGWLAGKNIWZQBRTDYIYSLBNNELDFRQZUOAKCPAIWKMGTBURXDLAVQEWHCHTMZVRQDBJBHPMIMIECJ");

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
    msg.setTimeStamp(0.775427095427);
    msg.setSource(49983U);
    msg.setSourceEntity(76U);
    msg.setDestination(11481U);
    msg.setDestinationEntity(244U);
    msg.req_id = 53903U;
    msg.status = 192U;
    msg.info.assign("RLUWPAETTFFJWJUPVHVIDXKONVETZUNHSBBUOHIGMAACYMANZ");

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
    msg.setTimeStamp(0.285684744732);
    msg.setSource(60740U);
    msg.setSourceEntity(100U);
    msg.setDestination(53049U);
    msg.setDestinationEntity(79U);
    msg.state = 234U;

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
    msg.setTimeStamp(0.92934955286);
    msg.setSource(49036U);
    msg.setSourceEntity(189U);
    msg.setDestination(63618U);
    msg.setDestinationEntity(162U);
    msg.state = 12U;

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
    msg.setTimeStamp(0.556911255037);
    msg.setSource(49266U);
    msg.setSourceEntity(216U);
    msg.setDestination(54709U);
    msg.setDestinationEntity(216U);
    msg.state = 217U;

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
    msg.setTimeStamp(0.957155943262);
    msg.setSource(8893U);
    msg.setSourceEntity(47U);
    msg.setDestination(25635U);
    msg.setDestinationEntity(181U);
    msg.state = 109U;

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
    msg.setTimeStamp(0.627997771083);
    msg.setSource(61593U);
    msg.setSourceEntity(5U);
    msg.setDestination(20753U);
    msg.setDestinationEntity(91U);
    msg.state = 45U;

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
    msg.setTimeStamp(0.207314172448);
    msg.setSource(31340U);
    msg.setSourceEntity(197U);
    msg.setDestination(63833U);
    msg.setDestinationEntity(124U);
    msg.state = 225U;

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
    msg.setTimeStamp(0.790091895255);
    msg.setSource(29732U);
    msg.setSourceEntity(105U);
    msg.setDestination(26891U);
    msg.setDestinationEntity(15U);
    msg.req_id = 12596U;
    msg.destination.assign("VCRGJKYCYVVBYDWBLGKNBYGCPFMBLJTGAPZGQNCOTDMFTYYHDAEOOLSIOBECHQWUOVLBIWUPEVOOTBLSJXJGNXFSZAZXPIANTSMJMVRAETJDLFAFIZNHSGKNPBYRZCEVUSYRHQISCMPDWWEAQSQXXIZUQKNEERHDJFNFFSRMWCPOQJ");
    msg.timeout = 0.241894559142;
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.989524754262;
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
    msg.setTimeStamp(0.0309365387885);
    msg.setSource(40187U);
    msg.setSourceEntity(115U);
    msg.setDestination(24962U);
    msg.setDestinationEntity(195U);
    msg.req_id = 29253U;
    msg.destination.assign("LJMXIJGWTMZQEBOMTZYUWAOFHECRDBMXTQCQBAPTDEDOEYTBXOJJKGJCQMLLEZDGUWLWVHCLPAWVYURIRGSPANDKNS");
    msg.timeout = 0.0607679785361;
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 7U;
    tmp_msg_0.label.assign("MEQKTJEXYGNKEEQKFJNDSHYZRHPCGFLYJHFMIOKNSQOSMLA");
    tmp_msg_0.component.assign("CVBSGDQYUGTPKPVTFKOTFMXCSNPGWPOGZIOBQCIMTAEMUAIUCEUECKQEHFZFFGTBFVAANOEJCOLYYMXPWPDVKKUJBZFZIWWBRVRJJLUHSSSPAYQUAGHYOQCMKEJKDPOIOQTAWLRMCJKVSJUQPDDYGMXCEWMTNBIPHWNBLXNFNY");
    tmp_msg_0.act_time = 41539U;
    tmp_msg_0.deact_time = 54456U;
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
    msg.setTimeStamp(0.227390912544);
    msg.setSource(6468U);
    msg.setSourceEntity(159U);
    msg.setDestination(26215U);
    msg.setDestinationEntity(179U);
    msg.req_id = 3314U;
    msg.destination.assign("GAQYFFFKZBBDOAO");
    msg.timeout = 0.598992880545;
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 67U;
    tmp_msg_0.x = 14866U;
    tmp_msg_0.y = 8332U;
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
    msg.setTimeStamp(0.945639095337);
    msg.setSource(4292U);
    msg.setSourceEntity(40U);
    msg.setDestination(7911U);
    msg.setDestinationEntity(89U);
    msg.req_id = 41151U;
    msg.status = 156U;
    msg.info.assign("NCVFXSZSJZXYBLGHDPRCODEGKCYGJLTGXIULUCEEKYDRIHTRRJUARVFAVHLSUYFBPDQDXZZANMTCORCZFXPYYTZMFSECTIZONFOJQKGSAYJWDBBAUWVDYDQKMGLPWMNBTRHVRNXEBKTWMIPNJFMWAXRUBZZKEMAFYSVOHECWPNDCP");

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
    msg.setTimeStamp(0.539197099256);
    msg.setSource(41428U);
    msg.setSourceEntity(86U);
    msg.setDestination(25214U);
    msg.setDestinationEntity(101U);
    msg.req_id = 38415U;
    msg.status = 104U;
    msg.info.assign("DVEAPTPNRIHYWJYQSCKKEXNKUUFVSWLXULLQTKAYNNYUWXMSDLRFWGMRQIQSSRKSVMMGQVSOWFVUJHPJBLXFDESAZFDEEHLIQAXIJYWVOISGYVQTVWHRCGTBMANTTFFLFNLMYKEXGUHROLWZBBLANFCHOIRSMPWGKTQZDGMZJPAQTYTAHZXEPCBDGRCQFKIJABVNJDOZMUB");

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
    msg.setTimeStamp(0.032310522301);
    msg.setSource(36943U);
    msg.setSourceEntity(3U);
    msg.setDestination(43988U);
    msg.setDestinationEntity(36U);
    msg.req_id = 53651U;
    msg.status = 162U;
    msg.info.assign("BPWFGSRJTOVVVZTNISUZPICLNSWBTCAAKTYYWNDUBZWJLXFV");

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
    msg.setTimeStamp(0.906928891988);
    msg.setSource(8722U);
    msg.setSourceEntity(236U);
    msg.setDestination(54053U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.557750820372);
    msg.setSource(32181U);
    msg.setSourceEntity(204U);
    msg.setDestination(59325U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.340737694433);
    msg.setSource(52119U);
    msg.setSourceEntity(3U);
    msg.setDestination(14550U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.575317756422);
    msg.setSource(34309U);
    msg.setSourceEntity(18U);
    msg.setDestination(36262U);
    msg.setDestinationEntity(63U);
    msg.plan_id.assign("RCBDTBAVPVPDGNWSYLLAOAI");
    msg.description.assign("BLHUWPJWSAEIRUKOWNLGZTUJCORZVOW");
    msg.vnamespace.assign("ZDUYPSWWECWJBXJXJLXEKOZBUKJSCJQEJGVIWPJNFXLXNIAXLCFZTFZHXORXTLGRLPSSDTWSTFBCJMLYDFVUSNDYATBEQQBKTKTTBQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("OUJQLCGHRRAYRGXQPIPQYQAKLTIXRRZKBZAXSGOJGTXYSVFWTZUDTUCERIWENQQWTKEWDDCVBUOSSFJDVGZWOPSSHGXXJOHDIPEBVNHNMMHVZLLHJLKRZGANHNVHBINTVVIAYUEDWRFXURASNBYMZMPMCWVJSFAMPCPORNYLFMTWIOLAIVBIYUQKMCDQBFOWJZPQDCYKJTCZMODKTXUACIKUNKGZEPBOSTNLJA");
    tmp_msg_0.value.assign("QXNLTJHBCWSHPZQZXNPRINIBQVKDJFTCPSFJHBYDRVCPSFYOMUUR");
    tmp_msg_0.type = 190U;
    tmp_msg_0.access = 240U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("UBNUPHHMAQCXPRDLUIEZZTNNXCKBKHLUEWKVYDNQJODFJPHIPEGJBYXLJYXSYRYTRBBSMUGRMSZAQXVWNFOQARBFTHWYJKGVPLQGEIPOIDNQIPRVRKCFICPCYWGOMBYTMFAKMQTMETXZSFXIIJW");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("QSCMSVWQGOYUFYERAJIIAOUCGEFTHLIDTVOFXKJYBKMLHMCNAXFRZKEC");
    tmp_msg_1.dest_man.assign("QVKQEBBMNZDRSLIMJTAJYJBCBNENUEZDZFAWTIRVCGYXPHILBTSKVHCBORBAKLSADOFDTEMXNKVIWAEMJYNUUKPMAWWTIWUHJQHYTXFQFRJWONALNZSGXYYGGAJGXYICGSZHCPLEMEGPUXYDPYKMYJTOHHDXFIQXMLOBROMVDJPZCODLILOSEZHPFRKQRKTVBGCCCDOSOQHPN");
    tmp_msg_1.conditions.assign("JDVLNRUPBMOYCSCQETNHSLWFARPFVGQOEXKFDOFLTQVCLUZWTVDWQQYBJCEYCXHNRYXIZKIEDLRGJSVZVMTGBOMDLKGIVMCTKPLVRAYJTRJCJOPKUPBPXFFWOQSHOMCIVGLNPRAHIWMAGIZSJMRBEI");
    IMC::RhodamineDye tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.089533722115;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::RemoteActions tmp_msg_2;
    tmp_msg_2.actions.assign("CPDOYGBGVVJVXMMUJGHQSTDMAEABLXYVWKLTJVOFELQELXAWCOHKOZBMLASVGEWJYFYKQAKCTFPRFWRZXIHHIIUZNJEAQ");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::IdleManeuver tmp_msg_3;
    tmp_msg_3.duration = 33986U;
    tmp_msg_3.custom.assign("JLTNOLDUXCNARJPLDEEWWOTHCKDJNVOIGYSIFXAWVORSAKWMIFQPOQNGMPNZLRPLQEYQCWFDDTCQXTOMZVDKJQGNDVAKHEFUBTQLVEBONIIIICGBXUCSLKDGBXJPTGXVUAQUHPBRYDSNSYRUJCUTLMPCPYBRNMJSXGFEZIESWAPZTMVGTFSUCZRRZNHHAHLYZPOWFEMWGZKHAJJKSQRHXZOIBFZ");
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
    msg.setTimeStamp(0.632398700412);
    msg.setSource(7133U);
    msg.setSourceEntity(115U);
    msg.setDestination(6695U);
    msg.setDestinationEntity(144U);
    msg.plan_id.assign("KBVESZFKYNPIDJZOTRBFXVVOACGKOWRTTUL");
    msg.description.assign("PROTMYAHEDEVOBMGDATEYNZKAUVCAYJUGRNQHBQBFTLJMWVCCSMIPKBXFOUOJONCLMXKHNFERXDWOSLILKRZJXYGOVRWBIMCKNTZVCKBJLQQBIIHGXLGXCPMJTLEEUSTFNIQAKFAQWSWIR");
    msg.vnamespace.assign("MQGPYJFKUSVABXJHWSEDXEQNZGNWOLAFI");
    msg.start_man_id.assign("RGHZQJADCHLQLXMTFAOKGPXDXZHHBKLQBANRYTMVKLWBSIBMZOFWRYXDCBGDQSSEHDCGVXCNAKCAVUGBQEDHFTEUNKMJKRTMALMRXCDPGVGIRQLPGZCOIIFTSSNQYEYZYJCTBVAAOZDJPUNMIVSNTWMPOEJFICJXAPBSKGUDFFCVWLRBFZKYFPZTOXQHJZHWYNNOWDUTBMLIYUSQEUUQKUNJXLJZROKRRONHYWJTWEMOLSXWHEVIWSE");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("KCHSAQATBKPAXMTVTJJQAMDLEAVWY");
    IMC::PopUp tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 39315U;
    tmp_tmp_msg_0_0.lat = 0.201217219421;
    tmp_tmp_msg_0_0.lon = 0.916620103642;
    tmp_tmp_msg_0_0.z = 0.688806250613;
    tmp_tmp_msg_0_0.z_units = 144U;
    tmp_tmp_msg_0_0.speed = 0.964020296848;
    tmp_tmp_msg_0_0.speed_units = 250U;
    tmp_tmp_msg_0_0.duration = 8876U;
    tmp_tmp_msg_0_0.radius = 0.339314604376;
    tmp_tmp_msg_0_0.flags = 13U;
    tmp_tmp_msg_0_0.custom.assign("HNVYSPLQMOTXDWRCORZLUKEFPAYVDEUKQQKHTEAMXCIISBNOJGULRXUUHXDKDBNXBNFLWBSEQJWBPGRZKBCCQNECAUPSRTFED");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::RhodamineDye tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.939308007162;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::NavigationUncertainty tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.x = 0.889085733805;
    tmp_tmp_msg_0_2.y = 0.924672096256;
    tmp_tmp_msg_0_2.z = 0.944838964453;
    tmp_tmp_msg_0_2.phi = 0.199793546264;
    tmp_tmp_msg_0_2.theta = 0.985677548232;
    tmp_tmp_msg_0_2.psi = 0.883667401792;
    tmp_tmp_msg_0_2.p = 0.302646487672;
    tmp_tmp_msg_0_2.q = 0.104468214335;
    tmp_tmp_msg_0_2.r = 0.802868585066;
    tmp_tmp_msg_0_2.u = 0.835447466974;
    tmp_tmp_msg_0_2.v = 0.823238934957;
    tmp_tmp_msg_0_2.w = 0.694439872386;
    tmp_tmp_msg_0_2.bias_psi = 0.444982133397;
    tmp_tmp_msg_0_2.bias_r = 0.766609453858;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::UsblAngles tmp_msg_1;
    tmp_msg_1.target = 60749U;
    tmp_msg_1.bearing = 0.690648393494;
    tmp_msg_1.elevation = 0.351916754368;
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
    msg.setTimeStamp(0.115474757126);
    msg.setSource(61259U);
    msg.setSourceEntity(68U);
    msg.setDestination(34327U);
    msg.setDestinationEntity(62U);
    msg.plan_id.assign("GAUOSXQRZKBBIOCYJVMUVBOQLVANXDZMXPXHBJDUFIHXHWOEIKJRZDEHBODJGJRALKKFWLLFDUMTWWSHCLHKGIARWUOUYNHTBQLUSNYEFTKOIZNXILTGSDMOLSGGXI");
    msg.description.assign("QWQPWIBDUGBPEFLSYZYMYIIDOYKOILIYMEPENBHXZIPXFJOAVXIZZURLKXNWZFSEFTOCSGBTKBTTRJWNRNUQEHCVJZTOVCKMASBUDLWQOPRKJGHPDFHREJUTGAHFKSJVUYUCMWABQNDDTPYOPUQCGGBWHLEOCPLHEOKXLTLDCGQTYSQZKRHCZXPKMXZGFJRQQLRFSMOGNAYAAHNMDKMXFE");
    msg.vnamespace.assign("SDLUXLPUUBMMUGVRPTAJBMHLWWZYIJDVKOXFVGVZPNRGUHXYNQCMQKPN");
    msg.start_man_id.assign("YTZNQQZRBBTLRLPRLIEGMROCHUNACVYKJPTLHQOZIOTWQSLCXEEXMETYXFUGEFIAVQWACDW");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("DINQHEZDVBGXMLELJQBQWCLFTZADAZPCWGLGYPKECMBKGOLHHNDVNDAFIXHOZBJCNFJERMMMVHWTFMNARBVTOVAMZXRRWKRWUBXMENQPUROEOFJLAQDKGAGBHIPTHAGUSWTNWRQSKDPXYCGECVJJSQLIIFZWQEVSINHJYUIL");
    IMC::Land tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.706608484846;
    tmp_tmp_msg_0_0.lon = 0.982648715893;
    tmp_tmp_msg_0_0.z = 0.712048310551;
    tmp_tmp_msg_0_0.z_units = 15U;
    tmp_tmp_msg_0_0.speed = 0.585407670065;
    tmp_tmp_msg_0_0.speed_units = 133U;
    tmp_tmp_msg_0_0.abort_z = 0.533287651039;
    tmp_tmp_msg_0_0.bearing = 0.63935078686;
    tmp_tmp_msg_0_0.glide_slope = 60U;
    tmp_tmp_msg_0_0.glide_slope_alt = 0.834493231205;
    tmp_tmp_msg_0_0.custom.assign("UQLAHBHFCSUAVOCXYOQBGWIKMJIVZXHIRRPPXORJBLLMUITKUJYDDMGWKIUKLJNDOKXEPJQUTTFVRGZABVJSLVSQAWFSVBXGW");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::NeptusBlob tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.content_type.assign("DXIYSFXVKTBAUGDYEYEDVIZAXAJPESLAMKWUHBPYORUQYSUCZQEJSRQMZRCXMQIIZSNYPNIJDLTHLWSXFPWRNOEJQCZOFYLTVJUKDTIMVBAKCQOPWMCPAKXXBPIKWLGSLNFNADHRAVRJEHQRQBSIVFJHUGTGLFXKBHVSHUJVVRGZWWFUCMQZGCNMBVOFNKZNYRKLGYTEFAFCUXNMBIGOGDWGOIERHDH");
    const char tmp_tmp_tmp_msg_0_1_0[] = {51, 8, -28, -80, -61, 11, -88, -89, 125, 47, -83, -11, -110, -108, -59, -47, -4, -11, 30, 34, -22, 38, -18, -15, -9, 50, -127, -12, -40, 82, -108, 57, -16, 62, 88, 23, -22, -126, -27, 71, -121, -91, 109, 81, 73, 75, -81, -121, -76, 41, -110, -73, -3, 98, 111, 110, 9, -103, -51, 41, 29, 85, 93, 93, 101, 96, -43, 115, -92, 120, 25, 68, -34, -77, 34, -43, -28, 9, -22, 17, 80, -12, 67, -66, 116, 73, 67, -34, -56, -31, 41, -117, -103, 8, -23, -46, 23, -37, -67, -95, 119, -122, -115, -107, 103, 3, -115, -26, 10, -70, 64, -16, 94, 45, -47, -53};
    tmp_tmp_msg_0_1.content.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("PVMSLSYZKJAQCEFBAMBI");
    tmp_msg_1.dest_man.assign("WYFCTQNCHJGJJBHTIHWZYSGVLOURAGXBUPOCEAJNBMKUVJKMMNUHTMKAEWPIDSMFHPNXJGKWSCCIBIPTQGQXOVNAOILFRXFTBYDKUQCLEJUVTDWNCVQPBZNZHZRRZRKAQSFUHNEZISKIEHWGVJSYWLAWKXDMXEXDCFJQPHRRYSXDOSBZPLYEIYEZDSMPSVLLGXOOGRFANWGVFTCAXYJ");
    tmp_msg_1.conditions.assign("YSDHYLQIZMBGBVKXGEPNASYJYGNBUWGBNLEUKORXTNPAHBBLCQRKZPWHCWBATRQEXYRNFDSBIRJQPCMGCPWIJJFDERAKGAQFUAUNOTTKSMGKLWOVYUCNZGEVFDZOWOCEADLTSSIYEXM");
    IMC::DesiredVerticalRate tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.794847695885;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::GpsNavData tmp_msg_2;
    tmp_msg_2.itow = 1514194813U;
    tmp_msg_2.lat = 0.0524788938107;
    tmp_msg_2.lon = 0.314959961684;
    tmp_msg_2.height_ell = 0.88232691193;
    tmp_msg_2.height_sea = 0.0402450256646;
    tmp_msg_2.hacc = 0.227106935742;
    tmp_msg_2.vacc = 0.503006017302;
    tmp_msg_2.vel_n = 0.23617286988;
    tmp_msg_2.vel_e = 0.818424426405;
    tmp_msg_2.vel_d = 0.511829426248;
    tmp_msg_2.speed = 0.679207276483;
    tmp_msg_2.gspeed = 0.717501467582;
    tmp_msg_2.heading = 0.204342275877;
    tmp_msg_2.sacc = 0.534188301997;
    tmp_msg_2.cacc = 0.551610513097;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.257431351523);
    msg.setSource(14256U);
    msg.setSourceEntity(101U);
    msg.setDestination(42052U);
    msg.setDestinationEntity(117U);
    msg.maneuver_id.assign("PELQIYRCNTDBYPDMHEPHTQSNXERDFZBQCKPLXRIMVBIJBCLBHGMCUQWRIGOURXAGMNSAXOMLRRWVYOZYBSFQUSKLJGDEIJZBAJPCJWGQUXOSTVSPHOVNMXXHEDBGNWGZQAEIAHAZKHKVNDWJIWVXAYFJIFPQZDAPGKZQPMOR");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 40891U;
    tmp_msg_0.lat = 0.954095139683;
    tmp_msg_0.lon = 0.994342284713;
    tmp_msg_0.z = 0.686514463548;
    tmp_msg_0.z_units = 216U;
    tmp_msg_0.pitch = 0.482404628492;
    tmp_msg_0.amplitude = 0.606243025937;
    tmp_msg_0.duration = 35229U;
    tmp_msg_0.speed = 0.591759847183;
    tmp_msg_0.speed_units = 70U;
    tmp_msg_0.radius = 0.830738732328;
    tmp_msg_0.direction = 242U;
    tmp_msg_0.custom.assign("ETRSHLYFUUBJKPHJYTDDOFCBQJGWWLOBGGLTJXMXOVZPGMZMMJSHIINBAPUYUNFZLALCGLAHGAXYFUSDYTSJLUWHSRREXHJVRBOSAQXKBSDXNEZKPQPQQNPFEXFJHOCMOWDOWDECIHYVWZRDDYCONCFEUXVMNZYIQIRLBBPWNRBUPOSDQVZMRHSTEGE");
    msg.data.set(tmp_msg_0);
    IMC::MagneticField tmp_msg_1;
    tmp_msg_1.time = 0.121089791288;
    tmp_msg_1.x = 0.596218856351;
    tmp_msg_1.y = 0.391702244014;
    tmp_msg_1.z = 0.210477575893;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PeekDesiredPath tmp_msg_2;
    IMC::DesiredPath tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.path_ref = 3963895819U;
    tmp_tmp_msg_2_0.start_lat = 0.178456663566;
    tmp_tmp_msg_2_0.start_lon = 0.1615868843;
    tmp_tmp_msg_2_0.start_z = 0.157275749825;
    tmp_tmp_msg_2_0.start_z_units = 79U;
    tmp_tmp_msg_2_0.end_lat = 0.859757506789;
    tmp_tmp_msg_2_0.end_lon = 0.141903280957;
    tmp_tmp_msg_2_0.end_z = 0.312298810685;
    tmp_tmp_msg_2_0.end_z_units = 108U;
    tmp_tmp_msg_2_0.speed = 0.790123397282;
    tmp_tmp_msg_2_0.speed_units = 182U;
    tmp_tmp_msg_2_0.lradius = 0.604198259879;
    tmp_tmp_msg_2_0.flags = 18U;
    tmp_msg_2.dpath.set(tmp_tmp_msg_2_0);
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
    msg.setTimeStamp(0.161148766699);
    msg.setSource(64555U);
    msg.setSourceEntity(149U);
    msg.setDestination(8391U);
    msg.setDestinationEntity(10U);
    msg.maneuver_id.assign("TXGCLRDTXDRUOLNXARSXHXGXZPFZKYMTGNBCXBTPWGUMDQVZSCQZHWWBPTKEVKRYGMKGAPDVNQJLCYYCUBGUMTCJVJKTFZLCDTZDYFKIEWZOMJXEIZAHQDWSESCROBINSIYPZEWKMPBSE");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 38750U;
    tmp_msg_0.lat = 0.387590524198;
    tmp_msg_0.lon = 0.136268788087;
    tmp_msg_0.z = 0.0443282348948;
    tmp_msg_0.z_units = 126U;
    tmp_msg_0.duration = 51551U;
    tmp_msg_0.speed = 0.0414190207026;
    tmp_msg_0.speed_units = 48U;
    tmp_msg_0.type = 61U;
    tmp_msg_0.radius = 0.536918372363;
    tmp_msg_0.length = 0.094999335469;
    tmp_msg_0.bearing = 0.073458893854;
    tmp_msg_0.direction = 57U;
    tmp_msg_0.custom.assign("SHIOGWEEKORKYQRFANJDLBCHGTUGCAAJJRGXFPQEPPFYXAASIHUPEVUWSTQQDZQVAOHSYZCDRAFVOFUNJLUMIJZKRGWLKWXDXDMKUILNNNQUMHWHIILEJDJHVKQVIOMOOZSTNMXYTBP");
    msg.data.set(tmp_msg_0);
    IMC::FollowReference tmp_msg_1;
    tmp_msg_1.control_src = 59063U;
    tmp_msg_1.control_ent = 49U;
    tmp_msg_1.timeout = 0.698722319374;
    tmp_msg_1.loiter_radius = 0.193003241641;
    tmp_msg_1.altitude_interval = 0.387071944206;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::TrexOperation tmp_msg_2;
    tmp_msg_2.op = 192U;
    tmp_msg_2.goal_id.assign("BDSVPTTNNOOYQSUXMONIKKANHCKQGXVYMLOKOLSQLLSPUDMXZZJHGIABOMPATHYVDJQAZWSEYXEVRQCNJKBHZEVGVYBXZRRXWADIREFPXKIRDHCZFMPTXVESCCOGRMMIECYBLXFDFRQPAJTOHMCPVZUJHGLKSSBUFNTFWLVAJDFTFDGBZOFEDCJMLIHCHW");
    IMC::TrexToken tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.timeline.assign("JDRNJMCHVNKUFQSSGLZIOLWCCAVKAQAVZPNCMBABNWGROUHQQQWFAYVYZHNCCYUEETPZMHSKKPBAHXKUIVYSVRVPHYFNPGEISNQ");
    tmp_tmp_msg_2_0.predicate.assign("MMNPJWAKUXJIMQXVIMCSWSYNATXVOJOLYZWJIZKNPRDMCNTEGFFABIEUDFUBTWISMRAUUPZHYROYNZOTQGKWLXCVVVJHXHFENUGBYZKKNCMFUDTFSFZNBODHDXACSHLJGTNEBPHSJARQHSXPDYWHNRORGVRJYTJBGZAEQISZEEDCYLQMWXFVRAGKLKKW");
    IMC::TrexAttribute tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.name.assign("OGWFORNDZEXRZBXULKJWTYONDNAJXHMRBHGLIXEFMWJKFWEDMUPZGUVGMQAAEBMLUOQQZYSBTTQLCFTTOSOPFLUWDACVOKGDBTYFRKRINJMKKARBVDPIVRXGCQVCGYUZVKJIMQQSVSDKSIJIDPYAYXGGPWOICNJOVPBFDLGFSLINNYZCHJRZSEULWQUHAXHMSKZTEH");
    tmp_tmp_tmp_msg_2_0_0.attr_type = 94U;
    tmp_tmp_tmp_msg_2_0_0.min.assign("RKBBFPIEEAQYNFCAFORBYFBN");
    tmp_tmp_tmp_msg_2_0_0.max.assign("LGXBNXAYINP");
    tmp_tmp_msg_2_0.attributes.push_back(tmp_tmp_tmp_msg_2_0_0);
    tmp_msg_2.token.set(tmp_tmp_msg_2_0);
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
    msg.setTimeStamp(0.986045659266);
    msg.setSource(12907U);
    msg.setSourceEntity(250U);
    msg.setDestination(20989U);
    msg.setDestinationEntity(219U);
    msg.maneuver_id.assign("OSRROMDMXOYZVUDPRYVDQTWQJKAIJIEEOERAMHVBEZOGFUYHISLHGVQLSXGEKJIMCTZUDBJCKJEXPTDPFB");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 58780U;
    tmp_msg_0.lat = 0.769010645508;
    tmp_msg_0.lon = 0.445175406622;
    tmp_msg_0.z = 0.964826773814;
    tmp_msg_0.z_units = 192U;
    tmp_msg_0.speed = 0.263584485162;
    tmp_msg_0.speed_units = 47U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.85982022353;
    tmp_tmp_msg_0_0.y = 0.184844266722;
    tmp_tmp_msg_0_0.z = 0.705440121842;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("MCIBOTZXSAXWKCBMTAMFKMUAKPODEWPBSNGBFMRQDFMQWHDZVWXVRSKSHCMMKLZOPOQITHXQJOHXAGLZRAGSDQLDWROSDDERGRCOPYXEONETCKNZAINIECPLGDLOYCGSJJZVKZDBJHVPLFJYRJQYNBZVWHVJLXTUPEJFPRSCEFWHUUAWGQIFHFLXQTAINGMNVVULYOXTYIYLAQHQZRTDNYPUJWURIBWBGSTEFYBVCUINESUVGKBU");
    msg.data.set(tmp_msg_0);
    IMC::AcousticStatus tmp_msg_1;
    tmp_msg_1.req_id = 23320U;
    tmp_msg_1.type = 63U;
    tmp_msg_1.status = 18U;
    tmp_msg_1.info.assign("BDCRWZHNHFUEVVE");
    tmp_msg_1.range = 0.844181605819;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Voltage tmp_msg_2;
    tmp_msg_2.value = 0.584227265333;
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
    msg.setTimeStamp(0.227913388271);
    msg.setSource(28355U);
    msg.setSourceEntity(37U);
    msg.setDestination(14635U);
    msg.setDestinationEntity(229U);
    msg.source_man.assign("HTRCBVCKPXSCMWMCXDHQVGYPZAUFUZAMBEODGPACICNLIMALLIJEZGNYWDCOQZIRYXLYXJRWITSGZWROEBJVBSFMSZFJKCPQELOKMQXPUAZTITFHFYGNARDAHF");
    msg.dest_man.assign("QBCNEASOLVMDIPOVMYVWVDAIGBTGLEBZRJDNTMOUDPXZFZILKBUXABPTVYMGHBYFUXDBKCHLHRMZXWTJCCQHDUNSQXIZPMLKHXSFGFUNQHJWLWTWBEIUAMUGYTOGEYULKEKNZERYEOXYRWQKFKNHZJLGSYIFWTVOKFPAZ");
    msg.conditions.assign("TDUQLLGQXWUHVDAPQMKQNUVGNHZSJLXHCFRTMNATVICKAMEYUZLYPJQFETKVPYSVRLSVOTKAPHDRJUNHQXAXGXGVCXMFABDYOBNEBXIIREACZJTCYDBNIVUDUFOOMEWFOEW");

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
    msg.setTimeStamp(0.692666886651);
    msg.setSource(39272U);
    msg.setSourceEntity(116U);
    msg.setDestination(36388U);
    msg.setDestinationEntity(105U);
    msg.source_man.assign("TFIUHWUBOZAAXDTJGVWJWULUEMHKDKGHPS");
    msg.dest_man.assign("EKXCKGHWQNYMVYSPPDBBIHKIQQPEWAWNNHLMWZAPMEHJJTZIVOOSRFVSTMBAPCPVGQAZVJRPFCSYHZGOJXBZXTUXCYTGFKCIIOFLXBLVRVIPGYQDFIRJKEZKFGDMJEGSFRTYUAVKWYYHAHDDREECXSRESULZLLTLBIOLOXKBXNCHACOUVZUGVFJTMDMLABYQBNWIMUTODXXRFKS");
    msg.conditions.assign("DEVPYVHKPCZUTVAEQETSOHGJQEJZBUNEKYSOBOIPXZTHMFLBUMHBLQEQWILTWEXFGMKOMRSZWECWKXUDGBXAQLYICOWSXSYNVNPTDVDAUQJJWYCNMRHZHZJIZCRNLJVBAURRYNCPMF");
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("KIIDXAPILQICDUMHTWMWZEMZTHILQVVVJGVCLWWBCECFFPEJOZTOGSNFWFRCDIEPHBLQBZYPOKSVJ");
    tmp_msg_0.htime = 0.236937438912;
    tmp_msg_0.lat = 0.663091302018;
    tmp_msg_0.lon = 0.421038263387;
    const char tmp_tmp_msg_0_0[] = {-24, 103, -82, -72, -30, -24, -74, -93, 81, -102, -128, 93, 61, 17, -40, 62, -87, 58, 39, 88, -58, 98, -32, -126, -96, -80, 94, -88, -42, 82, -88, 13, 30, -112, -27, 105, -66, -68, 71, -66, 80, 58, -112, -93, 34, -114, 100, 87, 67, 45, -26, 99, 119, 66, -72, 126, 120, 54, -50, -113, -29, -41, -110, 119, 105, -6, -51, 56, 87, -56, 38, -72, -89, 1, -25, -10, -57, -5, 112, 82, 117, 96, -56, -15, -102, -27, -1, -55, -109, 84, 56, 8, -53, -110, -64, -127, -77, -104, 65, -48, 102, -21, -89, 113, 93, 38, -102, -46, 87, 23, -48, -97, 104, 19, -31, 76, 104, -46, -80, -82, -52, 104, -112, 64, 40, 18, 59, -116, -70, -20, 48, 118, -2, -5, 104, 93, 110, 28, -28, -109, 95, -49, 34, -12, 73, -29, 88, -92, 91, 72, 54, -102, 111, 52, -30, -80, 14, 24, 79, -55, -118, -81, -57, -33, 24, 111, -20, 101, 6, -38, -19, 98, 25, 91, -36, 70, -68, 51, 95, 70, 68, 22, -120, 98, 75, -91, 115};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.351866420897);
    msg.setSource(4819U);
    msg.setSourceEntity(27U);
    msg.setDestination(2985U);
    msg.setDestinationEntity(143U);
    msg.source_man.assign("LZNFSJHRYSGRMXDZZBPLGVRTJNJRTTZJYHVJXSVLNXEFEDEIQCKUBVQDAQWQWWMBVGBOTHOPZNCHYIFFZKOFERTVCKXZQCDGXCBMXNJSKVCMGWGPHTUPIPXFESOSHSMDQVPMHSAVLRLAMZQERXOCIJUAAOWKBFCTSTYTHKGIPDLKRPUQRWWJYXKZMWODCEYABUIJOCRFAOILYNUDNLEGIGUNYLPUDKYUGBEWYOIPUNWBD");
    msg.dest_man.assign("YGEZJXEIZBVFYUGOOVLRELOSWLVCBZTSLAMHFPVDXNQVOTODIZBFJNLCUFWHGMGYJXTBMTOVZNMOAPCQFSHUAGTPRYUPDKUDZXKWIMNVSJFGDOEXJERISJVFBNYSZSNBULYPJCHLRYCJQNQTWIICYCBVFUAHEDHHWUXMBDIPQQMGWWPBSZMWSLDKUMHYKAKOQKAQRHOTPRNYDLCACVPXEGNELGKTZSHFRQWADTZR");
    msg.conditions.assign("VDQIRIJJELXADULWKQIUKLVYFBCOIPXYFUMRSHMFLNRVSWKVZNFERBOJPBABPCCCPWBWYQATMJTHGKWMPIHVHEJOUWCYEGNQXXG");
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.19723441735;
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
    msg.setTimeStamp(0.487259018871);
    msg.setSource(45207U);
    msg.setSourceEntity(42U);
    msg.setDestination(61885U);
    msg.setDestinationEntity(15U);
    msg.command = 20U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LSXKDMNUTGFY");
    tmp_msg_0.description.assign("GIMXCWXKBNXFJTNYUEAKOJMWTOYIYKYERFNYYWCPMAQQKUJZMTJLTLQYERBOIDFSVSWCGXJLWUNORXQVONNQIJOTLISREKCGPFFRHGGUBMAEAHLRLGFAZBICMXVUGJAFBSPSGWVUKZZIBXLDOHBLASEQACWXHCTNVKSQHTDEDNTKTOFOPPQECXLMXBTZHIHCVWMRCPHJDERZSRAJUBQPYPZIFFNQRPHWVDDPZDMKVVEUGJAZ");
    tmp_msg_0.vnamespace.assign("WRGJWAMVDZERRFMATVYFPALSUOJLOUOKGHQXMGJVYOQCHMLJNRFCSNZOIFHMTBAMOXZIDDECKLCDDBBWIRUUTYGKFSBXILICHZWDFTEUPIKYZQWXPTZLSYAOVKNKIXGBIZEWRKZACEIEHXTUUGAHWLOPVPRNQLKHEYWMTJVTXCSRUBFKSFBNNDALQZBCXCTKYPNPYJD");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LYFSRNRCIZDUHGPBQLGNPHAZUIRVPREYOMWEQZZRPKQXKOVSQESQBMEFQSNVVYGJDTRGONBYIAYAGKMWANJZTAPQCFWHEWDGASLYFSZXSHVOKFCCDGBAPPXOKASXPLCXJVMD");
    tmp_tmp_msg_0_0.value.assign("TLUEAXYJGTEPQDMRUVQKHOJVJWTQGUAWECUERAUHHXQKZKFNSBUNHAIYOFUSNOLXRMLMIMOKADTRMJQPAJCLWOJPPQZJIKYIDRCCMIXSVJAZNTFZZFKYVHETWDGLNOJOSMNFUCOPWRTFITIFQKHDUAWSXPDRVESYSEUCHGLAHBBPXEVGI");
    tmp_tmp_msg_0_0.type = 250U;
    tmp_tmp_msg_0_0.access = 239U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("VCGZAXTKPCQSPWTUUYUIMEIIOBWCAHJBGOXEWNLZACKP");
    IMC::GroupMembershipState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.group_name.assign("BKBZWMHFLLETWNRVIEFASDPPGJDOKDMXSPIEJBGJVOOMYIAZRALGNJRANUQTVGALHVLLJSAKFUXKIZJXMYOQQGWLYDAVXBZDOTPLUKDQTNJHRMBNMFWETSESZKPCXYQRCUUNBKFUZNVRTKEAHZCRTJJVVVPBIOPUOZWINUFQQLXAYMYCXFWBPWXNKIG");
    tmp_tmp_msg_0_1.links = 637559314U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.389679496682);
    msg.setSource(33500U);
    msg.setSourceEntity(80U);
    msg.setDestination(32024U);
    msg.setDestinationEntity(211U);
    msg.command = 4U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NKUCQIAVYOEQXPEWLDFNMVGQAZDUQTYSLRXHIGYOASEJWZSABIKHSVGQFUJWXWQTDTBFEPJHSQZGOSNEAWEWCKKPMWMLVLCRTTHXUMEBULLBOZSFRMUFSQUEHRUYZVJYRRKYDIOZPJHSDLFMQSBROACZHBYLN");
    tmp_msg_0.description.assign("KNNRIQANPCYUSPFG");
    tmp_msg_0.vnamespace.assign("XMHGMRQTLZVSSTSUPRZXCLYGJBQPDNKAJDQWXAKDNGZUDFEWQIQFARBOVYVAPNWCNGXZWHXISJJXIEYUPAMLLBLQKYHASZVOHPVZBIRBHDIMGJVZKXIQBCDFDFKJBKRRAFBUEROIESQZWQSFLMEMBNVLHHNKPCGXFJGVOBZM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QLUVPJDUBZEKAJEQNWRJMGBBGDOADRYITMYFNHRVSLRWFVEBLNVWCOFAMOUHDKCBHDNEMUGIGTQHLLFIRBOVRBYGTSXZQVYAYOQHRSDZYGBGOXOWWQXEKDZDZQXTDAZXYFFENNCVBBIHXASUFCNSTPLECTMJQNZWGTJPXGLJCFPTPILIQVFWLMYSSKKUOMXNWXKKMHIJKKA");
    tmp_tmp_msg_0_0.value.assign("VQNCKEZSWRLHUPCKDBINDJLFXMVXPIAMAIWOZNXUELWYFZGUEXZZJWIGNZZAQKVKXQPMVNSHGEGIFXNUMOMPIXFCKHPYRGEQFYLE");
    tmp_tmp_msg_0_0.type = 230U;
    tmp_tmp_msg_0_0.access = 79U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YZNQBOKNIWOFYEYMXPUNAZJLRVQPDVDHEWXVDQCBV");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("PTIDDFRNXAEZFBAHARFTXGMCIHUYZQIOVJOK");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.394622096738;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.653815310905;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.0260167878252;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 250U;
    tmp_tmp_tmp_msg_0_1_0.duration = 57152U;
    tmp_tmp_tmp_msg_0_1_0.sys_a = 5815U;
    tmp_tmp_tmp_msg_0_1_0.sys_b = 47410U;
    tmp_tmp_tmp_msg_0_1_0.move_threshold = 0.918940087774;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::IridiumMsgTx tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.req_id = 1081U;
    tmp_tmp_tmp_msg_0_1_1.ttl = 54873U;
    tmp_tmp_tmp_msg_0_1_1.destination.assign("LEHROHRGXKCMSWCIEIJWWWCSXAOPWLKNDSDYXZYSVNBILBVJDOMSOPVQSDCPRIQSFVHRRBEUXJPNTVIELCQB");
    const char tmp_tmp_tmp_tmp_msg_0_1_1_0[] = {-77, -90, -42, 5, -93, -38, 88, -9, -92, -23, 102, 91, -101, 41, 7, 93, -42, 37, -64, 59, -55, 31, -87, 30, 90, 15, -42, -110, 9, -73, 112, 68, -29, 71, -9, 64, -125, -67, 58, 74, -110, 35, 61, 91, -101, 95, 64, -11, -53, 86, 19, -18, -111, 66, 50, 48, 39, 81, -63, 41, -116, -74, -84, 26, 20, -89, 62, -20, -30, 98, -30, -13, -33, 101, 125, -52, -28, 122, -63, -31, -11, -82, 120, 7, -99, -64, -95, -4, -26, -80, -103, -93, 39, 2, 77, 33, -124, -126, -84, 44, 71, -124, 120, 123, 18, 23, 47, 120, -50, -112, 82, -7, -90, 116, -99, 8, 57, -50, 123, -4, -41, -93, -55, -123, 106, -46, -32, -105, -94, 121, -69, 36, -3, -4, 0, 32, 89, 25, 121, 125, 65, -73, -122, -39, 27, 28, -98, 122, -80, -128, -74, 4, -121, -109, 119, -115, -110, 91, -125, 120, 85, 21, -38, -17, 76, 88, -110, -4, 78, -38, 43, -106, 125, -39, -4, 53, -31, -22, -116, -101, -93, 122, 121, -116};
    tmp_tmp_tmp_msg_0_1_1.data.assign(tmp_tmp_tmp_tmp_msg_0_1_1_0, tmp_tmp_tmp_tmp_msg_0_1_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_1_0));
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("RBMQPWTLYAELUTEPUHKIJGLMQXGQIEDFLPAQNTABJRTXLTJPZIXLFBOPDWVDEYIRMCSJTZBKPOZHLZBSKBOUWTLHUXYFLWPUFZEKDSRNHVWMCISDPEDAHAAGJCQNISSSKTDWNWTITBFGCOMZIYJVZQMAQWBSNWIYOLMGHXFFQZEVCZNOXWJGQKOYYCMKNJRPFKRRCGURBNDURKCU");
    tmp_tmp_msg_0_2.dest_man.assign("JACBBYEPSRFLHRBVNQMCBJTNPUPURDTWUHQASBVXFKWMXNLCVJWKWL");
    tmp_tmp_msg_0_2.conditions.assign("USOKMTNKJGMITSFMKEHDVELGUTVDQVHSTUASSTPXPNVHFYGZHNUJHRCUPZWFROTSCVBCOQBTLIYMPAIZKGEEWALPLCVAUIJWDOKHBRCRUWWKSIXIMIPSZXLZAZQAFGZQOYBEKQFBOCXNYQAQCERCMNDTLXXQABNXRLJMYFHGTYDXGJMYJBQAWJPBNDWCDFHOLMIRIVEOKGDUHDFZDJVTJCHZAYWRSXGLPJQULEWEMFIVZXYRVKSPNNWU");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.106622023064);
    msg.setSource(53360U);
    msg.setSourceEntity(127U);
    msg.setDestination(17233U);
    msg.setDestinationEntity(3U);
    msg.command = 33U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CXFPUXCHUGAVBRVIEJYVCZHFLDKASIKIEGOHXQWXOAYGRLSXFTAXCNWUEMSTGZQETHSWMUUJONKGBATRDATQPVLJQMCQNWSBBRJXLNHMPKACNZ");
    tmp_msg_0.description.assign("CLEHHQNFTFUASXEHTCAYJXHZTAZINAETWYMXNPQCHKFJCHAKIPWKRQXBSYLSBZOFGRUJCYABVIVSZRECGLVQIUWPMYPNOBPFOHCQBSTWEONPYZBYPBVHRQXBKAOCIJJVOWDMAJYIEEYIZGDDLZJDFWMGDOLREKTLTNHVUKRMNIRQJZWNMGFLKPCUSKNMFBIGRXTZMHUTGSQDFPSBR");
    tmp_msg_0.vnamespace.assign("AEQWXMSFCWFMZSFZJTRTDANGLXRZSIKXTRESHWPOGUVQUSLUJDSMPUVVWKZXBOYLICOUOCKAVHGZTUARRSBBEXJVNFYUXRBCBGZIEVPGVRDRDLHYYYPAGQMOKMIFHXJCNBDLYOBEMBNSSIIMVPKNJRLQDEYLIQPFNTKLNTZATEQDWJKIPVHOOAZMJWYUXQWGWACBHTFKKHZQCDFIQSNCXEIGBVHHCUPLZYFOHKNALGWWOFPNEJGMYPRTDCM");
    tmp_msg_0.start_man_id.assign("RMLPLSUAMBHBWHRJYNZXDKGSWKLPNDENMAOZTOQUXKVKOPIXQXVBTXYSZLCSBDOGJQATBLGZNNPSXUDNBSTWUXLTUQSJECOZUBFTXYBHIIFUAZPIRWEGFJSGJGKVADLCDVFOPFSPGZTQZJRHE");
    IMC::WaterDensity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.95316284948;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.105037975287);
    msg.setSource(51735U);
    msg.setSourceEntity(38U);
    msg.setDestination(53259U);
    msg.setDestinationEntity(92U);
    msg.state = 157U;
    msg.plan_id.assign("CZNDGXHRCBYHSYYSCDILMPCUASFRGASGPERZMQKTLKQOGIKWDOCIIZLSJUOMKATOYRLAKWQYMUNKCLNGCIBZAWDRPDFWYVLZHJBTEWTTOBPEVEBHXNMDVUFZJRIPKMSOEFCELZIGMA");
    msg.comm_level = 3U;

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
    msg.setTimeStamp(0.449726390245);
    msg.setSource(53620U);
    msg.setSourceEntity(227U);
    msg.setDestination(10471U);
    msg.setDestinationEntity(135U);
    msg.state = 123U;
    msg.plan_id.assign("NNXEOAUVQJVDAQAYWMWHRHTELKLCTCTFKMBOQAAUVIISJJNSCGBVUEZVWPEFISRFEFCPPYZWRF");
    msg.comm_level = 171U;

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
    msg.setTimeStamp(0.121595781133);
    msg.setSource(14126U);
    msg.setSourceEntity(157U);
    msg.setDestination(27183U);
    msg.setDestinationEntity(5U);
    msg.state = 46U;
    msg.plan_id.assign("MGBFZSKUOSNBGHPUEJKAQEIHODFSWWDSOQCAIFNJKVWBGNKIIFLRPXRFGVAGWECNLUECWYAKYMDQARXNDUNFRJVTGVBQZMDJOEVZYUYADXZLRDJUXIYYHNFGKMTDQQOTQAOEPRNVQWHC");
    msg.comm_level = 208U;

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
    msg.setTimeStamp(0.219190428243);
    msg.setSource(56121U);
    msg.setSourceEntity(53U);
    msg.setDestination(41442U);
    msg.setDestinationEntity(55U);
    msg.type = 38U;
    msg.op = 31U;
    msg.request_id = 26826U;
    msg.plan_id.assign("KMLLONIEYHGPSGWBDXCKYHKVUGJFZZSWSYVK");
    IMC::TotalMagIntensity tmp_msg_0;
    tmp_msg_0.value = 0.806861633663;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZXXTRWGFTTTRCYVVQAKLVDSDDNKLNGSBEKLVGSHAHUWDYFXOBVKUAGIGJEURIRDALUBPZYSXXZPCMSTWCOYWNCMXAQPJDHRJEYUBKVDHPZBEBSTOCZLQPNMEYIHFNOCGQJXUVEYZHBGTSJOMPKAYTAIMFVGRGUHHPKNKFXMQZUAYSRWVHITSJWVBMIWOEFRFP");

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
    msg.setTimeStamp(0.699266681488);
    msg.setSource(21490U);
    msg.setSourceEntity(133U);
    msg.setDestination(22106U);
    msg.setDestinationEntity(220U);
    msg.type = 229U;
    msg.op = 76U;
    msg.request_id = 2772U;
    msg.plan_id.assign("QKLAOQPAFBRJIABUMEZMUHSJTPVSLDZAIUJKKMSXHKBOJILWVPNDBNWPYJLGWTJICFJYBMNVPXOOMRUNYYQCKYDG");
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.244462935127;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JJZCCRYYEEXEDBCKRYNYAHFXMIRNQUADOSZZWTGZBWTPMGXHKDUOTFGXEKRQZPOHLABHGXLMINZKFPOCPISSSMTNUWLRUTXEVWLEOYKSHHGRIFFDWKIHYYFHETCAALORLSJSMJBEPSGVLVVENRAAHQYDQPQCTKGWMZUVIODIICWEBFMHQNXJLDGBQZQVZXAMOWJBJDNFSVNUKDIZTXUPAAVOPLI");

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
    msg.setTimeStamp(0.724555116035);
    msg.setSource(1664U);
    msg.setSourceEntity(68U);
    msg.setDestination(44786U);
    msg.setDestinationEntity(158U);
    msg.type = 231U;
    msg.op = 166U;
    msg.request_id = 26705U;
    msg.plan_id.assign("MPNOODMQJDWSTRVUSXUUBVHNHUZMZJKCZFOJEKNQLAXGRKITDXOUCRJQVDBDOQVEMISESZZYYITFSHLDGVPFWEJHCXXPGNCKEYTXYWYI");
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 31309U;
    tmp_msg_0.status = 140U;
    tmp_msg_0.text.assign("POGFURGHSJJDDPCACBASRPRDYFLPUYHMLZIWOVTZQTHRVQALVKGJPGMKFWAFVKSQQBNRMNECUUWCKMMLOOXEVGZJTEPKTNRAZMUXBGRKZTXNWGZFDBGNYGZDFWHQLKTMAVWOKBKSMHRATNSQLONSWEFQTIHCOQSWXDVAZPBLXCUJPIBLELSMSYCIHCQUJXTEDFVECIRDUEYNXNPYBHQBWLVXIKBHWAJAUCOXJYIIHSEDVJEIRFZMYJYN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CDPDSYGHIKRIOEMBSJYDNUYXAJCLFQLZXYRZSIJKCZUNNFWIXIOLPZEJWXFUAPJJEBJSQDCQSBSCTOSHWBTNBHFOPVKLLKREZNMWQWPGTBSHHWQLUXKQWRQATIHBAUGDRMHMMIJCVHGVRYLVUVVGUOXZZTALCLNEFVRIQMDPKUZDRSGEVJEBMUFHB");

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
    msg.setTimeStamp(0.508361368618);
    msg.setSource(31345U);
    msg.setSourceEntity(64U);
    msg.setDestination(6218U);
    msg.setDestinationEntity(237U);
    msg.plan_count = 9572U;
    msg.plan_size = 1536940050U;
    msg.change_time = 0.506863868353;
    msg.change_sid = 31730U;
    msg.change_sname.assign("IYIQSQYAXZFQMWRSWIVUPUWBQLZLASXFNXJMVSCJIGLCIEWBEFGKOGHEHJDNFARTHFMHPYXCIEMRZZEYFPWOJJDZWTSYQTNCJUDDLSLVBQBSVWDVPUVOSLKZBCQGRFFRHLYRRCIXOOKPEDPETOKEAHNKBVVRZLRJZETBSFWWAABDCQKHKCJYKDICUWATMNNGUUGPHEHLRGNOABO");
    const char tmp_msg_0[] = {59, 100, -21, 87, 99, 11, -18, -58, 89, 70, -100, -11, 123, 15, -110, 40, -74, -47, 79, 66, -78, -43, -113, 63, 11, 43, -63, 74, 30, -121, -128, 118, 64, -47, -42, -111, 52, 20, 31, 87, 42, 106, 29, -86, -68, -73, -122, -20, -120, 104, -72, 69, 4, 71, 22, 111, -118, -69, -34, 93, 55, -91, 30, -105, -22, -82, 109, -40, -26, -48, -42, 20, -22, 37, 66, 25, 91, 44, -101, 89, 114, 42, 86, -13, -113, 63, 21, -19, 28, -44, -29, -107, 95, -75, 92, -65, 65, 23, -86, 72, -117, 78, 107, 101, 89, -108, -26, -51, -35, 57, -71};
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
    msg.setTimeStamp(0.423112600455);
    msg.setSource(64722U);
    msg.setSourceEntity(218U);
    msg.setDestination(41014U);
    msg.setDestinationEntity(146U);
    msg.plan_count = 37231U;
    msg.plan_size = 3374509235U;
    msg.change_time = 0.336601023713;
    msg.change_sid = 4180U;
    msg.change_sname.assign("CPQGVQSKZMGUA");
    const char tmp_msg_0[] = {16, 27, 78, -110, -99, 17, 73, -123, -114, 25, 98, 122, 91, -70, 14, 21, -66, 73, -33, 98, -92, -62, 25, -67, 74, 26, 102, 55, 81, 94, 112, 15, -14, -36, -26, -128, -41, 28, 123, -41, -37, 75, -54, -81, -19, -24, -53, -75, -70, -51, -68, -77, -19, -45, -113, 111, 122, -98, 33, -38, -71, 31, -85, 103, 30, 115, 125, 17, -34, -108, 56, 119, -7, 49, 111, -98, -109, -101, 123, 81, -32, 25, -1, -74, -93, -25, 71, -43, -34, -93, -6, -103, 75, -86, 103, 21, 39, -115, -28, 109, 70, 22, -81, -92, -83, -7, -108, -105, 101, -27, 52, 71, -37, -50, 120, -47, -107, 4, 87, -60, 5, 26, -43, -122, -3, 101, 30, -50, 28, -14, -67, 15, -122, 37, -62, 41, -63, 93, -20, -46, 86, -118, -108, -45, -107, 63, 22, 24, 6, -71, -35, 51, -49, 65, 39, -82, 124, -121, 27, -67, 42, 67, -94, 82, 76, 22, 36, 65, -65, -42, -71, -59, -33, -121, -53, 88, -54, 39, 89, 56, 24, -118, -109, -60, 34, -71, -21, -26, -10, 109, 27, 51, -107, -36, 22, 62, -71, 34, 10, 86, 92, 57};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("WWAEXQPZHYGIJNUJLZOPZHVIEPIKWMSPGUBFPTXCPUYACBXXFRLOXFMVXWDDLZUOFJHCPZTDKCGJUVKIRMBCZSSNQWYVXRLIRKNPOGYSTSUCVSLMAQ");
    tmp_msg_1.plan_size = 59916U;
    tmp_msg_1.change_time = 0.410455335792;
    tmp_msg_1.change_sid = 50455U;
    tmp_msg_1.change_sname.assign("VZVPEESSNRXFBCPSLQUYHHHWSEFIROTDOKEYFPCPGRKTNGHHWXWATNZAXBRMLXGWCACQRTXJOVHKCSOEVQFKFPRJVSDWUBOFTV");
    const char tmp_tmp_msg_1_0[] = {98, 7, -9, -47, 8, 82, -121, -121, 89, -88, 120, -41, -115, 69, 119, 64, -128, -65};
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
    msg.setTimeStamp(0.954457258047);
    msg.setSource(34436U);
    msg.setSourceEntity(248U);
    msg.setDestination(54073U);
    msg.setDestinationEntity(206U);
    msg.plan_count = 31461U;
    msg.plan_size = 2211457475U;
    msg.change_time = 0.770022004683;
    msg.change_sid = 26965U;
    msg.change_sname.assign("DZGIGOVTSAUPYQWERZJPBAORYWBXSIFMSLLVQHCJAZTJVWCCZXJDTPEEYZGQCIFJEPBTNUKFRWMSMBABEFWBDPEXKTAGBGUOCTAZVYKNQYOXXEUGIKIMNNNQCFD");
    const char tmp_msg_0[] = {-3, -44, 46, 16, 3, -63, -10, 28, -45, 79, 59, -85, 89, -103, 52, 21, -61, 117, -70, 94, 7, -83, 17, 112, 102, -113, 120, 123, 12, 54, 32, 7, -113, -95, 67, 26, -110, 31, 95, 42, 67, 113, 68, -7, -84, 98, 18, -88, -55, 45, 24, -120, 84, -38, 30, 49, -50, -70, -34, -91, -108, -52, -48, -32, -52, -48, 69, 126, 3, 122, -2, -128, -71, -25, -14, 98, -105, 82, -68, -8, -120, -90, -118, 45, 46, 71, 110, -5, 50, -11, 61, 103, -128, -113, 42, -100, -103, 26, 7, -53, -77, 114, -6, 77, -128, -94, -75, -82, 125, -122, -91, 101, 45, 62, 15, 39, 124, -2, -51, -28, 103, -87, -3, -105, -64, 6, -37, 91, 61, -36, 43, -40, -33, 59};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.571983187666);
    msg.setSource(29805U);
    msg.setSourceEntity(239U);
    msg.setDestination(35970U);
    msg.setDestinationEntity(36U);
    msg.plan_id.assign("AMKYBENHPR");
    msg.plan_size = 17756U;
    msg.change_time = 0.567018827609;
    msg.change_sid = 63538U;
    msg.change_sname.assign("TAHHMIJCWJTLRKMIXJHVWPQPDJQQFAKCAUUEXIBHKJSJCNFBSKNYXKTLOOMPLXBUWHGVNWLURPAUHKWXKQJYZDCSYBTYZEIZJTETDAUNIGCIHTADARZZJFGQGBDSOTHPFRQKMPGTXXWRABYWOSNWFSRMNBVLWOMVSQGCVELFNFBEYQLQPCH");
    const char tmp_msg_0[] = {0, 28, 2, -89, -50, -19, -37, -97, -3, 123, -73, -5, 102, 42, -73, 108, 76, 55, -79, 125, -33, 0, -96, -126, 56, -36, -33, 25, -50, -105, -106, 72, 62, -123, -116, -100, -100, -95, -124, -1, 84, 86, -21, 95, -106, 51, -82, -54, 38, -11, 33, -94, 77, 79, 42, -128, -34, 81, -31, 28, -66, -33, 126, -79, 73, -100, -40, 5, -10, 63, 10, -83, 107, 61, 102, -24, 42, -17, -109, -105, -98, -29, -50, 82, 89, 125, -115, -121, -31, -96, 48, 79, 71, 113, -22, -116, 84, 114, 62, 24, -53, 79, 94, -83, -95, 95, 75, -21, 27, -5, 89, 1, -106, 60, -30, 121, -20, 66, -65, -36, 25, 67, -82, 18, 115, 6, 44, 80, -34, 112, -111, 123, 65, -42, -5, -40, 37, 84, 29, 83, -117, 16, -47, 45, -87, -24, -79, 40, 33, 43, 58, -32, -75, 117, 55, 78, 121, 50, -8, 76, 49, -14, 104, -21, -54, 104, 16, -31, 18, 40, 80, -108, -50, -83, 26, 53, 110, -8, 103, 45, -26, -28, 123, 20, -26, -93, -68, -40, 83, -10, 91, -110, 48, 29, -120, -19, -1, -4, -45, -96, 39, 66, 31, -96, -112, -9, -46, -33, 11, -46, -17, 75, -123, 37, -17};
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
    msg.setTimeStamp(0.294073070814);
    msg.setSource(35117U);
    msg.setSourceEntity(38U);
    msg.setDestination(10660U);
    msg.setDestinationEntity(194U);
    msg.plan_id.assign("RAFSYMGHFKGMJCAQRRFISCESYUBKAHCQXTIIFMEP");
    msg.plan_size = 16055U;
    msg.change_time = 0.0824397495186;
    msg.change_sid = 3835U;
    msg.change_sname.assign("OOAPAGQPIGHTQDBNAXLYCCJAANPYBXDITSBOUCRGMSDOJQHYOKIPQKFWVHJGLRMDNQKGETKWHVNUZIXCEXRDKFPUSNUGFWZKDZIOVZFBLLATLHELNDLPBZJQMYAQZJNCOZIODIVRTVJFFXVXYHWDQWFLMPMETWKARKUESUIZACCNBOTJJNBENEJFYMQKBSIECWXSHBMPBHVFZDMZUYYGGLXSMARM");
    const char tmp_msg_0[] = {25, 115, -108, 82, -12, -68, -62, 43, -49, -64, 58, -30, 102, 10, -30, -62, -81, 20, 112, -128, 7, 101, 40, -3, -10, 29, -30, 118, 106, 126, -106, -42, 57, 6, 107, -118, -108, -77, 29, 22, 117, 7, 84, 45, -31, 55, -68, -77, 5, -127, 14, -47, 75, 47, 36, 112, 42, -73, 49, 13, 96, -23, 44, -2, -17, -36, -30, 65, 32, 77, 68, 60, 111, 107, -53, 91, 77, -4, 19, -13, 37, -93, -56, -25, 22, -70, -41, -101, -126, -119, -43, -54, 104, 101, -103, -75, -120, -101, -26, -96, -107, 21, 0, -108, 120, -101, 19, -63, -23, 17, 36, 79, 84, 54, -2};
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
    msg.setTimeStamp(0.579476248457);
    msg.setSource(12204U);
    msg.setSourceEntity(17U);
    msg.setDestination(40182U);
    msg.setDestinationEntity(138U);
    msg.plan_id.assign("ICPKWYAZSYWEVLS");
    msg.plan_size = 22758U;
    msg.change_time = 0.358864543146;
    msg.change_sid = 24246U;
    msg.change_sname.assign("HVYGCCXIQYVWYGAWIWUVTFUTRAPVRELXWRZLMADLUBUTFKFYNJVGSMZXYBHPXECYJKSPOJMZKBKJSLXPIECOABDUMAFKVQPAGZ");
    const char tmp_msg_0[] = {-108, 83, -34, 49, 126, -66, -83, -76, 93, 55, -49, -70, -118, 59, -82, 7, 26, -55, -65, 36, -43, -42, 8, 50, -34, 14, -20, 95, -124, 120, 103, 12, 94, -68, 22, -108, -97, -48, 47, -75, 111, 57, 33, 58, 14, 37, 77, -125, -44, -3, -57, 55, -81, -76, 29, 115, -95, -88, -77, 65, 104, -33, 28, -42, 57, 64, 55, -101, -110, -111, -61, 62, -98, -94, -53, 62, 74, 54, -73, 7, 123, -64, -47, -31, 49, 45, -41, 19, -13, -125, -110, -127, -42, 75, 94, 78, -51, -107, -51, 9, -57, 105, 16, 85, -91, 82, 106, 23, -29, -109, 99, -117, 99, -128, -23, 29, 29, 35, -82, -78, -85, -103, -114, -44, -126, -9, 59, 125, 8, -14, -51, 39, 19, -27, -128, 63, 17, -50, -92, 82, 102, -59, -111, 76, 125, 5, 39, 65, -13, -103, 94, -27, 114, -30, 29, -106, 62, 101, -8, 23, 69, 88, 122, 120, 112, -90, 118, -90, 20, -49, 26, 2, 23, 100, 46, 42, -101, 75, -37, -36, -114, -74, 86, 116, -30, 101, 103, -10, 80, 21, -68, -5, 31, -128, -115, 15, -4, -32, 73, -82, 77, 99, 7, -114, -92, -98, 71, -95, -14, 122, 29, -41, 80, 33, 70, 68, 23};
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
    msg.setTimeStamp(0.436590509615);
    msg.setSource(10062U);
    msg.setSourceEntity(53U);
    msg.setDestination(22088U);
    msg.setDestinationEntity(223U);
    msg.type = 205U;
    msg.op = 18U;
    msg.request_id = 46237U;
    msg.plan_id.assign("EMLCXWVIRDYIGFAYSLMQQSUEKXBHZHVKQZLR");
    msg.flags = 53979U;
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("OJKEGKUNLCZRCEWWGWOIBFUEDZRJXNLMNXSJQNMJIATSBJOGGSRCVFQZODIZCSOXXMHVMGBSUBIEBUQCEJHLRJCVTYIOPXKQDKOLQCWFFYDHRNBDPBTBYZAFQOTSEFYJHTKCRKHMVXYXVONPYPPZZPADMXXNAIBMGXEZDLWTAGNYRKYUSTKVJQHQ");
    const char tmp_tmp_msg_0_0[] = {21, -128, -25, 42, 57, 66, -33, -112, -75, -8, 75, 116, 69, 8, -36, 85, -10, 98, -28, 17, -55, -10, 30, 120, -116, -63, -51, -96, -59, -66, 21, -43, 81, -48, -64, -71, -128, 14, 113, 18, 122, 123, 55, -87, -49, -73, -27, 22, -65, -63, 97, -15, 37, -19, 36, -39, -22, -38, 19, 46, 88, 95, -19, -75, 76, 82, -75, -116, -19, -62, -73, 68, 4, 122, -64, -57, 78, 90, 0, 14, 64, 44, 40, 84, 92, -4, -103, -19, -34, 105, -56, 61, 62, -62, 24, -20, 60, -2, -125, -61, 89, -119, 97, -45, -67, 105, 114, -17, 125, -75, 68, 32, 50, 29, -24, -43, 71, -71, 9, 64, -68, -75, -23, -34, 71, -24, -80, 91, -105, 6, -25, -97, 94, 76, 22, 29, 115, -36, -108, 19, 22, 50, -75, 61, -6, 66, 67, -87, 67, -95, 14, -66, -124, -71, -86, 32, -41, 63, 51, 44, 3, -78, -110, -64, 118, -6, 12, -105, -49, -53, -5, 58, 100, -123, -69, 84, 30, 11, -72, 98, 81, -124, -32, -77, 64, -37, -59, -105, 111, 36, 96, -37, -2, -92, 20, 37, -17, 56, 108, 113, -47, -83, 9, -86, 17, -94, -22, -55, 33, 18, -103, -113, 105, -100, 90, -81, -94, 77, 126};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FENZWPOEDSNXCRJRVSUPJCVHBNAFNYGGVCZMBPWTOFUSVUMYSXZLAAOEYTHSXKZUFZIWQFNGWWJIIODRYJTDBATQJBIWHPPESAODKUXWKTKRJIPAZV");

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
    msg.setTimeStamp(0.84120210395);
    msg.setSource(2441U);
    msg.setSourceEntity(179U);
    msg.setDestination(12232U);
    msg.setDestinationEntity(245U);
    msg.type = 132U;
    msg.op = 187U;
    msg.request_id = 42450U;
    msg.plan_id.assign("GBHFOYCHVJLFLORRUBPVBNZQTKPAGJYWTNEYKTBXLXSCYCIKTZAHKGINWYMFDEAQRWGVSKQEFTCVUAVRJUXXHVAQIPGXRECDNOCKDSSIVUPXQGXPJXLGABLEFHWBFECLOGNRFQHIALQAJTYVDDYXIDVIUMOFJKYNGUDBUEWMDBSJZMHZEMLMZWQDMKIPWECRPZGWOEARNMUYQPNZMZPFSRSOUBFASZJKINSXUHOKOSTLMQ");
    msg.flags = 27185U;
    IMC::Abort tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DBJCJNJMJGILLARFWDHJSXZEXVYYZTUHDIOMDUIQQGNZEQQWPRVEVPMJLXOBNOYVUZQEUHWEHAUYZHKIMNSBTLTWMHJFKKANVPCPSPDIFNGVPRABUKVDTYXBERCSXDSNELDSMOTUQSYAKIUFNDOBGFNOZGCBAYKRLWKFKTVPMFTMNGHAQIRXVAGSDUCQXFXCW");

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
    msg.setTimeStamp(0.990005870243);
    msg.setSource(57878U);
    msg.setSourceEntity(167U);
    msg.setDestination(26191U);
    msg.setDestinationEntity(156U);
    msg.type = 59U;
    msg.op = 64U;
    msg.request_id = 5379U;
    msg.plan_id.assign("MYJSXZYIPKSSSQCVCTJBEBXIFUBMXADDILCNGYWKAFWQGCSRMAOMUXZBRGXLRTDCMHUZFASPVOMJXQGFHUZDKVYECDJWBHTUVGIZEZTYAZTFIKURLVRGOIPDPYDCBNNAEBOFHEJJAHRHAROCINDSQTQYBHLBKAJGQNUYMSRSRKENGXLHFKWNWZXOOZLWNDPMKWLQMRLVPKXZTLKOPJUDEXNEOMBAFWQJYWETIHPUUCGWHTFQVVO");
    msg.flags = 56831U;
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 161U;
    tmp_msg_0.text.assign("CLEPAITDOJENRDLKVZCTAAVFEOUGAKKUJTRREPMYPQZVTKSKTMEGUPLQOILRAOWCFBKRYLJBAPQYEBGBNGMUDCVTJUSQFYSBDMHSDCEZWKKHXQSHRZGW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QFXAGEADYJWHSHYKUMXRNKRAIIBHFVVFORXXUEGISOELRSMJTXNLYTRUJDWLLSCKTOQGZVEQHJNIETQCKRWUUAMTKWOWSPLVKIIDZSVIOXELQTZDHYNYFLMHBAZMUEIPCVEJCDDPQPPNOCBCOHCVRUPBPKGBLHJYCVWWVRDZJBOGJFGHIMEYCADTZAKMAQVTSFBJPFLFMWXTNWKNYAGFXRZDBTWFYXSQIRLUYUZMEPOUZDNPXB");

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
    msg.setTimeStamp(0.782521086285);
    msg.setSource(7959U);
    msg.setSourceEntity(100U);
    msg.setDestination(53362U);
    msg.setDestinationEntity(91U);
    msg.state = 31U;
    msg.plan_id.assign("NWBHAISMTCDIOGSJJVANRDKNFERCMYQUJDOKUSFCLWFNRGQLIHLOEEHAMMFE");
    msg.plan_eta = -1098711719;
    msg.plan_progress = 0.756651625652;
    msg.man_id.assign("TZEIVQXJORCYPOQVDFBEKIYXMLHIXPJOHNITMBASPNXVFSFOIODRSZNGR");
    msg.man_type = 4519U;
    msg.man_eta = -1833556438;
    msg.last_outcome = 224U;

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
    msg.setTimeStamp(0.0375891431763);
    msg.setSource(30062U);
    msg.setSourceEntity(87U);
    msg.setDestination(18394U);
    msg.setDestinationEntity(179U);
    msg.state = 92U;
    msg.plan_id.assign("ZSQJROPWLRERKAIERPLIEIXPJCEXREYHCAFCTEVLVTJSKYNVXBUOQOYGYYGYZWMRFDTFZWGBNXVPTUZSBPJNSJQIRKADTNQGXLCYIISVNMWMLLUOJZHALNQQJOPWHHGXONJTIOLXBKWZWNHDVCPJSMFZWKGZRIEPJYUOCASYFMVBAOVTBSGHXDAKFGNFFWH");
    msg.plan_eta = -2065722009;
    msg.plan_progress = 0.100600560508;
    msg.man_id.assign("HBCMFVVHLAGRRVQKIQYTDIWJSKFUGYEHXUGWFYIDKERBWLERZMEWQURYNUDOAOBFUQZABCBJCNEDKJWBCVYFGTMIGPTTKNSZZKDXYXUDPHPQOD");
    msg.man_type = 27759U;
    msg.man_eta = 1120201350;
    msg.last_outcome = 186U;

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
    msg.setTimeStamp(0.7654538653);
    msg.setSource(26008U);
    msg.setSourceEntity(151U);
    msg.setDestination(30425U);
    msg.setDestinationEntity(25U);
    msg.state = 205U;
    msg.plan_id.assign("AXKKELHZHZSKEMHGPIWVSMHCROPTPQOFURUQCBMENZLXERBSIDPZIXROTCYBVCBXIGPXKFTHRSXGPP");
    msg.plan_eta = -469052588;
    msg.plan_progress = 0.478320536586;
    msg.man_id.assign("ASAGCXXCTWUBCLOJPUMSIULXFQUODGXJHKYFDUHDDJIAUMPJKGIRZVHNSXITMCVLDUSIBWZPJQINKADHOPSDKYFNNOBLERCZKMIUZVOWWGBRJFPTSFAQWWKHXFNRBMVAJ");
    msg.man_type = 22586U;
    msg.man_eta = 882394284;
    msg.last_outcome = 195U;

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
    msg.setTimeStamp(0.311502139475);
    msg.setSource(52900U);
    msg.setSourceEntity(87U);
    msg.setDestination(4834U);
    msg.setDestinationEntity(153U);
    msg.name.assign("MFLMWPBBSCQDAPJZQBYUGEXOLTHODHHVBCLJIKERNTXKTNROXPZWWYVZURYDSEITDGKKZXZURXMQBUZJBTWLAJS");
    msg.value.assign("QQNTIXCTXFJXJGXFVPXNCCNLBFYNWPITNOCCIQSWPAJTSZQBERSIDDZHCVBGFAEOPKMFYGATRBLOHQMRDOUJGLUTTYYNAIYHODUKBIDECRGXSQLBNEAMSKSOJFKAQFBQNGHXRKWZKBPZZENKFIWMUIBDPVLVAMUUOBCDGUHISYWYTPGCWVXVDFMMWVMZYETEZPGZJUSK");
    msg.type = 219U;
    msg.access = 10U;

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
    msg.setTimeStamp(0.433683374748);
    msg.setSource(18370U);
    msg.setSourceEntity(145U);
    msg.setDestination(8102U);
    msg.setDestinationEntity(249U);
    msg.name.assign("SVDAWPSXCVVVZZSMIOIGOOUJEPBSHWSBVFDGKXCHXBONBPAUUQQKRIFUWDMXIQKEJVYRESGCLARHBGXWMRPUVAGLPWUADTNRAXHMLUQNBDMCFDKYQSZPXOYHHZQERKCBIAAJKYM");
    msg.value.assign("JODIKTLHWLHPJGOHANGPJYVYTAUCCXKSQBAJUTEUXGIKVEPDKIQZUQFOGULDCQMNDXRFIXHQQSOKDSLGOEMUEFPVFQBCPFAFTJZE");
    msg.type = 152U;
    msg.access = 170U;

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
    msg.setTimeStamp(0.14156870706);
    msg.setSource(43727U);
    msg.setSourceEntity(240U);
    msg.setDestination(48817U);
    msg.setDestinationEntity(26U);
    msg.name.assign("KYBRPHXZAUHULWBTTXDGOQXJKZAFEMMFZGAPOXBNECLPYGODEEWWMPJQEVPLABOYQBLURVKDIUPZKCUJCYTSRHXAZWOIIGDMNHRHBJJDDQMOVZFTWJVYGSMNXTFMDK");
    msg.value.assign("FLMBTEDRWKJAKSEFDXTHRBHNLLOIOXASFKJRYTPBEOUTOFZPGGYYSVMXPSGXLFZMVZGSMIJKTUYHCNRTIXWFESRBKLYDMBAAENAETMLYESCVHMNHQBRBJKQUGQWUXUPSQUFMAXPVCLJPZCBRHGELZNZCVJDJVDGCJPUCWWAIXIICIZQZWQOFUGNPXNOMVYFFCOAAZJYHQSRWRUHKCBKRYZNTDEPLVPAUKDTNQOIMWOGIKHDJSWEYNIBLXHTW");
    msg.type = 190U;
    msg.access = 117U;

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
    msg.setTimeStamp(0.543600688515);
    msg.setSource(54287U);
    msg.setSourceEntity(68U);
    msg.setDestination(64202U);
    msg.setDestinationEntity(142U);
    msg.cmd = 224U;
    msg.op = 10U;
    msg.plan_id.assign("GWPTSQVFKATIZEVMCAMDMCEGHYKIMUDYHUOPFEJBYOEYHPPRCURNYEQDIMEJSCTLGNSWBUFRVRLATUDBZDVYKALWQZQLHKDWIORNFVGOWQEIIRDSZB");
    msg.params.assign("CQXMSJJMKQLMETETDKQIUYCHUUORRTICNMCGPDLFSNJDWPFKVRICZTJPWKJBYAHZRKOOXNOWYOGBPNKYWKNXILELXDURRKHGGIRGADJEJLVEBVWHFTWULRAPTKVZPZMCSHEBZHQTOTSFVCEZXGQOZXHYWUBNNGBIRDWTIPGALMAFXJCYYCCFQZSRDBBZMVOIBSFKUVXOGUQSVQUSVUOE");

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
    msg.setTimeStamp(0.472065190318);
    msg.setSource(24070U);
    msg.setSourceEntity(47U);
    msg.setDestination(57765U);
    msg.setDestinationEntity(82U);
    msg.cmd = 91U;
    msg.op = 106U;
    msg.plan_id.assign("LLRQGMWLRYISEFHHXNLVYOAJOVWHPFAWDJCZEUQVTUBZRCLASHXDWFNQVGPPLVWUSNEPROOGPHVEIXGIGAJPUIOTUJETBACATXLKMVKIYTCCKPIDJMXRUOYCFKBRBQXWZZSOBNMAJZNGYITRSSABZGFPYDBLLCDQCMKMZYMFVBGNKOBCTJQQU");
    msg.params.assign("YUGMBMCFLYKMJSYPHIQTQGFYPRSLDFHDHOHTDIBYRJEUUOPCLWJRWSIYOWKJ");

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
    msg.setTimeStamp(0.786481605363);
    msg.setSource(10875U);
    msg.setSourceEntity(153U);
    msg.setDestination(39880U);
    msg.setDestinationEntity(241U);
    msg.cmd = 247U;
    msg.op = 30U;
    msg.plan_id.assign("KJJDYXFOUFMFLYJIYUEOSFUZHEWGPTLIQLSZMYXGGKDVOLBIIMXRTPOZHEHKNCKZCOWMHXFJEYPPRRNSDAPAFQAJSTEJNWVWCGADDNLIJDRCOHDHGZVKLYKCDITNMMALBRXELRTZVTJEQFSWJBRWFBVPPXQBUVCJWQPFZQ");
    msg.params.assign("BEYVJOBJNQYKBKTPJPUQRRJYRIQCKFSGSVPRCEVIBNDETHIDUVHWFCKUIHSZLMEWWUQSLLGOXFMXYUHRKYJHGBTFXOQETLUQNPRZLIKNQOWYLHUNPVIZPSLKRBYQLWNKGJRXTXTWCQEMYBKDFALMZVCTDWVTXOCDJCROSZAMINBHZKOCUDAAXGWCZJAENS");

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
    msg.setTimeStamp(0.755812286076);
    msg.setSource(45880U);
    msg.setSourceEntity(69U);
    msg.setDestination(58579U);
    msg.setDestinationEntity(154U);
    msg.group_name.assign("GGPLTRYKJGLFZTNBGIVEHVCODPSNTMWVAIYIVXTCFIZHBJYNBXWVQDYGUPAEPWUKESMSSWOYEFOATUAFNHSERQXMTZWCHDMBPYZHHCYQKCVQNVZBGSUEBOFLUFCPXDMSEMZZVPIHXQQOYRKDQAKTQBHJKFMJGRLXMHNGJLZYVNPNIJDSKZLWAFCLSOVDHKEPOXURIKOWODJQNLCRTJRJFWRI");
    msg.op = 225U;
    msg.lat = 0.836568109586;
    msg.lon = 0.693274974735;
    msg.height = 0.841248288153;
    msg.x = 0.823751073873;
    msg.y = 0.650515965437;
    msg.z = 0.489548386659;
    msg.phi = 0.86757512899;
    msg.theta = 0.179873667452;
    msg.psi = 0.176471367787;
    msg.vx = 0.062002803991;
    msg.vy = 0.823896694382;
    msg.vz = 0.921089164142;
    msg.p = 0.380756172558;
    msg.q = 0.349777404107;
    msg.r = 0.338687417455;
    msg.svx = 0.417555448067;
    msg.svy = 0.395237751473;
    msg.svz = 0.156362119575;

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
    msg.setTimeStamp(0.253699480184);
    msg.setSource(40508U);
    msg.setSourceEntity(34U);
    msg.setDestination(11447U);
    msg.setDestinationEntity(5U);
    msg.group_name.assign("GOBTPQWMAWPGXLHWQLDKLACORXTUQWIPNBJADVDBAEIGXGGKQTTVWISCDULERYKEFLTAYJNSVZNXGKDKMJJYETTPOZFZTECLFJBHSKOBUIMRJJGOPFZADUUTFZRXMEVONIDIHLZFURSQLDVQPHCVKXGRIFZCSSCFLDOXHJAFWBYVYBXDYVWZREHZNKMSAVRHUCZRYMUCVHMOIPMENNNPXSWKFAUNSKICOMOTSELGPQHEMYN");
    msg.op = 225U;
    msg.lat = 0.843405515225;
    msg.lon = 0.899259019724;
    msg.height = 0.318207787419;
    msg.x = 0.42533681441;
    msg.y = 0.0482093484607;
    msg.z = 0.269561644263;
    msg.phi = 0.517626649545;
    msg.theta = 0.403426743041;
    msg.psi = 0.0249309175951;
    msg.vx = 0.892712127332;
    msg.vy = 0.100506138415;
    msg.vz = 0.960316977912;
    msg.p = 0.957399970453;
    msg.q = 0.775714297179;
    msg.r = 0.139309912159;
    msg.svx = 0.630326636538;
    msg.svy = 0.919562954669;
    msg.svz = 0.886529035323;

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
    msg.setTimeStamp(0.215492673568);
    msg.setSource(5546U);
    msg.setSourceEntity(77U);
    msg.setDestination(59129U);
    msg.setDestinationEntity(181U);
    msg.group_name.assign("IXSNMZNTFWEYQZXXKBCZIVQTMPKEUPVWDYVWMLDUJQBIDBURGYNTOVCXPDCEHSMAHZDAPZGVYLYXEYQTVUJYLZGWTMEFZ");
    msg.op = 50U;
    msg.lat = 0.404446012945;
    msg.lon = 0.279985090132;
    msg.height = 0.878714244092;
    msg.x = 0.783878281955;
    msg.y = 0.339332881566;
    msg.z = 0.551947506309;
    msg.phi = 0.955499877103;
    msg.theta = 0.732634861239;
    msg.psi = 0.494014422583;
    msg.vx = 0.275175038067;
    msg.vy = 0.569122036293;
    msg.vz = 0.514186459273;
    msg.p = 0.062127947296;
    msg.q = 0.223462883675;
    msg.r = 0.226406102243;
    msg.svx = 0.34836793333;
    msg.svy = 0.689018186486;
    msg.svz = 0.228738777481;

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
    msg.setTimeStamp(0.366731401842);
    msg.setSource(29220U);
    msg.setSourceEntity(11U);
    msg.setDestination(33420U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("EZWNSRDYSLETGAAPEPMYYVAJREMSOYYXQFZMUYSCWUBXHNBEVLFZNMTKHQRXZFMVFKOVBTKIXATGZTF");
    msg.type = 99U;
    msg.properties = 212U;
    msg.durations.assign("PYYZGPSERTYNDVTSFQPOKXIZFOPTGXHYHQZGUNWQEXHFZANSCMFXBTRLLZZUETKJBQLAINKCVHBWASLALQFNYQUXOMFZOCHTLKGVDQZFLPBBS");
    msg.distances.assign("UWULQCRAUJVXHPFXQMGBVJTZETVUPNKSLWSEZWQOKJJBGFQDDFFNUGVTTKPCIHAVAEYYOOVAOXYIGCGWKWPVIPBABZMB");
    msg.actions.assign("AHJVZCCWMZWY");
    msg.fuel.assign("BHGZGJNYGYJXBWHPAZRZDTCBMCUHODHJKKTXFMFRDGQJNABRHTBOFVBBZETEQQRAALFUMALDIHKRWGSEPUDWKNJWKIXSEVEZPAULYMVPLSROIHVAPXDNFISLFTNESXGXYTKPSEDYGWYNOYVSPJAKNYVMVCCJACKDLZERJTMBCHVIEUXKXYZWDKWIPCOZUBOLZGNWMCMQLLFGGOQRHJUQVDASCWR");

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
    msg.setTimeStamp(0.990966779732);
    msg.setSource(18545U);
    msg.setSourceEntity(109U);
    msg.setDestination(42814U);
    msg.setDestinationEntity(248U);
    msg.plan_id.assign("RKCSSLJWWYMETJLGHSCGUHVTAGZOCEJYTUUYZWCOVLRAHSCBDRHMOXKPPRFKOGBQRXMHLYOOTEVEIFLEACRMZACTTQQPNKCBQ");
    msg.type = 214U;
    msg.properties = 189U;
    msg.durations.assign("AFAWANCQVZOHYSWSXDGWKMUTXCHVGNYULOLJGDOITONYVCFYPAZDVLQACUJHMGPEXMPPRGWHWICBEMLGCUBAAZOHLTQYLENRWWJCNFHGFVOIVOIKEJVFIFLE");
    msg.distances.assign("GFUODFGSQMIQXMPPPQRZTWURAUFLIEPVNDNDLWCEDFELVSTRJLMSLSZJTJAFHHKMHRHNZYZFKSKYXDWKIVCOERRBOZYBOGCHXKYLYBAU");
    msg.actions.assign("HCPEEEERZVQZLTJXVBGGIVCNTKHZXAHCTLXTMIDZTMOJRPEIGIKBHVBXDQPNOQMLSTIUJBRAAPGRMKWTEYIKAEXOUXMUWACZPZDXWGTNDLTAEOYVFALDFUWNFICHAQSMWIHMIELUCCWJCRBFAYRMWYWGZ");
    msg.fuel.assign("OTDKCEZXDGRPPJPQDNSUGWXLPVJJDZAVROHQKWTNHTTJBGITJKCBBFLC");

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
    msg.setTimeStamp(0.0817226548409);
    msg.setSource(54000U);
    msg.setSourceEntity(157U);
    msg.setDestination(59475U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("XTGKGYWJXGFPXIBRMXSNVQIEGPAMYRJJPPJFXUAULBARFBOODLWPMIGMXHVCVADSFLSSXWHYNMYVLBIHWHDENEQIDBMEUWOXUFKKHQJCSYLMDBQYUDQRBATOWZIYZI");
    msg.type = 191U;
    msg.properties = 160U;
    msg.durations.assign("LDCQSLHZXULCBTDAYPUUHHFDQSBVPTOSZRNLZCDUMDSXQAYQXZAFLVPTPXZRXOJJYLFSYJDVNCWAIHDXBEWIHMIMULPEEKMLEENCKCOBHMIRBJJWXZCYVEQGRPUJBOTZUAYUQAMQJSLY");
    msg.distances.assign("JSHNKRWUSSFRDLYYNDGACPKUSLNY");
    msg.actions.assign("VQEKKCDTFPXHQINGIYMPDMLFAXDEKMMFYOPDGHECJXLXXBJMCPGCIKWRFJWURTKXRPHIJKYZPNPGBJXSXDBUTURXCLRIUVLNFJOSETARVBAALOFJFPFYQWUBWTXDKNYYIRWSJCORUBYSQYENDZENEDLMZBVHRTEOMYZKVQZVSWHTOAKFKWZAHNNWHWOGSPGTCGBLIGLQQEIEISANPHVWGBOFUUZUMHDTLRDMCOITLSHVYSA");
    msg.fuel.assign("FTVXACLTPRGUKSZPRYCFVHVUNLJZFZPBEIEMHKGVYLQDXLNQCGRNAJNYBAKJHBCCKVUTWUGNYTGD");

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
    msg.setTimeStamp(0.380418007367);
    msg.setSource(35376U);
    msg.setSourceEntity(133U);
    msg.setDestination(43197U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.739455257391;
    msg.lon = 0.936318669682;
    msg.depth = 0.306399366658;
    msg.roll = 0.921816759594;
    msg.pitch = 0.0683239211897;
    msg.yaw = 0.328673559379;
    msg.rcp_time = 0.161842758584;
    msg.sid.assign("SHVTTBNBGJOMFRTXPZJWHQFEGYFQCEDTRGMNJOOSMAWDHYIMQQSWUNULGFCIMAAWGMFDUKJAVYJGNOBVDWDUDKJPVUPPEIRGKCLQWHICXFKHNXOUPNTLLJIZFKIUQLFRERKPCEJCOZYSNNBLHVFWBTBTXPOLRACACPYAAG");
    msg.s_type = 242U;

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
    msg.setTimeStamp(0.466463003652);
    msg.setSource(15068U);
    msg.setSourceEntity(232U);
    msg.setDestination(17328U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.644873406056;
    msg.lon = 0.478030080409;
    msg.depth = 0.276943291363;
    msg.roll = 0.006776203054;
    msg.pitch = 0.122105928344;
    msg.yaw = 0.990227510914;
    msg.rcp_time = 0.944535157874;
    msg.sid.assign("BGYHDIRDVNFKQLRTDZHWNIPASENPZMVGTAOEVAOPMJEFBUHEYFXVHQCBSGZNOTVMUVAUSYXFXFJJWDSRIGNBORCDLBSWUEZIURCIOJGSNZTXEJPJJPEXPZYFVWOLITJMCHTRJUUDVPXLASEQMBDXFHLMSCGBZQUXKAYQRVWWBGCUCIWOWDWRMXKKHNDILRKFELZNALAJYWHGEHOPZNCLYAOBVILUPKXNZTQFSB");
    msg.s_type = 46U;

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
    msg.setTimeStamp(0.0989190245795);
    msg.setSource(40498U);
    msg.setSourceEntity(80U);
    msg.setDestination(28582U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.601766460622;
    msg.lon = 0.321381515391;
    msg.depth = 0.392208852341;
    msg.roll = 0.894361273974;
    msg.pitch = 0.0735946492893;
    msg.yaw = 0.71367727877;
    msg.rcp_time = 0.894863989953;
    msg.sid.assign("BQUFIIFZFDHCDFJKDQSSPWHFHHGAXQMURFNONXECSPGXAURPNSHWXCIMCSOOKNJEUZJHQMNGDZWWQOKADWCDREHQTLBLJGZEPWRLDVPZCXJKTXBRWJAVVITRIGLZIZWKLRCBQUTNBUOBEBXNKMWMCYLAYPQVLNLZBPEAISTQADPJVMDNYJRFSZHXMGLEJRMIHYTEBUVNAVGVFZGTOOOKAMFPUMYSVOKPCHUFTX");
    msg.s_type = 201U;

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
    msg.setTimeStamp(0.186023291747);
    msg.setSource(14052U);
    msg.setSourceEntity(31U);
    msg.setDestination(16401U);
    msg.setDestinationEntity(88U);
    msg.id.assign("SFFGWXBITBLAQWVZFMTQYWJQEDNBAPZVIRXVBULFNOOMCPHGNHHKVDLHCVKBTPRKSMSWOMMBXJGXOCIMURLSQDVFYJZKECTSEOQRNYXYPEXWJPXKADDTUHPCTUHFRANIKNTVMOCUGXRFJMWGXKCRUSPVBAQWUQYCZKEURNLEBSNFJMDZHWJEVYDHQSLBRTELHONCJBMVPLWPIQHATGPINTDIJIFOELZGAYQRS");
    msg.sensor_class.assign("ZZIHXOXCWP");
    msg.lat = 0.128450370763;
    msg.lon = 0.193589472047;
    msg.alt = 0.795782416987;
    msg.heading = 0.136818188905;
    msg.data.assign("NAPQLIDDWWNVWRRSZWBVSPFCKRTUKCBQHMVMGUJSPENLXBGQCCOTPVQXBFKTJNQCFYHVNPUOPFJWAFSYDVGIMIHLYYKGLPOPMCRIJUDRUKBMUTZZBJFTKQVLHZOQBHZEYXOZODUENAYEZSIHCXCZOBABUEWNHKQVWGJXMXSJODKXNEFWOTMABPJEAIAIFETRVGILMDZSXYRDGLTLMOXFDXCNAAGYRWPSC");

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
    msg.setTimeStamp(0.548661267026);
    msg.setSource(42503U);
    msg.setSourceEntity(107U);
    msg.setDestination(21468U);
    msg.setDestinationEntity(169U);
    msg.id.assign("WVJFJNDZFRMFUYIWKLSYVURLBKAQYBUNSINVOIIWKBRZIOEEXPRNDHNINTUZUBGMAKTYOGHITSQQSBBSVRGLPECWXGPTPZHUECOBXMEIOXDMFEVSQQTRSCHPEHFPCTGHMZANBNYAGRPUHLWMOVELKVJOKLCSLIYAANDBRWKYJSDIWYTFKXYONDJCHXAXGZRESUBTCFJPJUJ");
    msg.sensor_class.assign("SXEJGRGHXHOVUXFIQHICEKTMRWKCZDCQHSLZDQGYBPNVJCQBARXRVBMFPFTRLAJOHPWDLOEGDLNBDLPKXWNYCFDDPSMYITJOSHAHATENZVGRQMCBKZPEUOJHUVXQGCEVELIJZZOWYQLMKVXNMZTWQPKSWJAFRCYJWIGEKVPODYNZSSEDUGXTBRYLRAITJMBFTFYAFFVXBSMLIMXDPAGHRWNUZUNVZGYIKOJYOPCBUOSICQWEAWNMLFKNATU");
    msg.lat = 0.19245262747;
    msg.lon = 0.41004821883;
    msg.alt = 0.227597261939;
    msg.heading = 0.845319003537;
    msg.data.assign("LRAJXQBQRNTDCPWGIOWFFWJSEISYGMYRMQGDAOEFRRHSNZKUXNPEGQEHXTYCQOVOXLXIZBHOEAPPJLFUOGAPHCLNYFDVLMIWTDHITSSZDHAZNKNFWULIJNHDPZJVUWGVPHVMBCCYYKOCEPSAUKBBXMFRJDZKVEVEVNJTGSXYGTUQCBAQGVSDROZKBAOMDYJUUMQRHLXGMATKVQJHWRCIWYOTYMELCXTBXQMZNNL");

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
    msg.setTimeStamp(0.381738165958);
    msg.setSource(44348U);
    msg.setSourceEntity(9U);
    msg.setDestination(42154U);
    msg.setDestinationEntity(181U);
    msg.id.assign("VCDBTRQNCWZUHKUBCUPSXKFIVYNGTMNEHPXMUBUUQPRSATECMJJKVGEQIIQRWNTQCLFGKCLHWIESVTEOTOAOOOAWYKKXBVDWCUXMPJNUXIKBTYDRBMYQEMNZOQZ");
    msg.sensor_class.assign("QNHPFFQLWIGYMIPLSPVZNLWEMPWAYXXFBUIDXGQKJJMQBEWRAPWAOFQGODECBUMDKUMXEPRLLICKSRMTOBFTAEHLOJJOKSRKCBTWRAKDSXVJVIMKVSUHSYDJCKYFAHWXCZHANOTODITYYGZRDYMPCZIFVLBGILEHRTRPUUIHH");
    msg.lat = 0.342024025372;
    msg.lon = 0.358304458644;
    msg.alt = 0.161136914594;
    msg.heading = 0.453107346569;
    msg.data.assign("SFTYMZVSLSFXWLKANBPCCDZSYJOXZDPKPKYGUMGDTTAGDLXIRWHECQLVQDIHRBEKOUBJJPNQ");

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
    msg.setTimeStamp(0.544538759459);
    msg.setSource(46107U);
    msg.setSourceEntity(84U);
    msg.setDestination(25582U);
    msg.setDestinationEntity(158U);
    msg.id.assign("PJDCQMHLRMXSQLSJOPBLABWQGNAHVWGOKZXJSVJANKZCJRXVPSGXUZCIEOUATJZDYEFOMOYTYKHGUAWTVTZXAERGNTKQHFXQWEEWLEDOVKQHYRCUCTBTLMPIPITO");

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
    msg.setTimeStamp(0.651631023688);
    msg.setSource(53408U);
    msg.setSourceEntity(203U);
    msg.setDestination(16239U);
    msg.setDestinationEntity(134U);
    msg.id.assign("TYUXVDGAKTGEHFMBFFCHHUUQGNSCSBWCTMBKOZSWIPQYPZJQPDNHKCMDZOSVZGAHOZYGJHJTCTPNDTPUIZXLUXMJRWKWBSNKPIVPESQANFERUJLYKNBRMJMHMJRQIYQXTJNPL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HDPRUWGXOVRDHZLVMSHLTIZKNIFVEFYKODQLUUQDRDNZVKTJXJFZDYIFOTSWXVUJYIHCZNLQOTPAEPEPGBPGKSNEUSYREIXWYGKFCAQHMEMDAWBKGUAWMGENF");
    tmp_msg_0.feature_type = 168U;
    tmp_msg_0.rgb_red = 143U;
    tmp_msg_0.rgb_green = 4U;
    tmp_msg_0.rgb_blue = 84U;
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
    msg.setTimeStamp(0.104448516767);
    msg.setSource(4949U);
    msg.setSourceEntity(169U);
    msg.setDestination(41978U);
    msg.setDestinationEntity(82U);
    msg.id.assign("PXNTWMLUERMELJRCFNGZVDBMWILXQOBKTKFFEYLHXKRPOHYPTSSAUGHZUKHCX");

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
    msg.setTimeStamp(0.699000161702);
    msg.setSource(11999U);
    msg.setSourceEntity(53U);
    msg.setDestination(62024U);
    msg.setDestinationEntity(38U);
    msg.id.assign("ENMPHGPHHWPXGEIQQWDILPBPRZUSROHBRJANFFZAJZQAFHSOSNCSPDXVKWFDBHONAFVTTELTFYZJCKWUOUADWEHXIFZSJUMEKAMACRHUCXTNKBVYHJRLYTMENIFYFMIKBSDLRSWYDGAVKIBQZDPQULOELPIGBRVWLTXMCQIZPWUCUVJWBKBGJJRPZGDF");
    msg.feature_type = 233U;
    msg.rgb_red = 40U;
    msg.rgb_green = 141U;
    msg.rgb_blue = 16U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.57762236557;
    tmp_msg_0.lon = 0.282473979385;
    tmp_msg_0.alt = 0.30491531632;
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
    msg.setTimeStamp(0.55790014373);
    msg.setSource(57702U);
    msg.setSourceEntity(224U);
    msg.setDestination(11274U);
    msg.setDestinationEntity(39U);
    msg.id.assign("DSNARNLYGSVXIOEUSELSWJFMRTULZTYWACPFCQNEQZHSIBPCTHMQPBJFADGZZVNDSEQARQBIKPHPHBKGOIQPJAQLOCRXFFEFWZVZLAYYNACZNPHGPXJMVXLDLWTWEVSRMTGOAROIDPDGHIVKFBKLEODFURCOTZUUKCUWMXTSMUKCYXXVOLK");
    msg.feature_type = 236U;
    msg.rgb_red = 52U;
    msg.rgb_green = 100U;
    msg.rgb_blue = 55U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.856108416568;
    tmp_msg_0.lon = 0.763123272519;
    tmp_msg_0.alt = 0.672730685257;
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
    msg.setTimeStamp(0.123759752502);
    msg.setSource(2601U);
    msg.setSourceEntity(90U);
    msg.setDestination(14489U);
    msg.setDestinationEntity(17U);
    msg.id.assign("MYCCWHGLCQVPMAZNPTQXIYJYHDLNDRYWQNOOOUTGFKYIAEQVMUHTPOKYPVLMSDWEABMMBNURERUAHHBCIKXITFOTJZCTXXQBAYZAQNPMLSHPVRLEQJDOPLSTXJXCEOKVWWYJCGQRVFJSZSUBKDZIRRDMVNWPXZRWBLHCJJFIGEMGFAGGUFLBDSH");
    msg.feature_type = 188U;
    msg.rgb_red = 229U;
    msg.rgb_green = 71U;
    msg.rgb_blue = 160U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.43445869701;
    tmp_msg_0.lon = 0.406268182633;
    tmp_msg_0.alt = 0.967701021558;
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
    msg.setTimeStamp(0.393159278702);
    msg.setSource(7865U);
    msg.setSourceEntity(65U);
    msg.setDestination(14298U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.430331716951;
    msg.lon = 0.352170793534;
    msg.alt = 0.959650830023;

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
    msg.setTimeStamp(0.0330750614786);
    msg.setSource(46809U);
    msg.setSourceEntity(189U);
    msg.setDestination(55196U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.899028394003;
    msg.lon = 0.0508366025702;
    msg.alt = 0.559425755381;

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
    msg.setTimeStamp(0.409719189761);
    msg.setSource(65025U);
    msg.setSourceEntity(8U);
    msg.setDestination(15026U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.535608132829;
    msg.lon = 0.286255325312;
    msg.alt = 0.890694852761;

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
    msg.setTimeStamp(0.0507053742042);
    msg.setSource(57354U);
    msg.setSourceEntity(179U);
    msg.setDestination(52496U);
    msg.setDestinationEntity(205U);
    msg.type = 108U;
    msg.id.assign("XLOSKJYVNQRHOPDTWZKKLKRGBCBZRCYXRSIZSTQEJCEMAWPDQEBKFCHJEIVUVNHPJJAFHPXXDHMLBFBAWJQQZAQBDMNFLRKNNBHZOZBBWVKSWTDFGHUICJWVLDSGYHORNVLASLEYPRFYXPFWNIMVADAKRYOXMHNUHYJJFWRYQEOANMQTPTOCUTTCGIYKZ");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 219U;
    tmp_msg_0.value = 0.939726653219;
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
    msg.setTimeStamp(0.271207622835);
    msg.setSource(37004U);
    msg.setSourceEntity(89U);
    msg.setDestination(40385U);
    msg.setDestinationEntity(81U);
    msg.type = 38U;
    msg.id.assign("DRDXOQCFNLYEEEIYKMOURTWWHGBOQUTMNEAIPKWACDRNXGWOGVFNMLADSICICJOSJYTDHIPBPUHBHESFEITVNALYWGXHOYVLYQEHGTNDSXSXJQOIJXQHGRXLSFNRIBUXESUILARFJTRQDBSZG");
    IMC::TCPRequest tmp_msg_0;
    tmp_msg_0.req_id = 33486U;
    tmp_msg_0.destination.assign("VRWVFYWWVLSZCLTJYOEFFGXTIJJGSPQPKOHCCWTLUXI");
    tmp_msg_0.timeout = 0.0128384695247;
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("AUZPZPGLPPGCOBXUARVFPFHEHQKGTIMJWMXYM");
    tmp_tmp_msg_0_0.dest_man.assign("PTVCHSTOULEKNGPZWMBTCIUCFUFCBNVASHKLIYYQNUKTLWBGFUTOWJOYJWENGWIDGMZGZXUPOB");
    tmp_tmp_msg_0_0.conditions.assign("XBIOQZABUUEOMHNZRIKDMGRKPJFBCQUZEIFWFAYVBAPJSYMWXTFASSXHGVWXASBSDTAXVROMVTRHLKFDZNJGXGBSRESYEYHHZIWMNYDCSJBGUMEASCJQGAJQVOOKNCWINULRGECVQWNXVTQRLPKIGNKUDXVXTQTDFPHETYREPUFOM");
    IMC::Calibration tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.duration = 2579U;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.515935065981);
    msg.setSource(60367U);
    msg.setSourceEntity(187U);
    msg.setDestination(51430U);
    msg.setDestinationEntity(100U);
    msg.type = 187U;
    msg.id.assign("SIXAXRAEUEVNCLXNERIFSLSWVWWTZWSLKLANRGDZBOCNMOFLFCCQFRGSNPCXYBYOFDULOJEMQPDIUVCIZJUKLKIPLRBTQWOKOCEHGYYMJYVQHUBSDPCZQXPTJICJQAHADHVESPRGTKIRDQXWTVHTOXKHNQRDZLJEASBCWFJHMPOIUXHKPXUJGKTNYEBOYMVKTMOVQTZINHRUG");
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 218U;
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
    msg.setTimeStamp(0.163757296392);
    msg.setSource(30213U);
    msg.setSourceEntity(236U);
    msg.setDestination(57409U);
    msg.setDestinationEntity(94U);
    msg.id.assign("JROWYVSMPNTZYWBXWVWXXMVGCPNIH");
    msg.callsign.assign("ZCVUXXITKVHFDNXTMIGILHDCMUECPAOOTFATACPRVOCZSVLGYFFHTOSLBKFBHPXJHTYQGILYBFQBWVYACUVDWCOHOBZFLSLENDUYZDRCVHSEAITGSSRYVMTWONZYKKPVUDQDZWGHWQXOUQAEMJPPCQLJYXNYABXELQPFZIBAUJZPQLQGGNGDRUINDGQWTJXKKKMASYTPKMX");
    msg.name.assign("DQVHPROWKOQSLRNGURBJTTKFCNHTLGHITLKBZMWTZYJVSNWRMFHJPGEGXEYCSHZCIMPOBTDFGIUUJYFAFTWLBDQXMGGCPBADKDCAAFVOOEKQJRUGEPNSXLZWKFRVLIRVEULUYCIXZFSAEXFMSZMVANHLDARYJSFQYCLSHPECCITAPUVXZQXIVINXKUSNLGJOMQQERYZDREEWIBPVJQNBJWHKPJYADSYMBNNABDDTUXYGUHWICZTVOMQKW");
    msg.type_and_cargo = 56U;
    msg.a = 0.317850422874;
    msg.b = 0.536323148055;
    msg.c = 0.178849630621;
    msg.d = 0.0250722557691;

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
    msg.setTimeStamp(0.503433870138);
    msg.setSource(17770U);
    msg.setSourceEntity(219U);
    msg.setDestination(65225U);
    msg.setDestinationEntity(218U);
    msg.id.assign("GAMKPFTQTGCNFJXJBYRUZDYBBBLWEURTHXSUKJUZGLQNBEWYTSAKOSDOUIDSTBRWVXQPNZZYICBUMVQRISHYDLILPMOVFWEMPIKPAOJDFZFOSWZUBQWQIWACEKMEMFAHRHGCICBPYRHYKJNCYXJYNLTEDHGXLVPHSVFZOGMZHQEJKGTFLMZIVPUBFPADNQLKTVSJQCMOPRVCKXH");
    msg.callsign.assign("UWQMOOJSEVSJFQTYSPHNWVBQRFALKCOOLLEDS");
    msg.name.assign("LLMNOZXBRPDTPZNERKQIIIEPQJDDFMMJNKPQGVTXLMXWSLVQITKPXHMUBQNRAQGWWZYHQXYTMZDBFIBJTYRKOOREPANTGCCDDEAUYCHZAMYWWFLPJSOZMXJJGKPCDOYBUHEUUUHUWKHAVVHLVSNZFJEBQSYRTUXFRZXCGKZKYWKVPNBAWALVFVCQTRMEETFGBJEOCDWSFOSCGLSOGIB");
    msg.type_and_cargo = 135U;
    msg.a = 0.944012439678;
    msg.b = 0.657621666488;
    msg.c = 0.0883307713913;
    msg.d = 0.575587694087;

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
    msg.setTimeStamp(0.951124443311);
    msg.setSource(22269U);
    msg.setSourceEntity(186U);
    msg.setDestination(15859U);
    msg.setDestinationEntity(150U);
    msg.id.assign("KDQXRMRBTETMYPAHPFHIYATXAWVUDFUUBUELBACSAGBMYFHZWUIRWQJXFAVSWBVZCAWMPYQYZFDVVLCQXKGXXEJBKDYXZCD");
    msg.callsign.assign("EAWETJVXWMKSEMYSXTWOITBJRVPKCBLLSBZNAFTLVRHIXPEHBWHYAHCZUMISUH");
    msg.name.assign("IYCRXWEPQVXZSJMJVCMGPEIXUQJYNHOJTKAHFREWIIDOVLFHGQJPY");
    msg.type_and_cargo = 54U;
    msg.a = 0.933739584473;
    msg.b = 0.190509193872;
    msg.c = 0.254844759815;
    msg.d = 0.282869557771;

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
    msg.setTimeStamp(0.529224838311);
    msg.setSource(48002U);
    msg.setSourceEntity(71U);
    msg.setDestination(35086U);
    msg.setDestinationEntity(25U);
    msg.localname.assign("HQGGRVOJBBDAZBYHKDXVCNFEOPWMGGZPSMESTVIMBRRELYTLQYHUYINKAVJHDAQRCAGPSNFLWOLAOVTZLRWQIFLIAFGRMWDQAJWDETXBWYICZBNUKGPEQEXGVJJQRKTMPUSQOWHCQUNOSCRZWTBKTJJEEWUCHQSDCLXOHFJOLXTULITNPRBGTBKXPYKANCDUPHNADZ");

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
    msg.setTimeStamp(0.180825137691);
    msg.setSource(20733U);
    msg.setSourceEntity(3U);
    msg.setDestination(64357U);
    msg.setDestinationEntity(168U);
    msg.localname.assign("GGZOBUOJCDNUVVLCFMSNDMOOMBVVRVXRCHUEQCWKPSYKAPJWGRXDQQGHBTCKEFXATSWGJURCBBOXJMHONBUSZZXMOTFKTNNDVQGFZTODMHSIPCZUEELILAYXLPALQQIAGUMWOPEESRNZSIAKFGPWEPASLJNDTIYWIHIDETKKGNFYFCBAHLCVXIXJVLGZWRLEUJRKOIPBZYXJQFTLWHMKJDVHWMHEUKRMJPWYTPFYQVSYACFRABIZYRUNBZ");

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
    msg.setTimeStamp(0.723046804754);
    msg.setSource(19630U);
    msg.setSourceEntity(32U);
    msg.setDestination(40697U);
    msg.setDestinationEntity(222U);
    msg.localname.assign("CTFQYFEVOBXHQYJLKLMNWKVPTC");

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
    msg.setTimeStamp(0.621293192588);
    msg.setSource(62914U);
    msg.setSourceEntity(43U);
    msg.setDestination(2664U);
    msg.setDestinationEntity(107U);
    msg.timeline.assign("LEOHCRDYDYXNURAUOSGDQRIMZWRCQOHDLGSUXIJTUSVAVYYCTXIZYIDMBBKJZKARVQN");
    msg.predicate.assign("SAFGBNZBAWEHHEDINJGRAJJWXUXRZAQKNSAKQQVEDJBWYUVPNZGUOOYRAGIGNAUWPLDVGCHEORDWZHKZVFUQVZSNFUKHLVATHSLMNLVIIDOJKTPSBTMYUVEKWDHTQYDQTJSLJTZNXBOMUYCTBGPZUPCMMCPIKVHGBMMBYHMYDFICFKNXTOPOXJIZEQWORVNYZDLQXIBYSSRUH");
    msg.attributes.assign("LNGVFDXEQTVD");

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
    msg.setTimeStamp(0.877918659555);
    msg.setSource(38395U);
    msg.setSourceEntity(156U);
    msg.setDestination(30682U);
    msg.setDestinationEntity(52U);
    msg.timeline.assign("RCPXZXUSYYYFIBWSVCYVKEMUSXFSLYLCRSRPLFYIJUPIQTNNNVJQGDDLBQGPGJHZHMDIXNGNRAAAREJVRCXTMILROPLEBBHDKLUHWDYKDBAJWBPEZSWTFIVYLTAWC");
    msg.predicate.assign("RGZXFXQOCELAMEYRCKNLFPCBTBFDKTEJXHFZJVTVMOSFXMNAQAGKONPAIETUXIFQPNUYODSVVOGODLCZLHJMGESBVXQJBIUHXZLHWHJGIXVNEZNHWUDRPTSGZNGKWDRGQNWTAWEAAMPWFRKRTDMCSLSDWYYYRKHTPJFQAUIIKWOKTLXUBYPOMBSMPCBFIGEVQSCZLWJADVOKN");
    msg.attributes.assign("UTVRDQXUROJRFLGSSJLQIASKBKGNJURAVIBWYPDCPCMBFSHZOITXKZAVFBGHABEEZXFSGUMSDPEOBUAGIMFIJEGNULKEPUCJFLLRKBCXWBFFGAWUNDHDVQLXQVARYDSCXGNHACOZYLSIYNRHYKTFIQOSGNZFOMZPBMJVVRNKTDTDVQTUKLIQZQOHJKY");

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
    msg.setTimeStamp(0.556771232064);
    msg.setSource(25410U);
    msg.setSourceEntity(169U);
    msg.setDestination(65224U);
    msg.setDestinationEntity(235U);
    msg.timeline.assign("SOVJWVUCHYJHXLNAEGKOEFJDMDODZWTWIWZBYTPMMUXHQUGCHBNIJCEBMYPEAFSOQPBMRGHZQIELYCXQZMOPRDNWNIWPKTSYGYTEDANIPBRBPNLJSLQLSQXVJGAV");
    msg.predicate.assign("AAKEBYEFVCXXUIFMRAQCSHIDRZEILGDXGNTACRMHNCOURSY");
    msg.attributes.assign("EGDBQZSJGGUHIEVKRNVMUMWMNOFUNWKQXLSO");

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
    msg.setTimeStamp(0.902913828116);
    msg.setSource(17460U);
    msg.setSourceEntity(112U);
    msg.setDestination(45217U);
    msg.setDestinationEntity(164U);
    msg.command = 163U;
    msg.goal_id.assign("IAAFYZEMOLPNGURAIZDYVCQFSHJVQLHIPSOXZCKJZJYTTZENCAXDRUKUNGHOVAQENPFVQTQRRCNMJYIDZHVMFPPCADQLOPOVKSJEXRUSNGLQDIKBVFSTYWWNKPECWBLRSTGLFXMXAUWHZGMCXOQNEGISFMYIGJXHAQJVRICHWXGJUBFDYHISBRSJBIVEGQYWFULADWUUMMVDOLOEGXKKAB");
    msg.goal_xml.assign("DJMJMWXHAZVRFZFEEAGPGCQFGBRRDEBUDFCSPPMBILCUAEYNPEIICYATCUIGWTDEXRAALOWNCPHJPMRIMEVTZDNRHPVWIWKIZYLSGVAPSXOWXTDUIVDXCWKQWAYCQJIBGGNFNCAAZNUHQNDPEWYBOFQRKXSHRZCOLZVUGYTBQNZLFZJSXRMBNZSKLSJLOJJGTYDVOSMTFYUOGNKBUFXQ");

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
    msg.setTimeStamp(0.908346708545);
    msg.setSource(46338U);
    msg.setSourceEntity(173U);
    msg.setDestination(38678U);
    msg.setDestinationEntity(235U);
    msg.command = 48U;
    msg.goal_id.assign("VFHJSRDYIOXELOYTFDOAXCIZTNWQVSOEPVMGRVDNMQWXMMBOMZOMKFCJAZPYKYMDKLKCBCULHNPRJZHIBOEKO");
    msg.goal_xml.assign("KORPBNDUJVSMLTJIDFBGE");

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
    msg.setTimeStamp(0.657206426549);
    msg.setSource(48673U);
    msg.setSourceEntity(215U);
    msg.setDestination(23489U);
    msg.setDestinationEntity(25U);
    msg.command = 108U;
    msg.goal_id.assign("ZPYRUCXKANWKSSQOYAYQJDQAYNDCBQGBJAUEZRIFOJQPOGKRMCDUHYHYOPBFVTLXKLWXNXGBTWXYMMCMBJRLJNWAUNZOMTMUHQPCAERTVYNBEKBVSOTZUEHDDKZICEHJJGRIELVGWLMZYHHBWJSJVZCTSQQIPEDWHG");
    msg.goal_xml.assign("AVFMCDMKPCSSGRMCSPGAYJQHXJZWPGIHJEVKRDMZUXTOBMFGGOQVAYHBPLHWNKWPC");

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
    msg.setTimeStamp(0.0819746802925);
    msg.setSource(20949U);
    msg.setSourceEntity(217U);
    msg.setDestination(6176U);
    msg.setDestinationEntity(27U);
    msg.op = 4U;
    msg.goal_id.assign("CTQSQXWOZTXJHCNZTYVAYDNGTJWZARXOPHQKUOHIVCEEPVVOIAZEGXKUIBPMVOBLFPUDKWIDWDSXLOBUZFGEXDWBBRTNB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RBUGMBORGNGVZCOSRDIKPEKAJYXIPSUUZOMUASYNCOMDTENMAQGMIKMZFTEKJQCSGLWSMFCCGDFXNLLOTRTVTYHZTIFPICEWVNZWQX");
    tmp_msg_0.predicate.assign("ICZCOGMARFJHURGKIHDXPAWTWJUAZSYVKAKTVOMGVHUHSYGLYXWBWOSWTJFTQWPEIQJGOXXVSKNRNDHKCZPNCSMPIXYMVEPHORGWVYCNJMEJIWYTAIDCFZAZNKREPKIKCLXEIRIFDZRYADCMTAXGQTBNEBBHQDZZSKLPWJRFCROFMAULUJVWJBAXSNUGBNBYPPDQQLMMTULSGBGIYEJQZBLZHCOENFDQQVFMLKP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XWVHJYUVSKADVOVOJYVMABWBBVPIBGSIGEYDFQFNMTLIETGHHSFEFREDOEEISNQNYDKQUHPUWZYBETCHMEELAKVNKFPNMIUPTPIUTZIKTWEWRGHRXPSGQATNRKWUCLCHLQDYAGABZBUFYKQJWDJRYCLFCKPHQIKRPN");
    tmp_tmp_msg_0_0.attr_type = 119U;
    tmp_tmp_msg_0_0.min.assign("HIFDYSRROVMUTDOJDKDMUJWCSIXQZLZNJB");
    tmp_tmp_msg_0_0.max.assign("AALAYNXBEQTFSOJYNMU");
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
    msg.setTimeStamp(0.898381891053);
    msg.setSource(62776U);
    msg.setSourceEntity(223U);
    msg.setDestination(42386U);
    msg.setDestinationEntity(200U);
    msg.op = 166U;
    msg.goal_id.assign("CXGUHUSQTUPVEOKCGGOQGUWIRVQTEMOGARNFDSDNDBAJHPDABXAYPWLQPQDBHOKMONYTDQKWAWIINTFYKMKWAIXVPVYXVEJVFFTCXCHSABZBQWVEIUYFEOKXJTIKPOQGGMILKLYNHFHBZMJVFVNDLRFSYNR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RXDYJNRNPVBTRLCODQHGUPCWPOQXZFLDIRXEWTNHAK");
    tmp_msg_0.predicate.assign("KNLBHQKBGAOPMDDEFNVCSPBIVKMBZTNJWJOQWUWJFFJTAPHLMDBJLFOVWPUABIOUKIFYYWNXAXAMCDRIJSXIHQLTCCVGCZIZNJXOQERYZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AKGTTLOQIQXKRSBHKGBDHEJZVIKDPVZMXFCLEKOFAFSRXXLUQBLZSQRYKLAQWSMLUYWBWQTVMZXU");
    tmp_tmp_msg_0_0.attr_type = 1U;
    tmp_tmp_msg_0_0.min.assign("HIXWIPHMVKAZOIFPXJYDKOEXHNSEWPYIPKJAZUYWHINECQHVCRTQIQDSQS");
    tmp_tmp_msg_0_0.max.assign("DVHEMFREUMIOIXLLBKAORGQBEPPYKTVGWO");
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
    msg.setTimeStamp(0.30339540673);
    msg.setSource(49003U);
    msg.setSourceEntity(112U);
    msg.setDestination(26861U);
    msg.setDestinationEntity(126U);
    msg.op = 122U;
    msg.goal_id.assign("HRRCATNMFBHRTJDEYMBNPAYXQAEKVLCFPLRYRNCUVSEMIGICXUALHDGYBMZVUOVFTAOOAEDSJXFWDTFDOHQTVFQNWDBZRYKAORYBZXUJJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SBNWTLLESYQWGIGAJU");
    tmp_msg_0.predicate.assign("DOBSELCJXYWPHORVRJDCKINYPFEXMGBOBUUQUWBVVHLLTSQVZIFLSYOXVADJFSYUHZNMCTBDEERZFRTPRMHSZDXJXRSKNMTTHQXKCKYMGNVCZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DACCRPYVERXZEOKPGNQNXXWWGKSAYSDWNFGOCZLVQHDQUMTTDVDMJKYAQCHMOA");
    tmp_tmp_msg_0_0.attr_type = 123U;
    tmp_tmp_msg_0_0.min.assign("XOZSZYFUATRGNRMUXIPEUJXHIQHPCLQNRAELRCLHZMQEGLWPKKXUKFZLGQCMMDGYKZWEMBYCJAWQRNIMOQJWNPUFTAVUMUVYDQSJPRRLNZAWKGXDABQXOYGFMDLGVCMBNEIBTPCEDJVHOVKHOE");
    tmp_tmp_msg_0_0.max.assign("ZMQXLNDZAVJXBXGHQRSEWUXLXDFAAKKOPSINTWKRMEJQZNEMSJOFPQHHDLRJQBKCTXOLGSEAOKOQFHMRUUCZFSYBOZRUYIGNHPVNNPGIIZFPLHSIRCIKYTIEARNJYWWZVUVILGYDTVRMAVNLUYFSWJWEGBDXOJUTZZCAFGDTAKWTPDENGVGDBBVBLMOVUUNPMLTFHCSPDJQXMKRSQKXBBIAQLEIKCXWSWGHRWAOTYYMOTQMZJYEHCJCDFP");
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
    msg.setTimeStamp(0.873135202796);
    msg.setSource(49289U);
    msg.setSourceEntity(230U);
    msg.setDestination(60535U);
    msg.setDestinationEntity(103U);
    msg.name.assign("SKGBRHVIUKCKIXALCWXEPGAGTJDEWNJATSYCQLTGISBPSOXARXZOKDYURCCKMDHXMRGAERJRSNPOOUSAPZJKWQEXDIVPHWMZROIFJDZMOBKPQHVUNTQBILLLQVMHPIFBSWPCFVMJWTIQQRTOGQZGUYAVUCFWLREDTCBXHJURSNMTNZVUHHUTCJXFGDMYJEDLAANXSSQNLECJOZDFQ");
    msg.attr_type = 1U;
    msg.min.assign("GBEYVYJOVQY");
    msg.max.assign("SJZGWDYIULKWPKRQFOMJXFWSICTNIWVRETUKKZBTUYIESMDGVGCVKODSDVNYBNKOMCAOPLAMVQBLUXPYPASICUGBONMEQGAQXWFLWCDHZEZRYVKQGIBLEOFJXTCPYLCMTRNSAPPWEHEEBJDNTAEQDRHLTLOOXFQRPFNDSZPHILLHITNWBJOAUFMRHYHUGJUKUVIHDYQZIXGSCYFSYXAMVCKJNZFBBWXCQRZJGUANRABFEVXORHZMKTMV");

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
    msg.setTimeStamp(0.52705622268);
    msg.setSource(11447U);
    msg.setSourceEntity(5U);
    msg.setDestination(19715U);
    msg.setDestinationEntity(164U);
    msg.name.assign("BPZTFAMVBEOOARZLWGRCEFHHWVBBXWFJEXPZEDJJHYERNQIQXZXSBURHNAPAUVOTFVIBVCKORSTMPIJDZMUXSJWJTY");
    msg.attr_type = 251U;
    msg.min.assign("YGPMNWJDABVNMLKSHRQHRTKOUXUBOEPLKNGGVSHRPZBQAEYDUKLJTZWLUPBDNLBFSLGAANCCXHPEOITTZ");
    msg.max.assign("OAXWGPMDBYYVEZUBQGWGAYFOXAD");

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
    msg.setTimeStamp(0.815797372281);
    msg.setSource(65364U);
    msg.setSourceEntity(235U);
    msg.setDestination(12605U);
    msg.setDestinationEntity(42U);
    msg.name.assign("SZPCKBDYOSHPRJGZPMPYEHGEAURWCWALRPWJAAKJSBEOOHCGU");
    msg.attr_type = 77U;
    msg.min.assign("PEXTSGWLRXQVXWKTSIBCQAORNHWFSAYJLZRYVAMNSJNWISCQZIDLZURHZRKUHCPHRCTNHJUDGXYYVOOVXARXEFOICFPBLXIQFQQCUJXEHZFLTTECSFEPPUKOD");
    msg.max.assign("YAMPBVLDEJPHDYSIXRJTFFWECCYRUNBQSIIHJWCIKBYGYXCZCKNKQTKVIYJCPHUOLMDUZBZNPFLDQOZLYWDXRAGMWUSQLYJANCWUSVSPUAMMUNRXXDOGXAHLHATPOFRGKRVVZHAHSSVOSKBOIEZJTFGWKEFTHLLRRTMABGORULQTELWMWFWDYBTEEXXMPU");

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
    msg.setTimeStamp(0.825737077839);
    msg.setSource(31650U);
    msg.setSourceEntity(63U);
    msg.setDestination(26916U);
    msg.setDestinationEntity(176U);
    msg.timeline.assign("PTEGOFQHNKIYADHUNTZGIFFUAWIYSZQWSWWMJOMUZYOFSGEKMCSDJHIDDHLPGCKZNXFMPHIHTBQKQZRXMOUYSIJCIBRLKGWSYEDNLACURKQZLBEPJCUPUBOVWLYTDVFENTGJZXMHOUWVQZSDJMCFTPKXRDNMHJLRVVXAVMXLIQASRORUYPVXICADWKRWXVPLZBOGGAXOKSJLHQAG");
    msg.predicate.assign("XGNPULQNKFZBYVUNFEBBTMJMKEDWLOINIVXEZSAPHOUEQRQTUIGVQQSEZGHCZMJPGKMYARFBSFZXYIJQVFCBODPSHAJNUJSHYTRQCFIUVCTASULSBWWPWHHADGZBGMNRELA");

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
    msg.setTimeStamp(0.120676914223);
    msg.setSource(62586U);
    msg.setSourceEntity(153U);
    msg.setDestination(39957U);
    msg.setDestinationEntity(138U);
    msg.timeline.assign("GSMNVDQAZEPIMMFAUHYPXIV");
    msg.predicate.assign("AVXQUXHFCTFBTYUILNKKZYRMNWHEGPAQRMLUFKYOEYYEVWWQMTQXFOMYFEXAHMJHQYLNUMCVOIWVCSAOILOBGQRDPSCLGIWDWMCHAYEABVZREDQISQZT");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WUTQMQWFZCYGNKFGVWKUHPUDMXFCXRTEHMWISSCMLEHVQRLUZUQDAZOUGXAQPFIXZBIVYSYYVUNUBDCQQSREHYWCABDYALVJBYIVOAXFGRTMKAZGOEKBOJZGWOAJ");
    tmp_msg_0.attr_type = 92U;
    tmp_msg_0.min.assign("JQUKVQAWWNKTCYBHSTNUMAWYJPDPGVQBUXGVSLLLBFFHKWVQECALIPACRCGWNJIEHBHZLQBWIBSOVMPHTVQRPSIUFSTPGURPFXMDMUDOJRKMRAEYIRPOXHZZDIVDBOKXJHGFXRKLWYSNPZNHZFZOUYSTTAWJVGQOEUOAZDYPEIADTVNGEAIEDEHSOGNGJ");
    tmp_msg_0.max.assign("CLIYHOZBOAYUMLRGWMEEYGLAMDQQJFFSNBGVRZETQNTWJTHSGBUWLRVSEDTICRYUXNIPCZITZOFTPRDEKQSFKCXQNGWUATZNGBBKCEJKFKUXMQZIXFQWKNADPSJAILMHBMKTIUAUJMXFVEVJXKJQGBBERISUJWOIWKOZZYOJHGAL");
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
    msg.setTimeStamp(0.261745959303);
    msg.setSource(9134U);
    msg.setSourceEntity(21U);
    msg.setDestination(18587U);
    msg.setDestinationEntity(224U);
    msg.timeline.assign("APDVDBLTHKOBJRVYLOXRRFVLZAEAPHYSKOMNJOGMPE");
    msg.predicate.assign("BWJXOEPHSNDRMYWOLPYLBUVXCZFQRXRHBXWCZSFFMSGZCVRNGQDUQOTXSPKGOUDYUVCEIPWKKUWBQJLRDKNVCIZHEKTTGLMJHIYJTQOMPPWTDYVRCROSFWLEGMLVAVBMNNDQFEHEUAMIOSIJTXLHZRCYLUUIWEIQCQXAVACEVHJBNSYRZT");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UPWXZLDBHKMOEWUFLNQYYQDCXUMHIAPZELFYTVRSXIPERUKEYQITNZEHJMBNJLUZMTVOQFSOVIGIALCFNPIJPPSPAAZUWEAHVHCQREMDAYOGVWWAGITDCB");
    tmp_msg_0.attr_type = 28U;
    tmp_msg_0.min.assign("YXGXUJYRQORIACFMIMZJUSZKVWNFCDWTKMCCIRTQHMLMIWNCUGEZUXUBJMQQXBZSLGCOUGGNADBTGOWKRKNZGKWLSVKAURDITECVULQISDHOZWHEULYZLTMJHTAVESWHJDXDIALSDNNSFKFNFWFESYXPOEOOPYTAAVXRRVLPBPLYHZSFEIGTTJPAZEBQCDHPJQRBPCHCXAVVUTMJEBYVQYQMLNSMFOKPJYVWXNZJKHYFK");
    tmp_msg_0.max.assign("IJDEHRZLDVWRFZIERYPJUTZXKDBAYFOBPTOTMWWFKHWNYWXSOWCJIMQJFVLTSMMNHJBNTVHMZZAUPHAFAZSIRCNCSARAZYTXJFSEAKZLNOODSFYRBKMDKVCHSZLUSIEESVTXGVBAUBLEQTGPFKBGOPNLZECPCRWGAVUDXKGIXMGEWIALUXIPQRPOCMQRGQHGBBQ");
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
    msg.setTimeStamp(0.557120801704);
    msg.setSource(18659U);
    msg.setSourceEntity(108U);
    msg.setDestination(44443U);
    msg.setDestinationEntity(31U);
    msg.reactor.assign("RSJCQSCJJEQSMIEGBGNYYKGNOUGWWOZRMYJELGIPPNUEDXWCXALVTLXXHCZIBZMUVBZIRUNUVYSIGFAHIYEOJHYJDQEUUIYTQWBVMFQFHMALADBTJTFBWVQHGCNNEQSNHBRUWLNPWEXUTYKMOKBRMRFZPTZNVXKWFDOSAKCAMKHCRLLDPEQHGPCXCKYSVAPK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NQINYXALNFCXWAJVXMQAGYKFZZEFGFFUTMOHWFGIBJPLTAHYHTKSGZRDDSYWVATZKPQRMJR");
    tmp_msg_0.predicate.assign("MVCWIHDAZEXCJEYYQUWJKGOMVQHDPBTGZCNLZGKQJFLFFGNCLYCKACBTJFTCXSIRUYIBAGZNDJONPVIGZBXNQMFGKZKEFHSAFLJXPTBIOEPNUCZBXROZQXRJRESWAHUKBTOMZSUHKXNDONSRRTMHMIWQEFUXJIUVSRECMXYOALUPVPQYWDNKBVWPSTME");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HRAIGFZNDLBOJYDHRNIXLBYKZLTJSMTDQMVBLUTZCCEXKUVQDVKCQWGFKMIRRJDNBGTEKVWVKPHJIPOGKMTNXQYUUDWWESLLDXAQQKUFMPXQYNJE");
    tmp_tmp_msg_0_0.attr_type = 76U;
    tmp_tmp_msg_0_0.min.assign("VSCMYZAZYGIODTFISBHZDJWTRZYJDCHRRJOAHJLUNEXQWQXBVGUHRVSOQXWLLCWHNWTKABTKGNJLZOGITEMNXAXRAGUPEWPFVUQWTKYUNCVOZKJPEPLZSPHXHDIRWYKXGH");
    tmp_tmp_msg_0_0.max.assign("QJJBMIWLWARCDULPYIONKHSMRMKAXGQCFCOBHXVDHGHQHESDEYATIVLSPETQ");
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
    msg.setTimeStamp(0.434615247368);
    msg.setSource(18567U);
    msg.setSourceEntity(38U);
    msg.setDestination(3865U);
    msg.setDestinationEntity(122U);
    msg.reactor.assign("ECXGTOCDYSVPFIPFVWZBVHGUIGQEQTTJLMBDAYFHONYMRCZRYQDUNNAWBFBVOYZAPCBICKQADNWPKIAMQLFESLPUJQRAYYITXPEWAVPPBY");

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
    msg.setTimeStamp(0.832242910688);
    msg.setSource(632U);
    msg.setSourceEntity(75U);
    msg.setDestination(1707U);
    msg.setDestinationEntity(233U);
    msg.reactor.assign("FEVIPDWPSCHIXJHMUKBFCEHTSPAGFQDEMUIWSSLNLJLRJWMYJPCQGLQZKDXDZCYKVMYCYRBDRNZBLLZNUILFAOJVRSUCETFISDXZVIJPUKBUEYTYGKOTXFUGTDXTNVGMIHOBHVMEJHQEJAMHATZQUPYMINZQFDILUCQRRKVNARRZHKQJNXXGOXUHSBWYZJPXMGVXWSYVZQWCPCA");

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
    msg.setTimeStamp(0.105726487104);
    msg.setSource(14070U);
    msg.setSourceEntity(211U);
    msg.setDestination(12048U);
    msg.setDestinationEntity(221U);
    msg.topic.assign("ALPYPAECIFSOOJENRDVSCXZLCHSQSHEQKZDOERJFWABDFJWPMQQRIMHJHNXWVSDITWTMEHZRCMVIOVRAVBXGOXUGGSFNWVCKFXGXZPYFWRUBKALXTDAUNHJOCNHLBVCNDHPZZTDKGAUKDRVYYTMYPYVJRVPOLFNNHFFPSBTACXBZYBFWCKIYMQXOUYILTEBAWDZQYHJZSSU");
    msg.data.assign("CDRNEXILAIXUALTVMFHOUZRFYRGEJAJUEZDKBHOHWVQFASMMOPYKWBJUFCORHULGVWJOZGHAUCANDFYLYQVQHYJWOKNTSHDYZQKTVLKOXFPPEANCNTERUWXQGDOBXHEUAKPGJLAILHNZSJREYMRSOL");

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
    msg.setTimeStamp(0.785307486391);
    msg.setSource(52460U);
    msg.setSourceEntity(19U);
    msg.setDestination(26836U);
    msg.setDestinationEntity(242U);
    msg.topic.assign("IZCEJXTZLEHMXVDRSQONGECKQPKXZAQUHZMETHGFJDOMVBEVIJOAGYKCJGVUEKIJQHPPCTBFDYPRMCJQNCYICTAUQQUBSVYBMHTJAPPXNRRPWRSYGOSHDNGZBCXKBOGUTWHWFWFTLCNOSORZKDTAGDPJGIQVWVNKHVSRLULKU");
    msg.data.assign("MQIXTJJLHBRNDWMBUAENENKGPKXLHIVWZQNBW");

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
    msg.setTimeStamp(0.687351849898);
    msg.setSource(28973U);
    msg.setSourceEntity(94U);
    msg.setDestination(56550U);
    msg.setDestinationEntity(53U);
    msg.topic.assign("BKZRYPINLDJHHJVUCMPVOUKRZTJASLWCREQQWRFPENNDDYJBYMLGNETOYOKXOHOMIOFGZVMXNAHDWWILHZYKGRSZLNTUSQKUEDWOAQFCSMHTSRZCTGESBLETYNDVTATIQCCWKKYXRMEZLLRPIHPPOWAETDPMVBRYDGBFFYSUPSDJYNDMBOEJIANJQXVNGJXQCXFZMJVCXGPSSGUBMICUFZW");
    msg.data.assign("ERXLOSAKYYYBRRLWEPTJSPIVWHVMZCKFFGCUQOZTEBUFIYCJUGHTKGEGQXCGENWKSCWQIHVVUVHZXLEQNSFJHYOBZROODOKCFMKGHDJMTUDYQNJGZE");

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
    msg.setTimeStamp(0.427061205647);
    msg.setSource(51270U);
    msg.setSourceEntity(219U);
    msg.setDestination(22881U);
    msg.setDestinationEntity(164U);
    msg.frameid = 15U;
    const char tmp_msg_0[] = {92, 2, -39, -106, -45, -62, 28, -41, -47, 39, 70, 104, -34, 80, -123, 115, -95, 77, -11, -27, 0, 57, -98, -19, -92, -80, -112, -120, 106, 66, -95, -93, 87, 83, -84, 107, 124, 93, 34, 5, 103, -23, -83, 106, 77, -85, 123, -38, 56, -64, -111};
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
    msg.setTimeStamp(0.903016366064);
    msg.setSource(7510U);
    msg.setSourceEntity(55U);
    msg.setDestination(59089U);
    msg.setDestinationEntity(149U);
    msg.frameid = 112U;
    const char tmp_msg_0[] = {-58, -127, -101, -12, 14, -82, 63, 108, 121, 68, 48, -89, 86, -123, -30, -81, 123, 78, 85, -108, -43, 84, 37, 6, 9, -12, 51, -125, 34, -17, -2, -114, 24, 82, -124, -96, -21, 39, 83, 58, -5, -6, -38, 67, 106, -87, -41, 88, 35, 126, -5, 23, -54, 57, -102, -74, 35, -54, 21, -21, 16, -111, 100, 72, -112, 73, 118, 51, 114, 59, -11, 13, -7, 25, -101, 70, 115, -70, -26, 14, 39, -62, -127, 17, 69, 45, 85, 69, -114, -106, 20, -97, -3, 31, 112, -114, -90, -34, 113, -88, -122, -54, -32, 5, 31, 111, -18, -40, 0, 87, -26, 73, -43, 63, 41, 70, 7, 15, 90, 87, -20, -123, -47, 95, 0, -85, -82, 68, 13, 92, -67, 43, -60, -59, 45, 4, -126, 30, 84, 71, 42, -38, 30, -24, 86, 14, 19, -13, -69, -104, -16, 6, 103, 78, 9, -18, -32, -17, -4, -80, -5, -13, -124, 99, -87, -4, 107, 94, 69, -97, -113, -43, 46, 7, 53, -78, 77, -55, 8, 24, -114, -32, -87, -71, -38, -48, 103, -59, 113, 0, -30, -118, 14, 30, 39, 72, -117, -72, -118, 3, 3, -83, 95, -62, 6, -91, 47, 25, -81, -71, -1, 87, -36, -24, -52, 10, -90, 50, 110, 84, 56, -85, 90, -51, 25, 78, -97, -15, -81, -104, 44, 96, -128, 44, 30, 11, 65, -78, 58, -99, -98, -47};
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
    msg.setTimeStamp(0.708802479297);
    msg.setSource(13841U);
    msg.setSourceEntity(45U);
    msg.setDestination(46608U);
    msg.setDestinationEntity(226U);
    msg.frameid = 183U;
    const char tmp_msg_0[] = {-9, -4, 27, 114, 22, -40, -67, -99, 77, -99, 96, -120, 85, 108, -61, 74, 94, -99, -42, 53, 17, -24, 81, -28, -80, -91, -80, -92, 116, 102, -38, 92, -10, -20, 99, -14, 38, 98, -29, -61, 63, 77, -124, -20, -62, 68, 60, 63, 110, -41, -91, -110, -50, -118, 104, 57, -12, -72, -88, -113, -72, -18, -65, 52, -64, -115, -91, 57, -128, -101, 25, -92, 93, -30, -92, -80, -70, 3, -76, 24, 96, 25, 27, 44, -51, -36, 45, -80, 115, -39, 85, 104, -34, -71, 70, -38, -18, -42, -71, -100, -104, 108, -61, -87, -5, -117, -80, -84, 27, 93, -86, -103, -45, 45, 111, -127, 99, -29, -65, -124, -92, -35, -63, -19, -77, -123, -75, -100, -26, 7, -46, 107, -83, -95, 94, -4, -18, 49, 45, 48, -33, -97, -22, -48, 63, 53, 106, -43, 123, -120, -127, 100, -52, 33, 27, 62, 15, 28, 76, 78, -114, 1, 70, -63, -56, 21, 15, 58, 34, -72, 70, 86, 83, -61, -81, 106, 37, -44, 30, 69, -18, 101, -86, 8, -126, -91, -111, -32, -31, -93, 75, 14, 54, 17, -7, 55, 105, 122, -9, 37, 53, 62, 106};
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
    msg.setTimeStamp(0.504614132062);
    msg.setSource(8142U);
    msg.setSourceEntity(200U);
    msg.setDestination(299U);
    msg.setDestinationEntity(242U);
    msg.fps = 161U;
    msg.quality = 172U;
    msg.reps = 157U;
    msg.tsize = 146U;

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
    msg.setTimeStamp(0.646933712287);
    msg.setSource(50549U);
    msg.setSourceEntity(96U);
    msg.setDestination(41390U);
    msg.setDestinationEntity(165U);
    msg.fps = 244U;
    msg.quality = 220U;
    msg.reps = 192U;
    msg.tsize = 43U;

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
    msg.setTimeStamp(0.157938445097);
    msg.setSource(24771U);
    msg.setSourceEntity(118U);
    msg.setDestination(60319U);
    msg.setDestinationEntity(227U);
    msg.fps = 90U;
    msg.quality = 244U;
    msg.reps = 141U;
    msg.tsize = 30U;

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
    msg.setTimeStamp(0.370512233993);
    msg.setSource(12679U);
    msg.setSourceEntity(35U);
    msg.setDestination(41863U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.192147656118;
    msg.lon = 0.816734809723;
    msg.depth = 231U;
    msg.speed = 0.52060972107;
    msg.psi = 0.671777976471;

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
    msg.setTimeStamp(0.746041763351);
    msg.setSource(31957U);
    msg.setSourceEntity(125U);
    msg.setDestination(59312U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.946244613449;
    msg.lon = 0.926709269977;
    msg.depth = 19U;
    msg.speed = 0.151452580738;
    msg.psi = 0.532943788889;

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
    msg.setTimeStamp(0.534666766289);
    msg.setSource(51949U);
    msg.setSourceEntity(243U);
    msg.setDestination(46883U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.153714087202;
    msg.lon = 0.150209354027;
    msg.depth = 150U;
    msg.speed = 0.0107867217759;
    msg.psi = 0.186436919152;

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
    msg.setTimeStamp(0.843983229318);
    msg.setSource(3918U);
    msg.setSourceEntity(25U);
    msg.setDestination(17167U);
    msg.setDestinationEntity(148U);
    msg.label.assign("HFZIVQWNSSVNUWL");
    msg.lat = 0.730628507718;
    msg.lon = 0.544928840948;
    msg.z = 0.231211927934;
    msg.z_units = 245U;
    msg.cog = 0.738628930104;
    msg.sog = 0.104231037111;

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
    msg.setTimeStamp(0.314573353962);
    msg.setSource(49967U);
    msg.setSourceEntity(135U);
    msg.setDestination(54055U);
    msg.setDestinationEntity(159U);
    msg.label.assign("WXNBVWXMCPONYTAQGWRQSNWZVIPSKPHZFCPLKEQSJLOIQCCZUTBQHGFXBABDZFFZXTPGPYYNEUUXWGAQCLMBNKQGXDZRGYCKEANE");
    msg.lat = 0.620938762088;
    msg.lon = 0.551222156911;
    msg.z = 0.0512453767583;
    msg.z_units = 36U;
    msg.cog = 0.244869387991;
    msg.sog = 0.17514952038;

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
    msg.setTimeStamp(0.065728081065);
    msg.setSource(6933U);
    msg.setSourceEntity(30U);
    msg.setDestination(41554U);
    msg.setDestinationEntity(191U);
    msg.label.assign("UGDYLUDLDOOUPBIMXOERVTKUYZJZIJKRNCAXNXUYNNDLGKXXJHPOARQRSQHZRCPEJLSDPQGEBAGCSCWBJVNNSEECVBSWXWJDILNXMCYYYAOTGBKEUOZMHUDIUITPOYRBFTLMOZAWEAPYHHGBEWHFNQJTVSMRIWFCVMFXBPGTQAQTMCKTPKZHQTFMFRWDREEIHZKQFQJ");
    msg.lat = 0.569559458205;
    msg.lon = 0.320344523193;
    msg.z = 0.725256417411;
    msg.z_units = 20U;
    msg.cog = 0.21720712895;
    msg.sog = 0.236986588618;

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
    msg.setTimeStamp(0.384341085153);
    msg.setSource(24960U);
    msg.setSourceEntity(220U);
    msg.setDestination(39905U);
    msg.setDestinationEntity(143U);
    msg.name.assign("AGKMVAXHRXIZLRJECSZXILIGTEFZSPWCRMURIFBKOINTDFAGNZNNBBSDDOQGMDMZCQLRQLTKEUDWWWKHNYHEIDAANEBPQUSEOHARZRLTPPIPUYQYCTUZNXJDZXIHEJPOWSFVTUHULFYLKOSGQUPJCMBJDSBQOJZMUJOQEISHCYOTAVYCYBJYTUMBPBLYE");
    msg.value.assign("VFKIYAJFLJVWGPAKNASAWCSYXUASTWGYUCNRTDMMEMXWRJSCZJURQVSSOASTKGWTPNJNYQBEAUIGCUEMVUHPLKRYGTMFOBKCORQPMGNHDLLDZHULTLDNRLQXJIEFPYGCJNOMQYXJSEGVQUIIWRHPTBTFSKDAAWHXDYZEVIFMXYUECBRXOJBIOZNWCKKFIZJXOCUGHTKDLPBWVVZQANLKOWMNDPISPVTLOQEIBZHRHE");

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
    msg.setTimeStamp(0.816473401647);
    msg.setSource(26494U);
    msg.setSourceEntity(195U);
    msg.setDestination(61238U);
    msg.setDestinationEntity(69U);
    msg.name.assign("EXSATIYGBCCYJIEFUJSKNGPTBLNBJFCVZKQYWCDTATHWGDW");
    msg.value.assign("CODOKEGUDWVXIQWQWHFMTPVHLRPVVNUEYAPMIFKPSNBSPQDWZLCMIJQVFSGFZXYIKUKFQCOJOHWBHLKSEVGPMXANGFVHTSWYJRZYHWDAOOZBTZGFMUNIOBESRJIASGJUXYQUATGZANEDLANYQTXRJBFKKNDLOLPGODURXMMCGLMUTQQOUCAYQCDXTNWIZ");

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
    msg.setTimeStamp(0.0408342584746);
    msg.setSource(52713U);
    msg.setSourceEntity(26U);
    msg.setDestination(32577U);
    msg.setDestinationEntity(31U);
    msg.name.assign("YSVSACXMQNZZDDUOMLJJTBRLLNAFYVXHOKTDMVAAUOUTCWFDGGLDYQZZEQFJPLGYVYKNYSLVAFJBMSXHTIKWWCUQSOBCGVWZCZBPYWTADGIDKJHMEBCTQNQIESSLTIHIIBAPXRFVMCZHUQWKBGWKJJQXZOWJLAPQELFHSNXTZNDAPFZUELGNNOKBXYPHMXFEWPGRYIDOP");
    msg.value.assign("ABODXDTHCRCXDRRSEJAZVESPSAWCIPBLKBCIXJDYPFGJZUNWQZVBMMUZGAKMKTXLPNVUWDUMIUMKNGVEWQIKTRXLMRORQRQFKSUEAPOAYUSJFMLYJFVLFNEHKYZCGEITABYESXNOVLLFXBFTCPQAYXJGWWHISQWLRDWMITREPJPVNICMWHBHZVKECBGYNKPXOTSHQMOZFTGZJZDDCKPGIZODVHQHEGNOFABLUCTBJTSDX");

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
    msg.setTimeStamp(0.19066368505);
    msg.setSource(24926U);
    msg.setSourceEntity(72U);
    msg.setDestination(30649U);
    msg.setDestinationEntity(220U);
    msg.name.assign("YMJCQIXYCFLFMLKWEQUETYSOQEZIEGKSQIRFDKCVKMDZRCXAZVNGHWXAUOBOJJUNXDFWHOSAZXFEBTPSCXFUMXTUCXMTKPYAHIGIQUYINZYWALIHVUPJFXMKFRTNXBBVRMBGDELYBJPDPBZBODVPHGBHKNMUZDHEHDONRITYPJWEOVPEPNCONRSHTUA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RJTZOPCLUGQVKDRFCGGQLXHAIBGHEOJBQIPCXTMWVLYZO");
    tmp_msg_0.value.assign("TTOVLELILZVBCRAQDFOYYHNLNPSNLBRGNSMPTJLLXIHONPHWEJGKGXQQJCAXEXYYIZYKCVOEGSWHWFOZEZPSMKVQJQXHJXQFVPTZABKETHAOWHADZUULKJDFWDXGZTNYRWTGFUPCCYORBPWUMZSPUUAAKMSEGAXHXKVYSGLZMHNIKIITXBUIYDCSKJGDOQJAUYECJBELFURBKCQZVNEICMMBVFADRMPGNDCVWFW");
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
    msg.setTimeStamp(0.254272023191);
    msg.setSource(57143U);
    msg.setSourceEntity(149U);
    msg.setDestination(45938U);
    msg.setDestinationEntity(28U);
    msg.name.assign("IFWGCLQMIGVLDYMXZOCDFWSCTDCMMKNUHLODGVYXUPAZNVOJKBBJZTXWFYB");

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
    msg.setTimeStamp(0.975777408508);
    msg.setSource(6017U);
    msg.setSourceEntity(85U);
    msg.setDestination(35528U);
    msg.setDestinationEntity(31U);
    msg.name.assign("TJVZCASEZKWDQHJKHSYFMUROQLYFIURAHJMHGUNXBDTLUVQTFXLEXRNVCAGVQGNSXHZSHFTSWTIHPQIYPGUYOULKKFTTUIAAOBXVEPBEDBVOWJVYGKQXZRNFRUCAMHLJEFGKOWXACNDWKTYPMVRQJBBNEZRCSTSGPGUOBESJQOFRSJPMZZOFWGMIQYCEJADIAEVCWDOLZXNBGYNEPOWPKBVLMIUQCAMFXRLNHCLKJPWLWNI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EDLCJZGSGNHWRMOPDNVAGPTJUDUGOIYRKNYAEITFBFXEGCMNSUDYVRSXPJDHARTNCRBBIKCRCTRTKVSSBYGRLWWVQAAHLJJQDCRITNMNPFOPQZXKJKCVYVUTKFEVWABTUFEBJGOWLZQWAMCFUUOGIVEEHWJGFDHZASDMHVKHQYFXCZXZPXPQXBBUXLPNSQWGWHAZKDZ");
    tmp_msg_0.value.assign("AGOWXCPCGATJYKRPDMRZDAFGFCEISGWEQPJPAYEXKENUDUMISOTOPHLYODKQDXFGLXYGVTYECLVJDIBNILHZXEFLUHFHWXMHQKCKZGTSOYYTDNPQSSGDAXUNBFNNK");
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
    msg.setTimeStamp(0.925716668281);
    msg.setSource(44066U);
    msg.setSourceEntity(9U);
    msg.setDestination(35066U);
    msg.setDestinationEntity(46U);
    msg.name.assign("MNNNSPCQQGLREQQTXLXSRUTDDIMJBQMGPFHKAZBRPZNOBKFYJYIHGULCMSLJXYVHRJSPYQOPBZGVCDCKIYHRJESAFFGJIDAUKEOMZTTLWQWFWLZNRJEVVQANMKCHXVOHPQUTRUMABOCSWGW");
    msg.visibility.assign("ZDPMIDQAJNJKMOXRGLHVUFSISQGHPNDSERAWMVDPAZBWXAKHXAIXMQQMZRNIATLUIH");
    msg.scope.assign("DPYWZIODKQWPBHSHORQACOKRNUIBYOJOKRNKYRCTLAPJEQWXNAAIMFJOZLZCPTGDXBDIMFFOTHCSYHIGQPRLHTRYLLXPHYJASXBDVXUOQXIIWCHNQTEGUUKXVNBCREEDPMVNBXQECOJRMVJBJSFWWSZJLWVKTATENVV");

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
    msg.setTimeStamp(0.642204826461);
    msg.setSource(48698U);
    msg.setSourceEntity(174U);
    msg.setDestination(33185U);
    msg.setDestinationEntity(147U);
    msg.name.assign("APSCOXTKTHDYWTXOPNLKSPUD");
    msg.visibility.assign("NVBKWNDAZCZIEJMOJIJEHPHXRJVIWLGRAMZUHATDJCPUNFFHNEQIJVPWRKRDYPFZECTAPTB");
    msg.scope.assign("SYYACTQKIPXSKPTFUQEIUOVOZAWLZDEVCPKDYZCHEWGTPLSNFZHQQTEMPZJXTKLUZIGDXXYAZGBBSULYIOERNWYNETKGZCITOBLHPUFHPNGXOHYOPJHBRUIEFURQARDJATMVJNRLEEBGFCHLLIGVKSZVXMKWWKTLKUWQPEDDROQDSIJSVTJBDSH");

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
    msg.setTimeStamp(0.512863743479);
    msg.setSource(24619U);
    msg.setSourceEntity(72U);
    msg.setDestination(39297U);
    msg.setDestinationEntity(189U);
    msg.name.assign("GKBXWUBJRXFDSLYUUUTUEHVRFKRSPYJKDFMOHTYYAZECTZOSVQVPCRGUAVLPGQHATNQSFEOZOCQIXFTSKWCZNEAVNFMBZIAGRAWMDCEOVKDYJUDYZNXWGAXCFIDRIBQGMSLHWVZTCODYBEHFMIOCLWQLWGELMWOXRSBPSCJ");
    msg.visibility.assign("LWQAKVFEBOKDEEMZVQLTPFAXTLNDBXYLFQBGHWNZAIBAYYWZSMIYGEJCORFNYZKOCWJORXTFXDNTPFLGDMGHLBSHAVUQTJMU");
    msg.scope.assign("YOLVIQGBOHXERXYYWDJUPFRUWCHRMSEOHGZBMCVONLYFXJJRBJANVUSKRYIPMHDRIJAWCPTFWATXVMKGGKTWEMKZBDSALRGLEJUKQGIMAVWUGIZUHEQCCIWPNQGMNKUZL");

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
    msg.setTimeStamp(0.0791012932264);
    msg.setSource(35069U);
    msg.setSourceEntity(168U);
    msg.setDestination(35531U);
    msg.setDestinationEntity(163U);
    msg.name.assign("TMIOYPNUKFYHYWCDKBUJCNBZLJKTGWXDHJOHALMSDRDQVQCULFQPIJB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AVLXBAJUMZEAGECWFYZBGEXA");
    tmp_msg_0.value.assign("TLCBARXXOTXKIAWZXKEGFFJOAPYTAVBEJRRUYSYLWUWNSHJABKXAHQNNJYMQNTIYHOOFLMMCWNHZCQKTHPRLUNTSECVDDKHSPZDFELKEQGALVBKDGJ");
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
    msg.setTimeStamp(0.290403516176);
    msg.setSource(36179U);
    msg.setSourceEntity(187U);
    msg.setDestination(13383U);
    msg.setDestinationEntity(132U);
    msg.name.assign("TAFRWPDRTJUZFIEBPIJEOXAEVY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LDYFNGYMXPCNDROYYKGPODNBYDFTVHUMWLAARWINSRPDSFESFVFEMLBDLYEIFHOLSJZIUJEVUJERIZZGDEQJXBWCAXVWKNMEMJICHKXWILMOBLBOKCQHIXDASFBIAWQAGUZT");
    tmp_msg_0.value.assign("SOHVFTBOYRDBJYQDFPCUWPHINWLKIHVAQSWJNTXGAEVLYAGQVPKDURWIMXMVVQIGEDLAPKNJQRXXEOMZNZLMWVSQEPUVCGAUUFGLPBWDIGHFRGHTTFJBRKOMYNUMBPINCZZMLTAPAYJUODUJE");
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
    msg.setTimeStamp(0.18184967711);
    msg.setSource(1602U);
    msg.setSourceEntity(66U);
    msg.setDestination(60991U);
    msg.setDestinationEntity(81U);
    msg.name.assign("DWPBDECQYDKSJGCCNGZLJLXOQSJAIHQEMSTWBEMUANQZFDBKUWRCVPNARLZQEOOLDPSRHGMIZOEOPJRIUERO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XCXPUYJOBRZFPTODPXLMDZPSJRMVONUX");
    tmp_msg_0.value.assign("DMRHZNMOVSNSROIRRBNFPVNXESMTNQKCZTGFVWPYAAKRVNWTSOIEIPHSTDDK");
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
    msg.setTimeStamp(0.362991114756);
    msg.setSource(65183U);
    msg.setSourceEntity(70U);
    msg.setDestination(31851U);
    msg.setDestinationEntity(175U);
    msg.name.assign("GCSLQFXOHAWNUAGFUURCMEKKLXCPTLGEXDIQVOGERIWIRERMNWKSBVNUQLE");

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
    msg.setTimeStamp(0.332746085669);
    msg.setSource(56342U);
    msg.setSourceEntity(122U);
    msg.setDestination(5062U);
    msg.setDestinationEntity(210U);
    msg.name.assign("TZMXOCPCVUJTYDIUREEZHIHTNXAAZWMUQYXIJPZMVWREOTLHDMZFORZBJRMYNEAAODGJBONDSKNKPOLLBADBPIMLHSGDWHMYWFREPTOGRSYECFNKWGKZUOXYJBYNOLAFWVDSFEVJXXHVHEHQVDZTIGQWMYQUTVVBFPPPATLMSSJXTVKRYQACFSBSLRIUEJKNGSWKKUDNFBIUYXGPENQCWXXGHGRKQQLUIIRKM");

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
    msg.setTimeStamp(0.9921564881);
    msg.setSource(57977U);
    msg.setSourceEntity(210U);
    msg.setDestination(29130U);
    msg.setDestinationEntity(29U);
    msg.name.assign("AKRHUYWVPLIAYECHKJGEHDGQVKQZOSVADXLQNNMZ");

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
    msg.setTimeStamp(0.443760039795);
    msg.setSource(20442U);
    msg.setSourceEntity(50U);
    msg.setDestination(50932U);
    msg.setDestinationEntity(218U);
    msg.timeout = 4032181476U;

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
    msg.setTimeStamp(0.646353087037);
    msg.setSource(31531U);
    msg.setSourceEntity(48U);
    msg.setDestination(7334U);
    msg.setDestinationEntity(20U);
    msg.timeout = 1935622599U;

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
    msg.setTimeStamp(0.648336168325);
    msg.setSource(21226U);
    msg.setSourceEntity(239U);
    msg.setDestination(12453U);
    msg.setDestinationEntity(91U);
    msg.timeout = 230163926U;

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
    msg.setTimeStamp(0.859566887301);
    msg.setSource(28368U);
    msg.setSourceEntity(33U);
    msg.setDestination(26127U);
    msg.setDestinationEntity(11U);
    msg.sessid = 2714072880U;

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
    msg.setTimeStamp(0.419633490474);
    msg.setSource(59132U);
    msg.setSourceEntity(235U);
    msg.setDestination(56266U);
    msg.setDestinationEntity(41U);
    msg.sessid = 396866937U;

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
    msg.setTimeStamp(0.697747304776);
    msg.setSource(18599U);
    msg.setSourceEntity(248U);
    msg.setDestination(36448U);
    msg.setDestinationEntity(40U);
    msg.sessid = 2546019513U;

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
    msg.setTimeStamp(0.107699553067);
    msg.setSource(15695U);
    msg.setSourceEntity(224U);
    msg.setDestination(33573U);
    msg.setDestinationEntity(21U);
    msg.sessid = 3770264153U;
    msg.messages.assign("NGZZOZJWJFMWETHRUKTXGSYSRTPKIAGEALEVNVTIEHEGQVORKFFMPUJTCXJAMJTNQVCCKNRXLBSCBDSUUVJLILNZUPAZRKIFFWOYRALFYMGNHLPJSDPIJG");

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
    msg.setTimeStamp(0.528569945285);
    msg.setSource(62454U);
    msg.setSourceEntity(241U);
    msg.setDestination(4608U);
    msg.setDestinationEntity(122U);
    msg.sessid = 138968067U;
    msg.messages.assign("SDAQLIMUUCPRDSYNFMLVIOOWXSQCGHSZFETWEGPVBHBQVZRUUUOEUUGELNMJKAVLMHOJRBRWQZFHQPWRABIMKFMVRNKLHJDIIWCCIXKWXAZIMCFXJGZLCFJRXPVXHKUWWNXXSJKGEVOUOGGTPYLJQNOUTTSYPQTATNDOAJPCYMPYZZLKIFYDGGEEVNYCETZXABOOBIMQDFQDRAC");

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
    msg.setTimeStamp(0.322092076312);
    msg.setSource(35539U);
    msg.setSourceEntity(92U);
    msg.setDestination(56994U);
    msg.setDestinationEntity(116U);
    msg.sessid = 668438910U;
    msg.messages.assign("LFYTWFTWOFAUMCLUXSAPSQMJXKAHJQMIEGTRXUIMICTIDYJFPTEJLZZHOHPPTUCYQRTXRSHQKAENAJEGNFSNCDMHLVENDRPFILEKQQUQLIEELCBADHWXKXSFQDOBWKINIFVZZWVWSHGRJGD");

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
    msg.setTimeStamp(0.0721132369628);
    msg.setSource(1453U);
    msg.setSourceEntity(74U);
    msg.setDestination(34524U);
    msg.setDestinationEntity(117U);
    msg.sessid = 2917423479U;

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
    msg.setTimeStamp(0.878344169441);
    msg.setSource(59144U);
    msg.setSourceEntity(231U);
    msg.setDestination(41890U);
    msg.setDestinationEntity(171U);
    msg.sessid = 1782188157U;

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
    msg.setTimeStamp(0.973705597835);
    msg.setSource(50692U);
    msg.setSourceEntity(31U);
    msg.setDestination(8159U);
    msg.setDestinationEntity(145U);
    msg.sessid = 550014860U;

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
    msg.setTimeStamp(0.264312370001);
    msg.setSource(13327U);
    msg.setSourceEntity(186U);
    msg.setDestination(7319U);
    msg.setDestinationEntity(236U);
    msg.sessid = 973657143U;
    msg.status = 94U;

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
    msg.setTimeStamp(0.250172357251);
    msg.setSource(62259U);
    msg.setSourceEntity(91U);
    msg.setDestination(14165U);
    msg.setDestinationEntity(122U);
    msg.sessid = 2870690938U;
    msg.status = 92U;

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
    msg.setTimeStamp(0.926676152126);
    msg.setSource(37121U);
    msg.setSourceEntity(247U);
    msg.setDestination(35715U);
    msg.setDestinationEntity(122U);
    msg.sessid = 1930764417U;
    msg.status = 227U;

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
    msg.setTimeStamp(0.772292072503);
    msg.setSource(47395U);
    msg.setSourceEntity(150U);
    msg.setDestination(25628U);
    msg.setDestinationEntity(254U);
    msg.name.assign("FNFEHOFACRDKTWZDKQWIEBIBYRYTYNWJPJSQJYHZLPMEQUHTRERLJEJCUZLBXNSTZINGOZWXTEBHPGKMDSTLXNJMLYPFVMNGQAISKCIWDXUVZOSPGVWAMKZXBODCHOVXQDFEUNVZQBRUZXSMPWTVOAVAAMRNHYGCQYYMGLCJRPIKIADFIQKSSEDRXQJLVDOKPC");

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
    msg.setTimeStamp(0.442340840367);
    msg.setSource(20728U);
    msg.setSourceEntity(34U);
    msg.setDestination(20652U);
    msg.setDestinationEntity(143U);
    msg.name.assign("CMTGWMNZCUWRUUAIVYVBDIPLZPLRBNSMQLZBWBCOHKAG");

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
    msg.setTimeStamp(0.0915580147374);
    msg.setSource(8674U);
    msg.setSourceEntity(203U);
    msg.setDestination(62121U);
    msg.setDestinationEntity(163U);
    msg.name.assign("WFKEHJLSGUIUBWMC");

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
    msg.setTimeStamp(0.344211795013);
    msg.setSource(23382U);
    msg.setSourceEntity(243U);
    msg.setDestination(24145U);
    msg.setDestinationEntity(156U);
    msg.name.assign("QLFGGBREHHULAECGTJBCBVWVVLMFRTZDWUJWKNUQTUTHXFYTFRYIDFDGBCXWDCKHJWZLQMDIHLANJUAZDPYOQSDKRIJGPWKNTODAEVGDHMOSXXMKNGNRZTYLMSKJJLWLJLWPBANUYOQKYBESBMAKQMSYSACQVPOYPHIPLWICYVXPPKOZRUBFHMU");

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
    msg.setTimeStamp(0.787164024513);
    msg.setSource(24762U);
    msg.setSourceEntity(94U);
    msg.setDestination(62864U);
    msg.setDestinationEntity(146U);
    msg.name.assign("KNWEGJIKRTEYZUQDUMQLBOLMIDRSJXYLSZZXSGFMTRWGAWWXQWDYPJKHYWRVUKVGSCPNCBPZTXDOHMFCKUGIAYSXOEIFROPVXUCBQJPJRDNNGOILOHNHMOCXLPADPWHMVAGNZFBTMFZNSTHQQKLDLZXPBHNKOUEEQBQAAGTCZEUBHTFCDKCOYTR");

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
    msg.setTimeStamp(0.337098211252);
    msg.setSource(29876U);
    msg.setSourceEntity(103U);
    msg.setDestination(401U);
    msg.setDestinationEntity(145U);
    msg.name.assign("NEOZATWZSDQMSJUKZZTVMGHMUQWLVGOQSCGSZWAXDDJCVMBTDUFMRNGJKFAIXT");

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
    msg.setTimeStamp(0.0356353678911);
    msg.setSource(49568U);
    msg.setSourceEntity(162U);
    msg.setDestination(38943U);
    msg.setDestinationEntity(39U);
    msg.type = 199U;
    msg.error.assign("KPNDCOVSOMWURALCGJALLAPFZFRNTBQOUMMDURGQFWLZDBOHIKQRTJFERZIHGBWJPBVMCHROZNBGNEOPAFPJKFAXBUTJYFMXXLWKSUILIEHILBWSRYKOEWENCVBYYDEJQPEGXCDLTPEDLAQSMAWKXWYTSWXAWYKSUYDSHDTTNEVSQUGHGJZTMCNDHCVIGXJCVTZCRXQZUBYPIGZIVIBMYKRJVKVHNXEQXQAUDZPFVQZNSAOPMHFOUIFJ");

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
    msg.setTimeStamp(0.833591120432);
    msg.setSource(12679U);
    msg.setSourceEntity(52U);
    msg.setDestination(42214U);
    msg.setDestinationEntity(155U);
    msg.type = 172U;
    msg.error.assign("PEZHUBAUKUJCSMOPKTJBCGYDNGYBAOOZGDMJJEEMCYHNTAXQCKLWEUEPWYTFQZKVMMOSUIYVZWLQZKXHRVXKLMYKB");

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
    msg.setTimeStamp(0.254478875764);
    msg.setSource(10137U);
    msg.setSourceEntity(204U);
    msg.setDestination(49380U);
    msg.setDestinationEntity(82U);
    msg.type = 160U;
    msg.error.assign("ZALZTCOVSGDCSWNMESASKVDIHPRYJTTJYLRLJOGQEQUQZVFNXQFXNCBWRUABPGOEEHKXXNLOYSAAPIFVHFQCUTWFDWTKKDQGMWMDXABCHFLQJYSPIKMRJGYMKFWKHBZHPWIMIOKBVTPPTPTNYNIXLGCZEKMQULNFUCTAJSTDACLBAWWJMVVNZBPEAVIELOYZOHBHDPDUDOJXCINIDSOQJZGMEHXFLMVUSXCIGEBRKVERYOYRXUFRNSZZRUGUYH");

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
    msg.setTimeStamp(0.90596468868);
    msg.setSource(19539U);
    msg.setSourceEntity(134U);
    msg.setDestination(34208U);
    msg.setDestinationEntity(217U);
    msg.seq = 34288U;
    msg.sys_dst.assign("OIOWCAUKQTFACUDAMBSCUOGQTRPZPCKDYJMKLZIPVHAMECGFUMXIKNJVIWBPXPSBELYGEVZKDHNYGCXMDYCJDFGRYEAWXBZZEJRAJI");
    msg.flags = 30U;
    const char tmp_msg_0[] = {78, 74, 117, 64, 10, 69, -36, -22, -24, -119, 54, 50, -98, -125, 75, -37, -80, 5, -12, -124, 101, -22, 10, -51, -40, -73, -54, -58, 96, -85, -56, 63, -76, 12, 38, -68, -61, 93, -3, 45, 19, 59, -21, -61, 59, -2, 82, 99, -33, 11, -23, -87, -15, -64, -41, -100, -115, -51, 60, -1, -93, -70, -84, -53, 25, -90, 98, 93, -37, -39, 86, 88, -101, 70, -107, 124, -77, 61, -63, -39, 93, -2, 19, 119, 29, -87, 34, -116, 95, -19, -26, 14, 10, 22, -102, 3, 18, -52, -78, 24, 37, 74, 13, 120, 61, 84, 104, -106, 49, 98, -12, -45, -44, 37, 62, 97, 33, 29, 115, -28, 120, 43, 118, -105, -48, 91, 66, -14, -117, -9, 83, -5, 29, 56, 22, -4, 71, 6, 7, -76, 51, -74, -23, -63, -11, -60, -88, -30, -2, 100, -65, -96, 0, 32, -40, 13, -72, -127, -29, 90, -118, -74, 13, -86, 61, -32, -102, 35, 84, -57, -53, -3, -107, -45, 93, -66, -16, -75, -104, 106, 28, -51, -104, 87, -120, 40, -114, 114, 77, -40, -38, -108, -74, 60, -54, -71, 97, 35, -90, 88, -105};
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
    msg.setTimeStamp(0.237309851241);
    msg.setSource(12287U);
    msg.setSourceEntity(119U);
    msg.setDestination(21029U);
    msg.setDestinationEntity(139U);
    msg.seq = 27505U;
    msg.sys_dst.assign("SFRWLAHVYZEBQCXTXYZAJFKZAJTARVIQECNFOWNODMNQUIWHSBJQEVKQPNGXJGMTRBLBPYNJLUJINPTERMDCGBJZHIUVBOEQMDBFLSWJQZVAXUPWLXYTCLNTKQLVZYYGDCAISODXKEXJRKGOTSMMSSUIROWTAZAOYKRQKPW");
    msg.flags = 127U;
    const char tmp_msg_0[] = {5, -22, -52, -115, -92, -118, 102, 100, -7, 111, -92, -115, 88, 78, -35, 94, 56, 54, 25, 23, 8, -74, -119, 53, -57, 62, 101, 110, -102, 36, 95, 26, 19, 80, -106, 56, 88, -125, -105, -30, 69, -7, -7, 7, -99, -39, -117, 62, 124, 40, -67, 90, -41, 64, -79, 122, 72, -26, 12, 107, 12, 121, -81, -30, -67, 16, -34, 63, -50, 31, -60, 35, 104, -101, 105, -1, -86, -103, -55, -122, -78, -59, 43, 115, -69, -87, -19, 113, 31, 82, -91, -43, -58, -115, 85, 79, -33, -125, 9, 18, -94, 75, 111, -24, -95, 73, -105, 65, 106, -13, -68, 11, 115, -19, -127, 62, -18, -81, -54, -85, -46, -67, 17, -83, -121, -126, 32, -80, 53, 48, -78, -38, 30, 45, 68, 36, -4, 124, 26, -4, 114, 44, 64, -65, -7, -97, 94, -96, 64, 61, 123, 7, 64, -95, 27, -70, 70, 15, 124, -68, 30, 80, -83, 66, 66, 58, 23, 117, 117, 51, 82, -111, 19, 108, -31, -125, -116, -6, -4, -32, 109, -52, 16, 99, 100, -13, -112, 25, 113, 108, 96, -100, 85, 79, 89, 29, 12};
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
    msg.setTimeStamp(0.401378334987);
    msg.setSource(62500U);
    msg.setSourceEntity(236U);
    msg.setDestination(45355U);
    msg.setDestinationEntity(1U);
    msg.seq = 39482U;
    msg.sys_dst.assign("ACMPKMANLNBDNZJRJEDPDZZGCEORVOBIUOCTVYHIDMNOUFXFNTWEJLWKIYBTVCGWUIEBBWNYXGUIQGKRNBHQQXPUGFZJYFPZOLBQDHCTWFTMYJASHIUWFCLBIXVUGCVPADEFALZMIODYPCFHQAKKKVXGVXWRQJEGRSGDYKADSTCHDSRSPCTZY");
    msg.flags = 65U;
    const char tmp_msg_0[] = {-30, -108, 51, -64, 105, -89, 100, -108, 24, 105, -76, -52, 29, -77, -108, 25, -9, 106, 30, -55, 51, -48, 30, -16, 31, 106, -49, -127, -31, -94, 99, -103, -70, -79, 44, -43, 100, 13, -126, 112, 7, 96, -72, -31, -43, 10, 5, 120, -31, 32, -4, -76, -52, -33, 106, -84, 94, -40, -94, 29, 1, -10, 10, -63, -57, 13, -127, -116, -42, -72, 40, -57, 34, -105, -64, -108, 87, -69, 81, 83, -1, -67, 99, -116, 10, 22, 28, 21, -110, 91, 7, -96, 6, 101, 125, 77, 90, 37, -8, -42, 62, 33, -82, 45, -29, 92, 2, -4, 109, 44, -29, -81, 22, -66, -116, 72, -2, -112, -56, 15, 37, -18, -118, -101, 1, -29, -23, 73, -39, -9, -8, -64, -44, -54, 121, -88, 123, 63, -73, -79, -52, -77, 83, -41, -113, -59, 27, 38, 81, 66, -61, -22, -89, 11, -57, -25, -70, 121, -10, -106, 32, -93, 60, 47, -70, 120, 102, 29, 59, 81, -104, -51, -51, 103, -9, 31, 66, 19, -46, -4, -31, -44, -11, 19, -35, -82, -45, 40, 108, -37, 35, 97, 82, 112, -100, 100, -52, 13, 2, -106, 100, -96, 16, -106, -121, 30, -51, -121, -24, 75, -23, 122, 82, -21, 52, -94, 5, -124, -64, 1, 32, -67, -120, 56, -121, 102, 109, -67, 70, -106, 48, 7};
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
    msg.setTimeStamp(0.578549747218);
    msg.setSource(47133U);
    msg.setSourceEntity(247U);
    msg.setDestination(3831U);
    msg.setDestinationEntity(184U);
    msg.sys_src.assign("BHPSHAINITDRVGCXYHSXXYHUTCESUQNKIOTIFBBTUJTOGIDANDPFDVNBJPYMVQXKOBMWPDLWMIZXWKGOMKMXAICYPWRIEARGEPLROMDWYLQXBEXURHZZKPFUQHXDNNQPVVLRFDHJECMCRJGYRABYJOWNZAZKNVEWWQWPBQGFYSTMLUFOWCYTGLCAKBTBDJHTCQI");
    msg.sys_dst.assign("LSDGAWTLSTVCNMDLYVTSKBVHMPLINOEIACYGIMTCEWBPGHXZXFNNOZ");
    msg.flags = 58U;
    const char tmp_msg_0[] = {63, 15, 114, 10, 117, -43, 94, 52, 107, 80, -37, 94, -3, -76, -59, 125, -51, -50, -18, 14, -78, -126, 5, -68, 37, -105, -93, -105, -86, -67, -12, 32, -104, 117, -94, 111, -128, 60, -50, -4, -120, 19, -78, -108, 71, 109, 27, -109, 86, -21, 33, -112, 14, 82, -34, -46, 28, -124, -103, 55, 53, 94, 60, -89, 45, -24, -38, -75, -5, -89, -24, 57, -36, -21, 60, -92, -86, -63, 30, 12, 94, 84, 60, -123, 34, 97, 13, -8, -79, 90, -79, -44, 92, -72, 60, -97, -82, -29, 54, 6, 58, 15, 13, -42, -74, -102, 64, -36, -114, 90, -19, 53, -107, -117, -8, -81, -116, -84, -103, -76, -35, 12, -17, -37};
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
    msg.setTimeStamp(0.733789920028);
    msg.setSource(50105U);
    msg.setSourceEntity(161U);
    msg.setDestination(54624U);
    msg.setDestinationEntity(207U);
    msg.sys_src.assign("WQEMKMOVICTWXGGXQOEXYOZSWOMYEYAHDSBYRE");
    msg.sys_dst.assign("DJABMJVGXUXDEZMSGAJJCMUCWPHIQRKICSGBVLFIZNYFKUIRVZRFTMVSWUTEKYBGXYSXOAMOWYNXBWJDAGVPZQWCQJYKFVJRFOOHHFXMKNQMSFYUYRNDHZZPAKSMNBAQEXQLSLYBDHSEOXCTRITKLOZWZSDRUFRUHCPLGEXLQNGZEAHKXLETJRSBHMGUCTRCUPNVQJETLIWCQPADOZNLCEGTABOYDQWIJFHVWFPDIBHTUAKVNY");
    msg.flags = 183U;
    const char tmp_msg_0[] = {18, -91, 118, 79, -88, -126, 55, -124, -106, -73, -43, 14, 67, 0, 93, 32, 34, -76, -111, -85, 56, 35, -32, 2, -36, 0, -55, 57, 97, -30, 27, 13, 38, 64, 19, 33, -62, 45, -48, -96, -118, -73, 117, 124, -33, -108, 80, 39, 38, -43, 123, -90, -14, -39, -100, 74, 110, 71, 79, -55, -62, 71, 27, -122, -47, -76, -84, -63, 111, 22, 100, -14, -123, 6, 104, 74, -56, 75, -57, 93, 94, 7, -11, 90, 109, 102, 2, 61, -7, -91, 102, -98, 36, 81, -72, 92, 107, -71, 118, 70, 15, 79, -35, 102, 37, 125, -54, -55, 29, -37, -16, -8, 26, -99, -35, 42, 94, 20, 23, -11, 25, 56, 100, 83, -53, 3, -50, -24, -30, -19, 87, 47, 49, 114, 105, 111, 78, -4, 66, 20};
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
    msg.setTimeStamp(0.035639699935);
    msg.setSource(20104U);
    msg.setSourceEntity(156U);
    msg.setDestination(53177U);
    msg.setDestinationEntity(233U);
    msg.sys_src.assign("FUZCQWLECWLLOSFNJCMTRVOVBUXDDWEOZKFKSIAORSWLPNGFYXQGCENJCZJOYPUWGAGIEZEHIYKZNPOPJCRXHQXDGMDVEJYAMDRUSBUOKTBEBOFEVKMNKXMSHAUZXHDIZRCVGQRPJLDDHFALGWTBVURWFLVBKD");
    msg.sys_dst.assign("PBPNRXFPRDEHJRQWCWJHUYXXDMUPAVWIMBMLYLEHGFPIXPCKMAAIQZMFNVQYIAKOZSQTYHHQZLSYYRFTCXELTERUGOCPTWGLKVSHCDIENACDBGSQKAQSUCXAZUMWBRTJNFYLTNBHG");
    msg.flags = 188U;
    const char tmp_msg_0[] = {101, 7, -102, -120, -17, 14, -128, 114, -82, 74, 94, 125, -97, 0, 113, -92, -4, -59, 60, -12, -109, -114, 46, -1, 88, 96, -92, -52, 94, -19};
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
    msg.setTimeStamp(0.699534590785);
    msg.setSource(42335U);
    msg.setSourceEntity(246U);
    msg.setDestination(252U);
    msg.setDestinationEntity(209U);
    msg.seq = 54671U;
    msg.value = 45U;
    msg.error.assign("SDYUBTMUCLOESCEXNPQLBLTVAJDSCGAROZTTZGUPCWLOSNVCPPBMVIQKBDNRWNQPPFLPROMJGRUEWEBEKCXBCL");

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
    msg.setTimeStamp(0.187162229514);
    msg.setSource(30162U);
    msg.setSourceEntity(247U);
    msg.setDestination(23938U);
    msg.setDestinationEntity(217U);
    msg.seq = 65347U;
    msg.value = 125U;
    msg.error.assign("XRWZUSJRGOBGDJJSIQUTVUOFHEBZYXQWUWYJOEOIRLYTLUZKSLMPFCXLZNMXTERDABPHNZSAYZLEPATOAVPEYJYBMFIEHQCQRVMYTVBDOGYMLIBKTRMUGZOGWKQLHQXZIVBESANDDFOWFDVWZFSBWEZCOATDKMFNVIGFRTICVWQT");

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
    msg.setTimeStamp(0.228344645959);
    msg.setSource(49042U);
    msg.setSourceEntity(131U);
    msg.setDestination(61897U);
    msg.setDestinationEntity(70U);
    msg.seq = 30422U;
    msg.value = 236U;
    msg.error.assign("SKUNPAOUTIKDBLLGIYWUICPYYUKWWVHXXQDCQXZDSVJELCDPGGVQAKIDNEFCVAFLBTKYDBYITSJGQKXWQIWGRBWPFNCHGFELHSRKREMKAXLVSHGWJYCDQBMYBIVWZHFYPQUUALMTNHOXVDRCTHJXQONSIDEPORNILWEABUVRLTZO");

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
    msg.setTimeStamp(0.334731986134);
    msg.setSource(33750U);
    msg.setSourceEntity(9U);
    msg.setDestination(11071U);
    msg.setDestinationEntity(5U);
    msg.seq = 43345U;
    msg.sys.assign("CONGCPFQEEVVQCBFPYDAZBLFGPHUAXEYIOHFPUWKNPQXHDLBOGFLRHZAYEQXMRRSTJXDARXVUTRXDGFNSKAMJJNPVMOSVCRLRZSFGYVNMBN");
    msg.value = 0.8031559544;

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
    msg.setTimeStamp(0.961517416925);
    msg.setSource(51230U);
    msg.setSourceEntity(131U);
    msg.setDestination(39024U);
    msg.setDestinationEntity(40U);
    msg.seq = 26947U;
    msg.sys.assign("VWKSIKBUETVQOCDXBRPAJYXTEAIGEWQHFFCBTUKGLVEHPDUJPRPQTIXGSXHZWWKAMTSSWNRQRUKMXWFZAMTWOTRXRQJEMNCLPGAMVCGVFSQAYDGLKIIEOATOJZSIJARNVPOYAZHHLYEVFABUGTLNZTHFFUNMINVYLYZWPPVG");
    msg.value = 0.384404923284;

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
    msg.setTimeStamp(0.370462560633);
    msg.setSource(57718U);
    msg.setSourceEntity(249U);
    msg.setDestination(18912U);
    msg.setDestinationEntity(32U);
    msg.seq = 13685U;
    msg.sys.assign("BHISLWEMTHNFSWQTXEUPHWXIPOGJDEWYFLPQXAXYTQXSOZDNNFPUSQKEHGBHZUFBZKMTJXHUGAMLBRTVQKBKGSIMRQOQVTWEDCRXAXFMVAZZAFIKQIKLJKEDLSIKRNLOCDYYVNRUEGDPXZUPOZYNDDUILZABAURUDMHOBC");
    msg.value = 0.165131877977;

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
    msg.setTimeStamp(0.484589368516);
    msg.setSource(59696U);
    msg.setSourceEntity(237U);
    msg.setDestination(59227U);
    msg.setDestinationEntity(238U);
    msg.action = 107U;
    msg.longain = 0.998843609279;
    msg.latgain = 0.107377768923;
    msg.bondthick = 1197036968U;
    msg.leadgain = 0.115968599886;
    msg.deconflgain = 0.248441913934;

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
    msg.setTimeStamp(0.0798289191777);
    msg.setSource(45363U);
    msg.setSourceEntity(247U);
    msg.setDestination(57939U);
    msg.setDestinationEntity(43U);
    msg.action = 102U;
    msg.longain = 0.16690270839;
    msg.latgain = 0.742340631463;
    msg.bondthick = 3601728688U;
    msg.leadgain = 0.99895971557;
    msg.deconflgain = 0.712841786422;

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
    msg.setTimeStamp(0.765162307848);
    msg.setSource(32100U);
    msg.setSourceEntity(3U);
    msg.setDestination(30982U);
    msg.setDestinationEntity(64U);
    msg.action = 121U;
    msg.longain = 0.997653723799;
    msg.latgain = 0.816848348507;
    msg.bondthick = 2943821467U;
    msg.leadgain = 0.71838109169;
    msg.deconflgain = 0.587743052413;

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
    msg.setTimeStamp(0.0123804823169);
    msg.setSource(1024U);
    msg.setSourceEntity(72U);
    msg.setDestination(44186U);
    msg.setDestinationEntity(24U);
    msg.err_mean = 0.804049759645;
    msg.dist_min_abs = 0.117557397052;
    msg.dist_min_mean = 0.367971085492;

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
    msg.setTimeStamp(0.232147294119);
    msg.setSource(43082U);
    msg.setSourceEntity(180U);
    msg.setDestination(56789U);
    msg.setDestinationEntity(204U);
    msg.err_mean = 0.296813019441;
    msg.dist_min_abs = 0.669748087326;
    msg.dist_min_mean = 0.631363580299;

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
    msg.setTimeStamp(0.638172157197);
    msg.setSource(30222U);
    msg.setSourceEntity(49U);
    msg.setDestination(4778U);
    msg.setDestinationEntity(47U);
    msg.err_mean = 0.538703324913;
    msg.dist_min_abs = 0.507193204615;
    msg.dist_min_mean = 0.105381938878;

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
    msg.setTimeStamp(0.005095393004);
    msg.setSource(24483U);
    msg.setSourceEntity(19U);
    msg.setDestination(37331U);
    msg.setDestinationEntity(5U);
    msg.action = 177U;
    msg.lon_gain = 0.278200281296;
    msg.lat_gain = 0.751406049838;
    msg.bond_thick = 0.247509072516;
    msg.lead_gain = 0.397499192725;
    msg.deconfl_gain = 0.485919570555;
    msg.accel_switch_gain = 0.692155086381;
    msg.safe_dist = 0.693645685637;
    msg.deconflict_offset = 0.383970773749;
    msg.accel_safe_margin = 0.662507679414;
    msg.accel_lim_x = 0.728715293221;

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
    msg.setTimeStamp(0.172924495849);
    msg.setSource(46106U);
    msg.setSourceEntity(217U);
    msg.setDestination(51948U);
    msg.setDestinationEntity(168U);
    msg.action = 229U;
    msg.lon_gain = 0.824847452587;
    msg.lat_gain = 0.365963198677;
    msg.bond_thick = 0.967256584432;
    msg.lead_gain = 0.12177201521;
    msg.deconfl_gain = 0.275999457271;
    msg.accel_switch_gain = 0.0870690785462;
    msg.safe_dist = 0.573562232929;
    msg.deconflict_offset = 0.947859900814;
    msg.accel_safe_margin = 0.310524102475;
    msg.accel_lim_x = 0.926481921868;

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
    msg.setTimeStamp(0.956881348366);
    msg.setSource(17492U);
    msg.setSourceEntity(83U);
    msg.setDestination(58319U);
    msg.setDestinationEntity(129U);
    msg.action = 22U;
    msg.lon_gain = 0.405677579668;
    msg.lat_gain = 0.130070780391;
    msg.bond_thick = 0.879206096823;
    msg.lead_gain = 0.903427339072;
    msg.deconfl_gain = 0.311055983582;
    msg.accel_switch_gain = 0.50335595568;
    msg.safe_dist = 0.598546729372;
    msg.deconflict_offset = 0.026152438878;
    msg.accel_safe_margin = 0.632241743377;
    msg.accel_lim_x = 0.946542935894;

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
    msg.setTimeStamp(0.614962257281);
    msg.setSource(10784U);
    msg.setSourceEntity(253U);
    msg.setDestination(20049U);
    msg.setDestinationEntity(182U);
    msg.type = 123U;
    msg.op = 33U;
    msg.err_mean = 0.889381788575;
    msg.dist_min_abs = 0.239851033165;
    msg.dist_min_mean = 0.450399733885;
    msg.roll_rate_mean = 0.246994065278;
    msg.time = 0.483257451646;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 118U;
    tmp_msg_0.lon_gain = 0.635630443772;
    tmp_msg_0.lat_gain = 0.103602698353;
    tmp_msg_0.bond_thick = 0.617759887319;
    tmp_msg_0.lead_gain = 0.995239183458;
    tmp_msg_0.deconfl_gain = 0.0202448580179;
    tmp_msg_0.accel_switch_gain = 0.487711587871;
    tmp_msg_0.safe_dist = 0.288601637961;
    tmp_msg_0.deconflict_offset = 0.242991026327;
    tmp_msg_0.accel_safe_margin = 0.872359947157;
    tmp_msg_0.accel_lim_x = 0.273790162407;
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
    msg.setTimeStamp(0.442322994819);
    msg.setSource(14214U);
    msg.setSourceEntity(249U);
    msg.setDestination(38007U);
    msg.setDestinationEntity(73U);
    msg.type = 158U;
    msg.op = 92U;
    msg.err_mean = 0.11572100161;
    msg.dist_min_abs = 0.847258301037;
    msg.dist_min_mean = 0.00731696254992;
    msg.roll_rate_mean = 0.128418164329;
    msg.time = 0.57487569971;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 142U;
    tmp_msg_0.lon_gain = 0.000318442959681;
    tmp_msg_0.lat_gain = 0.117015884431;
    tmp_msg_0.bond_thick = 0.868803190889;
    tmp_msg_0.lead_gain = 0.578726174634;
    tmp_msg_0.deconfl_gain = 0.910352419262;
    tmp_msg_0.accel_switch_gain = 0.210563858868;
    tmp_msg_0.safe_dist = 0.0466420709355;
    tmp_msg_0.deconflict_offset = 0.755491645181;
    tmp_msg_0.accel_safe_margin = 0.341915398467;
    tmp_msg_0.accel_lim_x = 0.518879089584;
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
    msg.setTimeStamp(0.868265094272);
    msg.setSource(11211U);
    msg.setSourceEntity(94U);
    msg.setDestination(1315U);
    msg.setDestinationEntity(91U);
    msg.type = 155U;
    msg.op = 145U;
    msg.err_mean = 0.102480837564;
    msg.dist_min_abs = 0.287394712409;
    msg.dist_min_mean = 0.300576838153;
    msg.roll_rate_mean = 0.666646922765;
    msg.time = 0.999417763112;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 26U;
    tmp_msg_0.lon_gain = 0.234909106562;
    tmp_msg_0.lat_gain = 0.911243576871;
    tmp_msg_0.bond_thick = 0.695195634468;
    tmp_msg_0.lead_gain = 0.963927641673;
    tmp_msg_0.deconfl_gain = 0.540348701356;
    tmp_msg_0.accel_switch_gain = 0.69096924882;
    tmp_msg_0.safe_dist = 0.779184146668;
    tmp_msg_0.deconflict_offset = 0.0377901891266;
    tmp_msg_0.accel_safe_margin = 0.323275331653;
    tmp_msg_0.accel_lim_x = 0.208619353367;
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
    msg.setTimeStamp(0.348159756733);
    msg.setSource(53519U);
    msg.setSourceEntity(141U);
    msg.setDestination(42708U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.533117876115;
    msg.lon = 0.374259281501;
    msg.eta = 3531897005U;
    msg.duration = 65088U;

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
    msg.setTimeStamp(0.122163672796);
    msg.setSource(50020U);
    msg.setSourceEntity(138U);
    msg.setDestination(4029U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.165594186986;
    msg.lon = 0.0514732644749;
    msg.eta = 3220533191U;
    msg.duration = 27118U;

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
    msg.setTimeStamp(0.645772888787);
    msg.setSource(5674U);
    msg.setSourceEntity(140U);
    msg.setDestination(57436U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.642871029195;
    msg.lon = 0.159539008362;
    msg.eta = 932776183U;
    msg.duration = 34593U;

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
    msg.setTimeStamp(0.36673780204);
    msg.setSource(33500U);
    msg.setSourceEntity(42U);
    msg.setDestination(14280U);
    msg.setDestinationEntity(43U);
    msg.plan_id = 35279U;

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
    msg.setTimeStamp(0.453038914425);
    msg.setSource(8852U);
    msg.setSourceEntity(139U);
    msg.setDestination(23349U);
    msg.setDestinationEntity(164U);
    msg.plan_id = 39371U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.47873418298;
    tmp_msg_0.lon = 0.299860657095;
    tmp_msg_0.eta = 2706560555U;
    tmp_msg_0.duration = 47261U;
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
    msg.setTimeStamp(0.649861749134);
    msg.setSource(42332U);
    msg.setSourceEntity(95U);
    msg.setDestination(4283U);
    msg.setDestinationEntity(184U);
    msg.plan_id = 40444U;

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
    msg.setTimeStamp(0.232181044969);
    msg.setSource(30769U);
    msg.setSourceEntity(247U);
    msg.setDestination(15032U);
    msg.setDestinationEntity(9U);
    msg.type = 165U;
    msg.command = 208U;
    msg.settings.assign("CIWIRIBOXGVJEAYEUPCUAFWVROKSCGQNZPBDKHCHDUUAZLLCNG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 15107U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ARJLQMDSVPIKDBTIYSIYZVCPSISCOLPWZFXNJMOZJCHYKJAVAMQBJUFGNSXGFVZQRHPXCLLEPJHINBTBWQBENFKUZCRSWUGBWTOBTEOXJSQVTVWQHUGXHTFKQATCRU");

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
    msg.setTimeStamp(0.372602650535);
    msg.setSource(47408U);
    msg.setSourceEntity(230U);
    msg.setDestination(63403U);
    msg.setDestinationEntity(208U);
    msg.type = 145U;
    msg.command = 217U;
    msg.settings.assign("FALGLPLAQIPSQNPAZUPAHFGLCPDBLMVLZMOPACQIJCYCORIQBZDKXTBPNEFTFHJPXXOFEVSNWNMOAVNXHTOTMWKFBKPQMTSWRPTZQHTQUTSSAFNZESWHJDGUQVIWSMHNGFVXYXLIDEBVLCMFVVMSGRSSYDQNZCRODHHDIOMEYVZKCBTERKGFCGYYABUEWGRCZUWBQGULRXJNMXVURKDXKBYKJWLYWCYOEHOIZGTUKBJWJIADKR");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 6044U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JYCLSAQZUVMZUTTWNGPSRQJLMXYPJMCDEYOHFCHW");

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
    msg.setTimeStamp(0.836269635314);
    msg.setSource(55468U);
    msg.setSourceEntity(14U);
    msg.setDestination(32111U);
    msg.setDestinationEntity(185U);
    msg.type = 1U;
    msg.command = 55U;
    msg.settings.assign("AMJZZDOQXYKWGDGFBGSRNTQAILOAFDZEDXBSLCYCTPRMFHJEPKRUSCZUNBKVNRUOHEKRWIVWUZKFJIQFSKBOMLWHEWWHVAYVPHFGNNGALJLRZALNTXKGHYSSMTNVYYZCORPXNTGQWMGXJLNWOXLZKXYCXASBTTPAOFKVZAJABQCPJISCVWUMQQSYIQDDTUEBEPVHROCKRFFMUDNUOLIBMTGCFLOEIDICJQQMUSEJYMBPYJXEERDT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 1638U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.217616953273;
    tmp_tmp_msg_0_0.lon = 0.664022129238;
    tmp_tmp_msg_0_0.eta = 2292215604U;
    tmp_tmp_msg_0_0.duration = 38043U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FCNFWYEXADKRGJMDMSTYWGVVBXMWUNHDWRPJCUQMEZTPMXCNTZJUQVUUOIELSTONEVHXGBWNHGPBRMRYSHKYLQICTRRZNMYJJ");

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
    msg.setTimeStamp(0.470871946437);
    msg.setSource(20806U);
    msg.setSourceEntity(211U);
    msg.setDestination(12016U);
    msg.setDestinationEntity(112U);
    msg.state = 35U;
    msg.plan_id = 4674U;
    msg.wpt_id = 117U;
    msg.settings_chk = 55346U;

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
    msg.setTimeStamp(0.209013761091);
    msg.setSource(42119U);
    msg.setSourceEntity(143U);
    msg.setDestination(42495U);
    msg.setDestinationEntity(132U);
    msg.state = 197U;
    msg.plan_id = 48384U;
    msg.wpt_id = 45U;
    msg.settings_chk = 49025U;

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
    msg.setTimeStamp(0.217726739834);
    msg.setSource(64160U);
    msg.setSourceEntity(117U);
    msg.setDestination(23726U);
    msg.setDestinationEntity(5U);
    msg.state = 161U;
    msg.plan_id = 64732U;
    msg.wpt_id = 128U;
    msg.settings_chk = 14159U;

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
    msg.setTimeStamp(0.154962991354);
    msg.setSource(43915U);
    msg.setSourceEntity(129U);
    msg.setDestination(9302U);
    msg.setDestinationEntity(184U);
    msg.uid = 85U;
    msg.frag_number = 173U;
    msg.num_frags = 219U;
    const char tmp_msg_0[] = {0, -46, -7, -120, 116, 119, -41, -93, -16, 112, 17, -118, -18, 22, 54, -74, -128, 70, 80, 104, -60, -107, -1, -113, 108, 62, 4, -98, -51, -104, -51, -52, 3, -85, 8, 81, 45, 78, 107, 35, 82, 38, -77, -82, 89, -80, 122, 43, 74, 65, 116, -87, -48, 111, 103, 42, 87, 124, 84, 43, -71, 66, -22, -81, 19, 89, 32, 35, -19, 47, -46, -23, -100, 96, 70, -50, 62, -41, -119, -35, 42, -43, 44, -117, -45, 51, -58, -71, 40};
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
    msg.setTimeStamp(0.137299051524);
    msg.setSource(15776U);
    msg.setSourceEntity(181U);
    msg.setDestination(59154U);
    msg.setDestinationEntity(180U);
    msg.uid = 73U;
    msg.frag_number = 205U;
    msg.num_frags = 13U;
    const char tmp_msg_0[] = {-15, 64, 112, -14, 105, -87, -117, 97, 86, 19, -67, 125, -92, -22, 18, 100, -61, -59, -63, -15, 6, -43, -43, -70, -44, 33, -122, -83, 77, -105, 64, -73, -77, -117, -120, -1, 33, 41, -32, -25, 7, -72};
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
    msg.setTimeStamp(0.738159521089);
    msg.setSource(13290U);
    msg.setSourceEntity(2U);
    msg.setDestination(54255U);
    msg.setDestinationEntity(81U);
    msg.uid = 145U;
    msg.frag_number = 38U;
    msg.num_frags = 186U;
    const char tmp_msg_0[] = {-94, 31, -89, -57, 112, -60, 121, -33, 109, -103, -60, 58, 58, 3, 55, -86, 41, -89, -105, -105, 20, 76, -72, 56, -80, -67, 18, -76, 11, 39, -112, -111, 33, -69, 54, 98, -21, 80, 79, -90, 121, 56, 114, 53, -114, -66, -84, 13, -111, -107, 2, -22, -70, 48, -87, 126, -18, -104, -111, -127, -1, 96, 4, 5, 98, 117, 70, -50, 103, -54, -106, 110, 55, -51, 94, -8, 33, 32, -10, -101, 34, 6, 97, 99, -78, 98, 45, 25, 88, 54, 44, -45, 86, -116, 99, 40, 7, 32, 97, -84};
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
    msg.setTimeStamp(0.870937962174);
    msg.setSource(40176U);
    msg.setSourceEntity(236U);
    msg.setDestination(31236U);
    msg.setDestinationEntity(188U);
    msg.content_type.assign("QTXQLMYSKOZUXRUJFODNDMCVRHODZJEHYSJWEMEGITFLKCNTUSDMFWGKENUFBRFCVZHOFPXKWJTVQYKOQPCIARGVSAJMPTGKVTXLWADCYPTCZRASLUFLXYLDIDTBQMAOOLQTSEUCIK");
    const char tmp_msg_0[] = {-25, 123, -122, 95, 42, -125, 95, 113, 109, -32, 34, 73, 0, 95, -8, -122, -80, 96, -109, 124, 32, 112, -12, -40, -45, 104, 63, -54, -43, 50, 94, -116, 17, 103, -15, -40, -110, 117, -128, -98, 115, -20, 91, 121, 96, -57, -61, -105, -54, 53, 10, -36, 85, 109, -49, 109, 86, -108, 22, 41, -115, -63, -110, -15, 122, -82, -59, 15, 58, 82, -37, 60, 120, 32, 52, -52, -68, -60, 24, -51, -70, 19, -60, -57, -56, -128, 92, -12, -117, 46, 55, 67, 25, -25, -122, 75, -72, 84, -63, -44, -25, -104, -102, 125, 42, 86, 126, -52, -89, -125, 55, 31, -14, -27, 120, 98, 61, -62, 51, -104, -10, -48, -117, 112, -10, -99, -65, -124, 52, 17, 63, 44, -71, 105, -12, 79, 8, 12, -43, -81};
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
    msg.setTimeStamp(0.689674322936);
    msg.setSource(11899U);
    msg.setSourceEntity(100U);
    msg.setDestination(22383U);
    msg.setDestinationEntity(22U);
    msg.content_type.assign("MSTTOIAFLWBYNJVVHRUIBCWXPVIDZONEHKTWPPDDSHWLUPIXRDQGVSCNLMAYGTOQJPYCADJOVPWAQMVSQBPZFCYIKDNFRXZEREUFDOBKIRGMU");
    const char tmp_msg_0[] = {-128, -100, -115, -101, -39, -66, 86, 42, -81, -48, -24, 7, -85, 119, 114, -82, -57, 67, -71, -85, 92, -91, 63, 109, -89, -66, 66, 3, -65, 95, 23, 61, 0, 17, 71, 95, -35, -64, -28, 106, 5, 45, 92, 91, 121, -33, 98, 75, 94, -36, -128, 32, 72, -84, 90, -26, -25, 82, -58, -76, -33, 41, -89, 93, -121, 32, 52, -107, -88, -96, -126, -82, 9, -97, -58, 5, 96, 32, -104, 18, 20, -123, 123, -124, -83, -37, -86, 64, -111, 27, 55, 109, 108, 52, 94, -108, 101, -33, 117, 102, 10, 94, -10, 37, 32, 9, 16, 46, -83, 37, -1, -112, 25, -69, 30, 79, 110, -108, 84, 0, 98, -80, 16, -21, 119, -116, -43, 42, -16, 20, -44, -114, -65, -116, 77, 47, 65, 117, 43, -120, -78, 96, -96, -114, -14, -39, 49, 26, 15, 99, 117, -70, 42, 40, 33, -5, 61, 85, -12, -121, -29, 38, 37, 32, 73, 24, -64, 78, 6, 103, 5, 89, 13, 94, 108, 22, 37, 86, -108, -63, 79, 123, 45, -103, 93, -103, -1, 14, -103, -93, 96, -92, -15, 31, -97, -57, -77, 26, 4, 57, -55, -85, 9, -107, 62, 60, 21, -65, 65, 54, -50, -89, -86, -16, 119, 78, -75, 74, -95, -114, -111, 20, -3, -84, 4, -90, 75, -19, -50, 98, 48, -51, -79, 68, -41, -109, 22, -24, 98, -7, 119};
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
    msg.setTimeStamp(0.035185019265);
    msg.setSource(14677U);
    msg.setSourceEntity(123U);
    msg.setDestination(22207U);
    msg.setDestinationEntity(135U);
    msg.content_type.assign("ZOMLAXVGBKUNGGGSIHTAEWBLBGZCNFTXDOOQADMYWZWFIKXPVBOKERQNLYOIKDPUEPAQHJQLCKFCDVSKAJSZXWBUIJVDHXRIPWBYQEARRPNTVHEFVXYCCJNNCYGHCGLNUQSTCHARMDFJTSRUWUORM");
    const char tmp_msg_0[] = {8, 83, -83, 1, -87, -65, -69, -111, -33, 43, 45, -28, -64, -77, -24, 103};
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
    msg.setTimeStamp(0.911637266115);
    msg.setSource(9789U);
    msg.setSourceEntity(4U);
    msg.setDestination(6940U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.204240734209);
    msg.setSource(4581U);
    msg.setSourceEntity(44U);
    msg.setDestination(13636U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.66755252234);
    msg.setSource(22925U);
    msg.setSourceEntity(131U);
    msg.setDestination(30053U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.855274724922);
    msg.setSource(62206U);
    msg.setSourceEntity(68U);
    msg.setDestination(38332U);
    msg.setDestinationEntity(38U);
    msg.target = 34972U;
    msg.bearing = 0.988789814922;
    msg.elevation = 0.939749491341;

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
    msg.setTimeStamp(0.210069198802);
    msg.setSource(12978U);
    msg.setSourceEntity(125U);
    msg.setDestination(58374U);
    msg.setDestinationEntity(237U);
    msg.target = 26425U;
    msg.bearing = 0.394414475891;
    msg.elevation = 0.821849525001;

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
    msg.setTimeStamp(0.636330531904);
    msg.setSource(48355U);
    msg.setSourceEntity(20U);
    msg.setDestination(6645U);
    msg.setDestinationEntity(129U);
    msg.target = 20041U;
    msg.bearing = 0.713351310943;
    msg.elevation = 0.109057422933;

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
    msg.setTimeStamp(0.640947819599);
    msg.setSource(10109U);
    msg.setSourceEntity(117U);
    msg.setDestination(55357U);
    msg.setDestinationEntity(103U);
    msg.target = 33879U;
    msg.x = 0.120280894278;
    msg.y = 0.313082332993;
    msg.z = 0.495929415829;

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
    msg.setTimeStamp(0.523718575154);
    msg.setSource(38097U);
    msg.setSourceEntity(235U);
    msg.setDestination(55630U);
    msg.setDestinationEntity(95U);
    msg.target = 44046U;
    msg.x = 0.232219206496;
    msg.y = 0.292219958324;
    msg.z = 0.00783351757119;

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
    msg.setTimeStamp(0.638368695659);
    msg.setSource(28563U);
    msg.setSourceEntity(14U);
    msg.setDestination(7917U);
    msg.setDestinationEntity(153U);
    msg.target = 32372U;
    msg.x = 0.661045838259;
    msg.y = 0.749030038677;
    msg.z = 0.498807721873;

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
    msg.setTimeStamp(0.529397012568);
    msg.setSource(39593U);
    msg.setSourceEntity(196U);
    msg.setDestination(30538U);
    msg.setDestinationEntity(70U);
    msg.target = 27740U;
    msg.lat = 0.746227472931;
    msg.lon = 0.834549961777;
    msg.z_units = 254U;
    msg.z = 0.346919499644;

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
    msg.setTimeStamp(0.200352952541);
    msg.setSource(53457U);
    msg.setSourceEntity(187U);
    msg.setDestination(63550U);
    msg.setDestinationEntity(151U);
    msg.target = 11760U;
    msg.lat = 0.684987201728;
    msg.lon = 0.887951488732;
    msg.z_units = 142U;
    msg.z = 0.908600146425;

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
    msg.setTimeStamp(0.250710287857);
    msg.setSource(53733U);
    msg.setSourceEntity(63U);
    msg.setDestination(10762U);
    msg.setDestinationEntity(195U);
    msg.target = 21262U;
    msg.lat = 0.0132830327986;
    msg.lon = 0.452468486905;
    msg.z_units = 199U;
    msg.z = 0.60814856058;

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
    msg.setTimeStamp(0.0346784004964);
    msg.setSource(57187U);
    msg.setSourceEntity(32U);
    msg.setDestination(38963U);
    msg.setDestinationEntity(115U);
    msg.locale.assign("QULWHKBGAINGFPAJUQBAEKSAFZIJCHEYIWRRTUFGQPXSCKSFPMYJMVDVFGZZBETPPZZMFIKTUHEZSZLHRHDAXLTHOVTLHWIAEXSMYQORMNWDIBNINLUXZVJFSAETZVKBGPWBWWOSPFCKGLBKJXYKTDLFGUYNNUANGBXREESOZFUGJRPOOICCDQVRESXQYMDXMGXYVCQLUUNOJVRTB");
    const char tmp_msg_0[] = {-55, -22, -54, -21, -97, 100, 68, 98, -23, 30, 93, -78, 108, -127, 106, -125, -21, 23, 31, 100, 119, -48, -96, -28, -68, -59, 62, 35, -6, 8, 97, 95, -47, 94, 83, -55, -100, 90, 58, 13, 47, -18, 65, 24, 21, 84, 76, -96, -21, 22, 23, 39, -126, -14, 3, 118, 64, -22, -128, -50, -35, -47, 113, 62, -37, 125, 92, -85, -22, 103, 47, 5, -87, 71, -20, -56, -88, 53, -114, -97, 87, -3, -114, -56, 11, -27, -60, -57, -29, 58, -113, 79, 19, 54, 69, -94, 102, 32, -28, 117, 13, 55};
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
    msg.setTimeStamp(0.835388823404);
    msg.setSource(16659U);
    msg.setSourceEntity(83U);
    msg.setDestination(12265U);
    msg.setDestinationEntity(57U);
    msg.locale.assign("XZRDKQNJVHXALGUHGUXAJPHCXZUDVTHFJRXDLMOHWTZQRZCQLNLDEOENSFBYEIPPKETCNNZJXTTMPSIKPOOINSQWSKBOCZOHDSJQLAOFKIBRWUSWOYRWAYMUPQUABNQPXHVXLNJYGOIBNVPDIENIRCLYPWDCKYCZFKLWWMEVCSRGMKVQTDBGRQASYX");
    const char tmp_msg_0[] = {-45, 77, 112, -125, 67, 119, -60, -60, 6, -89, -25, 0, 82, -42, 37, -13, -12, 86, 86, -4, -19, -104, 47, -116, 1, -26, 65, 113, -3, -67, -39, -5, -23, -31, 112, -94, -36, 4, 18, -39, 60, 20, -94, 15, 75, 100, 114, -72, -118, -7, -108, 44, 96, 20, 86, 45, -32, -105, -92, -62, 79, -124, -8, -119, 68, -38, 115, 84, 111, 58, 80, 35, -59, 54, 123, 109, 22, -67, 2, 81, -53, 30, -22, 102, -1, 20, -7, 3, -91, 7, -73, 71, 67, 104, 106, 53, -74, -56, 60, -76, -2, -12, -84, 51, -109, -84, 38, 91, 113, 34, 85, -115, 9, -80, -29, -61, -60, 104, 98, 77, -23, 83, -99, 103, -33, 116, -78, -46, -97, -112, 114, 54, 122, 118, -4, -27, -81, 109, -3, -21, 60, -120, -2, -44, 4, -38, 41, -86, 7, -58, 97, 66, -89, -18};
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
    msg.setTimeStamp(0.60310366568);
    msg.setSource(16463U);
    msg.setSourceEntity(195U);
    msg.setDestination(60219U);
    msg.setDestinationEntity(22U);
    msg.locale.assign("PMRHRXSDPUAAKEEEZMXVUCPCYGXWSLCVYVFAOTVCSEUMKYQQSKBOQDLANBFEBBLXCIRFFFFTJLYDHXVUFAIYOKVGZENOJZTOMQNOD");
    const char tmp_msg_0[] = {-9, 94, -110, 90, -73, 112, 12, 16, 108, -21, -113, 30, 47, -54, -59, 99, -47, -56, 104, 75, 79, -4, -62};
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
    msg.setTimeStamp(0.0980851919246);
    msg.setSource(50308U);
    msg.setSourceEntity(163U);
    msg.setDestination(12940U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.0656604704185);
    msg.setSource(35356U);
    msg.setSourceEntity(114U);
    msg.setDestination(59440U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.486685452427);
    msg.setSource(30944U);
    msg.setSourceEntity(81U);
    msg.setDestination(40170U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.714617636917);
    msg.setSource(45873U);
    msg.setSourceEntity(26U);
    msg.setDestination(12114U);
    msg.setDestinationEntity(33U);
    msg.camid = 17U;
    msg.x = 59281U;
    msg.y = 8930U;

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
    msg.setTimeStamp(0.40698518108);
    msg.setSource(15307U);
    msg.setSourceEntity(183U);
    msg.setDestination(5091U);
    msg.setDestinationEntity(133U);
    msg.camid = 209U;
    msg.x = 55325U;
    msg.y = 11900U;

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
    msg.setTimeStamp(0.862660163816);
    msg.setSource(34422U);
    msg.setSourceEntity(17U);
    msg.setDestination(37905U);
    msg.setDestinationEntity(116U);
    msg.camid = 208U;
    msg.x = 34488U;
    msg.y = 7910U;

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
    msg.setTimeStamp(0.669932060682);
    msg.setSource(21099U);
    msg.setSourceEntity(24U);
    msg.setDestination(36765U);
    msg.setDestinationEntity(140U);
    msg.camid = 154U;
    msg.x = 27672U;
    msg.y = 26186U;

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
    msg.setTimeStamp(0.716557166559);
    msg.setSource(60874U);
    msg.setSourceEntity(79U);
    msg.setDestination(26253U);
    msg.setDestinationEntity(191U);
    msg.camid = 119U;
    msg.x = 47120U;
    msg.y = 65394U;

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
    msg.setTimeStamp(0.103997555638);
    msg.setSource(65452U);
    msg.setSourceEntity(77U);
    msg.setDestination(9640U);
    msg.setDestinationEntity(57U);
    msg.camid = 45U;
    msg.x = 57807U;
    msg.y = 32379U;

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
    msg.setTimeStamp(0.764251642994);
    msg.setSource(47907U);
    msg.setSourceEntity(98U);
    msg.setDestination(41636U);
    msg.setDestinationEntity(45U);
    msg.tracking = 144U;
    msg.lat = 0.139980981775;
    msg.lon = 0.728212235858;
    msg.x = 0.313939710516;
    msg.y = 0.467556818777;
    msg.z = 0.0499793632978;

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
    msg.setTimeStamp(0.406520592313);
    msg.setSource(13268U);
    msg.setSourceEntity(102U);
    msg.setDestination(30380U);
    msg.setDestinationEntity(118U);
    msg.tracking = 180U;
    msg.lat = 0.323327379323;
    msg.lon = 0.0282279069683;
    msg.x = 0.437660670085;
    msg.y = 0.00320569969705;
    msg.z = 0.612673884079;

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
    msg.setTimeStamp(0.0106285047025);
    msg.setSource(47413U);
    msg.setSourceEntity(203U);
    msg.setDestination(6803U);
    msg.setDestinationEntity(148U);
    msg.tracking = 207U;
    msg.lat = 0.354024662058;
    msg.lon = 0.641673102782;
    msg.x = 0.855795733799;
    msg.y = 0.257139846364;
    msg.z = 0.292067840815;

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
    msg.setTimeStamp(0.300615747873);
    msg.setSource(60484U);
    msg.setSourceEntity(72U);
    msg.setDestination(14050U);
    msg.setDestinationEntity(213U);
    msg.target.assign("ZHPOKLNEUTACYFADWBJPUN");
    msg.lbearing = 0.97435715137;
    msg.lelevation = 0.531660375761;
    msg.bearing = 0.922955835327;
    msg.elevation = 0.204582290832;
    msg.phi = 0.0298108216966;
    msg.theta = 0.922973379545;
    msg.psi = 0.0658108923205;
    msg.accuracy = 0.903031092312;

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
    msg.setTimeStamp(0.750393562621);
    msg.setSource(54670U);
    msg.setSourceEntity(40U);
    msg.setDestination(31322U);
    msg.setDestinationEntity(113U);
    msg.target.assign("BOYWYBIHVLXOFHSASJYKYEDNPHQWXZEQLXPFUAVYAKASNWHDLTTNCDWTVAVCNLASANKNWBQZCHFBJMRBUFZJYHTCZERMZGFPYCIQJVEXVQXUCMXKHGDEQHTKSTIWTOXBNQROEDLIOJKUBTMWXAMPNONZFJWSCMSTPIRECKROPMVYVRSZUZLLTROZ");
    msg.lbearing = 0.454270339372;
    msg.lelevation = 0.0725650156904;
    msg.bearing = 0.934758341562;
    msg.elevation = 0.821513298668;
    msg.phi = 0.134224560885;
    msg.theta = 0.183288574043;
    msg.psi = 0.809887282897;
    msg.accuracy = 0.512573399788;

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
    msg.setTimeStamp(0.275549181686);
    msg.setSource(52358U);
    msg.setSourceEntity(242U);
    msg.setDestination(51565U);
    msg.setDestinationEntity(123U);
    msg.target.assign("QRDYAICYUBGNCYFWMNXRNUJVWZLSCBZEZUMIVXUSFWAUHQEKXZGDCCHPYPFXVCSMDEBWDGTPHRKQU");
    msg.lbearing = 0.119429807342;
    msg.lelevation = 0.79552248986;
    msg.bearing = 0.443435292806;
    msg.elevation = 0.460528611893;
    msg.phi = 0.342220568649;
    msg.theta = 0.377496119207;
    msg.psi = 0.391972391444;
    msg.accuracy = 0.16334073081;

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
    msg.setTimeStamp(0.709212174478);
    msg.setSource(12785U);
    msg.setSourceEntity(249U);
    msg.setDestination(7595U);
    msg.setDestinationEntity(225U);
    msg.target.assign("KZSJRNMQSJAIVDAQINTOEBMFLVFFOQCIJWKAJGUDWPCBAMIDWGTEOYXCUIQQVENGSXKFTCBSWYPQPALBZGVUNRGEBFERDYZCSNXHKZLWDMOARUTXCQBOUUQCFRBGKTFILJHTDZFCXUAYPNTSPAJGBKVEWMNHXHSITEYZNLOYFWWILTMNESSWRDGBUMYOHUABWHCZHPJRKLZVODXXPXFHVMJVKU");
    msg.x = 0.188332980645;
    msg.y = 0.864211439461;
    msg.z = 0.834275977289;
    msg.n = 0.403650568436;
    msg.e = 0.851714859918;
    msg.d = 0.501084938527;
    msg.phi = 0.618321451251;
    msg.theta = 0.226841350839;
    msg.psi = 0.788566641726;
    msg.accuracy = 0.69906797802;

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
    msg.setTimeStamp(0.979882464955);
    msg.setSource(48690U);
    msg.setSourceEntity(122U);
    msg.setDestination(39698U);
    msg.setDestinationEntity(30U);
    msg.target.assign("EZWJYOSTFQXQVJQTYWMDKOZMZEEHLQSOTPDOHQEIQANGMGSJKKMSWMOESCLARTQGNHKPZOLXBWVFMLJLSRKYKMCDGYGYWOUPCGOIKFBRUVEYLXZHGHRWQVLUYNIDTHXBZTHZ");
    msg.x = 0.01618037599;
    msg.y = 0.639449855538;
    msg.z = 0.602660861344;
    msg.n = 0.973315893693;
    msg.e = 0.552160172455;
    msg.d = 0.609488503259;
    msg.phi = 0.489469596198;
    msg.theta = 0.572363413184;
    msg.psi = 0.567425836371;
    msg.accuracy = 0.24878687186;

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
    msg.setTimeStamp(0.697273892385);
    msg.setSource(6583U);
    msg.setSourceEntity(140U);
    msg.setDestination(23098U);
    msg.setDestinationEntity(49U);
    msg.target.assign("VYVBPASMNJRKBYNAPVZCDHJINUXQYDKRHQVAVECZSLMMROJFLEGSXITYRAFUNZWZMIFQGVRVMDMDOGQBTTXMQHHGPWSPPWAPYVDBOGUYHDZLONGKLUXFLJBGBTTHBOXEEYIFWWWDRFOIRAQJDCXYEPCILSHARSPFCNHNTKGTSQDHNIFITKXBDWQPIKKUEHEZOJLOSSOKQUZXKZESUMACMJNWEWBKLRA");
    msg.x = 0.563820578358;
    msg.y = 0.893189532713;
    msg.z = 0.960363002709;
    msg.n = 0.174388426653;
    msg.e = 0.435287600194;
    msg.d = 0.581825009202;
    msg.phi = 0.05340931342;
    msg.theta = 0.792015776159;
    msg.psi = 0.614536965872;
    msg.accuracy = 0.816590714732;

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
    msg.setTimeStamp(0.585522986415);
    msg.setSource(55118U);
    msg.setSourceEntity(61U);
    msg.setDestination(52505U);
    msg.setDestinationEntity(231U);
    msg.target.assign("MPOEDRIHOIKZSJHRVGYUIZSNPQVJYGGZENSOHAQLBCHDZPEIUBJCJWYEISFMKTFOBDPGADXOVFQIBQGHCYAUJFBYDPKY");
    msg.lat = 0.880029095342;
    msg.lon = 0.90043169586;
    msg.z_units = 199U;
    msg.z = 0.684910386023;
    msg.accuracy = 0.366407554559;

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
    msg.setTimeStamp(0.469831891253);
    msg.setSource(24534U);
    msg.setSourceEntity(147U);
    msg.setDestination(1800U);
    msg.setDestinationEntity(185U);
    msg.target.assign("CMSGJGTLTZRMYFWIVZMEIZCBWDNABMVGYZKYNDLTVIHXPOTJJWIQFOVIRDH");
    msg.lat = 0.4433126857;
    msg.lon = 0.0159428633686;
    msg.z_units = 94U;
    msg.z = 0.906208963911;
    msg.accuracy = 0.745871734689;

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
    msg.setTimeStamp(0.228448304096);
    msg.setSource(62452U);
    msg.setSourceEntity(17U);
    msg.setDestination(46086U);
    msg.setDestinationEntity(65U);
    msg.target.assign("TWSAJPHNYZDTEASOXIVPWFKLFPFTSPVPYMECGGSYJDVFKYZEGBOXWJYGIDZGIHOLKCWBWRKZNQHUHZSAFBTCKZOXBQFVUDCETMWZYRXNSJDQEYQQMUBPNWXNARCCYODJRDHTKFIYJXMSHGWOEZEXNNITQXLLFTMLKOUDIFCRNPMUUTAUMZVUIBEKHOVWSBGLLQVMCBRCXNRRACMBXAIHQOJYSHOLIQGUJHVFTLPSEKLWBAAM");
    msg.lat = 0.371269424879;
    msg.lon = 0.125494689086;
    msg.z_units = 126U;
    msg.z = 0.103579295097;
    msg.accuracy = 0.135267504613;

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
    msg.setTimeStamp(0.533082425321);
    msg.setSource(4058U);
    msg.setSourceEntity(207U);
    msg.setDestination(21651U);
    msg.setDestinationEntity(134U);
    msg.name.assign("EKMVMRGBAYIVLCAYATENKPVZBVJGUIXVRFVNMQTSOPWJRSFTGYOBDIQNDOTEYVWQIDZGTJQIYNDLNJUHSZYMKJZHKEVTIEGTWEGZLDNOSGJLSFKAPPNCLXEFXPPOZXFQMTROHHKHXBLTKY");
    msg.lat = 0.619303627909;
    msg.lon = 0.162131293285;
    msg.z = 0.314969593349;
    msg.z_units = 102U;

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
    msg.setTimeStamp(0.295025430919);
    msg.setSource(27074U);
    msg.setSourceEntity(63U);
    msg.setDestination(29197U);
    msg.setDestinationEntity(148U);
    msg.name.assign("TESWPQRKHBQLZBXFPXNKKCOLORFFXMODUQYVOBYIWHRJBUUADLCDTMWKCDNPUXD");
    msg.lat = 0.568386137737;
    msg.lon = 0.500327726313;
    msg.z = 0.722285570112;
    msg.z_units = 109U;

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
    msg.setTimeStamp(0.0557681073593);
    msg.setSource(32971U);
    msg.setSourceEntity(250U);
    msg.setDestination(4818U);
    msg.setDestinationEntity(84U);
    msg.name.assign("BHSZPPVIQBPJSXWHUWRDKCMGYMLBCXJOJQLMVKRNYYVWDRYIZIXZORFACYEUKBPZVAX");
    msg.lat = 0.384106137394;
    msg.lon = 0.165704400389;
    msg.z = 0.487840938965;
    msg.z_units = 94U;

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
    msg.setTimeStamp(0.313301764676);
    msg.setSource(45694U);
    msg.setSourceEntity(60U);
    msg.setDestination(14071U);
    msg.setDestinationEntity(47U);
    msg.op = 231U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("KIYJGMPRETLDSCIUYKCRKJFKKZSWAUMHZIUQDGHBNVIWQNZHBUNRFLQVENOSQNTPDQCSJZEVXUSYLAGTZBMAQCNWETCCNYKISXIRTVHBPXOLZKJOVKGHYQRJGYMUSYTXNUNOOLTHUOXLVEEMPPXVGWZFOOEFKNDBZLCJYJRQAMHGRWLWGIRLADAXPPBVFCUCTEPMPFQBEMFORIZW");
    tmp_msg_0.lat = 0.95270413292;
    tmp_msg_0.lon = 0.649028226005;
    tmp_msg_0.z = 0.147723488499;
    tmp_msg_0.z_units = 217U;
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
    msg.setTimeStamp(0.471581694831);
    msg.setSource(24353U);
    msg.setSourceEntity(182U);
    msg.setDestination(43262U);
    msg.setDestinationEntity(92U);
    msg.op = 247U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("XPNMJULTSJVKKJIKQBXQIFMEKXBWGNPUMUOEKHJKVWLFIVNYQHGBWETRQHYXJPDARBSBUXXCYKENBMLDICPULVZHXTWIMNZOGFPLJVHCGWYYHHILODQZOFROIMEWOGTZCMYDACVFLQSDOAQSZGVXCAQKOFLCIAHSRRFMTXUWSDHSFUGVRVFSAOEBRVWMUAPBSDNEUUWWEGECRITZCCPKSYZZDMZQRTBGQDTDYHALLAYAZPJEPRYJJX");
    tmp_msg_0.lat = 0.130882031641;
    tmp_msg_0.lon = 0.945640750385;
    tmp_msg_0.z = 0.79471768731;
    tmp_msg_0.z_units = 151U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.294840964593);
    msg.setSource(35822U);
    msg.setSourceEntity(75U);
    msg.setDestination(19958U);
    msg.setDestinationEntity(226U);
    msg.op = 94U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("OKOPEBHJSPJPIRSNIBAUJWMUURAXFQTXEQUYFUAPAVNXBTSGYWPWBPENPKDDGHZTPQJCCOGZNHGKZZERZZRFTFAGYMDYAXZQMWNISEDEIMGYHLSQVWSVHVLCCMSVVHGFXLOIOMOW");
    tmp_msg_0.lat = 0.319261472442;
    tmp_msg_0.lon = 0.388503508346;
    tmp_msg_0.z = 0.0797306252294;
    tmp_msg_0.z_units = 105U;
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
    msg.setTimeStamp(0.38422091589);
    msg.setSource(17825U);
    msg.setSourceEntity(192U);
    msg.setDestination(8316U);
    msg.setDestinationEntity(157U);
    msg.value = 0.655213703449;
    msg.type = 197U;

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
    msg.setTimeStamp(0.896474291523);
    msg.setSource(61242U);
    msg.setSourceEntity(177U);
    msg.setDestination(55417U);
    msg.setDestinationEntity(141U);
    msg.value = 0.78408346608;
    msg.type = 183U;

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
    msg.setTimeStamp(0.137343041738);
    msg.setSource(33072U);
    msg.setSourceEntity(51U);
    msg.setDestination(14154U);
    msg.setDestinationEntity(222U);
    msg.value = 0.214263991325;
    msg.type = 14U;

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
    msg.setTimeStamp(0.860343451447);
    msg.setSource(43232U);
    msg.setSourceEntity(212U);
    msg.setDestination(39052U);
    msg.setDestinationEntity(196U);
    msg.value = 0.896963146191;

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
    msg.setTimeStamp(0.0790409220928);
    msg.setSource(38133U);
    msg.setSourceEntity(123U);
    msg.setDestination(24392U);
    msg.setDestinationEntity(237U);
    msg.value = 0.717525434534;

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
    msg.setTimeStamp(0.150551854764);
    msg.setSource(8373U);
    msg.setSourceEntity(82U);
    msg.setDestination(10074U);
    msg.setDestinationEntity(84U);
    msg.value = 0.600887230985;

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
    msg.setTimeStamp(0.526116638483);
    msg.setSource(22216U);
    msg.setSourceEntity(72U);
    msg.setDestination(64810U);
    msg.setDestinationEntity(230U);
    msg.timestamp_last_service = 0.0480293844247;
    msg.time_next_service = 0.364425904527;
    msg.time_motor_next_service = 0.152204869222;
    msg.time_idle_ground = 0.359072925998;
    msg.time_idle_air = 0.0764321092997;
    msg.time_idle_water = 0.670494821975;
    msg.time_idle_underwater = 0.67976631893;
    msg.time_idle_unknown = 0.190731133516;
    msg.time_motor_ground = 0.400564558206;
    msg.time_motor_air = 0.282047625427;
    msg.time_motor_water = 0.788746944674;
    msg.time_motor_underwater = 0.645369851936;
    msg.time_motor_unknown = 0.937731317744;
    msg.rpm_min = 14611;
    msg.rpm_max = -18695;
    msg.depth_max = 0.245118257852;

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
    msg.setTimeStamp(0.726020561026);
    msg.setSource(26378U);
    msg.setSourceEntity(152U);
    msg.setDestination(58760U);
    msg.setDestinationEntity(245U);
    msg.timestamp_last_service = 0.391266589352;
    msg.time_next_service = 0.787002765144;
    msg.time_motor_next_service = 0.796920532544;
    msg.time_idle_ground = 0.291383176218;
    msg.time_idle_air = 0.796802954892;
    msg.time_idle_water = 0.79191488179;
    msg.time_idle_underwater = 0.885962066647;
    msg.time_idle_unknown = 0.704096461625;
    msg.time_motor_ground = 0.157149235144;
    msg.time_motor_air = 0.196272990455;
    msg.time_motor_water = 0.623289815659;
    msg.time_motor_underwater = 0.997609307428;
    msg.time_motor_unknown = 0.400759384929;
    msg.rpm_min = 30574;
    msg.rpm_max = 18603;
    msg.depth_max = 0.472930648483;

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
    msg.setTimeStamp(0.825427913788);
    msg.setSource(57048U);
    msg.setSourceEntity(193U);
    msg.setDestination(10366U);
    msg.setDestinationEntity(243U);
    msg.timestamp_last_service = 0.876114617387;
    msg.time_next_service = 0.790639735863;
    msg.time_motor_next_service = 0.864682708968;
    msg.time_idle_ground = 0.220680107128;
    msg.time_idle_air = 0.0734417441191;
    msg.time_idle_water = 0.0397500821211;
    msg.time_idle_underwater = 0.393451154125;
    msg.time_idle_unknown = 0.274533266375;
    msg.time_motor_ground = 0.466792184108;
    msg.time_motor_air = 0.29576616517;
    msg.time_motor_water = 0.693233586905;
    msg.time_motor_underwater = 0.975764802819;
    msg.time_motor_unknown = 0.305181581071;
    msg.rpm_min = -14806;
    msg.rpm_max = -30066;
    msg.depth_max = 0.232062438154;

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
    msg.setTimeStamp(0.107833746767);
    msg.setSource(5278U);
    msg.setSourceEntity(49U);
    msg.setDestination(18155U);
    msg.setDestinationEntity(56U);
    msg.severity = 185U;
    msg.text.assign("CDOMZDWEGDBNSELOIQXHYLFTKHXIXXZWZBANPFXMYZTOXUYBEPWUJGYSLGYRAIHJVEGMVAKDRRVVOGHWFIPOHBLGEJJNYTZNKRTKUONFPAERMBCBQTDAKWAAUJVSBDMKZECNVVLJXCJFHOPTUDQZZKULWIWZQZ");

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
    msg.setTimeStamp(0.9873996524);
    msg.setSource(55465U);
    msg.setSourceEntity(41U);
    msg.setDestination(37357U);
    msg.setDestinationEntity(11U);
    msg.severity = 211U;
    msg.text.assign("KDWCRJQVMDZTQAHPDHKCJNGBGLKRUXGWSJJAMOIRGMQRIAFXHDNTUSJVNZZWXAARLYZSFFCOXOYGHUBPFCDXHNFKOCTVSVHDZSEZCZWPBBTIEVBLUQKUXPORHBUFNTHBMMITSVQNAXKAHMBTGJPQWUVZDFNWFN");

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
    msg.setTimeStamp(0.221892796109);
    msg.setSource(35818U);
    msg.setSourceEntity(247U);
    msg.setDestination(17995U);
    msg.setDestinationEntity(142U);
    msg.severity = 138U;
    msg.text.assign("ICFNPJAXBKAYQRTAENQNUZVLNGHNMUPHHVTZSYMHGKCM");

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
    msg.setTimeStamp(0.661412411684);
    msg.setSource(32728U);
    msg.setSourceEntity(226U);
    msg.setDestination(59779U);
    msg.setDestinationEntity(41U);
    msg.channel = -45;
    msg.value = -167856786;
    msg.gain = 137U;

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
    msg.setTimeStamp(0.0574614800787);
    msg.setSource(13669U);
    msg.setSourceEntity(57U);
    msg.setDestination(11182U);
    msg.setDestinationEntity(241U);
    msg.channel = -28;
    msg.value = 311685592;
    msg.gain = 166U;

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
    msg.setTimeStamp(0.58262738915);
    msg.setSource(13275U);
    msg.setSourceEntity(210U);
    msg.setDestination(23764U);
    msg.setDestinationEntity(23U);
    msg.channel = 109;
    msg.value = 1306291196;
    msg.gain = 67U;

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
    msg.setTimeStamp(0.205855860447);
    msg.setSource(36137U);
    msg.setSourceEntity(16U);
    msg.setDestination(15015U);
    msg.setDestinationEntity(97U);
    msg.ch01 = 0.466658278595;
    msg.ch02 = 0.592461707382;
    msg.ch03 = 0.0920287032573;
    msg.ch04 = 0.269544714298;
    msg.ch05 = 0.366250968047;
    msg.ch06 = 0.608228995315;
    msg.ch07 = 0.612339678354;
    msg.ch08 = 0.753092116006;
    msg.ch09 = 0.165796884713;
    msg.ch10 = 0.531964671681;
    msg.ch11 = 0.765399506011;
    msg.ch12 = 0.965820597081;
    msg.ch13 = 0.767751504849;
    msg.ch14 = 0.446016133707;
    msg.ch15 = 0.380027580311;
    msg.ch16 = 0.282512023799;

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
    msg.setTimeStamp(0.786028056253);
    msg.setSource(43669U);
    msg.setSourceEntity(155U);
    msg.setDestination(37701U);
    msg.setDestinationEntity(150U);
    msg.ch01 = 0.714366473139;
    msg.ch02 = 0.476309611319;
    msg.ch03 = 0.12730044534;
    msg.ch04 = 0.265709325822;
    msg.ch05 = 0.0215198172912;
    msg.ch06 = 0.159373643524;
    msg.ch07 = 0.629904656452;
    msg.ch08 = 0.482582932917;
    msg.ch09 = 0.456663684225;
    msg.ch10 = 0.85388808996;
    msg.ch11 = 0.389524806751;
    msg.ch12 = 0.773463614436;
    msg.ch13 = 0.589931534475;
    msg.ch14 = 0.554264091142;
    msg.ch15 = 0.926910700998;
    msg.ch16 = 0.13610156196;

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
    msg.setTimeStamp(0.41967401988);
    msg.setSource(9622U);
    msg.setSourceEntity(75U);
    msg.setDestination(54928U);
    msg.setDestinationEntity(0U);
    msg.ch01 = 0.308920507755;
    msg.ch02 = 0.154985564452;
    msg.ch03 = 0.0122162815478;
    msg.ch04 = 0.967491823912;
    msg.ch05 = 0.575769290815;
    msg.ch06 = 0.579383913095;
    msg.ch07 = 0.18496154724;
    msg.ch08 = 0.56431885567;
    msg.ch09 = 0.00660869435088;
    msg.ch10 = 0.745317285233;
    msg.ch11 = 0.383476949566;
    msg.ch12 = 0.54052147271;
    msg.ch13 = 0.937681884651;
    msg.ch14 = 0.877770029333;
    msg.ch15 = 0.409763869597;
    msg.ch16 = 0.635156104515;

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
    msg.setTimeStamp(0.575853014971);
    msg.setSource(2380U);
    msg.setSourceEntity(173U);
    msg.setDestination(5349U);
    msg.setDestinationEntity(210U);
    msg.time = 0.794146513965;
    msg.ang = 0.800564073415;

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
    msg.setTimeStamp(0.681702184606);
    msg.setSource(49823U);
    msg.setSourceEntity(139U);
    msg.setDestination(51527U);
    msg.setDestinationEntity(85U);
    msg.time = 0.584643909476;
    msg.ang = 0.00823541664819;

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
    msg.setTimeStamp(0.708683740823);
    msg.setSource(4922U);
    msg.setSourceEntity(71U);
    msg.setDestination(9121U);
    msg.setDestinationEntity(74U);
    msg.time = 0.904362947401;
    msg.ang = 0.706082961194;

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
    msg.setTimeStamp(0.0829193434799);
    msg.setSource(8680U);
    msg.setSourceEntity(206U);
    msg.setDestination(18227U);
    msg.setDestinationEntity(18U);
    msg.value = 0.301364703141;

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
    msg.setTimeStamp(0.189529269728);
    msg.setSource(24638U);
    msg.setSourceEntity(126U);
    msg.setDestination(61252U);
    msg.setDestinationEntity(165U);
    msg.value = 0.787432433198;

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
    msg.setTimeStamp(0.149111973046);
    msg.setSource(34155U);
    msg.setSourceEntity(9U);
    msg.setDestination(48495U);
    msg.setDestinationEntity(131U);
    msg.value = 0.117123615917;

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
    msg.setTimeStamp(0.0731677409866);
    msg.setSource(13815U);
    msg.setSourceEntity(245U);
    msg.setDestination(6192U);
    msg.setDestinationEntity(168U);
    msg.value = 0.195386404303;

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
    msg.setTimeStamp(0.136463173986);
    msg.setSource(41065U);
    msg.setSourceEntity(0U);
    msg.setDestination(5972U);
    msg.setDestinationEntity(8U);
    msg.value = 0.850035888547;

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
    msg.setTimeStamp(0.821511067552);
    msg.setSource(42245U);
    msg.setSourceEntity(201U);
    msg.setDestination(43092U);
    msg.setDestinationEntity(81U);
    msg.value = 0.354711456575;

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
    msg.setTimeStamp(0.276410252682);
    msg.setSource(31369U);
    msg.setSourceEntity(105U);
    msg.setDestination(42225U);
    msg.setDestinationEntity(198U);
    msg.value = 0.285240452643;

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
    msg.setTimeStamp(0.613457981759);
    msg.setSource(63668U);
    msg.setSourceEntity(71U);
    msg.setDestination(6225U);
    msg.setDestinationEntity(11U);
    msg.value = 0.00480825008276;

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
    msg.setTimeStamp(0.266572616223);
    msg.setSource(37775U);
    msg.setSourceEntity(59U);
    msg.setDestination(702U);
    msg.setDestinationEntity(140U);
    msg.value = 0.722060973596;

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
    msg.setTimeStamp(0.146767383059);
    msg.setSource(40111U);
    msg.setSourceEntity(150U);
    msg.setDestination(3096U);
    msg.setDestinationEntity(96U);
    msg.l2 = 37;
    msg.l3 = 108;
    msg.iridium = 38;
    msg.modem = 76;
    msg.pumps = 39;
    msg.vhf = 25;

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
    msg.setTimeStamp(0.305312481895);
    msg.setSource(62447U);
    msg.setSourceEntity(87U);
    msg.setDestination(9218U);
    msg.setDestinationEntity(77U);
    msg.l2 = 65;
    msg.l3 = -97;
    msg.iridium = -120;
    msg.modem = 24;
    msg.pumps = -30;
    msg.vhf = -124;

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
    msg.setTimeStamp(0.521290402703);
    msg.setSource(19364U);
    msg.setSourceEntity(216U);
    msg.setDestination(2983U);
    msg.setDestinationEntity(24U);
    msg.l2 = -102;
    msg.l3 = -24;
    msg.iridium = 32;
    msg.modem = -97;
    msg.pumps = -61;
    msg.vhf = 125;

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
    msg.setTimeStamp(0.377581386122);
    msg.setSource(32273U);
    msg.setSourceEntity(73U);
    msg.setDestination(65415U);
    msg.setDestinationEntity(235U);
    msg.angle = 0.925777604477;
    msg.reference.assign("TACGHQDMGOBZKVLYXKDETMXAJZNUMKBTXOOTHFRHTTZESVIXPTCSWQEAIPOYMWD");
    msg.speed = 0.65658956367;

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
    msg.setTimeStamp(0.828993287467);
    msg.setSource(63982U);
    msg.setSourceEntity(80U);
    msg.setDestination(5633U);
    msg.setDestinationEntity(165U);
    msg.angle = 0.529287487223;
    msg.reference.assign("VRTRYPDBLKAWWLFEZYGBMVBRZNGZSSTUNIOLVQHKKWAMHGYNFJTVWSHWMPFCCRNPVWCEHJZVMSE");
    msg.speed = 0.985962928639;

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
    msg.setTimeStamp(0.0896495961581);
    msg.setSource(20701U);
    msg.setSourceEntity(172U);
    msg.setDestination(47395U);
    msg.setDestinationEntity(60U);
    msg.angle = 0.412898587621;
    msg.reference.assign("KFPPXKIUJMFQNJENJMNBGXNKWAAVRHDJYHVCIHJFBMBVWTPKHBZNASDJRYTSQUYLTOOISAYUPYQVB");
    msg.speed = 0.599842169727;

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
    msg.setTimeStamp(0.00740468868486);
    msg.setSource(37535U);
    msg.setSourceEntity(164U);
    msg.setDestination(40249U);
    msg.setDestinationEntity(38U);
    msg.angle = 0.783679039023;
    msg.direction.assign("BYJQQJSXSXJWESUIPSWIROQHACTJHIBCDUVYMTXONKLLOZMWZUOBKDZQDMHFADLQETUWJAPWYSODVQVUHVQMJPIDANARSIJANVGPYBXLSGMVUGKLURFJUDLYIZBAHNQETCMCETHMPGGWFTYYVQIRPCKDTZHWLXOGSCDTBHIIHYOSEJOKMFWGLPRXSFUZKMOLRTPAFTEVBCOENZQRXEFPCNR");
    msg.speed = 0.497890053755;

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
    msg.setTimeStamp(0.630162564662);
    msg.setSource(15233U);
    msg.setSourceEntity(135U);
    msg.setDestination(48085U);
    msg.setDestinationEntity(210U);
    msg.angle = 0.905987622178;
    msg.direction.assign("GPZWTHPODBPXUBGQZIRJJHQKELRSLNSQGYYPMBBLWZ");
    msg.speed = 0.280500710272;

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
    msg.setTimeStamp(0.648786492018);
    msg.setSource(4827U);
    msg.setSourceEntity(162U);
    msg.setDestination(27368U);
    msg.setDestinationEntity(65U);
    msg.angle = 0.839745683566;
    msg.direction.assign("TTNSOPPTKFYSTMUJNORLKHUVNIEXPQKNEAPUMICDZLYISRLTZHIVIRWWAKTUSYWIASWHOTQIXCIPDBXGFZOCKFBEQTEGOPFRSSQCOMOFNZXHKOVHHRRBWYPTZJRXWGEPDMLMJYVLWNJNBJHBFJUFBBJBQCUIEAMLFCNEPMLQVCIGNDTW");
    msg.speed = 0.96412491811;

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
    msg.setTimeStamp(0.715456507824);
    msg.setSource(12345U);
    msg.setSourceEntity(237U);
    msg.setDestination(929U);
    msg.setDestinationEntity(49U);
    msg.x = 0.383192092876;
    msg.y = 0.834527635854;
    msg.z1 = 0.256374289439;
    msg.z2 = 0.882382687691;

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
    msg.setTimeStamp(0.0326368303111);
    msg.setSource(22300U);
    msg.setSourceEntity(138U);
    msg.setDestination(1264U);
    msg.setDestinationEntity(43U);
    msg.x = 0.68989632309;
    msg.y = 0.573832744417;
    msg.z1 = 0.942651512367;
    msg.z2 = 0.109142043264;

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
    msg.setTimeStamp(0.92773840796);
    msg.setSource(20544U);
    msg.setSourceEntity(207U);
    msg.setDestination(3533U);
    msg.setDestinationEntity(84U);
    msg.x = 0.930918039329;
    msg.y = 0.981508938458;
    msg.z1 = 0.0673528682516;
    msg.z2 = 0.544794230704;

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
    msg.setTimeStamp(0.879452798378);
    msg.setSource(24044U);
    msg.setSourceEntity(23U);
    msg.setDestination(45158U);
    msg.setDestinationEntity(91U);
    msg.beam1 = 0.218882571624;
    msg.beam2 = 0.784045406543;
    msg.beam3 = 0.860991354096;
    msg.beam4 = 0.728365416276;

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
    msg.setTimeStamp(0.343636509804);
    msg.setSource(47832U);
    msg.setSourceEntity(226U);
    msg.setDestination(53078U);
    msg.setDestinationEntity(147U);
    msg.beam1 = 0.359432818017;
    msg.beam2 = 0.104265243924;
    msg.beam3 = 0.180786794592;
    msg.beam4 = 0.560514279292;

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
    msg.setTimeStamp(0.153235889107);
    msg.setSource(33379U);
    msg.setSourceEntity(201U);
    msg.setDestination(48446U);
    msg.setDestinationEntity(171U);
    msg.beam1 = 0.481237414945;
    msg.beam2 = 0.532716926777;
    msg.beam3 = 0.385147587699;
    msg.beam4 = 0.463063080199;

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
    msg.setTimeStamp(0.59547172946);
    msg.setSource(40915U);
    msg.setSourceEntity(219U);
    msg.setDestination(56638U);
    msg.setDestinationEntity(143U);
    msg.beam1 = 57U;
    msg.beam2 = 30U;
    msg.beam3 = 81U;
    msg.beam4 = 228U;

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
    msg.setTimeStamp(0.0458085071086);
    msg.setSource(52042U);
    msg.setSourceEntity(157U);
    msg.setDestination(56936U);
    msg.setDestinationEntity(114U);
    msg.beam1 = 193U;
    msg.beam2 = 63U;
    msg.beam3 = 179U;
    msg.beam4 = 138U;

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
    msg.setTimeStamp(0.62592449238);
    msg.setSource(42485U);
    msg.setSourceEntity(235U);
    msg.setDestination(59142U);
    msg.setDestinationEntity(128U);
    msg.beam1 = 22U;
    msg.beam2 = 39U;
    msg.beam3 = 252U;
    msg.beam4 = 136U;

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
    msg.setTimeStamp(0.0702399650847);
    msg.setSource(13915U);
    msg.setSourceEntity(143U);
    msg.setDestination(52512U);
    msg.setDestinationEntity(21U);
    msg.cellposition = 116U;
    msg.x = 0.941687132377;
    msg.y = 0.956922340061;
    msg.z1 = 0.135997958177;
    msg.z2 = 0.831151511845;
    msg.amp0 = 0.925959523219;
    msg.amp1 = 0.746417118224;
    msg.amp2 = 0.0514165131651;
    msg.amp3 = 0.379185635864;
    msg.cor0 = 185U;
    msg.cor1 = 238U;
    msg.cor2 = 217U;
    msg.cor3 = 127U;

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
    msg.setTimeStamp(0.515844156106);
    msg.setSource(44134U);
    msg.setSourceEntity(121U);
    msg.setDestination(23171U);
    msg.setDestinationEntity(3U);
    msg.cellposition = 180U;
    msg.x = 0.542576719669;
    msg.y = 0.905769322702;
    msg.z1 = 0.743199707709;
    msg.z2 = 0.930287247073;
    msg.amp0 = 0.536157896747;
    msg.amp1 = 0.92421516409;
    msg.amp2 = 0.249268613277;
    msg.amp3 = 0.998359752285;
    msg.cor0 = 195U;
    msg.cor1 = 168U;
    msg.cor2 = 164U;
    msg.cor3 = 177U;

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
    msg.setTimeStamp(0.69560764262);
    msg.setSource(55520U);
    msg.setSourceEntity(122U);
    msg.setDestination(51299U);
    msg.setDestinationEntity(156U);
    msg.cellposition = 191U;
    msg.x = 0.29057850006;
    msg.y = 0.255514383755;
    msg.z1 = 0.351272252244;
    msg.z2 = 0.168746883954;
    msg.amp0 = 0.0965012193281;
    msg.amp1 = 0.323258137173;
    msg.amp2 = 0.439514462742;
    msg.amp3 = 0.891558999323;
    msg.cor0 = 140U;
    msg.cor1 = 116U;
    msg.cor2 = 69U;
    msg.cor3 = 44U;

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
    msg.setTimeStamp(0.642452031773);
    msg.setSource(1231U);
    msg.setSourceEntity(148U);
    msg.setDestination(45257U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.146853512228);
    msg.setSource(8718U);
    msg.setSourceEntity(42U);
    msg.setDestination(4798U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.0953520524362);
    msg.setSource(8517U);
    msg.setSourceEntity(168U);
    msg.setDestination(62053U);
    msg.setDestinationEntity(245U);
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cellposition = 94U;
    tmp_msg_0.x = 0.109149842592;
    tmp_msg_0.y = 0.162596462851;
    tmp_msg_0.z1 = 0.415541755369;
    tmp_msg_0.z2 = 0.00863697188234;
    tmp_msg_0.amp0 = 0.676830928834;
    tmp_msg_0.amp1 = 0.712439866285;
    tmp_msg_0.amp2 = 0.317955751705;
    tmp_msg_0.amp3 = 0.216020812578;
    tmp_msg_0.cor0 = 55U;
    tmp_msg_0.cor1 = 32U;
    tmp_msg_0.cor2 = 243U;
    tmp_msg_0.cor3 = 88U;
    msg.currentprofile.push_back(tmp_msg_0);

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

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
// IMC XML MD5: 0030d454b816a0636cd3551ac1ef7ed9                            *
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
    msg.setTimeStamp(0.967143129263);
    msg.setSource(63881U);
    msg.setSourceEntity(250U);
    msg.setDestination(34827U);
    msg.setDestinationEntity(49U);
    msg.state = 83U;
    msg.flags = 6U;
    msg.description.assign("KLCBPYSTDAAJHVSWHDTQAKCIKFOBKNOQOTKNFLMMYZFKENTXEAV");

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
    msg.setTimeStamp(0.364243380585);
    msg.setSource(42628U);
    msg.setSourceEntity(102U);
    msg.setDestination(47368U);
    msg.setDestinationEntity(55U);
    msg.state = 212U;
    msg.flags = 22U;
    msg.description.assign("VCOIHTMLUDZAKMPBRPEVDFMBYPVOBHBYJGNVKJXKSWNDRNZAYRNTYDBTQJADVHARFMDLJQQIUZWRBCCTOMNGCXQLTGSDJVSFUXRQFPRXUCHASRFFQWKTHOONKYQPEHCRLPOGFXZJNLHHOBKJFCWSTIYECZVFSUPWJMKEAZCVWDZSXALQGSGIGIJFMWEIBIBEBAYYPQYPUNKOKLGOSAKREWHYENCTUUIWMSQZTLDGIAXZVHVZMLPGUEOMXD");

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
    msg.setTimeStamp(0.299931737209);
    msg.setSource(57295U);
    msg.setSourceEntity(121U);
    msg.setDestination(25232U);
    msg.setDestinationEntity(250U);
    msg.state = 53U;
    msg.flags = 34U;
    msg.description.assign("MHLLDPUQLJVAORBNQEKGJHVMAWXXEERYBCLVGSGWZCCHZAKTOSMHMLNNGTZSUIDAQEFVXWXJTFZGMZQMYZDCSYUD");

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
    msg.setTimeStamp(0.411576272038);
    msg.setSource(32671U);
    msg.setSourceEntity(224U);
    msg.setDestination(29281U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.0496387978195);
    msg.setSource(53119U);
    msg.setSourceEntity(13U);
    msg.setDestination(64199U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.197403159683);
    msg.setSource(21684U);
    msg.setSourceEntity(33U);
    msg.setDestination(59852U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.0915937110263);
    msg.setSource(32665U);
    msg.setSourceEntity(108U);
    msg.setDestination(30210U);
    msg.setDestinationEntity(215U);
    msg.id = 30U;
    msg.label.assign("DFUYENCCAAAWRSMRKMNOJOSGUKIJAQGUOFKCRXDHZCHKALOQLDSRHYYJSAVPDL");
    msg.component.assign("EASWPIYBOVCO");
    msg.act_time = 34232U;
    msg.deact_time = 44621U;

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
    msg.setTimeStamp(0.752090269864);
    msg.setSource(44797U);
    msg.setSourceEntity(140U);
    msg.setDestination(29487U);
    msg.setDestinationEntity(51U);
    msg.id = 143U;
    msg.label.assign("NHWQHLTTNRJUPSYKSOUHRYGPXGVDRDLKBIZIMZCVTGZTQEPPLXBTLYYGUPNIYEAMNQCRIYUBSGOKAEVXEOKMDHLOMXATVZNNKFRQDFLDKELJSDWMXHDHZQHVUKEWWJQELAYEYBTBJQAWZFCAXUUNFODWXJZVMZIHTFHGGBNKIARCOXSZAIJCBYZUGVW");
    msg.component.assign("KBKPYMVLVKHUWODXOHBHEHAJWJXYSTQRZIDBLNAJCRIBWBYMVRJEPGQDTSVSEZTZKJWVIRTVPWOKNHNFYNIQOWAOSMBFSGDKMRCUOZJTVCNUBPMANFDLYLQWAAIVXJRGMPTFUJWXYTACZUMOUEGRGHGZIVBZDFAXHEINBTLPPXSUKHSSYOFCXYQ");
    msg.act_time = 16493U;
    msg.deact_time = 23831U;

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
    msg.setTimeStamp(0.435451569877);
    msg.setSource(38092U);
    msg.setSourceEntity(150U);
    msg.setDestination(27141U);
    msg.setDestinationEntity(162U);
    msg.id = 155U;
    msg.label.assign("FTXMBIAVZPYBOYUJKCGRVJGOAQWYBAOIMIMRSQTXVSGDQCQPEJTNZEBEJCFFOPHUSZEHCBMHLGUEH");
    msg.component.assign("SSRFEPFNHFYKNXWZNSWZFCCJWFTFIPXWVWXSLLFDBAWUMXZCLGMBDPCOPQDTXKRJEGIFBLTQICCDSZPYHVPOKIORITBURYUGTYKGNEAMPUGABVIGUBBRAKZCHGESWXLNJTYJDRAYBLVLG");
    msg.act_time = 3427U;
    msg.deact_time = 32722U;

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
    msg.setTimeStamp(0.759961551272);
    msg.setSource(15399U);
    msg.setSourceEntity(225U);
    msg.setDestination(58282U);
    msg.setDestinationEntity(8U);
    msg.id = 18U;

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
    msg.setTimeStamp(0.702331303894);
    msg.setSource(61785U);
    msg.setSourceEntity(80U);
    msg.setDestination(24432U);
    msg.setDestinationEntity(205U);
    msg.id = 90U;

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
    msg.setTimeStamp(0.752999345332);
    msg.setSource(21859U);
    msg.setSourceEntity(124U);
    msg.setDestination(6274U);
    msg.setDestinationEntity(11U);
    msg.id = 4U;

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
    msg.setTimeStamp(0.639933250901);
    msg.setSource(37903U);
    msg.setSourceEntity(203U);
    msg.setDestination(50446U);
    msg.setDestinationEntity(93U);
    msg.op = 2U;
    msg.list.assign("THNEOEQORLADBUGTHOQQSHGHQYQMEOXYMVMPSSVMESWUDTMTCHWNAPYINCKVLLEPVPDBFJAVIAKDEOKPFSTYEJBOHGKRCNZVWPLESJJIBYZRSWGRUFJNZDZDSSUVIFDFJIAYEAJPPAAXURZZUINUNXPEQQWBTMLATKCIIBRNNXUZJQPTBXDGKRXVFYGKJGXCKSRCCHWWMACCGBWMZUOHLWOGWQJXCLVIZDGLFKBTBF");

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
    msg.setTimeStamp(0.675781361512);
    msg.setSource(57964U);
    msg.setSourceEntity(219U);
    msg.setDestination(24127U);
    msg.setDestinationEntity(16U);
    msg.op = 25U;
    msg.list.assign("SGQEHAWSFSULBZWRULQRAPQXLPOSVNODCJLKDSTZNTZIXUTPPVRHMDYUCQTHXPGKVPNEHAYGSLLMBBSGWEWFOVDGUJY");

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
    msg.setTimeStamp(0.414265433515);
    msg.setSource(20999U);
    msg.setSourceEntity(83U);
    msg.setDestination(59873U);
    msg.setDestinationEntity(149U);
    msg.op = 13U;
    msg.list.assign("LQPVSODKCOVZPOZJHWSTVIBTFJHWK");

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
    msg.setTimeStamp(0.416268198838);
    msg.setSource(28623U);
    msg.setSourceEntity(128U);
    msg.setDestination(36722U);
    msg.setDestinationEntity(41U);
    msg.value = 173U;

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
    msg.setTimeStamp(0.944329169369);
    msg.setSource(722U);
    msg.setSourceEntity(31U);
    msg.setDestination(38480U);
    msg.setDestinationEntity(153U);
    msg.value = 158U;

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
    msg.setTimeStamp(0.684062456823);
    msg.setSource(59611U);
    msg.setSourceEntity(80U);
    msg.setDestination(47012U);
    msg.setDestinationEntity(89U);
    msg.value = 152U;

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
    msg.setTimeStamp(0.586437723676);
    msg.setSource(57502U);
    msg.setSourceEntity(254U);
    msg.setDestination(17657U);
    msg.setDestinationEntity(172U);
    msg.consumer.assign("OROUZVNURHWJUIFSEZAFOIRHNKHBTELBHIXQZPAEIGRWRSDPGBNYQTVUVJTWGLMRVYMYKYAEGN");
    msg.message_id = 32772U;

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
    msg.setTimeStamp(0.712786625833);
    msg.setSource(34239U);
    msg.setSourceEntity(29U);
    msg.setDestination(19907U);
    msg.setDestinationEntity(160U);
    msg.consumer.assign("MYXRVOENEDAZQJPANLMQXFWWIHHRBYRSPFJEZTSPUHTOZKQSBPYADRNGANJQBWYFYVUJDEEQSLT");
    msg.message_id = 59916U;

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
    msg.setTimeStamp(0.917584844138);
    msg.setSource(4596U);
    msg.setSourceEntity(214U);
    msg.setDestination(58829U);
    msg.setDestinationEntity(227U);
    msg.consumer.assign("RPDTHOHMEXMVXDZNUQGRLMTAUCKYZCZPDEQKCGRBUMOYMCXLSBTOJHGCNHHFDIXNYWRIFLGBXSTCVSQQSUSIBWUDPQWDWTJMUVRDBKOVVNTOETBSAFKBSCIQJPTZIALHKEGTZJYOQYSTAMFDWINPRIEFJQJACLWKGJAZXUXNGBASVCHBFOCLZQLVNAPRENVXWZIRZGULNMZGJKHYYYWQSPAEJGLOXHMUVAEFKIBMVPKFFW");
    msg.message_id = 52627U;

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
    msg.setTimeStamp(0.122789098081);
    msg.setSource(51681U);
    msg.setSourceEntity(4U);
    msg.setDestination(15132U);
    msg.setDestinationEntity(188U);
    msg.type = 56U;

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
    msg.setTimeStamp(0.502074051887);
    msg.setSource(59001U);
    msg.setSourceEntity(5U);
    msg.setDestination(1958U);
    msg.setDestinationEntity(101U);
    msg.type = 134U;

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
    msg.setTimeStamp(0.899303223149);
    msg.setSource(29118U);
    msg.setSourceEntity(211U);
    msg.setDestination(3819U);
    msg.setDestinationEntity(103U);
    msg.type = 74U;

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
    msg.setTimeStamp(0.846258185676);
    msg.setSource(34856U);
    msg.setSourceEntity(97U);
    msg.setDestination(49579U);
    msg.setDestinationEntity(134U);
    msg.op = 214U;

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
    msg.setTimeStamp(0.213529386416);
    msg.setSource(11366U);
    msg.setSourceEntity(206U);
    msg.setDestination(36096U);
    msg.setDestinationEntity(82U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.616428083239);
    msg.setSource(13829U);
    msg.setSourceEntity(192U);
    msg.setDestination(40471U);
    msg.setDestinationEntity(92U);
    msg.op = 208U;

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
    msg.setTimeStamp(0.313901321224);
    msg.setSource(34879U);
    msg.setSourceEntity(65U);
    msg.setDestination(64453U);
    msg.setDestinationEntity(80U);
    msg.total_steps = 151U;
    msg.step_number = 83U;
    msg.step.assign("BVCJKRKDASZXVHUASLQFVXWHGNKJYECSSTIQOARHPAYGMGJOTZFDNJPUPELDIAZDMWFNJLNUKLWNPRNOWTNZLPGELKVOBXLVLYQHKIRCOBURHFARGSZ");
    msg.flags = 40U;

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
    msg.setTimeStamp(0.198616299916);
    msg.setSource(58476U);
    msg.setSourceEntity(73U);
    msg.setDestination(1907U);
    msg.setDestinationEntity(52U);
    msg.total_steps = 85U;
    msg.step_number = 251U;
    msg.step.assign("EGFHSBPJGQAWHNPVYCWIUWJTYXXWPXXVQHZOAQGVJUPDHBZZYQPFGOENTAOYSNPGIIBRMJWVNDPUJVHRXVQOAGJMXHOTMBSYCKRRRAFXOCLBCBZCLYBXUQMAGHOOMNSKRUKJCNZQFRECPL");
    msg.flags = 20U;

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
    msg.setTimeStamp(0.414550663859);
    msg.setSource(8615U);
    msg.setSourceEntity(246U);
    msg.setDestination(23816U);
    msg.setDestinationEntity(184U);
    msg.total_steps = 158U;
    msg.step_number = 188U;
    msg.step.assign("IBRRUXQBHNWWZLKDLLCXORSWEBNP");
    msg.flags = 9U;

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
    msg.setTimeStamp(0.877596430059);
    msg.setSource(28789U);
    msg.setSourceEntity(160U);
    msg.setDestination(36109U);
    msg.setDestinationEntity(2U);
    msg.state = 249U;
    msg.error.assign("GACVBLPKFXSRMGTEWSROBVMHOTOBUOOSWLGGWRQCPTJBQAVDVRSJODHYLRWXVLONDBENGSUJUKKMIJAPPZURCQWNGPFPBLT");

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
    msg.setTimeStamp(0.0602609313424);
    msg.setSource(24785U);
    msg.setSourceEntity(223U);
    msg.setDestination(65093U);
    msg.setDestinationEntity(16U);
    msg.state = 161U;
    msg.error.assign("HHACFQGAURPZVMSPFUBAWVCKKFXZJLHALBTOTJZHWWSSWQMVTNCRKFCTDUYWAIDQRXHXQPXAQYHZSSEANYSOQWPJMOLLUAUHULRZNXXOAKCUWGXODTGLMWCYZNKBNVIBJYFOQKRZGVPQKEGJJJPFRBPDITKGC");

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
    msg.setTimeStamp(0.137247714371);
    msg.setSource(8506U);
    msg.setSourceEntity(143U);
    msg.setDestination(50765U);
    msg.setDestinationEntity(209U);
    msg.state = 59U;
    msg.error.assign("HPHCNPWEIOPXNVKUUOSEBIJYKRMOANJYJXFYDAZLFQBMQDLHTOCHCDUZFWKQLSYCESZJYPZZGOJYQBKEDTQDBLSGXNBJKMFNIJPLITCUDVPTPUHXCNWEFMXUGCMSYXOLROQAIZWDTEYFLPMGTVGJHZZSVHSFCRNSQGPNVBEMWABRVWUFVRMEGZ");

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
    msg.setTimeStamp(0.571303004687);
    msg.setSource(3798U);
    msg.setSourceEntity(136U);
    msg.setDestination(28487U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.492736258039);
    msg.setSource(6344U);
    msg.setSourceEntity(122U);
    msg.setDestination(39488U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.525347345666);
    msg.setSource(25004U);
    msg.setSourceEntity(72U);
    msg.setDestination(22576U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.666325389886);
    msg.setSource(61265U);
    msg.setSourceEntity(141U);
    msg.setDestination(37378U);
    msg.setDestinationEntity(62U);
    msg.op = 192U;
    msg.speed_min = 0.804296533131;
    msg.speed_max = 0.19495380557;
    msg.long_accel = 0.194017184982;
    msg.alt_max_msl = 0.0501515238146;
    msg.dive_fraction_max = 0.614209570395;
    msg.climb_fraction_max = 0.822556386384;
    msg.bank_max = 0.795722344739;
    msg.p_max = 0.461236035723;
    msg.pitch_min = 0.607742637744;
    msg.pitch_max = 0.760473539573;
    msg.q_max = 0.0736387778977;
    msg.g_min = 0.000967845562199;
    msg.g_max = 0.574656798958;
    msg.g_lat_max = 0.959535943333;
    msg.rpm_min = 0.233201739744;
    msg.rpm_max = 0.830742760449;
    msg.rpm_rate_max = 0.375954092664;

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
    msg.setTimeStamp(0.386098103632);
    msg.setSource(62656U);
    msg.setSourceEntity(171U);
    msg.setDestination(19932U);
    msg.setDestinationEntity(248U);
    msg.op = 225U;
    msg.speed_min = 0.565310194502;
    msg.speed_max = 0.287429822912;
    msg.long_accel = 0.258906409728;
    msg.alt_max_msl = 0.931681239627;
    msg.dive_fraction_max = 0.259709253063;
    msg.climb_fraction_max = 0.674149373664;
    msg.bank_max = 0.378514425112;
    msg.p_max = 0.192863539017;
    msg.pitch_min = 0.882119514039;
    msg.pitch_max = 0.535292889248;
    msg.q_max = 0.124844658762;
    msg.g_min = 0.74383583641;
    msg.g_max = 0.872621184003;
    msg.g_lat_max = 0.667300787999;
    msg.rpm_min = 0.364000231917;
    msg.rpm_max = 0.922840856084;
    msg.rpm_rate_max = 0.316317853733;

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
    msg.setTimeStamp(0.597038349407);
    msg.setSource(15827U);
    msg.setSourceEntity(102U);
    msg.setDestination(14601U);
    msg.setDestinationEntity(70U);
    msg.op = 42U;
    msg.speed_min = 0.361684672009;
    msg.speed_max = 0.623300521219;
    msg.long_accel = 0.367489540028;
    msg.alt_max_msl = 0.53388938192;
    msg.dive_fraction_max = 0.28084707284;
    msg.climb_fraction_max = 0.040719085906;
    msg.bank_max = 0.593273813935;
    msg.p_max = 0.298287934632;
    msg.pitch_min = 0.281160996373;
    msg.pitch_max = 0.766851638712;
    msg.q_max = 0.113461306556;
    msg.g_min = 0.766619474081;
    msg.g_max = 0.483933009537;
    msg.g_lat_max = 0.434669341726;
    msg.rpm_min = 0.65262664961;
    msg.rpm_max = 0.33571309884;
    msg.rpm_rate_max = 0.632836360968;

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
    msg.setTimeStamp(0.136729540472);
    msg.setSource(12945U);
    msg.setSourceEntity(156U);
    msg.setDestination(5557U);
    msg.setDestinationEntity(158U);
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 34491U;
    tmp_msg_0.type = 199U;
    tmp_msg_0.max_size = 3373U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.19546034201;
    tmp_tmp_msg_0_0.base_lon = 0.227146328924;
    tmp_tmp_msg_0_0.base_time = 0.726257204661;
    IMC::HistoricSample tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sys_id = 15022U;
    tmp_tmp_tmp_msg_0_0_0.priority = 16;
    tmp_tmp_tmp_msg_0_0_0.x = 6078;
    tmp_tmp_tmp_msg_0_0_0.y = 24953;
    tmp_tmp_tmp_msg_0_0_0.z = 30533;
    tmp_tmp_tmp_msg_0_0_0.t = 21378;
    IMC::Pulse tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sample.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.data.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.107343815058);
    msg.setSource(42739U);
    msg.setSourceEntity(176U);
    msg.setDestination(38511U);
    msg.setDestinationEntity(67U);
    IMC::AisStaticInfo tmp_msg_0;
    tmp_msg_0.id.assign("FOZJOGENZPYMATHBTIKHDJDREMCSQNLIGKVGHJGCLUNIARWZUWMSNNKAXHHXDQBIWTJTAZNYMQQMTMFJBEHMPQADIWGSPHOSNJMOYCFROCJYMOFULQYQEJWDLFAILBRCOGFIVYKFCOTXEV");
    tmp_msg_0.callsign.assign("RESEUKDLYWBIMUSYHAWOLEZOXVAIQVHCJVJMQRYZTIJCHBQRGFUZXHBSKNKEGGIOZUTNSDNPCABWDSBTONYGVZZVW");
    tmp_msg_0.name.assign("CHLAOOHWFWVOGYZGNKFULDZKQSV");
    tmp_msg_0.type_and_cargo = 188U;
    tmp_msg_0.a = 0.540275578936;
    tmp_msg_0.b = 0.993375921599;
    tmp_msg_0.c = 0.605308064348;
    tmp_msg_0.d = 0.944481240265;
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
    msg.setTimeStamp(0.425640285581);
    msg.setSource(52459U);
    msg.setSourceEntity(157U);
    msg.setDestination(63257U);
    msg.setDestinationEntity(215U);
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.808991772808;
    tmp_msg_0.reason = 217U;
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
    msg.setTimeStamp(0.29629374143);
    msg.setSource(3032U);
    msg.setSourceEntity(92U);
    msg.setDestination(63290U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.815772097759;
    msg.lon = 0.885167907731;
    msg.height = 0.60834774166;
    msg.x = 0.0288063836697;
    msg.y = 0.0483936635745;
    msg.z = 0.0186705085924;
    msg.phi = 0.322836523115;
    msg.theta = 0.761745554233;
    msg.psi = 0.133689117496;
    msg.u = 0.14841115747;
    msg.v = 0.670860983563;
    msg.w = 0.797023204421;
    msg.p = 0.392096830165;
    msg.q = 0.865402364599;
    msg.r = 0.617292647267;
    msg.svx = 0.607514929577;
    msg.svy = 0.0109054885717;
    msg.svz = 0.504976694808;

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
    msg.setTimeStamp(0.390697572454);
    msg.setSource(686U);
    msg.setSourceEntity(64U);
    msg.setDestination(4784U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.418505643889;
    msg.lon = 0.867086050957;
    msg.height = 0.703476538782;
    msg.x = 0.898972120187;
    msg.y = 0.125351580887;
    msg.z = 0.287610152767;
    msg.phi = 0.639585417868;
    msg.theta = 0.152514466354;
    msg.psi = 0.669998651461;
    msg.u = 0.627480692685;
    msg.v = 0.347626654268;
    msg.w = 0.973697022323;
    msg.p = 0.124362548576;
    msg.q = 0.384737651154;
    msg.r = 0.0203792526178;
    msg.svx = 0.485061844124;
    msg.svy = 0.656274042961;
    msg.svz = 0.823042702901;

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
    msg.setTimeStamp(0.744821846958);
    msg.setSource(38062U);
    msg.setSourceEntity(70U);
    msg.setDestination(8895U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.527557692285;
    msg.lon = 0.644385544322;
    msg.height = 0.876094366649;
    msg.x = 0.289821813865;
    msg.y = 0.164118098558;
    msg.z = 0.170162577587;
    msg.phi = 0.917847694843;
    msg.theta = 0.462505800845;
    msg.psi = 0.957120034635;
    msg.u = 0.669034134531;
    msg.v = 0.229639607082;
    msg.w = 0.106644068652;
    msg.p = 0.485621987584;
    msg.q = 0.833544729628;
    msg.r = 0.180389033207;
    msg.svx = 0.300858868558;
    msg.svy = 0.231204567184;
    msg.svz = 0.496683279188;

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
    msg.setTimeStamp(0.20220072891);
    msg.setSource(14103U);
    msg.setSourceEntity(212U);
    msg.setDestination(1541U);
    msg.setDestinationEntity(86U);
    msg.op = 120U;
    msg.entities.assign("YTGJIAPDLMKYXCOXCRYCRFGVLAHKKEUIPZKLXWBDHHUNAXIFVSLCMCUULEABPVVVTJJZGRSSQWVAEWFDDSXHNYKJZILHAPB");

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
    msg.setTimeStamp(0.138917380826);
    msg.setSource(634U);
    msg.setSourceEntity(33U);
    msg.setDestination(11348U);
    msg.setDestinationEntity(115U);
    msg.op = 94U;
    msg.entities.assign("CABUJWTZUAKKRMTFDKIOEATGIHZRHFZMEDSDGFLFEBOYPOPLMYGXQREKOFFEHCIUSGHMCCJSLWMMKJRPZBIWQYCXVXPDUBNVEBZCWPOFLHLMVURXKWGDQTHNNRDYFENIQKDYYFSASNGVXEZROJJSBBLTQWURJLQAXWUJBGTAOBRYTYKPSHIOWLZWHVSQSPNTIMVXCPVDOLDZZNXQGYTFVMKUNVRW");

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
    msg.setTimeStamp(0.785294193116);
    msg.setSource(11331U);
    msg.setSourceEntity(35U);
    msg.setDestination(32688U);
    msg.setDestinationEntity(121U);
    msg.op = 235U;
    msg.entities.assign("HBCBNIXSIDHOFSQWPGFYWFUXOSKOTOAEIABMUPNWIDJYQBHEIUETRKZRXGV");

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
    msg.setTimeStamp(0.617760685304);
    msg.setSource(55522U);
    msg.setSourceEntity(144U);
    msg.setDestination(26399U);
    msg.setDestinationEntity(209U);
    msg.type = 83U;
    msg.speed = 771U;
    const char tmp_msg_0[] = {-70, -17, -1, 99, -86, 35, -95, -88, 114, -121, -60, -21, -74, -100, -95, 72, -100, -105, -49, -27, -37, 91, -80, -109, -27, -125, -33, -60, 8, 20, 96, -61, 9, 105, 76, -57, -4, -115, 41, -90, -68, -61, 71, -6, -37, 74, -107, 38, 89, -119, 60, 25, 101, 115, -105, -74, 72, 65, -61, 17, -67, -21, -74, -11, 107, -43, -66, 78, -47, 60, 109, 106, 93, -26, 114, 66, 29, -94, -19, 10, 101, -70, 87, 70, 30, -8, -89, -63, 51, -19, 119, -117, -59, -87, 59, -12, -60, 123, 111, -14, -58, -23, 98, -60, 41, 121, 37, 85, 17, -29, -92, -58, -75, -43, 24, 89, -114, -111, -48, -26, 100, -58, -87, 56, 112, -97, 22, 94, 39, 36, -83, 60, 30, 123, -75, -102, -10, 65, -34, 84, 11, -87, 72, 112, -120, 120, 125, -87, -125, 107, 5, 110, 40, 122, 40, 8, 29, -117, 105, 70, 84, -69, 60, 88, 59, 88, -127, -2, -60, -63, -37, -96, -3, 87, 13, 36, 76, 103, 58, 20, -77, -2, -101, 68};
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
    msg.setTimeStamp(0.933246375006);
    msg.setSource(7174U);
    msg.setSourceEntity(205U);
    msg.setDestination(19940U);
    msg.setDestinationEntity(246U);
    msg.type = 186U;
    msg.speed = 28541U;
    const char tmp_msg_0[] = {22, 36, -49, 72, -31, -36, 1, -34, 94, -98, -53, -71, 19, -3, 29, 23, 95, 86, 63, 85, -114, 66, 123, 60, -103, -64, 93, -65, -113, -105, -32, -55, -93, -57, -97, 122, 92, 2, 100, 84, 52, -71, 66, -128, -78, -86, -48, -53, 122, -82, -28, 112, -18, -17, 101, -80, 78, 109, -9, 110, -49, -50, -44, -114, -116, 84, 87, -90, 96, 1, -8, -19, 56, -117, 82, 47, 67, 43, -103, 118, -113, 4, 20, 60, 107, -42, 20, 6, 93, -52, -66, 125, 80, 45, -42, -80, -70, 44, 16, 112, -45, 92, 58, 46, -39, -25, -8, -37, 45, 48, 115, 60, 86, 67, -61, -128, 48, -3, 19, 73, 42, -82, 51, -74, -115};
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
    msg.setTimeStamp(0.805501467905);
    msg.setSource(38468U);
    msg.setSourceEntity(105U);
    msg.setDestination(1125U);
    msg.setDestinationEntity(249U);
    msg.type = 113U;
    msg.speed = 36423U;
    const char tmp_msg_0[] = {-82, -36, -15, -2, 108, 93, -126, -73, 66, -58, 53, -48, -23};
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
    msg.setTimeStamp(0.335944396607);
    msg.setSource(8711U);
    msg.setSourceEntity(123U);
    msg.setDestination(37068U);
    msg.setDestinationEntity(249U);
    msg.op = 200U;
    msg.tas2acc_pgain = 0.400839702338;
    msg.bank2p_pgain = 0.614849438838;

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
    msg.setTimeStamp(0.986257069444);
    msg.setSource(59105U);
    msg.setSourceEntity(134U);
    msg.setDestination(29136U);
    msg.setDestinationEntity(80U);
    msg.op = 207U;
    msg.tas2acc_pgain = 0.270249451204;
    msg.bank2p_pgain = 0.222889311905;

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
    msg.setTimeStamp(0.676625590921);
    msg.setSource(9147U);
    msg.setSourceEntity(101U);
    msg.setDestination(32474U);
    msg.setDestinationEntity(70U);
    msg.op = 18U;
    msg.tas2acc_pgain = 0.270417754143;
    msg.bank2p_pgain = 0.678343035675;

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
    msg.setTimeStamp(0.233556788378);
    msg.setSource(36192U);
    msg.setSourceEntity(105U);
    msg.setDestination(62061U);
    msg.setDestinationEntity(179U);
    msg.available = 3922020470U;
    msg.value = 122U;

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
    msg.setTimeStamp(0.554171806564);
    msg.setSource(36106U);
    msg.setSourceEntity(199U);
    msg.setDestination(49778U);
    msg.setDestinationEntity(32U);
    msg.available = 3790138569U;
    msg.value = 12U;

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
    msg.setTimeStamp(0.326637610085);
    msg.setSource(8690U);
    msg.setSourceEntity(25U);
    msg.setDestination(15802U);
    msg.setDestinationEntity(18U);
    msg.available = 3436046589U;
    msg.value = 160U;

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
    msg.setTimeStamp(0.0918157003108);
    msg.setSource(41995U);
    msg.setSourceEntity(71U);
    msg.setDestination(11397U);
    msg.setDestinationEntity(32U);
    msg.op = 115U;
    msg.snapshot.assign("UNCYKHJZURCHMWKOFHSTTCRLUGOVENVRAZGPLKISFWIYRIEYGYLYLTTKPYVQZIARWWMPQETVFTXMTSPKSTQGRUYJRAYUBGKQHDOAJKDHHKXGGDBNZRPNHVQIZBXAFDDPCSCLUODUFVJLIHTMSANBOIEJEPCMGWDNTEYVAQBIDCIJMAGXSRBBSUIGQHWHOJLQVPZELFEEDONXUKOXQVXSAOJXBLZVUMDMBCKLNWWJRXPXFPNM");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 55799U;
    tmp_msg_0.name.assign("IXHSYEYHRSBQPDZGZSTESNFPYBQPQBSFQNWZUVHDZLCAIVLDBAGWXYPGJFNHWCOJONUTYODLEOKBONWQMWXE");
    tmp_msg_0.custom.assign("UTFHPJSAQDKKDXSFTWQCBUESGTUJFZHQZBZONEWWEVOFZJIUYYMVALTTELOCXXMRYAEJIJHZOMHROEUADPMGACXWWDREQGDKBIKUYCCVZVXCKDIBBMCMGNANJNFMGVZSKIKVWPEHBNNWSZBJQTVZOIHTQROBYPYVDLRLAWPBESQJGBHQDOHRKYAD");
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
    msg.setTimeStamp(0.00130579292054);
    msg.setSource(39133U);
    msg.setSourceEntity(12U);
    msg.setDestination(30816U);
    msg.setDestinationEntity(194U);
    msg.op = 79U;
    msg.snapshot.assign("JXVKDSBGLUMYVPSXIYAFJNOCDNINEVZZRMEYFNIIDALXCYEZILJBAZOPBTXQMRAWBDFWOEWHGUXKHDNHAYEFCFJCYPWJXFPLGOTPSZLZNREAGSLHFTNDICYAEMTZGRVQJQSI");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.163503055321;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 19878U;
    tmp_msg_0.custom.assign("KXCYGPYWXGRKPBLLKSEEOQRUJNZKFZABVFEHTHXUILAQVIRCYTCWSONVJIPOFUHEJQBAOZPULSFGPWKHSRJKLHLBWZRTCYNZJJMKIWOQNGXZKXC");
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
    msg.setTimeStamp(0.699487742213);
    msg.setSource(1011U);
    msg.setSourceEntity(238U);
    msg.setDestination(38863U);
    msg.setDestinationEntity(176U);
    msg.op = 187U;
    msg.snapshot.assign("UABPUJDVUILCTFGGGNEAYUJMMLTXFNEKHPMNDSMIWOZSROEWRSHDRXTRHQNRJFQGCMWYRGBQMOISV");
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("MHTUGJYHGLZQ");
    tmp_msg_0.data.assign("THDOWRNQVNPYBXFOGZFMADNHIPMNMCW");
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
    msg.setTimeStamp(0.530723398291);
    msg.setSource(33844U);
    msg.setSourceEntity(180U);
    msg.setDestination(42400U);
    msg.setDestinationEntity(252U);
    msg.op = 108U;
    msg.name.assign("EARLQZVDVPNUXYNARIMZSKYPTNNZKWHAQPPTFVFJWPPSRFJXHZSMGVLYMOQCLB");

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
    msg.setTimeStamp(0.832418361896);
    msg.setSource(40152U);
    msg.setSourceEntity(219U);
    msg.setDestination(32912U);
    msg.setDestinationEntity(152U);
    msg.op = 132U;
    msg.name.assign("RGECKRUHOHQLUCEHRWZHYCTYJBLUWMJIDQXNDWOMBWENYPGJWXWUZILFQMBEJKRNNIAFYWZDWZJFOSTTAMQPYIAUQHVBSAELSSJ");

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
    msg.setTimeStamp(0.611673383705);
    msg.setSource(50121U);
    msg.setSourceEntity(237U);
    msg.setDestination(49008U);
    msg.setDestinationEntity(149U);
    msg.op = 19U;
    msg.name.assign("HAHVGLQMBOEULDVQNIBIBWLAOMHQYQUCPQIANHDGNIBWFMJCGYTYMRXSNPUXPKVENRKBYFTSZAZPLBRUMEYEECHTLDQECTCXJFYKWKJSMJGZYRZVGKERLGOXQVODKWUSZJOUKGASXLFSZFGVOJCYMVTKSIAABEXIYANVJXROZPKBRCDUZTNBJOAJDWHVCPROYWRWKPSPAGZDXISQLWFEQCTHXFDUBWTLS");

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
    msg.setTimeStamp(0.0713168097717);
    msg.setSource(58500U);
    msg.setSourceEntity(52U);
    msg.setDestination(27353U);
    msg.setDestinationEntity(79U);
    msg.type = 196U;
    msg.htime = 0.118272463964;
    msg.context.assign("RYHQQNDMTUWGSABJDSESZTWFKLPZWFYRQZFBIIEKMDBGUKQMPNQDJYRVZHFKVBFROUMGUDIGL");
    msg.text.assign("IGOOYZWDIHYVMVSCCKXYHVYOIGXHUIFMOGFRRSFOUCLEHBCOYPJHZEVHMTEWAGDVWHCPXDPLJTQQD");

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
    msg.setTimeStamp(0.605135416945);
    msg.setSource(38815U);
    msg.setSourceEntity(54U);
    msg.setDestination(60183U);
    msg.setDestinationEntity(233U);
    msg.type = 41U;
    msg.htime = 0.690237982959;
    msg.context.assign("ZJYKELFLGKEOJLVIQYFRKO");
    msg.text.assign("VLLZVCPWFODYISAYXZDILAHTNSZCZWKQVCQFEVFOSPUENXBDYVVTUHJJFYKIGHBFAJMHKGOSPHKZPKWHULNMNNGPOJWFLBDWDKZTKFIIYGJRQJNCEVGOTVEFSVQAXNEPPTJEDOSIRLWPQIENTLTDBTZEIRFCJEUAHOHUUGAUSOYXAXCYLLRUBNNHRXYDMORRGSGYHZICMBXKSXMMUSABQCPKWLFMWJPJCBZU");

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
    msg.setTimeStamp(0.597423882223);
    msg.setSource(24094U);
    msg.setSourceEntity(64U);
    msg.setDestination(61406U);
    msg.setDestinationEntity(215U);
    msg.type = 34U;
    msg.htime = 0.879144708877;
    msg.context.assign("JJDRCWFTMYNWLKHWYXLAMUHUCGFIMDXXSNKJTKTNRGCOSRZCAKXMEWVBWGHMBQBJQRZVDLHBMISLUKPWQXWDBCBELNTKNIALVRJEIEFLDYFTAIXMRPIDZEYUCFGERYKDZTEFTLNUAZFXOSMGJOVIUVQOHRUPJBIOHTQAZQHXCTRELYHAMVWGQOSPZQFMCDOIVDBUPGPUNGSAOQDJBYQCNYBPOXYHZSKZRLGKSUVHOWXAWPZNSPNPKV");
    msg.text.assign("TAOWFFPDZYSQVSLKGXVRRIRHMJNRRCINRZUTNZLUTPYQIXAWCHILXURHHAXYKDJSAYDONXDBNHEYUGRDIDKQPHXESJKVGJKSAYBIEOEDWTMPGBDGFEBCOVOGISJUONWKSGFUTPDCCBATHSLFUMQFSWEJBCMJXMYOX");

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
    msg.setTimeStamp(0.659116121196);
    msg.setSource(45075U);
    msg.setSourceEntity(39U);
    msg.setDestination(29540U);
    msg.setDestinationEntity(105U);
    msg.command = 174U;
    msg.htime = 0.999775290317;

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
    msg.setTimeStamp(0.1178584448);
    msg.setSource(29947U);
    msg.setSourceEntity(16U);
    msg.setDestination(20167U);
    msg.setDestinationEntity(15U);
    msg.command = 226U;
    msg.htime = 0.411960976711;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 14U;
    tmp_msg_0.htime = 0.404677737805;
    tmp_msg_0.context.assign("EHMSXLNOTJREHYGNNTIZMXSKFYLGDPFUQCCUNRPUABTJSKAOYIXZOFKYKLMAOAN");
    tmp_msg_0.text.assign("CDWKPDHCULLRTDWBDKPHSJZNYRVTNZLZEBDIZYZGLFRJWBIKQMGYSMOCRFKSGRGPOFPBKRQSXSJBVBNRXLVNYWPATAHKMQPBAMEZDDKNVTJCWNFOWYOUMLURAMAGDGCVFEZOOZAQNXEXRTHOQAEJVIFSYOSBIRHUDGTQVKXOIVJIAFFZXLLPEUWIXMGJTIUJWMXQMQOTZDHYXUPTFSYNUSVFMCEALNQCVKJWLPEEQB");
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
    msg.setTimeStamp(0.394734575245);
    msg.setSource(50550U);
    msg.setSourceEntity(80U);
    msg.setDestination(2318U);
    msg.setDestinationEntity(191U);
    msg.command = 137U;
    msg.htime = 0.0476862881558;

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
    msg.setTimeStamp(0.673995372486);
    msg.setSource(34234U);
    msg.setSourceEntity(73U);
    msg.setDestination(894U);
    msg.setDestinationEntity(11U);
    msg.op = 62U;
    msg.file.assign("DLSRBHGRKTTFDGNIEAUPNMIUIFHNGFJQSTHFWFLJPBQKPUVBWCCMAYMHTGYVAINBPWFZUJKJDOHXTUPKVRAOHTDWIGJZUAWWQLGISAZCGEQRQXDELBVOCGKXCEFBMYKDFSXNKPEALYJKCQSVYDWONYWQSILMYEALFHRQCXMQZEJSWRXNOIGVIURUKESZTLBXWHYSGZRPMAUZPV");

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
    msg.setTimeStamp(0.613430407733);
    msg.setSource(29633U);
    msg.setSourceEntity(33U);
    msg.setDestination(45553U);
    msg.setDestinationEntity(172U);
    msg.op = 74U;
    msg.file.assign("TGTNKZSMMNDTHARGKWWUPFNDICLZJDKVBML");

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
    msg.setTimeStamp(0.696600977054);
    msg.setSource(25629U);
    msg.setSourceEntity(48U);
    msg.setDestination(25433U);
    msg.setDestinationEntity(124U);
    msg.op = 249U;
    msg.file.assign("MLFBFAQERFHIHJAEUQKSGPBSIXNXWHKWYAABYXTNFGXEIBCCJXWVHBHZJIDTN");

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
    msg.setTimeStamp(0.204649508281);
    msg.setSource(3474U);
    msg.setSourceEntity(35U);
    msg.setDestination(32523U);
    msg.setDestinationEntity(226U);
    msg.op = 31U;
    msg.clock = 0.194853447953;
    msg.tz = -20;

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
    msg.setTimeStamp(0.515944129696);
    msg.setSource(61907U);
    msg.setSourceEntity(228U);
    msg.setDestination(60013U);
    msg.setDestinationEntity(152U);
    msg.op = 237U;
    msg.clock = 0.527969428317;
    msg.tz = 111;

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
    msg.setTimeStamp(0.202103427673);
    msg.setSource(46130U);
    msg.setSourceEntity(145U);
    msg.setDestination(17711U);
    msg.setDestinationEntity(18U);
    msg.op = 17U;
    msg.clock = 0.840151086762;
    msg.tz = 122;

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
    msg.setTimeStamp(0.491101364998);
    msg.setSource(45224U);
    msg.setSourceEntity(170U);
    msg.setDestination(55171U);
    msg.setDestinationEntity(75U);
    msg.conductivity = 0.515875981766;
    msg.temperature = 0.669424157119;
    msg.depth = 0.816443014359;

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
    msg.setTimeStamp(0.882168883353);
    msg.setSource(53325U);
    msg.setSourceEntity(58U);
    msg.setDestination(26156U);
    msg.setDestinationEntity(186U);
    msg.conductivity = 0.972649611339;
    msg.temperature = 0.308856180351;
    msg.depth = 0.978250286002;

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
    msg.setTimeStamp(0.380215581704);
    msg.setSource(36990U);
    msg.setSourceEntity(23U);
    msg.setDestination(5486U);
    msg.setDestinationEntity(114U);
    msg.conductivity = 0.32783058729;
    msg.temperature = 0.665924460724;
    msg.depth = 0.449146992292;

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
    msg.setTimeStamp(0.114977479121);
    msg.setSource(25035U);
    msg.setSourceEntity(110U);
    msg.setDestination(55456U);
    msg.setDestinationEntity(113U);
    msg.altitude = 0.714365316876;
    msg.roll = 64743U;
    msg.pitch = 58283U;
    msg.yaw = 27160U;
    msg.speed = -3025;

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
    msg.setTimeStamp(0.62053510146);
    msg.setSource(53988U);
    msg.setSourceEntity(113U);
    msg.setDestination(18460U);
    msg.setDestinationEntity(182U);
    msg.altitude = 0.876159637133;
    msg.roll = 46576U;
    msg.pitch = 31225U;
    msg.yaw = 24339U;
    msg.speed = -28697;

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
    msg.setTimeStamp(0.99249931432);
    msg.setSource(19876U);
    msg.setSourceEntity(237U);
    msg.setDestination(9366U);
    msg.setDestinationEntity(33U);
    msg.altitude = 0.896807613952;
    msg.roll = 32560U;
    msg.pitch = 46440U;
    msg.yaw = 60406U;
    msg.speed = 25000;

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
    msg.setTimeStamp(0.445120851932);
    msg.setSource(61730U);
    msg.setSourceEntity(11U);
    msg.setDestination(2176U);
    msg.setDestinationEntity(81U);
    msg.altitude = 0.749058638697;
    msg.width = 0.345351697137;
    msg.length = 0.340388548998;
    msg.bearing = 0.784809611839;
    msg.pxl = -19527;
    msg.encoding = 213U;
    const char tmp_msg_0[] = {-78, 93, -97, 36, 23, -102, 112, -124, -80, -42, -104, -6, 43, 122, -111, -52, -28, -103, 75, -63, -6, 108, 26, -5, -122, -95, 47, -41, 50, 46, -119, -9, -80, -12, 89, -122, 112, -5, 16, -72, -102, -11, 5, 36, -15, -71, -104, -126, -95, -126, -86, -87, -24, 118, 69, 72, -122, 37, 34, 122, -81, 62, -109, -123, 126, 23, -126, -96, -59, 27, -46, -29, 82, -39, 73, 43, 17, -107, 68, 41, 115, 23, -26, 35, 25, -65, 98, 26, -117, -65, -79, 76, -100, -20, 38, -22, -43, 66, -123, -92, 7, -37, 15, -111, -60, 125, -28, -117, 20, 85, -52, 71, -17, 112, -52, 112, 12, -13, -43, -63, 77, 20, 68, 82, 33, -67, 86, 86, -4, 23, 16, 87, -60, -1, -38, -128, 43, 30, -38, -70, 50, -14, -110, -60, -56, 64, -62, 43, -7, -87, -98, 1, 3, -115, 120, 96, 46, -118, 11, 76, -96, 114, -118, -33, 124, 60, 75, -59, 94, 14, 39, 78, 51, 52, -46, 31, -77, 98, -96, -76, 57, 108, -30, -92, -72, 93, -115, -93};
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
    msg.setTimeStamp(0.32050693683);
    msg.setSource(40616U);
    msg.setSourceEntity(150U);
    msg.setDestination(35799U);
    msg.setDestinationEntity(61U);
    msg.altitude = 0.877215292798;
    msg.width = 0.0189689846312;
    msg.length = 0.262518387526;
    msg.bearing = 0.449710510947;
    msg.pxl = 13494;
    msg.encoding = 119U;
    const char tmp_msg_0[] = {-62, 52, 35, -49, 62, 3, -121, 24, -6, -31, 33, 14, 47, 81, -75, 60, 40, -84, 66, 105, -11, 49, 1, -83, 20, 94, -68, -19, -26, 46, -125, 72, 109, -27, 117, -53, -25, 6, -70, -7, 111, -63, -2, -89, -54, -102, 89, -115, 59, -65, -73, -15, -56, 45, 65, 10, 101, 121, -56, 67, -128, 77, 74, -49, -29, 88, -19, -15, -76, -112, -100, 42, -46, -11, 60, 120, 108, 87, -46, 94, -114, 114, -109, -34, -40, 104, 18, 0, 44, -82, -28, 92, -95, -62, 99, 82, 51, 1, -18, -47, -118, -23, 69, -91, 9, 62, 122, -72, -78, -91, 106, -23, -12, -1, 122, 123, -123, -107, -99, 87, 73, 39, -109, 100, -104, -76, 26, -46, 112, 98, -25, -52, 107, 63, -50, -53, -64, 67, -83, 19, -123, -35, -7, -36, -70, -43, -63, -76, 1, -115, 33, -53, 34, 117, -64, 100, 104, -102, -30, -43, 51, -28, -56, 82, -125, 108, -54, 90, -59, 117, 74, -34, -99, -52, -95, -31, -14, -57, -4, -12, -34, -126, 4, 54, -114, 111, -53, -29, 105, 67, 2, -127, -3, -114, 42, -51, 124, 56, -108, -38, 84, -121, -73, -115, -26};
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
    msg.setTimeStamp(0.925282670198);
    msg.setSource(21540U);
    msg.setSourceEntity(120U);
    msg.setDestination(54882U);
    msg.setDestinationEntity(122U);
    msg.altitude = 0.294517435959;
    msg.width = 0.913606940353;
    msg.length = 0.0399448749425;
    msg.bearing = 0.238517762078;
    msg.pxl = 461;
    msg.encoding = 7U;
    const char tmp_msg_0[] = {7, -50, 83, -36, 103, -6, 14, -58, -80, 2, 84, 109, -120, 111, -46, 53, -123, 0, -90, -123, -90, -93, -7, -55, 22, -100, 33, 13, 104, 97, -28, -118, -21, -116, -77, 57, -2, 119, 83, -109, 15, 70, -68, -105, -127, -73, -22, 62, 121, -38, -23, 94, -112, -64, 64, -52, -11, -84, -1, -65, -53, -8, 97, 93, 117, -42, 14, 109, -32, 125, 15, 10, 105, 48, 31, 38, -14, -49, 19, 41, 1, -91, -66, 45, 12, 44, 59, -60, 49, 8, -5, 71, 16, -11, -100, 44, 39, -79, -88, 56, -84, -105, 70, -78, -106, 33, -52, -114, 113, -82, 105, -94, 32, 46, 80, -67, -118, -43, 60, 60, -42, -76, 10, 124, -72, 88, -124, -100, -68, 90, -68, -2, 23, 83, 123, -104, 124, -7, 57, 113, 17, 41, -16, 110, 95, -15, -117, 70, -58, -67, 71, 40, -66, 26, 63, 65, -76, -90, -84, 102, 112, 117, -71, 66, 4, -99, 83, -116, 28, -2, 119, -69, 4, 108, -84, 100, 84, 99, 40, -57, 50, 50, 53, 0, 111, 113, -10, -116, -108, -33, 44, -55, -110, -16, 90, 123, 104, -72, 107, -90, 114, -90, 19, -104, -52, -76, 29, -127, -87, -104, 57, -127, -66, -87, 10, 82, 114, 121, 57, -29, -108, -95, -47, -98};
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
    msg.setTimeStamp(0.585492403239);
    msg.setSource(10U);
    msg.setSourceEntity(68U);
    msg.setDestination(6788U);
    msg.setDestinationEntity(6U);
    msg.text.assign("HTKKLUBVZYPZPY");
    msg.type = 239U;

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
    msg.setTimeStamp(0.818590837811);
    msg.setSource(39975U);
    msg.setSourceEntity(100U);
    msg.setDestination(42087U);
    msg.setDestinationEntity(206U);
    msg.text.assign("IEIJYVCWTHVTDNNEHCVEZNHBPBBZLPLZGDOZBTU");
    msg.type = 185U;

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
    msg.setTimeStamp(0.522142791635);
    msg.setSource(43752U);
    msg.setSourceEntity(241U);
    msg.setDestination(34882U);
    msg.setDestinationEntity(238U);
    msg.text.assign("DTBCOSAJDQRVFAWRHPAZYWVXDKGJMKVWUXATYGOIOJDOHVCQVKWQQCNSYEPUFICNVIRXETSJTATNTFJKHHZXOSZSSWAFDPOGIZCGFSQANUXXEUPYLLLCUEADNAROXODLENQPTNFYKCQJEUCVRERHBZZBLCWLHLMUUIITJYCYPGXPUQMJVXTVMZFESIAMIYQZVKIMRFST");
    msg.type = 136U;

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
    msg.setTimeStamp(0.686879985987);
    msg.setSource(62070U);
    msg.setSourceEntity(186U);
    msg.setDestination(28873U);
    msg.setDestinationEntity(78U);
    msg.parameter = 153U;
    msg.numsamples = 151U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 12991U;
    tmp_msg_0.avg = 0.884396666821;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.784420720641;
    msg.lon = 0.260703554053;

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
    msg.setTimeStamp(0.87715799779);
    msg.setSource(36293U);
    msg.setSourceEntity(4U);
    msg.setDestination(58422U);
    msg.setDestinationEntity(184U);
    msg.parameter = 201U;
    msg.numsamples = 130U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 57462U;
    tmp_msg_0.avg = 0.328910425442;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.0359303938328;
    msg.lon = 0.853091024059;

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
    msg.setTimeStamp(0.46472886902);
    msg.setSource(27308U);
    msg.setSourceEntity(79U);
    msg.setDestination(51131U);
    msg.setDestinationEntity(149U);
    msg.parameter = 238U;
    msg.numsamples = 50U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 23895U;
    tmp_msg_0.avg = 0.147011558988;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.574963027134;
    msg.lon = 0.507615654406;

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
    msg.setTimeStamp(0.444477480005);
    msg.setSource(63459U);
    msg.setSourceEntity(170U);
    msg.setDestination(31415U);
    msg.setDestinationEntity(115U);
    msg.depth = 526U;
    msg.avg = 0.656907164292;

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
    msg.setTimeStamp(0.38403281384);
    msg.setSource(878U);
    msg.setSourceEntity(50U);
    msg.setDestination(28843U);
    msg.setDestinationEntity(40U);
    msg.depth = 2113U;
    msg.avg = 0.463794088617;

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
    msg.setTimeStamp(0.947169676473);
    msg.setSource(56045U);
    msg.setSourceEntity(50U);
    msg.setDestination(53172U);
    msg.setDestinationEntity(92U);
    msg.depth = 43381U;
    msg.avg = 0.71427359371;

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
    msg.setTimeStamp(0.4446953567);
    msg.setSource(39349U);
    msg.setSourceEntity(131U);
    msg.setDestination(59696U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.199543347517);
    msg.setSource(53501U);
    msg.setSourceEntity(104U);
    msg.setDestination(38205U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.451503649193);
    msg.setSource(39765U);
    msg.setSourceEntity(6U);
    msg.setDestination(63544U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.355129243054);
    msg.setSource(11247U);
    msg.setSourceEntity(154U);
    msg.setDestination(56186U);
    msg.setDestinationEntity(54U);
    msg.sys_name.assign("YIMAYWTEUCWSIRVXTVXWDQVVWQDUQCS");
    msg.sys_type = 206U;
    msg.owner = 47035U;
    msg.lat = 0.283759718568;
    msg.lon = 0.944457694481;
    msg.height = 0.945531432667;
    msg.services.assign("XZDWQQFFKFABNVDKANHULDPYMUMTVOZURPZWGVYJCAVBUAISNTDAKOTPYYCKREKELNDYUNOSMAPWGXIILGCPZVLMYFBIOQFADOBOXNVBQFRTZSLJYCWXWLRRZDZXTASKHCEZNKETRGGUWNXXHKMHIMJMZSRMEQHQWKSZPLGVTHCMGFJMGJSBXJPEAFPHULGHIOUICWDFSTKUCE");

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
    msg.setTimeStamp(0.0368798586862);
    msg.setSource(51115U);
    msg.setSourceEntity(112U);
    msg.setDestination(25423U);
    msg.setDestinationEntity(67U);
    msg.sys_name.assign("BOSKNYJHSSVRDGHBCGGXUQRIHZSIRLMOFNTZIHSBUUBDXKWMSLWEQNGPGODHAPDQWZMZOQEJXLBJPZWLXGCPIGINQOXEKUHQCTYUBEMMPNLNSAGOQOIOBMLAVZMTJTXETCYZQSFT");
    msg.sys_type = 33U;
    msg.owner = 18536U;
    msg.lat = 0.931616953705;
    msg.lon = 0.140023968367;
    msg.height = 0.441590748181;
    msg.services.assign("IKNEEJBRFJDBLWXIFHUDTYFOQFNSPINIWOYYYWWVGOIRBQLKWGGXHNVJQXNCDFFXMQDZNNWUTZCBADQASKUBUVZQOSGJUHBLGEHLHXQZYHVMYZCIOTMZOPWQGULDMPPOSSJQYPAVKVDSESTYBDWXKNRZUCIJAKMRYLVYFXZHBHXXEJJMZSOADKFLUMEICGPVWAARPHTBTEFRFRMEDLBPGSUUOQLJRCKLOXRZERNGVNCIPGC");

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
    msg.setTimeStamp(0.00948307797738);
    msg.setSource(40435U);
    msg.setSourceEntity(207U);
    msg.setDestination(30049U);
    msg.setDestinationEntity(171U);
    msg.sys_name.assign("PLLTMQKIJMZAELHICJJQJEWSAMCWCDSSGQHBUPXGKWEABOPURYJPKZZWMZNQDWPXWGHRTHRNWEKTREMYTMYQLGUGARHKPXBZCVXIKNHTBXBRQXNJIFDAXKANTYXHDGYOSJBAVGTUSZWQFMQNCOZFTZKPDOJVGAOLYGWSFVADWOZIEUYMPBXOU");
    msg.sys_type = 234U;
    msg.owner = 2438U;
    msg.lat = 0.38612945188;
    msg.lon = 0.017219532247;
    msg.height = 0.807272625838;
    msg.services.assign("RUMXGJRUWKPIWAEHSTVIGMCBPZDFOSTLMWTRBVIZYGKHFRCBILBHAYYFPMRWDFHXSWOWPPZPUBZNNICEULFCQMEDNYRGNRZDQAQFORJXEVBNPOCWOEVLHYTXGIRAEKQRUAHJMOQZNVJHTUUQIEGSIXJKMOMG");

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
    msg.setTimeStamp(0.960047336999);
    msg.setSource(52067U);
    msg.setSourceEntity(150U);
    msg.setDestination(6115U);
    msg.setDestinationEntity(130U);
    msg.service.assign("GHPWBGPYJMNUOTEHXKRMPIKVXZJVPIELGJBNFQHQLFUBONSL");
    msg.service_type = 147U;

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
    msg.setTimeStamp(0.950283892332);
    msg.setSource(38295U);
    msg.setSourceEntity(93U);
    msg.setDestination(1649U);
    msg.setDestinationEntity(1U);
    msg.service.assign("PGRPYNBHGKBJRYWIPJTOTCIYMYEONTMDIVNWWUFPJMRXVJBQQHCFIGNXBREFXHAFZGYSKLDMZSKQTISHPBPAXMURRZJAFIRGEXWLCOUSGDVCYAGHOMNXVQLOUBSTZWXSBCRFSSLQCPZTUELKWNCCHNKQEWAOPCVFZEBVADHUAYBHDJKDOXEUDLXBSETGHMIGLLKUFQKIZHAPVDOTMNUFYOVZJGMYOQVIIERAM");
    msg.service_type = 252U;

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
    msg.setTimeStamp(0.292699979832);
    msg.setSource(15954U);
    msg.setSourceEntity(173U);
    msg.setDestination(25700U);
    msg.setDestinationEntity(183U);
    msg.service.assign("WTEYNGFZBXSWPKFNAYLLFQLXHRTNWJOSCOSORRLGYNETPQKZVMEDCYOOGUKWIVAAMMWYYUHCWIUKODSTGMRVEHURTVUEJVBZRJFAJAICCWHQSQYXBNFRHNBXOJZLTDGMUEBGS");
    msg.service_type = 146U;

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
    msg.setTimeStamp(0.443643930847);
    msg.setSource(12672U);
    msg.setSourceEntity(126U);
    msg.setDestination(59785U);
    msg.setDestinationEntity(243U);
    msg.value = 0.64951171507;

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
    msg.setTimeStamp(0.871024578472);
    msg.setSource(18979U);
    msg.setSourceEntity(95U);
    msg.setDestination(18201U);
    msg.setDestinationEntity(121U);
    msg.value = 0.900343455385;

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
    msg.setTimeStamp(0.775323054413);
    msg.setSource(33225U);
    msg.setSourceEntity(85U);
    msg.setDestination(26094U);
    msg.setDestinationEntity(165U);
    msg.value = 0.278866111356;

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
    msg.setTimeStamp(0.810546780696);
    msg.setSource(40400U);
    msg.setSourceEntity(212U);
    msg.setDestination(14695U);
    msg.setDestinationEntity(174U);
    msg.value = 0.0118419624559;

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
    msg.setTimeStamp(0.104862880485);
    msg.setSource(12844U);
    msg.setSourceEntity(251U);
    msg.setDestination(21129U);
    msg.setDestinationEntity(55U);
    msg.value = 0.829204155791;

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
    msg.setTimeStamp(0.380264687222);
    msg.setSource(52250U);
    msg.setSourceEntity(207U);
    msg.setDestination(16344U);
    msg.setDestinationEntity(209U);
    msg.value = 0.75896616174;

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
    msg.setTimeStamp(0.0257268091916);
    msg.setSource(8671U);
    msg.setSourceEntity(185U);
    msg.setDestination(22902U);
    msg.setDestinationEntity(3U);
    msg.value = 0.373721423605;

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
    msg.setTimeStamp(0.301321203264);
    msg.setSource(19338U);
    msg.setSourceEntity(182U);
    msg.setDestination(30904U);
    msg.setDestinationEntity(100U);
    msg.value = 0.566643660369;

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
    msg.setTimeStamp(0.80510677264);
    msg.setSource(6782U);
    msg.setSourceEntity(172U);
    msg.setDestination(41533U);
    msg.setDestinationEntity(128U);
    msg.value = 0.266395215615;

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
    msg.setTimeStamp(0.985921837405);
    msg.setSource(7180U);
    msg.setSourceEntity(131U);
    msg.setDestination(51220U);
    msg.setDestinationEntity(75U);
    msg.number.assign("FZTZDITSCUUJQBQAZKEAQDYYEMGVTNCFUUCFXJABCOTNZUSVXFXMKFFEOKQCIPSKIUOQWZRQPJTWMEOJYGMODCKAQVNYRMZBJHXYBKHYEXLLAZPRUSBHLDSJOIHDHLVMLGRXAGYAUUEVISCYGBPWKBNQGRVTKPANIEMVJIONFCSAHJBWSBCULPIN");
    msg.timeout = 37508U;
    msg.contents.assign("GTTSDYNRKZXYUPRKIPIXHZBNQTMBPKVFJFCWMYTETLIQEMBGWZXPSCPDSQMNCNSEKJOCVAVFNJGFUGDZBPMFXFWKAMLWVWUISVRGTLLFUKUAOZCYUUOWHJHFFXEKHRIQEDDGHQICQCMOQMKGQODLAIENDYMJORZYFIOJXGAAVSLSUZCEZTKUNHSOIBLWNKRWYPDXBEYUX");

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
    msg.setTimeStamp(0.9937534054);
    msg.setSource(31931U);
    msg.setSourceEntity(132U);
    msg.setDestination(48937U);
    msg.setDestinationEntity(84U);
    msg.number.assign("AWOVGVEERJGTUZTSXHNMEFUYJWXLQJKFAQGZSQBXDKVFKKSBHGIHIGYVDLGSWLHAHZSXOPSAPUFKBPCRULUJVLKJRJLERXE");
    msg.timeout = 43583U;
    msg.contents.assign("NIPESLFNWLNIKBJXPMHZNKYAJOASIUBDIQCMGKGKRVGKMYNMUZPWHJFIIVXHRAQWXVLYNDDCXXCQGECWZDKROWBPJQEBWOTGXGERVBVQAVOPSMARJFLSBXTODTVMQLITHULKVYQCQSYDUQMBRZBJFTTEJFFRFOSIPJTAHSAVUZNTSUMNHPEGDC");

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
    msg.setTimeStamp(0.21479468401);
    msg.setSource(35468U);
    msg.setSourceEntity(162U);
    msg.setDestination(60926U);
    msg.setDestinationEntity(156U);
    msg.number.assign("ACAHSHGZLYVHIKBVUWXKOZQFWAWXRQVPOWUKKRHSVWAPTIOJHFBMJDVDIMEQCVNYTQPHZBTODUGQWNCSRGAQXZRJPOBEUKADFYEPPMQILOUCAKJMNOBYSRLHAGDIJXCFPOIDHCALMZTXYFSVZKOUJYCQVHFLBWGLUZCTVRNFNETNSEFZYTXBHLZBEMWPWDNRIMKCXYMXPLGMSVUQTEXUBDSQITUEDGKNGNZGERPICIYGJDYFSJBSEJTMOFRW");
    msg.timeout = 21955U;
    msg.contents.assign("HGSHCSQFCWXRLBSNEYONKDWIZZDEZYSGVHCRMQSPAYDWRSDVKFQGGLZFYVTVPBBHQGOAACVYOYKOMGOLKZTIYOAQEWJDWNBITT");

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
    msg.setTimeStamp(0.826584764116);
    msg.setSource(41315U);
    msg.setSourceEntity(152U);
    msg.setDestination(21845U);
    msg.setDestinationEntity(6U);
    msg.seq = 4071031800U;
    msg.destination.assign("TRHILDOKUULFZWXFWDBXMGABIFENVJDCVEMRMJPSGDQKXHVUKXUVENQLWODAZIAMCQXXBKJQJYFNONIDPIURJUSZNFBLBREGWCMEKTBHMGHGJ");
    msg.timeout = 13763U;
    const char tmp_msg_0[] = {126, 34, 72, 23, 89, 84, -108, 80, 102, -89, 9, 38, -101, 94, 20, 99, 103, 67, 51, -15, 91, -33, -18, -38, 28, -119, 13, -67, 79, -10, 25, -43, 27, 80, -24, -48, -120, 9, -18, 32, -45, 102, 52, 33, -96, 92, 103, -66, -108, 44, 24, -72, 102, -101, -36, 3, 22, 77, 99, -60, -86, -38, -40, 77, 81, 80, -5, 40, -22, 63, 115, -11, -84, -128, 22, -59, -21, 115, -51, -109, 82, -43, 79, 92, -102, -49, 86, 11, -17, -121, -103, 21, -103, -13, 44, -19, 73, 126, 125, -53, 72, 11, 38, -42, -87, 97, 65, -76, -24, 97, -51, -32, 87, -86, 72, -15, 76, -40, -87, -19, 9, 16, 8, 85, 117, 61, -15, 84, -57, -109, -11, 78, -69, -26, -38, -8, -77, 65, -103, 3, -88, 119, -21, 83, 22, 109, -88, -1, 93, 28, 118, -55, -84, -20, 60, 99, 94, -96, 66, -40, 14, 108, 66, 85, 49, 124, 94, -25, -110, 31, 4, 30, -66, -99, -15, 66, 90, 96, 14, 100, 4, 113, 114, -15, -109, -37, -29, 59, -16, -62, -41, -31, -22, -1, 17, 49, 55, 17, -77, 3, 86, -53, 14, 60, -71, 63, -88, 35, 13, -52, 92, -77, -91, -13, 18, -101, 56, -95, -47, 123, 96, -116};
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
    msg.setTimeStamp(0.837560615358);
    msg.setSource(25138U);
    msg.setSourceEntity(19U);
    msg.setDestination(60087U);
    msg.setDestinationEntity(202U);
    msg.seq = 1884166753U;
    msg.destination.assign("BCTNGLMDIBVBBJYKYALPFIFMXEVEEAGCRNCIYDOACCYGINEJJWGTOSFAINTSDUKMPFOMXOJFINBMTOLWQELJFZHFDIUUUZIONYXEXQFRCHWJZSUKTYPSHBQOHLQACDUEGLWIYUQGDSTSQVUSTVDEZBFDJXNCKEGZVUZPKVINWRFZJRSJNQVGXZBSHHRMCVRHQWXPRPOMXTCTQTYYOKU");
    msg.timeout = 26424U;
    const char tmp_msg_0[] = {-35, -63, -44, -25, -59, -111, -89, 96, -111, 79, 19, 86, -38, 120, -36, -16, 43, 17, -107, 69, -100, 66, -63, -122, -114, 122, 72, 40, -73, 16, 52, -77, -52, -45, -87, -126, 84, -51, -21, 109, 112, -107, -50, -74, -93, -58, -31, 16, -18, -42, 96, 116, -63, -57, -76, 54, -14, 27, -93, 38, -102, 62, 60, -58, 117, 102, 102, -93, -48, 69, 91, 90, 5, 48, -52, -106, -118, 23, -38, -65, -29, 11, -98, 76, -83, 54, 2, 69, -121, 80, 97, 44, -21, 7, 112, -28, -49, 102, 6, 112, -81, -26, 7, -75, -32, 32, -59, -33, -90, 59, 33, 110, -94, -55, -45, 106, -120, -2, 36, -79, -121, -128, 95, 13, -55, 8, -119, 117, 79, 0, 42, 108, 116, -14, 79, -12, -74, 29, 119, 103, 13, -128, 24, -16, 68, 25, 88, 9, 64, 33, -115, -66, 86, 67, 69, 111, -97, 33, -78, 9, -79, -96, 11, 110, -98, 67, -55, -54, 20, -88, 75, 26, 95, -32, 9, -81, 30, -1, -33, 38, 57, 56, 29, 31, 1, 42, -59, -91, 98, 60, -13, -26, 99, -2, -120, -14, 56, 105, -88, 34, 27, -5, -103, 94, -86, 79, 82, -71, 56, 11, -30, 56, 94, -3, -119, -25, 109, 12, 28, 23, -59, 85, -39, -93, -98, -113, -102, 61, -121, 19, -70, 58, 23, 8, -33, -17, -84, 103, -31, 11, 64, 102, -126, 4};
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
    msg.setTimeStamp(0.269371765015);
    msg.setSource(50920U);
    msg.setSourceEntity(63U);
    msg.setDestination(42513U);
    msg.setDestinationEntity(128U);
    msg.seq = 3503245732U;
    msg.destination.assign("ZAATFTKNFJSTWZASMGLTMWXVPRVDSXDLGIHKUGOHMOCHGRNFJUNWWSXSYJZPCSKHHHYIYTLCKKPNIUGBJFNHBRNCWDNLZMDWJLOSZEWGZDROMPWASUBVZQOTNDJHSVAFVQDKUVJTFZOPRMARCSFICXCP");
    msg.timeout = 45018U;
    const char tmp_msg_0[] = {65, 84, -57, -47, -78, -44, 17, 71, -47, 110, 32, 8, -58, 61, 52, 29, -91, -30, -57, -120, 11, -67, 22, -44, -30, 111, -65, -115, 33, 3, -5, 66, -20, -15, 35, -76, 42, -1, 38, 45, 107, -33, 104, 1, 33, -68, 55, 71, 60, -96, -112, 65, 88, 106, 73, 53, 51, 42, 97, -128, 54, -26, -28, -115, 76, -10, -120, 125, 14, -67, 67, -24, -57, 70, -115, -122, -8, 110, -13, -13, 94};
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
    msg.setTimeStamp(0.64195526431);
    msg.setSource(64678U);
    msg.setSourceEntity(124U);
    msg.setDestination(58675U);
    msg.setDestinationEntity(224U);
    msg.source.assign("MBQWAISJGNYTZLTCONFFVKJBXBCJKXYMPOPOKUUEEGOLKLUAAZGCLSQTSWHCYPAYPHXJTUDGOIJCFEFPMAJWIDQOSUHPQMAFIWEYOVLIDYRTOVRQHHZWDPZIEXGUQBFHLNKIRJAKMCEJX");
    const char tmp_msg_0[] = {57, 41, 63, -83, 66, 62, -120, 56, -43, -79, -127, -125, -46, 60, -65, -100, -77, -77, -109, -69, 10, -81, -114, -36, -48, -67, 84, -19, -82, 61, 120, 119, -67, 98, 75, 72, -104, 57, 21, 101, 102, 67, 47, -120, -124, 93, -126, 86, -121, -78, -31, -8, 59, 84, -27, 59, -34, -112, 102, 87, 110, -128, -15, -53, -98, 57, 87, 105, 53, -83, -63, -53, 13, -34, 74, -102, 50, -52, -19, 19, -67, 59, -13, 110, 33};
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
    msg.setTimeStamp(0.0364648291505);
    msg.setSource(57488U);
    msg.setSourceEntity(164U);
    msg.setDestination(30179U);
    msg.setDestinationEntity(221U);
    msg.source.assign("KZHLJWIAKZHDXMTWXVMUOJYI");
    const char tmp_msg_0[] = {-51, 73, -41, -19, -69, 114, 75, 69, -101, -78, -13, 11, 64, 23, -68, 124, 93, -74, 50, -114, 37, -35, 64, -33, 57, -56, 118, -94, 70, -1, 8, -44, 42, 96, -112, -107, 49, 99, -86, -111, -109, -13, -85, 100, 36, -79, -3, -27, 90, 7, 114, -3, 80, -93, -36, -127, -112, 44, -113, 87, -97, -79, -81, -126, -85, 62, -59, -82, 10, 83, -73, -92, -20, -72, 17, -107, 4};
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
    msg.setTimeStamp(0.700496607149);
    msg.setSource(36801U);
    msg.setSourceEntity(70U);
    msg.setDestination(832U);
    msg.setDestinationEntity(159U);
    msg.source.assign("DKBWVHJZVQALDYCTRDOGZJITHVPNWMWOUFTQANHXWCURYKWOXWPLWHSAXJIHVIWPGYXQEYMLMGSIGPFZJPXCGMBNLJQVOKCEPQLGGZTXYDUHLVATZBREIAFYDFTUNOSEKIRBUWOZYLMSDFFHUSQNRJMXHBATMBJDKX");
    const char tmp_msg_0[] = {-108, 55, -99, -6, 98, 51, 35, -30, 40, 33, 96, -111, 7, 81, -121, -43, 67, -114, 112, 88, -5, -22, -19, -24, -121, 69, 32, -8, -89, 0, -125, 118, 101, -88, 89, -24, 23, -109, 48, -123, -121, -91, -43, -123, 40, -120, 116, 18, 101, -113, 83, 89, 99, 81, -25, 101, 40, 41, 117, -25, -103, -83, 12, 74, 33, -102, 43, -126, 1, 33, -120, -73, 111, -16, 103, 7, -106, 74, 23, -32, 122, -73, 41, 21, 44, -20, -21, 42, -79, 51, -99, -115, -55, 77, 105, -126, -97, -125, 120, -37, 53, -22, 78, -127, 106, 5, 31, 28, -94, -45, -69, -45, 109, 19, 21, -24, 7, 62, 81, 121, -56, 101, 102, 94, -53, 69, 38, 66, -19, 124, 93, -85, 74, -11, 30, 22, -119, 34, 78, 32, 101, -57, 73, 97, -40, -18, 109, -62, 66, -58, 64, 94, 27, 48, -3, -1, -4, -7, -124, 60, -44, 52, 56, -10, 8, -56, -52, -128, 4, 94, -69, -84, 28, 66, -126, -94, 53, 126, 62, 93, 105, -94, -103, -23, -59, -120, 26, -77, 57, 110, -99, -119, 6, -13, -112, 5, 15, -108, 31, -51, 89, 44, 67, -75};
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
    msg.setTimeStamp(0.437353774651);
    msg.setSource(57794U);
    msg.setSourceEntity(244U);
    msg.setDestination(13812U);
    msg.setDestinationEntity(24U);
    msg.seq = 2534253411U;
    msg.state = 75U;
    msg.error.assign("NEACBVJXIHKSYRYKGXWGEJBIBCQIEMIQYWUNWEAPPWZDDMIKVGGITZQZMPXUH");

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
    msg.setTimeStamp(0.998144282877);
    msg.setSource(10998U);
    msg.setSourceEntity(140U);
    msg.setDestination(39981U);
    msg.setDestinationEntity(214U);
    msg.seq = 2033077488U;
    msg.state = 210U;
    msg.error.assign("BXBAPQUJDVEECLLOIOUBJYPXLFBQWSCMXPDSGWQYSSYEQGPHIMIPVAKZVHJINFOAKUFRLMKCAAOKNVHVLMHJONPRBXPTDWATGDNZRLOAPZABLKTETLGFXBIGRKYYDEUNWHBQUCKESZZWGBRYGWZIGSFRSUITPANTWNKMMKECJFJXPSDYDQUSWRQVUZQZOHZDEGMCBEVHOCJMRCZOHLJRIFIRETJNVMQYYXSMWXUXI");

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
    msg.setTimeStamp(0.135087290937);
    msg.setSource(9439U);
    msg.setSourceEntity(19U);
    msg.setDestination(20533U);
    msg.setDestinationEntity(123U);
    msg.seq = 2005618609U;
    msg.state = 147U;
    msg.error.assign("FCTBXXRCPBJBQHQPFVEWDOUGQFXLAKCMOFOMNBHTJEYBEDMPARLZTHPRQVOYIWQWOMRSSNBCQPXSWSVLMSWJYUUXUIJLKFKAXCVCKLIEWEGQRMXIPGBKVVFWKQOXCEFCGMIPYHZTNNJAAWNGKRJPNUZDNNZXVOVTDZHZHJFOGZI");

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
    msg.setTimeStamp(0.00857324740303);
    msg.setSource(63490U);
    msg.setSourceEntity(198U);
    msg.setDestination(14018U);
    msg.setDestinationEntity(65U);
    msg.origin.assign("RYUVBJUOPJWESOAACIFFCOPBIJCFHKJBWZPFXJLMCAFQICPOZFIDNYKVQHLINVILWMEZLDURZVXWYNGWRMPVSGWMXDKHQBNBQAVIKBUOPGCXTXTTNTVKEZMSHPTAEASFSRLUURQRYWUADDDDHEAHGOVXKYNQEKYANHGTXMUSNALPGURLKYGCJDPTVOHYRNSZLBJRGUXNMWSGJQZROQTYGCIPWDBKMLCSJKBDWCHEYOHFQFSZEMZZI");
    msg.text.assign("CJIOAMPPPLOXIFOBHQWCDGYQEEGCCSBHFLPTBIZGQSRUAYMSAPEPKKMNNDYJPSULAAUWCRJJTBRE");

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
    msg.setTimeStamp(0.353392049497);
    msg.setSource(30299U);
    msg.setSourceEntity(231U);
    msg.setDestination(4442U);
    msg.setDestinationEntity(129U);
    msg.origin.assign("HJWMLNGRCLLCFTCEVIJSPDKTGLYZXFFYUXYJAOBSSGWVHTVHBBDSAVNBITCPAYPMVDMEHMQTWAUHPWRTXCXODXUIIEWVZDFGKEZNLWRBAMXRJSCEHRZUQGJQPVBKUNPGKOZUDYQKVURYFWKZJNIUOMC");
    msg.text.assign("CCRLFPJSGKBBQRHUMWHOXOUAZLLKEIYXKPNBSCPYHDUKVCSWTFHJIZXRSAJBRZFUNEXDFNESXXZFZTNNCEFQMJMLOLJYPUZ");

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
    msg.setTimeStamp(0.184184425761);
    msg.setSource(2231U);
    msg.setSourceEntity(76U);
    msg.setDestination(4017U);
    msg.setDestinationEntity(25U);
    msg.origin.assign("MMEDTFDXEBZRNTTKORPNFIZMNXWANGKUOYJSJRONCYKYHIUJPESKBJYEDRPCLZJDFXBRYOSQIVQYEUGYUMHTMCBZIXOAXAMCGMGHBBHSRPGPKIWTUXDHCQZOXKQZHTLLBAPFOVJIGLLDYWIZVZSLEJLQRRVZRFCFD");
    msg.text.assign("LVWJYLPKHMZRMIANMECCZKCZKTOEJAGVDQLBODHDUITYDLWTJSZDEVWCURRMPIBNHGISQHQDMGLHUFKXFAGZFZYJZERONRKLSRMBOKVOAHCZYDSASMJFUDOEIXJSOFUSOYBCKXWHUYXMFVKXRAQWFYHVG");

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
    msg.setTimeStamp(0.400167121752);
    msg.setSource(467U);
    msg.setSourceEntity(20U);
    msg.setDestination(50158U);
    msg.setDestinationEntity(104U);
    msg.origin.assign("ZSGOLMCMDCLNESFHSOHPZJAWDHBLSIWFRRGCNGBWJDKTMSSKREBAYOVFVCDPZOXAYFJWBFTCCHRTYQRMWRCEBTIEQVVWBCITKVWHZBSPRZSKEJXFNGAXONTNUYMVXJIPNKPITMVKQDPXMHWCWYZXHNJTSAWUKUAUDLDVYOYUAICQIGGDNZPVFUDEFNQHOBJPRUTQLLGL");
    msg.htime = 0.39146343749;
    msg.lat = 0.523139432416;
    msg.lon = 0.803004899621;
    const char tmp_msg_0[] = {-57, 72, -32, 15, -117, -82, 108, -26, -123, 83, 93, 64, -108, 72, -8, -111, 116, -7, 56, 60, 41, -69, -103, 53, 52, 74, 52, 52, -67, 30, 32, 71, -72, 116, -80, 87, 18, -68, 87, 36, -89, 96, -25, 5, -104, -13, 49, -81, -98, 3, -110, 6, 92, 93, 28, -14, -124, 5, 122, -38, -84, 87, 108, -70, -86, -117, 61, 18, 122, 1, 94, -110, -17, -7, 99, 46, -101, -80, 81, 41, 109, -53};
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
    msg.setTimeStamp(0.445484811428);
    msg.setSource(26628U);
    msg.setSourceEntity(231U);
    msg.setDestination(10367U);
    msg.setDestinationEntity(180U);
    msg.origin.assign("KFGOLWKBXSIQYHPZYUFVRZCAGLUJTRLEQIALTFIPCNVHJAQIFRRBOSJKCJOWFTLEBEOLFJDWCHEQYUPNBXPJBZGMIHEWMWBVFRANEWTCIXAIDXHZXPUSHLILPRMOKYETRDRREZQVCJLSBXUTYI");
    msg.htime = 0.637121940546;
    msg.lat = 0.0958096239731;
    msg.lon = 0.557669326942;
    const char tmp_msg_0[] = {18, -102, -112, 112, 72, 58, -24, 125, -14, -50, -58, -8, 99, -97, 50, -125, -84, -18, -111, -86, -53, -89, 43, 69, 57, -33, -98, 103, 49, 11, 61, 34, 81, -71, 9, -104, -113, 92, -104, 33, 46, -108, -20, 35, -76, 26, 87, 72, -82, -39, -66, -113, 44, 8, -46, -20, -101, -73, -33, 70, -4, -41, 124, -95, -58, -15, 86, 125, 67, 110, 122, 44, -8, 106, -114, 80, 26, -78, 119, -96, 62, -12, 86, 15, 67, 69, 44, -110, 117, -125, 22, -78};
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
    msg.setTimeStamp(0.197731889612);
    msg.setSource(2803U);
    msg.setSourceEntity(205U);
    msg.setDestination(29107U);
    msg.setDestinationEntity(96U);
    msg.origin.assign("AMYYDIYHOJGTDKMEIYRBHCZAFEZCQQQMFSLOLLILMBLFPGKNAQFUOIPSRRMJKZKBCGIPSFHSUQNPXEVCHJNDWXYORTTCDWWDIQGVECAVCJPHKKFUCWJUANQKXPLTVBXLCOEEDUBT");
    msg.htime = 0.688941237586;
    msg.lat = 0.930438157486;
    msg.lon = 0.172645946688;
    const char tmp_msg_0[] = {70, 104, 10, -81, -107, 114, 76, -10, -27, 68, -114, 119, 54, 39, 83, -22, 16, 96, 124, -78, 31, -105, 50, -74, -69, -46, -78, 107, 124, 87, 103, 62, -58, -80, 46, -74, -101, 85, -39, -28, 37, -2, -119, 121, 83};
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
    msg.setTimeStamp(0.6355926541);
    msg.setSource(41410U);
    msg.setSourceEntity(250U);
    msg.setDestination(50309U);
    msg.setDestinationEntity(134U);
    msg.req_id = 13180U;
    msg.ttl = 22500U;
    msg.destination.assign("OLELXGOPKUIOIXMYBAJTJCQDECSPRXSESXFTVUTBNYQABKHFKRCXZVYYBPRRHPCVYNHQGBRPJLKKYFLODUQSBVGZWPUTTFWVSZNGXWPBZILOINMWF");
    const char tmp_msg_0[] = {-22, -14, 74, -88, 102, -87, 104, -125, -126, -41, 100, 75, 115, 61, -20, 86, -77, -78, -92, -83, 37, 17, 80, -77, 68, -105, 21, 63, 7, -116, -86, -30, -74, -19, 36, 72, 93, -75, 17, 79, 113, 91, -90, 15, 8, -80, 86, -113, 95, 126, 65, -67, -118, 90, -123, 87, 66, -55, 11, -28, 111, 55, -106, -104, 116, -86, -18, -11, -74, 35, 4, -25, -31, 50, 83, -77, 37, 32, 16, -122, -51, 55, 125, -74, 73, 22, -125, -119, 61, 91, 47, -5, -102, 36, -100, 50, 112, -85, -114, 109, -30, -24, 23, -122, -113, -35, 54, 25, -89, 7, 83, -91, -94, 31, 8, -120, -30, -24, -47, -45, -24, -1, 104, 27, 109, -5, -114, 37, -55, -37, 13, -95, 121, 9, 48, 33, -125, 30, -19, -84, -110, -24, 14, -58, 84, 39, 91, -56, -45, 43, -97, 117, 14, -37, -110, -128, 52, 0, -106, -2, 92, 22, -62, 115, -71, 34, 56, 90, 79, 50, 114, 37, 124, -40, -108, 67, 60, 46, 54, 96, -106, -95, -67, 73, -37, 50, -91, -53, -76, 53, 89, 120, -30, -76, 50, 79, 92, 18};
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
    msg.setTimeStamp(0.506966081506);
    msg.setSource(35836U);
    msg.setSourceEntity(162U);
    msg.setDestination(58221U);
    msg.setDestinationEntity(126U);
    msg.req_id = 55009U;
    msg.ttl = 30953U;
    msg.destination.assign("WPFKHHFMHUREMQKROROXOYCMSQZYQNIEACSULKPIZMIVNXWFJGXPTENROVCXHPBQFZKLDTHCRDVOIYGVBJDYZGEPNKVQYIUJBBSRRYDTLSHNJZWJDRXMQEOWAETTJSLUFATHM");
    const char tmp_msg_0[] = {16, -23, 50, -103, 94, -12, -64, 0, -7, 101, 116, 63, -88, 88, 21, 32, 50, 53, -110, 60, -100, -48, 111, -27, 50, -122, 21, -16, 58, 16, 106, -91, 67, 12, 17, -117, -51, -126, -3, 100, -85, 121, -108, -20, -53, -33, 61, -63, -126, -117, -100, 120, -10, -89, 115, -1, -72, -98, 64, 97, 94, -101, 71, 85, 32, -76, -59, 82, 111, 85, 90, -119, -120, -86, -65, 84, 7, -10, 2, 9, 15, -37, 105, -23, 13, 30, -95, 123, -95, -53, 5, -21, -43, -107, -127, 57, 6, -22, -79, -52, -11, -2, 45, 85, 101, 90, -72, -114, 27, 88, -67, 16, -68, -14, -24, 18, -107, 54, -35, 118, -86, 76, -100, 123, 115, 39, -30, 92, 37, 61, 8, -77, -120, -73, -118, -7, 20, -97, -117, -11, 80, -21, -21, 0, 83, -17, -126, -70, 48, -124, 30, -56, -19, 49, 79, 118, 10, -60, 77, 76, 30, 22, 2, 91, -96, -104, 109, 112, -92, -16, -79, 55, 31, 43, 106, 42, -107, -116, 36, 14, -92, 95, 119, 19, 13, 64, 55, 36, -103, -39, -109, 40, 9, -64, -22, 118, 75, -105, -93, -50, -70};
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
    msg.setTimeStamp(0.309950427193);
    msg.setSource(28988U);
    msg.setSourceEntity(170U);
    msg.setDestination(49336U);
    msg.setDestinationEntity(112U);
    msg.req_id = 62255U;
    msg.ttl = 62431U;
    msg.destination.assign("JWVQAWWLINHIILNGXCLCROSIUOVSFIHLPAHDMKPWTETDXGMLQNUKAFCBTAWFSRSTEQYBAHVABZLFZEQUVAJGRIJQYQKCGRNERQSEMIZEBOAMUUZYBSVQSTZGAXJZYOLWDOVDNMMGKMPYDINQWHNOOLKCNTFKCDORPYOVREBZCYNJXADEGMTDGFWSVHXBFYYHPKPJWIMVSWQR");
    const char tmp_msg_0[] = {-92, 79, -71, -55, -53, -105, 88, -62, 92, -12, -83, -83, -86, -105, -96, 4, -50, -56, -60, -124, -6, 75, -14, -10, -114, -96, 58, 42, -37, 79, 30, -70, 88, 23, 21, -29, -49, 105, 68, 99, 119};
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
    msg.setTimeStamp(0.794633841158);
    msg.setSource(22109U);
    msg.setSourceEntity(179U);
    msg.setDestination(31114U);
    msg.setDestinationEntity(208U);
    msg.req_id = 64313U;
    msg.status = 152U;
    msg.text.assign("XHBSWDWHNDEKTSFWJYXTHDJWLLFOHWCPQPWIRIEMJFXCQVUBNYTAOXKEICCZIIZGYCXVZBKSMMKNOJAPVLMRCKYBBUNKWIVNPVMOTJBJQSHFSWXYARLTJHLMEUDNTQZAAOYAXUTDVDUBSBYWRQKPYDUPGEHZZOIJPFQCSCT");

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
    msg.setTimeStamp(0.355163500608);
    msg.setSource(52116U);
    msg.setSourceEntity(47U);
    msg.setDestination(56049U);
    msg.setDestinationEntity(209U);
    msg.req_id = 46895U;
    msg.status = 173U;
    msg.text.assign("YGQVLZOTGYNOQUTOINLBHHGWVBWJASNYUKMDUKWBPRBCJNJLZGPCXVBMHWOFFOTTFZXKSSLYGZWXSRNVLQQULZFMTABQHA");

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
    msg.setTimeStamp(0.513402994357);
    msg.setSource(43608U);
    msg.setSourceEntity(119U);
    msg.setDestination(50335U);
    msg.setDestinationEntity(129U);
    msg.req_id = 593U;
    msg.status = 8U;
    msg.text.assign("QMFEBKMJKRKKKTZPIEKGDWGVZCUOSBYFASQKJIFGWHWWNROYLSUCLEDBZJNGRDVGITNJXBNENZBOSAYBCTLVQXFVNXRHCQMBLYGCIGAEVWFUPY");

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
    msg.setTimeStamp(0.637901484834);
    msg.setSource(24028U);
    msg.setSourceEntity(74U);
    msg.setDestination(72U);
    msg.setDestinationEntity(52U);
    msg.group_name.assign("LGJBOHSKLUSVMOKUNGWZGDFJZWYAHUCLPBJXYQJQLAMEQJBSOIPLHHYFUPGGBMOEBWNQJRASGURINMUDJQLZHDAVKIRVNEADLNZOIGKVXDMPPAOFIUFCMECVHETETM");
    msg.links = 4275082578U;

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
    msg.setTimeStamp(0.710775755313);
    msg.setSource(28856U);
    msg.setSourceEntity(251U);
    msg.setDestination(1530U);
    msg.setDestinationEntity(124U);
    msg.group_name.assign("WVNUJGFPGCMUPWQTYBETJTXIRPCZZYXEUZYLLRYANFDNSAHKXOTPMGOJJHSLDVDOXNJSFJTQYVMLMOEAMZJRDHQVKGLVWPBGFBHAVYDFHBAOUUKIYJXUFLXOCSZEDLQWWCMKUSTXETIANCERGZKYIXFHVIWJLTCPNXRWYBTHOPGQBAIEJGCMBOONIRQQUKMBFDWSZGWYBLEIDVICE");
    msg.links = 519549142U;

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
    msg.setTimeStamp(0.529020870071);
    msg.setSource(32U);
    msg.setSourceEntity(97U);
    msg.setDestination(44350U);
    msg.setDestinationEntity(254U);
    msg.group_name.assign("QECPKKTXZPVLOGPTMBYRCSLKSLDHIRBWRYWOGLUJI");
    msg.links = 1356501304U;

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
    msg.setTimeStamp(0.451116761163);
    msg.setSource(7302U);
    msg.setSourceEntity(135U);
    msg.setDestination(64302U);
    msg.setDestinationEntity(72U);
    msg.groupname.assign("HIZRYLOOCDPVEXKNHBSNTLRZWKPDBQYBOWIEMELLDNSDKEXBLBLBYGPTRGQGSLQHQJYGIHWEPLOKFJXOIGXTXVZENPZJIDEFUYQKBZMOUQTYSEHXJIWEUWSUSYTAVMOAKQUVNMNGZZXGCCKWWANTVOSVJFNGXBMQRNDKOVPDYRUDDYMZWTBVYRCAVWCPARUHSMUEZFFWHGVIPSCAKHLAQAMITTJODHJRJTXIBHFMFFX");
    msg.action = 188U;
    msg.grouplist.assign("PUNZGLHNWGAVBVHDNSVFVTMALOEDIYQSSPOELLTZFORSTRMHKUNCHCXVMSVYGPYJHPBJHKUHYPZIZQRUIKVBETVIMFQCUHMGKWSCEZLXRIXXDXDNWAENFRJIWVAGSOEMDPYFXGOULTTTSPAZTKGXWLZSDNTCIAEKCQKWJCZYBGOOFYRHOJRDGMHVXANJWUQMIXZJYDLBWLMQCJDRETCBNYUUQMBAJQBIGOJKKFBFYUEX");

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
    msg.setTimeStamp(0.0228315173818);
    msg.setSource(29862U);
    msg.setSourceEntity(140U);
    msg.setDestination(19665U);
    msg.setDestinationEntity(195U);
    msg.groupname.assign("HHYYFVFUMRNNTJLAQYCLFYGFOGUIKFCIRPTBZMNLEUUIDNVCEOLZIASGRKBZQXEBFIAKQMFYUNTLBZZRSAENVJFSIMMQHCPHRWOHVVPWGFDPNYQVZMJAROBACDBETMEDJJIUIQNEGPWLASGRLCPLJEXBMTLDSJOSIXRNJTAMWVXYTKQIBEGPXUSBDCQWEXVDUOHJZAJUGOWDTWQSZPOYNVPYMXHWZXYUC");
    msg.action = 13U;
    msg.grouplist.assign("CRZSBBFQTIPMJZOTDMDDPXDSCNXNWIXVZLDARGYLUBSSYULLQOJIDQHBWZZKVAFRETWAEOFDCSTTPGWAIHFVAHFCCFXJVJURARDHNNBWJYAEM");

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
    msg.setTimeStamp(0.778666240672);
    msg.setSource(49510U);
    msg.setSourceEntity(74U);
    msg.setDestination(22995U);
    msg.setDestinationEntity(147U);
    msg.groupname.assign("FYIHRXHNKLBVJNFKFWUGPEHZHYXBLBGGYPZLTMXGIMAKRPJMZEVBTRCRBXVSGBRM");
    msg.action = 141U;
    msg.grouplist.assign("WARHRSQWQIQXBVPMPOKTELHHNQJJWDMSOFYLNCUYGUKTHUPFJMQKONZNOXIPCSPACRVHUDNXKGBYRMMNMJNBPQZTWYJNGUKVMVJFAJAUABRFYZELASBTWSHDPIMETRXZHUKOQDGI");

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
    msg.setTimeStamp(0.000495894681429);
    msg.setSource(61110U);
    msg.setSourceEntity(20U);
    msg.setDestination(50543U);
    msg.setDestinationEntity(16U);
    msg.value = 0.968252964945;
    msg.sys_src = 48047U;

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
    msg.setTimeStamp(0.739425696574);
    msg.setSource(41777U);
    msg.setSourceEntity(89U);
    msg.setDestination(4192U);
    msg.setDestinationEntity(122U);
    msg.value = 0.826964223169;
    msg.sys_src = 59379U;

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
    msg.setTimeStamp(0.794248825507);
    msg.setSource(27329U);
    msg.setSourceEntity(236U);
    msg.setDestination(26406U);
    msg.setDestinationEntity(240U);
    msg.value = 0.139971451443;
    msg.sys_src = 38017U;

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
    msg.setTimeStamp(0.882613336762);
    msg.setSource(1678U);
    msg.setSourceEntity(152U);
    msg.setDestination(38989U);
    msg.setDestinationEntity(97U);
    msg.value = 0.311629147982;
    msg.units = 90U;

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
    msg.setTimeStamp(0.890236913126);
    msg.setSource(54047U);
    msg.setSourceEntity(15U);
    msg.setDestination(13081U);
    msg.setDestinationEntity(86U);
    msg.value = 0.21577682898;
    msg.units = 251U;

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
    msg.setTimeStamp(0.151396720977);
    msg.setSource(53062U);
    msg.setSourceEntity(193U);
    msg.setDestination(54569U);
    msg.setDestinationEntity(113U);
    msg.value = 0.715699195834;
    msg.units = 174U;

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
    msg.setTimeStamp(0.920670315609);
    msg.setSource(7283U);
    msg.setSourceEntity(178U);
    msg.setDestination(50633U);
    msg.setDestinationEntity(54U);
    msg.base_lat = 0.788750404519;
    msg.base_lon = 0.720656340128;
    msg.base_time = 0.0659719936562;

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
    msg.setTimeStamp(0.654365002924);
    msg.setSource(2318U);
    msg.setSourceEntity(100U);
    msg.setDestination(22040U);
    msg.setDestinationEntity(206U);
    msg.base_lat = 0.264559691794;
    msg.base_lon = 0.396805335909;
    msg.base_time = 0.472502344851;

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
    msg.setTimeStamp(0.573718585851);
    msg.setSource(19861U);
    msg.setSourceEntity(112U);
    msg.setDestination(54717U);
    msg.setDestinationEntity(245U);
    msg.base_lat = 0.596550700736;
    msg.base_lon = 0.643967262751;
    msg.base_time = 0.743701355886;

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
    msg.setTimeStamp(0.035947823306);
    msg.setSource(39023U);
    msg.setSourceEntity(28U);
    msg.setDestination(7752U);
    msg.setDestinationEntity(37U);
    msg.base_lat = 0.752387406429;
    msg.base_lon = 0.844460889271;
    msg.base_time = 0.606118800692;
    const char tmp_msg_0[] = {67, 18, 78, 109, 65, -86, -119, -11, 15, 28, 68, -21, -57, -116, -3, 61, 113, 41};
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
    msg.setTimeStamp(0.582942576447);
    msg.setSource(31371U);
    msg.setSourceEntity(105U);
    msg.setDestination(20006U);
    msg.setDestinationEntity(65U);
    msg.base_lat = 0.0262006856;
    msg.base_lon = 0.469301473202;
    msg.base_time = 0.603079000434;
    const char tmp_msg_0[] = {103, -58, 120, 27, 110, 52, -92, 47, -3, -118, 69, 35, 12, 123, -120, 40, -83, -88, -77, 103, -38, -21, -2, 49, -105, 115, 7, 53, -61, 109, 31, -125, -45, -74, -95, 3, 41, -47, 111, 83, 101, 65, -114, 3, -47, -99, 31, -68, 54, 79, 64, -25, 93, 8, -105, -87, -75, 118, -111, 68, 36, -107, 52, 70, 123, 105, 74, 88, -8, 123, -37, 85, 6, -31, 33, 97, 70, 64, 20, -8, 78, -22, -90, 80, 46, -19, -90, 83, -46, -14, -39, -63, -4, 49, -107, 41, -116, 13, 120, -38, 104, -114, -11, -124, -98, -14, 65, -1, 2, 61, -123, -120, 59, -46, 94, 55, 24, 56, -31, -82, 46, 57, -23, 117};
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
    msg.setTimeStamp(0.497753996738);
    msg.setSource(31936U);
    msg.setSourceEntity(167U);
    msg.setDestination(2015U);
    msg.setDestinationEntity(196U);
    msg.base_lat = 0.912779011773;
    msg.base_lon = 0.577233107914;
    msg.base_time = 0.915467766806;
    const char tmp_msg_0[] = {92, 85, 60, -18, 93, -100, -24, -37, -75, -101, -126, -69, -123, 58, -111, -76, -36, 54, 118, -90, -45, -60, -50, -62, 44, -128, -3, 117, -107, 63, 116, -121, -49, -64, -61, 33, 33, 123, -100, 9, -43, 23, 48, -22, 93, -49, 97, -98, -10, 67, 106, 111, -64, 50, -23, -34, -70, 120, 27, 71, 16, -74, -89, 54, -111, 60, -82, -104, -70, -48, -114, 116, -5, 11, 48, -10, -51, -59, 21, -47, -107, 22, -87, -34, -19, 111, 63, 112, -73, -118, 106, 41, -107, 50, -58, 33, 33, -96, -111, 108, -12, 9, 60, -95, -38, -22, -110, -127, 24, 27, -46, -21, -10, 63, -35, 31, 43, 22, -25, 29, -52, -82, -44, 69, -26, 79, -83, -127, -45, 9, 99, 69, 83, 67, -33, 1, -106, -109, -40, -48, 97, 76, -19, 43, -68, -83};
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
    msg.setTimeStamp(0.307513464323);
    msg.setSource(51653U);
    msg.setSourceEntity(228U);
    msg.setDestination(38918U);
    msg.setDestinationEntity(107U);
    msg.sys_id = 10530U;
    msg.priority = 32;
    msg.x = -8621;
    msg.y = -14368;
    msg.z = -29445;
    msg.t = 31770;
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 184U;
    tmp_msg_0.max_depth = 0.677641534241;
    tmp_msg_0.min_altitude = 0.740357340043;
    tmp_msg_0.max_altitude = 0.955733835683;
    tmp_msg_0.min_speed = 0.144395141148;
    tmp_msg_0.max_speed = 0.943130590526;
    tmp_msg_0.max_vrate = 0.414166068367;
    tmp_msg_0.lat = 0.421266425834;
    tmp_msg_0.lon = 0.533265220628;
    tmp_msg_0.orientation = 0.769676574241;
    tmp_msg_0.width = 0.200331773908;
    tmp_msg_0.length = 0.757430084616;
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
    msg.setTimeStamp(0.487367229085);
    msg.setSource(61364U);
    msg.setSourceEntity(34U);
    msg.setDestination(46677U);
    msg.setDestinationEntity(252U);
    msg.sys_id = 20200U;
    msg.priority = -12;
    msg.x = 7969;
    msg.y = -14361;
    msg.z = -14624;
    msg.t = -21629;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 26241U;
    tmp_msg_0.name.assign("GRKVRAMGCZHGXYULQMIAJAXXNARHLMEWZCTTENISFDBESOHAFVOLCTQIKWOSNVCRJNSDFTLDHZODDBZVZHXYPLCQVIRTXPREWUYMYBXGWFHJIBPIUJUOACGDZELKENMPDLUVKEOVJQMALSURIRQNIBVDAHZNCQMTBQLZKCTFOROINYNPRWNDUTBQBCFUSLZTXGEFADEEYCBSXVUMKYPF");
    tmp_msg_0.custom.assign("QZMZZDPSSKZMAXCKQOLYDSNAHUXOVAFXMMOBHDMWZGFUJBHPLBKOOFXUBHRFYHTWQJNOYOHICAWPISVXVCRKDDYOLRMWEIWUPYXPRIGJFKTCVRKQNBTSSPCLBLUINFMPYELYFIZTJBXNVNUUALVEEPNAPUJGHNWFHKBEGBT");
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
    msg.setTimeStamp(0.365370754285);
    msg.setSource(39149U);
    msg.setSourceEntity(118U);
    msg.setDestination(62027U);
    msg.setDestinationEntity(188U);
    msg.sys_id = 11753U;
    msg.priority = -68;
    msg.x = -10715;
    msg.y = 21685;
    msg.z = 18147;
    msg.t = -13229;
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.352027099134;
    tmp_msg_0.lon = 0.915475053036;
    tmp_msg_0.height = 0.0487444486137;
    tmp_msg_0.x = 0.964767567759;
    tmp_msg_0.y = 0.797970631527;
    tmp_msg_0.z = 0.0812310439762;
    tmp_msg_0.phi = 0.499687500186;
    tmp_msg_0.theta = 0.77412938292;
    tmp_msg_0.psi = 0.360934750123;
    tmp_msg_0.u = 0.983660260673;
    tmp_msg_0.v = 0.533612482765;
    tmp_msg_0.w = 0.484521424284;
    tmp_msg_0.vx = 0.383385521191;
    tmp_msg_0.vy = 0.95913732407;
    tmp_msg_0.vz = 0.674713350693;
    tmp_msg_0.p = 0.641566575597;
    tmp_msg_0.q = 0.382425985909;
    tmp_msg_0.r = 0.696898077191;
    tmp_msg_0.depth = 0.021250676173;
    tmp_msg_0.alt = 0.0413522308108;
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
    msg.setTimeStamp(0.413144320614);
    msg.setSource(49437U);
    msg.setSourceEntity(15U);
    msg.setDestination(3575U);
    msg.setDestinationEntity(224U);
    msg.req_id = 27378U;
    msg.type = 167U;
    msg.max_size = 27722U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.257932027715;
    tmp_msg_0.base_lon = 0.220894572816;
    tmp_msg_0.base_time = 0.0453064348504;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 39107U;
    tmp_tmp_msg_0_0.priority = -105;
    tmp_tmp_msg_0_0.x = -29464;
    tmp_tmp_msg_0_0.y = 27125;
    tmp_tmp_msg_0_0.z = -23250;
    tmp_tmp_msg_0_0.t = -16896;
    IMC::AutopilotMode tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.autonomy = 166U;
    tmp_tmp_tmp_msg_0_0_0.mode.assign("EQMTUITNTPBCBVWWECVZCFTMZ");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.23244451256);
    msg.setSource(26184U);
    msg.setSourceEntity(190U);
    msg.setDestination(40504U);
    msg.setDestinationEntity(86U);
    msg.req_id = 57766U;
    msg.type = 140U;
    msg.max_size = 44347U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.128954691148;
    tmp_msg_0.base_lon = 0.866005233204;
    tmp_msg_0.base_time = 0.170479460735;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 10878U;
    tmp_tmp_msg_0_0.destination = 5649U;
    tmp_tmp_msg_0_0.timeout = 0.456948706621;
    IMC::SmsRequest tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.req_id = 65014U;
    tmp_tmp_tmp_msg_0_0_0.destination.assign("OFGGEGLRUGEQWDKRNPQWVXOSMZYALQVYIZTVEVONPCBOZSYAUGIFINATFWCHPZVGCDTIXTDPDCHSLMUPGZIRLUGWLXBTXYEUCAJMKPTDHRWOSEFKLDFFLVXSNUBNYSSLOLNKHEAJQDHZEDBTAMMJARXWOOAVKKHJTMHWJBJTKCBCRYNDFZLQKUHGFYEBMXATSQGPPVUNQMWNJBWHKAWMDIXS");
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.833787443462;
    tmp_tmp_tmp_msg_0_0_0.sms_text.assign("QGTIJLQRTFFIIHTFCTXJJAOB");
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
    msg.setTimeStamp(0.428704404554);
    msg.setSource(971U);
    msg.setSourceEntity(85U);
    msg.setDestination(34898U);
    msg.setDestinationEntity(30U);
    msg.req_id = 52291U;
    msg.type = 254U;
    msg.max_size = 4563U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0749039440372;
    tmp_msg_0.base_lon = 0.590298974343;
    tmp_msg_0.base_time = 0.69735737846;
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
    msg.setTimeStamp(0.0337856768863);
    msg.setSource(64598U);
    msg.setSourceEntity(157U);
    msg.setDestination(32988U);
    msg.setDestinationEntity(119U);
    msg.original_source = 57148U;
    msg.destination = 2184U;
    msg.timeout = 0.214315539586;
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.368608575283;
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
    msg.setTimeStamp(0.320842932673);
    msg.setSource(55482U);
    msg.setSourceEntity(117U);
    msg.setDestination(408U);
    msg.setDestinationEntity(237U);
    msg.original_source = 51434U;
    msg.destination = 18933U;
    msg.timeout = 0.920374859203;
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.587093058508;
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
    msg.setTimeStamp(0.859246956638);
    msg.setSource(55753U);
    msg.setSourceEntity(112U);
    msg.setDestination(64470U);
    msg.setDestinationEntity(247U);
    msg.original_source = 2254U;
    msg.destination = 20863U;
    msg.timeout = 0.460202483847;
    IMC::Phycocyanin tmp_msg_0;
    tmp_msg_0.value = 0.667857609387;
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
    msg.setTimeStamp(0.688186170605);
    msg.setSource(45179U);
    msg.setSourceEntity(34U);
    msg.setDestination(60036U);
    msg.setDestinationEntity(194U);
    msg.type = 203U;
    msg.comm_interface = 16650U;
    msg.model = 35045U;
    msg.list.assign("JNTTPQVYRBOCELJEICKDZONKUUCTMPQIWDJZASAJGRVDJXD");

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
    msg.setTimeStamp(0.00639755303892);
    msg.setSource(15150U);
    msg.setSourceEntity(43U);
    msg.setDestination(31845U);
    msg.setDestinationEntity(117U);
    msg.type = 129U;
    msg.comm_interface = 53326U;
    msg.model = 1866U;
    msg.list.assign("KYVYCKSJPHKTWIIUQQQGGRXYBYOXNTNXCAHBNDWJDHENRVJVCTBOLAHEVNPHQCDOJFCLRYLWUDBZMLFDNJJTKKTZRESUVOOXFHMSGLIKPAJWQBPTQVCAVXMGYZVGDBBEPICBYSOFNOTRVRDOHIKSCZDUAPCWAFQEEVPPLAXXFZAMBQZWYSALTLOUFSIFUJUPGRMGIWGEBZWXGRRNMEDMQGYTILJWK");

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
    msg.setTimeStamp(0.352699160471);
    msg.setSource(41081U);
    msg.setSourceEntity(157U);
    msg.setDestination(31339U);
    msg.setDestinationEntity(183U);
    msg.type = 252U;
    msg.comm_interface = 29094U;
    msg.model = 30320U;
    msg.list.assign("NGYRACCNKVXFSUOREFRZKQBEZIOLZZIPTBQBZCAMZFMOMTLENUWTCBCQBPYGWTFVHNDHNLYDFWGOLGFKCJDXJCNGMXXSXGRFUQYZODIUCPSAHHMDRSIDWTVCATONYHALUVEASJWTVXXLZSSDBNAXJVKAMBMUYCDJVODJTQRZKFRVVNEJHLKAQJRJWGYRXIIBEUKVPEUGUOSWEKBMTMYSALFHWFIHHPQWOILKKB");

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
    msg.setTimeStamp(0.598700550554);
    msg.setSource(33471U);
    msg.setSourceEntity(129U);
    msg.setDestination(12192U);
    msg.setDestinationEntity(192U);
    msg.type = 195U;
    msg.req_id = 1244010973U;
    msg.ttl = 20868U;
    msg.code = 40U;
    msg.destination.assign("AQMPIFWOJGPROCERZJCTGPISIEZDKUMZDXBOVWUCYAAAIPTDXDFVBHHDNGOJOCJNGDIEGBEYNBHHHLSOUWCUWKVVFLQSGLCRYULOVIMNMRZMUIDFAURGNCELYSXTBFNCSMNAPKKJWGKSRCRNPOPDTKZUVIXYWTRAMLDFIYOSZYNWXKVBMTBXVVQXJWJBFZBLKLFLHXQDRHPQUQAEFXWCXMRHSHJJP");
    msg.source.assign("KVGSRHUZKCKGCQTXBYPSMZBLEGDQHDYAHTSYPADVGOWOLTUXVPKKDIUXMZBANURLYDVTAHICXCJFOIPUGDWNQGSMDWKDWEXZVPFTMCRNOBKESZLYOQQPI");
    msg.acknowledge = 110U;
    msg.status = 143U;
    const char tmp_msg_0[] = {-65, -85, -21, -69, 58, -33, 96, -108, -14, 62, 31, -47, -7, 62, 75, 48, -98, -69, -122, 91, -116, -3, 108, -25, -15, 22, -50, 124, -61, 47, -121, 30, -118, -90, -74, 37, 117, 21, -90, -76, -58, -13, -46, -70, -104, -67, -103, 64, 45, -82, 80, -37, 14, -128, 113};
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
    msg.setTimeStamp(0.850442942676);
    msg.setSource(63486U);
    msg.setSourceEntity(158U);
    msg.setDestination(55729U);
    msg.setDestinationEntity(96U);
    msg.type = 180U;
    msg.req_id = 1633215349U;
    msg.ttl = 9007U;
    msg.code = 35U;
    msg.destination.assign("XWECOGMQRHKQXDBPFQSERCRJJGTQUDVJPHZKUMYUHBAWKPDXPUAICNHYBZKOONPOCDKGCQWZCFKXWRKDVLJOLZXIPBBAENDGDCVXJOQZQXBJTPTYUQQMDNMJBGFNMRUVYTKVRSJLSXGLVIACVALWZTFGMNGGAFIWIFCTDEIDEPEBSISNFAVBTSMHCUSKLEFYPPOYEYGJVUHBRKWOFZS");
    msg.source.assign("GJJENNLNNXEOZRJBGSPFYYBFIATCUNHZCIYAPCMGUILGNIYSTUYUCDPWZLHYMPFTVYBLMPFVBKADHUAEXTSQQFKIUJRDLNAKRSBHWZJBVROPSGZQRH");
    msg.acknowledge = 79U;
    msg.status = 227U;
    const char tmp_msg_0[] = {104, 85, 43, 44, 113, 23, -67, -66, 46, -48, -96, 95, -113, -12, -48, -3, 103, -5, 52, -108, -88, -4, 15, -109, -41, 113, -106, 108, 62, -17, 23, -53, -14, -62, 100, -127, 102, 57, 72, -71, -29, 40, 109, -11, 94, -64, 109, 55, 92, -54, 91, -15, -26, 117, -72, -125, 41, -115, 36, -71, 16, -87, -89, 17, -76, 54, 22, 52, 26, 121, -38, 117, 9, -92, -59, -117, 2, -100, -84, -72, -63, 74, 25, 118, -126, 59, -65, 25, 79, 25, -9, -119, 65, -15, 100, 82, -37, 10, 12, 11, 120, 1, -18, -116, -113, 75, -59, -85, -112, -99, -73, -60, -126, -39, -106, 48, -33, -61, -6, 46, 125, 6, -91, -4, -62, 4, 110, 24, -33, 61, -78, -49, 9, -57, -119, 120, 125, -128, 13, 83, 72, -60, -4, -24, -87, -15, -54, -127, -60, 13, -91, -107, 43, 31, -115, -31, -121, -103, -84, -75, 15, -82, 30, -123, 114, 50, 89, -113, -99, -6, -25};
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
    msg.setTimeStamp(0.170090649858);
    msg.setSource(62745U);
    msg.setSourceEntity(208U);
    msg.setDestination(38704U);
    msg.setDestinationEntity(64U);
    msg.type = 245U;
    msg.req_id = 1342293472U;
    msg.ttl = 51333U;
    msg.code = 58U;
    msg.destination.assign("BZJFWLGIPHMSJHLM");
    msg.source.assign("EPSMIZLRHKVVOMQIZYNGIBYFUGMMZHVRAPEMAVJJBRBVSFPJTPMSSDBXTTJNWHJJHUORYYJPAHGSEBNGVKWQOCXGEUMUDPLZWTVHIQJCPWQRZQTWFHEVQFYZEKZEMYBKCTLNLXXLIDKISFXMNNUBBIGDRXAWSIDJXDGVOOLACUYICXPPZFOBKOCULQKDWCGDWXVGFASUQESFQDGHEEWRLOTKMRW");
    msg.acknowledge = 206U;
    msg.status = 78U;
    const char tmp_msg_0[] = {48, 117, 22, 105, 61, 120, 121, -32, -3, 113, -55, 9, 118, 105, 54, -118, 72, -101, 70, 30, 52, -29, 48, 36, -15, -29, -16, 26, -112, 115, 41, 32, -98, -112, -111, -46, -46, 113, -115, -97, 14, -125, 125, -105, 54, 49, 14, -79, 70, 79, -23, 43, -112, 73, -2, 19, -108, 3, -56, -34, -35, 103, -48, -74, 8, -13, -62, -75, -7, -119, 117, 33, 85, 35, -86, -106, 40, -79, 65, -20, -26, 120, -120, 94, -124, 40, -27, -32, 62, 98, 39, 50, 41, -57, 6, 108, 79, -61, -122, 99, 55, 112, -78, 66, -120, 71, -120, 53, -88, 125, 78, 8, -33, -46, 88, 108, -118, 6, 13, 44, 87, 0, -73, 74, -88, -46, 123, -34, 104, -35, -1, -86, -109, 35, 33, 120, 26, 5, -15, -85, 16, 3, 26, -77, -13, -110, -39, 65, 86, -106, 58, -95, 31, -104, 92, 68, -55, 54, -2, 4, 26, -35, -122, 74, -107, 45, 14, -12, -14, 60, 47, -75, -12, 97, 118, 55, -32, -19, -74, -85, -3, -106, -43, 34, 22, 98, -51, 25, 120, -36, -75, -117, 124, -6, -94, 72, -30, -32, 122, 111, -116, -121, 79, 28, 89, -86, 101, 96, 82, -55, -103, -29, 87, -65, 29, 26, 1, -57, 104, -52, -122, -65, -6, 4, 7, -92, -61, 112, -128, -103, 119, -126, -88, 61, 18, 21, 17, -41, 125, 63, 5, -41, -65, -81, 125, 106};
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
    msg.setTimeStamp(0.66437699257);
    msg.setSource(17968U);
    msg.setSourceEntity(41U);
    msg.setDestination(23042U);
    msg.setDestinationEntity(172U);
    msg.id = 147U;
    msg.range = 0.534938533256;

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
    msg.setTimeStamp(0.296357632073);
    msg.setSource(14953U);
    msg.setSourceEntity(152U);
    msg.setDestination(16194U);
    msg.setDestinationEntity(145U);
    msg.id = 197U;
    msg.range = 0.400906121674;

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
    msg.setTimeStamp(0.929447214153);
    msg.setSource(53993U);
    msg.setSourceEntity(35U);
    msg.setDestination(21188U);
    msg.setDestinationEntity(132U);
    msg.id = 11U;
    msg.range = 0.858858602897;

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
    msg.setTimeStamp(0.411543470354);
    msg.setSource(64548U);
    msg.setSourceEntity(64U);
    msg.setDestination(50309U);
    msg.setDestinationEntity(213U);
    msg.beacon.assign("CPXXRKMAVJPQDUACPVIISZJAGRSPTRLTESLNDOUOJGGITRIFYEUULMEJCGDUBBCFQTQYTVOURMSIROKDHLVOBTTNNKFOWFMZAQREVXISNKQAJCXFBPDZITHBBVCZJUMKKSQTIPCEOZVSWFFTANWPEELWEKWVZXYBNCGQJXXYHCWMKGEJLGXIZAGFYOMOUCZPWPHJHHKOGABUHNQNYQNSJDLMLGAYRBMVYPNWLEZDMSRZHFHXA");
    msg.lat = 0.142641984533;
    msg.lon = 0.807220387629;
    msg.depth = 0.269904344469;
    msg.query_channel = 70U;
    msg.reply_channel = 252U;
    msg.transponder_delay = 75U;

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
    msg.setTimeStamp(0.261011252704);
    msg.setSource(10923U);
    msg.setSourceEntity(88U);
    msg.setDestination(40301U);
    msg.setDestinationEntity(223U);
    msg.beacon.assign("YGZUVYEQHCGSPOABOPVWEVIFDFBEIWMWXQVQOUVKDBPNXVLGQRSLFVEFAGONRAQTZONISABXQXXIDOUMXRJDPBKYHRBLFDJGSYWEWEBJUARZCDQJTYRKGSIEPYYCEPMZJFHHTPRRSXWCTDNRUAIJMKGAKCOTQYLCVTTBPSNALJKDGMKZULLCMNFZFWCHTKIYMWGPSFTUZNHBNZOBZWQTHNJDXXHEVMUQLDIFIL");
    msg.lat = 0.259619975868;
    msg.lon = 0.133018350959;
    msg.depth = 0.326720117761;
    msg.query_channel = 185U;
    msg.reply_channel = 23U;
    msg.transponder_delay = 51U;

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
    msg.setTimeStamp(0.690323302896);
    msg.setSource(58842U);
    msg.setSourceEntity(78U);
    msg.setDestination(26036U);
    msg.setDestinationEntity(242U);
    msg.beacon.assign("ESAGIVGDNQZSDFIWQK");
    msg.lat = 0.408887513464;
    msg.lon = 0.0118099547539;
    msg.depth = 0.457957229968;
    msg.query_channel = 12U;
    msg.reply_channel = 88U;
    msg.transponder_delay = 213U;

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
    msg.setTimeStamp(0.650798809214);
    msg.setSource(45762U);
    msg.setSourceEntity(56U);
    msg.setDestination(57830U);
    msg.setDestinationEntity(247U);
    msg.op = 57U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UDGPEDQRIKLXDXGOEJYSWBPHZRUSWBQJJCOTLLMCZJUVUQKTIYQPJNOBFONGTPFASJXIHBPMNWPRKWSTXL");
    tmp_msg_0.lat = 0.0551828584179;
    tmp_msg_0.lon = 0.702990111878;
    tmp_msg_0.depth = 0.232347636287;
    tmp_msg_0.query_channel = 152U;
    tmp_msg_0.reply_channel = 200U;
    tmp_msg_0.transponder_delay = 168U;
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
    msg.setTimeStamp(0.698028599857);
    msg.setSource(57689U);
    msg.setSourceEntity(133U);
    msg.setDestination(29146U);
    msg.setDestinationEntity(188U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.839015679222);
    msg.setSource(60994U);
    msg.setSourceEntity(183U);
    msg.setDestination(62502U);
    msg.setDestinationEntity(47U);
    msg.op = 236U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XHKKJJQSOIGQIJHHWYCJTEKFCDLZGBPOSRAKNDBJDQLQYCKQQRPMXYAZRMZZEEXZVINBFOOMHNDAPFBESTMHIFATAUDCVPVNSKBVYOWUYBTWYUZAJBJJWNPNCTOUELLT");
    tmp_msg_0.lat = 0.732337411754;
    tmp_msg_0.lon = 0.582748249388;
    tmp_msg_0.depth = 0.309896490283;
    tmp_msg_0.query_channel = 200U;
    tmp_msg_0.reply_channel = 144U;
    tmp_msg_0.transponder_delay = 66U;
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
    msg.setTimeStamp(0.236060700076);
    msg.setSource(30174U);
    msg.setSourceEntity(161U);
    msg.setDestination(15270U);
    msg.setDestinationEntity(36U);
    IMC::CurrentVelocity tmp_msg_0;
    tmp_msg_0.x = 0.954465251689;
    tmp_msg_0.y = 0.344670827328;
    tmp_msg_0.z1 = 0.0974308792029;
    tmp_msg_0.z2 = 0.0319147934844;
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
    msg.setTimeStamp(0.761208833611);
    msg.setSource(19176U);
    msg.setSourceEntity(126U);
    msg.setDestination(10307U);
    msg.setDestinationEntity(93U);
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.838681111845;
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
    msg.setTimeStamp(0.937366974973);
    msg.setSource(16697U);
    msg.setSourceEntity(77U);
    msg.setDestination(34835U);
    msg.setDestinationEntity(240U);
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("NTPKVJBQMGIFAGLKNKFMEJCSKWOCZOIZKFRULYJCQGSCKPJWKBXUCPQFWDAKYOGDQPMQLGBNIAEHCVECVXDMCVBFRSWLHGRDNFVAQGYBHYWUONOWMKUVRKJFJUJHLSBDTYNVHZTFQTELESYUISLZUNCWOXRYSYZPXHQJAVUZTNRGHSAVFXRTZXDAEOIWZODEGATWUHRPALMLNIPQTHUPEINMVMLRFMYBXTSEWZXPPCHBZDXSJT");
    tmp_msg_0.dest_man.assign("RTPYSCBILZBRPPXAUHDWRXDETJJHNUVLSOQPUDITAXEEDFTVOMHUCBPQFPEBDPCMBWEMNIFZUYRLVJSUCZYKXFVI");
    tmp_msg_0.conditions.assign("ARICSBIKEMNZVPNTUUVXYYGYPCLDCJMUEAEUTYYKLPCHRWGKTFBWJSWTIFAORNHLZFRQSORQFGMSKAMNQMPEWEIPBMWQOSCITUVAVXPOLXUZFBZXYHMQJZLMSXWRBFOKQTRZADZNEORNYHDMODNJGDICLVVGBANTCSVLXFXFIJNDQOUFIXNGSRYHW");
    IMC::DesiredVerticalRate tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.590602586524;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.564878847555);
    msg.setSource(31026U);
    msg.setSourceEntity(38U);
    msg.setDestination(6477U);
    msg.setDestinationEntity(20U);
    msg.op = 213U;
    msg.system.assign("KXSBIYIJIZPAKFQUKQVLSFRFCGQRYOAVTQLSDZSVFVMXEJITSRFWQPNLYIIMXEUYKOONZARAGTWSMZGTWSLSCVBFZCETCCDKECEOQUYNOJLYWZOUOHXNTTWHEUNXRFNQMNFLJOINSMMIWVMBYPXDHUMJPKLTAUPTOWSKP");
    msg.range = 0.595871960321;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 32513U;
    tmp_msg_0.control_ent = 49U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 144U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.632440368784;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 59U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.278937832546;
    tmp_tmp_tmp_msg_0_0_1.z_units = 180U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.270390342423;
    tmp_tmp_msg_0_0.lon = 0.973660371093;
    tmp_tmp_msg_0_0.radius = 0.406741956553;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 233U;
    tmp_msg_0.proximity = 156U;
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
    msg.setTimeStamp(0.257547647644);
    msg.setSource(36791U);
    msg.setSourceEntity(115U);
    msg.setDestination(31634U);
    msg.setDestinationEntity(235U);
    msg.op = 156U;
    msg.system.assign("NBQDBOGDYBKGZADJOXODCDKWELTSRFGIRGQDEGRMORHDTBVDVVGIEXWIJSJXJPPSWPMTNAGCNETCQCAPXUHKWRBIZULHAPRVLNCNUOLJONLKJQVPTZWEIXNJKMWHAMMK");
    msg.range = 0.571235064131;
    IMC::CurrentProfile tmp_msg_0;
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
    msg.setTimeStamp(0.718200467415);
    msg.setSource(43417U);
    msg.setSourceEntity(215U);
    msg.setDestination(47486U);
    msg.setDestinationEntity(136U);
    msg.op = 125U;
    msg.system.assign("NEKKILZXQLLUJUSBVTCRHWYMDCJHIGQQTWGZQZAXWIDSFFODAMKQWZQGTAMMJLDSWHKGPYEJFYCCSIJVDKDIOHHYQVBHZ");
    msg.range = 0.704007662697;
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 75U;
    tmp_msg_0.clock = 0.661950003344;
    tmp_msg_0.tz = -113;
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
    msg.setTimeStamp(0.205788437894);
    msg.setSource(3595U);
    msg.setSourceEntity(47U);
    msg.setDestination(5302U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.726074492836);
    msg.setSource(9451U);
    msg.setSourceEntity(220U);
    msg.setDestination(20952U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.72033885533);
    msg.setSource(54488U);
    msg.setSourceEntity(9U);
    msg.setDestination(55412U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.273232784674);
    msg.setSource(26783U);
    msg.setSourceEntity(162U);
    msg.setDestination(7624U);
    msg.setDestinationEntity(211U);
    msg.list.assign("LDHLLTYAXYKGGVSNGAFWFUZCHVNLRUISMZGEVIDSWPINSOKKEAMCCVTJBHKUVEIEZJFEEBQHKJDTHRQNCRTASOFGPBCJRLXKEUFJQFGOIFHZXYVUEOQPKLJHQFPXVVRMVMPHNWUPDRODIBSADXMQYPLWRLBOYOXNEEMZOQDBJMNQAOCZWVQIYCCBMADWBLCRWKDWOGZYULWTNMBHUIJAPPXYISTZKAYUPCGYUNFHTZFWNDTSSTXXQMSA");

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
    msg.setTimeStamp(0.0621752166095);
    msg.setSource(11758U);
    msg.setSourceEntity(87U);
    msg.setDestination(54914U);
    msg.setDestinationEntity(27U);
    msg.list.assign("HVOVFYQRKRWXCWIEBAIKZTWZNMGOIECRBOMPYJDOSGPQOSWKJBDZAQJEQYPJNMYVQQSDNGKSQECAAPJHCFUNGSSEKUVQYUDREGPVIFJXSLBZLMAKFETBWSVBTYOICRMAIJZUUYQXXLRMHOWXTWFFPBEBDLTIUJIVOCKAYNHHCHKVXCADYFNLTGOMUPTJPCOVPMXBIZHR");

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
    msg.setTimeStamp(0.428791989681);
    msg.setSource(9986U);
    msg.setSourceEntity(117U);
    msg.setDestination(35554U);
    msg.setDestinationEntity(40U);
    msg.list.assign("APMMKMTIXTMNHLIUNBSGCPNNAEGZWFUKCOYYCZCYQDGLNHLZYBCRFFFWJCAOSKPBHXOIXISHWBVOHZNAWKDDUYXUQHOAPJTKVJJZDKUWSFQEEIBWCODRX");

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
    msg.setTimeStamp(0.867274941321);
    msg.setSource(16194U);
    msg.setSourceEntity(9U);
    msg.setDestination(5522U);
    msg.setDestinationEntity(122U);
    msg.peer.assign("XEHKOSNMAOUPMGKJIZCAFGCIYBJGRHMIRBHFLCJEXOAFOPFINLSHJZKQAJZQTTEDECCNTOHSXPIQYWBXTMFPLSWY");
    msg.rssi = 0.677312511222;
    msg.integrity = 47285U;

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
    msg.setTimeStamp(0.0804327324217);
    msg.setSource(27220U);
    msg.setSourceEntity(3U);
    msg.setDestination(3272U);
    msg.setDestinationEntity(3U);
    msg.peer.assign("OGPSKAOOBKXNAQRXJBNJTMZHPCZGTNSLWCEUBYLHFJRAZVAUIGLMYLJBQLTHMXJYQDESFARWOCTSUVITGWNRNDFAFVCVWDHURYJUAKLFFPNPOHKHXMGFZCUEGKXEQRPRNQGHISX");
    msg.rssi = 0.961680482776;
    msg.integrity = 52816U;

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
    msg.setTimeStamp(0.804370066698);
    msg.setSource(2963U);
    msg.setSourceEntity(175U);
    msg.setDestination(14931U);
    msg.setDestinationEntity(71U);
    msg.peer.assign("PXCWNUDSXRKOUYNRGYLCIKBXMUZFTZETZJSASRMMQPRLXYEPHAVJMZVLZ");
    msg.rssi = 0.957064391158;
    msg.integrity = 11616U;

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
    msg.setTimeStamp(0.657307672438);
    msg.setSource(19541U);
    msg.setSourceEntity(233U);
    msg.setDestination(39260U);
    msg.setDestinationEntity(127U);
    msg.req_id = 57486U;
    msg.destination.assign("FMLNGLIKPZRWODBXKRQGMJIAVXRDLQHFTIDLLEXHVSGOVCLMKBWHAXPKQEJAQTHTPMUJTCBGRFPVJ");
    msg.timeout = 0.276598982142;
    msg.range = 0.842937705621;
    msg.type = 216U;
    IMC::ImageTracking tmp_msg_0;
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
    msg.setTimeStamp(0.257676941338);
    msg.setSource(7517U);
    msg.setSourceEntity(128U);
    msg.setDestination(15592U);
    msg.setDestinationEntity(14U);
    msg.req_id = 49806U;
    msg.destination.assign("IPCBQUIYLKRJYARCICGLHHFLMNBZQNCTNFPSTGYPIAFXPLLMGCNBGUFUVACCFXYVFGODIORHHDFIOLPRNOMWRLXJFUVQYJQOYJASKSJVZQFEZVGAKUSSRDWOHBDWBWNHAZPUDTIRTTHIMQXXZVBWEAUEBEWQGDMNBQLTGPGRPJ");
    msg.timeout = 0.255046144674;
    msg.range = 0.67540238833;
    msg.type = 5U;
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.492642041839;
    tmp_msg_0.lon = 0.611829803895;
    tmp_msg_0.height = 0.107242870194;
    tmp_msg_0.x = 0.184096707797;
    tmp_msg_0.y = 0.567973214034;
    tmp_msg_0.z = 0.35954672943;
    tmp_msg_0.phi = 0.268500406709;
    tmp_msg_0.theta = 0.112964825841;
    tmp_msg_0.psi = 0.28481999859;
    tmp_msg_0.u = 0.532613137727;
    tmp_msg_0.v = 0.915515845835;
    tmp_msg_0.w = 0.985163638646;
    tmp_msg_0.vx = 0.127329071336;
    tmp_msg_0.vy = 0.473926557783;
    tmp_msg_0.vz = 0.965627893119;
    tmp_msg_0.p = 0.00538461071848;
    tmp_msg_0.q = 0.622359826707;
    tmp_msg_0.r = 0.208407319399;
    tmp_msg_0.depth = 0.872794439373;
    tmp_msg_0.alt = 0.250724218325;
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
    msg.setTimeStamp(0.739087843717);
    msg.setSource(25892U);
    msg.setSourceEntity(28U);
    msg.setDestination(59061U);
    msg.setDestinationEntity(100U);
    msg.req_id = 17234U;
    msg.destination.assign("LDNEISFQUGSPKTXPURTWIBRLTFMKWH");
    msg.timeout = 0.336515178003;
    msg.range = 0.0152307833419;
    msg.type = 222U;
    IMC::DissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.241455205128;
    tmp_msg_0.type = 115U;
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
    msg.setTimeStamp(0.908441453998);
    msg.setSource(31473U);
    msg.setSourceEntity(114U);
    msg.setDestination(37198U);
    msg.setDestinationEntity(126U);
    msg.req_id = 21112U;
    msg.type = 39U;
    msg.status = 251U;
    msg.info.assign("FSBQDKAGLQBTJOYJGSMKEDJJELMIDYSDUQVVAAYUCMMITEKSSCJZNCXULSWLWCESXPHXHQKDKQNKPRFYAVTKHVFKANTTEZWJWYIFTGOUXUFRTTQZKGCUANSJZNDFRVNSYVEM");
    msg.range = 0.344501140953;

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
    msg.setTimeStamp(0.663983075862);
    msg.setSource(32206U);
    msg.setSourceEntity(203U);
    msg.setDestination(49954U);
    msg.setDestinationEntity(11U);
    msg.req_id = 17083U;
    msg.type = 26U;
    msg.status = 225U;
    msg.info.assign("POFGTXOCCHHCFLQUOHMBXUOMYSYQDAVCSLYOYVEBJMHAKWDMKQZDBWLIMNUVYAIKYCHQVIJTJGAWOMDCMZRUKGUNUQJHKXQCAQSFENEOJXIVNRJTPQHPEFPXLRCKRROPSDWSQHJMLGWBPRXBFANITFGNTVGCTMXHITZYBDR");
    msg.range = 0.391865462069;

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
    msg.setTimeStamp(0.577926532944);
    msg.setSource(25476U);
    msg.setSourceEntity(94U);
    msg.setDestination(43212U);
    msg.setDestinationEntity(185U);
    msg.req_id = 36899U;
    msg.type = 206U;
    msg.status = 192U;
    msg.info.assign("YNJSSCZOFAFGPRMORVYUBMIDVINKFDMLQIDSRMYXWOUUWLWYPRDZWTDAWJLXHOGTELFZKKTGPNAGWGNZPBCNFLPEBBEEAQCJHZBVUOIQPIYTUOTVTGONQSWNBVDPWHVNZKZYXUXBDAPFHEKDMHKAKEBSJLWNYRAHJVIMCOZVYOJCRTKREHIGFISHTFHRGQYTDCFCFOHQLBILUEPXZSJ");
    msg.range = 0.729222554798;

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
    msg.setTimeStamp(0.522607525653);
    msg.setSource(21028U);
    msg.setSourceEntity(147U);
    msg.setDestination(57288U);
    msg.setDestinationEntity(80U);
    msg.value = -24792;

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
    msg.setTimeStamp(0.295869985304);
    msg.setSource(20391U);
    msg.setSourceEntity(144U);
    msg.setDestination(39661U);
    msg.setDestinationEntity(204U);
    msg.value = -23047;

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
    msg.setTimeStamp(0.35512123145);
    msg.setSource(59089U);
    msg.setSourceEntity(208U);
    msg.setDestination(8503U);
    msg.setDestinationEntity(150U);
    msg.value = -6157;

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
    msg.setTimeStamp(0.910586927789);
    msg.setSource(55512U);
    msg.setSourceEntity(96U);
    msg.setDestination(49881U);
    msg.setDestinationEntity(153U);
    msg.value = 0.266054563529;

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
    msg.setTimeStamp(0.673684510622);
    msg.setSource(22038U);
    msg.setSourceEntity(147U);
    msg.setDestination(32498U);
    msg.setDestinationEntity(170U);
    msg.value = 0.0598831913756;

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
    msg.setTimeStamp(0.608207725118);
    msg.setSource(22412U);
    msg.setSourceEntity(231U);
    msg.setDestination(46008U);
    msg.setDestinationEntity(169U);
    msg.value = 0.929119077544;

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
    msg.setTimeStamp(0.897870680748);
    msg.setSource(54913U);
    msg.setSourceEntity(97U);
    msg.setDestination(63201U);
    msg.setDestinationEntity(218U);
    msg.value = 0.64849815405;

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
    msg.setTimeStamp(0.169093188368);
    msg.setSource(42617U);
    msg.setSourceEntity(23U);
    msg.setDestination(23803U);
    msg.setDestinationEntity(229U);
    msg.value = 0.799987995977;

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
    msg.setTimeStamp(0.850862704335);
    msg.setSource(11480U);
    msg.setSourceEntity(117U);
    msg.setDestination(48858U);
    msg.setDestinationEntity(229U);
    msg.value = 0.0375024679687;

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
    msg.setTimeStamp(0.386931061111);
    msg.setSource(9581U);
    msg.setSourceEntity(99U);
    msg.setDestination(16500U);
    msg.setDestinationEntity(209U);
    msg.validity = 38572U;
    msg.type = 8U;
    msg.utc_year = 35636U;
    msg.utc_month = 170U;
    msg.utc_day = 10U;
    msg.utc_time = 0.55547201821;
    msg.lat = 0.0929577377379;
    msg.lon = 0.911645200299;
    msg.height = 0.524699763025;
    msg.satellites = 251U;
    msg.cog = 0.00926702289615;
    msg.sog = 0.124736325513;
    msg.hdop = 0.0103367582616;
    msg.vdop = 0.447027556071;
    msg.hacc = 0.116970808284;
    msg.vacc = 0.0650642320908;

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
    msg.setTimeStamp(0.870300178943);
    msg.setSource(63310U);
    msg.setSourceEntity(23U);
    msg.setDestination(9671U);
    msg.setDestinationEntity(235U);
    msg.validity = 63909U;
    msg.type = 246U;
    msg.utc_year = 63024U;
    msg.utc_month = 124U;
    msg.utc_day = 253U;
    msg.utc_time = 0.977331693616;
    msg.lat = 0.108179152752;
    msg.lon = 0.667689423577;
    msg.height = 0.262015214197;
    msg.satellites = 242U;
    msg.cog = 0.467005757913;
    msg.sog = 0.268104705439;
    msg.hdop = 0.425986491373;
    msg.vdop = 0.561508032173;
    msg.hacc = 0.094910729239;
    msg.vacc = 0.204449103389;

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
    msg.setTimeStamp(0.4972058786);
    msg.setSource(38200U);
    msg.setSourceEntity(141U);
    msg.setDestination(42831U);
    msg.setDestinationEntity(99U);
    msg.validity = 56427U;
    msg.type = 158U;
    msg.utc_year = 16627U;
    msg.utc_month = 246U;
    msg.utc_day = 4U;
    msg.utc_time = 0.174025085708;
    msg.lat = 0.418203678588;
    msg.lon = 0.380474356529;
    msg.height = 0.295140946899;
    msg.satellites = 12U;
    msg.cog = 0.828072573356;
    msg.sog = 0.714460293572;
    msg.hdop = 0.984650854385;
    msg.vdop = 0.722557005137;
    msg.hacc = 0.43783149172;
    msg.vacc = 0.742691738431;

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
    msg.setTimeStamp(0.102822559994);
    msg.setSource(25052U);
    msg.setSourceEntity(54U);
    msg.setDestination(55032U);
    msg.setDestinationEntity(185U);
    msg.time = 0.410267076398;
    msg.phi = 0.0648185669335;
    msg.theta = 0.958645995154;
    msg.psi = 0.883039782351;
    msg.psi_magnetic = 0.816132225788;

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
    msg.setTimeStamp(0.257282226961);
    msg.setSource(30223U);
    msg.setSourceEntity(233U);
    msg.setDestination(48497U);
    msg.setDestinationEntity(202U);
    msg.time = 0.432753849998;
    msg.phi = 0.522500613382;
    msg.theta = 0.0658761912152;
    msg.psi = 0.885388850324;
    msg.psi_magnetic = 0.321004931002;

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
    msg.setTimeStamp(0.655807254895);
    msg.setSource(60202U);
    msg.setSourceEntity(30U);
    msg.setDestination(13868U);
    msg.setDestinationEntity(111U);
    msg.time = 0.324677237682;
    msg.phi = 0.297678039701;
    msg.theta = 0.461888710288;
    msg.psi = 0.357037891483;
    msg.psi_magnetic = 0.461376393205;

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
    msg.setTimeStamp(0.740935890935);
    msg.setSource(36422U);
    msg.setSourceEntity(23U);
    msg.setDestination(11223U);
    msg.setDestinationEntity(56U);
    msg.time = 0.1087927657;
    msg.x = 0.760732097767;
    msg.y = 0.82923233536;
    msg.z = 0.239035981584;
    msg.timestep = 0.343053092718;

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
    msg.setTimeStamp(0.992606852432);
    msg.setSource(22520U);
    msg.setSourceEntity(172U);
    msg.setDestination(44647U);
    msg.setDestinationEntity(154U);
    msg.time = 0.027614575066;
    msg.x = 0.040737676774;
    msg.y = 0.695469312589;
    msg.z = 0.595697478268;
    msg.timestep = 0.326745943498;

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
    msg.setTimeStamp(0.502817490322);
    msg.setSource(12036U);
    msg.setSourceEntity(56U);
    msg.setDestination(1971U);
    msg.setDestinationEntity(152U);
    msg.time = 0.881485310167;
    msg.x = 0.840668129496;
    msg.y = 0.823100658285;
    msg.z = 0.652023128291;
    msg.timestep = 0.98467090153;

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
    msg.setTimeStamp(0.502352268921);
    msg.setSource(9714U);
    msg.setSourceEntity(210U);
    msg.setDestination(8838U);
    msg.setDestinationEntity(47U);
    msg.time = 0.55607381239;
    msg.x = 0.839367318172;
    msg.y = 0.664766778996;
    msg.z = 0.651554394122;

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
    msg.setTimeStamp(0.512206363037);
    msg.setSource(9835U);
    msg.setSourceEntity(93U);
    msg.setDestination(43764U);
    msg.setDestinationEntity(169U);
    msg.time = 0.523260068175;
    msg.x = 0.709697805841;
    msg.y = 0.443930344591;
    msg.z = 0.556598321008;

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
    msg.setTimeStamp(0.948673127094);
    msg.setSource(47484U);
    msg.setSourceEntity(22U);
    msg.setDestination(14960U);
    msg.setDestinationEntity(127U);
    msg.time = 0.263416392472;
    msg.x = 0.864209377851;
    msg.y = 0.0947962466702;
    msg.z = 0.388636199031;

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
    msg.setTimeStamp(0.629048555367);
    msg.setSource(26902U);
    msg.setSourceEntity(148U);
    msg.setDestination(56955U);
    msg.setDestinationEntity(31U);
    msg.time = 0.382405461592;
    msg.x = 0.676884310154;
    msg.y = 0.422705249684;
    msg.z = 0.788344104508;

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
    msg.setTimeStamp(0.679283188009);
    msg.setSource(5085U);
    msg.setSourceEntity(165U);
    msg.setDestination(61910U);
    msg.setDestinationEntity(253U);
    msg.time = 0.0140032677117;
    msg.x = 0.931025741443;
    msg.y = 0.93458413189;
    msg.z = 0.331190622542;

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
    msg.setTimeStamp(0.702635925339);
    msg.setSource(59878U);
    msg.setSourceEntity(17U);
    msg.setDestination(57408U);
    msg.setDestinationEntity(246U);
    msg.time = 0.613568564986;
    msg.x = 0.756510804058;
    msg.y = 0.236937392556;
    msg.z = 0.99662901602;

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
    msg.setTimeStamp(0.318310611284);
    msg.setSource(8683U);
    msg.setSourceEntity(226U);
    msg.setDestination(13069U);
    msg.setDestinationEntity(61U);
    msg.time = 0.907570427059;
    msg.x = 0.717209973708;
    msg.y = 0.572391598145;
    msg.z = 0.395702000745;

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
    msg.setTimeStamp(0.963166028148);
    msg.setSource(41773U);
    msg.setSourceEntity(102U);
    msg.setDestination(56782U);
    msg.setDestinationEntity(219U);
    msg.time = 0.258370563664;
    msg.x = 0.507956297126;
    msg.y = 0.515000157686;
    msg.z = 0.250043226809;

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
    msg.setTimeStamp(0.611613820436);
    msg.setSource(47616U);
    msg.setSourceEntity(23U);
    msg.setDestination(43504U);
    msg.setDestinationEntity(166U);
    msg.time = 0.3483363201;
    msg.x = 0.0977088802532;
    msg.y = 0.281080606272;
    msg.z = 0.876190120935;

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
    msg.setTimeStamp(0.973253020195);
    msg.setSource(29845U);
    msg.setSourceEntity(142U);
    msg.setDestination(19523U);
    msg.setDestinationEntity(56U);
    msg.validity = 162U;
    msg.x = 0.319900192312;
    msg.y = 0.0587464104937;
    msg.z = 0.711068129878;

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
    msg.setTimeStamp(0.918508553914);
    msg.setSource(6206U);
    msg.setSourceEntity(138U);
    msg.setDestination(49119U);
    msg.setDestinationEntity(150U);
    msg.validity = 241U;
    msg.x = 0.267104547596;
    msg.y = 0.998095010841;
    msg.z = 0.873052168267;

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
    msg.setTimeStamp(0.991597128287);
    msg.setSource(63197U);
    msg.setSourceEntity(194U);
    msg.setDestination(9688U);
    msg.setDestinationEntity(164U);
    msg.validity = 181U;
    msg.x = 0.74209431125;
    msg.y = 0.505585649118;
    msg.z = 0.82297278657;

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
    msg.setTimeStamp(0.950613093504);
    msg.setSource(5255U);
    msg.setSourceEntity(220U);
    msg.setDestination(54385U);
    msg.setDestinationEntity(71U);
    msg.validity = 102U;
    msg.x = 0.0807509445185;
    msg.y = 0.90349607593;
    msg.z = 0.552059440131;

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
    msg.setTimeStamp(0.939790030197);
    msg.setSource(14936U);
    msg.setSourceEntity(163U);
    msg.setDestination(19065U);
    msg.setDestinationEntity(171U);
    msg.validity = 35U;
    msg.x = 0.389453508765;
    msg.y = 0.262854817531;
    msg.z = 0.705118848338;

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
    msg.setTimeStamp(0.871508804867);
    msg.setSource(52283U);
    msg.setSourceEntity(115U);
    msg.setDestination(53192U);
    msg.setDestinationEntity(115U);
    msg.validity = 154U;
    msg.x = 0.347550156703;
    msg.y = 0.43024017816;
    msg.z = 0.913343398859;

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
    msg.setTimeStamp(0.168107186058);
    msg.setSource(59592U);
    msg.setSourceEntity(70U);
    msg.setDestination(27231U);
    msg.setDestinationEntity(99U);
    msg.time = 0.705828299589;
    msg.x = 0.0625113231726;
    msg.y = 0.701406239912;
    msg.z = 0.23864310356;

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
    msg.setTimeStamp(0.914873261913);
    msg.setSource(27553U);
    msg.setSourceEntity(33U);
    msg.setDestination(32326U);
    msg.setDestinationEntity(39U);
    msg.time = 0.107438959836;
    msg.x = 0.5049594307;
    msg.y = 0.308706976921;
    msg.z = 0.761325470941;

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
    msg.setTimeStamp(0.457502752726);
    msg.setSource(7402U);
    msg.setSourceEntity(145U);
    msg.setDestination(50524U);
    msg.setDestinationEntity(12U);
    msg.time = 0.738262111683;
    msg.x = 0.814761504385;
    msg.y = 0.994184347867;
    msg.z = 0.250089500596;

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
    msg.setTimeStamp(0.89433544004);
    msg.setSource(10044U);
    msg.setSourceEntity(253U);
    msg.setDestination(57015U);
    msg.setDestinationEntity(190U);
    msg.validity = 8U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.306495926912;
    tmp_msg_0.beam_height = 0.861192929543;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.944053697259;

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
    msg.setTimeStamp(0.768718097489);
    msg.setSource(56604U);
    msg.setSourceEntity(183U);
    msg.setDestination(22104U);
    msg.setDestinationEntity(194U);
    msg.validity = 70U;
    msg.value = 0.790541489477;

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
    msg.setTimeStamp(0.699529060986);
    msg.setSource(21603U);
    msg.setSourceEntity(103U);
    msg.setDestination(29076U);
    msg.setDestinationEntity(37U);
    msg.validity = 146U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.597538019163;
    tmp_msg_0.beam_height = 0.285717583243;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.0598469343317;

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
    msg.setTimeStamp(0.260461817531);
    msg.setSource(37692U);
    msg.setSourceEntity(49U);
    msg.setDestination(65412U);
    msg.setDestinationEntity(192U);
    msg.value = 0.879461249423;

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
    msg.setTimeStamp(0.724870823103);
    msg.setSource(600U);
    msg.setSourceEntity(4U);
    msg.setDestination(10123U);
    msg.setDestinationEntity(30U);
    msg.value = 0.985368157717;

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
    msg.setTimeStamp(0.787254027123);
    msg.setSource(43939U);
    msg.setSourceEntity(221U);
    msg.setDestination(30837U);
    msg.setDestinationEntity(140U);
    msg.value = 0.2173143288;

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
    msg.setTimeStamp(0.756362286978);
    msg.setSource(11462U);
    msg.setSourceEntity(104U);
    msg.setDestination(3824U);
    msg.setDestinationEntity(104U);
    msg.value = 0.776442821411;

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
    msg.setTimeStamp(0.0107152284801);
    msg.setSource(24218U);
    msg.setSourceEntity(104U);
    msg.setDestination(23005U);
    msg.setDestinationEntity(96U);
    msg.value = 0.702865177282;

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
    msg.setTimeStamp(0.147646517064);
    msg.setSource(29560U);
    msg.setSourceEntity(165U);
    msg.setDestination(1261U);
    msg.setDestinationEntity(38U);
    msg.value = 0.521169719793;

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
    msg.setTimeStamp(0.321474380679);
    msg.setSource(53347U);
    msg.setSourceEntity(169U);
    msg.setDestination(47881U);
    msg.setDestinationEntity(239U);
    msg.value = 0.75066685632;

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
    msg.setTimeStamp(0.242740511962);
    msg.setSource(4180U);
    msg.setSourceEntity(176U);
    msg.setDestination(22442U);
    msg.setDestinationEntity(211U);
    msg.value = 0.305337665595;

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
    msg.setTimeStamp(0.0595679578022);
    msg.setSource(14129U);
    msg.setSourceEntity(181U);
    msg.setDestination(7986U);
    msg.setDestinationEntity(2U);
    msg.value = 0.724625930797;

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
    msg.setTimeStamp(0.549831799603);
    msg.setSource(13153U);
    msg.setSourceEntity(64U);
    msg.setDestination(28248U);
    msg.setDestinationEntity(174U);
    msg.value = 0.9449769729;

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
    msg.setTimeStamp(0.026750218223);
    msg.setSource(1655U);
    msg.setSourceEntity(89U);
    msg.setDestination(3556U);
    msg.setDestinationEntity(158U);
    msg.value = 0.134265686541;

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
    msg.setTimeStamp(0.486673137361);
    msg.setSource(12425U);
    msg.setSourceEntity(26U);
    msg.setDestination(44394U);
    msg.setDestinationEntity(123U);
    msg.value = 0.572282279879;

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
    msg.setTimeStamp(0.960000376036);
    msg.setSource(11416U);
    msg.setSourceEntity(101U);
    msg.setDestination(51869U);
    msg.setDestinationEntity(126U);
    msg.value = 0.996464839427;

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
    msg.setTimeStamp(0.604883469005);
    msg.setSource(14772U);
    msg.setSourceEntity(168U);
    msg.setDestination(32094U);
    msg.setDestinationEntity(123U);
    msg.value = 0.797571050627;

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
    msg.setTimeStamp(0.98113825571);
    msg.setSource(35777U);
    msg.setSourceEntity(174U);
    msg.setDestination(59054U);
    msg.setDestinationEntity(55U);
    msg.value = 0.762881745067;

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
    msg.setTimeStamp(0.528332457785);
    msg.setSource(17687U);
    msg.setSourceEntity(167U);
    msg.setDestination(47655U);
    msg.setDestinationEntity(212U);
    msg.value = 0.263827686939;

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
    msg.setTimeStamp(0.895515186133);
    msg.setSource(53516U);
    msg.setSourceEntity(147U);
    msg.setDestination(43827U);
    msg.setDestinationEntity(183U);
    msg.value = 0.315341619481;

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
    msg.setTimeStamp(0.947457627289);
    msg.setSource(40471U);
    msg.setSourceEntity(13U);
    msg.setDestination(63635U);
    msg.setDestinationEntity(228U);
    msg.value = 0.536558258115;

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
    msg.setTimeStamp(0.062243913426);
    msg.setSource(9390U);
    msg.setSourceEntity(14U);
    msg.setDestination(55609U);
    msg.setDestinationEntity(239U);
    msg.value = 0.0602506775474;

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
    msg.setTimeStamp(0.0479555210162);
    msg.setSource(47877U);
    msg.setSourceEntity(70U);
    msg.setDestination(20274U);
    msg.setDestinationEntity(163U);
    msg.value = 0.755331373534;

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
    msg.setTimeStamp(0.618191831884);
    msg.setSource(59919U);
    msg.setSourceEntity(182U);
    msg.setDestination(38889U);
    msg.setDestinationEntity(147U);
    msg.value = 0.0237640954207;

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
    msg.setTimeStamp(0.10326684815);
    msg.setSource(23331U);
    msg.setSourceEntity(13U);
    msg.setDestination(13361U);
    msg.setDestinationEntity(39U);
    msg.value = 0.685622272907;

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
    msg.setTimeStamp(0.367831849101);
    msg.setSource(53422U);
    msg.setSourceEntity(201U);
    msg.setDestination(28463U);
    msg.setDestinationEntity(132U);
    msg.value = 0.0148071245354;

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
    msg.setTimeStamp(0.340532251693);
    msg.setSource(11276U);
    msg.setSourceEntity(114U);
    msg.setDestination(18388U);
    msg.setDestinationEntity(175U);
    msg.value = 0.403656982323;

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
    msg.setTimeStamp(0.110220018127);
    msg.setSource(32003U);
    msg.setSourceEntity(241U);
    msg.setDestination(55974U);
    msg.setDestinationEntity(215U);
    msg.direction = 0.707617527498;
    msg.speed = 0.486496132133;
    msg.turbulence = 0.364111997712;

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
    msg.setTimeStamp(0.0814033728591);
    msg.setSource(2642U);
    msg.setSourceEntity(24U);
    msg.setDestination(96U);
    msg.setDestinationEntity(74U);
    msg.direction = 0.516846653929;
    msg.speed = 0.0169632731536;
    msg.turbulence = 0.967756393211;

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
    msg.setTimeStamp(0.770403237274);
    msg.setSource(53825U);
    msg.setSourceEntity(207U);
    msg.setDestination(57811U);
    msg.setDestinationEntity(159U);
    msg.direction = 0.656566249564;
    msg.speed = 0.0100239146832;
    msg.turbulence = 0.534551903663;

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
    msg.setTimeStamp(0.981446076772);
    msg.setSource(20098U);
    msg.setSourceEntity(215U);
    msg.setDestination(35366U);
    msg.setDestinationEntity(38U);
    msg.value = 0.623251993612;

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
    msg.setTimeStamp(0.986558247912);
    msg.setSource(1054U);
    msg.setSourceEntity(43U);
    msg.setDestination(11337U);
    msg.setDestinationEntity(237U);
    msg.value = 0.203935489437;

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
    msg.setTimeStamp(0.95560766245);
    msg.setSource(43242U);
    msg.setSourceEntity(204U);
    msg.setDestination(29182U);
    msg.setDestinationEntity(210U);
    msg.value = 0.752726257794;

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
    msg.setTimeStamp(0.985545690752);
    msg.setSource(50070U);
    msg.setSourceEntity(173U);
    msg.setDestination(56970U);
    msg.setDestinationEntity(154U);
    msg.value.assign("XCSTPRQFAMROAEERQBIEIUDHGNFDCVLCUNIFDGLIERGSGHMLHXZZSODUDKLPZMCAAVCEBMM");

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
    msg.setTimeStamp(0.656502283125);
    msg.setSource(22987U);
    msg.setSourceEntity(131U);
    msg.setDestination(63919U);
    msg.setDestinationEntity(80U);
    msg.value.assign("LRNQBBDJJHHSVQMNEBLMLUKDIDYUPWQSFOKSFZRWTMSYWMXGAKXNXVKYJKRXRUNRVWFQGIHGEKJIDMXVGGHSGWADZEWOONJAYWMESSPAXOTIZPBQUHKECNBFNPRZCJFVKJDHZDTPAEAYBWLGPFSSXZVFZDOVQI");

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
    msg.setTimeStamp(0.194755174511);
    msg.setSource(64654U);
    msg.setSourceEntity(207U);
    msg.setDestination(3791U);
    msg.setDestinationEntity(241U);
    msg.value.assign("FAUHPXPRRGQBSPQONUNXUIAMUBTKUBLYXPIEZIVVBVVNFRCTTNSNGBAMZXIKLPWUQINHLVYJFALTKHXWJWTYJUVLAAJXWJGHPOTKJTLRKGGQMKRISDFCYDRHLTKWWWHNCXSSEFEIDYOZEXGMMYYGLVDYDORWKFKIASRUNMVGJEOAHMZDIERCYJOSOMZLBPTHMWCMQQBAUOPCD");

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
    msg.setTimeStamp(0.613067268414);
    msg.setSource(56493U);
    msg.setSourceEntity(110U);
    msg.setDestination(10194U);
    msg.setDestinationEntity(179U);
    const char tmp_msg_0[] = {23, -30, 118, 42, 58, 72, 15, 64, 104, -87, 50, -77, 72, 117, 60, -119, -116, 34, -26, -1, -128, -70, 38, 107, 80, -125, 6, -114, 24, 72, -65, 89, -93, 2, 107, 51, 13, 82, 73, 84, -32, -62, -112, -38, 57, -100, 8, -49, -8, 31, -88, 14, 54, 11, 54, -75, -103, -98, 46, -52, -83, 6, 41, -56, 50, -43, 20, 64, 36, -123, 25, -9, -34, 54, -4, 40, -14, -17, -88, -107, -93, -40, -45, -41, -98, -128, -9, -35, -116, 58, -120, 123, -39, -61, 49, 81, 24, -99, 18, -113, 56, -87, -72, 56, -48, 110, -60, -122, 31, -13, -76, 68, 99, 90, -6, -20, -95, 102, -92, 45, -39, -60, 67, 48, 20, 125, -79, -107, -128, -68, 105, 52, -1, -22, 24, 79, 123, 110, 71, 86, -106, 1, -116, -59, -112, -73, 2, -6, 2, 71, 44, -36, -61, 38, -77, -9, 124, -92, -70, 21, 84, 108, -80, -77, 116, -125, -87, -15, -95, -10, 60, -68, 62, -52, 14, -87, -74, 125, -17, 80, -125, -81, 78, -69, 3, -59, 106, -61, 32, 63, 58, 67, 43, -80, -30, 84, -76, -17, 9, -95, 72, 58, -118, -28, 122, -6, 34, -59, -14, -92, -37, -121, -122, 3, 98, 26, -99, 21, 42};
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
    msg.setTimeStamp(0.17417345504);
    msg.setSource(3676U);
    msg.setSourceEntity(195U);
    msg.setDestination(64494U);
    msg.setDestinationEntity(161U);
    const char tmp_msg_0[] = {-35, -75, 11, 78, 58, 2, 22, -7, 63, 49, -6, -75, 43, 47, -92, -3, -15, 34, -37, -118, 37, -53, -66, 4, -68, 121, -94, 0, -63, -81, 13, -29, -46, 100, 119, 108, 56, 75, 26, -8, 49, -103, -72, 48, 76, 121, -85, 102, -83, 52, 58, 117, -111, 31, -128, -26, -34, -100, 123, 61, -76, -7, -84, 54, -69, -95, 24};
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
    msg.setTimeStamp(0.765834239931);
    msg.setSource(42960U);
    msg.setSourceEntity(143U);
    msg.setDestination(65107U);
    msg.setDestinationEntity(250U);
    const char tmp_msg_0[] = {-116, 116, -57, 98, -19, 44, -75, -103, -66, 103, 124, 36, 66, 98, -45, 83, -5, -96, -64, 101, 34, -32, -84, -115, 29, 8, 111, 21, -9, -51, 54, 40, 49, 104, 37, -53, 41, 26, 31, 45, -18, -57, -62, 111, 30, -50, 124, -126, 45, 121, -23, 23, 110, -116, -43, 5, 99, -80, -70, 91, -34, -5, -78, 38, -57, -1, -100, 55, 50, 25, -72, 81, -115, 86, -116, 34, 35, -97, 77, -108, -93, 66, -115, 98, -55, -97, 46, 35, -18, 89, -110, -110, -59, -79, -41, -107, -42, 1, -120, 25, 1, -105, -66, 117, 105, 74, -68, 65, 29, 18, -76, 13, -81, 109, -97, -104, -18, -114, 94, 125, -104, 19, -120, 39, -66, 77, -104, -60, -24, -15, 63, -76, 81, -19, -51, -69, 99, 3, -30, -108, -61, 37, 39, 48, -54, -51, 94};
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
    msg.setTimeStamp(0.491028458092);
    msg.setSource(27001U);
    msg.setSourceEntity(216U);
    msg.setDestination(18839U);
    msg.setDestinationEntity(187U);
    msg.value = 0.277212505351;

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
    msg.setTimeStamp(0.476139248738);
    msg.setSource(59691U);
    msg.setSourceEntity(206U);
    msg.setDestination(11513U);
    msg.setDestinationEntity(166U);
    msg.value = 0.590751372553;

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
    msg.setTimeStamp(0.0487677637661);
    msg.setSource(48349U);
    msg.setSourceEntity(136U);
    msg.setDestination(45545U);
    msg.setDestinationEntity(27U);
    msg.value = 0.0568502645925;

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
    msg.setTimeStamp(0.926533980385);
    msg.setSource(26927U);
    msg.setSourceEntity(48U);
    msg.setDestination(11384U);
    msg.setDestinationEntity(135U);
    msg.type = 124U;
    msg.frequency = 3071717005U;
    msg.min_range = 2312U;
    msg.max_range = 4932U;
    msg.bits_per_point = 169U;
    msg.scale_factor = 0.60674919779;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.474102428718;
    tmp_msg_0.beam_height = 0.387747788413;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {98, 84, -61, -44, 56, 33, 7, -26, -44, 117, -53, 28, -95, 125, -92, -82, -9, -112, -50, -45, 34, 83, -109, 82, 36, -36, 111, -69, -15, 45, 1, 17, 54, -103, 26, 36, 108, -120, 74, -80, -13, 74, 55, 11, -9, 17, -125, 108, 37, -39, 121, 27, -96, -75, -87, 8, -55, -7, 123, -91, -64, 64, -51, 110, 45, 100, 50, -31, 11, 52};
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
    msg.setTimeStamp(0.314228142037);
    msg.setSource(5358U);
    msg.setSourceEntity(187U);
    msg.setDestination(31887U);
    msg.setDestinationEntity(225U);
    msg.type = 40U;
    msg.frequency = 2576497011U;
    msg.min_range = 17949U;
    msg.max_range = 21032U;
    msg.bits_per_point = 183U;
    msg.scale_factor = 0.748544848641;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.188782164297;
    tmp_msg_0.beam_height = 0.812276679741;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {68, -5, 34, -7, 10, -25, 8, -66, -18, 61, 125, -19, -25, 79, 78, -15, -98, 110, 95, -81, -57, 102, 39, -17, -55, -68, -8, 109, -103, 34, -44, 89, 30, -6, -18, -31, -116, -123, 41, -76, -53, 121, 81, -112, 121, -42, -91, 26, 0, -3, -10, 96, 37, 94, -8, 86, 44, 108, 87, -12, 92, -64, 51, -96, -108, 16, -11, -84, -123, -122, -102, -8, -23, 7, -15, 2, 11, 85, -89, 80, -28, 62, -115, 56, -112, 77, -28, 15, -20, 115, 91, 69, -71, 83, -31, -78, -126, 112, -100, -74, 58, 53, 97, -56, -38, 59, -52, 3, 107, -16, 49, 114, 99, -7, -4, -127, -84, -109, -91, -81, 53, 69, 81, 101, -77, 91, 16};
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
    msg.setTimeStamp(0.606330346188);
    msg.setSource(2329U);
    msg.setSourceEntity(218U);
    msg.setDestination(18985U);
    msg.setDestinationEntity(67U);
    msg.type = 148U;
    msg.frequency = 2958844327U;
    msg.min_range = 43015U;
    msg.max_range = 35304U;
    msg.bits_per_point = 51U;
    msg.scale_factor = 0.583818204168;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.348442051513;
    tmp_msg_0.beam_height = 0.390198750646;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-74, -21, -18, -4, -87, 16, 48, 74, 78, 106, 26, -40, -110, -14, -56, 34, -32, 17, 90, -119, -120, -115, -106, -127, 60, 93, -111, 37, -25, -38, -48, -114, -14, 119, -20, -111, 13, 110, -120, 33, 121, 82, -106, 64, 25, 84, -11, -109, -124, -104, -97, -91, -85, 85, 70, 18, 125, 12, -115, -8, 44, -104, -112, -86, -60, 104, -33, 14, 111, 66, 59, 79, 27, 12, -79, 35, -31, -57, 1, -125, 57, -107, -92, -121, -91, -121, -11, 42, 91, 19, -83, -32, 28, -74, -33, -41, 13, -30, -43, -41, 99, -22, 94, -75, -66, 77, 22, 30, 63, -98, 13, -58, -78, -118, 7, 0, -46, -90, -19, 5, 111, -97, 109, 67, -79, -76, -54, 41, -73, -20, 103, 89, -1, 118, -56, 24, 26, 88, -16, -72, -122, -35, -24, -33, -19, -58, -36, -108};
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
    msg.setTimeStamp(0.236176367725);
    msg.setSource(27655U);
    msg.setSourceEntity(35U);
    msg.setDestination(11741U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.28945629619);
    msg.setSource(56608U);
    msg.setSourceEntity(190U);
    msg.setDestination(42633U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.361757289545);
    msg.setSource(32073U);
    msg.setSourceEntity(174U);
    msg.setDestination(51590U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.168824739236);
    msg.setSource(29546U);
    msg.setSourceEntity(187U);
    msg.setDestination(30872U);
    msg.setDestinationEntity(87U);
    msg.op = 84U;

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
    msg.setTimeStamp(0.575581670548);
    msg.setSource(50741U);
    msg.setSourceEntity(89U);
    msg.setDestination(440U);
    msg.setDestinationEntity(59U);
    msg.op = 247U;

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
    msg.setTimeStamp(0.0277793090422);
    msg.setSource(18300U);
    msg.setSourceEntity(236U);
    msg.setDestination(26944U);
    msg.setDestinationEntity(20U);
    msg.op = 68U;

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
    msg.setTimeStamp(0.829308080445);
    msg.setSource(34325U);
    msg.setSourceEntity(137U);
    msg.setDestination(38159U);
    msg.setDestinationEntity(199U);
    msg.value = 0.444991808849;
    msg.confidence = 0.283554177234;
    msg.opmodes.assign("QVIICHVHHZCEUOIMAMUWJKXCYDENVUOIQBWMSQGKOKNBRHHPSFCOJFFZZGPOZPEGFBPRJIFDQQZMXYCLAVJCBBVMALVDEYXRQIQQBNAOEOEGBSYBWCTWIHNYSKRMXITJXZ");

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
    msg.setTimeStamp(0.13646795357);
    msg.setSource(17401U);
    msg.setSourceEntity(108U);
    msg.setDestination(35817U);
    msg.setDestinationEntity(54U);
    msg.value = 0.37400027941;
    msg.confidence = 0.127265951101;
    msg.opmodes.assign("XIILHDZQVEOJSJFRQXTGQJVRNBYTWEDKPGREMRANYJICAXWZGHMLIVFMHAINMXLFABYGRNCFGLPIDFBGHXIRHVDNAFZTSOTFSFPPZATUNA");

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
    msg.setTimeStamp(0.988222454808);
    msg.setSource(63644U);
    msg.setSourceEntity(205U);
    msg.setDestination(7753U);
    msg.setDestinationEntity(71U);
    msg.value = 0.554628562201;
    msg.confidence = 0.341389346594;
    msg.opmodes.assign("PXABQQLRLTUQVEHEPVUHPJHACKSKJUJHSYRWMPVMLNCYYYOWSFONOWUVQKGKPHTNUUWJCLMMOVZGQGZQDIGMRHZZWRWRLCTPYUODXWPBZIMEFRVIDGWBAKUTZXNFSFAJUNXZELGVXSDYONAOYLGNSWXBYEBMVFDKHGIAPLTSTL");

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
    msg.setTimeStamp(0.890905127779);
    msg.setSource(32539U);
    msg.setSourceEntity(165U);
    msg.setDestination(33348U);
    msg.setDestinationEntity(216U);
    msg.itow = 1819300613U;
    msg.lat = 0.939970930664;
    msg.lon = 0.0803452552738;
    msg.height_ell = 0.631558633609;
    msg.height_sea = 0.362801222035;
    msg.hacc = 0.789217985648;
    msg.vacc = 0.981873597779;
    msg.vel_n = 0.360697852186;
    msg.vel_e = 0.829123181109;
    msg.vel_d = 0.760133742176;
    msg.speed = 0.880769109423;
    msg.gspeed = 0.865912880782;
    msg.heading = 0.435670368422;
    msg.sacc = 0.772688262952;
    msg.cacc = 0.998349166957;

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
    msg.setTimeStamp(0.685614915534);
    msg.setSource(54732U);
    msg.setSourceEntity(102U);
    msg.setDestination(2797U);
    msg.setDestinationEntity(236U);
    msg.itow = 1303144340U;
    msg.lat = 0.19347234045;
    msg.lon = 0.785516784088;
    msg.height_ell = 0.474314198819;
    msg.height_sea = 0.064019354033;
    msg.hacc = 0.512190264775;
    msg.vacc = 0.34006203865;
    msg.vel_n = 0.249587638225;
    msg.vel_e = 0.37914763028;
    msg.vel_d = 0.0210002870746;
    msg.speed = 0.879870015232;
    msg.gspeed = 0.983857220209;
    msg.heading = 0.877558541353;
    msg.sacc = 0.37507728262;
    msg.cacc = 0.846482320125;

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
    msg.setTimeStamp(0.667569269499);
    msg.setSource(31893U);
    msg.setSourceEntity(111U);
    msg.setDestination(26504U);
    msg.setDestinationEntity(158U);
    msg.itow = 3097699341U;
    msg.lat = 0.361396670046;
    msg.lon = 0.737103300086;
    msg.height_ell = 0.781589128572;
    msg.height_sea = 0.836788627228;
    msg.hacc = 0.075835968835;
    msg.vacc = 0.078964208471;
    msg.vel_n = 0.983352904689;
    msg.vel_e = 0.702632351338;
    msg.vel_d = 0.237655329809;
    msg.speed = 0.56994979213;
    msg.gspeed = 0.328421255438;
    msg.heading = 0.224619678316;
    msg.sacc = 0.603351598582;
    msg.cacc = 0.79214541031;

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
    msg.setTimeStamp(0.191350689973);
    msg.setSource(1191U);
    msg.setSourceEntity(22U);
    msg.setDestination(10240U);
    msg.setDestinationEntity(104U);
    msg.id = 90U;
    msg.value = 0.982513430635;

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
    msg.setTimeStamp(0.905956484136);
    msg.setSource(20544U);
    msg.setSourceEntity(106U);
    msg.setDestination(53313U);
    msg.setDestinationEntity(242U);
    msg.id = 116U;
    msg.value = 0.00148277488602;

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
    msg.setTimeStamp(0.134267226278);
    msg.setSource(55515U);
    msg.setSourceEntity(183U);
    msg.setDestination(62548U);
    msg.setDestinationEntity(63U);
    msg.id = 180U;
    msg.value = 0.00589107245899;

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
    msg.setTimeStamp(0.861841506702);
    msg.setSource(7257U);
    msg.setSourceEntity(143U);
    msg.setDestination(59854U);
    msg.setDestinationEntity(27U);
    msg.x = 0.26940681943;
    msg.y = 0.677529239859;
    msg.z = 0.305966603163;
    msg.phi = 0.552440896742;
    msg.theta = 0.906779945119;
    msg.psi = 0.0753336523344;

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
    msg.setTimeStamp(0.233534341884);
    msg.setSource(17470U);
    msg.setSourceEntity(57U);
    msg.setDestination(36370U);
    msg.setDestinationEntity(218U);
    msg.x = 0.458081392841;
    msg.y = 0.783355686694;
    msg.z = 0.306472550208;
    msg.phi = 0.0722090245478;
    msg.theta = 0.873304639661;
    msg.psi = 0.560027663357;

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
    msg.setTimeStamp(0.500498146546);
    msg.setSource(28754U);
    msg.setSourceEntity(236U);
    msg.setDestination(36993U);
    msg.setDestinationEntity(201U);
    msg.x = 0.850128063144;
    msg.y = 0.0860139277922;
    msg.z = 0.393709343472;
    msg.phi = 0.0752298677053;
    msg.theta = 0.970308116703;
    msg.psi = 0.898058638465;

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
    msg.setTimeStamp(0.195562902438);
    msg.setSource(23765U);
    msg.setSourceEntity(177U);
    msg.setDestination(5483U);
    msg.setDestinationEntity(142U);
    msg.beam_width = 0.384922487927;
    msg.beam_height = 0.46546336988;

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
    msg.setTimeStamp(0.812659343692);
    msg.setSource(28456U);
    msg.setSourceEntity(165U);
    msg.setDestination(18801U);
    msg.setDestinationEntity(169U);
    msg.beam_width = 0.753680642762;
    msg.beam_height = 0.161278300332;

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
    msg.setTimeStamp(0.63973431161);
    msg.setSource(34732U);
    msg.setSourceEntity(45U);
    msg.setDestination(21737U);
    msg.setDestinationEntity(5U);
    msg.beam_width = 0.083943899026;
    msg.beam_height = 0.597913562477;

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
    msg.setTimeStamp(0.251765966608);
    msg.setSource(36889U);
    msg.setSourceEntity(161U);
    msg.setDestination(873U);
    msg.setDestinationEntity(145U);
    msg.sane = 116U;

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
    msg.setTimeStamp(0.8491448235);
    msg.setSource(45014U);
    msg.setSourceEntity(40U);
    msg.setDestination(50613U);
    msg.setDestinationEntity(48U);
    msg.sane = 50U;

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
    msg.setTimeStamp(0.531520067997);
    msg.setSource(17778U);
    msg.setSourceEntity(71U);
    msg.setDestination(33563U);
    msg.setDestinationEntity(115U);
    msg.sane = 101U;

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
    msg.setTimeStamp(0.349009971228);
    msg.setSource(32546U);
    msg.setSourceEntity(199U);
    msg.setDestination(48583U);
    msg.setDestinationEntity(220U);
    msg.value = 0.85526722858;

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
    msg.setTimeStamp(0.386928143739);
    msg.setSource(41278U);
    msg.setSourceEntity(154U);
    msg.setDestination(35893U);
    msg.setDestinationEntity(212U);
    msg.value = 0.751369990179;

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
    msg.setTimeStamp(0.596787224573);
    msg.setSource(42017U);
    msg.setSourceEntity(122U);
    msg.setDestination(53788U);
    msg.setDestinationEntity(180U);
    msg.value = 0.319815186353;

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
    msg.setTimeStamp(0.90594971277);
    msg.setSource(63053U);
    msg.setSourceEntity(177U);
    msg.setDestination(12644U);
    msg.setDestinationEntity(59U);
    msg.value = 0.736578971157;

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
    msg.setTimeStamp(0.199088837735);
    msg.setSource(3893U);
    msg.setSourceEntity(210U);
    msg.setDestination(27621U);
    msg.setDestinationEntity(151U);
    msg.value = 0.440367590131;

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
    msg.setTimeStamp(0.265955398552);
    msg.setSource(22301U);
    msg.setSourceEntity(84U);
    msg.setDestination(53258U);
    msg.setDestinationEntity(76U);
    msg.value = 0.921899752315;

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
    msg.setTimeStamp(0.089208130077);
    msg.setSource(62991U);
    msg.setSourceEntity(197U);
    msg.setDestination(1466U);
    msg.setDestinationEntity(20U);
    msg.value = 0.140853232894;

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
    msg.setTimeStamp(0.695313652183);
    msg.setSource(35186U);
    msg.setSourceEntity(194U);
    msg.setDestination(38025U);
    msg.setDestinationEntity(5U);
    msg.value = 0.968915575091;

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
    msg.setTimeStamp(0.710166842765);
    msg.setSource(58565U);
    msg.setSourceEntity(230U);
    msg.setDestination(16672U);
    msg.setDestinationEntity(227U);
    msg.value = 0.0713454069623;

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
    msg.setTimeStamp(0.353978924278);
    msg.setSource(63566U);
    msg.setSourceEntity(86U);
    msg.setDestination(18507U);
    msg.setDestinationEntity(42U);
    msg.value = 0.793494914632;

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
    msg.setTimeStamp(0.561655901433);
    msg.setSource(60883U);
    msg.setSourceEntity(210U);
    msg.setDestination(51967U);
    msg.setDestinationEntity(91U);
    msg.value = 0.832245916037;

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
    msg.setTimeStamp(0.340241599472);
    msg.setSource(9760U);
    msg.setSourceEntity(232U);
    msg.setDestination(64968U);
    msg.setDestinationEntity(246U);
    msg.value = 0.434386159184;

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
    msg.setTimeStamp(0.178266869791);
    msg.setSource(28170U);
    msg.setSourceEntity(50U);
    msg.setDestination(12525U);
    msg.setDestinationEntity(41U);
    msg.value = 0.875908580741;

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
    msg.setTimeStamp(0.253437267413);
    msg.setSource(51588U);
    msg.setSourceEntity(244U);
    msg.setDestination(39949U);
    msg.setDestinationEntity(99U);
    msg.value = 0.262915500765;

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
    msg.setTimeStamp(0.716832909214);
    msg.setSource(14816U);
    msg.setSourceEntity(92U);
    msg.setDestination(40152U);
    msg.setDestinationEntity(133U);
    msg.value = 0.367979422442;

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
    msg.setTimeStamp(0.711160644804);
    msg.setSource(29351U);
    msg.setSourceEntity(165U);
    msg.setDestination(45435U);
    msg.setDestinationEntity(105U);
    msg.value = 0.907102275892;

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
    msg.setTimeStamp(0.0588827312743);
    msg.setSource(18272U);
    msg.setSourceEntity(92U);
    msg.setDestination(39886U);
    msg.setDestinationEntity(110U);
    msg.value = 0.711797322714;

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
    msg.setTimeStamp(0.110246031627);
    msg.setSource(43240U);
    msg.setSourceEntity(93U);
    msg.setDestination(56489U);
    msg.setDestinationEntity(224U);
    msg.value = 0.0386608498145;

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
    msg.setTimeStamp(0.95075351479);
    msg.setSource(47121U);
    msg.setSourceEntity(191U);
    msg.setDestination(51891U);
    msg.setDestinationEntity(27U);
    msg.value = 0.732575548923;

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
    msg.setTimeStamp(0.34997452239);
    msg.setSource(12971U);
    msg.setSourceEntity(33U);
    msg.setDestination(55123U);
    msg.setDestinationEntity(80U);
    msg.value = 0.368193004208;

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
    msg.setTimeStamp(0.855482745194);
    msg.setSource(42228U);
    msg.setSourceEntity(70U);
    msg.setDestination(41211U);
    msg.setDestinationEntity(91U);
    msg.value = 0.162726480077;

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
    msg.setTimeStamp(0.506312673157);
    msg.setSource(16164U);
    msg.setSourceEntity(53U);
    msg.setDestination(13619U);
    msg.setDestinationEntity(176U);
    msg.value = 0.999302220623;

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
    msg.setTimeStamp(0.348978332317);
    msg.setSource(61167U);
    msg.setSourceEntity(188U);
    msg.setDestination(579U);
    msg.setDestinationEntity(153U);
    msg.value = 0.308871330398;

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
    msg.setTimeStamp(0.670533130409);
    msg.setSource(50562U);
    msg.setSourceEntity(52U);
    msg.setDestination(24762U);
    msg.setDestinationEntity(7U);
    msg.value = 0.731986261734;

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
    msg.setTimeStamp(0.265890156923);
    msg.setSource(42359U);
    msg.setSourceEntity(201U);
    msg.setDestination(53738U);
    msg.setDestinationEntity(140U);
    msg.validity = 26922U;
    msg.type = 103U;
    msg.tow = 3622213390U;
    msg.base_lat = 0.0933612443649;
    msg.base_lon = 0.948397034475;
    msg.base_height = 0.548917718381;
    msg.n = 0.695027747533;
    msg.e = 0.127368897555;
    msg.d = 0.809415596168;
    msg.v_n = 0.916855980795;
    msg.v_e = 0.323643779436;
    msg.v_d = 0.559604387287;
    msg.satellites = 141U;
    msg.iar_hyp = 34671U;
    msg.iar_ratio = 0.115600359373;

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
    msg.setTimeStamp(0.581896228534);
    msg.setSource(28438U);
    msg.setSourceEntity(227U);
    msg.setDestination(54538U);
    msg.setDestinationEntity(40U);
    msg.validity = 16165U;
    msg.type = 134U;
    msg.tow = 4013885605U;
    msg.base_lat = 0.248836741119;
    msg.base_lon = 0.878110981586;
    msg.base_height = 0.0370771685881;
    msg.n = 0.607182551921;
    msg.e = 0.355161100544;
    msg.d = 0.260097457357;
    msg.v_n = 0.238051182438;
    msg.v_e = 0.558207760121;
    msg.v_d = 0.179725353342;
    msg.satellites = 253U;
    msg.iar_hyp = 60721U;
    msg.iar_ratio = 0.603849523971;

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
    msg.setTimeStamp(0.420452198085);
    msg.setSource(61944U);
    msg.setSourceEntity(62U);
    msg.setDestination(11964U);
    msg.setDestinationEntity(229U);
    msg.validity = 49685U;
    msg.type = 150U;
    msg.tow = 1664461155U;
    msg.base_lat = 0.29323963329;
    msg.base_lon = 0.972397093715;
    msg.base_height = 0.114311127139;
    msg.n = 0.682365833188;
    msg.e = 0.196373092978;
    msg.d = 0.391850233069;
    msg.v_n = 0.692584866233;
    msg.v_e = 0.161085552291;
    msg.v_d = 0.770328962713;
    msg.satellites = 44U;
    msg.iar_hyp = 50164U;
    msg.iar_ratio = 0.345575474872;

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
    msg.setTimeStamp(0.453502171703);
    msg.setSource(56045U);
    msg.setSourceEntity(238U);
    msg.setDestination(65425U);
    msg.setDestinationEntity(117U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0134167330837;
    tmp_msg_0.lon = 0.42565083424;
    tmp_msg_0.height = 0.113948428579;
    tmp_msg_0.x = 0.0709434179983;
    tmp_msg_0.y = 0.855369879521;
    tmp_msg_0.z = 0.084594340062;
    tmp_msg_0.phi = 0.406282920354;
    tmp_msg_0.theta = 0.475971109387;
    tmp_msg_0.psi = 0.936379022713;
    tmp_msg_0.u = 0.579262808678;
    tmp_msg_0.v = 0.498430882943;
    tmp_msg_0.w = 0.328004996944;
    tmp_msg_0.vx = 0.528576488474;
    tmp_msg_0.vy = 0.777900200383;
    tmp_msg_0.vz = 0.640395754148;
    tmp_msg_0.p = 0.93938699039;
    tmp_msg_0.q = 0.468412810432;
    tmp_msg_0.r = 0.57343672441;
    tmp_msg_0.depth = 0.701641610869;
    tmp_msg_0.alt = 0.486063964076;
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
    msg.setTimeStamp(0.0100073192804);
    msg.setSource(46758U);
    msg.setSourceEntity(60U);
    msg.setDestination(2615U);
    msg.setDestinationEntity(0U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.728264063831;
    tmp_msg_0.lon = 0.932096996405;
    tmp_msg_0.height = 0.310845862395;
    tmp_msg_0.x = 0.802153865728;
    tmp_msg_0.y = 0.488976785472;
    tmp_msg_0.z = 0.326509328605;
    tmp_msg_0.phi = 0.317833451094;
    tmp_msg_0.theta = 0.525279910896;
    tmp_msg_0.psi = 0.781456429173;
    tmp_msg_0.u = 0.746078530362;
    tmp_msg_0.v = 0.0610071397011;
    tmp_msg_0.w = 0.910602453498;
    tmp_msg_0.vx = 0.784686993759;
    tmp_msg_0.vy = 0.0560383831753;
    tmp_msg_0.vz = 0.390733360658;
    tmp_msg_0.p = 0.511493960156;
    tmp_msg_0.q = 0.444552927394;
    tmp_msg_0.r = 0.698614342539;
    tmp_msg_0.depth = 0.858412110214;
    tmp_msg_0.alt = 0.811671854875;
    msg.state.set(tmp_msg_0);
    msg.type = 238U;

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
    msg.setTimeStamp(0.318720486275);
    msg.setSource(42377U);
    msg.setSourceEntity(131U);
    msg.setDestination(25589U);
    msg.setDestinationEntity(53U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.293879429968;
    tmp_msg_0.lon = 0.276168876939;
    tmp_msg_0.height = 0.834304522635;
    tmp_msg_0.x = 0.440365534514;
    tmp_msg_0.y = 0.19326642477;
    tmp_msg_0.z = 0.673836991001;
    tmp_msg_0.phi = 0.664042817013;
    tmp_msg_0.theta = 0.365645778327;
    tmp_msg_0.psi = 0.228806731238;
    tmp_msg_0.u = 0.411332377852;
    tmp_msg_0.v = 0.12267935533;
    tmp_msg_0.w = 0.692771227459;
    tmp_msg_0.vx = 0.408614973606;
    tmp_msg_0.vy = 0.906267800083;
    tmp_msg_0.vz = 0.468272486812;
    tmp_msg_0.p = 0.45716900893;
    tmp_msg_0.q = 0.768704499364;
    tmp_msg_0.r = 0.483059699107;
    tmp_msg_0.depth = 0.270620500095;
    tmp_msg_0.alt = 0.017734277951;
    msg.state.set(tmp_msg_0);
    msg.type = 176U;

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
    msg.setTimeStamp(0.285181209962);
    msg.setSource(9902U);
    msg.setSourceEntity(19U);
    msg.setDestination(18519U);
    msg.setDestinationEntity(190U);
    msg.value = 0.565660563279;

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
    msg.setTimeStamp(0.641412567164);
    msg.setSource(51152U);
    msg.setSourceEntity(37U);
    msg.setDestination(38284U);
    msg.setDestinationEntity(155U);
    msg.value = 0.497139462318;

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
    msg.setTimeStamp(0.0398044139899);
    msg.setSource(41902U);
    msg.setSourceEntity(117U);
    msg.setDestination(33865U);
    msg.setDestinationEntity(9U);
    msg.value = 0.13057677343;

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
    msg.setTimeStamp(0.902568709873);
    msg.setSource(42503U);
    msg.setSourceEntity(113U);
    msg.setDestination(51505U);
    msg.setDestinationEntity(28U);
    msg.value = 0.206197658737;

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
    msg.setTimeStamp(0.978063976607);
    msg.setSource(62557U);
    msg.setSourceEntity(214U);
    msg.setDestination(23433U);
    msg.setDestinationEntity(118U);
    msg.value = 0.92928235931;

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
    msg.setTimeStamp(0.367605991184);
    msg.setSource(27663U);
    msg.setSourceEntity(69U);
    msg.setDestination(55956U);
    msg.setDestinationEntity(189U);
    msg.value = 0.626043398955;

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
    msg.setTimeStamp(0.984984108712);
    msg.setSource(8159U);
    msg.setSourceEntity(41U);
    msg.setDestination(41434U);
    msg.setDestinationEntity(123U);
    msg.value = 0.00639367391808;

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
    msg.setTimeStamp(0.597028244086);
    msg.setSource(7383U);
    msg.setSourceEntity(83U);
    msg.setDestination(28738U);
    msg.setDestinationEntity(44U);
    msg.value = 0.805911087037;

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
    msg.setTimeStamp(0.539259728567);
    msg.setSource(28791U);
    msg.setSourceEntity(190U);
    msg.setDestination(18650U);
    msg.setDestinationEntity(45U);
    msg.value = 0.916009373931;

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
    msg.setTimeStamp(0.321769238379);
    msg.setSource(2413U);
    msg.setSourceEntity(111U);
    msg.setDestination(51964U);
    msg.setDestinationEntity(248U);
    msg.value = 0.143461098569;

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
    msg.setTimeStamp(0.797752012008);
    msg.setSource(63211U);
    msg.setSourceEntity(111U);
    msg.setDestination(17980U);
    msg.setDestinationEntity(28U);
    msg.value = 0.668872338933;

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
    msg.setTimeStamp(0.890962061516);
    msg.setSource(59932U);
    msg.setSourceEntity(158U);
    msg.setDestination(59332U);
    msg.setDestinationEntity(39U);
    msg.value = 0.125991957299;

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
    msg.setTimeStamp(0.854343506752);
    msg.setSource(52966U);
    msg.setSourceEntity(140U);
    msg.setDestination(10637U);
    msg.setDestinationEntity(1U);
    msg.value = 0.99908723063;

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
    msg.setTimeStamp(0.899026477652);
    msg.setSource(24380U);
    msg.setSourceEntity(44U);
    msg.setDestination(24450U);
    msg.setDestinationEntity(20U);
    msg.value = 0.278277088765;

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
    msg.setTimeStamp(0.490410315172);
    msg.setSource(28043U);
    msg.setSourceEntity(143U);
    msg.setDestination(44773U);
    msg.setDestinationEntity(27U);
    msg.value = 0.570667997491;

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
    msg.setTimeStamp(0.680963613593);
    msg.setSource(49651U);
    msg.setSourceEntity(168U);
    msg.setDestination(14670U);
    msg.setDestinationEntity(24U);
    msg.id = 56U;
    msg.zoom = 33U;
    msg.action = 141U;

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
    msg.setTimeStamp(0.659491471499);
    msg.setSource(59797U);
    msg.setSourceEntity(2U);
    msg.setDestination(20578U);
    msg.setDestinationEntity(222U);
    msg.id = 166U;
    msg.zoom = 171U;
    msg.action = 155U;

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
    msg.setTimeStamp(0.543973919804);
    msg.setSource(23624U);
    msg.setSourceEntity(52U);
    msg.setDestination(25664U);
    msg.setDestinationEntity(90U);
    msg.id = 203U;
    msg.zoom = 11U;
    msg.action = 97U;

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
    msg.setTimeStamp(0.623978349251);
    msg.setSource(10363U);
    msg.setSourceEntity(66U);
    msg.setDestination(48375U);
    msg.setDestinationEntity(248U);
    msg.id = 123U;
    msg.value = 0.105623072785;

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
    msg.setTimeStamp(0.45896577769);
    msg.setSource(17827U);
    msg.setSourceEntity(44U);
    msg.setDestination(49929U);
    msg.setDestinationEntity(142U);
    msg.id = 138U;
    msg.value = 0.966730317778;

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
    msg.setTimeStamp(0.0271369723579);
    msg.setSource(60559U);
    msg.setSourceEntity(160U);
    msg.setDestination(4679U);
    msg.setDestinationEntity(62U);
    msg.id = 43U;
    msg.value = 0.0482741451931;

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
    msg.setTimeStamp(0.133945587016);
    msg.setSource(15874U);
    msg.setSourceEntity(112U);
    msg.setDestination(19987U);
    msg.setDestinationEntity(216U);
    msg.id = 68U;
    msg.value = 0.533885409126;

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
    msg.setTimeStamp(0.498700050353);
    msg.setSource(18460U);
    msg.setSourceEntity(149U);
    msg.setDestination(37913U);
    msg.setDestinationEntity(122U);
    msg.id = 42U;
    msg.value = 0.463754407528;

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
    msg.setTimeStamp(0.448816594439);
    msg.setSource(27293U);
    msg.setSourceEntity(108U);
    msg.setDestination(38379U);
    msg.setDestinationEntity(208U);
    msg.id = 1U;
    msg.value = 0.581173976877;

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
    msg.setTimeStamp(0.869635433107);
    msg.setSource(31240U);
    msg.setSourceEntity(56U);
    msg.setDestination(40966U);
    msg.setDestinationEntity(231U);
    msg.id = 80U;
    msg.angle = 0.35354515595;

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
    msg.setTimeStamp(0.197672006167);
    msg.setSource(49476U);
    msg.setSourceEntity(107U);
    msg.setDestination(29294U);
    msg.setDestinationEntity(75U);
    msg.id = 249U;
    msg.angle = 0.728707046338;

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
    msg.setTimeStamp(0.614832142319);
    msg.setSource(15217U);
    msg.setSourceEntity(217U);
    msg.setDestination(64109U);
    msg.setDestinationEntity(103U);
    msg.id = 25U;
    msg.angle = 0.475665693715;

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
    msg.setTimeStamp(0.358707441465);
    msg.setSource(4390U);
    msg.setSourceEntity(109U);
    msg.setDestination(11898U);
    msg.setDestinationEntity(19U);
    msg.op = 25U;
    msg.actions.assign("PULMXSMFOI");

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
    msg.setTimeStamp(0.156822818256);
    msg.setSource(56601U);
    msg.setSourceEntity(253U);
    msg.setDestination(65192U);
    msg.setDestinationEntity(117U);
    msg.op = 163U;
    msg.actions.assign("JTIDPVFWQRVKRPHEWDOBKCSZLHTONANULMMUGBOZRBTXPFSJREWAUEEOQOMHAXDTZSRUZLWKMGYYPHKIORYACGUNUXLITBQIJAGUHCDTDTXWLQCLKSYJESCOGMZVOCCJMYEBOQDKHADBYGZMIKZFNBDXJQTFQEHGLYPSCJRZABYPFIZYNXZULSVJXVJNSXHLVTVMUCURQVFKHDQRIPWPESXFSWFPNTWNKKPDIIGNGILWVGCMWEBFVNFAXQ");

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
    msg.setTimeStamp(0.871324208677);
    msg.setSource(41551U);
    msg.setSourceEntity(237U);
    msg.setDestination(18988U);
    msg.setDestinationEntity(91U);
    msg.op = 235U;
    msg.actions.assign("PWTNVJSQINUKBHPQCENLMBDPYPQWOJTQGZGALGFAWAZMMFDKHKDOKXZHILWUZYOUYKCRLFPISDZLUISYGBYOMHXWAHUXQOHCDDAFOXDNERQBQRAPORTXKEBCPTHM");

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
    msg.setTimeStamp(0.274808414763);
    msg.setSource(6511U);
    msg.setSourceEntity(243U);
    msg.setDestination(25087U);
    msg.setDestinationEntity(8U);
    msg.actions.assign("ENRAODQTIPKWCMGGESVUMDVPLCAXLJKGHYTXCPYRTXXMOKVZM");

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
    msg.setTimeStamp(0.219880917029);
    msg.setSource(38768U);
    msg.setSourceEntity(210U);
    msg.setDestination(7453U);
    msg.setDestinationEntity(212U);
    msg.actions.assign("OUJSMBAYZURLYBTCKRNFSGFIQXCMVSJZORLRMLKV");

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
    msg.setTimeStamp(0.834185264696);
    msg.setSource(6233U);
    msg.setSourceEntity(111U);
    msg.setDestination(10115U);
    msg.setDestinationEntity(239U);
    msg.actions.assign("USMIDCLGLTIBVLIFFUHSOOBUQBSEROKZMXXAXAVRPLUATKEJEQZZBSNZEOSRUZQADHIMMLWKFSKWVDZEMKTWENFFZPYCKQLCWONBKXTGMJPNGALBSCJWTNGEVGYHFHLSCIDYTRSJALFPJCYYXOCQJAXXNW");

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
    msg.setTimeStamp(0.523770535296);
    msg.setSource(55743U);
    msg.setSourceEntity(168U);
    msg.setDestination(47761U);
    msg.setDestinationEntity(60U);
    msg.button = 142U;
    msg.value = 30U;

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
    msg.setTimeStamp(0.857205980089);
    msg.setSource(63037U);
    msg.setSourceEntity(131U);
    msg.setDestination(39055U);
    msg.setDestinationEntity(190U);
    msg.button = 73U;
    msg.value = 11U;

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
    msg.setTimeStamp(0.722969771816);
    msg.setSource(38424U);
    msg.setSourceEntity(153U);
    msg.setDestination(32727U);
    msg.setDestinationEntity(187U);
    msg.button = 100U;
    msg.value = 43U;

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
    msg.setTimeStamp(0.8407977312);
    msg.setSource(60698U);
    msg.setSourceEntity(4U);
    msg.setDestination(53490U);
    msg.setDestinationEntity(243U);
    msg.op = 92U;
    msg.text.assign("LEGEYYCNJMRUIDQWNPRSCWGCIKTJZQFLRFWICHJJRESTTAWZMBIVGIZMKBUSNEDFOVTFAHGKVBXGXPVSCDVFTNTUMYHAWSHCRNZYVXHOYA");

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
    msg.setTimeStamp(0.325491380777);
    msg.setSource(11467U);
    msg.setSourceEntity(5U);
    msg.setDestination(61833U);
    msg.setDestinationEntity(50U);
    msg.op = 246U;
    msg.text.assign("TOOCOEIRQMIPGGCJVDPKANENHSBYJARTIORIZBJOKITDFUOZCKYFZHYLZXWRHGGEMRFCJDYPHLLNCHGDLIFAZARUZEZYADQGWUVUPTNZSLHYBWIDVUMYFLTYGTJWEAHCAPFIQEUFBENXNJLXAEXXMFSMWNIQMKSTOVPR");

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
    msg.setTimeStamp(0.664543103839);
    msg.setSource(13998U);
    msg.setSourceEntity(213U);
    msg.setDestination(23688U);
    msg.setDestinationEntity(212U);
    msg.op = 132U;
    msg.text.assign("TRMENGXCQHEJDMJHPCSMEGOHCKROSSBPGAARDNUDHQIVNWMDLCFZJKDPYVGZBQJHNVWUQVHLIDUOACHBKOMBLILTISZFUKGJCDCRWLGTQVYBSSGILXBKYPJUPMEVPVTXKCWRFZJAZJIGFNZUQUROLVMICINAOFJSEWYFLHNFDEPSRZRWZYXLOXPUEBKTTZMXAXCTSYVGENBOYPEMWKKAWBWZYMVDXSQRTHHANOUYT");

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
    msg.setTimeStamp(0.575522241255);
    msg.setSource(26436U);
    msg.setSourceEntity(87U);
    msg.setDestination(45710U);
    msg.setDestinationEntity(95U);
    msg.op = 154U;
    msg.time_remain = 0.742091849252;
    msg.sched_time = 0.69570599947;

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
    msg.setTimeStamp(0.88274639775);
    msg.setSource(64356U);
    msg.setSourceEntity(150U);
    msg.setDestination(46286U);
    msg.setDestinationEntity(8U);
    msg.op = 20U;
    msg.time_remain = 0.986185878033;
    msg.sched_time = 0.410513248231;

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
    msg.setTimeStamp(0.998288000871);
    msg.setSource(49797U);
    msg.setSourceEntity(159U);
    msg.setDestination(45427U);
    msg.setDestinationEntity(74U);
    msg.op = 226U;
    msg.time_remain = 0.515440231352;
    msg.sched_time = 0.334514755062;

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
    msg.setTimeStamp(0.680375383593);
    msg.setSource(16052U);
    msg.setSourceEntity(96U);
    msg.setDestination(37562U);
    msg.setDestinationEntity(150U);
    msg.name.assign("PFOIOFRCIVWPHBQUJKEXCZIJHAVTCYRJNQQBOJWCNVJGFIODBYLJSZKGLNXKDYCZDKURPYGIDKGNXLIAGXTBTLSEKDVLGPUBBOLQLZPGUWDHBHAEDDAMEQTNCHGLGUMOODMPVMNNJCYTPSARMFAIUBXWEMSWGUUWXKXFESILMVRERVZSFUXIZESRYDTWZFFYTFWPWICYTKXNPSZHBHHJAQQQPERQSMACHNQVVJKMOOFBZYKYSLZXOEVR");
    msg.op = 172U;
    msg.sched_time = 0.544507362743;

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
    msg.setTimeStamp(0.0021454819);
    msg.setSource(15787U);
    msg.setSourceEntity(80U);
    msg.setDestination(14440U);
    msg.setDestinationEntity(162U);
    msg.name.assign("UYGOXBRRFGGLKWNKIWKCUATZGNAHHWKJBMAZIELFYRBFKEESEFXVTYIFZVHGEFNVVRPAAVTJIZVCBCDXMMJRFTRJSUAPCGICDSTJLQHGITQCOWYQOABGRRCGXEFMMHDOYPOSCLJTHRDJQIYXICIHPXEVQUQBNBKMEEBY");
    msg.op = 227U;
    msg.sched_time = 0.129635188159;

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
    msg.setTimeStamp(0.465640386842);
    msg.setSource(47430U);
    msg.setSourceEntity(82U);
    msg.setDestination(26492U);
    msg.setDestinationEntity(53U);
    msg.name.assign("XXTETHJUORTVCRJEXRWJSDHFLRWUM");
    msg.op = 9U;
    msg.sched_time = 0.249428807339;

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
    msg.setTimeStamp(0.952429790109);
    msg.setSource(6583U);
    msg.setSourceEntity(49U);
    msg.setDestination(31386U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.718398592232);
    msg.setSource(52700U);
    msg.setSourceEntity(254U);
    msg.setDestination(5756U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.151798940705);
    msg.setSource(58678U);
    msg.setSourceEntity(211U);
    msg.setDestination(59846U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.459199750178);
    msg.setSource(24687U);
    msg.setSourceEntity(5U);
    msg.setDestination(15836U);
    msg.setDestinationEntity(73U);
    msg.name.assign("WHFJNJUSUPVNQZDMQDACNVCHFATZSHMZGFR");
    msg.state = 216U;

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
    msg.setTimeStamp(0.0830712884519);
    msg.setSource(50565U);
    msg.setSourceEntity(235U);
    msg.setDestination(58559U);
    msg.setDestinationEntity(6U);
    msg.name.assign("ANFFCXKTRZAVXYHYUQXXXGNVJXIDEWTUHFIGHILMSUELFPSOEYORPCDLRVYHAJZSJLQULPYKKSWVCAZBPIWWDYWUTULVDGAQZHSZKSVRNOYWQCOHISRCMDDHVNGCRXQKMUBIURMLCCGXFTZGAUBOEGHTRJMMCQKWTTXFBJWIHJYETQPUGQMNJLOABGEVEIFZKTFODMLPRWDEZASEFMGNOY");
    msg.state = 164U;

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
    msg.setTimeStamp(0.280869787317);
    msg.setSource(38217U);
    msg.setSourceEntity(180U);
    msg.setDestination(50948U);
    msg.setDestinationEntity(51U);
    msg.name.assign("COCLNUNLQVTDZWHOUBJEIEPQFXHMZBVVJDOYLJSNJKIVAHUGQTHOWKXGWPTQKKYZDDOGMSPRZPFBDZRZBHUUKZRDTKMJWRRWJYLLUXDVPFFTHJKPADSAFQWPTICSMUGHXQOTEYBSNGUEAWPSCEKJYZYPLQOGMBMDHCAEPTCQXGINVZLRVJIKZFLSYIGYFICIMRTWSFBLACTUOYFEVREVSMMNRGXXOCOEICXV");
    msg.state = 35U;

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
    msg.setTimeStamp(0.324658584499);
    msg.setSource(53004U);
    msg.setSourceEntity(191U);
    msg.setDestination(4670U);
    msg.setDestinationEntity(134U);
    msg.name.assign("KPLZPNNBSDYKXTRBZRCITPTQTAQJPEXDGTMZHKQNJLYEGFCZWWYIYHQNSCALQQBWWRPCARJSPMMWRAHPOJRHIEUEXBKMQZBAPNMXNSIYFAAIVJYHBBNHDYMWUZYGVRLWQYECDDTNKTFIUGUSBOKHVGMFGJYREOCIFFLULWOJNVSNGGGFFVFGWAXHVSUEDMHOSCSKADJKLTMPZWRVCQFKJUDUOVHOXX");
    msg.value = 226U;

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
    msg.setTimeStamp(0.795914187179);
    msg.setSource(1685U);
    msg.setSourceEntity(209U);
    msg.setDestination(1600U);
    msg.setDestinationEntity(210U);
    msg.name.assign("LJIWYDTYTXFEICPIAVWTIXAQTSUZFYNOCHLPTHRDZBXMRKJWUGGEICEJSSHBEIHDLBXJYPUSXJIJVZNRABOPSFEMUQ");
    msg.value = 16U;

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
    msg.setTimeStamp(0.383909552825);
    msg.setSource(39784U);
    msg.setSourceEntity(187U);
    msg.setDestination(37230U);
    msg.setDestinationEntity(2U);
    msg.name.assign("ICWEBHFLAQYDJSBBMLYBPBDDLNWGEGC");
    msg.value = 16U;

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
    msg.setTimeStamp(0.720278598068);
    msg.setSource(63351U);
    msg.setSourceEntity(136U);
    msg.setDestination(48382U);
    msg.setDestinationEntity(146U);
    msg.name.assign("YDONYROLFVTPOCKLDOPKJCKNQLMAQAUAGFNMYSEZSVJXRPDNDXEQVXRDAABPUCBXEROOMJUOEPSNAUZ");

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
    msg.setTimeStamp(0.0432621489458);
    msg.setSource(44878U);
    msg.setSourceEntity(11U);
    msg.setDestination(5600U);
    msg.setDestinationEntity(15U);
    msg.name.assign("NGKNNVFCOQWUTIULOCNIKNXNHYTVJKRCIPDTGPGRBYQBFPSZLEDEPTCNCQZAGNIPU");

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
    msg.setTimeStamp(0.0687498177029);
    msg.setSource(2133U);
    msg.setSourceEntity(115U);
    msg.setDestination(56145U);
    msg.setDestinationEntity(129U);
    msg.name.assign("KZHTBFXKUKKDVHKEPRECJXSHABOYLADBKAMUBDJRVGZAUEUQGUNYLILWVMBIZTFVXETFZFTWYEPTSUOWEKATCFIZQDGLPFPXRGSOJXMBXWVAPJMLFSJRGGENWQMYOTIKXDNRCVUMEUHNBHMQSLYASAVPRWDOPPWHOBQDJJIRYSNTJIQLBCOWSPZGZYENSINHCJQOVNEDQBXIGXYAKCKLO");

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
    msg.setTimeStamp(0.772157731976);
    msg.setSource(60083U);
    msg.setSourceEntity(142U);
    msg.setDestination(16409U);
    msg.setDestinationEntity(145U);
    msg.name.assign("GVAOYIYDANRMXKIICOXHHNORPESVHWDTEPBRBTQLNOVRGZYKUQBPWYAKRNMGUTDNEMXHYUCDMGLX");
    msg.value = 130U;

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
    msg.setTimeStamp(0.682706845187);
    msg.setSource(11135U);
    msg.setSourceEntity(29U);
    msg.setDestination(13959U);
    msg.setDestinationEntity(52U);
    msg.name.assign("LINOCPAOKHYYQYFUXKPHDFAZGQNAUNUCXUANLNADRBBTZSJLFINXEAVWJMHYIQVGTLMERGOISYPIRZPLOICHFSVAQKWYDJSLZTHCWKJPMQTLCEIRLDMWGKBLXFQRPZJFAWEEESSUOBBNDINTKXMSEMYKJVFMEJUUUDCOPCOPQICNGZHVWRNXPXXJGGTOSDCBEOV");
    msg.value = 69U;

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
    msg.setTimeStamp(0.221997790467);
    msg.setSource(10519U);
    msg.setSourceEntity(193U);
    msg.setDestination(28362U);
    msg.setDestinationEntity(194U);
    msg.name.assign("RGQOQADJMDYVYOFVTKDNQOPMMNGTZYOMAELTNCBPJLNPWAFCMLHGYAJDOSPZHHIBGRCJJIVXZJWOZMOCURTMULEENSJIMIKDKSFAXIWOUWMI");
    msg.value = 113U;

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
    msg.setTimeStamp(0.525275559365);
    msg.setSource(34049U);
    msg.setSourceEntity(141U);
    msg.setDestination(59668U);
    msg.setDestinationEntity(203U);
    msg.id = 212U;
    msg.period = 3377944148U;
    msg.duty_cycle = 2301437U;

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
    msg.setTimeStamp(0.374447565793);
    msg.setSource(65266U);
    msg.setSourceEntity(193U);
    msg.setDestination(116U);
    msg.setDestinationEntity(95U);
    msg.id = 180U;
    msg.period = 1747700129U;
    msg.duty_cycle = 380354178U;

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
    msg.setTimeStamp(0.831536595679);
    msg.setSource(12754U);
    msg.setSourceEntity(169U);
    msg.setDestination(12378U);
    msg.setDestinationEntity(152U);
    msg.id = 75U;
    msg.period = 3493696132U;
    msg.duty_cycle = 1056524515U;

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
    msg.setTimeStamp(0.283716213964);
    msg.setSource(24677U);
    msg.setSourceEntity(239U);
    msg.setDestination(36932U);
    msg.setDestinationEntity(157U);
    msg.id = 3U;
    msg.period = 472965061U;
    msg.duty_cycle = 339830823U;

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
    msg.setTimeStamp(0.682478713127);
    msg.setSource(25495U);
    msg.setSourceEntity(196U);
    msg.setDestination(51883U);
    msg.setDestinationEntity(178U);
    msg.id = 246U;
    msg.period = 1782237386U;
    msg.duty_cycle = 3386858996U;

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
    msg.setTimeStamp(0.0344130513609);
    msg.setSource(46205U);
    msg.setSourceEntity(238U);
    msg.setDestination(39885U);
    msg.setDestinationEntity(68U);
    msg.id = 136U;
    msg.period = 1440887156U;
    msg.duty_cycle = 2113804900U;

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
    msg.setTimeStamp(0.206471361151);
    msg.setSource(30879U);
    msg.setSourceEntity(161U);
    msg.setDestination(22708U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.822640886485;
    msg.lon = 0.441008611501;
    msg.height = 0.596913958823;
    msg.x = 0.745083593304;
    msg.y = 0.754164052302;
    msg.z = 0.846249260332;
    msg.phi = 0.543633454123;
    msg.theta = 0.949468658116;
    msg.psi = 0.127384587392;
    msg.u = 0.703302624893;
    msg.v = 0.60379103016;
    msg.w = 0.849391224758;
    msg.vx = 0.0190829739783;
    msg.vy = 0.656807572576;
    msg.vz = 0.869698514729;
    msg.p = 0.273650969747;
    msg.q = 0.439891913938;
    msg.r = 0.675309702925;
    msg.depth = 0.180296612677;
    msg.alt = 0.0670134988589;

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
    msg.setTimeStamp(0.253495262336);
    msg.setSource(672U);
    msg.setSourceEntity(82U);
    msg.setDestination(20823U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.287149006172;
    msg.lon = 0.156097339584;
    msg.height = 0.999809865113;
    msg.x = 0.0831948629418;
    msg.y = 0.49342232383;
    msg.z = 0.473960119303;
    msg.phi = 0.725321515143;
    msg.theta = 0.120885305258;
    msg.psi = 0.842568044971;
    msg.u = 0.641248897827;
    msg.v = 0.977487654701;
    msg.w = 0.310513283538;
    msg.vx = 0.324022323369;
    msg.vy = 0.462502897524;
    msg.vz = 0.445935982033;
    msg.p = 0.890961587096;
    msg.q = 0.958478363166;
    msg.r = 0.612007206365;
    msg.depth = 0.812736739113;
    msg.alt = 0.182509288423;

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
    msg.setTimeStamp(0.512021706984);
    msg.setSource(2159U);
    msg.setSourceEntity(46U);
    msg.setDestination(9238U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.204905672156;
    msg.lon = 0.137015376051;
    msg.height = 0.608430585979;
    msg.x = 0.786557409735;
    msg.y = 0.401715743867;
    msg.z = 0.503406869359;
    msg.phi = 0.27301884056;
    msg.theta = 0.0502223423475;
    msg.psi = 0.805169536581;
    msg.u = 0.740315522226;
    msg.v = 0.7751727075;
    msg.w = 0.340099383844;
    msg.vx = 0.254447960307;
    msg.vy = 0.716211163726;
    msg.vz = 0.698715759927;
    msg.p = 0.779624494833;
    msg.q = 0.939465390888;
    msg.r = 0.414859675286;
    msg.depth = 0.11178043204;
    msg.alt = 0.982177325901;

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
    msg.setTimeStamp(0.38725855298);
    msg.setSource(30113U);
    msg.setSourceEntity(6U);
    msg.setDestination(47357U);
    msg.setDestinationEntity(101U);
    msg.x = 0.436372754102;
    msg.y = 0.101580179856;
    msg.z = 0.0165527135405;

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
    msg.setTimeStamp(0.781354245511);
    msg.setSource(11142U);
    msg.setSourceEntity(115U);
    msg.setDestination(10178U);
    msg.setDestinationEntity(150U);
    msg.x = 0.165857495908;
    msg.y = 0.928556507969;
    msg.z = 0.0869651698951;

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
    msg.setTimeStamp(0.341513990168);
    msg.setSource(55834U);
    msg.setSourceEntity(239U);
    msg.setDestination(50609U);
    msg.setDestinationEntity(114U);
    msg.x = 0.786594013461;
    msg.y = 0.615567795272;
    msg.z = 0.078079379209;

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
    msg.setTimeStamp(0.247118022611);
    msg.setSource(58752U);
    msg.setSourceEntity(242U);
    msg.setDestination(7034U);
    msg.setDestinationEntity(34U);
    msg.value = 0.852622948773;

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
    msg.setTimeStamp(0.859448876586);
    msg.setSource(51869U);
    msg.setSourceEntity(46U);
    msg.setDestination(49408U);
    msg.setDestinationEntity(11U);
    msg.value = 0.95556479139;

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
    msg.setTimeStamp(0.318151417484);
    msg.setSource(23111U);
    msg.setSourceEntity(162U);
    msg.setDestination(62617U);
    msg.setDestinationEntity(137U);
    msg.value = 0.944327775687;

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
    msg.setTimeStamp(0.493217704778);
    msg.setSource(23700U);
    msg.setSourceEntity(57U);
    msg.setDestination(24995U);
    msg.setDestinationEntity(42U);
    msg.value = 0.4845463195;

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
    msg.setTimeStamp(0.298769639015);
    msg.setSource(52230U);
    msg.setSourceEntity(56U);
    msg.setDestination(13666U);
    msg.setDestinationEntity(152U);
    msg.value = 0.571792173826;

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
    msg.setTimeStamp(0.157877811772);
    msg.setSource(22539U);
    msg.setSourceEntity(77U);
    msg.setDestination(28304U);
    msg.setDestinationEntity(92U);
    msg.value = 0.158330788432;

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
    msg.setTimeStamp(0.617798251476);
    msg.setSource(43331U);
    msg.setSourceEntity(12U);
    msg.setDestination(30764U);
    msg.setDestinationEntity(233U);
    msg.x = 0.0269823587822;
    msg.y = 0.361101818768;
    msg.z = 0.182992834782;
    msg.phi = 0.917273662637;
    msg.theta = 0.698312687686;
    msg.psi = 0.336840355541;
    msg.p = 0.306080336516;
    msg.q = 0.671033230517;
    msg.r = 0.12867320518;
    msg.u = 0.198176134123;
    msg.v = 0.678404362453;
    msg.w = 0.278825059901;
    msg.bias_psi = 0.501871073093;
    msg.bias_r = 0.850961557525;

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
    msg.setTimeStamp(0.571494428426);
    msg.setSource(45792U);
    msg.setSourceEntity(15U);
    msg.setDestination(16012U);
    msg.setDestinationEntity(160U);
    msg.x = 0.424722053912;
    msg.y = 0.105141050497;
    msg.z = 0.799730534723;
    msg.phi = 0.261257395765;
    msg.theta = 0.147605334725;
    msg.psi = 0.579849046142;
    msg.p = 0.321748034446;
    msg.q = 0.481219348788;
    msg.r = 0.124014306606;
    msg.u = 0.880930511439;
    msg.v = 0.332879773659;
    msg.w = 0.555979470235;
    msg.bias_psi = 0.325057891491;
    msg.bias_r = 0.684414253318;

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
    msg.setTimeStamp(0.493228622627);
    msg.setSource(37557U);
    msg.setSourceEntity(71U);
    msg.setDestination(56846U);
    msg.setDestinationEntity(93U);
    msg.x = 0.859414129098;
    msg.y = 0.0931093603363;
    msg.z = 0.348054987407;
    msg.phi = 0.241645445569;
    msg.theta = 0.184096444976;
    msg.psi = 0.530087220765;
    msg.p = 0.378097063275;
    msg.q = 0.95704669727;
    msg.r = 0.950148325682;
    msg.u = 0.514846936463;
    msg.v = 0.644261847966;
    msg.w = 0.0893019547101;
    msg.bias_psi = 0.907959283004;
    msg.bias_r = 0.935812084374;

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
    msg.setTimeStamp(0.903415964188);
    msg.setSource(52051U);
    msg.setSourceEntity(71U);
    msg.setDestination(3600U);
    msg.setDestinationEntity(69U);
    msg.bias_psi = 0.0766206233422;
    msg.bias_r = 0.11522626688;
    msg.cog = 0.775151114244;
    msg.cyaw = 0.378497831719;
    msg.gps_rej_level = 0.839455032073;
    msg.lbl_rej_level = 0.946296459415;
    msg.custom_x = 0.531345388495;
    msg.custom_y = 0.0429435186663;
    msg.custom_z = 0.124081899584;

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
    msg.setTimeStamp(0.206294343748);
    msg.setSource(19492U);
    msg.setSourceEntity(166U);
    msg.setDestination(49852U);
    msg.setDestinationEntity(1U);
    msg.bias_psi = 0.456822335049;
    msg.bias_r = 0.329154323947;
    msg.cog = 0.17712505713;
    msg.cyaw = 0.842765798425;
    msg.gps_rej_level = 0.58389487105;
    msg.lbl_rej_level = 0.0188816901395;
    msg.custom_x = 0.447323939539;
    msg.custom_y = 0.55977520039;
    msg.custom_z = 0.489651622124;

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
    msg.setTimeStamp(0.437595290329);
    msg.setSource(36588U);
    msg.setSourceEntity(181U);
    msg.setDestination(60078U);
    msg.setDestinationEntity(210U);
    msg.bias_psi = 0.960120497893;
    msg.bias_r = 0.481202159071;
    msg.cog = 0.603746461301;
    msg.cyaw = 0.729368784044;
    msg.gps_rej_level = 0.694833543514;
    msg.lbl_rej_level = 0.077721234463;
    msg.custom_x = 0.89755911675;
    msg.custom_y = 0.58631946114;
    msg.custom_z = 0.488537860182;

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
    msg.setTimeStamp(0.361597135622);
    msg.setSource(3609U);
    msg.setSourceEntity(137U);
    msg.setDestination(4418U);
    msg.setDestinationEntity(156U);
    msg.utc_time = 0.368385359071;
    msg.reason = 31U;

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
    msg.setTimeStamp(0.322840877548);
    msg.setSource(63377U);
    msg.setSourceEntity(166U);
    msg.setDestination(5665U);
    msg.setDestinationEntity(100U);
    msg.utc_time = 0.951268362145;
    msg.reason = 58U;

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
    msg.setTimeStamp(0.14707642008);
    msg.setSource(12084U);
    msg.setSourceEntity(94U);
    msg.setDestination(50329U);
    msg.setDestinationEntity(171U);
    msg.utc_time = 0.171908418216;
    msg.reason = 215U;

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
    msg.setTimeStamp(0.250651747248);
    msg.setSource(12667U);
    msg.setSourceEntity(193U);
    msg.setDestination(17967U);
    msg.setDestinationEntity(232U);
    msg.id = 253U;
    msg.range = 0.166596033559;
    msg.acceptance = 187U;

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
    msg.setTimeStamp(0.23067055202);
    msg.setSource(35678U);
    msg.setSourceEntity(11U);
    msg.setDestination(49710U);
    msg.setDestinationEntity(249U);
    msg.id = 17U;
    msg.range = 0.187195966865;
    msg.acceptance = 73U;

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
    msg.setTimeStamp(0.636850776033);
    msg.setSource(30817U);
    msg.setSourceEntity(36U);
    msg.setDestination(10389U);
    msg.setDestinationEntity(157U);
    msg.id = 176U;
    msg.range = 0.664759766419;
    msg.acceptance = 62U;

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
    msg.setTimeStamp(0.58056361017);
    msg.setSource(42884U);
    msg.setSourceEntity(221U);
    msg.setDestination(25245U);
    msg.setDestinationEntity(3U);
    msg.type = 33U;
    msg.reason = 126U;
    msg.value = 0.339968240215;
    msg.timestep = 0.255787646188;

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
    msg.setTimeStamp(0.970691100746);
    msg.setSource(46014U);
    msg.setSourceEntity(236U);
    msg.setDestination(50353U);
    msg.setDestinationEntity(173U);
    msg.type = 75U;
    msg.reason = 78U;
    msg.value = 0.446520190606;
    msg.timestep = 0.490355490248;

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
    msg.setTimeStamp(0.280504730951);
    msg.setSource(62644U);
    msg.setSourceEntity(134U);
    msg.setDestination(3668U);
    msg.setDestinationEntity(38U);
    msg.type = 86U;
    msg.reason = 41U;
    msg.value = 0.583868726114;
    msg.timestep = 0.694522234902;

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
    msg.setTimeStamp(0.374099143542);
    msg.setSource(7066U);
    msg.setSourceEntity(111U);
    msg.setDestination(27027U);
    msg.setDestinationEntity(145U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BHUJDXJAVCQMTKZEPCHQBQWQSPFQYDFPHVTGROUAYNMYZPAQKIFODITLMRZMDIWXUPOFHQWSWMIDEOGBBWJOVYIRATXUJXCODGGPCVZSDKZPLOATFHDJJHBEYBWLLTTXLVYBEEIZXSSNN");
    tmp_msg_0.lat = 0.353639849944;
    tmp_msg_0.lon = 0.776219854238;
    tmp_msg_0.depth = 0.792126390829;
    tmp_msg_0.query_channel = 201U;
    tmp_msg_0.reply_channel = 193U;
    tmp_msg_0.transponder_delay = 85U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.956483611458;
    msg.y = 0.775352410807;
    msg.var_x = 0.48466133458;
    msg.var_y = 0.864272406788;
    msg.distance = 0.985135729088;

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
    msg.setTimeStamp(0.066709155653);
    msg.setSource(64637U);
    msg.setSourceEntity(186U);
    msg.setDestination(7427U);
    msg.setDestinationEntity(43U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HSJHXECGFGGXVFWNYRNYJIXJRKXGSEUBHMVHANUBNTTTKFOZPKBLTBONWZDYVCOTPBLVUPMQUAQOQIPKZDRQMLSFHNTBSOPAQLWOUWXFFPRZPAYVHCWQMFGWRAWMMAOYKAWBSQMPYLOEERETQYLKFIKIETGYCWSDCIFETBHSKDCJDDDMCARVJJ");
    tmp_msg_0.lat = 0.117075618583;
    tmp_msg_0.lon = 0.980471767932;
    tmp_msg_0.depth = 0.421545636887;
    tmp_msg_0.query_channel = 222U;
    tmp_msg_0.reply_channel = 46U;
    tmp_msg_0.transponder_delay = 175U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.96303744145;
    msg.y = 0.595759315898;
    msg.var_x = 0.702970654229;
    msg.var_y = 0.0891780235416;
    msg.distance = 0.96156852953;

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
    msg.setTimeStamp(0.686944264906);
    msg.setSource(24970U);
    msg.setSourceEntity(234U);
    msg.setDestination(62887U);
    msg.setDestinationEntity(123U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IQZMFBWIJUVSEODYWUXBUNZYWKNPERWUBHZTSPYBECUCRDIYGLJQJEVFUJSJJGSVHZAQGODOCJABLHQABDIMGAXOXROUCXWFLTSZDEPVMQNGVFNIRL");
    tmp_msg_0.lat = 0.459484783029;
    tmp_msg_0.lon = 0.542558589633;
    tmp_msg_0.depth = 0.634393795684;
    tmp_msg_0.query_channel = 59U;
    tmp_msg_0.reply_channel = 177U;
    tmp_msg_0.transponder_delay = 17U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.421671355232;
    msg.y = 0.26418073104;
    msg.var_x = 0.233985380134;
    msg.var_y = 0.968086549379;
    msg.distance = 0.149166809345;

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
    msg.setTimeStamp(0.724787057653);
    msg.setSource(41886U);
    msg.setSourceEntity(178U);
    msg.setDestination(8174U);
    msg.setDestinationEntity(247U);
    msg.state = 9U;

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
    msg.setTimeStamp(0.979932095117);
    msg.setSource(25061U);
    msg.setSourceEntity(140U);
    msg.setDestination(53579U);
    msg.setDestinationEntity(231U);
    msg.state = 197U;

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
    msg.setTimeStamp(0.331648242212);
    msg.setSource(35514U);
    msg.setSourceEntity(81U);
    msg.setDestination(56319U);
    msg.setDestinationEntity(173U);
    msg.state = 165U;

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
    msg.setTimeStamp(0.893629546574);
    msg.setSource(35631U);
    msg.setSourceEntity(58U);
    msg.setDestination(48133U);
    msg.setDestinationEntity(24U);
    msg.x = 0.718213779737;
    msg.y = 0.657224283656;
    msg.z = 0.845140293384;

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
    msg.setTimeStamp(0.497335092679);
    msg.setSource(44224U);
    msg.setSourceEntity(184U);
    msg.setDestination(8150U);
    msg.setDestinationEntity(1U);
    msg.x = 0.105041210606;
    msg.y = 0.915344565751;
    msg.z = 0.993171807975;

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
    msg.setTimeStamp(0.300360910928);
    msg.setSource(56818U);
    msg.setSourceEntity(191U);
    msg.setDestination(35187U);
    msg.setDestinationEntity(249U);
    msg.x = 0.974884944853;
    msg.y = 0.56131396527;
    msg.z = 0.133067602039;

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
    msg.setTimeStamp(0.320777704572);
    msg.setSource(19697U);
    msg.setSourceEntity(92U);
    msg.setDestination(39046U);
    msg.setDestinationEntity(248U);
    msg.va = 0.612618090974;
    msg.aoa = 0.737866316997;
    msg.ssa = 0.774509671608;

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
    msg.setTimeStamp(0.292297831119);
    msg.setSource(21958U);
    msg.setSourceEntity(240U);
    msg.setDestination(49141U);
    msg.setDestinationEntity(105U);
    msg.va = 0.671681664618;
    msg.aoa = 0.838402628546;
    msg.ssa = 0.0748803959279;

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
    msg.setTimeStamp(0.748609349463);
    msg.setSource(5069U);
    msg.setSourceEntity(192U);
    msg.setDestination(55422U);
    msg.setDestinationEntity(240U);
    msg.va = 0.937206506287;
    msg.aoa = 0.817167732753;
    msg.ssa = 0.20979307576;

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
    msg.setTimeStamp(0.128859524211);
    msg.setSource(21602U);
    msg.setSourceEntity(127U);
    msg.setDestination(5154U);
    msg.setDestinationEntity(16U);
    msg.mmsi = 185953987U;
    msg.lon = 0.497802318692;
    msg.lat = 0.859370569542;
    msg.x = 0.649874726204;
    msg.y = 0.954831597494;
    msg.psi = 0.435078608391;
    msg.u = 0.779036232268;
    msg.v = 0.821986945901;
    msg.a = 0.5875168942;
    msg.b = 0.888640438683;
    msg.c = 0.45032290161;
    msg.d = 0.311101822607;

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
    msg.setTimeStamp(0.615798199166);
    msg.setSource(18216U);
    msg.setSourceEntity(201U);
    msg.setDestination(15055U);
    msg.setDestinationEntity(176U);
    msg.mmsi = 812453176U;
    msg.lon = 0.289263369651;
    msg.lat = 0.376072611432;
    msg.x = 0.0241763043626;
    msg.y = 0.795922106513;
    msg.psi = 0.578358641531;
    msg.u = 0.785589032078;
    msg.v = 0.707364036956;
    msg.a = 0.768229340078;
    msg.b = 0.933663663607;
    msg.c = 0.792232575278;
    msg.d = 0.622526572063;

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
    msg.setTimeStamp(0.250674687912);
    msg.setSource(21188U);
    msg.setSourceEntity(152U);
    msg.setDestination(23696U);
    msg.setDestinationEntity(107U);
    msg.mmsi = 1866625228U;
    msg.lon = 0.0544426602235;
    msg.lat = 0.442937275354;
    msg.x = 0.161755591326;
    msg.y = 0.45099013441;
    msg.psi = 0.792225972096;
    msg.u = 0.582752079126;
    msg.v = 0.566062053969;
    msg.a = 0.127783951641;
    msg.b = 0.942511255963;
    msg.c = 0.199322630983;
    msg.d = 0.629419633118;

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
    msg.setTimeStamp(0.0782976109144);
    msg.setSource(40407U);
    msg.setSourceEntity(165U);
    msg.setDestination(57683U);
    msg.setDestinationEntity(229U);
    msg.value = 0.15775894292;
    msg.off = 0.0168224429704;

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
    msg.setTimeStamp(0.0539808379604);
    msg.setSource(19295U);
    msg.setSourceEntity(234U);
    msg.setDestination(22059U);
    msg.setDestinationEntity(249U);
    msg.value = 0.157796230106;
    msg.off = 0.182241549053;

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
    msg.setTimeStamp(0.272416445323);
    msg.setSource(19007U);
    msg.setSourceEntity(21U);
    msg.setDestination(64904U);
    msg.setDestinationEntity(197U);
    msg.value = 0.859089864661;
    msg.off = 0.0537618244035;

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
    msg.setTimeStamp(0.858015219889);
    msg.setSource(34460U);
    msg.setSourceEntity(144U);
    msg.setDestination(24374U);
    msg.setDestinationEntity(6U);
    msg.value = 0.594346602845;
    msg.z_units = 0U;

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
    msg.setTimeStamp(0.0377171606828);
    msg.setSource(44648U);
    msg.setSourceEntity(167U);
    msg.setDestination(62369U);
    msg.setDestinationEntity(34U);
    msg.value = 0.13831723847;
    msg.z_units = 228U;

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
    msg.setTimeStamp(0.93849237636);
    msg.setSource(43465U);
    msg.setSourceEntity(237U);
    msg.setDestination(56963U);
    msg.setDestinationEntity(89U);
    msg.value = 0.827326082811;
    msg.z_units = 47U;

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
    msg.setTimeStamp(0.912286664272);
    msg.setSource(39695U);
    msg.setSourceEntity(153U);
    msg.setDestination(19348U);
    msg.setDestinationEntity(48U);
    msg.value = 0.559152219553;
    msg.speed_units = 30U;

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
    msg.setTimeStamp(0.0450674086702);
    msg.setSource(5552U);
    msg.setSourceEntity(103U);
    msg.setDestination(33900U);
    msg.setDestinationEntity(170U);
    msg.value = 0.25300836309;
    msg.speed_units = 112U;

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
    msg.setTimeStamp(0.485539998459);
    msg.setSource(48879U);
    msg.setSourceEntity(20U);
    msg.setDestination(32767U);
    msg.setDestinationEntity(77U);
    msg.value = 0.165928566892;
    msg.speed_units = 185U;

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
    msg.setTimeStamp(0.671021468584);
    msg.setSource(15616U);
    msg.setSourceEntity(129U);
    msg.setDestination(13771U);
    msg.setDestinationEntity(70U);
    msg.value = 0.576750782589;

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
    msg.setTimeStamp(0.626555594891);
    msg.setSource(45122U);
    msg.setSourceEntity(37U);
    msg.setDestination(38435U);
    msg.setDestinationEntity(172U);
    msg.value = 0.108698594948;

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
    msg.setTimeStamp(0.0726516827918);
    msg.setSource(51248U);
    msg.setSourceEntity(31U);
    msg.setDestination(55420U);
    msg.setDestinationEntity(91U);
    msg.value = 0.810767743591;

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
    msg.setTimeStamp(0.694028683091);
    msg.setSource(58353U);
    msg.setSourceEntity(158U);
    msg.setDestination(62557U);
    msg.setDestinationEntity(159U);
    msg.value = 0.304300493759;

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
    msg.setTimeStamp(0.478902212192);
    msg.setSource(39950U);
    msg.setSourceEntity(54U);
    msg.setDestination(54886U);
    msg.setDestinationEntity(199U);
    msg.value = 0.584405819969;

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
    msg.setTimeStamp(0.643745472562);
    msg.setSource(4367U);
    msg.setSourceEntity(241U);
    msg.setDestination(40192U);
    msg.setDestinationEntity(217U);
    msg.value = 0.721870534315;

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
    msg.setTimeStamp(0.486080904172);
    msg.setSource(1392U);
    msg.setSourceEntity(240U);
    msg.setDestination(34554U);
    msg.setDestinationEntity(137U);
    msg.value = 0.741972785514;

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
    msg.setTimeStamp(0.369278066742);
    msg.setSource(58742U);
    msg.setSourceEntity(3U);
    msg.setDestination(28594U);
    msg.setDestinationEntity(101U);
    msg.value = 0.360573870477;

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
    msg.setTimeStamp(0.050507259041);
    msg.setSource(24078U);
    msg.setSourceEntity(150U);
    msg.setDestination(31442U);
    msg.setDestinationEntity(172U);
    msg.value = 0.645827798303;

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
    msg.setTimeStamp(0.361267529782);
    msg.setSource(56765U);
    msg.setSourceEntity(28U);
    msg.setDestination(24023U);
    msg.setDestinationEntity(136U);
    msg.path_ref = 339474251U;
    msg.start_lat = 0.734011975005;
    msg.start_lon = 0.443592113315;
    msg.start_z = 0.438146651855;
    msg.start_z_units = 128U;
    msg.end_lat = 0.754768449564;
    msg.end_lon = 0.416329102497;
    msg.end_z = 0.169451584383;
    msg.end_z_units = 51U;
    msg.speed = 0.582249589838;
    msg.speed_units = 193U;
    msg.lradius = 0.165783428673;
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
    msg.setTimeStamp(0.634568745878);
    msg.setSource(63285U);
    msg.setSourceEntity(10U);
    msg.setDestination(33308U);
    msg.setDestinationEntity(189U);
    msg.path_ref = 1217992917U;
    msg.start_lat = 0.870759870318;
    msg.start_lon = 0.537853376491;
    msg.start_z = 0.735658665161;
    msg.start_z_units = 44U;
    msg.end_lat = 0.779327114999;
    msg.end_lon = 0.872562405121;
    msg.end_z = 0.127435722237;
    msg.end_z_units = 246U;
    msg.speed = 0.996703610781;
    msg.speed_units = 221U;
    msg.lradius = 0.00926252843507;
    msg.flags = 246U;

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
    msg.setTimeStamp(0.868678278681);
    msg.setSource(41206U);
    msg.setSourceEntity(211U);
    msg.setDestination(34750U);
    msg.setDestinationEntity(218U);
    msg.path_ref = 71869402U;
    msg.start_lat = 0.72058176251;
    msg.start_lon = 0.184209628239;
    msg.start_z = 0.53606036268;
    msg.start_z_units = 227U;
    msg.end_lat = 0.183523152275;
    msg.end_lon = 0.0331258974287;
    msg.end_z = 0.367555198662;
    msg.end_z_units = 175U;
    msg.speed = 0.0738601349681;
    msg.speed_units = 158U;
    msg.lradius = 0.73349342994;
    msg.flags = 16U;

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
    msg.setTimeStamp(0.403638600455);
    msg.setSource(14817U);
    msg.setSourceEntity(159U);
    msg.setDestination(16787U);
    msg.setDestinationEntity(101U);
    msg.x = 0.675081197442;
    msg.y = 0.523172450108;
    msg.z = 0.617213829631;
    msg.k = 0.150987559067;
    msg.m = 0.123568526745;
    msg.n = 0.673717060593;
    msg.flags = 57U;

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
    msg.setTimeStamp(0.0803724332118);
    msg.setSource(54503U);
    msg.setSourceEntity(127U);
    msg.setDestination(45435U);
    msg.setDestinationEntity(62U);
    msg.x = 0.828761505463;
    msg.y = 0.151792953403;
    msg.z = 0.700590922166;
    msg.k = 0.961758351185;
    msg.m = 0.863771953489;
    msg.n = 0.451902859064;
    msg.flags = 184U;

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
    msg.setTimeStamp(0.0789590371149);
    msg.setSource(17487U);
    msg.setSourceEntity(149U);
    msg.setDestination(54237U);
    msg.setDestinationEntity(154U);
    msg.x = 0.718886073166;
    msg.y = 0.628866837548;
    msg.z = 0.707646651831;
    msg.k = 0.436594873782;
    msg.m = 0.738086276473;
    msg.n = 0.252193640082;
    msg.flags = 14U;

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
    msg.setTimeStamp(0.0890202570415);
    msg.setSource(10953U);
    msg.setSourceEntity(170U);
    msg.setDestination(41806U);
    msg.setDestinationEntity(39U);
    msg.value = 0.152673175051;

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
    msg.setTimeStamp(0.854185869219);
    msg.setSource(30402U);
    msg.setSourceEntity(213U);
    msg.setDestination(55703U);
    msg.setDestinationEntity(78U);
    msg.value = 0.950391198779;

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
    msg.setTimeStamp(0.462976003163);
    msg.setSource(54436U);
    msg.setSourceEntity(39U);
    msg.setDestination(38606U);
    msg.setDestinationEntity(74U);
    msg.value = 0.555410373918;

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
    msg.setTimeStamp(0.0719862314181);
    msg.setSource(16351U);
    msg.setSourceEntity(251U);
    msg.setDestination(21432U);
    msg.setDestinationEntity(87U);
    msg.u = 0.946072128119;
    msg.v = 0.994750320461;
    msg.w = 0.975166621904;
    msg.p = 0.244037010056;
    msg.q = 0.104568258963;
    msg.r = 0.334265139821;
    msg.flags = 173U;

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
    msg.setTimeStamp(0.498224118301);
    msg.setSource(35621U);
    msg.setSourceEntity(1U);
    msg.setDestination(47175U);
    msg.setDestinationEntity(195U);
    msg.u = 0.0703495968868;
    msg.v = 0.371010662396;
    msg.w = 0.13609736257;
    msg.p = 0.658372552189;
    msg.q = 0.10574070672;
    msg.r = 0.250170645476;
    msg.flags = 216U;

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
    msg.setTimeStamp(0.473324738246);
    msg.setSource(27985U);
    msg.setSourceEntity(115U);
    msg.setDestination(4073U);
    msg.setDestinationEntity(143U);
    msg.u = 0.115553539176;
    msg.v = 0.16299147769;
    msg.w = 0.342492414277;
    msg.p = 0.288049740142;
    msg.q = 0.037045473438;
    msg.r = 0.5369617679;
    msg.flags = 201U;

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
    msg.setTimeStamp(0.605677256961);
    msg.setSource(60215U);
    msg.setSourceEntity(6U);
    msg.setDestination(35829U);
    msg.setDestinationEntity(199U);
    msg.path_ref = 1765707145U;
    msg.start_lat = 0.54332959694;
    msg.start_lon = 0.95217644021;
    msg.start_z = 0.653208420972;
    msg.start_z_units = 165U;
    msg.end_lat = 0.88554986761;
    msg.end_lon = 0.729216836608;
    msg.end_z = 0.455415930836;
    msg.end_z_units = 72U;
    msg.lradius = 0.21526185185;
    msg.flags = 201U;
    msg.x = 0.384913097459;
    msg.y = 0.165799897818;
    msg.z = 0.814827724138;
    msg.vx = 0.726441283223;
    msg.vy = 0.0894047885357;
    msg.vz = 0.623915798393;
    msg.course_error = 0.513634887949;
    msg.eta = 50681U;

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
    msg.setTimeStamp(0.468076316992);
    msg.setSource(29777U);
    msg.setSourceEntity(55U);
    msg.setDestination(59692U);
    msg.setDestinationEntity(179U);
    msg.path_ref = 3633299053U;
    msg.start_lat = 0.449861364308;
    msg.start_lon = 0.782763294643;
    msg.start_z = 0.203360654075;
    msg.start_z_units = 96U;
    msg.end_lat = 0.376085098663;
    msg.end_lon = 0.680677675908;
    msg.end_z = 0.605868294235;
    msg.end_z_units = 163U;
    msg.lradius = 0.509299784317;
    msg.flags = 122U;
    msg.x = 0.99557395332;
    msg.y = 0.262969181222;
    msg.z = 0.126926294459;
    msg.vx = 0.34244284404;
    msg.vy = 0.325794007296;
    msg.vz = 0.286670245742;
    msg.course_error = 0.811187644046;
    msg.eta = 57498U;

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
    msg.setTimeStamp(0.0190108433593);
    msg.setSource(37039U);
    msg.setSourceEntity(212U);
    msg.setDestination(5262U);
    msg.setDestinationEntity(82U);
    msg.path_ref = 1659612075U;
    msg.start_lat = 0.837900045345;
    msg.start_lon = 0.203683184734;
    msg.start_z = 0.82095023368;
    msg.start_z_units = 167U;
    msg.end_lat = 0.45152878027;
    msg.end_lon = 0.685730014348;
    msg.end_z = 0.718616819948;
    msg.end_z_units = 253U;
    msg.lradius = 0.450107564449;
    msg.flags = 110U;
    msg.x = 0.841284600055;
    msg.y = 0.525534747222;
    msg.z = 0.988299811693;
    msg.vx = 0.731391113865;
    msg.vy = 0.875037489364;
    msg.vz = 0.212724518318;
    msg.course_error = 0.149680050637;
    msg.eta = 51968U;

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
    msg.setTimeStamp(0.457436439641);
    msg.setSource(21442U);
    msg.setSourceEntity(209U);
    msg.setDestination(34706U);
    msg.setDestinationEntity(163U);
    msg.k = 0.177559605162;
    msg.m = 0.879890097127;
    msg.n = 0.763888634377;

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
    msg.setTimeStamp(0.570967583554);
    msg.setSource(29306U);
    msg.setSourceEntity(241U);
    msg.setDestination(59264U);
    msg.setDestinationEntity(139U);
    msg.k = 0.541116804198;
    msg.m = 0.96182864465;
    msg.n = 0.271614017812;

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
    msg.setTimeStamp(0.923872207558);
    msg.setSource(46701U);
    msg.setSourceEntity(110U);
    msg.setDestination(64847U);
    msg.setDestinationEntity(244U);
    msg.k = 0.782758654844;
    msg.m = 0.879522238751;
    msg.n = 0.109209009051;

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
    msg.setTimeStamp(0.427277202761);
    msg.setSource(18767U);
    msg.setSourceEntity(187U);
    msg.setDestination(38981U);
    msg.setDestinationEntity(96U);
    msg.p = 0.0666723242255;
    msg.i = 0.724268060048;
    msg.d = 0.93760077412;
    msg.a = 0.701729876666;

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
    msg.setTimeStamp(0.186115639);
    msg.setSource(58806U);
    msg.setSourceEntity(230U);
    msg.setDestination(6307U);
    msg.setDestinationEntity(73U);
    msg.p = 0.190209260744;
    msg.i = 0.702311028497;
    msg.d = 0.425087412195;
    msg.a = 0.35977623213;

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
    msg.setTimeStamp(0.89663736095);
    msg.setSource(25517U);
    msg.setSourceEntity(45U);
    msg.setDestination(30591U);
    msg.setDestinationEntity(126U);
    msg.p = 0.0195811561774;
    msg.i = 0.455951138948;
    msg.d = 0.248271120995;
    msg.a = 0.96852671689;

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
    msg.setTimeStamp(0.30511529734);
    msg.setSource(7020U);
    msg.setSourceEntity(1U);
    msg.setDestination(20509U);
    msg.setDestinationEntity(218U);
    msg.op = 113U;

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
    msg.setTimeStamp(0.0728373872224);
    msg.setSource(48030U);
    msg.setSourceEntity(28U);
    msg.setDestination(15702U);
    msg.setDestinationEntity(120U);
    msg.op = 252U;

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
    msg.setTimeStamp(0.265689458432);
    msg.setSource(34436U);
    msg.setSourceEntity(146U);
    msg.setDestination(19313U);
    msg.setDestinationEntity(121U);
    msg.op = 179U;

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
    msg.setTimeStamp(0.0233489854468);
    msg.setSource(49737U);
    msg.setSourceEntity(205U);
    msg.setDestination(9933U);
    msg.setDestinationEntity(40U);
    msg.x = 0.633257368279;
    msg.y = 0.91043856522;
    msg.z = 0.692243998285;
    msg.vx = 0.104294340709;
    msg.vy = 0.652492320204;
    msg.vz = 0.569197253742;
    msg.ax = 0.670688438811;
    msg.ay = 0.0989709016229;
    msg.az = 0.297210440241;
    msg.flags = 26782U;

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
    msg.setTimeStamp(0.286913202702);
    msg.setSource(11526U);
    msg.setSourceEntity(37U);
    msg.setDestination(40574U);
    msg.setDestinationEntity(52U);
    msg.x = 0.76880082177;
    msg.y = 0.915861304174;
    msg.z = 0.153883916114;
    msg.vx = 0.64389793825;
    msg.vy = 0.899429187579;
    msg.vz = 0.946715893817;
    msg.ax = 0.23228439398;
    msg.ay = 0.673475610118;
    msg.az = 0.0916026671194;
    msg.flags = 61832U;

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
    msg.setTimeStamp(0.531911908421);
    msg.setSource(34327U);
    msg.setSourceEntity(15U);
    msg.setDestination(47715U);
    msg.setDestinationEntity(81U);
    msg.x = 0.835966154264;
    msg.y = 0.349345573316;
    msg.z = 0.857586070459;
    msg.vx = 0.339517916819;
    msg.vy = 0.983323239012;
    msg.vz = 0.353166772271;
    msg.ax = 0.226573999605;
    msg.ay = 0.219798310309;
    msg.az = 0.0473039947224;
    msg.flags = 15141U;

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
    msg.setTimeStamp(0.490090143442);
    msg.setSource(38654U);
    msg.setSourceEntity(77U);
    msg.setDestination(64437U);
    msg.setDestinationEntity(212U);
    msg.value = 0.397371749141;

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
    msg.setTimeStamp(0.702117904262);
    msg.setSource(31262U);
    msg.setSourceEntity(33U);
    msg.setDestination(33046U);
    msg.setDestinationEntity(172U);
    msg.value = 0.41622336567;

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
    msg.setTimeStamp(0.915496195268);
    msg.setSource(50269U);
    msg.setSourceEntity(49U);
    msg.setDestination(52220U);
    msg.setDestinationEntity(236U);
    msg.value = 0.639734083955;

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
    msg.setTimeStamp(0.701116433638);
    msg.setSource(26523U);
    msg.setSourceEntity(204U);
    msg.setDestination(4039U);
    msg.setDestinationEntity(201U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3024156651U;
    tmp_msg_0.start_lat = 0.966856977949;
    tmp_msg_0.start_lon = 0.191296326603;
    tmp_msg_0.start_z = 0.509421279279;
    tmp_msg_0.start_z_units = 168U;
    tmp_msg_0.end_lat = 0.495885508244;
    tmp_msg_0.end_lon = 0.977741489212;
    tmp_msg_0.end_z = 0.0636315192788;
    tmp_msg_0.end_z_units = 163U;
    tmp_msg_0.speed = 0.215187542331;
    tmp_msg_0.speed_units = 178U;
    tmp_msg_0.lradius = 0.599315529112;
    tmp_msg_0.flags = 36U;
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
    msg.setTimeStamp(0.513626616491);
    msg.setSource(43846U);
    msg.setSourceEntity(29U);
    msg.setDestination(4131U);
    msg.setDestinationEntity(153U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 700172469U;
    tmp_msg_0.start_lat = 0.400404057954;
    tmp_msg_0.start_lon = 0.520827362068;
    tmp_msg_0.start_z = 0.44690850152;
    tmp_msg_0.start_z_units = 177U;
    tmp_msg_0.end_lat = 0.062867412503;
    tmp_msg_0.end_lon = 0.114491674941;
    tmp_msg_0.end_z = 0.257963593867;
    tmp_msg_0.end_z_units = 40U;
    tmp_msg_0.speed = 0.241001147181;
    tmp_msg_0.speed_units = 33U;
    tmp_msg_0.lradius = 0.257360424905;
    tmp_msg_0.flags = 201U;
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
    msg.setTimeStamp(0.771004734569);
    msg.setSource(14471U);
    msg.setSourceEntity(213U);
    msg.setDestination(43765U);
    msg.setDestinationEntity(87U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2294173358U;
    tmp_msg_0.start_lat = 0.959996704967;
    tmp_msg_0.start_lon = 0.835402706455;
    tmp_msg_0.start_z = 0.414539296032;
    tmp_msg_0.start_z_units = 55U;
    tmp_msg_0.end_lat = 0.622943578687;
    tmp_msg_0.end_lon = 0.291257062679;
    tmp_msg_0.end_z = 0.750969593005;
    tmp_msg_0.end_z_units = 242U;
    tmp_msg_0.speed = 0.397952275024;
    tmp_msg_0.speed_units = 49U;
    tmp_msg_0.lradius = 0.393687542135;
    tmp_msg_0.flags = 88U;
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
    msg.setTimeStamp(0.849792592622);
    msg.setSource(906U);
    msg.setSourceEntity(124U);
    msg.setDestination(12168U);
    msg.setDestinationEntity(224U);
    msg.timeout = 53764U;
    msg.lat = 0.943502227703;
    msg.lon = 0.357788492347;
    msg.z = 0.124917606167;
    msg.z_units = 191U;
    msg.speed = 0.892971842186;
    msg.speed_units = 76U;
    msg.roll = 0.314668301254;
    msg.pitch = 0.0232419234971;
    msg.yaw = 0.746198958011;
    msg.custom.assign("QUAZJCLHHFTGPCQJYZXSCKLUNJXQRGOHPDQNOMCQKSBIZQGQIVWIFTRDLTBYKAGUWUERAORFIDSYYNVSKEAWIVIDSNOPWHBUNPVENCYXCXGZWURNINXIUGRFRDBTMLHWTMWKGLVITYMWPALSMEVFFDQBRBJQKVVCJXLCCMJPYUWKVZGNLFSHJHSDRPFMLAOJDMKTTJDOABOHEWJZNZBZBTGYEFEHK");

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
    msg.setTimeStamp(0.661900463451);
    msg.setSource(33898U);
    msg.setSourceEntity(23U);
    msg.setDestination(558U);
    msg.setDestinationEntity(51U);
    msg.timeout = 11057U;
    msg.lat = 0.152093693199;
    msg.lon = 0.524462428058;
    msg.z = 0.954137261039;
    msg.z_units = 53U;
    msg.speed = 0.479811301413;
    msg.speed_units = 32U;
    msg.roll = 0.748955329037;
    msg.pitch = 0.194979985222;
    msg.yaw = 0.359605024559;
    msg.custom.assign("IZETXQGYJYWYHDGPTERIGGPWTOZAZMN");

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
    msg.setTimeStamp(0.794765218453);
    msg.setSource(33578U);
    msg.setSourceEntity(154U);
    msg.setDestination(49380U);
    msg.setDestinationEntity(12U);
    msg.timeout = 18430U;
    msg.lat = 0.773170448133;
    msg.lon = 0.718340215782;
    msg.z = 0.366326701432;
    msg.z_units = 16U;
    msg.speed = 0.626484206649;
    msg.speed_units = 204U;
    msg.roll = 0.926230054414;
    msg.pitch = 0.222269722664;
    msg.yaw = 0.413335139645;
    msg.custom.assign("EUVRQRLEEMBKRZIHDZDOHMZQYDHSCHRZRWQJXJDJUMLONIBANSLFQTXPOMKTCBSCEVSSDMAQXKTYIVXVQHWG");

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
    msg.setTimeStamp(0.333592702721);
    msg.setSource(18928U);
    msg.setSourceEntity(223U);
    msg.setDestination(43052U);
    msg.setDestinationEntity(217U);
    msg.timeout = 35709U;
    msg.lat = 0.373718140542;
    msg.lon = 0.345737038024;
    msg.z = 0.231583083869;
    msg.z_units = 118U;
    msg.speed = 0.144721406878;
    msg.speed_units = 126U;
    msg.duration = 14236U;
    msg.radius = 0.897878106565;
    msg.flags = 63U;
    msg.custom.assign("UGRXYIKZLQONJUOXTQBSWHUXMPZUSEHPMZGHMFRURSKXZICNATHSVFZLDTBIFZMABPJQWVOTPGZVQAGVESGMNCCMHIWBNSSXDENWJFXALILPKRGVGXR");

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
    msg.setTimeStamp(0.479568668711);
    msg.setSource(37175U);
    msg.setSourceEntity(183U);
    msg.setDestination(22770U);
    msg.setDestinationEntity(141U);
    msg.timeout = 21058U;
    msg.lat = 0.300116826;
    msg.lon = 0.348857559091;
    msg.z = 0.528956711873;
    msg.z_units = 88U;
    msg.speed = 0.73995231085;
    msg.speed_units = 89U;
    msg.duration = 29176U;
    msg.radius = 0.706686544777;
    msg.flags = 80U;
    msg.custom.assign("QMCXHJFVXZHMXILDRVARDVCRSRXTUPVTZHTEBFUINJ");

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
    msg.setTimeStamp(0.0959639983389);
    msg.setSource(49131U);
    msg.setSourceEntity(80U);
    msg.setDestination(62456U);
    msg.setDestinationEntity(16U);
    msg.timeout = 33524U;
    msg.lat = 0.978233337653;
    msg.lon = 0.204994233097;
    msg.z = 0.852010390856;
    msg.z_units = 235U;
    msg.speed = 0.433683363653;
    msg.speed_units = 96U;
    msg.duration = 17309U;
    msg.radius = 0.580871176475;
    msg.flags = 192U;
    msg.custom.assign("HOODCFSEPRRUQNBSRSFOQZJEIHSGGZJGCUXXPGSMOOMKMEMHPVGUZGRDXZXYVCMKUJUKOJHLITFTCMNFBMNGUDFUKUVCFLCYJILBTLMYSBXZBDFQZHYIVWWM");

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
    msg.setTimeStamp(0.769774033196);
    msg.setSource(13768U);
    msg.setSourceEntity(228U);
    msg.setDestination(24221U);
    msg.setDestinationEntity(193U);
    msg.custom.assign("KIGZSGCPTAGXPKQRUYWRLDZGCXEPTHFABJWHXEVLWKFBBEEBBBTJILXXKPGWNJZRRVFTVUHZHETMWFANAMSWHOYZORTCYLYIY");

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
    msg.setTimeStamp(0.221226701913);
    msg.setSource(17892U);
    msg.setSourceEntity(44U);
    msg.setDestination(28469U);
    msg.setDestinationEntity(115U);
    msg.custom.assign("TSPNHXOORVSHECALVNYUEAFYCDMNVTSZDWKQTGWTRYBJZNLDZKTESZUYRYWAMWRYBDBZOXEVCUMKSCWLGYGXILBXDFQQDLGOYHJTMBXCJOCITJMSNUQJFQVHGGINBSOLFPFUDZVDUEWLMPSBVEOXCMIAIBGHOCAFHNFMAUVLHRBPZWYRKRTHNYPUZJKDRQEAPKIZVQXWOIUXTJEKMKGHPNIJLKBSDIQK");

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
    msg.setTimeStamp(0.830069181482);
    msg.setSource(56959U);
    msg.setSourceEntity(50U);
    msg.setDestination(18896U);
    msg.setDestinationEntity(143U);
    msg.custom.assign("YWBPVHMDMSCRAPQGLUIGUGRKFXEYDQLONAZJVJKXONNEUOLLJYPRQUBMZMXWWCHGZHVOZEIXGPOJFHSBTYERIACJWPOJNDDDQHKNBQNNVBRNYGJBFJPXQQFFGIOBH");

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
    msg.setTimeStamp(0.555884492886);
    msg.setSource(38933U);
    msg.setSourceEntity(32U);
    msg.setDestination(13518U);
    msg.setDestinationEntity(157U);
    msg.timeout = 13235U;
    msg.lat = 0.277536879372;
    msg.lon = 0.0516391134264;
    msg.z = 0.374656744833;
    msg.z_units = 2U;
    msg.duration = 25661U;
    msg.speed = 0.260734781193;
    msg.speed_units = 70U;
    msg.type = 219U;
    msg.radius = 0.899792208301;
    msg.length = 0.663247641386;
    msg.bearing = 0.369365593199;
    msg.direction = 35U;
    msg.custom.assign("MDWICXZXCTSMMUJDFOEDBGCXZKWIEMBNUYDFYPMZOWJOLOALGPFKVGIWFOTUTHIAABVQXUSEXMPHGQJRWVNJAVTAWLMJSUFKENSZWTULYREGBAOIDVEBJRSHAAKIBBRLDOCSECGSUVKUCRFOQKWLMYTLGQQCOXNDKPFRAPSHQSCFWNRJLLDXITNKTQIHPXTYEIVJZKNNZY");

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
    msg.setTimeStamp(0.768581806804);
    msg.setSource(63428U);
    msg.setSourceEntity(41U);
    msg.setDestination(7732U);
    msg.setDestinationEntity(94U);
    msg.timeout = 45818U;
    msg.lat = 0.245785858057;
    msg.lon = 0.331030605391;
    msg.z = 0.305860218289;
    msg.z_units = 76U;
    msg.duration = 9534U;
    msg.speed = 0.226735142546;
    msg.speed_units = 99U;
    msg.type = 60U;
    msg.radius = 0.247068443909;
    msg.length = 0.125230181707;
    msg.bearing = 0.0982660696581;
    msg.direction = 253U;
    msg.custom.assign("PWLMMIGGPCPCKQTXEKVMSKCXSJHYMPOGYLXISNHOTHOFCAAHKYJQJUEHAQWVYMDCXPLOFMYUEORYLGPZEUSRWCANXIFFFRLGVYBQZCXAWTHQDIBFMZESTLGJ");

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
    msg.setTimeStamp(0.383511643146);
    msg.setSource(40792U);
    msg.setSourceEntity(103U);
    msg.setDestination(6773U);
    msg.setDestinationEntity(44U);
    msg.timeout = 49373U;
    msg.lat = 0.41243252912;
    msg.lon = 0.220371658751;
    msg.z = 0.629437563085;
    msg.z_units = 23U;
    msg.duration = 44317U;
    msg.speed = 0.194405120594;
    msg.speed_units = 134U;
    msg.type = 133U;
    msg.radius = 0.748850862702;
    msg.length = 0.989762261847;
    msg.bearing = 0.916730471062;
    msg.direction = 229U;
    msg.custom.assign("KGBJTBWPYAZREQYHVXTLHROSJNRWZKRAPDWPDXSFQINPEVHWPMYXTQNBEDNPDIBXJCNLKVUQMVDJNUFAEJCBGIECPNTGFKJWJOFOAZNYSISSECIBMKQZFGHNUKOZTFTLWWLSXHQICZUHKUUULJRKQYZGAWZTYADKMYGTRMYIFZKTVFCREICUWHEZOBOPLIHRASOERMJCDLX");

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
    msg.setTimeStamp(0.198717687108);
    msg.setSource(20729U);
    msg.setSourceEntity(233U);
    msg.setDestination(26757U);
    msg.setDestinationEntity(162U);
    msg.duration = 24207U;
    msg.custom.assign("RLMHTNQTABMRXKKVYDCWWOMUUBIFPFSCTJGMWZTUGYVDQZUDNBMYDSOVNBGSYTRKDNQPCPYCCZJKIHQQNAFBJLCFMLLLBAPKEXYNPXOXJEONOEZMHNYSSUDKOPVNVFTHQKUYZQFU");

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
    msg.setTimeStamp(0.103498174154);
    msg.setSource(60937U);
    msg.setSourceEntity(50U);
    msg.setDestination(51474U);
    msg.setDestinationEntity(44U);
    msg.duration = 3264U;
    msg.custom.assign("COJTLUOSWVJZYNHCEJERZNGKQWTLZOYEESGTSKHIFBOXRDFCAMIFYSCELVWYFQMLNKEARRMAWRTBFYMHOOXZCDDSEDVTTMHRVKACGFXIOBSPSUTCDGYYFKHPDSRXNCRJAOTVLCJIKNUEAWMGXYONQIHNNABGUBBPLDGNJVRKVAKGPZZDIXEQMURUQMQSHTUTPJFOQBYLPPZGIJZKDWBLVUSVWFIBWPZXWNBLHXFHWUVUPX");

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
    msg.setTimeStamp(0.010534159172);
    msg.setSource(60166U);
    msg.setSourceEntity(247U);
    msg.setDestination(37671U);
    msg.setDestinationEntity(207U);
    msg.duration = 16280U;
    msg.custom.assign("IFRFAFDLDYMJBMNQJULKEQSQAAUZSVENWJZNMIKBISYRHPVVGYWCCPWDHAVCZRMLRTVWTIXJEVIKUICEWBLXCQPZXOPBDOJYKDWZRGTWVYVMOTPQAENANDFAOYHLNTYRHXUFCSDMMUGCKSG");

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
    msg.setTimeStamp(0.682925543064);
    msg.setSource(42260U);
    msg.setSourceEntity(75U);
    msg.setDestination(27246U);
    msg.setDestinationEntity(171U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0736928642695;
    tmp_msg_0.speed_units = 33U;
    msg.control.set(tmp_msg_0);
    msg.duration = 22891U;
    msg.custom.assign("SGJFWKCIDQBGUPLNOBRMHUASEJUWPCPTFVCAJEKTAJVDWUFMVKSFDUQEFGFGCQUAYEPRBYFGEIJKXDAAVGDQKKQMNZZXCPZVYYCNJEFBPMIMIBLAXRSOSXGTURHNALUUIRSNVOLSOQZAHHQFONNXJL");

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
    msg.setTimeStamp(0.410489152223);
    msg.setSource(64569U);
    msg.setSourceEntity(198U);
    msg.setDestination(8712U);
    msg.setDestinationEntity(209U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 408295950U;
    tmp_msg_0.start_lat = 0.591002960106;
    tmp_msg_0.start_lon = 0.227236733274;
    tmp_msg_0.start_z = 0.475046818857;
    tmp_msg_0.start_z_units = 195U;
    tmp_msg_0.end_lat = 0.0661912389354;
    tmp_msg_0.end_lon = 0.482079587762;
    tmp_msg_0.end_z = 0.264826139834;
    tmp_msg_0.end_z_units = 157U;
    tmp_msg_0.speed = 0.447590691856;
    tmp_msg_0.speed_units = 239U;
    tmp_msg_0.lradius = 0.107102412292;
    tmp_msg_0.flags = 66U;
    msg.control.set(tmp_msg_0);
    msg.duration = 16224U;
    msg.custom.assign("ZRTWQFLCOKYXDLWYCNIHGIDTSVSIZJGMOZPTWEJKKZFQIRNHXMEFWXTJHBNPHJXBTODRSZUBYICNUGUZQZISVBFSQLYEADRRZNVTBPLNAURNYWXPEGVMBPEKYOHLD");

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
    msg.setTimeStamp(0.768660882716);
    msg.setSource(11066U);
    msg.setSourceEntity(199U);
    msg.setDestination(1342U);
    msg.setDestinationEntity(174U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.485599934148;
    tmp_msg_0.z_units = 237U;
    msg.control.set(tmp_msg_0);
    msg.duration = 65381U;
    msg.custom.assign("FZUMIUQNCOKQBXTXMTMKNLOVZDLSTEKPGQPDDYLVQRWFWFVNIXNGQOVBCTCMHXCZJUAGJGDQVIDKWYJTFPLRPJBQKZXGLHWZGBJMZNFXEIZSRBIIWOBSEEXENIPTUTZOWHDXCCFHWKDMY");

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
    msg.setTimeStamp(0.574359451175);
    msg.setSource(37607U);
    msg.setSourceEntity(26U);
    msg.setDestination(60566U);
    msg.setDestinationEntity(49U);
    msg.timeout = 16117U;
    msg.lat = 0.677242514364;
    msg.lon = 0.182439763015;
    msg.z = 0.108084442388;
    msg.z_units = 198U;
    msg.speed = 0.922604157574;
    msg.speed_units = 224U;
    msg.bearing = 0.315922673423;
    msg.cross_angle = 0.296918622758;
    msg.width = 0.248787858746;
    msg.length = 0.537658735864;
    msg.hstep = 0.26244811908;
    msg.coff = 92U;
    msg.alternation = 189U;
    msg.flags = 131U;
    msg.custom.assign("JYAORHWXLNCNINGIHXSBZHVEICDUMDEYOGKVAVFQBLQYCWLURQSMBXZMTITBQSPSLTOJWUVJBEFAVLTHPPKGNOKXSGBSJXDFDGYMHYYQYVFRSZKICINAGELKQKDTBRFZEVIGIELGDXNALMUDMHKZPZOVMJRQAWITCYQKUCRNPHWOXZTXPRREMJGCHQOUNGAFTRHACCZPAYUWDBZFOJYXQKWLAUSMWELOCISBRJDJODWVFUP");

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
    msg.setTimeStamp(0.335075224541);
    msg.setSource(57139U);
    msg.setSourceEntity(200U);
    msg.setDestination(14263U);
    msg.setDestinationEntity(95U);
    msg.timeout = 46202U;
    msg.lat = 0.817730572879;
    msg.lon = 0.723871287054;
    msg.z = 0.643785860567;
    msg.z_units = 13U;
    msg.speed = 0.973348515375;
    msg.speed_units = 111U;
    msg.bearing = 0.288785544783;
    msg.cross_angle = 0.448602221097;
    msg.width = 0.66684510075;
    msg.length = 0.888152569044;
    msg.hstep = 0.930332680865;
    msg.coff = 18U;
    msg.alternation = 123U;
    msg.flags = 72U;
    msg.custom.assign("DBGELSYZTNBTOZUETQKLIWBYTWZGWAXRMNIEJAJXQYVCDVRARQHYGCYQJKHWOFMPCRMKDMBAVHZJCDLONMMLTQUJZPXVFMXEDFNDDJKROVRQEDYFWSORNALZVSRKFLUNNUIYTJYXEPAHVUCHJKKNVSBXSPFVSCEUGDPLXVIPFTWJHTMHCNQORQIBUIJXGZGWGZBSYESURXIWOLPPEUKAAFPCIZYOMBH");

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
    msg.setTimeStamp(0.155371353657);
    msg.setSource(24414U);
    msg.setSourceEntity(187U);
    msg.setDestination(44536U);
    msg.setDestinationEntity(53U);
    msg.timeout = 61870U;
    msg.lat = 0.591840471019;
    msg.lon = 0.988299417379;
    msg.z = 0.397176856208;
    msg.z_units = 126U;
    msg.speed = 0.802555834637;
    msg.speed_units = 141U;
    msg.bearing = 0.498563412031;
    msg.cross_angle = 0.635971145487;
    msg.width = 0.949875604709;
    msg.length = 0.326993901647;
    msg.hstep = 0.692292403182;
    msg.coff = 202U;
    msg.alternation = 206U;
    msg.flags = 107U;
    msg.custom.assign("ZUIUCIPEUTGWQWLREBFPHGQKYTXEKAKQQIHOBMCRR");

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
    msg.setTimeStamp(0.054092463125);
    msg.setSource(1467U);
    msg.setSourceEntity(211U);
    msg.setDestination(8786U);
    msg.setDestinationEntity(203U);
    msg.timeout = 17696U;
    msg.lat = 0.647840560216;
    msg.lon = 0.386728746418;
    msg.z = 0.444435873446;
    msg.z_units = 82U;
    msg.speed = 0.932837543009;
    msg.speed_units = 197U;
    msg.custom.assign("IKQVUTBDBPIJNKNGICZAWMGTRIMBRDKJBLUNRXKEZBUBMYWUESIARCSOQOKWWIDIZLPDFHECAFVVLXGKUMPPHCWRSTJQUVADPNHWFHXCJXVGRFFLUEYNXFXPTQYEXRQJTWLFONYHKNMAMJWGEL");

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
    msg.setTimeStamp(0.476995232332);
    msg.setSource(28317U);
    msg.setSourceEntity(110U);
    msg.setDestination(14145U);
    msg.setDestinationEntity(197U);
    msg.timeout = 27540U;
    msg.lat = 0.496514192727;
    msg.lon = 0.33883627596;
    msg.z = 0.299425492733;
    msg.z_units = 26U;
    msg.speed = 0.96404048768;
    msg.speed_units = 158U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.396059277044;
    tmp_msg_0.y = 0.698063524036;
    tmp_msg_0.z = 0.21787637564;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EOIWAWACNSFDNTAWRDFIHYTCWQVNWMFYFGIWLYKAVRCNGOBMZOAJAYUHIBQCBLZBSBZEWVNBXKNCFPMJCMBOYRSDQQEIKLAIUHMGSQZDYXLRMQYPTUIDUZAIDSGXSMNFAGXUODRVSVLSNDMHJXSTJMLTPZZFBOODXEMPCUUFVPZPATEEJFUECRPZTHYGTKHQGKOUWYHHJEPBWBJJPKGWLQFRXGLYQHSIVDQKZNJHXRKVGEXCEJTOPUTNL");

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
    msg.setTimeStamp(0.072572327923);
    msg.setSource(47312U);
    msg.setSourceEntity(172U);
    msg.setDestination(23456U);
    msg.setDestinationEntity(219U);
    msg.timeout = 43053U;
    msg.lat = 0.679929051292;
    msg.lon = 0.194861865702;
    msg.z = 0.182482187311;
    msg.z_units = 215U;
    msg.speed = 0.699552685999;
    msg.speed_units = 95U;
    msg.custom.assign("KUXDZTRHNMKOVAVPIJAUJSIXPTT");

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
    msg.setTimeStamp(0.847906871217);
    msg.setSource(25533U);
    msg.setSourceEntity(8U);
    msg.setDestination(33942U);
    msg.setDestinationEntity(150U);
    msg.x = 0.491376902013;
    msg.y = 0.0132015481471;
    msg.z = 0.995311648503;

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
    msg.setTimeStamp(0.932424657627);
    msg.setSource(12049U);
    msg.setSourceEntity(170U);
    msg.setDestination(50237U);
    msg.setDestinationEntity(36U);
    msg.x = 0.789836137783;
    msg.y = 0.0166508548111;
    msg.z = 0.569959599574;

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
    msg.setTimeStamp(0.315260144598);
    msg.setSource(22497U);
    msg.setSourceEntity(31U);
    msg.setDestination(10526U);
    msg.setDestinationEntity(78U);
    msg.x = 0.830165187739;
    msg.y = 0.381599320103;
    msg.z = 0.690345091692;

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
    msg.setTimeStamp(0.137666846519);
    msg.setSource(46949U);
    msg.setSourceEntity(94U);
    msg.setDestination(18903U);
    msg.setDestinationEntity(254U);
    msg.timeout = 33499U;
    msg.lat = 0.172050922655;
    msg.lon = 0.0664111151724;
    msg.z = 0.0306260023479;
    msg.z_units = 173U;
    msg.amplitude = 0.910467727503;
    msg.pitch = 0.156175208497;
    msg.speed = 0.658314800772;
    msg.speed_units = 31U;
    msg.custom.assign("PUXXEAYCDZXTFDXAGIBBWJBZTYHQMFSDQJRVEIWOACGNGKYTPZMKIPRGCJCSJJNVHVJHNRCRGACPPQTOHTMZYYSBFOXTYELRGFKEJBOTOKUOBFVQTIKMLAELASBQGZAYLUGSJIVHBVS");

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
    msg.setTimeStamp(0.0349145887528);
    msg.setSource(17722U);
    msg.setSourceEntity(124U);
    msg.setDestination(30001U);
    msg.setDestinationEntity(189U);
    msg.timeout = 48249U;
    msg.lat = 0.365068906993;
    msg.lon = 0.857195070726;
    msg.z = 0.0860585037993;
    msg.z_units = 73U;
    msg.amplitude = 0.257284902845;
    msg.pitch = 0.645389100536;
    msg.speed = 0.342597784829;
    msg.speed_units = 135U;
    msg.custom.assign("AECLEPOYTLBT");

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
    msg.setTimeStamp(0.849129745126);
    msg.setSource(64861U);
    msg.setSourceEntity(67U);
    msg.setDestination(920U);
    msg.setDestinationEntity(69U);
    msg.timeout = 34374U;
    msg.lat = 0.53129035739;
    msg.lon = 0.213500424758;
    msg.z = 0.42236308891;
    msg.z_units = 208U;
    msg.amplitude = 0.365041548034;
    msg.pitch = 0.0947248058589;
    msg.speed = 0.234019238356;
    msg.speed_units = 63U;
    msg.custom.assign("GAXULQVYHLZNREPDRYSTLGEYZYIGPKBIATBCSEKGDDNHQDQKIWLGMOCNEXGPCUMJINFJCAUCBPSZOPFQQHXIBCRTVJWDAQMIYVDEXUKSBJMQSGIXYWTUBTWYZABLYUNHWPVXHFNMGKDQKHMPTJUJZDAJEKOGVYFWZKITDTWZZOFJQBRBNWMEXPVSWRSCJFMSSEELATLFVCBOOTOXOERIWOFUVNPYSVCLJPHAIR");

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
    msg.setTimeStamp(0.238365485432);
    msg.setSource(53466U);
    msg.setSourceEntity(177U);
    msg.setDestination(62533U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.604931106894);
    msg.setSource(8849U);
    msg.setSourceEntity(82U);
    msg.setDestination(18201U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.489066823839);
    msg.setSource(1719U);
    msg.setSourceEntity(164U);
    msg.setDestination(18412U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.715577433999);
    msg.setSource(46047U);
    msg.setSourceEntity(192U);
    msg.setDestination(22582U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.555824999933;
    msg.lon = 0.732658261223;
    msg.z = 0.448657937517;
    msg.z_units = 92U;
    msg.radius = 0.693253996176;
    msg.duration = 25005U;
    msg.speed = 0.805818298458;
    msg.speed_units = 219U;
    msg.popup_period = 19008U;
    msg.popup_duration = 14238U;
    msg.flags = 209U;
    msg.custom.assign("CNLGIYDSNAZWLUHRVEYBCXMODUFFOMVAKSHNXVKHJYBLKJEQRFDWZCYTLDINOZMNWPJWHBXLLPKCKCZGJARYEXKXEDHVEROIRIYEHAQNOIVXEDWYOBOTXEGUPISYBQKCPJCWXSRXLKHWV");

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
    msg.setTimeStamp(0.961587376678);
    msg.setSource(13302U);
    msg.setSourceEntity(23U);
    msg.setDestination(16489U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.385236688757;
    msg.lon = 0.921490456691;
    msg.z = 0.652325601184;
    msg.z_units = 166U;
    msg.radius = 0.251440287454;
    msg.duration = 38338U;
    msg.speed = 0.759230761452;
    msg.speed_units = 60U;
    msg.popup_period = 43430U;
    msg.popup_duration = 3589U;
    msg.flags = 253U;
    msg.custom.assign("OFVNUTOZOMHPNNYDEOWBFIEYKTAGAIFKSTXSAQHOJXYKFBCVKEKOYQDJGFOXTPTDSPQKSWBBYEXNCRTZGUNWGLAGER");

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
    msg.setTimeStamp(0.30862003857);
    msg.setSource(55805U);
    msg.setSourceEntity(158U);
    msg.setDestination(44444U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.889209513737;
    msg.lon = 0.470602955897;
    msg.z = 0.448302511571;
    msg.z_units = 207U;
    msg.radius = 0.601412109547;
    msg.duration = 33465U;
    msg.speed = 0.680070095002;
    msg.speed_units = 224U;
    msg.popup_period = 64655U;
    msg.popup_duration = 64194U;
    msg.flags = 172U;
    msg.custom.assign("NNNDPYWHSOPWNQOQLKCTENLCDKCNLIPEXOYZRYUAYWZXMQJKKJWBHTLIXQULAZRXDHUUE");

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
    msg.setTimeStamp(0.186343995949);
    msg.setSource(64875U);
    msg.setSourceEntity(174U);
    msg.setDestination(14504U);
    msg.setDestinationEntity(114U);
    msg.timeout = 56206U;
    msg.flags = 153U;
    msg.lat = 0.913366792643;
    msg.lon = 0.993592269195;
    msg.start_z = 0.701732456729;
    msg.start_z_units = 189U;
    msg.end_z = 0.648646512126;
    msg.end_z_units = 68U;
    msg.radius = 0.710540396166;
    msg.speed = 0.954497434728;
    msg.speed_units = 23U;
    msg.custom.assign("KHJRTEXJAFMVSZXYAIITELMMQWZYGDVIGCEHBNYCFJVVMMLNHPMGWCGMIGBFTNZWBGADXPARKYCBSOXWODUDNVNDPHCDGFRSLNYBQHKIHFSLGDYVXTVUFZYTANBVZHKAAPRELSQBFCLOYUETRZPFOJRITLBOIGVLRXWEPJQZJIAFHOWAXBRAQKRKJRPOCQDEUUWIKNNZQYYK");

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
    msg.setTimeStamp(0.981125051602);
    msg.setSource(3338U);
    msg.setSourceEntity(175U);
    msg.setDestination(27313U);
    msg.setDestinationEntity(97U);
    msg.timeout = 2935U;
    msg.flags = 37U;
    msg.lat = 0.114847221566;
    msg.lon = 0.87196650229;
    msg.start_z = 0.428199894608;
    msg.start_z_units = 127U;
    msg.end_z = 0.988351649444;
    msg.end_z_units = 40U;
    msg.radius = 0.669858225179;
    msg.speed = 0.869094365801;
    msg.speed_units = 248U;
    msg.custom.assign("PBKOJIOKPBXHCZVBLZZISRMTJHSLEKZLJLOSLOXPCEEBSCAOCLBAMG");

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
    msg.setTimeStamp(0.147116250951);
    msg.setSource(61179U);
    msg.setSourceEntity(211U);
    msg.setDestination(46624U);
    msg.setDestinationEntity(169U);
    msg.timeout = 51788U;
    msg.flags = 100U;
    msg.lat = 0.571958593191;
    msg.lon = 0.393281118269;
    msg.start_z = 0.775203741025;
    msg.start_z_units = 114U;
    msg.end_z = 0.599137930132;
    msg.end_z_units = 103U;
    msg.radius = 0.999084511101;
    msg.speed = 0.471822100304;
    msg.speed_units = 47U;
    msg.custom.assign("GDXCRVNWEEPBWSILYWSDGHLQIXFZMWQNDYXABJHDHTSH");

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
    msg.setTimeStamp(0.212720043343);
    msg.setSource(47557U);
    msg.setSourceEntity(230U);
    msg.setDestination(61490U);
    msg.setDestinationEntity(252U);
    msg.timeout = 47803U;
    msg.lat = 0.122581816623;
    msg.lon = 0.0215116485596;
    msg.z = 0.87562579735;
    msg.z_units = 134U;
    msg.speed = 0.477336109271;
    msg.speed_units = 224U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.782101569972;
    tmp_msg_0.y = 0.193331695169;
    tmp_msg_0.z = 0.183481123532;
    tmp_msg_0.t = 0.657465134564;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VGRXTCSZPDAMGCRRYCWIWTUGFMUOODSHYCEUVPVEBJGZEIQAZDZQULLCPNYXYKWBUCMSFGANHSRVHI");

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
    msg.setTimeStamp(0.448343993623);
    msg.setSource(42253U);
    msg.setSourceEntity(173U);
    msg.setDestination(10465U);
    msg.setDestinationEntity(233U);
    msg.timeout = 17020U;
    msg.lat = 0.323539912645;
    msg.lon = 0.630004964425;
    msg.z = 0.157871406464;
    msg.z_units = 89U;
    msg.speed = 0.549851931396;
    msg.speed_units = 228U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.604473227803;
    tmp_msg_0.y = 0.047744101912;
    tmp_msg_0.z = 0.828916772173;
    tmp_msg_0.t = 0.991580011923;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RUUFREYADCIWXXKFIPZVBWLXGCLVKVSAYNVJDYSBIKQIPEUZVNYPTMODCXWRAFPMJIWLNPBNMXPXIDPEQCVQVKS");

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
    msg.setTimeStamp(0.434270075427);
    msg.setSource(62797U);
    msg.setSourceEntity(115U);
    msg.setDestination(21012U);
    msg.setDestinationEntity(113U);
    msg.timeout = 7110U;
    msg.lat = 0.853205190336;
    msg.lon = 0.211538908195;
    msg.z = 0.967560284443;
    msg.z_units = 185U;
    msg.speed = 0.103891649136;
    msg.speed_units = 59U;
    msg.custom.assign("ULRVEXLZAKIPWBJNOHRPTQOJKZQHHXOTNEAPGCPKHNCVNOLJWTBKQTTDQUZPGMABCUEYDV");

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
    msg.setTimeStamp(0.234259773261);
    msg.setSource(58941U);
    msg.setSourceEntity(225U);
    msg.setDestination(43571U);
    msg.setDestinationEntity(148U);
    msg.x = 0.590733424769;
    msg.y = 0.733140843803;
    msg.z = 0.812767227153;
    msg.t = 0.359276492338;

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
    msg.setTimeStamp(0.821785092386);
    msg.setSource(57176U);
    msg.setSourceEntity(195U);
    msg.setDestination(48643U);
    msg.setDestinationEntity(112U);
    msg.x = 0.90226973059;
    msg.y = 0.718701470768;
    msg.z = 0.674459621732;
    msg.t = 0.725879990651;

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
    msg.setTimeStamp(0.851576003192);
    msg.setSource(20914U);
    msg.setSourceEntity(236U);
    msg.setDestination(35194U);
    msg.setDestinationEntity(141U);
    msg.x = 0.407766585662;
    msg.y = 0.803471854211;
    msg.z = 0.734940993037;
    msg.t = 0.644719765457;

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
    msg.setTimeStamp(0.989673012176);
    msg.setSource(2254U);
    msg.setSourceEntity(34U);
    msg.setDestination(5117U);
    msg.setDestinationEntity(196U);
    msg.timeout = 41846U;
    msg.name.assign("TKDYKIHQTQRFYIGVCPOVQZPHSHCJCRQDHZIIURDXGFJYDVEUNWZOPFDZMEOCNOTNIOYCNAUECBPBCYEFT");
    msg.custom.assign("MHXJTSPWQMNYJZFALEWKAZCKYHAKHSPOAWRFOZZDPLTRFXCRLSFOKCVGQTFUMKSJYCSVSQRWTLZUZYBPQEOVXGNEVYFWJEXEELXCZVIBGGTMRJLHHBABNQIOICAIHXJLHGIGDIKEVWBWDRNOYQAPXUQNNSBDRYKKESHACDXPRMAIMOLQSOGUBOCETZ");

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
    msg.setTimeStamp(0.820311379893);
    msg.setSource(32888U);
    msg.setSourceEntity(160U);
    msg.setDestination(59971U);
    msg.setDestinationEntity(23U);
    msg.timeout = 36445U;
    msg.name.assign("FMTJGLIVIKKUOULAWNDMKWADFLRUUDNQZHYZJOITYOEUAIKZQYFVPMXOHGECWSJXNNNBCGJCZLUCNFASJOFAKXBKWBULVAMFQIGVHOPJNGXGXGRVHLNTVQZBRDEIKPGEZSXZOSBEPQPRPHCYTHHTRJUWKZOQNTCYDLCRSTLRJCISYYWLOXMFYAQOPAEHNARR");
    msg.custom.assign("JAITYGMIUFTQWQBCZCWCDDCUMIEXPVAWCFEYNCBADRNTTBDNPLJAUZFLUOMPCGGJKKPDMVOFZPSRFQQYXWGNVOTWVPUPITHFKQBVTFPLAAIRUSEOZLGOJEYHHDLOMWZYMCJXRQAXMURDSMNNAEHJXFRUVGXSEEOXZK");

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
    msg.setTimeStamp(0.172632364991);
    msg.setSource(34167U);
    msg.setSourceEntity(245U);
    msg.setDestination(26552U);
    msg.setDestinationEntity(237U);
    msg.timeout = 30031U;
    msg.name.assign("WNQVSTBOVWCMFQQVNHOALAETHRZSBSDOCJDEWUMGQHRKZXSCGIASFOKSREPQTNTATBARVXAYUYWJQTXPTYKZLYHPEQFKLDJIEWIWUGKUMDCYXCBJUZFQBMFZUJJDWKFCIRBPPUVZLONGLXJRCDMYCNQBWPEDYVGNRONJRAZZKMBKDHXOGLIKSYPHMJSNGAWSZXJUTCPALCPXGWFVGEZBYDNFVMGHBLTQMIV");
    msg.custom.assign("IWZNPLTAQSCZHJXDWZGYURVICOIJLPDYDAZVJQLXYAPGTZPSVOJZTMNAFUFBUSQXIYYWORMRTKLRZHEDDNRGEHNGFCQWDYLCOSRVSBNVBABGTMWTBJGNXKSIGIQTBQQTCKQODH");

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
    msg.setTimeStamp(0.473226737487);
    msg.setSource(49915U);
    msg.setSourceEntity(140U);
    msg.setDestination(16121U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.127531046393;
    msg.lon = 0.819829529679;
    msg.z = 0.202699095414;
    msg.z_units = 90U;
    msg.speed = 0.875169266267;
    msg.speed_units = 151U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.21396983799;
    tmp_msg_0.y = 0.669889083193;
    tmp_msg_0.z = 0.180714984596;
    tmp_msg_0.t = 0.148880261074;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.495645050654;
    msg.custom.assign("HMFWKSCERNQPDBLWIGJVNIAVYIJZSRTQPFZDORPGMJAVBFT");

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
    msg.setTimeStamp(0.263485501485);
    msg.setSource(33396U);
    msg.setSourceEntity(184U);
    msg.setDestination(47550U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.941017199447;
    msg.lon = 0.422245786196;
    msg.z = 0.813719569447;
    msg.z_units = 81U;
    msg.speed = 0.520842772953;
    msg.speed_units = 12U;
    msg.start_time = 0.358689098453;
    msg.custom.assign("PVGKMGDNZOIKYRGHCCYKTUKJHYFTKRNCZEWZRXSSWOXPUQDVYFIRAJGHSOZIWMNDXJWMJNIJIVJALRUSHQOKSYEXFWOABHBLDDAVKUFYMAGELVPFBATFL");

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
    msg.setTimeStamp(0.629935461028);
    msg.setSource(64989U);
    msg.setSourceEntity(197U);
    msg.setDestination(8822U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.497828558602;
    msg.lon = 0.729833596853;
    msg.z = 0.598317532893;
    msg.z_units = 6U;
    msg.speed = 0.699764301812;
    msg.speed_units = 99U;
    msg.start_time = 0.712453113852;
    msg.custom.assign("AMYXZXFPICJPFMGNPCZGOWRUOZPNJKXTFATEISHVSOIAFZLJCKGVQCQOPYSDB");

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
    msg.setTimeStamp(0.890471255772);
    msg.setSource(1755U);
    msg.setSourceEntity(157U);
    msg.setDestination(52889U);
    msg.setDestinationEntity(213U);
    msg.vid = 64021U;
    msg.off_x = 0.861592955725;
    msg.off_y = 0.988752519078;
    msg.off_z = 0.106875621674;

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
    msg.setTimeStamp(0.685431571413);
    msg.setSource(43814U);
    msg.setSourceEntity(168U);
    msg.setDestination(32994U);
    msg.setDestinationEntity(133U);
    msg.vid = 58864U;
    msg.off_x = 0.380360942183;
    msg.off_y = 0.133738620122;
    msg.off_z = 0.546783143642;

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
    msg.setTimeStamp(0.198562995754);
    msg.setSource(51678U);
    msg.setSourceEntity(190U);
    msg.setDestination(29375U);
    msg.setDestinationEntity(216U);
    msg.vid = 14784U;
    msg.off_x = 0.167685227979;
    msg.off_y = 0.587780181652;
    msg.off_z = 0.776828198386;

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
    msg.setTimeStamp(0.84775807649);
    msg.setSource(27876U);
    msg.setSourceEntity(216U);
    msg.setDestination(15371U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.800322477358);
    msg.setSource(56784U);
    msg.setSourceEntity(232U);
    msg.setDestination(47409U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.0985607438745);
    msg.setSource(38323U);
    msg.setSourceEntity(239U);
    msg.setDestination(21819U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.516738335);
    msg.setSource(31025U);
    msg.setSourceEntity(216U);
    msg.setDestination(36430U);
    msg.setDestinationEntity(159U);
    msg.mid = 54503U;

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
    msg.setTimeStamp(0.0845272277514);
    msg.setSource(13549U);
    msg.setSourceEntity(27U);
    msg.setDestination(6484U);
    msg.setDestinationEntity(209U);
    msg.mid = 36722U;

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
    msg.setTimeStamp(0.188887815988);
    msg.setSource(9068U);
    msg.setSourceEntity(220U);
    msg.setDestination(50540U);
    msg.setDestinationEntity(102U);
    msg.mid = 60614U;

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
    msg.setTimeStamp(0.378482874588);
    msg.setSource(62495U);
    msg.setSourceEntity(222U);
    msg.setDestination(25307U);
    msg.setDestinationEntity(190U);
    msg.state = 60U;
    msg.eta = 18567U;
    msg.info.assign("IUKLGSDVWOAVNZDLBMTHCMYUSJPPKBIQOLQVNAOBGRGIUDXSUZYIMMFWSEGLFRYQEJEGUKATFQAQXVOVGDWPNWEDOWVKBHBRDPCGMRPCTWWDSEHMOLNIAZOYXEFTQQYSOTNETYDQOCQCPNVABUPYYZHJIAGHEJNVXPUSDCBJTNIWREULGMKOVKRHGWXQUPNXLBXFHRCKKJCXIAANITIVZJEMJXAKPR");

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
    msg.setTimeStamp(0.739578842053);
    msg.setSource(15606U);
    msg.setSourceEntity(37U);
    msg.setDestination(44598U);
    msg.setDestinationEntity(37U);
    msg.state = 246U;
    msg.eta = 48672U;
    msg.info.assign("DQLUJJZWRNJFTJZTAZZLEJVQSYBTSQCCFESINHTLNGNDMLSSCCWJUBXJOMVRSHFPQYWFFXATRYWHLQOTDLO");

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
    msg.setTimeStamp(0.825881361242);
    msg.setSource(58891U);
    msg.setSourceEntity(201U);
    msg.setDestination(24641U);
    msg.setDestinationEntity(37U);
    msg.state = 142U;
    msg.eta = 27140U;
    msg.info.assign("BWQXBEMHOITBMDMVKDTGKZODURSNMIUWSBTACEMFYHNOURZGGLSPRPWPKEDWZUAGOTZKYRSOXGTKALGPDIUFFCAWEDOSZURQSQREVFBZD");

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
    msg.setTimeStamp(0.34359010664);
    msg.setSource(33428U);
    msg.setSourceEntity(26U);
    msg.setDestination(19633U);
    msg.setDestinationEntity(43U);
    msg.system = 13306U;
    msg.duration = 42972U;
    msg.speed = 0.325670339637;
    msg.speed_units = 189U;
    msg.x = 0.963824390981;
    msg.y = 0.556509270345;
    msg.z = 0.542277638264;
    msg.z_units = 136U;

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
    msg.setTimeStamp(0.527743425008);
    msg.setSource(3479U);
    msg.setSourceEntity(68U);
    msg.setDestination(4884U);
    msg.setDestinationEntity(45U);
    msg.system = 61328U;
    msg.duration = 44412U;
    msg.speed = 0.296999228165;
    msg.speed_units = 247U;
    msg.x = 0.61842186049;
    msg.y = 0.2246025594;
    msg.z = 0.487845793129;
    msg.z_units = 19U;

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
    msg.setTimeStamp(0.495340867044);
    msg.setSource(56123U);
    msg.setSourceEntity(193U);
    msg.setDestination(22433U);
    msg.setDestinationEntity(177U);
    msg.system = 48489U;
    msg.duration = 44718U;
    msg.speed = 0.454706228734;
    msg.speed_units = 118U;
    msg.x = 0.233641731858;
    msg.y = 0.489933893095;
    msg.z = 0.355666803535;
    msg.z_units = 155U;

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
    msg.setTimeStamp(0.194346258168);
    msg.setSource(52086U);
    msg.setSourceEntity(46U);
    msg.setDestination(33205U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.637715287639;
    msg.lon = 0.507720561531;
    msg.speed = 0.392933710459;
    msg.speed_units = 37U;
    msg.duration = 15570U;
    msg.sys_a = 61347U;
    msg.sys_b = 8308U;
    msg.move_threshold = 0.412456758192;

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
    msg.setTimeStamp(0.873165092073);
    msg.setSource(61424U);
    msg.setSourceEntity(27U);
    msg.setDestination(5118U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.418308756981;
    msg.lon = 0.952579036107;
    msg.speed = 0.044266298593;
    msg.speed_units = 2U;
    msg.duration = 1632U;
    msg.sys_a = 64399U;
    msg.sys_b = 14010U;
    msg.move_threshold = 0.487985894807;

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
    msg.setTimeStamp(0.990751072609);
    msg.setSource(38219U);
    msg.setSourceEntity(236U);
    msg.setDestination(52758U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.837434073143;
    msg.lon = 0.365170005941;
    msg.speed = 0.590802884065;
    msg.speed_units = 5U;
    msg.duration = 8271U;
    msg.sys_a = 19103U;
    msg.sys_b = 65267U;
    msg.move_threshold = 0.668004600743;

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
    msg.setTimeStamp(0.486613008992);
    msg.setSource(26581U);
    msg.setSourceEntity(194U);
    msg.setDestination(57480U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.00816730275747;
    msg.lon = 0.990484477279;
    msg.z = 0.44133463764;
    msg.z_units = 98U;
    msg.speed = 0.537834254142;
    msg.speed_units = 167U;
    msg.custom.assign("BGLOVSTWEWJKHDGMAFBFSHQJVVUVATWVYUUYRMPEEXSGYDABWNGZLZBRWNYWJZKAUEPVMQRSNKTXCLYJCNCKGLCKXNHVXBYZTFQWZDBRHYIJLUQLXIAYXIEAXCENYOTONFOOIJMLPRXPGIKPLDTAMFDQZQBIZURFUJIZKMGTTTLRCNKOOBSPCFDMJAGOUDKVZIZANUPFDQJS");

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
    msg.setTimeStamp(0.759523078152);
    msg.setSource(56444U);
    msg.setSourceEntity(32U);
    msg.setDestination(19135U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.813816037661;
    msg.lon = 0.250859106679;
    msg.z = 0.161439893101;
    msg.z_units = 170U;
    msg.speed = 0.127691731813;
    msg.speed_units = 165U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.996376574738;
    tmp_msg_0.lon = 0.625010117928;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("NMPHMNJGCSFYKDILUTERGGKHKSQUXPOSISZDIUVXWJPVYXKLTFGXYEELDQWQMHIHCCRZCBUAZJNAJXCATMKQYWTMZZEHPVGNVBHBFYIYBWBKUSEPHIUVBNROLLOCPKFYXEBQYSRDOMFUAPGGFXDVBZYCLIWZQFVSBHNXKARN");

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
    msg.setTimeStamp(0.563993686573);
    msg.setSource(10318U);
    msg.setSourceEntity(68U);
    msg.setDestination(40188U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.638999922789;
    msg.lon = 0.0372651673695;
    msg.z = 0.72681761317;
    msg.z_units = 166U;
    msg.speed = 0.730087108348;
    msg.speed_units = 129U;
    msg.custom.assign("NWCAFUCPZSHPCEJEFRZFQXGGEDMYMSVITEYBKCLMEDRFASMKZJ");

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
    msg.setTimeStamp(0.943464615817);
    msg.setSource(39874U);
    msg.setSourceEntity(62U);
    msg.setDestination(33535U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.344890724336;
    msg.lon = 0.924776613971;

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
    msg.setTimeStamp(0.774263257259);
    msg.setSource(57547U);
    msg.setSourceEntity(8U);
    msg.setDestination(32194U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.428175986051;
    msg.lon = 0.474690361354;

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
    msg.setTimeStamp(0.834362320513);
    msg.setSource(28913U);
    msg.setSourceEntity(114U);
    msg.setDestination(13123U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.107494000873;
    msg.lon = 0.625736896008;

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
    msg.setTimeStamp(0.663302702535);
    msg.setSource(31029U);
    msg.setSourceEntity(21U);
    msg.setDestination(48599U);
    msg.setDestinationEntity(61U);
    msg.timeout = 52301U;
    msg.lat = 0.510116624075;
    msg.lon = 0.329920834287;
    msg.z = 0.686028003444;
    msg.z_units = 213U;
    msg.pitch = 0.429586009625;
    msg.amplitude = 0.844656653621;
    msg.duration = 40051U;
    msg.speed = 0.666423301782;
    msg.speed_units = 13U;
    msg.radius = 0.233341866874;
    msg.direction = 85U;
    msg.custom.assign("VTUMBXZMXQOOILOZECZOWNIXFTIVUNKCFROCBSDLMMGXHFVVLQBHVNGJJKJUICVILGHHRBASJPQCSFBQQWZKNFLHUPWWAJTCKBNYQXQFZJWTEDWFBJVJNHARSFAYXWZGXJWDUAMDLPSABVKYDPEKSPCDOAUEWYSMOUCHUGQTSNPCOGPIY");

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
    msg.setTimeStamp(0.251420757931);
    msg.setSource(33193U);
    msg.setSourceEntity(64U);
    msg.setDestination(56219U);
    msg.setDestinationEntity(230U);
    msg.timeout = 57345U;
    msg.lat = 0.0616113123581;
    msg.lon = 0.432334695272;
    msg.z = 0.330163257228;
    msg.z_units = 89U;
    msg.pitch = 0.970859669972;
    msg.amplitude = 0.137067777609;
    msg.duration = 43801U;
    msg.speed = 0.859534123169;
    msg.speed_units = 59U;
    msg.radius = 0.00513762523864;
    msg.direction = 65U;
    msg.custom.assign("NTSSBJPZHDGEDXOLOJBIPTCWFJNNFDIEKULFTOAWHWXZLTLVSSCDDOXRXQMYFLMDDUEKXOBMIRPZZPGZQVVBVXQQZGBAQHPNTEXLVGVUEGUCAA");

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
    msg.setTimeStamp(0.605565301016);
    msg.setSource(55458U);
    msg.setSourceEntity(143U);
    msg.setDestination(62504U);
    msg.setDestinationEntity(179U);
    msg.timeout = 51592U;
    msg.lat = 0.449508109485;
    msg.lon = 0.878438205823;
    msg.z = 0.519958195693;
    msg.z_units = 215U;
    msg.pitch = 0.316914861337;
    msg.amplitude = 0.437845002097;
    msg.duration = 20365U;
    msg.speed = 0.405381346455;
    msg.speed_units = 119U;
    msg.radius = 0.250672924271;
    msg.direction = 126U;
    msg.custom.assign("PEHEPGOPLNGJTQDLTGVIZOWWAJBNREWRPJVSSHIDQXSHYZGUCYFNEWESXCYBWFCLISRBMHLYMXUHSKMKHBQACAQXDJBDTMVKQUDITNAVFOQI");

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
    msg.setTimeStamp(0.846972548943);
    msg.setSource(13810U);
    msg.setSourceEntity(101U);
    msg.setDestination(10782U);
    msg.setDestinationEntity(166U);
    msg.formation_name.assign("BGAILLOQJKXANAOSVQNPRMGYIGMZDPHQ");
    msg.reference_frame = 161U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11483U;
    tmp_msg_0.off_x = 0.0431358614719;
    tmp_msg_0.off_y = 0.735423219668;
    tmp_msg_0.off_z = 0.641476770122;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("MATLFNUOLMVORTBEVCPRCSJZPLZNXXKQISJGSJVFVQFHPHYNWKZJTMBXXOPHDXYAKEQQBERZDNRCCYWKAVOYVOGXKTNMBKLDFTYKUDZWASDWCWZSPNLAQQFGFCTPWZHWI");

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
    msg.setTimeStamp(0.128400335356);
    msg.setSource(29115U);
    msg.setSourceEntity(7U);
    msg.setDestination(38574U);
    msg.setDestinationEntity(53U);
    msg.formation_name.assign("XDSRAYKSOAIIQDNACIUMOTJMEBHMEUYDENB");
    msg.reference_frame = 125U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27848U;
    tmp_msg_0.off_x = 0.197199475643;
    tmp_msg_0.off_y = 0.195642095215;
    tmp_msg_0.off_z = 0.583976107941;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ZDKNFZUJDSVTJILBEOEYBPRBBYYDFVCHQHUFUKMCECJGUOXWYMFDWZZAUARXSPFJQTVVGJWJNXEMJBVXVBGHJPCROXSRPOTTUTANLAYPGICSKKOQIPIRUONYUKCTEXDWWGLLNDWJGHACLMKTPXIQLFDVKHME");

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
    msg.setTimeStamp(0.573248278635);
    msg.setSource(19061U);
    msg.setSourceEntity(26U);
    msg.setDestination(46777U);
    msg.setDestinationEntity(112U);
    msg.formation_name.assign("AJDYNMUXYBGXDGMSWBFRCQMOJHVOFGEQDMAGOKZHPZUWSLJBJQPUCTCKCNUSERGE");
    msg.reference_frame = 88U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 50899U;
    tmp_msg_0.off_x = 0.283723703668;
    tmp_msg_0.off_y = 0.119774253004;
    tmp_msg_0.off_z = 0.0491532573893;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ALZENCXIVJKJNXDNWOIJLZMBGRWCVQPRDNVDPTCBSPSRYMGRJYJYCTCLRFOBQQVHSJUKTQEUYXUCODEWOKEZNWWUKXZFRNHMZJFOADHVOCWFHTJKYKEZXYOPDVSUVBTXGOENXWXPRDDCZUEUOBPRWAYNTMHKCSHPMPNIHVTLKSIUQLBIMXFLAHSFSIIPULMYGAQGHDQPAOMUIXDQWRBYKGFJLMHTFGGFZZN");

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
    msg.setTimeStamp(0.224859891276);
    msg.setSource(36974U);
    msg.setSourceEntity(5U);
    msg.setDestination(17535U);
    msg.setDestinationEntity(139U);
    msg.group_name.assign("NBAUCMFEFLTJQDZZQCPIKJKAEKIUMJ");
    msg.formation_name.assign("UOGOYLOFMRRITIJHGAEXUBNEYYKVKTJAINABANDQEKRTKPYGELJWXLOTGM");
    msg.plan_id.assign("HZFNNBLOVZJCUVYTCSXBYXHEDA");
    msg.description.assign("DRRTJASMKHVFKENQNBBITTWFIJXRSGYBVIQBTPZDWHVHUMIOSJOSLQDOEWUDCPZZCMFTCTPBYFNXDXWWNBTIUNBLGZVSCRJXGPAWIZXJXVCXQSYRDPDEHKOUGVTGMARHRUHDJQHK");
    msg.leader_speed = 0.522199593108;
    msg.leader_bank_lim = 0.265159265684;
    msg.pos_sim_err_lim = 0.676298571882;
    msg.pos_sim_err_wrn = 0.858788271414;
    msg.pos_sim_err_timeout = 44178U;
    msg.converg_max = 0.996546879433;
    msg.converg_timeout = 22367U;
    msg.comms_timeout = 49131U;
    msg.turb_lim = 0.587050250347;
    msg.custom.assign("BEQLPQONJNKMLXJDHDAYGJTITGVDBFCITYGWAEPRZPRJWEVEGJCTWSGVUMULYHM");

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
    msg.setTimeStamp(0.300725876478);
    msg.setSource(14258U);
    msg.setSourceEntity(170U);
    msg.setDestination(56922U);
    msg.setDestinationEntity(8U);
    msg.group_name.assign("TNFESGYQMHFUTTBCEMAGOAWJVYRQDHOXOFMRNHOKWFKLMHCFJRUREMBGNDSEAPQGIDUVKLEJLQLBYZWMPJOZSFBXKZLHGAYWBJHZPRSUSLHKJEWVNZOQYGTHROIMCLVZVCKFLWDBOUXTVCPQCIBNDBOITYWRGKGUQWDCALTVQHPSJUXCMSATNOIAPVXDEJAUMFXCZG");
    msg.formation_name.assign("WOJDKKCOMSVRIBQJNKQZSALKRFXHIUSFMPYZBOIHLGRTOFSZQTGWYQRMXZEIAOTNOQMPCQBAGWVPIVFVAMGDRUUUPPEYTFEASRTJKOZJXIUKYNYUNABAMDQJFUVLGNPHJTBHWBLCREZTWVWGRSYNXMUZYZKTGWSGHNAEDEBL");
    msg.plan_id.assign("OAETSZCKAAJKOOMARLTERKBFKHJPCKOYAPQDVSRMEQYUNSOGPXUSPZQKYSNTSTQJOIJYNGUFXFEPTPWWHUXIZTLORPWLTNWJXSUABWKZ");
    msg.description.assign("PZTQKYSIOKQSPIRFEEODCRIGZLWHYHFBGKRDAKFWJCGSHBMBRCNZADZFYNOFJUHWOGDXJCLQTVAFMYQGWUBLXIVPQHE");
    msg.leader_speed = 0.168162471363;
    msg.leader_bank_lim = 0.858532712107;
    msg.pos_sim_err_lim = 0.451940302286;
    msg.pos_sim_err_wrn = 0.351559377804;
    msg.pos_sim_err_timeout = 13092U;
    msg.converg_max = 0.998731452334;
    msg.converg_timeout = 32235U;
    msg.comms_timeout = 18778U;
    msg.turb_lim = 0.884811861026;
    msg.custom.assign("QDYIRGGRDHPMTHVJPNCYABNVUFKCUVTXTBIGKOYNZXJAZTTHUSZZHRMFJHOLWDMIRRPDEU");

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
    msg.setTimeStamp(0.0205461928313);
    msg.setSource(5071U);
    msg.setSourceEntity(134U);
    msg.setDestination(57314U);
    msg.setDestinationEntity(229U);
    msg.group_name.assign("TWXDPIQMOBKQVTXZWLPHHPPXISQAFVWMAIALURIBYRMKYVDPZEKXEUJRBEWSFHXKBLVLGNNTFSJMKRDYLFYUUEGZAJJYYMCLXDIOZTWJGVGZDOEYYHUDMZNTFNFCKOROAWONPVGWBJNCMWRZSICJCSTRXJWLDHRSAGXPUFVVCJV");
    msg.formation_name.assign("RYBYNOQCGKSKKYAUBEMRLNTCJUIVQMZRBCDXLOQMOSVSQECJZDNITZBNOYHDPXZRSIKCZYWLXTRQRWLNPFGSTBKMITSQWVETXTIPHDFILFPFBVPEOUDOAFPOLFCFWHUAEYYMCNXQTEAWLGJTUOHJUQBXWBAEBGXGMIOIWDFJPCUFYXHNDGRURPAJAJZX");
    msg.plan_id.assign("JVBRJEJBFKYGDOTVEMFZJXQZOMJPYAKXUB");
    msg.description.assign("HKWXGBWYDATBBCTBAEVUSNZFHIERAYXKMVYMQZSLLCJPGIQRWNZXDOJEBXGBPWWACNLITFJIDQUKMSMPUJLMFICPUIHLSOPLIETXVXQXBVAEAOYJRZSXGPRCFSYOVAHSDDKMOOZVYNQZTKRNHOBNCNDUVJGFUBOCNDNJFAYMKWVTCGWPXSEEQWFMUUFLZCILJNRHETOIRRYOMRXSPTHKRTUGMWEAAQTZDHYKQFSHVLKCPGBQPGK");
    msg.leader_speed = 0.823645185425;
    msg.leader_bank_lim = 0.703455562587;
    msg.pos_sim_err_lim = 0.812565844325;
    msg.pos_sim_err_wrn = 0.848557763833;
    msg.pos_sim_err_timeout = 37937U;
    msg.converg_max = 0.375193251045;
    msg.converg_timeout = 39067U;
    msg.comms_timeout = 8880U;
    msg.turb_lim = 0.333213347265;
    msg.custom.assign("TFXTYMIQVZHRDAHAHAZYBWFCWFTKNKPGQEROFFVUVWGNGJSKQPMBQHFENMZWEWVBBOGKXZCKIMRMBXLDIAQEOAPTGYURPZKQXACETOOVEVLBUVTDJMDLDHLNIDDNXIZSCJHMLFQRYGQLGMEYSIWSNRAYYJWKFLVTPZCCFWBG");

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
    msg.setTimeStamp(0.239721337375);
    msg.setSource(60373U);
    msg.setSourceEntity(83U);
    msg.setDestination(27849U);
    msg.setDestinationEntity(115U);
    msg.control_src = 29132U;
    msg.control_ent = 69U;
    msg.timeout = 0.280384288802;
    msg.loiter_radius = 0.335365212026;
    msg.altitude_interval = 0.84681606783;

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
    msg.setTimeStamp(0.127248905969);
    msg.setSource(34205U);
    msg.setSourceEntity(24U);
    msg.setDestination(13898U);
    msg.setDestinationEntity(168U);
    msg.control_src = 29476U;
    msg.control_ent = 121U;
    msg.timeout = 0.725128924412;
    msg.loiter_radius = 0.307167671972;
    msg.altitude_interval = 0.805940429919;

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
    msg.setTimeStamp(0.559432499015);
    msg.setSource(3107U);
    msg.setSourceEntity(112U);
    msg.setDestination(64836U);
    msg.setDestinationEntity(242U);
    msg.control_src = 14562U;
    msg.control_ent = 90U;
    msg.timeout = 0.459084267753;
    msg.loiter_radius = 0.00327482385783;
    msg.altitude_interval = 0.569146186835;

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
    msg.setTimeStamp(0.550013295876);
    msg.setSource(16133U);
    msg.setSourceEntity(234U);
    msg.setDestination(48189U);
    msg.setDestinationEntity(198U);
    msg.flags = 84U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.900659115362;
    tmp_msg_0.speed_units = 237U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.473312396731;
    tmp_msg_1.z_units = 124U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.168984103194;
    msg.lon = 0.0977542480764;
    msg.radius = 0.892917658179;

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
    msg.setTimeStamp(0.518885174948);
    msg.setSource(16500U);
    msg.setSourceEntity(43U);
    msg.setDestination(8959U);
    msg.setDestinationEntity(219U);
    msg.flags = 150U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.803069383868;
    tmp_msg_0.speed_units = 145U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.603616238676;
    tmp_msg_1.z_units = 128U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.675142892272;
    msg.lon = 0.00851423979567;
    msg.radius = 0.0425522890018;

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
    msg.setTimeStamp(0.241211468653);
    msg.setSource(11936U);
    msg.setSourceEntity(17U);
    msg.setDestination(57916U);
    msg.setDestinationEntity(136U);
    msg.flags = 156U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.199267590615;
    tmp_msg_0.speed_units = 242U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.856254414659;
    tmp_msg_1.z_units = 7U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.201232154622;
    msg.lon = 0.797447596964;
    msg.radius = 0.0966162469548;

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
    msg.setTimeStamp(0.166218734541);
    msg.setSource(47235U);
    msg.setSourceEntity(246U);
    msg.setDestination(38276U);
    msg.setDestinationEntity(141U);
    msg.control_src = 19814U;
    msg.control_ent = 205U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 148U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0945279307348;
    tmp_tmp_msg_0_0.speed_units = 44U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.591314253389;
    tmp_tmp_msg_0_1.z_units = 185U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.878691167725;
    tmp_msg_0.lon = 0.38120293242;
    tmp_msg_0.radius = 0.885635903323;
    msg.reference.set(tmp_msg_0);
    msg.state = 1U;
    msg.proximity = 62U;

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
    msg.setTimeStamp(0.562104874867);
    msg.setSource(5354U);
    msg.setSourceEntity(177U);
    msg.setDestination(50798U);
    msg.setDestinationEntity(250U);
    msg.control_src = 64810U;
    msg.control_ent = 244U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 105U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.419889699527;
    tmp_tmp_msg_0_0.speed_units = 240U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8189917873;
    tmp_tmp_msg_0_1.z_units = 105U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.278068117491;
    tmp_msg_0.lon = 0.769247809534;
    tmp_msg_0.radius = 0.171591302037;
    msg.reference.set(tmp_msg_0);
    msg.state = 95U;
    msg.proximity = 41U;

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
    msg.setTimeStamp(0.767445907805);
    msg.setSource(13163U);
    msg.setSourceEntity(46U);
    msg.setDestination(59720U);
    msg.setDestinationEntity(75U);
    msg.control_src = 28383U;
    msg.control_ent = 113U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 55U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.796525324258;
    tmp_tmp_msg_0_0.speed_units = 145U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.86637941651;
    tmp_tmp_msg_0_1.z_units = 44U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0991961673043;
    tmp_msg_0.lon = 0.407158767798;
    tmp_msg_0.radius = 0.362940357735;
    msg.reference.set(tmp_msg_0);
    msg.state = 92U;
    msg.proximity = 130U;

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
    msg.setTimeStamp(0.652274736603);
    msg.setSource(49735U);
    msg.setSourceEntity(80U);
    msg.setDestination(60568U);
    msg.setDestinationEntity(130U);
    msg.ax_cmd = 0.811895135467;
    msg.ay_cmd = 0.222099108714;
    msg.az_cmd = 0.511953877342;
    msg.ax_des = 0.0215727956062;
    msg.ay_des = 0.564100568774;
    msg.az_des = 0.440672977135;
    msg.virt_err_x = 0.644861422887;
    msg.virt_err_y = 0.345349524002;
    msg.virt_err_z = 0.382610801927;
    msg.surf_fdbk_x = 0.520601289032;
    msg.surf_fdbk_y = 0.968937254826;
    msg.surf_fdbk_z = 0.816011134065;
    msg.surf_unkn_x = 0.507368290979;
    msg.surf_unkn_y = 0.74272959527;
    msg.surf_unkn_z = 0.857039361119;
    msg.ss_x = 0.195510436335;
    msg.ss_y = 0.444682055756;
    msg.ss_z = 0.708833212856;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("KMCDGUNVJYLPVFHOSWGMYTWWBUKYIFRBENNGARSQSQYQBPFKPMIXSOGVELKC");
    tmp_msg_0.dist = 0.322006426643;
    tmp_msg_0.err = 0.818780954904;
    tmp_msg_0.ctrl_imp = 0.0750623910315;
    tmp_msg_0.rel_dir_x = 0.150800323337;
    tmp_msg_0.rel_dir_y = 0.94450127438;
    tmp_msg_0.rel_dir_z = 0.789348311536;
    tmp_msg_0.err_x = 0.800328671555;
    tmp_msg_0.err_y = 0.972372910652;
    tmp_msg_0.err_z = 0.60835862803;
    tmp_msg_0.rf_err_x = 0.906879233989;
    tmp_msg_0.rf_err_y = 0.264533282879;
    tmp_msg_0.rf_err_z = 0.511093998541;
    tmp_msg_0.rf_err_vx = 0.907779796735;
    tmp_msg_0.rf_err_vy = 0.400028520027;
    tmp_msg_0.rf_err_vz = 0.809760136726;
    tmp_msg_0.ss_x = 0.798089481016;
    tmp_msg_0.ss_y = 0.237625427337;
    tmp_msg_0.ss_z = 0.309549804926;
    tmp_msg_0.virt_err_x = 0.211716618544;
    tmp_msg_0.virt_err_y = 0.643770101456;
    tmp_msg_0.virt_err_z = 0.498652837621;
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
    msg.setTimeStamp(0.968049563447);
    msg.setSource(5461U);
    msg.setSourceEntity(36U);
    msg.setDestination(63437U);
    msg.setDestinationEntity(64U);
    msg.ax_cmd = 0.239013555902;
    msg.ay_cmd = 0.79886484009;
    msg.az_cmd = 0.489364688208;
    msg.ax_des = 0.49330094122;
    msg.ay_des = 0.0375399525244;
    msg.az_des = 0.747001412325;
    msg.virt_err_x = 0.287203533615;
    msg.virt_err_y = 0.336004533867;
    msg.virt_err_z = 0.829288602946;
    msg.surf_fdbk_x = 0.0668516798929;
    msg.surf_fdbk_y = 0.458336828724;
    msg.surf_fdbk_z = 0.628098035048;
    msg.surf_unkn_x = 0.755130278878;
    msg.surf_unkn_y = 0.31590483261;
    msg.surf_unkn_z = 0.126539317102;
    msg.ss_x = 0.357457583887;
    msg.ss_y = 0.970806615439;
    msg.ss_z = 0.866950862802;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LQOAJWLIKHVLQCRZQVJUGENHSEWCLZKHSYZMVFXTZHNVUTKHYKPPEZBAUPVAIFUJHOSKGMYITGBUNITOGGVWMRTXYIRMMRFJFXXANIBWDUZLTLTAXNIVBQSLBNBKEWRZJEWUOSCDWADBYCREQNZY");
    tmp_msg_0.dist = 0.205326714137;
    tmp_msg_0.err = 0.354378059179;
    tmp_msg_0.ctrl_imp = 0.680024794188;
    tmp_msg_0.rel_dir_x = 0.471199760427;
    tmp_msg_0.rel_dir_y = 0.117937827408;
    tmp_msg_0.rel_dir_z = 0.07088994898;
    tmp_msg_0.err_x = 0.0171474911935;
    tmp_msg_0.err_y = 0.474164660287;
    tmp_msg_0.err_z = 0.176785064567;
    tmp_msg_0.rf_err_x = 0.607043031823;
    tmp_msg_0.rf_err_y = 0.22940410034;
    tmp_msg_0.rf_err_z = 0.50842256766;
    tmp_msg_0.rf_err_vx = 0.122086712579;
    tmp_msg_0.rf_err_vy = 0.272981755689;
    tmp_msg_0.rf_err_vz = 0.385062955411;
    tmp_msg_0.ss_x = 0.200194551629;
    tmp_msg_0.ss_y = 0.378395566353;
    tmp_msg_0.ss_z = 0.886559266645;
    tmp_msg_0.virt_err_x = 0.201907379345;
    tmp_msg_0.virt_err_y = 0.0474755304294;
    tmp_msg_0.virt_err_z = 0.139435765244;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.230929617233);
    msg.setSource(48260U);
    msg.setSourceEntity(205U);
    msg.setDestination(56230U);
    msg.setDestinationEntity(174U);
    msg.ax_cmd = 0.189286333778;
    msg.ay_cmd = 0.870323411617;
    msg.az_cmd = 0.759770171342;
    msg.ax_des = 0.314359534232;
    msg.ay_des = 0.364194318993;
    msg.az_des = 0.537440132142;
    msg.virt_err_x = 0.169213747379;
    msg.virt_err_y = 0.70292778175;
    msg.virt_err_z = 0.246828942572;
    msg.surf_fdbk_x = 0.855981601513;
    msg.surf_fdbk_y = 0.148212441782;
    msg.surf_fdbk_z = 0.65161087557;
    msg.surf_unkn_x = 0.0684594744582;
    msg.surf_unkn_y = 0.700904019394;
    msg.surf_unkn_z = 0.461151668133;
    msg.ss_x = 0.652221530504;
    msg.ss_y = 0.811227692167;
    msg.ss_z = 0.790849020495;

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
    msg.setTimeStamp(0.769326472037);
    msg.setSource(15465U);
    msg.setSourceEntity(122U);
    msg.setDestination(10226U);
    msg.setDestinationEntity(94U);
    msg.s_id.assign("ENBLUETECGDFTANMEJXRPDDZHLKVFXTSGXSBIOPCXDNCFKAICYUUDMZVZXRUVVKXCMMWHAOLFBSRSCAWEERGDFXVBSFMCOTDKQAGZMWOGCOJKK");
    msg.dist = 0.873678381265;
    msg.err = 0.832812259834;
    msg.ctrl_imp = 0.979556012735;
    msg.rel_dir_x = 0.359048767079;
    msg.rel_dir_y = 0.52531889481;
    msg.rel_dir_z = 0.294548330618;
    msg.err_x = 0.912310154259;
    msg.err_y = 0.339076352193;
    msg.err_z = 0.599069214573;
    msg.rf_err_x = 0.113363683658;
    msg.rf_err_y = 0.117196064051;
    msg.rf_err_z = 0.0531565148487;
    msg.rf_err_vx = 0.128730719584;
    msg.rf_err_vy = 0.431067342957;
    msg.rf_err_vz = 0.310905679734;
    msg.ss_x = 0.573824869537;
    msg.ss_y = 0.272610914003;
    msg.ss_z = 0.801152628405;
    msg.virt_err_x = 0.581529682148;
    msg.virt_err_y = 0.732681761572;
    msg.virt_err_z = 0.830257138686;

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
    msg.setTimeStamp(0.680276492943);
    msg.setSource(40133U);
    msg.setSourceEntity(153U);
    msg.setDestination(47934U);
    msg.setDestinationEntity(75U);
    msg.s_id.assign("FYHMWFGFEUBWPYJGKSXYFOAXZKDMLPFDVNDGSVLZKRRHFDEDPHQQZTKWOTPWOETUBUHJAIBJYTLOCVGYJAXCAKIHCUBINRVFOQTXUPLNEMIMINWNATRFSJ");
    msg.dist = 0.0629741451852;
    msg.err = 0.766988217452;
    msg.ctrl_imp = 0.0608451168418;
    msg.rel_dir_x = 0.0206905342904;
    msg.rel_dir_y = 0.0768513013261;
    msg.rel_dir_z = 0.697795561997;
    msg.err_x = 0.857623095305;
    msg.err_y = 0.7674801977;
    msg.err_z = 0.539461622371;
    msg.rf_err_x = 0.934982025255;
    msg.rf_err_y = 0.653129360395;
    msg.rf_err_z = 0.26542224436;
    msg.rf_err_vx = 0.578684167937;
    msg.rf_err_vy = 0.396054991527;
    msg.rf_err_vz = 0.216279375585;
    msg.ss_x = 0.956899759019;
    msg.ss_y = 0.179982001989;
    msg.ss_z = 0.00729396538198;
    msg.virt_err_x = 0.523598127816;
    msg.virt_err_y = 0.287227451369;
    msg.virt_err_z = 0.299821243076;

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
    msg.setTimeStamp(0.651349026273);
    msg.setSource(26659U);
    msg.setSourceEntity(211U);
    msg.setDestination(65236U);
    msg.setDestinationEntity(164U);
    msg.s_id.assign("LAPQHMFBAWOTHUTEGBSNZSPTHWELBXEWMUONFOUCIUWDYQPFWQCQNVHRRVFCYXLPJEQKJZDKJIVTQNLVHUBACVKYGVMWUKLEZXDAUPZPRTMJNMNWRSITFFMDEISKOGGYHBINZTMKWXCICLJSKAZJJIXIXLSUDEPQUAEHBBVNQFJOESGZXFROOGOZYKTDKSYBGBCPGVDAWKJRRAOGFLL");
    msg.dist = 0.187016213377;
    msg.err = 0.701645865893;
    msg.ctrl_imp = 0.374875420907;
    msg.rel_dir_x = 0.954752814203;
    msg.rel_dir_y = 0.50231358881;
    msg.rel_dir_z = 0.81617786123;
    msg.err_x = 0.584800558349;
    msg.err_y = 0.580092928709;
    msg.err_z = 0.461565184291;
    msg.rf_err_x = 0.293621885167;
    msg.rf_err_y = 0.321725497927;
    msg.rf_err_z = 0.41689838921;
    msg.rf_err_vx = 0.319397036356;
    msg.rf_err_vy = 0.789156787319;
    msg.rf_err_vz = 0.547018951429;
    msg.ss_x = 0.951676503801;
    msg.ss_y = 0.10607483012;
    msg.ss_z = 0.810607682531;
    msg.virt_err_x = 0.788454908926;
    msg.virt_err_y = 0.951374482239;
    msg.virt_err_z = 0.815359751137;

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
    msg.setTimeStamp(0.255612045358);
    msg.setSource(40602U);
    msg.setSourceEntity(208U);
    msg.setDestination(40178U);
    msg.setDestinationEntity(106U);
    msg.timeout = 49019U;
    msg.rpm = 0.856625587905;
    msg.direction = 217U;
    msg.custom.assign("UGACJHNGTVQIWWATPRPSZBOPMKUPAKLMAKZSWLUZKQSUDJVNHNWYYFLRXXGKSASVZAIWZVYXZTBGHDLSXIHFZLDRMFBYOOMSAIJYBWKPRLVDFLKNJVYUCMVDBXHUHICNUHHOKRGMLJBEXFOFEVIPODSRJRFTBYOAQQREQDKTXECUNCPEEPYWELLCCGMMJWCXHORJDMZIDFZGVDGQGMUQEPUSQFETTBCKBTONPZVFJNQNNAA");

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
    msg.setTimeStamp(0.538357472751);
    msg.setSource(6424U);
    msg.setSourceEntity(148U);
    msg.setDestination(48144U);
    msg.setDestinationEntity(77U);
    msg.timeout = 30728U;
    msg.rpm = 0.0976096769414;
    msg.direction = 223U;
    msg.custom.assign("IDFNDRHBCPSCSNQLBIXRWIJWNYSKHOTVGNUDTEZKJHWVCKPTNDLDKXIDSQFPFTDDVVMPKMPPNVMEKESYMFQFDAZFLIXOZQKJNHKUYCXOOCBMZYAGARBCXHYLBRZPLQFZYEVTALNRMMFBBQGUJRHCQMIJAOZWMDPHMQTYKLEVWSEWZJPTPBUESFGISU");

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
    msg.setTimeStamp(0.778963467398);
    msg.setSource(29948U);
    msg.setSourceEntity(118U);
    msg.setDestination(27129U);
    msg.setDestinationEntity(154U);
    msg.timeout = 5818U;
    msg.rpm = 0.0162258196853;
    msg.direction = 170U;
    msg.custom.assign("MBHMWDLILSHTVPAZYKNBHCYEATYJBIDQURQFUWZMMCKLTNEEMYKULDRZOJFIGLGWAXGDLQESFXHZXQFSKKOTOOUNMBUEHXUJAVSGXRAIPJCXCKDIZGGLQRBGGBDIBOFXFAWTVEWPXYYPDOSUVNTMWCCCXNYVVSVKZYMAAFEVVREJEPKLJJPD");

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
    msg.setTimeStamp(0.360204278198);
    msg.setSource(44419U);
    msg.setSourceEntity(63U);
    msg.setDestination(42625U);
    msg.setDestinationEntity(114U);
    msg.formation_name.assign("WRQXEFMBTBTPIHEPURNPEQDTGBRKCOPRRYTLAFWZYIHWESUAHQHIDOCLRWZKLDDJPNIVHLNDPBPKHXZBRRFVIU");
    msg.type = 97U;
    msg.op = 7U;
    msg.group_name.assign("AFVFGANSCIGKARHTVCQHXPYYLIZVMZTHYUEZUNJHNQNQQBCESHNITMGIFTRKWHKMGZLW");
    msg.plan_id.assign("PFLFPXGXJWJIMPTHRRIUGSKEXQCHQVW");
    msg.description.assign("RZBDJKPNZFXWNZLRIDWBWLJKOAPUGJZVHAEMTZCMCJHPBLPRHVOWURVNIPARKECMHYWPAQJKKXYVUSAKQNLNIZDGXEXLQLOYCNFDSDHHJCPCRDQVBBCXMFZNNVGEGSQGSXCUYYYMXOTWTUEQIGXIPTBIDSBETLAPHRXPZALBSWDVCWMWKRJISSQGDHFILAQEIBUAGOZOVUSODJEFKJKHVYSFBUOLTMKWYGGFZUTXFMNTME");
    msg.reference_frame = 38U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 30328U;
    tmp_msg_0.off_x = 0.346995513731;
    tmp_msg_0.off_y = 0.563767132561;
    tmp_msg_0.off_z = 0.50967324293;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.689147086647;
    msg.leader_speed_min = 0.0151313028725;
    msg.leader_speed_max = 0.00142116855096;
    msg.leader_alt_min = 0.794342198615;
    msg.leader_alt_max = 0.844215085334;
    msg.pos_sim_err_lim = 0.199624256596;
    msg.pos_sim_err_wrn = 0.198521230088;
    msg.pos_sim_err_timeout = 4745U;
    msg.converg_max = 0.0630212704821;
    msg.converg_timeout = 39491U;
    msg.comms_timeout = 8601U;
    msg.turb_lim = 0.0471452088771;
    msg.custom.assign("ZSSPGTWAIULNXUFZNZPEDQQCYABYLJKMWGGQICWHMHJVJH");

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
    msg.setTimeStamp(0.521699741046);
    msg.setSource(47045U);
    msg.setSourceEntity(204U);
    msg.setDestination(40285U);
    msg.setDestinationEntity(254U);
    msg.formation_name.assign("OBOZHMYZXUMNLUVFYCGBJGIKOCEWCIMLGPTXNSN");
    msg.type = 85U;
    msg.op = 65U;
    msg.group_name.assign("WGSYEZLVNYBZWRJ");
    msg.plan_id.assign("YNNJMZHUFDGHBUTTEUWPEIPIYWWDRKROOUTVUQHOAOEXYQXRTSBLDOEDSHWVQYEXGMKJRMUJMNRCMHGXJYSCAZRHRTXNVIQLRSVWOUCZTGMNIQXSMZLJTFLDPXLNKGIYTFVBHPESYNWZZBQPLKKYZAQHVAFBNZIBADLKRUUHBKQXZCLWEBDSXJHUZWCFQNIJJKOLBDGMPEFGKKCGJGS");
    msg.description.assign("BSIDBAYFPDOGJAPYZPKFDKWIGHUNEUWZHJMESQUEHDJZWXCCTHNNEMKNCAMIPSQH");
    msg.reference_frame = 97U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 26938U;
    tmp_msg_0.off_x = 0.399216330074;
    tmp_msg_0.off_y = 0.224318685022;
    tmp_msg_0.off_z = 0.586481128526;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.912631319397;
    msg.leader_speed_min = 0.779229703394;
    msg.leader_speed_max = 0.401309751563;
    msg.leader_alt_min = 0.51559188354;
    msg.leader_alt_max = 0.721342099845;
    msg.pos_sim_err_lim = 0.13470050583;
    msg.pos_sim_err_wrn = 0.164628366355;
    msg.pos_sim_err_timeout = 23265U;
    msg.converg_max = 0.151354099827;
    msg.converg_timeout = 51028U;
    msg.comms_timeout = 38117U;
    msg.turb_lim = 0.672021560722;
    msg.custom.assign("GJSWDIWCMJKXCNMLENLUZTZVDGPULZICAORMFEAIONVYGEOSM");

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
    msg.setTimeStamp(0.839071283782);
    msg.setSource(19578U);
    msg.setSourceEntity(184U);
    msg.setDestination(53387U);
    msg.setDestinationEntity(46U);
    msg.formation_name.assign("XDUEZQNSBCBBZJCN");
    msg.type = 9U;
    msg.op = 36U;
    msg.group_name.assign("CKVRAPMFKMVWDLXGMRYJAVKRUSTTZXITB");
    msg.plan_id.assign("SUMUIVRUZRNNYIBHTQREAWCEXUEPCVULHVOLVFBGJCSOBVPSGAOZLGQBMDMZNXVDLLMKOPLBESOKKYEKOIKBORHSPNWTARZTIYQRNXWSKDWWDVIAOKUJYTBFQWHMHACMJKPJPRMRQFDZTDPYEDCXJVDHFAYSLKYKNQJZZYDQTRZXRFYIGXELNCGIACLXOHIVML");
    msg.description.assign("FOQRLBBMDJWBYAIHBAIRWZFETVNRHZKLSQITMGAFJYOPAXFDGEJCCYCSGPLCJFCUAGXEQRDPQFBFSNZIWJRWKMUSVZCJXNUYCHLEJHBOKNBNYAPAZLOMFLMURXXUWEVSHFUVQYWVMHPWPLWPKFDIDMTLOMPJWZRPTGGYNKQXNSWUXYDTOEKGAOXSASDZEBGNLKMZICUYJBHBHHVYLRCNZMIEVSGERRETQQKZITVXINDUHVQOIO");
    msg.reference_frame = 15U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 13272U;
    tmp_msg_0.off_x = 0.904266388663;
    tmp_msg_0.off_y = 0.0722013039563;
    tmp_msg_0.off_z = 0.508773420609;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.051324548395;
    msg.leader_speed_min = 0.147554416686;
    msg.leader_speed_max = 0.707749267318;
    msg.leader_alt_min = 0.990442591859;
    msg.leader_alt_max = 0.444046931293;
    msg.pos_sim_err_lim = 0.694047123969;
    msg.pos_sim_err_wrn = 0.441124679025;
    msg.pos_sim_err_timeout = 27320U;
    msg.converg_max = 0.219317616956;
    msg.converg_timeout = 37695U;
    msg.comms_timeout = 15828U;
    msg.turb_lim = 0.15770149742;
    msg.custom.assign("IAVPZTLAFFHGFXSNXSTZROJIQYUQDXDTDVUWIKCTPUATMGXUUMJLFMKAIQPCONRCLHYGGWQZFHYQBGBGZSIVPYSFNHOHXFROXEALDBPAZDUTYSCSVLZNTJNMYZEBWACSRBJHIUFEXEKASWPYAPTFNKEJOYZEZCBAKIELMHEFUVGGNGRLKJQMDHIWVWBKIBPMBKNOXORSJEXLVOJCMRPDKOHEWRHV");

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
    msg.setTimeStamp(0.64632050855);
    msg.setSource(36524U);
    msg.setSourceEntity(64U);
    msg.setDestination(47818U);
    msg.setDestinationEntity(58U);
    msg.timeout = 41648U;
    msg.lat = 0.663368552594;
    msg.lon = 0.0241684556438;
    msg.z = 0.320051416101;
    msg.z_units = 116U;
    msg.speed = 0.202181687757;
    msg.speed_units = 145U;
    msg.custom.assign("EITYMOBKUUTACMHBOKLWABGZQWCKNLSOCSXOWZJDVIGZOGOHLAWFTYISSDGLNPFERJUXWOGZEGHKRURMUJPIVVYYERMCYNFWJEHML");

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
    msg.setTimeStamp(0.841829948231);
    msg.setSource(52077U);
    msg.setSourceEntity(70U);
    msg.setDestination(16309U);
    msg.setDestinationEntity(137U);
    msg.timeout = 21666U;
    msg.lat = 0.854901627977;
    msg.lon = 0.087649336202;
    msg.z = 0.497873870896;
    msg.z_units = 93U;
    msg.speed = 0.348076756932;
    msg.speed_units = 6U;
    msg.custom.assign("JEBUALLULKMFHICFKOWCHNNCHVFETKPWIDUBVXBSOQBFGOMPLXZGEEEAYSIXIJBYEYKMDNIZUNEYHTVMWBUTSMTCDMDRVGUHMEYVIWEREFJHHVZAJQRWJDHGCDZB");

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
    msg.setTimeStamp(0.753616054247);
    msg.setSource(12536U);
    msg.setSourceEntity(151U);
    msg.setDestination(62656U);
    msg.setDestinationEntity(245U);
    msg.timeout = 3715U;
    msg.lat = 0.677920126112;
    msg.lon = 0.815396109836;
    msg.z = 0.0718808932109;
    msg.z_units = 38U;
    msg.speed = 0.759436328557;
    msg.speed_units = 134U;
    msg.custom.assign("PKYSJNVJSLFMTGRZHJWTGOZVGYYYALAZKIXYNQFGJRVABMZZMOB");

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
    msg.setTimeStamp(0.88140374904);
    msg.setSource(35791U);
    msg.setSourceEntity(49U);
    msg.setDestination(41477U);
    msg.setDestinationEntity(251U);
    msg.timeout = 27371U;
    msg.lat = 0.765250209063;
    msg.lon = 0.137956961641;
    msg.z = 0.778567046997;
    msg.z_units = 74U;
    msg.speed = 0.88014163475;
    msg.speed_units = 126U;
    msg.custom.assign("MCEQKVIQZFOCWFMKVSBHDDTXRZJEVYUAUKQCGGGMUQJADCBGWLNZECTUTGWEDXMUAOHIFYITDWGOA");

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
    msg.setTimeStamp(0.742867132392);
    msg.setSource(49579U);
    msg.setSourceEntity(209U);
    msg.setDestination(24053U);
    msg.setDestinationEntity(57U);
    msg.timeout = 12027U;
    msg.lat = 0.215486742082;
    msg.lon = 0.736751610081;
    msg.z = 0.421955796054;
    msg.z_units = 119U;
    msg.speed = 0.2489695742;
    msg.speed_units = 234U;
    msg.custom.assign("GMCAUACZMRTILWDUTKCZZPHXWFSQUZIYZYPPYOKWEIEVYIWTLYWMSCHSLXOBNPKEHMGIVNYDLLLCUZEGXRXSTFUDROJUNPGUXJBERHLHHKTAVAPXKFGNSKOERLFMLMKFPMJVPJAYWWWEHGTQXFIENZSFBRGCYTSJMDHNCACIBMRHSFOXORKBAOUVLRMNGKDRODSUGJOQ");

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
    msg.setTimeStamp(0.549508320061);
    msg.setSource(14106U);
    msg.setSourceEntity(154U);
    msg.setDestination(3664U);
    msg.setDestinationEntity(22U);
    msg.timeout = 59899U;
    msg.lat = 0.251295990723;
    msg.lon = 0.528034363213;
    msg.z = 0.470712476955;
    msg.z_units = 62U;
    msg.speed = 0.602554493585;
    msg.speed_units = 57U;
    msg.custom.assign("FTQYNEYKTQBSVRNCOZQZRYFXDPXFSHNWJZIKRAQOMJDSNYEIJWIBSUHIFIYCUXWXXPVNWYIDWXGQREGQKDVYHYLRTEGELWZUMUSRGVOTKYLPKROPGZOJALXVPBLAHIMMSVQJOUOGGJBJWEZZOAPTKPSQBBGXNWKAFHHUMMKTUTTSADAEELBWFUXHDPKTLFHBQCSLBCD");

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
    msg.setTimeStamp(0.929148025269);
    msg.setSource(9076U);
    msg.setSourceEntity(242U);
    msg.setDestination(4845U);
    msg.setDestinationEntity(199U);
    msg.arrival_time = 0.704699028252;
    msg.lat = 0.344742169478;
    msg.lon = 0.498318170621;
    msg.z = 0.309768508251;
    msg.z_units = 238U;
    msg.travel_z = 0.671826696571;
    msg.travel_z_units = 136U;
    msg.delayed = 219U;

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
    msg.setTimeStamp(0.0609639468013);
    msg.setSource(45433U);
    msg.setSourceEntity(16U);
    msg.setDestination(44558U);
    msg.setDestinationEntity(17U);
    msg.arrival_time = 0.555248469226;
    msg.lat = 0.740154460553;
    msg.lon = 0.405853341664;
    msg.z = 0.517342787928;
    msg.z_units = 62U;
    msg.travel_z = 0.73352915785;
    msg.travel_z_units = 171U;
    msg.delayed = 95U;

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
    msg.setTimeStamp(0.347908317011);
    msg.setSource(50602U);
    msg.setSourceEntity(149U);
    msg.setDestination(4541U);
    msg.setDestinationEntity(195U);
    msg.arrival_time = 0.447222203799;
    msg.lat = 0.869358464235;
    msg.lon = 0.369200173853;
    msg.z = 0.0114661738073;
    msg.z_units = 206U;
    msg.travel_z = 0.472975872957;
    msg.travel_z_units = 180U;
    msg.delayed = 148U;

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
    msg.setTimeStamp(0.982852149864);
    msg.setSource(34338U);
    msg.setSourceEntity(247U);
    msg.setDestination(61482U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.460182372095;
    msg.lon = 0.0665452588206;
    msg.z = 0.499109263257;
    msg.z_units = 77U;
    msg.speed = 0.928408193689;
    msg.speed_units = 23U;
    msg.bearing = 0.156152544426;
    msg.cross_angle = 0.486890119899;
    msg.width = 0.597710828452;
    msg.length = 0.95109838129;
    msg.coff = 211U;
    msg.angaperture = 0.172105320269;
    msg.range = 19169U;
    msg.overlap = 129U;
    msg.flags = 55U;
    msg.custom.assign("IWDLFUDYEVXQZPVXBKFUHJKSWUZAKELQRAENFUAIXRZJNQBNTKDKDPFHSVYDAVJQNYEVPIWMHBMSMJKWNGZGHRPOBNAFRZR");

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
    msg.setTimeStamp(0.620255236396);
    msg.setSource(15415U);
    msg.setSourceEntity(216U);
    msg.setDestination(9021U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.69446849113;
    msg.lon = 0.92830945151;
    msg.z = 0.98953081401;
    msg.z_units = 243U;
    msg.speed = 0.106033100665;
    msg.speed_units = 16U;
    msg.bearing = 0.911649652632;
    msg.cross_angle = 0.373682518803;
    msg.width = 0.742173894589;
    msg.length = 0.990039447508;
    msg.coff = 250U;
    msg.angaperture = 0.742047894936;
    msg.range = 34368U;
    msg.overlap = 171U;
    msg.flags = 110U;
    msg.custom.assign("NYZCBAAYDLHXAZQXJGEELCZJVFQDCFOLLHYWBMUINSOTXBVJPNOZJGMTCRIILWVQRMCHFGCFWBFJSPIYQBWDOEMNGEIABKRWUG");

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
    msg.setTimeStamp(0.357783392207);
    msg.setSource(35703U);
    msg.setSourceEntity(20U);
    msg.setDestination(30256U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.34255074969;
    msg.lon = 0.219951570695;
    msg.z = 0.328580312049;
    msg.z_units = 249U;
    msg.speed = 0.943278532615;
    msg.speed_units = 73U;
    msg.bearing = 0.588994282567;
    msg.cross_angle = 0.521279530257;
    msg.width = 0.707627279282;
    msg.length = 0.487803983043;
    msg.coff = 175U;
    msg.angaperture = 0.76272064893;
    msg.range = 17778U;
    msg.overlap = 200U;
    msg.flags = 234U;
    msg.custom.assign("GZCRDECMNHGPLQOVJJVDMAMUPAXIZEBOTACNOBEVXYYYJELFZWRNMVIOLONFARYRNUDPEDDATGAQHOCIZECZYSKSXQXKTRCKGHNZLFSMODOQYQGJVINPHOVHTISAAKGLWYEBVVEEQBFWRBXUUWSRVRNJMJLIVAHFYLWBKYJDKIPSX");

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
    msg.setTimeStamp(0.52997152172);
    msg.setSource(40268U);
    msg.setSourceEntity(15U);
    msg.setDestination(16426U);
    msg.setDestinationEntity(184U);
    msg.timeout = 29356U;
    msg.lat = 0.470041460923;
    msg.lon = 0.365247987682;
    msg.z = 0.972078866709;
    msg.z_units = 136U;
    msg.speed = 0.600580205618;
    msg.speed_units = 155U;
    msg.syringe0 = 27U;
    msg.syringe1 = 217U;
    msg.syringe2 = 243U;
    msg.custom.assign("RMPHHVCPXDQXIIYWSPGLLOZMJZXCEGJFTKSAAAWQCYVRDMCUPCIYBTCKOPNGQRTNURBSQJAPIYYVMXEAQUMUNZEEVWGMBRLKZJBKDPMBYHFTDGJMZBCOPUWITUHOWISVEBEFQLHTDEKBQAVKSEJYKFHNOCDO");

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
    msg.setTimeStamp(0.46974445857);
    msg.setSource(9159U);
    msg.setSourceEntity(247U);
    msg.setDestination(33578U);
    msg.setDestinationEntity(47U);
    msg.timeout = 53734U;
    msg.lat = 0.464605066628;
    msg.lon = 0.502373269364;
    msg.z = 0.350890164231;
    msg.z_units = 31U;
    msg.speed = 0.585819297499;
    msg.speed_units = 138U;
    msg.syringe0 = 109U;
    msg.syringe1 = 144U;
    msg.syringe2 = 179U;
    msg.custom.assign("APTFIQWSTTILITIPCZQNPDTCWGBWSHBEFHPQNTHXUYUZINGLFJWAJIOOJGFNMWHZAMRNSPAQRMKMRKWYDJRUUEHXQAQRFVXSDRZTCZHUHTWOPHKEOLBLRUXWZCYLDBNGKCNLSLDACJXEFL");

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
    msg.setTimeStamp(0.0104466707107);
    msg.setSource(51950U);
    msg.setSourceEntity(101U);
    msg.setDestination(38990U);
    msg.setDestinationEntity(203U);
    msg.timeout = 48877U;
    msg.lat = 0.0963472204181;
    msg.lon = 0.932386120051;
    msg.z = 0.157807879193;
    msg.z_units = 27U;
    msg.speed = 0.462772002801;
    msg.speed_units = 23U;
    msg.syringe0 = 26U;
    msg.syringe1 = 135U;
    msg.syringe2 = 195U;
    msg.custom.assign("VXSEIIJMMORIA");

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
    msg.setTimeStamp(0.658062909112);
    msg.setSource(23541U);
    msg.setSourceEntity(158U);
    msg.setDestination(15924U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.285836009427);
    msg.setSource(52813U);
    msg.setSourceEntity(194U);
    msg.setDestination(59843U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.282939482094);
    msg.setSource(39626U);
    msg.setSourceEntity(150U);
    msg.setDestination(25003U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.381637880491);
    msg.setSource(52749U);
    msg.setSourceEntity(148U);
    msg.setDestination(17907U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.303523157398;
    msg.lon = 0.499543454309;
    msg.z = 0.221057501858;
    msg.z_units = 254U;
    msg.speed = 0.514180055203;
    msg.speed_units = 121U;
    msg.takeoff_pitch = 0.598708442789;
    msg.custom.assign("PEJIIUAWSJHPZPHLGFEYZARAKWEDOOBJYCDNNPKOPATXEVYQQHVWYREGTLCXCGMTGDQAKBVLDJIDPMCHWCCDRAFVKLJZUOLFLEBFLEXZRRAGYKSPDIWPQWCFETWMIENBSJWWZXHICKIQKSJLNUTVNKXAEMVZUWAIGFTVFUSJCPTSMQBOLRCIMHTNBZHSIONDGNXRBHLDFBQYSSHGSNJXMOG");

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
    msg.setTimeStamp(0.425110617549);
    msg.setSource(26355U);
    msg.setSourceEntity(89U);
    msg.setDestination(37965U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.312769446139;
    msg.lon = 0.980936978485;
    msg.z = 0.508115038024;
    msg.z_units = 253U;
    msg.speed = 0.896565706758;
    msg.speed_units = 106U;
    msg.takeoff_pitch = 0.951252912472;
    msg.custom.assign("PAMJRCSPDJOGHLBVQSUXLOMEEBMEIJIFTJUYZXWHTPVKQBVPNPKBQLZKKGSOWTRKSZFDHHONNOEYCXTBRUIYCPVTZQDPGULFKHUDBVWRGFUQZTXWYDYSGZYGNFWHOZNJRDLCTORYLVIRSNVWGCIOQFVXXUDPEFZBKHEVMHXAMISQADBLYXQMEJJORWBIANCCKCMUFL");

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
    msg.setTimeStamp(0.26224939886);
    msg.setSource(19687U);
    msg.setSourceEntity(227U);
    msg.setDestination(51825U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.0213139568313;
    msg.lon = 0.352144799966;
    msg.z = 0.392350141515;
    msg.z_units = 102U;
    msg.speed = 0.543854988852;
    msg.speed_units = 99U;
    msg.takeoff_pitch = 0.208544595862;
    msg.custom.assign("UJVIENUSUYGHHCJVFIBKHQUHTQRCEFNHPXYCHEFGLZIXBKKCNYWBWVAEMWRKOLJSWXATWHIBETNP");

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
    msg.setTimeStamp(0.64442548828);
    msg.setSource(36597U);
    msg.setSourceEntity(180U);
    msg.setDestination(38072U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.915593154754;
    msg.lon = 0.694183031354;
    msg.z = 0.425242598057;
    msg.z_units = 195U;
    msg.speed = 0.999377248492;
    msg.speed_units = 88U;
    msg.abort_z = 0.960792221501;
    msg.bearing = 0.035221952925;
    msg.glide_slope = 17U;
    msg.glide_slope_alt = 0.864593194565;
    msg.custom.assign("YUQVMKCHSAMWEULHYUUFXYSHVZINGRXVHMNZPAQBERRHGYMSHOKTQDXLIFVINMNNILFKZNWEGEGFFPDAJRIZKDPCTVXQEWIAYXOSFQGFJJYPBRDYAUNOYDPZQPDITTXLSIPKSJYOPDDBOJIWTDZHJCBCCJJRWLPWUHTFLWKOMQN");

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
    msg.setTimeStamp(0.665393924462);
    msg.setSource(1818U);
    msg.setSourceEntity(33U);
    msg.setDestination(47551U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.106157775978;
    msg.lon = 0.557323997015;
    msg.z = 0.813773637298;
    msg.z_units = 30U;
    msg.speed = 0.215160302465;
    msg.speed_units = 38U;
    msg.abort_z = 0.0700236011867;
    msg.bearing = 0.467274471543;
    msg.glide_slope = 35U;
    msg.glide_slope_alt = 0.744311987013;
    msg.custom.assign("LOUHVPLMLZVLCFNQRRJEYDBZIAROCLKGSVMZTJLHYTQCZOHVWXQIPCAAKJYPDOPVIFMSERORFCGKBQMKACASIZTJGMSLTQTNJWNWQINJTFXHIULRSHXESJUGNHUQVI");

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
    msg.setTimeStamp(0.902466647782);
    msg.setSource(19831U);
    msg.setSourceEntity(140U);
    msg.setDestination(41687U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.207259287507;
    msg.lon = 0.0629074427189;
    msg.z = 0.645643779468;
    msg.z_units = 242U;
    msg.speed = 0.608304564585;
    msg.speed_units = 194U;
    msg.abort_z = 0.760134977286;
    msg.bearing = 0.847880307018;
    msg.glide_slope = 86U;
    msg.glide_slope_alt = 0.414157795628;
    msg.custom.assign("MBNBDAKAHPYAQWJYEEJPZDKPAUOUZ");

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
    msg.setTimeStamp(0.822079234133);
    msg.setSource(61914U);
    msg.setSourceEntity(141U);
    msg.setDestination(38266U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.247809530104;
    msg.lon = 0.789203398605;
    msg.speed = 0.174212030629;
    msg.speed_units = 33U;
    msg.limits = 116U;
    msg.max_depth = 0.684431568126;
    msg.min_alt = 0.699560223842;
    msg.time_limit = 0.69828506323;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.393967297598;
    tmp_msg_0.lon = 0.863813882252;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("FOZPQBUWGBKJJVTENPCGOALGNQXTVRJURJWXRJDLLSCDFLJGIWIGGOTNOCICHSOZXZZKXSCWZNMDBKDBRDPZWXCXXARCIGNTAJIKBILVEYDHNPVJHDMPVMZATBATAYFHVEUSQBVSFFKHELBSBQPYAXTHIYIY");
    msg.custom.assign("EINHYUGPYBFFVJMMRXCNVOHSMAQNOPYALWCNOWQJPKYKDJSKUQFVKBDTEALIDOLJUXNLWHQOPLYQBPAWXLRAVSVUTXPEUJQJABVKQDSKZXHHSBPLZDQRAPMNHURTWZYCMGFDWZNOIGEBYJZORUZJTHMFCDABFICMTIRAOBKPCEBCFKNCZXNGRMDWGQBGEXWIIWMXRHSREHNGJFLU");

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
    msg.setTimeStamp(0.267336624453);
    msg.setSource(45814U);
    msg.setSourceEntity(178U);
    msg.setDestination(52542U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.409683070821;
    msg.lon = 0.277280607234;
    msg.speed = 0.303775731187;
    msg.speed_units = 193U;
    msg.limits = 96U;
    msg.max_depth = 0.736171436762;
    msg.min_alt = 0.489913996007;
    msg.time_limit = 0.75708065782;
    msg.controller.assign("IVYOSCQOKSKBIKRCNNOWGDODDLZZAEYBYRIKSVHCHKIMCZOSAATPQFMPMHUWBELIRKHLVENQNYMHHFEXRANAZTJFKBKWJGNVMUTSQIFOLUFYMCLPPHJASEZFMRSLWUVKMTWUYHVNFVUPJZSUPOYQCARCUJGGTF");
    msg.custom.assign("OTKSLNTYBRLODGVXKNFFYVIPDPMWKJONZSYNSAHNWWJHQFXLLAOWCXTGZRJHKERKUBJKJAVXJKUHIOWIUGNVGLLQOHFBTZYUXIAMBNYGCMPBMMGYRIQHHPINBIMWVRUUSPWFQKBQFMVYGTADDSJRTCFQTNZHOVVCVLAHQBXFMPAC");

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
    msg.setTimeStamp(0.951759712643);
    msg.setSource(54121U);
    msg.setSourceEntity(118U);
    msg.setDestination(64589U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.369238226404;
    msg.lon = 0.0144194947948;
    msg.speed = 0.88029534817;
    msg.speed_units = 65U;
    msg.limits = 80U;
    msg.max_depth = 0.0353950728431;
    msg.min_alt = 0.956998659763;
    msg.time_limit = 0.684168498428;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.242077099415;
    tmp_msg_0.lon = 0.0092232897646;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("YNPEZIZWXTLWOAIUADXUICSTJHZXIAXQJARMQUHPKJPDOYCESPNLHOSNBVICRZSCUGQM");
    msg.custom.assign("GUUSBIGBBBLCIQDDEZLRWBLZOZQMMBHFATYBPIEWECFIDVJFKJLNXQHTWAXJIRCROWPOCJKGGXIGNLNOOZVHTBTYRDUFMUKJCFQADUHCNYPIQRWUVJHSAUCLSQHTHRJUXVZMYVFNZRRXYKGOVHUSYTESGQWJLYLXLDZRAVOMRECOPNAJZXKKSEKMDAWMFFPGTPICPAKDCYIMMWI");

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
    msg.setTimeStamp(0.625075138091);
    msg.setSource(13441U);
    msg.setSourceEntity(70U);
    msg.setDestination(10582U);
    msg.setDestinationEntity(60U);
    msg.target.assign("BHXRKXVRWVTLCJVCPIDFFGSOPSJJTBRTILYGBAJFPUGK");
    msg.max_speed = 0.889620003914;
    msg.speed_units = 148U;
    msg.lat = 0.176291235463;
    msg.lon = 0.316941993587;
    msg.z = 0.482537692984;
    msg.z_units = 93U;
    msg.custom.assign("UFKKJWMRQBZPRDOGUIMVWSFQBTSVPOJXAHQZHWLICQUXWXKXFQCMKVKODKZHEWXDYTLQIJTVAPAERAFALYXGCESCVIQOILMEFTGOUZQIJGHNFBRVBZLNSMVASRDLXH");

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
    msg.setTimeStamp(0.456451336033);
    msg.setSource(36695U);
    msg.setSourceEntity(224U);
    msg.setDestination(15111U);
    msg.setDestinationEntity(118U);
    msg.target.assign("JHHLFAASDNRDLSLEGKIVCNLMVRXKACQBFBXWRLELJDOBFIDBSCWUSKBSGGIJYPIDSTTARVTN");
    msg.max_speed = 0.11489004362;
    msg.speed_units = 163U;
    msg.lat = 0.93640915667;
    msg.lon = 0.618942769103;
    msg.z = 0.361236708207;
    msg.z_units = 159U;
    msg.custom.assign("JWMXRJCUEPMFHPEEDSWOQAQYNGYTKPDFAZIHRSLXPRCLEFEWFOZQIETHSOSBKMWNKGVGNUUHCTXXBAWHQOZNDYKAHYCZUMLOFEBZYLJOJGALXQOLTFGULNYIMBHMIWUCKPEBNDVRNPRJGVTTCWYZHITKRRRAKQVUJMTVCNBSVBCTWDSAIRZZPSHGPLTZDLZRKSVUCSFWDXIABNJPYVEFXMADCBODMBKN");

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
    msg.setTimeStamp(0.639565883346);
    msg.setSource(9969U);
    msg.setSourceEntity(29U);
    msg.setDestination(10742U);
    msg.setDestinationEntity(72U);
    msg.target.assign("QOFDOOKWLBNOAWQWHNLZCMHXCAVRBSNCFEYOORVJSVBCSOREMSQFHGYFPD");
    msg.max_speed = 0.287380978308;
    msg.speed_units = 97U;
    msg.lat = 0.230994485772;
    msg.lon = 0.837466849041;
    msg.z = 0.518035264103;
    msg.z_units = 104U;
    msg.custom.assign("EVUNTIUHATOHKRLPBSZFLNGKSGMDCYVPFHDLKPKJBTRQZCUVPAWCRTSRXNVQABQWNKACPLCUSJYFLUMBRHKLFDWIOUMTKHDEJCEBGTYEDAZTROZGVQASIDWLIIISWYZNGLETGBZPQIEIMFHAZVUEQOJJTCYUTFJZSORFODXHDSNBYNQVBAWZIXGRFUOQSKFMYXXREXVYZCAORKMWGWMOLIUMQJQBXXEAPGXWEJHPNGMMVOHWPYCKDLPB");

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
    msg.setTimeStamp(0.908463599233);
    msg.setSource(31427U);
    msg.setSourceEntity(61U);
    msg.setDestination(27578U);
    msg.setDestinationEntity(202U);
    msg.timeout = 18068U;
    msg.lat = 0.562714363731;
    msg.lon = 0.261544087925;
    msg.speed = 0.860117050843;
    msg.speed_units = 41U;
    msg.custom.assign("GZNWDHATFTBHBBETFQDCJTEZDFCOORXVICTPDCRACKUSHZMNKLXEQRGAVLGOKMYSSSWVEAERDLNVPSIUXHMLRZVWLOWZXMKRJDDKDRYCOCIYWVXWSSJMCLFXGGRCBYLOJYGTNOQEFXZMLYNCGJUHFGTJDZMAQOZWBTPBKX");

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
    msg.setTimeStamp(0.31943641955);
    msg.setSource(37169U);
    msg.setSourceEntity(133U);
    msg.setDestination(15182U);
    msg.setDestinationEntity(143U);
    msg.timeout = 57873U;
    msg.lat = 0.880513278306;
    msg.lon = 0.869679518077;
    msg.speed = 0.115188980126;
    msg.speed_units = 245U;
    msg.custom.assign("FGOISLKCZWWBAMFKSJKISAYQZNCZUPPJFXPRXMDGQYGOMYBJGQPUDAZTWBGCCCBVABVGYEMIIVWPNXQEONHYAPSEQBKYSNFKZOMHOKUDNZSTSIYJLTLADLTGNGWSPVVDKMRCWHTWTLEFRFBDFTNHN");

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
    msg.setTimeStamp(0.465116356077);
    msg.setSource(26164U);
    msg.setSourceEntity(59U);
    msg.setDestination(63550U);
    msg.setDestinationEntity(100U);
    msg.timeout = 17341U;
    msg.lat = 0.779286576054;
    msg.lon = 0.0892161330309;
    msg.speed = 0.442187596687;
    msg.speed_units = 137U;
    msg.custom.assign("WBRCDFPQCOKQDLMLSAHPFNNYKVZSFTADCTSXFQEVUQWVSGIBSUPJQUPIXZTVOIRRJDMQWNMLVAMYAFYLKUQJYZVVZKFAGZZDNJYFGCBFWQGVAUMUENFNYVGZKTOXGJEPZIHJUSMIKRJOCWJRHODNXYWEBBXSIDKZKWXCRCWCBUZUSELYHHLBBFTTHJTOX");

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
    msg.setTimeStamp(0.838124649115);
    msg.setSource(38210U);
    msg.setSourceEntity(180U);
    msg.setDestination(58376U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.326211970474;
    msg.lon = 0.458779627703;
    msg.z = 0.376194285006;
    msg.z_units = 117U;
    msg.radius = 0.550307917253;
    msg.duration = 2441U;
    msg.speed = 0.192821063256;
    msg.speed_units = 74U;
    msg.popup_period = 64551U;
    msg.popup_duration = 39509U;
    msg.flags = 51U;
    msg.custom.assign("VUXJZKYOQGTSUUPFVBJVWOIKIFQOSBZZTYYHXJLWZAEDCJSRKPGMKZCSUQHXNLRHLTSATFATCDHARHGHFCXLPZVQDXLWIDYRUIPOJGUZQYKUFMSMDDSOOUSOAFVGWRJN");

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
    msg.setTimeStamp(0.881756004595);
    msg.setSource(50214U);
    msg.setSourceEntity(167U);
    msg.setDestination(40495U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.38169994007;
    msg.lon = 0.31007676952;
    msg.z = 0.867570442784;
    msg.z_units = 216U;
    msg.radius = 0.599842069892;
    msg.duration = 42381U;
    msg.speed = 0.635000631913;
    msg.speed_units = 221U;
    msg.popup_period = 26291U;
    msg.popup_duration = 16643U;
    msg.flags = 66U;
    msg.custom.assign("DXBYDNMEEFORAZQLZLUWKRQKHHFTWEREESFAEWSAVKCPIURJCWWHKEJYTYFUGTUNZPVNRWDDMYKAZIODPHXJVBCFGQGHKFYQJBIQZBSTRJEXYMHSZEUVCOFPINMTCTKNTQNRGPBDIAQYYSQUVSCTXSTJGGXNIGPDAMLVVQXOLSHLOGZUQFXMOBATJYBJRVVBMZYXZKA");

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
    msg.setTimeStamp(0.864450027102);
    msg.setSource(59471U);
    msg.setSourceEntity(195U);
    msg.setDestination(5312U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.0926093833577;
    msg.lon = 0.669911701218;
    msg.z = 0.321613606232;
    msg.z_units = 49U;
    msg.radius = 0.568835608103;
    msg.duration = 16646U;
    msg.speed = 0.720450041518;
    msg.speed_units = 20U;
    msg.popup_period = 37273U;
    msg.popup_duration = 23725U;
    msg.flags = 210U;
    msg.custom.assign("ZUGEGPJIXKEOHXWHFJKEYSGZOSBIVJOTQLYAOYRADNUVWHQHCDEMIRZMVVEBFUYFRSITZFPDSNFMIKCEOBZQZCPNCNGHLINLHNXARYUWHAQLOPLJPVGPDQOFRDRWACLSQKMRORTKYGKASDHOTDYSVTVBPQXBCUKFTCTRYULLCM");

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
    msg.setTimeStamp(0.912015346423);
    msg.setSource(30526U);
    msg.setSourceEntity(205U);
    msg.setDestination(62466U);
    msg.setDestinationEntity(118U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("JIQEPRISQDLGTEQWNMDPKLFPZEUUMQKAFBRSEXMXOSITJZSZRWTGFGJCAXWVLLQGNKN");
    IMC::StationKeeping tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.592369770333;
    tmp_tmp_msg_0_0.lon = 0.841269606298;
    tmp_tmp_msg_0_0.z = 0.786246693975;
    tmp_tmp_msg_0_0.z_units = 225U;
    tmp_tmp_msg_0_0.radius = 0.0706995294307;
    tmp_tmp_msg_0_0.duration = 60167U;
    tmp_tmp_msg_0_0.speed = 0.280837064519;
    tmp_tmp_msg_0_0.speed_units = 176U;
    tmp_tmp_msg_0_0.popup_period = 24663U;
    tmp_tmp_msg_0_0.popup_duration = 64462U;
    tmp_tmp_msg_0_0.flags = 62U;
    tmp_tmp_msg_0_0.custom.assign("VXBHIEOLMYDURENBSDBHTQEJDSOBDOHYPOTCSWUPKINKAJYJDIDCMMQRLNZHCJWBTGVKRMCXSRTMAPJZYJEHKTWOKIYLTLPZKFVJXVFFDSLQGAYPUTNSLKKSIPESGQHWZMECIMGXNCOJAFXOBUFFAXUARWWVXGDPHHCYPQRACUMGQUGGRQPHWTZVIRLUQEEIASUTZBKXWVJVXWMTBOQZYIAPNXLBQKDEENJGNZVDFYGFBCSLRYWLMORUI");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::UamRxRange tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.seq = 6481U;
    tmp_tmp_msg_0_1.sys.assign("GJPWUESHGJIDQZPWVBFUNWCTLKFLZYATDHTMVDPNSCJKDTZGGHOMEOVJAOIBNTIDYSOJBPQJOTKHZXEKXGWBCXRCBSTCBDDVANRSCFVFZXVFURRJIHYYTLEPFQKBQVLHBR");
    tmp_tmp_msg_0_1.value = 0.448663111586;
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
    msg.setTimeStamp(0.426948018705);
    msg.setSource(33614U);
    msg.setSourceEntity(134U);
    msg.setDestination(40773U);
    msg.setDestinationEntity(75U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("MZQKHGCPDBDPDSGVFSPAHNXHDVKACZRBSVUOLWHIAAEQCYUTPLOIPIMTZXTJMCVPAXG");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.591701994021;
    tmp_tmp_msg_0_0.lon = 0.48441822633;
    tmp_tmp_msg_0_0.z = 0.299475730653;
    tmp_tmp_msg_0_0.z_units = 135U;
    tmp_tmp_msg_0_0.speed = 0.809913960975;
    tmp_tmp_msg_0_0.speed_units = 26U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.484005872612;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.169961235584;
    tmp_tmp_msg_0_0.polygon.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("ZLWVPKPXUGBVTLZHXXBMPMFMRSQFVEKUAHRQKUGNCIWETZTMNLCLAIJYHENXIZKKKOCJVOMSJDBNHNGAQQSGANIIUBFBPHZDQWTRNCEMYQPWJCYTOEVSFNUAFRKRSIAQJIIJDZTOLNDPYEJDVXVLURXBA");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DesiredRoll tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.83459195892;
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
    msg.setTimeStamp(0.258839354046);
    msg.setSource(60459U);
    msg.setSourceEntity(210U);
    msg.setDestination(16850U);
    msg.setDestinationEntity(35U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("VNTXIBWKCHIBOTJGSNFIWIBXSQOIEUBYRMZYJYFAWEZGVMNVDPESNTHOLREVISTTURWRLDYJKKZBZWHYUDEFAFRXMCPXBRHGWXNRAHSKSFJLZGOQHWSOROFHMDNZYOLVYFAPRQVMUUMCGQNKGPJAMVIQBZCGRPINJDGKXHDTCFXDJCHZPSWKQAJQXY");
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredThrottle tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.822867788706;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 51485U;
    tmp_tmp_msg_0_0.custom.assign("AASUQCYMBAUITBWTQGSVQNOLJRZBTZXSLHDZRDPGPVXKIRZBYDFUJBDLXGGFHHHEWMIVUIWFWPRPVADNZTMMNHYNPRADEJCXLZCJTUIJQDOGWTQWHKJNDQOGTVEBZPBVERYNXEKYYKKLZYCFOTXIFLUVCWILMFWUGOLLJKSNRLYNOSZMCHRJIPTPBEDSUDRVPE");
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
    msg.setTimeStamp(0.225081363034);
    msg.setSource(59021U);
    msg.setSourceEntity(0U);
    msg.setDestination(43986U);
    msg.setDestinationEntity(51U);
    msg.timeout = 19825U;
    msg.lat = 0.0336677906975;
    msg.lon = 0.734210591893;
    msg.z = 0.750443306914;
    msg.z_units = 48U;
    msg.speed = 0.351354514076;
    msg.speed_units = 234U;
    msg.bearing = 0.818837369313;
    msg.width = 0.314603781004;
    msg.direction = 115U;
    msg.custom.assign("WBBPHECIEVRSGWVHFEJSYPUECBIRUW");

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
    msg.setTimeStamp(0.564095353701);
    msg.setSource(7794U);
    msg.setSourceEntity(234U);
    msg.setDestination(10186U);
    msg.setDestinationEntity(216U);
    msg.timeout = 20070U;
    msg.lat = 0.564086297697;
    msg.lon = 0.974083299959;
    msg.z = 0.446021636772;
    msg.z_units = 78U;
    msg.speed = 0.546596583261;
    msg.speed_units = 17U;
    msg.bearing = 0.577571308479;
    msg.width = 0.567001561681;
    msg.direction = 29U;
    msg.custom.assign("PQGVVUJEBPPXJNXUKTDDQJMOTSRGVHQFIEMKUHFDDCDDTLWISACRIMPCDPEVYXOSQMWJZBABPCSBASUYWFXDIWXYYRYSQVEIGFYSRYRWXBSW");

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
    msg.setTimeStamp(0.683552306574);
    msg.setSource(58708U);
    msg.setSourceEntity(233U);
    msg.setDestination(50826U);
    msg.setDestinationEntity(23U);
    msg.timeout = 16346U;
    msg.lat = 0.566909238311;
    msg.lon = 0.329999196416;
    msg.z = 0.405727023064;
    msg.z_units = 117U;
    msg.speed = 0.438387389491;
    msg.speed_units = 249U;
    msg.bearing = 0.368696827223;
    msg.width = 0.342919937463;
    msg.direction = 134U;
    msg.custom.assign("MOJCDSPLKZYORATONYOEUQSGBGPIZQGFEYSXWCLNQSWYNWGIOCNFHHDPLJWFOAQZPUNTFBAFKBGJYYPWTBUSXBMCRCHFKRSIQDKZJARPAZDUWMDSXIPMQTKUTBXCHHNKKEMPYDRTWEEDQXIDRRFSZ");

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
    msg.setTimeStamp(0.243724691558);
    msg.setSource(58052U);
    msg.setSourceEntity(85U);
    msg.setDestination(13612U);
    msg.setDestinationEntity(84U);
    msg.op_mode = 2U;
    msg.error_count = 136U;
    msg.error_ents.assign("CMJJAOHLSVSQXMQNQHAJBEPEOIHPULVHCVORPPWTNHKBDQAGKJMMWFKYAVFSIPIKTDYFJMTYKHNIICSUNXDASJZRE");
    msg.maneuver_type = 61851U;
    msg.maneuver_stime = 0.67452542118;
    msg.maneuver_eta = 6866U;
    msg.control_loops = 2371099587U;
    msg.flags = 92U;
    msg.last_error.assign("BNLEHGBSRHSPVXYEMUAURMFHDDKTYMKBIEDVBKLJUKEEOKANMZWURBDZPAAEQZBGO");
    msg.last_error_time = 0.50541059497;

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
    msg.setTimeStamp(0.485700444568);
    msg.setSource(14292U);
    msg.setSourceEntity(150U);
    msg.setDestination(46217U);
    msg.setDestinationEntity(64U);
    msg.op_mode = 48U;
    msg.error_count = 116U;
    msg.error_ents.assign("EFWTAKVJSJQNFQIJCBZSYWTCFIQMIAHCXFMZGGJLNARFXVIHGZQWTAEBTVNEEWDKIAJNCBWUROLQKMRVBSDYVINYIAULYZGAPCQBTGGFJJYLDEHTUAIWVWBZVVTNGMEAHLMKDSHNDJDPEQKMPUZFOQRWCTXGOSWJXRLHYXKBVSEZCJKWXVRCHSZMZESUNLKHPOODSMYBPRBBPL");
    msg.maneuver_type = 46299U;
    msg.maneuver_stime = 0.856934585248;
    msg.maneuver_eta = 31490U;
    msg.control_loops = 3709728958U;
    msg.flags = 165U;
    msg.last_error.assign("EVCHRVTAUCOPIXKYEKGSIBMVRQBDXXUJNQDFMOPLHGHBZKDRGZXCYOMCKKOIJWTDZMAFIHTLKZPRUNQASUWNXGZWZRTJSZANLEOJNYRMSMW");
    msg.last_error_time = 0.626420725208;

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
    msg.setTimeStamp(0.521049438429);
    msg.setSource(50407U);
    msg.setSourceEntity(172U);
    msg.setDestination(12306U);
    msg.setDestinationEntity(147U);
    msg.op_mode = 26U;
    msg.error_count = 170U;
    msg.error_ents.assign("LKDBBCUGYREROKTSAZQCIFRXQDPMWYDQGFXVFAMRBWEGKSJSNFLHZQWVHJYZXPKYIAOMCMPTHCACKYWFACTVHQCJZBBCVSDDCIWJYUDHVIMVE");
    msg.maneuver_type = 59021U;
    msg.maneuver_stime = 0.788755120933;
    msg.maneuver_eta = 39105U;
    msg.control_loops = 2438077408U;
    msg.flags = 175U;
    msg.last_error.assign("UBCDJUURIAGOURGXSNMGEUZJWLHQAPODTVTXDNMYUSHZBRXOAFHVSOONFHLQXCIAWLKETZVYDOJCOMFFWWHGTQNKRKITZIJPYWFPOJINNSBFOCLRWBBKYXYJKPLZHLSDATMTVYPHBDVEZASQNYCGQAZXUTIUGKVSVFNWULEFKFCQRIMDPJXKJBLROBYRUEZMPDNXQBZEHGMZCESJCVPKDWTQSIVAQEWLNCIXLGYAPPFM");
    msg.last_error_time = 0.828002769744;

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
    msg.setTimeStamp(0.311050135292);
    msg.setSource(60268U);
    msg.setSourceEntity(252U);
    msg.setDestination(17611U);
    msg.setDestinationEntity(168U);
    msg.type = 19U;
    msg.request_id = 44053U;
    msg.command = 76U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 39525U;
    tmp_msg_0.lat = 0.172041001342;
    tmp_msg_0.lon = 0.112636707217;
    tmp_msg_0.speed = 0.0511585154795;
    tmp_msg_0.speed_units = 112U;
    tmp_msg_0.custom.assign("HZUTFTKXOXHALTWIXYKYWSWRGLGNBTZIVGGHEQAESCYRZNYTDDACKIAOWJLYEMPCCPPNQPJRTYWBVAYKOTSGWPCJMFGFBAPBQCMALQDPFLMBDQMVDNOQGFVWXAPISUCSML");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 11669U;
    msg.info.assign("UAZHTJJYSVKWOWGPNUBEMJQEMDPLNUVNHKLHBAREFAO");

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
    msg.setTimeStamp(0.00825185000516);
    msg.setSource(56485U);
    msg.setSourceEntity(107U);
    msg.setDestination(38817U);
    msg.setDestinationEntity(200U);
    msg.type = 251U;
    msg.request_id = 15562U;
    msg.command = 225U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 54814U;
    tmp_msg_0.lat = 0.79709487281;
    tmp_msg_0.lon = 0.17424913906;
    tmp_msg_0.z = 0.0206933484315;
    tmp_msg_0.z_units = 85U;
    tmp_msg_0.speed = 0.192646343338;
    tmp_msg_0.speed_units = 43U;
    tmp_msg_0.custom.assign("GBWLAWAQBEUGSZWFILDGPVLUNBAFCHJAQGACFDOCSPEVNSXBVDPZNWEIRIXUINFHSIHNNRTAMUMTUEFDPQBVDIKNKRMOQDGKDRCJKOWFGPGUZSOIRZXTOYYXLGDTDFHN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27749U;
    msg.info.assign("IKSVZFYMKWBPRUJEALOWNMVKBBRLNRNJMCYDEGBRWPQZUVMAVYFDUBCQQOPQITSJCCXPJQJSKHJVFJTTMPFXYTUEOFKDLPEUCHPYJNTDGLCCWSGEZVAZHESUNNLWLDKZZTKJDXKIXLIVDHWEVMMBXRWCYBBYBZMTPWOEFAHQNOHZDOLBCZAHTHZWSEQPODGXXEVHWRIIXIISOVRGSQLKGSOGIPFFGAMQMYNUOFNRJYUTAXG");

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
    msg.setTimeStamp(0.894675834855);
    msg.setSource(20213U);
    msg.setSourceEntity(120U);
    msg.setDestination(23933U);
    msg.setDestinationEntity(111U);
    msg.type = 239U;
    msg.request_id = 4679U;
    msg.command = 153U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 60572U;
    tmp_msg_0.name.assign("JGDEKBWZFICKMYWHRDJUTNIBEQODTPNVK");
    tmp_msg_0.custom.assign("QHGKBFSYTNPISJTURZTLIOHHXDIWXGAZODPESLYGXRRYBGWQKSMKYCNAXSPZUWDDRSKBTAZXAFEPLLCQLISMXUWYWDJKBQPHABVCRSMEZQYFAJNFQHYECXJQCEVFKCIDUCCFBXRHJVTGOJKOJCOPOAIMXRYNPKJNDVCZFYWMODTXZMUBNW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 20970U;
    msg.info.assign("HJSEJCYLGQIVVUBHQMMNDAFKCDWVCIYINWDACHCPSOKTRJSWFKAPPQDSZCRGEDGLEVFAFXOXHZUPTXYYFHKHTBKAUBRMI");

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
    msg.setTimeStamp(0.105027738417);
    msg.setSource(40744U);
    msg.setSourceEntity(82U);
    msg.setDestination(22688U);
    msg.setDestinationEntity(33U);
    msg.command = 178U;
    msg.entities.assign("XHVZNDTTOGZFGTHJGZLKMJNCYKYSADDMYGZGPPFCUMDJCHIIIQWMXXXREAUBUXBKBWVBIPQPAQKSYQWOECWKLAOBKCOLOUHLKBLNPJMCEGZVQXGRTANDRYXNRHTBSERLEFZSLSQAHPYM");

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
    msg.setTimeStamp(0.793487562437);
    msg.setSource(52962U);
    msg.setSourceEntity(123U);
    msg.setDestination(56837U);
    msg.setDestinationEntity(180U);
    msg.command = 186U;
    msg.entities.assign("DXZBTXMATHGAGMNYPTNJPWLCBFCZQEJNKPELMOUIWHOULMGLFJYIOYPAHAGHSHKFWRJLYZZJOOAXOXDBLFHCTBJAQCCMFKQCEQKUVIYIKFJIUVZGXRRVDXOQRUSCPODWOTHGCJMTRSSWBLFIOZKHRZXIFSBPN");

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
    msg.setTimeStamp(0.0789058856709);
    msg.setSource(49844U);
    msg.setSourceEntity(112U);
    msg.setDestination(28687U);
    msg.setDestinationEntity(7U);
    msg.command = 178U;
    msg.entities.assign("MKUODPKEDJULQXNOBULJJYZWLAIFEGVSYPNNGTOEMDCNBDNXSTORBPHPRKYVXCOBCAVKORNJYCZMPFEBBHQKPCUMIRPGMZFUXKJLUYAIMYWYLSXTSMYQGLIZGSVWIPBDIJMJQADAFDG");

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
    msg.setTimeStamp(0.458302680069);
    msg.setSource(42378U);
    msg.setSourceEntity(205U);
    msg.setDestination(24628U);
    msg.setDestinationEntity(95U);
    msg.mcount = 126U;
    msg.mnames.assign("RVCPHEJKLNUWUVEBQLECCOEWYWNGQMGYKYLYWUWNPXGGGSCIXVVATLGZKTPOXDWABWBPXDZAKFMGBWRHEHNKUDCRHFYXIIBIRTJVFBSLMHSYVEVTQIDIFEAVZQXHIDTSRTPJQMRJRSHUAFZBCMSJZMWMUDGNZZODOPLCJIYXALQCZMUXCNATOQDFKYAOOIXFSPSJTJHLYNHCOPHLSBEUFYQME");
    msg.ecount = 190U;
    msg.enames.assign("EOBDZDSUMHZWEMDXJKDVWYJWAYFMOKRDBFYJVZEGPELNRCTXKIBWNOVBCRWSHKNOUUBQNTLSESDTAKQLNFFEXALBURFNGJEFWCSGHMLIXTVWAYP");
    msg.ccount = 230U;
    msg.cnames.assign("IOUSBBFLCCHLGZHQZVTDRHTYIRQWZOFTZMRQWSPJRYBOJFWKYGQMOMNVRFOKUOSOFVVWBCJNCUSEVACKYNXLDECNNNVHAEKEUZHNETPHIGICIKFOOPOPFQUSGPE");
    msg.last_error.assign("MHWYENQNYXIKXEKKPRZGVRBBMVVIFZQEXZCMAPPQUASHUHZIRQUCVNVZNEXUMJTYFOZLIDIPWKZIKASVHNYUJHZGGKKGYBLDTJVRVUFPTLRLUSYXCWOMOQHJWQECVJGMUBSNLSQIGSGQRNBZPVXTLERZQRESTWPJBMJBYAWGOIYCKXFNYQNITDHDOLDXPPDWRBRJFOTBFOLKYELDDOCSSMBWFWFAXCDAXFSTHMGHUTGCIACF");
    msg.last_error_time = 0.0530821019873;

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
    msg.setTimeStamp(0.476416043185);
    msg.setSource(65019U);
    msg.setSourceEntity(174U);
    msg.setDestination(46493U);
    msg.setDestinationEntity(214U);
    msg.mcount = 82U;
    msg.mnames.assign("LCOWQQJZLPNMEUOJDTWDPSNAYSFHMQHCIZBUKJAUOZPLCHJZUYWGTXUDAGWEOZORHWPTZALRYRUVELFWFROVQSLMWBTCNCVUPYCBQAGNEBIGIPWHBXTONXYQFVNZSGXIYGMZFKEHEVYAKRZXNIFMGRPKXSJABMGVDSOSITUKIODCRGSJLYSIMVAXPPNWFKYDEWJEVCHRIPYJUHSKHBVTQGQDRLBTFNOFAXLHDQMTDNTZEKMCIFAXKBQ");
    msg.ecount = 175U;
    msg.enames.assign("EBEAAUFMEKOGXKARWIVAKJGCBWZGXTYTTVWQTYYPPQNUOWVSFUMOKUCDSQIENMPPALMYLOVMLATZZXCJZIXDDZISFJNNOBPIHOBQGNJWDYMBNSUNYATZHVLXEQACLSRKBXJFDRMKVWDXIVCJGPJKDOHERREXQGBYHKVEUFCUMOONJLFRQRSZHALCGBLYDKWLPZQNIFFRSRACXQGPIU");
    msg.ccount = 8U;
    msg.cnames.assign("XYEUVCILZPMTWLHILCDVQXWNLEIZYHVXWYWGCUHDGLLLQXOOJKJDJEAJLNHDHZAEUZZICREBBASRUKFBROUTMMBRVIFSSZNIUPAPCQYTWCQFACHLPJXUHSTA");
    msg.last_error.assign("JCBAVQEJSLWDPSOBDRIFLYTFUIHNQMBZGENDXNQGABVPPERAZXAMUHOHSFDXQCHVNYMMLPXMSQLWPTREBHFFRKPNXOJMVXUNYUSTNHPTZJHBBHJCVLYIXOPQPJRFZXERQYBSIDKOAEIIYUWGTOXMSDYWGJJFKKKBHIWMDWLYWRLUOBXSMGAQKCLVAOEYZEVRTKEUSNUUWCKKGPHZICOZTRWVLVCMFQICFYZTTOGASAWTGZU");
    msg.last_error_time = 0.307833701101;

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
    msg.setTimeStamp(0.751300294279);
    msg.setSource(51490U);
    msg.setSourceEntity(76U);
    msg.setDestination(52263U);
    msg.setDestinationEntity(116U);
    msg.mcount = 236U;
    msg.mnames.assign("GFNYZOCQYHABRQOZFXDSUAATQXEFPROKMJBYEINKWGPBHGAGOBYZNEPVZWYZMSHDVPZWJGFSSEWDGJMCOUKVGIJRHTJTHSTNCCJEJWUALTNSBQDZOKSLQQKDJRGQKPXAHXWURLWYWIEFNPVCZREXTIIUMJXTLFA");
    msg.ecount = 189U;
    msg.enames.assign("LTLUKFFORIMGEEVZHKYYBEHZGCVHMRTGBRWNXWTMIAKHVPUUGPAXSMNOUROUXWSWFJCCSEGFQVOMPPZFVTMJGNBRDJWYPTEKBOAKXDOKPDCLAXINNIQLPUZLQJJISAWSNRCKYSUTBXRGMAKUWJDJQGFWDVXSCQYBQGPJSNBYEDTIHZNJSFOELVKQHVHNTOQRORAVFXVBZQYLWFCZHECAENO");
    msg.ccount = 187U;
    msg.cnames.assign("OJLQXBRPVQDJGVEZBIUZUSPAFIZWTJUEXOCQVGCGGMKVCLQIUEHDXCGLGUNSSWUEYZFWM");
    msg.last_error.assign("KUCQTUSZJNZXPKHFARUQXMFGJZUVPJVFSIOZVAKTHVTWIGSBLPWJOFRSIWMNRBVLNVFNQQBDJKKXVNURJEDCGAEAQMIVTGSRYBLNMPLUZHEGGSXCCBHGWEEHESQBFWSIESQBYDOYOXBACMXRHGSARAADLYNHNJCQFQXXMHONRVVPNKOWUCTDXDYIKPR");
    msg.last_error_time = 0.449800473005;

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
    msg.setTimeStamp(0.340733542599);
    msg.setSource(44390U);
    msg.setSourceEntity(21U);
    msg.setDestination(54536U);
    msg.setDestinationEntity(27U);
    msg.mask = 200U;
    msg.max_depth = 0.024104571943;
    msg.min_altitude = 0.402226316435;
    msg.max_altitude = 0.771179300237;
    msg.min_speed = 0.291263830036;
    msg.max_speed = 0.274964818104;
    msg.max_vrate = 0.919765060876;
    msg.lat = 0.642000948185;
    msg.lon = 0.052972062606;
    msg.orientation = 0.376943084622;
    msg.width = 0.105792970745;
    msg.length = 0.898513074462;

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
    msg.setTimeStamp(0.309993816724);
    msg.setSource(43839U);
    msg.setSourceEntity(39U);
    msg.setDestination(22653U);
    msg.setDestinationEntity(171U);
    msg.mask = 166U;
    msg.max_depth = 0.530612677118;
    msg.min_altitude = 0.535282647272;
    msg.max_altitude = 0.586041035158;
    msg.min_speed = 0.473712589124;
    msg.max_speed = 0.885519991545;
    msg.max_vrate = 0.233448088607;
    msg.lat = 0.0344490234018;
    msg.lon = 0.17946709241;
    msg.orientation = 0.114004962845;
    msg.width = 0.0168953066897;
    msg.length = 0.581386844331;

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
    msg.setTimeStamp(0.847792950311);
    msg.setSource(29950U);
    msg.setSourceEntity(196U);
    msg.setDestination(35633U);
    msg.setDestinationEntity(225U);
    msg.mask = 101U;
    msg.max_depth = 0.58706684956;
    msg.min_altitude = 0.833207264124;
    msg.max_altitude = 0.187405972109;
    msg.min_speed = 0.34255616369;
    msg.max_speed = 0.433353202627;
    msg.max_vrate = 0.570350574604;
    msg.lat = 0.999135711894;
    msg.lon = 0.515424666505;
    msg.orientation = 0.37036761324;
    msg.width = 0.0426050785934;
    msg.length = 0.272151748553;

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
    msg.setTimeStamp(0.911563258145);
    msg.setSource(35814U);
    msg.setSourceEntity(124U);
    msg.setDestination(61924U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.236733988276);
    msg.setSource(23315U);
    msg.setSourceEntity(164U);
    msg.setDestination(6116U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.532312485159);
    msg.setSource(11502U);
    msg.setSourceEntity(165U);
    msg.setDestination(52239U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.387628266663);
    msg.setSource(61093U);
    msg.setSourceEntity(159U);
    msg.setDestination(23594U);
    msg.setDestinationEntity(228U);
    msg.duration = 9039U;

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
    msg.setTimeStamp(0.481188563404);
    msg.setSource(40027U);
    msg.setSourceEntity(144U);
    msg.setDestination(50129U);
    msg.setDestinationEntity(117U);
    msg.duration = 22215U;

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
    msg.setTimeStamp(0.402800057013);
    msg.setSource(61123U);
    msg.setSourceEntity(114U);
    msg.setDestination(58741U);
    msg.setDestinationEntity(102U);
    msg.duration = 47265U;

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
    msg.setTimeStamp(0.908723124618);
    msg.setSource(47382U);
    msg.setSourceEntity(83U);
    msg.setDestination(22185U);
    msg.setDestinationEntity(172U);
    msg.enable = 159U;
    msg.mask = 2323989441U;
    msg.scope_ref = 3190665876U;

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
    msg.setTimeStamp(0.663608290645);
    msg.setSource(59116U);
    msg.setSourceEntity(53U);
    msg.setDestination(10612U);
    msg.setDestinationEntity(214U);
    msg.enable = 221U;
    msg.mask = 2843939712U;
    msg.scope_ref = 3497533384U;

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
    msg.setTimeStamp(0.229743979782);
    msg.setSource(14726U);
    msg.setSourceEntity(187U);
    msg.setDestination(49688U);
    msg.setDestinationEntity(117U);
    msg.enable = 115U;
    msg.mask = 2625852284U;
    msg.scope_ref = 2834975629U;

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
    msg.setTimeStamp(0.967620779021);
    msg.setSource(50477U);
    msg.setSourceEntity(40U);
    msg.setDestination(54549U);
    msg.setDestinationEntity(166U);
    msg.medium = 234U;

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
    msg.setTimeStamp(0.793345199626);
    msg.setSource(20393U);
    msg.setSourceEntity(171U);
    msg.setDestination(60022U);
    msg.setDestinationEntity(141U);
    msg.medium = 114U;

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
    msg.setTimeStamp(0.802476260656);
    msg.setSource(32150U);
    msg.setSourceEntity(54U);
    msg.setDestination(46769U);
    msg.setDestinationEntity(239U);
    msg.medium = 66U;

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
    msg.setTimeStamp(0.322870256619);
    msg.setSource(9025U);
    msg.setSourceEntity(240U);
    msg.setDestination(28866U);
    msg.setDestinationEntity(209U);
    msg.value = 0.724162412175;
    msg.type = 97U;

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
    msg.setTimeStamp(0.804521032835);
    msg.setSource(21074U);
    msg.setSourceEntity(254U);
    msg.setDestination(33679U);
    msg.setDestinationEntity(180U);
    msg.value = 0.855556043741;
    msg.type = 109U;

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
    msg.setTimeStamp(0.880408917542);
    msg.setSource(37889U);
    msg.setSourceEntity(151U);
    msg.setDestination(4121U);
    msg.setDestinationEntity(223U);
    msg.value = 0.0779405146188;
    msg.type = 21U;

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
    msg.setTimeStamp(0.291695672263);
    msg.setSource(47628U);
    msg.setSourceEntity(63U);
    msg.setDestination(2463U);
    msg.setDestinationEntity(140U);
    msg.possimerr = 0.0995678967303;
    msg.converg = 0.957432863275;
    msg.turbulence = 0.626449270652;
    msg.possimmon = 242U;
    msg.commmon = 213U;
    msg.convergmon = 9U;

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
    msg.setTimeStamp(0.115865592726);
    msg.setSource(28393U);
    msg.setSourceEntity(225U);
    msg.setDestination(27097U);
    msg.setDestinationEntity(59U);
    msg.possimerr = 0.0195497263223;
    msg.converg = 0.944622959687;
    msg.turbulence = 0.85128789029;
    msg.possimmon = 236U;
    msg.commmon = 51U;
    msg.convergmon = 171U;

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
    msg.setTimeStamp(0.41015396915);
    msg.setSource(7268U);
    msg.setSourceEntity(202U);
    msg.setDestination(15924U);
    msg.setDestinationEntity(31U);
    msg.possimerr = 0.457257903486;
    msg.converg = 0.198139511964;
    msg.turbulence = 0.362540236296;
    msg.possimmon = 208U;
    msg.commmon = 33U;
    msg.convergmon = 243U;

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
    msg.setTimeStamp(0.876369894625);
    msg.setSource(38627U);
    msg.setSourceEntity(79U);
    msg.setDestination(6150U);
    msg.setDestinationEntity(195U);
    msg.autonomy = 63U;
    msg.mode.assign("YGAESIKIHVQKUKKJCNUGSMRYFZFATVCBPLCRX");

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
    msg.setTimeStamp(0.326421332828);
    msg.setSource(36727U);
    msg.setSourceEntity(116U);
    msg.setDestination(59735U);
    msg.setDestinationEntity(39U);
    msg.autonomy = 60U;
    msg.mode.assign("SJNPQFUHQATUWAZZIRIVQMUHIWBLVSMMHWENXWCRNBNAPCBKYEJSAEXYNTVFEDRJKNFKIFMNUFJMVTDKJGBEEXWWOKAOUATOHCGOPELOLXKXRCDYWFHIIQULYF");

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
    msg.setTimeStamp(0.32817766162);
    msg.setSource(22901U);
    msg.setSourceEntity(216U);
    msg.setDestination(25717U);
    msg.setDestinationEntity(5U);
    msg.autonomy = 146U;
    msg.mode.assign("MODJCEHPWTVAVPDVNOUFACFOIRKDVCEWBVPXXGUWKZPWMHGASJYZCLTXOBQDZBENLLYGUCVBKWHXY");

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
    msg.setTimeStamp(0.0938938366328);
    msg.setSource(42691U);
    msg.setSourceEntity(62U);
    msg.setDestination(4769U);
    msg.setDestinationEntity(5U);
    msg.type = 8U;
    msg.op = 2U;
    msg.possimerr = 0.548288433334;
    msg.converg = 0.582658245689;
    msg.turbulence = 0.406079796452;
    msg.possimmon = 226U;
    msg.commmon = 109U;
    msg.convergmon = 151U;

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
    msg.setTimeStamp(0.332315625176);
    msg.setSource(52303U);
    msg.setSourceEntity(91U);
    msg.setDestination(39352U);
    msg.setDestinationEntity(132U);
    msg.type = 205U;
    msg.op = 90U;
    msg.possimerr = 0.458858816153;
    msg.converg = 0.650807946952;
    msg.turbulence = 0.0726562208889;
    msg.possimmon = 76U;
    msg.commmon = 179U;
    msg.convergmon = 135U;

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
    msg.setTimeStamp(0.579560482928);
    msg.setSource(49727U);
    msg.setSourceEntity(87U);
    msg.setDestination(44225U);
    msg.setDestinationEntity(80U);
    msg.type = 2U;
    msg.op = 2U;
    msg.possimerr = 0.736563083313;
    msg.converg = 0.747830765256;
    msg.turbulence = 0.944940210613;
    msg.possimmon = 114U;
    msg.commmon = 63U;
    msg.convergmon = 169U;

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
    msg.setTimeStamp(0.893229321722);
    msg.setSource(30490U);
    msg.setSourceEntity(101U);
    msg.setDestination(48617U);
    msg.setDestinationEntity(237U);
    msg.op = 175U;
    msg.comm_interface = 117U;
    msg.period = 12914U;
    msg.sys_dst.assign("OHPGTRKOYEUJJFUSVWRGHNSQNFSQAWJWZNHLVUGGCJSZEJAYOGMEJFEYOWADVSELKORUIFECRZDIZPAUETOXILTMYQQICCKPAVVQAZMTRHLBIFUTWZWQPFSYYOHMFYS");

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
    msg.setTimeStamp(0.711362280587);
    msg.setSource(39024U);
    msg.setSourceEntity(168U);
    msg.setDestination(14026U);
    msg.setDestinationEntity(95U);
    msg.op = 40U;
    msg.comm_interface = 21U;
    msg.period = 23560U;
    msg.sys_dst.assign("UKWZSGIDPKITHADMALUKXOBVLQAUTNWALPDGIZMVJGFQBVNZSUIKQIYWQTQEYNBQTEWUQAJOVOEKUVMMEPKCUOSHJELSYXFHZDTRFMFJKJDJPGNIYFCPPECCXZVWORBEIXBVXULONFKGOQLHARYHCXISTYZEFBASBLBGMWSIPNHNLOCVYXTCQFWCGGFRNTMSRWYNSDYIXAQWKBXHHEPTWGMJSUJRYMKDEADVHZFPJJRCDXNLGDLUR");

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
    msg.setTimeStamp(0.895940782226);
    msg.setSource(63253U);
    msg.setSourceEntity(39U);
    msg.setDestination(37844U);
    msg.setDestinationEntity(45U);
    msg.op = 48U;
    msg.comm_interface = 14U;
    msg.period = 8759U;
    msg.sys_dst.assign("EXLKGMVFLSRLZKHCIOOSEUVQTFVCDXQGDYMEQJIYBUQNPQPLTYUFMSFPRGZETDJDLHYXTZWFUTHGJGRJRDBNPUIOFKEJOWMBJDVNYPCYQFMOOEVYGNAXHBSXXJUFJSHDNWKOSUZLBRQAAYNEPHKCIQYSZORMJCOZASXMKLCCHUHZBTNTVQWTADWEAMINNAVUGSGUPFDPAWCIPLWBIXBXVMLWIEHKFTGBWPJRZKWM");

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
    msg.setTimeStamp(0.262660479087);
    msg.setSource(4620U);
    msg.setSourceEntity(136U);
    msg.setDestination(44745U);
    msg.setDestinationEntity(185U);
    msg.stime = 1607338381U;
    msg.latitude = 0.927853928167;
    msg.longitude = 0.7903332554;
    msg.altitude = 12738U;
    msg.depth = 2621U;
    msg.heading = 35638U;
    msg.speed = -29378;
    msg.fuel = 79;
    msg.exec_state = -43;
    msg.plan_checksum = 5960U;

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
    msg.setTimeStamp(0.565656066133);
    msg.setSource(5942U);
    msg.setSourceEntity(105U);
    msg.setDestination(52757U);
    msg.setDestinationEntity(98U);
    msg.stime = 3399635798U;
    msg.latitude = 0.901376016985;
    msg.longitude = 0.664665199603;
    msg.altitude = 29654U;
    msg.depth = 2669U;
    msg.heading = 32521U;
    msg.speed = 29540;
    msg.fuel = 46;
    msg.exec_state = 41;
    msg.plan_checksum = 7119U;

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
    msg.setTimeStamp(0.636570853948);
    msg.setSource(44151U);
    msg.setSourceEntity(26U);
    msg.setDestination(52420U);
    msg.setDestinationEntity(150U);
    msg.stime = 1958932931U;
    msg.latitude = 0.91393119337;
    msg.longitude = 0.550397818917;
    msg.altitude = 21230U;
    msg.depth = 20877U;
    msg.heading = 17774U;
    msg.speed = 19515;
    msg.fuel = 99;
    msg.exec_state = 86;
    msg.plan_checksum = 32989U;

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
    msg.setTimeStamp(0.475039965499);
    msg.setSource(46509U);
    msg.setSourceEntity(47U);
    msg.setDestination(28028U);
    msg.setDestinationEntity(124U);
    msg.req_id = 56620U;
    msg.comm_mean = 141U;
    msg.destination.assign("QGGOTPEZOFLMWYSHQBD");
    msg.deadline = 0.0925455091017;
    msg.range = 0.653202694456;
    msg.data_mode = 51U;
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.885273587847;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JVUJRSBBECHBMVPDNGIETSYZMOFPQSWIEAIJYYNWKTGCYLBPTLPJDAYKQGCXHVTJXIY");
    const char tmp_msg_1[] = {-69, -110, 73, 66, 65, 28, -72, 12, 18, 14, -36, -89, 82, 5, 81, 97, 10, -41, 2, -104, -108, 79, 14, -49, 79, -95, 59, 71, 39, -63, 91, -33, 37, 29, 122, 94, -117, -120, -42, -69, -126, -123, -92, -70, -122, -11, 24, -93, -69, -47, -123, -64, -89, 117, 44, 105, 91, 119, 20, -80, 0, -52, 93, 125, 125, 43, 122, -74, -77, -93, -56, 2, -119, -93, -94, -85, -65, 3, 0, -18, -79, -103, 42, -10, -53, 44, -54, -48, -84, 76, -122, 91, 109, -126, 18, 7, -71, -80, -84, 76, -118, 76, -87, 42, -79, 107, -85, -58, 96, -72, -19, 44, 42, -77, -95, -101, -58, -58, -127, 1, 107, 65, 107, 47, 32, -115, -99, -107, -29, 55, 116, -127, -14, -22, 26, 125, -128, 0, -64, 79, -125, 114, 63, 46, 38, -121, 19, -88, 62, -28, -62, -68, 101, -89, 40, 80, -33, -122, -87, 107, -80, 111, -48, -77, -51, -68, 125, 82, 87, -99, -117, -21, -87, 6, -77, -62, -46, -84, 5, 26, -68, -81, -27, -89, -18, -28, -121, 30, 31, 37, -35, -5, 1, -1, -89, 36, -37, -1, -58, -81, -126, -51, -125, 124, 112, 35, -121, -107, -24, -70, 125, 63, 10, 111, -81, 20, 126, 61, -27, -8, 15, 119, 33, -89, 83, -126, -64, -92, -6, 86, 6, 101, -113, 15, -73, -51, -46, 8, 3, 71, -95, -30, 101, 17, -13, -24, -94, 99, 89, -31};
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
    msg.setTimeStamp(0.898855064168);
    msg.setSource(49799U);
    msg.setSourceEntity(99U);
    msg.setDestination(63633U);
    msg.setDestinationEntity(210U);
    msg.req_id = 54114U;
    msg.comm_mean = 52U;
    msg.destination.assign("YQHNTFDLZLXYHMNOVVSURXBRQYUIVAFVZCDZPEUZMZAWBNHTUCPLCPKECWQFYKOVJAUIVGTAKIOFGCCWDOAY");
    msg.deadline = 0.685150109778;
    msg.range = 0.0186589925573;
    msg.data_mode = 177U;
    IMC::TCPStatus tmp_msg_0;
    tmp_msg_0.req_id = 60170U;
    tmp_msg_0.status = 59U;
    tmp_msg_0.info.assign("ULKJAZOLINSPZBYBPNHMZYBSYWVLNFPYUFMUFXLMEDRFVK");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ISVOXAZLEPRURSNWLYWTKEBUWZJCZBKRVXYUQANOCUQETHEHGPEHKZPVTMDNLFCVPXMXWYGCOTAIBRGYGXTNDVJEUMHMNQIWDFOLHROEGPQSKHNZVNLGCYCFATWDGQIXDJKPGLRUNAKHWJEYMXZSYLJOFRIDVO");
    const char tmp_msg_1[] = {36, 86, 42, 91, -51, 39, 121, -62, -41, 7, -73, 120, 5, -20, -74, -81, 89, 114, -61, -46, 102, -26, -119, -18, -99, 7, 94, 4, -6, 111, -92, -110, 90, -87, -106, 112, -41, 47, 120, -77, 45, -49, -85, 91};
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
    msg.setTimeStamp(0.8289522645);
    msg.setSource(48942U);
    msg.setSourceEntity(172U);
    msg.setDestination(8024U);
    msg.setDestinationEntity(229U);
    msg.req_id = 42289U;
    msg.comm_mean = 136U;
    msg.destination.assign("UDXMQZXVYGWRYFAOWKHKJAUXWRJXPIXZFGCTLCLSDRETSZNFTSAIGPSYXQTIBQDBAUZZEMJQKYKOOWEJSWRPIPEEAKCNGQXVUDRHKMIMNALTZYHHFNEDFPQCFJAFBJVW");
    msg.deadline = 0.185859976417;
    msg.range = 0.108990376253;
    msg.data_mode = 199U;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 646118344U;
    tmp_msg_0.state = 108U;
    tmp_msg_0.error.assign("NBHHLPRUWTYCHXMZBSJFPIVFNVHJAAMFFN");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("QJHORCLTJTTNNWQLBPKOMLFMZXRVYAYMGCQTGRZBVUGLHNXZJTVDWJSKJZDYZVHSQBUOMIUKGURQNNCNXBROHVAWOGIHQWEONASCKQITJAFWHWKXQAEAPENDLWDVMPOQVRDYHFJHPYYBIJAPTMCUOZPFYSYKIFNEGIAWSGLPSFZKRSSSHXBFOJAPIKFXGKMCDGZIEEWVSVRDXLIMELAFZHVPERULGYXDTMUFDO");
    const char tmp_msg_1[] = {114, 110, -26, -123, -28, 34, -17, -69, -44, 50, -61, 12, -1, -7, -66, -27, -20, 67, 4, 14, -127, -44, 120, -18, -58, -14, 112, 63, 87, -1, 29, -52, -95, 52, -24, 21, -89, -35, -121, -20, -60, -22, 116, 91, -55, -84, 40, -74, 99, -111, 109, 7, 82, -108, -47, 40, -83, 119, -38, 48, -39, -108, -92, 53, -23, 92, -60, -16, -100, -10, 86, -96, -101, -50, 110, -71, 51, -39, 86, -55, 82, 49, -98, 29, 87, -128, -74, 25, -8, 29, 16, -60, 91, -23, 99, -103, -94, 109, -75, -65, 49, -85, 113, 104, -39, 98, -34, 79, 122, 48, 116, 121, -80, 122, 16, -2, -14, 20, 22, 121, 91, 56, 113, 106, -28, 65, 122, -50, -67, -91, -53, -89, -72, -118, 21, 8, -87, 55, -118, -25, 36, -4, 114, -55, -39, 99, 19, 114, -33, 63, -85, 33, -49, -111, -28, -38, 85, -49, 99, -31, 123, 111, 22, -16, 47, 118, 111, 70, -36};
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
    msg.setTimeStamp(0.0323250015083);
    msg.setSource(37897U);
    msg.setSourceEntity(185U);
    msg.setDestination(59442U);
    msg.setDestinationEntity(43U);
    msg.req_id = 21799U;
    msg.status = 64U;
    msg.range = 0.491907785134;
    msg.info.assign("NYIYMCEJMSNFCOZMWXBBJYFUGNAQPIJSQKVNIHTHROKOFHFATOLEGIMEOYMWGSTWDZLEJEQJDOSWPUGQMTEWYTNBHRUVYRJMVQDGKDHKXKJPILHYQCPRANUXQDB");

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
    msg.setTimeStamp(0.310814169571);
    msg.setSource(29821U);
    msg.setSourceEntity(18U);
    msg.setDestination(63469U);
    msg.setDestinationEntity(99U);
    msg.req_id = 63989U;
    msg.status = 229U;
    msg.range = 0.227079855609;
    msg.info.assign("ZQOMAJVMMVKQRSXPGKBNOSBEAHRLMFDCMIZLFDVTWAFLDZBVANFRBUMHLONHGXOZFTCPMSYRVEGCDWZJQJUTHYJGBGGUJLXXGNLSRPPEBVRJNQAUYBTLOQSZBSUWOXRWFZUEQYHWEGXAQSEVBYETITIMXS");

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
    msg.setTimeStamp(0.280700605446);
    msg.setSource(47496U);
    msg.setSourceEntity(55U);
    msg.setDestination(50747U);
    msg.setDestinationEntity(246U);
    msg.req_id = 11130U;
    msg.status = 75U;
    msg.range = 0.708307554662;
    msg.info.assign("EYJVAXRDMOEAYLTKJOFPYPSHTPXZGCQMYHNXLIUBNPPTNIOHJKDOQGKGCYVMGMWTXKCLCUEYXEVMIUEDJSWTJNOPEKHVRXDERSQKWPUNXHFIMDFCJNYUZWZIWVSOLABKWBFZLHBJDBGNAEQRCLGTXBMRGZJFZFLFUJSMIWYAZQVBFH");

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
    msg.setTimeStamp(0.619761031677);
    msg.setSource(56321U);
    msg.setSourceEntity(142U);
    msg.setDestination(31567U);
    msg.setDestinationEntity(170U);
    msg.req_id = 6287U;
    msg.destination.assign("SQQQMFKQVFNXOSNMWENIHTYRHJAEMRDBOGAEKMPPKGTODAUCOJFZXUELFQXDACIVGUMICEBMOIROVLRXSWXOZKXTBMRZNTYBCNPSLIDPFDNLWSQNFDZZPKHFQMCLJCGMIZXGUXTHYPDWFBPXCUEYBJJBHKQWGWVAJABILTEZZNDAMOLEVISYHCTTWNJKUDHUPJCAYFEVQTQLVYRVKBOHDXWSLHHRGUSWUZKPVIORNYK");
    msg.timeout = 0.270843932888;
    msg.sms_text.assign("FMTXFTZQNVZRRQRAVEBKHABYQXRMONYVRPTEKDDJUZGLNSEUALUTDIKEZJYBEUCXOFSFTUJSLOKWEGJCDHSYPOTZXRSIGUCKNGZPYPQZWVQUQFLUGFKMJMHIPOQXAQDSPCFJNDVTMAUOKPZNDNAEZHIRYJPTUNOMKKFLXIPKYLHQWXYMGGLIHJSWWQXYZCEHSMTFBJDWRWRJROEAGLITWCGICOWHISBGBBSCDANHXBVEVLFOABVXN");

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
    msg.setTimeStamp(0.876605915078);
    msg.setSource(46781U);
    msg.setSourceEntity(157U);
    msg.setDestination(13957U);
    msg.setDestinationEntity(183U);
    msg.req_id = 24092U;
    msg.destination.assign("HQAHOPKKYONXPAAGITUTKDNQUWJJ");
    msg.timeout = 0.0514900723546;
    msg.sms_text.assign("ZIASCSXKUAZZFHWYUJNXQWTUWPFEPJPUOZDROGKNOCVOIRGXLTWEVUKVPXHEGQDBKBEPUNZMQRQIAWWTOGPIHUWLBMHVEDIFVYLBJJUJRBSKOSLVLPVDAXQIFIPYGMUJYCSAYOHWRSWCNTTBENDXUJ");

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
    msg.setTimeStamp(0.041140551454);
    msg.setSource(53387U);
    msg.setSourceEntity(254U);
    msg.setDestination(31521U);
    msg.setDestinationEntity(80U);
    msg.req_id = 5397U;
    msg.destination.assign("CFZDJUHNOYLCGVMNAWRFGPQPVNUGIZYFYXLIOVOAEPELGFPAGDUWGGJDHUEVVBJEWPRRIHFMLWGMTWCCSRMLLQEWHJBABDXXZOVSWYTVTCKVJHSRSWFNRQDNIQMKSQZJLINABXTTABLIZXABKBYSXIBKBNJYCYZKDOHUSKTODUDTHJNJWVEFZODPUKKUJFEIYMNIHQLKPHPQYOSANWRXCZQSOCQCXUDGRCZTYBUEOQGKRHELIRXAVMMA");
    msg.timeout = 0.0201397504618;
    msg.sms_text.assign("QUXUESFOQPKZFGVNVTOQAWEBUWHEIZKVQCYMTBOJQKAHXTDRHBISVIOHNDXIWCXGPESCTDLPQMAVITECNXHWXABRNXIWUQGGHGBMPRDJONZZYKWCAKNAJVYURHMCLYFICVXULCLVYRFBMMUEGXJLFZBBCLLLGOHRCAPDSQDRRJPDMDTQUZLJTIZOMEVTHMTFFFFJUFSWWEAP");

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
    msg.setTimeStamp(0.556727846532);
    msg.setSource(61811U);
    msg.setSourceEntity(216U);
    msg.setDestination(58037U);
    msg.setDestinationEntity(180U);
    msg.req_id = 30465U;
    msg.status = 182U;
    msg.info.assign("RTZOFXLEJXVMMRICXGXZHKFNZUAIMQRSCIAYOGVTQDKHBZNRZQGPWYCQHRNKDUIWHBTWSKAIGUEOWKGYRMGPVKXOULCDCPASNFTUXM");

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
    msg.setTimeStamp(0.440394502031);
    msg.setSource(33272U);
    msg.setSourceEntity(131U);
    msg.setDestination(16978U);
    msg.setDestinationEntity(123U);
    msg.req_id = 23473U;
    msg.status = 40U;
    msg.info.assign("ZMVKCAXJWLTUIKZBFUESMLJMMFSLNGBDNXMKPHDWFXBVLOUSVXRQDELIIVPVJCJXHBVQNEQAPRDJ");

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
    msg.setTimeStamp(0.597256466664);
    msg.setSource(56361U);
    msg.setSourceEntity(209U);
    msg.setDestination(64918U);
    msg.setDestinationEntity(27U);
    msg.req_id = 32664U;
    msg.status = 145U;
    msg.info.assign("HMYVZGWQVSUQLQOHPMXJEOXVQRHNHKYJUQGBKGYFBOBWYPCZNNIQYEEJVSOTXQCBVJHNVCSJKJEDIKURKRCVFIRWOTMZUPUGMOSCERKZZEGNNWNAOMDOLIKDPFYZODPRSMPXGZAWGFURANHACQAZKEBWBUYAJIFMBQRVMUDTYLXHETLERASSLTTJWSASZLZLLCFDCXDRKSYTHBDGVXWHPAEQOMULTDFVPXBTKATGIINDFNXBPCGXCH");

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
    msg.setTimeStamp(0.173775354527);
    msg.setSource(49226U);
    msg.setSourceEntity(77U);
    msg.setDestination(22757U);
    msg.setDestinationEntity(206U);
    msg.state = 86U;

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
    msg.setTimeStamp(0.354416359741);
    msg.setSource(65094U);
    msg.setSourceEntity(76U);
    msg.setDestination(7982U);
    msg.setDestinationEntity(27U);
    msg.state = 157U;

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
    msg.setTimeStamp(0.712346037604);
    msg.setSource(31483U);
    msg.setSourceEntity(182U);
    msg.setDestination(23527U);
    msg.setDestinationEntity(78U);
    msg.state = 81U;

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
    msg.setTimeStamp(0.611024268329);
    msg.setSource(11696U);
    msg.setSourceEntity(114U);
    msg.setDestination(39083U);
    msg.setDestinationEntity(13U);
    msg.state = 183U;

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
    msg.setTimeStamp(0.671443972621);
    msg.setSource(33670U);
    msg.setSourceEntity(72U);
    msg.setDestination(58608U);
    msg.setDestinationEntity(235U);
    msg.state = 84U;

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
    msg.setTimeStamp(0.819960415054);
    msg.setSource(33625U);
    msg.setSourceEntity(246U);
    msg.setDestination(29291U);
    msg.setDestinationEntity(213U);
    msg.state = 204U;

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
    msg.setTimeStamp(0.527228482554);
    msg.setSource(65528U);
    msg.setSourceEntity(9U);
    msg.setDestination(44704U);
    msg.setDestinationEntity(3U);
    msg.req_id = 7890U;
    msg.destination.assign("XVSRGLLYDVNLXCUENVIBQJYGQNSGIPTETGLNXZMPUQZTRKBYTDGMXQRLAZSONONSIFMAKFSVODWULZEICROPYPBFUWBHMOVWWRXZCJUEARUDQFOKQNPFAKTIBBEKCUWXMDBIGGSHJMZYRCJIWAGDIVSMOHGDASFLIIQTJHLQYVZDTJJDNMKCKBVTOYBEWJLETARQEUCHFJFXMMZYWLWPNNSYUEROGABACPTS");
    msg.timeout = 0.760995658667;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 212U;
    tmp_msg_0.request_id = 16949U;
    tmp_msg_0.command = 167U;
    IMC::Alignment tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 33438U;
    tmp_tmp_msg_0_0.lat = 0.388231271943;
    tmp_tmp_msg_0_0.lon = 0.506082026457;
    tmp_tmp_msg_0_0.speed = 0.456309431212;
    tmp_tmp_msg_0_0.speed_units = 43U;
    tmp_tmp_msg_0_0.custom.assign("QPXBADJLXPRKGWOHQARGMCMNBCWZIHYBQKFZIBZVLATJEAFWJIYUWCHFDFOFGZXGJITYTDHSQXKEEHFORHOETLRPIWUBPPOMJXGZOFMRYQAJFHJLDXXKRIDSYPWOCLYESQSADMAHIGCIXZZBJNNXWAUAVGWQLOTERCCJVRSIFDUTPKM");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 57325U;
    tmp_msg_0.info.assign("UGRXMQOIVAGALDNFEUPJHDFAAUKXDLCZQYMFKJFBIYTIKFCEBCWSBGYJHXLRIMUEPBKVONJKDO");
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
    msg.setTimeStamp(0.427396914174);
    msg.setSource(49124U);
    msg.setSourceEntity(211U);
    msg.setDestination(53732U);
    msg.setDestinationEntity(76U);
    msg.req_id = 58676U;
    msg.destination.assign("IHNIRFCKJLUQEMVXFWNLUQDUETXHRBYNZLSOYKCQQIGZUXWFJCHORPDRDCUJVMSQBXQTKARKZQKAVFPLTVYWNLJVRAJCUGYNAMUJKFFMVGRPZJGJEIBMTIODPYEPBNIXDEOAGHASSIWKZOEIXOYMPZWEGYDMZHZSNVDOHGUPQQFBXHXPXLNQYTMTTZESUWCCRBALYWMHDCVHAUGPSWLNBCFWFOKART");
    msg.timeout = 0.367923169694;
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 134U;
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
    msg.setTimeStamp(0.829995173706);
    msg.setSource(27616U);
    msg.setSourceEntity(220U);
    msg.setDestination(27465U);
    msg.setDestinationEntity(0U);
    msg.req_id = 3671U;
    msg.destination.assign("PKJCVSSCZCDDUBTZUEABUHPPWJ");
    msg.timeout = 0.0215612217094;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.563314824609;
    tmp_msg_0.lon = 0.0275792476758;
    tmp_msg_0.z = 0.0611374760883;
    tmp_msg_0.z_units = 164U;
    tmp_msg_0.radius = 0.107278082189;
    tmp_msg_0.duration = 11364U;
    tmp_msg_0.speed = 0.282501009951;
    tmp_msg_0.speed_units = 110U;
    tmp_msg_0.popup_period = 20682U;
    tmp_msg_0.popup_duration = 38046U;
    tmp_msg_0.flags = 72U;
    tmp_msg_0.custom.assign("NTIHELXUEIKISSOQWGDXCUNJJCIZKSTH");
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
    msg.setTimeStamp(0.197610233919);
    msg.setSource(60574U);
    msg.setSourceEntity(71U);
    msg.setDestination(15473U);
    msg.setDestinationEntity(161U);
    msg.req_id = 32882U;
    msg.status = 69U;
    msg.info.assign("SECKMWOIEPZMTJLXZSZXYNBKNVBPGTVMWRFVEJMSFENLOYUDINBYHWDRNAQPQITFPSUGPJYXLJTOQVCVAOZUMSJHWGUJWAMZUDZVKXJJPDKVEAGETR");

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
    msg.setTimeStamp(0.986514192777);
    msg.setSource(7243U);
    msg.setSourceEntity(34U);
    msg.setDestination(60215U);
    msg.setDestinationEntity(229U);
    msg.req_id = 5098U;
    msg.status = 101U;
    msg.info.assign("ZAMQZUARSCVVHKLBKJFPMJBKKBNDUEVRVLPFXFIQJZYKXSOECNILNCOJPPPMWZCGHFKRSMYXHSRBDEQXNZXSIVOEHTJTODDAJHLGIGSIQRELANMSNPFFYCDPSTZWTUJRGEHOPXMMXDSWWWPDOUAVAHIDMHZWQXFYKWEFNLIIPONRABLLUAEXVYAYDZLGJCKRHUWDIGVCZGMNTWRYQQYXSBQAQVOTJLIWKGZFUCBBU");

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
    msg.setTimeStamp(0.578195601184);
    msg.setSource(44725U);
    msg.setSourceEntity(228U);
    msg.setDestination(53960U);
    msg.setDestinationEntity(177U);
    msg.req_id = 6589U;
    msg.status = 76U;
    msg.info.assign("VQISNSNQGYSCWLXRTRZCPJDHUZUKUOADDVSMFNYALFYERJHSOBXENRDYFNEWUMOWMISEPMGKVQZUHAXYEBNJUFQCNHICTXLMYKMPTIBGHAJCAWYKBILIHCDKKKJSWOCHWZUENJFDBFUBZOLLGRGCKTQZLVLQGVZVJXAMVGJEDYPOATOWUYAKABRFRTIDOXFQZQPXPGOSPFGUNTHWMCSPILXAV");

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
    msg.setTimeStamp(0.858695738461);
    msg.setSource(17389U);
    msg.setSourceEntity(235U);
    msg.setDestination(16513U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.799418282341);
    msg.setSource(30068U);
    msg.setSourceEntity(204U);
    msg.setDestination(39105U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.916023037897);
    msg.setSource(401U);
    msg.setSourceEntity(111U);
    msg.setDestination(28891U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.98636118392);
    msg.setSource(30392U);
    msg.setSourceEntity(196U);
    msg.setDestination(45950U);
    msg.setDestinationEntity(7U);
    msg.plan_id.assign("OJQSCUBAGRUKLTZJBLZMSLCYQIMLEZQXFSOHNHGASZFWVEPZLGXMXOMOBNEFWYGLNDXJUNTGZQHKZNJAYSBAXUBKAHWVPYBDKACHANOYTYBNCDCRRLREFLDMUTDQDJRWIQIPOTMVNDOZRXFXNHPVSKPJZWY");
    msg.description.assign("IBVTIPPKGGEIOALUWVFIOQQBYRTSWBWFWXLSJGLCHJQCUUDZVEJNKOFMACXRSHUPEHQGABDOAPSEYLWFGRDKUIEORZWSXHWKIOLMAYLPDMXJYZYYQFUMTPCBGKMUXQQVAIRMSJ");
    msg.vnamespace.assign("KITDUNJHVCWXANQFPZETDNILJUGFVITXNEHUZFOYOJLDAGIMMYWIQORTBBSEIQQXCXDZBMUNSOVRHPWMSFRVLZTEVWPZOVGKWYLLRIQBVDWYWEAZIHRCNJRVUDPCKXPPDBOLBLCXYHDEGUXGHJIGVMSCAKYKZGEAUYCFJBDGPY");
    msg.start_man_id.assign("XTKBDNZRTQSDULMYCDWWUZSOFUKHVKWJGBLKXEFTNYRRPCXVLWZUBHHRGBZXYNMYRNEQPYPGAEDLUUQTQIGWHKLWHDIIVRSMQETYAEYQJOFFAQSDOCAZJMZJFAJRXFTPVBNGRKMKLSS");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ZLIKEEIOOKMQIZDZRHTYVZXFMDNZVCUONTSAPMQYAGILSVBLNBAGPCQFTBABNXXCUJIJSHPSAJHIHMEUKKKJRLBTTSLCPGSSYUTDQGWOTNCZMDCXYJWHIRQRWHQBSVLONGEVMUDXDJTWRIGEXROPRMEOFXQYYNASCFUGOAMGHYRULBVPQWFHJNPWUDFAPMKJVKYJUFDBPEXWBXAECTYOAQTIH");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 63168U;
    tmp_tmp_msg_0_0.custom.assign("QTLVDQZSKCUIHESWQBXRDHKYFCYDBVLTCJKNNHIRVONAVQHWMDBUCQJDWANTJXNEVGYYAQVR");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::EulerAngles tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.733633077314;
    tmp_tmp_msg_0_1.phi = 0.782095598767;
    tmp_tmp_msg_0_1.theta = 0.2173667765;
    tmp_tmp_msg_0_1.psi = 0.757667319597;
    tmp_tmp_msg_0_1.psi_magnetic = 0.435901996526;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("THAPYMZFMSMFMKIFTVPDWVKDFIRVCVBINMUJDN");
    tmp_msg_1.dest_man.assign("NRBTAFVXDYPWBPJXINFCZQMLWWVHOCSCVKVESBVLSNMXFDPFMANEPZLRJFESGZPMEJQWEYYBUFRLKHJFBXISIQSNJGYDICZVMTOUQSMQXHMZJCSKLNYVAABZEGAKGGBXHYHPGREZTVMKVEWJIBHONTSDOAIDDNTCCWGXCQMPRBUTRQZRWWFLQOIOWTOWEAUDPD");
    tmp_msg_1.conditions.assign("MNHNHJWAZADZVKRVYWJARFTPMBIZYXVYSMBYEFOKCNIQUDXXIOTSOMRTZQRBIPZMWXEGAYRGZJXHQZWPG");
    IMC::PulseDetectionControl tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.op = 172U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::Magnetometer tmp_msg_2;
    tmp_msg_2.timeout = 41460U;
    tmp_msg_2.lat = 0.990862485561;
    tmp_msg_2.lon = 0.272751158761;
    tmp_msg_2.z = 0.813633832101;
    tmp_msg_2.z_units = 254U;
    tmp_msg_2.speed = 0.0567134774746;
    tmp_msg_2.speed_units = 137U;
    tmp_msg_2.bearing = 0.7675287492;
    tmp_msg_2.width = 0.257619060183;
    tmp_msg_2.direction = 68U;
    tmp_msg_2.custom.assign("OKTVRWXJIUWXGRIXUXNCPPVQEUQJPWQTOTPDWIAHBAOESNRBYGWGYEULFIOUNZJ");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.306371146549);
    msg.setSource(50894U);
    msg.setSourceEntity(35U);
    msg.setDestination(34479U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("CRTIQWPSEYZVIFXJSRVTMWKHBGRRQVNBQUSPUNQLNDCXRJOTDFAHFBZRZMXZDMJJCFGZYERERSCLQPLOUOGXYBHVEMTDEAODBUAGIUXEWWJEMNGPUBPOHWLHCXANVUTWGBJXCOJVFKSISPSDPYGHWTEVLFQUOMKYIUOMEYAMSDMNPIDRASLCJQIOVGBAVZFNIZNPYZKEKFBCHX");
    msg.description.assign("WDAKNKBUJKMMQFHZHGIXFEAFESRDBTTDJFCIZLJRMXGMRHZKGUKVNSVDBKIGYSCBAPSLCBTIPUJGNZUILXYNG");
    msg.vnamespace.assign("USQTALUIRBDMCHCNDMJQYQFXJYYJIIZWDXORMVCVXLOZKFGTXHZACRIKXMYSHWWLTFGUYHWADMOKOQEHKFGBTGXQJCCGNYRDDBNIOZELSRMJOJSDYEKNTCPSQPKSVVITBBGMQFANICLPSTTQJRCIVBAADXEMVERRWOUBJJAVSIYYGFHUNPA");
    msg.start_man_id.assign("IVMEEZMWNOKDVCZNMVAWSYAXBLGPQHYWOHBYILFSQDWEFFKGWKLIQNXYJTMSEVPJOALIWLRSRBPWEOVFAXOHAWQJMKTSKZHTBUECNIDZBXDDPCSWAAJRUQLZMPRYXKGNONTVECAHUZCTAPZGZNECYOJDYMQRD");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("RMIRDSPRZHOACPDJFVWLIKYTXLGHGLQLNQQBVVBSMFVAYGIGSMRTEEKMUCSQAYSWBHRMHHKIOAXPXOXZLLUFGVGPHUPUYQKPDEFDYWYTDJUCXYUOZIETXU");
    IMC::ScheduledGoto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.arrival_time = 0.64975900058;
    tmp_tmp_msg_0_0.lat = 0.738852959864;
    tmp_tmp_msg_0_0.lon = 0.845494575581;
    tmp_tmp_msg_0_0.z = 0.782083644346;
    tmp_tmp_msg_0_0.z_units = 59U;
    tmp_tmp_msg_0_0.travel_z = 0.668748505631;
    tmp_tmp_msg_0_0.travel_z_units = 188U;
    tmp_tmp_msg_0_0.delayed = 250U;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::RestartSystem tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 195U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("HTRVHSHLEEAWNHMJQWZWKZGROBEBPACDGKBTQWATEBNEWBDVMZVSXLMQYXTXVLVRKASQQQCDAUZFIDMY");
    tmp_msg_1.dest_man.assign("KNHLYKCVVQKIHXFWPTQXFUJVFVGVTIKLJSHUARCQHQXSKPZWIFMBUDSSRGTEFNPJNYZCAASCTMWJOIGKELIVNVPFUYSEMHCXCKDEDNOYKOXLWJUAITVPLGFDIBELRHWBQKUTOQNEIMAODSBXPLDNAMACHWUOYGTWBJRQFHPBLEOZWUQBFVQCYCERZJWAZPXMWGAQRMZJ");
    tmp_msg_1.conditions.assign("IRJLQKXPMGGJHSBDHZUOXCFICLOOLDIOOYGRFIVUHYLHUTSJBNPTKRAYAZWZTAVKVDNBEVRHAMGBYJBDVCWAMKCHBOZYUSPIPFDQXEVBPENSWYOGZAPRCZWUTHMNAVUWQDOGQKLDFSTYQFWBUZUUGPVTISTCZOSTJMFQHMBMDTK");
    msg.transitions.push_back(tmp_msg_1);
    IMC::DepthOffset tmp_msg_2;
    tmp_msg_2.value = 0.637737279356;
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
    msg.setTimeStamp(0.282598259933);
    msg.setSource(52469U);
    msg.setSourceEntity(177U);
    msg.setDestination(164U);
    msg.setDestinationEntity(147U);
    msg.plan_id.assign("SGJLCTMQAXNDXSXUZARIQMKVOZWVHOCIMPMTDRCKCHAOPKLDPMKATLVDUEZLXGOGXSEBHPRWTMSSUPFZBWRHKUPPOOYCTZFQQKRIMUGYZIHPTBKNEEGICSJVAUFJETOLMVFBYKSVMKRZYFNQXFPUAIBGUXQKHYGJANBWAINRVWSABWEXFFYLEBRFJSDGOHENYRQLQDXWHJCLDBTHJDJUWLHGRGQPV");
    msg.description.assign("THNMOSLNZFKMZAJVUHBIKINHWOCDSZSTYUBUJKUBIVGOXYPRKYEMYTDQTZINGQTZXEAXEXFSNTPIXKGDYVPIFZHORKSGYRXGLJPHOSLCJDUOSJFCAVFQFQJEVHNRRLCSFUSG");
    msg.vnamespace.assign("HJFTOFPMTSTRNIQYUXIWJICTLLGLUMYDMTVZTUGGSBICDKOIILODJZQETWEAPHRFNJHLSPKBQOUOWDKSCWZBSHXGBJPANYXGFVEWJVGSMNOEKHBEXZSVBRV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GDQVCECCTOPZTNCGURTRXIVPPMSOUAJGQNKRWHFCPWMOIQIHBIIYFSTUKICEUELLNKUMMWUYSXJNTJMKZVEWORBXBLDASYCKIVGACCXAHXFPWLDSJIFOTEDPVBXPOFPEYRKJUGYDHLJ");
    tmp_msg_0.value.assign("SNEAXGIWYBNKQKZHYXDVTCPAYCOEJOWVZLGHUZDBMGWVXLZPCWXXRAEQLFSHYUMYNTWBOWLRJSJIQPNQKFSTJRVAXZOUYOLACSBLZGBPCGDIONFERNCTBDZEORPIMUPSKPVGVXTHKGVRFJWEVMUYHHMMYUMLEUWMVQAFGBTQFQCDAQKOSEHLYDKJCZZSXPMFSBTOAQVIIGFCEHPJLLDCKTEFIKFNNUTQBJHKRYUIMAORBUAZINPNWDXDHWJGIX");
    tmp_msg_0.type = 196U;
    tmp_msg_0.access = 115U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ENKFSRZMCXVQEUWBJUKMUSCBUCMNFHNPYOPGVGIXAFALYQMQPDBOBXLYSGYQOJEAGAJWAHDZSQJSWNCKNADYWLZIMVDIZPXPHRXTITLDSTOXCOYKGJZYSEHLQKTSLZFRHBZZKIJBCAIPWFHRNVVIKGSMUOMNGMGGWPXPUBAXRHMWECNCT");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("SRSXVFDJXYJIFIAMLTPQEFYXOPPNKGZKFBZEQIEISPHVLUNUQWLHACARDWWVFYDPEBGYNCZKQBSWNJGCPZWKAFHUCRYVROBTNRETRLQFLWDWJHVNYJKWKFEZXPLZOCDFYSQQKGSCATGZEBPGQZDQNOTNCVOWFPESRMMMOMKXAWCDKVTISMUHVZHVYYLBQJGYNNTVOMCRXAUJXTBIJABXUOUJMHHXZTUIBLBMTSEGDUJKOGIXRUHAILMD");
    tmp_msg_1.dest_man.assign("EOWKSTLVPCNHAEPZSJZXKKBTKRZIGSPAVRCOPBGYCQDMIGPOCMABKXLBYDBESFGR");
    tmp_msg_1.conditions.assign("MPHQZUXAIGOOPMTLWBEYMQEGYGYSZZJDKRCKCIAJXVJHNSUACONIMUUWKZVHNYTQLOPIASSYUUFWNGWMRQEWASDU");
    msg.transitions.push_back(tmp_msg_1);
    IMC::AcousticSystems tmp_msg_2;
    tmp_msg_2.list.assign("BYIXOAUWGVBKEFSVDYYFHEXOPOKWXRTXIECZVTHLTIAXLLPIMJBSVLDRKMMXUWBOPIFXZJEDIBULPVRVXTANNHKBQCTDXPUHBYACQUAYZNZQEURKPHWIGVTDWQAAXDCZAGNKZNCESENKQMYHYRYYIJPROZNEZWGRKRKOMIWZSLHSCSVFLMGCTUSWMOYAFQQPDQQZCSHNVGFFJCGNFLPJCJMHFME");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::VehicleOperationalLimits tmp_msg_3;
    tmp_msg_3.op = 154U;
    tmp_msg_3.speed_min = 0.443694379608;
    tmp_msg_3.speed_max = 0.154584718056;
    tmp_msg_3.long_accel = 0.633197704777;
    tmp_msg_3.alt_max_msl = 0.473430151133;
    tmp_msg_3.dive_fraction_max = 0.0438174424107;
    tmp_msg_3.climb_fraction_max = 0.96034742331;
    tmp_msg_3.bank_max = 0.756924843688;
    tmp_msg_3.p_max = 0.160890866559;
    tmp_msg_3.pitch_min = 0.0649887142626;
    tmp_msg_3.pitch_max = 0.910240293143;
    tmp_msg_3.q_max = 0.290184824451;
    tmp_msg_3.g_min = 0.645028501337;
    tmp_msg_3.g_max = 0.126054126539;
    tmp_msg_3.g_lat_max = 0.662648398434;
    tmp_msg_3.rpm_min = 0.0106439830622;
    tmp_msg_3.rpm_max = 0.665381499108;
    tmp_msg_3.rpm_rate_max = 0.136372888213;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.319710532911);
    msg.setSource(44826U);
    msg.setSourceEntity(139U);
    msg.setDestination(16763U);
    msg.setDestinationEntity(35U);
    msg.maneuver_id.assign("WBJUOKUDTEDFJAS");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 51450U;
    tmp_msg_0.lat = 0.307865836888;
    tmp_msg_0.lon = 0.0240000867267;
    tmp_msg_0.z = 0.662443458464;
    tmp_msg_0.z_units = 138U;
    tmp_msg_0.speed = 0.453655374125;
    tmp_msg_0.speed_units = 146U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.410452428656;
    tmp_tmp_msg_0_0.y = 0.62867022875;
    tmp_tmp_msg_0_0.z = 0.263404628412;
    tmp_tmp_msg_0_0.t = 0.81618812414;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("MRFHRXXWZHBUIXFOPYSVYIWHZOADVSRQVXIDVALYTZLJWPRWSVVBQNNPBNSMDHIPYNSFWCDNJUOIOUSRJLKAKXYCLHSBZFGACMHQPXCMTJXOGJIJCEKTWQKHSCFDDQTGGTVUVIPRXZC");
    msg.data.set(tmp_msg_0);
    IMC::SadcReadings tmp_msg_1;
    tmp_msg_1.channel = -62;
    tmp_msg_1.value = -539521453;
    tmp_msg_1.gain = 150U;
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
    msg.setTimeStamp(0.820676893112);
    msg.setSource(16357U);
    msg.setSourceEntity(27U);
    msg.setDestination(2317U);
    msg.setDestinationEntity(193U);
    msg.maneuver_id.assign("HRYKRUVQPUESIKXOYIAGDNQVXSWZSHGTEBPGFJKQJUMKBTXRBIZZGFOEBMQWRRCFVYONLUIPMSNLJMQPTVOMOQTTLHXSJCZEDWOWSOKCHRDNYHRFMFZKAQWTGNKYZLETDLPBQXLQPBFYYRICGTAJMYICLHXFURAWRUPXHHQAXENEWFVCCTPVUJNOMFS");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 7852U;
    tmp_msg_0.lat = 0.396334423732;
    tmp_msg_0.lon = 0.301530807188;
    tmp_msg_0.z = 0.783532409546;
    tmp_msg_0.z_units = 92U;
    tmp_msg_0.speed = 0.071656804907;
    tmp_msg_0.speed_units = 156U;
    tmp_msg_0.custom.assign("BYRPEUQHVKCMHIZLYVHI");
    msg.data.set(tmp_msg_0);
    IMC::UsblAnglesExtended tmp_msg_1;
    tmp_msg_1.target.assign("FHBIMXWUNPVREL");
    tmp_msg_1.lbearing = 0.386399746266;
    tmp_msg_1.lelevation = 0.698448742974;
    tmp_msg_1.bearing = 0.0259421402338;
    tmp_msg_1.elevation = 0.304649174373;
    tmp_msg_1.phi = 0.936057052986;
    tmp_msg_1.theta = 0.730635290488;
    tmp_msg_1.psi = 0.774292834089;
    tmp_msg_1.accuracy = 0.912375760399;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Event tmp_msg_2;
    tmp_msg_2.topic.assign("RZEFSCGFESPUUTDRMWCEGDAZSLSBYYJPWQQOKBCQDVWJETILHBULJGYRFNCNIGXMTVFEFUOMUSQFTQLEBVHDAVJJANKPNGOPBNGSZOKCFLLODLFCGAHITKNCXUVDOTOWQAMWIDAXXBBGRUGIYLXIBSMSYVXCZNKZYHZXIEWALFGUKEFEUHRLKNPTYMCTQMCZPRJJXKHZVQDWUNBVAJSHZQIPWTRYIZAVTSRHOMRVXPPIPWHDJMJYNOYHK");
    tmp_msg_2.data.assign("NLRLFYVJLXTZTESEFQUQITBHWHQFLTFVEWIVYMPJSTDSSGWLJNPUPSEWRUCBUCMZKNPDQQITUPJGROOVKAGHIONUWBYBCESH");
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
    msg.setTimeStamp(0.965757790923);
    msg.setSource(60363U);
    msg.setSourceEntity(194U);
    msg.setDestination(33447U);
    msg.setDestinationEntity(163U);
    msg.maneuver_id.assign("HYNRLAODANSDIYFONDPTQBEUMCVKPTNDQFLPQAFXEHMOYRHCCZDGPUKSHTKOBRRPOGKXZJYPURJAIEIUTWLWVSLBMQUVFEMRSXUQGHBVZCR");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 18305U;
    tmp_msg_0.lat = 0.133385188435;
    tmp_msg_0.lon = 0.700982381378;
    tmp_msg_0.z = 0.767694046135;
    tmp_msg_0.z_units = 21U;
    tmp_msg_0.speed = 0.686263659339;
    tmp_msg_0.speed_units = 143U;
    tmp_msg_0.syringe0 = 152U;
    tmp_msg_0.syringe1 = 30U;
    tmp_msg_0.syringe2 = 246U;
    tmp_msg_0.custom.assign("YPQGOWXLEZQYXRCVAWLUZACRVFNFTZTYNDFCDSNPMHXZLEUXBZEWZSLVMTDHEIUPEWRTHZZVZXRJUKNDYIHP");
    msg.data.set(tmp_msg_0);
    IMC::Conductivity tmp_msg_1;
    tmp_msg_1.value = 0.998918944105;
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
    msg.setTimeStamp(0.386870065568);
    msg.setSource(10542U);
    msg.setSourceEntity(4U);
    msg.setDestination(56963U);
    msg.setDestinationEntity(222U);
    msg.source_man.assign("SOCXJEOAIRIUF");
    msg.dest_man.assign("MVBCXCTLNJFMQFMGEIWQFNZVBSWKAIKHHAKOCNYJAESVVJGBSWDTYUXXZKBNLULRSIDCYRIWLAYDFHACJIXSNOZQYWBDSGVEALKLMPRUTXRBRFGDICUDUOZPPKPWNVCUGXMWBFPVODBXQKRSKNTKOHSGMRCTYVQNEZJMTEQFVUWIGPZABMPATJROYQFSOTZNEEJSEQYXZGRHMZUTILQLHHOJHIAXMYKO");
    msg.conditions.assign("TMVFBVFIWWPQPLLCUDMUFECABSDILHBKVGNWZBOBXRGIITVIRCWCKZMTLJUXSPHAKXXGHVALO");

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
    msg.setTimeStamp(0.250913713555);
    msg.setSource(27243U);
    msg.setSourceEntity(87U);
    msg.setDestination(47396U);
    msg.setDestinationEntity(102U);
    msg.source_man.assign("JGJGTANKXZPNLPQMRNIXFMGCLCUDOXDKEOTRBIVKVAD");
    msg.dest_man.assign("XYQRJSWXPSWHMBYUCWVOJNIGFAZMTGJNDJRROWTUIKGMOFPQSPZCEBXMLCXXTGVNDMITSALCSDLEKQUGENYXIVOJGSGVYQHHQUYIABUCMQCHFZVJHUHIRSFFJIMOR");
    msg.conditions.assign("OTFMBPZFVYHDKMUPZMHJRRFFQXHNNPUWTEICXDLYGOXOGLVEIFYCANROUJKBTKZULDIZMNJYTLRYNSDCOTJGDWIHQALGXZETCURUBGEZGPMQELXDOAVAWHDJCMQFYEMSQKLQNPRQEYRBMUXSPEWWALNQGECJVUSDJCKZVZKNFBSHJGFLXKOSVSHVBARGBLDZMBMYPPQZFXBWIHUKVPFIWIVKI");
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("CXXTXAWFAIZJUGIKCVODRKVRLJJPJUUVWUCYFQLZIQARFEQSLYSSZXVEKWFGHBFTDZEBOQQYRDVBNPDXLAMQIWDWYEECREUPOVBIJYAFCGNGEKMUXILCRCVPKAISKKMNWPSBKMDSFGAVJVNTRTLGWXBLZYXRWSLPHMHEZNMDH");
    tmp_msg_0.type = 58U;
    tmp_msg_0.op = 59U;
    tmp_msg_0.group_name.assign("QYZBWPRXMJAKSQTHLHNYHPYDNWEAIZCSPBEFYIMFAHTJCWNEJQSPGUIBAXACWSULHFTHJLGHXGSDTCETJIESVRFMVUVONTKFEQVZURWPMFVXNIISUWYZLZNMMCAVJKKDZDWDRBONNBEIQUDPGQTBEWZLIOLRSEYGOGPRPGOUVDAZ");
    tmp_msg_0.plan_id.assign("CMVCOVWPXULAGIAZCRJHOKPFZWBLQQOWGXOPVETZMRKAMMCRPBUKGSHNBOTCK");
    tmp_msg_0.description.assign("CZWTSRUMWJMQYKZYBNCFCVAHPGJYOKBIJATVFDHEFNRQGCIHEUDCYGMLPFAJVSAOSXVFPSYUOJZRWTBHLRXNMLHU");
    tmp_msg_0.reference_frame = 69U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 47802U;
    tmp_tmp_msg_0_0.off_x = 0.247333505173;
    tmp_tmp_msg_0_0.off_y = 0.737331021975;
    tmp_tmp_msg_0_0.off_z = 0.624553061275;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.leader_bank_lim = 0.640192230583;
    tmp_msg_0.leader_speed_min = 0.946030161616;
    tmp_msg_0.leader_speed_max = 0.723427321336;
    tmp_msg_0.leader_alt_min = 0.34738015673;
    tmp_msg_0.leader_alt_max = 0.184306193369;
    tmp_msg_0.pos_sim_err_lim = 0.0416478474119;
    tmp_msg_0.pos_sim_err_wrn = 0.00672565880329;
    tmp_msg_0.pos_sim_err_timeout = 64453U;
    tmp_msg_0.converg_max = 0.174459251246;
    tmp_msg_0.converg_timeout = 25546U;
    tmp_msg_0.comms_timeout = 10870U;
    tmp_msg_0.turb_lim = 0.682854359096;
    tmp_msg_0.custom.assign("QPIWQSHBUNBZXEQCAATKEGMQVJWSLCNTGYLRFKRIIDFIRQTBNXYPBNHDUJLDBUOJRVADDNYMGLSZHNKYAUOPIJUGIUYCZXCVAWYJKWBFOWNMTADPTTPQVXABLOYVXZEOPEOLBVDOCSQURIHESAKHEFEFCHUJWQMPASLLJXMWLJRRFZWDNWOMLKJZOFHGIYJ");
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
    msg.setTimeStamp(0.20880140212);
    msg.setSource(42952U);
    msg.setSourceEntity(90U);
    msg.setDestination(33706U);
    msg.setDestinationEntity(104U);
    msg.source_man.assign("XMHEFNMWFSOWLVZIJNDSGLKLGVRAFZUPEEUNTCFAIYBNCPSKNUBJSJRTDNQPUPLOVJBNRWWKIPFXXBXAWHGKQAOTSOTMCHLMWRMARYSGXRXPKUYAQUGTGFUSBIZLYMH");
    msg.dest_man.assign("RTTPXMVOGZRUBKLUBKEQMRLJFHSYNSHBHEKDFQYHDPWJEDQAMRHYGFCGWSCAPILDZBCMKPADVZZIIETWHPILDJGCJNVFXBYSNIRHVOERXTPRIWMMQRKIZYTUGXOFNVBZDFUKXSLGULQWCCZABXYASZYTGWSOONHYNDRWXWCMVCAXOIPCOVBWDVZYSPLAYMZHQUENRK");
    msg.conditions.assign("MBVXBOKLQGAQJOGYYRIASINHCXUAXFLPRZJOMDMIRBTVYYJZFPWFAKUJSRJBRMEFNOPLTEAWQYINMFDAFBAEINHNWSYLOCLCDWXUTMFWOONSXJLKSMMUKBXMSTASJTEHVEWVCPYGUUDZAGGZPRCNEGIGSQMSRZTVWCDLTNPDTKKENBYHPZDUVPIIHCHGOKQPXXDVZKGULIECXTGVQFRVURRYKL");
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.287436571529;
    tmp_msg_0.confidence = 0.89839727372;
    tmp_msg_0.opmodes.assign("AGVZOYJTHFBDYYQPOKORWUNROPRRLYOIAVIRIZIIGQWCJBQVLHSYEBUDEUQXLCRAXTNFSXNJDSUMMDWVVRCPBNQJSZNQWUGMUKHSMTDGIZEJCAYPACAUGRIBWXZFTAZSNXXCZZHPLFTOEVWZKAPISPTNXXHVCSFFKKYIWPBZQMUFOETGBAJXKDTYPROCKQSGLYCILLFDJKGVERNMEDOJWMTXPHWBMYA");
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
    msg.setTimeStamp(0.279714713768);
    msg.setSource(3923U);
    msg.setSourceEntity(14U);
    msg.setDestination(36351U);
    msg.setDestinationEntity(116U);
    msg.command = 59U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PXFYOLBZSZGHKSXLSIZYOLLOWHPJPBXBGMOAXQGQSBIRTRVUOSDPOEIMDBXERLZIAFXVRTDNNHZVAAINIMUKMAAUVRDSDGVJNHFHEQGDACCBWTBTTLCMNWCIKSTKHOMYDBXYBKWJRFJQDEIDCUPEGWRVHQUOTN");
    tmp_msg_0.description.assign("EPMFTCRCJHIBRPRCKXTOLUHQLTDJHQHECWWDPBNXRZVZZUCEFWQCAXAWFJTGDZHBXFJHNUPTOVPSAGXAKBWQOJPA");
    tmp_msg_0.vnamespace.assign("FECNNVIWMPAFZKCAXTBJRJMCAIAWSRHJGYGGMHFYBRSGXEAQTAEKYDYEKVQHLYPNLOOVSQUTRTWZMWPAYVRMAEZAZPOAUBMQQYCGNQELQMVHBJUVVWHOTBBKZBVLOFKHLSZZHKLGOREWUDXHXTKQUYFXSCBDPSXPTNPGDJTMJHCRKPXDFXLVPDXUIEYSRIITFNGVNJYRCNGZWSDIMWUOJBSKJIMQUZOITJWNNBDEDDLLKZF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BNPLGFZZOIUTYUMXIHGCBOQIQUCLAYZIKSBQGNPYHRKZCUFREDKVHLHHKKUBYXVFSSFEHLNOTVUVJZCENXADZFSOXFIEPGWSCWXJPVTJBDAXFVHXYOLQCNQKQXPMYWDVYNACRTSTJGUXZLRKSZRA");
    tmp_tmp_msg_0_0.value.assign("JDNJABLQPYFVSGZWKEJXQQYMCOECKTHAEOTYOGMPIWMTHZBMHRWUNNLYMZENQVWTKSBJODKEFFIGRLDFBSGLDASOUPIMQKOCUKCEHNXGYZDABUXXQFXXTSRACJRPDXBUHFISPTTJYVZHEVMWNIRIJSCBRBZLBLCWARLJCTJYWTFZPVXNSEKKWWVHGFSHIOJSOOMEYREBLGICUAMRHKDFXLZOHRNDWKVVYVUNPQGUYNFGGQCIXUVAPZAPT");
    tmp_tmp_msg_0_0.type = 79U;
    tmp_tmp_msg_0_0.access = 189U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DRPDQUWCOKIRBZVXINSSWVBOESPNWEVIGKLMXLKFMSWIBCPSWNTXJEFBPQALUQJOXFECXV");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("AGDOIMPXJJXITTSWNZCQZMOLTZBYTEWODBSHDTWNGCHGQFEU");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.group_name.assign("UAUIVLSUAIEMASFRINOKPHLWHWDSTZWHEHGWMSRTHGNIIYYTMGRDFPLFGNCVAZWPFKCJBHQJSXUZQZTRKXFGHMSSRIIWHQGL");
    tmp_tmp_tmp_msg_0_1_0.formation_name.assign("BJSGLEKSSUXNHGOWPIXXCKEMZKCEHYJAVUDKXQXJLUQASXYAY");
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("IAUPFLAAFNIJHUGQQBAIVXCTZPUGYCREFPYWRELTPEDJQRVCXVUSLYTSEQSOJEZT");
    tmp_tmp_tmp_msg_0_1_0.description.assign("EUGEBWLFOZWFIVEWJCLMHDZKTJASDEPGVYYXAJFCBCMTNVNMRHHVDMBBFPLROTAICDYHVBUGJAYRISXZXUQWJNNJNXKWASQFLGVEKOTZMR");
    tmp_tmp_tmp_msg_0_1_0.leader_speed = 0.392255740982;
    tmp_tmp_tmp_msg_0_1_0.leader_bank_lim = 0.922898106052;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_lim = 0.082878711142;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_wrn = 0.608314905194;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_timeout = 54968U;
    tmp_tmp_tmp_msg_0_1_0.converg_max = 0.306474695836;
    tmp_tmp_tmp_msg_0_1_0.converg_timeout = 23892U;
    tmp_tmp_tmp_msg_0_1_0.comms_timeout = 9472U;
    tmp_tmp_tmp_msg_0_1_0.turb_lim = 0.871698014275;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("AEOQFEQAJVIDWFPNLYZYSTYMXMUXWNODMMZPLRCBVJOHAQJSIXAOMXRASPV");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::PathControlState tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.path_ref = 260201034U;
    tmp_tmp_tmp_msg_0_1_1.start_lat = 0.379951045822;
    tmp_tmp_tmp_msg_0_1_1.start_lon = 0.0215915010142;
    tmp_tmp_tmp_msg_0_1_1.start_z = 0.212711483219;
    tmp_tmp_tmp_msg_0_1_1.start_z_units = 116U;
    tmp_tmp_tmp_msg_0_1_1.end_lat = 0.572806913118;
    tmp_tmp_tmp_msg_0_1_1.end_lon = 0.161007861115;
    tmp_tmp_tmp_msg_0_1_1.end_z = 0.822007244765;
    tmp_tmp_tmp_msg_0_1_1.end_z_units = 226U;
    tmp_tmp_tmp_msg_0_1_1.lradius = 0.949836169108;
    tmp_tmp_tmp_msg_0_1_1.flags = 22U;
    tmp_tmp_tmp_msg_0_1_1.x = 0.851821494404;
    tmp_tmp_tmp_msg_0_1_1.y = 0.310124657477;
    tmp_tmp_tmp_msg_0_1_1.z = 0.824808596012;
    tmp_tmp_tmp_msg_0_1_1.vx = 0.709476078831;
    tmp_tmp_tmp_msg_0_1_1.vy = 0.619127728611;
    tmp_tmp_tmp_msg_0_1_1.vz = 0.805540394763;
    tmp_tmp_tmp_msg_0_1_1.course_error = 0.898163779238;
    tmp_tmp_tmp_msg_0_1_1.eta = 32829U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.0373151262798);
    msg.setSource(46766U);
    msg.setSourceEntity(190U);
    msg.setDestination(53301U);
    msg.setDestinationEntity(87U);
    msg.command = 129U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OTMPDJHJVLMYRERGSHKXPPHMDVOYFPOCNFUIWBPSUNCZPZNAKDBPLQMJAWLCDYCSWHJQDIENRKFZEBZXLEFIHUIAJGAAGZSNMHWSTCTANEDRHTRDCWYTLVDOCVI");
    tmp_msg_0.description.assign("JUHFJKLIDWYPSMOULVKHXNWOXCHOTWGWNYUEDITPVSBWYTCDBGIFLIWTTGLJCHARBMMGUWYVUVPHEJEEILRRFTJHCNKDTARCFZQSGLLUBJFQARRGXXIOJKWKTPMDTVURDQUEOTKSXGAGYPQQKHXGZZMOXVSLIYSEHFBQNCMVABXOKDEJEUVQCYLNMVWFCQPBWBNVLMDJMSC");
    tmp_msg_0.vnamespace.assign("UQMVXSVFUGBAFEQWNGPCKHMXIICAWDISJMMUTZFSBHSNQVRPUMIWLLNBFBPXUTKDAUBWRVDYTVOXAPPRPXQCERGJLWXNJOZVNWODSOLARCSNRUAWGIYDVUYHHGLATYVXMZXCETGQHOLEIKKYRQAEWOCADKETTKJFZKZ");
    tmp_msg_0.start_man_id.assign("PPZQYENHXVOTBMAXHZPVJEODVFGQKWGISNBVJEAPZCHYSCBZGCKFOFAYYUTRTSRCOESJFQAUNJFCNGJYJNIXFGINPNQLRWVSBPKLWLTILRUBOZHCKWUQWLCLWQZXMUHZEMYKRN");
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
    msg.setTimeStamp(0.491866096265);
    msg.setSource(24213U);
    msg.setSourceEntity(157U);
    msg.setDestination(17035U);
    msg.setDestinationEntity(150U);
    msg.command = 112U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("INJSRYTLHTOGZPLPYFMTWZVOWKSVJDFMKDFNJPAANVHXFSSDIVMCLQXRQJUQXCOUMBSNMZAAMHDYACPERGUGTENZDBWNRQKVAGSYFOFIQPXFNBTBENIPEVLHIHKRJMCDSDEJVGWVGGJWUPMLBTROUGKWCVIZY");
    tmp_msg_0.description.assign("MGOJJBMTSOGCDAKRSJTBJJNOEMETUCQSFNNZLZSETGZZSFODCAWETTMNHTA");
    tmp_msg_0.vnamespace.assign("GBYTQTWXOFURKSQAWBDARZKJRDOJIOXLRVERMMVYTACYGLSEFPJCERIUWONISSNHPQULOOBFZXHJIFVVHNREOKBKWHHKDPZFSALUBVXNHJWKFVGMNQWWTNYKAGGFMFYKWGYPLDVZMVXICTEULPFOUDGZEPTMNDQPSZTTBBZCPXGAECKQBHCPVMYRULZQK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DYUNXPWEGXKMYIPLGDSFYHMYBSGDPSHBCSNVCIUNZPFMLUVHIXAMEWJTJOGAPVBREJMQSFWNPEUMRLQCLQKXWPTEIQVQJMDQXBCRFALOCHFBZLPWKYAJXVCVKVLHWOABSCVXOXIOCJHZR");
    tmp_tmp_msg_0_0.value.assign("JYSSEYZNVNVZBFSTKXFNNHOMLUBFEUIKRLYJWHQZTNEMJLTSDHNZRQQYYAOZIUGGKMAPHMYAAZBCPDBWGCSWQQGCBWIVAFTPXWXIVUBIMCZCOLEOTUWA");
    tmp_tmp_msg_0_0.type = 19U;
    tmp_tmp_msg_0_0.access = 156U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("SLEYKUVIIKOAJPLGYATXKVKVNINNSMZKYIYPPDBBHCPDMFJEUAYSGRJAHCMBNEMQPFWPNGZNXEPQADHKVITZCBCWUQDEUFQOUZVQWNTBSUSGLUZPYXULSRMXWGFYGTORMJZGTLRNRAUTOFJWIZFOBMXHQMWMAHRLUL");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("DLGMZIAPRZLXGQQFLVHGKZUYUECJUYSVFBAHPUBRVLZFQIZIMXXTWQJKGNNTOCHAIIPKNXXAPRXQJWHWPTBOYYSTIFXMWKFHUBCQRFDEVEJ");
    IMC::PopUp tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 25586U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.82941503369;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.218485760296;
    tmp_tmp_tmp_msg_0_1_0.z = 0.487889599152;
    tmp_tmp_tmp_msg_0_1_0.z_units = 154U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.441225765148;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 78U;
    tmp_tmp_tmp_msg_0_1_0.duration = 41279U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.686709479106;
    tmp_tmp_tmp_msg_0_1_0.flags = 210U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("SMHSDITMKVDUIDJXXKOTKOJLAHVWZZFIXHTSLDABDJGDQFILNCPMPUHQFCCX");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("THPKUHGKNRVRGNVJIPFOKUGOIBQP");
    tmp_tmp_msg_0_2.dest_man.assign("UQZWTYFVKBBMYSDKDG");
    tmp_tmp_msg_0_2.conditions.assign("YAAAXEQFOWKSCBTZCDBCDMSDELCUNRZVRDTYTIOFSHMKUCLRGOWOMKUIGSYRYYXHPCEVBVOGMPAFSVNMRWDDBLIAQOVBRPQVCYNKGVKKIFBKPJUZQJEQQFXTTJESUTKAHZDLEIXIHHIHZTHGNGEZSIBQUMJKJXVSORRVBFFUMFXOAXYALNLSPMC");
    IMC::LblRange tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.id = 210U;
    tmp_tmp_tmp_msg_0_2_0.range = 0.426483883205;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::CameraZoom tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.id = 0U;
    tmp_tmp_msg_0_3.zoom = 197U;
    tmp_tmp_msg_0_3.action = 201U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::LogBookControl tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.command = 92U;
    tmp_tmp_msg_0_4.htime = 0.921880734404;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.0165193706659);
    msg.setSource(27888U);
    msg.setSourceEntity(103U);
    msg.setDestination(62963U);
    msg.setDestinationEntity(191U);
    msg.state = 2U;
    msg.plan_id.assign("TMAQXTFHHLXFUKCCKLTRKOPUBEQACZRVYJYSNMJBZYAUUL");
    msg.comm_level = 165U;

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
    msg.setTimeStamp(0.319186311797);
    msg.setSource(16748U);
    msg.setSourceEntity(107U);
    msg.setDestination(47510U);
    msg.setDestinationEntity(157U);
    msg.state = 173U;
    msg.plan_id.assign("CNKSFCURWMMBJTDBIAERTFXDYPQLCYEPOVOLPJYPPNAVAIABZQRLNCSUIESRTZFWBEJBEJLALQTEEGXDUURKSJRYZWWBCEOBQTDLWSXAFMQOPZYYDNSMNHHKCXCMGIGLTROBUQIZFNQIIOLJYRBMCOTOXCAXKGQJNYVRTUNFGNZUUDTMXHIMFEHBAYDNSSZMZFJEH");
    msg.comm_level = 189U;

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
    msg.setTimeStamp(0.110772994017);
    msg.setSource(11133U);
    msg.setSourceEntity(32U);
    msg.setDestination(61689U);
    msg.setDestinationEntity(253U);
    msg.state = 78U;
    msg.plan_id.assign("OJSCNTOEFTSHZYUVCWERRUIIFYNVPUJZXVIOZPHCJEQBGWDBJWZILYOYCYQDQBJFMXRVKDCCTKTQVHQAUXMIDACINMMSHRPPZSRSVPQPNUERRXLTDZYSLEXHORKBALAPULWKZSLKK");
    msg.comm_level = 109U;

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
    msg.setTimeStamp(0.7600175979);
    msg.setSource(35316U);
    msg.setSourceEntity(62U);
    msg.setDestination(47547U);
    msg.setDestinationEntity(55U);
    msg.type = 39U;
    msg.op = 3U;
    msg.request_id = 19302U;
    msg.plan_id.assign("PGRUKBQSHYHFQQIQRGTAEHZVEAMZOWAUDEJHNJHYWRZMJCJKSPDZUGGAKABTJIBLDKSQLERJMKICPVVTFOFJZCIWFWTNCNWSYYRCKHLOPUYMPDHCWNGAKQBTUNNIZZCHSRTILEVGLUHEBSDYGITCLSRYHXRTDVMEFZNOZBOXKFRUQQWPFVAWYUXDVD");
    IMC::SoiCommand tmp_msg_0;
    tmp_msg_0.type = 13U;
    tmp_msg_0.command = 50U;
    tmp_msg_0.settings.assign("QTFTOHZKSVQOHPXFMRELWUFJRUJEVEOOSZPBWVSAKXXONFIJXLGUWFLSEHQNBBFFWAEQRWMLDJIZTXVGBXALNBYSUUVDOYKISLCEZMNNXYZMRDHQNZABIVTVQWOETAYAEIWLFMUBNGJYACDHRIPPPJEDYMMPTLDQYPHMWKCHSTZJJKCRVTKZORDZDHQSOKZSCLPBGV");
    IMC::SoiPlan tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id = 1881U;
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("PZOGWUVJXDVWBDRZLVGOZESQFOQBHKAOBCTISQIAHQPYKBLIIGRJNSZHFWTVPQXA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WCDCMHKBMAQJHBIUINGPVWQUFMPSNEHVSGPIEPVNPORJGVJYXSXKVBQJOBPNAXAHPODXODZSCSLBTVYYGBNKOSRGQJHLXNGAKILLERZIKNMYZFAAROEDUIUOQQRWSHLTYISEQWCXAUOFMWMYZQBK");

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
    msg.setTimeStamp(0.254523340641);
    msg.setSource(1520U);
    msg.setSourceEntity(181U);
    msg.setDestination(54615U);
    msg.setDestinationEntity(93U);
    msg.type = 172U;
    msg.op = 126U;
    msg.request_id = 21868U;
    msg.plan_id.assign("RFWUSCXLDMPWNLJWHWHVBTLRPGBQXGOAFWJ");
    IMC::TelemetryMsg tmp_msg_0;
    tmp_msg_0.type = 147U;
    tmp_msg_0.req_id = 2814768921U;
    tmp_msg_0.ttl = 10038U;
    tmp_msg_0.code = 184U;
    tmp_msg_0.destination.assign("LPELNWLQMKFDOTKJPEAFQOVPGIESFUSQKFLSJTRTCNOCOLFOBVSOTUHJRQEJUQMOTXJHZIFXSPRRMTNCXDFUMXIIDLZDMEZRQKZNLNQNPERCBATYGHJWIGWVHVKMGLVGCYPCJJBVECSENUGWPWXDGMCIBYFZHGZRRYXDONMNTEKYSASYJDWSSAXXBYCHGVWVWKZFIWHRLACGAVBLDJZQKHVFNPAYKQBXQDR");
    tmp_msg_0.source.assign("GQTIKFJCKSQRQOAIEUMKKCZNNYEBYHUWUNTMOOYO");
    tmp_msg_0.acknowledge = 136U;
    tmp_msg_0.status = 79U;
    const char tmp_tmp_msg_0_0[] = {119, 120, 60, -76, 4, -34, -110, -85, -48, 77, -90, 88, -36, 8, -32, 40, 45, 114, 107, -94, 78, 75, 100, -68, 81, 77, -104, -88, 9, -84, 89, -2, -6, -128, 108, -42, 125, -22, 71, -118, -105, 83, 34, -82, -114, -45, 8, -92, -14, -76, 113, -90, -108, 67, 49, -58, -123, 110, -6, -74, 118, -76, 65, 114, -25, 17, -32, -66, -3, 121, 100, 85, 12, 27, -85, -45, 80, 5, -123, -99, -54, 98, -91, 107, 57, -77, -57, -55, -41, 31, -60, -65, -105, 126, -33, 76, -60, -17, 106, 81, 1, 8, 106, -45, -104, 91, 8, 46, 80, 50, 45, -96, -1, 40, -43, 123, 1, -15, -91, 53, 33, -68, -7, -2, -1, -19, 118, -48, 37, 85, -110, 56, -27, -37, 120, -34, 39, 1, -45, -64, -13, -40, 41, 52, -117, 25, -122, 66, 124, -66, 112, -10, -57, -91, -9, 95, 89, 125, -28, -13, 37, 125, -108, 112, 27, -111, 98, 49, -15, -97, -87, -59, -121, -90, 71, 49, 19, -48, 100, -62, 84, -47, -97, -5, 8, 115, 94, 124, -121, -31, -86, -122, -125, -71, 27, 120, 68, -2, 122};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XJPSEPUDJCJGVUODWQDWJXUNUKXZBDKQQRGYBKNYFJYWWWDXMHUYRGNVHXDJSLMPYASWLQYZETEABXPYLXJLIFPJEEMZIBTSFGHLWCTAZTARSKQCFMGAXEEPNRTVVCZFICGWLAJHGLINQUBWVKSJMQHRIAXDRMOGNSTZYZZIMKHTC");

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
    msg.setTimeStamp(0.788327602958);
    msg.setSource(41192U);
    msg.setSourceEntity(153U);
    msg.setDestination(22669U);
    msg.setDestinationEntity(233U);
    msg.type = 242U;
    msg.op = 138U;
    msg.request_id = 54766U;
    msg.plan_id.assign("MAKGFBOBAXJJUTTAFZTXMDFPI");
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.284847848343;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YOTHEZKNBWTICIVFIRHWRWVPBQJKIDLWEONVLGYCOTNZZYAXHPQTBXE");

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
    msg.setTimeStamp(0.260466799988);
    msg.setSource(16077U);
    msg.setSourceEntity(251U);
    msg.setDestination(33669U);
    msg.setDestinationEntity(74U);
    msg.plan_count = 63593U;
    msg.plan_size = 2971666908U;
    msg.change_time = 0.599728708341;
    msg.change_sid = 6817U;
    msg.change_sname.assign("QYFOTSYWFWQBKTUCNHVEHJNHWOSCPVBQJTYJJCVBLVEUATHMODUTJIBPTCSKQTKAGDRSLLQWBMQBIZHWRBOOPZCACIMCHEDSXYJFWRYFVUJEPWEAFIESNAWDNPUIXMTXXFNMXNZZPXEGRKVOIONMKLDJSYYGOOZIPZLKDQQBUEDNVDHMFCBDUMAAURZJRRVKRQFGDWGHNSLXKEYUPLQ");
    const char tmp_msg_0[] = {80, -120, 98, -99, -122, -36, -73, 116, 55, 51, -77, -13};
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
    msg.setTimeStamp(0.669444181475);
    msg.setSource(51874U);
    msg.setSourceEntity(3U);
    msg.setDestination(10774U);
    msg.setDestinationEntity(234U);
    msg.plan_count = 44842U;
    msg.plan_size = 891012517U;
    msg.change_time = 0.611507771666;
    msg.change_sid = 15449U;
    msg.change_sname.assign("WJCIBIGMSVGSUHPFXQKDIOMHDJMFLNZHCLDZKBLMSNSEXNABYKWAIPXPDNEQEFSPWSKAQXBDGEDYUEUOFXZNFKLIEGPMPXWCAHVSYWTVUVWDNOFYPXOLYMBAJCSQZGBZLLJJTCTWPTGECRRRXOJUENNRAFGTVRZIJUURFYAUHOCTUCIDKQKDHOKZJCEMIVVKKDFQLBTHPTZRWI");
    const char tmp_msg_0[] = {-88, 59, -123, 86, 77, 90, 125, 45, -102, 0, -22, -73, 63, -83, 81, -11, 14, 105};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JCLRWFDJPPFEAHTJQHSZQUDOKMRUNABVHOVOJLTVBXLYXSKAJVLMJLCKPUMFXNXHIAXBGRQTITFVJVAXKGVWRNRFGSYGUNDMVUDJILWGUZREPPETZIGQCI");
    tmp_msg_1.plan_size = 10232U;
    tmp_msg_1.change_time = 0.536551024829;
    tmp_msg_1.change_sid = 32197U;
    tmp_msg_1.change_sname.assign("IHTEOYKKZCGMSESWNQGIUHJDVAJBQIFXBOSONFXVYIGHQNVRRNSZCOAPFTGCUUJQUHEST");
    const char tmp_tmp_msg_1_0[] = {-101, 16, 101, -108, -8, 108, -15, -36, 95, 82, 71, -47, -58, -127, 13, 54, 109, 11, -91, 8, 108, 81, 10, -24, -65, 39, 91, -86, -45, -77, 45, -55, 7, -38, -43, 107, 114, -82, -80, -76, -23, 32, 121, -80, 22, 11, -100, -93, -54, 39, 48, -37, -113, 61, -100, -29, 46, 61, 29, 30, 34, -65, 52, 95, 72, 19, -36, 81, 112, 112, -106, -101, -85, 99, 103, 52, -116, 116, 44, -99, -100, -59, 102, 22, -19, -11, 44, 61, 99, -110, -93, 13, 74, 64, 51, -21, -82, 103, -1, 98, -62, -101, -63, 96, -24, 21, -25, 123, 30, -96, -102, 106, -27, 20, -108, 32, 8, -78, -101, 29, 20, 18};
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
    msg.setTimeStamp(0.810733313707);
    msg.setSource(43644U);
    msg.setSourceEntity(240U);
    msg.setDestination(22955U);
    msg.setDestinationEntity(126U);
    msg.plan_count = 13780U;
    msg.plan_size = 4010882424U;
    msg.change_time = 0.256189751554;
    msg.change_sid = 1767U;
    msg.change_sname.assign("VSAWDFICYXOPDSJVYXEIFNICGRLLBJFYJBTGHUMUUBIKVFVQICTWZDAEAEHTHSJXTWBLXJVLXWZXUBTZUCJILSGOPOYCQDCVNOKFGGJNYMYEEPKFAQRQLTIFIFHAKRPDDOWDASGKWRDBRTFHRZVNTSXAOUOAZWIKZTNPYQZPXWGURSHMTSBHQBMAMR");
    const char tmp_msg_0[] = {-4, -11, -7, 9, -72, 106, 19, 44, -100, 23, 66, -84, 25, -42, -38, -118, -117, 4, 73, 71, 61, 38, -12, 43, 47, -119, -15, -3, -22, -70, 60, -6, 42, 76, -126, 41, 118, -49, 15, -45, -83, -116, 3, -125, 99, -21, 90, 29, 50, 42, 80, -104, 65, -29, 75, -16, -85, -88, -55, -42, -14, -5, 26, -54, 91, 96, -95, 104, 69, 17, -24, 4, -11, 87, -46, 49, -11, 71, -56, 37, -71, -40, -46, -3, 61, -4, 32, 35, 74, -117, -7, -125, -128, -59, 118, 91, -70, 51, -73, 40, 64, -20, -21, -106, 59, -34, 95, 120, -108, -27, -78, -49, -61, -56, 86, 59, 17, 18, 110, -9, -71, -85, 99, -16, 39, -94, -44, 58, 34, 56, -14, -118, 39, 120, 39, -40, 25, -96, 67, -96, -103, 66, 93, -109, -65, -13, 8, 5, -56, -69, -50, 60, 20, -76, -36, 125, 15, -41, -1, -48, 80, 50, -19, -33, -83, -72, -126, -85, -88, -120, 8, 66, 23, -125, -90, -121, 42, -51, 49, -63, 109, -121, 90, 125, -105, 64, 12, 55, 79, 98, 17, -64, -71, 32, 125, 55};
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
    msg.setTimeStamp(0.526309068368);
    msg.setSource(54352U);
    msg.setSourceEntity(181U);
    msg.setDestination(57164U);
    msg.setDestinationEntity(232U);
    msg.plan_id.assign("IXVMWRJVELLGBJHGHDRUYAUUHIIYYKHKEFPZHUHJECCUNKLIKNFFEPDDBRMBUNVDWOATDGNCSVOKRPKQNYBQILJGNKLWNRMZDOVOSSTUPMDCILMNOXAGADJRFZXZWBEZPXY");
    msg.plan_size = 51541U;
    msg.change_time = 0.879266973728;
    msg.change_sid = 48718U;
    msg.change_sname.assign("DCYAJGXBULBYICEGFFGRFHMJBNKCRGIMYWPZNVTANXGVUVWCKPZIZGHLRYATVQJUIOEEORBWMZKCASGJFHBKDWNDOCTTLDZPCZOJLKFHYFLSWWNSAMHXYGIRRDQZWXPOATEMCRBOSXDANEVIQNBRXPCIUPTXTCENEVFRNBZUULQXQQFVEVBJLOYANSADLGQMHDEDWWSVZQQKSLSHPASMKHTJZXKXWRIMDIFVOKJEYUYHI");
    const char tmp_msg_0[] = {-85, -112, 36, 54, -115, 19, -128, -104, 49, -100, -38, 92, -87, 123, -118, 79, -66, 3, -66, 52, 80, 1, -4, -74, -79, -67, -117, 7, 45, 19, -53, -42, 14, 35, 108, -127, 33, -51, -116, 94, -105, 84, -15, 8, 106, -90, -123, 116, -108, 106, 24, 25, -90, -90, -14, 68, 65, 93, 6, 6, 59, 120, -43, 63, 45, -116, 82, 72, -52, -104, -98, 78, -56, -39, 65, 29, -124, -73, 12, -122, 34, -81, -118, -82, -66, 81, -35, -67, 51, 50, -118, 126, -114, 54, 115, 15, 61, 98, -115, 83, 26, -10, 47, 19, 109, -94, -72, 2, -59, 28, -52, 112, 9, -45, 6, 116, 83, -111, -50, 54, 121, -9, -26, 16, -37, 16, 98, -99, 2, -13, 20, -86, -89, 15, -110};
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
    msg.setTimeStamp(0.804702557572);
    msg.setSource(54884U);
    msg.setSourceEntity(51U);
    msg.setDestination(7646U);
    msg.setDestinationEntity(178U);
    msg.plan_id.assign("HKBFRONDWSUEWWLFFBOQUIKXSVKMAQMBYGJXCMCTGSJJKRZGSXTGPCBXBLRXNBVFTYVORCZZWAFYOETCHFCNVHSOCRYSDDGPXMOQKEOYZIZWAJXKHQZPQDBTULXAHZEIZAGIRDZJJBYPIEIUHMGWNBBQDLLQYTLJFMNEULQTVDGCEDSCYWVS");
    msg.plan_size = 27794U;
    msg.change_time = 0.0828604182586;
    msg.change_sid = 42364U;
    msg.change_sname.assign("FZEVMQPEGHPLXFWCEOMQBQXCYIFWCGMJTHYWUALJOIUWPSVVGRNOLOSZDJXLCCKGZFIXNTKHBQEKCZDQQKBRRVRLJPLBATAPIGPJPSATTNLFYUURPSVURDKIBQQBYSYBTVSKKNRMVTVDKSETEIYAOWMAHPODCUNZHZ");
    const char tmp_msg_0[] = {-92, -24, 117, -58, -13, -33, 88, 15, -3, -26, -85, -45, 56, -51, 112, -106, 12, 120, 21, 58, -113, -92, -99, -122, -3, -119, -70};
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
    msg.setTimeStamp(0.0869321852048);
    msg.setSource(29354U);
    msg.setSourceEntity(226U);
    msg.setDestination(16465U);
    msg.setDestinationEntity(28U);
    msg.plan_id.assign("KCODUSWQIAUOPPBIPRALEYPLAIZYBIKYHMXHMFRKEDRGZIVPQETUEDXROERPKXSCYRRUZWAJMIXTFDNTSOVSZWKXGPKFDONYVGXOEVLMZFVHADNCKYNRTFHCMSVFCNKJMOBAYYJQXWVVPNJGAFUCELIHKYYQIWBNSVTFSXXTLIEWLFWDAAJUFJVSUDRMQGESUHCWBNZMBLDZOTJCGJHHQLBQMBPI");
    msg.plan_size = 25374U;
    msg.change_time = 0.961820565071;
    msg.change_sid = 40588U;
    msg.change_sname.assign("NJFNBNUJJRLUBYCAFUXCGYVTKPTICIVOHUQZPEJERQZNAXVLDINOMCTZFRESZUTAVLRSRTETWZCJO");
    const char tmp_msg_0[] = {-3, 33, 44, 18, 99, 65, -63, 7, -105, -124, -3, -48, 21, 50, 13, -16, 103, 37, 27, -76, 67, 29, 88, 82, -118, 61, 61, 25, -3, -7, -96, 109, 60, -93, 98, 56, -97, 126, 47, 69, 97, -42, 22, 15, -86, -53, -7, -32, -27, 7, 54, 19, 41, 116, 68, -12, 64, -53, -8, 67, -60, -76, 82, 104, -109, -78, -95, 14, 65, -92, -121, -16, 80, -79, 105, -123, 91, 15, -14, -4, 4, 72, 120, -20, 30, -82, -115, 61, -20, 102, -2, -46, 56, 58, -105, -59, -37, 51, 108, 8, -49, -90, -24, -40, 67, -26, 15, 19, -123, 114, -13, 124, 3, 121, -79, -60, 106, 30, 70, -60, 105, 93, -120, 32, -69, -38, -55, -48, 29, -6, 54};
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
    msg.setTimeStamp(0.56336322694);
    msg.setSource(58159U);
    msg.setSourceEntity(240U);
    msg.setDestination(38472U);
    msg.setDestinationEntity(110U);
    msg.type = 247U;
    msg.op = 90U;
    msg.request_id = 1887U;
    msg.plan_id.assign("ZNWOVZBUIOVOMPBCYAPKBZWFJXQUCPJNRDQDCNRFIIPHRVOTJRIUMRQFHQTDWLJIWNUQLAICGJIARMEXRMBQEEWZTWAOGHNDBFECYSHHJTSUIAIEELOQGTPSVLCKVHXAZCXPFZXBXHAFSHSCKLMMWMLDDMVUYNXTLCRMRGKNEZHODSGGLDVWLYPBKICUUNGXQQZAJTXXVOYEKOZBFEKNMJ");
    msg.flags = 51833U;
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.306099012037;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BVFXMETKGRKSBSHYRPACEPTBLWZPHKMRKAELLBYXIYRRKMVQLJBIHMXEGKFUIRVRWPFCOZZCPBIXLTOXLWEQOJEUSZUHGVDVNPJOYTAVINJNGDTIJILIZLEUGMBFHJUOQKWBQDDKSCXXNISHAJPTHWMQTWZSCEPGVTQKJNEAZTQYNACULGFSUXOCKFDFLWSZADNVRWRFUGEFRCXBQVNYVZQFPHHODMDZOGUOYYJNNCJDSXMIWMAG");

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
    msg.setTimeStamp(0.0389268854323);
    msg.setSource(14702U);
    msg.setSourceEntity(203U);
    msg.setDestination(58236U);
    msg.setDestinationEntity(88U);
    msg.type = 103U;
    msg.op = 72U;
    msg.request_id = 25066U;
    msg.plan_id.assign("ULEEPJSTIZVKWJJGIUFXUYJYHMWRGUELKDURWSWICQILXTTJSHRKFBUVMQDVDAHRWSZPESLLCRBJRVXODTZSEQVHFHAKSBAFRMRZQIFCHHNWCANCLLNJCJGBQUUIGKOSKYTVMSQTBXFOXFXXZZDJWIDPOO");
    msg.flags = 26319U;
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SSYUUGWTHDJYWKLGZICPCLOPZHKHGBXCDDKPQIVXZPVNYAPHAEIECQYVUVMBSSMXBEENTBPNUBRAVZBIQORXUWJQDARWEHVLJFLNDUORIRLLDOFDWTQQVEFWKZAZBDPOMDJNULLNQCXMKVLKEWAUUHRIHPTTJYSGXEXYFRYIKJMIZBTIJYQDVRQXNK");
    tmp_msg_0.value.assign("LDLJQUGSGOAUHREQCVDSEKBNYPHNTNEOLIRZRQCGITKOCVPGCOEL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BHZCAFWYYYIVSACPRKJXEXVGRMRIRRYZDGDJXAAGCOXKTTAFNKHLFNUSNPWLEZZQEWOKYOPHKBCJCRDTLYMTLMEIPWFTLAZLZOVVUTKYQLEUQSBHGUMTVJQMQTSPJSAGIUHGZBVRDSPHKOADNFWFKGPECFLQCEWNHXOJBIGOIQCZHDQDTBEBMPBUKVFAKMGDQEITCVNHPUPXJQYJNSRDBRZMYONFISDVXINZUXCRSLSWOOGVWHEXLJ");

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
    msg.setTimeStamp(0.73379422916);
    msg.setSource(57030U);
    msg.setSourceEntity(222U);
    msg.setDestination(62225U);
    msg.setDestinationEntity(107U);
    msg.type = 174U;
    msg.op = 70U;
    msg.request_id = 57189U;
    msg.plan_id.assign("JDWXQSTPNWGRYZLHIEGBQSJJIGOWUKJEIBWINIGKMRVITAWYTEIZAHLHOMPNMUOHLQLPAICPBYJAWCDSRXHDXJNKBDNZQUMWAXLSBIVDAPYOUFXVRRSAUJLDLDVZPOYFRYNOBXEPAFZOJPVEKKCVNGEIYUKDUPFUUJZTTSUYGHMOTGAYYMBR");
    msg.flags = 36887U;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.0774939974709;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RZYBPCAYDAQUVFVUSFYYHDIROGBUHCEFZQADPXBMIWQQVLJHJFLBIWKYOKQUIALJCNWXXFIMFESGMWKPXPBVOBRZHNTJTQMMIRBAHPSETHUUDJGAACNUJDCXREVWKTQCKWKZMUIYBTBNGI");

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
    msg.setTimeStamp(0.407025487826);
    msg.setSource(46377U);
    msg.setSourceEntity(111U);
    msg.setDestination(54883U);
    msg.setDestinationEntity(147U);
    msg.state = 215U;
    msg.plan_id.assign("SBYIFGGLBLNQAFIVHTAPLEJRYPWXEJTIYXTELRYNECUKPPCNAFQZFODVEOJSRUWFLZHLIBUYIACWHY");
    msg.plan_eta = -2048054131;
    msg.plan_progress = 0.920369657825;
    msg.man_id.assign("OUZKXOCTCRANYHYUZBQZMKMDUVRVVLMB");
    msg.man_type = 138U;
    msg.man_eta = -854824854;
    msg.last_outcome = 147U;

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
    msg.setTimeStamp(0.664542213898);
    msg.setSource(14889U);
    msg.setSourceEntity(183U);
    msg.setDestination(17120U);
    msg.setDestinationEntity(228U);
    msg.state = 190U;
    msg.plan_id.assign("ITHFWMHXTSQEKFQDZVTKRBKTUVKWSISDNBAJCAOSQQETLYEHGLCXHKKFOJCJNABZJULKSGYUXVNESDOJLPFLKXXLRDVIJVDHBDPUTNWGOIZETB");
    msg.plan_eta = 516065397;
    msg.plan_progress = 0.343697330532;
    msg.man_id.assign("ADLURDEGIFZYYLHDCXLREVCRBEEQAINQVBMYJSFPKGTKVRIVOGWEZOXHUPJZAUOZXVNYPESBMNFSASGLTAIDLMGMFWKYIDQXEDMPNHUHHBVNTSQYDNQCOJKXCICFYGXKOEJVVEZTJBTCCGANAWABFAVHTQRWUNPATILLBJSVKGZPOP");
    msg.man_type = 11072U;
    msg.man_eta = 1054718067;
    msg.last_outcome = 80U;

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
    msg.setTimeStamp(0.318129698206);
    msg.setSource(48880U);
    msg.setSourceEntity(26U);
    msg.setDestination(5529U);
    msg.setDestinationEntity(174U);
    msg.state = 75U;
    msg.plan_id.assign("VHCNJPRBEGGCKSTTBRBZAYHHEPYFUIBZPUBMLPVPJIMDSKWCLUTWUJMNDCKWKBARWQHLUXXFQAWGYHTLIYOCRLGDGVPENVAOUIFIZWEMDXPHEIOQFPLEZOESGXYLVMKQNGJUYIVXVH");
    msg.plan_eta = -1329654038;
    msg.plan_progress = 0.443788712426;
    msg.man_id.assign("NPFFXXDLMHABKRIMEDEJMTFRVBZNMMAYRXCGWOGEKNLJTKPPRRFCXNGEEJXAZIEZHDIVLKIQHDPYMQKCBVIHDRNOCSZHBAZQTLZCSVFKNTEZRGBHUMFKICSQDHIAAQZNVWAFCBWGAGZOXNERFLLASOYSMHAZCCJYJSUYXONBITEPTGBPTYUGWOTVKNKXHQGYTPFWTDJEQSW");
    msg.man_type = 4567U;
    msg.man_eta = -568996019;
    msg.last_outcome = 37U;

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
    msg.setTimeStamp(0.55087604877);
    msg.setSource(30083U);
    msg.setSourceEntity(152U);
    msg.setDestination(56403U);
    msg.setDestinationEntity(247U);
    msg.name.assign("YXQNVDUKWHZYZCWYJUXYTUKIGEEUJJSHIDLRPNIPCVFTMGOFETEWYKTSOBHIUZHXNWQIDTYKSJLJQYNXDZHGHGHXGJQSELOEZDIPMLRWABLRBYNBDPL");
    msg.value.assign("TSWIIDDHGTCYUHCLSFBRKPRGILDZLYNXFLVUKJYGVUKKBFNJLYGHHNFMUQJDANIVKBOQUHQXDFPKEJRXWSU");
    msg.type = 164U;
    msg.access = 94U;

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
    msg.setTimeStamp(0.956538535778);
    msg.setSource(19463U);
    msg.setSourceEntity(14U);
    msg.setDestination(33471U);
    msg.setDestinationEntity(97U);
    msg.name.assign("OFWJXPPEPYOTKPTBHDABREXNPMSAMUVFCDYKBIVBNTRGBYFCWMGMOYAMXIOKXNQUCQCLQEDRDVDBFJTGXNWVCAZDUMEVBLGRKJHJIIPYVQFQSFTKULIGXM");
    msg.value.assign("OHUHIDTUESLAFCRVXOIYQTSXEWXQBGN");
    msg.type = 32U;
    msg.access = 159U;

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
    msg.setTimeStamp(0.167088411299);
    msg.setSource(27075U);
    msg.setSourceEntity(40U);
    msg.setDestination(12103U);
    msg.setDestinationEntity(236U);
    msg.name.assign("MJHXYUANACGBYXAPKTHBLZLWOQRGVGVAUYDAQCCTHXNBJZEJIFEBINYMPRYCGXNMJYUTLVOKUBUKCVWWDEGDRXCSMAOFVIQDQVDSJMFFJSMSPTQEUABVTTHYSMVLJZKRWCJDNGBELHWQOLYXSHIOLFPTYWOKRICMEBZSFKPSUHJLUAHDOWUZMQAFBXQNELSAZTOZZWZINCKHYQQNSORGPCLPGI");
    msg.value.assign("OXRPLYGBZRTISFKWQWCTCUSIPJFIPNDHRTWTGZMTJRJBFOQEMZZOHPLKTGLHURJCRJQWWDVDZDEZCMKUVUDVYSWZKEPKXCXQZIYFPXLBMFNLBP");
    msg.type = 172U;
    msg.access = 179U;

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
    msg.setTimeStamp(0.86227591527);
    msg.setSource(49418U);
    msg.setSourceEntity(131U);
    msg.setDestination(53823U);
    msg.setDestinationEntity(21U);
    msg.cmd = 135U;
    msg.op = 165U;
    msg.plan_id.assign("ECEOTGNDZKWCTPI");
    msg.params.assign("IRINDPTCPEQIEGFCSODNALAXKILVJAPZJSBZHVBARGGDAVKLRWWYHRCQKCVWPHZYKLMZTQFTQMWGQLYCESOYUPGTTWWPUMXGUFQLSROKVMUOVBHOBZIHUJUVIJHXMTLCJRDSXEWQTELFLSQEREBDOSXSAGNEJKNWJTOWEYNEFFRYOZOUBPAAZQPBSHPMKWYRDFDCKIACDNXITGMLNJAUZFSMMNUDVHJCGVGZTXXIFPYFBKDBM");

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
    msg.setTimeStamp(0.29742113937);
    msg.setSource(40788U);
    msg.setSourceEntity(153U);
    msg.setDestination(21298U);
    msg.setDestinationEntity(126U);
    msg.cmd = 182U;
    msg.op = 69U;
    msg.plan_id.assign("CPXNDXKNPVCYXRFNDQSWIGUFN");
    msg.params.assign("YSXGMYOAWXJSITMPMHMOVLLKPJVAXSSYIETWDTYBAXAWIWAEFCWQJUGIXEVKZPQZDOQMCKLIBYZYUACKPMHCZAROIZLIHJHTVPNXKPCBDTGRHWRXWXSKBXDUFKDAENDRJNBXQZWTJBFEUOKGFVWLCGSSDQAFHZUCZUUHVOGYJDFZPNELEAHOFMIYBHYLGQSFQDNEJQNNCBMLTTNKURDWOYJVGFNURVEMFGCHRRZMPITLOQLOS");

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
    msg.setTimeStamp(0.292199748197);
    msg.setSource(16703U);
    msg.setSourceEntity(144U);
    msg.setDestination(20397U);
    msg.setDestinationEntity(76U);
    msg.cmd = 21U;
    msg.op = 217U;
    msg.plan_id.assign("VOZRLIKLYFJPPEXMQXPYTUSAHUXGCSEDYNYSGMTVDOIZGCRTCCDQMRSLHBYWJYAZTKLUANQZCECOMJWTNYSOQPFELNKSBBZWHTTOOXKIWDKCHCTATBUHROXPVXSUKOXJRFDAVDZTSMGNEHJFPRLJCFIEBQLLVWSXRLFVUKQSEHRERRAUHHUWZGMF");
    msg.params.assign("LFMVSXYCMBZBMBFTAJADXOKSEYNYTWVNQJJZVZGXQNHCDMBLOSBQ");

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
    msg.setTimeStamp(0.289203780673);
    msg.setSource(31375U);
    msg.setSourceEntity(128U);
    msg.setDestination(11696U);
    msg.setDestinationEntity(130U);
    msg.group_name.assign("LTKMWNMSPPXHZOCPKUCGNTQJMUYRWEELLWSEDHULYIMIIXGYBQDABEDQONCYXPRFYBCCKWJXAIJPOJTMYIATQQUMWBYPNUHGZNBVKKSVMLZFOZXXEHDRROODATSQCTVINFBPIBIHNALLSVORZDORRXSYGTUMJKDAEKZCVGWFDJWJPAOEQGHSRSDQXTKWKFUUVIW");
    msg.op = 185U;
    msg.lat = 0.557497265908;
    msg.lon = 0.496175610511;
    msg.height = 0.35497471516;
    msg.x = 0.698474792886;
    msg.y = 0.886514499804;
    msg.z = 0.990699410124;
    msg.phi = 0.672381576606;
    msg.theta = 0.997568700327;
    msg.psi = 0.235538307974;
    msg.vx = 0.948717413059;
    msg.vy = 0.491989142715;
    msg.vz = 0.655280292246;
    msg.p = 0.854426319382;
    msg.q = 0.131206504134;
    msg.r = 0.136284288485;
    msg.svx = 0.225613498448;
    msg.svy = 0.366849559871;
    msg.svz = 0.293409355022;

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
    msg.setTimeStamp(0.459384502076);
    msg.setSource(36677U);
    msg.setSourceEntity(253U);
    msg.setDestination(30746U);
    msg.setDestinationEntity(155U);
    msg.group_name.assign("DKLZFQKWKNQHUIAOLKWQDSVWXPYSZYJVBTJXMWBOWVHPPUVHFCYLSZNFKFIOFEZOLGZLITISECXMLLMBBGHGSMQHBDLGPVJBYOUKFAOJXUBRUNTZPETCWDTZEDGGJDILOQCPYNKVQEIMAHHQGPEGKVTUMFAWPZCOEDJIXLNTUMIKFMRGURRRNRGWJWAJDOCFQYENMZKJISBSRIJASNM");
    msg.op = 96U;
    msg.lat = 0.497915461004;
    msg.lon = 0.908709231681;
    msg.height = 0.371459173827;
    msg.x = 0.661862484425;
    msg.y = 0.0388103981703;
    msg.z = 0.641465987047;
    msg.phi = 0.400308333335;
    msg.theta = 0.0609220916824;
    msg.psi = 0.0333144464209;
    msg.vx = 0.735889346425;
    msg.vy = 0.171853165162;
    msg.vz = 0.311587320152;
    msg.p = 0.0962478240806;
    msg.q = 0.23180750083;
    msg.r = 0.920358446964;
    msg.svx = 0.230429644203;
    msg.svy = 0.912299680071;
    msg.svz = 0.108640961094;

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
    msg.setTimeStamp(0.430981923854);
    msg.setSource(3077U);
    msg.setSourceEntity(254U);
    msg.setDestination(29573U);
    msg.setDestinationEntity(167U);
    msg.group_name.assign("TIVKELRVQBKBGSYGDATVHPUUMLJJTJEWNODUWYWYXUZIJMDKCSXASOIVXFXPTXLTSVGYKTENHHAMRHEJXUGAUERYFDSLDHFGCVUWZQFVIEORZWFAMMBRZLCZBHFWOHTFQWLQSXCKNMOMJICIPGJPIMHTSPUJVWZQCGDRNMXHYSYDUSDCLEKNEZYLQACVDABSLFFLKPIFRQOEDGXBBYPNPPCI");
    msg.op = 178U;
    msg.lat = 0.476994012892;
    msg.lon = 0.0238794729912;
    msg.height = 0.127847395765;
    msg.x = 0.93194166676;
    msg.y = 0.918949728852;
    msg.z = 0.87471063218;
    msg.phi = 0.306818188143;
    msg.theta = 0.800271646956;
    msg.psi = 0.858913691315;
    msg.vx = 0.763885918185;
    msg.vy = 0.709604195007;
    msg.vz = 0.884208586466;
    msg.p = 0.362063590121;
    msg.q = 0.965289067667;
    msg.r = 0.425099206351;
    msg.svx = 0.522362469274;
    msg.svy = 0.0119491539282;
    msg.svz = 0.488196370496;

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
    msg.setTimeStamp(0.155762317729);
    msg.setSource(40715U);
    msg.setSourceEntity(217U);
    msg.setDestination(1429U);
    msg.setDestinationEntity(62U);
    msg.plan_id.assign("EOHRKOFNFCYVNPRGDMZPFWPRZDSGFFQBWDGLNMTIXHMFHFTNLSKLMGHRHTYGJKMMCVGNMSLAMUCAMBEUEIZMVKOJGLHUQQLKDQQXWIIWHZTYSABVSEGIKRYJNXWUICYSXTXVLNBOWOJRDPEUCUBIURJADXDHCAEFENJHLNIPXBEFTFGDNAZAUCLPWHZXRKSXOSUTZOVL");
    msg.type = 37U;
    msg.properties = 39U;
    msg.durations.assign("TMDRAZDZMGXZTEAJMHIWPXGHFIQKESRPLAZWULOTZIKCKVDHVFMYKXYQUFMVOLRGAXBKOLJYWWAORCPALTJTXTITLABNJSPDIHCGFHVAZLGNOHNWESPSSUFVQDYXQVMNWSXCQBUDODRZRWQBEVCIGTUSJORFXTKKDNGGRQCKHBCNDIFERKOHFEKAHJCUPYWLVBZQIYMJEYNIPZHUXCDWYVSUBOTQGJEVEPLMMIBZMJBJPXRE");
    msg.distances.assign("OXCPFSDUDKPFZZTVWQMIWXXEHBFDQRPBGXCVPDXNTKNYLIQMCHBHRSVOCLSXS");
    msg.actions.assign("SJLWZDDLJDMYRPCJCAFGQRKLHCGXLQDFXHULAOOKLWCWPNRMABYUIFJNPUPTCOJEHVAFKIMSNLUOXIHSGTUDVWTWPCEQDBIDODFBHWVKRSCRCTMKNBBNEHKJXDFECGZRZZBAJKJTUTNTTYOUVNISBLSIFKEJASPRPOAMYGMPOVICVQYLZXLVEYYSRXGWEGNGBZQTKVBRFYQXZZYOPHAEEWSYHQQGINIOKUMAXFQHQGMXSVXMDZEAIN");
    msg.fuel.assign("GDJGGEUEOIZBCIJFUYESFEFYMXAUYFZWOVXMGBLJRNHZKDPWFXKECEZSTKIKWZVGVFWHZCNTQLRXWDDPMOWXETAGYCMNLWLCBIWGQHCYJUPTXNVBOMIGMNQIHYCPAXCJTDHFWVKSODOTDDGZICOABNIRAZXLUHQBWKTHOMQDTUCMNEYUHAFLQSVQ");

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
    msg.setTimeStamp(0.982965009109);
    msg.setSource(41591U);
    msg.setSourceEntity(196U);
    msg.setDestination(6472U);
    msg.setDestinationEntity(233U);
    msg.plan_id.assign("GIBOFLHPQMFSQRXLGXLGEPMTNXVIZYVCDKWDDQEASYBWEPNMURVQHYSCZNHEYCPDQYOBSLFUMFVTHJIIIDZOPPTLUGKFEJPAGKEOUGOCETJVRHWTZKOFVLLHACCA");
    msg.type = 244U;
    msg.properties = 196U;
    msg.durations.assign("IGEPEOFNHBVCGEPLBYLRKSYTAXQXAEUBPTHKQWHNLVMBNRAWNMZWDFXTMKVRMDRPFSTZHTQKYFJXPGJXLKQRPVMXNHTMJTJSNRZPEDFEIGZLDHDIVYVBSJGAHBFFYQKIHYLKOCTTUEUEUMUZYJOZRIIBMUCJLOIVSGQNPXECAPUSOCGDOAVCZCLYGOAAXZSWNYVRSGEJWBHXCOYIWDADIDLKCCSPBWARXZUGFQUKTBISLRMUMOFJOFJQNKW");
    msg.distances.assign("XKQQDBANDKIVSZHVQFDPIOVIKQGKJLQYPDMAZSBOVTCPYSNTIRLSCDNCEFGYNFJKQJOHKIAXLNNVPOVEBRQYXHAZXAECOSIZBWJDXURBLWWKFFECIMCJGSLWTBQVJHLGENOTBPHYXJOGWFUMJTGZWOAONXRMUGZDEZKRMSDITKTNKDRIZLAV");
    msg.actions.assign("COYKSXLYSSGGBDUXBOFEYRYVIRGRJRWLBXITQRUFRHGHMLYHMGNALIJZNLQFTJCYFTGEFNNEJBDADPBUSVLRFVEPYVXAUMUOVZCMTVXXOQQVZPMVMHOJCBCQCEFAPBAIXNDTMEDZDIEGPKQPGIWKNFODBPVHWJSYQVKQ");
    msg.fuel.assign("BFEUGNBZOCYQEZXRDZOUKJCKUNTOBDQZNPVHIMRFTPUXPIM");

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
    msg.setTimeStamp(0.330066187804);
    msg.setSource(28255U);
    msg.setSourceEntity(67U);
    msg.setDestination(27030U);
    msg.setDestinationEntity(66U);
    msg.plan_id.assign("BZPKAJJGKZXPYSTDXQQDMWMBTZUZKOWAENJJVMFOVZXEOATBALJLWBHFPWJQCVIPFRRFTKLS");
    msg.type = 243U;
    msg.properties = 206U;
    msg.durations.assign("LHIRHXTURKSIKGCTQSFNZIGZISHYLAWTJSYXYTOQTIEBPYJNIVMOTPXIYVBYQEHZCPJAKDPJ");
    msg.distances.assign("ZLHAPSCQWYFHSKICZMMDUBPMTFUYQJIPSVHHSDRGYOMXEKXXRNLIUNVKPJSEWBYTNAGJFEOCRFZQADVSXZUTXMRBNSCLDZIJBIGHMGTRVWBMHRCIVPAZKRHOXFQBKVTYOYRQDLODXJHBCVGFWQGUJEIWHMUDJXQLZIEGWCETNBTWBZSANGPPJENXKLKNYDLFLUCYAHIXNOIEMYUFFRKAPTWDUVMSVLPUQTPOJCZCDKBLGRFEO");
    msg.actions.assign("OTIGBVOBNBLEXDCLWRDHXEKYJCEZSHUTAHEFBPZYHBNUNOPROYZFPYOMRDSVMPPLMYIAQSNQQQJOUSQXPIJCHQADICSMUIVXTPWMPZJWGCGNFCVMMGZTNKKMEOCGRZLPAHNDOIQNRDHVUFJXW");
    msg.fuel.assign("QFYQNXTVMLZFXCICJVAOPDEPASENBAROCTFAGXGTBCKDJGQLDSHRNBRWBGCZYNPSZMFDWGSERARVDPWUMJZQDDKSNPOISGZYBLDJIGTQZRXAUWCGNNFLJXXTHSLTYVBFHWEYHFZTBIAPKIAUEFUJKYOZRVLFKIJBPKOACXXSMYEEGUTVNOMPXHIMYDQOWSBNSTCRXWMVRK");

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
    msg.setTimeStamp(0.127597355264);
    msg.setSource(36328U);
    msg.setSourceEntity(175U);
    msg.setDestination(34877U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.563878337851;
    msg.lon = 0.405573615623;
    msg.depth = 0.605640354721;
    msg.roll = 0.744087003578;
    msg.pitch = 0.834977500963;
    msg.yaw = 0.563549560718;
    msg.rcp_time = 0.463616654792;
    msg.sid.assign("VYOYMFILPHAAJTKNTMEUWGJTZDMBKQQIHXZTPJVYSRHMF");
    msg.s_type = 105U;

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
    msg.setTimeStamp(0.636557806196);
    msg.setSource(31298U);
    msg.setSourceEntity(198U);
    msg.setDestination(16823U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.560885261265;
    msg.lon = 0.541783496738;
    msg.depth = 0.643031679989;
    msg.roll = 0.534254921678;
    msg.pitch = 0.455404461872;
    msg.yaw = 0.426330241441;
    msg.rcp_time = 0.22110975594;
    msg.sid.assign("WMIJQBGPGAIHKQNOHQJTXTTXWTSNPDDTMJOCCPTWZRJKKOSMIBYNGIXHJAAOKEXUNFBZXEUIQMVCJQWYUUIEMBIWDLYMZZRKFYHARAYXFWTGPD");
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
    msg.setTimeStamp(0.397925608614);
    msg.setSource(11448U);
    msg.setSourceEntity(111U);
    msg.setDestination(33568U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.619709889683;
    msg.lon = 0.352212991978;
    msg.depth = 0.765852328961;
    msg.roll = 0.613402326568;
    msg.pitch = 0.00546129309475;
    msg.yaw = 0.00032189840776;
    msg.rcp_time = 0.0587968107301;
    msg.sid.assign("OWZNPHPRPMKPPWWCNOTSMRYCYGXXNFADTLINRHEXEUILBVSKDQKVJIMYKBNQRIJJPFOLVMQZHGIDJBOAXQQGOIBOECWCFRSTIHFOTQBVDXGKGEFALPSDYVZMZRQTJKDMIU");
    msg.s_type = 161U;

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
    msg.setTimeStamp(0.210071515708);
    msg.setSource(60013U);
    msg.setSourceEntity(16U);
    msg.setDestination(35748U);
    msg.setDestinationEntity(123U);
    msg.id.assign("ZCYXCOHFAYJHDGQERENFEKVPLXIZTXGQDMEAKPUKGHPNVCXGASOPIWPNDQYZEZFKWFUYRNRRBSUHQKHPVVAANYCQMBXSZJFCGWMPBMJOGDGSRPJZTIADBTXCOSEJOWZYTEOJYFYIVMBDLOAPJSZIUWHVFRTEKLKNVJUETBHMUTLGQUWSMLMATJITQL");
    msg.sensor_class.assign("LEXJUONPWDSDEDYGXMQZRPETMRWGKAQYVSHJYUPTNOURKAVIWNQKBGAXEDXMFLIIGYNKCCJJIRMUFKCMSYOQZKTUDVKYAIQBGWOBZATCPBEMEX");
    msg.lat = 0.241798484743;
    msg.lon = 0.682175388515;
    msg.alt = 0.949939479232;
    msg.heading = 0.660586181505;
    msg.data.assign("NFKFVNCPGRFVXEDLWUPOFKCMJGDTBMOALCKGXIJTIBQFYTIEAYWACPABYLISWVSRNTPBHPSCVPNXBNQAYFMWVSHOFNGUILZXOKRZSQAREUMZBXJTAGKWAWOKSAUJRVYZIZEJUQLJSLRDMQGPRITQCEFDMUWLJZXJOBJGJZBQEVDTGDGAPOHLFYOWNWPSBTHKDURILDSDNEVNHEYVCICRGKIRWLDHUYZMCKVZCYUYNSKQHH");

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
    msg.setTimeStamp(0.340658689162);
    msg.setSource(22291U);
    msg.setSourceEntity(38U);
    msg.setDestination(53501U);
    msg.setDestinationEntity(182U);
    msg.id.assign("QZLWOGYPGAPCPRKKMZPULWJVHFODDAZYXCWKWGGCVLBNINPCFEUATEHPKCSPXCSAMWRYGAIBAYBNNTBIFGXFOJOIKAVLDQIVNYDQWRLIEYCJVVMUNNFZCBDVHKOJIQQERATLCHVCSSHSJDOZXOREKXLSXSJMBZID");
    msg.sensor_class.assign("CLSDSUXYQWMMFMRUOTGWNEMKQPFHGBDIDJIDZRLWOXOAXFDZBUFAEMMIRTPJDKMZPILNNWXSCSXTVTSCRRWKFKLGJWLTJBIVLMNEHQFNZEBYAAECGTYVPUPHVPTEXNVJRJJZIBSQYSHPMBWGDHQXRGOBCARHGAF");
    msg.lat = 0.562789009972;
    msg.lon = 0.69190249532;
    msg.alt = 0.081121829959;
    msg.heading = 0.41484359705;
    msg.data.assign("GENPFKYCPBRAMDBXJZKWOJGYAYUHWSHJFQFNRNDPTVKYCGVVYGIXXFCTAQMKKOOSXXZUQTZFJZPZGIPXFQQJ");

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
    msg.setTimeStamp(0.179485886344);
    msg.setSource(56243U);
    msg.setSourceEntity(218U);
    msg.setDestination(36457U);
    msg.setDestinationEntity(113U);
    msg.id.assign("FTBFVPLCPUCCYFQVWHZVMYMXURYHQIRWFWJPMLINUZDTKAWZSBBGPDRIOMJOKYEHBQHGKFEGINTDJQEYIMRJKKSHIVFNHCZOMUQJWVSLLZOLLUMTAMVXHQNXCAYROAGDJGVXUXJKMEBGCNCRXOAYTTLJLRGDVQGSZFYEDEHZRNMNJKZXEIBUSGQHOWICDNHOZABDWSSJFIBUVWFBNLOZGQSSRECYPPQ");
    msg.sensor_class.assign("DAWXMKLJAQPFWMRBWZAINPWGEZOYUYFHMUDZQHICIJPJXUBCKTDVXEDPUOBZSORVGTYXGHQDOHYNESXGKEWXHHKZPTLLFCVKSDRMYULJFVIXOCMGJTCIEFVLUOEI");
    msg.lat = 0.81450027223;
    msg.lon = 0.127820245749;
    msg.alt = 0.579235872713;
    msg.heading = 0.165345081169;
    msg.data.assign("XHFFXFSBYZPHIRIODZYTMJAAZMJKRQZVSVZAGFWTDJSGXMGNQQPSGFYINFLGCSWJSVXRYSWULCXSCFJNQGJNKUUBDHDHEJOAUEBZBLVYQFZLSGLDSDRULPOQOMMDVOECVQUYPNNYZBHTTROIRQKLKXXCMZACXXDADHEBPKQEMRMFOCVTYL");

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
    msg.setTimeStamp(0.71264656643);
    msg.setSource(984U);
    msg.setSourceEntity(237U);
    msg.setDestination(64970U);
    msg.setDestinationEntity(223U);
    msg.id.assign("ULVEZBAYAOFJTQORJBXDUHBYFPXJXEWZZGUHJMYAGOZKWRLCTLTPXGVGRJFWFUPUEGNKEDMRYALFDYWKBVIHCWDMPFUCDEKVMWSFDBXIKPDLALVZQEAAFMSBUGNGLEQS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ASMIIQBUYRNLQAYQJEJZQZGONULUWVMEHBNKQDEJXAHBRQWAWCRCXXLHTFVESYZKSQOPTZHDMVSGWYBRAFDIFOXUEEHQBXHDNZTPNLIVFDITOCWMTIXLHLCKRRAXVACUKPUGEOPKFFRYSNLQXZEVO");
    tmp_msg_0.feature_type = 190U;
    tmp_msg_0.rgb_red = 58U;
    tmp_msg_0.rgb_green = 104U;
    tmp_msg_0.rgb_blue = 34U;
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
    msg.setTimeStamp(0.495675295171);
    msg.setSource(6728U);
    msg.setSourceEntity(86U);
    msg.setDestination(56346U);
    msg.setDestinationEntity(200U);
    msg.id.assign("YUMBCRGYQTFXUDKWLBJBXKCVIRGEOSBRWPZFTSMKMDFTEFQROGHSCUGR");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XQQUVBLLTPC");
    tmp_msg_0.feature_type = 196U;
    tmp_msg_0.rgb_red = 40U;
    tmp_msg_0.rgb_green = 74U;
    tmp_msg_0.rgb_blue = 8U;
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
    msg.setTimeStamp(0.539193785339);
    msg.setSource(30891U);
    msg.setSourceEntity(176U);
    msg.setDestination(36556U);
    msg.setDestinationEntity(250U);
    msg.id.assign("YGRCYVQHLTDHRSRLLQRLVCREEYALEWXUWDDQXXDWNCAOVBRFACWZMPYFEBMFZPBJVNNMESGAEUCWNPUCVHLAZGKAVIEWJDVMSIQNCOULBKXHZTVXTTNROJPTINPTYZSYKISQMVNODKIUJ");

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
    msg.setTimeStamp(0.155885135202);
    msg.setSource(49701U);
    msg.setSourceEntity(55U);
    msg.setDestination(53453U);
    msg.setDestinationEntity(48U);
    msg.id.assign("MUUDYMDFSUORPBXSTAMCIZJZDRHKDDIIZIMGHRPXYTBYBYEDPLKNYXWMEMXQBXU");
    msg.feature_type = 118U;
    msg.rgb_red = 83U;
    msg.rgb_green = 240U;
    msg.rgb_blue = 39U;

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
    msg.setTimeStamp(0.354916368892);
    msg.setSource(11738U);
    msg.setSourceEntity(174U);
    msg.setDestination(57577U);
    msg.setDestinationEntity(62U);
    msg.id.assign("CHERUAKUTZDWSYGHZHFDMLDIENSTAJRLPQPUIWOFCOBGAAOELBJKAOGZRSXRFCVKUGRJAFGSJXUFJCMMKCYWNXVNGTWFIWBZXQLLMVTGQZUPZJCMYOTYRTPWSIVPVBTFXVWCXLHRYYYGTUAWFYKNWXNHDNB");
    msg.feature_type = 197U;
    msg.rgb_red = 181U;
    msg.rgb_green = 169U;
    msg.rgb_blue = 192U;

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
    msg.setTimeStamp(0.588157969996);
    msg.setSource(17505U);
    msg.setSourceEntity(94U);
    msg.setDestination(31384U);
    msg.setDestinationEntity(142U);
    msg.id.assign("GKTMQTNLBCBDRBOCEZEFJDSBOFICGXMCYOYXFDBAQGTXYYGYPJIPTDFAIKJVGRIWPNOVNHRXJXRVQZCWKLHRMHSUVEUPJMFEDSCFLEJUQMCQGNAHTGKRVSSVFBZGDOPBYWRZLIWCZSMYTVLIGZBKAATYQQXITBWNJYZNYIHBAZEFZXWUKTVSDNQGPOOJOIUVXLPUEWPXDKAJXRAHSFCR");
    msg.feature_type = 138U;
    msg.rgb_red = 203U;
    msg.rgb_green = 236U;
    msg.rgb_blue = 191U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0399298062153;
    tmp_msg_0.lon = 0.0532975607353;
    tmp_msg_0.alt = 0.505696303781;
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
    msg.setTimeStamp(0.656681653224);
    msg.setSource(31518U);
    msg.setSourceEntity(193U);
    msg.setDestination(37186U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.458755705893;
    msg.lon = 0.0717012887542;
    msg.alt = 0.899306811057;

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
    msg.setTimeStamp(0.275180563081);
    msg.setSource(25309U);
    msg.setSourceEntity(194U);
    msg.setDestination(12671U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.438299253405;
    msg.lon = 0.0666503189334;
    msg.alt = 0.0727201748463;

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
    msg.setTimeStamp(0.548410644);
    msg.setSource(28570U);
    msg.setSourceEntity(226U);
    msg.setDestination(4820U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.118757206123;
    msg.lon = 0.691937874427;
    msg.alt = 0.700667218434;

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
    msg.setTimeStamp(0.984937325985);
    msg.setSource(22355U);
    msg.setSourceEntity(94U);
    msg.setDestination(24414U);
    msg.setDestinationEntity(87U);
    msg.type = 113U;
    msg.id.assign("UKDJNYLSJHRHYSOXSITFWMBUWHSUUPKTNPOYGCJQZKKMDNLRQTVLUWUPBGIEVWRLPZBXPFYZQKPGXXNREQVKDBKEKLDAJRUYSOQIFBBVLIOUGCFQIPNCMXWKVNEFUJCCEMMJGUZMNEHXAHYIOOSABPWZCZXPODBNHCQVOOZEORIHDTERLRFHETCMACJAAI");
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.352301793846;
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
    msg.setTimeStamp(0.186157094375);
    msg.setSource(57468U);
    msg.setSourceEntity(251U);
    msg.setDestination(30136U);
    msg.setDestinationEntity(3U);
    msg.type = 16U;
    msg.id.assign("WTJFNUGYUTMFLRUZLCZQCEJAJCYAEIFXGMQWACS");
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.2353886386;
    tmp_msg_0.lon = 0.362562644529;
    tmp_msg_0.height = 0.730932709285;
    tmp_msg_0.x = 0.969197989412;
    tmp_msg_0.y = 0.415063039851;
    tmp_msg_0.z = 0.536239855537;
    tmp_msg_0.phi = 0.810735480457;
    tmp_msg_0.theta = 0.43280582124;
    tmp_msg_0.psi = 0.160501815502;
    tmp_msg_0.u = 0.915253923062;
    tmp_msg_0.v = 0.343977424011;
    tmp_msg_0.w = 0.472665401102;
    tmp_msg_0.p = 0.644338858826;
    tmp_msg_0.q = 0.68132452213;
    tmp_msg_0.r = 0.208063141486;
    tmp_msg_0.svx = 0.548281781093;
    tmp_msg_0.svy = 0.730177292209;
    tmp_msg_0.svz = 0.15826123971;
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
    msg.setTimeStamp(0.251685941298);
    msg.setSource(58229U);
    msg.setSourceEntity(50U);
    msg.setDestination(36428U);
    msg.setDestinationEntity(166U);
    msg.type = 79U;
    msg.id.assign("KRJWTHIHRBUVYVXQWHZZPRPPTMTDLXGREGMYSLYCFZUQRFLRGYWLNLVUHIFAYAJ");
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.694680277488;
    tmp_msg_0.y = 0.824684647;
    tmp_msg_0.z = 0.542928141911;
    tmp_msg_0.k = 0.0351117612134;
    tmp_msg_0.m = 0.0517334561459;
    tmp_msg_0.n = 0.225138573838;
    tmp_msg_0.flags = 5U;
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
    msg.setTimeStamp(0.662773434668);
    msg.setSource(7655U);
    msg.setSourceEntity(7U);
    msg.setDestination(651U);
    msg.setDestinationEntity(83U);
    msg.id.assign("REJWCVXUTCIYOKPHXAXNHULMDJIJMJUJFFKSKTBWCTZTJGNQBQBCASPAABUSAENHICBHRVPPLHTLGWXQMOBFGWB");
    msg.callsign.assign("CCARJRFJLIRZOLCURNYVPWSKTHSNHHEEKFBCKTQJJVEKNIGKUVXGOUJJONRJMZAXMMFAUVPBBESLFOQVGOGIENBQXNIHQEXWFXFGOMJVDVTKCTHOVKLDU");
    msg.name.assign("MEBUMGLWCZXVULVBXOCKFZFFRXKISKOBZPCNQYWVEMURNFRZMGCBXAOOVOLXXPIGHVBJURZNKYHYNVLQPUKSSHYJJZIFFLXXTBIMQCAAQSIVBRKHLHKYNAMPCECADTGELJSUQOAHFAJVJXEEIDTTDGCLIDZWHYWIOGCDODQIFPWRPTBQFYWDJIPZ");
    msg.type_and_cargo = 82U;
    msg.a = 0.101572588273;
    msg.b = 0.634463573272;
    msg.c = 0.761059748755;
    msg.d = 0.252341568611;

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
    msg.setTimeStamp(0.307426339017);
    msg.setSource(27602U);
    msg.setSourceEntity(71U);
    msg.setDestination(58580U);
    msg.setDestinationEntity(56U);
    msg.id.assign("DLUQPWQTOCSHDUAUQZVEYMWBUPYKISEU");
    msg.callsign.assign("JTOLUNPDSBFIAJLIWPASZVZESZGPMPHKRBOWYDP");
    msg.name.assign("ZTHXXBHUKLQSLWUVSRPJCHIFNJYDTOGOVLAZXFJGQQFNBVLHWRWAJCDQCOGBKVJSOUWVEDUIXNSTJORYNMER");
    msg.type_and_cargo = 110U;
    msg.a = 0.649893533207;
    msg.b = 0.366771234224;
    msg.c = 0.579121625558;
    msg.d = 0.35208228352;

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
    msg.setTimeStamp(0.722464021743);
    msg.setSource(39861U);
    msg.setSourceEntity(31U);
    msg.setDestination(45835U);
    msg.setDestinationEntity(212U);
    msg.id.assign("IXLXMNHQUSDCLWBHWNMEHRVVITUJPIPMFWTLVGAXD");
    msg.callsign.assign("DBDLWMHJSHAREGKYBUBYBPECTPZVGWPKSYIOFIREHFMWMQEAFGDXTVWRKDASULZVNQCBZSDBLJDNVGVUFIMAYEPENGSEJARGDKPYDYWLASINRCTXICHMBQQQNCYXUKJFZHHOOLEFKJORWRV");
    msg.name.assign("IAMZJLJMYMRMRVJCWUFPEOEWFZFKFZSMPVKQQQYFUBIAXSKXDBWHDMAPJSISCQEZQCPLZLYVONLVGOZPWTGIIRODBDUMXRQLBZUVNKBAUQGLRHYBKSQOLVIFXOWWNHBDCHECPRBTAGCQWV");
    msg.type_and_cargo = 109U;
    msg.a = 0.484074304085;
    msg.b = 0.148387320031;
    msg.c = 0.854180914948;
    msg.d = 0.127358985263;

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
    msg.setTimeStamp(0.217575123358);
    msg.setSource(41866U);
    msg.setSourceEntity(71U);
    msg.setDestination(49636U);
    msg.setDestinationEntity(192U);
    msg.localname.assign("EZCJOLCJQGVSBFLRLYFRFKJIUNPXMSC");

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
    msg.setTimeStamp(0.304655656147);
    msg.setSource(2336U);
    msg.setSourceEntity(250U);
    msg.setDestination(32561U);
    msg.setDestinationEntity(137U);
    msg.localname.assign("LSKLJDSNAGWNNQXSOFIPGSVKOQSQHBTDTFGIGYBZYIJFAMAQLEKYRKTPAREWJZHKDVLNCYYPRDWNOLIEXDTPLPGBMTJPVBXQPVGLMCUJZFKOQLKWBSBVHHOTXPVEZCSWUIXCMK");

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
    msg.setTimeStamp(0.183168616393);
    msg.setSource(9233U);
    msg.setSourceEntity(113U);
    msg.setDestination(48132U);
    msg.setDestinationEntity(32U);
    msg.localname.assign("LBIMGSNFHWORMOHRZKCFFUWNAUFJEPSMKWBDSXRFRDWQXRVORXQYUCHYSNGTBTKUGCHXMISZECAPTBYHEVOHNQAYAOJZEPIZIOYBBKSDLBGMDGUJXWLQVKXKSGEJQBLGYJIWJMLCTLZATWDNNI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ROITLTSDDAFYMYGYZZXFHXOPSUOTCUUUKCRHDVLIEP");
    tmp_msg_0.sys_type = 165U;
    tmp_msg_0.owner = 19638U;
    tmp_msg_0.lat = 0.0820536801534;
    tmp_msg_0.lon = 0.799064817666;
    tmp_msg_0.height = 0.461176660455;
    tmp_msg_0.services.assign("YYHSPDWMPEVOVBZSMZZXDLZCZURWDNLQEKZPQWHTDEBIFLONGXNUSOXLGUJAVKYJPOHRHUMEUFFSGFIMQJGRCNRVSWJXITZQKEINZZJLYGPPCJPTWQMMXOKGLLEUKOMPQFBTNOWHGJZRARLSTWNQUJCNYVICJBOUYUBNJANQKWCPAAOMSRMFKQXYSAVDDXM");
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
    msg.setTimeStamp(0.21438889705);
    msg.setSource(63323U);
    msg.setSourceEntity(211U);
    msg.setDestination(4508U);
    msg.setDestinationEntity(119U);
    msg.timeline.assign("JLHNYOWRUGPABPFAJJFREIHDTSJSNPKLXMXXQAULENMGYOSWZDBWAYDIBCUBHLHQUDNIOPTCXDRIRBCAVGGBVEPGZFQEKAKDMSXYYVWXKTDYJFBLIOHJJMVPBDCKTFRF");
    msg.predicate.assign("JLXFFLQISHOKXAUPVCYAHMJEVTCBUYQZJLZWJYQXLCXDOVVNOMOTPPIXSWYZUBUMDGCVTCNLTVKTUARJGBWYWESXKDKBSWNAPCEKWCBLGHBDPUHAIRODNZMEQILHQGIZTPKALMRIYBGUHTPNJYIYUGNHQPJFMOSNDWLOKBFAEISMRFUZAKAVEJCDWOCNRGUPVFTGHHBXSIJMTFWQWKZCRIMQRO");
    msg.attributes.assign("KOUFHBWGLYRCWLJLDJUHPXXZSZPAZRNHQSVWCYYPMQIIEFVRTAAVXIMKNBLUEPNHMOUSQEOTVVPAVCDFGXUYHGZKTBEZTAWBYNZBXSUWEFEBRWOTJYLMIDBRDKKNGHOWJIIDOXBRRXPZEVZGIYJHYWJSIQJFMSNFVRQYCTSQQKKOHUS");

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
    msg.setTimeStamp(0.411429541905);
    msg.setSource(39513U);
    msg.setSourceEntity(129U);
    msg.setDestination(33777U);
    msg.setDestinationEntity(229U);
    msg.timeline.assign("APVAVXQOSNHEFBRIWFJRIUAKJZGYNQPOUDGLQBJKHNCMABXBHYIXWMJAMIWPKOENCWQVRCNMNTNUWIRIFUJZUPIZVDTCEQZAHYGXSDNP");
    msg.predicate.assign("FPCXMYVQJJLKIWIZNLWIATZGECQZMQXHENUUOLWEBPHYHLWSFHSZVZXDYBAPZRYYUQAFFQWUTAIGFHNUKCFVYBCXTQETGOJJTSSKOOCMHOZUQJGGCVNVJYVQMBZJHPLRUDDLECTDSGQWNMHPRMWSQRLONEPKPTVBWWKYNRXN");
    msg.attributes.assign("TQJSTLSNHJJKSYOBMDVVCAZPQCKMUTIWGJEFVBDPAZIUUEPCQTP");

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
    msg.setTimeStamp(0.363640963083);
    msg.setSource(58180U);
    msg.setSourceEntity(84U);
    msg.setDestination(5342U);
    msg.setDestinationEntity(244U);
    msg.timeline.assign("CNZIUGYPSLMASRYPRBTHPYDLIKSWYBAASDOCOAXTVMXBBDWZROVXEMCZUMWZRRHFFSLIIPIFC");
    msg.predicate.assign("HZMDOOTLSZASWXPMXRIZEBKAFGVXBIJOUCCUFZZQGVBQQHPTJLUKBBGA");
    msg.attributes.assign("WPZSFQIACSMIIPFJKYJVKEEBYWGWKQBCTDFNDDYLDBHFPVXWQBQBARAGUNPIWYMICRUADJKMERMSGLENTBVDVBYQAZRJHIBNTRUHTLXEUPCXOSARVAJU");

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
    msg.setTimeStamp(0.701772910978);
    msg.setSource(25276U);
    msg.setSourceEntity(188U);
    msg.setDestination(12100U);
    msg.setDestinationEntity(121U);
    msg.command = 37U;
    msg.goal_id.assign("IHOUZOMGARSLXTRKWDCYQWXAEXYUKVZPBPCUXUAHJNDTWOGJEFFPCHPTZNASMIHDOQVFVBSCZAFAAYVRAIYLMRPAJTNJZKBRXBHGPRRGAIWSBBCMMRLQVZUTVTXMVNFNOWVGDRWQZKUIOIWKIQFMSEIZJESQKSDJYEOGTXTPQPPUZPLSNBLUXJOGHRBTUVQYCMFTWKYXGKLSDNLCIYGEOUFQYZKJKECGMFD");
    msg.goal_xml.assign("MQOOMSXGNQQDNTMUXRDRLCTRVKDIJBIBEPITTKSMPEANKGVZKHKPUARINEZEZAQQYPRDZQJVXCWAGMOFYAPZIVUXM");

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
    msg.setTimeStamp(0.836905499976);
    msg.setSource(64996U);
    msg.setSourceEntity(215U);
    msg.setDestination(1577U);
    msg.setDestinationEntity(2U);
    msg.command = 78U;
    msg.goal_id.assign("ZRCURBBPRKUZPTXXUSOPVDVCBWEMXBQMEJNXWZTVMWDOEOSQJBJRAFWJWKFONIDJKHSKYLQTENFSNBLHPOLWSAEVMGBTOIVSTPKTCLCDAXMZIUMYNOJUGGMQYQJILEKPIBHHDEAAFHKAAKYTFUCCGGYDWMGYIJXOLZEJXQNQTRGAZNNWCNGUGZGMLUMVHWFDZLFPYVBUBQLORRDASFDHYHXLJPEKISNCVCYVCFRXZS");
    msg.goal_xml.assign("GDEFZWAPJHWOEZSLVQVRRCQNBRGPTHCGVYRIUYKQETWISALSQOHFCDNRLKTFTPWIGSXJVVWZAMBWDHXXUVIBULHMJJABDKZJGCVUZMTYNRFLUVXDXMLKSVSEBMSFSEGHHEQKZBQHEZPLNAWYBKTXKNFSOTGKEGUOCNGLBMFPLPJDUNKTLYSXPZIIFCJQCZGRPJMYDAIOTUJOXMOCUAQJOCDWRCXYARQYPXWIFTNUWOKABYVNPQHIMDOENFME");

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
    msg.setTimeStamp(0.0852029898782);
    msg.setSource(45360U);
    msg.setSourceEntity(158U);
    msg.setDestination(44201U);
    msg.setDestinationEntity(238U);
    msg.command = 20U;
    msg.goal_id.assign("VHEZNAEWJCPGPDHUDBAZW");
    msg.goal_xml.assign("KDTQSFOTWCUWJLLRHXYJERNAGFGOBTUVSYDWMFNAXXKMUPZSVPZTEJHAHNTMJILVORACPMYOCXQPZAIQYSDGBBSOICKBKPRHVWNNLGJZBCOUXIXFZLEQ");

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
    msg.setTimeStamp(0.324442393702);
    msg.setSource(49368U);
    msg.setSourceEntity(166U);
    msg.setDestination(42256U);
    msg.setDestinationEntity(237U);
    msg.op = 32U;
    msg.goal_id.assign("AODVGZPFUKAGQPKKSWVXZFJIRQEIRTLOIAOBYWRMFWLGKKNWGBQEITXTVGRYEXMGQFNHBYWKSUYRDJZLEIISIHFJNJXOXDQQGSKFCOUTDORLGNXYZVDNACYPLBQTAXOLRRQMXYVYHTCGTHIUZBMBCOYKWZGWVFHPCSXBJTLLEFBMHSACBTRNIAZOUEUHXMNEWCEZSDZUUCZDJVIJQVEUDWEAPFSDCHQJNM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KBRAWNPDBXPYTQE");
    tmp_msg_0.predicate.assign("IRQGVPOJRIDETIMKNVQNEUJPHUWFXCPCXKWDORYXSQJLBWTBOHRJZUTKIMBFZKRRVYSMZLHLIABEKXZECFKXYNLCWXFQLHGFUMJZDVFTGCWZAVBSBRZVKMUXOXDDYNVYAGLPYIYMPAWOVJGTENUEGLNILAYFCUTMHAOFHRWJSIEGOGJCCNEHNHDQOADIXEZTKVLAJHPLJBRQPTDSGXGFWTNTDQISYBQZPBOAQMZSVSUKMMAUOSQPWDRBC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XWVTLMGSIKVDUZLYLIRULZUEJGLODFJTNKJPNKAWQTSJOFVTISKCARTKZIFNZKGDOTXYTWKYSJUDYXHZBBQLLEAOARICHXGOHMFHARIMYVNQSVNOQFXSAEPRRHVCVCBXXABBUJCXMCUZAYGRWCNGMJFMBHLPGMZPAMSRDDVHWQRWWPQDOSESEKCGWAUTDENQYTHRPZGWQBGQVJJPOZMIFCDKP");
    tmp_tmp_msg_0_0.attr_type = 126U;
    tmp_tmp_msg_0_0.min.assign("LNTLYYHPUZVKKOJISJBFWXXKDTVJFLMBNAGIAVJIPALZXWISQTEBDCUAJOJKWDAKVIKYUMOVHCYQXGVEBCSEHQZXMMF");
    tmp_tmp_msg_0_0.max.assign("PNSPKCRWOHTWWTAFHRNDKOZFZZNREMYVFJDCQKWTMVUPBLHKRZBPFCJOEJYWWQXVIQXGDGHFJULDTAYAHSAFXVTMPLAMWGIUJUHHTZBPZJSYZOYUDAUGYQZFCDTSOVEUVGRPEXTIOPIQFQRXFCAUESDTWQAGMERISFANIOAUTEJLOKYMYVZWSDZJNBBNUVNONBJCCSXHOXKDDKYHMYRKMJRKQVIMLGQQLNKNCMIVRELLEBCBBWEGX");
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
    msg.setTimeStamp(0.832248808038);
    msg.setSource(17423U);
    msg.setSourceEntity(130U);
    msg.setDestination(8832U);
    msg.setDestinationEntity(26U);
    msg.op = 84U;
    msg.goal_id.assign("ITSHIYEZZUXRMUFUTPOYWAHXIQTRHBAWZISLHQXIVGHBNYJCW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DXMHGHAJMPICQLI");
    tmp_msg_0.predicate.assign("UYVMJPVIJHMPQKRBVAFRZQOHGPWIQZLBBFNCTLSEEUGFGZXHODDNAXPKELTCVMCDCHIWGWOKWVAMKUNALZGNNDYBJZTTCBPJXODPJSOUWGXMLXXSDGDZYESUNMMTDDVCKIMFHWPQLJFOZHPJUKTYMHHJGOARLOEEVQEFSRRJLETVBYFKKDLFRHPIZXZTERQSGYRGUMSSIEFIXZYIFXT");
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
    msg.setTimeStamp(0.262491831403);
    msg.setSource(40427U);
    msg.setSourceEntity(246U);
    msg.setDestination(8069U);
    msg.setDestinationEntity(100U);
    msg.op = 217U;
    msg.goal_id.assign("DVBLPSQCZTHJLTXQFSXHRMRBWZLZPYGKLEYJGPBCTECOXDDKHG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EOZJHVEFGGNPKAUAXVOOVDCOBAINRFQEPNXHWDSFRPXZCTNL");
    tmp_msg_0.predicate.assign("SBVRAKJLMQLOCPGEWICFSPOFRNVMXYODXATKAUHKSQETKBBFPWEWSBDMQMMLSLYBWYVNPWZKLVDTMSJEQGHLFIKXHLUISVXHRKUFBLDUXUGZAHCRXJPGJHQZTYJAUFORLCNGDHXEYRACZ");
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
    msg.setTimeStamp(0.685561912818);
    msg.setSource(53951U);
    msg.setSourceEntity(126U);
    msg.setDestination(19661U);
    msg.setDestinationEntity(30U);
    msg.name.assign("NAOQPUHLFIZKAAZMSXIQSWRFCCHDKELLILMFBBEAZJJBITOSYUMIPXENGXMPUOJVKQYLILPDWKCKYFAWGVCQJWRDBYNZTUJBBVNFZWBAKDKNRWUTCQH");
    msg.attr_type = 84U;
    msg.min.assign("GXZTTSNAKMYOFDUW");
    msg.max.assign("JUNBYJEWSLYSBMLLJIEBMENHKCNVWAEBWMQUCDGWXSIHYAUIPFUTDMATMRLIIBXRTZORSWILPPGKYFNAGAGVKXGQCPZYAENKPZCNQWUAFTJQHGWONVIFRXTGAJOQGUYMFKUHVKVZSBBCTBVPKLRYCODBOETWFJJCATLGMXBFOPWHFPHURCPIUDDHOXSODVQJKNLNYXXDSXHSEROKD");

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
    msg.setTimeStamp(0.0893188796908);
    msg.setSource(43795U);
    msg.setSourceEntity(89U);
    msg.setDestination(29475U);
    msg.setDestinationEntity(172U);
    msg.name.assign("SLVWGEQNCQHDISMNZJQTIPCQHOEBMRRTONHOTKRURLSLFZQXKGZACJIJKYDFIFUBVXGMTKEFBBUPRAYFEWEQLIWYAHOOJYGSZJGKLMMFIZAFBAQJOWPBEOLTBAYWXTHJJSRZEVPGHPODADBOFEIWCVKXNYRPGOTUXUVHRU");
    msg.attr_type = 169U;
    msg.min.assign("UXXNEVZUYIXUTJJYHAPRGNOEZVUMWDSECYXSSPWILBKGTFCUODUEMNAQBLQLQXEJINGJHYZTTUYNNFPVRBEOHGPWGBWEDMKXGHXZA");
    msg.max.assign("MXDQZUIYZHRDCSJEQHMWCSOVJSUULNSZEYZOOTWLXWJJOFMYFRDZNXRNMXVKMOYOVPPLNFZJTQ");

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
    msg.setTimeStamp(0.524574837781);
    msg.setSource(40506U);
    msg.setSourceEntity(149U);
    msg.setDestination(53311U);
    msg.setDestinationEntity(33U);
    msg.name.assign("NJZWVRVDAYVXKSYECKXPTNGSKROFYPEOOFHDMZAZIAQHYGMVKZBLBDTGPEPCSDD");
    msg.attr_type = 238U;
    msg.min.assign("SCSOHEESZLJKHTKACBECPZOHRXBHZHQDEPGRTYSLLIKUCDWQJUPFWQNGKQVWPMYOENGMFQMTEOAONKWFOXSRDGCZZRJWYDGRDBVOUXWPFTLCUCBABPJUFBXLAINVYRUYRTWVAIYONNYFWZWQZYQIPBQNGVQMLGHYDIDKXVZOMGZUTCUKTHPFTFCJ");
    msg.max.assign("NBXTQOTCAEKUKGHUWNLQEWAACRDCXUNBPLRWCRDRDVOLTADTFRWQFVYWZJHXZTEUPPXDGMRVGTPADLZWNXUSXGSNXMMMWHTIPIUXDBEVMZSLQLOCOZZJNWQPOQIQBMSBKHMJBOWOZVMJVISYMOIKXSLAEEYEFQVKELIYJQVCNXUHUNYTGEBDKEJFCBHYGGN");

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
    msg.setTimeStamp(0.849124465225);
    msg.setSource(11493U);
    msg.setSourceEntity(217U);
    msg.setDestination(34924U);
    msg.setDestinationEntity(117U);
    msg.timeline.assign("NYHCRQDAOBLXGAXNLAMSIILSHRDDTUHXWQEYZOEXAUDFDWUWVTMRJEXCCIIQVQDLZRATBFUZVCGFJJSOBGVGVFNWJKFNGJLLPBMBKRPUMPZJPVHHCYGWKNUKKOEILYWUDUCNHPQMSBKSZXSFZQFWWACTKZAHMVNXPDZXKBZGNJAQOQHBOYXPYTPSJTLJBUT");
    msg.predicate.assign("OOVJMUSSIGTEXJADBMPUPHKOHJVPTTRKLJZHBYTFFVAVAAXXFBSZGEHMONMIKYGLKWFONNCFLNJHCXEWR");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OURDBFCYUEQSXWWEVZKXJBNCHDFQYUHVLECEIIYDMUZQYOPLGOLPSNHRGQBIACMKXSBYMXWTAJMEBJVOTIROIGKFSTCTAATZYRJUFVKDQEGIZUTZHZWKDLXRXNYXPAGKHARAVBOKFFAISHJRM");
    tmp_msg_0.attr_type = 237U;
    tmp_msg_0.min.assign("QUTOTZCCYSVTBOWMVBURYMZIGBRDNYNENEGGHLTMLCGANQVLVKEKMSFDHFZAGDBLICHVEJGWQYQOGTSVOZXIXDMFNIIJNHKLXNQURPGCXRDHWCPCETRWPGWUADAPIBJMITROCHTXSZRVNLE");
    tmp_msg_0.max.assign("XTVHLQJXVTTZDJULBRADKPIJWVUZKPIMLPWOXALOKHFDLYJSHIPHYTFYXIBNGIZHJXBMHEQBXSLRZZCWWRYFTBPUNMIYGAVRMKDZGWONUEGOLORBYICVLNADMCEPUGEVJNEFAUGDCJMOEANZKDGOFFOCVACPCQFQSWCIRSZKWLXPYNIQUTWBYESOXSKTZEGZJQQ");
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
    msg.setTimeStamp(0.731047702513);
    msg.setSource(4103U);
    msg.setSourceEntity(90U);
    msg.setDestination(44923U);
    msg.setDestinationEntity(143U);
    msg.timeline.assign("SDXJNTGCUGOYXKCHYWYFXUABMZVRGUFTJLAJ");
    msg.predicate.assign("NHOFSVIAVJHETIYNEDUTASZQFQHIHPLRRZYHSGHRQDBNBZQZEIOWGTTLMXGWRKMRQYFWBOFXWURTJPJOZLCPQVSKMVIBZPAKZSQPNDTGAUCPCRZIUYGIUXITVJAFDJVNHDEPECIXKJUKXDAYFCRPGVACEBMNLKCBZDNEZARAPLWCBWFKHUFVUWLTIJJKOSXHMTMBO");

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
    msg.setTimeStamp(0.20231551069);
    msg.setSource(26003U);
    msg.setSourceEntity(117U);
    msg.setDestination(21891U);
    msg.setDestinationEntity(206U);
    msg.timeline.assign("UYTKBUNQHUXNHDIJWKIZLAKJXOROARSKOSZCPFTYRAXBGQXVDRPKDIOVIGMMUZAGFQPTGDVPLZHMVPDYWHGZXCLJICSUJDXFGJRZAUHVURWIBIZYKSTGTYSVQDFSBHDFNKNTKMESUOKRCLHYQSVGLMERDIFHA");
    msg.predicate.assign("NQIORKRVIHMGFDEUSQELJGWHOLHLAQYLQGWTECAYJCMXJLXCHJSZQUCMBZTEFCPCKYRXFGHGURKAOZIZNOJKUWFLVTBGZGTSQFKYWIZUJDWUHW");

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
    msg.setTimeStamp(0.955455675604);
    msg.setSource(27723U);
    msg.setSourceEntity(172U);
    msg.setDestination(58929U);
    msg.setDestinationEntity(243U);
    msg.reactor.assign("SRLUTIIJOYTDGYCFRVYJKSHWLXNDXIPVPKDVUBRUCHDFWTQHIENUBAUYRNPGBJCRTTHBCAKFSDUEUXMOKQGBCNFOYQDUGXZABXTPVOWLWVGIYLERFOCPAALQINXBUMEEAGQJQHOJOWCSRAZPPMOJEZQKVP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BGRXGUUYVIXYRHSIDHHYFBKPVHETKSUHEZCWCEQWVELABOFFXBCMRAKKSBZGFNYACMTKQBXLTSJMTMPJJUIMOFZUAQQKSJDKRVMJPJZTGCGQMAIEKLCYRUUIPXOSTBYVXXLFRCVLVMDZEVGBQONWFTLEQFQVSTCDPHGJDTSPWFE");
    tmp_msg_0.predicate.assign("LJHICMSKSFBKJZVYUBYVFUTBCKWLQPRGASKIQSEKNWPBFMGAANXLNNTOWCDRSXJMCHDTANEAUZWNLKMFSCLCDHPVRDRFDQJWWZGZELWDXKBFYVGOVFCQUPPMGGOTSKUCUSAAXTVNABLTWQETOJXEHOIUHOAXBOE");
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
    msg.setTimeStamp(0.542844425801);
    msg.setSource(4760U);
    msg.setSourceEntity(243U);
    msg.setDestination(5862U);
    msg.setDestinationEntity(40U);
    msg.reactor.assign("ZUYUITDODDAKAXJEFUTWTYDUBNKRYNPDFSHDPVJHBVWJNGLHXQINKWBQWZQBPNMBLHD");

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
    msg.setTimeStamp(0.852823320909);
    msg.setSource(49472U);
    msg.setSourceEntity(36U);
    msg.setDestination(15493U);
    msg.setDestinationEntity(228U);
    msg.reactor.assign("UTXFJRSEGVOWBFDAMJIZIWWXKVBMIWEHYILYSZPW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XIWVPQCOJWUUODKFRHZASTRAYCPCYDFSNOXMWEGIKQCMNBVNZFVBQGAVRRNLLATAAGXSLLXYBXJUXSERSUQNSXLOTJXEYUSRMYPMLTAHPVBIAXEWDIEDMNQTJVDFJHVIYUOGRNDGKFWGJYJCQBZTZZLKOPDHDFHZYHPEUIZZXTPYRCQECOBIULONZQVSMKSFIKMLVPAWTHEKFUVBDNTWJCCDRPJMYKESHR");
    tmp_msg_0.predicate.assign("WDBAYIAUFTVTLRBACMTBCJVZVCJORWLQPSGKGUQHTKPJNAHGXPDJPHO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FOMOQGNKAYYZUUZSEJTIUFVBOPRFBIPYWLEMOWEQGHLWCXWSJIVVNZBNOUEAAPDDEVNXZWHVPPYTGPZVUGVKNFFKBKTILJKQLBQAMRXONDJHBCEQPOSKMPFXXDCYMKZUSRRHWTOIYSNYDVJOCKGZRWGDCQCMXJSHQGTMIBAUNDNUEVXSMWFLCOGILIZJLUHBMWGYTDZLEBRJIGWJPQTAAELVKPAHHZSTRXCNHCQDXYTYSEFRCQS");
    tmp_tmp_msg_0_0.attr_type = 5U;
    tmp_tmp_msg_0_0.min.assign("CRMHHXBNCTFSTIIYMVHQLLJDINWRPMUNRSDGQORMJLUQQRBQYLFGOYRCSWVAHGPWNSKDDXFZCOCZWTXPUKVGLDIEUXSGENAXFVBKZQXJMJKZQIJTYPNCOLWMUPJHHBUKWPWYJZBKEIWETSYYMAJOLSOAXEELPYQSOZNKMVOQIAVBCRJNHKXHVPGTVANZUGFMDIBDFCTRAWNAQXSDFWAPBRUTUXDLTZZKTIKFHEFEGG");
    tmp_tmp_msg_0_0.max.assign("JFRLZERARLLPTSSFPOHKLNAXNMQKYAOFEUUNGQOUYYEHXDGYSXSPLVNEBZRGCBJZLDEUUSGXJVOUYITDJPXMFFPGJMNWRQVSDEWMNILIABBLDQATSWTMCANTHIZOWUQHREVVGCONKCXIDKRCAKFKTVRNMHACWUTPBKQLEBWSTTIOFOPRHIGXVIGJHOYACGGFWXPBHDOYSEKUBIJWVMJRQZD");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.665167149305);
    msg.setSource(26939U);
    msg.setSourceEntity(74U);
    msg.setDestination(44279U);
    msg.setDestinationEntity(245U);
    msg.topic.assign("WYOJEAQGCOWYGGRXNFZZYITJIRBCVLNSJAFWHIKRLGWRCAQARRSOQUIXUTDJMQYUZKEQIBAOHWETFEUISQLYDUVKXMPLTLAEFDALWZAOSNDUWIQIHCNWXNBPRJPBUDGWTRTPPPEHESJGQJSVDBFVOFOOYNSCZSNMVCILEYETHVMSWKVAHJMNGUMUBRNSHBHKOZTTYUGENDVLJCMPHZMCPFJKBOLDXFHZPFTZFXBKKQRVXQ");
    msg.data.assign("AYBPWKUYRSYYZLQHGDZNJIHQUUJMZNRNTNHZCDXETZRALMTXCHTOSDWWFGGOKSVJPNCOBJVPLUEITTXCWEYJLWLLMWCBQWYFZIHKEGXAVDSLFOUEG");

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
    msg.setTimeStamp(0.678736333773);
    msg.setSource(28373U);
    msg.setSourceEntity(209U);
    msg.setDestination(59660U);
    msg.setDestinationEntity(164U);
    msg.topic.assign("VGPANPELDTQFUBOZYDQKFDVVKBWTPRLZCTZSHOJCNYMVIZJQAEFOMWIJSEHFOCXJGPVHSQEBPTNGJFRAKARXLXKJYEYEKWOYPTVXWVYZRCMGIFDHUCIKYQKLMANGNMQDKLBTWLHDLOSWWOQIDWCX");
    msg.data.assign("ZBZPTVVTVEGPRDQFBHMWIXFRYUTOLQOITTSISCMXZGJUPLZOJHKWXDIWGBWJJUAWBMZRVHSBAZKVBBEIREQCTSTLSHSFWTAD");

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
    msg.setTimeStamp(0.823343453653);
    msg.setSource(55549U);
    msg.setSourceEntity(236U);
    msg.setDestination(51917U);
    msg.setDestinationEntity(96U);
    msg.topic.assign("ZSSJOLZKFQRKKYFOIITUBLZNTCJPGGTZFOYLOJVEPFUWOZBVYVXVZQKWIIXAICSSJDKNIVEDEIHQUAWVJGQRFRVYYKSPHNSQZDMWDEUMMNHXMBRFJEPNLCPRAXJEYTIECGBLCHOLT");
    msg.data.assign("VSAZAOECWLHPBAHYTROBKCNNYSSGGDEUVJAKVBASIUMCWBWCXZKEMTCILGOGICSXWPFPHPIPNYUOTXLQYNXQBKAKXVMUOKQZDFQGQVITRVCJQBSLNFYILOWRFVSNDFETMSEPDVMRPRXFDXJJJUWGPXAWEQRZWYKWRRDAKEFFZMCLHSBKDLHWZYOMXTINJPBGENOBUJKZTDVUHUTVTZDQB");

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
    msg.setTimeStamp(0.599919087744);
    msg.setSource(65418U);
    msg.setSourceEntity(189U);
    msg.setDestination(37942U);
    msg.setDestinationEntity(49U);
    msg.frameid = 225U;
    const char tmp_msg_0[] = {23, 17, -17, 85, 68, 65, 116, 91, 66, -78, 22, 54, 17, -103, 41, -69, -121, 91, -93, -56, 62, 24, -125, -26, -45, -60, -63, 31, 53, -58, 98, -13, -66, 52, -49, -42, -115, -128, 48, -46, 81, 114, -75, 62, -105, 108, 114, 91, 77, 107, -54, -29, 106, 88, -51, 51, -109, 64, -83, -81, -23, 81, -13, -31, -111, 6, 110, 88, -120, -66, -103, 74, -114, -61, -125, 119, 35, 3, -33, 16, -6, -94, 22, -113, -108, 91, -103, 65, 71, -101, 53, -84, -87, -25, 116, 80, 115, 91, 71, -1, -36, -7, -126, 99, -99, -107, 60, 15, -92, -115, 117, 125, 125, -103, -38, -98, 6, -102, -14, -60, -84, -54, -73, -74, 18, -100, 72, 66, 32, 121, -57, -125, 44, -106, -38, 82, -36, -63, -20, -54, -30, 32, 60, 98, 33};
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
    msg.setTimeStamp(0.423479898818);
    msg.setSource(53349U);
    msg.setSourceEntity(207U);
    msg.setDestination(29925U);
    msg.setDestinationEntity(3U);
    msg.frameid = 111U;
    const char tmp_msg_0[] = {-128, -69, -69, -90, 60, 108, 60, 78, 2, 48, -4, 92, -75, 16, 125, -96, 50, 116, -48, -16, -79, -79, -99, -64, -86, -105, -27, -31, -64, 47, 92, 106, -93, 24, 97, -58, -48, 41, -2, -113, 53, -32, -111, 79, 60, 125, 30, 46, -8, 111, -16, 50, -109, -45, 120, -10, -115};
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
    msg.setTimeStamp(0.311773662158);
    msg.setSource(38741U);
    msg.setSourceEntity(25U);
    msg.setDestination(34392U);
    msg.setDestinationEntity(72U);
    msg.frameid = 78U;
    const char tmp_msg_0[] = {-70, 1, 27, -73, 90, -30, 84, -88, 53, 33, -110, -6, 29, 4, 126, -113, 123, -60, 110, -60, 36, 18, -13, 81, -53, -99, 82, 10, 57, -15, -37, 40, -3, -123, -24, 117, 10, -29, -126, 1, -111, 45, -21, -104, -120, 114, 17, 62, 40, -1, -31, 93, -46, 98, -13, 64, -44, 126, -20, -12, 37, -123, 19, 103, -90, 44, -90, 42, -44, 35};
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
    msg.setTimeStamp(0.821367951841);
    msg.setSource(12566U);
    msg.setSourceEntity(188U);
    msg.setDestination(57940U);
    msg.setDestinationEntity(177U);
    msg.fps = 85U;
    msg.quality = 152U;
    msg.reps = 20U;
    msg.tsize = 121U;

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
    msg.setTimeStamp(0.114276586422);
    msg.setSource(20114U);
    msg.setSourceEntity(41U);
    msg.setDestination(50005U);
    msg.setDestinationEntity(247U);
    msg.fps = 239U;
    msg.quality = 74U;
    msg.reps = 87U;
    msg.tsize = 141U;

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
    msg.setTimeStamp(0.563297255476);
    msg.setSource(41323U);
    msg.setSourceEntity(222U);
    msg.setDestination(28461U);
    msg.setDestinationEntity(132U);
    msg.fps = 250U;
    msg.quality = 22U;
    msg.reps = 6U;
    msg.tsize = 135U;

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
    msg.setTimeStamp(0.493393478876);
    msg.setSource(6499U);
    msg.setSourceEntity(137U);
    msg.setDestination(26377U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.915954387725;
    msg.lon = 0.822235811192;
    msg.depth = 100U;
    msg.speed = 0.340844653142;
    msg.psi = 0.181071183836;

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
    msg.setTimeStamp(0.940135776835);
    msg.setSource(47860U);
    msg.setSourceEntity(171U);
    msg.setDestination(53399U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.853013642781;
    msg.lon = 0.0263991863034;
    msg.depth = 102U;
    msg.speed = 0.766273896488;
    msg.psi = 0.684572264653;

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
    msg.setTimeStamp(0.302739108213);
    msg.setSource(36990U);
    msg.setSourceEntity(81U);
    msg.setDestination(40538U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.797705410475;
    msg.lon = 0.739957707503;
    msg.depth = 44U;
    msg.speed = 0.701385623027;
    msg.psi = 0.170670988939;

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
    msg.setTimeStamp(0.0556077822339);
    msg.setSource(43010U);
    msg.setSourceEntity(153U);
    msg.setDestination(28282U);
    msg.setDestinationEntity(19U);
    msg.label.assign("EEUGHYFCKUMKCBSEYYQRMQLDMCVQPGGEAIPHIOBZEDTWWAOTGEQOREZNSNTYZDVJJTNPCLESOEZTARTDGUNLAHZZFQVFZKDFBQAUHUSRVMYLYWSFVXHJIDHMUANODSTCPUWWRFHLMKQNXTKCAMCZXRFURTJYASGROCVLAPKRPKUTQXLOXXBQJJIBVPHGM");
    msg.lat = 0.283355569964;
    msg.lon = 0.760774101543;
    msg.z = 0.138072652944;
    msg.z_units = 190U;
    msg.cog = 0.802273302763;
    msg.sog = 0.354723014167;

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
    msg.setTimeStamp(0.412879567027);
    msg.setSource(44711U);
    msg.setSourceEntity(83U);
    msg.setDestination(37123U);
    msg.setDestinationEntity(110U);
    msg.label.assign("AWTEHVYJOPATKIQYMFCPFGAUGHFCHNUOEDIXGOUBDRCKPOEUJQKPEHSAOQIFAUCMFYIGJWEKWEDZCJMODRENSVIW");
    msg.lat = 0.175603320485;
    msg.lon = 0.710476005178;
    msg.z = 0.735391560325;
    msg.z_units = 167U;
    msg.cog = 0.725630869307;
    msg.sog = 0.907015016611;

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
    msg.setTimeStamp(0.161772936935);
    msg.setSource(7551U);
    msg.setSourceEntity(71U);
    msg.setDestination(30405U);
    msg.setDestinationEntity(9U);
    msg.label.assign("HWDAQRRPQCUHIPI");
    msg.lat = 0.684063660602;
    msg.lon = 0.338028498439;
    msg.z = 0.0609268032504;
    msg.z_units = 106U;
    msg.cog = 0.232669614403;
    msg.sog = 0.0356971234701;

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
    msg.setTimeStamp(0.0198126861507);
    msg.setSource(63524U);
    msg.setSourceEntity(118U);
    msg.setDestination(57034U);
    msg.setDestinationEntity(111U);
    msg.name.assign("HMODHTJGIHXSXZJWFKOBPGZJTDUUKGJQFAHIEJSHLKWXKOGMGXMSEUDZCWLMBSJCZEJACYBBCVYWNWADOTAFWEZIYYPSVRZIPYDKUHFEOFVIVNEGNTLCIDMTJOBMWGNMVCLBETNLCRNYKBFFKLWSOBFGCUPAWMZJBQRUQRPHQZRYNONUO");
    msg.value.assign("RHJEMULXYIBCVHQICCFAKHPYELAURRTWWRPMDNEDGLQVVHKGAYMBVBXYLKJUIYZIYEGONUEGCPUWWTNSRHECEIUNVQXRZTSNVGNRSOCSDCZFMXJNFFMQJHQDQWNFSC");

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
    msg.setTimeStamp(0.899471347555);
    msg.setSource(63875U);
    msg.setSourceEntity(178U);
    msg.setDestination(54783U);
    msg.setDestinationEntity(177U);
    msg.name.assign("XHXDFLWAWGZINPGMZOIRZVKNMJTAAAOQJNGIHPSFPLZXOEATUVNANVFVGUHOWRDGAORBTFMOYJQQUTWGPBCWPO");
    msg.value.assign("LULRPLCLBTOOCKAXCAJPEUDMUBMEJYRBWAASFVGLJXBDUDRDPHNCSWYWAZVPFNVSIDKQWKOBNGLJIGUZNETAJITRJMMHDMEHIJXNBETSGWUTNGHRIBQZVKQPMUKHERZRHWHEPFHGDWFCTAJPMKQYAXGNIGFSDQSYQLBEDXTKYCSIAQOEQZZMFKCZVKMYZVYXSOCGWVMSBSXXOIREAUNOL");

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
    msg.setTimeStamp(0.582777666855);
    msg.setSource(36513U);
    msg.setSourceEntity(251U);
    msg.setDestination(10466U);
    msg.setDestinationEntity(70U);
    msg.name.assign("QXYXFNWDBKBDVSZODNEFCNBWOYLVDIBZGLRGQWBLWUMSKYNCFE");
    msg.value.assign("PIDZENEXLRBANGDINHQOMAHSUIIAHGSMLSOQUGBSTVJETFCMSRVHZEAZHNNTBGCVBKZKFYYTWACGZBJKSUBCFYGSRNNZDCCFTZIPRTPPYGRQFJSAWOYJURBYGLNDKMKDTXTYIVQUQNXCAEFVHWODAWHJWKPZQBEALPBHFODKGKMUKMCZLLULTPEIQLQXMCXIVTRDDPGZJYEMHLVXWVJMFUSQRJWI");

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
    msg.setTimeStamp(0.237657069906);
    msg.setSource(56785U);
    msg.setSourceEntity(158U);
    msg.setDestination(24836U);
    msg.setDestinationEntity(173U);
    msg.name.assign("SPGGUFGUAEFYHVGSGEFHDZBOXDTZZRWLOOHMWMLBPYXNATPJANYDSKVWTBIRVPOQMIXKTHKQZXKQIATFVCPKLIQRYMFCBZHPUNUMSGAZIAWYBMSETRNZKEVRXODDYSNOIJXGHIFGDABEYKWUQMQZSNHSSXVTUCCWEMCJRVFDLDTUIEKZUQJMTYCWISHBADDLPIJKYQJPQLCMHXVCBUJUNFLYRGCEV");

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
    msg.setTimeStamp(0.526581721683);
    msg.setSource(7470U);
    msg.setSourceEntity(143U);
    msg.setDestination(21322U);
    msg.setDestinationEntity(96U);
    msg.name.assign("BAAPGCYBMXPNLBOLMOYQWVJMZTZOXDJWPJGKNHDGUQASCLFLDQNCAATVRVVMKSPMTNIKHQYPGPAVWOTF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MELPYCMOXRPYESXOCPGVYXSBTGFQNIVLCHCQUXBYVFLOZQZYBYDCDPPLLNDKTTONQGNLAEVVVIFFASWCUMCTHVJASJJHXPOCRZZOZHQAKJPRATJISCVICLJDGXEXZERJRMBBGO");
    tmp_msg_0.value.assign("UTIZPEXUJMAMGNFCVPFHPKURQQHAQFCPZHZKJSMIJGCBHOADMMJLWXTLW");
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
    msg.setTimeStamp(0.509859131258);
    msg.setSource(65375U);
    msg.setSourceEntity(90U);
    msg.setDestination(2590U);
    msg.setDestinationEntity(199U);
    msg.name.assign("CDTZSSMWCYKITPZROEVZKWNTDJAJEZMULEZWLSLZSQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OIRVSGCOVWDGNRKIDZCTBNKSRHOWKUJAKUJKXHLUVTHYWPXPJMCVFXYKV");
    tmp_msg_0.value.assign("BYHNRGZHGIWWHDKWVPDCWWLQPXPUUJSNLYJNLUPIFMIVDCKAVLSJPAFDLMKKSMSOYUGAENLOLPBEVHGBUCSXZTGJHIYSOATQIBOEZEQVFTQQERHDPZWVIFWQBYEDTMDIYAKAJNLZRKHURMGXTGJEWAL");
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
    msg.setTimeStamp(0.988435974057);
    msg.setSource(24136U);
    msg.setSourceEntity(206U);
    msg.setDestination(25170U);
    msg.setDestinationEntity(79U);
    msg.name.assign("FINHROSPVNUKZAGEBHJZEWJDTTWHIMNSRKVPQSIYILYXPRKEAWOYKSSBMBXQFSSXEDKLIIANCZMQVYADAYBNYJAEVSKUSTLLIMXOXQWMHZTLQUGXHSANLDYCZPKBPFGRCJZUECFVVFQUHYQLFIUCDNUQAQHERCWOMHVBPIYFJRMUOTEJCJVQYTBDXJDZDNLGEGRZRJGCXUXWAWJFLMTVKGEOOWGDKNTGKWFZNTFICGCPP");
    msg.visibility.assign("APLCFMGHVNNCSNHVBMWBXRJCNAZIXYZWOLPIMYKRRQTXKDLVSADKAIFEQZSHIOFGQGVJKYRZHVAXYMBLUUUBJEZMIWOZPEOUQNHEYXTLKVWYHF");
    msg.scope.assign("KOOQEBBDXQPHNYHHKDOIWZZJKVMSCPWMFTJTDHSXYKUNATISRZHYPYCEBJE");

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
    msg.setTimeStamp(0.618572453442);
    msg.setSource(47185U);
    msg.setSourceEntity(20U);
    msg.setDestination(6469U);
    msg.setDestinationEntity(131U);
    msg.name.assign("KSYWPSBIRUGATNCROHXHJVAQBOPEEAXRKESRCWAZUHNNIWUMLBUGRBLFGNP");
    msg.visibility.assign("OMMDAURUYMZGQRJROXVNMXZUENHONBQBKAPMMSKHZIBZGWJIGJ");
    msg.scope.assign("LTLVYXZMAJKDSPKAZQNPUJXHLJIMTXJXFCMOMVETQXUNGGGREKQDRFQGWVNZFGEMOWAYCTZPXYVRCTIOJPAYDGOMUUASWDKRFNZLCHTBRVLPLBQCS");

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
    msg.setTimeStamp(0.309334732315);
    msg.setSource(64465U);
    msg.setSourceEntity(29U);
    msg.setDestination(17944U);
    msg.setDestinationEntity(89U);
    msg.name.assign("AAWYYDHTKWMCSUWDMOJMWFUCMXVFFEYKDYUNCSJNJSHBQQOXFOMWLSDZXDSTQRULGHKHOJYHPBPFNZXOHEXKGLFGXRGVJBBNHEEARBZABPGODZVJIZNGNREXBMSYPKXWJILIVVMJUABTSAVLTEEZIUQTCDKIQJPVXMO");
    msg.visibility.assign("PJPPSHXJLFVWOPWQMRBFWZJZUMYQKAPIUMDNVPCYTAPJLRWFBVZVKABRDMBNRBULMDTIXJHKVBMCGJWOEKKZROHXNHIIRVAYJUTDEEBUSQHCDYUVEHDDPJXOTFIEWSICOROXLSFXOIGBSQLYJTHFSSDWMAYAXNQZNGGANWUANHNBVXTYLCTYCIKQNVZZAULSUSLUOOFRPFZGTJQQGKENCCZMCVKKOQRYWEMAQWBGXGH");
    msg.scope.assign("JUUXIBUOGAPDYMINJWBDRHRKQOHEMFLZCRSDCIMODSTVKLPDYYCZYSSEVWHETKQVQFRNT");

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
    msg.setTimeStamp(0.794076707389);
    msg.setSource(42333U);
    msg.setSourceEntity(186U);
    msg.setDestination(50107U);
    msg.setDestinationEntity(179U);
    msg.name.assign("JIFERFLQTCBORODPONLSDANYTSYNZOKSRQFRXCCZEXSTAMHHKHQBTEKUSCPHPUECQHDGFYAOYINFIGLYVAYUXL");

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
    msg.setTimeStamp(0.811417629209);
    msg.setSource(46195U);
    msg.setSourceEntity(170U);
    msg.setDestination(6756U);
    msg.setDestinationEntity(216U);
    msg.name.assign("MKABOOXJCRZFQCDYUAEDROFNZGYDHAPXWHYASHJZVWKNUJZAQRQKCWMTDMOGFYIBNOZSHPWWUELFTEEVNETHWWIHGCNLQBXYCZVHQMYHFLHKZZMPPUQPBUIWERTDQTXVEZFCMQKEANPMKTPCUXDBSJIBGYMFETVJUMYRLZJYCWIGIURRVFLLDKXJBRSLPIKJQDFPONGOVYXLFDEUSVDGGVHKLTBTNGJIAANRXCIVBQSOPX");

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
    msg.setTimeStamp(0.562931447775);
    msg.setSource(6043U);
    msg.setSourceEntity(161U);
    msg.setDestination(22770U);
    msg.setDestinationEntity(61U);
    msg.name.assign("OFQWREAKNASDDBVYFRTDVAGDMEMTBSINQCIIJRQPZKAKPRIKWLMBYNOHEAPXJGETMSKKEGIHQSYNMKUZVPJCQEZK");

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
    msg.setTimeStamp(0.893442800273);
    msg.setSource(13493U);
    msg.setSourceEntity(178U);
    msg.setDestination(32463U);
    msg.setDestinationEntity(89U);
    msg.name.assign("RTEOQJJUEDWNVQPVABHUHNRCLUFJPFUQXEDOTFFMPWLFPGLTXSAKROEATOWSYNZLZIOCMSYXPNTHLIGKXSGBEELUVLNKUGYAEMRSRDXFIIBXXIXKIQWSGMOJIKUVFJIZUBCBWDOYHBSOZGPHEDKTGZCVRXQDUJDWV");

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
    msg.setTimeStamp(0.363661289164);
    msg.setSource(30323U);
    msg.setSourceEntity(135U);
    msg.setDestination(22601U);
    msg.setDestinationEntity(69U);
    msg.name.assign("ZJXROQHTFCULTNVBIPCMRYTSBHXMGQMWRHOHDYJJENUNELOEYMQCNGHUWCUDQTNPWXJCJUQFCGOLGSWZAYGCDEPJLOINOFXEMAWJDEHTMONILHEVBNSJTTBBVVILDQVEVKXZRUWBFKQFMAXSHVLAAFZ");

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
    msg.setTimeStamp(0.5316985549);
    msg.setSource(6710U);
    msg.setSourceEntity(14U);
    msg.setDestination(57512U);
    msg.setDestinationEntity(114U);
    msg.name.assign("ZQCUYMQWKNSGGELIDUAFIRQPVQDHYDKXHXEYTKQWKUAOHTRCQMOMWXUWJKGTEKVPEIFONKZZOODHJDUKHHMSMNPRBX");

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
    msg.setTimeStamp(0.984576280019);
    msg.setSource(28060U);
    msg.setSourceEntity(254U);
    msg.setDestination(56009U);
    msg.setDestinationEntity(181U);
    msg.timeout = 2944677713U;

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
    msg.setTimeStamp(0.291920714571);
    msg.setSource(15281U);
    msg.setSourceEntity(92U);
    msg.setDestination(5916U);
    msg.setDestinationEntity(85U);
    msg.timeout = 602919759U;

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
    msg.setTimeStamp(0.589993515362);
    msg.setSource(49U);
    msg.setSourceEntity(206U);
    msg.setDestination(19261U);
    msg.setDestinationEntity(229U);
    msg.timeout = 3067855632U;

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
    msg.setTimeStamp(0.0503519110852);
    msg.setSource(54347U);
    msg.setSourceEntity(122U);
    msg.setDestination(63470U);
    msg.setDestinationEntity(165U);
    msg.sessid = 2891535039U;

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
    msg.setTimeStamp(0.436828723143);
    msg.setSource(23509U);
    msg.setSourceEntity(37U);
    msg.setDestination(47429U);
    msg.setDestinationEntity(44U);
    msg.sessid = 3143677488U;

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
    msg.setTimeStamp(0.810122401334);
    msg.setSource(6990U);
    msg.setSourceEntity(225U);
    msg.setDestination(53008U);
    msg.setDestinationEntity(162U);
    msg.sessid = 372546996U;

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
    msg.setTimeStamp(0.339715143997);
    msg.setSource(31386U);
    msg.setSourceEntity(239U);
    msg.setDestination(45183U);
    msg.setDestinationEntity(25U);
    msg.sessid = 2684074804U;
    msg.messages.assign("WJPCLFINAAUHYWDVFGBDOPSARMTKXURPFBTRCXEZMFEWBPMNGSGBQSNFPUKACSVSEHNOIUGZFTJIZUOSKDNCQWLVVHIXHAWIHODOTQKRNNVFGOBHRLIYLAUCCBSUJBKLWGQKADDISYULNWZPCWGMECYFODXKB");

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
    msg.setTimeStamp(0.311767858681);
    msg.setSource(22604U);
    msg.setSourceEntity(62U);
    msg.setDestination(52939U);
    msg.setDestinationEntity(51U);
    msg.sessid = 3086874261U;
    msg.messages.assign("ECYDEOGAQECKLPLQGTHKYJJDFUXMBSNPBQNSAXKGKVDXPTEFZWAPYRLFZWGCNBJWJWKYYCXBPWOPHRDATHNHMFANUSZANAZXUMLISMTXQHQBTPBZSFSUUIREILFCGRJVXOYPSOVLMKVZMJIPLBWQARCHKCVETQEJJVRHMWSUDVISIWNDYZUQARFBHLIORNIRGDGDTCUGYVZOZTIBWJ");

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
    msg.setTimeStamp(0.176597235955);
    msg.setSource(25073U);
    msg.setSourceEntity(251U);
    msg.setDestination(5535U);
    msg.setDestinationEntity(83U);
    msg.sessid = 2153324749U;
    msg.messages.assign("USDZTVINIRBPSMMJPXYFOMHZALVGSWMWWMWNAHHLQKVTCUMTYCSMHFEYTUWHVYIVESRUSIBRHDYREYEJPOBYNCXCQLXOQCGHAQZDWGPZQTIRXQIEAJAPFJDKOGODFYJRKUULZFEBORMOULGLKCHTUVTELRPPOBPXKAXKOZWNBSKRHLMWSDENXWBCCDZJZBQYLIMJKRWYOXIHVFL");

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
    msg.setTimeStamp(0.224340733419);
    msg.setSource(11125U);
    msg.setSourceEntity(29U);
    msg.setDestination(65384U);
    msg.setDestinationEntity(218U);
    msg.sessid = 3581872809U;

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
    msg.setTimeStamp(0.909214102371);
    msg.setSource(9554U);
    msg.setSourceEntity(148U);
    msg.setDestination(51636U);
    msg.setDestinationEntity(13U);
    msg.sessid = 3955946057U;

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
    msg.setTimeStamp(0.759579181111);
    msg.setSource(30462U);
    msg.setSourceEntity(202U);
    msg.setDestination(55825U);
    msg.setDestinationEntity(144U);
    msg.sessid = 375965786U;

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
    msg.setTimeStamp(0.622557107069);
    msg.setSource(34490U);
    msg.setSourceEntity(90U);
    msg.setDestination(5427U);
    msg.setDestinationEntity(141U);
    msg.sessid = 3581557658U;
    msg.status = 184U;

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
    msg.setTimeStamp(0.677209986406);
    msg.setSource(41366U);
    msg.setSourceEntity(141U);
    msg.setDestination(29849U);
    msg.setDestinationEntity(237U);
    msg.sessid = 3845127665U;
    msg.status = 141U;

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
    msg.setTimeStamp(0.699356903916);
    msg.setSource(35140U);
    msg.setSourceEntity(157U);
    msg.setDestination(34024U);
    msg.setDestinationEntity(71U);
    msg.sessid = 4064768855U;
    msg.status = 117U;

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
    msg.setTimeStamp(0.0782456481274);
    msg.setSource(57625U);
    msg.setSourceEntity(246U);
    msg.setDestination(34082U);
    msg.setDestinationEntity(18U);
    msg.name.assign("RYQDHFUOTRLGQOVBPHAROSWBDQQCEEIGSASXCITDZEYWWSEPJXQNEWUTSPEOMHPNCIZJWKMGDNZTCHWLPMNYVBYQTEJIMULVBOZYZTQD");

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
    msg.setTimeStamp(0.72608017013);
    msg.setSource(40318U);
    msg.setSourceEntity(251U);
    msg.setDestination(42309U);
    msg.setDestinationEntity(168U);
    msg.name.assign("ZXALTEGOCVZGRKDNIRJTQTHHLSSBAFSXMYFFKYYLHGQJCZSPEAWNQRJUEJWDJANKKEXDBBTUXYGOMAOGQHNBQLGBXWDTIJAUIKUGSEXCE");

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
    msg.setTimeStamp(0.190081917185);
    msg.setSource(37664U);
    msg.setSourceEntity(193U);
    msg.setDestination(20027U);
    msg.setDestinationEntity(186U);
    msg.name.assign("MSKIVXYEUKWGMPPQCGK");

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
    msg.setTimeStamp(0.810446494141);
    msg.setSource(48944U);
    msg.setSourceEntity(29U);
    msg.setDestination(4284U);
    msg.setDestinationEntity(142U);
    msg.name.assign("MGEUNIDDXNFFVLNOXMESVVGTTMBBNJMLYSKQDXZHXARCVDGLCWBFTMACEAWVPSZLRCOUEQKUYRWIJCLHZBHJZETPULPOBTSTLUHLGUWDRPSLYRFGICMXNRYYPUKAEIWEQKQONGJDDUBNEWDREYPIVAKJKV");

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
    msg.setTimeStamp(0.463163788364);
    msg.setSource(8711U);
    msg.setSourceEntity(194U);
    msg.setDestination(49536U);
    msg.setDestinationEntity(88U);
    msg.name.assign("HUOWSZFTYOVBIGFQYJZNCEDGNUIDFMLPXNFGIVOMLAJZOMHZBPYQPEJMKBXRNMXCSOKODVJFXRPJQMB");

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
    msg.setTimeStamp(0.80670180833);
    msg.setSource(3868U);
    msg.setSourceEntity(252U);
    msg.setDestination(13817U);
    msg.setDestinationEntity(52U);
    msg.name.assign("NBRVIXIUOKPPASOKHVHCVNPCJWFYLIXCBENPJBKGQMLPBORHLODEMJBUAEILGVLZMBEZHEKJQWNADSHGIZGLXCZEDUUTGZCCIVXETESQLYTVSOSBOWVMKFJQUMDYEAVDXJCSQCFVJKGRUTRMIHSRFDYMQOQIAQAPZKMJGWDZP");

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
    msg.setTimeStamp(0.36617162492);
    msg.setSource(23812U);
    msg.setSourceEntity(13U);
    msg.setDestination(63143U);
    msg.setDestinationEntity(222U);
    msg.type = 67U;
    msg.error.assign("GJMDTVIVOIALXSMZGKXIOTGFNVJJLBEUAVXFYNKCHYKVWXMEZYTURWRMWDWJQODNPAMR");

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
    msg.setTimeStamp(0.919876778848);
    msg.setSource(8267U);
    msg.setSourceEntity(241U);
    msg.setDestination(28796U);
    msg.setDestinationEntity(77U);
    msg.type = 211U;
    msg.error.assign("YJYHXRKSOUEICZHPKZSSUTNIFLXAPYSNDPSFSHQYCDFZRLBTQZRAHLPZCJQURPKVVESBXXBKZQRWOLLCJAUOFMLITWLTUGVDQKYHPPERYFGMDNGBREIBWCVCACDIVEQWTJTGRGSPDTXAJJJNAWXGDHLJHFFGCPSVWEVHMOHTEUIMKBEJQWIBIQWTMZHMYFNOZQDYNDVCOEYPNZG");

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
    msg.setTimeStamp(0.214865487335);
    msg.setSource(16196U);
    msg.setSourceEntity(81U);
    msg.setDestination(9043U);
    msg.setDestinationEntity(186U);
    msg.type = 81U;
    msg.error.assign("HJMAOTTMHWOHVCTDMZSXVBPMKDLEVYDWIZFCKOGLYJNIWBSPFOXCMNEIRTXKJPLKPFLSSLRRLCSNHZNRKAIBDFPHSSGKJIEXGUTYVNEFMQBTFEULXGYJMZXRUGADQNGHTQLGTWIWKYEBZDVNNURVFAGYLSECFQWAGPTY");

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
    msg.setTimeStamp(0.553046167692);
    msg.setSource(52850U);
    msg.setSourceEntity(21U);
    msg.setDestination(31163U);
    msg.setDestinationEntity(26U);
    msg.seq = 37006U;
    msg.sys_dst.assign("FHWEQOEKTABJBFVYIKUNDMXBIEGZCSNVHIPVWCQJYCNYODXREHGHKJONNJNQPPXYMWWDJSUZUSSORU");
    msg.flags = 72U;
    const char tmp_msg_0[] = {-128, 0, 106, -96, -43, -89, -72, 88, -103, -45, -79, 100, 93, -5, -58, -39, -107, -73, -31, 93, 116, 116, -18, -71, -97, 44, 55, 37, -53, 11, -85, 14, 55, 99, -37, 73, 8, -56, 80, 23, 38, 108, -128, -41, 42, -42, -59, -114, 85, -98, 20, -124, 12, 124, 60, -108, -10, -125, 114, 89, -4, 80, -102, 47, -118, -90, -65, -64, -71, -59, -2, 36, -7, -96, 12, 51, -15, -31, 73, -22, -39, -32, 22, -12, 88, -93, 17, 40, 117, 10, 37, 124, -47, -90, 39, 66, 16, -75, 121, 66, 35, -42, -27, -88, -109, 80, 68, 72, 83, -63, -55, -11, 23, 81, -3, -53, -66, 5, -37, 103, 54, 9, -122, -111, -112, -57, -30, -110, 61, 114, 76, 85, 70, -17, 13, 64, -71, 17, 61, 17, 66, -30, -97, -66, 111, 71, -72, 50, -106, -114, -107, -74, 76, -45, -111, 123, -35, 97, -51, 28, -38, 40, -69, 26, -58, 64, -8, 1, 51, -112, -42, 120, -61, -94, 48, 34, 66, 107, 12, -117, 52, -42, 124, 99, 15, -75, 93, 77, -96, 7, -83, -37, -46, -83, -123, 64, 35, -100, 20, 119, -7, -122, 37, -42, 117, -52, 80, 23, 8, 98, -4, 117, 96, 3, -18, 3, -108, -72, 98, -85, -114, -65, 17, -73, -36, -38, 87, 98, 111, 111, 14, 93, -112, 96, 11, 9, -116};
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
    msg.setTimeStamp(0.280661610742);
    msg.setSource(21392U);
    msg.setSourceEntity(192U);
    msg.setDestination(22322U);
    msg.setDestinationEntity(113U);
    msg.seq = 13590U;
    msg.sys_dst.assign("YMTQUGWJEAUVXRINFQKBHKHPXARJXCUMENDEBSYEBFCINYQOACNWHJTVBZVGKWORSOFTMEHKDLWACJEJHWGZQPYQOMJNLDCKJYDSIWNATMDXIJOXMPALGPVBPSKHNQPRUHEMWKPVXIOHAMKOVDCURMGTGBFTBIDMBRLEICLOUSCGXRJOYEZTLUFZGUZPFGQZZUNDTTIZQTDLFOJLYKSNXYEIFBRZUNYCWHPWLRZIGVSVKYVCWSHDF");
    msg.flags = 23U;
    const char tmp_msg_0[] = {-109, -34, -94, -87, -92, 20, -73, -70, -51, 107, -68, -18, -115, -103, -103, -29, 78, 101, 54, -27, 15, 40, 76, -40, -32, -41, 48, -49, 97, -2, 13, 82, 74, 45, 66, -116, -66, 14, 9, 42, -34, 12, -9, 116, 82, 28, 94, 23, -10, 65, -42, 23, -4, -10, 116, 19, 88, 53, -37, -14, -42, 84, -42, -113, -2, 13, -107, 23};
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
    msg.setTimeStamp(0.717406013403);
    msg.setSource(23016U);
    msg.setSourceEntity(14U);
    msg.setDestination(31126U);
    msg.setDestinationEntity(153U);
    msg.seq = 44393U;
    msg.sys_dst.assign("ULAUQRVHKTTQYMKHKNPUDVPLCLFEDAHAJAQICSCAKLSUCKCSQVJXBUECEDTRWRJAMIIGNPZZQUZOWHFTBMNRXBMKWEZIMNXVIGTUMJEGAXKHRNDJIYNIFTAJEJSTIYYWOZ");
    msg.flags = 138U;
    const char tmp_msg_0[] = {-35, -42, 18, -78, 63, -24, 76, -114, 60, 123, 87, 4, -73, 107, 55, 49, -1, -63, 70, -55, 1, -122, -88, 78, 101, 0, -40, 94, 5, 9, -18, -19, -45, 66, 77, 79, -105, 100, 1, 22, -51, -46, 22, 77, -123, 43, 108, -67, 55, -43, -43, -93, 89, -64, -79, 53, 56, 85, -25, -98, -96, 51, -116, 33, 88, 50, -53, -88, 91, -120, -60, 95, -124, -107, -16, 98, -90, 94, 118, 95};
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
    msg.setTimeStamp(0.494059479742);
    msg.setSource(35459U);
    msg.setSourceEntity(107U);
    msg.setDestination(37379U);
    msg.setDestinationEntity(31U);
    msg.sys_src.assign("AMOZGORXCKZYNAU");
    msg.sys_dst.assign("RXWEBKDPSMSQCDUEAJTWWLZXDHSOGRHITSAGPVZYWNDZZNQEMPDPGSZECSBIVNOAQCMNUIXKLFCDHREPAJUYULHALOOVKZCZANYLTSITIBHMXHQFNTKCWXRTVKQSXFLPOMGNCMVVUIJUHOGYBHBKFDVMDHJYJWBUQFDEBUTJHCYRXWFACPLOFBQLRWTRKMZRYTSPAKLCJOZGNMEQYAFQLFRGEWGIRWZ");
    msg.flags = 86U;
    const char tmp_msg_0[] = {57, 40, 122, -47, 17, 7, -57, -16, 63, 81, 103, 107, 85, 59, 11, 10, -50, -90, -1, 66, -40, 70, 15, 0, 110, -51, 110, 121, 0, -89, -104, -110, -54, 4, 23, -128, 93, 22, 117, 41, 2, -24, 125, 44, 12, 57, -16, -80, -84, 24, 124, 91, -106, -31, -115, -76, 63, 107, 31, -62, -95, -40, 92, 102, -93, 49, -117, 55, 64, -60, -22, 12, 100, -3};
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
    msg.setTimeStamp(0.414211029648);
    msg.setSource(35216U);
    msg.setSourceEntity(83U);
    msg.setDestination(4974U);
    msg.setDestinationEntity(231U);
    msg.sys_src.assign("LBGIBDLLERQCTZIPQHAQTRAAKAGWMSKNZGIFSQZWQDRKTJURESOHMYKWTGSUSYXTXEIQGHFGCOFHDACJZDOYMBGOVOREZLTUHKNIWRBCQCBBWNDXIQETABFMQVOZYWBPYPCKFGVEESVJPZYGLEWWJONJDVFEW");
    msg.sys_dst.assign("CXXXNFVFRBKOQKLEJSMDDNKBCUGZAHNEQPLJKSLMZYALDTBYDUOPGPUKCZTBEHOFHAWRILIIWGQVHUMJPCPMZVZULVZEAICGHBIHZOGQOQKJDPWKTRPTXSKOEUNYXXRJQNTENUEVKMWRKCTFDCXZEADVRCRWNVZXWYUBEMIBLJGYSJJBWMDOFTLJMIMAMIVBTALYPFWVQVSRFGECZBHQNTOSR");
    msg.flags = 232U;
    const char tmp_msg_0[] = {49, 61, 56, 0, -122, 6, -80, 117, -125, -7, -1, -117, 30, -5, -103, 11, -2, 26, 98, -11, 47, 96, 116, -112, -54, -14, 34, -9, 23, -120, -94, -71, 125, -82, 112, -95, -21, 102, -59, 17, -10, -3, 42, 77, 0, -118, -16, -27, -72, 43, -23, 114, -79, 31, -50, -91, 111, 56, 74, 59, 28, -88, -99, 57, -119, -83, 116, 36, -83, 15, -97, 19, -89, -126, -27, 15, 117, -4, -44, 30, 58, 123, -31, -13, 10, 20, 39, 3, 38, -93, -25, -108, -116};
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
    msg.setTimeStamp(0.80719893169);
    msg.setSource(16388U);
    msg.setSourceEntity(185U);
    msg.setDestination(9899U);
    msg.setDestinationEntity(100U);
    msg.sys_src.assign("BWFWYGBIXLTDYEQKQAETHNLPWECJFOSXATIXQNXPLTDDYNVPNHERYNRUMJNAUZIZEIUOOMAGFIHFXOQSQZQLDGKGMNLFEDSPGMXPZGZCIWYXBKVOEGPRQRUXZLSQMWRAHAKDHOMZHYDBLVITMYABISJKJMCMUZWCBREKFRITXGVQEGAKZPCWALYQBLEPIJJBTJHTSYDFJCFUSDVVCOOFVTGRUVXJORKKAPVNTLPMUW");
    msg.sys_dst.assign("ZXLHCKFLBOZJLFATUNWFNYAYHIEXTTKPVSZMHDOVTOONHZUDGKDGQBKNCCDKITHHVFYAY");
    msg.flags = 46U;
    const char tmp_msg_0[] = {120, -20, 68, 58, -99, -19, -45, 76, 8, -17, -72, 58, -59, 12, -71, -62, -91, -96};
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
    msg.setTimeStamp(0.366936970046);
    msg.setSource(42241U);
    msg.setSourceEntity(100U);
    msg.setDestination(40370U);
    msg.setDestinationEntity(245U);
    msg.seq = 65330U;
    msg.value = 60U;
    msg.error.assign("VQJAWUZBAFXILGVGMNZRQXNBRZQVFELCQVEEZSAHRSZNLIXFNXTMALDJRTJAVCWOUVGHPMTLDMPFTYDOOJNMKDZADILTYCSQADLSSXHGKWKEZGFNGMJBYWBXKPUYXOEKEKCCDOSDFUOJGQIXJHHVNCNXSPBL");

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
    msg.setTimeStamp(0.389805857531);
    msg.setSource(3165U);
    msg.setSourceEntity(123U);
    msg.setDestination(58456U);
    msg.setDestinationEntity(66U);
    msg.seq = 61018U;
    msg.value = 156U;
    msg.error.assign("GKRZXDZWNNQTZECEOVELXYKFHODEQSKPGEUTYBWCDSNFDYYDEDJGZETMEXOYNWDPPMXRFMQBAZHALTTRRRYJFPXFUDMNHVOKBOCRQXCQIGIAZJVEACNUKLEZJWUKQBBIKQVMOHCJUUPBVXZWJUNVJZUNIIXVWWIQSSSLHPQBUFLOLORJFHCINJSS");

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
    msg.setTimeStamp(0.637916518123);
    msg.setSource(47351U);
    msg.setSourceEntity(130U);
    msg.setDestination(22000U);
    msg.setDestinationEntity(73U);
    msg.seq = 53000U;
    msg.value = 235U;
    msg.error.assign("XXOCYDUHZMPPOKCVREZURRQAYZIBOXTCLOIAJGZTVDMWMWQMFNWFNSDHBFEYYQVZQXPTUZYSNPBJSUSOKDGWBMJKTNHDXJPBWYYTLLIPICOFFJGUEMYEAGLPKUIBWPLTKBOTOYIGILQNCSDZWCFAVBRRHJXSBFKAZYISSROCPNUXWINHNDLHDKRCQHGEXGRUXCMMTABLVJGKONAVEASVMKEXSDRLFJEDAAWWPNVJHZ");

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
    msg.setTimeStamp(0.719635511974);
    msg.setSource(25920U);
    msg.setSourceEntity(198U);
    msg.setDestination(2948U);
    msg.setDestinationEntity(215U);
    msg.seq = 30362U;
    msg.sys.assign("IACJXTMRHLQTYDFEFPRAMTFKRAGBTZDDVBTDHCXDKRXMOIDTMEKTLKBIZOOYVGXGHHAAVZLPPQHTPVPCBXAYJVXDUWUWKFMICHAEIBNINZXYSSNONCSSUDBPSJCSNGQEAEJGXZFKSHNCNHNUXLRLVVVU");
    msg.value = 0.118527246677;

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
    msg.setTimeStamp(0.366972352957);
    msg.setSource(5784U);
    msg.setSourceEntity(63U);
    msg.setDestination(22749U);
    msg.setDestinationEntity(243U);
    msg.seq = 13898U;
    msg.sys.assign("QRWKONFRVKKXUYGMKGHYZWHSCOAQIIVFBLEQERJAPXWCLCGGKDLXVSOPUEJYSIIHZCGDPTQUFICYHCYSJAPUPXALQDUFVEBAIZMSOGZMMJRXRAZBZAVESWENWOJKJSITYNKIHDDXFWNUFVZISUCNZBBROYUPKHRQHXHCHYQOHTRWJP");
    msg.value = 0.995801110959;

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
    msg.setTimeStamp(0.549747619806);
    msg.setSource(16299U);
    msg.setSourceEntity(159U);
    msg.setDestination(5799U);
    msg.setDestinationEntity(245U);
    msg.seq = 46431U;
    msg.sys.assign("KQNKHVQJJIAVDLFVDQNRPJAXRFDWVPJTLHJLLAUZMTRYGAFBZDUCGYUWNRNDUSXFCAGRQSTCQBGCSHJDVJWNEBICNBXZ");
    msg.value = 0.463475461177;

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
    msg.setTimeStamp(0.592965846034);
    msg.setSource(4053U);
    msg.setSourceEntity(76U);
    msg.setDestination(7433U);
    msg.setDestinationEntity(29U);
    msg.action = 12U;
    msg.longain = 0.501385080734;
    msg.latgain = 0.736348552902;
    msg.bondthick = 625895938U;
    msg.leadgain = 0.423859070141;
    msg.deconflgain = 0.229337773946;

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
    msg.setTimeStamp(0.344201007754);
    msg.setSource(25912U);
    msg.setSourceEntity(131U);
    msg.setDestination(29121U);
    msg.setDestinationEntity(202U);
    msg.action = 230U;
    msg.longain = 0.522702077225;
    msg.latgain = 0.732648972722;
    msg.bondthick = 3074387887U;
    msg.leadgain = 0.850687945237;
    msg.deconflgain = 0.157180519607;

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
    msg.setTimeStamp(0.948537026965);
    msg.setSource(62468U);
    msg.setSourceEntity(106U);
    msg.setDestination(42136U);
    msg.setDestinationEntity(167U);
    msg.action = 174U;
    msg.longain = 0.028245476375;
    msg.latgain = 0.438837219414;
    msg.bondthick = 2401955122U;
    msg.leadgain = 0.280861801261;
    msg.deconflgain = 0.0189681538546;

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
    msg.setTimeStamp(0.267820982902);
    msg.setSource(65019U);
    msg.setSourceEntity(201U);
    msg.setDestination(37076U);
    msg.setDestinationEntity(192U);
    msg.err_mean = 0.0571334202739;
    msg.dist_min_abs = 0.851489537429;
    msg.dist_min_mean = 0.88121820197;

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
    msg.setTimeStamp(0.856702812487);
    msg.setSource(8625U);
    msg.setSourceEntity(109U);
    msg.setDestination(29484U);
    msg.setDestinationEntity(160U);
    msg.err_mean = 0.56191260209;
    msg.dist_min_abs = 0.815535781116;
    msg.dist_min_mean = 0.0979964299689;

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
    msg.setTimeStamp(0.699502995773);
    msg.setSource(5999U);
    msg.setSourceEntity(187U);
    msg.setDestination(4917U);
    msg.setDestinationEntity(107U);
    msg.err_mean = 0.931804634497;
    msg.dist_min_abs = 0.0113346037014;
    msg.dist_min_mean = 0.626690850837;

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
    msg.setTimeStamp(0.349900038683);
    msg.setSource(18226U);
    msg.setSourceEntity(24U);
    msg.setDestination(34714U);
    msg.setDestinationEntity(24U);
    msg.action = 72U;
    msg.lon_gain = 0.382135927868;
    msg.lat_gain = 0.15778778291;
    msg.bond_thick = 0.32168029822;
    msg.lead_gain = 0.438343554318;
    msg.deconfl_gain = 0.492105228216;
    msg.accel_switch_gain = 0.164325256379;
    msg.safe_dist = 0.986046455611;
    msg.deconflict_offset = 0.909021604784;
    msg.accel_safe_margin = 0.00981742405958;
    msg.accel_lim_x = 0.931443727753;

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
    msg.setTimeStamp(0.328204439211);
    msg.setSource(11379U);
    msg.setSourceEntity(83U);
    msg.setDestination(512U);
    msg.setDestinationEntity(152U);
    msg.action = 250U;
    msg.lon_gain = 0.399431653721;
    msg.lat_gain = 0.728154858653;
    msg.bond_thick = 0.196528201593;
    msg.lead_gain = 0.3139375802;
    msg.deconfl_gain = 0.788222826642;
    msg.accel_switch_gain = 0.0548920146438;
    msg.safe_dist = 0.42333314669;
    msg.deconflict_offset = 0.786976764145;
    msg.accel_safe_margin = 0.350698019393;
    msg.accel_lim_x = 0.0215227318797;

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
    msg.setTimeStamp(0.198464817051);
    msg.setSource(17077U);
    msg.setSourceEntity(132U);
    msg.setDestination(27957U);
    msg.setDestinationEntity(105U);
    msg.action = 162U;
    msg.lon_gain = 0.590976051854;
    msg.lat_gain = 0.896916590505;
    msg.bond_thick = 0.118983473641;
    msg.lead_gain = 0.782542961614;
    msg.deconfl_gain = 0.327729898591;
    msg.accel_switch_gain = 0.938015044342;
    msg.safe_dist = 0.879463981098;
    msg.deconflict_offset = 0.425028078191;
    msg.accel_safe_margin = 0.472793469344;
    msg.accel_lim_x = 0.349192548676;

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
    msg.setTimeStamp(0.741111213357);
    msg.setSource(57236U);
    msg.setSourceEntity(131U);
    msg.setDestination(44054U);
    msg.setDestinationEntity(46U);
    msg.type = 144U;
    msg.op = 0U;
    msg.err_mean = 0.52922555072;
    msg.dist_min_abs = 0.745606810244;
    msg.dist_min_mean = 0.0456950913511;
    msg.roll_rate_mean = 0.821788517591;
    msg.time = 0.255472356928;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 207U;
    tmp_msg_0.lon_gain = 0.586627705351;
    tmp_msg_0.lat_gain = 0.039536401407;
    tmp_msg_0.bond_thick = 0.249223978572;
    tmp_msg_0.lead_gain = 0.927470544077;
    tmp_msg_0.deconfl_gain = 0.344702521148;
    tmp_msg_0.accel_switch_gain = 0.649365533565;
    tmp_msg_0.safe_dist = 0.104460335125;
    tmp_msg_0.deconflict_offset = 0.943882664963;
    tmp_msg_0.accel_safe_margin = 0.229109390414;
    tmp_msg_0.accel_lim_x = 0.235897619062;
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
    msg.setTimeStamp(0.112990000461);
    msg.setSource(7232U);
    msg.setSourceEntity(76U);
    msg.setDestination(16805U);
    msg.setDestinationEntity(99U);
    msg.type = 247U;
    msg.op = 209U;
    msg.err_mean = 0.235144961794;
    msg.dist_min_abs = 0.224080791942;
    msg.dist_min_mean = 0.888352413157;
    msg.roll_rate_mean = 0.00465671698806;
    msg.time = 0.93075528431;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 84U;
    tmp_msg_0.lon_gain = 0.84794443841;
    tmp_msg_0.lat_gain = 0.871857764343;
    tmp_msg_0.bond_thick = 0.564437003174;
    tmp_msg_0.lead_gain = 0.143007375131;
    tmp_msg_0.deconfl_gain = 0.600323248793;
    tmp_msg_0.accel_switch_gain = 0.177713231788;
    tmp_msg_0.safe_dist = 0.308073611608;
    tmp_msg_0.deconflict_offset = 0.311156217774;
    tmp_msg_0.accel_safe_margin = 0.344266779363;
    tmp_msg_0.accel_lim_x = 0.398791795607;
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
    msg.setTimeStamp(0.717733349217);
    msg.setSource(39281U);
    msg.setSourceEntity(224U);
    msg.setDestination(21428U);
    msg.setDestinationEntity(251U);
    msg.type = 131U;
    msg.op = 58U;
    msg.err_mean = 0.303546522126;
    msg.dist_min_abs = 0.29735055458;
    msg.dist_min_mean = 0.570033510785;
    msg.roll_rate_mean = 0.693166342224;
    msg.time = 0.921257924858;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 68U;
    tmp_msg_0.lon_gain = 0.36411728927;
    tmp_msg_0.lat_gain = 0.893287847369;
    tmp_msg_0.bond_thick = 0.90428058221;
    tmp_msg_0.lead_gain = 0.785245486101;
    tmp_msg_0.deconfl_gain = 0.852314962715;
    tmp_msg_0.accel_switch_gain = 0.311894215019;
    tmp_msg_0.safe_dist = 0.890065664396;
    tmp_msg_0.deconflict_offset = 0.639638831772;
    tmp_msg_0.accel_safe_margin = 0.9254794374;
    tmp_msg_0.accel_lim_x = 0.285083097938;
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
    msg.setTimeStamp(0.702477681267);
    msg.setSource(14593U);
    msg.setSourceEntity(191U);
    msg.setDestination(20600U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.605606351854;
    msg.lon = 0.790913388822;
    msg.eta = 585955259U;
    msg.duration = 20919U;

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
    msg.setTimeStamp(0.123226774649);
    msg.setSource(65265U);
    msg.setSourceEntity(120U);
    msg.setDestination(36987U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.00371529811512;
    msg.lon = 0.14076248041;
    msg.eta = 2960237989U;
    msg.duration = 51072U;

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
    msg.setTimeStamp(0.44875370497);
    msg.setSource(39478U);
    msg.setSourceEntity(199U);
    msg.setDestination(59648U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.996248205647;
    msg.lon = 0.834383818495;
    msg.eta = 3060523293U;
    msg.duration = 12309U;

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
    msg.setTimeStamp(0.0380172188185);
    msg.setSource(37867U);
    msg.setSourceEntity(3U);
    msg.setDestination(16721U);
    msg.setDestinationEntity(75U);
    msg.plan_id = 58180U;

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
    msg.setTimeStamp(0.0895465416167);
    msg.setSource(24674U);
    msg.setSourceEntity(150U);
    msg.setDestination(17399U);
    msg.setDestinationEntity(191U);
    msg.plan_id = 61925U;

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
    msg.setTimeStamp(0.733938884072);
    msg.setSource(10713U);
    msg.setSourceEntity(239U);
    msg.setDestination(29151U);
    msg.setDestinationEntity(183U);
    msg.plan_id = 4192U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.104899623732;
    tmp_msg_0.lon = 0.998151193069;
    tmp_msg_0.eta = 104209596U;
    tmp_msg_0.duration = 17975U;
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
    msg.setTimeStamp(0.0288038660737);
    msg.setSource(44362U);
    msg.setSourceEntity(145U);
    msg.setDestination(61960U);
    msg.setDestinationEntity(121U);
    msg.type = 212U;
    msg.command = 137U;
    msg.settings.assign("RSLAUDKUHFULEKVEPXUVPFIESHARRKBBRQJYDOXYWSQEGZFYEHAGNNTZVQXQYFWRRKMBIWJCAPCSQYDVFHVHSKCSMDDMNDKHDVNGXWMZZLUYRXQOUNIGYXPSFNOGBPZWBHJIQQUXLVIOUNLSJZHCPMFENLPRMWGERCDTWVU");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 37207U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.626677883726;
    tmp_tmp_msg_0_0.lon = 0.610772723376;
    tmp_tmp_msg_0_0.eta = 805169494U;
    tmp_tmp_msg_0_0.duration = 11519U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XKNYLASEWBZRGGYBNZCXNWTRUWJPECHEMOVOKXBXRSWQDMJADFEYZHJKYTCWPSAZ");

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
    msg.setTimeStamp(0.873267889473);
    msg.setSource(33444U);
    msg.setSourceEntity(203U);
    msg.setDestination(11553U);
    msg.setDestinationEntity(131U);
    msg.type = 23U;
    msg.command = 18U;
    msg.settings.assign("WLTDOABAAUQUGVBNTSRNIFURKXMJKDUSEIFQMPDFYZKQQHRVTFFBZWLXSXTJGGTUSOVRECCXZFEZYSHNOIKQRWAVLYXPYYQBQTYRMVNOBRGMJYQKZMDBBSPYNLPBJKPTGEUEFLCVNHXMHNGHZWZLAJHAIPWPUSYIUXHDLPWEACO");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 29118U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.912023932226;
    tmp_tmp_msg_0_0.lon = 0.962363240372;
    tmp_tmp_msg_0_0.eta = 1505935779U;
    tmp_tmp_msg_0_0.duration = 30158U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FPFFTMTPCOHSWTESRLJKWGEKLWSFZADIMNWAOABRYNISUDCFCOAEOETQQFJVEFDSJIHIILWPRDKRUYXTMMXRORGLNDQVYDUTSQUUXSZCIGNQCECBERPZNYNQHVNKUMXHMSIYAYAVUAAEJKVAEZXCXTUUNBLBIOWYGQPRSVNPTTFZEGPTAKCDISQXJDKGZLHFJWLDMBXVNOBGBHJQMPCMYVHBZWGVLUHYJKCQBIWGL");

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
    msg.setTimeStamp(0.359007302632);
    msg.setSource(44508U);
    msg.setSourceEntity(136U);
    msg.setDestination(26902U);
    msg.setDestinationEntity(207U);
    msg.type = 209U;
    msg.command = 8U;
    msg.settings.assign("LDESMGOSAXMXNIOAEPQLDLUQJFRYCYWRWTFBJELJNHUUQTUHKBTMNRHOD");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 11059U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JOSFHGFZZUQMEKPKXYURASDLNDISBNGLMGHEHEMLAPPWVKAAUAAPSYZIOASRKWCOVLKRFNHZISQVGWBIQWABSKBMTPWQHYRZBYBJPEJYJKURMRGQVIFIERLWZQHOYAOGCWXFGECLTENFUEMYZNFGPZTWNODVBPXXVHXTZXHRXJUFXLJGQWTTIFHYRJTLKUGOUCUTEXTSDBAJDDNMCVDCLQPNUMCXNYSCIOCZOIPMQISCKDVDOHQVLMVYKDER");

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
    msg.setTimeStamp(0.0460173841784);
    msg.setSource(50233U);
    msg.setSourceEntity(236U);
    msg.setDestination(29311U);
    msg.setDestinationEntity(64U);
    msg.state = 141U;
    msg.plan_id = 26150U;
    msg.wpt_id = 40U;
    msg.settings_chk = 11943U;

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
    msg.setTimeStamp(0.787605288483);
    msg.setSource(19283U);
    msg.setSourceEntity(166U);
    msg.setDestination(1813U);
    msg.setDestinationEntity(212U);
    msg.state = 245U;
    msg.plan_id = 11062U;
    msg.wpt_id = 171U;
    msg.settings_chk = 36083U;

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
    msg.setTimeStamp(0.198019414067);
    msg.setSource(6652U);
    msg.setSourceEntity(164U);
    msg.setDestination(55156U);
    msg.setDestinationEntity(117U);
    msg.state = 251U;
    msg.plan_id = 30130U;
    msg.wpt_id = 98U;
    msg.settings_chk = 54059U;

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
    msg.setTimeStamp(0.422144699541);
    msg.setSource(41397U);
    msg.setSourceEntity(32U);
    msg.setDestination(51041U);
    msg.setDestinationEntity(72U);
    msg.uid = 144U;
    msg.frag_number = 63U;
    msg.num_frags = 39U;
    const char tmp_msg_0[] = {78, 111, -27, -24, -38, 2, -4, -25, 36, 53, 15, 22, -114, 100, -52, 122, -42, -62, 25, -56, 72, -89, 124, 103, 25, 44, -122, -20, -73, -58, -69, 22, -121, -76, 15, 38, 124, -97, 49};
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
    msg.setTimeStamp(0.540249089231);
    msg.setSource(46083U);
    msg.setSourceEntity(75U);
    msg.setDestination(46948U);
    msg.setDestinationEntity(80U);
    msg.uid = 8U;
    msg.frag_number = 59U;
    msg.num_frags = 149U;
    const char tmp_msg_0[] = {119, -100, -127, 84, 62, 64, -5, -97, 92, -72, -125, 112, -24, -65, -54, -119, 9, 65, -49, 120, -94, 16, 10, 114, 54, 125, -42, -17, -104, -107, 116, -24, 123, 37, -105, 72, 80, -98, -114, 3, 106, 123, -84, 36, -98, -75, -79, -87, 126, 123, 114, 48, -108, -25, -33, -86, 91, -52, -41, 66, 46, 1, 32, -85, 77, 70, 21, -90, -7, 11, -99, 86, 29, -27, -57, -99, -112, -100, 120, 114, 21, 86, -53, -107, 75, -54, -50, -81, -128, 68, 113, -30, 73, 33, 73, 11, -20, 86, -28, 37, 94, 27, -48, -112, -123, -86, 46, -9, 12, 27, 14, -83, -15, -105, 112, -56, 84, 41, -87, -36, 49, -71, -36, -110, 1, 3, 74, -43, 9, 123, -70, 69, -62, -122, -87, 102, 66, 95, -87};
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
    msg.setTimeStamp(0.350887870249);
    msg.setSource(26488U);
    msg.setSourceEntity(224U);
    msg.setDestination(6822U);
    msg.setDestinationEntity(199U);
    msg.uid = 132U;
    msg.frag_number = 190U;
    msg.num_frags = 21U;
    const char tmp_msg_0[] = {98, 107, 8, -119, -23, 54, 57, -41, 102, 55, 60, -22, 24, 15, -69, 1, 49, 68, -18, -101, -55, -111, 51, -54, -88, 5, -68, -15, -68, -18, -128, 31, 61, -92, -59, 81, -9, 2, 123, 4, 111, 100, -59, -25, 30, 68, 63, 8, 70, -107, 67, -53, -88, -104, -57, -60, -85, 90, 33, 19, 43, 21, 109, 69, 29, -34, 10, 53, -35, 46, -46, 68, 112, -54, 123, -63, 1, 7, 40, -92, -32, 110, -96};
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
    msg.setTimeStamp(0.756930112542);
    msg.setSource(46882U);
    msg.setSourceEntity(161U);
    msg.setDestination(12809U);
    msg.setDestinationEntity(105U);
    msg.content_type.assign("UBQFHVCBXWEBJFXDDXNOFMASFTMDMAGDWVZXYPSZIETVJLAZNUGEIWMPWSUOIOCYNYGXGYVEQIANBAEIPBKCRCJIEBUDOJOKLYUZJZRZFSTHYHGFJOHOTLTXHQCAPQBRNKVTPPSNMLMZWZEHMXCHWMFPCXLJGRONZKUCTBWEYXUMFLSWYRRQNTILSCVFDGQP");
    const char tmp_msg_0[] = {-88, 124, 90, -41, 113, -104, 111, 0, -38, 7, 15, 72, 27, -83, -6, 119, 101, -58, -103, 99, -53, 126, -41, -55, 34, -27, -25, 117, -11, -3, 87, -13, 96, -43, -69, 24, -96, -57, -1, 60, -38, 89, -8, 38, -47, 8, 100, 0, 22, 81, -117, 101, -3, 54, -37, 97, -24, 39, 93, -98, 26, -14, -36, -30, 9, 40, -68, 126, 98, -104, -29, 59, -3, 8, -46, -78, 105, -96, -63, 103, -44, 43, 69, -72, 65, -119, 54, -112, -92, -8, 95, -44, 87, -97, 105, 121, 72, 59, 72, 44, -14, -50, 58, -26, 88, -95, 123, 45};
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
    msg.setTimeStamp(0.0303088588785);
    msg.setSource(62623U);
    msg.setSourceEntity(153U);
    msg.setDestination(45697U);
    msg.setDestinationEntity(151U);
    msg.content_type.assign("QCFHFOTKMZUOQAPLJHEPWDNHBLSVKQURJOVXQRELCXKLDFEPTIICXMYDPIEROQRSBXMSGTWWKZSJCGYFQKFKSHORMHZHJWRCKYDXGPDHZPAKKYCAEJWWLDEZIMGFTTSWZNVFUAGHNNDIUHONNGTDOGMPTBYIIJAFTUJXBRAYIWIXQBAL");
    const char tmp_msg_0[] = {75, 67, 18, 37, -109, 108, -90, 84, 45, 73, -4, -52, 7, -109, 24, 71, -73, 55, 67, 100, -119, -34, 7, 89, -112, -113, -16, 83, 91, 103, -98, 67, 19, -36, 108, -2, -99, 107, 86, -31, -73, 68, 54, 123, 87, 78, -95, 0, -32, 107, 84, -68, 20, -4, -90, 93, 32, 101, -101, 120, -120, 104, 92, 27, 32, 84, -28, -12, -113, 109, 110, 24, 71, -96, 58, -43, 69, 23, 112, -49, 109, 15, 116, 72, -100, 11, 90, -122, -88, 46, 12, -16, -66, -30, 4, -28, 96, -111, -77, 109, -65, -24, -42, 123, 14, 84, 37, 61, -57, 91, 95, -48, -46, 29, 125, 102, 102, -24, -99, 65, 11, -8, -35, -34, -112, 13, -76, 76, -66, -113, -118, -84, 50, 35, 103, 4, -25, -58, 65, -94, -119, -83, 88, -123, 20, -122, -27, 45, -5, 111, 126, 38, -73, -65, 51, -52, -60, 68, 124, 87, -28, -91, -22, -30, 114, 85, -53, -49, -75, 104, 119, 45, 45, 56, -128, -65, -32, 117, -99, -124, 74, -102, -59, -47, -14, 101, -98, 42, -84, -42, 79, 95, -35, 51, 24, 100, 95, -118, 123, 77, 10, 17, 109, -64, -75, 42, 32, 41, 48, 6};
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
    msg.setTimeStamp(0.558511795234);
    msg.setSource(20097U);
    msg.setSourceEntity(63U);
    msg.setDestination(64859U);
    msg.setDestinationEntity(39U);
    msg.content_type.assign("XPKCSEQXPHJJLHBJBNTDUDYGAAWGPFCVIWNCYALTMUELSQCVOOKH");
    const char tmp_msg_0[] = {-7, 5, -17, -104, -100, 0, -107, 0, 78, 91, -10, 84, -41, -6, 28, -11, 114, 84, -1, 77, -10, 101, 79, 51, 110, -12, -52, 46, 81, 25, -59, 82, 63, -102, -55, 22, -69, 93, -4, -74, 28, 66, -15, -94, 50, -46, -44, 94, 46, -13, 115, 114, 17, 119, 65, 118, 36, -51, -5, -4, 91, -27, 8, 16, -4, -56, -34, 2, -93, 99, -123, 1, 80, -109, -82, -73, 116, -100, 44, -44, 17, -25, -51, 81, -16, 119, -37, -88, -35, -90, 94, -8, 94, 79, 39, -17, -119, -100, 94, -15, 124, 114, -19, 115, -19, 103, -56, -107, 76, 33, -44, 61, 47, -35, -43, -101, 103, -61, 108, 122, -121, -80, -23, -20, -12, -108, -51, -76, 113, 81, 120, 31, 102, -96, -23, -82, -48, 1, -78, 119, 98, -49, 7, -90, 101, 108, -58, 98, 26, 63, -91, -118, -118, 107, 111, -109, -44};
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
    msg.setTimeStamp(0.756364807495);
    msg.setSource(61967U);
    msg.setSourceEntity(196U);
    msg.setDestination(21185U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.291287477699);
    msg.setSource(31653U);
    msg.setSourceEntity(155U);
    msg.setDestination(17351U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.19378566217);
    msg.setSource(32353U);
    msg.setSourceEntity(212U);
    msg.setDestination(54753U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.290220751184);
    msg.setSource(549U);
    msg.setSourceEntity(12U);
    msg.setDestination(3455U);
    msg.setDestinationEntity(34U);
    msg.target = 60743U;
    msg.bearing = 0.549799577272;
    msg.elevation = 0.496352349904;

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
    msg.setTimeStamp(0.318926712816);
    msg.setSource(62858U);
    msg.setSourceEntity(232U);
    msg.setDestination(53425U);
    msg.setDestinationEntity(131U);
    msg.target = 43149U;
    msg.bearing = 0.847138897999;
    msg.elevation = 0.909939375258;

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
    msg.setTimeStamp(0.908180779762);
    msg.setSource(15147U);
    msg.setSourceEntity(0U);
    msg.setDestination(49520U);
    msg.setDestinationEntity(203U);
    msg.target = 17118U;
    msg.bearing = 0.793245854636;
    msg.elevation = 0.226829846441;

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
    msg.setTimeStamp(0.821720503521);
    msg.setSource(26473U);
    msg.setSourceEntity(19U);
    msg.setDestination(60112U);
    msg.setDestinationEntity(107U);
    msg.target = 55016U;
    msg.x = 0.754644858639;
    msg.y = 0.875602247059;
    msg.z = 0.679091728638;

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
    msg.setTimeStamp(0.275077260446);
    msg.setSource(63814U);
    msg.setSourceEntity(128U);
    msg.setDestination(52577U);
    msg.setDestinationEntity(183U);
    msg.target = 1113U;
    msg.x = 0.313655409242;
    msg.y = 0.682115762071;
    msg.z = 0.706535970506;

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
    msg.setTimeStamp(0.119722826757);
    msg.setSource(52092U);
    msg.setSourceEntity(145U);
    msg.setDestination(4524U);
    msg.setDestinationEntity(253U);
    msg.target = 176U;
    msg.x = 0.226331902878;
    msg.y = 0.924922720042;
    msg.z = 0.154248506108;

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
    msg.setTimeStamp(0.382538819726);
    msg.setSource(29716U);
    msg.setSourceEntity(136U);
    msg.setDestination(15858U);
    msg.setDestinationEntity(49U);
    msg.target = 25283U;
    msg.lat = 0.543620806136;
    msg.lon = 0.358147491391;
    msg.z_units = 14U;
    msg.z = 0.618398153487;

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
    msg.setTimeStamp(0.950317299459);
    msg.setSource(172U);
    msg.setSourceEntity(17U);
    msg.setDestination(43437U);
    msg.setDestinationEntity(50U);
    msg.target = 36436U;
    msg.lat = 0.903666390837;
    msg.lon = 0.591837458542;
    msg.z_units = 110U;
    msg.z = 0.139825069535;

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
    msg.setTimeStamp(0.0655349635012);
    msg.setSource(20216U);
    msg.setSourceEntity(179U);
    msg.setDestination(25613U);
    msg.setDestinationEntity(250U);
    msg.target = 64900U;
    msg.lat = 0.909537687003;
    msg.lon = 0.454656560919;
    msg.z_units = 133U;
    msg.z = 0.646339043912;

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
    msg.setTimeStamp(0.909496594418);
    msg.setSource(41890U);
    msg.setSourceEntity(118U);
    msg.setDestination(33586U);
    msg.setDestinationEntity(53U);
    msg.locale.assign("KSQVWKCGPJQWHIXEUFMUMCXHYSIPCFMSDMXFUTCFBXOWKNGBPQPDPPIBEBJLAVSGLDDTRYORGVASEZHFDVUHEZIJVZDJXTPLJRWNRPWETAVQGQUTTYKUCVNZKFRLKZYKEIOCNOMHJGYFIHLRCANGDGXFWDUTHIVMNOBJSTVRTBABMCLIEQLZZKCAYFYRMOAUBEYZAQLCQJIBWWJAEFYRUGDNUKLKXVWOGNXTZSMSDESHPQM");
    const char tmp_msg_0[] = {50, -89, -115, -92, -89, 76, -110, -109, 124, 47, -75, -11, 26, -23, 55, 9, -2, 31, -35, -87, -73, -71, -3, 15, -83, -19, 123, 59, -105, -40, 45, -1, -108, 6, 34, -106, -96, 16, 68, -123, 43, -65, -11, -98, 69, 67, -57, -80, -123, -115, 105, 92, 4, 53, 118, 31, 91, 112, 43, 69, -89, 122, -2, 88, 114, -6, 99, 87, -16, 73, -118, 8, 42, -20, -73, -59, 3, 80, -32, -51, 103, 0, -50, -79, 23, -38, -41, 40, 15, -75, 68, -52, 90, 99, 70, 125, 93, -90, 35, 52, 1, 42, -2, -67, 15, -59, -50, -9, 83, -55, -17, -25, 20, 77, 51, 105, 113, 61, 67, 80, -22, -107, 62, -45, -121, 87, 107, 78, 102};
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
    msg.setTimeStamp(0.617211930959);
    msg.setSource(15365U);
    msg.setSourceEntity(53U);
    msg.setDestination(6471U);
    msg.setDestinationEntity(138U);
    msg.locale.assign("JFVQRBVFDUELPVVSXWGINATGWULQCCDKYNTVSHRHREYARULSMMKDVJTVFEQRTTCAYXMLGNEQPHDHUSBXAKFIUEFWMGKWBHONPZKP");
    const char tmp_msg_0[] = {-22, -18, -128, 5, 4, 60, -88, -119, -81, 45, 15, -6, 9, 45, 113, 97, -107, -88, 0, -73, 118, -53, -106, 8, 51, 112, -100, 75, 13, -43, -64, -64, -96, 16, 9, -117, -23, -58, 117, 102, -118, 77, 94, 98, -44, -48, -56, 83, 28, 68, 7, -82, -106, -50, -45, -27, 103, 76, -76, 86, -44, -37, -90, 32, 93, 107, 52, 94, 47, -109, -120, 27, 6, 19, 66, -39, 110, -26, -4, 59, -112, -75, 89, -27, 108, 111, -30, -41, -93, 66, 63, 124, -116, 11, 16, -7, -35, -106, -90, -87, 32, 42, 115, 107, 72, -60, 17, 64, 86, -38, -52, -48, -71, -14, 98, 114, 77, -17, -42, -64, -90, -103, -106, 6, 80, 112, 62, -96, 27, -19, 78, -102, -100, -116, -27, -27, -124, -112, -98, -3};
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
    msg.setTimeStamp(0.762610064239);
    msg.setSource(44675U);
    msg.setSourceEntity(107U);
    msg.setDestination(45665U);
    msg.setDestinationEntity(248U);
    msg.locale.assign("XGLIUNFOBPSZCOBOCRKFWARDBUPGYNAHKWMVCLESSRFOSUNQSAUOIHFPYPVLXAIWCPPXWKOBEAKEMVGEL");
    const char tmp_msg_0[] = {110, -116, 0, 30, -119, 79, -29, -128, -2, 98, 5, 32, 8, -10, -53, 109, 79, 86, 45, -116, 92, -21, -71, 96, -91, 91, -128, 93, 78, 66, 74, 40, 79, 74, 113, -110, 72, -17, 67, -61, -14, 16, -1, 14, 40, 47, 121, 2, -121, 49, -90, 43, -76, 52, 58, -114, -114, 105, 126, 47, -37, 61, -8, 95, 57, -13, 68, 115, -71, 111, -92, -124, -99, 7, -49, 106, -60, -67, -83, -20, -46, -17, 112, 112, -83, 33, 116, 9, -67, -28, -122, 116, 107, -95, -4, -2, 56, 71, 37, -63, 16, 30, 94, -57, -125, -46, -105, -80, -31, -44, -128, -91, -26, -21, 93, -13, -121, 54, 32, -56, 18, -128, -79, -5, 107, 65, -120, -35, -10, -61, 101, -27, 88, -112, 29, -57, 50, -100, 119, 107, 43, 33, -88, 119, 50, -50, 83, -40, -55, 122, 120, 86, 69, 61, -40, -122, -31, 29, -26, 107, 114, 15, 110, 89, -69, 103, -67, -7, -125, -72, -79, 123, 54, -85, 46, -105, 118, -65, -126, 17, 29, -91, -33, 30, -89, 119, 121, 33, 52, 86, 34};
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
    msg.setTimeStamp(0.510712255147);
    msg.setSource(40511U);
    msg.setSourceEntity(59U);
    msg.setDestination(47602U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.655967030198);
    msg.setSource(23583U);
    msg.setSourceEntity(40U);
    msg.setDestination(8593U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.0628826869199);
    msg.setSource(14390U);
    msg.setSourceEntity(155U);
    msg.setDestination(52643U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.989284668724);
    msg.setSource(306U);
    msg.setSourceEntity(142U);
    msg.setDestination(60742U);
    msg.setDestinationEntity(139U);
    msg.camid = 81U;
    msg.x = 38831U;
    msg.y = 60700U;

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
    msg.setTimeStamp(0.904372957393);
    msg.setSource(14473U);
    msg.setSourceEntity(139U);
    msg.setDestination(11989U);
    msg.setDestinationEntity(177U);
    msg.camid = 64U;
    msg.x = 59478U;
    msg.y = 26037U;

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
    msg.setTimeStamp(0.297285167161);
    msg.setSource(64174U);
    msg.setSourceEntity(168U);
    msg.setDestination(50063U);
    msg.setDestinationEntity(37U);
    msg.camid = 29U;
    msg.x = 39295U;
    msg.y = 34967U;

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
    msg.setTimeStamp(0.142074039688);
    msg.setSource(48707U);
    msg.setSourceEntity(125U);
    msg.setDestination(30376U);
    msg.setDestinationEntity(221U);
    msg.camid = 56U;
    msg.x = 58133U;
    msg.y = 35174U;

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
    msg.setTimeStamp(0.822820187895);
    msg.setSource(44006U);
    msg.setSourceEntity(144U);
    msg.setDestination(19410U);
    msg.setDestinationEntity(177U);
    msg.camid = 23U;
    msg.x = 3413U;
    msg.y = 57857U;

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
    msg.setTimeStamp(0.670932588156);
    msg.setSource(29717U);
    msg.setSourceEntity(138U);
    msg.setDestination(37768U);
    msg.setDestinationEntity(181U);
    msg.camid = 40U;
    msg.x = 64398U;
    msg.y = 54058U;

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
    msg.setTimeStamp(0.907018943646);
    msg.setSource(44636U);
    msg.setSourceEntity(173U);
    msg.setDestination(38509U);
    msg.setDestinationEntity(15U);
    msg.tracking = 125U;
    msg.lat = 0.299279729207;
    msg.lon = 0.171517753907;
    msg.x = 0.983598477513;
    msg.y = 0.366745852985;
    msg.z = 0.511617212793;

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
    msg.setTimeStamp(0.924643646666);
    msg.setSource(26425U);
    msg.setSourceEntity(41U);
    msg.setDestination(27891U);
    msg.setDestinationEntity(59U);
    msg.tracking = 197U;
    msg.lat = 0.588022719269;
    msg.lon = 0.726439292057;
    msg.x = 0.358478246928;
    msg.y = 0.345790681002;
    msg.z = 0.971366233564;

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
    msg.setTimeStamp(0.0680754040553);
    msg.setSource(8796U);
    msg.setSourceEntity(110U);
    msg.setDestination(42364U);
    msg.setDestinationEntity(12U);
    msg.tracking = 36U;
    msg.lat = 0.199306897178;
    msg.lon = 0.079110959853;
    msg.x = 0.694412573089;
    msg.y = 0.217026400459;
    msg.z = 0.695793148106;

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
    msg.setTimeStamp(0.883896218133);
    msg.setSource(19325U);
    msg.setSourceEntity(33U);
    msg.setDestination(30956U);
    msg.setDestinationEntity(18U);
    msg.target.assign("AUBWIQJWDULPKSFNJGIYWUCCTINHECVMQLRRTYTZXTSOPBVUENQJVTGWCRXDJMSRSHFBKOBVZCBMLXITYGYRCSXYLDEHFKLMNPUIRVNLCXXMXGKVGDBHCCYAQZDTVRGMNOOERBFQVQFTMMRQADG");
    msg.lbearing = 0.409428389888;
    msg.lelevation = 0.270561571647;
    msg.bearing = 0.202573915741;
    msg.elevation = 0.167432534543;
    msg.phi = 0.597069802945;
    msg.theta = 0.437557305481;
    msg.psi = 0.78612121208;
    msg.accuracy = 0.696412180771;

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
    msg.setTimeStamp(0.685268981693);
    msg.setSource(27442U);
    msg.setSourceEntity(45U);
    msg.setDestination(36441U);
    msg.setDestinationEntity(130U);
    msg.target.assign("MYJBXYVJUFQSNJNLOZUDQEBSLINMZARYTSUPODGTCQBNFYVSBUTTARIPCCZQTFKGBPWQDCRP");
    msg.lbearing = 0.734021328766;
    msg.lelevation = 0.443047046555;
    msg.bearing = 0.369257892247;
    msg.elevation = 0.837932903913;
    msg.phi = 0.903091861447;
    msg.theta = 0.254631016274;
    msg.psi = 0.475519950164;
    msg.accuracy = 0.34952630897;

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
    msg.setTimeStamp(0.811254086685);
    msg.setSource(18227U);
    msg.setSourceEntity(154U);
    msg.setDestination(5710U);
    msg.setDestinationEntity(163U);
    msg.target.assign("MQFALWUVTJUOJCLLBELTNLPBKMDHTNTEQKCIPGDFWJRSXOGVSKHCGCLNMUXKXRGKTZOQPHRXSRDIAZYDYOGHCFHCZINISEXSQRHXBBXEKAQQHJJPWXVGZIORYBNOCDOBDDAPTNDULUSVWVTLJBGLIKIYUAASAFZHQPRAVBMJJGVFKF");
    msg.lbearing = 0.448179413174;
    msg.lelevation = 0.602852844786;
    msg.bearing = 0.241194540194;
    msg.elevation = 0.381272914635;
    msg.phi = 0.216543706046;
    msg.theta = 0.56291714168;
    msg.psi = 0.940026492835;
    msg.accuracy = 0.435486571485;

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
    msg.setTimeStamp(0.851589956161);
    msg.setSource(57080U);
    msg.setSourceEntity(41U);
    msg.setDestination(49878U);
    msg.setDestinationEntity(70U);
    msg.target.assign("OWFZNCSGZISHMJMESOPENQHUGUUVIGXUADJYFRYOQAJSHGOCXHRYMUMQPAMMTTOTTNXJLZDLXWZSKGKICHJHBRQLJBINFPSZDKCRGYTKVIAKEXZFLJNUJIRUWYFAKBFWXPVDVXYOKGQMRNUCWWWBGDYOZPLAQINWTNLMSEHVDCEF");
    msg.x = 0.632349626756;
    msg.y = 0.11374142816;
    msg.z = 0.862322210925;
    msg.n = 0.109109604536;
    msg.e = 0.210067884644;
    msg.d = 0.420592855268;
    msg.phi = 0.0361528294067;
    msg.theta = 0.566490939421;
    msg.psi = 0.881104228126;
    msg.accuracy = 0.401838975099;

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
    msg.setTimeStamp(0.316751737938);
    msg.setSource(6405U);
    msg.setSourceEntity(18U);
    msg.setDestination(252U);
    msg.setDestinationEntity(132U);
    msg.target.assign("RMESINKCJXZPDWYKQJKMDDRKAYIPVJOFGGBGEIEBINCGUDUMLTHBWVZELJXQOEVXCWCZHRWUSQZQCTFXTNLHXWQSBTZYENCXDJETMABPFLQAYTEVNKRYMXPYKFIBFQUWRMJMTXYOEPHLHJPSKSOMKPLXCAMZHSAFOTNOAU");
    msg.x = 0.217679332468;
    msg.y = 0.984990209479;
    msg.z = 0.881817503303;
    msg.n = 0.243310325417;
    msg.e = 0.320410847732;
    msg.d = 0.516448172632;
    msg.phi = 0.180526840809;
    msg.theta = 0.624225310177;
    msg.psi = 0.133344169607;
    msg.accuracy = 0.850109893617;

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
    msg.setTimeStamp(0.772193230623);
    msg.setSource(4089U);
    msg.setSourceEntity(160U);
    msg.setDestination(51904U);
    msg.setDestinationEntity(18U);
    msg.target.assign("WIZGWNIHCXBKGLOYODXIMRVKFDKCQCZJXJULBOGCZHMASWOKUVVQVFRBNOWXVZNXFZAFEYWGYTEMQQDQIUAGZLFMSALELZVKUISTUVIRWYLWNFKDAPDZYMTEBGXFJSTQHSIHVUJCIVHIBMAUTFRRUTLXGGNLMUNPHTZSDSIJPFVPCZKPPPEEMJJEJFNSYHGXNYCOROAPJNRRJCQ");
    msg.x = 0.48090222793;
    msg.y = 0.738527639145;
    msg.z = 0.997273815796;
    msg.n = 0.991686314576;
    msg.e = 0.906863003777;
    msg.d = 0.226347866981;
    msg.phi = 0.784868786986;
    msg.theta = 0.387224904317;
    msg.psi = 0.337760064275;
    msg.accuracy = 0.42960555653;

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
    msg.setTimeStamp(0.621620165613);
    msg.setSource(10451U);
    msg.setSourceEntity(75U);
    msg.setDestination(11436U);
    msg.setDestinationEntity(59U);
    msg.target.assign("RWUMKNDLNBHWJMKPLXZHQRSIHKFDJKCPCRDQGKRDEUVODHIOXTUZMHMSPHFADVFMTNNFBTOILLQNTHRAZ");
    msg.lat = 0.401161119032;
    msg.lon = 0.169257847692;
    msg.z_units = 177U;
    msg.z = 0.333200304903;
    msg.accuracy = 0.418762763158;

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
    msg.setTimeStamp(0.399785571372);
    msg.setSource(31279U);
    msg.setSourceEntity(143U);
    msg.setDestination(5452U);
    msg.setDestinationEntity(121U);
    msg.target.assign("HDYRBBIIDCSUTBNJXYWDZIDLTLHECWUVVKKDFYOABMQPBRJLVNFBSFCBKJNJWJGKYSBMVGPDCRLWZGLSCOAZUKQBZZQTRLMMKROVAQVBFYMRASGAQYXNEPDGAKNPAYPZDXALIGHXTXSJHNCPIJHYEOCRMIWVHZQPHFMRUUSVWSDPXKPGWEZJNECFU");
    msg.lat = 0.21225805922;
    msg.lon = 0.99012891412;
    msg.z_units = 243U;
    msg.z = 0.0255766912516;
    msg.accuracy = 0.124933906942;

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
    msg.setTimeStamp(0.157537725292);
    msg.setSource(9289U);
    msg.setSourceEntity(48U);
    msg.setDestination(52788U);
    msg.setDestinationEntity(178U);
    msg.target.assign("SNCRDZPWPOTJAUTFOTGLCDHCFQQNVXZRLAOXPRPVYIJSJQMUSCUSMWD");
    msg.lat = 0.678347517509;
    msg.lon = 0.0305447499644;
    msg.z_units = 90U;
    msg.z = 0.728875284373;
    msg.accuracy = 0.153826438548;

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
    msg.setTimeStamp(0.0913825435841);
    msg.setSource(62181U);
    msg.setSourceEntity(13U);
    msg.setDestination(25234U);
    msg.setDestinationEntity(177U);
    msg.name.assign("RWUOOWKQWZWQCEHTXZOTBCIODFMHFLTNYNICZKFZRNCVNPHLRLBSDURSNQTGBASVRTDBTJSRNVXAAYCKVOUFQYSNDSGMKWDSAXQCULJFGZIAANIMTUAMQXFNVHPTOKYUVLJEPLEJZEOGRSGLMCKXBAXZPYOHDZJAOUBYTFRDGOAYKJ");
    msg.lat = 0.793617286677;
    msg.lon = 0.725718696723;
    msg.z = 0.368389261818;
    msg.z_units = 72U;

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
    msg.setTimeStamp(0.50884705136);
    msg.setSource(63150U);
    msg.setSourceEntity(149U);
    msg.setDestination(3126U);
    msg.setDestinationEntity(234U);
    msg.name.assign("WBUAHXPFKUFZHUNNHCKQITXQEPKASLKTJYQZWOCQNDBYDMKXJFDYFKBJJCDKNLIQFIRRGTYPIPDCTVHSYRBEDLUBXODLTIJHRBEFVBOPDUYVEGCOFUVSS");
    msg.lat = 0.309356414432;
    msg.lon = 0.146418617793;
    msg.z = 0.155788010152;
    msg.z_units = 144U;

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
    msg.setTimeStamp(0.475076329127);
    msg.setSource(55210U);
    msg.setSourceEntity(30U);
    msg.setDestination(60420U);
    msg.setDestinationEntity(58U);
    msg.name.assign("GSBYUAISJTQHPUKYOWTBTMHQXWIECIWQJYXDJXAKMHSFNHZPPGEOREACDRENXHFCXFKXGQFGOMCRNZVDTOPFGBRVVKHWZMWSERLJHYADXLQKCJNNJBWCISRHBVBEDVETSUUMGVFJFTGZVQBXEPRJLDPZCZYSPUAG");
    msg.lat = 0.131811467686;
    msg.lon = 0.370677645875;
    msg.z = 0.334583298527;
    msg.z_units = 219U;

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
    msg.setTimeStamp(0.497891130722);
    msg.setSource(34281U);
    msg.setSourceEntity(114U);
    msg.setDestination(61590U);
    msg.setDestinationEntity(22U);
    msg.op = 62U;

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
    msg.setTimeStamp(0.630675438002);
    msg.setSource(23585U);
    msg.setSourceEntity(111U);
    msg.setDestination(53308U);
    msg.setDestinationEntity(19U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.910577634805);
    msg.setSource(33515U);
    msg.setSourceEntity(85U);
    msg.setDestination(3682U);
    msg.setDestinationEntity(160U);
    msg.op = 174U;

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
    msg.setTimeStamp(0.509118377385);
    msg.setSource(3214U);
    msg.setSourceEntity(153U);
    msg.setDestination(4809U);
    msg.setDestinationEntity(9U);
    msg.value = 0.155658894642;
    msg.type = 159U;

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
    msg.setTimeStamp(0.618753125435);
    msg.setSource(38655U);
    msg.setSourceEntity(249U);
    msg.setDestination(13447U);
    msg.setDestinationEntity(76U);
    msg.value = 0.502342252036;
    msg.type = 236U;

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
    msg.setTimeStamp(0.863515385235);
    msg.setSource(7422U);
    msg.setSourceEntity(104U);
    msg.setDestination(31111U);
    msg.setDestinationEntity(138U);
    msg.value = 0.737537279167;
    msg.type = 3U;

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
    msg.setTimeStamp(0.647824708768);
    msg.setSource(61442U);
    msg.setSourceEntity(89U);
    msg.setDestination(48863U);
    msg.setDestinationEntity(123U);
    msg.value = 0.659118014966;

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
    msg.setTimeStamp(0.330348013925);
    msg.setSource(18775U);
    msg.setSourceEntity(163U);
    msg.setDestination(9675U);
    msg.setDestinationEntity(72U);
    msg.value = 0.832549671852;

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
    msg.setTimeStamp(0.807990667598);
    msg.setSource(19083U);
    msg.setSourceEntity(223U);
    msg.setDestination(15347U);
    msg.setDestinationEntity(231U);
    msg.value = 0.272042822403;

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
    msg.setTimeStamp(0.815476730314);
    msg.setSource(55845U);
    msg.setSourceEntity(136U);
    msg.setDestination(4577U);
    msg.setDestinationEntity(146U);
    msg.timestamp_last_service = 0.954124194501;
    msg.time_next_service = 0.407768644854;
    msg.time_motor_next_service = 0.223683546217;
    msg.time_idle_ground = 0.315291295264;
    msg.time_idle_air = 0.685260603828;
    msg.time_idle_water = 0.391137155616;
    msg.time_idle_underwater = 0.0240247905995;
    msg.time_idle_unknown = 0.24450434875;
    msg.time_motor_ground = 0.921532291574;
    msg.time_motor_air = 0.476319222847;
    msg.time_motor_water = 0.22869078235;
    msg.time_motor_underwater = 0.311351848574;
    msg.time_motor_unknown = 0.42051324123;
    msg.rpm_min = -30368;
    msg.rpm_max = 22176;
    msg.depth_max = 0.251950142356;

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
    msg.setTimeStamp(0.306056762251);
    msg.setSource(28579U);
    msg.setSourceEntity(112U);
    msg.setDestination(4817U);
    msg.setDestinationEntity(174U);
    msg.timestamp_last_service = 0.00101734768537;
    msg.time_next_service = 0.245047015157;
    msg.time_motor_next_service = 0.629556495733;
    msg.time_idle_ground = 0.851232862087;
    msg.time_idle_air = 0.924339402338;
    msg.time_idle_water = 0.663829793581;
    msg.time_idle_underwater = 0.20314271942;
    msg.time_idle_unknown = 0.3716846065;
    msg.time_motor_ground = 0.96337826586;
    msg.time_motor_air = 0.00877937933665;
    msg.time_motor_water = 0.164274353671;
    msg.time_motor_underwater = 0.424820837631;
    msg.time_motor_unknown = 0.844638191409;
    msg.rpm_min = 2384;
    msg.rpm_max = -25070;
    msg.depth_max = 0.966346272019;

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
    msg.setTimeStamp(0.52808157447);
    msg.setSource(6612U);
    msg.setSourceEntity(114U);
    msg.setDestination(14948U);
    msg.setDestinationEntity(19U);
    msg.timestamp_last_service = 0.736355900237;
    msg.time_next_service = 0.199295201645;
    msg.time_motor_next_service = 0.732525817724;
    msg.time_idle_ground = 0.850029399977;
    msg.time_idle_air = 0.890675304767;
    msg.time_idle_water = 0.228995675363;
    msg.time_idle_underwater = 0.485214073046;
    msg.time_idle_unknown = 0.710561804438;
    msg.time_motor_ground = 0.541225971896;
    msg.time_motor_air = 0.199695492269;
    msg.time_motor_water = 0.635764001588;
    msg.time_motor_underwater = 0.172520642056;
    msg.time_motor_unknown = 0.383304993456;
    msg.rpm_min = -10372;
    msg.rpm_max = 28619;
    msg.depth_max = 0.0084916823449;

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
    msg.setTimeStamp(0.445852641481);
    msg.setSource(25922U);
    msg.setSourceEntity(40U);
    msg.setDestination(8470U);
    msg.setDestinationEntity(190U);
    msg.severity = 58U;
    msg.text.assign("KZHGYVMHEWAGWASUPLKWFGPFTMSGCBPCLUQRSVIYKHLNRTDATEYDPUMBYTNFJDAUCSZRGCDZAXMWPPRHRTSEZAPXRVYFEETZLRTADGJQSZVADSXMKZINJOXROIDMFBCLHEOUNRBFOWJQBCVMDDLEXYIIQIGWCXKBKNUXMNJORQFVDGVHUKUIZLKEMJSOELJXHOIWMUYVQYKQTPIXNNSCZQOGCYQYLBPHHQJVB");

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
    msg.setTimeStamp(0.822580563192);
    msg.setSource(31684U);
    msg.setSourceEntity(145U);
    msg.setDestination(46038U);
    msg.setDestinationEntity(11U);
    msg.severity = 61U;
    msg.text.assign("XUXKQJJVDTOFGN");

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
    msg.setTimeStamp(0.322148745908);
    msg.setSource(52298U);
    msg.setSourceEntity(120U);
    msg.setDestination(18838U);
    msg.setDestinationEntity(172U);
    msg.severity = 34U;
    msg.text.assign("HFOPLUIFCZUPIHRUCEQMZOZUSMXGHOIXDADXHRMBKMWJZI");

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
    msg.setTimeStamp(0.851175947828);
    msg.setSource(46410U);
    msg.setSourceEntity(26U);
    msg.setDestination(50132U);
    msg.setDestinationEntity(69U);
    msg.channel = -95;
    msg.value = -1217693459;
    msg.gain = 109U;

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
    msg.setTimeStamp(0.615671207748);
    msg.setSource(54165U);
    msg.setSourceEntity(173U);
    msg.setDestination(855U);
    msg.setDestinationEntity(178U);
    msg.channel = 123;
    msg.value = -200316093;
    msg.gain = 158U;

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
    msg.setTimeStamp(0.907639898673);
    msg.setSource(27201U);
    msg.setSourceEntity(220U);
    msg.setDestination(36540U);
    msg.setDestinationEntity(171U);
    msg.channel = -116;
    msg.value = 424537239;
    msg.gain = 97U;

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
    msg.setTimeStamp(0.808721185502);
    msg.setSource(63618U);
    msg.setSourceEntity(221U);
    msg.setDestination(52572U);
    msg.setDestinationEntity(248U);
    msg.ch01 = 0.369193423656;
    msg.ch02 = 0.314690864239;
    msg.ch03 = 0.436566913667;
    msg.ch04 = 0.420783289711;
    msg.ch05 = 0.150779390975;
    msg.ch06 = 0.854707531399;
    msg.ch07 = 0.270337565584;
    msg.ch08 = 0.0535355111668;
    msg.ch09 = 0.931752863059;
    msg.ch10 = 0.887830286783;
    msg.ch11 = 0.706789607554;
    msg.ch12 = 0.858050046191;
    msg.ch13 = 0.368135335876;
    msg.ch14 = 0.592361174196;
    msg.ch15 = 0.297430684283;
    msg.ch16 = 0.801181183657;

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
    msg.setTimeStamp(0.975454549043);
    msg.setSource(35088U);
    msg.setSourceEntity(0U);
    msg.setDestination(32041U);
    msg.setDestinationEntity(65U);
    msg.ch01 = 0.0364987212529;
    msg.ch02 = 0.120118668322;
    msg.ch03 = 0.6323068285;
    msg.ch04 = 0.0192621864732;
    msg.ch05 = 0.7475024689;
    msg.ch06 = 0.0326802037103;
    msg.ch07 = 0.77759458532;
    msg.ch08 = 0.776648581773;
    msg.ch09 = 0.437050920494;
    msg.ch10 = 0.0295728485073;
    msg.ch11 = 0.913631255485;
    msg.ch12 = 0.297711860287;
    msg.ch13 = 0.263093759088;
    msg.ch14 = 0.0951013373112;
    msg.ch15 = 0.500269155202;
    msg.ch16 = 0.41608031511;

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
    msg.setTimeStamp(0.510326889077);
    msg.setSource(36708U);
    msg.setSourceEntity(85U);
    msg.setDestination(64486U);
    msg.setDestinationEntity(213U);
    msg.ch01 = 0.850637280164;
    msg.ch02 = 0.764524940329;
    msg.ch03 = 0.358311945846;
    msg.ch04 = 0.0646848384115;
    msg.ch05 = 0.473122434624;
    msg.ch06 = 0.499457477778;
    msg.ch07 = 0.903210322485;
    msg.ch08 = 0.156500405206;
    msg.ch09 = 0.4737573428;
    msg.ch10 = 0.85812579163;
    msg.ch11 = 0.156574748512;
    msg.ch12 = 0.619554729737;
    msg.ch13 = 0.521413332578;
    msg.ch14 = 0.356791671325;
    msg.ch15 = 0.551023133867;
    msg.ch16 = 0.295094511047;

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
    msg.setTimeStamp(0.252749440159);
    msg.setSource(26830U);
    msg.setSourceEntity(86U);
    msg.setDestination(14213U);
    msg.setDestinationEntity(15U);
    msg.time = 0.0932329643206;
    msg.ang = 0.26257860171;

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
    msg.setTimeStamp(0.199663157277);
    msg.setSource(17334U);
    msg.setSourceEntity(103U);
    msg.setDestination(46618U);
    msg.setDestinationEntity(146U);
    msg.time = 0.334267321408;
    msg.ang = 0.41321445058;

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
    msg.setTimeStamp(0.453770947558);
    msg.setSource(22662U);
    msg.setSourceEntity(116U);
    msg.setDestination(30092U);
    msg.setDestinationEntity(201U);
    msg.time = 0.929202338838;
    msg.ang = 0.861599189068;

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
    msg.setTimeStamp(0.456049402616);
    msg.setSource(45753U);
    msg.setSourceEntity(149U);
    msg.setDestination(30503U);
    msg.setDestinationEntity(40U);
    msg.value = 0.102678016349;

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
    msg.setTimeStamp(0.217157058495);
    msg.setSource(29519U);
    msg.setSourceEntity(105U);
    msg.setDestination(30230U);
    msg.setDestinationEntity(162U);
    msg.value = 0.617899668573;

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
    msg.setTimeStamp(0.767438157427);
    msg.setSource(40988U);
    msg.setSourceEntity(101U);
    msg.setDestination(31233U);
    msg.setDestinationEntity(68U);
    msg.value = 0.99330141125;

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
    msg.setTimeStamp(0.0215033339391);
    msg.setSource(26465U);
    msg.setSourceEntity(16U);
    msg.setDestination(32454U);
    msg.setDestinationEntity(19U);
    msg.value = 0.396521705384;

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
    msg.setTimeStamp(0.691055817437);
    msg.setSource(41748U);
    msg.setSourceEntity(138U);
    msg.setDestination(32983U);
    msg.setDestinationEntity(181U);
    msg.value = 0.106264992385;

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
    msg.setTimeStamp(0.76092488787);
    msg.setSource(38062U);
    msg.setSourceEntity(161U);
    msg.setDestination(2405U);
    msg.setDestinationEntity(107U);
    msg.value = 0.767646959412;

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
    msg.setTimeStamp(0.853535955186);
    msg.setSource(19321U);
    msg.setSourceEntity(221U);
    msg.setDestination(26077U);
    msg.setDestinationEntity(145U);
    msg.value = 0.368280053538;

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
    msg.setTimeStamp(0.545219804985);
    msg.setSource(43778U);
    msg.setSourceEntity(171U);
    msg.setDestination(112U);
    msg.setDestinationEntity(6U);
    msg.value = 0.93279407349;

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
    msg.setTimeStamp(0.178674922325);
    msg.setSource(42214U);
    msg.setSourceEntity(117U);
    msg.setDestination(38320U);
    msg.setDestinationEntity(1U);
    msg.value = 0.435930704428;

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
    msg.setTimeStamp(0.295829265446);
    msg.setSource(56544U);
    msg.setSourceEntity(61U);
    msg.setDestination(62005U);
    msg.setDestinationEntity(101U);
    msg.l2 = 83;
    msg.l3 = -43;
    msg.iridium = 125;
    msg.modem = -123;
    msg.pumps = 62;
    msg.vhf = -33;

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
    msg.setTimeStamp(0.242458625665);
    msg.setSource(33097U);
    msg.setSourceEntity(228U);
    msg.setDestination(45205U);
    msg.setDestinationEntity(86U);
    msg.l2 = -45;
    msg.l3 = 63;
    msg.iridium = -99;
    msg.modem = 95;
    msg.pumps = 23;
    msg.vhf = -107;

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
    msg.setTimeStamp(0.405040188258);
    msg.setSource(42095U);
    msg.setSourceEntity(150U);
    msg.setDestination(24198U);
    msg.setDestinationEntity(63U);
    msg.l2 = 109;
    msg.l3 = -36;
    msg.iridium = 116;
    msg.modem = 106;
    msg.pumps = -118;
    msg.vhf = 72;

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
    msg.setTimeStamp(0.849893998261);
    msg.setSource(57037U);
    msg.setSourceEntity(24U);
    msg.setDestination(26422U);
    msg.setDestinationEntity(148U);
    msg.angle = 0.432538689873;
    msg.reference.assign("LAAVBBNVDTJTTAFJISZWQMNGQZIIHBFLXPRAHEUORDXRIFHHMBNPWEPDSXEWKOEGARJTSZLWRUKYRNDUMWZECJIFSWTZUWKMYZHCMJFVNFQBBESDLXCRUACQKEWPIGPRFGCGVJUKCRYZFODBKYZNUAMGAHCNTGYSXSGHBIJTDCUEJZUCRMQSHVQLSLPWZLIXGULPQN");
    msg.speed = 0.830618311089;

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
    msg.setTimeStamp(0.484273584731);
    msg.setSource(11202U);
    msg.setSourceEntity(187U);
    msg.setDestination(36560U);
    msg.setDestinationEntity(152U);
    msg.angle = 0.127671138533;
    msg.reference.assign("ZPWNSYICYUWPUPMUSBHTGOYUAZSJTEBVWQBCHVSEPQMXFYDKVNVZEFGGFKJHKYZTTVTLIAMBP");
    msg.speed = 0.858414522174;

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
    msg.setTimeStamp(0.230792023094);
    msg.setSource(51728U);
    msg.setSourceEntity(108U);
    msg.setDestination(9489U);
    msg.setDestinationEntity(31U);
    msg.angle = 0.801242619361;
    msg.reference.assign("SMUPCTPABKEWGQOFFIAGVEZTSQHODCBZIMNGSFOIJYFROYWRSNZVKPJEZODIJSLTDOUJYARTWUOCXVAVATUPRFCBHMZIPSVVLMNCYXILFKEUWCTLPSHYWNHKGFNKCQSRXPEJBIQADUOTPYXDIILROFXRDXPJDICXWJHNLYZEBAHGWHZSQTXVGNSQZMHQDYKLWAGKTMMKUJGRADOKFBBFCNVBJLGHUZEPYUMNMJMZKQWGQHYQVEW");
    msg.speed = 0.308084022275;

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
    msg.setTimeStamp(0.436002369566);
    msg.setSource(51405U);
    msg.setSourceEntity(115U);
    msg.setDestination(50237U);
    msg.setDestinationEntity(152U);
    msg.angle = 0.0891791119843;
    msg.direction.assign("LIKRLGKHLNWDPPQPRVAXEJWLUPFZORENCCQQKEGFBWJHQJFQPOFRTUYBEPFVRGGEJKRGFBUICDFNWVNDDITUFAVAWMMBRMEYNBTSITTSHDWMG");
    msg.speed = 0.0718098919715;

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
    msg.setTimeStamp(0.137139206841);
    msg.setSource(17181U);
    msg.setSourceEntity(140U);
    msg.setDestination(48370U);
    msg.setDestinationEntity(169U);
    msg.angle = 0.55107926957;
    msg.direction.assign("NGUOKGLIORSCOZKNXUMKAMHGQODXEUTMUWVIMIQIGVQVHXJAFDFCMHLENAJMPBYSNJHQFPSEFFOTUSERI");
    msg.speed = 0.936342890272;

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
    msg.setTimeStamp(0.651551299577);
    msg.setSource(12588U);
    msg.setSourceEntity(129U);
    msg.setDestination(12375U);
    msg.setDestinationEntity(155U);
    msg.angle = 0.281336124414;
    msg.direction.assign("NAQSVIQOQLFSFCTNAHLWZAHBJCILNXVZKSZHGKMAAPSDAKFBJEYVXUWYWSAAVEZQHOSFHMLORBMDNAHZIBYDTHBIVSOYPELCMKTUR");
    msg.speed = 0.922366772592;

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
    msg.setTimeStamp(0.0422687570776);
    msg.setSource(21016U);
    msg.setSourceEntity(199U);
    msg.setDestination(48283U);
    msg.setDestinationEntity(98U);
    msg.x = 0.511961744926;
    msg.y = 0.130401731152;
    msg.z1 = 0.428716115495;
    msg.z2 = 0.0490099787765;

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
    msg.setTimeStamp(0.234772149317);
    msg.setSource(20422U);
    msg.setSourceEntity(251U);
    msg.setDestination(53834U);
    msg.setDestinationEntity(147U);
    msg.x = 0.665458251116;
    msg.y = 0.165746049274;
    msg.z1 = 0.854646554253;
    msg.z2 = 0.755784982536;

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
    msg.setTimeStamp(0.664990547352);
    msg.setSource(62801U);
    msg.setSourceEntity(224U);
    msg.setDestination(47212U);
    msg.setDestinationEntity(233U);
    msg.x = 0.675844592052;
    msg.y = 0.312097489417;
    msg.z1 = 0.0131236596392;
    msg.z2 = 0.685837482128;

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
    msg.setTimeStamp(0.0388229805096);
    msg.setSource(18511U);
    msg.setSourceEntity(75U);
    msg.setDestination(1392U);
    msg.setDestinationEntity(243U);
    msg.mmsi = 0.756526361653;
    msg.lat = 0.73565073417;
    msg.lon = 0.919361215468;
    msg.x = 0.924330343095;
    msg.y = 0.471622953879;
    msg.speed = 0.69630604548;
    msg.course = 0.753340489809;
    msg.dist = 0.80110924607;
    msg.length = 0.13977445261;
    msg.width = 0.991095109951;
    msg.o_vect = 0.705749154686;

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
    msg.setTimeStamp(0.286205968705);
    msg.setSource(37179U);
    msg.setSourceEntity(243U);
    msg.setDestination(65332U);
    msg.setDestinationEntity(94U);
    msg.mmsi = 0.555078189862;
    msg.lat = 0.710352102627;
    msg.lon = 0.303551825677;
    msg.x = 0.351826795299;
    msg.y = 0.957218533355;
    msg.speed = 0.544766661678;
    msg.course = 0.291395468467;
    msg.dist = 0.766653064151;
    msg.length = 0.493792749951;
    msg.width = 0.10311873199;
    msg.o_vect = 0.168460719244;

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
    msg.setTimeStamp(0.0596644389796);
    msg.setSource(43656U);
    msg.setSourceEntity(15U);
    msg.setDestination(8766U);
    msg.setDestinationEntity(156U);
    msg.mmsi = 0.427923691645;
    msg.lat = 0.29120282681;
    msg.lon = 0.017717325066;
    msg.x = 0.603853901119;
    msg.y = 0.953527854285;
    msg.speed = 0.0139270759711;
    msg.course = 0.0238523297892;
    msg.dist = 0.811495283342;
    msg.length = 0.200336299139;
    msg.width = 0.543654798497;
    msg.o_vect = 0.128828679257;

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
    IMC::Surroundings msg;
    msg.setTimeStamp(0.874840408507);
    msg.setSource(35401U);
    msg.setSourceEntity(111U);
    msg.setDestination(41407U);
    msg.setDestinationEntity(159U);
    msg.locations.assign("BZJOUTBTDPHHDMFYARCGKLVEXAJJVEIEPNRGSQUXRLICHSWQACQGVUWCRDNYXQONASJYDVZCNMUVXEJMAFGHNEFAZLSYOJPVOGUEOBHZBSQSZMEHPQWFGZUTRSHCFLTFRWWPDTUOOMMASOLKBMRHYLTRIHDCEIBFBJKXMVNJLKIFISIOCCJLPUQJIMYHPXYXQSQMLGYYZBXWVKPULTBNEUXADFPEGKTBRZGKGWKRXCKIDDV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Surroundings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Surroundings msg;
    msg.setTimeStamp(0.439080664787);
    msg.setSource(10821U);
    msg.setSourceEntity(244U);
    msg.setDestination(61476U);
    msg.setDestinationEntity(85U);
    msg.locations.assign("ODMOTFKKNLZGDERWKPDZFQSYGVKBDQCITZPTCZUAHFYSNLKTVXXCQKBUKHVXOTNJGHJDUDJMDHQLOQOPMAFWOMTTIBWNIEQPISEYNXCZHQRWQHEVLJZYWRFVEESXUHYIMHYPSSRKFT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Surroundings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Surroundings msg;
    msg.setTimeStamp(0.616678926258);
    msg.setSource(22621U);
    msg.setSourceEntity(27U);
    msg.setDestination(60808U);
    msg.setDestinationEntity(81U);
    msg.locations.assign("GBYEVWXUTFLYZUSYZWTVVNRTMSTHQTSQSCLBYMMQCEDPXEUWWNUEBIOJFSHXJHGCSKZUEZDHPTHAYEVEPINMZAEDLZCJKLKAADAUOPVKNGFKQCKJMDIWBMWMNFLPYAHBJOGKUFQVLSMLJRWAGFWJQPIZCSXITAQSRK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Surroundings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heave msg;
    msg.setTimeStamp(0.768457883757);
    msg.setSource(53495U);
    msg.setSourceEntity(54U);
    msg.setDestination(20995U);
    msg.setDestinationEntity(106U);
    msg.value = 0.712330864199;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heave #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heave msg;
    msg.setTimeStamp(0.0387582896783);
    msg.setSource(8650U);
    msg.setSourceEntity(241U);
    msg.setDestination(21868U);
    msg.setDestinationEntity(33U);
    msg.value = 0.769366282718;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heave #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heave msg;
    msg.setTimeStamp(0.436345616481);
    msg.setSource(52218U);
    msg.setSourceEntity(221U);
    msg.setDestination(11572U);
    msg.setDestinationEntity(157U);
    msg.value = 0.417978355384;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heave #2", msg == *msg_d);
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
    msg.setTimeStamp(0.894448074611);
    msg.setSource(21863U);
    msg.setSourceEntity(213U);
    msg.setDestination(17988U);
    msg.setDestinationEntity(59U);
    msg.beam1 = 0.798230499681;
    msg.beam2 = 0.191834446559;
    msg.beam3 = 0.215401664231;
    msg.beam4 = 0.412032098618;

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
    msg.setTimeStamp(0.215813168012);
    msg.setSource(26392U);
    msg.setSourceEntity(100U);
    msg.setDestination(13108U);
    msg.setDestinationEntity(226U);
    msg.beam1 = 0.10808047891;
    msg.beam2 = 0.906950672604;
    msg.beam3 = 0.800641167529;
    msg.beam4 = 0.913153796201;

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
    msg.setTimeStamp(0.180070390508);
    msg.setSource(64988U);
    msg.setSourceEntity(192U);
    msg.setDestination(33491U);
    msg.setDestinationEntity(198U);
    msg.beam1 = 0.769429089754;
    msg.beam2 = 0.205617389382;
    msg.beam3 = 0.630876348392;
    msg.beam4 = 0.495267248863;

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
    msg.setTimeStamp(0.288347998061);
    msg.setSource(44639U);
    msg.setSourceEntity(116U);
    msg.setDestination(5067U);
    msg.setDestinationEntity(63U);
    msg.beam1 = 24U;
    msg.beam2 = 30U;
    msg.beam3 = 146U;
    msg.beam4 = 120U;

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
    msg.setTimeStamp(0.0214201849284);
    msg.setSource(45603U);
    msg.setSourceEntity(109U);
    msg.setDestination(31055U);
    msg.setDestinationEntity(192U);
    msg.beam1 = 158U;
    msg.beam2 = 175U;
    msg.beam3 = 166U;
    msg.beam4 = 203U;

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
    msg.setTimeStamp(0.963007604578);
    msg.setSource(6654U);
    msg.setSourceEntity(235U);
    msg.setDestination(62219U);
    msg.setDestinationEntity(247U);
    msg.beam1 = 84U;
    msg.beam2 = 192U;
    msg.beam3 = 108U;
    msg.beam4 = 149U;

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
    msg.setTimeStamp(0.99204492193);
    msg.setSource(4198U);
    msg.setSourceEntity(212U);
    msg.setDestination(27614U);
    msg.setDestinationEntity(36U);
    msg.cellposition = 0.862879811629;
    msg.x = 0.892345204414;
    msg.y = 0.557743095116;
    msg.z1 = 0.861065876623;
    msg.z2 = 0.790439455034;
    msg.amp0 = 0.926049986179;
    msg.amp1 = 0.211439807886;
    msg.amp2 = 0.90997372269;
    msg.amp3 = 0.452753669197;
    msg.cor0 = 94U;
    msg.cor1 = 19U;
    msg.cor2 = 118U;
    msg.cor3 = 206U;

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
    msg.setTimeStamp(0.978081202295);
    msg.setSource(16433U);
    msg.setSourceEntity(4U);
    msg.setDestination(56644U);
    msg.setDestinationEntity(34U);
    msg.cellposition = 0.789358774796;
    msg.x = 0.667939379782;
    msg.y = 0.631197927649;
    msg.z1 = 0.0653534821319;
    msg.z2 = 0.637625612992;
    msg.amp0 = 0.493754185988;
    msg.amp1 = 0.568514075541;
    msg.amp2 = 0.987586931333;
    msg.amp3 = 0.0110948448457;
    msg.cor0 = 66U;
    msg.cor1 = 141U;
    msg.cor2 = 39U;
    msg.cor3 = 47U;

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
    msg.setTimeStamp(0.84423989047);
    msg.setSource(65001U);
    msg.setSourceEntity(105U);
    msg.setDestination(59773U);
    msg.setDestinationEntity(63U);
    msg.cellposition = 0.0380227207774;
    msg.x = 0.631993187537;
    msg.y = 0.57260010814;
    msg.z1 = 0.302751331707;
    msg.z2 = 0.117346058565;
    msg.amp0 = 0.315491341978;
    msg.amp1 = 0.988490194282;
    msg.amp2 = 0.48207967194;
    msg.amp3 = 0.383984527275;
    msg.cor0 = 222U;
    msg.cor1 = 153U;
    msg.cor2 = 190U;
    msg.cor3 = 70U;

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
    msg.setTimeStamp(0.215135579388);
    msg.setSource(18220U);
    msg.setSourceEntity(156U);
    msg.setDestination(48610U);
    msg.setDestinationEntity(124U);
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cellposition = 0.361378952529;
    tmp_msg_0.x = 0.115681581458;
    tmp_msg_0.y = 0.379441050678;
    tmp_msg_0.z1 = 0.669959453762;
    tmp_msg_0.z2 = 0.18854863428;
    tmp_msg_0.amp0 = 0.501486990309;
    tmp_msg_0.amp1 = 0.512679960332;
    tmp_msg_0.amp2 = 0.110414929313;
    tmp_msg_0.amp3 = 0.550769429549;
    tmp_msg_0.cor0 = 219U;
    tmp_msg_0.cor1 = 167U;
    tmp_msg_0.cor2 = 97U;
    tmp_msg_0.cor3 = 31U;
    msg.prof.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.084350436713);
    msg.setSource(19550U);
    msg.setSourceEntity(3U);
    msg.setDestination(58951U);
    msg.setDestinationEntity(33U);
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cellposition = 0.86561894209;
    tmp_msg_0.x = 0.500134795242;
    tmp_msg_0.y = 0.10024348406;
    tmp_msg_0.z1 = 0.244066148992;
    tmp_msg_0.z2 = 0.41771086404;
    tmp_msg_0.amp0 = 0.0714213166628;
    tmp_msg_0.amp1 = 0.572085228584;
    tmp_msg_0.amp2 = 0.0908346587647;
    tmp_msg_0.amp3 = 0.824123455195;
    tmp_msg_0.cor0 = 75U;
    tmp_msg_0.cor1 = 139U;
    tmp_msg_0.cor2 = 175U;
    tmp_msg_0.cor3 = 65U;
    msg.prof.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.738471322288);
    msg.setSource(44252U);
    msg.setSourceEntity(66U);
    msg.setDestination(50577U);
    msg.setDestinationEntity(234U);

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

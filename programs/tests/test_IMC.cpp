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
// IMC XML MD5: 18d3ce67b956c6c457605f6791618e28                            *
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
    msg.setTimeStamp(0.0984180782324);
    msg.setSource(30240U);
    msg.setSourceEntity(24U);
    msg.setDestination(24756U);
    msg.setDestinationEntity(229U);
    msg.state = 69U;
    msg.flags = 203U;
    msg.description.assign("CHXPLCCVFUAXGJKJMVYWFERVLNJCABQLOQYBYPXHZKDWRFROMOGTKWZMWACLWMGWDIJUNFSZARSDXFEOHMXUVVLHMEVTQSKVYHGPGJJBBHTSBGBUAEXZFHUIQNRSYJUTZPBEDMNPYGZOQPSEHJZDILXXTUFOXNEJGVNLLFWCFUDQTNAVKISAZLTGPPR");

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
    msg.setTimeStamp(0.937900250958);
    msg.setSource(54834U);
    msg.setSourceEntity(183U);
    msg.setDestination(29157U);
    msg.setDestinationEntity(91U);
    msg.state = 61U;
    msg.flags = 16U;
    msg.description.assign("JYKVZFUIDYUQEOYSGRBENHWJKMTHXXZTGFMXSSOERTCNAFSAMXZVLAIMQHGBMGXJHAIQTTIQEMPOWSJYEFFWPUKHNSBRREUNXJLFYXGTDYHCZIWQWPHSBPBYXRYDUWLOJUZFXAKVLUEGYVGTGZPNOQJQJURKVAVKSEIBDCHMDERNCDKQDIELHZTAQ");

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
    msg.setTimeStamp(0.346396974866);
    msg.setSource(48114U);
    msg.setSourceEntity(224U);
    msg.setDestination(59420U);
    msg.setDestinationEntity(29U);
    msg.state = 104U;
    msg.flags = 208U;
    msg.description.assign("FUOKYTLOABPAHFDFRQWGJNIDYEOPMAHPZXXRQXZFVHWRTPSFYOVRGEDDTBSTUQNNVDNIPRYDWEJXTKBLVCZZLCNYBKCALMKH");

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
    msg.setTimeStamp(0.142836510019);
    msg.setSource(19926U);
    msg.setSourceEntity(161U);
    msg.setDestination(29759U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.700369234092);
    msg.setSource(55332U);
    msg.setSourceEntity(121U);
    msg.setDestination(10784U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.57886836976);
    msg.setSource(64754U);
    msg.setSourceEntity(89U);
    msg.setDestination(52758U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.353407532252);
    msg.setSource(34135U);
    msg.setSourceEntity(74U);
    msg.setDestination(23807U);
    msg.setDestinationEntity(174U);
    msg.id = 16U;
    msg.label.assign("UJZZLCDDFYDQIMBYGGZDECOONXXMXIBWYYOICJSDGUTLPFYPFDAPLPUWKLSYB");
    msg.component.assign("QQFOLFKNXOULOXURGRJNOAOTGBEPWEUVEJUSVYJMLFWGAIKHNTWYDEPVPWIGBNQILROCKLKNZTHYOSJBJWFOWMCEUHIDRRVEQUTFIPUQGBQBHCXYLZKTPDQAYFKZTLCBGVFSZRUMEMKMVBCCTUSSMBYTJHHCZZKXSLGJYH");
    msg.act_time = 64032U;
    msg.deact_time = 25022U;

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
    msg.setTimeStamp(0.0523423791838);
    msg.setSource(61114U);
    msg.setSourceEntity(30U);
    msg.setDestination(44228U);
    msg.setDestinationEntity(102U);
    msg.id = 108U;
    msg.label.assign("GRHGGDOSHXKVCYCIUPFXXGSHOTESCARTBQMDWYYNIVITHWXTKRHFWDVBVUXZGJJLZFQEPFYKQOMRGDSLZWMJNJBHESKQCKOWRGLPNDBZFEGSQIFGEWEBNHDRONMUARNTAOAOULNWZBKPPDQAEBJJYOXIAATVCFULDABEKIMETVSDFQKJIWLJVHZVXPXFTILMQNSYZURQRMRMWNXLUM");
    msg.component.assign("TWGFEIQSIXWBAORMENHXFNRKQ");
    msg.act_time = 31763U;
    msg.deact_time = 17022U;

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
    msg.setTimeStamp(0.848516000414);
    msg.setSource(22758U);
    msg.setSourceEntity(177U);
    msg.setDestination(22667U);
    msg.setDestinationEntity(71U);
    msg.id = 240U;
    msg.label.assign("VETCFOSMZSOLVUBCKEOQDVDKQYXVRGEKQZPIPGTWGPSFHDDZIEVOSZCQLLSWJTPVMNKJYAWRHJRELNDNPUVKXRRBJKXALBHNMESDZGYGCXMJIDBGXAOPIFGNMZNAORTREYUBHCVJYUCLQIJBVTCSAQWFWXHOLWDUWYGUMLQEKRHQIKTDMZGNTEUKAJJOMKHDFBWNLSHLXNZUFCCUWYITGRIXYAMCFAUPFTFPYMOEBQH");
    msg.component.assign("MBSTSVDEAKQMJLXDYQCXTRUFPALQNIWPIXIYJSLSUGORHZYCJMVHTGIJROQHYLQFUPYTSIOZUBGFUGDUMXGGHQOIERLPLNBFBXVTLMNVZODFHCPWWDYINDEGQRQEOQUWZPOARRNPETHBSNHTTFTYHXDZJSZXVSZUANENAJKWALCFRZWCHWXU");
    msg.act_time = 23202U;
    msg.deact_time = 25860U;

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
    msg.setTimeStamp(0.82795737616);
    msg.setSource(40177U);
    msg.setSourceEntity(199U);
    msg.setDestination(46219U);
    msg.setDestinationEntity(243U);
    msg.id = 195U;

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
    msg.setTimeStamp(0.996693925276);
    msg.setSource(52998U);
    msg.setSourceEntity(194U);
    msg.setDestination(46255U);
    msg.setDestinationEntity(119U);
    msg.id = 125U;

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
    msg.setTimeStamp(0.284476349107);
    msg.setSource(57632U);
    msg.setSourceEntity(144U);
    msg.setDestination(39768U);
    msg.setDestinationEntity(16U);
    msg.id = 122U;

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
    msg.setTimeStamp(0.0162617328665);
    msg.setSource(63317U);
    msg.setSourceEntity(77U);
    msg.setDestination(20528U);
    msg.setDestinationEntity(107U);
    msg.op = 119U;
    msg.list.assign("OYWYNOQBBOLHVFVCVNHBPHBRZJYBZAFZKSCNIJMKTNXITWH");

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
    msg.setTimeStamp(0.685234440205);
    msg.setSource(36221U);
    msg.setSourceEntity(47U);
    msg.setDestination(7469U);
    msg.setDestinationEntity(72U);
    msg.op = 21U;
    msg.list.assign("VVXPTMVOSIBSGDXQIEHVYQKDONQSZSID");

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
    msg.setTimeStamp(0.200932133855);
    msg.setSource(1070U);
    msg.setSourceEntity(121U);
    msg.setDestination(782U);
    msg.setDestinationEntity(81U);
    msg.op = 102U;
    msg.list.assign("DVRDTIIXLIURTNOABCNFYSQPQECLJYOGCRBHLYHECCLKQETENOKVJKNFTGPQZGJMTRTIHSOHXFZEWSRPBFUMFNUFLBFLSAZGEYBZWEONUROWGSUAHXYJBZZUJMKI");

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
    msg.setTimeStamp(0.575178295466);
    msg.setSource(13989U);
    msg.setSourceEntity(172U);
    msg.setDestination(34074U);
    msg.setDestinationEntity(89U);
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
    msg.setTimeStamp(0.117337840152);
    msg.setSource(30037U);
    msg.setSourceEntity(167U);
    msg.setDestination(62194U);
    msg.setDestinationEntity(111U);
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
    msg.setTimeStamp(0.697256515409);
    msg.setSource(30887U);
    msg.setSourceEntity(245U);
    msg.setDestination(22553U);
    msg.setDestinationEntity(163U);
    msg.value = 23U;

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
    msg.setTimeStamp(0.440502227873);
    msg.setSource(24710U);
    msg.setSourceEntity(31U);
    msg.setDestination(19142U);
    msg.setDestinationEntity(127U);
    msg.consumer.assign("OXGCTZIZQQBVBLDYIGQMYFOIYXTUSFVBCWHVFYUOXZLOQRDLSMHJGNS");
    msg.message_id = 47221U;

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
    msg.setTimeStamp(0.917634923222);
    msg.setSource(46013U);
    msg.setSourceEntity(123U);
    msg.setDestination(43782U);
    msg.setDestinationEntity(235U);
    msg.consumer.assign("LQANZHAHJUNMOQQEJWQSYKNVTDLGOOXWDXDRIFFJTWZUQGBEWTLWPCUSLMTORPDAZOEOJGSDEZFCBSNCWUKDFIKEHLPWHNFPRGYSPGBUAFCRDVVVQGNYUTCWJKJVYUJXHHQUROQMBKGBAAWAAIEKZHTVXRRMQSLLRIXUGFMIMCPPAGHTEISOYFSBDMMYL");
    msg.message_id = 27399U;

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
    msg.setTimeStamp(0.0441056982775);
    msg.setSource(16991U);
    msg.setSourceEntity(108U);
    msg.setDestination(29073U);
    msg.setDestinationEntity(204U);
    msg.consumer.assign("FKJWZWDHXSXKQDINYIZYUUHKILMZRBTUGRKYUBOFCDMXCORDVCCAICJVBVJAPFXORFUJXUPSGZMRLNONSLPLOGQGLYSDZEAZLMPPKVGLTVIHABXSVEOXWIZXROMMFSWEWKWCZBILOIQWFZINEERYHDDY");
    msg.message_id = 24496U;

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
    msg.setTimeStamp(0.996063733405);
    msg.setSource(6748U);
    msg.setSourceEntity(156U);
    msg.setDestination(49794U);
    msg.setDestinationEntity(199U);
    msg.type = 178U;

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
    msg.setTimeStamp(0.77152582034);
    msg.setSource(63477U);
    msg.setSourceEntity(229U);
    msg.setDestination(55459U);
    msg.setDestinationEntity(86U);
    msg.type = 172U;

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
    msg.setTimeStamp(0.2251961154);
    msg.setSource(8634U);
    msg.setSourceEntity(202U);
    msg.setDestination(58610U);
    msg.setDestinationEntity(10U);
    msg.type = 161U;

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
    msg.setTimeStamp(0.322678452155);
    msg.setSource(21806U);
    msg.setSourceEntity(108U);
    msg.setDestination(38583U);
    msg.setDestinationEntity(131U);
    msg.op = 11U;

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
    msg.setTimeStamp(0.836406669063);
    msg.setSource(62218U);
    msg.setSourceEntity(75U);
    msg.setDestination(38911U);
    msg.setDestinationEntity(61U);
    msg.op = 108U;

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
    msg.setTimeStamp(0.636297493192);
    msg.setSource(28843U);
    msg.setSourceEntity(196U);
    msg.setDestination(30179U);
    msg.setDestinationEntity(234U);
    msg.op = 78U;

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
    msg.setTimeStamp(0.152046008634);
    msg.setSource(14666U);
    msg.setSourceEntity(99U);
    msg.setDestination(2837U);
    msg.setDestinationEntity(12U);
    msg.total_steps = 166U;
    msg.step_number = 189U;
    msg.step.assign("ECIOHLBWXURNUYZVHJODRTFSGJZIKRVWYAFNJRAAKNYIMMKZJVDFBMRLPDHPSEDWKZEKHWUWPAXO");
    msg.flags = 249U;

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
    msg.setTimeStamp(0.590685189852);
    msg.setSource(50710U);
    msg.setSourceEntity(79U);
    msg.setDestination(53821U);
    msg.setDestinationEntity(3U);
    msg.total_steps = 194U;
    msg.step_number = 120U;
    msg.step.assign("DHQNWXQHVKKHAVZLILGUEQLDRSJPJRKYTANVMWC");
    msg.flags = 40U;

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
    msg.setTimeStamp(0.67064211719);
    msg.setSource(36008U);
    msg.setSourceEntity(242U);
    msg.setDestination(48195U);
    msg.setDestinationEntity(203U);
    msg.total_steps = 238U;
    msg.step_number = 94U;
    msg.step.assign("NONPTIABJLOHUWJSSDEZRYREKQRRAWIMBHRSEDOXZLZFXT");
    msg.flags = 226U;

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
    msg.setTimeStamp(0.102245545981);
    msg.setSource(665U);
    msg.setSourceEntity(15U);
    msg.setDestination(24978U);
    msg.setDestinationEntity(211U);
    msg.state = 71U;
    msg.error.assign("GZKZYDPEXLEWIIAWHICSUTGURAXJLRYTIDIMPFWHLTSRHTHBBWVYRMQKGJVCBSOXVDKNDGFWHMPNVXQJBUNAEKZKKPTZY");

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
    msg.setTimeStamp(0.149138794662);
    msg.setSource(25286U);
    msg.setSourceEntity(88U);
    msg.setDestination(21323U);
    msg.setDestinationEntity(138U);
    msg.state = 205U;
    msg.error.assign("IRULVZZHRCEBOJJXSPFIOPVGQNILYUHWGVSKPTEOOYXWXGLXVLSTMJOUNYHGERFETSYXRCNJZGMKOYHSKZITWDLMDMAZFUTHDEQLZQUTAFGKIPDADAKJWBSDSJBPWFLMFYYZNUQOCRGDWLOCXVENDCHCMZPFIJFEPARSIUACGCQVCBZDNCYHEYKBTWJJBJIWAQXRLTQVOXNQSKVEUWNRMKXMFPTR");

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
    msg.setTimeStamp(0.0445666865533);
    msg.setSource(10499U);
    msg.setSourceEntity(181U);
    msg.setDestination(42543U);
    msg.setDestinationEntity(245U);
    msg.state = 49U;
    msg.error.assign("RGWGUAEJNRHWSZTXTIEQFRQCPIRUJSUIAWVVYWZLIAKFRQPTNVRYRWOOTFBKJLMVISXHQBSKNXDKQXXJWBUESZXMTWIVCKLJNCLJKEWECHAAANZGGBCIHBBNLDC");

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
    msg.setTimeStamp(0.540867501673);
    msg.setSource(49893U);
    msg.setSourceEntity(70U);
    msg.setDestination(39995U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.00336712581007);
    msg.setSource(16674U);
    msg.setSourceEntity(251U);
    msg.setDestination(13844U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.0524510550257);
    msg.setSource(8444U);
    msg.setSourceEntity(170U);
    msg.setDestination(16977U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.760523017273);
    msg.setSource(59358U);
    msg.setSourceEntity(178U);
    msg.setDestination(1864U);
    msg.setDestinationEntity(128U);
    msg.op = 154U;
    msg.speed_min = 0.623058642702;
    msg.speed_max = 0.392412022614;
    msg.long_accel = 0.503589795621;
    msg.alt_max_msl = 0.780482108133;
    msg.dive_fraction_max = 0.520467905331;
    msg.climb_fraction_max = 0.146577434263;
    msg.bank_max = 0.371485506573;
    msg.p_max = 0.897135239209;
    msg.pitch_min = 0.78088893381;
    msg.pitch_max = 0.136649934525;
    msg.q_max = 0.595767053299;
    msg.g_min = 0.971291574914;
    msg.g_max = 0.458988872702;
    msg.g_lat_max = 0.370007010321;
    msg.rpm_min = 0.94115863932;
    msg.rpm_max = 0.853541770674;
    msg.rpm_rate_max = 0.808923032069;

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
    msg.setTimeStamp(0.29845455958);
    msg.setSource(21336U);
    msg.setSourceEntity(199U);
    msg.setDestination(7490U);
    msg.setDestinationEntity(236U);
    msg.op = 80U;
    msg.speed_min = 0.0289811564983;
    msg.speed_max = 0.372330169551;
    msg.long_accel = 0.267051211119;
    msg.alt_max_msl = 0.795373641573;
    msg.dive_fraction_max = 0.365073068023;
    msg.climb_fraction_max = 0.883222947599;
    msg.bank_max = 0.667651839129;
    msg.p_max = 0.304365790695;
    msg.pitch_min = 0.888030587345;
    msg.pitch_max = 0.34158958934;
    msg.q_max = 0.449335661765;
    msg.g_min = 0.626111201275;
    msg.g_max = 0.257624724772;
    msg.g_lat_max = 0.776764435733;
    msg.rpm_min = 0.806073013763;
    msg.rpm_max = 0.590536961013;
    msg.rpm_rate_max = 0.797022123313;

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
    msg.setTimeStamp(0.37177424276);
    msg.setSource(8634U);
    msg.setSourceEntity(240U);
    msg.setDestination(3461U);
    msg.setDestinationEntity(26U);
    msg.op = 130U;
    msg.speed_min = 0.894829927666;
    msg.speed_max = 0.607851162922;
    msg.long_accel = 0.200852528858;
    msg.alt_max_msl = 0.551223071315;
    msg.dive_fraction_max = 0.747236746626;
    msg.climb_fraction_max = 0.530390129795;
    msg.bank_max = 0.348155646348;
    msg.p_max = 0.418283827033;
    msg.pitch_min = 0.21619079661;
    msg.pitch_max = 0.229099467307;
    msg.q_max = 0.773029882687;
    msg.g_min = 0.983410934111;
    msg.g_max = 0.31225535178;
    msg.g_lat_max = 0.608832855483;
    msg.rpm_min = 0.231885478599;
    msg.rpm_max = 0.503719493392;
    msg.rpm_rate_max = 0.448694702156;

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
    msg.setTimeStamp(0.881911315215);
    msg.setSource(11952U);
    msg.setSourceEntity(92U);
    msg.setDestination(51512U);
    msg.setDestinationEntity(243U);
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("FSJRLNZPXLIBUOCMPYXGOLOXXEYQWIUICEEJTJVTDQLMSUTSXYHFQOVUXHLYOBQYCNQDQVOKHEGNKMSINXMMNGVYLHBZTGJCRGDBEUFEWSAHVVFZLLVHPAHQBJIRFUHQEFPSGBWUAFTNJLGNCBPFBNPOMMAKKIDUO");
    tmp_msg_0.data.assign("GRNJDLTWZQJLJBXJAZZYCNZFFOTQEUZCXCCUGCDTJMSEJBEZYWTMSVQKOHIPFSYBBTVRHCJSVWFPWYKQVUMPAGTMHZNPKHTIEIWXMFRYOVDMYEQDOWDUIKAVQBKXSSDKAKKEPALRWIKDGUFOYDGZRBLLBHVRWAMGHFXPTHTUWOEYFSWHAVCRXMFJRRGOUUJDHGQQNMLMPITGSLQPNULYIZIBXCONQ");
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
    msg.setTimeStamp(0.805290266481);
    msg.setSource(35424U);
    msg.setSourceEntity(228U);
    msg.setDestination(33309U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.137002294011);
    msg.setSource(53421U);
    msg.setSourceEntity(109U);
    msg.setDestination(25461U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.47401399802);
    msg.setSource(35375U);
    msg.setSourceEntity(147U);
    msg.setDestination(47277U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.74268909196;
    msg.lon = 0.816553578894;
    msg.height = 0.796839663165;
    msg.x = 0.176036515503;
    msg.y = 0.535917024507;
    msg.z = 0.729816094513;
    msg.phi = 0.261510913675;
    msg.theta = 0.77718451513;
    msg.psi = 0.432422004326;
    msg.u = 0.0428727938818;
    msg.v = 0.639981244727;
    msg.w = 0.0895843465806;
    msg.p = 0.746394945097;
    msg.q = 0.766903796387;
    msg.r = 0.146683869752;
    msg.svx = 0.885174150667;
    msg.svy = 0.978528307627;
    msg.svz = 0.424345130464;

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
    msg.setTimeStamp(0.287873797911);
    msg.setSource(17760U);
    msg.setSourceEntity(136U);
    msg.setDestination(64556U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.280123743282;
    msg.lon = 0.789203084122;
    msg.height = 0.0686975556384;
    msg.x = 0.968572941328;
    msg.y = 0.46420766959;
    msg.z = 0.575871805836;
    msg.phi = 0.356859366759;
    msg.theta = 0.492496774176;
    msg.psi = 0.374058588696;
    msg.u = 0.689833318842;
    msg.v = 0.408850854601;
    msg.w = 0.465431826244;
    msg.p = 0.426493407967;
    msg.q = 0.490055494758;
    msg.r = 0.187848970651;
    msg.svx = 0.715801593466;
    msg.svy = 0.24794751699;
    msg.svz = 0.872504802687;

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
    msg.setTimeStamp(0.717869249617);
    msg.setSource(38887U);
    msg.setSourceEntity(15U);
    msg.setDestination(1484U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.640279389791;
    msg.lon = 0.324087558754;
    msg.height = 0.472701759882;
    msg.x = 0.818299385877;
    msg.y = 0.333825761341;
    msg.z = 0.993824696423;
    msg.phi = 0.789853824224;
    msg.theta = 0.313153981003;
    msg.psi = 0.183986334227;
    msg.u = 0.0317227864427;
    msg.v = 0.506841658768;
    msg.w = 0.587874004186;
    msg.p = 0.884760077141;
    msg.q = 0.410816600294;
    msg.r = 0.0399368634344;
    msg.svx = 0.668839706776;
    msg.svy = 0.253107719582;
    msg.svz = 0.0878412142363;

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
    msg.setTimeStamp(0.0592849217464);
    msg.setSource(40643U);
    msg.setSourceEntity(61U);
    msg.setDestination(19475U);
    msg.setDestinationEntity(7U);
    msg.op = 201U;
    msg.entities.assign("LRIACBQZYVNNHSWSNGZUJAABPWUARQBEQLUBTFXMJFVJPNERNYIACWYFESZX");

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
    msg.setTimeStamp(0.294579684038);
    msg.setSource(45508U);
    msg.setSourceEntity(243U);
    msg.setDestination(39283U);
    msg.setDestinationEntity(195U);
    msg.op = 40U;
    msg.entities.assign("SUVKSSEDFPYQYHGJTHPAKFQUOVDCXUHBJIBKHFPFZIZISFMRKSDLXZJIOWOZNYQDCUBNATFNEVCXCIGOWWHQMRVKCEXRZFOLRKRAJMDKVVMPXTQYITLBAYQHGMNXSYILXUVLQWZGIWVJGRRWDZYHKJWPLHAKPJCJWPUKLMRIANROXBY");

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
    msg.setTimeStamp(0.905476681694);
    msg.setSource(25654U);
    msg.setSourceEntity(50U);
    msg.setDestination(19198U);
    msg.setDestinationEntity(5U);
    msg.op = 175U;
    msg.entities.assign("MXTARTJAKUVJLGZEQATUBBJPIFMQSTDTFMBGNMEMVQLUGJZCKUWAUM");

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
    msg.setTimeStamp(0.000841999750864);
    msg.setSource(37986U);
    msg.setSourceEntity(176U);
    msg.setDestination(31789U);
    msg.setDestinationEntity(247U);
    msg.type = 2U;
    msg.speed = 11014U;
    const char tmp_msg_0[] = {49, 4, -72, -57, 117, -36, -92, -30, 36, -48, -41, -52, -14, 20, 108, -19, 111, -122, -58, -84, -29, -14, -104, 17, -68, -76, -30, -8, -12, -91, -119, -78, 52, -31, -106, 65, 2, 117, 111, -83, -104, -72, -53, 121, -5, -99, 117, -61, -46, 30, -62, -70, 80, 9, 123, 69, 23, 67, 94, -103, -73, 45, -16, 11, -89, -121, -105, 122, 28, -87, -2, 29, -67, 72, 88, -79, -24, -127, -63, -25, 30, -32, 114, 122, 41, -49, -22, 41, 48, -51, 38, 124, 12, 108, 104, 87, 11, 73, 63, 23, 74, 57, -99, 58, -48, -101, 117, 53, -8, -112, -6, -65, 45, -116, 113, -85, 85, -10, 71, -57, -101};
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
    msg.setTimeStamp(0.899492179053);
    msg.setSource(11035U);
    msg.setSourceEntity(165U);
    msg.setDestination(48181U);
    msg.setDestinationEntity(12U);
    msg.type = 14U;
    msg.speed = 21231U;
    const char tmp_msg_0[] = {89, -28, 115, 102, 88, 36, 124, 25, -70, -81, 29, -57, 65, -100, -33, -71, -33, -104, -68, 17, 21, 41, -14, 77, 126, -122, 76, -74, -82, 76, 79, -70, -21, -83, -17, 81, -121};
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
    msg.setTimeStamp(0.642094225225);
    msg.setSource(2074U);
    msg.setSourceEntity(236U);
    msg.setDestination(13107U);
    msg.setDestinationEntity(22U);
    msg.type = 194U;
    msg.speed = 3727U;
    const char tmp_msg_0[] = {-41, -41, 98, -115, 19, -78, 11, -98, -86, 16, 33, -65, 37, -45, 71, 103, 96, 78, 113, 101, -58, 55, -34, 27, 77, -110, 94, 97, -85, -103, -110, 123, 60, -81, -44, -10, 8, -101, 36, 12, -108, 76, 6, 29, 88, 103, -26, -22, -100, 63, -108, 12, 107, -35, -69, 97, -16, 77, 24, -36, -104, -128, 96, -77, -51, 16, -25, 36, 47, -79, 34, 13, 42, 53, -49, 38, 74, 42, 5, -46, -47, -18, 21, 18, 64, -73, -103, 105, -69, 100, 94, 55, -64, 72, 101, 18, -95, -22, -13, -54, 64, 60, 26, -12, -119, 83, -90, -2, -6, -53, -12, 53, -4, 45, -61, 102, 113, 79, 80, 5, -59, 37, 4, -33, -17, -64, -63, 99, 9, -68, -43, -63, -84, 79, 19, 59, 27, -85, -116, -91, -26, 121, -119, -43, 124, 1, -109, -96, 18, 98, -123, 14, 55, -106, -22, -2, -4, -114, 34, -22, -76, -5, -120, 27, -63, 109, 19, 75, 4, -113, 88, 92, -95, -117, 2, -85, -58, 43, 46, -44, -69, -27, 18, 42, 52, 113, 28, 59, 124, -113, -97, -115, -52, -96, 101, -116, -51, 45, -80, 41, -43, -68, -9, -70, -58, -109, 51, -79, -126, -29, -71, 116, 118, -5, -90, 77, 121, 34, 103, 75, -75, -128, -52, 51, 95, 33, 71, -62};
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
    msg.setTimeStamp(0.567206706215);
    msg.setSource(36820U);
    msg.setSourceEntity(84U);
    msg.setDestination(41929U);
    msg.setDestinationEntity(66U);
    msg.op = 111U;
    msg.tas2acc_pgain = 0.835944096192;
    msg.bank2p_pgain = 0.926875102184;

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
    msg.setTimeStamp(0.872921393925);
    msg.setSource(28107U);
    msg.setSourceEntity(207U);
    msg.setDestination(3003U);
    msg.setDestinationEntity(190U);
    msg.op = 67U;
    msg.tas2acc_pgain = 0.959602297959;
    msg.bank2p_pgain = 0.660516522371;

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
    msg.setTimeStamp(0.274851153831);
    msg.setSource(60816U);
    msg.setSourceEntity(23U);
    msg.setDestination(55185U);
    msg.setDestinationEntity(12U);
    msg.op = 14U;
    msg.tas2acc_pgain = 0.478873001209;
    msg.bank2p_pgain = 0.30013093141;

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
    msg.setTimeStamp(0.509436503964);
    msg.setSource(29561U);
    msg.setSourceEntity(95U);
    msg.setDestination(25027U);
    msg.setDestinationEntity(141U);
    msg.available = 1896302548U;
    msg.value = 150U;

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
    msg.setTimeStamp(0.381640532213);
    msg.setSource(1047U);
    msg.setSourceEntity(84U);
    msg.setDestination(9603U);
    msg.setDestinationEntity(216U);
    msg.available = 952014896U;
    msg.value = 102U;

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
    msg.setTimeStamp(0.33824731723);
    msg.setSource(48566U);
    msg.setSourceEntity(82U);
    msg.setDestination(11311U);
    msg.setDestinationEntity(6U);
    msg.available = 1315373776U;
    msg.value = 152U;

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
    msg.setTimeStamp(0.536270053121);
    msg.setSource(3168U);
    msg.setSourceEntity(29U);
    msg.setDestination(61272U);
    msg.setDestinationEntity(73U);
    msg.op = 151U;
    msg.snapshot.assign("PMNKSCGVHSMIYPDPGGTLOFLISBCVBCWPHMPEYTWXVHYHGKSZBNNZHHARVSSXAALFIFGTPNBNDVBWZQKVNSODEEKXUWRLOQPWAGJRIOPHUJWBURIODFHS");
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 40U;
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
    msg.setTimeStamp(0.135896263824);
    msg.setSource(22275U);
    msg.setSourceEntity(199U);
    msg.setDestination(44731U);
    msg.setDestinationEntity(250U);
    msg.op = 94U;
    msg.snapshot.assign("BHSBVQYOWTNJHXMRRCFHWEEGYWXLUDOFWSATDHSJUBTRCPKADYFZNLJGUNCNMLEVTWDZKARGIOXZCCE");
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("TYEFTAFPHVTAZGHJELLHMYRXIRXBLPPCHTDSRDBNMPUKFQJKUWKVLXGCFLMNOQKHPZIRZWOSAUYX");
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
    msg.setTimeStamp(0.610095251279);
    msg.setSource(56174U);
    msg.setSourceEntity(212U);
    msg.setDestination(19666U);
    msg.setDestinationEntity(184U);
    msg.op = 65U;
    msg.snapshot.assign("ZSTQLMJRMUGKV");
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 216U;
    tmp_msg_0.mode.assign("ACIVNUYMKPNSVBHSZHTNFRCTBSGVGLTHWHOUNUXQQYARBGCOLXLPPSKZAMNAWVBPRHTCOTIURWMQWDUEMCOLTINVASDWTYMSLHFIWBZENFEUPVHYXFGLHGGKMTPBRNMJAUWPJPWSOXFQECADMKMUJEHQJSFQOBJLEFUZRWYDTOFZXCIJJIPABDSYKGTZYKKZYOQSFRECBILHLDDQFEJWNQJKXVNRXVZGXMADLIE");
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
    msg.setTimeStamp(0.876810035937);
    msg.setSource(48999U);
    msg.setSourceEntity(233U);
    msg.setDestination(10427U);
    msg.setDestinationEntity(214U);
    msg.op = 229U;
    msg.name.assign("QCGPUMUHAPERYKEUYTKUWROOTKEROJZXRYZOGJACCVUXXIPLIVPWJBDCBABWRTJGZAQHNWDYFCXCEWXWWVIVNQZRMRXDOTIYQZZPEKFVMDGXGQIHILGHTDMPURWQECQSVHJ");

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
    msg.setTimeStamp(0.822368288401);
    msg.setSource(27457U);
    msg.setSourceEntity(49U);
    msg.setDestination(29884U);
    msg.setDestinationEntity(70U);
    msg.op = 198U;
    msg.name.assign("ACPQBEPPKSLLANUOUEBXRQKGJDYEIZTTOYMCJKDFTXVAKHIQUBWCGXGVSZHGQYQOWJWXVKSVFHDACHMUFUBQDXKZCEHJNSDGPIJLQD");

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
    msg.setTimeStamp(0.798254903918);
    msg.setSource(27832U);
    msg.setSourceEntity(6U);
    msg.setDestination(47250U);
    msg.setDestinationEntity(178U);
    msg.op = 87U;
    msg.name.assign("RXECLAFOGVOLBJLMCASTRHOSWPZGOQBXVPSWNOJNDBJRMRYSVKIRPJHNZFVJQIIKZVKBDXQQLCILWYXGYXUTHTBOYMHEUUPWFUVEDASNCYHGBIBGMITZZBJGEETTLNLJJPZMDMTRSEKNHGQTJCVRNBLYKORHAFSNUZFWDNHPEWVYMXQQAAGPFZZLSFQNPKTMQXSAXKCMPAEICDURMZGEDEXCYQSFHIYUWTWD");

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
    msg.setTimeStamp(0.792153564275);
    msg.setSource(37981U);
    msg.setSourceEntity(128U);
    msg.setDestination(17461U);
    msg.setDestinationEntity(109U);
    msg.type = 132U;
    msg.htime = 0.46052912831;
    msg.context.assign("ENJRVBRHHQCAJXGJVMDNBORKJRQNDTEASQDBRWJIETHTVUOLAZDSLFIQWPJAELGDAUYHBPTQQIUTUHMMGBZQLBHYGGVEPVSHPYYMPOKIMPEHMNZUYOZFFIQSJCED");
    msg.text.assign("ZTZMHUKUPQYERXQLSJCLNBYNPHBDYHWDANKCMETUYDBPITXUTZCWXLJXTIFTPWXORAGRWXJJRGHKFGYVAWOIPPCYHAGIIZTVSYFSVJDZCHDXWKNOOHFYWDSFOKTGOOHBUQFVYIESDEZKLBRVRALXSZJLOAZFRZ");

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
    msg.setTimeStamp(0.232242302261);
    msg.setSource(1344U);
    msg.setSourceEntity(106U);
    msg.setDestination(27090U);
    msg.setDestinationEntity(144U);
    msg.type = 206U;
    msg.htime = 0.125362281842;
    msg.context.assign("DXJPWOJUKSYWVFRPVGWAZZDURAEMFKBQVXPXSHSPNYABSNRUCTTKRQENDHWGRZWEEKVDJSGQAHLMATHQLBWXFRNBMYGACSGIUFFHTCUVWEWZZUTQEQKOXJUCSUOJH");
    msg.text.assign("OPUEKZMWUWPZKNLGGCOKPETXXDBBPLFQNRSQHFBSTEVVYTDLSEIMRHLJZNONAAMYHIJOTRUEYIVGPBXZBXKEJXAKCOEDLNYPHALNKSISYTOSXDUAYYJEHDGCLBMSUAJOWKUXASMMSVKQQWRNDOPVLRWGEZDQUPLLBUCFDHQFWOZJURDCFGGZJCFHQIYZRRXGZXVMAOJFVTCMKNBYERQRHGNGWAAXZW");

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
    msg.setTimeStamp(0.987013246834);
    msg.setSource(2014U);
    msg.setSourceEntity(46U);
    msg.setDestination(12881U);
    msg.setDestinationEntity(189U);
    msg.type = 253U;
    msg.htime = 0.0198844716244;
    msg.context.assign("YYHXHGSPTSXCREUOHHWPAILSHEANZNZBVEZRMJFSFZEVDTVBUMUPQYEMSJLFCWKNEMSJTAFUFC");
    msg.text.assign("ZWCNFVGHLBLLSANTSNVGRNBHCFXZLPHTZOVMZXQSGDS");

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
    msg.setTimeStamp(0.459000294953);
    msg.setSource(16401U);
    msg.setSourceEntity(184U);
    msg.setDestination(56320U);
    msg.setDestinationEntity(84U);
    msg.command = 161U;
    msg.htime = 0.258981035867;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 28U;
    tmp_msg_0.htime = 0.440829034129;
    tmp_msg_0.context.assign("ZWOUPKHAWUKEXYO");
    tmp_msg_0.text.assign("ANUFPXIEXHSATPUAQNMDMBFAGUWYYVGZQNWCGRNBSQKYGLDBGJTKYYDCHFRBYCLCOJEUVLIKPQWOHCGBERVKLQJZHWSSOELOWJYOPSCJKVXQKFZHDDHBDMXZIPFLZGDGITUUAKXTMEWIJLQEXTTDOSSRUNMPQXPSRCJRBAFLTGUYIHVOOENKHTIOXCTPQGINVN");
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
    msg.setTimeStamp(0.447802097195);
    msg.setSource(51740U);
    msg.setSourceEntity(56U);
    msg.setDestination(47780U);
    msg.setDestinationEntity(144U);
    msg.command = 84U;
    msg.htime = 0.440038190795;

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
    msg.setTimeStamp(0.812108896658);
    msg.setSource(39031U);
    msg.setSourceEntity(8U);
    msg.setDestination(57512U);
    msg.setDestinationEntity(62U);
    msg.command = 59U;
    msg.htime = 0.192144602606;

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
    msg.setTimeStamp(0.854173493468);
    msg.setSource(35762U);
    msg.setSourceEntity(200U);
    msg.setDestination(18801U);
    msg.setDestinationEntity(200U);
    msg.op = 6U;
    msg.file.assign("EPKEZOIURROJSWXSKHLDPCSAVBNMVUWAWAKICBVTJZSAIKHGIUJMTWTTXQNNHBLVPZQYWQOKOTGZFCMYVACNXMHLPVIQITGJZZVUKRIFWJNFRYRVXTNJNDBYPFMLUEHTSXDMLDEQYJEECMDGOUWBEFDKCVTCGPRGHEGAJBFRUMPXUBZODOOPKEYLRBXLDASFNEYHQYIHLWUXGK");

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
    msg.setTimeStamp(0.210442107201);
    msg.setSource(24266U);
    msg.setSourceEntity(209U);
    msg.setDestination(5970U);
    msg.setDestinationEntity(209U);
    msg.op = 166U;
    msg.file.assign("NGNJOPCHJSNRCZGFSFYFRXDWKCSSXMEAYICABOWEKBTBNDDWGYODCKBSIHYTNAOQZJRQIJZHFTVPZRQTWYPYWUXWRSUHPYMBFZPORKULJMGLPUBGYLVECAFITFDROCFMTVJBXNHAOKANNJWCGVEPHJNTRBMHYQUCUQPMUIMKM");

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
    msg.setTimeStamp(0.58901519946);
    msg.setSource(23247U);
    msg.setSourceEntity(58U);
    msg.setDestination(21925U);
    msg.setDestinationEntity(22U);
    msg.op = 188U;
    msg.file.assign("ZJCSHDHYMLVRFVVQFTYDZATIVXWBEMOGOPCNNSZOPSXJYDPXULWPUIGEJQHNNCGAZVJBHTNOYSSBZKLXJYGIUIFZKCZTZLKLLBQMQJSREHKAQKSREXGVCIGGWTYJAEJDEYSABMLFTCRPFVMAEDPDBNZRHQHNINAAHMWHYOITXYUZRRGXWWGJEQKATBSTYVWMXPOCDLFEMQNHVFKXMMIKBCBUTIDOKCLGJCUNREPAVUFOLRWUD");

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
    msg.setTimeStamp(0.976310774599);
    msg.setSource(12067U);
    msg.setSourceEntity(106U);
    msg.setDestination(55908U);
    msg.setDestinationEntity(11U);
    msg.op = 226U;
    msg.clock = 0.968565171828;
    msg.tz = -65;

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
    msg.setTimeStamp(0.939651714812);
    msg.setSource(48523U);
    msg.setSourceEntity(30U);
    msg.setDestination(12388U);
    msg.setDestinationEntity(166U);
    msg.op = 67U;
    msg.clock = 0.815338874213;
    msg.tz = 74;

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
    msg.setTimeStamp(0.00134251502927);
    msg.setSource(7289U);
    msg.setSourceEntity(130U);
    msg.setDestination(63403U);
    msg.setDestinationEntity(247U);
    msg.op = 37U;
    msg.clock = 0.881179164709;
    msg.tz = 115;

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
    msg.setTimeStamp(0.539419120482);
    msg.setSource(26202U);
    msg.setSourceEntity(161U);
    msg.setDestination(7501U);
    msg.setDestinationEntity(52U);
    msg.conductivity = 0.243915675766;
    msg.temperature = 0.671189473922;
    msg.depth = 0.941379223434;

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
    msg.setTimeStamp(0.940720962279);
    msg.setSource(42375U);
    msg.setSourceEntity(199U);
    msg.setDestination(53828U);
    msg.setDestinationEntity(214U);
    msg.conductivity = 0.725538662592;
    msg.temperature = 0.675662963016;
    msg.depth = 0.967830274997;

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
    msg.setTimeStamp(0.777972014998);
    msg.setSource(48435U);
    msg.setSourceEntity(142U);
    msg.setDestination(42508U);
    msg.setDestinationEntity(147U);
    msg.conductivity = 0.83771085174;
    msg.temperature = 0.90383634013;
    msg.depth = 0.0349400825965;

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
    msg.setTimeStamp(0.411960571553);
    msg.setSource(20919U);
    msg.setSourceEntity(144U);
    msg.setDestination(17400U);
    msg.setDestinationEntity(63U);
    msg.altitude = 0.825411709186;
    msg.roll = 26665U;
    msg.pitch = 5266U;
    msg.yaw = 6597U;
    msg.speed = -2046;

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
    msg.setTimeStamp(0.562700517907);
    msg.setSource(53728U);
    msg.setSourceEntity(49U);
    msg.setDestination(21580U);
    msg.setDestinationEntity(9U);
    msg.altitude = 0.329764346248;
    msg.roll = 22633U;
    msg.pitch = 32134U;
    msg.yaw = 50744U;
    msg.speed = -14274;

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
    msg.setTimeStamp(0.310393393265);
    msg.setSource(55845U);
    msg.setSourceEntity(22U);
    msg.setDestination(15729U);
    msg.setDestinationEntity(96U);
    msg.altitude = 0.652224312716;
    msg.roll = 55695U;
    msg.pitch = 19501U;
    msg.yaw = 27143U;
    msg.speed = 547;

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
    msg.setTimeStamp(0.959193743132);
    msg.setSource(42272U);
    msg.setSourceEntity(240U);
    msg.setDestination(33875U);
    msg.setDestinationEntity(130U);
    msg.altitude = 0.568887073746;
    msg.width = 0.905570948083;
    msg.length = 0.00205031816586;
    msg.bearing = 0.211520502553;
    msg.pxl = 14687;
    msg.encoding = 161U;
    const char tmp_msg_0[] = {-34, 118, -101, -27, 85, 80, -72, -56, -116, 23, 120, -96, -50, -119, -63, -65, -71, 74, 61, -45, 25, 96, 117, -103, 74, -125, 69, 111, -16, -26, 79, 112, 89, -122, 25, -4, -42, 73, -12, 82, -46, 44, -53, -76, -100, 7, -114, 89, -122, 89, -28, 29, 51, 106, 91, -99, 26, -108, 70, -73, -98, -38, 11, 9, -78, 83, 22, -72, -126, -36, -128, -63, -64, -92, 104, -42, 90, 119, -114, -45, -68, 122, 111, 67, -96, 96, -75, -94, 119, -90, 80, -66, 71, -99, -110, -84, 43, 102, -10, -46, -66, -41, 112, 79, -7, 70, -87, -11, 15, -97, -67, -64, 61, -21, -105, -21, 9, -68, -127, -37, -60, 49, 118, -73, 3, -3, 57, 84, -29, 99, 50, -114, 77, 32, 22, -85, 58, 113, -46, 28, -62, -89, -108, -85, -107, -10, -9, -25, 63, 13, 84, 115, 102, 4, 45, 102, -107, 67, 46, -114, 13, 57, 53, -128, 49, 73, 83, -45, -107, -72, -104, 15, -31, 114, 20, -22, -50, 114, 104, 106};
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
    msg.setTimeStamp(0.131772739552);
    msg.setSource(5785U);
    msg.setSourceEntity(130U);
    msg.setDestination(7224U);
    msg.setDestinationEntity(22U);
    msg.altitude = 0.308064767688;
    msg.width = 0.665946027314;
    msg.length = 0.385198720057;
    msg.bearing = 0.00709673368601;
    msg.pxl = 32650;
    msg.encoding = 245U;
    const char tmp_msg_0[] = {-53, 81, -10, 74, 121, 87, 101, -116, -22, -108, 52, -16, 93, -100, -115, 68, -17, 0, 7, -93, 73, -116, 6, -74, -9, -97, 85, -111, 119, 98, 67, 79, 14, 46, 97, -107, 56, -68, 82, -11, -21, 54, -43, 123, -35, -10, 45, -57, -27, -57, -94, -87, 96, -37, 99, -78, 14, -97, 67, -37, 121, -23, 92, -63, 64, 75, 22, 57, -128, -100, -118, 111, -34, -37, -109, -11, 126, 45, 112, -111, 113, -20, 111, 71, -41, 113, 99, -43, -21, -41, -32, 117, -21, -26, 25, -94, 107, 45, 7, 116, -18, 125, 49, -120, -92, -76, 35, -59, -20, 76, -92, -27, -12, 30, 28, 84, 55, -50, 22, -93, -49, 78, -111, -35, -60, 7, -56, 80, 48, 6, 88, -103, 96, -54, 96};
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
    msg.setTimeStamp(0.936194159106);
    msg.setSource(65018U);
    msg.setSourceEntity(150U);
    msg.setDestination(20776U);
    msg.setDestinationEntity(71U);
    msg.altitude = 0.0709776600513;
    msg.width = 0.478448005119;
    msg.length = 0.4667071484;
    msg.bearing = 0.64496709943;
    msg.pxl = 13694;
    msg.encoding = 188U;
    const char tmp_msg_0[] = {69, -74, -118, -87, -84, 19, 50, -56, -42, 58, -55, -35, 42, -2, -44, -8, 114, 60, 85, -65, 53, -11, -114, 92, -55, -100, 28, -89, 104, 8, 45, 112, -5, 27, -46, -107, -73, 92, -49, 56, -102, 103, 18, -35, 12, 96, -9, 82, -47, -11, 77, -55, -62, 78, -87, 8, 125, 8, -96, -109, -110, 119, 0, -27, 27, 30, 84, -9, 11, 6, 57, -100, -76, 54, 20, -22, -21, -31, 105, 107, -22, 107, 61, 21, 1, 116, 51, -7, -126, 24, -20, 112, 94, -11, -80, 67, 95, -3, -67, 20, -92, 1, -71, 40, 61, -2, 107, 23, -68, -60, -15, -54, 84, -5, 84, 53, -99, 81, 93, -82, -72, -39, -24, 65, 123, 44, -33, 96, 27, 106, -75, 62, 65, 67, 64, -29, 61, 66, -62, 107, 18, -26, 55, 80, -29, 45, 58, 103, 43, 87, 91, -122, 1, 26, 5, 5, -125, -101, -63, -107, 106, 58, -39, 109, -36, 99, -114, -109, 118, 78, 108, 126, 109, -71, -17, 55, 22, 40, -91, 49, -12, -87, 35, 105, -109, 98, 41, 47, 41, 85, 63, 42, -81, -40, -99, 81, -50, -29, -23, -110, -117, -76, 122, -57, -64, 118, 115, 126, -78, 29, 125, 57, -85, 42, -99, 65, -120, 6, 104, -58, -55, -90, -94, -37, 0, -41, -69, 22, 109, -36, -34, 40, 63, 124, 118, 110, 97, -30, -16};
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
    msg.setTimeStamp(0.942518555413);
    msg.setSource(24484U);
    msg.setSourceEntity(117U);
    msg.setDestination(64816U);
    msg.setDestinationEntity(16U);
    msg.text.assign("FEOAXQNCJXAVMJWAPINCYASKRJSNSEZLYPPYCKCUVKLUIZZHGLRMWYDBZUHRVVWZTOKAQTJLNFIWSPSROMFTQMIFWKSEIOUCFDWDYDITMOUZMSCIQGVFEGZALWHEXBABQFBXFTEBJXL");
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
    msg.setTimeStamp(0.507154682536);
    msg.setSource(26411U);
    msg.setSourceEntity(155U);
    msg.setDestination(31009U);
    msg.setDestinationEntity(113U);
    msg.text.assign("HWHGYEYUVJRYMASUFHRBJWKGRZBYFRRWITNOIKUDMXITKCGROGLANMVWQTXCPAZVJOJTDZIIKTEFSEBCWHMAHLZOQCBEUIUBAPAPYNZJTJOMPHNGWULVGXEYSNKXIGWL");
    msg.type = 82U;

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
    msg.setTimeStamp(0.0488053414597);
    msg.setSource(18536U);
    msg.setSourceEntity(230U);
    msg.setDestination(32570U);
    msg.setDestinationEntity(19U);
    msg.text.assign("BWVGDDTDYKWXDLHLONZWISPCEFNUEGRMXSCQGRBWTIDMBVPOGJVOLGCPQZTJZGYZSFLNYLOQGRXEHEHVMKJVNKMPEYWXUFQFOPRFNSQWACPY");
    msg.type = 234U;

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
    msg.setTimeStamp(0.644521594535);
    msg.setSource(53496U);
    msg.setSourceEntity(221U);
    msg.setDestination(46881U);
    msg.setDestinationEntity(34U);
    msg.parameter = 153U;
    msg.numsamples = 177U;
    msg.lat = 0.178104178289;
    msg.lon = 0.611844675117;

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
    msg.setTimeStamp(0.713599034944);
    msg.setSource(15206U);
    msg.setSourceEntity(150U);
    msg.setDestination(38121U);
    msg.setDestinationEntity(145U);
    msg.parameter = 71U;
    msg.numsamples = 146U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 45599U;
    tmp_msg_0.avg = 0.86152981342;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.491768936188;
    msg.lon = 0.415115737431;

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
    msg.setTimeStamp(0.241283041267);
    msg.setSource(34388U);
    msg.setSourceEntity(34U);
    msg.setDestination(22768U);
    msg.setDestinationEntity(6U);
    msg.parameter = 179U;
    msg.numsamples = 87U;
    msg.lat = 0.387260468767;
    msg.lon = 0.378295043987;

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
    msg.setTimeStamp(0.0147095935117);
    msg.setSource(9894U);
    msg.setSourceEntity(130U);
    msg.setDestination(59267U);
    msg.setDestinationEntity(238U);
    msg.depth = 58365U;
    msg.avg = 0.897783464421;

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
    msg.setTimeStamp(0.966601922361);
    msg.setSource(59241U);
    msg.setSourceEntity(232U);
    msg.setDestination(44274U);
    msg.setDestinationEntity(195U);
    msg.depth = 39897U;
    msg.avg = 0.982451194896;

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
    msg.setTimeStamp(0.455419633851);
    msg.setSource(63457U);
    msg.setSourceEntity(114U);
    msg.setDestination(59860U);
    msg.setDestinationEntity(230U);
    msg.depth = 55376U;
    msg.avg = 0.0831267900545;

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
    msg.setTimeStamp(0.606128975662);
    msg.setSource(34826U);
    msg.setSourceEntity(88U);
    msg.setDestination(52455U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.282399672375);
    msg.setSource(12662U);
    msg.setSourceEntity(252U);
    msg.setDestination(54190U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.811238593674);
    msg.setSource(15596U);
    msg.setSourceEntity(210U);
    msg.setDestination(44746U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.150365878065);
    msg.setSource(19700U);
    msg.setSourceEntity(145U);
    msg.setDestination(28989U);
    msg.setDestinationEntity(122U);
    msg.sys_name.assign("JYPFBIJAYMEHWOIBXCKEPGZXCZTOQJEJBELVXDHSYUV");
    msg.sys_type = 194U;
    msg.owner = 62697U;
    msg.lat = 0.99159279059;
    msg.lon = 0.88987653839;
    msg.height = 0.108295596648;
    msg.services.assign("TECINPYFPPIALTZXJDOMPUASAHYAKVZDUCSNMLXGGMFCROIWCSZIZMFFFPMGVLRMDAEQNOWVCHGNVVJPINDJMPKWETNUOFQQZYTTECHUKZYQGEHPOJJSRVFCQHIUKBCBAKLODNWLGXKSYXHTGRDRNYTJZPVDZINDZEABHKYLCQWJQXOSXMBFHSIXQMTBVEHTDJPHWLKGLKENQKDSOOFUUVSULYRARLWXEOUXRBUFMJJGASACTIIVREBXRWBZBB");

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
    msg.setTimeStamp(0.514022898536);
    msg.setSource(33216U);
    msg.setSourceEntity(97U);
    msg.setDestination(41230U);
    msg.setDestinationEntity(117U);
    msg.sys_name.assign("FLKCEQJBXHMEAFRCVVONOJTTLDPWFDRWZEXPYOSEFCRQKNPXVFDLBDTJUUQDMYN");
    msg.sys_type = 49U;
    msg.owner = 36941U;
    msg.lat = 0.304604899362;
    msg.lon = 0.836329340839;
    msg.height = 0.554833907823;
    msg.services.assign("XQEYBKQOPIHAGIFATMXEXOLMKHSISOKLGKGILZFIUUBWTCEQVUXOLADSTKQVDUT");

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
    msg.setTimeStamp(0.0581548429613);
    msg.setSource(58121U);
    msg.setSourceEntity(107U);
    msg.setDestination(29011U);
    msg.setDestinationEntity(251U);
    msg.sys_name.assign("VVPRQSGVKGIJKSOULCPXWIFMXWIIQADQRZUDACVXCTFLUFKFMAIUZHRHZJGXCMKHZBWENQXJLNKPXBYOTGVFMRYTUDVBPEQTESIFXNBOTALEYTJIBHHNZUSJESGCWLVAUZOBOAJUEXSPLZTZUMMAYBXVDRMGGNKMINKWLNSDGWFEWQYKOHRRDEJPSFZCOPCBDTOKLTNDWURKFYNBDDQASYSJCFRPGAZPLHWMQGEQHMXLCYHYNIOBOEA");
    msg.sys_type = 216U;
    msg.owner = 22436U;
    msg.lat = 0.994842637882;
    msg.lon = 0.477449400353;
    msg.height = 0.29922718571;
    msg.services.assign("DLMMWGVORZYXDSSUKKIUVJCNLFHHMEDWRMSWXOAORVJPZWZOJFIJGHOMHZWNVNBUENJFYNKC");

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
    msg.setTimeStamp(0.949174043115);
    msg.setSource(60298U);
    msg.setSourceEntity(227U);
    msg.setDestination(45082U);
    msg.setDestinationEntity(10U);
    msg.service.assign("TCAEOXFIWRARHVYBEBQTIUEBTWGYCPHGLWQVFBNTDQSOLBUXZAOVYGMHJUOLBUSKALPEGF");
    msg.service_type = 44U;

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
    msg.setTimeStamp(0.960727929416);
    msg.setSource(25166U);
    msg.setSourceEntity(116U);
    msg.setDestination(1722U);
    msg.setDestinationEntity(158U);
    msg.service.assign("ICTAXYZFMKFFYKLNOGLDSYJMZEJNROPAWODGLBHZWRKGUIJSSMBYWGMURNKNLHDJESTXNQTKUZEMWCYKWOIGIMULOHSTZQPCOTFJIJCDHVCGLYAAAAZQZMEUSNFPYJBHDTMDURHLXFXD");
    msg.service_type = 12U;

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
    msg.setTimeStamp(0.579060204446);
    msg.setSource(63036U);
    msg.setSourceEntity(191U);
    msg.setDestination(58302U);
    msg.setDestinationEntity(184U);
    msg.service.assign("VKPREPKYSQYZRVVNZPHXZDSRGLIDQKAEQWTWSDFOYTGWUWAZHELOBNRBTRSHUCHGXMAIMVPCQIAJZKDJWFBQSIICEPUGNAWVUNZKEKOGYDJEJOJDWOLUMXMICDOIGMBYCPSYXBKRTQAYONNTIRULWKTPOPH");
    msg.service_type = 90U;

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
    msg.setTimeStamp(0.384641670269);
    msg.setSource(39758U);
    msg.setSourceEntity(21U);
    msg.setDestination(14613U);
    msg.setDestinationEntity(44U);
    msg.value = 0.550412143144;

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
    msg.setTimeStamp(0.211845735496);
    msg.setSource(53181U);
    msg.setSourceEntity(252U);
    msg.setDestination(8005U);
    msg.setDestinationEntity(168U);
    msg.value = 0.382600995868;

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
    msg.setTimeStamp(0.327491300526);
    msg.setSource(16973U);
    msg.setSourceEntity(122U);
    msg.setDestination(7695U);
    msg.setDestinationEntity(76U);
    msg.value = 0.925204515603;

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
    msg.setTimeStamp(0.269494498283);
    msg.setSource(56589U);
    msg.setSourceEntity(205U);
    msg.setDestination(53226U);
    msg.setDestinationEntity(109U);
    msg.value = 0.393879799516;

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
    msg.setTimeStamp(0.817073227182);
    msg.setSource(64668U);
    msg.setSourceEntity(196U);
    msg.setDestination(17414U);
    msg.setDestinationEntity(219U);
    msg.value = 0.86868928279;

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
    msg.setTimeStamp(0.319225889566);
    msg.setSource(34142U);
    msg.setSourceEntity(117U);
    msg.setDestination(65311U);
    msg.setDestinationEntity(9U);
    msg.value = 0.536172274832;

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
    msg.setTimeStamp(0.251840358018);
    msg.setSource(19806U);
    msg.setSourceEntity(101U);
    msg.setDestination(40803U);
    msg.setDestinationEntity(227U);
    msg.value = 0.706496926343;

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
    msg.setTimeStamp(0.679775342714);
    msg.setSource(52703U);
    msg.setSourceEntity(188U);
    msg.setDestination(33281U);
    msg.setDestinationEntity(22U);
    msg.value = 0.21648728106;

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
    msg.setTimeStamp(0.919538422991);
    msg.setSource(49334U);
    msg.setSourceEntity(159U);
    msg.setDestination(4847U);
    msg.setDestinationEntity(47U);
    msg.value = 0.84602658814;

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
    msg.setTimeStamp(0.417609384246);
    msg.setSource(12778U);
    msg.setSourceEntity(69U);
    msg.setDestination(45420U);
    msg.setDestinationEntity(197U);
    msg.number.assign("RUREPHUSJCHKTMVVSUAZVNOJCHAVYWODYTPYNELXQPXEPHWIURZIADMAFSUMDRODLKCRXUYXJHKHIYTNQDECAWGNX");
    msg.timeout = 48869U;
    msg.contents.assign("BCDNTYWTNFVGBHGFJSWQPOJQNAKRZDZQOOKLUDASUOPLESUQEI");

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
    msg.setTimeStamp(0.0134355902092);
    msg.setSource(40925U);
    msg.setSourceEntity(190U);
    msg.setDestination(29205U);
    msg.setDestinationEntity(186U);
    msg.number.assign("VLNOXDEYKCMUTJQRCLWHVXJXVFBDRZMREOSZYNGRBKZYHQSXSUMYPPBUTTHJATZLSRWWBADIYTPBAYIBMPBPVFIOZLBAKFOADVEECIGAXGPQOQOJSNKLOCGLTXGRBDWOKWFPQHICYKJVEKXSUGLZZKNSPRDFMHMMKZFNETQNCWWURMDSRFIGYZTDDUXMDVMPLJBQEWIOFXXUQIYUQ");
    msg.timeout = 15926U;
    msg.contents.assign("FHBIFPUNAOXWTKUFJWYBXBWQUHCAEZODAODOIFHCVDNTSTYUWGDIJMZQYZTEHTXVRPRFXRCZQVQNJOSUEGLASTYCVVJOSFNEMZMXBWLFKTSEKEZZKVIAYSLIZFMUXITQBJVKTRYSVNRMQ");

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
    msg.setTimeStamp(0.0293425875647);
    msg.setSource(61598U);
    msg.setSourceEntity(240U);
    msg.setDestination(11004U);
    msg.setDestinationEntity(101U);
    msg.number.assign("STNXCGRPYRUZYWVEOAJFTBYPVKTTBDLVJBQQFZJFCVYZBAJUIURXGXUBKAPGKQNIALDFWEMITNFKOOUNEGBZQJKUOBKYZHQSNPEMLYGOIXKWUPLUIRMDEQJMHOD");
    msg.timeout = 63840U;
    msg.contents.assign("GXTIEKMAVOHKLONYWIWYVHVDNMLBAWCYDBAERMWGIGMADAHTEMYOCHOOBMFPOFXTXZZQOAIURRYLYPSVDQRSNDJEJNLSWBLTUXZUUBVQJXNZQPVTLOHIVDIEHRFYBMTPZICCENGGYSCKQFKQNTWIKPJAGZFMMHPNODWZFRFJJLPTJVAQBWCGXXSCDKUJ");

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
    msg.setTimeStamp(0.67923063903);
    msg.setSource(59455U);
    msg.setSourceEntity(29U);
    msg.setDestination(41467U);
    msg.setDestinationEntity(142U);
    msg.seq = 540145402U;
    msg.destination.assign("GNKVTOXIECUNQNZQMHKPFKFARWRDUZKXBCOSDSJVXSJVOMYNXHUGPFQJRMWDSHMQXXHQCWZOZNUINOVQTESNUPULTREGQYVIKGVUTOSSMYTCWGPYDFYHBJPILMXBJKBTICBXVFEACRGVAIURHDWQHCBKLJOBRGNCACELEPSWSAVXIGGWKOYZGQSQLDAAFZKDTJEAPHZBJKIFZYOYFMZRBLWDPVLRLHEDNRPHMW");
    msg.timeout = 14679U;
    const char tmp_msg_0[] = {20, -34, 22, -45, 61, 88, -116, -112, -89, 44, -48, 22, 125, 42, -1, 35, -124, 39, 10, 36, -117, 60, -113, -10, -108, -80, -97, -12, 77, -38, 54, -104, -127, -64, 12, 2, 91, 62, 78, 30, -60, 59, 125, -88, 25, 84, 107, -77, 57, -45, 45, 17, -16, -12, 25, 13, 48, 2, 99, -59, -73, -126, 122, 107, -126, 50, 65, -122, 110, -93, 117, -70, -33, 32, 103, 112, 61, -87, -51, 71, 41, 23, -34, -40, 126, 56, -51, 53, 98, -83, -37, 32, 87, -40, 91, -109, -47, 53, 10, 103, 112, 78, 85, 72, -81, -50, -108, 15, 101, 124, 104, 78, 72, -73, -46, 97, -124, -122, -60, 6, -105, -84, -14, -117, -78, -121, -32, 91, -88, -118, -97, 121, -83, -18, 32, 82, -102, -102, -11, -66, -97, -60, 19, -105, -53, -70, -103, -58, 92, 47, 19, -77, -109, -126, -70, 97, 120, -29, -85, 27, -58, 58, -29, -42, -10, -124, 96, -67, -83, 9, -59, -68, -27, -39};
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
    msg.setTimeStamp(0.919115375059);
    msg.setSource(9025U);
    msg.setSourceEntity(77U);
    msg.setDestination(5375U);
    msg.setDestinationEntity(15U);
    msg.seq = 2300376039U;
    msg.destination.assign("EKVYOSXJYUYCCVDOWHLFCTHOKBBNRXKFFUBJDQEIPJAZURIPVDDLSOYMIKPGPRASDPLCAMOFWQWMPMWJJTVZNHASEITGIEWEMLALMGDAPBOGBJFNNDTFFMVABLLZSEKGASYUPWOOWIUCGEFTZTGVXQRKZVBNTTEFDHZZBIXCJRRRWOXMUKJBXGKPHUNYQBQNGZASLREQYTWLVMVELQZIQSHKFXYZPVCUANJCHWSYIXJCIDQNGYKNQCUTUDXHM");
    msg.timeout = 35420U;
    const char tmp_msg_0[] = {-96, -11, 104, 67, -99, -116, -31, -4, 51, -34, -50, 60, -124, -23, -80, 48, 33, 92, -57, -45, 81, 88, 69, -47, -51, -112, -58, -92, -108, -87, 68, -6, 12, -70, 84, -66, 125, -88, -53, 28, -89, -87, 95, -44, -43, -54, -80, -70, -125, 85, 57, -13, 3, -105, 100, -76, -66, 13, -117, -24, 86, 99, -55, -5, -119, 78, -77, -46, 109, -41, -41, -98, 61, -69, 97, 115, 108, 61, -51, -71, 67, 71, 85, 71, 89, -30, -120, -24, -82, -61, -14, 72, 60, 108, 103, -18, -52, 116, 9, -55, 50, 20, -112, -52, 88, 16, 43, 11, 11, -22, -98, -54, 42, -44, 99, -41, 95, -118, 22, 3, -101, 66, 9, -24, -95, 88, -2, 77, 20, -125, 121, -92, -114, 101, 94, 30, -66, -33, 87, 93, 81, 124, -11, -32, -49, 109, -86, 98, -11, -83, -104, -40, -42, -106, 92, -106, -22, 2, -126, -106, 75, -78, -3, 88, 87, 106, -69, 81, 80, 87, -116, -96, 82, 18, 77, 37, 14, -61, 66, -34, -117, -23, 117, 99, 76, 15, 105, 19, 82, 112, -36, 35, -115, 24, 34, 43, 111, 40, 33, -97, 93, -55, 105, 33, 93, -96, -81, 24, 98, 24, 52, -65, -81, -6, -45, 110, 106, 25, -106, -100, -7, -33, -123, -80, 24, 43, -94, 76, -53, -68, 109, -118, 64, 75, 101, 112, 49, 102};
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
    msg.setTimeStamp(0.620391918137);
    msg.setSource(55827U);
    msg.setSourceEntity(186U);
    msg.setDestination(22376U);
    msg.setDestinationEntity(50U);
    msg.seq = 2497923489U;
    msg.destination.assign("SBFTFBGWVAURRXVVJLLHISKTAENHOLNBNHRXANNGDYRJUGIEQQQMUBMPXKVCQEGQAWTKJSDPSBDUOFWOZXTMIPFQSKTUPQFLYGIHCTLHLBKUVDYTQWEFDUNLYZERWJPNCQLJHROSOACSDELMDKUJWWRSIOOQBFJXXDPUWZPSZFVDBGCYJHYZNVZHIYTXZPXEKSYEIPPVMLKAJZGKHAJXRCGCBMVEOZAZWMHCRTVAGYGMKOEDRXMTIC");
    msg.timeout = 53485U;
    const char tmp_msg_0[] = {12, -15, 75, 54, 19, -30, 124, 45, -94, 115, -89, -112, -47, 70, 63, -117, -53, -81, -16, 51, -93, 25, -85, 126, -70, -96, -43, -121, 0, -100, -15, -83, -71, 90, -90, 108, -57, 104, 68, -20, -4, -94, -91, -50, -121, -49, 37, 52, -80, 43, 33, 3, 124, -84, -119, -20, -56, 44, 71, 51, -101, -8, -118, -55, 40, 87, 41, -109, -47, 45, 14, -100, 111, 125, 91, -79, 26, 30, -85, -109, -126, -63, 17, -23, 75, -83, 15, -13, -5, -90, 68, -30, 51, 35, -44, 58, 27, 3, -71, 76, 36, 75, 83, 104, 12, 26, 121, -43, -93, 92, 29, -11, 111, -5, -101, 37, -127, -45, -62, 25, 11, 0, -105, 36, -43, -1, -16, -44, 11, -44, -10, 88, 76, 115, 85, 107, 28, 69, 30, -94, -26, 126, 71, 91, 69, 1, -35, -98, -27, -97, -120, -61, 83, -32, 53, -72, -62, -67, -92, -19, -111, -78, 114, 77, -107, 13, 124, 65, 38, 88, 55, 20, 71, 71, 5, -31, 62, -105, -38, 2, 115, 35, -93, -13, -61, -61, 57, -52};
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
    msg.setTimeStamp(0.934967895138);
    msg.setSource(28557U);
    msg.setSourceEntity(121U);
    msg.setDestination(11922U);
    msg.setDestinationEntity(120U);
    msg.source.assign("QJTZWJRGEN");
    const char tmp_msg_0[] = {104, -89, 113, 65, -6, 92, 52, -43, -108, 28, -41, -61, -87, 84, 123, 109, 78, 22, 101, 28, -67, -37, 74, -111, 73, -77, 55, 88, -105, -71, 108, -12, 88, 112, 14, -62, -82, -23, -100};
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
    msg.setTimeStamp(0.564488539433);
    msg.setSource(16235U);
    msg.setSourceEntity(19U);
    msg.setDestination(38319U);
    msg.setDestinationEntity(237U);
    msg.source.assign("NKTIVEZCRXZGDWQEMOKAYNAWXOUGUWKTKIMJOBHTPYNZXEOUSBKSJQUISSFZXWAGCYJEVACXXCZBGRZAEHQOYSEKLJIIECTWXJLRBINAHWPDMNSWIRJMUTKGKTPPOYPVPZFHAJDUPTVLUHBOSNYMHPBPFGQLLYRRXMYMLMFFFVSDUSXJQVVTAFGUZCCDERLBLGREQHENFVVIQY");
    const char tmp_msg_0[] = {-118, -111, -14, 71, 1, -97, 91, -55, -10, 56, -114, -10, -52, 9, 95, -99, -18, -15, -20, -14, 97, -12, -40, 36, 91, 3, 63, -116, 10, -101, 48, -29, 85, 77, -79, 95, -40, -19, 38, 58, -95, 4, -43, -86, -16, -74, -89, 83, 87, 27, 114, -126, 121, 118, -19, -90, -114, 110, 35, 122, -44, -15, 36, -72, 83, -98, -112, -53, -10, -69, 27, 42, -45, 123, 44, -54, 50, 6, -70, -41, 25, 49, 75, -51, -24, -90, -128, 68, 114, 102, -37, 6, -34, -6, -108, 63, 65, 117, 26, 119, 79, -115, 61, 42, 35, 11, 65, 111, 69, 0, 112, 85, 80, 112, -112, -92, -52, -48, -18, -35, -36, 100, 94, -1, 21, 93, 123, 65, -65, -96, -105, -21, -18, 12, -57, 110, -9, -72, -54, 42, 23, -28, 23, -12, 121, 21, 18, 107, 65, 99, -110, 68, -80, 9, -92, -50, -1, 11, -49, 28, 77, -82, 35, 76, 4, -122, 10, -80, -63, -54, 122, 65, -6, -59, -110};
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
    msg.setTimeStamp(0.81128438251);
    msg.setSource(48279U);
    msg.setSourceEntity(17U);
    msg.setDestination(5729U);
    msg.setDestinationEntity(193U);
    msg.source.assign("NHAUYRYWPJJWPSWCQHMLICT");
    const char tmp_msg_0[] = {58, 29, 48, -11, -108, 94, 21, 38, 26, -124, -49, -41, 101, -19, -82, 72, -23, 74, -20, -50, -54, 82, 122, -49, -69, -37, 95, 90, 60, 102, 56, -38};
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
    msg.setTimeStamp(0.629438109629);
    msg.setSource(40980U);
    msg.setSourceEntity(134U);
    msg.setDestination(5973U);
    msg.setDestinationEntity(87U);
    msg.seq = 3902650501U;
    msg.state = 203U;
    msg.error.assign("EGQGZXSWXIFBQQUISYJVBXZZEMKHFAQDVNSAMRUTDFGWHCPVOHQGSKVJVOMXYBZOAXLFIDPUSWJIAMHEFRXMSASOPRGGCEFAUZLTDGROCNSTDUMLYIWLBJGQZZUZTVYLYTJKRCKHJIIYFBWJQZRLAHMEXPQCNZOIKFMMXKK");

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
    msg.setTimeStamp(0.707927068863);
    msg.setSource(26306U);
    msg.setSourceEntity(193U);
    msg.setDestination(5023U);
    msg.setDestinationEntity(195U);
    msg.seq = 335137887U;
    msg.state = 20U;
    msg.error.assign("MKKQOFSDFTKCNQVXUSXYQRRLCLGRBYDENJVMXWQODHUNECMEAPWBJYJ");

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
    msg.setTimeStamp(0.339955115126);
    msg.setSource(7809U);
    msg.setSourceEntity(197U);
    msg.setDestination(48991U);
    msg.setDestinationEntity(240U);
    msg.seq = 623114581U;
    msg.state = 164U;
    msg.error.assign("HHKNJUETUCJUQPJFUFPDSCWAWOWVCAPFKDMFRLEORZTLODRKBEXCHAGLYCGLBJMSSVHJXAGZLMDSASLYNZVNPEZQUNOZVMJVINHZSXEYKWKFMOCSHTIECCXGMAXVQYPLZBAPQCJEDHKXIWTIELUXSYGOZZBOGHYEIGDIKGOWFVMLLITYDXHNUJOCDWMB");

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
    msg.setTimeStamp(0.103290194519);
    msg.setSource(24950U);
    msg.setSourceEntity(109U);
    msg.setDestination(14708U);
    msg.setDestinationEntity(53U);
    msg.origin.assign("OENTJWUVKVJJJVPRTUBWMHWBXOOSEXAAIQOTTKIGGYNSTRGHNUFRWTHLMQCOYBJTRAUXFSBFIQSUQNTKEADFTBZLYPVLDNZAPHRAIQMPRGJLUEFBRPMXXMKHNYHYBJDCZCQSJFVWMEXSPALLMQIGXFMSNYSXMHBWECDPOWWOUGVIOETDYJAECNYSKYVZXJICNFCZCWHDYDZOULBNIQCVMHDDAKZHPRSWIGEQKFCEGRUAVQDZBGKLIV");
    msg.text.assign("NEVZPBJCDZCFCLBKYXIPCRSFGQPYGSWFMHEPFJQAFHNRVMYMGUZZISXWGWBSLDWSDBFFY");

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
    msg.setTimeStamp(0.56994897702);
    msg.setSource(26773U);
    msg.setSourceEntity(89U);
    msg.setDestination(14575U);
    msg.setDestinationEntity(46U);
    msg.origin.assign("ARQDGPOFSNZESDKDZNLAPKBQPSKLHXUAGHANHDWXFPYGRLTQITUYUOSJEWZWCTVKCOHLPTRY");
    msg.text.assign("HAMPVTGEOEQAYJUWIRUICUZVGWNWRAPGVVPKPEOMWWDAXLMKXZEQXANZCYPUGYDRFLQQFUIWYCUFZJADAZCQKDTGHHQJORTMTYSSERPDKTIJLBTMKCHPSVZHBJACWXKRXUQHBBEGTFLQDZWNYDLKJIVNOVEBH");

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
    msg.setTimeStamp(0.0740180633131);
    msg.setSource(49615U);
    msg.setSourceEntity(147U);
    msg.setDestination(54151U);
    msg.setDestinationEntity(149U);
    msg.origin.assign("OUPCURSOUMJGKBCFVHJTIZCGLBKCFMKSJWOOPMSEBBBU");
    msg.text.assign("SQZNBAKEFPJSQYMHWBTLZBDAHXDJJGHXNBTZWISKAEORCGDXKEYAKFZXEUELAOIPOTJWPVU");

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
    msg.setTimeStamp(0.521138925571);
    msg.setSource(32928U);
    msg.setSourceEntity(173U);
    msg.setDestination(32831U);
    msg.setDestinationEntity(2U);
    msg.origin.assign("HFEWXCLEANXDMCRQJPUQLXJUJWXWGVPYJQRWIGVPAKFIXOYOBZTLPSJZYJZKLRIPLJGFJURIANAWPFZTNDUAYSUWSYKKSVHOQLWWNZKTCSYDCLRFEIGHQXBUUGQKBLHSGCEEEKSELNKOKOMRSOKMBAARFEVDZTVFXAPAXIDMDPIVSMPO");
    msg.htime = 0.115460555511;
    msg.lat = 0.582946875128;
    msg.lon = 0.0960878193728;
    const char tmp_msg_0[] = {-14, 84, -71, 7, 49, -49, 54, 56, -57, 19, 42, -121, -25, 112, -50, 100, -17, 94, -40, -128, -46, 55, -42, 94, -121, -95, 39, -80, 52, -32, 112, -127, 29, -35, -68, -74, -30, 15, -103, -67, -121, -8, -3, -17, -83, -17, 15, 11, -47, -6, -89, 117, 105, -8, -103, -60, 55, -100, 1, 3, 34, -22, 3, -97, -15, 26, -47, -80, 105, 32, 33, -104, -56, 117, 121, 5, -56, 107, 79, -71, -12, -80, 32, 113, -128, -103, 108, -31, -42, 41, -85, -108, 60, -103, -127, -11, -45, -103, -84, 1, -39, -81, -60, -73, 30, -53, 60, 45, 52, -32, 111, -113, -114, -76, -40, 121, -39, -71, -67, 101, -102, 49, 23, 3, 10, -49, 54, -33, 63, 52, -91, -124, -57, 43, -31, -79, 35, 38, -78, 74, 104, -84, -13, 51, 40, -16, -73, -126, -16, 31, 37, -127, -52, -88, -120, 12, 87, -8, 73, -122, -112, -122, 98, -100, -9, -86, -72, -115, 92, 2, -1, 21, 107, 51, 58, -119};
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
    msg.setTimeStamp(0.993055370112);
    msg.setSource(52744U);
    msg.setSourceEntity(93U);
    msg.setDestination(39241U);
    msg.setDestinationEntity(108U);
    msg.origin.assign("AHLXNDDOGTNCRUHCFOURLMDIOYZZTPHKKCZHPBDFHOLEQOWVGUDJIUEUZISYMVNPGUDJNMHXSUFPXBYJIXBFNSVEZKFELXBYEPTGQRTNCTIRVZTCMOMOWIWTRWBARAPCXJHNVHVZRBBQGLVV");
    msg.htime = 0.224979880268;
    msg.lat = 0.0455665376763;
    msg.lon = 0.469169690722;
    const char tmp_msg_0[] = {-100, 17, -66, -8, 103, -91, 43, -90, 33, -23, -31, 104, 25, 0, -33, -64, 44, -52, 77, 11, -116, -40, 1, -51, -128, 82, 13, -102, -55, 82, 126, 22, -49, -112, 87, 115, -36, -92, -128, 1, 50, 87, -65, 22, -30, -92, 89, -36, 39, 92, 82, -81, 117, -125, 13, 2, -124, -1, 18, 77, -4, 45, -16, 12, 62, -60, -128, 103, 6, 49, -97, 83, -94, -72, 120, -27, -44, -109, -35, 92, -8, 23, -100, -95, -29, 2, 104, -34, -117, 4, -123, -42, 65, -109, 12, -127, -19, 15, 87, -81, -39, 25, 25, -9, 15, -49, 83, 0, 85, 103, -84, -87, -50, -84, -106, -125, -99, 53, 100, 34, 126, 3, -70, -82, -59, 122, 82, -100, 58, -57, -80, -80, -119, 37, 65, 122, 91, -44, -98, 33, 73, 100, -36, 15, -20, 119, -69, -28, 91, 115, 81, 13, 40, 62, -37, -25, -120, -23, -47, -62, 25, 71, -10, -66};
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
    msg.setTimeStamp(0.160044712683);
    msg.setSource(13797U);
    msg.setSourceEntity(178U);
    msg.setDestination(10831U);
    msg.setDestinationEntity(204U);
    msg.origin.assign("MAYHAJUPNVPSHGQCVXVCKSMHOZUKIWSYGZTPDEWDXKEJFETEIMXWHTNTGCVZABRFJTMZEIOPAKXJMQTAJKTDJYDBNHQY");
    msg.htime = 0.457047923995;
    msg.lat = 0.736190066282;
    msg.lon = 0.371320842787;
    const char tmp_msg_0[] = {-67, 104, -14, 45, -17, -61, 111, 62, -101, 11, -110, 102, -17, -13, -113, 85, -52, 24, -87, 125, 105, -97, -41, 52, 88, 80, 98, 122, 98, -38, -45, -105, 78, 123, 119, 84, -96, 45, -87, -53, -6, 53, -123, 46, -127, 125, -127, -92, 36, -49, -113, 98, -37, 55, 14, -26, -25, 94, 91, -46, 74, -93, 96, 39, 81, -2, 10, 43, -55, 48, 36, -36, 96, 83, 91, 7, 92, -45, -39, 21, 56, 17, -18, -109, 105, 3, -105, 33, -40, 9, 5, -82, -2, -65, 38, 112, 96, 22, 90, 96, 60, 37, 10, 94, 39, -7, 9, -96, 62, -123, -118, 87, 63, 2, 58, -113, 21, -51, 37, 85, 9, 93, -109, 126, -76, 36, -65, 16, -19, 123, 92, -26};
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
    msg.setTimeStamp(0.149704094431);
    msg.setSource(37085U);
    msg.setSourceEntity(38U);
    msg.setDestination(26245U);
    msg.setDestinationEntity(141U);
    msg.req_id = 5646U;
    msg.ttl = 23432U;
    msg.destination.assign("SBTTHSSVCPGFNCQUUZSFDTAVDMZGLKVHTZVZCQQXXAQDWOHBQZTLUJXGYCRNPQEVBBALJTXQPGUAGSJVIQFKVMMUOAGRJGPBHOADDBYOBAPNLCJJLZYIDZTSRIUGFXTUFMXNPEOYRCDOIKEQYLFLACWRDWHONEWPL");
    const char tmp_msg_0[] = {56, 93, -47, 16, 72, -81, 20, 12, -58, 56, 22, -40, 2, 123, -67, -55, -78, 63, -19, -118, -68, -111, 126, 110, -94, -80, -72, 4, -24, 100, -13, -58, -56, -10, -80, -110, 57, -104, 116, 91, 126, 114, -72, 23, 114, -104, 99, -40, -13, -92, 73, -58, -78, -44, -94, 114, 99, 111, 117, -89, -61, -37, -6, -85, -46, -100, 112, -107, 16, 102, -68, -1, -70, 94, -79, 65, -121, -48, -50, -103, -14, 113, -24, -42, 44, -85, 5, -103, -9, 68, -19, -21, -103, -3, 89, 117, -25, -58, 92, 73, -89, -69, -126, 95, -47, -41, 70, 116, 30, 110, -97, -69, -77, -28, 41, 77, -12, -79, 29, 82, 33, -99, 81, -55, 57, -76, 51, 13, 45, -47, 63, 107, 89, 66, -118, -114, 52, -47, -73, -86, -34, -12, -122, -20, -110, 113, 8, -31, -22, 10, -102, -128, 5, -48, 16, 126, 64, 37, 15, 103, 115, 16, 7, 96, 20, 11, 23, 33, -64, 123, -112, 108, 101, 0, -17, -53, -85, -15, -40, -109};
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
    msg.setTimeStamp(0.874318061173);
    msg.setSource(30134U);
    msg.setSourceEntity(251U);
    msg.setDestination(23145U);
    msg.setDestinationEntity(91U);
    msg.req_id = 42773U;
    msg.ttl = 12710U;
    msg.destination.assign("ALMICKRYAZEDZEGXEKZCFYJOSEOWAQDJKBPVSREBUQTLGOQQASCDFPWHSYFAFYYFBHWXQAYYUBBIQBTGHOQAZXNRGNFKBRPYRTUNIVRTHREUIUVDSAPTNWJTWNLXVZHWIIFJKZSMJNOOTWHCKLKOSXNDBGHMDMZLCXJAGTLKVOXDQHTGISDCEPTENOBPXDMHVNVCVQ");
    const char tmp_msg_0[] = {96, -49, 12, -11, -12, 119, -96, 50, 38, -91, -10, 79, -106, 71, 32, 65, 78, 36, 78, 47, -53, 82, 47, -114, -57, 111};
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
    msg.setTimeStamp(0.587171332436);
    msg.setSource(37065U);
    msg.setSourceEntity(243U);
    msg.setDestination(18225U);
    msg.setDestinationEntity(72U);
    msg.req_id = 55769U;
    msg.ttl = 13049U;
    msg.destination.assign("DOJFOKVTVAYEKFJFODXVOSQSDJSIPQCWGTJFCCMKBGBRXFZAFGHYVXUSCRPFCLPZXNRTQFQVXSWDXECWHKGIREZABJLEVURXOUNJDMFSGVB");
    const char tmp_msg_0[] = {-18, -12, -53, 66, -84, 10, 14, 10, 39, -51, 26, -119, 95, 32, -96, 81, 66, -111, 122, -125, 60, -59, 44, -41, -96, 103, -104, -12, 95, -5, 121, 31, 5, -122, 63, 3, -66, -126, 118, 90, 38, -37, 99, 82, -54, 95, 106, -14, -72, 50, -24, 17, 55, -84, -124, -43, -60, -23, 82, 122, 27, -18, 79, 30, 40, -26, -38, 11, 48, -124, 11, -50, -96, -75, -60, -21, -42, 99, -128, 23, -122, -35, 23, 111, -63, -101, 89, -81, -32, -117, 91, -14, 9, 92, -110, 51, -47, -78, 18, -6, -51, -41, 82, 20, 28, -62, -3, 2, 57, -79, 80, -67, -28, -19, -49, 0, 22, -115, 64, -22, 57, -126, -95, 11, -63, -69, -10, 58, 34, -75, -23, 0, -54, 57, -15, 95, 5, 68, -113, -96, 76, 68, 113, -38, -33, 98, 24, -89, 108, -72, 4, 32, 97, -57, 92, -70, 56, 124, 89, -79, -17, 11, -29, -75, -38, -20, 10, 44, 103, -64, 63, -63, 100, 48, 82, 118, -84, -119, -58, -17, 4, -109, 54, 45, -43, -24, -111, -15, -91, 81, -67, 80, 15, -121, 44, 47, 49, -93, -123, 64, 126, 44, -46, 53, -14, 92, -123, 6, -94, 5, -46, 99, 109, 96, 29, -6, 77, 3, -112, 63, 58};
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
    msg.setTimeStamp(0.744662758879);
    msg.setSource(3889U);
    msg.setSourceEntity(177U);
    msg.setDestination(58089U);
    msg.setDestinationEntity(6U);
    msg.req_id = 1315U;
    msg.status = 18U;
    msg.text.assign("JBOWWASEOPWQLCOOLVHKDZRTCEZOLCBSASBGNUYTQFYTKPYPJAZNKFIMVOEDWVDBXAUZGGHBUNMRDXNZMNSGTYDTALDBPTFHZEVEXWXNIUBUI");

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
    msg.setTimeStamp(0.86913936531);
    msg.setSource(37905U);
    msg.setSourceEntity(183U);
    msg.setDestination(47127U);
    msg.setDestinationEntity(10U);
    msg.req_id = 11826U;
    msg.status = 13U;
    msg.text.assign("RUJQGXJJKMQKHNCXVDIAHYUOUHLTAOYWGLDGPCHTHSYKBRDQZZLOAFFFTLVWLGNSUUMRUZGOGOTGXASBCJAASPQCESADJXPNFPSFYGKCZPMVXUBCBWXEPIJZWIPTHUODOWVDIHVSTSNZLBPDYRVVJCBVSDINUFQLRNTKEJINCREHWYVGYQMRKQZXEDRMFN");

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
    msg.setTimeStamp(0.831651968423);
    msg.setSource(62429U);
    msg.setSourceEntity(119U);
    msg.setDestination(49636U);
    msg.setDestinationEntity(172U);
    msg.req_id = 39715U;
    msg.status = 253U;
    msg.text.assign("PJKBZGFCKZDEOMNGPGWRMYFUCVGVVUOPSMTFMZAAOMXTVXEWGWLBECVRIXXFHDAGMRDOQQHINBTLPYOXHDJZKUCFERIIKSARHCFHNSXZCZLQJRMGAQAYSUHOJRVXJPZTAVKFSQJHZMMXLLDKSTSQCCKQAEDJPJHBIBEFWNUKWGPSNYBFUTZUHLLYOKSXCITNAWAPQLO");

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
    msg.setTimeStamp(0.848426558199);
    msg.setSource(59714U);
    msg.setSourceEntity(241U);
    msg.setDestination(36658U);
    msg.setDestinationEntity(122U);
    msg.group_name.assign("NEHGSBFEOUSYAOUVMUVSASSXODOFDTRTTQRSMGXFACJCJWUJTXWGQODQJWMHTWZYEIDIOFMYKWEUAMVRVKXCDAYRDYCBINKTJLQZHWYPXJFNPQRIXIFANGGPMLKRZIHMPXWLVYGDVSBUZTKQOHNYSGJILWAKABCPPLFLNZIOGD");
    msg.links = 2520519376U;

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
    msg.setTimeStamp(0.313014729331);
    msg.setSource(43014U);
    msg.setSourceEntity(39U);
    msg.setDestination(12399U);
    msg.setDestinationEntity(88U);
    msg.group_name.assign("EYWCWOYCSXKIWYBMPFPNFDFZGLOIJEXMFDHCZZAJDBPRSJHHMSPQCTLIRLFLFTGBRWIINBHFZVCGRNEUZBSXLTHU");
    msg.links = 1211389261U;

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
    msg.setTimeStamp(0.903583777706);
    msg.setSource(62937U);
    msg.setSourceEntity(74U);
    msg.setDestination(8718U);
    msg.setDestinationEntity(24U);
    msg.group_name.assign("ZWOINCFGVIYMIKOGVZDQUKOBPXEGDLLWATZRYZDEJBURMMYOXYLOTXQSGMYFYTLVBZTJZVAEOQNMIGHKUWAJUPRQFNOCQYWRQJSNNYKSNAQAESRBMFEGBKCSALCWPKBCUPZSJFENRCCPVXORTRKOBTYDCXMPVXEFMGNYGAETWZKDDADCBUXWODEJQDSVRIQHGCWPAPPTHJHHUFBHFUKQHBDJ");
    msg.links = 106891654U;

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
    msg.setTimeStamp(0.363624101847);
    msg.setSource(48760U);
    msg.setSourceEntity(252U);
    msg.setDestination(31852U);
    msg.setDestinationEntity(222U);
    msg.groupname.assign("WOHFOSVWJEOBVWUAQWFTSMMGSBVPBXGOYHRCXSKNICQJJRNRLKVJJZEMXALWYFEBPYHNCQFEASJGCVLILQLLBRANGGLCCPSOEMAYIUFHZDKHFPTSDTNAQODIYHYANPHJRDZZJGRPWURVTRKWZFMSMBPJLJUNTPIVEXWIUKZZTTULXDMEUCPGQGCVHUBMYGKVZTOHTLIREMBQEXBKYPFBUKXCNAHQDXEAQNRWFXSII");
    msg.action = 229U;
    msg.grouplist.assign("HPLFYVBNDNIXKATKVLRZOLUJSHFSTDVCFNOXLSK");

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
    msg.setTimeStamp(0.0689051006656);
    msg.setSource(22471U);
    msg.setSourceEntity(54U);
    msg.setDestination(2663U);
    msg.setDestinationEntity(154U);
    msg.groupname.assign("GJVBZQZWNREXYOFXJBGIFZPPWRCOUEHRQVSMQAIMIGYJFADOKZVBFQCHYHUUZONVTETAOBDLRFGPMZVIPNAJKBLAJR");
    msg.action = 192U;
    msg.grouplist.assign("TSSEVTYZTNZXUYBSLRXDWJGCWLKKGJCVUMCPKPPJBEYMFTIHGLEFPNEMXKMJBCBGUETWFFHWMNSMOZHDFVRQBBZHJNWWHLJTOHXJULJYKLDXQNRQSAGQOILZNIHROBRWWPPUCSNIKTSKEESADYOGGFOTVVQLNCAYIOAIJCOXFZAKSZVJACYGGAELTVZDHQFBSBHRPCUEUYQUXRCQZVDWBAUIQRMKUTZXDEMDAALWIGVPDKYMPFINORHQXFRPNO");

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
    msg.setTimeStamp(0.687150043256);
    msg.setSource(36290U);
    msg.setSourceEntity(185U);
    msg.setDestination(60144U);
    msg.setDestinationEntity(192U);
    msg.groupname.assign("JZJJPUOTVBNPRGOKOHUCSFRHRELJBFZAWWMQQFDRGXOSBLLVIFVVVHZ");
    msg.action = 101U;
    msg.grouplist.assign("VCADONDFOKDSHSLBIEIPIE");

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
    msg.setTimeStamp(0.638123830472);
    msg.setSource(27144U);
    msg.setSourceEntity(205U);
    msg.setDestination(61668U);
    msg.setDestinationEntity(72U);
    msg.value = 0.85678167114;
    msg.sys_src = 53063U;

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
    msg.setTimeStamp(0.535653559041);
    msg.setSource(23649U);
    msg.setSourceEntity(42U);
    msg.setDestination(46903U);
    msg.setDestinationEntity(221U);
    msg.value = 0.145784982138;
    msg.sys_src = 8414U;

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
    msg.setTimeStamp(0.251696279836);
    msg.setSource(49952U);
    msg.setSourceEntity(163U);
    msg.setDestination(45685U);
    msg.setDestinationEntity(208U);
    msg.value = 0.614561211103;
    msg.sys_src = 48567U;

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
    msg.setTimeStamp(0.808945627795);
    msg.setSource(64456U);
    msg.setSourceEntity(106U);
    msg.setDestination(13231U);
    msg.setDestinationEntity(217U);
    msg.value = 0.762023290496;
    msg.units = 194U;

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
    msg.setTimeStamp(0.942542052254);
    msg.setSource(26103U);
    msg.setSourceEntity(248U);
    msg.setDestination(34544U);
    msg.setDestinationEntity(152U);
    msg.value = 0.905295721744;
    msg.units = 208U;

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
    msg.setTimeStamp(0.625405146211);
    msg.setSource(45410U);
    msg.setSourceEntity(103U);
    msg.setDestination(48191U);
    msg.setDestinationEntity(76U);
    msg.value = 0.123828820578;
    msg.units = 250U;

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
    msg.setTimeStamp(0.617878478087);
    msg.setSource(41898U);
    msg.setSourceEntity(127U);
    msg.setDestination(26639U);
    msg.setDestinationEntity(80U);
    msg.base_lat = 0.68089431965;
    msg.base_lon = 0.605749391175;
    msg.base_time = 0.719441304115;

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
    msg.setTimeStamp(0.403772208154);
    msg.setSource(15897U);
    msg.setSourceEntity(133U);
    msg.setDestination(41619U);
    msg.setDestinationEntity(90U);
    msg.base_lat = 0.926311284562;
    msg.base_lon = 0.265652391132;
    msg.base_time = 0.660945483293;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 57022U;
    tmp_msg_0.destination = 14230U;
    tmp_msg_0.timeout = 0.115696355447;
    IMC::VSWR tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.775102961995;
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
    msg.setTimeStamp(0.634343354954);
    msg.setSource(47034U);
    msg.setSourceEntity(61U);
    msg.setDestination(18213U);
    msg.setDestinationEntity(117U);
    msg.base_lat = 0.116558862891;
    msg.base_lon = 0.853497217434;
    msg.base_time = 0.230308875018;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 55909U;
    tmp_msg_0.destination = 47922U;
    tmp_msg_0.timeout = 0.759927677437;
    IMC::IridiumReport tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.frequency = 2474121688U;
    tmp_tmp_msg_0_0.info.assign("QZIIYSNYGLYAQIAALDCRXRHJKLRSNFUEUGDIQC");
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
    msg.setTimeStamp(0.444469718355);
    msg.setSource(64320U);
    msg.setSourceEntity(84U);
    msg.setDestination(29247U);
    msg.setDestinationEntity(241U);
    msg.base_lat = 0.037142190889;
    msg.base_lon = 0.285414206296;
    msg.base_time = 0.606198093253;
    const char tmp_msg_0[] = {-1, -106, 12, -67, -50, 79, -112, 44, 71, 100, 74, 92, -115, 63, 118, -75, -53, 86, -32, 44, -70, 122, 26, -93, 47, -97, -99, 105, -22, -112, 124, 107, 65, -34, 38, 56, -48, 43, -70, -39, -81, -11, 72, 72, -31, -27, 79, 32, 5, 55, -17, 41, 80, 108, -28, 117, 117, 21, -28, -56, 89, -10, -93, -2, 78, -106, 17, -28, 0, -99, -37, 93, 119, -2, 69, -113, -13, 89, 126, -125, 96, 11, 15, -102, 74, 39, 110, 106, -115, 41, 25, 52, -127, 42, -69, 7, -94, -61, -40, -86, 94, 16, -65, 7, 49, -96, 89, 68, -20, -84, 18, -14, 93, 16, -94, 5, -6, 122, -110, 124, 22, 76, 103, -74, -73, -5, -91, 57, 60, 49, -43, -112, 73, 40, 40, -50, -70, -85, 62, -11, 0, 18, 83, -122, -17, 92, 43, -21, -31, 9, 96, 25, -14, -97, -13, 24, -36, 48, 126, 113, -123, -115, 97, -43, -13, -28, 94, -27, 112, -56, -33, -120, 16, -36, -120, -73, -50, -77, -50, 81, 36, -77, 110, 28, -46, -91, -119, -90, -38, -24, 102, -94, -29, 99, -111, -59, 119, 112, 101, 77, -114, -88, -85, 50, -111, -76, -67, 39, -47, -16, -77, -120, -115, -53, -122};
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
    msg.setTimeStamp(0.893241180424);
    msg.setSource(20729U);
    msg.setSourceEntity(242U);
    msg.setDestination(61842U);
    msg.setDestinationEntity(99U);
    msg.base_lat = 0.295373571805;
    msg.base_lon = 0.365122616212;
    msg.base_time = 0.712262450166;
    const char tmp_msg_0[] = {-98, 73, -122, 95, -19, 16, 36, 23, -67, -78, -97, 40, -115, -117, 58, 116, -118, 65, -61, 31, 31, 78, 78, 50, 11, -8, 26, 8, -49, 118, -75, -125, -72, 124, 85, 15, -109, 50, 4, -37, 114, -22, -102, -3, -76, 77, 53, 18, -33, -8, -87, -17, 72, 24, -50, -95, -100, -17, 28, -2, 118, 34, 17, 57, 36, 83, -62, 109, -5, -102, -49, 38, 88, 96, 111, 121, 31, 60, 105, 117, -50, 58, -12, 73, 3, 53, 36, -104, 66, 34, 55, -68, -105, -98, -6, -111, 107, -33, -64, -87, 104, -97, 122, 105, -124, -15, -33, 12, -128, -33, -117, -122, -111, 80, 57, 116, -18, 119, 70, 68, -97, -127, 44, 73, 92, 6, -86, 46, 7, -127, -103, 86, 50, 108, 33, -80, -68, 112, 104, 94, -101, -60, 69, -78, 28, -124, 87, 110, 68, -125, -96, -105, -74, 116, -102, 109, -60, -81, 104, -37, -33, 36, -52, 13, 85, 5, 126, -90, -120, 63, -43, -75, -20, 66, -17, -106, 71, -50, 82, -102, 35, -106, 106, -125, 78};
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
    msg.setTimeStamp(0.304505541784);
    msg.setSource(19118U);
    msg.setSourceEntity(196U);
    msg.setDestination(38825U);
    msg.setDestinationEntity(107U);
    msg.base_lat = 0.343228613156;
    msg.base_lon = 0.50724817304;
    msg.base_time = 0.902396958849;
    const char tmp_msg_0[] = {-74, 102, -67, 64, -128, -69, -50, 26, -91, 102, 94, -73, 94, 62, -123, -15, 54, -102, 7, -46, 125, -8, -128, 61, -89, 8, -30, 114, 17, 113, 22, -118, -90, 120, 27, 33, 36, 14, 53, -115, -78, 17, -118, -102, 50, -89, 107, -81, -82, -109, 82, 26, 18, 3, 40, -89, -119, -91, -16, 91, -63, 34, 18, 106, 61, -22, -77, -13, 77, 104, 35, 87, -81, 101, -25, 51, -98, -117, -25, -10, -59, -27, 54, 19, 105, -27, -21, -29, -106, 79, -71, 105, 100, -24, -103, 57, -22, 21, -77, 82, -45, 11, 67, -67, -12, -108, -4, -90, 8, 91, 75, 90, 2, -30, -16, -92, 14, 10, 63, 100, -18, -26, 88, 21, 112, 124, 94, -58, -84, -100, 117, 115, -27, -31, -52, -112, -119, -106, -128, -57, -117, -58, 119, 85, -106, 71, 18, 13, 58, -127};
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
    msg.setTimeStamp(0.421741066005);
    msg.setSource(24854U);
    msg.setSourceEntity(17U);
    msg.setDestination(31476U);
    msg.setDestinationEntity(138U);
    msg.sys_id = 45492U;
    msg.priority = -53;
    msg.x = 20612;
    msg.y = 10286;
    msg.z = 9061;
    msg.t = 5777;
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 106U;
    tmp_msg_0.id.assign("VZXAEQQPPCDALNURFZNBGQGVLQUOTHRTESAGAEXYSCZJFRQMQZTTORDTUJNHOXTSGJCINLHBOOIJOBYVJDFNZLMBKWYUMAIFWSNWBKDHKDXYRDBSRRHPCZWXSUKFJNPPPWJDLKDELUKZMIV");
    IMC::FollowPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target.assign("SBKPEVDHMMSARIHNHTQAFGSIBOGTZLKADYPFNMZPAAJNYETBMXXBYSWOIXLQNTEIWDYAOBXSLUVBXORIBHVGKPAUQNNDJODOTOMQZLEVUVJJLJCNFRPCOWKPYPFCJDGWFFJUTGYWXFGIZHOBVYMCVKKDXTLEEVDSZRVQUPRCIRNJJQMNLTRTAUMICEWCFSXGMJHYIKUD");
    tmp_tmp_msg_0_0.max_speed = 0.518525016989;
    tmp_tmp_msg_0_0.speed_units = 5U;
    tmp_tmp_msg_0_0.lat = 0.214511904096;
    tmp_tmp_msg_0_0.lon = 0.699011113132;
    tmp_tmp_msg_0_0.z = 0.125709856061;
    tmp_tmp_msg_0_0.z_units = 116U;
    tmp_tmp_msg_0_0.custom.assign("TWIGRLFZAFQFJNWFXVDTHNGZLFYTKIIDHSYIYSDOACFBGAUPKNRPQGXBSQDEUXBMPRRUILOMKRZOQJNCDBWIVRMKKVOGRUEOLCQKKCXRJTNGCYKLJZOBLRQFEMMIEYEBSWQFTVOCFUTJVNQLDGEPUHUJVWPSNTCHPBJRPONKHAZUYBAWDWYCEEZZHDMAFXZUGVLQETAASHASUXSIVPZYDVSKYXHTAMXWGC");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.445430652131);
    msg.setSource(59714U);
    msg.setSourceEntity(203U);
    msg.setDestination(47258U);
    msg.setDestinationEntity(55U);
    msg.sys_id = 53363U;
    msg.priority = 85;
    msg.x = 127;
    msg.y = 1175;
    msg.z = 28366;
    msg.t = 22250;
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.402891429415;
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
    msg.setTimeStamp(0.881669608901);
    msg.setSource(42195U);
    msg.setSourceEntity(86U);
    msg.setDestination(41173U);
    msg.setDestinationEntity(254U);
    msg.sys_id = 34594U;
    msg.priority = -102;
    msg.x = 8282;
    msg.y = -8045;
    msg.z = -1453;
    msg.t = -2372;
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.162338342372;
    tmp_msg_0.base_lon = 0.715026129321;
    tmp_msg_0.base_time = 0.663227857018;
    const char tmp_tmp_msg_0_0[] = {44, 17, 82, 47, 113, -125, -49, 7, -27, -47, 106, -50, -107, 46, 0, -1, 32, -57, -95, 118, 68, -81, -111, -17, 48, 23, 19, -62, 88, 47, 68, 18, -26, -84, 19, -12, -112, -39, -28, 92, -6, 8, -96, 10, -37, -31, 42, 37, 74, -59, -98, -110, -21, -62, 60, -116, 9, 78, 70, -34, 19, 9, 99, -80, 50, -83, 2, -74, -101, -8, 62, -56, -94, -69, 45, -25, -103, 50, -93, -7, -127, -98, 105, -122, -95, 115, 47, -14, 116, 27, -60, -35, 92, -16, 97, 103, 48, 55, -117, -48};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.794210248043);
    msg.setSource(55563U);
    msg.setSourceEntity(76U);
    msg.setDestination(15418U);
    msg.setDestinationEntity(11U);
    msg.req_id = 40860U;
    msg.type = 30U;
    msg.max_size = 5158U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.137297228919;
    tmp_msg_0.base_lon = 0.408012494784;
    tmp_msg_0.base_time = 0.626007555405;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 17938U;
    tmp_tmp_msg_0_0.priority = -72;
    tmp_tmp_msg_0_0.x = -20666;
    tmp_tmp_msg_0_0.y = -15359;
    tmp_tmp_msg_0_0.z = 29076;
    tmp_tmp_msg_0_0.t = -9627;
    IMC::EstimatedFreq tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.552073722022;
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
    msg.setTimeStamp(0.937868600461);
    msg.setSource(36686U);
    msg.setSourceEntity(110U);
    msg.setDestination(41658U);
    msg.setDestinationEntity(129U);
    msg.req_id = 22416U;
    msg.type = 225U;
    msg.max_size = 52747U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.109931543632;
    tmp_msg_0.base_lon = 0.637778697134;
    tmp_msg_0.base_time = 0.650226976558;
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
    msg.setTimeStamp(0.76412128268);
    msg.setSource(52370U);
    msg.setSourceEntity(4U);
    msg.setDestination(41546U);
    msg.setDestinationEntity(181U);
    msg.req_id = 4352U;
    msg.type = 67U;
    msg.max_size = 64944U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.128532749266;
    tmp_msg_0.base_lon = 0.0260853781961;
    tmp_msg_0.base_time = 0.120933836448;
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
    msg.setTimeStamp(0.260648401112);
    msg.setSource(59874U);
    msg.setSourceEntity(130U);
    msg.setDestination(39311U);
    msg.setDestinationEntity(202U);
    msg.original_source = 53565U;
    msg.destination = 52745U;
    msg.timeout = 0.645908715809;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 168U;
    tmp_msg_0.op = 30U;
    tmp_msg_0.plan_id.assign("KUVHPZELMOLGDFOHULWWJPLZJKXJUOJZRBNHYKDHNTHNYQ");
    tmp_msg_0.params.assign("MIGBVQTGCMXZWNDYDWKMUHUNTSAFKVEQRWPHRUSMTHKWQLYTWPPKBOMGXCFB");
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
    msg.setTimeStamp(0.633544444905);
    msg.setSource(43187U);
    msg.setSourceEntity(65U);
    msg.setDestination(29152U);
    msg.setDestinationEntity(210U);
    msg.original_source = 44320U;
    msg.destination = 39257U;
    msg.timeout = 0.816253184895;
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("WEWUSPZYCQVFLKQSMCINYEIPBYCZEDFXMHAXSPPUOPEZOKVJPTYRDXFRDQLENEJFAIYVAWROWBBAICISXMDUBGERFPLQJMYWFPNKRZHBJYHYGGVCWTHJBLNRHKZIONGGLHKCENQTNJCLUTTXUMVYIKLRWEVQO");
    tmp_msg_0.action = 68U;
    tmp_msg_0.grouplist.assign("DQSEDQEBHIJZVOQJTQWHKGUARXAPUNVNBAPWCMDXDBZUMJRALODHEIESZECAJXUYMCLXPREWXMGWWHTKOCSFGIXQRVTYTTOUVRPUHLNZTMNVZMHBIYVZLAQGJKUVDCSGC");
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
    msg.setTimeStamp(0.079189591029);
    msg.setSource(42329U);
    msg.setSourceEntity(97U);
    msg.setDestination(14321U);
    msg.setDestinationEntity(119U);
    msg.original_source = 157U;
    msg.destination = 60514U;
    msg.timeout = 0.972483886422;
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 3755280701U;
    tmp_msg_0.lat = 0.12968431573;
    tmp_msg_0.lon = 0.903747977797;
    tmp_msg_0.height_ell = 0.550066624147;
    tmp_msg_0.height_sea = 0.402985880453;
    tmp_msg_0.hacc = 0.159639638484;
    tmp_msg_0.vacc = 0.140281362063;
    tmp_msg_0.vel_n = 0.96776051504;
    tmp_msg_0.vel_e = 0.377493103297;
    tmp_msg_0.vel_d = 0.0588338704692;
    tmp_msg_0.speed = 0.569114002744;
    tmp_msg_0.gspeed = 0.193995456067;
    tmp_msg_0.heading = 0.158543476285;
    tmp_msg_0.sacc = 0.936354845629;
    tmp_msg_0.cacc = 0.119021509299;
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
    msg.setTimeStamp(0.0816672191765);
    msg.setSource(17299U);
    msg.setSourceEntity(169U);
    msg.setDestination(2464U);
    msg.setDestinationEntity(195U);
    msg.type = 146U;
    msg.comm_interface = 36875U;
    msg.model = 48935U;
    msg.list.assign("VBGHBUUTCCDOCXLJPEKQASTOLXTAGWEIHVKGVDJHPUJNLIOFWESTLQCMZPKGIQXRSKAVPCDIOGSYAHFHDXYCENLWMCAFYXYFLZSWYBBYGAYPIJZUQKJTZSSEWPBWMNFFQPXNIHJQBRXBRMXHEEEYTCGKAM");

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
    msg.setTimeStamp(0.524179266934);
    msg.setSource(64999U);
    msg.setSourceEntity(15U);
    msg.setDestination(28594U);
    msg.setDestinationEntity(35U);
    msg.type = 239U;
    msg.comm_interface = 4064U;
    msg.model = 63692U;
    msg.list.assign("FIYNMIUNXHTMMWPXKRNRCOGQDXJVTHFTBGRLANPNCTTISJUDYZOALKVCPKBIJUJRZVUJFDYBAFIAAOGPWBFJKTVLIEYYILRPQXRVLEKTAVSMEDHKOEEPAQQQ");

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
    msg.setTimeStamp(0.387671555056);
    msg.setSource(6285U);
    msg.setSourceEntity(106U);
    msg.setDestination(7707U);
    msg.setDestinationEntity(196U);
    msg.type = 229U;
    msg.comm_interface = 6198U;
    msg.model = 18126U;
    msg.list.assign("JRWDTMJWFBJTIQEWQEPPOLKFJYWXGCYXICNATQUJBDGCIRKRQGZQETPEGNFGAKIUWDTXPOGYHKRVMGCOJUWTOVDYLMBLVFSEBMRWKLLEIFXXVTYFHZBSMMDJUKCMSADSTCSADNZMGCQBAQHKYMTSZNMVQAOPVVLSLROLBGRN");

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
    msg.setTimeStamp(0.0509448236555);
    msg.setSource(33038U);
    msg.setSourceEntity(175U);
    msg.setDestination(19184U);
    msg.setDestinationEntity(200U);
    msg.type = 208U;
    msg.req_id = 2854651238U;
    msg.ttl = 36751U;
    msg.code = 212U;
    msg.destination.assign("NLHXWJVHULGVKXWMKLQWXTXIHKORQPFQVIBFGNCCZHZOCJOKTEGHEFWFRHIQXCERSLXDXYCGOOKBGBSTFTYJKYDGFBDWDJYBBURIWDMNTRINEJCJPIMUUPYVLZCNUVSEKJFGUTQSTICATXMPYEEWOONSMRQZIAWFXQIRDJPHVLVSAXLQVAUAEMIKGHRRNLAAALPZMPNKEATGJHPKBUUO");
    msg.source.assign("LTELRWFDSPXVODOLLMTLASTMIEWSQYBSXOXYWCUZGVQKPHBWUSUUMFZGUBEYYYKCVHMJQFLSWRYMSJDOGTVLGFTEINKLRHCQFKZSHAQRJDKEHNZGJPQNXANDYDOZWCJPSHAOKQZIREOUCWIPEHVDQCNAETXEQARYWDSHCQ");
    msg.acknowledge = 120U;
    msg.status = 228U;
    const char tmp_msg_0[] = {40, 68, 20, 15, -18, -61, 20, -22, 2, -128, -57, -13, -51, -57, 19, -49, -114, 71, -91, 21, -85, 76, -55, -116, 88, 5, -72, 23, 123, -83, 98, -98, -59, -1, 26, -22, -113, -80};
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
    msg.setTimeStamp(0.593504922076);
    msg.setSource(23592U);
    msg.setSourceEntity(232U);
    msg.setDestination(32317U);
    msg.setDestinationEntity(190U);
    msg.type = 45U;
    msg.req_id = 427996402U;
    msg.ttl = 7847U;
    msg.code = 212U;
    msg.destination.assign("OVIZEENKAIAPRGHGQZECUGLJMFOHWEOFMLXCGIZITEVBSHBYRHKPWNGLOVAJUXHPKMBOTLBEWCJDFUUQUEZONGIDYXTDBCIZNIOBPYSREXTTDXEYQYQIYATAVRDFMQM");
    msg.source.assign("AXKXMLQRWOLEVNDCQUIKBZPAZLPXAOGVNUQBSOHPCYPTFSGWDNPQGIDDIGSJUTHIUNXNOIAVJPVHOTJBJYODZVAIHSNUNADTQWJFYPRRCSMZLXJICKFHZYUWEVFBFWFPEQSZTMFMTKWWMTRVURAWVYLMKIVCUGBNLWCHTEPMBSGOKOVKRNHXJTSRYWQEYICAERAEOOHYRKTQZHMFYLXJPJIGHGZUFBBXBDULDGQKXDCEJQESZDMCBFREN");
    msg.acknowledge = 119U;
    msg.status = 82U;
    const char tmp_msg_0[] = {43, -16, -14, 4, 83, 46, -78, 81, -59, 28, 5, 18, 24, 124, -105, -9, -25, -18, 45, -19, -14, 123, -88, 63, -39, 110, 88, 7, -60, -20, 99, 8, -103, -22, -112, 4, -28, 13, -119, 20, 11, -75, 87, 70, 65, -118, -20, 30, 90, -42, 101, 98, -33, -24, 74, 88, -36, -114, 94, 47, -10, 42, -66, -64, 108, 13, 8, -65, -96, -112, -35, 43, -63, 27, 18, -110, -81, 125, 18, 12, 64, 91, -36, -14, 28, -65, 13, 110, -92, 112, 116, -99, -4, -84, 42, -23, 10, 37, 90, -94, 121, 12, -93, 63, -43, -124, -35};
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
    msg.setTimeStamp(0.98558010293);
    msg.setSource(61746U);
    msg.setSourceEntity(200U);
    msg.setDestination(63223U);
    msg.setDestinationEntity(209U);
    msg.type = 30U;
    msg.req_id = 442613402U;
    msg.ttl = 30184U;
    msg.code = 75U;
    msg.destination.assign("ZGBNCNNSTOVWNPFGSW");
    msg.source.assign("LVITQYLHOVGXBZQFFBAPLLZNIYZANTUVDRWGASICEEUDCHMYVUJRJSPOSVXZCBUDUIVFLPDTFBEQLGAHIUETQBOZMAANESSNKCFADQFICDMCZMZLYFN");
    msg.acknowledge = 37U;
    msg.status = 211U;
    const char tmp_msg_0[] = {-78, -111, -87, -66, -50, 119, 59, -128, -9, -119, -13, -40, 56, 90, 96, -78, -44, -22, 4, -49, -109, 123, 1, 24, 20, -120, -116, -121, -91, -90, 117, -87, 98, -84, 18, 76, -79, -83, 81, 36};
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
    msg.setTimeStamp(0.0195618463654);
    msg.setSource(52418U);
    msg.setSourceEntity(101U);
    msg.setDestination(45375U);
    msg.setDestinationEntity(108U);
    msg.id = 43U;
    msg.range = 0.323569690328;

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
    msg.setTimeStamp(0.0221079773076);
    msg.setSource(41559U);
    msg.setSourceEntity(141U);
    msg.setDestination(17704U);
    msg.setDestinationEntity(212U);
    msg.id = 34U;
    msg.range = 0.730784926991;

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
    msg.setTimeStamp(0.13525371693);
    msg.setSource(13081U);
    msg.setSourceEntity(201U);
    msg.setDestination(23322U);
    msg.setDestinationEntity(204U);
    msg.id = 167U;
    msg.range = 0.499575773874;

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
    msg.setTimeStamp(0.640732434179);
    msg.setSource(57343U);
    msg.setSourceEntity(111U);
    msg.setDestination(10489U);
    msg.setDestinationEntity(254U);
    msg.beacon.assign("WOPZTZXENQIDINDVAZUXBHCEJDRRWOIAEDYZBUNNCBPCVFIVQWNKSWVIMHJKRMFXTVFXZFPMOYZDXRWRHJLJMTODTLULXUWQVTFOHNDZQRCMUSAEXTNULLURUFJKTIBVYEMRBJWNSPPDBQSZJCDGGJPYGLFEKKGVMMSQPQAEPZSKAGYMQIGYXGIEROGRCSCHKPOXSXBMVJQCFWSYQSWBOHKFDVLUAKLUTAGKGCYHZNOYHYHLA");
    msg.lat = 0.792021102523;
    msg.lon = 0.760285865229;
    msg.depth = 0.766379220235;
    msg.query_channel = 24U;
    msg.reply_channel = 38U;
    msg.transponder_delay = 216U;

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
    msg.setTimeStamp(0.469229548268);
    msg.setSource(33673U);
    msg.setSourceEntity(160U);
    msg.setDestination(36398U);
    msg.setDestinationEntity(243U);
    msg.beacon.assign("CSVENYJMNTOTKRPJOCBLYLANCMAJORNRIA");
    msg.lat = 0.261546420132;
    msg.lon = 0.453093224196;
    msg.depth = 0.880772304564;
    msg.query_channel = 246U;
    msg.reply_channel = 95U;
    msg.transponder_delay = 123U;

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
    msg.setTimeStamp(0.647993710362);
    msg.setSource(10591U);
    msg.setSourceEntity(206U);
    msg.setDestination(44116U);
    msg.setDestinationEntity(150U);
    msg.beacon.assign("OTNKZQXKIXMRUSCSYLWZBQJSHIZTOJZDAIEJLWHEXTAXXSQPSYCTKFTRURTKECFPYOPVKQQQDXLYNUVCLAWSNPNNFEQPAVHIGAMVTRSGYVJOFPQFRKQJBPBNIXRODAOAGPCUOMXLUZMTGWGOHKYGPHVZDBEYVOWCHWLDDEAMWIBZBBBYENUJLGENWBMDNSLEFSRGGEHFVDUFRFMVMTAIYSKJMCPOFWIUQCNJDJMIZWCXHYXDHU");
    msg.lat = 0.540139553527;
    msg.lon = 0.568331052764;
    msg.depth = 0.509437400061;
    msg.query_channel = 210U;
    msg.reply_channel = 151U;
    msg.transponder_delay = 44U;

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
    msg.setTimeStamp(0.619318593795);
    msg.setSource(65264U);
    msg.setSourceEntity(84U);
    msg.setDestination(22327U);
    msg.setDestinationEntity(151U);
    msg.op = 207U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZGQQVOYXGKUMYEHOJZYDPCNDMTGJCICEEJFQBFYXOIWDTXYQCGSLWHJUAILRHXXHMCUEAFSEVHKVCSFPOLMORBKPAWSZTKISAUVZJ");
    tmp_msg_0.lat = 0.642691670612;
    tmp_msg_0.lon = 0.862630277512;
    tmp_msg_0.depth = 0.208886340782;
    tmp_msg_0.query_channel = 67U;
    tmp_msg_0.reply_channel = 0U;
    tmp_msg_0.transponder_delay = 152U;
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
    msg.setTimeStamp(0.157924659722);
    msg.setSource(30474U);
    msg.setSourceEntity(234U);
    msg.setDestination(1082U);
    msg.setDestinationEntity(5U);
    msg.op = 127U;

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
    msg.setTimeStamp(0.305662307402);
    msg.setSource(53989U);
    msg.setSourceEntity(243U);
    msg.setDestination(26108U);
    msg.setDestinationEntity(129U);
    msg.op = 184U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LDMMHFRDRHKXJIPHVSGSXZGQXCPOFMRBHOHHGWKDBWAYHCBENCCLIQKFSDMFUCAYQBZCKMTPQLCVUDJXRDDIQOPUVAQOGDQBJVWDZGSEFSBQGAUTCFAUXKKTXUZLMBLUOIVZPIOEUNJXWYJIBSIQCLBNYCAWWAGTZTWMKVVKPAWQEFEMOKPXSOTDYTJPHNIENZYZZHVZHSSVGRTYNNAYOEWEXAI");
    tmp_msg_0.lat = 0.0226969910782;
    tmp_msg_0.lon = 0.104986798883;
    tmp_msg_0.depth = 0.903097478626;
    tmp_msg_0.query_channel = 127U;
    tmp_msg_0.reply_channel = 159U;
    tmp_msg_0.transponder_delay = 99U;
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
    msg.setTimeStamp(0.638160270521);
    msg.setSource(18899U);
    msg.setSourceEntity(186U);
    msg.setDestination(46206U);
    msg.setDestinationEntity(225U);
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("EUHWUYFPZRTXVSPDMVNTGLYFPQTVIQBCJMAYDWZTYBZYKTVOYFBEKKQM");
    tmp_msg_0.state = 138U;
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
    msg.setTimeStamp(0.62746404468);
    msg.setSource(25631U);
    msg.setSourceEntity(231U);
    msg.setDestination(26183U);
    msg.setDestinationEntity(88U);
    IMC::HistoricEvent tmp_msg_0;
    tmp_msg_0.text.assign("ZTJSPFYOLTXSBMMIRUIHHLCLIBZCAJHULMSEVSPIMKYZDCJOIFKDMWJMEBXDMCDQZHJYBXOQRYDNVWBAQJMACUOGNLPKFSWSPKTKRBNGTPQUGRCUZIJYIIBPZKVTAVAQDAKRFSSOJXXCEBBOAGEUZFEXUFHXTTYZSOHTPFOGLPQMOQCWFVLBGRAWYUKTVNKWUQDEGCIERFYZNVOVP");
    tmp_msg_0.type = 135U;
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
    msg.setTimeStamp(0.18481000466);
    msg.setSource(45601U);
    msg.setSourceEntity(218U);
    msg.setDestination(31661U);
    msg.setDestinationEntity(204U);
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.723693461244;
    tmp_msg_0.y = 0.00646163842597;
    tmp_msg_0.z = 0.799151149981;
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
    msg.setTimeStamp(0.821524536705);
    msg.setSource(21865U);
    msg.setSourceEntity(39U);
    msg.setDestination(16240U);
    msg.setDestinationEntity(180U);
    msg.op = 2U;
    msg.system.assign("YTGXUWKAYUDVPNQEDGTQXASYQBLDWSQFRPDKJAWHGVGITFKKTCVJMEQIDIVSPUTXEOPXWBKYEBLWIRNHVLOISFBTRTDEPJWZFIYTUARCBDJPHPCHMZWXQMZWSRHIXUNZVWBBMJMZKEYPECWLFZZZOJBOTDJHMVFANLBALXXCRMHOKJUNGKOGSHDUUZOSVJOCFRYAAIHYQENGALLQSKSSRGFVTBCCLGYPQMJULMNCFXEKYUPIRCXENOIOR");
    msg.range = 0.342336324769;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.374851489979;
    tmp_msg_0.temperature = 0.702024503446;
    tmp_msg_0.depth = 0.854902717807;
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
    msg.setTimeStamp(0.614908973927);
    msg.setSource(15904U);
    msg.setSourceEntity(244U);
    msg.setDestination(28316U);
    msg.setDestinationEntity(184U);
    msg.op = 189U;
    msg.system.assign("PNRXYQTCBGSRCAWCWCVZNAIOVPXQXGNDWJCZTEKZILVROT");
    msg.range = 0.519933143511;
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.323138296541);
    msg.setSource(36644U);
    msg.setSourceEntity(44U);
    msg.setDestination(14155U);
    msg.setDestinationEntity(137U);
    msg.op = 12U;
    msg.system.assign("YXJXOWLVISMNSXXHDDGHPZJDPAKYFYPUECRFTAJTRRQVFFWIBRBRCAPNLAFKBBIELQQKHXSTTBQLOYEZHSQSHYGQQFEMVWBFXEAVVUWUKDUDNOMHGSZWXLCJPGEJGATRYOTNAXZHSHABBSNZMCNOMTQIPWCAQGPIYUFPNSKUIJZWIRPGMLYNMJCOREUNMGKEDZFIKLXLZMBOCIEDUAVLIVUEWXZKWWDKCDZUMP");
    msg.range = 0.720237742039;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 76U;
    tmp_msg_0.request_id = 130U;
    tmp_msg_0.command = 179U;
    IMC::Goto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 39962U;
    tmp_tmp_msg_0_0.lat = 0.969719604833;
    tmp_tmp_msg_0_0.lon = 0.886908750855;
    tmp_tmp_msg_0_0.z = 0.874634666646;
    tmp_tmp_msg_0_0.z_units = 8U;
    tmp_tmp_msg_0_0.speed = 0.106676907181;
    tmp_tmp_msg_0_0.speed_units = 56U;
    tmp_tmp_msg_0_0.roll = 0.434656982065;
    tmp_tmp_msg_0_0.pitch = 0.219283725725;
    tmp_tmp_msg_0_0.yaw = 0.389439041781;
    tmp_tmp_msg_0_0.custom.assign("PJEOHYXQDOQBKSNHIUNSMTWWCDJFQETPIXXUNAXPVVGDODIZTGSKSHPCPGQTXEWTBTZZXJDYNXCEWDSYRJWCUMBZBCMQNLWTJKUUZLYMRHNZUHTBRNXQUDKJQGIKRFZGIRMOPQNTJJMBKPKFNDAFDXAFZLVSMM");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 45852U;
    tmp_msg_0.info.assign("MQCGVGIZTPDIPFGTOHEWCUYKWHEXKBEOFGAUGWMUCZNBHFZSMYLPLCXXUTQAVQYGBRSDJBZYPYVATWKEFGFZRMRXHPULLIUCZHNYZXEL");
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
    msg.setTimeStamp(0.510814288567);
    msg.setSource(15678U);
    msg.setSourceEntity(95U);
    msg.setDestination(33510U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.37953587893);
    msg.setSource(2462U);
    msg.setSourceEntity(212U);
    msg.setDestination(63188U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.571839611694);
    msg.setSource(18753U);
    msg.setSourceEntity(143U);
    msg.setDestination(13944U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.512404518812);
    msg.setSource(30400U);
    msg.setSourceEntity(53U);
    msg.setDestination(57914U);
    msg.setDestinationEntity(99U);
    msg.list.assign("IENNAUGHJHRZCOKDJQHVGONQBNKDLIZVXPMDECDLUFOLYRKWFPLRIVCWYDRDTAWNFXRMKFQSRDASSQBXEURGWNXZDEUXZWYEIPAKAWIQKYPRWBMSGFQBRBJHCOGVJTYMTSLLTQPPGGTYEYVAPCTUWSWHPDSZLQISZMILFZIVXZJMRUCFYYCLFAOMENAIAKUFIHSKCHOCEUTVHZEMJXBVDPQOUJBKPOBJTNOGTYGULF");

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
    msg.setTimeStamp(0.286861494109);
    msg.setSource(33995U);
    msg.setSourceEntity(198U);
    msg.setDestination(47015U);
    msg.setDestinationEntity(30U);
    msg.list.assign("FQCGAGKSSVNYCTCEPZOCTGQRCUELVNPPBJODOXXBBUAPKRSIEQXVSRNWRRKTTSDCJQZFFXJGUBOHAONGYCQSFULTEJHSFVXKTEYNHLCPECLADHLANLAHMZZYYGTZUMWQGKNBLWNGIWKDRKIEOFJIPWFIMWYVSLUOXUBJROMPQKXFHWAMXMNPDDCGSZHBZWEEUVTIHUYPAOZMBQARDZOJFKIIXPJIYHFDSAEVLZRJNQMBD");

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
    msg.setTimeStamp(0.817097815207);
    msg.setSource(11156U);
    msg.setSourceEntity(152U);
    msg.setDestination(48832U);
    msg.setDestinationEntity(151U);
    msg.list.assign("JBIUVEQSMXZZLEYUFJVPLGXBOEMJNAITZPMHHGJUDSCIZLHJJWOSPWANAGNAPBLGTEVYAHSMNRGFBXZCMWXQHRENUKTQKULPVRTRUONYGOKQRDEZDLRGZYYJXMVJMYDWQDZONWOBDFGPRBTNAWKVYVDKPOYCIMQIXUDRIGEUCTDFYASKCWXFWFANTFWSOIBVCLUQGTJQFEUOCHSAEZFBLKCHZFQLRYT");

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
    msg.setTimeStamp(0.119272556178);
    msg.setSource(6073U);
    msg.setSourceEntity(249U);
    msg.setDestination(24429U);
    msg.setDestinationEntity(148U);
    msg.peer.assign("LBBCQUVNMSZKAAMFXHGPITQUIMQOQIHEQBIYPWACZMOEAHXHDELIFBWQQUZAGCFJZYUXVGMCTXEKDLAZOMAUVSCZWBJABNERSGUUAHRDXWBPRDOVEJDKIZVOGMKGLJYWFGUTUDVZYEESRBMNTHVXSYRVMKFHOWNTIDARFLLJCVROQPHPIWRSEIPBTEWHONQSLXHM");
    msg.rssi = 0.527312062041;
    msg.integrity = 26276U;

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
    msg.setTimeStamp(0.272509395965);
    msg.setSource(60349U);
    msg.setSourceEntity(98U);
    msg.setDestination(6940U);
    msg.setDestinationEntity(234U);
    msg.peer.assign("DWXHIENPBMGJJBXPYDAAIKAHMFEWYWKUHUAJMOTLLAWSTCSYNRRLRDLSNFTAORSOUNJENCHLVTLSQCORPPQQZPTHGFIWOVAVVJTMEOIPXYRGQPUDCXBFHTGZDYYRGWEMEEKBKIEOZGMBUJQZWBFNCWFRSKYYTBXMWHRUIVVZCJQOXZUQYQKSFMXXCKPWLLIBDFVKUFHBEPROSI");
    msg.rssi = 0.603777962432;
    msg.integrity = 11113U;

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
    msg.setTimeStamp(0.944372711343);
    msg.setSource(39284U);
    msg.setSourceEntity(227U);
    msg.setDestination(48266U);
    msg.setDestinationEntity(252U);
    msg.peer.assign("SSUCZBXLHRVBTAYPCRGHMFIJVPQASKYHPVGXAZUNNMSNYSLTNEWAADHDDLKOILGKYRVQCJHVOZMYESWTHIDJKOARMAHIPZEFMHXBXTBRAISDSTXECNLNMUPQCKCUVKQBSFOVOQPECWBPHIWWGEZDXGDJFJYDOUGBQPPGGXKZRUOCTQYWUVWYLQJUYVJZXBGEHEKTOIJLMWDNKYALTFFTGXJVESFBZMERNFWXMIZMJNIOQRUBRIDLPCWFCRQF");
    msg.rssi = 0.139785203085;
    msg.integrity = 2007U;

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
    msg.setTimeStamp(0.533449455565);
    msg.setSource(53378U);
    msg.setSourceEntity(6U);
    msg.setDestination(18092U);
    msg.setDestinationEntity(214U);
    msg.req_id = 44565U;
    msg.destination.assign("LZZOKHTUBNMNDALAKXHJMASNNMZDWGRRONKBZJKJJEPOOVSHEWGXQJTMPCPBWFDQYQBGTCEASWRHRPXXWEZGQZYIOCMMTIVITGLHGDELBSAUIFYPKWHUVDXRGQKXMRCJUHKTYEFKKPLSJSNTXREFXIFFKLBGVLAVZAQICMJGSNQPLRURDHBIUYWMUWIMECDWDVDFEYRAUHSOPEOZHIQOALSBZLFVYNCDXVFJFVOYAPYGBCUOXNVZIJ");
    msg.timeout = 0.316939562001;
    msg.range = 0.103730336131;
    msg.type = 136U;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 49996U;
    tmp_msg_0.control_ent = 49U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 168U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.53090417726;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 16U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.819068781315;
    tmp_tmp_tmp_msg_0_0_1.z_units = 89U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.371443075191;
    tmp_tmp_msg_0_0.lon = 0.585198005606;
    tmp_tmp_msg_0_0.radius = 0.203964511488;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 96U;
    tmp_msg_0.proximity = 100U;
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
    msg.setTimeStamp(0.450408758973);
    msg.setSource(21856U);
    msg.setSourceEntity(158U);
    msg.setDestination(2483U);
    msg.setDestinationEntity(117U);
    msg.req_id = 6647U;
    msg.destination.assign("CPUYNNRXADUADZAYBJHTCKPJPTYLPCUNSVVKDZFLHXUGSB");
    msg.timeout = 0.525326755642;
    msg.range = 0.800476640723;
    msg.type = 123U;
    IMC::Heave tmp_msg_0;
    tmp_msg_0.value = 0.838270067719;
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
    msg.setTimeStamp(0.529156771556);
    msg.setSource(25632U);
    msg.setSourceEntity(253U);
    msg.setDestination(39934U);
    msg.setDestinationEntity(229U);
    msg.req_id = 17234U;
    msg.destination.assign("BMVSPCFHEMIYGXZEDZZNVVAJOGPZSIJOTGSGRTKZGSVOBYMZKUYSUTCOZUPUKQQRZFBWNPQEWJMHNWAPRAYKDXCTZHXHVUOOSQPWTDBGGK");
    msg.timeout = 0.520340483557;
    msg.range = 0.492563090288;
    msg.type = 37U;
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 19809U;
    tmp_msg_0.x = 0.220355650812;
    tmp_msg_0.y = 0.122003761896;
    tmp_msg_0.z = 0.936415925631;
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
    msg.setTimeStamp(0.34225777785);
    msg.setSource(2921U);
    msg.setSourceEntity(228U);
    msg.setDestination(54521U);
    msg.setDestinationEntity(204U);
    msg.req_id = 58455U;
    msg.type = 38U;
    msg.status = 71U;
    msg.info.assign("FPQSUNYGGWWQLBFQXRYVSWKXWAIVOQNXVUMLBDKESJGHBEWIRZKWXRZINBKVIHNJBEXURFWLDHDSCHXPUOKYHLMQRVBKZLRUODCIUFVSYLHAGYAAXITMIVCGLWEDOGMTAHYWJOBEENXPP");
    msg.range = 0.62459913584;

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
    msg.setTimeStamp(0.66035443876);
    msg.setSource(35823U);
    msg.setSourceEntity(14U);
    msg.setDestination(51270U);
    msg.setDestinationEntity(140U);
    msg.req_id = 62529U;
    msg.type = 182U;
    msg.status = 176U;
    msg.info.assign("SACHVQEKGUIQQTYLNQSQBNEIPEPZJEMJDVPJBNFNAORGRHBUFNOYGPDTTNSITUHPAVAXEXOMCFRERCTIXEUAMASLDTVXMFCRYWDOG");
    msg.range = 0.685985418534;

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
    msg.setTimeStamp(0.99849287657);
    msg.setSource(45769U);
    msg.setSourceEntity(19U);
    msg.setDestination(30257U);
    msg.setDestinationEntity(119U);
    msg.req_id = 7401U;
    msg.type = 140U;
    msg.status = 188U;
    msg.info.assign("HAPQNSHTCUWGSINZKEOEHRQLOU");
    msg.range = 0.119002819427;

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
    msg.setTimeStamp(0.662190165351);
    msg.setSource(58358U);
    msg.setSourceEntity(9U);
    msg.setDestination(14615U);
    msg.setDestinationEntity(238U);
    msg.value = 31102;

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
    msg.setTimeStamp(0.774465540396);
    msg.setSource(10017U);
    msg.setSourceEntity(132U);
    msg.setDestination(33997U);
    msg.setDestinationEntity(22U);
    msg.value = -10763;

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
    msg.setTimeStamp(0.918446734354);
    msg.setSource(65089U);
    msg.setSourceEntity(182U);
    msg.setDestination(60223U);
    msg.setDestinationEntity(47U);
    msg.value = 25033;

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
    msg.setTimeStamp(0.166863172254);
    msg.setSource(9846U);
    msg.setSourceEntity(155U);
    msg.setDestination(30460U);
    msg.setDestinationEntity(253U);
    msg.value = 0.324708872082;

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
    msg.setTimeStamp(0.837710368898);
    msg.setSource(50441U);
    msg.setSourceEntity(195U);
    msg.setDestination(15088U);
    msg.setDestinationEntity(82U);
    msg.value = 0.141121031165;

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
    msg.setTimeStamp(0.549423090072);
    msg.setSource(57588U);
    msg.setSourceEntity(111U);
    msg.setDestination(61278U);
    msg.setDestinationEntity(247U);
    msg.value = 0.156773566566;

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
    msg.setTimeStamp(0.75438028834);
    msg.setSource(25546U);
    msg.setSourceEntity(67U);
    msg.setDestination(8807U);
    msg.setDestinationEntity(89U);
    msg.value = 0.535292181941;

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
    msg.setTimeStamp(0.539293937446);
    msg.setSource(34331U);
    msg.setSourceEntity(144U);
    msg.setDestination(54449U);
    msg.setDestinationEntity(139U);
    msg.value = 0.849420831093;

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
    msg.setTimeStamp(0.805442141312);
    msg.setSource(9490U);
    msg.setSourceEntity(168U);
    msg.setDestination(16217U);
    msg.setDestinationEntity(49U);
    msg.value = 0.550344291345;

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
    msg.setTimeStamp(0.725706811213);
    msg.setSource(50490U);
    msg.setSourceEntity(34U);
    msg.setDestination(42582U);
    msg.setDestinationEntity(195U);
    msg.validity = 34884U;
    msg.type = 236U;
    msg.utc_year = 9851U;
    msg.utc_month = 55U;
    msg.utc_day = 194U;
    msg.utc_time = 0.2225174143;
    msg.lat = 0.712626964184;
    msg.lon = 0.979190201896;
    msg.height = 0.722253365678;
    msg.satellites = 183U;
    msg.cog = 0.345911724715;
    msg.sog = 0.503549502782;
    msg.hdop = 0.379448740052;
    msg.vdop = 0.184879107694;
    msg.hacc = 0.115793895133;
    msg.vacc = 0.515530475135;

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
    msg.setTimeStamp(0.41637071603);
    msg.setSource(9724U);
    msg.setSourceEntity(116U);
    msg.setDestination(27768U);
    msg.setDestinationEntity(40U);
    msg.validity = 64491U;
    msg.type = 175U;
    msg.utc_year = 29701U;
    msg.utc_month = 11U;
    msg.utc_day = 167U;
    msg.utc_time = 0.192803966733;
    msg.lat = 0.320884122726;
    msg.lon = 0.049194509463;
    msg.height = 0.899555386793;
    msg.satellites = 120U;
    msg.cog = 0.733661984441;
    msg.sog = 0.639760279879;
    msg.hdop = 0.0575501407899;
    msg.vdop = 0.951085645738;
    msg.hacc = 0.0907855163412;
    msg.vacc = 0.52253664656;

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
    msg.setTimeStamp(0.332166164354);
    msg.setSource(5262U);
    msg.setSourceEntity(46U);
    msg.setDestination(26828U);
    msg.setDestinationEntity(235U);
    msg.validity = 4276U;
    msg.type = 179U;
    msg.utc_year = 50215U;
    msg.utc_month = 13U;
    msg.utc_day = 156U;
    msg.utc_time = 0.943718942306;
    msg.lat = 0.777917112255;
    msg.lon = 0.0398573184828;
    msg.height = 0.170247179428;
    msg.satellites = 242U;
    msg.cog = 0.760754170396;
    msg.sog = 0.738796943058;
    msg.hdop = 0.244170476885;
    msg.vdop = 0.888247192043;
    msg.hacc = 0.662215781966;
    msg.vacc = 0.660410586148;

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
    msg.setTimeStamp(0.159503304042);
    msg.setSource(11830U);
    msg.setSourceEntity(188U);
    msg.setDestination(28916U);
    msg.setDestinationEntity(154U);
    msg.time = 0.127703487107;
    msg.phi = 0.95480997924;
    msg.theta = 0.77833475628;
    msg.psi = 0.729518545386;
    msg.psi_magnetic = 0.742260723293;

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
    msg.setTimeStamp(0.723991297635);
    msg.setSource(49990U);
    msg.setSourceEntity(21U);
    msg.setDestination(29404U);
    msg.setDestinationEntity(224U);
    msg.time = 0.140741722342;
    msg.phi = 0.14363371976;
    msg.theta = 0.051373637883;
    msg.psi = 0.176730898018;
    msg.psi_magnetic = 0.340385514303;

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
    msg.setTimeStamp(0.348292047128);
    msg.setSource(40638U);
    msg.setSourceEntity(41U);
    msg.setDestination(265U);
    msg.setDestinationEntity(227U);
    msg.time = 0.114245408491;
    msg.phi = 0.783826011266;
    msg.theta = 0.0860036208087;
    msg.psi = 0.127816548851;
    msg.psi_magnetic = 0.701398262364;

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
    msg.setTimeStamp(0.94528704757);
    msg.setSource(13191U);
    msg.setSourceEntity(107U);
    msg.setDestination(51778U);
    msg.setDestinationEntity(65U);
    msg.time = 0.977944154971;
    msg.x = 0.968502517671;
    msg.y = 0.496265103451;
    msg.z = 0.984689532027;
    msg.timestep = 0.717315230689;

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
    msg.setTimeStamp(0.874172909794);
    msg.setSource(28791U);
    msg.setSourceEntity(181U);
    msg.setDestination(10U);
    msg.setDestinationEntity(245U);
    msg.time = 0.016896714703;
    msg.x = 0.270776149667;
    msg.y = 0.0168280066259;
    msg.z = 0.180325246785;
    msg.timestep = 0.702559061419;

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
    msg.setTimeStamp(0.374516735767);
    msg.setSource(48205U);
    msg.setSourceEntity(215U);
    msg.setDestination(23428U);
    msg.setDestinationEntity(197U);
    msg.time = 0.1694197064;
    msg.x = 0.714730755255;
    msg.y = 0.352760400191;
    msg.z = 0.782443093871;
    msg.timestep = 0.191677755327;

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
    msg.setTimeStamp(0.947883592308);
    msg.setSource(58442U);
    msg.setSourceEntity(248U);
    msg.setDestination(48549U);
    msg.setDestinationEntity(107U);
    msg.time = 0.554665857011;
    msg.x = 0.178030203194;
    msg.y = 0.350337922687;
    msg.z = 0.386398620291;

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
    msg.setTimeStamp(0.284280090119);
    msg.setSource(56672U);
    msg.setSourceEntity(12U);
    msg.setDestination(41468U);
    msg.setDestinationEntity(207U);
    msg.time = 0.429430059847;
    msg.x = 0.912269415493;
    msg.y = 0.682669866015;
    msg.z = 0.0696570328854;

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
    msg.setTimeStamp(0.412397423594);
    msg.setSource(12172U);
    msg.setSourceEntity(240U);
    msg.setDestination(38060U);
    msg.setDestinationEntity(9U);
    msg.time = 0.152258014724;
    msg.x = 0.81421546248;
    msg.y = 0.241685178544;
    msg.z = 0.84935569393;

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
    msg.setTimeStamp(0.920176445301);
    msg.setSource(10817U);
    msg.setSourceEntity(136U);
    msg.setDestination(29747U);
    msg.setDestinationEntity(97U);
    msg.time = 0.695904640681;
    msg.x = 0.523437229344;
    msg.y = 0.908191450924;
    msg.z = 0.180706357594;

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
    msg.setTimeStamp(0.359109098776);
    msg.setSource(13385U);
    msg.setSourceEntity(65U);
    msg.setDestination(24470U);
    msg.setDestinationEntity(217U);
    msg.time = 0.805309301239;
    msg.x = 0.251315514645;
    msg.y = 0.574654345361;
    msg.z = 0.678787170264;

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
    msg.setTimeStamp(0.986901248477);
    msg.setSource(53592U);
    msg.setSourceEntity(206U);
    msg.setDestination(59348U);
    msg.setDestinationEntity(242U);
    msg.time = 0.961576308459;
    msg.x = 0.672205293717;
    msg.y = 0.175323559086;
    msg.z = 0.113793501934;

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
    msg.setTimeStamp(0.365158624055);
    msg.setSource(23401U);
    msg.setSourceEntity(160U);
    msg.setDestination(25689U);
    msg.setDestinationEntity(16U);
    msg.time = 0.573055217295;
    msg.x = 0.0792308822418;
    msg.y = 0.36082822412;
    msg.z = 0.446061429012;

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
    msg.setTimeStamp(0.989752538063);
    msg.setSource(54323U);
    msg.setSourceEntity(134U);
    msg.setDestination(49302U);
    msg.setDestinationEntity(163U);
    msg.time = 0.572776258425;
    msg.x = 0.347269405885;
    msg.y = 0.1292616395;
    msg.z = 0.283750281869;

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
    msg.setTimeStamp(0.0137430392844);
    msg.setSource(53355U);
    msg.setSourceEntity(246U);
    msg.setDestination(2205U);
    msg.setDestinationEntity(182U);
    msg.time = 0.466030109877;
    msg.x = 0.534558253591;
    msg.y = 0.354732882643;
    msg.z = 0.844945044638;

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
    msg.setTimeStamp(0.660849766259);
    msg.setSource(33825U);
    msg.setSourceEntity(166U);
    msg.setDestination(19529U);
    msg.setDestinationEntity(175U);
    msg.validity = 108U;
    msg.x = 0.00718847996717;
    msg.y = 0.400167963184;
    msg.z = 0.0543411246912;

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
    msg.setTimeStamp(0.459603137931);
    msg.setSource(11439U);
    msg.setSourceEntity(47U);
    msg.setDestination(12480U);
    msg.setDestinationEntity(10U);
    msg.validity = 238U;
    msg.x = 0.160750610924;
    msg.y = 0.202472944292;
    msg.z = 0.179487382334;

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
    msg.setTimeStamp(0.440485809501);
    msg.setSource(48082U);
    msg.setSourceEntity(2U);
    msg.setDestination(20950U);
    msg.setDestinationEntity(128U);
    msg.validity = 88U;
    msg.x = 0.838067542394;
    msg.y = 0.0322898833413;
    msg.z = 0.387927149836;

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
    msg.setTimeStamp(0.196721930106);
    msg.setSource(3077U);
    msg.setSourceEntity(1U);
    msg.setDestination(20838U);
    msg.setDestinationEntity(76U);
    msg.validity = 144U;
    msg.x = 0.554657632583;
    msg.y = 0.883447554785;
    msg.z = 0.0430019519025;

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
    msg.setTimeStamp(0.0787975726625);
    msg.setSource(20866U);
    msg.setSourceEntity(153U);
    msg.setDestination(46763U);
    msg.setDestinationEntity(87U);
    msg.validity = 125U;
    msg.x = 0.801592456747;
    msg.y = 0.569468079189;
    msg.z = 0.0402747558507;

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
    msg.setTimeStamp(0.647909442276);
    msg.setSource(8575U);
    msg.setSourceEntity(70U);
    msg.setDestination(12712U);
    msg.setDestinationEntity(174U);
    msg.validity = 221U;
    msg.x = 0.609423463538;
    msg.y = 0.566587697913;
    msg.z = 0.362939581391;

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
    msg.setTimeStamp(0.924231285588);
    msg.setSource(55211U);
    msg.setSourceEntity(18U);
    msg.setDestination(16948U);
    msg.setDestinationEntity(15U);
    msg.time = 0.255877701745;
    msg.x = 0.899196405375;
    msg.y = 0.0812995512215;
    msg.z = 0.595542557834;

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
    msg.setTimeStamp(0.87068368903);
    msg.setSource(40385U);
    msg.setSourceEntity(9U);
    msg.setDestination(12440U);
    msg.setDestinationEntity(103U);
    msg.time = 0.223205594478;
    msg.x = 0.0257637328674;
    msg.y = 0.0935501749768;
    msg.z = 0.9575501031;

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
    msg.setTimeStamp(0.716569504511);
    msg.setSource(58406U);
    msg.setSourceEntity(123U);
    msg.setDestination(31268U);
    msg.setDestinationEntity(193U);
    msg.time = 0.162327202433;
    msg.x = 0.141642235098;
    msg.y = 0.944441763796;
    msg.z = 0.837367568084;

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
    msg.setTimeStamp(0.281959193669);
    msg.setSource(2526U);
    msg.setSourceEntity(170U);
    msg.setDestination(3347U);
    msg.setDestinationEntity(172U);
    msg.validity = 121U;
    msg.value = 0.321078498662;

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
    msg.setTimeStamp(0.810315105908);
    msg.setSource(1047U);
    msg.setSourceEntity(51U);
    msg.setDestination(1863U);
    msg.setDestinationEntity(15U);
    msg.validity = 53U;
    msg.value = 0.266654221896;

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
    msg.setTimeStamp(0.688326341141);
    msg.setSource(44244U);
    msg.setSourceEntity(2U);
    msg.setDestination(3060U);
    msg.setDestinationEntity(142U);
    msg.validity = 145U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.718438751179;
    tmp_msg_0.y = 0.883736312007;
    tmp_msg_0.z = 0.751898878759;
    tmp_msg_0.phi = 0.0469215244573;
    tmp_msg_0.theta = 0.582650164039;
    tmp_msg_0.psi = 0.537315407073;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.299794745384;

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
    msg.setTimeStamp(0.360833513083);
    msg.setSource(48242U);
    msg.setSourceEntity(215U);
    msg.setDestination(57944U);
    msg.setDestinationEntity(113U);
    msg.value = 0.0216112325672;

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
    msg.setTimeStamp(0.828198184085);
    msg.setSource(6007U);
    msg.setSourceEntity(225U);
    msg.setDestination(62519U);
    msg.setDestinationEntity(220U);
    msg.value = 0.76795498474;

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
    msg.setTimeStamp(0.455814471386);
    msg.setSource(13412U);
    msg.setSourceEntity(247U);
    msg.setDestination(22961U);
    msg.setDestinationEntity(157U);
    msg.value = 0.871490886608;

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
    msg.setTimeStamp(0.744445318336);
    msg.setSource(42651U);
    msg.setSourceEntity(134U);
    msg.setDestination(43907U);
    msg.setDestinationEntity(92U);
    msg.value = 0.919232323307;

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
    msg.setTimeStamp(0.604319695511);
    msg.setSource(33985U);
    msg.setSourceEntity(196U);
    msg.setDestination(21065U);
    msg.setDestinationEntity(61U);
    msg.value = 0.412257226358;

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
    msg.setTimeStamp(0.618176456613);
    msg.setSource(6903U);
    msg.setSourceEntity(152U);
    msg.setDestination(17523U);
    msg.setDestinationEntity(207U);
    msg.value = 0.632575622637;

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
    msg.setTimeStamp(0.789542695399);
    msg.setSource(14737U);
    msg.setSourceEntity(26U);
    msg.setDestination(64691U);
    msg.setDestinationEntity(112U);
    msg.value = 0.0125128920869;

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
    msg.setTimeStamp(0.857491098783);
    msg.setSource(36639U);
    msg.setSourceEntity(185U);
    msg.setDestination(30788U);
    msg.setDestinationEntity(91U);
    msg.value = 0.097639851346;

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
    msg.setTimeStamp(0.468023270346);
    msg.setSource(26581U);
    msg.setSourceEntity(31U);
    msg.setDestination(33129U);
    msg.setDestinationEntity(172U);
    msg.value = 0.23025098257;

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
    msg.setTimeStamp(0.815599630873);
    msg.setSource(59716U);
    msg.setSourceEntity(145U);
    msg.setDestination(11495U);
    msg.setDestinationEntity(200U);
    msg.value = 0.106015272297;

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
    msg.setTimeStamp(0.599901386399);
    msg.setSource(37541U);
    msg.setSourceEntity(121U);
    msg.setDestination(3292U);
    msg.setDestinationEntity(120U);
    msg.value = 0.778110969809;

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
    msg.setTimeStamp(0.241652500627);
    msg.setSource(42403U);
    msg.setSourceEntity(91U);
    msg.setDestination(33235U);
    msg.setDestinationEntity(220U);
    msg.value = 0.00779503056392;

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
    msg.setTimeStamp(0.0411953342578);
    msg.setSource(42351U);
    msg.setSourceEntity(145U);
    msg.setDestination(53393U);
    msg.setDestinationEntity(215U);
    msg.value = 0.511642918449;

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
    msg.setTimeStamp(0.542923286701);
    msg.setSource(64688U);
    msg.setSourceEntity(78U);
    msg.setDestination(38127U);
    msg.setDestinationEntity(40U);
    msg.value = 0.698223888855;

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
    msg.setTimeStamp(0.880791612737);
    msg.setSource(42612U);
    msg.setSourceEntity(146U);
    msg.setDestination(31944U);
    msg.setDestinationEntity(8U);
    msg.value = 0.813822629201;

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
    msg.setTimeStamp(0.121232967363);
    msg.setSource(1393U);
    msg.setSourceEntity(206U);
    msg.setDestination(58019U);
    msg.setDestinationEntity(179U);
    msg.value = 0.759838916967;

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
    msg.setTimeStamp(0.270397144389);
    msg.setSource(42796U);
    msg.setSourceEntity(30U);
    msg.setDestination(19425U);
    msg.setDestinationEntity(126U);
    msg.value = 0.493940790449;

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
    msg.setTimeStamp(0.341304507591);
    msg.setSource(52463U);
    msg.setSourceEntity(108U);
    msg.setDestination(4168U);
    msg.setDestinationEntity(243U);
    msg.value = 0.426886015976;

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
    msg.setTimeStamp(0.956362384327);
    msg.setSource(41105U);
    msg.setSourceEntity(252U);
    msg.setDestination(21940U);
    msg.setDestinationEntity(157U);
    msg.value = 0.975544398891;

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
    msg.setTimeStamp(0.0132015466738);
    msg.setSource(19187U);
    msg.setSourceEntity(65U);
    msg.setDestination(19810U);
    msg.setDestinationEntity(114U);
    msg.value = 0.613968146244;

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
    msg.setTimeStamp(0.85576512651);
    msg.setSource(15014U);
    msg.setSourceEntity(41U);
    msg.setDestination(49326U);
    msg.setDestinationEntity(228U);
    msg.value = 0.912327548563;

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
    msg.setTimeStamp(0.69700397747);
    msg.setSource(16536U);
    msg.setSourceEntity(112U);
    msg.setDestination(3457U);
    msg.setDestinationEntity(78U);
    msg.value = 0.634099607142;

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
    msg.setTimeStamp(0.754080686136);
    msg.setSource(34816U);
    msg.setSourceEntity(30U);
    msg.setDestination(35199U);
    msg.setDestinationEntity(12U);
    msg.value = 0.919197640806;

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
    msg.setTimeStamp(0.354919968904);
    msg.setSource(9009U);
    msg.setSourceEntity(137U);
    msg.setDestination(59242U);
    msg.setDestinationEntity(108U);
    msg.value = 0.289021308204;

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
    msg.setTimeStamp(0.169533101165);
    msg.setSource(30111U);
    msg.setSourceEntity(226U);
    msg.setDestination(9503U);
    msg.setDestinationEntity(21U);
    msg.direction = 0.571257715432;
    msg.speed = 0.199565213719;
    msg.turbulence = 0.103960470289;

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
    msg.setTimeStamp(0.950692187214);
    msg.setSource(57702U);
    msg.setSourceEntity(58U);
    msg.setDestination(60031U);
    msg.setDestinationEntity(20U);
    msg.direction = 0.784411045976;
    msg.speed = 0.489848001804;
    msg.turbulence = 0.923933684747;

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
    msg.setTimeStamp(0.215746260351);
    msg.setSource(9999U);
    msg.setSourceEntity(253U);
    msg.setDestination(28114U);
    msg.setDestinationEntity(253U);
    msg.direction = 0.0900079874046;
    msg.speed = 0.0850228231793;
    msg.turbulence = 0.00121817982972;

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
    msg.setTimeStamp(0.521797808323);
    msg.setSource(55399U);
    msg.setSourceEntity(206U);
    msg.setDestination(56820U);
    msg.setDestinationEntity(145U);
    msg.value = 0.540110187385;

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
    msg.setTimeStamp(0.470986594886);
    msg.setSource(61280U);
    msg.setSourceEntity(144U);
    msg.setDestination(11226U);
    msg.setDestinationEntity(142U);
    msg.value = 0.991725761136;

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
    msg.setTimeStamp(0.0383612682959);
    msg.setSource(15472U);
    msg.setSourceEntity(243U);
    msg.setDestination(9944U);
    msg.setDestinationEntity(60U);
    msg.value = 0.302939854987;

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
    msg.setTimeStamp(0.0722845500692);
    msg.setSource(43792U);
    msg.setSourceEntity(180U);
    msg.setDestination(59988U);
    msg.setDestinationEntity(234U);
    msg.value.assign("CDXSFWVKVQDZYDXXPRKJOIVZCNWIAGFLJHQHVHNMUOKPSPTRUSSFCAXJMRSIJYDJHZRCCAW");

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
    msg.setTimeStamp(0.807202900358);
    msg.setSource(62128U);
    msg.setSourceEntity(201U);
    msg.setDestination(45211U);
    msg.setDestinationEntity(134U);
    msg.value.assign("ELEKJDDWHYVASSOUKBVGJSOQDLPTGNHJZPTAUBFLMVEZSJPMPYXGVFBUDXJTUOHFQXDTCMVXLRLUEEUFFDINDOLDYEKMAAICAYRCHZQRWMLQO");

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
    msg.setTimeStamp(0.416406061995);
    msg.setSource(6866U);
    msg.setSourceEntity(193U);
    msg.setDestination(50353U);
    msg.setDestinationEntity(2U);
    msg.value.assign("QBYJOBGRICRIWDYNUCSPBYFPYMEZSNAZPFSJMNETURKWTMAUOAQGSUABWTZFFVQPCMPJUJRBWVMCGENOKZADNLJEYUDVHGTHXXSFJZIZEQAVFRDXYZGKZLPWCLOUGJNONEADIMQCYYOSWTXDFFKLDXDXTHSERSVGOQVBQQNCLBCGQGDHKJZPTBJXUPMIIXVKSOWTHIMKWRVESZPAEMWNIGLLVKHOHRYAHRXCJIKKOFQRBUBWLLNIHTE");

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
    msg.setTimeStamp(0.540936125153);
    msg.setSource(7877U);
    msg.setSourceEntity(5U);
    msg.setDestination(32151U);
    msg.setDestinationEntity(38U);
    const char tmp_msg_0[] = {77, 37, 85, 20, 30, 89, 33, -30, 106, -99, 78, -22, -82, 109, 4, 32, 122, -126, -13, 22, 66, 74, 44, 112, -88, -65, -46, 25, -79, 67, 7, 94, -80, 28, 109, -47, 73, -108, 23, -93, 71, 17, -78, -30, 30, -30, 23, 90, 14, -74, 60, -32, 51, -112, 100, -60, -6, 1, -77, 59, 47, 120, 73, 112, -84, 89, 94, 106, 48, 4, 104, 89, -27, 100, 49, 89, 9, 62, -93, 23, 119, -54, -109, 42, -102, 7, 72, 116, 100, -118, -65, -41, -23, -45, 22, -113, 112, 29, -9, 107, 48, -46, 26, -58, 28, -109, -75, -70, 73, 5, -51, -66, -7, 6, -2, -8, 104, 93, -62, 84, -38, 47, -14, -95, -77, -56, -40, -14, -26, -35, 81, 18, -61, -48, -100, 96, 28, 10, 6, 53, 99, -56, -106, 97, 80, -82, -32, 37, -86, -110, -62, 71, 108, 111, 71, -68, -107, -1, -10, -114};
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
    msg.setTimeStamp(0.35136758009);
    msg.setSource(33727U);
    msg.setSourceEntity(137U);
    msg.setDestination(51111U);
    msg.setDestinationEntity(15U);
    const char tmp_msg_0[] = {-21, -53, 125, -127, -33, 40, -115, 66, 74, 92, 19, 125, -98, -56, 23, 18, -27, -111, -84, 81, 87, 71, 33, 43, 32, 96, 123, 5, 53, -5, 123, 83, 122, 126, -69, -110, 23, -29, -26, 43, 79, -50, -20, -35, 81, -69, 117, -122, -84, -126, 57, -102, 73, 72, 17, -123, -125, 1, 61, 80, 126, 112, 32, -127, 80, -45, 25, 52, -60, -100, -32, -17, -125, 36, -114, -71, 23, 101, 88, 116, 10, 6, 59, 81, -24, 65, 1, 76, 65, 10, 81, -40, 119, 124, 73, 8, -45, -7, 111, -106, -41, 6, 101, -78, 95, -53, 52, 22, -35, -54, -49, 13, -88, -124, 73, -58, 126, -22, -46, -44, 88, -83, 99, -89, -65, -65, 71, -96, 16, -19, 89, 50, -77, 101, 122, -127, -65, 32, -56, -49, 54, -84, 32, -81, -70, 76, 118, -74, 85, 102, -19, 42, -104, -24, -122, -42, 10, 82, -102, 20, 34, -118, 115, 80, -124, 27, -44, 86, -2, -87, -50, -64, -24};
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
    msg.setTimeStamp(0.702609389903);
    msg.setSource(32686U);
    msg.setSourceEntity(100U);
    msg.setDestination(63514U);
    msg.setDestinationEntity(115U);
    const char tmp_msg_0[] = {-22, -46, 9, 116, -55, 86, 122, -26, 119, -110, 10, 99, -106, -110, 115, -63, -13, -36, 99, 125, -40, -33, -87, 123, -54, 64, -70, -40, 35, 77, 71, -84, 117, 46, -55, 20, -41, 3, -26, -62, 45, 50, -12, -26, 7, 68, -4, 14, 15, -93, -65, 100, 106, 99, -25, -98, -7, 98, 58, 78, 72, -63, -44, -54, 121, 12, -87, 68, -29, 75, -3, 90, -61, 68, -59, -100, -104, 122, 108, -28, 104, 12, 41, -104, 121, 4, 82, -33, -115, -26, -12, -114, -128, 120, 43, 119, -66, 16, 85, 11, 105, 5, -15, 82, 72, 39, -81, 90, 76, 0, 38, -10, -72, -99, -115, 69, 16, 103, 95, -123, 38, -44, -13, -128, -55, 102, -68, -59, 89, 77, 11, 9, 11, -123, -46, 8, 44, 6, -11, 93, 80, -93, 110, 59, -46, 71, -77, 25, -66, 121, -62, 60, 55, -100, 82, -115, -47, 117, 113, 49, -43, -97, -76, -65, 80, 123, -1, 112, 102, -62, -67, -109, 12, 106};
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
    msg.setTimeStamp(0.0983370698968);
    msg.setSource(3002U);
    msg.setSourceEntity(151U);
    msg.setDestination(59423U);
    msg.setDestinationEntity(225U);
    msg.value = 0.0359741774466;

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
    msg.setTimeStamp(0.217004654737);
    msg.setSource(22249U);
    msg.setSourceEntity(196U);
    msg.setDestination(663U);
    msg.setDestinationEntity(248U);
    msg.value = 0.558266182683;

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
    msg.setTimeStamp(0.557372176815);
    msg.setSource(41522U);
    msg.setSourceEntity(7U);
    msg.setDestination(57468U);
    msg.setDestinationEntity(233U);
    msg.value = 0.846460704142;

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
    msg.setTimeStamp(0.785382808767);
    msg.setSource(52958U);
    msg.setSourceEntity(90U);
    msg.setDestination(26751U);
    msg.setDestinationEntity(33U);
    msg.type = 162U;
    msg.frequency = 3911354184U;
    msg.min_range = 41205U;
    msg.max_range = 30046U;
    msg.bits_per_point = 234U;
    msg.scale_factor = 0.671895729877;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.286776466022;
    tmp_msg_0.beam_height = 0.277749135917;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-47, 97, -88, -82, 19, -31, -37, -97, -13, 71, -58, -98, 9, -94, 102, 95, -43, -98};
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
    msg.setTimeStamp(0.879336490739);
    msg.setSource(31932U);
    msg.setSourceEntity(37U);
    msg.setDestination(22532U);
    msg.setDestinationEntity(16U);
    msg.type = 89U;
    msg.frequency = 4143135065U;
    msg.min_range = 63704U;
    msg.max_range = 10789U;
    msg.bits_per_point = 222U;
    msg.scale_factor = 0.564877962157;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.625666890969;
    tmp_msg_0.beam_height = 0.0256736315313;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-72, 18, 115, -60, -117, -27, 30, -78, -125, -52, -62, -50, -80, -40, -72, -19, -91, -74, -52, -99, -105, -84, 58, -15, -67, -18, -7, 119, -88, -97, 116, 50, 54, 68, 98, -15, 56, 123, -69, 122, -38, -69, 113, -27, 117, -34, -82, -106, 43, -113, 100, -52, -45, -48, -31, -15, 13, 6, 104, -106, 27, 81, -96, -21, 17, 17, 63};
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
    msg.setTimeStamp(0.278971554749);
    msg.setSource(27980U);
    msg.setSourceEntity(141U);
    msg.setDestination(28802U);
    msg.setDestinationEntity(179U);
    msg.type = 246U;
    msg.frequency = 2558376749U;
    msg.min_range = 63049U;
    msg.max_range = 26241U;
    msg.bits_per_point = 82U;
    msg.scale_factor = 0.646949436843;
    const char tmp_msg_0[] = {-98, -58, -98, 57, -48, 86, 91, -41, -17, -117, 107, 47, -85, -21, 115, -67, 123, 16, 110, -5, 63, -44, -34, 114, -82, 115, 7, -119, 58, -73, 21, -51, -52, -72, 16, 105, 88, 60, -28, 32, -5, 56, 115, -50, 70, 50, 5, 103, -96, -47, -68, -47, 8, 60, -77, -86, -96, -79, -81, 9, -56, -52, -94, -47, -91, 68, -53, 32, -40, 83, -9, 36, 34, 123, 49, 123, 58, 105, -59, 43, 45, -34, -32, -20, -127, -71, -32, 75, 6, 83, 3, 17, 116, -83, 113, 16, 40, 121, 81, 41, -107, -13, -34, -97, 56, -73, -121, -23, 57, -42, 86, -18, 16, 37, -74, -43, -37, -3, -86, -75, 20, 36, 76, 55, -16, 54, -113, -55, -111, 17, -84, 64, 58, -19, -93, 106, -110, 77, -26, -82, -123, 102, 74, -42, -34, -118, -50, -70, -104, 58, -8, 3, -79, 16, 10, 90, -58, 120, 82, 51, 47, -20, 72, -121, -128, -65, 116, 99, 10};
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
    msg.setTimeStamp(0.775882148948);
    msg.setSource(52348U);
    msg.setSourceEntity(201U);
    msg.setDestination(58973U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.12095702382);
    msg.setSource(6257U);
    msg.setSourceEntity(163U);
    msg.setDestination(22151U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.814943814422);
    msg.setSource(44729U);
    msg.setSourceEntity(60U);
    msg.setDestination(57835U);
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
    msg.setTimeStamp(0.158506412433);
    msg.setSource(33303U);
    msg.setSourceEntity(65U);
    msg.setDestination(33080U);
    msg.setDestinationEntity(120U);
    msg.op = 232U;

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
    msg.setTimeStamp(0.900587987266);
    msg.setSource(60760U);
    msg.setSourceEntity(93U);
    msg.setDestination(62617U);
    msg.setDestinationEntity(30U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.777444920782);
    msg.setSource(44527U);
    msg.setSourceEntity(215U);
    msg.setDestination(45343U);
    msg.setDestinationEntity(207U);
    msg.op = 138U;

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
    msg.setTimeStamp(0.0314982225822);
    msg.setSource(12309U);
    msg.setSourceEntity(52U);
    msg.setDestination(59151U);
    msg.setDestinationEntity(108U);
    msg.value = 0.693264049385;
    msg.confidence = 0.930896091552;
    msg.opmodes.assign("ETDPSZSGJEOQPBDXOJMVOSIVRYZBZXEWZTTEFGVCBAHNMCRSEFLAKCMFNTKPUSEEBVUQQJWNSHMHNQGRYHIIZFNCZUHXWWKIBHHVSATMZWFDKO");

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
    msg.setTimeStamp(0.752530721182);
    msg.setSource(18202U);
    msg.setSourceEntity(75U);
    msg.setDestination(15797U);
    msg.setDestinationEntity(208U);
    msg.value = 0.411011305623;
    msg.confidence = 0.171331142676;
    msg.opmodes.assign("NDCCJLKTCBKDPJVVUKEUBZQMZNAHWPSFWTQILAQYVLCUNRJJEOZXGKTLMURWDMUFGWYTTSHVGFVW");

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
    msg.setTimeStamp(0.916946974071);
    msg.setSource(60164U);
    msg.setSourceEntity(55U);
    msg.setDestination(57286U);
    msg.setDestinationEntity(200U);
    msg.value = 0.822397325038;
    msg.confidence = 0.265102680744;
    msg.opmodes.assign("BDAZOVVUMRPWLOOIAKMUGBFSOPPOUEEJHEIXQWVPCWYNTSNIWLQIROVHULSTNDSRXTZMIGLEKYFYWKJAIAAUDTHJFVRHUBEWLHRCAJCYUKPAHZCVQYLTHBPJFDXUIRGRGEKMFLFKIKBNIIYGUQFHDHVDEZMVQCAPVONQBNP");

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
    msg.setTimeStamp(0.185464848075);
    msg.setSource(25911U);
    msg.setSourceEntity(69U);
    msg.setDestination(24401U);
    msg.setDestinationEntity(224U);
    msg.itow = 3518580490U;
    msg.lat = 0.374689004069;
    msg.lon = 0.150469322196;
    msg.height_ell = 0.709363446196;
    msg.height_sea = 0.867777637666;
    msg.hacc = 0.994873229834;
    msg.vacc = 0.374960456405;
    msg.vel_n = 0.0304355474394;
    msg.vel_e = 0.633826549495;
    msg.vel_d = 0.366991266651;
    msg.speed = 0.199321259938;
    msg.gspeed = 0.206913903093;
    msg.heading = 0.491444827527;
    msg.sacc = 0.986722396484;
    msg.cacc = 0.429814759107;

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
    msg.setTimeStamp(0.470694114331);
    msg.setSource(4089U);
    msg.setSourceEntity(53U);
    msg.setDestination(35723U);
    msg.setDestinationEntity(209U);
    msg.itow = 605041631U;
    msg.lat = 0.999576910406;
    msg.lon = 0.314739526529;
    msg.height_ell = 0.104219435973;
    msg.height_sea = 0.0528985727415;
    msg.hacc = 0.111024928721;
    msg.vacc = 0.873171066093;
    msg.vel_n = 0.930855481778;
    msg.vel_e = 0.544776324761;
    msg.vel_d = 0.06201145452;
    msg.speed = 0.744383323674;
    msg.gspeed = 0.357413980389;
    msg.heading = 0.450011669826;
    msg.sacc = 0.691949339179;
    msg.cacc = 0.930165429115;

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
    msg.setTimeStamp(0.990890453524);
    msg.setSource(64564U);
    msg.setSourceEntity(217U);
    msg.setDestination(27920U);
    msg.setDestinationEntity(192U);
    msg.itow = 2053666463U;
    msg.lat = 0.498612132713;
    msg.lon = 0.432869109105;
    msg.height_ell = 0.114158723569;
    msg.height_sea = 0.418472047301;
    msg.hacc = 0.864732601636;
    msg.vacc = 0.731013691557;
    msg.vel_n = 0.181288767727;
    msg.vel_e = 0.674924829906;
    msg.vel_d = 0.218362952993;
    msg.speed = 0.543929874044;
    msg.gspeed = 0.767710557938;
    msg.heading = 0.105020503844;
    msg.sacc = 0.98039475161;
    msg.cacc = 0.318533743212;

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
    msg.setTimeStamp(0.883218328789);
    msg.setSource(62254U);
    msg.setSourceEntity(10U);
    msg.setDestination(64394U);
    msg.setDestinationEntity(243U);
    msg.id = 29U;
    msg.value = 0.372692739928;

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
    msg.setTimeStamp(0.990346850063);
    msg.setSource(6167U);
    msg.setSourceEntity(140U);
    msg.setDestination(37550U);
    msg.setDestinationEntity(28U);
    msg.id = 13U;
    msg.value = 0.571043244631;

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
    msg.setTimeStamp(0.835103164157);
    msg.setSource(49228U);
    msg.setSourceEntity(200U);
    msg.setDestination(24390U);
    msg.setDestinationEntity(104U);
    msg.id = 199U;
    msg.value = 0.199959998013;

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
    msg.setTimeStamp(0.33895131982);
    msg.setSource(57824U);
    msg.setSourceEntity(176U);
    msg.setDestination(58033U);
    msg.setDestinationEntity(71U);
    msg.x = 0.617039867165;
    msg.y = 0.101582759427;
    msg.z = 0.0965075775614;
    msg.phi = 0.907542006211;
    msg.theta = 0.423062435753;
    msg.psi = 0.503790653083;

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
    msg.setTimeStamp(0.0117254853119);
    msg.setSource(12419U);
    msg.setSourceEntity(35U);
    msg.setDestination(3771U);
    msg.setDestinationEntity(100U);
    msg.x = 0.411874577578;
    msg.y = 0.940679980338;
    msg.z = 0.568768405601;
    msg.phi = 0.0930757119629;
    msg.theta = 0.318901336931;
    msg.psi = 0.919967139609;

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
    msg.setTimeStamp(0.688207708428);
    msg.setSource(37444U);
    msg.setSourceEntity(68U);
    msg.setDestination(56663U);
    msg.setDestinationEntity(77U);
    msg.x = 0.92382370497;
    msg.y = 0.225074892661;
    msg.z = 0.948910266326;
    msg.phi = 0.549093840629;
    msg.theta = 0.485155370588;
    msg.psi = 0.502094222872;

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
    msg.setTimeStamp(0.67957180563);
    msg.setSource(28389U);
    msg.setSourceEntity(116U);
    msg.setDestination(61652U);
    msg.setDestinationEntity(42U);
    msg.beam_width = 0.687187611989;
    msg.beam_height = 0.459401353642;

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
    msg.setTimeStamp(0.663545551296);
    msg.setSource(63612U);
    msg.setSourceEntity(246U);
    msg.setDestination(20749U);
    msg.setDestinationEntity(100U);
    msg.beam_width = 0.157944655139;
    msg.beam_height = 0.583669329834;

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
    msg.setTimeStamp(0.786335721474);
    msg.setSource(19989U);
    msg.setSourceEntity(183U);
    msg.setDestination(41791U);
    msg.setDestinationEntity(53U);
    msg.beam_width = 0.80296967539;
    msg.beam_height = 0.462768151025;

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
    msg.setTimeStamp(0.236128231455);
    msg.setSource(7066U);
    msg.setSourceEntity(88U);
    msg.setDestination(37999U);
    msg.setDestinationEntity(206U);
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
    msg.setTimeStamp(0.175542347643);
    msg.setSource(56698U);
    msg.setSourceEntity(191U);
    msg.setDestination(25744U);
    msg.setDestinationEntity(35U);
    msg.sane = 65U;

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
    msg.setTimeStamp(0.285043056309);
    msg.setSource(25712U);
    msg.setSourceEntity(116U);
    msg.setDestination(16941U);
    msg.setDestinationEntity(10U);
    msg.sane = 119U;

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
    msg.setTimeStamp(0.307204397122);
    msg.setSource(19444U);
    msg.setSourceEntity(33U);
    msg.setDestination(30941U);
    msg.setDestinationEntity(33U);
    msg.value = 0.7873781732;

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
    msg.setTimeStamp(0.167052688129);
    msg.setSource(24170U);
    msg.setSourceEntity(143U);
    msg.setDestination(23240U);
    msg.setDestinationEntity(23U);
    msg.value = 0.848509072531;

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
    msg.setTimeStamp(0.398845641308);
    msg.setSource(59230U);
    msg.setSourceEntity(165U);
    msg.setDestination(42046U);
    msg.setDestinationEntity(222U);
    msg.value = 0.317801688909;

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
    msg.setTimeStamp(0.0530713799195);
    msg.setSource(31374U);
    msg.setSourceEntity(240U);
    msg.setDestination(39449U);
    msg.setDestinationEntity(31U);
    msg.value = 0.360586052326;

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
    msg.setTimeStamp(0.236830184804);
    msg.setSource(10265U);
    msg.setSourceEntity(33U);
    msg.setDestination(26205U);
    msg.setDestinationEntity(135U);
    msg.value = 0.360798882628;

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
    msg.setTimeStamp(0.764333820911);
    msg.setSource(37538U);
    msg.setSourceEntity(48U);
    msg.setDestination(23609U);
    msg.setDestinationEntity(75U);
    msg.value = 0.600672389897;

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
    msg.setTimeStamp(0.375353359345);
    msg.setSource(7598U);
    msg.setSourceEntity(54U);
    msg.setDestination(49047U);
    msg.setDestinationEntity(98U);
    msg.value = 0.0538636092753;

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
    msg.setTimeStamp(0.0501212219868);
    msg.setSource(23492U);
    msg.setSourceEntity(140U);
    msg.setDestination(37690U);
    msg.setDestinationEntity(31U);
    msg.value = 0.606219772731;

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
    msg.setTimeStamp(0.84971454282);
    msg.setSource(5876U);
    msg.setSourceEntity(131U);
    msg.setDestination(23714U);
    msg.setDestinationEntity(209U);
    msg.value = 0.125384006044;

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
    msg.setTimeStamp(0.288752359468);
    msg.setSource(14875U);
    msg.setSourceEntity(23U);
    msg.setDestination(14340U);
    msg.setDestinationEntity(96U);
    msg.value = 0.0891109723885;

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
    msg.setTimeStamp(0.680311634308);
    msg.setSource(65188U);
    msg.setSourceEntity(156U);
    msg.setDestination(54861U);
    msg.setDestinationEntity(216U);
    msg.value = 0.626174813337;

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
    msg.setTimeStamp(0.575904006306);
    msg.setSource(6699U);
    msg.setSourceEntity(191U);
    msg.setDestination(1653U);
    msg.setDestinationEntity(233U);
    msg.value = 0.0628921225674;

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
    msg.setTimeStamp(0.438033543011);
    msg.setSource(2252U);
    msg.setSourceEntity(9U);
    msg.setDestination(5761U);
    msg.setDestinationEntity(250U);
    msg.value = 0.368939411222;

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
    msg.setTimeStamp(0.638275333308);
    msg.setSource(46368U);
    msg.setSourceEntity(106U);
    msg.setDestination(35012U);
    msg.setDestinationEntity(176U);
    msg.value = 0.0780949773765;

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
    msg.setTimeStamp(0.53535523946);
    msg.setSource(38574U);
    msg.setSourceEntity(102U);
    msg.setDestination(61515U);
    msg.setDestinationEntity(234U);
    msg.value = 0.0236239115959;

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
    msg.setTimeStamp(0.448897203516);
    msg.setSource(30234U);
    msg.setSourceEntity(165U);
    msg.setDestination(19397U);
    msg.setDestinationEntity(141U);
    msg.value = 0.671141869433;

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
    msg.setTimeStamp(0.744504594284);
    msg.setSource(31376U);
    msg.setSourceEntity(108U);
    msg.setDestination(22805U);
    msg.setDestinationEntity(253U);
    msg.value = 0.605166949223;

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
    msg.setTimeStamp(0.416250793323);
    msg.setSource(27434U);
    msg.setSourceEntity(2U);
    msg.setDestination(42239U);
    msg.setDestinationEntity(218U);
    msg.value = 0.32177746584;

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
    msg.setTimeStamp(0.56592472861);
    msg.setSource(55361U);
    msg.setSourceEntity(124U);
    msg.setDestination(19912U);
    msg.setDestinationEntity(23U);
    msg.value = 0.245936530271;

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
    msg.setTimeStamp(0.0206932010781);
    msg.setSource(16676U);
    msg.setSourceEntity(94U);
    msg.setDestination(20372U);
    msg.setDestinationEntity(200U);
    msg.value = 0.603953300887;

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
    msg.setTimeStamp(0.238131366292);
    msg.setSource(32743U);
    msg.setSourceEntity(77U);
    msg.setDestination(3766U);
    msg.setDestinationEntity(16U);
    msg.value = 0.467194338031;

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
    msg.setTimeStamp(0.991828523588);
    msg.setSource(10852U);
    msg.setSourceEntity(253U);
    msg.setDestination(48823U);
    msg.setDestinationEntity(191U);
    msg.value = 0.845217997041;

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
    msg.setTimeStamp(0.000287676049849);
    msg.setSource(12880U);
    msg.setSourceEntity(106U);
    msg.setDestination(19061U);
    msg.setDestinationEntity(204U);
    msg.value = 0.0128964242106;

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
    msg.setTimeStamp(0.884948022414);
    msg.setSource(51789U);
    msg.setSourceEntity(68U);
    msg.setDestination(16322U);
    msg.setDestinationEntity(74U);
    msg.value = 0.389975662618;

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
    msg.setTimeStamp(0.521778637472);
    msg.setSource(25914U);
    msg.setSourceEntity(90U);
    msg.setDestination(7790U);
    msg.setDestinationEntity(209U);
    msg.validity = 62089U;
    msg.type = 155U;
    msg.tow = 1276168255U;
    msg.base_lat = 0.751349546383;
    msg.base_lon = 0.956984091429;
    msg.base_height = 0.944367817988;
    msg.n = 0.794094467023;
    msg.e = 0.226995052135;
    msg.d = 0.196642602828;
    msg.v_n = 0.798756532967;
    msg.v_e = 0.852205469384;
    msg.v_d = 0.352066956118;
    msg.satellites = 10U;
    msg.iar_hyp = 58015U;
    msg.iar_ratio = 0.848146102477;

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
    msg.setTimeStamp(0.275098477223);
    msg.setSource(26332U);
    msg.setSourceEntity(64U);
    msg.setDestination(32442U);
    msg.setDestinationEntity(150U);
    msg.validity = 53257U;
    msg.type = 221U;
    msg.tow = 1139365279U;
    msg.base_lat = 0.186968827999;
    msg.base_lon = 0.314139288715;
    msg.base_height = 0.583312745071;
    msg.n = 0.0647007522236;
    msg.e = 0.682062100206;
    msg.d = 0.432229974729;
    msg.v_n = 0.0690972063337;
    msg.v_e = 0.43681627347;
    msg.v_d = 0.397334306358;
    msg.satellites = 50U;
    msg.iar_hyp = 51733U;
    msg.iar_ratio = 0.613276670384;

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
    msg.setTimeStamp(0.288350371054);
    msg.setSource(59885U);
    msg.setSourceEntity(18U);
    msg.setDestination(20415U);
    msg.setDestinationEntity(193U);
    msg.validity = 55400U;
    msg.type = 157U;
    msg.tow = 3656948687U;
    msg.base_lat = 0.0533140206008;
    msg.base_lon = 0.984152297724;
    msg.base_height = 0.29514422648;
    msg.n = 0.127814513187;
    msg.e = 0.893402675137;
    msg.d = 0.556542512864;
    msg.v_n = 0.344707417842;
    msg.v_e = 0.275569274064;
    msg.v_d = 0.373726256857;
    msg.satellites = 197U;
    msg.iar_hyp = 30738U;
    msg.iar_ratio = 0.761801524306;

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
    msg.setTimeStamp(0.774418936262);
    msg.setSource(18437U);
    msg.setSourceEntity(169U);
    msg.setDestination(60479U);
    msg.setDestinationEntity(125U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.786734617929;
    tmp_msg_0.lon = 0.965930179886;
    tmp_msg_0.height = 0.564519752484;
    tmp_msg_0.x = 0.0471312093231;
    tmp_msg_0.y = 0.0171261902502;
    tmp_msg_0.z = 0.403477692383;
    tmp_msg_0.phi = 0.0435745901871;
    tmp_msg_0.theta = 0.603926849963;
    tmp_msg_0.psi = 0.0887155562635;
    tmp_msg_0.u = 0.0495934923151;
    tmp_msg_0.v = 0.576388197234;
    tmp_msg_0.w = 0.515526937969;
    tmp_msg_0.vx = 0.201359296443;
    tmp_msg_0.vy = 0.659308344606;
    tmp_msg_0.vz = 0.959894701505;
    tmp_msg_0.p = 0.409495547398;
    tmp_msg_0.q = 0.261166245718;
    tmp_msg_0.r = 0.0037998097618;
    tmp_msg_0.depth = 0.127078482666;
    tmp_msg_0.alt = 0.650338241422;
    msg.state.set(tmp_msg_0);
    msg.type = 156U;

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
    msg.setTimeStamp(0.0351859611882);
    msg.setSource(14553U);
    msg.setSourceEntity(68U);
    msg.setDestination(7844U);
    msg.setDestinationEntity(127U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9057791625;
    tmp_msg_0.lon = 0.0651791968581;
    tmp_msg_0.height = 0.275403054233;
    tmp_msg_0.x = 0.0734803924364;
    tmp_msg_0.y = 0.196390346318;
    tmp_msg_0.z = 0.641835965586;
    tmp_msg_0.phi = 0.260130060917;
    tmp_msg_0.theta = 0.677031041548;
    tmp_msg_0.psi = 0.379592965999;
    tmp_msg_0.u = 0.722250992629;
    tmp_msg_0.v = 0.254153520043;
    tmp_msg_0.w = 0.387456837177;
    tmp_msg_0.vx = 0.685881948858;
    tmp_msg_0.vy = 0.0880736361969;
    tmp_msg_0.vz = 0.617247534335;
    tmp_msg_0.p = 0.953344919901;
    tmp_msg_0.q = 0.59373094712;
    tmp_msg_0.r = 0.183946492849;
    tmp_msg_0.depth = 0.57577698682;
    tmp_msg_0.alt = 0.145296977962;
    msg.state.set(tmp_msg_0);
    msg.type = 254U;

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
    msg.setTimeStamp(0.817879164395);
    msg.setSource(10196U);
    msg.setSourceEntity(27U);
    msg.setDestination(34895U);
    msg.setDestinationEntity(171U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.718264612551;
    tmp_msg_0.lon = 0.352742448666;
    tmp_msg_0.height = 0.637269202285;
    tmp_msg_0.x = 0.05269317817;
    tmp_msg_0.y = 0.640372412289;
    tmp_msg_0.z = 0.811496618771;
    tmp_msg_0.phi = 0.702340855695;
    tmp_msg_0.theta = 0.0454619365308;
    tmp_msg_0.psi = 0.999458271828;
    tmp_msg_0.u = 0.00599546676333;
    tmp_msg_0.v = 0.569501880844;
    tmp_msg_0.w = 0.218111274694;
    tmp_msg_0.vx = 0.113894839573;
    tmp_msg_0.vy = 0.0237454628433;
    tmp_msg_0.vz = 0.735766777141;
    tmp_msg_0.p = 0.207743815134;
    tmp_msg_0.q = 0.503575017626;
    tmp_msg_0.r = 0.516927018789;
    tmp_msg_0.depth = 0.420321076174;
    tmp_msg_0.alt = 0.56414055912;
    msg.state.set(tmp_msg_0);
    msg.type = 59U;

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
    msg.setTimeStamp(0.291429009696);
    msg.setSource(17615U);
    msg.setSourceEntity(5U);
    msg.setDestination(4839U);
    msg.setDestinationEntity(67U);
    msg.value = 0.624037897327;

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
    msg.setTimeStamp(0.713359083853);
    msg.setSource(24682U);
    msg.setSourceEntity(66U);
    msg.setDestination(31432U);
    msg.setDestinationEntity(48U);
    msg.value = 0.90857272586;

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
    msg.setTimeStamp(0.357215065541);
    msg.setSource(56686U);
    msg.setSourceEntity(245U);
    msg.setDestination(29400U);
    msg.setDestinationEntity(179U);
    msg.value = 0.745776725121;

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
    msg.setTimeStamp(0.329790887249);
    msg.setSource(26303U);
    msg.setSourceEntity(120U);
    msg.setDestination(30908U);
    msg.setDestinationEntity(151U);
    msg.value = 0.715572395272;

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
    msg.setTimeStamp(0.531511571405);
    msg.setSource(7877U);
    msg.setSourceEntity(129U);
    msg.setDestination(20005U);
    msg.setDestinationEntity(149U);
    msg.value = 0.819518896197;

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
    msg.setTimeStamp(0.811220463171);
    msg.setSource(28303U);
    msg.setSourceEntity(118U);
    msg.setDestination(24804U);
    msg.setDestinationEntity(41U);
    msg.value = 0.183648814439;

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
    msg.setTimeStamp(0.0568656610579);
    msg.setSource(40342U);
    msg.setSourceEntity(53U);
    msg.setDestination(9857U);
    msg.setDestinationEntity(218U);
    msg.value = 0.342666753048;

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
    msg.setTimeStamp(0.725854670048);
    msg.setSource(18748U);
    msg.setSourceEntity(193U);
    msg.setDestination(20625U);
    msg.setDestinationEntity(113U);
    msg.value = 0.874583761428;

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
    msg.setTimeStamp(0.528058458299);
    msg.setSource(51542U);
    msg.setSourceEntity(32U);
    msg.setDestination(17914U);
    msg.setDestinationEntity(58U);
    msg.value = 0.995630955715;

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
    msg.setTimeStamp(0.090937549318);
    msg.setSource(57037U);
    msg.setSourceEntity(189U);
    msg.setDestination(4089U);
    msg.setDestinationEntity(59U);
    msg.value = 0.116632927872;

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
    msg.setTimeStamp(0.231733124295);
    msg.setSource(65075U);
    msg.setSourceEntity(200U);
    msg.setDestination(9648U);
    msg.setDestinationEntity(163U);
    msg.value = 0.245722172817;

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
    msg.setTimeStamp(0.0236759733971);
    msg.setSource(26584U);
    msg.setSourceEntity(92U);
    msg.setDestination(37198U);
    msg.setDestinationEntity(73U);
    msg.value = 0.197258941002;

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
    msg.setTimeStamp(0.213208180413);
    msg.setSource(29798U);
    msg.setSourceEntity(3U);
    msg.setDestination(12324U);
    msg.setDestinationEntity(103U);
    msg.value = 0.311536350961;

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
    msg.setTimeStamp(0.72079672552);
    msg.setSource(44046U);
    msg.setSourceEntity(191U);
    msg.setDestination(43940U);
    msg.setDestinationEntity(33U);
    msg.value = 0.349773025527;

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
    msg.setTimeStamp(0.326753843156);
    msg.setSource(26832U);
    msg.setSourceEntity(120U);
    msg.setDestination(57218U);
    msg.setDestinationEntity(21U);
    msg.value = 0.832274278176;

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
    msg.setTimeStamp(0.702481673184);
    msg.setSource(20549U);
    msg.setSourceEntity(128U);
    msg.setDestination(422U);
    msg.setDestinationEntity(213U);
    msg.id = 236U;
    msg.zoom = 97U;
    msg.action = 175U;

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
    msg.setTimeStamp(0.0485358609429);
    msg.setSource(17864U);
    msg.setSourceEntity(82U);
    msg.setDestination(23141U);
    msg.setDestinationEntity(221U);
    msg.id = 182U;
    msg.zoom = 50U;
    msg.action = 4U;

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
    msg.setTimeStamp(0.168097267208);
    msg.setSource(8534U);
    msg.setSourceEntity(36U);
    msg.setDestination(15274U);
    msg.setDestinationEntity(84U);
    msg.id = 126U;
    msg.zoom = 233U;
    msg.action = 84U;

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
    msg.setTimeStamp(0.608817962585);
    msg.setSource(62342U);
    msg.setSourceEntity(186U);
    msg.setDestination(63392U);
    msg.setDestinationEntity(32U);
    msg.id = 90U;
    msg.value = 0.0657495757043;

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
    msg.setTimeStamp(0.622274754174);
    msg.setSource(4358U);
    msg.setSourceEntity(231U);
    msg.setDestination(18623U);
    msg.setDestinationEntity(172U);
    msg.id = 65U;
    msg.value = 0.854511722423;

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
    msg.setTimeStamp(0.311850446455);
    msg.setSource(29156U);
    msg.setSourceEntity(60U);
    msg.setDestination(63861U);
    msg.setDestinationEntity(204U);
    msg.id = 42U;
    msg.value = 0.174123411272;

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
    msg.setTimeStamp(0.182717382808);
    msg.setSource(8921U);
    msg.setSourceEntity(111U);
    msg.setDestination(46067U);
    msg.setDestinationEntity(164U);
    msg.id = 120U;
    msg.value = 0.701332372038;

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
    msg.setTimeStamp(0.975404657396);
    msg.setSource(46014U);
    msg.setSourceEntity(30U);
    msg.setDestination(3921U);
    msg.setDestinationEntity(32U);
    msg.id = 148U;
    msg.value = 0.85967459109;

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
    msg.setTimeStamp(0.332502469765);
    msg.setSource(1504U);
    msg.setSourceEntity(67U);
    msg.setDestination(43633U);
    msg.setDestinationEntity(161U);
    msg.id = 244U;
    msg.value = 0.075010617984;

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
    msg.setTimeStamp(0.0853412202846);
    msg.setSource(7252U);
    msg.setSourceEntity(235U);
    msg.setDestination(3323U);
    msg.setDestinationEntity(29U);
    msg.id = 139U;
    msg.angle = 0.790548584755;

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
    msg.setTimeStamp(0.125472177908);
    msg.setSource(63616U);
    msg.setSourceEntity(211U);
    msg.setDestination(58866U);
    msg.setDestinationEntity(18U);
    msg.id = 203U;
    msg.angle = 0.155907175523;

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
    msg.setTimeStamp(0.493517938123);
    msg.setSource(45412U);
    msg.setSourceEntity(48U);
    msg.setDestination(65138U);
    msg.setDestinationEntity(30U);
    msg.id = 98U;
    msg.angle = 0.00101449151815;

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
    msg.setTimeStamp(0.409729460715);
    msg.setSource(58840U);
    msg.setSourceEntity(156U);
    msg.setDestination(30135U);
    msg.setDestinationEntity(137U);
    msg.op = 193U;
    msg.actions.assign("DJGWYDWEXICDANSIPXUVQCNEZMMEHRKETICMWHSEWWPNIDFIWPZSDHRVNSNOUBDASTGLKTYNDCEHUBTRMVWYUVMIQCXQTORZXJITNJFLUYZNGJYRVPKMLMJVUOSZZVCKHGHGXHHNEGMCFRXVSOICAZMVHZJZBWBTGFFQMKOLAAEVAQOJXJALFBPLFBGODLAPGRZKJPFBFRUSYDDANRYPUGSKXWRQQOBLPQLPLBKCWFIKHBJQCTT");

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
    msg.setTimeStamp(0.834333789228);
    msg.setSource(24011U);
    msg.setSourceEntity(182U);
    msg.setDestination(19974U);
    msg.setDestinationEntity(132U);
    msg.op = 24U;
    msg.actions.assign("XXMHRBAVBETTLGQRMQAKPWPCWESVKYBBKZEQALOIKZSYCOZLGYCIUDZIWZDCVVWZRLQMWQUTPMPINZUWKFPDWTJZAVSHOQYSDZDVYUFFLJGHPAQCLHPYKXGDMCFKMURAIENALVGTYTUHPAZNDDXJQRJBHSINNNFFPBJCFOXHSRKVKIXABUIJWSFMXGBCGGMBUSURTSNSOBEDCLTGOOYONEXRNDWURCVFKO");

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
    msg.setTimeStamp(0.667116991115);
    msg.setSource(59703U);
    msg.setSourceEntity(247U);
    msg.setDestination(60769U);
    msg.setDestinationEntity(127U);
    msg.op = 199U;
    msg.actions.assign("EZOGHWZXSKHPCRXPDNKHSWAYCTGNRJVFIOGTOHYABTMKRRIGNOYEIGUJPUFARLXVGXCLWFABCIXDBLQSHWCBQCXKABUVKEVLEUPIKTTMJGSLPLYUBKLCUQXEHYDAVVTJOIFOSZDZWAQPWNZSYNQMSYMPMUDXEZTYZQIFDALNMVUQROQCNGDTBPFEGKARRSXRUHJFA");

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
    msg.setTimeStamp(0.445135478988);
    msg.setSource(58780U);
    msg.setSourceEntity(206U);
    msg.setDestination(48703U);
    msg.setDestinationEntity(61U);
    msg.actions.assign("ALXXRIUEHFMRQOIQGUDKZRAKVTWNHTUQAVBHXFLELJEJAGMUYHKCDUENZINYBDDYCDGAYFSYBPOADRWXZQVZFXWVGNXZVHJQWEFIHBTNFYFKCURUYILCOTUHIWPOJSZGBOSZJMJRTKYSNSCVRPTRKCXGXROXDBBCCVLVSTPOKQ");

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
    msg.setTimeStamp(0.936290968209);
    msg.setSource(21091U);
    msg.setSourceEntity(71U);
    msg.setDestination(56276U);
    msg.setDestinationEntity(191U);
    msg.actions.assign("GIWYHEDWUZKGHZMYKWAUZDLRGFIUBOBRFFJQNQZDQFJCTPWYJC");

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
    msg.setTimeStamp(0.088145131301);
    msg.setSource(1881U);
    msg.setSourceEntity(85U);
    msg.setDestination(36200U);
    msg.setDestinationEntity(241U);
    msg.actions.assign("QWYSXNRJBXFMJPDRWOMGPBLYIAEXPWGPBZSMPZAOXVPNRDPJQKLAEQLUUTXKWYWEWMRMMNFSTOJDUKQUJOTSLHECAHLPILQEYUMIKJTMZLF");

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
    msg.setTimeStamp(0.968085508784);
    msg.setSource(26216U);
    msg.setSourceEntity(33U);
    msg.setDestination(17007U);
    msg.setDestinationEntity(133U);
    msg.button = 99U;
    msg.value = 210U;

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
    msg.setTimeStamp(0.995546379379);
    msg.setSource(57511U);
    msg.setSourceEntity(35U);
    msg.setDestination(59492U);
    msg.setDestinationEntity(112U);
    msg.button = 126U;
    msg.value = 233U;

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
    msg.setTimeStamp(0.0653266854575);
    msg.setSource(29337U);
    msg.setSourceEntity(105U);
    msg.setDestination(9983U);
    msg.setDestinationEntity(182U);
    msg.button = 134U;
    msg.value = 148U;

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
    msg.setTimeStamp(0.282465156993);
    msg.setSource(62521U);
    msg.setSourceEntity(213U);
    msg.setDestination(12616U);
    msg.setDestinationEntity(3U);
    msg.op = 29U;
    msg.text.assign("AXEFSXBLPMENRVNPDDTYRZHTNOLGZLJKXTYZAYWGDARADUHOQZFHPMSMNVNNIUDAKLWEXYESQUSCFAYXVMN");

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
    msg.setTimeStamp(0.505481588985);
    msg.setSource(34001U);
    msg.setSourceEntity(176U);
    msg.setDestination(55682U);
    msg.setDestinationEntity(38U);
    msg.op = 151U;
    msg.text.assign("ERNMBDZKSVAZIOALNQQLEITOYKHVWWOICUYYLBSGHKUHAAGFNYSOHACXSVRTWCDUIQTIEYLQIENGDURLMFTDLGBYOFPROTGMDASKDKIJRJBJNCZYRQWWTMHDLNQDRYTTAMJQEUSIOAWXFMHJXGXECVEPKZKFLPZKMLBBXMPYCGZUHKSWUNXZORHWYEVJNCS");

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
    msg.setTimeStamp(0.648065814915);
    msg.setSource(28092U);
    msg.setSourceEntity(222U);
    msg.setDestination(15560U);
    msg.setDestinationEntity(130U);
    msg.op = 248U;
    msg.text.assign("LVQAPWZCDLIKPLIHPQXNNSNFMLXRCPZDCYJEDNWSEGKDDWYWAKECJMIJVTXYQFPFQMOXEUKFWGWULVRHNQBIRVAVSFCUTHGYHEKEN");

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
    msg.setTimeStamp(0.840547575987);
    msg.setSource(40285U);
    msg.setSourceEntity(208U);
    msg.setDestination(53858U);
    msg.setDestinationEntity(59U);
    msg.op = 13U;
    msg.time_remain = 0.893302335752;
    msg.sched_time = 0.23475659104;

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
    msg.setTimeStamp(0.861505104015);
    msg.setSource(25964U);
    msg.setSourceEntity(173U);
    msg.setDestination(27609U);
    msg.setDestinationEntity(23U);
    msg.op = 248U;
    msg.time_remain = 0.420341339131;
    msg.sched_time = 0.941391111489;

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
    msg.setTimeStamp(0.962068479792);
    msg.setSource(40348U);
    msg.setSourceEntity(119U);
    msg.setDestination(57381U);
    msg.setDestinationEntity(254U);
    msg.op = 225U;
    msg.time_remain = 0.0527557018012;
    msg.sched_time = 0.371087425211;

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
    msg.setTimeStamp(0.253533102545);
    msg.setSource(52796U);
    msg.setSourceEntity(106U);
    msg.setDestination(34902U);
    msg.setDestinationEntity(184U);
    msg.name.assign("KOGJSWZJKUJTPQMWLKGAVXXEBZVDAEYERPD");
    msg.op = 172U;
    msg.sched_time = 0.102003749819;

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
    msg.setTimeStamp(0.476638459073);
    msg.setSource(1641U);
    msg.setSourceEntity(24U);
    msg.setDestination(11772U);
    msg.setDestinationEntity(37U);
    msg.name.assign("MPYJTFTNTLHOKJVBUUOTNCZIEFTJUFSXFBNCQXCMDEDMBKCAJGVIKHQXQGLAHXQNQHRFEKEYMHWTZLQIJOVTIVXVMGZSFYIARDPZAORECKSSOXKNGHIBJVLVVBDZWKXYBYRLC");
    msg.op = 51U;
    msg.sched_time = 0.302258633988;

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
    msg.setTimeStamp(0.766292527809);
    msg.setSource(30114U);
    msg.setSourceEntity(162U);
    msg.setDestination(38947U);
    msg.setDestinationEntity(81U);
    msg.name.assign("OVSHZJQJKKCELYWBZHMBVZDLPARPJCVVQHKUUYDXYLESUBXOYRASIDMAVPQTUMNWLAPOWGTCSCSOIQBDYEULTNABTXVEVONGKYDSHMNVSAUURWLNYQMFKYNJQZZYSJGZTGCKICXTBWOGWFRROBJANFZQJEQMTWRRJFMIPMCVGYZIWISHHFGJJOIQDXUXKIVBMPDTXXDAIEIZLNEHLNGQHNXPHCFRAFTRBOKUFOMPLGL");
    msg.op = 6U;
    msg.sched_time = 0.143864929136;

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
    msg.setTimeStamp(0.770730792915);
    msg.setSource(56796U);
    msg.setSourceEntity(217U);
    msg.setDestination(55276U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.417333171271);
    msg.setSource(49021U);
    msg.setSourceEntity(63U);
    msg.setDestination(65503U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.779648394998);
    msg.setSource(176U);
    msg.setSourceEntity(171U);
    msg.setDestination(7672U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.560862587664);
    msg.setSource(1756U);
    msg.setSourceEntity(152U);
    msg.setDestination(2927U);
    msg.setDestinationEntity(60U);
    msg.name.assign("IEQDMURVJMNZTAYBZCUOSLVMOQUDIQVFKPLGLBAEKVZPYGLJSOCQHGJYAODPYEOKWLADLVASUEUMKJKTDLYXEFUJNIZVBOJTMGVJNCQSHRKYYIIWDIRNFZWS");
    msg.state = 241U;

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
    msg.setTimeStamp(0.140440484085);
    msg.setSource(7147U);
    msg.setSourceEntity(37U);
    msg.setDestination(57758U);
    msg.setDestinationEntity(96U);
    msg.name.assign("ZYOTNQWHOVDXPGRWUDHYTCZ");
    msg.state = 20U;

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
    msg.setTimeStamp(0.364446303634);
    msg.setSource(12152U);
    msg.setSourceEntity(170U);
    msg.setDestination(31937U);
    msg.setDestinationEntity(122U);
    msg.name.assign("MNWYCPDKANYEOWXXZZ");
    msg.state = 215U;

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
    msg.setTimeStamp(0.995400143094);
    msg.setSource(50575U);
    msg.setSourceEntity(148U);
    msg.setDestination(45421U);
    msg.setDestinationEntity(117U);
    msg.name.assign("MIUQJYFAHTCSGUYIYPVSATZVFTOPXHUHZWJNFGBNWXFJVROYKTCRECVUSQBBSURRIGNFDMKROSTXPNRZLBIQOPCQIONHLCTAKGLDSZFHNCMLPEDYZMAZVLQDLAYIPONKIQVQDHJSECSLJLMVJWVCPVNKVZRTOAWJLWFQXPGDKNSBJYCQZXZERLBDECXEXOKDJETWWBTDYRTFHGHGUXKEKAMYUWGIKBWSM");
    msg.value = 248U;

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
    msg.setTimeStamp(0.470617712883);
    msg.setSource(42051U);
    msg.setSourceEntity(185U);
    msg.setDestination(62334U);
    msg.setDestinationEntity(40U);
    msg.name.assign("TGJAJIDVBFUADYNIEPRVQEAUIPSXQYQMKKRDNAEMPTSYFEOGRXQMWHNUOXNXONPKVLFIDKPCUVCXNDCHOWQZAIHWLBKKVMJYSPGNEFLIHDFMJJZPQOSTOZKYASIARD");
    msg.value = 189U;

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
    msg.setTimeStamp(0.416809023627);
    msg.setSource(61463U);
    msg.setSourceEntity(56U);
    msg.setDestination(2244U);
    msg.setDestinationEntity(63U);
    msg.name.assign("QTANDSSRZSODALOCXWBXMSDBHPPJIWFOVSYLVBLZNQFYURQCMJKPJS");
    msg.value = 69U;

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
    msg.setTimeStamp(0.503130773837);
    msg.setSource(13189U);
    msg.setSourceEntity(137U);
    msg.setDestination(60197U);
    msg.setDestinationEntity(199U);
    msg.name.assign("LZTWPROLPSUXNGFJQOEHUBKTNLYJGXZNIVMRTIBGYSXJCEWMUXJYFIFPZSPIWWRZZYBRMHAYRCWRQFBEVIOHEVBLUCNKCWHSTEDFJQMOPNAAGEPOQMSKVHUQENQXPOKTLGJIJYVDRSVXUTZCKPHTDQCFMKAXITXHUCYXNHAXQZFGLGTJKBFJEMADIBCYFCSQNZVAUYDGKPUHVWZAEUBGWODTLFRSNQVSHDZAOMIVYDMBNAWRKMCOLIPEKLJBW");

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
    msg.setTimeStamp(0.0209876594294);
    msg.setSource(20408U);
    msg.setSourceEntity(202U);
    msg.setDestination(61532U);
    msg.setDestinationEntity(48U);
    msg.name.assign("ATASENAKLJZJRVVOSRVVJODTSEKVMDWTHCNQYSEHUJGHIXXQYYERLYUGQYULAWJNHAGBNSOYIXFURLRXOCMDARDTQZHENCCNZFEOJKMFNAMQTXFLETOGBGRGVKQMJBKJNIDAFOZFLSDCOIBGS");

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
    msg.setTimeStamp(0.958003326245);
    msg.setSource(24430U);
    msg.setSourceEntity(88U);
    msg.setDestination(57308U);
    msg.setDestinationEntity(2U);
    msg.name.assign("VSIFUMVSKLTHPQXBFXMNDTDFYUVIQALVYBGCCKHXWXSJCHJVTSDPYLEGTLBOMKWRSQAIAAYDH");

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
    msg.setTimeStamp(0.420000062894);
    msg.setSource(30255U);
    msg.setSourceEntity(131U);
    msg.setDestination(58827U);
    msg.setDestinationEntity(55U);
    msg.name.assign("UMQLWMVUCWVUVZAFQALBOIHVLGQVYZGBUIPCNTOZTJJCFFZRDKQRJMJZKUMYUOKHITCLSYYJRGIHWDFBEAEIGYSYAFKWKQXWVHFTVQGMHMTWHTFURHVOFUYMSEZXQDNKQDCSQTLCDGPGFWAXOVGBPVSCRTRPIPOINZPJRCHESNCELSWCEK");
    msg.value = 80U;

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
    msg.setTimeStamp(0.895492143867);
    msg.setSource(43154U);
    msg.setSourceEntity(15U);
    msg.setDestination(56040U);
    msg.setDestinationEntity(241U);
    msg.name.assign("MIKXMVYYCPZDEJWPBNASIBAPJQJRAEMYKFSRCESTRKWJLCSYNRLXBWEHWGPEHCKYQZPLDOFUU");
    msg.value = 13U;

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
    msg.setTimeStamp(0.905955794127);
    msg.setSource(23183U);
    msg.setSourceEntity(226U);
    msg.setDestination(14938U);
    msg.setDestinationEntity(120U);
    msg.name.assign("WOMLGJXDMPZEVBJVMMDHMDSEIQHXQLUUNNYRYFMLWXQBZLSEPCSUBWTNOJXBLYDJIGVEPXRPYSATBZILBGFDWOIVCFQXFALZFNTYARFZXBGBAFDRJZWTKELACOSHJUANSWNHUWKQTLRYWYCHVDRCVTGHUPVANKYUW");
    msg.value = 217U;

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
    msg.setTimeStamp(0.0507352164952);
    msg.setSource(4198U);
    msg.setSourceEntity(128U);
    msg.setDestination(56772U);
    msg.setDestinationEntity(202U);
    msg.id = 73U;
    msg.period = 4294570614U;
    msg.duty_cycle = 2228155773U;

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
    msg.setTimeStamp(0.19410865411);
    msg.setSource(25325U);
    msg.setSourceEntity(139U);
    msg.setDestination(11465U);
    msg.setDestinationEntity(174U);
    msg.id = 225U;
    msg.period = 2659228532U;
    msg.duty_cycle = 2485910001U;

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
    msg.setTimeStamp(0.364971350454);
    msg.setSource(20167U);
    msg.setSourceEntity(244U);
    msg.setDestination(31989U);
    msg.setDestinationEntity(135U);
    msg.id = 215U;
    msg.period = 157261646U;
    msg.duty_cycle = 2524462615U;

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
    msg.setTimeStamp(0.925061909299);
    msg.setSource(63903U);
    msg.setSourceEntity(152U);
    msg.setDestination(31650U);
    msg.setDestinationEntity(68U);
    msg.id = 62U;
    msg.period = 1211859889U;
    msg.duty_cycle = 463201482U;

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
    msg.setTimeStamp(0.00850692165494);
    msg.setSource(43355U);
    msg.setSourceEntity(239U);
    msg.setDestination(40470U);
    msg.setDestinationEntity(25U);
    msg.id = 218U;
    msg.period = 2768084292U;
    msg.duty_cycle = 2137484381U;

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
    msg.setTimeStamp(0.8954532848);
    msg.setSource(4114U);
    msg.setSourceEntity(183U);
    msg.setDestination(61551U);
    msg.setDestinationEntity(68U);
    msg.id = 160U;
    msg.period = 3097267835U;
    msg.duty_cycle = 203005701U;

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
    msg.setTimeStamp(0.386187790457);
    msg.setSource(32905U);
    msg.setSourceEntity(39U);
    msg.setDestination(11222U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.761726084096;
    msg.lon = 0.343602441527;
    msg.height = 0.0581651013564;
    msg.x = 0.0470989893742;
    msg.y = 0.887569522005;
    msg.z = 0.201759467801;
    msg.phi = 0.489331214879;
    msg.theta = 0.35595001874;
    msg.psi = 0.0616225688628;
    msg.u = 0.0555498476167;
    msg.v = 0.260013845829;
    msg.w = 0.51704012505;
    msg.vx = 0.0472859967428;
    msg.vy = 0.101748107936;
    msg.vz = 0.788887572431;
    msg.p = 0.439722250086;
    msg.q = 0.128384986433;
    msg.r = 0.518090866768;
    msg.depth = 0.824177940597;
    msg.alt = 0.478263630422;

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
    msg.setTimeStamp(0.66071545652);
    msg.setSource(4819U);
    msg.setSourceEntity(239U);
    msg.setDestination(23534U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.770301895987;
    msg.lon = 0.760505226923;
    msg.height = 0.636653722629;
    msg.x = 0.864816481576;
    msg.y = 0.163262878324;
    msg.z = 0.0389686168421;
    msg.phi = 0.462625129337;
    msg.theta = 0.106261776413;
    msg.psi = 0.309506210668;
    msg.u = 0.454079208197;
    msg.v = 0.185455023933;
    msg.w = 0.110268712908;
    msg.vx = 0.0843084020633;
    msg.vy = 0.426702834997;
    msg.vz = 0.302729181084;
    msg.p = 0.0331109750474;
    msg.q = 0.33002899813;
    msg.r = 0.861319347116;
    msg.depth = 0.196860199723;
    msg.alt = 0.700385825968;

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
    msg.setTimeStamp(0.228340641792);
    msg.setSource(54645U);
    msg.setSourceEntity(16U);
    msg.setDestination(61931U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.402146314147;
    msg.lon = 0.0453039996525;
    msg.height = 0.740095561115;
    msg.x = 0.308352324094;
    msg.y = 0.111962819799;
    msg.z = 0.375142823704;
    msg.phi = 0.969730576293;
    msg.theta = 0.594456424529;
    msg.psi = 0.969940424519;
    msg.u = 0.304804562966;
    msg.v = 0.885667878999;
    msg.w = 0.665221408552;
    msg.vx = 0.603334569791;
    msg.vy = 0.23429287355;
    msg.vz = 0.320439299456;
    msg.p = 0.806763362295;
    msg.q = 0.35696777156;
    msg.r = 0.187176739382;
    msg.depth = 0.930951280458;
    msg.alt = 0.57406539212;

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
    msg.setTimeStamp(0.786803690942);
    msg.setSource(24728U);
    msg.setSourceEntity(160U);
    msg.setDestination(1313U);
    msg.setDestinationEntity(180U);
    msg.x = 0.681764660845;
    msg.y = 0.236911283278;
    msg.z = 0.280337182284;

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
    msg.setTimeStamp(0.573198650455);
    msg.setSource(5069U);
    msg.setSourceEntity(137U);
    msg.setDestination(22634U);
    msg.setDestinationEntity(61U);
    msg.x = 0.281690527266;
    msg.y = 0.941547447028;
    msg.z = 0.564567446147;

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
    msg.setTimeStamp(0.497753432855);
    msg.setSource(26483U);
    msg.setSourceEntity(166U);
    msg.setDestination(7514U);
    msg.setDestinationEntity(216U);
    msg.x = 0.739803024569;
    msg.y = 0.878078007004;
    msg.z = 0.146605040788;

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
    msg.setTimeStamp(0.448290820432);
    msg.setSource(63509U);
    msg.setSourceEntity(203U);
    msg.setDestination(41376U);
    msg.setDestinationEntity(113U);
    msg.value = 0.795623226933;

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
    msg.setTimeStamp(0.617717275494);
    msg.setSource(16288U);
    msg.setSourceEntity(29U);
    msg.setDestination(63905U);
    msg.setDestinationEntity(54U);
    msg.value = 0.783782223322;

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
    msg.setTimeStamp(0.278645906454);
    msg.setSource(49424U);
    msg.setSourceEntity(225U);
    msg.setDestination(48487U);
    msg.setDestinationEntity(133U);
    msg.value = 0.0570571242134;

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
    msg.setTimeStamp(0.485831680647);
    msg.setSource(8857U);
    msg.setSourceEntity(16U);
    msg.setDestination(61119U);
    msg.setDestinationEntity(25U);
    msg.value = 0.261924602719;

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
    msg.setTimeStamp(0.41822084937);
    msg.setSource(5521U);
    msg.setSourceEntity(198U);
    msg.setDestination(11320U);
    msg.setDestinationEntity(178U);
    msg.value = 0.326633282921;

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
    msg.setTimeStamp(0.133364292823);
    msg.setSource(11187U);
    msg.setSourceEntity(108U);
    msg.setDestination(1473U);
    msg.setDestinationEntity(91U);
    msg.value = 0.491718791961;

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
    msg.setTimeStamp(0.827926351383);
    msg.setSource(11619U);
    msg.setSourceEntity(154U);
    msg.setDestination(63944U);
    msg.setDestinationEntity(42U);
    msg.x = 0.255944179097;
    msg.y = 0.739865446753;
    msg.z = 0.851117177137;
    msg.phi = 0.982965668651;
    msg.theta = 0.839712577628;
    msg.psi = 0.968881324415;
    msg.p = 0.170675147684;
    msg.q = 0.481839771075;
    msg.r = 0.687183729196;
    msg.u = 0.252276311882;
    msg.v = 0.382502907265;
    msg.w = 0.988081845704;
    msg.bias_psi = 0.216513395706;
    msg.bias_r = 0.646319761744;

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
    msg.setTimeStamp(0.753978651565);
    msg.setSource(45873U);
    msg.setSourceEntity(22U);
    msg.setDestination(8892U);
    msg.setDestinationEntity(46U);
    msg.x = 0.0143048606226;
    msg.y = 0.633012249542;
    msg.z = 0.234939618111;
    msg.phi = 0.794493348206;
    msg.theta = 0.80895461189;
    msg.psi = 0.082645766467;
    msg.p = 0.203332844104;
    msg.q = 0.258743050231;
    msg.r = 0.361029049923;
    msg.u = 0.215107460087;
    msg.v = 0.238973464679;
    msg.w = 0.591487535757;
    msg.bias_psi = 0.430204926771;
    msg.bias_r = 0.191288168435;

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
    msg.setTimeStamp(0.947548665242);
    msg.setSource(63277U);
    msg.setSourceEntity(187U);
    msg.setDestination(25694U);
    msg.setDestinationEntity(243U);
    msg.x = 0.59703187007;
    msg.y = 0.449359136486;
    msg.z = 0.992097988291;
    msg.phi = 0.410429511046;
    msg.theta = 0.60567436065;
    msg.psi = 0.974765314331;
    msg.p = 0.649244247001;
    msg.q = 0.703144612452;
    msg.r = 0.0978990293374;
    msg.u = 0.509102349757;
    msg.v = 0.439881965654;
    msg.w = 0.414329507433;
    msg.bias_psi = 0.855988951843;
    msg.bias_r = 0.582885003402;

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
    msg.setTimeStamp(0.785539763948);
    msg.setSource(40916U);
    msg.setSourceEntity(44U);
    msg.setDestination(5196U);
    msg.setDestinationEntity(244U);
    msg.bias_psi = 0.255348997015;
    msg.bias_r = 0.156755638925;
    msg.cog = 0.471900067119;
    msg.cyaw = 0.0158502373981;
    msg.gps_rej_level = 0.145162281978;
    msg.lbl_rej_level = 0.944970938503;
    msg.custom_x = 0.587830650843;
    msg.custom_y = 0.519587011379;
    msg.custom_z = 0.178588420132;

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
    msg.setTimeStamp(0.693262419394);
    msg.setSource(6870U);
    msg.setSourceEntity(177U);
    msg.setDestination(65512U);
    msg.setDestinationEntity(175U);
    msg.bias_psi = 0.68714918026;
    msg.bias_r = 0.412738494233;
    msg.cog = 0.392712742753;
    msg.cyaw = 0.456772727772;
    msg.gps_rej_level = 0.768311242159;
    msg.lbl_rej_level = 0.0225332016576;
    msg.custom_x = 0.116007308275;
    msg.custom_y = 0.938900116246;
    msg.custom_z = 0.738313567472;

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
    msg.setTimeStamp(0.929929278443);
    msg.setSource(18833U);
    msg.setSourceEntity(5U);
    msg.setDestination(17319U);
    msg.setDestinationEntity(51U);
    msg.bias_psi = 0.706875538075;
    msg.bias_r = 0.302378972769;
    msg.cog = 0.710745339468;
    msg.cyaw = 0.92921545394;
    msg.gps_rej_level = 0.290106600748;
    msg.lbl_rej_level = 0.83185695667;
    msg.custom_x = 0.784651126643;
    msg.custom_y = 0.109114817523;
    msg.custom_z = 0.769362795595;

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
    msg.setTimeStamp(0.416674116485);
    msg.setSource(23898U);
    msg.setSourceEntity(236U);
    msg.setDestination(44799U);
    msg.setDestinationEntity(121U);
    msg.utc_time = 0.0811365943019;
    msg.reason = 135U;

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
    msg.setTimeStamp(0.631428150472);
    msg.setSource(6538U);
    msg.setSourceEntity(176U);
    msg.setDestination(40067U);
    msg.setDestinationEntity(137U);
    msg.utc_time = 0.163668686049;
    msg.reason = 164U;

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
    msg.setTimeStamp(0.910901997114);
    msg.setSource(13065U);
    msg.setSourceEntity(157U);
    msg.setDestination(60754U);
    msg.setDestinationEntity(64U);
    msg.utc_time = 0.452661104504;
    msg.reason = 35U;

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
    msg.setTimeStamp(0.830318954319);
    msg.setSource(35840U);
    msg.setSourceEntity(112U);
    msg.setDestination(62212U);
    msg.setDestinationEntity(148U);
    msg.id = 43U;
    msg.range = 0.294642030751;
    msg.acceptance = 191U;

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
    msg.setTimeStamp(0.850557885882);
    msg.setSource(25653U);
    msg.setSourceEntity(198U);
    msg.setDestination(2632U);
    msg.setDestinationEntity(236U);
    msg.id = 137U;
    msg.range = 0.521087552438;
    msg.acceptance = 12U;

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
    msg.setTimeStamp(0.292633422788);
    msg.setSource(6158U);
    msg.setSourceEntity(114U);
    msg.setDestination(19921U);
    msg.setDestinationEntity(153U);
    msg.id = 26U;
    msg.range = 0.686623358654;
    msg.acceptance = 167U;

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
    msg.setTimeStamp(0.949128943399);
    msg.setSource(10197U);
    msg.setSourceEntity(69U);
    msg.setDestination(33195U);
    msg.setDestinationEntity(233U);
    msg.type = 9U;
    msg.reason = 140U;
    msg.value = 0.335896310274;
    msg.timestep = 0.144725478979;

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
    msg.setTimeStamp(0.476613791799);
    msg.setSource(53065U);
    msg.setSourceEntity(117U);
    msg.setDestination(26275U);
    msg.setDestinationEntity(173U);
    msg.type = 59U;
    msg.reason = 17U;
    msg.value = 0.872603135303;
    msg.timestep = 0.718045768822;

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
    msg.setTimeStamp(0.136532312972);
    msg.setSource(927U);
    msg.setSourceEntity(162U);
    msg.setDestination(31751U);
    msg.setDestinationEntity(94U);
    msg.type = 5U;
    msg.reason = 44U;
    msg.value = 0.86574055625;
    msg.timestep = 0.853283131406;

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
    msg.setTimeStamp(0.297854770291);
    msg.setSource(62328U);
    msg.setSourceEntity(242U);
    msg.setDestination(41980U);
    msg.setDestinationEntity(143U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZRXCOAGODFQSBVTJDNDYAFYNRQIPWEQSLBEMXKLFNAPRNXXJPJWFQMYSQAXGIUOTAQEVTGBQIHGLUJRKLUHWXJIIUGEJZCONPAKCSKZJMUOQFALZMELMQNCKRJGZIBPTFUKJEUKRRLDTXYDZYHIQPVHDDBEVHXYFNVFHHWWEMCESLBJDUSGGTPUZFGOLKTTYPXMVVAWADYZIZEGCIPSOBSLYX");
    tmp_msg_0.lat = 0.0244452473218;
    tmp_msg_0.lon = 0.641024423982;
    tmp_msg_0.depth = 0.361494853927;
    tmp_msg_0.query_channel = 20U;
    tmp_msg_0.reply_channel = 105U;
    tmp_msg_0.transponder_delay = 116U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.680711159016;
    msg.y = 0.0289047132954;
    msg.var_x = 0.23892273198;
    msg.var_y = 0.668049499797;
    msg.distance = 0.296184310893;

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
    msg.setTimeStamp(0.34986161778);
    msg.setSource(38172U);
    msg.setSourceEntity(234U);
    msg.setDestination(57570U);
    msg.setDestinationEntity(135U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ILBCSMVYPILBHLNBQUJDIVAXTKHHTFHOZQGMQJBEYEDPWZFNRULMNEXDNAUFXCPKWJBHTWYXQKLRATVSZMVCMKUCOARWOQRGADEJTSBXXVZXRDOFGZIZYF");
    tmp_msg_0.lat = 0.329206694127;
    tmp_msg_0.lon = 0.828925514093;
    tmp_msg_0.depth = 0.292150320094;
    tmp_msg_0.query_channel = 145U;
    tmp_msg_0.reply_channel = 216U;
    tmp_msg_0.transponder_delay = 143U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.043093158918;
    msg.y = 0.989720077958;
    msg.var_x = 0.498479564263;
    msg.var_y = 0.127730661225;
    msg.distance = 0.417027885983;

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
    msg.setTimeStamp(0.778860313008);
    msg.setSource(33518U);
    msg.setSourceEntity(101U);
    msg.setDestination(46084U);
    msg.setDestinationEntity(12U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AVDVLOWDKXFRAQHTTPYGBASFDSHWJBIVZQQCPFGEPKPYCGROYTAXTMGAVRUFOQZFVUQZDMCXXAGHTWB");
    tmp_msg_0.lat = 0.302479196942;
    tmp_msg_0.lon = 0.267496292058;
    tmp_msg_0.depth = 0.811151000938;
    tmp_msg_0.query_channel = 200U;
    tmp_msg_0.reply_channel = 246U;
    tmp_msg_0.transponder_delay = 220U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.488606375185;
    msg.y = 0.107065923791;
    msg.var_x = 0.411815553168;
    msg.var_y = 0.12148459965;
    msg.distance = 0.105019508969;

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
    msg.setTimeStamp(0.0257582459734);
    msg.setSource(16865U);
    msg.setSourceEntity(108U);
    msg.setDestination(44251U);
    msg.setDestinationEntity(188U);
    msg.state = 17U;

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
    msg.setTimeStamp(0.0421096022018);
    msg.setSource(46970U);
    msg.setSourceEntity(236U);
    msg.setDestination(44149U);
    msg.setDestinationEntity(81U);
    msg.state = 162U;

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
    msg.setTimeStamp(0.993886949241);
    msg.setSource(53756U);
    msg.setSourceEntity(247U);
    msg.setDestination(8255U);
    msg.setDestinationEntity(225U);
    msg.state = 67U;

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
    msg.setTimeStamp(0.850440120425);
    msg.setSource(62250U);
    msg.setSourceEntity(250U);
    msg.setDestination(22624U);
    msg.setDestinationEntity(144U);
    msg.x = 0.963246716707;
    msg.y = 0.18684389515;
    msg.z = 0.635088979118;

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
    msg.setTimeStamp(0.918747204738);
    msg.setSource(50078U);
    msg.setSourceEntity(211U);
    msg.setDestination(49006U);
    msg.setDestinationEntity(59U);
    msg.x = 0.872545097281;
    msg.y = 0.47978761774;
    msg.z = 0.875274389294;

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
    msg.setTimeStamp(0.607044336201);
    msg.setSource(9501U);
    msg.setSourceEntity(19U);
    msg.setDestination(49315U);
    msg.setDestinationEntity(250U);
    msg.x = 0.0666167620388;
    msg.y = 0.307915723361;
    msg.z = 0.893140677762;

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
    msg.setTimeStamp(0.693787544227);
    msg.setSource(51609U);
    msg.setSourceEntity(2U);
    msg.setDestination(7950U);
    msg.setDestinationEntity(4U);
    msg.va = 0.520908591517;
    msg.aoa = 0.234092289535;
    msg.ssa = 0.759225060194;

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
    msg.setTimeStamp(0.634186648366);
    msg.setSource(1473U);
    msg.setSourceEntity(240U);
    msg.setDestination(58159U);
    msg.setDestinationEntity(193U);
    msg.va = 0.344515714398;
    msg.aoa = 0.854764836663;
    msg.ssa = 0.101914755307;

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
    msg.setTimeStamp(0.582355357118);
    msg.setSource(57948U);
    msg.setSourceEntity(226U);
    msg.setDestination(8173U);
    msg.setDestinationEntity(66U);
    msg.va = 0.71988661965;
    msg.aoa = 0.195466793819;
    msg.ssa = 0.0172532690111;

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
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.171202601458);
    msg.setSource(63381U);
    msg.setSourceEntity(81U);
    msg.setDestination(46972U);
    msg.setDestinationEntity(63U);
    msg.value = 0.213945083586;
    msg.off = 0.607332524689;

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
    msg.setTimeStamp(0.00749247620723);
    msg.setSource(60671U);
    msg.setSourceEntity(177U);
    msg.setDestination(52815U);
    msg.setDestinationEntity(218U);
    msg.value = 0.849217054237;
    msg.off = 0.892606674686;

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
    msg.setTimeStamp(0.596983778933);
    msg.setSource(22933U);
    msg.setSourceEntity(24U);
    msg.setDestination(46115U);
    msg.setDestinationEntity(45U);
    msg.value = 0.425234382161;
    msg.off = 0.125107468797;

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
    msg.setTimeStamp(0.709833386866);
    msg.setSource(50848U);
    msg.setSourceEntity(160U);
    msg.setDestination(14296U);
    msg.setDestinationEntity(140U);
    msg.value = 0.112955531543;
    msg.z_units = 73U;

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
    msg.setTimeStamp(0.98934300967);
    msg.setSource(33461U);
    msg.setSourceEntity(23U);
    msg.setDestination(54401U);
    msg.setDestinationEntity(23U);
    msg.value = 0.784470010497;
    msg.z_units = 240U;

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
    msg.setTimeStamp(0.263647223965);
    msg.setSource(51924U);
    msg.setSourceEntity(205U);
    msg.setDestination(61298U);
    msg.setDestinationEntity(106U);
    msg.value = 0.142255737289;
    msg.z_units = 130U;

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
    msg.setTimeStamp(0.883059451802);
    msg.setSource(37838U);
    msg.setSourceEntity(124U);
    msg.setDestination(1167U);
    msg.setDestinationEntity(249U);
    msg.value = 0.216367945073;
    msg.speed_units = 15U;

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
    msg.setTimeStamp(0.540267857725);
    msg.setSource(5189U);
    msg.setSourceEntity(4U);
    msg.setDestination(18084U);
    msg.setDestinationEntity(28U);
    msg.value = 0.59366944153;
    msg.speed_units = 81U;

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
    msg.setTimeStamp(0.557021284911);
    msg.setSource(10121U);
    msg.setSourceEntity(31U);
    msg.setDestination(4408U);
    msg.setDestinationEntity(98U);
    msg.value = 0.0532619827243;
    msg.speed_units = 221U;

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
    msg.setTimeStamp(0.482890567404);
    msg.setSource(58125U);
    msg.setSourceEntity(58U);
    msg.setDestination(7898U);
    msg.setDestinationEntity(2U);
    msg.value = 0.599335998083;

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
    msg.setTimeStamp(0.984207564338);
    msg.setSource(18499U);
    msg.setSourceEntity(45U);
    msg.setDestination(15403U);
    msg.setDestinationEntity(245U);
    msg.value = 0.797512107038;

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
    msg.setTimeStamp(0.35819649393);
    msg.setSource(14578U);
    msg.setSourceEntity(134U);
    msg.setDestination(46626U);
    msg.setDestinationEntity(230U);
    msg.value = 0.969181722913;

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
    msg.setTimeStamp(0.903635002342);
    msg.setSource(52992U);
    msg.setSourceEntity(143U);
    msg.setDestination(59465U);
    msg.setDestinationEntity(168U);
    msg.value = 0.613259626145;

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
    msg.setTimeStamp(0.542388700248);
    msg.setSource(7776U);
    msg.setSourceEntity(130U);
    msg.setDestination(61017U);
    msg.setDestinationEntity(239U);
    msg.value = 0.522540275158;

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
    msg.setTimeStamp(0.240235480514);
    msg.setSource(4455U);
    msg.setSourceEntity(205U);
    msg.setDestination(50338U);
    msg.setDestinationEntity(8U);
    msg.value = 0.31744422668;

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
    msg.setTimeStamp(0.365638911551);
    msg.setSource(60695U);
    msg.setSourceEntity(185U);
    msg.setDestination(6554U);
    msg.setDestinationEntity(202U);
    msg.value = 0.159950506159;

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
    msg.setTimeStamp(0.429412939343);
    msg.setSource(40343U);
    msg.setSourceEntity(162U);
    msg.setDestination(12417U);
    msg.setDestinationEntity(229U);
    msg.value = 0.562071036596;

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
    msg.setTimeStamp(0.408233022459);
    msg.setSource(20272U);
    msg.setSourceEntity(13U);
    msg.setDestination(61879U);
    msg.setDestinationEntity(157U);
    msg.value = 0.556975639754;

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
    msg.setTimeStamp(0.135440932625);
    msg.setSource(51543U);
    msg.setSourceEntity(158U);
    msg.setDestination(51425U);
    msg.setDestinationEntity(85U);
    msg.path_ref = 5240282U;
    msg.start_lat = 0.22022518524;
    msg.start_lon = 0.143147354451;
    msg.start_z = 0.243281901978;
    msg.start_z_units = 25U;
    msg.end_lat = 0.400218148434;
    msg.end_lon = 0.654046490662;
    msg.end_z = 0.37568362354;
    msg.end_z_units = 108U;
    msg.speed = 0.697026691196;
    msg.speed_units = 201U;
    msg.lradius = 0.821528682649;
    msg.flags = 55U;

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
    msg.setTimeStamp(0.901629810525);
    msg.setSource(54848U);
    msg.setSourceEntity(229U);
    msg.setDestination(29440U);
    msg.setDestinationEntity(27U);
    msg.path_ref = 1972754935U;
    msg.start_lat = 0.992680513332;
    msg.start_lon = 0.28657196773;
    msg.start_z = 0.532288583809;
    msg.start_z_units = 196U;
    msg.end_lat = 0.967219386808;
    msg.end_lon = 0.590124880182;
    msg.end_z = 0.596452641949;
    msg.end_z_units = 55U;
    msg.speed = 0.29972554693;
    msg.speed_units = 24U;
    msg.lradius = 0.888074796139;
    msg.flags = 94U;

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
    msg.setTimeStamp(0.940037453479);
    msg.setSource(40644U);
    msg.setSourceEntity(11U);
    msg.setDestination(2636U);
    msg.setDestinationEntity(229U);
    msg.path_ref = 2853010546U;
    msg.start_lat = 0.959856889647;
    msg.start_lon = 0.33288408307;
    msg.start_z = 0.987378078666;
    msg.start_z_units = 34U;
    msg.end_lat = 0.754437209765;
    msg.end_lon = 0.567498807849;
    msg.end_z = 0.518418986131;
    msg.end_z_units = 122U;
    msg.speed = 0.684103681618;
    msg.speed_units = 183U;
    msg.lradius = 0.866864727566;
    msg.flags = 211U;

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
    msg.setTimeStamp(0.625252429143);
    msg.setSource(54604U);
    msg.setSourceEntity(206U);
    msg.setDestination(16147U);
    msg.setDestinationEntity(174U);
    msg.x = 0.406719078513;
    msg.y = 0.921063466549;
    msg.z = 0.995925247541;
    msg.k = 0.242006324582;
    msg.m = 0.456308918814;
    msg.n = 0.686951594317;
    msg.flags = 226U;

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
    msg.setTimeStamp(0.38630965219);
    msg.setSource(34068U);
    msg.setSourceEntity(1U);
    msg.setDestination(22581U);
    msg.setDestinationEntity(79U);
    msg.x = 0.464009323974;
    msg.y = 0.830459169506;
    msg.z = 0.76701987613;
    msg.k = 0.209941178914;
    msg.m = 0.991202710862;
    msg.n = 0.872801984885;
    msg.flags = 224U;

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
    msg.setTimeStamp(0.584051419485);
    msg.setSource(13579U);
    msg.setSourceEntity(45U);
    msg.setDestination(33207U);
    msg.setDestinationEntity(69U);
    msg.x = 0.599985811032;
    msg.y = 0.284967720245;
    msg.z = 0.389237219896;
    msg.k = 0.347529737671;
    msg.m = 0.610803053013;
    msg.n = 0.578201851239;
    msg.flags = 252U;

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
    msg.setTimeStamp(0.434552128641);
    msg.setSource(50170U);
    msg.setSourceEntity(250U);
    msg.setDestination(22891U);
    msg.setDestinationEntity(240U);
    msg.value = 0.5768044966;

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
    msg.setTimeStamp(0.429663985274);
    msg.setSource(63769U);
    msg.setSourceEntity(85U);
    msg.setDestination(18712U);
    msg.setDestinationEntity(192U);
    msg.value = 0.335350256127;

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
    msg.setTimeStamp(0.312992659803);
    msg.setSource(9584U);
    msg.setSourceEntity(240U);
    msg.setDestination(11264U);
    msg.setDestinationEntity(11U);
    msg.value = 0.233450142683;

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
    msg.setTimeStamp(0.122713702456);
    msg.setSource(29610U);
    msg.setSourceEntity(161U);
    msg.setDestination(43324U);
    msg.setDestinationEntity(151U);
    msg.u = 0.463602748224;
    msg.v = 0.0140636260253;
    msg.w = 0.238936312409;
    msg.p = 0.715821641338;
    msg.q = 0.599852364532;
    msg.r = 0.0219901371028;
    msg.flags = 108U;

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
    msg.setTimeStamp(0.907458091188);
    msg.setSource(10958U);
    msg.setSourceEntity(217U);
    msg.setDestination(45630U);
    msg.setDestinationEntity(121U);
    msg.u = 0.368215323933;
    msg.v = 0.277373259574;
    msg.w = 0.709487001526;
    msg.p = 0.825604639512;
    msg.q = 0.462406613407;
    msg.r = 0.989813466082;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.742520846631);
    msg.setSource(51579U);
    msg.setSourceEntity(204U);
    msg.setDestination(65110U);
    msg.setDestinationEntity(81U);
    msg.u = 0.0914642548726;
    msg.v = 0.507317047166;
    msg.w = 0.375122406922;
    msg.p = 0.244538122518;
    msg.q = 0.351976151726;
    msg.r = 0.210018342599;
    msg.flags = 227U;

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
    msg.setTimeStamp(0.53044509323);
    msg.setSource(11609U);
    msg.setSourceEntity(94U);
    msg.setDestination(55921U);
    msg.setDestinationEntity(254U);
    msg.path_ref = 3853662774U;
    msg.start_lat = 0.053579427513;
    msg.start_lon = 0.279927917811;
    msg.start_z = 0.749449279123;
    msg.start_z_units = 221U;
    msg.end_lat = 0.312744986233;
    msg.end_lon = 0.473745541242;
    msg.end_z = 0.834205686614;
    msg.end_z_units = 73U;
    msg.lradius = 0.537368893997;
    msg.flags = 207U;
    msg.x = 0.0495292938515;
    msg.y = 0.636978384451;
    msg.z = 0.763455805275;
    msg.vx = 0.293795597484;
    msg.vy = 0.586486690127;
    msg.vz = 0.624498403323;
    msg.course_error = 0.0646346186518;
    msg.eta = 49658U;

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
    msg.setTimeStamp(0.59434044194);
    msg.setSource(41321U);
    msg.setSourceEntity(113U);
    msg.setDestination(47978U);
    msg.setDestinationEntity(171U);
    msg.path_ref = 1707182316U;
    msg.start_lat = 0.469138840358;
    msg.start_lon = 0.0632459361077;
    msg.start_z = 0.0244033418681;
    msg.start_z_units = 18U;
    msg.end_lat = 0.457554485292;
    msg.end_lon = 0.195726079376;
    msg.end_z = 0.456640362014;
    msg.end_z_units = 111U;
    msg.lradius = 0.0283573597229;
    msg.flags = 130U;
    msg.x = 0.40073515503;
    msg.y = 0.265878040623;
    msg.z = 0.462998160434;
    msg.vx = 0.467128150012;
    msg.vy = 0.273461575193;
    msg.vz = 0.778779616342;
    msg.course_error = 0.748832308341;
    msg.eta = 53264U;

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
    msg.setTimeStamp(0.516840861492);
    msg.setSource(931U);
    msg.setSourceEntity(166U);
    msg.setDestination(57771U);
    msg.setDestinationEntity(60U);
    msg.path_ref = 3241686866U;
    msg.start_lat = 0.0764536375741;
    msg.start_lon = 0.705361079361;
    msg.start_z = 0.941863710061;
    msg.start_z_units = 166U;
    msg.end_lat = 0.246258793008;
    msg.end_lon = 0.226715902492;
    msg.end_z = 0.312983998749;
    msg.end_z_units = 215U;
    msg.lradius = 0.068871371038;
    msg.flags = 4U;
    msg.x = 0.417419348875;
    msg.y = 0.0420569804715;
    msg.z = 0.870698837511;
    msg.vx = 0.950228505846;
    msg.vy = 0.856200665481;
    msg.vz = 0.568870766579;
    msg.course_error = 0.666187434643;
    msg.eta = 49018U;

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
    msg.setTimeStamp(0.510367277024);
    msg.setSource(63856U);
    msg.setSourceEntity(210U);
    msg.setDestination(61601U);
    msg.setDestinationEntity(137U);
    msg.k = 0.266015694959;
    msg.m = 0.94362358125;
    msg.n = 0.169177325774;

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
    msg.setTimeStamp(0.568604008825);
    msg.setSource(58403U);
    msg.setSourceEntity(155U);
    msg.setDestination(42773U);
    msg.setDestinationEntity(172U);
    msg.k = 0.560139188247;
    msg.m = 0.844565018147;
    msg.n = 0.16608732103;

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
    msg.setTimeStamp(0.628592426066);
    msg.setSource(64025U);
    msg.setSourceEntity(129U);
    msg.setDestination(55156U);
    msg.setDestinationEntity(94U);
    msg.k = 0.601773233034;
    msg.m = 0.223663657922;
    msg.n = 0.606878434572;

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
    msg.setTimeStamp(0.138458884098);
    msg.setSource(52935U);
    msg.setSourceEntity(141U);
    msg.setDestination(60248U);
    msg.setDestinationEntity(107U);
    msg.p = 0.218839622294;
    msg.i = 0.682225510361;
    msg.d = 0.318917626106;
    msg.a = 0.238384460555;

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
    msg.setTimeStamp(0.928849479756);
    msg.setSource(59477U);
    msg.setSourceEntity(72U);
    msg.setDestination(50168U);
    msg.setDestinationEntity(11U);
    msg.p = 0.918492576095;
    msg.i = 0.93782807243;
    msg.d = 0.870881368327;
    msg.a = 0.738815033979;

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
    msg.setTimeStamp(0.723620315831);
    msg.setSource(16903U);
    msg.setSourceEntity(34U);
    msg.setDestination(12055U);
    msg.setDestinationEntity(17U);
    msg.p = 0.748882412366;
    msg.i = 0.975041578988;
    msg.d = 0.723176245312;
    msg.a = 0.18917297987;

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
    msg.setTimeStamp(0.320769600668);
    msg.setSource(18659U);
    msg.setSourceEntity(233U);
    msg.setDestination(18990U);
    msg.setDestinationEntity(62U);
    msg.op = 249U;

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
    msg.setTimeStamp(0.462584455676);
    msg.setSource(21926U);
    msg.setSourceEntity(45U);
    msg.setDestination(30850U);
    msg.setDestinationEntity(110U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.918301217897);
    msg.setSource(55888U);
    msg.setSourceEntity(210U);
    msg.setDestination(32481U);
    msg.setDestinationEntity(251U);
    msg.op = 168U;

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
    msg.setTimeStamp(0.543195546554);
    msg.setSource(2785U);
    msg.setSourceEntity(50U);
    msg.setDestination(44619U);
    msg.setDestinationEntity(227U);
    msg.x = 0.179360951164;
    msg.y = 0.503767258521;
    msg.z = 0.928941197349;
    msg.vx = 0.494737003586;
    msg.vy = 0.408216284796;
    msg.vz = 0.56128518003;
    msg.ax = 0.397311962311;
    msg.ay = 0.710610937548;
    msg.az = 0.11166924044;
    msg.flags = 33164U;

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
    msg.setTimeStamp(0.640578709503);
    msg.setSource(45421U);
    msg.setSourceEntity(54U);
    msg.setDestination(6866U);
    msg.setDestinationEntity(219U);
    msg.x = 0.74663054652;
    msg.y = 0.409739043452;
    msg.z = 0.42236154612;
    msg.vx = 0.467238045221;
    msg.vy = 0.703196768581;
    msg.vz = 0.574757380063;
    msg.ax = 0.996352773095;
    msg.ay = 0.470846107752;
    msg.az = 0.956214366629;
    msg.flags = 47306U;

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
    msg.setTimeStamp(0.820996389237);
    msg.setSource(17338U);
    msg.setSourceEntity(29U);
    msg.setDestination(18947U);
    msg.setDestinationEntity(65U);
    msg.x = 0.540033820482;
    msg.y = 0.496211897405;
    msg.z = 0.238461379827;
    msg.vx = 0.426526957542;
    msg.vy = 0.0310044043446;
    msg.vz = 0.961513017804;
    msg.ax = 0.915675452884;
    msg.ay = 0.707216814166;
    msg.az = 0.398274105204;
    msg.flags = 64679U;

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
    msg.setTimeStamp(0.227570555311);
    msg.setSource(27885U);
    msg.setSourceEntity(40U);
    msg.setDestination(59827U);
    msg.setDestinationEntity(204U);
    msg.value = 0.272737583407;

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
    msg.setTimeStamp(0.109699791331);
    msg.setSource(5485U);
    msg.setSourceEntity(45U);
    msg.setDestination(42009U);
    msg.setDestinationEntity(107U);
    msg.value = 0.608714632419;

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
    msg.setTimeStamp(0.501630590767);
    msg.setSource(20876U);
    msg.setSourceEntity(36U);
    msg.setDestination(3618U);
    msg.setDestinationEntity(193U);
    msg.value = 0.418587788655;

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
    msg.setTimeStamp(0.0675634792228);
    msg.setSource(1814U);
    msg.setSourceEntity(17U);
    msg.setDestination(16188U);
    msg.setDestinationEntity(175U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 96675157U;
    tmp_msg_0.start_lat = 0.503908438161;
    tmp_msg_0.start_lon = 0.547245068275;
    tmp_msg_0.start_z = 0.70909802896;
    tmp_msg_0.start_z_units = 171U;
    tmp_msg_0.end_lat = 0.138334849302;
    tmp_msg_0.end_lon = 0.328512327019;
    tmp_msg_0.end_z = 0.312545693397;
    tmp_msg_0.end_z_units = 171U;
    tmp_msg_0.speed = 0.915005177463;
    tmp_msg_0.speed_units = 181U;
    tmp_msg_0.lradius = 0.136039906955;
    tmp_msg_0.flags = 210U;
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
    msg.setTimeStamp(0.692807456285);
    msg.setSource(37150U);
    msg.setSourceEntity(28U);
    msg.setDestination(19541U);
    msg.setDestinationEntity(211U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3983155958U;
    tmp_msg_0.start_lat = 0.506261639138;
    tmp_msg_0.start_lon = 0.116482980309;
    tmp_msg_0.start_z = 0.296089783406;
    tmp_msg_0.start_z_units = 75U;
    tmp_msg_0.end_lat = 0.824018955495;
    tmp_msg_0.end_lon = 0.817954652548;
    tmp_msg_0.end_z = 0.698724988361;
    tmp_msg_0.end_z_units = 182U;
    tmp_msg_0.speed = 0.804241135303;
    tmp_msg_0.speed_units = 232U;
    tmp_msg_0.lradius = 0.640495795712;
    tmp_msg_0.flags = 58U;
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
    msg.setTimeStamp(0.236087436238);
    msg.setSource(38381U);
    msg.setSourceEntity(82U);
    msg.setDestination(42219U);
    msg.setDestinationEntity(208U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 661539325U;
    tmp_msg_0.start_lat = 0.439419654873;
    tmp_msg_0.start_lon = 0.0901052328529;
    tmp_msg_0.start_z = 0.771636799823;
    tmp_msg_0.start_z_units = 156U;
    tmp_msg_0.end_lat = 0.0715703698847;
    tmp_msg_0.end_lon = 0.69819685351;
    tmp_msg_0.end_z = 0.0993175470995;
    tmp_msg_0.end_z_units = 223U;
    tmp_msg_0.speed = 0.343226339062;
    tmp_msg_0.speed_units = 147U;
    tmp_msg_0.lradius = 0.984271151164;
    tmp_msg_0.flags = 14U;
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
    msg.setTimeStamp(0.14300196997);
    msg.setSource(26752U);
    msg.setSourceEntity(174U);
    msg.setDestination(33778U);
    msg.setDestinationEntity(110U);
    msg.timeout = 4238U;
    msg.lat = 0.795950880537;
    msg.lon = 0.428240147245;
    msg.z = 0.874219944319;
    msg.z_units = 179U;
    msg.speed = 0.467182972088;
    msg.speed_units = 245U;
    msg.roll = 0.780518172371;
    msg.pitch = 0.902481134078;
    msg.yaw = 0.733613862103;
    msg.custom.assign("WSYDOWFWKGJXEEHETTQJGHOOYCPQUGUJWEFNSTEXYVLPEXPTRQLPIQWMLPJKYSNKACYNVJIVOHFCOQUTRDDSYFMDCWEERUJZMZZCVHGWIVMRVABYVJMXJJRAXDBZPHMIFTZLMHOGIUOIPPZCQIASSIBQFOXLUIKFZ");

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
    msg.setTimeStamp(0.205538275827);
    msg.setSource(59480U);
    msg.setSourceEntity(147U);
    msg.setDestination(36608U);
    msg.setDestinationEntity(205U);
    msg.timeout = 51570U;
    msg.lat = 0.461553334689;
    msg.lon = 0.904897477629;
    msg.z = 0.219961060347;
    msg.z_units = 140U;
    msg.speed = 0.810174239309;
    msg.speed_units = 41U;
    msg.roll = 0.891565055066;
    msg.pitch = 0.859398822266;
    msg.yaw = 0.670402093049;
    msg.custom.assign("RNGCFOKLJVOCSTQYJKCPHAXOMYVNJIULADTUVXYUKUMKEJGQNUUBQOEIXPYFDNFHTKOCHAPACXQLAPDWZBVRBUDRRHEJIMPSQHXXWTSCPNONHUKVWFQEKVMWJMOEQYXYOFZGRBBGEVUWMWYHWNWW");

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
    msg.setTimeStamp(0.932341537138);
    msg.setSource(60918U);
    msg.setSourceEntity(20U);
    msg.setDestination(14314U);
    msg.setDestinationEntity(159U);
    msg.timeout = 65386U;
    msg.lat = 0.406494387613;
    msg.lon = 0.102465342281;
    msg.z = 0.159736163305;
    msg.z_units = 5U;
    msg.speed = 0.948936910232;
    msg.speed_units = 114U;
    msg.roll = 0.860664719072;
    msg.pitch = 0.496651592372;
    msg.yaw = 0.6282208881;
    msg.custom.assign("GUOSXFJEMTDWQXZLHNFGUROQCXFMRZQFEYTANHUDGLYRSB");

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
    msg.setTimeStamp(0.612705355182);
    msg.setSource(16377U);
    msg.setSourceEntity(210U);
    msg.setDestination(19042U);
    msg.setDestinationEntity(202U);
    msg.timeout = 57765U;
    msg.lat = 0.730391001814;
    msg.lon = 0.0506468877477;
    msg.z = 0.505897101648;
    msg.z_units = 229U;
    msg.speed = 0.530672371318;
    msg.speed_units = 111U;
    msg.duration = 19395U;
    msg.radius = 0.540081264197;
    msg.flags = 236U;
    msg.custom.assign("FGNBSOLAKGZTEDAMGTNMBBGEZITBBMOVQEFHRXVNCXEDQSANCUEJDMAZIVFARRGGSFBRJHZGPVCBHTXKINUVWMQSWXPXKXKVLVKLJHFZROXGEJXSPJYTYLUWZUDSKISYWKFFZYLVOQHAGKPWDCNUPITRKEYWAOPHHNFYQCHWYRJTHCPTRVTJAFGOAIUBNCOAOSPQPNRSYZZLJJIDWLN");

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
    msg.setTimeStamp(0.407415855123);
    msg.setSource(53610U);
    msg.setSourceEntity(109U);
    msg.setDestination(34274U);
    msg.setDestinationEntity(152U);
    msg.timeout = 19354U;
    msg.lat = 0.79794286848;
    msg.lon = 0.339228298492;
    msg.z = 0.0684102865516;
    msg.z_units = 48U;
    msg.speed = 0.697908358094;
    msg.speed_units = 91U;
    msg.duration = 31302U;
    msg.radius = 0.845065073682;
    msg.flags = 35U;
    msg.custom.assign("EJTIDFGBYGPIZWCPMVCYJJLCEVEPYSXDDLPEGTUHYINZXXJM");

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
    msg.setTimeStamp(0.275895294015);
    msg.setSource(3684U);
    msg.setSourceEntity(54U);
    msg.setDestination(60482U);
    msg.setDestinationEntity(36U);
    msg.timeout = 49158U;
    msg.lat = 0.994435140079;
    msg.lon = 0.543027851947;
    msg.z = 0.43164204445;
    msg.z_units = 170U;
    msg.speed = 0.907751018508;
    msg.speed_units = 92U;
    msg.duration = 27805U;
    msg.radius = 0.535105924582;
    msg.flags = 116U;
    msg.custom.assign("VYYUPXQWLDNTVJWWZEZLHYNAG");

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
    msg.setTimeStamp(0.704393376663);
    msg.setSource(26710U);
    msg.setSourceEntity(41U);
    msg.setDestination(34938U);
    msg.setDestinationEntity(45U);
    msg.custom.assign("XCXZQAJBDKOROFMITJNWFJYFLPSQMJQDVVEXBUEPGSCHJOJVNIPKQTXMLKZZJYAZVKIEJRHRHLECPEYKNEBFYDHCQSXCSWIZBALUGYBVCNKPVSKOCBOMRNWSTOTRAUFZFGZMWITUFHYDGXDUWRQALSDZITLHFRWSWMVWYESEPHLBGQXQAOPHUYPNAWTUOMCMPKIWGAXDLALIFZKDDMTIQFITVJGNCNUHVRONGGB");

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
    msg.setTimeStamp(0.80171657586);
    msg.setSource(65242U);
    msg.setSourceEntity(73U);
    msg.setDestination(21318U);
    msg.setDestinationEntity(108U);
    msg.custom.assign("VXIECAMXEGYMPWLNTHDAQCXIOGQIKBAPBDOXXNVEHRZRGAFHTDUBUDKKSTGYUOQGDRRRJAPKCKQUULHJVPMZNUXXRHZOIISLKWLNWFNVXZMSIBFYQHUJGWYQHPGIFZ");

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
    msg.setTimeStamp(0.991370729515);
    msg.setSource(60127U);
    msg.setSourceEntity(217U);
    msg.setDestination(13881U);
    msg.setDestinationEntity(131U);
    msg.custom.assign("ZZCSABZACZZJGMYWRRHFWEESYMHXDHHU");

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
    msg.setTimeStamp(0.408895026975);
    msg.setSource(9090U);
    msg.setSourceEntity(172U);
    msg.setDestination(16137U);
    msg.setDestinationEntity(102U);
    msg.timeout = 6555U;
    msg.lat = 0.795177134343;
    msg.lon = 0.576656507556;
    msg.z = 0.833237558665;
    msg.z_units = 127U;
    msg.duration = 19647U;
    msg.speed = 0.647724579933;
    msg.speed_units = 101U;
    msg.type = 30U;
    msg.radius = 0.345235191826;
    msg.length = 0.577294715164;
    msg.bearing = 0.961625297118;
    msg.direction = 16U;
    msg.custom.assign("AZYTBUPVKLEHMMPFKFPMCMAOTCWGNALASSNSESWBQAULGEKOBVTMHGDOZYPGXTLRKNI");

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
    msg.setTimeStamp(0.868719621674);
    msg.setSource(54740U);
    msg.setSourceEntity(147U);
    msg.setDestination(6939U);
    msg.setDestinationEntity(84U);
    msg.timeout = 59973U;
    msg.lat = 0.406012198742;
    msg.lon = 0.384533450695;
    msg.z = 0.693538089667;
    msg.z_units = 109U;
    msg.duration = 57254U;
    msg.speed = 0.861147294209;
    msg.speed_units = 227U;
    msg.type = 137U;
    msg.radius = 0.858535555178;
    msg.length = 0.835226917813;
    msg.bearing = 0.358621913262;
    msg.direction = 165U;
    msg.custom.assign("WISYCMEFALCNCRFKMATUSZTBXKDDRAOQUBSDBQRIVFSWEYZTXWJICBXKIUHKJSHPZXMCIVKENEJVDYMMFPBQKJIAQWSMCXHGVWPXMFNNJAOAZJUZSBPJZDJUOVFWCETLHNDWRQYLDTVOMWYKGLBGDALLGIMQQQDGRFUAJEOVCIYLBEVEUPOGTVQZ");

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
    msg.setTimeStamp(0.433068611666);
    msg.setSource(1519U);
    msg.setSourceEntity(162U);
    msg.setDestination(1375U);
    msg.setDestinationEntity(73U);
    msg.timeout = 9639U;
    msg.lat = 0.940267882774;
    msg.lon = 0.0143496335907;
    msg.z = 0.534506670164;
    msg.z_units = 105U;
    msg.duration = 25326U;
    msg.speed = 0.874174017459;
    msg.speed_units = 26U;
    msg.type = 120U;
    msg.radius = 0.348469593503;
    msg.length = 0.310759494136;
    msg.bearing = 0.488507244415;
    msg.direction = 228U;
    msg.custom.assign("NVQZQCTWESQGB");

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
    msg.setTimeStamp(0.849955131754);
    msg.setSource(40486U);
    msg.setSourceEntity(218U);
    msg.setDestination(58045U);
    msg.setDestinationEntity(253U);
    msg.duration = 16945U;
    msg.custom.assign("VRCJEGYUMMWADNATVFKWOUWULCFFKZBRSBQRFEICUMDSHCXALBNSWGRNJQAQDEMGKHHTQABTLCEOFXYFOBSILHDWRPYPIAKTMBWUUJDGOZLGEZLFTLYHTXAMOGVTIWOCDPDHHIYGNSIREPLISMCKAAHGP");

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
    msg.setTimeStamp(0.862047336856);
    msg.setSource(27697U);
    msg.setSourceEntity(147U);
    msg.setDestination(64598U);
    msg.setDestinationEntity(189U);
    msg.duration = 20601U;
    msg.custom.assign("EPEPLZHMSIATZHUPOPGEUCUSQYBMJFJWBFXHVNRJPNPKCVODTTEYZYXAMFYBQSCDWQKFNKXZHRXJMWDJQEJGLUNKMCTCKDBCZYEGYPXXEIMKFWGQRUVPESINFSNINHNRNWBAJVLDHJVOAUWGSBHAXZDPAUSXLOLEIHBKVILGSAFMQTLJCQVLOIBRFXADA");

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
    msg.setTimeStamp(0.564291032021);
    msg.setSource(1164U);
    msg.setSourceEntity(169U);
    msg.setDestination(17290U);
    msg.setDestinationEntity(208U);
    msg.duration = 63877U;
    msg.custom.assign("PGBYQQMIBHXTIVYPWZPZKKUOAANHELVXZAJOILGAVBVI");

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
    msg.setTimeStamp(0.152406728146);
    msg.setSource(8808U);
    msg.setSourceEntity(215U);
    msg.setDestination(58324U);
    msg.setDestinationEntity(250U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.0516817554778;
    msg.control.set(tmp_msg_0);
    msg.duration = 59184U;
    msg.custom.assign("BTPVOHVOHSZEAMAYWEVOUPIQPUIUV");

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
    msg.setTimeStamp(0.304494891665);
    msg.setSource(64429U);
    msg.setSourceEntity(155U);
    msg.setDestination(9648U);
    msg.setDestinationEntity(19U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.261784845577;
    tmp_msg_0.off = 0.192599312801;
    msg.control.set(tmp_msg_0);
    msg.duration = 14725U;
    msg.custom.assign("STBYPOLWTFIOLCDDZQDJLPGRKVGBEQGMFWZYRLKVDKNERSQGAOQMUSWJQXWIHMDDACTWSNNPSARZURZBMOEGMVGROLRRLWBSWSFVYVXYTXPERTQIHHKYTPNHJYHXESGUTNYYXCOJIYEAVKKMJHJEDNIKBCCBMTTAOGFU");

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
    msg.setTimeStamp(0.419904821824);
    msg.setSource(16510U);
    msg.setSourceEntity(93U);
    msg.setDestination(5466U);
    msg.setDestinationEntity(184U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2579718629U;
    tmp_msg_0.start_lat = 0.191865672551;
    tmp_msg_0.start_lon = 0.650312982879;
    tmp_msg_0.start_z = 0.974784003806;
    tmp_msg_0.start_z_units = 44U;
    tmp_msg_0.end_lat = 0.933856668789;
    tmp_msg_0.end_lon = 0.129650335391;
    tmp_msg_0.end_z = 0.186287549443;
    tmp_msg_0.end_z_units = 169U;
    tmp_msg_0.speed = 0.681649049069;
    tmp_msg_0.speed_units = 31U;
    tmp_msg_0.lradius = 0.560196021975;
    tmp_msg_0.flags = 135U;
    msg.control.set(tmp_msg_0);
    msg.duration = 55006U;
    msg.custom.assign("HEWCFIKWBQGQVMWCLASZRMQOXKLCUJXHCJZGVUUNSPBGACJUCNQOPIGAPMMQMGLEEJNWMPEGTEIFSXSTTFDDJMKEXPDTMWXDWPROHINJRRETFLFVCNLTVDGYZJXOSFVQSQZWQAOVFTLBAJXKBBUHKLVKDDRYUHDUZBHMNQHCSFQZNYPGNUFYGPKBWPVITAEDRSJDAZLIC");

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
    msg.setTimeStamp(0.946291107011);
    msg.setSource(7790U);
    msg.setSourceEntity(251U);
    msg.setDestination(47243U);
    msg.setDestinationEntity(156U);
    msg.timeout = 62187U;
    msg.lat = 0.0422975694753;
    msg.lon = 0.718967739154;
    msg.z = 0.240821437152;
    msg.z_units = 36U;
    msg.speed = 0.840476623343;
    msg.speed_units = 45U;
    msg.bearing = 0.176269354392;
    msg.cross_angle = 0.780889407202;
    msg.width = 0.851448869399;
    msg.length = 0.21901270485;
    msg.hstep = 0.691720712902;
    msg.coff = 37U;
    msg.alternation = 119U;
    msg.flags = 72U;
    msg.custom.assign("FXMIGGYNWOLONAJWBLIVJUKGHLNXDCFALLMVYNBQSIFFJGRJETSWDTERRHQSUWUIDOZQQAFMZAYBCCNXPMDQIZTIMOYJHEBEJJERUXPZNXBCGOGMYHMQAFCEKFRWZVUHVPPHDQPEZESUSIFMTLYVEKXWUOJZZAXQC");

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
    msg.setTimeStamp(0.513227955757);
    msg.setSource(58132U);
    msg.setSourceEntity(21U);
    msg.setDestination(28782U);
    msg.setDestinationEntity(171U);
    msg.timeout = 60328U;
    msg.lat = 0.68558807266;
    msg.lon = 0.151010392589;
    msg.z = 0.38257629459;
    msg.z_units = 118U;
    msg.speed = 0.0915155765931;
    msg.speed_units = 222U;
    msg.bearing = 0.184658526156;
    msg.cross_angle = 0.698153827209;
    msg.width = 0.391276172427;
    msg.length = 0.67444511273;
    msg.hstep = 0.0827707317286;
    msg.coff = 96U;
    msg.alternation = 172U;
    msg.flags = 209U;
    msg.custom.assign("QSUCGISDNTRVHGTVYCAOYSMOWDQ");

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
    msg.setTimeStamp(0.173820815394);
    msg.setSource(10571U);
    msg.setSourceEntity(43U);
    msg.setDestination(65463U);
    msg.setDestinationEntity(193U);
    msg.timeout = 22812U;
    msg.lat = 0.938980250548;
    msg.lon = 0.632866347613;
    msg.z = 0.0561842317082;
    msg.z_units = 32U;
    msg.speed = 0.404052430636;
    msg.speed_units = 215U;
    msg.bearing = 0.73753012052;
    msg.cross_angle = 0.537902201138;
    msg.width = 0.204148702849;
    msg.length = 0.033324201012;
    msg.hstep = 0.370077312042;
    msg.coff = 97U;
    msg.alternation = 248U;
    msg.flags = 17U;
    msg.custom.assign("HEARPYSXEMNAADGMTLOOCYZIZTEEIKGTUETZWNIOTXVNEJRCBRBXMMGLJYGJXLJRXG");

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
    msg.setTimeStamp(0.634491188281);
    msg.setSource(22240U);
    msg.setSourceEntity(247U);
    msg.setDestination(42636U);
    msg.setDestinationEntity(240U);
    msg.timeout = 49151U;
    msg.lat = 0.698088595032;
    msg.lon = 0.136308318937;
    msg.z = 0.543319107374;
    msg.z_units = 218U;
    msg.speed = 0.448334249284;
    msg.speed_units = 243U;
    msg.custom.assign("ODUYCOLOKNWSJKYUYVASXZDTJUJQIFESMMHFD");

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
    msg.setTimeStamp(0.963106372136);
    msg.setSource(45555U);
    msg.setSourceEntity(7U);
    msg.setDestination(57883U);
    msg.setDestinationEntity(8U);
    msg.timeout = 16146U;
    msg.lat = 0.331233608105;
    msg.lon = 0.512672299613;
    msg.z = 0.519580788898;
    msg.z_units = 252U;
    msg.speed = 0.212257907831;
    msg.speed_units = 99U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.666770367764;
    tmp_msg_0.y = 0.277522942724;
    tmp_msg_0.z = 0.161918254299;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MMOXKJXWJGVPGDOQPUQKIWZUAYYVLRVUQQLAEWVXZWFDROYVASDSHPCYLDUFBFZCYXIPJIMELNCHZRAPARSPRJKNKOGHIQMAFSWNOEJZXRYTMRWREDEUUDDKFPELOVNMGATRAFTKUSHLMWESDNQICMZIIOFKGIUTSEOQGJNQYTBQIH");

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
    msg.setTimeStamp(0.0422431230913);
    msg.setSource(51520U);
    msg.setSourceEntity(85U);
    msg.setDestination(59443U);
    msg.setDestinationEntity(40U);
    msg.timeout = 41528U;
    msg.lat = 0.885033217231;
    msg.lon = 0.901254667221;
    msg.z = 0.725372382742;
    msg.z_units = 122U;
    msg.speed = 0.948114581323;
    msg.speed_units = 146U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.292825470913;
    tmp_msg_0.y = 0.0860816917715;
    tmp_msg_0.z = 0.393207583975;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JYDQSTTVDNPMZTYVWBAESUIGSYVOWLUIRDZZDNOKHQGFKTALIJHRXFGCWTLEUBJRHEMMHWUWDASDZLDXTXPXZNTCEBMRVUEFZTMZXKULLPGFDDQNUGHAACSVIBPNKICTQOJVYUCFHAKFSUQSHYFIRLKGPGOODPXSAJEGLRBNKYGHBXVOJICPGJCFMBKQOLWJZRFPQQYANBLEQOCEBHXIPWJVNXKWMXS");

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
    msg.setTimeStamp(0.122044598041);
    msg.setSource(50708U);
    msg.setSourceEntity(8U);
    msg.setDestination(22938U);
    msg.setDestinationEntity(41U);
    msg.x = 0.840079345001;
    msg.y = 0.44366206938;
    msg.z = 0.768398268019;

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
    msg.setTimeStamp(0.293148791431);
    msg.setSource(58984U);
    msg.setSourceEntity(94U);
    msg.setDestination(26537U);
    msg.setDestinationEntity(21U);
    msg.x = 0.439924442954;
    msg.y = 0.572502523809;
    msg.z = 0.98510253444;

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
    msg.setTimeStamp(0.525426184792);
    msg.setSource(31558U);
    msg.setSourceEntity(81U);
    msg.setDestination(35722U);
    msg.setDestinationEntity(100U);
    msg.x = 0.0232098487669;
    msg.y = 0.587006394662;
    msg.z = 0.156232436284;

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
    msg.setTimeStamp(0.717185762747);
    msg.setSource(21218U);
    msg.setSourceEntity(220U);
    msg.setDestination(45959U);
    msg.setDestinationEntity(68U);
    msg.timeout = 61000U;
    msg.lat = 0.778252070449;
    msg.lon = 0.863246236196;
    msg.z = 0.97849907798;
    msg.z_units = 173U;
    msg.amplitude = 0.295544260944;
    msg.pitch = 0.0862290531519;
    msg.speed = 0.00678634325241;
    msg.speed_units = 132U;
    msg.custom.assign("GVRKNLTULWZRNECJYNSJTMOZUVXTNUCPUCZXLBQFCJSFYFKWPHJKZFYDFRMMXHUKYMPTLKQYHEYBDGIBXSUQGSITWFIKETAXVNIMPZYOHAGJWAZONLWIDCTZGBEMTWWPSZTGHQIHJPOYACBVSGWJOMARE");

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
    msg.setTimeStamp(0.866233224239);
    msg.setSource(61503U);
    msg.setSourceEntity(74U);
    msg.setDestination(58180U);
    msg.setDestinationEntity(110U);
    msg.timeout = 41807U;
    msg.lat = 0.736520218745;
    msg.lon = 0.0342529354926;
    msg.z = 0.402678443956;
    msg.z_units = 37U;
    msg.amplitude = 0.698803169584;
    msg.pitch = 0.987670638151;
    msg.speed = 0.182925643797;
    msg.speed_units = 127U;
    msg.custom.assign("QWLDPQJMSNOSGCVNSXHKSAGXKVHSBQMRAJJYCVXKUHMUTUFVEQSTRDWQNUOVKFWEIVPTGRGYISLIBNN");

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
    msg.setTimeStamp(0.424593536901);
    msg.setSource(7112U);
    msg.setSourceEntity(218U);
    msg.setDestination(8574U);
    msg.setDestinationEntity(193U);
    msg.timeout = 33506U;
    msg.lat = 0.61824929249;
    msg.lon = 0.558165422342;
    msg.z = 0.930191603692;
    msg.z_units = 143U;
    msg.amplitude = 0.641131270754;
    msg.pitch = 0.278916496882;
    msg.speed = 0.496053890626;
    msg.speed_units = 252U;
    msg.custom.assign("QDZSBPHNNUQBAJAWIKZKKGAZHDNIHXOHTJLOLDQ");

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
    msg.setTimeStamp(0.0357030123723);
    msg.setSource(39040U);
    msg.setSourceEntity(72U);
    msg.setDestination(6630U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.178884068114);
    msg.setSource(571U);
    msg.setSourceEntity(15U);
    msg.setDestination(4213U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.981891505473);
    msg.setSource(33186U);
    msg.setSourceEntity(41U);
    msg.setDestination(51907U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.360945504191);
    msg.setSource(12704U);
    msg.setSourceEntity(164U);
    msg.setDestination(9500U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.343952532277;
    msg.lon = 0.532542770771;
    msg.z = 0.347098704017;
    msg.z_units = 1U;
    msg.radius = 0.277529288558;
    msg.duration = 5531U;
    msg.speed = 0.374953153358;
    msg.speed_units = 79U;
    msg.popup_period = 31329U;
    msg.popup_duration = 63559U;
    msg.flags = 241U;
    msg.custom.assign("EBKNSPXKCNQWLFAFKWYGVPMOJCNFLIQDBWANVFJFYWAHBGLYJNZLYXZXTQTYEIVPFQEWSZUZRDRQKOLGNFHPTARBSVPJMTOXJACYVQIPEBIHREIDGUHHCRTWSMYBWIJUXONBDAPHUOMTBF");

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
    msg.setTimeStamp(0.614860888925);
    msg.setSource(48414U);
    msg.setSourceEntity(209U);
    msg.setDestination(51398U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.261028682766;
    msg.lon = 0.613158094224;
    msg.z = 0.133918898865;
    msg.z_units = 184U;
    msg.radius = 0.0969278530535;
    msg.duration = 801U;
    msg.speed = 0.423066878521;
    msg.speed_units = 24U;
    msg.popup_period = 18909U;
    msg.popup_duration = 56399U;
    msg.flags = 97U;
    msg.custom.assign("VMQXMCPLGEIIXSFFJOVCNZNEZNMCGBNAIJVBOAQZEZYWYRCCDCRLTTECUHDOOHVKS");

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
    msg.setTimeStamp(0.811600213182);
    msg.setSource(38811U);
    msg.setSourceEntity(39U);
    msg.setDestination(61712U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.422937298083;
    msg.lon = 0.360936375215;
    msg.z = 0.153683464745;
    msg.z_units = 170U;
    msg.radius = 0.337082093742;
    msg.duration = 35434U;
    msg.speed = 0.825754669815;
    msg.speed_units = 132U;
    msg.popup_period = 26746U;
    msg.popup_duration = 44913U;
    msg.flags = 197U;
    msg.custom.assign("OCRSMIDNKFKBOQZDLNLZAWTCVGLFJDGXBDYIAZABOBQNHUVPXZGRWPJYSPKEUWYUHEXSVUSYWEQCERCRXGMCAEITPSNLLYRWPWVPUBNIIHFJEEDRNGYTKWOOGYBARPZJNLRLQQTTPKXOYWJLANXFNPC");

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
    msg.setTimeStamp(0.218080928417);
    msg.setSource(61289U);
    msg.setSourceEntity(61U);
    msg.setDestination(50874U);
    msg.setDestinationEntity(92U);
    msg.timeout = 41659U;
    msg.flags = 98U;
    msg.lat = 0.354636652183;
    msg.lon = 0.0102715696005;
    msg.start_z = 0.873353047529;
    msg.start_z_units = 0U;
    msg.end_z = 0.259576782058;
    msg.end_z_units = 38U;
    msg.radius = 0.78193517236;
    msg.speed = 0.724074561218;
    msg.speed_units = 14U;
    msg.custom.assign("MLQLQITNLBFLNALCMAXVVHJYPYOYHCDPESROOOZCFKKKWRZDPECAOGGUJETWQGIYBWOKPNZHZ");

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
    msg.setTimeStamp(0.538565269528);
    msg.setSource(39278U);
    msg.setSourceEntity(193U);
    msg.setDestination(26342U);
    msg.setDestinationEntity(79U);
    msg.timeout = 30115U;
    msg.flags = 181U;
    msg.lat = 0.701328233526;
    msg.lon = 0.604076371904;
    msg.start_z = 0.62891668073;
    msg.start_z_units = 143U;
    msg.end_z = 0.941954771977;
    msg.end_z_units = 230U;
    msg.radius = 0.144781485979;
    msg.speed = 0.215375827186;
    msg.speed_units = 129U;
    msg.custom.assign("GZGUAECBTLCSXEDQIEIGMVPHULKCINRYODNYIFMRQQSAZDGNYDJHWUTXVVLSHCVZAXERWDLTETTFBJBSKJSWBYYNXPYOUCZCPHQRPRTQHCKAXEWOZXEFYSTROQIPUPBI");

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
    msg.setTimeStamp(0.103513730908);
    msg.setSource(23132U);
    msg.setSourceEntity(229U);
    msg.setDestination(23425U);
    msg.setDestinationEntity(118U);
    msg.timeout = 29019U;
    msg.flags = 34U;
    msg.lat = 0.377308395735;
    msg.lon = 0.792426442502;
    msg.start_z = 0.770659916958;
    msg.start_z_units = 110U;
    msg.end_z = 0.59492086983;
    msg.end_z_units = 202U;
    msg.radius = 0.515923327009;
    msg.speed = 0.183286111991;
    msg.speed_units = 19U;
    msg.custom.assign("AQOTWFIJWHHFNFOTHGFIQZYYEJDYKHTJNRPXYKPLPWMVVUEBYSIQZRCDGCENBGPJMTRVOKXBKVPKKOWTJXPIVTZXFDSSMCFXVZALZJFRARHQNZTQTQYWNUMLUYPGMEVBLRIUMGRBKBQDXUFAIHTNZVXCBEWCEAHMPIXGIMYALMCZWIRRCDLOWESYGSPBILNGUMEZSRODOTJASOYADSZJHCOFKCQBPUWVQEKNLSXNVAJCJ");

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
    msg.setTimeStamp(0.586486352455);
    msg.setSource(18544U);
    msg.setSourceEntity(205U);
    msg.setDestination(59804U);
    msg.setDestinationEntity(109U);
    msg.timeout = 59734U;
    msg.lat = 0.892072325911;
    msg.lon = 0.97026204755;
    msg.z = 0.999142697528;
    msg.z_units = 155U;
    msg.speed = 0.160900983527;
    msg.speed_units = 184U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.206407721141;
    tmp_msg_0.y = 0.543971821711;
    tmp_msg_0.z = 0.488632535522;
    tmp_msg_0.t = 0.813699426431;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WUGGBNICQTKEUIPDTCXPAVLLCPOPAXECHYNPHCKICOVMEZALGMKNFKMFJUUWYMTDAINWZOSWXTATHGWXZESWVNDHSLYNVSTQSZKBDMEZQIOWYJRNMZCLQEGBCLHUSGRFRVJHROADKXASYUWHSBZLZLVEPJPVBOFRUJTBKAVOWKRCJDGMAYDPGG");

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
    msg.setTimeStamp(0.454361419137);
    msg.setSource(44539U);
    msg.setSourceEntity(27U);
    msg.setDestination(63532U);
    msg.setDestinationEntity(127U);
    msg.timeout = 30872U;
    msg.lat = 0.185806466522;
    msg.lon = 0.826352456165;
    msg.z = 0.676777189472;
    msg.z_units = 85U;
    msg.speed = 0.685409428009;
    msg.speed_units = 196U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.211571126848;
    tmp_msg_0.y = 0.728983586643;
    tmp_msg_0.z = 0.537290979946;
    tmp_msg_0.t = 0.687005402366;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GKZXYBWYJTRXCICRZVCQSDPQIAWXAAVVSOEXZHQONGCPOUNEQJGUTJVQOKUZEICUMIAMTPZIRIDSKBWZOXNDVFKQGLBGAWMOFRBTDWJXYKEHUJYMABKHWBBPRCITOTONFWZSOSVVBVYDWIUVNJXUDGGYPZEAQOLHTGPNRQWSXTAJEBEYWETQDDFEABNMYCISZXLXNHFQPFIUJHKCJHVEUTHLADNLUNJZRYRKMG");

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
    msg.setTimeStamp(0.65156711565);
    msg.setSource(31432U);
    msg.setSourceEntity(9U);
    msg.setDestination(60707U);
    msg.setDestinationEntity(79U);
    msg.timeout = 27069U;
    msg.lat = 0.180295930576;
    msg.lon = 0.612388197313;
    msg.z = 0.56015223615;
    msg.z_units = 188U;
    msg.speed = 0.309041434218;
    msg.speed_units = 100U;
    msg.custom.assign("PWIRCYKDENWUTBFRNWNGCKJRQNWJEEBJNYZQMPARTIRJGKPURSJZKPTDONCEOBZXCLYDAJWQVSTNIGLSFTBNSSTGDOFYUAFGAFDPRFBSEBEHDVGZLHVXMXLFYWHYGTPKXJLLOMZIHGFQIDBAXSBMITOEUOXBHPGHCJMZVCVFKUZOAOUWHYMXOQXPSYVJDGRIOAPIUMVZUYAQWQRZVQDMLXIVKMHRIULCJCHXELBNDCQKL");

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
    msg.setTimeStamp(0.370830173855);
    msg.setSource(30902U);
    msg.setSourceEntity(148U);
    msg.setDestination(24250U);
    msg.setDestinationEntity(122U);
    msg.x = 0.468802894435;
    msg.y = 0.730149281864;
    msg.z = 0.683190667912;
    msg.t = 0.6609394776;

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
    msg.setTimeStamp(0.379764256377);
    msg.setSource(11800U);
    msg.setSourceEntity(87U);
    msg.setDestination(65294U);
    msg.setDestinationEntity(114U);
    msg.x = 0.860069190763;
    msg.y = 0.655621159525;
    msg.z = 0.952055580837;
    msg.t = 0.307879451744;

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
    msg.setTimeStamp(0.948723957003);
    msg.setSource(30427U);
    msg.setSourceEntity(122U);
    msg.setDestination(41617U);
    msg.setDestinationEntity(239U);
    msg.x = 0.211967356729;
    msg.y = 0.494830275781;
    msg.z = 0.710285558682;
    msg.t = 0.721766049481;

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
    msg.setTimeStamp(0.163200888575);
    msg.setSource(32154U);
    msg.setSourceEntity(241U);
    msg.setDestination(13617U);
    msg.setDestinationEntity(185U);
    msg.timeout = 4356U;
    msg.name.assign("WOSZMSBYTBXXJBVRVIDFXR");
    msg.custom.assign("CEGTSIWCVSIFXUDTYHXAKREKRNGNTNRNAWSJUYDMZOEIAERHOOFLCWZLQRZFQORBPVMHDBZPIEJFUEACOTMERJPACNLYKYHIDOWPSNZMTXKSPDWDTHQGBQJGBVRGEUBQUJDWMTHFLLAIMYOHDCZXKJWDLWUMYGVJAZPVRJPMSXSNIGJGHXCTBYKUVOPHVXPFOJY");

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
    msg.setTimeStamp(0.491559980828);
    msg.setSource(65499U);
    msg.setSourceEntity(138U);
    msg.setDestination(62350U);
    msg.setDestinationEntity(99U);
    msg.timeout = 11924U;
    msg.name.assign("BKANLSVGCZGQBFAXTLEZGFIBIHKXEJYVUQWXRMRCTJHVWJPCUGQFKKAHQRCLXXBOFFLCEJIKYQEAYOWWJDSCZQPAMKHIWFLXZORFUIAORDDWUYTNRSESOGKBBEZTSMBAHUKMJXNMCLINSBUJIK");
    msg.custom.assign("DPXYLAZHWLJICGNPQPONLOKGJGUIRACTRXMEEUEPFEVYQXQNSDLLUNYWRVZUFIVCTQWRVUOIBSISRBTQXJVPMYWBNUOZKGTHYZCMBMRHHXHJSFIXWRNAUIKEHRVMCCXSAZMQJKDKYFFHEAW");

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
    msg.setTimeStamp(0.192011668076);
    msg.setSource(6100U);
    msg.setSourceEntity(138U);
    msg.setDestination(65280U);
    msg.setDestinationEntity(83U);
    msg.timeout = 30530U;
    msg.name.assign("NRUBPUFWADOUWECOXQRSDDTKUMEBZMKHANRUVOGFYKZTPOHVEIHBHAZPBXVCMPFZFTASKDSJQNITPGBSLPMUINYKJCLZISXBMYTZGDJVPADNSCHZRXXCOWSLGRIZRVMWOXELDQHDTNCI");
    msg.custom.assign("AHCFUDKYZOTKSIKSIZHXHSQBYRVJUWNNEMZPZPUBIEBAYRQGFNLKIVFUZTYIRSNELNJBUYKSMHBHIOOMDWDFCCPFNXVNRXCUCDOQMWHGCBZWBZXXMFIPJPAAVVTQNGJFMHYIVUXUVWGZJPDQXLKEYMHWGRAHEGKFMSTTXADVVQRTARZIRFPJEOLGJONJQSPMHLJOTPYKOTWBWJWPSSYO");

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
    msg.setTimeStamp(0.946871939024);
    msg.setSource(26877U);
    msg.setSourceEntity(30U);
    msg.setDestination(190U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.357290672526;
    msg.lon = 0.876640579284;
    msg.z = 0.395655581261;
    msg.z_units = 38U;
    msg.speed = 0.566056418384;
    msg.speed_units = 135U;
    msg.start_time = 0.521093867186;
    msg.custom.assign("KJENUXDOKARDHIIKVPZYKYLLKWTKVYFTRXPWGWGBGSROWFHSCJOMLQQOZSJBMVIJDUQIUTCYKVXGLSGTMYZFBXRMBVKCUAJPVMYMESVFCRFAETOTAHLHIDEQWNNLAIHKJHIQOJVGHZNBEYRJHLBDWRNGH");

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
    msg.setTimeStamp(0.948217244544);
    msg.setSource(6180U);
    msg.setSourceEntity(219U);
    msg.setDestination(16569U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.976084027675;
    msg.lon = 0.956278254638;
    msg.z = 0.352519949293;
    msg.z_units = 25U;
    msg.speed = 0.446524562298;
    msg.speed_units = 33U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22905U;
    tmp_msg_0.off_x = 0.63458918571;
    tmp_msg_0.off_y = 0.372196039052;
    tmp_msg_0.off_z = 0.454313935955;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.918925876704;
    msg.custom.assign("BAIFDLXAEYWWCOKDOAGDCEFEQGAXVEXEPNBHPVKPITQHLMKGTDMAZUXGJLCRZCWTTTSOYKLNPSYHFHDMZOWZBRRLSTWSMHAZMXYXILXSYRFSJNJMCJVNERZXEBHGBRLJIFYYEICAGSRWDINESJQMQTYBBDQLUUKQVBKJICHSPTAYFNFXZVRMLXGCUKVFUMOF");

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
    msg.setTimeStamp(0.726860840754);
    msg.setSource(36108U);
    msg.setSourceEntity(59U);
    msg.setDestination(4086U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.749666391694;
    msg.lon = 0.990346048794;
    msg.z = 0.496620918194;
    msg.z_units = 211U;
    msg.speed = 0.617953504148;
    msg.speed_units = 161U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.166909763617;
    tmp_msg_0.y = 0.323237914265;
    tmp_msg_0.z = 0.457578526008;
    tmp_msg_0.t = 0.626534037456;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 60688U;
    tmp_msg_1.off_x = 0.121726846773;
    tmp_msg_1.off_y = 0.906277574764;
    tmp_msg_1.off_z = 0.327114489942;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.27491894718;
    msg.custom.assign("HVMPIMOPZZMHQHWJNLGLUQAUXWHAEHVQAFSRSQRZNJUUZOSQNBQHYYUWUTPWHYOTPSBBJIVOXKVVLVDRNWSBCMJDAFTHSIGJEDZMXIZIDETEIXFGVBSEYDQTUWSODEGYPWLMRJYFRKKGQDMFFJLSEQGDD");

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
    msg.setTimeStamp(0.188764442009);
    msg.setSource(56398U);
    msg.setSourceEntity(228U);
    msg.setDestination(56184U);
    msg.setDestinationEntity(212U);
    msg.vid = 17362U;
    msg.off_x = 0.689220655771;
    msg.off_y = 0.598448321677;
    msg.off_z = 0.451979567823;

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
    msg.setTimeStamp(0.437441541052);
    msg.setSource(30722U);
    msg.setSourceEntity(59U);
    msg.setDestination(13674U);
    msg.setDestinationEntity(45U);
    msg.vid = 42845U;
    msg.off_x = 0.220343951643;
    msg.off_y = 0.0226577472578;
    msg.off_z = 0.431409131906;

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
    msg.setTimeStamp(0.570582969507);
    msg.setSource(59198U);
    msg.setSourceEntity(52U);
    msg.setDestination(7820U);
    msg.setDestinationEntity(100U);
    msg.vid = 706U;
    msg.off_x = 0.732139539387;
    msg.off_y = 0.922541310626;
    msg.off_z = 0.254292404408;

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
    msg.setTimeStamp(0.425731493517);
    msg.setSource(15411U);
    msg.setSourceEntity(43U);
    msg.setDestination(1698U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.894267388555);
    msg.setSource(26321U);
    msg.setSourceEntity(92U);
    msg.setDestination(27403U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.51355685586);
    msg.setSource(64107U);
    msg.setSourceEntity(210U);
    msg.setDestination(50637U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.308990437366);
    msg.setSource(63768U);
    msg.setSourceEntity(237U);
    msg.setDestination(63088U);
    msg.setDestinationEntity(191U);
    msg.mid = 30309U;

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
    msg.setTimeStamp(0.118206905063);
    msg.setSource(47529U);
    msg.setSourceEntity(11U);
    msg.setDestination(15106U);
    msg.setDestinationEntity(202U);
    msg.mid = 21704U;

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
    msg.setTimeStamp(0.855683309801);
    msg.setSource(55563U);
    msg.setSourceEntity(160U);
    msg.setDestination(49833U);
    msg.setDestinationEntity(69U);
    msg.mid = 28611U;

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
    msg.setTimeStamp(0.0235293926341);
    msg.setSource(5248U);
    msg.setSourceEntity(226U);
    msg.setDestination(18447U);
    msg.setDestinationEntity(55U);
    msg.state = 108U;
    msg.eta = 20179U;
    msg.info.assign("VQGUCGWIFKUCFZKCSQPQAROPWDBRIZFLJKLVEBSWJACWBGCHQFRHDCSDFUKHBXFZANWTNYZPIGWNMNBSTQYNDQIYKRVVGRAMOXLDGOTJYNXEMOYMVHXXYKAHTPZNWJAOTYCORZDIUGIWTUS");

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
    msg.setTimeStamp(0.76467682488);
    msg.setSource(33913U);
    msg.setSourceEntity(83U);
    msg.setDestination(63886U);
    msg.setDestinationEntity(29U);
    msg.state = 213U;
    msg.eta = 37009U;
    msg.info.assign("MXSAYBGTMNZMWNOJYRTECXHUYWBJFZDQJVLAQFPDGBSBPEEAUQHDCNCOJO");

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
    msg.setTimeStamp(0.876366009512);
    msg.setSource(60353U);
    msg.setSourceEntity(199U);
    msg.setDestination(8177U);
    msg.setDestinationEntity(165U);
    msg.state = 43U;
    msg.eta = 4316U;
    msg.info.assign("XZMMWRZWSUXYIKZZMYXEIHYHVGCLGGVC");

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
    msg.setTimeStamp(0.35966538102);
    msg.setSource(41972U);
    msg.setSourceEntity(65U);
    msg.setDestination(554U);
    msg.setDestinationEntity(209U);
    msg.system = 46748U;
    msg.duration = 64583U;
    msg.speed = 0.288756406188;
    msg.speed_units = 52U;
    msg.x = 0.501186577708;
    msg.y = 0.290567715868;
    msg.z = 0.608650947846;
    msg.z_units = 239U;

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
    msg.setTimeStamp(0.215432642941);
    msg.setSource(16063U);
    msg.setSourceEntity(210U);
    msg.setDestination(23822U);
    msg.setDestinationEntity(177U);
    msg.system = 30449U;
    msg.duration = 22687U;
    msg.speed = 0.271050002565;
    msg.speed_units = 245U;
    msg.x = 0.52523839461;
    msg.y = 0.452942052537;
    msg.z = 0.392759609013;
    msg.z_units = 5U;

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
    msg.setTimeStamp(0.478047999738);
    msg.setSource(5622U);
    msg.setSourceEntity(125U);
    msg.setDestination(43144U);
    msg.setDestinationEntity(190U);
    msg.system = 48280U;
    msg.duration = 31209U;
    msg.speed = 0.88582934809;
    msg.speed_units = 229U;
    msg.x = 0.23606761079;
    msg.y = 0.745294620097;
    msg.z = 0.559860111558;
    msg.z_units = 88U;

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
    msg.setTimeStamp(0.699265464521);
    msg.setSource(12669U);
    msg.setSourceEntity(214U);
    msg.setDestination(26353U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.718580006201;
    msg.lon = 0.937903919098;
    msg.speed = 0.652659834493;
    msg.speed_units = 62U;
    msg.duration = 13353U;
    msg.sys_a = 61341U;
    msg.sys_b = 58287U;
    msg.move_threshold = 0.322113837468;

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
    msg.setTimeStamp(0.0883612161748);
    msg.setSource(43960U);
    msg.setSourceEntity(62U);
    msg.setDestination(5153U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.522478076797;
    msg.lon = 0.149753209132;
    msg.speed = 0.706621550447;
    msg.speed_units = 240U;
    msg.duration = 39584U;
    msg.sys_a = 11359U;
    msg.sys_b = 59432U;
    msg.move_threshold = 0.907814364008;

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
    msg.setTimeStamp(0.387748991375);
    msg.setSource(40312U);
    msg.setSourceEntity(136U);
    msg.setDestination(21671U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.225626974133;
    msg.lon = 0.288587501517;
    msg.speed = 0.184818012402;
    msg.speed_units = 83U;
    msg.duration = 41853U;
    msg.sys_a = 42237U;
    msg.sys_b = 43256U;
    msg.move_threshold = 0.275547426074;

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
    msg.setTimeStamp(0.0485928900437);
    msg.setSource(9712U);
    msg.setSourceEntity(21U);
    msg.setDestination(53137U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.230095972654;
    msg.lon = 0.392832217523;
    msg.z = 0.146070962582;
    msg.z_units = 219U;
    msg.speed = 0.591946364197;
    msg.speed_units = 208U;
    msg.custom.assign("ZCFHJNQUGSSMWTXDLFYWGYKQWYIFWRJKPERXTWVBKNTVVOKVPXHSMNYABQWCIAAFHKVCKYPSJMJPPLEUXDIZOQTDWDPCYJIUIYOLGVELMTBJHTGAMBSHAIOZMQVZUBGUZRNCRXOMCJEXUXBUSSIPWHOFRA");

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
    msg.setTimeStamp(0.175988360842);
    msg.setSource(21876U);
    msg.setSourceEntity(64U);
    msg.setDestination(35342U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.35636896047;
    msg.lon = 0.845730844934;
    msg.z = 0.322953019496;
    msg.z_units = 178U;
    msg.speed = 0.881684803169;
    msg.speed_units = 209U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.774618301919;
    tmp_msg_0.lon = 0.796553138141;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("SRHRCOTKNSHGEDIDKJXSLPAKCFJPOUWEOBQLSAXZKXXLGXZSZANLBOXILMGZOTSHLVFTCPDWJZFWYOJGILEEZSCZAEWGKDVYQYUCYRAAQSPQXZQKYQHPEDMKUNWNBKTWCATVSBHTZRJTIQFQUPVHJCRRKWUJDTHWTMAJPE");

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
    msg.setTimeStamp(0.90693345107);
    msg.setSource(7152U);
    msg.setSourceEntity(190U);
    msg.setDestination(61285U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.0354826163612;
    msg.lon = 0.993050120868;
    msg.z = 0.708824487804;
    msg.z_units = 230U;
    msg.speed = 0.618132893651;
    msg.speed_units = 67U;
    msg.custom.assign("HDNVCOGSNBCQBVKRQBUYHEFPUZNYSECQYXVXYYNIJBFMGOQYIJHBAAZXIKFZZVGDILIAUURKHKXTSRWODQMTWGFZLXRVLOWZOGWPRSOMABXFBIKGOMPBMNPSRNSSAUZJMVEQLCKDOAYLXMKYHUUCAGGL");

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
    msg.setTimeStamp(0.67120069856);
    msg.setSource(48510U);
    msg.setSourceEntity(11U);
    msg.setDestination(43117U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.417393957741;
    msg.lon = 0.99678164214;

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
    msg.setTimeStamp(0.845346750232);
    msg.setSource(5662U);
    msg.setSourceEntity(2U);
    msg.setDestination(39368U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.704022536545;
    msg.lon = 0.163950694606;

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
    msg.setTimeStamp(0.637863698112);
    msg.setSource(56403U);
    msg.setSourceEntity(142U);
    msg.setDestination(5947U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.853683013644;
    msg.lon = 0.287442549389;

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
    msg.setTimeStamp(0.585865233704);
    msg.setSource(18104U);
    msg.setSourceEntity(90U);
    msg.setDestination(64510U);
    msg.setDestinationEntity(221U);
    msg.timeout = 17900U;
    msg.lat = 0.74306762548;
    msg.lon = 0.312453191237;
    msg.z = 0.259896905967;
    msg.z_units = 83U;
    msg.pitch = 0.250267848399;
    msg.amplitude = 0.156593157939;
    msg.duration = 5607U;
    msg.speed = 0.950169188618;
    msg.speed_units = 212U;
    msg.radius = 0.0608060195926;
    msg.direction = 213U;
    msg.custom.assign("VMCGSCYPONOXVDKIOHMIJQEDBWAUUBYPFNEZWNDL");

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
    msg.setTimeStamp(0.793844547711);
    msg.setSource(60101U);
    msg.setSourceEntity(96U);
    msg.setDestination(6474U);
    msg.setDestinationEntity(83U);
    msg.timeout = 552U;
    msg.lat = 0.809035287729;
    msg.lon = 0.464020584403;
    msg.z = 0.952660562287;
    msg.z_units = 165U;
    msg.pitch = 0.834308285819;
    msg.amplitude = 0.540897961245;
    msg.duration = 41258U;
    msg.speed = 0.489699146611;
    msg.speed_units = 96U;
    msg.radius = 0.423750390344;
    msg.direction = 159U;
    msg.custom.assign("IPZLYVPZXQBRIVZJXYGMXNTLSEDVUHJXEAMLKGB");

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
    msg.setTimeStamp(0.00465002844759);
    msg.setSource(51441U);
    msg.setSourceEntity(224U);
    msg.setDestination(2354U);
    msg.setDestinationEntity(197U);
    msg.timeout = 47166U;
    msg.lat = 0.449736319188;
    msg.lon = 0.40920454063;
    msg.z = 0.571813712665;
    msg.z_units = 219U;
    msg.pitch = 0.0701281144509;
    msg.amplitude = 0.203182467613;
    msg.duration = 6856U;
    msg.speed = 0.0937372045688;
    msg.speed_units = 161U;
    msg.radius = 0.421744650261;
    msg.direction = 56U;
    msg.custom.assign("JAJBZNGYQLUUCKTLEMEIGIZFTVCHTDWMTRMDBDZWZTFOVTXPIEDECVIRKSKZQZYVAOPYKLTUNJHIQFHMVRJFEXVRLSDGNFDAUZUODENSJWJXOYRQQNWNMOSTPKMVUAKFWEXKLSPCSQLOZESHBHJHBPVPGYFUWCFAPDXRCUEMDSRBGKSUIAIUGYB");

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
    msg.setTimeStamp(0.343460366911);
    msg.setSource(42008U);
    msg.setSourceEntity(61U);
    msg.setDestination(58625U);
    msg.setDestinationEntity(195U);
    msg.formation_name.assign("QFXWCAQXBRMZEVPCOHEEHPSAIHVYHZDKFDTGQLYYVAACVCXWBKGEYLNTRWNSXQGAKHOQRGUPNKBUDTUUQGIDLOIJFKXTQGQKRLFBTXDUCMQZUOORSVLSDF");
    msg.reference_frame = 147U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 4657U;
    tmp_msg_0.off_x = 0.323515626598;
    tmp_msg_0.off_y = 0.907415995872;
    tmp_msg_0.off_z = 0.454444795007;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("MIORMGLZEJURKQALDOWDNVJGYMBFUWHHSOAFBDGZTIVYQSTYIYETUANBHCMFIHUJSZYRGKDYFNLUZONKXDRHNXCILUCGGTPFAKMNSWVVEBSNABMOJTYWZ");

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
    msg.setTimeStamp(0.475386886348);
    msg.setSource(20875U);
    msg.setSourceEntity(161U);
    msg.setDestination(41235U);
    msg.setDestinationEntity(118U);
    msg.formation_name.assign("SSKYJERDDFJOWZCXESYMONWWXPSCZPABYXGMWUHLUPVXBVHDTTTNAHNDGBGQAONDREAJVLRUEKXUJJCOCBUFMVMUMYZVPIWTLVUDPPMRMHFZNSFQKYELAMIQCZKMOQZFGQEXYIXRJROWWWQIQJEGEVHIDFLXQOJIKUHSZSABKTERZTTWTTLSMZKXIYFAINSYUAGYDQCPOXVKGEPALGJZINPHTBHVUCHFBCLIYORBCBPNLF");
    msg.reference_frame = 100U;
    msg.custom.assign("WAFLYVIFZLQEBOMCCRFWLDBXEGTPCHPZGGZCLVOWWKNVPODCLRRDJRLQPY");

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
    msg.setTimeStamp(0.11722064889);
    msg.setSource(26498U);
    msg.setSourceEntity(9U);
    msg.setDestination(61485U);
    msg.setDestinationEntity(211U);
    msg.formation_name.assign("FPMQTDXJTVWBXZCMT");
    msg.reference_frame = 233U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 15683U;
    tmp_msg_0.off_x = 0.805292554609;
    tmp_msg_0.off_y = 0.223183973316;
    tmp_msg_0.off_z = 0.232890716942;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("OCXTPQVLQPEJXBCSBHWGKZRDDDZBERNGPHCJZUHTYZSIWWVURUDPQCNYBJXMMTORWQUCVGIHGKOLUIRFNHIKVHMLAPSJGDEUBAIVFSSSDRIKYOWSKQFROBOUQIZGRXGEWJVGTPEJBNTAAWLEYPTNQLMUYCKFARMHMCGVBEZTNAEGOJVZKMDLZTNQIKMLPNBFYASXQYMKHSSXFUTCFXFJCQIKYXY");

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
    msg.setTimeStamp(0.993890745542);
    msg.setSource(36224U);
    msg.setSourceEntity(109U);
    msg.setDestination(23771U);
    msg.setDestinationEntity(151U);
    msg.group_name.assign("XTSPHEGUJANDUZNGTHEFDYUJNWJGMFXCGIJNIROESQMWPZKMVYYUCRBFLTWUSIKTSVLPVJTESZMILFXFGVTYKEQIWFMAVHHCR");
    msg.formation_name.assign("ECBDAABAKZSICGKJFLJSBIFYGOCSZJYLGDRUPJIFUHWKVDYGNFKTTFXPRLQWNOPYCUJVAFVMHOWBQGUKJHKHVWQSJWYATDEOPRZYBRHQXAZZJYARTYEQHXHQZ");
    msg.plan_id.assign("HKEBPFUPXDWBODZNYDRFILBVORCFMWWCEYJUZOETOVDKGWZ");
    msg.description.assign("RDETRJIGLFUXQHHUZPYSXNBAGOSMJQRIDEZFPDCOVLWVSCQNXEWOZPNDETWGGMDUNBSKGKUBICRLYV");
    msg.leader_speed = 0.108968816239;
    msg.leader_bank_lim = 0.190698436047;
    msg.pos_sim_err_lim = 0.554546142476;
    msg.pos_sim_err_wrn = 0.161542676112;
    msg.pos_sim_err_timeout = 26437U;
    msg.converg_max = 0.914063965105;
    msg.converg_timeout = 58954U;
    msg.comms_timeout = 30160U;
    msg.turb_lim = 0.654991819936;
    msg.custom.assign("MNKADHHAETAQZXLUQCZKSDTDMYDLNPWLFXKTYJRSTLFXVQAPARNDOUQRVSNCKRMLJRPTTFBXLDSIQAJZCIEQCCGJYSNSYHERGIEARXRVLVQYCPUDCOTBJFEIAUXEHOGFAGMGAIJCBMQKMBBTZFZUMSFBPJYWQ");

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
    msg.setTimeStamp(0.418906044495);
    msg.setSource(59803U);
    msg.setSourceEntity(240U);
    msg.setDestination(10640U);
    msg.setDestinationEntity(173U);
    msg.group_name.assign("FXTAUOAACIRUDYPCBYKOWSRCWFYELFHAQFKCPJJDWEMBQRPVPGZJZHZENPOOG");
    msg.formation_name.assign("MIKEZEGPDJNGTADEIFQVOAZSLEXHOHSRMFWHCYPYQHPMMFKUCQVXBJJFRICGDGVPSOIZJZWBBWBELLNQUZTSDTQMMSLPYVPMUTEOTACVGBVOFCFNZEKYOQVQRVNTXHAEMNBSDRUHVAQKDFCGQWTGWDSUSCHYZIYOTRXIYAORZGXRCIJNA");
    msg.plan_id.assign("DACMEIKTEHNWGEUFFRKOPINDGYTOSLPKIVJKGLUBMEJKPAHEQPQLXVURXYUYCPWJVWYRBAZNHOJQZMWVFLTVEZDCZIILRRLXXNWXMQWXMGXIBPTBCOTNOWKVQHHDBRITZQZLHCYQBOULJGDYSZFZAJNSMYYRJXSCEGDCQCNMUVNPPIFCROHSIOMCFTAUOIHBZVRSGLPDDAWMNXKZFSHDGTWYEEVMKHJXYSSJTFQVBPQUFG");
    msg.description.assign("XIDESLOYZOEOCJMWBAMOLFAPSXPYKIBYGUURWKSVMHHTKHMVGIWEMEFOKPQHRZNSWXYFFDABXDXVAMXJQLCFPAACGINPKTTGOQXYNBPQDJSKEOJUGQWTFSJCHOQLTUDHCGXZQTYVTUIWJEKEVFVUOTPWVRIKSVFDBJAZMDDCARJQNKFLHZTHURGAKLPNDBMDRWERLZENJLBFPSJNVIBRGUMBNY");
    msg.leader_speed = 0.805340981229;
    msg.leader_bank_lim = 0.0907706348676;
    msg.pos_sim_err_lim = 0.0425744301017;
    msg.pos_sim_err_wrn = 0.17329987244;
    msg.pos_sim_err_timeout = 2586U;
    msg.converg_max = 0.634410993797;
    msg.converg_timeout = 3157U;
    msg.comms_timeout = 25722U;
    msg.turb_lim = 0.861592183774;
    msg.custom.assign("MWSEWAGUJHGCMEYLIVODFAZSINGLYFNFIZGHTBNGRQBFBZFKGIMCNBZPKQHSYYWNTRRQPKOJAVQNNVMRETIIDPVHPSBPASLXTKMDSD");

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
    msg.setTimeStamp(0.98963846005);
    msg.setSource(16325U);
    msg.setSourceEntity(117U);
    msg.setDestination(36292U);
    msg.setDestinationEntity(109U);
    msg.group_name.assign("DGTOWACSYHMSWOCLFZWYSXXVAOAEBKMWKEADOXFCXALBUBUCLXFPQWFHJVJQLTRGZCHDIFZRZKSZDRHQYGIWJBZGBCPIVDSEJMULGAEURPQFDIIRHDFSHZXJPVCUQKHNOWFMJGIDVLPBPQOAQKCQXQEKUXOLIRNVUPUDRGKINUX");
    msg.formation_name.assign("EGURAVGXKQEISCEXYZOHHUQGKZMKTUJNLT");
    msg.plan_id.assign("OLDFRWIPGXNKLVCSBETGPOZRCUSCQTQIDPTIQMEAOSOGRNWIYAXOSJQFQEZLEOHJXEZLRHFUWEVTMXEUHNGSTSMJCXLYMZUOWYIBLILBIBLWZDRGXPTRZVRVCKARJNYTAMNMMPTVYUJQBP");
    msg.description.assign("GCVLPHGZHFCMBQKOBZZYEAPSPSLAOCSNWYFYKPKUZACNOIPHEMC");
    msg.leader_speed = 0.220174720513;
    msg.leader_bank_lim = 0.783832359158;
    msg.pos_sim_err_lim = 0.625045443375;
    msg.pos_sim_err_wrn = 0.826004092343;
    msg.pos_sim_err_timeout = 53647U;
    msg.converg_max = 0.561472334202;
    msg.converg_timeout = 21626U;
    msg.comms_timeout = 7958U;
    msg.turb_lim = 0.440355407175;
    msg.custom.assign("QGABAQTVWLPCHRRAUXMZOXGZCFWRGQSZLGWTYSABNJXQHMDWPDJBVMVFXMONMRGKLYNFNIUSKEEPOCTKZUQS");

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
    msg.setTimeStamp(0.210028809649);
    msg.setSource(3016U);
    msg.setSourceEntity(157U);
    msg.setDestination(14770U);
    msg.setDestinationEntity(200U);
    msg.control_src = 26461U;
    msg.control_ent = 9U;
    msg.timeout = 0.438558754937;
    msg.loiter_radius = 0.770594025481;
    msg.altitude_interval = 0.774610335419;

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
    msg.setTimeStamp(0.139561731805);
    msg.setSource(34543U);
    msg.setSourceEntity(39U);
    msg.setDestination(30197U);
    msg.setDestinationEntity(155U);
    msg.control_src = 24452U;
    msg.control_ent = 168U;
    msg.timeout = 0.285672908462;
    msg.loiter_radius = 0.707957110457;
    msg.altitude_interval = 0.97139600165;

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
    msg.setTimeStamp(0.0852340694231);
    msg.setSource(62426U);
    msg.setSourceEntity(115U);
    msg.setDestination(41576U);
    msg.setDestinationEntity(150U);
    msg.control_src = 28195U;
    msg.control_ent = 43U;
    msg.timeout = 0.229875927319;
    msg.loiter_radius = 0.334581416211;
    msg.altitude_interval = 0.0743779835161;

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
    msg.setTimeStamp(0.853046477537);
    msg.setSource(9667U);
    msg.setSourceEntity(98U);
    msg.setDestination(34079U);
    msg.setDestinationEntity(253U);
    msg.flags = 238U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.958538741471;
    tmp_msg_0.speed_units = 35U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.656860889943;
    tmp_msg_1.z_units = 170U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.959367446328;
    msg.lon = 0.933455750244;
    msg.radius = 0.556324668781;

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
    msg.setTimeStamp(0.777994546815);
    msg.setSource(13741U);
    msg.setSourceEntity(184U);
    msg.setDestination(58862U);
    msg.setDestinationEntity(96U);
    msg.flags = 94U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.324376023023;
    tmp_msg_0.speed_units = 221U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.125722762222;
    tmp_msg_1.z_units = 223U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.679318349529;
    msg.lon = 0.821275810316;
    msg.radius = 0.712862016324;

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
    msg.setTimeStamp(0.948358219641);
    msg.setSource(10485U);
    msg.setSourceEntity(41U);
    msg.setDestination(5613U);
    msg.setDestinationEntity(196U);
    msg.flags = 65U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.535742122266;
    tmp_msg_0.speed_units = 164U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.777762910184;
    tmp_msg_1.z_units = 247U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.456402756434;
    msg.lon = 0.634295490162;
    msg.radius = 0.833119947754;

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
    msg.setTimeStamp(0.456735459918);
    msg.setSource(65044U);
    msg.setSourceEntity(76U);
    msg.setDestination(35225U);
    msg.setDestinationEntity(74U);
    msg.control_src = 35320U;
    msg.control_ent = 78U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 243U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.471094592882;
    tmp_tmp_msg_0_0.speed_units = 135U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.858869725295;
    tmp_tmp_msg_0_1.z_units = 156U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0330307108739;
    tmp_msg_0.lon = 0.664496428232;
    tmp_msg_0.radius = 0.284665602163;
    msg.reference.set(tmp_msg_0);
    msg.state = 163U;
    msg.proximity = 91U;

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
    msg.setTimeStamp(0.741213141252);
    msg.setSource(58866U);
    msg.setSourceEntity(251U);
    msg.setDestination(42457U);
    msg.setDestinationEntity(19U);
    msg.control_src = 11643U;
    msg.control_ent = 146U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 157U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.396857680436;
    tmp_tmp_msg_0_0.speed_units = 130U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.532768305264;
    tmp_tmp_msg_0_1.z_units = 179U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.740356134537;
    tmp_msg_0.lon = 0.776792542186;
    tmp_msg_0.radius = 0.757949995953;
    msg.reference.set(tmp_msg_0);
    msg.state = 25U;
    msg.proximity = 186U;

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
    msg.setTimeStamp(0.151332545304);
    msg.setSource(8769U);
    msg.setSourceEntity(51U);
    msg.setDestination(58087U);
    msg.setDestinationEntity(162U);
    msg.control_src = 41813U;
    msg.control_ent = 63U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 152U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.554518076343;
    tmp_tmp_msg_0_0.speed_units = 6U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0486795999035;
    tmp_tmp_msg_0_1.z_units = 7U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.904689685979;
    tmp_msg_0.lon = 0.0639501330188;
    tmp_msg_0.radius = 0.235014317793;
    msg.reference.set(tmp_msg_0);
    msg.state = 65U;
    msg.proximity = 92U;

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
    msg.setTimeStamp(0.188376862171);
    msg.setSource(2040U);
    msg.setSourceEntity(121U);
    msg.setDestination(64503U);
    msg.setDestinationEntity(41U);
    msg.ax_cmd = 0.4621270329;
    msg.ay_cmd = 0.500483181719;
    msg.az_cmd = 0.0731475853405;
    msg.ax_des = 0.141722227396;
    msg.ay_des = 0.319305665792;
    msg.az_des = 0.590670914337;
    msg.virt_err_x = 0.181351241269;
    msg.virt_err_y = 0.688978184242;
    msg.virt_err_z = 0.701214677578;
    msg.surf_fdbk_x = 0.141777855278;
    msg.surf_fdbk_y = 0.85480870325;
    msg.surf_fdbk_z = 0.704733090076;
    msg.surf_unkn_x = 0.867591626139;
    msg.surf_unkn_y = 0.758136807838;
    msg.surf_unkn_z = 0.579208792349;
    msg.ss_x = 0.329568886153;
    msg.ss_y = 0.478048770885;
    msg.ss_z = 0.461661840147;

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
    msg.setTimeStamp(0.564154946067);
    msg.setSource(51758U);
    msg.setSourceEntity(122U);
    msg.setDestination(65243U);
    msg.setDestinationEntity(27U);
    msg.ax_cmd = 0.570361554395;
    msg.ay_cmd = 0.568951330414;
    msg.az_cmd = 0.261202373717;
    msg.ax_des = 0.789484005449;
    msg.ay_des = 0.912254704211;
    msg.az_des = 0.388362291227;
    msg.virt_err_x = 0.7011992362;
    msg.virt_err_y = 0.833874666323;
    msg.virt_err_z = 0.0895828502271;
    msg.surf_fdbk_x = 0.370079829332;
    msg.surf_fdbk_y = 0.27295897971;
    msg.surf_fdbk_z = 0.850662722907;
    msg.surf_unkn_x = 0.743083835729;
    msg.surf_unkn_y = 0.865147788825;
    msg.surf_unkn_z = 0.970886915211;
    msg.ss_x = 0.883320689986;
    msg.ss_y = 0.525435302172;
    msg.ss_z = 0.106647029206;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("MPLVQPJCNRBFTJBZSUTRUVHGUYZVIUAOXKYJYKKNAWCQIMPPJTELEABHJSCTPCWKWBTAAPKIVQIUFCPNKDGXVPRGEQPVROAHOXNCENSDLFUOYKMNKFQJRWQTDHXBWGZNDAMQJYSZUGTDMBLMGOTR");
    tmp_msg_0.dist = 0.853849537207;
    tmp_msg_0.err = 0.00955738139479;
    tmp_msg_0.ctrl_imp = 0.296021442868;
    tmp_msg_0.rel_dir_x = 0.898322586403;
    tmp_msg_0.rel_dir_y = 0.0223288879019;
    tmp_msg_0.rel_dir_z = 0.810750353516;
    tmp_msg_0.err_x = 0.0891057502392;
    tmp_msg_0.err_y = 0.430555022289;
    tmp_msg_0.err_z = 0.216442398689;
    tmp_msg_0.rf_err_x = 0.205774403201;
    tmp_msg_0.rf_err_y = 0.887831911257;
    tmp_msg_0.rf_err_z = 0.678847645565;
    tmp_msg_0.rf_err_vx = 0.597639459793;
    tmp_msg_0.rf_err_vy = 0.256880899599;
    tmp_msg_0.rf_err_vz = 0.772426337188;
    tmp_msg_0.ss_x = 0.321360192559;
    tmp_msg_0.ss_y = 0.177371627124;
    tmp_msg_0.ss_z = 0.763585481663;
    tmp_msg_0.virt_err_x = 0.909540969085;
    tmp_msg_0.virt_err_y = 0.488449306034;
    tmp_msg_0.virt_err_z = 0.14095952774;
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
    msg.setTimeStamp(0.680242158539);
    msg.setSource(51655U);
    msg.setSourceEntity(214U);
    msg.setDestination(14089U);
    msg.setDestinationEntity(248U);
    msg.ax_cmd = 0.0573019981994;
    msg.ay_cmd = 0.530936747249;
    msg.az_cmd = 0.225963444319;
    msg.ax_des = 0.125442110643;
    msg.ay_des = 0.265497335142;
    msg.az_des = 0.366311340085;
    msg.virt_err_x = 0.0112325038515;
    msg.virt_err_y = 0.80034947585;
    msg.virt_err_z = 0.411144176015;
    msg.surf_fdbk_x = 0.0671251087078;
    msg.surf_fdbk_y = 0.576179727904;
    msg.surf_fdbk_z = 0.331545521193;
    msg.surf_unkn_x = 0.761096233801;
    msg.surf_unkn_y = 0.908813213792;
    msg.surf_unkn_z = 0.057828701123;
    msg.ss_x = 0.683408902641;
    msg.ss_y = 0.0321630508083;
    msg.ss_z = 0.627586302293;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("DPPFWOEKSUAIYZOJHKJTIDUDONUEXEIHVYSYFREILXLKO");
    tmp_msg_0.dist = 0.344025402069;
    tmp_msg_0.err = 0.599826021509;
    tmp_msg_0.ctrl_imp = 0.545698672094;
    tmp_msg_0.rel_dir_x = 0.862286044321;
    tmp_msg_0.rel_dir_y = 0.809346681463;
    tmp_msg_0.rel_dir_z = 0.717757930676;
    tmp_msg_0.err_x = 0.398498190503;
    tmp_msg_0.err_y = 0.777882476959;
    tmp_msg_0.err_z = 0.350360581397;
    tmp_msg_0.rf_err_x = 0.0520005423081;
    tmp_msg_0.rf_err_y = 0.860778669697;
    tmp_msg_0.rf_err_z = 0.63878137682;
    tmp_msg_0.rf_err_vx = 0.690533338777;
    tmp_msg_0.rf_err_vy = 0.023337423344;
    tmp_msg_0.rf_err_vz = 0.185540550312;
    tmp_msg_0.ss_x = 0.189648276335;
    tmp_msg_0.ss_y = 0.579143930215;
    tmp_msg_0.ss_z = 0.257867609701;
    tmp_msg_0.virt_err_x = 0.583498222891;
    tmp_msg_0.virt_err_y = 0.935403967953;
    tmp_msg_0.virt_err_z = 0.694906260775;
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
    msg.setTimeStamp(0.778278276566);
    msg.setSource(13884U);
    msg.setSourceEntity(114U);
    msg.setDestination(36461U);
    msg.setDestinationEntity(163U);
    msg.s_id.assign("LEHVNBEIKYVVJXTBQUMONNJMPCAFYDVYBEFOOVJAJTDNSKCUGNCVC");
    msg.dist = 0.397798013856;
    msg.err = 0.395136700848;
    msg.ctrl_imp = 0.775139577095;
    msg.rel_dir_x = 0.0637926469695;
    msg.rel_dir_y = 0.517106940173;
    msg.rel_dir_z = 0.156842480719;
    msg.err_x = 0.640850304568;
    msg.err_y = 0.749494376301;
    msg.err_z = 0.709580891447;
    msg.rf_err_x = 0.71898939593;
    msg.rf_err_y = 0.918921223472;
    msg.rf_err_z = 0.152254596556;
    msg.rf_err_vx = 0.953823953721;
    msg.rf_err_vy = 0.821506753575;
    msg.rf_err_vz = 0.733821931696;
    msg.ss_x = 0.502376794257;
    msg.ss_y = 0.0410209944157;
    msg.ss_z = 0.684441968341;
    msg.virt_err_x = 0.954656820028;
    msg.virt_err_y = 0.787773399907;
    msg.virt_err_z = 0.337288603448;

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
    msg.setTimeStamp(0.718646857806);
    msg.setSource(24277U);
    msg.setSourceEntity(222U);
    msg.setDestination(53402U);
    msg.setDestinationEntity(4U);
    msg.s_id.assign("NCDVTCTRLDTSQDDLVYTZPQWYJONKWGENIRMBEFKDXMOUCUIPEZIVSZAWCMMACZJQUWPPTNZHKIJBJZGTVUIBHOMWCSPXWAZTGNBTQXEHFXHBVLIJLYPHUYTYIXOVSKZDMNYXUOVJCAPDBRLQEFDXANSJZMYXCXSMWRWIFPEFGKHJDGCGIERVQSUQDLKBRQGKRMLBQUABJAM");
    msg.dist = 0.498668086682;
    msg.err = 0.223140325189;
    msg.ctrl_imp = 0.66484047255;
    msg.rel_dir_x = 0.765937425483;
    msg.rel_dir_y = 0.856115345465;
    msg.rel_dir_z = 0.292117327918;
    msg.err_x = 0.393572966176;
    msg.err_y = 0.413202345695;
    msg.err_z = 0.324409985438;
    msg.rf_err_x = 0.535000959322;
    msg.rf_err_y = 0.161150885263;
    msg.rf_err_z = 0.697325045391;
    msg.rf_err_vx = 0.715428563192;
    msg.rf_err_vy = 0.0637609669742;
    msg.rf_err_vz = 0.174112410128;
    msg.ss_x = 0.215483508841;
    msg.ss_y = 0.544644102258;
    msg.ss_z = 0.228221901198;
    msg.virt_err_x = 0.69486278476;
    msg.virt_err_y = 0.481873552589;
    msg.virt_err_z = 0.678447706445;

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
    msg.setTimeStamp(0.343645071844);
    msg.setSource(19972U);
    msg.setSourceEntity(177U);
    msg.setDestination(56266U);
    msg.setDestinationEntity(181U);
    msg.s_id.assign("FOZPWBFCRECYGIOZLNKDXEZLCUCVIYPZWGMXUKHHZMUAUKMOPSMCGVTYDILHYMTRKMJBLGBHCXWIQWOVINBMEVNYMFPOASHYPBEDDBAKGQJFONATRWPFQVWTRZJONABRZGKDBSATZXVSEVQDLKOMOYRFHWCFEJGTNGQVVSMEGSFDGPSUCRXUPAFJJOEKIXJJWZYAHXNQLSNBLW");
    msg.dist = 0.550111849014;
    msg.err = 0.305302087557;
    msg.ctrl_imp = 0.550256503262;
    msg.rel_dir_x = 0.276859460047;
    msg.rel_dir_y = 0.872551263375;
    msg.rel_dir_z = 0.0359387663383;
    msg.err_x = 0.1967442711;
    msg.err_y = 0.637925248613;
    msg.err_z = 0.765403435008;
    msg.rf_err_x = 0.346682784246;
    msg.rf_err_y = 0.385682341908;
    msg.rf_err_z = 0.908902735265;
    msg.rf_err_vx = 0.28383740892;
    msg.rf_err_vy = 0.520439860257;
    msg.rf_err_vz = 0.487530252533;
    msg.ss_x = 0.288163723057;
    msg.ss_y = 0.30417893943;
    msg.ss_z = 0.148740443741;
    msg.virt_err_x = 0.587282837866;
    msg.virt_err_y = 0.649942810943;
    msg.virt_err_z = 0.135517894749;

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
    msg.setTimeStamp(0.309612681634);
    msg.setSource(2772U);
    msg.setSourceEntity(181U);
    msg.setDestination(65067U);
    msg.setDestinationEntity(130U);
    msg.timeout = 55164U;
    msg.rpm = 0.0949155184644;
    msg.direction = 43U;
    msg.custom.assign("FJDYBRQHCAWOKZMCPYYSAKMVYZHVUSGSADICUDZYKCWONRKTFZDXBLSPKFBERCVRMTBMVEJBMUAZXLOMNHEZLGCHQRHRLVTPGIOATCLFTXTEQIIIOAJMCGJPLLFVNBQIKVQEKGKFEVOMTUNXWPSEIZOREJNNXYXZUMPOFUEHWGJGRPSMDEXFDASAILXOIWDYHLWVGXNFWNSQPNTKB");

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
    msg.setTimeStamp(0.113526331096);
    msg.setSource(36169U);
    msg.setSourceEntity(250U);
    msg.setDestination(15169U);
    msg.setDestinationEntity(230U);
    msg.timeout = 61727U;
    msg.rpm = 0.249455938047;
    msg.direction = 13U;
    msg.custom.assign("PPLVIYPMWIQNCFQIXCPRHEPZARPMQPJXOIXHQXOMWXANVEOSDWYUXRTRUVZVWVULTDLGBHLZQKUQTWGUGKUMQIFNILAESIZWBPAVRRJEFWBYYKNCDTZUNFFDQHFSGZCCYTSLUBJSKPJOIOSKDILJTACFKRDCHXDADSIMKEEJASKXOUG");

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
    msg.setTimeStamp(0.412218023818);
    msg.setSource(57268U);
    msg.setSourceEntity(6U);
    msg.setDestination(6357U);
    msg.setDestinationEntity(19U);
    msg.timeout = 25546U;
    msg.rpm = 0.559527898237;
    msg.direction = 37U;
    msg.custom.assign("AJIGVVOCPYNOFFTMOETCMRJCBKEYLKQPAXLCDCGWGXYPJRDAHXTZZZPKQLMYGIYA");

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
    msg.setTimeStamp(0.276287259752);
    msg.setSource(4558U);
    msg.setSourceEntity(145U);
    msg.setDestination(49800U);
    msg.setDestinationEntity(205U);
    msg.formation_name.assign("BSVASJHLMZNDLZKIQBEWVEGQPDIPBISOBMKMWUGROLMTCNGNFZBCGWUFSRRKLQDAVBTUNK");
    msg.type = 101U;
    msg.op = 159U;
    msg.group_name.assign("WVVCTGNRJTTXDAIKAMNGHOYVXSWJBELWVLQRRIJVSYAZOMLWDZ");
    msg.plan_id.assign("TSKMVKUFWEESNXGCLSVHRUABGLVTVHONNHPRRTQKFKILQMDGULMZOJEPYHAFOCDNDMJIRJBXCQJTMXWBJINEFMORMCQGESJHXMZFYFEVCQOOEDGFPWDHXUAKUSDIUVRNYVMLRLDFJZHFWAJWERYXVYLZIYUBNFLKDKIZSTKEQWSPULOGKXUBNUZGMGOZPBPTQCSBZPZSDRVOJKAYGTCCNAXQH");
    msg.description.assign("OSMESLBDRUOHUESUGXURDIOXRPWCEPAACEMCRFHXVTOVVWCSAKSTCHCLOPKAGJBNU");
    msg.reference_frame = 195U;
    msg.leader_bank_lim = 0.175148411391;
    msg.leader_speed_min = 0.926134090171;
    msg.leader_speed_max = 0.724529706253;
    msg.leader_alt_min = 0.813506102477;
    msg.leader_alt_max = 0.92003810787;
    msg.pos_sim_err_lim = 0.669038731792;
    msg.pos_sim_err_wrn = 0.232313379612;
    msg.pos_sim_err_timeout = 6195U;
    msg.converg_max = 0.492825854094;
    msg.converg_timeout = 12255U;
    msg.comms_timeout = 55295U;
    msg.turb_lim = 0.237995222251;
    msg.custom.assign("UABEEYUYNAXTVTGGNEWZMJRCBIQDDFBFWXDKRFHFVWSXZPVAWTPGEMDDOZFZALKAHCHJMAFRDSWLIKXJNYOOUTCNLAITCCVOMXWJDCQMFXKVUQHVU");

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
    msg.setTimeStamp(0.305574653315);
    msg.setSource(59640U);
    msg.setSourceEntity(173U);
    msg.setDestination(34598U);
    msg.setDestinationEntity(64U);
    msg.formation_name.assign("VDWPGNHOBSAQTZXYCERDZZNBXJYHHTPDYUSZHXUKPEJZCVPXSMPLOQQCGCQFJCIDZTJHBDAMKBASBMAGRVSSYCHZGSVAIDGLORBGJWBECDUIFILFBKZSGLQVPPNQASIWYAGESDHHDQNIWTKPCRVMVIJQFTUYCZEFMPFYBUMUTLTXYHXOINAZOEJIRLBVXWULUXPWKXWOCKJEF");
    msg.type = 205U;
    msg.op = 154U;
    msg.group_name.assign("RXJFPYYWBPLILGABWZFOUCDFRAIHTUPRGPDTQQZIFKMPEQIEYZWOUYCEEMXNAVV");
    msg.plan_id.assign("YAAFEZEXLPLOVXJXOTWGPBWNAHQWJIILWDEUVWZGCJLFPCFUZTFXARXPR");
    msg.description.assign("IMVSAHNTTCCNGTCW");
    msg.reference_frame = 85U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 61946U;
    tmp_msg_0.off_x = 0.224535204449;
    tmp_msg_0.off_y = 0.318133752582;
    tmp_msg_0.off_z = 0.823923530682;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.356591443993;
    msg.leader_speed_min = 0.531077040649;
    msg.leader_speed_max = 0.83998822539;
    msg.leader_alt_min = 0.079216405785;
    msg.leader_alt_max = 0.0263516419087;
    msg.pos_sim_err_lim = 0.811928346327;
    msg.pos_sim_err_wrn = 0.315614508564;
    msg.pos_sim_err_timeout = 53330U;
    msg.converg_max = 0.308723932234;
    msg.converg_timeout = 5850U;
    msg.comms_timeout = 29294U;
    msg.turb_lim = 0.678720913541;
    msg.custom.assign("QVDKMCBUDOUNLLWXSKLLXDXQBLRVCZVQNJFCEZXAFOMBIGMLTZEGTSFSVAMWUCPFKZFTCQDOYLJPXKGVCYK");

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
    msg.setTimeStamp(0.475837511998);
    msg.setSource(59323U);
    msg.setSourceEntity(9U);
    msg.setDestination(29090U);
    msg.setDestinationEntity(124U);
    msg.formation_name.assign("UCMVUEHTCLPJQXSUEBDAXZKBOJOBDBYHDGSJNBKNIHGVNZHGSTQZXEYBFHSJAYGXNYVYKGASSIRHEWUTADPNCUCACZOLRZRPLNPNDFRJLBPYSFOUPZXRRLFWQIQLEAWAMCBHTVBOYPUHIZMCNSIZVUZQQMVWQEFFWMHUXOOWVKKRLOTWDCTKQFOAIS");
    msg.type = 177U;
    msg.op = 111U;
    msg.group_name.assign("KQBFUTZNUQCEGDJRLPBPSBUCVADJDHJIKEIHIXPWTHYPSMDEZDOWTSOYAOMCJHATQJHWSRPIOZEHVVMKNYMGGSGTXFULPRBIWVLKDOOWPZNIUPYESYZGCYVAFTLQMNKGCDFNLLQXHNMOWVYRFZS");
    msg.plan_id.assign("YIOHPXZDPCDWHSFJKLWPPRLGBHOZBSCKDXSIRQFNUMYIXHRFTFMYSMEQWOKVYTEUENKULWXKLWXOSDLGNCIFQLGBTS");
    msg.description.assign("FTLSYUGORFXTXQSZDPSWHRRUQFBSGFHYTWNVWXKBXCRVQELGQRWGWNMCOVZBRBAELIUKTDOAXANIYLGIEAJVPTOMCGHCNZEETOKKESYBDZDCLLDBQPZFPLCJAVWAVHXSMIDKWRMMFNLEUXYWTJWMIAYDYOQUCSODLRIQVNKKQMHKIHJMBUCURIJAIUBPBGPPJXPPHFYKFJUDHEODQZGMEOCZXZUYZYHOGWTSGSBC");
    msg.reference_frame = 138U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32618U;
    tmp_msg_0.off_x = 0.33838186734;
    tmp_msg_0.off_y = 0.980379807652;
    tmp_msg_0.off_z = 0.0224527909342;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.748027663496;
    msg.leader_speed_min = 0.831178966993;
    msg.leader_speed_max = 0.79214200574;
    msg.leader_alt_min = 0.927966475885;
    msg.leader_alt_max = 0.237298966403;
    msg.pos_sim_err_lim = 0.007515751113;
    msg.pos_sim_err_wrn = 0.644222699863;
    msg.pos_sim_err_timeout = 50964U;
    msg.converg_max = 0.829961029293;
    msg.converg_timeout = 59240U;
    msg.comms_timeout = 58433U;
    msg.turb_lim = 0.955647878483;
    msg.custom.assign("TAKBXCSNQSRZDTPDYURJROMZHSUOKKCAQEZWMCGTLRHOUOPAUCBYAMWDVXNNMJSYUFZMJGECNDLEIEVGTKKXODXFGBGWTHXZZQEMPJHIRXY");

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
    msg.setTimeStamp(0.653029838756);
    msg.setSource(20266U);
    msg.setSourceEntity(123U);
    msg.setDestination(58017U);
    msg.setDestinationEntity(47U);
    msg.timeout = 20167U;
    msg.lat = 0.505812234733;
    msg.lon = 0.407261274477;
    msg.z = 0.891866104061;
    msg.z_units = 110U;
    msg.speed = 0.172622983405;
    msg.speed_units = 212U;
    msg.custom.assign("OFEMMZUGKKUSPRHOPZZPHXIQVBH");

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
    msg.setTimeStamp(0.0377064077687);
    msg.setSource(50829U);
    msg.setSourceEntity(219U);
    msg.setDestination(51026U);
    msg.setDestinationEntity(144U);
    msg.timeout = 58966U;
    msg.lat = 0.164303449797;
    msg.lon = 0.124291744993;
    msg.z = 0.605748799136;
    msg.z_units = 28U;
    msg.speed = 0.319185019693;
    msg.speed_units = 203U;
    msg.custom.assign("RMYGUICAYEKHMHSWKYGETDSIFDGVZKBGZHMJQTDYSQSCEOLCDTOFULUTXEDMEDZRRJVCAIATOGFLKWPNCVHDQUYITHRHGMKUIRHLPUAMNKNCALROBWHZYOZKNJVLYAJVJBLVSBQPKDXBEJUJBWOEPNZHTVQFUPQQJXRGTOQA");

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
    msg.setTimeStamp(0.430005587107);
    msg.setSource(24884U);
    msg.setSourceEntity(217U);
    msg.setDestination(52240U);
    msg.setDestinationEntity(51U);
    msg.timeout = 19437U;
    msg.lat = 0.170021362342;
    msg.lon = 0.228824470504;
    msg.z = 0.112614884684;
    msg.z_units = 69U;
    msg.speed = 0.116160159972;
    msg.speed_units = 212U;
    msg.custom.assign("LWJFTOHWQCYKOHKUXABQQKRGSPTMNGTVGIIGIORWAYXDUPDCJTDQCOHBFYJMMBQSURWSXEXHSWUFUZOGLPXHLSPWGMYWMAUOEVRFVOVBBD");

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
    msg.setTimeStamp(0.703151170456);
    msg.setSource(44889U);
    msg.setSourceEntity(30U);
    msg.setDestination(39629U);
    msg.setDestinationEntity(10U);
    msg.timeout = 40139U;
    msg.lat = 0.959746982201;
    msg.lon = 0.2059755812;
    msg.z = 0.494799422031;
    msg.z_units = 244U;
    msg.speed = 0.0196500106557;
    msg.speed_units = 30U;
    msg.custom.assign("RQMQMJMLSWVCLJTKXKNDADAFAYFAIMLRNPPFRWECBBNNWUECSVBROZKRQEXGDCZJGZPZXYUJMONYJ");

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
    msg.setTimeStamp(0.630737193215);
    msg.setSource(25563U);
    msg.setSourceEntity(169U);
    msg.setDestination(17034U);
    msg.setDestinationEntity(0U);
    msg.timeout = 65123U;
    msg.lat = 0.767649709471;
    msg.lon = 0.869773934544;
    msg.z = 0.728549390675;
    msg.z_units = 42U;
    msg.speed = 0.650434197725;
    msg.speed_units = 238U;
    msg.custom.assign("GETVJDOIGBGBZXNZARFZLTATUTYEAECTODKNKMGIZWGGKSRFULJNTWOWTMHGLQZKCMEHBTVQNCFCVZFMMPQJJDDQNYOWCNOUQVJVZEANAMYRCLDNKZXQDUUGRVUEDHYFNACPVLXKISBJFVQHMIQUTMYMRJ");

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
    msg.setTimeStamp(0.808931077333);
    msg.setSource(59195U);
    msg.setSourceEntity(68U);
    msg.setDestination(37669U);
    msg.setDestinationEntity(95U);
    msg.timeout = 16388U;
    msg.lat = 0.389907066253;
    msg.lon = 0.522359758217;
    msg.z = 0.16455959576;
    msg.z_units = 5U;
    msg.speed = 0.272377305626;
    msg.speed_units = 188U;
    msg.custom.assign("FTJPHMAXHGGNGIOZSPMYTYSTSWVKDDELQKDIYUQKYKVBEFTWVRLTKACENYBXDCV");

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
    msg.setTimeStamp(0.912846621727);
    msg.setSource(47905U);
    msg.setSourceEntity(36U);
    msg.setDestination(26784U);
    msg.setDestinationEntity(32U);
    msg.arrival_time = 0.24862786282;
    msg.lat = 0.869434877185;
    msg.lon = 0.12531003463;
    msg.z = 0.520585574624;
    msg.z_units = 157U;
    msg.travel_z = 0.206578334606;
    msg.travel_z_units = 235U;
    msg.delayed = 236U;

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
    msg.setTimeStamp(0.436258244644);
    msg.setSource(42777U);
    msg.setSourceEntity(13U);
    msg.setDestination(43653U);
    msg.setDestinationEntity(11U);
    msg.arrival_time = 0.345264452032;
    msg.lat = 0.567913230793;
    msg.lon = 0.392184348047;
    msg.z = 0.706909014445;
    msg.z_units = 74U;
    msg.travel_z = 0.982653600564;
    msg.travel_z_units = 15U;
    msg.delayed = 83U;

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
    msg.setTimeStamp(0.779755911954);
    msg.setSource(35410U);
    msg.setSourceEntity(53U);
    msg.setDestination(14202U);
    msg.setDestinationEntity(171U);
    msg.arrival_time = 0.311464292125;
    msg.lat = 0.316759990315;
    msg.lon = 0.676651135463;
    msg.z = 0.694354336879;
    msg.z_units = 251U;
    msg.travel_z = 0.576816949444;
    msg.travel_z_units = 98U;
    msg.delayed = 82U;

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
    msg.setTimeStamp(0.958675035012);
    msg.setSource(44555U);
    msg.setSourceEntity(23U);
    msg.setDestination(16693U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.0798131931213;
    msg.lon = 0.184808404218;
    msg.z = 0.684668317995;
    msg.z_units = 89U;
    msg.speed = 0.28691019721;
    msg.speed_units = 169U;
    msg.bearing = 0.785007645244;
    msg.cross_angle = 0.680507491372;
    msg.width = 0.171957522227;
    msg.length = 0.0631481461777;
    msg.coff = 66U;
    msg.angaperture = 0.956246651743;
    msg.range = 46794U;
    msg.overlap = 194U;
    msg.flags = 151U;
    msg.custom.assign("HYLMFGFFLQQOSZLMFYVMZUEMRZLGPDTHSTNWRXAAOOTEWLEGUOCCYZWBHAPUBPNKVJGVKPWHDCOAIJNCFUNTMEZZWKRZJXRCXUWQTWGKNJFNFAVYBQUYGIWOJLSXMOVCDI");

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
    msg.setTimeStamp(0.209265295798);
    msg.setSource(25770U);
    msg.setSourceEntity(172U);
    msg.setDestination(37858U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.670113722479;
    msg.lon = 0.997505383943;
    msg.z = 0.453075676705;
    msg.z_units = 46U;
    msg.speed = 0.960572883417;
    msg.speed_units = 4U;
    msg.bearing = 0.413187195916;
    msg.cross_angle = 0.565108754228;
    msg.width = 0.385359183614;
    msg.length = 0.52342195102;
    msg.coff = 9U;
    msg.angaperture = 0.911244007111;
    msg.range = 1140U;
    msg.overlap = 152U;
    msg.flags = 53U;
    msg.custom.assign("GEMYJRVCSCOBBWVRFHLZANHLLKZEPUOOTIOBOIUEFBYGBGYXHYFJWAJSNELFWSPADCJFAYEWMNQPHBDDKTXTPILPGWNHFFZGGKQMXYTCZWGMODRDE");

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
    msg.setTimeStamp(0.111020500024);
    msg.setSource(27462U);
    msg.setSourceEntity(115U);
    msg.setDestination(61182U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.744168385943;
    msg.lon = 0.176815105156;
    msg.z = 0.0920763635421;
    msg.z_units = 3U;
    msg.speed = 0.0558010261253;
    msg.speed_units = 44U;
    msg.bearing = 0.122013005844;
    msg.cross_angle = 0.296698066248;
    msg.width = 0.539519207989;
    msg.length = 0.215360754532;
    msg.coff = 230U;
    msg.angaperture = 0.552804116385;
    msg.range = 35892U;
    msg.overlap = 78U;
    msg.flags = 68U;
    msg.custom.assign("XXLYRGYOHJMDLVYRQYTYGVFPVTEQUENBXEGOGCWZPWXGOSAZKPPRRYJURKTLACJWGOLQNBXSEZWNOJMKUAULSMLRYNJFEHMDNKQUEPHDGFDKXZVOFPYSWFQZPRJRHSAWZROCHLBBTTWIOCXFCISXSUPIAQVLXAZNCTSNIOUFGZXMZAZDNMEQSVEHDTTHBTBFJECLVTG");

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
    msg.setTimeStamp(0.0939990898917);
    msg.setSource(64780U);
    msg.setSourceEntity(151U);
    msg.setDestination(57031U);
    msg.setDestinationEntity(180U);
    msg.timeout = 15534U;
    msg.lat = 0.345471836467;
    msg.lon = 0.9756079471;
    msg.z = 0.735087112829;
    msg.z_units = 122U;
    msg.speed = 0.551193359917;
    msg.speed_units = 212U;
    msg.syringe0 = 195U;
    msg.syringe1 = 152U;
    msg.syringe2 = 196U;
    msg.custom.assign("JZYKXBJFEVDYJSEWXZJKFISFISVRCVHJNNRFBRXSKXBQNQDAGEDRHLIOCLAPMUMEGCBDOCOISTSKPUARMDVUAUUMORUMYHTWYGZMNHGAAEVGLAZSGBNCHFQLLMQVSCKQECGATWZIZTOYVORPSYRKBEJTJDHGIROFXTLIQCVHQNWOKDJUMBNHYPIPCNJ");

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
    msg.setTimeStamp(0.896790638038);
    msg.setSource(50303U);
    msg.setSourceEntity(215U);
    msg.setDestination(47622U);
    msg.setDestinationEntity(38U);
    msg.timeout = 44621U;
    msg.lat = 0.0594501754564;
    msg.lon = 0.93840546368;
    msg.z = 0.180962485106;
    msg.z_units = 230U;
    msg.speed = 0.551620323877;
    msg.speed_units = 137U;
    msg.syringe0 = 151U;
    msg.syringe1 = 212U;
    msg.syringe2 = 119U;
    msg.custom.assign("TANTSUZAPYJGEOQVLQAIGWMSOHQAPMKFITHWVVQVZJZQUWMNCKEROMKECMPGEFLVEW");

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
    msg.setTimeStamp(0.434564263012);
    msg.setSource(37748U);
    msg.setSourceEntity(25U);
    msg.setDestination(8060U);
    msg.setDestinationEntity(215U);
    msg.timeout = 64021U;
    msg.lat = 0.18161128574;
    msg.lon = 0.179416671768;
    msg.z = 0.521096407766;
    msg.z_units = 158U;
    msg.speed = 0.57637956178;
    msg.speed_units = 33U;
    msg.syringe0 = 7U;
    msg.syringe1 = 219U;
    msg.syringe2 = 187U;
    msg.custom.assign("MRWEDUIZTRSDEVOEWLFVPBQPFELDITZGGNIVGPN");

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
    msg.setTimeStamp(0.837017743771);
    msg.setSource(40295U);
    msg.setSourceEntity(88U);
    msg.setDestination(2333U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.222895769283);
    msg.setSource(43825U);
    msg.setSourceEntity(133U);
    msg.setDestination(61755U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.928849199605);
    msg.setSource(37919U);
    msg.setSourceEntity(172U);
    msg.setDestination(50381U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.120625731058);
    msg.setSource(35732U);
    msg.setSourceEntity(205U);
    msg.setDestination(9710U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.068264218021;
    msg.lon = 0.229603952776;
    msg.z = 0.584777937051;
    msg.z_units = 160U;
    msg.speed = 0.306449245574;
    msg.speed_units = 140U;
    msg.takeoff_pitch = 0.521541087387;
    msg.custom.assign("OAVFRXXIHYWYRWTDYFLUDDRNTKHHFKYNKYSOSPARAOHAKSUGZXHDUONDVGTOWJPKQWDVGHPKUBZBXCTMFSHZOQVSEIQRMBDLLSFBXUKCSMISJOLJMTYPMMQLBTMVEQIKZGPFOTMIGWEVWFEOETZBBTPINFXGYYZUVXBJQRCUWCQEJHFNIJKRH");

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
    msg.setTimeStamp(0.870075210717);
    msg.setSource(26473U);
    msg.setSourceEntity(144U);
    msg.setDestination(48233U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.200173215635;
    msg.lon = 0.0877143592886;
    msg.z = 0.632722259785;
    msg.z_units = 160U;
    msg.speed = 0.202493859359;
    msg.speed_units = 211U;
    msg.takeoff_pitch = 0.533571276086;
    msg.custom.assign("BXZXEKTADNAXUBIQUUEZYFJBEMJFRUGSYAYZOWLWGIDNLITHCXOBMYDTYTOKXADSGASQFYJOLNRSQCNSYIASSDUUQLYYPPNJXRFDMFELPJVVZHNYPHJQUQQFVCRGZHWDLGMOVIVEHO");

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
    msg.setTimeStamp(0.839933670123);
    msg.setSource(65314U);
    msg.setSourceEntity(131U);
    msg.setDestination(23619U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.0546241448986;
    msg.lon = 0.560310646642;
    msg.z = 0.385358350361;
    msg.z_units = 85U;
    msg.speed = 0.820025362336;
    msg.speed_units = 105U;
    msg.takeoff_pitch = 0.377668266244;
    msg.custom.assign("SXQYLSIGUWSKIPCSALYDKAGLDQ");

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
    msg.setTimeStamp(0.852358892645);
    msg.setSource(11681U);
    msg.setSourceEntity(60U);
    msg.setDestination(52363U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.315989546008;
    msg.lon = 0.768566048637;
    msg.z = 0.19094698229;
    msg.z_units = 246U;
    msg.speed = 0.918849681286;
    msg.speed_units = 210U;
    msg.abort_z = 0.275868716384;
    msg.bearing = 0.222365932478;
    msg.glide_slope = 106U;
    msg.glide_slope_alt = 0.0209480022068;
    msg.custom.assign("AYWBXPAQEBPRHORMKQYLOYDTVXNIUJRLPZCHCSUTRNFPXQOCVOICIXJCNMNLZSGQWLQGIAMFZPAEIAGWUMYJCVYMRXSLIWFHBGETJSTHKGUURDCVDMHWNKVVWGQDNRMBBXPZOZCEDHYZSGPUSDEPDJJFRHVCYKZJFFBKVA");

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
    msg.setTimeStamp(0.801709856327);
    msg.setSource(49187U);
    msg.setSourceEntity(10U);
    msg.setDestination(33548U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.840015408329;
    msg.lon = 0.696023119217;
    msg.z = 0.877555785259;
    msg.z_units = 203U;
    msg.speed = 0.753907747376;
    msg.speed_units = 33U;
    msg.abort_z = 0.388054577947;
    msg.bearing = 0.370977280049;
    msg.glide_slope = 70U;
    msg.glide_slope_alt = 0.977201845444;
    msg.custom.assign("MVYUTCFQUGIGFDNZEDQAWNNTEXNBRSPRWQNVDYQTKZOPEELSDVRLWR");

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
    msg.setTimeStamp(0.846823996372);
    msg.setSource(28262U);
    msg.setSourceEntity(191U);
    msg.setDestination(43792U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.659000734965;
    msg.lon = 0.130222309468;
    msg.z = 0.43241026146;
    msg.z_units = 130U;
    msg.speed = 0.570288511374;
    msg.speed_units = 188U;
    msg.abort_z = 0.860217227984;
    msg.bearing = 0.662673267454;
    msg.glide_slope = 223U;
    msg.glide_slope_alt = 0.229829779501;
    msg.custom.assign("SLWGUCZCLNPIKLRPXYPOCXJUXHGMVDJCATBIGFMJJDSJIUHJWEAHZSEBDWZTKPOKMHHIMHMFLLQVQDOYSXDGRQASJLWGHUGUEVQIXQEBIFGSPEKVEXCGRYBOKK");

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
    msg.setTimeStamp(0.674188766539);
    msg.setSource(48200U);
    msg.setSourceEntity(177U);
    msg.setDestination(36377U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.254140000914;
    msg.lon = 0.229463753372;
    msg.speed = 0.716730372319;
    msg.speed_units = 244U;
    msg.limits = 96U;
    msg.max_depth = 0.89467991117;
    msg.min_alt = 0.37570710063;
    msg.time_limit = 0.516560673896;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.176991307928;
    tmp_msg_0.lon = 0.51622088749;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("XFRNNEHTCVHHPEKQNTDDHRIOUFHPXYHXZTDXVVKECDZQOFQUCMTUZJBAEMDFGWHNYKYEANLAYZTMEPKCHVPBVSTPUIQTUWQMSAYKJROLBNCKQLYAYELUKLMAFGWVZWHYXJFCSDOGWUBAJFBNJPTOBZRSWPAIRQYLINRIGXRBDFBVOWUHPGIMXRJLZXMWQUKMADJKOBZFOMAVGRGVGQJUYBDDS");
    msg.custom.assign("IFWFNATAIVYHOWTEGATUSZZCRBEVKRSHIDPSNSNFXKGIMQVCFCPJKPFHUEOXVNYXPKCAMKHBAJBQUIAOIPKDLYYHA");

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
    msg.setTimeStamp(0.26252341314);
    msg.setSource(27391U);
    msg.setSourceEntity(169U);
    msg.setDestination(23717U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.173518553518;
    msg.lon = 0.876662424545;
    msg.speed = 0.597323991821;
    msg.speed_units = 191U;
    msg.limits = 185U;
    msg.max_depth = 0.119751113292;
    msg.min_alt = 0.646463473436;
    msg.time_limit = 0.613504861268;
    msg.controller.assign("HQSCPUMAGDDGNIYLBUSSGGCHQYOLIQWSVYDZHTXSFFAJHFEIHIVJLYLQTBUILROAPZWBYMWRJ");
    msg.custom.assign("ZSGXNYIGLFMVJYLORFWLNGBJDNAOVLKRUQPEMAVEUAYRO");

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
    msg.setTimeStamp(0.521865637499);
    msg.setSource(22084U);
    msg.setSourceEntity(22U);
    msg.setDestination(33383U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.725243386089;
    msg.lon = 0.209850923111;
    msg.speed = 0.348281019872;
    msg.speed_units = 204U;
    msg.limits = 42U;
    msg.max_depth = 0.666949272918;
    msg.min_alt = 0.360507930185;
    msg.time_limit = 0.758768998856;
    msg.controller.assign("KJMJEWWVXYZEFTISAAUDYWTSNDXCKQTHFUUFCZXKJTPWNLRTYOKVSMYGEDPBOPYEXIQVOHXBTLGBPMIOQPQYO");
    msg.custom.assign("DHOZCVSVLMQJMKAJNTYFVBFVCU");

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
    msg.setTimeStamp(0.180976237071);
    msg.setSource(54876U);
    msg.setSourceEntity(244U);
    msg.setDestination(6645U);
    msg.setDestinationEntity(80U);
    msg.target.assign("LEHVMKINRZGERDLZEIOHDNUOOJURSKMQZQXRCNABHAJWPOQBRBQWDWSUMWFUQKCSGKGKFPAMNXVXZHYIDTOUYIQTYHBGAMIMTPOXPAKQDHSPDFUACWUIPTPJIHVWZVJSFZQVLNZSMJOGBWRQYCXMYJEXANAPLCFFTDNYKGTYENWGLOXLXQZV");
    msg.max_speed = 0.928439175552;
    msg.speed_units = 230U;
    msg.lat = 0.598379530651;
    msg.lon = 0.520869368032;
    msg.z = 0.374257156716;
    msg.z_units = 221U;
    msg.custom.assign("KTIDOADLMSZJQNGPSDUDVXJDZDZLLBJ");

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
    msg.setTimeStamp(0.217757381684);
    msg.setSource(9022U);
    msg.setSourceEntity(148U);
    msg.setDestination(12534U);
    msg.setDestinationEntity(140U);
    msg.target.assign("QKENXPGPDKBGKLSGBSVXNHGZWFSGYJLUJDNEZJAUJMSIZNEXMLMAOHYXOIHXULUARFUKGYHODDDVHCQAWARYLLAPVBPOFPDRYZIHZJRVFTCBBHRDOJXTWNHTRDVISL");
    msg.max_speed = 0.239825221352;
    msg.speed_units = 14U;
    msg.lat = 0.473135038295;
    msg.lon = 0.374433129973;
    msg.z = 0.472395319327;
    msg.z_units = 171U;
    msg.custom.assign("HIAYYSLBMYHTBURYDIIDVSCBWOKQBJQPSNTFFKRSOHFQWJEEVVFXZINADMTNYUZQWWOPUGYTLAXNSPKOCMDKLECYAEDCCWBHTHCKDZWQRDPHXVBOTKQQCDECZNPNUJGPHPWYTJRDXXHSZVJSGFMEJFUUMQIKTLMJOBMZLRGVLIGUXGRBRZLARVIQANXLAVC");

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
    msg.setTimeStamp(0.0368833560054);
    msg.setSource(34640U);
    msg.setSourceEntity(92U);
    msg.setDestination(47557U);
    msg.setDestinationEntity(79U);
    msg.target.assign("NDSCBBDXPCKGZEAAUKWRIWGFIIAJHEDZVOYYKLEPQNMSQMINKBELZECCDGLVUMPQPVNUUVKPRLUSSPSTYUZJTBXXCCIGRUCUZVBUKETGMXMYGWRCPHYSPOSJENBHDEBJJZHNDYHNMJQOXGXHQABXNTALPZTHAUCDLFEVJOGFTTHIKAWVQMPWRYVOISXQYCBIFKOGFFTOSIZAREKLHMTARLQDWYOVITAFQKFYFNQWHBRDLRGSWNMWXZOWZF");
    msg.max_speed = 0.41330232536;
    msg.speed_units = 205U;
    msg.lat = 0.680371946672;
    msg.lon = 0.128747184462;
    msg.z = 0.192878657505;
    msg.z_units = 38U;
    msg.custom.assign("XFIXVNDOLAMYBBKDURYUCFZFLVTFTTPQYLVCKHWQTEKHKYKOMOQOPMZUEBQNVWEEDASUGGCXAAGMMENCGLOCKMYRGRNWZPEQDLHDATCBXII");

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
    msg.setTimeStamp(0.0992857220995);
    msg.setSource(22812U);
    msg.setSourceEntity(233U);
    msg.setDestination(17878U);
    msg.setDestinationEntity(146U);
    msg.timeout = 53652U;
    msg.lat = 0.261750413281;
    msg.lon = 0.41767958196;
    msg.speed = 0.105797990751;
    msg.speed_units = 37U;
    msg.custom.assign("ISYVEGGLBV");

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
    msg.setTimeStamp(0.548090338422);
    msg.setSource(21654U);
    msg.setSourceEntity(242U);
    msg.setDestination(51594U);
    msg.setDestinationEntity(48U);
    msg.timeout = 42954U;
    msg.lat = 0.426465130154;
    msg.lon = 0.711552767391;
    msg.speed = 0.868976507573;
    msg.speed_units = 245U;
    msg.custom.assign("WSJRNCWIZGGCBNZEBZEPSVPIZHJKSZPPEQXHJRELXKROTWFEEDXDKDERNUZTNUWSUYXAVYGBUYSFEIBHMVGSXOUKWICCBVOHXJLHXFQXDOWCRNBQYCPAWJGCICTKTHJOUTAYQZXQTNMQJKLCTUBPEUNKGZLVHAIOVYQDVWPPHHRVESWGROMGARFCRDKQBFKTQDINMSHZMOJONALMAUQLALYTVYFYMIPDIYUFDBAVJFGG");

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
    msg.setTimeStamp(0.134251547355);
    msg.setSource(43199U);
    msg.setSourceEntity(136U);
    msg.setDestination(38556U);
    msg.setDestinationEntity(90U);
    msg.timeout = 27754U;
    msg.lat = 0.582383712926;
    msg.lon = 0.0459532933229;
    msg.speed = 0.294563918007;
    msg.speed_units = 160U;
    msg.custom.assign("ZWAUSJXQMUEYQCLCNUAJMYEFNBXREDSBZSVOFECZZTIWFRNKXKVCMUNAVXTMKSWVYOKQHIOEGDWTUGYJUBMHMRPRAZZTCSCFEAFRKJXDSPOMKPXZCHWDYTIQRSHRVHFDTBGNYYOACISUKSNOLQZYZRDULPXJHJTNGKJKCVFIDQZJXAUOXFXWNGBC");

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
    msg.setTimeStamp(0.747592547339);
    msg.setSource(27784U);
    msg.setSourceEntity(65U);
    msg.setDestination(54019U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.332480579922;
    msg.lon = 0.255360941122;
    msg.z = 0.0133813201334;
    msg.z_units = 194U;
    msg.radius = 0.0745932120406;
    msg.duration = 16331U;
    msg.speed = 0.418567682782;
    msg.speed_units = 135U;
    msg.popup_period = 26474U;
    msg.popup_duration = 28667U;
    msg.flags = 23U;
    msg.custom.assign("XCFEZSPZOOHIIKJUDPHLUUMFTDDCWMKCBLJAARPHBQ");

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
    msg.setTimeStamp(0.126842438851);
    msg.setSource(21638U);
    msg.setSourceEntity(207U);
    msg.setDestination(58702U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.942575680714;
    msg.lon = 0.892209707591;
    msg.z = 0.988582159592;
    msg.z_units = 141U;
    msg.radius = 0.54430115167;
    msg.duration = 56852U;
    msg.speed = 0.546321779071;
    msg.speed_units = 68U;
    msg.popup_period = 59965U;
    msg.popup_duration = 28611U;
    msg.flags = 106U;
    msg.custom.assign("MNLQBJBLQMYKDAVKDUOGWMGCWUIKACDNWQBMTIJOPDSODBTJWAFESGAYSRMCFXBTLJTVECNBZYTWAMHDNTKCWAIQVZPKXPBJFLEHNPCIMEEYYUHRISGRVEQRGTKWALARLOVWRRRGVNUYETXOVHUCZHZXFUQ");

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
    msg.setTimeStamp(0.572479685363);
    msg.setSource(50374U);
    msg.setSourceEntity(222U);
    msg.setDestination(8441U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.413039245273;
    msg.lon = 0.793743189257;
    msg.z = 0.505653111295;
    msg.z_units = 21U;
    msg.radius = 0.962762965252;
    msg.duration = 22928U;
    msg.speed = 0.719379556385;
    msg.speed_units = 210U;
    msg.popup_period = 9487U;
    msg.popup_duration = 49711U;
    msg.flags = 170U;
    msg.custom.assign("GAYHPSYZQPRPQVMNPFLKEXYBCMCLGFGATNJTDYVRCGEYVUOWCUJDISDBBVEYAMZEIHCGQUDGKAMBEIUXBHXFCKMOXFRAWHSLFRQXVACNXMVLQTQENZJULFYBRHHGNZDHLOKPDNOWOJMIZGTKODFLMAPBVKWQJZQWUTOTNRIANWNLVTDFSSCYOAFEZZBUBWEHFLVPWVKITMIDCIOAIKUHSJEXSTODJ");

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
    msg.setTimeStamp(0.517775648239);
    msg.setSource(24386U);
    msg.setSourceEntity(125U);
    msg.setDestination(23346U);
    msg.setDestinationEntity(160U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("NLNYPJDYDALFFVKHVDECOLQLTKZDWFPXIYZFAGXWCBXIHWMCEMUOCDCAZRYBWSQACKREBTPIMBVWPVNVTWMOOPGDOIMVZHGRVASQHMGUZJREGPOUSIBRBYFHVQXJKLRGEFUOXURZJKNARPZGASWTCMJJYEQNTMCLLPPBHHBOJRUHBTJFTZYFSEUIKQTNNQKEOWDNSXCXOL");
    IMC::FollowPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target.assign("TSRUFVOVZMQSPAGCQGTIWJKGNAGOYIPCGFMQVKQZPINGIJYARGLPJZLPDFECKEWHANODAKUEAIFFZWDCMBAAKKNVRLSUXHLGMERDHHLZUVXP");
    tmp_tmp_msg_0_0.max_speed = 0.230447820639;
    tmp_tmp_msg_0_0.speed_units = 54U;
    tmp_tmp_msg_0_0.lat = 0.624388036744;
    tmp_tmp_msg_0_0.lon = 0.716940527651;
    tmp_tmp_msg_0_0.z = 0.893680829734;
    tmp_tmp_msg_0_0.z_units = 200U;
    tmp_tmp_msg_0_0.custom.assign("RUXJAIZURDKHPDHMFBNDASWOYMNEQYJLYUUOIMKMJGPIFVAINKJJHXLFFOOXSDJMLHZFZSWGHKFNWZLVVPXHQBIFERYXCBHERLIIJEPVGQRLZDSERWBHDUOFAVKWLWFCICKXDS");
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
    msg.setTimeStamp(0.415275277059);
    msg.setSource(47555U);
    msg.setSourceEntity(12U);
    msg.setDestination(2123U);
    msg.setDestinationEntity(140U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("GXKUPIJKOECLWAORVNHKDNFPWVKGDRCYTFOWOBEZEXSGRRYLDYAKGHQBSWULMLTZRCGVNTIMPIOCRMGNSXDNXNAVDSJWYQQMZBMQWZJDQHFPUBEVXTHPTEHCWKASCYMBDFESMBIYNSVCFORJBHJAZHUAZIGZALOFNPAWSFBELBJETPCVA");
    IMC::FollowTrajectory tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 36164U;
    tmp_tmp_msg_0_0.lat = 0.757218662667;
    tmp_tmp_msg_0_0.lon = 0.955258655789;
    tmp_tmp_msg_0_0.z = 0.351868697895;
    tmp_tmp_msg_0_0.z_units = 243U;
    tmp_tmp_msg_0_0.speed = 0.565557571511;
    tmp_tmp_msg_0_0.speed_units = 112U;
    tmp_tmp_msg_0_0.custom.assign("TNLXBBNEUOULBIGMSRCXWPOCRFSIRWZCVUJODHADLPQHHZKFZUYZEORYWQVLNLEUFPKNGUKBDWYGEMSYSLSIABAFADZLBHCGGPKDCIOQXCNGBCCJAYJDMPJUAASXXYTFDKRFKIHMUDKJEMVE");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::FineOil tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.103929152694;
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
    msg.setTimeStamp(0.306533724812);
    msg.setSource(49090U);
    msg.setSourceEntity(2U);
    msg.setDestination(46954U);
    msg.setDestinationEntity(246U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("FISILJUGUQLLSTORWZGONOEPHATWNUIMPMGKDMURLDHDGMLAIXCHDPOOZUTUFUHUZEVVCHCSSDSFHCEOQARKQWHBMJXXKGAFZDLETITEYZCLXAQZCYNKBNPYNTYFJZNRAYIKFCBVEKPRBHFFVUTDLWXLWPIYKPOOBQMAWEGMQSSSWVVDFYTQJKI");
    IMC::ScheduledGoto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.arrival_time = 0.65861808191;
    tmp_tmp_msg_0_0.lat = 0.759690804911;
    tmp_tmp_msg_0_0.lon = 0.700785483222;
    tmp_tmp_msg_0_0.z = 0.0133393292704;
    tmp_tmp_msg_0_0.z_units = 139U;
    tmp_tmp_msg_0_0.travel_z = 0.993872318281;
    tmp_tmp_msg_0_0.travel_z_units = 17U;
    tmp_tmp_msg_0_0.delayed = 19U;
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
    msg.setTimeStamp(0.271393292752);
    msg.setSource(32967U);
    msg.setSourceEntity(61U);
    msg.setDestination(18544U);
    msg.setDestinationEntity(157U);
    msg.timeout = 59882U;
    msg.lat = 0.337007583502;
    msg.lon = 0.687959663369;
    msg.z = 0.117722344758;
    msg.z_units = 201U;
    msg.speed = 0.133224521353;
    msg.speed_units = 201U;
    msg.bearing = 0.649652931254;
    msg.width = 0.866764870721;
    msg.direction = 143U;
    msg.custom.assign("EBUPWXBRMAGJECZLNRJHSDDFRKZWGKZTYILWUOTSOBYNDOQN");

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
    msg.setTimeStamp(0.546841536972);
    msg.setSource(10276U);
    msg.setSourceEntity(44U);
    msg.setDestination(13406U);
    msg.setDestinationEntity(24U);
    msg.timeout = 35937U;
    msg.lat = 0.500025903667;
    msg.lon = 0.922981628424;
    msg.z = 0.871301041331;
    msg.z_units = 77U;
    msg.speed = 0.0294291272253;
    msg.speed_units = 178U;
    msg.bearing = 0.175629574971;
    msg.width = 0.671560479453;
    msg.direction = 22U;
    msg.custom.assign("HANCHLQJOIRIVSGYFBSNPKCZDPDWVVQEUOUUBHMXKELPKBUVHVIKAJIFVXZPECBIOTMQKWPLDEAAISPUXZXWNZPYXJGCBTWJTWUUSCWYAJQMTNTEIR");

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
    msg.setTimeStamp(0.360885161599);
    msg.setSource(3248U);
    msg.setSourceEntity(238U);
    msg.setDestination(47821U);
    msg.setDestinationEntity(244U);
    msg.timeout = 32821U;
    msg.lat = 0.63889538674;
    msg.lon = 0.159263045228;
    msg.z = 0.642065549234;
    msg.z_units = 42U;
    msg.speed = 0.430322960525;
    msg.speed_units = 62U;
    msg.bearing = 0.423342671336;
    msg.width = 0.0971773543042;
    msg.direction = 86U;
    msg.custom.assign("WJJFIDBRPIZZBPEFMJGQVOVXVZPZCKLBRGQALKURDWUPOUFRYDNINVOVQNSTAIKVMNXUTHFCCENSXHTLQSLNDPKWFXIUAWMGGBSXGJLDHWZUQMEHHKONJIPOSHHEFMFSYAREYCVICOEGTWPSWGXCOZCADYZDMWTXKZPLJHIRKQSVNFGYUHGCXZLCXNEQQRHKJGMBYTQOTKELPPDFIUKSZWDBAEBFNUJMBLSYAMLBO");

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
    msg.setTimeStamp(0.846850999432);
    msg.setSource(46205U);
    msg.setSourceEntity(69U);
    msg.setDestination(39586U);
    msg.setDestinationEntity(1U);
    msg.op_mode = 249U;
    msg.error_count = 11U;
    msg.error_ents.assign("MTWLVJVNXYHINALMLCCKQKGTFOELLDXWEAMANWXEMGBGPDZJRGGXFXFODXNCWJOSQVRQITHDKBFPYYZKYQXHHPHYUOGBUMVVKYMGLSNEKDSRUQZBVVSOCHFLOHONUUNBIEZGQAZRIWWFYNZJTAUAVPDGFMUMBXETTPCFPWKBSRZHWRSUDHKDEJLRORYMZHFJVNBQOAIIECIITPDZCTQSAYURXLXCOPKDVUIWPQTAACJM");
    msg.maneuver_type = 49482U;
    msg.maneuver_stime = 0.0240092304644;
    msg.maneuver_eta = 64185U;
    msg.control_loops = 194949150U;
    msg.flags = 156U;
    msg.last_error.assign("QXNSIIYSFNGIXQODEQUPZLEJKZCIMBAGVVRZESFFVAFETMTNKPFTBPWNNLQOLYEVURDQJZAQAKBDPGJOYYLMLIKTWCYPCPBNP");
    msg.last_error_time = 0.358055938074;

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
    msg.setTimeStamp(0.48033489632);
    msg.setSource(48216U);
    msg.setSourceEntity(121U);
    msg.setDestination(16833U);
    msg.setDestinationEntity(138U);
    msg.op_mode = 116U;
    msg.error_count = 36U;
    msg.error_ents.assign("ECKJLSIRLIPYORGJSSXJXLPKRWJXGHELWBMIIJ");
    msg.maneuver_type = 22622U;
    msg.maneuver_stime = 0.239691932161;
    msg.maneuver_eta = 5086U;
    msg.control_loops = 2793817459U;
    msg.flags = 30U;
    msg.last_error.assign("TEDRSYDIHLYGWZJNCLTUFJDKLSULXKFBA");
    msg.last_error_time = 0.0458882811013;

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
    msg.setTimeStamp(0.452736350007);
    msg.setSource(36193U);
    msg.setSourceEntity(221U);
    msg.setDestination(60314U);
    msg.setDestinationEntity(73U);
    msg.op_mode = 224U;
    msg.error_count = 194U;
    msg.error_ents.assign("YANBDGQUQXABJESAZGKWLTWMNHMBMVUPUKRNHXPOXCTMQRUHORLJIXVZIHTUOWZMJFOKASCUKDZCBXAYHMONEUXSLZFTONLASNBFFHRXRKNLGQFLCEVJEVMNPJCWPFSQYNDXYJENGDYKLYCRHLQFOGZVMGDUJMC");
    msg.maneuver_type = 52032U;
    msg.maneuver_stime = 0.470329965042;
    msg.maneuver_eta = 35854U;
    msg.control_loops = 3262811308U;
    msg.flags = 99U;
    msg.last_error.assign("WSNFLASQIK");
    msg.last_error_time = 0.521272715135;

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
    msg.setTimeStamp(0.232598967166);
    msg.setSource(30809U);
    msg.setSourceEntity(221U);
    msg.setDestination(19369U);
    msg.setDestinationEntity(157U);
    msg.type = 6U;
    msg.request_id = 4456U;
    msg.command = 104U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.965045531979;
    tmp_msg_0.lon = 0.5421569988;
    tmp_msg_0.speed = 0.720592842851;
    tmp_msg_0.speed_units = 93U;
    tmp_msg_0.duration = 33739U;
    tmp_msg_0.sys_a = 17918U;
    tmp_msg_0.sys_b = 58236U;
    tmp_msg_0.move_threshold = 0.949929845823;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62152U;
    msg.info.assign("HFFJLGLSYRHRRVPMBWJRQIO");

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
    msg.setTimeStamp(0.632059542677);
    msg.setSource(46922U);
    msg.setSourceEntity(48U);
    msg.setDestination(15305U);
    msg.setDestinationEntity(235U);
    msg.type = 217U;
    msg.request_id = 64054U;
    msg.command = 213U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 45688U;
    tmp_msg_0.flags = 9U;
    tmp_msg_0.lat = 0.953248721074;
    tmp_msg_0.lon = 0.339799466198;
    tmp_msg_0.start_z = 0.852151954167;
    tmp_msg_0.start_z_units = 221U;
    tmp_msg_0.end_z = 0.847376126613;
    tmp_msg_0.end_z_units = 89U;
    tmp_msg_0.radius = 0.857751172901;
    tmp_msg_0.speed = 0.0518819582701;
    tmp_msg_0.speed_units = 142U;
    tmp_msg_0.custom.assign("UDKHLEAPYIPFLNUHLSAHZQFUKOUGGQFPJDXUGDUJNOBEKKMRXGQKOVOVEDWPKNQLOKJJZPTCIISFNNXQXAHSEWJTULEBOSMACFDFSORCMQIGTVVBNHVLATUIHMRDKJQYZXVSXOXPVWIMIRYKQW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 4798U;
    msg.info.assign("HFFMVTESTVTADGUWZLTQYCUJWITADAGCGMFUYVBOIUTTFAHUMQSPABRAJPLKBVQVQWQWMYOSZEIOGBERAYOJCZHZVDNJKLYHNJSZQMXBLUNDRXGRRSJUFVIBAWULPLGFXINMZLQAUMXNIC");

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
    msg.setTimeStamp(0.886248544785);
    msg.setSource(31362U);
    msg.setSourceEntity(159U);
    msg.setDestination(9175U);
    msg.setDestinationEntity(2U);
    msg.type = 12U;
    msg.request_id = 15889U;
    msg.command = 144U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.497198703112;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 64087U;
    tmp_msg_0.custom.assign("WPDPVXSBWPEMVKKFZCGKZYFGYMJBNURSPRAZUXXMGAVLJSDWQIKLYRIDYEXMAUSQVENGDBTTQAVGZWTWNZCUUKLUQAZOTVLXQCFIERSDZLVAXOHIQYQTBHNLIGOGRUMPJYL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 65467U;
    msg.info.assign("JGIWUQAWGSRVPSNYHOGCFQWSCINEQCMXNSPQMQOELRNYJKMDXPMKZARALMDRRRJYJMJHZETNOSCNLHBGJJWOIBBBQDBXZNADDNKXMEVGJGZRPKZTXYCBTHGBVGKXKULVWQUDULMVIPQD");

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
    msg.setTimeStamp(0.60672789322);
    msg.setSource(8611U);
    msg.setSourceEntity(6U);
    msg.setDestination(50434U);
    msg.setDestinationEntity(214U);
    msg.command = 3U;
    msg.entities.assign("RVMRLGYZLHRDWJOXPEXQCABAOUFCJKAHY");

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
    msg.setTimeStamp(0.253931799001);
    msg.setSource(15107U);
    msg.setSourceEntity(10U);
    msg.setDestination(16407U);
    msg.setDestinationEntity(63U);
    msg.command = 34U;
    msg.entities.assign("UPSDOCGCNODMKQSHAOURRPHSOTANLUMLZFVWESYEFDYHSLVBIVYJUTJXARUCVIMSTIQHBQRVNEYUTGEZNWKFPBBHXJMCIOYYNNKCCJXOKVGGMSMJUHSF");

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
    msg.setTimeStamp(0.547582643734);
    msg.setSource(37609U);
    msg.setSourceEntity(124U);
    msg.setDestination(31444U);
    msg.setDestinationEntity(201U);
    msg.command = 119U;
    msg.entities.assign("EMWWYRTUPFHQVOXWTVSCGNMNJXZXPKRDZLFKPIHPSJCOAFIZUKEBNGPHUOSPYRKSJMCSNIAFKQIZVOTTORMUCALWIWTRPZNFACFZFIEKLDELLVQMHVMHLBHQODSMAETYXBWZWNYHRCXIHOF");

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
    msg.setTimeStamp(0.473179661524);
    msg.setSource(5296U);
    msg.setSourceEntity(253U);
    msg.setDestination(23699U);
    msg.setDestinationEntity(206U);
    msg.mcount = 104U;
    msg.mnames.assign("IKMHMLNPICXVGNMYOQXPABNKHNDBIQDUFKMUPGGBTPXSCGISFFGYCOIMXSDPRLLBJWVJTAZZJOGEAJFBTWVNOUERAUFYMFHIDDUGZNMQPEHBDYFPNLWBXXBEKRVTDRNBFOQSOQGLMTXKHJCXAPQYKJOZREZXIEQSTYBDCJWZCAWVHKHTCVKVCUONEIALWDJCSCHVRGNIJAWQUVGZQTLPFPRLRSYOEYLEHY");
    msg.ecount = 246U;
    msg.enames.assign("LKRTSYOCQVFKBMVIBRKVTGTTWEFEIDJROYNQLAESWPFNTORMYPCNDJMGJBGPIJSRRGMBKYUQEZDBSJUHOIAESUPCJZFENKKAQDZKCXLLKLTPLXVQVXSCRHWWHUMIQPKUNVAEIHBJMGAVYZOXNCE");
    msg.ccount = 191U;
    msg.cnames.assign("QHCVKBFLPUQNLAMCQIGFEEYDAQUWTBLEVMWZSKCOGMIXURSHWBYFFGYWRNEPGRJZKRIOXIRFNOAWOVBPKOBKHLGPGVCZWEHJSBLVRXFBFNLQHETCEXZJFZYQMPQZPOUVFJMJJPSTWGIXDATLVMDOSJYNDXTCQYRAIHOHMSTTWXVMQ");
    msg.last_error.assign("OQYLNTULRTKYGTHNDCEVTSEUP");
    msg.last_error_time = 0.0257513854112;

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
    msg.setTimeStamp(0.27353566691);
    msg.setSource(25364U);
    msg.setSourceEntity(220U);
    msg.setDestination(59647U);
    msg.setDestinationEntity(36U);
    msg.mcount = 202U;
    msg.mnames.assign("LXJOZVBRYTWCDUOXDSYZNUJNSIOCSCOSYGWFLXXJQETCEBKVHRFCESEIUGQHERQGWRAIPVDYCVQKOAFUPMTZHIAZYKFXLYQGPFLLGVBIXONKVOZSDKTXYPALFMKRWULDGQFUWHMMSQVAKYNAAMCNRLRJHNBJIZMK");
    msg.ecount = 129U;
    msg.enames.assign("VKEXOOSNMSTKFOLFNXOXHHARKMGMGBFUAHXHAMCJLDERBGXPJJYSNVRBDJPXGQOIMOJLMRNCDOHYBWLIONKUYUUVWDNHYNFIFZLHRBIS");
    msg.ccount = 151U;
    msg.cnames.assign("ZSZDBQGPZQKWEIJUYSJLENZYZNTTTLYOAPSGFQWKEFETYRKTDUHBIJJMLFCOBCOPNZGYOMOKEFPXLXDODJQRAQVSSCNMDUGVMCRTCMFEDHVTMXZIVYJNKYWGSPUXGVRPUFARLALVRBLKXQRPGZCJLBWBHNXMWATCIZAGUKPH");
    msg.last_error.assign("BORALZWOQKCEPCHMYJDSPKEXYXNZQPKSDHCTKNHDSEUCPYZGTRHVYTNGZDFYJ");
    msg.last_error_time = 0.324058899765;

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
    msg.setTimeStamp(0.376137177305);
    msg.setSource(38212U);
    msg.setSourceEntity(152U);
    msg.setDestination(6111U);
    msg.setDestinationEntity(51U);
    msg.mcount = 7U;
    msg.mnames.assign("DZZUTQRSBJ");
    msg.ecount = 229U;
    msg.enames.assign("WQBBXQYHZBTYHILGNGTGYPTIXHMQRGBPUVNQGSAWCWWMZASYDBEOMDMETRCFALZDECOERUDUAXARHCDRPOJNKVDKBRCIKSAYNFBWSLOSGILETUSCFPNYTYQJJJIJWOCDUFTXXUZRHTFZNQVJXAXLDFOKVRKLAPSLKBHWOZFYGGQAWVMEJUBUOCNPSEMPKNUCV");
    msg.ccount = 143U;
    msg.cnames.assign("VMTFIJEKKMIUZPGVMWQBCNZUGTPSNDQRESRGOHHVACPFDXFNXXASPBHZZRVZYDXYARTFSZGRDAWNMZSSKJIIEJWFPOQOUJQKSECQIXNODVDBUXCTLYGCKBWFECEBDGAKUNNXNJWDWYBIOSRKHDWLZTMGOUCDPBPWXPQZRRGLY");
    msg.last_error.assign("CIDCCWZLVIGTCZBCHJIUPZQVZJFRFOWGOXKXXWGBXPWBORIKNBGRYBWMMDN");
    msg.last_error_time = 0.135174883642;

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
    msg.setTimeStamp(0.544599521428);
    msg.setSource(62096U);
    msg.setSourceEntity(225U);
    msg.setDestination(5946U);
    msg.setDestinationEntity(185U);
    msg.mask = 125U;
    msg.max_depth = 0.195231895125;
    msg.min_altitude = 0.972529617993;
    msg.max_altitude = 0.229475693335;
    msg.min_speed = 0.606248838663;
    msg.max_speed = 0.271679614075;
    msg.max_vrate = 0.459350014173;
    msg.lat = 0.490030330127;
    msg.lon = 0.000114710311931;
    msg.orientation = 0.81903951289;
    msg.width = 0.39647246644;
    msg.length = 0.0353026046839;

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
    msg.setTimeStamp(0.891316445088);
    msg.setSource(21406U);
    msg.setSourceEntity(235U);
    msg.setDestination(39502U);
    msg.setDestinationEntity(48U);
    msg.mask = 203U;
    msg.max_depth = 0.174521847238;
    msg.min_altitude = 0.581993576078;
    msg.max_altitude = 0.135018773182;
    msg.min_speed = 0.651661605362;
    msg.max_speed = 0.537780643956;
    msg.max_vrate = 0.120412755109;
    msg.lat = 0.625931638592;
    msg.lon = 0.90278266559;
    msg.orientation = 0.889908365825;
    msg.width = 0.0645146930723;
    msg.length = 0.788112053355;

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
    msg.setTimeStamp(0.00886878053283);
    msg.setSource(12128U);
    msg.setSourceEntity(144U);
    msg.setDestination(34553U);
    msg.setDestinationEntity(184U);
    msg.mask = 172U;
    msg.max_depth = 0.929829329454;
    msg.min_altitude = 0.408301827918;
    msg.max_altitude = 0.266736524748;
    msg.min_speed = 0.502645848581;
    msg.max_speed = 0.555363262538;
    msg.max_vrate = 0.200693450587;
    msg.lat = 0.297334689306;
    msg.lon = 0.633475003298;
    msg.orientation = 0.361412884442;
    msg.width = 0.165721114367;
    msg.length = 0.646142256048;

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
    msg.setTimeStamp(0.693755447541);
    msg.setSource(58061U);
    msg.setSourceEntity(169U);
    msg.setDestination(11053U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.144014305281);
    msg.setSource(28951U);
    msg.setSourceEntity(233U);
    msg.setDestination(29647U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.806883377954);
    msg.setSource(33241U);
    msg.setSourceEntity(190U);
    msg.setDestination(19643U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.793731971567);
    msg.setSource(64586U);
    msg.setSourceEntity(194U);
    msg.setDestination(35099U);
    msg.setDestinationEntity(165U);
    msg.duration = 37498U;

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
    msg.setTimeStamp(0.296606767353);
    msg.setSource(35867U);
    msg.setSourceEntity(116U);
    msg.setDestination(41522U);
    msg.setDestinationEntity(241U);
    msg.duration = 11044U;

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
    msg.setTimeStamp(0.497032034523);
    msg.setSource(2065U);
    msg.setSourceEntity(244U);
    msg.setDestination(23579U);
    msg.setDestinationEntity(5U);
    msg.duration = 9911U;

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
    msg.setTimeStamp(0.658984451216);
    msg.setSource(43529U);
    msg.setSourceEntity(2U);
    msg.setDestination(27643U);
    msg.setDestinationEntity(136U);
    msg.enable = 83U;
    msg.mask = 3355273762U;
    msg.scope_ref = 1976063966U;

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
    msg.setTimeStamp(0.0747457145062);
    msg.setSource(3706U);
    msg.setSourceEntity(128U);
    msg.setDestination(2110U);
    msg.setDestinationEntity(237U);
    msg.enable = 109U;
    msg.mask = 783974890U;
    msg.scope_ref = 1874383927U;

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
    msg.setTimeStamp(0.22707883236);
    msg.setSource(52248U);
    msg.setSourceEntity(213U);
    msg.setDestination(49497U);
    msg.setDestinationEntity(245U);
    msg.enable = 230U;
    msg.mask = 750916388U;
    msg.scope_ref = 3695371580U;

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
    msg.setTimeStamp(0.930289961667);
    msg.setSource(51044U);
    msg.setSourceEntity(222U);
    msg.setDestination(36474U);
    msg.setDestinationEntity(209U);
    msg.medium = 167U;

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
    msg.setTimeStamp(0.0954210056892);
    msg.setSource(8007U);
    msg.setSourceEntity(36U);
    msg.setDestination(57181U);
    msg.setDestinationEntity(10U);
    msg.medium = 26U;

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
    msg.setTimeStamp(0.961634645116);
    msg.setSource(44570U);
    msg.setSourceEntity(133U);
    msg.setDestination(47903U);
    msg.setDestinationEntity(87U);
    msg.medium = 94U;

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
    msg.setTimeStamp(0.698398189534);
    msg.setSource(34114U);
    msg.setSourceEntity(0U);
    msg.setDestination(41254U);
    msg.setDestinationEntity(91U);
    msg.value = 0.281281099464;
    msg.type = 60U;

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
    msg.setTimeStamp(0.406930888166);
    msg.setSource(6794U);
    msg.setSourceEntity(220U);
    msg.setDestination(38844U);
    msg.setDestinationEntity(22U);
    msg.value = 0.808577050999;
    msg.type = 187U;

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
    msg.setTimeStamp(0.974400398896);
    msg.setSource(44016U);
    msg.setSourceEntity(106U);
    msg.setDestination(59772U);
    msg.setDestinationEntity(101U);
    msg.value = 0.391254807084;
    msg.type = 227U;

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
    msg.setTimeStamp(0.973635167041);
    msg.setSource(26761U);
    msg.setSourceEntity(74U);
    msg.setDestination(46113U);
    msg.setDestinationEntity(44U);
    msg.possimerr = 0.267006825113;
    msg.converg = 0.213558508371;
    msg.turbulence = 0.674820204008;
    msg.possimmon = 11U;
    msg.commmon = 28U;
    msg.convergmon = 2U;

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
    msg.setTimeStamp(0.575308245786);
    msg.setSource(43594U);
    msg.setSourceEntity(45U);
    msg.setDestination(24621U);
    msg.setDestinationEntity(103U);
    msg.possimerr = 0.328506827279;
    msg.converg = 0.645791986945;
    msg.turbulence = 0.325796138977;
    msg.possimmon = 70U;
    msg.commmon = 5U;
    msg.convergmon = 135U;

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
    msg.setTimeStamp(0.237381513568);
    msg.setSource(5995U);
    msg.setSourceEntity(97U);
    msg.setDestination(47652U);
    msg.setDestinationEntity(154U);
    msg.possimerr = 0.38986446482;
    msg.converg = 0.306180792351;
    msg.turbulence = 0.680641945373;
    msg.possimmon = 81U;
    msg.commmon = 221U;
    msg.convergmon = 49U;

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
    msg.setTimeStamp(0.525126242056);
    msg.setSource(26350U);
    msg.setSourceEntity(203U);
    msg.setDestination(49925U);
    msg.setDestinationEntity(126U);
    msg.autonomy = 134U;
    msg.mode.assign("QFFETIAVLCWOMPRZFJZBLNIAIDYTYGOCLRLYUMIFPHKAXEJHIJYQYMVSWJBMUCGUKHHGBHWWVNG");

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
    msg.setTimeStamp(0.74395027347);
    msg.setSource(43132U);
    msg.setSourceEntity(225U);
    msg.setDestination(10585U);
    msg.setDestinationEntity(196U);
    msg.autonomy = 106U;
    msg.mode.assign("NBDPYJDJMULJZZIZEODMIKGLZOKXVUANGJPQSUCZLVWLRFHEDFNXBPWUNUWIXOSNSETUBVCMLRVMWYNKSQ");

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
    msg.setTimeStamp(0.824576509398);
    msg.setSource(53536U);
    msg.setSourceEntity(199U);
    msg.setDestination(45066U);
    msg.setDestinationEntity(172U);
    msg.autonomy = 68U;
    msg.mode.assign("EFTUZBFPDFYHQXCOMMKOWJGMPTFLKQMD");

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
    msg.setTimeStamp(0.0146236434604);
    msg.setSource(52745U);
    msg.setSourceEntity(157U);
    msg.setDestination(1346U);
    msg.setDestinationEntity(15U);
    msg.type = 9U;
    msg.op = 129U;
    msg.possimerr = 0.853538534781;
    msg.converg = 0.318833205977;
    msg.turbulence = 0.581642390799;
    msg.possimmon = 168U;
    msg.commmon = 102U;
    msg.convergmon = 11U;

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
    msg.setTimeStamp(0.0739677949351);
    msg.setSource(59477U);
    msg.setSourceEntity(25U);
    msg.setDestination(58252U);
    msg.setDestinationEntity(142U);
    msg.type = 73U;
    msg.op = 207U;
    msg.possimerr = 0.179968728027;
    msg.converg = 0.853802734855;
    msg.turbulence = 0.674104573837;
    msg.possimmon = 194U;
    msg.commmon = 205U;
    msg.convergmon = 230U;

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
    msg.setTimeStamp(0.979820173631);
    msg.setSource(25239U);
    msg.setSourceEntity(22U);
    msg.setDestination(64429U);
    msg.setDestinationEntity(131U);
    msg.type = 218U;
    msg.op = 26U;
    msg.possimerr = 0.592733874522;
    msg.converg = 0.0299122187809;
    msg.turbulence = 0.228832582266;
    msg.possimmon = 50U;
    msg.commmon = 81U;
    msg.convergmon = 240U;

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
    msg.setTimeStamp(0.56228096908);
    msg.setSource(49139U);
    msg.setSourceEntity(178U);
    msg.setDestination(12530U);
    msg.setDestinationEntity(247U);
    msg.op = 95U;
    msg.comm_interface = 108U;
    msg.period = 25420U;
    msg.sys_dst.assign("AXWWECMLKMMVGTBQDIIIOIHVNOBPJZJLJXACRNXCRQEWZYJEMFNOGIEZUYIFPMZEVFPHNQGF");

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
    msg.setTimeStamp(0.276824007806);
    msg.setSource(12906U);
    msg.setSourceEntity(225U);
    msg.setDestination(21524U);
    msg.setDestinationEntity(82U);
    msg.op = 131U;
    msg.comm_interface = 239U;
    msg.period = 13544U;
    msg.sys_dst.assign("PGLOQKIBWNCWWUBSOIWVHCHSFSPRGBMQJAVQEXFMNOHYTIRYXCJHQVIVADJZKHHCYCKAZRKGVZNDSXIUACLNSELIAKHIREPOCEXWDOSBTOYGFYUNFZRKKCPUCGUXRXTYQFLTZETZTTUDOSFEDAWRTFXPGIEMRTAANQUZUVLWMPRPPPXKLRKKVNMBIJWGAHOEUSLFVJDQWBVCZLMNJQDOJQEHBLBMDMSLH");

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
    msg.setTimeStamp(0.661760104218);
    msg.setSource(63579U);
    msg.setSourceEntity(49U);
    msg.setDestination(57207U);
    msg.setDestinationEntity(71U);
    msg.op = 193U;
    msg.comm_interface = 91U;
    msg.period = 12184U;
    msg.sys_dst.assign("TMHQBLRIIW");

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
    msg.setTimeStamp(0.743153265397);
    msg.setSource(2476U);
    msg.setSourceEntity(120U);
    msg.setDestination(26747U);
    msg.setDestinationEntity(161U);
    msg.stime = 3818056895U;
    msg.latitude = 0.688969307098;
    msg.longitude = 0.396991278369;
    msg.altitude = 51268U;
    msg.depth = 14658U;
    msg.heading = 17409U;
    msg.speed = 27637;
    msg.fuel = 99;
    msg.exec_state = 20;
    msg.plan_checksum = 54434U;

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
    msg.setTimeStamp(0.510446665009);
    msg.setSource(13373U);
    msg.setSourceEntity(137U);
    msg.setDestination(42176U);
    msg.setDestinationEntity(86U);
    msg.stime = 4187324596U;
    msg.latitude = 0.358749453382;
    msg.longitude = 0.59773287247;
    msg.altitude = 5918U;
    msg.depth = 34816U;
    msg.heading = 28763U;
    msg.speed = -11196;
    msg.fuel = -49;
    msg.exec_state = -80;
    msg.plan_checksum = 39862U;

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
    msg.setTimeStamp(0.342671008355);
    msg.setSource(56103U);
    msg.setSourceEntity(60U);
    msg.setDestination(22220U);
    msg.setDestinationEntity(228U);
    msg.stime = 2519569858U;
    msg.latitude = 0.42960851938;
    msg.longitude = 0.677440825963;
    msg.altitude = 12032U;
    msg.depth = 36534U;
    msg.heading = 19671U;
    msg.speed = -6087;
    msg.fuel = 53;
    msg.exec_state = 70;
    msg.plan_checksum = 17595U;

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
    msg.setTimeStamp(0.684736847923);
    msg.setSource(14998U);
    msg.setSourceEntity(239U);
    msg.setDestination(26359U);
    msg.setDestinationEntity(159U);
    msg.req_id = 36200U;
    msg.comm_mean = 15U;
    msg.destination.assign("MYAOWWRSEODLCWAFVPQHVGOGATYMRVNHEEICHZJSBYPAINVJOUCWQVATYXSCJCASIEEFLOODKILMGSPRMIFQUWFQOFANSSDUJOYQGFDOJHQKTYHR");
    msg.deadline = 0.270673167833;
    msg.range = 0.179560522198;
    msg.data_mode = 108U;
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 63U;
    tmp_msg_0.period = 1156282674U;
    tmp_msg_0.duty_cycle = 1106225512U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ALJKBWGNIBKXLJRFJQPUCAGONHXSAICNDUAFGPNKEHLZROEQVMUCVYFFTTASIFZHNWWVEJOQVXZTRRZSMYWGPBOBRXYTKZURBGWPMSYKNVETAILIQBEZHKQEFSWSGKOCLJALOWWODMPKWTDMRMIVYXBRQBNIQRCDNDVXCDMUQZJUKKJPHZVOSJEFECQANNHRXDJTGYLALCQDUSYFMEBCGSYPGUUYJXVHTHTLDIAHCPUPZPGYHLI");
    const char tmp_msg_1[] = {-119, 16, 90, 88, 61, 84, 54, 101, 46, -2, -16, 42, -72, -74, -120, 60, 109, -122, -104, 10, -12, 109, 123, -5, -126, 55, 63, 121, 13, 100, -77, 1, 124, -103, -59, 106, -87, 3, 42, 119, -109, 56, 28, -113, 41, -100, -4, -94, 125, 39, -120, -64, -125, -109, -74, 48, -111, 125, 126, -3, -78, 109, -52, -21, 92, 58, 69, 92, -83, 106, -27, -39, 53, 95, -26, -100, 67, -38, 33, 81, -62, 39, -67, -101, 84, 78, -3, 24, -103, -102, 117, 55, -84, -66, -95, 72, 103, 0, -76, -65, 80, 9, 112, 80, -50, 45, 103};
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
    msg.setTimeStamp(0.768653110965);
    msg.setSource(33561U);
    msg.setSourceEntity(24U);
    msg.setDestination(11099U);
    msg.setDestinationEntity(85U);
    msg.req_id = 33342U;
    msg.comm_mean = 21U;
    msg.destination.assign("CFZZBQOGALAICTNFHYXNAOWVPIOZTKMHAMOSPFKGNUOKHDHRQBUGWOCTTXMSZVNJEAPYBJRLMDPWYXOJXYDZRHHQEAUELKMDSXXKCRVUHJSC");
    msg.deadline = 0.680819709001;
    msg.range = 0.848746299011;
    msg.data_mode = 1U;
    IMC::Airflow tmp_msg_0;
    tmp_msg_0.va = 0.616413832481;
    tmp_msg_0.aoa = 0.563450579593;
    tmp_msg_0.ssa = 0.83145718985;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("RBHSBPAAJJNEFSEQMEAFEMNODWIYGTCYHRCXDICFPHFAUNNKRNZBIMVYGLDZWCYQZINB");
    const char tmp_msg_1[] = {-50, -12, 109, 22, 88, 89, -85, -1, -77, 78, -13, -50, 71, -89, -123, 114, 59, 80, -36, -98, 72, 52, -90, -91, 105, -99, 29, 16, 12, 7, 53, 43, 73, -43, 98, -107, -109, 74, -119, 60, 124, -1, 84, 11, -95, 35, -112, 83, 65, -20, -69, 17, 6, -76, -86, -90, 5, 54, 50, 99, -88, -68, 23, -85, 111, -103, -111, -74, 114, -68, -67, 39, 53, 49, 72, 83, -49, -97, -106, 110, -103, -127, 97, -38, -127, -71, -105, 94, -60, 59, 51, 56, -128, -112, 45, 120, -69, -57, 117, -26, 104};
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
    msg.setTimeStamp(0.520894220168);
    msg.setSource(57413U);
    msg.setSourceEntity(114U);
    msg.setDestination(45492U);
    msg.setDestinationEntity(217U);
    msg.req_id = 796U;
    msg.comm_mean = 29U;
    msg.destination.assign("QIEIOMKGCPYZWVCZERCSAIZKDKMOHPIHRREOZVDSPZQNINHKUFOXWJTCYTAYLGZBTPIKRKQGYVPOBFXAOEXMENIXJSXVJVLQSPWBEVBHJTIBGTPELKDLBAIYTSFUHQIUZMGAFAHUJLUOGCRWKMNQVBQTCUAFEFXSHTPYSNNQBLBRMQWFZXUYRUNGMDPPWXGKVDAMBZHFSTWWFHOCZDRCNHGYLDDYALJROEEY");
    msg.deadline = 0.0889575918427;
    msg.range = 0.752793516825;
    msg.data_mode = 212U;
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.853252988096;
    tmp_msg_0.phi = 0.699584987385;
    tmp_msg_0.theta = 0.404699897504;
    tmp_msg_0.psi = 0.477805519925;
    tmp_msg_0.psi_magnetic = 0.298917547382;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BDWKDPGNHDBYFKTIEQELFXZHOGDFNMBTUWA");
    const char tmp_msg_1[] = {17, 105, 25, 67, 44, -81, -8, 60, 122, 105, 70, 19, 106, 93, -56, 34, -14, 15, 2, 92, -52, 108, -105, -30, -79, -30, 4, 91, -118, 54, 107, -120, -49, 45, -88, -4, -42, 22, 125, -83, 44, -51, 107, -13, 18, -82, -65, 64, 23, 5, 62, -127, -3, 20, 67, 0, -96, -127, -61, -98, -67, -26, 61, -102, 63, -51, -24, -13, 57, -57, -80, -52, -79, -125, -45, 51, 115, -45, 36, 104};
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
    msg.setTimeStamp(0.892089060037);
    msg.setSource(6747U);
    msg.setSourceEntity(122U);
    msg.setDestination(10211U);
    msg.setDestinationEntity(184U);
    msg.req_id = 31276U;
    msg.status = 180U;
    msg.range = 0.983132705176;
    msg.info.assign("GTNEFPOFDVZGJYOPHHZNCQCUHCICTRUPFWLNTPZYLPOQXKPDAINBMNFMTMHHKBXDWQSWFLWHXJCNTGILCGT");

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
    msg.setTimeStamp(0.601070554139);
    msg.setSource(29099U);
    msg.setSourceEntity(207U);
    msg.setDestination(33128U);
    msg.setDestinationEntity(210U);
    msg.req_id = 14038U;
    msg.status = 135U;
    msg.range = 0.152444273196;
    msg.info.assign("MJWAYLYOTOXZZFWWTMUTPERQUNBFHQKPRLNMWGIILIUGAEGNVJWNXBEAUBBMIIVQWJJQCJQWDXOQOBXSYQJDEYGYSBALSXIDYHIFFXJBZISRAZDMXZLWQEHZVZOOTGPDYOHGURBLOMASLJLVTEHZINUCRTSURRJNKEDTVAGDWCFOYSBJKGT");

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
    msg.setTimeStamp(0.272882805405);
    msg.setSource(38643U);
    msg.setSourceEntity(206U);
    msg.setDestination(24024U);
    msg.setDestinationEntity(41U);
    msg.req_id = 43973U;
    msg.status = 88U;
    msg.range = 0.456524066731;
    msg.info.assign("MSRZFTNMAQBVJECDOQGUBTITRGQWKMWUUMRGNHCXABZLMIAYVKZJXVFGUVDWOEPWGGSTUZCJNBMGEEVBEUTTFGZCRDZYRTWSIOHEFHPRBNDTUFYNONIPTUJOAZLDOUQIXGFKZHCDESWCMKJKLYIYAQXBSEIPXNHYRPPXLKYGVTFIJIEPLOQJJSLHKHOHSAPJYHSFONIMANOVCKFBZSRLBDVLHUELNAAZFBWQR");

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
    msg.setTimeStamp(0.958907432274);
    msg.setSource(46064U);
    msg.setSourceEntity(144U);
    msg.setDestination(44238U);
    msg.setDestinationEntity(176U);
    msg.req_id = 24682U;
    msg.destination.assign("ZXBKEVGPZRFTQSAPIINGPHDJDGKJCGZDXFMECGNUQCAPOTWDPWBVKZAUKVSMIJVFJEHDSOZBMJAHDUQMYTQIUWPDTIYKUPCMKXHKGRBNNLBFXRHFGVUZSNQQTCJZLRZTYSHKNZRCSOFYWJEKRFKSIOFSWBCOHCPEVLIUATIMVUMADLYOXEGYWLANLQIJPZXGYXTREMGYUCQO");
    msg.timeout = 0.116820762797;
    msg.sms_text.assign("LDAMLLCMVJZKPXALPHVOETRRAEYWQGSVLFZFNRHZLYUTSHXOFQTTNTCTAPTJQFDLXIKRBFIDAWKLSBUBNPZ");

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
    msg.setTimeStamp(0.76592453764);
    msg.setSource(40170U);
    msg.setSourceEntity(147U);
    msg.setDestination(3142U);
    msg.setDestinationEntity(231U);
    msg.req_id = 1252U;
    msg.destination.assign("ZMNOFMNBKSQLLMRWKKFAJOVCISRUBFEHWHGALMCDTKTYTECXLUABLYJQRLBAQXZYKXSPKINJUNTNXSYUQSAIWPVVBLBAZEPYBTNKUJOMTMHWGRFQZLQNVEVXHEYFQWCUPOHIMGTCQUIHVXSFFCBGJIIUNIDKDCOWYPVPOPUJHETVDERRQIYLJJQWDXBOGKNHOAFAZOMDGPCMJZPWAVRPHZGJSIRGRXVLETYMDDBODXZED");
    msg.timeout = 0.247437796;
    msg.sms_text.assign("HAVQYGQHWADNAKICXKQWGHAACLQSUYBHOOVILCQBGRBTLYNHYXQZEYHDCJIPCCFKMIVIUIXOZKCWFMLLDTZSSOJIBFGEMLKWUVGTKXLPWMSTJDUTXZFORSDPMYPRDWSCWUQMJAHNKTBEN");

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
    msg.setTimeStamp(0.137464130421);
    msg.setSource(57978U);
    msg.setSourceEntity(103U);
    msg.setDestination(45507U);
    msg.setDestinationEntity(234U);
    msg.req_id = 13347U;
    msg.destination.assign("MTZMRBHOWJMPWZ");
    msg.timeout = 0.937957214323;
    msg.sms_text.assign("UXJAPCQOPFQLOGUGFEDEUWSRQRK");

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
    msg.setTimeStamp(0.558409089035);
    msg.setSource(41964U);
    msg.setSourceEntity(66U);
    msg.setDestination(55424U);
    msg.setDestinationEntity(246U);
    msg.req_id = 1349U;
    msg.status = 217U;
    msg.info.assign("OLLMOJEPXEBOBHDLLZPMSYGYXKCUNVTGCPLUCMZODYIBNFGQRNZGGKFLEQRWKYZOBPDAJHHOM");

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
    msg.setTimeStamp(0.503212988811);
    msg.setSource(33289U);
    msg.setSourceEntity(162U);
    msg.setDestination(28358U);
    msg.setDestinationEntity(21U);
    msg.req_id = 59514U;
    msg.status = 134U;
    msg.info.assign("ZOGOZYXLBNZAISCJVULFELJOMAGTZRQSXOKCJXHHBEQYIJHIXCEHETAFLRIUVOOGFPDNRQPMXAFWJYODPXZRVZSNPJMQGQRAPKURGYZUSVHGGMXLTITTMWZNMASBVNYKODCRGMKRDXRXPVSDCUZDWPCNIOUEHKAXQSELAQWHAUHTW");

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
    msg.setTimeStamp(0.498230434388);
    msg.setSource(41511U);
    msg.setSourceEntity(148U);
    msg.setDestination(43638U);
    msg.setDestinationEntity(72U);
    msg.req_id = 43112U;
    msg.status = 58U;
    msg.info.assign("XAOKNQWDBDGIPYUEEVYHWHMBGCJKYEENPQQOKNDWKAVRGWXMCQVDRHOFZSDKIPAEJIKAWSTVNGEGUFTFGQKMPRUBRTNYJQKZNTLIJZLJCDUPRZWNPVRLBGOSMVBAAMFEVRWXOCSHIOAUHDJUPOXARLMEISVLRHMESBTF");

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
    msg.setTimeStamp(0.122553598458);
    msg.setSource(46957U);
    msg.setSourceEntity(75U);
    msg.setDestination(38631U);
    msg.setDestinationEntity(36U);
    msg.state = 130U;

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
    msg.setTimeStamp(0.130454527187);
    msg.setSource(36056U);
    msg.setSourceEntity(188U);
    msg.setDestination(42228U);
    msg.setDestinationEntity(74U);
    msg.state = 147U;

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
    msg.setTimeStamp(0.528343981096);
    msg.setSource(52176U);
    msg.setSourceEntity(11U);
    msg.setDestination(5056U);
    msg.setDestinationEntity(117U);
    msg.state = 219U;

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
    msg.setTimeStamp(0.0241661073512);
    msg.setSource(44138U);
    msg.setSourceEntity(225U);
    msg.setDestination(5393U);
    msg.setDestinationEntity(114U);
    msg.state = 118U;

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
    msg.setTimeStamp(0.973104264017);
    msg.setSource(65418U);
    msg.setSourceEntity(104U);
    msg.setDestination(40019U);
    msg.setDestinationEntity(88U);
    msg.state = 165U;

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
    msg.setTimeStamp(0.330446381067);
    msg.setSource(64790U);
    msg.setSourceEntity(82U);
    msg.setDestination(26521U);
    msg.setDestinationEntity(51U);
    msg.state = 66U;

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
    msg.setTimeStamp(0.459693222135);
    msg.setSource(19975U);
    msg.setSourceEntity(231U);
    msg.setDestination(56786U);
    msg.setDestinationEntity(179U);
    msg.req_id = 29620U;
    msg.destination.assign("TSATMHRXKYXKCTPBQSTBIAKPBGSPAQFPILEFNLNGQMPOTUYNWHDGVWYLYJDHOUYSRMZZXNCFBGGUNIDDETACXCJKJOJDGDKEARFECMDLCWNSWVUCCUOPWGQSZBLEAIJEGXTHIQXRTVKMYIWRMVKUMVW");
    msg.timeout = 0.151801013507;
    IMC::ScienceSensors tmp_msg_0;
    tmp_msg_0.adcp = 40;
    tmp_msg_0.adcp_dur = 4147278925U;
    tmp_msg_0.adcp_fr = 375638563U;
    tmp_msg_0.ctd = -5;
    tmp_msg_0.ctd_dur = 3707009654U;
    tmp_msg_0.ctd_fr = 1079415454U;
    tmp_msg_0.opt = 4;
    tmp_msg_0.opt_dur = 1361506174U;
    tmp_msg_0.opt_fr = 3800752263U;
    tmp_msg_0.tbl = -56;
    tmp_msg_0.tbl_dur = 925241903U;
    tmp_msg_0.tbl_fr = 1695224153U;
    tmp_msg_0.eco = -78;
    tmp_msg_0.eco_dur = 183676826U;
    tmp_msg_0.eco_fr = 330418104U;
    tmp_msg_0.par = 99;
    tmp_msg_0.par_dur = 1118189659U;
    tmp_msg_0.par_fr = 2987857775U;
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
    msg.setTimeStamp(0.459537829264);
    msg.setSource(29256U);
    msg.setSourceEntity(152U);
    msg.setDestination(45907U);
    msg.setDestinationEntity(130U);
    msg.req_id = 20423U;
    msg.destination.assign("ELPNEJOVYULPUHPRHRAHTNPHJKRUJFUIABUXGMHKUNJLSYQOORMZNZYSLYDWRVMCSEYCWIZQSYQJGTVOIZFXSYSTYZGVDMXSVBOFVEUNWKDDZFBNAKBRCWFGCDKQPRHQVJUETQTABWQDQABTMXPJVKMQYIJCWGKMRNPPGBMLGNCTASDHDMCZN");
    msg.timeout = 0.521944678412;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 62317U;
    tmp_msg_0.control_ent = 193U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 232U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.258431100086;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 173U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.296933220055;
    tmp_tmp_tmp_msg_0_0_1.z_units = 97U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.556797600892;
    tmp_tmp_msg_0_0.lon = 0.626075524038;
    tmp_tmp_msg_0_0.radius = 0.911698605368;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 9U;
    tmp_msg_0.proximity = 57U;
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
    msg.setTimeStamp(0.431163618959);
    msg.setSource(39066U);
    msg.setSourceEntity(85U);
    msg.setDestination(6732U);
    msg.setDestinationEntity(46U);
    msg.req_id = 2168U;
    msg.destination.assign("NIQCGFRVWHRUDIXYWYHANBAUZFVWKDQTKRSCNWUHRPFMGFPWZOBGKREAPJMOAKIQEEVLWJYSIDMHCKZAXZERUMCYZAILELWYVPHIFFCDNETIBBJBBXZDOQSWXMJSSYDXYFZGHEBBQTWFRRFMJDMCLLL");
    msg.timeout = 0.889566830545;
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HNGEPVCYRLORHKCNIEZQVWPGALTCJMWIWLTWGMFLPNJZKGPOEFPXSWZLYVSDAFQLOXKTDIMDYXHWEVQGAUTYPWCRTUQAIQNKXKZGOUNDJRHAJPXERBSJQIBBFBDIGCYWBZYOPMTNJZMVBMUFEETCSOOEYMSVEUKXIUACXICUQLLCYPYXDVLZGFODUJSF");
    tmp_msg_0.feature_type = 218U;
    tmp_msg_0.rgb_red = 18U;
    tmp_msg_0.rgb_green = 139U;
    tmp_msg_0.rgb_blue = 92U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.272438900548;
    tmp_tmp_msg_0_0.lon = 0.78099073349;
    tmp_tmp_msg_0_0.alt = 0.121486626152;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.924916878846);
    msg.setSource(29847U);
    msg.setSourceEntity(19U);
    msg.setDestination(52966U);
    msg.setDestinationEntity(16U);
    msg.req_id = 15574U;
    msg.status = 222U;
    msg.info.assign("GWHSRAMEOSXPNCFCBNQZDWDWFRIZDRXALOFVOJGBCIAOZWOKRGEPJBVVIHNHUKSQKGNVLLIRNLYCTXOFSZSVGHCXFGJHBDEUUKLVKFYZLDDOCZJWDCSOXGYWXPGLZSKPETUUMCHMJTREHITUPRZEMPIQIIBMTEKREMBPCTHOFOWZNWUQAMWYTFJBNRAQBYTUYPRSHUPVQX");

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
    msg.setTimeStamp(0.281604554011);
    msg.setSource(11349U);
    msg.setSourceEntity(191U);
    msg.setDestination(33794U);
    msg.setDestinationEntity(36U);
    msg.req_id = 54680U;
    msg.status = 32U;
    msg.info.assign("BDRPKLJWCVOVNAAQQUCXLZWQFHKVWRAOGMPVYQGEIRQDMAUWAUTKFPXNUNHPNMDSIYOZMAEIPPONDNKPYGIZMBZCLCLWAFMBWEEDATAYWWSLIVPCEJJRBSGEZVUMJKPKFVHRS");

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
    msg.setTimeStamp(0.23237040772);
    msg.setSource(3858U);
    msg.setSourceEntity(224U);
    msg.setDestination(11784U);
    msg.setDestinationEntity(115U);
    msg.req_id = 14614U;
    msg.status = 83U;
    msg.info.assign("XABRSCYYDLHHKCBKWKHDALXQIVTEUIVLMAMJMXXJIANUKERZFIIDSSUQBDGOWVDWTJPMJFGKNUQEBSOLGYOODVQLRKLCOQNLEPBTBZYWXXTKGRCJMHKZFPVCIZOWUCMFAYCWPYMYORWZTNXVZDZFJVXGLNIBSTRXPAZWGWPEFGSZRDUVVTMEPBFCSRNMFAUUVLCM");

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
    msg.setTimeStamp(0.601821133039);
    msg.setSource(54138U);
    msg.setSourceEntity(42U);
    msg.setDestination(42650U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.849447993675);
    msg.setSource(46973U);
    msg.setSourceEntity(75U);
    msg.setDestination(60991U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.341315041659);
    msg.setSource(16710U);
    msg.setSourceEntity(81U);
    msg.setDestination(61334U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.97605085785);
    msg.setSource(39412U);
    msg.setSourceEntity(245U);
    msg.setDestination(46034U);
    msg.setDestinationEntity(90U);
    msg.plan_id.assign("TDCVKLSLIQBKHXEHKOVNGSIZFWHYMTCWYIYZNFLDZHEXTTSXTNKGVEKUOSEFJCGIXBSMPUQQAMIKMVFUJJUGHQJFXAVMYNQOPADWJFPZDHOFDKTZGAIDSDWCOEYYOCNKYLVBBPBOEMMPRWADNLLBOERBQCLEJVLHNIWGPOHIJPRUAAKVGQDCRZGQAHTWCJXYUSWNTZTZRYFMNENROFQCSZBPKMJM");
    msg.description.assign("WCTPYSRIKATIUUMQFJMKZLHYOPAFUVOWWWIWCV");
    msg.vnamespace.assign("VIUJNMXHLNGWNQWADEKFQKTGPEHDVPTIPIAHHABTRMDMHJPUEJDPCQJULOWYPRTHOMLOEUYAQWVCBTQFI");
    msg.start_man_id.assign("JKZVLLKWKZZSTAPYMQBZGZVNVMXGHEUZNAMPAPVYZOKDPHXMRFORSINPUIBLYETMLFXITMOAKHVLTHMTLIWNBHPGNGYSXXRHBFLCYSFCJVKLWIUMLRZSUWCOIAFOWXZPVRUQJN");
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.0557444112595;
    tmp_msg_0.ch02 = 0.0681098368979;
    tmp_msg_0.ch03 = 0.308885378952;
    tmp_msg_0.ch04 = 0.13963951277;
    tmp_msg_0.ch05 = 0.886196939543;
    tmp_msg_0.ch06 = 0.471013056121;
    tmp_msg_0.ch07 = 0.834944455506;
    tmp_msg_0.ch08 = 0.134241826571;
    tmp_msg_0.ch09 = 0.577897294786;
    tmp_msg_0.ch10 = 0.895344623891;
    tmp_msg_0.ch11 = 0.53033065549;
    tmp_msg_0.ch12 = 0.808603850027;
    tmp_msg_0.ch13 = 0.103261700348;
    tmp_msg_0.ch14 = 0.380315624779;
    tmp_msg_0.ch15 = 0.603404482104;
    tmp_msg_0.ch16 = 0.200862907796;
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.471703187058);
    msg.setSource(63932U);
    msg.setSourceEntity(110U);
    msg.setDestination(23952U);
    msg.setDestinationEntity(43U);
    msg.plan_id.assign("UFTUXMRKMWKDLMYPFXNCUVEAXUCONMYVAHKXPS");
    msg.description.assign("DTFUQUHLZWAZYGAKPQURYSDAQRGTKOXSMRLXSSVMZCVYXGCYOBBFMOLDQBYCYKFANHZTXLZSWHOBHBVIMKLTJCNAHHIODIWQLINTRAXTWXCWTMSUEOORJLKJK");
    msg.vnamespace.assign("NZPKRKWTZDLQLCDENNWHYJOXFLHDSRRMXOMHBSPVVFXAPJZLCFQDDSEQYAAJFXCQHJLMUQTEIOXWQI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YLXIRJLOYQWMJNQTWBSVNWCDJECWXLSZHGMZZQZTOGKANXUFTCNOBQYCKVBPKDTO");
    tmp_msg_0.value.assign("ULOTOYSKLPVQRQESCZFDRGGCGENUZFJOVXMQEYOABBYLSKWWRAZHDYMPLJCQYSCINTCTSIPMXNLNRODJDIFFKUMTIWVTWENLCGRFHRWFMQTLVOAQMFEAXDIGOEHVCKMKSEYAXBJSQXGEJWHVHNAAMLYKCRDAVI");
    tmp_msg_0.type = 219U;
    tmp_msg_0.access = 230U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("UZNRIYWNNDGIFEUUYBSLKAQKFSEGXFETMOMZYANTDFFYZQDXQMRMDLULZRVPSMACWVXHZLHHTBCKZKCNJGWJMGLEBB");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("GZIUADEJUKTSYQTLEMBHEKGALWDLKNYRAYSTDIJFNYLHHTQOPZQYPISMKJIFWPXRBDUPVHEVEWOMLTBDRZESZPCOCCHWBTSJPUVSHIZVON");
    IMC::Alignment tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 21642U;
    tmp_tmp_msg_1_0.lat = 0.165497873567;
    tmp_tmp_msg_1_0.lon = 0.312265312608;
    tmp_tmp_msg_1_0.speed = 0.267255828696;
    tmp_tmp_msg_1_0.speed_units = 65U;
    tmp_tmp_msg_1_0.custom.assign("KDSIGJVPUHBYJDTLTNSEDZXAICTOPDPUJHKNCAOTKRQQWIYESVSTVNVSHQDZXDGHQZFKNMONQTJZRQYPQBXPAWLHLFMSUECJGBRTEYBGXEIYBSSZCXOUWVJRAUBZYIVFRKZXBBFWKAUVFEPMWMIACIIELDANXKVBYMGRFCTCNMLWWFXAQJJUXC");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("RRBAHKOJHSCCBHDSEIYSMLKXWXLRGGZIALIVQWNYNKAOJVFTCDJICDKWWGVQNDKS");
    tmp_msg_2.dest_man.assign("FJRGMDLAGNEPIFMCLPNUHTWXWPPDUWKRSKQCTGPUCAMZBIJXRBKFNFZQXKHYCXILZMBMYYNTWKHKXRKTTNHO");
    tmp_msg_2.conditions.assign("EUGVXCCASSGUMVASYZHARPKQFTSGOFXXPFJYSVOQJJSFAZWCWFSFFIUJKWOUNRALAAMYTXUEHZMYENHDIUVOKLXVLVRBHPJFOMJEWTHVQKIWTPKQBNMGOVXCJMBYTPDXZIDRXKH");
    IMC::DepthOffset tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value = 0.316512807851;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.0892334977491);
    msg.setSource(37958U);
    msg.setSourceEntity(145U);
    msg.setDestination(35828U);
    msg.setDestinationEntity(78U);
    msg.plan_id.assign("MLVDTIFTZYUUBAYZHXNKDWRUVISBOFVDONKSCVSLTAQQFSJCWIUTXNYXTVFBLHOISKTLYVFWNARNCZPRIHRMIIZAPGKXLOMBAYXE");
    msg.description.assign("EZWKOCNWALVFKSFYADCYPPBQMCEBAFIZDQXQDCVMFDOSIXGBSRFLPTIZWJBCPBTSBXXSOSMVTVBYQEGWEITRPKTMCQGMPUWKGIDEVLXAHUCHPUWSTLFZHRYIQDOQAYGRJBJJRAXNUDJOAUCKPUJVDDEWKFYGJLTPOGGFOKMJSGMYOZYZNBIVNJLUGXKUSYVHMHMAONVQUNCVOLIYHDZZXLIFBRT");
    msg.vnamespace.assign("WSTIXJSQSYKKIRWGMZJICZPGVULGHPEZMLOIPHHMAKSLUQIHKRJSMPOWVYBSODTQUMDAQHPHXMMYSLSPTDXATCOETXGOYSIQJTWQFFDBUTPNFWBKYXGNZYZJRJNDOYTNLFQAXNCTQHUJXJVOVCBOHRWVBPUHVDFAMCLRFFBWNCPGZYAMADXZULEKALEJHBRINAYKWNRRWJLMIOGEKVFUPB");
    msg.start_man_id.assign("FFIZJTWTAXIRDWXJZRFJHJLLFZEMLARXDMBSTIOELPKLBYMVQJGDAOEJULBRCNXNAMVIUUTKMCAOLDCSYGJPGGVYUELRWDQKSOGTOAFCACMKGZHPHOUYJTITCFSKBJNSQBFXENSSKZSBEEZPYLZXDKTIKNQGRRUAYVMBDHYNXMPRQQTDNOVRHYQHYIGWVBEE");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("FZIAPOBRMBPDNMGITWFVKGEYMEOVCDEM");
    IMC::ImageTracking tmp_tmp_msg_0_0;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.764876013173);
    msg.setSource(38917U);
    msg.setSourceEntity(251U);
    msg.setDestination(32466U);
    msg.setDestinationEntity(178U);
    msg.maneuver_id.assign("QRPHTMACFWWWFMSHBEYBAOFLYRIKDZZVJSKPVCUAVPLFCHPOKOAOQWBENKDGXGMGNCYMTKRUGUQKIQMUPDATHOQEAZRUFNPBMTQGSVVDHALIPOTBFRLVCRDEZZNQ");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.383915234196;
    tmp_msg_0.lon = 0.341885474956;
    tmp_msg_0.z = 0.149313155039;
    tmp_msg_0.z_units = 26U;
    tmp_msg_0.speed = 0.00760685229451;
    tmp_msg_0.speed_units = 50U;
    tmp_msg_0.takeoff_pitch = 0.762189282098;
    tmp_msg_0.custom.assign("SCCDCOHIELSWKYMURJPGKMPWJBBBALKWZJTOGEAXISVBHIAWDMUQHFUGZCPFKYRCSHHYSYROGKKOU");
    msg.data.set(tmp_msg_0);
    IMC::DesiredPitch tmp_msg_1;
    tmp_msg_1.value = 0.384490255704;
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
    msg.setTimeStamp(0.23910528206);
    msg.setSource(65380U);
    msg.setSourceEntity(228U);
    msg.setDestination(30953U);
    msg.setDestinationEntity(234U);
    msg.maneuver_id.assign("QEFCZXSIUTPLHRSOJDKTPGVWKOEUBZXUDYKPTAABUYSGOAAZCPAIMMPQKKZFGENTOTLIHIWHNLNBJDVXRNLFEDGACXECYSKQTQVWRTVMRXSGVLYRNGOKHIONQJVSVLFJOPHTCEI");
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.0946596081937;
    tmp_msg_0.lon = 0.915548258969;
    tmp_msg_0.z = 0.00361866169439;
    tmp_msg_0.z_units = 148U;
    tmp_msg_0.speed = 0.341260219787;
    tmp_msg_0.speed_units = 253U;
    tmp_msg_0.bearing = 0.956901272779;
    tmp_msg_0.cross_angle = 0.905483330817;
    tmp_msg_0.width = 0.834906136333;
    tmp_msg_0.length = 0.458030023745;
    tmp_msg_0.coff = 136U;
    tmp_msg_0.angaperture = 0.440342079975;
    tmp_msg_0.range = 33805U;
    tmp_msg_0.overlap = 11U;
    tmp_msg_0.flags = 169U;
    tmp_msg_0.custom.assign("HVVACBZWFHMQZFLOTEKFGYGNPCVVXNVTTNBXSMBQJFFUMTDKPBRDRKQOMCACFVDVMYPROUZOWUHXBTOLGXCPJOXDIWBPADNOYQPENMHMLZCN");
    msg.data.set(tmp_msg_0);
    IMC::TrexCommand tmp_msg_1;
    tmp_msg_1.command = 168U;
    tmp_msg_1.goal_id.assign("HGHUJKPYCQZMOKECRPQIPNHHVRCJNWMDSAAYDWVJVOEZYOLKJDHEKKVEXFNLUZNDILBSXLFEZAUWINDZIECBYVNIKBQRDXJUWOXLXILIMVKCHCZSJCEUITYOGAKRHZVDXBPJFRTGPTYZAMGBHWAWNOSNGBYG");
    tmp_msg_1.goal_xml.assign("HCICJLMOOYZVXUDKTSSVBCXROQYDKIFGIEDMCOKYHDOJXVRKUEPEGMIUEQTGWPPSOGMALETURNFJHHIDJZBYXYXBWZARIOOVTYVGXJCZRJPNHIWFCFSBFYZPMVSCKDBRNLSLMAXJXVAPWQNTUPNBWIQIVLGUSJFHBAQYPGFTFULGMBQKHLDZARWCFEWPHUAKKXTRWUEHXNRZZMGTNGAL");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Salinity tmp_msg_2;
    tmp_msg_2.value = 0.550831803425;
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
    msg.setTimeStamp(0.341546131606);
    msg.setSource(32768U);
    msg.setSourceEntity(57U);
    msg.setDestination(141U);
    msg.setDestinationEntity(29U);
    msg.maneuver_id.assign("MJWGPUYORMPGVLEZBSJOFGBVNCEZIBIPRLCRRIQKDQRGNEHCQSNAHUJVBLZEVZUKUUWXDMLRWACCDJHDHVGKVTEWODPWWFTSBYTAOMMXSMABZA");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.459866998714;
    tmp_tmp_msg_0_0.speed_units = 120U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 37785U;
    tmp_msg_0.custom.assign("KSKZCWCPXLKSOUIRYQYZJDJBIOFTETKHDHRYP");
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
    msg.setTimeStamp(0.772629764437);
    msg.setSource(3684U);
    msg.setSourceEntity(181U);
    msg.setDestination(9248U);
    msg.setDestinationEntity(26U);
    msg.source_man.assign("IHPZIQQPFEYYDNYZQGNAAWWRGPYBRZLZBENHLXHORCKOIWMTVCDULSYEVGUEIKZBMVUKEYBANGCNQVELDWLOCHACUUMGKZSCGTDOWLCJFSYGZJVSPQRLBAHXAVWCJPGCKMTXRYMIDOFIMKFANYDFQHVUAHGXSHQBWUTHWVISSCJFBRNTNZQKFXPVXMI");
    msg.dest_man.assign("FMAGUXOIBMMXIUANQPTJXFGSKJVIWVH");
    msg.conditions.assign("TOHTZHECRROSCTUHUOMKVKTEDCPVJGVNHSASLANTJJLCLRSEILTXOJXPKYIHZEOEMDBJGYXVWZFBLIMBNIPIMFXFAQKEBYAAAANXMSKQUUJYIGPEKOUURQNISOWZWDTVLQYKIXZBFDXZABUCEMOGEDCCNOZFPJYIZMNQVSVXGQIQFPRDRCBYJEWBDMGWZKVUJHSQLHTDRLRKQVNJRYDVPSRTAFFNLAQWCFCXBOHZHWSDGWFWGNGHU");

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
    msg.setTimeStamp(0.131471733069);
    msg.setSource(62292U);
    msg.setSourceEntity(0U);
    msg.setDestination(18754U);
    msg.setDestinationEntity(120U);
    msg.source_man.assign("OZFDZCTQZWIOMTBRQEKUAKGSPMLOWXKQGEEHPQHUNBVBMDPIPPEXVQENTNDIWCFSZOE");
    msg.dest_man.assign("XWJREYNYBIABFBPWNCHJQEACGOBCLUTQFXJSSOKJZHAXYKVHVESAZLKNDPHOZGSOCINTHCDDXCWQJ");
    msg.conditions.assign("RMFLVXJXHXSQMIVSMORPVMIXAJRPOBTKRWUQEWUBQGKRDBKJMNYCIVATVOBUNLVZCMDIZGEHTRBPLGHNSKTLWDHEUKXXNPBWVIFHRCGKBHSXPAWFTLYSCQGNIYTHTFZRZUJPCMACVZGNRJUNJTYOO");
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 203U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("YGJJBYWUAZRNJNZGQHMLKZHWMYPPGFWVEQODIVNSDYIDUJUAQQLJLIVBAJJKNBXXRIUNTGMURBDVEHLKFUZTSEMKVGQYCFRMAKAEOXSWFAJWAHJWMZOOCRZHKIUWTCPVOGCOYMVHGSCPGFDWRVNIATYQZTCPUEXAQDSYSPUBBSCIPXFLQRBOBFLFHRKJLVYVKDIIOLKGETG");
    tmp_tmp_msg_0_0.description.assign("SXHTJXCZFCDEMEWUNVFIRYCHXBBQRTMCTHXMVTEJUAZPMUJNNXHWWFIKWYLPFVFDNWWQBUQABHIEVTCZNOPKGVICRYNSQEUGFJSLBUKZNUKHLOIPPMHKOPCYRLHYZDZLFWBHIEKGFMAQSRPSSCRYAONJAJEXOMXODIZMKQPOPATLVFJBSTXUKILJWWBGDDXIGTRQNKUGOGGCUPJWBYDFGIDSAV");
    tmp_tmp_msg_0_0.vnamespace.assign("EWKCKYPNWUNGTNAGRZBZNERMYTGPJHSIEOLIXDAVMDYBPNFRNXKMMAEZUWZCSDUSBGXHUQTMPQBGXGWXLCJTQNCHARVSYKJFXEHKKKOLWJYZCNYOEUPRMKDHZISRRGVCJBGQIUPFYOQACQQDOIBUHAMIXIIFFPQEXLCJOO");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("EGYHFHAHCGYAKWJURUWXMWICVQMNNTGXZLENQGALHEZUTXMZBRZZJMRPIBZCIWOKVVBDPBESNNWDFYYVJSDBCHXUYWLQQXSRQYDIIWPDBIEOLVHXISUFOIQMNJBDPZPFURKPNUXPUKHVHXDYJJJIOWLGQAAFVYQRKOSONTTLPFTUORHCOUEKRFGVQFWOCSTPFSMSJWADBLERNLGMYCMBKBVKEOZVGCCFKXE");
    tmp_tmp_tmp_msg_0_0_0.value.assign("SDIGBWKOEHYRIAHRQFLNYSCPWCCGCEXSLQXGPKQSLFWZINPFOXKKKMRZZWBJBTSIJNWUPVIEQNFJBOCWHNFVADVCOMJVJXHGCDLUWHKLUBQQRDCANQVVYDDENNJVQOTOTZLJAIRPMGTGHHPAIAXUBZTTSCOFYIKQMJHEVABGAET");
    tmp_tmp_tmp_msg_0_0_0.type = 241U;
    tmp_tmp_tmp_msg_0_0_0.access = 146U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("KTKWHRIOEPSKGTETENNIDOHNLUCJHGNIRAJBPXUVQVUUXCBMUKZKQFPSUCWAFZYPETHJUTTLVMDYAZLDGXOHYXZQDFBULIRWVDNSQJWBANWDSVCLONSFIWOXCYOHAHBBAFZYMGRBWRWHUSLDZXKGMRIRCE");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.maneuver_id.assign("GEYKVQHCMNAJJMBLHTHHPDEJQNZGPLFBXMIWPGXSVPXTEOPZHOWXKVENZXQTTGOWDQENKREMSSWYWBIDDXFAYHYGFS");
    IMC::Land tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lat = 0.749121938355;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lon = 0.393219061099;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z = 0.231965514004;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z_units = 17U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.speed = 0.679518548824;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.speed_units = 36U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.abort_z = 0.220566596441;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.bearing = 0.897623833361;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.glide_slope = 250U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.glide_slope_alt = 0.752778697423;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.custom.assign("PBDPUQEUINHXSES");
    tmp_tmp_tmp_msg_0_0_1.data.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::TBRFishTag tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.serial_no = 3643162626U;
    tmp_tmp_tmp_msg_0_0_2.unix_timestamp = 376321389U;
    tmp_tmp_tmp_msg_0_0_2.millis = 13460U;
    tmp_tmp_tmp_msg_0_0_2.trans_protocol = 212U;
    tmp_tmp_tmp_msg_0_0_2.trans_id = 2003699494U;
    tmp_tmp_tmp_msg_0_0_2.trans_data = 64300U;
    tmp_tmp_tmp_msg_0_0_2.snr = 2U;
    tmp_tmp_tmp_msg_0_0_2.trans_freq = 63U;
    tmp_tmp_tmp_msg_0_0_2.recv_mem_addr = 7089U;
    tmp_tmp_tmp_msg_0_0_2.lat = 0.310928866463;
    tmp_tmp_tmp_msg_0_0_2.lon = 0.233240502603;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.42163228159);
    msg.setSource(12044U);
    msg.setSourceEntity(94U);
    msg.setDestination(34999U);
    msg.setDestinationEntity(29U);
    msg.source_man.assign("VOTWVVTQQGYASURIEJZKUPDXILSARJLGNVJSIWBGAOCMIFNUAXMLXXEFLJUVUFQYADOUTYJNQYDCLVOG");
    msg.dest_man.assign("CUDMDZETRLARGVBCBJQNOIFSIIRVFBSHIAZGLZUWQTVMFYYXHHLRQBJREEENLUKQXGVWMBPTAZOJDSYZOVCCMHJEKYFGQBSUZUIDHLOVZBFTWIJWNTZJYYCPXYKHIGPFUYYIEOSSKRCR");
    msg.conditions.assign("OJVAMHUOXSEJCVYLGQKNXYPFXAMSYAESSCIDFIQFINKERCALNWPQWHOTPHWYPHQPIBNDBXSVYFRJWTFOHUAXSPRFGNYXIKFCAIMRJUZEZCFOKGZFBWKADUZDHKZGOYFBRAJMGSBYHPHNQTDOGBTYXVRAHETPBJMQHWLVDMNDUMGVIJ");

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
    msg.setTimeStamp(0.245015028394);
    msg.setSource(14874U);
    msg.setSourceEntity(7U);
    msg.setDestination(666U);
    msg.setDestinationEntity(222U);
    msg.command = 232U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FPOJNDSCLTSMBRQOWGTXKJQIQUTDDXBDWYXGNASZLYHSHLOBCBCEVRWXXEJFLDLHVGMNIQRBBKSMOAKPKTUENUUZPREEAMUHUCPJLGFKVOKKMPRDHQBNCOLXYPVZP");
    tmp_msg_0.description.assign("VBULUVETMLDIJPEDFCUMZUGVODAAZRBDCNWKINNXROZRUXGUZEGRNAPLG");
    tmp_msg_0.vnamespace.assign("LJIADYWOXOHBFSUSLPCLOXHTHRIQWNLUPRDBATRYJMNUHCUVXUTKCCDIWKTBGXOSBKIHJEBXCWJBMZLQFQNDJVPERQSJCNSXFPZXDUOGOKZKDBWYSTBQQWHHFMMZTVAEWZFQFURPZJIAZVHEWVMPDGLUKNPLGSOYVWMY");
    tmp_msg_0.start_man_id.assign("YLZNRAHEQRFLWJDQVANOFIQBNSTVBEUEIUQXFZPXNBXRMWOMSTNLCADPQMABZXWVMEBGDDLORUMKGETKWVGQGEKXICUDPNKOSVLJFEQJRVEPOMNXWBCYHMBAPAJSJYIRZQGGPTHZPLCIXUTKFYUZOPGAGGWKNTIZMWYHTOUZHVKCCSTNYQKRCVIHPKU");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("NKLMMEVNGJQCDSQRIZJXWXGMZXCOFNQSMGILPLKXXYDPYCYFBNJAKWTZYPGTMYGWWDVWFRIFNQLBBHUZOSFPAYWYKEKNTKZADBIVHOHKAGLNEWJUNSRQASULTIF");
    IMC::Alignment tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 42816U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.849421754791;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.636443545651;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.836566384637;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 35U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("GCDGQMNDFPMVOEAWCSBRUOHYSBKZLFANBNFTWTUMVOZHPDQTUPBYQUAUFAQIDLXMICSNERWEIRIQTLIFDTRUZWXGABDXGFVMILMEWGAAJOPROWYNBQRPLTKPZBFNEMDXSUJACLJUSPOLCFHXSHVVZAKDBERXOVRXZIOKJNYYUQKTWSYICHXRMQHHYOJTWWU");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::LblRange tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.id = 159U;
    tmp_tmp_tmp_msg_0_0_1.range = 0.461025796191;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::TotalMagIntensity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.294194324607;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::EulerAnglesDelta tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.time = 0.732210169878;
    tmp_tmp_msg_0_2.x = 0.742654992279;
    tmp_tmp_msg_0_2.y = 0.495207329663;
    tmp_tmp_msg_0_2.z = 0.563795866827;
    tmp_tmp_msg_0_2.timestep = 0.355195049171;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.705412239997);
    msg.setSource(57186U);
    msg.setSourceEntity(190U);
    msg.setDestination(14024U);
    msg.setDestinationEntity(73U);
    msg.command = 155U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UBPSXBHHALUKDFAOKZXY");
    tmp_msg_0.description.assign("VCYQKSIYZTEDGTSWXDNVFLGEPDFHZZPAYFOJXBWGRLKJOIMIPSUUIHHQFVHOZNGJFMJZDTCVQPXLDYMUGWBT");
    tmp_msg_0.vnamespace.assign("NXAUWUFTOCJXIDFWZZSHVMGCIAFAGPFAKMZBNXIKBQBHKPUFCNJETLBLKLGFUNQDWUVQOGRCHOVURVGEQEQBZWIMLDXN");
    tmp_msg_0.start_man_id.assign("LGOAIUFALMAYECHVYHXVUBDWMQODFJWNHYJYRJXWVNLLXOUGVGJZJZMNFQEITXTHPPBFNECPKJGTKVYKWPMTHGKBISWEDCNCQGGPNU");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("QCPHSMRSJMYKBKDYSGTFSNLQLNDCDDIOESYRJTXNGESKOMACZCKYREBYJDSMUWWLKCWOALOIHUVPBUXDTFFQKGIVJEXYMHMJLJDAQLAYW");
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.164184548876;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.383478863138;
    tmp_tmp_tmp_msg_0_0_0.z = 0.465450369878;
    tmp_tmp_tmp_msg_0_0_0.z_units = 48U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.263107095418;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 228U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("HTBTVMZRMVKWQKGNVFTLGMIYJTULPMWMPDCMKXLEYTOOXYCYBRNHUHTFEOTIBWQMASRJAPSIIPHNZIAYZVAIIDBWYHZPFLECEGOLRVXLFCBAUGKWOXXMPNKZGQARVQBJCRZQSJEGXJNJSZUBQJENOJODRSQYFIOOVAPSWZQCKDCXXDUSGWEHPNZGELLVDURRPCRKQBMCBTDDDHUNJHQBL");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("DPEIFVMSNFVOEWZTYTMSYD");
    tmp_tmp_msg_0_1.dest_man.assign("RAROKXFTOYURUPAFOJMYMJGBHJKOYGUDLPTPUSZHOKEYQLJRZTQPNJZBHPQKUZGTYKSAHQDJVVUKPRZAWMJCLOWSCMKMBXAHTILIELFIGGDAOMDULSNXFTXCVREDIPYOCMQVVNPETENXBHLILZIBHBTQSJWJSUKCXFDSBTXBXCRARVGZCVEGCNAMAENILEPCDVGEFKHSNEMDYFYBZWFIWPWYYZSFIDSXLBWOGWJRCUUQZGVHIOFVRKWW");
    tmp_tmp_msg_0_1.conditions.assign("YORHCCGSUCPANJYIOKDVHTMIEXIZXTRMMSEDGPDENTDFGHTEUQDSTRIJGWMJOIIMTIVYLFVFQWXVXTNSPWAWWLYSADSHNFQQAALABZZWKNCLDUOKBMVHGXK");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::ButtonEvent tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.button = 77U;
    tmp_tmp_msg_0_2.value = 23U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.412215198183);
    msg.setSource(59190U);
    msg.setSourceEntity(229U);
    msg.setDestination(1698U);
    msg.setDestinationEntity(201U);
    msg.command = 210U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IAVETSZFLLCCXEHOKGTUAAIPBOBDKDFRHEPWXBLSMNIYBJBAZENYRWJEAFQUSWTLVOSWYKDOXUQYUTTBWVDJMZIUMQIKAWJGCPVNWIMXCZFMOWLSNGNHFUBLBPYDZGUKKUULHRAEEHHTKJCBMKFNJZQHHQXAZJWGRNVMTROQUOGXMNLVDCGLOKCPVXHFAIGTMPXDBCVJSPCYDCRJEYEQVTSEIIPNDPYHSXPQY");
    tmp_msg_0.description.assign("MIOLGARMVWPCYHGFQARTVONNDNGCRTIEZIZMYDQZHRZSYSSHRNBEOFAXPJJMBTMVLCBNLCZSAJHMGRZLKJXXOBWNNPJGJLZSSQSOAATIQDCNU");
    tmp_msg_0.vnamespace.assign("KEIKYQSXCUCBCBDGMFQJ");
    tmp_msg_0.start_man_id.assign("PADYEQKEYTQAPIHBHENAOKLVXDBFIGQOABHZLGPKTQEFIMZHDJNYVYMSXXHMWOJHJVLAKNZDOLJCEIQYUBTQZGYHFXLRHBKSDD");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("JXIDGQAGWFFSKYWCRGGYJRBAZEYNNAHZRHRBIOUHQTIAKVEUBVSWXQZELFBEDDXBWFRLSKQFHJMVXNGNTPTIXGMQEMOEVRMJACBTOVPJELDLSPUNEFZHSIXRHUXOFHKYMPTOTWCWIZYVOMRIGOMGS");
    tmp_tmp_msg_0_0.dest_man.assign("HVDHKAMJEXVDKABZJHNACNOXAVEMFHEPDYAHLIMGKSMLHJFJDZUQDHJUHXZBBODCSGCIKLQOMZSELRXGYONUEGCMPSUMTAJBBGKWSWIITFTVSZQZIDTTHYIZIVAFAVKPRNILDCALEWRYWPCQRYGCFNSKJJVXKZFFXPKLEOONRTWQAQUPXGGCCRGPKPNLPNMXZLBTIOEWCYTUDVBRQMWE");
    tmp_tmp_msg_0_0.conditions.assign("UWDXAIUBGKQDKRNOCJM");
    IMC::CurrentProfileCell tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.pos = 0.919627455414;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0655227687013);
    msg.setSource(37578U);
    msg.setSourceEntity(249U);
    msg.setDestination(58605U);
    msg.setDestinationEntity(249U);
    msg.state = 177U;
    msg.plan_id.assign("USKHIJGTNXFGRXGJKKBOPFULESYGAJIEIOCBPFYXQLVOJYEABJQXQNPFMZQRETVNZWUNZBBNMXKHDRXCWSAIJTEGKSVALCMYIIOGPWXYQFCFOWVYYBMUDOZRYBNARVJWJHDPGWZD");
    msg.comm_level = 73U;

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
    msg.setTimeStamp(0.782951928379);
    msg.setSource(65407U);
    msg.setSourceEntity(98U);
    msg.setDestination(52492U);
    msg.setDestinationEntity(125U);
    msg.state = 88U;
    msg.plan_id.assign("CFLBOQEQPQEGZYWVGICASIESSTBODVNEGJHRJYK");
    msg.comm_level = 198U;

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
    msg.setTimeStamp(0.702598939322);
    msg.setSource(5374U);
    msg.setSourceEntity(174U);
    msg.setDestination(3704U);
    msg.setDestinationEntity(104U);
    msg.state = 250U;
    msg.plan_id.assign("HWQUDFTRZJNGMTVYNIBEXOMKDEMBZDEGMEYULHFFEJMHSSSUYQQFXTHRFDRSRYXWWPVBSKRLHCAIZTQSBJAOLGOZHQBITIWKRYNQXNLLQZXBPNYKVNKMHBNEAHSAZPPSVYTVATSIVBGUEZALCATCFGSVLDOXDCMGOZGNHQKMNOPPGCFDYZXUQDDJULCKPOOOEUGUIJPPCRI");
    msg.comm_level = 237U;

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
    msg.setTimeStamp(0.921090662912);
    msg.setSource(21069U);
    msg.setSourceEntity(192U);
    msg.setDestination(34131U);
    msg.setDestinationEntity(245U);
    msg.type = 61U;
    msg.op = 91U;
    msg.request_id = 4158U;
    msg.plan_id.assign("YIKIEMXHDBNPPMFXDXJWOHKDPPVZGQDJGHYZYOUEUFGZWEAQDRLIVGDDXRMCPVUTFHCHROSWZGLQ");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("QDCCJVISHKDGKNIVBSJWEZCINPIWNEGMREJGOOOXUKTLOGIQZJZVLOBTDTXSFYROCADAPHIKRRWBAICPNHXZSJEMYYTQDUKTTKLNRGAZTGFHHMNFCIBHSSPVVLGEFLEDOMVQIZWBBUDSBWKEZPDSLPFJGMNXVCUAAUAKYAXRFYCWJFPRGYNXPWHVUHXNQFWBTWQYEYPCBEAMBJEHVVLWKXZDFFDUAQMTQLCM");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WSTGJQYLSTXZLBOKP");

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
    msg.setTimeStamp(0.482161789349);
    msg.setSource(27890U);
    msg.setSourceEntity(237U);
    msg.setDestination(39687U);
    msg.setDestinationEntity(60U);
    msg.type = 192U;
    msg.op = 201U;
    msg.request_id = 30808U;
    msg.plan_id.assign("KCYYLGYXTNDJOUDZTSEBHQAUAHRBALSLJYKTYQGHXKUMGWRLDNOXCHMPROGGBZLZWVAWAFBOXAGRNQIAKRQGUNRHJOSRMVUTWDDCREQHLEJNHIHABJNXGWIFCNEVATCSNVCTXEJZZUUBXNJXABLFGBDXMPZIDIUVEQONQEBJBVFXVWUSCYZKJMPIMRYOFKSQQPZSOVYPUPWMLPFLMZCQIHYEFFTCMYPDVCVKTTELGTPKWS");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 63574U;
    tmp_msg_0.flags = 160U;
    tmp_msg_0.lat = 0.942647595424;
    tmp_msg_0.lon = 0.164208654576;
    tmp_msg_0.start_z = 0.201194494338;
    tmp_msg_0.start_z_units = 226U;
    tmp_msg_0.end_z = 0.65527531129;
    tmp_msg_0.end_z_units = 205U;
    tmp_msg_0.radius = 0.927032852214;
    tmp_msg_0.speed = 0.823694096757;
    tmp_msg_0.speed_units = 9U;
    tmp_msg_0.custom.assign("UXAWEZMWPKDDEBSLIMAFQLRCXNBYBGJXJHTJWILQXDHYCCNFYEGGLMOLWSTYDSUOTRJTAAZKJLHNGBMSSTVIHVQRJGLNBAGPVMOZZP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CUYCWTLVTVQCYDXWMWXACZEPORAEOMKMEUYABAHOFENICVRYVAPZOFORIDCGUWAYDNZMPPJJYAVZSYUJTTJWLMIBHSTGNICAKVKWNORVLHINLEXHAPTPHQ");

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
    msg.setTimeStamp(0.87083130689);
    msg.setSource(16970U);
    msg.setSourceEntity(96U);
    msg.setDestination(48944U);
    msg.setDestinationEntity(29U);
    msg.type = 23U;
    msg.op = 129U;
    msg.request_id = 48614U;
    msg.plan_id.assign("BUXATKYXIFGARJVJRCWSUJWHXGEYSEJYMBGHZYCJZPIPCDHLZAVETBNUOTLLGVUMDEHIHMOONQFUCEIKAPFWBVLBLTFYAWRXWIXQQJLFUSPPUQTCDLOZMPFFEZHSIBDFWRRAMWOMOJKHNMXYSKJGRVZGCTKXDUCERSIZDNTYNDHNPIQEYUSKMZPNJWWVCLEAWR");
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.21399133567;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HKVVOJDIRAZUTIRVILPZAKMNKTHIMSFDLXUWVOKQHPLGAAEJOMJGRUGOYCPQVUZTJJYEBSSUXDMTL");

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
    msg.setTimeStamp(0.243877245871);
    msg.setSource(52428U);
    msg.setSourceEntity(31U);
    msg.setDestination(16307U);
    msg.setDestinationEntity(29U);
    msg.plan_count = 63746U;
    msg.plan_size = 1411911601U;
    msg.change_time = 0.125945545547;
    msg.change_sid = 37502U;
    msg.change_sname.assign("LSBRLXBLVQQNNGRGOHUUTVHTDXJEWOPBOTEWEVFAGFCOVRHINJCJSDMQEBCEXPVFSOSUVZCJBEXHJRHYFGFYMJCCSIXSBMMRYEGHQBNCKTAATHRKIWOLG");
    const char tmp_msg_0[] = {-29, -83, -27, -88, 3, -17, 60, -101, 34, -110, -94, -27, -111, 44, -86, 86, -101, 100, 122, -67, 42, 77, 26, -59, 99, -67, 114, -77, -91, 74, 20, -14, 86, -78, 34, -57, -90, 110, 61, 46, 67, 95, -4};
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
    msg.setTimeStamp(0.376221188505);
    msg.setSource(26800U);
    msg.setSourceEntity(196U);
    msg.setDestination(29307U);
    msg.setDestinationEntity(221U);
    msg.plan_count = 2245U;
    msg.plan_size = 2123621646U;
    msg.change_time = 0.264583141399;
    msg.change_sid = 28641U;
    msg.change_sname.assign("PUOLMFXWFLSXIULLHRDRQWETUJRMKPTCSBMEPPGJNJTQZWWEIAZRYXFZLSAWGIECZBCA");
    const char tmp_msg_0[] = {-72, -99, 27, -74, 21, -126, 4, 21, -102, 73, -30, -30, 25, 112, 28, -27, -12, -46, 33, 82, 88, -24, -1, -34, 67, 89, -5, 84, -84, -60, -14, 65, 58, 36, 118, -86, -70, -123, -111, 43, -34, 83, 44, 122, 59, -76, -128, -82, 93, -107, -67, 5, 2, 7, 66, -91, -109, -93, -125, -124, 44, -47, 124, -126, -84, 89, -47, -117, 26, -71, 118, 12, -65, 12, 74, -74, -63, -75, -86, 7, 96, 113, -24, 61, -3, 16, -116, -102, 108, -31, -35, -5, 77, -57, -113, 23, -63, 29, 41, -75, 99, 114, -115, 92, -55, -14, -99, 42, 8, -119, 117, 120, 46, 107, 121, -106, -51, -114, -26, 114, 104, -63, -11, -102, 7, -91, 24, -45, 36, 59, -111, -26, -110, -83, -64, -6, -6, -24, 27, -46, 107, -2, 73, -114, -55, -107, 68, -20, 120, -128, -73, 105, -19, -31, -118, -127, -120, -75, 65, 87, -54, 85, -12, -44, 79, 64, 63, -110, 35, 101, -83, -28, 9, -109, 79, 55, -66, 121, -88, 110, -60, -54, 98, 52, -16, 76, 94, -98, -96, 20, 7, -74, 14, 103, -16, -46, -64, -3, 7, 120, 30, 9, -32, -36, -12, 107, -97, -1, -45, -127, 43, 86, -119, 106, -26, 116, -116, -75, 104, 91, -108, 58, 81, -97, -79, -42, -27, 71, -105, 107, -100, 14, -26, 72, -88, 105, -105, -114, 97};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("OKTBEJVONCAZIZAWUDVEIWMRBGUMWUAHNTNTBMFGAQWFPYKD");
    tmp_msg_1.plan_size = 27898U;
    tmp_msg_1.change_time = 0.268114603189;
    tmp_msg_1.change_sid = 64328U;
    tmp_msg_1.change_sname.assign("MWBZTGENZARQBQARGYXSCTKTUAEHKIVEMWCALWHLICVVOCGOROFKRNCCINNHRXWYJFGYXHYZQCQJWXYJAYQPHGRLZFFUDOZDKTSAHZAKCMBPEPUOSDHVUFTEBUVLGRMSPIQPKWAHEKWXCSBUVIPBPJJGJLLSDEDMDMLEFYEXBIXSDJTLNEZQI");
    const char tmp_tmp_msg_1_0[] = {-128, -27, -82, -80, -40, 77, 112, 84, -66, 36, -74, -58, -93, 87, 97, -94, -37, -126, -76, -106, -73, 49, 87, 3, 38, 81, -70, 25, 73, -10, -99, -70, 114, 54, -51, 70, -120, -52, -103, -51, -97, 52, -108, 67, 28, -76, -122, 97, 124, 80, -62, -47, 93, -29, 24, -103, -98, -52, 35, 58, -32, 78, 109, -30, 61, -89, 95, 65, -41, 92, -116, -1, 104, -107, 18, 49, -9, -13};
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
    msg.setTimeStamp(0.84320848519);
    msg.setSource(22731U);
    msg.setSourceEntity(234U);
    msg.setDestination(55716U);
    msg.setDestinationEntity(169U);
    msg.plan_count = 64191U;
    msg.plan_size = 841219279U;
    msg.change_time = 0.457769964357;
    msg.change_sid = 9651U;
    msg.change_sname.assign("JYBKKRMLACOSARNWSZZFGDFKPCIOWAVLPDMKFWLWVHBBQTZILHHETCOHDFIFCUJPSBYWAULSWBEZCSUVTUNLBSPKUQQVTNSZTHS");
    const char tmp_msg_0[] = {18, -35, 45, -90, -64, -37, 2, 69, -62, 118, 70, -66, 79, 65, -82, 46, -88, 49, 11, 38, 81, -24, 84, -9, -85, -71, -93, -120, -78, -120, -85, 101, 91, -91, 67, 75, -20, 91, 58, 100, -14, 108, -76, 120, 104, 77, 0, -77, -45, -3, 47, 59, 47, 52, 69, 13, 51, 58, 88, 33, -42, -32, 27, 109, 64, -1, 17, -90, 0, -113, -88, 58, 46, -92, -89, 23, -101, -128, -111, -29, -75, -84, -13, 40, 56, 33, 111, 4, -11, 98, 8, -39, -100, 103, 36, -106, 0, -39, 126, -120, -57, 92, 5, -128, 84};
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
    msg.setTimeStamp(0.36050841146);
    msg.setSource(26377U);
    msg.setSourceEntity(87U);
    msg.setDestination(3032U);
    msg.setDestinationEntity(183U);
    msg.plan_id.assign("TTDRDZYCDIZOMLPJIWNTBQJYFEHYJVYWVBIZQBRDTBKCOSMZHJCUZRTEQLSEGUMSHBPMESMKQXJLYBPIYEODLWSVHHAJQVLWUNFOOQBPPHINCWKMPJYSSNAKLVOGUXEXCATAEFDJTADFGIQAUSWNMBWHUGDNYRYHTKGTGEIZDXRYCZRMSXMENKRGBVOIMLRODVGSQCLAZXVXJHZFPWRWHKFEXCBQNAQOAUIFTXIOPK");
    msg.plan_size = 15356U;
    msg.change_time = 0.111585062189;
    msg.change_sid = 41744U;
    msg.change_sname.assign("JKNRIJSNQLRJPWLGSYEXTYMXCZUISMYUTLJJPJFYMJVPVOFMTGHNDMPTNEWWPZMGEGLLIDOBVVMHNGXAFXNQALUDMETGBSCZUKLXKYGVZXEHBUCJHZGHDBCZQMTFOQOWTYZWILJHWHDIBVZBIKNWVGKCSBQQUARKOCOSOAFROTELXYKLMFZDUFCUYKERKGB");
    const char tmp_msg_0[] = {-12, -11, 116, 93, -50, 34, 57, 93, 97, -21, -10, -98, 8, 53, 86, 6};
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
    msg.setTimeStamp(0.938672979213);
    msg.setSource(38858U);
    msg.setSourceEntity(239U);
    msg.setDestination(7834U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("JTSUBFABXIOBVXFKDCQBBWSPIVGVGDWMCKJJBWSXQZJJOFJKQWOOAWAXHWTLLTOFDAUMUCHTVXRQPBLNOKNIPLZLHJNRITTKQLYGKELFVRTQRQEMOBJGSKHVTLYAYGNWOMPVNSXQT");
    msg.plan_size = 47384U;
    msg.change_time = 0.58990777116;
    msg.change_sid = 21573U;
    msg.change_sname.assign("JIPEDBRKAYJEYOISLNYKNTCDAOXZCVCJCTGAGQBLZAFEEMPAMTJUX");
    const char tmp_msg_0[] = {10, 37, -121, 18, 80, 87, -98, 96, -65, -101, -17, -84, 25, -9, -67, -110, 116, 74, 54, -62, 29, -73, -103, -96, 63, -14, -38, 18, 38, 2, 123, -33, 32, -20, 111, 119, -98, 29, 117, -13, 108, -5, 0, -81, -28, 20, -84, -44, 31, -49, -71, 22, -28, -110, -89, 110, 63, -115, -30, -65, -28, -93, 43, -59, 121};
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
    msg.setTimeStamp(0.907068758112);
    msg.setSource(10285U);
    msg.setSourceEntity(94U);
    msg.setDestination(36185U);
    msg.setDestinationEntity(73U);
    msg.plan_id.assign("FWMNQNJDGHPFPODWPLCZAMJCZRAVPSNHNONLUIQENFYHDKSROOCBHYKFFBTABVUFVRTDEPDCZCRUAELGWWFTIDXQAHCAESMSZUQZBTQKUYJMBYDXWBOGPYTJFEYXRPLXHDSNIGXTPGZKFOKWAQRPIEBTVHNGGQEBKZJIEQWVEBUSLYJNVUXSTHU");
    msg.plan_size = 64613U;
    msg.change_time = 0.0304804428228;
    msg.change_sid = 56449U;
    msg.change_sname.assign("OYDWJLWCTMCAYBMAYQICWEPIKONLVAHZGBVXSOPHSDKQGEEFRRYTRDMPSAMCMEUCJFQRFKJVKALWRWQNZRAEZKUWSMHGKHJZWQVGAHDHXHVLDUTCXCPIGIPOQONEKOGCUMHYTIPBXJFKCHJNTKVYFSTXSYVWLJJFBDDSHPBTKLARYPFNOCUBLAZINIWXNRWBPEFZFRNXQIVOLGLLZEYNUXMUTQGJGYUUVZQXDBOJQOIFSTXB");
    const char tmp_msg_0[] = {33, -128, 11, -62, 27, 32, -62, 92, -73, -41, -113, 81, -90, -98, -32, -81, 13, -49, -20, -65, 21, -52, 77, -82, -33, -22, 63, 71, -123, -77, -75, 121, -86, -29, -6, 104, -34, -113, -76, -37, 55, 46, 78, -91, 41, -32, -119, 80, 109, -95, -84, -121, 55, 42, -57, -3, -108, -108, 79, -114, -116, -70, -77, 94, -73, -6, 116, -21, 54, -30, -21, -61, -9, -4, 47, 81, 55, 96, 55, -92, -113, -75, 66, -37, -11, -53, 33, 83, -40, -93, 114};
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
    msg.setTimeStamp(0.772997273105);
    msg.setSource(50239U);
    msg.setSourceEntity(206U);
    msg.setDestination(59342U);
    msg.setDestinationEntity(228U);
    msg.type = 97U;
    msg.op = 65U;
    msg.request_id = 17833U;
    msg.plan_id.assign("HKQTXGXCMCAVBCBNZFBAFUOJZMQTXVMERAUTDPJRENSPQYVPTIPLIENSUVZRBGUXVSNRHHHQGWFIJNXEVOLLQXTQUGPCYYQBEAANTJHNGKRJ");
    msg.flags = 14925U;
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 140U;
    tmp_msg_0.x = 11205U;
    tmp_msg_0.y = 20766U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ATEPUMIUCQOQPNQORLTJWOPAWBIRJMAODSGTUCYNCBHNHITFPSXMVOQDQWVYYKCLAJFPGLSBERCMJWZHV");

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
    msg.setTimeStamp(0.380718569081);
    msg.setSource(31555U);
    msg.setSourceEntity(23U);
    msg.setDestination(4995U);
    msg.setDestinationEntity(138U);
    msg.type = 101U;
    msg.op = 30U;
    msg.request_id = 28356U;
    msg.plan_id.assign("WEQYXDNJPAROQBGTJXAJ");
    msg.flags = 20862U;
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 2895724417U;
    tmp_msg_0.messages.assign("GRTMVIZLXNSVLHRUGRGHZQCASKIJGKDPMLBYKBMNVEOBWJJIFQBJLRUIPXVGYFXNPSVAHMYXEKQJOGTYIQLXYZLSYNFVNEZOUMNVMAHGUCTDDYTQXAEQZPMWWDILBDBAUAEUJPPVQQWXMWDSOOLIKFTHDRIRHZCZNRWUSWAMCCFWYFTSEPADCTZIGABYUXBMPEZJLVTKUBZISBXOOWFKYJNNTESFKUWLDOKPPCSFFECJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QCNCDELTVZNPLAWPBRDQXMVIHMXIHNCZDRLYVESGYRXEPIHRZJCMOMLPUWKXICZESCRGAVMCFPQTBLGPCIEMWFUSHROTZBTEAGJTNHUCYSHYNQOWASELFVRFOW");

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
    msg.setTimeStamp(0.626923704144);
    msg.setSource(53273U);
    msg.setSourceEntity(89U);
    msg.setDestination(40772U);
    msg.setDestinationEntity(146U);
    msg.type = 138U;
    msg.op = 42U;
    msg.request_id = 47645U;
    msg.plan_id.assign("ADZLQQHUTDUKYDBJUMNPQUKAOTVQBZOZXBQTRHTYLWGTSVNFNYEWZOLOQYXLCWDFHPBHRLGMDZHJQCBOUIIL");
    msg.flags = 38145U;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.501049864103;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NHJRWMCJCILECBYHMRTKBEAATNEIHEVQGDXEPNJPXFYDZKIXWFBBWONYVBTYPFRWHCWEKCJDTPTMVQYAQDHZSVSWEAYJSFIULHVNSOURGOMUXJSLUQAXTNRLUQSURNGAMLDPFSUGJUZ");

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
    msg.setTimeStamp(0.700071367057);
    msg.setSource(63292U);
    msg.setSourceEntity(34U);
    msg.setDestination(60547U);
    msg.setDestinationEntity(188U);
    msg.state = 153U;
    msg.plan_id.assign("BRHSLATIWRKQMHJOOYBBEWVDCFFBUJJORVROOZYSUTRQFXWFPHLYMCMRLQVAIAVKNWEKGDCVBYZYTHDUXIFXTDN");
    msg.plan_eta = 1041044683;
    msg.plan_progress = 0.33584588583;
    msg.man_id.assign("TFYGWFMOAOLARZQ");
    msg.man_type = 17041U;
    msg.man_eta = 1263715926;
    msg.last_outcome = 104U;

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
    msg.setTimeStamp(0.648944150269);
    msg.setSource(39215U);
    msg.setSourceEntity(127U);
    msg.setDestination(23682U);
    msg.setDestinationEntity(247U);
    msg.state = 244U;
    msg.plan_id.assign("MMESHUWFMOCEQGCVVZHTXDYZMMRGELTQNBFNVPKLIFIRLICNESTPXCWOOHWRPHQKBLPDLUYABDPXEAGWACKKZGSFEGJXTCMBTYRKSUJRJPCJDRJORHUYZKKDWKZNDVILJVEJZLGFHSUVHFHRTCZQVMBIVBIYBQNUSXYTFZTLOIFDVAZXRBGNOKTGNLHQGXZGQMKAOQUPYMSCUYQMAAYUJIXNNFSPQAWICWTJEORDIAJWVHFXDEWOPSDUSYLXOB");
    msg.plan_eta = -1450326137;
    msg.plan_progress = 0.440494296509;
    msg.man_id.assign("AZYCDDGEGXNHJXNOYIPVPJCIKZYRSNZFSIDXWJGQPFUNGEYKDSBSZMFEZUVEWUEMVBJBLJAGAWJGCROMM");
    msg.man_type = 2924U;
    msg.man_eta = -942901469;
    msg.last_outcome = 19U;

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
    msg.setTimeStamp(0.658480569378);
    msg.setSource(4430U);
    msg.setSourceEntity(41U);
    msg.setDestination(33216U);
    msg.setDestinationEntity(124U);
    msg.state = 201U;
    msg.plan_id.assign("ZDCLTNTDYB");
    msg.plan_eta = -2089953217;
    msg.plan_progress = 0.421673599737;
    msg.man_id.assign("SNOMKMGRLITGEHDMXSCNZRWOZQMOFUEISENKIOKOOISARIBLCBGGUCFADOXPVJXLKDJDNDAJJMVCZZOICTDWHQHLXPNYWNRMYBTAPDCWKSBJPFYYZURTCIZZTSHBPLTENLRPNGTKWQDAYYAXLGEUHGEDVQELGUMQSPJBRUIWXSFQYCUKFMOMVXPVU");
    msg.man_type = 35937U;
    msg.man_eta = -2009316214;
    msg.last_outcome = 2U;

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
    msg.setTimeStamp(0.350387267239);
    msg.setSource(33263U);
    msg.setSourceEntity(243U);
    msg.setDestination(54691U);
    msg.setDestinationEntity(233U);
    msg.name.assign("SEQJWWCKITULGSVCKXJFMZWDBJXIIEEIXQDHMXUZVDMDLVCKMPVTGLNVSYCQUBQYLEJZYEFOTHKVOC");
    msg.value.assign("CMCDBVYBJYPJEQFVGWIFYXWTNJYWJBJDKQPMXRPFNSKIFILEKCFQNCYSBVXXLTRWOLATJUVRJXGNDJEEAAYHUFBOFUOVPZJXZNIAKIDZCUSEMTLMNXOMHLMARHMDTKHAQIITWCXQTROUANCVGLNKUWXPZENYFQZNEBOHDYMIYDZRBGTKHUZWBZWLUVGKISFCMSADERORDQHBGYRACTOHPZUPMLURSSSOPHQGGOTKVPGKAVXHELEBGVZIJDL");
    msg.type = 92U;
    msg.access = 34U;

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
    msg.setTimeStamp(0.225577170125);
    msg.setSource(13279U);
    msg.setSourceEntity(131U);
    msg.setDestination(54826U);
    msg.setDestinationEntity(138U);
    msg.name.assign("HYVWESXUDHOVIANKPMJDVKCVTVRELNTSZBSCUEZCEVLLDDXUJGHDACTBXSJXHLIINBAVBMUMFAJKPLQQNBFMOVQXFZFIZTSOMPWFPXTUTZYZQQZXBQPIEYSPKNMMNDHJYUTIPKKPBRHOFYUZRFXLCTESWTAZTGWQQADKFGJGMWOJOOJIWHRPLGX");
    msg.value.assign("VOPOJHYWASDLHWZHMFAUSSPPRYALHQXBGRRZDSSWQAQNDUYSCOODHKZWNVGBMKNCYLLZKZPKVRIGUNMDLCMIUYPJIEQCHVGGCEATTWXVUTCHVVOBYTGFWTHCPEIRXDOQJFEYMFFBESDZABUNUBXWAGWDLPMZVJBNJRMBNKILOG");
    msg.type = 247U;
    msg.access = 116U;

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
    msg.setTimeStamp(0.938238297727);
    msg.setSource(27061U);
    msg.setSourceEntity(183U);
    msg.setDestination(47009U);
    msg.setDestinationEntity(131U);
    msg.name.assign("FXWNNYASDNEPUIOPORTOORVLXMBAFEUOHDYJIHBFUUUSIJTRQKKJXSVVHKNVZYQHMSMVGNGDFSHBCKLEXPTBNALBXWFDZPYJSCQTRCFYDPXICLMGDGYFZAYJQCOEYPMEQQGWLBSLWCUKQRAJSWIODMMGPIGZRPZEBXLNNDEMXWRRWAIBXKQHRVUJQFANILSKKHHFWCYNOVJTPOITKMDYELLTZSX");
    msg.value.assign("BEYWDSGGAMCXZZDHVLPYNPIYJOFHDCMWKOFK");
    msg.type = 128U;
    msg.access = 217U;

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
    msg.setTimeStamp(0.187034232961);
    msg.setSource(29813U);
    msg.setSourceEntity(120U);
    msg.setDestination(20001U);
    msg.setDestinationEntity(54U);
    msg.cmd = 118U;
    msg.op = 199U;
    msg.plan_id.assign("SQEDUUZRTMEIUHNPKUKOJJYDHZIDQFKEXHKYOXAZSZSIDMTIQORIFQFVC");
    msg.params.assign("HMROOTEKBVJSLAUCUBWTCIBDNWZPGRXNAIDTCGEJOFICBHFFRYADYFGWQDUQSSVHCPVLESFEVTJRVCTBSBWLUFINMAPVGFQYJXKQEUUGOXJYZQYYPNRNELGOGZJQHJMODFBYLKIOPMLSEZMXAIOCHBCGDWPBXAYWTSZLUHHXDQVNESUZNVZNIZKSKAUXAPIAKMEZAHFQWIVHKKWOXQTSPGRXRDRPMWZLCIFUGKDPMLKYBMHCLWOJTEJXQ");

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
    msg.setTimeStamp(0.64373135005);
    msg.setSource(24348U);
    msg.setSourceEntity(104U);
    msg.setDestination(30103U);
    msg.setDestinationEntity(77U);
    msg.cmd = 38U;
    msg.op = 138U;
    msg.plan_id.assign("HVEUYRJWJWQEQRAAKZOLXPNTOHWVQBPJCTSCUOQSGVIBTBGIMUNLMVFYPAPZJARRMYGYQCHVOJOMZWHASBFUBARQYTIXZPFBAGVSLJDBGRPASZUDRYFEWKDYGSXWOXGEQTHDIVFKLNGMDLMIESUWFISJLNIQCWFNBMUMFKVDNZ");
    msg.params.assign("MHPEHJZKAWVXGILJSCYGHDYMODBLRAPCTVMQCNXLLQOQ");

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
    msg.setTimeStamp(0.521208593096);
    msg.setSource(60451U);
    msg.setSourceEntity(39U);
    msg.setDestination(60805U);
    msg.setDestinationEntity(70U);
    msg.cmd = 169U;
    msg.op = 185U;
    msg.plan_id.assign("KOQQMEPTKOSQDLUXZTYHFONZWHPQMWKHIVCVUPJDJNYPNZBDPOWRXOTYAQLUCUATKMICFHYFQECKGQBNRGEUCRETEXLKWSCCZIIXM");
    msg.params.assign("FPRHTDXJFPIHMZWGHDKAYYMKRSSISVGGLAEYPICXZFAZF");

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
    msg.setTimeStamp(0.0096351947904);
    msg.setSource(8960U);
    msg.setSourceEntity(51U);
    msg.setDestination(30615U);
    msg.setDestinationEntity(194U);
    msg.group_name.assign("GOINMHAGSFNVKOWARZQCYSYZIMOMAEHSCGMKKRCFGRPLDNKLIKUJIANHVLBMNGZHVYSSOBFWPXXDQIMEMBAQCYZWTXFNSTT");
    msg.op = 70U;
    msg.lat = 0.456386091057;
    msg.lon = 0.536942110947;
    msg.height = 0.539957912294;
    msg.x = 0.710236357507;
    msg.y = 0.603493571516;
    msg.z = 0.214476400499;
    msg.phi = 0.180455341699;
    msg.theta = 0.0816061524938;
    msg.psi = 0.256935589274;
    msg.vx = 0.0812670854685;
    msg.vy = 0.756495034609;
    msg.vz = 0.512006133127;
    msg.p = 0.193936123627;
    msg.q = 0.934623932042;
    msg.r = 0.111907539897;
    msg.svx = 0.402671750078;
    msg.svy = 0.221695310701;
    msg.svz = 0.776555082457;

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
    msg.setTimeStamp(0.348942791319);
    msg.setSource(49239U);
    msg.setSourceEntity(199U);
    msg.setDestination(2220U);
    msg.setDestinationEntity(20U);
    msg.group_name.assign("SMFPHHZOSSQQNWPLSTCZIWSKJUWNFRKGXITEZXBLRYJKHIDXHRJNYLAPGOWJPLOORBIBTPXCJAZDLOFKWIQQZCJETFCBMMVQBQAYHSFTGUCCNXXDBVUEGNLPURZVCTLAVGDAVVNHXVKZWELIUIWCPECODFHRWIREWXGQGYNLYVOFEY");
    msg.op = 50U;
    msg.lat = 0.655394491867;
    msg.lon = 0.639116215248;
    msg.height = 0.482251813509;
    msg.x = 0.143414907019;
    msg.y = 0.378689831055;
    msg.z = 0.95116076736;
    msg.phi = 0.948323922619;
    msg.theta = 0.225613714177;
    msg.psi = 0.648343165004;
    msg.vx = 0.816039732842;
    msg.vy = 0.651709262626;
    msg.vz = 0.58554337081;
    msg.p = 0.302647360285;
    msg.q = 0.791496099941;
    msg.r = 0.707975967945;
    msg.svx = 0.970825423009;
    msg.svy = 0.725909347515;
    msg.svz = 0.0875374840079;

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
    msg.setTimeStamp(0.222664712506);
    msg.setSource(65140U);
    msg.setSourceEntity(192U);
    msg.setDestination(16602U);
    msg.setDestinationEntity(49U);
    msg.group_name.assign("UFYKBRIUEYAEAAITLEAYVBXSNAAODEXWUOFMXCVUDSCNOWZKQIATFQJYBSHODAIWCPBBOOXZDLQJRVAJGNWMQLXGCZKWQNMLTNIHKSSPHZECTSHOCVMKJTPVGIUEFSQRRJLQSLLNBRRPZDTGVFREFJQTGYFW");
    msg.op = 199U;
    msg.lat = 0.0531408050434;
    msg.lon = 0.624362785288;
    msg.height = 0.7251706193;
    msg.x = 0.402031290212;
    msg.y = 0.93197712225;
    msg.z = 0.574568674733;
    msg.phi = 0.535048242954;
    msg.theta = 0.228006690391;
    msg.psi = 0.894885529694;
    msg.vx = 0.140207927074;
    msg.vy = 0.207793332569;
    msg.vz = 0.119278047627;
    msg.p = 0.885642626565;
    msg.q = 0.438825483726;
    msg.r = 0.69517590901;
    msg.svx = 0.745022682425;
    msg.svy = 0.658936418756;
    msg.svz = 0.378581706398;

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
    msg.setTimeStamp(0.928300956477);
    msg.setSource(8064U);
    msg.setSourceEntity(56U);
    msg.setDestination(52147U);
    msg.setDestinationEntity(116U);
    msg.plan_id.assign("EAOKKKCSTJWKOGMROTXGHBHIYYDFEFZSNNLJNGMQQXKNVSMXRSUGVHIGJULXUUJPHZRLJZXVDAFKXES");
    msg.type = 226U;
    msg.properties = 163U;
    msg.durations.assign("ZDNPEZGKUOMPAQOCXKCETFRSOUFDVFIIYOQCVMHWKFYPVJBBWYKIUDYDHMY");
    msg.distances.assign("MYKTFHHAYKJYQXDBSPKBPGCXFZXHUUNHSRJZTVIMPXSIGDVQFVP");
    msg.actions.assign("HQKXFAITDBRADWTMGXZWRZEXLCGVCWRPUWDHZWRNPJSUFJHGTHTUGPPREHCCFXCZUHTOVOLMELIWWAQFVEUCONXDLNN");
    msg.fuel.assign("IRAWTJITOCVWEYVMGGBXQBMXLCZLVGGOFFUFISJLEYLQWMCQIDAPWWVBRZFTEKREGMYYKWKJDMVTMCSRNBZMSDFASCOVUCDOPKLUONWSVT");

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
    msg.setTimeStamp(0.531323640815);
    msg.setSource(16704U);
    msg.setSourceEntity(13U);
    msg.setDestination(12192U);
    msg.setDestinationEntity(178U);
    msg.plan_id.assign("XPSEUCWVANNCTXRSLYXSGXTYIFLJUQKMJKGHTPVUCUWSTKPNNNFGIBDZKQLIMFIPTSPWOGXHZVKTFOYGBCISLZLWLAVAMQRTRXMNBOBEHIRDFJWYEEASKPLOASYYQHAJVHZHYXDMXDSZWPTCNXJMZCVCKDGJZPGDEDOROCZCQEPOLKEDGPYRJTRGOSVZUUTBBRRMBUOFIUWFIUKFBEQARMHMGOQEVLZHKCQABWVFNNE");
    msg.type = 99U;
    msg.properties = 108U;
    msg.durations.assign("MDYKCUMJECVELECSFJNAVNTYOARRCJHMZSGFTUYJQFWJIPQGDSXXLGTSJUJQVHJSYFHNXZHOOXELBZNLTMIKMAAUWXVZYMIATNWCASCAURUVGGUFTDOWOBVGLRXEPPXWSEGZTWBNFHIJYGGYYBOWEZJOUUKCNUTRKBXIAIIHSFCLBMNA");
    msg.distances.assign("FGGGAXKZCJBYZBKQDDSGFIEKRTKLYGSIXVHEIMEWFTWOMXFRULMWZUNXQOTBNYMFROASVTJEXOTNVQMLABZUHKEXKCOGMPPTBCJHRJOJNKEVZJNUTDUZZGNMLIWFKPOABRSWCWZDQKNAXQPLWOFLWVPJKRQCALSIVPODETPXVZAHDNSFIT");
    msg.actions.assign("RBPWQZANTMJYPHKIVVFIBMHNQWCFULVNDWEYIXKGFADKSUMIJYNXDSPCZWXILKGOSIFKOYTBEYCSFAHVNHTRDTURGDULZSWVQBRBOATLOKCHLZPAHKYAIRFTUWUYVEVVDPWJBCJQRWPXXMDNFFJCKEWGEJUDVRMQSGOUIGNHMSOZAXCEGROTMBQGOSBRYDSHAEUXOZZEJCQLPFNCMMFQJPQJHTXLGNUOI");
    msg.fuel.assign("ZROCJJXMEREBQTOMQLRYNPA");

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
    msg.setTimeStamp(0.952833716999);
    msg.setSource(41830U);
    msg.setSourceEntity(134U);
    msg.setDestination(27120U);
    msg.setDestinationEntity(142U);
    msg.plan_id.assign("TACEUZUJJAARSGQSHCQALBCNJGIXJPSRQZQITCVHAROAUZLXPKYHJMZKZFYFVRFKSXBOZJVAFSFGFHQYPEAITGESVNHTOWSEDOQHEDTLMDSUUNDDWOUWIGXHDMNHWCKTCMKOEDOGYMYZBPVTBUKHNLFJ");
    msg.type = 222U;
    msg.properties = 251U;
    msg.durations.assign("PLKPPUAWITUIZEDKSHTOTHAYXTZIGSQZZWLFSGQQJ");
    msg.distances.assign("FDVIKPCUQMCOMXYXSUTJIGQYYSOAB");
    msg.actions.assign("ZEDPWFRPLSXRDJGBQHNFUZFOKKOQVPYEQCYXLNPTQXWCHRMJVUSNKLUHS");
    msg.fuel.assign("DEIQZEOYKAVFWFTTFIFZFUZBPMEKGRIIMJEGTKAVYXMZJRVBZBULCURVXINP");

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
    msg.setTimeStamp(0.77667694759);
    msg.setSource(39682U);
    msg.setSourceEntity(81U);
    msg.setDestination(27165U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.287868854569;
    msg.lon = 0.325730631572;
    msg.depth = 0.38371928921;
    msg.roll = 0.273213012838;
    msg.pitch = 0.805174856385;
    msg.yaw = 0.525512247204;
    msg.rcp_time = 0.554848847007;
    msg.sid.assign("IYPQXNUXRBWYDGQXYLADKSGGWSUPILPMNDFILPCNGOTHFHCRSOAZGBTIZNQAKWOYJZTGISBAFJZTHIYDQJWBGVSZEHRPQIHDUXLABCJTHREXXEPFPHTUMVKLBMBXLKFMYGWWULNONYNKNYWUDGAEHCMVMXTFKPJQVEKLZIIECQFYDDLYVAMMKJOAVUBJQZTJSVUVEZFETSBQQOVPTCUWWFHMJSKNESE");
    msg.s_type = 25U;

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
    msg.setTimeStamp(0.934636769804);
    msg.setSource(51835U);
    msg.setSourceEntity(195U);
    msg.setDestination(14331U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.459969713386;
    msg.lon = 0.600328102301;
    msg.depth = 0.502932015155;
    msg.roll = 0.62490037132;
    msg.pitch = 0.473390536181;
    msg.yaw = 0.430557724614;
    msg.rcp_time = 0.679306753349;
    msg.sid.assign("MVGTBAUMAMIGIJMTFYWEMBTTJFDYKBYOL");
    msg.s_type = 172U;

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
    msg.setTimeStamp(0.73327197778);
    msg.setSource(26160U);
    msg.setSourceEntity(79U);
    msg.setDestination(41482U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.480502895586;
    msg.lon = 0.833273364973;
    msg.depth = 0.264047667392;
    msg.roll = 0.175448312167;
    msg.pitch = 0.638118360454;
    msg.yaw = 0.963890688027;
    msg.rcp_time = 0.0357732327331;
    msg.sid.assign("KTQWTLLBGQRGVOLYXHLUOODZUFWJVQZDOBEPBKEFMEYUTFPUXQIVYZTJAPBMFNUCA");
    msg.s_type = 76U;

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
    msg.setTimeStamp(0.606097625378);
    msg.setSource(59779U);
    msg.setSourceEntity(176U);
    msg.setDestination(37401U);
    msg.setDestinationEntity(200U);
    msg.id.assign("ZXTLRYLLHLWRQEOENRYDGLHCEXOOGIXBUAFWBGBVSDWFIYMOEPSYVAAWUXIZZFDVOZSMECOUIGDXBIJVMUCZRJHCVSYOTXTWPUATTNLABKRAHRRYTTPMDCUKVSDKF");
    msg.sensor_class.assign("EOSISOWBFVLSIPLEZDTFRRUGCIFZNXBGFCCN");
    msg.lat = 0.567754858078;
    msg.lon = 0.0072044472429;
    msg.alt = 0.464733911074;
    msg.heading = 0.322163355469;
    msg.data.assign("NNOMKECGYDTWRZIESJVSEFDWMCWELCULDPQUHYTLHQVOPJPYHVDOXZBGSDMVSXQURLOBPKPZGAKPTOMKDXQGALIHARBGCSIAJVNZBGINEWQAOUPCSMUFSBFEKTWCKU");

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
    msg.setTimeStamp(0.983093686948);
    msg.setSource(49986U);
    msg.setSourceEntity(62U);
    msg.setDestination(60924U);
    msg.setDestinationEntity(103U);
    msg.id.assign("ALMIHBVPNSOTQEQMSILJOJLTMICOZFVBULXXRFKSTJYXKGXIYJMLRVCPTVIDPCCGHOGNAUHMJFGSXEQBBYVXMHBUBKYUVXNYWPLAUCXEAMCFIOFKOFNSQYFYLEBNHQAAVCHBGPLRHZNWHZDEPUTTJMD");
    msg.sensor_class.assign("VXOTPXNUCCAKTUHQQLHTBSZPYWZZRTYDLNGISQIQNETXCXEDNFCABGMLLEOZMVAJJVHGTZOWFHPTIFPMWPIDQVFWTTJDIEHHCVKGRAWDBUONMNYFIMWXYGUMAVZCKJUYFQSJDYPQLIKGCORBZLVVKLBESASIMEOSKAUCXPMRFCRXLBHRUPVCSWQERJFZWHLGROLJMKBKKDIXSBEGDSGUTMQYHAFDWHEOOZD");
    msg.lat = 0.886879694906;
    msg.lon = 0.991933192593;
    msg.alt = 0.85984333431;
    msg.heading = 0.571499340484;
    msg.data.assign("OAKMNWGTFSWWXBUUPMOJAQQKJPEBLSSPSRWXXYISJGNZNMHARQOIWCHGKZDHVXVLAPEVSZCULAMFTLPGVSTMGHCHTJYNOCRPQQWGCQVYTHACSTNRFFUDUJZOODOMHFKEWGBDDLUKRMUELCJIBYGBNXFDHOPPAEJEDXYKTLOLGPT");

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
    msg.setTimeStamp(0.717829314145);
    msg.setSource(20767U);
    msg.setSourceEntity(183U);
    msg.setDestination(23560U);
    msg.setDestinationEntity(57U);
    msg.id.assign("QQGPSDEVDBMGGMIUJRMTSZNTLQXLEEUZSXAILTRHEPKWOULUJERMWJYBPZFFDDRXTWODYCNOLSDJABOCZGOEPBXZIPEIDMDGYURCQHXWQUKQSOWWLFIOYLCDVXQCFCNFIRYJBNAHBQBLFMTPRWBVZFOWLHBIAMJZAKSPAKNSPFNXIEYVQSMHMNVKUVKDGGWJNMKRVXOYQ");
    msg.sensor_class.assign("JOKCCHNVPUGVMUEHYAKTZZOLNHLVJSMDLBFNTCCOLMBLCQJQUYVPQGUCYRLYUWGQHIIQSNVZOEAKSOYJCWVKVKYGBTRGPSWATQDKVBJBNDSZSEUBIFAYIOAQGLXBRQSXADHOAEUFABHJFUMWJLPANFOCOLYPGZFWIIURREZNP");
    msg.lat = 0.484141313223;
    msg.lon = 0.295734774202;
    msg.alt = 0.799555770399;
    msg.heading = 0.654098932209;
    msg.data.assign("MAHJBMYUGEAONVERCSKW");

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
    IMC::AisInfo msg;
    msg.setTimeStamp(0.381526369744);
    msg.setSource(10113U);
    msg.setSourceEntity(7U);
    msg.setDestination(51654U);
    msg.setDestinationEntity(174U);
    msg.msg_type.assign("ZVORRZBGJOKBGLJSXVAHHLAZIEF");
    msg.sensor_class.assign("HKTPAKZUCIMFTQUDMLBHKHVBTVCYFODFBYTIPJYXCBLCAIBMSDKPDHBVJEZVACOQLJTUOFGMVAZDIOLANGMQEIKOGHTYDSHGXNKGALKCOIQPIPHDEUOSXBLQKWXSNYPAPCAUVZEKUSYNSBRPAQJBUWQWRZGCVLWWSGQLFZUNOMYQMRGGQCSJIYAVBPVNXRGXLOKDEFFXXERUFEJDMCZERWJJNZRTUMXWFHIZRHNITNLSJXM");
    msg.mmsi.assign("BJYLHSLIAPAMCLYESQEPRUZUOINKRMCCWRUKYWHAXFYSMQUDJVYALPBUXFKHMBLVFFPGJJPWVNAUSAGKRZVKBVJIJVYQGWZIQCZDQQTNUDDPFKLRSXFGXCLHVDNEBTAIDEWRPNQTMPVBGMKXCAMVHEHQNOTIRRBXCVCBPNSIUWTRFJZGXCNOGQFDQXTTWTOJYMDGOEIOTJESNDIYZKLXZZTIMHXBNOOWKGSLEKSYEFBO");
    msg.callsign.assign("OCYVJOYXFSGDBGLSOXWKARCYHPGZHTKZRLBMSYXMIDERCJHDTZHJDUBQLQCNVMRLOPLVOLNPVEPHSBBTERIFJKZFUNFACOWFMKPEPXAFWPNGULRAMIQKWUAQVOCGVDRVMBNGSYPQBIJYDDKGILVIAUNXDYTAUDYSXYEZHUUQCTUCQVZWNMSQGZEXJFSXENRNMJMKVKRHABKQZWAZTEXWHECHOJFUJQRISHTIETSI");
    msg.name.assign("AQHEOGKBXCODBTBGKXRKKTDOSXYJSMELSYAUBZPBQVDXNQVWKSBMAGEWTWKXZVMRTHWDXDGOHNDFNVAOQXJRHLOSEZJFCDAGUVLYHYWMTKCPTPJIYALFCLZMYOEOMHUIIUJMWAVRG");
    msg.nav_status = 16U;
    msg.type_and_cargo = 185U;
    msg.lat = 0.702482885379;
    msg.lon = 0.661719430983;
    msg.course = 0.798296449916;
    msg.speed = 0.143955682672;
    msg.a = 0.171636444797;
    msg.b = 0.286338819134;
    msg.c = 0.591598801885;
    msg.d = 0.348643127181;
    msg.draught = 0.820547185651;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.630022737601);
    msg.setSource(43204U);
    msg.setSourceEntity(31U);
    msg.setDestination(11603U);
    msg.setDestinationEntity(120U);
    msg.msg_type.assign("OTTYPKPAQBLMLRJBSAHVWYWCJDHAJSVQLZYXDBOQNIKMVHUJRLACZPLGIZSXTFCXXPQYMMVCUNG");
    msg.sensor_class.assign("IGMPPNBUHJIHLBGTMOAFSVJEWYBTTYDYOEQGLN");
    msg.mmsi.assign("SJSVDZRTUMEDLLNIGYJBPVHCRBCTBNSLSYZACNFIXPKZOOLCMHWHMVKFXBRHQKTFVBTMJGGZAUFMNDUMATNVWSCAIVJUEKDIWMOWDGTSUYWHQYOLEZPQCJBRRRCZEHXJQSRVIWOCWX");
    msg.callsign.assign("MJIZLYAKBKWOUXQKBHULQOVDKKDJPMHODIEHMEAFJPVLKUSWLUCMOTOLSJFFGLMUODXCQHLRTRINGHQFNZRWZCKITFZTOUOYYTAJMRSLKAXBXQHRIVTBDYXAWGCREAYBGSIVDXZOBTZWEPJBMIKHOMYSMMADWDWRGLVTNXBVWIJSRPYFFXGUTYAQXDGFQUSPBCFNBGPQEYEUZCJGUPSAECKNV");
    msg.name.assign("TWMJCJJCAYDQQLFVCAJTIWPPPLKMMNSRGANJGZDWCSCPUKFVOQDZKUXCEIBPUQTTVXLOBOMTHNRUHHJROEHLAOURDDPNYMXERSRBPKVACBLGXLOWJIFNKBYSVYZFFSYMYXFBQWRIBRJBZYINEEVXLIGMPKNJFDNYHLDWUFLVOSQXGKZQTTDMHIIRVOGM");
    msg.nav_status = 40U;
    msg.type_and_cargo = 246U;
    msg.lat = 0.780140183063;
    msg.lon = 0.0564204476146;
    msg.course = 0.670819305169;
    msg.speed = 0.959973743815;
    msg.a = 0.149984567033;
    msg.b = 0.789790298897;
    msg.c = 0.959245928141;
    msg.d = 0.90328539546;
    msg.draught = 0.740659275762;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.862174267403);
    msg.setSource(28652U);
    msg.setSourceEntity(158U);
    msg.setDestination(59799U);
    msg.setDestinationEntity(80U);
    msg.msg_type.assign("ZBIRBNXLQPCNSKJSRSDOWEWUQLVKEQTOCWDHIDSYXLMBDACARYFG");
    msg.sensor_class.assign("PUHFDIDGLVYTEGHOWBZONXBUKVOSUVVLSHIFDGPAJVOHLDFCZFZXHSVQKPORBRQDRMTBGMINRPLQKLDKAFDEBENUVMKAJDBPPBEGCXMVXSYPZQLCSYCMLWIHQFAJDQQLWRWRXWTVZNWZYFIESQRNUVJTEPNSCETOAAFHJXMZAUPITYAFZLKQRYWLZJCIHTMSYKHKXYMRDEAUNMIGJXPONQWXCZK");
    msg.mmsi.assign("YMNCFYUVXGQVESIJWKAJEMKSE");
    msg.callsign.assign("CNHUWFJEXQDSOJVQOCRVTYTLOFHTMQPBUXGWNBHEPEONAJBFIAXGDRYZVYHIQFMTCSWJGDJNKZESSVCQHEZDDQAWLJDKCUCPKTTAGZDWJTXZHYVMFVOIEICKOBLFVERHRMFPSJSGFWTJGNFTVBWRXZAFMGNUKMADRSQDYGUENIWILZAECWKKJXEQXIHPOZIYKRML");
    msg.name.assign("VLVGUAZRNNTUVXDFOIWARNLVCMMLVFVRYRWXQBQQQLDERCMOPBFCXDLQEOEGSPGVHBGYSTF");
    msg.nav_status = 7U;
    msg.type_and_cargo = 130U;
    msg.lat = 0.366061604422;
    msg.lon = 0.980039729262;
    msg.course = 0.433399668256;
    msg.speed = 0.737812822592;
    msg.a = 0.585243611658;
    msg.b = 0.0377769047192;
    msg.c = 0.946283157464;
    msg.d = 0.862274491945;
    msg.draught = 0.613875922009;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #2", msg == *msg_d);
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
    msg.setTimeStamp(0.0191946011109);
    msg.setSource(15876U);
    msg.setSourceEntity(186U);
    msg.setDestination(43167U);
    msg.setDestinationEntity(244U);
    msg.id.assign("XVRXDGTWASNLQOATIZBXRVJIEASFNDHLTHZRLKHIHNMINTPLZUNGGSJQYPVHKGJQVEUDEPQTDYFJFYUESRNWPHWFSCWGXFIGUWZFLNLQIXBWOKERQELUVXRZSTHOBBMMSWKLWMAL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ABLDVRHCZTMBRKGXFZGCHCBDUQPJMIRMSVHBNQCYLRNBQWTVYFOXPADEBLSOCFBZRKMMRJOISVQUTHYTSXAXAPWBXUFKLZSREAALUJMZPFMJNPTTIOTUWGNRXXXNUSNGHZOAZITEOAVKYESAJJDNBCNFYWCEXWIHDJHKLQGPTOVGYIPYVERWUYDIPHCZ");
    tmp_msg_0.feature_type = 253U;
    tmp_msg_0.rgb_red = 152U;
    tmp_msg_0.rgb_green = 40U;
    tmp_msg_0.rgb_blue = 140U;
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
    msg.setTimeStamp(0.462543514);
    msg.setSource(21457U);
    msg.setSourceEntity(12U);
    msg.setDestination(62472U);
    msg.setDestinationEntity(207U);
    msg.id.assign("YEXSTASPUWWXFBRGGDCJLXTIGDLZCYEYYBVOONEEVBOAJLKCDENJRFIASXTAIAVRWTHCBGFUFBHNDWHTQAQXKYGEHIUSZNYHWSYCAPCGHOGCQUOTOAXCIJSLZDJLUNKHFQONLMBXFRVIMDQD");

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
    msg.setTimeStamp(0.0682647269137);
    msg.setSource(64994U);
    msg.setSourceEntity(113U);
    msg.setDestination(44820U);
    msg.setDestinationEntity(186U);
    msg.id.assign("SATFFNTLFWMMWTCXYQDDEPCDYZFCKPVNMWTEUNIEZVQUWPQCFWRPIHOSJALIFVIIHRKNYQMGZIMTYILWMFSPMSYQGBTTNRJZGNCU");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TIKDYREPQROGGMBHJQHNRAJMADZWWKISNOOOJYWKBLSFAOTNFGWQADDXBNONRENWSUCZJFJMBBUSEIVCVPDMMQKFQDBYVXBASFECPVMMVQNOXBQPHCPGRXNIZKFWATYCCRRCDXIUIQKLNLVWVOETUTADYWGPJHCRAYULRCYGFKHHOUJFENFAYDILYPXZAGDMMEWPVXO");
    tmp_msg_0.feature_type = 98U;
    tmp_msg_0.rgb_red = 163U;
    tmp_msg_0.rgb_green = 108U;
    tmp_msg_0.rgb_blue = 117U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.370694213599;
    tmp_tmp_msg_0_0.lon = 0.747340576225;
    tmp_tmp_msg_0_0.alt = 0.307108114113;
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
    msg.setTimeStamp(0.368057856141);
    msg.setSource(16664U);
    msg.setSourceEntity(45U);
    msg.setDestination(16138U);
    msg.setDestinationEntity(188U);
    msg.id.assign("RTKEXNXFLTRCIUSYPECQGIMHTQMZLQZNDZFIASPZWJGMYZTRLKBSCKCTUZXGPCPEODCICJLAUVOERQZRLSPWLNJDWMEHLKXEXFJMRVEFTQGGRLOYHPDUDOMSMYVHKTIDPHKWGIOXVHEUBMJSXIYOGFOESANIWYWDUPKBNKUAOPVYSVDARHFICKXL");
    msg.feature_type = 165U;
    msg.rgb_red = 186U;
    msg.rgb_green = 197U;
    msg.rgb_blue = 98U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.217596950438;
    tmp_msg_0.lon = 0.0602407881959;
    tmp_msg_0.alt = 0.115456521867;
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
    msg.setTimeStamp(0.568454081262);
    msg.setSource(61965U);
    msg.setSourceEntity(146U);
    msg.setDestination(52767U);
    msg.setDestinationEntity(191U);
    msg.id.assign("KOEDAIZAMCZNSCFXQRHRVEQMEDHLQPGUGXWYOSBJKFTWTRKONKAWVZDXLXELPLZKOQKACLHMDLTZCUFXMXNJVUWLWIMQDSCWHKMRACUKSWBGDVYFNRXNVYCFEIIJUKTIPFCITELSWOPJYTHZZOJFIZYALBVBNPQQGIFTSSOJDPJXDBYGOUUNOIRLRGTACDMBMGGSJMEVEWWXVYYRTRMUAPPB");
    msg.feature_type = 150U;
    msg.rgb_red = 73U;
    msg.rgb_green = 72U;
    msg.rgb_blue = 220U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.358008029288;
    tmp_msg_0.lon = 0.4886166731;
    tmp_msg_0.alt = 0.404949138931;
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
    msg.setTimeStamp(0.0853516502998);
    msg.setSource(46920U);
    msg.setSourceEntity(91U);
    msg.setDestination(29763U);
    msg.setDestinationEntity(58U);
    msg.id.assign("SPOKALOFROMFRTKDZGLWQZZHXFCXEMLGUQVVANTHZMCB");
    msg.feature_type = 251U;
    msg.rgb_red = 16U;
    msg.rgb_green = 48U;
    msg.rgb_blue = 142U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.753197008483;
    tmp_msg_0.lon = 0.257591053161;
    tmp_msg_0.alt = 0.424691026684;
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
    msg.setTimeStamp(0.979721330848);
    msg.setSource(63564U);
    msg.setSourceEntity(134U);
    msg.setDestination(29097U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.108962047504;
    msg.lon = 0.113100882508;
    msg.alt = 0.0521973516855;

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
    msg.setTimeStamp(0.970073943116);
    msg.setSource(35834U);
    msg.setSourceEntity(126U);
    msg.setDestination(22939U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.60855166197;
    msg.lon = 0.41530979258;
    msg.alt = 0.643390149404;

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
    msg.setTimeStamp(0.161301132826);
    msg.setSource(22591U);
    msg.setSourceEntity(94U);
    msg.setDestination(50669U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.568191573989;
    msg.lon = 0.135447920414;
    msg.alt = 0.557139977378;

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
    msg.setTimeStamp(0.970785628794);
    msg.setSource(65404U);
    msg.setSourceEntity(239U);
    msg.setDestination(10537U);
    msg.setDestinationEntity(75U);
    msg.type = 62U;
    msg.id.assign("XAQMFYXKRCXEYEKWQFUDCLCIIMPEBHPCKEFXAYIRRGWOTQLCXWKVJFZTLNRWBYDYWCWEHLOHPTZMHGMSZNBSZBNUNQLVNOTATFXDPBSJLNJILHJSHOFJWOGLJCZKXALQFAIHROMPKDIKXDIUDJBAGZSXSZEVHQPHGMFNVUTIAHMAUKQPRQMSJWRCAJYEVFNNRUTUEDRYQGUEYSFNZVDPVYUMTKOZDTGBEOW");
    IMC::PeekManeuver tmp_msg_0;
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("FUDZERHIQBBPJHKEZMCPBKTOBTXYRANWJVQKGZINVJGMSRWHPCBMHTMYXXFLZMIRLZMZAKBROEJIFQHJVNVLEUQLJYRSNHSCOGBVFAWAGWNNISSHKTPVYNUJCYYGDRHKSQWLCWERFPIAVUJFXOJCAPSODTXTYELOAISDGDDKIMGQGKDKWOQLZECGXHWIUVTTSBFEZO");
    IMC::Dislodge tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 33990U;
    tmp_tmp_tmp_msg_0_0_0.rpm = 0.193472357048;
    tmp_tmp_tmp_msg_0_0_0.direction = 110U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("OABVITEYPJZELFOXS");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PWM tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.id = 104U;
    tmp_tmp_tmp_msg_0_0_1.period = 3394636367U;
    tmp_tmp_tmp_msg_0_0_1.duty_cycle = 639443586U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.man.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.265280364764);
    msg.setSource(21156U);
    msg.setSourceEntity(169U);
    msg.setDestination(31247U);
    msg.setDestinationEntity(123U);
    msg.type = 151U;
    msg.id.assign("DCMNVBPKUUOOAUJVMFNTCMXAJHIKBONIPZQGLROZWBRAUR");
    IMC::AcousticStatus tmp_msg_0;
    tmp_msg_0.req_id = 43251U;
    tmp_msg_0.type = 243U;
    tmp_msg_0.status = 128U;
    tmp_msg_0.info.assign("WATRHDWAHIQLLWXBIXPIPLPJKERUOMAPHMSZLWNWZKJRECWUJMGEQOXGMFYVJGGNAIOORKWMJBFAQULBOHLPLMHCSCDMUTBDYZOTFTWCWHGMGYUFMGYOBJYBFSJ");
    tmp_msg_0.range = 0.261134742579;
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
    msg.setTimeStamp(0.558690150189);
    msg.setSource(45206U);
    msg.setSourceEntity(50U);
    msg.setDestination(56745U);
    msg.setDestinationEntity(130U);
    msg.type = 25U;
    msg.id.assign("BIEYTWRBFYESXJFQDMYNDHVHXLTRLXBJRTNXIWWYNFVWAFGNNOSZWJZAHYIBNXZKVORTMOTUBXHKDMLMKHIAMTEPMHOGTUWRSFZHUKDKBEJXAPOQSCOGFBZSLFKLLBTGVRUDYXPRKAVEGCCIPIAKSQAMJJRJSNOONJRSZPYYBTZAIEZJWGUZKAREYIBMCUOPQEDCUGFPMVWLXOHIAQLFMVHG");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.255199308349;
    tmp_msg_0.off = 0.77399950214;
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
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.364807341702);
    msg.setSource(11514U);
    msg.setSourceEntity(27U);
    msg.setDestination(24565U);
    msg.setDestinationEntity(220U);
    msg.localname.assign("AERACWTRJCMQGOLYKWFLOTUOZWPEGJUHJSVOHIMHZFVWYXUGUKTXDTPCKAOEY");

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
    msg.setTimeStamp(0.878187148018);
    msg.setSource(64601U);
    msg.setSourceEntity(127U);
    msg.setDestination(16245U);
    msg.setDestinationEntity(63U);
    msg.localname.assign("UMCFGYNQEONWAUGLLZWSXUQEXGCYVNCPHNRXSTXRGNJMWBSQQIOBXBBMZAFIYTOLMHJHMERQCSZZUDCVEKTKOJECKMWRTGCWJPJGVSZOVORUVGHKTFLKMRPNAZNPIEHLPMYPLGIRWVVFNZHDDPUMYOCTTYNSXKETFDAKICUJBAJHULDQLYOIYEMHBQISQFVOEGBYVSBADFR");

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
    msg.setTimeStamp(0.317086125698);
    msg.setSource(59421U);
    msg.setSourceEntity(240U);
    msg.setDestination(45817U);
    msg.setDestinationEntity(230U);
    msg.localname.assign("TOYOWZXERBVGQLUGEWZNVLZTKSDDSGYTBPDCJMBADEPMHHCXBESVABRKTMSLYEVOOYNGVBODUFIUMALWRTAMCQLHKADLMSFMNWNCSBQJTTPQXWUAALYVJMYQIGIZRXUCKPYTNWXYOAFENQGRZWKHUOMGJJCGQARXFIJPZUXJFGRWEPHKVZFITKSULPKIQHZ");

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
    msg.setTimeStamp(0.580095370066);
    msg.setSource(36432U);
    msg.setSourceEntity(50U);
    msg.setDestination(8762U);
    msg.setDestinationEntity(24U);
    msg.timeline.assign("OAGXXCNHPQERCCKMFKYLUXTOSFRGUAFZEYVAVMBRPSQIVLUWCCDIOWWDZVXPUGEMTNOXSFTMUDYMMEHWJSILHPRZJSEOXQABCQQPXRVJLYHONWLDJOQ");
    msg.predicate.assign("ZBNXRWHHSPSJCTUQVGAYDIKGBUSELLDWDLZ");
    msg.attributes.assign("DQWAMPRLXVFLESUOWKGQRULHJGFYAXAUMAJHITIWFARPULVWTDCCIQUCZCYSWZXVPNWNIYBXCJSCPVGYUOIHQRINXHDKOVGCVRRHEBVZSJFSLPFGYLGFVHBIFCCODBDNRJFKKBYB");

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
    msg.setTimeStamp(0.724279959417);
    msg.setSource(31750U);
    msg.setSourceEntity(222U);
    msg.setDestination(38005U);
    msg.setDestinationEntity(29U);
    msg.timeline.assign("EAYYLRJNQIGZJKLISLVWULVUBFUVOPMPJISYWMUNCSAQLSAJCYDRMVNDVOJHFWKNYIOPEHFGDKEWRFOLBQLBXTHXSHKVZEXWAIQPMPKTLDPZSRMZMHXZIDKTGGVRCXKLAFRIJAEUJNUXDZWIAQYBBZBYBSSJDMCAXRPO");
    msg.predicate.assign("RDNSKPSZMHEPLQWRVUERANYFBUTBCKGSTEQVZIGMLFRRHAHCWAOO");
    msg.attributes.assign("SHGZHKXZWJMFEGGYFOLHSQUCNOQTHSYDZXMVHDRATGXUPCHFEEPQFKBCBAJVEBFVRDSFVUVUAOOJDXRGQGCZTNNGXKMPMSTTOWOEAMCNJRNXLCXZEWCUWPYZMJLPWFHMUVKTYVDQLJIASLCBUEFWSBTNABIILVJIPCHFBZKDSQJVN");

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
    msg.setTimeStamp(0.370473902896);
    msg.setSource(41615U);
    msg.setSourceEntity(188U);
    msg.setDestination(29480U);
    msg.setDestinationEntity(124U);
    msg.timeline.assign("NNYWMJCAGKWIIIEKRX");
    msg.predicate.assign("RQQBYFTLMFOICYVONBDJVBPVIVAIOWHOVGSEE");
    msg.attributes.assign("YWOIZFZNEHGGIJCCKYHGBBGKXUEUXMDNSNWAUCIUMCRQILPJJHABJVSYUABMGCWGXBKOTNMEXSXPHHTXSDTCORPBIKPEYAVFONYNDZWDGJTRE");

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
    msg.setTimeStamp(0.532185996108);
    msg.setSource(62814U);
    msg.setSourceEntity(75U);
    msg.setDestination(12539U);
    msg.setDestinationEntity(30U);
    msg.command = 202U;
    msg.goal_id.assign("KWPSDCRSVDJZBCWDUSXFAIKUPLQBHEBUQVCUVEGXGMYABFO");
    msg.goal_xml.assign("OTCBUXDGKCJQENNFZCOQUNXNKEL");

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
    msg.setTimeStamp(0.714429221907);
    msg.setSource(62434U);
    msg.setSourceEntity(18U);
    msg.setDestination(26481U);
    msg.setDestinationEntity(24U);
    msg.command = 131U;
    msg.goal_id.assign("LNGLOBVDBZNVYQHRLBXRQOGCLOJKJUZWTJFZDKDGGPUUCKIYAZMRXHJWUEATERFMTAQYNPIFABGWDCBXXHFJDXPPNNCNAJFMGMDCMFSEHFQITYORNEBWNBGHTGDETYBAKCVHRPKVBXVQUWFSSMPKIYXPQTRSHKVILJWKGLTLVQRASRMWZYWEZVXXXLOYSJMAZMEIDIOJOGNCQKHREAYSWIUTPZMLCHPJLWQZHNYKOQPOCUUASFUTESUEVSBDC");
    msg.goal_xml.assign("GCJTPRIYYHLBGEQHKYLFSKMSUTTWKCPIIYMWHRGXGEKBDMWGTGHJBDRQYMORLTNEQGLWLHZCOHAIZXVNNQXJWXAPRFSOIUNOBDJCOZAGYUMOUKEIWHHXQNAJXCACVVFFWO");

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
    msg.setTimeStamp(0.0407474143226);
    msg.setSource(53537U);
    msg.setSourceEntity(9U);
    msg.setDestination(16141U);
    msg.setDestinationEntity(163U);
    msg.command = 29U;
    msg.goal_id.assign("ZPVLTQGVASVNWELPXHYQPUJMCNRIELWDUPKMCMHJMCXSNGKFTGYBUVLSROCOQQCCURAVRVPNDHRMOHHKNRGIANTELSXPVYYGOYFMSKBRPUQTXVJAESFRQGOX");
    msg.goal_xml.assign("BASEMVMPAGSGONLMULIJZYQYUHRKCBISDURROGRXLFEKNYSINUEAHBPINAFJVGKFDVBYUJLTQYSZBFXEIGLQKOMRMOBEGJOAERZJCSGPKHTXVZLCVIPXFJGBTWPXAPURXSQYZCVXZPABCFEWNTEHZDOCJLPVLFECMDTELVTUVTUDSDNCNNUWYXAVOXGQHQIPUSYASHRWBLYIRKKMCFFWQJIWKYKCBHTWDKMIWQOOWNZZDQJTRFMTAWDJDNHOG");

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
    msg.setTimeStamp(0.707778119459);
    msg.setSource(61827U);
    msg.setSourceEntity(141U);
    msg.setDestination(65286U);
    msg.setDestinationEntity(195U);
    msg.op = 112U;
    msg.goal_id.assign("ESEZZGTRATILLQRADOEKMGATNFYTMFNXLMSUJFVHAJZHPGDYRKWISQJATICZNUUZCL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CZOVIOOKXQNACDTZVOUXGSMFTLOBGPOIRCVODZHRCGNSMWQDSEPWHDMHLUPYPWJUMPZWMVXVQXMZYODSJ");
    tmp_msg_0.predicate.assign("BDUEJWSTVCBKIRZGJCKUPIQKAZXBYZOHYGMLXDWLMPXPVOBMWDAHSWTPCOCGUGFIEMRIPVOFOIMGDUJGVXILEEFFPGRM");
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
    msg.setTimeStamp(0.940869102926);
    msg.setSource(5363U);
    msg.setSourceEntity(239U);
    msg.setDestination(60802U);
    msg.setDestinationEntity(54U);
    msg.op = 242U;
    msg.goal_id.assign("ESABLYDCDEVPSUXTCFHSWUDCPSCRECQEVCVNHGBMFNTTYWHPUKQUWRATQAYZMLBMOXDGWMVTXXDNKAAKMAZJPKVZCSUJHOONIJLQFDNIZLHSFTVYRCEJTYQNIWETGNRZUWIYJIYWMWOPZQSQBNBPIXVIRAZFBHGUJBXZEGZXSRIGHJZLHFEDQOYKLFPVAUJVBDTKLPKIYFN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JMNZRAGCPLGFSNLPIOEETMGHGFQAGBOVIINGEYYCNDJOBAHNCUVPSISYWBFWKFKVWJWWZBLILPCKLEKZMTYLZSYBYFBECJRHJTOZJNXXWMVUQMDRZTUNQHEQACDKMVINEDJQKAFJHDJGVRTMIBUYMMGQRRWTOTAKRLZZDOLHSQETXYQRXUDWSSLXDHPXPPXVRHOCOVDKBGIBUAVCXMBDOIWTYFCPSPFSQNJOL");
    tmp_msg_0.predicate.assign("ARYEFRIHSXFBOQCQGLGRAFWSLVIYXNJJBEEDBYPIWZTGPWBNYWJVUZDHAVWTXPTCBKFDIJGQSEHRFMGMOEBFJRSCAMTPQJHFYOISLUVKAQPIIDCNNWKTTNKVFONGQTPZMMMKPZWSRVJHRAPNUCBXGEAKOLZRPHUZIMXYUKVTFVMGKPVTEDBAUBXZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LMICBOAPOFGMUOHAIYWSFTEAUCSBKLNGZXYXIRKCKKEDJFRISQWJVGVCTZVRDKWETWCJDKAQIFYAWHLPLABXVEXUBNSMXORYHATSYPKABUNVUNPDTMLFSQUZC");
    tmp_tmp_msg_0_0.attr_type = 101U;
    tmp_tmp_msg_0_0.min.assign("UNVNBCDXGHKKELUGDXZGNHQPVTEVTDKDMACIRPSIMTIBLHPGYZHKRWHFJIIACVCVMTAYBXWGJBWFPFQDQRFJZXYEEXXHLZRQSAKWLOHCBVMLHJUTDNVFPBXFRRGPSUYANEEVKPSKYAYRRNBMBLJYJQIDRPMOOCNHWOQLWECDXITOTLXZOLZTOCIQUJJTEUOSXOYSRC");
    tmp_tmp_msg_0_0.max.assign("HHXEGKQAKXVDLNHFSWLSAEYUAKHZJTIYJMPGLJUDJILOTGXWHTAPNVWGMEWBUDGURJPIWAFQRLFNKCNIUVOGRCXBMIFSNIJXRZESDPPTUBGMSYLXPPVDHUCFRZBRWZHFOUEQSRYVZGYAPPYOPZFJLTWOOHXBD");
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
    msg.setTimeStamp(0.867048428631);
    msg.setSource(49763U);
    msg.setSourceEntity(134U);
    msg.setDestination(16743U);
    msg.setDestinationEntity(221U);
    msg.op = 183U;
    msg.goal_id.assign("NSEZXBZHGJXYLKIZILUKHINPGSGHHVEVJMVNOKZSWPOBZIZIEUDNBOMLANJQIBIJQDYXASPNLSJRAVCRGICKUAQQLPZQAESFWKMZUGHDESRDOLPNDLGDUHLHXMDRHTMBWEVFWEUCYITXBFFTTCTSLXKPJYTARVOXOWHRQXGMXNWWPHCYOEMCBTCEYFFQLUKBFQBSOXCIVUJATTAJPMVORRKZTU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RHNUYFQRMBCNMPEJASYPOGDRZKRWGNPAAUJKUZJOMVEPVSRBIGFJBXKTTQKHWJNHVZYSKXBCNIBYHLJWOQAXCNBZTVSOMYFZLKBLVPCTMNDLFWFPXERJBQFOVIMZSRDNEBLXUUVRJHHXZOSMGWDJUCEHGAWFTTPPYYDSZESFGIU");
    tmp_msg_0.predicate.assign("VQTXYBKCHQCIFMJSYLQKTRWHAMNZYJOLXMCDIUTBYFAYRMKKBEKMCGYOACNSBADOGHNJSZDVVPMCEWBPJWXRTPXEZLJIHDUJLAUXCDLRPDLNRENIMKFUIQBDOLIRNLBNAVGWIVYPXXFDQ");
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
    msg.setTimeStamp(0.507899857027);
    msg.setSource(29766U);
    msg.setSourceEntity(105U);
    msg.setDestination(50961U);
    msg.setDestinationEntity(138U);
    msg.name.assign("VROQTQFMDERJAKKNZJDPBQODPOLZSKHESWKEXGDTFRN");
    msg.attr_type = 36U;
    msg.min.assign("IHPHRCFXWSNVNLXOXBGIOGRILRGLBKZQVVNUEUULDFSJVTJQCYOPHDKVJSMEEHTAJFBXBHUIVUGXEQBGGDICXMKRMTAQQPHEYBIMZRTGPLWMGSIORDNAUJKZZLOIREUTMPVTQADKMLFNHDZOBYCTBCZJYDWEIAKVZWSEJFCAZMAHPTHYSWCWQFYYSMWXSK");
    msg.max.assign("RYOMEFDMJFXIYTANJSOYNNURRLTUOWOAZHMIYLSUGVBYQIADNFSTWDOHEUSBMJUBVRZDSFQNIXYPNLGVBZGQFCKMEUJKUWQFBKXVVDQMPIHVPPULARHZBEEEQBCQPTOVRGWJDXIMGHZBRWPSHTLGXSIFDYGLUJSRLSACZACMCQETAGIYDFCSKHMGNBNGWWFLRVFZLWNPZJXYZJDTJPQCMEPHABH");

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
    msg.setTimeStamp(0.563967910013);
    msg.setSource(55479U);
    msg.setSourceEntity(180U);
    msg.setDestination(27844U);
    msg.setDestinationEntity(49U);
    msg.name.assign("KYGYOXNZCIUYJGUKNVCVVLWMOLXAGAYDPIBPIFMZTHFKPNJIHEUXNHOJKZMNWLTEGOFSXBKBBNLKQFXYNWPCJRATWBOGMAZFOFDJSUZSIXECBFGVFERXTBMNUTIZTSYYIPJELDKYHVNRLDOPWXOZADWSFSEXQTMUKYEJIISLKQLPGAGSEPDMRJCZDKHGCFVHRMWCQQDTHJRTGDBCQVQLNCHIWZAAMSJLYUBS");
    msg.attr_type = 192U;
    msg.min.assign("WGWVJSPTNPGWDNHXKMHLJDSIVIXEHGPFPQQFDROBOZCXCNQEMOTAGIFUEUCNVMBOGIULXCLEADWYXZFYDQOUPIRNGEWZGUQJMBSJTWSKFRPKQELWTMOTYVJFQGRMAXWKQJNKDMTDXEKCZECBHCNZKRTZPUZJOIWBABOHVITXQMRHSVKKBNYIVWNRXZVXSALYIYPOLYFUULVYARCLCVHLBQUSOMHZGLZAYMDEARRP");
    msg.max.assign("MPWSYMYGVOHDXJELNCFQUIXKUZPHUFLL");

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
    msg.setTimeStamp(0.222944929967);
    msg.setSource(1077U);
    msg.setSourceEntity(112U);
    msg.setDestination(42059U);
    msg.setDestinationEntity(28U);
    msg.name.assign("UBPFHWYUZTLCZSEGYNWNHJADNTSZOACQGPIYRUSGROBVVFXKMIKJZJRPIZXDECYLZQOQGZPKWQKXSRMTMWJEDBCSWLXJQULGFIVNVSUEAAIOXIFEVULDKCRCMPAUHNBGLNBGGPSDFPQJAAZWTERDOEGDYBKHSCOQJTVNVFEQIMWHRMTXXASZLYNPLYWKPNMIBOTKEAGFVVFMIXJZRYKRJBHYLHOACQYVCWJHDX");
    msg.attr_type = 86U;
    msg.min.assign("PTEHDCZJMLMLASTNOLERQPDQUSCREIXRHFUUNCMYMWRXQWSWUXPCFGEEONVBNSKAJCPCVAEYDMXHQZAVW");
    msg.max.assign("ULXRAPCSAWOFHQZQFTHWPSXKZRNSBMHZVJAMPWZDANMRKEKFWUNBTCIRSYYYTAVENBKBOMECQPVZHSJVUUJDCQEKG");

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
    msg.setTimeStamp(0.93199389227);
    msg.setSource(64404U);
    msg.setSourceEntity(8U);
    msg.setDestination(42178U);
    msg.setDestinationEntity(221U);
    msg.timeline.assign("RTKIKFLWKUGXNPXWUXQLMFBQWUPZNOZLEGTYAWASLMMMHFFSXSIDJETVSADGJJXAHYKZDYQ");
    msg.predicate.assign("EFSYNEDFIRJIQNEKFZRITHQAXRFUZNFL");

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
    msg.setTimeStamp(0.96261048766);
    msg.setSource(54734U);
    msg.setSourceEntity(215U);
    msg.setDestination(12335U);
    msg.setDestinationEntity(83U);
    msg.timeline.assign("RVSYSHMSHOQYQMYOIINBOCZUGYDWGXWLGREEUWKOZLJOUHFNCFAJDNFTZFZXDFMCRFIJQBVDCJIOXARLSFDKBTJUKUEASLLHGYTPSUAJZBPBACOQEONAVDTMZUMYXZIQSNNVXUMTHZPESGCCEBWVACIEBWQPVMRALJHNTXKQXGZJPGGUJPHILXWTWW");
    msg.predicate.assign("PTIXGXOSJEYQVVPINDBLAQRRWYAUMMBEODATERMVVZSGTHLOSKGDWUWOWMKEBLJEGBYIWMHQLEUWFPUVNFZFVEHBBJXVRULGLDCZCNNYSIUGXXAJGRKLWDYSKPFGDURKTEXCLHXDIRTQOKAXCAOUZNQNHQCCMTFFIVF");

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
    msg.setTimeStamp(0.76487844787);
    msg.setSource(2424U);
    msg.setSourceEntity(243U);
    msg.setDestination(22913U);
    msg.setDestinationEntity(145U);
    msg.timeline.assign("RQWKLHIGIRAAJCOYLRDNLZKSWBOAYMMNCUPXJNFFJQYTSXJZEPSVONTTMBISAOTCLNNTVNTFTUZDXVYRNVBQHZCWCMHJCLIPDBJPWEUYQEYDIXKAZGBHGYPRLFBKF");
    msg.predicate.assign("UMLTVYIVSWNWNCIPUCZOMCPSIJQNGIUYYBUBRYWSXA");

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
    msg.setTimeStamp(0.31946093159);
    msg.setSource(24640U);
    msg.setSourceEntity(229U);
    msg.setDestination(35184U);
    msg.setDestinationEntity(69U);
    msg.reactor.assign("RCPFTQJRISFZHDSEHCAHKKXSDPYBNMQCGUYDZVHQJMGZJEOPUQVHWSWUFSNXISTLABVSVXBOTEAAPDNFLUIOVFVOZBTJGQWDPCHXCXLJZBPMBZDNSMRRRIYFREUXQTPJLKAMGMLNNYGXTIFFDDXYNBJMKEUPUNULYEJVLDYAGWOBVYESFQOGCVFWWOUINLOCJKBTABVMIWIXLNPTKAKZQGZKJZWAHRMSPHLKCRYGICHZ");

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
    msg.setTimeStamp(0.0128792480966);
    msg.setSource(30348U);
    msg.setSourceEntity(125U);
    msg.setDestination(63295U);
    msg.setDestinationEntity(10U);
    msg.reactor.assign("MGOHHOCMKVCGCSUJJEYNYCXYGDNKTELQVYRSHJJDMSBCGXINYRURND");

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
    msg.setTimeStamp(0.175871134049);
    msg.setSource(50805U);
    msg.setSourceEntity(58U);
    msg.setDestination(41683U);
    msg.setDestinationEntity(84U);
    msg.reactor.assign("BFQMCJTUBPFXKYXNJTEJVYKKLDWHVPHQIBCOJNIYKQRNXPSBANUQAOHRZQAERYRRJLGSUUNCUVGBCMZLZMYBLKJHWNHVCECJKLNFVDFCFUCQQDXVXKZDTFLVAKNJEEPXKTZZYPIWBZNBUGTGSYJPDSSUYDAIRWEBQSDGXLIXWEVRTKEHLRIRA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HBXLGHWIEAINEMPYHBSRSLWKIQKCFEIWFTMBGAHRUDHBORGVULIXUPIJUSHADEKEHAVXCUPGOMKYEXQZPBSGCMQZQCJBSJYFSYKDLGCXNVXYZJLGHWQTTYCTMFIKZNBCDNACJTYTTDIFKNBQSJOALHUCXZZVJQKGOCUNVFWVVDNZZWGEMDLOBBEZORONQF");
    tmp_msg_0.predicate.assign("JLJGWQPRZHYSTIFNRSZXTKSPYZYOVZDNOKQIRELFQOACAVDTUVZTZCDHLYJWSHQEXFLORCBLKHMOMWMVUEXGABAWPSKIYHO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LGNNHOLLDGFXJABBMTGXDXXHZNQIDLREUGSXMDKELUXMVENZSOMQVBGXXFL");
    tmp_tmp_msg_0_0.attr_type = 208U;
    tmp_tmp_msg_0_0.min.assign("NUHQEVVIWGOFBLFLAEODJOISGAHKBODGBVZIVORLFVRTQLTYANJ");
    tmp_tmp_msg_0_0.max.assign("WLFRHFNGMXVAGXIWIJZYRZAMTJZJYTGCEUSNBRFQKEHWPNTPFNKYILRWVFGPBARITIFQMSWKC");
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
    msg.setTimeStamp(0.804171213596);
    msg.setSource(63830U);
    msg.setSourceEntity(86U);
    msg.setDestination(56616U);
    msg.setDestinationEntity(253U);
    msg.topic.assign("ZAGERLLBJWXUEO");
    msg.data.assign("ENQNOQWAZCZSHSNOPHMIEGSRQZXSMYDJKHJANWRUTBVGLBSBYVAYZLSMWIZMDDPVVWJEPYDQHFXXIFAXHATXMQUOLHEJOVPJIUTMWOFXLJEUENGKPMIWBILYOXLIKOYTANFYPRNGTNCVVFNVDFZJYDEWDUSKLTFAEKABJSGFUPKRUBZWYGKUKCLAYKODRWXUCQDMURZBRBXXCQRGBS");

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
    msg.setTimeStamp(0.643818205365);
    msg.setSource(54403U);
    msg.setSourceEntity(66U);
    msg.setDestination(7960U);
    msg.setDestinationEntity(188U);
    msg.topic.assign("KKGGXUXARYUOKULAECLOBMVCPCS");
    msg.data.assign("HUUDYMAYQMMYXSVZBMIXKXPAEECGJZQSHWPQBMLJUZGSGOIPNESTJJBIWWDUDRNRTNCIEAKPLZFOLFWYMPZDWVYHAPBAXQDJRCOBXVAEESLWOVUYRVLMKTBQKFUJKFNNDKRSACUVQGZYNIQYEEOUELCXGHKAWDJPWJMXWGIZTSGVSFMTXXQZCRJCOJNGUYZ");

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
    msg.setTimeStamp(0.210686432333);
    msg.setSource(34028U);
    msg.setSourceEntity(146U);
    msg.setDestination(42797U);
    msg.setDestinationEntity(123U);
    msg.topic.assign("XXBNORZRKBWHEIOGIYOZUWOFJKQWIJABBTRNJYLQFBFLQSPMICVIXPCXJWFQNDHEOCNAZSKWNJAASHXTGSOEHQUCWLCEJKQMZXBYTTEHUCICZDKVVDMZAZ");
    msg.data.assign("UDHPWPLOUGWEEBNMUADLGTXLGFRSCPHTAZPEDNWULQINHGHCZTRSJFJFFCOEVJIWMOLMSWCHQXKTSSJOILKKQSQSMNCBIBAQTHYYDEDTNRAWKOYZVHRVCJGOPZGWJFFPNYKPVFVDUUBOZCZUAMEXRJXKJSXVYMAIVFDJCVPJE");

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
    msg.setTimeStamp(0.108482735455);
    msg.setSource(28593U);
    msg.setSourceEntity(52U);
    msg.setDestination(14310U);
    msg.setDestinationEntity(91U);
    msg.frameid = 119U;
    const char tmp_msg_0[] = {-39, 8, -94, 63, 105, 31, 100, -108, 0, 112, 75, -20, 7, 8, -34, -74, 50, 93, 32, -83, -73, 90, -53, 100, -93, -100, 105, -102, -116, -21, -62, -118, 16, -92, 24, -114, -59, 8, -29, 57, -11, -112, -92, 92, -23, -105, 62, 88, 11, -85, 73, 43, 30, 104, 35, -67, -128, 122, 86, -64, 17, -53, 70, -124, 11, -98, 60, 44, -64, -75, -109, 55, 8, -38, 98, -2, -23, -10, -75, -24, 57, 124, 24, 19, -38, 38, -54, 11, 4, 123, -118, 0, 22, -19, -11, 107, 20, 97, -85, 6, -125, 109, -124, 121, 91, -50, 111, 87, -32, 21, 47, 115, -92, -65, 26, -48, 52, -116, -39, -18, 89, 84, 73, 82, -29, 0, -15, 111, 89, -68, 63, 24, 5, 20, 0, 76, 28, -33, -27, -113, 115, 10, -114};
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
    msg.setTimeStamp(0.124107121043);
    msg.setSource(60469U);
    msg.setSourceEntity(11U);
    msg.setDestination(45835U);
    msg.setDestinationEntity(4U);
    msg.frameid = 88U;
    const char tmp_msg_0[] = {78, -1, -98, -109, -80, 21, -6, 54, -2, 36, -109, 0, -43, -27, -119, 18, -15, -49, -23, -87, -84, 26, -5, -95, 122, -79, -23, 54, 73, 66, 43, 96, -102, -79, -109, 20, 98, -15, -82, -96, 106, -48, -107, -15, -74, -2, 88, 65, -15, -15, -39, -53, -12, 0, -21, -127, 89, -31, -8, -3, -28, 117, -28, 80, -105, -59, -18, 74, 125, 62, 7, -70, -39, -85, -50, -121, -51, 71, -56, 44, 78, 100, -121, 107, -124, 79, -79, 25, 39, 63, 73, 20, 51, 116, -83, -52, 25, -61, 95, -38, -4, -109, 29, 29, -5, -24, 102, 92, 48, 55, 98, -117, -66, 39, 92, 40, 28, -33, -2, -45, -65, 98, 80, 36, -127, 59, -6, 29, 5, -53, 123, 86, -112, -40, -10, 7, -127, 98, -56, -87, 98, -19, 30, 18, 124, -19, -48, 24, 114, -121, 83, 61, -98, 110, 26, -84, -125, -18, -96, -98, -111, 31, 27, 10, -40, 75, -85, 36, -120, 35, 12, 65, 36, -33, -10, -32, 71, 23, 29, 72, 123, -96, 119, -28, 12, 91, 115, 113, 56, -77, 59, -101, -115, 94, -35, 9, -127, -90, 116, 85, -53, 41, -3, 47, -119, -74, 108, 23, 17, 62, 61, -11, 84, 110, 123, -99, 16, 84, 40, -15, -110, 89, 115};
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
    msg.setTimeStamp(0.301638398402);
    msg.setSource(44153U);
    msg.setSourceEntity(15U);
    msg.setDestination(54590U);
    msg.setDestinationEntity(55U);
    msg.frameid = 173U;
    const char tmp_msg_0[] = {26, -76, -98, -34, -45, -70, 39, -61, -121, 26, -57, 105, 64, -28, 33, 30, -84, -97, -88, -55, -90, 7, -45, -105, -37, 115, 117, 35, 77, 45, -1, -99, 23, 107, 12, 56, -67, -82, 59, 14, -68, 89, -61, -94, 56, -23, 106, 72, 59, -91, -28, 18, 10, 109, -8, 44, 20, 36, -5, -83, -2, -11, 37, -96, -67, 66, 15, 79, -126, 65, 8, 70, 76, 126, -96, -75, 31, -125, -35, -8, -3, 32, -31, -2, -42, -28, 99, -64, -110, 105, 48, 109, -43, 13, 114, -4, -126, 65, 40, 82, -59, 109, -49, -75, 101, 28, 46, 42, -33, 80, -30, 106, -14, -101, 42, -87, -64, -70, 43, -32, 53, -87, -127, 54, 63, -21, -105, 124, 108, -15, 1, 46, 85, 22, 34, -71, 107, 76, -23, -54, -48, -4, -12, 122, -26, -101, 91, -103, -81, 55, -65, -21, -52, -58, 110, 31, 11, -63, 106, -49};
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
    msg.setTimeStamp(0.964573454626);
    msg.setSource(22405U);
    msg.setSourceEntity(27U);
    msg.setDestination(46241U);
    msg.setDestinationEntity(39U);
    msg.fps = 150U;
    msg.quality = 129U;
    msg.reps = 157U;
    msg.tsize = 37U;

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
    msg.setTimeStamp(0.378476391542);
    msg.setSource(4653U);
    msg.setSourceEntity(114U);
    msg.setDestination(50944U);
    msg.setDestinationEntity(139U);
    msg.fps = 240U;
    msg.quality = 218U;
    msg.reps = 31U;
    msg.tsize = 198U;

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
    msg.setTimeStamp(0.382689032228);
    msg.setSource(61563U);
    msg.setSourceEntity(183U);
    msg.setDestination(40134U);
    msg.setDestinationEntity(171U);
    msg.fps = 33U;
    msg.quality = 134U;
    msg.reps = 18U;
    msg.tsize = 93U;

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
    msg.setTimeStamp(0.056989661773);
    msg.setSource(14670U);
    msg.setSourceEntity(133U);
    msg.setDestination(10636U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.749129869487;
    msg.lon = 0.0295133931882;
    msg.depth = 225U;
    msg.speed = 0.165573389873;
    msg.psi = 0.317578416858;

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
    msg.setTimeStamp(0.239161978841);
    msg.setSource(42698U);
    msg.setSourceEntity(125U);
    msg.setDestination(50021U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.999932646945;
    msg.lon = 0.013917696007;
    msg.depth = 44U;
    msg.speed = 0.782896373172;
    msg.psi = 0.535752452664;

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
    msg.setTimeStamp(0.269648504018);
    msg.setSource(8404U);
    msg.setSourceEntity(57U);
    msg.setDestination(48067U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.103208762036;
    msg.lon = 0.333990654093;
    msg.depth = 5U;
    msg.speed = 0.0294448498549;
    msg.psi = 0.76092613809;

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
    msg.setTimeStamp(0.975460821628);
    msg.setSource(62267U);
    msg.setSourceEntity(209U);
    msg.setDestination(6238U);
    msg.setDestinationEntity(223U);
    msg.label.assign("SKVMDIOGQAEPKMAGRTGTYEVZOPOIKWHUYJCFLIIHVBBYMKLCZRCDDFDXWLYPUHWHLGJJVZFCTFAJHRZXPKAJUKNTNHWQMIKCUERXLMRHMTMEPHCFXDYWYWTMBPOEOUJDXYVVSAXQPB");
    msg.lat = 0.647220731765;
    msg.lon = 0.538055325306;
    msg.z = 0.043510528377;
    msg.z_units = 178U;
    msg.cog = 0.164108602064;
    msg.sog = 0.774675650308;

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
    msg.setTimeStamp(0.595156982005);
    msg.setSource(2700U);
    msg.setSourceEntity(211U);
    msg.setDestination(36994U);
    msg.setDestinationEntity(66U);
    msg.label.assign("HWKUOQJOGZJHPOLLOVCCKDESRPHTKPAGCNMIHBBDZIGMKBTDYDKOZGUOATFNNWSEYHIVBVYCRRUENYMQYCETUGCBGNZXHSWPJAGKABZRQXUQKZURFYSVVAIAJIBGZRBKVFPNMPIQQUYFTSOLZFMJDTSXWFLYPNRPDXFIQ");
    msg.lat = 0.763597623846;
    msg.lon = 0.555537607153;
    msg.z = 0.774076828401;
    msg.z_units = 114U;
    msg.cog = 0.222581046239;
    msg.sog = 0.70523024158;

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
    msg.setTimeStamp(0.500887377706);
    msg.setSource(41240U);
    msg.setSourceEntity(83U);
    msg.setDestination(57636U);
    msg.setDestinationEntity(33U);
    msg.label.assign("LTHKYRLCIMOMYVUFCGOPJBOCEZHBQXBVXIRAXICUUNPZOTALEFYFGSGAHJICBVTUJSDRKZIDGYIQZWELHGVVSKJYQKJBTYCMKPNPGOUIXDULPTM");
    msg.lat = 0.474232426264;
    msg.lon = 0.997108234808;
    msg.z = 0.982206804703;
    msg.z_units = 224U;
    msg.cog = 0.4244516726;
    msg.sog = 0.298132529481;

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
    msg.setTimeStamp(0.136646636797);
    msg.setSource(16475U);
    msg.setSourceEntity(218U);
    msg.setDestination(11152U);
    msg.setDestinationEntity(57U);
    msg.name.assign("QNLDIWYSDKDMXFZUHLVQBTYSBZUZAWKYECHNUHAPIJYXERRUDNEMPPGRTQJXHMICXTSOGNOQOPICRATGALYNXWEEDYLJBTFIFJTVPUNHURSLGDMGQBYOZBDWNHRVSWQFVVRQUTPC");
    msg.value.assign("KXQSBPDVBHNHIDUXZYCRHDKYESWIGJXWJMLHKECAJSFOTERMASWZBQKYYPJLPUOGNYRDNHMGCMOYTYUVZQRJYRCBNXUFHDNWEVFTKLAYOSBADJXTCQONRJBGNEXLKCGNLIOUILCIDTXDTUO");

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
    msg.setTimeStamp(0.85163306308);
    msg.setSource(27862U);
    msg.setSourceEntity(206U);
    msg.setDestination(6173U);
    msg.setDestinationEntity(23U);
    msg.name.assign("ZEADSAKBLIUIRPCOCGDZLUCUHPAAKGTZSOCHQQZFVYTFHPKRWSITFHFARPQRGGBFWKJBEFROUQDYEMXVFFJJTILPXQISDDJNCLLOHNTBJRDNJKCXVLCUECWBMCEYXHXHINSRDIVLOVNUROEBPOMBMKWEWYXKEBTSUXQOYWSVQGESXRPMMAZWTZANMGTYXVQYLAPGQUKAIUNWJOAXUYWYSESOCLTDTJWQMMNDGGKIBVRGFDVHZL");
    msg.value.assign("SEWNGCTEGHAGIRNYPUSNOTKPDVKYAYZGLXBUKAFCQCVTHFNUVVRLZKAAJGHEUXDQLYDCLXEJBGHBRCCXYXLLYPWZ");

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
    msg.setTimeStamp(0.880263800885);
    msg.setSource(10295U);
    msg.setSourceEntity(118U);
    msg.setDestination(38537U);
    msg.setDestinationEntity(44U);
    msg.name.assign("KWBROMNPNQROCCVHQUGKGWJXSYJHLQYEKTKRAMGUXNZXNEHBHMDCLJHEKXUVDAUNWDSLPYLEZKPEWXLIBXVKSPEGNHJYDSBZABOGOOBWKUZZITZHMCSNDDIJTJUSCCYAQWFRRDCDAYQLYIPILYIPBGVBTLQCEKMRWFYFIEGJANKFTVFNQ");
    msg.value.assign("LILCRGBSPDHFRVTXCHAFTJYNLKHYBAWERIKPXCXLSIGZQZZZS");

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
    msg.setTimeStamp(0.576919396264);
    msg.setSource(30975U);
    msg.setSourceEntity(110U);
    msg.setDestination(35980U);
    msg.setDestinationEntity(184U);
    msg.name.assign("YNISFPWXKUJZBBSXEJJLCAQWABOPSXARUAPHNFDZUVCVRQGFBQBANUUWLVSENDYCSMRTDSCUOFHBCTFCVJJYPGHFRXATPD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BMDJSENYUNXSHFCNJSOWOQYUVADPCQAEBNJAUYMVZFRXDLICUYCXYWVBVVTIKTQMRLRMWRLMOBNGWXTUEWXPFMORXGDSDZISCIGXKDIZYGIRUEEIKWOYRIZY");
    tmp_msg_0.value.assign("WGLVNUPKDSGHEGTZOMBWSDPYHZHBKVCMQYBMVKNPXVOHSWEIHLTGURYQJIWTMGWATAVDCBXUPCQLSNNEJOHRCYYCIFQUGHU");
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
    msg.setTimeStamp(0.175185505187);
    msg.setSource(43571U);
    msg.setSourceEntity(51U);
    msg.setDestination(58398U);
    msg.setDestinationEntity(4U);
    msg.name.assign("VKESQZZLENLBSOWRYQVFIURBRUJIRPLNOIYBDEUBHTWXNPNGGTXYUMRXJDERFYWHBOBDEABICOHZJHHUXPGVTWSOUTUJVD");

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
    msg.setTimeStamp(0.819620852932);
    msg.setSource(47536U);
    msg.setSourceEntity(111U);
    msg.setDestination(3674U);
    msg.setDestinationEntity(69U);
    msg.name.assign("RCGRMLALQDZMAYNYFIIUVRYXKZUKALJUMQTKPXSTNIAVMPIKTVQOESDEAUCJFZHBKBKINOZQDOTKJPMCEBLAQFPNUPXTPONFQOFHGUGJPWQVYXLYZFUMHDOWGQOKLUPMSNFEOOQX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AIJFTIAROVKTRXSMECKHUJEBNIQUPTZOUAEENRHQSCDKWAXHJMHVTHEXSWUXTGQFGZSKLTRCTBJKDKZPODRNWLWBHUNGREMOMFPLYMZLDAQOIQWIKSBJHNQBVVXYYAOVVGFOQPGUWYIXMORZCBEGYEZIUPJHZNANRCCPCGBLUFVVDFMUWDJLYQMRGNYQWXCDAIHCLVPWXNVFCIKWFBABSTF");
    tmp_msg_0.value.assign("YYYCVCQSVXUMRIHKBSTQXLKZBLDGNMSVYOPATTVGTQNNRPDFOTGLSZBEDVRYXGZFGJZZGMOTMANUJPIXDLCUIENYRMZZPEDTXDHLAJSLWKOSMEOQZMXRITJKVYHIAEOQLXUMNACARBWBAOVCGWCTUGFKPWSPXXIJUKWJYWYHGJLFOVCYFLQHUERBEFHZBFURPMKWVRBWUHBNPANHSLTCOJDDGCDSZQJEIDVKFFW");
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
    msg.setTimeStamp(0.945820713834);
    msg.setSource(42104U);
    msg.setSourceEntity(176U);
    msg.setDestination(18703U);
    msg.setDestinationEntity(119U);
    msg.name.assign("OYQMCRKGFPZLYVUSULOFPQWGJKQWOIZOZYVXHOEJDMTYIMKLXPMTYCMOYABZPFUECXGCLGJFLXBPCNSNQAHGRVNFHVBHFQZAOMJYUIGSZGQFCJZRKLVSHEPHBDYWIVDXNOJHCXSENEPRSDBWNTLEERDIUYCTSKLBTMGQIRFBEJLJJTCVNWSXKTTDUWHJXZFAPDXPRHQIRTSUAWDQOHEQUKWAGWCKADMI");
    msg.visibility.assign("WMAPBXOVQSAMNSHYHUIJRIUOZAJEAFGVSPDEQURXIMTBKXPOKONSKZRDXCHDDBCDCLOTGHYRJVFPSIJZUWMLIFLXIEMUUZRWQOACFKGCKAFLAKUNXMRBVXODCBVGCLNJPCXIZYYQMYAJDNETBKDLBUPEIJYLETNJTSJGOTLS");
    msg.scope.assign("XQHDRMOMJHEQBXZVUUEMQWPGADDBVZZYLZSLEYRJQ");

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
    msg.setTimeStamp(0.13023454722);
    msg.setSource(19325U);
    msg.setSourceEntity(25U);
    msg.setDestination(28802U);
    msg.setDestinationEntity(165U);
    msg.name.assign("YMOBAMQBQWNGGKTUHPNTTAWAXRTJTZJHFBXDFEDORGDGNESCCMDRKPALIHAVGUBRZSXNSOGIFWLRHEXTDOKCMEAQCHZUSSFOVPRVPROOLEPZQWLSYSJKTFSHAXZBYYWPWJXDWHCUQHQDTUSDIWWYAGEXHDNXYRFEBTSBNGML");
    msg.visibility.assign("RAVPZERFOFDMZLJHHPTVIRUSJKPGXIYWKSAMWCKBXRTVEICRRTCFIUBTJFNYTSOYSGDWICMBHFEXPPHYQFCDKXXL");
    msg.scope.assign("CCYEVGCPZTZGWOENUGLYMRWFHKNWHEPUBWCCYVPIZEJDUDHQENXHHREKJTUVFXQWKMIPOOZEYBNJRHROALOQSOHIMOKKNLTIRMEZBBRZSVLDSQOZUITBXWUXNSFJOTXVULLYYVAAZKTAADFGSPYJNTCSXWCJBZRBKXZUAGIPJDF");

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
    msg.setTimeStamp(0.994768206048);
    msg.setSource(1768U);
    msg.setSourceEntity(243U);
    msg.setDestination(55081U);
    msg.setDestinationEntity(213U);
    msg.name.assign("DLIKWWQSRPJMFTJIBZZHMRXGKOCTEORVIYBBICIZIWAESYQWNRHEFFUZINFALLULOIT");
    msg.visibility.assign("KEAAVKWZXJOHCRQCFQGXNOCFJWUBKGERQIINSJUVMTYPKGPGKWXWOLEMSFZCGTLYHZLAHERCSMYYRJSGAQWGQVRBEXYTNFEFULZLZZWMYYVPTJJABOOMKLXAHQITHNFXPNOOBCJLOLUTNKYHXQUQAQKLKZGONI");
    msg.scope.assign("DIHWEOFAELYKAUIZZJTBTFVFSOWQXAKUZWQDRVVRFSZJKJYBMQKLWGAPOUWNUAFIAXTDOOZSURYLKXBJMYGCRXHURTLDCPKNTDPEGYAIZCDJCBGWNLSQDDHOGVMYWEILCOFAIMEKPOXWQMQVRHNFNHHMIJLUYXVJXSKQMZSHRPCFBNTHPPZRGEPDJHLZEGXUIELSZPIEGTGNXVJ");

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
    msg.setTimeStamp(0.504865340505);
    msg.setSource(12459U);
    msg.setSourceEntity(181U);
    msg.setDestination(360U);
    msg.setDestinationEntity(111U);
    msg.name.assign("IQORBILIVWBAZTGNTMYGLHAMXCEZYYBWXQXOMLSUDCDJCHVANDSXKKHYREDWKVCLJHVQZKKOWTKNWHAISVXTVKSCHRSBKPQMLXWEWCQDRWPOMJFGRNNGGFUCPROZFWYLTURCUETFJHFOBXOQANDUSZMVIDJFSRTIPIHNNVEHAMGDWMIASOUFQZ");

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
    msg.setTimeStamp(0.0439026082212);
    msg.setSource(15441U);
    msg.setSourceEntity(81U);
    msg.setDestination(14150U);
    msg.setDestinationEntity(250U);
    msg.name.assign("ZQTTDNFOKGCAIEUMSRDTPZFJAVUYOKVFOBUYOSCBSRMDXYXBWWGTTXHSWUGHTWCJUQHJWCRADDMFMKNOGIXZQOZALWCFNEEMI");

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
    msg.setTimeStamp(0.902152682134);
    msg.setSource(34188U);
    msg.setSourceEntity(80U);
    msg.setDestination(15779U);
    msg.setDestinationEntity(246U);
    msg.name.assign("XKJKQFHGGDFSPHAQNAIRNNNHCEOXSTTTNUHTCHJCBNGDYZYHWLPGWSPCZEQXQZYWLMEKVPKIQBAKIGFBBTKLVWBEIQLFTMD");

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
    msg.setTimeStamp(0.209621988005);
    msg.setSource(63662U);
    msg.setSourceEntity(75U);
    msg.setDestination(34689U);
    msg.setDestinationEntity(28U);
    msg.name.assign("JKDFYTVQIJSQOVOXIJQXFPGTLFCXHQBNLCVTZQELPJOFBWHCKAAQVMNZFJWIQOIEBO");

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
    msg.setTimeStamp(0.67066100949);
    msg.setSource(19564U);
    msg.setSourceEntity(3U);
    msg.setDestination(31926U);
    msg.setDestinationEntity(159U);
    msg.name.assign("QVPMYDIVCSHJWNWOCMSDNOJKZFKEMXIHZYCAYUYEQWIRMUQRNGDJZJMNPNYKQWGSRATOCNQDPWFQXGEVTFEIOGZHAVTOEBUWXJZABVLMQFSCGYZMUOZSHRKTVNPTVBZLGYGRZXTGANBQIHNOUIXCWWTJKVLJGSNCBVURBTFUJPDLSRILPATLUWEFSGIKJHXMFJFQLRSTADVAZDAQODLAP");

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
    msg.setTimeStamp(0.141991991221);
    msg.setSource(11913U);
    msg.setSourceEntity(250U);
    msg.setDestination(11586U);
    msg.setDestinationEntity(128U);
    msg.name.assign("SNPQNWSNNYLXLGOAOJBKQREHVVCZILMATIMWJECARFGRKXCPAFPJXUNDJEKJHMCQPGWCOTMXBNUJQJLTWHWXVMWFEBOUNWDKMPYLVLHBTLMJYSUUUZUFWAXZEATGIGUGUGRQQZEVVSKWQSGYAZICQADLBHZLOUQJXDVMEEKIGEZOHOBXNXRYTCHKDKSZISIRHKBFVHNRPEBPCSPRFYFLRHAYWVPSTJIYYKPMSCD");

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
    msg.setTimeStamp(0.909186686086);
    msg.setSource(17162U);
    msg.setSourceEntity(119U);
    msg.setDestination(28657U);
    msg.setDestinationEntity(176U);
    msg.timeout = 2530498759U;

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
    msg.setTimeStamp(0.532718197477);
    msg.setSource(44721U);
    msg.setSourceEntity(173U);
    msg.setDestination(6512U);
    msg.setDestinationEntity(75U);
    msg.timeout = 349482156U;

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
    msg.setTimeStamp(0.81293338157);
    msg.setSource(62016U);
    msg.setSourceEntity(220U);
    msg.setDestination(19603U);
    msg.setDestinationEntity(52U);
    msg.timeout = 1871868154U;

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
    msg.setTimeStamp(0.942265939288);
    msg.setSource(15924U);
    msg.setSourceEntity(170U);
    msg.setDestination(2162U);
    msg.setDestinationEntity(168U);
    msg.sessid = 1373987621U;

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
    msg.setTimeStamp(0.617234758997);
    msg.setSource(51018U);
    msg.setSourceEntity(12U);
    msg.setDestination(51688U);
    msg.setDestinationEntity(112U);
    msg.sessid = 3391767334U;

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
    msg.setTimeStamp(0.0472020398825);
    msg.setSource(45246U);
    msg.setSourceEntity(141U);
    msg.setDestination(64276U);
    msg.setDestinationEntity(83U);
    msg.sessid = 390835026U;

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
    msg.setTimeStamp(0.35192658354);
    msg.setSource(15374U);
    msg.setSourceEntity(22U);
    msg.setDestination(32373U);
    msg.setDestinationEntity(19U);
    msg.sessid = 4041871071U;
    msg.messages.assign("UYUKVBPNYRTNLOXOQNZIWBDGXOFLVZFYIHIITAERALARACBSYRUZYQVHYGODWPHMYWQKGVJYWVPIXMUHFUWERDGTJ");

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
    msg.setTimeStamp(0.787378600628);
    msg.setSource(55526U);
    msg.setSourceEntity(235U);
    msg.setDestination(59678U);
    msg.setDestinationEntity(87U);
    msg.sessid = 1243768511U;
    msg.messages.assign("CQXXDAPNBRG");

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
    msg.setTimeStamp(0.59423314239);
    msg.setSource(22776U);
    msg.setSourceEntity(7U);
    msg.setDestination(52533U);
    msg.setDestinationEntity(26U);
    msg.sessid = 3761297955U;
    msg.messages.assign("EXWMABTYJNSHSTEGKJIFZYQLJKFUIHYSPHOZUVLYVITXMFYZIHRPMZOFFGXAHTNPCWCGKKBGTCTRHCUADPJLWNCAIRARPTNILEQCQGMDAZCUMYVWVWSNBXLAQBBHKLACQPTBIJQNNMBVVQLFSXZEMKORMSDKZEEJNTYDOBQESWHA");

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
    msg.setTimeStamp(0.0182860926602);
    msg.setSource(9118U);
    msg.setSourceEntity(254U);
    msg.setDestination(14782U);
    msg.setDestinationEntity(215U);
    msg.sessid = 3077725230U;

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
    msg.setTimeStamp(0.825538609706);
    msg.setSource(46626U);
    msg.setSourceEntity(253U);
    msg.setDestination(20461U);
    msg.setDestinationEntity(97U);
    msg.sessid = 2733049135U;

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
    msg.setTimeStamp(0.463893740864);
    msg.setSource(64369U);
    msg.setSourceEntity(97U);
    msg.setDestination(12672U);
    msg.setDestinationEntity(185U);
    msg.sessid = 1881197857U;

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
    msg.setTimeStamp(0.407314224926);
    msg.setSource(59703U);
    msg.setSourceEntity(124U);
    msg.setDestination(17413U);
    msg.setDestinationEntity(151U);
    msg.sessid = 1034996825U;
    msg.status = 55U;

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
    msg.setTimeStamp(0.649467195452);
    msg.setSource(18841U);
    msg.setSourceEntity(237U);
    msg.setDestination(20005U);
    msg.setDestinationEntity(60U);
    msg.sessid = 4268941625U;
    msg.status = 138U;

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
    msg.setTimeStamp(0.806748319284);
    msg.setSource(2081U);
    msg.setSourceEntity(154U);
    msg.setDestination(48966U);
    msg.setDestinationEntity(29U);
    msg.sessid = 2798284073U;
    msg.status = 173U;

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
    msg.setTimeStamp(0.91959515631);
    msg.setSource(45862U);
    msg.setSourceEntity(118U);
    msg.setDestination(59788U);
    msg.setDestinationEntity(234U);
    msg.name.assign("URSRLLENHAEFYSLGNOCQQJMVQIFJDXQSDXXAJCEFQQMPCWQAMRDCWYNKSWEEYFGSYITIBIUCXPJOPLVXTKWLWFGLVUPE");

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
    msg.setTimeStamp(0.945126406071);
    msg.setSource(52283U);
    msg.setSourceEntity(16U);
    msg.setDestination(24773U);
    msg.setDestinationEntity(131U);
    msg.name.assign("AKQHWAJJXJRBVDLHGZSXQRXOUIZRMIBFVJSPHFPSEZSJTU");

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
    msg.setTimeStamp(0.202992701639);
    msg.setSource(59796U);
    msg.setSourceEntity(47U);
    msg.setDestination(24163U);
    msg.setDestinationEntity(127U);
    msg.name.assign("ZKRDISRAVJHPIRDNMQVGPSODMIURLBTQFKMUZFRFGQECVF");

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
    msg.setTimeStamp(0.134973369104);
    msg.setSource(57411U);
    msg.setSourceEntity(100U);
    msg.setDestination(42169U);
    msg.setDestinationEntity(130U);
    msg.name.assign("SFHMODNEILRZWBTEINQDBNBYMEIGQKUVIYJXWJFNFMPITHXPPCMGWFUHFGYIVQNYZZAYXRXRHHLOULUWBQAAXPRCYUVDGZRQWTLOAVSSCJVZCBLPATFLTXCNXRLBOAJQXFYPDNMKLHOKPGQQSEMAJENKFHSBXDGYORZSOQGQCKPCDEYBKGYWVGIJXUGTUCBTSBWMKRCNZTLZHVKZLFWTDIDDM");

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
    msg.setTimeStamp(0.152023823349);
    msg.setSource(9637U);
    msg.setSourceEntity(254U);
    msg.setDestination(43763U);
    msg.setDestinationEntity(227U);
    msg.name.assign("SWLZIFYPAZJQ");

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
    msg.setTimeStamp(0.191136580409);
    msg.setSource(44155U);
    msg.setSourceEntity(36U);
    msg.setDestination(28861U);
    msg.setDestinationEntity(212U);
    msg.name.assign("VCULYOMKGKHAFCRKUYHCDSNUGGXPSZPMZVCHADGWHKIDSDTVNNPYQRLLXIPRW");

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
    msg.setTimeStamp(0.471609212107);
    msg.setSource(44501U);
    msg.setSourceEntity(56U);
    msg.setDestination(52692U);
    msg.setDestinationEntity(156U);
    msg.type = 148U;
    msg.error.assign("DCLXSZUHVGSKGKYUHBXGNDATKRYTBIPGEAICAKYUYQWKWIPWXFBIQAWPGEOVSZLAQXBCLKWQSPCCIZDPXEHSIMVRLDGNHDLVYJKAYSJMWEPNFJPBXWEKIHTSTOCLCMANFOGZBFCNZFMTXMJRGVNMSCXIMYVXDNZRHINTSVRLJYZ");

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
    msg.setTimeStamp(0.27879191901);
    msg.setSource(46425U);
    msg.setSourceEntity(102U);
    msg.setDestination(60375U);
    msg.setDestinationEntity(38U);
    msg.type = 223U;
    msg.error.assign("AFFUUTTCJHCYODHPTGGWUJMTKCEYNQU");

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
    msg.setTimeStamp(0.701740636397);
    msg.setSource(41653U);
    msg.setSourceEntity(57U);
    msg.setDestination(7606U);
    msg.setDestinationEntity(221U);
    msg.type = 235U;
    msg.error.assign("PLATBETTNVOJHILZXXMVJSAAZOLXIHELTWDKVQAEPWTVFSWPJYUMBNRVOFKLODZOOMVZMGRDQCEGMYMXNCFSKGJGHUMFGDAUZHVUVQBHENMHARZKOXAOCXLWBRPWJWXFAKICDQKATTWPWXSUYNYSDKITCJRTTZWKRBEEIILDQMXBUDLGCJYG");

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
    msg.setTimeStamp(0.490312460149);
    msg.setSource(40292U);
    msg.setSourceEntity(164U);
    msg.setDestination(3654U);
    msg.setDestinationEntity(17U);
    msg.seq = 42600U;
    msg.sys_dst.assign("BKGUAAJEZIMOYMOHKEVPSZCDQHKLHJNCFWEKVIJSSFCESQZDWYMKFKBVXOCXJBBXXASRGYPGWQLHBOCLWWYDUPXTKNDMIWNARTYEFY");
    msg.flags = 133U;
    const char tmp_msg_0[] = {27, 43, -113, -118, 57, 57, 88, -51, -68, 116, 58, -85, 19, -124, -32, 112, 1, 89, -128, 25, -50, -126, 36, 22, 74, -93, 100, 100, 55, -111, 42, -42, -30, 19, 118, 104, -77, 92, -51, -68, -60, 63, 15, 83, -106, -88, -5, -97, -116, -5, -101, -43, -22, -23, 30, -57, 121, -10, 96, 70, -17, 111, -3, -24, 51, 48, -16, 50, -47, -12, -119, -36, 64, -50, -69, -22, 116, 87, 71, -6, -69, -67, 60, -123, -83, 20, -119, -86, -34, 31, 49, -72, -4, 16, -14, -14, 79, -102, 110, 5, -98, -36, 21, -66, -110, -92, -88, -78, -79, -79, 88, 21, 103, -89, 72, 30, 8, -121, -104, 57, -49, -42, -116, -23, 12, -12, -43, -101, -38, -60, -124, 28, 118, -113, -80, -46, -96, 12, -71, 55, -43, -53, -120, -97, 94, 95, 93, 70, 92, -9, 25, -21, 15, 103, 115, 100, -9, -40, 88, -73, 109, -12, -84, -81, -22, 50, 35, 75, 76, 26, 53, -85, 38, 48, -126, 5, 85, 91, -9, 78, -56, -59, 94, 62, -94, 106, 15, -40, 30, -33, -47, -93, -43, -91, 26, -119, 88, -74, 12, 25, 46, -100, -80, -11, -127, 7, -123, 9, -60, 46, 118, 103, -9, -88};
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
    msg.setTimeStamp(0.0411741917313);
    msg.setSource(8815U);
    msg.setSourceEntity(72U);
    msg.setDestination(11047U);
    msg.setDestinationEntity(178U);
    msg.seq = 55050U;
    msg.sys_dst.assign("GIQHYBSLENIKNGDLOQDWEBMSVEQFSQTUUYPIVDNRGLWBTOVZDUBVNVQHPQVPMXCUFYRMKSDIFXYWWERAGMRKAUPMPQMVZEBZHTICCFRAJZGAOSOOFLWHRLWYLOAWOZOZTMXJDJEKJHSZKLHINZHXINFVADMYFX");
    msg.flags = 201U;
    const char tmp_msg_0[] = {86, 103, -26, -38, -42, 88, 116, -93, -33, 85, -93, -82, 74, -49, -128, 21, 95, -90, -41, 15, -40, -14, 53, 108, 24, -70, -34, 109, 50, -39, 108, 103, -63, 62, -9, 61, -27, 3, -121, -83, -12, -104, 91, -37, 98, 97, 32, -10, -9, -98, -26, -25, 66, -111, -38, 7, 20, 74, 90, -49, -25, 44, 32, 38, 100, 7, -119, 53, -25, -1, 16, -109, -80, -11, 0, -38, -32, -92, -101, -120, -88, -26, -68, 87, -39, -27, 17, -21, 12, -6, 108, 117, 37, -55, 93, -56, -127, -105, -85, 37, 39, 6, -48, 120, 12, 26, -56, -10, 117, -4, -106, -90, -85, -107, -93, -58, 11, -66, 105, -9, 21, -42, -20, -37, 53, 66, -26, -89, 6, 49, 17, -14, 51, -91, 24, -20, -34, 82, 69, 89, 80, 84, 57, 10, -9, 123, -104, 88, -79, -111, 101, 56, 23, -98, -43, 115, -82, -123, 87, 105, -88, -95, -78, 28, 77, 30, 45, -96, -66, -89, 63, -34, -98, 99, 107, -37, -121, 98, 44, 57, 66, -93, 37, 63, 112, 88, 58, -31, -61, 18, -46, -62, 41, 8, 103, 29, 122, 57, 18, 52, -124, -96, 99, 15, 42, -103, -120, -128, 23, 126, 25, 52, 36, -91, 94, -101, -55, 17, -72, -40, -19, 108, -95, 70, 22, 87, -96};
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
    msg.setTimeStamp(0.948054335617);
    msg.setSource(48449U);
    msg.setSourceEntity(104U);
    msg.setDestination(38682U);
    msg.setDestinationEntity(87U);
    msg.seq = 33024U;
    msg.sys_dst.assign("ULSQKRHMEDGUTAMAEGFDNHQXNIAUQXXDVWVBFKJWXFREZZUPDVFDGQITVAYIWAMVLQDIQGDCNOUKWZKJMKOLEHPATSPMONRHZYJENOXFDBBKOYLCBVYYQSBGEPTLSSSNFQOTCUOJXLMTQOTVXCIWAFJZUYHUV");
    msg.flags = 107U;
    const char tmp_msg_0[] = {46, 19, -30, -93, -49, -70, -80, -52, 16, -107, -24, 62, -109, 119, -118, 115, 78, 76, -21, 15, -35, -32, 110, 28, 82, 63, 51, 75, 22, 76, 96, -77, -122, -97, 33, 68, 77, 113, -11, 55, -84, 29, 51, 13, -103, 119, -58, -22, 104, 79, 41, 58, 81, 106, 120, 31, -69, 102, 45, 53, 69, -35, 51, -9, -27, -90, -14, -14, 73, 95, -4, 46, 14, 5, -62, -18, -36, -91, -115, -97, 123, 70, -109, -66, 57, 5, -17, 66, -120, -126, 105, -111, 63, -12, 16, 43, -56, -84, -9, 17, -17, 87, -29, 31, 12, -66, -96, -97, 20, -18, -82, -62, -75, 23, 88, -73, -56, -105, 12, -61, 73, -36, -122, 73, 18, 59, -20, 56, -4, 60, 50, -10, 117, -115, 32, 63, -110, -26, -22, 116, 65, -67, -14, 100, 67, -36, -101, -128, 30, 12, -48, 57, -62, -92, 88, -88, -76, 64, 88, 74, 2, -31, -77, -104, 5, 62, 41, -128, -95, 39, 97, 39};
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
    msg.setTimeStamp(0.32748566558);
    msg.setSource(10667U);
    msg.setSourceEntity(209U);
    msg.setDestination(57740U);
    msg.setDestinationEntity(50U);
    msg.sys_src.assign("MFIMJALQKSSZQUZBEIKWFDYGWYZPTHHCIBVJGWARJJDSEUCJTHSOFGCFCTXOKOXBBDMRQEQJFDIMMCMURGEOZIOWYSQLDLJVEAPCLCNVGNKOPDAHQKELVRHJARXVGOYGWUVNMRRSZOZZWXUKEMTNIHTFVWFUBLVQRNQAVLTWGKPKDBQJZNXIYXDYDXTKUBESNPHSIVFPYPYEPCGACGXOUYRYNPWKLDZTBTSHFLUPFCZQNTXXNJAUIB");
    msg.sys_dst.assign("UJROLIXBASZBJPUBDMSIBIICSOBVXQUVVRHTGUOVPZBTBJYFXPFPQRGFCXWCWHFKZKRYPERUMDCRNBHOAVADYVWZVOBSJYIWTPNEUIJQFCAHQSINDTTSNVIDKCQNTNHMRRGJFHEQCNAGMGHNZ");
    msg.flags = 247U;
    const char tmp_msg_0[] = {79, -47, 114, 17, -47, -24, 95, 99, -22, -106, 16, 57, -24, 96, 22, -106, 125, -100, 93, -74, -43, 11, -34, -104, -33, -37, -24, -3, 97, 77, 82, -102, 119, -105, -16, 80, 84, -66, -53, -29, -22, -68, -45, 60, -39, -108, -103, 113, 86, 52, 52, 66, 107, 82, 90, -56, -109, -116, -21, -57, -2, 85, -96, -12, 86, 91, 91, -91, 0, 91, 121, 74, -100, -13, -22, 97, -7, 12, 86, -57, 91, -72, -42, -15, 49, 50, 82, 61, -40, -14, -18, 31, -113, -49, 122, -107, -4, 66, -113, 109, -3, 87, -41, -74, 108, -65, -6, 126, 42, -11, 85, -1, 111, 79, -80, -7, -20, -78, 95, -110, -95, 10, 84, -77, -124, 24, 114, -75, -107, -85, -60, 0, 118, 50, -51, -13, -2, -20, -86, -63, -106, -78, 96, 4, 9, -79, -85, 43, -86, -59, 7, 12, -6, 37, -18, 80, 46, -46, 112, -81, -76, -18, -47, 3, -74, 62, 36, 4, -94, 15, 84, -113, -78, -126, -122, -53, -14, 105, -22, 71, -20, 40, 92, -11, 56, -105, -93, 73, -117, 51, 72, 0, -100, -65, -41, 16, -48, 107, 39, 116, 21, -4, 108, -25, -114, 100, 38, 124, 97, 116, -67, -29, -41, -48, -127, -27, 45, -60, -111, 114, -25, 26, 18, -106, 96, 61, -41, 30, 13, -50, -16, -32, 65, 14, -16};
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
    msg.setTimeStamp(0.941069358386);
    msg.setSource(28171U);
    msg.setSourceEntity(19U);
    msg.setDestination(54793U);
    msg.setDestinationEntity(212U);
    msg.sys_src.assign("CKETNWHWMXVGYPVCFKECDBRMRDBTNTXCDWVJJLIWSWWQPDUIMUTOSHIUVBJIZOLTNGBCXRRZHKARBAXSVIKLZDXMNGOGJUSAHZJSTSTNEEYGXMRHNOGOQVFJLDWXLAERZYAUZPCEKFY");
    msg.sys_dst.assign("NRFDHQLEOHLJBVMCCZASXGBDXYABJWJDTXGLOPCXTHWGGOZJZNZDYYINZMVVKODLDBUNRLSEIMUSDQTGYVTKQOFKOTNMKCUARKKSWGNABLFDQNFZLNEUIRHAVIUEIUOFIPCPJRMGSECBERTXCFJXQQPTBFKNHMCUEZPAIUPRJBJQSTLHTHYSA");
    msg.flags = 221U;
    const char tmp_msg_0[] = {0, 49, 97, 13, 39, 42, 20, -59, -110, -30, 119, -74, 110, 84, -41, -3, -28, -72, 115, -78, 83, 8, 106, 92, 50, -85, -27, 15, 62, -6, -56, 102, 78, 71, 29, 45, 46, 13, -29, -81, 15, 125, 22, 98, 88, -94, 101, -7, -6, 98, -126, -83, -57, 94, 125, 101, 47, 20, 126, -3, -21, 112, 51, -83, -102, 0, -47, 124, 116, 114, -99, 121, -30, 33, 64, -67, 0, 119, 51, 111, -2, -65, -88, 86, -84, 70, 108, 75, -29, -74, -40, -73, -118, 69, -48, -32, -115, 89, -107, -3, 66, -27, 54, -30, 83, 118, -2, -95, -127, -85, -15, 44, 49, 34, -9, 85, 8, -30, 11, -123, -127, 53, 93, -33, 2, -71, -44, -32, -103, 94, 44, -105, 1, 33, 1, 68, -66, 7, 91, -86, -95, 38, 4, -54, -33, -71, 31, 12, -94, -99, -20, -81, 33, 26, -112, 16, -86, -6, 82, -56, -13, 36, 114, -105, 72, -1, -20};
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
    msg.setTimeStamp(0.480889660103);
    msg.setSource(13731U);
    msg.setSourceEntity(201U);
    msg.setDestination(42603U);
    msg.setDestinationEntity(13U);
    msg.sys_src.assign("JYOLCHZMUHBTRNKCKAEFNRBFUOISIYGSOTIJEUOKPBOGVURCADTGYVVDVFUHZWXKCBQSXJMHUIYOZRUEQHVHDQBNHIUXEOBNHP");
    msg.sys_dst.assign("EYOBPQDNKYUQAQZVGXSDOORRCICIWTYZFLK");
    msg.flags = 151U;
    const char tmp_msg_0[] = {-16, 91, -82, -20, 26, 51, 24, -21, 11, 33, 80, -31, -78, -108, 120, -40, 6, 75, 65, 57, 126, 42, 48, 124, -80, -27, 0, -55, 3, 30, 27, 114, 40, -46, 81, -71, -72, -121, 40, -75, -118, 118, -22, 71, -110, 58, 6, 88, 126, -74, 100, -81, 16, 8, 91, 94, -26, 93, 50, -9, 58, -108, 40, 45, 117, 95, -40, 91, 104, 57, -100, -127, 86, 50, -67, -126, -38};
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
    msg.setTimeStamp(0.749446257038);
    msg.setSource(29594U);
    msg.setSourceEntity(1U);
    msg.setDestination(49436U);
    msg.setDestinationEntity(129U);
    msg.seq = 52426U;
    msg.value = 250U;
    msg.error.assign("QSTLAXZHJZSKSGSVVGOONKOQTYEKFCDZVHIUBZWUYDGHEQMXMACJAG");

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
    msg.setTimeStamp(0.0682130592239);
    msg.setSource(1496U);
    msg.setSourceEntity(2U);
    msg.setDestination(57406U);
    msg.setDestinationEntity(153U);
    msg.seq = 3478U;
    msg.value = 75U;
    msg.error.assign("YOGDBMGVBGYMFTLZQJEINYCCIGLZUYRCKRRVXEJAYHAZLTBCHDFUXWH");

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
    msg.setTimeStamp(0.619818514668);
    msg.setSource(65522U);
    msg.setSourceEntity(203U);
    msg.setDestination(57707U);
    msg.setDestinationEntity(114U);
    msg.seq = 41673U;
    msg.value = 130U;
    msg.error.assign("PKCUTHQLIPCITYBTRIFZAUVDOHCXOQXGRDACEQJFYAQ");

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
    msg.setTimeStamp(0.647384848486);
    msg.setSource(62809U);
    msg.setSourceEntity(79U);
    msg.setDestination(48605U);
    msg.setDestinationEntity(199U);
    msg.seq = 22265U;
    msg.sys.assign("BPGGQLJSTKQFEFZUTNYJTYMYOMDPFJKEUXHVBIPHJQOXOXWOSVVSVEDJIVSKZKTIIGZHXUTZNIOBXCWEKBYDWGNCBHDILHEALSFJXYUWEELHRURRQCUBNYZMP");
    msg.value = 0.0148127969486;

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
    msg.setTimeStamp(0.317388163906);
    msg.setSource(47476U);
    msg.setSourceEntity(241U);
    msg.setDestination(48848U);
    msg.setDestinationEntity(168U);
    msg.seq = 40445U;
    msg.sys.assign("RCIDGGFJZSDXSEMGNTSGGUSDPMIYEQHOPCDFDAMWBHIHYESUJZPXBVVDTKECKLJOOKYRZPJIRWPXPYJQIWCHRNJKXKCYEGUWEUFMXXSCBIRKVLZZWLJYLXJENYVHANTVSEQELYNKHNNNUKRHAVUZTVLFQADMPCLTGPBSVIPRNWFBTZMCBQBRVUWOOAQMBUHTFRHGXHZWJRTNLDYOGKIVYKSWAZXFJZE");
    msg.value = 0.726349075821;

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
    msg.setTimeStamp(0.134685295077);
    msg.setSource(32998U);
    msg.setSourceEntity(19U);
    msg.setDestination(5932U);
    msg.setDestinationEntity(108U);
    msg.seq = 56617U;
    msg.sys.assign("NAUZCGWSUOWJDNQFPYVVUHBWNTPGZDQKWRLYWPLSVBBZZFVDPKSCTNEI");
    msg.value = 0.597304689957;

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
    msg.setTimeStamp(0.824431401516);
    msg.setSource(53960U);
    msg.setSourceEntity(35U);
    msg.setDestination(53589U);
    msg.setDestinationEntity(7U);
    msg.action = 137U;
    msg.longain = 0.336257418705;
    msg.latgain = 0.518720678954;
    msg.bondthick = 1001583209U;
    msg.leadgain = 0.649041470235;
    msg.deconflgain = 0.149592168148;

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
    msg.setTimeStamp(0.404505737915);
    msg.setSource(48128U);
    msg.setSourceEntity(11U);
    msg.setDestination(4438U);
    msg.setDestinationEntity(14U);
    msg.action = 218U;
    msg.longain = 0.0640685677655;
    msg.latgain = 0.703251231021;
    msg.bondthick = 1194707277U;
    msg.leadgain = 0.356117969049;
    msg.deconflgain = 0.289926704532;

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
    msg.setTimeStamp(0.487794944543);
    msg.setSource(13740U);
    msg.setSourceEntity(201U);
    msg.setDestination(32869U);
    msg.setDestinationEntity(10U);
    msg.action = 244U;
    msg.longain = 0.365328934431;
    msg.latgain = 0.723414080599;
    msg.bondthick = 2774361941U;
    msg.leadgain = 0.932306587775;
    msg.deconflgain = 0.289398066688;

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
    msg.setTimeStamp(0.80990764812);
    msg.setSource(49320U);
    msg.setSourceEntity(85U);
    msg.setDestination(31028U);
    msg.setDestinationEntity(128U);
    msg.err_mean = 0.736299598999;
    msg.dist_min_abs = 0.0929396300121;
    msg.dist_min_mean = 0.964010632138;

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
    msg.setTimeStamp(0.747856594603);
    msg.setSource(20226U);
    msg.setSourceEntity(107U);
    msg.setDestination(50103U);
    msg.setDestinationEntity(113U);
    msg.err_mean = 0.809599733397;
    msg.dist_min_abs = 0.680116989464;
    msg.dist_min_mean = 0.402367017346;

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
    msg.setTimeStamp(0.963637629979);
    msg.setSource(14139U);
    msg.setSourceEntity(205U);
    msg.setDestination(35371U);
    msg.setDestinationEntity(77U);
    msg.err_mean = 0.868108236341;
    msg.dist_min_abs = 0.851601093211;
    msg.dist_min_mean = 0.724988653284;

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
    msg.setTimeStamp(0.426138347222);
    msg.setSource(30105U);
    msg.setSourceEntity(30U);
    msg.setDestination(48561U);
    msg.setDestinationEntity(153U);
    msg.action = 151U;
    msg.lon_gain = 0.247754594098;
    msg.lat_gain = 0.478843770311;
    msg.bond_thick = 0.734823351041;
    msg.lead_gain = 0.858366428218;
    msg.deconfl_gain = 0.983286712286;
    msg.accel_switch_gain = 0.392158588919;
    msg.safe_dist = 0.284261881571;
    msg.deconflict_offset = 0.273860712745;
    msg.accel_safe_margin = 0.921403104711;
    msg.accel_lim_x = 0.879321353024;

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
    msg.setTimeStamp(0.695074347168);
    msg.setSource(49066U);
    msg.setSourceEntity(210U);
    msg.setDestination(6212U);
    msg.setDestinationEntity(190U);
    msg.action = 137U;
    msg.lon_gain = 0.86779070957;
    msg.lat_gain = 0.920421043104;
    msg.bond_thick = 0.298731847865;
    msg.lead_gain = 0.570668232783;
    msg.deconfl_gain = 0.427070073974;
    msg.accel_switch_gain = 0.53299114126;
    msg.safe_dist = 0.465882333394;
    msg.deconflict_offset = 0.991382046546;
    msg.accel_safe_margin = 0.00999474830873;
    msg.accel_lim_x = 0.324255790822;

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
    msg.setTimeStamp(0.190080966324);
    msg.setSource(14325U);
    msg.setSourceEntity(143U);
    msg.setDestination(11708U);
    msg.setDestinationEntity(35U);
    msg.action = 69U;
    msg.lon_gain = 0.343849618767;
    msg.lat_gain = 0.590104827241;
    msg.bond_thick = 0.438761969788;
    msg.lead_gain = 0.980371220557;
    msg.deconfl_gain = 0.987603655022;
    msg.accel_switch_gain = 0.362051638413;
    msg.safe_dist = 0.0730791961474;
    msg.deconflict_offset = 0.123441597408;
    msg.accel_safe_margin = 0.816421379363;
    msg.accel_lim_x = 0.468819768859;

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
    msg.setTimeStamp(0.663258290621);
    msg.setSource(7076U);
    msg.setSourceEntity(161U);
    msg.setDestination(32738U);
    msg.setDestinationEntity(174U);
    msg.type = 216U;
    msg.op = 199U;
    msg.err_mean = 0.738271115212;
    msg.dist_min_abs = 0.360836905297;
    msg.dist_min_mean = 0.0210079984654;
    msg.roll_rate_mean = 0.357765177264;
    msg.time = 0.501138061088;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 107U;
    tmp_msg_0.lon_gain = 0.872596271088;
    tmp_msg_0.lat_gain = 0.263587864704;
    tmp_msg_0.bond_thick = 0.298154628152;
    tmp_msg_0.lead_gain = 0.820052039297;
    tmp_msg_0.deconfl_gain = 0.918119702812;
    tmp_msg_0.accel_switch_gain = 0.575820069681;
    tmp_msg_0.safe_dist = 0.156117694185;
    tmp_msg_0.deconflict_offset = 0.705570391594;
    tmp_msg_0.accel_safe_margin = 0.713034911323;
    tmp_msg_0.accel_lim_x = 0.159194351844;
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
    msg.setTimeStamp(0.134503405408);
    msg.setSource(13715U);
    msg.setSourceEntity(234U);
    msg.setDestination(48837U);
    msg.setDestinationEntity(85U);
    msg.type = 132U;
    msg.op = 11U;
    msg.err_mean = 0.121674753761;
    msg.dist_min_abs = 0.0641178768765;
    msg.dist_min_mean = 0.222634239495;
    msg.roll_rate_mean = 0.345232561217;
    msg.time = 0.111013312596;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 70U;
    tmp_msg_0.lon_gain = 0.140830482447;
    tmp_msg_0.lat_gain = 0.256875561845;
    tmp_msg_0.bond_thick = 0.705145323486;
    tmp_msg_0.lead_gain = 0.0711110160333;
    tmp_msg_0.deconfl_gain = 0.177135812956;
    tmp_msg_0.accel_switch_gain = 0.517908239974;
    tmp_msg_0.safe_dist = 0.224273840671;
    tmp_msg_0.deconflict_offset = 0.191922636921;
    tmp_msg_0.accel_safe_margin = 0.931000260961;
    tmp_msg_0.accel_lim_x = 0.782997142179;
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
    msg.setTimeStamp(0.827204337872);
    msg.setSource(58476U);
    msg.setSourceEntity(169U);
    msg.setDestination(1197U);
    msg.setDestinationEntity(215U);
    msg.type = 248U;
    msg.op = 77U;
    msg.err_mean = 0.4641675031;
    msg.dist_min_abs = 0.430264677242;
    msg.dist_min_mean = 0.43233949961;
    msg.roll_rate_mean = 0.47666699776;
    msg.time = 0.457885376635;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 66U;
    tmp_msg_0.lon_gain = 0.979353073143;
    tmp_msg_0.lat_gain = 0.548491138255;
    tmp_msg_0.bond_thick = 0.490023872841;
    tmp_msg_0.lead_gain = 0.813818334352;
    tmp_msg_0.deconfl_gain = 0.225858421081;
    tmp_msg_0.accel_switch_gain = 0.584895867641;
    tmp_msg_0.safe_dist = 0.947741974785;
    tmp_msg_0.deconflict_offset = 0.598420078466;
    tmp_msg_0.accel_safe_margin = 0.841809877359;
    tmp_msg_0.accel_lim_x = 0.72249034952;
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
    msg.setTimeStamp(0.0845688081212);
    msg.setSource(40844U);
    msg.setSourceEntity(89U);
    msg.setDestination(4739U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.989085773697;
    msg.lon = 0.888913059914;
    msg.eta = 1561218623U;
    msg.duration = 45380U;

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
    msg.setTimeStamp(0.51594060091);
    msg.setSource(21640U);
    msg.setSourceEntity(5U);
    msg.setDestination(17854U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.488793285415;
    msg.lon = 0.349665490344;
    msg.eta = 1921334331U;
    msg.duration = 28560U;

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
    msg.setTimeStamp(0.916599780647);
    msg.setSource(25200U);
    msg.setSourceEntity(154U);
    msg.setDestination(57772U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.0130811328936;
    msg.lon = 0.838280894703;
    msg.eta = 2140726004U;
    msg.duration = 9025U;

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
    msg.setTimeStamp(0.163009996609);
    msg.setSource(6842U);
    msg.setSourceEntity(161U);
    msg.setDestination(65290U);
    msg.setDestinationEntity(173U);
    msg.plan_id = 53733U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.334848546304;
    tmp_msg_0.lon = 0.841180608218;
    tmp_msg_0.eta = 1393066040U;
    tmp_msg_0.duration = 26645U;
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
    msg.setTimeStamp(0.706257275204);
    msg.setSource(18412U);
    msg.setSourceEntity(61U);
    msg.setDestination(4352U);
    msg.setDestinationEntity(189U);
    msg.plan_id = 41857U;

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
    msg.setTimeStamp(0.34837623731);
    msg.setSource(23752U);
    msg.setSourceEntity(32U);
    msg.setDestination(13647U);
    msg.setDestinationEntity(118U);
    msg.plan_id = 14945U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.761463922496;
    tmp_msg_0.lon = 0.532315972725;
    tmp_msg_0.eta = 2317906617U;
    tmp_msg_0.duration = 59159U;
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
    msg.setTimeStamp(0.900745218077);
    msg.setSource(3750U);
    msg.setSourceEntity(75U);
    msg.setDestination(43366U);
    msg.setDestinationEntity(187U);
    msg.type = 3U;
    msg.command = 38U;
    msg.settings.assign("GWJIUGCTSDVHEFTVJSGGPKELXHYLRYIPMREWZEIKLSXDTYOUKOHWCMZMYZMXNYKIGLAMENVQCWKORFOFXVDOPUFYOSJEZRIEFVADZSXPSPQZXWIPNINLZBUZBXJFFXMTCSQNDLJEOBPQAHFVBBBVKUIRUMVCZHQNUFNNKWRBHTYOGRECYATZUQQLHWCRBTOXWYBVDHTVUXCLANGGLKGHPTJFJAJYIAPSJAERS");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 18085U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.190394924002;
    tmp_tmp_msg_0_0.lon = 0.716678986195;
    tmp_tmp_msg_0_0.eta = 4158450730U;
    tmp_tmp_msg_0_0.duration = 8618U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("OGHSBBIKFYFWNMQONXYENSLCAQTLVBZPSDHNGTSQREQDZWQUATHWKGPKHDHJUUDSCPTPVRJWEJDVXRWIMRDUDZBFXECRXOQPVNSUJNEYEUXASKKFFDZGOTXWEFAQVJLZOCTGCIYAPYJHBZZUOLCSABLTABDICYIVDINRZFMMGFKELZMPWUHHXGCTACOPY");

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
    msg.setTimeStamp(0.850732787959);
    msg.setSource(22935U);
    msg.setSourceEntity(247U);
    msg.setDestination(59918U);
    msg.setDestinationEntity(216U);
    msg.type = 44U;
    msg.command = 71U;
    msg.settings.assign("CSMUZWYGVPERJENQADPQCCVAMYIIMWKUPBRICPVNUYWAHLHJLESORLJFBWVZMLBNRQADRQSIIRHUEKSPQBKKDPCMODHXAHNIZUXDYNXDHRGVZZWHDVLCLUOTNNRLTGZOGXGMUWCQP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 9200U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GJDSCNJSBIRVJHQOIYFDAEMJPWKLHRWEMWVOZXQTHNFMMMUNCAHLFKCCGTPTSLHX");

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
    msg.setTimeStamp(0.58027262621);
    msg.setSource(34997U);
    msg.setSourceEntity(127U);
    msg.setDestination(34727U);
    msg.setDestinationEntity(240U);
    msg.type = 162U;
    msg.command = 252U;
    msg.settings.assign("VVEHXVKPZVPGYEOHAZRTMADUVLXOWBIXZDNHCRRMQQIAYOIPECLJBPJXXZWMTHGAIVITQMPUVGQRREDJQMJUTLJTVNVCKRESGNVROBXEKYPBSUEFHXQNWXQDDGKMFOZBNFPZYURBFAGWYMZFOBCGHJIJTKKPIQQSLSAEGRJDWSFTCLDCZUR");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 59672U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0418243636512;
    tmp_tmp_msg_0_0.lon = 0.417586587102;
    tmp_tmp_msg_0_0.eta = 1105179832U;
    tmp_tmp_msg_0_0.duration = 52995U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XEZKSGWJLAXFQFFURCUJAMSJTTRPIONBYZACSXSRTBAPRKJAHWYZBPGEFMUXLNRFEACQHMMDEHOGIELNSOQNEGFMXCJZWJEVEYDCPJDPO");

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
    msg.setTimeStamp(0.541715034924);
    msg.setSource(47515U);
    msg.setSourceEntity(120U);
    msg.setDestination(24232U);
    msg.setDestinationEntity(89U);
    msg.state = 10U;
    msg.plan_id = 56339U;
    msg.wpt_id = 206U;
    msg.settings_chk = 59648U;

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
    msg.setTimeStamp(0.120005489147);
    msg.setSource(46472U);
    msg.setSourceEntity(243U);
    msg.setDestination(31797U);
    msg.setDestinationEntity(137U);
    msg.state = 88U;
    msg.plan_id = 59021U;
    msg.wpt_id = 104U;
    msg.settings_chk = 38306U;

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
    msg.setTimeStamp(0.218834869899);
    msg.setSource(50855U);
    msg.setSourceEntity(177U);
    msg.setDestination(36078U);
    msg.setDestinationEntity(198U);
    msg.state = 242U;
    msg.plan_id = 30784U;
    msg.wpt_id = 116U;
    msg.settings_chk = 29170U;

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
    msg.setTimeStamp(0.111209305606);
    msg.setSource(17233U);
    msg.setSourceEntity(100U);
    msg.setDestination(35335U);
    msg.setDestinationEntity(57U);
    msg.uid = 88U;
    msg.frag_number = 127U;
    msg.num_frags = 176U;
    const char tmp_msg_0[] = {0, -17, 121, 120, -8, 67, -23, -102, 63, 46, 63, 16, 18, -126, -44, 125, 57, -58, -82, -26, 76, -11, 72, -4, -46, -93, 74, -19, 43, 99, 2, 3, -38, 0, -52, -23, 104, -35, -50, 88, 119, -100, 100, 4, -60, -102, -55, -115, -5, 63, 36, 44, 89, 110, 59, -44, -75, -116, -17, -56, 106, 82, -78, -89, 84, 24, -36, -84, -33, -87, 16, -47, 59, 20, -111, 63, 28, -120, 113, -19, 65, 125, -23, 91, 25, 82, -97, -14, 18, 89, 31, 118, 112, 13, 20, 4, 46, -56, -115, -124, -4, 67, -84, -90, -11, -58, 92, -110, 60, 79, 113, 78, -32, 99, 33, 58, -123, 72, 5, -110, -102, -33, -61, -78, -10, 72, 30, 40, -84, -81, 3, 19, 38};
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
    msg.setTimeStamp(0.46924975687);
    msg.setSource(6164U);
    msg.setSourceEntity(110U);
    msg.setDestination(53253U);
    msg.setDestinationEntity(80U);
    msg.uid = 120U;
    msg.frag_number = 184U;
    msg.num_frags = 174U;
    const char tmp_msg_0[] = {-37, -13, -87, 126, 15, 67, -66, 70, -65, -100, -112, -103, -77, -20, -124, -125, 70, -118, 77, 46, -90, -87, 25, 37, -111, -114, 37, 3, 3, -56, 86, 104, 122, -33, -48, 121, 96, 20, 29, -87, 66, -48, 112, 78, -13, 52, -66, 20, -75, -96, -1, 63, 64, -116, 112, 40, -38, 85, 4, -109, -123, -6, 44, -91, 119, -23, -91, -98, 21, -56, -10, 41, -58, 103, -23, -65, 22, -95, 62, 0, -72, -70, -57, -49, 105, 53, 5, -101, -118, -76, 71, -26, 53, 73, 86, -12, -73, -47, 72, -100, -54, -11, -72, 101, -45, -117, 101, 2, 100, -64, 66, -63, 51, 92, -22, 35, 89, 50, 28, -49, 16, -42, -59, 89, -46, 125, 3, -89, -112, 16, -85, -111, 15, -74, 46, -49, -104, -38, 18, -122, -4, -48, 94, -70, 50, -18, -95, 110, -39, 32, 22, -50, 84, 11, 81, -57, 50, -24, 90, 1, 104, 7, 116, 113, 78, 114, -103, 66, -5, 104, -99, -55, -72, -43, -116, 65, -116, 1, -105, -50, -99, -2, 20, -116, 92};
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
    msg.setTimeStamp(0.742452534181);
    msg.setSource(51459U);
    msg.setSourceEntity(232U);
    msg.setDestination(47504U);
    msg.setDestinationEntity(159U);
    msg.uid = 129U;
    msg.frag_number = 6U;
    msg.num_frags = 59U;
    const char tmp_msg_0[] = {-38, -20, 105, 6, 102, -7, 109, -51, -65, 107, 28, 36, -13, -102, -111, -73, -123, 104, 52, -44, 110, 88, -63, 61, -31, 101, -14, 72, 103, 86, -117, -99, 124, 118, 2, 22, 41, 44, 18, 1, -112, 112, -46, 92, -87, -11};
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
    msg.setTimeStamp(0.00686846647757);
    msg.setSource(1215U);
    msg.setSourceEntity(40U);
    msg.setDestination(9810U);
    msg.setDestinationEntity(254U);
    msg.content_type.assign("MPFUKCEYPNIMSYGHOBWRFMVFZQMXPSZITYSTGWJNOPXOBZJ");
    const char tmp_msg_0[] = {113, -83, -37, 46, -117, -40, 54, -127, -51, -3, 58, -90, -41, 48, -98, 42, -17, 102, 86, -49, -78, -12, -54, 14, 48, -9, 79, -35, 55, 94, 22, 54, -38, -79, 118, -78, -110, 95, 78, -112, -68, 97, 93, 110, 25, -51, 80, 1, -50, 94, -126, 47, 13, 88, -88, -8, 109, -75, -115, 32, -52, -13, 26};
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
    msg.setTimeStamp(0.00201769435851);
    msg.setSource(5511U);
    msg.setSourceEntity(207U);
    msg.setDestination(47219U);
    msg.setDestinationEntity(78U);
    msg.content_type.assign("CJBEQRLGETWFJNGBNCVHYPROMDPDWWSOWTICRFAJHUCHQNAOYBYYMIFFMNOUVCDGIRZRBCDPYKELSNGQDKIQVMUSMSYGVQHQTFJXYTLBZOBBFAPM");
    const char tmp_msg_0[] = {23, -23, 19, -29, -20, -106, 96, -57, -73, -115, -35, -108, 33, 28, -29, -125, -116, 100, 12};
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
    msg.setTimeStamp(0.742113861541);
    msg.setSource(23655U);
    msg.setSourceEntity(3U);
    msg.setDestination(47516U);
    msg.setDestinationEntity(113U);
    msg.content_type.assign("FZBTEOLMRMWZDQFKYYCYIYVATOURXKWJJ");
    const char tmp_msg_0[] = {11, -94, 18, 78, 76, -45, -97, 67, -86, -2, -102, 76, 11, -31, -32, -126, -38, -38, -92, 4, 22, 19, -33, -59, 116, -115, 19, -21, -109, 67, 118, 1, 72, -78, -33, 83, -118, 118, -40, 67, 28, -16, -44, -85, -119, -43, -67, 7, -24, 119, -74, -88, 24, -85, -73, 123, 21, 24, 60, -76, -66, -99, -81, 66, 24, 69, 25, -105, -67, -95, -45, 21, -67, -98, 81, -35, 21, -63, 2, -21, 89, -60, 20, 0, 21, -57, 1, 4, -13, 85, -73, 52, -76, -119, -64, -105, -58, 115, -40, -106, 80, 107, -13, -41, -78, 102, -84, 117, 96, 101, -100, -58, 39, 10, -28, 43, -94, 114, 62, -54, 119, 67, 98, 29, 67, 14, 6, 58, 38, 89, 98, -119, 95, -7, 78, 21, -118, 59, 55, -79, 68, 17, 78, -93, 105, -117, 41, 46, -62, 50, -37, -83, 32, 124, -122, 59, 112, -98, 102, 66, -1, 45, -105, 82, 44, -38, -91, 74, -74, 10, -37, -64, 126, -104, -2, 43, 22, 113, 73, 126, 110, 36, 13, -53, -119, 65, 23, 100, 17, -111, -58, -99, 48, 90, -31, 62, -38, -115, 79, 51, 8, 107, -10, -9, -32, 27, 28, -12, 77, 101, 12, -15, -75, 106, -105, -108, 1, -7, 113, -7, 50, 3, 66, -39, 94, 64, -113, 53, -27, -69, 50, 1, 85, -90, 73, -94, -33, -99, -23, 124, -61, -100, -33, -98, 8, 17, -3, 54, 123, -121, 73};
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
    msg.setTimeStamp(0.813767352245);
    msg.setSource(5583U);
    msg.setSourceEntity(5U);
    msg.setDestination(10227U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.769818192747);
    msg.setSource(39271U);
    msg.setSourceEntity(138U);
    msg.setDestination(46657U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.521379340912);
    msg.setSource(57173U);
    msg.setSourceEntity(160U);
    msg.setDestination(43078U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.997767192357);
    msg.setSource(56562U);
    msg.setSourceEntity(233U);
    msg.setDestination(36127U);
    msg.setDestinationEntity(227U);
    msg.target = 13383U;
    msg.bearing = 0.569481367596;
    msg.elevation = 0.880993291935;

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
    msg.setTimeStamp(0.837429876475);
    msg.setSource(49035U);
    msg.setSourceEntity(103U);
    msg.setDestination(62493U);
    msg.setDestinationEntity(247U);
    msg.target = 23603U;
    msg.bearing = 0.281986805331;
    msg.elevation = 0.562134860217;

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
    msg.setTimeStamp(0.960001325989);
    msg.setSource(58073U);
    msg.setSourceEntity(91U);
    msg.setDestination(36975U);
    msg.setDestinationEntity(55U);
    msg.target = 26289U;
    msg.bearing = 0.698941768015;
    msg.elevation = 0.116070403342;

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
    msg.setTimeStamp(0.271733902757);
    msg.setSource(1247U);
    msg.setSourceEntity(199U);
    msg.setDestination(3110U);
    msg.setDestinationEntity(9U);
    msg.target = 11975U;
    msg.x = 0.540074669834;
    msg.y = 0.704851609325;
    msg.z = 0.590179842499;

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
    msg.setTimeStamp(0.587456270666);
    msg.setSource(42404U);
    msg.setSourceEntity(237U);
    msg.setDestination(45180U);
    msg.setDestinationEntity(140U);
    msg.target = 36882U;
    msg.x = 0.436605778;
    msg.y = 0.760351172651;
    msg.z = 0.957143196809;

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
    msg.setTimeStamp(0.106921344125);
    msg.setSource(46332U);
    msg.setSourceEntity(236U);
    msg.setDestination(530U);
    msg.setDestinationEntity(152U);
    msg.target = 2637U;
    msg.x = 0.37855975524;
    msg.y = 0.730387395122;
    msg.z = 0.27935556462;

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
    msg.setTimeStamp(0.102985328391);
    msg.setSource(3171U);
    msg.setSourceEntity(32U);
    msg.setDestination(57558U);
    msg.setDestinationEntity(146U);
    msg.target = 45673U;
    msg.lat = 0.831750159889;
    msg.lon = 0.572862857916;
    msg.z_units = 71U;
    msg.z = 0.960749504639;

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
    msg.setTimeStamp(0.604359784858);
    msg.setSource(2460U);
    msg.setSourceEntity(63U);
    msg.setDestination(37728U);
    msg.setDestinationEntity(14U);
    msg.target = 61101U;
    msg.lat = 0.677888557874;
    msg.lon = 0.0807471889616;
    msg.z_units = 95U;
    msg.z = 0.0117059395744;

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
    msg.setTimeStamp(0.13502057597);
    msg.setSource(63417U);
    msg.setSourceEntity(0U);
    msg.setDestination(35230U);
    msg.setDestinationEntity(8U);
    msg.target = 64948U;
    msg.lat = 0.071207215553;
    msg.lon = 0.109792922011;
    msg.z_units = 36U;
    msg.z = 0.391348449008;

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
    msg.setTimeStamp(0.378196720769);
    msg.setSource(6663U);
    msg.setSourceEntity(38U);
    msg.setDestination(36031U);
    msg.setDestinationEntity(195U);
    msg.locale.assign("ZREZISFHSORFIXCYPQTVQLQELRBKPSXLNOZHRFWMGKBWHNFUCEBUVQVIJHZYNGQKEIGHVPDGYZRKHWSPMCYASLMMRBDUODJXTVFYIVUKAVPFQRUPSDCVZADNBWAGYXZUWTGLIXLHUMWVYRDMSWYNTSCT");
    const char tmp_msg_0[] = {-35, 105, -17, 23, 111, 49, 53, -25, -55, -41, 85, -78, 102, -57, 103, -25, 65, -108, 56, -14, -125, -69, 70, 93, 67, -104, 27, -125, -92, 32, 108, 39, -71, 41, -77, -7, 100, 27, -107, 126, 113, -114, -59, 26, 91, -47, 74, 88, 81, -64, -67, -31, 125, 23, 96, -85, -63, -80, -36, 115, -98, -30, 3, 36, 59, -27, 92, 115, 101, -44, 119, -69, -34, -38, 115, -50, 122, -115, 89, -93, 0, -57, -96, -7, -102, 105, -69, -96, -104, -125, -121, 104, -116, -76, 27, -12, -32, -107, -17, 113, 62, -96, -51, -5, 56, 70, 45, -25, 51, -15, 97, 65, -65, -44, -63, 77, -124, -100, 70, -3, 62, -7, -116, 62, 36, 66, -78, 76, 96, -113, -18, 78, -64, -46, -82, 88, 17, -128, 52, 124, -1, -100, 61, 28, 75, 81, 26, 20, -43, 49, -88, 33, -116, -9, 67, 37, -44, -46, 123, 115, -92, -89, 32, -54, 1, -3, 12, 86, 60, 14, -127, 9, -90, 27, -47, -16, -14, 41, -16, -96, 110, 59, 78, -33, -53, 22, -107, -71};
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
    msg.setTimeStamp(0.724871621005);
    msg.setSource(7576U);
    msg.setSourceEntity(109U);
    msg.setDestination(55675U);
    msg.setDestinationEntity(150U);
    msg.locale.assign("CPLELGHPNSWTEZODVAHWVOBJLKXFDINOIFDNXLVRUNWKNKBCFTXRUBBRNHJAXZLTYZSJMFEUQXMPYCQSZXUDHAAFXYRIZHNIVOIMEMPRTGQIERUSGPQEEWJNQAYLEOGSHA");
    const char tmp_msg_0[] = {114, -12, -48, 35, -117, -113, 118, 107, 59, -97, -53, 15, -52, 50, 121, -73, 110, 85, 16, 102, -57, 97, -40, -127, 2, -95, -14, 84, -7, -89, -15, -111, -82, -46, 51, 116, -33, 112};
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
    msg.setTimeStamp(0.0367599471801);
    msg.setSource(5523U);
    msg.setSourceEntity(151U);
    msg.setDestination(48256U);
    msg.setDestinationEntity(127U);
    msg.locale.assign("YCLDRSEXPRTXTBPDQZTZUNIGXNSAKARQXBUFVWZKJRYCFQOPZUMSKFRSOICAXSYNXVDYGCEWLOYVOPEFKWQQQHWNDEGEOMAWVRMGJYRRDCVWCOZHCGWVVEHGGLTRAAHLJFHLCEZXWZFYTBGDOXJIBFIPCBQDJAUXYKNPSADYUVEEMLKQBBLUKHPLJHBMBISVHHSJTPUKJYZSMSJTKLNAFNUFWRNICMIWTIOLXFMMUBTTOINIGDDGK");
    const char tmp_msg_0[] = {95, 83, 71, -37, -100, 111, -70, 34, -38, 28, 124, 18, 85, -28, 85, 17, -7, -69, -21, -79, -28, 66, -35, 55, -58, -96, -28, -46, -55, 16, -8, 121, 114, -23, -100, 69, 113, 20, 87, -88, -99, -73, -22, 94, 99};
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
    msg.setTimeStamp(0.631655121505);
    msg.setSource(64693U);
    msg.setSourceEntity(157U);
    msg.setDestination(57781U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.160070685363);
    msg.setSource(11698U);
    msg.setSourceEntity(44U);
    msg.setDestination(46710U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.211549552875);
    msg.setSource(16744U);
    msg.setSourceEntity(186U);
    msg.setDestination(31292U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.672727532819);
    msg.setSource(46984U);
    msg.setSourceEntity(254U);
    msg.setDestination(23086U);
    msg.setDestinationEntity(122U);
    msg.camid = 203U;
    msg.x = 35381U;
    msg.y = 52672U;

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
    msg.setTimeStamp(0.469634995942);
    msg.setSource(15820U);
    msg.setSourceEntity(79U);
    msg.setDestination(44410U);
    msg.setDestinationEntity(131U);
    msg.camid = 97U;
    msg.x = 44438U;
    msg.y = 41845U;

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
    msg.setTimeStamp(0.972117843683);
    msg.setSource(32318U);
    msg.setSourceEntity(210U);
    msg.setDestination(2109U);
    msg.setDestinationEntity(169U);
    msg.camid = 227U;
    msg.x = 7210U;
    msg.y = 24604U;

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
    msg.setTimeStamp(0.748748886773);
    msg.setSource(39545U);
    msg.setSourceEntity(0U);
    msg.setDestination(36507U);
    msg.setDestinationEntity(242U);
    msg.camid = 158U;
    msg.x = 46696U;
    msg.y = 19417U;

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
    msg.setTimeStamp(0.0192534764426);
    msg.setSource(48667U);
    msg.setSourceEntity(101U);
    msg.setDestination(47904U);
    msg.setDestinationEntity(83U);
    msg.camid = 14U;
    msg.x = 48230U;
    msg.y = 35692U;

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
    msg.setTimeStamp(0.633846231098);
    msg.setSource(21074U);
    msg.setSourceEntity(170U);
    msg.setDestination(15299U);
    msg.setDestinationEntity(169U);
    msg.camid = 140U;
    msg.x = 26185U;
    msg.y = 32267U;

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
    msg.setTimeStamp(0.239915743935);
    msg.setSource(25881U);
    msg.setSourceEntity(44U);
    msg.setDestination(45338U);
    msg.setDestinationEntity(115U);
    msg.tracking = 33U;
    msg.lat = 0.950019915349;
    msg.lon = 0.11495947111;
    msg.x = 0.889583624061;
    msg.y = 0.703723048077;
    msg.z = 0.477466375635;

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
    msg.setTimeStamp(0.870384816132);
    msg.setSource(29896U);
    msg.setSourceEntity(71U);
    msg.setDestination(53391U);
    msg.setDestinationEntity(125U);
    msg.tracking = 249U;
    msg.lat = 0.83949770312;
    msg.lon = 0.803932584821;
    msg.x = 0.262145983842;
    msg.y = 0.0156678521729;
    msg.z = 0.845958903162;

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
    msg.setTimeStamp(0.591147867328);
    msg.setSource(18442U);
    msg.setSourceEntity(11U);
    msg.setDestination(11309U);
    msg.setDestinationEntity(98U);
    msg.tracking = 207U;
    msg.lat = 0.873099466544;
    msg.lon = 0.0900748574553;
    msg.x = 0.793408466289;
    msg.y = 0.79887531384;
    msg.z = 0.621730424854;

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
    msg.setTimeStamp(0.988621105045);
    msg.setSource(63721U);
    msg.setSourceEntity(19U);
    msg.setDestination(38058U);
    msg.setDestinationEntity(48U);
    msg.target.assign("HDJRNNKKKLPVSPNIFBGFJHEXIOIULTXEWGAGLVKPCVQZUIISOQYTHWUFRXKHRCCFRXAXVACTCJZZHOGSKMFNTRXFWDWMEWJAGYQAPQJDMKTSYLMPBKHSUHWJMLBYOCNBAETEMQBDDONDFAMYRETZCRJSOSLCYOKUQUFNNAHGGRCJMB");
    msg.lbearing = 0.926657560781;
    msg.lelevation = 0.589309419169;
    msg.bearing = 0.632241960257;
    msg.elevation = 0.506033902795;
    msg.phi = 0.366835497476;
    msg.theta = 0.46613543325;
    msg.psi = 0.54051424252;
    msg.accuracy = 0.929931668848;

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
    msg.setTimeStamp(0.0373438687175);
    msg.setSource(13491U);
    msg.setSourceEntity(115U);
    msg.setDestination(28336U);
    msg.setDestinationEntity(140U);
    msg.target.assign("VFSFOBQMOOVBZJVRTNJZCBYXZGQLIYRXLIFPKOYVECLPKEFALUHB");
    msg.lbearing = 0.524973966502;
    msg.lelevation = 0.411237685707;
    msg.bearing = 0.739550930304;
    msg.elevation = 0.281129381295;
    msg.phi = 0.940020014518;
    msg.theta = 0.989056938711;
    msg.psi = 0.375778876274;
    msg.accuracy = 0.717280237135;

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
    msg.setTimeStamp(0.183030561595);
    msg.setSource(29519U);
    msg.setSourceEntity(157U);
    msg.setDestination(30769U);
    msg.setDestinationEntity(189U);
    msg.target.assign("ZTLSQMFDOUAWVPDVJAOUIFIEAYJDKUCHCCWNIBJMOIZKIMZTGUOUZHBYOHEWZULVKQVGJLFRLDBBYYWJICIBDQJEASQKBSMAFRYJCMKXTRSFEGVPAYFFACSEHOKTYNZXXHKXPMDOCDPLQGRRNOKDLADVQZPWXXZVOQTCSMEZEGKZGLERPRNTVTNIOFHRPLXWIYSVLQEBAYNYCTF");
    msg.lbearing = 0.250680231902;
    msg.lelevation = 0.294829756335;
    msg.bearing = 0.384413501955;
    msg.elevation = 0.697203958626;
    msg.phi = 0.665174517797;
    msg.theta = 0.657780949358;
    msg.psi = 0.939694434897;
    msg.accuracy = 0.884079149275;

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
    msg.setTimeStamp(0.83745102743);
    msg.setSource(62023U);
    msg.setSourceEntity(223U);
    msg.setDestination(23419U);
    msg.setDestinationEntity(62U);
    msg.target.assign("HOHMOIAUCKWKPBHIPITNEFCRRNBYZEVZTWKHIJRHXLGXLDAZMPZESDESJUKWROITLTDJVVVWMUYYIFUCLQYWPGWUBOPHURWFGPALXZMOFHQNAKZTCBMEMWGFZZVAYPXGEVCSSRZJAMYEV");
    msg.x = 0.37277489582;
    msg.y = 0.829442011312;
    msg.z = 0.666837795186;
    msg.n = 0.824935186245;
    msg.e = 0.56329957839;
    msg.d = 0.0215044980542;
    msg.phi = 0.359679787529;
    msg.theta = 0.516894816566;
    msg.psi = 0.784626264459;
    msg.accuracy = 0.260712124828;

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
    msg.setTimeStamp(0.466057165428);
    msg.setSource(4760U);
    msg.setSourceEntity(14U);
    msg.setDestination(18735U);
    msg.setDestinationEntity(71U);
    msg.target.assign("KMRVBBFJJLSWAWVVBOBQVUJVJEYPAESLRQJGGQBRTJZSKCTFXLLTWPRFSJOMPXJSZUKXXWMINFTXDDIFLCDKOQXAGYHNNYDAAZ");
    msg.x = 0.50126672472;
    msg.y = 0.0606575026179;
    msg.z = 0.185511515034;
    msg.n = 0.888333858408;
    msg.e = 0.214200264103;
    msg.d = 0.572834011766;
    msg.phi = 0.0358874817232;
    msg.theta = 0.153237866776;
    msg.psi = 0.143884617206;
    msg.accuracy = 0.596034031117;

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
    msg.setTimeStamp(0.164449676687);
    msg.setSource(58370U);
    msg.setSourceEntity(150U);
    msg.setDestination(47354U);
    msg.setDestinationEntity(232U);
    msg.target.assign("KVZZAOMGQUXXSVPFEMXLZROYWLUBOOYJDGCPAYLTIJOFDUIAOTWFIWSNZUNLOBWBKKRGOSQRDFGCDWJYZAMJDMHEXXIUQBHUDQJKHGENRKKIYAKLNVYMGASHWNREBCXKTIXFDPPVUATBHDJHFEFYZCQVISVPLZNSTEZSACRRUKVFRIMHMGMLQBTPGSZDEBTPMAROSZXEHVTUONWGYWVHULQXBTJEVQBXIWIFCCPD");
    msg.x = 0.158544170354;
    msg.y = 0.785426310141;
    msg.z = 0.995990100004;
    msg.n = 0.371365533908;
    msg.e = 0.976850965552;
    msg.d = 0.192802499132;
    msg.phi = 0.0459682974045;
    msg.theta = 0.782713807678;
    msg.psi = 0.203708884259;
    msg.accuracy = 0.436736260652;

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
    msg.setTimeStamp(0.638544442365);
    msg.setSource(29531U);
    msg.setSourceEntity(177U);
    msg.setDestination(1614U);
    msg.setDestinationEntity(45U);
    msg.target.assign("KRUPZPCKHKDTU");
    msg.lat = 0.0830990875039;
    msg.lon = 0.263933689107;
    msg.z_units = 178U;
    msg.z = 0.319744663132;
    msg.accuracy = 0.221782134169;

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
    msg.setTimeStamp(0.448784297535);
    msg.setSource(11207U);
    msg.setSourceEntity(110U);
    msg.setDestination(37297U);
    msg.setDestinationEntity(247U);
    msg.target.assign("JQESTQLMKBKJSWFSDRNYYLTTPNBINZMEQUJAGOXVLYUZLBNIDQAOXMFGBWLVEWWYNYGYV");
    msg.lat = 0.00705472342521;
    msg.lon = 0.615541881808;
    msg.z_units = 180U;
    msg.z = 0.739209152096;
    msg.accuracy = 0.474621937838;

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
    msg.setTimeStamp(0.356171393119);
    msg.setSource(36713U);
    msg.setSourceEntity(4U);
    msg.setDestination(24817U);
    msg.setDestinationEntity(222U);
    msg.target.assign("YPIQADIPSQNLFNXKUKUDUONFDHJETWKCKWTRUZORZQAYYBDRHJWJSJGDBEERPVVNNACXGIAJXQZDWAQGYEJIUAKRCMH");
    msg.lat = 0.705959919277;
    msg.lon = 0.110955161161;
    msg.z_units = 208U;
    msg.z = 0.155842280277;
    msg.accuracy = 0.454222156473;

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
    msg.setTimeStamp(0.896464086998);
    msg.setSource(12737U);
    msg.setSourceEntity(222U);
    msg.setDestination(61408U);
    msg.setDestinationEntity(163U);
    msg.name.assign("XCHTVNSFJCOMKZLJPROWIVTTUDBWYSGIYSGT");
    msg.lat = 0.899459394419;
    msg.lon = 0.105650741548;
    msg.z = 0.744872976847;
    msg.z_units = 184U;

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
    msg.setTimeStamp(0.0947371339986);
    msg.setSource(30356U);
    msg.setSourceEntity(37U);
    msg.setDestination(30579U);
    msg.setDestinationEntity(252U);
    msg.name.assign("YPBFKBCNDWIP");
    msg.lat = 0.543377178524;
    msg.lon = 0.725409149906;
    msg.z = 0.26047811676;
    msg.z_units = 181U;

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
    msg.setTimeStamp(0.938155026825);
    msg.setSource(63502U);
    msg.setSourceEntity(166U);
    msg.setDestination(37565U);
    msg.setDestinationEntity(148U);
    msg.name.assign("IAHLTKUCUQQQBIVKVAPMOHFKCEKJPINMPGGFLXGSCPHPYCXDLRQKCENCDOGZWYNTLDSVTSAEAUFODYTEBDZBMWIWFCDOONEJZRRAUVZZYSFTFKGVMYKTUAHKUFYBUXPSEQLNSKKRGWQXVHNZXBTJSI");
    msg.lat = 0.751656373194;
    msg.lon = 0.566006248448;
    msg.z = 0.44448474407;
    msg.z_units = 53U;

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
    msg.setTimeStamp(0.70221973408);
    msg.setSource(63030U);
    msg.setSourceEntity(191U);
    msg.setDestination(16051U);
    msg.setDestinationEntity(108U);
    msg.op = 164U;

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
    msg.setTimeStamp(0.72571127244);
    msg.setSource(48948U);
    msg.setSourceEntity(115U);
    msg.setDestination(57283U);
    msg.setDestinationEntity(172U);
    msg.op = 7U;

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
    msg.setTimeStamp(0.292166114745);
    msg.setSource(3158U);
    msg.setSourceEntity(153U);
    msg.setDestination(40283U);
    msg.setDestinationEntity(2U);
    msg.op = 252U;

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
    msg.setTimeStamp(0.143802979155);
    msg.setSource(1853U);
    msg.setSourceEntity(190U);
    msg.setDestination(58018U);
    msg.setDestinationEntity(245U);
    msg.value = 0.0498711319176;
    msg.type = 122U;

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
    msg.setTimeStamp(0.954888452789);
    msg.setSource(46957U);
    msg.setSourceEntity(226U);
    msg.setDestination(20659U);
    msg.setDestinationEntity(125U);
    msg.value = 0.838035078381;
    msg.type = 85U;

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
    msg.setTimeStamp(0.114979292566);
    msg.setSource(6921U);
    msg.setSourceEntity(31U);
    msg.setDestination(4602U);
    msg.setDestinationEntity(202U);
    msg.value = 0.716385462941;
    msg.type = 71U;

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
    msg.setTimeStamp(0.142615682035);
    msg.setSource(5257U);
    msg.setSourceEntity(41U);
    msg.setDestination(47339U);
    msg.setDestinationEntity(126U);
    msg.value = 0.302908390561;

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
    msg.setTimeStamp(0.680936268255);
    msg.setSource(56681U);
    msg.setSourceEntity(247U);
    msg.setDestination(6081U);
    msg.setDestinationEntity(129U);
    msg.value = 0.464666374551;

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
    msg.setTimeStamp(0.824217963247);
    msg.setSource(38725U);
    msg.setSourceEntity(238U);
    msg.setDestination(21498U);
    msg.setDestinationEntity(200U);
    msg.value = 0.705974985392;

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
    msg.setTimeStamp(0.560148256541);
    msg.setSource(58583U);
    msg.setSourceEntity(78U);
    msg.setDestination(33670U);
    msg.setDestinationEntity(128U);
    msg.timestamp_last_service = 0.685860497955;
    msg.time_next_service = 0.227127085358;
    msg.time_motor_next_service = 0.540034360286;
    msg.time_idle_ground = 0.470949266751;
    msg.time_idle_air = 0.485026976297;
    msg.time_idle_water = 0.724199644594;
    msg.time_idle_underwater = 0.709048715949;
    msg.time_idle_unknown = 0.218502594113;
    msg.time_motor_ground = 0.151404036309;
    msg.time_motor_air = 0.929677248685;
    msg.time_motor_water = 0.23794304605;
    msg.time_motor_underwater = 0.094686810091;
    msg.time_motor_unknown = 0.316012494551;
    msg.rpm_min = -10658;
    msg.rpm_max = 20250;
    msg.depth_max = 0.0441616680638;

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
    msg.setTimeStamp(0.314128974186);
    msg.setSource(42471U);
    msg.setSourceEntity(235U);
    msg.setDestination(58983U);
    msg.setDestinationEntity(143U);
    msg.timestamp_last_service = 0.408142809866;
    msg.time_next_service = 0.768766619018;
    msg.time_motor_next_service = 0.323071048331;
    msg.time_idle_ground = 0.427668830292;
    msg.time_idle_air = 0.0967121769153;
    msg.time_idle_water = 0.186483359622;
    msg.time_idle_underwater = 0.929545153108;
    msg.time_idle_unknown = 0.383292889423;
    msg.time_motor_ground = 0.950701830114;
    msg.time_motor_air = 0.522259509144;
    msg.time_motor_water = 0.374067763498;
    msg.time_motor_underwater = 0.633806810396;
    msg.time_motor_unknown = 0.58815819988;
    msg.rpm_min = 18764;
    msg.rpm_max = -32261;
    msg.depth_max = 0.814402489516;

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
    msg.setTimeStamp(0.881977905127);
    msg.setSource(48273U);
    msg.setSourceEntity(146U);
    msg.setDestination(14946U);
    msg.setDestinationEntity(208U);
    msg.timestamp_last_service = 0.0448841870466;
    msg.time_next_service = 0.717536764382;
    msg.time_motor_next_service = 0.106400051687;
    msg.time_idle_ground = 0.395170373863;
    msg.time_idle_air = 0.455640927039;
    msg.time_idle_water = 0.220483618111;
    msg.time_idle_underwater = 0.978640419114;
    msg.time_idle_unknown = 0.299273847314;
    msg.time_motor_ground = 0.750907947529;
    msg.time_motor_air = 0.520515159103;
    msg.time_motor_water = 0.0286034045017;
    msg.time_motor_underwater = 0.0380361529727;
    msg.time_motor_unknown = 0.825436968758;
    msg.rpm_min = 4814;
    msg.rpm_max = -15361;
    msg.depth_max = 0.416691223818;

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
    msg.setTimeStamp(0.262306210249);
    msg.setSource(43084U);
    msg.setSourceEntity(164U);
    msg.setDestination(45934U);
    msg.setDestinationEntity(193U);
    msg.severity = 186U;
    msg.text.assign("VPTRMSBNKPJFDPCZDYWGUUTGNMLCMLFGTCTSXWKPHIKSKWGWMTHEEXSLDFJXMYQJDIEUBVUCHWQRFIMOUSXBYKZGQQUAGIEROETYIWVLFYXPZQJCUQKIQJUNBXDGNIKVYWADEJFETHDRMLLPYRZCMOKOJOVFJYFFPFYZBNGHVLZSCWOQDHBBAXQSIRZRGNOSBPCVTPRW");

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
    msg.setTimeStamp(0.241836201678);
    msg.setSource(12650U);
    msg.setSourceEntity(48U);
    msg.setDestination(44208U);
    msg.setDestinationEntity(43U);
    msg.severity = 68U;
    msg.text.assign("YIJGMWEQSZRGHNWGFIOLMIOVKXTXHWPOJUPEBKCQGOEBTUZCRYQBLYDIWFONMSSRBPXZUJAPLVYHWPHDDKPDCRZCNUZQWRULMXOIWRSVHEVDOFRGYZIEMAGHNFTDTYOKLNF");

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
    msg.setTimeStamp(0.529129198745);
    msg.setSource(8789U);
    msg.setSourceEntity(240U);
    msg.setDestination(57812U);
    msg.setDestinationEntity(219U);
    msg.severity = 246U;
    msg.text.assign("SXZGSJQDFNUGZMNZIRGUBFRLSGIWPCRAQLLWVCEEIWYGNZYOGRBFNKNDZUVMCI");

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
    msg.setTimeStamp(0.240431633726);
    msg.setSource(43882U);
    msg.setSourceEntity(89U);
    msg.setDestination(59702U);
    msg.setDestinationEntity(198U);
    msg.channel = -80;
    msg.value = -1978827842;
    msg.gain = 49U;

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
    msg.setTimeStamp(0.671280550633);
    msg.setSource(13985U);
    msg.setSourceEntity(27U);
    msg.setDestination(61512U);
    msg.setDestinationEntity(80U);
    msg.channel = -31;
    msg.value = 1950556198;
    msg.gain = 222U;

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
    msg.setTimeStamp(0.0420556866719);
    msg.setSource(31209U);
    msg.setSourceEntity(51U);
    msg.setDestination(42523U);
    msg.setDestinationEntity(49U);
    msg.channel = -112;
    msg.value = -980000419;
    msg.gain = 38U;

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
    msg.setTimeStamp(0.0890508397071);
    msg.setSource(26439U);
    msg.setSourceEntity(125U);
    msg.setDestination(15677U);
    msg.setDestinationEntity(87U);
    msg.ch01 = 0.889734078287;
    msg.ch02 = 0.262388892151;
    msg.ch03 = 0.767791920858;
    msg.ch04 = 0.121067252837;
    msg.ch05 = 0.607374483861;
    msg.ch06 = 0.960844795873;
    msg.ch07 = 0.568789569969;
    msg.ch08 = 0.464171544437;
    msg.ch09 = 0.564080895958;
    msg.ch10 = 0.474181916717;
    msg.ch11 = 0.941172087629;
    msg.ch12 = 0.533195006953;
    msg.ch13 = 0.95630207631;
    msg.ch14 = 0.19175345223;
    msg.ch15 = 0.591144810534;
    msg.ch16 = 0.901659074946;

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
    msg.setTimeStamp(0.736881058375);
    msg.setSource(1344U);
    msg.setSourceEntity(44U);
    msg.setDestination(25486U);
    msg.setDestinationEntity(232U);
    msg.ch01 = 0.279579344709;
    msg.ch02 = 0.0128264373438;
    msg.ch03 = 0.786357634356;
    msg.ch04 = 0.858675968393;
    msg.ch05 = 0.24102485364;
    msg.ch06 = 0.712722929603;
    msg.ch07 = 0.559297451493;
    msg.ch08 = 0.65339938478;
    msg.ch09 = 0.353880136818;
    msg.ch10 = 0.260022672598;
    msg.ch11 = 0.289303215939;
    msg.ch12 = 0.843982327685;
    msg.ch13 = 0.743237263153;
    msg.ch14 = 0.666507197889;
    msg.ch15 = 0.472861989623;
    msg.ch16 = 0.222393693719;

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
    msg.setTimeStamp(0.874420970413);
    msg.setSource(50125U);
    msg.setSourceEntity(247U);
    msg.setDestination(25045U);
    msg.setDestinationEntity(60U);
    msg.ch01 = 0.323766340304;
    msg.ch02 = 0.806249425141;
    msg.ch03 = 0.991435729978;
    msg.ch04 = 0.562782388594;
    msg.ch05 = 0.895530865227;
    msg.ch06 = 0.993470384428;
    msg.ch07 = 0.0810457411976;
    msg.ch08 = 0.808799252553;
    msg.ch09 = 0.422032154972;
    msg.ch10 = 0.144476118811;
    msg.ch11 = 0.461271783129;
    msg.ch12 = 0.207111971909;
    msg.ch13 = 0.67476541161;
    msg.ch14 = 0.0124511204469;
    msg.ch15 = 0.857988826817;
    msg.ch16 = 0.89341153316;

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
    msg.setTimeStamp(0.315475027873);
    msg.setSource(39343U);
    msg.setSourceEntity(121U);
    msg.setDestination(3262U);
    msg.setDestinationEntity(71U);
    msg.time = 0.073418325131;
    msg.ang = 0.0219226633219;

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
    msg.setTimeStamp(0.405543707658);
    msg.setSource(19776U);
    msg.setSourceEntity(214U);
    msg.setDestination(57453U);
    msg.setDestinationEntity(240U);
    msg.time = 0.452462388928;
    msg.ang = 0.808613324737;

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
    msg.setTimeStamp(0.49934312653);
    msg.setSource(6591U);
    msg.setSourceEntity(3U);
    msg.setDestination(63238U);
    msg.setDestinationEntity(126U);
    msg.time = 0.754671760033;
    msg.ang = 0.0985850033916;

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
    msg.setTimeStamp(0.156698789105);
    msg.setSource(9804U);
    msg.setSourceEntity(103U);
    msg.setDestination(31019U);
    msg.setDestinationEntity(246U);
    msg.value = 0.718634162749;

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
    msg.setTimeStamp(0.185462723819);
    msg.setSource(25466U);
    msg.setSourceEntity(203U);
    msg.setDestination(18973U);
    msg.setDestinationEntity(140U);
    msg.value = 0.220208766853;

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
    msg.setTimeStamp(0.867289803692);
    msg.setSource(54335U);
    msg.setSourceEntity(114U);
    msg.setDestination(35086U);
    msg.setDestinationEntity(15U);
    msg.value = 0.569023742688;

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
    msg.setTimeStamp(0.521748704966);
    msg.setSource(61340U);
    msg.setSourceEntity(230U);
    msg.setDestination(29635U);
    msg.setDestinationEntity(87U);
    msg.value = 0.656137666513;

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
    msg.setTimeStamp(0.909902052006);
    msg.setSource(33237U);
    msg.setSourceEntity(211U);
    msg.setDestination(10171U);
    msg.setDestinationEntity(191U);
    msg.value = 0.188073293225;

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
    msg.setTimeStamp(0.656534726469);
    msg.setSource(45867U);
    msg.setSourceEntity(186U);
    msg.setDestination(45691U);
    msg.setDestinationEntity(101U);
    msg.value = 0.124224401687;

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
    msg.setTimeStamp(0.436142670128);
    msg.setSource(11677U);
    msg.setSourceEntity(95U);
    msg.setDestination(37959U);
    msg.setDestinationEntity(146U);
    msg.value = 0.31295346918;

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
    msg.setTimeStamp(0.080590253022);
    msg.setSource(179U);
    msg.setSourceEntity(150U);
    msg.setDestination(23069U);
    msg.setDestinationEntity(214U);
    msg.value = 0.997935902836;

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
    msg.setTimeStamp(0.358030903059);
    msg.setSource(58991U);
    msg.setSourceEntity(43U);
    msg.setDestination(53136U);
    msg.setDestinationEntity(222U);
    msg.value = 0.0422417237755;

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
    msg.setTimeStamp(0.585302152328);
    msg.setSource(34524U);
    msg.setSourceEntity(78U);
    msg.setDestination(18663U);
    msg.setDestinationEntity(173U);
    msg.l2 = -40;
    msg.l3 = 5;
    msg.iridium = 28;
    msg.modem = -127;
    msg.pumps = 64;
    msg.vhf = 55;

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
    msg.setTimeStamp(0.772071511194);
    msg.setSource(62823U);
    msg.setSourceEntity(232U);
    msg.setDestination(50426U);
    msg.setDestinationEntity(34U);
    msg.l2 = -69;
    msg.l3 = -80;
    msg.iridium = 115;
    msg.modem = 96;
    msg.pumps = -67;
    msg.vhf = -80;

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
    msg.setTimeStamp(0.970299086123);
    msg.setSource(14041U);
    msg.setSourceEntity(206U);
    msg.setDestination(46996U);
    msg.setDestinationEntity(125U);
    msg.l2 = -45;
    msg.l3 = -99;
    msg.iridium = 35;
    msg.modem = -104;
    msg.pumps = 7;
    msg.vhf = -110;

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
    msg.setTimeStamp(0.857886236611);
    msg.setSource(216U);
    msg.setSourceEntity(236U);
    msg.setDestination(59883U);
    msg.setDestinationEntity(57U);
    msg.angle = 0.903537536109;
    msg.reference.assign("KHCMMCOXCVIURQUMYFDOQKHTTWXJMGTJZRAWBJEVLPOXFHMNBQUGZNFUZOJAKNDFSYKNUCBYGHDVKNSOJIESTFDXLDUVJDQQBPBOPLWSAXLECVBVVRSIWQTNLGDXJQACKFYLXMGUIWWKIOMZPQQESRVXMHKZTPSHZIDYCWFNEEHCUYTAYFRKRCKADG");
    msg.speed = 0.775028865092;

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
    msg.setTimeStamp(0.906990024076);
    msg.setSource(30246U);
    msg.setSourceEntity(120U);
    msg.setDestination(34526U);
    msg.setDestinationEntity(153U);
    msg.angle = 0.0649394855698;
    msg.reference.assign("MDORVKWADSVWLRACGASZWSKOMYIAJQ");
    msg.speed = 0.925332539771;

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
    msg.setTimeStamp(0.374346849461);
    msg.setSource(28035U);
    msg.setSourceEntity(152U);
    msg.setDestination(11522U);
    msg.setDestinationEntity(203U);
    msg.angle = 0.0715988033134;
    msg.reference.assign("YFAQZBMCBIPXDWXMEKRQLUXDNJAUZUWHHVGESOZSFIWZOYUHPAGLXYPCCIETTEUTXROOBXGFQUONGALMKYSEGYZYDMYKQBWOTEDTRFAHRLFFGPXVKQPDOLWNNLDRWDKBAANLICJUWKQCAAOLRFSBKRJPXNSVFZDJZMRKMUMGJCMIIYNZVSBHPEVZRJGTUBDQEPRWVTYCBBQXFVLJHGASICWIC");
    msg.speed = 0.295786331531;

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
    msg.setTimeStamp(0.471872611337);
    msg.setSource(35425U);
    msg.setSourceEntity(125U);
    msg.setDestination(55565U);
    msg.setDestinationEntity(131U);
    msg.angle = 0.614179672994;
    msg.speed = 0.284379460628;

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
    msg.setTimeStamp(0.899946039938);
    msg.setSource(44554U);
    msg.setSourceEntity(246U);
    msg.setDestination(57981U);
    msg.setDestinationEntity(91U);
    msg.angle = 0.73534875477;
    msg.speed = 0.564257989286;

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
    msg.setTimeStamp(0.0910845364551);
    msg.setSource(6874U);
    msg.setSourceEntity(51U);
    msg.setDestination(34952U);
    msg.setDestinationEntity(109U);
    msg.angle = 0.444807579296;
    msg.speed = 0.316879138421;

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
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.363572459462);
    msg.setSource(16190U);
    msg.setSourceEntity(182U);
    msg.setDestination(10798U);
    msg.setDestinationEntity(208U);
    msg.dir = 0.654106276861;
    msg.speed = 0.653292768555;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.863008832763);
    msg.setSource(41202U);
    msg.setSourceEntity(61U);
    msg.setDestination(56468U);
    msg.setDestinationEntity(235U);
    msg.dir = 0.916464922761;
    msg.speed = 0.549787925872;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.519911981565);
    msg.setSource(17527U);
    msg.setSourceEntity(166U);
    msg.setDestination(53392U);
    msg.setDestinationEntity(73U);
    msg.dir = 0.129126308111;
    msg.speed = 0.690999362153;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #2", msg == *msg_d);
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
    msg.setTimeStamp(0.917612787289);
    msg.setSource(29286U);
    msg.setSourceEntity(114U);
    msg.setDestination(6892U);
    msg.setDestinationEntity(40U);
    msg.x = 0.62145536473;
    msg.y = 0.921240053656;
    msg.z1 = 0.159534720807;
    msg.z2 = 0.536439864575;

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
    msg.setTimeStamp(0.619655318294);
    msg.setSource(8582U);
    msg.setSourceEntity(105U);
    msg.setDestination(52928U);
    msg.setDestinationEntity(97U);
    msg.x = 0.317090101823;
    msg.y = 0.044777498874;
    msg.z1 = 0.0661690701297;
    msg.z2 = 0.113684602206;

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
    msg.setTimeStamp(0.992956179747);
    msg.setSource(16714U);
    msg.setSourceEntity(167U);
    msg.setDestination(34167U);
    msg.setDestinationEntity(69U);
    msg.x = 0.0406456140664;
    msg.y = 0.891656953017;
    msg.z1 = 0.983259216157;
    msg.z2 = 0.769022859615;

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
    msg.setTimeStamp(0.265551070246);
    msg.setSource(14695U);
    msg.setSourceEntity(23U);
    msg.setDestination(851U);
    msg.setDestinationEntity(151U);
    msg.mmsi = 0.70643620017;
    msg.lat = 0.622343819268;
    msg.lon = 0.0502257751287;
    msg.x = 0.798503779894;
    msg.y = 0.855410249551;
    msg.speed = 0.534044360653;
    msg.course = 0.819367193582;
    msg.dist = 0.139152960574;
    msg.length = 0.213611783118;
    msg.width = 0.51791332828;
    msg.o_vect = 0.598641710155;

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
    msg.setTimeStamp(0.521465674838);
    msg.setSource(29844U);
    msg.setSourceEntity(6U);
    msg.setDestination(31568U);
    msg.setDestinationEntity(223U);
    msg.mmsi = 0.213011066419;
    msg.lat = 0.628023355168;
    msg.lon = 0.871230130742;
    msg.x = 0.987268990336;
    msg.y = 0.959073644659;
    msg.speed = 0.860924284158;
    msg.course = 0.88017673832;
    msg.dist = 0.391727449221;
    msg.length = 0.936344173271;
    msg.width = 0.429552927248;
    msg.o_vect = 0.316229551339;

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
    msg.setTimeStamp(0.926387890813);
    msg.setSource(20019U);
    msg.setSourceEntity(6U);
    msg.setDestination(39695U);
    msg.setDestinationEntity(46U);
    msg.mmsi = 0.662704813944;
    msg.lat = 0.0401677904191;
    msg.lon = 0.122921009282;
    msg.x = 0.0760930261943;
    msg.y = 0.79539644604;
    msg.speed = 0.0987077812152;
    msg.course = 0.341145636007;
    msg.dist = 0.741386530796;
    msg.length = 0.409263468881;
    msg.width = 0.712852468494;
    msg.o_vect = 0.211922965639;

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
    msg.setTimeStamp(0.499938944172);
    msg.setSource(55727U);
    msg.setSourceEntity(168U);
    msg.setDestination(55009U);
    msg.setDestinationEntity(244U);
    msg.locations.assign("AGHSNYNKHPGOHATMELPYXQFZXILKVAYDLFVTHYZGFBXDFZPOFSEJLEMOXASPIOCDUCZUQSNJCYBVFWKTETIKUQIDGLMXNHZAWLBCZOOBKTRFWVUQKHMVGREBZUJCIMVKLKGFAQEQCPYPRMQXQSYCRMRVHSOMNSBSCUEFZKRPJSXAOXBLTOOUFRKBWNJWXJUYBNPIRDEHBRGXTTLZNDCQYWQWMHUWJTIGDRNPVAD");

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
    msg.setTimeStamp(0.654418855256);
    msg.setSource(57087U);
    msg.setSourceEntity(122U);
    msg.setDestination(8273U);
    msg.setDestinationEntity(167U);
    msg.locations.assign("HFNGGKEGMZKSROVSEVAVWQVDVKXUJDWBFFXOTHTSPJEPZICDBYTJLFQPDBPHVLAFNHTRMCYCJGNUBKXFMNXQVJABIKONLRJSWGDIBFBRBUSRQTZOKZPZACZFXKOSDORXYHCETONXYXDBALGNHQEMSYMPYWLJYQFKRECAUDSJMGCVPMLQUTGGILCTILWWDRQPRWUONETIRAQPLSYIMUYNUUWZENHEIOHKLAMEUJ");

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
    msg.setTimeStamp(0.124677532246);
    msg.setSource(28958U);
    msg.setSourceEntity(113U);
    msg.setDestination(1882U);
    msg.setDestinationEntity(59U);
    msg.locations.assign("TLIUVILTKABQUOGUDKJFZPSYZNKJQONWAHHFPQNTRVQWTFRTYJVGRMKYSPFSAACULRMEEOYCXSPOMFIPXRKXLGCRPVLEHYORBZTWQWRGYSEDEFNJKOIDXLNBHKWMPOXFCSUAGCDTXVGBZZYLNSQYDHMOCIXDBXTHUBJEGTRWPMPJTXSVZZGLVSCBQXJEZCJAIVFEAMMBZRIDVFQ");

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
    msg.setTimeStamp(0.920460998222);
    msg.setSource(2547U);
    msg.setSourceEntity(85U);
    msg.setDestination(36066U);
    msg.setDestinationEntity(166U);
    msg.value = 0.473248013721;

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
    msg.setTimeStamp(0.227429398005);
    msg.setSource(34653U);
    msg.setSourceEntity(76U);
    msg.setDestination(13564U);
    msg.setDestinationEntity(198U);
    msg.value = 0.434021148128;

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
    msg.setTimeStamp(0.131027981198);
    msg.setSource(27811U);
    msg.setSourceEntity(3U);
    msg.setDestination(52094U);
    msg.setDestinationEntity(64U);
    msg.value = 0.86187229923;

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
    msg.setTimeStamp(0.797164703954);
    msg.setSource(61553U);
    msg.setSourceEntity(157U);
    msg.setDestination(44547U);
    msg.setDestinationEntity(220U);
    msg.beam1 = 0.306471744808;
    msg.beam2 = 0.0782338292785;
    msg.beam3 = 0.674828567391;
    msg.beam4 = 0.726809614603;

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
    msg.setTimeStamp(0.874118803268);
    msg.setSource(46503U);
    msg.setSourceEntity(179U);
    msg.setDestination(29213U);
    msg.setDestinationEntity(108U);
    msg.beam1 = 0.103297852363;
    msg.beam2 = 0.763677333323;
    msg.beam3 = 0.96977106639;
    msg.beam4 = 0.752315927283;

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
    msg.setTimeStamp(0.561345326523);
    msg.setSource(56660U);
    msg.setSourceEntity(202U);
    msg.setDestination(42057U);
    msg.setDestinationEntity(69U);
    msg.beam1 = 0.0284979306124;
    msg.beam2 = 0.00620986462061;
    msg.beam3 = 0.565258282492;
    msg.beam4 = 0.150672893389;

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
    msg.setTimeStamp(0.942936885065);
    msg.setSource(37312U);
    msg.setSourceEntity(254U);
    msg.setDestination(62153U);
    msg.setDestinationEntity(105U);
    msg.beam1 = 45U;
    msg.beam2 = 92U;
    msg.beam3 = 236U;
    msg.beam4 = 89U;

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
    msg.setTimeStamp(0.673382737811);
    msg.setSource(34554U);
    msg.setSourceEntity(13U);
    msg.setDestination(9603U);
    msg.setDestinationEntity(177U);
    msg.beam1 = 183U;
    msg.beam2 = 158U;
    msg.beam3 = 170U;
    msg.beam4 = 32U;

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
    msg.setTimeStamp(0.283398148816);
    msg.setSource(38275U);
    msg.setSourceEntity(117U);
    msg.setDestination(62049U);
    msg.setDestinationEntity(226U);
    msg.beam1 = 187U;
    msg.beam2 = 26U;
    msg.beam3 = 87U;
    msg.beam4 = 194U;

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
    msg.setTimeStamp(0.769565735377);
    msg.setSource(59896U);
    msg.setSourceEntity(11U);
    msg.setDestination(18378U);
    msg.setDestinationEntity(15U);
    msg.pos = 0.109289856369;

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
    msg.setTimeStamp(0.867322805428);
    msg.setSource(60363U);
    msg.setSourceEntity(94U);
    msg.setDestination(30241U);
    msg.setDestinationEntity(198U);
    msg.pos = 0.606665858675;

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
    msg.setTimeStamp(0.575738901792);
    msg.setSource(33406U);
    msg.setSourceEntity(199U);
    msg.setDestination(14072U);
    msg.setDestinationEntity(98U);
    msg.pos = 0.780879801446;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.698814033268;
    tmp_msg_0.amp = 0.382613994502;
    tmp_msg_0.cor = 212U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.556919847683);
    msg.setSource(56607U);
    msg.setSourceEntity(175U);
    msg.setDestination(26059U);
    msg.setDestinationEntity(230U);
    msg.beams = 107U;
    msg.cells = 70U;
    msg.coord_sys = 172U;

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
    msg.setTimeStamp(0.865325221675);
    msg.setSource(37461U);
    msg.setSourceEntity(100U);
    msg.setDestination(39574U);
    msg.setDestinationEntity(249U);
    msg.beams = 42U;
    msg.cells = 212U;
    msg.coord_sys = 42U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.938097959247;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.183965918504;
    tmp_tmp_msg_0_0.amp = 0.669267902357;
    tmp_tmp_msg_0_0.cor = 137U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.631565824525);
    msg.setSource(41110U);
    msg.setSourceEntity(22U);
    msg.setDestination(8561U);
    msg.setDestinationEntity(79U);
    msg.beams = 37U;
    msg.cells = 1U;
    msg.coord_sys = 117U;

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

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.0817456037137);
    msg.setSource(24729U);
    msg.setSourceEntity(202U);
    msg.setDestination(63367U);
    msg.setDestinationEntity(197U);
    msg.vel = 0.2801062459;
    msg.amp = 0.635318361414;
    msg.cor = 49U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.577925892666);
    msg.setSource(7053U);
    msg.setSourceEntity(55U);
    msg.setDestination(11396U);
    msg.setDestinationEntity(61U);
    msg.vel = 0.367725929108;
    msg.amp = 0.98072074367;
    msg.cor = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.195341801723);
    msg.setSource(48362U);
    msg.setSourceEntity(97U);
    msg.setDestination(25098U);
    msg.setDestinationEntity(136U);
    msg.vel = 0.458450306155;
    msg.amp = 0.296000626567;
    msg.cor = 8U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRFishTag msg;
    msg.setTimeStamp(0.900952886823);
    msg.setSource(3683U);
    msg.setSourceEntity(147U);
    msg.setDestination(41747U);
    msg.setDestinationEntity(169U);
    msg.serial_no = 205340513U;
    msg.unix_timestamp = 132059477U;
    msg.millis = 17917U;
    msg.trans_protocol = 101U;
    msg.trans_id = 2685292133U;
    msg.trans_data = 33561U;
    msg.snr = 109U;
    msg.trans_freq = 234U;
    msg.recv_mem_addr = 31248U;
    msg.lat = 0.0832356540046;
    msg.lon = 0.0518443422317;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRFishTag #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRFishTag msg;
    msg.setTimeStamp(0.41399193842);
    msg.setSource(12449U);
    msg.setSourceEntity(150U);
    msg.setDestination(33328U);
    msg.setDestinationEntity(27U);
    msg.serial_no = 3863503965U;
    msg.unix_timestamp = 1732277354U;
    msg.millis = 21868U;
    msg.trans_protocol = 63U;
    msg.trans_id = 2290877847U;
    msg.trans_data = 39872U;
    msg.snr = 106U;
    msg.trans_freq = 181U;
    msg.recv_mem_addr = 37501U;
    msg.lat = 0.662137532747;
    msg.lon = 0.881345752251;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRFishTag #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRFishTag msg;
    msg.setTimeStamp(0.90269715444);
    msg.setSource(36547U);
    msg.setSourceEntity(175U);
    msg.setDestination(58271U);
    msg.setDestinationEntity(173U);
    msg.serial_no = 3231006442U;
    msg.unix_timestamp = 410338121U;
    msg.millis = 40374U;
    msg.trans_protocol = 93U;
    msg.trans_id = 220210616U;
    msg.trans_data = 47830U;
    msg.snr = 48U;
    msg.trans_freq = 119U;
    msg.recv_mem_addr = 62479U;
    msg.lat = 0.44376364515;
    msg.lon = 0.0330577647648;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRFishTag #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRSensor msg;
    msg.setTimeStamp(0.0701962528768);
    msg.setSource(22535U);
    msg.setSourceEntity(44U);
    msg.setDestination(43047U);
    msg.setDestinationEntity(79U);
    msg.serial_no = 239833657U;
    msg.unix_timestamp = 2628420989U;
    msg.temperature = 0.859945878245;
    msg.avg_noise_level = 60U;
    msg.peak_noise_level = 149U;
    msg.recv_listen_freq = 249U;
    msg.recv_mem_addr = 32750U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRSensor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRSensor msg;
    msg.setTimeStamp(0.773521803616);
    msg.setSource(2553U);
    msg.setSourceEntity(120U);
    msg.setDestination(33469U);
    msg.setDestinationEntity(135U);
    msg.serial_no = 2455905446U;
    msg.unix_timestamp = 2766398446U;
    msg.temperature = 0.354706115513;
    msg.avg_noise_level = 123U;
    msg.peak_noise_level = 151U;
    msg.recv_listen_freq = 253U;
    msg.recv_mem_addr = 52925U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRSensor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRSensor msg;
    msg.setTimeStamp(0.426161094787);
    msg.setSource(54272U);
    msg.setSourceEntity(62U);
    msg.setDestination(38299U);
    msg.setDestinationEntity(65U);
    msg.serial_no = 1203935826U;
    msg.unix_timestamp = 2849711342U;
    msg.temperature = 0.709067333384;
    msg.avg_noise_level = 110U;
    msg.peak_noise_level = 176U;
    msg.recv_listen_freq = 122U;
    msg.recv_mem_addr = 29706U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRSensor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumReport msg;
    msg.setTimeStamp(0.813400406847);
    msg.setSource(64683U);
    msg.setSourceEntity(217U);
    msg.setDestination(52412U);
    msg.setDestinationEntity(233U);
    msg.frequency = 977904152U;
    msg.info.assign("FCIZNVBZZXSJOCNUNFQBBUWRUDDDUEZNQZFDIPDIXGDQNASMWHDRHTSASZHLSOXIPGYYKCOESYYNGUEAPVWIBMERHYCUBXTVWRBCJKUEPXULCCVEISRJPXABZLFTVMMHXGJNBNJMTUAJPVSXLRRYEQEVQBFWOIODLCHFFXQMIOTGYIKVFYTAXAUZCPWGIZYBMPE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumReport msg;
    msg.setTimeStamp(0.858242308569);
    msg.setSource(7750U);
    msg.setSourceEntity(199U);
    msg.setDestination(25781U);
    msg.setDestinationEntity(221U);
    msg.frequency = 1757357087U;
    msg.info.assign("BQOTCSSSEFJSFVAYQCFIAJHKXCIADHTWFZRDQXUPANVNKRIBMKFKPLITQHMZXZYTYEKQSADYOUZMVJRDSGPHQONELTODFBLCDMGXHUBLFJLPQTAPAVFEWJCSAZXDRDMGVUYFDICLMKIQPNWEXRPTNAFUMHSOBQOUNVUEUEDXORBBGXGSIBYOZJHCEYHYOJGNMU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumReport msg;
    msg.setTimeStamp(0.0453681258553);
    msg.setSource(36227U);
    msg.setSourceEntity(194U);
    msg.setDestination(14248U);
    msg.setDestinationEntity(59U);
    msg.frequency = 3874187218U;
    msg.info.assign("FAXAWJMQLGTLDMWXLYWVBLXFVWH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScienceSensors msg;
    msg.setTimeStamp(0.619911707097);
    msg.setSource(49266U);
    msg.setSourceEntity(207U);
    msg.setDestination(50072U);
    msg.setDestinationEntity(217U);
    msg.adcp = 62;
    msg.adcp_dur = 1915105277U;
    msg.adcp_fr = 3742545261U;
    msg.ctd = -95;
    msg.ctd_dur = 1726120978U;
    msg.ctd_fr = 2366745896U;
    msg.opt = -57;
    msg.opt_dur = 2250262387U;
    msg.opt_fr = 2806946893U;
    msg.tbl = -84;
    msg.tbl_dur = 114481749U;
    msg.tbl_fr = 1630171322U;
    msg.eco = -57;
    msg.eco_dur = 1280389156U;
    msg.eco_fr = 423294491U;
    msg.par = 101;
    msg.par_dur = 629568981U;
    msg.par_fr = 529639255U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScienceSensors #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScienceSensors msg;
    msg.setTimeStamp(0.961138595086);
    msg.setSource(62028U);
    msg.setSourceEntity(0U);
    msg.setDestination(65526U);
    msg.setDestinationEntity(161U);
    msg.adcp = -1;
    msg.adcp_dur = 2055776040U;
    msg.adcp_fr = 1600652063U;
    msg.ctd = -125;
    msg.ctd_dur = 3711124780U;
    msg.ctd_fr = 1635382674U;
    msg.opt = -41;
    msg.opt_dur = 964006128U;
    msg.opt_fr = 507569939U;
    msg.tbl = -81;
    msg.tbl_dur = 3833554580U;
    msg.tbl_fr = 3967732493U;
    msg.eco = -60;
    msg.eco_dur = 829497989U;
    msg.eco_fr = 2079839017U;
    msg.par = 113;
    msg.par_dur = 1918855130U;
    msg.par_fr = 1217405706U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScienceSensors #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScienceSensors msg;
    msg.setTimeStamp(0.974842305311);
    msg.setSource(30176U);
    msg.setSourceEntity(101U);
    msg.setDestination(8665U);
    msg.setDestinationEntity(99U);
    msg.adcp = 28;
    msg.adcp_dur = 1241123118U;
    msg.adcp_fr = 1467214566U;
    msg.ctd = 33;
    msg.ctd_dur = 1966976334U;
    msg.ctd_fr = 1891204084U;
    msg.opt = -90;
    msg.opt_dur = 1841372935U;
    msg.opt_fr = 1436348588U;
    msg.tbl = 114;
    msg.tbl_dur = 1605489854U;
    msg.tbl_fr = 1929880208U;
    msg.eco = -34;
    msg.eco_dur = 818774505U;
    msg.eco_fr = 1699682067U;
    msg.par = 42;
    msg.par_dur = 1744051577U;
    msg.par_fr = 4124794957U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScienceSensors #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScienceSensorsReply msg;
    msg.setTimeStamp(0.7125811496);
    msg.setSource(41942U);
    msg.setSourceEntity(133U);
    msg.setDestination(19220U);
    msg.setDestinationEntity(111U);
    msg.adcp = 72;
    msg.adcp_dur = 4164852240U;
    msg.adcp_fr = 2545059252U;
    msg.ctd = -76;
    msg.ctd_dur = 2301177461U;
    msg.ctd_fr = 3634444512U;
    msg.opt = 16;
    msg.opt_dur = 1003068208U;
    msg.opt_fr = 3326748670U;
    msg.tbl = -54;
    msg.tbl_dur = 3397827164U;
    msg.tbl_fr = 3777973474U;
    msg.eco = 101;
    msg.eco_dur = 422802820U;
    msg.eco_fr = 570065533U;
    msg.par = 23;
    msg.par_dur = 2816092830U;
    msg.par_fr = 4057309514U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScienceSensorsReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScienceSensorsReply msg;
    msg.setTimeStamp(0.217883274633);
    msg.setSource(41306U);
    msg.setSourceEntity(41U);
    msg.setDestination(1304U);
    msg.setDestinationEntity(88U);
    msg.adcp = 2;
    msg.adcp_dur = 3491701908U;
    msg.adcp_fr = 2206387708U;
    msg.ctd = 8;
    msg.ctd_dur = 2514021427U;
    msg.ctd_fr = 1213136170U;
    msg.opt = -121;
    msg.opt_dur = 3599753757U;
    msg.opt_fr = 2016081302U;
    msg.tbl = 107;
    msg.tbl_dur = 353011051U;
    msg.tbl_fr = 1976690871U;
    msg.eco = 52;
    msg.eco_dur = 1403760461U;
    msg.eco_fr = 1441544801U;
    msg.par = 30;
    msg.par_dur = 3787675001U;
    msg.par_fr = 3720404309U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScienceSensorsReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScienceSensorsReply msg;
    msg.setTimeStamp(0.74135325824);
    msg.setSource(44536U);
    msg.setSourceEntity(55U);
    msg.setDestination(56272U);
    msg.setDestinationEntity(175U);
    msg.adcp = -93;
    msg.adcp_dur = 1677665549U;
    msg.adcp_fr = 2294811376U;
    msg.ctd = 50;
    msg.ctd_dur = 3439620393U;
    msg.ctd_fr = 1879937107U;
    msg.opt = -128;
    msg.opt_dur = 1007356333U;
    msg.opt_fr = 2592673907U;
    msg.tbl = 52;
    msg.tbl_dur = 1900558628U;
    msg.tbl_fr = 1756818964U;
    msg.eco = 122;
    msg.eco_dur = 3342681760U;
    msg.eco_fr = 3650357100U;
    msg.par = -59;
    msg.par_dur = 3292071766U;
    msg.par_fr = 2970462939U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScienceSensorsReply #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PAR msg;
    msg.setTimeStamp(0.373509170418);
    msg.setSource(21942U);
    msg.setSourceEntity(223U);
    msg.setDestination(38138U);
    msg.setDestinationEntity(12U);
    msg.value = 0.192943943975;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PAR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PAR msg;
    msg.setTimeStamp(0.113500688356);
    msg.setSource(50018U);
    msg.setSourceEntity(131U);
    msg.setDestination(26153U);
    msg.setDestinationEntity(207U);
    msg.value = 0.975574928979;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PAR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PAR msg;
    msg.setTimeStamp(0.0339784642552);
    msg.setSource(14312U);
    msg.setSourceEntity(130U);
    msg.setDestination(16116U);
    msg.setDestinationEntity(58U);
    msg.value = 0.168910412046;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PAR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisGpsFix msg;
    msg.setTimeStamp(0.535771495736);
    msg.setSource(37680U);
    msg.setSourceEntity(59U);
    msg.setDestination(43813U);
    msg.setDestinationEntity(24U);
    msg.validity = 41872U;
    msg.type = 211U;
    msg.utc_year = 33891U;
    msg.utc_month = 182U;
    msg.utc_day = 10U;
    msg.utc_time = 0.249655473627;
    msg.lat = 0.631860366331;
    msg.lon = 0.026257688758;
    msg.height = 0.970518336013;
    msg.satellites = 122U;
    msg.cog = 0.461165185322;
    msg.sog = 0.586304500035;
    msg.hdop = 0.508247626387;
    msg.vdop = 0.498739342074;
    msg.hacc = 0.381050303575;
    msg.vacc = 0.0122526538531;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisGpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisGpsFix msg;
    msg.setTimeStamp(0.573771745671);
    msg.setSource(25219U);
    msg.setSourceEntity(56U);
    msg.setDestination(3662U);
    msg.setDestinationEntity(135U);
    msg.validity = 8649U;
    msg.type = 102U;
    msg.utc_year = 59122U;
    msg.utc_month = 160U;
    msg.utc_day = 71U;
    msg.utc_time = 0.706632895243;
    msg.lat = 0.707200104577;
    msg.lon = 0.675740672988;
    msg.height = 0.205872433482;
    msg.satellites = 176U;
    msg.cog = 0.955129389322;
    msg.sog = 0.21852887728;
    msg.hdop = 0.529755434382;
    msg.vdop = 0.0251097139496;
    msg.hacc = 0.073453152957;
    msg.vacc = 0.0434104706955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisGpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisGpsFix msg;
    msg.setTimeStamp(0.395204788237);
    msg.setSource(44465U);
    msg.setSourceEntity(236U);
    msg.setDestination(8523U);
    msg.setDestinationEntity(35U);
    msg.validity = 65185U;
    msg.type = 82U;
    msg.utc_year = 57631U;
    msg.utc_month = 71U;
    msg.utc_day = 70U;
    msg.utc_time = 0.849269204948;
    msg.lat = 0.583254628624;
    msg.lon = 0.29434518464;
    msg.height = 0.526772903914;
    msg.satellites = 64U;
    msg.cog = 0.543625975626;
    msg.sog = 0.97039968461;
    msg.hdop = 0.144463623147;
    msg.vdop = 0.108397719714;
    msg.hacc = 0.729612452538;
    msg.vacc = 0.896273793967;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisGpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SingleCurrentCell msg;
    msg.setTimeStamp(0.103494886759);
    msg.setSource(45266U);
    msg.setSourceEntity(173U);
    msg.setDestination(58592U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.185483174638;
    msg.lon = 0.362758705298;
    msg.depth.assign("BVNUNCEFQKEUIOUKOIYAHMBKRZUPHYIKOEYPUSVNHARWWFFDLTVVRBOOOVSDMVMULJXQZLUBIDGQFLOVGHHTNNHDCWWQLPBEVDDYYRYENVQACFJATWTFLLSXTMKMDOJZSNFGCBAXENKNXFMQQOBDRFITQGMTRJUSUZGXZGELKGQDSVASUIOPCWFRISIJQWPCWZXLSLIJABKJCTHNXXJYPSZGWIXMPDBPYCAMHWEBHPKZR");
    msg.vel.assign("CLPSMNBOGCIRLWMLGZZNOLPCLIIXMJJTVZWDVMTKUCLEJSEULOQAYOYFIBBDOREHVJEEDLZTKBHSTRVEFTZZDCOCUXYGBIAZOAXRHDSTHWNJQHAVDZUENRNRMVFPDDJJMXGGIAQPKKRTXS");
    msg.dir.assign("YYTZHASOTLTKAHYQHFTCNOTHOSESVLDECMGXCGGIQJODLQQWGJLBHMRDQKBIFXKCXVERBTAEKMYYBGAWFNVIAVPBVPWVWRFOKMNIRASDDILRKFZTVUUVEJNHXUTRPOWTFPJQWLLACKSYTEAXLZIUESRUCNRCVYGSILJOXPAHAMPZMOQPISUIRXUXZZZWNYNBXYNIKJLOCBFQRZQDMHSEGMGCKEGWU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SingleCurrentCell #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SingleCurrentCell msg;
    msg.setTimeStamp(0.119852601353);
    msg.setSource(21077U);
    msg.setSourceEntity(177U);
    msg.setDestination(58281U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.100675381947;
    msg.lon = 0.746403049574;
    msg.depth.assign("BNMFCPABLNSIFLOZXGHEGKNEGPMJORYAISIAZJXWZFHBIOZWRHORNALGCKYUDMTLJSYGWLNAYFMJYCQXSLAOTKCHRGXNUUTJ");
    msg.vel.assign("QRSKPQXYKHVTQCRLMVMYHCABPPLVACABNTIJUFHKOUQXGFFUWUEQCVIRQNEPNHOBSGOCNDVYYZACSRAEIDPUGBZZEZMSPWZWWSYSXPJXXGKGOPVJASTGLNKYRXRVWJEFFKL");
    msg.dir.assign("JVQMYMDHMBXMSOIIREFYGKLSKDRRPSFNYGJCETZLPTPMGYBDLCLAUHPBCWCZUICJZXBVHYQIWTOAKVIFSJAZXFQLNYSNETHKNSQKGQIVMFELPWVMGNBTRYBGURLADQWQRSWGZWZUOBLZHNTKXIZMCDFHJOUPCYTNGOJHVIJEVWXSCHUWVRDRIUESAYUC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SingleCurrentCell #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SingleCurrentCell msg;
    msg.setTimeStamp(0.347379666783);
    msg.setSource(20946U);
    msg.setSourceEntity(25U);
    msg.setDestination(62454U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.944721623191;
    msg.lon = 0.232593816311;
    msg.depth.assign("GQOCJWSEZYRSYYHXNRWZMZXLMNMRGYCPBPXNUSPKWRSIEADXBTHU");
    msg.vel.assign("LCFFIVTMOILMAWHCZUMXHQRRPUGXLETWWLLNKBBUOLFJZYKJSZYYEDBDAXNWASPLXQOMBMKRHZPZU");
    msg.dir.assign("QVSLEMNCOKAEQJMSSHVKVKHVMDNGZPGDOPGXWMYAMSCKJETOZHTBCSFQTEDCORAUPRIVMHBBKCVNFCJPQKKGACBUIWUDUERSFIX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SingleCurrentCell #2", msg == *msg_d);
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

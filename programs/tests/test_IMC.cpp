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
// IMC XML MD5: 93bef990a69313cf52e9aca30c92d2f2                            *
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
    msg.setTimeStamp(0.331296762661);
    msg.setSource(7906U);
    msg.setSourceEntity(84U);
    msg.setDestination(33439U);
    msg.setDestinationEntity(39U);
    msg.state = 240U;
    msg.flags = 152U;
    msg.description.assign("IGCLDNUJMJBUNKXWUGHRBECDOFGUXHOKQMMTPAAIYRTJEEXSKHVJACGUSLYOPGJHYIFYPZYZHADIOFRRDESTCTAIXAWVWINNTNAQSHDVQQAZEJEXNGCBYEPOVXTCTMQOBOCURKSKDFFWPJZPDVYNBMYVSPNKJWMTRNSUQBIRFMMYSUGTWQFKGPDLJUEVXOLSNPIVBLZHOWRRQBV");

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
    msg.setTimeStamp(0.745276678467);
    msg.setSource(4713U);
    msg.setSourceEntity(186U);
    msg.setDestination(47529U);
    msg.setDestinationEntity(93U);
    msg.state = 192U;
    msg.flags = 192U;
    msg.description.assign("QISGZEOEFKWMD");

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
    msg.setTimeStamp(0.333927594376);
    msg.setSource(37424U);
    msg.setSourceEntity(148U);
    msg.setDestination(58100U);
    msg.setDestinationEntity(133U);
    msg.state = 38U;
    msg.flags = 211U;
    msg.description.assign("PXNMLSXUNTOQJJHMZMIVAOUDLOKNQAQRTTZRIEJBWFXDKSJNEYGIOQRZUSGDYPLJ");

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
    msg.setTimeStamp(0.714531649625);
    msg.setSource(12238U);
    msg.setSourceEntity(194U);
    msg.setDestination(8641U);
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
    msg.setTimeStamp(0.573700414617);
    msg.setSource(595U);
    msg.setSourceEntity(209U);
    msg.setDestination(28521U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.181731019512);
    msg.setSource(28884U);
    msg.setSourceEntity(42U);
    msg.setDestination(14987U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.818042278631);
    msg.setSource(31593U);
    msg.setSourceEntity(163U);
    msg.setDestination(4457U);
    msg.setDestinationEntity(78U);
    msg.id = 137U;
    msg.label.assign("LQZMIDQPAFQHNZPNEKOLMYTQLLUHFVTIOXEBPTVODXOWQFGACNAEVCPGXNHXEZHGZULZSEYMGXLJBSULQVCHACDZKARYRNXYMPJSECSACVJTJPJOQEMNVZRGSTKFBWPBVDNEFTRLMVUWKRPIJBWGQIOKGAAUQURIKHGBNJBHSTILKVRXDFBMDTLYYWWOKPWYVHSICW");
    msg.component.assign("MWWHOVJCBNBOIGKWVNPXFQIJGISLDAGJRISSKCXNNNFSIHKWBXGZDPLJUHDFTPEUHRUFCNNROXYMLACZOQLKDEIDLFGGRXRFQUEPYZMKKIERQYQBJTWSITXAVCLMYARPVDKAHWEYQMIJAAOBLWUDXGPKTWTBZWHDSXSMMYBZGCHIHZUF");
    msg.act_time = 12213U;
    msg.deact_time = 59997U;

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
    msg.setTimeStamp(0.749151578441);
    msg.setSource(33438U);
    msg.setSourceEntity(181U);
    msg.setDestination(50450U);
    msg.setDestinationEntity(205U);
    msg.id = 60U;
    msg.label.assign("KKPUJGOYPAQZWAFPTCLLNIXCBZBMCPHSQOCOZAOFJOTLTDQVIRYGAETVOJELWRZSLGNULQNMRSGOQAEHUHTUEMVRWMRPEWJUXFJMIEAWVDYJDXHMGKVZTUIKFHYYXIMXOBYKTAKVUDWYMX");
    msg.component.assign("APAFNPGIQUMARVWRPLWUMYMLNFZWRYVLQHMRXSNOSGDNAXFXHHHIBTUQWQBLPTCUAEWMHDVTUGIRMVTHCGDONJEXJDVGXCKSQOBX");
    msg.act_time = 29718U;
    msg.deact_time = 8817U;

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
    msg.setTimeStamp(0.919856819859);
    msg.setSource(7966U);
    msg.setSourceEntity(53U);
    msg.setDestination(14479U);
    msg.setDestinationEntity(41U);
    msg.id = 193U;
    msg.label.assign("TOAFJECRDQHYKQTRPXRPQTUVDTKNSXHNRSLOHCNUTMFDVIGZYLNDMVVESOYGBWDDDYYINMDEZBYKPAPHNRKICFUAHZVETBRFSOXVERKEOQWUTCIKWTBYZOULUKZFANGDWUMLJBWWKBMMSXJWCJVFEOYUCLBPHPUNJHUJFCIZAFBOFQQZJGPRAGGIPCCIXAVGVELSZQABXVMXKWYSHWQJGNPHETLITRBRGZXWMFSOS");
    msg.component.assign("CXBSFZMCLTKKASUORIINSXHGWKINLZMZBQSDPFTAIDFPYBJDATUGCHMLVQOGGXEXVYEHGBDDTPSSDUFJZAJZOCZBHWRXRDFJAELDVRIPMKJ");
    msg.act_time = 35989U;
    msg.deact_time = 25891U;

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
    msg.setTimeStamp(0.681110290701);
    msg.setSource(35183U);
    msg.setSourceEntity(191U);
    msg.setDestination(36058U);
    msg.setDestinationEntity(251U);
    msg.id = 184U;

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
    msg.setTimeStamp(0.636915288803);
    msg.setSource(58925U);
    msg.setSourceEntity(117U);
    msg.setDestination(29223U);
    msg.setDestinationEntity(12U);
    msg.id = 89U;

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
    msg.setTimeStamp(0.784251219398);
    msg.setSource(31144U);
    msg.setSourceEntity(235U);
    msg.setDestination(41440U);
    msg.setDestinationEntity(121U);
    msg.id = 163U;

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
    msg.setTimeStamp(0.58374009771);
    msg.setSource(42608U);
    msg.setSourceEntity(65U);
    msg.setDestination(43627U);
    msg.setDestinationEntity(190U);
    msg.op = 12U;
    msg.list.assign("JNMMXIHNXNQQDVVGKQJKKBITVMOPGRSWVQYROSPBTPUDAHOYJANIJCCPCZPNWKXMWIOZFMJISBMJCDGADTBPWSOFMQCVPAMQYYKSRETHGHULUBMJHNFCRACWUATFFZXUROFDHTEGFD");

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
    msg.setTimeStamp(0.856096331537);
    msg.setSource(62861U);
    msg.setSourceEntity(34U);
    msg.setDestination(56941U);
    msg.setDestinationEntity(65U);
    msg.op = 225U;
    msg.list.assign("LRSGYADMTIIRSTZENIPGSXXHNPCRXUVXJEPYLHNLFVSFTOANPBOWHJNKFDBXCFRHGEWDWCREAWNQVLUWDQIBKAFQSM");

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
    msg.setTimeStamp(0.228942931387);
    msg.setSource(62660U);
    msg.setSourceEntity(151U);
    msg.setDestination(39300U);
    msg.setDestinationEntity(39U);
    msg.op = 60U;
    msg.list.assign("HURGGGNFPPLNFJZZTHOAXCDZXYJWFZVKQVQUSHFRPVDGFAUYBCCOGCAJNSQYHWITSVDZITEHLYKWJPSYOEIBPONYVAUDXNUJSNBRBSTWQLXMLSBLKZUQIJDYQWUGMOEQEUDKFEVJMFLCRJHXTWBABYYCTAOJMEIRIEPZKVVCA");

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
    msg.setTimeStamp(0.0508028901336);
    msg.setSource(55170U);
    msg.setSourceEntity(140U);
    msg.setDestination(9688U);
    msg.setDestinationEntity(230U);
    msg.value = 57U;

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
    msg.setTimeStamp(0.568361759267);
    msg.setSource(40639U);
    msg.setSourceEntity(167U);
    msg.setDestination(30998U);
    msg.setDestinationEntity(142U);
    msg.value = 141U;

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
    msg.setTimeStamp(0.277091577548);
    msg.setSource(63093U);
    msg.setSourceEntity(25U);
    msg.setDestination(47190U);
    msg.setDestinationEntity(168U);
    msg.value = 222U;

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
    msg.setTimeStamp(0.122764374713);
    msg.setSource(41255U);
    msg.setSourceEntity(214U);
    msg.setDestination(59129U);
    msg.setDestinationEntity(163U);
    msg.consumer.assign("ADEMUVUHUCFDN");
    msg.message_id = 7698U;

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
    msg.setTimeStamp(0.284553910852);
    msg.setSource(25561U);
    msg.setSourceEntity(30U);
    msg.setDestination(52853U);
    msg.setDestinationEntity(244U);
    msg.consumer.assign("TGCMBFVSGVHLVKPFMQOXUSEXRAOBSVCMORJGRYPGVSBGHOEUIQCNWCTLFQRDNZSASLPFOFYCPHEDWXKHGOUPOBMEDZLHQVJHM");
    msg.message_id = 57241U;

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
    msg.setTimeStamp(0.139054384518);
    msg.setSource(10911U);
    msg.setSourceEntity(192U);
    msg.setDestination(62184U);
    msg.setDestinationEntity(133U);
    msg.consumer.assign("GFKUACRUXRYDHCNWFGHRRJCHTYQTATZZYKJVEQERDPFGZMRZGMALZSICCLBEQRIPYOVKEONJXQVXJEQOHRVVXOWRZASTUMYSFQTJFUODGSYQADEIRASKXVPJAEZDBSUSOCIDXBJMNFNWAFUSTKTNVZDPJIXUBPPLNFYUPBCZPVIDYKFWLSBCOCJIKXNGVHMMKMWLGUMWTLDPBWQQFNZPYHKOWMOGGGIWQHBSLLJTIBUNEAADHYHINWE");
    msg.message_id = 9871U;

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
    msg.setTimeStamp(0.509651062448);
    msg.setSource(35821U);
    msg.setSourceEntity(156U);
    msg.setDestination(12842U);
    msg.setDestinationEntity(202U);
    msg.type = 189U;

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
    msg.setTimeStamp(0.539925538721);
    msg.setSource(23157U);
    msg.setSourceEntity(193U);
    msg.setDestination(58806U);
    msg.setDestinationEntity(124U);
    msg.type = 247U;

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
    msg.setTimeStamp(0.127647971502);
    msg.setSource(41142U);
    msg.setSourceEntity(207U);
    msg.setDestination(13092U);
    msg.setDestinationEntity(110U);
    msg.type = 179U;

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
    msg.setTimeStamp(0.314653066192);
    msg.setSource(11701U);
    msg.setSourceEntity(99U);
    msg.setDestination(35229U);
    msg.setDestinationEntity(228U);
    msg.op = 31U;

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
    msg.setTimeStamp(0.719278374171);
    msg.setSource(51196U);
    msg.setSourceEntity(224U);
    msg.setDestination(7261U);
    msg.setDestinationEntity(108U);
    msg.op = 119U;

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
    msg.setTimeStamp(0.422555597247);
    msg.setSource(65085U);
    msg.setSourceEntity(249U);
    msg.setDestination(38461U);
    msg.setDestinationEntity(92U);
    msg.op = 29U;

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
    msg.setTimeStamp(0.699720369872);
    msg.setSource(23987U);
    msg.setSourceEntity(143U);
    msg.setDestination(13511U);
    msg.setDestinationEntity(118U);
    msg.total_steps = 200U;
    msg.step_number = 152U;
    msg.step.assign("SPFECYQXZXXSDBPGXJLETLWQJFKRLVZEZBGARJQWEJPCVVKQTWL");
    msg.flags = 222U;

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
    msg.setTimeStamp(0.494258637745);
    msg.setSource(1162U);
    msg.setSourceEntity(92U);
    msg.setDestination(63494U);
    msg.setDestinationEntity(86U);
    msg.total_steps = 194U;
    msg.step_number = 246U;
    msg.step.assign("SCUUKDKADZHRFEKMYHFEUNKZKSBSAQIBJT");
    msg.flags = 85U;

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
    msg.setTimeStamp(0.486682961585);
    msg.setSource(38111U);
    msg.setSourceEntity(42U);
    msg.setDestination(10076U);
    msg.setDestinationEntity(152U);
    msg.total_steps = 147U;
    msg.step_number = 69U;
    msg.step.assign("NNQMQVZQULXJTEMCAPIJZDKDVJSHTDVAMAVTOJBRHJZXWBKGKSRCMBPLFKANYFBSNHDRGNUYCWRCEHOIXCDDZDGRIRMYJOTLHZNQSFPEGRUBQYXIXYKOWDHHKPMPELOXRVCZFMPSKUOTWJWSETHWBGAFJNZ");
    msg.flags = 66U;

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
    msg.setTimeStamp(0.997211486897);
    msg.setSource(27702U);
    msg.setSourceEntity(98U);
    msg.setDestination(23876U);
    msg.setDestinationEntity(136U);
    msg.state = 89U;
    msg.error.assign("ZWEXCGRMFSQBSDJTFVIGYPKAIAUCDZZVWOPHZZXEGRHULPRNSVKYYMRRZEAAPPSBCQTMXIPTAKWNWGSNIVULFIJJBXOHUQKPMMMJFZNTBKHENVZLOPVAOTXCFEGHRGULYCGRDGENJYOPANBO");

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
    msg.setTimeStamp(0.243038757146);
    msg.setSource(47560U);
    msg.setSourceEntity(224U);
    msg.setDestination(46534U);
    msg.setDestinationEntity(58U);
    msg.state = 16U;
    msg.error.assign("NRRXLAWHEZQMVOMAZGAZEDJJMTJUTTPXJUAIBFOSFUVESGQGDVGDKQUMCUINIOAKKLUZNUHWPUEPYEYVIIWNGKCCPEERCQKNATDWIVXQSCUCQLFMGZBCKJYRMGZN");

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
    msg.setTimeStamp(0.208623162256);
    msg.setSource(18906U);
    msg.setSourceEntity(198U);
    msg.setDestination(60119U);
    msg.setDestinationEntity(248U);
    msg.state = 106U;
    msg.error.assign("DVGULMRJUZQJWQAZHORTXTQ");

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
    msg.setTimeStamp(0.909715332705);
    msg.setSource(50172U);
    msg.setSourceEntity(94U);
    msg.setDestination(66U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.973826134444);
    msg.setSource(55642U);
    msg.setSourceEntity(81U);
    msg.setDestination(19552U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.393828477126);
    msg.setSource(48496U);
    msg.setSourceEntity(113U);
    msg.setDestination(45501U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.627567452211);
    msg.setSource(27983U);
    msg.setSourceEntity(40U);
    msg.setDestination(65439U);
    msg.setDestinationEntity(38U);
    msg.op = 148U;
    msg.speed_min = 0.196249486717;
    msg.speed_max = 0.890260795419;
    msg.long_accel = 0.167204811107;
    msg.alt_max_msl = 0.912024210185;
    msg.dive_fraction_max = 0.691358451034;
    msg.climb_fraction_max = 0.0245307646476;
    msg.bank_max = 0.184601881563;
    msg.p_max = 0.987581940656;
    msg.pitch_min = 0.419273852921;
    msg.pitch_max = 0.267947473802;
    msg.q_max = 0.194064389671;
    msg.g_min = 0.575603792294;
    msg.g_max = 0.138718537614;
    msg.g_lat_max = 0.829711923542;
    msg.rpm_min = 0.143886438422;
    msg.rpm_max = 0.747044208757;
    msg.rpm_rate_max = 0.143861141965;

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
    msg.setTimeStamp(0.228084564509);
    msg.setSource(52504U);
    msg.setSourceEntity(208U);
    msg.setDestination(48595U);
    msg.setDestinationEntity(215U);
    msg.op = 190U;
    msg.speed_min = 0.203233150173;
    msg.speed_max = 0.518264828457;
    msg.long_accel = 0.415767374418;
    msg.alt_max_msl = 0.747671172895;
    msg.dive_fraction_max = 0.896954172828;
    msg.climb_fraction_max = 0.557832323371;
    msg.bank_max = 0.590468822242;
    msg.p_max = 0.656063342487;
    msg.pitch_min = 0.227196661499;
    msg.pitch_max = 0.221821166411;
    msg.q_max = 0.233448089272;
    msg.g_min = 0.354760407384;
    msg.g_max = 0.0969309507099;
    msg.g_lat_max = 0.416166059558;
    msg.rpm_min = 0.706968235595;
    msg.rpm_max = 0.773344593067;
    msg.rpm_rate_max = 0.523626869042;

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
    msg.setTimeStamp(0.771768014264);
    msg.setSource(3419U);
    msg.setSourceEntity(230U);
    msg.setDestination(62018U);
    msg.setDestinationEntity(41U);
    msg.op = 116U;
    msg.speed_min = 0.589733613555;
    msg.speed_max = 0.268514716206;
    msg.long_accel = 0.281454334295;
    msg.alt_max_msl = 0.55097487106;
    msg.dive_fraction_max = 0.692106465446;
    msg.climb_fraction_max = 0.331208630903;
    msg.bank_max = 0.913115542383;
    msg.p_max = 0.81651739341;
    msg.pitch_min = 0.990399848999;
    msg.pitch_max = 0.474927886328;
    msg.q_max = 0.738758498799;
    msg.g_min = 0.956003467975;
    msg.g_max = 0.0653506649983;
    msg.g_lat_max = 0.489034840407;
    msg.rpm_min = 0.421606154056;
    msg.rpm_max = 0.275217135707;
    msg.rpm_rate_max = 0.258052221641;

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
    msg.setTimeStamp(0.963041248558);
    msg.setSource(11161U);
    msg.setSourceEntity(86U);
    msg.setDestination(37164U);
    msg.setDestinationEntity(1U);
    IMC::GpsFixRtk tmp_msg_0;
    tmp_msg_0.validity = 26226U;
    tmp_msg_0.type = 10U;
    tmp_msg_0.tow = 4204749360U;
    tmp_msg_0.base_lat = 0.325238988033;
    tmp_msg_0.base_lon = 0.75424583154;
    tmp_msg_0.base_height = 0.303912790502;
    tmp_msg_0.n = 0.109934631789;
    tmp_msg_0.e = 0.644545075821;
    tmp_msg_0.d = 0.278661288519;
    tmp_msg_0.v_n = 0.623775932884;
    tmp_msg_0.v_e = 0.703802689349;
    tmp_msg_0.v_d = 0.953124021919;
    tmp_msg_0.satellites = 186U;
    tmp_msg_0.iar_hyp = 589U;
    tmp_msg_0.iar_ratio = 0.440684605105;
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
    msg.setTimeStamp(0.521510221989);
    msg.setSource(63448U);
    msg.setSourceEntity(212U);
    msg.setDestination(61493U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.376428512522);
    msg.setSource(12444U);
    msg.setSourceEntity(222U);
    msg.setDestination(8212U);
    msg.setDestinationEntity(55U);
    IMC::UsblPositionExtended tmp_msg_0;
    tmp_msg_0.target.assign("OBOFMCYAAIVOJYPXDCUGDQSVTVBKSCUNVAYSWBNRRYNGVLKZHPBSPFNZJYUHVICMGUNVYMBCJMTHOOEVTIFBZWDGFAQZSOLMNHFQKBLTEXRXWZFKNFRUZGNRANRYPBWKDAGBCQYIGEOJJTQQ");
    tmp_msg_0.x = 0.312461989744;
    tmp_msg_0.y = 0.0116425705584;
    tmp_msg_0.z = 0.715174412922;
    tmp_msg_0.n = 0.917684909029;
    tmp_msg_0.e = 0.23633660787;
    tmp_msg_0.d = 0.00314578067537;
    tmp_msg_0.phi = 0.148561509234;
    tmp_msg_0.theta = 0.650365119719;
    tmp_msg_0.psi = 0.0844195977405;
    tmp_msg_0.accuracy = 0.863303562084;
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
    msg.setTimeStamp(0.723914069217);
    msg.setSource(62135U);
    msg.setSourceEntity(0U);
    msg.setDestination(58245U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.79609602875;
    msg.lon = 0.0212866207658;
    msg.height = 0.440433362215;
    msg.x = 0.816963694591;
    msg.y = 0.517363369308;
    msg.z = 0.867520089234;
    msg.phi = 0.401593409727;
    msg.theta = 0.109768775177;
    msg.psi = 0.711063139079;
    msg.u = 0.802117901323;
    msg.v = 0.142730226458;
    msg.w = 0.886158056714;
    msg.p = 0.70702769565;
    msg.q = 0.168106567766;
    msg.r = 0.212845120301;
    msg.svx = 0.931976674298;
    msg.svy = 0.511743020991;
    msg.svz = 0.483018178965;

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
    msg.setTimeStamp(0.434744549074);
    msg.setSource(6488U);
    msg.setSourceEntity(69U);
    msg.setDestination(58201U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.978255072873;
    msg.lon = 0.558500512281;
    msg.height = 0.479651528453;
    msg.x = 0.180068164054;
    msg.y = 0.603161056537;
    msg.z = 0.106933430232;
    msg.phi = 0.738495614604;
    msg.theta = 0.534990953439;
    msg.psi = 0.810309265366;
    msg.u = 0.180247869136;
    msg.v = 0.413766195254;
    msg.w = 0.0320891233984;
    msg.p = 0.70607897354;
    msg.q = 0.49364406079;
    msg.r = 0.103602563358;
    msg.svx = 0.504501051535;
    msg.svy = 0.585782293057;
    msg.svz = 0.948826297259;

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
    msg.setTimeStamp(0.21836417444);
    msg.setSource(3023U);
    msg.setSourceEntity(209U);
    msg.setDestination(35456U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.343432627493;
    msg.lon = 0.014829002492;
    msg.height = 0.28100191473;
    msg.x = 0.943245523104;
    msg.y = 0.80968735439;
    msg.z = 0.775659503683;
    msg.phi = 0.935501742521;
    msg.theta = 0.761424491135;
    msg.psi = 0.383016556407;
    msg.u = 0.51890281789;
    msg.v = 0.65001524629;
    msg.w = 0.540956639907;
    msg.p = 0.379284698979;
    msg.q = 0.938152557828;
    msg.r = 0.188280121276;
    msg.svx = 0.0450025176542;
    msg.svy = 0.699985672227;
    msg.svz = 0.771127641245;

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
    msg.setTimeStamp(0.83456303199);
    msg.setSource(23475U);
    msg.setSourceEntity(71U);
    msg.setDestination(44204U);
    msg.setDestinationEntity(115U);
    msg.op = 84U;
    msg.entities.assign("RMKXKLENGFEXOBBKEECBBTVZXJQSSDLRDFZCSOF");

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
    msg.setTimeStamp(0.645821448693);
    msg.setSource(5269U);
    msg.setSourceEntity(106U);
    msg.setDestination(51594U);
    msg.setDestinationEntity(129U);
    msg.op = 3U;
    msg.entities.assign("PCDUGEVIIAXRXPBBHWGRSCSVQ");

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
    msg.setTimeStamp(0.491310292953);
    msg.setSource(38676U);
    msg.setSourceEntity(183U);
    msg.setDestination(26838U);
    msg.setDestinationEntity(32U);
    msg.op = 66U;
    msg.entities.assign("SIWQRYHLKNIZSWSXGJDDTKHOZZLWZYKPLONFAVXBDJKJCDNVHHOSJAYQGWPEEDNTJCRIMLPZPMEQXZDIUSBUFMBOEDYNOKDRXIFCNEIWXXYJLZGKJPOBNQCPITKTVOXTABHLCZWXSDPGLXRAMMQAVPRE");

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
    msg.setTimeStamp(0.725740361671);
    msg.setSource(28927U);
    msg.setSourceEntity(137U);
    msg.setDestination(4893U);
    msg.setDestinationEntity(128U);
    msg.type = 224U;
    msg.speed = 12005U;
    const char tmp_msg_0[] = {110, -69, 74, -51, -49, -1, 113, 21, -114, -4, -33, 76, 12, 2, -17, 45, -78, -109, 87, -42, -72, 7, 68, 31, 68, 34, 48, 73, -49, 26, -16, 58, -81, 19, 120, -91, 66, -53, 35, 9, 113, 65, 49, -66, -92, -59, 17, 12, -79, -81, 84, 48, 124, 24, -70, 106, 19, 81, -41, -116, 89, -18, 95, -92, 79, -90, 54, -84, -102, -119, 65, 53, 83, 15, 66, -93, -86, 37, 6, -86, -37, -86, -121, 97, 115, 86, 55, 107, 3, -78, 53, -23, -97, -45, -43, -6, 83, 19, 117, 88, -90, 92, 8, -48, 125, 86, -1, 114, -98, -89, -36, -38, 103, 78, 40, 69, 21, -35, -127, 39, -89, -61, -96, 33, -96, -22, -110, 124, -50, 33, 37, -7, 29, -109, -38, 5, 3, -29, 65, 125, 26, -76, 95, 45, 62, 94, 107, 35, -89, -39, 82, -113, -23, 98, 123, -41, 43, -16, -101, -25, -128, 15, 29, -87, -6, -117, -74, -57, 56, 13, -104, -93, 69, 23, -42, -13, -5, -52, -19, -41, -51, 8, -40, -15, -31, 96, 13, 66, -92, 7, 95, 112, 50, -110, -54, -53, 87, 119};
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
    msg.setTimeStamp(0.16162729884);
    msg.setSource(5119U);
    msg.setSourceEntity(90U);
    msg.setDestination(24535U);
    msg.setDestinationEntity(94U);
    msg.type = 175U;
    msg.speed = 1512U;
    const char tmp_msg_0[] = {7, 87, 29, -2, 70, 105, 123, -126, 5, 40, -44, -53, -28, -32, 87, -37, 117, -73, 62, -125, 20, -29, 124, -35, -104, -84, -118, 94, 39, 32, -114, -27, -31, 105, -119, -76, 14, 90, -18, 112, 116, -121};
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
    msg.setTimeStamp(0.616906635913);
    msg.setSource(37029U);
    msg.setSourceEntity(188U);
    msg.setDestination(42061U);
    msg.setDestinationEntity(246U);
    msg.type = 164U;
    msg.speed = 54347U;
    const char tmp_msg_0[] = {-28, -120, -114, -47, -26, 117, -56, 75, 46, 17, -3, 15, -118, -11, -67, 43, -12, -95, -13, 14, -86, -95, -100, -72, -94, 103, 92, -26, -7, -47, -62, 67, 91, 70, 123, 124, 85, 24, 36, -66, 59, 34, 57, 40, -34, -104, -18, -111, -117, 31, 41, -43, -84, -86, 57, -8, -25, -56, -50, -2, -86, 7, 10, -33, 20, -23, -13, -25, -54, -110, -22, -60, 20, 5, 92, 87, 44, 39, -71, -49, 79, 125, -79, -24, 47, -113, 123, -78, -79, -71, -11, 28, -118, 32, -33, -72, 19, -110, 43, -97, 106, -75, -127, 8, -83, 75, -66, -92, -10, -125, -69, -102, -48, -13, -105, -32, 31, 63, 50, -53, -10, 94, 10, 8, -47, -41, 84, 80, 112, -94, 16, 31, 126, -55, -71, 17, -82, -20, 2, -103, -33, -26, 58, 50, -4, -22, 77, -41, -83, 55, -52, 42, -93, -110, -123, -117, -65, 37, 16, -111, -60, -41, 59, -96, 114, 51, -84, 84, -58, -62, -68, 80, -54, -92, 110, 100, -93, -25, 84, -111, -108, -23, 8, -18, -77, -63, -122, 42, 34, 31, 0, -76, 126, -69, 79, -73, -46, -52, -99, -59, 76, 48, -40, -32, -19, -24, 8, 91, -20, 49, 79, 51, -111, 32, -57, -65, 71, 3, -60, -112, -75, 50, 53, 120, 31, 34, 113, 72, 42, 122, -110, -52, 15, 63, 28, -73, -93, 125, -17, -76, -7, -34, -74, -58, 40, 54, 8};
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
    msg.setTimeStamp(0.1150048365);
    msg.setSource(43779U);
    msg.setSourceEntity(186U);
    msg.setDestination(25412U);
    msg.setDestinationEntity(110U);
    msg.op = 58U;
    msg.tas2acc_pgain = 0.409898885014;
    msg.bank2p_pgain = 0.639411920938;

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
    msg.setTimeStamp(0.00731691382637);
    msg.setSource(27902U);
    msg.setSourceEntity(153U);
    msg.setDestination(6898U);
    msg.setDestinationEntity(78U);
    msg.op = 55U;
    msg.tas2acc_pgain = 0.352743615436;
    msg.bank2p_pgain = 0.379835712696;

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
    msg.setTimeStamp(0.307093631567);
    msg.setSource(13634U);
    msg.setSourceEntity(239U);
    msg.setDestination(54602U);
    msg.setDestinationEntity(5U);
    msg.op = 181U;
    msg.tas2acc_pgain = 0.201264599314;
    msg.bank2p_pgain = 0.0728782170031;

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
    msg.setTimeStamp(0.31747865207);
    msg.setSource(6462U);
    msg.setSourceEntity(129U);
    msg.setDestination(48401U);
    msg.setDestinationEntity(173U);
    msg.available = 1138558961U;
    msg.value = 208U;

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
    msg.setTimeStamp(0.764827028566);
    msg.setSource(18596U);
    msg.setSourceEntity(212U);
    msg.setDestination(16536U);
    msg.setDestinationEntity(206U);
    msg.available = 2884414362U;
    msg.value = 208U;

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
    msg.setTimeStamp(0.495012428201);
    msg.setSource(45039U);
    msg.setSourceEntity(165U);
    msg.setDestination(8783U);
    msg.setDestinationEntity(155U);
    msg.available = 1217460392U;
    msg.value = 132U;

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
    msg.setTimeStamp(0.873727573403);
    msg.setSource(2713U);
    msg.setSourceEntity(199U);
    msg.setDestination(53801U);
    msg.setDestinationEntity(118U);
    msg.op = 160U;
    msg.snapshot.assign("CWCSIVDYOXCCZVDBJEFHNRTQEJJQILFRBYRALRVWITYMKUYYJGKYLUQLITFKAISVFHZTPMMZKLSMCDXSXRHAKAVDNHTUNHCVRFBEIOVSMKVGXRLMGUEZWWQWMFHUPPXRTQPAFYBSPCTKFKWGTTXLNEOBDTJPGSHOQHJNHZLYXIDEDCPFUISWARSOPCJBOB");
    IMC::SmsStatus tmp_msg_0;
    tmp_msg_0.req_id = 34366U;
    tmp_msg_0.status = 128U;
    tmp_msg_0.info.assign("BXOZIVGIEHGFSNHSEJMVEANBPELQICBGHYCHDEQYFHJWZKNNTDFVAHLQUXYKBRNRJKCNBYGNWYTDUPJMDSLSMNFXFZCLYMXWOZIOOJADGZKQZRVHUZITSKPTADAMGSCIBWJOWVHYKLPRPTGLGOZWEUKU");
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
    msg.setTimeStamp(0.826377066801);
    msg.setSource(23755U);
    msg.setSourceEntity(179U);
    msg.setDestination(59807U);
    msg.setDestinationEntity(69U);
    msg.op = 74U;
    msg.snapshot.assign("BIKEDQIJRNGKXSGROQDSZFZXJODLWJXJSCCDEGRQXOZOEHKWKQZQNUECLGFFOACKFERSSYTANTPTZOJUGEOBBTHVTMWJUGYFHXDUPMDPSPNMJAQUNAHKBAKIAGNYQWEVKWYOQIDJACLFCAHGFMYVELGTSTMSRBIXPODVABHNVQHCLMMTWVQLLBYVNLTILXYYRWHZJVHWXUIFBKRBMCVPTRSKMIDZXWFUECBRPHAZPJZCNZPRLUMUUYYGVNPWO");
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.821261166722;
    tmp_msg_0.y = 0.239558586518;
    tmp_msg_0.z = 0.810259509761;
    tmp_msg_0.k = 0.0538035285703;
    tmp_msg_0.m = 0.997241628014;
    tmp_msg_0.n = 0.158022866963;
    tmp_msg_0.flags = 138U;
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
    msg.setTimeStamp(0.875554552808);
    msg.setSource(37884U);
    msg.setSourceEntity(170U);
    msg.setDestination(16856U);
    msg.setDestinationEntity(143U);
    msg.op = 136U;
    msg.snapshot.assign("IHRATTJZYYJPELLXOEHFGKERXBKZUYDDJMODBZTVVICRMXGBCICXABQDVMWNGKUSGHULXIGMKXSGOMZSTIHLYRCBHGRZXLBBGWMVXVNEWCZRZLZIUNSIUIPMNHJGIQTNUJKWFAGPPASJWOXWAQPWFDFYNLDMAAQTSFZPJHKFDSCSJSNYQYTYQQBRWMKU");
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = 84;
    tmp_msg_0.value = 763706521;
    tmp_msg_0.gain = 115U;
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
    msg.setTimeStamp(0.425278618951);
    msg.setSource(48018U);
    msg.setSourceEntity(127U);
    msg.setDestination(6111U);
    msg.setDestinationEntity(205U);
    msg.op = 39U;
    msg.name.assign("NRGIUFLTVNRWTHHYJDPUZHBYVIFJSJOCIR");

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
    msg.setTimeStamp(0.349402643422);
    msg.setSource(48943U);
    msg.setSourceEntity(102U);
    msg.setDestination(27916U);
    msg.setDestinationEntity(233U);
    msg.op = 28U;
    msg.name.assign("XARVZSEWXVGNWFQYIFSODWKUYGHODHKJIBMUCOTRWHEXYHUPENZFQKPJJXTZPDNQZFJRMCKLXACLLHFJKSFJBMKCQPGVSRQTNPJVXTWAWDIKFSSWBGHEXTXJQCVPSNVMDERVDIBEHGDNANBPITDIOAUBKQTYADCMKBUYESYUGCLAHTUQMUICGJIMFUEOLKAXYZIBOHSZABSLHJOYZWFCNXQVDMRF");

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
    msg.setTimeStamp(0.757730392203);
    msg.setSource(13942U);
    msg.setSourceEntity(198U);
    msg.setDestination(54352U);
    msg.setDestinationEntity(250U);
    msg.op = 106U;
    msg.name.assign("YBRAEWJTFDLPPRPYBGXADTQGWWKSRRIPSOXWYZNPJSZEOOYHWCHOHDXMMDTKRZMCTLOIBULMEIBQUCDSEBTVKRGNQFXWRVMAJBTNAEGWUKIOXXHFXQXVGKNUDJCQ");

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
    msg.setTimeStamp(0.728979782559);
    msg.setSource(49647U);
    msg.setSourceEntity(52U);
    msg.setDestination(42737U);
    msg.setDestinationEntity(28U);
    msg.type = 6U;
    msg.htime = 0.671108826885;
    msg.context.assign("BLJGREUWNLGTYGQVGDAXIXDHXJSGVDSIMXYUWORXOQRIOESMKIFAGDCUSFROWZWMIYGTINZWOEOFULIPBXVUZZMZSGBUBWRPLFHOOLHRATMUAYTWCLQQEKMQQSNBEXRLUKBJHPUQNGLPTRKECMJSETBTQMFYPWUNMAVCVILHCFAKACWHTNBTNRKKEZ");
    msg.text.assign("UMSCPTBCWYSLXMFWSLMZLFACDHCGPTHAVJTTKRUFHVOQZUAUSCRRWOGVEWEQAYSFENOUXUXPTNFBOMSEQBBGUGGDLKPLQIXEPKABHWPZQZHPAEILEXORCVJWRAVHJIMNSFGIDHOZTDPWVMYLCJACDOYWGGKRICQDNLLKEKNRNNBZRMJYDXJALIFHVYTYQTFVRKUK");

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
    msg.setTimeStamp(0.0752037545756);
    msg.setSource(39972U);
    msg.setSourceEntity(21U);
    msg.setDestination(46096U);
    msg.setDestinationEntity(167U);
    msg.type = 222U;
    msg.htime = 0.0571041095982;
    msg.context.assign("LYZUGMEQDCDDHYVNBMKWFOJPOPFCFPNHUMDVEQBZDOUUDJVRUNMMPQFCBTZWSZNVGDZXYA");
    msg.text.assign("OBVMOTCXUBWSINOVYYQVIEBLWCJJTYDYRKRQ");

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
    msg.setTimeStamp(0.726609917553);
    msg.setSource(35222U);
    msg.setSourceEntity(124U);
    msg.setDestination(4922U);
    msg.setDestinationEntity(83U);
    msg.type = 36U;
    msg.htime = 0.51333997926;
    msg.context.assign("PDLUYHWLYAJCGLPTXFSIJSFKWWEXVEYXOQPZTWNDGOEUBTCFVQMYXDMIKAOCCDZLUNBFQECITXVVGWZPVYTWEBKVFRRZOPRWQJHAZRRRNMEKOJQYSZSNQLAXYJUGQKXHPDWUKHUSVMYLKSSTUXKZKJJBDIUHJGCRPIHSBTZISBHMYNUPDUHQ");
    msg.text.assign("QGZZOQYYPWYKEAGIUYFGUGNUJMLYBKXJKNWQAJVNWXCDMJGEYWJMZFLVDTIDAPUJIZZCKOTWHQGQLOMTFGECJNLVHPAPRQOAVOSPLXWRURJKYHROKSZKVVQNLSTBMUCUCISLRJETCXEIIDMDKNADXQKPRXTBEBXNYRAXHFUSRZIGETJCSMOTOHNARGYSCMWPCDXFULIIVTWQWPDTNRZKVLHPDIEHSEBUAXOQCVLNWPZB");

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
    msg.setTimeStamp(0.568119957);
    msg.setSource(4162U);
    msg.setSourceEntity(200U);
    msg.setDestination(63772U);
    msg.setDestinationEntity(2U);
    msg.command = 80U;
    msg.htime = 0.435893378247;

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
    msg.setTimeStamp(0.931907319436);
    msg.setSource(28087U);
    msg.setSourceEntity(54U);
    msg.setDestination(19452U);
    msg.setDestinationEntity(68U);
    msg.command = 3U;
    msg.htime = 0.178166996849;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 202U;
    tmp_msg_0.htime = 0.189306801893;
    tmp_msg_0.context.assign("QKMTLTFWNKFEVROLXCKMCQIYD");
    tmp_msg_0.text.assign("WOZJKRTITJXOJEHGYYNQDTNWLGSHGSDQIDDAPZEXMXBWEYWRGHBJLZHQNBLULSFQXRFAQNLLKOXUCHYPTFKRSUMKIRJTVMWCUGDVPUAEDESVUBNMYIEYAMCCLWNVZSHNQNFGSYCJVSEZQDYFPMOTIVZDMCRGPQFKFYKNGJBIEJVBPZKPZHXVXFWIKOSRXCUBAETQB");
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
    msg.setTimeStamp(0.0634769979842);
    msg.setSource(16176U);
    msg.setSourceEntity(126U);
    msg.setDestination(27990U);
    msg.setDestinationEntity(164U);
    msg.command = 220U;
    msg.htime = 0.906572120503;

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
    msg.setTimeStamp(0.606828856014);
    msg.setSource(26571U);
    msg.setSourceEntity(209U);
    msg.setDestination(5157U);
    msg.setDestinationEntity(186U);
    msg.op = 54U;
    msg.file.assign("HFWVZJBWVKFDITUYQSKCNVFFUXLPQTHIZJZBYTICOOFLWBQDCEMYEJQCMEIOTEFMPXJFUGXMLTRFYYUAIDISLVBOHSRGCUOSHKWSJEXBOBTCNQAHTPZMYQAVLKRENMXDUONHRPXENOIRSNLGUTSCJBQGZJJRVAMAMDPEVIAJXLQYGNKGHBAKZWNSYBLKLPDXWRYGISHEVRWQUHVWCGANDKZTFLQVPMUWWUK");

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
    msg.setTimeStamp(0.920696001387);
    msg.setSource(4826U);
    msg.setSourceEntity(62U);
    msg.setDestination(58908U);
    msg.setDestinationEntity(137U);
    msg.op = 164U;
    msg.file.assign("LGVUKGWVDSQHZIXZJGZRHCOZKSWNOANOFSIYTWUQWCHYVURHSKCYPRGYRMDQXMYFOGIZAFOLCNFJJTRFBUBTWUE");

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
    msg.setTimeStamp(0.393206540373);
    msg.setSource(1430U);
    msg.setSourceEntity(75U);
    msg.setDestination(21484U);
    msg.setDestinationEntity(79U);
    msg.op = 187U;
    msg.file.assign("SYBCUCPMWRDOXPGCKIKSKHVTDDSZTFRPLNRTWJVTELJUQQBRMYUNFSWOYANMOYMXVQFHVHLJIVNPNLVNZHZZMJKXUBELAYXFPAAZCFDFNDTINZEWPWWHGYHKFQMTYQJZQKRMJHDASEFUOCXAHSDCYEPSDEIHWOXGEWWGHBQBSKQTCUEUX");

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
    msg.setTimeStamp(0.773217380719);
    msg.setSource(23157U);
    msg.setSourceEntity(103U);
    msg.setDestination(18320U);
    msg.setDestinationEntity(182U);
    msg.op = 234U;
    msg.clock = 0.00839460283338;
    msg.tz = -38;

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
    msg.setTimeStamp(0.621689618794);
    msg.setSource(40730U);
    msg.setSourceEntity(78U);
    msg.setDestination(14299U);
    msg.setDestinationEntity(8U);
    msg.op = 56U;
    msg.clock = 0.915807984648;
    msg.tz = -53;

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
    msg.setTimeStamp(0.936526673068);
    msg.setSource(50476U);
    msg.setSourceEntity(27U);
    msg.setDestination(44655U);
    msg.setDestinationEntity(100U);
    msg.op = 46U;
    msg.clock = 0.928616729726;
    msg.tz = -16;

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
    msg.setTimeStamp(0.544964383552);
    msg.setSource(48203U);
    msg.setSourceEntity(110U);
    msg.setDestination(28817U);
    msg.setDestinationEntity(221U);
    msg.conductivity = 0.317022166128;
    msg.temperature = 0.729022993038;
    msg.depth = 0.310927925238;

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
    msg.setTimeStamp(0.336221738684);
    msg.setSource(30343U);
    msg.setSourceEntity(135U);
    msg.setDestination(12700U);
    msg.setDestinationEntity(113U);
    msg.conductivity = 0.573668503398;
    msg.temperature = 0.0750508349084;
    msg.depth = 0.255484059111;

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
    msg.setTimeStamp(0.975435433079);
    msg.setSource(42724U);
    msg.setSourceEntity(15U);
    msg.setDestination(55523U);
    msg.setDestinationEntity(100U);
    msg.conductivity = 0.693876889657;
    msg.temperature = 0.181208985484;
    msg.depth = 0.977076360995;

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
    msg.setTimeStamp(0.331787162542);
    msg.setSource(62087U);
    msg.setSourceEntity(125U);
    msg.setDestination(19084U);
    msg.setDestinationEntity(155U);
    msg.altitude = 0.595037678948;
    msg.roll = 51701U;
    msg.pitch = 29359U;
    msg.yaw = 14545U;
    msg.speed = 29849;

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
    msg.setTimeStamp(0.695394721735);
    msg.setSource(52642U);
    msg.setSourceEntity(102U);
    msg.setDestination(42764U);
    msg.setDestinationEntity(120U);
    msg.altitude = 0.500992052232;
    msg.roll = 13194U;
    msg.pitch = 44767U;
    msg.yaw = 65172U;
    msg.speed = 26097;

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
    msg.setTimeStamp(0.506891548339);
    msg.setSource(32953U);
    msg.setSourceEntity(2U);
    msg.setDestination(16802U);
    msg.setDestinationEntity(145U);
    msg.altitude = 0.570479226982;
    msg.roll = 21897U;
    msg.pitch = 34670U;
    msg.yaw = 55903U;
    msg.speed = 2904;

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
    msg.setTimeStamp(0.990315334584);
    msg.setSource(49619U);
    msg.setSourceEntity(236U);
    msg.setDestination(2269U);
    msg.setDestinationEntity(226U);
    msg.altitude = 0.274480168479;
    msg.width = 0.344854414843;
    msg.length = 0.458632720085;
    msg.bearing = 0.896315919847;
    msg.pxl = 11477;
    msg.encoding = 203U;
    const char tmp_msg_0[] = {14, -77, -87, 112, 15, -63, 34, 2, 35, 56, -64, 104, 61, -20, -42, 79, -18, -32, -96, 111, 63, -93, -120, 119, -84, -45, 3, 15, -85, -110, 79, -47, -43, 92, 94, 98, 25, 118, -117, -59, -34, -124, 73, 102, 109, -57, -30, 24, -16, 28, 80, -42, -121, -105, 29, 51, 20, 82, -114, 72, 116, -24, -8, 48, 111, 94, -125, -66, 15, -79, -28, -80, -44, -92, -116, 103, -1, -25, -4, -43, -55, 8, -37, 33, 72, -103, -77, -75, -121, 106, -47, -2, -84, 49, 9, -36, 113, 26, -80, 38, 74, -10, -115, -107, -74, 37, -80, 60, 106, -1, 114, -35, -95, 118, -37, 116, -78, 122, 36, -77, 51, -42, 20, -73, -38, 126, -101, -25, -1, -96, -61, 115, -107, -13, -18, 111, -115, 65, -86, 65, 123, -27, -68, -104, 55, -31, 58, -125, -92, -59, -87, -62, 115, 67, -95, -11, 56, 8, -21, -44, -125, -124, -13, 83, -56, -92, -123, 118, 93, -89, 119, -9, -6, 54, -52, 60, 53, 21, -33, -29, 70, -52, 112, 124, 69, -90, 104, -118, -33, -22, 106, -111, 88, -103, 106, -7};
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
    msg.setTimeStamp(0.274872516741);
    msg.setSource(3288U);
    msg.setSourceEntity(96U);
    msg.setDestination(17143U);
    msg.setDestinationEntity(208U);
    msg.altitude = 0.328027541533;
    msg.width = 0.102264613826;
    msg.length = 0.0947050903258;
    msg.bearing = 0.475540218656;
    msg.pxl = 18348;
    msg.encoding = 22U;
    const char tmp_msg_0[] = {-41, -9, 104, -23, -71, 79, 19, -61, -22, -89, -107, -29, 54, -84, -10, 1, 36, 111, 34, 92, -29, -100, -7, -27, -29, -50, -7, 38, -47, -25, 26, -58, 54, -34, 8, -108, -126, 35, -34, 0, 99, 102, 73, 52, -49, 96, -43, -30, 70, 23, 115, -95, 26, 103, -104, 69, 116, 43, 115, -33, -90, 111, -125, 48, 33, 71, 46, 66, 108, 63, 108, 18, -67, -73, -21, 89, 37, 21, -106, 94, 72, -31, 72, 28, -53, -99, 126, -47, -78, -121, -27, -58, 51, 74, 77, 57, -13, -12, -71, 64, 17, 18, 59, 118, 33, -40, -74, -110, -33, -76, -18, 58, 62, -3, -66, -4, 28, 37, 87, -117, 30, 86, 49, 87, -36, 88, 45, 8, -86, -28, -67, 7, 35, 22, 36, -62, -41, -118, -54, 86, -83, -30, 50, 40, 118, 41, -30, 48, 124, 53, -26, -110, 84, 30, 17, 19, 28, 19, 9, -102, 116, 123, 103, -111, 79, -39, -33, -75, -106, -63, -91, 92, 20, 97, 99, 109, 38, -34};
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
    msg.setTimeStamp(0.669131645564);
    msg.setSource(60809U);
    msg.setSourceEntity(244U);
    msg.setDestination(56571U);
    msg.setDestinationEntity(200U);
    msg.altitude = 0.671578053728;
    msg.width = 0.0354982282802;
    msg.length = 0.375839286464;
    msg.bearing = 0.778237091522;
    msg.pxl = -21825;
    msg.encoding = 113U;
    const char tmp_msg_0[] = {117, -78, 17, -54, -24, 59, 111, 6, 85, 98, 52, -66, 43, 10, 114, 8, -4};
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
    msg.setTimeStamp(0.172345585966);
    msg.setSource(19961U);
    msg.setSourceEntity(92U);
    msg.setDestination(44044U);
    msg.setDestinationEntity(9U);
    msg.text.assign("SVJWXIVODGHYZEECYZNSRIKVSJPGNYAWWZQHIKRSKAHBTWLLXPZXBLHJCICZZYLUXPCXIMVGFQHCEPUAGQBWBADHGTMRUQPGAMPSCBLZD");
    msg.type = 186U;

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
    msg.setTimeStamp(0.016234669399);
    msg.setSource(40987U);
    msg.setSourceEntity(76U);
    msg.setDestination(16206U);
    msg.setDestinationEntity(88U);
    msg.text.assign("UJBBJMRESLTHMWYKSVFCJUALZPKCZGZKXORFDBWDXQONTQZNLWQOPLDRMVKRSOTVXEIWHANDVFGUZUSUXVFGANCVDOZRJGCMEMPWPKOLRKPH");
    msg.type = 78U;

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
    msg.setTimeStamp(0.895397277171);
    msg.setSource(44449U);
    msg.setSourceEntity(178U);
    msg.setDestination(44394U);
    msg.setDestinationEntity(115U);
    msg.text.assign("NHZCFVYWQXTKMWPXDSMKWOJLPXODGTGRSSQNSVJTOTVRKLRFFCYVYYEEGUAQIPOWAVPHICAJDTIHCUDHALDEBBOEZJZTSANXZYEJYFSRLVSKFALBNOZYGTIEEMOWOULBXPXUTBLGMGQPNWRJWOHORYNPAVYKMMDGUTUKGJLKMNARZBBLSTGQBVLBIJQWCFUXFFIAVZRCUFHWWXNHRZQJMCZDYKJUIECDXMCAKDMUKHR");
    msg.type = 246U;

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
    msg.setTimeStamp(0.745193327787);
    msg.setSource(25845U);
    msg.setSourceEntity(121U);
    msg.setDestination(2941U);
    msg.setDestinationEntity(114U);
    msg.parameter = 132U;
    msg.numsamples = 205U;
    msg.lat = 0.201778211508;
    msg.lon = 0.00726550836605;

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
    msg.setTimeStamp(0.795093779784);
    msg.setSource(65500U);
    msg.setSourceEntity(17U);
    msg.setDestination(51155U);
    msg.setDestinationEntity(139U);
    msg.parameter = 133U;
    msg.numsamples = 130U;
    msg.lat = 0.187303421411;
    msg.lon = 0.896853707278;

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
    msg.setTimeStamp(0.400494218302);
    msg.setSource(60577U);
    msg.setSourceEntity(152U);
    msg.setDestination(43361U);
    msg.setDestinationEntity(26U);
    msg.parameter = 75U;
    msg.numsamples = 30U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 6238U;
    tmp_msg_0.avg = 0.910057287269;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.214442733888;
    msg.lon = 0.140109509272;

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
    msg.setTimeStamp(0.0418426159139);
    msg.setSource(44947U);
    msg.setSourceEntity(213U);
    msg.setDestination(14764U);
    msg.setDestinationEntity(194U);
    msg.depth = 64377U;
    msg.avg = 0.172454782829;

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
    msg.setTimeStamp(0.624365499229);
    msg.setSource(5683U);
    msg.setSourceEntity(0U);
    msg.setDestination(57674U);
    msg.setDestinationEntity(2U);
    msg.depth = 57722U;
    msg.avg = 0.496134508198;

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
    msg.setTimeStamp(0.0709443208382);
    msg.setSource(46891U);
    msg.setSourceEntity(96U);
    msg.setDestination(16192U);
    msg.setDestinationEntity(79U);
    msg.depth = 33983U;
    msg.avg = 0.629712119085;

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
    msg.setTimeStamp(0.103277648533);
    msg.setSource(34196U);
    msg.setSourceEntity(51U);
    msg.setDestination(38372U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.346704278734);
    msg.setSource(27389U);
    msg.setSourceEntity(195U);
    msg.setDestination(7139U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.613632658354);
    msg.setSource(19887U);
    msg.setSourceEntity(177U);
    msg.setDestination(36573U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.0958017542902);
    msg.setSource(20346U);
    msg.setSourceEntity(22U);
    msg.setDestination(26548U);
    msg.setDestinationEntity(147U);
    msg.sys_name.assign("ENDDRPNDBZKKXPXRUWBJQPVBIBKBZLMTYQSWYKJIHQOSAZAXPXSGVFWJWOJFXQCAZNLNGYVCIWUEDTMXMXECSVWZCBDHHOYEWPXLQVHTCRIQTLQCQDRVSFUPTGIRJGGJIZLPEKFTOFGFUHCHO");
    msg.sys_type = 1U;
    msg.owner = 55957U;
    msg.lat = 0.983534538423;
    msg.lon = 0.538548540904;
    msg.height = 0.869261771468;
    msg.services.assign("TBQVXDPMXLJTONEANZOUUIVVVCJHAGNUSHZKYSCJHNLKXKRFFCQJBYMAGASSJYVCRSNDJFHWQLTXDTXFBNRYGIZLDSAZDQFWKGGSGOCWHDRPCPEQRYEFBULZIUEZYTIEFOQDLHWXPDBJDWBBMKTWGQKBAWKLGZVYPOUIXSYLAFLPBZPEROIHAJTMZUEVCMVIYMIQDPNGPMHIYXLONROMKKSWAUWTIFHXMHFNREVCGBETTAXQRJ");

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
    msg.setTimeStamp(0.913300440423);
    msg.setSource(33494U);
    msg.setSourceEntity(207U);
    msg.setDestination(210U);
    msg.setDestinationEntity(25U);
    msg.sys_name.assign("VQZSONGZVRLGJTIFRGMMMTJJACPIKGHVGJIXGFMCKNWVXOKLGVOVSBM");
    msg.sys_type = 78U;
    msg.owner = 20921U;
    msg.lat = 0.168570373517;
    msg.lon = 0.97697744295;
    msg.height = 0.817523266212;
    msg.services.assign("WWTYCOHWOMMIVUESEBBHYZWZOAUFYQZXIHPNDJUOAWDANOLZJDFLEJPAPQVUTACLQTKMSHBTRSPDGSORWDDRPKHRQGZIALRNYREXHCPLWRDRNQVFIBUIRTGXEEKGFWSSGLMPZNHEUQIYLDVMJKXDVEFFSMNTSCYKBMCUGSXVJYFHLVGLFKIVGGYBTQQJVJUVOTBWCZXKYXHQPNMKRBQFNOCXPMYIOUSXNBZO");

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
    msg.setTimeStamp(0.82723650518);
    msg.setSource(34059U);
    msg.setSourceEntity(62U);
    msg.setDestination(55474U);
    msg.setDestinationEntity(3U);
    msg.sys_name.assign("XLSCBDUNMNTCWANZBTLGWKHJWPEEBYKZVCDZGIEOJXKKVWRCTMOUUBHJKYUFEXEBFKDWIGABZUCIGJAARQHREYFULQOMXXOTMBCVHDGBQOOL");
    msg.sys_type = 125U;
    msg.owner = 49383U;
    msg.lat = 0.226141565887;
    msg.lon = 0.294786694512;
    msg.height = 0.910716704367;
    msg.services.assign("UTGLLFEHNAIPPEJJEFLGOWZUTECFFRIAPCTNSMGMPHKJSBKDHPSFLEHXBOGWMJECKZDDVWYXQHKVSTXYFMHFAZXVRWUMYNIMJXZUSIVBRRTNPOGPMKJRJJRIBOQWPNDIWWSGVZCUSLCQOQGEDFYLBKVCDHSZCEVGAXBOUCAYUSXFLHBLTFUAZBZZMONYNNVRULQQKRYRAVWACMA");

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
    msg.setTimeStamp(0.211435948457);
    msg.setSource(20398U);
    msg.setSourceEntity(46U);
    msg.setDestination(29960U);
    msg.setDestinationEntity(40U);
    msg.service.assign("QHBQNOEGBSYMPEGFWVMXLJHONDHFUNDJKAIULQYWMBNRBQWCVHUIQKVJAZHFKTSIJZYUCRVBZPSDGNDDGRVLJWWHOCKIZAORKXWYRBEZUXBCRSETMSNAFQGHACTBFVMQTLPLYDEZASCJZZFRJRIUPTOSPTACPIFZFAZYDTXKEWYMVQWWCMGAOPTKELLCRDMJFGKMBNPSEODNS");
    msg.service_type = 59U;

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
    msg.setTimeStamp(0.673182433772);
    msg.setSource(64676U);
    msg.setSourceEntity(245U);
    msg.setDestination(27326U);
    msg.setDestinationEntity(129U);
    msg.service.assign("QFOUNANFERPBIQNNQVGCTDNULNNPEEWJQNLXXBTNZRZXIOUYZVJYBMSFWYETGHKKSPHSAJWUTDMMIACHDCFWJGYLTJZJMHKSCDRCOC");
    msg.service_type = 241U;

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
    msg.setTimeStamp(0.0139206119505);
    msg.setSource(45523U);
    msg.setSourceEntity(115U);
    msg.setDestination(49559U);
    msg.setDestinationEntity(211U);
    msg.service.assign("KROWTJWQOHHUVCRYLXASINTYMPDGTRZOPRONWFPAJTSEEHLVKZMLOBRTSDKJYEWHQQKOMLYYEONRFPMVHBGZSDXLIHBYMCAFENBCIDLAAJNKUXFOMXMFDNGZVWZYIHOPEVCVUXALMSISQAKQNPWDMEPQ");
    msg.service_type = 153U;

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
    msg.setTimeStamp(0.145157464985);
    msg.setSource(3914U);
    msg.setSourceEntity(186U);
    msg.setDestination(44146U);
    msg.setDestinationEntity(60U);
    msg.value = 0.152660893766;

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
    msg.setTimeStamp(0.857232649909);
    msg.setSource(61021U);
    msg.setSourceEntity(111U);
    msg.setDestination(41831U);
    msg.setDestinationEntity(65U);
    msg.value = 0.766283353355;

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
    msg.setTimeStamp(0.803103997247);
    msg.setSource(10337U);
    msg.setSourceEntity(100U);
    msg.setDestination(10025U);
    msg.setDestinationEntity(166U);
    msg.value = 0.214232354081;

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
    msg.setTimeStamp(0.741748065179);
    msg.setSource(8461U);
    msg.setSourceEntity(119U);
    msg.setDestination(18307U);
    msg.setDestinationEntity(40U);
    msg.value = 0.422999271011;

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
    msg.setTimeStamp(0.446708058797);
    msg.setSource(45941U);
    msg.setSourceEntity(135U);
    msg.setDestination(18963U);
    msg.setDestinationEntity(44U);
    msg.value = 0.176444820066;

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
    msg.setTimeStamp(0.507313184337);
    msg.setSource(41899U);
    msg.setSourceEntity(98U);
    msg.setDestination(48076U);
    msg.setDestinationEntity(215U);
    msg.value = 0.898409954377;

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
    msg.setTimeStamp(0.122945464491);
    msg.setSource(33846U);
    msg.setSourceEntity(72U);
    msg.setDestination(28418U);
    msg.setDestinationEntity(231U);
    msg.value = 0.0734564184618;

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
    msg.setTimeStamp(0.49847541141);
    msg.setSource(36637U);
    msg.setSourceEntity(81U);
    msg.setDestination(33349U);
    msg.setDestinationEntity(127U);
    msg.value = 0.238088306468;

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
    msg.setTimeStamp(0.199975239071);
    msg.setSource(3610U);
    msg.setSourceEntity(97U);
    msg.setDestination(17286U);
    msg.setDestinationEntity(140U);
    msg.value = 0.202675863417;

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
    msg.setTimeStamp(0.18364039949);
    msg.setSource(4906U);
    msg.setSourceEntity(117U);
    msg.setDestination(14126U);
    msg.setDestinationEntity(151U);
    msg.number.assign("DWCXFAJHESSDUKMZFBQCGBNCOMEGLEYWWRPHOUEHWFNIIWXWUAJKCTTOEGPYLUAPVXDNRUWBQLZAMA");
    msg.timeout = 10397U;
    msg.contents.assign("NYVZVGDHCZFUKFHSFEDBWLOHFUUVGMDURPZXYGUWCKKEUELDCVTOYBCOWCKEITAMQHXMYPBCQLYPHCBSYRTAFMZFAJVARHRLDPIRKJSXKGWJZJNCVMBXIVETKTQOWWQZNNWHMUQQWGHGFJXTDGYDSOIQABKLOLNCRNYEZETEJUUOQMDT");

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
    msg.setTimeStamp(0.256459274844);
    msg.setSource(63698U);
    msg.setSourceEntity(92U);
    msg.setDestination(40916U);
    msg.setDestinationEntity(113U);
    msg.number.assign("ZXKYTZNRTIIBVRNOYKHIFRUPCRNTJCIMAQSVKSCJCRPBHAJGBHJANAWORDOUZYWDDGPKBQPPDKVQ");
    msg.timeout = 20679U;
    msg.contents.assign("WMMZAHCZJYHJOBCYPGFPFAJFBNLPWDYGVTVKUZCLNYMIRVOAOPADQTZBSIFFHLWCXNBXTMHDBCZOEZVEZISETEQXKDOWSVNJBUFGTGYRVODFPZEHIGTDCDUOEBWESQQYIWKFB");

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
    msg.setTimeStamp(0.663752467999);
    msg.setSource(5279U);
    msg.setSourceEntity(60U);
    msg.setDestination(64711U);
    msg.setDestinationEntity(92U);
    msg.number.assign("FBJTSBPCIPXEAALQFQBIJSLJJZITUQQFBENSVZDOCMSGZQHWMKMMPIQPTDDTXJDIWHLOMKSFLASWIXMBHNYUKMFKWTIYEDXOKYUPYUOGTZXJVHRVFXNIMYUCBHRBONEDKGORMZDZKFABAJERYPYGRNNJHYXZTATPVCKDLHUGMBGUZSRRPOASPNYJUNLT");
    msg.timeout = 22290U;
    msg.contents.assign("CZEHEYKKDMKVSAEAZIOBBYIVDWFCPLGZQFO");

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
    msg.setTimeStamp(0.55613565364);
    msg.setSource(3329U);
    msg.setSourceEntity(108U);
    msg.setDestination(32576U);
    msg.setDestinationEntity(109U);
    msg.seq = 3651779266U;
    msg.destination.assign("GVUYAGIQQQIALCDGSNTCKPQVNCCZUUVXFBDAYTOPVFIXBFUBURQLPAHZPYICMNOOXQSIEHWFRKKSLJDGUYTSYLMYPSMHNFMGXYCCLTMEJKYZDOAGDDIPFCPUXJXUKDWZPDVXYHTFPZIONGSSONYKKJBOGFCZVEJCVMVLFEMIMIBZLRHTRBQLWHLWRGBTRNRAOEVTWWMJLBXTQHZORUJDHXEWESMRKEJPBRKUHGONJQWQXWESE");
    msg.timeout = 20186U;
    const char tmp_msg_0[] = {37, 88, 52, 63, -2, 8, -98, 94, -32, 57, 106, 52, -111, -52, -31, -43, -3, -72, 106, 14, 62, -61, -70, -11, -58, -14, -15, -84, 27, 16, 29, 61, 56, 67, 102, 117, -35, 23, 115, -81, -45, 32, 63, -46, -43, -38, 43, -96, 75, 0, -103, 60, -88, -33, 124, -50, -86, 99, -87, 42, 28, -38, 27, 38, -116, 104, -54, 108, -17, 70, 7, -4, -118, 79, -122, -72, 94, -81, 96, 50, -100, 99, 82, -122, -40, 125, -30, -14, -128, 39, -92, -99, 76, -89, 61, -85, -89, 119, 9, 49, 51, 5, 62, -27, 62, -65, 21, 98, -24, -59, 125, 68, -48, 110, -73, 108, 106, 87, 60, -71, 32, 44, 88, 47, -107, 114, 25, 7, 17, -79, 15, 47, -95, -107, -13, -118, -14, 113, 11, -20, -18, -88, -103, -49, -66, 111, 103, -53, 122, 117, -97, 58, -112, -6, -77, 123, -81, 40, 105, -128, 19, 89, 31, -46, -93, -1, -93, -42, 23, -81, -110, 112, -94, 49, -113, 95, 106, -105, 49, -4, 21, -127, -100, 73, 44, 82, 45, 62, 30, 105, 82, -113, 41, -51, 104, 86};
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
    msg.setTimeStamp(0.798414308887);
    msg.setSource(34310U);
    msg.setSourceEntity(241U);
    msg.setDestination(49218U);
    msg.setDestinationEntity(194U);
    msg.seq = 4211211270U;
    msg.destination.assign("CPYTBAVBUNXZYUGMKMGJRTEGPKQCUKSLZJWGVLSKFHDSDFBWRJNBORFDXPHXIFINTV");
    msg.timeout = 5318U;
    const char tmp_msg_0[] = {-52, -97, 76, 116, 71, 50, 27, -19, -100, -4, 39, 86, -87, -70, 103, -56, 123, 26, -80, 125, 20, -75, -23, 86, -28, 55, 114, -41, 64, -38, 114, -60, 17, -107, 80, 75, 48, 103, 118, -115, -64, -55, -33, 120, 66, -70, -19, 3, 0, -43, 23, -89, -25, -121, -117, -15, -102, -113, -80, 78, 96, 53, -28, -90, 49, -16, -12, -37, -43, 15, 73, 110, -128, -119, 16, 1, -73, -99, -59, -23, -102, -86, -120, 114, -104, 23, -9, -87, 44, -24, 53, -75, -42, 125, 0, -95, -47, -88, -78, -85, -86, -44, -115, -7, -127, -44, -74, 125, 27, -90, 96, -78, 93, -93, 25, 57, -72, 77, -29, 35, -59, 103, 10, 84, -114, -11, -106, -45, 88, 19, -90, -112, -9, 19, 94, 90, 124, 120, 15, -29, -111, 69, -20, -116, 33, -55, -61, 23, -95, -17, -25, 59, 103, -37, -25, 33, -9, 52, 78, -106, 17, 22, 108, 87, -117, -55};
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
    msg.setTimeStamp(0.297952698915);
    msg.setSource(36564U);
    msg.setSourceEntity(140U);
    msg.setDestination(26882U);
    msg.setDestinationEntity(131U);
    msg.seq = 2410265159U;
    msg.destination.assign("KYHDDXBEYCUUZHKPLGIYMROXZFOCPYMRSTKIFKJLGHCZXJGWBEUSFZXQJEIVQZQUODCOPLRETIVVHCWVNNNTMJNQAPLFDRJVEUXBXELMCLKKQZWZSAWMAHWZGAWUHGYAUHTCXJQWNPFKSSVQHQGWSBTWGVMFVSDOJBLUKLFROMXERDDTOQHNKRGBYUEQJYMVACZPIBTCAPPPKS");
    msg.timeout = 38839U;
    const char tmp_msg_0[] = {0, -96, -85, 107, 93, 70, 102, -48, -108, 98, -39, 106, -50, 91, 36, 24, -60, 110, -74, -96, 97, 74, 0, -94, -110, -89, -69, 59, 125, 20, 81, -125, -8, -118, 5, 56, 33, -86, -14, -60, 11, 22, 82, -37, 51, 95, -74, -33, 112, 77, 101, -124, 45, 107, 48, -8, -27, -105, -60, -35, -63, 87, 77, 20, 2, -49, -22, -20, -113, -104, 24, 109, -32, -34, 65, -18, -52, -4, 85, -46, 61, 56, 107, -100, 118, -94, -18, 78, 100, 4, 44, -21, 54, 93, -64, 11, 38, 33, 89, 17, 78, 100, 94, -50, 81, -64, -121, -63, -56, -79, 84, -85, 63, 25, -58, -77, 24, 44, -100, 35, 75, 78, 22, 33, -55, 3, -116, -87, 25, 32, 14, 75, -77, 85, -89, -93, -66, -108, -18, 60, 0, 33, -5, 110, -51, -94, 32, 90, 61, 40, -113, 26, -121, -101, 109, -10, 35, -62, 44, -46, 82, 119, 106, 39, -93, 116, -90, -66, 121, -96, 75, 116, -95, 85, -52, -78, 54, -94, -98, 88, 77, 69, -59, 35, -81, -37, -17, -114, 63, 12, 8, 88, 112, -125, -122, 103, -120, -55, 10, -113, 114, 75, 1, 125, 36, 73, 71, 121, 27, 58, -55, 96, -24, 97, 105, 70, -98, 95, 90, 33, 76};
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
    msg.setTimeStamp(0.896057786134);
    msg.setSource(34787U);
    msg.setSourceEntity(236U);
    msg.setDestination(7315U);
    msg.setDestinationEntity(59U);
    msg.source.assign("YYUTFNBQESZYGTEUBRKWCTV");
    const char tmp_msg_0[] = {-65, 2, -13, -48, -121, -40, 34, 97, -71, -61, -64, 10, 20};
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
    msg.setTimeStamp(0.984275522446);
    msg.setSource(59655U);
    msg.setSourceEntity(242U);
    msg.setDestination(46494U);
    msg.setDestinationEntity(243U);
    msg.source.assign("DIYYIDSZREXHQITYWGLWSQCDUDOPLQ");
    const char tmp_msg_0[] = {-47, 107, -121, -106, -20, -60, -35, -65, -13, 40, 49, -113, -97, -76, -42, -46, 14, 69, 59, 126, 74, 46, 93, 24, 126, -87, -62, -79, -33, 113, -89, 70, -37, 33, 46, 94, 120, -113, -27};
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
    msg.setTimeStamp(0.134687213254);
    msg.setSource(56041U);
    msg.setSourceEntity(99U);
    msg.setDestination(12101U);
    msg.setDestinationEntity(197U);
    msg.source.assign("FQDBOFMMRQQCMTGEYXFQVVOLYHPKUYWJZMKHAMIIJWTHPZCNLVLRZNJUXNRFVSFILHCEGODKKNEGNWYXDOHKJMGVFIPPBCHKIUSJVFNXUJHAKQLLIIWNSHZCSTBKMKSEGIBYZRPFQRHKYDUWZXZTYPUBEDPPNALTDQE");
    const char tmp_msg_0[] = {14, 106, 4, -112, -95, 33, -78, 23, 120, -120, 62, -13, 17, -114, 21, 124, 29, -20, -97, -11, 99, 57, 77, -78, -9, 19, 54, 68, -63, -84, -71, 97, -95, 68, -42, 47, 51, 77, 75, 4, -106, -6, 45, -15, -89, 12, 62, 25, 40, -111, -126, -9, 31, -23, -122, 70, -67, -64, 107, 17, 94, -30, 114, -81, -5, -120, -127, -12, 2, -42, 89, 56, -39, -93, -68, 42, -17, -96, 27, 84, 4, 33, -44, -121, -51, -116, -64, -48, 78, -74, -13, -116, 41, 66, -38, -91, -56, 13, 90, -70, -124, -61, 27, -116, 106, 6, -2, -75, -42, 16, -127, 11, -29, 71, -14, 93, -49, 123, 43, 59, -97, -43, 68, 87, 28, -74, -8, -75, -95, -35, 113, -46, -26, 40, 92, -58, -28, 41, -52, 63, 34, -105, 84, 110, -94, 34, 113, -72, 62, -97, -14, -1, -78, 82, -21, 105, 76, -86, 80, -87, -118, -51, -113, 118, -107, 56, 16, -63, -85, 24, -4, -36, 125, -116, -15, -47, -46, -59, 125, 57, 12, 90, 104, -39, -92, -72, 70, -91, -6, 116, -120, -47, 98, -100, 26, 64, -83, -90, -41, -88, 72, -62, -52, -7, -77, -108, 20, 71, -80, 105, 53, -39, -54, -40, 5, -43, 67, -25, -78, -66, 75, -23, 21, -78, 33, 4, -110, -85, 98, -49, 45, -39, 104, -111, 31, -48, 1, 33, 111, -72, 75, 19, 113, -79, -108, -25, -63, 74, 29, -22, -60, 59};
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
    msg.setTimeStamp(0.108606124294);
    msg.setSource(33412U);
    msg.setSourceEntity(91U);
    msg.setDestination(36487U);
    msg.setDestinationEntity(69U);
    msg.seq = 2328316691U;
    msg.state = 180U;
    msg.error.assign("WYKGTHDCHXRREPOFAYNHRFAGLVOYXKPBZWUUWILDSGFRZVEUIGNRXMKXQXEPOYOWROLEWNIPSFXBBODGJVIVPLKEDRHYKBKJPJZVCYIDEQQTHZVOJCJFJAYCTTZLOKSYRIUIVBLABTBAAGBDZMSVQTIMFAXXELDCWUTCDGLTTFQJSCHWWQMSPQMYBRTMASNXGVHHMSANVNNRLINFSUQZKGJGUSONX");

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
    msg.setTimeStamp(0.340432574926);
    msg.setSource(40174U);
    msg.setSourceEntity(71U);
    msg.setDestination(40708U);
    msg.setDestinationEntity(253U);
    msg.seq = 2977983357U;
    msg.state = 211U;
    msg.error.assign("VMZPQMPCMOMRVOVXYKRDNAKNWYUQKTUJWCHFXAMIFCLDVXSIZSKLCWKVAAWHLBTUJRYNDNIBOXJSNGROHIIBIDDQIOMDMZAQFABWFSZPECTTWBPYGTVQTJJMLYJXGHGBJXUREVZGUETVZXHXLEHGDFJLIVRUPQSEFDERDOLKWRCNGWLAMHSIWPNTZLTFNJAUASOCSWA");

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
    msg.setTimeStamp(0.342271266186);
    msg.setSource(50400U);
    msg.setSourceEntity(55U);
    msg.setDestination(52196U);
    msg.setDestinationEntity(60U);
    msg.seq = 2039988585U;
    msg.state = 109U;
    msg.error.assign("YJUVLATZHFGKRBRJWVBRJJWJSPXWGLGZMBOKVXFJEVOHQVBQKVULCZYSMGOABOLRSFARMTOQDKSPUPKNKMFRSVSJFIGBWHCICEMKQTGRBWWOFSXDZASNUQQBHLGYOYPNTWIDTFXNAOJDIUQJTECZAWDPBZPXNSOUVEOPAIKYCNZWIFNYPFMYQUZTZGXTHDAQCEXBHYEIAMSLCWNLEJHXMMYIDENIHHDCGPVTTECMZDULKLYGXV");

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
    msg.setTimeStamp(0.201422608079);
    msg.setSource(28384U);
    msg.setSourceEntity(159U);
    msg.setDestination(39098U);
    msg.setDestinationEntity(205U);
    msg.origin.assign("IOEVJDYQABSJMRREBSENDJOGPBLOUKZLPNBIHRZCAWHTMQBXNBNRUZFYESQTXDNWFUFEVNMCOPYSNAVWKSDIFULVEGSWCZZISAYDXPZUIOMNFICBWZHPSHUXKFVSUHDLCGKVYOETAGITOCGJCLCDQLLJWPXRSYVIORGHJMJQEYHQTZJTBJPTODBIGMALBEFMOLXGKXMRWKADAPKDXATNUMPRF");
    msg.text.assign("LNZPVUZTEYIYAJJFSMPTYHNIZWKHOHLQKVEUEKMFUUXBDCATEUBMHQWJTFTISTMYAZJCYZOWNDNBZQPRHJJKQXGFWOCLRGTDHDTYQUAWYIIXICAOXO");

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
    msg.setTimeStamp(0.737615071123);
    msg.setSource(35569U);
    msg.setSourceEntity(60U);
    msg.setDestination(6670U);
    msg.setDestinationEntity(239U);
    msg.origin.assign("TTMAHDSSJXTPXPIGUYZGTJKRSEVFAWVQXWFEPUCIBAHDJCKWQQLRGKQWVYDELILTMESNPTDMBFUCRKMAHTKJBPZCGGUZBXEIDDWNPRUHMJEWFNPHOXJHNXQNVOGBULLBHBGUMFNSXPEBICARGOPATMNJELRYNQTVSYVF");
    msg.text.assign("NPSAHGSWYAGOQCNOOXBQHXTWILCEFMHCCAOJDRLQYMHZLQHKSFTREFUGMJCSPUBCNRZXRDAQLVMKROMUTWXSNHVCGLDZSMNGDXPRZREDFMXCRGTJNAIFPDWABASPBIDTHNDBVTKLZLEQJPWYVQFXYLRB");

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
    msg.setTimeStamp(0.671513676692);
    msg.setSource(7166U);
    msg.setSourceEntity(86U);
    msg.setDestination(37101U);
    msg.setDestinationEntity(214U);
    msg.origin.assign("HLJWCXTWEXFBRMPOGHMDBOMONOZPQKLBMXEZAVNLEZLCJLMMQFCAWEIPETGHNPPLPHTQAFACBVYCUZTBJRDSKXPOJVPRIDYYJYRAINLZFUSWVYFWKHTQHKDSPRGCZUJLUDHUQOXCNIJICMBFBIYQOCSNTYSWWLVSZQMZQLUXGQFVKHHOUKXRVUSGTDGVNEDZKGDQWFMFSAVGWRVWAAMISJEKRFYEIXDYRABTGEJYZSDGONBXHNNEAPK");
    msg.text.assign("QNXXSTCJIPTQHPTRXQBBRDWFNOLNYABZGEIIPQFVAZTMVAJFPOHHCSLKWZZSRWORDXVORNG");

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
    msg.setTimeStamp(0.477881688705);
    msg.setSource(2590U);
    msg.setSourceEntity(121U);
    msg.setDestination(57956U);
    msg.setDestinationEntity(114U);
    msg.origin.assign("RMZMIADOOIAEMDTYRBUCAKJHJKPGVHWDPTAJEPJRDHHSCTIFWQHQREQNUWQHMABGEUWFLDQSKYIOZTXDGYQLYKRZDGUWHKOPHBRKFVMLNURZKJLYFZNSDAQUAXXOSVGCIEPRWVITYCQNEFCSHXAJBZZJWTPNBOLUNMKZXAUBWLJLNOQGVXNYXBZLSYIFBPSRO");
    msg.htime = 0.921798640311;
    msg.lat = 0.829657992931;
    msg.lon = 0.567105685329;
    const char tmp_msg_0[] = {-31, -13, -125, 62, 22, -117, 14, -86, -92, 40, 110, -16, 67, 40, -1, 116, 32, 118, -74, 114, 119, 105, 1, -121, -41, -111, -37, 23, -61, 73, -112, -25, -16, 120, 28, 39, 111, -15, 36, 112, 19, -66, -81, 120, -21, -20, -62, -128, -103, 97, -11, -10, -1, 86, -67, 102, -6, -63, -18, 13, 91, -37, -60, 100, -65, -82, -66, 77, -84, 19, 15, 57, -25, 102, 70, 72, -37, 81, -112, 2, -46, -47, -60, -38, 78, -90, 74, -122, 78, 82, -6, 102, 79, 44, 119, -55, 72, -58, 23, -68, 20, -128, -1, 123, 39, -27, -27, 110, 112, -77, 24, 39, -122, 72, -39, -112, -67, 66, -104, 67, -35, 119, -60, 58, -9, 41, 89, 37, 122, 36, -96, -4, -102, 18, 11, 35, 124, 91, -51, -8, -19, 21, 22, 51, -115, 35, 96, -11, 39, 57, -52, 12, -102, -50, 47, -112, 29, -65, 0, -40, -40, 59, 58, 109, 35, 28, 11, 84, -10, 58, 17, -18, -37, 2, -49, 31, 103, 88, 80, 48, 123, -74, 64, 78, 101, -106, 43, 123, -76, -44, 110, -122, 117, 94, -94, -125, -20, 51};
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
    msg.setTimeStamp(0.283970364447);
    msg.setSource(42040U);
    msg.setSourceEntity(58U);
    msg.setDestination(22549U);
    msg.setDestinationEntity(50U);
    msg.origin.assign("JNWOBJMEFUZTFCZCSYIJBFDDSQVSLRMEJMTBUKRJUWIGRNKOUNQMAHILRFRALKKKXDETCYEBCGIXXONFWVIXUEICGMOYZBPVBUDNLVTIWVEACVOSSUTSHWQNMHKBAAYHLOWXMQJZILNUZGACMSIQPVXDEVYVQPDAFHBCKKOAWSFDWFHRMQFGZZJJZNPJGPHLULORDTPOUYZRWGRPGXQOXYHPLXTGZRGP");
    msg.htime = 0.396561781416;
    msg.lat = 0.628809466868;
    msg.lon = 0.766476699458;
    const char tmp_msg_0[] = {-62, -79, -11, -18, 67, -104, -9, 73, -41, 49, -16, -123, 81, 94, -98, 87, 88, 124, 103, -37, 10, -59, 113, -120, -48, 28, -94, -115, 85, 60, -71, 114, 60, 107, 36, 59, 93, 61, 2, -24, -21, 105, -120, 73, -83, -128, -95, 35, -6, -101, 45, 20, 68, 31, -102, 98, 106, 120, -51, 65, -30, -9, 8, -114, -67, 30, 97, -99, 102, -4, 0, 95, -55, -99, 63, -41, -21, -109, -88, 24, 38, 59, -55, -60, 65, 80, -53};
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
    msg.setTimeStamp(0.830295910892);
    msg.setSource(54502U);
    msg.setSourceEntity(181U);
    msg.setDestination(17759U);
    msg.setDestinationEntity(168U);
    msg.origin.assign("OZQCCBRPLGIASYCGRDQXEAFRIRFLQMYHLDPBLWPNJY");
    msg.htime = 0.923271913439;
    msg.lat = 0.56556431819;
    msg.lon = 0.971484076182;
    const char tmp_msg_0[] = {-11, 67, -124, -38, 60, -128, -111, -95, -114, -115, 55, -51, -113, -20, -38, 52, 111, -126, 0, -15, -6, 47, -37, 10, -37, 80, 98, 32, 24, 111, -39, 0, -81, -35, -94, -9, 26, -128, 70, -77, 92, 113, -111, 36, -127, -34, 46, -80, 58, -18, 61, -113, 7, 40, -16, 122, -89, 73, 105, 13, -101, -123, 41, 61, -115, -89, -82, 116, 19, -32, -2, 0, 101, -16, -13, 63, 106, -97, 3, -76, 101, -40, 56, -23, -56, 85, 38, 118, -113, 51, 39, 98, 45, -11, 21, -9, -107, 97, 103, 23, -60, 3, -120, 52, -93, -99, -66, -96, 106, 114, -7, 113, -89};
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
    msg.setTimeStamp(0.280247459731);
    msg.setSource(1381U);
    msg.setSourceEntity(238U);
    msg.setDestination(60258U);
    msg.setDestinationEntity(75U);
    msg.req_id = 27578U;
    msg.ttl = 30761U;
    msg.destination.assign("ANARDVOMHYGZBEDBTGVMSESKHRKYINUUGFVZWJLTOMRUWFHLQEKRCGBUQMYBXDNKIBRKQMLFUBXKULQIVGJIYZASHGFADCVRTWOSIRNJTFXTWGXCVGRTWBONPFGQFDQLUYNCKQNYXFJBLHHZE");
    const char tmp_msg_0[] = {-71, 1, 54, 67, -9, 97, -122, -66, -68, 3, 64, -75, 81, 103, -12, 18, -60, 36, 111, -51, -42, 121, 72, -119, -30, 5, 115, -71, -115, -44, -16, -22, -29, 88, 63, 108, 125, 117, -9, 38, 112, -68, 1, 65, 35, -11, 123, -18, 32, -84, 99, 122, 27, -75, 14, -112, 14, -87, 26, -13, -45, 5, -6, -42, 90, -3, 42, -80, -51, 36, 12, -48, -4, -93, -68, 75, 38, 116, -13, -119, -47, -114, 61, 116, 110, 85, 55, -69, -19, -23, -122, 40, -99, -51, 27, 54, -3, -48, -42, -79, -60, 111, -29, -38, 53, 14, -51, 121, 96, -20, -14, -100, 35, 25, -108, -1, -43, 60, 105, -50, -8, -111, -114, 90, 1, 46, -128, 66, -16, 72, 105, 94, 126, -42, 38, 0, -5, -5, 69, -127, 125, 73, 28, -28, 47, -38, 86, 39, -66, -96, 17, 113, -34, 99, 76, 2, 15, -117, -105, 91, -79, 120, -118, -94, 48, -66};
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
    msg.setTimeStamp(0.709787409869);
    msg.setSource(39916U);
    msg.setSourceEntity(165U);
    msg.setDestination(55055U);
    msg.setDestinationEntity(217U);
    msg.req_id = 5099U;
    msg.ttl = 8195U;
    msg.destination.assign("VWYBZQYSWYDMGVQWROFDHHSOUCPVISIDSTQLXQKLRRFWSQONXXLCBVTHKQDXHDUKKCZDYVUNNEDZIFTTKIMXHMMGXEPMTBY");
    const char tmp_msg_0[] = {123, -109, -12, 121, -74, -40, -76, -54, -13, 58, -127, 94, -47, 21, -53, -83, -5, 0, -4, 34, 66, 13, 60, -119, -93, 1, 98, -87, 56, -16, 58, -112, -68, -35, -126, -26, 15, 59, 31, 76, 9, -22, -20, -65, -3, -38, 35, 21, -1, 19, 61, 80, 53, -61, -8, 72, 17, 70, 46, -51, 54, -64, -40, 108, -61, 42, -65, -47, 78, -128, 67, 71, 22, 94, -8, -83, 124, 79, 112, -118, -123, 5, 125, -96, 113, 48, -101, 124, 54, 83, 23, 19, -3, -120, -114, 100, -55, -101, -55, 102, 37, 58, 105, -122, 0, 56, 120, 124, 99, -31, 82, -92, 94, -86, 78, 83, -62, 7, -27, 70, -60, 35, 98, 115, 97, -21, -77, 74, -104, -19, 124, 4, -104, 41, 22, 69, -127, 113, 13, -101, 66, -116, 8, -2, 61, -71, -89, 55, -82, -93, 19, -103, 91, 91, -24, 78, -97, 72, -18};
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
    msg.setTimeStamp(0.289140929023);
    msg.setSource(3710U);
    msg.setSourceEntity(36U);
    msg.setDestination(7066U);
    msg.setDestinationEntity(109U);
    msg.req_id = 38917U;
    msg.ttl = 58407U;
    msg.destination.assign("ZYHGNFBBVBCZSUHCTNXGGSAOYQPPMVFHUKWDKLYFDRREGESAJOJQI");
    const char tmp_msg_0[] = {-71, -26, 101, -111, 32, -121, -54, 22, -72, -44, 20, 68, -88, 23, -51, 56, -70, -88, -98, 118, -66, -19, -47, 76, -96, -70, -38, -66, -106, 10, 13, 40, 50, 86, -54, -30, -31, -33, 18, 110, 36, 84, 4, 97, -70, -106, -52, -45, 85, -28, 16, 1, 25, 0, -2, -31, -20, -91, -79, -11, 87, 117, 98, 99, -59, -86, -68, -123, -100, 56, -68, 79, -70, -73, 7, 30, 54, -6, 78, -98, 67, -16, 5, -118, -1, 112, -74, 120, 96, 10, 49, -51, 69, -127, 58, -12, -106, 68, -121, -114, -20, -103, 42, 31, -65, 16, 38, -52, -57, 23, 57, -27, -38, 95, -101, 97, -91, 73, 1, 120, 14, -77, -87, 87, 35, -20, 92, 105, 66, 13, 48, 116, 76, -107};
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
    msg.setTimeStamp(0.999617416881);
    msg.setSource(16628U);
    msg.setSourceEntity(163U);
    msg.setDestination(30723U);
    msg.setDestinationEntity(132U);
    msg.req_id = 57811U;
    msg.status = 228U;
    msg.text.assign("ETERRQWFLUGTBEDKUVTYKUSWEFZLIZOOHPCNCBBTVSAGOTUTYBIDPDMJSSGSCNCUKHOJJAKQVFRZXWUAXOZQRAAIPLHGHYREDOUSNPCSVOEVTMFMKLMSWXKGCQYFMLIHQQWJDBYBXSWLPFPOGHTBBJUXAHQYWVLMWRFGRJZFCOGVDNIPTCPVKINACQDIAPKJZENQMYPCLKDXXUXOZBI");

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
    msg.setTimeStamp(0.780315461975);
    msg.setSource(30144U);
    msg.setSourceEntity(54U);
    msg.setDestination(21839U);
    msg.setDestinationEntity(203U);
    msg.req_id = 55967U;
    msg.status = 236U;
    msg.text.assign("HSYNDEOUGLHMQEMQFWPMFDTHRKKNPHRWLQJNVJBSYRWSXTDZDFVIKXBZY");

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
    msg.setTimeStamp(0.971099499721);
    msg.setSource(35820U);
    msg.setSourceEntity(112U);
    msg.setDestination(46904U);
    msg.setDestinationEntity(16U);
    msg.req_id = 40835U;
    msg.status = 62U;
    msg.text.assign("ZBBKNRRMFPGDUYWGYZDPBBVEIRTROOGQTMTMEAHHVMPQUJJFJVMUGLJIAWBSHOUWIJHXQHYWOQLDENLJEGSKXDTLHASGWQYRNZMMLAFZGCCKCMZDVRAHIDOCXTSZZFLQRNINETJPSPKSZVY");

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
    msg.setTimeStamp(0.99702082951);
    msg.setSource(52954U);
    msg.setSourceEntity(216U);
    msg.setDestination(26717U);
    msg.setDestinationEntity(221U);
    msg.group_name.assign("EHDCMHBUYJGFDVWAPWREZVVAGGONTWHYNKYWNFNUROSLOMSFLVNJ");
    msg.links = 265792036U;

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
    msg.setTimeStamp(0.0203182389611);
    msg.setSource(34161U);
    msg.setSourceEntity(170U);
    msg.setDestination(28192U);
    msg.setDestinationEntity(4U);
    msg.group_name.assign("QWCYBIILTVMTDDTTOJIBWJDONDWFYLQOCJIMLOZJOSUUTYACPPASXQNSLXAWQXQBBKFWNCXCAMGHIUOFDSDKNSQEHUENXVFKFEKDRWSRWJOBZSZTNRJIMCLZYXYRIJVTHGJFVUHAVQGHIZXOFHUHIDUWOHNGPRXYGABKRMCVKXERBGEKPUMYEEFPLHMBGTZJGOLPPMDVYIUYMERECLBPZSTGGKKJCXKEHZQNLAFUQZWWPNACDVTVSAYRAVRF");
    msg.links = 2658790511U;

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
    msg.setTimeStamp(0.0566190422468);
    msg.setSource(53656U);
    msg.setSourceEntity(225U);
    msg.setDestination(5394U);
    msg.setDestinationEntity(121U);
    msg.group_name.assign("EUHKRKSYOZLHFGPMAMWVOIBZXUYMZIWLWMBJEJTOXQIPYEGSXIUMJVBSJTVXDRJQOJPWTRCENYVJSTEFWWOBTPPBXCDCGQBMCTKMDNDNGGLLXZLHSFXFDCIAHAHQGTYEXVFBYNWUHNAJHMNEQICKZTPLCQOCZQVPWSTZHRRGQIAWMVEOKFVLAKALGUUADUFGOZRDVKXRSYCSFQRUXLHDGNMUNPYFLBWNSIDKKV");
    msg.links = 491086710U;

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
    msg.setTimeStamp(0.0667163097526);
    msg.setSource(2247U);
    msg.setSourceEntity(88U);
    msg.setDestination(63176U);
    msg.setDestinationEntity(123U);
    msg.groupname.assign("ODFYQIKARXJFOCGINVXKAGYNKJEBFOGVG");
    msg.action = 120U;
    msg.grouplist.assign("VWLQBJZCNQSBSREWUXIHEOQONFPBYUIRBUWKTFKLHNVGQOMMUSGPTVONZCTEKCTXAALGECMFMKKFTLGNXLGLYMRQGFEOAIRQIPEPXTWENQRUKVYUIYQNATPXMMPDFCNJGYGJOTARXEPBPJVY");

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
    msg.setTimeStamp(0.448765679032);
    msg.setSource(43291U);
    msg.setSourceEntity(70U);
    msg.setDestination(52883U);
    msg.setDestinationEntity(61U);
    msg.groupname.assign("MOQQVNRSNUXKJHFDHWCNYZZCGIZRAKSDXWGMXUNQLXYWZDOZCPGTOBKTTRTLDTIHCBIKJPPQCIKBSDSLJURLQVNIRGAAYBWWLN");
    msg.action = 150U;
    msg.grouplist.assign("UJNVVEDFOFNUUQYTOYCSLKURVVKFEIIQKJGXUXPHHLCXYIJWBZWCIGROYBWEZLYZCTLVUZBDMGMQWKYJAAMYEOQYGAZXHXYAEVDZKHRCYDDVTMJLGLXCQIWMSFZDUAJGLAKRBAGSHIERNFOMBMCEDOR");

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
    msg.setTimeStamp(0.40034623083);
    msg.setSource(63960U);
    msg.setSourceEntity(145U);
    msg.setDestination(9669U);
    msg.setDestinationEntity(230U);
    msg.groupname.assign("NBYHREIFHFCSAJLYZXVXTDIWYTCECIPBVVJOOKTFAVDWHJQIGRPHLBMZYYZEYWJEWVUQMCSDZJUUUSMYDXQYDWLLFHHQPLUNNBXLSSCTFIGQFBZMUSLJNPAFGANGWGRLXPKXAVNLUGWGREGHXDYRARUAWEXNDVKJMXOXDSRJOTTSQPKIMBWTHIMMOSBVR");
    msg.action = 186U;
    msg.grouplist.assign("TIAONACYBDRGILMUZQAMOHWRCZFTKEYQJVUVPTNAKHWUNXPNSSIMHRIYEXQZMBUHSV");

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
    msg.setTimeStamp(0.946656266806);
    msg.setSource(13753U);
    msg.setSourceEntity(234U);
    msg.setDestination(17552U);
    msg.setDestinationEntity(82U);
    msg.value = 0.720115227396;
    msg.sys_src = 46309U;

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
    msg.setTimeStamp(0.854473214114);
    msg.setSource(30458U);
    msg.setSourceEntity(76U);
    msg.setDestination(45089U);
    msg.setDestinationEntity(173U);
    msg.value = 0.457393137199;
    msg.sys_src = 54228U;

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
    msg.setTimeStamp(0.740486140025);
    msg.setSource(35189U);
    msg.setSourceEntity(48U);
    msg.setDestination(46537U);
    msg.setDestinationEntity(14U);
    msg.value = 0.518771322992;
    msg.sys_src = 26337U;

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
    msg.setTimeStamp(0.23203843702);
    msg.setSource(14493U);
    msg.setSourceEntity(202U);
    msg.setDestination(10005U);
    msg.setDestinationEntity(126U);
    msg.value = 0.656159648708;
    msg.units = 22U;

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
    msg.setTimeStamp(0.0516114660322);
    msg.setSource(10363U);
    msg.setSourceEntity(153U);
    msg.setDestination(52201U);
    msg.setDestinationEntity(194U);
    msg.value = 0.877699470632;
    msg.units = 171U;

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
    msg.setTimeStamp(0.569979170436);
    msg.setSource(64861U);
    msg.setSourceEntity(180U);
    msg.setDestination(2727U);
    msg.setDestinationEntity(191U);
    msg.value = 0.130509905859;
    msg.units = 37U;

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
    msg.setTimeStamp(0.807178796973);
    msg.setSource(53173U);
    msg.setSourceEntity(215U);
    msg.setDestination(221U);
    msg.setDestinationEntity(132U);
    msg.base_lat = 0.663923588768;
    msg.base_lon = 0.403391875878;
    msg.base_time = 0.502184707207;

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
    msg.setTimeStamp(0.61143058123);
    msg.setSource(39486U);
    msg.setSourceEntity(5U);
    msg.setDestination(41650U);
    msg.setDestinationEntity(146U);
    msg.base_lat = 0.329436286271;
    msg.base_lon = 0.463651869596;
    msg.base_time = 0.85071158642;

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
    msg.setTimeStamp(0.8087609905);
    msg.setSource(61503U);
    msg.setSourceEntity(192U);
    msg.setDestination(47326U);
    msg.setDestinationEntity(77U);
    msg.base_lat = 0.498210483826;
    msg.base_lon = 0.808531990222;
    msg.base_time = 0.539042502781;

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
    msg.setTimeStamp(0.716426906287);
    msg.setSource(11021U);
    msg.setSourceEntity(253U);
    msg.setDestination(57542U);
    msg.setDestinationEntity(231U);
    msg.base_lat = 0.177111314586;
    msg.base_lon = 0.108486313582;
    msg.base_time = 0.685357172297;
    const char tmp_msg_0[] = {112, -47, 55, 23, 80, 65, -7, -110, -103, 60, -26, -35, -103, -115, -37, -59, 24, 14, -37, -74, 3, -48, -43, -83, -24, -126, 76, -117, 15, -53, -48, 1, -41, -107, -105, -106, -73, -4, 92, 75, -1, 104, -11, -51, -62, -28, 51, -84, 2, 0, -76, 53, -23, -6, -101, -53, -90, -50, 48, -42, 82, -41, 62, -81, -13, 9, 54, 64, -96, 5, 116, 13, 69, -112, 70, -42, -98, 88, -85, 35, 3, 6, 36, -31, 31, -54, -68, -11, 87, -116, -45, -31, 40, 15, -121, -19, -96, 120, 35, -49, -65, -23, -118, 9, -92, 90, 87, 75, -16, 92, 37, 115, 38, 29, -82, 48, 88, 27, 86, -71, -69, 21, 17, -96, 12, -105, -126, -38, -86, -7, -101, -15, 117, 25, -25, 27, 69, 60, -118, 103, -126, 29, -123, 19, -48, 41, -72, -33, 61, -76, 34, -114, -26, 123, -67, 43, -83, 112, -34, 121, 22, 97, -111, 46, -85, -109, 70, -61, 77, -63, -49, -109, 73, 89, -122, -106, 95, 84, 77, 46, -86, 4, 84, 118, 0, 55, 25, -45, -31, 86, -51, 109, 31, -127, 111, -124, -27, 6, 15, -50, 107, 9, -98, -77, 75, -95, 1, 41, 49, 81, 125, 91, 11, 57, 93, 64, 15, -24, -51, 69, -95, 17, -47, 97, -32, 58, 51, -107, -77, -76, -39, 96, 90, -110, 58, 63, 40, 41};
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
    msg.setTimeStamp(0.0449340331958);
    msg.setSource(62362U);
    msg.setSourceEntity(58U);
    msg.setDestination(63271U);
    msg.setDestinationEntity(214U);
    msg.base_lat = 0.736065281468;
    msg.base_lon = 0.181340140005;
    msg.base_time = 0.754950450636;
    const char tmp_msg_0[] = {60, 17, -4, 119, 40, 23, 28, -19, -22, -23, 108, -13, 91, 63, -6, 115, -73, 42, 96, 19, 105, 54, -124, 42, 37, -75, -21, 90, 17, 75, -42, 105, 22, 81, 104, 73, -96, -57, 8, 66, -56, -91, -60, 82, 95, -16, 31, 75, -100, -9, -94, -106, 36, -103, 121, 80, 126, -95, 3, -41, -14, 119, 25, -28, -53, 96, 26, -90, 126, 72, 86, 3, -60, 64, 25, -7, 17, -57, -27, 125, 99, -117, 100, 80, 89, 101, 23, 96, -92, -52, 45, -4, -35, -128, -108, -118, -37, -27, 90, 50, 30, 32, -120};
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
    msg.setTimeStamp(0.570792643598);
    msg.setSource(38502U);
    msg.setSourceEntity(246U);
    msg.setDestination(49445U);
    msg.setDestinationEntity(48U);
    msg.base_lat = 0.0837545430126;
    msg.base_lon = 0.816703015191;
    msg.base_time = 0.861557344614;
    const char tmp_msg_0[] = {99, -118, -38, -91, -113, -67, -106, -104, 118, -23, -96, 35, -107, -36, 112, -59, -124, 36, -67, 110, -48, 3, 3, -26, 99, 83, -87, -112, -77, -38, 73, 70, 89, 87, 86, 85, -48, -50, 16, 118, 4, -48, -81, 48, -123, -98, -78, 37, -88, -24, 112, -8, -19, 111, 5, 5, 88, -123, -12, -101, -114, -37, -4, 85, 58, -124, 36, -3, -104, 75, -1, -70, -104, 8, 29, 27, -79, -77, 42, -128, 58, -57, 120, 41, 84, 77, -9, -42, 13, 103, 66, 81, -80, -59, -116, 40, 56, 86, -63, 23, -42, -39, -74, -95, 42, -94, -60, 125, -64, -97, -79, 29, 110, -94, 2, 100, -109, 96, -29, 46, 96, 116, 115, 54, -78, -73, 95, -56, -71, 2, 77, 53, 91, 91, -2, 74, -47, -93, 76, -29, 16, -18, -72, -20, 79};
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
    msg.setTimeStamp(0.994172112664);
    msg.setSource(26541U);
    msg.setSourceEntity(122U);
    msg.setDestination(47692U);
    msg.setDestinationEntity(13U);
    msg.sys_id = 29704U;
    msg.priority = -26;
    msg.x = 19216;
    msg.y = -12389;
    msg.z = 14338;
    msg.t = 28705;
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 19302U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.985186410549;
    tmp_tmp_msg_0_0.lon = 0.0378978975325;
    tmp_tmp_msg_0_0.eta = 3061199437U;
    tmp_tmp_msg_0_0.duration = 42952U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.143437384216);
    msg.setSource(2626U);
    msg.setSourceEntity(230U);
    msg.setDestination(38123U);
    msg.setDestinationEntity(114U);
    msg.sys_id = 64062U;
    msg.priority = 72;
    msg.x = 15172;
    msg.y = 21490;
    msg.z = 26392;
    msg.t = 14706;
    IMC::ArmingState tmp_msg_0;
    tmp_msg_0.state = 19U;
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
    msg.setTimeStamp(0.00667516783841);
    msg.setSource(44768U);
    msg.setSourceEntity(22U);
    msg.setDestination(28419U);
    msg.setDestinationEntity(22U);
    msg.sys_id = 25431U;
    msg.priority = 36;
    msg.x = 6478;
    msg.y = 13639;
    msg.z = -11735;
    msg.t = -1602;
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 30337U;
    tmp_msg_0.status = 222U;
    tmp_msg_0.text.assign("HHXXFEWYITWWPZYEBHHVYYQAKAIOAGIXEKLGBKGOTQSVPDDSRUUAQORWVLCLTFNYAPBZONBKERUIIMGMMKUNNWFCHVWOCYLXOFBTRMUZBGKDZELPPKNISZUZAWSFYIJLTYZROTCJXDDRELNJMHBUHSFVRQDKCXAOMIDWYOKQUCQCSJTAXVQJJZSFHSBBPXELVGVLDMDSUQPPCFTWCRQTJJNFIIA");
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
    msg.setTimeStamp(0.326913561087);
    msg.setSource(51245U);
    msg.setSourceEntity(26U);
    msg.setDestination(21268U);
    msg.setDestinationEntity(252U);
    msg.req_id = 44742U;
    msg.type = 56U;
    msg.max_size = 1098U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.737350415062;
    tmp_msg_0.base_lon = 0.338546919389;
    tmp_msg_0.base_time = 0.11608088362;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 42955U;
    tmp_tmp_msg_0_0.priority = -30;
    tmp_tmp_msg_0_0.x = -7459;
    tmp_tmp_msg_0_0.y = 32485;
    tmp_tmp_msg_0_0.z = 29047;
    tmp_tmp_msg_0_0.t = 15935;
    IMC::SoiWaypoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.685378003334;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.164467279606;
    tmp_tmp_tmp_msg_0_0_0.eta = 72652664U;
    tmp_tmp_tmp_msg_0_0_0.duration = 48022U;
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
    msg.setTimeStamp(0.808693432265);
    msg.setSource(58318U);
    msg.setSourceEntity(241U);
    msg.setDestination(34133U);
    msg.setDestinationEntity(46U);
    msg.req_id = 15334U;
    msg.type = 172U;
    msg.max_size = 53504U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.12786529429;
    tmp_msg_0.base_lon = 0.465775476418;
    tmp_msg_0.base_time = 0.375198274416;
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
    msg.setTimeStamp(0.323503298112);
    msg.setSource(30600U);
    msg.setSourceEntity(136U);
    msg.setDestination(32515U);
    msg.setDestinationEntity(29U);
    msg.req_id = 63874U;
    msg.type = 2U;
    msg.max_size = 12377U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.545219009362;
    tmp_msg_0.base_lon = 0.683075541573;
    tmp_msg_0.base_time = 0.878461654441;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 35097U;
    tmp_tmp_msg_0_0.destination = 39551U;
    tmp_tmp_msg_0_0.timeout = 0.475914609916;
    IMC::EntityList tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 13U;
    tmp_tmp_tmp_msg_0_0_0.list.assign("NSOCQVKQHLSIHEXIRUNQKPFZXUNZIEKZURUHNQQYTCKYCVVSXTWXWWPDZWNFBCSYOZYJMLMLPLLOFVHMEKZWGLEBUMKQWNQEJZFJYAHTMAQHFOWIRVUMGTYULP");
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
    msg.setTimeStamp(0.634774841841);
    msg.setSource(65392U);
    msg.setSourceEntity(248U);
    msg.setDestination(5550U);
    msg.setDestinationEntity(189U);
    msg.original_source = 26003U;
    msg.destination = 2077U;
    msg.timeout = 0.224676322592;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 8224U;
    tmp_msg_0.lat = 0.385864655642;
    tmp_msg_0.lon = 0.932817620858;
    tmp_msg_0.z = 0.992050944435;
    tmp_msg_0.z_units = 122U;
    tmp_msg_0.speed = 0.741212673632;
    tmp_msg_0.speed_units = 208U;
    tmp_msg_0.custom.assign("ILTVFEXEINMYBPITRSBWPLPAXOMOZZCFGMDQLDIDKSTIABYOTETYXHSMFYJYFXJNQSBPVZHVDJKWPQGDAQCUTZJVJHQRUUFMZGKRGFZAWCEDVRDJWTQHUICLKFCFCJHCOOEODBMMBRGFEVYUAWENVYBKSULEJZCXK");
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
    msg.setTimeStamp(0.139107340686);
    msg.setSource(42566U);
    msg.setSourceEntity(209U);
    msg.setDestination(52834U);
    msg.setDestinationEntity(69U);
    msg.original_source = 25370U;
    msg.destination = 45300U;
    msg.timeout = 0.399093509889;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ACDKBBGCISXQLPWWFVROUQTFNDFRTPPYHLWNJZAYSMNSMAUHIUJGRQVFPOIOMQFHHJGEBLLZTSDCLEQWVLXAOHD");
    tmp_msg_0.dist = 0.25226455557;
    tmp_msg_0.err = 0.0622101974046;
    tmp_msg_0.ctrl_imp = 0.843885249166;
    tmp_msg_0.rel_dir_x = 0.741096898901;
    tmp_msg_0.rel_dir_y = 0.422037175265;
    tmp_msg_0.rel_dir_z = 0.12801586157;
    tmp_msg_0.err_x = 0.385538373341;
    tmp_msg_0.err_y = 0.365153701633;
    tmp_msg_0.err_z = 0.916860263153;
    tmp_msg_0.rf_err_x = 0.1002671592;
    tmp_msg_0.rf_err_y = 0.169067479239;
    tmp_msg_0.rf_err_z = 0.256137283033;
    tmp_msg_0.rf_err_vx = 0.475743977761;
    tmp_msg_0.rf_err_vy = 0.376681293207;
    tmp_msg_0.rf_err_vz = 0.910848291833;
    tmp_msg_0.ss_x = 0.607551333958;
    tmp_msg_0.ss_y = 0.260601812228;
    tmp_msg_0.ss_z = 0.946915971309;
    tmp_msg_0.virt_err_x = 0.149495377121;
    tmp_msg_0.virt_err_y = 0.583433489147;
    tmp_msg_0.virt_err_z = 0.466595924762;
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
    msg.setTimeStamp(0.813820721149);
    msg.setSource(43661U);
    msg.setSourceEntity(216U);
    msg.setDestination(15825U);
    msg.setDestinationEntity(161U);
    msg.original_source = 37576U;
    msg.destination = 1202U;
    msg.timeout = 0.0809785887211;
    IMC::Correlation tmp_msg_0;
    tmp_msg_0.beam1 = 53U;
    tmp_msg_0.beam2 = 25U;
    tmp_msg_0.beam3 = 172U;
    tmp_msg_0.beam4 = 199U;
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
    msg.setTimeStamp(0.341534522354);
    msg.setSource(33046U);
    msg.setSourceEntity(7U);
    msg.setDestination(3626U);
    msg.setDestinationEntity(49U);
    msg.type = 136U;
    msg.comm_interface = 30260U;
    msg.model = 56473U;
    msg.list.assign("DGCYBPUKNRLMORFNVSZGQQRHJIZWFSGJWFJGUMBXJLJPZCUEIJAEHGYHMDWOVPCKDOXJOCTPRCEFNPQREHKXGSSDPOKFATECYTUZJEFTZUMRBRWLGUNQIKHMIRZMYCDVWEIEXULVTKQNASYOQBRFBLPNAZXWTVGOKCTDIZUZMAHTPISJFBIKXWVYAHCADMWVEGWOVAIHPLYVHORQDSCAXXBQFSHWULNBJOSDTX");

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
    msg.setTimeStamp(0.247309984538);
    msg.setSource(36311U);
    msg.setSourceEntity(69U);
    msg.setDestination(55242U);
    msg.setDestinationEntity(76U);
    msg.type = 242U;
    msg.comm_interface = 26791U;
    msg.model = 49111U;
    msg.list.assign("WCAYYUFTHWHHJHUICHSZIXDPJSMGNGSPQWOOMLVYYZOFTJAKGAPGDDSWBYCFUMXTODTZEQONLFGYWHEBGNCAJAFIBORWXKBDPLPUEDIMXVCMTLLLIAEQRQVTLUYKORBZWPIOVKRNAIVJCGXHTJMXRROEFQNNERDVKYDCQCSQNCEUXKJFVWUPREGXMMZVKFEZHX");

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
    msg.setTimeStamp(0.539598455562);
    msg.setSource(37698U);
    msg.setSourceEntity(228U);
    msg.setDestination(51533U);
    msg.setDestinationEntity(44U);
    msg.type = 92U;
    msg.comm_interface = 61030U;
    msg.model = 15108U;
    msg.list.assign("EHWJIDQDEZBVXBOGHCCNPEJN");

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
    msg.setTimeStamp(0.239808362546);
    msg.setSource(51976U);
    msg.setSourceEntity(194U);
    msg.setDestination(43560U);
    msg.setDestinationEntity(69U);
    msg.type = 164U;
    msg.req_id = 225742312U;
    msg.ttl = 48913U;
    msg.code = 204U;
    msg.destination.assign("DSPULAVSAEAYWNQDIEGPJYGCWPWVTAEQKJVRZBNPRIWFAYKUBKZOQPBHSEDDWHVJWGITBEXRSYBQFVGSIFWYJDJKZXTXTQCBFEXIODOQRZSTUVYKYOTVMOZMMZUFXBMSAKCCWIQ");
    msg.source.assign("QCXAXWVGDAFDDFKKOWBRVVIAQRASGIMKMRBTSBFPBNGELBHORPCVXCRHNCPZWAQDJLDCVLGKKJVPAKKDTZAMMGEIJOFTYXQPXNSVRMZJWSTIJUWRAGJZYUDOJLSIWMSSUHNZIHQWETBFMZCXCHIAGPXVDJQYOOOKNJOTHENRHANQBYHXUIBBFOYGEFNFULUPWUKTREGYPLDOTQT");
    msg.acknowledge = 81U;
    msg.status = 57U;
    const char tmp_msg_0[] = {114, 34, 26, -90, -79, -69, 42, -73, 18, -52, -72, -65, -8, 43, 104, -52, -127, -6, 35, -92, 31, 125, 126, -125, -16, -69, 48, 33, 58, 24, 99, 65, -109, -15, 31, -52, 97, -99, -61, -103, -1, -99, -4, -113, -54, -38, -16, 75, -25, 35, -1, -15, -46, 21, -1};
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
    msg.setTimeStamp(0.0662098121384);
    msg.setSource(388U);
    msg.setSourceEntity(212U);
    msg.setDestination(50414U);
    msg.setDestinationEntity(104U);
    msg.type = 247U;
    msg.req_id = 3190452636U;
    msg.ttl = 59001U;
    msg.code = 21U;
    msg.destination.assign("HBCWPLQQDODLXUHAPDHKJVWOGBFFJQZNLTTBMCGETAQCAPIOROWZKTGEUMVIUGQQMSMXRFCSPTVWGJWIBVTSAXBLQFZCIKVEDQNWJJIKURPKEUKHVNSXFURZYLHTMDNMSZIAYMSIDOLEZNWGBANH");
    msg.source.assign("YHBOFGDIMAXEIZFQKFMLTPPMWPSUJWPDYKIWUFKSQXGIREMTAGZOJWNHHATZFNMBCFTEUFBUAJOILVQNSGLKJTGHYDJMEGQLDRBCONRSDAVMVGDURLRJVEHICDNOXJWCEPGIUBQAZKQRDWPLLTHGVAUNBFP");
    msg.acknowledge = 96U;
    msg.status = 76U;
    const char tmp_msg_0[] = {-109, 87, -118, -32, 6, 47, 62, -95, 42, -120, -96, -102, -68, -39, 13, 27, 87, 6, -27, -87, 65, 24, 52, -105, -84, -71, -67, -75, -73, 8, -126, -53, -63, -57, 13, 87, -111, 68, -41, 107, 45, 109, -7, -74, -116, -36, 59, 94, 18, 44, 48, 14, -60, -125, 67, 44, -40, -7, 83, 99, 84, -88, -120, -88, 19, -87, 44, 38, -32, -125, 44, 57, 124, -122, -4, -111, -52, 113, -51, 50, -55, -52, 81, -90, -115, -92, 113, -54, 62, 24, 85, 73, 110, -17, 57, 35, -35, -70, -37, -128, -5, 77, 121, 43, -53, -104, -105, 8, -68, -72, -17, 69, -2, -123, 53, -99, 14, -34, 122, -14, -112, 30, 116, -114, -118, -72, 64, -99, -111, 108, -36, -89, 38, 80, 102, 90, 47, 17, 15, -61, -34, 38, 64, -74, 102, -70, 15, 111, -49, 51, -67, -14, 57, -51, 122, 0, 119, -47, 95, 113, 39, 106, 19, 57, 32, 55, 70, -4, 123, -81, -53, -19, 30, 61, 121, 4, -98, 16, -112, -82, 119, -72, 74, -114, 114, -111, 27, 54, -52, -8, 72, -22, -91, -98, 58, 48, 107, 119, 125, 117, -7, 68, 60, 68, 32, 58, 35, 15, 103, -99, 91, -127, -72, -110, -29, 60, -125, 83, -78, 118, 37, -17, -78, -14, 0, 6, -83, -93, 6, -51, 102, -80, -126, 43};
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
    msg.setTimeStamp(0.880437781728);
    msg.setSource(52331U);
    msg.setSourceEntity(211U);
    msg.setDestination(6305U);
    msg.setDestinationEntity(20U);
    msg.type = 99U;
    msg.req_id = 1188447943U;
    msg.ttl = 39664U;
    msg.code = 36U;
    msg.destination.assign("EUSKDVAVIDMWOVYNALJQCWYCQLDTGHFNFVPGVBZCTKRLXJJMBLNWZXLDSENZGYXAMOZDMKIHSTNIYMIPOLELNPDTBSEMAKSQAIHJQKALBRTNQIBQYRUZBHEAZRVHXEFONPDIZXGMXJEOFYXUMFLOZFDQCWJATAPYEUPWGSNPBKCUEMSFGTWJUERRYUFGVJVZTHTYKOITQYWFCPCVUJNWROOLKXKCWXRSPFHRCHGZIHQKXJHRADSWDP");
    msg.source.assign("OMIILNPRGRRCQLVYSCRHUPIGHHCAFBOBTRPQBOGLQPVJABQHNABNDKFGITUVFSJNRKINIKWFJPLIZSSTFPZWVLAHBZOBXZCSFVSBYYMDTELKBHNYRUCAMJJQFHMU");
    msg.acknowledge = 212U;
    msg.status = 193U;
    const char tmp_msg_0[] = {27, 28, -59, 26, -103, -106, 7, -46, 93, 77, -1, 125, 58, -59, 79, -18, -44, 42, 88, -55, -57, 18, -43, 124, 51, 14, -20, -45, 28, 16, 5, 51, 65, 24, 47, 26, -1, 70, 68, -34, 31, -122, -117, 107, -64, 9, -107, 51, 103};
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
    msg.setTimeStamp(0.843094242368);
    msg.setSource(34963U);
    msg.setSourceEntity(50U);
    msg.setDestination(50889U);
    msg.setDestinationEntity(95U);
    msg.id = 8U;
    msg.range = 0.26163426777;

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
    msg.setTimeStamp(0.502742528608);
    msg.setSource(29731U);
    msg.setSourceEntity(99U);
    msg.setDestination(45169U);
    msg.setDestinationEntity(12U);
    msg.id = 201U;
    msg.range = 0.456737914466;

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
    msg.setTimeStamp(0.15508146986);
    msg.setSource(54278U);
    msg.setSourceEntity(20U);
    msg.setDestination(9080U);
    msg.setDestinationEntity(206U);
    msg.id = 7U;
    msg.range = 0.105649446691;

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
    msg.setTimeStamp(0.373647574889);
    msg.setSource(64749U);
    msg.setSourceEntity(20U);
    msg.setDestination(10738U);
    msg.setDestinationEntity(234U);
    msg.beacon.assign("DYUKJMTINZOHCUSIMYNNLPPMYDPGSNXVWXKATIATIFTCKJLLXHBAXWWFPDHBQICKTRDQLCOZDQZQDOFUKDUIMXOYZTVIIBRJMGQPEXQBZOWRAFNREERBLYVLOCNJBYUEJK");
    msg.lat = 0.980842942312;
    msg.lon = 0.808045153324;
    msg.depth = 0.615261219288;
    msg.query_channel = 11U;
    msg.reply_channel = 175U;
    msg.transponder_delay = 102U;

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
    msg.setTimeStamp(0.873571266901);
    msg.setSource(41398U);
    msg.setSourceEntity(44U);
    msg.setDestination(52435U);
    msg.setDestinationEntity(42U);
    msg.beacon.assign("RULOZSAITTOMIWOCZWJZLFLELBASEIQLFAQJAPRHYNAURCVATUBTQTZWDHHNCEHXPDDQDBRMKZIRKEAHLQBZOQKPONAVKSJVRFBLTEHETYUFHGVMSGKTRTSNDUPZUWHCVNMXYRIWWYMSEKGTNGIOKAENCHDWLKIMPVJBXOPWJYKXESMNYPFPXLJMYGX");
    msg.lat = 0.275358651282;
    msg.lon = 0.594771486617;
    msg.depth = 0.863919181063;
    msg.query_channel = 208U;
    msg.reply_channel = 74U;
    msg.transponder_delay = 126U;

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
    msg.setTimeStamp(0.610561700248);
    msg.setSource(38891U);
    msg.setSourceEntity(228U);
    msg.setDestination(1638U);
    msg.setDestinationEntity(155U);
    msg.beacon.assign("LKQTAOGSFXMVTJOCRVKYCKCLPNMZPHMEONNNDHAAKANX");
    msg.lat = 0.838925974038;
    msg.lon = 0.826643289885;
    msg.depth = 0.724434500424;
    msg.query_channel = 12U;
    msg.reply_channel = 190U;
    msg.transponder_delay = 154U;

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
    msg.setTimeStamp(0.974790528525);
    msg.setSource(29030U);
    msg.setSourceEntity(98U);
    msg.setDestination(34618U);
    msg.setDestinationEntity(197U);
    msg.op = 18U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YYQQHKJVIRZUWDYRBJKQXVXQDAEYPXWABFILFBFQKVDRBNBDGZCQYBZAFLIADJUOKVAIFLFRSOVRHEUCYFEPLXHBMYCI");
    tmp_msg_0.lat = 0.574965692865;
    tmp_msg_0.lon = 0.129749520105;
    tmp_msg_0.depth = 0.741264312342;
    tmp_msg_0.query_channel = 79U;
    tmp_msg_0.reply_channel = 140U;
    tmp_msg_0.transponder_delay = 212U;
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
    msg.setTimeStamp(0.654064551283);
    msg.setSource(50114U);
    msg.setSourceEntity(27U);
    msg.setDestination(40224U);
    msg.setDestinationEntity(101U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.511858845083);
    msg.setSource(7262U);
    msg.setSourceEntity(157U);
    msg.setDestination(2695U);
    msg.setDestinationEntity(159U);
    msg.op = 50U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DBWMAIQKLPFSIJDZQHTGBWLLTZCGSWKFAJRBALYVGURTVMAAAFTXGNZHOSBCYGHFKHNTUMNMPSRCQNOQSWCHEIEJIESOLWOZKIKEVSRDXJUOENEUPOTDXYYTYYGEXPNMRUDHKKZICCFOAJGSRLOXUXTTSJUVXQYRQAICLWARRHWK");
    tmp_msg_0.lat = 0.353453050745;
    tmp_msg_0.lon = 0.0265540885403;
    tmp_msg_0.depth = 0.900496679695;
    tmp_msg_0.query_channel = 107U;
    tmp_msg_0.reply_channel = 135U;
    tmp_msg_0.transponder_delay = 173U;
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
    msg.setTimeStamp(0.873350271244);
    msg.setSource(14727U);
    msg.setSourceEntity(129U);
    msg.setDestination(58159U);
    msg.setDestinationEntity(233U);
    IMC::Surroundings tmp_msg_0;
    tmp_msg_0.locations.assign("LDIBGJXQMGJDYUUZWPHLODPWNYOQOSRCDUZEKMIJWKECIRCFTWSLDORRTAOMVUBSMKGBDWNYCVUJPGIUEMZISMWNFBGBJACSATHE");
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
    msg.setTimeStamp(0.4400558016);
    msg.setSource(43648U);
    msg.setSourceEntity(233U);
    msg.setDestination(11535U);
    msg.setDestinationEntity(188U);
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 229U;
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
    msg.setTimeStamp(0.922714405473);
    msg.setSource(26525U);
    msg.setSourceEntity(38U);
    msg.setDestination(10212U);
    msg.setDestinationEntity(62U);
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredZ tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.846370178993;
    tmp_tmp_msg_0_0.z_units = 204U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 37189U;
    tmp_msg_0.custom.assign("HCFRPBIHZSEHQAOOEAHVJTZEASUGGUTTRWCDQNXIXPVLSMKBLWIWZDCIFTQDBOBPKIQNGPIFOVLSTBKJMKGLELKOXEPEYSJXWMKDVTSZKBVVFDOCYAAQAOORS");
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
    msg.setTimeStamp(0.431029722803);
    msg.setSource(20880U);
    msg.setSourceEntity(246U);
    msg.setDestination(61406U);
    msg.setDestinationEntity(166U);
    msg.op = 34U;
    msg.system.assign("SNDWHNICAEIXTEAFDGBXSJTFKHXCQTUFYRL");
    msg.range = 0.641055419711;
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 149U;
    tmp_msg_0.text.assign("JOGZIQZKZPPQOVEVXCIIUBUHDTUIZGUVMSALYXBJHWDDFTVWXFDSNJKTFSKHWINQAKTHOGRPHHQAUKLDLCIBPBGYTDPMUWZYFPXMVNSRNBNJPJABADQEQLIKARACRCZQECTNMGMDUJTYHGWYFZPJIEKRYGEEUYWSISFGVBBCGKLWWSQRLNVLJORXCXLYCDOECZIDWEOBJMXOVAZGFPBEOHFOKAQHMULSOXYA");
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
    msg.setTimeStamp(0.997164150144);
    msg.setSource(8802U);
    msg.setSourceEntity(132U);
    msg.setDestination(61009U);
    msg.setDestinationEntity(131U);
    msg.op = 170U;
    msg.system.assign("NQSKIFCCPGOVBKDXZGUUTNSWUABQQTWHYHXDYMHOTNCEECDWBVDFIZDXYHLIITIDXJZFKOWNSZBJUPLUHDESGIWJBLRISCSOSCG");
    msg.range = 0.693718218198;
    IMC::Power tmp_msg_0;
    tmp_msg_0.value = 0.858527610085;
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
    msg.setTimeStamp(0.917977188662);
    msg.setSource(11914U);
    msg.setSourceEntity(205U);
    msg.setDestination(44087U);
    msg.setDestinationEntity(165U);
    msg.op = 158U;
    msg.system.assign("GTFIKRTLWHEDLITUUNHNRGKFNPQRVZKKNXMKQDTEXNNZSCNVXWLBAQILC");
    msg.range = 0.663239024013;
    IMC::Heave tmp_msg_0;
    tmp_msg_0.value = 0.737995325594;
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
    msg.setTimeStamp(0.659457127408);
    msg.setSource(44784U);
    msg.setSourceEntity(139U);
    msg.setDestination(26618U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.101810524312);
    msg.setSource(47116U);
    msg.setSourceEntity(153U);
    msg.setDestination(34474U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.768516160232);
    msg.setSource(63085U);
    msg.setSourceEntity(230U);
    msg.setDestination(46257U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.54650776676);
    msg.setSource(39925U);
    msg.setSourceEntity(157U);
    msg.setDestination(33081U);
    msg.setDestinationEntity(95U);
    msg.list.assign("XSOAHJUGQTAGEIXIUMNVAFSLLXORREKFFGLRZNRLZDLBDQKEOYVDMEKJKLMJHJPHELTGJXQTWCMXY");

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
    msg.setTimeStamp(0.103389578074);
    msg.setSource(20616U);
    msg.setSourceEntity(9U);
    msg.setDestination(63316U);
    msg.setDestinationEntity(156U);
    msg.list.assign("SMYWDKOFBGQMMMAJTMWWVERNOWGXIXGYGKCLQGNVSFQNPWZUIZERTJTHXIAKQPVAFHBVNHBRIFBFPTSOULQORF");

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
    msg.setTimeStamp(0.0199360506019);
    msg.setSource(47143U);
    msg.setSourceEntity(104U);
    msg.setDestination(55038U);
    msg.setDestinationEntity(246U);
    msg.list.assign("UUCMPNFTIFZAGDIUXPTQKNFUNVQIVSHBGWKTGIAGUEMVIVIXPJQUBKJVKNDBVYONNTLXQIGJZMZQTJERBPCTYZHZFRSWZFEAAWPTMDRANGXBCRTUTZFARONHOXOELPFDMPBYPCYBZDHBUOLGYHHLPCJCMDWDOKCSGHXAJFRQQPWHSYSBALZKLRXREEQ");

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
    msg.setTimeStamp(0.496114851689);
    msg.setSource(28117U);
    msg.setSourceEntity(215U);
    msg.setDestination(17854U);
    msg.setDestinationEntity(57U);
    msg.peer.assign("XNGIUAWFOIDABDHJERHBLWQZYEMXMVBAEYFTMMNRPLWFJUYIUARQMXASKRIMYCQIUYGBZFBPZQLTAEIJOXRTDAYORSNLSWRPXHWRDALSJTWBOPGUBZZDEMDJIRRVLMNOOHNTEIIGCPMAKKVOFVHZKYVJCPSYJFKOSNVVDKMTGNNUFJWKZNBEDTQVEQPULHZGUAPWEUPXKVYH");
    msg.rssi = 0.620948849948;
    msg.integrity = 61848U;

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
    msg.setTimeStamp(0.929146481128);
    msg.setSource(33865U);
    msg.setSourceEntity(175U);
    msg.setDestination(17829U);
    msg.setDestinationEntity(117U);
    msg.peer.assign("CXMIPCHTPNYWPCTQEENDJATUUCMKJNVPFBWBRKRIAJRLVAPE");
    msg.rssi = 0.258287931539;
    msg.integrity = 41185U;

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
    msg.setTimeStamp(0.0827923723079);
    msg.setSource(43545U);
    msg.setSourceEntity(96U);
    msg.setDestination(57598U);
    msg.setDestinationEntity(133U);
    msg.peer.assign("VAJGSZNRVSRHQNKZCLOKNQVPMZSQQUGUXBDOUCGGERATAWUCDVPGQVIUOOLLCFCLFFXIJJAMXMMPEBBTEPHBFDGAPJFOBKRJKPLRQCSWXJBYDBWIWFVKNELOAGEVJMLFOCWSKESPNZNJCEXOWVFYSKDDXAITMZILORYFUTMYAWXRYBZIEUZUASPPPNBQIYHXTSVYOKC");
    msg.rssi = 0.172713058654;
    msg.integrity = 46970U;

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
    msg.setTimeStamp(0.324752638226);
    msg.setSource(50549U);
    msg.setSourceEntity(49U);
    msg.setDestination(50057U);
    msg.setDestinationEntity(166U);
    msg.req_id = 35516U;
    msg.destination.assign("CSGLEXAGWHLCOHRQGJAGYSFSYYDKIJUUXZKNURBWHYJDBNMBTXWXJNQCTMNBFAQJABXUIRNDOTDQPHTIAZFMXTFSMHFZSDIKNLLVHVYHEIJVZFWQPVVFPVRSKKIUYUPEDOQHHBJRMPNABPEWVLOLOWJCCSFUMEGCTOUAZKWNCBRVUTEMXCARZHOUOIIAEYTSXKYGPDDMGYQQSKZNVYLGIFJADETEPWQR");
    msg.timeout = 0.414044001487;
    msg.range = 0.615417489366;
    msg.type = 16U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 33495U;
    tmp_msg_0.lat = 0.330321378578;
    tmp_msg_0.lon = 0.960921879453;
    tmp_msg_0.speed = 0.832539668142;
    tmp_msg_0.speed_units = 127U;
    tmp_msg_0.custom.assign("IVPDJXLCAJPGMHXQLTKUMOYWPSASHYHFXSWNXTGRPXVBNLDFTMOKFVDPARTKCQQHYOTDOABQGEGVRIUUBOCJIYQSNAIAEEVZJLEXIYJKRIHLPKIUMSWGKYGUCOJQWOLLIMUKETEDMBSRCZAFFRLPI");
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
    msg.setTimeStamp(0.748923267064);
    msg.setSource(13926U);
    msg.setSourceEntity(163U);
    msg.setDestination(31156U);
    msg.setDestinationEntity(225U);
    msg.req_id = 29152U;
    msg.destination.assign("SRABYIKMXMNXRQTZHWMEEUPMWGZJJQFIEHKKWPOBICOBEFVVLDCDXFUZSKMUCFDTRRILWSNAQXSDDKNVZXNALHCGZUIMLPLLHPBWOMGALQSGFZEMYBOIYNNGDSCMJCPUEVJWLUYTJAAKHRZCDBMSRVYWKUGPQOXDDLQQT");
    msg.timeout = 0.778676661079;
    msg.range = 0.339258344852;
    msg.type = 236U;
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.5987243678;
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
    msg.setTimeStamp(0.52212186353);
    msg.setSource(29306U);
    msg.setSourceEntity(69U);
    msg.setDestination(46395U);
    msg.setDestinationEntity(122U);
    msg.req_id = 24720U;
    msg.destination.assign("HZOVNJDZGQXFVAUBTEPULZQQYSEMMQXMFRRGTJFNYDUJAYCTBBMSLPSSTPYYZAGKRJGAIWAHMBKKGPBONDSWHYARLYHHULGNLGCURWASJBZUCMZCEOKUCEODWGVPGVTWPDNLUANKQASYEOXXNTFZBIHPBLJESNVOPKTQRXHWIIRBFVTDAWEKHVJYFFDFQXWDMMIQXP");
    msg.timeout = 0.856182223088;
    msg.range = 0.170600545178;
    msg.type = 198U;
    IMC::TBRSensor tmp_msg_0;
    tmp_msg_0.serial_no = 699002987U;
    tmp_msg_0.unix_timestamp = 2861443132U;
    tmp_msg_0.temperature = 0.814077950257;
    tmp_msg_0.avg_noise_level = 173U;
    tmp_msg_0.peak_noise_level = 60U;
    tmp_msg_0.recv_listen_freq = 68U;
    tmp_msg_0.recv_mem_addr = 60106U;
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
    msg.setTimeStamp(0.0252154883329);
    msg.setSource(41270U);
    msg.setSourceEntity(14U);
    msg.setDestination(26799U);
    msg.setDestinationEntity(96U);
    msg.req_id = 43516U;
    msg.type = 136U;
    msg.status = 250U;
    msg.info.assign("TUIXVHULAOZNR");
    msg.range = 0.731168555871;

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
    msg.setTimeStamp(0.886474974698);
    msg.setSource(30119U);
    msg.setSourceEntity(194U);
    msg.setDestination(19196U);
    msg.setDestinationEntity(28U);
    msg.req_id = 28692U;
    msg.type = 78U;
    msg.status = 184U;
    msg.info.assign("XFDQOWTWZLVEGZYRVYLALHGHIJOHWYCNBZOQWMCELJPMTOAIMVUQJCKHGQDRUQJWEEHIVPDESWHNAGSDWOBHMJAUTQZPMUWFTFGBBFPLFACXMONRUEUGON");
    msg.range = 0.155477807009;

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
    msg.setTimeStamp(0.0179140711511);
    msg.setSource(63486U);
    msg.setSourceEntity(89U);
    msg.setDestination(40765U);
    msg.setDestinationEntity(136U);
    msg.req_id = 27217U;
    msg.type = 141U;
    msg.status = 11U;
    msg.info.assign("JTJEOPKAVSDMCSVGGMJOGESADHWRNAAKRRKEWHKEGTKDOVEDFHTCSIOUDLXZOBEJMAQPXFWWFCWKFNMTMCNJUGSCLRRYZXAEGWXVQJPWUUEXWJ");
    msg.range = 0.235774458449;

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
    msg.setTimeStamp(0.0344738761342);
    msg.setSource(26122U);
    msg.setSourceEntity(151U);
    msg.setDestination(40408U);
    msg.setDestinationEntity(17U);
    msg.value = 2812;

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
    msg.setTimeStamp(0.249554973263);
    msg.setSource(46411U);
    msg.setSourceEntity(250U);
    msg.setDestination(16499U);
    msg.setDestinationEntity(1U);
    msg.value = 5766;

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
    msg.setTimeStamp(0.0304331795742);
    msg.setSource(5117U);
    msg.setSourceEntity(130U);
    msg.setDestination(25046U);
    msg.setDestinationEntity(248U);
    msg.value = 24742;

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
    msg.setTimeStamp(0.82882165237);
    msg.setSource(13572U);
    msg.setSourceEntity(139U);
    msg.setDestination(15173U);
    msg.setDestinationEntity(147U);
    msg.value = 0.0866302728712;

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
    msg.setTimeStamp(0.0596207847937);
    msg.setSource(34612U);
    msg.setSourceEntity(158U);
    msg.setDestination(2737U);
    msg.setDestinationEntity(204U);
    msg.value = 0.847681433039;

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
    msg.setTimeStamp(0.799457123891);
    msg.setSource(18939U);
    msg.setSourceEntity(89U);
    msg.setDestination(32642U);
    msg.setDestinationEntity(252U);
    msg.value = 0.24729140535;

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
    msg.setTimeStamp(0.726056516491);
    msg.setSource(11421U);
    msg.setSourceEntity(36U);
    msg.setDestination(21222U);
    msg.setDestinationEntity(164U);
    msg.value = 0.190357144106;

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
    msg.setTimeStamp(0.764539741376);
    msg.setSource(33259U);
    msg.setSourceEntity(109U);
    msg.setDestination(2268U);
    msg.setDestinationEntity(239U);
    msg.value = 0.352806985783;

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
    msg.setTimeStamp(0.632911742077);
    msg.setSource(11373U);
    msg.setSourceEntity(73U);
    msg.setDestination(59801U);
    msg.setDestinationEntity(33U);
    msg.value = 0.33042359242;

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
    msg.setTimeStamp(0.0640859924003);
    msg.setSource(64995U);
    msg.setSourceEntity(150U);
    msg.setDestination(60984U);
    msg.setDestinationEntity(2U);
    msg.validity = 40579U;
    msg.type = 44U;
    msg.utc_year = 45602U;
    msg.utc_month = 22U;
    msg.utc_day = 248U;
    msg.utc_time = 0.0694233044155;
    msg.lat = 0.0849147801589;
    msg.lon = 0.100160536404;
    msg.height = 0.276624038061;
    msg.satellites = 245U;
    msg.cog = 0.217247169076;
    msg.sog = 0.53882169007;
    msg.hdop = 0.953188123084;
    msg.vdop = 0.730757229625;
    msg.hacc = 0.319288699158;
    msg.vacc = 0.643715331055;

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
    msg.setTimeStamp(0.0397392908904);
    msg.setSource(2876U);
    msg.setSourceEntity(42U);
    msg.setDestination(21586U);
    msg.setDestinationEntity(21U);
    msg.validity = 51066U;
    msg.type = 135U;
    msg.utc_year = 44830U;
    msg.utc_month = 27U;
    msg.utc_day = 207U;
    msg.utc_time = 0.903570605748;
    msg.lat = 0.784124463105;
    msg.lon = 0.782420907033;
    msg.height = 0.984618105878;
    msg.satellites = 163U;
    msg.cog = 0.619953621159;
    msg.sog = 0.650288129543;
    msg.hdop = 0.764519597364;
    msg.vdop = 0.0351367171344;
    msg.hacc = 0.837091699782;
    msg.vacc = 0.781357943741;

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
    msg.setTimeStamp(0.210838649772);
    msg.setSource(53176U);
    msg.setSourceEntity(66U);
    msg.setDestination(15304U);
    msg.setDestinationEntity(93U);
    msg.validity = 28446U;
    msg.type = 36U;
    msg.utc_year = 46363U;
    msg.utc_month = 125U;
    msg.utc_day = 121U;
    msg.utc_time = 0.530032515751;
    msg.lat = 0.117562241094;
    msg.lon = 0.215615229815;
    msg.height = 0.56397940129;
    msg.satellites = 227U;
    msg.cog = 0.880541845053;
    msg.sog = 0.139268330457;
    msg.hdop = 0.397334959401;
    msg.vdop = 0.899803751469;
    msg.hacc = 0.174549867142;
    msg.vacc = 0.792115413301;

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
    msg.setTimeStamp(0.708810166202);
    msg.setSource(39476U);
    msg.setSourceEntity(191U);
    msg.setDestination(3689U);
    msg.setDestinationEntity(92U);
    msg.time = 0.978665024345;
    msg.phi = 0.744479457477;
    msg.theta = 0.901538301369;
    msg.psi = 0.395763765795;
    msg.psi_magnetic = 0.891999764319;

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
    msg.setTimeStamp(0.67437552085);
    msg.setSource(56690U);
    msg.setSourceEntity(145U);
    msg.setDestination(47941U);
    msg.setDestinationEntity(155U);
    msg.time = 0.695445600575;
    msg.phi = 0.264977690837;
    msg.theta = 0.576915970303;
    msg.psi = 0.926559100288;
    msg.psi_magnetic = 0.899837760288;

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
    msg.setTimeStamp(0.215761224249);
    msg.setSource(30078U);
    msg.setSourceEntity(40U);
    msg.setDestination(35417U);
    msg.setDestinationEntity(179U);
    msg.time = 0.854812062466;
    msg.phi = 0.0678177562663;
    msg.theta = 0.998392444925;
    msg.psi = 0.466332295215;
    msg.psi_magnetic = 0.453694264032;

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
    msg.setTimeStamp(0.861450822939);
    msg.setSource(26770U);
    msg.setSourceEntity(116U);
    msg.setDestination(37595U);
    msg.setDestinationEntity(67U);
    msg.time = 0.189033883662;
    msg.x = 0.898248488254;
    msg.y = 0.136273884814;
    msg.z = 0.105993993183;
    msg.timestep = 0.508038113679;

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
    msg.setTimeStamp(0.313641331246);
    msg.setSource(37604U);
    msg.setSourceEntity(12U);
    msg.setDestination(14935U);
    msg.setDestinationEntity(102U);
    msg.time = 0.739182208895;
    msg.x = 0.0487755957614;
    msg.y = 0.142085445473;
    msg.z = 0.864963664892;
    msg.timestep = 0.673185747129;

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
    msg.setTimeStamp(0.160450822923);
    msg.setSource(22774U);
    msg.setSourceEntity(189U);
    msg.setDestination(2491U);
    msg.setDestinationEntity(52U);
    msg.time = 0.961230030221;
    msg.x = 0.705461845251;
    msg.y = 0.739432524251;
    msg.z = 0.0479133479136;
    msg.timestep = 0.36336186509;

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
    msg.setTimeStamp(0.870813102581);
    msg.setSource(6140U);
    msg.setSourceEntity(176U);
    msg.setDestination(52335U);
    msg.setDestinationEntity(21U);
    msg.time = 0.116510568703;
    msg.x = 0.858669710376;
    msg.y = 0.566592136541;
    msg.z = 0.984310823547;

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
    msg.setTimeStamp(0.0859766454923);
    msg.setSource(15606U);
    msg.setSourceEntity(168U);
    msg.setDestination(59056U);
    msg.setDestinationEntity(4U);
    msg.time = 0.00929620454009;
    msg.x = 0.343662496011;
    msg.y = 0.935135450405;
    msg.z = 0.660961984942;

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
    msg.setTimeStamp(0.171602778431);
    msg.setSource(37158U);
    msg.setSourceEntity(43U);
    msg.setDestination(40511U);
    msg.setDestinationEntity(133U);
    msg.time = 0.358319401894;
    msg.x = 0.0172058971158;
    msg.y = 0.662789152574;
    msg.z = 0.751086005911;

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
    msg.setTimeStamp(0.52132936528);
    msg.setSource(39498U);
    msg.setSourceEntity(79U);
    msg.setDestination(64849U);
    msg.setDestinationEntity(247U);
    msg.time = 0.752718824295;
    msg.x = 0.206023398636;
    msg.y = 0.88287156658;
    msg.z = 0.150290960274;

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
    msg.setTimeStamp(0.429992024767);
    msg.setSource(43864U);
    msg.setSourceEntity(176U);
    msg.setDestination(59902U);
    msg.setDestinationEntity(152U);
    msg.time = 0.628735178722;
    msg.x = 0.999959970455;
    msg.y = 0.874467842097;
    msg.z = 0.827545618655;

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
    msg.setTimeStamp(0.659127337835);
    msg.setSource(64414U);
    msg.setSourceEntity(159U);
    msg.setDestination(10720U);
    msg.setDestinationEntity(154U);
    msg.time = 0.757055414615;
    msg.x = 0.434673742414;
    msg.y = 0.681204020901;
    msg.z = 0.218483781844;

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
    msg.setTimeStamp(0.161012099629);
    msg.setSource(63117U);
    msg.setSourceEntity(139U);
    msg.setDestination(37457U);
    msg.setDestinationEntity(187U);
    msg.time = 0.715743576213;
    msg.x = 0.75974199633;
    msg.y = 0.853338906337;
    msg.z = 0.557070321849;

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
    msg.setTimeStamp(0.434582157469);
    msg.setSource(18772U);
    msg.setSourceEntity(236U);
    msg.setDestination(6587U);
    msg.setDestinationEntity(231U);
    msg.time = 0.0750546055867;
    msg.x = 0.942356586613;
    msg.y = 0.586809399718;
    msg.z = 0.598082654288;

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
    msg.setTimeStamp(0.0995841863997);
    msg.setSource(16190U);
    msg.setSourceEntity(61U);
    msg.setDestination(44023U);
    msg.setDestinationEntity(202U);
    msg.time = 0.669303522392;
    msg.x = 0.604958439199;
    msg.y = 0.592755080974;
    msg.z = 0.787371962487;

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
    msg.setTimeStamp(0.278181896679);
    msg.setSource(60070U);
    msg.setSourceEntity(66U);
    msg.setDestination(14951U);
    msg.setDestinationEntity(204U);
    msg.validity = 17U;
    msg.x = 0.636167813675;
    msg.y = 0.0897694441053;
    msg.z = 0.309438850285;

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
    msg.setTimeStamp(0.469348632647);
    msg.setSource(61798U);
    msg.setSourceEntity(195U);
    msg.setDestination(32705U);
    msg.setDestinationEntity(186U);
    msg.validity = 178U;
    msg.x = 0.667370832043;
    msg.y = 0.824176133777;
    msg.z = 0.314575022921;

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
    msg.setTimeStamp(0.597471101767);
    msg.setSource(42064U);
    msg.setSourceEntity(89U);
    msg.setDestination(24057U);
    msg.setDestinationEntity(154U);
    msg.validity = 254U;
    msg.x = 0.747782802627;
    msg.y = 0.172240140853;
    msg.z = 0.92355997364;

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
    msg.setTimeStamp(0.684830952822);
    msg.setSource(38711U);
    msg.setSourceEntity(69U);
    msg.setDestination(40283U);
    msg.setDestinationEntity(86U);
    msg.validity = 118U;
    msg.x = 0.87932815173;
    msg.y = 0.124176634053;
    msg.z = 0.704847628037;

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
    msg.setTimeStamp(0.398628088914);
    msg.setSource(48149U);
    msg.setSourceEntity(5U);
    msg.setDestination(42860U);
    msg.setDestinationEntity(148U);
    msg.validity = 69U;
    msg.x = 0.597460794925;
    msg.y = 0.754313084337;
    msg.z = 0.200459775128;

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
    msg.setTimeStamp(0.072928825454);
    msg.setSource(65093U);
    msg.setSourceEntity(111U);
    msg.setDestination(12929U);
    msg.setDestinationEntity(27U);
    msg.validity = 222U;
    msg.x = 0.0722870351251;
    msg.y = 0.13873002179;
    msg.z = 0.654578958202;

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
    msg.setTimeStamp(0.0487170007555);
    msg.setSource(17033U);
    msg.setSourceEntity(11U);
    msg.setDestination(51718U);
    msg.setDestinationEntity(157U);
    msg.time = 0.7351347426;
    msg.x = 0.554279605131;
    msg.y = 0.449990578202;
    msg.z = 0.674685444206;

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
    msg.setTimeStamp(0.381880050214);
    msg.setSource(58036U);
    msg.setSourceEntity(236U);
    msg.setDestination(20090U);
    msg.setDestinationEntity(172U);
    msg.time = 0.380137766628;
    msg.x = 0.707463991173;
    msg.y = 0.13396540057;
    msg.z = 0.876097005636;

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
    msg.setTimeStamp(0.783723653097);
    msg.setSource(16456U);
    msg.setSourceEntity(48U);
    msg.setDestination(35129U);
    msg.setDestinationEntity(244U);
    msg.time = 0.389545894782;
    msg.x = 0.952042772706;
    msg.y = 0.693926204317;
    msg.z = 0.463318994048;

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
    msg.setTimeStamp(0.722855313839);
    msg.setSource(13754U);
    msg.setSourceEntity(146U);
    msg.setDestination(31637U);
    msg.setDestinationEntity(236U);
    msg.validity = 235U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.478118236644;
    tmp_msg_0.beam_height = 0.747390188554;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.379617593918;

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
    msg.setTimeStamp(0.979611850842);
    msg.setSource(31265U);
    msg.setSourceEntity(207U);
    msg.setDestination(7008U);
    msg.setDestinationEntity(134U);
    msg.validity = 75U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.614309334011;
    tmp_msg_0.y = 0.598776526705;
    tmp_msg_0.z = 0.0344269610814;
    tmp_msg_0.phi = 0.679794493366;
    tmp_msg_0.theta = 0.748275848181;
    tmp_msg_0.psi = 0.198075406111;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.788646430227;
    tmp_msg_1.beam_height = 0.965335472487;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.114750646707;

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
    msg.setTimeStamp(0.425281124065);
    msg.setSource(59874U);
    msg.setSourceEntity(211U);
    msg.setDestination(11541U);
    msg.setDestinationEntity(24U);
    msg.validity = 252U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.846962838064;
    tmp_msg_0.beam_height = 0.274467846061;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.412419338417;

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
    msg.setTimeStamp(0.588882686423);
    msg.setSource(24921U);
    msg.setSourceEntity(84U);
    msg.setDestination(55460U);
    msg.setDestinationEntity(120U);
    msg.value = 0.469184154367;

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
    msg.setTimeStamp(0.946299765156);
    msg.setSource(40898U);
    msg.setSourceEntity(41U);
    msg.setDestination(57818U);
    msg.setDestinationEntity(251U);
    msg.value = 0.045458165905;

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
    msg.setTimeStamp(0.250623507364);
    msg.setSource(31924U);
    msg.setSourceEntity(176U);
    msg.setDestination(41742U);
    msg.setDestinationEntity(68U);
    msg.value = 0.2045771093;

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
    msg.setTimeStamp(0.567593098298);
    msg.setSource(31017U);
    msg.setSourceEntity(243U);
    msg.setDestination(42358U);
    msg.setDestinationEntity(19U);
    msg.value = 0.604594278323;

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
    msg.setTimeStamp(0.647613335316);
    msg.setSource(1859U);
    msg.setSourceEntity(68U);
    msg.setDestination(52710U);
    msg.setDestinationEntity(52U);
    msg.value = 0.229871528064;

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
    msg.setTimeStamp(0.430137294797);
    msg.setSource(59058U);
    msg.setSourceEntity(238U);
    msg.setDestination(44629U);
    msg.setDestinationEntity(239U);
    msg.value = 0.956818398117;

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
    msg.setTimeStamp(0.82688964309);
    msg.setSource(57567U);
    msg.setSourceEntity(121U);
    msg.setDestination(37205U);
    msg.setDestinationEntity(30U);
    msg.value = 0.78114551276;

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
    msg.setTimeStamp(0.191262008839);
    msg.setSource(64461U);
    msg.setSourceEntity(242U);
    msg.setDestination(33611U);
    msg.setDestinationEntity(141U);
    msg.value = 0.235251376769;

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
    msg.setTimeStamp(0.304419207114);
    msg.setSource(28729U);
    msg.setSourceEntity(88U);
    msg.setDestination(28356U);
    msg.setDestinationEntity(50U);
    msg.value = 0.468146956943;

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
    msg.setTimeStamp(0.79635067438);
    msg.setSource(13258U);
    msg.setSourceEntity(151U);
    msg.setDestination(35248U);
    msg.setDestinationEntity(28U);
    msg.value = 0.461593097556;

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
    msg.setTimeStamp(0.296889956823);
    msg.setSource(27261U);
    msg.setSourceEntity(134U);
    msg.setDestination(21029U);
    msg.setDestinationEntity(217U);
    msg.value = 0.761230028927;

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
    msg.setTimeStamp(0.310902067569);
    msg.setSource(13106U);
    msg.setSourceEntity(142U);
    msg.setDestination(55861U);
    msg.setDestinationEntity(118U);
    msg.value = 0.878948568307;

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
    msg.setTimeStamp(0.363615536073);
    msg.setSource(2185U);
    msg.setSourceEntity(0U);
    msg.setDestination(50861U);
    msg.setDestinationEntity(166U);
    msg.value = 0.417204403122;

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
    msg.setTimeStamp(0.36933999334);
    msg.setSource(16874U);
    msg.setSourceEntity(195U);
    msg.setDestination(43635U);
    msg.setDestinationEntity(75U);
    msg.value = 0.90112248412;

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
    msg.setTimeStamp(0.354350291911);
    msg.setSource(6804U);
    msg.setSourceEntity(254U);
    msg.setDestination(31339U);
    msg.setDestinationEntity(32U);
    msg.value = 0.433353849817;

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
    msg.setTimeStamp(0.306869480608);
    msg.setSource(58071U);
    msg.setSourceEntity(0U);
    msg.setDestination(56357U);
    msg.setDestinationEntity(158U);
    msg.value = 0.287633324734;

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
    msg.setTimeStamp(0.918166123383);
    msg.setSource(6979U);
    msg.setSourceEntity(159U);
    msg.setDestination(16599U);
    msg.setDestinationEntity(186U);
    msg.value = 0.336015744844;

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
    msg.setTimeStamp(0.0873298507887);
    msg.setSource(47811U);
    msg.setSourceEntity(23U);
    msg.setDestination(58043U);
    msg.setDestinationEntity(10U);
    msg.value = 0.10650556123;

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
    msg.setTimeStamp(0.783496272373);
    msg.setSource(11655U);
    msg.setSourceEntity(234U);
    msg.setDestination(63278U);
    msg.setDestinationEntity(221U);
    msg.value = 0.92521436153;

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
    msg.setTimeStamp(0.885934506635);
    msg.setSource(38842U);
    msg.setSourceEntity(4U);
    msg.setDestination(43843U);
    msg.setDestinationEntity(21U);
    msg.value = 0.71817179705;

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
    msg.setTimeStamp(0.920480598845);
    msg.setSource(24877U);
    msg.setSourceEntity(59U);
    msg.setDestination(10627U);
    msg.setDestinationEntity(178U);
    msg.value = 0.410753456971;

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
    msg.setTimeStamp(0.886911568388);
    msg.setSource(60200U);
    msg.setSourceEntity(137U);
    msg.setDestination(31422U);
    msg.setDestinationEntity(8U);
    msg.value = 0.618570365844;

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
    msg.setTimeStamp(0.850902360385);
    msg.setSource(56869U);
    msg.setSourceEntity(139U);
    msg.setDestination(53949U);
    msg.setDestinationEntity(242U);
    msg.value = 0.333893859129;

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
    msg.setTimeStamp(0.912964193653);
    msg.setSource(10442U);
    msg.setSourceEntity(109U);
    msg.setDestination(39525U);
    msg.setDestinationEntity(88U);
    msg.value = 0.147929824129;

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
    msg.setTimeStamp(0.0870380027504);
    msg.setSource(36206U);
    msg.setSourceEntity(206U);
    msg.setDestination(35739U);
    msg.setDestinationEntity(115U);
    msg.direction = 0.935042330188;
    msg.speed = 0.110600840486;
    msg.turbulence = 0.263252565083;

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
    msg.setTimeStamp(0.1691089724);
    msg.setSource(32012U);
    msg.setSourceEntity(47U);
    msg.setDestination(31384U);
    msg.setDestinationEntity(94U);
    msg.direction = 0.371619236333;
    msg.speed = 0.466544188621;
    msg.turbulence = 0.943255892413;

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
    msg.setTimeStamp(0.573407655766);
    msg.setSource(55461U);
    msg.setSourceEntity(226U);
    msg.setDestination(8601U);
    msg.setDestinationEntity(86U);
    msg.direction = 0.0595756401869;
    msg.speed = 0.548380993049;
    msg.turbulence = 0.0854115965219;

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
    msg.setTimeStamp(0.685570889291);
    msg.setSource(45005U);
    msg.setSourceEntity(108U);
    msg.setDestination(15206U);
    msg.setDestinationEntity(65U);
    msg.value = 0.242279829388;

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
    msg.setTimeStamp(0.356536153886);
    msg.setSource(44429U);
    msg.setSourceEntity(167U);
    msg.setDestination(60423U);
    msg.setDestinationEntity(110U);
    msg.value = 0.566095366457;

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
    msg.setTimeStamp(0.618572783446);
    msg.setSource(1930U);
    msg.setSourceEntity(75U);
    msg.setDestination(34840U);
    msg.setDestinationEntity(161U);
    msg.value = 0.372214303912;

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
    msg.setTimeStamp(0.429620080075);
    msg.setSource(50599U);
    msg.setSourceEntity(52U);
    msg.setDestination(14472U);
    msg.setDestinationEntity(224U);
    msg.value.assign("VIZRAFLFQLDOCEORLUQNORBGIQEBKOVAPHHHYIGEVHUFUWHAMKNYZEDQTWNRRMKUVJXWLPTDIQXSEPPPIMLJQFDBXZDLVWRTMYJGGGSHFJEBEDHPWMGVWLSMNWYFXMJTTNOKNEEYJDXQUGATSKYAJUYHUAVAYTPOXUWKQRSSVHPCFOKLSEFTBPLJZSHBQDBKICOBZDZIMRXTYUZVZCCCILWPGXC");

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
    msg.setTimeStamp(0.214148796548);
    msg.setSource(21953U);
    msg.setSourceEntity(107U);
    msg.setDestination(43360U);
    msg.setDestinationEntity(55U);
    msg.value.assign("YBKNZCXBYVLICJSAIUHPBAVZDSDIOBABMGPGPZNEFWHZBGCPFUQGALXPQLBUQHMWMPXYFKWTZRVWURXNQCHIOIAECXMWKGNSDTSJSGTXXJVQNOOOTDPCKTHAVDZNYRVWNHRMQEGJLDQKYHMUQHEWKIGEL");

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
    msg.setTimeStamp(0.748311398917);
    msg.setSource(14429U);
    msg.setSourceEntity(217U);
    msg.setDestination(8214U);
    msg.setDestinationEntity(168U);
    msg.value.assign("LVDVOJPYWNQFRDLTRDQSGCSVINKZSPARHJIXIKAEJRUGBWPWBSAZZLBJKLTWJFLZBCBWRUPIHKGOKFFCQOQMCMQOYTURZBCLCNGVTXVSNTQPGUOZFIFGEKDPAHTOIMLYEHXIELXKQFBUHROEHGSXNMWVUDNZHVNDJEWH");

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
    msg.setTimeStamp(0.614202633568);
    msg.setSource(50012U);
    msg.setSourceEntity(203U);
    msg.setDestination(18938U);
    msg.setDestinationEntity(106U);
    const char tmp_msg_0[] = {-106, -94, -34, -40, -75, -68, -73, 98, 47, 115, -27, 9, -88, -110, 50, 107, 91, 19, -124, 23, -76, -79, -61, -91, 29, 55, 56, -88, -11, 68, 56, 61, 125, -59, -125, -64, 55, -66, 42, -66, -78, 49, 21, 3, 33, 53, -73, 18, 112, 25, 115, -61, 46, 63, -36, -87, -25, -127, -8, 69, 57, 17, 67, -92, 10, 123, -29, -125, 96, -91, 90, -75, 108, 26, -117, -27, -103, 78, 118, 110, -116, 64, -30, 51, -89, 51, -39, -98, 24, 7, -15, 4, 86, 25, -120, 104, -112, 25, 82, -75, -98, -39, -109, 97, 86, -36, 14, -100, -92, 0, 47, -38, -13, 114, -70, 30, 32, 47, 118, 104, -52, 12, -25, 124, -24, -18, -8, 40, 82, 50, -27, 100, -23, -42, 12, -78, -86, 1, 101, 2, -91, 60, 77};
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
    msg.setTimeStamp(0.98304718619);
    msg.setSource(57962U);
    msg.setSourceEntity(163U);
    msg.setDestination(41307U);
    msg.setDestinationEntity(63U);
    const char tmp_msg_0[] = {30, 22, 104, 98, 86, 50, 50, 74, -96, 41, -126, -101, 90, 3, 52, 39, 61, -10, -35, -13, -64, 55, 109, -56, 126, 105, -97, -4, -47, 16, -114};
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
    msg.setTimeStamp(0.943215206781);
    msg.setSource(23837U);
    msg.setSourceEntity(212U);
    msg.setDestination(5775U);
    msg.setDestinationEntity(140U);
    const char tmp_msg_0[] = {-127, 53, -52, -21, 90, 46, 9, -67, -35, -122, 8, 22, 62, 34, -44, 12, -22, 116, 89, -128, -7, 14, -51, 13, 25, 78, -20, -2, -118, 82, 8, -19, -66, 55, 65, 47, 118, -59, 46, -100, -73, 117, 79, 17, -41, 41, 45, 18, 5, 40, 36, 6, -79, -125, -39, 27, -69, -37, -102, 42, -4, -13, 68, -99, -26, -21, -55, -85, 8, 52, -82, 100, 61, -28, -103, -99, -41, -79, -103, -2, 33, -15, -49, 75, 15, 8, -45, 105, -55, 99, 85, 18, 46, -9, 34, -73, 114, 113, -106, -42, 40, 79, 46, -13, -111, -1, -89, 69, -94, -62, 97, -118, -104, 1, -94, -47, -104, 10, 86, 123, -111, 84, -77, 91, -37, -19, 28, -78, 10, -19, -118, -4, 22, 38, 88, -71, -64, 53, -65, -57, -60, 82, 86, 107, 18, 22, 54, -70, -110, 54, 126, -53, -120, 109, 114, -74, -88, -1, 53, 98, 88, -74, 20, 102, 49, 90, -10, -122, -124, 116, 43, 124, -113, -79, -87, -124, -1, -95, -70, 16, 78, 29, -30, -117, 120, 113, -45, 53, 66, 58, 100, -85, 85, -27, -123, -44};
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
    msg.setTimeStamp(0.159100183333);
    msg.setSource(40422U);
    msg.setSourceEntity(33U);
    msg.setDestination(26032U);
    msg.setDestinationEntity(106U);
    msg.value = 0.710066929925;

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
    msg.setTimeStamp(0.29834531338);
    msg.setSource(5476U);
    msg.setSourceEntity(229U);
    msg.setDestination(28574U);
    msg.setDestinationEntity(94U);
    msg.value = 0.517958818423;

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
    msg.setTimeStamp(0.73451415065);
    msg.setSource(7168U);
    msg.setSourceEntity(103U);
    msg.setDestination(50980U);
    msg.setDestinationEntity(17U);
    msg.value = 0.425199902727;

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
    msg.setTimeStamp(0.600703890882);
    msg.setSource(18838U);
    msg.setSourceEntity(203U);
    msg.setDestination(27071U);
    msg.setDestinationEntity(237U);
    msg.type = 37U;
    msg.frequency = 1173827799U;
    msg.min_range = 64161U;
    msg.max_range = 32782U;
    msg.bits_per_point = 161U;
    msg.scale_factor = 0.526874887602;
    const char tmp_msg_0[] = {-29, -121, -118, -19, -34, 12, -109, -43, -37, -57, -122, -12, 50, 0, -51, 109, 82, 81, 26, 105, 61, 64, -51, -34, -18, -25, 58, -128, 56, 90, -35, 34, -37, -8, -28, 6, 25, -18, 83, 88, -99, -26, 112, 9, 56, -72, -26, 94, -89, -45, -96, 57, -70, -95, -48, 69, -57, -37, 7, 124, -98, -102, 28, 12, -113, -96, -5, -9, 103, -1, -125, 110, 92, -43, -53, -79, 67, -26, -125, -127, 5, 89, 63, 62, -37, 7, -34, -48, -94, 103, 124, -47, -75, 9, 105, -31, -85, -44, 95, -30, -97, -105, -88, -6, 48, -100, -5, 107, 80, -52, -118, -58, -6, -47, 96, -30, -110, 41, -90, -104, 55, 104, -62, -13, -108, -120, 78, -14, -103, -118, -4, -51, -59, -87, -103, -29, -47, 0, 42, 72, 94, -7, 1, 51, 95, -120, -120, -54, 5, 6, 52, -107, -93, -67, 84, 122, -73, 91, -126, -77, 29, 78, 73, 77, -65, -75, 101, -4, -96, 102, -103, -39, 100, 70, 119, -82, 0, -76, -95, -80, 0, 125, -80, -78, -14, 97, 118, 119, 80, -1, -46, 107, 4, 115, 53, -64, 74, 12, 40, 58, -92, 53, 36, 56, 103, 123, -41, 21, -81, -36, -27, -109, 29, -116, 108, 15, 84, 99, -122, -95, -84, -75, -95, -83, -12, -66, 47, -17, 87, -110, -95, -22, -36, -98, -71, 75, 109, -94, -64, -67, 78, 5, 65, 63, -12, -114, 29, 120, -95, -80};
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
    msg.setTimeStamp(0.884079380762);
    msg.setSource(29337U);
    msg.setSourceEntity(22U);
    msg.setDestination(17411U);
    msg.setDestinationEntity(11U);
    msg.type = 136U;
    msg.frequency = 441162171U;
    msg.min_range = 24076U;
    msg.max_range = 28521U;
    msg.bits_per_point = 143U;
    msg.scale_factor = 0.589213747056;
    const char tmp_msg_0[] = {10, 9, 11, 101, 40, 4, -31, 110, 53, 99, 121, -80, 44, 49, 7, -86, -121, -70, 114, -5, 79, -75, -13, 88, -46, 103, 123, -93, -74, 100, 30, -88, -92, -39, -66, 52, -126, 80, -99, 37, 49, 9, 92, -63, 120, -74, 115, 107, 46, 100, -58, -120, -27, 0, 50, -81, -11, 51, -115, -71, -125, -53, 119, -11, -104, 114, -100, 41, -60, 41, 4, -27, 52, 25, 103, 26, 67, -101, 51, 56, -126, 98, -34, -105, -76, -20, -24, 96, -77, 82, 75, 102, -71};
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
    msg.setTimeStamp(0.79717019351);
    msg.setSource(36259U);
    msg.setSourceEntity(136U);
    msg.setDestination(59469U);
    msg.setDestinationEntity(147U);
    msg.type = 153U;
    msg.frequency = 2386908893U;
    msg.min_range = 22138U;
    msg.max_range = 30332U;
    msg.bits_per_point = 178U;
    msg.scale_factor = 0.68091503353;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.111090126802;
    tmp_msg_0.beam_height = 0.406868218196;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-28, 122, -67, 15, -95, -97, 118, 110, -105, 65, -83, 49, -47, 53, 12, 14, -80, -93, -103, -98, -121, -77, 70, -119, 45, 19, -9, -40, -127, 55, 126, -107, 74, -2, 61, -88, -10, -43, -20, 92, 78, 113, 125, 18, -53, -31, -14, 1, 21, -117, 64, -104, 114, 112, -67, 75, -77, -71, 21, 65, 120, -26, -22, 64, -31, -124, 99, 126, -16, -21, -53, 9, 123, -32, -38, -62, -113, -48, -103, 26, -20, 87, -81, -121, -25, -125, 80, 97, -62, 46, 17, 39, -101, -66, 2, -83, 73, -37, 34, 8, -65, -55, -21, 89, 54, 61, 97, 100, 20, 106, -54, 126, 7, 20, -23, 26, -9, 35, -100, -22, 66, -107, -112, 15, 26, -103, -82, 102, -5, -110, -119, -78, -14, 26, 74, -38, -52, -59, 41, 71, -30, 101, 44, -65, -116, 51, -62, -58, -90, 56, 106, -32, -29, -110, -66, 40, -101, -100, 33, 32, 114, 19, -53, 25, -12, 24, -37, 62, 52, -52, 100, -65, -4, 92, 122, -85, -101, -107, 62, 41, -79, 109, -89, 78, -115, 119, -123, -84, 9, 13, -123, -43, 108, 80, -126, 18, 27, 5, -104, -88, 110, -75, 96, 6, 30};
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
    msg.setTimeStamp(0.726313441547);
    msg.setSource(6836U);
    msg.setSourceEntity(123U);
    msg.setDestination(467U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.854189719661);
    msg.setSource(36738U);
    msg.setSourceEntity(148U);
    msg.setDestination(41935U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.224966635326);
    msg.setSource(37791U);
    msg.setSourceEntity(68U);
    msg.setDestination(43366U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.00552517641352);
    msg.setSource(28673U);
    msg.setSourceEntity(74U);
    msg.setDestination(46994U);
    msg.setDestinationEntity(102U);
    msg.op = 69U;

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
    msg.setTimeStamp(0.604190810006);
    msg.setSource(41586U);
    msg.setSourceEntity(183U);
    msg.setDestination(26570U);
    msg.setDestinationEntity(46U);
    msg.op = 215U;

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
    msg.setTimeStamp(0.964181490103);
    msg.setSource(35587U);
    msg.setSourceEntity(57U);
    msg.setDestination(19748U);
    msg.setDestinationEntity(38U);
    msg.op = 164U;

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
    msg.setTimeStamp(0.407401165035);
    msg.setSource(28378U);
    msg.setSourceEntity(238U);
    msg.setDestination(61317U);
    msg.setDestinationEntity(101U);
    msg.value = 0.0677444915297;
    msg.confidence = 0.180164512485;
    msg.opmodes.assign("UYNBBZTFOHRLIPWURVJUCBHPMJTEYBALORBDPQXANEPJWRDKDQZZPFLDEMZKVKUTSWCKDCUAGFMNOQWWVOBOAEJXSFCXDPGDIKVGFCFKNNJAZJIXXGJAGRSOTIQIVIGLKPEVOTRTSEGUGIKCWKJDGPZYILMRSNRYEMQZAIOQWJDAESXETCLCXHBBNVQYXIWYTLMHMKOGFSMHUWPVLLZQFUVEHYHHLSNYQRHNUNTQZCJABXMYDVCSAF");

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
    msg.setTimeStamp(0.781825635777);
    msg.setSource(8362U);
    msg.setSourceEntity(65U);
    msg.setDestination(29963U);
    msg.setDestinationEntity(90U);
    msg.value = 0.649803557621;
    msg.confidence = 0.039870937253;
    msg.opmodes.assign("FRLWHQXJMGBYMFSWIYPROYFTXVRADSHNSOHZTQEYDHNAQKWRMUFTPAZWSBWZTVABULIXXSCWCERXXXJOOOLIWJDJKXATVHMUANIAQJLCJQPCZSCEROSENUGIHVDPIIHKFEQMWBGZCGCZENJKFPTPAVYCUROVPLSVHMYBYXZNQUNODUKURIBSNYCCTHZEBFZVKGBJKFKVEKKFRYLVLN");

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
    msg.setTimeStamp(0.638658461777);
    msg.setSource(52410U);
    msg.setSourceEntity(136U);
    msg.setDestination(27651U);
    msg.setDestinationEntity(142U);
    msg.value = 0.0583392848582;
    msg.confidence = 0.00342317327784;
    msg.opmodes.assign("SOXOEWJNFLIUOBPCTDGANRLMVBDEOIISYXKWHBHYKMQQCHLYDNRZFRBCPYJUMGZHEBACYRJDKVVXTNKZUSRSEONFATZJFTOEVLJRCEIXAQWMHXLUGGQPGXKMXYIDBAKDGMCBDPUPFGYAJYCMWBCNHWZOHPYLMUCVFEDYZIXVQGFUNQSSKKFVRPAIFTHBLGNPHOUEDTVGZ");

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
    msg.setTimeStamp(0.597497569018);
    msg.setSource(21151U);
    msg.setSourceEntity(149U);
    msg.setDestination(53808U);
    msg.setDestinationEntity(232U);
    msg.itow = 4153671000U;
    msg.lat = 0.928856904019;
    msg.lon = 0.980217961237;
    msg.height_ell = 0.00703960416284;
    msg.height_sea = 0.435959818469;
    msg.hacc = 0.537842626866;
    msg.vacc = 0.66445260523;
    msg.vel_n = 0.00400982647278;
    msg.vel_e = 0.806395359371;
    msg.vel_d = 0.84541489756;
    msg.speed = 0.35314489401;
    msg.gspeed = 0.255178296074;
    msg.heading = 0.034627461938;
    msg.sacc = 0.200481681504;
    msg.cacc = 0.32830896042;

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
    msg.setTimeStamp(0.0805534324531);
    msg.setSource(59786U);
    msg.setSourceEntity(212U);
    msg.setDestination(51925U);
    msg.setDestinationEntity(107U);
    msg.itow = 1180612988U;
    msg.lat = 0.118815314902;
    msg.lon = 0.944756940588;
    msg.height_ell = 0.940407408718;
    msg.height_sea = 0.276260881863;
    msg.hacc = 0.289126933107;
    msg.vacc = 0.730987226947;
    msg.vel_n = 0.866834304201;
    msg.vel_e = 0.293520670364;
    msg.vel_d = 0.982021885927;
    msg.speed = 0.120487758928;
    msg.gspeed = 0.335041546205;
    msg.heading = 0.0642654446145;
    msg.sacc = 0.73450566639;
    msg.cacc = 0.723449630895;

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
    msg.setTimeStamp(0.979722139302);
    msg.setSource(3636U);
    msg.setSourceEntity(236U);
    msg.setDestination(57570U);
    msg.setDestinationEntity(171U);
    msg.itow = 921576465U;
    msg.lat = 0.691762359324;
    msg.lon = 0.60668598194;
    msg.height_ell = 0.955214117259;
    msg.height_sea = 0.902665985005;
    msg.hacc = 0.715958287735;
    msg.vacc = 0.728066513739;
    msg.vel_n = 0.561940463924;
    msg.vel_e = 0.836325438001;
    msg.vel_d = 0.33846826104;
    msg.speed = 0.191558326358;
    msg.gspeed = 0.0440232701322;
    msg.heading = 0.76275767183;
    msg.sacc = 0.224735268842;
    msg.cacc = 0.35225079665;

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
    msg.setTimeStamp(0.534218763933);
    msg.setSource(63739U);
    msg.setSourceEntity(198U);
    msg.setDestination(18697U);
    msg.setDestinationEntity(141U);
    msg.id = 97U;
    msg.value = 0.884044833951;

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
    msg.setTimeStamp(0.728167787024);
    msg.setSource(60187U);
    msg.setSourceEntity(245U);
    msg.setDestination(52326U);
    msg.setDestinationEntity(191U);
    msg.id = 248U;
    msg.value = 0.90527366482;

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
    msg.setTimeStamp(0.769289670313);
    msg.setSource(64305U);
    msg.setSourceEntity(87U);
    msg.setDestination(9890U);
    msg.setDestinationEntity(95U);
    msg.id = 153U;
    msg.value = 0.118866451464;

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
    msg.setTimeStamp(0.606543289891);
    msg.setSource(18797U);
    msg.setSourceEntity(73U);
    msg.setDestination(15669U);
    msg.setDestinationEntity(203U);
    msg.x = 0.336266754101;
    msg.y = 0.897914466182;
    msg.z = 0.955530755276;
    msg.phi = 0.2038033942;
    msg.theta = 0.742959669145;
    msg.psi = 0.905094141692;

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
    msg.setTimeStamp(0.677496298806);
    msg.setSource(30557U);
    msg.setSourceEntity(151U);
    msg.setDestination(52395U);
    msg.setDestinationEntity(245U);
    msg.x = 0.69067276435;
    msg.y = 0.2313951106;
    msg.z = 0.0765350042862;
    msg.phi = 0.712715531441;
    msg.theta = 0.744773865516;
    msg.psi = 0.826962526755;

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
    msg.setTimeStamp(0.599763272214);
    msg.setSource(21805U);
    msg.setSourceEntity(204U);
    msg.setDestination(54213U);
    msg.setDestinationEntity(197U);
    msg.x = 0.658842171294;
    msg.y = 0.571905753324;
    msg.z = 0.854997401408;
    msg.phi = 0.426426824944;
    msg.theta = 0.924725169047;
    msg.psi = 0.271377774495;

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
    msg.setTimeStamp(0.679518406575);
    msg.setSource(3015U);
    msg.setSourceEntity(244U);
    msg.setDestination(59895U);
    msg.setDestinationEntity(220U);
    msg.beam_width = 0.174143777508;
    msg.beam_height = 0.841239373979;

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
    msg.setTimeStamp(0.292702415929);
    msg.setSource(38971U);
    msg.setSourceEntity(85U);
    msg.setDestination(24360U);
    msg.setDestinationEntity(55U);
    msg.beam_width = 0.143080588887;
    msg.beam_height = 0.906551783462;

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
    msg.setTimeStamp(0.888434170833);
    msg.setSource(59374U);
    msg.setSourceEntity(186U);
    msg.setDestination(50399U);
    msg.setDestinationEntity(224U);
    msg.beam_width = 0.463755547868;
    msg.beam_height = 0.873561524555;

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
    msg.setTimeStamp(0.271774940725);
    msg.setSource(44226U);
    msg.setSourceEntity(7U);
    msg.setDestination(47530U);
    msg.setDestinationEntity(22U);
    msg.sane = 225U;

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
    msg.setTimeStamp(0.73519585299);
    msg.setSource(28095U);
    msg.setSourceEntity(245U);
    msg.setDestination(15439U);
    msg.setDestinationEntity(120U);
    msg.sane = 106U;

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
    msg.setTimeStamp(0.998437918533);
    msg.setSource(8424U);
    msg.setSourceEntity(189U);
    msg.setDestination(30709U);
    msg.setDestinationEntity(112U);
    msg.sane = 196U;

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
    msg.setTimeStamp(0.41522655373);
    msg.setSource(20524U);
    msg.setSourceEntity(20U);
    msg.setDestination(64986U);
    msg.setDestinationEntity(190U);
    msg.value = 0.123185020782;

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
    msg.setTimeStamp(0.596206881738);
    msg.setSource(63434U);
    msg.setSourceEntity(106U);
    msg.setDestination(7675U);
    msg.setDestinationEntity(193U);
    msg.value = 0.771098725035;

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
    msg.setTimeStamp(0.832295344523);
    msg.setSource(32452U);
    msg.setSourceEntity(27U);
    msg.setDestination(14919U);
    msg.setDestinationEntity(248U);
    msg.value = 0.141736804543;

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
    msg.setTimeStamp(0.234313022004);
    msg.setSource(41264U);
    msg.setSourceEntity(11U);
    msg.setDestination(3550U);
    msg.setDestinationEntity(202U);
    msg.value = 0.702701838182;

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
    msg.setTimeStamp(0.410084903004);
    msg.setSource(8144U);
    msg.setSourceEntity(170U);
    msg.setDestination(60943U);
    msg.setDestinationEntity(129U);
    msg.value = 0.572317165802;

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
    msg.setTimeStamp(0.783464414472);
    msg.setSource(40643U);
    msg.setSourceEntity(227U);
    msg.setDestination(37761U);
    msg.setDestinationEntity(230U);
    msg.value = 0.171332089496;

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
    msg.setTimeStamp(0.237215956741);
    msg.setSource(62405U);
    msg.setSourceEntity(20U);
    msg.setDestination(54674U);
    msg.setDestinationEntity(105U);
    msg.value = 0.369831251406;

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
    msg.setTimeStamp(0.237656946405);
    msg.setSource(56062U);
    msg.setSourceEntity(193U);
    msg.setDestination(64712U);
    msg.setDestinationEntity(200U);
    msg.value = 0.505832831671;

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
    msg.setTimeStamp(0.277301194813);
    msg.setSource(51557U);
    msg.setSourceEntity(100U);
    msg.setDestination(22054U);
    msg.setDestinationEntity(65U);
    msg.value = 0.616876929729;

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
    msg.setTimeStamp(0.546513483558);
    msg.setSource(9559U);
    msg.setSourceEntity(130U);
    msg.setDestination(29567U);
    msg.setDestinationEntity(136U);
    msg.value = 0.670194961303;

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
    msg.setTimeStamp(0.67352200496);
    msg.setSource(62813U);
    msg.setSourceEntity(248U);
    msg.setDestination(5311U);
    msg.setDestinationEntity(196U);
    msg.value = 0.695182623962;

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
    msg.setTimeStamp(0.813629979927);
    msg.setSource(20403U);
    msg.setSourceEntity(227U);
    msg.setDestination(24745U);
    msg.setDestinationEntity(17U);
    msg.value = 0.514240903937;

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
    msg.setTimeStamp(0.0332417809222);
    msg.setSource(35529U);
    msg.setSourceEntity(108U);
    msg.setDestination(39331U);
    msg.setDestinationEntity(254U);
    msg.value = 0.861257829208;

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
    msg.setTimeStamp(0.74312957022);
    msg.setSource(31443U);
    msg.setSourceEntity(211U);
    msg.setDestination(62355U);
    msg.setDestinationEntity(95U);
    msg.value = 0.794189909086;

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
    msg.setTimeStamp(0.973982266644);
    msg.setSource(2755U);
    msg.setSourceEntity(179U);
    msg.setDestination(25695U);
    msg.setDestinationEntity(214U);
    msg.value = 0.215062878808;

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
    msg.setTimeStamp(0.887958679642);
    msg.setSource(52197U);
    msg.setSourceEntity(90U);
    msg.setDestination(3889U);
    msg.setDestinationEntity(121U);
    msg.value = 0.469646295779;

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
    msg.setTimeStamp(0.0752935811882);
    msg.setSource(42096U);
    msg.setSourceEntity(82U);
    msg.setDestination(44143U);
    msg.setDestinationEntity(11U);
    msg.value = 0.410601693656;

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
    msg.setTimeStamp(0.49675286884);
    msg.setSource(11954U);
    msg.setSourceEntity(150U);
    msg.setDestination(20647U);
    msg.setDestinationEntity(133U);
    msg.value = 0.41563855318;

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
    msg.setTimeStamp(0.379515027466);
    msg.setSource(1489U);
    msg.setSourceEntity(166U);
    msg.setDestination(63298U);
    msg.setDestinationEntity(138U);
    msg.value = 0.284359215461;

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
    msg.setTimeStamp(0.727735998477);
    msg.setSource(38181U);
    msg.setSourceEntity(64U);
    msg.setDestination(1749U);
    msg.setDestinationEntity(229U);
    msg.value = 0.729769861506;

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
    msg.setTimeStamp(0.181451880124);
    msg.setSource(11453U);
    msg.setSourceEntity(26U);
    msg.setDestination(47091U);
    msg.setDestinationEntity(108U);
    msg.value = 0.499619414834;

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
    msg.setTimeStamp(0.863939697389);
    msg.setSource(41140U);
    msg.setSourceEntity(187U);
    msg.setDestination(49586U);
    msg.setDestinationEntity(65U);
    msg.value = 0.662121524531;

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
    msg.setTimeStamp(0.596908871258);
    msg.setSource(50972U);
    msg.setSourceEntity(22U);
    msg.setDestination(12094U);
    msg.setDestinationEntity(118U);
    msg.value = 0.66637350183;

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
    msg.setTimeStamp(0.786159208846);
    msg.setSource(29814U);
    msg.setSourceEntity(159U);
    msg.setDestination(21846U);
    msg.setDestinationEntity(61U);
    msg.value = 0.237267397427;

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
    msg.setTimeStamp(0.00840495747078);
    msg.setSource(43233U);
    msg.setSourceEntity(169U);
    msg.setDestination(3491U);
    msg.setDestinationEntity(253U);
    msg.validity = 37472U;
    msg.type = 191U;
    msg.tow = 3158713591U;
    msg.base_lat = 0.612670286568;
    msg.base_lon = 0.195386332336;
    msg.base_height = 0.803260639763;
    msg.n = 0.483918920002;
    msg.e = 0.114472961959;
    msg.d = 0.22559968218;
    msg.v_n = 0.320495651525;
    msg.v_e = 0.875471634551;
    msg.v_d = 0.166827082745;
    msg.satellites = 173U;
    msg.iar_hyp = 637U;
    msg.iar_ratio = 0.494877622307;

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
    msg.setTimeStamp(0.965056657473);
    msg.setSource(42003U);
    msg.setSourceEntity(151U);
    msg.setDestination(38581U);
    msg.setDestinationEntity(139U);
    msg.validity = 26894U;
    msg.type = 31U;
    msg.tow = 3886997358U;
    msg.base_lat = 0.0518338407251;
    msg.base_lon = 0.073342912148;
    msg.base_height = 0.898949697989;
    msg.n = 0.534319098803;
    msg.e = 0.935162547053;
    msg.d = 0.364652454817;
    msg.v_n = 0.696293435138;
    msg.v_e = 0.0573317824237;
    msg.v_d = 0.419720302517;
    msg.satellites = 199U;
    msg.iar_hyp = 59685U;
    msg.iar_ratio = 0.379829817944;

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
    msg.setTimeStamp(0.151205037504);
    msg.setSource(61374U);
    msg.setSourceEntity(51U);
    msg.setDestination(48193U);
    msg.setDestinationEntity(190U);
    msg.validity = 44423U;
    msg.type = 28U;
    msg.tow = 2639636911U;
    msg.base_lat = 0.179476391353;
    msg.base_lon = 0.921359916855;
    msg.base_height = 0.587297046613;
    msg.n = 0.83105871328;
    msg.e = 0.154731735642;
    msg.d = 0.934242236838;
    msg.v_n = 0.842815438318;
    msg.v_e = 0.994846282961;
    msg.v_d = 0.435945509142;
    msg.satellites = 87U;
    msg.iar_hyp = 2710U;
    msg.iar_ratio = 0.220255987145;

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
    msg.setTimeStamp(0.343591614293);
    msg.setSource(65398U);
    msg.setSourceEntity(42U);
    msg.setDestination(42974U);
    msg.setDestinationEntity(224U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.797727722663;
    tmp_msg_0.lon = 0.529641365385;
    tmp_msg_0.height = 0.920084923576;
    tmp_msg_0.x = 0.694058931872;
    tmp_msg_0.y = 0.282935068854;
    tmp_msg_0.z = 0.918495438191;
    tmp_msg_0.phi = 0.447509842683;
    tmp_msg_0.theta = 0.448440988626;
    tmp_msg_0.psi = 0.414886305241;
    tmp_msg_0.u = 0.864472195434;
    tmp_msg_0.v = 0.808767934326;
    tmp_msg_0.w = 0.639281528628;
    tmp_msg_0.vx = 0.889625085676;
    tmp_msg_0.vy = 0.607944999849;
    tmp_msg_0.vz = 0.584064960457;
    tmp_msg_0.p = 0.412808348748;
    tmp_msg_0.q = 0.0560940972984;
    tmp_msg_0.r = 0.518386503175;
    tmp_msg_0.depth = 0.122083536569;
    tmp_msg_0.alt = 0.447312532331;
    msg.state.set(tmp_msg_0);
    msg.type = 100U;

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
    msg.setTimeStamp(0.35113733676);
    msg.setSource(8507U);
    msg.setSourceEntity(240U);
    msg.setDestination(55567U);
    msg.setDestinationEntity(164U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.831263338943;
    tmp_msg_0.lon = 0.844427196963;
    tmp_msg_0.height = 0.14038789493;
    tmp_msg_0.x = 0.341278984206;
    tmp_msg_0.y = 0.090952324663;
    tmp_msg_0.z = 0.183298521118;
    tmp_msg_0.phi = 0.500501273912;
    tmp_msg_0.theta = 0.541093690689;
    tmp_msg_0.psi = 0.31293781058;
    tmp_msg_0.u = 0.358194834679;
    tmp_msg_0.v = 0.755465511181;
    tmp_msg_0.w = 0.545366559718;
    tmp_msg_0.vx = 0.965889336606;
    tmp_msg_0.vy = 0.31496995957;
    tmp_msg_0.vz = 0.904315371604;
    tmp_msg_0.p = 0.882561274579;
    tmp_msg_0.q = 0.890632193917;
    tmp_msg_0.r = 0.815451116642;
    tmp_msg_0.depth = 0.494717056945;
    tmp_msg_0.alt = 0.766205291922;
    msg.state.set(tmp_msg_0);
    msg.type = 36U;

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
    msg.setTimeStamp(0.396673491911);
    msg.setSource(32522U);
    msg.setSourceEntity(218U);
    msg.setDestination(1076U);
    msg.setDestinationEntity(219U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.158282711741;
    tmp_msg_0.lon = 0.474996682922;
    tmp_msg_0.height = 0.0207753807695;
    tmp_msg_0.x = 0.622580752741;
    tmp_msg_0.y = 0.376851977031;
    tmp_msg_0.z = 0.80823878539;
    tmp_msg_0.phi = 0.996086729445;
    tmp_msg_0.theta = 0.663949906725;
    tmp_msg_0.psi = 0.79990514002;
    tmp_msg_0.u = 0.930375218017;
    tmp_msg_0.v = 0.110014855905;
    tmp_msg_0.w = 0.000184745548867;
    tmp_msg_0.vx = 0.598305771149;
    tmp_msg_0.vy = 0.0423882301555;
    tmp_msg_0.vz = 0.182312387114;
    tmp_msg_0.p = 0.460804911639;
    tmp_msg_0.q = 0.565763734448;
    tmp_msg_0.r = 0.662134155299;
    tmp_msg_0.depth = 0.670145939987;
    tmp_msg_0.alt = 0.665712535435;
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
    msg.setTimeStamp(0.74585651406);
    msg.setSource(9166U);
    msg.setSourceEntity(251U);
    msg.setDestination(25734U);
    msg.setDestinationEntity(171U);
    msg.value = 0.375942724342;

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
    msg.setTimeStamp(0.840233004295);
    msg.setSource(53294U);
    msg.setSourceEntity(140U);
    msg.setDestination(55853U);
    msg.setDestinationEntity(222U);
    msg.value = 0.177770431937;

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
    msg.setTimeStamp(0.0738590469485);
    msg.setSource(45933U);
    msg.setSourceEntity(101U);
    msg.setDestination(17810U);
    msg.setDestinationEntity(121U);
    msg.value = 0.930908979406;

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
    msg.setTimeStamp(0.615496677685);
    msg.setSource(19684U);
    msg.setSourceEntity(122U);
    msg.setDestination(13115U);
    msg.setDestinationEntity(61U);
    msg.value = 0.365790893717;

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
    msg.setTimeStamp(0.420891153811);
    msg.setSource(13022U);
    msg.setSourceEntity(197U);
    msg.setDestination(7209U);
    msg.setDestinationEntity(32U);
    msg.value = 0.792309501812;

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
    msg.setTimeStamp(0.0609209942815);
    msg.setSource(7146U);
    msg.setSourceEntity(93U);
    msg.setDestination(7537U);
    msg.setDestinationEntity(136U);
    msg.value = 0.4674491858;

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
    msg.setTimeStamp(0.793210386842);
    msg.setSource(41172U);
    msg.setSourceEntity(82U);
    msg.setDestination(13028U);
    msg.setDestinationEntity(187U);
    msg.value = 0.388279925208;

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
    msg.setTimeStamp(0.584413989637);
    msg.setSource(60727U);
    msg.setSourceEntity(1U);
    msg.setDestination(3099U);
    msg.setDestinationEntity(176U);
    msg.value = 0.399816518418;

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
    msg.setTimeStamp(0.459769836491);
    msg.setSource(21043U);
    msg.setSourceEntity(32U);
    msg.setDestination(6215U);
    msg.setDestinationEntity(28U);
    msg.value = 0.33966149853;

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
    msg.setTimeStamp(0.519321145653);
    msg.setSource(38881U);
    msg.setSourceEntity(38U);
    msg.setDestination(9898U);
    msg.setDestinationEntity(158U);
    msg.value = 0.477717847194;

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
    msg.setTimeStamp(0.622287385698);
    msg.setSource(21457U);
    msg.setSourceEntity(230U);
    msg.setDestination(19453U);
    msg.setDestinationEntity(172U);
    msg.value = 0.152943321573;

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
    msg.setTimeStamp(0.101625666522);
    msg.setSource(43974U);
    msg.setSourceEntity(70U);
    msg.setDestination(17089U);
    msg.setDestinationEntity(44U);
    msg.value = 0.403423946158;

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
    msg.setTimeStamp(0.337628870227);
    msg.setSource(14187U);
    msg.setSourceEntity(245U);
    msg.setDestination(17809U);
    msg.setDestinationEntity(69U);
    msg.value = 0.889301626402;

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
    msg.setTimeStamp(0.956523136988);
    msg.setSource(23062U);
    msg.setSourceEntity(246U);
    msg.setDestination(49198U);
    msg.setDestinationEntity(117U);
    msg.value = 0.516439865484;

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
    msg.setTimeStamp(0.385762345661);
    msg.setSource(22535U);
    msg.setSourceEntity(229U);
    msg.setDestination(49383U);
    msg.setDestinationEntity(132U);
    msg.value = 0.202927684613;

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
    msg.setTimeStamp(0.0857924921536);
    msg.setSource(61869U);
    msg.setSourceEntity(192U);
    msg.setDestination(42313U);
    msg.setDestinationEntity(56U);
    msg.id = 226U;
    msg.zoom = 250U;
    msg.action = 11U;

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
    msg.setTimeStamp(0.96223403276);
    msg.setSource(9649U);
    msg.setSourceEntity(115U);
    msg.setDestination(58787U);
    msg.setDestinationEntity(171U);
    msg.id = 239U;
    msg.zoom = 45U;
    msg.action = 26U;

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
    msg.setTimeStamp(0.642774867953);
    msg.setSource(65332U);
    msg.setSourceEntity(14U);
    msg.setDestination(50254U);
    msg.setDestinationEntity(96U);
    msg.id = 120U;
    msg.zoom = 128U;
    msg.action = 86U;

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
    msg.setTimeStamp(0.728094966174);
    msg.setSource(34137U);
    msg.setSourceEntity(113U);
    msg.setDestination(35574U);
    msg.setDestinationEntity(20U);
    msg.id = 226U;
    msg.value = 0.837681624187;

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
    msg.setTimeStamp(0.132969335244);
    msg.setSource(30624U);
    msg.setSourceEntity(84U);
    msg.setDestination(17899U);
    msg.setDestinationEntity(29U);
    msg.id = 254U;
    msg.value = 0.144947745007;

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
    msg.setTimeStamp(0.200815623349);
    msg.setSource(7930U);
    msg.setSourceEntity(53U);
    msg.setDestination(41277U);
    msg.setDestinationEntity(136U);
    msg.id = 251U;
    msg.value = 0.489975326597;

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
    msg.setTimeStamp(0.00954880059418);
    msg.setSource(44290U);
    msg.setSourceEntity(172U);
    msg.setDestination(52208U);
    msg.setDestinationEntity(97U);
    msg.id = 96U;
    msg.value = 0.181494746737;

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
    msg.setTimeStamp(0.550554026989);
    msg.setSource(37205U);
    msg.setSourceEntity(86U);
    msg.setDestination(22466U);
    msg.setDestinationEntity(181U);
    msg.id = 193U;
    msg.value = 0.298907809539;

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
    msg.setTimeStamp(0.761566613145);
    msg.setSource(12960U);
    msg.setSourceEntity(198U);
    msg.setDestination(39822U);
    msg.setDestinationEntity(216U);
    msg.id = 105U;
    msg.value = 0.461457077106;

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
    msg.setTimeStamp(0.793628348012);
    msg.setSource(6970U);
    msg.setSourceEntity(152U);
    msg.setDestination(31755U);
    msg.setDestinationEntity(224U);
    msg.id = 78U;
    msg.angle = 0.194903444338;

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
    msg.setTimeStamp(0.342430044358);
    msg.setSource(24566U);
    msg.setSourceEntity(15U);
    msg.setDestination(65258U);
    msg.setDestinationEntity(207U);
    msg.id = 144U;
    msg.angle = 0.468728495103;

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
    msg.setTimeStamp(0.735457493903);
    msg.setSource(11912U);
    msg.setSourceEntity(221U);
    msg.setDestination(14938U);
    msg.setDestinationEntity(251U);
    msg.id = 133U;
    msg.angle = 0.0183741290296;

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
    msg.setTimeStamp(0.617653253465);
    msg.setSource(31658U);
    msg.setSourceEntity(129U);
    msg.setDestination(13214U);
    msg.setDestinationEntity(254U);
    msg.op = 49U;
    msg.actions.assign("XIRESXPFAWARRRFLTNCVGMWNYFTLFSIQHQESZNKLNAKVWIUJPDLYUJOISTFUZEKHGHYHOTNBGAONNKVCFANHFBFMIYLYQWJULAZWYAOUXETOLXQXVCIRECZUXVWRYRHXCAPBWEGQHQTTIMCQQNLMHDTDIPPETIUKNBCGMGHXPKZMOWXOMSKGBJSSFJOSDCVEVSHZYPGJXODSABJDR");

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
    msg.setTimeStamp(0.580156134413);
    msg.setSource(63213U);
    msg.setSourceEntity(73U);
    msg.setDestination(7904U);
    msg.setDestinationEntity(0U);
    msg.op = 54U;
    msg.actions.assign("YMQOCFXRMOFAQRXQDVWGKZSSMSYPSBMXWHJZFAZZTAHYBXBLP");

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
    msg.setTimeStamp(0.802517299775);
    msg.setSource(38215U);
    msg.setSourceEntity(183U);
    msg.setDestination(48484U);
    msg.setDestinationEntity(186U);
    msg.op = 111U;
    msg.actions.assign("PKDNMIVHGUNNQFKWJWYLTPBQWOGQSCZDUEDDBAOQRZBU");

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
    msg.setTimeStamp(0.173736846159);
    msg.setSource(65157U);
    msg.setSourceEntity(107U);
    msg.setDestination(26200U);
    msg.setDestinationEntity(18U);
    msg.actions.assign("POFYLNKWCVERZWSZTNCBJPUAJQKCWTRTGWFCDTCAFRQLIVRTHUDQZGXJSUHQIAAYPLCXBFIQWIAKHJBRUAMGAWYWFJPIDTWLJXKIZZOBXKNZTGHKCEVBNKMFBUUDPYGIRSTAXINOHMHDHNEBUOSVXLQVEJSJMVGFGMQLFRXFBHYUJEOLDPZNETOXZCVIYPLEPRXQEMPYTLXYAKRDVANFYQSZMIRCEWSMHKPD");

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
    msg.setTimeStamp(0.265593284351);
    msg.setSource(61050U);
    msg.setSourceEntity(171U);
    msg.setDestination(64214U);
    msg.setDestinationEntity(248U);
    msg.actions.assign("IEBLXEXALTKLKHCGKWJQGYIUOODUNUPQBWPSPVJVHYSGUYDHOKWAPGUCPUGMAKYOZXHRDYPMXZCBELSZHJHATYCFVDLOQRCVADJREIIAFONXKNEJOVZYPMTOZWKGBNAXUVQWVEMANYHXNLZRWLQJBREZQBGOEMFHIWRUTYKATXDMPMBQGRCPNTFOTCSVHWIZLDKLSMFJVAGJDQNITIQHSDFYFVUPSBSXEMNKIQRRLJSRJCMFNBFZI");

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
    msg.setTimeStamp(0.731380508104);
    msg.setSource(63566U);
    msg.setSourceEntity(118U);
    msg.setDestination(15040U);
    msg.setDestinationEntity(187U);
    msg.actions.assign("JUQVVOFUGLULSEJVGEGBMLDMPPQCDLTVFTFWBNWVTNXGKQMCQWNAHDOTBLTRLXRMAIEDNXBOEHEYGLXENJLSOBZOISKFAFZOORCMJRDFNCCNHVGVCMMUIASIYPOUEBGTHHTSSUYBNDUHZPYLFFPYKSIZBJKGHPNKVKZRXJPYFCZUCJAXSRJXEWMOQWIVIEIIMQIPLCKQKOWQTF");

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
    msg.setTimeStamp(0.583219549908);
    msg.setSource(16183U);
    msg.setSourceEntity(106U);
    msg.setDestination(21135U);
    msg.setDestinationEntity(214U);
    msg.button = 211U;
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
    msg.setTimeStamp(0.311626987406);
    msg.setSource(8088U);
    msg.setSourceEntity(31U);
    msg.setDestination(53231U);
    msg.setDestinationEntity(212U);
    msg.button = 167U;
    msg.value = 193U;

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
    msg.setTimeStamp(0.646187196799);
    msg.setSource(27518U);
    msg.setSourceEntity(34U);
    msg.setDestination(24329U);
    msg.setDestinationEntity(112U);
    msg.button = 199U;
    msg.value = 128U;

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
    msg.setTimeStamp(0.32213657466);
    msg.setSource(52631U);
    msg.setSourceEntity(98U);
    msg.setDestination(38772U);
    msg.setDestinationEntity(95U);
    msg.op = 211U;
    msg.text.assign("OXGZKWLXBYSTJK");

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
    msg.setTimeStamp(0.900548202051);
    msg.setSource(2286U);
    msg.setSourceEntity(105U);
    msg.setDestination(25076U);
    msg.setDestinationEntity(8U);
    msg.op = 198U;
    msg.text.assign("IZYODMXPNUKZOUCZALPPDDCHOBLWMSXDVAFLALGPHQBBSXKBQMIQVZHHZUAKL");

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
    msg.setTimeStamp(0.689311925634);
    msg.setSource(38190U);
    msg.setSourceEntity(251U);
    msg.setDestination(22395U);
    msg.setDestinationEntity(7U);
    msg.op = 174U;
    msg.text.assign("WKNWQHFDNJDQDYMRDRLPRZFMLDVCETNVFSLJKQTLREPKLEVAYAMONYYMUJPKQZSCRUJJGOWXTA");

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
    msg.setTimeStamp(0.180760832208);
    msg.setSource(18909U);
    msg.setSourceEntity(176U);
    msg.setDestination(2615U);
    msg.setDestinationEntity(234U);
    msg.op = 179U;
    msg.time_remain = 0.530314356222;
    msg.sched_time = 0.895248388468;

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
    msg.setTimeStamp(0.369848573193);
    msg.setSource(28780U);
    msg.setSourceEntity(50U);
    msg.setDestination(33751U);
    msg.setDestinationEntity(193U);
    msg.op = 65U;
    msg.time_remain = 0.576379613816;
    msg.sched_time = 0.255791476887;

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
    msg.setTimeStamp(0.0557016480182);
    msg.setSource(9632U);
    msg.setSourceEntity(91U);
    msg.setDestination(20106U);
    msg.setDestinationEntity(222U);
    msg.op = 30U;
    msg.time_remain = 0.954623605046;
    msg.sched_time = 0.245219108086;

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
    msg.setTimeStamp(0.656934225889);
    msg.setSource(25668U);
    msg.setSourceEntity(157U);
    msg.setDestination(23420U);
    msg.setDestinationEntity(101U);
    msg.name.assign("PJYVRRYJWSPTTOUGERLZZKWUDHNZQFXXBAXOTPBTGBMVLNFZAEHNDGKVDXCJMCKRSZPOHBXIUXISHSPMBXYIFAUQEGYLASGQSJKZOWCKCZHFBPVEOLOCIHMYJVYOSRJVBAYIEXGDVFOLTQFVKAKMCCXSHGIDEUFDLT");
    msg.op = 231U;
    msg.sched_time = 0.83002924154;

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
    msg.setTimeStamp(0.0731580308864);
    msg.setSource(5418U);
    msg.setSourceEntity(0U);
    msg.setDestination(19730U);
    msg.setDestinationEntity(186U);
    msg.name.assign("IEWQNURLHKVVWXZLQHLNTPTNHDVKKGZOSZDMWXIIRJNXE");
    msg.op = 96U;
    msg.sched_time = 0.906878798995;

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
    msg.setTimeStamp(0.381462127354);
    msg.setSource(27260U);
    msg.setSourceEntity(96U);
    msg.setDestination(55967U);
    msg.setDestinationEntity(117U);
    msg.name.assign("YVTWMUAIKOGRIZOZBVAZLQMPPUAWVYIZOQWFCPMYVJXGATFYGESDHCRZBTIVXRSWPCJTAOFQEVKNWNHPOMLGHLHEBYTCAXFQQZGHLQDZUIUEABISRQIZXKQPPNJJBNJMVMVRDQRSPOPDVNTHNEXKMOKWRTITUILRWHLBFFNLKQWBEYSXFBGCRNSJSGMTHYDAFMDRBUUJACKUXOYKCSOKEJGYDDWSCEXGGENHLFBSKYWDTCEZ");
    msg.op = 57U;
    msg.sched_time = 0.0271369071257;

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
    msg.setTimeStamp(0.0580122090504);
    msg.setSource(6735U);
    msg.setSourceEntity(152U);
    msg.setDestination(32955U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.728302778909);
    msg.setSource(14312U);
    msg.setSourceEntity(176U);
    msg.setDestination(35935U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.656323076972);
    msg.setSource(14968U);
    msg.setSourceEntity(150U);
    msg.setDestination(18210U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.864606727216);
    msg.setSource(40614U);
    msg.setSourceEntity(184U);
    msg.setDestination(4161U);
    msg.setDestinationEntity(142U);
    msg.name.assign("VWYNUDYOPLUFRTAHTEIANTWYUSZTHWVQYTXXKXDLVEKMGHDQJAGKEBGGVCPSOGDHCSBZHHSYZSGISZONANKSLVIBJGHNIQBXZFSERUCIZN");
    msg.state = 13U;

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
    msg.setTimeStamp(0.861915913908);
    msg.setSource(50319U);
    msg.setSourceEntity(71U);
    msg.setDestination(28930U);
    msg.setDestinationEntity(233U);
    msg.name.assign("FDSJBQCVHGPRSGFVXUTTWACLYIZPBUDVAGJCCYNCARRWGRZFEBFOCSWOZUAHFMOPQINNOZMPQDQWKKZUYGYALYJXREMOBTCIMWOSRDNPAIFMBIWBOQUIQMBELUSKCKSXUMHIYEVIWHKPKJSQVDQCHTETVPGRNNPSFJGRXLADGCGJLTBVZNYVEIWLEBKJYVOYFLUXDHGEHDHXLYHADETPXKNMKQJWXXXVTLSBNRTNUDSZULTAMZPZQAOIFRMEW");
    msg.state = 186U;

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
    msg.setTimeStamp(0.0919688422699);
    msg.setSource(26354U);
    msg.setSourceEntity(47U);
    msg.setDestination(26537U);
    msg.setDestinationEntity(55U);
    msg.name.assign("ABCSDCNEXSVKIAJMVMTLUQVUSDCUHBQDZHYMRJQRINLNTIEPCCENDASQIMLPAJWNXRHYPYUGKRHSJLEXYHGYWCYYGKJFOZWIQEZKQSCBKTOQBUNCWBMJQGVQEGIYXMMNRBFLRBJZGZQFLKWOFCCFZJADFKPVDWIOOGUVTVZHJATUXPFXPGAKTGZS");
    msg.state = 77U;

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
    msg.setTimeStamp(0.84683407177);
    msg.setSource(53622U);
    msg.setSourceEntity(13U);
    msg.setDestination(11212U);
    msg.setDestinationEntity(245U);
    msg.name.assign("HTSBKXUYBVVKPVFZXDBBWEQPLOUJCGSKMDPBWQSOJDWWREOLZEQJZLSWHENGZDCBZKOPAWJOLTPJXQHOKUTGCIIASRFLTVQYJFCEDOILQTAFJMFKRAYIRNGXAJGVUPMQCELPTICAJBRNQXEBNWQMTUSCKVRVBIRZHDUBVPWLYWDRFSDV");
    msg.value = 238U;

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
    msg.setTimeStamp(0.892706233126);
    msg.setSource(56467U);
    msg.setSourceEntity(236U);
    msg.setDestination(32000U);
    msg.setDestinationEntity(189U);
    msg.name.assign("INLRQWMFXQNEAWZVBRPFJNUHZVVXLYMCLCCKHDZDTGBQRTOAFAJUQTBRPCEAIYDKTWZAJLGNDLFXIZKE");
    msg.value = 58U;

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
    msg.setTimeStamp(0.128911808932);
    msg.setSource(1222U);
    msg.setSourceEntity(30U);
    msg.setDestination(37287U);
    msg.setDestinationEntity(74U);
    msg.name.assign("HWDSBEEHZNLCZRDQOPXZUVBMMYGCUIZPVZOPT");
    msg.value = 37U;

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
    msg.setTimeStamp(0.188113927906);
    msg.setSource(42446U);
    msg.setSourceEntity(182U);
    msg.setDestination(44690U);
    msg.setDestinationEntity(243U);
    msg.name.assign("IFSMAAXBUBQKCCPXQTTSIDEOXHKZHILCYLNVCWTGIUEUVRPJFSGNLIBAZUWPJNESLSOLGNXXQXWTBFWRDIYPJIEHDRFKEPZYCSLKZUKKHQURDWVMZROCVDNVPKVPGSZKGLUTCHGRYGMHX");

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
    msg.setTimeStamp(0.541425924651);
    msg.setSource(1491U);
    msg.setSourceEntity(71U);
    msg.setDestination(9789U);
    msg.setDestinationEntity(170U);
    msg.name.assign("PJHPODVZIACXPDLTHBZEHLTVQXOHNPKNLHZOTOWCKMWEUIFNTKQSZXKFXNZQODMYIDWZVMGQJCTUXIKIBTVCHNBGVMUYYJSNTVAVFAB");

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
    msg.setTimeStamp(0.0347275663196);
    msg.setSource(19455U);
    msg.setSourceEntity(230U);
    msg.setDestination(49475U);
    msg.setDestinationEntity(44U);
    msg.name.assign("KTOMRHNPBNSOIZEZPPQAQRZQXFSTLSGZWHXKHGPK");

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
    msg.setTimeStamp(0.833200768132);
    msg.setSource(17789U);
    msg.setSourceEntity(167U);
    msg.setDestination(25422U);
    msg.setDestinationEntity(86U);
    msg.name.assign("IAUXICAHAOQDMQEMQUFSDXPFCLEVHFBFFIDKIQRAATOZZTRBFZHJZFLQWGUJQ");
    msg.value = 155U;

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
    msg.setTimeStamp(0.663206817345);
    msg.setSource(37375U);
    msg.setSourceEntity(162U);
    msg.setDestination(24110U);
    msg.setDestinationEntity(16U);
    msg.name.assign("VWMVCJRJHPRTCKBXDIWXWRCQPJEXSYMTJTZUFBXHETHGS");
    msg.value = 202U;

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
    msg.setTimeStamp(0.675550960884);
    msg.setSource(8772U);
    msg.setSourceEntity(182U);
    msg.setDestination(58839U);
    msg.setDestinationEntity(100U);
    msg.name.assign("MTFXEJAMQZUYGKGJUWIRHYVGTAXKVFYECRYALWGJIPNPGRKUAVOVRGAOHUTSKZXMOGAPETTVKYXJBPZFABKXDMNI");
    msg.value = 169U;

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
    msg.setTimeStamp(0.0507324562121);
    msg.setSource(2557U);
    msg.setSourceEntity(147U);
    msg.setDestination(65116U);
    msg.setDestinationEntity(40U);
    msg.id = 171U;
    msg.period = 487237795U;
    msg.duty_cycle = 4166374451U;

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
    msg.setTimeStamp(0.157666025903);
    msg.setSource(18991U);
    msg.setSourceEntity(141U);
    msg.setDestination(13626U);
    msg.setDestinationEntity(84U);
    msg.id = 127U;
    msg.period = 1340719732U;
    msg.duty_cycle = 3195911933U;

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
    msg.setTimeStamp(0.920067915617);
    msg.setSource(50367U);
    msg.setSourceEntity(67U);
    msg.setDestination(14791U);
    msg.setDestinationEntity(246U);
    msg.id = 11U;
    msg.period = 1881967998U;
    msg.duty_cycle = 2160838892U;

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
    msg.setTimeStamp(0.469869321243);
    msg.setSource(20685U);
    msg.setSourceEntity(139U);
    msg.setDestination(5938U);
    msg.setDestinationEntity(155U);
    msg.id = 127U;
    msg.period = 3157476731U;
    msg.duty_cycle = 1670968833U;

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
    msg.setTimeStamp(0.265308661204);
    msg.setSource(29040U);
    msg.setSourceEntity(94U);
    msg.setDestination(38775U);
    msg.setDestinationEntity(93U);
    msg.id = 109U;
    msg.period = 358409836U;
    msg.duty_cycle = 3977012797U;

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
    msg.setTimeStamp(0.629939790159);
    msg.setSource(59044U);
    msg.setSourceEntity(74U);
    msg.setDestination(55182U);
    msg.setDestinationEntity(200U);
    msg.id = 167U;
    msg.period = 2775130966U;
    msg.duty_cycle = 282088983U;

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
    msg.setTimeStamp(0.582894455221);
    msg.setSource(11835U);
    msg.setSourceEntity(217U);
    msg.setDestination(30474U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.752273972009;
    msg.lon = 0.41545254925;
    msg.height = 0.38742605872;
    msg.x = 0.822900963296;
    msg.y = 0.243386981916;
    msg.z = 0.767049354866;
    msg.phi = 0.523248885319;
    msg.theta = 0.444778026904;
    msg.psi = 0.0411012822786;
    msg.u = 0.518339642144;
    msg.v = 0.27747837121;
    msg.w = 0.393909618315;
    msg.vx = 0.151886578428;
    msg.vy = 0.580550255182;
    msg.vz = 0.49688110519;
    msg.p = 0.550178981097;
    msg.q = 0.547849301751;
    msg.r = 0.60527094094;
    msg.depth = 0.777373440519;
    msg.alt = 0.0856454766602;

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
    msg.setTimeStamp(0.587343400707);
    msg.setSource(33522U);
    msg.setSourceEntity(173U);
    msg.setDestination(43301U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.323822941585;
    msg.lon = 0.33094691978;
    msg.height = 0.54248516251;
    msg.x = 0.000718156300954;
    msg.y = 0.897674115699;
    msg.z = 0.418447559179;
    msg.phi = 0.945373640871;
    msg.theta = 0.0372891435615;
    msg.psi = 0.160812202721;
    msg.u = 0.521609653753;
    msg.v = 0.0192538941544;
    msg.w = 0.791513825847;
    msg.vx = 0.334692124018;
    msg.vy = 0.818252378343;
    msg.vz = 0.870582909598;
    msg.p = 0.0532046082114;
    msg.q = 0.766033428242;
    msg.r = 0.0831916025094;
    msg.depth = 0.819993694513;
    msg.alt = 0.848478826399;

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
    msg.setTimeStamp(0.0537582502992);
    msg.setSource(11718U);
    msg.setSourceEntity(77U);
    msg.setDestination(51759U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.675863033883;
    msg.lon = 0.280067013051;
    msg.height = 0.371396656707;
    msg.x = 0.529234768216;
    msg.y = 0.645221878518;
    msg.z = 0.66412644779;
    msg.phi = 0.858572613046;
    msg.theta = 0.0630265358798;
    msg.psi = 0.575738759228;
    msg.u = 0.948144754556;
    msg.v = 0.819705314678;
    msg.w = 0.0577968145497;
    msg.vx = 0.653357453464;
    msg.vy = 0.534111886831;
    msg.vz = 0.793067417329;
    msg.p = 0.964610512148;
    msg.q = 0.400085806486;
    msg.r = 0.968302891273;
    msg.depth = 0.738699031326;
    msg.alt = 0.838535580054;

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
    msg.setTimeStamp(0.957445376738);
    msg.setSource(59854U);
    msg.setSourceEntity(121U);
    msg.setDestination(42137U);
    msg.setDestinationEntity(116U);
    msg.x = 0.762242609709;
    msg.y = 0.524682872993;
    msg.z = 0.699661506821;

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
    msg.setTimeStamp(0.579314590601);
    msg.setSource(38858U);
    msg.setSourceEntity(129U);
    msg.setDestination(47984U);
    msg.setDestinationEntity(46U);
    msg.x = 0.285248434936;
    msg.y = 0.176576571486;
    msg.z = 0.00165662909824;

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
    msg.setTimeStamp(0.417582402064);
    msg.setSource(49663U);
    msg.setSourceEntity(109U);
    msg.setDestination(9153U);
    msg.setDestinationEntity(225U);
    msg.x = 0.0467559972058;
    msg.y = 0.407179145821;
    msg.z = 0.67787539354;

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
    msg.setTimeStamp(0.630280579684);
    msg.setSource(52546U);
    msg.setSourceEntity(227U);
    msg.setDestination(61916U);
    msg.setDestinationEntity(237U);
    msg.value = 0.819774089736;

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
    msg.setTimeStamp(0.343948752674);
    msg.setSource(3363U);
    msg.setSourceEntity(44U);
    msg.setDestination(63250U);
    msg.setDestinationEntity(38U);
    msg.value = 0.978651419111;

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
    msg.setTimeStamp(0.537417765096);
    msg.setSource(53133U);
    msg.setSourceEntity(7U);
    msg.setDestination(4948U);
    msg.setDestinationEntity(243U);
    msg.value = 0.996232883365;

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
    msg.setTimeStamp(0.982421833913);
    msg.setSource(49467U);
    msg.setSourceEntity(97U);
    msg.setDestination(9946U);
    msg.setDestinationEntity(190U);
    msg.value = 0.0217864144256;

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
    msg.setTimeStamp(0.879913879598);
    msg.setSource(51580U);
    msg.setSourceEntity(3U);
    msg.setDestination(43323U);
    msg.setDestinationEntity(250U);
    msg.value = 0.693430905215;

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
    msg.setTimeStamp(0.62310353425);
    msg.setSource(53604U);
    msg.setSourceEntity(43U);
    msg.setDestination(62185U);
    msg.setDestinationEntity(164U);
    msg.value = 0.94370873982;

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
    msg.setTimeStamp(0.19090587049);
    msg.setSource(41966U);
    msg.setSourceEntity(155U);
    msg.setDestination(63093U);
    msg.setDestinationEntity(149U);
    msg.x = 0.185009554059;
    msg.y = 0.812918614465;
    msg.z = 0.521008677563;
    msg.phi = 0.873710021118;
    msg.theta = 0.777657852439;
    msg.psi = 0.38993618096;
    msg.p = 0.292442997033;
    msg.q = 0.614998793544;
    msg.r = 0.622128626074;
    msg.u = 0.89798823124;
    msg.v = 0.501445475456;
    msg.w = 0.376681269206;
    msg.bias_psi = 0.198886438601;
    msg.bias_r = 0.0321199856249;

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
    msg.setTimeStamp(0.128168270911);
    msg.setSource(44032U);
    msg.setSourceEntity(43U);
    msg.setDestination(39088U);
    msg.setDestinationEntity(129U);
    msg.x = 0.394759952422;
    msg.y = 0.719373796775;
    msg.z = 0.801587705382;
    msg.phi = 0.34943238166;
    msg.theta = 0.369994605452;
    msg.psi = 0.953113661135;
    msg.p = 0.621379019439;
    msg.q = 0.885674452176;
    msg.r = 0.113453372454;
    msg.u = 0.610293482863;
    msg.v = 0.923885956618;
    msg.w = 0.394022163836;
    msg.bias_psi = 0.171256934412;
    msg.bias_r = 0.530512988643;

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
    msg.setTimeStamp(0.412004864337);
    msg.setSource(37505U);
    msg.setSourceEntity(160U);
    msg.setDestination(52271U);
    msg.setDestinationEntity(217U);
    msg.x = 0.425493170189;
    msg.y = 0.980547019832;
    msg.z = 0.151868325929;
    msg.phi = 0.390469248866;
    msg.theta = 0.421820643549;
    msg.psi = 0.695191551443;
    msg.p = 0.516733494794;
    msg.q = 0.462532113344;
    msg.r = 0.0608005971798;
    msg.u = 0.563915423588;
    msg.v = 0.935325246692;
    msg.w = 0.953580093817;
    msg.bias_psi = 0.428616352052;
    msg.bias_r = 0.787299983985;

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
    msg.setTimeStamp(0.0694175256604);
    msg.setSource(33206U);
    msg.setSourceEntity(78U);
    msg.setDestination(61377U);
    msg.setDestinationEntity(158U);
    msg.bias_psi = 0.381370122391;
    msg.bias_r = 0.514507707575;
    msg.cog = 0.407726417557;
    msg.cyaw = 0.65763712125;
    msg.gps_rej_level = 0.278330546378;
    msg.lbl_rej_level = 0.56322645974;
    msg.custom_x = 0.0981819652118;
    msg.custom_y = 0.205330931888;
    msg.custom_z = 0.870298863075;

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
    msg.setTimeStamp(0.992885389352);
    msg.setSource(60806U);
    msg.setSourceEntity(249U);
    msg.setDestination(49813U);
    msg.setDestinationEntity(186U);
    msg.bias_psi = 0.0257972219694;
    msg.bias_r = 0.181046534596;
    msg.cog = 0.0257498290137;
    msg.cyaw = 0.397865764535;
    msg.gps_rej_level = 0.800944914527;
    msg.lbl_rej_level = 0.669177727916;
    msg.custom_x = 0.598291039903;
    msg.custom_y = 0.902644016759;
    msg.custom_z = 0.869155795125;

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
    msg.setTimeStamp(0.431035355768);
    msg.setSource(53756U);
    msg.setSourceEntity(96U);
    msg.setDestination(50490U);
    msg.setDestinationEntity(178U);
    msg.bias_psi = 0.738279448807;
    msg.bias_r = 0.0819829883262;
    msg.cog = 0.591999045898;
    msg.cyaw = 0.790671705815;
    msg.gps_rej_level = 0.576966929261;
    msg.lbl_rej_level = 0.593989666127;
    msg.custom_x = 0.37501213551;
    msg.custom_y = 0.94492430789;
    msg.custom_z = 0.820980642595;

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
    msg.setTimeStamp(0.550388172806);
    msg.setSource(39279U);
    msg.setSourceEntity(82U);
    msg.setDestination(17967U);
    msg.setDestinationEntity(113U);
    msg.utc_time = 0.0413967896547;
    msg.reason = 173U;

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
    msg.setTimeStamp(0.189891522006);
    msg.setSource(36560U);
    msg.setSourceEntity(98U);
    msg.setDestination(13612U);
    msg.setDestinationEntity(101U);
    msg.utc_time = 0.0703564441986;
    msg.reason = 246U;

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
    msg.setTimeStamp(0.636370320144);
    msg.setSource(4107U);
    msg.setSourceEntity(183U);
    msg.setDestination(12834U);
    msg.setDestinationEntity(194U);
    msg.utc_time = 0.749449927802;
    msg.reason = 191U;

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
    msg.setTimeStamp(0.524683159721);
    msg.setSource(12258U);
    msg.setSourceEntity(185U);
    msg.setDestination(12662U);
    msg.setDestinationEntity(153U);
    msg.id = 177U;
    msg.range = 0.068983474489;
    msg.acceptance = 45U;

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
    msg.setTimeStamp(0.965048062064);
    msg.setSource(10626U);
    msg.setSourceEntity(227U);
    msg.setDestination(44072U);
    msg.setDestinationEntity(66U);
    msg.id = 32U;
    msg.range = 0.0859986407382;
    msg.acceptance = 155U;

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
    msg.setTimeStamp(0.0886007635878);
    msg.setSource(53446U);
    msg.setSourceEntity(91U);
    msg.setDestination(34226U);
    msg.setDestinationEntity(196U);
    msg.id = 164U;
    msg.range = 0.373352249146;
    msg.acceptance = 240U;

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
    msg.setTimeStamp(0.627055233357);
    msg.setSource(5967U);
    msg.setSourceEntity(128U);
    msg.setDestination(18729U);
    msg.setDestinationEntity(39U);
    msg.type = 145U;
    msg.reason = 201U;
    msg.value = 0.882061191056;
    msg.timestep = 0.765451604039;

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
    msg.setTimeStamp(0.652164548085);
    msg.setSource(618U);
    msg.setSourceEntity(123U);
    msg.setDestination(18218U);
    msg.setDestinationEntity(247U);
    msg.type = 216U;
    msg.reason = 235U;
    msg.value = 0.862548716346;
    msg.timestep = 0.637319918574;

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
    msg.setTimeStamp(0.933484585916);
    msg.setSource(45276U);
    msg.setSourceEntity(104U);
    msg.setDestination(53118U);
    msg.setDestinationEntity(53U);
    msg.type = 121U;
    msg.reason = 32U;
    msg.value = 0.0327986359743;
    msg.timestep = 0.507410851873;

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
    msg.setTimeStamp(0.256459017483);
    msg.setSource(49263U);
    msg.setSourceEntity(94U);
    msg.setDestination(18579U);
    msg.setDestinationEntity(235U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CNIUVWMIVZRPVHPSWYRAFNNMQBYFIKUYPVJNMDHDSMDLQGQILHMCZNTTFAVXCAKARXTLGBMEYHBOVFCLPJZRIREMZYRJXADZWKKTTSVBKUCOONQJRZAENQHGRFCEZWPJJDAFOFQHXGLCURFSQHLPKGDLFLVKGBYBINSRCVSNKXWKAYTWUMSLZLEYBEXTQSUJQUDFBWENCBESTIBPPPUMXOSUOZXQYZDOGHJKGWEMDXDIAIXAWJUHIEWOPJO");
    tmp_msg_0.lat = 0.807752780872;
    tmp_msg_0.lon = 0.520180457869;
    tmp_msg_0.depth = 0.571191600021;
    tmp_msg_0.query_channel = 200U;
    tmp_msg_0.reply_channel = 129U;
    tmp_msg_0.transponder_delay = 109U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.361318111421;
    msg.y = 0.804325315416;
    msg.var_x = 0.278376625083;
    msg.var_y = 0.172393542421;
    msg.distance = 0.569189342197;

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
    msg.setTimeStamp(0.44748295694);
    msg.setSource(20671U);
    msg.setSourceEntity(218U);
    msg.setDestination(39559U);
    msg.setDestinationEntity(100U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ULIIEYNGHQHQDAXHFERCUWBSLNDKBEHTOURHLUTHTHJRPIFPNFFRPAKDANIFOOWO");
    tmp_msg_0.lat = 0.77014113946;
    tmp_msg_0.lon = 0.378702841702;
    tmp_msg_0.depth = 0.204652948486;
    tmp_msg_0.query_channel = 11U;
    tmp_msg_0.reply_channel = 1U;
    tmp_msg_0.transponder_delay = 146U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.143456964383;
    msg.y = 0.593541809931;
    msg.var_x = 0.356428486985;
    msg.var_y = 0.482644550768;
    msg.distance = 0.273529804555;

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
    msg.setTimeStamp(0.64156514969);
    msg.setSource(28779U);
    msg.setSourceEntity(207U);
    msg.setDestination(40336U);
    msg.setDestinationEntity(152U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VIVOVFQSBFYGJFJTRLUPPHDLHRBXSIBLQLJJZMSECFZYWVSSCMKRDNWPOEABZYGGNQQYLXGJAHKIKHIWZMKUFODWEXJEUCODARWPATZBXGIRZFNLYQICF");
    tmp_msg_0.lat = 0.060689845179;
    tmp_msg_0.lon = 0.629243031121;
    tmp_msg_0.depth = 0.806341628494;
    tmp_msg_0.query_channel = 199U;
    tmp_msg_0.reply_channel = 79U;
    tmp_msg_0.transponder_delay = 209U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.762170630723;
    msg.y = 0.551135806974;
    msg.var_x = 0.667558708091;
    msg.var_y = 0.372224933811;
    msg.distance = 0.990352629639;

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
    msg.setTimeStamp(0.308601805269);
    msg.setSource(14799U);
    msg.setSourceEntity(230U);
    msg.setDestination(9196U);
    msg.setDestinationEntity(208U);
    msg.state = 216U;

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
    msg.setTimeStamp(0.489529998783);
    msg.setSource(28905U);
    msg.setSourceEntity(70U);
    msg.setDestination(11035U);
    msg.setDestinationEntity(10U);
    msg.state = 234U;

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
    msg.setTimeStamp(0.825050115795);
    msg.setSource(3447U);
    msg.setSourceEntity(186U);
    msg.setDestination(54378U);
    msg.setDestinationEntity(48U);
    msg.state = 46U;

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
    msg.setTimeStamp(0.218022214411);
    msg.setSource(26336U);
    msg.setSourceEntity(108U);
    msg.setDestination(56047U);
    msg.setDestinationEntity(74U);
    msg.x = 0.0013578098466;
    msg.y = 0.372424183411;
    msg.z = 0.367159165725;

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
    msg.setTimeStamp(0.485244551019);
    msg.setSource(15765U);
    msg.setSourceEntity(202U);
    msg.setDestination(59833U);
    msg.setDestinationEntity(30U);
    msg.x = 0.482302779902;
    msg.y = 0.0623215098742;
    msg.z = 0.447931277853;

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
    msg.setTimeStamp(0.472910619035);
    msg.setSource(9550U);
    msg.setSourceEntity(98U);
    msg.setDestination(41952U);
    msg.setDestinationEntity(28U);
    msg.x = 0.87239927756;
    msg.y = 0.256929702246;
    msg.z = 0.00321206156949;

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
    msg.setTimeStamp(0.630858113999);
    msg.setSource(47493U);
    msg.setSourceEntity(5U);
    msg.setDestination(14728U);
    msg.setDestinationEntity(149U);
    msg.va = 0.128480757245;
    msg.aoa = 0.831052668523;
    msg.ssa = 0.125358755411;

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
    msg.setTimeStamp(0.555943735184);
    msg.setSource(46809U);
    msg.setSourceEntity(182U);
    msg.setDestination(25089U);
    msg.setDestinationEntity(244U);
    msg.va = 0.657809995384;
    msg.aoa = 0.617431780117;
    msg.ssa = 0.927740107392;

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
    msg.setTimeStamp(0.19238898477);
    msg.setSource(58905U);
    msg.setSourceEntity(243U);
    msg.setDestination(27763U);
    msg.setDestinationEntity(114U);
    msg.va = 0.256738085096;
    msg.aoa = 0.642223017746;
    msg.ssa = 0.0418808566953;

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
    msg.setTimeStamp(0.655842868781);
    msg.setSource(23574U);
    msg.setSourceEntity(211U);
    msg.setDestination(3266U);
    msg.setDestinationEntity(158U);
    msg.value = 0.791628189314;
    msg.off = 0.631205668321;

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
    msg.setTimeStamp(0.697803867242);
    msg.setSource(19140U);
    msg.setSourceEntity(142U);
    msg.setDestination(9388U);
    msg.setDestinationEntity(46U);
    msg.value = 0.332858175059;
    msg.off = 0.648180947405;

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
    msg.setTimeStamp(0.392461443171);
    msg.setSource(1946U);
    msg.setSourceEntity(2U);
    msg.setDestination(29314U);
    msg.setDestinationEntity(251U);
    msg.value = 0.893017359653;
    msg.off = 0.363865667432;

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
    msg.setTimeStamp(0.397556084449);
    msg.setSource(43410U);
    msg.setSourceEntity(227U);
    msg.setDestination(15744U);
    msg.setDestinationEntity(36U);
    msg.value = 0.827918463137;
    msg.z_units = 234U;

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
    msg.setTimeStamp(0.69705993561);
    msg.setSource(26691U);
    msg.setSourceEntity(207U);
    msg.setDestination(4587U);
    msg.setDestinationEntity(6U);
    msg.value = 0.14981556985;
    msg.z_units = 73U;

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
    msg.setTimeStamp(0.632902083679);
    msg.setSource(2845U);
    msg.setSourceEntity(168U);
    msg.setDestination(12497U);
    msg.setDestinationEntity(194U);
    msg.value = 0.536638157537;
    msg.z_units = 55U;

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
    msg.setTimeStamp(0.526337818961);
    msg.setSource(25243U);
    msg.setSourceEntity(127U);
    msg.setDestination(5708U);
    msg.setDestinationEntity(21U);
    msg.value = 0.200911567449;
    msg.speed_units = 79U;

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
    msg.setTimeStamp(0.613181098474);
    msg.setSource(48160U);
    msg.setSourceEntity(192U);
    msg.setDestination(64477U);
    msg.setDestinationEntity(196U);
    msg.value = 0.329646374103;
    msg.speed_units = 9U;

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
    msg.setTimeStamp(0.872381132855);
    msg.setSource(64936U);
    msg.setSourceEntity(35U);
    msg.setDestination(46863U);
    msg.setDestinationEntity(236U);
    msg.value = 0.0780560665997;
    msg.speed_units = 120U;

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
    msg.setTimeStamp(0.552165445206);
    msg.setSource(22225U);
    msg.setSourceEntity(79U);
    msg.setDestination(58524U);
    msg.setDestinationEntity(251U);
    msg.value = 0.15324926872;

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
    msg.setTimeStamp(0.623335040701);
    msg.setSource(50911U);
    msg.setSourceEntity(21U);
    msg.setDestination(13065U);
    msg.setDestinationEntity(167U);
    msg.value = 0.918024564425;

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
    msg.setTimeStamp(0.962127701821);
    msg.setSource(4380U);
    msg.setSourceEntity(205U);
    msg.setDestination(35046U);
    msg.setDestinationEntity(104U);
    msg.value = 0.0778941785419;

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
    msg.setTimeStamp(0.040676379564);
    msg.setSource(10443U);
    msg.setSourceEntity(148U);
    msg.setDestination(48483U);
    msg.setDestinationEntity(212U);
    msg.value = 0.24669701599;

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
    msg.setTimeStamp(0.0947190636273);
    msg.setSource(43225U);
    msg.setSourceEntity(91U);
    msg.setDestination(29495U);
    msg.setDestinationEntity(228U);
    msg.value = 0.0429760752985;

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
    msg.setTimeStamp(0.380547002996);
    msg.setSource(2233U);
    msg.setSourceEntity(245U);
    msg.setDestination(27267U);
    msg.setDestinationEntity(139U);
    msg.value = 0.233281697167;

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
    msg.setTimeStamp(0.674048151222);
    msg.setSource(41119U);
    msg.setSourceEntity(221U);
    msg.setDestination(41075U);
    msg.setDestinationEntity(240U);
    msg.value = 0.320305579492;

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
    msg.setTimeStamp(0.6289469318);
    msg.setSource(35051U);
    msg.setSourceEntity(161U);
    msg.setDestination(15301U);
    msg.setDestinationEntity(202U);
    msg.value = 0.197675640544;

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
    msg.setTimeStamp(0.389430802772);
    msg.setSource(15174U);
    msg.setSourceEntity(101U);
    msg.setDestination(8612U);
    msg.setDestinationEntity(61U);
    msg.value = 0.516534900199;

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
    msg.setTimeStamp(0.852908638559);
    msg.setSource(36754U);
    msg.setSourceEntity(159U);
    msg.setDestination(49581U);
    msg.setDestinationEntity(116U);
    msg.path_ref = 2534080380U;
    msg.start_lat = 0.205483822963;
    msg.start_lon = 0.229843358815;
    msg.start_z = 0.0091124137422;
    msg.start_z_units = 212U;
    msg.end_lat = 0.0403354611641;
    msg.end_lon = 0.762647640856;
    msg.end_z = 0.589495036251;
    msg.end_z_units = 223U;
    msg.speed = 0.475034985068;
    msg.speed_units = 243U;
    msg.lradius = 0.463221832454;
    msg.flags = 31U;

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
    msg.setTimeStamp(0.625483822683);
    msg.setSource(19824U);
    msg.setSourceEntity(185U);
    msg.setDestination(45539U);
    msg.setDestinationEntity(191U);
    msg.path_ref = 480531961U;
    msg.start_lat = 0.393882234628;
    msg.start_lon = 0.270956928175;
    msg.start_z = 0.994471588929;
    msg.start_z_units = 60U;
    msg.end_lat = 0.429467519618;
    msg.end_lon = 0.243612295718;
    msg.end_z = 0.907429761446;
    msg.end_z_units = 43U;
    msg.speed = 0.86043799775;
    msg.speed_units = 128U;
    msg.lradius = 0.881984938118;
    msg.flags = 5U;

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
    msg.setTimeStamp(0.429744243378);
    msg.setSource(10857U);
    msg.setSourceEntity(66U);
    msg.setDestination(42813U);
    msg.setDestinationEntity(197U);
    msg.path_ref = 1008810666U;
    msg.start_lat = 0.184747904437;
    msg.start_lon = 0.418212965269;
    msg.start_z = 0.579348407573;
    msg.start_z_units = 53U;
    msg.end_lat = 0.952411544755;
    msg.end_lon = 0.229705391997;
    msg.end_z = 0.0455828508857;
    msg.end_z_units = 36U;
    msg.speed = 0.0579731850814;
    msg.speed_units = 119U;
    msg.lradius = 0.541240421677;
    msg.flags = 75U;

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
    msg.setTimeStamp(0.465444972491);
    msg.setSource(22684U);
    msg.setSourceEntity(150U);
    msg.setDestination(25042U);
    msg.setDestinationEntity(215U);
    msg.x = 0.796285701183;
    msg.y = 0.0898075187201;
    msg.z = 0.28769246086;
    msg.k = 0.0753131348337;
    msg.m = 0.855129670195;
    msg.n = 0.344706371589;
    msg.flags = 93U;

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
    msg.setTimeStamp(0.306936725578);
    msg.setSource(16049U);
    msg.setSourceEntity(239U);
    msg.setDestination(12209U);
    msg.setDestinationEntity(118U);
    msg.x = 0.897135325619;
    msg.y = 0.57227693293;
    msg.z = 0.522521820682;
    msg.k = 0.578535123682;
    msg.m = 0.914036659256;
    msg.n = 0.744186609193;
    msg.flags = 80U;

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
    msg.setTimeStamp(0.140797048058);
    msg.setSource(28394U);
    msg.setSourceEntity(206U);
    msg.setDestination(18432U);
    msg.setDestinationEntity(169U);
    msg.x = 0.716472149976;
    msg.y = 0.458366932184;
    msg.z = 0.563829601693;
    msg.k = 0.309692321642;
    msg.m = 0.31873788027;
    msg.n = 0.774030524743;
    msg.flags = 233U;

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
    msg.setTimeStamp(0.00399406852144);
    msg.setSource(44442U);
    msg.setSourceEntity(194U);
    msg.setDestination(24943U);
    msg.setDestinationEntity(23U);
    msg.value = 0.632154819688;

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
    msg.setTimeStamp(0.575480352143);
    msg.setSource(17484U);
    msg.setSourceEntity(20U);
    msg.setDestination(20857U);
    msg.setDestinationEntity(190U);
    msg.value = 0.621100578934;

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
    msg.setTimeStamp(0.222643777851);
    msg.setSource(11066U);
    msg.setSourceEntity(127U);
    msg.setDestination(62713U);
    msg.setDestinationEntity(98U);
    msg.value = 0.501743971491;

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
    msg.setTimeStamp(0.212360121018);
    msg.setSource(29696U);
    msg.setSourceEntity(93U);
    msg.setDestination(15314U);
    msg.setDestinationEntity(221U);
    msg.u = 0.889683437485;
    msg.v = 0.146727121558;
    msg.w = 0.816642159036;
    msg.p = 0.0829290116298;
    msg.q = 0.772993741804;
    msg.r = 0.956286083756;
    msg.flags = 164U;

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
    msg.setTimeStamp(0.260451663275);
    msg.setSource(15970U);
    msg.setSourceEntity(241U);
    msg.setDestination(32549U);
    msg.setDestinationEntity(46U);
    msg.u = 0.446156411784;
    msg.v = 0.794386894779;
    msg.w = 0.00478723777175;
    msg.p = 0.949272124337;
    msg.q = 0.727366275656;
    msg.r = 0.488370057941;
    msg.flags = 68U;

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
    msg.setTimeStamp(0.152742283529);
    msg.setSource(64480U);
    msg.setSourceEntity(227U);
    msg.setDestination(35107U);
    msg.setDestinationEntity(154U);
    msg.u = 0.410150750532;
    msg.v = 0.0576717005364;
    msg.w = 0.936425281406;
    msg.p = 0.903487336832;
    msg.q = 0.54258389441;
    msg.r = 0.876213394834;
    msg.flags = 245U;

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
    msg.setTimeStamp(0.716440954145);
    msg.setSource(63457U);
    msg.setSourceEntity(243U);
    msg.setDestination(35599U);
    msg.setDestinationEntity(52U);
    msg.path_ref = 4117863981U;
    msg.start_lat = 0.874134947193;
    msg.start_lon = 0.417784689092;
    msg.start_z = 0.655996078962;
    msg.start_z_units = 24U;
    msg.end_lat = 0.247221038347;
    msg.end_lon = 0.173733125529;
    msg.end_z = 0.803488222061;
    msg.end_z_units = 153U;
    msg.lradius = 0.650984213746;
    msg.flags = 187U;
    msg.x = 0.407463276272;
    msg.y = 0.677505089883;
    msg.z = 0.378665529836;
    msg.vx = 0.961802684614;
    msg.vy = 0.553088287761;
    msg.vz = 0.623245718666;
    msg.course_error = 0.601652200807;
    msg.eta = 36707U;

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
    msg.setTimeStamp(0.856516942125);
    msg.setSource(1325U);
    msg.setSourceEntity(106U);
    msg.setDestination(2960U);
    msg.setDestinationEntity(212U);
    msg.path_ref = 1046527555U;
    msg.start_lat = 0.460721447073;
    msg.start_lon = 0.73131068407;
    msg.start_z = 0.420948028807;
    msg.start_z_units = 83U;
    msg.end_lat = 0.671608635301;
    msg.end_lon = 0.610294166491;
    msg.end_z = 0.948943465392;
    msg.end_z_units = 201U;
    msg.lradius = 0.932554756514;
    msg.flags = 120U;
    msg.x = 0.923770153051;
    msg.y = 0.0677708006333;
    msg.z = 0.584693870837;
    msg.vx = 0.484125963067;
    msg.vy = 0.267012256023;
    msg.vz = 0.598083769399;
    msg.course_error = 0.951131133567;
    msg.eta = 12760U;

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
    msg.setTimeStamp(0.897590104263);
    msg.setSource(30309U);
    msg.setSourceEntity(56U);
    msg.setDestination(30009U);
    msg.setDestinationEntity(38U);
    msg.path_ref = 2236382158U;
    msg.start_lat = 0.799814212754;
    msg.start_lon = 0.992140349909;
    msg.start_z = 0.433877877448;
    msg.start_z_units = 237U;
    msg.end_lat = 0.237691099945;
    msg.end_lon = 0.812481515305;
    msg.end_z = 0.931350088942;
    msg.end_z_units = 226U;
    msg.lradius = 0.642753393369;
    msg.flags = 225U;
    msg.x = 0.710642667477;
    msg.y = 0.990656413805;
    msg.z = 0.672102594202;
    msg.vx = 0.35216206235;
    msg.vy = 0.205327321562;
    msg.vz = 0.961513758872;
    msg.course_error = 0.153792883611;
    msg.eta = 51250U;

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
    msg.setTimeStamp(0.273401308769);
    msg.setSource(63353U);
    msg.setSourceEntity(82U);
    msg.setDestination(46892U);
    msg.setDestinationEntity(234U);
    msg.k = 0.308900646558;
    msg.m = 0.476699543919;
    msg.n = 0.739632227326;

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
    msg.setTimeStamp(0.513875035857);
    msg.setSource(70U);
    msg.setSourceEntity(196U);
    msg.setDestination(51653U);
    msg.setDestinationEntity(162U);
    msg.k = 0.731714888876;
    msg.m = 0.798916943977;
    msg.n = 0.265792203379;

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
    msg.setTimeStamp(0.736636580674);
    msg.setSource(32279U);
    msg.setSourceEntity(107U);
    msg.setDestination(64120U);
    msg.setDestinationEntity(179U);
    msg.k = 0.264566303454;
    msg.m = 0.437321009057;
    msg.n = 0.460232725141;

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
    msg.setTimeStamp(0.500473126397);
    msg.setSource(24913U);
    msg.setSourceEntity(165U);
    msg.setDestination(5851U);
    msg.setDestinationEntity(161U);
    msg.p = 0.378906758263;
    msg.i = 7.12004555173e-05;
    msg.d = 0.876696715547;
    msg.a = 0.85801718327;

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
    msg.setTimeStamp(0.935219889074);
    msg.setSource(34479U);
    msg.setSourceEntity(13U);
    msg.setDestination(57722U);
    msg.setDestinationEntity(108U);
    msg.p = 0.195773194392;
    msg.i = 0.215039941169;
    msg.d = 0.0649053429968;
    msg.a = 0.0170050276163;

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
    msg.setTimeStamp(0.205301961362);
    msg.setSource(30130U);
    msg.setSourceEntity(252U);
    msg.setDestination(12232U);
    msg.setDestinationEntity(218U);
    msg.p = 0.0144863887688;
    msg.i = 0.667476528983;
    msg.d = 0.93023607379;
    msg.a = 0.475700238158;

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
    msg.setTimeStamp(0.185038060493);
    msg.setSource(25115U);
    msg.setSourceEntity(131U);
    msg.setDestination(18412U);
    msg.setDestinationEntity(124U);
    msg.op = 66U;

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
    msg.setTimeStamp(0.819316483261);
    msg.setSource(59132U);
    msg.setSourceEntity(81U);
    msg.setDestination(13439U);
    msg.setDestinationEntity(72U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.0455813440459);
    msg.setSource(55556U);
    msg.setSourceEntity(165U);
    msg.setDestination(188U);
    msg.setDestinationEntity(56U);
    msg.op = 99U;

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
    msg.setTimeStamp(0.981408993281);
    msg.setSource(26147U);
    msg.setSourceEntity(243U);
    msg.setDestination(9620U);
    msg.setDestinationEntity(184U);
    msg.x = 0.426642588637;
    msg.y = 0.00131205352042;
    msg.z = 0.636470946464;
    msg.vx = 0.0515558423558;
    msg.vy = 0.192064079362;
    msg.vz = 0.424175319818;
    msg.ax = 0.713313072606;
    msg.ay = 0.559241816106;
    msg.az = 0.294340665645;
    msg.flags = 19836U;

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
    msg.setTimeStamp(0.378313894248);
    msg.setSource(30783U);
    msg.setSourceEntity(162U);
    msg.setDestination(27575U);
    msg.setDestinationEntity(77U);
    msg.x = 0.356978693423;
    msg.y = 0.347578567948;
    msg.z = 0.413536420434;
    msg.vx = 0.668136435988;
    msg.vy = 0.857570814048;
    msg.vz = 0.481847674312;
    msg.ax = 0.995527919994;
    msg.ay = 0.302880604476;
    msg.az = 0.0652619894378;
    msg.flags = 19459U;

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
    msg.setTimeStamp(0.831006622035);
    msg.setSource(61840U);
    msg.setSourceEntity(226U);
    msg.setDestination(52328U);
    msg.setDestinationEntity(144U);
    msg.x = 0.308217131272;
    msg.y = 0.403856778404;
    msg.z = 0.924525301397;
    msg.vx = 0.607389814807;
    msg.vy = 0.681583265869;
    msg.vz = 0.725125817948;
    msg.ax = 0.580284694058;
    msg.ay = 0.715688436791;
    msg.az = 0.985252203156;
    msg.flags = 31477U;

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
    msg.setTimeStamp(0.643852899036);
    msg.setSource(62294U);
    msg.setSourceEntity(42U);
    msg.setDestination(25803U);
    msg.setDestinationEntity(126U);
    msg.value = 0.127307029207;

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
    msg.setTimeStamp(0.588188557938);
    msg.setSource(26764U);
    msg.setSourceEntity(88U);
    msg.setDestination(945U);
    msg.setDestinationEntity(195U);
    msg.value = 0.120435850726;

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
    msg.setTimeStamp(0.880420633944);
    msg.setSource(38215U);
    msg.setSourceEntity(46U);
    msg.setDestination(13787U);
    msg.setDestinationEntity(11U);
    msg.value = 0.345318409448;

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
    msg.setTimeStamp(0.372472043256);
    msg.setSource(10613U);
    msg.setSourceEntity(111U);
    msg.setDestination(14723U);
    msg.setDestinationEntity(109U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 4022049235U;
    tmp_msg_0.start_lat = 0.807462202108;
    tmp_msg_0.start_lon = 0.171913018063;
    tmp_msg_0.start_z = 0.820213503524;
    tmp_msg_0.start_z_units = 104U;
    tmp_msg_0.end_lat = 0.117257957249;
    tmp_msg_0.end_lon = 0.30550524442;
    tmp_msg_0.end_z = 0.620686033844;
    tmp_msg_0.end_z_units = 132U;
    tmp_msg_0.speed = 0.143050611134;
    tmp_msg_0.speed_units = 139U;
    tmp_msg_0.lradius = 0.747978736687;
    tmp_msg_0.flags = 75U;
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
    msg.setTimeStamp(0.794286313776);
    msg.setSource(60330U);
    msg.setSourceEntity(204U);
    msg.setDestination(65110U);
    msg.setDestinationEntity(70U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2256010347U;
    tmp_msg_0.start_lat = 0.370603993745;
    tmp_msg_0.start_lon = 0.516963324936;
    tmp_msg_0.start_z = 0.0960309658571;
    tmp_msg_0.start_z_units = 130U;
    tmp_msg_0.end_lat = 0.533949086417;
    tmp_msg_0.end_lon = 0.499176972481;
    tmp_msg_0.end_z = 0.52502804963;
    tmp_msg_0.end_z_units = 68U;
    tmp_msg_0.speed = 0.969843137923;
    tmp_msg_0.speed_units = 232U;
    tmp_msg_0.lradius = 0.0481731054425;
    tmp_msg_0.flags = 238U;
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
    msg.setTimeStamp(0.637706970237);
    msg.setSource(45994U);
    msg.setSourceEntity(104U);
    msg.setDestination(21521U);
    msg.setDestinationEntity(10U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 4255163310U;
    tmp_msg_0.start_lat = 0.102105706581;
    tmp_msg_0.start_lon = 0.0827009440527;
    tmp_msg_0.start_z = 0.967079131839;
    tmp_msg_0.start_z_units = 146U;
    tmp_msg_0.end_lat = 0.164587866985;
    tmp_msg_0.end_lon = 0.388518452479;
    tmp_msg_0.end_z = 0.511683244308;
    tmp_msg_0.end_z_units = 245U;
    tmp_msg_0.speed = 0.487573492003;
    tmp_msg_0.speed_units = 167U;
    tmp_msg_0.lradius = 0.802216798248;
    tmp_msg_0.flags = 56U;
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
    msg.setTimeStamp(0.518457439307);
    msg.setSource(39486U);
    msg.setSourceEntity(93U);
    msg.setDestination(39041U);
    msg.setDestinationEntity(125U);
    msg.timeout = 1693U;
    msg.lat = 0.546377845461;
    msg.lon = 0.0116086006057;
    msg.z = 0.952100667873;
    msg.z_units = 45U;
    msg.speed = 0.830297373223;
    msg.speed_units = 100U;
    msg.roll = 0.717587513738;
    msg.pitch = 0.15544576613;
    msg.yaw = 0.427093825174;
    msg.custom.assign("DDRUNKMELQLUDBDAAOTXCFQHJETBCUPOFVDGAVXHJXNZJBQLGGZOPIRTCXZQDZPDKAMNJIKCNVMZRDZFKLRFBJMWOKJIJLQCZSPEWYTYIROATFAASUWOXVBBJSHROZLLWXYSHXCEVPSBGSMIVRKFCQHEUTSAFIQPELHCLSNEWYEGAYIPGO");

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
    msg.setTimeStamp(0.260868831224);
    msg.setSource(61413U);
    msg.setSourceEntity(218U);
    msg.setDestination(13570U);
    msg.setDestinationEntity(189U);
    msg.timeout = 9183U;
    msg.lat = 0.452988870687;
    msg.lon = 0.548703035429;
    msg.z = 0.305580212053;
    msg.z_units = 2U;
    msg.speed = 0.349415893201;
    msg.speed_units = 105U;
    msg.roll = 0.726295809904;
    msg.pitch = 0.115452762716;
    msg.yaw = 0.385123575488;
    msg.custom.assign("TXHDLIIUUEZOPHLNBLPDOFRQAXYOKTYTMNVVKLFPIXQNFAQLHIDGPNFRZOTUGCZVVNKSGEHNRSKOJSWZBIQQYOAKMIUPIUCMRFINCJO");

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
    msg.setTimeStamp(0.679134456275);
    msg.setSource(22549U);
    msg.setSourceEntity(194U);
    msg.setDestination(58864U);
    msg.setDestinationEntity(23U);
    msg.timeout = 45960U;
    msg.lat = 0.329041519625;
    msg.lon = 0.402422134139;
    msg.z = 0.723459288306;
    msg.z_units = 0U;
    msg.speed = 0.135527928735;
    msg.speed_units = 181U;
    msg.roll = 0.992412630929;
    msg.pitch = 0.931598323527;
    msg.yaw = 0.946688580979;
    msg.custom.assign("MWWKHNEWCQMOYMLARAJGACCIIHZFYGSXAMCQVSQPJQDNUZFDRDHOPDAUMNNOTVZNJKJGHZIQILCURQLIOGLFRWTGCLEDHKOQMYCGXPGQTXMRNTKHJBZNXWPWJOASTBMYEDPBIVVXOW");

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
    msg.setTimeStamp(0.332279007793);
    msg.setSource(5678U);
    msg.setSourceEntity(70U);
    msg.setDestination(52772U);
    msg.setDestinationEntity(185U);
    msg.timeout = 24283U;
    msg.lat = 0.310185164639;
    msg.lon = 0.95825540915;
    msg.z = 0.673518352726;
    msg.z_units = 137U;
    msg.speed = 0.584404954016;
    msg.speed_units = 158U;
    msg.duration = 10505U;
    msg.radius = 0.216726243827;
    msg.flags = 112U;
    msg.custom.assign("QXXYRFIGHDPYHSKTMATNYVKNAHJJHPLHMOCPLMNLETHRJGWJEBDQONGAWIEEWTLAAHFPADVLOWXUHUYDFOJIDODKOGCYEYSODRQPPXLXLQMRSIRMNTBTWPKIYMZHUCZOWNIXLZPCXRUGKGEAEVKLWZIFIQTXPUFMCZFJDVDUZRBJBUVGGPKQABLCBYICXE");

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
    msg.setTimeStamp(0.7751914325);
    msg.setSource(54010U);
    msg.setSourceEntity(222U);
    msg.setDestination(48241U);
    msg.setDestinationEntity(195U);
    msg.timeout = 27907U;
    msg.lat = 0.943285112975;
    msg.lon = 0.571356346045;
    msg.z = 0.935939577036;
    msg.z_units = 158U;
    msg.speed = 0.321973019227;
    msg.speed_units = 9U;
    msg.duration = 41509U;
    msg.radius = 0.658164766835;
    msg.flags = 53U;
    msg.custom.assign("HVOHBYKJWHQUCHRYHPHWLDVJXVLKLRQPXPOTAJWDJFGEXJIVOJNNVXPXLTMDSQXPNPQFKUTHVFHVUNBDBUAVOAYMVDRSACXBZKKOOEDKWSBOABTIAZDQCQUTUURLYNILFMEKCTGAPGJPFBYUQYS");

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
    msg.setTimeStamp(0.177215558118);
    msg.setSource(43604U);
    msg.setSourceEntity(22U);
    msg.setDestination(44171U);
    msg.setDestinationEntity(207U);
    msg.timeout = 16630U;
    msg.lat = 0.890717199713;
    msg.lon = 0.481440006904;
    msg.z = 0.790053806107;
    msg.z_units = 171U;
    msg.speed = 0.141160339263;
    msg.speed_units = 215U;
    msg.duration = 43685U;
    msg.radius = 0.726457288999;
    msg.flags = 107U;
    msg.custom.assign("EAECOGCZQUCRDTXK");

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
    msg.setTimeStamp(0.601819078249);
    msg.setSource(16327U);
    msg.setSourceEntity(23U);
    msg.setDestination(28923U);
    msg.setDestinationEntity(104U);
    msg.custom.assign("EPFGUAJDHFIEUMGSFZISXQCPPCSYFKWYWUDTO");

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
    msg.setTimeStamp(0.794134085196);
    msg.setSource(49243U);
    msg.setSourceEntity(251U);
    msg.setDestination(64772U);
    msg.setDestinationEntity(246U);
    msg.custom.assign("RGFTMXTRWGNDULDHZIYSBYVHTRCIDUKIKICMPNUDBRJJDSBMVTXZIUPYFTMRXNFUEOUHHBXZANGHZBQKSGNWVRLWPLZAMOPHVQQJBDLM");

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
    msg.setTimeStamp(0.958284260303);
    msg.setSource(25426U);
    msg.setSourceEntity(234U);
    msg.setDestination(55342U);
    msg.setDestinationEntity(239U);
    msg.custom.assign("YNAGGSFNMWOXRFUDSCDYZOEVBWVBHETMSAMUXLBMVY");

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
    msg.setTimeStamp(0.527558782547);
    msg.setSource(12134U);
    msg.setSourceEntity(224U);
    msg.setDestination(49616U);
    msg.setDestinationEntity(238U);
    msg.timeout = 29091U;
    msg.lat = 0.321497674402;
    msg.lon = 0.734317326104;
    msg.z = 0.376635831582;
    msg.z_units = 81U;
    msg.duration = 36511U;
    msg.speed = 0.225924630734;
    msg.speed_units = 152U;
    msg.type = 188U;
    msg.radius = 0.675547163027;
    msg.length = 0.356807795332;
    msg.bearing = 0.334132870029;
    msg.direction = 209U;
    msg.custom.assign("IWVWIOXSLCFMRWRNETPAUGNGJYUIKYTNMTFZGVEYIUJSMGNJTEODSWAATIUPJGWFUMFJBZUGCVHTGBHEACFCEJPXAFAPNJSYYRZSSQWCCNPHDUOOKKDADPYCLURNMPPDWMMNQSKONCXXFHRLZDVYCGHJIEGJBDBNLRWOBVQMMXRAFACEXAWVDKXHODTQYFEOBBDVOWQSRMKQSXGREUQ");

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
    msg.setTimeStamp(0.435361887494);
    msg.setSource(29880U);
    msg.setSourceEntity(128U);
    msg.setDestination(23396U);
    msg.setDestinationEntity(140U);
    msg.timeout = 33112U;
    msg.lat = 0.528965618594;
    msg.lon = 0.39918670612;
    msg.z = 0.264808969465;
    msg.z_units = 48U;
    msg.duration = 1003U;
    msg.speed = 0.0677857431446;
    msg.speed_units = 244U;
    msg.type = 241U;
    msg.radius = 0.992954289123;
    msg.length = 0.00126078434852;
    msg.bearing = 0.283506572272;
    msg.direction = 19U;
    msg.custom.assign("DTFIMXBRTDLXZZGNMDQUYWMMDDQNLRHLJFRYEBCYFMRVZIQMZPWYXXWCUGRKVJLVKL");

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
    msg.setTimeStamp(0.507521539683);
    msg.setSource(11349U);
    msg.setSourceEntity(16U);
    msg.setDestination(58967U);
    msg.setDestinationEntity(119U);
    msg.timeout = 38621U;
    msg.lat = 0.889311362251;
    msg.lon = 0.175839947236;
    msg.z = 0.357013958732;
    msg.z_units = 225U;
    msg.duration = 30263U;
    msg.speed = 0.559125744475;
    msg.speed_units = 52U;
    msg.type = 152U;
    msg.radius = 0.780822310169;
    msg.length = 0.124839525311;
    msg.bearing = 0.42920237757;
    msg.direction = 226U;
    msg.custom.assign("ZOBTHREVOZQMQKMOCDXGBBFHDBTEWWBXFPQMWIXMZQGMCGGOUIALLKBJKJONRSXYAEXRUNEXRJTBOFTOXCUNSJSGQITBDVPRIIDPKACIWDFRVYAPWHTHAWVYSQOWDRCJUGAVSFFFOBHHPDJMGZLZAJM");

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
    msg.setTimeStamp(0.0495664598508);
    msg.setSource(51530U);
    msg.setSourceEntity(69U);
    msg.setDestination(42515U);
    msg.setDestinationEntity(183U);
    msg.duration = 33132U;
    msg.custom.assign("RSBYFFLZDLXNILPLPPIOUTXNKFMEHNLMIWZFMKFQYRTOUWWVCSTAMKOVFOGGKMAAEWSGCAOUMRXLCXHEREURZGBJJFBETRMEPLFEGJHYZINNODUHQDDINDANT");

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
    msg.setTimeStamp(0.215720595364);
    msg.setSource(62975U);
    msg.setSourceEntity(91U);
    msg.setDestination(13966U);
    msg.setDestinationEntity(238U);
    msg.duration = 36612U;
    msg.custom.assign("DLBZBWLGCWJMOSLVUDGWDNFNCYWYTVURCFPLZHAYWHJQAMAMJRSVZTLHAGGXUBVVHGZSEKIHHUWGOCGZYTSUQXQEMNMKFETRSQE");

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
    msg.setTimeStamp(0.318829852016);
    msg.setSource(63536U);
    msg.setSourceEntity(216U);
    msg.setDestination(46573U);
    msg.setDestinationEntity(98U);
    msg.duration = 8431U;
    msg.custom.assign("PHJKYCIBAJAIDMKQTZVYCTFMVMRKULWORFNTFPIIXKIKFVCJXWXPBHPUYUOXHQWZGXXUGFJJZLEOYNQNEHMLBOZTEKTPVBAUCYHPFMGSS");

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
    msg.setTimeStamp(0.184690028487);
    msg.setSource(14178U);
    msg.setSourceEntity(226U);
    msg.setDestination(37341U);
    msg.setDestinationEntity(109U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.113174156998;
    msg.control.set(tmp_msg_0);
    msg.duration = 52684U;
    msg.custom.assign("LXPLAAXNHXMNVQLGOOQSVXEVQIYIKKZYIWZODICYIFTZUPKTOZUQAJZGWNNZLBVEEVLLEOAZOKMDEFXXPPLTCGXGTHTJQWUWKESKHBFWPNCBJTPHCMTYDSMVASOLYPISQJFGCYHNHDODUYRHBVFRWPWXQABJCXEFERPLHJGSRIRCFZMZJTSMARGBLDYSMUQCDBUURSIUAVDJHVVGYDSWBTCZTNNNOKCMHNJMBBWRERIWJEGFFQQFOIRADGU");

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
    msg.setTimeStamp(0.134915570509);
    msg.setSource(27304U);
    msg.setSourceEntity(163U);
    msg.setDestination(19931U);
    msg.setDestinationEntity(54U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 486283623U;
    tmp_msg_0.start_lat = 0.760438246308;
    tmp_msg_0.start_lon = 0.0307890688939;
    tmp_msg_0.start_z = 0.0669738920144;
    tmp_msg_0.start_z_units = 145U;
    tmp_msg_0.end_lat = 0.906195731717;
    tmp_msg_0.end_lon = 0.266219533607;
    tmp_msg_0.end_z = 0.48695772328;
    tmp_msg_0.end_z_units = 119U;
    tmp_msg_0.speed = 0.500522262928;
    tmp_msg_0.speed_units = 2U;
    tmp_msg_0.lradius = 0.0867089914251;
    tmp_msg_0.flags = 152U;
    msg.control.set(tmp_msg_0);
    msg.duration = 51178U;
    msg.custom.assign("HAJGTVSSDSWQVCHKOLWOXDYBFCOZPFBBZQKYQXNTJKFLKZNCLXPTZRXJVCDBPWFGYUROFIHSPLHUEJYWISQGDMSKHURCZUMYWKZSXAXVLGHQACARAVYZJYRJPUBYLCJIMSZEPNSTCMXWJPRFQMIAIDVXEXA");

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
    msg.setTimeStamp(0.71880652356);
    msg.setSource(55254U);
    msg.setSourceEntity(52U);
    msg.setDestination(30204U);
    msg.setDestinationEntity(96U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.49386716463;
    tmp_msg_0.speed_units = 211U;
    msg.control.set(tmp_msg_0);
    msg.duration = 58461U;
    msg.custom.assign("IBEHGDKQBBUBLFKRRMOYSHZMCUFXXUOCHZCFHRJMRCNCZEYWJGLDQQGWZDWMMYVECNSRMWFGNKZDLVIHWVXBXCQUFKNQUXSYRYPDISISRKSYYLOBEDZERLCISAGJYIDPIKBAHFXPQSHKCEOFUGVKRQIOTLWYXONTWMRVZPNMTISWALAWHZXOVZXJO");

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
    msg.setTimeStamp(0.536877525877);
    msg.setSource(33388U);
    msg.setSourceEntity(70U);
    msg.setDestination(178U);
    msg.setDestinationEntity(250U);
    msg.timeout = 24562U;
    msg.lat = 0.745469520072;
    msg.lon = 0.516904235402;
    msg.z = 0.872063458604;
    msg.z_units = 41U;
    msg.speed = 0.850971669924;
    msg.speed_units = 34U;
    msg.bearing = 0.951603671615;
    msg.cross_angle = 0.69154301339;
    msg.width = 0.0230146567054;
    msg.length = 0.0962931620844;
    msg.hstep = 0.919245065357;
    msg.coff = 38U;
    msg.alternation = 119U;
    msg.flags = 83U;
    msg.custom.assign("CGKMXSSQABLBNEUHIBAPIZWVPNFKLDRSFQSTACWNMWHCUYFMINHVJCXAIYRDJLPJAXTZEFAKHKLBCMFPASJVXYGOEDNYVDGXBPLMWXSVLUPEZZJPEDQIMNBAPETUTLHKYCWFUFGXOGYOQSTARQUJFMUBQRTOGESIQJOTUZCIVRWEDVCONTBMNNSNDDTJHIBHJZIHQFWRPGOZHCYGKVRMKGUXYQL");

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
    msg.setTimeStamp(0.546713471319);
    msg.setSource(12839U);
    msg.setSourceEntity(146U);
    msg.setDestination(7748U);
    msg.setDestinationEntity(220U);
    msg.timeout = 17338U;
    msg.lat = 0.012387475276;
    msg.lon = 0.285129025344;
    msg.z = 0.589134906236;
    msg.z_units = 150U;
    msg.speed = 0.0568024726762;
    msg.speed_units = 168U;
    msg.bearing = 0.651309453807;
    msg.cross_angle = 0.329299647339;
    msg.width = 0.365125209061;
    msg.length = 0.125038692633;
    msg.hstep = 0.118207490764;
    msg.coff = 115U;
    msg.alternation = 146U;
    msg.flags = 33U;
    msg.custom.assign("ISHVQKOYLBFZIVQAYJWEZSRQOMJXJKUMDGQQGUXLKDHZAGZSDUHSTTTYLPFVETPUMNCBDHVONOPOULXFFNHDOASTQIFQNFUKURAVWWEEURZJGIBCRABZKKNDBDRDPWPITTNZCWBEGDYXKUASRVCKYMLJJOSHMCERYHXPTZBVHGACMPXMQFVWOXFMCOYBNSLIEVOWYTGNXIVXESJUGLCEFRPGCCTAAXKJWBWRELJQNHPMLZ");

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
    msg.setTimeStamp(0.239001911815);
    msg.setSource(28581U);
    msg.setSourceEntity(150U);
    msg.setDestination(23322U);
    msg.setDestinationEntity(170U);
    msg.timeout = 63250U;
    msg.lat = 0.44587395948;
    msg.lon = 0.0942023755532;
    msg.z = 0.73354573566;
    msg.z_units = 76U;
    msg.speed = 0.442081433181;
    msg.speed_units = 90U;
    msg.bearing = 0.771826598528;
    msg.cross_angle = 0.926458524251;
    msg.width = 0.386223203413;
    msg.length = 0.420687939872;
    msg.hstep = 0.655603698075;
    msg.coff = 111U;
    msg.alternation = 193U;
    msg.flags = 75U;
    msg.custom.assign("EJRYJOOBYKAGPJPEHNZRIWEJIMZBKYNRFDBBKQOXYSHKPHYDFESIGVFVSCLMSCWFAKMRCCBUKWGJGXNAROOZLHVMQCTWZIOXDUSBYTENMYFZPYZDE");

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
    msg.setTimeStamp(0.807784031463);
    msg.setSource(23038U);
    msg.setSourceEntity(189U);
    msg.setDestination(46987U);
    msg.setDestinationEntity(77U);
    msg.timeout = 42721U;
    msg.lat = 0.66963981007;
    msg.lon = 0.480217590822;
    msg.z = 0.941488587823;
    msg.z_units = 49U;
    msg.speed = 0.485386155859;
    msg.speed_units = 214U;
    msg.custom.assign("NJJQGTJGWIHXQRHOAGVIRWGOMNBSLAZVZLKOXJURMKPRLHZNCJZGUQOTKYAMCHOARJYBTEWWEBYPX");

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
    msg.setTimeStamp(0.472658948387);
    msg.setSource(35675U);
    msg.setSourceEntity(69U);
    msg.setDestination(65081U);
    msg.setDestinationEntity(187U);
    msg.timeout = 58231U;
    msg.lat = 0.598426627926;
    msg.lon = 0.0223205394981;
    msg.z = 0.985637674632;
    msg.z_units = 147U;
    msg.speed = 0.722498766231;
    msg.speed_units = 21U;
    msg.custom.assign("HIECZKIGKTGPJDFGZXHEUMXWTXSFQCKCSLPRNFNZFMGDOSCDHCVJVJOJPPKMRBLVITIWWTIPWMFNZAPGYDXJEQJLOOVYLNTCAFFBVEEZFRAUOJMQNRUUCVBTBAOEHQNYSQCHVMZOLDWKURXWGNKAIIWGWZIERYEQZPIUTSXBGYYLQDGSAVKQFCJLUCTBNBBSHSJVOKTQ");

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
    msg.setTimeStamp(0.0725184962485);
    msg.setSource(5639U);
    msg.setSourceEntity(134U);
    msg.setDestination(4737U);
    msg.setDestinationEntity(138U);
    msg.timeout = 49803U;
    msg.lat = 0.821444355372;
    msg.lon = 0.511199716091;
    msg.z = 0.72465495472;
    msg.z_units = 103U;
    msg.speed = 0.45299005778;
    msg.speed_units = 140U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.943567286682;
    tmp_msg_0.y = 0.171891897047;
    tmp_msg_0.z = 0.736255546553;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QIXLKDEHDTWTJATKGOMSBWBMQQPONGMGZDEASBOLTLLVKBHJQTYE");

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
    msg.setTimeStamp(0.876551400439);
    msg.setSource(50543U);
    msg.setSourceEntity(71U);
    msg.setDestination(734U);
    msg.setDestinationEntity(173U);
    msg.x = 0.237515183025;
    msg.y = 0.918653542262;
    msg.z = 0.243208024904;

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
    msg.setTimeStamp(0.375999748647);
    msg.setSource(3708U);
    msg.setSourceEntity(17U);
    msg.setDestination(11428U);
    msg.setDestinationEntity(166U);
    msg.x = 0.410776091863;
    msg.y = 0.246739468061;
    msg.z = 0.841108714864;

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
    msg.setTimeStamp(0.837727966193);
    msg.setSource(8870U);
    msg.setSourceEntity(196U);
    msg.setDestination(41539U);
    msg.setDestinationEntity(94U);
    msg.x = 0.566801421221;
    msg.y = 0.358733534925;
    msg.z = 0.136520138918;

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
    msg.setTimeStamp(0.8772848714);
    msg.setSource(48404U);
    msg.setSourceEntity(210U);
    msg.setDestination(55260U);
    msg.setDestinationEntity(203U);
    msg.timeout = 16237U;
    msg.lat = 0.127443032298;
    msg.lon = 0.600371236635;
    msg.z = 0.334796988492;
    msg.z_units = 220U;
    msg.amplitude = 0.156416730755;
    msg.pitch = 0.561415206867;
    msg.speed = 0.0426665340592;
    msg.speed_units = 178U;
    msg.custom.assign("JMHQCFRZWMAKAUQINKNJLZCXSNJFDACBATFHGTCROVAHQAEDGBDZYWVWIPNVZKWMBQMVSZTGXEUXYBLTHLLYTMCVEWKH");

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
    msg.setTimeStamp(0.909680528865);
    msg.setSource(27070U);
    msg.setSourceEntity(189U);
    msg.setDestination(2104U);
    msg.setDestinationEntity(74U);
    msg.timeout = 19980U;
    msg.lat = 0.664057039818;
    msg.lon = 0.803781761594;
    msg.z = 0.311742760654;
    msg.z_units = 176U;
    msg.amplitude = 0.163517692609;
    msg.pitch = 0.222615379908;
    msg.speed = 0.510198623241;
    msg.speed_units = 50U;
    msg.custom.assign("RSZPXXJUITJOKWUHYJENORFMQCBJIXVTPONOJIVKYXGHCOMZHHYAEYWFXDCORZWKODQIVAZNAVBXSQVDDPFGUHJQNMWFEPVBTMLGWSONAEDGSLTFHFIRIZUQPWQURVRJXAEFBYSQKNBMBGTYYVTLCUKLANGM");

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
    msg.setTimeStamp(0.459944824546);
    msg.setSource(57987U);
    msg.setSourceEntity(198U);
    msg.setDestination(41905U);
    msg.setDestinationEntity(38U);
    msg.timeout = 15044U;
    msg.lat = 0.737339987441;
    msg.lon = 0.523916195652;
    msg.z = 0.314609268994;
    msg.z_units = 54U;
    msg.amplitude = 0.595191218384;
    msg.pitch = 0.439496642148;
    msg.speed = 0.520819582616;
    msg.speed_units = 21U;
    msg.custom.assign("FIGVIUKZPSBPGFWEVDUVOWEOARRFMQPSZHLNYZCMTMLTSDSLNVXHKSRKUXIOJWRBKR");

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
    msg.setTimeStamp(0.574634007987);
    msg.setSource(14296U);
    msg.setSourceEntity(176U);
    msg.setDestination(32018U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.0454151049207);
    msg.setSource(48519U);
    msg.setSourceEntity(58U);
    msg.setDestination(8467U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.130182342819);
    msg.setSource(25557U);
    msg.setSourceEntity(70U);
    msg.setDestination(30951U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.810130980967);
    msg.setSource(49463U);
    msg.setSourceEntity(116U);
    msg.setDestination(18672U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.0404542740294;
    msg.lon = 0.979983588521;
    msg.z = 0.151943885446;
    msg.z_units = 249U;
    msg.radius = 0.24156958204;
    msg.duration = 23046U;
    msg.speed = 0.057646174557;
    msg.speed_units = 246U;
    msg.popup_period = 53570U;
    msg.popup_duration = 17233U;
    msg.flags = 147U;
    msg.custom.assign("JAKABKNIDQYXOPYTTQSCRECAZSBGULIOQTXQJDWKJXMHKMNDNXQKMZHNLTHKVGZMVICSVFXGVBIEQQDTSWYIMFLNVDIFBWRUKHMNZBWVGWUUAPTXOJNXJFBOQRFSNLWZWOPARHRRISRQYAVPPFIFHFCULQXTEKAGITBDEEKOPCPJUGDTVRAGPJWGITHBUYXKO");

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
    msg.setTimeStamp(0.215332771596);
    msg.setSource(13779U);
    msg.setSourceEntity(98U);
    msg.setDestination(2732U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.856756080706;
    msg.lon = 0.732452931882;
    msg.z = 0.723912881171;
    msg.z_units = 197U;
    msg.radius = 0.0561986252317;
    msg.duration = 34211U;
    msg.speed = 0.7924958108;
    msg.speed_units = 243U;
    msg.popup_period = 42492U;
    msg.popup_duration = 60015U;
    msg.flags = 55U;
    msg.custom.assign("HGDGZKDUMQQOIHVRURSDVXBXXAPKDCOBYXSTRIARMEPDWLENKSFYXYOSEWHYYMKZPXCVFLONHKREZUBTNURAIASQNLBYMJTIVFYSNBPXQBUJHJLHTIHJWCVQAKMVGLBAMLQFQKFMAONDMVTNFWNEKIOBWBEDGUMSUFCFICLTFSWZGOZTJJXDYCKYTCZTELWWRPJOVGJRRWUXEVSTCNPHRLCAUQIPNODG");

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
    msg.setTimeStamp(0.919402294916);
    msg.setSource(31975U);
    msg.setSourceEntity(194U);
    msg.setDestination(36142U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.190699429685;
    msg.lon = 0.7422090318;
    msg.z = 0.153884444788;
    msg.z_units = 149U;
    msg.radius = 0.509584289937;
    msg.duration = 43759U;
    msg.speed = 0.185647048788;
    msg.speed_units = 25U;
    msg.popup_period = 40774U;
    msg.popup_duration = 41468U;
    msg.flags = 112U;
    msg.custom.assign("WZUXSTPFOBACPJEUWPGGCVYGIXUKZWWZRBJXPNTLFGMVDRTXFJVWNKWSYYCCTFNXXBYUNTFEBWQQI");

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
    msg.setTimeStamp(0.00997620383194);
    msg.setSource(42896U);
    msg.setSourceEntity(237U);
    msg.setDestination(17744U);
    msg.setDestinationEntity(58U);
    msg.timeout = 41439U;
    msg.flags = 104U;
    msg.lat = 0.79917872637;
    msg.lon = 0.175608699718;
    msg.start_z = 0.469599090995;
    msg.start_z_units = 59U;
    msg.end_z = 0.213920298265;
    msg.end_z_units = 178U;
    msg.radius = 0.163208069266;
    msg.speed = 0.649367144711;
    msg.speed_units = 111U;
    msg.custom.assign("LQTYTHMGKOXTGVBWAMLWAXPCAKSHVHRFVBGHWPOEXDFIAETQAJZNUYJKAGQDXDLPMFCYEIEPFZDZHWOQJFLQUUQRIBAMSYCHRACSYPDLXXQTYVMIMRPQKTDNTTCDCZERWFPDBCVPNWOZBSDPABLUUUXKHISJQGSTSHZCHMFCBMEULXVK");

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
    msg.setTimeStamp(0.47673382574);
    msg.setSource(34071U);
    msg.setSourceEntity(159U);
    msg.setDestination(22452U);
    msg.setDestinationEntity(209U);
    msg.timeout = 39881U;
    msg.flags = 148U;
    msg.lat = 0.389179844612;
    msg.lon = 0.0255823393576;
    msg.start_z = 0.250951276838;
    msg.start_z_units = 94U;
    msg.end_z = 0.381618510461;
    msg.end_z_units = 109U;
    msg.radius = 0.114062075709;
    msg.speed = 0.748431240925;
    msg.speed_units = 71U;
    msg.custom.assign("XHMUBDCUHKHSTCAFXNWVICEOAAROKKJUIMIGNSRAGTESRRJJHSQYNLFVMHMTHEWLLXCTOOTHYWWCKSOOVJJZQBNCBUGSZVGRPFOIEYEWTQFVGZXAVLLYZVYPMJFARNPAKRZCKFBAKXTXDBPTTCNUJKJCDGABZZQMODZEIFMXJEYQFELSGCDPQRIQODKSHDXIDELLOZUQFPMNYTISDMQNBNPVBNPQEJXPGGWRGBRL");

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
    msg.setTimeStamp(0.0662943583762);
    msg.setSource(52493U);
    msg.setSourceEntity(130U);
    msg.setDestination(27652U);
    msg.setDestinationEntity(20U);
    msg.timeout = 49602U;
    msg.flags = 126U;
    msg.lat = 0.314933278253;
    msg.lon = 0.927033795539;
    msg.start_z = 0.408607182509;
    msg.start_z_units = 0U;
    msg.end_z = 0.469110772189;
    msg.end_z_units = 241U;
    msg.radius = 0.914025751285;
    msg.speed = 0.118631158592;
    msg.speed_units = 86U;
    msg.custom.assign("MOUVPWFUMNFJQAYVAIKIVTMXFEASIQBOMFRPGDVSFCECPRJQXUMJCXAHRKUWNMGXLAXKYCOLUAQCZTDHFKKZPBSPBZSESWEWSUNZKDHMHBRKFSGJCUWQQCPDLYIJMHSUGQLFDZKOBWRWZTEGIMVYETKKVXPTRQVHYBNOLYTAHNCOLOXQGXVPFTIFV");

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
    msg.setTimeStamp(0.439612970625);
    msg.setSource(16223U);
    msg.setSourceEntity(86U);
    msg.setDestination(23979U);
    msg.setDestinationEntity(108U);
    msg.timeout = 52029U;
    msg.lat = 0.683204146359;
    msg.lon = 0.0634821901842;
    msg.z = 0.986117641586;
    msg.z_units = 243U;
    msg.speed = 0.665111153248;
    msg.speed_units = 125U;
    msg.custom.assign("UADQJKKURKNFWTXVCKHZAZWZSEAOAOTINRNOOHGBE");

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
    msg.setTimeStamp(0.0913943197927);
    msg.setSource(10079U);
    msg.setSourceEntity(38U);
    msg.setDestination(39606U);
    msg.setDestinationEntity(182U);
    msg.timeout = 13407U;
    msg.lat = 0.617362609643;
    msg.lon = 0.926565453377;
    msg.z = 0.172203206407;
    msg.z_units = 29U;
    msg.speed = 0.321388377608;
    msg.speed_units = 52U;
    msg.custom.assign("RJANADXNWLLSZDFQDMUHLXMCQJILVKPEFZBFPOHIPVPDQYHVIUBWVGCVWSKMALIIRCMJHQPVWGJVCTXGIYCYUDMUDAMNMHSEBNRTPVOHAYXOSKNCXEBP");

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
    msg.setTimeStamp(0.301278211021);
    msg.setSource(18814U);
    msg.setSourceEntity(42U);
    msg.setDestination(38547U);
    msg.setDestinationEntity(14U);
    msg.timeout = 2722U;
    msg.lat = 0.501869153096;
    msg.lon = 0.727281549644;
    msg.z = 0.911791183861;
    msg.z_units = 245U;
    msg.speed = 0.462348606547;
    msg.speed_units = 45U;
    msg.custom.assign("SEYDCNVKPSOLGHZFXZTZRXWMTNQXHKWMOPDPEURBDFORFBFSDDGKNNPJYKBLSLRAGE");

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
    msg.setTimeStamp(0.252564056694);
    msg.setSource(55233U);
    msg.setSourceEntity(89U);
    msg.setDestination(8315U);
    msg.setDestinationEntity(28U);
    msg.x = 0.75912671325;
    msg.y = 0.704222168088;
    msg.z = 0.867775908581;
    msg.t = 0.0285116204871;

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
    msg.setTimeStamp(0.850279536485);
    msg.setSource(52848U);
    msg.setSourceEntity(36U);
    msg.setDestination(7574U);
    msg.setDestinationEntity(11U);
    msg.x = 0.939163230979;
    msg.y = 0.527841188568;
    msg.z = 0.420904313619;
    msg.t = 0.215870144395;

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
    msg.setTimeStamp(0.528085373477);
    msg.setSource(20947U);
    msg.setSourceEntity(99U);
    msg.setDestination(51756U);
    msg.setDestinationEntity(207U);
    msg.x = 0.360508278057;
    msg.y = 0.111038880242;
    msg.z = 0.496354946292;
    msg.t = 0.542015260559;

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
    msg.setTimeStamp(0.362345884773);
    msg.setSource(55540U);
    msg.setSourceEntity(136U);
    msg.setDestination(48901U);
    msg.setDestinationEntity(243U);
    msg.timeout = 30874U;
    msg.name.assign("JLWYUCDYQYISNJQXZFHUBMGCRZZQBMLJOEGXRKJVYPCBULFCFDCRXMFEBSXFJDFNUZZSPSHMOMKPAGBNBIJXRRMDAIAADHGZVOFMISVCXBZXAOYYJAPYVBAQXGIQPJTCNMPFUSYDKEHKOITGXHNWKNUWUGPDQTEKQVALJENTLFMLRAELXNTVTCOBHCTWTGUWVEPEOLDWABGOPKO");
    msg.custom.assign("XZWVGNLLEBNIHAEDWIFZVHGJLRBXBWRDZFAYFOREDAKHJBSQJRLFVMFSBTDZAQPNSYEPMCVEQJWOVYRCPRAQKMMYPPXZMIICUBWWXMXEGCRFTZVGUAJKCGIZNUDIXUHBSOCWOPCZFKNPHOJOTGORJTTVFTKKDLEUPUQGHSKLTTAATUCWVILUMWDNKZTEHIKSFOHUUGMDYSLSBDNQRIRVCFYBQDQWAESIB");

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
    msg.setTimeStamp(0.835003268691);
    msg.setSource(18366U);
    msg.setSourceEntity(54U);
    msg.setDestination(10762U);
    msg.setDestinationEntity(69U);
    msg.timeout = 62597U;
    msg.name.assign("RUXTIEPPDXUJWYJVOQCMAXKV");
    msg.custom.assign("OWMZSREAOXGPNLDYPRQYKSFXZVQTWABNWOOHUATLSRZSTVYCWAXTNTCHUGOGDABITUNIWZHJPCGVUKFKITRWKHQFLKRMMVXIYGGWQJGMDQTOJSJCPM");

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
    msg.setTimeStamp(0.250561201342);
    msg.setSource(6883U);
    msg.setSourceEntity(91U);
    msg.setDestination(28572U);
    msg.setDestinationEntity(14U);
    msg.timeout = 47528U;
    msg.name.assign("AHFOOMZYYIRQKJDPEWYZLLKDGQJMPZJONQAPWFIFWBXTOMDJYHNTAUFMQHSBADZBOFTJXKMBYKTPGHYHJCLIHVEMAPDEDZSCVOVBQXYWNZBAYZGXZQWRESLBDKNIAILJKFNGHLESRIWTUWTIBLSTOTFRPTVFKAACJSREUVCCCGOCX");
    msg.custom.assign("FSDIQFCTONQPJZC");

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
    msg.setTimeStamp(0.189193506379);
    msg.setSource(26557U);
    msg.setSourceEntity(150U);
    msg.setDestination(14451U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.825876221994;
    msg.lon = 0.274284492366;
    msg.z = 0.599107553392;
    msg.z_units = 182U;
    msg.speed = 0.575316414813;
    msg.speed_units = 131U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.915709892431;
    tmp_msg_0.y = 0.307215771444;
    tmp_msg_0.z = 0.0946069105169;
    tmp_msg_0.t = 0.369065100443;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.874363669687;
    msg.custom.assign("OUOMDUMTDLIOLEXDRWGXVZFHNKOKYWHPJTWAQHPXXVAEQTBIMEQREUEPCGVJHKHAAWYMXSPHGNZLHPI");

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
    msg.setTimeStamp(0.74784320646);
    msg.setSource(48210U);
    msg.setSourceEntity(106U);
    msg.setDestination(48354U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.325451658594;
    msg.lon = 0.923925927395;
    msg.z = 0.711414910752;
    msg.z_units = 16U;
    msg.speed = 0.6740655223;
    msg.speed_units = 47U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 26205U;
    tmp_msg_0.off_x = 0.418427851003;
    tmp_msg_0.off_y = 0.510990122614;
    tmp_msg_0.off_z = 0.706471983127;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.446676983724;
    msg.custom.assign("KKBZUELDMMSBIVVNFAFWRQEYADWGDSJHFICYKAMXDCSICYCCTWGUVUXBYBOHQZPWACVJAKZJQKFTLIXZUDJAQKQARTWEDFRJQHTLEUGTZNRXTXCGBIPIEOBULLIVTLULMBRKCYDHPSAVICNFLMJOODXHMWNXMSYJFBOLWZHOBKFOQKHXWINPFDRPSVZEJREFSUDTPHNGYXVEAYZUSJOZSOAINLVNUYSQTXGGGWKRGPVNPMMEPQREZBWRM");

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
    msg.setTimeStamp(0.668938008715);
    msg.setSource(42819U);
    msg.setSourceEntity(123U);
    msg.setDestination(19357U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.77919091607;
    msg.lon = 0.323241099745;
    msg.z = 0.268857162093;
    msg.z_units = 114U;
    msg.speed = 0.796698799347;
    msg.speed_units = 81U;
    msg.start_time = 0.138837414499;
    msg.custom.assign("PVUGSDHRAIKQBQSSPAUZNRVPXARIFLTNMCTHFONYECGNMCAOFXWMCBGYDXGVZRNOUZDISVQUUHBFWAIIKVFPRLCEEGJUWKGPWBIGPVTRABZDGBXPMXDLKLLHRZGKVOQEBHOKYSCYZEAFXELTTJSEOMEYMTDXOQCCIJZKQRATYKNWPWVTUSYBY");

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
    msg.setTimeStamp(0.608206094243);
    msg.setSource(4323U);
    msg.setSourceEntity(137U);
    msg.setDestination(24817U);
    msg.setDestinationEntity(50U);
    msg.vid = 61866U;
    msg.off_x = 0.67937931145;
    msg.off_y = 0.59051913653;
    msg.off_z = 0.974673521479;

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
    msg.setTimeStamp(0.85034827177);
    msg.setSource(23093U);
    msg.setSourceEntity(26U);
    msg.setDestination(10523U);
    msg.setDestinationEntity(205U);
    msg.vid = 59142U;
    msg.off_x = 0.553739868008;
    msg.off_y = 0.408970394376;
    msg.off_z = 0.801255780668;

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
    msg.setTimeStamp(0.88415506231);
    msg.setSource(28148U);
    msg.setSourceEntity(247U);
    msg.setDestination(54070U);
    msg.setDestinationEntity(52U);
    msg.vid = 40170U;
    msg.off_x = 0.233402634446;
    msg.off_y = 0.193698879699;
    msg.off_z = 0.488196693163;

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
    msg.setTimeStamp(0.521739763535);
    msg.setSource(37617U);
    msg.setSourceEntity(221U);
    msg.setDestination(31045U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.526628817206);
    msg.setSource(3328U);
    msg.setSourceEntity(8U);
    msg.setDestination(39367U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.106675596411);
    msg.setSource(10630U);
    msg.setSourceEntity(176U);
    msg.setDestination(25947U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.0560206495926);
    msg.setSource(532U);
    msg.setSourceEntity(141U);
    msg.setDestination(10591U);
    msg.setDestinationEntity(94U);
    msg.mid = 47916U;

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
    msg.setTimeStamp(0.298346158114);
    msg.setSource(35165U);
    msg.setSourceEntity(110U);
    msg.setDestination(22046U);
    msg.setDestinationEntity(18U);
    msg.mid = 23856U;

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
    msg.setTimeStamp(0.843468601299);
    msg.setSource(21527U);
    msg.setSourceEntity(201U);
    msg.setDestination(1016U);
    msg.setDestinationEntity(160U);
    msg.mid = 31429U;

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
    msg.setTimeStamp(0.756225463781);
    msg.setSource(24002U);
    msg.setSourceEntity(12U);
    msg.setDestination(23131U);
    msg.setDestinationEntity(143U);
    msg.state = 62U;
    msg.eta = 51136U;
    msg.info.assign("PCMZBDXGXHYJLLTORAWSSQJRONTHX");

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
    msg.setTimeStamp(0.0942749931019);
    msg.setSource(58851U);
    msg.setSourceEntity(87U);
    msg.setDestination(35733U);
    msg.setDestinationEntity(148U);
    msg.state = 180U;
    msg.eta = 31724U;
    msg.info.assign("AQAYJTIDBLFBRZCJTXYBUFQHNJKNTJYJGNRXODMYRDKVWRWAWREZXTAJNXXDCHPQYIQPQWKMCLNVCMKOZQELGUYVAREUAXYGCPFKRHOTMGPVIMSGGDFNTPOLCEVPUXKBIJRSXSASDWLZXUWOOTSZBISLQVNMUWEQIONLLFDSFDLGPPRAKOQRX");

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
    msg.setTimeStamp(0.213562866292);
    msg.setSource(58623U);
    msg.setSourceEntity(142U);
    msg.setDestination(10976U);
    msg.setDestinationEntity(140U);
    msg.state = 20U;
    msg.eta = 47154U;
    msg.info.assign("XZNXJEQVJUZFLOLSRSCEWVDNNBXPZPWMHPHUBYUKLBYWYWHQMRCIWAXDFKXKKCMNPCSXCFTQYDDHRKMSQIKGGLMQSRKOOREVZVJLDLTXBZKLZATTWGSLAFCTZIRDGIPQNDNHHYTAVNJDOWZFREUMPSMWZIOVQWPPSYHUUNHGBAIGJJ");

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
    msg.setTimeStamp(0.48812061219);
    msg.setSource(64166U);
    msg.setSourceEntity(146U);
    msg.setDestination(13808U);
    msg.setDestinationEntity(25U);
    msg.system = 31447U;
    msg.duration = 17429U;
    msg.speed = 0.662899599154;
    msg.speed_units = 80U;
    msg.x = 0.933184744759;
    msg.y = 0.539473682445;
    msg.z = 0.133050934059;
    msg.z_units = 44U;

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
    msg.setTimeStamp(0.515664616925);
    msg.setSource(64946U);
    msg.setSourceEntity(89U);
    msg.setDestination(6360U);
    msg.setDestinationEntity(114U);
    msg.system = 62836U;
    msg.duration = 16319U;
    msg.speed = 0.0685165160003;
    msg.speed_units = 38U;
    msg.x = 0.161355495035;
    msg.y = 0.0679625311831;
    msg.z = 0.415527194363;
    msg.z_units = 127U;

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
    msg.setTimeStamp(0.323201263517);
    msg.setSource(21565U);
    msg.setSourceEntity(248U);
    msg.setDestination(6452U);
    msg.setDestinationEntity(28U);
    msg.system = 36302U;
    msg.duration = 61241U;
    msg.speed = 0.5017191106;
    msg.speed_units = 51U;
    msg.x = 0.451690354658;
    msg.y = 0.694099133985;
    msg.z = 0.531183460583;
    msg.z_units = 132U;

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
    msg.setTimeStamp(0.023819964372);
    msg.setSource(21823U);
    msg.setSourceEntity(77U);
    msg.setDestination(18205U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.994680324508;
    msg.lon = 0.532320314396;
    msg.speed = 0.837838951451;
    msg.speed_units = 10U;
    msg.duration = 62208U;
    msg.sys_a = 63375U;
    msg.sys_b = 18235U;
    msg.move_threshold = 0.118192568044;

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
    msg.setTimeStamp(0.923246632727);
    msg.setSource(50370U);
    msg.setSourceEntity(103U);
    msg.setDestination(63288U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.191351895942;
    msg.lon = 0.359762775361;
    msg.speed = 0.538571105766;
    msg.speed_units = 29U;
    msg.duration = 51436U;
    msg.sys_a = 3064U;
    msg.sys_b = 28093U;
    msg.move_threshold = 0.896861536646;

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
    msg.setTimeStamp(0.373722271934);
    msg.setSource(40609U);
    msg.setSourceEntity(168U);
    msg.setDestination(34942U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.0600271734008;
    msg.lon = 0.447936014696;
    msg.speed = 0.541897156087;
    msg.speed_units = 217U;
    msg.duration = 6794U;
    msg.sys_a = 47078U;
    msg.sys_b = 12163U;
    msg.move_threshold = 0.0651533272617;

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
    msg.setTimeStamp(0.617321353035);
    msg.setSource(35024U);
    msg.setSourceEntity(19U);
    msg.setDestination(13851U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.746658670673;
    msg.lon = 0.190305116566;
    msg.z = 0.363191253014;
    msg.z_units = 96U;
    msg.speed = 0.348945798795;
    msg.speed_units = 89U;
    msg.custom.assign("ENLINVRMDOCICMSELYRDTTNPKJSDCXHFJKXRJYPVLPUSOBPDFJZRKYOAZAQVWO");

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
    msg.setTimeStamp(0.2590242938);
    msg.setSource(6557U);
    msg.setSourceEntity(36U);
    msg.setDestination(50755U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.374577481078;
    msg.lon = 0.139383835695;
    msg.z = 0.316745778347;
    msg.z_units = 199U;
    msg.speed = 0.234443623041;
    msg.speed_units = 207U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.709284980591;
    tmp_msg_0.lon = 0.6369124906;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("PLVVCNYKXFEYEYMOXQDJCLRGZLTJWGBKKNMBVYCKZUVHSRAHAPJKWNJIUKZBCVFDPQOKDMNTTBRNGHMATQWASSATEBUIKQOZRNRWWMEYSAMDEHZVWOZJIPLIUZRXOONUHMGJBDZLGXXHCGIKAFAEFSPUSQGFJVBMWESGHIDFWFMFBXDDURMHRTQRTBZ");

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
    msg.setTimeStamp(0.442113169134);
    msg.setSource(37922U);
    msg.setSourceEntity(130U);
    msg.setDestination(15832U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.842044809136;
    msg.lon = 0.196306905006;
    msg.z = 0.327729714913;
    msg.z_units = 0U;
    msg.speed = 0.17422090189;
    msg.speed_units = 106U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.664950890645;
    tmp_msg_0.lon = 0.0690376351929;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TWQHHMLBGUTGMMJMYYHTBCIAGBUYFCXSYRBPRUSUOOBFOCZKGPPUZQKCKIQJDWRCIVKIEIRXTNENMVTFOJFIQOLNBDNPJYOSEFLWDWRMXDNVMSJDEJQCWZVGDEEIKFTKARHGARWRHQIAZZTDBOGSBYPTJAEXCLUILXSMHOVNEBGRWLXTMVWXFUYBAWJYXCKAUAKTYPFPZJQFNSZVZPEHHRUFCOLPJNADDMYOA");

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
    msg.setTimeStamp(0.140251050768);
    msg.setSource(45194U);
    msg.setSourceEntity(152U);
    msg.setDestination(44945U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.944741420241;
    msg.lon = 0.0337037671366;

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
    msg.setTimeStamp(0.488111022759);
    msg.setSource(44735U);
    msg.setSourceEntity(195U);
    msg.setDestination(29001U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.209359811474;
    msg.lon = 0.0702645585447;

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
    msg.setTimeStamp(0.954536146548);
    msg.setSource(47581U);
    msg.setSourceEntity(200U);
    msg.setDestination(52755U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.640253613563;
    msg.lon = 0.997416881239;

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
    msg.setTimeStamp(0.474475294021);
    msg.setSource(5172U);
    msg.setSourceEntity(146U);
    msg.setDestination(63640U);
    msg.setDestinationEntity(40U);
    msg.timeout = 56570U;
    msg.lat = 0.640744652787;
    msg.lon = 0.34359882243;
    msg.z = 0.901617767533;
    msg.z_units = 127U;
    msg.pitch = 0.934553437075;
    msg.amplitude = 0.24073121107;
    msg.duration = 52988U;
    msg.speed = 0.0649962946325;
    msg.speed_units = 220U;
    msg.radius = 0.326476783297;
    msg.direction = 19U;
    msg.custom.assign("CXGDNXBRTLHMBRSDQAYTGJENPMIUGTHZNAJKIUSVQQBZEEIISGEZLDWHUOMNPPJVZPSQUBFFSFEBVTSDOCLVPYQBVWFYQFJFROJSRAHMADLYREKYOBLHMZYYVPXQWPBYOAFGDDVHYDLXTZKGQDFGAWDXIPLOKTAZTXSNJLMCFRHAJU");

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
    msg.setTimeStamp(0.476340219819);
    msg.setSource(60229U);
    msg.setSourceEntity(85U);
    msg.setDestination(3858U);
    msg.setDestinationEntity(130U);
    msg.timeout = 20581U;
    msg.lat = 0.629200895351;
    msg.lon = 0.718289995694;
    msg.z = 0.647825219449;
    msg.z_units = 245U;
    msg.pitch = 0.503978258438;
    msg.amplitude = 0.771304357324;
    msg.duration = 15970U;
    msg.speed = 0.745839867882;
    msg.speed_units = 115U;
    msg.radius = 0.00292660572628;
    msg.direction = 156U;
    msg.custom.assign("ADMZKLMGSQDWJWMVSGKWBAQYTDRNGREHJLSQHRBXAFXOHWUDRGEZQBEYKPMSXQEMUSZWITPDQISXWOEXYKYYHNCFGGIUZNLTJTIJLFGVCJHOYXBGQWBWECLRVTOUKMFVU");

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
    msg.setTimeStamp(0.590528177477);
    msg.setSource(35424U);
    msg.setSourceEntity(130U);
    msg.setDestination(54015U);
    msg.setDestinationEntity(194U);
    msg.timeout = 49556U;
    msg.lat = 0.986842049829;
    msg.lon = 0.948385082687;
    msg.z = 0.619991863647;
    msg.z_units = 16U;
    msg.pitch = 0.568506211557;
    msg.amplitude = 0.131686284967;
    msg.duration = 58954U;
    msg.speed = 0.319741935449;
    msg.speed_units = 30U;
    msg.radius = 0.952519740161;
    msg.direction = 42U;
    msg.custom.assign("TDFRRBWAELPKRCOQSLHOPYSCCOYMMQXESKRTBZJUSILISM");

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
    msg.setTimeStamp(0.214222420713);
    msg.setSource(29394U);
    msg.setSourceEntity(194U);
    msg.setDestination(19482U);
    msg.setDestinationEntity(118U);
    msg.formation_name.assign("PCJUEFVJFMKNMGZAUHBVKQXCOLXVLWXEKRVMUYKSTHRPTLSWIHXMBKNSZXHZGGRONGYRJRDRALGFULWXUBAINFDZPYISMUQWKNMCIJTUVRKYGMSGOIBXBETQYPPAQHLIAEHGTNWRCYQJWMDNJQEOCCPZFDEEGTFDTUUHZFPKTOVHSSYAQBVOBAQPIDLZAJWZUCCSYEDVZ");
    msg.reference_frame = 6U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 48260U;
    tmp_msg_0.off_x = 0.900934968778;
    tmp_msg_0.off_y = 0.0997002524866;
    tmp_msg_0.off_z = 0.215918157948;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ZPZFLPNRABETMPQCSRXTOGXHKXONWIDIMWL");

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
    msg.setTimeStamp(0.0754510934353);
    msg.setSource(14168U);
    msg.setSourceEntity(213U);
    msg.setDestination(30338U);
    msg.setDestinationEntity(8U);
    msg.formation_name.assign("VNELTXNOFLGEOVWGNXSDNQWFZQPUHWQKRXRDBQVDDXUYRNUDVBUBSNIJEFUCVMTZANDMKIYLCIROSCDGOBREOZIKFEJTKHFISAINKFSPKKVYPWXOFSBHCGOYLTJLWWPHGPJLMJMNIUQDEHRBZRLWFAQ");
    msg.reference_frame = 37U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 40489U;
    tmp_msg_0.off_x = 0.972969795479;
    tmp_msg_0.off_y = 0.841412440776;
    tmp_msg_0.off_z = 0.811802372816;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("IVOZIVSKDYJPXSVWIDEHDMPPAKZTTBCFOSEDGMSIPENZYUOVYZGVFJYRBKRSCGUTGYHHAVQRTRERIKWZLLPXNFHLGBZ");

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
    msg.setTimeStamp(0.32163687075);
    msg.setSource(5155U);
    msg.setSourceEntity(174U);
    msg.setDestination(61219U);
    msg.setDestinationEntity(155U);
    msg.formation_name.assign("CMRYXBJSDKSFFKFMNEJLZYGRGMOBTBPYTJSCYQGULERSGJBCQDXWLIDKGEBMOGYDXJUCHNXIIPDLFVQCLAGPIPHRZXVJYLAOGPRFRFCPAQXAUFDCJIJNWCXZYPKTWSW");
    msg.reference_frame = 173U;
    msg.custom.assign("DPHSUVDBQHBGILLAAWJKADTXNTHLUKAFSLPHYQQGVEJTXSLEDQGBKVXWVQXEOILUOTPCCNGYHSTJXSPBRREOKQIYJPWGLATXNKJUABMEXBMABVMMKYYDMGFHIZICEDZUUDIAMALOOSNZCUPELFIFHUWPBQIPUSREWTKFSZOJNCZLFSZWPCYMJZKNGWIVPVQFTEMVGERD");

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
    msg.setTimeStamp(0.23115466264);
    msg.setSource(52225U);
    msg.setSourceEntity(69U);
    msg.setDestination(38340U);
    msg.setDestinationEntity(144U);
    msg.group_name.assign("HSEYXXPKSHCWYJAEZFRPMAKVGRBDDYCQSVQFITIYLKTJPQEVNJTIBXXZYGROESBYQPMUWAGNWMQVYCBDJORUAGLIXNUZMSZXHFGIMPVDKTIKWOSGESJSCZNWAGXXVAUDHQELHATCXBRVJOFZOMSUKFOBJFQJRKJAVIVGYFQHOZBCZJFSCDDLFCZBLLYQE");
    msg.formation_name.assign("YBQFAMLLNTXHLIZLTMAGPUPGFZKCKLPTRVHNWBDOSVWKGSRKVIWFCQKCEYARPUE");
    msg.plan_id.assign("AEXAMBYYGXDYMERHNGZPBCZWKEMUNQPCDLDRLWBB");
    msg.description.assign("YRYNZQRETOYBCHDWJEHEYBMGRXAWKVYQCJQDQLGUWMWULKFWRGLTFFRLIPFNDDVFBWIFSNEIKDARKZZZISPEOCTMFPFRAJWDMAJOCAZPMWPSLXMXQUHVPUPVKUCNZYZLTOATGUUNCJIBMLEODMIFKBZ");
    msg.leader_speed = 0.398843115148;
    msg.leader_bank_lim = 0.699488672356;
    msg.pos_sim_err_lim = 0.541661048733;
    msg.pos_sim_err_wrn = 0.628323302984;
    msg.pos_sim_err_timeout = 53392U;
    msg.converg_max = 0.886013845694;
    msg.converg_timeout = 19659U;
    msg.comms_timeout = 59304U;
    msg.turb_lim = 0.472304559742;
    msg.custom.assign("XCTDUUCEVJKSYJOWAOFSWLRFOZUOJZXZCNMSFHEMKIEMBNYUKXHPOV");

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
    msg.setTimeStamp(0.903208160051);
    msg.setSource(14984U);
    msg.setSourceEntity(245U);
    msg.setDestination(952U);
    msg.setDestinationEntity(31U);
    msg.group_name.assign("MTCOUGNJZBHDRTVWUAHUYYADIPJSYVCIWMHFLURAWGSMTEBSJHTRHSHUFUBMUUXJQVPNPPOOWKFSIGOJIQZADXGCNDWVRDKYWBFAEKBKWEHCOZQLIBVLDLXMLJIGQ");
    msg.formation_name.assign("UYUEUYJRJVMDKFTXNEPVSHMVIOMAAWJFPBRWGWTEDOZASZDNLFCXPOJVSFBWZCBGLHEEBYVKBSLAJXMXNIEXZUGAINNCSCPLBQKKZPTKZIGIVCJEKZVMXHGXFNIHHKTOHQCFDTCWHUUYPFEQBXOOOGLWJ");
    msg.plan_id.assign("HKATXWDKSAYRQABPKIXSKHPMZENALWGYMFJXZGYEONKQCFTVAXGBBEJOZDJTTCVGUCVLTYXGETCXQHJEQEHZFZSGJRWUCULDLILPQZKPXTSMZFITNCSBWYCNOFIEVEIRUTEYKBPEDRYANFNBUJRLOLUQPVOSTWYNRLFKQIWOHKXMVUWHQOONHSAQSGUNMLXVSRBGGICAWKPYDUOMJADR");
    msg.description.assign("OHNBEXETHKBQDPFNHSNNVAOQLSYJHUHWRKQXXMOJRRPCVTNOJISHEAFOHPWZDUMPRCDVCWNACEUIJMBZYUDZJAGCKGVGWKDEVIWQGMLDQFQVLGVZYKBABLISBTYFIFYQPUWHGASFFOUOAFOTWUDEZMNGKXSMTTIPVEPUQEBNFLILIPLOCXYRNFBKKTXIZZAPPSQSBJMZJYYRNATQXEDHDMCACGRJSMLUKCLTJRWYIMWLEXOWZSGXRYZJXUBG");
    msg.leader_speed = 0.390005497057;
    msg.leader_bank_lim = 0.232608189351;
    msg.pos_sim_err_lim = 0.251300670075;
    msg.pos_sim_err_wrn = 0.231996410451;
    msg.pos_sim_err_timeout = 46189U;
    msg.converg_max = 0.840391007818;
    msg.converg_timeout = 46602U;
    msg.comms_timeout = 36852U;
    msg.turb_lim = 0.850524847054;
    msg.custom.assign("DPRNTCSGZFKBVZZZFIFXSQZFLVQFDYNNGAMHREOTUU");

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
    msg.setTimeStamp(0.920989849973);
    msg.setSource(9388U);
    msg.setSourceEntity(143U);
    msg.setDestination(58189U);
    msg.setDestinationEntity(187U);
    msg.group_name.assign("WCHTPCJCYJJSIUHAHFMIVCVGOQMULYSXXMWBYOKCDYXUIOMPNKEBHQUZLZSJJFXZSZPFLQARZREUYBOQUMGBPHYDNUFZGVFOTDMQGFRHVMUMANLNRANC");
    msg.formation_name.assign("CDHTKVPRSTREBXIWOQXLJWMLAFXRXZNNDHAHUFKJIEHYRUMXOCCQWVHMLQBDOVLNZEZTGYEZQGKDRHNSMRHWZCYPJYZEAQEUMDKFAMUSMUSBBFBIWAYBQFWXUSIXCLVPXMAANDMROKYUBIOBNADPQCJBCTEKKPD");
    msg.plan_id.assign("WJBVLGOWKTWFAFJXOYGBLSHBGABQORKCUSLCWURSZOSWPUAWLLCQQQBYICPKHKHHKCLRZZPQUWTGYPAGMCPOXMZOSESO");
    msg.description.assign("BZTNCEIRYIGJFTPIBHYAOZCHKFBNJEISWPAFYPCWKJKMFXLQUQDTQMWDORDRMTGNXDBBYSCXPANKNKKVC");
    msg.leader_speed = 0.673890164528;
    msg.leader_bank_lim = 0.361429285838;
    msg.pos_sim_err_lim = 0.164324535137;
    msg.pos_sim_err_wrn = 0.732420608336;
    msg.pos_sim_err_timeout = 15758U;
    msg.converg_max = 0.416990080825;
    msg.converg_timeout = 11549U;
    msg.comms_timeout = 31134U;
    msg.turb_lim = 0.609641099522;
    msg.custom.assign("KHODWUTDKNNIAPGSWUKPMPKDOLZSNCUESRYPITJBQHQLJXLEOREOFBURMHRVTZMVVDBIESRFWLZDMEYQNSDROOGIPJRYBJQNUMWPIDPMLYPGXFWKSITZHYUYJOWKN");

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
    msg.setTimeStamp(0.986811799316);
    msg.setSource(22552U);
    msg.setSourceEntity(111U);
    msg.setDestination(22448U);
    msg.setDestinationEntity(18U);
    msg.control_src = 53452U;
    msg.control_ent = 160U;
    msg.timeout = 0.153463733621;
    msg.loiter_radius = 0.166932834883;
    msg.altitude_interval = 0.757871789539;

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
    msg.setTimeStamp(0.81257546298);
    msg.setSource(63572U);
    msg.setSourceEntity(61U);
    msg.setDestination(2536U);
    msg.setDestinationEntity(251U);
    msg.control_src = 47338U;
    msg.control_ent = 248U;
    msg.timeout = 0.19266856448;
    msg.loiter_radius = 0.259263243004;
    msg.altitude_interval = 0.476106662326;

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
    msg.setTimeStamp(0.470154409394);
    msg.setSource(12127U);
    msg.setSourceEntity(177U);
    msg.setDestination(22286U);
    msg.setDestinationEntity(25U);
    msg.control_src = 17095U;
    msg.control_ent = 225U;
    msg.timeout = 0.759604514934;
    msg.loiter_radius = 0.617569604889;
    msg.altitude_interval = 0.77863114083;

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
    msg.setTimeStamp(0.35105751818);
    msg.setSource(27711U);
    msg.setSourceEntity(210U);
    msg.setDestination(30068U);
    msg.setDestinationEntity(244U);
    msg.flags = 127U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.700344144022;
    tmp_msg_0.speed_units = 111U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.756028544944;
    tmp_msg_1.z_units = 112U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.062923287902;
    msg.lon = 0.505108252872;
    msg.radius = 0.873857695539;

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
    msg.setTimeStamp(0.797314838836);
    msg.setSource(23805U);
    msg.setSourceEntity(139U);
    msg.setDestination(48573U);
    msg.setDestinationEntity(17U);
    msg.flags = 55U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.722762932623;
    tmp_msg_0.speed_units = 160U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.896874795018;
    tmp_msg_1.z_units = 68U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0964217817508;
    msg.lon = 0.194920331764;
    msg.radius = 0.97096166127;

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
    msg.setTimeStamp(0.167846854553);
    msg.setSource(37404U);
    msg.setSourceEntity(209U);
    msg.setDestination(11607U);
    msg.setDestinationEntity(72U);
    msg.flags = 33U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.337305219827;
    tmp_msg_0.speed_units = 103U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.801463081625;
    tmp_msg_1.z_units = 14U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.632187717388;
    msg.lon = 0.533456714762;
    msg.radius = 0.958747174402;

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
    msg.setTimeStamp(0.655686615603);
    msg.setSource(33113U);
    msg.setSourceEntity(123U);
    msg.setDestination(14001U);
    msg.setDestinationEntity(71U);
    msg.control_src = 26182U;
    msg.control_ent = 54U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 182U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.212645096519;
    tmp_tmp_msg_0_0.speed_units = 111U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.587919708416;
    tmp_tmp_msg_0_1.z_units = 10U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.362455231323;
    tmp_msg_0.lon = 0.330829394675;
    tmp_msg_0.radius = 0.316228302843;
    msg.reference.set(tmp_msg_0);
    msg.state = 132U;
    msg.proximity = 9U;

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
    msg.setTimeStamp(0.889832919299);
    msg.setSource(37678U);
    msg.setSourceEntity(67U);
    msg.setDestination(19314U);
    msg.setDestinationEntity(83U);
    msg.control_src = 35555U;
    msg.control_ent = 3U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 55U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.68198666719;
    tmp_tmp_msg_0_0.speed_units = 156U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.904194496571;
    tmp_tmp_msg_0_1.z_units = 248U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.69076747916;
    tmp_msg_0.lon = 0.911090582944;
    tmp_msg_0.radius = 0.221410087718;
    msg.reference.set(tmp_msg_0);
    msg.state = 9U;
    msg.proximity = 205U;

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
    msg.setTimeStamp(0.803562798926);
    msg.setSource(5413U);
    msg.setSourceEntity(98U);
    msg.setDestination(44968U);
    msg.setDestinationEntity(40U);
    msg.control_src = 60639U;
    msg.control_ent = 57U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 231U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.050632540333;
    tmp_tmp_msg_0_0.speed_units = 106U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.258357996649;
    tmp_tmp_msg_0_1.z_units = 192U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0802495013199;
    tmp_msg_0.lon = 0.666927880638;
    tmp_msg_0.radius = 0.737601559405;
    msg.reference.set(tmp_msg_0);
    msg.state = 131U;
    msg.proximity = 155U;

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
    msg.setTimeStamp(0.337597783835);
    msg.setSource(24302U);
    msg.setSourceEntity(60U);
    msg.setDestination(45483U);
    msg.setDestinationEntity(55U);
    msg.ax_cmd = 0.280469102829;
    msg.ay_cmd = 0.779178457402;
    msg.az_cmd = 0.225308891565;
    msg.ax_des = 0.42674909606;
    msg.ay_des = 0.489117033059;
    msg.az_des = 0.430091359379;
    msg.virt_err_x = 0.0591303489627;
    msg.virt_err_y = 0.861854774013;
    msg.virt_err_z = 0.0320266217455;
    msg.surf_fdbk_x = 0.728600572889;
    msg.surf_fdbk_y = 0.732252688091;
    msg.surf_fdbk_z = 0.906341773291;
    msg.surf_unkn_x = 0.20763614956;
    msg.surf_unkn_y = 0.235655094744;
    msg.surf_unkn_z = 0.644044445522;
    msg.ss_x = 0.170940830567;
    msg.ss_y = 0.563571037554;
    msg.ss_z = 0.780022901781;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NEGOPPGNMURWIHAUGCONTVZPIHLQJSLWHTXQ");
    tmp_msg_0.dist = 0.523698921967;
    tmp_msg_0.err = 0.527456965865;
    tmp_msg_0.ctrl_imp = 0.824846694378;
    tmp_msg_0.rel_dir_x = 0.629327534281;
    tmp_msg_0.rel_dir_y = 0.142495862453;
    tmp_msg_0.rel_dir_z = 0.164819480342;
    tmp_msg_0.err_x = 0.612265735369;
    tmp_msg_0.err_y = 0.358651770466;
    tmp_msg_0.err_z = 0.13328993316;
    tmp_msg_0.rf_err_x = 0.65249224429;
    tmp_msg_0.rf_err_y = 0.519337773701;
    tmp_msg_0.rf_err_z = 0.0398234944334;
    tmp_msg_0.rf_err_vx = 0.955352750058;
    tmp_msg_0.rf_err_vy = 0.592712044735;
    tmp_msg_0.rf_err_vz = 0.537632525797;
    tmp_msg_0.ss_x = 0.373291956003;
    tmp_msg_0.ss_y = 0.956312151551;
    tmp_msg_0.ss_z = 0.859139282099;
    tmp_msg_0.virt_err_x = 0.752673986768;
    tmp_msg_0.virt_err_y = 0.0343237996375;
    tmp_msg_0.virt_err_z = 0.536491296508;
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
    msg.setTimeStamp(0.987491494996);
    msg.setSource(18571U);
    msg.setSourceEntity(205U);
    msg.setDestination(15684U);
    msg.setDestinationEntity(153U);
    msg.ax_cmd = 0.130198413749;
    msg.ay_cmd = 0.420575472367;
    msg.az_cmd = 0.750962228991;
    msg.ax_des = 0.60842345436;
    msg.ay_des = 0.319987288617;
    msg.az_des = 0.430960372778;
    msg.virt_err_x = 0.515109235819;
    msg.virt_err_y = 0.239093196565;
    msg.virt_err_z = 0.622311046988;
    msg.surf_fdbk_x = 0.72405117214;
    msg.surf_fdbk_y = 0.463393081544;
    msg.surf_fdbk_z = 0.870981180385;
    msg.surf_unkn_x = 0.693277650073;
    msg.surf_unkn_y = 0.39365048707;
    msg.surf_unkn_z = 0.578767348474;
    msg.ss_x = 0.770837745119;
    msg.ss_y = 0.661417264836;
    msg.ss_z = 0.0917612016501;

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
    msg.setTimeStamp(0.241840487171);
    msg.setSource(34930U);
    msg.setSourceEntity(116U);
    msg.setDestination(25499U);
    msg.setDestinationEntity(144U);
    msg.ax_cmd = 0.199362157222;
    msg.ay_cmd = 0.888233431289;
    msg.az_cmd = 0.760365513389;
    msg.ax_des = 0.0134985495584;
    msg.ay_des = 0.134485617829;
    msg.az_des = 0.335078314734;
    msg.virt_err_x = 0.983125028497;
    msg.virt_err_y = 0.254115716749;
    msg.virt_err_z = 0.743972340913;
    msg.surf_fdbk_x = 0.941104048963;
    msg.surf_fdbk_y = 0.161883954869;
    msg.surf_fdbk_z = 0.0686779734436;
    msg.surf_unkn_x = 0.323168678866;
    msg.surf_unkn_y = 0.510349454996;
    msg.surf_unkn_z = 0.58803179878;
    msg.ss_x = 0.0381758213775;
    msg.ss_y = 0.495475391259;
    msg.ss_z = 0.582221072624;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FHWKDDBTWOVGJMKRNBPSESMLWXTWYGZYIIKMXFNGNXFNDNIROLHMEHXJMMTBDBLOZWVYVSZEVFFQSVETXEWRZAWFJUSPBWRBWHQATFPEZNCCYQYTQCDXLCYYULKROTFROPZJKNIJBVBNPPSAOAYQUJESCOLCUWGZSAXDLTGJZTUAIMCEJYOVDRIHXZORDQKBCIUGZAVFLDXIGPHKCAH");
    tmp_msg_0.dist = 0.662622441561;
    tmp_msg_0.err = 0.633305771179;
    tmp_msg_0.ctrl_imp = 0.283030621516;
    tmp_msg_0.rel_dir_x = 0.966298737559;
    tmp_msg_0.rel_dir_y = 0.462116402154;
    tmp_msg_0.rel_dir_z = 0.500067393606;
    tmp_msg_0.err_x = 0.447985693355;
    tmp_msg_0.err_y = 0.363177605226;
    tmp_msg_0.err_z = 0.376287486287;
    tmp_msg_0.rf_err_x = 0.0833272681192;
    tmp_msg_0.rf_err_y = 0.375390973536;
    tmp_msg_0.rf_err_z = 0.876884686895;
    tmp_msg_0.rf_err_vx = 0.501253013043;
    tmp_msg_0.rf_err_vy = 0.380615190195;
    tmp_msg_0.rf_err_vz = 0.318981733357;
    tmp_msg_0.ss_x = 0.781422388269;
    tmp_msg_0.ss_y = 0.727061661285;
    tmp_msg_0.ss_z = 0.477840795686;
    tmp_msg_0.virt_err_x = 0.805545053689;
    tmp_msg_0.virt_err_y = 0.0466298456932;
    tmp_msg_0.virt_err_z = 0.79939609825;
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
    msg.setTimeStamp(0.85504586933);
    msg.setSource(19344U);
    msg.setSourceEntity(6U);
    msg.setDestination(59820U);
    msg.setDestinationEntity(114U);
    msg.s_id.assign("BEPVWHXRVKILXELFMEAONYFEDGFCJNKABOJPKAPGAMNFJZRQOZUMRQIYDXFFUWOYKMOKXIBNIVQSMZXCGULLVSHUCKETDSNIYIPYJBKUXZWLGVVFLSGVJWCMBDAJTSFSTHRAOTCTQMBZZGEWKQSJRHSRY");
    msg.dist = 0.396411930401;
    msg.err = 0.268911925177;
    msg.ctrl_imp = 0.13378507267;
    msg.rel_dir_x = 0.707875616899;
    msg.rel_dir_y = 0.279487447502;
    msg.rel_dir_z = 0.715658137303;
    msg.err_x = 0.425570052035;
    msg.err_y = 0.982005785623;
    msg.err_z = 0.614488923643;
    msg.rf_err_x = 0.952508155951;
    msg.rf_err_y = 0.835517978151;
    msg.rf_err_z = 0.202172209487;
    msg.rf_err_vx = 0.767482350497;
    msg.rf_err_vy = 0.722466473045;
    msg.rf_err_vz = 0.186341400707;
    msg.ss_x = 0.542657385967;
    msg.ss_y = 0.0634140315374;
    msg.ss_z = 0.177511971709;
    msg.virt_err_x = 0.537875811105;
    msg.virt_err_y = 0.635316518394;
    msg.virt_err_z = 0.371148406856;

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
    msg.setTimeStamp(0.602181671353);
    msg.setSource(746U);
    msg.setSourceEntity(227U);
    msg.setDestination(26786U);
    msg.setDestinationEntity(211U);
    msg.s_id.assign("DQIVKRGKCRTESDYMPKIBDOKERHUCMDOJPZJTBQYRIEYMPAQLLLUIGBBJWSVODQRQJRQRKCTIXOXTEHTPMTUQEDNLJTAKUZHOWJAHLOFDSGVBIVFPAJPJIWRKYVWFVYNRUKGCAGMWVITZFSDLZAHMONLCHOZCAYVABUNSGATNWCBFNXEFXQINPBMWLZKMXCZPJXWB");
    msg.dist = 0.0794419843089;
    msg.err = 0.186214274712;
    msg.ctrl_imp = 0.297741732027;
    msg.rel_dir_x = 0.253706743503;
    msg.rel_dir_y = 0.393772160825;
    msg.rel_dir_z = 0.0237103761932;
    msg.err_x = 0.983806969925;
    msg.err_y = 0.886792099077;
    msg.err_z = 0.480345456253;
    msg.rf_err_x = 0.911737131631;
    msg.rf_err_y = 0.776523846047;
    msg.rf_err_z = 0.166069357915;
    msg.rf_err_vx = 0.590253948397;
    msg.rf_err_vy = 0.767777169559;
    msg.rf_err_vz = 0.892158632238;
    msg.ss_x = 0.403099634634;
    msg.ss_y = 0.736755549416;
    msg.ss_z = 0.557095244339;
    msg.virt_err_x = 0.261105091973;
    msg.virt_err_y = 0.605505283015;
    msg.virt_err_z = 0.150159304525;

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
    msg.setTimeStamp(0.0792543255872);
    msg.setSource(30749U);
    msg.setSourceEntity(207U);
    msg.setDestination(27280U);
    msg.setDestinationEntity(43U);
    msg.s_id.assign("VHTFJWVXOGPLWJRQFGSFRCTSDWKDPALYQASXJOIVZOPHNXARGFLICCBKZBZXMKLJWCRJYISJHYMPVQXUWMCOARTOQIFGHCUOQGKALZDEODVEEYNYHEXCGFSRMGCEQONOXTHDBJUPSWTAPVLNEGVPJVMLRIMU");
    msg.dist = 0.200619031867;
    msg.err = 0.728857168332;
    msg.ctrl_imp = 0.658370080518;
    msg.rel_dir_x = 0.417378958796;
    msg.rel_dir_y = 0.166183005362;
    msg.rel_dir_z = 0.907432965668;
    msg.err_x = 0.88792884606;
    msg.err_y = 0.0130781571737;
    msg.err_z = 0.301118745851;
    msg.rf_err_x = 0.694241615731;
    msg.rf_err_y = 0.937660696696;
    msg.rf_err_z = 0.575259636145;
    msg.rf_err_vx = 0.0455046036733;
    msg.rf_err_vy = 0.450373896287;
    msg.rf_err_vz = 0.694686829239;
    msg.ss_x = 0.265681064835;
    msg.ss_y = 0.421829517143;
    msg.ss_z = 0.256586363519;
    msg.virt_err_x = 0.876982542952;
    msg.virt_err_y = 0.231623387246;
    msg.virt_err_z = 0.950705838556;

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
    msg.setTimeStamp(0.28283898206);
    msg.setSource(65322U);
    msg.setSourceEntity(141U);
    msg.setDestination(64294U);
    msg.setDestinationEntity(119U);
    msg.timeout = 2669U;
    msg.rpm = 0.546053539274;
    msg.direction = 56U;
    msg.custom.assign("VWMXPATPJXDJXSWJDESDSKFCTIGCRXHFREAMMUOIOCBKLHVKXQEVUQZSSPRXDNZXCNKRQYYQCLFLQOFGNRAOTJDPUSUOIVPKDNMJYIFZTPDVLMIMBJXFZVEWGZUKMZHTADFPUJAZLQVLNFGYVZPVUUJME");

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
    msg.setTimeStamp(0.914517030396);
    msg.setSource(39178U);
    msg.setSourceEntity(149U);
    msg.setDestination(37716U);
    msg.setDestinationEntity(62U);
    msg.timeout = 7540U;
    msg.rpm = 0.583957619253;
    msg.direction = 49U;
    msg.custom.assign("BBEWKKEVINOJHNAORYSLGQFRBRJZGPLPKPOLISMMSDGZCANYAVGJZSUSKLOVCHXLSWF");

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
    msg.setTimeStamp(0.122021440821);
    msg.setSource(30969U);
    msg.setSourceEntity(56U);
    msg.setDestination(55859U);
    msg.setDestinationEntity(78U);
    msg.timeout = 10115U;
    msg.rpm = 0.135387308864;
    msg.direction = 187U;
    msg.custom.assign("OIZEUEZLBMZFGNQPDYJDBHISWEVXBDTSFMAYYQYMZPDVXARRIROKELMQFEMRJKHVKADSAMXWETKYJCIODXWZJOZSHOOYBYQKSLXTJUKTNDWVLBLCTHQOGSQDUAJGLVBWSJWNIRYITIAJEXCNONPVKREGPFUJCSKFWEVYPCLUPQHGZDLANBIKIFMHZRNFARTXCGCVBGGWTMOBFCUNXLJNULWSQDRN");

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
    msg.setTimeStamp(0.396588741174);
    msg.setSource(35750U);
    msg.setSourceEntity(80U);
    msg.setDestination(850U);
    msg.setDestinationEntity(111U);
    msg.formation_name.assign("DORPFSXKZKGCXWWNOVZIPZUORRUIIUEMQAQIHGSTEGOJJEUKDTGDPEDRYOLAZQWRXIBAABPSGEGBWXVCHNJHHBLYSBJNYTUCSTKTZLOWKKHVTVHBXAQMVHFMLDBEQXPBZUNHWGXAILCYSZLHYWXNFPTALOQDBDLJLQMWOYWJTTOGTRNFENARFUCKSEPZQUBXJKRNRVMMJKSCLYYMPYWGZJIEFVNFUPIKS");
    msg.type = 206U;
    msg.op = 34U;
    msg.group_name.assign("DCYCCBTCHDOBOGPCODHMTTSNQQCYABRHRCQXZETHMFNUIBRIAMDLRDZGHJSJHJELIATSAVSIVFMNPDBVXUPFKEJCPGXSKFCIWTNEZYFAIIHNLUIKEEXJKDRVLKSOVWSXBKLONCZTUVFFWKXPGEWUWRYUWMAFXXTOSMGMKNAROWJJSZFHFYSVGUZ");
    msg.plan_id.assign("ZJWDMKNXVKQRYTZDXVBPACHNLSUGGWNAUEJAFQTAWQHLQOCVFUENXLZEKNWYXPZAFLORJXAHRMLGCSMMBIUDILEBTHQCYXSGTHHGBJOCQRJRKOEJVOZPGFDRRZLAORBWXRLIFDCKGNHIMOMTQPJITYBMTPTUDKZJMVUGDZTADNUISPAEPHWOYFVN");
    msg.description.assign("CNTXWYHYJERHZVOMDLGDQCPONEUFSSYSWZLJXHYCCONCKYGLUIKRCFLGQEQRHRLOWVTQQZQLPEAUGPTQTEVXUMPSQQAZCBCVXIOCTVLSSADBXGOBSYJ");
    msg.reference_frame = 204U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 35052U;
    tmp_msg_0.off_x = 0.561118542828;
    tmp_msg_0.off_y = 0.925715387086;
    tmp_msg_0.off_z = 0.949943239343;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.282855325073;
    msg.leader_speed_min = 0.166542723177;
    msg.leader_speed_max = 0.647045734258;
    msg.leader_alt_min = 0.504316751194;
    msg.leader_alt_max = 0.370634809705;
    msg.pos_sim_err_lim = 0.360750188433;
    msg.pos_sim_err_wrn = 0.716777671505;
    msg.pos_sim_err_timeout = 37320U;
    msg.converg_max = 0.692978555508;
    msg.converg_timeout = 34979U;
    msg.comms_timeout = 9645U;
    msg.turb_lim = 0.0136961054107;
    msg.custom.assign("CVYNCNSQPVKSGXLOQODWLBETZSLDLTFTADFRWICNBXJWIDKZIHKLXRARPKBGKHVTQFMWTGMQKHDHVYASQXQWLMUEHQYMHJGZNCXBEKRRZJSPFUROIYIUPMBLMJ");

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
    msg.setTimeStamp(0.591771947627);
    msg.setSource(40472U);
    msg.setSourceEntity(205U);
    msg.setDestination(48889U);
    msg.setDestinationEntity(205U);
    msg.formation_name.assign("MKXSPBWGDEOIBZVMJBASHGAKBILRXWDQNKVSTFVLODQLVGCENZNWTYYJQCGGFSWBMOJIQYHLKSVZDODMLUKUKHYLRPTKSCPOCMWIYYFYMJJMQXLNEUTXXIVARUCDJRQLUGUQAJMVFDPDQNXZTVAPBUTEOCXNFHNUAQBHZTOP");
    msg.type = 113U;
    msg.op = 114U;
    msg.group_name.assign("ASENDNBFZIRTBLTESOTIGBYKDGVNQPQPWWMVHOWDCPDCAHEPYQRSKRDVMLZXKMGJRIZHEEJKAKZPCCMMXSHIJMLMVMIBGQKRIKHLYUXEQZSOPWALADXJUOSHOZNEGYNBHLRRSJTDSHVPFGOXIRMBQJHVAIWTANKQVARJUDOFIXSYUZPCEGFNMFFOJYCZCKLQYCWVBWNZCWTTUJUPCOYDGTTOEYVPLLXFZSDAQFXWFVQYTWNUXJGIEG");
    msg.plan_id.assign("MPEGMZTYTKZNHNPMARSXTIIMWLWBRHJJVS");
    msg.description.assign("KUURSFHYPPUNPGQWATRJWPGKFTMWAJDBRIAALLSYXMVGEOQVIENUXRWETNMEAHDHZTDAOHTJXGMCRCDQIRVZZLBMOHYSBQVMCXWYS");
    msg.reference_frame = 6U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 50370U;
    tmp_msg_0.off_x = 0.78157101622;
    tmp_msg_0.off_y = 0.0163364204565;
    tmp_msg_0.off_z = 0.438534711227;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.646130494887;
    msg.leader_speed_min = 0.164199736321;
    msg.leader_speed_max = 0.0178701752813;
    msg.leader_alt_min = 0.601738260899;
    msg.leader_alt_max = 0.0489295661373;
    msg.pos_sim_err_lim = 0.117663598971;
    msg.pos_sim_err_wrn = 0.745539641355;
    msg.pos_sim_err_timeout = 50335U;
    msg.converg_max = 0.106740326951;
    msg.converg_timeout = 15770U;
    msg.comms_timeout = 42682U;
    msg.turb_lim = 0.811932137008;
    msg.custom.assign("KOMZEOJZXGSCHDPXTWVKXVSDUPKSSVEWRZBQZAXIMXYMQFITIFOYIDYTAFLJWMDTMZWOSYXDJPRUMXFWNHBHPFHGACXGNADAKVQENRVZVQRUVLEYUMMYQVTDBRULRSIH");

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
    msg.setTimeStamp(0.210854436236);
    msg.setSource(49500U);
    msg.setSourceEntity(22U);
    msg.setDestination(59958U);
    msg.setDestinationEntity(157U);
    msg.formation_name.assign("SLGHERPSTNZZYLMYFDXCGXPBYKQDJURWRMTRHFSKSEVAGTDMYMZKBWATHNGOJKSMJLFENXJIFYJVIKPQNQOMADLALUWDFBCIVTLAJUXTHYVZU");
    msg.type = 122U;
    msg.op = 49U;
    msg.group_name.assign("CZWJBKXYZOTMHYPZEEJGCXYOHQXNWFTBPJZFHUUUIMPCYLJSVWXOEABFVIBFYXPEAWLHERNDGYOIMPRVGOKTUKDBWOFRWICMKMNQQYSJTFLAWSVKDCXOKGAVISNMVUWLXHJFBSBRWPGTTQVQMTQRRAXAUMLSJLFKPRDVRXHBIRNYSENLZGDLSKONDCAFCVMQQUVCCZJLQGPPOWKPBEHNRCISDE");
    msg.plan_id.assign("BMQZCTRONZBNZFWISGTDEQIAKGPPXLGKOLMKXLCEMEYMDHTHEGWQYNXWBZBYAATR");
    msg.description.assign("IAUPLDTJCRRYWOIYQQDNXOUYCBBXGRNOJQVNEQPAEINGDKTACWCCLAVZYFLUIPHCCIUASCHMTVTSBFMYOFPSWUJHKNYWZXKGUHXTCEQVPP");
    msg.reference_frame = 227U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 33978U;
    tmp_msg_0.off_x = 0.785438094491;
    tmp_msg_0.off_y = 0.138611310392;
    tmp_msg_0.off_z = 0.94227390045;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.27058929425;
    msg.leader_speed_min = 0.85934232129;
    msg.leader_speed_max = 0.419186571022;
    msg.leader_alt_min = 0.291187419605;
    msg.leader_alt_max = 0.665593710647;
    msg.pos_sim_err_lim = 0.420217525681;
    msg.pos_sim_err_wrn = 0.552833711265;
    msg.pos_sim_err_timeout = 40258U;
    msg.converg_max = 0.98730433239;
    msg.converg_timeout = 39751U;
    msg.comms_timeout = 42339U;
    msg.turb_lim = 0.728654237447;
    msg.custom.assign("PPNRQKYDWWKAIJTNNFHUSAESHVJDQOTINQVIPERGRRIIKYWAXUNCZEIDKZZLBKGBHDOKKYBUWIJRMFFTFVMQMXKEOVHNNXCSSEZITOSUSBDTMCEMORCUMRSLQUTPSDQPGQCALADIPGYEHFWCAGTPXLBAXOFTWXYVJULTXXKHXVDAZYIUMLBZVLMERPLPOQJGYVZHTJBCJNHYNYWB");

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
    msg.setTimeStamp(0.462508049016);
    msg.setSource(61015U);
    msg.setSourceEntity(207U);
    msg.setDestination(33781U);
    msg.setDestinationEntity(9U);
    msg.timeout = 57885U;
    msg.lat = 0.577426712201;
    msg.lon = 0.743484535975;
    msg.z = 0.652046905204;
    msg.z_units = 105U;
    msg.speed = 0.940044752954;
    msg.speed_units = 36U;
    msg.custom.assign("AASQYXYPGKQHIHGFPWAKUEWDNPNLAWIBAHWSKGTIGSJQPJGZDBLMCAOAOQSEPCBOZNIBWJOFVSGYQCFWEZLHYMNSETIMYUZYLUECZQDTCNZUDHFOWRVLGDUGDQ");

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
    msg.setTimeStamp(0.0599018270861);
    msg.setSource(51170U);
    msg.setSourceEntity(5U);
    msg.setDestination(63268U);
    msg.setDestinationEntity(54U);
    msg.timeout = 57010U;
    msg.lat = 0.517850786767;
    msg.lon = 0.330327118207;
    msg.z = 0.0288724133288;
    msg.z_units = 192U;
    msg.speed = 0.76210810696;
    msg.speed_units = 186U;
    msg.custom.assign("JMRPZATNJKTHAANBIMSKUWMOCQJQZADMKWWZHKUPULEBQGOEPBTXDHEJLNUDNPACEDQRDCKUTHGPVVGCTVFWHMYIIVFQEGEHZUYNWWSPYXRTGHF");

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
    msg.setTimeStamp(0.0686224131084);
    msg.setSource(29739U);
    msg.setSourceEntity(67U);
    msg.setDestination(28931U);
    msg.setDestinationEntity(135U);
    msg.timeout = 32153U;
    msg.lat = 0.524274927649;
    msg.lon = 0.816071619303;
    msg.z = 0.871202820213;
    msg.z_units = 12U;
    msg.speed = 0.448960618467;
    msg.speed_units = 238U;
    msg.custom.assign("RRYTDUQRDHRARDLNPUXLDZTHRFIJZSOARVYSUBFTFCKJPECRGUEGSMNYBFOPYCXWCCOXISHWUPHXWUWDKFXXQBGVBEUFFIVQSGTUBTHEMLIAIBLWKHPMGGVAQSNHZSXNFIBRJPWTVPDYQONOWZEIVOKNBYEXKSVMKLYVGTZQLBIADQDTJICTKAIGLYCEJAKNMFGCQJMFZUJCYVOMPPHEMANTWNAZSUOKMXVJL");

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
    msg.setTimeStamp(0.511907126168);
    msg.setSource(4814U);
    msg.setSourceEntity(158U);
    msg.setDestination(8528U);
    msg.setDestinationEntity(238U);
    msg.timeout = 58707U;
    msg.lat = 0.150739161887;
    msg.lon = 0.828167019195;
    msg.z = 0.759820459074;
    msg.z_units = 242U;
    msg.speed = 0.713528234711;
    msg.speed_units = 243U;
    msg.custom.assign("NZOPQXQSPQMLJDLWIZRDGNPUPBBDBDAFVFQRKZIRJ");

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
    msg.setTimeStamp(0.771928891387);
    msg.setSource(44476U);
    msg.setSourceEntity(25U);
    msg.setDestination(25329U);
    msg.setDestinationEntity(232U);
    msg.timeout = 59172U;
    msg.lat = 0.0299944635426;
    msg.lon = 0.0683201992136;
    msg.z = 0.0138181400424;
    msg.z_units = 29U;
    msg.speed = 0.408384123142;
    msg.speed_units = 42U;
    msg.custom.assign("SQKQTFOISMVASBEDTLDRKJLWJMAZXQUQHBEOKCTBEGDGLUTBDZCULWDUHJUXRCWXTXHSWZANZVPYYONKKORJEXUQBCGFGIIUZUVIRE");

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
    msg.setTimeStamp(0.684991766726);
    msg.setSource(61289U);
    msg.setSourceEntity(110U);
    msg.setDestination(19452U);
    msg.setDestinationEntity(225U);
    msg.timeout = 41898U;
    msg.lat = 0.882208941961;
    msg.lon = 0.240051107601;
    msg.z = 0.729954471297;
    msg.z_units = 152U;
    msg.speed = 0.68513680837;
    msg.speed_units = 160U;
    msg.custom.assign("MTOYZNIFPZ");

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
    msg.setTimeStamp(0.554730263161);
    msg.setSource(40830U);
    msg.setSourceEntity(165U);
    msg.setDestination(46069U);
    msg.setDestinationEntity(127U);
    msg.arrival_time = 0.316620880994;
    msg.lat = 0.0455622265694;
    msg.lon = 0.0257711098549;
    msg.z = 0.264217118504;
    msg.z_units = 66U;
    msg.travel_z = 0.128043442932;
    msg.travel_z_units = 104U;
    msg.delayed = 120U;

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
    msg.setTimeStamp(0.167450470924);
    msg.setSource(53616U);
    msg.setSourceEntity(194U);
    msg.setDestination(6004U);
    msg.setDestinationEntity(72U);
    msg.arrival_time = 0.82044852115;
    msg.lat = 0.356590285936;
    msg.lon = 0.11966023387;
    msg.z = 0.576116240598;
    msg.z_units = 180U;
    msg.travel_z = 0.10672074742;
    msg.travel_z_units = 96U;
    msg.delayed = 33U;

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
    msg.setTimeStamp(0.567591174617);
    msg.setSource(5708U);
    msg.setSourceEntity(35U);
    msg.setDestination(42080U);
    msg.setDestinationEntity(47U);
    msg.arrival_time = 0.598093326485;
    msg.lat = 0.555777185234;
    msg.lon = 0.156114632927;
    msg.z = 0.966115245781;
    msg.z_units = 224U;
    msg.travel_z = 0.675846531257;
    msg.travel_z_units = 118U;
    msg.delayed = 98U;

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
    msg.setTimeStamp(0.609902564477);
    msg.setSource(19039U);
    msg.setSourceEntity(46U);
    msg.setDestination(56414U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.562972326745;
    msg.lon = 0.632635987851;
    msg.z = 0.55633924218;
    msg.z_units = 148U;
    msg.speed = 0.424971374415;
    msg.speed_units = 6U;
    msg.bearing = 0.0526160683796;
    msg.cross_angle = 0.92012048846;
    msg.width = 0.0539082896082;
    msg.length = 0.649206010102;
    msg.coff = 54U;
    msg.angaperture = 0.963343102897;
    msg.range = 62143U;
    msg.overlap = 64U;
    msg.flags = 250U;
    msg.custom.assign("OOSJGTDMAYROXWEUMJKDKDMYGYSCQNURDOEFBYPYJOFCEWJFAOHWMVTENPZBZKHHBWSTLJLFWNBVLAUWLBSOBHGZQXQEDZIDAXVPKRSFVZVYQTFPYBPIGIRXVCNZWICRXFOFRMGVHKGGFEGSZGCWEFUJUAIVPIQIPMTDKRKCULPDQTNLUTLVBQIXNUAYAEKBPJSAMJ");

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
    msg.setTimeStamp(0.42521341299);
    msg.setSource(29847U);
    msg.setSourceEntity(176U);
    msg.setDestination(6904U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.472155958755;
    msg.lon = 0.564855676591;
    msg.z = 0.357604062673;
    msg.z_units = 65U;
    msg.speed = 0.572504624378;
    msg.speed_units = 233U;
    msg.bearing = 0.0232476765507;
    msg.cross_angle = 0.913873908998;
    msg.width = 0.342872232276;
    msg.length = 0.0751821499085;
    msg.coff = 101U;
    msg.angaperture = 0.187402278705;
    msg.range = 5004U;
    msg.overlap = 210U;
    msg.flags = 27U;
    msg.custom.assign("USZRYIKUCTJUBKDEBGYDPAGZQRKRDUTSDPVGVANLTJKOELMZTCJAGMHPNANKLDWDOUMMGTBXSMEZNPWZTFJHQRMLHTJQFBPXTMWTHSWQSGPYCCOVBGKKCQUFHXCOCZXXVZAHNPSXJYLGPLWQQAQVEDRMDUKHHVYSFLRNXGFIIFOGZWFAVYAABWVUOLEENVYLIFCOEVEKFLI");

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
    msg.setTimeStamp(0.544985264532);
    msg.setSource(62520U);
    msg.setSourceEntity(248U);
    msg.setDestination(56369U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.230551000164;
    msg.lon = 0.246663288886;
    msg.z = 0.0319178650081;
    msg.z_units = 123U;
    msg.speed = 0.0391462358661;
    msg.speed_units = 102U;
    msg.bearing = 0.0675738387668;
    msg.cross_angle = 0.657200501341;
    msg.width = 0.723896457412;
    msg.length = 0.622979133327;
    msg.coff = 205U;
    msg.angaperture = 0.954741998408;
    msg.range = 26957U;
    msg.overlap = 13U;
    msg.flags = 17U;
    msg.custom.assign("FPAVVZEAPKBWLPBWXIVGRHRWKGFRPPBYKIXZGTMSEPECOENBIMTNEXXFIKUGARQGXDEQKYYCBTPRSHCHLFLCZDXFZZNZOWDCJZHRJMBUQHQJIQHQFIPBUSQXWGHSLPXMVDAFIQIMOCHYAWJOMGOBRJANMVJVSSYZD");

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
    msg.setTimeStamp(0.467511171121);
    msg.setSource(29925U);
    msg.setSourceEntity(104U);
    msg.setDestination(62819U);
    msg.setDestinationEntity(221U);
    msg.timeout = 54648U;
    msg.lat = 0.433155153495;
    msg.lon = 0.423748768364;
    msg.z = 0.881873137987;
    msg.z_units = 138U;
    msg.speed = 0.335300377339;
    msg.speed_units = 127U;
    msg.syringe0 = 116U;
    msg.syringe1 = 103U;
    msg.syringe2 = 156U;
    msg.custom.assign("JJRYPBHXPFPPCUELWBWHOFGMJKAJDZVJXPGEITVDQASLWBFFSGLTACIMKVLYPEJYWEJDKNDPVUURINWZKQQVGCKNCBULUWADOXOVYULXMZXIOYOTQZCBAZXSJJOGKGEFYGQRSARIRZZESNSFNWYJNGQPOQPUNXVFMUHLKAWVZGYKTVSBHZ");

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
    msg.setTimeStamp(0.175618915432);
    msg.setSource(7732U);
    msg.setSourceEntity(130U);
    msg.setDestination(15632U);
    msg.setDestinationEntity(175U);
    msg.timeout = 44575U;
    msg.lat = 0.418127593648;
    msg.lon = 0.418489027473;
    msg.z = 0.279065003609;
    msg.z_units = 117U;
    msg.speed = 0.25682666634;
    msg.speed_units = 76U;
    msg.syringe0 = 2U;
    msg.syringe1 = 190U;
    msg.syringe2 = 243U;
    msg.custom.assign("GZONMTWYBJXIBWHYDFFUMCPJZBPOTLHEHEAPDAHLGRBNAKTBWFLYZNDUEEKCBSQPADRSNZZOGHCTZVUKINOPMBCDWWKXMVLERSYYJYXCGTSNGVWQIRGSCJQMGTODAVGXXAKA");

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
    msg.setTimeStamp(0.0447335850243);
    msg.setSource(63808U);
    msg.setSourceEntity(183U);
    msg.setDestination(967U);
    msg.setDestinationEntity(191U);
    msg.timeout = 8821U;
    msg.lat = 0.0771407296674;
    msg.lon = 0.636035183445;
    msg.z = 0.210947826182;
    msg.z_units = 86U;
    msg.speed = 0.505422229883;
    msg.speed_units = 198U;
    msg.syringe0 = 58U;
    msg.syringe1 = 13U;
    msg.syringe2 = 94U;
    msg.custom.assign("VKXNJNOZYAHBNINYNKCOETEKSRUMIVJGXGOYAZRUVIHIFWLZZHZHSQJFQQR");

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
    msg.setTimeStamp(0.910087189695);
    msg.setSource(53873U);
    msg.setSourceEntity(26U);
    msg.setDestination(18025U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.701511235594);
    msg.setSource(63738U);
    msg.setSourceEntity(43U);
    msg.setDestination(41945U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.307287376204);
    msg.setSource(22313U);
    msg.setSourceEntity(238U);
    msg.setDestination(26809U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.32912225877);
    msg.setSource(12113U);
    msg.setSourceEntity(49U);
    msg.setDestination(2780U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.628556761004;
    msg.lon = 0.133634192095;
    msg.z = 0.390206423692;
    msg.z_units = 172U;
    msg.speed = 0.794989144628;
    msg.speed_units = 177U;
    msg.takeoff_pitch = 0.271778638749;
    msg.custom.assign("YMDWHJZAEHFJIPBCJKTJYUZHNCOLAMSRWLYFSKEYJDVVEGYXA");

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
    msg.setTimeStamp(0.281512171065);
    msg.setSource(34075U);
    msg.setSourceEntity(52U);
    msg.setDestination(15975U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.655404398799;
    msg.lon = 0.680736794446;
    msg.z = 0.856995905947;
    msg.z_units = 221U;
    msg.speed = 0.0478213995856;
    msg.speed_units = 51U;
    msg.takeoff_pitch = 0.0936773424338;
    msg.custom.assign("FHGUPVOPQBVAVARDUJZCCPABZAOYUHRCVYVLHETWSILOZJBSQVZFSXNXIWATUNNJNFYZLMYSSMBDITEGXRJOQPXUXDFMQOEBZWJVHPQXDFNAHNEUOIQREFGAHMDKWLBNSGUUICXTECQLCWZVKYKTDTMWHMOEONJPFFKSJOMYZMRDREFBVZDVWWKOGLPRQHAUACGYFHRTKLCYTBRTUCNWWMCTIYDQJKAKLJPPYXPDJGEESSKISLXQN");

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
    msg.setTimeStamp(0.492778352936);
    msg.setSource(22358U);
    msg.setSourceEntity(130U);
    msg.setDestination(50767U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.531624131194;
    msg.lon = 0.959278771655;
    msg.z = 0.144204560358;
    msg.z_units = 93U;
    msg.speed = 0.760499435621;
    msg.speed_units = 206U;
    msg.takeoff_pitch = 0.657076576972;
    msg.custom.assign("EFUCHBFVSYJUYNQIWPAPUYAHOMRWMZPWAOHRUEVYBZYPNCBLCEPNIULALPJMZXGW");

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
    msg.setTimeStamp(0.657488341248);
    msg.setSource(35232U);
    msg.setSourceEntity(2U);
    msg.setDestination(52686U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.946619959252;
    msg.lon = 0.358253483272;
    msg.z = 0.270584363526;
    msg.z_units = 231U;
    msg.speed = 0.745592052966;
    msg.speed_units = 124U;
    msg.abort_z = 0.651199273744;
    msg.bearing = 0.215596752582;
    msg.glide_slope = 189U;
    msg.glide_slope_alt = 0.194859357192;
    msg.custom.assign("ASCRMKMHGWHYUFNJFKHSQPIRENCQLUKXCOLHNKJVSTXRMROOEWJHXXEDTIIVZXAYLCIBOCVKGSOLOXQTGZDOWQVZZZJZMCOEJPPEBUFZASDQJTRDYSPMYWGTFOKFZRYHURSIMLNSPVRBJNUVYJDGDYCEVKNWIBOYDCEA");

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
    msg.setTimeStamp(0.727166836667);
    msg.setSource(36806U);
    msg.setSourceEntity(81U);
    msg.setDestination(18819U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.131072052449;
    msg.lon = 0.448676238426;
    msg.z = 0.421759489765;
    msg.z_units = 216U;
    msg.speed = 0.672510030606;
    msg.speed_units = 202U;
    msg.abort_z = 0.798957035909;
    msg.bearing = 0.0510755043291;
    msg.glide_slope = 210U;
    msg.glide_slope_alt = 0.215561991348;
    msg.custom.assign("GKZWFQNCWIHUBSROSZK");

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
    msg.setTimeStamp(0.932734365432);
    msg.setSource(23923U);
    msg.setSourceEntity(216U);
    msg.setDestination(8671U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.598550869308;
    msg.lon = 0.380287005262;
    msg.z = 0.890775729894;
    msg.z_units = 48U;
    msg.speed = 0.703641605304;
    msg.speed_units = 200U;
    msg.abort_z = 0.961682231822;
    msg.bearing = 0.404991189999;
    msg.glide_slope = 53U;
    msg.glide_slope_alt = 0.846133689738;
    msg.custom.assign("JQQIRMGPTJLEZNHWGUYVDKPRRHFMLZSMYLIKSVTNSWMFOJWOPBJXYXNOFCBZKWOUBQWBHVSNYIIJTNFACGDYMACFXHHNQUSWPASXKRFGZEACZTUEMYOEZYAMVJPTVNEGUDGROLANYCCRIUVLFKAHXSDBCYIDBLOTPPIMVQHXLJOPFDANGNVEHGLSPQUZBDRWCOKDWIAYRGDERQOTVCKXULZSQMHDXSKGJWJJMETKWFRIPCF");

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
    msg.setTimeStamp(0.176684239171);
    msg.setSource(20835U);
    msg.setSourceEntity(61U);
    msg.setDestination(44029U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.117879625712;
    msg.lon = 0.279266734837;
    msg.speed = 0.943683189941;
    msg.speed_units = 65U;
    msg.limits = 247U;
    msg.max_depth = 0.26712056943;
    msg.min_alt = 0.81206695325;
    msg.time_limit = 0.327037054063;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.520397329884;
    tmp_msg_0.lon = 0.577352514912;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("UOUNQZFYDBEVHJSNLGPWMFWZGLCJEJYBWRANLSACTPGNBMZWZAAPVWETYLCANLFACQLZJXSTBGZXULNTAPYNMFPWTXOQURCHFTMHKHWOELHRATFBXVBSFVVREKKYOQFRXDTWHOYGLJCMDUJGNKAZXVWNCOEXDRRJWINOBOIPCRSMSYOPIBXSZHKUHTIQAIMXDSCUKVEHKB");
    msg.custom.assign("YKBUDROYEEJJZHMJJRHWIIMFLYH");

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
    msg.setTimeStamp(0.4540923322);
    msg.setSource(37130U);
    msg.setSourceEntity(15U);
    msg.setDestination(54314U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.499041515885;
    msg.lon = 0.709043149367;
    msg.speed = 0.416925094267;
    msg.speed_units = 19U;
    msg.limits = 227U;
    msg.max_depth = 0.196933139845;
    msg.min_alt = 0.0300608862872;
    msg.time_limit = 0.918240811206;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.467789603455;
    tmp_msg_0.lon = 0.814971919011;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("VKMOAQDYIUVOIJEUZXXUZYZHXKAEOYQJIZSQTKAFQPPLNXVGKEMATFDYIWNWPLDGMBNRSHLDYFGUVEBUDSAMMPFDJOAHRLHIWMVCUQQTPZMRSNTOWKBNJCXHUOHCEYUKCKEBLTXOYHSFXHREINCFWJGMSWQBRLIBDUPGNQBEDKBEADGVSFPCZ");
    msg.custom.assign("ZWKFCSHBDQLYVCSNQKKDAOWYWVTVEXJBHTIHTAMDNBETDJUEUGNQCAZULJVGYXBKURXRMDQURIUVPSSSAPZOFOSCBKOVIELPEEQOLTLKVQHCNDWYPHMRJGSCCFWOYXFMNSJGDCPILAFBTJUPQRYZMIAGYLTMFMAPBZPTPVKUYITWUGAFZDIQHQHFWYKLMSECHKBZEOJHIBUGGNRXSJXW");

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
    msg.setTimeStamp(0.340182037304);
    msg.setSource(21161U);
    msg.setSourceEntity(196U);
    msg.setDestination(54076U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.579167665654;
    msg.lon = 0.451632255325;
    msg.speed = 0.31734470573;
    msg.speed_units = 198U;
    msg.limits = 90U;
    msg.max_depth = 0.855484977946;
    msg.min_alt = 0.882005078186;
    msg.time_limit = 0.495133618437;
    msg.controller.assign("WOMABCVTNWMHGWFHYLEXGDIMXTTEZZZALDQGDKTRYY");
    msg.custom.assign("UTPWQBXQSAFXJVOEEYPGNOEBVMQADYKINDDYCJLROMXGMELKEXFRKXBHAHKTIGTZQXSQIZLUJSMVQHRPPVTUFMFZUQRUIQYGKQLVJIXFYYENHKHGEXLWFRHCOGXTGBWOZLAIBCMGWMFZMNJFKSHCWISCSXDPPKNZYGJANVDWENUWWVOUOLKZVUPMNSHVWOYLBVUFMLBJSNTNECODYZSHZIZRKDCPBWJLJTTAEG");

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
    msg.setTimeStamp(0.642636475111);
    msg.setSource(7972U);
    msg.setSourceEntity(228U);
    msg.setDestination(50879U);
    msg.setDestinationEntity(251U);
    msg.target.assign("VPIEAGQFWEVKWPRVGMLNLSZQIWTBOFHIDQSQVYOJJFUHFYQVBZKTNBXVCZLDFPOOCUNBPKAIHPCTUKMPMNRIHHGCTTISBQVUVCDFPIIKMOLSGJKCYINRTUDADDLJAHZCBWKMTCLWRDLOUXAVRFMFRETMXZAF");
    msg.max_speed = 0.0210901867751;
    msg.speed_units = 203U;
    msg.lat = 0.979106134384;
    msg.lon = 0.313345350125;
    msg.z = 0.428654768731;
    msg.z_units = 88U;
    msg.custom.assign("QLRUZEZFBBODKBPHJPXCGEEULGTJTHMECMOMEAWKHSTXGCUYHQHKNSOODPLEYUIIIQGNBBUIQCKWVDPLBPPIOYOMLPJTSXDJXJWANXYF");

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
    msg.setTimeStamp(0.00759010790701);
    msg.setSource(39248U);
    msg.setSourceEntity(91U);
    msg.setDestination(49284U);
    msg.setDestinationEntity(254U);
    msg.target.assign("EEXWYIBKZQTYFKNFAJLHWRARDIZXBLCOKLBZDNLGRNSVCFOTGQPDZHIRFOFIBDMRWLEPYGTJGNPYPTJHKUMHDPTKGKDLGCJEHVCYMCWVDSZBARRXAILXBLSVKFIVAWZBBPUDQUXJKMJFXNQTXQMJRZYFSGESYSPIXDVUCHVBYHTMZEQTTJOUUYWOUSOQVMUUGACZFY");
    msg.max_speed = 0.347663909205;
    msg.speed_units = 189U;
    msg.lat = 0.387700588254;
    msg.lon = 0.441000425611;
    msg.z = 0.9357078459;
    msg.z_units = 177U;
    msg.custom.assign("VATTMLLVFDWIAIPBUOTUVBQPKNIFFHMEZSDLANFCEOUQVSHCIDLODOKGGCI");

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
    msg.setTimeStamp(0.0347315716185);
    msg.setSource(51201U);
    msg.setSourceEntity(251U);
    msg.setDestination(51440U);
    msg.setDestinationEntity(211U);
    msg.target.assign("LJEKYBAJRCOSTHFBVSKFFSAESUZYIGXGZMBWBGTKURICBCDEXNILVPQZXFZWPIAANOFGBCYFUPVZPCRVHUBWLRUHANRHMDOMVZAJNDKM");
    msg.max_speed = 0.601234778822;
    msg.speed_units = 171U;
    msg.lat = 0.485416682826;
    msg.lon = 0.71731528024;
    msg.z = 0.836237962698;
    msg.z_units = 93U;
    msg.custom.assign("SRELCLZPMNKGYXONMSJHFKAVWFNRJCMIDFEJCGVUJVKSPONZBIKEGBDDNDZWPCQROLBKRLBBZXSGXUTVQSMTGFCQWAINHHYIQTQHCLFOGXMROQVMWPWUFIPJHWDQCVKFFRIGUCEG");

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
    msg.setTimeStamp(0.0443532862303);
    msg.setSource(59027U);
    msg.setSourceEntity(249U);
    msg.setDestination(62022U);
    msg.setDestinationEntity(239U);
    msg.timeout = 1278U;
    msg.lat = 0.524894894588;
    msg.lon = 0.461803348262;
    msg.speed = 0.349065759397;
    msg.speed_units = 116U;
    msg.custom.assign("LEXFWVQMNFPJSSCQVVDYTIJUGGCXZHMGTCEVKRVBQPYQAHUFUMEWSSZQFUELZCDIONIUTRAVFHLXJKGCZIMECPULWCAKDYDFAVORHBBAPYXIPDKQOAR");

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
    msg.setTimeStamp(0.123027172682);
    msg.setSource(64412U);
    msg.setSourceEntity(144U);
    msg.setDestination(7433U);
    msg.setDestinationEntity(135U);
    msg.timeout = 3872U;
    msg.lat = 0.514880369409;
    msg.lon = 0.651427937437;
    msg.speed = 0.0920275872705;
    msg.speed_units = 0U;
    msg.custom.assign("RKFVRZGWNJSEWYXKGXXLVVITEMBHTPLAFPRDARBGZCLNUJVIOQQOWMPCJRLDZYNEFUSMQGOFEDCJRPVKGCWSYKQSDMYKCUQDEWNZWVFMUYZTBHGFPHQHCECSDWNBHYZUUDQMOMNBQTOYKODXDPNVSRAWSFAAVVCIGRPFAWZOOIIHTQILIORUBTTJASAYOPKAZBUMHEBCXPMTLIZZXLT");

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
    msg.setTimeStamp(0.690557909201);
    msg.setSource(8922U);
    msg.setSourceEntity(84U);
    msg.setDestination(22047U);
    msg.setDestinationEntity(92U);
    msg.timeout = 15733U;
    msg.lat = 0.718247161883;
    msg.lon = 0.587240130137;
    msg.speed = 0.84062780981;
    msg.speed_units = 126U;
    msg.custom.assign("JBZXREJIEDRCIJACWHXPTBOSTVETKZSVWOEJYLPEMVEXICMNLNKKKYEIOKWWZBWGPLXMAFHRDACPRYKKCDJHQSNSVNAMGXUJJFXQMUROZXZPFULLBHUTKSVJLHINUUZAKWUPTDQWVNOURHOPQDYPITGZFHBLOYQVEP");

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
    msg.setTimeStamp(0.423541858244);
    msg.setSource(1454U);
    msg.setSourceEntity(183U);
    msg.setDestination(32265U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.267819417356;
    msg.lon = 0.693835200672;
    msg.z = 0.493313581364;
    msg.z_units = 72U;
    msg.radius = 0.297873451469;
    msg.duration = 30379U;
    msg.speed = 0.507000842709;
    msg.speed_units = 82U;
    msg.popup_period = 41531U;
    msg.popup_duration = 2546U;
    msg.flags = 66U;
    msg.custom.assign("VYDFFXSUORGMGOOPNUEEOREAZNHHHUMCTQJDLITXSKDKGUKXUABXMEPFWPIDGZFUIZINRLVZSZQMVJPSZVWBVHTBHQRQNVHHPCYNQMAJUPCUBGZTXJZBFNKQLBIRPAXCJNCYJAZAFEOILREMSGYOBBESBKIQTWEEKJSKCYTRTLEHWLNDGACAWDJPFLICDURPDVFWYHMYRLLPHVQUSLISVQGZKFMYOCAJ");

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
    msg.setTimeStamp(0.891496191818);
    msg.setSource(60911U);
    msg.setSourceEntity(63U);
    msg.setDestination(35916U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.0228712420441;
    msg.lon = 0.767504756263;
    msg.z = 0.182026423265;
    msg.z_units = 233U;
    msg.radius = 0.656718267604;
    msg.duration = 59261U;
    msg.speed = 0.595489009924;
    msg.speed_units = 184U;
    msg.popup_period = 23712U;
    msg.popup_duration = 64380U;
    msg.flags = 54U;
    msg.custom.assign("YJYGYZHDSGXCRMDWLEKUKSDQNVEPPCVSXGOGBOBJVYTKTZKUMNACZMBHYWJUEWQSRIKZYISUZRKZGBUVPEIXCCFWUOPQUDYJTECBNWMEBAXAZHQOSJUGVZGCRLNCJRVIDBFFCVOEWXSNKTTAXLOJADQNDYPLQVTGHTLEVMZSEVJMHFPIOIKHPWRFSNWMLXBDFDCJIRRAUFUIKXILPM");

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
    msg.setTimeStamp(0.809440557524);
    msg.setSource(17370U);
    msg.setSourceEntity(197U);
    msg.setDestination(12594U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.0659744528302;
    msg.lon = 0.809976905053;
    msg.z = 0.894724368734;
    msg.z_units = 177U;
    msg.radius = 0.265812375518;
    msg.duration = 15875U;
    msg.speed = 0.613302977973;
    msg.speed_units = 163U;
    msg.popup_period = 39438U;
    msg.popup_duration = 39924U;
    msg.flags = 102U;
    msg.custom.assign("CBUJAYMCHNNTSZRAPBODGKYRKJWLWRAFLSZNITXMNIDUQPWHOOEGHTTSXCY");

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
    msg.setTimeStamp(0.224421882157);
    msg.setSource(30697U);
    msg.setSourceEntity(72U);
    msg.setDestination(14229U);
    msg.setDestinationEntity(242U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ZPYARYDIEFEOJ");
    IMC::FollowPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target.assign("NYKORJCISTEEBLRJCLYOKYKCMXW");
    tmp_tmp_msg_0_0.max_speed = 0.695762159373;
    tmp_tmp_msg_0_0.speed_units = 200U;
    tmp_tmp_msg_0_0.lat = 0.487618039052;
    tmp_tmp_msg_0_0.lon = 0.636706550363;
    tmp_tmp_msg_0_0.z = 0.246240086108;
    tmp_tmp_msg_0_0.z_units = 106U;
    tmp_tmp_msg_0_0.custom.assign("MMCLYBNFAGTCWRCGJCTGTIOFMMFVVRQWVOULHOLXPLOMEHDIBDQXEEPXTIPVKJWPKODFBGPRHWJDNANQZKAVJANSQXSIHPNELJDECTSRNZQQFJYVFBHYUZVLJOEUWSXNHJWCGWEAAEGIUAZPVTFVFKIWYISUKUSSXHIZQWFPRXOPULXGALXCSMDNLTEAKMRCXKLHRQGZKTRYZSABUSDBGYKKOOQBJ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::UamTxStatus tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.seq = 14353U;
    tmp_tmp_msg_0_1.value = 88U;
    tmp_tmp_msg_0_1.error.assign("CBLDNIQXTSVFWTNCUIAOKITMKWRVNGP");
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
    msg.setTimeStamp(0.83897779207);
    msg.setSource(61639U);
    msg.setSourceEntity(145U);
    msg.setDestination(42409U);
    msg.setDestinationEntity(28U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("AQRDJNCAWVOAFXLLEGWWNRIVAYGOCPNUTKZGLLZDFDBJWBTHTFBQLYZGPBEHXXJLEKJCHKRRMQAOQZLXZQIM");
    IMC::Rows tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 18960U;
    tmp_tmp_msg_0_0.lat = 0.468056512837;
    tmp_tmp_msg_0_0.lon = 0.186258941488;
    tmp_tmp_msg_0_0.z = 0.691673203741;
    tmp_tmp_msg_0_0.z_units = 76U;
    tmp_tmp_msg_0_0.speed = 0.578833911304;
    tmp_tmp_msg_0_0.speed_units = 145U;
    tmp_tmp_msg_0_0.bearing = 0.685577860935;
    tmp_tmp_msg_0_0.cross_angle = 0.703362232054;
    tmp_tmp_msg_0_0.width = 0.717314533981;
    tmp_tmp_msg_0_0.length = 0.433768898105;
    tmp_tmp_msg_0_0.hstep = 0.815889389098;
    tmp_tmp_msg_0_0.coff = 151U;
    tmp_tmp_msg_0_0.alternation = 78U;
    tmp_tmp_msg_0_0.flags = 48U;
    tmp_tmp_msg_0_0.custom.assign("ASTPXIECKG");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::EmergencyControlState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.state = 212U;
    tmp_tmp_msg_0_1.plan_id.assign("SBCSAQFRRBSENPGNKYFSVOUJLQTEZMWINFMPXMAGYCUCTKAEQASO");
    tmp_tmp_msg_0_1.comm_level = 153U;
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
    msg.setTimeStamp(0.319083341748);
    msg.setSource(54602U);
    msg.setSourceEntity(34U);
    msg.setDestination(97U);
    msg.setDestinationEntity(176U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("SVKVUSRTUIGFFVUALWHSXFPNDLQYBRKGEMMECYNAHPSIGVNAMPSKWZIEMIWITAAOWEKGIXOGLKQN");
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 20512U;
    tmp_tmp_msg_0_0.lat = 0.228267062115;
    tmp_tmp_msg_0_0.lon = 0.781832896112;
    tmp_tmp_msg_0_0.z = 0.378956633466;
    tmp_tmp_msg_0_0.z_units = 234U;
    tmp_tmp_msg_0_0.speed = 0.601636223257;
    tmp_tmp_msg_0_0.speed_units = 76U;
    IMC::PathPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.600436314216;
    tmp_tmp_tmp_msg_0_0_0.y = 0.0717851028535;
    tmp_tmp_tmp_msg_0_0_0.z = 0.956020295851;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("DLOKWCFIVSUFTISSLYZIY");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::EstimatedFreq tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.26013724525;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.71276535505);
    msg.setSource(55133U);
    msg.setSourceEntity(44U);
    msg.setDestination(51935U);
    msg.setDestinationEntity(214U);
    msg.timeout = 48762U;
    msg.lat = 0.548255979743;
    msg.lon = 0.413130041459;
    msg.z = 0.76862438724;
    msg.z_units = 207U;
    msg.speed = 0.5265175216;
    msg.speed_units = 28U;
    msg.bearing = 0.643124978033;
    msg.width = 0.371108912263;
    msg.direction = 180U;
    msg.custom.assign("KYHWRARCBNPNDHNPSQGAEFXCQPZMSWNXAAXQWFQMIKERIGUPPZVVUFZBXTJDAEBSCZDYFNIOTOBLLDIJNCCVVJMIETVGLKRTVPFZQMQXOFM");

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
    msg.setTimeStamp(0.971165502363);
    msg.setSource(31524U);
    msg.setSourceEntity(179U);
    msg.setDestination(37496U);
    msg.setDestinationEntity(69U);
    msg.timeout = 59505U;
    msg.lat = 0.294936684859;
    msg.lon = 0.539998399814;
    msg.z = 0.734824124288;
    msg.z_units = 192U;
    msg.speed = 0.500987020078;
    msg.speed_units = 109U;
    msg.bearing = 0.84721883181;
    msg.width = 0.729617960353;
    msg.direction = 218U;
    msg.custom.assign("GMWGDDDRXHFLHOCVXXVQCQAABNUWMZQZSLIJMDHISVMFKEVMPRTWHEQMJGRTPNQEYFOAOTAISKOPRGWTZAWVAWGYJNLXAXWNGCOROVZIUSHEPTNFXKLNL");

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
    msg.setTimeStamp(0.58022278707);
    msg.setSource(12717U);
    msg.setSourceEntity(218U);
    msg.setDestination(21061U);
    msg.setDestinationEntity(200U);
    msg.timeout = 49310U;
    msg.lat = 0.93284880154;
    msg.lon = 0.103725279151;
    msg.z = 0.171257509335;
    msg.z_units = 226U;
    msg.speed = 0.730781987188;
    msg.speed_units = 149U;
    msg.bearing = 0.743813417194;
    msg.width = 0.171036376269;
    msg.direction = 151U;
    msg.custom.assign("RMDWDGLMGU");

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
    msg.setTimeStamp(0.394766768794);
    msg.setSource(2975U);
    msg.setSourceEntity(112U);
    msg.setDestination(22579U);
    msg.setDestinationEntity(122U);
    msg.op_mode = 99U;
    msg.error_count = 238U;
    msg.error_ents.assign("JXJLPNGGFNOYOTWWHNORTOCGTTBKPJGTLDQXKEMXSALEAYERQRKQGDLGABWXZJVMZQZDKEKLVNTVUZSBYUSXDMNBAWEXRZMKPDGGHUIDGKXCQNXKEUWUFUNYBJMZAUEVSNMDRHCZDHCRHLNHSJDBOPL");
    msg.maneuver_type = 4461U;
    msg.maneuver_stime = 0.109661877894;
    msg.maneuver_eta = 8382U;
    msg.control_loops = 833344529U;
    msg.flags = 73U;
    msg.last_error.assign("KSVJANHTDYDWMFRKSGMDXAHNTVYIZHPKJZMHVYHXREGHLRXNLMZUKWPHIAVURIEUGFYBVAOFWFJJGSIGSCOYDOCCNQWJPZPHQNBUIMBOETXOZXKONFYZVUBPDXBUJPVV");
    msg.last_error_time = 0.355094619183;

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
    msg.setTimeStamp(0.836402804255);
    msg.setSource(9460U);
    msg.setSourceEntity(2U);
    msg.setDestination(42070U);
    msg.setDestinationEntity(237U);
    msg.op_mode = 60U;
    msg.error_count = 56U;
    msg.error_ents.assign("DGXEJKCPEXHMQFSZPYGJNUZMXSNJNARERLEPMLKCNCBUFFQHNITTWJUAHNUHFSARZVKMURSROAWQXILPEACVHUEUZUXBSBDCOLJJZGYHZVDJPWHYRDTVOCDZDNTQPRIFVBOFERWZAKHVMIPGJOKSHKPCXFSGMCXINMLPWOSZHGNEOQXWBICYWAFRLDI");
    msg.maneuver_type = 35236U;
    msg.maneuver_stime = 0.715516762315;
    msg.maneuver_eta = 25453U;
    msg.control_loops = 1006115116U;
    msg.flags = 174U;
    msg.last_error.assign("KBHJRVMEDIOYKVMEEWPXMUQOBDRIRQKUJBZOGFQDFWJIXKVSAIHRNRQOZDAZOSIRBAIVHGNFEFEMSBUYMWQLBCCNVXCQWONPTFUTXUYCZNLGDTKAPKGRUDPPXLUPIVOESLFZSQRTXDTZXDEBHUIJAYXGMBFLAEWZDCJOGOWSXAMUKCPYJAUSKSSYHFMNCIKMAHCVRFAZVYLLJTETJETTNQOTCNZHGBKWXJPWHGGNYMHHVIRNSBGYWL");
    msg.last_error_time = 0.405593824473;

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
    msg.setTimeStamp(0.71573806491);
    msg.setSource(5991U);
    msg.setSourceEntity(81U);
    msg.setDestination(13190U);
    msg.setDestinationEntity(203U);
    msg.op_mode = 2U;
    msg.error_count = 85U;
    msg.error_ents.assign("XASXAMTVHUJLLHFLCKCZDYLICBEMWVFGTPYDQNNTWTEXMBXEFVTLEZSGOYOCGVDRWUQYPDSGOCPQZOIVYOYBGKAKJDPJRKILMTAWPIYFEVFHUMVSXRSQDUVRHRAOQIRNAKMYZRJKNHOHYJDWFOXNCZPMQTABFLPCWNLNEQNXWBURATZSZ");
    msg.maneuver_type = 19723U;
    msg.maneuver_stime = 0.886091678675;
    msg.maneuver_eta = 53674U;
    msg.control_loops = 2304238002U;
    msg.flags = 115U;
    msg.last_error.assign("OIEGNFWMMBGCPMFTCJHFDJDSNVTHTPROHPZGYBWBKVQVKZYXCFDFQIVRDIGLYKNYUNUSRHSBDQOVYBKRFSBJDLLYXTYZLGZVHVAHNPBUMLNYKXJTUPGJSBILKSFHPHEEDEUIEBDXGRRSNUOFONQWGMWSXCKFMQXPYAJAUEZZRGNETIMWXDFWUULQMEVZTAGVJOALQITAWNAXQOCSOCKORDXPEPIZYRKIH");
    msg.last_error_time = 0.839185368069;

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
    msg.setTimeStamp(0.272553273629);
    msg.setSource(26801U);
    msg.setSourceEntity(180U);
    msg.setDestination(19182U);
    msg.setDestinationEntity(113U);
    msg.type = 208U;
    msg.request_id = 51542U;
    msg.command = 91U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 13222U;
    tmp_msg_0.lat = 0.271067453377;
    tmp_msg_0.lon = 0.983489995425;
    tmp_msg_0.z = 0.803506747426;
    tmp_msg_0.z_units = 1U;
    tmp_msg_0.speed = 0.72956724024;
    tmp_msg_0.speed_units = 21U;
    tmp_msg_0.custom.assign("HQNRUDAVJSOXEXSQFZBXJEIXSEZUWHBGCIFGWOXXGJUBASCYSRHZRYNIPVMNLIKALCTBTRFRMKMGEEQCHQLKUEBMJGDYKPBEDLIEKJDPPVYSWNRUCWMTBFDWOPNAVTJZIWNLAGWKMYOIYZKZUWQPMNCGZDFYWYDIBVOFTRHHTQHTZDVQXMFHQUNAKOMNPZWIKHOOVLXLAT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 63553U;
    msg.info.assign("OYNUKLCLBLUFHSJDENGMIQDQYGWDZLZTILRBCIEAQVJNGKARJEPMVQTHARAGLXVCSBDQKKEOEOCCHABUKOXZFWNRSIFYBNRMXABUEMUXKZTFNTVBFCPGYJYUDVLXYWINRQWBGCJFQUTAHKMDSHMNETEMABFDWPXNDGRKJKKVWSSORCVXQZADMQSDHM");

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
    msg.setTimeStamp(0.780740819691);
    msg.setSource(8696U);
    msg.setSourceEntity(124U);
    msg.setDestination(25015U);
    msg.setDestinationEntity(208U);
    msg.type = 69U;
    msg.request_id = 29225U;
    msg.command = 206U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 16866U;
    tmp_msg_0.lat = 0.272832881537;
    tmp_msg_0.lon = 0.522365956477;
    tmp_msg_0.z = 0.176759835146;
    tmp_msg_0.z_units = 183U;
    tmp_msg_0.speed = 0.437201240491;
    tmp_msg_0.speed_units = 0U;
    tmp_msg_0.roll = 0.572020136857;
    tmp_msg_0.pitch = 0.268053410228;
    tmp_msg_0.yaw = 0.427642343173;
    tmp_msg_0.custom.assign("TGJROYOBVELTSPUHQAEJLZZFLQJFEHVYYZXXQRWBXWYEVNZSKLCMASPMSCERCIIJNEHMYPHNDUYOJYLSFKZPSEKGLILJLPMSUNWWGVKODCIZDDGGAAGOVYUABKXQMKBHHBQRMXRXZMEGNVIEPFRFJHUIHGAUNTWSOKVDLQFXVRUUJFEAHRMIHAPKDGVTIXPJRKRQDWWZBDDOBZXTGYVPBJMDTQCFYSNILC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 6762U;
    msg.info.assign("TTBZUFRYMVSMEQLGYRDRHUWVLYHSZ");

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
    msg.setTimeStamp(0.82194909951);
    msg.setSource(63384U);
    msg.setSourceEntity(237U);
    msg.setDestination(215U);
    msg.setDestinationEntity(126U);
    msg.type = 242U;
    msg.request_id = 21173U;
    msg.command = 1U;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.314999376455;
    tmp_msg_0.lon = 0.459725239895;
    tmp_msg_0.speed = 0.314770885647;
    tmp_msg_0.speed_units = 27U;
    tmp_msg_0.limits = 102U;
    tmp_msg_0.max_depth = 0.00934797357392;
    tmp_msg_0.min_alt = 0.234311631506;
    tmp_msg_0.time_limit = 0.632279170971;
    tmp_msg_0.controller.assign("PPEZVDVVHLNZKGBPUOVTBCKJGIMLZEOKHSQKAQTQLFOHTBUHWDCDMBQNQCPAZJECAECFITASGZGBLELTKWKDJJMCKRQXNTIYBWQNUXOHVBUEXGQOHHMICGJKYRRFRFGFFVNVCRYAGFHHDALOSVUEZFYUUDSIUASHTITYTALRPRGBJXPMVNGNXMUPWTA");
    tmp_msg_0.custom.assign("GFJTBYRXTUWFYFPMHMTLPEWAHDGYQEFVSGSAXSDZQZVOBCJNKAQCICFDNRYCWOOKHVHXLPYXADSSNVIJSLTNEWHNBMEWLERNUYYDSCNPVJDGOEEODPOJRVQJAAGLVPHCIQXFBWQDYXPTABFKOVXXCQLJBMWIUZGBIQTKJRKHZEMMRMGQFIHXXYMC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 25588U;
    msg.info.assign("RAOJUWBTGT");

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
    msg.setTimeStamp(0.923615694973);
    msg.setSource(27940U);
    msg.setSourceEntity(235U);
    msg.setDestination(59692U);
    msg.setDestinationEntity(167U);
    msg.command = 170U;
    msg.entities.assign("DLLYZQBUHKXWIWUGHIXUXTFCWNZEISFACHEQWIFQJDAZATFHQRZJAPRFQRVEPKOGELWEOYTRQPXXXRATDLANZTJDIOENLIPAGJZLGGNNRJSEBYOOCUAHGXRFZYBMFVNCPKQZKYUJUJRKDZNCAYABVFPXJWBCTTSBUYPJVEMCSDWEULMHIODMOGFRHUMDKUPZWMYOMNEOVBVOFPW");

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
    msg.setTimeStamp(0.874181214039);
    msg.setSource(2143U);
    msg.setSourceEntity(138U);
    msg.setDestination(56465U);
    msg.setDestinationEntity(202U);
    msg.command = 202U;
    msg.entities.assign("AEHRGAXKLKLIVWRKVQKBFZQJOYDJRGWNUKFT");

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
    msg.setTimeStamp(0.721459533499);
    msg.setSource(49649U);
    msg.setSourceEntity(48U);
    msg.setDestination(54672U);
    msg.setDestinationEntity(174U);
    msg.command = 137U;
    msg.entities.assign("JMNJPEBRIUKSACLLFPUZCAAJBGJIBQOMGVSXQTUDSNHHGHHRCTLOEUGHAKNCYAFMORPLIZWY");

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
    msg.setTimeStamp(0.613377397897);
    msg.setSource(52216U);
    msg.setSourceEntity(185U);
    msg.setDestination(3389U);
    msg.setDestinationEntity(5U);
    msg.mcount = 17U;
    msg.mnames.assign("YRUYDJDSHEPIVPWUFBKRMSEVFFFAWVQUCVSZMWKGILZFWLXXSBEDRPXWUOFJZMUYCCOMZLBXDYSNWJPCPVXNMQAQOTEIILWHNCHNOZGGJCUBQLYXMTHQADTJNFXHJEDTCYBIBPKKHBQOTORVJKBEB");
    msg.ecount = 117U;
    msg.enames.assign("EEGNZDXCDXFSPKLNAHKBNBQFMIYGLAEFLWFDQBCKRQXLPDJYYESEMOFFAZSYYJNPTOAJZAGZSWSVQHUSWCXSDVBTRYZGW");
    msg.ccount = 175U;
    msg.cnames.assign("QEUBUKPRXYQRVEYRROVWAOZIZTHILSDQOVSGGZZFNQYMKNJBRNMPDFUPRLYNAFEAEETTHAQQCCOGEVAIZXSVCEADJMIIEOKHFPXMMCWPDLDR");
    msg.last_error.assign("EGRNDAVMEYLWSALFLOGRDISJFWNLNTHOSYUCOFTBAACIBCBGEJMNLTZHXLFYQHPWGQFVSCXAFRBMZXKLSDYKZEKEPHGOEACCVRKUJNVBJSYZDXHSPMFNQLJQUWPKHJIXLWOXYEQJPRPSEVV");
    msg.last_error_time = 0.648755556106;

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
    msg.setTimeStamp(0.886129479046);
    msg.setSource(54423U);
    msg.setSourceEntity(186U);
    msg.setDestination(4672U);
    msg.setDestinationEntity(184U);
    msg.mcount = 220U;
    msg.mnames.assign("ZSOHZOIWWLNWPWHKMQOENITFTDWAANLKSDFDSVGJADYKRAHPSSUPBHKGYBKFVJOSHX");
    msg.ecount = 219U;
    msg.enames.assign("FZHMUDMBUTM");
    msg.ccount = 184U;
    msg.cnames.assign("FZGGJCHVMIWWYNYVTSQTKXOIMZQBJAFWEZYPERNLJMCKHKWLHSFEEUURQZOUIGSJTZBHPRLJZISHPXDQKOHDYKVTFQVDCOTVQVBTDEQOKQAMZIKHNLRNXMGZOEBSNUKJIGYNTAHCSXGPMPQFCRAINVSAULFCNYPLACTFCWBMMYYWRMRPQDWTRJGJGX");
    msg.last_error.assign("MUVBMXUGKFXAUJXMITNSKEZUBGTFOVRACGKLPRNYMJAWCCDLODRJDMGQHONTZBIYJEZMBGFYEXOEWDNYLGVLTUCRCRBBQQZJGVPJRCRAOVKESSFNOQZPPS");
    msg.last_error_time = 0.384771895292;

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
    msg.setTimeStamp(0.0760577425748);
    msg.setSource(41504U);
    msg.setSourceEntity(104U);
    msg.setDestination(48256U);
    msg.setDestinationEntity(65U);
    msg.mcount = 215U;
    msg.mnames.assign("JALYCAPQSUYUQHEABXLUIYYOHISNRQOHIOMFKSZEHXAWGVDKGCCGQOCPWYZYFUJVPKIEWNKQRVPWOGOKMRPPXLEBNLCRIAAATZVWRWMTMNFTCUZDEOMGBBCFKZSOJVTNDLLEDSDTKCYXHLTDBNSFJBSCFFSWHGMXBMADXQVUXFIHQYLNKIQXGVSZWJIHRKPMDLMXEWJOULBIQDJRJEHNHNDETAGFGBYWZRRNSTVXTTCQPPUMYRZUGUZPEJVJA");
    msg.ecount = 91U;
    msg.enames.assign("OXVIQRXXNQOQKINFFMGQZCXJAGZWNUBYDSMMCGFWVPQRQDATPJPOHZOTINLMBPL");
    msg.ccount = 139U;
    msg.cnames.assign("SPYCYRSDJOBFJILBSXPOKHWBMKNRBEZVJNZCLQURRJYEFOSXFVYMDDMKHQIECYLPYKV");
    msg.last_error.assign("DHNBSGVYDXIHRZXKOVQGDEXKYHRDSUASKRVXRKPFYITHMHCIHTOBAFSLNSKTJJTSCTQVXNEMOFGYBGVCWZPT");
    msg.last_error_time = 0.022530050305;

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
    msg.setTimeStamp(0.285406050085);
    msg.setSource(41179U);
    msg.setSourceEntity(150U);
    msg.setDestination(33933U);
    msg.setDestinationEntity(171U);
    msg.mask = 102U;
    msg.max_depth = 0.10296550661;
    msg.min_altitude = 0.140374888776;
    msg.max_altitude = 0.182607032627;
    msg.min_speed = 0.272939595445;
    msg.max_speed = 0.0122396198171;
    msg.max_vrate = 0.537897284476;
    msg.lat = 0.260934613738;
    msg.lon = 0.198956810165;
    msg.orientation = 0.6742086585;
    msg.width = 0.1145385345;
    msg.length = 0.538839195137;

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
    msg.setTimeStamp(0.22788340484);
    msg.setSource(52787U);
    msg.setSourceEntity(110U);
    msg.setDestination(35293U);
    msg.setDestinationEntity(130U);
    msg.mask = 221U;
    msg.max_depth = 0.848734697567;
    msg.min_altitude = 0.314816788768;
    msg.max_altitude = 0.546001088603;
    msg.min_speed = 0.0751990421169;
    msg.max_speed = 0.953468849936;
    msg.max_vrate = 0.372514622569;
    msg.lat = 0.255313015925;
    msg.lon = 0.18183465907;
    msg.orientation = 0.214525434465;
    msg.width = 0.144230140209;
    msg.length = 0.266495093803;

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
    msg.setTimeStamp(0.676457036464);
    msg.setSource(22383U);
    msg.setSourceEntity(221U);
    msg.setDestination(10463U);
    msg.setDestinationEntity(187U);
    msg.mask = 176U;
    msg.max_depth = 0.425809690045;
    msg.min_altitude = 0.784447940359;
    msg.max_altitude = 0.361166130151;
    msg.min_speed = 0.985775621125;
    msg.max_speed = 0.795272808108;
    msg.max_vrate = 0.979363455287;
    msg.lat = 0.0499881269137;
    msg.lon = 0.921560987305;
    msg.orientation = 0.455245985618;
    msg.width = 0.899162244502;
    msg.length = 0.372846708814;

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
    msg.setTimeStamp(0.440495756597);
    msg.setSource(56247U);
    msg.setSourceEntity(227U);
    msg.setDestination(53192U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.323176003882);
    msg.setSource(29418U);
    msg.setSourceEntity(124U);
    msg.setDestination(51063U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.499643178008);
    msg.setSource(19625U);
    msg.setSourceEntity(208U);
    msg.setDestination(13602U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.748077605697);
    msg.setSource(48401U);
    msg.setSourceEntity(143U);
    msg.setDestination(41595U);
    msg.setDestinationEntity(252U);
    msg.duration = 12651U;

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
    msg.setTimeStamp(0.717501160593);
    msg.setSource(20569U);
    msg.setSourceEntity(161U);
    msg.setDestination(23725U);
    msg.setDestinationEntity(14U);
    msg.duration = 47969U;

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
    msg.setTimeStamp(0.228747608326);
    msg.setSource(64131U);
    msg.setSourceEntity(74U);
    msg.setDestination(17740U);
    msg.setDestinationEntity(7U);
    msg.duration = 15783U;

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
    msg.setTimeStamp(0.716424028789);
    msg.setSource(9902U);
    msg.setSourceEntity(95U);
    msg.setDestination(33922U);
    msg.setDestinationEntity(175U);
    msg.enable = 25U;
    msg.mask = 358988610U;
    msg.scope_ref = 2366368693U;

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
    msg.setTimeStamp(0.856133317163);
    msg.setSource(9544U);
    msg.setSourceEntity(112U);
    msg.setDestination(46779U);
    msg.setDestinationEntity(195U);
    msg.enable = 204U;
    msg.mask = 2247575825U;
    msg.scope_ref = 2310849702U;

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
    msg.setTimeStamp(0.342231177384);
    msg.setSource(64728U);
    msg.setSourceEntity(196U);
    msg.setDestination(63298U);
    msg.setDestinationEntity(18U);
    msg.enable = 7U;
    msg.mask = 3642243639U;
    msg.scope_ref = 1121215643U;

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
    msg.setTimeStamp(0.757308567118);
    msg.setSource(25425U);
    msg.setSourceEntity(185U);
    msg.setDestination(28935U);
    msg.setDestinationEntity(123U);
    msg.medium = 39U;

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
    msg.setTimeStamp(0.770236440351);
    msg.setSource(2037U);
    msg.setSourceEntity(114U);
    msg.setDestination(21088U);
    msg.setDestinationEntity(166U);
    msg.medium = 159U;

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
    msg.setTimeStamp(0.374817861552);
    msg.setSource(38669U);
    msg.setSourceEntity(1U);
    msg.setDestination(3334U);
    msg.setDestinationEntity(35U);
    msg.medium = 187U;

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
    msg.setTimeStamp(0.139811694894);
    msg.setSource(17266U);
    msg.setSourceEntity(106U);
    msg.setDestination(48422U);
    msg.setDestinationEntity(199U);
    msg.value = 0.516579454651;
    msg.type = 213U;

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
    msg.setTimeStamp(0.957882322336);
    msg.setSource(9030U);
    msg.setSourceEntity(186U);
    msg.setDestination(63989U);
    msg.setDestinationEntity(96U);
    msg.value = 0.370598322226;
    msg.type = 222U;

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
    msg.setTimeStamp(0.502328899502);
    msg.setSource(48996U);
    msg.setSourceEntity(217U);
    msg.setDestination(681U);
    msg.setDestinationEntity(46U);
    msg.value = 0.702242307693;
    msg.type = 252U;

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
    msg.setTimeStamp(0.27132032683);
    msg.setSource(55354U);
    msg.setSourceEntity(58U);
    msg.setDestination(51990U);
    msg.setDestinationEntity(122U);
    msg.possimerr = 0.529865311584;
    msg.converg = 0.707231429132;
    msg.turbulence = 0.402802622343;
    msg.possimmon = 3U;
    msg.commmon = 195U;
    msg.convergmon = 5U;

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
    msg.setTimeStamp(0.571515126903);
    msg.setSource(60668U);
    msg.setSourceEntity(136U);
    msg.setDestination(17762U);
    msg.setDestinationEntity(211U);
    msg.possimerr = 0.824685559459;
    msg.converg = 0.471740427413;
    msg.turbulence = 0.85245730278;
    msg.possimmon = 142U;
    msg.commmon = 132U;
    msg.convergmon = 214U;

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
    msg.setTimeStamp(0.664119224679);
    msg.setSource(8191U);
    msg.setSourceEntity(162U);
    msg.setDestination(8470U);
    msg.setDestinationEntity(28U);
    msg.possimerr = 0.285413244208;
    msg.converg = 0.394135019602;
    msg.turbulence = 0.0128091177183;
    msg.possimmon = 37U;
    msg.commmon = 175U;
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
    msg.setTimeStamp(0.522899726158);
    msg.setSource(15555U);
    msg.setSourceEntity(17U);
    msg.setDestination(23408U);
    msg.setDestinationEntity(80U);
    msg.autonomy = 249U;
    msg.mode.assign("EIYXEOKFAEOTNSBOBJQINNWLXJBZFVKQKZRZYATODNOXPPDOWFLAUINWQPJUTKXZCKVBIVBIXLDBSVWVWLUSPHMJWBUBTMSYETCFQLZNYHEBPQHCVKJUPLUMRHOAXRCGGMCDLWIFWGYRCAHVJPVJTDCRFCUMMUAGSZSOFNZUBGGYDSGQISELETQQNJDOJFTRAHEIMPRVMCOFSHNAZE");

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
    msg.setTimeStamp(0.897200115182);
    msg.setSource(45766U);
    msg.setSourceEntity(246U);
    msg.setDestination(36144U);
    msg.setDestinationEntity(139U);
    msg.autonomy = 51U;
    msg.mode.assign("BGTHOCYOJUOKIRGNIPNUYLYSSBVPBZRZHTQGOPSFEPXSABFXTSHUWVTTJCICLAZEJCXHNZFGXIQULAKVILWUKJWCHHRJEEGEAWMVHUVDNJOQENRKGIRLTFACLDBEWXRWMQFYXONCAZMNXBMVHPCY");

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
    msg.setTimeStamp(0.061029929279);
    msg.setSource(54043U);
    msg.setSourceEntity(115U);
    msg.setDestination(10057U);
    msg.setDestinationEntity(153U);
    msg.autonomy = 157U;
    msg.mode.assign("MSFAQJTIANBSXXPZXGNJBUWDLQLVZKYMEGWKVFRAYSRTCSQOIRCXOKWITOCYJASKMGJYGYWUGIIRSGUBRPMEDYFODKXVPAFXCSXXLHLKIGFGWQBLXUYQWSJBNETEWNKGHXNLEPPKOCZSDFFDMIJZERLTTUFJVTUMV");

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
    msg.setTimeStamp(0.501473143732);
    msg.setSource(57042U);
    msg.setSourceEntity(182U);
    msg.setDestination(59983U);
    msg.setDestinationEntity(90U);
    msg.type = 46U;
    msg.op = 71U;
    msg.possimerr = 0.989889655658;
    msg.converg = 0.281512427089;
    msg.turbulence = 0.777222363231;
    msg.possimmon = 5U;
    msg.commmon = 142U;
    msg.convergmon = 72U;

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
    msg.setTimeStamp(0.775159873294);
    msg.setSource(42473U);
    msg.setSourceEntity(1U);
    msg.setDestination(12389U);
    msg.setDestinationEntity(186U);
    msg.type = 117U;
    msg.op = 35U;
    msg.possimerr = 0.239170559295;
    msg.converg = 0.628733499771;
    msg.turbulence = 0.904174020327;
    msg.possimmon = 60U;
    msg.commmon = 82U;
    msg.convergmon = 181U;

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
    msg.setTimeStamp(0.459030647637);
    msg.setSource(14120U);
    msg.setSourceEntity(174U);
    msg.setDestination(55772U);
    msg.setDestinationEntity(248U);
    msg.type = 122U;
    msg.op = 58U;
    msg.possimerr = 0.465879766777;
    msg.converg = 0.258482885151;
    msg.turbulence = 0.360185977442;
    msg.possimmon = 90U;
    msg.commmon = 100U;
    msg.convergmon = 128U;

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
    msg.setTimeStamp(0.834018335144);
    msg.setSource(20098U);
    msg.setSourceEntity(54U);
    msg.setDestination(28662U);
    msg.setDestinationEntity(106U);
    msg.op = 157U;
    msg.comm_interface = 57U;
    msg.period = 48773U;
    msg.sys_dst.assign("WKIQZNJXHNURVUMRUIMZWRRIARYJWJCLFATTPNNFDSGNWUDZGSEXPTSXQBEFDLOCZRCSTOSOHDWKETEBBMXFSWDJWEMKKUSMCATPKCPGOQEQOZGRFJFFMQJBPI");

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
    msg.setTimeStamp(0.717777137116);
    msg.setSource(4123U);
    msg.setSourceEntity(169U);
    msg.setDestination(4370U);
    msg.setDestinationEntity(77U);
    msg.op = 222U;
    msg.comm_interface = 100U;
    msg.period = 60969U;
    msg.sys_dst.assign("NJIFILTEGRASOROIPFWZKCODVZSYZUUMDVECUFEQJ");

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
    msg.setTimeStamp(0.960124477645);
    msg.setSource(56268U);
    msg.setSourceEntity(165U);
    msg.setDestination(5277U);
    msg.setDestinationEntity(93U);
    msg.op = 58U;
    msg.comm_interface = 173U;
    msg.period = 464U;
    msg.sys_dst.assign("PIFAOZRDFLCTTPARYIVBVZOGLEMIKBQKCTSMZNLXWRKIHITWBRPINJIZPWUTOWLDDHEXSEJMVFQLHSLJQOCBCYDMFEHVGQJDZAFSNQWKONQNAXTUEPGFHWEDQHGTUZWXLOQVEANPMUZGYBABP");

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
    msg.setTimeStamp(0.108511800929);
    msg.setSource(27697U);
    msg.setSourceEntity(133U);
    msg.setDestination(7020U);
    msg.setDestinationEntity(108U);
    msg.stime = 1306321657U;
    msg.latitude = 0.466433635356;
    msg.longitude = 0.402165389306;
    msg.altitude = 27331U;
    msg.depth = 36027U;
    msg.heading = 51710U;
    msg.speed = 415;
    msg.fuel = -4;
    msg.exec_state = 28;
    msg.plan_checksum = 48870U;

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
    msg.setTimeStamp(0.539343910541);
    msg.setSource(39385U);
    msg.setSourceEntity(62U);
    msg.setDestination(5453U);
    msg.setDestinationEntity(95U);
    msg.stime = 3163465299U;
    msg.latitude = 0.838496601861;
    msg.longitude = 0.35844477589;
    msg.altitude = 34867U;
    msg.depth = 48705U;
    msg.heading = 15849U;
    msg.speed = 27855;
    msg.fuel = 78;
    msg.exec_state = 114;
    msg.plan_checksum = 57253U;

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
    msg.setTimeStamp(0.0120391578704);
    msg.setSource(47540U);
    msg.setSourceEntity(216U);
    msg.setDestination(58185U);
    msg.setDestinationEntity(53U);
    msg.stime = 3633040488U;
    msg.latitude = 0.490048333928;
    msg.longitude = 0.951025530234;
    msg.altitude = 44004U;
    msg.depth = 23759U;
    msg.heading = 13534U;
    msg.speed = -14577;
    msg.fuel = 55;
    msg.exec_state = 74;
    msg.plan_checksum = 61158U;

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
    msg.setTimeStamp(0.508821832263);
    msg.setSource(49816U);
    msg.setSourceEntity(29U);
    msg.setDestination(52610U);
    msg.setDestinationEntity(141U);
    msg.req_id = 26166U;
    msg.comm_mean = 57U;
    msg.destination.assign("MRTHMPCVKAXKFKSBOGEVWZFKAIJWYZTWOYXEJJGZGPDNNBRUIXFKDTGZLMBSKBYLXADREADAMILNSUOVZEZDPVGVYESBURCIWZCULQTXFQCYOMTOWXARRYYENJZHKVJQIGBKWWJMDWYQILTHEPCCPBHKHWIFCSXPEMFSQFLUOM");
    msg.deadline = 0.274118337704;
    msg.range = 0.878944125585;
    msg.data_mode = 197U;
    IMC::CollisionAvoidance tmp_msg_0;
    tmp_msg_0.mmsi = 0.811458990204;
    tmp_msg_0.lat = 0.229740710568;
    tmp_msg_0.lon = 0.833899630487;
    tmp_msg_0.x = 0.641899020488;
    tmp_msg_0.y = 0.867155836908;
    tmp_msg_0.speed = 0.238226842814;
    tmp_msg_0.course = 0.842737571521;
    tmp_msg_0.dist = 0.284826199767;
    tmp_msg_0.length = 0.704186560509;
    tmp_msg_0.width = 0.769638125666;
    tmp_msg_0.o_vect = 0.275773462959;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("SOUQEHAUKFTIHKKWLNRYUOMHPKLDHISHOLOKXWDJUEEFJUIYGFNBNMDGSWMZYCTXHLBDSKGJPNNNJCIPLVRYTOMCFNTAWIJQZTFAXWXTABXRRUCYNNHKDWRMKQRDIIEQGJGZIMOMPBSVCPVVFQADXAYKHGLDUPXPTMVWBPEGDVBQLBQVXJTGXYLCGRBMJFPVEBSGUVVIQPEHRWUASIOZSSWNSYAEZCLZKCEZOQARO");
    const char tmp_msg_1[] = {61, -86, -116, -107, 27, -12, 44, 108, -25, 111, -5, 14, 67, 21, 83, -111, 63, -18, 14, -48, -2, -100, -4, 12, -26, 10, 11, 48, 59, -29, -74, 44, 118, -21, 106, -36, 5, -96, -8, -29, -5, 80, -122, 98, 38, -46, -127, 8, -86, 35, 66, -12, -108, 67, 123, 19, -26, 26, 57, -3, 105, 54, -121, -8, 32, 32, 95, 6, -77, -81, 94, 116, 26, 116, 121, -53, 32, 42, -54, 49, -89, 14, -47, 44, -56, 10, -79, -54, 6, -91, -106, -89, 47, 11};
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
    msg.setTimeStamp(0.680968985903);
    msg.setSource(36670U);
    msg.setSourceEntity(108U);
    msg.setDestination(24588U);
    msg.setDestinationEntity(191U);
    msg.req_id = 50089U;
    msg.comm_mean = 70U;
    msg.destination.assign("VWYCIJWSZNBOVWDLATGFTFOJRASSEJUKOPHDYHOCUQBCMJMOVUFAIKTVYBPLQRGGMPIZWUQQDFUQCOEIMWJNXBWDCGGSVXUJNGXRTPJJDLZEUNSKWYBWUWYZPUMZLBGPCLQAR");
    msg.deadline = 0.347579861858;
    msg.range = 0.998814623622;
    msg.data_mode = 165U;
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("LXTNQZESCOBWKSDLZIKNNVTVDWINHRPVZMBDRRRCJKSUUBWGWJIYRYWBXPUEHLKP");
    tmp_msg_0.service_type = 220U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZVQAQPRRUIPGTIVHLZHFYGYBHWDIFQVELGZEHBMNALWZAFKGLFJXSEBWZJPVHWCRAERSMJNRRBDXUIJFZAXKYPCXOIFETXISQJTUUGEUMNSLQSKAUWXTPCFVAFINYVHMJDHKZUEDXNTMBYECLOXIPXOTLQVATAWFDDQHBMBYLBOSAERSZYNRNVGOPKTLQCXCZVTRCYJNGUGUSNBCWWBONYDDDOCJD");
    const char tmp_msg_1[] = {44, 105, -28, 111, -45, 25, 125, -12, 62, -62, -56, -20, -118, 36, -105, 40, -72, 40, -36, 101, -16, 88, 55, 93, 2, -126, 60, 97, 82, 0, 69, 113, 116, 68, -38, -34, 86, 31, 121, 5, -12, -46, -3, 61, 21, 110, 100, -102, 105, 36, -31, 90, -90, 56, -34, 29, -100, -86, -116, -13, -71, 97, -89, -54, -94, 45, -77, 6, -119, 29, 58, 80, -72, -2, 38, 106, -120, 97, 72, -26, -84, -1, 75, -87, 30, -69, 117, 118, -32, -21, 107, -22, 44, 113, -4, 96, -48, 31, -68, 39, -75, 45, -79, 123, 89, 90, 50, 32, 17, -30, -69, -31, 61, 12, 15, 108, 1, -92, -36, 17, -100, 39, 73, -72, 34, 68, -59, 23, -81, -58, 57, 65, -99, -87, -97, 62, 101, -81, 84, 32, -76, -92, -5, -47, -21, -69, 123, 121, 9, 41, -113, -58, 57, 76, 40, -128, -51, -42, 96, -92, 48, -123, -59, -91, -13, -13, 124, -43, -70, 62, -126, -123, -121, 31, 27, -109, 4, -116, 14, -104, -71, 78, 36, 72, -123, -82, -71, 122, -98, -23, -23, -127, 87, -82, 21, 87, 76, -122, 89, -45, 76, -102, -82, 87, 52, -66, -106, -57, -111, 72, 22, 73, -81, -98, 86, 59, -117, 50, -81, -44, 90, 102, -85, -80, -67, -74, -49, -114, -31, -16, -68, -52, 97, 11, 103};
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
    msg.setTimeStamp(0.762811598813);
    msg.setSource(37514U);
    msg.setSourceEntity(52U);
    msg.setDestination(280U);
    msg.setDestinationEntity(116U);
    msg.req_id = 13635U;
    msg.comm_mean = 106U;
    msg.destination.assign("DTYOKWBZIHBSOHSWEFSGGMHRXOGVRZPZKNQTJAGUUYIQIYVJHREXLZWPTQVCHMZCTAZD");
    msg.deadline = 0.39985968791;
    msg.range = 0.360291328249;
    msg.data_mode = 129U;
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.52587115261;
    tmp_msg_0.y = 0.288364853106;
    tmp_msg_0.z = 0.894229754785;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XGUJHGTHZIPUNMRQKINILKOXTWTXIZXRWIBRVHKLLMVGBUNJTPKEARLOIOWPWBBCIVSDVCDOXUIGLQQYOKNDREUVPAEPSYOYNNJPRMJBOCGBVZMQLMSXZCAGYYETWUKMQDFXFTDYEXDMQCRFASCY");
    const char tmp_msg_1[] = {57, -13, -94, -42, -121, -66, 28, -84, 52, -22, -65, 1, -124, -102, 111, 27, -7, -119, 49, 61, -55, -47, 5, -84, 45, 118, -50, 72, -61, -47, 39, 114, -82, -90, 44, 8, 6, -31, 20, -15, -5, 117, -112, 48, -23, 73, 9, 36, -72, 40, -94, -70, -107, 101, 61, 77, 37, 53, 66, 51, 55, 20, -128, -39, -128, 6, -67};
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
    msg.setTimeStamp(0.0491235261859);
    msg.setSource(12898U);
    msg.setSourceEntity(56U);
    msg.setDestination(13050U);
    msg.setDestinationEntity(86U);
    msg.req_id = 4947U;
    msg.status = 158U;
    msg.range = 0.471845307372;
    msg.info.assign("NFZWVWWKSEGUNSMJUDPLGULFCPRTNJJFTBEHZUOHITZEAZAIZKMAAWJSDCSQCFZGFGXAPVWNYVKICOBXPKIMCENYGCUKCJVIKRRTBOPSHWBRDXVDXKNSDWKFPIDSXYOBWRZQPFTUVKEJDWFOGQJPVIQVOPUYHQFIBTYDNQOIEMJSABMHSZZNHOEERLDDKTLGAHVXGLLBZSBN");

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
    msg.setTimeStamp(0.945888165347);
    msg.setSource(41862U);
    msg.setSourceEntity(42U);
    msg.setDestination(39925U);
    msg.setDestinationEntity(16U);
    msg.req_id = 2735U;
    msg.status = 183U;
    msg.range = 0.191696387516;
    msg.info.assign("GNFHVQJYJOPAFGZWWOXQJERKHLGSWZQMHLXZNQYZLXSXMFTDMZJTTFVNCIELDRGBTGVHUCNLVWBHIKDPPLACNABSTVCDDJKUDXCZILVDSEZWRMGZNUTHHTJEKBIFKVJQGMEBYFUWAIAZQKXPJNQSQAWUCKIYLUYSIHLYRURHOVJEKANHPIXYXPGRL");

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
    msg.setTimeStamp(0.44155006597);
    msg.setSource(47273U);
    msg.setSourceEntity(250U);
    msg.setDestination(46004U);
    msg.setDestinationEntity(170U);
    msg.req_id = 45859U;
    msg.status = 47U;
    msg.range = 0.616951273803;
    msg.info.assign("DIHPAOBQWZVKJSIOVQSWTWEMSYJZUNNIHUVBJMQQPIWZDM");

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
    msg.setTimeStamp(0.158833456165);
    msg.setSource(6720U);
    msg.setSourceEntity(110U);
    msg.setDestination(4914U);
    msg.setDestinationEntity(159U);
    msg.req_id = 2787U;
    msg.destination.assign("JAWOFLFCSZZVXOBMZSGAPQPRHKWNDRMOQPTVKFUWXSNBXLHXIUCEBYERTIERLQBUDTVLFNCKFUECCXINDYDFHUKWBHOMQBKQNGPPCGAYHG");
    msg.timeout = 0.23014047219;
    msg.sms_text.assign("KSBXPVCOLQQLZCDKCOYNXKJRONSMEODWGWZHNWVYMMTPJODMYONNXVLZWPKKUSIDUHLMJGJQXAGVADQXNYJDRHSTJPHGUPTZGEUHKBVBJAEFVCMGPVXJDPDCTWGEKBIXCGRTHEONVANIPOICDWNFBUDSSVIWVZZIKFURALKSQZFFYBSQIRUFWPQAEWWMYHBEUHFQYTZZAQRILERHCYCGUFGLOJPNOMLQJTSHSELIRFTARFEMKMXBZIXBAX");

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
    msg.setTimeStamp(0.415882134209);
    msg.setSource(40908U);
    msg.setSourceEntity(18U);
    msg.setDestination(48840U);
    msg.setDestinationEntity(100U);
    msg.req_id = 13292U;
    msg.destination.assign("TYZDBFQSELGHDAAAJQWMNHZJUMESAWNGCFYNSMEKBQGVOBORWBVFOISJJUGCPTZVIIPQPORMLAGBAMXMQDOCTIJUGWVEZNHYLIXCAULKCTVLAKKLZUJRFIEEQPYTOYVYPVFXNZSKMRPHNHSKDW");
    msg.timeout = 0.625174297948;
    msg.sms_text.assign("SNPRERBBEKSKVCFACUVQ");

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
    msg.setTimeStamp(0.56958809835);
    msg.setSource(21094U);
    msg.setSourceEntity(226U);
    msg.setDestination(42507U);
    msg.setDestinationEntity(21U);
    msg.req_id = 63212U;
    msg.destination.assign("MLYNEQVJBIJCWQBYMYFJFTWVKEWOBCZJRQXTBIYOCEHDHJRWHPAMVUZBOZEXBCOTJKMYPAELVEJHDAQKGWOGREYZILWSCQMTXPGIFASHFAKZVPRRNFUKGFXGVSCLJPIMTSFLNUPPNVZWEUPOKUDJZGKAUXOONNNXTDMABCGMFUQHGLNVLEKQBKHZSLCNATQUGDSHYRPUXAYTLRSH");
    msg.timeout = 0.913223709849;
    msg.sms_text.assign("LNPELTRGMLTBJBBJFVH");

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
    msg.setTimeStamp(0.935673753602);
    msg.setSource(48638U);
    msg.setSourceEntity(210U);
    msg.setDestination(20063U);
    msg.setDestinationEntity(119U);
    msg.req_id = 49161U;
    msg.status = 228U;
    msg.info.assign("DELHBKCIRMYOLZDOTUCBTWBMTQSIHHRVRECTXZEGJTJWFASWDRAGKBFRUDVHUWGCLVIYYX");

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
    msg.setTimeStamp(0.577653077196);
    msg.setSource(10206U);
    msg.setSourceEntity(82U);
    msg.setDestination(52523U);
    msg.setDestinationEntity(165U);
    msg.req_id = 32618U;
    msg.status = 206U;
    msg.info.assign("BYADMMGQAFBTBXGPOEDAKYOEGSHTPRKMUNKBIUBSZRDNEHWPGDHGZVPDLDQWSWCIZMHNAOOXVDVKMCNKLYHMICVQFXDUOBOGOBUOQWYSEUXNWCKZXSLRC");

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
    msg.setTimeStamp(0.137943312349);
    msg.setSource(7047U);
    msg.setSourceEntity(106U);
    msg.setDestination(3191U);
    msg.setDestinationEntity(112U);
    msg.req_id = 12042U;
    msg.status = 42U;
    msg.info.assign("WQEUTILOLBYTWVTSYSGFOSFKDSBDEHKTYXZSKSQZQRQNYJEKOHNZMRJKBPPFURPWUCTDKIOWTWNBBZXUCKUCVWOVNDHXYJVA");

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
    msg.setTimeStamp(0.511482386804);
    msg.setSource(4201U);
    msg.setSourceEntity(212U);
    msg.setDestination(1633U);
    msg.setDestinationEntity(118U);
    msg.state = 79U;

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
    msg.setTimeStamp(0.698354572963);
    msg.setSource(7372U);
    msg.setSourceEntity(153U);
    msg.setDestination(161U);
    msg.setDestinationEntity(25U);
    msg.state = 148U;

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
    msg.setTimeStamp(0.199748580088);
    msg.setSource(55447U);
    msg.setSourceEntity(250U);
    msg.setDestination(29330U);
    msg.setDestinationEntity(100U);
    msg.state = 50U;

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
    msg.setTimeStamp(0.945207564963);
    msg.setSource(1490U);
    msg.setSourceEntity(251U);
    msg.setDestination(27091U);
    msg.setDestinationEntity(183U);
    msg.state = 225U;

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
    msg.setTimeStamp(0.473445672829);
    msg.setSource(20963U);
    msg.setSourceEntity(222U);
    msg.setDestination(56363U);
    msg.setDestinationEntity(94U);
    msg.state = 115U;

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
    msg.setTimeStamp(0.581448573093);
    msg.setSource(14901U);
    msg.setSourceEntity(216U);
    msg.setDestination(6388U);
    msg.setDestinationEntity(251U);
    msg.state = 127U;

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
    msg.setTimeStamp(0.411915955353);
    msg.setSource(32731U);
    msg.setSourceEntity(238U);
    msg.setDestination(54332U);
    msg.setDestinationEntity(248U);
    msg.req_id = 757U;
    msg.destination.assign("QWGMIOOKRKDVMMKDYIMPSMAQSLYROZXHIBGPTVCAFYWPYBBBNEBYZEDXZUINMLVCHMHKYWNGSGPQKAKFAQJTSJJURQAEQLPRBBJOXDITSUVN");
    msg.timeout = 0.259514151627;
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("VMXXSAPXREXEYBCPYLHBUYPGELOQYKWNOZNGHZGZGZBMM");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QXJAUIBGBNLPWONMIJGFSGJHZXTWNEWFUITCTGVLSMCCLOFJGHBSVHQNKLDLPD");
    tmp_tmp_msg_0_0.value.assign("RUGLHSNUZTTHKPKGGPDCRLPVTYNKDEDVBUOODNTQOJIMSXFXMNXCKKJRQJYKEOGLVMFUELVIPSSBEQNTMWBBCCLZRGAQZBLKGSGFCCEWGXANDJHUBAYTXMPZHECDFHQNFMIRSQLAXDVUIAYYLIQOSADFBTAJUZOCLJRZWIBIBJPWPESPHWZRQQINONHBLYOITOYJGVOZACWEIRRFXKSZ");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0167686491765);
    msg.setSource(42009U);
    msg.setSourceEntity(184U);
    msg.setDestination(57718U);
    msg.setDestinationEntity(60U);
    msg.req_id = 36814U;
    msg.destination.assign("UVUIBBVKHSXQBGFRRZMIBYJWCXSREMAEN");
    msg.timeout = 0.149421879577;
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 31422U;
    tmp_msg_0.type = 95U;
    tmp_msg_0.utc_year = 23587U;
    tmp_msg_0.utc_month = 129U;
    tmp_msg_0.utc_day = 177U;
    tmp_msg_0.utc_time = 0.57083010128;
    tmp_msg_0.lat = 0.426466292735;
    tmp_msg_0.lon = 0.723554494641;
    tmp_msg_0.height = 0.936755118135;
    tmp_msg_0.satellites = 228U;
    tmp_msg_0.cog = 0.156527208991;
    tmp_msg_0.sog = 0.192160287061;
    tmp_msg_0.hdop = 0.093644750837;
    tmp_msg_0.vdop = 0.630824053249;
    tmp_msg_0.hacc = 0.374337461277;
    tmp_msg_0.vacc = 0.0341722581993;
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
    msg.setTimeStamp(0.891915332527);
    msg.setSource(16839U);
    msg.setSourceEntity(215U);
    msg.setDestination(13161U);
    msg.setDestinationEntity(191U);
    msg.req_id = 13391U;
    msg.destination.assign("IMODUWGNPRELTDUZOANRCUEDZRVVFQXVUYCSXQJEVXNJHIAADGLPYIDOSMTAHDCKEQBHKNIWYTNVNDMBOSYSKXETGGDYKXHMKQTXUQSMKLIFJPSMFGQSRSYLIBADOWQBKAPHAMOBTCJLLPJFZEZVJWMCNHFGNBCWLPIIHXDNSRCGNEOLFWVZOACUGIQUYRJGBCBYKQYHYRFHZFBOUSXXVRPWQBHFZUWTXETKUEMJVTZFOJ");
    msg.timeout = 0.0300543249795;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 34582U;
    tmp_msg_0.rpm = 0.525802212396;
    tmp_msg_0.direction = 119U;
    tmp_msg_0.custom.assign("LZTNCDYDCTLQPOBQCKLLBAAIAIYQKEZDGUWFKHASRWAXFFKAJREDPMVTMQTMTFTNRBZDYJMHPJINUMQSJWLZLKBWPVVH");
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
    msg.setTimeStamp(0.749125640634);
    msg.setSource(58833U);
    msg.setSourceEntity(116U);
    msg.setDestination(25876U);
    msg.setDestinationEntity(30U);
    msg.req_id = 16974U;
    msg.status = 139U;
    msg.info.assign("PEVUYQDHJKLZDCYYNHZAWYKQXARHKEQMSTQIZQMOREMGAFHQNETOCUBFPPBMRAVIUCPEALLJKTGNQGOJFVIBLGZKKNJQLZLOEGHROXVPWSKIANCOTFOGVVSXFSUMDYXBYCWEBTJWZWCFNMRSUSGHMRLJYTCKFFSIFIIRVCLWATXPQDHMYUBXPNXRSBSIOTMPAZWJFJPEXEDUXHBSGZDLVGCWOTZDNYVACTGUBDRIVJBELMQ");

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
    msg.setTimeStamp(0.119799664617);
    msg.setSource(49891U);
    msg.setSourceEntity(16U);
    msg.setDestination(23314U);
    msg.setDestinationEntity(226U);
    msg.req_id = 3516U;
    msg.status = 160U;
    msg.info.assign("SEKGFFKBATPZURMCZWBYPSSYGGVLHNMJLEQHKXHXIUSRFHCFQGVOXPLUVIMQCTYCESEJCRULDIXMVJGKV");

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
    msg.setTimeStamp(0.227138612906);
    msg.setSource(6584U);
    msg.setSourceEntity(226U);
    msg.setDestination(5932U);
    msg.setDestinationEntity(128U);
    msg.req_id = 40136U;
    msg.status = 209U;
    msg.info.assign("SSZHOYTBQUMQYWTBPTWLXMOAPYUOITWVZMKUHMIORBGQNUVJNFMCGOENGMJXX");

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
    msg.setTimeStamp(0.392208088516);
    msg.setSource(44430U);
    msg.setSourceEntity(23U);
    msg.setDestination(34443U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.814501574771);
    msg.setSource(57086U);
    msg.setSourceEntity(181U);
    msg.setDestination(7033U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.643058136737);
    msg.setSource(44711U);
    msg.setSourceEntity(79U);
    msg.setDestination(13398U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.138167976524);
    msg.setSource(43965U);
    msg.setSourceEntity(109U);
    msg.setDestination(49084U);
    msg.setDestinationEntity(223U);
    msg.plan_id.assign("LWTGFOLMGPYNYVNDCWXKQLEDUARUEUTUFUEWXUKWNYQCKZVPAXUONLCIRMDSDOCFBRYHEPNVZZLIIPTHJFROMDUNVQYMAXRWMJCJKVTGRFCYWDPDTHOTRJILXKCZUEGUEXHMRFQSSGZK");
    msg.description.assign("JVMNGXBLWEDMQKMFVOARNDEXQGDTUEQZQZNPJMYATOOSNZBFPSVFUJVCJECPJHSSTNOWTYJREMZMKOPYULFXZVBKIVAYBLNGFOXHHNR");
    msg.vnamespace.assign("EVKLIXICKJKPFHDGTHVHAQVNFRJQXMPBLEGAKISJOXMVUZKTONFTECJASHWBXACLDMSFFGDTTSRVCZOLSXQZLDKGYYLNGORFWCPSXMGOPXGTWXECHCZMPUNFBEZOZRPNLHDBHHSYJFNPWUIJDETRWUBXGCUVKMMBYFYINUWCDKNODXSIVAWCRZYSUBJKQDDBQQTWNJUPSHEZAYYJZVIOHAMQWRERBMIAWGRYEQIQGBJAZU");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("AOSAHXZUGFBEQOJFCSLMROWBAAPYJLBTPDSTYGLXCVCWCMISDVGZABWVMXKCDKVFRZVCMMAIVTNUQAVCKLHYOIPNBZIMHNEYJGKCDHALNRPYXLEUKJUTOWJZPKYBQBWUFHJVAS");
    tmp_msg_0.value.assign("DURSDJDRKGVTNCZEEPHRKILJTBCESUAOLQUGKAHMVIPYGDSQZCKFPNBXIXSZSIQTGCQFSWNNMOHJNOFWRDAVUOFAVDOXCT");
    tmp_msg_0.type = 62U;
    tmp_msg_0.access = 143U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LKUTCAGQFMRPVOVXYP");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("WDTNSYENBCRUIEODJOZATLNFYHUEJOAHZCPIMOHEBEVQBRJ");
    tmp_msg_1.dest_man.assign("WWFXPUBFOMBVVHQSTRWNZUERBZKKDMFFXRIXKHYBJJFXXCAWWIBRKPCHTSLHKCDJUCFEQNJTDDBWWKAXNBPKICGLEQVTEGNTRQAPOUIJMJYKSOYUGVNXJOHMSVVPGGKXHOGLWAATDAZLWZPEMOMYGQZMLUFYCSZIIGQLOVQNHBOMTASYYAERSRZJQAQ");
    tmp_msg_1.conditions.assign("XHIIISEHYUWQTYZEDHCONPHSLBQHWBQVNSTSXGJOMDUEYKWDDIZNPUZLAUHVMGRZCHRYBXJGKOWRWXKJNADFKHOFYVCSZCOCXWWILFBYBKYTWLDVVNEUZIEPPJJEPLVAOFIRMOGAKZZMLQRRTFZOTXUDBKXMFTRFKGQUC");
    msg.transitions.push_back(tmp_msg_1);
    IMC::TCPRequest tmp_msg_2;
    tmp_msg_2.req_id = 58832U;
    tmp_msg_2.destination.assign("LSTLAPBFLZAFHBKYRNQHTJVRVNZZMNKBIFUYUMDFIXQRSYTOEUOQYQIXGGRTZLJPNBNREIZAMHWMEXVUPRDQSGCUXQXPVKBANDHFI");
    tmp_msg_2.timeout = 0.193767218682;
    IMC::TransmissionStatus tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.req_id = 10174U;
    tmp_tmp_msg_2_0.status = 182U;
    tmp_tmp_msg_2_0.range = 0.0321857683681;
    tmp_tmp_msg_2_0.info.assign("YAOEEDQNPASAERGDDIBJCJBLUEFQYQEJMOWYECXIKTJASQXGUPQYVTEBLSROFPKVISHXAXLDKXEMKVCTVCBLLLFUZDIGZJRYWLDGHSQMAJKXAISYKYNIOPNUKBTFVTJTBHKFDNZOIRGTJHFHOSWNVIBWMLRMHROPCWDLGTGQOTEPURFUZXXVUOJPOWHTABPQYCNUMMRWMVZYRAMSZZZIGDKXFLVCNNQ");
    tmp_msg_2.msg_data.set(tmp_tmp_msg_2_0);
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.486426948538);
    msg.setSource(2629U);
    msg.setSourceEntity(170U);
    msg.setDestination(21958U);
    msg.setDestinationEntity(55U);
    msg.plan_id.assign("GHHGKDWBPIONHWONOLHJTEORKXVUBLDCXTQPGDOQILGCUCZALSZJXNBPMOIRIFQELYZXXDMWUUNTWESUTSIAALEZKYZJVLOJMFJSZACPTNKWEBLDYKGPGCSYSREBRLRJMZRDSUSOCRUZJFKZFJHEAYIQDPKDMEBZPXQSNVMGIAOFUXMTFWYCRNIWXJBHNMNFGCTQIVGHUBAEYPFYWVVGPFHNBTMICT");
    msg.description.assign("RYFIWZDNHOBSLJSKMYRFIUHESVBBZKMHDVICTQREIENHRJNGRSBXTSWADMCFDZPKVFUGUYELZPQQWSLKCLBNEEJXAAIFEVQRNKTXRECZBXEZPXHXTZHNYXOKDVQO");
    msg.vnamespace.assign("RXFCJRVDMNWXEJNMEHNYLTRDWCIBLXZFPKQSEVKCHWXBQFWIUQLSCPOSVCKDGUPOIACOXGKPDYUCMHABABMDZLMXUDZQGJSSVNVHGDZNLGIROJUSBYREOHQZGFPGLNRKQAVTLYCLVWJTDFEPCKX");
    msg.start_man_id.assign("VNLCRXCYGGRKZUNYGNCY");

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
    msg.setTimeStamp(0.594852151457);
    msg.setSource(35407U);
    msg.setSourceEntity(171U);
    msg.setDestination(12944U);
    msg.setDestinationEntity(71U);
    msg.plan_id.assign("FDIYKLRVQOJPYAFYCMKCHUMHEOMRAJKNKWQMERVCZOPNYKTIIBKDEXQUQKNLFDDEAUJCRJEWEFWVCQBGSNBTQJTWBHJMXETVUQLTDMPYVXULLOXWSNSYRPHZZXXOZZRHICSIDNWAJYEAIALXUIKQUPFZYSDTYCWMLQZOAVRCEWGATPIBR");
    msg.description.assign("DVOVSUHTRMWCARTFPXFCJTBOMXARCMDEJBQYKFXQGZNXXXNIHBPHOGZZACRALTXOW");
    msg.vnamespace.assign("LVQBBQBCYASVKAZHPK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GUGKFLGAHETNACUDTHTPDAKUZJVEYUEJFJDIDUPQKQXNOLVQRZMNYBZFFSRLVPXWEHUOSYGEASSBBMKJVDNSMBDXOKFPWASCJRZMJCWNDMPTGIMEU");
    tmp_msg_0.value.assign("ZZQGDAXEGRUWDZURXVCXAYNHRQUICLJSPMNBPHOUOLWKFZNCLAEUERJLNJQDLYTNKERMAWLAMVOZOSHTHYFDULSEPKTAIVPKWOUVZNXCACQGDPYFDMSDXRSVTBMUBKGWFGRMMTPSBLIQCLFHVRKXISIVJICGEVKTQQPPDWXKVBKIJQSTTSYZNNHORMJIJAFWXLYBOJEBXBEEHRFVFZBTPYCGEZHGWJYGD");
    tmp_msg_0.type = 112U;
    tmp_msg_0.access = 191U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("TSYYOHIQCAXFZCTFXFJSJBPMNOLZDMNVTXCHMOHOCSUUDINJVAOGJVHZTLJWNQKXJRZBEPFVIUOFPZKGKCGNDWMTBLMZUSQTBEPEIAPJHKMYOCKEOPZCWGPIEKDQPJHGLXWYASTVLYZAQWBHENGBSUDWUAIGLUYFRQIESWRCYWDDLYQTHIKVMWRZGUSDHCAMMMA");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("LSENIPULWQNOYRDNPFEMRJOIKZVEPXASGIBVRPYERBOMMIQZHVUOWHVBOTHHMCWQBPHHJYEFDFYSNFESVCYCZBHORPSBCUCEZKIFJEASWOTPQGDXWKAHYTSGGLSNURQGOPNKCWTMYQDMAVBYSEXQTKUZJNUWLDVGLMWTRKUJXYHJBWQNVSMBKTJDNMZXNDQFTZLGCFGLCAPDQDALXKCIZIFX");
    tmp_msg_1.dest_man.assign("VJXBACWFHHJXYCPMFDBLLMULWHGUSVNIXVKAAHHVHUQDKYPCMZOADIVMTB");
    tmp_msg_1.conditions.assign("LQAQXKYREQD");
    IMC::CommsRelay tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.0502158077323;
    tmp_tmp_msg_1_0.lon = 0.00196152488824;
    tmp_tmp_msg_1_0.speed = 0.603712576227;
    tmp_tmp_msg_1_0.speed_units = 154U;
    tmp_tmp_msg_1_0.duration = 44109U;
    tmp_tmp_msg_1_0.sys_a = 13698U;
    tmp_tmp_msg_1_0.sys_b = 28933U;
    tmp_tmp_msg_1_0.move_threshold = 0.0131782258487;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.00180741419166);
    msg.setSource(4042U);
    msg.setSourceEntity(131U);
    msg.setDestination(53147U);
    msg.setDestinationEntity(39U);
    msg.maneuver_id.assign("MVDRVRDLSHZIPYRYNDZJCBBFHVTVKHSREMGQUOCONUDWREKPTNUXSHJJASVIEHGMHEFBQNTIUOEFSPFHLDWZAUTHQOYCCCZMKBICOOYQGNRXFUEEIBNYTULDMGFWPSVALNTWLRQKVJXEJQQYGR");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 14744U;
    tmp_msg_0.lat = 0.53426736482;
    tmp_msg_0.lon = 0.595755811222;
    tmp_msg_0.z = 0.122624228762;
    tmp_msg_0.z_units = 181U;
    tmp_msg_0.speed = 0.765060601393;
    tmp_msg_0.speed_units = 78U;
    tmp_msg_0.custom.assign("TYOOVMYJIRMHZKOCOHZAXJLCLKAVSIRCZYCHUYQZQTNZSKFKQVYJKMJSXNUBPFRETJRXQ");
    msg.data.set(tmp_msg_0);
    IMC::FollowTrajectory tmp_msg_1;
    tmp_msg_1.timeout = 28723U;
    tmp_msg_1.lat = 0.645528986278;
    tmp_msg_1.lon = 0.612328658974;
    tmp_msg_1.z = 0.166632608328;
    tmp_msg_1.z_units = 37U;
    tmp_msg_1.speed = 0.449114153896;
    tmp_msg_1.speed_units = 51U;
    IMC::TrajectoryPoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.x = 0.362716207501;
    tmp_tmp_msg_1_0.y = 0.342861557822;
    tmp_tmp_msg_1_0.z = 0.0489474758889;
    tmp_tmp_msg_1_0.t = 0.464326990751;
    tmp_msg_1.points.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.custom.assign("NGAPQRSKQVGXESSXIANKSCIPBWLYLBZAQIDTTJNHMIIQNOGHGJDRUPFBEDRDZHTJZCWYOKDZN");
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
    msg.setTimeStamp(0.545438436543);
    msg.setSource(49355U);
    msg.setSourceEntity(160U);
    msg.setDestination(27789U);
    msg.setDestinationEntity(124U);
    msg.maneuver_id.assign("FPZDDCNLZWOSAOXMNFBKJKVNESPABEOOJJHYVGFY");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 54744U;
    tmp_msg_0.lat = 0.36803234141;
    tmp_msg_0.lon = 0.369660974619;
    tmp_msg_0.z = 0.810061595833;
    tmp_msg_0.z_units = 63U;
    tmp_msg_0.speed = 0.503067662486;
    tmp_msg_0.speed_units = 204U;
    tmp_msg_0.syringe0 = 250U;
    tmp_msg_0.syringe1 = 248U;
    tmp_msg_0.syringe2 = 198U;
    tmp_msg_0.custom.assign("ZLFSMXDJOBYAKMDKZSMHODWCYLFLUETCMQTELWPTIYITVKYPXUNJM");
    msg.data.set(tmp_msg_0);
    IMC::SadcReadings tmp_msg_1;
    tmp_msg_1.channel = 31;
    tmp_msg_1.value = 1372342763;
    tmp_msg_1.gain = 248U;
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
    msg.setTimeStamp(0.829708280778);
    msg.setSource(16532U);
    msg.setSourceEntity(19U);
    msg.setDestination(9960U);
    msg.setDestinationEntity(87U);
    msg.maneuver_id.assign("JSYBFIJGZXRFYTMHOVGRFTJPQWBFXHDESCFLXSWVULDOYJRQYEXNVRAVLYEP");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 26442U;
    tmp_msg_0.rpm = 0.293963056327;
    tmp_msg_0.direction = 105U;
    tmp_msg_0.custom.assign("JFQUDFQGEMWIQYCBCWYJPJBIUNLDJSKEAGAMZJMBCNHHYPZRFZNJOVXCERTVZHAXXXUSRBCHZZAAWAJNGLGHMAYOINOFSKLBWPYUYUQKEEVLXKRWIGLQVDEFECERXJFRGDGRMPLPXWKZQQOHPFJZINOTMDOCPWBCMSVUBIVP");
    msg.data.set(tmp_msg_0);
    IMC::TransmissionStatus tmp_msg_1;
    tmp_msg_1.req_id = 18552U;
    tmp_msg_1.status = 40U;
    tmp_msg_1.range = 0.11787084025;
    tmp_msg_1.info.assign("ZPQDCUNUYLTYHMNPDZPJRGRQCTWOKGCNDIJYBVIHHDUTWUICBPGODZCGEMPZSNM");
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
    msg.setTimeStamp(0.644689742541);
    msg.setSource(12853U);
    msg.setSourceEntity(214U);
    msg.setDestination(6121U);
    msg.setDestinationEntity(36U);
    msg.source_man.assign("DGRIRYDFVLWJGUAACUUTHGSHJHFCVONZKPDWYMTANGITXTIEZYSOECLTPGNPRBPWF");
    msg.dest_man.assign("QEYKGBRYLEZSIUKZMXIYAIOFKQHNQSQAPTIHSENIURTGPPZEPRJVNJDLLCJCVJANCFCMLVSQOSJINMLHXIHPRMTLUQGDHVGSNYSDFUSOWKAVLBQTNOVKZGZBWDHUYBMMYAQSXQKRFBXFDWCGPBWEAGXXZVBHUAZSBTEMKDNTDVRWKEZFJLUQPCTYADWCHIYOTAAVMEUTWFXXRKBYMVTJDHPLUFXONKGFFLDNJMCXIWRHOUZZECJWRBG");
    msg.conditions.assign("XMUGTPJBMLGXDRXLBLMTTWZFEWZMRLKAMGPQCLDPQFKOPVNZFZSQOONYUAHUNOKQVZCSKXQEXIOEPZKSVYNSJBFGNAKXDOEYBHZRFIQITZWTFWRTAYAJNRAUFYCNDVDMAKCYNERCUVBVFKJHGKHCGTLGFISPUITIHUIOHYUZMTIEUJWDDVEJXMFAJBILIOHHQXBWCONVCWPADDGPLCEZXYVDRMWJXBCPMLKOREWSPRBSQHG");

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
    msg.setTimeStamp(0.660657137384);
    msg.setSource(14167U);
    msg.setSourceEntity(203U);
    msg.setDestination(45820U);
    msg.setDestinationEntity(32U);
    msg.source_man.assign("UDIUIRCGNYWKJEDYHUHGTFURKLTNNNEHNEOVDAOYIGCFVZZJFPIXXEAXLGKAJAENKOTQNFKMVXEIQWLBCJMFWZTHLEXDOMWTYHMCJVBQHCPAXBUSMUTLAIIJGYFSOBSWZARZPXWZFWQLSEGPTJNRIOSRYPZD");
    msg.dest_man.assign("VAIMIZUFLGRONYAMOWEPQMTFMMSLNMKPIFWXVZ");
    msg.conditions.assign("WZYOAUAZRDMIOFEQEBOQBYAPPWPANPYLYHVIQFERHTA");
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.981201022037);
    msg.setSource(62732U);
    msg.setSourceEntity(4U);
    msg.setDestination(63545U);
    msg.setDestinationEntity(126U);
    msg.source_man.assign("KPWDZYYTMFUGRDKVNOTYPSNBMCSZSLMSBFBERTOIGFIKZFGRBEOFHEGPQEDZUKZVQHXWHWWUBRPUIVAQDNHLPEVXSJHFMXDAICQUJLW");
    msg.dest_man.assign("RBDFNMTCCHHBHCDIAAEFHESMTBKMXEKLCHEVIATXCATKLIKBSRJNLUOGLCUZERWKNVBCNUEZRWPEKGVIQMJGUYAWLDFOPYUEGPRNSRDERIFLQEWHYPLPOAFSKYMSTYSLOJZMPKVNPTJCXRXJBORTQTAQFKZDMWYVJTJHKAGV");
    msg.conditions.assign("LYSCIJIKSEINYRQFJYRJXZZSMINUWAVGWDWBEZNLLOCEGPUUKWKCRYHSRJDVAZVRZBYHBHARLQYUCKHXUGNHFCXCXXJXJKFPNWRLNKOJVISZBXBLVECHSUPRQBWGRUZBADZVPJSXATTHDPEMPTGMYJEWFDUFLZQMEJOWNC");
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("BQDRUVELDLVEQYIZCWCKLCWWSYTMSVDQPFACXGACAZMXMJBBKUJWQSVDXYNHUGKIKWXELXUUMKMXNWVSUNDCMANOOVQTSJQZBPBIYHLZBZAEFPAJGHIXJDFLCORKTSKYZDJMNIRQUETNCAOWLOSGDISWYIGUJNUGVZSTTRBJXAHFHQIKEGO");
    tmp_msg_0.service_type = 43U;
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
    msg.setTimeStamp(0.533351524836);
    msg.setSource(4247U);
    msg.setSourceEntity(41U);
    msg.setDestination(6707U);
    msg.setDestinationEntity(153U);
    msg.command = 166U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TRVLMYDZLFCSMWSIWSCCOLOKZB");
    tmp_msg_0.description.assign("ZJALAJHDNITFOWLRTOFDBSLTMEGBBSIWDMEKILKNGMSFCFVYNVKMVQLPOLDLUGCPCTVCPIHTMKHDQZHAIVENAZCNTWRVJWINTUZHXQIJXJQWERLTYDEPSAAGFZYAKUOAYEQVXBZWK");
    tmp_msg_0.vnamespace.assign("YZEVAEISMSNAEUMUCBPNEAODJKSWZNGZDTLCYSMTHAEFXZONBPGDFYOYLTK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XPXFXRSUOGABRZDCYGZLUHWEDFIOXDFIMVCYB");
    tmp_tmp_msg_0_0.value.assign("TINTGHWXELSFZZWUOJCQUHXDNKUARUNLDACRPLUNRGSFCWOGMQYFPBDOYMOYCGMMSXVCHDFIQVDRCWKZZPZGMVTJBOEKYCRPYCMXCNALIWJEZTPVGKVMSQUNTQDOBMBKQSQKLAWHEUHZNBYPJAGTIFNELSRWEWPVKAXITPXRGIGSTYKUQLJTCFVVHTAVBWAWUEZGJJBJIPYEJOFQOROXNZEBFEHIXQOYNSSZLSHVXHLFYKPJMABDAMDRLIDDFK");
    tmp_tmp_msg_0_0.type = 177U;
    tmp_tmp_msg_0_0.access = 52U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TUWNXMYVMCZIIQRSERLDYVHIFSRNGZOGHRJUZQIUZGCPEHOOVUQGPKGJ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("QEWFXLNEQYGQKARSPADVMMTTKHSZPAXWNYXZPTWGFXGIVPBXNZSSMIGEYRMXQSSFOOGSUBEWUMEXUZYZPOMIDWVYJUTELFUJTLUHVXVPJCTVMQOKZYFOQRKLXHEDD");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.group_name.assign("JAULKFTLQSXVAIONIOBVFEJXMUTCTBSYEXEKGZVAZDXMIPGQONRFSEDIRUWALDZJVEHFZPSEPWRKLNDNBQWNKRNJYBJVIGUBDGEIXFIFRRRVEUDSMQWSMDVGOPGTOSKODYASDKCCPHZWEUMFXITHMOTQKKE");
    tmp_tmp_tmp_msg_0_1_0.formation_name.assign("NGWWXDNZEZIQGQRDACKSBUUYNKAHSNFFXZEUKLXMAYOENOHMZOHYQNRWYUOSPDKJQSZFVYSXQOFJZFGUIFYSBDRIEKJYAIMLELXTJLXSALCKIPQXXCRMTJENTKZBPEQVEZVBNRCMMCVVDWLHVRGLUUZLHOHTDAJPQXGDNYVMBRAJWUGCBJYBVRMGHFFIBQKVHWINPAFHZWOGFIOTIUWDTJSETXKRYJQKEMWMRBGPTOCTHIABCDLDPWSLCUOTSA");
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("ASBOXMCZUUCLVGLPDUJJYGHZHBGZDVPTHSGKBEGQMAXJTBIXUTRKOJEAMHDEALIDXMPNPLAPPRBNHYQQEHTWVIBLKCTWJHKVZMJBNIQNMBYFWFVONKWMXVYXDRSIZNECOJWYZJFADSPDUEKUSXJCZYGUSVQVEGSYWTRVLOKHDISEFCZZKWMGGWOMFUPQXNKTIMNYALQLHSLPDRCCKYIUATFQRCFFDFNSYIXPQQWOWZITB");
    tmp_tmp_tmp_msg_0_1_0.description.assign("KKRKYHKCTILSCRFJRDWSHELRJPOWMYDTPBAOWIAGBTPUXRSERYBNKITVOYUMCEIJZSOAOOGRIWFCLNVAHMQHXWGEUZTPWZOWVQJDBQMYQUSPDXLFPFAQWBVFIFVTVHDULZSHCDVMYBOPNGIIHQXHDEEUJVXGDBACBLPGNYAJQEXMPGBZLNXFJXQGXZWYIZNDDGUQZPCKHQM");
    tmp_tmp_tmp_msg_0_1_0.leader_speed = 0.0880395732021;
    tmp_tmp_tmp_msg_0_1_0.leader_bank_lim = 0.00369953901743;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_lim = 0.909339896278;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_wrn = 0.0126479992086;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_timeout = 9165U;
    tmp_tmp_tmp_msg_0_1_0.converg_max = 0.231015126622;
    tmp_tmp_tmp_msg_0_1_0.converg_timeout = 1840U;
    tmp_tmp_tmp_msg_0_1_0.comms_timeout = 46459U;
    tmp_tmp_tmp_msg_0_1_0.turb_lim = 0.239537477107;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("BRUSTKZQNVNQIUPVOWHOYNYFEFQEWECPEDRLQATSPPAFKJVMFDXGIMZRMPWMWUAZEITUBJSJZLXABDRMKCIHADPMWDLVSMGTGCEOAQOYUIPKMAPWZFQGAJMOYYRQGJJISLBCNJHUOTBKHCXTXLYRJZZR");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("MFEUMKZQGACFPITVFRALKIGULWQXLWNTAEBCELHYCWDPHTMBTWZJMOJTYJAWTYRPGESZCOSCORLPWGBFGOXGUQRVXJNGKDXUMSUAOZBMBDQDFICFDJGFIIYIXEHSXNUJKVOBSDLSZJIOOWWVPLCUDPHCFMQWLRHQUYESAZEDQDMPQRJIPYBAYZNZMQCVKBNKHVLXSNPEMHDSKIQRG");
    tmp_tmp_msg_0_2.dest_man.assign("XNURQUFXRLPBHREPJWBXKSFVAJQLLEORXGUXTAEEGS");
    tmp_tmp_msg_0_2.conditions.assign("LPLQNNDRVEGKQZOEHMLEWJLUKXYKVRGEFXTTGZCQTJPFNTAHXPPWKSHHSRYGAYIAHGP");
    IMC::SimulatedState tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.27107138558;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.62351813096;
    tmp_tmp_tmp_msg_0_2_0.height = 0.333292199373;
    tmp_tmp_tmp_msg_0_2_0.x = 0.216995331878;
    tmp_tmp_tmp_msg_0_2_0.y = 0.645278961626;
    tmp_tmp_tmp_msg_0_2_0.z = 0.973710538568;
    tmp_tmp_tmp_msg_0_2_0.phi = 0.244615135179;
    tmp_tmp_tmp_msg_0_2_0.theta = 0.218245443319;
    tmp_tmp_tmp_msg_0_2_0.psi = 0.511479600713;
    tmp_tmp_tmp_msg_0_2_0.u = 0.842802069975;
    tmp_tmp_tmp_msg_0_2_0.v = 0.35469248085;
    tmp_tmp_tmp_msg_0_2_0.w = 0.247818218543;
    tmp_tmp_tmp_msg_0_2_0.p = 0.983918757191;
    tmp_tmp_tmp_msg_0_2_0.q = 0.650857979263;
    tmp_tmp_tmp_msg_0_2_0.r = 0.774247883687;
    tmp_tmp_tmp_msg_0_2_0.svx = 0.0963191324902;
    tmp_tmp_tmp_msg_0_2_0.svy = 0.997418064676;
    tmp_tmp_tmp_msg_0_2_0.svz = 0.0945970878815;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::Heave tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.0403145701211;
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
    msg.setTimeStamp(0.63916379367);
    msg.setSource(26552U);
    msg.setSourceEntity(6U);
    msg.setDestination(48478U);
    msg.setDestinationEntity(213U);
    msg.command = 62U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZSPEMRGWLRYZFAZBSNNCXXWOJIFCOBTDJSQZQUDYQAAQDFRHUUPUDEAVCUWJMDHAOCLGRXYTBCAVYZXTUGFKJLMAXIIYIGZPSATHFLLLFDACMPVFQCNTEIKPYEBIEBVZRQRKVJNTJHNOFCTNGIXVSOMUEOQNHOVZYPMGRAW");
    tmp_msg_0.description.assign("IOHMCULTMQLLMPJMYBRPITLNYVKOLVZDDECOCJTQWEYIFGJBNRHZXYQTJQINBEGKUXUTWZWKMGPHZFJGBUWYEGTHYPVCGHSEAUJRMRBOMARWGYFO");
    tmp_msg_0.vnamespace.assign("TAYOKSFMVIECDUKTTZMXBBEKCSWDMHPWHJIGGFHQCEPPMOMUKWMEDASYLVNPDGENAXPGPLXBQRWXUYZOOHURWVVDPNWOKDUVKRFEZBRFUAYYKXSULLKAIQZRACOXDCMWKAFQGGHOTQNQHHDNEEHFQCZMBNXZWZHFMQSJVCXINGWDRI");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QNIVKFDREOEWRZSYGKAKBCGLBIZYFUJVPAGYBDWHXCSRUMKRNS");
    tmp_tmp_msg_0_0.value.assign("RXJFJQBVRRLPCPSFTLYSUFKQXHAJYEAGBKOZJHIBSQPGFKYKOVMDYVBXFQ");
    tmp_tmp_msg_0_0.type = 4U;
    tmp_tmp_msg_0_0.access = 183U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GQJZATCIDNCCKLNJKLUKZBJVPRIDUTUKMICOBRECVEQOKSF");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("YEILLBXNFGYUGTISZPJRFEFPNZSKIVVTAJSNFYXONINTDYESSQZJDTLEOZIADOZVUGQPLVJBBPHMQZYXSHFYPCLSMWEAEQUKIQTHXIKGLASGKZBBQMROBDRGQHFKHKBCWMEEZWLFUVGNXUBJUPNMHJRMHRIFOAQVRYDRTCCODWMIJWQPPXSPCLCKWCDQNMAYHOUTNXIRZVYDUXESZFXJRLHWJH");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.587339746933;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.0577081719865;
    tmp_tmp_tmp_msg_0_1_0.z = 0.731652391628;
    tmp_tmp_tmp_msg_0_1_0.z_units = 213U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.387494567889;
    tmp_tmp_tmp_msg_0_1_0.duration = 63973U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.715464186317;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 238U;
    tmp_tmp_tmp_msg_0_1_0.popup_period = 22984U;
    tmp_tmp_tmp_msg_0_1_0.popup_duration = 16057U;
    tmp_tmp_tmp_msg_0_1_0.flags = 48U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("GEOMCRUDNKEVAYOAYXJOLUZFQTOYWEVOZMFGVNYLWPUHVMYDBJWFBIEUICCLKRNNGJDTWSENTUSVZBRPWUXXEJKHPEUXJCQMIAGNHWUBQVQYSAOLBHYXROKPQFTFJFIAMMJRKDHUFDSCCZEHVZVLZRSCPTXRMGLIZXYHNFIFZDDCAAEODDJZGAKMHSCPMRGNOYLQJXIGTQAHRTSMWBTBSEFOBISPUTDWIQQNSQAPZGJLWPHKBBVNWXCP");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("HWPRTKIDZAKNNXGHMJMZWRPAURMLQNQQOKYKPOMYQSZLSVDNCODBHLMJFTHFXFWEMAOEYNCCTYXKHVQJDAUIBARCRRWTDCURWLWCIOZLYMLDGGPEIFNMSFEROXTHZNBXYUHKFPZXJSDZAV");
    tmp_tmp_msg_0_2.dest_man.assign("DGAGKCZXCPXLEQNGCUVIMMRONLUTLZQSBNQCYYNQWVSBPAEMNJKVGVBNEWZRWKQEJOJICSURGSDJZJZKUOUMYDALXONUEIHFVBAPFBRPPCDAZDABFHWMTPLHQHKYFAAYHJBOAUIGMCRVFPWJRXIETCVTFUTETPJMWQCNISFQFBKIISLUCVLVVEGRHSMWHWHJXXWTHYZKNYQMDKHEPSDOQXFLJNWXGTUYKGOBROEX");
    tmp_tmp_msg_0_2.conditions.assign("UIJOSUTACDVNG");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.timeout = 41405U;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.716058422602;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.979716902091;
    tmp_tmp_tmp_msg_0_2_0.z = 0.530760479324;
    tmp_tmp_tmp_msg_0_2_0.z_units = 196U;
    tmp_tmp_tmp_msg_0_2_0.speed = 0.065964009424;
    tmp_tmp_tmp_msg_0_2_0.speed_units = 74U;
    tmp_tmp_tmp_msg_0_2_0.custom.assign("MUOKEYPHMLHBYOFNDOACKRMRZEDADMBWYSATQTVLMZQCJNWKKXUOTWRRYSNYGHWZASAFDJINGEIBECMPLHNZFNFHPPYTBVBXUSQXAWOGJIFRGIUHSDJKEPWGJXVFRCCQDEITSVERIFAHGQPJSUBQYUFTNZGNBETQDXZVVICEJJYLRKOHTWMUGTKLHSUJCICLDJWMRDWOTMLQBXPVAKZKXGFGIRYVCOQYSXIZLWXEAVCLUFV");
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::RestartSystem tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.type = 35U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::Elevator tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.timeout = 35302U;
    tmp_tmp_msg_0_4.flags = 88U;
    tmp_tmp_msg_0_4.lat = 0.502211324765;
    tmp_tmp_msg_0_4.lon = 0.096518987076;
    tmp_tmp_msg_0_4.start_z = 0.0207317747151;
    tmp_tmp_msg_0_4.start_z_units = 214U;
    tmp_tmp_msg_0_4.end_z = 0.0861135916148;
    tmp_tmp_msg_0_4.end_z_units = 82U;
    tmp_tmp_msg_0_4.radius = 0.0907983175883;
    tmp_tmp_msg_0_4.speed = 0.879929510687;
    tmp_tmp_msg_0_4.speed_units = 25U;
    tmp_tmp_msg_0_4.custom.assign("ZFLTOWQLKNLLJWYEKVICSDEDEHHBXHCAUJIKRUNIJRCMAXOQMMYTGDMGEVMDPJAPBLKVXYUWRESCDIVIDNMFVIIETZOLQSNXSVWYZWHOQWYAAKEMZZQZCARYZNAORVBOGHPSLNL");
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
    msg.setTimeStamp(0.555748420992);
    msg.setSource(20845U);
    msg.setSourceEntity(78U);
    msg.setDestination(19952U);
    msg.setDestinationEntity(94U);
    msg.command = 106U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ACJOTJSUGRSBJSVWACHX");
    tmp_msg_0.description.assign("MGPWIMXIXQEDEUDXSZYEUMKTAIJCNHKNKJZTGIRPDLRVJSCGAQEHCFNFCRHRMKUSGPZHZOLTIAOUVJOEWBAWCFFNPHE");
    tmp_msg_0.vnamespace.assign("UZATJAXKVVRKKBQOGLMVQONCXPPINIOJZQAXSBSUKCOLMWJBFYMYXLLEHRNURGMSJQVBKAUV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HFBUQAFJZKLQPFODFGVIBRDEYUSKNORAKZVEPMMXPOICIYSNCENHBHCYITPWLAWGTFPNTTGTBN");
    tmp_tmp_msg_0_0.value.assign("QWFTZALOGCXTQAGUXMHUCHBUNYTLAHWUMKPGGZFTNIRHEFJOLIDHPBMDJCWOTXBQUZFHOZIAMERDEHDWESAOZQYMQTVQXYVFTLRRJSUNMSYLXWFUAVWJQOMKJB");
    tmp_tmp_msg_0_0.type = 3U;
    tmp_tmp_msg_0_0.access = 165U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MHEZVYSEHFNDCGOXVWYFJGKQOTKKSLOVBNTFAEBSTYUYCUHFRTVZQGNYRPGCWPXLRXASNAJZDOXLCYWHSHFURCDMZWD");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("MWWFEDEZESW");
    IMC::CoverArea tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.982303308812;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.78578585803;
    tmp_tmp_tmp_msg_0_1_0.z = 0.493428862636;
    tmp_tmp_tmp_msg_0_1_0.z_units = 199U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.457397059519;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 107U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("BJUETGPUBQLGETVLHDJSAZESAGLBCUTDOBVONRTIKFVMFVQAYTHUUZEMZANODBSNRKTMHJPFZFGLEKFLMYOYVRBNGRRZIXSEUDPJDYUMIGLKMVKHXOW");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::PlanDB tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.type = 151U;
    tmp_tmp_tmp_msg_0_1_1.op = 124U;
    tmp_tmp_tmp_msg_0_1_1.request_id = 8870U;
    tmp_tmp_tmp_msg_0_1_1.plan_id.assign("MDSJDXODWUASOKTVHBZXZUHZVEBTAEEMJZJRLJNFNPAYCFTOCSILWRQSPUTBQOEDKCOQFOUWTLPHCMMPVRKXAKDGXTKDHXEWHERRTYBDTSVEZBMMKUKYIIIZLEJMCKXSQOZCSXOGVBLIVKUAGFFYIYOVGNDPPHLWVJSNGQRNPZDB");
    IMC::UamRxFrame tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.sys_src.assign("TTCYJRUFVWOSYNKDTNGWNFODWFVTNRMKQIBWTCPRNXRDOEVSPJBCADDZJHOXJBZJXAXPRCYVGNODZYPAPBIHAMHZQOUNGBEEEWKYFTLQYS");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.sys_dst.assign("IUOZEOVRZHLZMFLTJVVXEOGSHYGXSTJMIGBEALECCTQHBUKCOUQWZNIJSPUVHXDNWGIDWHTITKSDCQTFXGPZZEISQUDDBWLENCMKWHUAYPDAGFMRZRQKYTSYFBXBRBNLEJPQSXRPKFQTUMJGXKAJZBSVVGXD");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.flags = 78U;
    const char tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0[] = {49, 104, 28, -81, -50, -54, 15, -34, 63, -20, 96, -106, -106, -104, 27, 43, 73, -61, 1, -87, -13, 31, -84, -51, -72, 14, -89, -67, 10, 31, -58, 33, 28, -121, 49, 105, -128, -20, 98, 104, 58, -29, -52, -37, -7, -3, -109, 46, -121, 107, -73, 67, -17, -38, -126, 14, 122, -122, 57, 76, 102, -92, 44, -10, 53, 126, -114, -2, -77, 63, -36, -84, 56, -85, 124, 50, 104, -10, -80, -8, -50, -107, 15, 7, -123, -41, 124, -115, -14, -39, 77, -14, -103, -5, 36, -2, -65, -4, 3, 94, 73, 114, 4, 36, 97, -71, -14, 101, -121, -87, 76, 53, 91, -84, 18, 119, -12, -111, -82, -85, 0, -51, 52, -127, 6, -86, -68, -104, 79, -100, -127, -63, -61, -38, 116, -38, 11, 21, -103, 107};
    tmp_tmp_tmp_tmp_msg_0_1_1_0.data.assign(tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0, tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0 + sizeof(tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0));
    tmp_tmp_tmp_msg_0_1_1.arg.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_tmp_msg_0_1_1.info.assign("KEVUOVRWHUQHRTRWDDCSOUMTHLAYFTKFRSQMNJJYLJDEDDJZHTLGPYDSLPQYKJAXGZUVHEBI");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("WRGOUYFXQNLJJVJUCXHYKZGRJAZLBFTFQLXSFCSBSDDPWERYH");
    tmp_tmp_msg_0_2.dest_man.assign("EDBNLSDBPOLEFQQHVKKVRNZCIEQRYCMPXBRTYGBQKOUUWDVSGFQHITXLHPXZHZFTNXNHZTHALIFWRIWJGYLCMJR");
    tmp_tmp_msg_0_2.conditions.assign("EBANFUUWCAJCQCNZRLKHVIKQJDTENEBRKD");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::Dislodge tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.timeout = 48720U;
    tmp_tmp_msg_0_3.rpm = 0.825351852829;
    tmp_tmp_msg_0_3.direction = 91U;
    tmp_tmp_msg_0_3.custom.assign("PUDUXNBJOTKBWMAYJLLZYGKFPBFXONVKRZJRGJWSCXKDVJCQBAXAEQSUJOLMOQIWRHFOCYKWLMSFEAVIRAOOOAIHSHHHQWGWGXSHTZLFRPCALBWMEHIVFQYIUQGGCXUPSMGODTIBNYSSJDVIYDWUPZLBELCHADWUGFNLEVKEVFZCGVCKHIWXFTPPXMZKDIBKJVNMUQXUFYPYNRCG");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::DepthOffset tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.value = 0.8403400683;
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
    msg.setTimeStamp(0.688830961584);
    msg.setSource(21836U);
    msg.setSourceEntity(145U);
    msg.setDestination(7755U);
    msg.setDestinationEntity(33U);
    msg.state = 208U;
    msg.plan_id.assign("JUZOJBDCOSSRDRIVASDWGPCEMVQSXNIPOEHMBMBVQKGYWKDKIRCGPEYPXNYZVHMQNDINIHPUVKNSYFXVLWZROUUOINMCRXQMCPELWTSRQOYOLTALPWJZBHQAKYLARUJXJBMQQJASNBXFJKLABHEBQDFCBTB");
    msg.comm_level = 118U;

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
    msg.setTimeStamp(0.953354980017);
    msg.setSource(22986U);
    msg.setSourceEntity(161U);
    msg.setDestination(42886U);
    msg.setDestinationEntity(61U);
    msg.state = 96U;
    msg.plan_id.assign("NWDCOZHMNJQGKBDHWBLNAZH");
    msg.comm_level = 107U;

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
    msg.setTimeStamp(0.719008021297);
    msg.setSource(65344U);
    msg.setSourceEntity(116U);
    msg.setDestination(56619U);
    msg.setDestinationEntity(111U);
    msg.state = 210U;
    msg.plan_id.assign("OALWWFWONGECGALVRUZOSPDIVOQXXHVGOUGENLPFQZPYDYCPQMESASXNTSRIBUFMQADNBVYRMUZWWSDXBLLGJRZQQEKHQVEKFCBPLNKZOGHURYDYJCIWUPFCOCRPPMZXQTYFFT");
    msg.comm_level = 27U;

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
    msg.setTimeStamp(0.898979582542);
    msg.setSource(49857U);
    msg.setSourceEntity(13U);
    msg.setDestination(31287U);
    msg.setDestinationEntity(10U);
    msg.type = 38U;
    msg.op = 63U;
    msg.request_id = 64351U;
    msg.plan_id.assign("JWVZLFIFVFORGBJGNVC");
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 49448U;
    tmp_msg_0.control_ent = 98U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 21U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.924237724756;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 93U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.268817883443;
    tmp_tmp_tmp_msg_0_0_1.z_units = 99U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.972618232165;
    tmp_tmp_msg_0_0.lon = 0.483095650019;
    tmp_tmp_msg_0_0.radius = 0.0241134579264;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 90U;
    tmp_msg_0.proximity = 140U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DKWIAJXCFKAYXYNWGTVEFPGULQJRSMFL");

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
    msg.setTimeStamp(0.552155441312);
    msg.setSource(63021U);
    msg.setSourceEntity(98U);
    msg.setDestination(29340U);
    msg.setDestinationEntity(222U);
    msg.type = 229U;
    msg.op = 173U;
    msg.request_id = 47010U;
    msg.plan_id.assign("QNHBNYTPVCDLJKUSRYUHTSUQPCOPJGZBEWXJHMSGRSISKAKJKFLCMFNEMNEVVROAIWWCIUORYOHBHVBFZLMZJUAKWTZQVGXWINFWEMCMQBEIKFUDTLBMKAITJWXAIQWFYNDRXXGBVVSLADPHHTZJULFNNAWVZGDVOAOYJGYHQMDMJOYOSEMXTPEEZWCRLCPFGQDPDSFAFH");
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("FZGIXAOAFWGEGFWWZMDJQQACTTSIAAWYNHJMZVDJPPUHC");
    tmp_msg_0.message_id = 13318U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DXOUNLBEVPBUFDQXRBHWJVDNKAHBLQSYGIEOENSVEDOMUZIMGLSHGIXRHXYHOIYGFRRPTWEKZQAPYZHMSAAXJZAK");

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
    msg.setTimeStamp(0.0736875483935);
    msg.setSource(5134U);
    msg.setSourceEntity(145U);
    msg.setDestination(29930U);
    msg.setDestinationEntity(227U);
    msg.type = 201U;
    msg.op = 51U;
    msg.request_id = 16163U;
    msg.plan_id.assign("LQRTRKUZPXMMYQJXQPDHZFWIETFUWUNFTCNJWAHSPOMDACLOGVDRTFLITSABCCYNGHBOPQKIRGSPQVMSACVARJBTJXMNIEXOEFGWCNGVXXAZTEJHJHYCQLDXSIENAZBGKBEWNVBOGMKBZLFUNUXMYFQUVTDCQIRRSUACEUZPZOTOSZIVZEOFWSWADPRJJBKPJSWAKBOYMRHKGJKELQXITNYSVLLYNBEOLHDMVRDIHHWYDDG");
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("PXWFPCKJTNSAVLNSNBOJARJMWJZIPJBDJOLBGMARYMITIFKBGGOCCZULWZHLEUCCHHNPGNYTKAGEOXQWAZVJMMHISRSHQIWKDIAVENKSHAMEXDFXHRYMGGCSBIQSBQFASRDCUTLZDREOSYUAERDZOVFIXJVYXFEYWUUOFGBVDZIJKVGPVCTLYL");
    tmp_msg_0.message_id = 31182U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RUHNYBMWBULTTUZBESFLMPMVLFTGJQWXBBNGZSIBDQGRDIYVOMDEDCIQBPLCKVXAKJJGCYXUEPEYGQDWIREIEOTPZHBTPKFCXVMOKJKTSUACHVJIRNFHSXRAQZRSGQYPJLXFLRYGCINHDKKBSCMVVHYIRL");

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
    msg.setTimeStamp(0.0107615634418);
    msg.setSource(253U);
    msg.setSourceEntity(69U);
    msg.setDestination(42313U);
    msg.setDestinationEntity(172U);
    msg.plan_count = 57452U;
    msg.plan_size = 2394547345U;
    msg.change_time = 0.549211810595;
    msg.change_sid = 21418U;
    msg.change_sname.assign("CBTJDESUZZMAUMSKOTUJKBETGEBIZUKBUPOGSRLRZUT");
    const char tmp_msg_0[] = {51, 41, -2, -85, 9, -39, -33, 36, -88, 42, -125, -62, -76, 121, 72, -33, 92, 97, 41, 72, -94, 103, -34, -75, -47, 73, 126, 5, 23, -76, -42, -116, 45, -112, -1, -85, -43, -101, 114, 79, -63, -84, 86, -88, 77, -6, -76, 66, 53, 61, 42, 123, -88, -96, 118, 62, 36, -115, 32, 21, -65, 31, -81, 43, 25, 26, -32, 25, 54, -85, -16, -84, -17, -112, -91, -118};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CQAZYVDOWFSLAPDZDJNIMLICHGMWELXCSXZGTXUAMBFSNZPIWHJETHUOKNOYVPPIYPVFPVXRNHMOCUAQFYXYPZTYPOXLRLQOGAGINGEUBFSHHKWHCBGEUEDRPUDNFISER");
    tmp_msg_1.plan_size = 44276U;
    tmp_msg_1.change_time = 0.535722167839;
    tmp_msg_1.change_sid = 30706U;
    tmp_msg_1.change_sname.assign("WHKWXQTQYRZCONXOZRKBKSHTWIKHRXBQEOPJDQQDFPOTVZRLGCAYGGGGFSPDWNBAGSQSBIVLUUMSXEZIQVTUDAJMJHNPHSQCMLABLHJLJDSTYNCUZFKOOHKFRLMAXBUJQCRSPYCGOVDIYJTVFFDNVGTOTEAEVAECXSNRTIAFMYHQWJVRGBMINBBMMKWVXCYNDIHJLZUZOYXPPKLYSTYLU");
    const char tmp_tmp_msg_1_0[] = {-31, -95, -86, -2, 89, -74, 25, 12, -126, 13, 31, -65, 82, -74, 42, 66, 62, -115, -113, -4, 72, 38, 60, 3, 17, -73, -12, 42, 70, -52, -66, -121, -25, -101, -33, 114, 45, -7, 51, 59, 74, 85, 23, 79, 58, -92, -52, 22, 63, -94, 5, -20, -110, 99, 99, -11, 0, -100, -2, 115, 119, -25, -75, -27, -82, -56, 28, 98, -114, 18, 51, 112, 85, -67, -32, -77, -13, 126, 39, 27, 96, -66, -38, -99, 17, -17, -104, 101, -22, 18, -118, -72, 78, -53, -70, -61, -15, 93, 18, 19, 43, -35, 0, 74, -101, 82, -101, 57, 13, -38, -126, 24, 119, -46, 124, -91, -37, 60, 27, 100, 5, 22, 3, 70, -2, -74, -18, -18, 54, -117, 65, -71, -61, -110, 94, -30, -57, 107, -94, -57, -44, -58, 11, 50, 29, -73, 86, -36, 100, 20, -121, -2, 21, -68, 120, 113, -53, 13, 62, -95, -126, -92, -50, -16, -55, 35, -128, -123, -10, -81, -6, 99, -33, -83, 118, -66, -69, 29, -30, 100, -99, -81, 69, -1, 121, -18, -51, -35, -103, 95, -65, -93, -77, 91, 14, -121, -34, -68, 124, 39, 48, -55, -110, 25, -27, -18, 89, 36, -53, 110, -69, -112, -20, -83, -32, -118, -65, 77, 126, 56, 56, -20, 123, 118};
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
    msg.setTimeStamp(0.287310108532);
    msg.setSource(39185U);
    msg.setSourceEntity(76U);
    msg.setDestination(3182U);
    msg.setDestinationEntity(85U);
    msg.plan_count = 32639U;
    msg.plan_size = 660259735U;
    msg.change_time = 0.982233842315;
    msg.change_sid = 64042U;
    msg.change_sname.assign("PKWAWEOXYMPODRQAVYYLUJAWXNECJWUWYGAGHGPXJSBODVZPHRFHSFFRYVILLHMCDKYKDXGVZUVIFOALRKMBAMREXKTSOT");
    const char tmp_msg_0[] = {-108, 23, -125, 46, -50, -118, -6, -1, 6, 1, -41, 19, 107, 94, -89, 6, 75, 37, 50, 99, 108, 57, 6, -122, -74, 41, 43, -4, 107, 3, -66, -98, 33, 99, -75, 103, 36, -71, -30, -40, -1, 29, 3, -19, 54, -65, 119, -124, -31, -65, -76, -124, -38, 117, -21, 49, -5, 60, 90, 114, 62, -120, -23, 98, 111, 108, 85, 22, 86, -87, -46, -72, 24, -124, -66, -68, -1, -54, -6, 26, 76, 111, 52, 78, 38, 31, -83, 67, 3, -52, 66, 112, 29, 59, 37, -106, -90, -107, -6, -87, 74, 52, 23, -86, -40, -60, 60, -36, 92, -113, -76, 22, -59, -63, 53, 106, -76, -101, 123, 42, 64, -34, -15, 49, 116, 105, 54, -123, 24, -6, -98, -87, 89, -114, 64, -3, -116, -101, -45, -128, -54, -116, -21, -126, 9, 80, 45, 94, 66, -31, 72, 0, -52, 62, -30, -106, 93, -87, 13, -73, -117, -12, 4, -18, -119, 58, -93, 25};
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
    msg.setTimeStamp(0.197524872654);
    msg.setSource(57645U);
    msg.setSourceEntity(162U);
    msg.setDestination(60428U);
    msg.setDestinationEntity(190U);
    msg.plan_count = 24854U;
    msg.plan_size = 4041420599U;
    msg.change_time = 0.351647590666;
    msg.change_sid = 58863U;
    msg.change_sname.assign("FAJSKJBBCCNAQFZXESYBCTVJKHISRDCUUMPLRYPPBGMOBEALIDGNTUMGAZCJFMIWJPNKD");
    const char tmp_msg_0[] = {122, -58, -50, 73, -119, 110, 83, -83, -31, 58, -48, -104, 5, 105, 106, 55, 79, 46, -21, 108, 7, 114, 84, -125, 34, 50, 63, 62, 31, 18, -28, 54, 80, 5, 24, -14, -123, 83, 8, -13, 113, 13, -68, -54, -53, 87, 21};
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
    msg.setTimeStamp(0.669558796832);
    msg.setSource(33222U);
    msg.setSourceEntity(237U);
    msg.setDestination(4546U);
    msg.setDestinationEntity(189U);
    msg.plan_id.assign("XWZHTMTYRETQYBDWJYWGPPTVNJLHXTOWHNOFSFIRAMDHEXVRKCMEUKMALIHIOXFBKPJCSVTFCYLQUQKDLSJXZJMHNXUGQZIQUKRFDAQZGXRYOPWULNWBKICGVBGLCFLPYTNEPCQCEULEZYPHMGUDBFDKFEAMGAEIE");
    msg.plan_size = 36283U;
    msg.change_time = 0.559572531771;
    msg.change_sid = 16611U;
    msg.change_sname.assign("VLRZVDWSFIASNSXHCLRPCXINIPCORHKQVPOYJPWLZRWEBDNBLQGTIGRMDAJMOJKJTAUTWGONQBXSZJYSUIRCTPQFBHDCFNLVFYVYRCCFNPMWMXGRBNYXHZEAUZLSIUZHFWPDJEBOGSSOQODTIKZEFVBAYPUHHXUPYZGPEFKWN");
    const char tmp_msg_0[] = {-124, -96, -84, 19, 51, -49, 45, 13, 8, 100, 122, -86, -58, 10, 106, 20, 51, -91, -86, 100, 78, 94, 106, -119, 68, 48, 14, -49, -52, 50, -87, -50, 50, 90, -111, -39, -25, -24, 101, 118, -29, 101, -70, -50, -63, 3, -23, -104, 76, -72, 53, -56, -109, 37, 40, -7, 12, 84, -30, 85, 62, 16, -36, 19, 14, 27, -16, -50, -10, -107, 88, 6, -69, 20, 126, 54, 20, 8, -75, -99, -38, -60, 83, -15, 30, 86, 22, 62, 115, 107, -100, 0, -118, 36, 44, -63, 30, 112, -69, 18, 64, -29, -108, -103, 13, -1, -93, 106, -79, -59, -25, 87, 97, -92, 24, 126, -86, -3, -21, 95, -17, 69, -70, 8, 43, 77, -88, 8, 59, -66, -97, 67, 70, -35, -77, -63, -62, -51, -72, 0, -23, -62, -105, -18, 98, -75, -40, -45, 82, -88, -89, -94, 54, -87, -15, 119, 54, -76, 69, 109, -6, 106, -113, 75, -78, 122, 61, -104, 60, -11, -8, -15, 9, 52, -108, -87, 119, -41, -56};
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
    msg.setTimeStamp(0.634818159656);
    msg.setSource(13275U);
    msg.setSourceEntity(231U);
    msg.setDestination(24151U);
    msg.setDestinationEntity(90U);
    msg.plan_id.assign("CBKYBCGWTAGRLJWTBESNLCBX");
    msg.plan_size = 35634U;
    msg.change_time = 0.00598838850561;
    msg.change_sid = 51057U;
    msg.change_sname.assign("DYPOJSAEHUBRESBCQMKPGDAXRLQEXIPTRPWWBFBZDTOYVGUOOHSNCZLKHMHAMK");
    const char tmp_msg_0[] = {17, 88, 75, -39, -85, -33, -7, 32, -6, -8, 11, -97, -125, 84, -30, -111, -20, -115, -4, 90, -52, -102, 73, 96, 42, 12, -33, -1, -65, -2, 55, 14, 123, 40, 33, -2, -115, 55, -101, -121, -84, -121, -38, -97, 17, 78, -126};
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
    msg.setTimeStamp(0.443479583178);
    msg.setSource(6919U);
    msg.setSourceEntity(227U);
    msg.setDestination(59718U);
    msg.setDestinationEntity(147U);
    msg.plan_id.assign("AVALXHLQTRPTVMPRGODCCOPUBEMVRLMHSELRBXKGXSHOXKIEMLSGYAEPNOBTNZKPJAOZSJRYJNVCQIWDLULVSLSQFFWRTCKKDBTWHBKD");
    msg.plan_size = 27960U;
    msg.change_time = 0.121122448804;
    msg.change_sid = 17521U;
    msg.change_sname.assign("YUGRSBXXPNDCQO");
    const char tmp_msg_0[] = {-51, 54, 22, -53, -85, -11, 1, -123, 6, 114, 33, -100, -90, -23, 14, 44, 79, 114, 64, -88, 67, -59, -97, 87, -4, -44, -62, -41, 58, -50, 28, -106, -66, 30, -100, -128, -8, -97, 101, 43, 115, 6, -99, -63, -123, -36, 57, 48, 22, 17, -121, -39, -78, 46, -74, -115, -16, 109, 17, -81, 84, -117, 55, -66, 64, 25, -59, 41, -21, 119, -100, 126, -85, 80, -82, 124, -43, -37, 16, 49, 44, -125, -69, -34, 25, -21, -99, 89, 17, -92, 86, -39, -101, 4, -66, 23, -40, -45, 42, -106, -48, 67, -26, -96, 83, -49, -77, -109, 53, -116, 71, 66, -29, -54, -39, -22, -78, 93, -46};
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
    msg.setTimeStamp(0.0617808347208);
    msg.setSource(46190U);
    msg.setSourceEntity(133U);
    msg.setDestination(50897U);
    msg.setDestinationEntity(157U);
    msg.type = 28U;
    msg.op = 69U;
    msg.request_id = 61579U;
    msg.plan_id.assign("IXIZHTSVPUGKQTFAVXQWHETYXSBJFQLBUWTZLLWCPTNKHBVUJFWOEMDGKCHBXUMGLKWEYVONQXUJGLZJNNNSARYLFKMDGZKTRIJZOYCBSEOMAPFIPKLYJAOEMFCVSGEYXXIXFQAUJCNZTIPAXYRIARHWKUVNDADRGRPLHTSMZOODMMAKDQJOIOJFPLHJVEQXCRTFSRHTGYICYOUVCG");
    msg.flags = 25367U;
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 160U;
    tmp_msg_0.clock = 0.780108253868;
    tmp_msg_0.tz = -31;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MUGJMDDWKYNTJZAJOHEXRIIWARIHFICGZGUQWXCMFAJNMTLQUNSTDYDYUENCQOGFXEUNJXDYPSECYQZFLRHGBCPZDAKQXPEWJTEUGMEOVTNSGVWRTVZDHLAYVBBULGZNHXXCCTLBQUXMNMGOCBFBVQTBDVPAJJWNMCFVSYYHJKKBLOSUYOFSNZKVOXIWTCKPHFRFYXIZQELUKEWJSPPWI");

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
    msg.setTimeStamp(0.658608728526);
    msg.setSource(6330U);
    msg.setSourceEntity(119U);
    msg.setDestination(40887U);
    msg.setDestinationEntity(27U);
    msg.type = 48U;
    msg.op = 214U;
    msg.request_id = 37229U;
    msg.plan_id.assign("OIZTYYXTFOAPAMINLJJZTKINUCYCNFBZCFAKRSWYSEL");
    msg.flags = 43300U;
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.765999412542;
    tmp_msg_0.lon = 0.946934553957;
    tmp_msg_0.depth = 0.830000594792;
    tmp_msg_0.roll = 0.596346007497;
    tmp_msg_0.pitch = 0.50827153277;
    tmp_msg_0.yaw = 0.215354455757;
    tmp_msg_0.rcp_time = 0.161509543277;
    tmp_msg_0.sid.assign("SZBDZPTGHLRXHOBHGSNAOKUWQSCDZDEQRENXVJSYTFPKYSKZFCRASUGBTDUYFUCTEWHOCPRXOJHANDBKHJZENJWLOMEQFCWGEQYRLDVYCWOYVLFKGJPPWUFFQNBSQSVX");
    tmp_msg_0.s_type = 91U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EVQDSNXAAAYRIYXH");

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
    msg.setTimeStamp(0.172595701612);
    msg.setSource(676U);
    msg.setSourceEntity(103U);
    msg.setDestination(58912U);
    msg.setDestinationEntity(136U);
    msg.type = 48U;
    msg.op = 132U;
    msg.request_id = 24311U;
    msg.plan_id.assign("MAMGIFFFNYVZIUQTKLHENDCDXPVBPVOGCNZMDUCGQJNWXIRLRVBOBMNYOKVCAFHAXTAXOAUOPXLCMLJSZPIDCISPFEWLHZWSFEIUVHHTEUMNBRVRLKY");
    msg.flags = 59323U;
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 113055977U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BJEQFAJKVWMRYKUXXXLKUFXQZBPIVLJKDTZSGRWH");

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
    msg.setTimeStamp(0.560485102761);
    msg.setSource(17702U);
    msg.setSourceEntity(170U);
    msg.setDestination(6307U);
    msg.setDestinationEntity(50U);
    msg.state = 59U;
    msg.plan_id.assign("ACEHYAXRYKNOAHTJXCJJUZCPHPRNUZOIGLIYRFAJUKACZRQNGRCQYLSMAWSLSTHENKPNIAMWHIHBOLTDDLXBUQUPUPFMMNFRFQWYVAZDWMLZFGVKITDVRKSOVEVKBUDBHTWMYDFEPTGOJIQGRGAICJXBKWXIEIHZLYVCMFNSWUDBFIUPKQROXDSBDPBBSYNWQZNGTUXTOELLMCXKNWZOTJCSGQTEEMOPEQKEW");
    msg.plan_eta = -87335860;
    msg.plan_progress = 0.438604752899;
    msg.man_id.assign("BFGCPKRHRBCMKAZTKLFEFXEWZVEXKCXJKXODHNYPUWASJHJMHVQ");
    msg.man_type = 48251U;
    msg.man_eta = -650427495;
    msg.last_outcome = 157U;

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
    msg.setTimeStamp(0.09870372995);
    msg.setSource(43073U);
    msg.setSourceEntity(238U);
    msg.setDestination(7829U);
    msg.setDestinationEntity(165U);
    msg.state = 61U;
    msg.plan_id.assign("OONXNAOWXXPFUJFUEFHYDTXLROLEWRTFHUIRKDPRZSPQEOZEACUMWXNMZIVGR");
    msg.plan_eta = -779487261;
    msg.plan_progress = 0.750263094415;
    msg.man_id.assign("JUOJXFISGDXILWYYVGQMMGBZPIJVRSCQVNLCHLMFRSAPWSJWGEFAQIERHNMWSPUNMBBVOCOAZCYSLFDMCKAITNFNPKKQXEUDCNLUTLAOXE");
    msg.man_type = 46735U;
    msg.man_eta = -2131105562;
    msg.last_outcome = 150U;

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
    msg.setTimeStamp(0.717114757695);
    msg.setSource(2704U);
    msg.setSourceEntity(106U);
    msg.setDestination(55453U);
    msg.setDestinationEntity(194U);
    msg.state = 56U;
    msg.plan_id.assign("FKPYIRSIWFFUEKNBWZKMKATPGTGUADNMNZTXRMOBTAWZXUZWUZZNPOPCSSWARMXTAMHKRFAVIZHFDDPBSP");
    msg.plan_eta = 232084188;
    msg.plan_progress = 0.59608650895;
    msg.man_id.assign("EXBJRKXMNEPNSAVQCIUD");
    msg.man_type = 1979U;
    msg.man_eta = -1465221313;
    msg.last_outcome = 56U;

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
    msg.setTimeStamp(0.659960378845);
    msg.setSource(35324U);
    msg.setSourceEntity(84U);
    msg.setDestination(16298U);
    msg.setDestinationEntity(252U);
    msg.name.assign("MSQRWTZMZXGCIXWWCBYEESVSQBMETVNAJDZUXOFLGURHUAPAPHLPOHKQNQEWIPDGOFCKFXDBLITANGEIQLTVKRRDBTURQDQZ");
    msg.value.assign("TCBHHAKUIXEJJWDRAASWAEGNCOICTUSRODFAMTNKNYZPRYDDFQCDUITJBFNPUUZTETGHVHRWYDJFMOFQWRLGNJMKTLAPGWIDRUNHXTUZJFISFSNABZYSV");
    msg.type = 8U;
    msg.access = 70U;

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
    msg.setTimeStamp(0.874547609632);
    msg.setSource(48012U);
    msg.setSourceEntity(142U);
    msg.setDestination(35504U);
    msg.setDestinationEntity(9U);
    msg.name.assign("LQAVDXCJXIJVFCEGAQOBJLSUWYCHTNHXBJDFPKIUWGLMZVKRZICDXHZBHMWJZYSEGRNSNHJGVTCFDBYUUWGQVZMKVVWSZPKZQEDTKKAEOTSXBDZMROPTCXWFHUJMNAOARTRULAKDXURAGQLVRKCPQWNMIEAIPLGEMDBHFMVACTFBLUWYLGQYBJEYSYBFTFRXVQMWEOCBYNLIYNEINNQSCIWPSDNRITXZOSRHPYPJJKGOFPEZHIXLPUOKFU");
    msg.value.assign("VQFCGANOMWEOGHGFYFUYBERQXWBJRZPCEPOLPWMJXZORUGQBSFIRZAYNLWKCYIOVBFNIKOHDTRZTUGWJPJXKI");
    msg.type = 212U;
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
    msg.setTimeStamp(0.524330331591);
    msg.setSource(55662U);
    msg.setSourceEntity(20U);
    msg.setDestination(24329U);
    msg.setDestinationEntity(140U);
    msg.name.assign("QNNUPVJCVZFEZRQGTVUEJDAGFGBOCQHYALKIXZFSBGHDTQZDDOLHDWTRQJAARYWDHWLSRIQHIUUPXXOBOXVMYJAIMFIWHRCWNJIVMCLUONTCBATXJDYEPRJKAYVPVHROXTZOQCNCPZFRGUPXIAVMHSMDSEBVHHILDLMMBEWPFPX");
    msg.value.assign("XQLYQXZDSSRIMMFQCXUBUZSWYKODEJMPTOBHFLKCQGKOYQJKGWXSTMVACXMZVMERDAWHIZJPPOSBZBZRSDGCKRIVVHDJUGEALNIWSFKDULJNUUWGKTPAWUAWBGSTHFCEKGRYHBIGEOCSAZNDHHYNWNCIFQJMQBKIOBZFMRMSCQOPOHVIZPDVWTFYTGHLJTXEUI");
    msg.type = 38U;
    msg.access = 58U;

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
    msg.setTimeStamp(0.787099422546);
    msg.setSource(37832U);
    msg.setSourceEntity(120U);
    msg.setDestination(25494U);
    msg.setDestinationEntity(0U);
    msg.cmd = 5U;
    msg.op = 208U;
    msg.plan_id.assign("FIGDRYJRGVOOSNZLBYJSYEMBUEVJRLGGTMFCEUCAKPFLXHQXWRJOWLOYDKQOAVHKWKINZNAHPWOVEABJDRGWBNJCKWMXVLHDUZOGMEVQMDUBSADAGUVCXWLTPVLIICIINCQNSNQZRFYLTOWMICNWFBXDFP");
    msg.params.assign("MPSSNPJEAUEIBTAPXTCDIGXMRVOYQQSXRVSWZQZZWRTULODQXNLZMHCMZRTOJCDCJQDKKUEUEUBHHLFJWGZZVBL");

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
    msg.setTimeStamp(0.7482058174);
    msg.setSource(41904U);
    msg.setSourceEntity(22U);
    msg.setDestination(65414U);
    msg.setDestinationEntity(42U);
    msg.cmd = 41U;
    msg.op = 169U;
    msg.plan_id.assign("TOCTYYZPZFCGVXWPCGBISXRQJJLDOMKNQZTBVESUDKBQVPVEDUSPRMUMARPWALYYCGTGBJHYRAXEYVBDLFTLGAYPRJRUGHF");
    msg.params.assign("CZAIQURGIDYJONZLZANPEQVTIYDRKPULABJIZFYEYPSZZLNOPEINFRTOIEQSZNRSWMCWRFSDDLJVURERMGGBMKEWOZOMJPUSOUXAOXCUEAMWYSHIBPZMHGWQYAYGBJ");

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
    msg.setTimeStamp(0.34337010071);
    msg.setSource(3260U);
    msg.setSourceEntity(5U);
    msg.setDestination(9046U);
    msg.setDestinationEntity(75U);
    msg.cmd = 109U;
    msg.op = 178U;
    msg.plan_id.assign("ZMZGCRNCGXNRKWHBEWSFEDQMTAJYEFHDZDIAQLDLNZ");
    msg.params.assign("GILYTVTPWVJQMPCWSNHMSWECTXWRHVRZBLPRZOYCUPCAKFLCSFCXDFDTHEEGETAQKYYXMIUOLKAXYTWVDVNSRQPUZPUWAEYUBUPEBIBLHJJQWGZVWNQNYNSDVLRCJR");

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
    msg.setTimeStamp(0.530912713378);
    msg.setSource(1568U);
    msg.setSourceEntity(78U);
    msg.setDestination(25631U);
    msg.setDestinationEntity(36U);
    msg.group_name.assign("QJHYDRNPUWFGBLSMVLLJXUWBPZFTHMEFDUOXYZCJKTAZHCPWBCTKECMOQRNISWVJZXXFHJNZNHDNXBTMYSRERAXOCGEWVNRROMHPUSYLGEIKMJDQLCLHEOIKVBWUUTWQOGQKUVBZSPLPGYAALVCSTDTKPZTCBPISJJAEYXYOSIQRKXXVMVGYRVGYWIHFDOEPNQINHZNQZLRUPSDXBRTFTCGFJAEAQBCOGAGMHEWLW");
    msg.op = 90U;
    msg.lat = 0.698546589738;
    msg.lon = 0.415072465627;
    msg.height = 0.390346052593;
    msg.x = 0.155127031676;
    msg.y = 0.0886186170586;
    msg.z = 0.114522304473;
    msg.phi = 0.649321302295;
    msg.theta = 0.166905262896;
    msg.psi = 0.705021147926;
    msg.vx = 0.0582630957237;
    msg.vy = 0.0477273025079;
    msg.vz = 0.362522626245;
    msg.p = 0.755053623781;
    msg.q = 0.500394831411;
    msg.r = 0.136638708047;
    msg.svx = 0.606390793102;
    msg.svy = 0.779704372749;
    msg.svz = 0.256956114563;

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
    msg.setTimeStamp(0.441373293661);
    msg.setSource(39959U);
    msg.setSourceEntity(110U);
    msg.setDestination(38213U);
    msg.setDestinationEntity(108U);
    msg.group_name.assign("GATVWDXYPLJWARULBAPQUTLVFNKSQQSNHEOKBMJPDMNZBYJCSDSRCUDWFCTRBLEABWVGWKYPBQAKPHFGMIZTXLKHFFNSHRXZUEPKVAAXJKMGWSFRGPYHMZNZPRYUZUUMONFFBXTBVGSZVOWARKAEOJZDHNFEVKQLMXHXTGTBZEYVHCWLSVLFPENXCNGHDTMQIQORYSNYI");
    msg.op = 34U;
    msg.lat = 0.69239234385;
    msg.lon = 0.181243176298;
    msg.height = 0.844308457099;
    msg.x = 0.841757079036;
    msg.y = 0.230517219455;
    msg.z = 0.929912662761;
    msg.phi = 0.970465090301;
    msg.theta = 0.409565027071;
    msg.psi = 0.582010857462;
    msg.vx = 0.138460666774;
    msg.vy = 0.988452451654;
    msg.vz = 0.772767613238;
    msg.p = 0.107314580578;
    msg.q = 0.37204229496;
    msg.r = 0.789403111296;
    msg.svx = 0.385706297924;
    msg.svy = 0.923005871099;
    msg.svz = 0.705380377545;

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
    msg.setTimeStamp(0.107969263283);
    msg.setSource(27181U);
    msg.setSourceEntity(208U);
    msg.setDestination(47343U);
    msg.setDestinationEntity(162U);
    msg.group_name.assign("MDAVJIGCRNKSOPSABHKVQZNBGAWGYGVDGKXHLCVNWRFFETJFUEXQRBKTLIAIZXSSECRMEYABVSOMUHYI");
    msg.op = 216U;
    msg.lat = 0.71786197877;
    msg.lon = 0.838772584144;
    msg.height = 0.497021423405;
    msg.x = 0.46198487263;
    msg.y = 0.419608062844;
    msg.z = 0.380096023754;
    msg.phi = 0.0661029241179;
    msg.theta = 0.159657020097;
    msg.psi = 0.607742782868;
    msg.vx = 0.278867244503;
    msg.vy = 0.237819198281;
    msg.vz = 0.751906530981;
    msg.p = 0.264824019842;
    msg.q = 0.457818198556;
    msg.r = 0.477671004275;
    msg.svx = 0.451433832258;
    msg.svy = 0.277872948253;
    msg.svz = 0.169604121326;

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
    msg.setTimeStamp(0.603964393861);
    msg.setSource(19113U);
    msg.setSourceEntity(243U);
    msg.setDestination(46797U);
    msg.setDestinationEntity(105U);
    msg.plan_id.assign("BSUMTODEAZBRMKYOSWHLGPKZTQHFXTSETMJSFMIBZSVCLTISUCPYZHBVHVKFVTJIAPOQZNHYJQDYHQOFZEAPEQVUNARGUDDNQIGNCWXWPGSKXMEQWOALTAICPIZNYYLRFFMTXNTAVRHYRIVSCEYHGJNOPLABOUFYKDREDZJWBVEKFZFURUYLWLPODIJGGPGAWQQNMNDXH");
    msg.type = 131U;
    msg.properties = 142U;
    msg.durations.assign("RWCQTSMOUOXIALXUBIAADNXRXZXGBQVGDCNFZLSTOKQQGDCJWJCMHTOPYFAZI");
    msg.distances.assign("CZOXIMAIWKPRLINHWMKJNMEHFDQPLFCSQVRRWYQDBMBHRLXGJIBHYZDFYMCIDTKTZPYUXWENJZJHSTAYNYHWNXUVDWQAFSQVCAATWIYXZKMJUCPOEFAOGPUQRSEEXEFKUDGQVJGN");
    msg.actions.assign("YNCNWKHFZVFLTSZJSGZOGOECJBCPATZZPCPPQQULWVYCUHEGMRVEADBUBM");
    msg.fuel.assign("BKKWMJRQBPMBKKIPOMTIRIUQLVHMGGPDERCRWHODVUTZOAHTXSGQLATHUYSYNDOLJCFUBRVTABRVQFNEYEOIKRLOWSGUQJJEYSIPBLNZCDMDXNZTHPCVIPEOYYNYSNCLGCJIFTPTABJVKJWUUKNPIXMTFAWLURSSLKVOBLDHCXEXMCEJHWJBIWWRMZNIGCAYUQEKZYWVRDXFFXXUVNPKTSFXGOQFFGAWGQLPZHAMZ");

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
    msg.setTimeStamp(0.455267927332);
    msg.setSource(54661U);
    msg.setSourceEntity(125U);
    msg.setDestination(59329U);
    msg.setDestinationEntity(114U);
    msg.plan_id.assign("UZZWTDIJGMEILUCLYIXLIAAKSLXKMWPTZRIZFOP");
    msg.type = 146U;
    msg.properties = 232U;
    msg.durations.assign("IYVHGUDWOAJJJPZSLZKLUAJQRGCQFTKNSEPBILIXKUSKLCFQJFSWUWNMXJIFAAAAYUBVUAFPXGPKMHYNQIEYMNWGNSEDODZRANTGNYHBQAFZGOORQPZHBJCDXVEFFOSPKKLBMYLKWM");
    msg.distances.assign("CSZEZYIOIKU");
    msg.actions.assign("VIPYEWYWZWKGXYCNMVFWERSPHHKVRMGFHXKJZDPMSSRZLJNGIXNVTUSVJWDLFAAHJHIHLAPJRMGYCFJLTJQDZWZOTBZBXKFGQZBUDHTDUDCFFECBSXOULEQRBKKTNXPJYTWUALAQATNXJMZNIZYGPCBSYRNSBQHEEIMEZXFWKOOIAQACPBDTDQILGGLOBIVIMQKASYIPVDEBUAMYHSNSMOOFRMWHCRELO");
    msg.fuel.assign("DHTVONSGCNBYAJKWOKIANJCKPTKC");

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
    msg.setTimeStamp(0.402223743318);
    msg.setSource(33448U);
    msg.setSourceEntity(63U);
    msg.setDestination(1890U);
    msg.setDestinationEntity(188U);
    msg.plan_id.assign("EMQLBKKFMOHGSZKTSCJKXYPOWTCFGAXNRFFPAVMZJSLCPYTIGYUJBNIDWNLQQTFUHTJAXJUFYKHGOKZEOIAD");
    msg.type = 240U;
    msg.properties = 224U;
    msg.durations.assign("YPBAIGMSDROQISARDISWHYFNHJLRYISLHGVVGWFZBURAUBUVRPEVMOGJWCUWVKXDQXURTOJTOSJHESBDKWDCEPEYRHGHIXSMKPEOJCNNPBQEZXJJEHSDFNCQTFWOVZLULZFFOLFNPPULAJJGNXKQXIYXBWMMBUAZKXTPZCLEKLTCAHGYRNVQOWIVFCKG");
    msg.distances.assign("IRZGSJPLVLRQW");
    msg.actions.assign("IUOSJMYPSYJABOLSVZHKL");
    msg.fuel.assign("WQQAKAPJSICFDULPFZSEMSUPOTQJVRTFOFMVYRHLIOZLUNOGRJUQXOEJGBMKLTKQGCEYVQNHXGXBHBNNTVEPNIQQVDUGRWCYWTEJIHVYSUUMWGBLKEVRIGUBNXSKBQSFADYDLMRRMLIEAWOATSLJXJFHZOAFIW");

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
    msg.setTimeStamp(0.818232967323);
    msg.setSource(42097U);
    msg.setSourceEntity(196U);
    msg.setDestination(3721U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.56709885125;
    msg.lon = 0.862419354393;
    msg.depth = 0.572637302695;
    msg.roll = 0.296350907181;
    msg.pitch = 0.596815021636;
    msg.yaw = 0.479458810284;
    msg.rcp_time = 0.787798832518;
    msg.sid.assign("GOTLKCKTLMKJGTBJNGJQYJDHSWKJEWBQETNIOVUDEGROKSWVT");
    msg.s_type = 29U;

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
    msg.setTimeStamp(0.976132964422);
    msg.setSource(55578U);
    msg.setSourceEntity(157U);
    msg.setDestination(50279U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.581098094136;
    msg.lon = 0.667471923025;
    msg.depth = 0.115803711918;
    msg.roll = 0.901371387408;
    msg.pitch = 0.389054613817;
    msg.yaw = 0.607492943706;
    msg.rcp_time = 0.129729356958;
    msg.sid.assign("LMBQCMJYDYIMVAVHBQFVEGGNTCAFJNBZTPXDSOYVKPFGQKLSWIQCVGFYNHMYZJETZTBPJLFRBAIUOPCBEHASKVIWWEORRRXARUWJIBNMCAKUFGLHSYN");
    msg.s_type = 141U;

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
    msg.setTimeStamp(0.682394545446);
    msg.setSource(33431U);
    msg.setSourceEntity(71U);
    msg.setDestination(44255U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.93298960212;
    msg.lon = 0.0759393624917;
    msg.depth = 0.475373956691;
    msg.roll = 0.174932821685;
    msg.pitch = 0.220976959743;
    msg.yaw = 0.748227521366;
    msg.rcp_time = 0.217822558263;
    msg.sid.assign("BECYZRQSQBLPOQJAHXKTUFPJFNDGHWWRAYPBDXTUXPUMEWYBMVSTQZAGMBBVFZVNYCGNOXZHMDILZGOFGABOSSNVJMWICRSIMLICRVTTUMYIEZJJKGHMPJOYRCJTLWTNPOWYIPHDLHTJQWKSGJDYCGQSTUQUVAXQHUOQRFGLSDWFMYXWBLYIWEPIDFKPXCENSEFZXQRAASOEOKGKFE");
    msg.s_type = 123U;

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
    msg.setTimeStamp(0.213601943907);
    msg.setSource(52190U);
    msg.setSourceEntity(209U);
    msg.setDestination(51632U);
    msg.setDestinationEntity(242U);
    msg.id.assign("HOIWBPTXOY");
    msg.sensor_class.assign("ZYYJUMJQXMRTQTOAXYEEASUZKCHOAYHKPNZFPTDHBCHDZNBOFXIFSNFIWEQGLWVDOYPOELKCMNJGLKTZUIAWHCIQWQYANRNQEVZYRVBLJLNSVVFIVXYCSNGWSGOTASIDLOMRMMETCR");
    msg.lat = 0.394799366155;
    msg.lon = 0.896427391041;
    msg.alt = 0.871795874934;
    msg.heading = 0.232238971611;
    msg.data.assign("NBUJPWOWDPFTCAQDQBAJKZTQUYEKFTJIHWSVOEJVVLCCCKNXJL");

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
    msg.setTimeStamp(0.497607540188);
    msg.setSource(34136U);
    msg.setSourceEntity(63U);
    msg.setDestination(21706U);
    msg.setDestinationEntity(12U);
    msg.id.assign("NHRSWIZULYQYQVFXHUARMANKNRMCIWFFRCCBRPWKZTHTDOSRNEQGAQA");
    msg.sensor_class.assign("QNHFGCOCKQXJZDPJTZWZRDMMHJSUNURXWWGGZMFXHZUEBCRABFRXJOOEEZBBYNVTEHFLHYBDOPCUNGTBUJVTIFGXXKVLULOKEPUYMYVPOAIVONBAAOOGCDJQPNTEDDIHZIPXQVXWKJIFAKQVTXWCSSNSLYBAFQPMASZMQEROSLKQNNEKGBKIZD");
    msg.lat = 0.10976769459;
    msg.lon = 0.236016007221;
    msg.alt = 0.902863531179;
    msg.heading = 0.226043085328;
    msg.data.assign("OPYMMXJZPT");

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
    msg.setTimeStamp(0.537262306199);
    msg.setSource(36494U);
    msg.setSourceEntity(64U);
    msg.setDestination(6502U);
    msg.setDestinationEntity(46U);
    msg.id.assign("OASGEQWTGHJCUR");
    msg.sensor_class.assign("WPRRVVZCMFMWBYAWFYGTSXWBRGGZN");
    msg.lat = 0.860260388085;
    msg.lon = 0.376683087515;
    msg.alt = 0.885030211208;
    msg.heading = 0.96200085335;
    msg.data.assign("YSSEVOAEHMZWFOFCPRLDQAXAQTVXZDYBYTNDGCZPXWMQJIKHOZEKOMVPCWIHHGPJCJFGCQLLXBLJLHBISBWXYNFKZTMEZUKRNNQYQCSXYCLNDWSOELYFBGPKVJBWKMHSMNZQDJIDUJQUPAHCMRJVVKHRGOTQTXZYYFORABOUXGRVCOGELENUJPNWS");

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
    msg.setTimeStamp(0.916779770535);
    msg.setSource(23864U);
    msg.setSourceEntity(57U);
    msg.setDestination(11086U);
    msg.setDestinationEntity(29U);
    msg.msg_type.assign("PWINIXYJPYBMHVPFDBCNLOZMDGOIJSMPDFQIPKITFEPTHUADCYIAKFSTELCEPDBUVSQCNEBLINNSECWYLWLYVOAXRFZXPKXJYVXHUJVUJNUWNKRTARLAKUOGDFEAPFSUZUXKKCYSGIQMRYVATISWHROELTYGDVZKFSZHEZDRGGPFLJCMGAOCJQBROBTGAHOMHBADZQBOSVXWITJEQRBKLHN");
    msg.sensor_class.assign("KTHPMHPKTONUBDJGVOXYNUYFYQBJGDAIICRMDWWAOZUFEGQBXMWPPSFKOVCBNLSWJHJAFKLRZTAXLLZQSQDDCDFUMGNRSRBSPVBIDCXDHAEYOSVVYFOIJMGKSQJJVJLIVMKEHWVXHQOFURCAVZIBUOPXZMTLSSAYEGKPLRDQMFKPJZTGHQPOYWNAGPIK");
    msg.mmsi.assign("MTZDBSDEPZJIEHQGNTTZMKHXFOLHKKNNPDHTRAIYWATCQLZRGMTCQBFJYMCATAWROJWAJEIYMDDIAQDIWGPVFPJRXMLEATEFRCRUXJSEBIWLCGXDIINSXXSQDWRFFHYNLPSZKUOQGVQCLNPLGG");
    msg.callsign.assign("CPESDXSALRDUPPSTFFEVCHWLUAVGOLFJMUJCZKNOTKXVRWRLKLLXGFTXHPAMPETGHBVFXJQIIKRUVYDZXIMDANEYOUZKANMWSOSBFSYUFTRIVUWCGNLAQEOBVQTUIPSHMOLADGQKWKGBV");
    msg.name.assign("EUVXHOTYLQTDOEYNLCASBAQLJMLKZJJCIZYFKRLJISMNQGYZVAU");
    msg.nav_status = 231U;
    msg.type_and_cargo = 142U;
    msg.lat = 0.126712076466;
    msg.lon = 0.194125914531;
    msg.course = 0.685874486014;
    msg.speed = 0.79346704176;
    msg.a = 0.304959808337;
    msg.b = 0.650164710468;
    msg.c = 0.539012605917;
    msg.d = 0.764855695045;
    msg.draught = 0.519551704134;

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
    msg.setTimeStamp(0.0539890483158);
    msg.setSource(15976U);
    msg.setSourceEntity(228U);
    msg.setDestination(22736U);
    msg.setDestinationEntity(190U);
    msg.msg_type.assign("NPSKFAOIWHGURAISUVTJZHBRZLLBWVTRNWXAKIWQ");
    msg.sensor_class.assign("GKCUVWFHKWNUATJKZMTJSEGYWGXZSJGIOMVDKZNFXMQSPNBICXRHEXIUJTEVWNJAYJOBWEYIFSNZBDCLGGTRYWFELIATQDFFOXZBHKQLAMEGCJGOZLVBWYNOSCNSXDDUQIKOMKJPPDQBHIREPDDTXDROPHPNJCWRTLLZLQXIE");
    msg.mmsi.assign("JDLQKTPWAXVPNDDKXWXMWTSCAXGUFCBIRHVTLGOJNRSLYCAZGNICOQDJFWVYVDALUJRLEWTFZUYOXWKHBUUEOXIYQQARKLHJTDEVRVVBHWTRFZIYEZPCHGCUSTVSZGPBUKKFGFCHNSTWEYKFMQNMBJPQMPQMIMBQZBONEALKXKPYWDTVITBHUUIARBYEXEEXDZAAMSODGMQUGLBAJJECVNHOD");
    msg.callsign.assign("JRMKCQUVNPRMTNPMBVUKAOCNKKZETLDTCEFDAPXNZOOGZBJMPCHGNUYRVTABVLRSXWFUYFYUWODQTLWTXITROSWHXH");
    msg.name.assign("EQWSZSGIVRHFBZHCXGENVBLXWJUIEZSKUPOYLIVXAKNTOKYNCWYPPEGIAFQZCVYQOMTPWGUJUGZMFTSOHAQTJUUJDFETKZOLXSKDNAXMITQELEHJRUWXPORVMRULZPQCBTIPIOSWFMLYFFZMUXBQVLBNGMJKZPZWIIGRKFMDALJNQTAVCDGSYEJYXHPDWDEOVT");
    msg.nav_status = 188U;
    msg.type_and_cargo = 154U;
    msg.lat = 0.890497094168;
    msg.lon = 0.455470872627;
    msg.course = 0.190070525104;
    msg.speed = 0.252929973629;
    msg.a = 0.459377306755;
    msg.b = 0.0988488048339;
    msg.c = 0.805251305267;
    msg.d = 0.33514599005;
    msg.draught = 0.285203997532;

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
    msg.setTimeStamp(0.141693354856);
    msg.setSource(37618U);
    msg.setSourceEntity(219U);
    msg.setDestination(11782U);
    msg.setDestinationEntity(125U);
    msg.msg_type.assign("AXDJMIMJIEKGKLIZQSGCOHOCFEITOGTCBQXJURZXCWAIBIQKGJQRYGCLPXHAUUMSACYANRQVJXIUANPORDSESJOXXZHRBIZUQQLHVWGRFVDLPENDXKFNSFWNPWDTNTFYSROEHIYQEAGRMGTONZBCDCMKFQGYVTVVJSDBIPNYC");
    msg.sensor_class.assign("VVNJOQSEDRVWAHPZKCPMYHNKEXNCTKVKJTAXQOAAIOUZATYZJHYWLAMVXDJUQRXIEQIBBMGKDPMIORNQSZRGFUEFPNOVGLSBZMGNYFHKYWESWRDDQFLWUYCGCCFZBZTHHQLRDMEQCQHASGJLPWZMUREXEVTEFWCKLGTFVZULRNXJBWGBAHLPRIICDPXBWKYAPMR");
    msg.mmsi.assign("WMUROMYTZMRAERPBLKGYMINRAZCTHIQPBSPASAXTSWHIVUTIFJCFNVLAGZEDWTRYFHHPOWCXXKZHJQHIAFVOGQBNFBLCQNJCEKZRRFVJUBSOMYTLLKDEZOQMGHJFGWMUGBDVTWHDBTBOUG");
    msg.callsign.assign("QMUMZXSTXRPOXNDQZTDT");
    msg.name.assign("SNASMJRIAFMASLHHTFEKTKIGHZHEDORRGDNVLQTYAOWBIOEMUVASBCVQWJHLFUTOIYAFXZXOQGZYSCWNXZWEXGEUHBFHGMPLQEXSXWDUMBWRAQFHXPMCABCYJQUJNLAJLVQGOGNGFKOISIJYFINHPUTJVNWRTJPSLSSWCRDYMPZQKODEYQMKRUKEPOBZBVCKXTXTDRIDJ");
    msg.nav_status = 163U;
    msg.type_and_cargo = 166U;
    msg.lat = 0.927828303635;
    msg.lon = 0.770063264552;
    msg.course = 0.502435410587;
    msg.speed = 0.769074262605;
    msg.a = 0.648436267877;
    msg.b = 0.221557830123;
    msg.c = 0.757312795613;
    msg.d = 0.896941399524;
    msg.draught = 0.4395523795;

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
    msg.setTimeStamp(0.955045867703);
    msg.setSource(9340U);
    msg.setSourceEntity(220U);
    msg.setDestination(35726U);
    msg.setDestinationEntity(109U);
    msg.id.assign("VUOTNTKHHJNUBXSOGFZPUIHUNLHVNPVRWRFMKHUKBSRDPJGNQVXIOSDHLNWKURWQFMWWQAGFKNLMTFQXPKXWIDGYPHSZCTTAYDZNVLLRSIDEZBQBGSNCRHVDYMBFOPGEMBEOJIPYUHBMYVWWOODPZPDZEBZRAJRM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YFTVAKZUXFPPHVVLQASWTANQLBKATQUSAHPPKQDVIKWCYXKEXTBJTFZDEKANLJJBHWWGELMOHJIGBKDOWTGRRXPQFVAGKJIYXCGSYVRLNQCTCDBYUROEICFCJINXIVNKHZMUPJBTBZOIFPVULZEDGQLAYYOOSWHLIFHLIGKULREWOSQFGWUCZPWRUVRIGEPXNAOGNQUYZJJMMSSDTREOCR");
    tmp_msg_0.feature_type = 96U;
    tmp_msg_0.rgb_red = 58U;
    tmp_msg_0.rgb_green = 145U;
    tmp_msg_0.rgb_blue = 106U;
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
    msg.setTimeStamp(0.601061209625);
    msg.setSource(1560U);
    msg.setSourceEntity(145U);
    msg.setDestination(54200U);
    msg.setDestinationEntity(183U);
    msg.id.assign("NQSBTIDCDBHKVAOTDRWVSSBLJDLUKOJDCLWRZQUERCTIKZTXVXOPOLMVNFVARLZVIGEMYXGTUEZPCCHUPBRKWUFMNYKWAQVOZXSQTSYLBFUNZANVYKPBIOJHGUNSAPRIEMBPU");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("KMHVSPFJEAHCQOZQKVOEUBANLROEWQYAUPHBKLYNUYFFYQLLGQXKGEDEWKJZERGXHSCNQFGRICFGKIYDGFUNKMSYCPLNUBPBEPITNZEDTFPWZSIOBHXMYWRGTVRXDZTSIYHZOOSBWXAEJRRMAWPZJQJXSJCVMGGPTQLDUBZWBJGNAICATONPUYKAUBTDVOTFVMDSLWTUIQHTDWCPHCMAM");
    tmp_msg_0.feature_type = 81U;
    tmp_msg_0.rgb_red = 85U;
    tmp_msg_0.rgb_green = 245U;
    tmp_msg_0.rgb_blue = 155U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.226155948237;
    tmp_tmp_msg_0_0.lon = 0.0641186887702;
    tmp_tmp_msg_0_0.alt = 0.626618414836;
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
    msg.setTimeStamp(0.165733626326);
    msg.setSource(30922U);
    msg.setSourceEntity(253U);
    msg.setDestination(42671U);
    msg.setDestinationEntity(234U);
    msg.id.assign("OJBMIAVANFWBRHVQEASOGZWKPBOXMMEBGGKDTHFKIQXLEBDMMHRSAANYSZKOJILVLJDDUWTRQLWFSZGKVUYHZRTZVDABRDGJSOCMRBHQTKWEC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MNTEZSROMMKYAKMZHMUTSDJXXDARCVFGJIEGSBGCAFULFYPYZHXZOHPEHXXLZINAERVWTFZVDCTGBLQAWRLYCDDQYWNEVGHOGOCSTKTLWMXNRBKVQMDPBWIEKWJFRFIFNUBTNAEESHVOQFKQKJYCNAKLHYAXPVWHKJUMRGDVFBSYRGIJVQFIJJMTCPVQSWYWHUXUPIPMCIPBZSZUZGONDDAIQELLUTLLHAQJRCOTOZONWBUCQY");
    tmp_msg_0.feature_type = 244U;
    tmp_msg_0.rgb_red = 129U;
    tmp_msg_0.rgb_green = 160U;
    tmp_msg_0.rgb_blue = 61U;
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
    msg.setTimeStamp(0.745312732686);
    msg.setSource(39340U);
    msg.setSourceEntity(122U);
    msg.setDestination(64953U);
    msg.setDestinationEntity(196U);
    msg.id.assign("SVQIZUALFIEQYOKBJXMDZIBTFOEAPDKNDQDROBTNSJNE");
    msg.feature_type = 36U;
    msg.rgb_red = 114U;
    msg.rgb_green = 211U;
    msg.rgb_blue = 193U;

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
    msg.setTimeStamp(0.568789615184);
    msg.setSource(6340U);
    msg.setSourceEntity(105U);
    msg.setDestination(5602U);
    msg.setDestinationEntity(111U);
    msg.id.assign("AAZJFNSPEEGSFDVSBJNZFLIMVHFWKTDJYYLPQRJMUSOCMBIIYRUQEXREPPVARXJOMSKORINLUDAEWHXCJCLDKZTZIGFLIKQ");
    msg.feature_type = 148U;
    msg.rgb_red = 218U;
    msg.rgb_green = 147U;
    msg.rgb_blue = 68U;

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
    msg.setTimeStamp(0.812259853129);
    msg.setSource(25778U);
    msg.setSourceEntity(142U);
    msg.setDestination(13079U);
    msg.setDestinationEntity(237U);
    msg.id.assign("XXMJGRUEKJCESIULFGHNOPMCQXCLJVPUBQVDGLJQZTINVILWDPDBLRYFDNFHJZYAPBEHXLODWBKAUNEEJHXQGNLEQAZKTKOVRXTDCAWBNUFMYGVPMMGZTFVYTVUVCTOAURHMPKJKSFBQSRVIWYNBHTOYPRIAJNZEZDSKESSZBSCXYXMCIGVRSQHS");
    msg.feature_type = 235U;
    msg.rgb_red = 171U;
    msg.rgb_green = 60U;
    msg.rgb_blue = 2U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.133525319236;
    tmp_msg_0.lon = 0.597117713414;
    tmp_msg_0.alt = 0.101634550678;
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
    msg.setTimeStamp(0.908862960801);
    msg.setSource(41188U);
    msg.setSourceEntity(129U);
    msg.setDestination(5961U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.458187625618;
    msg.lon = 0.977553468136;
    msg.alt = 0.70229729141;

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
    msg.setTimeStamp(0.82804240725);
    msg.setSource(54207U);
    msg.setSourceEntity(191U);
    msg.setDestination(39367U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.883557333304;
    msg.lon = 0.77678084085;
    msg.alt = 0.428456506226;

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
    msg.setTimeStamp(0.6426255551);
    msg.setSource(18060U);
    msg.setSourceEntity(179U);
    msg.setDestination(1169U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.465568868919;
    msg.lon = 0.736650272468;
    msg.alt = 0.34404695784;

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
    msg.setTimeStamp(0.21333558833);
    msg.setSource(31499U);
    msg.setSourceEntity(37U);
    msg.setDestination(40981U);
    msg.setDestinationEntity(201U);
    msg.type = 185U;
    msg.id.assign("PRMHJXSTMFQXWJHZQKGLYGULFNYSQNRATWFQATKEJEFDXCSKTTMJTJKRUIIUM");
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 250U;
    tmp_msg_0.goal_id.assign("EHAIZBPDUNFLSQGLDSMDYPUYTOYMFZXWUKXGKDHZGFOWLZGBXXWQGOIRENMABACXEY");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("TTYUMQIFVOSSSZMLQUJPZCCWESQVAJDSFTJAUERADCOUCLHUJ");
    tmp_tmp_msg_0_0.predicate.assign("FQGKIYHZEPYURQNBPQGSIOMVDNRAUCAMEFCERFNLMZVSTAJBJMRJLKRAKIASTQLOJYTBHPVPODSQSHQFNNGWWFIHGYWREBJNUZHLSIWRSGGYDITMVUMPYCOJZXKDTFYUEZDKXDMBZMXKIQAXXZBEDMRRBBJUXNGGWYEOYWFTYH");
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.233261486394);
    msg.setSource(40572U);
    msg.setSourceEntity(60U);
    msg.setDestination(51158U);
    msg.setDestinationEntity(205U);
    msg.type = 131U;
    msg.id.assign("DQRATYXGNRAJNPJXYIPSWHWNCVTMMKMOKBAUBDHKHGVVZCZIXMFQLLHCUJFVDQMBNZUFAGZNMGHNLWOPNILJBWLUQDOPDFVOZYTIWBXUSCNKRSZTXJTVRCSDTRGIJMGFXYEHRYCEWLULYYFAZZ");
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BWPYAQJLTZIYROGOBNMOJHMTUUAVBWTFZXGFGSFSFCGUBIGIYIQDZYEXOHEFJTHIBNUIIEXTBPDMQADSOKTZCKVVWMFXRHJWXFMZJQSQVORVZRIRXKMCMLMWUUGCNJRSXPNZJHNLDBEKCTGOHENLRSUYYUAEQPADNWDSJE");
    tmp_msg_0.description.assign("TLTRHNXJCMOFZJAOKJPHTCDYPJPDTFHAPVDSLYVAXULBFZGHJFRJHABPLUIKGRWFOJMSPNDPNTYKCMKSWXQSYHBYLDICNWESLDFZTMIZYVSYVIXAOGACWBWXBPDCOUTSZUGJRNGHFBQVRFATRKYUUXZJVHDQJQPVDNREQWLEWUMLYFZUGQSWMNGQKRTXZO");
    tmp_msg_0.vnamespace.assign("XXXNELEINLOJKRBHXFTZWFBFYVYVSQFDCNKOKFRVXCAIYKYDBAUEDWUMIINGXCADVWERIVVQGYMTVZCGJ");
    tmp_msg_0.start_man_id.assign("DGUPKBVTPTOAKHWEUEDFVTVOHQBEWFGIARFGMEPQJXTMZXGAIKVCBSSLDAMURYSEGZXJLCKIYCNSZXBEAXLYJIYVHLKRCYJVTRENDOMVUWDOJBFDCOZYGVNKZNLQQXWLKWWFKPRLAOIYTCHWWMBNSHKMIDGUHZERICDHOPVJLFPMFYBNKRDZAWVZSBPNHIJCMCULXCTIAGJAHDUUTSSSPIUJQQBFGMTREFORFP");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("QXGMFWVXWCVKZACZJPTOICYAHCOWKDXTMLNJMFRMTBLLLGSAAGQQJLUOBRYCYSSRRFGPWYNUTJQWFQVPBHMPUWRZOJJJUIXAXZRULI");
    IMC::YoYo tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 51331U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.363050879357;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.338380758506;
    tmp_tmp_tmp_msg_0_0_0.z = 0.785753869117;
    tmp_tmp_tmp_msg_0_0_0.z_units = 36U;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.204833029437;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.0995411224557;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.551253189468;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 249U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("FXAPODUAERFSCPPDSGVBCHUNHVNXIDFMFNVOZJEUYOCBDBLSKYISAMAEJOTGGDRVOFRQSSTPFPUWAYAXQTAUGCRUTGYOPSLKZGHPZTZZGUOGWZFHHJQIJQYNHQRNLMMMEQDZNBKVSZXFSWYWLWQJZDETR");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::AirSaturation tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.238715043022;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("VMUQJPYORLWCSVZHKXVADCVQSFMRGSBQAPAWIWQOMYUHOFINBTQLZCELTQGLNPDAUFIKOFBNFETNCDMACSQKZFZIRCTWHAOBJA");
    tmp_tmp_msg_0_1.dest_man.assign("KVLKNTEUHYKPWVAEIOPACEFPAUFAPCSCZRHGOYXQMVFXZPZLGDZLWHPJANODCYSJVKOBGKASSGTNUPBFNJTVZSWIEIWXAUFCSFDVWLFDRRTQIZKXFCQZRADAUORVNEMGOHQRYUSIXXEYUBBECQQQZXGLOMEBJRJDPHOJWUBRULDTYFMPHWIIQYOESWDUNCHVDHMYMQHDJHXAPJNBSMXWIZ");
    tmp_tmp_msg_0_1.conditions.assign("UUAEDLLDXQNNQOUYUZMWNTVPBYLROBIGOAURXRPCPXCSHJIOHDDSHLUSRMWXCCSIKTKCFSOJWVHGPPNULZYVLJFVKICFBZSGVIQJIXKHABUOLAWKCPCNWEAGTHFVDJZYJHLPWMQOEFVCGHGMWKTBLANZGPDFFIJNYEWMYHQBZMEQWTUVZUAXQZBNADXBTOOAQFZIXRNOEREJKPYETLGTXBAYVVRC");
    IMC::CloseSession tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.sessid = 832302463U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::PeekManeuver tmp_tmp_msg_0_2;
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.maneuver_id.assign("MQRWRESJMHBVXDMJVLAVNGZJSQEXHBSUSOLWZXPCQVMFYCXCHOIFZTGLMZWVSXDYVQLCERKXUNBDERMIOLINNJQXZORFBYYAUNSPHYITIDLNWZTMYUFCFCBPWDHOPGQDOZQWGYACJEWUUKGROET");
    IMC::CustomManeuver tmp_tmp_tmp_tmp_msg_0_2_0_0;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.timeout = 47955U;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.name.assign("NYSZXNYVNUESCKUQTXJFOOGFSGVPZGNRWQEALWRUSRUTSBJLDXWECAQGLIDUQLELPLHMFPKPBCZJNFLBOJNKQTNIHZDEUSCEAKXRHFIIYCKIAAHAF");
    tmp_tmp_tmp_tmp_msg_0_2_0_0.custom.assign("IYMXAINWMUSTBMEPRCALYUWGEFRKUIMCCQDQNYQERTPNRBHZWYKRQSKZFEYTVKCJXLOGDWPTJLLTOXVIVRHDFUASSNVBOEUWOZTUPDDOPGMSHKQLOUOZXKGUNENVBYIPRMLTPJPDBMSGNXDRFJHGHALWEQXWZZVOKYDCGXDJJYCMGUPQJHMBEAJXAYKNAUQCXVARGHIFBCKIAJVDEZHWLZ");
    tmp_tmp_tmp_msg_0_2_0.data.set(tmp_tmp_tmp_tmp_msg_0_2_0_0);
    IMC::SetServoPosition tmp_tmp_tmp_tmp_msg_0_2_0_1;
    tmp_tmp_tmp_tmp_msg_0_2_0_1.id = 228U;
    tmp_tmp_tmp_tmp_msg_0_2_0_1.value = 0.975067120855;
    tmp_tmp_tmp_msg_0_2_0.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_2_0_1);
    tmp_tmp_msg_0_2.man.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.868300998962);
    msg.setSource(587U);
    msg.setSourceEntity(58U);
    msg.setDestination(54921U);
    msg.setDestinationEntity(179U);
    msg.type = 31U;
    msg.id.assign("TPWEPHSHPHHKBFVWIZEWVILEUUORSYCLEXSSUUKRTOAX");
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 2110569755U;
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
    msg.setTimeStamp(0.773996346972);
    msg.setSource(31881U);
    msg.setSourceEntity(47U);
    msg.setDestination(37483U);
    msg.setDestinationEntity(30U);
    msg.localname.assign("PAKELLSTFBHKICVMEFN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NOVTGXDKANAPDZMRRSSYCFYYIJUJRZWDUWDXOUCGIQHUHIAOGYVAWJJQEMZTKXFLCHOHEZOWLEGMRTTLRCYBVQVBVABYUKKWMZAJUIGFBFQMJEQVANLIKMMPTSRUXHPDXPHEXQSWYIVGFAQILBKNLJOGOSTFVWJRVJDTAIZVOHQBXMNBWPFTBDEDUPQENCYHOFNHZHUSPELPCGRYRNXY");
    tmp_msg_0.sys_type = 140U;
    tmp_msg_0.owner = 63911U;
    tmp_msg_0.lat = 0.264415982217;
    tmp_msg_0.lon = 0.380253094054;
    tmp_msg_0.height = 0.112420890756;
    tmp_msg_0.services.assign("BGZBKKSCMWOWJAJYINQZUDUOCIPDSVGZQRMNRENHWTZUUHUCTYVUXAZRRV");
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
    msg.setTimeStamp(0.592133904332);
    msg.setSource(54099U);
    msg.setSourceEntity(44U);
    msg.setDestination(59209U);
    msg.setDestinationEntity(159U);
    msg.localname.assign("OSBZVTSKRTKGBXZXGNYYQTBXXXXUZFLWYWHFYVMCGUAEINKZKMDAKQSTCRKMLBADQLREWFORNFLXFJTOHVZAYKKJEOGMMUNWRULGRTBPWLWLDUVEQCRGNJQEOJHUISNJWIQOAKLJWHAEVPEWPZTPIRVGONPKJIOUQQMUMLMSSBDUJZHFAVYCSZPV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("PAENMXZDDTLASGDRKHSRULWGZXLYIDXTJBHJN");
    tmp_msg_0.sys_type = 179U;
    tmp_msg_0.owner = 64356U;
    tmp_msg_0.lat = 0.634867418037;
    tmp_msg_0.lon = 0.352652476165;
    tmp_msg_0.height = 0.16554880512;
    tmp_msg_0.services.assign("OXQLTFQULDNFXUMMDHBOYUDSWGWRBKJCTZSHKLZTWLGIGIZXEZMLVIWARRPZSMUTN");
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
    msg.setTimeStamp(0.229609820087);
    msg.setSource(4694U);
    msg.setSourceEntity(201U);
    msg.setDestination(49094U);
    msg.setDestinationEntity(225U);
    msg.localname.assign("VQJVCHKVIMMGQABAOZGRSUEUXUQXQJSPDDAEMYXPOTYKCBXZRN");

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
    msg.setTimeStamp(0.991389580415);
    msg.setSource(25803U);
    msg.setSourceEntity(83U);
    msg.setDestination(33681U);
    msg.setDestinationEntity(221U);
    msg.timeline.assign("CRSCVXWJDLXRJJVCSQOZFZDRRYGVPQNYOQANLZQGKOPEPBCFQKKFOLNLKVGVSOTFWAZSJNXALXHJQAQDHDEIULYCDYMHCX");
    msg.predicate.assign("YXZCUWHKUAAGROYNYEMSVFPDRJSHIHNULVLCNPHQMLBZHKJ");
    msg.attributes.assign("TVXMTCLKIVHOZLXWSOOJHMEVNJESYPUJIWKKOIMUOWBJOHGIAIFZTYRYKRSQLSIVUUTKLUJQVHFGCVLRBVINQBXMWNZNQGJAWQOCFGBXNKXJCAGMLFPEQTFZMTWPLZXFSLYQOHFADABDZCYMCGHCGESXVTBBSNPUPWERYUBLGDXMCJVJVDGDJDZKDSYEFWQCAKSNRYFSUARNEHRBIEEHZHQGURY");

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
    msg.setTimeStamp(0.608405946241);
    msg.setSource(57394U);
    msg.setSourceEntity(232U);
    msg.setDestination(25417U);
    msg.setDestinationEntity(243U);
    msg.timeline.assign("FJDTGIHTKEFHROJZLNSXZTZNVSXVOQWXBGIFSTBQNDRZJUKSKDIGHRAGLQKJYUZRNOIZCRPYCAIFVEPTAMMWYWKFXBMHHWULBICBHMVKGJULQZPEJKRSXDEHGIDMXEDUXPRLVFOIJKOPTMGRLAUVPYTBXTGWHDVJQCYQBNWMZAEAEMQVEEILKCAUKLUCPNSBHOUZFNQOOYWQAN");
    msg.predicate.assign("LZENCZDGXIFCTPRQUEEMTYMMRHRUWPDZGAVZPGHOOAAYXLDREPQIFSRLMGIWQNLTWISQINJJQFPYTJSOGMBPUXBXHFOTXJYNQYJZKASLHBHBCSOLGFTSDFBDEXWUHA");
    msg.attributes.assign("DWQOSUNAWORVVUOQZUFJIYMZKUOKUEMDMXJZMHUSVWKQIBXZZLGFNVIAXJZXSRETDM");

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
    msg.setTimeStamp(0.402410236275);
    msg.setSource(7484U);
    msg.setSourceEntity(237U);
    msg.setDestination(62422U);
    msg.setDestinationEntity(30U);
    msg.timeline.assign("LEHJMSHHWGLFRRYUELQVRKCKKQSRSFPWIXBIWEJLNTIJEGCSHTQRKYITUNFUYIAVBZXBYTZMWGLPNVZXDCPTOJFODZITVWGKZDFACNBMYWSRNMUJRGLOHNIDMXXMTHHKMLWAAVQZ");
    msg.predicate.assign("SCXFKAIQULHANDCDLWQDFEMUILOJO");
    msg.attributes.assign("XYJCSVGGRLYDPPSZEFEQDTMFLCLYTCMHIADBXKDGIAIQOTBMCNPOEICRADCB");

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
    msg.setTimeStamp(0.147466167353);
    msg.setSource(30734U);
    msg.setSourceEntity(49U);
    msg.setDestination(17526U);
    msg.setDestinationEntity(67U);
    msg.command = 190U;
    msg.goal_id.assign("TQKDEPOJQUIFAZQEODEWETHFHXZKFUUUQODLWIRYLPXBBRJZJNKNGHPFKVRERBWLJQUJIPSRSTGBILXOLWGADZXXLETSNQMYYPNZMLIXIOAUSKDZVPNGHBVAIFHWZOXXNEWGDKNBIMTRNACVICWRWRTLNQVZDVJPHIYECTOFLJFQMSJRSBMCYXGGSXSFECMMKOCFZAKEWHYMYCPAJHYACSBUDBFLROSDMVJMUVV");
    msg.goal_xml.assign("IOQNGVTFUBEWDSMWPYDNVWPHBHAEDBXGYWATGXNAKQPFGQIWCUKNWYUKBRZAPJIGUAFRBTUMIZVJVTMVFDEICDMEKCOZFRDTAAKMSHFHOYBOHYSLUUJXWEQPGRDGNXAEJBPLNQIWQELZLBVBNHWJKAWQBSLJVYTFICKZQYLRJSGAZYHSLYDLTHOFCMIYMQRFCEXVOSNC");

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
    msg.setTimeStamp(0.121363247737);
    msg.setSource(9065U);
    msg.setSourceEntity(153U);
    msg.setDestination(63952U);
    msg.setDestinationEntity(130U);
    msg.command = 204U;
    msg.goal_id.assign("ZINZNOFNILTZRRROQJZITEIJYSLKWRZONPHLEJSXHOYMJEXLHFZMXORYKVIEXOXLUFAGZXYVQGVXDOWWJMHE");
    msg.goal_xml.assign("RDLRHUNUXZTUMBCMGJQYZAEMGHYLDGORQAGZLNJUXWBGPRKTCTMLHWTEUIVTFCKORIFWAEQEJZMHOBGAJTNCFOMHIPHFFGMSQFNDHPFPECLKWCMUQSNYD");

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
    msg.setTimeStamp(0.190390294439);
    msg.setSource(31105U);
    msg.setSourceEntity(25U);
    msg.setDestination(46114U);
    msg.setDestinationEntity(206U);
    msg.command = 231U;
    msg.goal_id.assign("FQNMHRGIPHNDVRAAPZOQADQPTIKWHCSUXEURNEJSBFYZTLRZILSAQOCPYZURXTYUHGWNDPJVQWKRTHUZNVXDXHRKXIEIBWWUKGNXVFCJRNQAJZIQFSFIBRPSQKMYSMLPYLESHTQMSBVCWAUCAPUENBQEALWLUZCFMHTVOVYECKMDKBCODNBDDGRTJMOYCKXZTJJMOGJWXISGWFYOGFTSUBDYDBEFGZTI");
    msg.goal_xml.assign("WYAPYYKXBQQMUAXOJBHVBZDJUGALNRGATRZOEXZMMZPOECCCK");

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
    msg.setTimeStamp(0.848992080348);
    msg.setSource(23633U);
    msg.setSourceEntity(157U);
    msg.setDestination(24132U);
    msg.setDestinationEntity(165U);
    msg.op = 95U;
    msg.goal_id.assign("AYUZMDFEVUSOODLNLTMXVBYMISXYVCPOMEGGMQVARHUIBPJNQFUAPFQAQSHOLDGZEECCSUCHWTLHDTBPIEIVFWMZBSFOPHHZJJOFJTRSEPXJQYBHRRDGSYGESRQLLCIBTDXWEFTHQKAIUHIDHGZYNBTONXUAKKCZSWXINGWLUDVNGKQNCMTNBMAJRUCCAAQPVLAPYJDXZVLEZWUYESLBIZDYJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OKAZJBCNTWEGLHKZIZAWOBKPICHCDCUVSQWAMDAULSSBGFRERCSTDNJFZPMCCJQOGPVDINKJVNKVDNMLYQLIRRSJEOFXYZWTBUJXYHHHJLEQTIAOM");
    tmp_msg_0.predicate.assign("UPGYIQNSPVNNCRWUMECRZTDLLZVOMVFKLOZKGFYNJBQGZLMQZGDCBBFEHLZJAUJXGMQLJNALKCPGJBDKQLDKHTXSRWFJTDDUFWNRYGWXISKMFEDEPLSIIWNXXAFHIATUFUJXTWQTHUPPVHKABKYOAYMBIXMUNTRXHZVPZVIAQDHBBCOMASZEMPWSMTZOGJEOE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DOKTMTUKRVUWPPAXFHDJVSNBBNXLMH");
    tmp_tmp_msg_0_0.attr_type = 186U;
    tmp_tmp_msg_0_0.min.assign("RFSCGSXKFWRHVWELNXCOANTMKRJUJCZHXZFLBTOFVMDXEEZXHNFZPSLAENJWBGQABWPJEYOLIQRJYPQMYIGBUKTMTSDORTWIFISDCQVSJGIBKHOIOPLNOWHHUUVZGKCYQAJTSDQODSMKULFVCLDJXKFODDYHPBEBVGFITDAA");
    tmp_tmp_msg_0_0.max.assign("UAEYGHIMAQZCVSLOCELVRZCNUBAFPLVNVZCIKQYQVFKZDWEJRQAPLRAZDRFOTXBKHIJHBKRJAUUXWG");
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
    msg.setTimeStamp(0.691645134942);
    msg.setSource(34959U);
    msg.setSourceEntity(220U);
    msg.setDestination(41002U);
    msg.setDestinationEntity(115U);
    msg.op = 225U;
    msg.goal_id.assign("MARIOYXBQYYUYLGTKVGOJGNTJBJEENAJKERBAHG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YUJEVFHJPBLYGHQSLRTKUZAWTBUTFUZEJXIASNYKXMQGUCTBIELMWWOZEBCGPBPVQUGPTVKQOZDKHLEBFWVFCITERGOHKRNAODMLCWEAJJPJJSQOXDPSSMZNVGBXINDRVPVDQDDCMIYEGXTYLEWSOKQFTACXNBNDIKRNAKRBTZXPSRQCHQFOZMFFIVJ");
    tmp_msg_0.predicate.assign("GLTLVKQPYPACWVYVWDPMDAJXXSDLSQSBNWJSBWTDOXXSIQJSXDWBDWIEOIHYMUDRAATHUANZOCHJFKSQXCZSJYFRSMFMAHULKZLITAWQGRNVJOPUBYVLEGNFHOPMKCYKOLZBMOYZECKYRETLICIZAXOVYXGSTHNW");
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
    msg.setTimeStamp(0.236102889387);
    msg.setSource(65418U);
    msg.setSourceEntity(173U);
    msg.setDestination(951U);
    msg.setDestinationEntity(153U);
    msg.op = 51U;
    msg.goal_id.assign("GETXRDOKFUFZBUFKVSWGAAULZAWSTMUNPLLRYQEQJXHQMBXDEWFGKPOJCE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QPKPUCJCCTHKGDWEHHSUNAYMDANFLLZXZNNTXXEBASQCXSQSBJDBCNYFUXEHBWDKOWZJIMOWYXKEUGCIBWJPMYWETTOVZUIOIARYWNBQSUETFYSQFJMDRYJGFTAPPXMTGBOSWUVDTILVXGLLDDKKJSOLSP");
    tmp_msg_0.predicate.assign("LHFQKZHPWNBVVUUWSQRHKPDJVHDCVBMKAKJMDJDAUTEMYSQWNCRTXETRXQBLGUXJYWZZRZIZNKOKBBRAEUBLFLUXLOAOWSCYYLYMJNAQVPBSPZWNDYLHOFSGTCUEBFIWFGMVGVFHJPTYCQCOGXQRRDJPXZEATRIVBNNGKWFOAFTIXVMIZCEIPHNXOGWHISAMVPLEPURSJGYMORQGTDOMUHNBTDYIFWIXNOSEQKHXSZUJGDACPZJ");
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
    msg.setTimeStamp(0.0381632039505);
    msg.setSource(14696U);
    msg.setSourceEntity(48U);
    msg.setDestination(44232U);
    msg.setDestinationEntity(247U);
    msg.name.assign("QJPBFHXCBQKFB");
    msg.attr_type = 44U;
    msg.min.assign("MQNALCNTVMZMKRCIEWH");
    msg.max.assign("FZDTLWHSURQOTPIFUDMIMVXMSOPOBJKXEXTMRVSJGBDNPFXEIMGEMEOSYIUGQKAJYNYXLMQOYOHPBJRGYLFPKRXMHLTSKFJCILZBDDSSQNCGBEHJWMPEQYUSHNRIAACHWWQDCJHRTHDIFKWYKCTXQVNQMTVZWVZVQKAAWIDNGUVLUTRYXZBOCFFEGPKHERCVXIRILWXNJCK");

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
    msg.setTimeStamp(0.95345329093);
    msg.setSource(15028U);
    msg.setSourceEntity(208U);
    msg.setDestination(39601U);
    msg.setDestinationEntity(7U);
    msg.name.assign("BUMDUGGBCJUUFTCYBESCXISHCFXWQAMNLYINPQNCWOKVOAEZPKETARGBFGOFPULXYDSPLHYCVCOAKINFGMGLTJBWDKRSQNHRNDMXGLJIKIPKIZMLASWTBBWQFAOXZJQVEBRSWVHXOXTJSVDLNFOKHVYEQODYWAUTAOVZDJVJFEJGHUXTZSRMYEPDVPSMEULHXTTHWMGGILFQRERZBWZKCTBDMNXRENJYISQZKRCUZNIUJPWLAAVMHPQPCQFYHZ");
    msg.attr_type = 49U;
    msg.min.assign("BJVDFIZKVHRKYDOXXMMUHKOCAHWBLHMHDUTTCQIZMEOBVMXTSSAZPLQOQSPWNDUZROJHPOTRGWUYVYOAYMGPYFAGTXAFZPACIWOJSNESITPGDKIONMWQEITGHKFRVCNEYJSLBYHVZVPRGLBYXLZDWWGRBJJUPYMXKMV");
    msg.max.assign("LIQAYLYZASJXEEZYRMVFFJBXXGVNSCGOOQWJYMCTHEIJHCPFCVWCGSQAIGTKWEOUFRMWDAZZXTUSFBXZHECNNOZPSHPFFALJPJYRNG");

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
    msg.setTimeStamp(0.33788944448);
    msg.setSource(40317U);
    msg.setSourceEntity(231U);
    msg.setDestination(46918U);
    msg.setDestinationEntity(56U);
    msg.name.assign("KRIEZFGBTZLDSLFDANUPTKXMPSGYIDCFQREYBWPSWEXSELZCRBZURCXVJJBZWCHABPPZKWDHHIHQYVLNMFNEOICGUNCAZRXKVEBEABLSFUKIOKDLJNNSWXDIVKOHTOPPWVPVOXIZGNAHJTWVNRHUQJGJCCQGKQSQMTRKRDVBLMUHUGE");
    msg.attr_type = 125U;
    msg.min.assign("ONEXWWZSQPRBLXSEFMGFVZPWZYPJBYMEOHARPYQCZTKVJTBANEBHRRSJOUCXXCQUSOLYASBOWLOTHXIPKQVFGEHNGNNERQMWZYJWNLNVWDCSWLKHFPZFNQPDAGVQJGDMSMDJTKGFAYGRCZUFKXIYTVVBLJSYYIIKZHFJYCUEPDXAVHCFOBHJVRXFTRHTLIKDTGDSMLQWZMTUIUQCDKEIUEOXTOVWNOJCKNGQMEHISLCRAUGMKUIADX");
    msg.max.assign("IOQBWEWYQRKGYDBPGMZCQSFVBMPPHZULHJZVLTMUADZMNPZRYTVTPNEPUVZFOJUSLSOYQBHKKFSJSQTZKHXKCCXEFQGRSNIJFGGABHYGOKIMLEMWHMNRDYBNIYKAULJRSZVBGQRAEOXAAQXRDLTSTXXEIYGSJWLEPBRUIVJPXJNZXLFJKOTCVLEVNHUDQDOLX");

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
    msg.setTimeStamp(0.570471470244);
    msg.setSource(56139U);
    msg.setSourceEntity(77U);
    msg.setDestination(39298U);
    msg.setDestinationEntity(87U);
    msg.timeline.assign("PNLJOAXJDFAIZLCRYXTUTLDJBHXKHOOVLSNQQTKZRACIVGBGOEEBXFCGQMPUKJSTURZTXENHHFEUWJHVFSEVYQOLFSLKTWXKUZWYYBPNPCPXCDQAMNMZIFMAEVVAUIWDYEMKGFZSHHWRGDXULYZESOMXCMNGIBABYVRGOOUWJAPRDWZHERQSDTIFTQJWKCTXFNEYVIBNOIJKCZWSGDCRYPPVDMCKJB");
    msg.predicate.assign("IWURDWPIJGTAPGGMITQFFLPDVQGFPEYPAZHRIYSMMLXNHMIAZJFIF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("NZPBVQUBPDFRADYQWOVOTPYHFXOGAUJOMRCXXRIQJBBYYJWDSLMKSDRITLBYHOAAWZXANVISCZGVGWMENXEMNQNBCWRQAFIZZULHGNJIGKMRAZJCFHKEPWSLUAGQLRKCBCPLHKNIFWUDVXGOPLQYDAYNHIUOVTAXWFHPTPGDTIKSPHVWUSOLIJZHYVEV");
    tmp_msg_0.attr_type = 46U;
    tmp_msg_0.min.assign("RKOFKCXFQBTHMLGTDJXJTXINZEWWPNLEEZDPYSCHEEDFMIOWZYBUONKOYPGMUUFMIOYRWZUQZHGWNHOOCEVSRXAEJKGBXQMYGDFRQK");
    tmp_msg_0.max.assign("KZDPTGFHRJCMMKMUUOSIAAFPEFKBNRNKYKIPSQLKBHEBHNIJVBZZMCYPZIAGNQFJOCSSMRNCAZMMTHDAUMDHXJXCDQBYGOLLVWBQVBHOAJSTLRJUEFTISRRXCPLEKOR");
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
    msg.setTimeStamp(0.59360677365);
    msg.setSource(12060U);
    msg.setSourceEntity(22U);
    msg.setDestination(50676U);
    msg.setDestinationEntity(254U);
    msg.timeline.assign("FGHAGVETBRHKADMBAZUDCITOEITTVTNXKSYWOSFPLSKWCUOSXVQOOURCYFWDMGMUHIJJQFPPPOCLLVBLAYBVALSWWEKJPTLIEXAGGTXFGFVJVITCZYRHWENJDDVOPWQIICBRFHEIXKWNNYBPUIR");
    msg.predicate.assign("VDBLJGGKAYAPBETLAHTXFOFPPUMUWVXUAILXWWFOZAIDURDBKNONTEQQKDJHREFXMNHTMILOYDYJEJQDEVCHADGFWQSXWYVEBCUCBFXWQVHUZENTQLJZKJRHTKMLZXKJGYFVCBGHGVQIBLTZMCIPKDAZUEUZASTGCVDYYBHXOCPONQMYSRUNWOKRNIYMRZCZNBHKZLRPPJDFSECIGXNOAJXNWBRSPGOISVSGPU");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("MSSUDRSCEAXYYWYVVSKETWXLKHPEYQDBLJFLGXIAMTOAFPMAEAZDGSBRVQKPJYXPIHRPXHZMDKHUYKJWJCYNZZTQAHLJQIBZILKCKMNQXBWRRUNBZLTJSFEHNSFUCNFUUGRPIUQFVLSBCCKXWORCIAZIIEGVDYNQJTGDEKWBTRORBVMTENPFOOHAANZIWJKGOYOHMGWZUPMVXHQFWXCQPHNGVFYTSIBJXDTSTLNMEVODQDB");
    tmp_msg_0.attr_type = 70U;
    tmp_msg_0.min.assign("PARAWLEVYLVWZAUQQCKGWKEIIZONSXQOMSXYNQXGYNVHIYJPHBEXRTWYFTTPGKFXQNRNYJLB");
    tmp_msg_0.max.assign("CSLRGCLWMXKMSUOLUMQMHJWHOZRTCNTRJJD");
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
    msg.setTimeStamp(0.650050780111);
    msg.setSource(64340U);
    msg.setSourceEntity(227U);
    msg.setDestination(14322U);
    msg.setDestinationEntity(176U);
    msg.timeline.assign("YRHAVKMUNCVXAQPOUJXBYLTURODAZLROLFWQAWXUBEQQSDWVPJBLDBPWPNSOGTZDCMDAGUCJNLUXZFSERHBZTMWCFSFOOGEZQZQXAH");
    msg.predicate.assign("UIFDVLPSYISECOPCTZNBTHAQGJQMLDAQSCVXVQBGZXPWMJWKDUXCFIXJGYXGNROEJYRMASONVDKHQJRTRUBKUFACLYKUTLOGDLNZCNUUBTIFZEHKAKJWLGRMHCOJNWJWTNVBXTRJUTVQYLPASYQQMVFD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OREWTNCQMJDAWBKLFNBGBZWKPKVUFKORTZIHEFEIIVTMDTQZSDSNQMKQQTOAFBSLIZLIQTQTMBCNEHKZACSCVCFVLIGKPWIGZUMHNKMPBYOJEEVFXUUAXZPNLDFJDDUCYFVLPJBYAJPDPOJAYTERKRVNUXYBZQGHUSHMOAZDMNFBRPDCUGYZSOJJHIRNGYIOXXMOKOUWECLHVREVVTR");
    tmp_msg_0.attr_type = 168U;
    tmp_msg_0.min.assign("JUBPYKNFNOMZWLHKCLJFJVGQBJLWLEGSJAZVRDNUUEECFTTORJETFOMZ");
    tmp_msg_0.max.assign("CYZVEIRWTYTZLYEUUWOMZJSIOSSFFPVWXUBJRZVOADZSCVDXLPTOUSCQYEQRZKNVNAEJGPLLJLBHIXTLDOBPOCDCKUWEINHBUZTVEJEQQYPZHUYPNWIZSERHFXFSWAVMLAMGKGCLKVONKFAQHRWW");
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
    msg.setTimeStamp(0.84066304151);
    msg.setSource(3030U);
    msg.setSourceEntity(169U);
    msg.setDestination(24016U);
    msg.setDestinationEntity(121U);
    msg.reactor.assign("SHQSYBLSVWOJZKTCHCLIUQIFQMXIMCIYRLAOKJDXDGRUEPJJVXLBMSIYBPETORRQZANYWWFAQZKZJYRDMVECVNHKECPGXGPLKUXGFHKQTBDUVHUNTGSDMCEGGEUXWODUTGJONRAFIPBWWNJL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RHNGKBJHCKUXNRQMWHBJIDXEWCMPUITEYDBQNPJQPIYZUIGCDAUOAWGPLUTORQCLQOTMVSLAGDSHFLOWEAUGIBMELVPMJMDVOKWZARODTSCZAUNFNGQFROIVNUHKUXZEJTFLEPYZMRVFRDSXSQFBVOCSLVAIAFHSVUTLKNQJJHWOXCETRXSCPAVGXYXLDSWABTBZNBGHZMDICYYIKKRMYJNPGXJFZKWYZPETYJSEEBFQIRLYXCHZFG");
    tmp_msg_0.predicate.assign("GERIWUQFVXYOIVOVTBOBZABRMWMWMB");
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
    msg.setTimeStamp(0.625833211025);
    msg.setSource(47247U);
    msg.setSourceEntity(141U);
    msg.setDestination(50467U);
    msg.setDestinationEntity(81U);
    msg.reactor.assign("WBIPCGQRKLWRUZDEYHBFKDWVPTGAMRWXPYVKUIYXBLSXNCQGVFASCDNGWGMAHCPLKMVJJXQICIBEQFYUEYVNSAQTMXHPSGNCGLSHUZXJFOGXVWPHVHNIIKSUPNQDWFRAPFTNYPSHOADZZLRLTBTOEAZITOBKFZMRQSUCQZMUJJCRISKDLTOZHKDQMDGAJDIPOZWEOYFZKMUBEMHTLXOEJRJWTXFIDUEYJG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EHNQPBFEIUQOVPMCVUREKOKUAAIIDTAGNZMJJDBKTGQZUGIZQRZMM");
    tmp_msg_0.predicate.assign("ZUSXOWTADIQHIVZRBZVVCLWOZMGBGHNNHYLQJSTWCRGYKAOYHDSLLXXYRPOGJKNEPGOMJGZDBYEKCXIFQXHCNADFGLLMEBMFGMSAEAUDRJVSLQIAMNTAICFEBQDRSUIJJGDHIVWTJGFDYUTRQWEIXPCTFBSPLCHKRXVMSINYPOIYXUOAVMTWWNTPBQUDWEPZBPROWFTYVXMUU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GXPGWMZQJYLEFYMAJHIOARQSDDHHPXWKBJPHMHUIOWXWNYXLYLAELEQICABQKBBUFZMLRHTTRVSIDSYFNNTCICTUTOQEXQIEDPJPMTORARZZJQICAY");
    tmp_tmp_msg_0_0.attr_type = 254U;
    tmp_tmp_msg_0_0.min.assign("GVOHNZDPBOMJIPBRZNMAMAWBWUFHEKBESPOUHXOJHIICFIRKEBLRXQJ");
    tmp_tmp_msg_0_0.max.assign("SVVIDQRGEXAFUOBVLOHXDCMBGEPYXQGGKRPLWLNQYARFJYTCRGPILMIXOSOGUJKARANCUJDVQIHJQGKOKNZNFTDQPHOFZLKEJMYLNZCHEPBXBRLSHPYSDFXQTHVWWAWZXIJCZVNWI");
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
    msg.setTimeStamp(0.217726160243);
    msg.setSource(41658U);
    msg.setSourceEntity(143U);
    msg.setDestination(11244U);
    msg.setDestinationEntity(137U);
    msg.reactor.assign("LCILXXCMMPAWGOZCRMPOQXZXDUCFZBZXBSRAHVFIEIYYHNDHTZCVTTGALRFQAOGRWIRSYJLIFKVWREMYCPUPTDRJATKTHLDKXCHNKEVFOPNWEFYNKOHNNQEDNWFUJHIESSKSXVHGYJLMQQJIHUKUXWMBFESVEWALJAJVDKBWCZUBTNVWAGLMWJIGVDOYDCSTGOGJPMQXTCSAIQQBLDUO");

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
    msg.setTimeStamp(0.396770270787);
    msg.setSource(31030U);
    msg.setSourceEntity(142U);
    msg.setDestination(54329U);
    msg.setDestinationEntity(252U);
    msg.topic.assign("OEQZJIYANONVJPBHIOBXUUVONQJNBKJQQQATDDNKBOPVCRMBXBWUBXAVEKIZLXPJYLDHAMMVAZHARZPLGDSNGTGRTGIISZ");
    msg.data.assign("RKIRTAWAFYVSCODCLPBNRQXSYLTJDDHKTXXUUPHOYOPQTVYWFUQNKKHVIBGSIJRORFUGDKYGWPLLEVZHNTNLSSCJPFEIKAFHFBMTCFKQNSMRJQNVOHPYJZWQBSVAVAZIMPVHZIXDQEWBHAW");

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
    msg.setTimeStamp(0.636591288523);
    msg.setSource(33550U);
    msg.setSourceEntity(111U);
    msg.setDestination(50284U);
    msg.setDestinationEntity(206U);
    msg.topic.assign("NNGJVRHSCXSFHBPQBUMPASPXUBHKZKBEUEATWXDMGWEDIVYYUQQFRBYUDKGYFOMOSRDQQOAGZOCXWZTENJJYDKHPFZJYMIUFOIMGSNXHKXCUPVELQOULEARJHERATFMAMCCVXVZFGZKDDZSRZJRCPLOWBFE");
    msg.data.assign("JSUMCKHCNUGTWYOHEWLNRPKHNRFUNLICILKXTGWPXCZQZYRQOSKAEEFUABSPZMMKTYAQASBEBLWOTZDHFXAAUHZDSIFIBQIEURGWZPSXYQJGDJUTLFBPVBQVJJQETCXBCKZVRWOYIWGLJYSCLOSFRXMBLTPJAMO");

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
    msg.setTimeStamp(0.486906298526);
    msg.setSource(20086U);
    msg.setSourceEntity(51U);
    msg.setDestination(25113U);
    msg.setDestinationEntity(202U);
    msg.topic.assign("HKHEXBLOGRSVC");
    msg.data.assign("IPZNHXXVFSMADNADRWZOKUXHSUBJGCVJCJFNKCOVJYMPHOYPWKFRUXIVPGREMOGCSLEIZMUEBWCNXTCPTWACSMFQYYXYIHAUKBEHSHJAGBZBBURHMNWNMYGNYQOROFXHHCQKMAETWREZLTKZQLLLFAFYQWTCGPZSQBZTFFIZDNWGLRXGKDVJJNSVYRLPJTSEEFTKILX");

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
    msg.setTimeStamp(0.976713457979);
    msg.setSource(22233U);
    msg.setSourceEntity(210U);
    msg.setDestination(7373U);
    msg.setDestinationEntity(40U);
    msg.frameid = 104U;
    const char tmp_msg_0[] = {90, 61, 102, -120, 32, -98, -111, 35, -63, -51, 87, 115, 126, 62, 116, 50, -18, -18, -81, -24, 126, -87, 93, -82, -31, -12, 41, 8, 81, 81, 50};
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
    msg.setTimeStamp(0.972829667374);
    msg.setSource(46245U);
    msg.setSourceEntity(3U);
    msg.setDestination(61928U);
    msg.setDestinationEntity(217U);
    msg.frameid = 27U;
    const char tmp_msg_0[] = {108, 3, 46, 62, -63, 40, -58, -94, 112, 71, -32, -75, -117, 103, -58, 16, 59, -102, -47};
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
    msg.setTimeStamp(0.991165228013);
    msg.setSource(50049U);
    msg.setSourceEntity(136U);
    msg.setDestination(65096U);
    msg.setDestinationEntity(122U);
    msg.frameid = 150U;
    const char tmp_msg_0[] = {67, 38, -37, -51, -18, 42, -46, 96, 14, 66, -75, 34, 14, 40, 0, 33, -57, -108, -106, 98, -1, -3, 10, -12, -35, 111, -23, -2, -93, 24, -121, 1, 52, -17, -43, -89, -95, 75, 31, 10, -20, -91, -5, 107, -107, 18, -113, 85, 59, -6, -62, 65, 3, -59, 81, -95, 55, -40, -118, -119, -78, -87, -118, 17, 113, -80, 43, 43, 73, 26, -38, 40, -127, 36, -112, 9, -17, -12, 80, 118, -25, -114, 97, -119, -72, 65, -3, 13, -78, -53};
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
    msg.setTimeStamp(0.343291584775);
    msg.setSource(43825U);
    msg.setSourceEntity(91U);
    msg.setDestination(4160U);
    msg.setDestinationEntity(3U);
    msg.fps = 173U;
    msg.quality = 14U;
    msg.reps = 0U;
    msg.tsize = 2U;

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
    msg.setTimeStamp(0.615809981832);
    msg.setSource(45627U);
    msg.setSourceEntity(185U);
    msg.setDestination(32271U);
    msg.setDestinationEntity(103U);
    msg.fps = 30U;
    msg.quality = 13U;
    msg.reps = 237U;
    msg.tsize = 23U;

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
    msg.setTimeStamp(0.466461728163);
    msg.setSource(27172U);
    msg.setSourceEntity(213U);
    msg.setDestination(65439U);
    msg.setDestinationEntity(88U);
    msg.fps = 55U;
    msg.quality = 152U;
    msg.reps = 43U;
    msg.tsize = 99U;

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
    msg.setTimeStamp(0.868745625294);
    msg.setSource(39334U);
    msg.setSourceEntity(14U);
    msg.setDestination(12616U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.220372145385;
    msg.lon = 0.82593250482;
    msg.depth = 189U;
    msg.speed = 0.00373361913763;
    msg.psi = 0.358515287166;

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
    msg.setTimeStamp(0.866762192614);
    msg.setSource(52822U);
    msg.setSourceEntity(136U);
    msg.setDestination(14825U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.40622944775;
    msg.lon = 0.0934568978041;
    msg.depth = 68U;
    msg.speed = 0.306872953761;
    msg.psi = 0.977525325666;

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
    msg.setTimeStamp(0.865487571697);
    msg.setSource(54927U);
    msg.setSourceEntity(200U);
    msg.setDestination(64542U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.334701709436;
    msg.lon = 0.521814391377;
    msg.depth = 6U;
    msg.speed = 0.66382609621;
    msg.psi = 0.00196950922626;

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
    msg.setTimeStamp(0.541300249556);
    msg.setSource(2299U);
    msg.setSourceEntity(138U);
    msg.setDestination(4433U);
    msg.setDestinationEntity(184U);
    msg.label.assign("ZERXOXVUKVGLXBLTQCEHIRFOTYRIWCXHDBASMXHGDKRWXKJWGBEVLUBFPZUQKQYJRGMAIJKZGCSLYBSJAQLIWLTPWHNYODYCAAFYHTPVPAFUNWISSZUJNKFDTSGVKMVHGNPPRNZFJZMEBDZQWMAWKPPFHMNLAQJRJYGGCSEXYBUNXZNDLEQQFCDOITDFAHEPMEYCTDOOULVXPHCZKCALISMIJJWYOUCRRVBNWVQTNQ");
    msg.lat = 0.272780681551;
    msg.lon = 0.0599658744209;
    msg.z = 0.361961937477;
    msg.z_units = 168U;
    msg.cog = 0.704417439862;
    msg.sog = 0.926398375819;

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
    msg.setTimeStamp(0.813324563381);
    msg.setSource(24252U);
    msg.setSourceEntity(142U);
    msg.setDestination(810U);
    msg.setDestinationEntity(20U);
    msg.label.assign("KCDGHAEVWDSNDFTLAEZSQTNBQWLXSMJTZXBRAZAMXRSPFGHSBRVGRUQQFBTAOVXKKLZUDDGHPOLGFKYAAIYASWVEUVZYMIBZCZFILNSWCXR");
    msg.lat = 0.0272912958971;
    msg.lon = 0.819642418173;
    msg.z = 0.164712951393;
    msg.z_units = 54U;
    msg.cog = 0.659213973981;
    msg.sog = 0.837881508628;

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
    msg.setTimeStamp(0.798612197051);
    msg.setSource(24218U);
    msg.setSourceEntity(30U);
    msg.setDestination(29844U);
    msg.setDestinationEntity(9U);
    msg.label.assign("MRFAXDTKGZHMPAWOBGTJASCOBCIXXUPFRYOMSQEDVHLXRYTTDNXLEFACUOXWHCNIGXYTIJMYKCZHNHWMYPIEGUVBPSSRVNPPYNWDUQRRRNJJUUXZANDAIRAPCAOXURPFIIMNOQBBGYLHQKEEDVMFQEGLLTSPKGJUIGTLOTZYPWKVTUEBNHCYCLJJFQWFXJSOTICLUODGLDEWFDGIVZVDWZCMESQEZQKZROBKKKJSYAHWZZJSF");
    msg.lat = 0.664907911387;
    msg.lon = 0.533440438022;
    msg.z = 0.849925223794;
    msg.z_units = 244U;
    msg.cog = 0.629490619682;
    msg.sog = 0.151122297541;

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
    msg.setTimeStamp(0.929266241875);
    msg.setSource(11730U);
    msg.setSourceEntity(123U);
    msg.setDestination(7966U);
    msg.setDestinationEntity(204U);
    msg.name.assign("BCFMJTYNCVIMDFNHVHYMLNMBEBUQSTDCOBUUYEPBWFQIOJBLVSARDKEUWIEYXWLAPDJEARZHNAFDZMIPZYPTXGDEYKMGDDBTIXUPYHADSPOLRNRTXSZGAQWRDAKRTJOPKJQQXNCZWLGAVFVSQLTCQWFSWHBLRXKHHICIFRWZSBSIVVEGLFVHCUWZKLQFXAMPXQKGLRPYOHGWJENGMJYZIVTEBKMOJOUOTVGCH");
    msg.value.assign("EZSFOGNLKFPDTKOBSAOCSBWKMMZHHFTVTISDYISSFCETRYLRBOVHOMCZLIRSDSIRMUKUDKHIEJZKIHTPJNWPSYJNRENZYAKOUIGPYFLJEBCVGPXBBQZOCVFOILDQQCA");

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
    msg.setTimeStamp(0.77872091079);
    msg.setSource(47353U);
    msg.setSourceEntity(228U);
    msg.setDestination(5355U);
    msg.setDestinationEntity(223U);
    msg.name.assign("NBKTGBMGKTQTRHNFJTVLBQQGPDVDOQERITIFWJIQEZBSPAXICMPYKOORUVJXPAMQIYMLIDLSKXSACRHCZXZNPDTRNBOYGYDARGDACPJMZURMBUQEGIFEBSXVKSBCEPPHTFXBLNCZYUNPMT");
    msg.value.assign("DKSYOQHWEXQAVPBOGJOQOSNFFZTVDGBHXUHDQJHLNCSZAFVEPAXHOYMXCZTHQRNDBMNLMFXZTBWNMQIZUELNWBKAFQWJYVOPWBTHTVDCOIAIMULYTJGYLCZDXAFKLVTSVIPPESUADKCEJADNNIEBWCFBSJRXGWLRUJBRCWNMKEPK");

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
    msg.setTimeStamp(0.581087478359);
    msg.setSource(10442U);
    msg.setSourceEntity(134U);
    msg.setDestination(59712U);
    msg.setDestinationEntity(161U);
    msg.name.assign("KHTMSKOBXJBJPJURLRDODZCMVOWRPZBEUJTLOXLGIBEBAHQHZOXLHFGYQCYMWEZIGPSZGEXAJRFGBIYIQLMRLVVOBCNIPPAFMZXSWVFNFTKLILDKAUNOQCQKKPYMGJZJUCZWLDJQNG");
    msg.value.assign("CZZRRPMJVAKU");

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
    msg.setTimeStamp(0.812305029987);
    msg.setSource(22791U);
    msg.setSourceEntity(92U);
    msg.setDestination(1213U);
    msg.setDestinationEntity(171U);
    msg.name.assign("XJYTKGAFHGVAJCOKFBNWJKHWZGMLRMPJCXCQDRFDLFSVWSXYJSFYLEMIYKOQEJKHAJKAHXRCZCQZQROZUXOOEV");

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
    msg.setTimeStamp(0.312832699884);
    msg.setSource(35899U);
    msg.setSourceEntity(146U);
    msg.setDestination(21158U);
    msg.setDestinationEntity(44U);
    msg.name.assign("YQDBYPIMZHAJWNRRCHLCLOCKBGHEQSFSAIRMTLGEVZOLJOCNDHDVFQTDXRLGSGFRPNKEINDUJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JXORWHOMGTBRQLOHDHKGVAQJGFEFFDMCAVZGQISYVMOPVPPYSYCTIJHXNRNKFUXJKVDGFOPZCSVKBPGXJLDTNICXSAKWCBHMTYTMUCXMNGAEWJWSZCLH");
    tmp_msg_0.value.assign("QZAXDOHEKWCDGTJACDCSMZDWOFRTRIUAFEUYFKHRTPZKLZTVXPUNLIKUQBKFMZDPYHMOHGIISLOCNXVCJEGBTVCQVHQTUVUFASTVAJJJVMAOFVAYCKZJSSGQMXGNGTTPNYHWXUUQRMFBVPPSERYNONHBGDSIRXPFDHURARAMLXDHQOYSWWTNJIBZKQXXPCVPRABZOSLBPBWEXEGYEGQLSZKEOJNMJIJLDBCLMFGLIWCKMQHUELNKYZ");
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
    msg.setTimeStamp(0.33554180336);
    msg.setSource(46521U);
    msg.setSourceEntity(0U);
    msg.setDestination(58364U);
    msg.setDestinationEntity(125U);
    msg.name.assign("TNCSGKTLOXTIBROUABWQYXZPWPUVLBHHOJCTYNDZEBSDQGSMDRFNUZOZSWFFHVECDQZVPYRWFYCXYHJXAWWZL");

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
    msg.setTimeStamp(0.752473615487);
    msg.setSource(4325U);
    msg.setSourceEntity(155U);
    msg.setDestination(43877U);
    msg.setDestinationEntity(184U);
    msg.name.assign("CVZRANKRITEWBRFPRYTODMJJMUXKOTCPFISWCGLANYBWUJQOBEBTKPLQHGLANGZNJZDPSPVIPZFTOYBZEFESVZOUBERYBCXJDXRLXTPWQVQQHZOFFUBVIVZKUHHHKPYPUGQLDNKGRGWYFMFYTXMUONZDZFGIWLAMIHEACAOKGRDEHTXIWKDXVYSJAGUBCKCNSEUWJUAQYYOKIDHHQLGHQRWRDM");
    msg.visibility.assign("WHSJUWPZDXAUYRMINHPGRXJEGOXMHUADGVRTWAHEBRCQRYIYOTXXYQYLOLPNFBFJHHENDOKJMUWVLBLFQKIPQZZSCNFAYVMBSQHRHJZUVQSEPIZHEEDXMCSOBDYWAQSRZMQYLMTTIVDVEGKKKNLDIEIPSWGUHDOOWSTFNXFNYFWGISOPLTVQNNWBSRZCCRGVJGAFUUTPTMCCALBVFPEGGXEUFWO");
    msg.scope.assign("PULTWBPWUJFE");

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
    msg.setTimeStamp(0.449464592502);
    msg.setSource(33517U);
    msg.setSourceEntity(54U);
    msg.setDestination(43134U);
    msg.setDestinationEntity(108U);
    msg.name.assign("MVFPMJUTUOGSLRYZTQBDIGPDOCOFHUZGPDKDLVJCPJVVJZTQMMXDRGSLHGKRBNMFANVVZAFBYRYVMQNFQTLJLMXSPHHBHCFKBACOAFEEDEVTATMLSIOAKWXZCRFTSZZGEBAU");
    msg.visibility.assign("UUCPNSWEBCPVOXJXKBQXHBGTMFMVFYMFXCLHHODGTUALBIXNECULLBQQOIBKMIMHIIUKTSYAEXZNIUSZYWEVFBQXFQLYMFSHDAUOVRQWIPSJPGED");
    msg.scope.assign("BDINBEVCIOMWCRQWSKBWUBUNVKXABGDNOGHYUHHTUSWQJFXALYVOCNMVNAQRQEYPPEIGLEXZELJKXMNGXDPFMOJXFRZQHJHWHMZPLYYYFNECTZMVWUNVDLYQSKPTWHYTTTMZOGKQZXARDX");

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
    msg.setTimeStamp(0.115105307617);
    msg.setSource(61545U);
    msg.setSourceEntity(171U);
    msg.setDestination(30929U);
    msg.setDestinationEntity(120U);
    msg.name.assign("KCSDUHLNAHWCLQTQXIPEKABNNJOIJYTYHLRMBVJTXMUPRSBQRPTMVPURVXBCNMWUEZGKVFOALPSPRXLUMOAXDEQQGBKMEHJBKCGXQJGGGDNZGURLZTJQHWBAPKEFIYLFIYOZRPYPCQTNMZYUDUZH");
    msg.visibility.assign("HWZYYPTASHGGCEZZNPBDMQLOLWSXLDIZUCFUNQITKNYISLPWSPGYGORTOEITIZVRBTCEJUWTHXQSRMONBYDCXDDWHLIEKJTQTTVAEOJPJUZMFGAVCFCKMRWWXIAVSSZVKGROVUYBABRJ");
    msg.scope.assign("OHUWERMCOZLSYKDSBXTPTTZIFQJBNCKYVFCQFMCWDZKCSFZWWNAPRMVHTYZLLJCJBXARFWMOSNFRBQTIUIPEUGCSIOBJOIBZFLKSJAMBGTAGYMMPMZVAURPKMQDLLJRGWIJVQOXNDENGHEAOGXEPHXESJNRLREUUBYQGVEWWOAVQZGTDBKZLAUMP");

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
    msg.setTimeStamp(0.677329921374);
    msg.setSource(65206U);
    msg.setSourceEntity(6U);
    msg.setDestination(20852U);
    msg.setDestinationEntity(63U);
    msg.name.assign("BIDRNGQPENBPYOPQILANLOVBHJMJLVRVZKACYWDRQBQRCAQFFYLWUEGNSYXUSXYEPT");

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
    msg.setTimeStamp(0.000964129014607);
    msg.setSource(30164U);
    msg.setSourceEntity(54U);
    msg.setDestination(39267U);
    msg.setDestinationEntity(197U);
    msg.name.assign("KEBFPCUZYPUCYJOCZDPRHXBJRPGAOUOIKXRGGNMINHIVQKLUNMSRYAMCKVPGCLVJTINQTLKTVORJLPHRLYRUTQAEBSEYBVWTMUSMEEUZATGVESFSIJTKGDFJYZGWMLMOAZIOZQFXSDOWZIIALHFQTYSDYNAVBYHQNHTOUWXEVINTRDD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NZBPHUIJMQUNM");
    tmp_msg_0.value.assign("IREGMPWPPAVFVSCTHODYLLMLQREOJHEZAIOCNJXCRHJUZMEJQDQMRXZKXKBQOGAJADIZNGJUDTRKEYHUTVTUXUPGGTDVWSDAIHWEPEDFLPZYRIVXLXPSSMNBNHBOUGQOKKNUOCTJVHWCXOQXBCOKKJDMFYUIBFLPGJERILPDFATYQMYZMBNKFZWFCTSWWGVDH");
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
    msg.setTimeStamp(0.323555287137);
    msg.setSource(38332U);
    msg.setSourceEntity(223U);
    msg.setDestination(30708U);
    msg.setDestinationEntity(10U);
    msg.name.assign("FQJIYIZRHOOZWVBMFEKZDNEFWAWMARALFDDDYTUWKUPJXOOHEHYTIMYKXGWUJTBMPGQCSKXQWYAVHPLLUXRZIQGHVKPFIGLRHUTXFEBGUZUBHVLGZBTOGFHRGLKIXOENNSQEJMVYEPNWDILXBAKASCLSFDOAVGCZDAXBBZMDESSNRDSJERTOQBPJBIOTYASGNRLUHPOVQQSJQTWFTCC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PJTPLINSMIICEJBQDEAWXISKBOXUUZACTBOWIPDPALQDVHGQHXKVFEDHKAGPDIYLYSPXWRLNLRCRTNLZQMYCVPVXKDFSOHPTEFTZOCBBAGIDOQQEGYHXNRMJMFKZQFSJTCYRZFURWXFCNONAHTWLGNHUYAPKSUZMJXKJMOSIVOUBWRCKDVMFUANYFJHLJEODYTWKNMFBXYG");
    tmp_msg_0.value.assign("AJHNXHMMUBCQZEWRICSJGSATMWSAOPWMGMJPTFTNIKDKFWDDUOONGBWZLXLVFUJRYZPOLMHDUHQGRELXIHDRYACWNOGISTXHXWNJUSCUXKAPBGHPPJFYEENHDEOKZQMGSEYBTCGRKUHCLPIIGIZF");
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
    msg.setTimeStamp(0.892342749229);
    msg.setSource(16054U);
    msg.setSourceEntity(54U);
    msg.setDestination(31843U);
    msg.setDestinationEntity(204U);
    msg.name.assign("ZJRMTRNMBEGADYQGOWEXLHKITGOOLDRESZJBOQBPWWHMJBTPHXAJMEWCIPZKUHPJUJVDLVINFSBIXTWUNVWASKQAADOCCEUESDCVPGKDBHYPSXOBWYEICUFMMUZRWEZZQGVADYHKSJQUWFHMXGCJZFMRENOILFDVHRAUOEHCRIYLTDKPLGCLXQFZMYNZSAJXVFKAPGZTLDFVBYSTVLJSBPUNFTGLTNYORRKNFSNUMVHCQXIPOIWTKRQN");

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
    msg.setTimeStamp(0.612900842957);
    msg.setSource(21517U);
    msg.setSourceEntity(64U);
    msg.setDestination(60110U);
    msg.setDestinationEntity(71U);
    msg.name.assign("EBMKHIYAKQEDIVFFLYSWUZQDQOKHTQWLIDKXDSGXVFZQQTJMHUJGDKYPWMNFJCDNMXLPCUHOYGBCZERGZXUSWGKPLHTCVCVTTZBBMYXEFQNHIIDSXYWGBFSJZLINAFCBVJLILDSAOHDYEJFAFZUTLPPFEKPYOQQWTICRTOAHJHNNKBKENJNVAWBPVWJNOXPIGORSDRYGKRGMVUZRCTPUIAOXRGYXZEWMBAZMHVP");

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
    msg.setTimeStamp(0.15553597174);
    msg.setSource(47628U);
    msg.setSourceEntity(70U);
    msg.setDestination(48824U);
    msg.setDestinationEntity(121U);
    msg.name.assign("VBMKDGEHPVAJUUAFSZOJXPSJIQLUWLCCRRGWOFRXRWYBEHOCHBVJVCNLJUHUMDBNBVKMBWYDTPJISISFCYBXEGELPVSGJKZHPKOIYFVDNKMTEZDPTGAKZCZSTYRFWDOBSCQDT");

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
    msg.setTimeStamp(0.901885143572);
    msg.setSource(31131U);
    msg.setSourceEntity(38U);
    msg.setDestination(63807U);
    msg.setDestinationEntity(35U);
    msg.timeout = 2311251842U;

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
    msg.setTimeStamp(0.871602305698);
    msg.setSource(53614U);
    msg.setSourceEntity(36U);
    msg.setDestination(40505U);
    msg.setDestinationEntity(65U);
    msg.timeout = 3236209329U;

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
    msg.setTimeStamp(0.202172973173);
    msg.setSource(37882U);
    msg.setSourceEntity(154U);
    msg.setDestination(4831U);
    msg.setDestinationEntity(28U);
    msg.timeout = 2986381998U;

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
    msg.setTimeStamp(0.410809404808);
    msg.setSource(16317U);
    msg.setSourceEntity(131U);
    msg.setDestination(17817U);
    msg.setDestinationEntity(182U);
    msg.sessid = 2755538006U;

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
    msg.setTimeStamp(0.797926629975);
    msg.setSource(22240U);
    msg.setSourceEntity(166U);
    msg.setDestination(21199U);
    msg.setDestinationEntity(179U);
    msg.sessid = 3163861461U;

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
    msg.setTimeStamp(0.387890640314);
    msg.setSource(21386U);
    msg.setSourceEntity(172U);
    msg.setDestination(13169U);
    msg.setDestinationEntity(172U);
    msg.sessid = 4236644928U;

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
    msg.setTimeStamp(0.681062979876);
    msg.setSource(54963U);
    msg.setSourceEntity(223U);
    msg.setDestination(19437U);
    msg.setDestinationEntity(200U);
    msg.sessid = 2133642787U;
    msg.messages.assign("HIJNBXYIBTUKKQGWXSQRLYZFAYBMKGGFLEIMPSNPEUMEKPBZIWEDULJCOJYJWIYHWJCIVFAYYTHFSFBAVNGEQNKMGURMEVDFDTXGSCRQUOSRVRCLWGLPAABTUUZQLIOXMSYBPTEXQMJPDOKFZHSCEMGDVLXCKZGZIJULIPCRESNNQDONSIEXKUZUVOMYRLFQWBOTCHZJVOLJWPAFCZRMXN");

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
    msg.setTimeStamp(0.948585255836);
    msg.setSource(2875U);
    msg.setSourceEntity(108U);
    msg.setDestination(57129U);
    msg.setDestinationEntity(200U);
    msg.sessid = 2520444265U;
    msg.messages.assign("AQPYTQXZPSWMKEWMRLMEEZUSBTZSVGPJAGHGOBIKCFQSZOYDLGBOLXNSTKZCEHAYCGYFVVGWROQOYBNDFLKMTDRWJRTDIHKHRNSAHUXFPHUQAETEMWNJIFEVIMTUYCCVCKISZWGYJXJTIXOPLVMGWLBVDNUAALQOFCXUZRJZYMUDHZOQFRSLQIWKIPJYWZNEHCQJRRRPVQNX");

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
    msg.setTimeStamp(0.7684294427);
    msg.setSource(16407U);
    msg.setSourceEntity(120U);
    msg.setDestination(38242U);
    msg.setDestinationEntity(19U);
    msg.sessid = 846024488U;
    msg.messages.assign("KEBHKPDKAWIJZGJEGGDBQLQEDZHBHSRKJGXQBZCJYKMUUMERMYFCDXXJEZYNOXNKEJFJFCHVIWHEQVBGQZWKXPMHBICBOLGKPNWQWATAWFDASLTVNYDJYCFCYCHNSURNZLMVXLLISFUWADIYLRRZMXLMUHRGSVDZTWNGMPESYPRXPULQMURQVOGHOVUVCIZBVNPTDVYTSTFWCQSZ");

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
    msg.setTimeStamp(0.0792133653566);
    msg.setSource(6810U);
    msg.setSourceEntity(117U);
    msg.setDestination(21113U);
    msg.setDestinationEntity(47U);
    msg.sessid = 1144758356U;

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
    msg.setTimeStamp(0.979975401298);
    msg.setSource(30591U);
    msg.setSourceEntity(22U);
    msg.setDestination(44289U);
    msg.setDestinationEntity(102U);
    msg.sessid = 382303310U;

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
    msg.setTimeStamp(0.752041197802);
    msg.setSource(60287U);
    msg.setSourceEntity(18U);
    msg.setDestination(40272U);
    msg.setDestinationEntity(138U);
    msg.sessid = 2688488497U;

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
    msg.setTimeStamp(0.846652191077);
    msg.setSource(59442U);
    msg.setSourceEntity(134U);
    msg.setDestination(64725U);
    msg.setDestinationEntity(2U);
    msg.sessid = 3579336222U;
    msg.status = 78U;

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
    msg.setTimeStamp(0.17980968127);
    msg.setSource(31218U);
    msg.setSourceEntity(187U);
    msg.setDestination(30035U);
    msg.setDestinationEntity(108U);
    msg.sessid = 4101928478U;
    msg.status = 139U;

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
    msg.setTimeStamp(0.0782249548625);
    msg.setSource(21866U);
    msg.setSourceEntity(242U);
    msg.setDestination(4980U);
    msg.setDestinationEntity(54U);
    msg.sessid = 3112373706U;
    msg.status = 100U;

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
    msg.setTimeStamp(0.543077645965);
    msg.setSource(38746U);
    msg.setSourceEntity(241U);
    msg.setDestination(56826U);
    msg.setDestinationEntity(226U);
    msg.name.assign("XVVUVUMUJRPPEZNRVQDXDHGYXCUGFGQIBEHCKNUSXAFUKROYPIAQDFZNOMTWBTQVACHHASIFYKKWCYKNEZTCOLFWZWITOCNRRLLBEFRZTYHNKWBDXUPMGGSTLYXKDWYMSJIJRTEUQSOYAFHDOGZBBLUPJIZJINCWQWDFBOVIQCESEQBQMXPRHTJWVLAGBVOEMPFIGAZNKZRALYUSGCHEKGXDPSXV");

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
    msg.setTimeStamp(0.504123091294);
    msg.setSource(33021U);
    msg.setSourceEntity(129U);
    msg.setDestination(59160U);
    msg.setDestinationEntity(128U);
    msg.name.assign("IBUDRHKXTXOSXUEBJSUXERGIALEGCSQAFBVVHHJETNIVBSOBPQUYUWKJJAVHQPORNVMFMLPNRFIMESMYBMGDEQPWSIVBOUWNNFDFHJYMTHTJASAPTVQCVBOGZKLDHOLJEZKQEYOZDRHVPZVRCRXKYAOGXLWKPKDZBIGMHIPGLCDEUALQBXUZNCGZWHSYWFFOUCZCFWQAJRTKWWDTUDYINYLTKPMPNFEKJYRMNQRT");

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
    msg.setTimeStamp(0.0959484427943);
    msg.setSource(10986U);
    msg.setSourceEntity(215U);
    msg.setDestination(41841U);
    msg.setDestinationEntity(128U);
    msg.name.assign("EHNDLZPNAIXNZBKGRCHFWBQXSUPDKAPGQZZKSBCMPVPMSDLMFBTBVSCJUZYHDKRKEUCYHVRIBAUPLQIOONMKWAJOJSAGTTQCQRXFYWXFNBVUWIMSXJDGZROMWHMEVLLDFQMJDGLQCJIEMOJFAXIENWPUHATYJPAVKGYTWQOOEHWFYTJZTVROZSETUFVELYRLRDNKFGWRXGKIAHMZFDSQNVOB");

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
    msg.setTimeStamp(0.328033863692);
    msg.setSource(37224U);
    msg.setSourceEntity(203U);
    msg.setDestination(5893U);
    msg.setDestinationEntity(247U);
    msg.name.assign("DXWYDSYFCRHNVBXVSDZCDFBQATAAKNUAMYDHJWIRFLWBUKZGEOGMMTBPZRIVFRIIITYSQLKOGONDCJWNHNWZOESSPZMZNUGBRJUXLLGEBJTLZQDQXUSCHOLQMUHKIPBGEFNGXTCDJZIYCWBUCSHEFRQRXGPCTEJSAKLPTBUGDFGIERSPYKWCMKVLIPKJKMOZNAYHZXYXXAOSAXTVRWUHAVFWRHOPLV");

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
    msg.setTimeStamp(0.663675035697);
    msg.setSource(12809U);
    msg.setSourceEntity(90U);
    msg.setDestination(25321U);
    msg.setDestinationEntity(70U);
    msg.name.assign("QSMRLHUFXHAD");

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
    msg.setTimeStamp(0.722338003591);
    msg.setSource(21277U);
    msg.setSourceEntity(6U);
    msg.setDestination(42781U);
    msg.setDestinationEntity(48U);
    msg.name.assign("CQCJFBDJGXSTZMQHJQWZAHEFSEHSTEQLGIBMAUJMFUDWOJOEUUMGEGAKMQZMCWBBRICNHHPKNNYZPNQYEZEIDWTVTTJRVNQBSPLWGMVWYKKTHKICUGLQONQVDBLPOKPNYUXPYAEBRFRDYXUNSYIJIZMQMDWRLYZUMSILGAGSXXFOCLBTCLVRSFWPCGCXZDTSJRHARFCVVVAFPFAKUTHXBD");

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
    msg.setTimeStamp(0.713335395635);
    msg.setSource(33561U);
    msg.setSourceEntity(94U);
    msg.setDestination(62123U);
    msg.setDestinationEntity(206U);
    msg.type = 52U;
    msg.error.assign("JGDGDDZKZDUVSWELKTQODEVGCCLFGJSWMPWTIALZRBIOLAUGUAXUSMOPJHPPTXENTZKFBCBBBRHCMVNCHMAEXQHMNVRHUMNORKPZQQEZURMTUDPAYBYBVQUYBGMJBNWDYVINREQQICNGIDOJVGPLXZPQTPWCLCAW");

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
    msg.setTimeStamp(0.691884855085);
    msg.setSource(36299U);
    msg.setSourceEntity(220U);
    msg.setDestination(27233U);
    msg.setDestinationEntity(198U);
    msg.type = 245U;
    msg.error.assign("UETRWBJCCKMDDYHWCOSMJGNJDROWOBSKOXFXWHYBKYBHRROTFQKXZZPKMGOKQKUUKGGQNJRTNZVAWAAHAVYPPYBLQJPLTEVBLAWMCNXVF");

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
    msg.setTimeStamp(0.851588560819);
    msg.setSource(33868U);
    msg.setSourceEntity(110U);
    msg.setDestination(14379U);
    msg.setDestinationEntity(152U);
    msg.type = 124U;
    msg.error.assign("OUYAASJIUYCBKBSDCSQFNQLZXCMWCHVCTMNBTLNRWGPATPZJPBVTEOCNUELGWHRDUDPLOCAKJKBFNQSERDRFRMVUA");

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
    msg.setTimeStamp(0.735819860898);
    msg.setSource(19487U);
    msg.setSourceEntity(191U);
    msg.setDestination(7493U);
    msg.setDestinationEntity(254U);
    msg.seq = 45190U;
    msg.sys_dst.assign("WHBSXIBMSCPIENMQXHIKHNPVHVZOYGHVDYVMAULXIUUKXWFQXIWTZOGMSFDAVOUGCZVBNGGKUKDPCUOJYDMSITQAZBKPTJXGWFWMEXLLAJRYKISS");
    msg.flags = 9U;
    const char tmp_msg_0[] = {-82, -31, -75, -48, 83, -30, 1, -100, 93, -52, 77, 96, -50, -1, 5, 121, -103, 14, 93, 41, 58, 74, -84, 117, 45, 126, -51, -128, 110, -97, -46, -108, -125, 45, -75, 67, -3, -92, -92, -68, -49, -118, 8, -17, -49, -64, 75, -22, -26, 90, 39, 41, -67, -101, 100, 107, -32, 32, -47, 102, 81, -30, 14, 82, -28, 1, -114, 8};
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
    msg.setTimeStamp(0.0134897652967);
    msg.setSource(12382U);
    msg.setSourceEntity(163U);
    msg.setDestination(5115U);
    msg.setDestinationEntity(154U);
    msg.seq = 19761U;
    msg.sys_dst.assign("OMSSZKXKYTFIZMCSLJVCJTLNOXCPJJU");
    msg.flags = 11U;
    const char tmp_msg_0[] = {-99, -65, -99, -126, -79, 105, -79, -51, 0, 43, -109, -28, 116, 77, 56, 83, -116, 15, 32, 58, -61, 111, -83, -88, 22, -119, -1, -56, -10, 76, 3, -112, -112, 88, 122, 93, 122, 19, -112, 87, -19, 115, -82, 21, 83, -86, -23, 100, -88, -35, -60, 94, 125, 111, -90, -31, -12, 30, -126, 85, -95, 69, 8, 126, 44, -75, -97, -82, 74, -2, 52, 91, -84, -9, 40, 92, -3, -1, 95, 112, 95, -103, -125, -30, 83, 89, 97, 70, -1, -65, -127, -55, 63, 102, -107, 61, -68, -63, 22, 38, -40, -2, 30, -93, 122, 86, 86, -117, -26, 19, 80, -107, -82, 23, -104, -74, -123, 54, 51, 105, -26, 62, -5, -111, 87, -9, 116, 114, 36, -47, -109, 1, 81, 73, -87, 33, 84, -75, -82, 96, -67, 70, -83, -78, -90, 100, 61, -77, -71, 75, 63, -80, -91, -96, -50, -57, -108, 84, -40, 25, -51, -38, 124, -92, 16, -75, -73};
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
    msg.setTimeStamp(0.407918006924);
    msg.setSource(34637U);
    msg.setSourceEntity(34U);
    msg.setDestination(34898U);
    msg.setDestinationEntity(53U);
    msg.seq = 37215U;
    msg.sys_dst.assign("FZVEYPNGMLFVJHXSDNYKPISTRGXFEMQTGIRVYFJMLLYIOZMABDGQHEGPTAES");
    msg.flags = 61U;
    const char tmp_msg_0[] = {81, 97, -92, -19, -71, -87, -53, -30, 74, 53, 86, -105, -62, -56, 72};
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
    msg.setTimeStamp(0.600420462674);
    msg.setSource(42489U);
    msg.setSourceEntity(220U);
    msg.setDestination(62834U);
    msg.setDestinationEntity(176U);
    msg.sys_src.assign("WXQHPADFGHOPNRRISGAAZBBUQWLDGZVDATQHNFRYICXTVKJNOOQPDOEATXEUNIQFDCUMRXJUYWSOFEXLJEASXVEHBTGIQWNNBXQSKIIBMENS");
    msg.sys_dst.assign("ZYJCWNJGVSABEGFPCKBOXPKDIPARYOWJLSMYAMXDQJWHJMYTISJHATOAFSGUEHXJNQWAPDECJRILDWTNACVSHFRUVBDKWHQPDZGBYTCWFCZVLUIJGYLKTURRIWBGPGUNTUNVRUQQEGHXCZQHRBLITFSDZZHTZXSVPXAYWMKLOZFUPMLKKISMTIRWUDSMNCY");
    msg.flags = 213U;
    const char tmp_msg_0[] = {-107, 31, 22, -109, 115, -44, 70, -107, -25, -52, 53, -12, -116, -29, -6, -1, 35, 16, -54, 68, -124, -35, -12, -1, -47, 1, 109, -34, 65, 48, 114, 101, -95, -94, -75, 18, -92, -113, -33, -119, 21, -16, 86, -73, -3, -59, 34, -124, -8};
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
    msg.setTimeStamp(0.167666135899);
    msg.setSource(59696U);
    msg.setSourceEntity(197U);
    msg.setDestination(8178U);
    msg.setDestinationEntity(246U);
    msg.sys_src.assign("LMFDUZORSHWZMPDGEUDWIFTYMCFRSOLYZHQRDGCDVLODJESUWYAFKPBZWEWYKKUJMQPPGYMQZTASXXHWRPTEIGMUCWYTEVXHSDAZWBFAXIEANJPJOQISKVCGHLWKCLABKJJFIHFOHRZQRSSSIVUNXNITHMZEHNTYLGGUONVCBBTTPBGRNQXPEPAEXLIIBNONQMLBUXJLAODFKGRCRENKMAVISCVBKJXPYFDCUTQBVMVROA");
    msg.sys_dst.assign("ZREZNVQYNKTKQBKZCQPDUIERVJHWFHFOOVPKKXMPCVQELMLDPMUOUXXAXAOAWEWAJUFTKMNWJPTDLDJPTNNRUCGVEGJDRHPPYYVWCHNNCIWHLJKVARTYZHMVKCZBEBRFZJIAROLBNEMLIKGBRUFAMGTZSKVGCWPCBIMJTVFIDFSXYFEHTSZYRGUOEYQJAQDNW");
    msg.flags = 65U;
    const char tmp_msg_0[] = {54, -83, 34, 54, -2, 81, -103, 119, 51, -16, 79, -69, 75, -60, -29, -93, 55, -73, -81, -51, -1, -91, -4, -117, 5, 113, 102, 55, 9, 20, -125, -57, -8, -103, -103, 17, 43, -52, -110, 43, 85, 89, -126, 70, 78, 111, -104, 77, 28, -38, 92, -28, -121, -34, -114, -29, 65, -50, 71, -25, -68, 67, -36, 67, 6, -32, 90, -119, -59, -22, 75, -127, -61, 12, 1, 105, -117, -126, 43, 19, -2, 14, -10, 103, 109, -55, -28, -85, -16, -88, 54, 84, -81, 39, -115, 56, -58, -1, 111, 48, -23, 28, -49, 94, -71, -43, 110, -36, 123, 19, 76, 20, 33, -86, 9, -71, 72, 47, -98, -35, 51, 117, -33, 16, 13, 38, 125, 125, 79, -7, 72, 40, -117, -26, 67, -49, 9, -19, 4, -113, -107, -35, -12, -108, -115, 95, -114, 71, 34, 78, 69, -40, -7, 106, -67};
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
    msg.setTimeStamp(0.0699301690663);
    msg.setSource(38522U);
    msg.setSourceEntity(74U);
    msg.setDestination(3864U);
    msg.setDestinationEntity(197U);
    msg.sys_src.assign("JBSYJJGEHPYQDTJAQYVSXWMDANSUSQUEBRYRTVFAIOTYDIBWZMLICIVFLGBGUEHDEJHLWEGUNCJVHRLUZAPBSFLBJOHZMKTXXIOQLZZORDPTWNRDFQBCQYFDMHNVCPSPSLYPXYICIKDUCCNEPUJMLLMOHKAIROXBHFUQWKKXGROEMQFVYRZLON");
    msg.sys_dst.assign("PUXTGHFGLOOHCXVLIWISCSRZTERLFFQQAXLLHERHWTCNTCGYBNIKAPXMWRUZFVTUVDQNFOBTTBDPJMYIXPIWDPJAXLGDOBOWYOMFBYIAEOYMIYKKEXJXYBXGKZZZEGUYMCFSPZRSVFIZNIKLBPLAQQUHZNDOPYUQVSEHKLRCBWADASVSNCMUJICMHGDRMNWCJXHEOCZBLHESKRTVJQJJURTAVNQGDQDNWKKVGZOJFMYJGSAUQAEFVKRN");
    msg.flags = 136U;
    const char tmp_msg_0[] = {-118, 58, 57, 21, 9, -64, -42, 59, 70, 126, -72, 34, -126, 94, 39, 112, -22, 39, -94, 73, 50, -91, 123, -10, -62, -104, 126, 31, 115, -90, -80, -10, -63, 98, 108, -59, 80, 101, 58, -51, 122, -125, 1, -43, 68, 48, 122, -119, 5, -75, 67, 63, -15, 48, -16, -122, 60, 11, 109, -28, -19, -88, -66, -66, -35, 117, 117, 85, 56, -20, 7, -19, -69, -68, -67, 23, 48, -52, 71, 88, -35, -6, 82, -32, 80, -3, -11, 124, -61, 122, 102, 8, 32, -59, 63, 99, -97, 28, -30, -119, 29, -32, 35, -44, -59, -110, 46, -60, 85, -57, -124, -40, 26, 105, -26, -26, 38, -64, -32, -80, -49, -119, 58, -37, -64, -67, -59, 3, -110, 78, 53, -122, 118, -105, -31, -101, -97, -62, 13, -99, 58};
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
    msg.setTimeStamp(0.0805197372232);
    msg.setSource(44396U);
    msg.setSourceEntity(253U);
    msg.setDestination(4181U);
    msg.setDestinationEntity(205U);
    msg.seq = 46505U;
    msg.value = 87U;
    msg.error.assign("XNBFCEKRBKBITLJFGWIDSIFVAUODKMDLGLDXYJVUXRTYZUMPCSXTAFSUARMHUSHFGNIJCHTHMBFDRWNLCSIXBNVQNCQOHEFZHIMBANJOLBOVXCMVBFNEMAFU");

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
    msg.setTimeStamp(0.640935131418);
    msg.setSource(26475U);
    msg.setSourceEntity(4U);
    msg.setDestination(297U);
    msg.setDestinationEntity(53U);
    msg.seq = 8929U;
    msg.value = 30U;
    msg.error.assign("XIOYKDXVEKOQCQWJJWUEUUPVXLNMQNPSTNFYGXGTGYULFHRPLIZWBUJDBWECMVQBBYIEHCFZQQJYEOETLRZWIGJTTHCTNMRLGMVFWYVLDCNFCOASJPBGCZMMCVSKMSKBZGYBHSSRWWYKHRQZRJLZHKJUBLXQADMFAIFEKOLBPXNVDAEHDAHVJXIWRCAYQYQNTDPJIPD");

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
    msg.setTimeStamp(0.955901986718);
    msg.setSource(49932U);
    msg.setSourceEntity(54U);
    msg.setDestination(44608U);
    msg.setDestinationEntity(201U);
    msg.seq = 4655U;
    msg.value = 100U;
    msg.error.assign("ZJVRUDQCKYGDHBGOCNCBAHTVAVHSFPVUIWMIKAWFWWMEAHYUSTSJOLRTUDETUNRVIKESMTWRIYJOOTPYHOAYJVCWRTQGCEMBGUUWZFBXKRPFYNDIDYXINOUVRVNXXMPLMGSDUKDIHEXLKACIUBYWOQRZWVGLEBGIZMPHLGQWAEZLGPPN");

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
    msg.setTimeStamp(0.167155057024);
    msg.setSource(2679U);
    msg.setSourceEntity(188U);
    msg.setDestination(7739U);
    msg.setDestinationEntity(32U);
    msg.seq = 14402U;
    msg.sys.assign("IADJKYURBTVZDOGKJHXNTOZZRWTIYYZZMTGAJGPYSIHXOPNGIBHLVUMZXKYQSCPTQLALKUNDPCCKMEKXXPKSOGVFPUBWWBVOIEBCHMTBYTKCHWNRBXFEBQMXODQRLNUJZPUKLCRGSFHZ");
    msg.value = 0.946927368018;

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
    msg.setTimeStamp(0.690390465928);
    msg.setSource(14137U);
    msg.setSourceEntity(229U);
    msg.setDestination(25312U);
    msg.setDestinationEntity(113U);
    msg.seq = 1614U;
    msg.sys.assign("RIXWNBURXQCRJHZCZHRCJSFGGPOGPY");
    msg.value = 0.971530689883;

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
    msg.setTimeStamp(0.898534568074);
    msg.setSource(10235U);
    msg.setSourceEntity(113U);
    msg.setDestination(59563U);
    msg.setDestinationEntity(242U);
    msg.seq = 7041U;
    msg.sys.assign("KQUJKBIOSEQUNPLIXRFGJSAOHREBPLVKBGLHPNTPWWSDTAFJEKRWAVTDM");
    msg.value = 0.473277605025;

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
    msg.setTimeStamp(0.385900702137);
    msg.setSource(9828U);
    msg.setSourceEntity(94U);
    msg.setDestination(57495U);
    msg.setDestinationEntity(80U);
    msg.action = 90U;
    msg.longain = 0.510599476237;
    msg.latgain = 0.946481535827;
    msg.bondthick = 3257745559U;
    msg.leadgain = 0.817318345853;
    msg.deconflgain = 0.742513640512;

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
    msg.setTimeStamp(0.876752081514);
    msg.setSource(56807U);
    msg.setSourceEntity(159U);
    msg.setDestination(19601U);
    msg.setDestinationEntity(229U);
    msg.action = 114U;
    msg.longain = 0.154930858839;
    msg.latgain = 0.458700926743;
    msg.bondthick = 1263337934U;
    msg.leadgain = 0.216547785816;
    msg.deconflgain = 0.0307899176812;

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
    msg.setTimeStamp(0.188846421066);
    msg.setSource(2348U);
    msg.setSourceEntity(7U);
    msg.setDestination(4976U);
    msg.setDestinationEntity(129U);
    msg.action = 83U;
    msg.longain = 0.126038898807;
    msg.latgain = 0.631041352659;
    msg.bondthick = 2991987545U;
    msg.leadgain = 0.0716358551491;
    msg.deconflgain = 0.359204043363;

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
    msg.setTimeStamp(0.79625841271);
    msg.setSource(9681U);
    msg.setSourceEntity(238U);
    msg.setDestination(22760U);
    msg.setDestinationEntity(5U);
    msg.err_mean = 0.0501615533707;
    msg.dist_min_abs = 0.174722433098;
    msg.dist_min_mean = 0.0241439967027;

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
    msg.setTimeStamp(0.106440940166);
    msg.setSource(53896U);
    msg.setSourceEntity(232U);
    msg.setDestination(65189U);
    msg.setDestinationEntity(222U);
    msg.err_mean = 0.473454058313;
    msg.dist_min_abs = 0.783364029743;
    msg.dist_min_mean = 0.116637940593;

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
    msg.setTimeStamp(0.389162745169);
    msg.setSource(259U);
    msg.setSourceEntity(15U);
    msg.setDestination(38880U);
    msg.setDestinationEntity(144U);
    msg.err_mean = 0.00632111565336;
    msg.dist_min_abs = 0.867924400709;
    msg.dist_min_mean = 0.255160312213;

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
    msg.setTimeStamp(0.521084052078);
    msg.setSource(35299U);
    msg.setSourceEntity(228U);
    msg.setDestination(51655U);
    msg.setDestinationEntity(94U);
    msg.action = 253U;
    msg.lon_gain = 0.646139248596;
    msg.lat_gain = 0.796090614634;
    msg.bond_thick = 0.10888875793;
    msg.lead_gain = 0.142177740359;
    msg.deconfl_gain = 0.682549963672;
    msg.accel_switch_gain = 0.310263428938;
    msg.safe_dist = 0.174367066522;
    msg.deconflict_offset = 0.768337833423;
    msg.accel_safe_margin = 0.968303549076;
    msg.accel_lim_x = 0.976761510907;

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
    msg.setTimeStamp(0.930332072979);
    msg.setSource(53869U);
    msg.setSourceEntity(204U);
    msg.setDestination(32202U);
    msg.setDestinationEntity(35U);
    msg.action = 67U;
    msg.lon_gain = 0.955194669443;
    msg.lat_gain = 0.819219427439;
    msg.bond_thick = 0.692248280001;
    msg.lead_gain = 0.98456127503;
    msg.deconfl_gain = 0.917197583424;
    msg.accel_switch_gain = 0.935295860947;
    msg.safe_dist = 0.241266389071;
    msg.deconflict_offset = 0.487326614777;
    msg.accel_safe_margin = 0.529043565712;
    msg.accel_lim_x = 0.114085099696;

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
    msg.setTimeStamp(0.287840830578);
    msg.setSource(61583U);
    msg.setSourceEntity(51U);
    msg.setDestination(49868U);
    msg.setDestinationEntity(40U);
    msg.action = 206U;
    msg.lon_gain = 0.149090834659;
    msg.lat_gain = 0.292602707402;
    msg.bond_thick = 0.260324817582;
    msg.lead_gain = 0.0458489341102;
    msg.deconfl_gain = 0.667311056843;
    msg.accel_switch_gain = 0.381311779702;
    msg.safe_dist = 0.267926218505;
    msg.deconflict_offset = 0.21041266087;
    msg.accel_safe_margin = 0.465380697589;
    msg.accel_lim_x = 0.455636453627;

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
    msg.setTimeStamp(0.167812809358);
    msg.setSource(14934U);
    msg.setSourceEntity(77U);
    msg.setDestination(2085U);
    msg.setDestinationEntity(4U);
    msg.type = 173U;
    msg.op = 172U;
    msg.err_mean = 0.252550044516;
    msg.dist_min_abs = 0.326337911246;
    msg.dist_min_mean = 0.172075139865;
    msg.roll_rate_mean = 0.430387625853;
    msg.time = 0.353483169958;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 151U;
    tmp_msg_0.lon_gain = 0.234240865384;
    tmp_msg_0.lat_gain = 0.851478222444;
    tmp_msg_0.bond_thick = 0.687220114176;
    tmp_msg_0.lead_gain = 0.21404815146;
    tmp_msg_0.deconfl_gain = 0.0911826992657;
    tmp_msg_0.accel_switch_gain = 0.131191677213;
    tmp_msg_0.safe_dist = 0.0015886773454;
    tmp_msg_0.deconflict_offset = 0.677991100279;
    tmp_msg_0.accel_safe_margin = 0.388208295515;
    tmp_msg_0.accel_lim_x = 0.920067233093;
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
    msg.setTimeStamp(0.612017810051);
    msg.setSource(63029U);
    msg.setSourceEntity(0U);
    msg.setDestination(44667U);
    msg.setDestinationEntity(114U);
    msg.type = 184U;
    msg.op = 228U;
    msg.err_mean = 0.840143489245;
    msg.dist_min_abs = 0.66588490002;
    msg.dist_min_mean = 0.504374550655;
    msg.roll_rate_mean = 0.507251621276;
    msg.time = 0.425886942717;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 118U;
    tmp_msg_0.lon_gain = 0.188193245533;
    tmp_msg_0.lat_gain = 0.582313464527;
    tmp_msg_0.bond_thick = 0.407934483524;
    tmp_msg_0.lead_gain = 0.436127288754;
    tmp_msg_0.deconfl_gain = 0.0171712638108;
    tmp_msg_0.accel_switch_gain = 0.500507727748;
    tmp_msg_0.safe_dist = 0.577253258795;
    tmp_msg_0.deconflict_offset = 0.395544120846;
    tmp_msg_0.accel_safe_margin = 0.935211000023;
    tmp_msg_0.accel_lim_x = 0.795939302374;
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
    msg.setTimeStamp(0.497048518938);
    msg.setSource(30407U);
    msg.setSourceEntity(33U);
    msg.setDestination(35512U);
    msg.setDestinationEntity(193U);
    msg.type = 104U;
    msg.op = 110U;
    msg.err_mean = 0.777875964329;
    msg.dist_min_abs = 0.86048947954;
    msg.dist_min_mean = 0.376517329193;
    msg.roll_rate_mean = 0.894152622854;
    msg.time = 0.87562930748;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 118U;
    tmp_msg_0.lon_gain = 0.815469781217;
    tmp_msg_0.lat_gain = 0.981157030579;
    tmp_msg_0.bond_thick = 0.154137817293;
    tmp_msg_0.lead_gain = 0.66613310341;
    tmp_msg_0.deconfl_gain = 0.337831558841;
    tmp_msg_0.accel_switch_gain = 0.597636768335;
    tmp_msg_0.safe_dist = 0.979378136559;
    tmp_msg_0.deconflict_offset = 0.855186159195;
    tmp_msg_0.accel_safe_margin = 0.803419876579;
    tmp_msg_0.accel_lim_x = 0.56354168189;
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
    msg.setTimeStamp(0.163331299127);
    msg.setSource(56310U);
    msg.setSourceEntity(26U);
    msg.setDestination(10970U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.953279055512;
    msg.lon = 0.110788481581;
    msg.eta = 2198366856U;
    msg.duration = 9801U;

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
    msg.setTimeStamp(0.806831747404);
    msg.setSource(16380U);
    msg.setSourceEntity(222U);
    msg.setDestination(62423U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.213205338722;
    msg.lon = 0.0413914824504;
    msg.eta = 3458749421U;
    msg.duration = 43826U;

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
    msg.setTimeStamp(0.0974279727949);
    msg.setSource(19912U);
    msg.setSourceEntity(239U);
    msg.setDestination(56940U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.473055635682;
    msg.lon = 0.368255307685;
    msg.eta = 3867069594U;
    msg.duration = 46055U;

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
    msg.setTimeStamp(0.191042590005);
    msg.setSource(56749U);
    msg.setSourceEntity(0U);
    msg.setDestination(16659U);
    msg.setDestinationEntity(49U);
    msg.plan_id = 48408U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.392364036;
    tmp_msg_0.lon = 0.942159517749;
    tmp_msg_0.eta = 325060767U;
    tmp_msg_0.duration = 19813U;
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
    msg.setTimeStamp(0.495199290054);
    msg.setSource(36908U);
    msg.setSourceEntity(46U);
    msg.setDestination(19380U);
    msg.setDestinationEntity(35U);
    msg.plan_id = 6436U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.320946015456;
    tmp_msg_0.lon = 0.933499894255;
    tmp_msg_0.eta = 1039702940U;
    tmp_msg_0.duration = 24349U;
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
    msg.setTimeStamp(0.91902915453);
    msg.setSource(64131U);
    msg.setSourceEntity(238U);
    msg.setDestination(48171U);
    msg.setDestinationEntity(244U);
    msg.plan_id = 51459U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.572913273896;
    tmp_msg_0.lon = 0.705718559647;
    tmp_msg_0.eta = 3249561048U;
    tmp_msg_0.duration = 33769U;
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
    msg.setTimeStamp(0.808525558794);
    msg.setSource(41366U);
    msg.setSourceEntity(146U);
    msg.setDestination(55033U);
    msg.setDestinationEntity(7U);
    msg.type = 16U;
    msg.command = 174U;
    msg.settings.assign("LPNINQVTXZCQBBEPFVJVYBLKUENLXTHTYRJSGIUBZULQY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 33532U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.981466164707;
    tmp_tmp_msg_0_0.lon = 0.0689985578583;
    tmp_tmp_msg_0_0.eta = 1175150167U;
    tmp_tmp_msg_0_0.duration = 53838U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NRRJNGITIGALDRBBVPHADMXYCGMAVXHRIFOKPSMXKIMBYHBXFLXXNJVCUXPIS");

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
    msg.setTimeStamp(0.549781821534);
    msg.setSource(57061U);
    msg.setSourceEntity(6U);
    msg.setDestination(41890U);
    msg.setDestinationEntity(51U);
    msg.type = 64U;
    msg.command = 148U;
    msg.settings.assign("ZMIPXHEDYTLZJIGITHRFJNALZGGLECTDMYFKQNOIRJWKCWXBDHCBANQLJMCEYFNLFIRYVOFYCHABJEAOSDMKVWGXEGLBTJESIFDHXPYPSCLZOYSQNVRWTBNGKNYSVPVZQTPGEIEYRZKWUUOIALUUTMMRQXRUWTUWXDSZ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 40588U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("QTCFFSPNHELCXMWZPKWSQBXEOHXHRGTX");

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
    msg.setTimeStamp(0.0993765413697);
    msg.setSource(34752U);
    msg.setSourceEntity(166U);
    msg.setDestination(18850U);
    msg.setDestinationEntity(227U);
    msg.type = 21U;
    msg.command = 159U;
    msg.settings.assign("DTTESOATSHYHWINTVQPKOFBOYMYWFABBRJHIFIELVXDRSPRRPVGVGWFJIGSETNHFQJAWPMPPOKYMGKXZOACDCXKUJIWQDKEDBBEFWSLWZZADOXSKUZNENKHAUFMZIALPRXWAJLGMVWTDGXBCULUJMPOBZCYULYPKTZXNCVMTAXQGKDZTNCYCUOFMHZACYMJSCVRXILQDXQHISUIRIQHLLNPQRNVOEJBTJYLBFSCDHOUNBWGURVV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 16984U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.565163106165;
    tmp_tmp_msg_0_0.lon = 0.122334147803;
    tmp_tmp_msg_0_0.eta = 1383242441U;
    tmp_tmp_msg_0_0.duration = 52969U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("REAEAUNLSBNOHDULLTFMZMBDYPAP");

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
    msg.setTimeStamp(0.97838081879);
    msg.setSource(48252U);
    msg.setSourceEntity(242U);
    msg.setDestination(58887U);
    msg.setDestinationEntity(50U);
    msg.state = 114U;
    msg.plan_id = 4376U;
    msg.wpt_id = 206U;
    msg.settings_chk = 64636U;

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
    msg.setTimeStamp(0.00476812755256);
    msg.setSource(41354U);
    msg.setSourceEntity(53U);
    msg.setDestination(19417U);
    msg.setDestinationEntity(198U);
    msg.state = 124U;
    msg.plan_id = 7432U;
    msg.wpt_id = 32U;
    msg.settings_chk = 59050U;

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
    msg.setTimeStamp(0.972744010903);
    msg.setSource(23686U);
    msg.setSourceEntity(147U);
    msg.setDestination(56717U);
    msg.setDestinationEntity(52U);
    msg.state = 216U;
    msg.plan_id = 63423U;
    msg.wpt_id = 199U;
    msg.settings_chk = 61201U;

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
    msg.setTimeStamp(0.217405867029);
    msg.setSource(29108U);
    msg.setSourceEntity(79U);
    msg.setDestination(59897U);
    msg.setDestinationEntity(125U);
    msg.uid = 7U;
    msg.frag_number = 36U;
    msg.num_frags = 208U;
    const char tmp_msg_0[] = {85, 26, 42, -126, 122, -11, 108, -49, 1, 60, 87, -103, -30, -107, 48, 118, 74, 94, 48, -105, 84, 74, -80, -119, -71, -90, 19, -9, 58, -117, 10, 84, 87, -64, -66, -6, -65, 28, 33, -118, 94, -54, 86, 71, 14, 8, -67, 100, -43, 33, 9, 81, -37, 92, -16, 40, 116, -103, -55, 107, 103, 10, 122, 31, -9, -81, -70, 5, -84, -11, 22, -101, -81, -123, 23, 85, 114, 69, 45, -52, -82, 69, -49, 78, 12, 55, -27, 4, -27, -26, -78, 92, -75, -108, -115, -74, 60, -47, -14, -15, 27, -109, 99, -52, 48, 99, -114, -69, 91, -10, -60, 59, 122, 76, -118, 85, -74, -54, 81, -84, 44, -54, -68, 31, 75, -34, 111, 40, 97, 98, 76, -53, -77, 89, -54, -92, 51, 70, 24, -128, -66, -4, -80, 68, 61, -32, -87, 1, -114, 98, -80, 46, 37, -9, 21, 88, -103, -123, -112, -127, -13, 25, 83, 123, 30, 57, -18, -92, 63, 109, -2, 38, 68, -79, -30, -17, -118, 108, -87, 104, -18, -95, 64, -19, -81, 40, -122, 39, 78, -100, -68, -27, -88, -89, -20, 26, 15, -84, 18, 49, -103, -71, 110, 12, 62, -97, 107, 11, -85};
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
    msg.setTimeStamp(0.150512623168);
    msg.setSource(57048U);
    msg.setSourceEntity(39U);
    msg.setDestination(34547U);
    msg.setDestinationEntity(232U);
    msg.uid = 182U;
    msg.frag_number = 71U;
    msg.num_frags = 87U;
    const char tmp_msg_0[] = {117, -115, -85, -2, -92, 115, 111, -88, -92, -81, -7, 76, -1, -78, -34, -39, -45, -122, -59, 8, 61, -21, 85, 92, -121, 49, -11, -84, 7, -92, -40, 92, 109, 112, -102, 66, -128, 9, -43, -26, -52, -115, 115, -44, 77, -126, 42, 106, 124, -27, -117, 70, -73, -75, -74, 84, 82, -86, 98, 7, -34, 1, -30, 117, 24, 70, 55, 73, 117, -45, -62, -34, 124, -89, 85, 10, -97, 46, 107, -124, -61, -44, -40, 34, 82, -97, -56, -16, -89, -105, 11, -90, -1, -92, 89, 26, 23, 23, 76, -16, 26, -79, -14, -7, -58, 86, 108, 19, 34, 34, 29, -17, -42, 99, 75, -41, -11, -22, -102, 10, 124, 59, -113, 0, 3, -50, 113, 32, 18, -101, -84, -18, -43, -87, 111, 29, 97, 91, -96, -66, -116, -74, -109, -127, -16, 89, 117, 33, -17, -52, -50, 97, -77, 28, 71, -74, -82, 123, -87, -62, 10, -18, 72, -116, -15, -85, -19, -20, -96, 49, -23, -98, 79, 16, -23, 85, 20, -50, 30, -120, -86, -99, -111, -100, -83, 103, 63, -15, 3, 49, -34, 28, -38, -64, 60, -70, -103, 35, -50, 96};
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
    msg.setTimeStamp(0.907777025015);
    msg.setSource(27440U);
    msg.setSourceEntity(91U);
    msg.setDestination(39363U);
    msg.setDestinationEntity(6U);
    msg.uid = 22U;
    msg.frag_number = 195U;
    msg.num_frags = 48U;
    const char tmp_msg_0[] = {-35, 103, 108, -103, -79, 15, -76, -42, -70, -104, -67, -102, -17, -112};
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
    msg.setTimeStamp(0.280971057951);
    msg.setSource(16251U);
    msg.setSourceEntity(84U);
    msg.setDestination(61502U);
    msg.setDestinationEntity(52U);
    msg.content_type.assign("XMLMWHDSRYSDYCKVBDLNDPMIJIWYJUELHAVQNWQCOHVTJEOWTAFXHMGXPLQFTUGKECSZCVYUBNTPTYJDFSUAUINMEPXPGBAVSKPSVZBKNYE");
    const char tmp_msg_0[] = {-110, 0, 15, 113, 49, 48, 54, 15, -117, -63, -125, 88, -36, 44, 49, 110, -118, 3, 88, -10, 108, -108, 37, -49, -77, -97, 91, 116, 37, 37, -98, 121, -43, 18, 60, 119, -10, 30, 52, 0, 14, -8, 43, -58, 77, 122, -47, 88, -115, -78, -128, 86, 10, 92, -111, -8, 53, -104, 106, -82, -40, -108, -19, -11, -61, -31, 38, -99, 80, -102, -46, 18, 58, -96, 12, -33, -125, 85, 28, -123, -35, 17, -127, -99, -62, -49, -115, -60, -56, 12, 27, 1, 117, 122, 110, 99, 57, 36, -97, -31, -52, 47, 82, 81, -77, 115, -93, -94, -120, -105, -4, 86, 122, -97, -39, -119, -78, 28, 122, 102, -81, 21, 71, -108, -70, -58, 51, 115, -1, -20, -112, -41, 57, 39, -51, -115, -29, 116, 91, 78, -5, -30, -42, -5, 95, -60, -77, -8, -5, 23, 7, 14, 57, -26, 117, 60, -64, -97, 93, -43, -96, -94, 1, -75, -95, -30, 101, 66};
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
    msg.setTimeStamp(0.212910345199);
    msg.setSource(60356U);
    msg.setSourceEntity(90U);
    msg.setDestination(22486U);
    msg.setDestinationEntity(174U);
    msg.content_type.assign("OUTVCNDYZFOZNISBDIMJZCJVKYTSLIRGWKXHXPQFPZEYVQUWKPGUEJAORNBSEMLSDZXDFHDUKQMQDDXNOWTISVPXXWBE");
    const char tmp_msg_0[] = {-111, 104, 32, 95, 43, -103, -70, -18, -27, -10, -100, -9, 72, -51, -5, -87, -9, -56, -78, -23, 54, 13, 77, -3, -44, 123, -111, 52, 24, 121, 55, 55, 44, 42, 27, -45, -88, -84, 53};
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
    msg.setTimeStamp(0.263704328002);
    msg.setSource(29245U);
    msg.setSourceEntity(122U);
    msg.setDestination(51462U);
    msg.setDestinationEntity(10U);
    msg.content_type.assign("HTVKGHLPTMUQCWZYBIECEPKFMIQNEMGXDQLNHRLKHLXNJASUUYYROFWATBVBS");
    const char tmp_msg_0[] = {73, -91, 9, -67, 21, 36, -52, -7, -80, -108, -23, -45, 73, 77, -9, 90, 123, 35, -6, -71, 72, 99, -74, -15, 59, -21, 105, -68, -60, -47, 125, 19, -69, 63, 25, 3, -25, -111, 29, 55, -105, -32, -84, 47, 106, 6, -115, -91, -64, -86, 121, 94, 29, 89, 114, -84, -26, -31, 106, 68, -108, -90, -87, -20, 85, 65, 83, 69, 124, -11, 63, 113, 1, 19, 75, 91, -12, -86, 44, 90, 1, -91, -123, -8, -29, 97, -44, -97, -13, 58, -69, -108, 72, 55, -124, -117, 63, 73, 34, 87, -13, 51, -95, 53, -91, -6, 123, 26, -12, -71, 97, -126, -53, 101, 22, 87, 88, 82, -31, -62, -125, 81, -95, -71, 5, -98, 96, 89, 55, -84, 117, 45, 43, -61, -67, -115, -62, -10, -36, -9, 0, -92, 46, -19, -96, -62, -53, 112, 123, -97, -36, 32, -17, 126, 87, -18, -44, -79, 28, 89, 27, -66, 90, 87, 114, -111, -76, -82, 99, 26, -102, -69, 50, 67, 20, -17, -5, -64, -118, 14, 48, -127, -100, -43, 25, -46, -99, -53, -18, -39, -89, 112, -83, -97, -2, -26, 97, 49, 32, -37, -11, -64, -118, 90, 85, 33, -2, 115, 74, 82, -67, 84, 23, -120, 44, -99, -92, 4, -75, 67, 96, -8, 15, -49, 94, 71, 6, 66};
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
    msg.setTimeStamp(0.324526514591);
    msg.setSource(49354U);
    msg.setSourceEntity(83U);
    msg.setDestination(21754U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.839264028456);
    msg.setSource(25263U);
    msg.setSourceEntity(228U);
    msg.setDestination(31447U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.685176769337);
    msg.setSource(22889U);
    msg.setSourceEntity(67U);
    msg.setDestination(24648U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.439489528137);
    msg.setSource(50580U);
    msg.setSourceEntity(116U);
    msg.setDestination(40025U);
    msg.setDestinationEntity(60U);
    msg.target = 21583U;
    msg.bearing = 0.43656312486;
    msg.elevation = 0.442110660127;

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
    msg.setTimeStamp(0.818809989238);
    msg.setSource(9411U);
    msg.setSourceEntity(25U);
    msg.setDestination(12961U);
    msg.setDestinationEntity(217U);
    msg.target = 63060U;
    msg.bearing = 0.729667292134;
    msg.elevation = 0.894935118011;

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
    msg.setTimeStamp(0.619355097052);
    msg.setSource(47389U);
    msg.setSourceEntity(21U);
    msg.setDestination(3391U);
    msg.setDestinationEntity(106U);
    msg.target = 7164U;
    msg.bearing = 0.849915857712;
    msg.elevation = 0.0996903312325;

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
    msg.setTimeStamp(0.26181790533);
    msg.setSource(12779U);
    msg.setSourceEntity(20U);
    msg.setDestination(4974U);
    msg.setDestinationEntity(151U);
    msg.target = 17509U;
    msg.x = 0.682793395903;
    msg.y = 0.117986322952;
    msg.z = 0.394084766434;

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
    msg.setTimeStamp(0.901809506719);
    msg.setSource(44607U);
    msg.setSourceEntity(156U);
    msg.setDestination(13068U);
    msg.setDestinationEntity(28U);
    msg.target = 33157U;
    msg.x = 0.858168354063;
    msg.y = 0.895439132684;
    msg.z = 0.213373555074;

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
    msg.setTimeStamp(0.0989180798592);
    msg.setSource(6128U);
    msg.setSourceEntity(23U);
    msg.setDestination(10563U);
    msg.setDestinationEntity(20U);
    msg.target = 2068U;
    msg.x = 0.245229083293;
    msg.y = 0.909784956688;
    msg.z = 0.351673869489;

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
    msg.setTimeStamp(0.891836654541);
    msg.setSource(33887U);
    msg.setSourceEntity(127U);
    msg.setDestination(13036U);
    msg.setDestinationEntity(110U);
    msg.target = 32852U;
    msg.lat = 0.732002159127;
    msg.lon = 0.652036561178;
    msg.z_units = 124U;
    msg.z = 0.261935780449;

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
    msg.setTimeStamp(0.671638056243);
    msg.setSource(14188U);
    msg.setSourceEntity(200U);
    msg.setDestination(52242U);
    msg.setDestinationEntity(163U);
    msg.target = 29455U;
    msg.lat = 0.969219455544;
    msg.lon = 0.952787770605;
    msg.z_units = 254U;
    msg.z = 0.51408321745;

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
    msg.setTimeStamp(0.535055688804);
    msg.setSource(29896U);
    msg.setSourceEntity(179U);
    msg.setDestination(44548U);
    msg.setDestinationEntity(253U);
    msg.target = 42858U;
    msg.lat = 0.0679130187813;
    msg.lon = 0.0376362213556;
    msg.z_units = 130U;
    msg.z = 0.44348235417;

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
    msg.setTimeStamp(0.047527542133);
    msg.setSource(7222U);
    msg.setSourceEntity(5U);
    msg.setDestination(27365U);
    msg.setDestinationEntity(171U);
    msg.locale.assign("ADRYTPKRTYNSSEVCJIEXMVUXIJFORWXKQCQZMBNHFPHTJUTNUOUKXHEWHPIGWNYHHAOGEXRCUISGOKBOGAEJJCCDRVUPYPTGBRTZFJFBPDPYSLEZXXFTAL");
    const char tmp_msg_0[] = {52, -85, -33, -114, -15, -99, 45, 66, 117, 83, 70, 41, -93, 57, -118, 100, 96, -65, 126, -119, -73, 48, -13, 71, -104, -84, -106, 90, -31, -119, -45, -10, -64, -114, -105, 72, 84, -88, -4, 36, -69, 114, -32, -41, 56, 63, 28, -6, -74, 29, -99, -63, 6, -27, 2, -26, -51, -127, 119, 34, -125, 25, -29, -44, 3, 24, 98, -83, -11, 43, 45, -93, -16, 33, 119, 41, -5, -22, -114, 20, 91, 63, 30, -72, -119, 7, -123, 71, -118, -37, 112, -89, 102, 1, 93, -111, 79, 8, 4, -21, -107, 31, 51, -84, 68, 96, 24, -39, 107, 89, 96, -51, -7, 88, 22, -126, 46, -75, 68, 112, -21, -93, 41, -16, 51, -105, 37, 77, 26, 24, -71, -29, 56, -14, 34, -110, 4, 77, -103, 13, -121, 74, -53, 50, 107, 62, 66, -99, -8, -31, -110, -64, -23, 74, -92, 97, -58, 9, -68, 1, -15, 41, 32, -4, -27, 114, 3, -111, 108, 33, 46, -65, 108, -5, 75, -24, -47, 67, 107, 59, 10, -62, 84, 49, -23, 67, 21, 41, 5, 42, -7, 66, -82, 112, 97, 75, 81, -46, 82, 55, -25, 94, 120, 54};
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
    msg.setTimeStamp(0.457911315517);
    msg.setSource(53653U);
    msg.setSourceEntity(68U);
    msg.setDestination(36295U);
    msg.setDestinationEntity(185U);
    msg.locale.assign("ZXWEZVRAYUILGOFTHAFRVULSFDRALLVKNROHJGYZAKUPBWTECBWCDMSSHUQNCLSJYQHIVXDKBBLEYASMKASYFTPGOKGLGGPAGQZENZVUDAFKPPVOC");
    const char tmp_msg_0[] = {77, 22, 9, 3, 54, -102, 121, 40, -73, 121, 14, 13, -88, -57, 67, 59, 58, 66, -1, 67, -99, -126, -13, 63, -81, -113, 80, 124, -9, 27, -24, -22, 53, 97, 104, 38, -19, 55, 33, -13, -121, -83, -105, -91, -40, 47, 82, 10, 102, 82, 59, -41, 23, -36, 42, 23, 91, -123, 62, 52, 82, 35, -80, -119, -107, 35, -100, 119, -12, -81, -9, 70, 126, 50, -53, -13, -8, -24, 102, -60, -102, 27, -38, -6, 79, 80, -16, 71, 96, 115, 35, 122, -102, -4, -23, 44, 70, -31, 84, 69, -48, -2, -37, 52, -106, 4, 66, -85, -104, -49, 28, -74, -111, -114, -72, 112, 40, -62, 41, -115, 49, -48, 96, 124, -106, 85, 60, 1, 16, 111, 43, -44, 92, 11, 97, -71, 91, 29, 94, 7, -64, 60, 50, -9, -43, -43, 93, -30, -70, -82, -94, -5, -18, -96, 109, -126, -16, 59, -22, 88, -22, -38, 73, 118, -109, -113, -6, 120, -84, -67, 18, 18, 116, -112, 115, 93, 6, 5, 26, 44, -110, 81, 34, -101, -75, 4, 74, 104, 113, 17, -16, -8, 104, 78, 72, -41, 81, -82, 125, -39, 19, -106, -114, -32, -78, -71, 10, -66, 47, -67, 67, 99, -104, -10, 50, -43, -93, -106, -85, 29, 94, -10, 111, -100, -41, -111, -87, 82, 36, 30, -34, -8, -36, 51, 107, -53, 88, 31, -5, -64, -9, -128, -29, -19, -36, -46, 103};
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
    msg.setTimeStamp(0.858486671478);
    msg.setSource(56989U);
    msg.setSourceEntity(21U);
    msg.setDestination(19733U);
    msg.setDestinationEntity(216U);
    msg.locale.assign("EZZPUDHBLRCSXQIDANJMEEBGKFTZVUBECMSHWXNFUGPBBVXCYWAPSEMLNDRRKRSGALMGALJMGAFZKDKNHJPATAIEIZHPIWPOVSQVJEQIPTOGTNKCRTJYJDKPFXKKCRLPXDEYEYXHJKTOHLCHWZATQVJMXYAWZDLUSGWHYYFYSMOFOOWWXRUDDZBUYBLMVNISBEYUQJCOLBPCILVMFFZCQINNWMXOTWVNFOGTRQQSXHCQOVGNAZ");
    const char tmp_msg_0[] = {76, -71, 101, 90, -7, -9, 40, 119, -43, -16, -72, 21, 64, 125, -44, 32, 85, 37, -69, 2, -45, -103, 13, 91, -28, -71, -71, 86, -48, -54, -128, 83, -24, -9, -102, -111, -92, -127, 74, -79, 48, -90, -33, -94, 89, 62, 94, -92, -22, 96, -81, -39, 108, 109, -73, 6, -8, -20, -36, 27, -94, 20, -15, -1, 12, 0, 109, 78, 40, -119, -2, 46, -93, -76, 92, 56, 11, -8, -10, -3, 10, 80, -89, -21, -128, 115, -46, -88};
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
    msg.setTimeStamp(0.662729648946);
    msg.setSource(6792U);
    msg.setSourceEntity(93U);
    msg.setDestination(60955U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.671213795645);
    msg.setSource(25683U);
    msg.setSourceEntity(187U);
    msg.setDestination(18434U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.641461570189);
    msg.setSource(16287U);
    msg.setSourceEntity(215U);
    msg.setDestination(54214U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.500322198198);
    msg.setSource(51564U);
    msg.setSourceEntity(220U);
    msg.setDestination(45479U);
    msg.setDestinationEntity(32U);
    msg.camid = 121U;
    msg.x = 28984U;
    msg.y = 18904U;

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
    msg.setTimeStamp(0.916250318229);
    msg.setSource(53221U);
    msg.setSourceEntity(99U);
    msg.setDestination(63626U);
    msg.setDestinationEntity(135U);
    msg.camid = 169U;
    msg.x = 17247U;
    msg.y = 5531U;

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
    msg.setTimeStamp(0.0928978256567);
    msg.setSource(25954U);
    msg.setSourceEntity(141U);
    msg.setDestination(16754U);
    msg.setDestinationEntity(152U);
    msg.camid = 196U;
    msg.x = 38277U;
    msg.y = 27867U;

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
    msg.setTimeStamp(0.155123995406);
    msg.setSource(51994U);
    msg.setSourceEntity(92U);
    msg.setDestination(60146U);
    msg.setDestinationEntity(25U);
    msg.camid = 180U;
    msg.x = 29477U;
    msg.y = 49285U;

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
    msg.setTimeStamp(0.173108825271);
    msg.setSource(29830U);
    msg.setSourceEntity(151U);
    msg.setDestination(40751U);
    msg.setDestinationEntity(5U);
    msg.camid = 16U;
    msg.x = 40961U;
    msg.y = 37480U;

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
    msg.setTimeStamp(0.60718088692);
    msg.setSource(16449U);
    msg.setSourceEntity(165U);
    msg.setDestination(55021U);
    msg.setDestinationEntity(247U);
    msg.camid = 4U;
    msg.x = 1690U;
    msg.y = 13105U;

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
    msg.setTimeStamp(0.589656952711);
    msg.setSource(11958U);
    msg.setSourceEntity(192U);
    msg.setDestination(10775U);
    msg.setDestinationEntity(247U);
    msg.tracking = 34U;
    msg.lat = 0.0209041006451;
    msg.lon = 0.443374836327;
    msg.x = 0.608317607898;
    msg.y = 0.863749659139;
    msg.z = 0.247373104173;

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
    msg.setTimeStamp(0.450445407932);
    msg.setSource(14963U);
    msg.setSourceEntity(122U);
    msg.setDestination(22881U);
    msg.setDestinationEntity(150U);
    msg.tracking = 69U;
    msg.lat = 0.268360274498;
    msg.lon = 0.576589245952;
    msg.x = 0.357271632514;
    msg.y = 0.597399986126;
    msg.z = 0.862642226737;

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
    msg.setTimeStamp(0.515316868713);
    msg.setSource(38374U);
    msg.setSourceEntity(104U);
    msg.setDestination(1546U);
    msg.setDestinationEntity(142U);
    msg.tracking = 157U;
    msg.lat = 0.939677999245;
    msg.lon = 0.117405289919;
    msg.x = 0.664092759377;
    msg.y = 0.501831421513;
    msg.z = 0.586131267366;

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
    msg.setTimeStamp(0.374952598809);
    msg.setSource(7693U);
    msg.setSourceEntity(44U);
    msg.setDestination(21636U);
    msg.setDestinationEntity(88U);
    msg.target.assign("RBJYBFDMOVZPHSMIMTVGIWMPBYUBDPIPKYVNDQSOMORLZNAXXHSLUJXAFAYFGHQKKHZOBWAVTEUVWWXXNLQWQXFITCCBYPLSJIQYQYGRZRWFWQKATNGHJLQVKMNGETKYQJ");
    msg.lbearing = 0.789371633935;
    msg.lelevation = 0.567361784635;
    msg.bearing = 0.478265579095;
    msg.elevation = 0.779244366365;
    msg.phi = 0.717941472273;
    msg.theta = 0.801124984194;
    msg.psi = 0.650426921392;
    msg.accuracy = 0.572643864999;

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
    msg.setTimeStamp(0.938130536066);
    msg.setSource(40313U);
    msg.setSourceEntity(69U);
    msg.setDestination(55486U);
    msg.setDestinationEntity(56U);
    msg.target.assign("HDRMFSZEFWRKNEFYZIVYFMTNBADOPKFJCLLGZJMXKDQCGIQBTZLCVQZDLZQSNPLVRSJGDFHEUDISYTIRBWDAGYTJALJFOILNHCXMVBHTCGPXYMNRYEHUWMGNCOAHNBTHSWJSUKRXVNGKMEMWAYECGITSRBQRCJUTOWKIBNOBXPAIWFGQUXBEIZJTWQKQDPVZSOQVVSKGWZNPUFSZPMVAUPDYUEURMFCHLCITKPX");
    msg.lbearing = 0.968591297178;
    msg.lelevation = 0.87494544786;
    msg.bearing = 0.365421176273;
    msg.elevation = 0.873940239633;
    msg.phi = 0.704833037007;
    msg.theta = 0.957056691959;
    msg.psi = 0.992904867097;
    msg.accuracy = 0.933331501984;

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
    msg.setTimeStamp(0.569705137792);
    msg.setSource(49581U);
    msg.setSourceEntity(187U);
    msg.setDestination(33108U);
    msg.setDestinationEntity(167U);
    msg.target.assign("QZZCUPTCZIEHIHXBJCANVMVXNCMLIVVJREPAKADOTLRQRDLIOJEHSKSXJQTYCFPYNHWGIPGXDOWDLFGFSAXYAPUBOFOBEXQFEGAFUZVJTXDDCIVLMFXFQVHUZSYOSMTMSUTPNQPRWYTRJFVTQJOKABUNUGGMXNDGFWTJITWEBLBPHDUWCYK");
    msg.lbearing = 0.161345856677;
    msg.lelevation = 0.621000304301;
    msg.bearing = 0.721024804332;
    msg.elevation = 0.329769681873;
    msg.phi = 0.830987405609;
    msg.theta = 0.362791140687;
    msg.psi = 0.506808078667;
    msg.accuracy = 0.946308221123;

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
    msg.setTimeStamp(0.661857013242);
    msg.setSource(42333U);
    msg.setSourceEntity(198U);
    msg.setDestination(44043U);
    msg.setDestinationEntity(215U);
    msg.target.assign("GQUSQCLZWMBBTILQFCFWLKNUWKESLAIWOSBZBHBUTHSXFPOKUDKNOQKXGLOWRWJMRAIZTJOKYJATDRDZTMJALNSPGYZUYFHVERFCVARYXYMZRLLPXFWVUNVCEIKDHIGDCNFAVPAXGITHDUBXEWINWPEJTVMUCFPYOGLJWXBIJQOPJJSKOBPFAHXRNRZBIGYHTCGSKGZKNPHYPOFQLCMIZCTU");
    msg.x = 0.482979643615;
    msg.y = 0.26431083152;
    msg.z = 0.287915861493;
    msg.n = 0.89520516244;
    msg.e = 0.927263917619;
    msg.d = 0.990437796125;
    msg.phi = 0.105892405211;
    msg.theta = 0.575940517206;
    msg.psi = 0.932423169603;
    msg.accuracy = 0.0920183395008;

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
    msg.setTimeStamp(0.127483302906);
    msg.setSource(65299U);
    msg.setSourceEntity(124U);
    msg.setDestination(61722U);
    msg.setDestinationEntity(97U);
    msg.target.assign("LMKTSFUJQQSZIFZERATGPNILLBOECDXCKOWSCRBIKLHGFOOZBDZVWPUCOPIKVXYVRMJXMZMGNDBOVKKAUHNQMTOVTTNQSFWXBYNZNBDDMXZBPXHKOQEXQCWFUDFVUJCYEQNPRWSJNUYODWHTPCEVZVFXYUBJJSGRIWXWEZBQDMHRMHVGYDJGMERKJAFULOPHNCLGLIAUPKSPETFRGHYRQIGEETYAYBKDJMRVY");
    msg.x = 0.717808307572;
    msg.y = 0.72665459946;
    msg.z = 0.799243011258;
    msg.n = 0.846215057181;
    msg.e = 0.170445662973;
    msg.d = 0.0132441180898;
    msg.phi = 0.802999077889;
    msg.theta = 0.54698286533;
    msg.psi = 0.0119135698854;
    msg.accuracy = 0.298407823322;

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
    msg.setTimeStamp(0.11750057396);
    msg.setSource(26192U);
    msg.setSourceEntity(120U);
    msg.setDestination(61635U);
    msg.setDestinationEntity(213U);
    msg.target.assign("RBVZVJHDLVGADHDRGNOFQJVWQFNNKXNJPUPZPAFJBYMWESMDBPMOULGZYWUZZ");
    msg.x = 0.949468830872;
    msg.y = 0.319741202828;
    msg.z = 0.948906687756;
    msg.n = 0.205060738889;
    msg.e = 0.0866205437798;
    msg.d = 0.46721384518;
    msg.phi = 0.110546854102;
    msg.theta = 0.911194909771;
    msg.psi = 0.951879121578;
    msg.accuracy = 0.993494824122;

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
    msg.setTimeStamp(0.592317103448);
    msg.setSource(55661U);
    msg.setSourceEntity(98U);
    msg.setDestination(9356U);
    msg.setDestinationEntity(65U);
    msg.target.assign("YPZZDZEKMUUEBLNARUCYTPSQEZBVPHQNGLUEYLCETSNIIHMBXGRBOCLKVKPBJALFMGABQZNUTXKITECDBOFHJVLCAOLWSGGXZHKPMOYPCQDIPFHMBRRPQNFXLWJBAVXXMFYONHSJODIAFYCNJIXSXMIBTRVPGJJQSWKNVDGTUEVQUFAFCKIOWGLAU");
    msg.lat = 0.529597492837;
    msg.lon = 0.241357214473;
    msg.z_units = 210U;
    msg.z = 0.891510844244;
    msg.accuracy = 0.678876454867;

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
    msg.setTimeStamp(0.85544835725);
    msg.setSource(53151U);
    msg.setSourceEntity(82U);
    msg.setDestination(58411U);
    msg.setDestinationEntity(252U);
    msg.target.assign("HFFBGXGFFOLZRUPTNHMHVGBLQUUNZNRQUINNPOFAKUEIIBNRDSJUZKCDKVGIBAKCCVALJTSEWHMMLVYCKFFFXJPTPFIKCXQEWPZDOEBJEBHZORSIYKMCNWWTEGALPQODMJDOZDXPC");
    msg.lat = 0.977901448611;
    msg.lon = 0.358755339721;
    msg.z_units = 151U;
    msg.z = 0.553149913377;
    msg.accuracy = 0.682733543233;

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
    msg.setTimeStamp(0.54335663695);
    msg.setSource(20019U);
    msg.setSourceEntity(152U);
    msg.setDestination(18989U);
    msg.setDestinationEntity(138U);
    msg.target.assign("HYSZNXWCYGKMIHOOKABKTEBVFNUVEBFPTVCOEKNZUWVVMIJAWQNNHYCGQRMWHIHUWZTGGFSVSWOIZMEPTZLDXBFVAAXAOWTEOXKDRPZLSGBYUIXXQKCSQYMLSPJMKDRECNHJUPSAQVENTNBDRJQJXPPWPZIMFFSDSBLGOGWKYGVQHRBQHNUPHBJUKLLPDDFYOLQFJJATDYXYDTXATSZTNIMZCRGEJL");
    msg.lat = 0.442021542753;
    msg.lon = 0.305830664621;
    msg.z_units = 109U;
    msg.z = 0.175028370238;
    msg.accuracy = 0.652595630565;

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
    msg.setTimeStamp(0.62858487079);
    msg.setSource(32240U);
    msg.setSourceEntity(127U);
    msg.setDestination(62941U);
    msg.setDestinationEntity(211U);
    msg.name.assign("NXIZITTNGBFUSPZOQNJHAQOMPISCFNYDKOM");
    msg.lat = 0.104116226551;
    msg.lon = 0.276142895686;
    msg.z = 0.477767408475;
    msg.z_units = 147U;

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
    msg.setTimeStamp(0.705964642819);
    msg.setSource(17726U);
    msg.setSourceEntity(144U);
    msg.setDestination(1024U);
    msg.setDestinationEntity(47U);
    msg.name.assign("DOZHYGQRCMTTSWWAKTKVEJNQDJWPKYLBMEMZIMTYHEXNQGEDFTNRISLCLVZBBYDKTOIJWHWGZCOUIUFXFUFLHSNUEEDKWAAJRCNVRXENTHJNMRZYBJQQUBGHGYOESOLVMSJCFJKVIRCSBFOACGKXABCMGAJPODTHYKSZORKZZPAILXXDPYYVNXSBDWIGPVRLGPFIHUVFYEDLWMNZQIZQDFVG");
    msg.lat = 0.814182621784;
    msg.lon = 0.271672674314;
    msg.z = 0.399084286957;
    msg.z_units = 126U;

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
    msg.setTimeStamp(0.38285451949);
    msg.setSource(24490U);
    msg.setSourceEntity(115U);
    msg.setDestination(46727U);
    msg.setDestinationEntity(117U);
    msg.name.assign("YETANFQKZLPKTDKZHMGFNDRVEVUNDXRIVXGQXSPSLGQWOQVGCDFDSIYYSXOZVNXMGCUAU");
    msg.lat = 0.947707014344;
    msg.lon = 0.114118571322;
    msg.z = 0.0121913444898;
    msg.z_units = 225U;

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
    msg.setTimeStamp(0.0256762011467);
    msg.setSource(46054U);
    msg.setSourceEntity(93U);
    msg.setDestination(44083U);
    msg.setDestinationEntity(117U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.345569035148);
    msg.setSource(35327U);
    msg.setSourceEntity(85U);
    msg.setDestination(10122U);
    msg.setDestinationEntity(253U);
    msg.op = 174U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("OEVIZADXUGJDIMZEAFKFQRIMBRBVYVYRASJWQZHHWUQETPMNKHXZRKXOLGFNHXLWQRDVFNGNMCWAXFXQPKJOWPHISBALGHZKKCGHWKEJVRUIAKUWTLPJUQTGQDWXIUPDYFABVLSJSXFTMPQSBECEDZMNQMCCCOUIGBUJFGCTLXUEYRCLGSTZVEPBYZKDJYOBSOSVSDKWGRMOVFOM");
    tmp_msg_0.lat = 0.877240372037;
    tmp_msg_0.lon = 0.868866166359;
    tmp_msg_0.z = 0.49310352711;
    tmp_msg_0.z_units = 121U;
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
    msg.setTimeStamp(0.783524440364);
    msg.setSource(35793U);
    msg.setSourceEntity(180U);
    msg.setDestination(30924U);
    msg.setDestinationEntity(83U);
    msg.op = 24U;

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
    msg.setTimeStamp(0.390326164919);
    msg.setSource(17940U);
    msg.setSourceEntity(72U);
    msg.setDestination(30214U);
    msg.setDestinationEntity(61U);
    msg.value = 0.374641592316;
    msg.type = 16U;

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
    msg.setTimeStamp(0.869339646436);
    msg.setSource(38380U);
    msg.setSourceEntity(39U);
    msg.setDestination(3812U);
    msg.setDestinationEntity(164U);
    msg.value = 0.283281940121;
    msg.type = 205U;

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
    msg.setTimeStamp(0.846803559877);
    msg.setSource(38322U);
    msg.setSourceEntity(245U);
    msg.setDestination(53937U);
    msg.setDestinationEntity(237U);
    msg.value = 0.682610469857;
    msg.type = 249U;

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
    msg.setTimeStamp(0.445944913548);
    msg.setSource(40399U);
    msg.setSourceEntity(7U);
    msg.setDestination(1623U);
    msg.setDestinationEntity(232U);
    msg.value = 0.652753606896;

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
    msg.setTimeStamp(0.135992392097);
    msg.setSource(62829U);
    msg.setSourceEntity(240U);
    msg.setDestination(14930U);
    msg.setDestinationEntity(219U);
    msg.value = 0.3063387791;

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
    msg.setTimeStamp(0.430772955901);
    msg.setSource(5437U);
    msg.setSourceEntity(153U);
    msg.setDestination(38775U);
    msg.setDestinationEntity(223U);
    msg.value = 0.444409326956;

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
    msg.setTimeStamp(0.153519325731);
    msg.setSource(45083U);
    msg.setSourceEntity(250U);
    msg.setDestination(5969U);
    msg.setDestinationEntity(22U);
    msg.timestamp_last_service = 0.694204206027;
    msg.time_next_service = 0.278882502822;
    msg.time_motor_next_service = 0.886778470937;
    msg.time_idle_ground = 0.0221757044581;
    msg.time_idle_air = 0.616734794156;
    msg.time_idle_water = 0.0229598678317;
    msg.time_idle_underwater = 0.032797807077;
    msg.time_idle_unknown = 0.397480594114;
    msg.time_motor_ground = 0.341942531559;
    msg.time_motor_air = 0.967060399509;
    msg.time_motor_water = 0.821630988427;
    msg.time_motor_underwater = 0.788818872517;
    msg.time_motor_unknown = 0.0649519689286;
    msg.rpm_min = 7254;
    msg.rpm_max = 4111;
    msg.depth_max = 0.338397866833;

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
    msg.setTimeStamp(0.710835217134);
    msg.setSource(53441U);
    msg.setSourceEntity(215U);
    msg.setDestination(17238U);
    msg.setDestinationEntity(231U);
    msg.timestamp_last_service = 0.116994414504;
    msg.time_next_service = 0.975437607968;
    msg.time_motor_next_service = 0.0269910387558;
    msg.time_idle_ground = 0.639986103672;
    msg.time_idle_air = 0.654330288561;
    msg.time_idle_water = 0.961009386051;
    msg.time_idle_underwater = 0.294090882375;
    msg.time_idle_unknown = 0.538293493407;
    msg.time_motor_ground = 0.570280939329;
    msg.time_motor_air = 0.728209656761;
    msg.time_motor_water = 0.465124746952;
    msg.time_motor_underwater = 0.656636018813;
    msg.time_motor_unknown = 0.808252822062;
    msg.rpm_min = -1912;
    msg.rpm_max = 6730;
    msg.depth_max = 0.934214233172;

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
    msg.setTimeStamp(0.171460495251);
    msg.setSource(56279U);
    msg.setSourceEntity(5U);
    msg.setDestination(40607U);
    msg.setDestinationEntity(238U);
    msg.timestamp_last_service = 0.237977651223;
    msg.time_next_service = 0.512342764985;
    msg.time_motor_next_service = 0.867690511598;
    msg.time_idle_ground = 0.987441968612;
    msg.time_idle_air = 0.545002634316;
    msg.time_idle_water = 0.319353205263;
    msg.time_idle_underwater = 0.457253994127;
    msg.time_idle_unknown = 0.595957780246;
    msg.time_motor_ground = 0.0440547010007;
    msg.time_motor_air = 0.204992807594;
    msg.time_motor_water = 0.728575552207;
    msg.time_motor_underwater = 0.227314758693;
    msg.time_motor_unknown = 0.761000305788;
    msg.rpm_min = -31015;
    msg.rpm_max = 19501;
    msg.depth_max = 0.209991467986;

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
    msg.setTimeStamp(0.925746315553);
    msg.setSource(63686U);
    msg.setSourceEntity(161U);
    msg.setDestination(33714U);
    msg.setDestinationEntity(97U);
    msg.severity = 254U;
    msg.text.assign("WMZWOPRBQMAFSSCUZNPRXEYTGXPITUOMCYCOQZUVENUDEKOTUEXACLGCODYNLMFWSELWLJTHHMIXWCJFVSGKXQOCBRMTQVNKTRYFLSOBYFIRDZWIQPDEFSBBHONZSNBUSSKMAWLIRDXAIPNZMHOYKHUKHUCDZDJDATFVVARZBBKDLGKSLTHOAUUV");

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
    msg.setTimeStamp(0.306408854862);
    msg.setSource(49714U);
    msg.setSourceEntity(86U);
    msg.setDestination(24516U);
    msg.setDestinationEntity(223U);
    msg.severity = 107U;
    msg.text.assign("MTLZUQIFGDNZWEQSWSXEORYMXVRVSVHDRINHXFIPLMSEPWFAEZXWTUNMKKPZNDAVWCEYCLGFQLLLGGAQDPOSLTJKIKJYJQPMXIAGBJDFDIVZPCRCDZOXMOUJWBBXSAKYPUANTBGOSHTZODESCXHZLFEWNIEUJLEPYAQXF");

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
    msg.setTimeStamp(0.466810657831);
    msg.setSource(33163U);
    msg.setSourceEntity(37U);
    msg.setDestination(40946U);
    msg.setDestinationEntity(53U);
    msg.severity = 57U;
    msg.text.assign("HRTGRSRRSFAMXPTKUFCPVPEFCZUYJLWYCNKKWICJZLTHBFOXZSWHOZKDCFWBCVYLJLXWNJHPVESTDDARQJELPVMBKIIAWLZFWNQGSKYAOZHINZJUHCBPKMTWXUKKYERGNRXMZWGPBEGQVRNYQPJLYMQXUULQDJFASQAAVT");

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
    msg.setTimeStamp(0.384650373403);
    msg.setSource(36916U);
    msg.setSourceEntity(21U);
    msg.setDestination(62933U);
    msg.setDestinationEntity(238U);
    msg.channel = 79;
    msg.value = -1787364450;
    msg.gain = 94U;

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
    msg.setTimeStamp(0.539196006225);
    msg.setSource(1403U);
    msg.setSourceEntity(112U);
    msg.setDestination(57745U);
    msg.setDestinationEntity(120U);
    msg.channel = 107;
    msg.value = -705257822;
    msg.gain = 50U;

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
    msg.setTimeStamp(0.692892106861);
    msg.setSource(21200U);
    msg.setSourceEntity(67U);
    msg.setDestination(10232U);
    msg.setDestinationEntity(209U);
    msg.channel = 13;
    msg.value = 1592558470;
    msg.gain = 14U;

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
    msg.setTimeStamp(0.248089176246);
    msg.setSource(50320U);
    msg.setSourceEntity(190U);
    msg.setDestination(63558U);
    msg.setDestinationEntity(153U);
    msg.ch01 = 0.705176461273;
    msg.ch02 = 0.646131063243;
    msg.ch03 = 0.318371553503;
    msg.ch04 = 0.0760785488232;
    msg.ch05 = 0.714195589311;
    msg.ch06 = 0.647015821511;
    msg.ch07 = 0.690049627811;
    msg.ch08 = 0.644170746288;
    msg.ch09 = 0.881918247855;
    msg.ch10 = 0.0568088265007;
    msg.ch11 = 0.314613244445;
    msg.ch12 = 0.222483658733;
    msg.ch13 = 0.537824252387;
    msg.ch14 = 0.276121465589;
    msg.ch15 = 0.645428787922;
    msg.ch16 = 0.509812875547;

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
    msg.setTimeStamp(0.0917219864133);
    msg.setSource(30342U);
    msg.setSourceEntity(195U);
    msg.setDestination(19353U);
    msg.setDestinationEntity(171U);
    msg.ch01 = 0.108473964826;
    msg.ch02 = 0.993118857153;
    msg.ch03 = 0.374392647332;
    msg.ch04 = 0.0717070324287;
    msg.ch05 = 0.499557112064;
    msg.ch06 = 0.186068136891;
    msg.ch07 = 0.0276300971225;
    msg.ch08 = 0.58372993272;
    msg.ch09 = 0.00630606055099;
    msg.ch10 = 0.457836205415;
    msg.ch11 = 0.249957621054;
    msg.ch12 = 0.724639731657;
    msg.ch13 = 0.178638674353;
    msg.ch14 = 0.637921952714;
    msg.ch15 = 0.668366767559;
    msg.ch16 = 0.558164548729;

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
    msg.setTimeStamp(0.86523915381);
    msg.setSource(11687U);
    msg.setSourceEntity(130U);
    msg.setDestination(13970U);
    msg.setDestinationEntity(27U);
    msg.ch01 = 0.966628796982;
    msg.ch02 = 0.772512620399;
    msg.ch03 = 0.835966394406;
    msg.ch04 = 0.236235331127;
    msg.ch05 = 0.654849559957;
    msg.ch06 = 0.259486162321;
    msg.ch07 = 0.916911924175;
    msg.ch08 = 0.117522957833;
    msg.ch09 = 0.510913266983;
    msg.ch10 = 0.663623183812;
    msg.ch11 = 0.16770281508;
    msg.ch12 = 0.16271067246;
    msg.ch13 = 0.499607616806;
    msg.ch14 = 0.212850279251;
    msg.ch15 = 0.16545254512;
    msg.ch16 = 0.920487601393;

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
    msg.setTimeStamp(0.278995481712);
    msg.setSource(22907U);
    msg.setSourceEntity(247U);
    msg.setDestination(24497U);
    msg.setDestinationEntity(24U);
    msg.time = 0.924158159254;
    msg.ang = 0.6046618146;

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
    msg.setTimeStamp(0.361103438728);
    msg.setSource(57152U);
    msg.setSourceEntity(194U);
    msg.setDestination(26628U);
    msg.setDestinationEntity(10U);
    msg.time = 0.942004108517;
    msg.ang = 0.93923428685;

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
    msg.setTimeStamp(0.284126254431);
    msg.setSource(11243U);
    msg.setSourceEntity(63U);
    msg.setDestination(16164U);
    msg.setDestinationEntity(195U);
    msg.time = 0.796886784516;
    msg.ang = 0.60212506871;

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
    msg.setTimeStamp(0.14927902182);
    msg.setSource(57578U);
    msg.setSourceEntity(51U);
    msg.setDestination(15586U);
    msg.setDestinationEntity(205U);
    msg.value = 0.00647199354506;

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
    msg.setTimeStamp(0.310587704636);
    msg.setSource(2453U);
    msg.setSourceEntity(177U);
    msg.setDestination(29510U);
    msg.setDestinationEntity(154U);
    msg.value = 0.108924728093;

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
    msg.setTimeStamp(0.792360375074);
    msg.setSource(33241U);
    msg.setSourceEntity(30U);
    msg.setDestination(16570U);
    msg.setDestinationEntity(51U);
    msg.value = 0.591333139281;

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
    msg.setTimeStamp(0.478750722525);
    msg.setSource(10871U);
    msg.setSourceEntity(227U);
    msg.setDestination(6193U);
    msg.setDestinationEntity(248U);
    msg.value = 0.369075115246;

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
    msg.setTimeStamp(0.616842475647);
    msg.setSource(64447U);
    msg.setSourceEntity(167U);
    msg.setDestination(57719U);
    msg.setDestinationEntity(140U);
    msg.value = 0.769972610421;

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
    msg.setTimeStamp(0.375063156901);
    msg.setSource(54620U);
    msg.setSourceEntity(112U);
    msg.setDestination(4662U);
    msg.setDestinationEntity(69U);
    msg.value = 0.193577931464;

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
    msg.setTimeStamp(0.553821502179);
    msg.setSource(61822U);
    msg.setSourceEntity(213U);
    msg.setDestination(7182U);
    msg.setDestinationEntity(64U);
    msg.value = 0.825162373926;

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
    msg.setTimeStamp(0.829481722964);
    msg.setSource(8175U);
    msg.setSourceEntity(126U);
    msg.setDestination(19556U);
    msg.setDestinationEntity(208U);
    msg.value = 0.480794224835;

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
    msg.setTimeStamp(0.867977031993);
    msg.setSource(45191U);
    msg.setSourceEntity(139U);
    msg.setDestination(53401U);
    msg.setDestinationEntity(139U);
    msg.value = 0.388792930676;

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
    msg.setTimeStamp(0.65358984045);
    msg.setSource(63596U);
    msg.setSourceEntity(44U);
    msg.setDestination(22947U);
    msg.setDestinationEntity(46U);
    msg.l2 = -10;
    msg.l3 = -21;
    msg.iridium = 74;
    msg.modem = -94;
    msg.pumps = 61;
    msg.vhf = 79;

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
    msg.setTimeStamp(0.0958188336541);
    msg.setSource(49252U);
    msg.setSourceEntity(17U);
    msg.setDestination(28998U);
    msg.setDestinationEntity(228U);
    msg.l2 = -24;
    msg.l3 = 120;
    msg.iridium = -90;
    msg.modem = -63;
    msg.pumps = 96;
    msg.vhf = 11;

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
    msg.setTimeStamp(0.61533617574);
    msg.setSource(51741U);
    msg.setSourceEntity(15U);
    msg.setDestination(47687U);
    msg.setDestinationEntity(69U);
    msg.l2 = 25;
    msg.l3 = -83;
    msg.iridium = 56;
    msg.modem = 52;
    msg.pumps = 53;
    msg.vhf = -114;

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
    msg.setTimeStamp(0.904572205252);
    msg.setSource(55848U);
    msg.setSourceEntity(109U);
    msg.setDestination(24427U);
    msg.setDestinationEntity(154U);
    msg.angle = 0.790026396382;
    msg.reference.assign("FAJJZSIVCNWFGKZSGCG");
    msg.speed = 0.957217217644;

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
    msg.setTimeStamp(0.35228732304);
    msg.setSource(42830U);
    msg.setSourceEntity(88U);
    msg.setDestination(11874U);
    msg.setDestinationEntity(210U);
    msg.angle = 0.655661656538;
    msg.reference.assign("KBWSXMBYTAXVYLCKPONPNHMLRGNYAUVXQVXZCSFIJBGKAURNOSFVFKCTKIRWPARQJVQXRWDTCWINQVIOXJGFVOJMWJSZUFHKEMUWEDHZ");
    msg.speed = 0.142874738494;

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
    msg.setTimeStamp(0.232941347028);
    msg.setSource(47686U);
    msg.setSourceEntity(158U);
    msg.setDestination(51154U);
    msg.setDestinationEntity(225U);
    msg.angle = 0.70360183145;
    msg.reference.assign("HMAJOBFPHHTOSLYGTQASXRIAPKQECYLEUPNBWWIMFCNCKNCIHRXMZDPKWSPTW");
    msg.speed = 0.22870487746;

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
    msg.setTimeStamp(0.440169288134);
    msg.setSource(47116U);
    msg.setSourceEntity(44U);
    msg.setDestination(19803U);
    msg.setDestinationEntity(14U);
    msg.angle = 0.668359400898;
    msg.speed = 0.20300494396;

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
    msg.setTimeStamp(0.227551462446);
    msg.setSource(43466U);
    msg.setSourceEntity(81U);
    msg.setDestination(44152U);
    msg.setDestinationEntity(19U);
    msg.angle = 0.137745287105;
    msg.speed = 0.722355417268;

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
    msg.setTimeStamp(0.692647968873);
    msg.setSource(46694U);
    msg.setSourceEntity(222U);
    msg.setDestination(54334U);
    msg.setDestinationEntity(235U);
    msg.angle = 0.963721985162;
    msg.speed = 0.766484915162;

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
    msg.setTimeStamp(0.985300774285);
    msg.setSource(24288U);
    msg.setSourceEntity(105U);
    msg.setDestination(44328U);
    msg.setDestinationEntity(190U);
    msg.dir = 0.566773850935;
    msg.speed = 0.537918217387;

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
    msg.setTimeStamp(0.0152365840156);
    msg.setSource(29903U);
    msg.setSourceEntity(119U);
    msg.setDestination(4958U);
    msg.setDestinationEntity(122U);
    msg.dir = 0.126711382082;
    msg.speed = 0.559778367138;

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
    msg.setTimeStamp(0.439741613289);
    msg.setSource(49907U);
    msg.setSourceEntity(2U);
    msg.setDestination(52642U);
    msg.setDestinationEntity(185U);
    msg.dir = 0.786408490543;
    msg.speed = 0.286574310024;

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
    msg.setTimeStamp(0.0407249883676);
    msg.setSource(21760U);
    msg.setSourceEntity(131U);
    msg.setDestination(33274U);
    msg.setDestinationEntity(224U);
    msg.x = 0.200554608992;
    msg.y = 0.410769957358;
    msg.z1 = 0.459020097496;
    msg.z2 = 0.414672430155;

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
    msg.setTimeStamp(0.338870108393);
    msg.setSource(44076U);
    msg.setSourceEntity(195U);
    msg.setDestination(19484U);
    msg.setDestinationEntity(69U);
    msg.x = 0.949103785278;
    msg.y = 0.844500050184;
    msg.z1 = 0.82838757755;
    msg.z2 = 0.103041273697;

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
    msg.setTimeStamp(0.172393028243);
    msg.setSource(45709U);
    msg.setSourceEntity(252U);
    msg.setDestination(64671U);
    msg.setDestinationEntity(214U);
    msg.x = 0.427712236086;
    msg.y = 0.558942939221;
    msg.z1 = 0.733991538457;
    msg.z2 = 0.343298258499;

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
    msg.setTimeStamp(0.222193476207);
    msg.setSource(44097U);
    msg.setSourceEntity(193U);
    msg.setDestination(18060U);
    msg.setDestinationEntity(36U);
    msg.mmsi = 0.140457716962;
    msg.lat = 0.0152884552081;
    msg.lon = 0.789655746981;
    msg.x = 0.212651846049;
    msg.y = 0.628930432678;
    msg.speed = 0.719982764045;
    msg.course = 0.731707305834;
    msg.dist = 0.96953539806;
    msg.length = 0.226544972993;
    msg.width = 0.778779362726;
    msg.o_vect = 0.0783150390293;

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
    msg.setTimeStamp(0.0908474253132);
    msg.setSource(40322U);
    msg.setSourceEntity(49U);
    msg.setDestination(45125U);
    msg.setDestinationEntity(22U);
    msg.mmsi = 0.13504583576;
    msg.lat = 0.259017583107;
    msg.lon = 0.192406887405;
    msg.x = 0.0307663205664;
    msg.y = 0.47488714253;
    msg.speed = 0.910050968841;
    msg.course = 0.176544189819;
    msg.dist = 0.625015299098;
    msg.length = 0.155088111031;
    msg.width = 0.700871281149;
    msg.o_vect = 0.979645633413;

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
    msg.setTimeStamp(0.259177526118);
    msg.setSource(31760U);
    msg.setSourceEntity(149U);
    msg.setDestination(10033U);
    msg.setDestinationEntity(251U);
    msg.mmsi = 0.626395558774;
    msg.lat = 0.556838079831;
    msg.lon = 0.940358148163;
    msg.x = 0.493722211743;
    msg.y = 0.592559447579;
    msg.speed = 0.580018423244;
    msg.course = 0.84496975947;
    msg.dist = 0.276044273381;
    msg.length = 0.793787587874;
    msg.width = 0.0150719828868;
    msg.o_vect = 0.451249075909;

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
    IMC::CasCost msg;
    msg.setTimeStamp(0.2196150653);
    msg.setSource(46667U);
    msg.setSourceEntity(171U);
    msg.setDestination(31420U);
    msg.setDestinationEntity(72U);
    msg.value = 0.0563473671966;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CasCost #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CasCost msg;
    msg.setTimeStamp(0.296758856002);
    msg.setSource(51330U);
    msg.setSourceEntity(187U);
    msg.setDestination(46574U);
    msg.setDestinationEntity(75U);
    msg.value = 0.0182871689486;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CasCost #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CasCost msg;
    msg.setTimeStamp(0.0131692164575);
    msg.setSource(57768U);
    msg.setSourceEntity(63U);
    msg.setDestination(35455U);
    msg.setDestinationEntity(71U);
    msg.value = 0.63727345877;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CasCost #2", msg == *msg_d);
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
    msg.setTimeStamp(0.953144784455);
    msg.setSource(60554U);
    msg.setSourceEntity(248U);
    msg.setDestination(41169U);
    msg.setDestinationEntity(118U);
    msg.locations.assign("HILDSUSQQFYADGUTNXUXPOPDXGOXLSTENELPRVTHXAQQYJAIBTSGVVFCZZAMSYNACTVYNIYMLPVYFCTSTWIOZCJHCFTSJGRVGKGHJIKHNWPVZOZOVGMUTDJ");

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
    msg.setTimeStamp(0.369092325977);
    msg.setSource(38141U);
    msg.setSourceEntity(172U);
    msg.setDestination(36319U);
    msg.setDestinationEntity(107U);
    msg.locations.assign("RQJAMTNCBMECWPDROTUZPFMEGCOYSNOJQIVJXLHKVPKCILOQCTYIMLRAQADOTGJRSGLDGNYZZLFSJSLWZRKDXZVWQOZFHVPKXSGPHFBHAUNTROBTVFZBHOJQBTMLYJGHEFYQIXPAMHDTKWKZSAXMWVRIYEFUXCNWMABENRIYXWXEUCDOIPTHCENSBTYXZSWUDYBGULPKNZUNNGWRBBFXGPJVIA");

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
    msg.setTimeStamp(0.459710078479);
    msg.setSource(60772U);
    msg.setSourceEntity(13U);
    msg.setDestination(37053U);
    msg.setDestinationEntity(227U);
    msg.locations.assign("AFPAJGUSKJIDKGCIANOFKERFAVLXNIUXZQJCFAHJABDYKJXCEYGEMKORRMWLOMHQZY");

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
    msg.setTimeStamp(0.965201440306);
    msg.setSource(54357U);
    msg.setSourceEntity(195U);
    msg.setDestination(30851U);
    msg.setDestinationEntity(12U);
    msg.value = 0.197878768781;

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
    msg.setTimeStamp(0.742415522058);
    msg.setSource(61173U);
    msg.setSourceEntity(204U);
    msg.setDestination(23580U);
    msg.setDestinationEntity(85U);
    msg.value = 0.556324472625;

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
    msg.setTimeStamp(0.110603398086);
    msg.setSource(64101U);
    msg.setSourceEntity(176U);
    msg.setDestination(36580U);
    msg.setDestinationEntity(216U);
    msg.value = 0.193449691524;

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
    msg.setTimeStamp(0.0359497956714);
    msg.setSource(46352U);
    msg.setSourceEntity(8U);
    msg.setDestination(26382U);
    msg.setDestinationEntity(16U);
    msg.beam1 = 0.379160230034;
    msg.beam2 = 0.6482014383;
    msg.beam3 = 0.880273304233;
    msg.beam4 = 0.870662820014;

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
    msg.setTimeStamp(0.973327096261);
    msg.setSource(12226U);
    msg.setSourceEntity(168U);
    msg.setDestination(238U);
    msg.setDestinationEntity(142U);
    msg.beam1 = 0.878096762043;
    msg.beam2 = 0.733671927419;
    msg.beam3 = 0.331707614518;
    msg.beam4 = 0.0162392402732;

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
    msg.setTimeStamp(0.458910902218);
    msg.setSource(45222U);
    msg.setSourceEntity(200U);
    msg.setDestination(60359U);
    msg.setDestinationEntity(109U);
    msg.beam1 = 0.884324617786;
    msg.beam2 = 0.157862450278;
    msg.beam3 = 0.918765560149;
    msg.beam4 = 0.574115244114;

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
    msg.setTimeStamp(0.38134544037);
    msg.setSource(48649U);
    msg.setSourceEntity(195U);
    msg.setDestination(25647U);
    msg.setDestinationEntity(243U);
    msg.beam1 = 63U;
    msg.beam2 = 149U;
    msg.beam3 = 214U;
    msg.beam4 = 230U;

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
    msg.setTimeStamp(0.757628812987);
    msg.setSource(62011U);
    msg.setSourceEntity(241U);
    msg.setDestination(27458U);
    msg.setDestinationEntity(13U);
    msg.beam1 = 54U;
    msg.beam2 = 184U;
    msg.beam3 = 184U;
    msg.beam4 = 142U;

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
    msg.setTimeStamp(0.697765567543);
    msg.setSource(28241U);
    msg.setSourceEntity(188U);
    msg.setDestination(51592U);
    msg.setDestinationEntity(158U);
    msg.beam1 = 31U;
    msg.beam2 = 65U;
    msg.beam3 = 186U;
    msg.beam4 = 182U;

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
    msg.setTimeStamp(0.331281244469);
    msg.setSource(19550U);
    msg.setSourceEntity(48U);
    msg.setDestination(14587U);
    msg.setDestinationEntity(203U);
    msg.cellposition = 0.732110550632;

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
    msg.setTimeStamp(0.244313773408);
    msg.setSource(53706U);
    msg.setSourceEntity(168U);
    msg.setDestination(36386U);
    msg.setDestinationEntity(42U);
    msg.cellposition = 0.0488043263711;

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
    msg.setTimeStamp(0.773190173152);
    msg.setSource(25255U);
    msg.setSourceEntity(17U);
    msg.setDestination(35009U);
    msg.setDestinationEntity(245U);
    msg.cellposition = 0.490155556317;

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
    msg.setTimeStamp(0.0816502288351);
    msg.setSource(6439U);
    msg.setSourceEntity(148U);
    msg.setDestination(7267U);
    msg.setDestinationEntity(198U);
    msg.beams = 53U;
    msg.cells = 222U;
    msg.coord_sys = 118U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cellposition = 0.747794434586;
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
    msg.setTimeStamp(0.720868714886);
    msg.setSource(58998U);
    msg.setSourceEntity(76U);
    msg.setDestination(48891U);
    msg.setDestinationEntity(50U);
    msg.beams = 34U;
    msg.cells = 151U;
    msg.coord_sys = 197U;

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
    msg.setTimeStamp(0.69181987068);
    msg.setSource(34792U);
    msg.setSourceEntity(194U);
    msg.setDestination(30367U);
    msg.setDestinationEntity(115U);
    msg.beams = 236U;
    msg.cells = 19U;
    msg.coord_sys = 51U;

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
    msg.setTimeStamp(0.523501291171);
    msg.setSource(64652U);
    msg.setSourceEntity(138U);
    msg.setDestination(185U);
    msg.setDestinationEntity(155U);
    msg.vel = 0.144474847764;
    msg.amp = 0.440530210346;
    msg.cor = 143U;

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
    msg.setTimeStamp(0.450634951824);
    msg.setSource(498U);
    msg.setSourceEntity(168U);
    msg.setDestination(33413U);
    msg.setDestinationEntity(45U);
    msg.vel = 0.0739987608361;
    msg.amp = 0.404979849589;
    msg.cor = 132U;

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
    msg.setTimeStamp(0.416303764075);
    msg.setSource(47526U);
    msg.setSourceEntity(113U);
    msg.setDestination(53883U);
    msg.setDestinationEntity(41U);
    msg.vel = 0.300057686663;
    msg.amp = 0.523489141479;
    msg.cor = 231U;

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
    msg.setTimeStamp(0.784976585021);
    msg.setSource(55210U);
    msg.setSourceEntity(203U);
    msg.setDestination(44109U);
    msg.setDestinationEntity(175U);
    msg.serial_no = 896281639U;
    msg.unix_timestamp = 2456118694U;
    msg.millis = 56388U;
    msg.trans_protocol = 7U;
    msg.trans_id = 2430484683U;
    msg.trans_data = 20284U;
    msg.snr = 178U;
    msg.trans_freq = 23U;
    msg.recv_mem_addr = 37992U;
    msg.lat = 0.925388186272;
    msg.lon = 0.691075612755;

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
    msg.setTimeStamp(0.85558639632);
    msg.setSource(49879U);
    msg.setSourceEntity(103U);
    msg.setDestination(52333U);
    msg.setDestinationEntity(31U);
    msg.serial_no = 2857057536U;
    msg.unix_timestamp = 523247502U;
    msg.millis = 40920U;
    msg.trans_protocol = 38U;
    msg.trans_id = 3284553180U;
    msg.trans_data = 25062U;
    msg.snr = 185U;
    msg.trans_freq = 218U;
    msg.recv_mem_addr = 39228U;
    msg.lat = 0.312536950021;
    msg.lon = 0.0328179278054;

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
    msg.setTimeStamp(0.104997417683);
    msg.setSource(59613U);
    msg.setSourceEntity(0U);
    msg.setDestination(63545U);
    msg.setDestinationEntity(152U);
    msg.serial_no = 1378465159U;
    msg.unix_timestamp = 1577625056U;
    msg.millis = 51437U;
    msg.trans_protocol = 106U;
    msg.trans_id = 1218274189U;
    msg.trans_data = 52262U;
    msg.snr = 30U;
    msg.trans_freq = 45U;
    msg.recv_mem_addr = 22480U;
    msg.lat = 0.0119761372787;
    msg.lon = 0.903028054522;

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
    msg.setTimeStamp(0.50777258542);
    msg.setSource(32397U);
    msg.setSourceEntity(166U);
    msg.setDestination(34401U);
    msg.setDestinationEntity(103U);
    msg.serial_no = 1876010154U;
    msg.unix_timestamp = 3884392310U;
    msg.temperature = 0.950723235776;
    msg.avg_noise_level = 9U;
    msg.peak_noise_level = 235U;
    msg.recv_listen_freq = 139U;
    msg.recv_mem_addr = 56203U;

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
    msg.setTimeStamp(0.124113135132);
    msg.setSource(48863U);
    msg.setSourceEntity(233U);
    msg.setDestination(15823U);
    msg.setDestinationEntity(15U);
    msg.serial_no = 1606931591U;
    msg.unix_timestamp = 3232396710U;
    msg.temperature = 0.986984656748;
    msg.avg_noise_level = 38U;
    msg.peak_noise_level = 19U;
    msg.recv_listen_freq = 97U;
    msg.recv_mem_addr = 61277U;

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
    msg.setTimeStamp(0.510619392219);
    msg.setSource(58902U);
    msg.setSourceEntity(114U);
    msg.setDestination(34098U);
    msg.setDestinationEntity(240U);
    msg.serial_no = 2648022134U;
    msg.unix_timestamp = 160465188U;
    msg.temperature = 0.658015190616;
    msg.avg_noise_level = 217U;
    msg.peak_noise_level = 69U;
    msg.recv_listen_freq = 193U;
    msg.recv_mem_addr = 40564U;

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
    msg.setTimeStamp(0.82468662121);
    msg.setSource(26957U);
    msg.setSourceEntity(171U);
    msg.setDestination(11610U);
    msg.setDestinationEntity(132U);
    msg.frequency = 4168844540U;
    msg.info.assign("IIPCWLCTOIAJESHUXBNHZSMDWZFVXZNYOACYFLNZKVUHCYREIOKBGQJDRSYZVBEBEEYSFMNIETKTMMGXALTWQGQLAJZVCKZAAHODYXWOUFSLNPELUTWTRFMGBMZRAJGXPHIWALFWSDLIJZCRVPFJDFGOJWDMTPTXEAWKURNPEMUPHQVTRRSLIXKEWVOCQYDGCVHNRPDATJDGXQJOHKMSGUNYKMKNSNQDPU");

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
    msg.setTimeStamp(0.699452606025);
    msg.setSource(61502U);
    msg.setSourceEntity(158U);
    msg.setDestination(29966U);
    msg.setDestinationEntity(16U);
    msg.frequency = 2420414829U;
    msg.info.assign("ZFKCJJWDIEAAQKJUPYEWMNWOBSOCPLYPJRPYOYKELUQPAMZWBZHAXBDRZKWXTHOBXHOMVMBQUZCJTAQPKQ");

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
    msg.setTimeStamp(0.488300681746);
    msg.setSource(43276U);
    msg.setSourceEntity(33U);
    msg.setDestination(54587U);
    msg.setDestinationEntity(107U);
    msg.frequency = 1799245152U;
    msg.info.assign("QVZVJGHWANNKLCNGSUPXMBUJCIUQURKQBTDTTABPHRDVYPYVTCINRRYUXTWOESCDWSQRMGIBYYNBWZAAISDUKDRXINPBSIGECEOALWEVOGIIRWWSTJZEOZMPWEQTNXOCRHPLIBMUXFQDVMAOZMMLOQZHVXJYHQWFEQBSJHJZKFDBTAOXVFGYOVGFNHMHXZFYLALNQTTAYPFMCDCRKZSSAPCLEJ");

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
    msg.setTimeStamp(0.141640540085);
    msg.setSource(41753U);
    msg.setSourceEntity(238U);
    msg.setDestination(2875U);
    msg.setDestinationEntity(115U);
    msg.adcp = -104;
    msg.adcp_dur = 2905881747U;
    msg.adcp_fr = 3010837670U;
    msg.ctd = 13;
    msg.ctd_dur = 2463257231U;
    msg.ctd_fr = 2015356208U;
    msg.opt = 4;
    msg.opt_dur = 624623383U;
    msg.opt_fr = 2499144469U;
    msg.tbl = -104;
    msg.tbl_dur = 1458846274U;
    msg.tbl_fr = 3729742132U;
    msg.eco = 117;
    msg.eco_dur = 4239625115U;
    msg.eco_fr = 1455441837U;
    msg.par = 50;
    msg.par_dur = 1855674162U;
    msg.par_fr = 938327629U;

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
    msg.setTimeStamp(0.143524967147);
    msg.setSource(2693U);
    msg.setSourceEntity(236U);
    msg.setDestination(57657U);
    msg.setDestinationEntity(246U);
    msg.adcp = -18;
    msg.adcp_dur = 2432954249U;
    msg.adcp_fr = 4068909766U;
    msg.ctd = -80;
    msg.ctd_dur = 3539619383U;
    msg.ctd_fr = 484131872U;
    msg.opt = -3;
    msg.opt_dur = 449462024U;
    msg.opt_fr = 3495773921U;
    msg.tbl = -94;
    msg.tbl_dur = 3904605878U;
    msg.tbl_fr = 1725302559U;
    msg.eco = -73;
    msg.eco_dur = 2168616289U;
    msg.eco_fr = 992194337U;
    msg.par = 11;
    msg.par_dur = 3294102485U;
    msg.par_fr = 283084183U;

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
    msg.setTimeStamp(0.441065972809);
    msg.setSource(34181U);
    msg.setSourceEntity(74U);
    msg.setDestination(60199U);
    msg.setDestinationEntity(246U);
    msg.adcp = -86;
    msg.adcp_dur = 4104084174U;
    msg.adcp_fr = 143966929U;
    msg.ctd = -37;
    msg.ctd_dur = 809056299U;
    msg.ctd_fr = 2659520824U;
    msg.opt = -34;
    msg.opt_dur = 3337309571U;
    msg.opt_fr = 4223693123U;
    msg.tbl = -20;
    msg.tbl_dur = 407036395U;
    msg.tbl_fr = 53938519U;
    msg.eco = 15;
    msg.eco_dur = 4089430826U;
    msg.eco_fr = 1987985524U;
    msg.par = -86;
    msg.par_dur = 3437587759U;
    msg.par_fr = 1398348922U;

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
    msg.setTimeStamp(0.528770947182);
    msg.setSource(44078U);
    msg.setSourceEntity(227U);
    msg.setDestination(40180U);
    msg.setDestinationEntity(23U);
    msg.adcp = -127;
    msg.adcp_dur = 4064899878U;
    msg.adcp_fr = 4096876300U;
    msg.ctd = 116;
    msg.ctd_dur = 3523459395U;
    msg.ctd_fr = 3425575511U;
    msg.opt = -15;
    msg.opt_dur = 1079042619U;
    msg.opt_fr = 3095524971U;
    msg.tbl = 19;
    msg.tbl_dur = 1879383401U;
    msg.tbl_fr = 1978759665U;
    msg.eco = -8;
    msg.eco_dur = 2275976334U;
    msg.eco_fr = 834846465U;
    msg.par = 51;
    msg.par_dur = 1805784382U;
    msg.par_fr = 3773831538U;

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
    msg.setTimeStamp(0.0255158214661);
    msg.setSource(9267U);
    msg.setSourceEntity(69U);
    msg.setDestination(55155U);
    msg.setDestinationEntity(182U);
    msg.adcp = -38;
    msg.adcp_dur = 2610822084U;
    msg.adcp_fr = 35480729U;
    msg.ctd = -73;
    msg.ctd_dur = 774435888U;
    msg.ctd_fr = 933252756U;
    msg.opt = 94;
    msg.opt_dur = 192711170U;
    msg.opt_fr = 2265558976U;
    msg.tbl = -36;
    msg.tbl_dur = 3525121118U;
    msg.tbl_fr = 4177152265U;
    msg.eco = -1;
    msg.eco_dur = 1332303315U;
    msg.eco_fr = 199727365U;
    msg.par = 99;
    msg.par_dur = 2494780334U;
    msg.par_fr = 3121037647U;

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
    msg.setTimeStamp(0.850303811556);
    msg.setSource(52556U);
    msg.setSourceEntity(119U);
    msg.setDestination(56890U);
    msg.setDestinationEntity(203U);
    msg.adcp = -37;
    msg.adcp_dur = 1666954294U;
    msg.adcp_fr = 1596289692U;
    msg.ctd = 30;
    msg.ctd_dur = 993294614U;
    msg.ctd_fr = 4042806991U;
    msg.opt = 30;
    msg.opt_dur = 1578165505U;
    msg.opt_fr = 3869088088U;
    msg.tbl = 65;
    msg.tbl_dur = 508813245U;
    msg.tbl_fr = 3006035004U;
    msg.eco = 84;
    msg.eco_dur = 4010557410U;
    msg.eco_fr = 2328321755U;
    msg.par = 34;
    msg.par_dur = 3696707022U;
    msg.par_fr = 1898280743U;

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
    msg.setTimeStamp(0.714620599169);
    msg.setSource(22575U);
    msg.setSourceEntity(235U);
    msg.setDestination(12279U);
    msg.setDestinationEntity(109U);
    msg.value = 0.348741767678;

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
    msg.setTimeStamp(0.355801618871);
    msg.setSource(54645U);
    msg.setSourceEntity(229U);
    msg.setDestination(33540U);
    msg.setDestinationEntity(182U);
    msg.value = 0.255889306635;

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
    msg.setTimeStamp(0.857737649283);
    msg.setSource(51698U);
    msg.setSourceEntity(237U);
    msg.setDestination(58125U);
    msg.setDestinationEntity(69U);
    msg.value = 0.586814953618;

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
    msg.setTimeStamp(0.611058979778);
    msg.setSource(44998U);
    msg.setSourceEntity(50U);
    msg.setDestination(51189U);
    msg.setDestinationEntity(114U);
    msg.validity = 33925U;
    msg.type = 254U;
    msg.utc_year = 21486U;
    msg.utc_month = 242U;
    msg.utc_day = 136U;
    msg.utc_time = 0.942035436518;
    msg.lat = 0.578951535174;
    msg.lon = 0.903068910146;
    msg.height = 0.213715774656;
    msg.satellites = 236U;
    msg.cog = 0.225906979402;
    msg.sog = 0.780161348648;
    msg.hdop = 0.553950672047;
    msg.vdop = 0.368113276761;
    msg.hacc = 0.0518349627151;
    msg.vacc = 0.991639074876;

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
    msg.setTimeStamp(0.55477623891);
    msg.setSource(9567U);
    msg.setSourceEntity(210U);
    msg.setDestination(20094U);
    msg.setDestinationEntity(13U);
    msg.validity = 58229U;
    msg.type = 237U;
    msg.utc_year = 50050U;
    msg.utc_month = 90U;
    msg.utc_day = 248U;
    msg.utc_time = 0.942546285756;
    msg.lat = 0.698772344299;
    msg.lon = 0.950941172005;
    msg.height = 0.0922302244202;
    msg.satellites = 181U;
    msg.cog = 0.26610687522;
    msg.sog = 0.537432422572;
    msg.hdop = 0.36245083948;
    msg.vdop = 0.351683668245;
    msg.hacc = 0.502100997826;
    msg.vacc = 0.963034929586;

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
    msg.setTimeStamp(0.3534196926);
    msg.setSource(13735U);
    msg.setSourceEntity(97U);
    msg.setDestination(38997U);
    msg.setDestinationEntity(177U);
    msg.validity = 49701U;
    msg.type = 93U;
    msg.utc_year = 38340U;
    msg.utc_month = 113U;
    msg.utc_day = 99U;
    msg.utc_time = 0.311317797213;
    msg.lat = 0.600790542092;
    msg.lon = 0.0497486360037;
    msg.height = 0.164707932454;
    msg.satellites = 192U;
    msg.cog = 0.584828116622;
    msg.sog = 0.852553155973;
    msg.hdop = 0.63554246726;
    msg.vdop = 0.710454956899;
    msg.hacc = 0.316541524813;
    msg.vacc = 0.0710708948936;

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

  return test.getReturnValue();
}

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
// IMC XML MD5: 4b5324d23968d4e510251a7a76b86ffb                            *
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
    msg.setTimeStamp(0.241568053319);
    msg.setSource(10888U);
    msg.setSourceEntity(75U);
    msg.setDestination(56494U);
    msg.setDestinationEntity(247U);
    msg.state = 65U;
    msg.flags = 118U;
    msg.description.assign("FITOYNAQWFZUMLEFIFQTHOZWLGCCTQKPXJKHSZVPBFJAADGWOIMRTAQHNBUIXCXIBPMVVLHOQYOGYDEJEYGPXXOOEOCXWFJSAHRLGRBKUZTWFPOYGPXVCDSMPKHHESKLESZKRWNRQCGAJS");

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
    msg.setTimeStamp(0.905967074099);
    msg.setSource(7442U);
    msg.setSourceEntity(251U);
    msg.setDestination(47477U);
    msg.setDestinationEntity(143U);
    msg.state = 250U;
    msg.flags = 236U;
    msg.description.assign("YYXHIROCGOIKBMSTZTAJOEVYIZDYJBXHWSMHDQPTCERMIFBWNLGJ");

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
    msg.setTimeStamp(0.380069644209);
    msg.setSource(60127U);
    msg.setSourceEntity(228U);
    msg.setDestination(33772U);
    msg.setDestinationEntity(110U);
    msg.state = 220U;
    msg.flags = 57U;
    msg.description.assign("YXVJCHNNWGWTIJYMEPGEVKRSYCFCZNCAFBXOOPUKEJOURBDCNNKIEUCZMCBCLOPMXIVNMMPLSGEAZMHLZYQHWNQUQMRQHIEYARTEWFAPATOTKLXWQASYLOGZXMTFSRENWKPWUKXKMGPHHDJNTPHDIRUDJFJUXEIVRWSWIKOCGJDTRSI");

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
    msg.setTimeStamp(0.0231398391971);
    msg.setSource(26644U);
    msg.setSourceEntity(98U);
    msg.setDestination(10488U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.0427341224134);
    msg.setSource(35760U);
    msg.setSourceEntity(218U);
    msg.setDestination(21697U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.868588177136);
    msg.setSource(6348U);
    msg.setSourceEntity(43U);
    msg.setDestination(47985U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.866294549625);
    msg.setSource(35377U);
    msg.setSourceEntity(117U);
    msg.setDestination(32889U);
    msg.setDestinationEntity(117U);
    msg.id = 53U;
    msg.label.assign("OWSDIQTYBNYNYVTXNOLOTCUIGKFFMOUHFZTWGVGENQQLACTFOBHQHSCUXXSSGZNYYCEIEJJGPXPIWJQZVWOZNP");
    msg.component.assign("SIAYQWDBRDKGCKHFRSAEIGDIKAFOCTYTIROENEXUZUAGVMLLSKXEWCAUJOQSZNSIJGMPDYKBRTACTXTHZRICXDENXPCPLQXHZHLSRVQPBINNLDR");
    msg.act_time = 54857U;
    msg.deact_time = 59425U;

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
    msg.setTimeStamp(0.818667837387);
    msg.setSource(61121U);
    msg.setSourceEntity(202U);
    msg.setDestination(4079U);
    msg.setDestinationEntity(64U);
    msg.id = 137U;
    msg.label.assign("VHLUJCBOSFFXZESZTNJHBWOIANOXRYXQUCXVTDGBIMOMPAZCQILZNGZPLMPNODVMACSXAADQPFSYNKOTYWAGUJLVPCGGCYEKYHIRSMFHHXNKEKKEDUBSBWKKRTWNREVMWYIF");
    msg.component.assign("XBLZWVAZIOLDSEKCUDKRZKBDGMGWHDKPHNYZITYGZPZWGOVXWCFPLZCVCNTFFNTZVXQMNPNRWCYTMMWRHAPGSVBJXJEZVU");
    msg.act_time = 65330U;
    msg.deact_time = 11290U;

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
    msg.setTimeStamp(0.297929429855);
    msg.setSource(40361U);
    msg.setSourceEntity(190U);
    msg.setDestination(38266U);
    msg.setDestinationEntity(31U);
    msg.id = 131U;
    msg.label.assign("CALOYFDFXWZFFUZVZTFVAPLSPZHGJJMAVELYDTBBDMKUTWADIKRAMRIUFVBNSJAQACGWILSQYFILSBZKPRDBKKMYNKXRXFWSUMAPYTHBMKCSNZVVWGEISSJQIGOHHBUGOCCOAEHEVJYIWXGIXKKQQTZODEPLLCEMXXMRPNUFEVJZHHXRRECUNAOHBTQOBSJNGOTRMPQNJDNFCYUOZPEQOYNLTIPRNUBYSJQYZLRVDCGP");
    msg.component.assign("KYHRQMQOLKSSNFMGJTRJNUXPUEVBWPBXNBBZRYIGBRXBKJFGXQZGHTLFWYZASKPTKIDJTRHUILPAVJVUYVODOFQTWEDPINIDAWYGSCVYKCFZCRDOWDYGPVUOZPCCGHKZGJBBKRRHZJUFISQWVZLLTXMHAAYESZTDWLPLMHVOISKYQJWPZGLOCCSUBETQDEMXJLQNNXECCTIYLNAONFXFGSXIAWHFAUJOEHAVWSEMBQUAEVRQNMPTOXKD");
    msg.act_time = 32492U;
    msg.deact_time = 8576U;

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
    msg.setTimeStamp(0.441048560778);
    msg.setSource(12U);
    msg.setSourceEntity(128U);
    msg.setDestination(16519U);
    msg.setDestinationEntity(253U);
    msg.id = 235U;

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
    msg.setTimeStamp(0.950566518555);
    msg.setSource(1950U);
    msg.setSourceEntity(202U);
    msg.setDestination(43444U);
    msg.setDestinationEntity(181U);
    msg.id = 159U;

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
    msg.setTimeStamp(0.603225522989);
    msg.setSource(6040U);
    msg.setSourceEntity(238U);
    msg.setDestination(58439U);
    msg.setDestinationEntity(122U);
    msg.id = 83U;

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
    msg.setTimeStamp(0.444927603655);
    msg.setSource(22209U);
    msg.setSourceEntity(249U);
    msg.setDestination(58211U);
    msg.setDestinationEntity(196U);
    msg.op = 123U;
    msg.list.assign("ZFAOHSSGNQAJJWHYCSHEBXURCNWRUAZMPZMLGVWICJLRASUOQOOJFPHCMUTVTNZBEXWYJDFEXGUTHIVIQFLHDTDLNJBQYOPKKPBJXJEKVQRVOUFPHAFPWSSNMT");

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
    msg.setTimeStamp(0.454214973536);
    msg.setSource(22489U);
    msg.setSourceEntity(207U);
    msg.setDestination(48508U);
    msg.setDestinationEntity(195U);
    msg.op = 253U;
    msg.list.assign("MCSRBTZFLTWOTKZBXKISBLUPWTGDWVPEFOHEEALZBYCZRPQSHJNXMQMRYFIWJWDZHCZEIBASGMKBXREMNJPCYHFQLIMMOXQPOBTLOEDUDPZNNZXGLGKCUBYYWFSJNPUCHIVAIQYIUHCLVVKREFVJAUN");

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
    msg.setTimeStamp(0.432902803091);
    msg.setSource(54056U);
    msg.setSourceEntity(1U);
    msg.setDestination(17288U);
    msg.setDestinationEntity(112U);
    msg.op = 11U;
    msg.list.assign("KLOLXWBLMODRYOCPARTBJZFSLZKJROCHPHCLEAUQCNNTPQUMRPJIAXPJLCXNDKKZPWNEYUESWKGAVWNHIABBVHOHFRTKMWVRUIGYXDYHLUTEHWBNSUQCYUFZHJOMLKFUIQMXIYIWTWRGTAVYLZFTGTIRGEQUDZXQBNMGVYIVXSQWFMJEZBIEPDFKORXKVQBVZTEZQFDFDONBMLF");

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
    msg.setTimeStamp(0.318082704937);
    msg.setSource(7799U);
    msg.setSourceEntity(99U);
    msg.setDestination(30352U);
    msg.setDestinationEntity(252U);
    msg.value = 13U;

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
    msg.setTimeStamp(0.207436885177);
    msg.setSource(61867U);
    msg.setSourceEntity(148U);
    msg.setDestination(34792U);
    msg.setDestinationEntity(28U);
    msg.value = 178U;

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
    msg.setTimeStamp(0.287914385583);
    msg.setSource(35657U);
    msg.setSourceEntity(121U);
    msg.setDestination(5217U);
    msg.setDestinationEntity(175U);
    msg.value = 227U;

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
    msg.setTimeStamp(0.598026216039);
    msg.setSource(2194U);
    msg.setSourceEntity(121U);
    msg.setDestination(9730U);
    msg.setDestinationEntity(100U);
    msg.consumer.assign("HFWTFMZUKVRGDLOWZKCZILSTNOLYSANCMZFIPZYKXKDFQGUTEDKWXVHCNXEUEHQJIMJAABHRPSOYVQWWBZRDCPTOMZHLXLATSQRZRXEO");
    msg.message_id = 8420U;

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
    msg.setTimeStamp(0.4547859002);
    msg.setSource(23080U);
    msg.setSourceEntity(154U);
    msg.setDestination(55472U);
    msg.setDestinationEntity(184U);
    msg.consumer.assign("WHPFOVRYNDYOPULDFRDUJIF");
    msg.message_id = 49603U;

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
    msg.setTimeStamp(0.891615708739);
    msg.setSource(31381U);
    msg.setSourceEntity(67U);
    msg.setDestination(22806U);
    msg.setDestinationEntity(19U);
    msg.consumer.assign("PTRPTDTGEMJKYNVMCKKYCJRIPMPOEQBMJUSNMDWHXYSEJSVJELJAEBPBRCZRMYSLVTPHQHZWWQLZDFNNKIBIPASXBUDECYPGHHFUTLTRTVUKAFTAZUGXLGWUKYCNNGZGZSFWHPYOWFONDEOXM");
    msg.message_id = 61778U;

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
    msg.setTimeStamp(0.0750729076145);
    msg.setSource(49360U);
    msg.setSourceEntity(187U);
    msg.setDestination(45823U);
    msg.setDestinationEntity(107U);
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
    msg.setTimeStamp(0.129105329522);
    msg.setSource(53802U);
    msg.setSourceEntity(249U);
    msg.setDestination(47238U);
    msg.setDestinationEntity(75U);
    msg.type = 140U;

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
    msg.setTimeStamp(0.202509090685);
    msg.setSource(30270U);
    msg.setSourceEntity(217U);
    msg.setDestination(46746U);
    msg.setDestinationEntity(60U);
    msg.type = 24U;

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
    msg.setTimeStamp(0.166469505132);
    msg.setSource(42318U);
    msg.setSourceEntity(152U);
    msg.setDestination(20437U);
    msg.setDestinationEntity(81U);
    msg.op = 253U;

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
    msg.setTimeStamp(0.149910479766);
    msg.setSource(6827U);
    msg.setSourceEntity(183U);
    msg.setDestination(4186U);
    msg.setDestinationEntity(90U);
    msg.op = 197U;

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
    msg.setTimeStamp(0.263833389266);
    msg.setSource(60358U);
    msg.setSourceEntity(206U);
    msg.setDestination(2895U);
    msg.setDestinationEntity(242U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.660349217845);
    msg.setSource(8224U);
    msg.setSourceEntity(153U);
    msg.setDestination(22306U);
    msg.setDestinationEntity(93U);
    msg.total_steps = 69U;
    msg.step_number = 186U;
    msg.step.assign("YAZTJBNQDNZONVBIBOXQPRZLIKSCHFCQHIPJT");
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
    msg.setTimeStamp(0.870833136334);
    msg.setSource(64866U);
    msg.setSourceEntity(197U);
    msg.setDestination(1174U);
    msg.setDestinationEntity(248U);
    msg.total_steps = 116U;
    msg.step_number = 212U;
    msg.step.assign("KBLJFUXHSQGSRISXVFMYASZLUYLIHGUGOQNLCHZTJXMIEYVRLUVHTMDJHSYANFIGGEBPZDRXFDROZSMNWNDPZFJ");
    msg.flags = 211U;

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
    msg.setTimeStamp(0.0592567929869);
    msg.setSource(42462U);
    msg.setSourceEntity(47U);
    msg.setDestination(1483U);
    msg.setDestinationEntity(104U);
    msg.total_steps = 84U;
    msg.step_number = 73U;
    msg.step.assign("RZROKBNSTTXIEWLWFAXBSTXANZYWTDHRYDK");
    msg.flags = 6U;

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
    msg.setTimeStamp(0.155745170858);
    msg.setSource(60223U);
    msg.setSourceEntity(98U);
    msg.setDestination(28640U);
    msg.setDestinationEntity(157U);
    msg.state = 126U;
    msg.error.assign("MWFRZBEACPCVMBDH");

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
    msg.setTimeStamp(0.901365933077);
    msg.setSource(47263U);
    msg.setSourceEntity(165U);
    msg.setDestination(33491U);
    msg.setDestinationEntity(207U);
    msg.state = 134U;
    msg.error.assign("ZJKCUOHWNMFHNEDQNQOVAGHJCYJBIYNGLGEFYWORPNSDEBHXCJWYTIOTMDBEQMLXHPUEMPMQJXAR");

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
    msg.setTimeStamp(0.657859480353);
    msg.setSource(23151U);
    msg.setSourceEntity(178U);
    msg.setDestination(34433U);
    msg.setDestinationEntity(188U);
    msg.state = 215U;
    msg.error.assign("DCQEIGATIPLVFZQSWIIRVBGHQAPWZVXTZRKYNJNNJVMWOTOHTISFOUFWHJFFNUGEJTDXQERTKGRUTHHGSPIQYRXMWTWNLWOHQTYCVPCJ");

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
    msg.setTimeStamp(0.908218578845);
    msg.setSource(3720U);
    msg.setSourceEntity(58U);
    msg.setDestination(52334U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.576716536315);
    msg.setSource(36957U);
    msg.setSourceEntity(138U);
    msg.setDestination(33191U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.922226546345);
    msg.setSource(59962U);
    msg.setSourceEntity(5U);
    msg.setDestination(39450U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.253765073418);
    msg.setSource(10722U);
    msg.setSourceEntity(56U);
    msg.setDestination(48541U);
    msg.setDestinationEntity(70U);
    msg.op = 75U;
    msg.speed_min = 0.572469362093;
    msg.speed_max = 0.890553443035;
    msg.long_accel = 0.607738717953;
    msg.alt_max_msl = 0.286542675025;
    msg.dive_fraction_max = 0.170326472693;
    msg.climb_fraction_max = 0.196710490605;
    msg.bank_max = 0.202127401133;
    msg.p_max = 0.0887709220621;
    msg.pitch_min = 0.748146470435;
    msg.pitch_max = 0.225624912755;
    msg.q_max = 0.568148217352;
    msg.g_min = 0.961577325257;
    msg.g_max = 0.0422081168458;
    msg.g_lat_max = 0.941692161894;
    msg.rpm_min = 0.84876485091;
    msg.rpm_max = 0.453553160514;
    msg.rpm_rate_max = 0.753782099873;

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
    msg.setTimeStamp(0.370996760617);
    msg.setSource(15182U);
    msg.setSourceEntity(179U);
    msg.setDestination(40448U);
    msg.setDestinationEntity(236U);
    msg.op = 81U;
    msg.speed_min = 0.832847046851;
    msg.speed_max = 0.723339240797;
    msg.long_accel = 0.530847927427;
    msg.alt_max_msl = 0.636850207426;
    msg.dive_fraction_max = 0.253026104499;
    msg.climb_fraction_max = 0.775415112366;
    msg.bank_max = 0.351125378852;
    msg.p_max = 0.0233216528291;
    msg.pitch_min = 0.97845626314;
    msg.pitch_max = 0.441378667587;
    msg.q_max = 0.491223539881;
    msg.g_min = 0.0750509360177;
    msg.g_max = 0.351749690625;
    msg.g_lat_max = 0.259497361946;
    msg.rpm_min = 0.347036544439;
    msg.rpm_max = 0.924039037405;
    msg.rpm_rate_max = 0.156247105616;

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
    msg.setTimeStamp(0.901370490965);
    msg.setSource(896U);
    msg.setSourceEntity(157U);
    msg.setDestination(53517U);
    msg.setDestinationEntity(147U);
    msg.op = 243U;
    msg.speed_min = 0.617661422533;
    msg.speed_max = 0.999275979376;
    msg.long_accel = 0.941306943566;
    msg.alt_max_msl = 0.549111530724;
    msg.dive_fraction_max = 0.30871248864;
    msg.climb_fraction_max = 0.894977408179;
    msg.bank_max = 0.332391079169;
    msg.p_max = 0.78225345252;
    msg.pitch_min = 0.659691240761;
    msg.pitch_max = 0.424674025346;
    msg.q_max = 0.00570411856073;
    msg.g_min = 0.656279918035;
    msg.g_max = 0.0828476037497;
    msg.g_lat_max = 0.273359712023;
    msg.rpm_min = 0.744047159492;
    msg.rpm_max = 0.37468547121;
    msg.rpm_rate_max = 0.422829837808;

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
    msg.setTimeStamp(0.898710573044);
    msg.setSource(44766U);
    msg.setSourceEntity(37U);
    msg.setDestination(31928U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.41683187852);
    msg.setSource(63919U);
    msg.setSourceEntity(86U);
    msg.setDestination(24523U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.286251872771);
    msg.setSource(32316U);
    msg.setSourceEntity(219U);
    msg.setDestination(5658U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.584294989029);
    msg.setSource(57092U);
    msg.setSourceEntity(21U);
    msg.setDestination(37691U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.752763657337;
    msg.lon = 0.837301027969;
    msg.height = 0.601406638435;
    msg.x = 0.575351553179;
    msg.y = 0.722812482852;
    msg.z = 0.916046226977;
    msg.phi = 0.0632432515084;
    msg.theta = 0.0436236980544;
    msg.psi = 0.708211440996;
    msg.u = 0.0283760417805;
    msg.v = 0.562430275319;
    msg.w = 0.0264474671705;
    msg.p = 0.392832685711;
    msg.q = 0.714765184092;
    msg.r = 0.159467078902;
    msg.svx = 0.993901399798;
    msg.svy = 0.790023785022;
    msg.svz = 0.648013056584;

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
    msg.setTimeStamp(0.84774665726);
    msg.setSource(52280U);
    msg.setSourceEntity(28U);
    msg.setDestination(51540U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.287359919646;
    msg.lon = 0.204989521129;
    msg.height = 0.72237077899;
    msg.x = 0.941030112243;
    msg.y = 0.787654750028;
    msg.z = 0.662315548281;
    msg.phi = 0.841413081028;
    msg.theta = 0.247241479297;
    msg.psi = 0.192462658673;
    msg.u = 0.118092277116;
    msg.v = 0.467527597798;
    msg.w = 0.247183281261;
    msg.p = 0.0934167584095;
    msg.q = 0.504620980147;
    msg.r = 0.386282334712;
    msg.svx = 0.238122500581;
    msg.svy = 0.169205231242;
    msg.svz = 0.168893336522;

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
    msg.setTimeStamp(0.510354226208);
    msg.setSource(17261U);
    msg.setSourceEntity(201U);
    msg.setDestination(58248U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.240518262645;
    msg.lon = 0.0892373925467;
    msg.height = 0.673241257753;
    msg.x = 0.0605159899768;
    msg.y = 0.887076608262;
    msg.z = 0.952647480287;
    msg.phi = 0.476386321884;
    msg.theta = 0.289786952794;
    msg.psi = 0.0325171468142;
    msg.u = 0.440528364632;
    msg.v = 0.45970625591;
    msg.w = 0.60575825585;
    msg.p = 0.611136761285;
    msg.q = 0.920540120426;
    msg.r = 0.593279191304;
    msg.svx = 0.622194356035;
    msg.svy = 0.271863628809;
    msg.svz = 0.229775682501;

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
    msg.setTimeStamp(0.160618988569);
    msg.setSource(38859U);
    msg.setSourceEntity(191U);
    msg.setDestination(23765U);
    msg.setDestinationEntity(129U);
    msg.op = 20U;
    msg.entities.assign("ZRWRZYFMNNBQXMUKTAHCCS");

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
    msg.setTimeStamp(0.643052285688);
    msg.setSource(22978U);
    msg.setSourceEntity(85U);
    msg.setDestination(10185U);
    msg.setDestinationEntity(2U);
    msg.op = 213U;
    msg.entities.assign("PWSKPCAXBYKLEJEKCHLLKGYCJWCVSVBXVWGRDZIRVJFHEKHQSBGPONUPMNXSWELKTBYDYFZKOEIJTFUANDNTNINLLGCRULDUTUCMUCOFAWTDAASHUPOROIHQSFPZJ");

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
    msg.setTimeStamp(0.29262770585);
    msg.setSource(43258U);
    msg.setSourceEntity(246U);
    msg.setDestination(21502U);
    msg.setDestinationEntity(231U);
    msg.op = 116U;
    msg.entities.assign("QMVRYZVRJYSQNHZURMFUJTOKBEBWVOXJTPHHPCDBSLAKNZEHFUFGCZCDVHCDKDEVZKGSBZQFFLMSNCFWXVENQVVSQOP");

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
    msg.setTimeStamp(0.0130714162146);
    msg.setSource(63336U);
    msg.setSourceEntity(207U);
    msg.setDestination(17364U);
    msg.setDestinationEntity(141U);
    msg.type = 181U;
    msg.speed = 13420U;
    const char tmp_msg_0[] = {-1, 43, 17, 67, 58, 9, 5, 93, -122, 53, -6, 53, 23, 98, 23, 111, -31, 35, 19, -37, 80, -63, 114, 53, -86, 5, -69, 114, 120, 30, 11, -100, -27, -116, 108, -33, -47, 109, -121, 37, 55, 115, -67, -87, 90, -85, -52, -89, -4, -70, -65, -71, -85, -126, 64, -7, -106, 124, 73, 65, -3, -93, -35, 47, -9, -34, -102, 37, 48, 47, -96, -83, -77, -83, 32, 30, -24, 101, 95, 75, 41, -128, -104, 94, 60, 40, -59, 31, 115, -8, 34, -112, -15, -39, -82, -16, -89, 88, 67, -6, 4, 104, 30, -74, 121, -80, -85, -54, 115, -96, -110, -72, 33, -103, -115, -54, 68, 19, 34, 119, 64, -69, -39, 55, -56, 61, 121, 93, -36, -25, 31, 107, 90, -14, -42, -24, -52, 74, 45, 12, -115, 99, -126, 31, -42, 17, 121, -27, 57, -3, -28, 116, 4, 27, 74, -113, 75};
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
    msg.setTimeStamp(0.705692748806);
    msg.setSource(3369U);
    msg.setSourceEntity(145U);
    msg.setDestination(19811U);
    msg.setDestinationEntity(176U);
    msg.type = 99U;
    msg.speed = 18096U;
    const char tmp_msg_0[] = {-105, 92, -22, -51, -92, -12, 94, 74, -37, 47, -85, 112, 118, -65, -53, -16, -87, 93, 126, -74, 82, 107, 46, 12, -20, 29, -105, -98, -76, 59, -111, 31, -63, -109, -111, 45, 43, 9, -40, -62, 14, -128, 100, 41, -118, 71, -118, 42, -104, 15, 86, 26, 99, 3, 31, -46, 52, 82, -91, -52, -36, 124, -50, -105, -3, 12, 85, -14, -88, -64, -55, 88, -61, 94, -13, 58, -82, 11, 88, -64, 32, 83, -65, -35, 41, 25, 60, -48, 0, 104, 29, -124, -107, -100, 32, -117, 54, -44, -23, 7, -6, -14, 30, -81, -65, 68, -71, 24, 70, -48, 35, 74, -123};
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
    msg.setTimeStamp(0.64507059179);
    msg.setSource(10401U);
    msg.setSourceEntity(110U);
    msg.setDestination(39887U);
    msg.setDestinationEntity(164U);
    msg.type = 52U;
    msg.speed = 51964U;
    const char tmp_msg_0[] = {18, 79, -11, 17, -85, 87, 120, 59, -127, -39, 110, 107, 99, -106, 31, 82, -91, -65, 4, 97, -12, 60, 77, 81, 46, 70, 75, -68, -32, 93, -59, 124, -1, -2, -36, -112, 81, -27, -73, 84, 84, -44, 7, 49, 42, -95, 2, 75, 54, 6, -47, -103, 18, -44, -70, -80, 94, 75, 53, -126, 94, 34, -55, 80, -76, -101, 41, -40, -46, 20, 32, -101, -61, -74, 84, -1, 33, 70, -84, -45, -86, -51, -32, 120, -40, 120, -32, -80, -80, -12, -83, -113};
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
    msg.setTimeStamp(0.98339618744);
    msg.setSource(64647U);
    msg.setSourceEntity(45U);
    msg.setDestination(52359U);
    msg.setDestinationEntity(25U);
    msg.op = 125U;
    msg.tas2acc_pgain = 0.682052037515;
    msg.bank2p_pgain = 0.413374976192;

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
    msg.setTimeStamp(0.92627560538);
    msg.setSource(15305U);
    msg.setSourceEntity(208U);
    msg.setDestination(58584U);
    msg.setDestinationEntity(97U);
    msg.op = 107U;
    msg.tas2acc_pgain = 0.928888492036;
    msg.bank2p_pgain = 0.399619758779;

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
    msg.setTimeStamp(0.138189514118);
    msg.setSource(58300U);
    msg.setSourceEntity(164U);
    msg.setDestination(36586U);
    msg.setDestinationEntity(34U);
    msg.op = 151U;
    msg.tas2acc_pgain = 0.488077773836;
    msg.bank2p_pgain = 0.401988210672;

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
    msg.setTimeStamp(0.877689723485);
    msg.setSource(17306U);
    msg.setSourceEntity(7U);
    msg.setDestination(23233U);
    msg.setDestinationEntity(116U);
    msg.available = 950989691U;
    msg.value = 35U;

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
    msg.setTimeStamp(0.148702535828);
    msg.setSource(36553U);
    msg.setSourceEntity(23U);
    msg.setDestination(51898U);
    msg.setDestinationEntity(177U);
    msg.available = 2074458169U;
    msg.value = 131U;

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
    msg.setTimeStamp(0.227329500524);
    msg.setSource(36221U);
    msg.setSourceEntity(215U);
    msg.setDestination(47865U);
    msg.setDestinationEntity(181U);
    msg.available = 3842867463U;
    msg.value = 29U;

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
    msg.setTimeStamp(0.282798583321);
    msg.setSource(34894U);
    msg.setSourceEntity(250U);
    msg.setDestination(16736U);
    msg.setDestinationEntity(92U);
    msg.op = 11U;
    msg.snapshot.assign("VAYXSPDUSYXDOIVRLCZCFHPRNDGCAAYWTLUZSVXBMISZTEZKKGISOUXFJTUMAVNBPREXTMWNBDEOQAITOCKMRBEBDQWFQLNNLRLCTBZHQQJEYOMYAKRPHIYLFPQIYEPTPQWKWZJUQXFJOSXWWBJKSOFIOVMVZRJFZCDPAUQFANDJKCYHGUGEPUGHZNCTGIORCOMMIHGTJSHUBXKJENBEMHYXNWQHFL");
    IMC::SoiState tmp_msg_0;
    tmp_msg_0.state = 30U;
    tmp_msg_0.plan_id = 43020U;
    tmp_msg_0.wpt_id = 164U;
    tmp_msg_0.settings_chk = 10654U;
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
    msg.setTimeStamp(0.395068168031);
    msg.setSource(24469U);
    msg.setSourceEntity(4U);
    msg.setDestination(18553U);
    msg.setDestinationEntity(97U);
    msg.op = 199U;
    msg.snapshot.assign("PPMOVFYMXIYDYJKZTAEXQOGZGOYLAMFDUQPBWGJXJSZFRFRHCHVYVIZJBGKJSHELFKEGXITEWTLORPUUBLHMUGCRJRWUYUUGNX");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 3740U;
    tmp_msg_0.lat = 0.26682159695;
    tmp_msg_0.lon = 0.992566244334;
    tmp_msg_0.z = 0.402686543525;
    tmp_msg_0.z_units = 20U;
    tmp_msg_0.duration = 42307U;
    tmp_msg_0.speed = 0.818073132522;
    tmp_msg_0.speed_units = 200U;
    tmp_msg_0.type = 235U;
    tmp_msg_0.radius = 0.508611287962;
    tmp_msg_0.length = 0.636360004492;
    tmp_msg_0.bearing = 0.243772556812;
    tmp_msg_0.direction = 192U;
    tmp_msg_0.custom.assign("EERTBKEHRDRNCBPDTUDRWYEUPXWRYKODQNXJBKKOQGUZZBAJCULSJLEJGGAQOJWBDMVRUOLIGNAZCNWIMNAHMUXNVZLRVFFJJTUOGMYRSCMTARPQUGFXFHVPMTCTMIAFVHSYTDLQISSWKKMQIYPIVHSZJSWYPUZVXYGHTFZFTADLAEQHYOKXLQVOJPOUDSECNKRHFZIMBFGJZOYEPAQXBK");
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
    msg.setTimeStamp(0.968951614287);
    msg.setSource(6279U);
    msg.setSourceEntity(127U);
    msg.setDestination(31300U);
    msg.setDestinationEntity(97U);
    msg.op = 34U;
    msg.snapshot.assign("BMZQXPYQCHHVGTIXKWEYKMWOTDEEFXSPAUVVQKETEAMY");
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 129U;
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
    msg.setTimeStamp(0.59168865098);
    msg.setSource(47087U);
    msg.setSourceEntity(101U);
    msg.setDestination(27121U);
    msg.setDestinationEntity(70U);
    msg.op = 143U;
    msg.name.assign("CYGSAKNLFSNIXOKZGLZPUNJFRENMCDMZJAWXBTZIUKRBOHIJIDFFMNHKWVTAUBVWFLYKYASNPUCKSCLEQFSTWYPIYQIWPNVADTSGUYGQEZWJOYGQITJPOBQQCSVZKMHRZHTZBIMOL");

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
    msg.setTimeStamp(0.278039943537);
    msg.setSource(2834U);
    msg.setSourceEntity(162U);
    msg.setDestination(63471U);
    msg.setDestinationEntity(155U);
    msg.op = 78U;
    msg.name.assign("ZTOPIWRFNMHKPNUSARCDZBELJJPYGXRXRIRUCAHYMMPOEEGSHFFVBOZTWSDOQSXQPZTYAHPZBATXUWKQVSYUVODVATTAYHQYXEI");

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
    msg.setTimeStamp(0.329684641717);
    msg.setSource(33567U);
    msg.setSourceEntity(42U);
    msg.setDestination(19627U);
    msg.setDestinationEntity(156U);
    msg.op = 95U;
    msg.name.assign("JIOGKPTGWUIDNSTMUDPRLPRRFRZQQKUOXT");

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
    msg.setTimeStamp(0.530146405599);
    msg.setSource(38319U);
    msg.setSourceEntity(157U);
    msg.setDestination(13435U);
    msg.setDestinationEntity(179U);
    msg.type = 213U;
    msg.htime = 0.731981717359;
    msg.context.assign("APSLBRXVOXTPTHHNJDQJEKKGYLGSSOPDXYWPKFUEQENSCVGMBVPAMWBCYTCIFJJPNKDNDXIOYUIOCAVZBAPMOKVNQUFMBELCWCUQIKDXYZZIQLWLBGFT");
    msg.text.assign("GEXOFNWCSDAZIXXYYYDXRFDBHGAKHZTWOMATPPUWRFCQDQRXFTASTG");

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
    msg.setTimeStamp(0.268499369104);
    msg.setSource(48395U);
    msg.setSourceEntity(71U);
    msg.setDestination(37180U);
    msg.setDestinationEntity(196U);
    msg.type = 137U;
    msg.htime = 0.631735263365;
    msg.context.assign("RDCJIXMAJUCTDTMHQDIGGVZST");
    msg.text.assign("ZGTUAQIVREIDSAKRFTBQKWMAARNBVLXUGEZYGHFMXWHOVHRAPZJFNBLYFYSEPYEFEJAESGYFCLXBPSQERLZUNDTJRVZJGAQENXVXYJBIRMNWRDXUBHPVROMTMLSDDCPCVPPUXIZGNXHOKCCDFHWTFFWLOQALKYUOBIGXN");

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
    msg.setTimeStamp(0.738717401226);
    msg.setSource(15823U);
    msg.setSourceEntity(70U);
    msg.setDestination(50496U);
    msg.setDestinationEntity(59U);
    msg.type = 201U;
    msg.htime = 0.678695817601;
    msg.context.assign("XTNDNWTWRKWCNJUZSEZBZBIQJVQWMFDSAQSIGRLPEKYGAOTFGHDQYVZCSEPFBTZHLJVOBFARDCLQMBWMDNTYDNSESZIXSGAZGRGNOTVMOTKBRLMMPHKVAMXXVYERUJETVHAKIABYJMUNROLVLFCCDBULWWRYERMPKQ");
    msg.text.assign("DYMIWHBRZGJTMXKVLKVSLNLDPJQLSDILJGTFZTSIDFHMVPGHEJNEGGYLOVFUCXBBGNLKTMNYOAZWEUELSJUUWUQRIGWZPFNF");

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
    msg.setTimeStamp(0.864714557295);
    msg.setSource(35439U);
    msg.setSourceEntity(247U);
    msg.setDestination(51587U);
    msg.setDestinationEntity(102U);
    msg.command = 175U;
    msg.htime = 0.751044680346;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 113U;
    tmp_msg_0.htime = 0.126020086587;
    tmp_msg_0.context.assign("PFDVBMADHZZBXHNREBLNMHQIARPUSUHYOOFWYQECWECQATKFRNILOUUUYTRWYKUQYGMRNDCVOIISCBAEIUIZERMWKXEKSXDAZUGNZFPCLVXQWYYSNSLZMVHOTHYZEWGFFZHBEJBJDOVAMFJTNGFQHWZSCPGJUIXBKPJMDMTOXPJTDCMN");
    tmp_msg_0.text.assign("ROUIFLCNEYUBVUULGBWGNISEXSPMNGISIUQBZEYKFYVTQYWQXCELBUSGLDJGVHBPELJIYGTJYWRNORDBQHQXSDTZMRVTHOFNERHQJSPXTRNWAMBFGMQNDIDOTRXVAUANLEYPUFOKEZYXVOHWCFDVSZAAHHXGGKABKSDIMZFNPM");
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
    msg.setTimeStamp(0.800894774134);
    msg.setSource(30885U);
    msg.setSourceEntity(140U);
    msg.setDestination(29857U);
    msg.setDestinationEntity(231U);
    msg.command = 136U;
    msg.htime = 0.260059479433;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 41U;
    tmp_msg_0.htime = 0.710335215667;
    tmp_msg_0.context.assign("HDNFQDZHKZJSKMHAIEGBTFSGGOHIFGSNXCBUAIAXTGPPTWEUDZMWGZHYFQPLLTRUOQKAOIVCBAAQFIOZSBMHXLMQNZCZDNJZDRKKJQBMUQCPXBUXVVTYRGYRYTWROXOSCCHGTDFFOKETEPLEXQPVKEQTZZUNPSATSVVXONNDYVLBLK");
    tmp_msg_0.text.assign("HEENCICOFOOBZJXJUNMUBQTPPUXBVONAQHAWSYYDRSCONZCAXMJPZJKGHLISFMHIYKGSFBNWYUZABBSDVCKHPTLKSERDWAZSWOBTSKWJHRJJYGRADDCEFVDVAMUWUQQUWGYCIXTBOELXRZKXPGTMUAFDVAUOQRKQHXLTWPFVNTGIHJYGLIJIPLWSCIXJEOYFZPQVMNRIDSMYQGREHWLPRZNPCXIBZZQFTRLULEYVMNCKNAGDEFE");
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
    msg.setTimeStamp(0.0836569023381);
    msg.setSource(54478U);
    msg.setSourceEntity(96U);
    msg.setDestination(1310U);
    msg.setDestinationEntity(49U);
    msg.command = 163U;
    msg.htime = 0.153735773233;

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
    msg.setTimeStamp(0.694869471616);
    msg.setSource(12294U);
    msg.setSourceEntity(229U);
    msg.setDestination(36744U);
    msg.setDestinationEntity(45U);
    msg.op = 69U;
    msg.file.assign("BXAKTOUKCTXBROIKTNTLRKZHMZZBUSHEGOESYOVYSNJKGTAGMFGVLCQGNJLFCFRRQMUFAJXMERBFDUEIGJJHMZHDGQGBWPCHTEENPIMZOISWINISSTJIQLZXVUNBFWDRBTCQYGAFZZYJDYXBYYEWMWSXVMNNOLRFPHKCWPPNKUCVOPJOACWPTRHYFESH");

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
    msg.setTimeStamp(0.104965629603);
    msg.setSource(3096U);
    msg.setSourceEntity(110U);
    msg.setDestination(18085U);
    msg.setDestinationEntity(14U);
    msg.op = 240U;
    msg.file.assign("KUYKJTGUSRDNEDWIZMHBJAHPPYIWADQOZVYSXPEQASWLKQEFSBMZIHBLXOWBFSVUPLUZIGPQHMYIKTMMVXVJKVHUQPFTLO");

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
    msg.setTimeStamp(0.251731318981);
    msg.setSource(37352U);
    msg.setSourceEntity(119U);
    msg.setDestination(30096U);
    msg.setDestinationEntity(229U);
    msg.op = 92U;
    msg.file.assign("LBSHWHBISBBRFPVOSLOXJVFOVVQPONEDMGLGZVPFXYQPCLBEMNLWJAUADOZPPZAOQREFXJETMUICIYCUKLRAMVNIAILHZJYTUDJGDRJVZISEWLMSZRZJNIJFQDMVYMDMUYJAFTEOCUYJVKSSRGUGOHHTHZVCZEKRKLBKPTXPAANXNAQYWFGXZGPDYOBNDNIYWIEROITHABFCEFXKMTQW");

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
    msg.setTimeStamp(0.586732788224);
    msg.setSource(65106U);
    msg.setSourceEntity(90U);
    msg.setDestination(11107U);
    msg.setDestinationEntity(58U);
    msg.op = 118U;
    msg.clock = 0.602750296907;
    msg.tz = 84;

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
    msg.setTimeStamp(0.860514900192);
    msg.setSource(21950U);
    msg.setSourceEntity(80U);
    msg.setDestination(21963U);
    msg.setDestinationEntity(146U);
    msg.op = 246U;
    msg.clock = 0.596350174837;
    msg.tz = 63;

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
    msg.setTimeStamp(0.250886051519);
    msg.setSource(10335U);
    msg.setSourceEntity(93U);
    msg.setDestination(47412U);
    msg.setDestinationEntity(158U);
    msg.op = 242U;
    msg.clock = 0.282059675788;
    msg.tz = -1;

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
    msg.setTimeStamp(0.417398493244);
    msg.setSource(14174U);
    msg.setSourceEntity(145U);
    msg.setDestination(51038U);
    msg.setDestinationEntity(194U);
    msg.conductivity = 0.31843783993;
    msg.temperature = 0.156277205011;
    msg.depth = 0.686825122897;

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
    msg.setTimeStamp(0.140699068876);
    msg.setSource(24094U);
    msg.setSourceEntity(47U);
    msg.setDestination(56346U);
    msg.setDestinationEntity(66U);
    msg.conductivity = 0.511852869559;
    msg.temperature = 0.427292532511;
    msg.depth = 0.71696856341;

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
    msg.setTimeStamp(0.376531093507);
    msg.setSource(50557U);
    msg.setSourceEntity(136U);
    msg.setDestination(57244U);
    msg.setDestinationEntity(213U);
    msg.conductivity = 0.669467873208;
    msg.temperature = 0.990232730661;
    msg.depth = 0.836140356856;

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
    msg.setTimeStamp(0.602017912675);
    msg.setSource(32266U);
    msg.setSourceEntity(180U);
    msg.setDestination(3345U);
    msg.setDestinationEntity(179U);
    msg.altitude = 0.246951782951;
    msg.roll = 46160U;
    msg.pitch = 8850U;
    msg.yaw = 2511U;
    msg.speed = -3501;

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
    msg.setTimeStamp(0.0240898791324);
    msg.setSource(16365U);
    msg.setSourceEntity(28U);
    msg.setDestination(37426U);
    msg.setDestinationEntity(33U);
    msg.altitude = 0.46113822063;
    msg.roll = 20213U;
    msg.pitch = 51870U;
    msg.yaw = 17210U;
    msg.speed = -136;

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
    msg.setTimeStamp(0.912649414177);
    msg.setSource(7451U);
    msg.setSourceEntity(99U);
    msg.setDestination(7085U);
    msg.setDestinationEntity(122U);
    msg.altitude = 0.977833944818;
    msg.roll = 34162U;
    msg.pitch = 63387U;
    msg.yaw = 50701U;
    msg.speed = 20610;

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
    msg.setTimeStamp(0.887026663706);
    msg.setSource(45399U);
    msg.setSourceEntity(149U);
    msg.setDestination(25404U);
    msg.setDestinationEntity(96U);
    msg.altitude = 0.810676586039;
    msg.width = 0.815649823172;
    msg.length = 0.821810859937;
    msg.bearing = 0.268176527438;
    msg.pxl = 30869;
    msg.encoding = 239U;
    const char tmp_msg_0[] = {-35, 65, 108, -102, -101, 87, 72, -47, -38, -66, -32, -97, 58, -99, 90, -121, 73, -73, -120, 35, -37, 74, -36, 99, -17, 18, -85, 16, -84, 105, 83, -102, -59, -17, -10, -11, -71, -71, -17, -6, 107, -31, -62};
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
    msg.setTimeStamp(0.744890653);
    msg.setSource(38921U);
    msg.setSourceEntity(246U);
    msg.setDestination(47069U);
    msg.setDestinationEntity(19U);
    msg.altitude = 0.025801722953;
    msg.width = 0.160211964214;
    msg.length = 0.707705894322;
    msg.bearing = 0.743289870144;
    msg.pxl = 5149;
    msg.encoding = 75U;
    const char tmp_msg_0[] = {-88, -85, -70, 64, -97, 42, -6, -46, 27, -30, 52, 44, 105, 19, 100, -43, 90, 1, 85, 40, 118, 3, 94, 103, 69, 55, 113, -104, -64, -53, 71, 68, 51, -35, 90, 18, -106, -98, -82, 36, -51, -87, -54, 56, -120, -20, 52, 114, -9, 12, 102, -29, 39, -21, -81, -44, 112, 119, -105, 85, 79, -43, -120, -127, 107, -96, 123, -27, -12, -74, -116, -125, -80, 104, -24, 17, 48, -116, 48, 34, 97, 38, -128, 124, -80, -89, 93, -50, -20, 100, 83, -110, -111, -94, 52, 41, -121, 108, -21, 91, -71, -80, -27, -59, 54, -56, 103, 26, 54, -66, -28, -114, 12, -19, -128, 40, -113, 119, -55, -39, -96, -37, 40, 115, -83, 103, -59, 64, -12, -102, 63, 30, 104, 1, -10, -128, -100, 73, 81, 116, 16, -29, 96, 67, 74, 32, -21, -35, -73, -41};
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
    msg.setTimeStamp(0.84654135686);
    msg.setSource(33396U);
    msg.setSourceEntity(198U);
    msg.setDestination(12842U);
    msg.setDestinationEntity(165U);
    msg.altitude = 0.523915401067;
    msg.width = 0.656014972885;
    msg.length = 0.499032315836;
    msg.bearing = 0.0147968355241;
    msg.pxl = -32317;
    msg.encoding = 182U;
    const char tmp_msg_0[] = {6, -25, -20, 83, 74, -125, 21, 61, -35, 65, -123, 25, -2, 56, -90, -89, 77, -71, 22, -113, -64, -106, 52, -20, -71, -105, 70, 69, -39, -28, -39, -12, 27, -68, 65, -39, -92, 4, 89, 73, 48, -17, -9, 115, 57, 53, 28, -50, 9, 91};
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
    msg.setTimeStamp(0.838120449148);
    msg.setSource(45541U);
    msg.setSourceEntity(57U);
    msg.setDestination(11374U);
    msg.setDestinationEntity(212U);
    msg.text.assign("QGTPOBOYNJRJLXNXVQUTBIWHFKAFFADUNJVIHMWZNLEZFGLNUABGOEMDOWAEWSICURWIEPCVVJWCVNZPKLYXSKFUGTPRCHXJLYKSBZFCPYOFYOYOLLNPURAFVHQGY");
    msg.type = 41U;

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
    msg.setTimeStamp(0.122981544727);
    msg.setSource(25403U);
    msg.setSourceEntity(13U);
    msg.setDestination(64871U);
    msg.setDestinationEntity(188U);
    msg.text.assign("GBSWWGHXUVKGHOWCKVDEDYOBOXVPYNPCEQYJVYCVHQXSWPNEBMRBSLNTEFIXCKKVQZKRORPRJFHATMUUDZYBTZTHCULIBFISQYXNDZLKULPIMIDDMTIQWNQGHLFLXP");
    msg.type = 187U;

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
    msg.setTimeStamp(0.947136750323);
    msg.setSource(22551U);
    msg.setSourceEntity(49U);
    msg.setDestination(19949U);
    msg.setDestinationEntity(80U);
    msg.text.assign("IOIPBKDHLAGLVTSOKRBNFETAFEFXECTROWXZGDROLRLZNHANERMGUFEWQDJCAYBCLBBUSQGPNHYDPLWSFLZVMMXECFINGVZCQUPLIYVPSNQUZBKGYTWGICJOXBOZTBAOAJTEFUSSXKKWMZNVFWFPMPPJWGMZVPLQSDAFCJKSUHMHQCDBIJRYJMDNULEORTIKQOHUDSGDUQWTYIRMXKJUZH");
    msg.type = 168U;

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
    msg.setTimeStamp(0.542189111107);
    msg.setSource(60649U);
    msg.setSourceEntity(100U);
    msg.setDestination(25861U);
    msg.setDestinationEntity(59U);
    msg.parameter = 157U;
    msg.numsamples = 6U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 22613U;
    tmp_msg_0.avg = 0.538503246265;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.357489497341;
    msg.lon = 0.985570266386;

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
    msg.setTimeStamp(0.783521546209);
    msg.setSource(14014U);
    msg.setSourceEntity(249U);
    msg.setDestination(29029U);
    msg.setDestinationEntity(48U);
    msg.parameter = 164U;
    msg.numsamples = 183U;
    msg.lat = 0.547369832521;
    msg.lon = 0.520115871921;

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
    msg.setTimeStamp(0.0530838998676);
    msg.setSource(4201U);
    msg.setSourceEntity(106U);
    msg.setDestination(41937U);
    msg.setDestinationEntity(4U);
    msg.parameter = 70U;
    msg.numsamples = 205U;
    msg.lat = 0.434603721989;
    msg.lon = 0.432635301209;

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
    msg.setTimeStamp(0.175213886514);
    msg.setSource(19266U);
    msg.setSourceEntity(97U);
    msg.setDestination(34561U);
    msg.setDestinationEntity(82U);
    msg.depth = 8829U;
    msg.avg = 0.902018803793;

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
    msg.setTimeStamp(0.954423450847);
    msg.setSource(19756U);
    msg.setSourceEntity(3U);
    msg.setDestination(12524U);
    msg.setDestinationEntity(236U);
    msg.depth = 57793U;
    msg.avg = 0.157451564783;

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
    msg.setTimeStamp(0.370842770832);
    msg.setSource(26047U);
    msg.setSourceEntity(214U);
    msg.setDestination(8792U);
    msg.setDestinationEntity(72U);
    msg.depth = 47042U;
    msg.avg = 0.721923813635;

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
    msg.setTimeStamp(0.330901435703);
    msg.setSource(21696U);
    msg.setSourceEntity(30U);
    msg.setDestination(64380U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.998831844667);
    msg.setSource(3022U);
    msg.setSourceEntity(165U);
    msg.setDestination(11893U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.690749632322);
    msg.setSource(7477U);
    msg.setSourceEntity(106U);
    msg.setDestination(1356U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.558924773223);
    msg.setSource(11482U);
    msg.setSourceEntity(205U);
    msg.setDestination(40311U);
    msg.setDestinationEntity(113U);
    msg.sys_name.assign("WGKHPDHJZZYMQKUBRTPHUMURGGHMIWECYLDOOBUXFYNKFZIBUQZBKSBKQJKENYIEK");
    msg.sys_type = 151U;
    msg.owner = 58377U;
    msg.lat = 0.833101949351;
    msg.lon = 0.617615481624;
    msg.height = 0.48895191791;
    msg.services.assign("OBVXIOTIRSXCXDMLBTEKPOKGYMCWYHABOZURPNAYDWIUHRAQKNZKVNBADNXATSGQNQWVCIQFQEFWACZEOTBGHDGNQSCOFCYIUHVNILSBGGBJUSDLUTVHYHMIGZGAMYRBJEPNFMAGFZESYJHJVMROKFLYQWQCIFVZASBHKXDUXUZNUSZDKKWEKWJWGWLJPIMJRPBRHDOZVPRSLXVJSHCQU");

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
    msg.setTimeStamp(0.752554313706);
    msg.setSource(17870U);
    msg.setSourceEntity(249U);
    msg.setDestination(26187U);
    msg.setDestinationEntity(70U);
    msg.sys_name.assign("TXJFXTIZLNFUPMVSPWXIOELKJCEPRITQBQAAPIEWCCNLZTXLSGTFYMBHUERAOJNZMKJBGQZKQQITTTUSGHCNOHLDIUWDRXOYXSKCJSZCWREYFLJDYWLWZVBEDPOCVGWANKSBHOBAYZDGUKAQSVFXVSDRNBVDNWCUJMOKBRFG");
    msg.sys_type = 84U;
    msg.owner = 33273U;
    msg.lat = 0.963361218519;
    msg.lon = 0.676071627054;
    msg.height = 0.68010335882;
    msg.services.assign("GVDXKEPOLIFDXD");

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
    msg.setTimeStamp(0.623798545438);
    msg.setSource(26044U);
    msg.setSourceEntity(196U);
    msg.setDestination(45493U);
    msg.setDestinationEntity(153U);
    msg.sys_name.assign("XLBSMLNMKDRWGMNLQIMOBOBTXIEVCEZEIOQZRBDASFDTPXRTRZQKXZYSABMFYGJWAMNDYYLXTIWNLYBTKSZFHSONOAKZGWOSQEVJUUOPXPKXFNMQKHDQMJJAFCBAJODVAGIAETFTZRGQHIJDWCENPDRPINJ");
    msg.sys_type = 214U;
    msg.owner = 20338U;
    msg.lat = 0.626095991927;
    msg.lon = 0.871176679152;
    msg.height = 0.573542203759;
    msg.services.assign("HWJWJNRNNUMDXPOUTENIXYVXDGTVDAZHIQGVHFZA");

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
    msg.setTimeStamp(0.701378380471);
    msg.setSource(60857U);
    msg.setSourceEntity(30U);
    msg.setDestination(43225U);
    msg.setDestinationEntity(98U);
    msg.service.assign("BTWPXYVVKEEIIDBUVLBUNTCVOSODVFTXXRFZCHUQERNSPDNEEJJPPAIPXRAZTZSTMCTGKQABSZFMWESRIUTMHCJROGYBDCYPUSC");
    msg.service_type = 218U;

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
    msg.setTimeStamp(0.579905250046);
    msg.setSource(8454U);
    msg.setSourceEntity(63U);
    msg.setDestination(45953U);
    msg.setDestinationEntity(124U);
    msg.service.assign("NPGOQLWAEIGWHEIUKVKFTWUTEKUTVDXBVVDYICEALIPXFAYDBYIYITBBWRNTKEEQKDSAMSPSISWFRRHYHZOPSVCF");
    msg.service_type = 247U;

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
    msg.setTimeStamp(0.0522712186356);
    msg.setSource(23374U);
    msg.setSourceEntity(11U);
    msg.setDestination(57308U);
    msg.setDestinationEntity(127U);
    msg.service.assign("NBJGRXDBGCHMSLRCKBSNCNQNGZYDDNLMXFCHXQVLUFZSGQTVOPOKHXAKRSODHYVVGKCAYPOYLWTWPXTHSKJIYFUTLGAAMUCPMBPMQBEACIOJRHPRILUVNITWAOFMWFRTXIEPODBJMPDKGSVUZBEGHCJWVBVEQATMJQNGLJZZJKXIFOZNQAUYBHFUCEFYZSELLWRZTWIEEUMZAKXKIZPDQIJJRWSTBHDWYGSCMOXHV");
    msg.service_type = 195U;

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
    msg.setTimeStamp(0.0986035330183);
    msg.setSource(47949U);
    msg.setSourceEntity(194U);
    msg.setDestination(25678U);
    msg.setDestinationEntity(195U);
    msg.value = 0.417581960488;

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
    msg.setTimeStamp(0.517252408475);
    msg.setSource(35494U);
    msg.setSourceEntity(106U);
    msg.setDestination(41959U);
    msg.setDestinationEntity(253U);
    msg.value = 0.346754906653;

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
    msg.setTimeStamp(0.683411523122);
    msg.setSource(57427U);
    msg.setSourceEntity(81U);
    msg.setDestination(40246U);
    msg.setDestinationEntity(96U);
    msg.value = 0.548732052313;

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
    msg.setTimeStamp(0.602070907512);
    msg.setSource(58454U);
    msg.setSourceEntity(2U);
    msg.setDestination(46472U);
    msg.setDestinationEntity(105U);
    msg.value = 0.663611200422;

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
    msg.setTimeStamp(0.188195036334);
    msg.setSource(9159U);
    msg.setSourceEntity(123U);
    msg.setDestination(30304U);
    msg.setDestinationEntity(58U);
    msg.value = 0.454406470006;

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
    msg.setTimeStamp(0.611850687662);
    msg.setSource(39927U);
    msg.setSourceEntity(71U);
    msg.setDestination(34824U);
    msg.setDestinationEntity(177U);
    msg.value = 0.767991179084;

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
    msg.setTimeStamp(0.925648660236);
    msg.setSource(3111U);
    msg.setSourceEntity(114U);
    msg.setDestination(34481U);
    msg.setDestinationEntity(122U);
    msg.value = 0.538826909295;

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
    msg.setTimeStamp(0.535801300391);
    msg.setSource(38874U);
    msg.setSourceEntity(11U);
    msg.setDestination(39893U);
    msg.setDestinationEntity(118U);
    msg.value = 0.430258290389;

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
    msg.setTimeStamp(0.35686067169);
    msg.setSource(38888U);
    msg.setSourceEntity(244U);
    msg.setDestination(26783U);
    msg.setDestinationEntity(100U);
    msg.value = 0.909523011492;

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
    msg.setTimeStamp(0.148001066672);
    msg.setSource(54049U);
    msg.setSourceEntity(9U);
    msg.setDestination(63979U);
    msg.setDestinationEntity(166U);
    msg.number.assign("EQXWQQPNPAYUKKOEDYPKQVOOINVIBTEZNGAPOZCBYKLOZHTPHGBUSSNSVNAUAPIEFEFYQPMCRTCFMJXURAZORJCNTLDAHVRSHWELHIYLWDDDIUVORHVDXA");
    msg.timeout = 31076U;
    msg.contents.assign("MCDOCHUYXWRGYLHLQQVLEFOEI");

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
    msg.setTimeStamp(0.818311312319);
    msg.setSource(11429U);
    msg.setSourceEntity(195U);
    msg.setDestination(62568U);
    msg.setDestinationEntity(83U);
    msg.number.assign("NRXBVVWTPDTCYLOIHLCQECAVLQLDZIOQAYETUMBXPFYLZSJOSJXBAASXEAJHGKWYKYZHEAXTIMIJMOKGCQPUSCBPWMITDRMTMFSO");
    msg.timeout = 49679U;
    msg.contents.assign("ZNAJZQMTQQIMPRGDRNCNRPXFRGAAOLLCMHYSJAQTHHEPOTFEUZFWPMCKIYJJFPTFILDRSACPIRVJJMPEXOSXCGMCQZMEZONVZXDOGELADDJWKWIQLNYYUVKUUQYUZBGYWQSYORSDIEBULBBWXZBXBNGHFFAOMWKSYVPXJULGTEGUYJCLIAZSTVFEZTQWCOWMHBKOJDDWKKFLVSGAUEVHDRHCCQPKIVEUISVSMRBLNAPOTVXXBXKKYTNRNTIHGH");

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
    msg.setTimeStamp(0.728447077414);
    msg.setSource(49613U);
    msg.setSourceEntity(190U);
    msg.setDestination(11256U);
    msg.setDestinationEntity(163U);
    msg.number.assign("UGXVKETNLDXIYHCFMLVXETUMWBVNOVGDWSXUZKREDSKQJRRPBXOPOMEPMKKXXSDQTPAFYUQPZFVDTVJNF");
    msg.timeout = 47228U;
    msg.contents.assign("FPXEOFGSVRMWHOGYETYRFJTMBGEJHVNPYVOXEYFMDYRDBLQEZAAHSNRQWTWGDOCIPXJLWJPBZSNCMRDFQRIACVBNFHAMWTBZTWSQZUVZUDETALFHBCXJANQQGSPANRCHPMIRUMNCYYENBMKXDRNIWAZLYVQPZKOGBGQVTVKDFXQLPOBLKSFIAHMSKWKRGCIOJFEXHZOIYAZCUGPJSOHDLJWNOXJYDLUK");

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
    msg.setTimeStamp(0.982053943267);
    msg.setSource(21546U);
    msg.setSourceEntity(82U);
    msg.setDestination(50540U);
    msg.setDestinationEntity(211U);
    msg.seq = 1204993987U;
    msg.destination.assign("TEVOZBUZOE");
    msg.timeout = 56550U;
    const char tmp_msg_0[] = {84, -34, -61, 29, -40, 126, -71, -38, 55, 108, -128, 87, 79, 26, -40, -27, -118, 112, 44, -26, 80, -36, 17, 8, -107, -1, -26, 50, -13, -83, 116, -109, 22, -7, -68, -69, 37, -84, -91, 8, 91, -104, 26, -15, 71, -70, -113, -96, -116, -3, -51, -10, -44, 95, -82};
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
    msg.setTimeStamp(0.595924302812);
    msg.setSource(55863U);
    msg.setSourceEntity(49U);
    msg.setDestination(17379U);
    msg.setDestinationEntity(199U);
    msg.seq = 3349462775U;
    msg.destination.assign("BXDLDUNNYLSKDODQFWZEYJCTAMHUPWDGIVRCLGYQVCFBSJHVXWIIOZLGZEZQPIEVMYKKBRGPPUOBXSCTMFJUMGKIJWZQCBHOIUKQARSONJFSAAHBYMXICXOERHDKELSQFNEWCLBSMWPGQRXUOTNSNZJCJONKAHIAUQVMP");
    msg.timeout = 61256U;
    const char tmp_msg_0[] = {110, 27, 45, -37, 40, 5, -126, 73, 22, -77, 40, 98, -57, -19, -47, 21, -17, 49, -82, -109, 13, -4, -47, 126, 103, -25, 121, -31, 33, 120, 58, -60, -109, -11, 67, -48, -13, -103, 80, 89, -1, 107, -77, -110, -28, -3, 26, -36, 25, 57, -61, -4, 70, -20, 49, 44, -67, 50, -6, 112, 70, 50, -30, -25, 65, 95, -85, -50, 33, 68, 126, 100, 58, 9, 86, -22, 69, 35, 19, 103, -84, -63, 16, 7, -119, 124, 5, -13, -22, 21, -67, -15, -120, -119, -18, 19, 10, 102, 105, -28, 122, -91, -109, -72, 64, 83, 78, 98, 114, -115, -30, 101, 123, -79, 123, -38, -115, -76, 18, 119, -93, 89, -27, 63, 74, 66, 14, 67, -108, -118, -17, -68, -95, 111};
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
    msg.setTimeStamp(0.606831831625);
    msg.setSource(26667U);
    msg.setSourceEntity(119U);
    msg.setDestination(32452U);
    msg.setDestinationEntity(86U);
    msg.seq = 3676125408U;
    msg.destination.assign("KCYFRURJDQSORZMNVKWBNONKZPDQRHYOTGVHAXCYRAGBNMNINSXECQKGLUGXUGWFSQOVMAMRCYIFWXOZVZMDHBTSLDGTZYETYSEOVUIJRXHKJKWIWPHSMOCMOGSAVTZSWUHEIJYIJPPBPVGLWWTYQVHGBLTXFLIHFPVAENGABAPQEQEUXLLJAYXWBLPHPNTTUBUILONDVUMJWY");
    msg.timeout = 44772U;
    const char tmp_msg_0[] = {-118, -61, -25, -76, -95, 107, 105, 39, 124, 13, 15, -64, -24, 68, -67, 29, -12, 77, -50, 21, 68, 92, -84, 26, 50, -105, -31, 51, 49, -24, 48, 91, -115, -66, -24, 6, 59, 36, -4, 102, -111, 97, 43, -103, -30, 45, 94, -17, 44, -104, -96, -39, -30, 3, 38, 125};
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
    msg.setTimeStamp(0.544474654502);
    msg.setSource(40008U);
    msg.setSourceEntity(211U);
    msg.setDestination(33452U);
    msg.setDestinationEntity(187U);
    msg.source.assign("IUDVGSCJZUXTYWGPNHLKOBJIFVUYTOEYMWKTPSKVDJUH");
    const char tmp_msg_0[] = {2, -4, -51, 14, 52, -17, -59, -125, -127, -17, 77, 26, 96, 75, -111, 25, -40, 85, 2, 126, -45, 8, 93, -57, 17, 107, -58, -90, -62, 114, 16, 95, -68, -30, 12, -96, -111, -9, 39, 58, -34, -77, 57, 74, -49, -12, 73, 6, 45, 20, -2, -6, 84, 107, 87, 9, -46, 64, 0, -29, -14, -3, -108, 10, 67, 48, 51, 4, -73, -101, -97, 80, 23, -127, 50, 34, -79, 15, 8, -39, 80, 71, -111, 88, 121, 31, -117, -54, 85, -4, 72, 65, -98, -9, 110, -126, -73, 24, 51, 48, 46, 7, 61, -77, -45, 16, -67, 106, 13, 24, -57, -98, -1, -18, 8, 45, 33, 60, -105, -90, -109, 4, 0, 91, -44, -24, 39, -3, 123, -98, -25, -118, -17, -86, -17, -107, -111};
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
    msg.setTimeStamp(0.112232161817);
    msg.setSource(28317U);
    msg.setSourceEntity(82U);
    msg.setDestination(33531U);
    msg.setDestinationEntity(39U);
    msg.source.assign("NRFXKVXHZQDZCOZJSBISDNZQWAASPLDQPFHRDAJLTROWUIAEXVHJUKBVPIHGZHWYPQGYKGDGSNJKCWVKWLPVSMBVROZTNQASYDFEUMYZNXTXFKRAJOXLAFMUEJWBVRBUDNMOKRWCQLMHPUIITJJTOEOYRIOVXHJHXAIIWTWQFYICHDLMXZLMCNQCBHGRZYGFTRUYFCOEZPYIGCETBTEECSQKQUOJBNBVUVYLTFKPNUFWCLBM");
    const char tmp_msg_0[] = {99, -104, -71, -104, 21, 106, -107, 65, -66, 35, 82, -82, -112, 46, 76, -101, -23, 1, -28, -74, 89, -79, 50, 34, 54, -82, 90, 100, 58, 37, -82, 83, -121, 53, -45, 113, 76, 44, 105, -76, -104, -18, -56, -86, 11, -24, -13, 57, 33, 120, 17, -11, 57, 79, -24, 91, 105, 75, -34, -69, 2, -2, 39, 91, -76, 121, 51, -51, 126, -77, -38, -47, 113, -13, -92, 85, -105, 106, 58, -86, 45, 82, 108, -32, -69, 99, 97, 45, 4, 57, -49, 109, -97, -37, -127, 126, 14, -53, 35, -100, 24, 75, 28, 119, -125, 109, 16, -88, -95, -12, 53, -46, -1, -14, 25, -12, -40, -14, -72, 21, -82, 60, -74, -60, 72, -53, 126, 123, -11, 55, 88, 76, 114, 92, 46, 54, -126, 22, -37, -80, -51, 16, 67, 48, 9, 85, -128, 17, 52, -73, -52, 6, -95, -124, -117, -97, 99, 34, -68, 45, -11, 27, 101, -2, -98, -14, -37, -54, -95, 112, -78, -94, 39, -20, 14, -5, -124, -75, -123, 14, -125, 0, -38, 93, 76, 70, -119, -106, 50, 60, 15, 101, 110, -76, -4, 105, 22, 12, -126, -79, 60, 80, 14, 7, 34, 76, -64, 60, 71, -44, 8, 24, -65, 51, -114, 85, 69, 109, -114, 82, -94, 56, -91, -120, -56, -112, 87, -104, -109, 87, 81, -78, -34, 98, 9, -41, 120};
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
    msg.setTimeStamp(0.972211927922);
    msg.setSource(3192U);
    msg.setSourceEntity(15U);
    msg.setDestination(61162U);
    msg.setDestinationEntity(74U);
    msg.source.assign("QYYSAPRMXZKRZOABMJTEGZWSNCVXKPECUQHWCLJCUNSOCSGFHKFJRDDTXHZGKFCLTSMNJCREMFSRPLWOXLSYEONMPBUDTHRJGRZLOMKAHNBZHWYKJLJIAJYZQEPFNUVVDWBPTBWDEFSZBKNIUAVYXTWXDFVCTBBILQOJUHUWBVAVMDHHPNXNERIWRBOV");
    const char tmp_msg_0[] = {42, -119, -33, -5, -97, -81, 115, 62, 68, -99, -33, -90, -128, -58, 62, 84, 101, -44, -103, 36, -20, -47, 19, -73, 65, -54, -30, -123, -86, 115, 68, 114, -2, -38, -5, 64, -4, -5, 98, 72, 5, -42, -24, -57, 21, 16, 14, 108, 9, 103, -128, -108, 39, 32, -46, -88, 51, -36, 37, -73, -25, -80, -40, -75, 96, -120, 93, 25, -51, 32, -73, -97, 11, -84, 61, 21, -86, 39, 101, -114, 51, -31, -18, 102, 94, -54, 116, 68, 81, 76, 71, -110, 61, 125, -104, 77, -3, 121, 83, -122, 4, -1, -113, -33, 103, 125, -3, 37, -84, -103, -118, 70, -80, 49, 33, 35, -120, 14, 26, -42, -74, 101, 13, 76, -36, 1, -35, 108, -106, 122, 79, 7, -109, 109, 7, 43, -5, -11, -55, -99, -4, 66, -45, -55, -122, -60, 12, 100, -124, -52, -94, 67, -103, -3, -107, -21, -65, 101, 110, -54, 72, -49, 119, 50, 121, 69, -71, -101, -2, -74, -63, -108, 107, -59, 4, 30, 124};
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
    msg.setTimeStamp(0.0358204348106);
    msg.setSource(56675U);
    msg.setSourceEntity(83U);
    msg.setDestination(10994U);
    msg.setDestinationEntity(213U);
    msg.seq = 2184720201U;
    msg.state = 16U;
    msg.error.assign("KMBOCMBNHJLCONHMBBSHHXZJLTVPHOLQTWXGDTWNSSIJYUAAXJAIARUWNRBAFGLTJEYKECQOFZEMHRYVMMNISUIHQXSSBECZZIFWWULOZKDMDGDESVHOJITIGBAEJTRQPUHEISCNCTLU");

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
    msg.setTimeStamp(0.389495930848);
    msg.setSource(30778U);
    msg.setSourceEntity(180U);
    msg.setDestination(39401U);
    msg.setDestinationEntity(217U);
    msg.seq = 1232587873U;
    msg.state = 217U;
    msg.error.assign("ALOUQJRSOVMYFLFXLYBQWMCAIZVQUKGUHBGHCOHYIHJQSZWDCEPMJBZQLCLUCTTRJTEGRXTHIRPZZIWQRGDZKXVMWSGAWTXPOIVIJNKTNCFNRUTQVEEEWNRFZXVNZMXVFSHPYDAODBYNCCPFDUMOGAESRKKLWYXBVGOGDYKMHDPEQKUBQRUNPILSRPDWNCNJJBLFYDKOTTWXMHIBOVQBHUI");

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
    msg.setTimeStamp(0.758546081193);
    msg.setSource(46860U);
    msg.setSourceEntity(160U);
    msg.setDestination(22812U);
    msg.setDestinationEntity(172U);
    msg.seq = 2136646708U;
    msg.state = 75U;
    msg.error.assign("LJNACECLBKJNURBIFRWZAQZKLXKFVZRAPZGXCNDAGCPISIJOMAFEYXAGHUFYWELREFOFTFBAUQSOBTDVFGQIGZCXIHOBGHSBNPNUHH");

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
    msg.setTimeStamp(0.998449019766);
    msg.setSource(13706U);
    msg.setSourceEntity(61U);
    msg.setDestination(28329U);
    msg.setDestinationEntity(85U);
    msg.origin.assign("VLUAKEKGPBJRUWJXWXEBBKLUIUISGZNCLJQYYYRWOMNJPQWSYODZZONSVOPLDJPUHVZSRWUCCHBPNWGYJASZDMYKULEFTOXNWL");
    msg.text.assign("VZOHHSCFKJKNZRBFIYYHORWWTABURPDWTJRVNZTSCQZIEGTNBFADYECXKJJJLURSGUQSDNZGFRIZNXPXNFPNKAVIKVZITVIXCTZHEPCWBGGAOEJUVYOQZPAGBHLSDWLMOQMXMQNEXLUSVSDPLLXZFFXVOOEYQMCIJQOAD");

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
    msg.setTimeStamp(0.830868846338);
    msg.setSource(52816U);
    msg.setSourceEntity(130U);
    msg.setDestination(28139U);
    msg.setDestinationEntity(164U);
    msg.origin.assign("PSBRJAKTMGPKYCGFAQYAIWLIRXVHXVGXDUDRIKJBAEFMPVXLXVOFNBBPTSCTEOWUJJRXOAGBGWESKGOZIJCVKPVNYLMEZOYBZDXDDQHNCUSHWGPIJVNTWDSNBJH");
    msg.text.assign("EAKBCNEBMCQOVSVOOSSORMLATYSTOQOTZVVN");

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
    msg.setTimeStamp(0.0993650696865);
    msg.setSource(41230U);
    msg.setSourceEntity(212U);
    msg.setDestination(770U);
    msg.setDestinationEntity(38U);
    msg.origin.assign("GEAFZRFZUKXIZWRDUZNHXTHLQRMBTCZLWHRVOJGGVFMQKHCNWYKATSOXWUXINETPPPXJTMELBLEAYWBJOFSINDYIBHMJBWTXRZEVETSVFVDGASDCFKSMUUBFDDZIHMLOQACYQXOSJNKPCIZL");
    msg.text.assign("MWYICFIRXUQIMVCBTEADBPMODOHRMCXNCTZWIDMGJPJDLFQLUCNOBAEUYVGHWK");

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
    msg.setTimeStamp(0.0402234386593);
    msg.setSource(40204U);
    msg.setSourceEntity(108U);
    msg.setDestination(6284U);
    msg.setDestinationEntity(204U);
    msg.origin.assign("FHBTZTYEIGDHZISNFSVPAJWFWDHVIUESRFWEYSARQZNCDTPXFTNUDALEZXPOXXLGJMHGUFZXDBCBTCNXSBMWUYSPYBEZGVMEJKPVMVQGGMURNLBHPIJJJLBNQICOEMWYKNUKJDJVOPJULMKZLRRPTWMDS");
    msg.htime = 0.920381368159;
    msg.lat = 0.534771836245;
    msg.lon = 0.493371258704;
    const char tmp_msg_0[] = {20, -107, -43, 65, -95, -65, -60, -39, 103, 90, -87, -98, 47, -72, 50, -7, 43, 74, 20, -74, -64, 30, 90, 32, -8};
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
    msg.setTimeStamp(0.342546600161);
    msg.setSource(35703U);
    msg.setSourceEntity(68U);
    msg.setDestination(21473U);
    msg.setDestinationEntity(157U);
    msg.origin.assign("FNTZKADPJZLYNUIYLFMAGJZHJWOTLSMAOZDTIFJCXSJVOKNFWQEDMXLGQQVISWNJMEFFSZDBSENRNEKRPHWPGCBKHVPYXPUJAUQTQINWWAIGSGPLRAFIZUCRWYPAENDRDPGVSRPCNSGGQJOYJMCRXHMIHXBSCBZYEVCAAHRSCUXKFXLGQW");
    msg.htime = 0.972238243293;
    msg.lat = 0.59882031112;
    msg.lon = 0.687375206649;
    const char tmp_msg_0[] = {-35, 83, -26, 89, -121, 14, -83, 88, -73, 31, 63, 28, 67, 50, -11, -17, 43, -55, -111, 99, 108, -101, 117, -44, 76, -40, -63, -62, 34, 71, -110, 112, -54, 13, -15, 118, 67, -82, 77, 49, -122, 67, 33, -104, 77, 54, -7, 123, -86, 107, -63, -74, -4, 47, -113, -105, -91, -52, 1, 9, -4, -104, -38, -100, 103, 47, 15, -109, -122, -49, -97, 35, 81, 91, -11, 7, 35, 10, -86, 67, -64, -6, -44, 99, -111, -9, 24, 71, 24, 15, -101, -101, 66, -103, 97, -117, 78, -120, 104, 81, 73, -42, -69, 33, -82, 90, 111, -57, 6, 126, -123, 3, 62, -122, 82, 35, -80, -46, 105, 120, -89, 51, 103, 94, -116, -15, -97, -22, 88, -97, -35, 36, -61, -108, 7, 59, -10, 39, 69, 49, -28, -70, 112, 121, -105, 73, -16, -40, 38, -65, 108, -127, 108, 104, -52, 23, -87, -35, 5, -41, -41, 60, 71, 3, -67, -10, 31, -86, -95, 49, -7, -31, -26, -102, 92, 120, -42, -125, -99, -39, 6, -22, 3};
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
    msg.setTimeStamp(0.215408901645);
    msg.setSource(50862U);
    msg.setSourceEntity(134U);
    msg.setDestination(3065U);
    msg.setDestinationEntity(220U);
    msg.origin.assign("ZJXLNWTRNGTUNGNQODXQJQGIFCMUIRITFOYNOYDUFIDNZXFQKFLFBHQZEIRWMPTHWBAMCUCSPSKMJKRVUWFJOKCTCDGKRQFYOPJTUVSVXDRUD");
    msg.htime = 0.65180513742;
    msg.lat = 0.0481313594997;
    msg.lon = 0.221236427185;
    const char tmp_msg_0[] = {-2, -15, -30, 99, 93, -81, 96, 114, 68, -26, 16, -58, -108, -69, -79, -51, -82, 106, -30, 119, -68, 68, 116, -50, -100, -6, 26, 63, -113, 112, 105, 83, -73, -122, -16, 41, 32, -26, -38, 30, 29, -120, -100, -55, 67, 117, -42, -81, -99, 58, 69, 47, -90, 4, 95, -98, -111, -13, 100, 87, 57, -12, 91, -106, 30, 53, 5, -85, -62, 98, -112, 46, -8, 56, -113, -37, 43, -70, 1, -86, 119, -97, -121, 19, 108, 120, -64, 22, -52, 71, 16, -40, 117, -20, 39, -59, -102, 71, -115, 77, 33, 115, -22, -5, -73, 63, -112, -106, -50, 15, -89, 110, -4, 95, 73, 126, -17, 23, -89, 36, 100, 75, 24, -90, 67, 3, -11, -84, -44, 119, -25, 108, -59, -55, 8, 117, 89, 49, 99, -44, -97, 62, -5, 96, -56, -111, 90, 77, 126, 26, -51, -27, 105, 41, -125, -82, 63, -9, -105, 56, -118, 63, -13, 18, 118, 97, -7, -90, 37, 53, -75, 117, 14, -60, -33, -89, 36, 85, 37, -105, -102, -57, -14, 6, 100, 9, 3, 45, 120, -44, -65, -65, -68, 99, -9, -99, 107, 10, 35, -94, -70, -49, 110, 9, -41, -122, 27, -124, 11, 37, -108, 20, -49, -25, -59, 17, -22, -128, -91, -124, 2, 49, 88, 111, -10, -12, -62, 112, 113, -127, 76, -12, 114, 12, -74, -23, -72, 16, 39, -15, -82, -15, -87, -34};
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
    msg.setTimeStamp(0.0987092362151);
    msg.setSource(51903U);
    msg.setSourceEntity(59U);
    msg.setDestination(14548U);
    msg.setDestinationEntity(4U);
    msg.req_id = 13379U;
    msg.ttl = 40711U;
    msg.destination.assign("JQQCMSLSIVOYVHESDXRVEGZZYKYBFOKKJDFACODNTAJKGCXHQQNXFGOUZLCYANGPXYGDFPMFGJBKRBKNZVUSZBLHGLPETOBRCJLFTKGRXOFPWQUOGQBOUJKJTICAYEAMCMTQZXDNEHHODLMCZWXEMQMRUFMKFWHWDDWWSHUUPBAESRPBTQWRLZJITOZPXHN");
    const char tmp_msg_0[] = {-7, 60, -51, -52, -119, 28, 121, 126, -54, -75, 70, -62, 16, 118, 126, -79, 17, -113, 26, 43, 97, -117, -40, 72, 97, -113, -73, 32, 111, 26, -53, -14, -108, -9, -11, 4, -9, -73, 7, 121, 116, -120, -127, 3, 41, 75, 107, 123, -91, 92, 13, -49, -80, 50, 85, -47, -104, 101, 41, -108, 47, -29, 32, 47, -118, -4, 68, 59, 4, 37, 19, 44, 63, 113, -112, 110, -16, 34, -15, 85, 15, 7, 69, -16, -15, -95, -104, 65, -98, -46, 76, 22, 34, 118, 105, 96, 12, -17, -95, 1, 49, -75, -12, -101, -26, 25, -40, 99, 23, 49, -120, -63, 64, 104, 27, 1, 71, -112, 58, -116, -42, -32, -4, -3, 83, 24, 100, 48, 96, -116, 36, 87, -123, 75, 59, 89, 119, -40, 72, 10, 15, 81, 122, 78, 26, 21, -102, 103, 76, 5, 118, -76, -5, -35, -33, -60, -32, 12, -89, 50, 118, 45, -69, -25, -53, 70, -109, -19, 37, 36, 80, -61, -69, 39, 84, -35, 82, 10, -104, -69, 44, -126, -7, -37, 40};
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
    msg.setTimeStamp(0.586630876143);
    msg.setSource(16910U);
    msg.setSourceEntity(140U);
    msg.setDestination(63631U);
    msg.setDestinationEntity(23U);
    msg.req_id = 2117U;
    msg.ttl = 6099U;
    msg.destination.assign("TYAYRKLXWZMKNCDUNXGRQBASCEFOZZYRFHDIEMPPYUOGNZOK");
    const char tmp_msg_0[] = {-61, -96, 121, 118, -25, 70, -49, 91, 33, 114, -83, 84, 120, -18, 20, 17, 44, -19, 21, -37, 59, 5, -101, 122, 103, 24, 49, -99, -48, 117, 83, 7, 3, -86, -75, 121, -36, 83, 3, -3, -124, 100, 3, -25, 41, 118, 35, 37, -100, -95, -35, 55, 106, 27, -127, 95, -47, -58, 107, 50, 76, 123, 66, -118, 113, -48, -73, 40, 85, -79, -13, 98, -95, -114, -74, -36, -91, 69, 4, -30, 37, 71, -92, 85, 31, 15, -59, -7, 46, -14, 15, -83, -54, -108, -58, 57, -118, -15, -28, -72, 91, -113, -24, 110, 27, -95, -113, 119, 28, 116, 114, 48, 96, 5, 46, 22, 5, 54, 97, 2, 121, 72, -52, 54, -71, 10, -106, -11, 41, -115, -128, 50, 68, -86, -101, 60, -63, 110, 14, -109, 43, -98, 75, -99, -123, -82, 111, -30, 51, 62, -55, -65, 51, 47, -50, -59, 74, 103, -98, -9, 42, 0, 78, 122, 49, -65, -18, -82, 32, 72, -117, -7, -1, 9, -89, 35, 121, 115, 66, -20, 78, 17, -93, -20, 74, 72, -17, 110, -106, -104, 35, 80, 21, 33, -77, -3, 88, 98, -102, 108, 24, 58, -103, 29, -74, -127, -41, 45, 86, -71, 81, 84, 17};
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
    msg.setTimeStamp(0.590936168529);
    msg.setSource(60163U);
    msg.setSourceEntity(230U);
    msg.setDestination(19988U);
    msg.setDestinationEntity(46U);
    msg.req_id = 10614U;
    msg.ttl = 34864U;
    msg.destination.assign("FRPMYYFYBTNEEKRLAMTCGNWJGJTNIYJRXXVSKNTJDWACXZWIVIWKEPQDMGWWKZOBPCRVOSLXEASIBQYOLXIMRVTLCAFLDHPKXGNSFCUPBBCHSQFYNYJGZZFSXJAKDISQIWOONXGGBUHKJLNMXUSKWAATVSCPKVVRINMUFHWGDHMQOCPGBYBDVVURLE");
    const char tmp_msg_0[] = {10, 64, 32, 98, 69, -119, 74, 45, -36, 24, 75, -54, 43, 66, -93, 73, 75, -76, 115, -1, -58, 32, -75, -117, -123, -28, -69, 95, 17, 56, -48, -7, -32, 8, 28, 25, -103, 73, -42, -68, -94, -104, -126, 91, 54, 94, -46, 25, -65, 44, 91, 69, -126, -70, 105, -61, 13, 83, -55, -80, 126, -126, -56, -77, 25, 64, -92, 124, 89, 67, -110, -17, 26, 82, -115, -55, -58, -122, 112, 46, 70, -79, -34, -51, -36, -106, 82, -39, 59, 62, 7, -84, -11, -106, -87, -40, -119, 81, 36, 123, -102, -79, -117, 45, -4, -31, 96, -98, -114, 83, 76};
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
    msg.setTimeStamp(0.233075934954);
    msg.setSource(60505U);
    msg.setSourceEntity(70U);
    msg.setDestination(22575U);
    msg.setDestinationEntity(118U);
    msg.req_id = 51295U;
    msg.status = 77U;
    msg.text.assign("RUSBTCWLLKKXNHSFMQOMZSEQMDRBDIDKTATWEYHZGKMOLJUXPAECIMFDORHHMZVNARKWLNETWCGJDIOPWBYCYXAVNKEGOANSTWIVDMPYZFHISZLSFMAJRNCCFVSLGCEFURPTYTFZJQOSHSRJXAGEMXXU");

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
    msg.setTimeStamp(0.130305507813);
    msg.setSource(52901U);
    msg.setSourceEntity(15U);
    msg.setDestination(62021U);
    msg.setDestinationEntity(201U);
    msg.req_id = 49918U;
    msg.status = 120U;
    msg.text.assign("PQVZRNUJZDPXKAOZFBQWBFQEXYREHZUSPZYIKOQALZUPQGTCKJBNYLSETBUWRPHCKJMEESAYZISHWDWGOEHVTISWULLXNWTOIIJIOSHGMXNMLRLPZZMWFRIBFIIHFNNTJDRDCUAUHONRTNGTJJOMHRCMR");

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
    msg.setTimeStamp(0.890900883928);
    msg.setSource(34989U);
    msg.setSourceEntity(119U);
    msg.setDestination(8868U);
    msg.setDestinationEntity(1U);
    msg.req_id = 46723U;
    msg.status = 138U;
    msg.text.assign("BQOYMRSKOHIX");

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
    msg.setTimeStamp(0.980426489577);
    msg.setSource(30019U);
    msg.setSourceEntity(177U);
    msg.setDestination(14724U);
    msg.setDestinationEntity(158U);
    msg.group_name.assign("CTEUSUNLEULEZPFTCMDVKHIKKIJAMTVBJXFWGLVJRWEQFJTEDSXNQIKFMVIEYZBNIFJKNVZGSFHSCVAMFLQNAHLAXJGEHCRNZYGXEORRTUQWYDDUDRJTPQVCPIHKYQJRSTJPNYZLKVRY");
    msg.links = 405106474U;

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
    msg.setTimeStamp(0.00798194211089);
    msg.setSource(55517U);
    msg.setSourceEntity(146U);
    msg.setDestination(57037U);
    msg.setDestinationEntity(179U);
    msg.group_name.assign("OUPLQQDFPBYRYVCFNNXVSZWIHEFOUKDEQDJWPDMAWLOGOMKWNS");
    msg.links = 1408288764U;

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
    msg.setTimeStamp(0.859752531742);
    msg.setSource(8161U);
    msg.setSourceEntity(16U);
    msg.setDestination(64287U);
    msg.setDestinationEntity(98U);
    msg.group_name.assign("IQFYQJVNSYNKASFQVLJDKLHIWFVEGTOWPUDQKJQNJPQTBMAYKDGCFSXTREQVQMZZTVEPNYUWOCXNSCHPPYOAOABXLLXZGUIHHHHXHNVGNBMK");
    msg.links = 2086920755U;

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
    msg.setTimeStamp(0.172195091477);
    msg.setSource(1855U);
    msg.setSourceEntity(74U);
    msg.setDestination(49905U);
    msg.setDestinationEntity(251U);
    msg.groupname.assign("GLISOMKLMKSDFGLOVPVBQPYWROYFTXSHGWRXIXABDBUBUMXZHRHLQSLCDWJWIBZUVPGLJPUHYIKCPDZMOZTSAGIUJGPDCNIYBMRBVTJDKOJBTAZXEZZDBNLEKJWETCRSYWTEATNXIJHQOCRTYSDQYGMGNPZUFROKKVAUOVNMRDMVVZTAJNRUAFIBQZY");
    msg.action = 171U;
    msg.grouplist.assign("REIQHATWKIFDLYMWLYSTOSJRUPQYBLLAOFBBUSYWLVONJGHWRJHJNPLGD");

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
    msg.setTimeStamp(0.449369418888);
    msg.setSource(5450U);
    msg.setSourceEntity(76U);
    msg.setDestination(52290U);
    msg.setDestinationEntity(52U);
    msg.groupname.assign("OTDRMPPGXSHTNLNEDEJRKFNTWLOOQBIZVGXKCBPNJWQFWBHBPWOUKDUQMOUZTAVQJFODFJXIZQBQNSGOJDMFYYCYTENMMVZDRPEXLUKYZLAZEMXGRCBRHCGIUWW");
    msg.action = 193U;
    msg.grouplist.assign("KQRFRBUDGFXMJLTFTMJIUFXUCJXGTRLDSAVDWOIFKPVWPBQFAQULKJNAIRUIFJQAGGNWLEQWZETB");

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
    msg.setTimeStamp(0.844380257952);
    msg.setSource(60716U);
    msg.setSourceEntity(27U);
    msg.setDestination(8415U);
    msg.setDestinationEntity(23U);
    msg.groupname.assign("HNLEGTFOSHBZQHOMEYJOQUQKKBGOHLWDHCUAXRWXVNOTJMJRCCNFYDKYUVZGWFJHXEFPWDXIACPYTTJUORTWIDSTVNKQNPAXFFFUUAYDMJNEDYHQFETABLZDVAWLMZ");
    msg.action = 199U;
    msg.grouplist.assign("TWFCUONJNCYPXWDHDBONLVGXOTHQEIHLRJTZTCXOKPJWVHJBDAPYGIYEWXJNTLYKLMRHRUMMPHPZ");

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
    msg.setTimeStamp(0.539484670722);
    msg.setSource(57098U);
    msg.setSourceEntity(213U);
    msg.setDestination(8871U);
    msg.setDestinationEntity(5U);
    msg.value = 0.965103998938;
    msg.sys_src = 17373U;

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
    msg.setTimeStamp(0.745618013303);
    msg.setSource(27194U);
    msg.setSourceEntity(116U);
    msg.setDestination(9506U);
    msg.setDestinationEntity(87U);
    msg.value = 0.367635131216;
    msg.sys_src = 18435U;

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
    msg.setTimeStamp(0.19026735813);
    msg.setSource(64829U);
    msg.setSourceEntity(138U);
    msg.setDestination(12587U);
    msg.setDestinationEntity(17U);
    msg.value = 0.0649768735693;
    msg.sys_src = 31333U;

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
    msg.setTimeStamp(0.465077062475);
    msg.setSource(3452U);
    msg.setSourceEntity(135U);
    msg.setDestination(40035U);
    msg.setDestinationEntity(236U);
    msg.value = 0.141040277609;
    msg.units = 109U;

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
    msg.setTimeStamp(0.534513366946);
    msg.setSource(59261U);
    msg.setSourceEntity(93U);
    msg.setDestination(1616U);
    msg.setDestinationEntity(251U);
    msg.value = 0.725925516828;
    msg.units = 200U;

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
    msg.setTimeStamp(0.166663001808);
    msg.setSource(24813U);
    msg.setSourceEntity(234U);
    msg.setDestination(43449U);
    msg.setDestinationEntity(56U);
    msg.value = 0.856699205737;
    msg.units = 57U;

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
    msg.setTimeStamp(0.220781006313);
    msg.setSource(14838U);
    msg.setSourceEntity(81U);
    msg.setDestination(16834U);
    msg.setDestinationEntity(233U);
    msg.base_lat = 0.0791092763428;
    msg.base_lon = 0.78127633667;
    msg.base_time = 0.988369247965;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 55263U;
    tmp_msg_0.priority = -46;
    tmp_msg_0.x = -13960;
    tmp_msg_0.y = 30598;
    tmp_msg_0.z = -30649;
    tmp_msg_0.t = -31369;
    IMC::RelativeState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.s_id.assign("FEKRETTYEWWROOUBHQHKDDQTHCNICXJGTZWCTOJLTRAPRCOYQLHNVLCDZPAWKXLOZKVKTMLQUBXSDEMKMBUXJSYIJUXQBAQMGIUAKDZEVGXPSSFFMELXIRDITDSKVWVONXJCIURKADXHEDLPQCAAPBBWMXGZKUVPUBESICZCLWOHPAODSFRHFNRGNQTIEYLWVFNJPVNJYGHJAYZM");
    tmp_tmp_msg_0_0.dist = 0.369597921154;
    tmp_tmp_msg_0_0.err = 0.301636532618;
    tmp_tmp_msg_0_0.ctrl_imp = 0.087555100099;
    tmp_tmp_msg_0_0.rel_dir_x = 0.378458832125;
    tmp_tmp_msg_0_0.rel_dir_y = 0.195694164334;
    tmp_tmp_msg_0_0.rel_dir_z = 0.809368689802;
    tmp_tmp_msg_0_0.err_x = 0.907168830115;
    tmp_tmp_msg_0_0.err_y = 0.403917727686;
    tmp_tmp_msg_0_0.err_z = 0.368635076869;
    tmp_tmp_msg_0_0.rf_err_x = 0.435027975415;
    tmp_tmp_msg_0_0.rf_err_y = 0.834027738403;
    tmp_tmp_msg_0_0.rf_err_z = 0.331972685495;
    tmp_tmp_msg_0_0.rf_err_vx = 0.400109990532;
    tmp_tmp_msg_0_0.rf_err_vy = 0.918713612053;
    tmp_tmp_msg_0_0.rf_err_vz = 0.009429546789;
    tmp_tmp_msg_0_0.ss_x = 0.146053830192;
    tmp_tmp_msg_0_0.ss_y = 0.000194573884612;
    tmp_tmp_msg_0_0.ss_z = 0.508160363067;
    tmp_tmp_msg_0_0.virt_err_x = 0.304105471983;
    tmp_tmp_msg_0_0.virt_err_y = 0.967857932354;
    tmp_tmp_msg_0_0.virt_err_z = 0.479153491899;
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
    msg.setTimeStamp(0.425978999833);
    msg.setSource(9782U);
    msg.setSourceEntity(183U);
    msg.setDestination(24079U);
    msg.setDestinationEntity(211U);
    msg.base_lat = 0.518237011904;
    msg.base_lon = 0.512583717807;
    msg.base_time = 0.00920198958234;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 20996U;
    tmp_msg_0.priority = 31;
    tmp_msg_0.x = -18341;
    tmp_msg_0.y = -19525;
    tmp_msg_0.z = 5511;
    tmp_msg_0.t = -19093;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.553315594584;
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
    msg.setTimeStamp(0.0722373762621);
    msg.setSource(47071U);
    msg.setSourceEntity(15U);
    msg.setDestination(55355U);
    msg.setDestinationEntity(96U);
    msg.base_lat = 0.878429818292;
    msg.base_lon = 0.72290505054;
    msg.base_time = 0.332722800576;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 2950U;
    tmp_msg_0.priority = 31;
    tmp_msg_0.x = 25326;
    tmp_msg_0.y = -10056;
    tmp_msg_0.z = -4196;
    tmp_msg_0.t = -2886;
    IMC::DesiredHeadingRate tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0615194086163;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.593375427356);
    msg.setSource(52803U);
    msg.setSourceEntity(226U);
    msg.setDestination(1741U);
    msg.setDestinationEntity(66U);
    msg.base_lat = 0.501129972575;
    msg.base_lon = 0.769334285524;
    msg.base_time = 0.621154736383;
    const char tmp_msg_0[] = {-103, 76, 75, -46, -39, 5, -24, -123, 91, 80, 49, -22, 118, -71, 22, 56, 4, 108, -84, 26, -36, 89, 67, -114, 125, -76, 72, 99, 54, 115, 93, 112, -83, -6, -118, 71, 15, 75, -3, 84, -61, -15, 63, 60, -89, 6, 0, -75, -53, 9, 91, 86, -100, -37, 30, -3, -120, 71, 41, 46, -90, 34, -75, -30, -26, 65, -113, -98, 51, -91, -41, -52, -93, 86, -87, 40, -10, -90, -72, -108, -108, 126, -61, -39, -114, 28, 23, 0, -112, -114, 55, 6, -68, 47, 106, 72, -77, -80, -60, 46, -31, -27, 44, -99, 44, 106, 33, -38, -39, -81, -108, -3, 17, -88, 20, 2, 86, 4, 36, 24, 8, -67, -33, -76, 109, 125, 21, 46, 61, 44, -103, -68, -50, -54, 92, 79, -1, -31, -39, -97, -82, -55, 41, 45, -26, -12, 22, 62, -48, 68, -100, -86, -3, -33, -11, -70, 15, 14};
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
    msg.setTimeStamp(0.345984453054);
    msg.setSource(58143U);
    msg.setSourceEntity(234U);
    msg.setDestination(62227U);
    msg.setDestinationEntity(126U);
    msg.base_lat = 0.0440435240366;
    msg.base_lon = 0.0744504743718;
    msg.base_time = 0.838592470486;
    const char tmp_msg_0[] = {-11, -18, 6, 95, -43, 3, -24, -33, -40, -27, -98, -120, 24, -34, 90, -14, -118, 82, -92, 12, -64, -82, -80, -47, -106, -108, 65, 109, 29, -83, 90, 109, -111, -59, -100, 74, 40, 27, -23, -116, -80, 83, -85, -54, -22, 0, 113, -128, -95, -17, 116, -48, -92, -44, -93, -126, -51, 17, 70, -67, -25, -66, -19, -28, -120, -72, -22, 15, 6, 61, 4, 7, -124, 14, 77, 55, 88, 87, 119, -37, 32, 64, 23, 0, 47, 116, 67, 93, -71, -40, -87, -72, -117, 112, 53, -22, -9, 22, 103, -41, -12, 51, 52, -61, 73, 12, 46, 18, 72, -44, 2, -56, 59, -9, 76, 57, -85, -47, -119, -64, 7, 78, -59, -29, -22, 42, -18, 59, 17, -70, -38, 53, 103, -20, -93, 4, -124, -84, 86, -83, 98, 25, -102, -100, 64, 110, -55, -35, -2, -48, -108, -120, 117, -92, 93, 114, -36, 71, 32, 72, 57, 48, 112, 72, -97, -76, -50, -93, -37, 8, -15, 29, -114, -65, -58, -8, -2, 26, 50, -64, -115};
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
    msg.setTimeStamp(0.760664236666);
    msg.setSource(9725U);
    msg.setSourceEntity(188U);
    msg.setDestination(39475U);
    msg.setDestinationEntity(17U);
    msg.base_lat = 0.251813908237;
    msg.base_lon = 0.686325428331;
    msg.base_time = 0.794604580517;
    const char tmp_msg_0[] = {108, -20, -66, -104, -124, 33, -21, -112, 98, 54, -26, -114, 123, 112, 52, 105, 47, 121, -1, -80, 55, -4, 121, -29, 31, 46, -8, -19, 45, 69, -109, -75, 7, -115, -25, -97, 44, 125, -100, 98, -47, 74, 40, -3, 31, -43, 72, 87, 67, 42, 12, 47, -76, 8, 109, -109, -20, -53, -24, 31, 69, -99, -30, -126, 36, 103, -8, -60, -101, -104, -53, -16, -94, 96, 113, -70, 102, 81, 8, -117, 121, 101, -117, 72, -82, -119, 55, 25, -60, -32, 86, -95, 75, 3, 55, -31, -72, 92, 65, -84, -55, -123, -60, -20, -72, 21, -121, -15, 99, 76, -66, -68, 101, 117, 21, -123, -105, -35, 36, 61, 43, 85, -115, -4, 51, 15, -125, -76, -121, 58, 111, -71, 105, 21, 116, -53, -111, 80, 97, -100, 13, 92, 15, -52, 28, -86, 44, -60, -79, -53, 57, -25, 2, -91, -73, 116, -104, -39, 92, 13, 49, -47, -51, 47, -2, 121, 60, 85, -122, -46, 85, 119, -113, -72, 16, -84, 59, 44, 63, -97, -107, -112, -93, -98, -2, 81, -99, -34, 82, 0, 45, 90, 116, -6, 21, 108, 113, 71, 54, -7, 68, 9, -56, 92, -107, 8, -101, -111, -41, -21, -104, -46, -99, -52, 51, 125, 48, -114, -31, 78, -110, 87, -83, -114, -102, 123, -49, -16, -42, 104, -103, 7, 83, -68, 112, -114, -38, -117};
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
    msg.setTimeStamp(0.484775020716);
    msg.setSource(31716U);
    msg.setSourceEntity(217U);
    msg.setDestination(5867U);
    msg.setDestinationEntity(23U);
    msg.sys_id = 30191U;
    msg.priority = -68;
    msg.x = -29572;
    msg.y = -27396;
    msg.z = 31336;
    msg.t = 24420;
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("JBSBKNRGREPLWDUHZKAUHABHLOHIXFFNPIZIXDYZWRLCALQPXRQGTKVMUNEJMXPHTUGUVERCNYPFOMYRTSSD");
    tmp_msg_0.predicate.assign("HJLQFNMXLNLSTIBAKKSMZNNBJHFXREBCNWVKBIUOMQHNKYTZTNVILDLBZSJRYQCKDUGFMOMUMRZSGWQITXRTCIWWUKTCOQDYYOAPYSYAUUVSPFPPFTAVGZQZWHKUAEXLHRRZRDEPDJQPUEXJEOEYT");
    tmp_msg_0.attributes.assign("XGMQBELFBCWPBIMKASGAYXKCUOJTIENIGVYMMFCYKZSPAUQNCKPLNOUORULGPEZDHQIXJGDBXCDZTWZTAYCBYTCWBUJSROMUHQTEPHRDSFITGGXWLWVLFNJORHJDYPHLVZQFBOJAJVSFQGLZCDSPXANOKWKTPWSQMWEHBNXSVRIUBFYUIGVGWCEVZTJALOXQZYRDDAUVFMEFYUEWFBRKNLHICSENKQVRXNJTKXEDH");
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
    msg.setTimeStamp(0.339638733574);
    msg.setSource(16201U);
    msg.setSourceEntity(161U);
    msg.setDestination(62462U);
    msg.setDestinationEntity(56U);
    msg.sys_id = 50463U;
    msg.priority = -73;
    msg.x = 14499;
    msg.y = 28607;
    msg.z = 27702;
    msg.t = -19271;
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("JMFUTKMZTWWTBSNRLSVXUOTALARSEGRYNMLTXFDACRASNBHLLUPGWKVHTQPHBZQBQQCMCAYFJNRFNDEBGEPWFDSWRPHKIOMZOBXGCDKLCVYKEWJXJVDVEJIYERZHUKAUJDJTKHQEZCJXPGMEUOHOOGQCIZYVUXGLMZLNOMOPNRHVIQFDMBBPYHGORPBFUWIXTXDL");
    tmp_msg_0.predicate.assign("FNSVDNPNIDRBSLVOTAVYQPTWMWZTQJGYOJLKRIXRUQBQFSDEBECWYZJPSRVFWCXXFTLSOUIPCJYRWKVCAZPMCMDLEXDSRVCWEHCKQIKZAZFNFHHNHNXLHKNWIJRQPQXQCQZILUCJYZXKTXVHGOJNIOPYHWBRMTFWOVERGDHCSIVWEBHLPZBTGJAZAMMOUULJAUYBKUODSNEVAUHIFOROXUAGJYXDAFSGKQADTKBMPGMYKGDEBSYTNBPTUFG");
    tmp_msg_0.attributes.assign("EFPZZDGDMHUAFUKFRNZZBPNUHVVKROHRWKFZNFSLWMTKQICKAXQEKSMENBTLUXYXASJVLAB");
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
    msg.setTimeStamp(0.338403420448);
    msg.setSource(36088U);
    msg.setSourceEntity(71U);
    msg.setDestination(49969U);
    msg.setDestinationEntity(13U);
    msg.sys_id = 35435U;
    msg.priority = 14;
    msg.x = -11560;
    msg.y = -21281;
    msg.z = 10500;
    msg.t = 17895;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.737395544643;
    tmp_msg_0.speed_units = 250U;
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
    msg.setTimeStamp(0.519103619746);
    msg.setSource(379U);
    msg.setSourceEntity(179U);
    msg.setDestination(13312U);
    msg.setDestinationEntity(137U);
    msg.req_id = 16201U;
    msg.type = 67U;
    msg.max_size = 16899U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.673630080015;
    tmp_msg_0.base_lon = 0.847029344078;
    tmp_msg_0.base_time = 0.371754429337;
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
    msg.setTimeStamp(0.558376485711);
    msg.setSource(50336U);
    msg.setSourceEntity(151U);
    msg.setDestination(7655U);
    msg.setDestinationEntity(7U);
    msg.req_id = 51029U;
    msg.type = 71U;
    msg.max_size = 48206U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.861879310302;
    tmp_msg_0.base_lon = 0.87625925503;
    tmp_msg_0.base_time = 0.892764943602;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 50059U;
    tmp_tmp_msg_0_0.destination = 28975U;
    tmp_tmp_msg_0_0.timeout = 0.328723637889;
    IMC::QueryEntityParameters tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("DNPZZIVLXNWNWCCERGQXDHTBUOQBPQNIPHRXVZAYGMQJZDKSUNKIMPRHBEBQQGJBFMSAEKKS");
    tmp_tmp_tmp_msg_0_0_0.visibility.assign("DPRZORVYBTYWXYWVFZJAZJMESMMIUZSNHTQBQLKERMSKCANOEUXLWTLXBWTZQHGPFHWPPVMZTQMTCFRLDBRDNOSOGJPQVMNHBKUWACJNCGWLHIFDHKIMBBJKVUHXAYGGXDTOGXOGLELIJXGJDBKGMJEIYKIUUGPBRCNBAAZAFCHPPFYYJEYCRVTWDUDE");
    tmp_tmp_tmp_msg_0_0_0.scope.assign("UMVAJGFIKIEKXPZOHXCPNFHMJCYTLADSLDKTKRWZAMTVYMNXCYKULBGXMDDOGYXJUZSMCNMLPILLGWPGLSSIJCFHDFOWUKZJNYAOYBRIECHTGOOHQDSWLAEUUQZWAQHVLVYHREJEHFBITUOXWONIMQIIJRBZLWXQGWPGXNZPYQPKDFAGAEZMHTVIBZVSVRKDFTHJGEQAXFQSX");
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
    msg.setTimeStamp(0.407749802429);
    msg.setSource(59734U);
    msg.setSourceEntity(218U);
    msg.setDestination(20066U);
    msg.setDestinationEntity(177U);
    msg.req_id = 27838U;
    msg.type = 78U;
    msg.max_size = 38433U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.157444328503;
    tmp_msg_0.base_lon = 0.528280610864;
    tmp_msg_0.base_time = 0.651148733391;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 29277U;
    tmp_tmp_msg_0_0.priority = 46;
    tmp_tmp_msg_0_0.x = 1691;
    tmp_tmp_msg_0_0.y = 13095;
    tmp_tmp_msg_0_0.z = 5040;
    tmp_tmp_msg_0_0.t = 16624;
    IMC::VehicleLinks tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.localname.assign("YWGEFJUXECOUJTJQMBRWKDBXVCASOMTTHMLQWPHLOPBXTZKSAZONCIFOOFZMNEBZDPSBWGJYVPKVKTIXRSFFI");
    IMC::Announce tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.sys_name.assign("GJEHHMNELQCLMCZKASTGGELVLWJVJUCFFZHRGKTAWQTOHEZJDFTQDBRFYZSJRKPQNXAJNXMUHQHSBNJPOMBSUOIWFXNOLLLVIIYOSCQOVBPSRDFVSYXPKRIYDW");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.sys_type = 169U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.owner = 12478U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.453576687704;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.755992946901;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.height = 0.801658033548;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.services.assign("QWGOWWEEIQTRVRFKVMSSXDPYKFKQBOPRTQJPSHMIOMYTPLLDSTZBCFMNMHDAWPPTQJYEMBPGUAZNHLJHERVZMFGGIGIGGILGVPYSUXDKPT");
    tmp_tmp_tmp_msg_0_0_0.links.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
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
    msg.setTimeStamp(0.939551450341);
    msg.setSource(9978U);
    msg.setSourceEntity(93U);
    msg.setDestination(12163U);
    msg.setDestinationEntity(68U);
    msg.original_source = 45519U;
    msg.destination = 52062U;
    msg.timeout = 0.917522648248;
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.0563451667663;
    tmp_msg_0.base_lon = 0.397437614011;
    tmp_msg_0.base_time = 0.351879488709;
    const char tmp_tmp_msg_0_0[] = {-19, 39, -111, -72, -85, -22, -28, -102, 112, -126, 14, -12, 56, 85, -54, -108, 31, -68, 75, 97, -12, 14, -40, -22, -49, 88, 87, 50, 48, 75, -99, 96, -10, 93, 125, -68, -27, 4, -19, 79, 23, 88, -37, 104, -65, -96, 60, -113, 105, -12, 35, -48, 41, -86, -82, 108, -2, -32, -122, -80, -68, -108, -124, 66, 76, -55, 60, -33, -70, 8, -128, -9, -42, 113, -49, 104, 67, 72, 14, 58, -126, -65, 57, 105, 16, -55, 25, 13, -109, 85, -61, -22, 36, -63, -128, 16, -57, -2, 32, 90, 46, -54, -93, 81, 114, -26, -24, -95, -27, -23, -77, 67, -46, -63, -2, 104, -3, -7, -111, -127, 45, 43, 47, -24, -107, -12, 66, -49, -8, -36, 1, 32, 121, -113, 111, 94, -19, -66, 59, 42, 25, -28, -57, -67, 94, -90, 42, -79, 115, -126, 118, -20, 73, 40, -66, -64, 60, 90, 115, -98, 24, -61, 4, -58, 43, -39, -36, -25, 19, 69, -128, 117, -58, 42, 124, -109, 38, -6, -63, 106, 35, 111, 3, -5, 65, 83, -107, 88, 77, -86, -63, -96, -17, -84, -50, -97, -94, 126, -26, -112, 50, -33, 59, -57, -54, 109, 110, -12, -99, 59, -32, 52, 94, -61, 26, -38, -60, 111, 28, -16, -64, 44};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.678419911447);
    msg.setSource(64030U);
    msg.setSourceEntity(145U);
    msg.setDestination(6321U);
    msg.setDestinationEntity(72U);
    msg.original_source = 53212U;
    msg.destination = 34245U;
    msg.timeout = 0.112595804409;
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.202913636902;
    tmp_msg_0.sys_src = 35455U;
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
    msg.setTimeStamp(0.229211289965);
    msg.setSource(32798U);
    msg.setSourceEntity(246U);
    msg.setDestination(43138U);
    msg.setDestinationEntity(71U);
    msg.original_source = 26464U;
    msg.destination = 21979U;
    msg.timeout = 0.184051374409;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 20003U;
    tmp_msg_0.lat = 0.54216095382;
    tmp_msg_0.lon = 0.349247536966;
    tmp_msg_0.z = 0.890016693763;
    tmp_msg_0.z_units = 168U;
    tmp_msg_0.speed = 0.693607009628;
    tmp_msg_0.speed_units = 107U;
    tmp_msg_0.custom.assign("AIPOAHXYUJPBLCWQTQZBFNNVUKRUDQFHNWUROANXVPZKQGCMLQBBTBTGNSFPZTYFGXLRYQSAIMOJWHEHDFZDLSGNKSHKSGRYYPKZTOAETJMMEWLRZVFMWYXPODBKGLAFDJCTEIHVNDXSPTUBCNACUXCIUVGWMH");
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
    msg.setTimeStamp(0.924310227456);
    msg.setSource(51925U);
    msg.setSourceEntity(189U);
    msg.setDestination(39328U);
    msg.setDestinationEntity(77U);
    msg.type = 113U;
    msg.comm_interface = 11934U;
    msg.model = 61562U;
    msg.list.assign("BQXAWOQDGQJXBHTDUOHGJZGHVWJAD");

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
    msg.setTimeStamp(0.776774947582);
    msg.setSource(21980U);
    msg.setSourceEntity(26U);
    msg.setDestination(62484U);
    msg.setDestinationEntity(13U);
    msg.type = 196U;
    msg.comm_interface = 25344U;
    msg.model = 36544U;
    msg.list.assign("ERNJLSCHDYFWVUDQJPKROXOOBUXEJJVDIITEVMLJZPLX");

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
    msg.setTimeStamp(0.388291570529);
    msg.setSource(27451U);
    msg.setSourceEntity(23U);
    msg.setDestination(27904U);
    msg.setDestinationEntity(111U);
    msg.type = 151U;
    msg.comm_interface = 53914U;
    msg.model = 24243U;
    msg.list.assign("MCNXDDAWVKGOXDFLPTWXUAWNWIFAXMUIKEDPTINRUNWKYO");

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
    msg.setTimeStamp(0.785898696511);
    msg.setSource(64838U);
    msg.setSourceEntity(72U);
    msg.setDestination(50527U);
    msg.setDestinationEntity(193U);
    msg.type = 26U;
    msg.req_id = 1383899285U;
    msg.ttl = 54157U;
    msg.code = 253U;
    msg.destination.assign("WICRXKQDZOCJLPESIYTIBXKHHUNBOFTHBUICAJMHJGWBYZMQMSPGQFFNZNTFLVMFYPWWLTZJNQACJREAYHEFGXGBYAAPYKSASTDMDGZTFAZW");
    msg.source.assign("ICKRDAZQWDZOJNHMSSPOYCCJTRKHPCEDCBFLCEGO");
    msg.acknowledge = 157U;
    msg.status = 75U;
    const char tmp_msg_0[] = {-88, 99, -2, -32, 54, 56, 66, 74, -93, 71, -45, 40, -98, 38, -14, -84, -63, 44, 52, 49, -49, 28, 33, -1, 118, -64, 59, -55, -85, 16, -58, 29, 76, 40, 88, 68, -12, 74, -56, -86, 13, -41, -32, 21, -27, 70, -109, -127, 4, 44, 44, -69, -118, 109, -29, 81, -31, 117, -22, 20, -116, 82, 27, 94, 37, 122, -125, 1, 76, 38, 35, -45, -67, -39, -79, 124, -109, 94, -92, -113, 51, -116, -24, -128, 40, -5, -127, -14, -9, -11, -15, -54, 66, 4, 9, -83, 46, 40, 108, 87, 47, -84, -111, -104, 126, 123, 13, -8, 73};
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
    msg.setTimeStamp(0.828097568264);
    msg.setSource(13635U);
    msg.setSourceEntity(145U);
    msg.setDestination(31886U);
    msg.setDestinationEntity(97U);
    msg.type = 131U;
    msg.req_id = 74167631U;
    msg.ttl = 65391U;
    msg.code = 39U;
    msg.destination.assign("JAFCBLSNTYDKDAQHMLGIORBJAUOOIYNLIVSBIBXACHUFCDQEJEZBRWJWEHVEDBVCJLZWVPPUGSSJPXIETNDVFCASFGICUQJTJDWWHMKFGMWH");
    msg.source.assign("VUXDLWIYFTLPJUTTCEVDFSPBSNGYNIOBECUGNTNCLIRSSDMPXAMKAZTUOPFUDXYQWDPQZQZLRQXLHYKEJGPDXENKCZNPWJRQCOJFHREAWYDGKAAAILYKRPCJPHMIOWHTGXBSVJIPBMZ");
    msg.acknowledge = 130U;
    msg.status = 158U;
    const char tmp_msg_0[] = {-55, 4, -101, 27, 65, -35, 116, -48, -40, -104, -65, -105, -14, -33, -24, -10, -113, -26, -97, 58, 77, -100, 122, -59, -71, 59, 70, -95, -98, 67, 36, -29, 40, 43, -114, -6, 6, -47, 57, -64, -45, 63, -23, -72, -92, -78, -80, 22, -76, -79, -56, 126, -106, -114, 107, 6, -81, 18, -98, 40, -27, 41, 50, 16, 94, -48, 39, 57, 24, -37, 60, -52, 75, 17, -100, 71, -68, 4, -124, -109, -106, -116, 49, 72, 27, -75, 8, -22, 55, 1, 83, 124, -82, 37, 90, 6, 125, 105, 109, 50, 123, -49, 15, -42, 122, 124, 39, -3, -13, 85, -60, -60, -108, 3, 39, 23, -97, 71, -95, -44, -114, -107, 25, -66, 105, -114, -105, 85, -23, -123, -17, 118, 110, -10, -4, -39, -25, 1, -33, 32, -114, -25, -32, -88, -118, -6, -100, -54, 71, -52, 0, -123, -58, -121, -36, -97, -66, 92, -3};
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
    msg.setTimeStamp(0.105602668313);
    msg.setSource(35244U);
    msg.setSourceEntity(218U);
    msg.setDestination(45274U);
    msg.setDestinationEntity(17U);
    msg.type = 100U;
    msg.req_id = 4017405718U;
    msg.ttl = 29848U;
    msg.code = 126U;
    msg.destination.assign("XDVVIZYBJRBFXGWHGWETFMHEWBQAOOPWJLWTGRGYPKLBQFUZCSKIEXEXWTNGQQLZRUEUAOHMJULCIBRHFTJKASTPGHLRJVMKZNPYCCYVZOUPXQVRFMHBFIMRGCISTKJTXOORQJVWUYSZSNGOYAXSZGVLSDYWPIAFVDVMNQETDXESXXCNBDKJLEMLWPDHRIIYUNNC");
    msg.source.assign("NGLPRCJWHOIIFYMXSCTNXVDAUZJOWAXZZFKFCLTQEDIGHHJPNAILROBQNDGKQBLVTNMTLNEWVEYTCQOEUZKJUYNKAMTWCHPYCOXYZDOBYCDPLNSCFFRTLWQFX");
    msg.acknowledge = 197U;
    msg.status = 185U;
    const char tmp_msg_0[] = {-91, -121, -63, -88, -28, -64, -74, -54, -75, 24, 30, -102, -53, -114, -94, 71, 10, 119, 109, -43, -29, 88, 116, -50, -110, 97, 30, -91, -107, 61, 32, 11, -55, -75, 100, -47, 120, 43, -78, -113, -19, 14, 65, -41, 106, -64, 68, -115, -18, -39, -43, -6, 116, -69, -45, 15, -123, -82, 50, 106, 101, 84, 9, 41, 64, -30, -50, 84, -3, -17, 5, 73, 43, 104, -61, 4, 2, 96, 34, -95, -107, 80, -72, -52, 22, -105, -22, 109, 40, 77, 112, 116, -36, 24, -42, 88, -67, -110, -119, 47, 117, -77, 81, -66, 92, 107, -82, 63, 50, -93, -47, 56, -80, -7, 124, -13, -16, 52, -73, -4, -123, 106, 61, -118, -34, -74, -37, 33, -62, 20, 113, 27, 118, -70, 50, 108, -112, -97, -47, -118, 31, 23, -81, 115, 18, 52, -8, -41, 14, 77, 126, 62, 76, -23, -119, -110, 122, -50, 88, 49, -46, -8, 53, -70, 34, -12, 85, -60, -116, 59, 12, -23, 36, 8, -88, -105, -42, 48, -14, -116, 12, -61, 94, -119, -24, -73, 13, 26, -47, 28, 12, 68, -125, -62, 71, -113, 23, -76, 64, 103, -47, -24, -40, -31, 108, -60, 6, -34, -81, -100, 65, -15, 120, 101, 13};
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
    msg.setTimeStamp(0.33755270457);
    msg.setSource(12884U);
    msg.setSourceEntity(202U);
    msg.setDestination(35266U);
    msg.setDestinationEntity(171U);
    msg.id = 67U;
    msg.range = 0.278783100182;

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
    msg.setTimeStamp(0.727331755041);
    msg.setSource(54603U);
    msg.setSourceEntity(249U);
    msg.setDestination(34100U);
    msg.setDestinationEntity(106U);
    msg.id = 210U;
    msg.range = 0.267192485684;

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
    msg.setTimeStamp(0.761138740843);
    msg.setSource(44199U);
    msg.setSourceEntity(4U);
    msg.setDestination(41147U);
    msg.setDestinationEntity(210U);
    msg.id = 121U;
    msg.range = 0.402211560544;

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
    msg.setTimeStamp(0.304533664184);
    msg.setSource(65473U);
    msg.setSourceEntity(186U);
    msg.setDestination(47987U);
    msg.setDestinationEntity(217U);
    msg.beacon.assign("PVVVYAVUKGRPMQGUUYMKIEBKUIAKQGVGTZJSDVJURPKIBDWOSLOYWTLMEOYLFKRCJQERGXPMHXWCSIWHINIWWNELYVJOFCXDDLUZQPHXKQZNAKTOBCHHMFBACZRNKCFEEHSNMEGVILFHQBTLZRGDNMZJNAUXHA");
    msg.lat = 0.70952824994;
    msg.lon = 0.567858316796;
    msg.depth = 0.419024619471;
    msg.query_channel = 53U;
    msg.reply_channel = 173U;
    msg.transponder_delay = 111U;

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
    msg.setTimeStamp(0.546135937802);
    msg.setSource(11163U);
    msg.setSourceEntity(237U);
    msg.setDestination(58992U);
    msg.setDestinationEntity(72U);
    msg.beacon.assign("HUYQFFXNQGGQBBNXGFMHZSEECCLJUTNAXUVZKVSIEPYIYPOIWFCBQYILKVRSDJHMARYIUIPXAFZOJDQNMXMHTSASWSEAENCKEQRWVOHTNBFLOWGATMTFKFDIHWBQPCZTVLZJJKEGARWUKYHWDNJWGOZJYAORKLIBVDKZPHMRUGDELDTXKNZGLVTTYSQPADRYCHOUJQDPIFORBKFVLY");
    msg.lat = 0.144476081406;
    msg.lon = 0.0240064941379;
    msg.depth = 0.859474190835;
    msg.query_channel = 187U;
    msg.reply_channel = 53U;
    msg.transponder_delay = 149U;

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
    msg.setTimeStamp(0.428850307392);
    msg.setSource(50407U);
    msg.setSourceEntity(55U);
    msg.setDestination(53612U);
    msg.setDestinationEntity(131U);
    msg.beacon.assign("XYHAMHBQWRUJUQKPXRMXSRLPGTKDUZOHWJDSMIDOFCXMFNWHGIUFJTPNAULCSYPWJLDWTPRIXMVKSRGCKAFQUTHNRBBDDOLTNLZZADJPXXUKMMRPOFECGUQDFCOSNAJIRRZCQUOKCIHPQOSWZXYGJHVMXFWECVKSATLYYNPYIZOGDBJ");
    msg.lat = 0.132570425021;
    msg.lon = 0.769626633856;
    msg.depth = 0.188608963728;
    msg.query_channel = 171U;
    msg.reply_channel = 206U;
    msg.transponder_delay = 113U;

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
    msg.setTimeStamp(0.970983063941);
    msg.setSource(7162U);
    msg.setSourceEntity(210U);
    msg.setDestination(20570U);
    msg.setDestinationEntity(106U);
    msg.op = 167U;

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
    msg.setTimeStamp(0.20730175261);
    msg.setSource(2433U);
    msg.setSourceEntity(243U);
    msg.setDestination(29470U);
    msg.setDestinationEntity(68U);
    msg.op = 228U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PYKXQUFQSAZCXKBJORBTDRLPENHJHUMBQQLICWHCXCJBIGXEPEQYTKHTOGSISBFCKSPCXMKPWYGLVVSFZKTIIDTSDOQNDFOGLRX");
    tmp_msg_0.lat = 0.160827505922;
    tmp_msg_0.lon = 0.119147927206;
    tmp_msg_0.depth = 0.588240132249;
    tmp_msg_0.query_channel = 201U;
    tmp_msg_0.reply_channel = 51U;
    tmp_msg_0.transponder_delay = 130U;
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
    msg.setTimeStamp(0.34893715212);
    msg.setSource(37922U);
    msg.setSourceEntity(9U);
    msg.setDestination(24033U);
    msg.setDestinationEntity(92U);
    msg.op = 83U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BTAVYDTBHLUCVZLHFYYJAGVFTNJGHYNLQQOIFRHRIIWXWVVAALTAPEOJOYRLGPZPUMAATUUQYZXUJRLSIQPDZMWSHZRYJRZJGDBFKADEITCIBOZSBIENUTCBCXDSMFANDKVNWLITPJECHQRXMQKLNSOGKUZWIMRBWMEOHBDDWPHKKCKGHGMNSCKVXVBFKYQSLKFNEXCBDNQSETGEFQCOJQWEZROJNEFSMODSV");
    tmp_msg_0.lat = 0.187953395011;
    tmp_msg_0.lon = 0.293182939511;
    tmp_msg_0.depth = 0.669475704209;
    tmp_msg_0.query_channel = 88U;
    tmp_msg_0.reply_channel = 166U;
    tmp_msg_0.transponder_delay = 139U;
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
    msg.setTimeStamp(0.141456588038);
    msg.setSource(43957U);
    msg.setSourceEntity(2U);
    msg.setDestination(45511U);
    msg.setDestinationEntity(87U);
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 62U;
    const char tmp_tmp_msg_0_0[] = {-34, -29, 73, -50, 90, 107, 49, -84, -125, 109, -105, 110, -8, 70, -127, -80, 35, 118, 92, 20, 38, -86, -17, -37, -53, -38, 59, 53, -108, 19, 61, -51, -83, 11, 34, -114, -107, 126, -108, 103, 27, 82, 63, -116, -102, 53, -68, -105, 5, 82, -69, 31, 33, 57, 123, -89, 4, -13, -14, 121, 5, 70, -24, 99, 42, 81, -96, 63, 7, 20, -10, -114, 31, 72, -111, -119, 101, 59, 25, -93, 73, 44, -28, -109, 69, -71, -127, 1, -74, 29, 124, 97, 39, -41, -72, -26, -31, -20, 35, -80, -59, -110, -16, -67, 39, 108, -97, -115, -126, -107, -120, 125, -37, -47, 40, 82, 6, -73, 39, 72, -13, 110, -43, 8, 41, -88, -18, 3, 17, 73, -26, 103, -110, -92, 49, -43, -46, -119, 89, -102, 125, 3, -63, -20, 87, -110, -83, -95, 72, -58, -123, -121, 116, 21, 30, -123, -32, -26, -24, -93, -52, -83, 4, 2, -93, -2, -18, 75, 69, -40, -5, 81, -19, 4, 126, -19, 44, 95, -12, 67, -76, 22, -48, -56, 23, -110, -97, -85, 16, -70, -113, 84, -35, 101, -55, -126, -51, 60, -108, 6, -88, 93, -86, 92, -59, -103, 54, 79, 113, -9, -121, -122, -38, 95, 8, 49, -88, -58, 107, 102, 30, 12, -11, 36, -116, 37, -24, 27, 78, -50, -4, -8, 123, -92, -59, 39, 59, -110, -72, -90, 118, 94, -91, 15};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.534147793442);
    msg.setSource(18391U);
    msg.setSourceEntity(117U);
    msg.setDestination(10089U);
    msg.setDestinationEntity(150U);
    IMC::Fluorescein tmp_msg_0;
    tmp_msg_0.value = 0.380364022894;
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
    msg.setTimeStamp(0.786926352726);
    msg.setSource(30749U);
    msg.setSourceEntity(205U);
    msg.setDestination(50413U);
    msg.setDestinationEntity(45U);
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.806075456403;
    tmp_msg_0.confidence = 0.928189667978;
    tmp_msg_0.opmodes.assign("AJAMIUHOHKSCZZJYPDVSKQKNVCUEGYYZXXOJONHEFSWSQGGZITDCAEQMLGXH");
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
    msg.setTimeStamp(0.0601729206208);
    msg.setSource(32615U);
    msg.setSourceEntity(9U);
    msg.setDestination(58980U);
    msg.setDestinationEntity(34U);
    msg.op = 97U;
    msg.system.assign("AAHGBXIWKGDZXHCFDHNXAWXECGRKWFPZCNLMYWAGDMFNUSIETEYPSDBUOJCGNOHOSHNDAYZANFPGIGBBWVJKFUTAMGPSWNXXHBMTYBZTETQTVBKNRHZIFSAFCUKLFLI");
    msg.range = 0.539075130213;
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.995100659133;
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
    msg.setTimeStamp(0.235131891374);
    msg.setSource(63655U);
    msg.setSourceEntity(150U);
    msg.setDestination(60427U);
    msg.setDestinationEntity(87U);
    msg.op = 174U;
    msg.system.assign("PDBZJWQLBHWFRXCQSYGDHCSOUIXYFYJUIEKLPCADNMPFFXA");
    msg.range = 0.468576761476;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.225867942152;
    tmp_msg_0.lon = 0.322374719718;
    tmp_msg_0.z = 0.682665271158;
    tmp_msg_0.z_units = 203U;
    tmp_msg_0.speed = 0.256142728057;
    tmp_msg_0.speed_units = 155U;
    tmp_msg_0.custom.assign("OVEEQLSOHMTNENASXNHMCKFKPDDWDAFXPLPERSVAOCYFXARWRMDJHFDYWYGAIZWNVVDPJGZGIGYNKYJOJAXYYSQXFBHGTTQUINKAQSRVGDYMBSVHTRIWTSJWKCSTCHLZCPOQLDRBQOZHEUNZKVZAKUMBDUJPBZQKWEOMIBGQUFHIULNCVLBPHSMZPWOFWEBZXMFRCLUFDJCOXIBMWUVA");
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
    msg.setTimeStamp(0.588551962844);
    msg.setSource(23218U);
    msg.setSourceEntity(61U);
    msg.setDestination(2225U);
    msg.setDestinationEntity(145U);
    msg.op = 230U;
    msg.system.assign("LXVHWYVMNMBUZBSMPPAISEIMFALMNZOFGETZSTZZMFZYKOIAPHIJPUXIHDJFQLVKEURHLWQATPAYRDGRLJERSXGZPAFYTFXCMRNKODZKHQDWAWHXQTKVONGQJIWYSOPXXNBVLFXWCPYCEGCTCQOJDRRXWHPNSUHSBKVGGAHELGDPUODARMQVYUCRIKUBIJMSTCONJUVKCTJJLVWEWQUDNOZD");
    msg.range = 0.327162768748;
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("YLCIFALYXLQBMXIPLVAJNIPFWGADFBULUAOKARXJDYFPHDXQPYSCVCVBDUQGPXKUEYAICROOSCUKQBMSKEZZATZCXHULSQF");
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
    msg.setTimeStamp(0.341212345619);
    msg.setSource(57214U);
    msg.setSourceEntity(63U);
    msg.setDestination(27135U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.81948348972);
    msg.setSource(54002U);
    msg.setSourceEntity(211U);
    msg.setDestination(26251U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.0926422466633);
    msg.setSource(21546U);
    msg.setSourceEntity(32U);
    msg.setDestination(55374U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.0908159357621);
    msg.setSource(8686U);
    msg.setSourceEntity(72U);
    msg.setDestination(10853U);
    msg.setDestinationEntity(123U);
    msg.list.assign("MZCXQUECTNBOLGAZYTJOXGPOWAEBEWAFUTLJFKXOIDDQYOZYJIYVOLWMCHXWRLKDOTVXHSRSIFLVZVKRIYYZSLRJKUPPIMNBOVHUPYHJWELKHJMNJSTHMFJCVQDGKDSEGPQQIFBEFDZIRSGQGUGWFAQATPXIMSRBGEJRMOKUUYTSFSCRXWACYBIQDTQNNVNJUEEFZMUAZCY");

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
    msg.setTimeStamp(0.710130563948);
    msg.setSource(39655U);
    msg.setSourceEntity(226U);
    msg.setDestination(49641U);
    msg.setDestinationEntity(135U);
    msg.list.assign("HOPJYSTBGVAVUNALSOTOVYERPPRDMIRMVJDBPNCOBBDHWKUSEFLLUYZXKZAEJJDXLBMMYDPVGYBJUIZDAEEVWPWLUIQYEXSOZWTKQVXNJFJXLQXPLHDCTXPRHWZLWNDKPELHFGAUKIFGEBMKCAJYIBKSPTTNNKCEQVXVZWRGHCMQSHSOACCQORUHFXWTOFG");

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
    msg.setTimeStamp(0.313761529143);
    msg.setSource(56950U);
    msg.setSourceEntity(174U);
    msg.setDestination(59118U);
    msg.setDestinationEntity(221U);
    msg.list.assign("LEOMBAPHDTFUXDWQIPXZQDQUMKNRVOBRYRCZSKKTGZWDFWQNEBYDSWOGCPIUEUAEOUVRXCJRAKZHZZMNNGNILHCALSXJKCXVSDZLOOZKAEGGIPWJVMVUOANVWBCYAJOLSYWHRSLFM");

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
    msg.setTimeStamp(0.703272067419);
    msg.setSource(734U);
    msg.setSourceEntity(120U);
    msg.setDestination(34138U);
    msg.setDestinationEntity(159U);
    msg.peer.assign("ZYXEHPWHCNNDSLMSJJJUAVXSXLNXQVKLTWAZCZKDQNXIIDZHCLBZKLINFNODYNHZRMQANVAORHUOTUYUY");
    msg.rssi = 0.651969671251;
    msg.integrity = 31796U;

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
    msg.setTimeStamp(0.0664657521629);
    msg.setSource(29667U);
    msg.setSourceEntity(173U);
    msg.setDestination(45631U);
    msg.setDestinationEntity(51U);
    msg.peer.assign("WSBHAJDGZVCNJIEYHM");
    msg.rssi = 0.37790855283;
    msg.integrity = 63340U;

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
    msg.setTimeStamp(0.935714048139);
    msg.setSource(23215U);
    msg.setSourceEntity(104U);
    msg.setDestination(16936U);
    msg.setDestinationEntity(168U);
    msg.peer.assign("PMCOZEBIHEOZIGKNHNDIFYSBJJWCKQCWJFLAZQXCFBNJLQRQDTWIAFHCRAGJXSVYREQTNWUDXFBWKHGIMXPYUPJSKHZKEIZFBQWAJPYLVFRIQXOPGNIKUEZVXTAKGIGDDBORTPYZCSLMHSWMUFKRTXOGCDDVJKDULHFVOUCZPOBNRRUNTNBWQGSAHOXDZSFYJUQTOWYEWTARCHUGQTLLYVNYUOJXEZMSBNLRLPPGDHMKAIMMSVEL");
    msg.rssi = 0.717077979274;
    msg.integrity = 23121U;

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
    msg.setTimeStamp(0.652016295126);
    msg.setSource(64659U);
    msg.setSourceEntity(13U);
    msg.setDestination(58588U);
    msg.setDestinationEntity(139U);
    msg.req_id = 1819U;
    msg.destination.assign("YBNFUJYCMMJXMEXIZFQKLZERIIGSVTONPAAHJMEPTWBEKTUXDLPVYTNJGCUEZPBGSYJKDYDDAUZTBMRKSUDRFGQZCTYDAXHMMKJITQFRWOCWNCHWHGGRNSIAZOMUXQVXFLJKCGNOYSDERPYKREGBWABIZLRECJDIFVHFOJAESLPODFSLKLPXTOS");
    msg.timeout = 0.220123628975;
    msg.range = 0.930970779673;
    msg.type = 141U;
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 108U;
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
    msg.setTimeStamp(0.814842893011);
    msg.setSource(37191U);
    msg.setSourceEntity(199U);
    msg.setDestination(30041U);
    msg.setDestinationEntity(163U);
    msg.req_id = 22331U;
    msg.destination.assign("VKDZRCXYWHZWQCZUDDHZAIAMVVVKVQHOPHJMQRLCAIMVYVPYLQAGNEYMANWTATLFUVYSFPKQKXMDTTJCCIJTFSUEURNGHTWBBGJAQITXSKGGUOEMLNPNJLEAEBJTFOPCSIUQQY");
    msg.timeout = 0.826509804824;
    msg.range = 0.932737523395;
    msg.type = 23U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 247U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.146218599953;
    tmp_tmp_msg_0_0.speed_units = 87U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.387946987728;
    tmp_tmp_msg_0_1.z_units = 238U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.740026425458;
    tmp_msg_0.lon = 0.155587359206;
    tmp_msg_0.radius = 0.0408389561769;
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
    msg.setTimeStamp(0.434091013583);
    msg.setSource(48746U);
    msg.setSourceEntity(91U);
    msg.setDestination(11540U);
    msg.setDestinationEntity(203U);
    msg.req_id = 55483U;
    msg.destination.assign("RMJHYGWRKAGFNFLEIMRNXHZUOKCQQJWUYHI");
    msg.timeout = 0.489141222082;
    msg.range = 0.0841522207682;
    msg.type = 5U;
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("SLCFWSBEQAZPKNGQUKYPTFUONBKNIMSIGOHWGBH");
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
    msg.setTimeStamp(0.270060286891);
    msg.setSource(21008U);
    msg.setSourceEntity(103U);
    msg.setDestination(49572U);
    msg.setDestinationEntity(120U);
    msg.req_id = 17174U;
    msg.type = 54U;
    msg.status = 56U;
    msg.info.assign("LFOARRIONAIYQYQBHWNLCAFVAMTDTMPSSWBOMHZNUZVTCAJWSNHKEAONPBQKGBXFZGKLTTFVWWEHEWRDXCIBGFQHSMYRZSBSVHKVKIKUUDXLCKEAFNCCXZBHVDQYTQRFZEJGPGMWGJVCZGUMUTMJXICRQAAODZSZTEJIJDRQPLXNAVTEKUDOWXSMEBZUGCMKRYRCLBOVIXFOHWYJQSOGTDLVUEFYEIYJGD");
    msg.range = 0.543209063708;

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
    msg.setTimeStamp(0.77752764324);
    msg.setSource(45625U);
    msg.setSourceEntity(51U);
    msg.setDestination(52838U);
    msg.setDestinationEntity(244U);
    msg.req_id = 14009U;
    msg.type = 66U;
    msg.status = 161U;
    msg.info.assign("WQPOXDPOLGZTBQUMVRZJXOKRDJXOXCGULGDJUSNSUPGJWTNBSGOKHBVRPTWDNIZPYQUSKOYTJHTLLFUCINDBQZVXBMIXADFYXAUBARPGPOVSDAITEGRHFUQKMVSENCEBASEPLIWAWMWKHIDUQNFXBAZOJHJGYZVYUNZCIEECVATEWKQIMKRANMFZIFCTYT");
    msg.range = 0.333986919104;

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
    msg.setTimeStamp(0.210911681115);
    msg.setSource(36639U);
    msg.setSourceEntity(76U);
    msg.setDestination(4210U);
    msg.setDestinationEntity(198U);
    msg.req_id = 65188U;
    msg.type = 6U;
    msg.status = 189U;
    msg.info.assign("DTUWAYBJTTTCHEYKXQLSEZLQZJRQDIUGNEGWIDACEPZUAKEWHQEEPZOTJVUVUFORAFLPRHYBXXTRWMWIQZSYPMJMRZOTLIDSB");
    msg.range = 0.25298132948;

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
    msg.setTimeStamp(0.231890041529);
    msg.setSource(24104U);
    msg.setSourceEntity(215U);
    msg.setDestination(40257U);
    msg.setDestinationEntity(201U);
    msg.value = -27688;

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
    msg.setTimeStamp(0.98318709111);
    msg.setSource(51891U);
    msg.setSourceEntity(36U);
    msg.setDestination(23216U);
    msg.setDestinationEntity(33U);
    msg.value = -32430;

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
    msg.setTimeStamp(0.943638758628);
    msg.setSource(64065U);
    msg.setSourceEntity(21U);
    msg.setDestination(62953U);
    msg.setDestinationEntity(16U);
    msg.value = -12021;

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
    msg.setTimeStamp(0.581491729331);
    msg.setSource(17238U);
    msg.setSourceEntity(84U);
    msg.setDestination(1555U);
    msg.setDestinationEntity(69U);
    msg.value = 0.691638421508;

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
    msg.setTimeStamp(0.815098286404);
    msg.setSource(39240U);
    msg.setSourceEntity(228U);
    msg.setDestination(27606U);
    msg.setDestinationEntity(138U);
    msg.value = 0.348290889641;

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
    msg.setTimeStamp(0.521920473262);
    msg.setSource(16309U);
    msg.setSourceEntity(223U);
    msg.setDestination(3881U);
    msg.setDestinationEntity(159U);
    msg.value = 0.752873413507;

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
    msg.setTimeStamp(0.863785192358);
    msg.setSource(57445U);
    msg.setSourceEntity(14U);
    msg.setDestination(51881U);
    msg.setDestinationEntity(25U);
    msg.value = 0.758357978015;

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
    msg.setTimeStamp(0.0484596506976);
    msg.setSource(49249U);
    msg.setSourceEntity(65U);
    msg.setDestination(55131U);
    msg.setDestinationEntity(208U);
    msg.value = 0.945349595387;

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
    msg.setTimeStamp(0.849184172638);
    msg.setSource(27835U);
    msg.setSourceEntity(132U);
    msg.setDestination(44539U);
    msg.setDestinationEntity(41U);
    msg.value = 0.644969167889;

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
    msg.setTimeStamp(0.522564473901);
    msg.setSource(49797U);
    msg.setSourceEntity(159U);
    msg.setDestination(46728U);
    msg.setDestinationEntity(213U);
    msg.validity = 54779U;
    msg.type = 180U;
    msg.utc_year = 57677U;
    msg.utc_month = 66U;
    msg.utc_day = 218U;
    msg.utc_time = 0.92959197742;
    msg.lat = 0.4590282315;
    msg.lon = 0.0302441221176;
    msg.height = 0.286330993238;
    msg.satellites = 251U;
    msg.cog = 0.780564989656;
    msg.sog = 0.0298187584041;
    msg.hdop = 0.778385853731;
    msg.vdop = 0.708274248204;
    msg.hacc = 0.333697968793;
    msg.vacc = 0.0805284430294;

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
    msg.setTimeStamp(0.659577374469);
    msg.setSource(459U);
    msg.setSourceEntity(149U);
    msg.setDestination(16157U);
    msg.setDestinationEntity(83U);
    msg.validity = 27814U;
    msg.type = 186U;
    msg.utc_year = 42744U;
    msg.utc_month = 251U;
    msg.utc_day = 71U;
    msg.utc_time = 0.0011600364017;
    msg.lat = 0.168477716226;
    msg.lon = 0.606660939959;
    msg.height = 0.245991576455;
    msg.satellites = 12U;
    msg.cog = 0.966841245399;
    msg.sog = 0.199286419113;
    msg.hdop = 0.587637483674;
    msg.vdop = 0.977373568338;
    msg.hacc = 0.216752588719;
    msg.vacc = 0.593241264963;

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
    msg.setTimeStamp(0.288449865358);
    msg.setSource(60003U);
    msg.setSourceEntity(13U);
    msg.setDestination(45931U);
    msg.setDestinationEntity(94U);
    msg.validity = 5351U;
    msg.type = 38U;
    msg.utc_year = 21905U;
    msg.utc_month = 130U;
    msg.utc_day = 226U;
    msg.utc_time = 0.478579830535;
    msg.lat = 0.635167013662;
    msg.lon = 0.576337133051;
    msg.height = 0.566907081604;
    msg.satellites = 217U;
    msg.cog = 0.494724335271;
    msg.sog = 0.398032873817;
    msg.hdop = 0.371689488987;
    msg.vdop = 0.468753385391;
    msg.hacc = 0.465125757792;
    msg.vacc = 0.169261232122;

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
    msg.setTimeStamp(0.864691443967);
    msg.setSource(56700U);
    msg.setSourceEntity(73U);
    msg.setDestination(41417U);
    msg.setDestinationEntity(55U);
    msg.time = 0.273031444089;
    msg.phi = 0.0958594407412;
    msg.theta = 0.479930273234;
    msg.psi = 0.210867566651;
    msg.psi_magnetic = 0.220248383765;

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
    msg.setTimeStamp(0.44268779616);
    msg.setSource(28609U);
    msg.setSourceEntity(167U);
    msg.setDestination(52307U);
    msg.setDestinationEntity(152U);
    msg.time = 0.133688299587;
    msg.phi = 0.00774764346044;
    msg.theta = 0.814079863422;
    msg.psi = 0.126021030551;
    msg.psi_magnetic = 0.905645172238;

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
    msg.setTimeStamp(0.434473144945);
    msg.setSource(56673U);
    msg.setSourceEntity(229U);
    msg.setDestination(9513U);
    msg.setDestinationEntity(208U);
    msg.time = 0.614355637127;
    msg.phi = 0.892381102264;
    msg.theta = 0.249935830859;
    msg.psi = 0.177034711282;
    msg.psi_magnetic = 0.035001970405;

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
    msg.setTimeStamp(0.388555139764);
    msg.setSource(41317U);
    msg.setSourceEntity(247U);
    msg.setDestination(2773U);
    msg.setDestinationEntity(71U);
    msg.time = 0.503400073179;
    msg.x = 0.654176254633;
    msg.y = 0.0248057428916;
    msg.z = 0.474456981174;
    msg.timestep = 0.240485641264;

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
    msg.setTimeStamp(0.506679488974);
    msg.setSource(54347U);
    msg.setSourceEntity(77U);
    msg.setDestination(7776U);
    msg.setDestinationEntity(99U);
    msg.time = 0.130988065603;
    msg.x = 0.897543823615;
    msg.y = 0.720932579465;
    msg.z = 0.683592746858;
    msg.timestep = 0.126620596055;

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
    msg.setTimeStamp(0.115344556053);
    msg.setSource(22798U);
    msg.setSourceEntity(167U);
    msg.setDestination(16251U);
    msg.setDestinationEntity(95U);
    msg.time = 0.465490144083;
    msg.x = 0.602665049399;
    msg.y = 0.330030493373;
    msg.z = 0.31336910245;
    msg.timestep = 0.233027716376;

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
    msg.setTimeStamp(0.722381122398);
    msg.setSource(39870U);
    msg.setSourceEntity(71U);
    msg.setDestination(30915U);
    msg.setDestinationEntity(115U);
    msg.time = 0.66475976314;
    msg.x = 0.415208946198;
    msg.y = 0.244209058168;
    msg.z = 0.421265293931;

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
    msg.setTimeStamp(0.44255081011);
    msg.setSource(32248U);
    msg.setSourceEntity(218U);
    msg.setDestination(8152U);
    msg.setDestinationEntity(78U);
    msg.time = 0.564247706435;
    msg.x = 0.194360142633;
    msg.y = 0.385088224716;
    msg.z = 0.257617551339;

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
    msg.setTimeStamp(0.781592851136);
    msg.setSource(47244U);
    msg.setSourceEntity(61U);
    msg.setDestination(35045U);
    msg.setDestinationEntity(59U);
    msg.time = 0.159362766038;
    msg.x = 0.47934529572;
    msg.y = 0.397477439711;
    msg.z = 0.43976560296;

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
    msg.setTimeStamp(0.830815089134);
    msg.setSource(54860U);
    msg.setSourceEntity(202U);
    msg.setDestination(40692U);
    msg.setDestinationEntity(167U);
    msg.time = 0.68351201424;
    msg.x = 0.132663906569;
    msg.y = 0.39772668285;
    msg.z = 0.947482916831;

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
    msg.setTimeStamp(0.201042195341);
    msg.setSource(62888U);
    msg.setSourceEntity(185U);
    msg.setDestination(50734U);
    msg.setDestinationEntity(77U);
    msg.time = 0.427619135403;
    msg.x = 0.432168276577;
    msg.y = 0.729192959761;
    msg.z = 0.252649727374;

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
    msg.setTimeStamp(0.447698450098);
    msg.setSource(5582U);
    msg.setSourceEntity(200U);
    msg.setDestination(56497U);
    msg.setDestinationEntity(45U);
    msg.time = 0.120778990739;
    msg.x = 0.24097594088;
    msg.y = 0.802205934618;
    msg.z = 0.155701673045;

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
    msg.setTimeStamp(0.234097157114);
    msg.setSource(29496U);
    msg.setSourceEntity(65U);
    msg.setDestination(43997U);
    msg.setDestinationEntity(6U);
    msg.time = 0.503331804037;
    msg.x = 0.61368278348;
    msg.y = 0.704935795213;
    msg.z = 0.860323672492;

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
    msg.setTimeStamp(0.530311348151);
    msg.setSource(48756U);
    msg.setSourceEntity(51U);
    msg.setDestination(36584U);
    msg.setDestinationEntity(57U);
    msg.time = 0.00332130991986;
    msg.x = 0.360393441775;
    msg.y = 0.641550234082;
    msg.z = 0.851080076825;

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
    msg.setTimeStamp(0.141888564077);
    msg.setSource(41790U);
    msg.setSourceEntity(253U);
    msg.setDestination(23621U);
    msg.setDestinationEntity(88U);
    msg.time = 0.645771120505;
    msg.x = 0.619436300864;
    msg.y = 0.536100143892;
    msg.z = 0.617516415137;

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
    msg.setTimeStamp(0.193034303214);
    msg.setSource(8015U);
    msg.setSourceEntity(33U);
    msg.setDestination(13800U);
    msg.setDestinationEntity(15U);
    msg.validity = 218U;
    msg.x = 0.83646731489;
    msg.y = 0.943108786836;
    msg.z = 0.474511743409;

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
    msg.setTimeStamp(0.222475512115);
    msg.setSource(58006U);
    msg.setSourceEntity(120U);
    msg.setDestination(1795U);
    msg.setDestinationEntity(183U);
    msg.validity = 241U;
    msg.x = 0.250879974636;
    msg.y = 0.706860612015;
    msg.z = 0.707681827232;

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
    msg.setTimeStamp(0.144023500284);
    msg.setSource(50933U);
    msg.setSourceEntity(223U);
    msg.setDestination(19334U);
    msg.setDestinationEntity(220U);
    msg.validity = 99U;
    msg.x = 0.222727360081;
    msg.y = 0.963946137034;
    msg.z = 0.1916345281;

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
    msg.setTimeStamp(0.218533420748);
    msg.setSource(30978U);
    msg.setSourceEntity(32U);
    msg.setDestination(27570U);
    msg.setDestinationEntity(167U);
    msg.validity = 207U;
    msg.x = 0.0404570853131;
    msg.y = 0.897689070152;
    msg.z = 0.345817684031;

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
    msg.setTimeStamp(0.932199590592);
    msg.setSource(14813U);
    msg.setSourceEntity(68U);
    msg.setDestination(62626U);
    msg.setDestinationEntity(86U);
    msg.validity = 203U;
    msg.x = 0.0386725855328;
    msg.y = 0.0893830669683;
    msg.z = 0.610877975809;

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
    msg.setTimeStamp(0.469905444634);
    msg.setSource(58703U);
    msg.setSourceEntity(125U);
    msg.setDestination(32506U);
    msg.setDestinationEntity(3U);
    msg.validity = 46U;
    msg.x = 0.00575410746621;
    msg.y = 0.0859055100172;
    msg.z = 0.991633933174;

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
    msg.setTimeStamp(0.747943647485);
    msg.setSource(61010U);
    msg.setSourceEntity(128U);
    msg.setDestination(34593U);
    msg.setDestinationEntity(83U);
    msg.time = 0.799007676806;
    msg.x = 0.979017966348;
    msg.y = 0.0811067376333;
    msg.z = 0.593604945159;

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
    msg.setTimeStamp(0.068567222024);
    msg.setSource(38804U);
    msg.setSourceEntity(245U);
    msg.setDestination(2905U);
    msg.setDestinationEntity(68U);
    msg.time = 0.7934093065;
    msg.x = 0.46104033266;
    msg.y = 0.856265788703;
    msg.z = 0.800818983005;

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
    msg.setTimeStamp(0.664821837831);
    msg.setSource(23556U);
    msg.setSourceEntity(82U);
    msg.setDestination(35181U);
    msg.setDestinationEntity(234U);
    msg.time = 0.000907853342065;
    msg.x = 0.524129353553;
    msg.y = 0.7326982535;
    msg.z = 0.612342756949;

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
    msg.setTimeStamp(0.508554440425);
    msg.setSource(25959U);
    msg.setSourceEntity(127U);
    msg.setDestination(50051U);
    msg.setDestinationEntity(17U);
    msg.validity = 96U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.780184982626;
    tmp_msg_0.y = 0.722402721147;
    tmp_msg_0.z = 0.905762257564;
    tmp_msg_0.phi = 0.650005103018;
    tmp_msg_0.theta = 0.149092737907;
    tmp_msg_0.psi = 0.934502287808;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.543429012782;

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
    msg.setTimeStamp(0.79163418271);
    msg.setSource(12937U);
    msg.setSourceEntity(160U);
    msg.setDestination(48823U);
    msg.setDestinationEntity(8U);
    msg.validity = 162U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.714047811231;
    tmp_msg_0.y = 0.848033909514;
    tmp_msg_0.z = 0.247602825224;
    tmp_msg_0.phi = 0.0457122562378;
    tmp_msg_0.theta = 0.366352419199;
    tmp_msg_0.psi = 0.620950322079;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.831433271175;
    tmp_msg_1.beam_height = 0.15830815236;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.354309140894;

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
    msg.setTimeStamp(0.449318330364);
    msg.setSource(50308U);
    msg.setSourceEntity(196U);
    msg.setDestination(58582U);
    msg.setDestinationEntity(197U);
    msg.validity = 179U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.229089379724;
    tmp_msg_0.beam_height = 0.760706905058;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.429404644296;

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
    msg.setTimeStamp(0.318503701625);
    msg.setSource(34836U);
    msg.setSourceEntity(44U);
    msg.setDestination(19143U);
    msg.setDestinationEntity(215U);
    msg.value = 0.49526821615;

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
    msg.setTimeStamp(0.618883741687);
    msg.setSource(61255U);
    msg.setSourceEntity(7U);
    msg.setDestination(36075U);
    msg.setDestinationEntity(87U);
    msg.value = 0.269448266894;

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
    msg.setTimeStamp(0.651620900303);
    msg.setSource(18405U);
    msg.setSourceEntity(42U);
    msg.setDestination(6929U);
    msg.setDestinationEntity(37U);
    msg.value = 0.263592940133;

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
    msg.setTimeStamp(0.924412317303);
    msg.setSource(32424U);
    msg.setSourceEntity(252U);
    msg.setDestination(19101U);
    msg.setDestinationEntity(246U);
    msg.value = 0.638563829335;

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
    msg.setTimeStamp(0.605272964013);
    msg.setSource(57731U);
    msg.setSourceEntity(71U);
    msg.setDestination(25943U);
    msg.setDestinationEntity(32U);
    msg.value = 0.448188688656;

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
    msg.setTimeStamp(0.111531610175);
    msg.setSource(25614U);
    msg.setSourceEntity(168U);
    msg.setDestination(64362U);
    msg.setDestinationEntity(250U);
    msg.value = 0.743485366965;

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
    msg.setTimeStamp(0.57317775488);
    msg.setSource(11203U);
    msg.setSourceEntity(232U);
    msg.setDestination(52650U);
    msg.setDestinationEntity(200U);
    msg.value = 0.991411522765;

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
    msg.setTimeStamp(0.57248365602);
    msg.setSource(37106U);
    msg.setSourceEntity(203U);
    msg.setDestination(59763U);
    msg.setDestinationEntity(156U);
    msg.value = 0.0627113070261;

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
    msg.setTimeStamp(0.983032729273);
    msg.setSource(925U);
    msg.setSourceEntity(240U);
    msg.setDestination(61719U);
    msg.setDestinationEntity(190U);
    msg.value = 0.379838241004;

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
    msg.setTimeStamp(0.944939144013);
    msg.setSource(27050U);
    msg.setSourceEntity(167U);
    msg.setDestination(4630U);
    msg.setDestinationEntity(50U);
    msg.value = 0.144101913375;

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
    msg.setTimeStamp(0.799432450385);
    msg.setSource(56600U);
    msg.setSourceEntity(60U);
    msg.setDestination(57489U);
    msg.setDestinationEntity(203U);
    msg.value = 0.0938466503429;

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
    msg.setTimeStamp(0.692968808135);
    msg.setSource(19418U);
    msg.setSourceEntity(218U);
    msg.setDestination(45897U);
    msg.setDestinationEntity(53U);
    msg.value = 0.779807188619;

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
    msg.setTimeStamp(0.206936027438);
    msg.setSource(24422U);
    msg.setSourceEntity(223U);
    msg.setDestination(37040U);
    msg.setDestinationEntity(130U);
    msg.value = 0.0323859402785;

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
    msg.setTimeStamp(0.628764410436);
    msg.setSource(12653U);
    msg.setSourceEntity(49U);
    msg.setDestination(32387U);
    msg.setDestinationEntity(202U);
    msg.value = 0.488490650037;

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
    msg.setTimeStamp(0.33187207638);
    msg.setSource(24462U);
    msg.setSourceEntity(211U);
    msg.setDestination(65417U);
    msg.setDestinationEntity(31U);
    msg.value = 0.759459945648;

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
    msg.setTimeStamp(0.906724825041);
    msg.setSource(29918U);
    msg.setSourceEntity(194U);
    msg.setDestination(18331U);
    msg.setDestinationEntity(151U);
    msg.value = 0.623040263485;

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
    msg.setTimeStamp(0.340938181018);
    msg.setSource(21104U);
    msg.setSourceEntity(235U);
    msg.setDestination(43670U);
    msg.setDestinationEntity(197U);
    msg.value = 0.832115114107;

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
    msg.setTimeStamp(0.782709629481);
    msg.setSource(62396U);
    msg.setSourceEntity(174U);
    msg.setDestination(44628U);
    msg.setDestinationEntity(6U);
    msg.value = 0.200373296592;

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
    msg.setTimeStamp(0.310804731533);
    msg.setSource(56183U);
    msg.setSourceEntity(144U);
    msg.setDestination(62400U);
    msg.setDestinationEntity(250U);
    msg.value = 0.261734530565;

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
    msg.setTimeStamp(0.630262806936);
    msg.setSource(57649U);
    msg.setSourceEntity(25U);
    msg.setDestination(53U);
    msg.setDestinationEntity(155U);
    msg.value = 0.963357364572;

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
    msg.setTimeStamp(0.907727560771);
    msg.setSource(16950U);
    msg.setSourceEntity(186U);
    msg.setDestination(53697U);
    msg.setDestinationEntity(120U);
    msg.value = 0.813430985792;

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
    msg.setTimeStamp(0.947918621551);
    msg.setSource(40180U);
    msg.setSourceEntity(129U);
    msg.setDestination(62273U);
    msg.setDestinationEntity(2U);
    msg.value = 0.219081376719;

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
    msg.setTimeStamp(0.407661268907);
    msg.setSource(58530U);
    msg.setSourceEntity(10U);
    msg.setDestination(9350U);
    msg.setDestinationEntity(64U);
    msg.value = 0.425038555854;

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
    msg.setTimeStamp(0.659533400248);
    msg.setSource(35301U);
    msg.setSourceEntity(132U);
    msg.setDestination(55963U);
    msg.setDestinationEntity(222U);
    msg.value = 0.819774088582;

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
    msg.setTimeStamp(0.994345957141);
    msg.setSource(48168U);
    msg.setSourceEntity(247U);
    msg.setDestination(63347U);
    msg.setDestinationEntity(173U);
    msg.direction = 0.384705015505;
    msg.speed = 0.161329574306;
    msg.turbulence = 0.226206107377;

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
    msg.setTimeStamp(0.803308093299);
    msg.setSource(62693U);
    msg.setSourceEntity(1U);
    msg.setDestination(41492U);
    msg.setDestinationEntity(244U);
    msg.direction = 0.972268363411;
    msg.speed = 0.309591176209;
    msg.turbulence = 0.373158653705;

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
    msg.setTimeStamp(0.62340118278);
    msg.setSource(43838U);
    msg.setSourceEntity(36U);
    msg.setDestination(1021U);
    msg.setDestinationEntity(70U);
    msg.direction = 0.938419425635;
    msg.speed = 0.0438295704795;
    msg.turbulence = 0.171250735406;

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
    msg.setTimeStamp(0.337339121819);
    msg.setSource(7666U);
    msg.setSourceEntity(54U);
    msg.setDestination(18992U);
    msg.setDestinationEntity(50U);
    msg.value = 0.390745540305;

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
    msg.setTimeStamp(0.468172302865);
    msg.setSource(38728U);
    msg.setSourceEntity(249U);
    msg.setDestination(51053U);
    msg.setDestinationEntity(149U);
    msg.value = 0.498737464141;

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
    msg.setTimeStamp(0.681549258277);
    msg.setSource(19281U);
    msg.setSourceEntity(47U);
    msg.setDestination(32390U);
    msg.setDestinationEntity(180U);
    msg.value = 0.101913986239;

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
    msg.setTimeStamp(0.838416207672);
    msg.setSource(31012U);
    msg.setSourceEntity(153U);
    msg.setDestination(17959U);
    msg.setDestinationEntity(63U);
    msg.value.assign("LGNJDSIVFAZACDLXFZMYEDYNPDKURPIZRLBWAKFSOVHUHKOCYIIRQEUPNCQIHJSQTUWEFOFBUHYXSZBKCJQJNLSFQDJPKZIYJMPLFXENAXEUWRTPTRXCOWYZKLHSOYTGHDWKNVSDRBIOVEPEWQYMIRAZPOIEZBVGVSLLGMXCBBTMRHHXODQWKHOGULHBFJWXBQSJNMVEKYNAQJRYTPGMDVOFNEAGGQUDITTGNVFBXCTMRMAWUS");

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
    msg.setTimeStamp(0.691331965718);
    msg.setSource(30347U);
    msg.setSourceEntity(98U);
    msg.setDestination(62226U);
    msg.setDestinationEntity(8U);
    msg.value.assign("QNEUWPHJECJVTSQNIYTDCJVGGPHUVMBYFOVJOLSMDMUOXTGRYDYAXOVNJILEUCWSIXTHBVEKRCUMFWXAEWWGYFOYSDRKYPPDPTAUXWNISHUWDIBOFJCOOHZZTKNUTNLTVSDGGIQJVPIYXLYNLRBTPHQXQKANIL");

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
    msg.setTimeStamp(0.459264831104);
    msg.setSource(54686U);
    msg.setSourceEntity(72U);
    msg.setDestination(32659U);
    msg.setDestinationEntity(184U);
    msg.value.assign("AEVEITOEMVPXEGCCQXTZYAGJBMDBIYYIJFBHSYTKEQLLMFFMAISVJVCVONYXQMVKFFEEDJPOCZWVPASYIUDUWMYMZDLLKNKJGQRPZGUQHHOPFZCAAJWZAWBLXFNDHPOULNXAEICQNPNEKRPHSHWZTBARNWZDJVCMGVSSSRBXSOOQLUHDTZLIIUKXTFPTKNETJOBSGDGVXG");

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
    msg.setTimeStamp(0.826932009435);
    msg.setSource(5447U);
    msg.setSourceEntity(57U);
    msg.setDestination(47957U);
    msg.setDestinationEntity(70U);
    const char tmp_msg_0[] = {5, 45, 57, 7, 53, -52, 109, -111, 14, 46, -45, -40, 29, 25, -79, -14, -91, 67, -76, -103, -10, -66, -71, 49, -54, -85, 58, -81, 51, -87, -96, 27, -83, -61, 104, 23, 33, 65, -54, 81, -11, -40, -84, -43, -98, -95, -9, 85, -99, 46, 34, -99, 23, 17, 100, 37, -98, -103, 124, -109, -2, 22, -10, 7, -112, 126, 11, -27, 84, 97, 58, -92, 16, 26, 73, -99, -15, 80, -127, 64, 114, -21, 109, -113, -10, -61, 14, 43, 90, -37, -16, 113, -93, 42, -57, -42, -121, -84, 124, 29, -77, -62, 44, 106, -122, -128, 65, -90, -101, 100, -52, 115, -32, -19, 62, -8, -24, 72, -45, 20, 48, -63, -63, -120, -36, -28, 66, 113, -3, 103, -86, -61, -125, -65, -62, -41, -65, -120, 72, -36, -111, 39, -52, 29, -46, 117, -87, 115, -107, -91, -107, -120, 7, 70, 60, -44, -26, -73, 113, 61, -63, 34, -12, 120, 37, 115, 32, -86, -90, 50, 106, -72, -82, -35, -125, -56, -32, 41, 15, 80, -82, -64, 50, -26, 69, -59, 106, 48, -38, 8, 96, 126, -108, 55, -35, -27, 92};
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
    msg.setTimeStamp(0.291172910512);
    msg.setSource(7720U);
    msg.setSourceEntity(37U);
    msg.setDestination(50351U);
    msg.setDestinationEntity(165U);
    const char tmp_msg_0[] = {-98, 100, 118, -65, -1, -89, 42, 32, 5, 23, -110, -107, -28, 91, -122, 106, -106, -100, 47, 34, -50, 17, 104, 21, 26, 84};
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
    msg.setTimeStamp(0.593926316154);
    msg.setSource(54609U);
    msg.setSourceEntity(216U);
    msg.setDestination(52886U);
    msg.setDestinationEntity(23U);
    const char tmp_msg_0[] = {-63, 117, -114, 126, 51, -13, 6, -108, -34, -74, 62, -63, -27, -48, 95, 41, 99, 125, -53, 46, 81, -91, -19, 3, -56, -99, -125, -44, -92, -73, 28, -72, 121, -62, 110, 37, -92, -44, 110, -25, 82, 83, 83, 121, -30, 69, 26, 57, 13, -94, -9, -22, -46, 44, -114, -56, 0, -30, -113, -80, 95, -73, 75, -3, -115, 117, 84, -27, 104, -91, -77, 106, 96, -88, 73, 112, -7, -27, -84, -43, 120, -50, 77, 97, -127, 55, 71, 83, -59, 124, -51, -117, -67, -29, 16, -111, -121, -32, -48, 78, -66, -124, -90, 5, -44, -62, 18, -7, 87, 55, -22, -75, 101, -40, -96, 110, 97, 117, 107, 2, 92, 120, 56, -97, -27, 30, 115, 62, -124, -43, 63, -9, 94, -74, -14, 94, 110, 0, 94, 33, 31, 59, 44, 57, 75, 100, -61, -43, 116, -113, 118, 85, -74, -64, -75, 99, 26, -64, -122, 93, 108, 59, -40, -42, -26, -12, -3, -48, -86, 37, -27, 122, 93, 8, -71};
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
    msg.setTimeStamp(0.544602566315);
    msg.setSource(2521U);
    msg.setSourceEntity(99U);
    msg.setDestination(38445U);
    msg.setDestinationEntity(206U);
    msg.value = 0.0933750538036;

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
    msg.setTimeStamp(0.120349106972);
    msg.setSource(31898U);
    msg.setSourceEntity(188U);
    msg.setDestination(9515U);
    msg.setDestinationEntity(79U);
    msg.value = 0.378890253084;

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
    msg.setTimeStamp(0.160501285236);
    msg.setSource(57175U);
    msg.setSourceEntity(31U);
    msg.setDestination(14264U);
    msg.setDestinationEntity(122U);
    msg.value = 0.663604409996;

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
    msg.setTimeStamp(0.358644544796);
    msg.setSource(52025U);
    msg.setSourceEntity(221U);
    msg.setDestination(58452U);
    msg.setDestinationEntity(81U);
    msg.type = 206U;
    msg.frequency = 2298189200U;
    msg.min_range = 2187U;
    msg.max_range = 47010U;
    msg.bits_per_point = 209U;
    msg.scale_factor = 0.318583641554;
    const char tmp_msg_0[] = {119, -128, -19, -39, -85, -88, 49, -1, -55, 122, -32, -48, -41, -35, -84, -42, 99, -118, 119, 116, 117, -104, 59, 12, 79, -107, -69, 74, -59, 83, -65, 8, 28, -66, -3, -62, 54, 41, 52, -37, -128, -105, 101, 81, 110, 33, 60, -41, 59, -20, -23, -122, -99, 25, 98, -25, -121, -103, 35, -93, 107, 27, 124, -101, 52, 88, 78, -94, 84, -107, -73, -102, 18, -124, -24, 107, 61, 83, 61, -70, -20, 85, 115, 61, -30, -64, 59, 62, 10, -103, 68, 72, 54, -6, -88, 36, 103, -23, -9, -107, -121, 101, -5, -109, 74, -118, -90, 24, -95, 118, 73, -101, -8, 104, -60, -80, -5, -125, -120, 66, -11, 38, 47, -14, -59, -14, 107, -48, 48, -71, -84, 5, 97, 14, 10, -23, -72, -61, 93, 36, -55, -128, 60, 102, -97, 53, 9, -106, -7, -34, -118, -30, 30, -16, -106, -12, 2, -91, 71, 92, -40, 75, 60, 65, -12, 99, -34, -16, 37, -55, 101, -45, -43, 107, 115, -64, 54, -5, -60, -101, 36, 75, -123, 95, -75, -3, 55, -108, 81, 70, -120, -21};
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
    msg.setTimeStamp(0.506420021028);
    msg.setSource(33612U);
    msg.setSourceEntity(102U);
    msg.setDestination(9589U);
    msg.setDestinationEntity(124U);
    msg.type = 253U;
    msg.frequency = 481610774U;
    msg.min_range = 7327U;
    msg.max_range = 42014U;
    msg.bits_per_point = 53U;
    msg.scale_factor = 0.19698555432;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.817720952497;
    tmp_msg_0.beam_height = 0.737701889591;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {72, 39, -28, -58, -108, 87, -108, 96, -71, 17, -32, -29, 76, -34, 6, 48, 110, 11, 5, 3, -103, 32, -21, -19, 113, 37, -77, 94, -9, -4, -63, 2, -52, 113, 21, -64, 45, -7, 8, -82, 24, 100, 11, 5, 11, -114, 105, -62, -60, -50, -86, -49, 71, 71, 110, 84, -20, 119, -85, -49, 101, 53, 106, -44, 63, -97, -47, -108, -32, -55, 108, -5, 44, 50, -40, 125, -78, -20, 96, 48, 96, -103, 19, 61, -111, 43, 91, -90, 41, -116, 72, -27, -91, -107, -102, 110, -42, -123, -40, 122, 3, -109, 10, 10, -10, -33, 76, -114, -46, 0, -24, -22, 80, -73, -80, 16, 113, -85, 68, 87, -48, 76, -22, -66, 42, -20, 36, 44, -47, -13, 62, -123, -113, -48, -4, -124, 79, -115, -71, 4, -62, -117, 91, -54, 69, 99, 41, 53, 99, 8, -87, -90, -81, -125, 115, -110, 39, -88, -110, 70, -31, 43, -37, 117, -16, 17, 83, -124, 31, 7, -34, 87, 35, -72, -112, -53, -97, 118, 16, -23, 126, 63, -63, 109, 15, -43, 103, -50, -11, -28, -34, -75, -122, -107, 17, 77, 71, 54, 82, -27, 92, -90, 112, -4, 2, -3, 85, -98, -126, -80, -22, -27, 26, 3, 59};
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
    msg.setTimeStamp(0.697491173137);
    msg.setSource(49903U);
    msg.setSourceEntity(166U);
    msg.setDestination(38623U);
    msg.setDestinationEntity(157U);
    msg.type = 148U;
    msg.frequency = 82934485U;
    msg.min_range = 29401U;
    msg.max_range = 39057U;
    msg.bits_per_point = 129U;
    msg.scale_factor = 0.141359176421;
    const char tmp_msg_0[] = {110, -101, 25, -103, 89, -87, -7, 14, -116, 10, 22, 28, 62, -109, -68, 114, -32, 115, 87, -74, 49, 41, -13, 12, 48, 16, 54, -105, 92, -37, 69, -44, -31, 79, -48, 57, -24, -38, -44, -37, 66, 78, -65, -71, 109, 79, 70, 12, 38};
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
    msg.setTimeStamp(0.0253945708456);
    msg.setSource(56881U);
    msg.setSourceEntity(58U);
    msg.setDestination(45145U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.847662058695);
    msg.setSource(20622U);
    msg.setSourceEntity(12U);
    msg.setDestination(63207U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.0710456650913);
    msg.setSource(40426U);
    msg.setSourceEntity(155U);
    msg.setDestination(4616U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.581924520521);
    msg.setSource(6314U);
    msg.setSourceEntity(194U);
    msg.setDestination(27695U);
    msg.setDestinationEntity(134U);
    msg.op = 178U;

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
    msg.setTimeStamp(0.317743860164);
    msg.setSource(1572U);
    msg.setSourceEntity(221U);
    msg.setDestination(29320U);
    msg.setDestinationEntity(180U);
    msg.op = 234U;

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
    msg.setTimeStamp(0.66989182022);
    msg.setSource(7817U);
    msg.setSourceEntity(217U);
    msg.setDestination(27686U);
    msg.setDestinationEntity(230U);
    msg.op = 162U;

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
    msg.setTimeStamp(0.489038817529);
    msg.setSource(12695U);
    msg.setSourceEntity(103U);
    msg.setDestination(61406U);
    msg.setDestinationEntity(87U);
    msg.value = 0.237049086816;
    msg.confidence = 0.560665035213;
    msg.opmodes.assign("KFJYTCCNEAKLQDXGAOXGGZZEVBLZKDURMVVBYLUHDRKDGKJAEEAAREHMHJGLODLVQTMSIOMZAJGVWCWJRNPYBIKPBTIXJBXDDPHCZHNCOVXIMQHHATOUNQKPPCOURWRTFGMKLDXTGZBYXKPATRDPNUUWMWE");

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
    msg.setTimeStamp(0.678132436915);
    msg.setSource(33624U);
    msg.setSourceEntity(239U);
    msg.setDestination(39604U);
    msg.setDestinationEntity(105U);
    msg.value = 0.193667004461;
    msg.confidence = 0.366171580194;
    msg.opmodes.assign("HZDEWZOIWFVNOWWBAXLLTRBNLUKCFYKHYWBOOVAZOGISKACEZZDUAWIFSPVMKPWWQMGPSJDIGTWDVCHDCTPOCBYDFHNAVZLRCMDHEVNDTXRKPGIMPTJEAGGOJBKMFXKVBJRKJDANHPVKSGQZCSUUPSZVDFTIHBLJRNXEQULPPTUQBNJNCYOMBYHELFSLIYFOZXYTIMMSJYXLXKQHBGQ");

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
    msg.setTimeStamp(0.6874508992);
    msg.setSource(24299U);
    msg.setSourceEntity(129U);
    msg.setDestination(56516U);
    msg.setDestinationEntity(45U);
    msg.value = 0.0400415310707;
    msg.confidence = 0.365554082175;
    msg.opmodes.assign("DXRHWCADFLOKBBUGCDAFZLCSVCKBCBJIVZRW");

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
    msg.setTimeStamp(0.409750199072);
    msg.setSource(16687U);
    msg.setSourceEntity(94U);
    msg.setDestination(49190U);
    msg.setDestinationEntity(204U);
    msg.itow = 1598864085U;
    msg.lat = 0.329460378279;
    msg.lon = 0.693361711361;
    msg.height_ell = 0.844304724224;
    msg.height_sea = 0.365543495226;
    msg.hacc = 0.834197596575;
    msg.vacc = 0.160915347863;
    msg.vel_n = 0.301161952841;
    msg.vel_e = 0.673007433058;
    msg.vel_d = 0.280914280446;
    msg.speed = 0.740742589419;
    msg.gspeed = 0.483253738608;
    msg.heading = 0.906286901292;
    msg.sacc = 0.969346936707;
    msg.cacc = 0.9312424535;

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
    msg.setTimeStamp(0.665733541581);
    msg.setSource(40727U);
    msg.setSourceEntity(246U);
    msg.setDestination(50463U);
    msg.setDestinationEntity(206U);
    msg.itow = 1582382575U;
    msg.lat = 0.253633090055;
    msg.lon = 0.393598625016;
    msg.height_ell = 0.967070323666;
    msg.height_sea = 0.316648904101;
    msg.hacc = 0.709512067881;
    msg.vacc = 0.0561935162696;
    msg.vel_n = 0.310627642618;
    msg.vel_e = 0.932048942684;
    msg.vel_d = 0.811174339573;
    msg.speed = 0.67471592647;
    msg.gspeed = 0.048312517178;
    msg.heading = 0.408083978756;
    msg.sacc = 0.996191939498;
    msg.cacc = 0.525453627701;

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
    msg.setTimeStamp(0.993774417542);
    msg.setSource(717U);
    msg.setSourceEntity(1U);
    msg.setDestination(64625U);
    msg.setDestinationEntity(228U);
    msg.itow = 850396371U;
    msg.lat = 0.891542657459;
    msg.lon = 0.894880336331;
    msg.height_ell = 0.560076357481;
    msg.height_sea = 0.614865134312;
    msg.hacc = 0.48699050485;
    msg.vacc = 0.517190401676;
    msg.vel_n = 0.711889657839;
    msg.vel_e = 0.0643814655525;
    msg.vel_d = 0.319737402964;
    msg.speed = 0.255440053586;
    msg.gspeed = 0.363382483521;
    msg.heading = 0.585228980734;
    msg.sacc = 0.305707439807;
    msg.cacc = 0.491998581583;

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
    msg.setTimeStamp(0.332105965471);
    msg.setSource(21696U);
    msg.setSourceEntity(57U);
    msg.setDestination(52575U);
    msg.setDestinationEntity(80U);
    msg.id = 118U;
    msg.value = 0.0663581716027;

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
    msg.setTimeStamp(0.0408649566933);
    msg.setSource(55118U);
    msg.setSourceEntity(228U);
    msg.setDestination(21288U);
    msg.setDestinationEntity(132U);
    msg.id = 3U;
    msg.value = 0.115343128992;

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
    msg.setTimeStamp(0.95805365531);
    msg.setSource(13424U);
    msg.setSourceEntity(139U);
    msg.setDestination(57484U);
    msg.setDestinationEntity(77U);
    msg.id = 183U;
    msg.value = 0.559929911637;

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
    msg.setTimeStamp(0.58654471892);
    msg.setSource(47619U);
    msg.setSourceEntity(170U);
    msg.setDestination(41832U);
    msg.setDestinationEntity(106U);
    msg.x = 0.985848891928;
    msg.y = 0.224035893385;
    msg.z = 0.00306778395306;
    msg.phi = 0.497586285847;
    msg.theta = 0.934754180875;
    msg.psi = 0.214812967327;

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
    msg.setTimeStamp(0.380989250101);
    msg.setSource(252U);
    msg.setSourceEntity(185U);
    msg.setDestination(14316U);
    msg.setDestinationEntity(223U);
    msg.x = 0.603362828938;
    msg.y = 0.0169432231343;
    msg.z = 0.860246775426;
    msg.phi = 0.440168040604;
    msg.theta = 0.0698034616291;
    msg.psi = 0.856670710187;

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
    msg.setTimeStamp(0.00356964645471);
    msg.setSource(17722U);
    msg.setSourceEntity(201U);
    msg.setDestination(23320U);
    msg.setDestinationEntity(49U);
    msg.x = 0.675215817985;
    msg.y = 0.516845563415;
    msg.z = 0.0937908911999;
    msg.phi = 0.367749164496;
    msg.theta = 0.264119178655;
    msg.psi = 0.392907803938;

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
    msg.setTimeStamp(0.734167326774);
    msg.setSource(5215U);
    msg.setSourceEntity(58U);
    msg.setDestination(56907U);
    msg.setDestinationEntity(96U);
    msg.beam_width = 0.603260482982;
    msg.beam_height = 0.773528312853;

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
    msg.setTimeStamp(0.822998510372);
    msg.setSource(39509U);
    msg.setSourceEntity(85U);
    msg.setDestination(16436U);
    msg.setDestinationEntity(102U);
    msg.beam_width = 0.710756393914;
    msg.beam_height = 0.999998757769;

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
    msg.setTimeStamp(0.393909130778);
    msg.setSource(1829U);
    msg.setSourceEntity(92U);
    msg.setDestination(18247U);
    msg.setDestinationEntity(200U);
    msg.beam_width = 0.57195058404;
    msg.beam_height = 0.935908661177;

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
    msg.setTimeStamp(0.128432737682);
    msg.setSource(45399U);
    msg.setSourceEntity(15U);
    msg.setDestination(35605U);
    msg.setDestinationEntity(27U);
    msg.sane = 20U;

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
    msg.setTimeStamp(0.556012085658);
    msg.setSource(44657U);
    msg.setSourceEntity(244U);
    msg.setDestination(45558U);
    msg.setDestinationEntity(193U);
    msg.sane = 185U;

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
    msg.setTimeStamp(0.225169486219);
    msg.setSource(29016U);
    msg.setSourceEntity(167U);
    msg.setDestination(15465U);
    msg.setDestinationEntity(170U);
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
    msg.setTimeStamp(0.0658619741152);
    msg.setSource(47222U);
    msg.setSourceEntity(53U);
    msg.setDestination(45254U);
    msg.setDestinationEntity(0U);
    msg.value = 0.409571576055;

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
    msg.setTimeStamp(0.897085662888);
    msg.setSource(6729U);
    msg.setSourceEntity(179U);
    msg.setDestination(27385U);
    msg.setDestinationEntity(211U);
    msg.value = 0.175812290065;

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
    msg.setTimeStamp(0.278924077986);
    msg.setSource(6216U);
    msg.setSourceEntity(77U);
    msg.setDestination(62587U);
    msg.setDestinationEntity(103U);
    msg.value = 0.563294059655;

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
    msg.setTimeStamp(0.216764381363);
    msg.setSource(40131U);
    msg.setSourceEntity(248U);
    msg.setDestination(25724U);
    msg.setDestinationEntity(20U);
    msg.value = 0.867594520327;

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
    msg.setTimeStamp(0.936992703889);
    msg.setSource(54967U);
    msg.setSourceEntity(174U);
    msg.setDestination(64018U);
    msg.setDestinationEntity(82U);
    msg.value = 0.739515456451;

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
    msg.setTimeStamp(0.496975167965);
    msg.setSource(22706U);
    msg.setSourceEntity(65U);
    msg.setDestination(19013U);
    msg.setDestinationEntity(0U);
    msg.value = 0.985702204136;

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
    msg.setTimeStamp(0.275300104687);
    msg.setSource(56248U);
    msg.setSourceEntity(107U);
    msg.setDestination(61075U);
    msg.setDestinationEntity(241U);
    msg.value = 0.356347931664;

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
    msg.setTimeStamp(0.163293082436);
    msg.setSource(23729U);
    msg.setSourceEntity(207U);
    msg.setDestination(61031U);
    msg.setDestinationEntity(65U);
    msg.value = 0.401559031829;

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
    msg.setTimeStamp(0.839064703727);
    msg.setSource(13248U);
    msg.setSourceEntity(153U);
    msg.setDestination(47255U);
    msg.setDestinationEntity(95U);
    msg.value = 0.943107084167;

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
    msg.setTimeStamp(0.153985790155);
    msg.setSource(31082U);
    msg.setSourceEntity(178U);
    msg.setDestination(6749U);
    msg.setDestinationEntity(108U);
    msg.value = 0.372804771309;

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
    msg.setTimeStamp(0.840940601327);
    msg.setSource(35251U);
    msg.setSourceEntity(151U);
    msg.setDestination(46973U);
    msg.setDestinationEntity(92U);
    msg.value = 0.285667254022;

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
    msg.setTimeStamp(0.33054745524);
    msg.setSource(49411U);
    msg.setSourceEntity(169U);
    msg.setDestination(12087U);
    msg.setDestinationEntity(181U);
    msg.value = 0.857172734596;

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
    msg.setTimeStamp(0.920037314076);
    msg.setSource(25099U);
    msg.setSourceEntity(102U);
    msg.setDestination(46975U);
    msg.setDestinationEntity(61U);
    msg.value = 0.687040067028;

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
    msg.setTimeStamp(0.482731392818);
    msg.setSource(28244U);
    msg.setSourceEntity(206U);
    msg.setDestination(13332U);
    msg.setDestinationEntity(81U);
    msg.value = 0.0700602957796;

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
    msg.setTimeStamp(0.0486111023767);
    msg.setSource(6067U);
    msg.setSourceEntity(172U);
    msg.setDestination(64773U);
    msg.setDestinationEntity(38U);
    msg.value = 0.257692358291;

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
    msg.setTimeStamp(0.290760694542);
    msg.setSource(34555U);
    msg.setSourceEntity(141U);
    msg.setDestination(60901U);
    msg.setDestinationEntity(208U);
    msg.value = 0.0438028761624;

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
    msg.setTimeStamp(0.786450707235);
    msg.setSource(37782U);
    msg.setSourceEntity(97U);
    msg.setDestination(27900U);
    msg.setDestinationEntity(226U);
    msg.value = 0.761245413628;

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
    msg.setTimeStamp(0.403579406977);
    msg.setSource(13308U);
    msg.setSourceEntity(218U);
    msg.setDestination(21095U);
    msg.setDestinationEntity(29U);
    msg.value = 0.134862434961;

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
    msg.setTimeStamp(0.179948598656);
    msg.setSource(19834U);
    msg.setSourceEntity(85U);
    msg.setDestination(9314U);
    msg.setDestinationEntity(0U);
    msg.value = 0.713365155016;

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
    msg.setTimeStamp(0.394873638623);
    msg.setSource(62232U);
    msg.setSourceEntity(37U);
    msg.setDestination(36651U);
    msg.setDestinationEntity(146U);
    msg.value = 0.373586233681;

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
    msg.setTimeStamp(0.982470404315);
    msg.setSource(5673U);
    msg.setSourceEntity(236U);
    msg.setDestination(25643U);
    msg.setDestinationEntity(170U);
    msg.value = 0.224612904869;

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
    msg.setTimeStamp(0.287871548103);
    msg.setSource(5386U);
    msg.setSourceEntity(51U);
    msg.setDestination(55306U);
    msg.setDestinationEntity(213U);
    msg.value = 0.534421515507;

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
    msg.setTimeStamp(0.604152217455);
    msg.setSource(21180U);
    msg.setSourceEntity(131U);
    msg.setDestination(48638U);
    msg.setDestinationEntity(185U);
    msg.value = 0.19630363112;

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
    msg.setTimeStamp(0.443622258611);
    msg.setSource(5035U);
    msg.setSourceEntity(128U);
    msg.setDestination(58340U);
    msg.setDestinationEntity(102U);
    msg.value = 0.846802318893;

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
    msg.setTimeStamp(0.961244127906);
    msg.setSource(41544U);
    msg.setSourceEntity(85U);
    msg.setDestination(14939U);
    msg.setDestinationEntity(20U);
    msg.validity = 57733U;
    msg.type = 31U;
    msg.tow = 3715686763U;
    msg.base_lat = 0.179160699975;
    msg.base_lon = 0.0919083498712;
    msg.base_height = 0.376631983326;
    msg.n = 0.542356237168;
    msg.e = 0.307149908594;
    msg.d = 0.846936175118;
    msg.v_n = 0.154214759261;
    msg.v_e = 0.867312165724;
    msg.v_d = 0.690478090552;
    msg.satellites = 115U;
    msg.iar_hyp = 54669U;
    msg.iar_ratio = 0.21096008123;

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
    msg.setTimeStamp(0.0156738169136);
    msg.setSource(39538U);
    msg.setSourceEntity(127U);
    msg.setDestination(12425U);
    msg.setDestinationEntity(227U);
    msg.validity = 22067U;
    msg.type = 55U;
    msg.tow = 2378286845U;
    msg.base_lat = 0.529909584802;
    msg.base_lon = 0.695772730172;
    msg.base_height = 0.092052192347;
    msg.n = 0.922297146845;
    msg.e = 0.260660185442;
    msg.d = 0.678773692904;
    msg.v_n = 0.513911951111;
    msg.v_e = 0.288596666753;
    msg.v_d = 0.100415057341;
    msg.satellites = 61U;
    msg.iar_hyp = 15913U;
    msg.iar_ratio = 0.0130694978399;

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
    msg.setTimeStamp(0.0375935420052);
    msg.setSource(28926U);
    msg.setSourceEntity(228U);
    msg.setDestination(55304U);
    msg.setDestinationEntity(13U);
    msg.validity = 23513U;
    msg.type = 155U;
    msg.tow = 1373631772U;
    msg.base_lat = 0.663573009005;
    msg.base_lon = 0.333232800486;
    msg.base_height = 0.519306400603;
    msg.n = 0.826102695316;
    msg.e = 0.619248848965;
    msg.d = 0.578838345481;
    msg.v_n = 0.53404548219;
    msg.v_e = 0.590512556412;
    msg.v_d = 0.668014216672;
    msg.satellites = 61U;
    msg.iar_hyp = 57224U;
    msg.iar_ratio = 0.356366348283;

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
    msg.setTimeStamp(0.810977571472);
    msg.setSource(60252U);
    msg.setSourceEntity(88U);
    msg.setDestination(42294U);
    msg.setDestinationEntity(67U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.577585799839;
    tmp_msg_0.lon = 0.356971046555;
    tmp_msg_0.height = 0.480667783953;
    tmp_msg_0.x = 0.923698071304;
    tmp_msg_0.y = 0.888531830301;
    tmp_msg_0.z = 0.0933702195989;
    tmp_msg_0.phi = 0.593520921522;
    tmp_msg_0.theta = 0.370080278706;
    tmp_msg_0.psi = 0.0566362087621;
    tmp_msg_0.u = 0.0583822210384;
    tmp_msg_0.v = 0.500930310272;
    tmp_msg_0.w = 0.030181298929;
    tmp_msg_0.vx = 0.666730963731;
    tmp_msg_0.vy = 0.269669261804;
    tmp_msg_0.vz = 0.516290610668;
    tmp_msg_0.p = 0.478658644053;
    tmp_msg_0.q = 0.0989602934293;
    tmp_msg_0.r = 0.262256404622;
    tmp_msg_0.depth = 0.605244174796;
    tmp_msg_0.alt = 0.251863162035;
    msg.state.set(tmp_msg_0);
    msg.type = 81U;

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
    msg.setTimeStamp(0.283579872301);
    msg.setSource(26870U);
    msg.setSourceEntity(202U);
    msg.setDestination(29171U);
    msg.setDestinationEntity(130U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.45341401719;
    tmp_msg_0.lon = 0.681362420312;
    tmp_msg_0.height = 0.0438789447409;
    tmp_msg_0.x = 0.147460265707;
    tmp_msg_0.y = 0.536535367306;
    tmp_msg_0.z = 0.586566056277;
    tmp_msg_0.phi = 0.6338297431;
    tmp_msg_0.theta = 0.51060466055;
    tmp_msg_0.psi = 0.195216924494;
    tmp_msg_0.u = 0.760483468736;
    tmp_msg_0.v = 0.372656364567;
    tmp_msg_0.w = 0.038149852052;
    tmp_msg_0.vx = 0.966271662576;
    tmp_msg_0.vy = 0.384581937013;
    tmp_msg_0.vz = 0.552990164617;
    tmp_msg_0.p = 0.270841302328;
    tmp_msg_0.q = 0.807108257006;
    tmp_msg_0.r = 0.358198844295;
    tmp_msg_0.depth = 0.156498866662;
    tmp_msg_0.alt = 0.777972176952;
    msg.state.set(tmp_msg_0);
    msg.type = 84U;

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
    msg.setTimeStamp(0.793616261564);
    msg.setSource(33529U);
    msg.setSourceEntity(182U);
    msg.setDestination(64899U);
    msg.setDestinationEntity(81U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.921048580918;
    tmp_msg_0.lon = 0.926402271604;
    tmp_msg_0.height = 0.86743355415;
    tmp_msg_0.x = 0.499638696888;
    tmp_msg_0.y = 0.263620113566;
    tmp_msg_0.z = 0.736333222294;
    tmp_msg_0.phi = 0.789124087635;
    tmp_msg_0.theta = 0.484196267407;
    tmp_msg_0.psi = 0.251939612533;
    tmp_msg_0.u = 0.179299775736;
    tmp_msg_0.v = 0.367822586378;
    tmp_msg_0.w = 0.240727804861;
    tmp_msg_0.vx = 0.195660822379;
    tmp_msg_0.vy = 0.218880763127;
    tmp_msg_0.vz = 0.780575819947;
    tmp_msg_0.p = 0.937252904984;
    tmp_msg_0.q = 0.940823954995;
    tmp_msg_0.r = 0.135932531899;
    tmp_msg_0.depth = 0.926921253956;
    tmp_msg_0.alt = 0.871951725744;
    msg.state.set(tmp_msg_0);
    msg.type = 218U;

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
    msg.setTimeStamp(0.762210189142);
    msg.setSource(51880U);
    msg.setSourceEntity(204U);
    msg.setDestination(38448U);
    msg.setDestinationEntity(142U);
    msg.value = 0.897632862907;

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
    msg.setTimeStamp(0.646899121836);
    msg.setSource(13805U);
    msg.setSourceEntity(48U);
    msg.setDestination(53181U);
    msg.setDestinationEntity(186U);
    msg.value = 0.359282585956;

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
    msg.setTimeStamp(0.536701617818);
    msg.setSource(55395U);
    msg.setSourceEntity(49U);
    msg.setDestination(57456U);
    msg.setDestinationEntity(163U);
    msg.value = 0.971086398994;

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
    msg.setTimeStamp(0.373725343335);
    msg.setSource(63239U);
    msg.setSourceEntity(113U);
    msg.setDestination(48764U);
    msg.setDestinationEntity(19U);
    msg.value = 0.970034112073;

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
    msg.setTimeStamp(0.0685805197889);
    msg.setSource(631U);
    msg.setSourceEntity(142U);
    msg.setDestination(23289U);
    msg.setDestinationEntity(99U);
    msg.value = 0.558671023058;

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
    msg.setTimeStamp(0.709670043784);
    msg.setSource(51149U);
    msg.setSourceEntity(73U);
    msg.setDestination(28788U);
    msg.setDestinationEntity(241U);
    msg.value = 0.321633308564;

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
    msg.setTimeStamp(0.432887492233);
    msg.setSource(31009U);
    msg.setSourceEntity(41U);
    msg.setDestination(44387U);
    msg.setDestinationEntity(118U);
    msg.value = 0.419459468704;

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
    msg.setTimeStamp(0.756726935163);
    msg.setSource(44952U);
    msg.setSourceEntity(11U);
    msg.setDestination(44574U);
    msg.setDestinationEntity(202U);
    msg.value = 0.993891241793;

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
    msg.setTimeStamp(0.841099254049);
    msg.setSource(14652U);
    msg.setSourceEntity(164U);
    msg.setDestination(16426U);
    msg.setDestinationEntity(100U);
    msg.value = 0.499145461465;

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
    msg.setTimeStamp(0.315385210161);
    msg.setSource(29110U);
    msg.setSourceEntity(49U);
    msg.setDestination(5836U);
    msg.setDestinationEntity(117U);
    msg.value = 0.155907351668;

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
    msg.setTimeStamp(0.709804483295);
    msg.setSource(4654U);
    msg.setSourceEntity(159U);
    msg.setDestination(51429U);
    msg.setDestinationEntity(7U);
    msg.value = 0.496151455712;

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
    msg.setTimeStamp(0.586804216422);
    msg.setSource(8273U);
    msg.setSourceEntity(110U);
    msg.setDestination(62838U);
    msg.setDestinationEntity(209U);
    msg.value = 0.780116130743;

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
    msg.setTimeStamp(0.71773977551);
    msg.setSource(56524U);
    msg.setSourceEntity(45U);
    msg.setDestination(14801U);
    msg.setDestinationEntity(9U);
    msg.value = 0.593182171648;

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
    msg.setTimeStamp(0.291485028731);
    msg.setSource(64938U);
    msg.setSourceEntity(9U);
    msg.setDestination(37215U);
    msg.setDestinationEntity(83U);
    msg.value = 0.475866518021;

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
    msg.setTimeStamp(0.447559868035);
    msg.setSource(59497U);
    msg.setSourceEntity(171U);
    msg.setDestination(4310U);
    msg.setDestinationEntity(126U);
    msg.value = 0.626757265282;

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
    msg.setTimeStamp(0.767989933666);
    msg.setSource(5941U);
    msg.setSourceEntity(149U);
    msg.setDestination(43943U);
    msg.setDestinationEntity(125U);
    msg.id = 95U;
    msg.zoom = 186U;
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
    msg.setTimeStamp(0.196437902646);
    msg.setSource(10635U);
    msg.setSourceEntity(191U);
    msg.setDestination(56417U);
    msg.setDestinationEntity(112U);
    msg.id = 45U;
    msg.zoom = 227U;
    msg.action = 45U;

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
    msg.setTimeStamp(0.194322065773);
    msg.setSource(50872U);
    msg.setSourceEntity(145U);
    msg.setDestination(36250U);
    msg.setDestinationEntity(80U);
    msg.id = 37U;
    msg.zoom = 129U;
    msg.action = 94U;

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
    msg.setTimeStamp(0.820746650561);
    msg.setSource(21509U);
    msg.setSourceEntity(250U);
    msg.setDestination(4441U);
    msg.setDestinationEntity(166U);
    msg.id = 212U;
    msg.value = 0.22260169554;

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
    msg.setTimeStamp(0.867387297264);
    msg.setSource(12330U);
    msg.setSourceEntity(103U);
    msg.setDestination(32931U);
    msg.setDestinationEntity(41U);
    msg.id = 127U;
    msg.value = 0.477018395943;

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
    msg.setTimeStamp(0.415306059584);
    msg.setSource(27395U);
    msg.setSourceEntity(102U);
    msg.setDestination(57018U);
    msg.setDestinationEntity(251U);
    msg.id = 149U;
    msg.value = 0.457878306267;

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
    msg.setTimeStamp(0.272256096442);
    msg.setSource(2637U);
    msg.setSourceEntity(169U);
    msg.setDestination(1597U);
    msg.setDestinationEntity(118U);
    msg.id = 224U;
    msg.value = 0.79350997773;

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
    msg.setTimeStamp(0.0967612190203);
    msg.setSource(29824U);
    msg.setSourceEntity(151U);
    msg.setDestination(40163U);
    msg.setDestinationEntity(66U);
    msg.id = 245U;
    msg.value = 0.880366639107;

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
    msg.setTimeStamp(0.376878012483);
    msg.setSource(34984U);
    msg.setSourceEntity(117U);
    msg.setDestination(44851U);
    msg.setDestinationEntity(252U);
    msg.id = 10U;
    msg.value = 0.276141347078;

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
    msg.setTimeStamp(0.307744201822);
    msg.setSource(25366U);
    msg.setSourceEntity(41U);
    msg.setDestination(55229U);
    msg.setDestinationEntity(141U);
    msg.id = 217U;
    msg.angle = 0.0850639648438;

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
    msg.setTimeStamp(0.347397833428);
    msg.setSource(39512U);
    msg.setSourceEntity(35U);
    msg.setDestination(21583U);
    msg.setDestinationEntity(220U);
    msg.id = 186U;
    msg.angle = 0.57912980999;

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
    msg.setTimeStamp(0.25810216292);
    msg.setSource(46346U);
    msg.setSourceEntity(34U);
    msg.setDestination(52655U);
    msg.setDestinationEntity(163U);
    msg.id = 102U;
    msg.angle = 0.744132900091;

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
    msg.setTimeStamp(0.203524068559);
    msg.setSource(55162U);
    msg.setSourceEntity(15U);
    msg.setDestination(56445U);
    msg.setDestinationEntity(192U);
    msg.op = 165U;
    msg.actions.assign("KWDYWWNLKYEGASNSMMHBTGBIDVEURPAFXQOJLQMUYZSEYNIXIMN");

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
    msg.setTimeStamp(0.723119081978);
    msg.setSource(6027U);
    msg.setSourceEntity(100U);
    msg.setDestination(62371U);
    msg.setDestinationEntity(203U);
    msg.op = 28U;
    msg.actions.assign("PTMNVGVRTQOFMBRIWBONJZDOGYFGZNIJVAOTVPBFQRRPTIYYRDAHLTUZXKELBPWLKYWJLOUCLDMJXEDNRMSAYSKVDRBFBQPJJEMPALASGRQXQGQBQINIEXEAXGVHDKL");

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
    msg.setTimeStamp(0.164689109453);
    msg.setSource(42816U);
    msg.setSourceEntity(9U);
    msg.setDestination(40236U);
    msg.setDestinationEntity(190U);
    msg.op = 192U;
    msg.actions.assign("FRLXHTOEZUVCXZACHDTVIDTPENXSUODNQGCFIJAXAPXWNDJPUBROJCXYSKYWRULPKYHFGPFELSIQGIZDJACKDMYTLVQQEZQHRSVAMKCMWWIVILCLSEWOABHUVNZMTPGELRAHRZNWYGVNUVZK");

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
    msg.setTimeStamp(0.263557721201);
    msg.setSource(39425U);
    msg.setSourceEntity(237U);
    msg.setDestination(44829U);
    msg.setDestinationEntity(137U);
    msg.actions.assign("PUANWFFITYIHHATWAAJSWJXYLQUFVCJXVZAGZHCRTXGPVCDMBMUZMCPOJBFVDSGVKMBQIWEGETZUONSSKNDQBLLUBAWEFAGHPPWIPSAUSGKULNKZKIDLPVMXFSNXQIRMSDOPPFXHLUWOMEXBRAUNQOCRREBZZGUMIJIZEFJNRCKYTCJSTLHHIYQSTJPGYYFTAQBOG");

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
    msg.setTimeStamp(0.891438104069);
    msg.setSource(37717U);
    msg.setSourceEntity(242U);
    msg.setDestination(32297U);
    msg.setDestinationEntity(21U);
    msg.actions.assign("EHXWSFIXJIAUEXTIDOTHGMCFBDIWZQPMRFBZBESERLWFWMGALLJUXJRKQTQFTPABVSDAORJPYFGWKGJLRVKEBCUETIXZDUGXHCXNDMUBHPXMUCKJCHH");

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
    msg.setTimeStamp(0.25709433618);
    msg.setSource(49511U);
    msg.setSourceEntity(221U);
    msg.setDestination(38864U);
    msg.setDestinationEntity(177U);
    msg.actions.assign("JPGVOGGZGQICVNHVDUETEBPCTUNWCACBLJPEKIYJALPVRRRTLPAKZHZFANFGIHPLFOKRGAYQXMKXBBSQALFYECRTAZJDMOCXTQFAZPQMNHECSJYMSFVSBSUYRHEZKXURXMMLRVPNOBIOUMJEUXYRSDTQFLNWHCOYJUTF");

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
    msg.setTimeStamp(0.45522534374);
    msg.setSource(50135U);
    msg.setSourceEntity(172U);
    msg.setDestination(27000U);
    msg.setDestinationEntity(179U);
    msg.button = 243U;
    msg.value = 175U;

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
    msg.setTimeStamp(0.624862099221);
    msg.setSource(58721U);
    msg.setSourceEntity(243U);
    msg.setDestination(32227U);
    msg.setDestinationEntity(53U);
    msg.button = 127U;
    msg.value = 101U;

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
    msg.setTimeStamp(0.913082045446);
    msg.setSource(5930U);
    msg.setSourceEntity(251U);
    msg.setDestination(46964U);
    msg.setDestinationEntity(208U);
    msg.button = 53U;
    msg.value = 62U;

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
    msg.setTimeStamp(0.422448045679);
    msg.setSource(9848U);
    msg.setSourceEntity(72U);
    msg.setDestination(11753U);
    msg.setDestinationEntity(7U);
    msg.op = 202U;
    msg.text.assign("FFHKTMFKTRRMHFQGUYMUECZAKNQDFTDBNRXLRBDOQUP");

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
    msg.setTimeStamp(0.972094302472);
    msg.setSource(13113U);
    msg.setSourceEntity(170U);
    msg.setDestination(4921U);
    msg.setDestinationEntity(138U);
    msg.op = 107U;
    msg.text.assign("OZYBHWIEYLSUPBMIYLUFRQFNEXABGTLQFIOWDVUKHJRTYIAWRXBENIUQSCSNRFYPXHVXVMPDLBZICDOHDCLVEWSRFRTPTTQOSAKHWXWBCGSYWKRIQVMGDNKQZFDEQGOHPPCXOEKTXLPKRFEYCUSAAVAOTSCNJSNRCVCMMZLQUUVONZTUYUFZAOJBPRGKLNMXAJNJHGZYWQMGHMJBMYTVG");

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
    msg.setTimeStamp(0.801916133457);
    msg.setSource(47805U);
    msg.setSourceEntity(163U);
    msg.setDestination(63745U);
    msg.setDestinationEntity(48U);
    msg.op = 231U;
    msg.text.assign("FKTTVJDYXKMPFMKHQONQRVQOJGE");

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
    msg.setTimeStamp(0.295529375597);
    msg.setSource(61278U);
    msg.setSourceEntity(128U);
    msg.setDestination(10976U);
    msg.setDestinationEntity(223U);
    msg.op = 6U;
    msg.time_remain = 0.887551719379;
    msg.sched_time = 0.341390328944;

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
    msg.setTimeStamp(0.576851808436);
    msg.setSource(27269U);
    msg.setSourceEntity(186U);
    msg.setDestination(2057U);
    msg.setDestinationEntity(110U);
    msg.op = 149U;
    msg.time_remain = 0.0733886062217;
    msg.sched_time = 0.341311434622;

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
    msg.setTimeStamp(0.412940403623);
    msg.setSource(29955U);
    msg.setSourceEntity(150U);
    msg.setDestination(10966U);
    msg.setDestinationEntity(242U);
    msg.op = 248U;
    msg.time_remain = 0.38331736095;
    msg.sched_time = 0.484045439668;

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
    msg.setTimeStamp(0.456648633452);
    msg.setSource(63071U);
    msg.setSourceEntity(13U);
    msg.setDestination(17147U);
    msg.setDestinationEntity(106U);
    msg.name.assign("NUZIDSJOMVHFNBNPVTFYNPWTYUHDXXOPZQUVKFQYUAVWKVRRFMGOPLGCERZMMOKKLUKBZOQCXNXQJUDWJCQRPIZBCRNCSCWEAZFTBMQHIGDBGNLGOERFIKGBLYULTCODEJYXHYKMETYHDNQHNUIOQYRICGEASGVPRMSKBKFWQPAXVUVWCBVIRBSNJSXXDSPFAMGYGAJQKAJPDLDHTDHMAJAFFAE");
    msg.op = 171U;
    msg.sched_time = 0.00594824425813;

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
    msg.setTimeStamp(0.680192930301);
    msg.setSource(39790U);
    msg.setSourceEntity(75U);
    msg.setDestination(54709U);
    msg.setDestinationEntity(124U);
    msg.name.assign("MHRTUWDPISDZMPFHJOSEEYCNDKDTGOQZOQKIIFFTNYYBALLQOLGFYKRGCKIRHEMNEMGWXGKYQZDUGVURVRQWJIIXPPABYKLZODZNUTSXZFBQVEGMQTQNEHRNO");
    msg.op = 248U;
    msg.sched_time = 0.912239191145;

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
    msg.setTimeStamp(0.179507200172);
    msg.setSource(2811U);
    msg.setSourceEntity(40U);
    msg.setDestination(23001U);
    msg.setDestinationEntity(124U);
    msg.name.assign("YXXFRBOPFCMGJBHZWSOKACUUJHZSHIEHEAYKTVSNJPMWDSBOYPCHQGLICZQPKGQKPJHSSILCCOFGUSJNDDBUZ");
    msg.op = 134U;
    msg.sched_time = 0.621433893742;

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
    msg.setTimeStamp(0.210274556578);
    msg.setSource(22123U);
    msg.setSourceEntity(133U);
    msg.setDestination(12246U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.458890706439);
    msg.setSource(52036U);
    msg.setSourceEntity(50U);
    msg.setDestination(34766U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.529600213271);
    msg.setSource(9221U);
    msg.setSourceEntity(80U);
    msg.setDestination(46360U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.991748783549);
    msg.setSource(22407U);
    msg.setSourceEntity(231U);
    msg.setDestination(63651U);
    msg.setDestinationEntity(69U);
    msg.name.assign("PGDDVBJQOUEBVSXJDQVEJTYKNNWEDEJKGXRYMCCCHZKSPMKEZMLVZSDIOBNGIYDDTOSVMYGUIDYNXGQIRBTOCGRZKWIUROYREVQWITHJLRTQPFEMHAHECWWAJAQYNRTKOWHKIMPOFIKWBGCUDUAAWANPPUTRPBRCZJGLXFNXUNUJGSLSBSLTFHNUOIPZMINSVYHAP");
    msg.state = 29U;

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
    msg.setTimeStamp(0.921269859445);
    msg.setSource(54355U);
    msg.setSourceEntity(217U);
    msg.setDestination(47737U);
    msg.setDestinationEntity(97U);
    msg.name.assign("FXJNOGYVGVAQYKJCXSKIKBTTUGMTORBVYIXSJSXWOBIAZXPRHWFOUUOGFOJVNHVRRAMJCLWAWMZCLHJATSSYIDHOTQGOTUELBOKGEEIYRDGZPMJLIFDIPPSTZNAAMFKEZXRHZWCHSZDKEEKGVFWAWBYLTFUNKHVMDCMQN");
    msg.state = 216U;

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
    msg.setTimeStamp(0.468919912829);
    msg.setSource(24569U);
    msg.setSourceEntity(219U);
    msg.setDestination(36481U);
    msg.setDestinationEntity(139U);
    msg.name.assign("OMLOCWZOTJXFEHJXOWGLRBHUXWWMVNGJZSTHYYUKEQGONCQQHRQNYWHZAPVTGYCNMXDZLCERAIWDTYFDBCJQVKBAOFPJFSSVIVFOVEAXMNIGHUGPRUUYMTIWVUPCOAXSDISLGRCKNYYXKDEARQPEOSIJLGLQPWYONBATBQTMIJTVPBRLFNSZFJSKAFM");
    msg.state = 229U;

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
    msg.setTimeStamp(0.970158339005);
    msg.setSource(3796U);
    msg.setSourceEntity(233U);
    msg.setDestination(19814U);
    msg.setDestinationEntity(27U);
    msg.name.assign("PEJDKPYFJBITVVLLUZCLVJXFGNKNZAZTDXAHWNOUBSGLZMGTPNYGFRSKJAMCPPEGOJUZNMZQROCAYJICKWBNBWEDEFFHEFXOHTTWRYSAHIINQNSXEAGFOXYSJYJBPLMHTOGTDEPEJPKM");
    msg.value = 129U;

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
    msg.setTimeStamp(0.0921534105977);
    msg.setSource(18232U);
    msg.setSourceEntity(152U);
    msg.setDestination(54485U);
    msg.setDestinationEntity(254U);
    msg.name.assign("SAIFKXWMOBCVEXMPHRXOGSFKWIQZZKQBLKSJBIUDIJRVGCRVNWAZWOQUOAYKJUJTOILLZDCSVJJVMVKASZZGPETOTTNNCNJMXYYNFPFGOMYCRYDHIJWWWIQAURNLZPFDPHOWAAOBEXQHMBIKNGAQNQUYLULHEDPFCBWOMGRAYDLDTYUEHCB");
    msg.value = 203U;

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
    msg.setTimeStamp(0.35642358601);
    msg.setSource(38275U);
    msg.setSourceEntity(9U);
    msg.setDestination(20168U);
    msg.setDestinationEntity(16U);
    msg.name.assign("NXMWPJSIKNVLTTEPLQQLXCACTOLPYNOPFQDZHMFDBVKDIZLAWGELLXQGEWSRQOTDIPDJVZGKWBWLQAGKCDHGYHRNOYJXIOGXJNIUXJZJBZSMRRWA");
    msg.value = 113U;

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
    msg.setTimeStamp(0.735466780859);
    msg.setSource(6298U);
    msg.setSourceEntity(67U);
    msg.setDestination(48623U);
    msg.setDestinationEntity(45U);
    msg.name.assign("TQSNRCIHWDXBVQBQHXWBXTYVFLUFCVU");

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
    msg.setTimeStamp(0.298033537408);
    msg.setSource(23312U);
    msg.setSourceEntity(242U);
    msg.setDestination(20188U);
    msg.setDestinationEntity(57U);
    msg.name.assign("EFQTMPZCKQPPDUYXEMDJQ");

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
    msg.setTimeStamp(0.666082708697);
    msg.setSource(27935U);
    msg.setSourceEntity(194U);
    msg.setDestination(40328U);
    msg.setDestinationEntity(31U);
    msg.name.assign("TRJVTRIBMSAIAPKTNAJGELTKWVXMYQCDGBTURUNRMJULRADPLBEWCPBESPLFCFASQCZBYHNYIKVGXSOHDPHSAVUCZZQHGDQXJAZTHJFMKPKKVO");

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
    msg.setTimeStamp(0.0578978065325);
    msg.setSource(33148U);
    msg.setSourceEntity(108U);
    msg.setDestination(23231U);
    msg.setDestinationEntity(133U);
    msg.name.assign("AQREWLLUEYZBCYJCRTHCVQBHKSTFMJWQZWMTZZBJRWZQAMMSDVZICGRKGUNSSTFCFQSVSNXSIFEPVUOMGVKXEKFMPSIWDQAINXHUTBOUZNRZFIGBRWXWACQGDSOCMOGWNGQLKTMUIYGREIODFBEKUJVHMGDPTLHYULBDXUXHNNIHJFWJIYKPJPDPLMDETXHYJNABXBLAACVFEAYKTVYENYWOPPQBSOPAFPGNTVDAVRJ");
    msg.value = 92U;

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
    msg.setTimeStamp(0.956819788714);
    msg.setSource(58923U);
    msg.setSourceEntity(107U);
    msg.setDestination(63096U);
    msg.setDestinationEntity(184U);
    msg.name.assign("SMFVDWPADBEYRLSVBEOLIHQUDJNWOAEGFCETHPKKTSWXRAVXKNDJPZSTCOOQUTWCNUAWBMRJCSWFPIKQPNBVHGDQMQSJMXZSJGOBZRIVFUYCUWBVCOLOSKIUWKJZCOVPCEOTRXIHPGUNYFMMSYGRHXHBFGMAAANGDYJFKGQYXXBLHVUJDNFZIEBZATDETEHPKYQNQJPGIMWQTMZHGTLOKXIJDEYXZZVNDAYBLTIEFYCSUVLRLA");
    msg.value = 223U;

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
    msg.setTimeStamp(0.141288381866);
    msg.setSource(5400U);
    msg.setSourceEntity(103U);
    msg.setDestination(41351U);
    msg.setDestinationEntity(29U);
    msg.name.assign("OHFDSVUZEDKRBCPPIJNAAJRPPEWMSLATUTIHYIBKNLGTWOERDJGKMQUKJIWTDFZZLOYYKMCOOIFSEZKBPFJGGGNXZXIQJDAHIFQSXUHZKLLNJXBBGXHVYRVMTHEWTUEUHWLCWLJMMIRQWUPNMFBDUTFPYGIGQNUDYHLGLDKTHJVATMUOMRAWVXQBZRBZXWAOVCGPEVYFYSOSQDXQSNCTOQENFSVBRCNVXEVJLCNSY");
    msg.value = 57U;

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
    msg.setTimeStamp(0.187594527005);
    msg.setSource(26693U);
    msg.setSourceEntity(90U);
    msg.setDestination(51469U);
    msg.setDestinationEntity(223U);
    msg.id = 190U;
    msg.period = 3822025867U;
    msg.duty_cycle = 3586023205U;

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
    msg.setTimeStamp(0.817881293433);
    msg.setSource(63790U);
    msg.setSourceEntity(221U);
    msg.setDestination(30710U);
    msg.setDestinationEntity(198U);
    msg.id = 64U;
    msg.period = 382261038U;
    msg.duty_cycle = 3208295213U;

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
    msg.setTimeStamp(0.52296596278);
    msg.setSource(64515U);
    msg.setSourceEntity(95U);
    msg.setDestination(842U);
    msg.setDestinationEntity(224U);
    msg.id = 68U;
    msg.period = 2567972727U;
    msg.duty_cycle = 656178830U;

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
    msg.setTimeStamp(0.440603132899);
    msg.setSource(16509U);
    msg.setSourceEntity(208U);
    msg.setDestination(24806U);
    msg.setDestinationEntity(249U);
    msg.id = 107U;
    msg.period = 1990131173U;
    msg.duty_cycle = 598429128U;

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
    msg.setTimeStamp(0.570777903679);
    msg.setSource(27116U);
    msg.setSourceEntity(123U);
    msg.setDestination(64785U);
    msg.setDestinationEntity(210U);
    msg.id = 254U;
    msg.period = 1873462841U;
    msg.duty_cycle = 3361151571U;

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
    msg.setTimeStamp(0.0133132865111);
    msg.setSource(29954U);
    msg.setSourceEntity(76U);
    msg.setDestination(26867U);
    msg.setDestinationEntity(118U);
    msg.id = 238U;
    msg.period = 1621744401U;
    msg.duty_cycle = 741282997U;

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
    msg.setTimeStamp(0.156435118178);
    msg.setSource(59882U);
    msg.setSourceEntity(200U);
    msg.setDestination(62556U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.318376266505;
    msg.lon = 0.786295267498;
    msg.height = 0.653327489621;
    msg.x = 0.476482452152;
    msg.y = 0.063992297801;
    msg.z = 0.495362204045;
    msg.phi = 0.29798549478;
    msg.theta = 0.760352749902;
    msg.psi = 0.864088112361;
    msg.u = 0.696727263377;
    msg.v = 0.511708965074;
    msg.w = 0.460896710977;
    msg.vx = 0.403188872843;
    msg.vy = 0.406336254887;
    msg.vz = 0.383728160089;
    msg.p = 0.876054382966;
    msg.q = 0.971621496005;
    msg.r = 0.42967036246;
    msg.depth = 0.0181561663137;
    msg.alt = 0.598533043748;

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
    msg.setTimeStamp(0.494062071651);
    msg.setSource(35347U);
    msg.setSourceEntity(234U);
    msg.setDestination(1497U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.995739961941;
    msg.lon = 0.970880914987;
    msg.height = 0.284978006067;
    msg.x = 0.607119844342;
    msg.y = 0.165362173848;
    msg.z = 0.913541511603;
    msg.phi = 0.578676964749;
    msg.theta = 0.933000081359;
    msg.psi = 0.688013853243;
    msg.u = 0.875743930779;
    msg.v = 0.857089335704;
    msg.w = 0.889402065103;
    msg.vx = 0.344873047013;
    msg.vy = 0.692621574265;
    msg.vz = 0.668572541323;
    msg.p = 0.509549039392;
    msg.q = 0.67073725196;
    msg.r = 0.852060211665;
    msg.depth = 0.889927309073;
    msg.alt = 0.485162675725;

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
    msg.setTimeStamp(0.874178679048);
    msg.setSource(35583U);
    msg.setSourceEntity(58U);
    msg.setDestination(33281U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.273319635956;
    msg.lon = 0.0529603248056;
    msg.height = 0.593775070857;
    msg.x = 0.575765651011;
    msg.y = 0.830299936291;
    msg.z = 0.939847878117;
    msg.phi = 0.894421305743;
    msg.theta = 0.412468520252;
    msg.psi = 0.178200959524;
    msg.u = 0.467367799443;
    msg.v = 0.368958400404;
    msg.w = 0.714227844275;
    msg.vx = 0.213408822642;
    msg.vy = 0.674059039298;
    msg.vz = 0.871066263593;
    msg.p = 0.488844636542;
    msg.q = 0.226357108977;
    msg.r = 0.159835888027;
    msg.depth = 0.554798631526;
    msg.alt = 0.30650334028;

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
    msg.setTimeStamp(0.0980413012385);
    msg.setSource(3855U);
    msg.setSourceEntity(144U);
    msg.setDestination(63947U);
    msg.setDestinationEntity(238U);
    msg.x = 0.531600007412;
    msg.y = 0.62452155027;
    msg.z = 0.775930461116;

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
    msg.setTimeStamp(0.140433206987);
    msg.setSource(58126U);
    msg.setSourceEntity(43U);
    msg.setDestination(12361U);
    msg.setDestinationEntity(172U);
    msg.x = 0.36788818966;
    msg.y = 0.87592294376;
    msg.z = 0.19503121309;

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
    msg.setTimeStamp(0.761395797847);
    msg.setSource(50867U);
    msg.setSourceEntity(142U);
    msg.setDestination(61204U);
    msg.setDestinationEntity(204U);
    msg.x = 0.956253944633;
    msg.y = 0.11247822715;
    msg.z = 0.539483114941;

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
    msg.setTimeStamp(0.284108740626);
    msg.setSource(48493U);
    msg.setSourceEntity(215U);
    msg.setDestination(27139U);
    msg.setDestinationEntity(135U);
    msg.value = 0.71646778395;

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
    msg.setTimeStamp(0.858193728813);
    msg.setSource(34055U);
    msg.setSourceEntity(190U);
    msg.setDestination(32183U);
    msg.setDestinationEntity(240U);
    msg.value = 0.152323280147;

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
    msg.setTimeStamp(0.922890934331);
    msg.setSource(52037U);
    msg.setSourceEntity(37U);
    msg.setDestination(18908U);
    msg.setDestinationEntity(24U);
    msg.value = 0.471474365007;

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
    msg.setTimeStamp(0.113582409628);
    msg.setSource(9076U);
    msg.setSourceEntity(218U);
    msg.setDestination(19612U);
    msg.setDestinationEntity(132U);
    msg.value = 0.775297062114;

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
    msg.setTimeStamp(0.345585128899);
    msg.setSource(47975U);
    msg.setSourceEntity(90U);
    msg.setDestination(25563U);
    msg.setDestinationEntity(152U);
    msg.value = 0.44811409609;

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
    msg.setTimeStamp(0.808971525514);
    msg.setSource(43526U);
    msg.setSourceEntity(91U);
    msg.setDestination(34856U);
    msg.setDestinationEntity(108U);
    msg.value = 0.587153523451;

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
    msg.setTimeStamp(0.140833971386);
    msg.setSource(2100U);
    msg.setSourceEntity(83U);
    msg.setDestination(4260U);
    msg.setDestinationEntity(137U);
    msg.x = 0.996799796041;
    msg.y = 0.0709683607547;
    msg.z = 0.728909590797;
    msg.phi = 0.39689773051;
    msg.theta = 0.569800069452;
    msg.psi = 0.793511720637;
    msg.p = 0.798052899742;
    msg.q = 0.0968558896913;
    msg.r = 0.433763641735;
    msg.u = 0.351751388535;
    msg.v = 0.626623533298;
    msg.w = 0.0219769341392;
    msg.bias_psi = 0.272645723883;
    msg.bias_r = 0.33171690587;

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
    msg.setTimeStamp(0.640035506222);
    msg.setSource(54931U);
    msg.setSourceEntity(91U);
    msg.setDestination(21137U);
    msg.setDestinationEntity(166U);
    msg.x = 0.238446542552;
    msg.y = 0.859890457679;
    msg.z = 0.214337772699;
    msg.phi = 0.606417316996;
    msg.theta = 0.0153524253223;
    msg.psi = 0.992471862279;
    msg.p = 0.329620616606;
    msg.q = 0.360862013512;
    msg.r = 0.770403470305;
    msg.u = 0.662650717506;
    msg.v = 0.480091022925;
    msg.w = 0.941199513348;
    msg.bias_psi = 0.493289471809;
    msg.bias_r = 0.724084057533;

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
    msg.setTimeStamp(0.725428431046);
    msg.setSource(15287U);
    msg.setSourceEntity(54U);
    msg.setDestination(9209U);
    msg.setDestinationEntity(156U);
    msg.x = 0.0375526456598;
    msg.y = 0.0227658519678;
    msg.z = 0.405616520446;
    msg.phi = 0.225624594525;
    msg.theta = 0.597775947931;
    msg.psi = 0.0620153869866;
    msg.p = 0.561243434511;
    msg.q = 0.15449010941;
    msg.r = 0.271591186679;
    msg.u = 0.770844143148;
    msg.v = 0.2008698682;
    msg.w = 0.230433596881;
    msg.bias_psi = 0.867012206789;
    msg.bias_r = 0.293159434161;

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
    msg.setTimeStamp(0.0600611325346);
    msg.setSource(5445U);
    msg.setSourceEntity(7U);
    msg.setDestination(37120U);
    msg.setDestinationEntity(173U);
    msg.bias_psi = 0.441420877137;
    msg.bias_r = 0.629301534121;
    msg.cog = 0.461271057095;
    msg.cyaw = 0.0765114237452;
    msg.gps_rej_level = 0.16169691745;
    msg.lbl_rej_level = 0.788250350211;
    msg.custom_x = 0.254716311263;
    msg.custom_y = 0.797043593726;
    msg.custom_z = 0.669394736487;

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
    msg.setTimeStamp(0.12717799336);
    msg.setSource(8762U);
    msg.setSourceEntity(113U);
    msg.setDestination(18934U);
    msg.setDestinationEntity(253U);
    msg.bias_psi = 0.0885292081252;
    msg.bias_r = 0.237717050011;
    msg.cog = 0.251720148115;
    msg.cyaw = 0.550158855296;
    msg.gps_rej_level = 0.425770597059;
    msg.lbl_rej_level = 0.173924874317;
    msg.custom_x = 0.0647660712279;
    msg.custom_y = 0.434728859672;
    msg.custom_z = 0.482334298379;

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
    msg.setTimeStamp(0.935368295952);
    msg.setSource(14422U);
    msg.setSourceEntity(196U);
    msg.setDestination(58626U);
    msg.setDestinationEntity(38U);
    msg.bias_psi = 0.560933127686;
    msg.bias_r = 0.990786816118;
    msg.cog = 0.0517712763872;
    msg.cyaw = 0.0360785312828;
    msg.gps_rej_level = 0.410189210272;
    msg.lbl_rej_level = 0.212042806516;
    msg.custom_x = 0.488190825177;
    msg.custom_y = 0.672694674219;
    msg.custom_z = 0.888336996346;

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
    msg.setTimeStamp(0.770513727283);
    msg.setSource(62177U);
    msg.setSourceEntity(142U);
    msg.setDestination(15264U);
    msg.setDestinationEntity(108U);
    msg.utc_time = 0.211974624448;
    msg.reason = 215U;

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
    msg.setTimeStamp(0.844550053599);
    msg.setSource(64449U);
    msg.setSourceEntity(237U);
    msg.setDestination(43281U);
    msg.setDestinationEntity(122U);
    msg.utc_time = 0.706161359505;
    msg.reason = 72U;

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
    msg.setTimeStamp(0.0627233531119);
    msg.setSource(43771U);
    msg.setSourceEntity(60U);
    msg.setDestination(64U);
    msg.setDestinationEntity(40U);
    msg.utc_time = 0.00312038949802;
    msg.reason = 135U;

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
    msg.setTimeStamp(0.299083028781);
    msg.setSource(30788U);
    msg.setSourceEntity(122U);
    msg.setDestination(29689U);
    msg.setDestinationEntity(132U);
    msg.id = 156U;
    msg.range = 0.699724018692;
    msg.acceptance = 213U;

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
    msg.setTimeStamp(0.170617002676);
    msg.setSource(60719U);
    msg.setSourceEntity(225U);
    msg.setDestination(2440U);
    msg.setDestinationEntity(102U);
    msg.id = 159U;
    msg.range = 0.725606960101;
    msg.acceptance = 227U;

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
    msg.setTimeStamp(0.106237445362);
    msg.setSource(2070U);
    msg.setSourceEntity(121U);
    msg.setDestination(42226U);
    msg.setDestinationEntity(223U);
    msg.id = 176U;
    msg.range = 0.762715230761;
    msg.acceptance = 66U;

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
    msg.setTimeStamp(0.390529237301);
    msg.setSource(39322U);
    msg.setSourceEntity(93U);
    msg.setDestination(14779U);
    msg.setDestinationEntity(141U);
    msg.type = 39U;
    msg.reason = 27U;
    msg.value = 0.171225567549;
    msg.timestep = 0.272918371403;

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
    msg.setTimeStamp(0.291976079899);
    msg.setSource(1077U);
    msg.setSourceEntity(62U);
    msg.setDestination(45964U);
    msg.setDestinationEntity(66U);
    msg.type = 27U;
    msg.reason = 75U;
    msg.value = 0.239259510826;
    msg.timestep = 0.796960657281;

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
    msg.setTimeStamp(0.480287008722);
    msg.setSource(23953U);
    msg.setSourceEntity(48U);
    msg.setDestination(39094U);
    msg.setDestinationEntity(201U);
    msg.type = 227U;
    msg.reason = 180U;
    msg.value = 0.666848516678;
    msg.timestep = 0.0464578094912;

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
    msg.setTimeStamp(0.704257151226);
    msg.setSource(44096U);
    msg.setSourceEntity(44U);
    msg.setDestination(40521U);
    msg.setDestinationEntity(128U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UIUOTNIXKYFDJEVICXGMQHUXLSMMDJGMQQWSBTDPUXPVVHDVCYJLZGLNPKTEVTMKDTEXZDTKAOSYXH");
    tmp_msg_0.lat = 0.317071516639;
    tmp_msg_0.lon = 0.569142832587;
    tmp_msg_0.depth = 0.566865967619;
    tmp_msg_0.query_channel = 113U;
    tmp_msg_0.reply_channel = 234U;
    tmp_msg_0.transponder_delay = 234U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.91144023929;
    msg.y = 0.070633376331;
    msg.var_x = 0.793865891949;
    msg.var_y = 0.211638380433;
    msg.distance = 0.440706199567;

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
    msg.setTimeStamp(0.381441228285);
    msg.setSource(29883U);
    msg.setSourceEntity(245U);
    msg.setDestination(62321U);
    msg.setDestinationEntity(18U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MIPCIKYOPMF");
    tmp_msg_0.lat = 0.499756720075;
    tmp_msg_0.lon = 0.225629370724;
    tmp_msg_0.depth = 0.0461797862999;
    tmp_msg_0.query_channel = 165U;
    tmp_msg_0.reply_channel = 224U;
    tmp_msg_0.transponder_delay = 188U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.204189486176;
    msg.y = 0.932289466257;
    msg.var_x = 0.952245036534;
    msg.var_y = 0.924407137094;
    msg.distance = 0.0549460986001;

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
    msg.setTimeStamp(0.32789187248);
    msg.setSource(55958U);
    msg.setSourceEntity(82U);
    msg.setDestination(41804U);
    msg.setDestinationEntity(24U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UULSZYDEWXVPKWLAUDKBCJFPHUSONEWNTTSOQTYQFWGFPMABLDYQRPKYHFVMJHGMOYEHQLJBDRIXLEGVVQIZWVBPNIUEKMAJJDWYIDVBWIYKAFZVRAVFLSCCOBYJCCQHEXAXMSSIWEXMRZPASCGOSKKFHALJINOOHWREXLEMTOVZCBCZODHFMLZDXNJHJDZYKPJFNUPNMZTCDNPIVXAEXGGBQRZQBTGRQTRTYUCURSRNLQKGXTOPKSAIUTUM");
    tmp_msg_0.lat = 0.485483152629;
    tmp_msg_0.lon = 0.227336881955;
    tmp_msg_0.depth = 0.741350578502;
    tmp_msg_0.query_channel = 149U;
    tmp_msg_0.reply_channel = 32U;
    tmp_msg_0.transponder_delay = 34U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0954189933768;
    msg.y = 0.972844669771;
    msg.var_x = 0.539936432826;
    msg.var_y = 0.674156691965;
    msg.distance = 0.55009700118;

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
    msg.setTimeStamp(0.75249660525);
    msg.setSource(45283U);
    msg.setSourceEntity(8U);
    msg.setDestination(49894U);
    msg.setDestinationEntity(12U);
    msg.state = 147U;

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
    msg.setTimeStamp(0.222276465987);
    msg.setSource(28261U);
    msg.setSourceEntity(76U);
    msg.setDestination(2718U);
    msg.setDestinationEntity(94U);
    msg.state = 69U;

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
    msg.setTimeStamp(0.349755355484);
    msg.setSource(52562U);
    msg.setSourceEntity(53U);
    msg.setDestination(46461U);
    msg.setDestinationEntity(45U);
    msg.state = 124U;

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
    msg.setTimeStamp(0.681427985358);
    msg.setSource(37518U);
    msg.setSourceEntity(253U);
    msg.setDestination(16592U);
    msg.setDestinationEntity(145U);
    msg.x = 0.599784956134;
    msg.y = 0.486649926179;
    msg.z = 0.669365210244;

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
    msg.setTimeStamp(0.399080645639);
    msg.setSource(14120U);
    msg.setSourceEntity(13U);
    msg.setDestination(42789U);
    msg.setDestinationEntity(253U);
    msg.x = 0.546897400052;
    msg.y = 0.632413358888;
    msg.z = 0.955530412408;

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
    msg.setTimeStamp(0.71791354634);
    msg.setSource(24430U);
    msg.setSourceEntity(244U);
    msg.setDestination(27912U);
    msg.setDestinationEntity(28U);
    msg.x = 0.56407485432;
    msg.y = 0.903190167501;
    msg.z = 0.432114630106;

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
    msg.setTimeStamp(0.872760280064);
    msg.setSource(57711U);
    msg.setSourceEntity(33U);
    msg.setDestination(55638U);
    msg.setDestinationEntity(171U);
    msg.va = 0.408440454442;
    msg.aoa = 0.69854119578;
    msg.ssa = 0.591236909838;

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
    msg.setTimeStamp(0.34325946217);
    msg.setSource(21684U);
    msg.setSourceEntity(61U);
    msg.setDestination(6318U);
    msg.setDestinationEntity(189U);
    msg.va = 0.38764814006;
    msg.aoa = 0.140085851777;
    msg.ssa = 0.65250249589;

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
    msg.setTimeStamp(0.34014537948);
    msg.setSource(14151U);
    msg.setSourceEntity(26U);
    msg.setDestination(31120U);
    msg.setDestinationEntity(144U);
    msg.va = 0.300412906759;
    msg.aoa = 0.447454325872;
    msg.ssa = 0.495687624133;

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
    msg.setTimeStamp(0.0449344627742);
    msg.setSource(37530U);
    msg.setSourceEntity(231U);
    msg.setDestination(34388U);
    msg.setDestinationEntity(179U);
    msg.mmsi = 2312510123U;
    msg.lon = 0.364344025919;
    msg.lat = 0.607833131602;
    msg.x = 0.367845960087;
    msg.y = 0.682743925758;
    msg.psi = 0.842846839867;
    msg.u = 0.449229096965;
    msg.v = 0.389853716035;
    msg.a = 0.497200586531;
    msg.b = 0.496643499418;
    msg.c = 0.144270444109;
    msg.d = 0.381096795797;

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
    msg.setTimeStamp(0.203124883296);
    msg.setSource(1180U);
    msg.setSourceEntity(199U);
    msg.setDestination(28479U);
    msg.setDestinationEntity(215U);
    msg.mmsi = 2292559876U;
    msg.lon = 0.441102448768;
    msg.lat = 0.751366207515;
    msg.x = 0.717477070303;
    msg.y = 0.468612833642;
    msg.psi = 0.694300392894;
    msg.u = 0.774048038114;
    msg.v = 0.573403296495;
    msg.a = 0.998104003747;
    msg.b = 0.218828195469;
    msg.c = 0.457984474199;
    msg.d = 0.495145660623;

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
    msg.setTimeStamp(0.0283745727087);
    msg.setSource(50936U);
    msg.setSourceEntity(181U);
    msg.setDestination(16196U);
    msg.setDestinationEntity(163U);
    msg.mmsi = 174876700U;
    msg.lon = 0.725522126988;
    msg.lat = 0.748307084762;
    msg.x = 0.117529677356;
    msg.y = 0.468245678277;
    msg.psi = 0.4815296494;
    msg.u = 0.364485410164;
    msg.v = 0.760190628111;
    msg.a = 0.517631887069;
    msg.b = 0.277292035491;
    msg.c = 0.332757549528;
    msg.d = 0.843958232201;

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
    msg.setTimeStamp(0.410092230852);
    msg.setSource(41390U);
    msg.setSourceEntity(75U);
    msg.setDestination(9285U);
    msg.setDestinationEntity(73U);
    msg.value = 0.925040361413;

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
    msg.setTimeStamp(0.17384071349);
    msg.setSource(6183U);
    msg.setSourceEntity(22U);
    msg.setDestination(28646U);
    msg.setDestinationEntity(204U);
    msg.value = 0.403432118378;

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
    msg.setTimeStamp(0.918009749818);
    msg.setSource(1063U);
    msg.setSourceEntity(105U);
    msg.setDestination(13574U);
    msg.setDestinationEntity(172U);
    msg.value = 0.557222981802;

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
    msg.setTimeStamp(0.758791058699);
    msg.setSource(39435U);
    msg.setSourceEntity(16U);
    msg.setDestination(27128U);
    msg.setDestinationEntity(69U);
    msg.value = 0.405283771045;
    msg.z_units = 58U;

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
    msg.setTimeStamp(0.878593464218);
    msg.setSource(27131U);
    msg.setSourceEntity(17U);
    msg.setDestination(24978U);
    msg.setDestinationEntity(123U);
    msg.value = 0.568327820653;
    msg.z_units = 124U;

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
    msg.setTimeStamp(0.918217480717);
    msg.setSource(64934U);
    msg.setSourceEntity(189U);
    msg.setDestination(57609U);
    msg.setDestinationEntity(120U);
    msg.value = 0.332160212879;
    msg.z_units = 86U;

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
    msg.setTimeStamp(0.453303904046);
    msg.setSource(18187U);
    msg.setSourceEntity(15U);
    msg.setDestination(2657U);
    msg.setDestinationEntity(24U);
    msg.value = 0.63229778096;
    msg.speed_units = 213U;

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
    msg.setTimeStamp(0.423854362145);
    msg.setSource(14336U);
    msg.setSourceEntity(154U);
    msg.setDestination(64657U);
    msg.setDestinationEntity(63U);
    msg.value = 0.753028201748;
    msg.speed_units = 68U;

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
    msg.setTimeStamp(0.461541905966);
    msg.setSource(27865U);
    msg.setSourceEntity(169U);
    msg.setDestination(31446U);
    msg.setDestinationEntity(84U);
    msg.value = 0.960963991477;
    msg.speed_units = 33U;

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
    msg.setTimeStamp(0.185207550199);
    msg.setSource(4841U);
    msg.setSourceEntity(46U);
    msg.setDestination(58195U);
    msg.setDestinationEntity(86U);
    msg.value = 0.898370687892;

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
    msg.setTimeStamp(0.377058049295);
    msg.setSource(25667U);
    msg.setSourceEntity(41U);
    msg.setDestination(1779U);
    msg.setDestinationEntity(250U);
    msg.value = 0.575728323182;

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
    msg.setTimeStamp(0.0859653312951);
    msg.setSource(63787U);
    msg.setSourceEntity(146U);
    msg.setDestination(34648U);
    msg.setDestinationEntity(244U);
    msg.value = 0.845091562211;

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
    msg.setTimeStamp(0.794352390435);
    msg.setSource(10193U);
    msg.setSourceEntity(43U);
    msg.setDestination(50432U);
    msg.setDestinationEntity(196U);
    msg.value = 0.959677034854;

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
    msg.setTimeStamp(0.4527353913);
    msg.setSource(38400U);
    msg.setSourceEntity(53U);
    msg.setDestination(42545U);
    msg.setDestinationEntity(47U);
    msg.value = 0.986156517947;

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
    msg.setTimeStamp(0.254200715722);
    msg.setSource(4215U);
    msg.setSourceEntity(115U);
    msg.setDestination(47152U);
    msg.setDestinationEntity(113U);
    msg.value = 0.437871226303;

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
    msg.setTimeStamp(0.371792162653);
    msg.setSource(49239U);
    msg.setSourceEntity(157U);
    msg.setDestination(61226U);
    msg.setDestinationEntity(167U);
    msg.value = 0.897851286785;

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
    msg.setTimeStamp(0.178430680284);
    msg.setSource(50074U);
    msg.setSourceEntity(111U);
    msg.setDestination(61818U);
    msg.setDestinationEntity(170U);
    msg.value = 0.979643155639;

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
    msg.setTimeStamp(0.19801746886);
    msg.setSource(36749U);
    msg.setSourceEntity(238U);
    msg.setDestination(6822U);
    msg.setDestinationEntity(116U);
    msg.value = 0.0313465456192;

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
    msg.setTimeStamp(0.845852879506);
    msg.setSource(30401U);
    msg.setSourceEntity(245U);
    msg.setDestination(56675U);
    msg.setDestinationEntity(56U);
    msg.path_ref = 978773745U;
    msg.start_lat = 0.689698786498;
    msg.start_lon = 0.226763576396;
    msg.start_z = 0.442544461592;
    msg.start_z_units = 223U;
    msg.end_lat = 0.791770845747;
    msg.end_lon = 0.0568715110041;
    msg.end_z = 0.180443491873;
    msg.end_z_units = 184U;
    msg.speed = 0.530728445078;
    msg.speed_units = 40U;
    msg.lradius = 0.289564067693;
    msg.flags = 204U;

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
    msg.setTimeStamp(0.68269684527);
    msg.setSource(50860U);
    msg.setSourceEntity(168U);
    msg.setDestination(54721U);
    msg.setDestinationEntity(28U);
    msg.path_ref = 3943767382U;
    msg.start_lat = 0.831936860806;
    msg.start_lon = 0.932756206632;
    msg.start_z = 0.118634960125;
    msg.start_z_units = 200U;
    msg.end_lat = 0.715080757705;
    msg.end_lon = 0.982344293207;
    msg.end_z = 0.82434332212;
    msg.end_z_units = 62U;
    msg.speed = 0.705977019492;
    msg.speed_units = 236U;
    msg.lradius = 0.547854090038;
    msg.flags = 251U;

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
    msg.setTimeStamp(0.617508065652);
    msg.setSource(57190U);
    msg.setSourceEntity(127U);
    msg.setDestination(43140U);
    msg.setDestinationEntity(32U);
    msg.path_ref = 260962630U;
    msg.start_lat = 0.981693092298;
    msg.start_lon = 0.156913432365;
    msg.start_z = 0.108822990996;
    msg.start_z_units = 207U;
    msg.end_lat = 0.709993607003;
    msg.end_lon = 0.00932573993061;
    msg.end_z = 0.930070558144;
    msg.end_z_units = 70U;
    msg.speed = 0.298664622917;
    msg.speed_units = 189U;
    msg.lradius = 0.0594339665388;
    msg.flags = 46U;

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
    msg.setTimeStamp(0.426682758673);
    msg.setSource(15344U);
    msg.setSourceEntity(146U);
    msg.setDestination(10914U);
    msg.setDestinationEntity(31U);
    msg.x = 0.835298195313;
    msg.y = 0.212532050456;
    msg.z = 0.781578079488;
    msg.k = 0.534989429176;
    msg.m = 0.480563689334;
    msg.n = 0.102645282249;
    msg.flags = 152U;

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
    msg.setTimeStamp(0.293839073122);
    msg.setSource(24985U);
    msg.setSourceEntity(191U);
    msg.setDestination(35864U);
    msg.setDestinationEntity(53U);
    msg.x = 0.52501620041;
    msg.y = 0.565863044603;
    msg.z = 0.73084717348;
    msg.k = 0.98912905577;
    msg.m = 0.648273949214;
    msg.n = 0.549352371543;
    msg.flags = 229U;

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
    msg.setTimeStamp(0.293966921738);
    msg.setSource(25956U);
    msg.setSourceEntity(26U);
    msg.setDestination(4895U);
    msg.setDestinationEntity(254U);
    msg.x = 0.293440903391;
    msg.y = 0.0938354512035;
    msg.z = 0.721813825054;
    msg.k = 0.186888718209;
    msg.m = 0.100298970797;
    msg.n = 0.731326014318;
    msg.flags = 148U;

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
    msg.setTimeStamp(0.465496766383);
    msg.setSource(58575U);
    msg.setSourceEntity(109U);
    msg.setDestination(38596U);
    msg.setDestinationEntity(243U);
    msg.value = 0.190017033802;

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
    msg.setTimeStamp(0.976780589443);
    msg.setSource(50799U);
    msg.setSourceEntity(110U);
    msg.setDestination(41079U);
    msg.setDestinationEntity(122U);
    msg.value = 0.410829981363;

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
    msg.setTimeStamp(0.321622949982);
    msg.setSource(15511U);
    msg.setSourceEntity(132U);
    msg.setDestination(3745U);
    msg.setDestinationEntity(202U);
    msg.value = 0.567659536206;

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
    msg.setTimeStamp(0.529185883802);
    msg.setSource(14382U);
    msg.setSourceEntity(142U);
    msg.setDestination(52235U);
    msg.setDestinationEntity(214U);
    msg.u = 0.719508925626;
    msg.v = 0.211745097738;
    msg.w = 0.353150363245;
    msg.p = 0.982061350252;
    msg.q = 0.733066395995;
    msg.r = 0.215975843694;
    msg.flags = 109U;

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
    msg.setTimeStamp(0.282530064157);
    msg.setSource(44193U);
    msg.setSourceEntity(79U);
    msg.setDestination(19823U);
    msg.setDestinationEntity(233U);
    msg.u = 0.632418348455;
    msg.v = 0.176111532016;
    msg.w = 0.370402397466;
    msg.p = 0.216189500424;
    msg.q = 0.0600397073203;
    msg.r = 0.946269051156;
    msg.flags = 254U;

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
    msg.setTimeStamp(0.771097037702);
    msg.setSource(63374U);
    msg.setSourceEntity(23U);
    msg.setDestination(1674U);
    msg.setDestinationEntity(162U);
    msg.u = 0.426896423119;
    msg.v = 0.792308220573;
    msg.w = 0.0437240377896;
    msg.p = 0.461401344763;
    msg.q = 0.0666325201673;
    msg.r = 0.299481545907;
    msg.flags = 204U;

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
    msg.setTimeStamp(0.184918658641);
    msg.setSource(22479U);
    msg.setSourceEntity(11U);
    msg.setDestination(33221U);
    msg.setDestinationEntity(155U);
    msg.path_ref = 3098578141U;
    msg.start_lat = 0.0625882739158;
    msg.start_lon = 0.405928190588;
    msg.start_z = 0.756372885883;
    msg.start_z_units = 103U;
    msg.end_lat = 0.414597166592;
    msg.end_lon = 0.555194306351;
    msg.end_z = 0.889265283158;
    msg.end_z_units = 75U;
    msg.lradius = 0.302172830743;
    msg.flags = 14U;
    msg.x = 0.473394090922;
    msg.y = 0.155643827318;
    msg.z = 0.45030458025;
    msg.vx = 0.781691607271;
    msg.vy = 0.988439200574;
    msg.vz = 0.382889642496;
    msg.course_error = 0.662952540367;
    msg.eta = 16875U;

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
    msg.setTimeStamp(0.628793675512);
    msg.setSource(5510U);
    msg.setSourceEntity(60U);
    msg.setDestination(9548U);
    msg.setDestinationEntity(133U);
    msg.path_ref = 2408914626U;
    msg.start_lat = 0.0268130298173;
    msg.start_lon = 0.951541594629;
    msg.start_z = 0.954609478294;
    msg.start_z_units = 28U;
    msg.end_lat = 0.486655593621;
    msg.end_lon = 0.729122442811;
    msg.end_z = 0.637462761369;
    msg.end_z_units = 8U;
    msg.lradius = 0.302986452801;
    msg.flags = 244U;
    msg.x = 0.213787461464;
    msg.y = 0.7934981135;
    msg.z = 0.528685932162;
    msg.vx = 0.804094332226;
    msg.vy = 0.726471939051;
    msg.vz = 0.392397430818;
    msg.course_error = 0.505308969303;
    msg.eta = 2254U;

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
    msg.setTimeStamp(0.293567742932);
    msg.setSource(8623U);
    msg.setSourceEntity(112U);
    msg.setDestination(62340U);
    msg.setDestinationEntity(217U);
    msg.path_ref = 865302618U;
    msg.start_lat = 0.126578090205;
    msg.start_lon = 0.0655451199726;
    msg.start_z = 0.147071927352;
    msg.start_z_units = 245U;
    msg.end_lat = 0.487256545454;
    msg.end_lon = 0.578247295409;
    msg.end_z = 0.646800759707;
    msg.end_z_units = 174U;
    msg.lradius = 0.619280508167;
    msg.flags = 136U;
    msg.x = 0.745233204298;
    msg.y = 0.669169928185;
    msg.z = 0.308912662789;
    msg.vx = 0.190644830084;
    msg.vy = 0.278876439383;
    msg.vz = 0.878025578878;
    msg.course_error = 0.72074750389;
    msg.eta = 17029U;

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
    msg.setTimeStamp(0.0770158309139);
    msg.setSource(54767U);
    msg.setSourceEntity(252U);
    msg.setDestination(9663U);
    msg.setDestinationEntity(58U);
    msg.k = 0.477926821965;
    msg.m = 0.635596229913;
    msg.n = 0.597411280841;

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
    msg.setTimeStamp(0.559732432099);
    msg.setSource(30145U);
    msg.setSourceEntity(127U);
    msg.setDestination(5391U);
    msg.setDestinationEntity(52U);
    msg.k = 0.593812798553;
    msg.m = 0.665961818505;
    msg.n = 0.644993981568;

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
    msg.setTimeStamp(0.635411687106);
    msg.setSource(50254U);
    msg.setSourceEntity(134U);
    msg.setDestination(29640U);
    msg.setDestinationEntity(129U);
    msg.k = 0.219285598805;
    msg.m = 0.449793413986;
    msg.n = 0.0990572310699;

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
    msg.setTimeStamp(0.869238895549);
    msg.setSource(2181U);
    msg.setSourceEntity(19U);
    msg.setDestination(12791U);
    msg.setDestinationEntity(140U);
    msg.p = 0.995339667555;
    msg.i = 0.752294878853;
    msg.d = 0.572504259752;
    msg.a = 0.0984152032557;

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
    msg.setTimeStamp(0.509651133695);
    msg.setSource(58991U);
    msg.setSourceEntity(24U);
    msg.setDestination(17913U);
    msg.setDestinationEntity(176U);
    msg.p = 0.581741788127;
    msg.i = 0.675131864413;
    msg.d = 0.237079850998;
    msg.a = 0.735748895334;

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
    msg.setTimeStamp(0.0811431564982);
    msg.setSource(43978U);
    msg.setSourceEntity(49U);
    msg.setDestination(40241U);
    msg.setDestinationEntity(151U);
    msg.p = 0.522609386211;
    msg.i = 0.175381029276;
    msg.d = 0.59049631415;
    msg.a = 0.572368342741;

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
    msg.setTimeStamp(0.548951130411);
    msg.setSource(19787U);
    msg.setSourceEntity(145U);
    msg.setDestination(11146U);
    msg.setDestinationEntity(36U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.572302928832);
    msg.setSource(5728U);
    msg.setSourceEntity(116U);
    msg.setDestination(9787U);
    msg.setDestinationEntity(245U);
    msg.op = 109U;

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
    msg.setTimeStamp(0.865683849472);
    msg.setSource(26089U);
    msg.setSourceEntity(30U);
    msg.setDestination(18449U);
    msg.setDestinationEntity(92U);
    msg.op = 116U;

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
    msg.setTimeStamp(0.0515045026545);
    msg.setSource(19888U);
    msg.setSourceEntity(158U);
    msg.setDestination(10376U);
    msg.setDestinationEntity(199U);
    msg.x = 0.168907346174;
    msg.y = 0.815953000728;
    msg.z = 0.812769583845;
    msg.vx = 0.629031860916;
    msg.vy = 0.0799788525853;
    msg.vz = 0.466365052147;
    msg.ax = 0.619665699674;
    msg.ay = 0.164841216831;
    msg.az = 0.900261591626;
    msg.flags = 20379U;

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
    msg.setTimeStamp(0.918333297423);
    msg.setSource(2104U);
    msg.setSourceEntity(62U);
    msg.setDestination(12564U);
    msg.setDestinationEntity(167U);
    msg.x = 0.411157834647;
    msg.y = 0.465782950663;
    msg.z = 0.519935877606;
    msg.vx = 0.300403856357;
    msg.vy = 0.0885016668857;
    msg.vz = 0.206760414858;
    msg.ax = 0.114770316681;
    msg.ay = 0.735991773111;
    msg.az = 0.457164740123;
    msg.flags = 38175U;

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
    msg.setTimeStamp(0.639810197655);
    msg.setSource(54556U);
    msg.setSourceEntity(244U);
    msg.setDestination(3340U);
    msg.setDestinationEntity(222U);
    msg.x = 0.155648134978;
    msg.y = 0.538471949929;
    msg.z = 0.814777402943;
    msg.vx = 0.719297703356;
    msg.vy = 0.725071018285;
    msg.vz = 0.926167844122;
    msg.ax = 0.680693894701;
    msg.ay = 0.113421630062;
    msg.az = 0.63992539495;
    msg.flags = 40402U;

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
    msg.setTimeStamp(0.0100338222641);
    msg.setSource(23763U);
    msg.setSourceEntity(101U);
    msg.setDestination(32226U);
    msg.setDestinationEntity(33U);
    msg.value = 0.986960798034;

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
    msg.setTimeStamp(0.730031440382);
    msg.setSource(17314U);
    msg.setSourceEntity(228U);
    msg.setDestination(2290U);
    msg.setDestinationEntity(202U);
    msg.value = 0.958685625413;

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
    msg.setTimeStamp(0.073329575997);
    msg.setSource(26512U);
    msg.setSourceEntity(133U);
    msg.setDestination(40661U);
    msg.setDestinationEntity(77U);
    msg.value = 0.399728443886;

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
    msg.setTimeStamp(0.555408840937);
    msg.setSource(30258U);
    msg.setSourceEntity(114U);
    msg.setDestination(43192U);
    msg.setDestinationEntity(253U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2947043068U;
    tmp_msg_0.start_lat = 0.51655736857;
    tmp_msg_0.start_lon = 0.160524578838;
    tmp_msg_0.start_z = 0.855855119131;
    tmp_msg_0.start_z_units = 230U;
    tmp_msg_0.end_lat = 0.684612340136;
    tmp_msg_0.end_lon = 0.675945818859;
    tmp_msg_0.end_z = 0.0543134938556;
    tmp_msg_0.end_z_units = 18U;
    tmp_msg_0.speed = 0.147871225534;
    tmp_msg_0.speed_units = 223U;
    tmp_msg_0.lradius = 0.0671993529932;
    tmp_msg_0.flags = 30U;
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
    msg.setTimeStamp(0.854838490129);
    msg.setSource(42288U);
    msg.setSourceEntity(246U);
    msg.setDestination(25115U);
    msg.setDestinationEntity(44U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1611561713U;
    tmp_msg_0.start_lat = 0.101139740537;
    tmp_msg_0.start_lon = 0.614069496932;
    tmp_msg_0.start_z = 0.98323635046;
    tmp_msg_0.start_z_units = 9U;
    tmp_msg_0.end_lat = 0.314129274475;
    tmp_msg_0.end_lon = 0.103500864671;
    tmp_msg_0.end_z = 0.803947948674;
    tmp_msg_0.end_z_units = 217U;
    tmp_msg_0.speed = 0.846124376358;
    tmp_msg_0.speed_units = 114U;
    tmp_msg_0.lradius = 0.514738626078;
    tmp_msg_0.flags = 253U;
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
    msg.setTimeStamp(0.609308808125);
    msg.setSource(50911U);
    msg.setSourceEntity(231U);
    msg.setDestination(17857U);
    msg.setDestinationEntity(16U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 217133738U;
    tmp_msg_0.start_lat = 0.487480568153;
    tmp_msg_0.start_lon = 0.0988885287948;
    tmp_msg_0.start_z = 0.330046341108;
    tmp_msg_0.start_z_units = 137U;
    tmp_msg_0.end_lat = 0.0891661562451;
    tmp_msg_0.end_lon = 0.586357299834;
    tmp_msg_0.end_z = 0.796447350816;
    tmp_msg_0.end_z_units = 175U;
    tmp_msg_0.speed = 0.404069079142;
    tmp_msg_0.speed_units = 216U;
    tmp_msg_0.lradius = 0.746902023257;
    tmp_msg_0.flags = 197U;
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
    msg.setTimeStamp(0.384814634273);
    msg.setSource(29348U);
    msg.setSourceEntity(101U);
    msg.setDestination(7861U);
    msg.setDestinationEntity(47U);
    msg.timeout = 46915U;
    msg.lat = 0.124588072783;
    msg.lon = 0.415341230614;
    msg.z = 0.335429387774;
    msg.z_units = 94U;
    msg.speed = 0.775396625204;
    msg.speed_units = 77U;
    msg.roll = 0.458732258207;
    msg.pitch = 0.461637229988;
    msg.yaw = 0.223496437899;
    msg.custom.assign("MDINBASXYXQJTNVGKLEJDEZHZWJODVL");

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
    msg.setTimeStamp(0.0468496595146);
    msg.setSource(13958U);
    msg.setSourceEntity(33U);
    msg.setDestination(32566U);
    msg.setDestinationEntity(33U);
    msg.timeout = 18985U;
    msg.lat = 0.494793545072;
    msg.lon = 0.741120602405;
    msg.z = 0.883563007607;
    msg.z_units = 80U;
    msg.speed = 0.047446714085;
    msg.speed_units = 113U;
    msg.roll = 0.654781972238;
    msg.pitch = 0.598913789955;
    msg.yaw = 0.405941078258;
    msg.custom.assign("RBQTSKGOJVYBBXPFCCUACOTDBAXZWUWTQTYKPKGGKFEWUUSHAGAWMIDRJ");

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
    msg.setTimeStamp(0.316898767234);
    msg.setSource(16376U);
    msg.setSourceEntity(170U);
    msg.setDestination(18304U);
    msg.setDestinationEntity(153U);
    msg.timeout = 54283U;
    msg.lat = 0.612819976464;
    msg.lon = 0.0437050542929;
    msg.z = 0.890687939664;
    msg.z_units = 181U;
    msg.speed = 0.548260726461;
    msg.speed_units = 118U;
    msg.roll = 0.197095108468;
    msg.pitch = 0.173747323332;
    msg.yaw = 0.455878784304;
    msg.custom.assign("IUIKRXZALSPXROPSNHKNIKZNTPSCODQTDYBABYMLAIOTPJWKZRGDXMNUDISCWMGFAECVXRPDAAHVOHHJHMEMNGCKDUVXBEFUGXQHRMKVWRTYNCFOWYLZNYDUYWUTFWQXQLRSIGPQUVWWTRGGAJ");

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
    msg.setTimeStamp(0.807679527912);
    msg.setSource(51109U);
    msg.setSourceEntity(51U);
    msg.setDestination(27090U);
    msg.setDestinationEntity(27U);
    msg.timeout = 35381U;
    msg.lat = 0.876848923684;
    msg.lon = 0.87564726224;
    msg.z = 0.81066056825;
    msg.z_units = 172U;
    msg.speed = 0.725219067181;
    msg.speed_units = 117U;
    msg.duration = 50561U;
    msg.radius = 0.51947546414;
    msg.flags = 161U;
    msg.custom.assign("QFQETITEGOJNHRZKKDSDLGAOIOVKGPXYXTZKHYBZNNWBDRAKLMESWWOCRCTCINUWOJWMBCHVTYRECFOPWNMONIVGFVCVADNZACRBFKQXYBUZZPUGUDJEOSXPMESYXFFWBQPVGHAGAYRLZUDQLIZWERYBKWSFUXYJIITCGOKSQJTFZLPXAVKEQKPFLJJSMYULBUNEWTJMXDFPTMSXX");

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
    msg.setTimeStamp(0.671894289212);
    msg.setSource(55312U);
    msg.setSourceEntity(254U);
    msg.setDestination(14211U);
    msg.setDestinationEntity(239U);
    msg.timeout = 11773U;
    msg.lat = 0.035448096134;
    msg.lon = 0.812309134281;
    msg.z = 0.0378691547121;
    msg.z_units = 244U;
    msg.speed = 0.580448923406;
    msg.speed_units = 45U;
    msg.duration = 60449U;
    msg.radius = 0.00562665005914;
    msg.flags = 234U;
    msg.custom.assign("TTHMTJMKCDWPRMBRLXCZDENTBWQVCSQKNJPLZGENFXXHHJCCSERJYEXZOJDMIOXJQYWTHOADWTGQQAFWWINQZLHVJCMHWORRGFEULGP");

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
    msg.setTimeStamp(0.154233332075);
    msg.setSource(7145U);
    msg.setSourceEntity(57U);
    msg.setDestination(9619U);
    msg.setDestinationEntity(224U);
    msg.timeout = 6367U;
    msg.lat = 0.230785898885;
    msg.lon = 0.138122694467;
    msg.z = 0.0580194728488;
    msg.z_units = 248U;
    msg.speed = 0.70710711201;
    msg.speed_units = 172U;
    msg.duration = 64154U;
    msg.radius = 0.101360640566;
    msg.flags = 126U;
    msg.custom.assign("SIPQSIFITVJJJQKZTWFTIGXUUMUDHOJOMOZDECDPNAFFEQSVWECCEYWELTXLPACSRLAPFBMMIZVQKPSJPLFTNUWHLZKBDZXDYQYDNAENYUMXHXHBLWKTVROZOXTHLKUPBYSFJJZBNHAXGVOVTVHOWESIYBCJJFYREICXDICGCMLNCLGHAOKZAGEXJMTLNDYSRASRGQVBWMUBVKWZPK");

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
    msg.setTimeStamp(0.0377266803683);
    msg.setSource(32641U);
    msg.setSourceEntity(27U);
    msg.setDestination(46775U);
    msg.setDestinationEntity(172U);
    msg.custom.assign("SNOVZNVUDDMGDPLLJXEHDHBXECXPPGRKGTAFFLDGSNWSOBMIGBAIROQQZEJWKJZZSRKAVUTIQIFYYWEYRTGAIYBXQSUDJAUWKPQHRWBJJKUMNUIFXZJFVLCLXOMVIDJRLGXUPNAEBGTDCDMKKNUARYQNZMFHZCFGDCAFBXRMSUPLSMPYVFC");

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
    msg.setTimeStamp(0.305835222589);
    msg.setSource(64845U);
    msg.setSourceEntity(189U);
    msg.setDestination(45462U);
    msg.setDestinationEntity(25U);
    msg.custom.assign("UHXOKUAZQXSQCAGRPDARXIFYSHGYHLXZQLCEOLVOMBZGOVNKTUKEAOMSSEO");

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
    msg.setTimeStamp(0.15956718147);
    msg.setSource(7025U);
    msg.setSourceEntity(65U);
    msg.setDestination(7879U);
    msg.setDestinationEntity(174U);
    msg.custom.assign("QFDIWYOPXYSUKKNNFUGYVINLCRJJNDOJLFXYJXINEQHIVFPWSZEKMNLGJWAFUBVOIOOHQAYMTBBLPUKUVPHWDBWXNZMO");

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
    msg.setTimeStamp(0.0486365878401);
    msg.setSource(7573U);
    msg.setSourceEntity(108U);
    msg.setDestination(20118U);
    msg.setDestinationEntity(246U);
    msg.timeout = 59095U;
    msg.lat = 0.4625724399;
    msg.lon = 0.272266545286;
    msg.z = 0.957645255916;
    msg.z_units = 107U;
    msg.duration = 15249U;
    msg.speed = 0.850032744145;
    msg.speed_units = 100U;
    msg.type = 163U;
    msg.radius = 0.501845938118;
    msg.length = 0.698672637444;
    msg.bearing = 0.916721299694;
    msg.direction = 73U;
    msg.custom.assign("AMTQNEOPFWTODLEWFLCTOKYTGASHSPSQIKBMZRXZEOOSHXECAYEQLJZGWXNAJIJIVDQNXIJGMJWHEIODYCPHUXIJBUTZJJRBCFPUZXZIFLHMCXSPRNDQPEGUAMORIYWKVSLVGDHUHVDTEYKFUTFWTDZMDYLZICGOVCLABTQRFQYMNJFAYARPQVGVUBVPRRKZZHWKNIKHUNPUMYQFHVPAVNBYSWASMMWRRSWKGEQLGXBBBO");

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
    msg.setTimeStamp(0.823865977015);
    msg.setSource(46602U);
    msg.setSourceEntity(108U);
    msg.setDestination(34562U);
    msg.setDestinationEntity(34U);
    msg.timeout = 30258U;
    msg.lat = 0.217685803689;
    msg.lon = 0.0781349223583;
    msg.z = 0.0273122206569;
    msg.z_units = 3U;
    msg.duration = 43781U;
    msg.speed = 0.264165677334;
    msg.speed_units = 51U;
    msg.type = 59U;
    msg.radius = 0.525961992681;
    msg.length = 0.438162749068;
    msg.bearing = 0.996737162816;
    msg.direction = 162U;
    msg.custom.assign("BLJYVSPIMOULPTGWGURTIYGKNFKIPKGZVNTFMLWRCBOAAYXGFUFVTDXHQVFNYOBKLHHYSOQTXDEDNCHEAKMJBAXIAMUUNVCQMZQMBRBACCWMTLPCSOVVRWJYR");

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
    msg.setTimeStamp(0.680701693743);
    msg.setSource(53097U);
    msg.setSourceEntity(132U);
    msg.setDestination(52678U);
    msg.setDestinationEntity(35U);
    msg.timeout = 12570U;
    msg.lat = 0.507981617889;
    msg.lon = 0.638923208304;
    msg.z = 0.83008382586;
    msg.z_units = 152U;
    msg.duration = 50850U;
    msg.speed = 0.171418550892;
    msg.speed_units = 122U;
    msg.type = 28U;
    msg.radius = 0.741705645436;
    msg.length = 0.852287662919;
    msg.bearing = 0.764108867973;
    msg.direction = 165U;
    msg.custom.assign("FRCHPXSFBHPJPYUJYQWKWRFPXPUUISYXBJYENIACUGOAEPADTMJEJISLKRRYWPRGQZAVJYAD");

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
    msg.setTimeStamp(0.313816197046);
    msg.setSource(30847U);
    msg.setSourceEntity(205U);
    msg.setDestination(48325U);
    msg.setDestinationEntity(66U);
    msg.duration = 4361U;
    msg.custom.assign("AIHNEBOVPSFEHOZEQTRRBTJSVHIGVTXXLWGBPRCEMSGZKNCNHKFPIXWXIQUCBFUOKSPOFVXTEHDMAENAXHAACQPRZLRDNKHBZRLMMSQFELGTOSNSWYWEDIPGPBZUQIHQWMUNGFRRVTLMRAYUBLVDMCKUYUPPQFQOUAICZRZDZABGCYXDUDYKDJEKTIXKCUESIJTNQYJMJHGSJXAWQJMOWYXYMVGVVKWCLOJALFZPBYHLDZNK");

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
    msg.setTimeStamp(0.718219764726);
    msg.setSource(56201U);
    msg.setSourceEntity(183U);
    msg.setDestination(62645U);
    msg.setDestinationEntity(168U);
    msg.duration = 3612U;
    msg.custom.assign("QEETUCMTDXJOTOBWORCTEIFVVSZVOILLQRCGPLTFUDFDCSDHWMENUBIWPZEMCYUDMSAHYQAYJGHNZVKMGIFLPLZJOPXSHBSKVIANGFSJCZUYFRRDWZRJMYRPGKKLRHTLWYEVDMFBSPZKJHXATRFAVDEEOUHVGQWSLOJXGEWPJXFMQQZPCWNRZ");

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
    msg.setTimeStamp(0.127181976426);
    msg.setSource(22859U);
    msg.setSourceEntity(246U);
    msg.setDestination(19171U);
    msg.setDestinationEntity(109U);
    msg.duration = 18024U;
    msg.custom.assign("WLYHXBADICSBQBCYFQEEVVMDIKTNKRPZNUCYOBVPPLYLSNZXVNQTOAOJGVO");

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
    msg.setTimeStamp(0.0617789001082);
    msg.setSource(57591U);
    msg.setSourceEntity(76U);
    msg.setDestination(62479U);
    msg.setDestinationEntity(22U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.0304845581681;
    tmp_msg_0.z_units = 131U;
    msg.control.set(tmp_msg_0);
    msg.duration = 42319U;
    msg.custom.assign("WUXWKAPDUKKIRWYAVSIUHCHVSQTKADVZXEXGOOOSVMLHSYXNPJDJHCPNBKDFYNPEURWMSZXCBFXVBHSBLANDCWWGPCOLTGYZNZKBREQDOZPXYXLIPTUZEUWTAEFZRNTTVACSKVGEJTQAIGBYFUPITAGCGWRDLMRLNJTQFMJYUWHFQOCRDOZSCTZUFKGGBUNLQFJZKEQVJMMJDRBWALLIHMSQLNKIGIOBHAMHEDVQEPOFFXYJIEYHNOBVRIY");

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
    msg.setTimeStamp(0.274044397646);
    msg.setSource(21115U);
    msg.setSourceEntity(118U);
    msg.setDestination(10390U);
    msg.setDestinationEntity(104U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.900976700549;
    tmp_msg_0.z_units = 145U;
    msg.control.set(tmp_msg_0);
    msg.duration = 17470U;
    msg.custom.assign("DBSNGFKOANKIBZTBRNGQEJIYBMWWSTZSBNCKFOWUCYMEOUAZOPGSUTEYHQICJENUTZNQWGKUPXWZIQHQPHXXQGPJJBFNLLXALSVRVYECFDAGFCPICBKJNXMYTHTKFVLPVHAGOHEXSFTLVYYAXKODIJECANGRFPUOADVUYKLCRBRVWOMSIZUVHDJSRFXTWMEXRKOHUQURDGLABWDWHATDOYDXVPZMZQZPLIVDQFQMKTHIYECIJSMLPJW");

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
    msg.setTimeStamp(0.982685922209);
    msg.setSource(65286U);
    msg.setSourceEntity(78U);
    msg.setDestination(25410U);
    msg.setDestinationEntity(59U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.440594822954;
    msg.control.set(tmp_msg_0);
    msg.duration = 52587U;
    msg.custom.assign("TAJMDFAEFLUJLLONMPIUIEXDBMZMADAWTEDPQNVBSXZUPSAGXOFRBHDHVCMQNBWOJSYSKPGQYUZZQLTXJKCQMMOTHPJGIEPUTVBAU");

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
    msg.setTimeStamp(0.997164540252);
    msg.setSource(15409U);
    msg.setSourceEntity(157U);
    msg.setDestination(53025U);
    msg.setDestinationEntity(149U);
    msg.timeout = 8798U;
    msg.lat = 0.660177052932;
    msg.lon = 0.732149441559;
    msg.z = 0.263785338568;
    msg.z_units = 64U;
    msg.speed = 0.47558491004;
    msg.speed_units = 59U;
    msg.bearing = 0.432765769315;
    msg.cross_angle = 0.975759303665;
    msg.width = 0.930414013772;
    msg.length = 0.0337408887558;
    msg.hstep = 0.350172430779;
    msg.coff = 35U;
    msg.alternation = 254U;
    msg.flags = 191U;
    msg.custom.assign("SQGJCGLEARFUFJVNOVZPLTBEUIHPOKFZKDWCXPHBBNGYPIIPHOAYIKCYEVMFSWZMUSRGDJLHJUAJKFKDUQJNQAOXEGNVNNMPCRUARXVXTWTGLKVZAUPLLTBWZNUXOORXZZQIZAWMYDSCSSDGYFTOMCQUIVCMDWIWNPBQBNHFQAJKBYLEHEYHSNHMOFRRBRUHMXZMGJETBCTCMIKLGSTGYVAHRLLSXQTVSBWDQYIFWPZIOFDTXDXKCJPE");

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
    msg.setTimeStamp(0.73425835781);
    msg.setSource(17049U);
    msg.setSourceEntity(54U);
    msg.setDestination(1421U);
    msg.setDestinationEntity(169U);
    msg.timeout = 23586U;
    msg.lat = 0.288165710491;
    msg.lon = 0.55492332565;
    msg.z = 0.146117392438;
    msg.z_units = 235U;
    msg.speed = 0.880373277776;
    msg.speed_units = 182U;
    msg.bearing = 0.852302477892;
    msg.cross_angle = 0.628766293024;
    msg.width = 0.540672414619;
    msg.length = 0.525654623542;
    msg.hstep = 0.593788981053;
    msg.coff = 16U;
    msg.alternation = 137U;
    msg.flags = 80U;
    msg.custom.assign("EDUVXECHQFJIZLZMEMERGLDTKDPDYMGRRGIBUQHAHZHJKFIJQHOFCOTLFPRKBJTUPLBWDZAWYWYJTADQVFOSSNVFHIZSCTTMOXHPPKAKOTCJOGSNCXANSFRIYYNKMACBGEDQYZLYWPFSCAQUNNXUCJGWHMX");

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
    msg.setTimeStamp(0.29985084455);
    msg.setSource(60826U);
    msg.setSourceEntity(53U);
    msg.setDestination(62038U);
    msg.setDestinationEntity(13U);
    msg.timeout = 51857U;
    msg.lat = 0.849166337506;
    msg.lon = 0.0187285596974;
    msg.z = 0.0847894383758;
    msg.z_units = 51U;
    msg.speed = 0.638687030395;
    msg.speed_units = 50U;
    msg.bearing = 0.662433519854;
    msg.cross_angle = 0.857351066572;
    msg.width = 0.801490228381;
    msg.length = 0.0172664329886;
    msg.hstep = 0.179382085808;
    msg.coff = 32U;
    msg.alternation = 121U;
    msg.flags = 188U;
    msg.custom.assign("IVXRSCDXCKGPYMHCYPYGQHWBDUZAUXBHXGLBBBGQDVIPLHKTECQTQMOPFMGHAQIUUXHPRPJSFLKNOFBEWEJMBRDINYWLSKZMZWRWXCNMPAYKAGJVNIVTGGECHNV");

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
    msg.setTimeStamp(0.099864800384);
    msg.setSource(40247U);
    msg.setSourceEntity(48U);
    msg.setDestination(44316U);
    msg.setDestinationEntity(162U);
    msg.timeout = 7057U;
    msg.lat = 0.902561709628;
    msg.lon = 0.313194964605;
    msg.z = 0.876815235256;
    msg.z_units = 175U;
    msg.speed = 0.855762501954;
    msg.speed_units = 70U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.276281805987;
    tmp_msg_0.y = 0.509819085622;
    tmp_msg_0.z = 0.954232026246;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OBUQLCZTEUFFJBZDWSDSAHWISRUDGQIELRXHHEBXILAZGDQYBNHH");

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
    msg.setTimeStamp(0.66838726213);
    msg.setSource(53384U);
    msg.setSourceEntity(57U);
    msg.setDestination(43805U);
    msg.setDestinationEntity(176U);
    msg.timeout = 44978U;
    msg.lat = 0.488025017445;
    msg.lon = 0.0489378153757;
    msg.z = 0.346938023688;
    msg.z_units = 204U;
    msg.speed = 0.999671525295;
    msg.speed_units = 249U;
    msg.custom.assign("UVPYHAQLFNQQOBFFOHJVNXTSCZYBTUSGSPRWYDWD");

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
    msg.setTimeStamp(0.741226845777);
    msg.setSource(61464U);
    msg.setSourceEntity(35U);
    msg.setDestination(39038U);
    msg.setDestinationEntity(50U);
    msg.timeout = 50340U;
    msg.lat = 0.394314663596;
    msg.lon = 0.746195595462;
    msg.z = 0.690066860985;
    msg.z_units = 148U;
    msg.speed = 0.779026009995;
    msg.speed_units = 237U;
    msg.custom.assign("XCWFUTBDDWAUWWBVXRTGSLJTNOPLSBTYYMQFCQOBDKWSMJOLIVQOFBANRYIXBNIFGLPVNAQHKTIRWCHJGPJKPYRSNMIFGCEAMJFHZJIYZYELUXOUIXFXIMLTTNROEPOHEDCRFTHZCPCQUVKUHBVMZCDVVPNYNZOWWHKMOLNEECRPZWDUYQSTGNQZKVERBSSMUYRSAQPLJAHFIA");

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
    msg.setTimeStamp(0.315405100976);
    msg.setSource(10936U);
    msg.setSourceEntity(251U);
    msg.setDestination(29616U);
    msg.setDestinationEntity(2U);
    msg.x = 0.794675408425;
    msg.y = 0.269756592932;
    msg.z = 0.160989637047;

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
    msg.setTimeStamp(0.706744541949);
    msg.setSource(29950U);
    msg.setSourceEntity(161U);
    msg.setDestination(64360U);
    msg.setDestinationEntity(142U);
    msg.x = 0.669039484084;
    msg.y = 0.157268841449;
    msg.z = 0.383713994297;

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
    msg.setTimeStamp(0.695510882963);
    msg.setSource(4332U);
    msg.setSourceEntity(165U);
    msg.setDestination(36020U);
    msg.setDestinationEntity(212U);
    msg.x = 0.76981763622;
    msg.y = 0.138652240939;
    msg.z = 0.0635705329021;

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
    msg.setTimeStamp(0.905299221022);
    msg.setSource(65062U);
    msg.setSourceEntity(87U);
    msg.setDestination(33543U);
    msg.setDestinationEntity(50U);
    msg.timeout = 37814U;
    msg.lat = 0.640867432073;
    msg.lon = 0.622850939452;
    msg.z = 0.554651958135;
    msg.z_units = 226U;
    msg.amplitude = 0.771918565987;
    msg.pitch = 0.169593964683;
    msg.speed = 0.915695082637;
    msg.speed_units = 212U;
    msg.custom.assign("ISVMQMCYLRUDSLJFGFHPASPXKUDBXREKWPBHUUSIGAAJSMIDGPFHGUWONLEBCYKAYTIVLNEABJZIWLVFWBJVCUSKOIVUBHTOXMYYJZQNZNJMLGBSQGBKQOPTPOVHETRDGOWOUZHEUNZJKXPYZEZGTWTDCKYOTCWLYMXIVCFNRHZEAFCOXMRQLHIWWNSQQXVKRFABQDDTFNJQMIDNJPRLURAZHXBRWEOPDFLPQCXMF");

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
    msg.setTimeStamp(0.488511726395);
    msg.setSource(30619U);
    msg.setSourceEntity(197U);
    msg.setDestination(14069U);
    msg.setDestinationEntity(220U);
    msg.timeout = 52381U;
    msg.lat = 0.740309758202;
    msg.lon = 0.976895574721;
    msg.z = 0.430846956527;
    msg.z_units = 228U;
    msg.amplitude = 0.388640116896;
    msg.pitch = 0.364023859294;
    msg.speed = 0.498800461733;
    msg.speed_units = 193U;
    msg.custom.assign("SLQLAPIKVTFGQKDERICGOBKTFAZHPCBUXKGRFAAHQK");

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
    msg.setTimeStamp(0.458200524486);
    msg.setSource(54947U);
    msg.setSourceEntity(89U);
    msg.setDestination(27936U);
    msg.setDestinationEntity(140U);
    msg.timeout = 47995U;
    msg.lat = 0.780189507884;
    msg.lon = 0.476352180255;
    msg.z = 0.626032445391;
    msg.z_units = 29U;
    msg.amplitude = 0.951517400722;
    msg.pitch = 0.399369897782;
    msg.speed = 0.312696720629;
    msg.speed_units = 206U;
    msg.custom.assign("RHKSBKHPMBNSOIRIVCINDGHRFBMKETHXYGGRNNRIUACPZSRQHCEXWFCWEGWKJLSFJMTSENGLOXQZLWDYTDFCJOFUWFFAKFRWISVMTEQZYTOOJJNWPQLREKVFEEUXDTOYUYSBUYAXBHCRQPTVZUJALAPGGBOZBNEWVVNBUMWXNLRMJMP");

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
    msg.setTimeStamp(0.368549798296);
    msg.setSource(7570U);
    msg.setSourceEntity(48U);
    msg.setDestination(48035U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.977445106524);
    msg.setSource(55165U);
    msg.setSourceEntity(36U);
    msg.setDestination(9422U);
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
    msg.setTimeStamp(0.386924351836);
    msg.setSource(41015U);
    msg.setSourceEntity(246U);
    msg.setDestination(57190U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.155345342787);
    msg.setSource(9375U);
    msg.setSourceEntity(231U);
    msg.setDestination(17878U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.684451199168;
    msg.lon = 0.885371118385;
    msg.z = 0.43262329113;
    msg.z_units = 178U;
    msg.radius = 0.439789856485;
    msg.duration = 37948U;
    msg.speed = 0.702750070044;
    msg.speed_units = 205U;
    msg.popup_period = 26280U;
    msg.popup_duration = 51484U;
    msg.flags = 79U;
    msg.custom.assign("SUDVQJXRPNGBOFGBYFJOCV");

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
    msg.setTimeStamp(0.472686966744);
    msg.setSource(30736U);
    msg.setSourceEntity(191U);
    msg.setDestination(48414U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.39098340956;
    msg.lon = 0.291432028683;
    msg.z = 0.993181608744;
    msg.z_units = 139U;
    msg.radius = 0.596441967323;
    msg.duration = 28080U;
    msg.speed = 0.913779787944;
    msg.speed_units = 171U;
    msg.popup_period = 61403U;
    msg.popup_duration = 63724U;
    msg.flags = 52U;
    msg.custom.assign("NPCBWPJWSLVXIISGPNHPNHFDSDOKBMWPGEPQWESGVWZAPGYUAGQXXJYCQLLMUFEFHVFOCOJDPEHEAVLUOKMHMEZTHFSUDBWEVQRLQDYBPAGLYCHOCSLNVDZINRUMKKSCXQTCANJOAJFAAYMTCMTBEJFOXZZOJYVCIWVBTMEPRSOXYUWKGZQZNMIDGFQCSDSNTBUHRLUKRLBHQ");

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
    msg.setTimeStamp(0.317230706699);
    msg.setSource(20739U);
    msg.setSourceEntity(1U);
    msg.setDestination(24979U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.721069829446;
    msg.lon = 0.693423166213;
    msg.z = 0.575403612804;
    msg.z_units = 240U;
    msg.radius = 0.0918812015479;
    msg.duration = 36439U;
    msg.speed = 0.169073321279;
    msg.speed_units = 19U;
    msg.popup_period = 39021U;
    msg.popup_duration = 36639U;
    msg.flags = 71U;
    msg.custom.assign("NIKGBVYSJSFKBXNCZXQBLTBMXAPIRNITKJDFIVUDVLKLWPRPEPQQEYILRJBWZTMRVCLYZOLBZUEMACJFTTRNYLAMGOXYGTKEVSMPHOSSZUZWWQQDTWPBSGIJGVAGNEVUIMGBTHORAFOLMCKSDIXICEJZEHNKAHJPXBUYIFUJCNKCBUZDYDFRWQATHNSZHWHYHFMFHKXXEZOJLGOGLAPGD");

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
    msg.setTimeStamp(0.831735773511);
    msg.setSource(33304U);
    msg.setSourceEntity(128U);
    msg.setDestination(30998U);
    msg.setDestinationEntity(181U);
    msg.timeout = 19071U;
    msg.flags = 102U;
    msg.lat = 0.994249208627;
    msg.lon = 0.936759306319;
    msg.start_z = 0.640797550415;
    msg.start_z_units = 219U;
    msg.end_z = 0.605763856443;
    msg.end_z_units = 153U;
    msg.radius = 0.18897501179;
    msg.speed = 0.229609176222;
    msg.speed_units = 232U;
    msg.custom.assign("VKOQDAPSSOENKMSQQMECBTZAACITGTHXAGSDVOMMJKFGYUGHJPHUXDFNNDLSWXNSBLHJUBEPWZZBDROIEMVBMTFRXKZCQXEZGNHZQTCASJPLFVLJRUQTHVFQUYBEIOHIBAVFWPWOOIMRLZGSDPNQNXRGVLTENDKCXXZDBWKIKUEYYVTWKOPFKWGDUYJYCDYVMUWI");

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
    msg.setTimeStamp(0.401958863938);
    msg.setSource(26286U);
    msg.setSourceEntity(156U);
    msg.setDestination(38576U);
    msg.setDestinationEntity(157U);
    msg.timeout = 50426U;
    msg.flags = 234U;
    msg.lat = 0.0493900062296;
    msg.lon = 0.926075563967;
    msg.start_z = 0.726477300227;
    msg.start_z_units = 133U;
    msg.end_z = 0.757586000397;
    msg.end_z_units = 197U;
    msg.radius = 0.398830051918;
    msg.speed = 0.482061463262;
    msg.speed_units = 106U;
    msg.custom.assign("NMSKHROJRFREEMCHZIYYLSFZABVGUTKGDUOPLJYAYJFQITO");

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
    msg.setTimeStamp(0.396303859547);
    msg.setSource(16935U);
    msg.setSourceEntity(182U);
    msg.setDestination(59708U);
    msg.setDestinationEntity(38U);
    msg.timeout = 6567U;
    msg.flags = 18U;
    msg.lat = 0.233119333296;
    msg.lon = 0.705390042176;
    msg.start_z = 0.322330257192;
    msg.start_z_units = 107U;
    msg.end_z = 0.878544903552;
    msg.end_z_units = 100U;
    msg.radius = 0.428314921577;
    msg.speed = 0.581895460217;
    msg.speed_units = 192U;
    msg.custom.assign("NTNDVYKFGNDTBGHUFLLQGTYYICRZLPDNVKCWIEAMMEVRBEWJJJPUTIWRQPFXBWCAIASLHIXZJZESSDSGPWYGNAMRPVSLOXIEVSHACNDDSJVKUMJJEHKAOFGJEOMYM");

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
    msg.setTimeStamp(0.302746667245);
    msg.setSource(13140U);
    msg.setSourceEntity(238U);
    msg.setDestination(13620U);
    msg.setDestinationEntity(170U);
    msg.timeout = 38764U;
    msg.lat = 0.805901515197;
    msg.lon = 0.956412194522;
    msg.z = 0.0290400801166;
    msg.z_units = 156U;
    msg.speed = 0.306250816923;
    msg.speed_units = 7U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0796653687011;
    tmp_msg_0.y = 0.804237225149;
    tmp_msg_0.z = 0.715607884002;
    tmp_msg_0.t = 0.886530028304;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GHKURZBVSNFKMGKQ");

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
    msg.setTimeStamp(0.369269042696);
    msg.setSource(51320U);
    msg.setSourceEntity(87U);
    msg.setDestination(22767U);
    msg.setDestinationEntity(153U);
    msg.timeout = 34420U;
    msg.lat = 0.688927236868;
    msg.lon = 0.438101754365;
    msg.z = 0.391153760168;
    msg.z_units = 208U;
    msg.speed = 0.676936195266;
    msg.speed_units = 52U;
    msg.custom.assign("IYAOKTPQNAWJYHIJEINRNQOGDKPJOPYRDXWMVYBUCWSPMEAMFOFPAADBBNMSRZLTXNRNERDMNUYBFJBULPNGYWVAQEWDXIFOIGYVYAWCDZIQDFALNTJSSB");

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
    msg.setTimeStamp(0.524156126625);
    msg.setSource(23402U);
    msg.setSourceEntity(38U);
    msg.setDestination(42865U);
    msg.setDestinationEntity(217U);
    msg.timeout = 63415U;
    msg.lat = 0.743099158009;
    msg.lon = 0.459028883676;
    msg.z = 0.434478309693;
    msg.z_units = 111U;
    msg.speed = 0.838096307141;
    msg.speed_units = 116U;
    msg.custom.assign("AUJHXLDXIVXKIISZIQGSRXPRZRBXNGONIXFEJSRTKIPAHPJBMWDNPLZSUDKTERCZNECUWXRSQYECNBVUVESFPSNUWLTJSPKFOIFWOCJEKBLDYEHPIAZVOUGWWFHKFHITBYCWMEPQUGLQMMVYVMQOCMYDJMNJHJULKQACDFAWTBDUYAOYDWJZQTEKMEVRTMCARWYNHHDPVOYLIOGXAMOGUTYDGTTAZNZPBHKFJHF");

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
    msg.setTimeStamp(0.827141538566);
    msg.setSource(5848U);
    msg.setSourceEntity(157U);
    msg.setDestination(64395U);
    msg.setDestinationEntity(95U);
    msg.x = 0.0428458073539;
    msg.y = 0.137933613443;
    msg.z = 0.21569736355;
    msg.t = 0.787023238788;

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
    msg.setTimeStamp(0.206162015875);
    msg.setSource(62266U);
    msg.setSourceEntity(170U);
    msg.setDestination(15993U);
    msg.setDestinationEntity(22U);
    msg.x = 0.304508089307;
    msg.y = 0.776902301489;
    msg.z = 0.17155915301;
    msg.t = 0.222754960497;

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
    msg.setTimeStamp(0.115343049389);
    msg.setSource(47447U);
    msg.setSourceEntity(160U);
    msg.setDestination(48526U);
    msg.setDestinationEntity(196U);
    msg.x = 0.405498048682;
    msg.y = 0.79921365728;
    msg.z = 0.765823848061;
    msg.t = 0.489371361134;

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
    msg.setTimeStamp(0.754163910642);
    msg.setSource(3351U);
    msg.setSourceEntity(39U);
    msg.setDestination(44688U);
    msg.setDestinationEntity(51U);
    msg.timeout = 14626U;
    msg.name.assign("LVPOUHKJJPFEFWSSWYITPVBLHJBZSNXRKCBWQMBLMWSSRZONXHXATKGWZMGIHCTJQYNYZRZNLUCXEDXBCCEOLREGBKMRDQFWHYBPCTMQTUEZPRAMPIFWDGQERIONXHQZJDGTRMAXKSNETDVOQBTAKDUEJHIBJPFYDGNUNQKLSZFOUVKDXOMVOHVJGDMURVFYAMGLURAIFVXSJDAIGXPLFYPYNNZWIOQKWYCATBATZWFJGVSYOILSI");
    msg.custom.assign("YXDATPTRQQWZXJSBHMTNWGQQNNSGIEDXOAXBYNLYBWEMZCVBZZFQHBLLEHXGSQCXSVDZROFPFEOGDFWRJAJORMMHPGOVEICDSVB");

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
    msg.setTimeStamp(0.206935071869);
    msg.setSource(56848U);
    msg.setSourceEntity(50U);
    msg.setDestination(1018U);
    msg.setDestinationEntity(69U);
    msg.timeout = 46670U;
    msg.name.assign("WJSFADZFXIVQGBGHEUDUNIEZMUGEUNIQPKTHOUPALZOCLMMELRSZJROGECVQWDKARAURVCWIGYPCWNQSRTIPTCBSERAURULMLTGTCKJYQMOFHJTOCNXBNPJUSJOZZSMYAXIHIMRJSJBHIMSNQZXHXQRLVBMGYQLBNHWCTDWOBFKNIDTDZKXTPXHKGEEKVYDQVNLAFAFPWGMLZOEPPPVSKFATQFWZKWDBOIWYBVAKFVLFRBYHUDS");
    msg.custom.assign("NESOGGGJTWUQPHFRQDKFYPRWUVYAXOSPMHHKXPZCESTWZRBABOFIQYKOQQJOOBWFBSVUQTKPYDXMJGHVYGNIIHHZLQMTSUOEIECSUFSLVWGTQVAICBFDAXWKCLOEITNFZKJIFNCZVPUMZDHCKSJAYD");

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
    msg.setTimeStamp(0.949998759132);
    msg.setSource(5670U);
    msg.setSourceEntity(127U);
    msg.setDestination(55934U);
    msg.setDestinationEntity(110U);
    msg.timeout = 16486U;
    msg.name.assign("VEUSWVKGTPTUNSLUBHTXPYQBPFQWEMDBNAFNIWNDMXZZXRILEDQYEFFHGYBKAMEQXSMOYOYIUDWBJLUXSOTHNRFJFHLAGXOLNCRYUBRVMNACWXVDVHGLAVKQETKCJNHZOOPJJOIUMKVJUATQLZRQPCBNGPWBP");
    msg.custom.assign("XXHCLHSUBJPPDGJAVNUNIEZLCTXEETFGMCRHLBZHNKMGLZHQEYFKWZOIWGYIWVUGUZLMWRVVUXHANPCTSWYXTCXOFNDPOZFHAOTJOBTCLJHUNMSTHJBRJKDRETAKIFMERFRYQKGRBKKQKMQSWVGBYCESQPLJNCMGRXSZDNJSGOUWWAVXFEUPNXSQLIYFBRBPMKGBVFQIB");

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
    msg.setTimeStamp(0.764583702041);
    msg.setSource(2557U);
    msg.setSourceEntity(185U);
    msg.setDestination(60834U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.590098377211;
    msg.lon = 0.403406516486;
    msg.z = 0.307829566129;
    msg.z_units = 61U;
    msg.speed = 0.966370041264;
    msg.speed_units = 59U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.93343561001;
    tmp_msg_0.y = 0.649393700597;
    tmp_msg_0.z = 0.330030655962;
    tmp_msg_0.t = 0.134047817842;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 1310U;
    tmp_msg_1.off_x = 0.371632638223;
    tmp_msg_1.off_y = 0.878711612376;
    tmp_msg_1.off_z = 0.300673208075;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.625058294333;
    msg.custom.assign("HPIQTHHTXUNNXNVLWAOIGIXGTMIFLZOCB");

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
    msg.setTimeStamp(0.895466435954);
    msg.setSource(53600U);
    msg.setSourceEntity(134U);
    msg.setDestination(45718U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.0460659051326;
    msg.lon = 0.252042979299;
    msg.z = 0.244460581422;
    msg.z_units = 116U;
    msg.speed = 0.869775470046;
    msg.speed_units = 223U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 37927U;
    tmp_msg_0.off_x = 0.910219215946;
    tmp_msg_0.off_y = 0.866427749841;
    tmp_msg_0.off_z = 0.631822337942;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.464658933112;
    msg.custom.assign("ZDUASHNFOWQSSVABWAHREUOVEPIILFICMKRXKEXRYIGGZUTNBRRLMFEOBHBNNKWZAPGIJLEHQYOFKXHIYZQWUHAICDSMDMWCXXGBXLFPWBPYVCCTVDPNNSEPGKTVMSRCMGQZYTHYETDLALAFXTNGUGKKNSJFWYEHTFJUKY");

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
    msg.setTimeStamp(0.408693671475);
    msg.setSource(18409U);
    msg.setSourceEntity(0U);
    msg.setDestination(17779U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.730509685592;
    msg.lon = 0.829433859953;
    msg.z = 0.688472554344;
    msg.z_units = 23U;
    msg.speed = 0.0961475858153;
    msg.speed_units = 37U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 50033U;
    tmp_msg_0.off_x = 0.291239105529;
    tmp_msg_0.off_y = 0.0939312231296;
    tmp_msg_0.off_z = 0.253264591118;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.433313075615;
    msg.custom.assign("MHKYUGLHRPQNN");

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
    msg.setTimeStamp(0.207523070088);
    msg.setSource(56037U);
    msg.setSourceEntity(164U);
    msg.setDestination(49116U);
    msg.setDestinationEntity(107U);
    msg.vid = 47511U;
    msg.off_x = 0.101619886317;
    msg.off_y = 0.549381484195;
    msg.off_z = 0.771500139374;

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
    msg.setTimeStamp(0.964468948916);
    msg.setSource(65127U);
    msg.setSourceEntity(8U);
    msg.setDestination(60154U);
    msg.setDestinationEntity(93U);
    msg.vid = 4567U;
    msg.off_x = 0.755779603858;
    msg.off_y = 0.749191932647;
    msg.off_z = 0.600348372305;

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
    msg.setTimeStamp(0.220774525337);
    msg.setSource(55749U);
    msg.setSourceEntity(231U);
    msg.setDestination(32527U);
    msg.setDestinationEntity(170U);
    msg.vid = 32859U;
    msg.off_x = 0.573590723352;
    msg.off_y = 0.806888430033;
    msg.off_z = 0.734632579596;

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
    msg.setTimeStamp(0.576499592814);
    msg.setSource(50670U);
    msg.setSourceEntity(162U);
    msg.setDestination(49323U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.0485963451483);
    msg.setSource(36468U);
    msg.setSourceEntity(0U);
    msg.setDestination(2281U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.421502937811);
    msg.setSource(1535U);
    msg.setSourceEntity(175U);
    msg.setDestination(60293U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.551042546839);
    msg.setSource(10070U);
    msg.setSourceEntity(144U);
    msg.setDestination(43465U);
    msg.setDestinationEntity(24U);
    msg.mid = 2933U;

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
    msg.setTimeStamp(0.55827552701);
    msg.setSource(36694U);
    msg.setSourceEntity(132U);
    msg.setDestination(27583U);
    msg.setDestinationEntity(138U);
    msg.mid = 40877U;

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
    msg.setTimeStamp(0.668778013227);
    msg.setSource(59831U);
    msg.setSourceEntity(110U);
    msg.setDestination(35309U);
    msg.setDestinationEntity(207U);
    msg.mid = 810U;

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
    msg.setTimeStamp(0.580360015168);
    msg.setSource(56586U);
    msg.setSourceEntity(95U);
    msg.setDestination(12292U);
    msg.setDestinationEntity(31U);
    msg.state = 154U;
    msg.eta = 29678U;
    msg.info.assign("VOECUARWQIJUSOJUVSSGAGXNOK");

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
    msg.setTimeStamp(0.557368984326);
    msg.setSource(16168U);
    msg.setSourceEntity(155U);
    msg.setDestination(60869U);
    msg.setDestinationEntity(203U);
    msg.state = 119U;
    msg.eta = 18204U;
    msg.info.assign("LFZKJQHLDAIIWIUFUVKZISLLDMMUHKDCOJZGVKSWSWNLIEVENJBPXVPWMMFUDHDVFORMFJTSWMBZBENRJUDGGIXLNX");

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
    msg.setTimeStamp(0.583185464113);
    msg.setSource(4069U);
    msg.setSourceEntity(193U);
    msg.setDestination(56401U);
    msg.setDestinationEntity(230U);
    msg.state = 110U;
    msg.eta = 42555U;
    msg.info.assign("ENCVVJKJSKDDVXWIYJHLGEEMEFARPWCPCODHSBLNMQKXUMLMQWZOYQZSELJJHDQGUZXUFPIEVFYMAOWETGGJZLNLLAUQMOQZURIVAUAWIRMTSYBCRNLDBTVTZIRYOSLGJHFWHEHURKCRNQAYGQZPCSPOJBMIUYBVCOFUPFYFKPVWK");

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
    msg.setTimeStamp(0.403609167446);
    msg.setSource(20522U);
    msg.setSourceEntity(80U);
    msg.setDestination(18151U);
    msg.setDestinationEntity(141U);
    msg.system = 27645U;
    msg.duration = 26822U;
    msg.speed = 0.044625558361;
    msg.speed_units = 23U;
    msg.x = 0.42927500089;
    msg.y = 0.210215010937;
    msg.z = 0.315901713291;
    msg.z_units = 64U;

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
    msg.setTimeStamp(0.0819723979188);
    msg.setSource(43801U);
    msg.setSourceEntity(195U);
    msg.setDestination(16142U);
    msg.setDestinationEntity(136U);
    msg.system = 35795U;
    msg.duration = 48312U;
    msg.speed = 0.901604864922;
    msg.speed_units = 170U;
    msg.x = 0.365992628279;
    msg.y = 0.278042056511;
    msg.z = 0.951062419284;
    msg.z_units = 92U;

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
    msg.setTimeStamp(0.0362613007449);
    msg.setSource(48520U);
    msg.setSourceEntity(209U);
    msg.setDestination(17698U);
    msg.setDestinationEntity(150U);
    msg.system = 10291U;
    msg.duration = 18621U;
    msg.speed = 0.363436982774;
    msg.speed_units = 69U;
    msg.x = 0.561540235932;
    msg.y = 0.288087606093;
    msg.z = 0.387757023556;
    msg.z_units = 224U;

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
    msg.setTimeStamp(0.695799637132);
    msg.setSource(46925U);
    msg.setSourceEntity(191U);
    msg.setDestination(24291U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.836257954832;
    msg.lon = 0.42526779703;
    msg.speed = 0.580908547549;
    msg.speed_units = 45U;
    msg.duration = 17572U;
    msg.sys_a = 9885U;
    msg.sys_b = 24041U;
    msg.move_threshold = 0.890569630979;

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
    msg.setTimeStamp(0.820109444907);
    msg.setSource(62661U);
    msg.setSourceEntity(235U);
    msg.setDestination(32367U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.541281647994;
    msg.lon = 0.635763686384;
    msg.speed = 0.356706081479;
    msg.speed_units = 152U;
    msg.duration = 5341U;
    msg.sys_a = 61392U;
    msg.sys_b = 19638U;
    msg.move_threshold = 0.344493956081;

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
    msg.setTimeStamp(0.521880430045);
    msg.setSource(49252U);
    msg.setSourceEntity(25U);
    msg.setDestination(61362U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.405837442142;
    msg.lon = 0.259903628148;
    msg.speed = 0.0814950055987;
    msg.speed_units = 240U;
    msg.duration = 65023U;
    msg.sys_a = 11154U;
    msg.sys_b = 8911U;
    msg.move_threshold = 0.963343019729;

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
    msg.setTimeStamp(0.771579004807);
    msg.setSource(16586U);
    msg.setSourceEntity(77U);
    msg.setDestination(40048U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.552189433446;
    msg.lon = 0.988222342607;
    msg.z = 0.380165008787;
    msg.z_units = 198U;
    msg.speed = 0.943962668933;
    msg.speed_units = 46U;
    msg.custom.assign("WZLMAWLHXSSPDFOXSNMVKTOKFBYUPQGSWIWABJUNSUDQJQEJXGPJPEYANNYROKYYJDFCIKXLBDTQU");

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
    msg.setTimeStamp(0.831607083476);
    msg.setSource(45084U);
    msg.setSourceEntity(166U);
    msg.setDestination(2983U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.157677041734;
    msg.lon = 0.831039036251;
    msg.z = 0.34633195876;
    msg.z_units = 16U;
    msg.speed = 0.500417716723;
    msg.speed_units = 104U;
    msg.custom.assign("FVLDREXJWVHLRKAMACEQOBPVVTGPLWKPGZUQZXBYAGYMLSFKEOVWNXKCWJELDXOVLWAHIIYIFMTBPCOTWMNAKURPCONPAQXNYFIHZYINDCHSHKKBEWXHGCEUPBOA");

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
    msg.setTimeStamp(0.555877592191);
    msg.setSource(55361U);
    msg.setSourceEntity(249U);
    msg.setDestination(23282U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.52167242531;
    msg.lon = 0.974096842605;
    msg.z = 0.854158718753;
    msg.z_units = 86U;
    msg.speed = 0.752952549929;
    msg.speed_units = 180U;
    msg.custom.assign("FDBMCIYQMCNCLIYOAVFORHIYPDYBASJMJVYCKTDDNOBRLZQTNXGXRENHPWTJZDPKGAOZBNDHMGJMSFHEVAOMUDHFWBUWJUKFZILYSEATYDRYBZUHKEGUBWRVJBKLLSUMETMGKK");

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
    msg.setTimeStamp(0.249542925996);
    msg.setSource(41358U);
    msg.setSourceEntity(88U);
    msg.setDestination(63306U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.633796217034;
    msg.lon = 0.27147943686;

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
    msg.setTimeStamp(0.876203318473);
    msg.setSource(2249U);
    msg.setSourceEntity(52U);
    msg.setDestination(45733U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.919035512893;
    msg.lon = 0.225816680274;

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
    msg.setTimeStamp(0.902029524868);
    msg.setSource(15646U);
    msg.setSourceEntity(154U);
    msg.setDestination(59534U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.23898564478;
    msg.lon = 0.573580875775;

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
    msg.setTimeStamp(0.839713802249);
    msg.setSource(28893U);
    msg.setSourceEntity(214U);
    msg.setDestination(64620U);
    msg.setDestinationEntity(248U);
    msg.timeout = 41601U;
    msg.lat = 0.939921076557;
    msg.lon = 0.745931676817;
    msg.z = 0.121086302449;
    msg.z_units = 230U;
    msg.pitch = 0.0644941250434;
    msg.amplitude = 0.145096525725;
    msg.duration = 58671U;
    msg.speed = 0.273393234618;
    msg.speed_units = 165U;
    msg.radius = 0.470026101534;
    msg.direction = 182U;
    msg.custom.assign("FDDDQJNCQAQGBTZPNYGCYXCUESZPGAEWUNBASLOGWPDSKCBSIKWELZQEVUOTG");

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
    msg.setTimeStamp(0.412131267378);
    msg.setSource(59206U);
    msg.setSourceEntity(66U);
    msg.setDestination(59545U);
    msg.setDestinationEntity(12U);
    msg.timeout = 52888U;
    msg.lat = 0.197918341408;
    msg.lon = 0.36484415814;
    msg.z = 0.345833140676;
    msg.z_units = 5U;
    msg.pitch = 0.537791445241;
    msg.amplitude = 0.435301980811;
    msg.duration = 54428U;
    msg.speed = 0.956601798131;
    msg.speed_units = 88U;
    msg.radius = 0.66673088357;
    msg.direction = 27U;
    msg.custom.assign("UICGCYIGJKMKWDOMHTSMYINBIUUGQSCZWJGQCHCMFPGRYXSXJUGEBDAASWVEDMLDLBKMRWCAUFTFBEEIURJNSCMXDTYOQTTWLOBZXGMXZIQDWVGHFNSFKULHXYHZYKOJGTPALFFSKJVKPI");

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
    msg.setTimeStamp(0.858439381371);
    msg.setSource(38321U);
    msg.setSourceEntity(212U);
    msg.setDestination(10689U);
    msg.setDestinationEntity(184U);
    msg.timeout = 63797U;
    msg.lat = 0.422714344869;
    msg.lon = 0.744756449114;
    msg.z = 0.898429761885;
    msg.z_units = 77U;
    msg.pitch = 0.866194805662;
    msg.amplitude = 0.889861650573;
    msg.duration = 59601U;
    msg.speed = 0.931196472517;
    msg.speed_units = 19U;
    msg.radius = 0.283819913488;
    msg.direction = 146U;
    msg.custom.assign("HOVVFIVIVKRMILRNCXDHLGKWCJGWARSYSTDAUKOCBAGZXJYCUBALCYMGZMUVDDFZJZTEEBHTLBROQGJKHZQXPQJQYAXEPTDBUNLINHWEGXMMIQUSQXVLFPEU");

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
    msg.setTimeStamp(0.560682152929);
    msg.setSource(39579U);
    msg.setSourceEntity(81U);
    msg.setDestination(18512U);
    msg.setDestinationEntity(221U);
    msg.formation_name.assign("MCWUXPZSDSJISKOHYCECFMNERADUJQPTXIJMGVEVHNBYNCLRQTNHJZCUYCFGKZVZMOPGLHDALNJOUORWTQRXSMNQINDKQYFFQADKZVPZKWVFJVXYGYABLCIGETUIVLQTBYEATPKXRDCENNTCGFHMASWOBHYLAVFOIXAPWOZJIWXSBUMDEXTVIBGSRRSBWBSPI");
    msg.reference_frame = 158U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 4925U;
    tmp_msg_0.off_x = 0.798964167292;
    tmp_msg_0.off_y = 0.736662054031;
    tmp_msg_0.off_z = 0.834678225266;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("OCXDXUDIKBAELADDBTWIXDRFXEGAFCAWWTXHCHZUAJQHRYRORLZMCOGJYVAFBKSBAGCIGDSFMVCXBZMGBUZTNYERQHAPVDUIKTBPMWDUSMNLFSOQMCJSGZUXUKWBNCRAKHGNSWRPWWZJWRKEUVGOJOISGPBGKLJCNNTSLLOQPKYPEZYYLTMFJTEURKYJLQCFWQELVXJFQIOISLHHIJVYQVHVNZPNPOEKQPNDQZHVYD");

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
    msg.setTimeStamp(0.18298000741);
    msg.setSource(23262U);
    msg.setSourceEntity(147U);
    msg.setDestination(28693U);
    msg.setDestinationEntity(208U);
    msg.formation_name.assign("TNNEKYZIXNPSAVFWYRWDFSVIVPZOGSGZFKFEJIEPCPJGUJURSBJGQOCWEKDYVXHLTQAVNUZXOGXQYKSMKTLHDFDVDHPSWBGIXWARKQJFHAOOIMFCDCJUOTTCNAFOIXNYCAVOZPDKHZLPXAVQXMGKJHKFZCHTXLIMYAYEUHCIUDW");
    msg.reference_frame = 54U;
    msg.custom.assign("UZJYYABSNBPVZPJVEENGQNWBFGGKHACGZTMRUGFYVATTQPDVSOWAULOXVHJFIJBXISXIQDRRUVYLRKICLTJWVWDDJNZWMUHQZOOUKCTDRLAPBPIFHXEEKWHVIPGTCIQTACFGDCMWNLDKKQYRYYEITMJROFXZXSMGHBUERJZQOEYBNIKCCKLMAXNFSDUMHNWMYSVBTQYUOEBHLKHLSRMQHSPCOZKSXNXWEVARCSDLFGTPJAUQABFZD");

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
    msg.setTimeStamp(0.188021593611);
    msg.setSource(39413U);
    msg.setSourceEntity(175U);
    msg.setDestination(5741U);
    msg.setDestinationEntity(198U);
    msg.formation_name.assign("JCWRPEDAXYBWGDRWFTTJCRVRBHLGPP");
    msg.reference_frame = 133U;
    msg.custom.assign("AFAXAQPJEGIPXQSETTLNG");

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
    msg.setTimeStamp(0.0563419671698);
    msg.setSource(60874U);
    msg.setSourceEntity(208U);
    msg.setDestination(35723U);
    msg.setDestinationEntity(202U);
    msg.group_name.assign("WINZCUJSVFQMQUPJIFNSPHZXTSOFWQYEAIR");
    msg.formation_name.assign("VGUUFJQINCDUGNPUSZBTFPHHNMLGHDVDKGSJJCQISLPBNHQOATOVLLFWJWKQGMKNIINMTIXAHGKBYQ");
    msg.plan_id.assign("MDODJCWRUPEBTQBMHAMPJCOFJWTULINCYHEJVDMFOYYKFKZZWGRGCHXSWJGNSVMULPEYVUGAAOCDTMJOQYQRNGFHWTFFQFRATLPBXYLEAGWBPTKGTRKULMKXHHQZHJQCVQPZIGRIKAIUFXOIVJVAEBWLTDLSKSBMHRXZVW");
    msg.description.assign("ORKIHPUFTDRZQVEOAEFUIBVMVOTWWKQVSPTSBMMYCAXPWDDKOSJUIMHNDLEAFRPLQBECAOJMNWWBDYCJXERVZQOPDZWZRJKVKBQOWEYH");
    msg.leader_speed = 0.560166238686;
    msg.leader_bank_lim = 0.14096057072;
    msg.pos_sim_err_lim = 0.35886073237;
    msg.pos_sim_err_wrn = 0.557341647723;
    msg.pos_sim_err_timeout = 52486U;
    msg.converg_max = 0.4557587075;
    msg.converg_timeout = 53221U;
    msg.comms_timeout = 6034U;
    msg.turb_lim = 0.572057741794;
    msg.custom.assign("VTXRUOPWHLCNGDEMWINYZTGSGJFSJJFLJTMIUDKNFRNIBUYYKCOALPOLFYDVWTTDXKKZOLQJPHTJGFOVRQMZPMYTPSSOMZKEJEGSCMDWUWXREGXBDJXVILLSUVEHOPGCKQUUPXG");

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
    msg.setTimeStamp(0.212676110099);
    msg.setSource(30687U);
    msg.setSourceEntity(54U);
    msg.setDestination(5307U);
    msg.setDestinationEntity(253U);
    msg.group_name.assign("ZBBDZWPDHVOIRXBWEFUZQEGMQLDBSLLNYDCCNKYXUVCHDSTGGWNBLOJUPLVHNUYMWSPCJR");
    msg.formation_name.assign("ZQTYUFPFMRGFEBNVEKXWOJLGJQCLTBASHPNLAMIPBRFWQLRFQUZCVDVRDFRRBYDJIRAOPQPVHHNY");
    msg.plan_id.assign("TRLRWNJORPLFNKTEKTJSBQSGVFSFQTWFYDHBUIUDCIVFZYTDHLIDVAPUMGSHNLJJNEUQMPEKHWALDBBAWOGWQKDRYUTSCYTIVQXWXWVLMWMTRKMDURJGOQYGPXHSBFXJKCEWVHPLGWEXHDFVPRNOZPCNFIAZTRNZACSCXTVXAJEZIKAIBULERIJQIJYCZCEBBZPQUGSINDCMOMENQZ");
    msg.description.assign("ZUNZKVPLXQIXROMIKVKIKPAPUHODVQPJSNYDPUYWUZHOKIGENEMYXDDCGEBVXHWMAAWTTZUMLLXBSARWOONJDWSTORFCYFHYCQSEFJVELQTBWPJJCKZEDEOSGKDNZGQAMNGFTFUSBBUAFHMNMRVZBAXAESPLBJFRJBELYLCIZSYDZMWWKNCCRYGSAIVOCYLQXVFXXLOHQKOUQIYJUJVSXRNGWQTCBDGCWPRRPQLENG");
    msg.leader_speed = 0.706129695358;
    msg.leader_bank_lim = 0.0336610715941;
    msg.pos_sim_err_lim = 0.425341003238;
    msg.pos_sim_err_wrn = 0.0446396631806;
    msg.pos_sim_err_timeout = 37478U;
    msg.converg_max = 0.15607352138;
    msg.converg_timeout = 58588U;
    msg.comms_timeout = 65124U;
    msg.turb_lim = 0.22163210738;
    msg.custom.assign("BMCFBNAFIIJUDYSJGQ");

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
    msg.setTimeStamp(0.517187060412);
    msg.setSource(4055U);
    msg.setSourceEntity(20U);
    msg.setDestination(42897U);
    msg.setDestinationEntity(92U);
    msg.group_name.assign("DCACOISYGSXZDNOS");
    msg.formation_name.assign("LJBDUCXEAJIBZRAPZPGQZVDERQNHIFANCYMVJGSGJTMPUTMYBMSJEYXKZJBVUVRKFYZMONXXLTUOTAPYURMXRIOIPBKDANXPBZGDEEHLRHLHGKOWKCLGDDTCQFQWWUWESXYPNJNSQODXFCJHTMLGDLENNPFANQKAAPKCQTWZFHMXOLVCSFVYIVIUOUSLHMIB");
    msg.plan_id.assign("EUDSAGMXOSODWZZSSINSTKPYRAHICVPNFVUWSEYFHUTBORDHISQGTZTVSTKPIAYVGCDEKEWAWNIOQRLZDPWNYEYAGXHWRJPBQECNKCJZGHHFGZZDEKCVJIAHTRFJMJBBFQLZPPHQYQUIMWBGURIHLJEMFDXCLGTMNWZOYKCMJYSIABQXJSAVR");
    msg.description.assign("QUWTBMNTDHQXJCKSEOXAQPFWEJOLVZTMNFWCNCIEJKPSUSHUULFKQIADIDRVFTIGOYFEPOWALIJVXBMJEZXJWHVLGRVWBLBLUINHMRNFPPIZOQAXBCMKCHLYGEEKBMNVAAECRKIKZDYLRRYEBXAHXYSDBZOYIPEPHOZDWYXPQSOFTMAVKUORVFVMTKOPGRLMTTIYATZCRRCLBAZGVHMDGGUGPD");
    msg.leader_speed = 0.309018995576;
    msg.leader_bank_lim = 0.0987258603483;
    msg.pos_sim_err_lim = 0.644816835352;
    msg.pos_sim_err_wrn = 0.00888521310264;
    msg.pos_sim_err_timeout = 61459U;
    msg.converg_max = 0.706209066212;
    msg.converg_timeout = 27032U;
    msg.comms_timeout = 5073U;
    msg.turb_lim = 0.322641415827;
    msg.custom.assign("AYHYLSELFYNVWKNMMSHLSIVQATSOFYHTWPNQLJKWEYAWUVJUVBESZFLVVBSEJBTRK");

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
    msg.setTimeStamp(0.764434079064);
    msg.setSource(12284U);
    msg.setSourceEntity(45U);
    msg.setDestination(54014U);
    msg.setDestinationEntity(111U);
    msg.control_src = 32451U;
    msg.control_ent = 33U;
    msg.timeout = 0.0441130692919;
    msg.loiter_radius = 0.878928099892;
    msg.altitude_interval = 0.925051024062;

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
    msg.setTimeStamp(0.729171062547);
    msg.setSource(7957U);
    msg.setSourceEntity(230U);
    msg.setDestination(26279U);
    msg.setDestinationEntity(221U);
    msg.control_src = 8576U;
    msg.control_ent = 241U;
    msg.timeout = 0.822925073624;
    msg.loiter_radius = 0.198255117328;
    msg.altitude_interval = 0.0585111475632;

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
    msg.setTimeStamp(0.9618915841);
    msg.setSource(62595U);
    msg.setSourceEntity(98U);
    msg.setDestination(21027U);
    msg.setDestinationEntity(203U);
    msg.control_src = 23515U;
    msg.control_ent = 220U;
    msg.timeout = 0.815136553816;
    msg.loiter_radius = 0.828927569154;
    msg.altitude_interval = 0.703788292505;

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
    msg.setTimeStamp(0.266070492428);
    msg.setSource(61752U);
    msg.setSourceEntity(92U);
    msg.setDestination(45105U);
    msg.setDestinationEntity(155U);
    msg.flags = 162U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.752589184613;
    tmp_msg_0.speed_units = 38U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.712467672662;
    tmp_msg_1.z_units = 9U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.756946877153;
    msg.lon = 0.444178159834;
    msg.radius = 0.892922298638;

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
    msg.setTimeStamp(0.730255938494);
    msg.setSource(47910U);
    msg.setSourceEntity(237U);
    msg.setDestination(33682U);
    msg.setDestinationEntity(27U);
    msg.flags = 98U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.284904062421;
    tmp_msg_0.speed_units = 79U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.392647873639;
    tmp_msg_1.z_units = 96U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0292466611499;
    msg.lon = 0.567203398132;
    msg.radius = 0.310101143345;

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
    msg.setTimeStamp(0.506127246644);
    msg.setSource(38950U);
    msg.setSourceEntity(35U);
    msg.setDestination(24307U);
    msg.setDestinationEntity(176U);
    msg.flags = 9U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.353343610947;
    tmp_msg_0.speed_units = 13U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.872599546578;
    tmp_msg_1.z_units = 119U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.819747642994;
    msg.lon = 0.863723578882;
    msg.radius = 0.554518678137;

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
    msg.setTimeStamp(0.307757714118);
    msg.setSource(4209U);
    msg.setSourceEntity(55U);
    msg.setDestination(53682U);
    msg.setDestinationEntity(97U);
    msg.control_src = 171U;
    msg.control_ent = 58U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 197U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.442894948852;
    tmp_tmp_msg_0_0.speed_units = 189U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0646327071917;
    tmp_tmp_msg_0_1.z_units = 87U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.474350312098;
    tmp_msg_0.lon = 0.549522707005;
    tmp_msg_0.radius = 0.292888234567;
    msg.reference.set(tmp_msg_0);
    msg.state = 41U;
    msg.proximity = 222U;

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
    msg.setTimeStamp(0.0202539692667);
    msg.setSource(63366U);
    msg.setSourceEntity(76U);
    msg.setDestination(6020U);
    msg.setDestinationEntity(120U);
    msg.control_src = 45781U;
    msg.control_ent = 60U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 114U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.256833651616;
    tmp_tmp_msg_0_0.speed_units = 239U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.43359131618;
    tmp_tmp_msg_0_1.z_units = 73U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.606066256238;
    tmp_msg_0.lon = 0.659506275988;
    tmp_msg_0.radius = 0.985901894033;
    msg.reference.set(tmp_msg_0);
    msg.state = 202U;
    msg.proximity = 5U;

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
    msg.setTimeStamp(0.355669936065);
    msg.setSource(45108U);
    msg.setSourceEntity(39U);
    msg.setDestination(45574U);
    msg.setDestinationEntity(218U);
    msg.control_src = 33553U;
    msg.control_ent = 65U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 29U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.896182544961;
    tmp_tmp_msg_0_0.speed_units = 114U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.959731822088;
    tmp_tmp_msg_0_1.z_units = 117U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0344434963274;
    tmp_msg_0.lon = 0.516762227524;
    tmp_msg_0.radius = 0.556501793308;
    msg.reference.set(tmp_msg_0);
    msg.state = 113U;
    msg.proximity = 102U;

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
    msg.setTimeStamp(0.585366086095);
    msg.setSource(59869U);
    msg.setSourceEntity(142U);
    msg.setDestination(30543U);
    msg.setDestinationEntity(140U);
    msg.ax_cmd = 0.835042914775;
    msg.ay_cmd = 0.479493361833;
    msg.az_cmd = 0.375735120013;
    msg.ax_des = 0.449779737054;
    msg.ay_des = 0.971387354898;
    msg.az_des = 0.427327584675;
    msg.virt_err_x = 0.846047374864;
    msg.virt_err_y = 0.405729906372;
    msg.virt_err_z = 0.320350891802;
    msg.surf_fdbk_x = 0.971922444209;
    msg.surf_fdbk_y = 0.0448448041913;
    msg.surf_fdbk_z = 0.457588066432;
    msg.surf_unkn_x = 0.806110759913;
    msg.surf_unkn_y = 0.722042951481;
    msg.surf_unkn_z = 0.29717376337;
    msg.ss_x = 0.0164848264565;
    msg.ss_y = 0.243144293278;
    msg.ss_z = 0.645498012936;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YUFTDKIXLIPTCFLRBWUTYUIBXRANJKWXGZCLTEKRVDFFOMOORQSYCCHLXWKSIDATZJLDYVTNOSQYKOAHMABBZOUS");
    tmp_msg_0.dist = 0.252728718331;
    tmp_msg_0.err = 0.613448222796;
    tmp_msg_0.ctrl_imp = 0.0361284056986;
    tmp_msg_0.rel_dir_x = 0.361283118333;
    tmp_msg_0.rel_dir_y = 0.322513196176;
    tmp_msg_0.rel_dir_z = 0.63990761106;
    tmp_msg_0.err_x = 0.271349167551;
    tmp_msg_0.err_y = 0.643820517872;
    tmp_msg_0.err_z = 0.531175520166;
    tmp_msg_0.rf_err_x = 0.992937963575;
    tmp_msg_0.rf_err_y = 0.496234782831;
    tmp_msg_0.rf_err_z = 0.599161902906;
    tmp_msg_0.rf_err_vx = 0.208417964513;
    tmp_msg_0.rf_err_vy = 0.906749670322;
    tmp_msg_0.rf_err_vz = 0.405269541337;
    tmp_msg_0.ss_x = 0.449606319428;
    tmp_msg_0.ss_y = 0.355856994608;
    tmp_msg_0.ss_z = 0.5319602743;
    tmp_msg_0.virt_err_x = 0.337684936154;
    tmp_msg_0.virt_err_y = 0.527331975686;
    tmp_msg_0.virt_err_z = 0.312316781555;
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
    msg.setTimeStamp(0.436719121097);
    msg.setSource(1757U);
    msg.setSourceEntity(245U);
    msg.setDestination(15596U);
    msg.setDestinationEntity(15U);
    msg.ax_cmd = 0.461120823589;
    msg.ay_cmd = 0.111488620694;
    msg.az_cmd = 0.191931386489;
    msg.ax_des = 0.943388511309;
    msg.ay_des = 0.672530132913;
    msg.az_des = 0.867169850104;
    msg.virt_err_x = 0.470857350999;
    msg.virt_err_y = 0.011567274593;
    msg.virt_err_z = 0.398198287896;
    msg.surf_fdbk_x = 0.607474254605;
    msg.surf_fdbk_y = 0.673677877277;
    msg.surf_fdbk_z = 0.836089369578;
    msg.surf_unkn_x = 0.757807217737;
    msg.surf_unkn_y = 0.375959089765;
    msg.surf_unkn_z = 0.177152346279;
    msg.ss_x = 0.725268779994;
    msg.ss_y = 0.366372517831;
    msg.ss_z = 0.651117698208;

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
    msg.setTimeStamp(0.498068656514);
    msg.setSource(49596U);
    msg.setSourceEntity(92U);
    msg.setDestination(57037U);
    msg.setDestinationEntity(7U);
    msg.ax_cmd = 0.577942887632;
    msg.ay_cmd = 0.495548545287;
    msg.az_cmd = 0.934735731289;
    msg.ax_des = 0.42005955629;
    msg.ay_des = 0.766698283345;
    msg.az_des = 0.238380151662;
    msg.virt_err_x = 0.529296213628;
    msg.virt_err_y = 0.123070644342;
    msg.virt_err_z = 0.780809771596;
    msg.surf_fdbk_x = 0.0486768343707;
    msg.surf_fdbk_y = 0.239624447637;
    msg.surf_fdbk_z = 0.940753226483;
    msg.surf_unkn_x = 0.382247930895;
    msg.surf_unkn_y = 0.944467025437;
    msg.surf_unkn_z = 0.699981169153;
    msg.ss_x = 0.946115904781;
    msg.ss_y = 0.0316376859143;
    msg.ss_z = 0.585184814568;

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
    msg.setTimeStamp(0.974587971814);
    msg.setSource(21207U);
    msg.setSourceEntity(141U);
    msg.setDestination(27097U);
    msg.setDestinationEntity(241U);
    msg.s_id.assign("LWMJIRPGFEKCPCPRALIKZXHHVFEEWOMYUS");
    msg.dist = 0.646377863646;
    msg.err = 0.767141730152;
    msg.ctrl_imp = 0.886016731218;
    msg.rel_dir_x = 0.0555183224937;
    msg.rel_dir_y = 0.00323504167891;
    msg.rel_dir_z = 0.712575882019;
    msg.err_x = 0.677954752223;
    msg.err_y = 0.403180352759;
    msg.err_z = 0.852770524301;
    msg.rf_err_x = 0.877279067355;
    msg.rf_err_y = 0.925806234241;
    msg.rf_err_z = 0.871648601241;
    msg.rf_err_vx = 0.460877136283;
    msg.rf_err_vy = 0.873213253901;
    msg.rf_err_vz = 0.834501630083;
    msg.ss_x = 0.18570673354;
    msg.ss_y = 0.659593041969;
    msg.ss_z = 0.127084523548;
    msg.virt_err_x = 0.626490735983;
    msg.virt_err_y = 0.743826631213;
    msg.virt_err_z = 0.39497536059;

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
    msg.setTimeStamp(0.842538964062);
    msg.setSource(62916U);
    msg.setSourceEntity(30U);
    msg.setDestination(17789U);
    msg.setDestinationEntity(95U);
    msg.s_id.assign("LJBKKZQFWGYKZGYBTAATMFPZXUPHSNVRXKGSEKBTQRWWASNNJZSUCXHOOYUROJFKBCIUQWALIZBWKYNJFOGJWPLGILJICXCSHUUGXFTXFBPDZVTDWTLLSQQARECKMGJLNOQCDPZPBYNIRAVPMEDEXOOFMEMDQMYMKLTQSJBYAQWDYECXFFCDNUURMZAHVBAILEHIVPEIUCRDUTLVJMM");
    msg.dist = 0.391059610621;
    msg.err = 0.14152165318;
    msg.ctrl_imp = 0.0884775118321;
    msg.rel_dir_x = 0.914847173144;
    msg.rel_dir_y = 0.594832901608;
    msg.rel_dir_z = 0.547842524257;
    msg.err_x = 0.373700377465;
    msg.err_y = 0.499661115987;
    msg.err_z = 0.552849358633;
    msg.rf_err_x = 0.350804952913;
    msg.rf_err_y = 0.591133844438;
    msg.rf_err_z = 0.879316440242;
    msg.rf_err_vx = 0.609533511895;
    msg.rf_err_vy = 0.761150235809;
    msg.rf_err_vz = 0.286511534056;
    msg.ss_x = 0.0338853985693;
    msg.ss_y = 0.444571464035;
    msg.ss_z = 0.469426254433;
    msg.virt_err_x = 0.498964572953;
    msg.virt_err_y = 0.595176246185;
    msg.virt_err_z = 0.022936668223;

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
    msg.setTimeStamp(0.1707857751);
    msg.setSource(571U);
    msg.setSourceEntity(105U);
    msg.setDestination(5119U);
    msg.setDestinationEntity(60U);
    msg.s_id.assign("RJSMVMRXILZPHDQHJIUBROPUBAIFCXBSAMSICISTUKWHBSQRDFZKAUBPFRXEPECTZCDVQWGEKJHHSSPWHQMZENXOXKVJPWVUTAOUAGEIDZZKKQBSOTXLLTWSWHLPVGRARBTHXJNDUVCIQPKESODOZRLBGBVGNLGYFVJBVJTYWEOGDCGDKEYFTQXFLRPONVNYZMHMTEZRLIKDCAMAW");
    msg.dist = 0.637574677129;
    msg.err = 0.275547572038;
    msg.ctrl_imp = 0.985979641766;
    msg.rel_dir_x = 0.394033855168;
    msg.rel_dir_y = 0.618872583582;
    msg.rel_dir_z = 0.278796472297;
    msg.err_x = 0.23747619725;
    msg.err_y = 0.312144596348;
    msg.err_z = 0.194805822058;
    msg.rf_err_x = 0.279100360913;
    msg.rf_err_y = 0.467329778;
    msg.rf_err_z = 0.36348245457;
    msg.rf_err_vx = 0.58490038626;
    msg.rf_err_vy = 0.423809123246;
    msg.rf_err_vz = 0.98901428721;
    msg.ss_x = 0.985169543983;
    msg.ss_y = 0.203618389886;
    msg.ss_z = 0.0922453667478;
    msg.virt_err_x = 0.375236402337;
    msg.virt_err_y = 0.0163603548003;
    msg.virt_err_z = 0.908102184857;

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
    msg.setTimeStamp(0.101310734923);
    msg.setSource(45780U);
    msg.setSourceEntity(122U);
    msg.setDestination(52063U);
    msg.setDestinationEntity(169U);
    msg.timeout = 58863U;
    msg.rpm = 0.874452257564;
    msg.direction = 206U;
    msg.custom.assign("BQUFPLDPQOPQCQSXUTWBKOVAHHQABBKXSIMAFNKYNUEZRJEGKASNGCPYNUGFQBKMHMMVDXBAJYVMLCIIDTDREEWJWHPYEHCZBWIPUAVVYPTVUWNGRJNSJAMLZLAYFDMCXEBFZJZCMHNTRLIGOQXZYOKFXTRLTWFPZPUHEWRZQVZDIAOZLYSOSOXEFXWL");

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
    msg.setTimeStamp(0.0504140112935);
    msg.setSource(34015U);
    msg.setSourceEntity(108U);
    msg.setDestination(10671U);
    msg.setDestinationEntity(28U);
    msg.timeout = 27432U;
    msg.rpm = 0.843285826881;
    msg.direction = 184U;
    msg.custom.assign("WUEBNBKTSYCRCTYUNFJDPBDRPJCODZACKCLXIKNKPTZ");

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
    msg.setTimeStamp(0.672449935966);
    msg.setSource(56277U);
    msg.setSourceEntity(33U);
    msg.setDestination(37847U);
    msg.setDestinationEntity(117U);
    msg.timeout = 1448U;
    msg.rpm = 0.630365711753;
    msg.direction = 2U;
    msg.custom.assign("ZCKZLXLPIANZKBUEFKAXXDOFCJCGLWAIQWNQMNNMLIBTZGELTSRBQLXVDIZAQFJLVUIIMZWVRTLCUVAFQUWLHXONYJKXJIRBNGFZEUPPKTXOXRPAJEBOMDMEKBOWUFMTOEDRTXGQGVYVAURSSOJBZPMBKCKTACSCADUDSZRMHWNPDCSLHORWVYKSPUHSA");

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
    msg.setTimeStamp(0.526035353639);
    msg.setSource(10946U);
    msg.setSourceEntity(15U);
    msg.setDestination(31871U);
    msg.setDestinationEntity(18U);
    msg.formation_name.assign("YQEYCBDLITUTQUYNTWYUZRIBRSRTNSYJINPHLADSTWLGNQWAHKTHJNEMIVEOYSQCCKWZDKEAKWXTPUPQASXSEMNVLGBKDIUOAFRQNXKLZTDEAWMHELBRAVJ");
    msg.type = 21U;
    msg.op = 47U;
    msg.group_name.assign("ZARMRZGVRXXAEUPIPIYNMBHDKDJIHXLCVHFGVIYTCSPAPJGRKZWNYPMZNCPAAUXNEAGZDJOWERQWKDYSVENRSQBSCETTDCTTKINNUFXKCOAOYVWCULEBOTLPPRFMYSORTUFSQHCLIBYXDIDCLRHWFKLHVJOXQEOMEUZSFSLZQABGGQNDDIXMVOJWKWYQHVSBLMNKQFJELDJBIPUZFPTBJWCYATJSZGXNMGWUYKGJVKMEFIUXHT");
    msg.plan_id.assign("BCXPWFIGAEFGIHMOAOIRTCOKIHRFTCTUERBYTSSLVMWSEQBLFMNMJBTNIHDKV");
    msg.description.assign("DVVIXDQNMMHMTSCAVHAUYOUNBWOLCEXTCPQLLSNLDOOKHRTRVCWRSPAWKYYESSGLBBXHKZJQDOSGHPOZEVTKCGTVOEDGMVNPREBSMLUJXSQYFABZBHOUSJEQECYAXBOFZNEIILJQRKWGEJINOVWFVQKZDZGHFLRQHNAJKIVHGJYMSXRMNXIPYXWYUC");
    msg.reference_frame = 48U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 38360U;
    tmp_msg_0.off_x = 0.738915865549;
    tmp_msg_0.off_y = 0.343461789125;
    tmp_msg_0.off_z = 0.81067932031;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.141012382389;
    msg.leader_speed_min = 0.682255194326;
    msg.leader_speed_max = 0.923372640318;
    msg.leader_alt_min = 0.432259700071;
    msg.leader_alt_max = 0.0945456238703;
    msg.pos_sim_err_lim = 0.387182379381;
    msg.pos_sim_err_wrn = 0.406874352374;
    msg.pos_sim_err_timeout = 61482U;
    msg.converg_max = 0.641399104477;
    msg.converg_timeout = 12776U;
    msg.comms_timeout = 3210U;
    msg.turb_lim = 0.903762227377;
    msg.custom.assign("PBRCNUAXEWMXPFNQHAUSSUSBDAFMNPIYLJJYJJYALKZKNEBJSJRDFBCIGGYWRMROIYZZIPYSVNZTQOKIQOPOHFVHCAKXPXEFNSQSNPWXNTUCYUEJEOGTXLDUUOUPNQLWSAKGQIZIKFFDMQDWBXOAHSLLXWKHTRGDERLAOZVEYDJHKBGOMDHQGETZWRTYCQCWTZVFNRGIEBAWGMLFVLSZLVVXCHBDHRYRJBIWBMTMEFCVUKJVQGKICTTMV");

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
    msg.setTimeStamp(0.873645818915);
    msg.setSource(11583U);
    msg.setSourceEntity(32U);
    msg.setDestination(38953U);
    msg.setDestinationEntity(83U);
    msg.formation_name.assign("ACKNMNOVQKGFHQFOZUS");
    msg.type = 29U;
    msg.op = 103U;
    msg.group_name.assign("YGBJHSDESWBLQXGDSQMNKTKJNHLAMUDKFT");
    msg.plan_id.assign("PFCCTYYJUDVGILZRBXJLXQIQMJZWWKTNOMLDRAWNGONMKGZRLVEUTRCXYKAUBWJHHCPTXWSBJCGFBSDBGBXYDSEWKEMVGSZETVOQNSKUGMGOAVPITBHBLSHIUPEYGOXYRPLKPWVQVQFOLRAUKZHMSMCSARUDKECPJOQMQWZZCORFPDMNUECQIFNWJMFRDITYYAAJQZVEHUNFKKOWNUSFHEHFAHPIGDXDXTDLRI");
    msg.description.assign("PYRMTXFCDBXAVDGZQGWSQBCMUDDTYNEPJQTMDEVQYKPCJSEC");
    msg.reference_frame = 65U;
    msg.leader_bank_lim = 0.967013288203;
    msg.leader_speed_min = 0.629427992025;
    msg.leader_speed_max = 0.521619549674;
    msg.leader_alt_min = 0.417711915206;
    msg.leader_alt_max = 0.805960885332;
    msg.pos_sim_err_lim = 0.761604166416;
    msg.pos_sim_err_wrn = 0.0921591757965;
    msg.pos_sim_err_timeout = 47955U;
    msg.converg_max = 0.75463963539;
    msg.converg_timeout = 22310U;
    msg.comms_timeout = 18420U;
    msg.turb_lim = 0.229181662184;
    msg.custom.assign("DHXIHPTGCOQCMSNIBEFEWZLVZHGTZXTFYPBGRWEFNMGXXAYFBUDTBHWCNPYSRSIYRA");

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
    msg.setTimeStamp(0.386927080245);
    msg.setSource(63008U);
    msg.setSourceEntity(33U);
    msg.setDestination(64939U);
    msg.setDestinationEntity(108U);
    msg.formation_name.assign("AOTVKWKSCWGRUFBJYPPQPSRWUMOZBSRWJYNGYNHUVAQIULWBITZEZJKRRXHVSHPIFOYGQIQOCIZGNEBTDPGWLBDTKDFCKNOMBTRGOHVL");
    msg.type = 201U;
    msg.op = 57U;
    msg.group_name.assign("JVQBJXNNITPI");
    msg.plan_id.assign("OSZNMWKUYP");
    msg.description.assign("GKAXTEZTAATWACMSHPNRITXQFYTNUYEIRGAKSTLFCJPELBQWUABDDXLDVCYOKKNQNJTHFEX");
    msg.reference_frame = 251U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 46918U;
    tmp_msg_0.off_x = 0.692928964503;
    tmp_msg_0.off_y = 0.30627409746;
    tmp_msg_0.off_z = 0.076273184156;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.927238820477;
    msg.leader_speed_min = 0.550647635624;
    msg.leader_speed_max = 0.908121634493;
    msg.leader_alt_min = 0.137760795487;
    msg.leader_alt_max = 0.597222413522;
    msg.pos_sim_err_lim = 0.308379026805;
    msg.pos_sim_err_wrn = 0.0189475283526;
    msg.pos_sim_err_timeout = 25197U;
    msg.converg_max = 0.586255058293;
    msg.converg_timeout = 5353U;
    msg.comms_timeout = 17700U;
    msg.turb_lim = 0.592551267348;
    msg.custom.assign("YDCKKDJQHLYXUZISFNUMAIYOAYSHGBHZSATNRPFMJIKHCXETWJDRUYLQYMEBDUREFOYRGJHOQXIVLJLBECXYLAGQMSVLVPVCZHIZJKKPFNQZKCABRW");

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
    msg.setTimeStamp(0.649325102324);
    msg.setSource(7191U);
    msg.setSourceEntity(218U);
    msg.setDestination(8832U);
    msg.setDestinationEntity(78U);
    msg.timeout = 29545U;
    msg.lat = 0.679076604326;
    msg.lon = 0.0810105002943;
    msg.z = 0.131805218918;
    msg.z_units = 111U;
    msg.speed = 0.236498883714;
    msg.speed_units = 163U;
    msg.custom.assign("TMSGDVWCTEOKNMGBJDXPEJSSRBSCNZLBMMOKVYIZRXQJMLBFW");

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
    msg.setTimeStamp(0.565779578293);
    msg.setSource(63362U);
    msg.setSourceEntity(24U);
    msg.setDestination(18007U);
    msg.setDestinationEntity(91U);
    msg.timeout = 15999U;
    msg.lat = 0.260781369112;
    msg.lon = 0.138166309163;
    msg.z = 0.758724021169;
    msg.z_units = 42U;
    msg.speed = 0.159660681422;
    msg.speed_units = 188U;
    msg.custom.assign("TCNKMVJLZETIEFSGOSURBDHVQZVPZAWCPBMLJGWLLWVXTNRRNMNVEAJBIVKCRLPXVYEJJTRMUXHPXWGFHGVTYZYTOKLCUFCWYCNEDZYOCXDCMFREOWLCEYFGKHZEIUIRISJHDMPQBIDSDMYPIYWXOAGSQBWRSAGUDZDIJXQZUQXLPFTBHHXDTTQVRUXWPRKJFBAHUNNFUAODMHGJPLQYOSSFNWKBAIZENECKUQVQASB");

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
    msg.setTimeStamp(0.326083482433);
    msg.setSource(63695U);
    msg.setSourceEntity(191U);
    msg.setDestination(52751U);
    msg.setDestinationEntity(66U);
    msg.timeout = 3364U;
    msg.lat = 0.122399498367;
    msg.lon = 0.938517824756;
    msg.z = 0.240677714486;
    msg.z_units = 253U;
    msg.speed = 0.241803656584;
    msg.speed_units = 56U;
    msg.custom.assign("WWLGTWLVUBIKTLIGRUFCAGXNGCPQLKBCGMQBODJKHJMBWRUYLFARQJOVTMVQCAOSTARECTOILIMNSBSARIICUGXZSQNCYYKRMWNYEBCDNIWLYXBKNJBSHDXZXKHKMRTOIZHZXPVVXNPPUSEFPZEHFDTYOTSODNUXWZTTMAGEDMUXMPREWYALYECGHHLIVQPNONUVEPQFUPLHOVM");

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
    msg.setTimeStamp(0.599312565258);
    msg.setSource(63054U);
    msg.setSourceEntity(24U);
    msg.setDestination(63803U);
    msg.setDestinationEntity(232U);
    msg.timeout = 7975U;
    msg.lat = 0.308537281048;
    msg.lon = 0.0805718608261;
    msg.z = 0.784094769915;
    msg.z_units = 211U;
    msg.speed = 0.174740125614;
    msg.speed_units = 228U;
    msg.custom.assign("FSSUNGNDXTVUROKWAQEEX");

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
    msg.setTimeStamp(0.149502610663);
    msg.setSource(26250U);
    msg.setSourceEntity(214U);
    msg.setDestination(51408U);
    msg.setDestinationEntity(45U);
    msg.timeout = 40239U;
    msg.lat = 0.665493066968;
    msg.lon = 0.057022046684;
    msg.z = 0.149550857382;
    msg.z_units = 139U;
    msg.speed = 0.138597929021;
    msg.speed_units = 78U;
    msg.custom.assign("BVTWIKRMLZGENUTAPBQSJXNHYKVPLLRWDTBWRL");

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
    msg.setTimeStamp(0.139320083702);
    msg.setSource(36749U);
    msg.setSourceEntity(141U);
    msg.setDestination(2652U);
    msg.setDestinationEntity(245U);
    msg.timeout = 10678U;
    msg.lat = 0.284643230774;
    msg.lon = 0.909598792986;
    msg.z = 0.935278894719;
    msg.z_units = 212U;
    msg.speed = 0.92361022555;
    msg.speed_units = 154U;
    msg.custom.assign("FSWJPUIYFEWANZBNXPCUVRWNVRUAQSIYSDSAGRZHMRPBQOPSIYHETVRKCDHEHNNEMTNLCZJESBVXTMYOQQRXRYBLWZUAMDGAAJUVVWLDCQPPGLJPOFYTLWFKMLQFEOAJDCVLRNDYGMKZUMCOGFQXMDPCVTNHZSYVHMDOXKJCRCYUKEDGWUOLECAFFEYUOUXXTGADINIPKTBBTJ");

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
    msg.setTimeStamp(0.586072982388);
    msg.setSource(38261U);
    msg.setSourceEntity(78U);
    msg.setDestination(51105U);
    msg.setDestinationEntity(42U);
    msg.arrival_time = 0.771871784795;
    msg.lat = 0.345426802687;
    msg.lon = 0.566276188725;
    msg.z = 0.855301995778;
    msg.z_units = 189U;
    msg.travel_z = 0.151479533422;
    msg.travel_z_units = 51U;
    msg.delayed = 254U;

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
    msg.setTimeStamp(0.628133940403);
    msg.setSource(15421U);
    msg.setSourceEntity(122U);
    msg.setDestination(17230U);
    msg.setDestinationEntity(185U);
    msg.arrival_time = 0.659139741154;
    msg.lat = 0.0599230406855;
    msg.lon = 0.0765518036147;
    msg.z = 0.464999034555;
    msg.z_units = 4U;
    msg.travel_z = 0.400125899815;
    msg.travel_z_units = 185U;
    msg.delayed = 53U;

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
    msg.setTimeStamp(0.711993793332);
    msg.setSource(22123U);
    msg.setSourceEntity(6U);
    msg.setDestination(20162U);
    msg.setDestinationEntity(187U);
    msg.arrival_time = 0.166330737297;
    msg.lat = 0.628184597141;
    msg.lon = 0.31095791685;
    msg.z = 0.638909732749;
    msg.z_units = 225U;
    msg.travel_z = 0.597960053644;
    msg.travel_z_units = 127U;
    msg.delayed = 250U;

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
    msg.setTimeStamp(0.487329012978);
    msg.setSource(22843U);
    msg.setSourceEntity(174U);
    msg.setDestination(8744U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.609594125019;
    msg.lon = 0.136345521627;
    msg.z = 0.749372473925;
    msg.z_units = 165U;
    msg.speed = 0.145096882568;
    msg.speed_units = 241U;
    msg.bearing = 0.897560623537;
    msg.cross_angle = 0.289338834485;
    msg.width = 0.704675673724;
    msg.length = 0.680036035454;
    msg.coff = 166U;
    msg.angaperture = 0.83467951687;
    msg.range = 63894U;
    msg.overlap = 244U;
    msg.flags = 33U;
    msg.custom.assign("XPFDGRZKMNZLGFNGBUKBTIMDEERKJOHHZLHHINYPWVDVBUQVSK");

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
    msg.setTimeStamp(0.710657592845);
    msg.setSource(38518U);
    msg.setSourceEntity(126U);
    msg.setDestination(28587U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.297261886293;
    msg.lon = 0.0977169441963;
    msg.z = 0.579606591093;
    msg.z_units = 54U;
    msg.speed = 0.547322571399;
    msg.speed_units = 221U;
    msg.bearing = 0.334557470288;
    msg.cross_angle = 0.478471945708;
    msg.width = 0.386644447468;
    msg.length = 0.556510897576;
    msg.coff = 169U;
    msg.angaperture = 0.22779638048;
    msg.range = 29051U;
    msg.overlap = 155U;
    msg.flags = 126U;
    msg.custom.assign("EUKWEBDJTGQWLXJXQZZWKTKXWBFXWWELJEYGFZFLHYNSPAMNISNSITKYFAAHLBRDVHSDZVSRADZCUYMTYURCLQVANGYVBQCQMMSVOUOUHOBAHSZXYZIJILKMDYRRNXKRPOYDFTPDWJCIAOIPWITCPCAVICCWJAHHPRCESHEBVRKPBFLESJJWLJOBFZZDYXKEMVHUSTIGVNQGXGQLNJXTMLFUPQMARQMPBNZRGGENTKQFUOIGCMTOVFOG");

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
    msg.setTimeStamp(0.719912033974);
    msg.setSource(10304U);
    msg.setSourceEntity(240U);
    msg.setDestination(37673U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.70720661065;
    msg.lon = 0.520972196863;
    msg.z = 0.42966594247;
    msg.z_units = 96U;
    msg.speed = 0.162283960203;
    msg.speed_units = 128U;
    msg.bearing = 0.387139105007;
    msg.cross_angle = 0.017730582969;
    msg.width = 0.950089075623;
    msg.length = 0.86859987344;
    msg.coff = 237U;
    msg.angaperture = 0.788482166518;
    msg.range = 8727U;
    msg.overlap = 32U;
    msg.flags = 200U;
    msg.custom.assign("QKNOSVBAWBEWJQTCNTFZGBMBBEGGIFKUKACRZPPVQXAMHPDTYMISLNMQDCAEQIDMEHCZJPOHIDQZRCLXKNAHUHRZVDMARKGWYPZUYEUIDYDQNBUNOLOJYDGPQCFMOAXEJOVFEHVRDCLGMMPFTYSJLXAWSBRVPCUWSJPJWRMGIIKNRKYJPXZCSHLVTKHYGAKTKLUEXWCHXTZDRNYTTGLVQIXSXZUNVBULZNTSGOFJFWWUIISXJH");

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
    msg.setTimeStamp(0.321788390088);
    msg.setSource(8746U);
    msg.setSourceEntity(23U);
    msg.setDestination(46U);
    msg.setDestinationEntity(98U);
    msg.timeout = 19123U;
    msg.lat = 0.102765148067;
    msg.lon = 0.462099021159;
    msg.z = 0.817278159555;
    msg.z_units = 68U;
    msg.speed = 0.573448643485;
    msg.speed_units = 250U;
    msg.syringe0 = 67U;
    msg.syringe1 = 158U;
    msg.syringe2 = 216U;
    msg.custom.assign("MDSQLTOZTPYEGQHCXVDBEXZRTSSXKPQVKODCPFKWMIZFKEQGATDGBXALXCDDWENUPWVCKGUYHLANJEIRRPRLOHXBEAFBGYIAILYQOSINSOJDUEHRIZFUIHTURGIBBZKMDVQDCTXLAFRSFNCFMGZSYGHNLVFGMWFVPWTXWVLQRWNTYJRPWOQSZAJVKBEACPMQOXEPSNPYDY");

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
    msg.setTimeStamp(0.425614473081);
    msg.setSource(59531U);
    msg.setSourceEntity(223U);
    msg.setDestination(38110U);
    msg.setDestinationEntity(87U);
    msg.timeout = 63297U;
    msg.lat = 0.963916245694;
    msg.lon = 0.581898630936;
    msg.z = 0.63156120594;
    msg.z_units = 207U;
    msg.speed = 0.343175427972;
    msg.speed_units = 206U;
    msg.syringe0 = 67U;
    msg.syringe1 = 204U;
    msg.syringe2 = 228U;
    msg.custom.assign("KEBVMWCCEMDWZPRGXAKTOZRCRZTFMCJKNNHSXRYIAQDAFPVEJZXTBJCAMFJRJXEXGWLZLICSQCNHUTYBFIMDIRQAETPPSFQUVYTPO");

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
    msg.setTimeStamp(0.176949602738);
    msg.setSource(34166U);
    msg.setSourceEntity(74U);
    msg.setDestination(2470U);
    msg.setDestinationEntity(220U);
    msg.timeout = 27307U;
    msg.lat = 0.358366400931;
    msg.lon = 0.73475744103;
    msg.z = 0.656034775929;
    msg.z_units = 35U;
    msg.speed = 0.425198203503;
    msg.speed_units = 149U;
    msg.syringe0 = 33U;
    msg.syringe1 = 89U;
    msg.syringe2 = 172U;
    msg.custom.assign("LXXCLDZILMNYNUXFMXGTWYGNKARTXZBXZHEYSWXWHMDEKJRKJJDIZYFOYXDNVZFDSIPSRTJXFTOEQWGFDOBURRJCQIRDPVVPPSSYJKNBWBUZOPWBEMTYZLGQXGHVEBHQMKHGKSPYKMDINKNVHZGWQIOBCOHNTDLATQOBAAHUPGZEJPUSVTVILEKVNIHPAILLQEECRSUWCAAUOFFQLSUOGSQLMIMGVCCMFOTAQNRHBFUJ");

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
    msg.setTimeStamp(0.733969710675);
    msg.setSource(18179U);
    msg.setSourceEntity(239U);
    msg.setDestination(57591U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.418194222318);
    msg.setSource(40750U);
    msg.setSourceEntity(151U);
    msg.setDestination(48699U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.745655225143);
    msg.setSource(51110U);
    msg.setSourceEntity(197U);
    msg.setDestination(63136U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.3786582513);
    msg.setSource(54949U);
    msg.setSourceEntity(49U);
    msg.setDestination(62310U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.325942298752;
    msg.lon = 0.973699189032;
    msg.z = 0.111944125197;
    msg.z_units = 31U;
    msg.speed = 0.293330614153;
    msg.speed_units = 8U;
    msg.takeoff_pitch = 0.993293911053;
    msg.custom.assign("KBFOVSGPTNYOIDUQQQYRHCGKSWWQYEHXEBDVOAJDASDOPNENBMLLIKZPTIPHDMKECHHZLCQYVXZGVBWZCFCGETOFIFJGTXDNOAMNUSCALDHZNEPAGHVAMGXURRORDKRUDJEUXXLYVRBNCJUMAJKKPIFFYTFOTSBRRZVYUXSQVCIGWTYTFBMTPSSKWMLQSMXQBBVUVZYWRPAZLAXHNMEEKGWLIQF");

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
    msg.setTimeStamp(0.715226472797);
    msg.setSource(32278U);
    msg.setSourceEntity(119U);
    msg.setDestination(20333U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.441243490906;
    msg.lon = 0.0993059157185;
    msg.z = 0.412164323156;
    msg.z_units = 107U;
    msg.speed = 0.841344871146;
    msg.speed_units = 199U;
    msg.takeoff_pitch = 0.621683955783;
    msg.custom.assign("EBOTTYEJRNXTYXCUKKZYVVPSARFDXTCJVLWISVAQFNQADEAWJUGQZMLDLYPPKMNMLBRHSFTGXPMM");

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
    msg.setTimeStamp(0.267860182112);
    msg.setSource(4444U);
    msg.setSourceEntity(7U);
    msg.setDestination(36808U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.616493050304;
    msg.lon = 0.00768578773288;
    msg.z = 0.265047897435;
    msg.z_units = 94U;
    msg.speed = 0.610691879032;
    msg.speed_units = 103U;
    msg.takeoff_pitch = 0.328218520225;
    msg.custom.assign("AZKBNRSVCDZTZCTYKVELYAPODDWCAEHHHFADACBQELFCTOXQVXGJJBNYYPYOYNENKBDTIEHXRXZEVOLIQKPKEEQSWPUUHNMIYMUNHGVPCQPJBSBWDKRUOVNXUIZPUTWMTQFWRCAMJKEAWBXTGSIXDVJQ");

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
    msg.setTimeStamp(0.808816369145);
    msg.setSource(5256U);
    msg.setSourceEntity(49U);
    msg.setDestination(41827U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.364160449296;
    msg.lon = 0.998951779813;
    msg.z = 0.708944372781;
    msg.z_units = 64U;
    msg.speed = 0.741808712552;
    msg.speed_units = 224U;
    msg.abort_z = 0.878594877751;
    msg.bearing = 0.0572402237328;
    msg.glide_slope = 247U;
    msg.glide_slope_alt = 0.389295619298;
    msg.custom.assign("DQUCEXZNANTDPSWXIMVAJMCJMXMATLRJFSALJIXGRDKUQZSNPADXFRWLLPCJCHGQEHGRODJGSAMWHURVDYDQYABEPWZCEMBSILZKZPKXBYVVNQOWQGIMLQRHCJBGIRMAZFT");

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
    msg.setTimeStamp(0.331394516376);
    msg.setSource(24819U);
    msg.setSourceEntity(143U);
    msg.setDestination(31826U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.0549985618268;
    msg.lon = 0.00999867428998;
    msg.z = 0.782602333224;
    msg.z_units = 164U;
    msg.speed = 0.173082371761;
    msg.speed_units = 164U;
    msg.abort_z = 0.504290524998;
    msg.bearing = 0.0576030110175;
    msg.glide_slope = 142U;
    msg.glide_slope_alt = 0.705944164026;
    msg.custom.assign("HSLGZUCONFEDUPENHLLAVCMGZRTMNTRIXPGQR");

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
    msg.setTimeStamp(0.461251077099);
    msg.setSource(39979U);
    msg.setSourceEntity(237U);
    msg.setDestination(17368U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.333405979984;
    msg.lon = 0.120692589884;
    msg.z = 0.295250456995;
    msg.z_units = 81U;
    msg.speed = 0.49919265572;
    msg.speed_units = 90U;
    msg.abort_z = 0.933538196904;
    msg.bearing = 0.98963889965;
    msg.glide_slope = 95U;
    msg.glide_slope_alt = 0.39997598496;
    msg.custom.assign("LLFCPZSNCPQCBJSAVVOLBJGTPBXIFPYKOQGWY");

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
    msg.setTimeStamp(0.68750240335);
    msg.setSource(53168U);
    msg.setSourceEntity(244U);
    msg.setDestination(63806U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.0506482104597;
    msg.lon = 0.351130071256;
    msg.speed = 0.279435066743;
    msg.speed_units = 226U;
    msg.limits = 103U;
    msg.max_depth = 0.988342637935;
    msg.min_alt = 0.202400744579;
    msg.time_limit = 0.86708127669;
    msg.controller.assign("QSMDXFCWLCASWRFXKZUUPEXWHLRYAYV");
    msg.custom.assign("SOHUVQZCQSSNLOBUJSFDKHBJOTTILKJVKECXTBBNIPCKRKZCFWEYUMJMYNJNTOZPVEEPFDCVWWJLBHRQAAHNYAEMMYSKWTUQSXKGOGHUCAXKQQQNDRRNWSTVEFLINXHDDPXPBTJHLZXGMITHRFIGIQTEWAMJFWZZ");

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
    msg.setTimeStamp(0.323608804129);
    msg.setSource(35058U);
    msg.setSourceEntity(198U);
    msg.setDestination(173U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.270307429924;
    msg.lon = 0.193999857318;
    msg.speed = 0.469612891339;
    msg.speed_units = 40U;
    msg.limits = 2U;
    msg.max_depth = 0.387441457064;
    msg.min_alt = 0.0827689848743;
    msg.time_limit = 0.445470748611;
    msg.controller.assign("XBYDWDBIITQPRYNELQEKDAEVOORJUUPFXBVEICNOONSBSVWHBIBFMOOWJHTXJRECPJFYSXKHVJMITQVTNYUKZZPBYCXWCSQWIXEHRMKLAZHMWUIPMZLTKDKJRWZOGFMLRNGQJLCWDLMPUATUCXPBAYYLZYBCCLDVGASVTNXSAXSWDZJNIUGCFHMTHOAMPGESZNT");
    msg.custom.assign("WAMUUADFJHIIGBGHXXJEJQQJFKGQVMOLBNUTHWDZDBRDFIYMGYYKLUEWKWUSBVRZRSFXFDLKRCOHONHIEHSLLXBGQJHYTBEUVTVTFMEOPSHAKRMWSKLTKYBCONVVAWHXNDTKOQXPLAXYFKSORDB");

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
    msg.setTimeStamp(0.76003323076);
    msg.setSource(20700U);
    msg.setSourceEntity(178U);
    msg.setDestination(5770U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.322575713094;
    msg.lon = 0.686885039118;
    msg.speed = 0.969298206455;
    msg.speed_units = 23U;
    msg.limits = 21U;
    msg.max_depth = 0.836867334387;
    msg.min_alt = 0.433325689048;
    msg.time_limit = 0.145489224731;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.310061455224;
    tmp_msg_0.lon = 0.945578620474;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("PRRNXQAPZMPCFHVRNSAYHBJKRYUMFTDIAWILARHZRVWKGSQBSJDMWIAZNFATFMDLKCGJCVQFNSDDXWBJMAVOVUBTNKMYFKLOWUVKSVCWYQCXLOFEOAXZZEVOGXRUNCHPIHUKOUMEJTWKUXIXAGWPTLWDNYPUCRDXLYJULDGVZNIQKETZBLPEONQHLHDYTGTJCEN");
    msg.custom.assign("UXCREOMYPXJRHULWEVBLCMQSQWLGEAIEBMUXGGDDIENUAUNSOYCBHLZVFKZVBJMADZDBHJFPUMVTDPYXPHMHFTWGORGZNLAQMVJSFGFRJKXEIEKLVOSQY");

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
    msg.setTimeStamp(0.690549126774);
    msg.setSource(48836U);
    msg.setSourceEntity(130U);
    msg.setDestination(23347U);
    msg.setDestinationEntity(144U);
    msg.target.assign("YNERKBNEETRGTCKSLMNVZXSFBWKCIFUUVYWYIIHIGRP");
    msg.max_speed = 0.00728412387319;
    msg.speed_units = 233U;
    msg.lat = 0.463568066477;
    msg.lon = 0.0704961020194;
    msg.z = 0.237711296497;
    msg.z_units = 32U;
    msg.custom.assign("RCAOTBPBKLBHEKOGLSSTIDRPRYHDAWGVNPJDCWXGAQUUKZPXTNVHEBRMRCZTBYLKZNOTMQWTGNEWXFJDPIUMCSAQBNUXVONYFFTEVIIEQDOJLWHQYHKPWZVZFQDSGNZVCXZCWBCIRAUUYIPPMRKYEYBKZHDFIIKMPQAORAJCHXYOSPWKEYMNDWXOQQKLGJJAFFJNNHYVJREXLLMZG");

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
    msg.setTimeStamp(0.0273222740123);
    msg.setSource(65490U);
    msg.setSourceEntity(117U);
    msg.setDestination(28484U);
    msg.setDestinationEntity(125U);
    msg.target.assign("ZXUQLHEZQNXXVQZHHJSKKNFSSWRLSBRBCVEFEIQNWCOFHPHDTWRDUKYLMYWSRMECRQXMNPDVUOQMXGESXMOUZJLJAVQIOP");
    msg.max_speed = 0.327732267148;
    msg.speed_units = 185U;
    msg.lat = 0.628428569505;
    msg.lon = 0.853179584935;
    msg.z = 0.47356099698;
    msg.z_units = 128U;
    msg.custom.assign("WWPADMSEZYLBMLZXTSXTHZFIUBRGZTJROSJVUDESFPSZIMDYKLGUWMQGZRINWYQ");

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
    msg.setTimeStamp(0.506032931777);
    msg.setSource(21833U);
    msg.setSourceEntity(60U);
    msg.setDestination(35897U);
    msg.setDestinationEntity(225U);
    msg.target.assign("HPYHPYEQMBONUGYTINWKADQWIRMMXFXHFDCDPGVJSKSNAZBAXTTKJLMTTYOEZAGJQLXZVBSCPQIBJMILZMULLIOFKQXAZGUWEHITJDOHORCHCKUSNMZNAVHVVFCGUGYWEQFEPPKDQRGFGAXYVVWZ");
    msg.max_speed = 0.980791459941;
    msg.speed_units = 135U;
    msg.lat = 0.255318698309;
    msg.lon = 0.241708500084;
    msg.z = 0.593577543467;
    msg.z_units = 116U;
    msg.custom.assign("RYJGZIPPOCEKTHOXRJQZOETDAKEIEBNSJVNVZUAMCYFKAJAAFXZRWJICBJTLGBRRWLNWLICFKDFOSLSYDCZFGQFUOGCYCOUVTXASVMGKKBVPXUMGYHJNQAFOHULWFBPBK");

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
    msg.setTimeStamp(0.912745069909);
    msg.setSource(18522U);
    msg.setSourceEntity(125U);
    msg.setDestination(63580U);
    msg.setDestinationEntity(192U);
    msg.timeout = 46291U;
    msg.lat = 0.12843320028;
    msg.lon = 0.739389026826;
    msg.speed = 0.0905175064188;
    msg.speed_units = 238U;
    msg.custom.assign("GTXOJSWMMUUZNFTNAHXVADDYEFVOBPEJBXENSKZGHPKFKTHOUFFVSZLUKEGLZVLIVRKECLHFGTNQDWMO");

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
    msg.setTimeStamp(0.507068405269);
    msg.setSource(18961U);
    msg.setSourceEntity(145U);
    msg.setDestination(21795U);
    msg.setDestinationEntity(161U);
    msg.timeout = 26211U;
    msg.lat = 0.80319710964;
    msg.lon = 0.749762098277;
    msg.speed = 0.689484195921;
    msg.speed_units = 143U;
    msg.custom.assign("ZHDRZJYMTSHBXAGPECBMTSXQXYYBBCGICTDEIQRARJPKDSBHLZKPGOUGXGLTVNKOJBEBQUYNSTVRZAMPSSOIRLZFZLQFOFODISQBNVWXEVGWFASQYHDPUNTKDFAIAGXWVFGKDUJPELLHNTJIXVLZCAMMUXKUAPBRHGOJCNCWUCMEZCXPVAONRHAOWKUFOWJCDHDXENYSNULYUVITOKRELCWFIKBJTKLMZRHEZGNJYQQIPVJQYWFM");

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
    msg.setTimeStamp(0.263310955009);
    msg.setSource(25320U);
    msg.setSourceEntity(49U);
    msg.setDestination(25779U);
    msg.setDestinationEntity(86U);
    msg.timeout = 49232U;
    msg.lat = 0.465239191792;
    msg.lon = 0.620875674487;
    msg.speed = 4.01003037126e-05;
    msg.speed_units = 83U;
    msg.custom.assign("BAYOGLXHOEVSXAWMGRJFREYXRQHTRWHPLOGNZUKVAFNHBHXDOXNPCELRPCKAINLFPPRYMSTVEPDISQZFNYJWM");

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
    msg.setTimeStamp(0.537591300264);
    msg.setSource(19610U);
    msg.setSourceEntity(165U);
    msg.setDestination(15495U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.077814744171;
    msg.lon = 0.593602661343;
    msg.z = 0.413267256871;
    msg.z_units = 23U;
    msg.radius = 0.125913542957;
    msg.duration = 7020U;
    msg.speed = 0.451259020091;
    msg.speed_units = 154U;
    msg.popup_period = 27672U;
    msg.popup_duration = 3911U;
    msg.flags = 63U;
    msg.custom.assign("MROBYHJJFKWSYGDNVSYHHIWOBMQTXEVELFOJARGUGMZSITLYRFLFNGMGOUBFSXYEQVQQICZULNGQIDNNWIHWUUPFXEMFCS");

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
    msg.setTimeStamp(0.144818459564);
    msg.setSource(37573U);
    msg.setSourceEntity(156U);
    msg.setDestination(64622U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.168718680494;
    msg.lon = 0.407459819434;
    msg.z = 0.800191543642;
    msg.z_units = 122U;
    msg.radius = 0.865057314389;
    msg.duration = 18009U;
    msg.speed = 0.908136392054;
    msg.speed_units = 136U;
    msg.popup_period = 48391U;
    msg.popup_duration = 49028U;
    msg.flags = 128U;
    msg.custom.assign("RHEOMPGYHTNZSMPUGTMNHLLBTPBCXNZODDVNQQZQSMVORLDLXGSCJTKWULIFGWIUG");

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
    msg.setTimeStamp(0.288383752014);
    msg.setSource(65078U);
    msg.setSourceEntity(33U);
    msg.setDestination(38083U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.975856969415;
    msg.lon = 0.0540450612906;
    msg.z = 0.165488050422;
    msg.z_units = 54U;
    msg.radius = 0.828860283849;
    msg.duration = 28957U;
    msg.speed = 0.300317171431;
    msg.speed_units = 35U;
    msg.popup_period = 58543U;
    msg.popup_duration = 43895U;
    msg.flags = 100U;
    msg.custom.assign("DKADEVWSPZNZWQMXZZLYEPBVFTUWCRORQFYKQOUJSVMNGQRBYHKBHIHYFVXGYDPIVOXIVKENDIZCOUHJUHSTUOEXKZOQSOVOAJT");

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
    msg.setTimeStamp(0.381992884209);
    msg.setSource(30786U);
    msg.setSourceEntity(252U);
    msg.setDestination(29599U);
    msg.setDestinationEntity(36U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("UBBJGMBOOHJSWVNSYQVOJGSIXVGXWJNMTYISWKJIFGYDDAVPKOTDWCEVALRRFEHMZPLZGAZHMUVZQEASXWEKMSZMKTKTMYNJJQFADCVKQNLPNKOHHCXJETPSURJUROPFQHRBYBLNIUAKADMBEJABFTAZPCFGYLXTZTPONLGQSWKGCYWTBIVZNRUGRQXPQDRPSIZLHWENOWACXLFGIBEIFQDUPEHYHOMD");
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.498200474191;
    tmp_tmp_tmp_msg_0_0_0.z_units = 241U;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 56420U;
    tmp_tmp_msg_0_0.custom.assign("XORRRZWFAYDMGFPFIMKIFAGYSJPXVVTCEJCGLANGMEPDNPVSXXFIBLERIUCOTUYVRUDNHVGKGEMDPNJCTIROFLLJLHTFBNSPWABECIRKZ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::SmsStatus tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.req_id = 22726U;
    tmp_tmp_msg_0_1.status = 81U;
    tmp_tmp_msg_0_1.info.assign("CVTNZRLJVKMRBQALZYSYCDELRYZATAUZGHDZBZCSEUGQOHVWESIOHCRFIWDWPMGIBXQWTNMRFTCQGDXDENIIVJWNKZEQGLGXVUUGOUAQTRAMBIEUHEXOLQBJEPOBRHTCOODFMZLMAOJJPXQKNFJMJUSJJUVHUGOZPDBAGYRLUAFIBFWKVKHWVKW");
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
    msg.setTimeStamp(0.938785761617);
    msg.setSource(58931U);
    msg.setSourceEntity(78U);
    msg.setDestination(12345U);
    msg.setDestinationEntity(246U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("KNYAFBTOUPEDQBHYSGNCLEEFJXFEIXCYWRRXJVHPWAPIYMZVHNWOCAHIQLFAUZPDBLHIUPWISDQIOPGQTMDUSRSKIXNSHQHJQVWKRPZISXMEJDGERQVVSLVUFKFVXDEXMYTHODINGRRCOSMVMQOQGGFACFLGKCSCRCWBGGBBWHWLEOUOYJHVZTGXKEUNJWYNLZJVJQYPAZZUMTEANJTLDKDBCCYLU");
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("USSFAQTDGYPOXIQDQGIAPLHXPZQERYMEODJCURVOKIFMHHEHMHWPJIDOZMLWBJXONBTZPBLMHLGTSRWKBXKNXAJWTNMLXBDZHYVCLONBIKQKWWSCXTIREQNTCPXTEYSFVBNJEFGFZKSYUDDKNOWJAAMVUOCTGUARHEFSRFKWZOMCYECLVSUGPNYGDK");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::CrudeOil tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.040224623127;
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
    msg.setTimeStamp(0.674980255697);
    msg.setSource(45143U);
    msg.setSourceEntity(169U);
    msg.setDestination(29490U);
    msg.setDestinationEntity(91U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("WEGMMLVCCVPSXQHLURWZKYKQVYXSBNOFFPCWEMJINUUETCPAROFIOLYGBERETBPACJAYNLOKKUPQKYZHBQ");
    IMC::Dislodge tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 44290U;
    tmp_tmp_msg_0_0.rpm = 0.480009490427;
    tmp_tmp_msg_0_0.direction = 119U;
    tmp_tmp_msg_0_0.custom.assign("RKTSNADTRHEFNDEXCXXXTGZUQNGUKERTUHJXHUHIPBJPIENZRLSFHSJQGFRKUTNEAECJYKFSHOLQVWXYOGHPZRYPONDPGRAVRNMJBYIQWTIXSQDGMZXCJKPVPUMYBNJAMDCLIDZPSUETLWTLNRCCVZJVIQBSWYQKWENUCVDLSOOO");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::QueryPowerChannelState tmp_tmp_msg_0_1;
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
    msg.setTimeStamp(0.928080640364);
    msg.setSource(7971U);
    msg.setSourceEntity(56U);
    msg.setDestination(43009U);
    msg.setDestinationEntity(8U);
    msg.timeout = 22559U;
    msg.lat = 0.39045408743;
    msg.lon = 0.0549562597825;
    msg.z = 0.80995580556;
    msg.z_units = 113U;
    msg.speed = 0.638135170795;
    msg.speed_units = 35U;
    msg.bearing = 0.182880542345;
    msg.width = 0.992344281235;
    msg.direction = 67U;
    msg.custom.assign("ESBJDJWZUOLQAHTGCKPWXRIUNESRXAFXKBGWNSZKHXJKVWCFTPAUWEAENSYHVUOJCMQMWNECKKBFICDQZCNMMTYZLJRLTXGDVPDVOHBOLPVTUHEDRIUWJTNQPVMBFHHNECYDNLYXKDGKWOYYYBOEJPQCPWGULQVEVHIGPWFSGYXSBZPMLRULQJGQRBNTOTFZRFNTHKBXSLVARCZAARAY");

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
    msg.setTimeStamp(0.281108024694);
    msg.setSource(48937U);
    msg.setSourceEntity(247U);
    msg.setDestination(57468U);
    msg.setDestinationEntity(138U);
    msg.timeout = 28661U;
    msg.lat = 0.607274157114;
    msg.lon = 0.18635563466;
    msg.z = 0.31945366878;
    msg.z_units = 106U;
    msg.speed = 0.900408854118;
    msg.speed_units = 138U;
    msg.bearing = 0.930279662976;
    msg.width = 0.94183745905;
    msg.direction = 184U;
    msg.custom.assign("GAXVOUPSBRYIRJWYRKLV");

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
    msg.setTimeStamp(0.582501060228);
    msg.setSource(17178U);
    msg.setSourceEntity(56U);
    msg.setDestination(26162U);
    msg.setDestinationEntity(60U);
    msg.timeout = 12302U;
    msg.lat = 0.800654652786;
    msg.lon = 0.0905657158114;
    msg.z = 0.352689782886;
    msg.z_units = 163U;
    msg.speed = 0.650046155261;
    msg.speed_units = 30U;
    msg.bearing = 0.0103384433022;
    msg.width = 0.599246771603;
    msg.direction = 29U;
    msg.custom.assign("WZWSUVUTNCQGQTZTBTDPGRVUXCQQFFVRPUFZJYUYGBLJIVQSODABQZFMAKFCIWBNUWEBJLYKIFPDDEVHJITEAOWUDXGJUETBMRXNHJLBSVOWMANRIQICDJCXHWGXDZRYHWZSIYKYLSPJGACPLVBKOWLIQPTFOPBTSMOZECMALYXXMFGPSWNORQDCMEY");

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
    msg.setTimeStamp(0.257853521919);
    msg.setSource(16772U);
    msg.setSourceEntity(191U);
    msg.setDestination(39998U);
    msg.setDestinationEntity(34U);
    msg.op_mode = 191U;
    msg.error_count = 69U;
    msg.error_ents.assign("IWTCONRUDXOOTJETVLYYUSUQJJFBIHDHLQNICTKWYNRMUXEMFPYPWXEDKYXMZAJATWODVHPIVCAJBXZIOJLXKLWHZGYUSNPGLFUFUEGPUVJPVXWMSGFNNHSEYARRKUSCOGVBJEIHGOGMAOGQGSCEV");
    msg.maneuver_type = 16430U;
    msg.maneuver_stime = 0.680871270781;
    msg.maneuver_eta = 35076U;
    msg.control_loops = 3919512854U;
    msg.flags = 16U;
    msg.last_error.assign("QTFVZTGJIBWECSUELOFKWSYQNARJPUEABCXMZGFHGDLIIKITBNROMMBRNDHTDSGDNCQEELMWIXEQY");
    msg.last_error_time = 0.405794828032;

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
    msg.setTimeStamp(0.430824967218);
    msg.setSource(49485U);
    msg.setSourceEntity(82U);
    msg.setDestination(30444U);
    msg.setDestinationEntity(212U);
    msg.op_mode = 168U;
    msg.error_count = 108U;
    msg.error_ents.assign("QNXUXJKZOFXUKZLARAUVAHZGJPPUMOQEGXMQCFROFRXVYOZMVVANUDPLEHSXPTIMMWSRVCELTVMBCYEONAISHQJIFIBUHTNVKZCWRRLTQUFGNYSCPJSIQDCDKHTGOIZWALKIDESNYPYHJYXKEQASKVHHDMDTRSGWQUXBKNWLLVVJEYAPITXNBERHWFFGQTOPLGHPBCSOOUIFWLLYQG");
    msg.maneuver_type = 23436U;
    msg.maneuver_stime = 0.42349969446;
    msg.maneuver_eta = 28859U;
    msg.control_loops = 2452886266U;
    msg.flags = 135U;
    msg.last_error.assign("GLEEGGRBCFPWQHBVKYNEWOIMXIVOQQYCKIJZPFHVOTRVTDSEATNJPFUCMPPTUGXWNVQDDEWGABEAYATSCNIOJKOMUSSXLAHNHHSWKSPEAUFYQWGDVRXRLIYDUUDHDMIZLWTOCTFHECBZMLQUKVVZXQPLOOJQGMIKJPTGRYMULYMCLIOMZRXUUNRREVHZJBS");
    msg.last_error_time = 0.340788998909;

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
    msg.setTimeStamp(0.458048754636);
    msg.setSource(58761U);
    msg.setSourceEntity(195U);
    msg.setDestination(24993U);
    msg.setDestinationEntity(207U);
    msg.op_mode = 113U;
    msg.error_count = 213U;
    msg.error_ents.assign("FOUITZXLVSMZDAJFZSDRONQMTGRAEJCOKRIYCMSTYGQSHLCBICEQHDBFNHGTVNRNMQMOWKYRGMFYBAFWLRPQJFVPMAWFYPELKJVWPPNEGDTGPGSKZJKDNHOIGHQYSIXKGODJUZSOQXXUIVEYNDOVYHOZVFKUFBXKMZUHMCGJJHEAHXBAXROBPWLLTTRCKPISIXUUZXDLJTEARQNJEUNBCT");
    msg.maneuver_type = 62823U;
    msg.maneuver_stime = 0.456787620125;
    msg.maneuver_eta = 26851U;
    msg.control_loops = 71213600U;
    msg.flags = 105U;
    msg.last_error.assign("JGCTWMNGZGFRRBJDTVHZXGJBPLYECVYEBMUUYPTRUKQSHAQMVYHLYBASZZDQOIWMALSHFQEKOFZAOJICRCWUKZJYWOYSCPSFBBVVDCFIXQCAMIDZTVAUIGXKAIEYERXQZOCDPTIHOMQEJTSPVOCRGTSPTFDSOXKUKWUKMCVLIRHUIAPSXRTEXMKWRWMJNEJNFUHQWGKQZTFULJDNYDJBNLYXGVLDIFKONGGNSNLBO");
    msg.last_error_time = 0.5494992668;

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
    msg.setTimeStamp(0.0936043838288);
    msg.setSource(63685U);
    msg.setSourceEntity(108U);
    msg.setDestination(6237U);
    msg.setDestinationEntity(162U);
    msg.type = 152U;
    msg.request_id = 19580U;
    msg.command = 176U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 21425U;
    tmp_msg_0.flags = 203U;
    tmp_msg_0.lat = 0.415255757626;
    tmp_msg_0.lon = 0.705663711083;
    tmp_msg_0.start_z = 0.368289947674;
    tmp_msg_0.start_z_units = 129U;
    tmp_msg_0.end_z = 0.100596008172;
    tmp_msg_0.end_z_units = 201U;
    tmp_msg_0.radius = 0.256864191669;
    tmp_msg_0.speed = 0.589071360311;
    tmp_msg_0.speed_units = 246U;
    tmp_msg_0.custom.assign("ETFHDZRULTUVSVYJUILMUTFHKGFAROMBINKAXAIDYXXJDNASCIVTOJFPXTMVKTQGRKFVVXSWFCPZIYJPUSCVGJZDNQWNRLIDIEXZUHGMYWKQKSFSDKXGTFBEYRPHESIRQJTVELUYAOSLYOEZVDMZXONZTQWHYRJMCWWNJXBCLJADHF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7481U;
    msg.info.assign("CTWCWJVBPZMNFMCSVSJZIZOXCHOSHISZDLOOEPBGKQJWNKCYFPOYABFDKNYNDSFEFVPUHUBROXGLFSPGTDESYEZGXWRTRREWNKHLCXAGWIJGGTPVEEBQWADRNURAOX");

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
    msg.setTimeStamp(0.0293065683037);
    msg.setSource(15575U);
    msg.setSourceEntity(108U);
    msg.setDestination(47573U);
    msg.setDestinationEntity(106U);
    msg.type = 26U;
    msg.request_id = 45293U;
    msg.command = 33U;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 47644U;
    tmp_msg_0.lat = 0.977400983438;
    tmp_msg_0.lon = 0.988462521436;
    tmp_msg_0.z = 0.921930070497;
    tmp_msg_0.z_units = 251U;
    tmp_msg_0.speed = 0.540634744397;
    tmp_msg_0.speed_units = 142U;
    tmp_msg_0.syringe0 = 146U;
    tmp_msg_0.syringe1 = 26U;
    tmp_msg_0.syringe2 = 164U;
    tmp_msg_0.custom.assign("COBBHLKIZTURXIQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 45624U;
    msg.info.assign("GOJWYMBCSMGOVXHAKDSXRCGDDMOBWRUKBZVWPIVKKMRRKJPEYLSGGIXUQAIFNGKECLTB");

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
    msg.setTimeStamp(0.468153606443);
    msg.setSource(58729U);
    msg.setSourceEntity(85U);
    msg.setDestination(4538U);
    msg.setDestinationEntity(83U);
    msg.type = 247U;
    msg.request_id = 26855U;
    msg.command = 14U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.240174421013;
    tmp_tmp_msg_0_0.speed_units = 20U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 7844U;
    tmp_msg_0.custom.assign("JHBNAQILWGREVEUXJECGGBDKVHLJAHJNLJIANTMSDLRJXDYTQMVZVRDOALYVBXKFTECKMEGUZIBOTJYLZBLYLWZTNDTWVMWKPGSKOBICTOYSVFNIWWIDPAFAPSRDI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 1530U;
    msg.info.assign("IHMGBQKERPHKSSXKOCCRWOJEOHFLRPXBORNAEPVY");

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
    msg.setTimeStamp(0.473311202983);
    msg.setSource(6228U);
    msg.setSourceEntity(139U);
    msg.setDestination(62122U);
    msg.setDestinationEntity(6U);
    msg.command = 147U;
    msg.entities.assign("EOCXRWIPZYHPXBJZQBXDEUMCLIAFJYXJWWNCFHKWEXUSSTOSVQCGLJMMUHNQVRVABQYFRKLTIPOAFHCNZAYZYDLMOPQUSSVGDMLWXTVRRWISKPKPYZCNKBORTKFVHOLWTYETPNGIJLEJTGQVBEMDSKTJDXHNVWIANDCBVFKPNULEGDARQICJEBIBGLZQOUZHIWDFTGNMAWORARUHSQCX");

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
    msg.setTimeStamp(0.224296599799);
    msg.setSource(63393U);
    msg.setSourceEntity(236U);
    msg.setDestination(21780U);
    msg.setDestinationEntity(21U);
    msg.command = 223U;
    msg.entities.assign("YAWCHTYBRNIMOIAFDMGQRFHKPQGIESRRFWSFDCTCHZVOLLDNYHZQMOWUIHXSEJUHWNGSARCAKHEKDUGLDGBPEJIDYBUBBOYMXPLKNBGZJRJWMUVZKJSQOXRWKWCBXVXZWJAKJESIEVHBLYEXNCERPTAAMQVFVFXMENWIFYHPFTGV");

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
    msg.setTimeStamp(0.64024762408);
    msg.setSource(1056U);
    msg.setSourceEntity(96U);
    msg.setDestination(42793U);
    msg.setDestinationEntity(68U);
    msg.command = 32U;
    msg.entities.assign("EUNTLURDPTVFWBOLHIMUFUEHOKMNAGOZYFTYJAMBBKXFIDQXKPRXSVUYYPPTXMJCSIZUABPQXGWOGEQUIWBZRQHSDOXETHECANCWCSYQRDFCCDKLIJBIJPPXOAPZDKGLMRPGSQGHKSRMTBPCWNNLWIBEIVYGFI");

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
    msg.setTimeStamp(0.843706890558);
    msg.setSource(32766U);
    msg.setSourceEntity(79U);
    msg.setDestination(843U);
    msg.setDestinationEntity(239U);
    msg.mcount = 190U;
    msg.mnames.assign("AYURIXIGSVEZHFNUBAUYYIWCCYFEOGIGWWYZJZICCRPJMXUBVARPKZTKLDBQKMSSFKIGHZCFSQVVMOXRJVMQXALHKBTVDQAYIQRQBXZERNQOXUFOFOMPQDCMHRWUMEHMLTSPPNJEVIUWHTRGPSOHOCPGLAZPTKKOSTMLPNKDQHB");
    msg.ecount = 202U;
    msg.enames.assign("SLTNVIMNSAMQGPKNAKJBABYDDJOTQEPLZCVOCQIHYFZUBONKBQVPZHGCJRUJAAOQUFRCSVLMVEFISROCSCYGUDGRBPPJYWNTZSXDFRYLUGTXDNLSMPWOVLSHGKTPMXIRNNEGJMKJAZLXZWTPF");
    msg.ccount = 243U;
    msg.cnames.assign("INWNJAWAPZKYTHQFGQDTTFFMUZVYGTRNHNCREIYBCWSMLZYLHLMLGHWPYBWIIWUDTWPFQSLGKKSXDBVARBKKPCZKAQSUFUEOUTDMWQACNHIXEZEHXQRZZXJBERYIRFOVNHABOTJGQEJAKLJVVDDOVCIOIYRMDQIRBSNPJUJJGKSOREBGTCPXYNPGFCUQKCOFXLZBEEHSCNILFVYNSZJULQSXVLGWAZMDXTMHPROMTPCUJXUBVWEFAMPX");
    msg.last_error.assign("KZWLLYFCMTDLCEFTVZTJJUNOMJAVWMPBUNDAKPXEJYTXVRBDOIESJRYIFHQGELHZNCSDGPPXXARQZMAEMFZFRVQZVOHMGEGYCFTCBOSKUULWLPVHCSLWOUDXCUTFLRTZCTHEKWGTQO");
    msg.last_error_time = 0.824401769863;

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
    msg.setTimeStamp(0.909337443818);
    msg.setSource(15446U);
    msg.setSourceEntity(115U);
    msg.setDestination(21730U);
    msg.setDestinationEntity(227U);
    msg.mcount = 227U;
    msg.mnames.assign("AWAUNDKQSODWFXPBAUJIOMSMAGFUVJKFLLVSVAJCBOBNOZYFRJWDYJNYZIQYZLMXCNXQBPETRKQZTDGIXLPQOHKVKGCWJZMMKHVTUZEXYEGWHSRRFVPYGXJWPTEFSVMFFJZPANOSEGDPJRORQWRDBLUIS");
    msg.ecount = 97U;
    msg.enames.assign("YPCWDLUCLODNOYSBZNHFHBSZXEIUNISCGQEUIWOKSQIILMBLQRMLWBMYTNZPXIHGVELGXASUPPYTTJKSGZTRICRUZPYPWKPWZDXHARUMSUKCHNRQQBJHAYLZTXVRZRQAUVVJRQTAAKWUWKDLARXHDWFNFBMYTOEBMKGSBOMGDSOUXTEFFQBOIKAYFKFJEHYXYVVTLVNOEAECVZJGCMQIFJJPJIRDDLKMOEBGPNXNXCJFOVHPFGT");
    msg.ccount = 26U;
    msg.cnames.assign("CGJOQWUICLMGSLMEYSIEKHVGJRTZBMVDZASPHCNVBRXPXVFWZHUIOZTCJIMXDMOLJMBWSNUQZWTBCATIHAZFZDELTOQLPUDXDEBWMRHYFUMUFDWRPRXPGHTEHQCBSYQXTBLWFHBKHRCGRLOEJPJAQVUGKNWFVDOBNDKVAOQONIQLGFFVVBMCZZTSNU");
    msg.last_error.assign("WSPUIUAXIIWFGFCEZLAKKGVQINVSHZJLDVEGZVCKYAFCBAHBCNIAXAFXBGGYSVCKIHPDHMTBFRXHPJXOILXGQGUSQRMDGDHYYUXVHUMZBTXPSTVOENDMVTVORJPCCMAKUDTLDGJCABYGFXMKEIQXEJEADBMSNJZLHPUQTUWQWHYZMTJQZKJRJFRWSNUHOWBKROPVETOJSRZRUZIYLT");
    msg.last_error_time = 0.124606528991;

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
    msg.setTimeStamp(0.684583196366);
    msg.setSource(60414U);
    msg.setSourceEntity(102U);
    msg.setDestination(39736U);
    msg.setDestinationEntity(180U);
    msg.mcount = 240U;
    msg.mnames.assign("IFQERRZIHOOMGOGETORMMKNSKDCBRGOEGGSLQEXGXMPHRHXYLZWIOYEUUHMSNYYRXMNGAXBGXPUGAYQUVJFDFZPLEISNHSBTTVVNHWAITUIJIFSALQZSUVJDZCNAVFKQHLCFNEGIBPUIKJSJCWZVVRKLTLVSAYRBKRDTHXMZJDUBWDORPJLK");
    msg.ecount = 131U;
    msg.enames.assign("AFZRVXKMSSGILVJJCXMRECMGUXEKHKVQENFCNTELVDHSRJDFSTIYSFIWUVIDBVOEEXJZQHKRPDWZGGNINQUJYDPPAMOSZDKAQUNKM");
    msg.ccount = 6U;
    msg.cnames.assign("WUIXVREFGBFNVBBWYYXJXUFWLPSHMTBKRJDECCYCPERGQSURJDSZFQCRGIFJDVOMRHSPLVBCZZPASZHQGV");
    msg.last_error.assign("YCZVRCTFGSHNWBMVXUZDCRHBYQMPORPKMXSRPORYMHSADNVQZJLSEGWKUQDMZIXNBHPIWOSBEQINDYZJDAVUJFHEFFRPCWVRKWIGODUXTSPPBJTQNZCIJPVOCQWBDIYZYZEKQ");
    msg.last_error_time = 0.498166567786;

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
    msg.setTimeStamp(0.577044014416);
    msg.setSource(35080U);
    msg.setSourceEntity(229U);
    msg.setDestination(27061U);
    msg.setDestinationEntity(223U);
    msg.mask = 44U;
    msg.max_depth = 0.511149154573;
    msg.min_altitude = 0.826267463069;
    msg.max_altitude = 0.00887194399763;
    msg.min_speed = 0.478751465034;
    msg.max_speed = 0.0600020702591;
    msg.max_vrate = 0.428962653022;
    msg.lat = 0.999477516405;
    msg.lon = 0.0791230881491;
    msg.orientation = 0.455066435414;
    msg.width = 0.206850967508;
    msg.length = 0.849255478141;

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
    msg.setTimeStamp(0.678861163833);
    msg.setSource(4925U);
    msg.setSourceEntity(35U);
    msg.setDestination(39547U);
    msg.setDestinationEntity(237U);
    msg.mask = 94U;
    msg.max_depth = 0.825751397402;
    msg.min_altitude = 0.281340715201;
    msg.max_altitude = 0.262300974168;
    msg.min_speed = 0.979970144295;
    msg.max_speed = 0.885598346541;
    msg.max_vrate = 0.200341460788;
    msg.lat = 0.53263227257;
    msg.lon = 0.743120235387;
    msg.orientation = 0.1555169945;
    msg.width = 0.144359304045;
    msg.length = 0.526092129801;

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
    msg.setTimeStamp(0.214174794396);
    msg.setSource(65274U);
    msg.setSourceEntity(59U);
    msg.setDestination(9698U);
    msg.setDestinationEntity(177U);
    msg.mask = 196U;
    msg.max_depth = 0.339348651706;
    msg.min_altitude = 0.277967647953;
    msg.max_altitude = 0.528873736448;
    msg.min_speed = 0.605433563739;
    msg.max_speed = 0.52769883358;
    msg.max_vrate = 0.539231455089;
    msg.lat = 0.827616684368;
    msg.lon = 0.588059868421;
    msg.orientation = 0.575013671426;
    msg.width = 0.620489955265;
    msg.length = 0.592057107237;

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
    msg.setTimeStamp(0.236091505118);
    msg.setSource(25982U);
    msg.setSourceEntity(231U);
    msg.setDestination(20743U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.390558376724);
    msg.setSource(10130U);
    msg.setSourceEntity(143U);
    msg.setDestination(35133U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.0575687469839);
    msg.setSource(60993U);
    msg.setSourceEntity(33U);
    msg.setDestination(50823U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.30220244587);
    msg.setSource(8642U);
    msg.setSourceEntity(146U);
    msg.setDestination(16818U);
    msg.setDestinationEntity(110U);
    msg.duration = 32170U;

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
    msg.setTimeStamp(0.061242780103);
    msg.setSource(35170U);
    msg.setSourceEntity(173U);
    msg.setDestination(17589U);
    msg.setDestinationEntity(16U);
    msg.duration = 17277U;

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
    msg.setTimeStamp(0.855255963392);
    msg.setSource(21651U);
    msg.setSourceEntity(84U);
    msg.setDestination(36155U);
    msg.setDestinationEntity(69U);
    msg.duration = 32995U;

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
    msg.setTimeStamp(0.198240517867);
    msg.setSource(28300U);
    msg.setSourceEntity(201U);
    msg.setDestination(28738U);
    msg.setDestinationEntity(84U);
    msg.enable = 177U;
    msg.mask = 915514083U;
    msg.scope_ref = 1507740660U;

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
    msg.setTimeStamp(0.285727186858);
    msg.setSource(23576U);
    msg.setSourceEntity(60U);
    msg.setDestination(33613U);
    msg.setDestinationEntity(99U);
    msg.enable = 253U;
    msg.mask = 3719715652U;
    msg.scope_ref = 1864053494U;

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
    msg.setTimeStamp(0.386874328075);
    msg.setSource(35516U);
    msg.setSourceEntity(130U);
    msg.setDestination(37051U);
    msg.setDestinationEntity(40U);
    msg.enable = 114U;
    msg.mask = 2549899265U;
    msg.scope_ref = 1052524864U;

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
    msg.setTimeStamp(0.899051135474);
    msg.setSource(20011U);
    msg.setSourceEntity(98U);
    msg.setDestination(8557U);
    msg.setDestinationEntity(147U);
    msg.medium = 130U;

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
    msg.setTimeStamp(0.419565242752);
    msg.setSource(33326U);
    msg.setSourceEntity(14U);
    msg.setDestination(24838U);
    msg.setDestinationEntity(111U);
    msg.medium = 216U;

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
    msg.setTimeStamp(0.395342868124);
    msg.setSource(135U);
    msg.setSourceEntity(88U);
    msg.setDestination(5814U);
    msg.setDestinationEntity(18U);
    msg.medium = 52U;

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
    msg.setTimeStamp(0.670076934823);
    msg.setSource(46935U);
    msg.setSourceEntity(119U);
    msg.setDestination(30691U);
    msg.setDestinationEntity(60U);
    msg.value = 0.505952494741;
    msg.type = 133U;

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
    msg.setTimeStamp(0.335248246435);
    msg.setSource(64424U);
    msg.setSourceEntity(107U);
    msg.setDestination(4632U);
    msg.setDestinationEntity(210U);
    msg.value = 0.0788434876253;
    msg.type = 113U;

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
    msg.setTimeStamp(0.939762233958);
    msg.setSource(35577U);
    msg.setSourceEntity(157U);
    msg.setDestination(30845U);
    msg.setDestinationEntity(209U);
    msg.value = 0.387867084426;
    msg.type = 153U;

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
    msg.setTimeStamp(0.883200443701);
    msg.setSource(46707U);
    msg.setSourceEntity(131U);
    msg.setDestination(12942U);
    msg.setDestinationEntity(171U);
    msg.possimerr = 0.473273032218;
    msg.converg = 0.441334895524;
    msg.turbulence = 0.961690955042;
    msg.possimmon = 19U;
    msg.commmon = 129U;
    msg.convergmon = 10U;

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
    msg.setTimeStamp(0.627913359703);
    msg.setSource(51843U);
    msg.setSourceEntity(50U);
    msg.setDestination(7643U);
    msg.setDestinationEntity(21U);
    msg.possimerr = 0.201404043167;
    msg.converg = 0.499155840993;
    msg.turbulence = 0.616250976257;
    msg.possimmon = 150U;
    msg.commmon = 252U;
    msg.convergmon = 233U;

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
    msg.setTimeStamp(0.904693707294);
    msg.setSource(17830U);
    msg.setSourceEntity(195U);
    msg.setDestination(1698U);
    msg.setDestinationEntity(41U);
    msg.possimerr = 0.532459480883;
    msg.converg = 0.796699948842;
    msg.turbulence = 0.586663047613;
    msg.possimmon = 5U;
    msg.commmon = 224U;
    msg.convergmon = 24U;

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
    msg.setTimeStamp(0.500732732398);
    msg.setSource(3356U);
    msg.setSourceEntity(131U);
    msg.setDestination(17093U);
    msg.setDestinationEntity(211U);
    msg.autonomy = 196U;
    msg.mode.assign("HAYWKDFIJVMWFSJATFIIDKZKQBEBQUXOLXOFRGOBLGRYDHSWJLEUAXMHLJREBRIFFOQMY");

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
    msg.setTimeStamp(0.0642698432611);
    msg.setSource(55883U);
    msg.setSourceEntity(107U);
    msg.setDestination(598U);
    msg.setDestinationEntity(153U);
    msg.autonomy = 123U;
    msg.mode.assign("NBTODCJAEXMGLMSJKPZCXRWCY");

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
    msg.setTimeStamp(0.969173171028);
    msg.setSource(48624U);
    msg.setSourceEntity(111U);
    msg.setDestination(12593U);
    msg.setDestinationEntity(191U);
    msg.autonomy = 17U;
    msg.mode.assign("UWLYZCDVODTWOSTRMURAIMJHTCKPJYEKOAXGBGNSFPMYLDTCUPTSIYWULOSHAZCWHKFKSYKWVSCTPHVYTXFXZJJPMDBCFJXNDEFMOENCUBGQQUKZBOHJKWDFJDNYRQGKXOQAWFVUTGEEVZZGIXIHFMAZIQPTYMPIILCSIZLICFNVQXMGBMQNRMWGANELDHAHRJWXQDEVXRXOSOVPGUSRVZBDYBRLLWOEQHAK");

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
    msg.setTimeStamp(0.796024120464);
    msg.setSource(61319U);
    msg.setSourceEntity(212U);
    msg.setDestination(43494U);
    msg.setDestinationEntity(121U);
    msg.type = 79U;
    msg.op = 79U;
    msg.possimerr = 0.107495054429;
    msg.converg = 0.108217122308;
    msg.turbulence = 0.405422971998;
    msg.possimmon = 173U;
    msg.commmon = 138U;
    msg.convergmon = 144U;

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
    msg.setTimeStamp(0.0908606466178);
    msg.setSource(51744U);
    msg.setSourceEntity(160U);
    msg.setDestination(33971U);
    msg.setDestinationEntity(36U);
    msg.type = 150U;
    msg.op = 194U;
    msg.possimerr = 0.241883023905;
    msg.converg = 0.704717959625;
    msg.turbulence = 0.433668707986;
    msg.possimmon = 28U;
    msg.commmon = 148U;
    msg.convergmon = 93U;

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
    msg.setTimeStamp(0.86355023443);
    msg.setSource(56525U);
    msg.setSourceEntity(68U);
    msg.setDestination(61645U);
    msg.setDestinationEntity(19U);
    msg.type = 241U;
    msg.op = 230U;
    msg.possimerr = 0.626192293057;
    msg.converg = 0.00762465932179;
    msg.turbulence = 0.526886674754;
    msg.possimmon = 220U;
    msg.commmon = 70U;
    msg.convergmon = 32U;

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
    msg.setTimeStamp(0.0678675774492);
    msg.setSource(39783U);
    msg.setSourceEntity(40U);
    msg.setDestination(42114U);
    msg.setDestinationEntity(243U);
    msg.op = 252U;
    msg.comm_interface = 194U;
    msg.period = 11829U;
    msg.sys_dst.assign("YNGWKEIBWPSIKXPMIRELROZHXITWBCCHSLHKUXAQDVADOQBYFJZONQBTTETDZZOKQFSRMFPAIUASMNEUZ");

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
    msg.setTimeStamp(0.656979204127);
    msg.setSource(57112U);
    msg.setSourceEntity(75U);
    msg.setDestination(57240U);
    msg.setDestinationEntity(107U);
    msg.op = 198U;
    msg.comm_interface = 199U;
    msg.period = 29412U;
    msg.sys_dst.assign("RVQETEEGDLMZJAUYTNSXSLRUWLPMKLGFBRJZROCQSZUITPTQDRWAWVGUNFZNEAIOHRHTGUSBXJSTWPMGOEEPRIKOMFWOMWLKIOW");

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
    msg.setTimeStamp(0.257692897726);
    msg.setSource(24195U);
    msg.setSourceEntity(59U);
    msg.setDestination(49628U);
    msg.setDestinationEntity(72U);
    msg.op = 245U;
    msg.comm_interface = 83U;
    msg.period = 65399U;
    msg.sys_dst.assign("LGARYRQTTMYOGUUCOBIGZUBZENHXSJVLCRPWVHIDTVZBMFOINDAQONLJMGQERYBKUJSZGRAYQHYFPXBSUHVRKCFSVAKNQHJMFTFJBPWHMWNFRUXKZUIQHSLYCHOKXGEPLKGRYXDVZPJSYXZSKLOMCJWTLCGNICRKMEWVDBANUAFXWPE");

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
    msg.setTimeStamp(0.905205037616);
    msg.setSource(41524U);
    msg.setSourceEntity(65U);
    msg.setDestination(6790U);
    msg.setDestinationEntity(85U);
    msg.stime = 886653931U;
    msg.latitude = 0.136128638552;
    msg.longitude = 0.0525832210597;
    msg.altitude = 22215U;
    msg.depth = 56903U;
    msg.heading = 42303U;
    msg.speed = -9119;
    msg.fuel = 101;
    msg.exec_state = -121;
    msg.plan_checksum = 48482U;

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
    msg.setTimeStamp(0.831191444291);
    msg.setSource(33861U);
    msg.setSourceEntity(240U);
    msg.setDestination(25153U);
    msg.setDestinationEntity(143U);
    msg.stime = 3631068036U;
    msg.latitude = 0.807386543496;
    msg.longitude = 0.189238370964;
    msg.altitude = 65348U;
    msg.depth = 53702U;
    msg.heading = 57306U;
    msg.speed = 20593;
    msg.fuel = 23;
    msg.exec_state = 41;
    msg.plan_checksum = 53715U;

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
    msg.setTimeStamp(0.7520996714);
    msg.setSource(42066U);
    msg.setSourceEntity(32U);
    msg.setDestination(11685U);
    msg.setDestinationEntity(106U);
    msg.stime = 605541247U;
    msg.latitude = 0.481503879547;
    msg.longitude = 0.400075460689;
    msg.altitude = 5353U;
    msg.depth = 1196U;
    msg.heading = 33498U;
    msg.speed = -2481;
    msg.fuel = -47;
    msg.exec_state = 8;
    msg.plan_checksum = 51043U;

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
    msg.setTimeStamp(0.314366044318);
    msg.setSource(17926U);
    msg.setSourceEntity(43U);
    msg.setDestination(28464U);
    msg.setDestinationEntity(176U);
    msg.req_id = 41497U;
    msg.comm_mean = 230U;
    msg.destination.assign("UZDWHVCSAOSENERMMBIAGEAOVXWWIQXFMWFALSFTOGFIPNVMVLWXPGKASDFBTCGHEVDSZJVPLKNHXMRIHOSJPUCKIUQMACJUWAYJRSKUUEYZGQTTRVAJIZUOQHGTXMGJNNHMFYEJDDBXWBQCLVNFXYRCDCRKKHIFHDMFUQOAQYBZ");
    msg.deadline = 0.658025728188;
    msg.range = 0.441590571338;
    msg.data_mode = 204U;
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.215558065291;
    tmp_msg_0.sys_src = 32746U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("NEXXNSWWDICVEPEZAUASGPZIIPECCSIGYHVCKHRLVERRRVROATFGDGSGCXFEZKBRYAUQRYMMLCEWWLZWLFCAFDUTHQTMDLLJJZMYTYKNFJHDKCNGXVUBZNUKLKTPESJAABHNVVSOUX");
    const char tmp_msg_1[] = {59, -24, 63, -32, -77, 77, 103, 38, -121, 79, 9, 112, -39, 18, 120, 92, -34, 104, 6, -63, -100, 4, 89, 54, -103, -68, -31, -69, 71, 30, 97, -5, -103, 17, 35, 84, 40, 47, 118, 41, -97, -45, 6, 111, 72, -99, 100, 15, -94, -100, -125, 100, -94, -11, 1, -68, 11, 57, -64, -30, 109, 89, 55, 49, -84, 125, 67, 99, 77, 78, 77, 36, 118, -6, -105, -6, 68, 51, 57, -118, 92, 43, 39, 112, 108, 12, -88, -118, 49, -127, -93, 47, 101, 89, 85, -117, 88, -100, 75, -83, 114, 77, -103, -81, -102, -75, -97, -108, 2, 54, -111, -20, 35, -124, -76, 44, 65, 61, 24, 99, -67, -53, 53, 98, 61, -40, 115, 34, -53, -75, 117, -66, -67, -124, -51, -2, -50, -66, -97, 32, 97, -15, -23, 85, 65, -60};
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
    msg.setTimeStamp(0.628367115416);
    msg.setSource(15682U);
    msg.setSourceEntity(243U);
    msg.setDestination(16391U);
    msg.setDestinationEntity(165U);
    msg.req_id = 8412U;
    msg.comm_mean = 104U;
    msg.destination.assign("HTCKGCBDAIYTAENLYRBXXZYKOYMVGVURHAVDMDQUODMJGOLEGFFCFIEUKJOJWSPLASJHRTWNIBZSXQEVLFBOBVPCLPJGNSHBWTMIIWAQOQUQZGTACCQCXZPLXWTSCWPJKGUJLXMRDCUDRXIYYGFKBYQGOZKREUTWZIYVNDSHVBSZQMEIHLEKYLRIHAWWZZIKSHBETTNJHMQNJRUYOXNDPUHVSMCDERVTEMPFQPXOFVMUDALNXWN");
    msg.deadline = 0.518162909048;
    msg.range = 0.596125861089;
    msg.data_mode = 76U;
    IMC::TelemetryMsg tmp_msg_0;
    tmp_msg_0.type = 50U;
    tmp_msg_0.req_id = 2421041160U;
    tmp_msg_0.ttl = 61320U;
    tmp_msg_0.code = 22U;
    tmp_msg_0.destination.assign("YZSXQQWAESTBWXMWXRCVNGQZRXAAELLSXTGHTTOJDYNKUDZMZIOANURQZJPJJBRYEBJUFZNDLOLOADXKLFHJNTREKHYOUEDFXPZHGVOEYJFTTYFQBIGHHNTUA");
    tmp_msg_0.source.assign("TKPNXRNJDMXKXQSOQWZIEUOIOZLVCJQIPSAHNTGVEVGREVFMXPVFCPWYZUHXGBXCLGHNVWIFWIFTLWOBSKBZJXARWHDUAAVZDBGYGSPGFYUMCYJEYLJNVBIMEEADKYKDNLJQWMYTQSOODLJZBWHAWSRPPFTCTTQOZMUESTIQMNQJTXUCGFIBRHBCOOALDZILZWUDFAJFPEKMSKRGCIAZKKH");
    tmp_msg_0.acknowledge = 105U;
    tmp_msg_0.status = 83U;
    const char tmp_tmp_msg_0_0[] = {9, -58, -39, -9, 61, -11, 107, -50, 60, -61, -11, 99, 114, -63, 59, -98, -55, 85, -71, -94, -104, 19, -122, 36, 0, -109, -93, 0, 91, -111, 58, -57, 49, -102, -15, 38, -81, -68, 33, 61, -90, 11, -80, -121, -110, -16, -78, -28, 94, 31, 29, 126, 62, 84, -3, -23, -11, 84, -6, 80, 40, 69, -35, 124, -28, 120, -101, -76, -6, -60, 89, 113, 94, 120, 101, -121, 59, -65, -87, 35, -113, -112, 50, 101, 70, -92, -126, -106, 81, 76, 104, 72, 113, -76, 19, 37, 0, 83, 18, 34, -84, -49, -56, -126, 39, -112, -48, 30, -112, 56, -16, -13, -11, -8, 99, 10, 51, 105, -118, 83, 1, 16, 81, 101, -102, -68, -122, -113, 24, 111, -91, -11, -22, 53, 34, 47, -5, 29, -6, -74, -121, 38, 37, -90, -81, -65, 18, 26, -90, 11, -20, -39, 73, 28, 120, -21, 58, -82, 81, 108, -123, -39, -88, 123, 16, -96, 62, -14, 99, -39, 106, -16, -117, -42, -91, -123, 77, 35, 120, -10, -40, 68, 3, -37, 27, -38, 28, -29, -64, 83, 43, -56, -25, -123, -30, 97, -114, 20, -22, 19, -11, -45, -28, -35, 117, 42, -82, -69, 82, -94, 15, 93, -120, -123, -7, -23, -86, 106, -85, -120, 4, -122, -121, -75, -128, -36};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LLUDHGJBEJTHJBQTPEQSXPOURKWTKZDNZOWRUYYOIFRGWRVQCCMBHKADACGZZHTIUCGHSQIBBVJZZCSRPMTFQXKDDVKO");
    const char tmp_msg_1[] = {88, -53, 11, 16, 82, -125, 15, -7, -17, 103, 108, -105, -76, -45, -47, 10, -53, 39, -45, 54, 73, -2, -42, -5, -89, -25, -2, 54, 64, 9, 4, 77, 112, -106, -2, -116, 2, -108, 5, -32, -45, -59, -6, 94, -105, -75, 79, -65, -127, -60, 26, 43, 121, -5, 124, 79, 24, -34, 56, 74, 35, 25, -111, 55, -53, -116, -114, -68, 13, -59, 6, -13, 5, -55, 15, 113, -92, -35, 78, 124, -34, -109, -77, 21, 104, 50, 71, 49, 2, 91, 64, 107, -65, -38, -22, -119, -64, 93, 119, 3, -121, 12, 39, 28, -26, -1, 8, 103, 113, 33, 9, -87, -58, -55, -53, -49, 11, 9, -125, 79, 12, 24, 25, 34, 104, -112, -41, -118, 52, 80, -85, -21, -3, -104, 16, -63, -62, -69, 111, -75, -76, -24, -2, 92, -5, -125, 84, 99, -77, -13, -73, 74, -117, 85, 20, -116, -47, 56, -10, -89, -110, 105, -74, -114, -87, -115, 117, 111, -4, 67, 39};
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
    msg.setTimeStamp(0.018429388076);
    msg.setSource(42258U);
    msg.setSourceEntity(41U);
    msg.setDestination(43437U);
    msg.setDestinationEntity(224U);
    msg.req_id = 55593U;
    msg.comm_mean = 214U;
    msg.destination.assign("RAEIJKSVXNDKNPBJIFKBOKDMWHRFHPCNSHVNYWOJQGHIGSXPZBZPCETXWDJOOJBYMPBRUKXGIJLHWMTTCXKZMYZCKIEOJCMVXOFOZCSEUEQZFZDJPD");
    msg.deadline = 0.548413249217;
    msg.range = 0.883189095938;
    msg.data_mode = 251U;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("UYIQZUVEVOOVBKAGUMJPGXRWOPUEHZTBKNNSXBPVENTLJATACHZUBPKSRODCPSQDUYNVLUBAYGEC");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KQTBXLGVVUFHSCEYCRASHAOXTBOMCPHYCORCJUNWOKQIEGIMZP");
    tmp_tmp_msg_0_0.value.assign("IRMWNWUSTVPJTFFGTSADAWYSQGLAWCCMOMQBZXJJJYUQFKASOUTOHQHELCJ");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("USSDTUJFTMSPWDBCCTOQPNVONITTOQMKGZEXZZVYKR");
    const char tmp_msg_1[] = {24, -19, 58, 86, -115, -108, 14, 109, 62, 46, 36, 77, -3, 22, -76, 32, -25, -111, -44, -3, 66, 55, 72, -66, 54, 101, 67, -125, -106, 18, 101, 29, 35, -65, 102, -57, -39, -3, -126, 40, 84, 89, -7, -108, -44, 100, -106, -50, 79, -38, -23, -32, -118, -61, -111, 119, -52, -11, -89, 123, -15, -10, 49, -89, -8, 57, -127, -8, 92, 22, 64, -25, 99, -88, -88, 47, -115, -41, -65, -72, -48, 44, -43, -90, 112, -90, -65, 97, -15, 22, -19, -91, -89, -51, 44, 100, 8, 6, 65, -46, 26, -104, -92, -118, -90, 74, -85, 84, -102, -111, -59, 98, -43, 104, -37, 101, 50, -59, 116, 35, -106, 55, -125, 124, 75, 54, 1, -95, -18, 83, 68, -111, -2, -114, -102, -62, 58, 104, -70, -27, -127, 9, 121, 20, 76, 79, -1, 114, -77, 22, -58, -28, 107, 1, -64, -15, -46, 71, -119, -113, 28, 23, -122, 82, 88, 111, 54, 76, -111, -42, -21, 75, -125, -83, 64, -32, 113, -121, -47, 47, -84, -47, 15, -119, -116, 103, 2, 123, -90, -97, 45, -16, -80, 109, -100, 109, -119, -108, -90, -71, 78, -37, -57, -63};
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
    msg.setTimeStamp(0.164533774967);
    msg.setSource(25342U);
    msg.setSourceEntity(191U);
    msg.setDestination(63150U);
    msg.setDestinationEntity(132U);
    msg.req_id = 23403U;
    msg.status = 96U;
    msg.range = 0.408713800885;
    msg.info.assign("CBCENCOZUYDPHRAIIJGJKIZKVMYFKUQMTHXBQXSIFJAAKBQVZGNFSCEGSRPSXLBBBJZIFYYSJMRUWDUQFARESENWRDLCPEWSNJEPYRZVDKDKDVUFIWQZXNFWSBWCGNRMVLBQIXXLUFMGFZEKMXDOPTEMNQCUVDOV");

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
    msg.setTimeStamp(0.291025089608);
    msg.setSource(293U);
    msg.setSourceEntity(176U);
    msg.setDestination(40429U);
    msg.setDestinationEntity(60U);
    msg.req_id = 7308U;
    msg.status = 242U;
    msg.range = 0.479046626347;
    msg.info.assign("TPQRVHBTMNBVSNZYOVEHUAFMRZIKTCBQBJWKUNZSDSZLECOILDLOPGJVNQAQAMWESYRGJSWKMSKMYFXKTJLLRBDTCUJTQMRNOLTGCEWYFHAXOFQWBKNPDJCHPXFREUVCHVANZIIHYFPYJABEZBX");

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
    msg.setTimeStamp(0.416372416609);
    msg.setSource(44794U);
    msg.setSourceEntity(120U);
    msg.setDestination(46240U);
    msg.setDestinationEntity(131U);
    msg.req_id = 353U;
    msg.status = 28U;
    msg.range = 0.113481632677;
    msg.info.assign("DHVFCUKBLDOGFTDKYUOZJBASCAAQBXSJNMOFBWAHIZOJRCIXDJVNWKOIPEBTVLWZBUHEHOTRZQTPEOHDVSYFLVMJSCNQQMQBGVCYPPDYNACLFVWXPHGPSIHHXVJQXTBWDPKRMXULDJOUITUPYOGCUAMNQYIKWFESGAFKZMCXWQIRESVWZUTKNMPGNNAYMNRZ");

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
    msg.setTimeStamp(0.221453753798);
    msg.setSource(45111U);
    msg.setSourceEntity(250U);
    msg.setDestination(60611U);
    msg.setDestinationEntity(108U);
    msg.req_id = 51064U;
    msg.destination.assign("PCXWDAHZDCVOJURZTAWOUEGHPCHHJLBXYJCPRHAUQDXYUAZWQLKCYVNNFWVSDZRVOPVMRIRZAXMZDEAXKTOEURFWMXYPBSFEYUUPRS");
    msg.timeout = 0.283734018396;
    msg.sms_text.assign("XIUNSUKAKPRJJZDGHLTCXXZTLSAYHATJGKXWKUBAOLOBOCSMLRHBIRTPJFYSNQRYMHIHWRBHKKCPWUNPPPQXHZYEVPVJNA");

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
    msg.setTimeStamp(0.9637653173);
    msg.setSource(50296U);
    msg.setSourceEntity(153U);
    msg.setDestination(17181U);
    msg.setDestinationEntity(182U);
    msg.req_id = 8352U;
    msg.destination.assign("WQWZQOAILXEZZIRPORAUVNUJMBXJROSILEDFACLJVIYMJBTLDHLAGKFIUKCYSGIZEXOZTOOYOJUBJPQCRGTNKGHVKTTDVGQSXHAATPTKRRQGIT");
    msg.timeout = 0.719603652153;
    msg.sms_text.assign("UVANZOQPKMWOJZUBWQSBVLPJAHXOAMBMBIOBTIPVNDKSVSOHRTXGDLRIEGESLKBKQFRLFHJNQYAQXGOAUNHAYURADSZWMCDGCFKWMETKZATXOAWWYHHQNNGPXUHYVRBYKGYPZPZQCEISOJDWFVVTFCWZPVRRWFLNMCPBPCUOQITJKBLYDWEUILIEKHXGEZGUIELRCLTJFJRXDIMVGDFXMNQYJE");

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
    msg.setTimeStamp(0.250212216066);
    msg.setSource(59776U);
    msg.setSourceEntity(31U);
    msg.setDestination(33652U);
    msg.setDestinationEntity(95U);
    msg.req_id = 16077U;
    msg.destination.assign("IQBWJEYOCEXLQGRHHJWDKIUZAAYIPEWRAWJLRNONJZSMDQUIWMQFKHVMVBMUBIPYDCETKADLPOUVLKZSGNFNGUDLSTTSLWJVOFYWGCSAGMEWPIDQDSSIZRCYDPBIAPOVCUPTQRXFR");
    msg.timeout = 0.525498227495;
    msg.sms_text.assign("PBWQEFNHWYOSWBNUGRIGMFGAIDWLONRQYNVNBPZMBNITALYOLUWCUCGKQFSVVMEUMOMKXXKCTUXCTJLPEJFCEH");

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
    msg.setTimeStamp(0.149129208104);
    msg.setSource(2379U);
    msg.setSourceEntity(49U);
    msg.setDestination(14026U);
    msg.setDestinationEntity(4U);
    msg.req_id = 27246U;
    msg.status = 39U;
    msg.info.assign("DQVRCIMRQKCFWCOYBHSZNUVEEIMSBBCEUYLEEDNGXHNVZIPHOSKOFMJYYSDPLVEQTMXOJBMDKUUGJBINZWLLZ");

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
    msg.setTimeStamp(0.768637794792);
    msg.setSource(44847U);
    msg.setSourceEntity(30U);
    msg.setDestination(5058U);
    msg.setDestinationEntity(198U);
    msg.req_id = 19250U;
    msg.status = 212U;
    msg.info.assign("LSERBXSEUJTBHKOJNSUPTMRUDKIKQLVGWSJQVUFKEUGMKEDUOGNVFZXWBDJKTBQKXWNAZFWVGVVQATBLGRHSXWUBTPKHIXBCJQDAZWYRLJNVKIRTSHMRYCQQDHTVRFLLZOAXPVIAFJNOSYCIWEOOFBJBPCRPKSXZODPVOYCUFHQHNMHNFZGZXUPOXESIDAXYCFLOTGRIWDHNAEDJMYAYNAWUEGIMZCYLGECDTCTSYJFQPR");

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
    msg.setTimeStamp(0.499940581411);
    msg.setSource(29658U);
    msg.setSourceEntity(95U);
    msg.setDestination(40151U);
    msg.setDestinationEntity(32U);
    msg.req_id = 6807U;
    msg.status = 81U;
    msg.info.assign("NTYQMSETCWXCEUSBXZTMTQYQMAVBFRQJMLNTUJYGONZQAPABUXWZODKHHZUWVYXCLHDEEZGMHLPVXCKWDJUISRRSWFEINDJARLJDGIFGPGWIKITPDBAYLCZUOFPIUTFCZKGSZHYAXNWDVJGOOBBPAINPGEAGLKKULOVEYOWTTYSDWTLDNMSVZWEEEXXFOQISUBXUHKNFJBDAHJCNLFVRKVVRC");

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
    msg.setTimeStamp(0.74850278106);
    msg.setSource(51768U);
    msg.setSourceEntity(234U);
    msg.setDestination(44930U);
    msg.setDestinationEntity(161U);
    msg.state = 50U;

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
    msg.setTimeStamp(0.710688936434);
    msg.setSource(48420U);
    msg.setSourceEntity(228U);
    msg.setDestination(32904U);
    msg.setDestinationEntity(74U);
    msg.state = 135U;

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
    msg.setTimeStamp(0.468448384314);
    msg.setSource(59164U);
    msg.setSourceEntity(243U);
    msg.setDestination(364U);
    msg.setDestinationEntity(17U);
    msg.state = 108U;

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
    msg.setTimeStamp(0.553539036667);
    msg.setSource(4832U);
    msg.setSourceEntity(201U);
    msg.setDestination(16537U);
    msg.setDestinationEntity(178U);
    msg.state = 54U;

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
    msg.setTimeStamp(0.777314071717);
    msg.setSource(48618U);
    msg.setSourceEntity(19U);
    msg.setDestination(34570U);
    msg.setDestinationEntity(177U);
    msg.state = 211U;

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
    msg.setTimeStamp(0.230565022137);
    msg.setSource(23084U);
    msg.setSourceEntity(148U);
    msg.setDestination(54742U);
    msg.setDestinationEntity(128U);
    msg.state = 115U;

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
    msg.setTimeStamp(0.325560394524);
    msg.setSource(36208U);
    msg.setSourceEntity(52U);
    msg.setDestination(17825U);
    msg.setDestinationEntity(235U);
    msg.req_id = 37247U;
    msg.destination.assign("ISQXYNHPQXIWCOWVEKKDYXAZOZFLJERSPVKKVPOUAVONJMVAELBBCYYRVWBUWDGLBBPIJBLFLRCDVEWURONJNPNNHCZBGYKAYJTXEIIZYBRAEQPGMAONEMYDKIWFDDTEMTCCOSCSXJQHASDQLFLFXUGQZLHHOWZRHQXSFUUUTTZJUCVFOTBP");
    msg.timeout = 0.373301378353;
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = 23;
    tmp_msg_0.value = -555166747;
    tmp_msg_0.gain = 222U;
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
    msg.setTimeStamp(0.418670566107);
    msg.setSource(45363U);
    msg.setSourceEntity(90U);
    msg.setDestination(36945U);
    msg.setDestinationEntity(109U);
    msg.req_id = 583U;
    msg.destination.assign("SBZTAIIRHXPUXPCXABITWYBGCMTPLZMPETGHMNADUJAUCUTVNDLXKNAWKWMGPJGDWVGVPHCSYSQSWPZGDKMURYYKMDQKCBWNBKTFHYEEOIFPNOUMXJZQXSEJHQXDLIHJEOJLIOSDZEQPCKLFVRHWTNLUQKVZBEXZROMBNGJWUNXFYLWGRAFNZCMFPO");
    msg.timeout = 0.182324298396;
    IMC::MsgList tmp_msg_0;
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
    msg.setTimeStamp(0.546539957206);
    msg.setSource(43833U);
    msg.setSourceEntity(9U);
    msg.setDestination(34872U);
    msg.setDestinationEntity(205U);
    msg.req_id = 59627U;
    msg.destination.assign("ZIDGRBMMQAZBLJWSSHDRBNFVITMWCKXUCCQUHQNCHOVUCFBFJGIWOGAZEIPYTIKALXRPHHYOYRFSKQIKYFGPRWVBHQFVGDRJAUPQTCSNETSJIABDJXULKEPZXBQYGSYBNZKEJSOKIMCGMGAVFZUZLEMKDKBTQDCDPFOLVNZRORINYVTVJJAMUXJWHXGOTTQEPURYWFLZVTJNXBYA");
    msg.timeout = 0.791339058053;
    IMC::AisStaticInfo tmp_msg_0;
    tmp_msg_0.id.assign("TUXRLMKXJIWPYBPOIYBZJTDFKXWLAVWFYCHPGZMBBFTALOCVWXQDSMZOZNLPWTYKVCKEURLPBOWUNIPIGNURYQXJFNHMMHSIVHVUCDMKBMPSKYKQXGNVLOHAFHYCVZSQZCJEENGCECRWCSDTWSQJZJTFYDAETJCIAARUNEQUZRUQAYAVIDGHVFRUXRGTDSEMFZDMOSLTHIGLIGSJGEVTOKIBHRSEKPDDGOLPOFXHFABKBUOZYPMWNQWNQX");
    tmp_msg_0.callsign.assign("ZORBUVBEPEPFTKTKUXCILHBQ");
    tmp_msg_0.name.assign("XLXUAGRDKYLRTFINQNSGTP");
    tmp_msg_0.type_and_cargo = 120U;
    tmp_msg_0.a = 0.0439785576591;
    tmp_msg_0.b = 0.154167437294;
    tmp_msg_0.c = 0.603159956341;
    tmp_msg_0.d = 0.883909293251;
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
    msg.setTimeStamp(0.331181521148);
    msg.setSource(58495U);
    msg.setSourceEntity(172U);
    msg.setDestination(25195U);
    msg.setDestinationEntity(15U);
    msg.req_id = 36595U;
    msg.status = 99U;
    msg.info.assign("FFFLKFKUCEZJPYJBSAREZSWSONVLFUUVGUMEZRKUMBBMPZHEAZICXDITPHJCFDBDTAWXPWJDEGZCIIIIJJDYBWHAZZAMQOQTTYEGSXUMNLVFISQPWWLYQGRGEVRFCGWJXTQYJIUFCUYGSRXPEBXUTALZNVTHUAKSSOCNOZHPGCBQOBXKLONNANWEDDHIVCNMLOVANOQRYCVGYHQNR");

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
    msg.setTimeStamp(0.712426447574);
    msg.setSource(31881U);
    msg.setSourceEntity(104U);
    msg.setDestination(20032U);
    msg.setDestinationEntity(100U);
    msg.req_id = 32944U;
    msg.status = 176U;
    msg.info.assign("NZHTEJVFAQUUNVUFDVLDOMSATKBBAIBNNFEIPCILANQLYUBWZJGCZXLUCKRISYABPIUQFAEWCXACOEOFPDDDBXHTOOIQMQYFHCAOKVMSDGXQCNZWJLFLGXUDVFXLNDFUPHMFSTRQYHRYSNTWREPNGSEPWGTZTCZGKEEHUJYTNZBJSXGKRPQZVM");

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
    msg.setTimeStamp(0.269131114136);
    msg.setSource(26000U);
    msg.setSourceEntity(44U);
    msg.setDestination(23880U);
    msg.setDestinationEntity(87U);
    msg.req_id = 42887U;
    msg.status = 137U;
    msg.info.assign("RWUTGZQCWNFEDHOXJLGAQNWXBRGPACKSTZLJLDKL");

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
    msg.setTimeStamp(0.0700449727383);
    msg.setSource(57029U);
    msg.setSourceEntity(52U);
    msg.setDestination(29001U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.138768352896);
    msg.setSource(36231U);
    msg.setSourceEntity(106U);
    msg.setDestination(44569U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.740916738747);
    msg.setSource(53275U);
    msg.setSourceEntity(176U);
    msg.setDestination(467U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.629644446043);
    msg.setSource(37775U);
    msg.setSourceEntity(124U);
    msg.setDestination(3977U);
    msg.setDestinationEntity(54U);
    msg.plan_id.assign("OHNTFUXBDNYOSBYEMHYRAYO");
    msg.description.assign("SXMNFIFZLOELYJJVHANLAHPZMCPSVCROHOOVIZEVUGOKXAZIIGCFCSOENEJLIXSAXQEZQUVNEAXRKUPSGWJPNLJVGIDYHBSDGTHASKZFYWQRHECJCPFPQCZQJEFPITCURTNUKUKMYBLAHWNDTDTKUTDAARVRCZXMGBMXYEW");
    msg.vnamespace.assign("HLGUEGBMEMBSQHJBWKVSEQMYZYVTTSFTXNCXJXPHVZEDLGANEOPBJGMVVHWRRPXZCIKQJHHAUYPDUZVZLWZRXKHFKXAQUKZQ");
    msg.start_man_id.assign("YKQLHCHNCQZQIGTDSDTFRCXKXSBEJVODRVDDFRUDJGVMLHJFQQOOPMTFKRPXCXMUNXSZACKONWTBWZEIUCGGDWNWFJDXKGYMIOZPSZJ");
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 1231129097U;
    tmp_msg_0.value = 86U;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::CompassCalibration tmp_msg_1;
    tmp_msg_1.timeout = 10218U;
    tmp_msg_1.lat = 0.526949919172;
    tmp_msg_1.lon = 0.662143755924;
    tmp_msg_1.z = 0.112391276744;
    tmp_msg_1.z_units = 12U;
    tmp_msg_1.pitch = 0.198781359191;
    tmp_msg_1.amplitude = 0.234326014248;
    tmp_msg_1.duration = 52808U;
    tmp_msg_1.speed = 0.813064056887;
    tmp_msg_1.speed_units = 65U;
    tmp_msg_1.radius = 0.911021692334;
    tmp_msg_1.direction = 140U;
    tmp_msg_1.custom.assign("NCRCSYYEEXFJTRZEIQZYLZJHSBCQ");
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
    msg.setTimeStamp(0.381617434605);
    msg.setSource(45519U);
    msg.setSourceEntity(185U);
    msg.setDestination(4361U);
    msg.setDestinationEntity(216U);
    msg.plan_id.assign("SJFCHJRVGVCOJJERGBZXXVRSNWSLDGSMLUEIKTBFIXPAZAUGKCNPESJMMYJMBBZXUHWEZVNQKUDKQSMTYPBFRSLEFPAJGZWMMWFJQLBWP");
    msg.description.assign("JEPCUUJEWYDBDAIFFVKONGRLFJZMMSIVIWBVVBCTLUUVNKPZHKUHRMJXVYYTVHAGQXSDHXMDBKCYAQLYJE");
    msg.vnamespace.assign("SKOMYVBONXIDCTSXBTLRUQBKHVXTBDCPUAYFZGJHOHFQTQLPKQPYPQJFEOYKGZSMIQBXGHJKXNYGIXPGIGVONDYHDNJFKIADXTQDXSEGUGZCVMTFNBSUDZQKRZNO");
    msg.start_man_id.assign("AZJFCHOEUBQJZZI");
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.722818457269;
    tmp_msg_0.m = 0.702302215391;
    tmp_msg_0.n = 0.759180982557;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.66526538993);
    msg.setSource(40346U);
    msg.setSourceEntity(51U);
    msg.setDestination(23748U);
    msg.setDestinationEntity(11U);
    msg.plan_id.assign("FOGRWBIICUYRLZZLGVDMZXPRUVCRJQBHQGGXKFTMIPGCYSJEWRQOUAYQKQYNZLDLQNVCJVPVXIOFFEXDDNRMYNVYMLBKFLWKBTFTWZIWNDEXKBAMDYHNAULOCAEOZAZPCMQSFPPRJSPZTSMEEMSAGYPDETPOR");
    msg.description.assign("XCJIDXNEACHVKLGNOPQUWFOETBMFPFUHWIRXSYTWKPNRVEYXUEYBISBDVOENSGCWMJSGZKNLIQDGQYMAZHKBTRQPXKVGPWYMSIRRLYOVHMCZAHGWUTHQNIXGQSQLCJUVNODEEPTUQMCVHICZZBEWUDZOZCRTLSLEFXQXJIRKBTOMYCDGONLGAKJZ");
    msg.vnamespace.assign("ZURLLAGHXDCDJPYHROMNAXIEATLVGRPRSPCJHFIIBKDQHQSNMXEGJOEMBITNOOACUQCGZKYQFAXPMLBFBTGPIXKQRYDHGAEWWVZCSLLKKCLYDLNIYTFLCUFNOTWBEQESKFRQTMAFOHUHTWXYXPYMREGTFJGQANVBWAVIUNUORCEZHBUXJUBSYBPWLSINWVPZUOUACDWSVHRZDESZWTDEKMVJSVMSGVQJMFKJFTJXZOBD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SDIWWVOJFDBWJXEZSRXJUSGBPHOAQKQFTUBHRKDNMGFSUAQLVHIMIYPGDSTGYJXTTNOQUIXUCLQGRTQPTHANTLHNDHPOZAHMBAHWOCHBUKIVDPQACKKYG");
    tmp_msg_0.value.assign("VKPDEGRVTSZMUADCXHYAINGXVIECIMRIBWBPSTDJFQTIBTMGVKFHWAVJAAODTSPYXISESQWNNEAFWEOCCRRXENQHIUWPZFULHLYBMVIOPNWOREFQSBDMUMZZPHPUWKVEYSYLTROGJGRDBXYLCKCUCTJZXUNDGQOKYBPNVIFJORBRFUILWSWQHRJUNKVOZTKMJDLTFBKXCAUYMSFHDWKLZHNXGNBHYJQAQTCQXOLZYGMLDASAF");
    tmp_msg_0.type = 10U;
    tmp_msg_0.access = 223U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KAFCTEFRGVJXSYLATZRLKIKQ");
    IMC::Land tmp_msg_1;
    tmp_msg_1.lat = 0.83252954152;
    tmp_msg_1.lon = 0.246018926716;
    tmp_msg_1.z = 0.826816991395;
    tmp_msg_1.z_units = 19U;
    tmp_msg_1.speed = 0.407971453602;
    tmp_msg_1.speed_units = 23U;
    tmp_msg_1.abort_z = 0.24133818156;
    tmp_msg_1.bearing = 0.381528582359;
    tmp_msg_1.glide_slope = 61U;
    tmp_msg_1.glide_slope_alt = 0.0946877541852;
    tmp_msg_1.custom.assign("IGRMMNKGGZZAODBAEYOCASSMONBQLXKFAFXPNUGYNZJKQZLDTCRGBKLZIFTZDBUYGSQWEIJORXSSTYAAFHWJOZVNCGLVJGHNBUMCOHIKACSYXIQUIIRXTTLPQWSJFGPVHZIHXTOLPODDNCUOQEKKLEEATKWZJBKRZCUEAHMVPEHCRQBQBOYVQYTVVXIEDBUXYVMTIFCPMJPBM");
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
    msg.setTimeStamp(0.700719959334);
    msg.setSource(56735U);
    msg.setSourceEntity(29U);
    msg.setDestination(26235U);
    msg.setDestinationEntity(40U);
    msg.maneuver_id.assign("TTOLPJPIDPQANPGBDKSLGWHUELVWTKTKMVZBCINEKLMVYTIZUFYYJVAZSIMASGLSSZVOYZBFURKSOFUJUXHNGEDKIHEMXDJEUHDUXOBKBUEOYQDZWWWFFGZFVTGOQFOREREJHPFGUALWWWWFBJCBBNLOLNXRRAVGXMCQQBYXDRMMARJGBCLCSSRPJZMECDFYRXPPIITUTPNXLAHYXVDXIKCGHVVNICMTSOQ");
    IMC::ImageTracking tmp_msg_0;
    msg.data.set(tmp_msg_0);
    IMC::EntityActivationState tmp_msg_1;
    tmp_msg_1.state = 97U;
    tmp_msg_1.error.assign("EVNXWUFNIHTVBVJDOFKHWJQIPRMICKIHZTCEOXTXIOIOFUSTVARCSAEJWKCQOAMMFSLWYYYKBENVTBFSHDZVYWO");
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
    msg.setTimeStamp(0.440659220824);
    msg.setSource(56938U);
    msg.setSourceEntity(95U);
    msg.setDestination(29068U);
    msg.setDestinationEntity(16U);
    msg.maneuver_id.assign("WSCBMIZCXVTBHXKLDZLTKFQDPYLVTEVHUUOVVSJRDOLVKHGIGPSRGHAWIMCPUTQMRREWDFLJUSXWAIJMNXPBDZRNMVRGCSEJQOQABOZWBAFKTRXGQLFEQYOHHMXQBYCCICBSAJEAOAIPNWJDUAIRQZX");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.0013251204569;
    tmp_msg_0.lon = 0.0766579216508;
    tmp_msg_0.speed = 0.151331966012;
    tmp_msg_0.speed_units = 54U;
    tmp_msg_0.duration = 2012U;
    tmp_msg_0.sys_a = 3182U;
    tmp_msg_0.sys_b = 29085U;
    tmp_msg_0.move_threshold = 0.306956869104;
    msg.data.set(tmp_msg_0);
    IMC::Phycocyanin tmp_msg_1;
    tmp_msg_1.value = 0.479226887047;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Depth tmp_msg_2;
    tmp_msg_2.value = 0.777381539337;
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
    msg.setTimeStamp(0.646412718437);
    msg.setSource(61200U);
    msg.setSourceEntity(150U);
    msg.setDestination(60110U);
    msg.setDestinationEntity(41U);
    msg.maneuver_id.assign("FHKCFEHAAMFEQJTUEVBVXVPNNLITTMKSSYXBFYSBMYHOPAKSGYGVRXBDZWKJWLIDPGWVMHJUNQUXIFOPSXFCGUF");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 43792U;
    tmp_msg_0.lat = 0.327052792645;
    tmp_msg_0.lon = 0.263946415898;
    tmp_msg_0.z = 0.467900756749;
    tmp_msg_0.z_units = 180U;
    tmp_msg_0.speed = 0.315138081115;
    tmp_msg_0.speed_units = 71U;
    tmp_msg_0.custom.assign("MPZRIIDWFGHEKWOFHGJNSOAYPCFJDLUTYHYNCBJHOZEWDLAJVFNOZESS");
    msg.data.set(tmp_msg_0);
    IMC::AcousticBackscatter tmp_msg_1;
    tmp_msg_1.beam1 = 0.251221481367;
    tmp_msg_1.beam2 = 0.905504539017;
    tmp_msg_1.beam3 = 0.29805571983;
    tmp_msg_1.beam4 = 0.10099820478;
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
    msg.setTimeStamp(0.953149284486);
    msg.setSource(2624U);
    msg.setSourceEntity(10U);
    msg.setDestination(13011U);
    msg.setDestinationEntity(113U);
    msg.source_man.assign("OFMEXRHSTVZYFOMYVZXUICNMHLJGHQNYOKKPTSMZEUGVRZBGWISXSWFSJUDQQMUQSCAXRZAJNAARMNJQJFQPVKBKRCVDVXHYJBPSKLCWCUWJDDIUCHNCVTKSONZDRHIPRAFLTPOFLITGPBOXBZYUONTVPHLVAEIOKQXUTBNXJLLSIJMGGBGYECNOHIWRXCEDAEDTHTZYMZEEZGFWOCDULYMWFABYEUEWYDWJKBMITPSPDFG");
    msg.dest_man.assign("SBVLTFEZYSBGDRXLVYUWUOIHMIOTDRAWMZRVXVDJPCKPHOTVTCOBKFMAPSZNQQLSZ");
    msg.conditions.assign("HDWUCQXNOHNVIVDBNGYDUIONVUHJTULXJIESAMYTUNBLEDSQMWJBZJEUXLHFDMKHAOPSHOZYMLBUTQPMTRQCTQSPFOBVRPYLYRYEFSWEKVGWOZILGMFVZOPGGQUHFOZKNXFSOAPAANRCTCUJYTQFJAZAKQJRPWELSNWJHAPFDBPINKWZICZKMQLFRKHKOVCXKVNM");
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 43U;
    tmp_msg_0.list.assign("TMQDZDHQGGOWTTDMSYRZXIBYDQJHLJSKVRXSSAGFUZIFPBCIVUNREZGEBOELXLSPUMUVPOGNWTRBJUZTBJUKDQAYYERCKXILUGRPUXEZGTSCFARHFYPOCPDFBQSMZBKCLPFANMNQTUISHWIOHRLHCKOQQVKODYXVIWCAZMNNXVMNKDWKAAYQZVQNNEPAIDMKFAEEHJWBSJMLPTXJFWOBGVLFGTWOXSIWCOKYHRVFW");
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
    msg.setTimeStamp(0.463646753304);
    msg.setSource(5127U);
    msg.setSourceEntity(34U);
    msg.setDestination(23245U);
    msg.setDestinationEntity(176U);
    msg.source_man.assign("ZQQYTBJQMFHOXRDQCIQXKDLYKHKTAKXUBHTTKHDWMSWRIXXNEREKPCRHGOCFGCCBZHPELJBQLTDPBMGZEMKUYDYNXTMIXMDLJIJOYBJHSGDLZUEWHXPZFWNTLLFWEVTUKWICASPNDNLXYWGNGFABRFIQPVPDGITEOCORUMYVEFRGHGMZOLSWUOFBFMYSNWALSKSQCZUPACBTEPANJOVUJVNACB");
    msg.dest_man.assign("VMLVIWVUKACLBIZLOTFXPTVYSEYIYBFXNRCEVUYEOUNGWHAENFDQNJWLOBMZKZUJVFWKXGQWDWKWUFVQEOMBTISBTNQIGZDZLSBJNQOKRWOVHSF");
    msg.conditions.assign("UCQKLZDUMHJORICMIBKNYUPWLRDXNQETVHYSTHLBPRQXWFZIMJJLAQVOAYFSCPMVQOVOUUYENSUPQLMUFHR");

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
    msg.setTimeStamp(0.153412152139);
    msg.setSource(30942U);
    msg.setSourceEntity(75U);
    msg.setDestination(45272U);
    msg.setDestinationEntity(217U);
    msg.source_man.assign("LYLLFPMSZESROVXRHQGHDWMJAKRSQAADVEFWWEAELSSMKRZBVNC");
    msg.dest_man.assign("AJCHEWXZSWWBZUZOZSZDWAXWQXQQRCSUACHMHDHSIPTBTXMITQGZBSTGXXLTCDTMNQOHYBCGEXKMOUVVLRIDRFVCHCHRTMEZLDFYNELUIOWGNBEFGOXFYHEIBIESQJOEUYNMVSKJTRIQFKOJLFKVJDUEKHRDYMMPTDGKK");
    msg.conditions.assign("EJLSPNXQEZRMYEWCUZAVDJJAPLKHQLHMOLBUXGISQXWOFRIMNOYKNYYYMYJBTIXPJQPHTKCDKTHGCVAMBSGBWOVLUOZF");

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
    msg.setTimeStamp(0.894218732272);
    msg.setSource(64056U);
    msg.setSourceEntity(254U);
    msg.setDestination(12808U);
    msg.setDestinationEntity(85U);
    msg.command = 195U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UYHEYJUKVNBHAGOTTRMWKLSSPVQBTBMWHJEFFPDIIDFCYKCIHJIWATGEECKGMBSFABVMUDUHUQQFJOZYOXOPATOXLYRV");
    tmp_msg_0.description.assign("WQGMIMOPKZPTDUCUTGKSQBPJPOKCXVICLCKGUONHKWEEWQCYIIMPRVGVGZOOOXWNEDUDUBMQSUEDYEUEQTJZFNWFADNYTBWRLAULIBYKUXBFP");
    tmp_msg_0.vnamespace.assign("ODFDWCZKIIXNTCCQBAGYHZICATSLYJLVKNMZUYBUXQEWUPCKHQIAJNMIEIYECVQCMROCNYFEATSRAPWRBXOGMMMKEIAIQDPQAOBSYOJFVSTITKYOXLRJHRXZKDVNJDBFKAFYGPVOGPSCWSVHNEUHHRLWXOXVOUQHXZZVSKCDNYZPLVFWHUDLJ");
    tmp_msg_0.start_man_id.assign("TVMJDHRDRYESVZBFTYNMHFLPEHTBFJZKPEUKCRHNJPEUVPGOVVUGUSPIRMGMBQSZVCJZHCTWZBYDAN");
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredPitch tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.916403464543;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 63809U;
    tmp_tmp_msg_0_0.custom.assign("CESMXICJLUTSUYVYAHQGWJYQFAMZRUFFNIZTFWIXMJEESOTSGRNDYPBEOQPBZWGQWHCNPGUPOUPFELBISHNXGEJQOKXNMBWKHDXJIWWEYKVLHGIMJLHEDMTXCBAVFCDUUIVSPVCPPZKGDRSSKMOMWYZKRLIZXVYJFQCHSOHVIRTECMAUANZFVOOPLCBWDLQZYTZLXQHDVBLZOXGAIBGAMGRSTLKCWFVEQABRJYKUUNTR");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::Throttle tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.246965191228;
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
    msg.setTimeStamp(0.320077446347);
    msg.setSource(45073U);
    msg.setSourceEntity(125U);
    msg.setDestination(53926U);
    msg.setDestinationEntity(95U);
    msg.command = 105U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MIYPUCOEMVWQHXVBMFHLNWHOPCQXNQMZDVRORTQNJBTILHINKWFUHUGGPRPXNONUSZDYRMMFZZSLOWKAERIOH");
    tmp_msg_0.description.assign("QBWGCWBGFGOHCDDLETXZBRNYLQMYTVNHQJFRVEOEVPTUSKRQWSDXZVEYNKUKTTVZBTJTUSOJFKDSEVWTMSRMMWAFFRKIJPPXIJIUNJFXHRHBYEXCZBFQVUZWFYPI");
    tmp_msg_0.vnamespace.assign("WYPPGNUKOAAFWJUUXNVQJFYRCFIWBTLEZOXCZJVCMSJHFMQGDBFWRIG");
    tmp_msg_0.start_man_id.assign("XRTAJYOWKLUENKFOGTZKXAFRQJRWMSNVLKCUMBHDGHEYNXTOBTSUFGNDRJMUMASHBYQUMIVXTENKCPOJJZAFLVXZCGZWXYEASSNHGTFJRGB");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("HTNAXHMRWYLZAUPIKYQJNUTH");
    tmp_tmp_msg_0_0.dest_man.assign("JGTKXOZVWOMUOFRYNUSTKTBYHANKZNYIQOVFMCIUHPTEBSAVQHENYGSVNRIDJSPWUARPQAMDEIWXCEXJLVHMJVUBTAHXYQROJCUKWZKXCEJKYMKHWWDVRGBFPNLNBHFSXMGNBYGPGSUQEGIYNAKMNFLFZEPIJOXDLELPXIYDZDFMMWABRVAFPHEXQYCTLOWRTCXHTBZLSLRZLOGQDSKCUVWHQCIDIVZSMZGCRRZCTU");
    tmp_tmp_msg_0_0.conditions.assign("RXUQKYPCXYRBXHYZAGIBMDKWSWCNWYHSWOMSAESLILGSZVNHZBRUMFPQQWOPLOZODOFWPNLGPWMDMJEXBTPBCRZHLPGEDLDBIISNUJFCRFIRWTIXSZMVOJFRKMVXFZVEGVBNCQAHKCDVKUXVQDOQARXAGEUHEAZKHQMOJUTTJCCONLGCIYUDBP");
    IMC::PWM tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.id = 3U;
    tmp_tmp_tmp_msg_0_0_0.period = 1122594675U;
    tmp_tmp_tmp_msg_0_0_0.duty_cycle = 3213979168U;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::GroupStreamVelocity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.41587598802;
    tmp_tmp_msg_0_1.y = 0.768347465097;
    tmp_tmp_msg_0_1.z = 0.797551133459;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.984285467421);
    msg.setSource(9007U);
    msg.setSourceEntity(191U);
    msg.setDestination(38526U);
    msg.setDestinationEntity(72U);
    msg.command = 9U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DVXXWLAJAJOWKHUEKWTHSMOQFBOZVTGVSLPXUWHALCEPOMVJJTZCHVQGTIARXVPSYQNNJOTQPZDOIFRMLMNKQNXENTBFCALCJIYGOBXTVDCUBFRCLYMYVMUBKXRWHEHZGRUZSZKCONICEJAXSBWLKIRAPPMVBCTUNQFGWPATGFSIFGQHWLSZAKOIKUIGHYQYXDEJUMYOEFMNZWRUDJYDNDPLDPIQVSFDJHIMC");
    tmp_msg_0.description.assign("JZYNWRXRRVUUSCFJGEPIXOMCCGUQDLUETDXGZESKZRYYMXKPCEPBNTEBWHTMRSPNXNXHIATSTQEIQZVLNQFVDKENLXOQILFGKVUMSYRBDFOMGRHLFTBVC");
    tmp_msg_0.vnamespace.assign("YOHOKXGUHCGIGEBJZOBGUORCBKRRBFNQRIMSAHPYNJZCTGPHWBEUQQUAIIGWTQLWVYAGCWYKTTCKJMZVECJSMUQ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EGGUAJWIPTHWIKLMWWKDFZEJRBZQUDZHHLRKAFZOFYDHTBDPKNYOLLTVEBMTQMRUVUCJCHNCTYDWRVLOJNJFBLNFQOTUMNYXOXSKZQQKGBLMUHVACTBUIJOPABZQVMSLOGNXRXSTIEBBVPFCDBAGYRFTQGFEWNRRAAXESJTMWPUSDPUKYJXRMKXJDIPRISAPDGWYUHAHCYYSMOQVECSNKFICCMWSDIVGGAKEZXZEHFQVOILPNISNEXWX");
    tmp_tmp_msg_0_0.value.assign("XCMLYIAGNBQ");
    tmp_tmp_msg_0_0.type = 237U;
    tmp_tmp_msg_0_0.access = 152U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ORINRFHBWRTVIPAFXTSBDQNLTDXLZTYWTXSKESWKWZOFJZSFRTIXNSVXBR");
    IMC::UamRxRange tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.seq = 43204U;
    tmp_tmp_msg_0_1.sys.assign("IXMMMMQLPQSWQWESZJKMDGKUORSBCBKRNESPLHJXVI");
    tmp_tmp_msg_0_1.value = 0.675766734688;
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
    msg.setTimeStamp(0.884921967408);
    msg.setSource(7235U);
    msg.setSourceEntity(140U);
    msg.setDestination(41212U);
    msg.setDestinationEntity(109U);
    msg.state = 27U;
    msg.plan_id.assign("CSVBYKIPMEYFDYVGAKBPQGUNKDVLBSVFUQFZZXCTETSGIHCLOOGRKMAKENQKJCDGMXXPDWQXAPBXPBIQENHJQLLYDBRXLEURFLSZOYCHRMGKRAENJPRFGJQBMWSTRTYWTGPJVNWOXADLPAYVIHSDOXBBZANKVASTQERZOYWHHMYZYMUUDMFACWIOEIJJHTFRNPFQGNVOLW");
    msg.comm_level = 178U;

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
    msg.setTimeStamp(0.738650320404);
    msg.setSource(42270U);
    msg.setSourceEntity(80U);
    msg.setDestination(28849U);
    msg.setDestinationEntity(241U);
    msg.state = 6U;
    msg.plan_id.assign("IUCOAJINUALEFSINMGYHKODNEFFSWHVSNBNQTSGFNODJZHWAQEQXQWJSZRZLKBSIJOTRVAVCWUVZHPPWXCYZLMZXQOCPQIQTAMKADXVOLMDBJZHRFNLMPPHLSQKRIBBXXTGTWBQPUVIGRYBAKDLDZUKWKUHAIFDYLPMVUTCLCSJHYDEGYMFVWESNHTEYHSGRRCCOXYZKDBATBFDJFI");
    msg.comm_level = 248U;

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
    msg.setTimeStamp(0.609282091549);
    msg.setSource(7070U);
    msg.setSourceEntity(248U);
    msg.setDestination(40770U);
    msg.setDestinationEntity(76U);
    msg.state = 212U;
    msg.plan_id.assign("AIWDKCQSNSROVURWGQDEOTWEIDPJHBBIWRUPEYYTYXAHBZVDQFBLFAAWIAIYZPFVBRASREIELLULCUPJYWVCUSTUKXGFORHUFQMATCHFXRGKJVVTNHOBUWLBZVHUKFKLGGRITSCRZUEQFXSNKPOOLZCDN");
    msg.comm_level = 187U;

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
    msg.setTimeStamp(0.273504839993);
    msg.setSource(64942U);
    msg.setSourceEntity(186U);
    msg.setDestination(2447U);
    msg.setDestinationEntity(213U);
    msg.type = 109U;
    msg.op = 98U;
    msg.request_id = 10790U;
    msg.plan_id.assign("OWWBKFEZWTVNKZSSGMJENWYIQGHCXHMQMUHJEHRRVQUPADAMUANFZSMRPYSROHXZKJGJZCDTYTDREPCQSFUGDGRIRZJDLOLVBISLAOBQDXFYIAJZVJVCYMPIPRTHGCECESFTLUDNTLQYYTXFBFIUWLPBOCLNCHUNWTUAQYPAQXWBUODWXKCVOVMAPYRPDNJJXGPTBCSMVIL");
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 79U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZNGIHIMXOVAJGRJFJNSRIGTYRKIXDJFTTHAEDEQQVQMTBQSELPMXOBPHLLOLQQXCGW");

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
    msg.setTimeStamp(0.694825877159);
    msg.setSource(52638U);
    msg.setSourceEntity(117U);
    msg.setDestination(24214U);
    msg.setDestinationEntity(49U);
    msg.type = 184U;
    msg.op = 46U;
    msg.request_id = 65311U;
    msg.plan_id.assign("KCQGUEFNIXZMXMSTZVEJMPOOJFEDQIKYKFGTPUABFLPRIHBOEZVSQVQORLJT");
    IMC::EstimatedFreq tmp_msg_0;
    tmp_msg_0.value = 0.559187541983;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YWGXIEAVMVFLNVLKXAOPIWELONIIOUZTQGNSSUZMIMORLKDIMWZGRPTUDGRIKFVQAAUTLHJFZOWWNJTBNRHYTVOCDQQKIBENSYREFHGTBYAYTCBQGKDEMRCQRWPZBFH");

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
    msg.setTimeStamp(0.143491931983);
    msg.setSource(12563U);
    msg.setSourceEntity(91U);
    msg.setDestination(48964U);
    msg.setDestinationEntity(34U);
    msg.type = 115U;
    msg.op = 153U;
    msg.request_id = 42175U;
    msg.plan_id.assign("XUFNSJMGINVBD");
    IMC::TCPStatus tmp_msg_0;
    tmp_msg_0.req_id = 7305U;
    tmp_msg_0.status = 157U;
    tmp_msg_0.info.assign("RJDGDRQEBOHYNDFNMCSKFRZVALOHCSIUOYWKFOUUMAGPLHWZFQYWNCDCEQGGNEEWWPFMTXCCXQNNAUVXYXAFHRESSJYTRSUFMDJFXMKORRGWBONQDJBLPUPECETJVOAZPZVAXKCRXSOVMMDBDUTGQRQHNIQLUQPLHYZTDLAGZMGZVEIATXOVTHXWZECMSUXBJWPWIZLOG");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SNOIJRPZIYGELNOREQUVGURISXYFWPHWVDHKZOEXMPUPUHMBNKTIMVCOEZYOSEZZSWUATTBOVGPSPSGGLRWJPQHJACDYXYGEJXRLIXAXFVYHIQPKEWKKARILLKMPBQLDROCFXGVFJWYMFANVOBGQLUDSLJTCANNHMDRUBOCTQD");

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
    msg.setTimeStamp(0.652120563684);
    msg.setSource(52077U);
    msg.setSourceEntity(30U);
    msg.setDestination(63584U);
    msg.setDestinationEntity(21U);
    msg.plan_count = 12976U;
    msg.plan_size = 1657261419U;
    msg.change_time = 0.424062651526;
    msg.change_sid = 11930U;
    msg.change_sname.assign("PQYRIWSVUJJJGXJECQOEYVBWNLWHDJTOEGJDWLPKDSAWAPUUTAECLPEZZYOWKBRSHAHYBLPOZQNZETSFHFZIJGTQIBCPBSGSFEIZWWPMDBKFDZRUVLPFBUFVFXHFNQKDMCNXOHLYPCONHNRLGXLRIQGAGXRCJCEMPDHIGVUOAGHFUCMERVIWJOCSVLWY");
    const char tmp_msg_0[] = {-24, 112, 42, 37, -3, -23, 91, -5, -62, -19, 99, -54, -48, 119, -80, 83, 64, -11, -110, 123, -10, -124, 59, -24, 104, -127, 111, 70, 68, -5, 41, -26, 15, -30, 7, -67, 19, -36, -82, -98, -108, 88, -35, -27, -32, 80, -107};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZWBVPXSVQIOSMIARFKQMXZTEWYCGXFDZLPAYPSKRMQBJAEXRKFFQOMUUFHEEUPHTGDDHCVLPNSYDRSUQHMXKJFOBDZABTIGMZVVIEHJRKDWCASIMRSZXAHGQDMOLYPXIHPZYFPUPJZSAYELUTGONJBECWWKHRRQWJYBVHBF");
    tmp_msg_1.plan_size = 60784U;
    tmp_msg_1.change_time = 0.75703029134;
    tmp_msg_1.change_sid = 9308U;
    tmp_msg_1.change_sname.assign("VLQDAFAGTVCFTQDMRQXHIYRSDVNC");
    const char tmp_tmp_msg_1_0[] = {-33, -3, -77, -18, 104, -70, 75, -50, 21, -24, -22, 116, -45, -128, 11, 78, -121, -9, 65, 8, 74, 121, 74, -106, 85, -93, 41, -128, 24, -13, -21, 23, -50, -15, 72, 21, -123, 111, 68, -10, 107, 28, -7, 120, 22, -24, -127, -114, 92, 33, -76, -84, 38, 9, -77, -81, 35, -113, 45, -119, -42, -119, -122, 35, 45, -71, 68, 34, -55, 48, 56, -102, -17, -70, -57, -72, -70, 75, 37, 32, 68, -8, 18, 31, 6, 93, -108, -88, -38, 101, -124, -103, 115, -115, 36, 89, -1, -59, 48, -127, -16, 118, 82, -107, 48, -8, -43, -93, -65, -103, 41, -30, 19, 103, 65, -101, 31, 85, 60, -98, 86, 31, 90, 25, 2, 67, -11, 82, 12, 121, 42, 121, -72, -4, 4, -48, -98, 85, -63, -95, 24, 12, 7, -49, -22, -61, -86, 59, 45, -19, -88, 43, -46, -38, -61, -46, -32, -52, -102, 66, -33, 120, -3, 33, 18, 97, -121, 54, 72, 103, -8, 73};
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
    msg.setTimeStamp(0.466304127429);
    msg.setSource(63766U);
    msg.setSourceEntity(248U);
    msg.setDestination(24432U);
    msg.setDestinationEntity(68U);
    msg.plan_count = 2370U;
    msg.plan_size = 152453993U;
    msg.change_time = 0.508854958897;
    msg.change_sid = 48471U;
    msg.change_sname.assign("WXBRSFOMTVHCMHXCWUHZVAMATFGIDGKJYTRBDJXJLAMWFDREOJPWIARPYLITEXTQCXYWEBNUHENMMIQMXFQGILQYIGSNHRTCDEVWESODANJAEWHG");
    const char tmp_msg_0[] = {-12, -58, 71, 74, -124, 109, 60, 29, 95, 1, 33, -41, -91, 44, 61, -60, 86, 88, 65, 9, -32, -113, -114, -41, 14, -36, 73, 81, 123, 42, -58, 96, -70, 26, 102, -42, -62, 63, -125, -63, -13, 5, 41, 17, -109, -2, 69, 118, -11, -27, -6, 26, 82, -69, 105, -2, -115, 87, -125, 68, -24, -26, -83, 81, -39, -101, 108, 101, 101, -103, 104, 106, -104, -93, -9, 61, -40, 25, 36, -124, 119, -43, 16, -69, 3, 115, 49, 87, 14, -107, -22, -79, 85, 88, 60, -1, 93, -126, -114, -61, 103, 68, -24, 10, -60, -54, 91, -13, -83, 42, -53, -20, -87, 92, -93, -10, 43, -1, 22, 94, 51, -100, 45, -44, -75, -94, -116, 124, -32, 32, 24, 39, 37, -42, 44, 123, 6, 20, -51, 54, 126, 6, -92, 121, -12, 73, 74, 40, 107, 79, -64, 86, 13, 91, 46, -122, 118, 120, 68, 24, 116, -55, 10, -100, 73, -58, -22, -77, -75, -65, -60, -67, 104, -95, -11, 19, -53, 117, 44, -34, 112, 90, 114, -115, -20, 35, -30, 101, 2, -2, 2, -125, -9, -47, 21, -41, 102, -23, -93, -84, 115, -74, 35, 109, 22, 123, -40, -43, 87, 99, -112, -99, 61, -38, 15, -82, 118, 4, -95, -20, 120, -75, 43};
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
    msg.setTimeStamp(0.394792193437);
    msg.setSource(55460U);
    msg.setSourceEntity(104U);
    msg.setDestination(46276U);
    msg.setDestinationEntity(170U);
    msg.plan_count = 53287U;
    msg.plan_size = 3758105603U;
    msg.change_time = 0.382954622744;
    msg.change_sid = 13392U;
    msg.change_sname.assign("LPCADXIAUGPBCSFDVTDQRKNTGSCGAAVYVGWZJZFLHSYWOQWKGGPVFCXPNKAVKDMGHUMALTCUCUZQYYHVRQVUOKWUQLZORYEEHMKBMUYDUKISVEXZWAUAYHIMDPOMIQHCQCLTVDEZCJEWOHNISJCSLPBIRPSJPQLLXJJIRTXRPFVNTXNYFFXONQOGRXSKDYJMWZSHTEAJEZRLZTTROBIPEBXBHFJKOMIUKFOEZYEBWWXLNNJHSBWGNTQMGMNR");
    const char tmp_msg_0[] = {126, -84, 40, 37, -76, 76, -119, -105, 120, 112, 53, 87, -81, 53, 24, 15, -21, -41, 65, -28, -70, 21, -111, -85, 43, -63, 125, 92, -80, 71, 47, 15, 105, -72, 68, -128, 87, 54, 61, 26, -8, 48, 107, -81, 55, 92, 70, 1, 88, 47, 69, -101, -95, -26, 19, 91, -51, -92, -105, 52, 98, 57, -43, -31, 90, -31, -69, -71, 97, -35, -27, -98, 97, -77};
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
    msg.setTimeStamp(0.688104031722);
    msg.setSource(19979U);
    msg.setSourceEntity(32U);
    msg.setDestination(7464U);
    msg.setDestinationEntity(24U);
    msg.plan_id.assign("HHRYEWPOXBNHBLEDLJCWVAPILJYXZENIIEP");
    msg.plan_size = 16192U;
    msg.change_time = 0.435028559541;
    msg.change_sid = 20070U;
    msg.change_sname.assign("SHPGPMAWGXWJLEOKTLBJDXGYOSNCMYRPCNBMEWOZJNPGOZDQSSZPFDTTRBIZVD");
    const char tmp_msg_0[] = {91, 68, -34, 1, 54, -12, -58, -2, 79, 35, -16, 25, 21, -58, 68, 91, -92, 112, 30, -31, 72, -41, 57, 115, 103, -20, -31, -80, 86, -30, -60, 114, 26, -29, -16, 112, 58, -94, -126, 81, -57, 107, 86, 70, 92, 60, 18, -128, -38, 90, 18, 77, 82, 19, -112, -95, 20, -60, -35, 113, 100, -127, -57, -75, -88, -68, 22, 85, -114, -71, -17, -24, -65, 110, 126, -45, -22, -122, 100, -100, -27, -98, 73, -66, -4, -106, -8, 74, 46, 84, 18, 22, -54, -82, -51, 114, -20, 16, 67, 52, -100, -4, -75, 48, -96, 38, 17, -51, -30, -40, -82, 35, -9, -23, -108, -128, 76, -43, -19, 13, 103, 119, -101, 13, 10, 2, -41, 39, -85, -102, -22, 38, -74, 48, -7, 54, 20, 81, 118, 92, 23, -125, -72, 110, 6, 93, -81, -31, 104, -76, -117, -41, -37, 80, -122, 49, -117, 23, 2, -113, 9, 13, -26, -104, -37, -19, 12, -2, -89, -104, 98, 97, 106, -38, -44, 36, -76, 78, -94, -31, 86, 16, -45};
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
    msg.setTimeStamp(0.620819933525);
    msg.setSource(37467U);
    msg.setSourceEntity(23U);
    msg.setDestination(50047U);
    msg.setDestinationEntity(31U);
    msg.plan_id.assign("QCZHQBJLESXUQJNOVPEIEPDXEYTGYWPUWYFNBUMSOZCUMOQIRLGWCP");
    msg.plan_size = 18168U;
    msg.change_time = 0.741336449097;
    msg.change_sid = 42162U;
    msg.change_sname.assign("MSSQNLHDZTHUXZQCELUQYGDVLEXZAJBUURUPUFOHNGDRZUSZEMCSYCPRAUOKBCJMHFATPRJXBJSHCBPYNRAKAVQYLPSQIYDSGH");
    const char tmp_msg_0[] = {-114, 26, 20, -101, 65, 70, 42, -77, 91, 114, 99, -86, 78, -69, -127, -95, 46, 55, -127, -30, 109, 14, -6, -24, -18, -63, -128, 54, -106, 73, 99, 75, -85, -81, 35, 36, 74, -72, -117, 124, -70, -80, -11, -70, 54, -118, -42, 113, 103, 98, -33, -61, 44, 79, -68, -63, -125, -79, -68, 114, -40, 48, 124, 89, -58, 51, -107, -65, 76, 46, 6, -75, -94, -15, 117, 26, -63, -101, -45, 32, 94, 77, -114, 17, -90, -126, -119, 95, 53, 112, -2, 30, -127, -14, -4, 92, 82, 47, 68, -36, 75, 20, 77, -102, -28, -107, 18, 12, -81, 72, 39, 37, 126, 2, -28, 48, 106, -86, -20, -13, -50, 104, 55, 5, 30, -79, -16, -111, 63, 75, -52, -97, 47, -72, 111, -126, -86, -57, -54, 45, -100, 6, 109, 79, -70, -22, 110, 111, -115, -53, 111, -62, 57, -17, 45, 58, 68, 9, 8, -3, -106, 81, 116, -44, 6, -18, 0, -33, 16, -37, 56, 63, 69, -7, 52, 53, 82, -34, 2, 22, -87, 89, 47, -2, 15, 67, 77, 69, -11, 43, -121};
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
    msg.setTimeStamp(0.853972385839);
    msg.setSource(42044U);
    msg.setSourceEntity(227U);
    msg.setDestination(18411U);
    msg.setDestinationEntity(84U);
    msg.plan_id.assign("LPVBCKECEOUOPZFSENII");
    msg.plan_size = 44829U;
    msg.change_time = 0.518818259538;
    msg.change_sid = 35401U;
    msg.change_sname.assign("PQMUXXXQKQNTATFHLJACPVKJAJAOIPKPZFLGKDGISJSPFRWNSDJTWCZDEWGQVUTVABEPHFYJCPBHMRCPCYGSPYVOSQPKBDMHQROV");
    const char tmp_msg_0[] = {37, 118, -75, 74, -110, 82, -62, 109, 44, -64, 78, -58, -93, 2, 45, -86, 108, -62, 13, -25, 78, 115, -10, 108, 91, -92, 5, 18, -79, 32, -96, 7, -68, -30, -20, -30, -22, 79, 59, -42, 108, 0, 103, -22, -17, 104, 114, 49, -61, 68, 51, 21, 17, 18, -20, 13, -80, 21, -111, 126, 77, -4, -122, 113, 71, -108, 6, 54, -36, -7, 41, 72, -111, -7, 48, 120, 85, 28, 49, 44, 54, -8, 55, -14, 56, 126, -96, -93, 92, 20, 83, 72, 50, -65, -36, -80, -110, 102, 89, 48, 23, -11, -36};
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
    msg.setTimeStamp(0.0488053427168);
    msg.setSource(20389U);
    msg.setSourceEntity(43U);
    msg.setDestination(29909U);
    msg.setDestinationEntity(65U);
    msg.type = 171U;
    msg.op = 230U;
    msg.request_id = 57049U;
    msg.plan_id.assign("XIBIKSZVHKAHGGMGZWQOJIRWXOIZFDXSIPIVENCIRTNYHLHWWSHGGYHDZYYDZFNJKCSUDORTDZAPGCWTWAMLCKKLUSDIBGYEPQQEFABHKDSMOTBARYVBPXUJMJVUCWVMTIRKAJEOQZN");
    msg.flags = 1754U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredZ tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.96477867398;
    tmp_tmp_msg_0_0.z_units = 119U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 54099U;
    tmp_msg_0.custom.assign("IUUZSWUQCTSNQFCLWYJOKYRKGYDHHYEJNYVQKVBCTWSPFVFYZMXNKAWADYPJZKGXPEIAODIOPLLRKJZWANIPDABABAMGWRGHDUVRWGOHVKCINFRMHRQTPKNHBGAWOCNISEPFEIDWSDUZZSM");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DJCIRMIEKTGRYXZZSEEVGYXBXWPDPIURRSCDWKTGBLSAIVWVUFHSNEDJYFAMJPMAULQBOCQOBFRHTZTOYUVFWKNYZASYOFDIJBPHXIAZTUWSZGOYPCLLEJKRDXJGMUGMKOBAKSYQUKTPNXRIPNYDOACXEHJCFQNCOPEUUPZHXXFV");

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
    msg.setTimeStamp(0.687920711965);
    msg.setSource(32388U);
    msg.setSourceEntity(166U);
    msg.setDestination(58351U);
    msg.setDestinationEntity(197U);
    msg.type = 74U;
    msg.op = 94U;
    msg.request_id = 19843U;
    msg.plan_id.assign("EPYVWNDOKJDBCJUINIRYHMHRGCDXHVKUKNMSHLAHSPFFQMCAHYASLXCLLJWFUXHNMJKKFDRPGYDQIVMJUUEFIQVTKIMDPZPXXMCBXTKESFTOROVYCNSBWSVWRUPAVEIZEUIWFHXBRORKQTMEFCEOOYCLJZDBGTYAOLCTIIZJQDTAKLQNUJYHEGVWNZXWZBMQUSAJBQHSAWZ");
    msg.flags = 63733U;
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.91785968541;
    tmp_msg_0.x = 0.582401468333;
    tmp_msg_0.y = 0.0851805409678;
    tmp_msg_0.z = 0.899474544113;
    tmp_msg_0.timestep = 0.44503975864;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UHEOJDPXEUCFMPPNYPNEUOBJTOXHWZQARXJFORKFOIPZZCZIMVRBQCAMFZFITYFQEEYIITGJNCMVWLHBAMVTKVKIYXGELNBHSRDFWLSLYAHOZNZURSSPULHWGODAGSXMULBHSKLKAHBGCKIGOXWFAZVLUNEKYVCWDCJDINACJBQIGQEKDUPOSCSTRRVBAOFLTGYQDPWGBZRTKHEK");

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
    msg.setTimeStamp(0.334744253044);
    msg.setSource(40899U);
    msg.setSourceEntity(20U);
    msg.setDestination(3703U);
    msg.setDestinationEntity(234U);
    msg.type = 113U;
    msg.op = 100U;
    msg.request_id = 31173U;
    msg.plan_id.assign("JWEBFZZYDICNFSDQEFEZBPRCZYOTRVACOCKWBNCWVQTMAMHQMGIRPDOMETNSARSAREODQUJSLPZCXHPENHOMHIBYSGTYUSZQQRDGSKIPOTYLWMHPXMLIKPQYDD");
    msg.flags = 59364U;
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("PPCWFKAMFLQCNSKSTTOWJFXSIAHAX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LMSZFUBXQVQQKVCNYHUCPEJRNZCDDQRNTSSOAANHVFEKGJJTQHVJ");

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
    msg.setTimeStamp(0.701089819653);
    msg.setSource(32388U);
    msg.setSourceEntity(162U);
    msg.setDestination(53434U);
    msg.setDestinationEntity(74U);
    msg.state = 61U;
    msg.plan_id.assign("OOXRBDOVCOCZKMWGBVBJESNVJCDKGZZHWCPYMSWNHMSUPPWPPEGTLXYNQRGEAUEZYYPXUDSXYTVQFHNMSBMHSARLAFMLYYSLTBBKUWEGCPDTFXVQJQZCIHAZDH");
    msg.plan_eta = -2052587343;
    msg.plan_progress = 0.661200443233;
    msg.man_id.assign("NUXFOLCUKKNGHDCSO");
    msg.man_type = 39988U;
    msg.man_eta = -825048848;
    msg.last_outcome = 56U;

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
    msg.setTimeStamp(0.0152294804842);
    msg.setSource(7789U);
    msg.setSourceEntity(191U);
    msg.setDestination(25160U);
    msg.setDestinationEntity(114U);
    msg.state = 101U;
    msg.plan_id.assign("TURSDZLJNEMXDPTTPMPRRUXSONEZVSDFBOYLVYEYXPNWGXUNSOUUSESISHMIFPDYBZVFLSKOYEAVYLXJOTQXRQRBTWZYERAWCKNEXKZAPSURHGHRHBWAIOPKQGRKLYMBGAC");
    msg.plan_eta = -663915725;
    msg.plan_progress = 0.531604245868;
    msg.man_id.assign("JOPNGHDBGQJTJGTFLYRDJLEPASPZASIJYOJCGWTZBYNOVYKUOMJRSIJLAPRFTNZHDFWRZKEGFZWLKFBVANQUNXTSRXKWCUWGWAXIMVVBHOGRGQSCZIKFAUPKSMMYYCWJVLHRODKISCWNETAVWCAIRXBNGXVISDNHMFQEDIUSLTPPTVUPHBL");
    msg.man_type = 53892U;
    msg.man_eta = 1324248197;
    msg.last_outcome = 20U;

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
    msg.setTimeStamp(0.093564305581);
    msg.setSource(56235U);
    msg.setSourceEntity(132U);
    msg.setDestination(35586U);
    msg.setDestinationEntity(231U);
    msg.state = 210U;
    msg.plan_id.assign("XWIVZLETICPDPCNPFCLUUCHBIWBIPZZQBCGIGFALFLSGOHGAKVAMEYSYEOKHTIOOQMLZTBNRMALWKTKTODJUBFXRYSCQYNKEFBKMFERSDXNIDEQVHPPAANXLDXCVOVIWJRLNVKBJWAOW");
    msg.plan_eta = -1202151781;
    msg.plan_progress = 0.403538110916;
    msg.man_id.assign("VTIMHRIIULSHQLYETAEMQXRJQPPVZZDPVSOQWKKJTBFNNBBLJNDJDANARTSEDAUNQMPVBYWYLMBTRXPGIOKDFOVODYWNWRJQDTUDKUDASIFIRFWHKLI");
    msg.man_type = 37750U;
    msg.man_eta = -1549860463;
    msg.last_outcome = 140U;

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
    msg.setTimeStamp(0.667760285597);
    msg.setSource(4166U);
    msg.setSourceEntity(98U);
    msg.setDestination(46129U);
    msg.setDestinationEntity(24U);
    msg.name.assign("JXNKZJOGIOHLIHAGPWMDCMXQASFMEOYFHJQOUTBOFAXPNPZQOZGVFWRTDTMUWTKJWWDIQLMPYASYETXNZLBSUVCMVRCULIZVZHHXNRQKLUHFIXRGMPESSPOQAICMKV");
    msg.value.assign("NVNRHOFKMPGWPACHYYATGGVSRFRKGGBKRGPIVNNFHBLPJNFMBWPZBXATFMCWSYAECYHOVHKZWPZEOZYOIRZXBAQFEXLVBLUDIRSSXLEEJTJYXNDSFCGG");
    msg.type = 162U;
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
    msg.setTimeStamp(0.87818892475);
    msg.setSource(10569U);
    msg.setSourceEntity(9U);
    msg.setDestination(40930U);
    msg.setDestinationEntity(166U);
    msg.name.assign("SPLDLDGOSFCQPYGSIUTTQUXJGRTEAGLFNXWKEDOPQVNUZIJMDJJXRONCBAEMWXEWDBTFIIOSLYHRQLONWPYOKZKMOBPRNYHFKGNNAWJSWRZKEIQNZOCIBZCMMURTRBAUIGHWEVDXMGYYBWHAJJCBJSGSOPSDVUWMESUIFVVBUZJLHRALQWFQVCQTLPGIPTVDHQAHMFXHRQKCPLYXRZJZNMTHTXOVBCXVFBFKZDANKGHKZX");
    msg.value.assign("ERQQJXDULHSMHQEBQDAJY");
    msg.type = 108U;
    msg.access = 27U;

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
    msg.setTimeStamp(0.421183724924);
    msg.setSource(43944U);
    msg.setSourceEntity(218U);
    msg.setDestination(34377U);
    msg.setDestinationEntity(228U);
    msg.name.assign("CKEUDGGKYFTXIBROVHDLGCIFYNHSLWXIZAMOPSTBRPHOYJIFTMULVWKMAHFZDYB");
    msg.value.assign("XUQMAKHHUIWPTGPURDRRTTSIYCREAACJYXBPWUMWXPEVLGACDPABQRCJONGOLECWUQLBBJEZYGMZMNOVRYKSBIIOEZYFTWZXFYQHBPTDTFNGXSF");
    msg.type = 185U;
    msg.access = 9U;

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
    msg.setTimeStamp(0.81524257101);
    msg.setSource(3304U);
    msg.setSourceEntity(226U);
    msg.setDestination(47925U);
    msg.setDestinationEntity(196U);
    msg.cmd = 62U;
    msg.op = 0U;
    msg.plan_id.assign("AQOCDFMNNHGAFHTUQBUGAJJLPNWUZGOYIPSSYECPBNAZDXERCLENWUYYHGIHCJFKURLMBMODTNKYLFOQLZJGSRPKZSWMERUWBPYJHOHOBMVKZKPTIUAHQXORXPHTUGQAGEDPEDSTXGQLWIXLPMVMYGOVAADPTEFXDBZKWCQJKVNMADRTGFFVQLVZU");
    msg.params.assign("TESVYJTUGPHGPKXXZCEUPZRWDPJNQAEXBDQRPSEJYLEGMOBIRGISFGYEMQSDXOOMLVKWNUNMJKNHIXJCGJDRALZZFCDRTRKBIIKYOQWYIYMNHFPBJQHHNOAWSPLDQODVAGMBKLUOYYXHHKZVFAOFFLOZSREBCIZPSVP");

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
    msg.setTimeStamp(0.468963963539);
    msg.setSource(3363U);
    msg.setSourceEntity(85U);
    msg.setDestination(60782U);
    msg.setDestinationEntity(204U);
    msg.cmd = 112U;
    msg.op = 215U;
    msg.plan_id.assign("XIUJASEINZXMLRAQFLWFJLONZCYUYPYBHGHEYANJHQHKUJLWYLLHRZIWCMYNRDLMKNRKSCSXEYMXXFEBVYFHMNPZUOQVVXWDKDTFPVFBEIGMGPVHSCWTODTUIHOCQIDAQVUJBZWCIPSZZWYMST");
    msg.params.assign("EUWNYROGKZIPUSHAJXVVDIKYXMTFRVDCQRERSCCPAASUBSIIOBOALZQUYHKKMKLBHVJMCBROTDGQMWLPEZHSTEPEDWLHTNJCNELCPUOGGVVGHJTEGFSCPDLDJZBGTSBJWGYRAMHGUKFLYMNQLMNMERXWYGYWRHCIXXTFNJFDCWELWYPODNFVTRQSEJOPTOSSIUAQQDXWIFBIZFMHVJRQOIZVUNKZKMBYAFKPPLXAOQWBFYZNCV");

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
    msg.setTimeStamp(0.183032701702);
    msg.setSource(9006U);
    msg.setSourceEntity(8U);
    msg.setDestination(26437U);
    msg.setDestinationEntity(164U);
    msg.cmd = 66U;
    msg.op = 8U;
    msg.plan_id.assign("LYPNFMIUCCYJQRVBRWQKXRNDBYFXJYMAQDCYTDAETJGOSHXQAU");
    msg.params.assign("KHGUFWRQPEYTQGMEXHJCRSPOEVQXUTIQMUIPKNUJTLVOPFQDMNEIDEHRRGQSBMTJHFAZOIVOCHEIFKYLPKKAOEQLPDHLZMPYKUOEAGNNKWHMVULKKWGFWBBVTZSJJJWLZURMNZNFATYXCXQDOBFNVYTXCJCVCSVCDFSIXAWNSBIMUCCQLUZYTBAPZDZDBXFTZPNHBG");

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
    msg.setTimeStamp(0.523348353424);
    msg.setSource(6042U);
    msg.setSourceEntity(213U);
    msg.setDestination(33272U);
    msg.setDestinationEntity(37U);
    msg.group_name.assign("KBXSWRCBCGJXBZLOXMUYXAEGIOPPDRQENUYSZKPBVFDMCHVFJESHMRKOTRUVEARXPBZYJRRSUEFRAJGBSMEFXIQZXIGINBCTYUOZUGIXZDWLEHKHHQBFFHCGCCVABFGDWMMSCMLJCRYSZVKRLQWLHWUDONHYPIJXDVKZQTOTZJYCMQITQTUVJAVINNNMUOZY");
    msg.op = 218U;
    msg.lat = 0.391847957174;
    msg.lon = 0.731761394271;
    msg.height = 0.383224090926;
    msg.x = 0.477664600519;
    msg.y = 0.576838961961;
    msg.z = 0.348566771171;
    msg.phi = 0.982100701169;
    msg.theta = 0.361845746614;
    msg.psi = 0.130292721492;
    msg.vx = 0.248588202887;
    msg.vy = 0.0883438177443;
    msg.vz = 0.00142303746572;
    msg.p = 0.0141318588264;
    msg.q = 0.457006425164;
    msg.r = 0.455182490575;
    msg.svx = 0.567953678419;
    msg.svy = 0.179621909661;
    msg.svz = 0.000665224430976;

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
    msg.setTimeStamp(0.8379132679);
    msg.setSource(33371U);
    msg.setSourceEntity(238U);
    msg.setDestination(21485U);
    msg.setDestinationEntity(173U);
    msg.group_name.assign("URYZGIIZMFSOSCBIWWMESVCPWTNAVABEFZXFUKHKPTRHJKCMTZXZZONUZVYLPQHXHLWWR");
    msg.op = 162U;
    msg.lat = 0.685913614194;
    msg.lon = 0.301352293369;
    msg.height = 0.670863929073;
    msg.x = 0.0130811606465;
    msg.y = 0.127190154455;
    msg.z = 0.256245181177;
    msg.phi = 0.669897673656;
    msg.theta = 0.0338545769442;
    msg.psi = 0.958180867355;
    msg.vx = 0.101689434846;
    msg.vy = 0.866987823987;
    msg.vz = 0.0134081570935;
    msg.p = 0.447893294987;
    msg.q = 0.552122638215;
    msg.r = 0.679017780542;
    msg.svx = 0.922946246981;
    msg.svy = 0.875930481993;
    msg.svz = 0.247984279407;

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
    msg.setTimeStamp(0.226140785337);
    msg.setSource(45986U);
    msg.setSourceEntity(1U);
    msg.setDestination(47617U);
    msg.setDestinationEntity(95U);
    msg.group_name.assign("VTGEBEJGDTVLCBCRHTJIPKGFOHANZQTVREOWHAHAEZPFBLYVCKUVVUPHWNZZBMQDLXBYZYUYADNUOMLSQIGPWKHBNEVRZAQIETAKECMZCJUHPJCHIUSXYRXLFSQTUJTFPDWQQBNFRCIDJFJNFEDYXSLKXZIEGBRKVXVWMNSSWPGJYVEDYLRJGKBARXAFNJDAXOLIPWWTDTFZSWMOARNQDBRUUOGCFPSX");
    msg.op = 120U;
    msg.lat = 0.0363533470927;
    msg.lon = 0.466906307776;
    msg.height = 0.242124226873;
    msg.x = 0.380045495252;
    msg.y = 0.091500617023;
    msg.z = 0.180750634267;
    msg.phi = 0.515067740949;
    msg.theta = 0.594295932966;
    msg.psi = 0.132738832337;
    msg.vx = 0.71896641877;
    msg.vy = 0.746386634533;
    msg.vz = 0.213535598837;
    msg.p = 0.636406507852;
    msg.q = 0.140673085634;
    msg.r = 0.709244175149;
    msg.svx = 0.843698150125;
    msg.svy = 0.194170215893;
    msg.svz = 0.909772389987;

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
    msg.setTimeStamp(0.673262403292);
    msg.setSource(29333U);
    msg.setSourceEntity(169U);
    msg.setDestination(20426U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("HUNNQIWWAJBWJYRRGKHTJRAUNXZRXEOGPSQVQTNCJDVLBBKYFBKMMEMTAFREBIEURCUVAXLXOPTCNQIMPLXARKIHNMCIHJQJDIDKMAOWZFZDMTMXPIHZIRLSFTPNOYQLDMEWNDLAEVXCLPXTAXIUGWVGZCNDQEKJUQBPRWPLJWFVVBOUVUZBHFWGBJUHQOPGFETSZPCISVZFAGDKHLWYZFSOYDASYHE");
    msg.type = 72U;
    msg.properties = 246U;
    msg.durations.assign("XZLAKDMYQWOZMDBDILFHXAEMCREVQQUAUTKHGRZBTJGXZKAQFACYDNHCDNVTOPNISXNERCRIKCZDIUHASPJWAUMOGMKAMAEXLSWRZYNEWSXSPLQHYWILUBOBHRTZUJBOFIRVSIQPUCWFZTGNFSHYIQKNRPPOSTDKGVULAFJHONTYBBDGEFPUQMLEGTOXJIJORKXWVM");
    msg.distances.assign("IEADNKAPKVKTCFTLPXKMWNALXUDYCGOHABOREYJ");
    msg.actions.assign("VOWGFRFHUUUMFVYXRCJBNCOKHOBBEMWKIXLRZKQZAKWQIRELOADPSXYYWQETBRGYFKVUBWULJEOGEFMVCEXOUGIPYDDAOUCRPEQTHHURTZTGIVVJZBNWYSCTYLBOJZNJHJNNJVGLAQBSEEAAKVQZTXAHAVXYJNQPKFDPEFDLTJNIASSUQTKVMMMRIQPCYPXZTKD");
    msg.fuel.assign("HDIPLIPDSQXCCWDDUOFUYJLNJNPNHVDZENTKQJLARKAEJMKKHCHSFFGHTHWMGOVPLFFASRXXXPEOMZVIHXEBJIZKNKSVKLJOGWGJQODGWGIMAZDRWZNPHSCXNBRZVPAAVWIPHRYLINJIWMGSAFBURUOEFTFJUBZYTLXTXMBZTHATEMBYBFGCOVV");

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
    msg.setTimeStamp(0.94696314442);
    msg.setSource(18274U);
    msg.setSourceEntity(13U);
    msg.setDestination(43301U);
    msg.setDestinationEntity(152U);
    msg.plan_id.assign("CTMGVPVJCKDISNELYSUPPDINCKHVTLPYMBQKRFMICERUTCUZIBNVQVHDDACWWAOXEGBFZWWCJVQHJUPJTAGTVHFB");
    msg.type = 225U;
    msg.properties = 238U;
    msg.durations.assign("ZAAXBHBOVAHTGDDPCMIY");
    msg.distances.assign("SYFHBPUSEZPJMRQNSAANRELJAWZUXRGCDWMKFUYPGGBZHAVXZBKUVOKSEYPQUBFOOFIGSMBORARPFEXSHVFTUARPDQZWHLZNAVMIOQHXUGKCISCGECDIECDTQLSZXFYQYJYCUVQTEWBLWVWYLZFLJDHTVUXIEJCKE");
    msg.actions.assign("CMAPCVEYNHGLXBXNRFJOGCGARGWWEMHBPCRROZQKKHSCYGQFNVWEVABLIERKF");
    msg.fuel.assign("TJQCOFQNYGSLQCHAWPSXTNBOSFETNYQSLINORDCFJCRWDCJPEEBWLZYAXVKGJLCKKYQWGMUYEESZTHZVQDGKFKREUULZBXDQHHILALUHAIJLADDQAXGJPKUFWEMYVRLIONBSCBVATFNROEODHPJEMASPMXBKFROCMTWZSGCPVIPXXVOM");

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
    msg.setTimeStamp(0.736935344295);
    msg.setSource(5549U);
    msg.setSourceEntity(33U);
    msg.setDestination(33990U);
    msg.setDestinationEntity(78U);
    msg.plan_id.assign("XYJMAOATDJSWWXWFCSUPIGRKMEJGIMSJMDNUVSSGCWK");
    msg.type = 38U;
    msg.properties = 229U;
    msg.durations.assign("RXHOZEYPMPAUVLHWDPREITJAIHEKAZUFMALYYDGSDZJMMHQNSFUWGMSBXJPUGBJXWEASBLITBSTOQNLHRUAVKADVUBCIRQDQNYROKNXQBPWQKCDSEYXFGGKJDVEDOCBRNIGCKYSVFTBCURFQWLLZLIHMKCBOMMJILKWRTZV");
    msg.distances.assign("VWLMQVXWMGFQEEJTCLCC");
    msg.actions.assign("LMHMZCHYMPPSDOFGIJRVVZNKZNULPCEJUZVDLAUPWHVUIWVPSGPEBKLBAROUFBLICIIR");
    msg.fuel.assign("IIIQAXTYKOXXOEBJVDHASPIZAKYTSRCLHDWLZIWWZPYOPVDJWDHNHCQNMHJMSBBBGQKGKLUBEOXGMOHONRPTCMGQTBQTFXYMZTWNSYSKFZEOEJAYFUUKJZVFGUBFXTPNPCVYTZMUJYIALDZYNWXQEHFLSHCSMNTGLVVDUBCXIOTRRPZDJJKPRWQMLROFPOUSYGEIAKFGRDCSUQIDWGIGBLKJNRVREELNRMFEWA");

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
    msg.setTimeStamp(0.308683784918);
    msg.setSource(13235U);
    msg.setSourceEntity(221U);
    msg.setDestination(20912U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.60173469836;
    msg.lon = 0.435537090863;
    msg.depth = 0.843856070374;
    msg.roll = 0.88012980926;
    msg.pitch = 0.379872460566;
    msg.yaw = 0.481124678694;
    msg.rcp_time = 0.45235844229;
    msg.sid.assign("WPGIHHDTKRSYQBZSYURGKQPKKCFRVVNFUMPMXFKUHIVXDKTUXPVCLPJMYTCDUJQHJLGICHXBEZOVBGSWTEDFCJBONTTPRTJOA");
    msg.s_type = 158U;

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
    msg.setTimeStamp(0.235449489406);
    msg.setSource(57733U);
    msg.setSourceEntity(123U);
    msg.setDestination(54847U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.435104160595;
    msg.lon = 0.884559522842;
    msg.depth = 0.413810616571;
    msg.roll = 0.306573537231;
    msg.pitch = 0.732656586602;
    msg.yaw = 0.940892687814;
    msg.rcp_time = 0.12857601091;
    msg.sid.assign("RTVCMPEIAYDJINMASCGXLVBLLCLDQXKHTOKMAKSGVZJYAAWUJJVWMTHTRHFZSUWJOVDUZFEHINTCEOZMVWWJGBDVWCLXFKGVGUQRGVUTOHAYUEYKPNOBEMIRQXHHIMWKFAKLHLPUYDEGGRRRYJZFMPRZHOAYBWQUKQKBJDPIWTBXAXMRQCCBCUSIEBZYBLDOOIQXDETSZPEQSGQZCFFYHSFLBNNSPXGNPFR");
    msg.s_type = 158U;

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
    msg.setTimeStamp(0.265812732297);
    msg.setSource(59302U);
    msg.setSourceEntity(146U);
    msg.setDestination(4552U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.167065024232;
    msg.lon = 0.664403980765;
    msg.depth = 0.101662560007;
    msg.roll = 0.52098123705;
    msg.pitch = 0.183801603506;
    msg.yaw = 0.852330117637;
    msg.rcp_time = 0.742718564667;
    msg.sid.assign("YMRBVPEHFFWQAAYKNOSHYVXWFBLCDUJWZGEIBSJQJWMTCSXKATLEEPFTVXGONCQOUPNTVDLGREIHWJUPQUDKUUFXSGZTHVLGCWCHCYWGFPXRDGYUFIZRSANTCNBREBXZHYBFYYVMVBZSRTGMCCIVQPXZUJIVLAOSMHKQIBJDVDJDDLCASZJWNYMOKGEIKRMKMRWKUNYNENS");
    msg.s_type = 160U;

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
    msg.setTimeStamp(0.68714755266);
    msg.setSource(42465U);
    msg.setSourceEntity(226U);
    msg.setDestination(57766U);
    msg.setDestinationEntity(115U);
    msg.id.assign("JTZJEFPHKQCNAQMRSVTHBRYGTJBQOBPWVMNGKCSMYXOFOSPMXCHZRQWIWFXRUYMAHTOXWZEVGFBADXAJBUBEAUGHRTMFPGDLFYYOMJYRQEKLCICJSEYFASLSLNGCULUCJAJPHPEZWDYYGZNLNLWPDKXBGCZFNMXJNUDCSVKSSLZKWTFHUAZIGKPRVIIUVWQHIXLUENOPDRVHIKCTQPH");
    msg.sensor_class.assign("KVNDWAMXMSCOYEXLYQNPIBEUTOSNLWGHHGKXGFAVZ");
    msg.lat = 0.0623177050255;
    msg.lon = 0.767235416189;
    msg.alt = 0.566769816618;
    msg.heading = 0.000865620389276;
    msg.data.assign("YHEODYFRCZVRVPULWHORZHEZLSFQNHKVFEKIIFFTABDMUWQSKNVTJHJZODNSIPNELPOQGOIGTHARPKLOUZCFLBPEWURQABINKFTHTSOVVREWWOJMGOFTVWDZNQMZNVBTQGVBSPZAIXLBKJYLHFGZYCZAGXMJKASJDKJSXQDSIUJDDPCGHNYDCQMMC");

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
    msg.setTimeStamp(0.912941225655);
    msg.setSource(10098U);
    msg.setSourceEntity(101U);
    msg.setDestination(17380U);
    msg.setDestinationEntity(19U);
    msg.id.assign("WHVVQBFFSGMKOULCBYCOLDNLLJIFOCUVVXLSIYSGZPDIWZQWO");
    msg.sensor_class.assign("YOOMYNMZZHPCELOJMZYNFLUNIROGUGVPJCHRCAJNTTFMDABNSFBVYFJHAGFZMGVPJWBNRHMMOGSNLVWNWWSKTLVCVUGSMFLPCEQPSSIDIACHBPTSWLROPEDAYSEN");
    msg.lat = 0.212826290497;
    msg.lon = 0.156111120939;
    msg.alt = 0.92914210266;
    msg.heading = 0.467128325553;
    msg.data.assign("IDLLGWQFZBROGHBDFNOEVKOAMGZSISRAJBBQTHIUDNZCKKWGMUZJPXGWVB");

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
    msg.setTimeStamp(0.839412083572);
    msg.setSource(40981U);
    msg.setSourceEntity(253U);
    msg.setDestination(19291U);
    msg.setDestinationEntity(95U);
    msg.id.assign("NNVJBVAOGMTOHIHAMWITWWKMGAFFZFOSVEITSHCULJCZXFNQPXREKZYKPEQGXQBXZOVYPWMBMZPTMJCEUVCELFAKNLDWQZKOTSACGGLOHVYJULWJTELPYABJARFSRJVGNOYYKGIVCWNBEXDUDHYIPFQCMNTEDZNDHHBW");
    msg.sensor_class.assign("JQMEEAZBDSHJBRKNHYPYTMNRHKWFHOGIERMCLNZISJGPVBSAATQZUMKLM");
    msg.lat = 0.99954843997;
    msg.lon = 0.623505308124;
    msg.alt = 0.0473588442804;
    msg.heading = 0.448797201341;
    msg.data.assign("RLFIYUJMVKVDRWSLYQHZUHHQBIAMNCNTNKTHZWMOIHTERSWJWNPYMQAGTYTRKICZPJVBXAKAEOEAGVSFIJEXJLXXYCVLDSXWOUKQGIPMLQDCKOFHOCOLMTGFQRCFNQNFEDIVUICUIUSTHRXIOPEPWPHYALUCUFFXBKGZUZTETSESDW");

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
    msg.setTimeStamp(0.329253598446);
    msg.setSource(206U);
    msg.setSourceEntity(166U);
    msg.setDestination(64852U);
    msg.setDestinationEntity(58U);
    msg.id.assign("JTSIDVPXEYBTK");

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
    msg.setTimeStamp(0.586513941413);
    msg.setSource(24420U);
    msg.setSourceEntity(221U);
    msg.setDestination(59023U);
    msg.setDestinationEntity(133U);
    msg.id.assign("IUFXQROKCGPLQQVDGDTGUPICTPBEFDVBCFYWTRAENHPMZXNPXBJJTVQHQFFURKXXYOSQOXIEBPAJDGNADHBWLJKWLGKWBLWOAIEAFEAEIVOYHQUQJFPPKVLG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AVXBMLNFWCAZFOJKZHVLUXVMXINQSLTYEWNVIISQTOWPLHIISHQQOHRGFMTJOJPRFTAKXGWRJJZEHLYXAXPBDLQC");
    tmp_msg_0.feature_type = 94U;
    tmp_msg_0.rgb_red = 74U;
    tmp_msg_0.rgb_green = 173U;
    tmp_msg_0.rgb_blue = 178U;
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
    msg.setTimeStamp(0.701652216076);
    msg.setSource(23734U);
    msg.setSourceEntity(198U);
    msg.setDestination(45511U);
    msg.setDestinationEntity(66U);
    msg.id.assign("LBODYVUJVCIIWRYAEFIYXBPFUOSTVUKRKWMLOFQRPGTNHKGBRDLZXBSTVHQVQXDLZUBJJDXQIJWWRZDTIHDOGABEFRNSNDOQMEYAJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NNMDXHWVNXTAVEIZLRAZJNOQIAHFJWENYLGRMSZALJRCYBDCNWPVEHEASRAYQWGYNCTYSOFSOTGXURG");
    tmp_msg_0.feature_type = 166U;
    tmp_msg_0.rgb_red = 100U;
    tmp_msg_0.rgb_green = 214U;
    tmp_msg_0.rgb_blue = 92U;
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
    msg.setTimeStamp(0.0928879691706);
    msg.setSource(8427U);
    msg.setSourceEntity(55U);
    msg.setDestination(22469U);
    msg.setDestinationEntity(64U);
    msg.id.assign("EKNXQFJYAETUUHBRDZBJKVWGDQMVCSVSXNHPBTOSBIJQZHZDWGOYSOYMQCIHCULEFWAMFHZFPXXJL");
    msg.feature_type = 231U;
    msg.rgb_red = 217U;
    msg.rgb_green = 206U;
    msg.rgb_blue = 249U;

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
    msg.setTimeStamp(0.826383913061);
    msg.setSource(16586U);
    msg.setSourceEntity(64U);
    msg.setDestination(44060U);
    msg.setDestinationEntity(168U);
    msg.id.assign("WIJUFLTFQOHUTGRJWNYDHAZBUKWGGZOLVLWYJRCDPNQYBBLGBSPQCMUMXJPMNMQSNCJEFLOKL");
    msg.feature_type = 173U;
    msg.rgb_red = 225U;
    msg.rgb_green = 62U;
    msg.rgb_blue = 207U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0340673704145;
    tmp_msg_0.lon = 0.719946419395;
    tmp_msg_0.alt = 0.772732064905;
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
    msg.setTimeStamp(5.67480677622e-05);
    msg.setSource(31309U);
    msg.setSourceEntity(157U);
    msg.setDestination(13443U);
    msg.setDestinationEntity(240U);
    msg.id.assign("QAFESQPXCPYZEFCLOUVRSRREBVJQTBGZOAGKJUGGFXQBJRRZEUKZKXTKPGGQFHVAMEAWWIBHDIYUNKASBAMNYFBSNCHKKDIPSROCMGNLKOEETOGNDWSCUXPDGHWFTMBTLWY");
    msg.feature_type = 70U;
    msg.rgb_red = 207U;
    msg.rgb_green = 213U;
    msg.rgb_blue = 65U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.201636430491;
    tmp_msg_0.lon = 0.352588536062;
    tmp_msg_0.alt = 0.89650349896;
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
    msg.setTimeStamp(0.858606932619);
    msg.setSource(23225U);
    msg.setSourceEntity(101U);
    msg.setDestination(26365U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.0389083323618;
    msg.lon = 0.0197268160569;
    msg.alt = 0.411261730506;

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
    msg.setTimeStamp(0.445482257567);
    msg.setSource(28077U);
    msg.setSourceEntity(226U);
    msg.setDestination(11811U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.453134691264;
    msg.lon = 0.6863090416;
    msg.alt = 0.00223214897848;

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
    msg.setTimeStamp(0.949366865494);
    msg.setSource(56325U);
    msg.setSourceEntity(244U);
    msg.setDestination(60425U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.043474214078;
    msg.lon = 0.111760180686;
    msg.alt = 0.861367254816;

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
    msg.setTimeStamp(0.539146805618);
    msg.setSource(58300U);
    msg.setSourceEntity(77U);
    msg.setDestination(58311U);
    msg.setDestinationEntity(62U);
    msg.type = 14U;
    msg.id.assign("EVLMQJPCWCAMQXSTDOILOVUPWSACOKMJ");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.359636690089;
    tmp_msg_0.lon = 0.502142516219;
    tmp_msg_0.z = 0.0869284420378;
    tmp_msg_0.z_units = 138U;
    tmp_msg_0.speed = 0.596581316775;
    tmp_msg_0.speed_units = 46U;
    tmp_msg_0.abort_z = 0.976035291821;
    tmp_msg_0.bearing = 0.0432790635707;
    tmp_msg_0.glide_slope = 77U;
    tmp_msg_0.glide_slope_alt = 0.561820813865;
    tmp_msg_0.custom.assign("CSWRQAQDVD");
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
    msg.setTimeStamp(0.689900406885);
    msg.setSource(12573U);
    msg.setSourceEntity(63U);
    msg.setDestination(53629U);
    msg.setDestinationEntity(63U);
    msg.type = 206U;
    msg.id.assign("MGNQKJEXWKILIZDHDLDZZIXCRYZITOSDFNAVREOVSZRUMDSKFJJOTJQSIUXFHRZOXYUJUZGFGQVXVYYPPZQRGUXBLFZMGPTSKIURNVAFPGPCAWRBKUWZRWJAJGHHXSQOA");
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 60772U;
    tmp_msg_0.duration = 19250U;
    tmp_msg_0.speed = 0.443279260487;
    tmp_msg_0.speed_units = 245U;
    tmp_msg_0.x = 0.964903080591;
    tmp_msg_0.y = 0.22634708673;
    tmp_msg_0.z = 0.0119555035767;
    tmp_msg_0.z_units = 244U;
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
    msg.setTimeStamp(0.0481453841774);
    msg.setSource(24004U);
    msg.setSourceEntity(218U);
    msg.setDestination(15101U);
    msg.setDestinationEntity(211U);
    msg.type = 51U;
    msg.id.assign("SATOSOFHFGDSLJYOEPXDMFLIOPHYCPTMJYZNJXNFYTQTVOHFWLSRGDDVXXCXXQNHHBGBEHTWNBEGEJFYMHWRRGVTIEPBXGORAHUKQRRVWYSERLTKFEDAEQAKENRWPBVUKUAWKZJUCZWDNGQJPKCYUPWKOYAJLNIGRMJTICRLCAQNUQMNZZBLIGQUSJHNVFLVKCMOZKXJADVFGFWCXZZLIZZYQDIPXMHIBVIITTUEUWPBVCQOPBMD");
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.225157313501;
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
    msg.setTimeStamp(0.772581437828);
    msg.setSource(14739U);
    msg.setSourceEntity(92U);
    msg.setDestination(42036U);
    msg.setDestinationEntity(245U);
    msg.id.assign("WLFUVERHMCHRQNBEMFHXJSDICMBOUXSGZIYTWAU");
    msg.callsign.assign("FIIMLZNJOHNYKGAPNGAQSKSDDCPVSPOLBWWYXZAMMTOHNRUCFACCWRHIVUYSVWE");
    msg.name.assign("KANRLWXBOGAYLLHAHYDQMIPQNTGOPNVBMLCKYCOPNQVOGQEVGREWRLDTXIAQECAIHZPDWYNRMETQUHFZXSTEXYVDWQCODFVRJXCSFBCMRJMJACPJAQZWBGVZZLPWSZKTIKUYTMOBAPWXZSJUIUSSXFVREOLNSOIYURUMDEFBSHDWSYXHDHNOVHVJFFCXZXHTKGJWRQGFPKFLNBUZZBGNIMVTNJQCGDEUGDLUKIPRYKMOSCBHMBAIUTAWIKYK");
    msg.type_and_cargo = 12U;
    msg.a = 0.450989165944;
    msg.b = 0.824558642663;
    msg.c = 0.983144434516;
    msg.d = 0.545116040197;

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
    msg.setTimeStamp(0.279323601295);
    msg.setSource(59252U);
    msg.setSourceEntity(178U);
    msg.setDestination(13285U);
    msg.setDestinationEntity(223U);
    msg.id.assign("PCCGIQUVPYXFGVBBZQVPURRXHIRTLDLQKRABVWAE");
    msg.callsign.assign("UQPYVQNCQJZLRGFEWIKAKELIQYVPMHWKJLLYDZEERMKTGIZMQCWQFQOBHGYSLVMWTOFUDXIZGPSUIFGNBZHKDUESFMGHBZAHMZBHCRUAJ");
    msg.name.assign("CGBHGAAQDTOAMDDUAXANMUZJJORWYHTSHOLGIOJFDBQRTQCEFTVXOZLJGKCCBNAKQMTKQYOKHGPEXGHWSPOMXYPZERFRBTDFZNWKVZJLJNXGHSXVRVSLLQJMGDWQODBQCCWBJILEEEITAXJZPVTCUNSNYFVRPAIZLBXIZGNBEKNRPMWDHOVXUTPLUSMVFWILNLWKJKGBISCNEWHMIMT");
    msg.type_and_cargo = 181U;
    msg.a = 0.553669271486;
    msg.b = 0.283140898912;
    msg.c = 0.947959526512;
    msg.d = 0.950388722977;

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
    msg.setTimeStamp(0.273054726191);
    msg.setSource(53116U);
    msg.setSourceEntity(78U);
    msg.setDestination(6755U);
    msg.setDestinationEntity(221U);
    msg.id.assign("OVUAEUCDMYJIBLJMQZDUPDKNUBWMXCBAWLUXAXRHIXZUHUIWJWFQOJBVMAKCLWVXFNEKLLBZTQUTENSHOHOMRJWTGMHJXNFPGIXZHDLRONNGNGKCVCPVBVEIIPJHIRQFPGOKFNYTQTAQQYZCLAITCDRWWSSCAPGFYP");
    msg.callsign.assign("NTLPTURWKDCCPXEWYWZHRBJXLGIWAOESIJBGDRQKHQISRJVHQTFMAEXFSWSMXNMXJYQPQNYKPHPCVTSGOQTLFFANKEZDPH");
    msg.name.assign("HANGRBKVDCSFBVSPA");
    msg.type_and_cargo = 23U;
    msg.a = 0.250456490546;
    msg.b = 0.307461486268;
    msg.c = 0.56296803821;
    msg.d = 0.267592266347;

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
    msg.setTimeStamp(0.480620653337);
    msg.setSource(31526U);
    msg.setSourceEntity(231U);
    msg.setDestination(45847U);
    msg.setDestinationEntity(9U);
    msg.localname.assign("TQMNDRRROTKHZMERVWCDXWWXSTSYVIQJPXJHDTWNIVNCYVEZXMBGZAEKGUQUPWIWHAFWONHMOUFPRDHBUGKLBKUDGZBUXEIJCHMVBAIITUGEQJRBLBJFFDNINTTFNOQIVQWASQZISKDZXDYZAPFCYSOJCWASLMLOTYLOLNBJYSHOUFQEDMAAOMSRFYAHCTJCVEMYLPPNHIBEFGXTLAPKOXH");

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
    msg.setTimeStamp(0.226589757897);
    msg.setSource(55463U);
    msg.setSourceEntity(45U);
    msg.setDestination(48035U);
    msg.setDestinationEntity(155U);
    msg.localname.assign("GDJACNTRSRPCPOXOXBKJTQZDPVZNBVUVBTMGTXKFIXPHJZPOCKZPSCXUBRWEEBZWGUUYJZLQQAOUGWQRXJHMIQIEQYRDIVPFYSXBJQJSHRHDRLKFYGIIMKMWPFUBDISSKAFMMHYMOTKMBFNWUNDZGEVEOEHLHDKQNEACSI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("PMDVFGTWEKRKIOCPSXWSV");
    tmp_msg_0.sys_type = 158U;
    tmp_msg_0.owner = 20501U;
    tmp_msg_0.lat = 0.847044025221;
    tmp_msg_0.lon = 0.856709522902;
    tmp_msg_0.height = 0.814094473299;
    tmp_msg_0.services.assign("TIVTQOECWBQRRVNHAVVHUEQGOOKFTDTQTBPFGNYSVJGZGIJGSNBLELZYAWSRBORTWICMQMZMXDKYWSS");
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
    msg.setTimeStamp(0.0498705279824);
    msg.setSource(22819U);
    msg.setSourceEntity(93U);
    msg.setDestination(62891U);
    msg.setDestinationEntity(159U);
    msg.localname.assign("IAESRBOZQTOFMPJJNHWWNZGITBFDPHVCZMXZYWETXNLHZBROKNHFJKIQLGPFWBMOSMPRDQLUFUNMXLRJMYEPUWDFZAVQQJDDDRLRBIAONHBYTRZLGKTVUTAGQGPAYOJCPIUCSTOHVAEQOKICGOJISBFELKPIGRHCACARHSIFWDHZUENUZJNVBYEKUXTLPOPWDEXMLCNSXEVCKDQUVDTFISWVLQWHXYMMJWUSYXAEGYKFBRSBYNGCMKGCTXXQYJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("CEXBMKAZHTWSAXQBMRKWSULIUCJNBMRRTMWVIPIFATBSGPTJFRWAZPCICWOSKJYXJDHDPSUDVWI");
    tmp_msg_0.sys_type = 27U;
    tmp_msg_0.owner = 7111U;
    tmp_msg_0.lat = 0.935498896912;
    tmp_msg_0.lon = 0.365685122196;
    tmp_msg_0.height = 0.609942025956;
    tmp_msg_0.services.assign("YSRRYVKLWRSXBMKBEJUKXKAYBQSBYTJVUJZDLUQNJTWJYHGUACWFXSLQGZTLIXRTDLIFZIEWZZSAKOFQINGSINXGRYFTAAJOWNLCJFZMOVCGQXBMZHNCJPTLMZOCUNIYYBEOVN");
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
    msg.setTimeStamp(0.717310921344);
    msg.setSource(58530U);
    msg.setSourceEntity(97U);
    msg.setDestination(53744U);
    msg.setDestinationEntity(249U);
    msg.timeline.assign("AGSZGXVJACCNQGATSUATTPPUFOBFWLQYUWIKBEHJQNYRMSZWDQTUOBTHLSHVCEPUTJWXBNLXWAEJZECBGMRRXTFTHCMUNYLKQVKSYSABXIOFWMUPRYEBMNYORREDNJOKMMYMUZOFSEBKJXLPEHXFKQLLZDQDZWFQVIWNPDKVGDGHRXOICNVMZJAKKWXDESRRCTOCVYDSUYANTAIIVIZWHCOCPLEUYIGJDVPBPFLDMPKQHVORFHSANZJLBIGZG");
    msg.predicate.assign("IREZKMBBUWIKQZOZJSMNZFYIRUADLCSCZVHGXTEIDGJNZQCKKGFWNQMYHVJTBBUBGBKLXYYRVHNHENSGKYRPNFPQIRQMLYOSMAMDRHOTLHJNPFTJMDDAAPGIKQJSLCYVKYEJGZXVVFULLMDUWHBPESBAOVPOXZPERWYVCCBEUSTUWRSGAZJLXAWJ");
    msg.attributes.assign("EYKLKPNGUKTOILHWTRHXRIPGRIFUWVGOOVMZGVOLIBUBTZMWNEARSASAFUEBKAXGSEZEOMLVGRUGQLBYQSVSKORTCYIDOCTSWJONZZFDEEJLIMDDZLVCXYJQUJTPTMVIPXTCBAQJKXQAHMFWUWXCHAWPIUKQHRRNNDADTKBEPBAZQYFFLJNNNSMSEHXGXMPVJYZROBBPCVAX");

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
    msg.setTimeStamp(0.588006547948);
    msg.setSource(62099U);
    msg.setSourceEntity(137U);
    msg.setDestination(45583U);
    msg.setDestinationEntity(31U);
    msg.timeline.assign("CWHHZWRSUHHUZUITQKEGIUXLMFDOPDNDTPMVMNCBZYZJLLQAIWXHXKHLYUJWVPQQUIKJJURAFLBSYXVTFIYCPGDHSICDGEVPEGYTEYIEXNSMZNLQOYLCBRAGLZYW");
    msg.predicate.assign("OIVVGJUYXZCSCVPJWOHUEILARBRDSFCIZPSVBCSTMMHUFRAKDVHWPVHPPTIHVKEHAMZPFQGBANPFNWOFLCSQSGANSSJTLLEGJVKLLBCXHIBREJQNXXCUQQHONTSYONLXDVUQCFEWDPXNOZYADPOUKFHISAUHEGBFEUGBKYWDGGALDKFYQRDZBXRYMUTLRQMFETMENICWTAZMWQENKJKJTRJMGTOQXWB");
    msg.attributes.assign("KQOYOENRAJEDBVNCDRYUZCIKNKJUHQHKCYXHLZSFYJLEBPVGMWZWAWFMPMWPEZEQZHDCDDGMAQMDUZICGZPGSZCFXOHXTXWGATKYUKSVJ");

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
    msg.setTimeStamp(0.723711485565);
    msg.setSource(32144U);
    msg.setSourceEntity(253U);
    msg.setDestination(56741U);
    msg.setDestinationEntity(251U);
    msg.timeline.assign("BGONWOYWBHQQUNEILOXPJQIDSXZPFBYIZFKCYRYWSZOHTCEFLACKQGKRVGCLRDZQDIHNKIAKBTPGDYVSFVAHCZJLWUETFYJZFWAHQOVKJEJEZIVJBBJLWHLMHRBNCXYBSACBGNXQCXOPRPEWA");
    msg.predicate.assign("LJCPOPKNPDPDVEYZIABOQQPBWUTDLHNRENRSVFAWNSIYAGTWXQMIIFUJCUYFMYKEJXKTBFLHGSWTRM");
    msg.attributes.assign("GVWDUHLVODKGMTYFKRMBUMZHTZGOQUCARABXEYPGTWGZIVRTCEMLZVDMWYUETUHVUQSKYIFUXJFBAENAMTOGGPOSKRMQREUOOUSBXCRALSJMCANPORIIQFIYBCXJINFDZLWSJVDITHCEQHRRHFKOALAWPPBKISNEGWMZYKZKDWSDFBYVPOLTVLFHJRSQJOXWICHYDDLNXTJENW");

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
    msg.setTimeStamp(0.282227198541);
    msg.setSource(62964U);
    msg.setSourceEntity(142U);
    msg.setDestination(47362U);
    msg.setDestinationEntity(125U);
    msg.command = 19U;
    msg.goal_id.assign("RNSIWLLZMIURCHXBFOBAMYITCEFDBYQSXZNMHMHOXUIFKKHNHIFYXZVLPFFKPJZRHSOABTTBOXYNQFIUJPAQUJTUCSYWNRTDCCKFQJZRPIOSNKKYWRKAPQKJKTZDGMLZSEMJ");
    msg.goal_xml.assign("DRCIMYDNETBEGBVKPBGFXBOPSGTURVNQZHPYJOIQGXZNZXYHWPEYTQUIWDKIVYGECXFHYYZXMEJGWHQVZIDLAQNUBTRMWURTVLCRUODMMSXPUNZARJHPFCWE");

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
    msg.setTimeStamp(0.765393602031);
    msg.setSource(7686U);
    msg.setSourceEntity(63U);
    msg.setDestination(19811U);
    msg.setDestinationEntity(220U);
    msg.command = 203U;
    msg.goal_id.assign("SHFKTNGNUSHLFJSVNDJAPHWZKJBUBVCTPWMQRRDAADADQCTAVZOZGDHPBWQYLGUCWOCIXBEKKUOXLUYZNCWWLFPNQBIWZLABJEJFQKQVFTQIYFGLP");
    msg.goal_xml.assign("GBSVAEEUXCGSLPWRPSHOB");

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
    msg.setTimeStamp(0.227061994343);
    msg.setSource(41425U);
    msg.setSourceEntity(234U);
    msg.setDestination(60709U);
    msg.setDestinationEntity(78U);
    msg.command = 74U;
    msg.goal_id.assign("KRQDSQTMCOSJMNCKOBFUQEZEYPPNQKZDSOKTRTHVARGZBRTRHIJOIXVEQMSFFAINDLYTGEFBLYUEIUGEWOZAAYRKKLI");
    msg.goal_xml.assign("WEZVXYZINNQAPNOVDSTLTPNEFUNSIIEDQUPSOFXIZKXKQSYDWYK");

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
    msg.setTimeStamp(0.533819766617);
    msg.setSource(56211U);
    msg.setSourceEntity(234U);
    msg.setDestination(4491U);
    msg.setDestinationEntity(191U);
    msg.op = 233U;
    msg.goal_id.assign("SHRUYXQZTNOQXTXQHJILTTWIQYANSLWMQAPKPSHOHRRGABOVSSECIDSLNOEMAFXWVAUDB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VMWALHUPBIOTHJCZQWQBZLUSFBP");
    tmp_msg_0.predicate.assign("PEIKDBDHPNVTLDYLJSYNHXLWRWNDGXJPPGYUGAIYAUOZPDWNWKOYMQZBMQWJWFZQSTMQXBVZVXOCAPKHMWQFJCPSODFRQPNECSTZUBAQJMNTDYRVVTYDGLOANLKRCKFNSMWWXUKGMRBSISSHXCOFGUHJERUEYAIVFIAAUBKOPSLEZTOTJXVLVB");
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
    msg.setTimeStamp(0.336502171154);
    msg.setSource(45297U);
    msg.setSourceEntity(172U);
    msg.setDestination(58424U);
    msg.setDestinationEntity(188U);
    msg.op = 49U;
    msg.goal_id.assign("SUHVMLPDLJSXBYBINBPZOXMFXXQGPACTMEKFMCRKDOYXPDRMOSIMZESACSNHGVJKEQDWFEFRZDTYFNQCSKGMVQLLUSNECHXBROGVOJTGVYCHPPSBZZKTRDUUIIRNAASBIBWUKUCLKBRZVIEOXMIGYJLKKELVEJGJJELYHPNQANRHZCSAUTIWCFQHRTCRXVTTGFFTMOHDDBEJLZATWZXUQYWMHWKZPUIDWANUYGYIAFBPVVWGNYAWDOPWHQXJQL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ANKUUASBSMLCFXXNPQXBDWQCFYOFMGQWOYAWMZCBDGHGEDVLBNHFZGMJUHZFTUIEFBPBIVZELEIICZRDXFAYKNCWWBMJNREGHVXNCJSIRQAXOSTLLPKVGPPAKGOPUCJVJCDNAQRQUYUTPSIQJZMCUVQRNTPIDHZZRJWVIPASQZBHKJISODGQESRHWVYBMSSOVMPFJFEDMUWYDBOYEDXEAWWYKLTYOXKOKFGTKVNRTUAKHTTROZJHHLELYGIC");
    tmp_msg_0.predicate.assign("PYUKQMTDTPGIRLSCFQMBVRETYEEDRBUUAMXGDIMBSGIXLKWGGGOMJHRYWMOFUNCEPXCZZBWSMFLWJSNLNLRHXJCOVBSQSCGHZYALIHHTYNFHYWWGVDYSIROCQELXFJAIFNDBNAUDTPBTQWFCHJVWQWKKDI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YEAAHZTTXDYFLBKSRLENQOONQUVMURWFFPMPCQIONYCWQMBLJKAVEWDJFCGGGEQEVICNIACV");
    tmp_tmp_msg_0_0.attr_type = 137U;
    tmp_tmp_msg_0_0.min.assign("UUGDWHPPYBCFFHMCLLZOGIAMNSQPJJGVYRZTNSAFYSGAREUFFBIAXWKVBALUGPWXOLPSTSDZIKYSOOHXYQNIZRMNSVTRIIDJJJQTPWZKTLSHMSBHWGQTNDEICGYIKAPHEKPJWFVCCMNXCTCZXAXZAFOFYTCDGBESHEYBWIOOKJBIDHRWWQLQFOTOUBXYQ");
    tmp_tmp_msg_0_0.max.assign("FLIMHCPPAVBQENFBLZU");
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
    msg.setTimeStamp(0.0301958828477);
    msg.setSource(27869U);
    msg.setSourceEntity(62U);
    msg.setDestination(40348U);
    msg.setDestinationEntity(113U);
    msg.op = 96U;
    msg.goal_id.assign("PEJNCGUCBPZSHYFWJJKJNVQNMLYRBTLHTHOFPDVVOCKOAQYGTFTRPKHOEBGUMRALMQEDCLLGXJDSGQGSGARSVWZFIRQLRFM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IXKSDQIKGUJEMUV");
    tmp_msg_0.predicate.assign("BWZAHTOFERKPWEJORSAJOXWEWYGAJONMMDCIZUMQNLGXUJIBZFMSUQGHJKRFYDVEQWFPHIMQKNSHCCTQPWVRDMRYTSLTQRSFSDATIOTZLEZDXYUHZARGAHYRNLKQXZOVJOLBANLVFUCKVWQNKETHMVUBBGRHBPAOETZYFMDPCXRJKYXKKSGFBQZCVNWPUOOEEVGPBCDDUFXLE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VFEIMTSMAEVHPWOHYDRYYJGDCIWXCGAFVGNPQBPMVRMCTJQKIBMBKEHOEUNITXNOFOYUBSEMZWDEFIBSXLBKUCDOKGUJVBFTOIKKLOPOEGABFNXZNPZZIEAZSRLIDSPKCJNNRNHNVOEHUWCJRTCMEQQUQUKQDHOWGRPNRWSQB");
    tmp_tmp_msg_0_0.attr_type = 30U;
    tmp_tmp_msg_0_0.min.assign("KJPQLQROEHVCVRZUGQXNFGPTDLTHCYQGSFTREWEPSMZZXVOVXLZGMUZZEHIVXCPDNMAHARDILLMQZWYSTCWBKCWCSMWCZPCAFBUTLTKSLVNRMYIRWDSTKTEHBIUFKODIUXORJYNKDJFIEJBHFJSQPWMGBVON");
    tmp_tmp_msg_0_0.max.assign("RTMWIANNEXVHQWUYXMJNKOKTKBZSYJQHVBRGIAQTZATYFUJFOBKGSFKUBWLOXABLMMBUVGKJSYGJOARUWJIFRFZEFNSPGLCFDUENJNAIPPNRQETQPZCXDYLGQWNJDHUAEJTSSGLYEMIXCPFHKDOWLVXOMAVKHMBMDGVYPICDNYOMCEPDSWQZEOGLTVULOC");
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
    msg.setTimeStamp(0.544079084478);
    msg.setSource(51142U);
    msg.setSourceEntity(212U);
    msg.setDestination(26969U);
    msg.setDestinationEntity(39U);
    msg.name.assign("CPKJUKOTTEZKLFPRBPYDCJUIUGZNFVOMPHPWOFRPPIVMJIRQWXSHYBLWKOEGPZVTUDVYGYZUCJQFSZUARFBBRQTZQELFAIFHFHCCYMYXSJDWRMVKXPEAXUELRUKQOSCNZEHZMHLDCWDGYVTJAYABXIDBXNBAINTCRSQWOYPQWBSISTNSTXQMXCGHGDRJLVIAVDWQEQIHZEKSXLKGOGBNGNBZIAOJVX");
    msg.attr_type = 127U;
    msg.min.assign("YZLXLQVILGKAUCCONAOMSNVZLIMFQTOXJBHMNKNQVXPRSFZLFLUDCRFIWGAMRKPQVHEZTOWXKCWZLMTHFDBEWBSR");
    msg.max.assign("ANODLXISQCOACLMQSIXFZHANMPXNSSADCRNVRCDRFXLCOCODSGQUIUYIHPUWQQQTXJVPWYMRDCPDIMGGFDGOZLDRWZVBWLHUTCYMELBZKGPWWEVKGLBORXFPVESJKMYQSWWICKYHHTAYRKXNXBTRHJNTSBVVYEOEEALUFKAVYBFBSTHJJIAUMKAZJOTOTJPM");

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
    msg.setTimeStamp(0.200794648309);
    msg.setSource(27180U);
    msg.setSourceEntity(130U);
    msg.setDestination(27737U);
    msg.setDestinationEntity(170U);
    msg.name.assign("DIPASJXMMGOMVKGJDPSWQJVYTRKLMDYFJOZQWIKZFNSHLPYOKRTHAYGABWSPOXWQNFBBYNMTJTDGLL");
    msg.attr_type = 181U;
    msg.min.assign("JWYALOEFFJFSIYYU");
    msg.max.assign("MAATYYVWWYYKDECGXRMIO");

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
    msg.setTimeStamp(0.60231703173);
    msg.setSource(24300U);
    msg.setSourceEntity(30U);
    msg.setDestination(32648U);
    msg.setDestinationEntity(142U);
    msg.name.assign("XBCZSMYRSJVGEBAIDOQKCCPISOUQHSTRDOGJRNCWEPKDPENSLDUFRIYMIBQDXPSAJVUDZJTGBHTEEOUUGAPAUCPIXR");
    msg.attr_type = 222U;
    msg.min.assign("EJNMZYMEHFPNMBMOCNQKDHJJQLSHZODDRLDBJTDUXLEQYUSPVXKDHYVASXOQQWYGVJAKUABGUZQNAAZCCCSMGBKUOSODKVFGWZCBINRHJTRLYZPZIPTXXEICNSIUWIIEQYGCOHERNAMYRLJUBWKXKLYQRRJFGSYCIEBKXVLDEMTKGIJDPZNVOWFIHPYVOTPSRRGZUPWVMFIRPXBWFPKVGGLDFFNTXH");
    msg.max.assign("ONVGJMGDRPBAU");

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
    msg.setTimeStamp(0.729162310266);
    msg.setSource(23452U);
    msg.setSourceEntity(136U);
    msg.setDestination(32978U);
    msg.setDestinationEntity(113U);
    msg.timeline.assign("ZSEXCNCSDZBLAKAVPPDFNPOCNPUGDSXXSIBJFQPVYUKWFWNSBMOIVYJOWOWDTUHYTANCEFQNJLRLDEOVJISCIRTQPPHMYCXGRAOYXQZJAHUJUDXUUVVRQJGANIMZWKEWZAKKHRLBLBYXSQAILLREMEFYTAMGRCFHBEXZ");
    msg.predicate.assign("FIVWLQWTQREGTIFMFIZLNYQVCANYOPOEIMEERJKGXHVABDTVTGPLOCXKSZYOLMMAXODJZPUZXXYCWRDDLDHLSGCVARPAZTQTMUO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HOXIWPRUHCIVWIQHMMGYSMXAHLSXUGQGSYUJGDLRHWXUODQXFMOPOSYKEWLIKEZDGFNZFKGMEJQBKRAZWTZUBQ");
    tmp_msg_0.attr_type = 115U;
    tmp_msg_0.min.assign("BXOFLRITWGKBJTXNNLUNCPGFVUMQBFGRTXUPDUMYIKHZQYNCJQYFFTGNTEUQJRBUYHEPKBNELFGYVVYGBAOMOJKWJHOLJLIJDAOXKSAQDQXAZGNZBHZDBDJKHOXPWMYZMUPNZFFMWKDIJSHLMVW");
    tmp_msg_0.max.assign("VRNBOWJDPTDWFASQDRLKOCDWNDEUCJBNTUVVHCPFPWCBRRCEOEUIIYJNFWEXIJZUHFUALNLNEIKUGWZKILYRGYYBUGDPBZAKYXOOTJQMMSLYQJTVDGTUOXFBMNRSSKMHXGAEFVMPCNPMFHXBHJPTTACOWOUZLZESXEAOGXAIHWSMSDDQSGYGFAYIQFGQEPQVWXQBZVHTKBNJZVNLBCZZKLWYSPHARMAMOZXRLEHFIRLG");
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
    msg.setTimeStamp(0.0329683979812);
    msg.setSource(52062U);
    msg.setSourceEntity(7U);
    msg.setDestination(1633U);
    msg.setDestinationEntity(169U);
    msg.timeline.assign("DFDQVILGPVHOBGAZTCWOIXIVXWRSTUMWXXFWLJINJMDIQURBKUGDTYPGTLJUZPGLKURTFARXRLOKVWFFEAEAYQWFIHHAYFDGPCOKYIESSRHNJVQZPJZBIBBBXCQBZSTXNIZEHXEMJAOOYPYUCLUKKQHZMMWECPGKQDMPYVNHMKACHAHPSWJOVANL");
    msg.predicate.assign("PIDRQNVNSVEPEXLTIOZBZMZYGTEYKKARTQYIXRTTKNDROWVETDBK");

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
    msg.setTimeStamp(0.810692151455);
    msg.setSource(4848U);
    msg.setSourceEntity(163U);
    msg.setDestination(30881U);
    msg.setDestinationEntity(58U);
    msg.timeline.assign("VEOCEFUZUTVVZEZVVPTGFWCORHENSEJOAXOGOBNYDJXILYUXBMZBCTQFIFLXAITUPHQYSJTQDXLCBIFLIOSAIEFZMKFRVQQITCJDVYKDWSKWCZWYEWKJLHOASAFVXZRXGNJNNMGPRMMRBRDWQUBNHQ");
    msg.predicate.assign("TJSJJAHHSUBLTWPDBEQLQXRGQXWQTZOAOMVHDCEWWKE");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("GTEZHVMLYZZKBDSJFLGEFNOKJCWOWEDQNAHGYYNCBYMLDILVCRDRGHRVNLTQHHBISALJUWBZONPGVXRUPTFNMVIYPJXBSYSXTQTNEPJNICUOKPVMMMGTOUPDAHRAFIUWUCNSGLZZOWFQDIZGFRASNYJVQUPDKQZSVYQXQHS");
    tmp_msg_0.attr_type = 153U;
    tmp_msg_0.min.assign("NYBVDVIMIIEZRFTCWQFACUWKNHSFFARCOPFQKKKVTKFQCPIQGLXBOSADADRBQSCEONFWJBILDXTJAZJRRUNFL");
    tmp_msg_0.max.assign("DFRTROSTHHWLXIFJKDYQSGIPPEZOSUTWOXARKCRBENSLWVUQEAYRELRAGHYDMULKOCGHFJJYONZMZDDLIIUAQJGVWEAYNZRZSDJPPCBHYBKSXWUKQBXAQBFZBTTLWYQKKUFBGNCEZC");
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
    msg.setTimeStamp(0.249958309605);
    msg.setSource(25343U);
    msg.setSourceEntity(238U);
    msg.setDestination(20319U);
    msg.setDestinationEntity(109U);
    msg.reactor.assign("BCIMQIMCPRAUJGIJKNYMBKAFGMOLGLYYLSWEREKPTAHIGQKVYOTNFVKUCOQFBWTHZJSBLFBJFJCHMNMJXLLULWTDYZIBFXHEIPUPSMVBXKCWXMXPHHXVKZDPXTDQHFZPARUSCMTNOZUPKQYWZJZCDKZQOORYGGJDCWSWAYAVJWUZRXRDTVNENNOSZTQULJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZILKIXOLNXOFBIRXNSYGEMKPYKCKPFUZAYCHVRJRQUZMHPJFSCSBGHZSMURHNBHUAZFBHEEEMJIOTSTDLKPIOVOQNTGYAKWTPCLEHNOWLOELAIUDNDWXGBLRZJDVGYPTEUQZFWLQIIEAZCGPSK");
    tmp_msg_0.predicate.assign("EINQDQHXYPADTGORBDEFGBBQOPWLFZLAWUMEXZCUJIJUTQORRVMGSWVSYVYLHCFEIWUCDNIEGCRATHYHYCRBBOKNAJFQRPRZOYJUZSMJCKMOAWPAMCYILQSQBEUKTKTKHKXNSMYZSTLFEKPFNUHLSAKDGITZLTVXGBDLUWYNICHHBXVWPUWXHMGZDVRIFJMJJPSOQIROGWGFRVVLXHDINAEOVESGUSNOZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HOHCXFKUZVAEPGAEWOBWWHLEFTQYCDEIFJPHYYTTGOWLIKDHHUKOHRVBLFRSXUFZIYMRFOHLIZIHMOXRVCONNSYSZJVUMNLLGFAVWOPDVUGCMDIXZCBIEIQKZPGFKYSIWAXUNVPKBKJXVADWZJCMGJYCTBZHXQXGRXDRCUQVMXDNWLGTNKSLJVRCMCKGRTNOQDJTANSQMFNEJZAPBTJLDA");
    tmp_tmp_msg_0_0.attr_type = 209U;
    tmp_tmp_msg_0_0.min.assign("ZOGOFJPLFQOMBDJVSDVVXEQKDZHLUHOJOFNXWACKVJWNMGEBCJUMRD");
    tmp_tmp_msg_0_0.max.assign("SHNZGHTLMUWKVMHXIKLW");
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
    msg.setTimeStamp(0.923096808812);
    msg.setSource(39684U);
    msg.setSourceEntity(11U);
    msg.setDestination(7882U);
    msg.setDestinationEntity(50U);
    msg.reactor.assign("ICMCOHEAUOSLTSFGLZBMHIHLJFPKYGGWTBXDZY");

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
    msg.setTimeStamp(0.439300572178);
    msg.setSource(45327U);
    msg.setSourceEntity(163U);
    msg.setDestination(34479U);
    msg.setDestinationEntity(112U);
    msg.reactor.assign("UMYDJRYXCFZCKHNXPVQRVSTTYFYDKZDONGALRAWMQVRKACVRUHNAIILWGFDIEEYWIKDJMWCSRPDMPBSAKGEUKYXSTIEUVFBLRTXBITOQLKGVAUQBXDSOPINWESWEZNYSDNBHRFTGMNJMJFJRQJFUPXVCPXEZHFLJWOGGFVLAKWDUDOHXCKETMOJUHBQVXMGYBOZLIMANKGERJTGMQQBQPLOAFCTPSBOCBQPJOSHZUCZIZNNSCTYL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AAFERZPOFYBVSOKKHGLELNNFMONXMAYJSJPMBDDKYCHGKNIUYDGZDJSWPJUZYFCNIJRKHVTOLTBTJDPSAXWVJEHYKBZLORGKDWQTGKGWRBIWFNIYDLIHQMCIWQCSRWPZEOYAXQHMFI");
    tmp_msg_0.predicate.assign("KDMYEFJSCSOQDRGZKHNLPKQUSINXWADIOZHVPCBGUJXHAMIGDDRZXIO");
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
    msg.setTimeStamp(0.305604744792);
    msg.setSource(23812U);
    msg.setSourceEntity(12U);
    msg.setDestination(41260U);
    msg.setDestinationEntity(47U);
    msg.topic.assign("LJAGKERBXUCRWQWLVNALONPPMWGCZLFUXHJFKVENSDPXUGTXJRFBMTSQHRRUY");
    msg.data.assign("GLYMXSBGIXJLJHQESDXHBSTHDKIMDAOEJPULWRAWTDHRCWPNYHVFYEIZGYNTJDMMLBUDOMXYDUGVLVWCZFBYGIIYUNEIKWHRUAASLSESTFTQOOZQQGOKBGPKDIFTKNHCAQCBMQVXMBKMPNEBQG");

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
    msg.setTimeStamp(0.504299011528);
    msg.setSource(762U);
    msg.setSourceEntity(76U);
    msg.setDestination(29674U);
    msg.setDestinationEntity(174U);
    msg.topic.assign("RYWSVRKJEFGPELSNAZNULOECAPDWCZFZJMRNPZIKMBHHGZSXUALZCICKLTQDTWOCJVEDPGWVXWGIYOBDIXQYXBWOPHCBKQLYFHNYKORELKXLPHZAGMIMJINCPY");
    msg.data.assign("BROBYYNRYZGXXDPKLHFJFJSVXTFFFOGAHPEVVZFIGDEIMECDKGATLNQXJYHJFARCBHUKKFIGSJDISIQCUROLJBDLPKYXUTLNUWMPQYMCTBQPBRRQRNOTJWWJUTQQMSKZWVWMMUVWVBFUHIVCLXEOEIPPMGHNZXNWZNRMSPUXUYUJT");

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
    msg.setTimeStamp(0.417353755723);
    msg.setSource(65367U);
    msg.setSourceEntity(20U);
    msg.setDestination(48529U);
    msg.setDestinationEntity(228U);
    msg.topic.assign("URZTNBKWCEDCXONTZGVHJJYXWTXBPEFQVLXLFVR");
    msg.data.assign("VXNIGVEDBLDRERKXKJWNHOJHMLUCTACBITOLYIKPLBPHIXWVGUPYAZSUWFYZITCDVZRXFQJGUQQXCFNINHKFFNNWNCWCETMSBJVPIOHEPXYKWDSWWHHDNEEGREQUSPONLJGXBTESOZLTYZKZASIBITGSUAKGHVLRMGKJZOXDRUVMJWYLCVDUQMTUWFAQVJLSXIQASNRFYRZQOGPCAFMDGPAPM");

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
    msg.setTimeStamp(0.627486472022);
    msg.setSource(5185U);
    msg.setSourceEntity(138U);
    msg.setDestination(13868U);
    msg.setDestinationEntity(156U);
    msg.frameid = 184U;
    const char tmp_msg_0[] = {59, 112, 74, -110, 80, -88, -52, -74, 34, -103, -31, -77, 107, 103, -77, 105, -111, 49, 83, -35, -118, -41, -120, -97, 96, 124, -59, 90, 119, -86, 51, -51, 77, 74, 1, -59, 4, 65, -22, -94, -47, -18, -46, 28, 20, 98, 96, -60, 62, -96, -121, -102, -89, -120, 108, 65, -117, -111, 75, -109, 12, 94, 23, -48, -11, 85, -100, 22, -33, 112, -13, -90, 46, 4, -26, -82, 17, 14, 118, 82, -59, -86, -115, -23, -61, -67, 11, 84, -121, -81, 108, 73, -95, -32, -39, 85, -23, -78, 111, -106, 38, -16, -118, -90, -12, -124, 88, -10, -91, -19, 22, 75, -21, -104, -107, 101, -39, -92, -38, -63, 49, 97, 84, 115, 39, -96, 22, -126, 76, 88, -94, -35, 79, -45, 120, 52, 4, 114, -10, 126, 52, -17, 35, -26, -105, -14, -21, -40, 15, 73, 40, 69, -35, -80};
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
    msg.setTimeStamp(0.273082556981);
    msg.setSource(15549U);
    msg.setSourceEntity(14U);
    msg.setDestination(59386U);
    msg.setDestinationEntity(7U);
    msg.frameid = 36U;
    const char tmp_msg_0[] = {112, 62, -29, -23, 123, -58, -53, -109, -55, -54, -63, 85, 67, 61, -54, 76, 41, 60, 55, -115, 66, 102, 28, 125, 14, 56, 34, 99, 46, -25, -42, 121, -86, -58, -78, 78, -26, 14, 28, 0, 122, -65, 1, -30, 76, -20, 80, -3, 119, -29, -35, -32, 114, 107, -75, 50, -1, -48, -40, -125, -125, -26, 63, 21, -70, -114, 102, 30, -17, 73, 12, 74, 26, -87, -58, -118, 95, -2, 65, 92, -97, -3, 32, 120, 30, -31, 70, -101, 93, 58, -110, -100, 15, -117, -83, -40, 7, -15};
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
    msg.setTimeStamp(0.669297792128);
    msg.setSource(62643U);
    msg.setSourceEntity(231U);
    msg.setDestination(52913U);
    msg.setDestinationEntity(206U);
    msg.frameid = 195U;
    const char tmp_msg_0[] = {-95, -32, -88, -73, 48, 92, -36, -13, 117, -117, -59, -114, 95, 48, 65, -107, 20, -95, -31, 80, -45, 79, 95, -127, 25, 67, 31, 94, -58, -74, -37, 122, -4, -24, 14, 54, 114, -13, -20, -120, 103, 83, -98, 48, 122, -74, 33, 22, 82, 45, -44, -54, -75, -42, 6, -105, -101, 60, -105, -11, 33, 82, 4, 117, -97, 39, 110, 74, -91, 109, 26, 84, 109, 102, -108, 56, 3, 47, -105, -110, -116, 57, -46, -56, -66, 32, 22, -111, -28, 121, 55, -10, -117, 39, -50, 26, -64, 40, -14, -16, -4, 38, -77, -121, 98, -82, 57, 111, 104, -121, 20, 62, 23, -90, -8, 50, 84, -123, -5, -74, -109, 80, 72, -120, -127, 37, -112, 74, -32, 64, 36, -2, -83, 29, 108, -83, 18, -57, -82, -63, -101, 110, -15, -77, 73, 78, 115, 64, -27, -122, -127, -97, -76, -106, -120, -35, -92, -4, -57, 57, 9, 101, -69, 15, -64, 43, -22, -65, 22, -24, 75, -1, -67, -79, -39, -86, -118, -128, -36, 1, -109, 107, -17, -55, 8, 48, 38, 38, 42, -13, -8, 51, -59, 54, 106, -125, -120, 111, 5, -41, -70, 50, -22, -89, -110, 0, -79, -120, 72, 36, 32, 77, 65, 58, 8, 116, 53, -98, -42, 33, -37, -37, 76, 77, 14, -85, -11, -91, 30, 112, 33, 20, 62, -122, -48};
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
    msg.setTimeStamp(0.123391356805);
    msg.setSource(42220U);
    msg.setSourceEntity(234U);
    msg.setDestination(21536U);
    msg.setDestinationEntity(79U);
    msg.fps = 163U;
    msg.quality = 210U;
    msg.reps = 3U;
    msg.tsize = 8U;

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
    msg.setTimeStamp(0.784845643797);
    msg.setSource(14130U);
    msg.setSourceEntity(14U);
    msg.setDestination(4365U);
    msg.setDestinationEntity(248U);
    msg.fps = 232U;
    msg.quality = 86U;
    msg.reps = 151U;
    msg.tsize = 195U;

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
    msg.setTimeStamp(0.33275210323);
    msg.setSource(11793U);
    msg.setSourceEntity(109U);
    msg.setDestination(41199U);
    msg.setDestinationEntity(2U);
    msg.fps = 45U;
    msg.quality = 62U;
    msg.reps = 192U;
    msg.tsize = 166U;

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
    msg.setTimeStamp(0.822444835522);
    msg.setSource(2106U);
    msg.setSourceEntity(148U);
    msg.setDestination(56149U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.0923060817883;
    msg.lon = 0.322121875245;
    msg.depth = 182U;
    msg.speed = 0.152919920913;
    msg.psi = 0.748925140999;

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
    msg.setTimeStamp(0.963114209887);
    msg.setSource(3163U);
    msg.setSourceEntity(109U);
    msg.setDestination(1486U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.654297988361;
    msg.lon = 0.595358844131;
    msg.depth = 52U;
    msg.speed = 0.468348067502;
    msg.psi = 0.668703052999;

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
    msg.setTimeStamp(0.932300956569);
    msg.setSource(2506U);
    msg.setSourceEntity(85U);
    msg.setDestination(15763U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.437002079413;
    msg.lon = 0.714767871815;
    msg.depth = 59U;
    msg.speed = 0.095729140463;
    msg.psi = 0.48510517793;

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
    msg.setTimeStamp(0.388820705771);
    msg.setSource(16462U);
    msg.setSourceEntity(98U);
    msg.setDestination(6369U);
    msg.setDestinationEntity(156U);
    msg.label.assign("RMQFWEPGQVEQKZSBNRKVVLHINLXHVFZEKMMTOCMXNHBFWYLKEYBKVMYRTKTUGRXWNJQRAPHTBNPDLZXQIGUMUPOSUWHKGYLEAEJOIACHDNXAJZZMSSDVGOISGUBIPKPPCGTQVNFNMECADPCOIDIVRJIOTPFYOMCTYXVHZZLOEUAXTANQPGRSLZYCHITNHORSFQJTJYGCDZDRQGWEWIXM");
    msg.lat = 0.0345866569168;
    msg.lon = 0.0881949860802;
    msg.z = 0.920562074096;
    msg.z_units = 42U;
    msg.cog = 0.218188127251;
    msg.sog = 0.00480044153918;

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
    msg.setTimeStamp(0.765794695104);
    msg.setSource(35562U);
    msg.setSourceEntity(189U);
    msg.setDestination(25809U);
    msg.setDestinationEntity(148U);
    msg.label.assign("DCCTUCDONIQFGVEMGMLYIAYVFZWOSSJKQIM");
    msg.lat = 0.145661128572;
    msg.lon = 0.483974437939;
    msg.z = 0.826165041056;
    msg.z_units = 146U;
    msg.cog = 0.191253452139;
    msg.sog = 0.554255537918;

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
    msg.setTimeStamp(0.00289847097643);
    msg.setSource(37316U);
    msg.setSourceEntity(149U);
    msg.setDestination(54475U);
    msg.setDestinationEntity(120U);
    msg.label.assign("YCYHVDWBMLDDJMHRJSWSPOWYAPNYOCNFMVDTBTFGWMUUEYVWEOAUUNBTIARYZITEGGATIBZNUHGMFOKHVHTFUIJXHZWMQQBYLBSIDPIFLTNQSJJXUJDUEELKKKZGHFLNOPQZAOCVCAXKTFYWQSLPMQBCBRYGXGTZRXVAZEBXYKD");
    msg.lat = 0.997067692142;
    msg.lon = 0.342846489044;
    msg.z = 0.260329833523;
    msg.z_units = 237U;
    msg.cog = 0.360075131267;
    msg.sog = 0.798130233442;

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
    msg.setTimeStamp(0.901127952208);
    msg.setSource(55687U);
    msg.setSourceEntity(252U);
    msg.setDestination(64093U);
    msg.setDestinationEntity(14U);
    msg.name.assign("BUBWAMYZGGNQLFFSPZAADOMKXTOALPAYMHJNEJQOKLEEOVHYXNEWHRNNUOMAGLKQGJWBYTWYSHGKVDVUBQTRHLQCEXPMKRZPBPCRGQCGEJKHWOLCRSRXVOMFUOOFKGBCTIBAPFDVVFVMRMWLVCBTUCUCSDCEJTSNTDNJGVIDZXIZKXSYIPWWAWFSNLBFIHJLFOUKZDEHIXVIMNUSLXMIYGTYYXRDSJEQRUBXQQHAYDRAZPPHZTJPIEFIJKQTNS");
    msg.value.assign("LFAYTBYZKKOCGWGCDVIHIKEMGSJBQZOCGHBQVEQIEIRCTINJUDWPQMBJOEFDYTCARPXIDKNTVXSIBVZPKVZSEQBOBRSOLQJHDNRHXXBH");

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
    msg.setTimeStamp(0.685912199218);
    msg.setSource(28810U);
    msg.setSourceEntity(96U);
    msg.setDestination(60058U);
    msg.setDestinationEntity(138U);
    msg.name.assign("COHNSDEWKAPXZMZSTOKFJGJFDRSVBFKHQKQMWSVPSNRCNXTKXPQJXWTIOJMZ");
    msg.value.assign("ZXEXFSSIWYPSLXCDDQLWQVXJRQRXOIRVFDKLLPWDVUABINLOCORHYECEEBCBBIUHTCINCFGMQEACTAKRZAMQNTOICAAXGDSUWOEEVLBKOYDKLRXAMDPYJGEJDNPPICSUMLGFNPDVTZUBVKMNBHKVNENBRIFFF");

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
    msg.setTimeStamp(0.738615368324);
    msg.setSource(7179U);
    msg.setSourceEntity(90U);
    msg.setDestination(4448U);
    msg.setDestinationEntity(174U);
    msg.name.assign("NHWXAWEMFNKWJLPPEGHDLJJMSSRVSGGIZZDDZTEGCWXYOXGMUBHHYQTMMUBLONEPKBKZRXLDHMHACXLOWOQWP");
    msg.value.assign("RNMWEZDBYHNTIJGXPQSFDLYNXVTRXIAMVABLZJUVMUEGYJFSLOVEUWUMEZRHJEOYAGWQNWVMCMAUQGJZPIW");

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
    msg.setTimeStamp(0.887560599981);
    msg.setSource(7455U);
    msg.setSourceEntity(55U);
    msg.setDestination(12231U);
    msg.setDestinationEntity(78U);
    msg.name.assign("HWMTZXMKCKOWKARUHETGKYKJVQUQCZXUEMUMBZTWFTPCVPITGKIGXYPLCFDFRBVKZYLZXRQPHJSGLFCHXYSJIVAVWVRLJRSXZTMNTDOBPJSWNPNEBUULHIGXOYBHVHTDQKADAECBPJAGITNNRCQFPNGQDAOCADZHFIEVJJQLQRYUWHOTCRDOFLERBRXPMWCHMSDFLBJAXAAOEGOIQUWZWB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AQZVINIHMJYRKEDRGQGVXLLCDNVZHURNZVDAAJUSZFOLNIXZCYWWALVXKWPAQJCRSLMNXSBIZJZRISH");
    tmp_msg_0.value.assign("LHUTVBXPOWXBQHORWTQLNPEEZIKPVRQXUEOZIAUJLDEMEW");
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
    msg.setTimeStamp(0.994175458371);
    msg.setSource(10309U);
    msg.setSourceEntity(11U);
    msg.setDestination(57659U);
    msg.setDestinationEntity(224U);
    msg.name.assign("DQQOCMIBOXKTYTSKERFXURLCZLUWHWSRVGSEUGWQMTWNBOGXYKZYVUFQZDOBDDUOGEPNKXZJWHADYGSOXMKVHKCZEBFQRANRHCGKGPIRDEJINDSAXAFNEDSCRJCPBYPGVELNMWJUNKSIBWPTIPEDMZYIYLBGTTFWPHYRQPXLJMMKQLJOELLORBLAUZCNVVCAPTOSBAFETPFHXCYAGZFHU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FPIPYXXTGKOPYJUBRTPPSQDJOJPOUHDMNSXEGVWBQDWNFNBQWRFSOZDTFDXKVHDNPMXVNOTYFVWFVKSODBXAHXWNAHCDGKEXGRKABPULEULNEVCQEJQOUASLIRBYLNOQWCHPUKQ");
    tmp_msg_0.value.assign("IJUYEKFKXUQFUYNVKBQHWKTTTMBQACVMOQDBVJETGGPCVZHCJYSMOCFJLLLWNUITUDDLWBZTBLASXWPFAJMHQZGGWHXUEYHFIPNBVPDDLRRUHSVZWMBPZILCQMGVNTDTHUENYKTENJVBKRRMEOJAPDVSOVCHHXONPZXP");
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
    msg.setTimeStamp(0.0680998132459);
    msg.setSource(61339U);
    msg.setSourceEntity(211U);
    msg.setDestination(35420U);
    msg.setDestinationEntity(253U);
    msg.name.assign("TZJXZMXWGDRGBEIYQAXQOQTIJPHTCWLXDRLSRQAEHJBPSDFIMKNGLTDKWSBWSUHISOHKKRCVHFNYVMUMFSJQDVRZCHCDXOPXAKQEVEWOFTVPQGAZOINYEGNYVUMOHE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CCDCSYQNJIFDITRUJAEDMFHNLUYBYPTKMBSTAJJOBRRJBTJLWKURVBZLDOOJIJSWHBIDNQSEVFMRZDPUIYSNKCVXKBXEBFUQPKILWIRGSSQZXZVMLWKMSZWX");
    tmp_msg_0.value.assign("TXOYZSVYJEFELGRVGYMPDFAPLIUUDBCSPGHVYKIHJGZSLZUMDPKLJXUJYJAXPTDALFOEMDHHRKCTWKEQNASCBOMURNWDZXDAYIUYQEHOTABKZO");
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
    msg.setTimeStamp(0.549126768116);
    msg.setSource(11545U);
    msg.setSourceEntity(111U);
    msg.setDestination(52353U);
    msg.setDestinationEntity(37U);
    msg.name.assign("LHZIVYDQPTNENMEKNJYUIFEUCVCXSMIKZQDVGLOODCFLGSWBCEWVRXGZQGZZMXAHGWUSWXHZGMEYTXQTXZKVIUQKYIASCJOBQCTBMJPAPJORTZEFKXBSCPQ");
    msg.visibility.assign("RPLHEOUABZXZTSZABEASWNXXXXMGKRVAIQJARKDROYUNMOJPQVHUUDVTDUKLMFDNJGZTGRAESBTCPCKHUDTUMOKGWIZXFDCHMQKQWYRWTDWNSXXZLSHGFOLNQVWTRWMRZJIHOBNEUYGIRMCHPYVMYLYSZQDPENPIKENHSLOFKGF");
    msg.scope.assign("PYUQWCAVJRHTHTEYFSQFRNFKBMBARNJWJEUGITPLIZFDLHOYEGRAMNNVONSZGVOLKWLRVZJCEBSDXKBZNABHCYUHVZKBNJCYQQTUEADEKCWTUZHBIVOLFSEYREQXARPCSSGLPWTEMCAPQGJIWNATPYGJDGAXYFOFJBLGCUCWSVDJKUPDXSZNMXIYXIMHBMIVQLTXAOUPYTFZQFOZKVQOOKHIZWXOMUCMBSTNHMWDIJGK");

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
    msg.setTimeStamp(0.117173803717);
    msg.setSource(19135U);
    msg.setSourceEntity(216U);
    msg.setDestination(64349U);
    msg.setDestinationEntity(43U);
    msg.name.assign("WSFCOZHMHDST");
    msg.visibility.assign("XDPCAKGXPYHBGMUKTPSNDIJLXMJLRTGWRUNAWZHGVIUMBANLEQCQMLTWCTBIJRXOFPQDVNAWEDHTRSOSYQXDDTYFPWSPQRKIAKODCSYCZVVFTRAOPZJHQWRDBLNKYPQCFHVXYSCZFKBZEAHHNWQCTUJIGMGAVGWLNEHOCVLXCSPBMHGEXKRYFLNEUBIXBOEUFZUABDQNJFZKJOREEJPGTUZZDKLVWRMYSAIYFIUSFIKGQWEMJOULYMOHMJZSO");
    msg.scope.assign("EYQHTZZGSXEJCSJXELYVFMXEBPEXAAJQJMDGQOLPCQVRFVCQZEIKVMLPJATRTQTIYUSUWGUSSPPIIMWHDFLSCFKENRGOKPBWRFKBGWGGNWUUDOQYUCHDDMOXUJUWHBUIKJALXAOVRWWPGTSESMLZCDHGQYDNUIOAVACFTXOIDIERMZKKHDWBHMPTYFXNVXTHGSJY");

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
    msg.setTimeStamp(0.0938136870683);
    msg.setSource(47240U);
    msg.setSourceEntity(237U);
    msg.setDestination(16024U);
    msg.setDestinationEntity(85U);
    msg.name.assign("LSPVAAKYCBQPTQSUDMYIZVEHMZDPMDWBEHENMJUHTKXPLOTCSLTQOIVIUWAUBDVHBVTRDZOTWGDZBLQXJFEZPEJFJIKKBJRUXLUMLXMWZLGYRAIKWESPTVTGGNCPNHNRDJSABSXMFDFOIPGFLJYKCKAUHIDQCUFROQNVROBTMNIZDKGLEJXFEWHGULZEYKYYCUVQCICXWVATQSWYFHMAVSJCSRRYMGORHZNWFNAPSAZNRPCNQQKFOE");
    msg.visibility.assign("SFFCETHJNCPVTELSFPNJLUEFIOJMPIXGAHHIMYKVKFTXIDMASWG");
    msg.scope.assign("HMUGFPRSCMWZBXGMFPOOKEXOFNUIMHTANLPTRULVDPUAKZYHHHRWELAICMIPKNQZISFUVEXKKBJOTERAIXGRAQSRVFJOXDTSCQVBDWQVLDNYYUODTKSYCBEWBOXHKJSISTJEPUDFPPCFEEONNOMAYJBMNWFWEZQYAVWAPGVXVTJKXCJSCQCUMMJGVLGFDBIYGWZBUWEFUHWAYLRLZCQQYZTSINZ");

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
    msg.setTimeStamp(0.553615840331);
    msg.setSource(24179U);
    msg.setSourceEntity(140U);
    msg.setDestination(28798U);
    msg.setDestinationEntity(136U);
    msg.name.assign("FDQISIOZMNUOIKFOEQDVAYVWZRHCMKKORREYJPLCHJUZXNLZXNPMCNISCFHDJKRFKYJBMXAFNVBWEJUZUOCLNPPNTAGEDNXRBCPOXCDOMYZZEKGGHCHFSWQTDABGSQLHGPJWYLZHVCTCKQNVYAAOWVYSEKVIMZRHXLPAGVJIUTSGWYAJMKZBNDOFKQEDTRMRWLHEJRTWTBXAQLDGGGY");

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
    msg.setTimeStamp(0.313916485597);
    msg.setSource(18103U);
    msg.setSourceEntity(188U);
    msg.setDestination(50296U);
    msg.setDestinationEntity(47U);
    msg.name.assign("JEICOZKBIKULLIFKNHUOTVJVURXR");

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
    msg.setTimeStamp(0.8105853729);
    msg.setSource(1308U);
    msg.setSourceEntity(61U);
    msg.setDestination(33502U);
    msg.setDestinationEntity(126U);
    msg.name.assign("QTIDGIMZNWTHWIIHQMETXKNIDWXXOCTSQVDJUEPCJTMSZGBVHKKMEDAICAUDTZQEKATRMFASMEJKVBTJUWMCXOCFYVHZLKFELQSHGWDMNIWZPZRUTBVVRJRPFJPIBASQGZBUVAGREZYYFEKWXKWRCUNWSFOYBHTIUCLQGXGPSMAGAOPDZCANO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CMYLHEZCKXHGCPVJTSWGDQIGDQGDBFMXLCPWBYGECGFPWBMXRBONLMTVVKKRVGOIXABKXRQYMWHGOERWZIMJXFQUTTZOBAALOSKKRDIUJYNWVTENHYPIPRFCUTEQDYDLYWCGURZSPZVYPOMQTDLAEKKWFIBQSLMQMPCQDSPXIZIDHKEJLOPZHCHWR");
    tmp_msg_0.value.assign("OCEGUUISWKKYXUCPFNXXWZMPBANQBYMQRHPWZAHYYKEXTNCDLZYRWQTKGDKOEIFKLDTCMLWNWJVOLVHLZFHBAERRZGBDPTMDRFCJKFFWSGUHBGVNZYOGOSMICIUELJZZQTABOVVLXQQUDSMASHJJJQWABOJFXEKQPXMXYHUIZMKJTNSSSUEOEDMHTDNBPDYZGBFIJPUCWYPARVKPUBDNEHXGIVTNCGAOFQYAGIMHE");
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
    msg.setTimeStamp(0.204250444457);
    msg.setSource(52812U);
    msg.setSourceEntity(84U);
    msg.setDestination(37975U);
    msg.setDestinationEntity(46U);
    msg.name.assign("BIBYQZLYJFJJHKQXXLMBHDOQETNTHLILDCLWKEZVTBEYWKHYYUOJAEWMFPTAICWJCCENGVQNCHJQQYLRFFMXMGAUTKVXRSOOTMABBSBIVUFIYJQU");

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
    msg.setTimeStamp(0.89723986802);
    msg.setSource(30624U);
    msg.setSourceEntity(33U);
    msg.setDestination(24316U);
    msg.setDestinationEntity(37U);
    msg.name.assign("YAEPLJRWOGSPDMMJPQVHSDUHZYKOEQQHLUPMZXGFIIBAQYVRMFCRSSBVTHVEGZCWHZTOOVLIMLASSNBOUGAYUNXVTWJKFXXWGGHWFGIKYQFIIKSNDNREDATEDSJZRZQCCPJKQAUUXKMLVTQBYEGOLPJXWMFTBKCWUZJAQJRXIUOEYWRXPFDBCGEWSMMIBEHAKKRRHYDNCDWGVLNDBNIUZRUPLKCYCMFJZHED");

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
    msg.setTimeStamp(0.00663282636175);
    msg.setSource(6923U);
    msg.setSourceEntity(111U);
    msg.setDestination(57759U);
    msg.setDestinationEntity(229U);
    msg.name.assign("LBNRITIQGCYCKDXBCNWZEMLMGMPDJOPTXVFVOJKTZXKEOKRTYQYEHHXQ");

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
    msg.setTimeStamp(0.24369115685);
    msg.setSource(6555U);
    msg.setSourceEntity(167U);
    msg.setDestination(37273U);
    msg.setDestinationEntity(168U);
    msg.timeout = 1065838765U;

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
    msg.setTimeStamp(0.78485095429);
    msg.setSource(33558U);
    msg.setSourceEntity(15U);
    msg.setDestination(678U);
    msg.setDestinationEntity(65U);
    msg.timeout = 688990664U;

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
    msg.setTimeStamp(0.282465651544);
    msg.setSource(41034U);
    msg.setSourceEntity(192U);
    msg.setDestination(42454U);
    msg.setDestinationEntity(42U);
    msg.timeout = 3387717999U;

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
    msg.setTimeStamp(0.214232613063);
    msg.setSource(38267U);
    msg.setSourceEntity(195U);
    msg.setDestination(45523U);
    msg.setDestinationEntity(113U);
    msg.sessid = 263796972U;

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
    msg.setTimeStamp(0.0748931685268);
    msg.setSource(27319U);
    msg.setSourceEntity(176U);
    msg.setDestination(57395U);
    msg.setDestinationEntity(17U);
    msg.sessid = 104831076U;

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
    msg.setTimeStamp(0.219932126407);
    msg.setSource(63830U);
    msg.setSourceEntity(32U);
    msg.setDestination(30560U);
    msg.setDestinationEntity(232U);
    msg.sessid = 1015588140U;

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
    msg.setTimeStamp(0.930210293318);
    msg.setSource(25536U);
    msg.setSourceEntity(12U);
    msg.setDestination(51348U);
    msg.setDestinationEntity(87U);
    msg.sessid = 4116888210U;
    msg.messages.assign("URQRDVWXKYNHEQUIJPPSLNIDERMCKUZVCQPZMJFRHYRHAQFNZGCFORLOGJPBYDMOTHXBYZFTVFKLYSMHTDIBHECQZWULOICICIDESFVZXURMXYEPXKSPTLDOXCATFVOZPYJRWUXSJVNCQHWNKODCJYMBIUXMLHQTWELWMLPSGGAKZTEEAHVJFKYDVSQUAGNZAUFFOJSWRDNDGNGBNJWCRMNJUKSG");

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
    msg.setTimeStamp(0.0869863146204);
    msg.setSource(26037U);
    msg.setSourceEntity(223U);
    msg.setDestination(28820U);
    msg.setDestinationEntity(92U);
    msg.sessid = 1022935346U;
    msg.messages.assign("DXUFSPWLMDDYEKKDQAUNLHBPWJOBDHJNKWASVCEZANULQPQXPKEBSYWCRVGNXMCWWZJDJEYSHVFAGDXDYBSPGJUPATISIYRHYJBELKTUSUWOHHBRLPLZFJIGYOVFQLMYDMHHRVVIOTKCNZWZGIVARFSRXPTMCKQXQKMLAUHRMICXIOXVJBW");

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
    msg.setTimeStamp(0.899229027038);
    msg.setSource(11175U);
    msg.setSourceEntity(237U);
    msg.setDestination(54503U);
    msg.setDestinationEntity(199U);
    msg.sessid = 4158151867U;
    msg.messages.assign("GADUBNFOAWLCHVQRVWNZESSYOLHBZPJKDXQOVYTTTLEONMISJPPIGFSMZXLIXTFUGHQJEYSTBIKPOREPJCVMUBGNEYRXMO");

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
    msg.setTimeStamp(0.101060920581);
    msg.setSource(37903U);
    msg.setSourceEntity(218U);
    msg.setDestination(938U);
    msg.setDestinationEntity(4U);
    msg.sessid = 4190371431U;

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
    msg.setTimeStamp(0.181462412114);
    msg.setSource(38633U);
    msg.setSourceEntity(230U);
    msg.setDestination(28680U);
    msg.setDestinationEntity(37U);
    msg.sessid = 3717213576U;

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
    msg.setTimeStamp(0.709779135977);
    msg.setSource(10712U);
    msg.setSourceEntity(129U);
    msg.setDestination(37340U);
    msg.setDestinationEntity(130U);
    msg.sessid = 2467669275U;

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
    msg.setTimeStamp(0.119575387618);
    msg.setSource(35064U);
    msg.setSourceEntity(198U);
    msg.setDestination(56857U);
    msg.setDestinationEntity(204U);
    msg.sessid = 3506185529U;
    msg.status = 238U;

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
    msg.setTimeStamp(0.47897209848);
    msg.setSource(3891U);
    msg.setSourceEntity(173U);
    msg.setDestination(14064U);
    msg.setDestinationEntity(188U);
    msg.sessid = 3366540888U;
    msg.status = 125U;

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
    msg.setTimeStamp(0.960267425017);
    msg.setSource(44016U);
    msg.setSourceEntity(110U);
    msg.setDestination(40042U);
    msg.setDestinationEntity(199U);
    msg.sessid = 2624104164U;
    msg.status = 190U;

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
    msg.setTimeStamp(0.836637372352);
    msg.setSource(19720U);
    msg.setSourceEntity(86U);
    msg.setDestination(6424U);
    msg.setDestinationEntity(55U);
    msg.name.assign("BJTEGRPKSSCEUNSCYLFMQQPJZLTBVLWCTFWOVYQGTHNIGSGFBQZUQLYGWMNMIXKINKWMQPOHFVJNPQAHRGLCZLXXBSZUOPOPBAWGAXQJEDHZEZRRZLOBNOCVTGEUDXIXXKSOIJLDF");

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
    msg.setTimeStamp(0.106542048664);
    msg.setSource(10015U);
    msg.setSourceEntity(196U);
    msg.setDestination(5795U);
    msg.setDestinationEntity(246U);
    msg.name.assign("KEBEYVSORLRINFNAJLFXVYRNVQTOSTGDTKAJHCIMPBIGPCNQGXBFKGJUSBTPLDHZCQJHHMZ");

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
    msg.setTimeStamp(0.175521959915);
    msg.setSource(45081U);
    msg.setSourceEntity(203U);
    msg.setDestination(8954U);
    msg.setDestinationEntity(4U);
    msg.name.assign("HFXPAMIGZXYVCOQOQNKZGHCUIUPWECVKJFBAGKYFFXNFLKBMYRYOMSRNPYJXHPAGUQQWUNAOKGKUZYWJLXWSBVOSRTHASLATPRCZQRY");

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
    msg.setTimeStamp(0.911089190903);
    msg.setSource(7504U);
    msg.setSourceEntity(135U);
    msg.setDestination(46977U);
    msg.setDestinationEntity(53U);
    msg.name.assign("ZGLIUMTVXWGUYNPIZRQQXCDCUYOLNFTDQRPOEVFZMAPG");

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
    msg.setTimeStamp(0.906965154911);
    msg.setSource(53213U);
    msg.setSourceEntity(103U);
    msg.setDestination(34736U);
    msg.setDestinationEntity(173U);
    msg.name.assign("FBYWHAHJSNUFTZVUYYULWXPIBKJDELGFQYMTDNQHIIHUFEZABQGIDRWSXMPXQNLACXJPAQKKFO");

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
    msg.setTimeStamp(0.189682948609);
    msg.setSource(56177U);
    msg.setSourceEntity(94U);
    msg.setDestination(40884U);
    msg.setDestinationEntity(69U);
    msg.name.assign("TOKATUBBMKJOFUXIICYRVZQAMCEBWBLSWZZQBUZDSLWRUFEYXAPBHYOZAURDXOGNEACIAMGHBMGCPJIGFWETLOSMXNYLSEJXDISNMNSMGKCHHEQTLUUVWJPYENDREFASHIRZLGFJQLKHYHKQFPOAVUOIXDLNNAYZHFQFPNLTIHHWNDJWXZOTCDRWQBIRTTGPZCGPGDLFVFGBWVPCDUMJKC");

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
    msg.setTimeStamp(0.987968337892);
    msg.setSource(22797U);
    msg.setSourceEntity(111U);
    msg.setDestination(43216U);
    msg.setDestinationEntity(6U);
    msg.type = 58U;
    msg.error.assign("LKNFEYEHYRFVZKNLGPYIMQSPTARJSQSZUAJPINYKLOQQMVABXCJEWICGDRUHBTDPZJQNNIOGJKUHIZMIDGRRTSAFVXXTOOODEFQYFGEBUATTKGFVVBCKSWHCQGQWLHKZRPOOHUMLARNLJOBZZXUNFPDKCWPMAHITINJQEZFPKGJXPYMEDOYCDEQAHYTRWULINWMIUXWXSXYCBGABVECHJMSSKURMJAPDHNGVSCTDSXWCDFZRLBLWFOVV");

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
    msg.setTimeStamp(0.956405714223);
    msg.setSource(19291U);
    msg.setSourceEntity(22U);
    msg.setDestination(10122U);
    msg.setDestinationEntity(2U);
    msg.type = 233U;
    msg.error.assign("OBZGJQVWETMCIZOZNAMTGFWSXTLDBANAPBXXIQXDJBACLUYODFMEOZZPOZLENDDSZBUAGRRIHLGUBPWHYFNYHUDKKCSYQXDDQLZVYLQJSGIAJCQRJKIKMTJBGYTKQBOIZMXPQMYEUTSPKHRKWWJCAYOASGDXWWLANISLINAJQJFFTTXRCVBQPRNKFBEHHFLHRYSKNVMGSVRTVOREPXOKCLEPGVNCRESEVYJCOWTIMWCHHUUNUXMVUWGVDHPM");

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
    msg.setTimeStamp(0.703979653238);
    msg.setSource(28625U);
    msg.setSourceEntity(221U);
    msg.setDestination(58362U);
    msg.setDestinationEntity(203U);
    msg.type = 113U;
    msg.error.assign("OUVEJEWHPZODGGTZVWQBLDOCTGXAPAMDHBFKPEVIDNRDYUUYHEWACCGZPPWMCYKBZRHEEEYSIEUNMCVNUPQFMKLGIJXJAZICAKWTWGDTNRHUSXZJRQJJSNZTFILHDAHRHTIGABSQQP");

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
    msg.setTimeStamp(0.589079232725);
    msg.setSource(819U);
    msg.setSourceEntity(41U);
    msg.setDestination(21211U);
    msg.setDestinationEntity(211U);
    msg.seq = 30461U;
    msg.sys_dst.assign("KAMEGYRGSBADFNOTLZHOCQOGIGIDMWKOUSCFUTOOMKYJPKUIMQGCUPQSBWEHVAXHIRQVLFEAJMVRYSCLHHDLKPJBTWRXNXAARDFDPLTBMVPESXGVDYCWEGCFJCJDHNIUQVAXMTIFYNWIOMZTTZXJSZEOVBWLCUATEWAKQRTFXFKHPALYQKYLRYINLQFBQSIIKGPNBZXUYWUSLUZEPKXRSJDBZG");
    msg.flags = 84U;
    const char tmp_msg_0[] = {123, -83, 7, -104, -1, -76, 89, -48, -128, 76, -95, 35, 47, -103, 98, -50, 119, 23, 89, -73, 102, 34, 16, 76, 51, 63, 46, -24, -121, -2, -81, -113, 60, -42, 16, -108, -128, -127, 93, 57, 6, 86, -37, 88, 45, 45, 82, 69, -76, 55, -112, 18, 85, 89, -2, -101, -68, -108, -78, 120, 7, 19, 46, -57, 61, 85, -115, -37, 58, 91, 4, 42, -113, 35, -89, 120, -43, -50, -33, 111, 49, -125, -13, 76, -38, -77, 80, 117, 71, 64, -78, 104, 52, 67, 59, 50, -68, 6, 11, -51, -120, 97, 77, -54, 31, 64, -121, -48, -2, -4, 92, -112, 25, -28, 20, 121, -45, -10, 22, 37, 47, 45, 99, 119, -101, 24, 65, 40, 114, 96, -1, 85, 111, 90, -16, 9, 40, 0, -28, 113, 90, -105, 66, 103, 73, 85, -10, 62, 5, 10, -50, -95, 86, 94, 56, -37, -7, -90, -27, -41, -68, -82, 48, 8, 26, 52, -113, 36, 59, -3, -24, -35, -116, -57, 46, 19, 84, -69, -17, 106, 71, -50, -117, -96, -113, -35, -25, -52, 124, -4, -62, 13, -68, -11, -32, 85, -53, 82, -23, -95, 57, -38, -88, 99, 114, -66, -113, -91, 96, -61, -24, -59, 95, 93, -4, -22, -35, 17, 27, -87, -83, -74, 52, -72, -81, 50, 89, 81, -114, -122, -8, 120, 119, 114, -128, 110, 87, -125, 68, 69, 108, 83, 109, -8, -125, -25, -39, -3, -127, 17, 87, -6, -40, 63};
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
    msg.setTimeStamp(0.677752008261);
    msg.setSource(12740U);
    msg.setSourceEntity(52U);
    msg.setDestination(39462U);
    msg.setDestinationEntity(119U);
    msg.seq = 48855U;
    msg.sys_dst.assign("DXRFGVOQTWWTCJHIXTOBLERYJVIZAKQKHHZZIMWZVTHIPMMESDMXJQLYRDHNPZASBPXMYENDYP");
    msg.flags = 203U;
    const char tmp_msg_0[] = {-112, -39, -88, -78, -24, -11, 90, -61, -28, 84, -43, -18, 14, 74, -123, -99, 35, 25, 28, 96, -98, -113, -59, 0, 84, 15, -28, 97, -98, 28, -71, -79, 124, 9, -125, 94, 39, -66, -95, -127, 42, -119, 37, -40, 0, 34, -121, 100, -48, 83, 32, 80, 83, 7, 16, -6, -118, -85, 111, -77, -107, 100, 8, -76, 110, 15, -58, -126, 52, -18, 102, -49};
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
    msg.setTimeStamp(0.814060526479);
    msg.setSource(22175U);
    msg.setSourceEntity(79U);
    msg.setDestination(43051U);
    msg.setDestinationEntity(156U);
    msg.seq = 44851U;
    msg.sys_dst.assign("QPCENKCPOVTROKOVMXFADUSNCBLRYHSJDWDIWKQBOMYVKINEMGEPCHQSIZWCVJECLDXEIWLXFGXHBWXZBTEZFXJOGFQTZDHGMRGMCNASSHAKIJIMTHUFAGOJFFJYRLPHAWZPWZKNVKBGETWRYFTYUDKVLCIIQXKVHAYTC");
    msg.flags = 8U;
    const char tmp_msg_0[] = {-11, 58, -119, -86, 67, -125, 59, 21, 124, 98, -34, -29, 113, -37, 110, 59, 42, -105, 112, 52, -25, 86, -81, -66};
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
    msg.setTimeStamp(0.528380609604);
    msg.setSource(49742U);
    msg.setSourceEntity(165U);
    msg.setDestination(61501U);
    msg.setDestinationEntity(118U);
    msg.sys_src.assign("TFCZBOJNSXIOVJIOQCVSAUKCDUKFLAVTHTRLWRYFFWRUVTTTXMJXUMBSMWDTGRHFGAQWRFAPPOKBCLVIVXJLLAXOQVWVYEGDPAISATOYMHSRPBFGHIHCKBEXJZNSDNTOZGJMDUMCW");
    msg.sys_dst.assign("EJDOBAYKJVOFTYKDXZOHGLYENWQVFGGTDMVYXVQPCPJAHCYOCERCBEXBWISOMTGLILIPRUBRPYYBMMWIRLMTORSFUOHRPKGTFZSLAYGSHVHWXQZUYWFJVNIKQJLVNZCTUIWIDLARUFHKNGPUDTDEEXPUKXESNHSBNFVZCFVNMEMSAFTWCWLLQZXBCOZDKXLUGXJMHIGAODVHARPFEKYPZXMQNZKRSQBPJTMQBDUOJSWTR");
    msg.flags = 4U;
    const char tmp_msg_0[] = {25, 66, 47, 76, -49, -67, -128, -1, 80, 44, -103, -26, -89, 58, 72, -98, -23, 84, -123, 50, -81, -67, -104, 23, -96, -45, -121, -89, -69, -5, -17, -127, -121, -57, -39, 13, 99, 19, 100, 83, 39, -11, 111, -6, 118, 116, 18, -46, -60, 26, 36, -12, 98, -6, -13, -128, -16, -56, -37, -100, -7, 68, 45, 15, 89, 71, 82};
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
    msg.setTimeStamp(0.231054909518);
    msg.setSource(21904U);
    msg.setSourceEntity(137U);
    msg.setDestination(7131U);
    msg.setDestinationEntity(1U);
    msg.sys_src.assign("HODHRIOFVSYCPUPATRMEKHPTCHZQISAULCUKIJZNWQXTXAFGLQLGIBPMDMLNFACJKYGESBEJHPWDFCZVDWUBQYYILJFSUMKSJLKRUZXWTTRWVWLCZXXLZDZQYGGRVKYLGRPYNBGFHASXIYOVPI");
    msg.sys_dst.assign("YCJWQUTMQCRRRDOZVLKUBIHSEBWIGHNXEZSFTBVYROU");
    msg.flags = 158U;
    const char tmp_msg_0[] = {58, -52, 61, 69, -31, -118, 80, -9, 115, -56, -109, 39, 34, 32, 25, 98, -43, 117, 30, -106, -124, -19, -93, -65, 24, -12, 30, 112, 61, -112, 33, -20, -115, 108, 34, -72, 93, 94, -42, -101, 55, -7, 76, 50, 34, -17, 102, 14, 121, 62, -64, 19, 68, -123, 13, -106, -104, -67, 1, 73, -95, 111, 5, 110, 92, -56, -18, 65, 98, 92, -57, -119, 84, 60, -77, 52, -61, -82, -115, -14, 90, -88, -51, -102, -103, -77, -108, 118, -112, 116, -30, 9, -55, -20, 76, -67, -43, -70, -60, 44, 64, 96, -106};
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
    msg.setTimeStamp(0.982225075021);
    msg.setSource(39861U);
    msg.setSourceEntity(237U);
    msg.setDestination(45481U);
    msg.setDestinationEntity(12U);
    msg.sys_src.assign("RLFNZRZAVOHASZKBEPJZBJMTCRBWPCGMREJWYSZGMVBAFBOGXKQRXVIGTPOEFFPCNFHODRBYMSZYJKMENFJFOXCWLSDCHGAAHICOMPLUXLCUIPLVYBTQRIQJYUORUYPIWYSFKCTVXJQGWDSVUWNXRBAZEQRXSYGABKSDJNZTHDDMJVKK");
    msg.sys_dst.assign("ELBWBALKVNANZDWNOTNXOFQWTRHFDXPIHJPEYAXNCMSYLGXYDLISBZLYAILMJIJMLNBDBUHCYGCWZBCMSXBQITVUBEWHFRKNZACQPMZJRHRZGQHOKTNFQUDKOCUFARJIJXEZYZBIMRPDDQAOOELRJJCLPRGDHIUSSGMIV");
    msg.flags = 75U;
    const char tmp_msg_0[] = {-47, -13, 11, -79, -81, -128, -59, -61, -109, 31, -64, 94, -94, 98, 79, 50, -81, -40, 52, 103, 10, 59, 56, 86, 35, -7, -113, 113, 42, -72, 54, -53, -26, 11, -61, 70, 23, 120, 34, 93, 54, -58, 110, -113, -49, 38, -114, 96, -74, 79, 49, 108, 73, -16, -106, 9, 88, 121, 27, -89, 110, 10, 34, 2, 88, 24, -20, 123, 54, 50, 12, 46, -57, -29, 17, 45, 91, -94, -77, -121, -35, 69, -128, -65, 106, -70, 30, 16, -123, 13, -3, -118, -12, -22, 45, 14, 74, 62, -82, -108, -77, 38, -111, -62, -123, -36, 4, -41, 50, -46, 70, 18, 65, 120, -91, 0, 9, 38, -92, 84, -47, -73, -110, -120, -80, 97, 71, 88, -6, 77, 31, 15, 96, 64, -101, -63, 39, -65, -128, -48, -83, -124, -46, -97, -100, -35, -116, 69, 69, 89, -80, -52, -70, -30, 32, 42, 14, 45, -6, 23, 87, 26, 62, -14, 125, -41, -69, 119, -122, -121, -41, 123, 2, -1, -7, 20, -55, 76, -113, -28, 84, -17, -55, 68, -70, -86, 125, 75, -50, 44, -2, -35, -126, 123, 110, -68, -83, 85, 38, 125, 87, 107, -80, -64, -32, -83, -38, -96, -56, 110, -32, 49, -59, 103, -55, -97, -14, 51, 72, 111, 99, -78, 85, -44, -100, -77, -64, -67, -113, 33, 122, -23, -8, 120, 32, 57, 0, -125, 11, 126, -65, 53, 38, -55, -117, 68, 6};
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
    msg.setTimeStamp(0.537564172298);
    msg.setSource(35465U);
    msg.setSourceEntity(75U);
    msg.setDestination(43366U);
    msg.setDestinationEntity(75U);
    msg.seq = 41931U;
    msg.value = 230U;
    msg.error.assign("VUWNFMWQGLVSNOYHJTVFBOPAQTTTOOSKHCIITHOUCGNEIASWECDDILWDPQKBNDPYZCFFEXXTJURCFNHZAXYOLANANKWVHFUQHJWJLFIRTJLYZEPWZVDVOZANQLANRQID");

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
    msg.setTimeStamp(0.197314398068);
    msg.setSource(39575U);
    msg.setSourceEntity(11U);
    msg.setDestination(60999U);
    msg.setDestinationEntity(44U);
    msg.seq = 18544U;
    msg.value = 89U;
    msg.error.assign("XSLQFLDEMOVDUHKLTBJRREUONZFQPFJNBZFEQZCRCXOYBAYOSQIXTOGAZERIEPKRGCJEOYLYXANIAPHNYMOGLWDVIREIXNLBDLYMAPMKUPCJYUOHYIJFVWWEDUEILZQVFTSTKHHYZUNPCGXGAWWJCBTPHKGUIVELHGBSDZJVSWUHJFYZRKNSWVPXODIMDGASWVNRJFTCAXHBMMWUOFBCXNCCGWQSFMKZSAPATXNLMGTIQTHQDUVKT");

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
    msg.setTimeStamp(0.907577451477);
    msg.setSource(48371U);
    msg.setSourceEntity(239U);
    msg.setDestination(14681U);
    msg.setDestinationEntity(65U);
    msg.seq = 39271U;
    msg.value = 232U;
    msg.error.assign("OKYTXTXATKGHPICPDFJLLQEBPQVJIIUCSZYJWUVXWOPRAQVLPECTMNKNXUBRCYEZZMFJFDSBDKVEEQPNEVPMHPOUGFSHAICSDVDRVBKLGIXYMJZJBRLSYDHHUISCSLWQYOUZWYCENGOHRRYNAIZVEJTQARTHWCRQOUDWJTLSOMKABF");

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
    msg.setTimeStamp(0.512659125048);
    msg.setSource(54086U);
    msg.setSourceEntity(249U);
    msg.setDestination(27109U);
    msg.setDestinationEntity(77U);
    msg.seq = 34175U;
    msg.sys.assign("BWNVRCYNYPLGLPVZXBXNDYUIQMNIMBVBODYHUZDVSCAXJXQJHQXDMBYPINIHHCNRSXPWRKLBHDRAEHYLGQSTEHOHEQGGRXAFOLMPFUVGEEQJIZFCWQACDJKUZAIPWCLTFNOORGZMRGYBQXS");
    msg.value = 0.225889472437;

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
    msg.setTimeStamp(0.87299965845);
    msg.setSource(43128U);
    msg.setSourceEntity(120U);
    msg.setDestination(27335U);
    msg.setDestinationEntity(254U);
    msg.seq = 16238U;
    msg.sys.assign("HXDSLQAOQIFAFTTGHXKRMUCUIUBTLIKHRRGJFCHKDHLPOWLRNYOYNOSWUGFSP");
    msg.value = 0.563773175519;

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
    msg.setTimeStamp(0.954179973959);
    msg.setSource(4034U);
    msg.setSourceEntity(219U);
    msg.setDestination(23290U);
    msg.setDestinationEntity(254U);
    msg.seq = 10779U;
    msg.sys.assign("QJIJYIQANYLWKALVDAZQEIBX");
    msg.value = 0.727047437369;

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
    msg.setTimeStamp(0.26867801275);
    msg.setSource(21221U);
    msg.setSourceEntity(187U);
    msg.setDestination(31320U);
    msg.setDestinationEntity(148U);
    msg.action = 180U;
    msg.longain = 0.092892666702;
    msg.latgain = 0.0163641213927;
    msg.bondthick = 1257761869U;
    msg.leadgain = 0.782614753036;
    msg.deconflgain = 0.800586695736;

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
    msg.setTimeStamp(0.603619626595);
    msg.setSource(46178U);
    msg.setSourceEntity(125U);
    msg.setDestination(27143U);
    msg.setDestinationEntity(85U);
    msg.action = 116U;
    msg.longain = 0.989823365737;
    msg.latgain = 0.188180800308;
    msg.bondthick = 513396746U;
    msg.leadgain = 0.337592067846;
    msg.deconflgain = 0.104069805636;

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
    msg.setTimeStamp(0.692205429888);
    msg.setSource(20911U);
    msg.setSourceEntity(205U);
    msg.setDestination(34802U);
    msg.setDestinationEntity(186U);
    msg.action = 56U;
    msg.longain = 0.567729072922;
    msg.latgain = 0.165442582737;
    msg.bondthick = 3402146521U;
    msg.leadgain = 0.0961231335198;
    msg.deconflgain = 0.270429306871;

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
    msg.setTimeStamp(0.541824882538);
    msg.setSource(39030U);
    msg.setSourceEntity(43U);
    msg.setDestination(34818U);
    msg.setDestinationEntity(176U);
    msg.err_mean = 0.127584930438;
    msg.dist_min_abs = 0.266489359178;
    msg.dist_min_mean = 0.192754555571;

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
    msg.setTimeStamp(0.630206784003);
    msg.setSource(29991U);
    msg.setSourceEntity(68U);
    msg.setDestination(21024U);
    msg.setDestinationEntity(88U);
    msg.err_mean = 0.987000861784;
    msg.dist_min_abs = 0.0842847227506;
    msg.dist_min_mean = 0.119922480158;

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
    msg.setTimeStamp(0.719076313615);
    msg.setSource(38245U);
    msg.setSourceEntity(67U);
    msg.setDestination(43402U);
    msg.setDestinationEntity(10U);
    msg.err_mean = 0.179193980529;
    msg.dist_min_abs = 0.259436678237;
    msg.dist_min_mean = 0.90674380654;

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
    msg.setTimeStamp(0.512278422833);
    msg.setSource(58597U);
    msg.setSourceEntity(120U);
    msg.setDestination(27477U);
    msg.setDestinationEntity(31U);
    msg.action = 216U;
    msg.lon_gain = 0.239816895204;
    msg.lat_gain = 0.674582153354;
    msg.bond_thick = 0.61788519525;
    msg.lead_gain = 0.0265262440762;
    msg.deconfl_gain = 0.612228632012;
    msg.accel_switch_gain = 0.373729829799;
    msg.safe_dist = 0.953709346333;
    msg.deconflict_offset = 0.977729272056;
    msg.accel_safe_margin = 0.605419804758;
    msg.accel_lim_x = 0.0868196548408;

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
    msg.setTimeStamp(0.599466874482);
    msg.setSource(21315U);
    msg.setSourceEntity(31U);
    msg.setDestination(3548U);
    msg.setDestinationEntity(50U);
    msg.action = 171U;
    msg.lon_gain = 0.253336599293;
    msg.lat_gain = 0.585161957007;
    msg.bond_thick = 0.732455907857;
    msg.lead_gain = 0.0500516515306;
    msg.deconfl_gain = 0.183300287045;
    msg.accel_switch_gain = 0.121430053314;
    msg.safe_dist = 0.737670838389;
    msg.deconflict_offset = 0.669682950778;
    msg.accel_safe_margin = 0.193439156852;
    msg.accel_lim_x = 0.777785147642;

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
    msg.setTimeStamp(0.0625086176783);
    msg.setSource(3498U);
    msg.setSourceEntity(231U);
    msg.setDestination(16831U);
    msg.setDestinationEntity(108U);
    msg.action = 15U;
    msg.lon_gain = 0.0404083788054;
    msg.lat_gain = 0.397352438164;
    msg.bond_thick = 0.223628989918;
    msg.lead_gain = 0.302235374598;
    msg.deconfl_gain = 0.930906897544;
    msg.accel_switch_gain = 0.0467963474047;
    msg.safe_dist = 0.724829060843;
    msg.deconflict_offset = 0.917512730345;
    msg.accel_safe_margin = 0.591832173155;
    msg.accel_lim_x = 0.459779394075;

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
    msg.setTimeStamp(0.737270641943);
    msg.setSource(1703U);
    msg.setSourceEntity(42U);
    msg.setDestination(46610U);
    msg.setDestinationEntity(235U);
    msg.type = 120U;
    msg.op = 158U;
    msg.err_mean = 0.53588867853;
    msg.dist_min_abs = 0.741553389274;
    msg.dist_min_mean = 0.0981174715502;
    msg.roll_rate_mean = 0.092818378343;
    msg.time = 0.338842384114;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 50U;
    tmp_msg_0.lon_gain = 0.29434123531;
    tmp_msg_0.lat_gain = 0.698905691216;
    tmp_msg_0.bond_thick = 0.758947506054;
    tmp_msg_0.lead_gain = 0.136296953994;
    tmp_msg_0.deconfl_gain = 0.325450576407;
    tmp_msg_0.accel_switch_gain = 0.924186406571;
    tmp_msg_0.safe_dist = 0.267737972947;
    tmp_msg_0.deconflict_offset = 0.149092957333;
    tmp_msg_0.accel_safe_margin = 0.265574471464;
    tmp_msg_0.accel_lim_x = 0.498755682584;
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
    msg.setTimeStamp(0.641839116363);
    msg.setSource(37627U);
    msg.setSourceEntity(21U);
    msg.setDestination(14254U);
    msg.setDestinationEntity(102U);
    msg.type = 2U;
    msg.op = 18U;
    msg.err_mean = 0.549313296568;
    msg.dist_min_abs = 0.191643547538;
    msg.dist_min_mean = 0.621689626106;
    msg.roll_rate_mean = 0.489078507863;
    msg.time = 0.22573917251;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 107U;
    tmp_msg_0.lon_gain = 0.492744298571;
    tmp_msg_0.lat_gain = 0.173272247518;
    tmp_msg_0.bond_thick = 0.715179232832;
    tmp_msg_0.lead_gain = 0.886533247012;
    tmp_msg_0.deconfl_gain = 0.73272205702;
    tmp_msg_0.accel_switch_gain = 0.933406883319;
    tmp_msg_0.safe_dist = 0.739341671432;
    tmp_msg_0.deconflict_offset = 0.313413780114;
    tmp_msg_0.accel_safe_margin = 0.606695938755;
    tmp_msg_0.accel_lim_x = 0.885450952745;
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
    msg.setTimeStamp(0.316080408057);
    msg.setSource(9264U);
    msg.setSourceEntity(172U);
    msg.setDestination(28627U);
    msg.setDestinationEntity(145U);
    msg.type = 81U;
    msg.op = 49U;
    msg.err_mean = 0.212789652356;
    msg.dist_min_abs = 0.664053016939;
    msg.dist_min_mean = 0.27405769217;
    msg.roll_rate_mean = 0.147018023567;
    msg.time = 0.817935040417;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 150U;
    tmp_msg_0.lon_gain = 0.301705484104;
    tmp_msg_0.lat_gain = 0.103161174813;
    tmp_msg_0.bond_thick = 0.352144992226;
    tmp_msg_0.lead_gain = 0.597670544204;
    tmp_msg_0.deconfl_gain = 0.443476880415;
    tmp_msg_0.accel_switch_gain = 0.998313386301;
    tmp_msg_0.safe_dist = 0.213809541326;
    tmp_msg_0.deconflict_offset = 0.964623004801;
    tmp_msg_0.accel_safe_margin = 0.895768531482;
    tmp_msg_0.accel_lim_x = 0.225782400059;
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
    msg.setTimeStamp(0.252967587121);
    msg.setSource(41139U);
    msg.setSourceEntity(182U);
    msg.setDestination(9681U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.132881736589;
    msg.lon = 0.942960933467;
    msg.eta = 812631142U;
    msg.duration = 24303U;

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
    msg.setTimeStamp(0.777021494352);
    msg.setSource(24010U);
    msg.setSourceEntity(93U);
    msg.setDestination(52962U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.180798828991;
    msg.lon = 0.426122159283;
    msg.eta = 3971004005U;
    msg.duration = 4117U;

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
    msg.setTimeStamp(0.603599025541);
    msg.setSource(19250U);
    msg.setSourceEntity(171U);
    msg.setDestination(5088U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.199886419952;
    msg.lon = 0.229351809397;
    msg.eta = 621244398U;
    msg.duration = 6408U;

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
    msg.setTimeStamp(0.308208292487);
    msg.setSource(25848U);
    msg.setSourceEntity(23U);
    msg.setDestination(9341U);
    msg.setDestinationEntity(163U);
    msg.plan_id = 6519U;

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
    msg.setTimeStamp(0.125487057542);
    msg.setSource(30002U);
    msg.setSourceEntity(11U);
    msg.setDestination(48683U);
    msg.setDestinationEntity(4U);
    msg.plan_id = 6953U;

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
    msg.setTimeStamp(0.0122679326316);
    msg.setSource(46167U);
    msg.setSourceEntity(109U);
    msg.setDestination(469U);
    msg.setDestinationEntity(106U);
    msg.plan_id = 16870U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.186331630667;
    tmp_msg_0.lon = 0.0922131216193;
    tmp_msg_0.eta = 775777656U;
    tmp_msg_0.duration = 17962U;
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
    msg.setTimeStamp(0.313263907162);
    msg.setSource(27681U);
    msg.setSourceEntity(214U);
    msg.setDestination(29569U);
    msg.setDestinationEntity(113U);
    msg.type = 77U;
    msg.command = 129U;
    msg.settings.assign("WZSVKLAOXRJGVGQQSARTAGZJBAWUXYTHOFIPZFPTYEGYBFEUKXOJTZUUOMQKIDDBULLXKMFRRIAWVLHZMTDNNROCKXLQIKAXIEALUZGVJQEDPMPWOQOLMTDDIBEBHFYFETSRBCJLTNWDAKEGGPPNSVKDGHJOANCWBRCVTNPBSZCQFBCUJKPFX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 14831U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("VCBJYNKBZZHTKGRXXRYTHAZAXDMLUEDVHYXLZILIVCQLFPHEMZCIWGYTLQQXRPENNXUKBMHKJDPFPQNJWJCUWUNOFENU");

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
    msg.setTimeStamp(0.842113671987);
    msg.setSource(9056U);
    msg.setSourceEntity(47U);
    msg.setDestination(53712U);
    msg.setDestinationEntity(93U);
    msg.type = 87U;
    msg.command = 202U;
    msg.settings.assign("XFCQLVCLJZNBOJGFEAVXMTWURGIUKLTJEOLYNKWLFBNZJUOSRWPMGGBUSIUPOCSESCSWZDHJQJFJRLGYPMH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 9199U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FCLOEUGTONVVOHTUWBLEARQQILCKWUCZUFACMXUUSVPEQMMODVNOOPUKXBNJKTEMCXWFJWXZQZJKZNFYSA");

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
    msg.setTimeStamp(0.741316009307);
    msg.setSource(44274U);
    msg.setSourceEntity(201U);
    msg.setDestination(34441U);
    msg.setDestinationEntity(137U);
    msg.type = 34U;
    msg.command = 248U;
    msg.settings.assign("XAMXHUUGFENSOLAIFBYEBYLOYTWIRWHGTGQBYBQYDGBFAVPTJXHUKDIXDAHHTGZEAXDIHUPDKWMRD");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 38101U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("KXABETVWFCDKXCIYYBHFJ");

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
    msg.setTimeStamp(0.0962456153395);
    msg.setSource(7559U);
    msg.setSourceEntity(109U);
    msg.setDestination(13962U);
    msg.setDestinationEntity(219U);
    msg.state = 93U;
    msg.plan_id = 25483U;
    msg.wpt_id = 88U;
    msg.settings_chk = 21027U;

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
    msg.setTimeStamp(0.448276453522);
    msg.setSource(59429U);
    msg.setSourceEntity(156U);
    msg.setDestination(38939U);
    msg.setDestinationEntity(112U);
    msg.state = 181U;
    msg.plan_id = 35594U;
    msg.wpt_id = 79U;
    msg.settings_chk = 39322U;

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
    msg.setTimeStamp(0.342013772219);
    msg.setSource(31624U);
    msg.setSourceEntity(54U);
    msg.setDestination(17147U);
    msg.setDestinationEntity(74U);
    msg.state = 32U;
    msg.plan_id = 40829U;
    msg.wpt_id = 183U;
    msg.settings_chk = 23667U;

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
    msg.setTimeStamp(0.590904732656);
    msg.setSource(41368U);
    msg.setSourceEntity(165U);
    msg.setDestination(17989U);
    msg.setDestinationEntity(15U);
    msg.uid = 40U;
    msg.frag_number = 53U;
    msg.num_frags = 2U;
    const char tmp_msg_0[] = {-110, 93, 97, -109, -77, -62, -81, 76, -63, -69, -34, 125, 30, 42, -48, 67, 28, -32, -86, -82, -36, -35, -77, -26, -106, 99, 53, -64, 121, 47, -109, -116, -7, -68, -92, 81, 60, -113, 85, -115, -84, 20, 47, 86, -26, 85, -84, -31, -42, -50, 50, -24, 116, -95, -11, 52, 92, -46, 122, 93, 70, 108, 104, -128, 123, -67, 13, -21, 111, -62, -15, 35, -45, 79, -20, -6, -1, 48, -119, -95, 111, -31, -43, -37, -59, -26, -14, -54, 15, -46, -9, -121, -81, -23, -116, 18, 89, -114, -22, 1, -117, 20, 49, 113, 120, 98, -80, -18, 56, -3, 48, 89, 87, 37, 114, 9, -126, -106, 30, 20, 92, -93, 74, 59, -101, 67, -104, -56, 16, -10};
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
    msg.setTimeStamp(0.781640240789);
    msg.setSource(8896U);
    msg.setSourceEntity(207U);
    msg.setDestination(59978U);
    msg.setDestinationEntity(120U);
    msg.uid = 71U;
    msg.frag_number = 59U;
    msg.num_frags = 92U;
    const char tmp_msg_0[] = {-128, -79, -8, -121, 101, -76, -27, 114, -76, 29, 95, -27, 4, 52, -30, -111, -106, -40, -81, 0, -94, 79, -29, -108, -31, -48, 49, 99, -59, 27, 4, -109, 120, -53, -15, 126, -118, 87, -70, 23, -16, 16, -27, 81, -127, 12, 22, 97, 38, 9, 119, 29, -33, -22, 54, 20, 115, 58, -93, -93, 90, 60, 22, 68, 69, 30, 93, -22, -42, 108, 118, -116, 7, -77, 39, -72, -126, -53, -28, 32, 95, -4, 11, -75, 81, 61, -25, -115, -103, 110, 61, 79, 12, -82, -83, 110, 107, 42, 72, 109, 42, 10, 77, 63, -36, -24, -71, 108, 26, -18, 20, 61, -91, -103, -94, -54, 117, 84, 80, 56, 11, 57, 78, -102, 32, 46, -50, -77, -53, 100, 41, -105, 15, -34, 43, 84, -87, 41, 105, 90, -49, 62, 18, 80, 77, 78, 59, 75, 113, -19};
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
    msg.setTimeStamp(0.925782310633);
    msg.setSource(21661U);
    msg.setSourceEntity(12U);
    msg.setDestination(29493U);
    msg.setDestinationEntity(65U);
    msg.uid = 59U;
    msg.frag_number = 180U;
    msg.num_frags = 194U;
    const char tmp_msg_0[] = {21, -79, -77, 12, -45, -71, -114, -81, 111, 125, 90, -30, -13, 94, 76, 104, 32, -62, 10, -116, -90, 125, 12, -119, 35, -18, 1, -100, -81, -8, 13, 41, -8, -50, -71, -75, -99, -12, 55, -121, 57, -49, 120, -13, -61, 113, -77, 107, 105, 100, 3, 25, 100, 120, 0, 45, -29, -17, 43, -52, -103, 118, 124, -37, -17, 49, 106, 122, -119, 64, -115, 85, -120, -2, -15, -16, 93, 119, -105, 106, 76, -114, 11, 94, -73, 30, 82, -26, 116, -92, 38, 93, -38, 21, 22, 41, -31, -43, -12, -41, -16, 38, -122, 65, 3, -32, -92, -15, -121, -105, -104, -51, 70, 79, 1, 16, -107, 72, -71, 109, -120, -111, -5, -88, -67, 82, 31, -61, -82, -35, -33, -13, 21, -51, 120, -19, -103, -82, -86, -102, -7, 47, 112, 39, -124, -4, 82, 31, -65, 50, 60, -112, 41, 14, -49, 91, -15, 63, 75, 53, -72, 94, -58, -72, -17, -37, -67, 22, -8, 15, -97, 40, 79, 61, -24, -26, -92, 97, -18, -128, -101, -50, 38, -58, 74, 43, -27, 53, 46, 68, 73, -128, -109, -32, 60, 19, 43, -123, 76, 96, 15, 94, 49, -103};
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
    msg.setTimeStamp(0.738207701857);
    msg.setSource(32177U);
    msg.setSourceEntity(91U);
    msg.setDestination(52788U);
    msg.setDestinationEntity(104U);
    msg.content_type.assign("EGLVZLYAIBWNHPFOYCWOHEKCSJIVGKCUEYHXCYAHAJQIRLBJKZVRVTJSBOJQNWPQSMLJKWOUUJEFZPQQKETUCLYRCPVZABYMXPCGIPNFEHBGZIOWQDFGSMKWWYPUTXXTAMCTFTFIDLAELNNOONDQUIDJLHTDUAZHWRGFBMIBFEGVOFINWQKLXOM");
    const char tmp_msg_0[] = {58, 70, 41, 111, 81, -38, 103, -95, -50, 8, 57, -89, 7, 70, 17, 118, -104, -34, -80, -39, -20, -46, -18, 119, -63, -62, 1, -43, -12, 24, 61, 124, 18, 120, -118, -24, 29, -20, 31, 125, 7, 7, 15, 102, 108, 126, -115, -126, -59, -47, 87, -69, -86, 30, -36, 25, 7, -42, 125, -29, 45, -37, 109, -93, 92, 46, 71, 30, 116, 95, 101, 85, -67, 43, -115, 15, -39, 92, 51, -80, -121, 61, -105, -72, -81, 0, -91, -69, -27, -11, -33, 2, 106, 48, -25, -63, -6, -52, 46, 68, 26, -12, -113, 12, -57, -28, -127, -38, 25, 96, 5, -22, -3, -15, -21, 7, 58, 22, 43, -14, 67, 98, 29, 112, -113, -38, -55, -49, -97, 116, 72, -13, -51, -124, 0, -119, 69, -71, -28, -4, -88, 103, 30, -94, 95, 72, 45, -51, 125, -4, -125, -8, -109, -82, 69, -36, -107, -80, -28, -92, -4, -45, -15, 3, -103, 83, -105, -7, 17, -57, 93, 5, -19, 62, 44, 105, -105, 123, -28, -29, 37, -41, 100, -5, -87, 21, 92, 18, -19, 25, -32, 42, -5, -66, -27, 124, -2, 109, 57, -85, -89, -40, -50, 96, 8, -79, 10, 15, -90, 13, -5, 95, 64, -9, 6, 22, 86, 96, 24, -91, 25, -118, 106, 39, -45, 113, -102};
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
    msg.setTimeStamp(0.241637941481);
    msg.setSource(61912U);
    msg.setSourceEntity(132U);
    msg.setDestination(15782U);
    msg.setDestinationEntity(44U);
    msg.content_type.assign("KXZANSAQLKSTIQFUYEZRKPPWJMUHXGMNIFTIVZGWENGOFXZSRQBYXPJLVLLNWSLFTRWIDOHCQUGQTWMWKEDODJZLPIXZCWNYOAJZJRRUHYEDONRJCOPTJJAIAESNYBSMGNTKIGUSHRRBMKTVVLCASHJADFFGOQNKVYHBUBLFAPDCNDT");
    const char tmp_msg_0[] = {47, -88, 59, -127, 38, -25, 56, 17, 53, 66, 70, 22, 113, 114, -126, 23, -19, -99, -20, -42, -121, -49, -119, 35, 17, -31, -70, -88};
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
    msg.setTimeStamp(0.349622609646);
    msg.setSource(44435U);
    msg.setSourceEntity(104U);
    msg.setDestination(46381U);
    msg.setDestinationEntity(66U);
    msg.content_type.assign("HZOZNWGCGXXYQDTUEAYJWDFCLKNCUDHPXLSJXJZQPXJGHKNJITLFGUTEOKCJKBMBILUDRMYTIHJSWRRPZTWLNSRLFIOHYBCWIFQNDIBSGVULDMYRTMNUNVAAEYCPEDAGZGORQKCZIOAVWQEZHHSUAPVSWMYFWIYKEFVEOQBVTMZENTGKBAEJHXYHUCCQKSVVFXYLMRKOBBQPZLXFRIDVABN");
    const char tmp_msg_0[] = {78, -87, 17, 47, -70, 125, 34, 124, 74, 25, 121, 31, -97};
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
    msg.setTimeStamp(0.0881147082106);
    msg.setSource(17259U);
    msg.setSourceEntity(121U);
    msg.setDestination(38766U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.810515311723);
    msg.setSource(25690U);
    msg.setSourceEntity(17U);
    msg.setDestination(10912U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.0386060231199);
    msg.setSource(36902U);
    msg.setSourceEntity(71U);
    msg.setDestination(59004U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.45314754518);
    msg.setSource(929U);
    msg.setSourceEntity(95U);
    msg.setDestination(41119U);
    msg.setDestinationEntity(89U);
    msg.target = 38190U;
    msg.bearing = 0.934647571379;
    msg.elevation = 0.820769009924;

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
    msg.setTimeStamp(0.0388256266475);
    msg.setSource(54474U);
    msg.setSourceEntity(184U);
    msg.setDestination(11233U);
    msg.setDestinationEntity(144U);
    msg.target = 31119U;
    msg.bearing = 0.466088988686;
    msg.elevation = 0.704901944134;

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
    msg.setTimeStamp(0.448305809936);
    msg.setSource(38112U);
    msg.setSourceEntity(170U);
    msg.setDestination(28482U);
    msg.setDestinationEntity(233U);
    msg.target = 8658U;
    msg.bearing = 0.506306614992;
    msg.elevation = 0.365969731706;

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
    msg.setTimeStamp(0.57162320565);
    msg.setSource(10466U);
    msg.setSourceEntity(180U);
    msg.setDestination(27744U);
    msg.setDestinationEntity(14U);
    msg.target = 21863U;
    msg.x = 0.103911643964;
    msg.y = 0.463517322976;
    msg.z = 0.464886470035;

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
    msg.setTimeStamp(0.798953507289);
    msg.setSource(5258U);
    msg.setSourceEntity(155U);
    msg.setDestination(37008U);
    msg.setDestinationEntity(58U);
    msg.target = 38548U;
    msg.x = 0.531758335071;
    msg.y = 0.2626617753;
    msg.z = 0.21966037733;

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
    msg.setTimeStamp(0.129697963357);
    msg.setSource(24789U);
    msg.setSourceEntity(27U);
    msg.setDestination(19446U);
    msg.setDestinationEntity(78U);
    msg.target = 28644U;
    msg.x = 0.468464300387;
    msg.y = 0.151726458522;
    msg.z = 0.0492961262971;

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
    msg.setTimeStamp(0.208985727911);
    msg.setSource(55788U);
    msg.setSourceEntity(119U);
    msg.setDestination(24439U);
    msg.setDestinationEntity(24U);
    msg.target = 54422U;
    msg.lat = 0.347227655848;
    msg.lon = 0.810998937451;
    msg.z_units = 63U;
    msg.z = 0.570174459037;

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
    msg.setTimeStamp(0.850749301193);
    msg.setSource(1341U);
    msg.setSourceEntity(209U);
    msg.setDestination(24497U);
    msg.setDestinationEntity(151U);
    msg.target = 15861U;
    msg.lat = 0.850152999319;
    msg.lon = 0.593988560001;
    msg.z_units = 204U;
    msg.z = 0.0791603143673;

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
    msg.setTimeStamp(0.0833794027316);
    msg.setSource(10007U);
    msg.setSourceEntity(109U);
    msg.setDestination(59214U);
    msg.setDestinationEntity(16U);
    msg.target = 32128U;
    msg.lat = 0.237444076987;
    msg.lon = 0.910661218411;
    msg.z_units = 200U;
    msg.z = 0.331267716637;

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
    msg.setTimeStamp(0.44786462951);
    msg.setSource(2689U);
    msg.setSourceEntity(36U);
    msg.setDestination(1213U);
    msg.setDestinationEntity(214U);
    msg.locale.assign("AMHRHTXUOLQXFGHZDITLYOHKRJJFWLRJDGHUMKBWVHJVJYOEVZSFEZODLNEBNUXSUWPJPFQZZAWPI");
    const char tmp_msg_0[] = {31, 118, -125, -91, -17, 24, 101, -75, -86, -93, 34, -117, 67, -96, 27, 118, -54, 71, -14, -2, 1, 66, 18, -111, -38, 25, -47, -100, 118, 82, 73, 48, -75, 81, -6, -9, 23, -20, 19, -69, 57, 110, -50, 41, 2, 102, 23, 78, -35, 80, -26, 75, -51, -98, -66, 125, -57, -105, 55, 111, 57, -14, 52, -21, -78, 35, 84, 121, -102, -80, -1, -93, -13, 106, 102, 12, 24, -24, 8, 56, -18, 21, 18, -13, -80, -64, -107, -125, 32, 4, 40, 21, -29, -17, 86, 106, 31, -103, 8, -19, -5, -113, 85, 79, -99, 121, -120, -67, -13, 97, -122, 110, 26, 9, -95, -90, 23, 34, 68, 69, 20, 67, -16, 114, -34, 17, 100, -64, -90, 62, 53, 115, 28, 67, 97, 86, 32, 15, -99, -10, -106, 46, 10, 44, 85, 32, 97, -66, 5, -31, 113, 4, -21, -53, -32, -108, 26};
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
    msg.setTimeStamp(0.755239085545);
    msg.setSource(32330U);
    msg.setSourceEntity(40U);
    msg.setDestination(36933U);
    msg.setDestinationEntity(252U);
    msg.locale.assign("RWKPRXGSBRELWTHAIFZOVCVGPKANTVFJZRMUGIZETMZOGJFTCBLZZEZYTANQUHUSQRUNQOHXIKHCZIRDFUGWWBFVVAOLMLWIHQWNWNACBEJPHSXDVAYEXXYTYNAPIKYDDOJTINNOSVSOSTRVJCKCPXMVCLLUCQTQPFXYWKQESCKEIBDFMPEJYGGWMBBGFDY");
    const char tmp_msg_0[] = {-56, 15, 117, 112, -17, -11, 20, -10, -38, 60, 18, 70, -102, -125, -23, 60, -79};
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
    msg.setTimeStamp(0.153925305122);
    msg.setSource(16055U);
    msg.setSourceEntity(97U);
    msg.setDestination(51492U);
    msg.setDestinationEntity(243U);
    msg.locale.assign("MBFCQNAWSB");
    const char tmp_msg_0[] = {98, -62, -99, -98, -5, -115, 82, 112, 60, -120, 54, 103, -114, -24, 42, 29, 64};
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
    msg.setTimeStamp(0.599941162851);
    msg.setSource(47997U);
    msg.setSourceEntity(123U);
    msg.setDestination(2112U);
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
    msg.setTimeStamp(0.414795545309);
    msg.setSource(20562U);
    msg.setSourceEntity(222U);
    msg.setDestination(41331U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.927570080028);
    msg.setSource(57551U);
    msg.setSourceEntity(201U);
    msg.setDestination(29743U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.177318757468);
    msg.setSource(14968U);
    msg.setSourceEntity(237U);
    msg.setDestination(60844U);
    msg.setDestinationEntity(182U);
    msg.camid = 31U;
    msg.x = 5004U;
    msg.y = 27719U;

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
    msg.setTimeStamp(0.312609291434);
    msg.setSource(14767U);
    msg.setSourceEntity(147U);
    msg.setDestination(6632U);
    msg.setDestinationEntity(66U);
    msg.camid = 24U;
    msg.x = 55579U;
    msg.y = 39207U;

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
    msg.setTimeStamp(0.272991730919);
    msg.setSource(55795U);
    msg.setSourceEntity(209U);
    msg.setDestination(48895U);
    msg.setDestinationEntity(238U);
    msg.camid = 117U;
    msg.x = 37985U;
    msg.y = 64087U;

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
    msg.setTimeStamp(0.534268239363);
    msg.setSource(45718U);
    msg.setSourceEntity(4U);
    msg.setDestination(50683U);
    msg.setDestinationEntity(110U);
    msg.camid = 133U;
    msg.x = 18692U;
    msg.y = 34458U;

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
    msg.setTimeStamp(0.133171393635);
    msg.setSource(3011U);
    msg.setSourceEntity(160U);
    msg.setDestination(39861U);
    msg.setDestinationEntity(152U);
    msg.camid = 71U;
    msg.x = 46049U;
    msg.y = 45222U;

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
    msg.setTimeStamp(0.800454845652);
    msg.setSource(59454U);
    msg.setSourceEntity(165U);
    msg.setDestination(59036U);
    msg.setDestinationEntity(46U);
    msg.camid = 206U;
    msg.x = 21911U;
    msg.y = 30299U;

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
    msg.setTimeStamp(0.831569338499);
    msg.setSource(6009U);
    msg.setSourceEntity(219U);
    msg.setDestination(45867U);
    msg.setDestinationEntity(189U);
    msg.tracking = 245U;
    msg.lat = 0.858401364765;
    msg.lon = 0.0660413043754;
    msg.x = 0.472179086799;
    msg.y = 0.311768928686;
    msg.z = 0.855806956739;

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
    msg.setTimeStamp(0.851896183724);
    msg.setSource(52257U);
    msg.setSourceEntity(179U);
    msg.setDestination(43485U);
    msg.setDestinationEntity(217U);
    msg.tracking = 240U;
    msg.lat = 0.570343024828;
    msg.lon = 0.69803249409;
    msg.x = 0.716230754696;
    msg.y = 0.456764469819;
    msg.z = 0.374231620005;

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
    msg.setTimeStamp(0.00722799646867);
    msg.setSource(4823U);
    msg.setSourceEntity(0U);
    msg.setDestination(42568U);
    msg.setDestinationEntity(54U);
    msg.tracking = 84U;
    msg.lat = 0.116548643465;
    msg.lon = 0.000137249536132;
    msg.x = 0.760158055411;
    msg.y = 0.16033615661;
    msg.z = 0.89268075762;

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
    msg.setTimeStamp(0.869605191172);
    msg.setSource(46852U);
    msg.setSourceEntity(83U);
    msg.setDestination(35275U);
    msg.setDestinationEntity(110U);
    msg.target.assign("FBPIKBRMGYKXWANUKBBMRHYRDRPVCJJNIVETMGBYZJOLLFWWTRGEZFMSXPSAEFNPEYQPHIWISMQL");
    msg.lbearing = 0.224471955448;
    msg.lelevation = 0.863031971615;
    msg.bearing = 0.542166484302;
    msg.elevation = 0.211414091076;
    msg.phi = 0.830253676732;
    msg.theta = 0.223501504803;
    msg.psi = 0.574797733739;
    msg.accuracy = 0.464048764979;

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
    msg.setTimeStamp(0.602227723893);
    msg.setSource(55281U);
    msg.setSourceEntity(207U);
    msg.setDestination(44934U);
    msg.setDestinationEntity(227U);
    msg.target.assign("VURMOQYSLQBKWUSRRMNEYVHQYJTNOBVHBAFBWCKWBAREWBLZHYXRIGGIXRDWHDKRQMHVPUJZDQPQMGLBZNPKMFQQPTDLPMEIPHXKSU");
    msg.lbearing = 0.635499749123;
    msg.lelevation = 0.773869974649;
    msg.bearing = 0.983230530307;
    msg.elevation = 0.528236026534;
    msg.phi = 0.278212711292;
    msg.theta = 0.972477969972;
    msg.psi = 0.124647402176;
    msg.accuracy = 0.936565537074;

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
    msg.setTimeStamp(0.0004539545981);
    msg.setSource(9884U);
    msg.setSourceEntity(47U);
    msg.setDestination(8253U);
    msg.setDestinationEntity(118U);
    msg.target.assign("GPFLHLDDBANSVJGCLHMBWRROZXZMNMJZQKUKFHATXXGPXPDSOYOBFWPKQFDXIBXYWXVFLKYDJZSNTERQHNGKYGEJEQYLGLBAIQUPUDYSXVHWZASHMOQJPZTAFXCDZMTSWCQAICOYFKTYVSCIRBWNKESVNOP");
    msg.lbearing = 0.395314801986;
    msg.lelevation = 0.30893695385;
    msg.bearing = 0.0147601989658;
    msg.elevation = 0.793175401725;
    msg.phi = 0.90977961377;
    msg.theta = 0.998679820245;
    msg.psi = 0.0874519548406;
    msg.accuracy = 0.685278335287;

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
    msg.setTimeStamp(0.423877643714);
    msg.setSource(39475U);
    msg.setSourceEntity(201U);
    msg.setDestination(39071U);
    msg.setDestinationEntity(233U);
    msg.target.assign("SHTBIMJCPSGMSAIBG");
    msg.x = 0.816578873295;
    msg.y = 0.471694039015;
    msg.z = 0.932057954145;
    msg.n = 0.589125504847;
    msg.e = 0.0769884372485;
    msg.d = 0.263185138426;
    msg.phi = 0.421649216648;
    msg.theta = 0.0970092391074;
    msg.psi = 0.757526867311;
    msg.accuracy = 0.905553731663;

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
    msg.setTimeStamp(0.817518126847);
    msg.setSource(65421U);
    msg.setSourceEntity(53U);
    msg.setDestination(17588U);
    msg.setDestinationEntity(46U);
    msg.target.assign("TAXWKBGVONJWUWLUXVMHCCINEJOIXJQVROAJBXSJHTEXLPMJUNLXPEHWTPIWXRDIDTBUESKBMCQUGYTDRJQMDEPEVOOAMTSSOKOFTMECKNGAVXNCINOCCOALIQYFTZZGFFYYZIPDNKXAYYKLSBZUSVFWPQCHQMERZQHEFHSGVKSZRYKIITXRDCBJFLTPZHCWYDWMRNABZQYSMSRZBPMYBAUVAZVLGLNBLGJHWGQFAPDONKDDJVFRWHRPEFG");
    msg.x = 0.130505200993;
    msg.y = 0.41491798891;
    msg.z = 0.783346958261;
    msg.n = 0.362270095621;
    msg.e = 0.710360890285;
    msg.d = 0.997383067335;
    msg.phi = 0.995420088562;
    msg.theta = 0.362321479456;
    msg.psi = 0.319607819096;
    msg.accuracy = 0.89302170168;

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
    msg.setTimeStamp(0.0299925274751);
    msg.setSource(64458U);
    msg.setSourceEntity(39U);
    msg.setDestination(31720U);
    msg.setDestinationEntity(134U);
    msg.target.assign("AOVGSSKHREGEHWUYLTSVSQOIPDACBGRFDDXBWCKWCGIIWYJSSZUUVEMJIQPFYGWKTQAGVMQNFRZMAZGYCLJJQKBMHOEHJVLFATEUAXYNNUFCBKZLAYVPNQUYYJAOOHZRKEUSVPEZJHDVPTJVRPWDSYWLVLGFXX");
    msg.x = 0.268382080393;
    msg.y = 0.632719070353;
    msg.z = 0.153587337484;
    msg.n = 0.777183848228;
    msg.e = 0.886466356622;
    msg.d = 0.896884835128;
    msg.phi = 0.0705474440874;
    msg.theta = 0.110929545157;
    msg.psi = 0.495579171812;
    msg.accuracy = 0.621019552613;

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
    msg.setTimeStamp(0.458879514287);
    msg.setSource(20320U);
    msg.setSourceEntity(108U);
    msg.setDestination(536U);
    msg.setDestinationEntity(51U);
    msg.target.assign("GXQRFAMABPKQEIJKPQCMUY");
    msg.lat = 0.668079042169;
    msg.lon = 0.0940621249839;
    msg.z_units = 187U;
    msg.z = 0.485786284981;
    msg.accuracy = 0.171701973061;

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
    msg.setTimeStamp(0.793071446576);
    msg.setSource(44684U);
    msg.setSourceEntity(117U);
    msg.setDestination(32400U);
    msg.setDestinationEntity(196U);
    msg.target.assign("JPSMECCVUXYLERGMZXVCAIHFLQGTSGNYMMJVYJXGJBLOCULNHPTAFTBXJCNUODJPXSNPSLZPCDDKSYHKAIOXDDZYTRUSHQALHIFFBURRJQWVQGCVAYXIWLBDZFVOJKCOIXBZLIZMXEGLRYBNIDWKJIEONDWYNEFOHTOEQNERWVWAHVIYTPPRQZKSACBDOBIPXZTPGTWZUUJNWTMKDCMESMZAQRRWREFOWYLA");
    msg.lat = 0.679490085274;
    msg.lon = 0.712718001463;
    msg.z_units = 46U;
    msg.z = 0.140898978829;
    msg.accuracy = 0.208412367507;

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
    msg.setTimeStamp(0.00245274174051);
    msg.setSource(25966U);
    msg.setSourceEntity(108U);
    msg.setDestination(47285U);
    msg.setDestinationEntity(209U);
    msg.target.assign("KINDUOIPECXOLMMPSYSZXELFNWHOMEYHXJGJADBBJU");
    msg.lat = 0.474127145964;
    msg.lon = 0.539424923177;
    msg.z_units = 203U;
    msg.z = 0.866140164433;
    msg.accuracy = 0.806341545139;

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
    msg.setTimeStamp(0.426631882215);
    msg.setSource(57676U);
    msg.setSourceEntity(160U);
    msg.setDestination(65225U);
    msg.setDestinationEntity(152U);
    msg.name.assign("CNCDAMFFUUQMVBKLGJYXZSNEMLZVNWOFJSUZYDJGYFAMRXEUBRDUZIPUQHWDVSZBPGQPAIQYZJSUMKTEOTAXNHTFAPJIMENVNKTIIYHCWEOBFB");
    msg.lat = 0.180457695486;
    msg.lon = 0.437641913668;
    msg.z = 0.337622847301;
    msg.z_units = 159U;

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
    msg.setTimeStamp(0.416296836456);
    msg.setSource(63121U);
    msg.setSourceEntity(24U);
    msg.setDestination(53997U);
    msg.setDestinationEntity(53U);
    msg.name.assign("CDJFUNILXBXMNMKSPAPLRDEPAGRNGUCLFYMCQATTJWMAWWRIYRLOWSNYTCISQTUBLRXSZNQVZXINTIGWQIVLQDGQUDBJVTEEFDSYHAMHBRAKEVKPGFVSYZYVSKEDXSOFIHSPORPDGETIEBCXYXHVWEHQNKXQOZBZFPVMUZWBMTZGJWGMHAYHJMODEKFOWDYRALVZUOHXXKZGQJOVWRKPJFBCEHNUCJNOHPZJBUDULGIFILMT");
    msg.lat = 0.192338012685;
    msg.lon = 0.0301781873417;
    msg.z = 0.860344361587;
    msg.z_units = 160U;

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
    msg.setTimeStamp(0.632295612176);
    msg.setSource(18345U);
    msg.setSourceEntity(79U);
    msg.setDestination(11921U);
    msg.setDestinationEntity(193U);
    msg.name.assign("HCPYFJXVFEIDLSAFTOREQMJAZRQQMAEZRHSXTYJPOMCNIWXUUEGLBBUVOPWEBDKDWTBALFFSYLHEJTFDQPGCWGPLQSUKDYINOMVWMPQKTAZZHRRUIVIIODXWGVTGEBTVXMFKKXMOSPMGGJUWTNJKIAECYCBJUOUZCRUSBYZUOGJJHNCOZVQLAVRIHCNXQRBPXDJXANF");
    msg.lat = 0.322621861921;
    msg.lon = 0.595569829265;
    msg.z = 0.117743997617;
    msg.z_units = 254U;

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
    msg.setTimeStamp(0.261220361193);
    msg.setSource(19374U);
    msg.setSourceEntity(240U);
    msg.setDestination(30516U);
    msg.setDestinationEntity(254U);
    msg.op = 23U;

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
    msg.setTimeStamp(0.627145243547);
    msg.setSource(57511U);
    msg.setSourceEntity(115U);
    msg.setDestination(51814U);
    msg.setDestinationEntity(186U);
    msg.op = 245U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("HOPEUOUUPEQKGFXFJULQTXKDQIYEJREXHMBAQNJKZXJAZSICWSRPVBYCARJMNVNJPWTRVVUWKEFNFXHDPDPINLFCHDTLEQPJNGDOVJBGTXVRMWYGLQCXFGDCPHBZUVSGDAFCOZPYUGSOZIHOWIEQQNLIHDVWEGFLVDNJTRXIRANKKSIMAKBMQXPGSKTASTZWURSULUCWYFBLZOTBMIOGBOLJHMAYOWSEYYBWQHMX");
    tmp_msg_0.lat = 0.861064783746;
    tmp_msg_0.lon = 0.257201172972;
    tmp_msg_0.z = 0.910548655824;
    tmp_msg_0.z_units = 202U;
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
    msg.setTimeStamp(0.764920869621);
    msg.setSource(47205U);
    msg.setSourceEntity(112U);
    msg.setDestination(6266U);
    msg.setDestinationEntity(20U);
    msg.op = 187U;

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
    msg.setTimeStamp(0.884022561718);
    msg.setSource(46085U);
    msg.setSourceEntity(10U);
    msg.setDestination(12310U);
    msg.setDestinationEntity(12U);
    msg.value = 0.154857853734;
    msg.type = 23U;

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
    msg.setTimeStamp(0.0701556361093);
    msg.setSource(18178U);
    msg.setSourceEntity(172U);
    msg.setDestination(22052U);
    msg.setDestinationEntity(30U);
    msg.value = 0.324018761069;
    msg.type = 87U;

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
    msg.setTimeStamp(0.0930015568583);
    msg.setSource(65366U);
    msg.setSourceEntity(166U);
    msg.setDestination(18944U);
    msg.setDestinationEntity(238U);
    msg.value = 0.146392975971;
    msg.type = 194U;

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
    msg.setTimeStamp(0.411048470167);
    msg.setSource(22592U);
    msg.setSourceEntity(65U);
    msg.setDestination(18392U);
    msg.setDestinationEntity(76U);
    msg.value = 0.610247493304;

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
    msg.setTimeStamp(0.599032278369);
    msg.setSource(4757U);
    msg.setSourceEntity(44U);
    msg.setDestination(17574U);
    msg.setDestinationEntity(217U);
    msg.value = 0.864352998598;

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
    msg.setTimeStamp(0.706322049343);
    msg.setSource(35622U);
    msg.setSourceEntity(9U);
    msg.setDestination(36918U);
    msg.setDestinationEntity(11U);
    msg.value = 0.883559145354;

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
    msg.setTimeStamp(0.281634557186);
    msg.setSource(16019U);
    msg.setSourceEntity(223U);
    msg.setDestination(10144U);
    msg.setDestinationEntity(169U);
    msg.timestamp_last_service = 0.0212879286057;
    msg.time_next_service = 0.100373659361;
    msg.time_motor_next_service = 0.371279253026;
    msg.time_idle_ground = 0.973005310283;
    msg.time_idle_air = 0.0549544228396;
    msg.time_idle_water = 0.934117789002;
    msg.time_idle_underwater = 0.864983481866;
    msg.time_idle_unknown = 0.68693769411;
    msg.time_motor_ground = 0.542106806835;
    msg.time_motor_air = 0.115288908348;
    msg.time_motor_water = 0.858059571939;
    msg.time_motor_underwater = 0.357779353136;
    msg.time_motor_unknown = 0.528079420716;
    msg.rpm_min = 31670;
    msg.rpm_max = -9530;
    msg.depth_max = 0.759111882577;

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
    msg.setTimeStamp(0.49323742725);
    msg.setSource(42696U);
    msg.setSourceEntity(174U);
    msg.setDestination(40444U);
    msg.setDestinationEntity(61U);
    msg.timestamp_last_service = 0.11681633425;
    msg.time_next_service = 0.163455451114;
    msg.time_motor_next_service = 0.591926481966;
    msg.time_idle_ground = 0.36278863184;
    msg.time_idle_air = 0.253595344822;
    msg.time_idle_water = 0.259089946308;
    msg.time_idle_underwater = 0.891601329605;
    msg.time_idle_unknown = 0.919996094185;
    msg.time_motor_ground = 0.00850426893697;
    msg.time_motor_air = 0.66172066539;
    msg.time_motor_water = 0.186743628951;
    msg.time_motor_underwater = 0.0679846909514;
    msg.time_motor_unknown = 0.264005876759;
    msg.rpm_min = 12166;
    msg.rpm_max = 22168;
    msg.depth_max = 0.0424875593217;

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
    msg.setTimeStamp(0.705755426821);
    msg.setSource(45418U);
    msg.setSourceEntity(240U);
    msg.setDestination(13685U);
    msg.setDestinationEntity(33U);
    msg.timestamp_last_service = 0.573705128397;
    msg.time_next_service = 0.55206281644;
    msg.time_motor_next_service = 0.78130051882;
    msg.time_idle_ground = 0.0638762680087;
    msg.time_idle_air = 0.391253014982;
    msg.time_idle_water = 0.800524324127;
    msg.time_idle_underwater = 0.280544134396;
    msg.time_idle_unknown = 0.223210267584;
    msg.time_motor_ground = 0.023539141405;
    msg.time_motor_air = 0.0863780430243;
    msg.time_motor_water = 0.336665823186;
    msg.time_motor_underwater = 0.105305439763;
    msg.time_motor_unknown = 0.168808064942;
    msg.rpm_min = 3372;
    msg.rpm_max = 30452;
    msg.depth_max = 0.305274669245;

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
    msg.setTimeStamp(0.223953033436);
    msg.setSource(64766U);
    msg.setSourceEntity(218U);
    msg.setDestination(39884U);
    msg.setDestinationEntity(185U);
    msg.severity = 144U;
    msg.text.assign("BRINBIBPYTUHDSQYFQJIVROFDTAGNARGMBCSGSRJQEHZLGBEDKXYRWOZXPKAPMCOBMACGHVQSUDAQPBEXKUOKCEHDYJEOWQAWFBKIXANZBQYSVTALHUGNNXLHECHJCYDMIEIMZZRORCJAJUUOCHFVSZSYFWHSLTDWUXWILURXQNYFEZJJ");

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
    msg.setTimeStamp(0.379547601004);
    msg.setSource(63791U);
    msg.setSourceEntity(135U);
    msg.setDestination(58084U);
    msg.setDestinationEntity(253U);
    msg.severity = 96U;
    msg.text.assign("GUGTYUDRPPNZOQOCELFYSOEAFDPBNMZXLEJSQXGKRLUVWLDDONG");

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
    msg.setTimeStamp(0.773878874179);
    msg.setSource(31886U);
    msg.setSourceEntity(2U);
    msg.setDestination(7599U);
    msg.setDestinationEntity(120U);
    msg.severity = 188U;
    msg.text.assign("YWWYTNAETIIYCWXVJUKMRHMEGOUNCMDYINHMYCPDJCQAGRCXANZZNQMXFNAEKXQUIEDQFKHWQHGMSPBSJVXHTWZREZCSUULUKQIXTMNRRLCVAPJETOSAFOPSCKNKLUU");

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
    msg.setTimeStamp(0.18966354393);
    msg.setSource(58177U);
    msg.setSourceEntity(156U);
    msg.setDestination(36914U);
    msg.setDestinationEntity(225U);
    msg.channel = 45;
    msg.value = -1573339638;
    msg.gain = 206U;

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
    msg.setTimeStamp(0.204461828271);
    msg.setSource(47425U);
    msg.setSourceEntity(49U);
    msg.setDestination(56457U);
    msg.setDestinationEntity(22U);
    msg.channel = -120;
    msg.value = -333641547;
    msg.gain = 216U;

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
    msg.setTimeStamp(0.652142025348);
    msg.setSource(10450U);
    msg.setSourceEntity(76U);
    msg.setDestination(24994U);
    msg.setDestinationEntity(163U);
    msg.channel = 11;
    msg.value = -846200599;
    msg.gain = 37U;

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
    msg.setTimeStamp(0.783781536501);
    msg.setSource(14587U);
    msg.setSourceEntity(245U);
    msg.setDestination(45137U);
    msg.setDestinationEntity(90U);
    msg.ch01 = 0.586844344062;
    msg.ch02 = 0.512234384573;
    msg.ch03 = 0.413553587444;
    msg.ch04 = 0.0233037536696;
    msg.ch05 = 0.21928217333;
    msg.ch06 = 0.155745520006;
    msg.ch07 = 0.158105140923;
    msg.ch08 = 0.239570099943;
    msg.ch09 = 0.655998275415;
    msg.ch10 = 0.926056213732;
    msg.ch11 = 0.0822944719385;
    msg.ch12 = 0.0516471046267;
    msg.ch13 = 0.065753684761;
    msg.ch14 = 0.404448339156;
    msg.ch15 = 0.144306231212;
    msg.ch16 = 0.676566710217;

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
    msg.setTimeStamp(0.315368081719);
    msg.setSource(48919U);
    msg.setSourceEntity(180U);
    msg.setDestination(805U);
    msg.setDestinationEntity(250U);
    msg.ch01 = 0.273199661743;
    msg.ch02 = 0.592543351798;
    msg.ch03 = 0.0983531874695;
    msg.ch04 = 0.469003012074;
    msg.ch05 = 0.137160126269;
    msg.ch06 = 0.748512253379;
    msg.ch07 = 0.0985614229863;
    msg.ch08 = 0.54959031556;
    msg.ch09 = 0.151801260228;
    msg.ch10 = 0.989631828432;
    msg.ch11 = 0.852692951516;
    msg.ch12 = 0.248956277999;
    msg.ch13 = 0.439793752504;
    msg.ch14 = 0.378111268498;
    msg.ch15 = 0.23976713363;
    msg.ch16 = 0.0733662362005;

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
    msg.setTimeStamp(0.910326048205);
    msg.setSource(37093U);
    msg.setSourceEntity(35U);
    msg.setDestination(40864U);
    msg.setDestinationEntity(218U);
    msg.ch01 = 0.831782453255;
    msg.ch02 = 0.00429783714322;
    msg.ch03 = 0.536865329624;
    msg.ch04 = 0.740663694927;
    msg.ch05 = 0.485750103352;
    msg.ch06 = 0.440305681371;
    msg.ch07 = 0.133181853672;
    msg.ch08 = 0.511127766973;
    msg.ch09 = 0.78701439587;
    msg.ch10 = 0.587787929292;
    msg.ch11 = 0.874638967323;
    msg.ch12 = 0.134514286153;
    msg.ch13 = 0.0193462170696;
    msg.ch14 = 0.983966471233;
    msg.ch15 = 0.100661368581;
    msg.ch16 = 0.888497417893;

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
    msg.setTimeStamp(0.252379977019);
    msg.setSource(19623U);
    msg.setSourceEntity(226U);
    msg.setDestination(29571U);
    msg.setDestinationEntity(8U);
    msg.time = 0.744633011662;
    msg.ang = 0.809254536903;

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
    msg.setTimeStamp(0.250893669099);
    msg.setSource(64829U);
    msg.setSourceEntity(131U);
    msg.setDestination(58531U);
    msg.setDestinationEntity(104U);
    msg.time = 0.676389562912;
    msg.ang = 0.399489655775;

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
    msg.setTimeStamp(0.879150682664);
    msg.setSource(47030U);
    msg.setSourceEntity(78U);
    msg.setDestination(22925U);
    msg.setDestinationEntity(216U);
    msg.time = 0.815250419613;
    msg.ang = 0.938970160537;

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
    msg.setTimeStamp(0.529024355711);
    msg.setSource(64504U);
    msg.setSourceEntity(53U);
    msg.setDestination(13729U);
    msg.setDestinationEntity(249U);
    msg.value = 0.868858544538;

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
    msg.setTimeStamp(0.565684441698);
    msg.setSource(15024U);
    msg.setSourceEntity(196U);
    msg.setDestination(39176U);
    msg.setDestinationEntity(228U);
    msg.value = 0.858469075542;

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
    msg.setTimeStamp(0.910721321323);
    msg.setSource(35474U);
    msg.setSourceEntity(86U);
    msg.setDestination(33595U);
    msg.setDestinationEntity(7U);
    msg.value = 0.166460004089;

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
    msg.setTimeStamp(0.0900703414778);
    msg.setSource(56590U);
    msg.setSourceEntity(59U);
    msg.setDestination(28043U);
    msg.setDestinationEntity(12U);
    msg.value = 0.347198001821;

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
    msg.setTimeStamp(0.708436469837);
    msg.setSource(3249U);
    msg.setSourceEntity(121U);
    msg.setDestination(58850U);
    msg.setDestinationEntity(46U);
    msg.value = 0.00698490247772;

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
    msg.setTimeStamp(0.779784165598);
    msg.setSource(43446U);
    msg.setSourceEntity(222U);
    msg.setDestination(6416U);
    msg.setDestinationEntity(239U);
    msg.value = 0.28698894629;

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
    msg.setTimeStamp(0.130981226853);
    msg.setSource(55455U);
    msg.setSourceEntity(248U);
    msg.setDestination(29377U);
    msg.setDestinationEntity(243U);
    msg.value = 0.75036130813;

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
    msg.setTimeStamp(0.308688700459);
    msg.setSource(41920U);
    msg.setSourceEntity(101U);
    msg.setDestination(48597U);
    msg.setDestinationEntity(130U);
    msg.value = 0.601754061379;

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
    msg.setTimeStamp(0.267017984572);
    msg.setSource(21884U);
    msg.setSourceEntity(156U);
    msg.setDestination(10276U);
    msg.setDestinationEntity(108U);
    msg.value = 0.50909211101;

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
    msg.setTimeStamp(0.352964649818);
    msg.setSource(51539U);
    msg.setSourceEntity(120U);
    msg.setDestination(42169U);
    msg.setDestinationEntity(36U);
    msg.l2 = -99;
    msg.l3 = -122;
    msg.iridium = -50;
    msg.modem = 14;
    msg.pumps = 112;
    msg.vhf = -64;

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
    msg.setTimeStamp(0.283096936417);
    msg.setSource(31932U);
    msg.setSourceEntity(33U);
    msg.setDestination(42006U);
    msg.setDestinationEntity(117U);
    msg.l2 = -51;
    msg.l3 = 113;
    msg.iridium = 104;
    msg.modem = 8;
    msg.pumps = 100;
    msg.vhf = -11;

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
    msg.setTimeStamp(0.913445785806);
    msg.setSource(63853U);
    msg.setSourceEntity(196U);
    msg.setDestination(43028U);
    msg.setDestinationEntity(48U);
    msg.l2 = -83;
    msg.l3 = 107;
    msg.iridium = 105;
    msg.modem = -52;
    msg.pumps = 15;
    msg.vhf = 5;

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
    msg.setTimeStamp(0.969974132414);
    msg.setSource(55358U);
    msg.setSourceEntity(158U);
    msg.setDestination(18643U);
    msg.setDestinationEntity(118U);
    msg.angle = 0.326055656775;
    msg.reference.assign("TSVOFQVWLENGVGFRWDQZWCGFGEBQESYXAFYZRUWBNWBWVQFCJJLHZCIUUURGBDJMDFALCRWTYZRVUQIIDEJPITWEFOXJYBZPMEDMAKUEBBOBOTKYITZP");
    msg.speed = 0.288605519898;

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
    msg.setTimeStamp(0.427210451147);
    msg.setSource(26673U);
    msg.setSourceEntity(246U);
    msg.setDestination(48626U);
    msg.setDestinationEntity(122U);
    msg.angle = 0.388165684354;
    msg.reference.assign("DCRQCNBERHZGKWNYABXOPQZBWTUXCQMBTYFBTVWKVRIBFIHEDHMOMAQKOTLTGGBDXLWEFZIGSUEGTFAVCDWYXYJEEEQUITQMGDBPWHFZUXOKJRNZSWXMSYLFZKKJEIJDYCELAIUOSYMS");
    msg.speed = 0.8414435216;

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
    msg.setTimeStamp(0.828511879736);
    msg.setSource(34586U);
    msg.setSourceEntity(153U);
    msg.setDestination(35048U);
    msg.setDestinationEntity(160U);
    msg.angle = 0.519181610988;
    msg.reference.assign("HAWIHBYNRCMTXDNYPNOGALROFQJDCSYDSEBVPRZQLYFXOGHFJRQVIVOJTCWTJNDUYJICLBHYFVIEQWBYKKHFUWMMENTSLWOZQRZXWBUPKGUYHZSVNAQWMSBPLGKMROGPEDIJUGOSHDVZMGURVCKJGPRUKWIXQEKVOHTQPBVSXEEJRACXWELNDUCAAJYLNBCHQALNOXOZGYRTEZWBFSCFFDATBZQMMPMKIVFIPDTFIGUCEMSKSJDTPATXX");
    msg.speed = 0.352977921735;

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
    msg.setTimeStamp(0.116965097632);
    msg.setSource(16452U);
    msg.setSourceEntity(204U);
    msg.setDestination(16146U);
    msg.setDestinationEntity(177U);
    msg.angle = 0.79381507458;
    msg.direction.assign("IOIRVQCPBNAUEJZVVGZSDSTFXIFOQHYZTAPTEKAFKASDPHJRQBOHKUOGBSVTJSMNGQKHLDTABYEDZYBKLPSCNFRFEXIGZUNWJXGLNNXZHFCYDTIFVWMQASXWKDBBYFCFJEIPTCRQULBDVJOOWIMADUQNCYXIGNYXUHFM");
    msg.speed = 0.0451759497602;

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
    msg.setTimeStamp(0.956397895668);
    msg.setSource(46317U);
    msg.setSourceEntity(149U);
    msg.setDestination(1658U);
    msg.setDestinationEntity(140U);
    msg.angle = 0.459717346645;
    msg.direction.assign("EXKTTHBYDEESRYMGQBLGBNXNAJFUKQBEDSXXVLTWQDIOCNUKCSFTODGYPYGMLCCUQMTUGILIVRSKSDHODUNVNUBTHIMVJNZMWTQJPWPAKASVQWGPRRSQVECKZSNFZWTGIWOZUEHJFCEEVAGYXZMQD");
    msg.speed = 0.404083374394;

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
    msg.setTimeStamp(0.190557216862);
    msg.setSource(46076U);
    msg.setSourceEntity(112U);
    msg.setDestination(24238U);
    msg.setDestinationEntity(0U);
    msg.angle = 0.862487437271;
    msg.direction.assign("QASMTYQXZNWAEPOCBDDWMUPGTQLVWSGVYGZHND");
    msg.speed = 0.00044884575794;

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
    msg.setTimeStamp(0.594171379378);
    msg.setSource(1703U);
    msg.setSourceEntity(39U);
    msg.setDestination(17508U);
    msg.setDestinationEntity(232U);
    msg.x = 0.710634874596;
    msg.y = 0.297917339968;
    msg.z1 = 0.367911962245;
    msg.z2 = 0.12223628491;

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
    msg.setTimeStamp(0.909516051042);
    msg.setSource(40668U);
    msg.setSourceEntity(1U);
    msg.setDestination(53789U);
    msg.setDestinationEntity(22U);
    msg.x = 0.399324800023;
    msg.y = 0.998596954272;
    msg.z1 = 0.492679151116;
    msg.z2 = 0.206225016243;

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
    msg.setTimeStamp(0.961524489005);
    msg.setSource(28548U);
    msg.setSourceEntity(219U);
    msg.setDestination(7907U);
    msg.setDestinationEntity(9U);
    msg.x = 0.962078767091;
    msg.y = 0.0272231998816;
    msg.z1 = 0.979289436857;
    msg.z2 = 0.905505930272;

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
    msg.setTimeStamp(0.604868299849);
    msg.setSource(49742U);
    msg.setSourceEntity(91U);
    msg.setDestination(60152U);
    msg.setDestinationEntity(88U);
    msg.beam1 = 0.14818045756;
    msg.beam2 = 0.763884132714;
    msg.beam3 = 0.400832435646;
    msg.beam4 = 0.851803978973;

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
    msg.setTimeStamp(0.397953575577);
    msg.setSource(14024U);
    msg.setSourceEntity(206U);
    msg.setDestination(58568U);
    msg.setDestinationEntity(93U);
    msg.beam1 = 0.0993613334893;
    msg.beam2 = 0.547028156466;
    msg.beam3 = 0.168272484566;
    msg.beam4 = 0.221819072672;

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
    msg.setTimeStamp(0.251981688146);
    msg.setSource(61706U);
    msg.setSourceEntity(206U);
    msg.setDestination(55787U);
    msg.setDestinationEntity(249U);
    msg.beam1 = 0.686553525759;
    msg.beam2 = 0.347422215917;
    msg.beam3 = 0.318967599392;
    msg.beam4 = 0.0679911274168;

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
    msg.setTimeStamp(0.777511871012);
    msg.setSource(27194U);
    msg.setSourceEntity(116U);
    msg.setDestination(56111U);
    msg.setDestinationEntity(104U);
    msg.beam1 = 5U;
    msg.beam2 = 40U;
    msg.beam3 = 62U;
    msg.beam4 = 166U;

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
    msg.setTimeStamp(0.105012166483);
    msg.setSource(38744U);
    msg.setSourceEntity(146U);
    msg.setDestination(33265U);
    msg.setDestinationEntity(215U);
    msg.beam1 = 9U;
    msg.beam2 = 205U;
    msg.beam3 = 71U;
    msg.beam4 = 44U;

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
    msg.setTimeStamp(0.524998568336);
    msg.setSource(36640U);
    msg.setSourceEntity(239U);
    msg.setDestination(21960U);
    msg.setDestinationEntity(83U);
    msg.beam1 = 77U;
    msg.beam2 = 210U;
    msg.beam3 = 21U;
    msg.beam4 = 55U;

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
    msg.setTimeStamp(0.497053438223);
    msg.setSource(45874U);
    msg.setSourceEntity(136U);
    msg.setDestination(25644U);
    msg.setDestinationEntity(84U);
    msg.cellposition = 0.021904281938;
    msg.x = 0.874501156759;
    msg.y = 0.67346713753;
    msg.z1 = 0.0135522492523;
    msg.z2 = 0.657872451484;
    msg.amp0 = 0.64884635045;
    msg.amp1 = 0.414755812326;
    msg.amp2 = 0.790266190704;
    msg.amp3 = 0.926142950713;
    msg.cor0 = 46U;
    msg.cor1 = 70U;
    msg.cor2 = 106U;
    msg.cor3 = 146U;

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
    msg.setTimeStamp(0.300222104279);
    msg.setSource(14509U);
    msg.setSourceEntity(93U);
    msg.setDestination(31449U);
    msg.setDestinationEntity(231U);
    msg.cellposition = 0.207808353538;
    msg.x = 0.517378047676;
    msg.y = 0.721997950362;
    msg.z1 = 0.541990541077;
    msg.z2 = 0.0594927586213;
    msg.amp0 = 0.0618925441527;
    msg.amp1 = 0.117099840668;
    msg.amp2 = 0.867461496601;
    msg.amp3 = 0.95078549252;
    msg.cor0 = 123U;
    msg.cor1 = 76U;
    msg.cor2 = 242U;
    msg.cor3 = 237U;

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
    msg.setTimeStamp(0.365713550261);
    msg.setSource(19741U);
    msg.setSourceEntity(58U);
    msg.setDestination(43511U);
    msg.setDestinationEntity(196U);
    msg.cellposition = 0.539876900297;
    msg.x = 0.232770770087;
    msg.y = 0.456898427482;
    msg.z1 = 0.845425530628;
    msg.z2 = 0.1374581366;
    msg.amp0 = 0.6138720699;
    msg.amp1 = 0.704277875655;
    msg.amp2 = 0.32182708942;
    msg.amp3 = 0.494676596533;
    msg.cor0 = 17U;
    msg.cor1 = 12U;
    msg.cor2 = 213U;
    msg.cor3 = 215U;

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
    msg.setTimeStamp(0.385928357354);
    msg.setSource(734U);
    msg.setSourceEntity(181U);
    msg.setDestination(59877U);
    msg.setDestinationEntity(19U);
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cellposition = 0.879363909122;
    tmp_msg_0.x = 0.844716770003;
    tmp_msg_0.y = 0.285851137684;
    tmp_msg_0.z1 = 0.619421931324;
    tmp_msg_0.z2 = 0.424133048044;
    tmp_msg_0.amp0 = 0.171520155607;
    tmp_msg_0.amp1 = 0.422688500325;
    tmp_msg_0.amp2 = 0.770884647087;
    tmp_msg_0.amp3 = 0.731652633265;
    tmp_msg_0.cor0 = 162U;
    tmp_msg_0.cor1 = 131U;
    tmp_msg_0.cor2 = 248U;
    tmp_msg_0.cor3 = 142U;
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
    msg.setTimeStamp(0.712972047031);
    msg.setSource(34023U);
    msg.setSourceEntity(81U);
    msg.setDestination(42234U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.503553679273);
    msg.setSource(17081U);
    msg.setSourceEntity(224U);
    msg.setDestination(58096U);
    msg.setDestinationEntity(71U);
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cellposition = 0.772170057794;
    tmp_msg_0.x = 0.35540018122;
    tmp_msg_0.y = 0.222967898071;
    tmp_msg_0.z1 = 0.379727422616;
    tmp_msg_0.z2 = 0.00236056901279;
    tmp_msg_0.amp0 = 0.199372049374;
    tmp_msg_0.amp1 = 0.432227021225;
    tmp_msg_0.amp2 = 0.594587879528;
    tmp_msg_0.amp3 = 0.228068107666;
    tmp_msg_0.cor0 = 32U;
    tmp_msg_0.cor1 = 172U;
    tmp_msg_0.cor2 = 185U;
    tmp_msg_0.cor3 = 203U;
    msg.prof.push_back(tmp_msg_0);

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

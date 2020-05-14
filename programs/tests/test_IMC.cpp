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
// IMC XML MD5: 74be120809af3aaef1656d2b342ffed9                            *
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
    msg.setTimeStamp(0.0483331237863);
    msg.setSource(60757U);
    msg.setSourceEntity(63U);
    msg.setDestination(46320U);
    msg.setDestinationEntity(12U);
    msg.state = 84U;
    msg.flags = 6U;
    msg.description.assign("YTGFEILYPAAOZGQMXQXKTMGUSKURXCMZGEPNWOSFCMDERAHNODSV");

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
    msg.setTimeStamp(0.9133119998);
    msg.setSource(41772U);
    msg.setSourceEntity(36U);
    msg.setDestination(18089U);
    msg.setDestinationEntity(82U);
    msg.state = 220U;
    msg.flags = 167U;
    msg.description.assign("JWFINXOUQSIJZIFDSGXIKZWEVTXLBRTXTCNWLQYOIMULROYBGYTKAGNBPWENV");

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
    msg.setTimeStamp(0.00250984707254);
    msg.setSource(1882U);
    msg.setSourceEntity(115U);
    msg.setDestination(53712U);
    msg.setDestinationEntity(205U);
    msg.state = 63U;
    msg.flags = 27U;
    msg.description.assign("ETNXQWWJLYITGSFOSDAXKHXVOMWXBLONTDENSQTFCYNZFVVBCOMOSUGWATRWDMUSBQAEOZRMRLVUPYQJSAINVMEILLGJCPWXYPUBTFGFSIHUDAIDNKDBQPHERSKJHXVKRGKXJTMLFQSYDIPHTPJYZYANIHCFYNOHE");

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
    msg.setTimeStamp(0.823137553319);
    msg.setSource(56333U);
    msg.setSourceEntity(1U);
    msg.setDestination(8194U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.751932292244);
    msg.setSource(34178U);
    msg.setSourceEntity(220U);
    msg.setDestination(33433U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.0893861586454);
    msg.setSource(22525U);
    msg.setSourceEntity(108U);
    msg.setDestination(25566U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.645232734563);
    msg.setSource(43287U);
    msg.setSourceEntity(207U);
    msg.setDestination(17401U);
    msg.setDestinationEntity(46U);
    msg.id = 79U;
    msg.label.assign("SFBXRLDRDSMGJRLSVDHZZCJWSOTDOBS");
    msg.component.assign("AZBWZGJCGATQUSLLACUMYVQNWDHCQNCXSSSXHNIDPPEIVYIRZCXABVSPMPMJJIFZYPTOTYLBODDUXEYLXVGPZFKODGKYSBRPCWCGRVXZGXKNHAEWWYDIOQEFWKETHRUCVJTLILVVJQRFPJHTJAZWDOJBHNNKWJBN");
    msg.act_time = 37271U;
    msg.deact_time = 20767U;

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
    msg.setTimeStamp(0.385348757261);
    msg.setSource(32957U);
    msg.setSourceEntity(214U);
    msg.setDestination(21511U);
    msg.setDestinationEntity(233U);
    msg.id = 240U;
    msg.label.assign("TAGMOOQMPGWYJPQHKVWLRLGDHLPKWDCBSHYCVVFDNGCADFTEFSWUVSYFWIUXYDZRATRQQAVUUTXDOBWYIFRSKOEZWWZTLFPNOHYPFNTGHXAXXIPGIBVKWPSMJXOVEEBLSTMOD");
    msg.component.assign("DPSXNKFEALFQQJTZCQIJQGYAZMYOKCEVBNWLEHTLIMBBZMYMALNRPRUPHUS");
    msg.act_time = 2376U;
    msg.deact_time = 21466U;

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
    msg.setTimeStamp(0.660332485587);
    msg.setSource(26380U);
    msg.setSourceEntity(157U);
    msg.setDestination(61758U);
    msg.setDestinationEntity(16U);
    msg.id = 233U;
    msg.label.assign("QHFBLCFWRUYASAESMVHNVXPKBJKKUEIKDAWHJHVTGGOZZVQMGESEKBGKBUXJOJSDEVOTDXHCMYVGFCDDZOAIBWTOCFPIHCUQSUJAPLNNUWNJELZORUNEYFAPTARJZQYMFCJDKCYVFXCYGTMNFJQBSMKWINTRWKBAWZPZTQLXBIXCXXOIJOWDURIYAIQE");
    msg.component.assign("LLJGPINSXUWHQNMBPCKSQQLKZLPREMCOATLOENIJMCOUSYQGTNHFFRKIYYNTOMYKQQPREIIFZJLYSLCDTWPGGWXNEWXAXKSUNUQUOJDTJDPHEGZRTDXDKJRVQCZIDJOFWVPVGACTMAODLKOBMXRIGBWWPCELASMOZHAFTPF");
    msg.act_time = 17963U;
    msg.deact_time = 25333U;

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
    msg.setTimeStamp(0.651140568044);
    msg.setSource(10072U);
    msg.setSourceEntity(84U);
    msg.setDestination(20150U);
    msg.setDestinationEntity(162U);
    msg.id = 218U;

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
    msg.setTimeStamp(0.556796535977);
    msg.setSource(54786U);
    msg.setSourceEntity(143U);
    msg.setDestination(5259U);
    msg.setDestinationEntity(171U);
    msg.id = 11U;

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
    msg.setTimeStamp(0.744539811093);
    msg.setSource(40772U);
    msg.setSourceEntity(78U);
    msg.setDestination(45406U);
    msg.setDestinationEntity(98U);
    msg.id = 66U;

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
    msg.setTimeStamp(0.306314322017);
    msg.setSource(35825U);
    msg.setSourceEntity(230U);
    msg.setDestination(54783U);
    msg.setDestinationEntity(102U);
    msg.op = 73U;
    msg.list.assign("SSAOUUCKVCSTEWPSBPJYHJOSOCKMQMATZLJTZFJKFFWHUQTEZHHJWQPJRPNGTEEMILQRXRVMNEZMYSOWTXIGKRIESNOEJDXORFAADCLPUOCKDZGVCRZGNQ");

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
    msg.setTimeStamp(0.144097959409);
    msg.setSource(24827U);
    msg.setSourceEntity(140U);
    msg.setDestination(5432U);
    msg.setDestinationEntity(229U);
    msg.op = 36U;
    msg.list.assign("KXZRWPMXKDBRKUENNWBZCDLLSESIAXOOORVAYQIKDGDRZHZH");

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
    msg.setTimeStamp(0.85638568035);
    msg.setSource(26791U);
    msg.setSourceEntity(184U);
    msg.setDestination(32478U);
    msg.setDestinationEntity(21U);
    msg.op = 16U;
    msg.list.assign("AQZHRHMZTHBDLKGEALYJICSVCQZHSYJPCGUVXJXNGYDPKWVDZAJKVMLNMPQBNNCGGXLCBUHVZTORACVWPYXAXWMZAUOHBJHBWDOLJGPCQWFSYJQSVFIYQRNETEVEOYQPDOBGLUBZRNTRUFNRYXFJKFEPDNDMWUAKEQSRXGISFAWMKFDZNLWELKJWRAPKOTYTHJ");

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
    msg.setTimeStamp(0.562945851729);
    msg.setSource(10235U);
    msg.setSourceEntity(239U);
    msg.setDestination(7555U);
    msg.setDestinationEntity(220U);
    msg.value = 133U;

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
    msg.setTimeStamp(0.763762632285);
    msg.setSource(18983U);
    msg.setSourceEntity(61U);
    msg.setDestination(27159U);
    msg.setDestinationEntity(181U);
    msg.value = 155U;

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
    msg.setTimeStamp(0.440164541601);
    msg.setSource(31515U);
    msg.setSourceEntity(56U);
    msg.setDestination(35930U);
    msg.setDestinationEntity(247U);
    msg.value = 138U;

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
    msg.setTimeStamp(0.302876575725);
    msg.setSource(16965U);
    msg.setSourceEntity(252U);
    msg.setDestination(37043U);
    msg.setDestinationEntity(236U);
    msg.consumer.assign("OGHDTLTTPSPMNMXYBSUZOUORAXQYURUBAACXIMIVZCKFKWXZJVDUCYJQQPKDHUAGVXBWUJPWGXTZYNFNXBOHJNJKIWTNWILONDCHIISBX");
    msg.message_id = 28411U;

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
    msg.setTimeStamp(0.0324237001467);
    msg.setSource(57014U);
    msg.setSourceEntity(232U);
    msg.setDestination(31452U);
    msg.setDestinationEntity(5U);
    msg.consumer.assign("VYTSHYLDGRCIAHZWKJKUACMAGNRFCISYTRZWHSGFXBWRPRIDLODMJRMIZTLZYYNOCZYNXTYDWDUHOTOKFGPEMFTXTSBHBOQNYWMACMCKJIKJQBCWIAUHKAZEQDUDEFJDWSVNNCYOMUPNCETPDBOV");
    msg.message_id = 33857U;

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
    msg.setTimeStamp(0.818872353554);
    msg.setSource(34790U);
    msg.setSourceEntity(162U);
    msg.setDestination(14186U);
    msg.setDestinationEntity(234U);
    msg.consumer.assign("JUCSWPIOWRXVVVQHZAHFTUQYRYGNXWMMPHAPWLQJBGORKTJZTDCDOBYZJELDFIHVGN");
    msg.message_id = 5438U;

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
    msg.setTimeStamp(0.0634511667844);
    msg.setSource(21132U);
    msg.setSourceEntity(73U);
    msg.setDestination(52560U);
    msg.setDestinationEntity(231U);
    msg.type = 160U;

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
    msg.setTimeStamp(0.0740559774268);
    msg.setSource(52495U);
    msg.setSourceEntity(193U);
    msg.setDestination(48019U);
    msg.setDestinationEntity(196U);
    msg.type = 32U;

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
    msg.setTimeStamp(0.722530151392);
    msg.setSource(25446U);
    msg.setSourceEntity(9U);
    msg.setDestination(4185U);
    msg.setDestinationEntity(141U);
    msg.type = 111U;

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
    msg.setTimeStamp(0.906920490557);
    msg.setSource(11554U);
    msg.setSourceEntity(34U);
    msg.setDestination(18125U);
    msg.setDestinationEntity(249U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.359844894326);
    msg.setSource(17218U);
    msg.setSourceEntity(210U);
    msg.setDestination(44U);
    msg.setDestinationEntity(184U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.523119639289);
    msg.setSource(39789U);
    msg.setSourceEntity(193U);
    msg.setDestination(49550U);
    msg.setDestinationEntity(72U);
    msg.op = 6U;

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
    msg.setTimeStamp(0.613004418306);
    msg.setSource(42239U);
    msg.setSourceEntity(78U);
    msg.setDestination(31819U);
    msg.setDestinationEntity(215U);
    msg.total_steps = 56U;
    msg.step_number = 173U;
    msg.step.assign("ROFDJPVRKXAUNQMUOGZFMLSXNLFQYKLPNRSBHWTDJFUEFNXTVCIWBZQEVYECXXDBZXMIDUNHGOYAKURAXSQTZRROFQXPAFIYWSWJUWLDLMKBDVS");
    msg.flags = 113U;

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
    msg.setTimeStamp(0.594846197296);
    msg.setSource(34244U);
    msg.setSourceEntity(246U);
    msg.setDestination(37113U);
    msg.setDestinationEntity(229U);
    msg.total_steps = 122U;
    msg.step_number = 129U;
    msg.step.assign("HTSBMOLJRDUNHYIGKHLIOCSNCZMJBNLQHLKJYWFHVHLSPPIGZSWPAXSZPTFLZMZCWXRAVERYUFIAXYVIITUKGRRTZBUCBEYOXELSAIKYNJBUMCAAPDACDHGBMSWIVFXDNPUQUTKJPXVKYLRAEMQTBFEOFOFVKRAVGJQQGESGFAMRWTLWWJMOJGMPDKPQXNDUVXVURHEJVTDPZQIKDQOYNZUCYLSIBZKMHQYECDOBXRJHSENTWO");
    msg.flags = 16U;

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
    msg.setTimeStamp(0.933453111173);
    msg.setSource(4689U);
    msg.setSourceEntity(207U);
    msg.setDestination(10689U);
    msg.setDestinationEntity(43U);
    msg.total_steps = 37U;
    msg.step_number = 10U;
    msg.step.assign("JZICRZOUMNTQBCZPFGPYSRBTSFZIXGVQOOWASJJBCQMHKXEAFRIFCXHNXTFCKLWALALREUPNPSCFEVUEAYGYBWHJOTCDGLKEGAORDLIZLOQZQNUTHGCFPXKGYNWKXB");
    msg.flags = 233U;

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
    msg.setTimeStamp(0.512414240419);
    msg.setSource(24041U);
    msg.setSourceEntity(213U);
    msg.setDestination(53239U);
    msg.setDestinationEntity(212U);
    msg.state = 227U;
    msg.error.assign("PJLLNBKRXUBYSWMTKOEQMEGKCDXZJHPTBHVIAEHRQXMIVELACUJJDMXVEFKJGAYWYEASOLCNWQFCTBNDZHGOLDNMXLROQPGZZSIOGTGZUQZXCNPJCTHDTSWDAHC");

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
    msg.setTimeStamp(0.637502041629);
    msg.setSource(34723U);
    msg.setSourceEntity(120U);
    msg.setDestination(12706U);
    msg.setDestinationEntity(58U);
    msg.state = 236U;
    msg.error.assign("SZPMNRHEPOQOKVLRGZSUETKDALVVHCYMJCJBFNZHJZBQJAOWPIYSLCUYWEUWMZTFKEJTTERIPFQJRRMCKZNSXFRDTKNQNHBWUPPVAXOUSKZNLECDBOKTIXURSHEIHGPWABWIFJZMHDXFLSGNPKWYNVFYYOPCANLGAZHIMBVIJEMRXTTLAGTURQAGRMBCEYXIKVQMDFDQLCGVOVDSSLEGOUYDJQXIFWBUOFBDNYLQCHPTWUJOKVQXGDWBYHAGXS");

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
    msg.setTimeStamp(0.633790882503);
    msg.setSource(33720U);
    msg.setSourceEntity(240U);
    msg.setDestination(26417U);
    msg.setDestinationEntity(14U);
    msg.state = 24U;
    msg.error.assign("VRQXKSLWBKYHAICNNHHQVYHHVDVOTMOQHRPBGNKYTWEIZPUCSNISBIRWIBVJAGEFVJIMCZMZUTQYKGLAYBCSAYDULLMSAYQBOEFROVOPZHLMYFRKIJTN");

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
    msg.setTimeStamp(0.850994607371);
    msg.setSource(37047U);
    msg.setSourceEntity(199U);
    msg.setDestination(17410U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.213539218295);
    msg.setSource(42981U);
    msg.setSourceEntity(243U);
    msg.setDestination(58830U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.711504513223);
    msg.setSource(34731U);
    msg.setSourceEntity(238U);
    msg.setDestination(60110U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.637218493629);
    msg.setSource(12390U);
    msg.setSourceEntity(134U);
    msg.setDestination(56551U);
    msg.setDestinationEntity(65U);
    msg.op = 156U;
    msg.speed_min = 0.458280791092;
    msg.speed_max = 0.961558793442;
    msg.long_accel = 0.564562525652;
    msg.alt_max_msl = 0.454616903349;
    msg.dive_fraction_max = 0.372311189472;
    msg.climb_fraction_max = 0.855353868462;
    msg.bank_max = 0.150164669646;
    msg.p_max = 0.097637986008;
    msg.pitch_min = 0.859714242538;
    msg.pitch_max = 0.404992423952;
    msg.q_max = 0.827207519222;
    msg.g_min = 0.234780653757;
    msg.g_max = 0.678984616064;
    msg.g_lat_max = 0.645051714858;
    msg.rpm_min = 0.395319442774;
    msg.rpm_max = 0.654315253361;
    msg.rpm_rate_max = 0.628851791755;

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
    msg.setTimeStamp(0.125987294932);
    msg.setSource(38169U);
    msg.setSourceEntity(70U);
    msg.setDestination(47763U);
    msg.setDestinationEntity(226U);
    msg.op = 244U;
    msg.speed_min = 0.812998938733;
    msg.speed_max = 0.907720098717;
    msg.long_accel = 0.122012504956;
    msg.alt_max_msl = 0.951441269053;
    msg.dive_fraction_max = 0.100324918995;
    msg.climb_fraction_max = 0.948963805831;
    msg.bank_max = 0.628291633524;
    msg.p_max = 0.279080570024;
    msg.pitch_min = 0.969104702085;
    msg.pitch_max = 0.0681097345084;
    msg.q_max = 0.705010127193;
    msg.g_min = 0.581363525235;
    msg.g_max = 0.507269054655;
    msg.g_lat_max = 0.178374209699;
    msg.rpm_min = 0.620071860105;
    msg.rpm_max = 0.929183321966;
    msg.rpm_rate_max = 0.663209610995;

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
    msg.setTimeStamp(0.251613684593);
    msg.setSource(39665U);
    msg.setSourceEntity(144U);
    msg.setDestination(21995U);
    msg.setDestinationEntity(35U);
    msg.op = 118U;
    msg.speed_min = 0.864653009196;
    msg.speed_max = 0.947000119581;
    msg.long_accel = 0.66722299285;
    msg.alt_max_msl = 0.716315107958;
    msg.dive_fraction_max = 0.147046722649;
    msg.climb_fraction_max = 0.771772751273;
    msg.bank_max = 0.461807413335;
    msg.p_max = 0.356010625788;
    msg.pitch_min = 0.981321382904;
    msg.pitch_max = 0.373570703217;
    msg.q_max = 0.588613812525;
    msg.g_min = 0.110044541811;
    msg.g_max = 0.469959266689;
    msg.g_lat_max = 0.491879196962;
    msg.rpm_min = 0.252490380772;
    msg.rpm_max = 0.277729214662;
    msg.rpm_rate_max = 0.792932343804;

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
    msg.setTimeStamp(0.920124573743);
    msg.setSource(7598U);
    msg.setSourceEntity(27U);
    msg.setDestination(55130U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.356014175749);
    msg.setSource(5170U);
    msg.setSourceEntity(193U);
    msg.setDestination(16577U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.639386117818);
    msg.setSource(3152U);
    msg.setSourceEntity(243U);
    msg.setDestination(1840U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.717432908578);
    msg.setSource(20741U);
    msg.setSourceEntity(49U);
    msg.setDestination(39793U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.0859737511096;
    msg.lon = 0.427827352993;
    msg.height = 0.252863140876;
    msg.x = 0.370250383648;
    msg.y = 0.468573490357;
    msg.z = 0.0789886381301;
    msg.phi = 0.00957420162376;
    msg.theta = 0.525052766022;
    msg.psi = 0.568023535236;
    msg.u = 0.121674881857;
    msg.v = 0.485497693436;
    msg.w = 0.156832441583;
    msg.p = 0.356143612747;
    msg.q = 0.639387786975;
    msg.r = 0.133200335203;
    msg.svx = 0.136652393364;
    msg.svy = 0.259849531875;
    msg.svz = 0.839678955287;

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
    msg.setTimeStamp(0.351800416139);
    msg.setSource(26518U);
    msg.setSourceEntity(36U);
    msg.setDestination(33385U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.58203296721;
    msg.lon = 0.747247458492;
    msg.height = 0.603245837261;
    msg.x = 0.292092992711;
    msg.y = 0.726180661467;
    msg.z = 0.128318607977;
    msg.phi = 0.47524770015;
    msg.theta = 0.592446393942;
    msg.psi = 0.764097894227;
    msg.u = 0.87400456506;
    msg.v = 0.414882961538;
    msg.w = 0.870865164456;
    msg.p = 0.984486769209;
    msg.q = 0.522945116835;
    msg.r = 0.356421922589;
    msg.svx = 0.644188968437;
    msg.svy = 0.488679602133;
    msg.svz = 0.676396448772;

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
    msg.setTimeStamp(0.879182846304);
    msg.setSource(28086U);
    msg.setSourceEntity(24U);
    msg.setDestination(27423U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.463259406486;
    msg.lon = 0.157116406098;
    msg.height = 0.139922022507;
    msg.x = 0.00259406536931;
    msg.y = 0.547665695215;
    msg.z = 0.967117425971;
    msg.phi = 0.935286898673;
    msg.theta = 0.487803004841;
    msg.psi = 0.754905049177;
    msg.u = 0.205502663066;
    msg.v = 0.405604288308;
    msg.w = 0.917829612047;
    msg.p = 0.0290375877952;
    msg.q = 0.431530481735;
    msg.r = 0.477174970717;
    msg.svx = 0.247960006132;
    msg.svy = 0.67735922594;
    msg.svz = 0.0502981684187;

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
    msg.setTimeStamp(0.100146398255);
    msg.setSource(45157U);
    msg.setSourceEntity(227U);
    msg.setDestination(48745U);
    msg.setDestinationEntity(101U);
    msg.op = 180U;
    msg.entities.assign("ENILIGPNQKITXTFVPKBYFCOZFCDINTSUDUCMYCCWNUWOKBCAQFTFZUUZEREABVKWFJZOBQQLAZLCCSWJRKOERXJLYDOUSJXROJNMQHYODWXPAXVIPGLAETHDHGMBJMWGJFKBSOMRHGSHEEGVTGWYESMVILEOTSNWDHDLRLPJWQNRUFIYFTDQPRKSBKMAHXGPIXESYXRPNHQVIYP");

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
    msg.setTimeStamp(0.730336504635);
    msg.setSource(59591U);
    msg.setSourceEntity(111U);
    msg.setDestination(1348U);
    msg.setDestinationEntity(123U);
    msg.op = 150U;
    msg.entities.assign("JUHNWEWQFCQJJGSPVJRECZKRTHMDDIXNTFKDELWVKFSVFTNOBTSIEIIIKXYNHLOVWKWCUBIMTUWCLPMSXZJOHHUL");

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
    msg.setTimeStamp(0.277225370924);
    msg.setSource(36738U);
    msg.setSourceEntity(117U);
    msg.setDestination(27667U);
    msg.setDestinationEntity(42U);
    msg.op = 32U;
    msg.entities.assign("MKDHITVBXZCCANWXNBLZHQUYUSJEAYLKTBFFYPHGFEYJGWWUJNSAOPOTCRPKLGMVXQSPOWEFSRVHWGPKIWTBYDEBVDRJUEAIRKQUXOANISSHTXZZR");

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
    msg.setTimeStamp(0.263865985977);
    msg.setSource(48839U);
    msg.setSourceEntity(251U);
    msg.setDestination(6136U);
    msg.setDestinationEntity(170U);
    msg.type = 219U;
    msg.speed = 13716U;
    const char tmp_msg_0[] = {80, 6, -76, -9, -68, 13, -116, 4, -90, 61, -106, -34, -121, 90, -105, 80, 88, -109, 107, 89, -67, 35, 126, 50, -81, -42, -31, -71, -81, 123, -85, 16, 65, -114, 39, -60, 93, 113, -48, -92, 32, -13, 43, -20, -101, 98, -110, -38, -49, -88, -77, -26, -24, 104, -48, 55, -14, 21, -116, -20, 91, 116, -105, -54, 103, -120, -17, 31, 117, 75, 69, 102, -4, 67, 91, -66, 29, 22, -58, 52, -86, 104, 81, 83, -122, 38, -21, 17, -28, 71, 111, -109, 122, -125, -20, 18, -13, 118, 123, -119, 4, -17, -53, -64, -123, 82, -26, 12, -19, -77, 78, -93, 18, 113, 45, 20, -98, -80, 111, 23, 73, 41, 43, 28, 118, -71, -89, -82, -27, -14, 64, 54, -24, -102, 23, 36, 88, -82, 19, -41, 16, 113, -65, 99, 112, 30, -14, 91, 64, -94, -3, 86, -49, 72, -6, -127, -22, 68, -30, -46, -51, -7, -24, -28, 43, 85, -123, -82, -45, -104, -21, 4, -1, -81, -36, -87, -100, 70, 122, 63, 122, 47, -25, -62, 119, 84, 95, -13, 52, -105, 45, 116, -125, -72, 104, 40, -108, -67, -1, -37, 99, -29, 119, -122, 63, 90, 51, -99, 43, 70, 124, -90, 115, -113, -100, -105, 21, -54, 117, -59};
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
    msg.setTimeStamp(0.169800487462);
    msg.setSource(51250U);
    msg.setSourceEntity(253U);
    msg.setDestination(35759U);
    msg.setDestinationEntity(73U);
    msg.type = 164U;
    msg.speed = 54583U;
    const char tmp_msg_0[] = {-6, -84, -119, 79, 100, -86, -117, 75, 71, 26, -43, -44, 112, 18, -50, -121, 84, -96, 73, 38, 18, 124, 125, 58, 97, -98, -55, -104, 123, 55, -125, -36, 103, -45, -34, 105, -103, -46, 125, -54, 106, 55, 44, -11, -125, -51, -121, 18, -95, -68, 41, 74, -106, 54, 51, 57, 122, 103, -103, 24, -42, 49, 110, 97, 87, 61, 94, -6, 90, -70, 98, 6, -59, 12, -89, 80, 64, 18, 6, -13, -37, -27, -108, 113, 94, -65, -90, 104, 87, -112};
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
    msg.setTimeStamp(0.552663355413);
    msg.setSource(8973U);
    msg.setSourceEntity(233U);
    msg.setDestination(52310U);
    msg.setDestinationEntity(23U);
    msg.type = 118U;
    msg.speed = 59129U;
    const char tmp_msg_0[] = {72, -90, -102, -56, -29, 3, 39, -96, 9, -95, 53, -69, -92, -24, -102, 57, -54, -103, -103, 19, 12, -18, 4, -30, -25, 71, 92, 53, 45, 40, 80, 121, 108, -19, 120, -124, 40, 90, 98, -87, -62, 36, -127, 98, -18, 48, 111, 119, 120, 55, 59, -114, 66, 79, -126, -28, 62, -120, -86, 113, -120, 100, 45, -117, -45, 69, 24, 92, -87, 111, 125, 119, -81, -114, -61, 27, -24, 24, 60, -68, -28, 94, 91, 14, 45, -67, 44, -15, -93, 61, -5, -22, 97, 18, 44, 70, 18, -79, 39, 14, 47, 54, 62, -84, -63, 36, -46, -69, -60, -53, 14, -80, 62, 111, -121, -96, -36, 90, 52, 99, 77, -24, -98, -92, 21, -20, -95, -33, -120, -103, 65, -76, 29, -30, -107, 65, -115, 111, -107, -71, -9, -35, 19, -81, -61, 9, 81, -96, -74, -78, 19, -27, -34, 66, 69, -5, -126, 5, -66, 78, 69, -79, -10, 56, 106, 73, -60, -37, 100, -70, -52, 13, -25, -67, 121, 22, -63, 7, -16, -75, 101, -99, 107, -47, 49, -60, 32, -45, 115, 25, -21, 59, 88, -39, -63, -30, 66, 71, 38, 103, -14, -88, -38, 86, 12, -81, 49, 67, -9, -83, -109, -78, -83, 101, -91, 110, 78, -95, 41, 123, -38, -35, -5, 19, -31, 75};
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
    msg.setTimeStamp(0.0885362151753);
    msg.setSource(858U);
    msg.setSourceEntity(207U);
    msg.setDestination(31307U);
    msg.setDestinationEntity(121U);
    msg.op = 239U;
    msg.tas2acc_pgain = 0.0215726587702;
    msg.bank2p_pgain = 0.701925208578;

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
    msg.setTimeStamp(0.849127102339);
    msg.setSource(51130U);
    msg.setSourceEntity(159U);
    msg.setDestination(60612U);
    msg.setDestinationEntity(23U);
    msg.op = 207U;
    msg.tas2acc_pgain = 0.716394935651;
    msg.bank2p_pgain = 0.446134181128;

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
    msg.setTimeStamp(0.903521306571);
    msg.setSource(39703U);
    msg.setSourceEntity(42U);
    msg.setDestination(25912U);
    msg.setDestinationEntity(104U);
    msg.op = 148U;
    msg.tas2acc_pgain = 0.286790980969;
    msg.bank2p_pgain = 0.478030425743;

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
    msg.setTimeStamp(0.861718716328);
    msg.setSource(30643U);
    msg.setSourceEntity(226U);
    msg.setDestination(8963U);
    msg.setDestinationEntity(29U);
    msg.available = 3428920877U;
    msg.value = 23U;

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
    msg.setTimeStamp(0.805332380307);
    msg.setSource(28939U);
    msg.setSourceEntity(87U);
    msg.setDestination(46674U);
    msg.setDestinationEntity(67U);
    msg.available = 166911866U;
    msg.value = 158U;

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
    msg.setTimeStamp(0.117476500858);
    msg.setSource(2995U);
    msg.setSourceEntity(39U);
    msg.setDestination(57942U);
    msg.setDestinationEntity(236U);
    msg.available = 1861336332U;
    msg.value = 135U;

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
    msg.setTimeStamp(0.947328618522);
    msg.setSource(62368U);
    msg.setSourceEntity(113U);
    msg.setDestination(23833U);
    msg.setDestinationEntity(228U);
    msg.op = 9U;
    msg.snapshot.assign("JTJOFOQBDVOCSJLXCUMNMSGUVELLKTAAYZURUZONDAEXCBXMSAEKNCUWPNSXOBYMSBFHFAQIRGWCYCUCAQHGYNMTPPEJVNCLTQLHSTIRT");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.386811062971;
    tmp_msg_0.lon = 0.251260445612;
    tmp_msg_0.z = 0.409048137091;
    tmp_msg_0.z_units = 75U;
    tmp_msg_0.speed = 0.998341080284;
    tmp_msg_0.speed_units = 113U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.127977241511;
    tmp_tmp_msg_0_0.lon = 0.00054236782616;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("FNSRQYMAAAOGUIYRJCHFVEABDMNTIVQLYMQSBXOUWYTQOGCNOIDCDOCLLKKWBPMNHSOCSEJTASPVFYBXTGLWPRKCMQRKDIKJENGWVCMPSJPEBTZF");
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
    msg.setTimeStamp(0.0745163649173);
    msg.setSource(31955U);
    msg.setSourceEntity(114U);
    msg.setDestination(28393U);
    msg.setDestinationEntity(183U);
    msg.op = 144U;
    msg.snapshot.assign("EKWEHICTMTEFQSHHLFTLRZWCKBLDHIWPELHTSDIPEGXDQIFVKADGGAXXFYGLJRJRGVYPUUSCUSDCDHBMYRLZMMSKQFQONRTYPTQWFVQMIWMAXXOLMLFZXTXZJOGCNUFBJARGWAYAOKGHZUTQIBDBTZJYXXHAOPKBQSNCPWNWESYHUOOKCRPKQPOUWHMLYZBCZZYOSVRBJYQIOKMVUPNEINBGBAN");
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 134U;
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
    msg.setTimeStamp(0.807322007108);
    msg.setSource(59676U);
    msg.setSourceEntity(216U);
    msg.setDestination(34486U);
    msg.setDestinationEntity(52U);
    msg.op = 138U;
    msg.snapshot.assign("HQFKHFEAFKAPMKSTGTCMRIZJIXEOTQWQEXSZXUEYYHABRGUPVWJPPHOUZTQMCYFLWUYMKATQLVWAVSSGBFQDMLMZIKEJPWOLTNVLKWZLISUTFIAWBUHSLVZREYRICVFBCVFYJICQXIDGDGLUDBPTEBDRNNGKOX");
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.863972886279;
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
    msg.setTimeStamp(0.083142782457);
    msg.setSource(60062U);
    msg.setSourceEntity(186U);
    msg.setDestination(18365U);
    msg.setDestinationEntity(56U);
    msg.op = 3U;
    msg.name.assign("HZOFJGCMUTRYMRSRSWDGVNMQPSFTCJPVONIBTGRYHZTLWPMYQGDUWLDHOCBWLOQKOJIIJTFGEXHUACQWCSHSWMZRLACUJUVZWNYKBNXEBLQEIDWNOKVIPXRPKVAIEKLMBZSVQZMOKVZAJQWXWRNGLEYGXCLNJKRCDTCA");

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
    msg.setTimeStamp(0.454277248154);
    msg.setSource(29691U);
    msg.setSourceEntity(109U);
    msg.setDestination(43563U);
    msg.setDestinationEntity(122U);
    msg.op = 124U;
    msg.name.assign("TRQZUAJUWKGPXINCVBEZEZPHQWYMXKTFOXOYRIZHVPQTAGFGFHBRAKFZNOTNDADKVSWTJYMFJUCDSBJNVXYXMDVMZAUYWLIHSVLWDBKINRUJPHUSBSAKRQWNEAEDQZEPWVJFPKMHLAIUHXEBMFEULYGCTOHRJLDFSQRIDXEMWMORYLKSZNBJCTNRMQK");

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
    msg.setTimeStamp(0.889170756655);
    msg.setSource(13385U);
    msg.setSourceEntity(139U);
    msg.setDestination(4059U);
    msg.setDestinationEntity(23U);
    msg.op = 139U;
    msg.name.assign("WMLVENGVTTEDKYFYHFLPTBVOESCYRZJJQOWTAQUSYIJRSDXQAVOGFXJHCTKIYOUGVWGADBKFZHHNNAGONMYPN");

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
    msg.setTimeStamp(0.411202742316);
    msg.setSource(741U);
    msg.setSourceEntity(245U);
    msg.setDestination(53606U);
    msg.setDestinationEntity(40U);
    msg.type = 213U;
    msg.htime = 0.437486877257;
    msg.context.assign("GDNKWDWYJLFYUHZEEQRGJPRMPFOWGXIDLPVSNQEFQBKACJVAAUZSFCMAXYGVNIIXWHFU");
    msg.text.assign("VPHAOYJVOLWGABSTUCGSZEKKITESTOBGUJTISKOLJYMMUHTNMHCTOGUHDISXILKRCFFROLQKXCXYWULKCIJDBRVWSVPEPHAWZRWOZFKPKXADQOEDPYJGQLWVINYMNJNDDDNVSHRULNPRALENFECFWGIQHGBZXXDVCXUEYVAMPOHTNFC");

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
    msg.setTimeStamp(0.837529365926);
    msg.setSource(19281U);
    msg.setSourceEntity(134U);
    msg.setDestination(58169U);
    msg.setDestinationEntity(126U);
    msg.type = 1U;
    msg.htime = 0.593091073143;
    msg.context.assign("HLNSLRFUPRXIBUYP");
    msg.text.assign("VFBJOYNEZHJSDEMXZJBNVXOKSFMBGXYHYQELRGCFGFBBJARWLDOLL");

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
    msg.setTimeStamp(0.470333565342);
    msg.setSource(65272U);
    msg.setSourceEntity(53U);
    msg.setDestination(26002U);
    msg.setDestinationEntity(141U);
    msg.type = 130U;
    msg.htime = 0.6218042081;
    msg.context.assign("UQIXYETEHWBFXDNMZSYECZQBQGNIMMEHALMGAQCPLBJYDMBEEBWUFDMJUVRDJIUSWKALXFBYTXVVRDXRRMJJPPJEAPNAUKAKZQVSJMZLGVPFWPFKHJLHSQZNAKTIIDBTOQOGRCRNTSFWRWOIHLUOWHXHTTCPKCDILZLUSOKV");
    msg.text.assign("UQQFIRPRBSZGOBPFDEHSKFMYOERKVUZNDUWILT");

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
    msg.setTimeStamp(0.515347753365);
    msg.setSource(12021U);
    msg.setSourceEntity(28U);
    msg.setDestination(55961U);
    msg.setDestinationEntity(132U);
    msg.command = 158U;
    msg.htime = 0.916345849061;

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
    msg.setTimeStamp(0.686743607855);
    msg.setSource(39242U);
    msg.setSourceEntity(205U);
    msg.setDestination(44856U);
    msg.setDestinationEntity(36U);
    msg.command = 239U;
    msg.htime = 0.398771075484;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 236U;
    tmp_msg_0.htime = 0.183873712545;
    tmp_msg_0.context.assign("BSPNXJGVUSLWFHMQGHVFRSRBYEFGVVJLNSWOSIFBPEZCEWAHQPXUYERIQDNEKUCUXNWMCMNYXQWUAHIJKOXIPDHXJLKLWHOUYGGIOZHKJPTMFSAQBLEVVBXTTHZHOYSOZUCTFYVNGQSONWKMFJCLCDSDAXIFVLZORYZZTDGXTNXQWKQVLPEPZUBZDAUYLACUTJRIBMIJMRILRMVEOMGDJDHABAOBYNWQKPKQFCTZRERABF");
    tmp_msg_0.text.assign("ITNOAWOHVWAHTJFLPQCRIUTITJQACUJJTTYRFUTCTQZW");
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
    msg.setTimeStamp(0.15472907413);
    msg.setSource(7277U);
    msg.setSourceEntity(107U);
    msg.setDestination(21364U);
    msg.setDestinationEntity(78U);
    msg.command = 190U;
    msg.htime = 0.849103799371;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 197U;
    tmp_msg_0.htime = 0.0526252088432;
    tmp_msg_0.context.assign("PYGBYLGKBQAGIZZGOGUKZBFSGWOAOXHTUQHSNNTQPOKIJIJXHTHWWZCJSETBREKFJTPAPKRGRKRCXXKONYZHFCTVSZYJAYSOXVGCQHXUWVGMKBUMXXNUCSZXULEGDRDPNWITRUFPVMDSYHTEQAUAODQWPDIFMBPUXQFNJMSZLYFAMLBQFINCNTDDVEMVJBRLZIDNEWQOCAUPFMDHLJSCILEBEACLCIMJQ");
    tmp_msg_0.text.assign("BJPZHIFBFQAIJGNTCCSXIRPNUQLWKUKHTEZKOJNXPIARWCVSNACSABVURFLIQGWARIDMYFZOIFBKDEIQYTSDUVPGPKCNFFYUDUUTMHMVLMAUOARXLYRZTLEZMR");
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
    msg.setTimeStamp(0.775321803045);
    msg.setSource(21185U);
    msg.setSourceEntity(173U);
    msg.setDestination(25895U);
    msg.setDestinationEntity(196U);
    msg.op = 128U;
    msg.file.assign("CSNAHMSHMAVHBHNDBLUTZ");

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
    msg.setTimeStamp(0.142230977442);
    msg.setSource(6172U);
    msg.setSourceEntity(157U);
    msg.setDestination(31049U);
    msg.setDestinationEntity(185U);
    msg.op = 80U;
    msg.file.assign("DALOFWAZIUZECPRVHJECWEHZMSYDAXZNQIUDVJVMYGFMSOWPMRFHASBOPBCDQAOYZCXFVIBSLGWRTOSNPVXJYNDUQXKB");

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
    msg.setTimeStamp(0.807551280036);
    msg.setSource(1796U);
    msg.setSourceEntity(127U);
    msg.setDestination(40387U);
    msg.setDestinationEntity(116U);
    msg.op = 224U;
    msg.file.assign("GEHTUTVYHVZEIQFEDFVENTFVITJRCHOVRMXZUZPJZUMHWOGLHAPKPBXNQMQHTQQFUOXBCVTXFXGYMGLLYMSBSWBXKBPCVKRPXGRHROIPQSSNFCMZ");

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
    msg.setTimeStamp(0.224240720119);
    msg.setSource(22073U);
    msg.setSourceEntity(53U);
    msg.setDestination(52035U);
    msg.setDestinationEntity(171U);
    msg.op = 48U;
    msg.clock = 0.918098646479;
    msg.tz = 1;

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
    msg.setTimeStamp(0.436971088431);
    msg.setSource(58281U);
    msg.setSourceEntity(27U);
    msg.setDestination(5788U);
    msg.setDestinationEntity(122U);
    msg.op = 218U;
    msg.clock = 0.807926588197;
    msg.tz = 35;

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
    msg.setTimeStamp(0.497417465554);
    msg.setSource(9932U);
    msg.setSourceEntity(239U);
    msg.setDestination(44607U);
    msg.setDestinationEntity(146U);
    msg.op = 77U;
    msg.clock = 0.75646305487;
    msg.tz = 68;

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
    msg.setTimeStamp(0.0903895363272);
    msg.setSource(17306U);
    msg.setSourceEntity(246U);
    msg.setDestination(15651U);
    msg.setDestinationEntity(169U);
    msg.conductivity = 0.907491668817;
    msg.temperature = 0.320742436887;
    msg.depth = 0.818249522142;

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
    msg.setTimeStamp(0.613040926672);
    msg.setSource(61182U);
    msg.setSourceEntity(0U);
    msg.setDestination(50395U);
    msg.setDestinationEntity(44U);
    msg.conductivity = 0.0595902269498;
    msg.temperature = 0.204106633927;
    msg.depth = 0.182329243585;

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
    msg.setTimeStamp(0.280104744561);
    msg.setSource(29256U);
    msg.setSourceEntity(65U);
    msg.setDestination(38344U);
    msg.setDestinationEntity(221U);
    msg.conductivity = 0.370765723629;
    msg.temperature = 0.200958018848;
    msg.depth = 0.283799757771;

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
    msg.setTimeStamp(0.0966362951978);
    msg.setSource(52641U);
    msg.setSourceEntity(79U);
    msg.setDestination(36296U);
    msg.setDestinationEntity(92U);
    msg.altitude = 0.962336375869;
    msg.roll = 33380U;
    msg.pitch = 23159U;
    msg.yaw = 50084U;
    msg.speed = 6814;

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
    msg.setTimeStamp(0.537991356397);
    msg.setSource(33413U);
    msg.setSourceEntity(129U);
    msg.setDestination(50565U);
    msg.setDestinationEntity(63U);
    msg.altitude = 0.669062020852;
    msg.roll = 2613U;
    msg.pitch = 47694U;
    msg.yaw = 5311U;
    msg.speed = 20340;

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
    msg.setTimeStamp(0.911883421843);
    msg.setSource(23471U);
    msg.setSourceEntity(214U);
    msg.setDestination(40270U);
    msg.setDestinationEntity(254U);
    msg.altitude = 0.295281026679;
    msg.roll = 34330U;
    msg.pitch = 45134U;
    msg.yaw = 43261U;
    msg.speed = -14166;

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
    msg.setTimeStamp(0.20990826645);
    msg.setSource(29294U);
    msg.setSourceEntity(112U);
    msg.setDestination(62101U);
    msg.setDestinationEntity(36U);
    msg.altitude = 0.369267807847;
    msg.width = 0.857594389107;
    msg.length = 0.851884318961;
    msg.bearing = 0.824630883004;
    msg.pxl = -30305;
    msg.encoding = 52U;
    const char tmp_msg_0[] = {-82, 105, 109, -47, -74, -111, 64, 15, 42, 121, -44, 105, -11, 51, -24, -114, -78, 76, -16, -64, 5, -30, 125, -78, 117, -3, -125, 1, 73, -71, -22, 67, 1, 8, 51, 76, 22, 32, 39, 85, 51, 51, 47, -84, -41, -125, -118, -27, 83, 0, -117, -87, 88, 27, 27, -46, 54, -107, -40, 11, -32, -20, 81, 109, 16, 83, 54, 84, 16, -65, -16, -7, 32, 115, 95, -128, 65, 11, 91, 35, 52, -53, -100, -96, -96, -45, -5, -82, 18, -35, -121, -62, -42, -78, 52, -14, 25, -69, 40, 104, -48, 61, -37, 15, 69, 10, -116, 48, 111, -115, -57, -93, 22, -120, 68, -112, -126, 4, 116, -128, 58, 74, -3};
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
    msg.setTimeStamp(0.839778633544);
    msg.setSource(7399U);
    msg.setSourceEntity(83U);
    msg.setDestination(2176U);
    msg.setDestinationEntity(167U);
    msg.altitude = 0.995351149011;
    msg.width = 0.330691567385;
    msg.length = 0.183527213828;
    msg.bearing = 0.384717738219;
    msg.pxl = 26643;
    msg.encoding = 225U;
    const char tmp_msg_0[] = {-105, 16, 126, -122, -122, 71, -85, -7, -124, 76, 98, 25, 100, -67, -29, 94, -39, 46, 22, 121, 45, 83, 49, 49, -30, 107, -7, 42, -103, -108, -4, -28, -36, -120, -99, -67, -66, -19, -97, -62, -39, 68, -80, -32, 121, 24, -87, 12, 89, -5, -31, -77, -24, -41, 30, 83, 102, 57, 0, -19, -69, 13, -5, -123, 83, -39, 67, 89, 35, -20, -41, -42, -60, 16, -111, 118, 122, -23, 44, -104, -101, -123, -24, -39, -120, -13, -94, 122, -30};
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
    msg.setTimeStamp(0.352566387025);
    msg.setSource(3116U);
    msg.setSourceEntity(200U);
    msg.setDestination(4308U);
    msg.setDestinationEntity(146U);
    msg.altitude = 0.159318668951;
    msg.width = 0.236411789413;
    msg.length = 0.123013331386;
    msg.bearing = 0.555094487119;
    msg.pxl = -7168;
    msg.encoding = 49U;
    const char tmp_msg_0[] = {15, 121, 108, -63, 46, 71, 94, 19, -45, 54, 92, -110, 69, -74, 124, 19, 9, 30, -1, -4, 79, 101, 57, -73, -114, -46, 62, -9, 86, -24, -43, -96, 72, 114, -85, 93, -75, 23, 69, -120, -117, 107, -123, 57, -109, -117, -62, -11, 110, 51, -61, -99, -73, -98, 66, -112, -88, -14, 74, -13, 6, -42, 72, -25, -96, 56, 11, -3, 106, -97, -27, -24, 111, 79, -7, 68, -111, -123, 62, 94, -62, 69, 22, 35, 21, 39, 37, 68, 2, 112, -27, 0, -98, 90, 84, -58, -81, 116, -72, 124, -40, 75, 99, 3, -67, -57, -111, 68, -87, -77, 67, -49, 45, -108, 59, -48, -76, -17, -26, -40, 11, -30, 66, 76, -44, 96, -126, 46, 84, 15, 120, -8, 15, -4, -15, -124, -43, -84, -51, 103, 18, -78, -34, -56, -27, 23, -90, 118, 5, 105, -10, 112, -22, 24, 20, 93, 122, 17, 12, 88, -5, -41, -72, -76, 6, -123, 2, -26, -121, -106, 3, -28, 21, -80, -64, 48, 31, 58, -66, 99, 61, 21, 62, -82, -123, -100, 45, -10, 59, -124, 26, 119, -7, -99, 102, 126, -58, 40};
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
    msg.setTimeStamp(0.149486661452);
    msg.setSource(17938U);
    msg.setSourceEntity(238U);
    msg.setDestination(29661U);
    msg.setDestinationEntity(230U);
    msg.text.assign("VGCSGPFWDDMLQXHONBUTHRLYFKVFLZXBHALRCQQAMRMZVOIARPKYMGZBCSZELAJSLZSYVYFMNQAKUWQICAHYS");
    msg.type = 151U;

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
    msg.setTimeStamp(0.360515297611);
    msg.setSource(43021U);
    msg.setSourceEntity(72U);
    msg.setDestination(9804U);
    msg.setDestinationEntity(165U);
    msg.text.assign("TOQQQCGFKXCXJBAZREBHZJOBHHBHJHMDUZOZAUT");
    msg.type = 172U;

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
    msg.setTimeStamp(0.748949052807);
    msg.setSource(44086U);
    msg.setSourceEntity(195U);
    msg.setDestination(7751U);
    msg.setDestinationEntity(3U);
    msg.text.assign("ZFVHMEOKSRDPEMNKAUGQSFSLGZPZONCDECYQRNIUQNFNEATRMJXBNLLJUWSKMOLDGKNRVBRFCKIKGMD");
    msg.type = 18U;

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
    msg.setTimeStamp(0.817111564192);
    msg.setSource(25816U);
    msg.setSourceEntity(73U);
    msg.setDestination(30332U);
    msg.setDestinationEntity(215U);
    msg.parameter = 61U;
    msg.numsamples = 243U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 21338U;
    tmp_msg_0.avg = 0.0210322628596;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.722198678983;
    msg.lon = 0.420526033182;

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
    msg.setTimeStamp(0.00987141720799);
    msg.setSource(64542U);
    msg.setSourceEntity(80U);
    msg.setDestination(60860U);
    msg.setDestinationEntity(73U);
    msg.parameter = 199U;
    msg.numsamples = 166U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 253U;
    tmp_msg_0.avg = 0.444731156375;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.848567436221;
    msg.lon = 0.111863382479;

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
    msg.setTimeStamp(0.74771428664);
    msg.setSource(21646U);
    msg.setSourceEntity(97U);
    msg.setDestination(10335U);
    msg.setDestinationEntity(41U);
    msg.parameter = 13U;
    msg.numsamples = 3U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 35905U;
    tmp_msg_0.avg = 0.118670396734;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.545949608621;
    msg.lon = 0.509448074867;

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
    msg.setTimeStamp(0.238204572379);
    msg.setSource(44797U);
    msg.setSourceEntity(146U);
    msg.setDestination(58973U);
    msg.setDestinationEntity(186U);
    msg.depth = 22093U;
    msg.avg = 0.958171785694;

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
    msg.setTimeStamp(0.745809502284);
    msg.setSource(36446U);
    msg.setSourceEntity(163U);
    msg.setDestination(51322U);
    msg.setDestinationEntity(123U);
    msg.depth = 19237U;
    msg.avg = 0.932242085493;

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
    msg.setTimeStamp(0.851611523236);
    msg.setSource(6374U);
    msg.setSourceEntity(40U);
    msg.setDestination(33731U);
    msg.setDestinationEntity(41U);
    msg.depth = 12348U;
    msg.avg = 0.838045580302;

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
    msg.setTimeStamp(0.204124375035);
    msg.setSource(61618U);
    msg.setSourceEntity(142U);
    msg.setDestination(55747U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.0102568033527);
    msg.setSource(19575U);
    msg.setSourceEntity(202U);
    msg.setDestination(53412U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.83323633647);
    msg.setSource(19567U);
    msg.setSourceEntity(144U);
    msg.setDestination(55279U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.941711930697);
    msg.setSource(54193U);
    msg.setSourceEntity(4U);
    msg.setDestination(56736U);
    msg.setDestinationEntity(210U);
    msg.sys_name.assign("KUBHZAPLOVVELZHWSVSUVYITLCYGYDOHOWZRRAVNNJYARDTKQGBQXXGUEOJUCMVYCBFOHEXDKRHIATQDCVFQXXMMOVWEPSBLSRXCYNJTUDCN");
    msg.sys_type = 32U;
    msg.owner = 34602U;
    msg.lat = 0.0677013912036;
    msg.lon = 0.128744059207;
    msg.height = 0.279312703939;
    msg.services.assign("DVUORHPEHWTRMQGETTJMDNCQRKDURJSBGRBVUZPGKVHDLQBJGZAJUGCQTEMWFUUFMFIULIINYDELGHCAKLDOVATEJNWBDFPKXUYVETFEXOCYQDVHQRZLKKORTQWBPIGWYIYNUSTSZBHOQELHXOAJSFXCGEMOBPSIBDXGSYZFWGJQAKCMZDHWTAPICPJNXILRCLMAYPS");

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
    msg.setTimeStamp(0.838926708253);
    msg.setSource(14031U);
    msg.setSourceEntity(76U);
    msg.setDestination(40713U);
    msg.setDestinationEntity(158U);
    msg.sys_name.assign("AKOOPSVESTERNWFNHELDQLXRNPNBHOIJUDXPGYCPXHGETOXBXEPLJCETGEMKUKDRXQUVYZVKJSLKWZRHZARDJCIIOBUADWUYUJJMJHBQWGMFYFHKGLG");
    msg.sys_type = 170U;
    msg.owner = 55680U;
    msg.lat = 0.234799899295;
    msg.lon = 0.137937697516;
    msg.height = 0.987040313084;
    msg.services.assign("ZVSLIELHHOZEATPPYSRYWBIXCPVKDMECSOEQZKVKERDRNVDGTWWHAYDAGJNSOPGASOUBAKHCFENUORDBIOBUSYSFXPCWLIELIQTQQIFPYFIMTNGAPFCWGMEXFJQBTEGSQHOHCXPYN");

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
    msg.setTimeStamp(0.995466261886);
    msg.setSource(534U);
    msg.setSourceEntity(63U);
    msg.setDestination(40918U);
    msg.setDestinationEntity(74U);
    msg.sys_name.assign("GGDQNZCWAQNLWCFBVMDQNXWZVFRBKXO");
    msg.sys_type = 201U;
    msg.owner = 9550U;
    msg.lat = 0.180540953254;
    msg.lon = 0.982875909801;
    msg.height = 0.501807193457;
    msg.services.assign("TJINNAVJLZFMNLWKGFGZQCFZNWHWRYBLAJWNKDVSVMTWASNVWKDQOTPGTGFEYMVYJTTFRBIQZWOXTJYQWSDLYLEBHKXDYKMDEUEWRNIQPPRNEQLSPCULOUQHIFAVVBECUCDUVCMZUXURCOOSGCXZJTPIVGWHGXSDAKKJNRTSS");

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
    msg.setTimeStamp(0.227573465474);
    msg.setSource(15740U);
    msg.setSourceEntity(111U);
    msg.setDestination(3284U);
    msg.setDestinationEntity(91U);
    msg.service.assign("OYEILRWSNIFEDSRGQOTPJWMDAVVLFPDGMCXLGEVPEULNPURHCAALVCWAJXYVJDCSJMJKPSIZSWFOMIMWZZWUIQLZIENBTEVNHGBQDICVMWAHPZTRWLEVZBO");
    msg.service_type = 75U;

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
    msg.setTimeStamp(0.504888766823);
    msg.setSource(8426U);
    msg.setSourceEntity(66U);
    msg.setDestination(59406U);
    msg.setDestinationEntity(125U);
    msg.service.assign("IIGAVNGZREANMSVHZ");
    msg.service_type = 170U;

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
    msg.setTimeStamp(0.177912868554);
    msg.setSource(58300U);
    msg.setSourceEntity(74U);
    msg.setDestination(42246U);
    msg.setDestinationEntity(231U);
    msg.service.assign("FJBRERXEVMOJAOFXASYMGBXBLPLRYNFDJIMMKOHYNOIIQLXHKKOQCUVYZTCTABUAJZVTZMNOPUZIFHOQVTBDQRTNMCGYDPALGHWWQHBAUGEZIFSIZWNKRTAJXFEKIVMYSXDTNYUEVTNLZFDXSXRQKNMVVEFQJJKWEWPYUUFWPXNWSPYUOETRDCHUBSMLCHWPAALSISRPMGGQCHRDHBLOUKKEHJZCZICSNDGOQKFPBX");
    msg.service_type = 207U;

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
    msg.setTimeStamp(0.443070259248);
    msg.setSource(15285U);
    msg.setSourceEntity(144U);
    msg.setDestination(46117U);
    msg.setDestinationEntity(129U);
    msg.value = 0.490232584038;

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
    msg.setTimeStamp(0.140939057957);
    msg.setSource(43942U);
    msg.setSourceEntity(225U);
    msg.setDestination(2058U);
    msg.setDestinationEntity(100U);
    msg.value = 0.1168405523;

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
    msg.setTimeStamp(0.541755196961);
    msg.setSource(9032U);
    msg.setSourceEntity(105U);
    msg.setDestination(43512U);
    msg.setDestinationEntity(1U);
    msg.value = 0.325006923188;

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
    msg.setTimeStamp(0.200723394867);
    msg.setSource(1280U);
    msg.setSourceEntity(36U);
    msg.setDestination(18387U);
    msg.setDestinationEntity(237U);
    msg.value = 0.320122973433;

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
    msg.setTimeStamp(0.697756485156);
    msg.setSource(61320U);
    msg.setSourceEntity(26U);
    msg.setDestination(34634U);
    msg.setDestinationEntity(47U);
    msg.value = 0.37271763192;

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
    msg.setTimeStamp(0.370515625983);
    msg.setSource(25124U);
    msg.setSourceEntity(65U);
    msg.setDestination(2510U);
    msg.setDestinationEntity(39U);
    msg.value = 0.0353496967894;

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
    msg.setTimeStamp(0.144438823561);
    msg.setSource(39590U);
    msg.setSourceEntity(206U);
    msg.setDestination(14909U);
    msg.setDestinationEntity(171U);
    msg.value = 0.962143008192;

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
    msg.setTimeStamp(0.925960331864);
    msg.setSource(64228U);
    msg.setSourceEntity(137U);
    msg.setDestination(43184U);
    msg.setDestinationEntity(123U);
    msg.value = 0.00584392346202;

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
    msg.setTimeStamp(0.868187028417);
    msg.setSource(40657U);
    msg.setSourceEntity(7U);
    msg.setDestination(6121U);
    msg.setDestinationEntity(212U);
    msg.value = 0.291850047669;

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
    msg.setTimeStamp(0.280366527679);
    msg.setSource(46112U);
    msg.setSourceEntity(241U);
    msg.setDestination(55438U);
    msg.setDestinationEntity(143U);
    msg.number.assign("ANVIDDOHSDW");
    msg.timeout = 29425U;
    msg.contents.assign("DJEFKFXNAHMQWIQDEJEFBOKUSBFOLPIBJJLPPTUJNUTQCABUGENJAHCDEPEKXDMNIZVPSYZXCVRBGGVDRFNQQFGSWUIAALJUKGYUHIYOAZFICBWNCLXNHTRIKOLTWIBXTZMBVYRJRDSUVRFOLCXMMTXVGSWMDPEISVCAKBGQLISGYDXQQEJNHDOOMYQOLPVZCZLRDFNOYLWWABEWYRHVAKMWPCYTAVXSGYZUMKZTKH");

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
    msg.setTimeStamp(0.441815970534);
    msg.setSource(44980U);
    msg.setSourceEntity(116U);
    msg.setDestination(45778U);
    msg.setDestinationEntity(69U);
    msg.number.assign("MVFWVRTONJRKZFSRBWLCQJVLMKNARXZIDGKJAJZGYAIMGRECUCLWL");
    msg.timeout = 13831U;
    msg.contents.assign("MNHYTLNPYXPJCQDTEQDHSKTZNEKFRIJECWU");

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
    msg.setTimeStamp(0.482345475505);
    msg.setSource(65387U);
    msg.setSourceEntity(46U);
    msg.setDestination(28701U);
    msg.setDestinationEntity(11U);
    msg.number.assign("YHLBZSMOLVMVZYQEHQBEGEBBRPDJNNPMBVXLBJFSCVIWDIGQQZGNFGPOAVHKVMKNISYJGRUQHUAPDLUIORQCIXEVWEOUWCTAGXSYOLTSSPTEIBPTEETATTYLTHNDKFYQZCXTRMYYZSXCHMFGAWU");
    msg.timeout = 9015U;
    msg.contents.assign("PBPZTZKMCXLENTXXCRYDRICIWQBGKSEHLSUCVZSZDANAZXAIXWZKEULSPKXVSHOQCLWAMAJBBEOUIWVPEZPCVFDGHOJFLOGMLUWYTGKUWEZQJJMPEHHGJVLYOKPIMPMIFTRFJHUIFQVNVJAHQSRDTVQLTBCDGYLXKVMYBOBQZNXJUCDUDQ");

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
    msg.setTimeStamp(0.729969656057);
    msg.setSource(25672U);
    msg.setSourceEntity(173U);
    msg.setDestination(46390U);
    msg.setDestinationEntity(235U);
    msg.seq = 2900107340U;
    msg.destination.assign("ABNKUUXODBZNZVWQJNIGRRXHOXDEGSWEDZQRYIEUDCGFXTCYNCT");
    msg.timeout = 56848U;
    const char tmp_msg_0[] = {42, 63, -17, -54, -29, 72, 60, -60, 66, 5, -121, 78, 124, -13, -128, -75, 93, 1, -30, -88, -85, 114, -32, -57, 77, -8, -28, 60, -128, -123, 78, 66, -104, -63, -72, -96, -5, -114, 73, -4, -56, -7, -100, 109, -20, -61, -58, 108, -2, 22, 21, -122, 71, -54, -48, -77, 83, -61, 67, -48, -60, -108, -73, 51, 83, -64, 111, -23, -58, 62, 74, -35, -57, 81, 21, 42, 74, 16, -57, -99, -73, -55, 69, 97, -124, -79, -22, -11, 14, 5, -37, -38, 40, 105, -66, -76, -2, 9, 113, 17, -93, -112, -113, 79, 8, -90, -127, 86, 104, 31, -104, 0, -15, 29, 26, 1, -52, 112, -95, -125, 67, -106, -14, 5, -63, 101, 31, -109, 86, -98, 28, -54, -21, 98, -103, 4, 16, -39, -75, 107, -55, -126, -98, 94, 19, 13, 110, -9, -18, -43, 2, -87, 93, 11, 88, 66, 22, 7, 5, 100, 73, -67, 81, -85, -22, -126, 43, 95, 19, 107, -66, -56, 72, 6, -12, -12, -23, 12, 4, 95, 93, -35, -13, -5, -64, -61, -81, -120, 41, 23, 94, 58, -44, -99, 56, 108, 12, 106, 120, -9, -120, -10, -103, -24, -25, 98, 38, -98, 44, 42, -48, -65, -79, -104, 15, 6, 24, 52, -78, 60, 100, -68, -35, 29, 21, -118, 4};
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
    msg.setTimeStamp(0.0548276517045);
    msg.setSource(4833U);
    msg.setSourceEntity(233U);
    msg.setDestination(906U);
    msg.setDestinationEntity(96U);
    msg.seq = 1427312424U;
    msg.destination.assign("PEQZJHIEIJBVWKNXABTRVAHQFYCOQOVLKBMWORVFXNSGNGUZKNLKANJLWECWWTZUHGXCQETJCRKFSQULSZDGPVTMHFXOMDFBSYKRAMNWOTIIYBRSYPCHCNEAFTAOPKOYBHYUJJBCQJIZNRSFOKGFDVOHDDVSSWIJCBGZUINAQRAGQSJLCZLORITVUEPLLPKDTHYDYLUXDJPRGGPTMDPXBUQWADEXBHEELIUMVSEKWXWFZMCXRZPNZYHGMQTFMV");
    msg.timeout = 11822U;
    const char tmp_msg_0[] = {-52, -2, 47, -19, 49, -65, 94, 107, -84, 38, -83, -92, -36, -38, 108, 51, 42, -20, 45, 96, 86, -87, -35, 40, 30, -33, -115, 103, 5, 51, 3, 48, -95, 17, -93, 66, -86, 30, 106, 56, 80, 44, 8, -23, -105, 79, -116, 47, 114, 121, 57, -118, -88, -91, -88, -126, 47, 72, -41, 26, 100, -18, 118, 59, 110, -112, -19, 72, -41, -52, -53, 37, 83, -56, -46, 68, -82, 24, -121, 6, -22, 25, -94, 16, 124, -63, 52, -98, 70, 90, 80, 39, 36, -108, -114, -14, -22, 125, 28, 56, 30, -97, -113, -30, 123, 39, -18, 29, 87, 39, 118, -30, 65, 116, -104, -83, 109, 44, -25, 92, 49, -36, -95, 117, 5, 120, 38, -22, 117, -14, 122, 73, -22, 9, 61, -12, 21, 122, -42, 12, -84, -15, -52, 0, 125, 58, 19, 125, -26, -6, 19, 72, 109, 115, 38, 89, -96, -29, -109, -74, -4, 48, 2, -107, -48, -25, 8, -69, -22, -31, -116, 122, 23, -54, 25, -30, -121, -123, -24, 86, -68, 53, 21, -40, 42, 68, -43, -47, -85, -96, -36, 60, 21, -119, 107, 107, 25, -128, -50, -106, 81, -42, 65, 34, -5, -46, -79, -108, 124, -65, -10, -16, -87, -125, 5, -49, 64, 126, 10, -111, -34, -89, -19, -77, 55, -107, 20, 61, -64, -108, -53, 51, -100, 123, 69, 41, 34, -64, -10, 36, -9, 0, 118, 18, 76, -97, 50, -92, 76};
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
    msg.setTimeStamp(0.780300361396);
    msg.setSource(51291U);
    msg.setSourceEntity(253U);
    msg.setDestination(38121U);
    msg.setDestinationEntity(170U);
    msg.seq = 3685394824U;
    msg.destination.assign("BFGOAFGFCKPEQBJSMHUOUYIYHYICPNOXTBISDBBYLQJLTDCQBEGMTVFLBDYAEPLJXGZQDJZKZAXSFRZSNRFVOTYKNVOPRVUNLACORI");
    msg.timeout = 35848U;
    const char tmp_msg_0[] = {-7, -105, 56, 12, -87, -97, 93, 102, -105, -10, 7, -108, 83, -68, 0, 101, -94, 13, 23, -35, 35, 75, 122, 96, -62, 17, -46, -126, 30, 77, 35, 34, -7, 112, 81, 81, 86, -109, 5, -87, 116, 23, -40, 7, -34, 109, -43, 83, 8, -22, -102, 68, -29, -72, -26, 1, 116, 39, 95, 5, -10, -99, 23, -55, -89, 71, -110, -7, -33, -71, -83, -37, -26, -118, -68, -127, -93, -42, -24, 23, 112, -70, 123, -38, -53, 64, -71, -25, 41, -124, -114, -13, -65, 3, -81, 58, -90, -10, 121, 55, 93, -61, 39, -57, -3, -94, 42, 22, 88, 17, -116, 80, -8, -33, 68, 4, 91, -49, -43};
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
    msg.setTimeStamp(0.139343324732);
    msg.setSource(52235U);
    msg.setSourceEntity(8U);
    msg.setDestination(6242U);
    msg.setDestinationEntity(117U);
    msg.source.assign("FWATLKNPVIJQOOSVEVHMFMOZQKPCKRUCMMYGSENJLGCIDMGLUAWYWXXYQOHSQBXMVWCRVJKTGGKZYBFAIEZLFXTNSXEZRTRVDUTWZLJBCOKFSDPDSAFPJDYNXAXKZDBRQCTVCQQHWPAKPEMTVLIXTHUCFYUNWGEP");
    const char tmp_msg_0[] = {16, -128, 77, 59, -61, 91, 117, 67, 88, -2, -24, 57, -94, -81, -49, -78, -85, -61, 77, 116, -51, -47, -106, 43, -6, 41, 13, 120, -28, -124, -1, -70, -51, 103, -22, 83, -126, -18, 21, -72, -119, 49, -126, 58, -59, 92, 40, 86, -58, -121, 58, -30, 109, 43, -45, 19, -98, -114, -86, -109, 67, 58, -95, -4, -62, -86, 66, -80, -32, -3, 72, -4, 67, -76, 28, 10, -119, -34, -107, 126, -64, -89, -48, 39, -12, 96, 91, -61, -68, -118, 63, -41, 29, -127, 51, 107, -121, 70, 108, -77, -96, -36, -124, -35, -77, 35, -101, 77, -26, -84, 66, 108, 38, -103, -2, 59, -91, -103, 18, -45, -85, 86, 59, 113, -127, 119, -46, 30, 36, 79, 94, 46, -81, 13, 61, 122, -39, -24, -103, -57, 91, -50, 26, 52, 23, -68, -17, -31, 45, 122, -5, -12, 123, 69, -25, 104, -48, 68, 95, -46, -53, 12, -121, -120, 2, -69, -112, 39, -63, 43, 72, 29, -47, -33, 23, 41, 95, 65, 52, -87, -125, -97, 124, -103, -40, 70, 41, 4, 79, 26, -33, 118, 56, -13, 40, -38, 96, 113, 41, -74, 120, 104, -83, -45, 12, 24, -61, -16, -44, -84, 101, 123, 88, 56, -83, -117, 102, -75, 100, 74, -18, -8, -40, 9, 55, 88, 59, -66, 0, 56, 98, 99, 31, 63, -23, 5, -89, 84, -46, -72, 12, -74, 108, 27, 17, -29, 40, -91, 45};
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
    msg.setTimeStamp(0.215765691637);
    msg.setSource(40168U);
    msg.setSourceEntity(204U);
    msg.setDestination(7561U);
    msg.setDestinationEntity(208U);
    msg.source.assign("AFDILRPCHXCRHAPESONWYWTTUQCCPZMILB");
    const char tmp_msg_0[] = {-106, -82, 10, 103, 122, -104, 72, -95, 110, 9, 39, 11, 68, -92, 46};
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
    msg.setTimeStamp(0.816505433286);
    msg.setSource(47824U);
    msg.setSourceEntity(245U);
    msg.setDestination(50635U);
    msg.setDestinationEntity(20U);
    msg.source.assign("DVEMXJXVSAWCHEIICFHGDTPSLCLAASOJFRGQXDJPNKFHFJFBNHKCQRJZUOSUFXAXPYYRNKAPZTYYFMWGAQUJELAAOHAVDXWMORXFOWZIRELOUUCMSJBOQKZGQYKQYRXBTDCTTCOVVJOEURHZBSTM");
    const char tmp_msg_0[] = {-1, 96, 65, 25, 123, -47, 61, -126, 30, 65, 3, -109, 38, 94, -8, 81, -110, -124, -105, 92, 86, -79, 92, -23, -21, 126, 63, -100, 31, -100, -22, 14, 85, -4, 125, 86, 42, 54, 63, 44, -42, 38, 59, 62, -115, -15, -97, -69, 60, 8, 7, 111, 54, -34, 109, 122, 57, -35, 69, -28, -15, -72, -56, 98, -30, 65, 77, -23, 120, 99, 6, 17, 98, 100, -108, -93, 83, -13, 55, -1, 65, 30, -103, 115, -58, -103, 98, -61, 36, 69, -113, 108, 105, 15, -126, 70, -63, -70, -106, -74, 122, -8, 103, 126, 64, -126, 21, 31, 126, -62, 81, 40, -60, -75, -35, -51, -124, -115, -41, -6, 4, 10, 72, 33, -43, 19, -40, -42, -118, 0, 36, -43, -122, 2, 70, -36, 110, -44, 75, 78, 120, -44, 108, 0, -49, 4, 25, 63, -112, -6, -77, -104, 8, 19, -124, -64, -14, 73, 124, -12, -107, 125, 100, 118, 3, -68, -51, 111, 82, -55, 34, 93, -56, -74, 1, 37, -46, 62, -58, 3, -127, -107, 40, -118, -98, -11, -48, -104, -17, 66, -13, 61, -5, -18, 73, -105, -49};
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
    msg.setTimeStamp(0.244516084678);
    msg.setSource(19016U);
    msg.setSourceEntity(97U);
    msg.setDestination(1133U);
    msg.setDestinationEntity(202U);
    msg.seq = 4252737449U;
    msg.state = 186U;
    msg.error.assign("XOFRYWWZHIUFRXDYLCHLLNNLPZHRRDXBQMOCZNZBACYDQXEDMVSREVKQTKNVWHDIFLWNELBWXQEHSUINFTSNYTBWKLEDQIVVSREMOJVDKIAFSIJIXCEIUPASLKOEICBRYYUZLCPJHXCTJGOHVJPMSADFOQJGDUMBWXJBEQVUGNMJYOHFTDUPGJWPXLPFSOZUVAZRSTMVUZFBCEIWYGOKGSGGJPCXPHGHABAAZNTWRKAQMAYZTRUFTQMPGMBQ");

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
    msg.setTimeStamp(0.483463758003);
    msg.setSource(13410U);
    msg.setSourceEntity(73U);
    msg.setDestination(21689U);
    msg.setDestinationEntity(152U);
    msg.seq = 4177130488U;
    msg.state = 89U;
    msg.error.assign("PTUAMFFCRLMKXVZUVHEVDGSFYEFYEUZDBTJJTXMRZP");

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
    msg.setTimeStamp(0.219143108656);
    msg.setSource(11497U);
    msg.setSourceEntity(54U);
    msg.setDestination(41080U);
    msg.setDestinationEntity(11U);
    msg.seq = 2283098763U;
    msg.state = 72U;
    msg.error.assign("CBDVNGOQMOMUFZCWBUPRXMZNNABTWAZFAJNMMUWYVSRGKLBPMYTVXOGQZJ");

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
    msg.setTimeStamp(0.559970141044);
    msg.setSource(13257U);
    msg.setSourceEntity(35U);
    msg.setDestination(2464U);
    msg.setDestinationEntity(13U);
    msg.origin.assign("KEVYHIRIXZNNSGGFNCKQLHFBGMEMSVUDUXMQHWAOWGQRDWWUADCIZYOPPKUUMQXNYRYTMVKMNTSZMOTKEJDFDKGWSERJJOTTAERDRNT");
    msg.text.assign("KNVSPKNWXBDE");

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
    msg.setTimeStamp(0.776861803735);
    msg.setSource(37024U);
    msg.setSourceEntity(80U);
    msg.setDestination(59886U);
    msg.setDestinationEntity(217U);
    msg.origin.assign("TFPZTTLJRUTRXTIKYGESRHJHVYDOAKXNOMSHCDTZIKWDFQLKOEEQQQHGCIYOGJPSJXORAZHANQNCRRBFIFHCKWBHWXMSOJOVGXPEDQPFGIBKSOCVONBQYADFMTLNJJEALLTQWXPWZDULJEYHDDFDCKLYVIJZZNQBYXKWELCKIRFRDUYBMLGRUGBYXMZUAPSMXFWVGVLSYHIFMAJHWAZMZ");
    msg.text.assign("GWIQJPQZETASLOYZBHZNUWWIEIBHUBEKYONBOJULWEXYHQVREXFCCMVFNMTGUKINBDGIHXACJCZOJLUNSZWPJOARSLDLRDSEKBSYUXBZZJQDCMNPMPCGREYGVHBCUIADTKRHTMBIDTRARVWPNYLPLPWODWONFBUDGHSUQLXFYMCLJVSYDOZENQOJR");

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
    msg.setTimeStamp(0.032799105286);
    msg.setSource(62477U);
    msg.setSourceEntity(149U);
    msg.setDestination(28136U);
    msg.setDestinationEntity(141U);
    msg.origin.assign("RZFMREAHLOHQPAWAKHFEQDINAKBKHPZMYWLKYXSOINNVUGGJJIWYZJYCZTBYZTFFXFPVWIHWEBYQJPLGDCJSFXTAIBOMZYZPSVZXMCDTDVHPRSTZJBNGNXKUUHXUIELFCRIMGKRQGNUKLCTCULLFSOAXOUOAJRVSXBSRABPXNNACKGVLV");
    msg.text.assign("FKDDNLJUZEJRETCHFDBJSGCIPEJVZHOGBHHKWLHHADUCYLAAJHKIKQXYEMOZZXUXQFRWPCOOXTBHPQKAYMXVFIZJVG");

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
    msg.setTimeStamp(0.436287212068);
    msg.setSource(52286U);
    msg.setSourceEntity(224U);
    msg.setDestination(61168U);
    msg.setDestinationEntity(243U);
    msg.origin.assign("XCIWWMZLJRUCFASWEWKRXQXBKVOXMJCYTUZBKIAJPFBDHLTYJTPVABIVCSQELKZKSNUGGOLPRPPJMINQKGBSNTLPAFBPNRYTLZYYAUSDSYXZOELPSEMQKNRCJVWQXETOAMGIWFVWEERGZGYMNXTBPXG");
    msg.htime = 0.139665301337;
    msg.lat = 0.798453388443;
    msg.lon = 0.56737902474;
    const char tmp_msg_0[] = {-21, -34, 117, 83, -14, -69, 79, 80, 50, -105, -99, 16, -23, -45, -18, -42, -34, -75, 4, 39, 52, 63, -74, -40, -47, -68, 77, -24, -116, -75, 107, -60, 86, 1, 36, -112, 56, -51, -110, -90, -93, 26, 66, 86, 34, -123, -40, 16, 108, 13, -5, -79, -68, -87, 2, 15, -76, 56, 60, -109, 22, 31, 120, -108, 35, 122, 23, 106, 69, 65, 84, -128, 11, -47, 51, 69, -50, 126, -120, -27, -1, -7, 43, -115, -118, 17, -83, -92, 17, -78, 30, 77, 101, -115, 40, 72, -82, -42, 30, -47, -69, 24, 109, 33, -27, -4, 0, 77, 31, 57, -126, -103, 17, -113, -26, -118, 14, -83, 126, -15, -61, 55, -110, -77, 6, -80, 70, 62, 10, -28, -94, 117, 55, 119, 59, -107, -107, 33, -5, 8, -50, -17, 109, 106, 106, 24, 64, 119, 53, -28, -34, -18, 66, 17, 123, 84, -26, -22, 103, 4, 45, -18, 68, 1, 58, -62, -21, 60, 108, 87, -77, 75, -116, 13, -112, -77, -9, -98, -49, -76, 56, 75, 75, 111, -40, -121, 51, 54, -99, -49, -126, -90, 16, -11, 108, 103, -85, 8, 122, -86, 84, -40, -91, 79, -29, 46, -122, 52};
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
    msg.setTimeStamp(0.629965548663);
    msg.setSource(47604U);
    msg.setSourceEntity(29U);
    msg.setDestination(11341U);
    msg.setDestinationEntity(184U);
    msg.origin.assign("TMOXEFEUYICESASJECJJXQGLZZTZHDPRODNNBLMRTLTDUBZSMQZPVKZOXNHNUPOHOLLYBWBKYNHEGBVDKZBAZWVSPNJSYXDSEHQAEGCKGVCVPFIINFKPVJLLIWUBUYEDHO");
    msg.htime = 0.0489989092318;
    msg.lat = 0.549720830077;
    msg.lon = 0.639177323402;
    const char tmp_msg_0[] = {33, -8, 65, -14, 30, -25, -72, -76, 83, -5, -70, 63, 106, -1, -111, 53, 31, -108, -21, -69, 66, 14, 66, -12, -98, -52, 17, 58, 58, -70, -56, -88, -89, 70, -88, 47, -120};
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
    msg.setTimeStamp(0.801908046214);
    msg.setSource(51278U);
    msg.setSourceEntity(94U);
    msg.setDestination(21144U);
    msg.setDestinationEntity(75U);
    msg.origin.assign("IPAWOPMLROYLUTCUPBIQRAWGUDXNODLNCYRQTKCASYNZCQXUJXYWQFAABVMOPIIEMKARNEQUXDOLJDMJFSMFEXLZIWLPBYCLEGOZMHCQDISWCFLTPSVACOTDQZIRNJMTOKNLPHLIZIHVBSBZWVHXHKJBGTHKVWZUGUHWQAXWJPKF");
    msg.htime = 0.728014518744;
    msg.lat = 0.83779849785;
    msg.lon = 0.824819384053;
    const char tmp_msg_0[] = {-36, 81, 1, 7, 124, 64, 120, -127, 119, 38, -18, -58, 49, -56, -62, -96, -113, -7, 39, -49, -113, -55, 77, -82, 12, 70, -28, 8, 32, -46, -71, -113, 116, -97, -120, -41, 29, -49, 60, -118, 58, 65, 45, 61, -32, -58, 63, 116, -128, -78, -38, -39, -91, -57, 116, 59, -63, -22, -54, 83, -65, 89, 115, 113, -21, 63, -117, 30, -9, 119, -127, -7, -87, -82, -17, -126, 119, 104, 81, 106, 43, 2, 75, 5, -30, -30, 82, 43, -26, -35, -16, -128, 16, 63, 28, -82, -12, -23, -14, 54, -6, -43, 119, 102, -87, 35, 51, 5, -1, -82, 48, -96, -14, 78, 27, -106, 92, -10, -38, 78, -111, 121, -4, 112, -1, 35, -25, -81, -3, -76, -79, -42, 74, 31, -85, 121, 78, -105, 122, -11, 73, -26, 76, 30, -10, -12, 96, 109, 54, 44, -74, -102, -64, 34, -3, 120, 4, -32, -29, 9, -66, 8, 94, 100, 68, -11, 27, 64, -84, 99, -25, -27, 126, 59, 90, 120, -13, -76, 111, 94, 62, -47, -81, 110, -2, 64, -27, 121, -120, -95, 40, 59, -117, -118, 49, 54, 81, 29, -56, 51, -21, 19, -41, 117, -52};
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
    msg.setTimeStamp(0.0907028095234);
    msg.setSource(44219U);
    msg.setSourceEntity(108U);
    msg.setDestination(30703U);
    msg.setDestinationEntity(20U);
    msg.req_id = 48691U;
    msg.ttl = 5138U;
    msg.destination.assign("ZAQIMAJMSPONTNJHQDSORWCNVVEVLJVSKBBGMRCDAMRWLXJOUYWRAHSSZUAIC");
    const char tmp_msg_0[] = {55, 1, 119, -86, 123, 64, -25, -79, -99, -93, -33, 38, -115, 27, -51, -36, -54, -55, -112, -23, -80, -60, 47, 65, -7, -35, 63, 29, -104, -78, 29, 65, 84, -60, -127, -91, -27, 108, 101, -76, -32, 38, -56, -18, -28, 99, -109, 13, 42, -5, 61, -34, 99, -60, 92, -48, 2, 54, -43, 86, 122, -93, -28, 71, 5, -61, -84, 63, 27, 23, -13, -82, -42, 90, 112, -21, 109, 19, 3, -114, -83, -111, -17, -82, 49, 125, 3, 33, -52, 4, 62, 92, 16, -88, -37, -36, -96, 111, 11, 109, 88, -15, 73, 106, 116, -6, -20, 92, 84, -83, 112, 24, 86, 105, 7, 70, -70, 22, -61, -94, -114, -66, 39, 46, -24, -115, -95, -84, 36, 71, -49, 36, 61, 113, -66, 64, 61, 78, 63, 86, 109, 106, 55, -46, 64, 10, 3, -30, -69, 43, 75, 90, -53, 64, -29, 68, -101, 88, -37, -89, 110, -106, -14, 85, -8, 74, -38, 113, 89, 40, -7, 29, 0, 84, 48, -1, -52, 51, 78, 78, 124, -31, -122, 103, -76, -118, -7, -26, -7, 75, 44, 94, 120, -96, -78, -59, -44, -90, -3, 106, 29, -31, -83, -112, 10, 96, -127, 59, -92, -1, 126, 72, -99, -43, 118, 13, 38, -68, -81, -112, -82, -47, 9, 80, -67, -86, 12, -30, 22, 25, -3, -94, -57, 36, 31, -46, -61, -14, -123, -120, -29, -12, -70, -80, -10, -119};
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
    msg.setTimeStamp(0.0457566540859);
    msg.setSource(48389U);
    msg.setSourceEntity(5U);
    msg.setDestination(47643U);
    msg.setDestinationEntity(171U);
    msg.req_id = 3045U;
    msg.ttl = 31698U;
    msg.destination.assign("ISMXNWFUZFOFUYXEFFAGDEGHURBHCLAMXAKIQESLVVOQFDOSVOEKUQYAAJZNCFQKBMPBWNSIMIDZNDWYEJGDTTQQQJPHKBJEBKRQSRKKFVWLDPVXHVTUBVZNTMHJYCWIBSXYBRPBM");
    const char tmp_msg_0[] = {-12, 55, -101, 125, -43, -93, 48, 30, 104, -127, -32, 82, -56, 91, -20, 15, -124, 71, 77, 99, -18, -50, -107, -101, 102, -51, 117, 71, -85, -117, 9, 93, 46, -31, -79, -90, -115, -31, -40, -34, 2, -15, 34, 92, -112, -79, -67, -17, -91, -75, -42, 19, -43, 93, 55, 18, -75, -20, -51, -37, -73, 52, -123, 11, -88, -98, -26, 79, -8, 38, -42, -110, 21, -18, 73, -113, -112, 76, -12, 105, -65, 98, 96, 38, 90, -107, -109, 65, -24, -5, -62, -46, 103, 93, -44, 48, 76, 2, -110, 29, 76, 94, -36, 108, -84, 20, 47, -59, 77, -18, -105, -5, 95, 14, 100, -79, 93, -6, -5, 33, 88, -19, 34, 51, 14, 107, -59, -75, -105, -21, 12, -107, -18, -109, 76, 55, -103, -69, 116, -37, 1, 23, 74, 35, -50, 90, 117, -111, 58, -83, 11, 30, 105, 110, 86, -98, -109, 84, 118, 72, 82, -116, 87, -62, -31, -2, 23, 53, 12, -41, 36, -29, 0, 36, -113, -21, -37, -84, -6, 117, 27, 6, 76, -96, 39, 38, -3, -71, -76, 63, -59, -108, -117, -54, 0, 98, 108, 47, 56, -62, 36, 107, -122, 61, -85, -39, -111, 29, -36, 30, -87, 90, 109, -57, 47, 52, 53, -11, 53, -7, 84, 94, 83, -103, -59, -84, -59, 28, 84, 24, 0, -101, -110, -118, 95, -46};
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
    msg.setTimeStamp(0.716746802526);
    msg.setSource(55823U);
    msg.setSourceEntity(146U);
    msg.setDestination(39961U);
    msg.setDestinationEntity(235U);
    msg.req_id = 51652U;
    msg.ttl = 9533U;
    msg.destination.assign("MUBWGONDDCNTBEATVTYRZILUCJPPWZQFREKUZVAQQUZBMVATQZQBHPSYPELWLGLRJZRUBKGNDRHPVYAZKRTCIUN");
    const char tmp_msg_0[] = {-27, 22, -20, 63, 65, -65, 70, -89, -93, 26, -76, 32};
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
    msg.setTimeStamp(0.69778843204);
    msg.setSource(11609U);
    msg.setSourceEntity(60U);
    msg.setDestination(40911U);
    msg.setDestinationEntity(14U);
    msg.req_id = 15459U;
    msg.status = 85U;
    msg.text.assign("EMBLAQHAXPKHFJONLPFFTLBUXQIHEISQPCOITQYLRXPBVTNWKVTPYMVNBKAJCQWIGGZUDOSHHVXPWCZDAMUDLNRUVLDZWCPFEMGFMRICAZBJBIAGYQLORZWWKNKGTTWYKSVQRDECEYYLDPNGWIMVWJRUSYTESHVKFRCGOUXGSMTSMHAUEPZUEQQNJBPVVJFBDGZHIUOOFIANRWYZCS");

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
    msg.setTimeStamp(0.920857429496);
    msg.setSource(16637U);
    msg.setSourceEntity(34U);
    msg.setDestination(1015U);
    msg.setDestinationEntity(189U);
    msg.req_id = 22633U;
    msg.status = 207U;
    msg.text.assign("YLKNLGGKIZVTLWRUTVRRVIYNUGWEMBNZFTPWACEQJONXZWGDQKCBORFGQXITDMRYDQWZYYIFUNAFJQVMLEFZAVPUUYBVIOREQFFBWA");

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
    msg.setTimeStamp(0.165800932074);
    msg.setSource(46127U);
    msg.setSourceEntity(248U);
    msg.setDestination(42116U);
    msg.setDestinationEntity(55U);
    msg.req_id = 24643U;
    msg.status = 136U;
    msg.text.assign("NPUZWPQEOSRAMKIKMLDAZHMDEGADBXNJJHVOXZULWIJCIPYNANMVICNBYBUFUZLPCPUBVRRBSBZODWUVXXFVTMLAZSAKAS");

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
    msg.setTimeStamp(0.416202057562);
    msg.setSource(30085U);
    msg.setSourceEntity(110U);
    msg.setDestination(14513U);
    msg.setDestinationEntity(135U);
    msg.group_name.assign("SVQJFRRMLGAAGKWKZGFXHTKZTIIAJUIBXZIXSEFVYHDEJKECSZKPXOWVUEJWMMSDRSLQDHTIKTJIZQNJJVEBUKLVAQBPPQQVIUTOCTMXDORRWYWZVYPZCUGJOUEGZYMECNNECPPWDF");
    msg.links = 4293337984U;

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
    msg.setTimeStamp(0.332027442298);
    msg.setSource(22292U);
    msg.setSourceEntity(120U);
    msg.setDestination(51335U);
    msg.setDestinationEntity(240U);
    msg.group_name.assign("XQQUDAWFJWDBGCXETTFPTRDSHAIEHMKRUNTAENENOBOQGNYUTLVXVCWIYQQTLRWXOFPNULHVMEPHFRIWXMKLQBKODPLSDMFHKHYRZKDAAZFUOJNTBQJWCSTEPYSBGRMZZXYHMAJKGIVPAATEWBZJCUDNHVQRVR");
    msg.links = 3348246493U;

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
    msg.setTimeStamp(0.709175878308);
    msg.setSource(52492U);
    msg.setSourceEntity(160U);
    msg.setDestination(22379U);
    msg.setDestinationEntity(98U);
    msg.group_name.assign("DEZKWGHZTPGMVRQEBNAMANNLDXCNCJERXADHCKJFUWGWNTUKVPERGRWPWTXDSIONSCBCPOIKTCJWHYTVBIRZYTBUIORLOFBSUMWQYVNMUBXLALFDGZLAELSFDGGMWYHVTRYMFKEQSXAOEQUUXXKSQTBFMYV");
    msg.links = 4051225080U;

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
    msg.setTimeStamp(0.364144858764);
    msg.setSource(56239U);
    msg.setSourceEntity(141U);
    msg.setDestination(48189U);
    msg.setDestinationEntity(18U);
    msg.groupname.assign("TTUTPPWWMWHGXDXQUMDAIVZDHGXULSFYJEZSOEBYVNRYLSFLPSUWMLJNKTRQPXCQLWQQGEQNHRHWOLJSKBMECPDF");
    msg.action = 180U;
    msg.grouplist.assign("FBZIZGWSGDZQEALSBFNHCUROUDUQENVHRJTETIDUMHZZANHTQFYWLRSTZXYXJBGMSUORIQXLAYITSVJSKEHPWPFJMWBIBOXHONOTMPCGKILRDWAPVUAEVWPLLXJRKKYWPJXZKUDPGRFLICKGFLCDDVNFCM");

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
    msg.setTimeStamp(0.122829997488);
    msg.setSource(56857U);
    msg.setSourceEntity(104U);
    msg.setDestination(54359U);
    msg.setDestinationEntity(176U);
    msg.groupname.assign("JPPYKVAMXIVWTQRKTXHTSLUUEBCM");
    msg.action = 63U;
    msg.grouplist.assign("YEGHVFNWTEPRDCQEAVJIEPRJOULFMTKXJLJMTNYYUOAACAFGNLROAVRKENFKXDJOGIPAQIZFTTMLMNGBXWQLRRNNRKBQESBXVQZPAPXLBGY");

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
    msg.setTimeStamp(0.247750249268);
    msg.setSource(19897U);
    msg.setSourceEntity(210U);
    msg.setDestination(60836U);
    msg.setDestinationEntity(78U);
    msg.groupname.assign("SGQHZZWRPZBUZKPLZPIHOOSCGJPDEUJNIJMCQMPIHESIVBLCKRSAYYGNAJACWGWQTQIRVWXNQETVJEBITFGXTBHORZWZVDFTLDNWPTBRJRHUORYL");
    msg.action = 140U;
    msg.grouplist.assign("VCDWJIJSKXGDDNQTQTARBZUDFZOMNEEBNIGVGLCPYEBAWFEQPEGHVBZJSDNYHRKODDURINMULSUYNDXNWAOFPQWKIJNRZBWVPK");

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
    msg.setTimeStamp(0.0455404347469);
    msg.setSource(17174U);
    msg.setSourceEntity(36U);
    msg.setDestination(22609U);
    msg.setDestinationEntity(196U);
    msg.value = 0.299606090703;
    msg.sys_src = 14491U;

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
    msg.setTimeStamp(0.117080895717);
    msg.setSource(60723U);
    msg.setSourceEntity(243U);
    msg.setDestination(16353U);
    msg.setDestinationEntity(210U);
    msg.value = 0.320295114249;
    msg.sys_src = 52010U;

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
    msg.setTimeStamp(0.15983068855);
    msg.setSource(21261U);
    msg.setSourceEntity(232U);
    msg.setDestination(3607U);
    msg.setDestinationEntity(136U);
    msg.value = 0.133224893095;
    msg.sys_src = 57221U;

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
    msg.setTimeStamp(0.55569013723);
    msg.setSource(42242U);
    msg.setSourceEntity(129U);
    msg.setDestination(32318U);
    msg.setDestinationEntity(102U);
    msg.value = 0.762749444195;
    msg.units = 34U;

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
    msg.setTimeStamp(0.854360860916);
    msg.setSource(38716U);
    msg.setSourceEntity(91U);
    msg.setDestination(19212U);
    msg.setDestinationEntity(109U);
    msg.value = 0.0764306985215;
    msg.units = 114U;

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
    msg.setTimeStamp(0.0517888427316);
    msg.setSource(40765U);
    msg.setSourceEntity(78U);
    msg.setDestination(51514U);
    msg.setDestinationEntity(141U);
    msg.value = 0.0424896940143;
    msg.units = 78U;

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
    msg.setTimeStamp(0.134824466406);
    msg.setSource(26391U);
    msg.setSourceEntity(181U);
    msg.setDestination(55741U);
    msg.setDestinationEntity(214U);
    msg.base_lat = 0.920970246391;
    msg.base_lon = 0.267925304356;
    msg.base_time = 0.345725186163;

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
    msg.setTimeStamp(0.571715640831);
    msg.setSource(19096U);
    msg.setSourceEntity(161U);
    msg.setDestination(59492U);
    msg.setDestinationEntity(232U);
    msg.base_lat = 0.796785580035;
    msg.base_lon = 0.170861368779;
    msg.base_time = 0.965672273175;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 46174U;
    tmp_msg_0.priority = 46;
    tmp_msg_0.x = 12630;
    tmp_msg_0.y = 29156;
    tmp_msg_0.z = 28622;
    tmp_msg_0.t = 31023;
    IMC::CommSystemsQuery tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 1U;
    tmp_tmp_msg_0_0.comm_interface = 22551U;
    tmp_tmp_msg_0_0.model = 60699U;
    tmp_tmp_msg_0_0.list.assign("ZCZFGSBGZRZVXRMJURUYOMKTKYATMVINZHDHDZBOWZVXAPPBLNHZRGPKOMYTSNDJKZVDFCIYPBNAORWLCQWHESTFXPUQUUNDAUDTBGPNOVYNSKKQEOLQXACJYELQIYJMGABNKBWVUPJXPSYAOIZYIPUDQSOWUVSYQTXERGQIECBCEOCHHDAXFJJBMVTRIGJWDCLLPDGMFQCLWKE");
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
    msg.setTimeStamp(0.199914683321);
    msg.setSource(38663U);
    msg.setSourceEntity(67U);
    msg.setDestination(21193U);
    msg.setDestinationEntity(243U);
    msg.base_lat = 0.472157657161;
    msg.base_lon = 0.0080405708501;
    msg.base_time = 0.832020059234;

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
    msg.setTimeStamp(0.184506446263);
    msg.setSource(46298U);
    msg.setSourceEntity(233U);
    msg.setDestination(57291U);
    msg.setDestinationEntity(187U);
    msg.base_lat = 0.930364352148;
    msg.base_lon = 0.0114159337222;
    msg.base_time = 0.483975802631;
    const char tmp_msg_0[] = {22, 111, 16, -64, -87, 121, 105, 107, -95, 73, -55, 89, -57, 109, -98, -73, 79, 126, -93, -17, 92, -24, -37, -128, 19, 106, -41, 90, 47, 13, -4, 54, 71, -69, 92, 76, -125, -85, -88, 94, 7, -88, 4, 57, -73, -68, -37, -48, 125, 108, 0, 26, 35, -41, -95, 25, 44, -4, -124, -46, -71, 108, -18, -122, 5, -80, -95, 56, -37, 2, -47, -96, 114, -21, 33, 49, 78, 107, -111, 124, -22, 86, -44, -27, -51, -56, 123, -36, 120, -108, -18, -79, -35, -53, -20, 96, -107, -87, 82, -12, 67, -118, 57, -103, -5, -128, -61, 107, -29, -35, 15, 76, -59, -88, 5, -2, -25, -21, -20, 6, -43, 98, 28, -30, -122, -52, -65, 120, 55, 38, 53, 66, 99, -90, 53, -102, -7, -30, -89, 75, 4, 81, 54, -116, -73, 7, -52, -62, 77, -109, -92, -105, 12, 90, -94, 50, -89, 80, -13, -22, 24, 66, -42, -5, -116, 59, 58, -35, -94, 76, -46, -108, -29, -8, 20, 42, 7, 47, 43, 74, 112, 90, 64, -1, 21, 12, -101, -128, 64, -83, -117, 91, 48, 58, 35, 81, 51, 12, 11, 114, -3, -42, 62, -68, -68, 37, -49, -80, 105, -22, -33, 40, 73, -108, -84, -52, 122, -41, -94, -28, -64, -1, -46, 7, -42, -69, -77, 27, -115, -91, 94};
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
    msg.setTimeStamp(0.693662587039);
    msg.setSource(51312U);
    msg.setSourceEntity(119U);
    msg.setDestination(743U);
    msg.setDestinationEntity(83U);
    msg.base_lat = 0.152084338261;
    msg.base_lon = 0.609633056441;
    msg.base_time = 0.581155120916;
    const char tmp_msg_0[] = {65, -93, -88, -93, 16, 26, 86, 56, 1, -28, 100, -42, 36, -34, 109, 92, -30, 118, 3, 26, 39, -93, 44, -13, -21, 62, -121, 0, 45, 19, 43, 26, 105, -91, 68, 79, -36, -103, 12, -110, 95, -121, 25, 0, 59, 29, 29, 54, -90, 94, -99, 109, 41, 68, 106, 49, -24, -89, -17, -94, 77, 26, -19, 103, 118, 8, 20, 121, 21, -48, 6, 10, -7, -53, 96, -18, 113, 96, -76, -84, -127, 102, -106, 7, -78, -10, -99, -50, -92, 124, 62, 100, -6, 121, -28, 122, 58, 97, -11, 42, 22, 16, -11, 77, -19, 2, 88, -27, 4, 90, -68, 29, 50, -40, -5, 120, -50, 28, -42, -109, 125, -102, 30, -33, -106, -113, -26, -105, -126, 60, -75, 74, -117, -102, 114, 71, -51, -123, 21, -49, 43, -112, 115, -37, 55, -68, 6, -53, 95, -27, -76, 95, -72, 112, -68, 80, 47, 103, 22, 52, 5, 79, -102, -81, 97, 58, -48, -95, 68, -117, -2, 14, -66, -100, 70, 14, -83, 47, -72, 112, 33, -41, 3, -93, -47, 105, -85, -88, -78, 6, -3, 115, -80, -11, -73, -5, 44, -34, -84, 75, 23, 101, -64, -118, -24, -13, 17, 8, 90, -8, -10, 121, -38, -61, 31, -77, 35, 114, 85, 112, 31, -41, -90, -98, 16, -27, -90, -81};
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
    msg.setTimeStamp(0.708168020954);
    msg.setSource(21768U);
    msg.setSourceEntity(129U);
    msg.setDestination(36946U);
    msg.setDestinationEntity(120U);
    msg.base_lat = 0.0102929374489;
    msg.base_lon = 0.949994885323;
    msg.base_time = 0.524148449013;
    const char tmp_msg_0[] = {28, 5, 1, -10, -34, -97, -113, 21, 4, -127, -125, 28, -9, -86, 97, -103, -102, -100, 96, 85, 82, 122, 49, -10, -60, -78, 98, -123, -25, 73, 92, -122, -39, 56, -52, -11, -88, 38, -125, 98, -63, -56, -74, 47, -11, -110, -98, 58, 122, -25, 87, -103, -12, -47, -36, 0, -65, 77, -78, -71, 11, -59, -46, -73, 24, -68, -55, -65, -125, 51, 124, -9, -52, -82, -1, -48, -37, 74, 101, -41, 120, -50, 102, -44, 24, 101, 73, 94, -74, -72, 39, 51, -76, -118, 10, -120, -65, -55, 74, 15, 115, 12, 99, 84, -106, 7, -63, -93, 70, 72, -102, 27, 21, 117, 65, 65, -10, -92, 36, 99, -121, -27, 96, -120, -21, 118, -8, 67, -5, -88, -60, -77, 79, -83, 20, -37, -97, 126, 115, 59, 115, 123, 101, 1, 19, 46, -43, -18, -44, 16, -15, -78, -23, -54, 24, -98, -111, 15, -73, 23, -1, -103, -115, 117, -59, -112, -81, 15, -100, 94, 0, -15, -114, -99, -107, -10, -19, 24, 16, 31, 43, -78, -26, 113, 30, -13, -27, 22, 109, -15, -21, -108, -86, -17, 60, -4, 11, -30, -88, 25, -93, 10, 23, 117, 22, 79, 102, -116, -95, -39, 53, 27, 60, 3, 67, -102, -71, -6, -126, -118, -7, -95, 84, -97, 73, 32, -27, -83, -96, -24, 47, 117, -83, 27, 67, -124, 41, -52, -127, 74, 43};
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
    msg.setTimeStamp(0.177309997407);
    msg.setSource(33906U);
    msg.setSourceEntity(70U);
    msg.setDestination(20505U);
    msg.setDestinationEntity(68U);
    msg.sys_id = 45352U;
    msg.priority = -2;
    msg.x = 15857;
    msg.y = 31949;
    msg.z = 24582;
    msg.t = -28247;
    IMC::RelativeWind tmp_msg_0;
    tmp_msg_0.angle = 0.123862994701;
    tmp_msg_0.speed = 0.228747421406;
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
    msg.setTimeStamp(0.608062026427);
    msg.setSource(47528U);
    msg.setSourceEntity(74U);
    msg.setDestination(58355U);
    msg.setDestinationEntity(144U);
    msg.sys_id = 52696U;
    msg.priority = -120;
    msg.x = -7526;
    msg.y = 18517;
    msg.z = -24736;
    msg.t = -19426;
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 243U;
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
    msg.setTimeStamp(0.658318797159);
    msg.setSource(3329U);
    msg.setSourceEntity(240U);
    msg.setDestination(28226U);
    msg.setDestinationEntity(98U);
    msg.sys_id = 25552U;
    msg.priority = -112;
    msg.x = 14398;
    msg.y = 2650;
    msg.z = 2499;
    msg.t = 9078;
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 46U;
    tmp_msg_0.longain = 0.64541454211;
    tmp_msg_0.latgain = 0.3541530554;
    tmp_msg_0.bondthick = 2420357026U;
    tmp_msg_0.leadgain = 0.606555908435;
    tmp_msg_0.deconflgain = 0.894901561767;
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
    msg.setTimeStamp(0.366616006321);
    msg.setSource(45706U);
    msg.setSourceEntity(126U);
    msg.setDestination(25140U);
    msg.setDestinationEntity(171U);
    msg.req_id = 24341U;
    msg.type = 242U;
    msg.max_size = 63826U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.42428129621;
    tmp_msg_0.base_lon = 0.117286079114;
    tmp_msg_0.base_time = 0.88499936023;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 41667U;
    tmp_tmp_msg_0_0.priority = -77;
    tmp_tmp_msg_0_0.x = -22108;
    tmp_tmp_msg_0_0.y = 16764;
    tmp_tmp_msg_0_0.z = 25844;
    tmp_tmp_msg_0_0.t = 4066;
    IMC::DesiredHeading tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.106111878071;
    tmp_tmp_tmp_msg_0_0_0.off = 0.199987030861;
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
    msg.setTimeStamp(0.697569709153);
    msg.setSource(20808U);
    msg.setSourceEntity(77U);
    msg.setDestination(48972U);
    msg.setDestinationEntity(11U);
    msg.req_id = 62393U;
    msg.type = 111U;
    msg.max_size = 62598U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.997316022325;
    tmp_msg_0.base_lon = 0.888042208524;
    tmp_msg_0.base_time = 0.968396581569;
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
    msg.setTimeStamp(0.0861947995897);
    msg.setSource(1467U);
    msg.setSourceEntity(145U);
    msg.setDestination(39642U);
    msg.setDestinationEntity(203U);
    msg.req_id = 8638U;
    msg.type = 60U;
    msg.max_size = 15231U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0778038415092;
    tmp_msg_0.base_lon = 0.53819450867;
    tmp_msg_0.base_time = 0.714950396835;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 23215U;
    tmp_tmp_msg_0_0.destination = 35130U;
    tmp_tmp_msg_0_0.timeout = 0.29337976625;
    IMC::SessionSubscription tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sessid = 2813829351U;
    tmp_tmp_tmp_msg_0_0_0.messages.assign("OVCFXMOZUBCDSSFUXKRZGLIIVQSOZRBEJXHBLBGYCDGPBHCMLFGFMDXPYSHEKNNZXPAAXAKKANDKNHGIOVMTFTHQLITNTEQMMPCTIDOPGEEQYQFFUYFNZRHRHIPEHWUAJNZSUWDJVYOTWWABJJZDRBKBQVMTRLUHLALYIYNLULQNFBAXJKWZWKE");
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
    msg.setTimeStamp(0.548049974287);
    msg.setSource(16243U);
    msg.setSourceEntity(154U);
    msg.setDestination(55397U);
    msg.setDestinationEntity(90U);
    msg.original_source = 39484U;
    msg.destination = 36962U;
    msg.timeout = 0.408699652303;
    IMC::VesselWind tmp_msg_0;
    tmp_msg_0.angle = 0.848490034518;
    tmp_msg_0.reference.assign("IQDADWEGKIBBZJXPRXYERSWHTSVSNGGQPVTBLYMKAXHGBKXBCYYUPMPUVCCFAEJGFUOLDHNTFWGRCZZBIVMVLEDXKNLPZFMUOLBYASBEECASLYOWMQXIJWOXTESCWPNRHWBTKZGFRSVDPBFMQKXOTNUHESOYUQHAUOM");
    tmp_msg_0.speed = 0.522919589698;
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
    msg.setTimeStamp(0.78952960018);
    msg.setSource(24680U);
    msg.setSourceEntity(45U);
    msg.setDestination(19084U);
    msg.setDestinationEntity(44U);
    msg.original_source = 36112U;
    msg.destination = 44711U;
    msg.timeout = 0.580923601657;
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.604348395536;
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
    msg.setTimeStamp(0.606280540329);
    msg.setSource(30483U);
    msg.setSourceEntity(17U);
    msg.setDestination(4107U);
    msg.setDestinationEntity(192U);
    msg.original_source = 49338U;
    msg.destination = 35168U;
    msg.timeout = 0.813761283651;
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.124855467169;
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
    msg.setTimeStamp(0.0745773126205);
    msg.setSource(56794U);
    msg.setSourceEntity(244U);
    msg.setDestination(40839U);
    msg.setDestinationEntity(39U);
    msg.type = 189U;
    msg.comm_interface = 214U;
    msg.model = 56148U;
    msg.list.assign("TXWFFWRDQNBCJDYBWFBNDUXIQZAPSGHWOUQHSJVLFNXZUKBQTUEZJFPSBWETNWLAHLDPMSGYZBNBYJOPHTTMJMUKIAEIBFHGAHEXNYROXROTACDZOBKGXILYSZACOFHOUVWGEEDYPVKKZRDJVKXSTDUMTLQIADNARVWHOTGXCIVENJFVUOSRXLIAMKZTMPQMYJSSCQFYLINCMJY");

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
    msg.setTimeStamp(0.336559240733);
    msg.setSource(57163U);
    msg.setSourceEntity(165U);
    msg.setDestination(44281U);
    msg.setDestinationEntity(171U);
    msg.type = 41U;
    msg.comm_interface = 54126U;
    msg.model = 30636U;
    msg.list.assign("CEWEQVBKDDPGVDUCPGLZGGIJBPSTSOMLNQAMBUXCZSOISFNYLAAFUCHGYWOFBOUPWMAVOIIKYWWVXPYRKEVDMMJRYYVIJRFKNWHCCHJRIQSKBLVTAYDWAQTFDPCLVANQLZAJHJTQLNQOGXYPRNFUQDQOSHTZYIJMTMCZGEUEEHSTXITHQFFKBPKVXFYXSOOEBDZWTZIKWSJHPXXIZGTKNHMOUZUEAMJFXGV");

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
    msg.setTimeStamp(0.966801773525);
    msg.setSource(13924U);
    msg.setSourceEntity(21U);
    msg.setDestination(57907U);
    msg.setDestinationEntity(42U);
    msg.type = 26U;
    msg.comm_interface = 3207U;
    msg.model = 42732U;
    msg.list.assign("VWHOFASVRCSPNKFXHUEJEUIDNKHUCRDIVWCFIMWKTZOBPDDRBUCONNCAVPFMCODDTIRSXCMTJWULLVBY");

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
    msg.setTimeStamp(0.627245590766);
    msg.setSource(33456U);
    msg.setSourceEntity(148U);
    msg.setDestination(31527U);
    msg.setDestinationEntity(161U);
    msg.type = 208U;
    msg.req_id = 1008336121U;
    msg.ttl = 29885U;
    msg.code = 24U;
    msg.destination.assign("YBDDSRGUEKVQWSBYPPCFOKFXUNJAXTMTQLQNNAZZVJTWMRWARIYUA");
    msg.source.assign("RMZKLPEJFLREADHACKDNGGCQDHHLQFMGQFZTHUOBCSEWLBCAJOPBMTOMNTCBLYUXYBXCLOQSJFPNLNVBUGHXHXDWWVMJRCZTPTAWURJRNRLQMFARWIQHAQZIBPWNYEAPTGYOANSTQLCSEJDIUBSLYFJKPHPXUVYKVPCIQWXJTWUMBEVZMVBQDZIGSXGKHYNTJVODIIEYYKDCOASSSWFVDWIXNFXJFREOAXUGH");
    msg.acknowledge = 38U;
    msg.status = 222U;
    const char tmp_msg_0[] = {42, -25, 64, 17, -90, 2, 97, 43, 6, 5, 21, -75, -80, -93, -54, 33, 73, 109, 67, 99, 40, -2, -7, -53, -86, 114, 3, 106, 114, 111, 7, -63, 122, -118, 76, 124, 63, 84, 42, 18, -91, -105, 69, -68, -77, -112, -91, 2, -127, 66, 87, 97, -29, 63, -120, 118, -29, -49, 40, -95, -94, 106, 82, -8, 67, -58, -82, 103, -76, -67, -51, 69, -81, -119, 61, -68, -72, 33, -111, -87, -92, 71, 82, 15, 16, -111, 116, 101, 70, 24, -37, -54, 61, -107, 109, 14, -31, -28, 36, 5, 6, 19, 49, -17, 30, -54, -23, -42, -12, -35, 89, 64, -72, -91, 11, -97, 71, -23, 7, 0, 75, -68, 98, 52, -2, -127, -122, 40, 28, -98, -96, 70, 73, -22, 62, 66, -84, 25, -59, -59, -5, -19, 76, -62, -25, -73, -100, -36, -6, 28, 104, -46, -49, 121, 102, -63, 78, 16, -15, 85, 98, -56, 10, 63};
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
    msg.setTimeStamp(0.533956768365);
    msg.setSource(33594U);
    msg.setSourceEntity(120U);
    msg.setDestination(7734U);
    msg.setDestinationEntity(128U);
    msg.type = 192U;
    msg.req_id = 219164914U;
    msg.ttl = 8488U;
    msg.code = 199U;
    msg.destination.assign("APOMLYKTYZRTMFDMILMJUVEDRIMOHIFWALSTODJKVYFPKDGTNVQREJSEDUECJD");
    msg.source.assign("CKYTQGNZAYIPHUPQDRYVMZJQXRVVWDVHLTQTIJBZANBJCGRNGMLVKJDOVJIMSXUZKPEZNBAWSRUWTRTVLSBLNDEQEFPFNSDEGKRSCLGWXXFV");
    msg.acknowledge = 84U;
    msg.status = 250U;
    const char tmp_msg_0[] = {-96, -53, 62, 104, 89, -105, 115, 123, -33, 34, -16, -116, 57, 64, -94, -90, -64, 121, -69, 89, -118, -55, 33, 99, -97, 39, 48, 115, -81, -24, -108, 43, 42, 6, -81, 2, 30, 99, -49, -6, -9, 2, -57, 122, 17, -123, -89, -69, -23, -107, -42, 37, -125, -5, -122, -12, 21, 26, 15, -116, -5, -103, -24, 100, 51, 17, -13, -127, -120, -127, -123, -49, -34};
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
    msg.setTimeStamp(0.160301286586);
    msg.setSource(31926U);
    msg.setSourceEntity(213U);
    msg.setDestination(51986U);
    msg.setDestinationEntity(44U);
    msg.type = 42U;
    msg.req_id = 2840425146U;
    msg.ttl = 1452U;
    msg.code = 128U;
    msg.destination.assign("CFURWOXNHFONWFJAQBWKDAUQQBVNRSNDIZQTMXEKPOHQVRYEGXKWHURUHKGQPLARMVMETXGWXMPJSGPPSIWOEGODETXYXNAUDLTMFKLAIZRVDMFGTVMBYUUCFLVRAZALGQK");
    msg.source.assign("DBTELKYIFZCAFHCNSQAASZDZMGJSRPWTMECCWVZGNVBAPYHUAAHWWRRFJUBRYCKDNLPEJH");
    msg.acknowledge = 196U;
    msg.status = 149U;
    const char tmp_msg_0[] = {22, 12, 88, 112, -100, -96, -112, -95, 115, 25, 114, -10, -104, -44};
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
    msg.setTimeStamp(0.922698760977);
    msg.setSource(23688U);
    msg.setSourceEntity(211U);
    msg.setDestination(5732U);
    msg.setDestinationEntity(204U);
    msg.id = 201U;
    msg.range = 0.524929834063;

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
    msg.setTimeStamp(0.543273561973);
    msg.setSource(31931U);
    msg.setSourceEntity(13U);
    msg.setDestination(48927U);
    msg.setDestinationEntity(191U);
    msg.id = 86U;
    msg.range = 0.907361066584;

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
    msg.setTimeStamp(0.58433652415);
    msg.setSource(11294U);
    msg.setSourceEntity(210U);
    msg.setDestination(34071U);
    msg.setDestinationEntity(120U);
    msg.id = 176U;
    msg.range = 0.81978980726;

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
    msg.setTimeStamp(0.94433507983);
    msg.setSource(14835U);
    msg.setSourceEntity(148U);
    msg.setDestination(43471U);
    msg.setDestinationEntity(176U);
    msg.beacon.assign("UBXZQEYMEVJHIWEDUGUDWOYQOPHBTFRYESNMOLKYXFHKDPVWPUBNGZDSVSJSQTSMXGHYLFGFZKECTOURNXLPYPQRNGYYTAMTFCN");
    msg.lat = 0.188286840133;
    msg.lon = 0.0997249018394;
    msg.depth = 0.0400609023142;
    msg.query_channel = 140U;
    msg.reply_channel = 179U;
    msg.transponder_delay = 209U;

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
    msg.setTimeStamp(0.337301680909);
    msg.setSource(3541U);
    msg.setSourceEntity(136U);
    msg.setDestination(15540U);
    msg.setDestinationEntity(165U);
    msg.beacon.assign("DCACIZRIEHQLDBYSXIHTVVSZVWNOSUHLWJPMGLFYQQNDSKMPLEWYAACONVXOBZXFEBSGGKDHZOQWATEGSANBVQTYTGVMTUOWYDOJF");
    msg.lat = 0.380116232698;
    msg.lon = 0.363297043393;
    msg.depth = 0.474932250792;
    msg.query_channel = 63U;
    msg.reply_channel = 77U;
    msg.transponder_delay = 151U;

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
    msg.setTimeStamp(0.815769865713);
    msg.setSource(17200U);
    msg.setSourceEntity(55U);
    msg.setDestination(55720U);
    msg.setDestinationEntity(233U);
    msg.beacon.assign("VNNBGGXVJCWXWQGIMXTBZRXPYDFFDMEHFNULTVPVIJVYLNWGZHCOIODSLRTQHBYXQUBCSEUYQKUFSJIQHKDWSOHTFUPMUHFRRHSEHUZCYCTSDMKEPEIUELNMNKOGOOYILWLSJXAMQPZMRKBEYCMGQADQBXPIAYVWFGBLRJBDLADZJIOZREXUVXRNVJECAPJTWXNRVTQIPBTOJASJOWTYFKBDGTQIWHPU");
    msg.lat = 0.0315303841056;
    msg.lon = 0.198774137481;
    msg.depth = 0.892765779111;
    msg.query_channel = 168U;
    msg.reply_channel = 81U;
    msg.transponder_delay = 31U;

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
    msg.setTimeStamp(0.0256492391431);
    msg.setSource(2619U);
    msg.setSourceEntity(68U);
    msg.setDestination(54605U);
    msg.setDestinationEntity(38U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.820681666067);
    msg.setSource(27591U);
    msg.setSourceEntity(46U);
    msg.setDestination(14057U);
    msg.setDestinationEntity(52U);
    msg.op = 174U;

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
    msg.setTimeStamp(0.58921307793);
    msg.setSource(16285U);
    msg.setSourceEntity(37U);
    msg.setDestination(1578U);
    msg.setDestinationEntity(141U);
    msg.op = 72U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XQINGDXQJQWDZIDNUUYMPVJLAPBYNVNGGULPWYKOXUXKVFGISZRJTXGYELYRBOJCIAVRVULCAQPIAMWZRDFJTGCZXZFENSTNRLSVFXPXKUQHCMBKOFIKCRLWFDMXBSSOHBSGVJFLHIHVPMMWZFITGEQEFSNUTATCRRCEYBWJUXAFDDEABZJTODPQQHORNQHWEKDYLZKUZPAKHCMEENCTKMTHSHBBKY");
    tmp_msg_0.lat = 0.660760274219;
    tmp_msg_0.lon = 0.460197492145;
    tmp_msg_0.depth = 0.16035202397;
    tmp_msg_0.query_channel = 74U;
    tmp_msg_0.reply_channel = 150U;
    tmp_msg_0.transponder_delay = 40U;
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
    msg.setTimeStamp(0.234772275095);
    msg.setSource(9737U);
    msg.setSourceEntity(33U);
    msg.setDestination(63905U);
    msg.setDestinationEntity(85U);
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("NNIXXRYGYZCDBIAMLCMWVFZCFNOPIMJSGIXPKXWNOLIQUONAVRZVQZUQSEKCEGKIHEVZTIDRAUDRLFRFMBCTQOPJWBGCOCHADTINDI");
    tmp_msg_0.data.assign("CMGZGGQFYDOPERJROABZWBPDHPOBFDZSFQXKMPIAKZHJBXUVWJGSIHEXMFVYEURUTBAAHZJNRLWPCLHUBUFZWRQPAQMSMHOBKYIDUCFMOMIFLGITPNBFUCQRCKKYLUDABIBETNVQPTWTDXAHUMR");
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
    msg.setTimeStamp(0.831316166131);
    msg.setSource(7759U);
    msg.setSourceEntity(201U);
    msg.setDestination(63224U);
    msg.setDestinationEntity(211U);
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("ERUTMAQKIJBYRNZOCSXAHKYWJYMBCTXNQJAPKFQPFSLPTBBDNEGVAMDERDQBZSSETRRVNWICOCIFNRVGNYJXSDDGVKHGTUBGGJQOSXVGFDBWISHIXGVLHFNUPZMOEOYUHCIZNIVINZLJPFRPOMODCVIPLTULFZTZSYXWWBXWSOMALUROTYKTDHQLPVQGKKZTYJAGZRMAMVMQCCWA");
    tmp_msg_0.text.assign("KJTZHHYOHMKERRFVERPJIKBTQOBRTHTAXOT");
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
    msg.setTimeStamp(0.34560939026);
    msg.setSource(10123U);
    msg.setSourceEntity(195U);
    msg.setDestination(53457U);
    msg.setDestinationEntity(100U);
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("GMWMYXFIZKTOCJPFMAQJYTGSUAVHZUNVDSQUCMCNVOHMCQHKCQHEPLPEXKNPRJKSDWVGZFJHWZLJKYFJRQCIWYXJDEDBEQVWWSBEDRGLVLHBNAPHAJIQDSDDFOTXMG");
    tmp_msg_0.value = 220U;
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
    msg.setTimeStamp(0.47384401292);
    msg.setSource(64824U);
    msg.setSourceEntity(75U);
    msg.setDestination(51962U);
    msg.setDestinationEntity(8U);
    msg.op = 237U;
    msg.system.assign("BFRSYNBCTKPDGRSF");
    msg.range = 0.470679581076;
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 58U;
    tmp_msg_0.entities.assign("RQDVKNRNUEZFIVRBHVIQLPOXRTBALVGEYVJNVKWWCRAHFAZPWULALGQVIHDJMZYYMRUJIJRFQBCEXLFVHQODUTPGGSLAWYTCIGBSKHZSMLPBWFQYPYPGRATMXKILYMEPXSGJZSEDTUMFXOJYLFZPPEGTCTTCHOQSSDGNQWIKXIITBUNHKKYEXOFJXZWBNCAAODSKMKCWTVVEAMWHCORJIOZJPRYQUEFJCMNBNSXQMFHZZASUXKUDGBDCD");
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
    msg.setTimeStamp(0.328998171951);
    msg.setSource(47442U);
    msg.setSourceEntity(150U);
    msg.setDestination(42682U);
    msg.setDestinationEntity(205U);
    msg.op = 60U;
    msg.system.assign("SOREBCHBLATSEPFNKDTEPYDNCXZPIUMCOHJUBFKYNGXKDSJIQQGULSJCUUUFAYTTQYWRJA");
    msg.range = 0.40843264474;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 5U;
    tmp_msg_0.error_count = 101U;
    tmp_msg_0.error_ents.assign("QRSKQVWXTKJYYLOXJQJKKHMXTUEEFCFPMVPZBEIACNWDLUIWENADMOLAIHPEVCVGZJFCFBHOAYDPHNWFNSUDVKXMNZEZFVUZHCTRUTLJIYUJRWBWEFHGTASASLZYXLPFQVBNOOICSHTSLODPYMMZFPAVHKVHYBXSGRCXTKJGJJUDDDQRFZQRNRGXHPZIO");
    tmp_msg_0.maneuver_type = 8265U;
    tmp_msg_0.maneuver_stime = 0.517186724276;
    tmp_msg_0.maneuver_eta = 62376U;
    tmp_msg_0.control_loops = 1747693871U;
    tmp_msg_0.flags = 76U;
    tmp_msg_0.last_error.assign("ZLVTBVSFYNZAKZXJZDNBMMAOJXRAWPELNSGQNMPHOE");
    tmp_msg_0.last_error_time = 0.173063707751;
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
    msg.setTimeStamp(0.837498136227);
    msg.setSource(47370U);
    msg.setSourceEntity(101U);
    msg.setDestination(25524U);
    msg.setDestinationEntity(189U);
    msg.op = 65U;
    msg.system.assign("ENLXYPRYNEOALCBOUKDMPMQKVUFDYZZCCHCLCHHRRZWSBRBDIVBDCNIEFGCDQVMYZCMXRWRPNWAZGEXYJMAWFZYEKNFVUXGJVALGKOLRAFWUSHBVQVLCVTXLJBUNYPXLGOIHWPSAGVSKPYVEESMGLZZTIEFPESKTMEOOIYTANNDSWBTKAGRHXYFDWX");
    msg.range = 0.640390189164;
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 41U;
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
    msg.setTimeStamp(0.482617229936);
    msg.setSource(16741U);
    msg.setSourceEntity(136U);
    msg.setDestination(30700U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.870531076524);
    msg.setSource(44517U);
    msg.setSourceEntity(123U);
    msg.setDestination(54184U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.261543513727);
    msg.setSource(44336U);
    msg.setSourceEntity(70U);
    msg.setDestination(32485U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.314266461548);
    msg.setSource(15172U);
    msg.setSourceEntity(168U);
    msg.setDestination(62997U);
    msg.setDestinationEntity(137U);
    msg.list.assign("UFWARZCWRPKUWFTMHWWVGVPPSGFTSAKZCZJZXOAKNFJRLHYATLZQ");

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
    msg.setTimeStamp(0.234821848476);
    msg.setSource(23042U);
    msg.setSourceEntity(210U);
    msg.setDestination(31250U);
    msg.setDestinationEntity(69U);
    msg.list.assign("QQADYDYDRWVLBZCYNWSBEAKARFNGSKZJCSKLXUKAELHEPXFNSYOIEXBIWRGSJWZNEODSACMXKWCCGZLVBSNDZOTLHGXRDMRWLUTEBXEMZIHWLPIEWTLRY");

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
    msg.setTimeStamp(0.431792458898);
    msg.setSource(19247U);
    msg.setSourceEntity(210U);
    msg.setDestination(45904U);
    msg.setDestinationEntity(183U);
    msg.list.assign("RDJMSNPGLCNRFFFUUMRMNIBQEFZETCOGJTNBENUQZXBTWMYIQNKKCNEQZXXVSOUYSDRAQNWYPRJDQCHFMFATEYHLLZWXOGIHOWCHJXVEVKZYWCTKPUBQMALYCJAZUSMINOOKCBXETH");

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
    msg.setTimeStamp(0.632768819275);
    msg.setSource(55161U);
    msg.setSourceEntity(156U);
    msg.setDestination(52639U);
    msg.setDestinationEntity(29U);
    msg.peer.assign("WDSWFJGVUCIYJXWHJETCXUGTDCDWBQKSPKSILSIOMQGWFFLFPUOEWGSPRHBBNEGDCPOZXUFNEAINMJZKBQDBAXTPJEEUQUTOVKYQRFGYRONTR");
    msg.rssi = 0.791839364932;
    msg.integrity = 13660U;

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
    msg.setTimeStamp(0.978797571088);
    msg.setSource(21345U);
    msg.setSourceEntity(20U);
    msg.setDestination(29124U);
    msg.setDestinationEntity(172U);
    msg.peer.assign("JAMKOBYPFZYCVZFNMAJTKMYUSRTJVUEBBOLTYDIMVUJGOIKSLTDHKUXKNW");
    msg.rssi = 0.507369418623;
    msg.integrity = 10435U;

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
    msg.setTimeStamp(0.0124982714327);
    msg.setSource(63732U);
    msg.setSourceEntity(10U);
    msg.setDestination(20565U);
    msg.setDestinationEntity(118U);
    msg.peer.assign("STQPLQYPBCTHDSPYKIESJPXEOMACRVXDIRJUGYAVKPKFXHKNZYEFCSNBNRPXCAQEVSONGDOUJUIDWUQJLRIFOCFGVLYIROERMJZMDEVGDVUPZHGKKJNABSJTWIIGHAHTRDHOXZFREWHGSANIMTM");
    msg.rssi = 0.154616234798;
    msg.integrity = 13775U;

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
    msg.setTimeStamp(0.412050660592);
    msg.setSource(36465U);
    msg.setSourceEntity(122U);
    msg.setDestination(18287U);
    msg.setDestinationEntity(220U);
    msg.req_id = 1697U;
    msg.destination.assign("JOZJZURTJYQIIQSHHIJGLOMAOTUNOKTIHYRVFCUQUMSUTYMKBPDYKTPSBKELAQXFPCXCZNWKEHLKYVLMRGLLAWPHFSJZDMVMPTGHRNOPMYEVFBQIVZPLJPRIGASAROQWSVLPECAEEFRPVAKCSNNDDRWJMUUYNSKOCJDCXUTLXQXBHGCQFDXVJHFWFBICMOFEOHACGAWLXGTFGTXXEZZRXBESUJNGDYIWZYMZ");
    msg.timeout = 0.100801771248;
    msg.range = 0.422168080512;
    msg.type = 122U;
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 206U;
    tmp_msg_0.quality = 211U;
    tmp_msg_0.reps = 77U;
    tmp_msg_0.tsize = 126U;
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
    msg.setTimeStamp(0.783514335713);
    msg.setSource(42115U);
    msg.setSourceEntity(248U);
    msg.setDestination(40900U);
    msg.setDestinationEntity(56U);
    msg.req_id = 28621U;
    msg.destination.assign("BNOCLTAHFAKMXWNMNVTKJVJZIHGRSWOYXBULLTFWBYXYAOMENWSJQCQSAYKXEXZJMVWFPNZUDITEKDZSDGDQPOAEHZLQLURKXIDKMGEIDSZPOQPRQSVSENFZJFRJSKJIUUGIOOHSGDCYWJQIYCFHDHNE");
    msg.timeout = 0.037249429255;
    msg.range = 0.176639218601;
    msg.type = 74U;
    IMC::PowerSettings tmp_msg_0;
    tmp_msg_0.l2 = 32;
    tmp_msg_0.l3 = -47;
    tmp_msg_0.iridium = -64;
    tmp_msg_0.modem = -73;
    tmp_msg_0.pumps = -62;
    tmp_msg_0.vhf = 12;
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
    msg.setTimeStamp(0.984024982366);
    msg.setSource(11841U);
    msg.setSourceEntity(104U);
    msg.setDestination(11876U);
    msg.setDestinationEntity(37U);
    msg.req_id = 60536U;
    msg.destination.assign("PPKKAFCPCGXBMXIFTRFTYKNNPYATWONDDXAWWCHLSSYAEAAIWZJSHAFQJMECVUWRCAXZLQLNFMOV");
    msg.timeout = 0.458346951833;
    msg.range = 0.144044937354;
    msg.type = 190U;
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 22U;
    tmp_msg_0.period = 2527271663U;
    tmp_msg_0.duty_cycle = 2978034198U;
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
    msg.setTimeStamp(0.601297115873);
    msg.setSource(18945U);
    msg.setSourceEntity(122U);
    msg.setDestination(32404U);
    msg.setDestinationEntity(46U);
    msg.req_id = 64152U;
    msg.type = 232U;
    msg.status = 46U;
    msg.info.assign("XSMFBPRERPXZRJBZVURZAFKAFALHNNMLTRZFVCAWSJQWOEGTICWDLPGALQCDEYIQHVFFUJWVGRWXPQGEHYOJXIPOUDEEHTREOZAKWBVEQQHINBDCKJMOWYUWBLTJMFBVNGBOKGIZDPNOXLMLTMZUHXUKPCGNZNCGSNLBFXSKJMYYNQJIRBDVIRMIADVZXWGKKRSGXQPDEFPJOYYUQCSXDHVCCTZSUASLMKTTIJFYOHPYIHQSY");
    msg.range = 0.602907283415;

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
    msg.setTimeStamp(0.376084756785);
    msg.setSource(11876U);
    msg.setSourceEntity(65U);
    msg.setDestination(18743U);
    msg.setDestinationEntity(241U);
    msg.req_id = 15286U;
    msg.type = 83U;
    msg.status = 200U;
    msg.info.assign("UHNPVZYEUKSFHFJAPLFQWXBKNWIGCKDLYEZPVXHGAJLJQHDHQXJMXGQOHIUCHMGXZCJFVFAIOFPGRWICRYQGODSBEOBBZLRTCNXBUGYVKOETWVXJIPJZMYRCFYIESOIKPHLF");
    msg.range = 0.111713725977;

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
    msg.setTimeStamp(0.404713211341);
    msg.setSource(3947U);
    msg.setSourceEntity(72U);
    msg.setDestination(12139U);
    msg.setDestinationEntity(172U);
    msg.req_id = 1281U;
    msg.type = 207U;
    msg.status = 223U;
    msg.info.assign("RFLZTVIJNNCMVXIXTPVWFVJPECFZYKZQVUGMDYBXRQRQCJGJRJJHGYHZFKNPYUNTLFCFYIWHILTBSBPPRASHSAOKTUYLUGTFQJWEVHICOWKALSTVFO");
    msg.range = 0.906376612426;

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
    msg.setTimeStamp(0.70742150473);
    msg.setSource(42254U);
    msg.setSourceEntity(48U);
    msg.setDestination(61873U);
    msg.setDestinationEntity(14U);
    msg.value = 16285;

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
    msg.setTimeStamp(0.867774842392);
    msg.setSource(8029U);
    msg.setSourceEntity(194U);
    msg.setDestination(37996U);
    msg.setDestinationEntity(4U);
    msg.value = 28531;

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
    msg.setTimeStamp(0.991151299559);
    msg.setSource(34936U);
    msg.setSourceEntity(11U);
    msg.setDestination(47184U);
    msg.setDestinationEntity(172U);
    msg.value = 23653;

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
    msg.setTimeStamp(0.483106118203);
    msg.setSource(48475U);
    msg.setSourceEntity(229U);
    msg.setDestination(7747U);
    msg.setDestinationEntity(44U);
    msg.value = 0.467102899244;

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
    msg.setTimeStamp(0.36479733428);
    msg.setSource(2851U);
    msg.setSourceEntity(62U);
    msg.setDestination(17747U);
    msg.setDestinationEntity(58U);
    msg.value = 0.879443426124;

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
    msg.setTimeStamp(0.752243679273);
    msg.setSource(58020U);
    msg.setSourceEntity(134U);
    msg.setDestination(20233U);
    msg.setDestinationEntity(129U);
    msg.value = 0.843447514748;

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
    msg.setTimeStamp(0.520928043123);
    msg.setSource(30272U);
    msg.setSourceEntity(108U);
    msg.setDestination(12679U);
    msg.setDestinationEntity(97U);
    msg.value = 0.745222651311;

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
    msg.setTimeStamp(0.384187020469);
    msg.setSource(61366U);
    msg.setSourceEntity(93U);
    msg.setDestination(59490U);
    msg.setDestinationEntity(10U);
    msg.value = 0.243879410017;

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
    msg.setTimeStamp(0.0561391583779);
    msg.setSource(6658U);
    msg.setSourceEntity(126U);
    msg.setDestination(6379U);
    msg.setDestinationEntity(10U);
    msg.value = 0.853932901725;

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
    msg.setTimeStamp(0.894995960984);
    msg.setSource(35857U);
    msg.setSourceEntity(181U);
    msg.setDestination(3464U);
    msg.setDestinationEntity(203U);
    msg.validity = 45922U;
    msg.type = 66U;
    msg.utc_year = 49096U;
    msg.utc_month = 72U;
    msg.utc_day = 122U;
    msg.utc_time = 0.573571132873;
    msg.lat = 0.72357737385;
    msg.lon = 0.550614068365;
    msg.height = 0.780594087749;
    msg.satellites = 128U;
    msg.cog = 0.0811784320043;
    msg.sog = 0.401861638726;
    msg.hdop = 0.0704864261218;
    msg.vdop = 0.6796884994;
    msg.hacc = 0.582636929937;
    msg.vacc = 0.285863694194;

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
    msg.setTimeStamp(0.507823449102);
    msg.setSource(38575U);
    msg.setSourceEntity(108U);
    msg.setDestination(30316U);
    msg.setDestinationEntity(214U);
    msg.validity = 60355U;
    msg.type = 127U;
    msg.utc_year = 21621U;
    msg.utc_month = 91U;
    msg.utc_day = 42U;
    msg.utc_time = 0.185127460753;
    msg.lat = 0.835313964039;
    msg.lon = 0.691903415938;
    msg.height = 0.347265374452;
    msg.satellites = 63U;
    msg.cog = 0.554094255791;
    msg.sog = 0.647727210197;
    msg.hdop = 0.0327199606411;
    msg.vdop = 0.87709004138;
    msg.hacc = 0.0698309810963;
    msg.vacc = 0.591000631336;

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
    msg.setTimeStamp(0.23513802556);
    msg.setSource(65527U);
    msg.setSourceEntity(207U);
    msg.setDestination(47601U);
    msg.setDestinationEntity(131U);
    msg.validity = 53622U;
    msg.type = 74U;
    msg.utc_year = 54416U;
    msg.utc_month = 207U;
    msg.utc_day = 17U;
    msg.utc_time = 0.400358042176;
    msg.lat = 0.750436119535;
    msg.lon = 0.91563272373;
    msg.height = 0.608615354739;
    msg.satellites = 91U;
    msg.cog = 0.71555469102;
    msg.sog = 0.216392007505;
    msg.hdop = 0.956880245686;
    msg.vdop = 0.905905557048;
    msg.hacc = 0.130489341429;
    msg.vacc = 0.332413182227;

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
    msg.setTimeStamp(0.557747438553);
    msg.setSource(58693U);
    msg.setSourceEntity(106U);
    msg.setDestination(55103U);
    msg.setDestinationEntity(30U);
    msg.time = 0.900187999084;
    msg.phi = 0.41786830803;
    msg.theta = 0.205862896466;
    msg.psi = 0.423274835416;
    msg.psi_magnetic = 0.623395822124;

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
    msg.setTimeStamp(0.835672894993);
    msg.setSource(4717U);
    msg.setSourceEntity(229U);
    msg.setDestination(48521U);
    msg.setDestinationEntity(25U);
    msg.time = 0.161999465545;
    msg.phi = 0.501049545644;
    msg.theta = 0.777168836141;
    msg.psi = 0.77969186192;
    msg.psi_magnetic = 0.25396016916;

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
    msg.setTimeStamp(0.650389394503);
    msg.setSource(22497U);
    msg.setSourceEntity(248U);
    msg.setDestination(57102U);
    msg.setDestinationEntity(36U);
    msg.time = 0.745935384535;
    msg.phi = 0.080216214316;
    msg.theta = 0.327223771404;
    msg.psi = 0.70091719959;
    msg.psi_magnetic = 0.939809940799;

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
    msg.setTimeStamp(0.360496654947);
    msg.setSource(8429U);
    msg.setSourceEntity(71U);
    msg.setDestination(51381U);
    msg.setDestinationEntity(66U);
    msg.time = 0.381604689145;
    msg.x = 0.439248038979;
    msg.y = 0.69763753162;
    msg.z = 0.100067129879;
    msg.timestep = 0.344970401684;

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
    msg.setTimeStamp(0.981460373992);
    msg.setSource(37876U);
    msg.setSourceEntity(31U);
    msg.setDestination(22851U);
    msg.setDestinationEntity(234U);
    msg.time = 0.176002465981;
    msg.x = 0.699253349341;
    msg.y = 0.421650229327;
    msg.z = 0.105239906557;
    msg.timestep = 0.0783036468809;

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
    msg.setTimeStamp(0.726697708883);
    msg.setSource(49659U);
    msg.setSourceEntity(231U);
    msg.setDestination(57963U);
    msg.setDestinationEntity(213U);
    msg.time = 0.776415757346;
    msg.x = 0.0474745331178;
    msg.y = 0.33022767783;
    msg.z = 0.367118801155;
    msg.timestep = 0.721618943535;

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
    msg.setTimeStamp(0.770560941858);
    msg.setSource(35101U);
    msg.setSourceEntity(88U);
    msg.setDestination(11658U);
    msg.setDestinationEntity(144U);
    msg.time = 0.261725340531;
    msg.x = 0.887552333043;
    msg.y = 0.920752995605;
    msg.z = 0.577617268109;

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
    msg.setTimeStamp(0.36820309799);
    msg.setSource(20801U);
    msg.setSourceEntity(229U);
    msg.setDestination(30410U);
    msg.setDestinationEntity(185U);
    msg.time = 0.72153654095;
    msg.x = 0.234074767504;
    msg.y = 0.563120233143;
    msg.z = 0.973116288106;

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
    msg.setTimeStamp(0.942636193136);
    msg.setSource(11719U);
    msg.setSourceEntity(224U);
    msg.setDestination(28279U);
    msg.setDestinationEntity(152U);
    msg.time = 0.148513757545;
    msg.x = 0.0394161416482;
    msg.y = 0.397827983995;
    msg.z = 0.603590333585;

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
    msg.setTimeStamp(0.712323976305);
    msg.setSource(60378U);
    msg.setSourceEntity(245U);
    msg.setDestination(64365U);
    msg.setDestinationEntity(187U);
    msg.time = 0.150950409517;
    msg.x = 0.384553110299;
    msg.y = 0.465587179982;
    msg.z = 0.294744082569;

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
    msg.setTimeStamp(0.982186808051);
    msg.setSource(18099U);
    msg.setSourceEntity(221U);
    msg.setDestination(19672U);
    msg.setDestinationEntity(19U);
    msg.time = 0.381081491015;
    msg.x = 0.3405066537;
    msg.y = 0.590596321611;
    msg.z = 0.512956255681;

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
    msg.setTimeStamp(0.37793068475);
    msg.setSource(923U);
    msg.setSourceEntity(148U);
    msg.setDestination(35823U);
    msg.setDestinationEntity(107U);
    msg.time = 0.851503106774;
    msg.x = 0.848507053693;
    msg.y = 0.0578577930481;
    msg.z = 0.529410159589;

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
    msg.setTimeStamp(0.568449717303);
    msg.setSource(42100U);
    msg.setSourceEntity(209U);
    msg.setDestination(40395U);
    msg.setDestinationEntity(242U);
    msg.time = 0.406263352359;
    msg.x = 0.0490883286394;
    msg.y = 0.182504024785;
    msg.z = 0.930253825619;

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
    msg.setTimeStamp(0.642323386665);
    msg.setSource(64088U);
    msg.setSourceEntity(17U);
    msg.setDestination(12132U);
    msg.setDestinationEntity(210U);
    msg.time = 0.161401781476;
    msg.x = 0.454239756485;
    msg.y = 0.85886478992;
    msg.z = 0.687440127176;

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
    msg.setTimeStamp(0.568654709587);
    msg.setSource(61137U);
    msg.setSourceEntity(43U);
    msg.setDestination(34697U);
    msg.setDestinationEntity(148U);
    msg.time = 0.485306788726;
    msg.x = 0.264094295577;
    msg.y = 0.457618161872;
    msg.z = 0.602801030825;

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
    msg.setTimeStamp(0.660769795218);
    msg.setSource(18834U);
    msg.setSourceEntity(84U);
    msg.setDestination(7025U);
    msg.setDestinationEntity(102U);
    msg.validity = 166U;
    msg.x = 0.63111534568;
    msg.y = 0.517790070051;
    msg.z = 0.5269753012;

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
    msg.setTimeStamp(0.466386088555);
    msg.setSource(45373U);
    msg.setSourceEntity(60U);
    msg.setDestination(48473U);
    msg.setDestinationEntity(9U);
    msg.validity = 153U;
    msg.x = 0.477808743759;
    msg.y = 0.341268109272;
    msg.z = 0.477309708506;

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
    msg.setTimeStamp(0.997069168006);
    msg.setSource(40856U);
    msg.setSourceEntity(1U);
    msg.setDestination(30039U);
    msg.setDestinationEntity(170U);
    msg.validity = 250U;
    msg.x = 0.798670980691;
    msg.y = 0.101122144984;
    msg.z = 0.692218913041;

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
    msg.setTimeStamp(0.260804013862);
    msg.setSource(23930U);
    msg.setSourceEntity(54U);
    msg.setDestination(28523U);
    msg.setDestinationEntity(9U);
    msg.validity = 25U;
    msg.x = 0.0871754391996;
    msg.y = 0.840978233904;
    msg.z = 0.371491739817;

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
    msg.setTimeStamp(0.0411762448092);
    msg.setSource(49339U);
    msg.setSourceEntity(196U);
    msg.setDestination(61590U);
    msg.setDestinationEntity(48U);
    msg.validity = 201U;
    msg.x = 0.65593698962;
    msg.y = 0.395215404634;
    msg.z = 0.772798403439;

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
    msg.setTimeStamp(0.516357699227);
    msg.setSource(61558U);
    msg.setSourceEntity(66U);
    msg.setDestination(15255U);
    msg.setDestinationEntity(147U);
    msg.validity = 49U;
    msg.x = 0.657991716679;
    msg.y = 0.787196356551;
    msg.z = 0.524351146248;

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
    msg.setTimeStamp(0.896458208777);
    msg.setSource(59821U);
    msg.setSourceEntity(66U);
    msg.setDestination(185U);
    msg.setDestinationEntity(34U);
    msg.time = 0.580630231758;
    msg.x = 0.504438946751;
    msg.y = 0.360122146772;
    msg.z = 0.66345914971;

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
    msg.setTimeStamp(0.270878204519);
    msg.setSource(37239U);
    msg.setSourceEntity(113U);
    msg.setDestination(20421U);
    msg.setDestinationEntity(221U);
    msg.time = 0.477783605053;
    msg.x = 0.28940035498;
    msg.y = 0.649036608646;
    msg.z = 0.811920691519;

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
    msg.setTimeStamp(0.639844350808);
    msg.setSource(65380U);
    msg.setSourceEntity(164U);
    msg.setDestination(15928U);
    msg.setDestinationEntity(176U);
    msg.time = 0.717917137505;
    msg.x = 0.378435225682;
    msg.y = 0.580170744494;
    msg.z = 0.549677380657;

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
    msg.setTimeStamp(0.235330754746);
    msg.setSource(34027U);
    msg.setSourceEntity(68U);
    msg.setDestination(29582U);
    msg.setDestinationEntity(140U);
    msg.validity = 117U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0186319169545;
    tmp_msg_0.beam_height = 0.998605576862;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.131456871454;

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
    msg.setTimeStamp(0.90986461298);
    msg.setSource(30228U);
    msg.setSourceEntity(136U);
    msg.setDestination(41845U);
    msg.setDestinationEntity(191U);
    msg.validity = 185U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.418703187488;
    tmp_msg_0.y = 0.0148708255025;
    tmp_msg_0.z = 0.123292508248;
    tmp_msg_0.phi = 0.78083211048;
    tmp_msg_0.theta = 0.314027069972;
    tmp_msg_0.psi = 0.521735740121;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.344543699049;

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
    msg.setTimeStamp(0.632466255897);
    msg.setSource(19800U);
    msg.setSourceEntity(135U);
    msg.setDestination(49958U);
    msg.setDestinationEntity(204U);
    msg.validity = 129U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.332327038172;
    tmp_msg_0.y = 0.125677820818;
    tmp_msg_0.z = 0.497985281062;
    tmp_msg_0.phi = 0.27912558463;
    tmp_msg_0.theta = 0.456555185161;
    tmp_msg_0.psi = 0.466073774189;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.913247051068;
    tmp_msg_1.beam_height = 0.208765388386;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.836445633227;

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
    msg.setTimeStamp(0.574510581035);
    msg.setSource(48089U);
    msg.setSourceEntity(189U);
    msg.setDestination(52670U);
    msg.setDestinationEntity(168U);
    msg.value = 0.29919185537;

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
    msg.setTimeStamp(0.850226430587);
    msg.setSource(1983U);
    msg.setSourceEntity(42U);
    msg.setDestination(12314U);
    msg.setDestinationEntity(54U);
    msg.value = 0.923350641341;

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
    msg.setTimeStamp(0.0552245005714);
    msg.setSource(20316U);
    msg.setSourceEntity(70U);
    msg.setDestination(45787U);
    msg.setDestinationEntity(101U);
    msg.value = 0.277114004952;

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
    msg.setTimeStamp(0.867308676896);
    msg.setSource(32499U);
    msg.setSourceEntity(243U);
    msg.setDestination(39999U);
    msg.setDestinationEntity(109U);
    msg.value = 0.568937822553;

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
    msg.setTimeStamp(0.365790813172);
    msg.setSource(53323U);
    msg.setSourceEntity(80U);
    msg.setDestination(8319U);
    msg.setDestinationEntity(157U);
    msg.value = 0.688885991034;

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
    msg.setTimeStamp(0.944707258842);
    msg.setSource(33412U);
    msg.setSourceEntity(122U);
    msg.setDestination(63803U);
    msg.setDestinationEntity(180U);
    msg.value = 0.92439962811;

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
    msg.setTimeStamp(0.480158593109);
    msg.setSource(36918U);
    msg.setSourceEntity(230U);
    msg.setDestination(25656U);
    msg.setDestinationEntity(222U);
    msg.value = 0.772493291777;

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
    msg.setTimeStamp(0.983121236957);
    msg.setSource(46856U);
    msg.setSourceEntity(81U);
    msg.setDestination(32606U);
    msg.setDestinationEntity(45U);
    msg.value = 0.506070276026;

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
    msg.setTimeStamp(0.740994246332);
    msg.setSource(55345U);
    msg.setSourceEntity(236U);
    msg.setDestination(46713U);
    msg.setDestinationEntity(245U);
    msg.value = 0.907364293177;

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
    msg.setTimeStamp(0.469171601697);
    msg.setSource(56586U);
    msg.setSourceEntity(79U);
    msg.setDestination(39189U);
    msg.setDestinationEntity(147U);
    msg.value = 0.70454536942;

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
    msg.setTimeStamp(0.553998542449);
    msg.setSource(18150U);
    msg.setSourceEntity(183U);
    msg.setDestination(41686U);
    msg.setDestinationEntity(155U);
    msg.value = 0.202910798729;

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
    msg.setTimeStamp(0.543344041389);
    msg.setSource(6316U);
    msg.setSourceEntity(20U);
    msg.setDestination(27424U);
    msg.setDestinationEntity(226U);
    msg.value = 0.59636830302;

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
    msg.setTimeStamp(0.72920747293);
    msg.setSource(54724U);
    msg.setSourceEntity(107U);
    msg.setDestination(61496U);
    msg.setDestinationEntity(221U);
    msg.value = 0.858180034776;

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
    msg.setTimeStamp(0.955963688746);
    msg.setSource(25167U);
    msg.setSourceEntity(194U);
    msg.setDestination(35737U);
    msg.setDestinationEntity(238U);
    msg.value = 0.166996623843;

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
    msg.setTimeStamp(0.527230286393);
    msg.setSource(7701U);
    msg.setSourceEntity(49U);
    msg.setDestination(46738U);
    msg.setDestinationEntity(117U);
    msg.value = 0.44978493231;

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
    msg.setTimeStamp(0.454865776411);
    msg.setSource(47556U);
    msg.setSourceEntity(122U);
    msg.setDestination(21810U);
    msg.setDestinationEntity(89U);
    msg.value = 0.439168187753;

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
    msg.setTimeStamp(0.106976064721);
    msg.setSource(25517U);
    msg.setSourceEntity(153U);
    msg.setDestination(23182U);
    msg.setDestinationEntity(170U);
    msg.value = 0.803077379502;

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
    msg.setTimeStamp(0.94808060837);
    msg.setSource(31541U);
    msg.setSourceEntity(59U);
    msg.setDestination(64915U);
    msg.setDestinationEntity(65U);
    msg.value = 0.490512294501;

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
    msg.setTimeStamp(0.894112637462);
    msg.setSource(38781U);
    msg.setSourceEntity(145U);
    msg.setDestination(24058U);
    msg.setDestinationEntity(71U);
    msg.value = 0.488585916332;

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
    msg.setTimeStamp(0.16047606791);
    msg.setSource(6785U);
    msg.setSourceEntity(234U);
    msg.setDestination(33521U);
    msg.setDestinationEntity(188U);
    msg.value = 0.0547861935622;

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
    msg.setTimeStamp(0.0939214995999);
    msg.setSource(7580U);
    msg.setSourceEntity(50U);
    msg.setDestination(49991U);
    msg.setDestinationEntity(155U);
    msg.value = 0.711356342886;

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
    msg.setTimeStamp(0.44891407486);
    msg.setSource(3653U);
    msg.setSourceEntity(212U);
    msg.setDestination(55750U);
    msg.setDestinationEntity(82U);
    msg.value = 0.843305834205;

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
    msg.setTimeStamp(0.0629362408254);
    msg.setSource(41467U);
    msg.setSourceEntity(73U);
    msg.setDestination(56417U);
    msg.setDestinationEntity(226U);
    msg.value = 0.409549766997;

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
    msg.setTimeStamp(0.187366119183);
    msg.setSource(62461U);
    msg.setSourceEntity(238U);
    msg.setDestination(17337U);
    msg.setDestinationEntity(117U);
    msg.value = 0.140669321597;

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
    msg.setTimeStamp(0.088229309972);
    msg.setSource(3206U);
    msg.setSourceEntity(32U);
    msg.setDestination(39409U);
    msg.setDestinationEntity(102U);
    msg.direction = 0.025252527874;
    msg.speed = 0.0787048764939;
    msg.turbulence = 0.0365810694224;

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
    msg.setTimeStamp(0.210428535405);
    msg.setSource(23619U);
    msg.setSourceEntity(61U);
    msg.setDestination(44791U);
    msg.setDestinationEntity(8U);
    msg.direction = 0.0920892959881;
    msg.speed = 0.834895488293;
    msg.turbulence = 0.399267699539;

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
    msg.setTimeStamp(0.652038076951);
    msg.setSource(32051U);
    msg.setSourceEntity(82U);
    msg.setDestination(59416U);
    msg.setDestinationEntity(175U);
    msg.direction = 0.196840158113;
    msg.speed = 0.411716262868;
    msg.turbulence = 0.481929712782;

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
    msg.setTimeStamp(0.21804135136);
    msg.setSource(26816U);
    msg.setSourceEntity(192U);
    msg.setDestination(1999U);
    msg.setDestinationEntity(14U);
    msg.value = 0.300921567138;

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
    msg.setTimeStamp(0.911162242179);
    msg.setSource(21723U);
    msg.setSourceEntity(242U);
    msg.setDestination(23306U);
    msg.setDestinationEntity(123U);
    msg.value = 0.81208041287;

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
    msg.setTimeStamp(0.692246213963);
    msg.setSource(62679U);
    msg.setSourceEntity(75U);
    msg.setDestination(56454U);
    msg.setDestinationEntity(62U);
    msg.value = 0.364857089643;

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
    msg.setTimeStamp(0.529741737928);
    msg.setSource(28100U);
    msg.setSourceEntity(91U);
    msg.setDestination(54809U);
    msg.setDestinationEntity(57U);
    msg.value.assign("NMUMTKHIRLZCHRMOMABILXPRQGHICIMUUOFCGROZAFNDQLHSVOMJYORCOXPLCOCZJABLFRMZNQXQDLYOIXADWGOCXJMIAGXPMUYKFQZTUXLSFGHDWKWQUBFASKFIHMJZFGPKAVFKKWAQVVYPZSNWVCHB");

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
    msg.setTimeStamp(0.963304124285);
    msg.setSource(10828U);
    msg.setSourceEntity(41U);
    msg.setDestination(30491U);
    msg.setDestinationEntity(89U);
    msg.value.assign("ZLLDIGDDHCVEFTBVOKMWRYHUJSZUSJOOAIXJEYRMMIURO");

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
    msg.setTimeStamp(0.00757528985161);
    msg.setSource(18325U);
    msg.setSourceEntity(243U);
    msg.setDestination(64775U);
    msg.setDestinationEntity(95U);
    msg.value.assign("TMVYSHEXZAYPCWUUZSQVXNHREYIQLBFW");

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
    msg.setTimeStamp(0.300785088611);
    msg.setSource(63665U);
    msg.setSourceEntity(208U);
    msg.setDestination(42794U);
    msg.setDestinationEntity(90U);
    const char tmp_msg_0[] = {-3, -66, -111, -31, -120, 55, 53, 16, -114, -19, -41, -64, 112, -94, -25, 86, 98, 49, -28, -61, 56, -2, -63, -59, -23, -7, -90, -118, -17, 14, 93, 69, -80, -33, 33, -80, -77, 106, -123, 7, 112, 34, -16, 10, 90, 34, -117, 22, 5, 81, -67, 104, 7, -127, -36, 37, 13, 92, 122, -62, -24, 80, -123, -105, 18, 122, 94, 87, 81, 49, 19, -24, 32, -56, 112, 101, -41, -92, -48, 27, -115, 32, -38, 84, -127, 69, -39, -64, 77, 26, -11, -5, -41, 46, -126, 112, 124, 52, -56, -95, -35, -73, -113};
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
    msg.setTimeStamp(0.818806225117);
    msg.setSource(59433U);
    msg.setSourceEntity(221U);
    msg.setDestination(3388U);
    msg.setDestinationEntity(118U);
    const char tmp_msg_0[] = {126, -35, 67, -42, -36, -19, -69, -3, -66, 82, -4, -71, 55, 110, 66, -62, 126, -120, -87, 28, -99, -108, 69, -50, -107, -53, -53, -113, -60, -110, -50, -110, -20, 111, -115, -13, 89, -5, 79, -121, 59, -109, -76, -22, 62, -118, -57, 47, -79, -83, -99, -29, -46, 20, 14, 27, -69, -5, 71, 70, -127, 89, 91, -3, -16, 118, 59, -72, 64, -123, -116, -18, 39, 63, -72, -11, 119, -59, -33, -84, -24, -111, 17, 51, -23, 15, 35, -62, 106, -51, 20, -18, -51, -1, 51, 49, 89, -64, -96, -51, -67, -106, -1, 35, 37, -81, 80, 8, 121, -37, -92, -44, 91, -93, -51, 24, -13, -93, -14, -100, 69, -43, -52, 7, 11, 37, 25, -46, -115, 123, -123, -121, -119, -105, 114, -128, 93, 48, 67, -111, 113, 23, -63, -36, -5, 77, 111, -51, -24, -65, 113, -68, -57, -98, -54, -49, -44, -114, 106, -51, 77, 110, -29, 23, 55, 26, 90, -54, -47, -20, 73, 30, -95, -15, -50, -37, 28, -53, -62, -25, -49, 59, -100, -77, 108, -125, 22, -55, -71, 81, -62, -16, -13, -25, 42, 50, 18, -94, 86, 34, -26};
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
    msg.setTimeStamp(0.0302715663052);
    msg.setSource(43070U);
    msg.setSourceEntity(96U);
    msg.setDestination(8106U);
    msg.setDestinationEntity(44U);
    const char tmp_msg_0[] = {-34, -80, -19, 42, -34, 21, -60, -123, 88, -14, 56, 39, 33, -2, -84, 10, 59, 64, 52, 53, -124, -101, 112, -46, 113, -66, -1, -94, -102, -118, 29, -107, 76, 36, 119, 39, 17, -24, 54, -120, -57, 21, 87, 101, 105, -30, -40, 83, 10, -76, 11, -113, 111, -123, -65, 35, -32, -11, -91, -127};
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
    msg.setTimeStamp(0.487549785096);
    msg.setSource(24534U);
    msg.setSourceEntity(152U);
    msg.setDestination(54284U);
    msg.setDestinationEntity(69U);
    msg.value = 0.755247177914;

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
    msg.setTimeStamp(0.884939263694);
    msg.setSource(2586U);
    msg.setSourceEntity(159U);
    msg.setDestination(40734U);
    msg.setDestinationEntity(82U);
    msg.value = 0.276521498434;

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
    msg.setTimeStamp(0.153071053213);
    msg.setSource(8826U);
    msg.setSourceEntity(175U);
    msg.setDestination(58296U);
    msg.setDestinationEntity(26U);
    msg.value = 0.644364576127;

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
    msg.setTimeStamp(0.865261896778);
    msg.setSource(46628U);
    msg.setSourceEntity(249U);
    msg.setDestination(39055U);
    msg.setDestinationEntity(70U);
    msg.type = 85U;
    msg.frequency = 631563819U;
    msg.min_range = 29933U;
    msg.max_range = 57051U;
    msg.bits_per_point = 14U;
    msg.scale_factor = 0.301653397675;
    const char tmp_msg_0[] = {-55, 95, 17, -70, 30, -67, -105, 60, -104, 85, -60, -124, 14, -96, 46, -83, 49, 56, 118, -57, 4, 26, 87, 45, 32, 55, 81, 69, 97, 70, -27, 49, 105, -105, -4, 32, 101, -99, 8, 83, 63, -7, 80, 25, 21, -44, -2, -115, 58, 49, 2, -57, 115, -38, -110, -98, 90, -92, 35, 67, 79, 81, -32, 80, -79, -110, -44, -112, -24, -92, 121, -57, -79, 82, 90, -54, 43, 68, 100, -51, -115, 44, 31, -21, 120, -59, 10, 44, 16, -19, -105, -58, -58, 29, -55, -43, 9, 17, -97, -127, -35, -91, 106, -12, 97, -62, 73, 100, 100, 55, 82, 27, 101, -36, -21, 57, -33, -95, -104, -12, 28, -11, -96, -69, 43, 91, -3, -15, -124, -8, -16, 120, 84, -69, 84, -15, -115, -122, -56, 106, 30, -70, 113, 59, 60, 20, 116, 105, -54, -24, -123, 97, -121, -108, -89, 107, -12, -116, -35, -40, -88, -60, -47, 99, 114, 126, 88, 49, 87, 124, -70, 114, -109, -15, -24, 95, 63, 46, 113, 96, -67};
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
    msg.setTimeStamp(0.509602758718);
    msg.setSource(4066U);
    msg.setSourceEntity(191U);
    msg.setDestination(48996U);
    msg.setDestinationEntity(216U);
    msg.type = 134U;
    msg.frequency = 834631221U;
    msg.min_range = 17131U;
    msg.max_range = 21107U;
    msg.bits_per_point = 192U;
    msg.scale_factor = 0.0989195873044;
    const char tmp_msg_0[] = {-67, 68, -64, 121, -114, 91, 34, -78, 86, -54, 114, -105, 45, 39, 9, 108, 115, 114, 95, -12, -19, -92, -89, 103, 87, 18, 13, -42, 87, 106, -73, -95, 70, 79, 8, -40, -125, 26, 36, -105, -65, -66, 23, 49, 5, 5, -120, -68, -1, 69, 72, 17, 11, -4, 97, -34, 44, -5, 86, -84, 10, -49, 75, -94, 69, 46, 89, -48, 76, -110, 21, -22, 102, -90, -125, -107, 115, 102, -11, -113, -101, 40, 83, 82, -53, 102, 38, 49, -123, -57, 63, -82, 107, 125, -28, 48, -101, 85, 72, 72, 119, 97, -85, -75, 16, -67, 49, 85, -45, 76, 64, 46, -63, 108, -98, 5, -43, 58, 40, -63, -43, -11, 108, 4, -40, 53, -109, 11, 115, -80, 26, 25, -80, 66, 4, -117, 32, 110, 102, -65, -105, -61, -32, -97, -94, -95, -116, 105, -13, -69, -10, 109, -5, 52, -120, 103, -5, 18, 47, -75, 109, 68};
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
    msg.setTimeStamp(0.410605816992);
    msg.setSource(33215U);
    msg.setSourceEntity(126U);
    msg.setDestination(49501U);
    msg.setDestinationEntity(157U);
    msg.type = 187U;
    msg.frequency = 3550663258U;
    msg.min_range = 41106U;
    msg.max_range = 26484U;
    msg.bits_per_point = 61U;
    msg.scale_factor = 0.737743187118;
    const char tmp_msg_0[] = {98, -72, -80, -121, 21, -44, -51, -72, -1, -22, -20, 34, 112, 77, 91, 97, 40, -86, -115, 91, -61, -39, 66, -32, 109, 103, 5, 109, -34, 122, -53, 66, -119, -17, -6, 47, 28, -49, 89, -53, -68, 90, -16, 6, 5, -20, 33, 27, 60, -37, -84, -119, 71, 86, -112, 69, -109, 96, -83, -14, 21};
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
    msg.setTimeStamp(0.0270759750991);
    msg.setSource(44921U);
    msg.setSourceEntity(3U);
    msg.setDestination(12082U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.632566037243);
    msg.setSource(1287U);
    msg.setSourceEntity(94U);
    msg.setDestination(27180U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.965947022935);
    msg.setSource(60542U);
    msg.setSourceEntity(150U);
    msg.setDestination(37570U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.929634852897);
    msg.setSource(60852U);
    msg.setSourceEntity(41U);
    msg.setDestination(6856U);
    msg.setDestinationEntity(52U);
    msg.op = 254U;

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
    msg.setTimeStamp(0.554644293611);
    msg.setSource(55748U);
    msg.setSourceEntity(117U);
    msg.setDestination(18036U);
    msg.setDestinationEntity(234U);
    msg.op = 245U;

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
    msg.setTimeStamp(0.136894927017);
    msg.setSource(21516U);
    msg.setSourceEntity(74U);
    msg.setDestination(52622U);
    msg.setDestinationEntity(197U);
    msg.op = 199U;

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
    msg.setTimeStamp(0.132266957132);
    msg.setSource(37685U);
    msg.setSourceEntity(13U);
    msg.setDestination(22124U);
    msg.setDestinationEntity(6U);
    msg.value = 0.766359867322;
    msg.confidence = 0.0189806424153;
    msg.opmodes.assign("QKNHDLIALBZAXJGDJAFTMGLXHZWPJOWUCJFETCMTQMAYTRRURBMCISTIKSCQMKBCFUYOQNNJZNCZREXVDBPVXLSEOISYNCPSTOOSIFDDX");

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
    msg.setTimeStamp(0.916501320983);
    msg.setSource(45668U);
    msg.setSourceEntity(87U);
    msg.setDestination(11281U);
    msg.setDestinationEntity(70U);
    msg.value = 0.233039976273;
    msg.confidence = 0.948547144448;
    msg.opmodes.assign("FMAEDDNWDQMMVGNOOJYHDJUVMXQCOBEXIDPTSLPPRAZBYCSYREFWLYVHZZZRCTHEJOGIQGQKXLVIORPFPLHCIH");

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
    msg.setTimeStamp(0.652090243891);
    msg.setSource(26867U);
    msg.setSourceEntity(176U);
    msg.setDestination(39099U);
    msg.setDestinationEntity(64U);
    msg.value = 0.466445869561;
    msg.confidence = 0.0799466840498;
    msg.opmodes.assign("BOWKVEQJMCGBYOCPSSOCUICILIFVDZHUMMBMJEHQVJAEFJTNJMOVMADAOCGHEBRGEPUQLTHFGZWCRYVVMCDPQYIKEOSOFBQKYNYPUKLKIHELXKHWSBZQCHHOXEMZUZGANNMYYBTIAZIKTDDNSSXWGBN");

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
    msg.setTimeStamp(0.995540772915);
    msg.setSource(56950U);
    msg.setSourceEntity(77U);
    msg.setDestination(61075U);
    msg.setDestinationEntity(28U);
    msg.itow = 670818395U;
    msg.lat = 0.0342147535813;
    msg.lon = 0.0820561241867;
    msg.height_ell = 0.0877154419573;
    msg.height_sea = 0.0103585862936;
    msg.hacc = 0.18785235805;
    msg.vacc = 0.776253115603;
    msg.vel_n = 0.576041725876;
    msg.vel_e = 0.0602015084615;
    msg.vel_d = 0.844773538531;
    msg.speed = 0.904125708981;
    msg.gspeed = 0.645477148101;
    msg.heading = 0.486318944757;
    msg.sacc = 0.642245251011;
    msg.cacc = 0.604654099241;

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
    msg.setTimeStamp(0.123591155011);
    msg.setSource(12491U);
    msg.setSourceEntity(47U);
    msg.setDestination(35729U);
    msg.setDestinationEntity(70U);
    msg.itow = 2279380868U;
    msg.lat = 0.184506649837;
    msg.lon = 0.864079208046;
    msg.height_ell = 0.348837837583;
    msg.height_sea = 0.850090190283;
    msg.hacc = 0.420862810071;
    msg.vacc = 0.124998146246;
    msg.vel_n = 0.868108105879;
    msg.vel_e = 0.723440007413;
    msg.vel_d = 0.318264755691;
    msg.speed = 0.379030681781;
    msg.gspeed = 0.926681457463;
    msg.heading = 0.425165081125;
    msg.sacc = 0.117280659677;
    msg.cacc = 0.360606158209;

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
    msg.setTimeStamp(0.520058388385);
    msg.setSource(60992U);
    msg.setSourceEntity(189U);
    msg.setDestination(20991U);
    msg.setDestinationEntity(125U);
    msg.itow = 2930669730U;
    msg.lat = 0.682096514584;
    msg.lon = 0.752114539754;
    msg.height_ell = 0.135722724747;
    msg.height_sea = 0.556473003557;
    msg.hacc = 0.913034851519;
    msg.vacc = 0.324949593397;
    msg.vel_n = 0.999746086018;
    msg.vel_e = 0.375709085405;
    msg.vel_d = 0.846850255726;
    msg.speed = 0.255307555603;
    msg.gspeed = 0.683117032981;
    msg.heading = 0.212966404144;
    msg.sacc = 0.613605545656;
    msg.cacc = 0.418745819769;

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
    msg.setTimeStamp(0.38964149985);
    msg.setSource(34501U);
    msg.setSourceEntity(8U);
    msg.setDestination(23849U);
    msg.setDestinationEntity(65U);
    msg.id = 250U;
    msg.value = 0.770369541922;

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
    msg.setTimeStamp(0.949121531499);
    msg.setSource(51143U);
    msg.setSourceEntity(152U);
    msg.setDestination(22689U);
    msg.setDestinationEntity(34U);
    msg.id = 179U;
    msg.value = 0.0218851857866;

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
    msg.setTimeStamp(0.571835261036);
    msg.setSource(10184U);
    msg.setSourceEntity(35U);
    msg.setDestination(64332U);
    msg.setDestinationEntity(182U);
    msg.id = 170U;
    msg.value = 0.197627297585;

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
    msg.setTimeStamp(0.0223367652458);
    msg.setSource(36227U);
    msg.setSourceEntity(222U);
    msg.setDestination(38017U);
    msg.setDestinationEntity(170U);
    msg.x = 0.996583671948;
    msg.y = 0.934360158528;
    msg.z = 0.262361178906;
    msg.phi = 0.4361811023;
    msg.theta = 0.162708151638;
    msg.psi = 0.110748153152;

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
    msg.setTimeStamp(0.208370812645);
    msg.setSource(45105U);
    msg.setSourceEntity(56U);
    msg.setDestination(8241U);
    msg.setDestinationEntity(185U);
    msg.x = 0.601378415742;
    msg.y = 0.702970577331;
    msg.z = 0.487085694961;
    msg.phi = 0.601182021861;
    msg.theta = 0.78014893723;
    msg.psi = 0.0769386704176;

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
    msg.setTimeStamp(0.744856500179);
    msg.setSource(42136U);
    msg.setSourceEntity(107U);
    msg.setDestination(12040U);
    msg.setDestinationEntity(50U);
    msg.x = 0.944138174928;
    msg.y = 0.449539975779;
    msg.z = 0.287196117158;
    msg.phi = 0.835140067103;
    msg.theta = 0.886028121981;
    msg.psi = 0.0388829903123;

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
    msg.setTimeStamp(0.405679686579);
    msg.setSource(53605U);
    msg.setSourceEntity(249U);
    msg.setDestination(38175U);
    msg.setDestinationEntity(45U);
    msg.beam_width = 0.531408523662;
    msg.beam_height = 0.899941943516;

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
    msg.setTimeStamp(0.996198290119);
    msg.setSource(46481U);
    msg.setSourceEntity(17U);
    msg.setDestination(42823U);
    msg.setDestinationEntity(67U);
    msg.beam_width = 0.0463137307962;
    msg.beam_height = 0.0829562394733;

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
    msg.setTimeStamp(0.627405150174);
    msg.setSource(53674U);
    msg.setSourceEntity(97U);
    msg.setDestination(18983U);
    msg.setDestinationEntity(65U);
    msg.beam_width = 0.522655396259;
    msg.beam_height = 0.869939353552;

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
    msg.setTimeStamp(0.996951022777);
    msg.setSource(29574U);
    msg.setSourceEntity(52U);
    msg.setDestination(33352U);
    msg.setDestinationEntity(152U);
    msg.sane = 22U;

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
    msg.setTimeStamp(0.0295737140898);
    msg.setSource(14525U);
    msg.setSourceEntity(242U);
    msg.setDestination(63957U);
    msg.setDestinationEntity(8U);
    msg.sane = 80U;

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
    msg.setTimeStamp(0.644054436291);
    msg.setSource(8310U);
    msg.setSourceEntity(15U);
    msg.setDestination(33579U);
    msg.setDestinationEntity(62U);
    msg.sane = 107U;

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
    msg.setTimeStamp(0.490672307514);
    msg.setSource(61486U);
    msg.setSourceEntity(124U);
    msg.setDestination(40214U);
    msg.setDestinationEntity(215U);
    msg.value = 0.186774602661;

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
    msg.setTimeStamp(0.154315589016);
    msg.setSource(31315U);
    msg.setSourceEntity(126U);
    msg.setDestination(3174U);
    msg.setDestinationEntity(176U);
    msg.value = 0.196945521362;

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
    msg.setTimeStamp(0.766746848139);
    msg.setSource(29278U);
    msg.setSourceEntity(35U);
    msg.setDestination(21786U);
    msg.setDestinationEntity(237U);
    msg.value = 0.720221151888;

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
    msg.setTimeStamp(0.0979742321784);
    msg.setSource(2976U);
    msg.setSourceEntity(253U);
    msg.setDestination(59426U);
    msg.setDestinationEntity(166U);
    msg.value = 0.774886580205;

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
    msg.setTimeStamp(0.792102641899);
    msg.setSource(32135U);
    msg.setSourceEntity(152U);
    msg.setDestination(22031U);
    msg.setDestinationEntity(65U);
    msg.value = 0.420999088277;

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
    msg.setTimeStamp(0.390268027539);
    msg.setSource(24924U);
    msg.setSourceEntity(197U);
    msg.setDestination(5368U);
    msg.setDestinationEntity(252U);
    msg.value = 0.0240374036547;

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
    msg.setTimeStamp(0.854616521652);
    msg.setSource(26132U);
    msg.setSourceEntity(135U);
    msg.setDestination(59330U);
    msg.setDestinationEntity(222U);
    msg.value = 0.0541583003651;

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
    msg.setTimeStamp(0.945840219794);
    msg.setSource(54576U);
    msg.setSourceEntity(157U);
    msg.setDestination(10922U);
    msg.setDestinationEntity(214U);
    msg.value = 0.50966225751;

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
    msg.setTimeStamp(0.352780915855);
    msg.setSource(39005U);
    msg.setSourceEntity(156U);
    msg.setDestination(18311U);
    msg.setDestinationEntity(176U);
    msg.value = 0.272439897314;

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
    msg.setTimeStamp(0.725803705747);
    msg.setSource(42253U);
    msg.setSourceEntity(66U);
    msg.setDestination(26756U);
    msg.setDestinationEntity(21U);
    msg.value = 0.600294769001;

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
    msg.setTimeStamp(0.667727266205);
    msg.setSource(48776U);
    msg.setSourceEntity(221U);
    msg.setDestination(5748U);
    msg.setDestinationEntity(152U);
    msg.value = 0.190223851156;

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
    msg.setTimeStamp(0.777463938245);
    msg.setSource(45379U);
    msg.setSourceEntity(34U);
    msg.setDestination(43862U);
    msg.setDestinationEntity(138U);
    msg.value = 0.941005255538;

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
    msg.setTimeStamp(0.250835341426);
    msg.setSource(63603U);
    msg.setSourceEntity(71U);
    msg.setDestination(903U);
    msg.setDestinationEntity(26U);
    msg.value = 0.574813730521;

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
    msg.setTimeStamp(0.334240192867);
    msg.setSource(61369U);
    msg.setSourceEntity(204U);
    msg.setDestination(9586U);
    msg.setDestinationEntity(39U);
    msg.value = 0.209591085504;

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
    msg.setTimeStamp(0.110975515084);
    msg.setSource(44842U);
    msg.setSourceEntity(222U);
    msg.setDestination(1071U);
    msg.setDestinationEntity(150U);
    msg.value = 0.150208063041;

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
    msg.setTimeStamp(0.339591470142);
    msg.setSource(51497U);
    msg.setSourceEntity(3U);
    msg.setDestination(57466U);
    msg.setDestinationEntity(30U);
    msg.value = 0.169697645284;

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
    msg.setTimeStamp(0.474850247967);
    msg.setSource(20039U);
    msg.setSourceEntity(20U);
    msg.setDestination(58265U);
    msg.setDestinationEntity(220U);
    msg.value = 0.902587401832;

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
    msg.setTimeStamp(0.491729166327);
    msg.setSource(61264U);
    msg.setSourceEntity(139U);
    msg.setDestination(36151U);
    msg.setDestinationEntity(249U);
    msg.value = 0.780810780931;

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
    msg.setTimeStamp(0.372232046688);
    msg.setSource(63463U);
    msg.setSourceEntity(71U);
    msg.setDestination(39202U);
    msg.setDestinationEntity(222U);
    msg.value = 0.397579998966;

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
    msg.setTimeStamp(0.475979291822);
    msg.setSource(63286U);
    msg.setSourceEntity(181U);
    msg.setDestination(46083U);
    msg.setDestinationEntity(48U);
    msg.value = 0.632694660898;

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
    msg.setTimeStamp(0.234187272451);
    msg.setSource(25703U);
    msg.setSourceEntity(18U);
    msg.setDestination(12122U);
    msg.setDestinationEntity(185U);
    msg.value = 0.752273270848;

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
    msg.setTimeStamp(0.440348393621);
    msg.setSource(38493U);
    msg.setSourceEntity(146U);
    msg.setDestination(56409U);
    msg.setDestinationEntity(42U);
    msg.value = 0.298409107235;

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
    msg.setTimeStamp(0.0277020317495);
    msg.setSource(283U);
    msg.setSourceEntity(122U);
    msg.setDestination(44211U);
    msg.setDestinationEntity(97U);
    msg.value = 0.482714392054;

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
    msg.setTimeStamp(0.906787189986);
    msg.setSource(12326U);
    msg.setSourceEntity(154U);
    msg.setDestination(7276U);
    msg.setDestinationEntity(33U);
    msg.value = 0.747186305275;

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
    msg.setTimeStamp(0.833262815004);
    msg.setSource(46853U);
    msg.setSourceEntity(132U);
    msg.setDestination(9157U);
    msg.setDestinationEntity(12U);
    msg.validity = 11817U;
    msg.type = 114U;
    msg.tow = 3306833542U;
    msg.base_lat = 0.0758183549555;
    msg.base_lon = 0.558286840026;
    msg.base_height = 0.000930387344983;
    msg.n = 0.709575540989;
    msg.e = 0.322139068637;
    msg.d = 0.297696689204;
    msg.v_n = 0.406014934137;
    msg.v_e = 0.490964828899;
    msg.v_d = 0.104831116156;
    msg.satellites = 212U;
    msg.iar_hyp = 7588U;
    msg.iar_ratio = 0.526122774557;

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
    msg.setTimeStamp(0.915262238791);
    msg.setSource(23036U);
    msg.setSourceEntity(120U);
    msg.setDestination(41472U);
    msg.setDestinationEntity(25U);
    msg.validity = 63772U;
    msg.type = 54U;
    msg.tow = 2086147436U;
    msg.base_lat = 0.322602924646;
    msg.base_lon = 0.408130605583;
    msg.base_height = 0.348151215556;
    msg.n = 0.682486821268;
    msg.e = 0.245283224747;
    msg.d = 0.572290976965;
    msg.v_n = 0.441140947707;
    msg.v_e = 0.278716955838;
    msg.v_d = 0.978326676989;
    msg.satellites = 194U;
    msg.iar_hyp = 37794U;
    msg.iar_ratio = 0.0870648034935;

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
    msg.setTimeStamp(0.765874196115);
    msg.setSource(35836U);
    msg.setSourceEntity(197U);
    msg.setDestination(9339U);
    msg.setDestinationEntity(57U);
    msg.validity = 42793U;
    msg.type = 20U;
    msg.tow = 2229434038U;
    msg.base_lat = 0.97033029162;
    msg.base_lon = 0.477864328331;
    msg.base_height = 0.636292768329;
    msg.n = 0.33750078965;
    msg.e = 0.675157087403;
    msg.d = 0.191380902315;
    msg.v_n = 0.328046686551;
    msg.v_e = 0.599501259616;
    msg.v_d = 0.473668914566;
    msg.satellites = 61U;
    msg.iar_hyp = 47435U;
    msg.iar_ratio = 0.0905833576803;

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
    msg.setTimeStamp(0.578195351468);
    msg.setSource(24215U);
    msg.setSourceEntity(175U);
    msg.setDestination(29282U);
    msg.setDestinationEntity(104U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.963113423563;
    tmp_msg_0.lon = 0.617514724254;
    tmp_msg_0.height = 0.925954536887;
    tmp_msg_0.x = 0.489447316583;
    tmp_msg_0.y = 0.467164449005;
    tmp_msg_0.z = 0.306526177428;
    tmp_msg_0.phi = 0.758253773992;
    tmp_msg_0.theta = 0.806565228141;
    tmp_msg_0.psi = 0.14586846663;
    tmp_msg_0.u = 0.379403169063;
    tmp_msg_0.v = 0.914701139771;
    tmp_msg_0.w = 0.339940178204;
    tmp_msg_0.vx = 0.471635391381;
    tmp_msg_0.vy = 0.664169920106;
    tmp_msg_0.vz = 0.567112410376;
    tmp_msg_0.p = 0.90696839263;
    tmp_msg_0.q = 0.729267985913;
    tmp_msg_0.r = 0.355894833399;
    tmp_msg_0.depth = 0.0698310813301;
    tmp_msg_0.alt = 0.72784227628;
    msg.state.set(tmp_msg_0);
    msg.type = 214U;

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
    msg.setTimeStamp(0.167637798813);
    msg.setSource(19403U);
    msg.setSourceEntity(167U);
    msg.setDestination(13468U);
    msg.setDestinationEntity(101U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.100066855014;
    tmp_msg_0.lon = 0.727486353292;
    tmp_msg_0.height = 0.491494939624;
    tmp_msg_0.x = 0.748177282459;
    tmp_msg_0.y = 0.183743182477;
    tmp_msg_0.z = 0.485088399874;
    tmp_msg_0.phi = 0.160237229323;
    tmp_msg_0.theta = 0.555643353996;
    tmp_msg_0.psi = 0.2906717337;
    tmp_msg_0.u = 0.58939900981;
    tmp_msg_0.v = 0.301621231475;
    tmp_msg_0.w = 0.499884825178;
    tmp_msg_0.vx = 0.196700693686;
    tmp_msg_0.vy = 0.361051056878;
    tmp_msg_0.vz = 0.115542392501;
    tmp_msg_0.p = 0.84353995524;
    tmp_msg_0.q = 0.306556892858;
    tmp_msg_0.r = 0.979044119348;
    tmp_msg_0.depth = 0.954164778187;
    tmp_msg_0.alt = 0.93783238452;
    msg.state.set(tmp_msg_0);
    msg.type = 29U;

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
    msg.setTimeStamp(0.716245133293);
    msg.setSource(29771U);
    msg.setSourceEntity(66U);
    msg.setDestination(17223U);
    msg.setDestinationEntity(14U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.733607950604;
    tmp_msg_0.lon = 0.838714619365;
    tmp_msg_0.height = 0.31372777956;
    tmp_msg_0.x = 0.31530779185;
    tmp_msg_0.y = 0.995790030723;
    tmp_msg_0.z = 0.70080741171;
    tmp_msg_0.phi = 0.907535259431;
    tmp_msg_0.theta = 0.0774647890726;
    tmp_msg_0.psi = 0.670297439449;
    tmp_msg_0.u = 0.68929701787;
    tmp_msg_0.v = 0.853077671977;
    tmp_msg_0.w = 0.547158329466;
    tmp_msg_0.vx = 0.331566928997;
    tmp_msg_0.vy = 0.394146121753;
    tmp_msg_0.vz = 0.56922650299;
    tmp_msg_0.p = 0.845119646524;
    tmp_msg_0.q = 0.362800228582;
    tmp_msg_0.r = 0.0218399309538;
    tmp_msg_0.depth = 0.398837549101;
    tmp_msg_0.alt = 0.949794130538;
    msg.state.set(tmp_msg_0);
    msg.type = 194U;

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
    msg.setTimeStamp(0.946584344771);
    msg.setSource(53235U);
    msg.setSourceEntity(146U);
    msg.setDestination(33420U);
    msg.setDestinationEntity(87U);
    msg.value = 0.0500073229798;

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
    msg.setTimeStamp(0.775509340686);
    msg.setSource(27134U);
    msg.setSourceEntity(201U);
    msg.setDestination(37988U);
    msg.setDestinationEntity(177U);
    msg.value = 0.0327146975435;

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
    msg.setTimeStamp(0.418735735641);
    msg.setSource(44015U);
    msg.setSourceEntity(127U);
    msg.setDestination(41876U);
    msg.setDestinationEntity(212U);
    msg.value = 0.0117683821057;

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
    msg.setTimeStamp(0.554360671456);
    msg.setSource(24946U);
    msg.setSourceEntity(156U);
    msg.setDestination(37949U);
    msg.setDestinationEntity(161U);
    msg.value = 0.406255904109;

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
    msg.setTimeStamp(0.712080668105);
    msg.setSource(53088U);
    msg.setSourceEntity(89U);
    msg.setDestination(33736U);
    msg.setDestinationEntity(59U);
    msg.value = 0.402895618115;

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
    msg.setTimeStamp(0.0655661791953);
    msg.setSource(35409U);
    msg.setSourceEntity(190U);
    msg.setDestination(38491U);
    msg.setDestinationEntity(89U);
    msg.value = 0.746897073473;

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
    msg.setTimeStamp(0.912723242128);
    msg.setSource(44858U);
    msg.setSourceEntity(250U);
    msg.setDestination(31742U);
    msg.setDestinationEntity(30U);
    msg.value = 0.17966278452;

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
    msg.setTimeStamp(0.299806708448);
    msg.setSource(14564U);
    msg.setSourceEntity(100U);
    msg.setDestination(8544U);
    msg.setDestinationEntity(222U);
    msg.value = 0.237142217059;

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
    msg.setTimeStamp(0.316566973132);
    msg.setSource(42165U);
    msg.setSourceEntity(254U);
    msg.setDestination(46459U);
    msg.setDestinationEntity(114U);
    msg.value = 0.822327754321;

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
    msg.setTimeStamp(0.154044015309);
    msg.setSource(62608U);
    msg.setSourceEntity(45U);
    msg.setDestination(47528U);
    msg.setDestinationEntity(130U);
    msg.value = 0.895906445612;

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
    msg.setTimeStamp(0.980450158333);
    msg.setSource(9034U);
    msg.setSourceEntity(101U);
    msg.setDestination(33791U);
    msg.setDestinationEntity(94U);
    msg.value = 0.381511812096;

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
    msg.setTimeStamp(0.756648162658);
    msg.setSource(5991U);
    msg.setSourceEntity(99U);
    msg.setDestination(19477U);
    msg.setDestinationEntity(107U);
    msg.value = 0.53542666724;

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
    msg.setTimeStamp(0.834849501204);
    msg.setSource(31694U);
    msg.setSourceEntity(91U);
    msg.setDestination(29734U);
    msg.setDestinationEntity(254U);
    msg.value = 0.181950563831;

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
    msg.setTimeStamp(0.42188427309);
    msg.setSource(8122U);
    msg.setSourceEntity(101U);
    msg.setDestination(2349U);
    msg.setDestinationEntity(129U);
    msg.value = 0.452329649786;

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
    msg.setTimeStamp(0.149856356912);
    msg.setSource(52876U);
    msg.setSourceEntity(206U);
    msg.setDestination(15028U);
    msg.setDestinationEntity(92U);
    msg.value = 0.703465100171;

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
    msg.setTimeStamp(0.414322359838);
    msg.setSource(63180U);
    msg.setSourceEntity(186U);
    msg.setDestination(33196U);
    msg.setDestinationEntity(175U);
    msg.id = 197U;
    msg.zoom = 77U;
    msg.action = 233U;

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
    msg.setTimeStamp(0.303195631789);
    msg.setSource(3145U);
    msg.setSourceEntity(111U);
    msg.setDestination(5972U);
    msg.setDestinationEntity(21U);
    msg.id = 32U;
    msg.zoom = 87U;
    msg.action = 126U;

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
    msg.setTimeStamp(0.718953202761);
    msg.setSource(7661U);
    msg.setSourceEntity(231U);
    msg.setDestination(34796U);
    msg.setDestinationEntity(48U);
    msg.id = 35U;
    msg.zoom = 51U;
    msg.action = 132U;

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
    msg.setTimeStamp(0.411539606845);
    msg.setSource(42119U);
    msg.setSourceEntity(131U);
    msg.setDestination(59367U);
    msg.setDestinationEntity(114U);
    msg.id = 92U;
    msg.value = 0.987101123078;

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
    msg.setTimeStamp(0.0857895762523);
    msg.setSource(5723U);
    msg.setSourceEntity(117U);
    msg.setDestination(42783U);
    msg.setDestinationEntity(33U);
    msg.id = 43U;
    msg.value = 0.741623365283;

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
    msg.setTimeStamp(0.609933288487);
    msg.setSource(23261U);
    msg.setSourceEntity(124U);
    msg.setDestination(41687U);
    msg.setDestinationEntity(142U);
    msg.id = 102U;
    msg.value = 0.225355364603;

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
    msg.setTimeStamp(0.742566886509);
    msg.setSource(54391U);
    msg.setSourceEntity(80U);
    msg.setDestination(45690U);
    msg.setDestinationEntity(134U);
    msg.id = 178U;
    msg.value = 0.497665086956;

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
    msg.setTimeStamp(0.92723203043);
    msg.setSource(42720U);
    msg.setSourceEntity(178U);
    msg.setDestination(23823U);
    msg.setDestinationEntity(51U);
    msg.id = 16U;
    msg.value = 0.0543245298474;

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
    msg.setTimeStamp(0.190238727901);
    msg.setSource(33521U);
    msg.setSourceEntity(112U);
    msg.setDestination(10915U);
    msg.setDestinationEntity(235U);
    msg.id = 10U;
    msg.value = 0.821785235481;

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
    msg.setTimeStamp(0.50014387975);
    msg.setSource(49589U);
    msg.setSourceEntity(143U);
    msg.setDestination(60055U);
    msg.setDestinationEntity(235U);
    msg.id = 2U;
    msg.angle = 0.774366055994;

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
    msg.setTimeStamp(0.889634589548);
    msg.setSource(42851U);
    msg.setSourceEntity(41U);
    msg.setDestination(19277U);
    msg.setDestinationEntity(91U);
    msg.id = 241U;
    msg.angle = 0.201636955645;

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
    msg.setTimeStamp(0.468181887153);
    msg.setSource(40123U);
    msg.setSourceEntity(240U);
    msg.setDestination(23413U);
    msg.setDestinationEntity(33U);
    msg.id = 149U;
    msg.angle = 0.129150483278;

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
    msg.setTimeStamp(0.818859988104);
    msg.setSource(37891U);
    msg.setSourceEntity(234U);
    msg.setDestination(48001U);
    msg.setDestinationEntity(94U);
    msg.op = 123U;
    msg.actions.assign("AVGHNKETKUURAZJHWBZJUMPTDVJYEBNOLZWFOBHXXOMRTDODZZEDAKLSEAORDZJCDWLYLKYADWVVJHTZAQHCMQVFIXKLPEKACOYZVUBCGIOYIVTWGBYMKQQFELHJTNGIHMUTSZPVBNGLXFKUTBHKYPKDVIFLXANFSMDFGCNGLXUZUAHSCIPQFFVPQBRERQENOSNHJITIWWOUNCEQSWYCPRJMYSRSJDXWCCYLSPRNGXPRXMGWRBEXUOP");

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
    msg.setTimeStamp(0.686360945443);
    msg.setSource(60083U);
    msg.setSourceEntity(105U);
    msg.setDestination(9851U);
    msg.setDestinationEntity(148U);
    msg.op = 189U;
    msg.actions.assign("PLIGIWVTBWYHMNYWQAOZFNPRUOEVJRIYIWARIJFOOOMTQHCVBWLLKZCUMEERGJXVBSSLUXSOQJRRBBUDGJNXFJGTQNPDVHVZCITZFERKHYFUAFPCLBWZHQJMHHKMSTMPTYYEHDWNKAPZEUCFYNIGAESHXCVGGMTKXXMKPAEFJJRLYDXSSONIPNXAEKDXCDLQOSNBTUUYOGWZTVAILMEGZKQCSSRAPUHKQDMZW");

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
    msg.setTimeStamp(0.649854575933);
    msg.setSource(38723U);
    msg.setSourceEntity(149U);
    msg.setDestination(17058U);
    msg.setDestinationEntity(60U);
    msg.op = 22U;
    msg.actions.assign("ZTQLJOOUYRDEUYSTJQOOMLFGZQNVXCCZURCMZAONLPCHHJGVOBQNYYLSLTVAMYNJPTGNKFIPQUTDGUPLPAYHIBSYXMBWAUQKZOEKGJDDSCZQWPORWMIHG");

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
    msg.setTimeStamp(0.327621286424);
    msg.setSource(28099U);
    msg.setSourceEntity(62U);
    msg.setDestination(49713U);
    msg.setDestinationEntity(33U);
    msg.actions.assign("NPRAQVUMXECUH");

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
    msg.setTimeStamp(0.167142710768);
    msg.setSource(37345U);
    msg.setSourceEntity(126U);
    msg.setDestination(29066U);
    msg.setDestinationEntity(192U);
    msg.actions.assign("DIJZPQJTUXQZMPYOANMNEWSKKMYGSUODPLZMDZMQBJWGICTPQHVKTFFJITWDUPUEBHRMBKXRLRQXYWBSEFGQCPZROLHLIGNHIUKZFTMZVBNSMTYJNIWWVHQIXJHLXVGHBAQTNXRBYSVWAZUVMEHCLOPNWLDVHBHDRNEGKLURIRWKIXUCGBNKGSISZDEFAYFVEFTEDTOJPXLOOUQX");

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
    msg.setTimeStamp(0.465266318795);
    msg.setSource(55940U);
    msg.setSourceEntity(36U);
    msg.setDestination(35922U);
    msg.setDestinationEntity(116U);
    msg.actions.assign("WESUQNUUCMUABSKCODQADMAOUGTXMKIBXTLMOZYUNGEVPBWSVAFIFBTIYZTUOHIUAAFJHRZMGLPVWFNESHPRWPNLOJJOACJLNKRPFKMQRXNQZYU");

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
    msg.setTimeStamp(0.993760917878);
    msg.setSource(52414U);
    msg.setSourceEntity(243U);
    msg.setDestination(50038U);
    msg.setDestinationEntity(168U);
    msg.button = 60U;
    msg.value = 52U;

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
    msg.setTimeStamp(0.294607432279);
    msg.setSource(24241U);
    msg.setSourceEntity(60U);
    msg.setDestination(1410U);
    msg.setDestinationEntity(127U);
    msg.button = 180U;
    msg.value = 2U;

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
    msg.setTimeStamp(0.316869013116);
    msg.setSource(4049U);
    msg.setSourceEntity(73U);
    msg.setDestination(50432U);
    msg.setDestinationEntity(50U);
    msg.button = 180U;
    msg.value = 138U;

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
    msg.setTimeStamp(0.619995368628);
    msg.setSource(23200U);
    msg.setSourceEntity(55U);
    msg.setDestination(26492U);
    msg.setDestinationEntity(216U);
    msg.op = 191U;
    msg.text.assign("ZPMYHKJAREIBEUJHQLACVPZXWCONZRCBQKJMZKBHRHCTXUGRICFURUVAUIRHSCBVYOZTJRKPSSHVGFSEWDTLLVKZFHDSGTCOLAFFQOALKQPJGGNWIUFTNWLOIDDSXUMMZKEBITMYFPHPTYUJYWXGKVDSTLCCSMEQYIDNDO");

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
    msg.setTimeStamp(0.534323600343);
    msg.setSource(5158U);
    msg.setSourceEntity(78U);
    msg.setDestination(53325U);
    msg.setDestinationEntity(25U);
    msg.op = 112U;
    msg.text.assign("FAEXQHQXSGISNNZMNHAILVUITCPVTRZVYWGZDWOTXQAEBTAYOHDMEWPLLDXHLWYQBOUVJFDPNKBLNMUFOWGVWHYCEUINQRKCAOKIJOOMHXDINUELZKPAEHSVMXRCTZMDYQOHBEYJFFGDXSANKUO");

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
    msg.setTimeStamp(0.628705089366);
    msg.setSource(22616U);
    msg.setSourceEntity(23U);
    msg.setDestination(36276U);
    msg.setDestinationEntity(148U);
    msg.op = 192U;
    msg.text.assign("EXNEFZYXKPSVYQNYYLKINGJMANHMOXZBHLVPMJAAYDDWMCTOYWVJVLOCCDSHEFSWLKQSVPASWXNKXRAGRXGLGUULUMRT");

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
    msg.setTimeStamp(0.0124026673482);
    msg.setSource(1486U);
    msg.setSourceEntity(134U);
    msg.setDestination(17915U);
    msg.setDestinationEntity(137U);
    msg.op = 16U;
    msg.time_remain = 0.746588932838;
    msg.sched_time = 0.495784325362;

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
    msg.setTimeStamp(0.142788397052);
    msg.setSource(34300U);
    msg.setSourceEntity(142U);
    msg.setDestination(34490U);
    msg.setDestinationEntity(22U);
    msg.op = 76U;
    msg.time_remain = 0.212103005338;
    msg.sched_time = 0.557517878997;

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
    msg.setTimeStamp(0.38850246333);
    msg.setSource(58416U);
    msg.setSourceEntity(52U);
    msg.setDestination(29842U);
    msg.setDestinationEntity(248U);
    msg.op = 229U;
    msg.time_remain = 0.402950917276;
    msg.sched_time = 0.952056247957;

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
    msg.setTimeStamp(0.444691819945);
    msg.setSource(32793U);
    msg.setSourceEntity(24U);
    msg.setDestination(43764U);
    msg.setDestinationEntity(18U);
    msg.name.assign("QMNDUVOHVZAIIPGPOFRHFKKSPSPYKZHPDJIGASTWKANYCWUCYOMLEZPEMJGWEGLVKXDZEJKILSHMLCYDETFRHLVFGWJJSFSOAJDHDQBXTNPCMHLUWRBIQKPNYZNLKOINAXDVOCRCMZJAQBBVZCSKCEFGYCTQFUTQPARXDAGRLXMZRREWGRINJZWMOBNQZOTBQIYSAITUUHJXEHUQXUGVFYOEATUTYCXWDMBGBBWLVV");
    msg.op = 144U;
    msg.sched_time = 0.630724307981;

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
    msg.setTimeStamp(0.722050932241);
    msg.setSource(23912U);
    msg.setSourceEntity(96U);
    msg.setDestination(14180U);
    msg.setDestinationEntity(37U);
    msg.name.assign("PNSZJNTMBDRPCLKLAKPXZFYBYYAMCOCPMFGTGCNIELKWWFOFOZQFUBMSYGSDNLUSGJVDXQVEDIGQCRTCDOTQPBZEPFSYIHOFWJRQZHIGMWTEBRWNBBHKEUMETTXWPDKHLDRQSCXDSRFSLCAXPJCTRYPNAEVGAJYXSKUAYSWVVUHWNVLBAZBUHGI");
    msg.op = 179U;
    msg.sched_time = 0.491523498792;

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
    msg.setTimeStamp(0.733551425982);
    msg.setSource(54397U);
    msg.setSourceEntity(216U);
    msg.setDestination(3682U);
    msg.setDestinationEntity(212U);
    msg.name.assign("QYIISTARSYHUOQCNKKRPGRATKJZTHZOTWUNQRGNXBNNLZOXZJOWQSD");
    msg.op = 129U;
    msg.sched_time = 0.285202955257;

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
    msg.setTimeStamp(0.634139012807);
    msg.setSource(46240U);
    msg.setSourceEntity(63U);
    msg.setDestination(29221U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.408291227226);
    msg.setSource(2393U);
    msg.setSourceEntity(206U);
    msg.setDestination(60697U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.93797566021);
    msg.setSource(6250U);
    msg.setSourceEntity(226U);
    msg.setDestination(36243U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.661380755301);
    msg.setSource(51601U);
    msg.setSourceEntity(107U);
    msg.setDestination(49178U);
    msg.setDestinationEntity(118U);
    msg.name.assign("WTUWTOKRIQTHAWJVGYRKXONZXZXDWPYGIVVHEFINZNRLWBDAFYNJOTIHTCUMGMLHJOLDMZIRWSLAVBMCPFUOKSMJAYWMIOUVCXCDSMLKJCQUCAREIVHBHBDHQXZEQKXYFTEVSGKRPBSKDAEZLBUDRRMJQXQCKUQZYXNGAEISGUTGZDZDCGOCVPVJBBTTJXWHDQUNYFKQSRBSFIEESPMKRWVNPZ");
    msg.state = 180U;

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
    msg.setTimeStamp(0.19970578446);
    msg.setSource(7954U);
    msg.setSourceEntity(135U);
    msg.setDestination(56711U);
    msg.setDestinationEntity(33U);
    msg.name.assign("IXHIHNETARZOJMFCPCRIVADZYYOLPFDHWXUXDDPVDWNTNJOJSVGFGIUTMCBPMYKFGWTEQBEZKXUNNSLGECOSXXZHJSVCUCCWONORHJBSACDBVDKWSZVIUTRHULJKZHUEZFBSMNYYWUGFRLQREYVALESQXPXOKRQLEWCHSHTCAGXBDPINYJQMJQUOIKLPBLNJQDEKTQAGTKTKGOABFKIFBRHFAZZMPSWMLVROMGYUPYTVWEJPIVZ");
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
    msg.setTimeStamp(0.546318560065);
    msg.setSource(8728U);
    msg.setSourceEntity(17U);
    msg.setDestination(45400U);
    msg.setDestinationEntity(57U);
    msg.name.assign("NQSYDHYMRPBIKKVFYOPKTTXBBJSFPEDHKOLOENOZBOFQSKWNFYRPLUMBHGEPQPWGEZWTISHZBVZGWDOSMVUXQICIPVCOVAULRDMYYWQXCUVIYMKGREJTANAVVYUKTSHGFMXLIFNJTXDZUWCQUQMUGZMPKFDAGMPOJDZWZDNEACLQVQWABTRIFTQADNCOXNALOXJHXGBLHNI");
    msg.state = 12U;

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
    msg.setTimeStamp(0.934855236482);
    msg.setSource(63061U);
    msg.setSourceEntity(123U);
    msg.setDestination(22508U);
    msg.setDestinationEntity(44U);
    msg.name.assign("XPBXPBGSYRBCTOJNKDVCDJXMHSDQBEIOJ");
    msg.value = 141U;

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
    msg.setTimeStamp(0.634982242768);
    msg.setSource(24746U);
    msg.setSourceEntity(86U);
    msg.setDestination(12122U);
    msg.setDestinationEntity(8U);
    msg.name.assign("HWEFJHNPJLCNEKOCDXDFFQFPTZGXYQJEREWFMKKIWRVVRQXLHFNTSZVUPXMXSTUYOWBAKLPOUCCKUIJOILWPLTVJCHXZKCJQHAHULMAIMGTYSJJTZDIEF");
    msg.value = 249U;

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
    msg.setTimeStamp(0.166909376477);
    msg.setSource(62372U);
    msg.setSourceEntity(168U);
    msg.setDestination(17703U);
    msg.setDestinationEntity(55U);
    msg.name.assign("GXDPTEOBCSWCSMSVGAYJMLCLHUKPQHPFXHRWVCZWTFMFKIBNDVQJQUBBWHQDMEEQACYYRIETTGVUMSNKZORAEEQGDYUJMOIROURJGEFZMPAVTGHJAUXGHIXGQBPXYBLOZNYUVTFYHDJGYWXKQRWDOKMBBLWKMQHAEKIJKCAIUSAZVBYNPZIQZLFILEXYDLJWNLOFJFTVFCPGCZAXZLDUJSDXHCRBISNRASWNVKPNOTPX");
    msg.value = 152U;

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
    msg.setTimeStamp(0.386956651959);
    msg.setSource(24187U);
    msg.setSourceEntity(132U);
    msg.setDestination(1062U);
    msg.setDestinationEntity(216U);
    msg.name.assign("GBMIERBVOSAWTFZHZJHSPRXIVSUOBDSWPTZPAMTTEANNRTCVVBQEYRLMAJQPZDWBDMGCQNRJACTQHQSIOQZVDRBAHWSGKKMCZEIXEBKKNRRJUVXJVVIZNNUUKZLDLAXUFYXGJMXDBATUNHOKGMHDCCYFWEFCWYBUYTKFQLOGPNBYQUVRXIMNAXPJSYOG");

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
    msg.setTimeStamp(0.619165216015);
    msg.setSource(11419U);
    msg.setSourceEntity(147U);
    msg.setDestination(25772U);
    msg.setDestinationEntity(16U);
    msg.name.assign("YKYQSOJQOPBJUIPQIJOXTNAQBSTTLFQKGXROOOPWKZEZAXWLAKWLWXUVCLSDWMLVOZKGKPVBHSQBBNYOXJCECPNETRCLDZRTLZQFDEHMGBCIULWDXJMPYFBNADICKUUVRNYYKRIFHBDVPZSYAGIPGYAIFJMUXEASHUDQFESHGTZWRRHVWODNWDGKJVBXYCJPKEFAIHGSEZ");

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
    msg.setTimeStamp(0.469991714391);
    msg.setSource(51455U);
    msg.setSourceEntity(254U);
    msg.setDestination(10128U);
    msg.setDestinationEntity(176U);
    msg.name.assign("SWNSDZESQUNVRXQTTFRNIXUPHWCKSDODBHUBGUYKJFVLBZDZTCYUOLVWOFAUULTMSYMKXKHOXMEIIFPVIP");

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
    msg.setTimeStamp(0.791788750723);
    msg.setSource(40805U);
    msg.setSourceEntity(161U);
    msg.setDestination(54349U);
    msg.setDestinationEntity(242U);
    msg.name.assign("XDSTLVIQCMUGCBYTPYPTVRRPIWOIPYTBXBTXXHAFXVWFKWUREGVRSUX");
    msg.value = 140U;

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
    msg.setTimeStamp(0.257195337115);
    msg.setSource(23398U);
    msg.setSourceEntity(92U);
    msg.setDestination(5610U);
    msg.setDestinationEntity(160U);
    msg.name.assign("ILIAWAKBGAVELKNVSAROKFIAWVFPFEBYOASCDIHNWAXFKVODQMSKYUZJDADXLLKJEWXZUQPSTFPULKTBTYWZNJDJMVKHMNTUDI");
    msg.value = 78U;

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
    msg.setTimeStamp(0.202157987774);
    msg.setSource(41384U);
    msg.setSourceEntity(80U);
    msg.setDestination(4420U);
    msg.setDestinationEntity(105U);
    msg.name.assign("AVSGMHODBKVROKSPMJXNCICKFBUDSDQWVZDWQGPNWRUZLYSZUYWR");
    msg.value = 81U;

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
    msg.setTimeStamp(0.692023514057);
    msg.setSource(6641U);
    msg.setSourceEntity(77U);
    msg.setDestination(35261U);
    msg.setDestinationEntity(39U);
    msg.id = 204U;
    msg.period = 158806236U;
    msg.duty_cycle = 2281363762U;

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
    msg.setTimeStamp(0.202706576447);
    msg.setSource(34587U);
    msg.setSourceEntity(3U);
    msg.setDestination(14054U);
    msg.setDestinationEntity(177U);
    msg.id = 186U;
    msg.period = 1079719932U;
    msg.duty_cycle = 957819961U;

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
    msg.setTimeStamp(0.507043716901);
    msg.setSource(44977U);
    msg.setSourceEntity(157U);
    msg.setDestination(62312U);
    msg.setDestinationEntity(172U);
    msg.id = 205U;
    msg.period = 3059384085U;
    msg.duty_cycle = 3670067796U;

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
    msg.setTimeStamp(0.548377058444);
    msg.setSource(42260U);
    msg.setSourceEntity(35U);
    msg.setDestination(29920U);
    msg.setDestinationEntity(33U);
    msg.id = 153U;
    msg.period = 1806069820U;
    msg.duty_cycle = 4007406610U;

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
    msg.setTimeStamp(0.108303803323);
    msg.setSource(9175U);
    msg.setSourceEntity(52U);
    msg.setDestination(44609U);
    msg.setDestinationEntity(154U);
    msg.id = 247U;
    msg.period = 1081308214U;
    msg.duty_cycle = 622482017U;

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
    msg.setTimeStamp(0.647948490113);
    msg.setSource(24802U);
    msg.setSourceEntity(198U);
    msg.setDestination(29174U);
    msg.setDestinationEntity(174U);
    msg.id = 40U;
    msg.period = 2238467738U;
    msg.duty_cycle = 3217192600U;

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
    msg.setTimeStamp(0.955184319352);
    msg.setSource(50796U);
    msg.setSourceEntity(148U);
    msg.setDestination(57570U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.448390102163;
    msg.lon = 0.294327670252;
    msg.height = 0.788084811799;
    msg.x = 0.691699669558;
    msg.y = 0.582257309598;
    msg.z = 0.331292134728;
    msg.phi = 0.972204189828;
    msg.theta = 0.770565568283;
    msg.psi = 0.351368842998;
    msg.u = 0.517195496706;
    msg.v = 0.434092179541;
    msg.w = 0.998126630073;
    msg.vx = 0.965747261645;
    msg.vy = 0.63393954782;
    msg.vz = 0.556797505182;
    msg.p = 0.555662194987;
    msg.q = 0.28708314568;
    msg.r = 0.470335239006;
    msg.depth = 0.193989499749;
    msg.alt = 0.0230415148329;

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
    msg.setTimeStamp(0.506012181343);
    msg.setSource(33934U);
    msg.setSourceEntity(128U);
    msg.setDestination(13936U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.862061857614;
    msg.lon = 0.595459750737;
    msg.height = 0.328008867735;
    msg.x = 0.127819074178;
    msg.y = 0.555577751921;
    msg.z = 0.766236179839;
    msg.phi = 0.218790139202;
    msg.theta = 0.992821991488;
    msg.psi = 0.58412145084;
    msg.u = 0.742291093133;
    msg.v = 0.393170919375;
    msg.w = 0.187379556627;
    msg.vx = 0.505681184715;
    msg.vy = 0.680216746724;
    msg.vz = 0.982818599565;
    msg.p = 0.816785040293;
    msg.q = 0.766404458889;
    msg.r = 0.89221499024;
    msg.depth = 0.746536649984;
    msg.alt = 0.728728678581;

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
    msg.setTimeStamp(0.754636397558);
    msg.setSource(1462U);
    msg.setSourceEntity(169U);
    msg.setDestination(45616U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.501103298549;
    msg.lon = 0.144491159782;
    msg.height = 0.178261542813;
    msg.x = 0.208467802639;
    msg.y = 0.163050240613;
    msg.z = 0.7378340007;
    msg.phi = 0.523682809341;
    msg.theta = 0.701320160973;
    msg.psi = 0.0758841709599;
    msg.u = 0.445711163295;
    msg.v = 0.470159111669;
    msg.w = 0.0769872170535;
    msg.vx = 0.496179781686;
    msg.vy = 0.927039309367;
    msg.vz = 0.3172051599;
    msg.p = 0.793545177888;
    msg.q = 0.88116371908;
    msg.r = 0.958231263913;
    msg.depth = 0.567568946185;
    msg.alt = 0.394523056611;

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
    msg.setTimeStamp(0.142347343685);
    msg.setSource(20703U);
    msg.setSourceEntity(112U);
    msg.setDestination(43001U);
    msg.setDestinationEntity(81U);
    msg.x = 0.45543835845;
    msg.y = 0.98251469256;
    msg.z = 0.972122475787;

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
    msg.setTimeStamp(0.293824171365);
    msg.setSource(2885U);
    msg.setSourceEntity(67U);
    msg.setDestination(7390U);
    msg.setDestinationEntity(231U);
    msg.x = 0.981232115129;
    msg.y = 0.495597701717;
    msg.z = 0.394506499815;

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
    msg.setTimeStamp(0.517136079048);
    msg.setSource(30895U);
    msg.setSourceEntity(174U);
    msg.setDestination(27186U);
    msg.setDestinationEntity(216U);
    msg.x = 0.78858851728;
    msg.y = 0.884291333298;
    msg.z = 0.897137126328;

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
    msg.setTimeStamp(0.985898625249);
    msg.setSource(13555U);
    msg.setSourceEntity(17U);
    msg.setDestination(52788U);
    msg.setDestinationEntity(46U);
    msg.value = 0.132223530549;

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
    msg.setTimeStamp(0.662721403718);
    msg.setSource(13526U);
    msg.setSourceEntity(193U);
    msg.setDestination(34272U);
    msg.setDestinationEntity(25U);
    msg.value = 0.00113006734968;

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
    msg.setTimeStamp(0.347692964687);
    msg.setSource(39290U);
    msg.setSourceEntity(139U);
    msg.setDestination(58171U);
    msg.setDestinationEntity(240U);
    msg.value = 0.390160276051;

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
    msg.setTimeStamp(0.90830321947);
    msg.setSource(29812U);
    msg.setSourceEntity(127U);
    msg.setDestination(22163U);
    msg.setDestinationEntity(104U);
    msg.value = 0.773998166248;

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
    msg.setTimeStamp(0.53461494538);
    msg.setSource(40900U);
    msg.setSourceEntity(57U);
    msg.setDestination(13467U);
    msg.setDestinationEntity(108U);
    msg.value = 0.872788186289;

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
    msg.setTimeStamp(0.474376053094);
    msg.setSource(35726U);
    msg.setSourceEntity(185U);
    msg.setDestination(18449U);
    msg.setDestinationEntity(41U);
    msg.value = 0.503812526663;

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
    msg.setTimeStamp(0.892649834579);
    msg.setSource(51425U);
    msg.setSourceEntity(25U);
    msg.setDestination(3477U);
    msg.setDestinationEntity(72U);
    msg.x = 0.948113343119;
    msg.y = 0.495528927987;
    msg.z = 0.696373636798;
    msg.phi = 0.700961823189;
    msg.theta = 0.954493557163;
    msg.psi = 0.355928940383;
    msg.p = 0.922856074098;
    msg.q = 0.334672993824;
    msg.r = 0.121989032595;
    msg.u = 0.73395190546;
    msg.v = 0.59685119622;
    msg.w = 0.326320914456;
    msg.bias_psi = 0.554965433399;
    msg.bias_r = 0.245547030871;

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
    msg.setTimeStamp(0.139799587379);
    msg.setSource(19596U);
    msg.setSourceEntity(146U);
    msg.setDestination(58811U);
    msg.setDestinationEntity(41U);
    msg.x = 0.712064876373;
    msg.y = 0.529818392101;
    msg.z = 0.625384611569;
    msg.phi = 0.747587643513;
    msg.theta = 0.706844130102;
    msg.psi = 0.869491132244;
    msg.p = 0.783549970294;
    msg.q = 0.723436288239;
    msg.r = 0.793931698198;
    msg.u = 0.836474490987;
    msg.v = 0.0404789005661;
    msg.w = 0.921285386595;
    msg.bias_psi = 0.671163236475;
    msg.bias_r = 0.922439642598;

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
    msg.setTimeStamp(0.966439972684);
    msg.setSource(38031U);
    msg.setSourceEntity(160U);
    msg.setDestination(13103U);
    msg.setDestinationEntity(135U);
    msg.x = 0.388633141086;
    msg.y = 0.181181647155;
    msg.z = 0.314206797024;
    msg.phi = 0.321986981629;
    msg.theta = 0.515749010992;
    msg.psi = 0.38397948649;
    msg.p = 0.366679593906;
    msg.q = 0.553096706408;
    msg.r = 0.18869973851;
    msg.u = 0.610548566148;
    msg.v = 0.295464541532;
    msg.w = 0.668621900936;
    msg.bias_psi = 0.308837828558;
    msg.bias_r = 0.412800593723;

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
    msg.setTimeStamp(0.56162304333);
    msg.setSource(11561U);
    msg.setSourceEntity(176U);
    msg.setDestination(15812U);
    msg.setDestinationEntity(100U);
    msg.bias_psi = 0.0568098792723;
    msg.bias_r = 0.79435665089;
    msg.cog = 0.829009000875;
    msg.cyaw = 0.367778760228;
    msg.gps_rej_level = 0.589142027894;
    msg.lbl_rej_level = 0.878296741693;
    msg.custom_x = 0.135845523461;
    msg.custom_y = 0.43294237293;
    msg.custom_z = 0.624400871642;

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
    msg.setTimeStamp(0.032106174766);
    msg.setSource(9743U);
    msg.setSourceEntity(199U);
    msg.setDestination(17818U);
    msg.setDestinationEntity(204U);
    msg.bias_psi = 0.301585821847;
    msg.bias_r = 0.783406575464;
    msg.cog = 0.139741939899;
    msg.cyaw = 0.304039014742;
    msg.gps_rej_level = 0.25663982193;
    msg.lbl_rej_level = 0.641256299491;
    msg.custom_x = 0.603614683542;
    msg.custom_y = 0.397666481985;
    msg.custom_z = 0.802101483859;

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
    msg.setTimeStamp(0.240444763474);
    msg.setSource(19631U);
    msg.setSourceEntity(94U);
    msg.setDestination(60375U);
    msg.setDestinationEntity(2U);
    msg.bias_psi = 0.153392924221;
    msg.bias_r = 0.220261141565;
    msg.cog = 0.56508797219;
    msg.cyaw = 0.179559124298;
    msg.gps_rej_level = 0.695814353107;
    msg.lbl_rej_level = 0.931719071398;
    msg.custom_x = 0.646904765385;
    msg.custom_y = 0.869610455817;
    msg.custom_z = 0.712784197605;

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
    msg.setTimeStamp(0.498354636744);
    msg.setSource(25778U);
    msg.setSourceEntity(31U);
    msg.setDestination(16808U);
    msg.setDestinationEntity(158U);
    msg.utc_time = 0.539840632625;
    msg.reason = 161U;

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
    msg.setTimeStamp(0.385195491349);
    msg.setSource(8883U);
    msg.setSourceEntity(226U);
    msg.setDestination(12070U);
    msg.setDestinationEntity(148U);
    msg.utc_time = 0.513049426935;
    msg.reason = 48U;

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
    msg.setTimeStamp(0.196034274586);
    msg.setSource(1607U);
    msg.setSourceEntity(233U);
    msg.setDestination(6176U);
    msg.setDestinationEntity(54U);
    msg.utc_time = 0.36077434443;
    msg.reason = 211U;

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
    msg.setTimeStamp(0.72588712083);
    msg.setSource(14676U);
    msg.setSourceEntity(22U);
    msg.setDestination(12756U);
    msg.setDestinationEntity(145U);
    msg.id = 174U;
    msg.range = 0.83924289512;
    msg.acceptance = 21U;

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
    msg.setTimeStamp(0.709490188491);
    msg.setSource(43670U);
    msg.setSourceEntity(240U);
    msg.setDestination(471U);
    msg.setDestinationEntity(52U);
    msg.id = 140U;
    msg.range = 0.575186503006;
    msg.acceptance = 128U;

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
    msg.setTimeStamp(0.0983049610556);
    msg.setSource(5284U);
    msg.setSourceEntity(26U);
    msg.setDestination(22470U);
    msg.setDestinationEntity(62U);
    msg.id = 66U;
    msg.range = 0.149053835442;
    msg.acceptance = 56U;

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
    msg.setTimeStamp(0.263242262738);
    msg.setSource(54629U);
    msg.setSourceEntity(74U);
    msg.setDestination(30576U);
    msg.setDestinationEntity(53U);
    msg.type = 175U;
    msg.reason = 118U;
    msg.value = 0.0462120532205;
    msg.timestep = 0.353312142279;

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
    msg.setTimeStamp(0.405169811208);
    msg.setSource(57536U);
    msg.setSourceEntity(215U);
    msg.setDestination(2458U);
    msg.setDestinationEntity(92U);
    msg.type = 243U;
    msg.reason = 208U;
    msg.value = 0.305671105477;
    msg.timestep = 0.974782346941;

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
    msg.setTimeStamp(0.614222543671);
    msg.setSource(4299U);
    msg.setSourceEntity(104U);
    msg.setDestination(24735U);
    msg.setDestinationEntity(35U);
    msg.type = 144U;
    msg.reason = 111U;
    msg.value = 0.77834015933;
    msg.timestep = 0.780777628284;

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
    msg.setTimeStamp(0.750460326658);
    msg.setSource(5987U);
    msg.setSourceEntity(65U);
    msg.setDestination(6220U);
    msg.setDestinationEntity(115U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ADANEPAKTOZXVKLYJMFQSQLMOQOUWDDHUGUUPCUSIWLHQIYAPKCI");
    tmp_msg_0.lat = 0.193163593379;
    tmp_msg_0.lon = 0.812349957579;
    tmp_msg_0.depth = 0.238296873479;
    tmp_msg_0.query_channel = 137U;
    tmp_msg_0.reply_channel = 53U;
    tmp_msg_0.transponder_delay = 134U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.104961166799;
    msg.y = 0.335154951403;
    msg.var_x = 0.382159551027;
    msg.var_y = 0.228567907392;
    msg.distance = 0.372073007713;

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
    msg.setTimeStamp(0.62681991304);
    msg.setSource(38420U);
    msg.setSourceEntity(119U);
    msg.setDestination(62433U);
    msg.setDestinationEntity(194U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VUIGOIUWWESOLUNMBEVHOFCWTWQUKLAVEYMSFHHPNOXXNLLDEVDBCFFMDBSQOGAYWRPCCPZZULHFOGRHGXBRBJZRSFRPIQCHGQFKXYJGETXEBYXAMVQYTSZETQDLSLPKIVIDCRMRWXBDAUKDZDKSDBZUIYJJCPXMMTHCAXNFKCUGJSHWTFL");
    tmp_msg_0.lat = 0.0340455654758;
    tmp_msg_0.lon = 0.291152037079;
    tmp_msg_0.depth = 0.601269156373;
    tmp_msg_0.query_channel = 228U;
    tmp_msg_0.reply_channel = 78U;
    tmp_msg_0.transponder_delay = 13U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.29906549626;
    msg.y = 0.0296123919023;
    msg.var_x = 0.324688517403;
    msg.var_y = 0.19042971812;
    msg.distance = 0.189474592269;

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
    msg.setTimeStamp(0.23148907527);
    msg.setSource(42521U);
    msg.setSourceEntity(17U);
    msg.setDestination(62350U);
    msg.setDestinationEntity(83U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PXSGJQTOQARJSNVTNMVNKLDWUMWGPSIDMXERVLQXPKZTUERXCIOQLYHHPXULQDREBMUYJBKGODKBILMVAFACXTUIAVKZNOFLWUQUPDGEMSNRXAZHJGHMFGZGRWSTUASLPWIOJCCRNYBSZJLDHFXIAKYEKFZWHIOECVATOKJGDNKZZTFFADPMNTEHJFYJYLOQUCYXJQSHS");
    tmp_msg_0.lat = 0.310985085;
    tmp_msg_0.lon = 0.924383565259;
    tmp_msg_0.depth = 0.112437377181;
    tmp_msg_0.query_channel = 87U;
    tmp_msg_0.reply_channel = 171U;
    tmp_msg_0.transponder_delay = 70U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.999555039283;
    msg.y = 0.996612686984;
    msg.var_x = 0.677853735617;
    msg.var_y = 0.45496325858;
    msg.distance = 0.393423086832;

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
    msg.setTimeStamp(0.476711320363);
    msg.setSource(57515U);
    msg.setSourceEntity(167U);
    msg.setDestination(38666U);
    msg.setDestinationEntity(158U);
    msg.state = 110U;

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
    msg.setTimeStamp(0.339616467567);
    msg.setSource(21112U);
    msg.setSourceEntity(187U);
    msg.setDestination(30896U);
    msg.setDestinationEntity(184U);
    msg.state = 233U;

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
    msg.setTimeStamp(0.0119116368991);
    msg.setSource(33960U);
    msg.setSourceEntity(178U);
    msg.setDestination(51919U);
    msg.setDestinationEntity(104U);
    msg.state = 64U;

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
    msg.setTimeStamp(0.0504083896113);
    msg.setSource(31028U);
    msg.setSourceEntity(101U);
    msg.setDestination(49565U);
    msg.setDestinationEntity(126U);
    msg.x = 0.176051810601;
    msg.y = 0.861558379645;
    msg.z = 0.572655859364;

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
    msg.setTimeStamp(0.454980620565);
    msg.setSource(19685U);
    msg.setSourceEntity(214U);
    msg.setDestination(21291U);
    msg.setDestinationEntity(237U);
    msg.x = 0.0449891662306;
    msg.y = 0.395422011385;
    msg.z = 0.683269218142;

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
    msg.setTimeStamp(0.750255128644);
    msg.setSource(54741U);
    msg.setSourceEntity(133U);
    msg.setDestination(3679U);
    msg.setDestinationEntity(81U);
    msg.x = 0.0854388937584;
    msg.y = 0.157920799908;
    msg.z = 0.440677441369;

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
    msg.setTimeStamp(0.75105054069);
    msg.setSource(18492U);
    msg.setSourceEntity(192U);
    msg.setDestination(60846U);
    msg.setDestinationEntity(136U);
    msg.va = 0.608232765738;
    msg.aoa = 0.0193983487505;
    msg.ssa = 0.446051961801;

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
    msg.setTimeStamp(0.961058117501);
    msg.setSource(48999U);
    msg.setSourceEntity(170U);
    msg.setDestination(54015U);
    msg.setDestinationEntity(67U);
    msg.va = 0.664311664627;
    msg.aoa = 0.806395924795;
    msg.ssa = 0.00411290261169;

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
    msg.setTimeStamp(0.770826633866);
    msg.setSource(41861U);
    msg.setSourceEntity(22U);
    msg.setDestination(51151U);
    msg.setDestinationEntity(157U);
    msg.va = 0.321586952601;
    msg.aoa = 0.459491708689;
    msg.ssa = 0.0527572586807;

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
    msg.setTimeStamp(0.54953314556);
    msg.setSource(62693U);
    msg.setSourceEntity(150U);
    msg.setDestination(17735U);
    msg.setDestinationEntity(102U);
    msg.value = 0.57052684674;
    msg.off = 0.271406476822;

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
    msg.setTimeStamp(0.917930961551);
    msg.setSource(7069U);
    msg.setSourceEntity(170U);
    msg.setDestination(39988U);
    msg.setDestinationEntity(218U);
    msg.value = 0.332135626374;
    msg.off = 0.977285011677;

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
    msg.setTimeStamp(0.343649077041);
    msg.setSource(18005U);
    msg.setSourceEntity(161U);
    msg.setDestination(17092U);
    msg.setDestinationEntity(248U);
    msg.value = 0.313549272083;
    msg.off = 0.13986581106;

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
    msg.setTimeStamp(0.826286250568);
    msg.setSource(9370U);
    msg.setSourceEntity(218U);
    msg.setDestination(53520U);
    msg.setDestinationEntity(108U);
    msg.value = 0.0407937831543;
    msg.z_units = 180U;

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
    msg.setTimeStamp(0.499067995362);
    msg.setSource(59785U);
    msg.setSourceEntity(114U);
    msg.setDestination(59784U);
    msg.setDestinationEntity(149U);
    msg.value = 0.591601342666;
    msg.z_units = 174U;

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
    msg.setTimeStamp(0.949016260339);
    msg.setSource(7727U);
    msg.setSourceEntity(218U);
    msg.setDestination(3027U);
    msg.setDestinationEntity(110U);
    msg.value = 0.212719201669;
    msg.z_units = 200U;

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
    msg.setTimeStamp(0.378516851158);
    msg.setSource(9901U);
    msg.setSourceEntity(47U);
    msg.setDestination(48979U);
    msg.setDestinationEntity(126U);
    msg.value = 0.574120458581;
    msg.speed_units = 252U;

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
    msg.setTimeStamp(0.899544728899);
    msg.setSource(9781U);
    msg.setSourceEntity(248U);
    msg.setDestination(50336U);
    msg.setDestinationEntity(207U);
    msg.value = 0.0932864572088;
    msg.speed_units = 51U;

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
    msg.setTimeStamp(0.0541326607915);
    msg.setSource(18154U);
    msg.setSourceEntity(150U);
    msg.setDestination(62194U);
    msg.setDestinationEntity(16U);
    msg.value = 0.182960829001;
    msg.speed_units = 135U;

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
    msg.setTimeStamp(0.410965706255);
    msg.setSource(16942U);
    msg.setSourceEntity(170U);
    msg.setDestination(28259U);
    msg.setDestinationEntity(158U);
    msg.value = 0.77585228542;

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
    msg.setTimeStamp(0.0709813405099);
    msg.setSource(50148U);
    msg.setSourceEntity(232U);
    msg.setDestination(51743U);
    msg.setDestinationEntity(75U);
    msg.value = 0.0634276918084;

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
    msg.setTimeStamp(0.40159177214);
    msg.setSource(45529U);
    msg.setSourceEntity(69U);
    msg.setDestination(29128U);
    msg.setDestinationEntity(155U);
    msg.value = 0.794643822974;

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
    msg.setTimeStamp(0.140324065076);
    msg.setSource(1363U);
    msg.setSourceEntity(44U);
    msg.setDestination(20751U);
    msg.setDestinationEntity(230U);
    msg.value = 0.107944058547;

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
    msg.setTimeStamp(0.178364869131);
    msg.setSource(47211U);
    msg.setSourceEntity(163U);
    msg.setDestination(6184U);
    msg.setDestinationEntity(177U);
    msg.value = 0.244889625765;

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
    msg.setTimeStamp(0.698428573103);
    msg.setSource(20034U);
    msg.setSourceEntity(179U);
    msg.setDestination(4662U);
    msg.setDestinationEntity(84U);
    msg.value = 0.748963412178;

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
    msg.setTimeStamp(0.224289815588);
    msg.setSource(41516U);
    msg.setSourceEntity(141U);
    msg.setDestination(31024U);
    msg.setDestinationEntity(230U);
    msg.value = 0.222959241623;

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
    msg.setTimeStamp(0.788026962435);
    msg.setSource(59763U);
    msg.setSourceEntity(99U);
    msg.setDestination(30414U);
    msg.setDestinationEntity(18U);
    msg.value = 0.160528278686;

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
    msg.setTimeStamp(0.0539927304147);
    msg.setSource(28688U);
    msg.setSourceEntity(91U);
    msg.setDestination(55233U);
    msg.setDestinationEntity(76U);
    msg.value = 0.847497578328;

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
    msg.setTimeStamp(0.482401416362);
    msg.setSource(4384U);
    msg.setSourceEntity(3U);
    msg.setDestination(10894U);
    msg.setDestinationEntity(44U);
    msg.path_ref = 3965708666U;
    msg.start_lat = 0.124068852956;
    msg.start_lon = 0.197656517122;
    msg.start_z = 0.893702533678;
    msg.start_z_units = 244U;
    msg.end_lat = 0.828397923622;
    msg.end_lon = 0.803602991196;
    msg.end_z = 0.160318601995;
    msg.end_z_units = 188U;
    msg.speed = 0.505789877679;
    msg.speed_units = 143U;
    msg.lradius = 0.703476236673;
    msg.flags = 32U;

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
    msg.setTimeStamp(0.350088312656);
    msg.setSource(3178U);
    msg.setSourceEntity(82U);
    msg.setDestination(60210U);
    msg.setDestinationEntity(65U);
    msg.path_ref = 3502637543U;
    msg.start_lat = 0.625239204288;
    msg.start_lon = 0.7760936921;
    msg.start_z = 0.402536461932;
    msg.start_z_units = 115U;
    msg.end_lat = 0.581094367414;
    msg.end_lon = 0.886190888741;
    msg.end_z = 0.969071139161;
    msg.end_z_units = 200U;
    msg.speed = 0.258120460183;
    msg.speed_units = 58U;
    msg.lradius = 0.175084611069;
    msg.flags = 93U;

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
    msg.setTimeStamp(0.00831910574752);
    msg.setSource(47267U);
    msg.setSourceEntity(187U);
    msg.setDestination(1629U);
    msg.setDestinationEntity(11U);
    msg.path_ref = 1927230373U;
    msg.start_lat = 0.105002824341;
    msg.start_lon = 0.789445093178;
    msg.start_z = 0.690942120285;
    msg.start_z_units = 166U;
    msg.end_lat = 0.211654128541;
    msg.end_lon = 0.636172948553;
    msg.end_z = 0.362278492635;
    msg.end_z_units = 73U;
    msg.speed = 0.875365888824;
    msg.speed_units = 180U;
    msg.lradius = 0.801870192949;
    msg.flags = 181U;

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
    msg.setTimeStamp(0.606766786848);
    msg.setSource(44679U);
    msg.setSourceEntity(16U);
    msg.setDestination(1824U);
    msg.setDestinationEntity(28U);
    msg.x = 0.264547554553;
    msg.y = 0.105766607085;
    msg.z = 0.691667423363;
    msg.k = 0.217212793358;
    msg.m = 0.444842619312;
    msg.n = 0.630366530308;
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
    msg.setTimeStamp(0.464206776633);
    msg.setSource(25781U);
    msg.setSourceEntity(198U);
    msg.setDestination(50695U);
    msg.setDestinationEntity(178U);
    msg.x = 0.428068932865;
    msg.y = 0.0560468320559;
    msg.z = 0.493468696562;
    msg.k = 0.809343663098;
    msg.m = 0.30935877748;
    msg.n = 0.116686742783;
    msg.flags = 65U;

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
    msg.setTimeStamp(0.760408454033);
    msg.setSource(14649U);
    msg.setSourceEntity(120U);
    msg.setDestination(34889U);
    msg.setDestinationEntity(48U);
    msg.x = 0.87958077336;
    msg.y = 0.0718379200109;
    msg.z = 0.564374624662;
    msg.k = 0.501290337009;
    msg.m = 0.874391339421;
    msg.n = 0.777006543732;
    msg.flags = 130U;

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
    msg.setTimeStamp(0.0923757598469);
    msg.setSource(19177U);
    msg.setSourceEntity(194U);
    msg.setDestination(51929U);
    msg.setDestinationEntity(63U);
    msg.value = 0.784972265762;

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
    msg.setTimeStamp(0.177384301679);
    msg.setSource(51952U);
    msg.setSourceEntity(137U);
    msg.setDestination(63383U);
    msg.setDestinationEntity(205U);
    msg.value = 0.927239329659;

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
    msg.setTimeStamp(0.538279143288);
    msg.setSource(8569U);
    msg.setSourceEntity(126U);
    msg.setDestination(19532U);
    msg.setDestinationEntity(253U);
    msg.value = 0.497789212201;

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
    msg.setTimeStamp(0.0649743519641);
    msg.setSource(28495U);
    msg.setSourceEntity(13U);
    msg.setDestination(4843U);
    msg.setDestinationEntity(172U);
    msg.u = 0.00744063229622;
    msg.v = 0.675885692538;
    msg.w = 0.932744089043;
    msg.p = 0.988014354139;
    msg.q = 0.626453699625;
    msg.r = 0.433020658985;
    msg.flags = 119U;

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
    msg.setTimeStamp(0.0410896866431);
    msg.setSource(11277U);
    msg.setSourceEntity(105U);
    msg.setDestination(21375U);
    msg.setDestinationEntity(66U);
    msg.u = 0.789439749949;
    msg.v = 0.0304998359813;
    msg.w = 0.368831593083;
    msg.p = 0.0550652205596;
    msg.q = 0.863772407401;
    msg.r = 0.251957181783;
    msg.flags = 226U;

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
    msg.setTimeStamp(0.378916466958);
    msg.setSource(37281U);
    msg.setSourceEntity(10U);
    msg.setDestination(43778U);
    msg.setDestinationEntity(81U);
    msg.u = 0.0200497705822;
    msg.v = 0.88743007178;
    msg.w = 0.220413814741;
    msg.p = 0.41974668092;
    msg.q = 0.28718686581;
    msg.r = 0.46515633175;
    msg.flags = 247U;

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
    msg.setTimeStamp(0.614061991884);
    msg.setSource(14482U);
    msg.setSourceEntity(16U);
    msg.setDestination(44421U);
    msg.setDestinationEntity(253U);
    msg.path_ref = 1319349291U;
    msg.start_lat = 0.406651730797;
    msg.start_lon = 0.211780567594;
    msg.start_z = 0.141490968645;
    msg.start_z_units = 206U;
    msg.end_lat = 0.66118356751;
    msg.end_lon = 0.346126905709;
    msg.end_z = 0.202700817332;
    msg.end_z_units = 132U;
    msg.lradius = 0.11526868324;
    msg.flags = 221U;
    msg.x = 0.468984798093;
    msg.y = 0.830358359755;
    msg.z = 0.399172508174;
    msg.vx = 0.0336146193832;
    msg.vy = 0.87144977196;
    msg.vz = 0.803781634482;
    msg.course_error = 0.677124572918;
    msg.eta = 25799U;

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
    msg.setTimeStamp(0.429315115259);
    msg.setSource(39287U);
    msg.setSourceEntity(30U);
    msg.setDestination(45207U);
    msg.setDestinationEntity(2U);
    msg.path_ref = 3657116911U;
    msg.start_lat = 0.344377109445;
    msg.start_lon = 0.552327285133;
    msg.start_z = 0.988532471661;
    msg.start_z_units = 172U;
    msg.end_lat = 0.147255880106;
    msg.end_lon = 0.378833589881;
    msg.end_z = 0.417054343195;
    msg.end_z_units = 107U;
    msg.lradius = 0.662893628814;
    msg.flags = 26U;
    msg.x = 0.705674364523;
    msg.y = 0.414840378607;
    msg.z = 0.159811432108;
    msg.vx = 0.255377982963;
    msg.vy = 0.758621351643;
    msg.vz = 0.871821716599;
    msg.course_error = 0.886946659617;
    msg.eta = 60833U;

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
    msg.setTimeStamp(0.812430667394);
    msg.setSource(20892U);
    msg.setSourceEntity(251U);
    msg.setDestination(23313U);
    msg.setDestinationEntity(50U);
    msg.path_ref = 3575092044U;
    msg.start_lat = 0.918826465165;
    msg.start_lon = 0.0838900427088;
    msg.start_z = 0.844627536762;
    msg.start_z_units = 63U;
    msg.end_lat = 0.960148073095;
    msg.end_lon = 0.997576491781;
    msg.end_z = 0.799172719292;
    msg.end_z_units = 112U;
    msg.lradius = 0.431791914507;
    msg.flags = 50U;
    msg.x = 0.0096648331821;
    msg.y = 0.730774689921;
    msg.z = 0.956277461465;
    msg.vx = 0.635539312443;
    msg.vy = 0.876484687264;
    msg.vz = 0.68093846998;
    msg.course_error = 0.84852247968;
    msg.eta = 20992U;

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
    msg.setTimeStamp(0.42119879168);
    msg.setSource(35020U);
    msg.setSourceEntity(40U);
    msg.setDestination(44765U);
    msg.setDestinationEntity(48U);
    msg.k = 0.913718581334;
    msg.m = 0.783660449736;
    msg.n = 0.594642686817;

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
    msg.setTimeStamp(0.191657803112);
    msg.setSource(45558U);
    msg.setSourceEntity(158U);
    msg.setDestination(57582U);
    msg.setDestinationEntity(191U);
    msg.k = 0.238637246901;
    msg.m = 0.338446563216;
    msg.n = 0.770276151739;

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
    msg.setTimeStamp(0.299434615827);
    msg.setSource(5741U);
    msg.setSourceEntity(178U);
    msg.setDestination(43096U);
    msg.setDestinationEntity(26U);
    msg.k = 0.589764478629;
    msg.m = 0.85145617589;
    msg.n = 0.410173907911;

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
    msg.setTimeStamp(0.969909626188);
    msg.setSource(52056U);
    msg.setSourceEntity(153U);
    msg.setDestination(54350U);
    msg.setDestinationEntity(86U);
    msg.p = 0.197390956547;
    msg.i = 0.829233371021;
    msg.d = 0.18068501;
    msg.a = 0.476022066074;

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
    msg.setTimeStamp(0.584056749772);
    msg.setSource(54979U);
    msg.setSourceEntity(179U);
    msg.setDestination(22878U);
    msg.setDestinationEntity(160U);
    msg.p = 0.33937011631;
    msg.i = 0.921784396006;
    msg.d = 0.257186215097;
    msg.a = 0.901039609159;

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
    msg.setTimeStamp(0.994990225785);
    msg.setSource(32245U);
    msg.setSourceEntity(27U);
    msg.setDestination(47686U);
    msg.setDestinationEntity(5U);
    msg.p = 0.305795044016;
    msg.i = 0.700766259842;
    msg.d = 0.349457113983;
    msg.a = 0.314766515868;

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
    msg.setTimeStamp(0.916273234131);
    msg.setSource(23819U);
    msg.setSourceEntity(119U);
    msg.setDestination(28663U);
    msg.setDestinationEntity(129U);
    msg.op = 157U;

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
    msg.setTimeStamp(0.558363986418);
    msg.setSource(30283U);
    msg.setSourceEntity(23U);
    msg.setDestination(38280U);
    msg.setDestinationEntity(69U);
    msg.op = 250U;

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
    msg.setTimeStamp(0.660518317023);
    msg.setSource(32944U);
    msg.setSourceEntity(148U);
    msg.setDestination(47853U);
    msg.setDestinationEntity(152U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.301156549621);
    msg.setSource(32065U);
    msg.setSourceEntity(201U);
    msg.setDestination(45607U);
    msg.setDestinationEntity(55U);
    msg.x = 0.451715879355;
    msg.y = 0.57371033715;
    msg.z = 0.864894779929;
    msg.vx = 0.380223454938;
    msg.vy = 0.106234559079;
    msg.vz = 0.638561095731;
    msg.ax = 0.185651686795;
    msg.ay = 0.270568505264;
    msg.az = 0.782145779756;
    msg.flags = 20341U;

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
    msg.setTimeStamp(0.319195191108);
    msg.setSource(63095U);
    msg.setSourceEntity(183U);
    msg.setDestination(33139U);
    msg.setDestinationEntity(54U);
    msg.x = 0.568887392902;
    msg.y = 0.723760520924;
    msg.z = 0.894643194722;
    msg.vx = 0.342722322719;
    msg.vy = 0.659255988618;
    msg.vz = 0.736058182037;
    msg.ax = 0.984137403086;
    msg.ay = 0.560107695819;
    msg.az = 0.547485034423;
    msg.flags = 13164U;

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
    msg.setTimeStamp(0.844198289903);
    msg.setSource(12256U);
    msg.setSourceEntity(114U);
    msg.setDestination(571U);
    msg.setDestinationEntity(134U);
    msg.x = 0.37582118935;
    msg.y = 0.310880532369;
    msg.z = 0.686081634923;
    msg.vx = 0.974512533288;
    msg.vy = 0.553288354573;
    msg.vz = 0.292970706472;
    msg.ax = 0.458662886642;
    msg.ay = 0.926039800339;
    msg.az = 0.922727197262;
    msg.flags = 31998U;

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
    msg.setTimeStamp(0.0503168888526);
    msg.setSource(5682U);
    msg.setSourceEntity(17U);
    msg.setDestination(36521U);
    msg.setDestinationEntity(124U);
    msg.value = 0.312436206382;

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
    msg.setTimeStamp(0.441772994037);
    msg.setSource(60939U);
    msg.setSourceEntity(202U);
    msg.setDestination(36566U);
    msg.setDestinationEntity(194U);
    msg.value = 0.92462300552;

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
    msg.setTimeStamp(0.385183104476);
    msg.setSource(36103U);
    msg.setSourceEntity(41U);
    msg.setDestination(1531U);
    msg.setDestinationEntity(89U);
    msg.value = 0.711416674882;

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
    msg.setTimeStamp(0.567585866223);
    msg.setSource(48056U);
    msg.setSourceEntity(21U);
    msg.setDestination(64776U);
    msg.setDestinationEntity(189U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3548844274U;
    tmp_msg_0.start_lat = 0.139259660692;
    tmp_msg_0.start_lon = 0.014142781964;
    tmp_msg_0.start_z = 0.905129959822;
    tmp_msg_0.start_z_units = 20U;
    tmp_msg_0.end_lat = 0.652470222738;
    tmp_msg_0.end_lon = 0.942822004836;
    tmp_msg_0.end_z = 0.777264026591;
    tmp_msg_0.end_z_units = 11U;
    tmp_msg_0.speed = 0.685486123031;
    tmp_msg_0.speed_units = 191U;
    tmp_msg_0.lradius = 0.0413805843945;
    tmp_msg_0.flags = 124U;
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
    msg.setTimeStamp(0.710190129179);
    msg.setSource(59433U);
    msg.setSourceEntity(144U);
    msg.setDestination(54324U);
    msg.setDestinationEntity(19U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2372966306U;
    tmp_msg_0.start_lat = 0.332114247718;
    tmp_msg_0.start_lon = 0.758349542471;
    tmp_msg_0.start_z = 0.511020744515;
    tmp_msg_0.start_z_units = 160U;
    tmp_msg_0.end_lat = 0.0976346873739;
    tmp_msg_0.end_lon = 0.846433940927;
    tmp_msg_0.end_z = 0.849189741099;
    tmp_msg_0.end_z_units = 37U;
    tmp_msg_0.speed = 0.780254076588;
    tmp_msg_0.speed_units = 113U;
    tmp_msg_0.lradius = 0.0772769795768;
    tmp_msg_0.flags = 217U;
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
    msg.setTimeStamp(0.425751248368);
    msg.setSource(40257U);
    msg.setSourceEntity(0U);
    msg.setDestination(60799U);
    msg.setDestinationEntity(174U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1391492143U;
    tmp_msg_0.start_lat = 0.347642252049;
    tmp_msg_0.start_lon = 0.111450014689;
    tmp_msg_0.start_z = 0.698660506715;
    tmp_msg_0.start_z_units = 51U;
    tmp_msg_0.end_lat = 0.472584838192;
    tmp_msg_0.end_lon = 0.910945990773;
    tmp_msg_0.end_z = 0.23182669104;
    tmp_msg_0.end_z_units = 166U;
    tmp_msg_0.speed = 0.0731436749014;
    tmp_msg_0.speed_units = 253U;
    tmp_msg_0.lradius = 0.339747381439;
    tmp_msg_0.flags = 246U;
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
    msg.setTimeStamp(0.406766118971);
    msg.setSource(8278U);
    msg.setSourceEntity(47U);
    msg.setDestination(398U);
    msg.setDestinationEntity(247U);
    msg.timeout = 124U;
    msg.lat = 0.417125869613;
    msg.lon = 0.0219611160067;
    msg.z = 0.697429328021;
    msg.z_units = 144U;
    msg.speed = 0.911353031024;
    msg.speed_units = 54U;
    msg.roll = 0.873462143102;
    msg.pitch = 0.944111232454;
    msg.yaw = 0.354288189414;
    msg.custom.assign("EJFDQHJZRXWCYNOPTSNZHUVITJEIOGKCPFNNRIBWQSKOBEYJRBWFZGVPSIZVRQVJUCSKMSCEWALSAOATSVOKILGQRQSAFGILVFUJ");

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
    msg.setTimeStamp(0.977987479054);
    msg.setSource(52528U);
    msg.setSourceEntity(234U);
    msg.setDestination(28461U);
    msg.setDestinationEntity(70U);
    msg.timeout = 65483U;
    msg.lat = 0.318772124014;
    msg.lon = 0.222428383123;
    msg.z = 0.52430595959;
    msg.z_units = 228U;
    msg.speed = 0.0351336912816;
    msg.speed_units = 78U;
    msg.roll = 0.238623449747;
    msg.pitch = 0.203080927223;
    msg.yaw = 0.164410141908;
    msg.custom.assign("YVNOOQLELBDYTCWCUTQCUUIYZGIJWIXOSHQOFZPMWYGGEEKUMQVNYODDMZURSYADRRXEQXABOCBTPLDRFFZTEKJNHBADRHPBJFGSQNFMOXHBVVXVDIQVUTXJDLSELLAKLPCGPIIPAZKMUJLBKWZFJHWUJNASBFCKVHGQSGSRAMXFRJLZNECIPWYKNQSKMLOEICTDSPJYGTPXVMWZQHF");

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
    msg.setTimeStamp(0.360339941377);
    msg.setSource(47194U);
    msg.setSourceEntity(204U);
    msg.setDestination(63001U);
    msg.setDestinationEntity(192U);
    msg.timeout = 57069U;
    msg.lat = 0.174682294912;
    msg.lon = 0.976663122855;
    msg.z = 0.974202988312;
    msg.z_units = 222U;
    msg.speed = 0.743170809428;
    msg.speed_units = 224U;
    msg.roll = 0.047146205811;
    msg.pitch = 0.809883771117;
    msg.yaw = 0.821249189339;
    msg.custom.assign("GZLHWEHVCLFFBGDQQTFCEZLTBYTNZNNNHMCSHHVLUPJKWHKYVPMTEVMFMKPQAMZEAQUJNVUWCLSFUBONODKKDSCRLIZZIMEAMREPWELXYEAUXEHGPPIXDZO");

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
    msg.setTimeStamp(0.45682540733);
    msg.setSource(4673U);
    msg.setSourceEntity(235U);
    msg.setDestination(24648U);
    msg.setDestinationEntity(45U);
    msg.timeout = 63072U;
    msg.lat = 0.536574518765;
    msg.lon = 0.390279461415;
    msg.z = 0.49008216877;
    msg.z_units = 49U;
    msg.speed = 0.440163699742;
    msg.speed_units = 19U;
    msg.duration = 17421U;
    msg.radius = 0.383530365452;
    msg.flags = 33U;
    msg.custom.assign("VYNCMIWVECBNHDCIOWZGJOKQHYTJJDSQSCSEZDXBRWGXKLAFWLFVBPIUESMUPLULQUESRNTSHBIHAGXUXYOTBVSIGZYLZKJFWPDSFVMRGHFBNRAFMMPLXQQUGKMYDEJRQLKJMZXITPCWPJZVRINDJMHIGMKYLCVAPEBQGECHETAMOOUOGYUTHZTJDAWBSYCWLUKZPKFONGSQKOWAXCNRIKVOJAEZQTXATVRUVYXXQNYPLRAFIRPBFEFHN");

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
    msg.setTimeStamp(0.212130468332);
    msg.setSource(55596U);
    msg.setSourceEntity(205U);
    msg.setDestination(33310U);
    msg.setDestinationEntity(55U);
    msg.timeout = 22623U;
    msg.lat = 0.013205519371;
    msg.lon = 0.433680910086;
    msg.z = 0.0504715857054;
    msg.z_units = 158U;
    msg.speed = 0.11195230717;
    msg.speed_units = 194U;
    msg.duration = 15092U;
    msg.radius = 0.401847866213;
    msg.flags = 225U;
    msg.custom.assign("UYJNMRVHFCZWVORUBHXXHJFRSHQBSKXZPHITPSDYJDIOXMASJLGOTJYPGQMQRRJBFKXAPBXZOAEDUCMQWNVMIKFMAKSNHAGOKAWYEXFGBYDTGCQSZFWM");

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
    msg.setTimeStamp(0.573621517072);
    msg.setSource(52334U);
    msg.setSourceEntity(245U);
    msg.setDestination(6998U);
    msg.setDestinationEntity(218U);
    msg.timeout = 548U;
    msg.lat = 0.129410263884;
    msg.lon = 0.455965360255;
    msg.z = 0.656003613688;
    msg.z_units = 93U;
    msg.speed = 0.93228460166;
    msg.speed_units = 73U;
    msg.duration = 10036U;
    msg.radius = 0.182650175347;
    msg.flags = 5U;
    msg.custom.assign("DTUSHHZGCCIAJFVLTBWDLKWVQRBIGHSOEPTNUVRKTENSFNCLQXRRIDRPAHWOCYPZLHTJMLDTMZXSGZKQMPAAILYEUEVWPEFYGIDPQJEVXHYDZQBXUMRJKNOYIMXGFYBHWVTLYHEVMPTPBNWAIOCMZSLSONHOUJXGCMSOAAYFALXQFCUWHNVBZSXCROKQGKMZKWUDIUAFQNCGFYXSONBVPZGJKKDMQUBNWGB");

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
    msg.setTimeStamp(0.585636556919);
    msg.setSource(32892U);
    msg.setSourceEntity(184U);
    msg.setDestination(49133U);
    msg.setDestinationEntity(99U);
    msg.custom.assign("RAOQBMYEHPFOCWQYPCHIAVIJKPQDYKBXXGQMOCUDKHSIKANQPMHIWRDMLBBTVGGJIQYOGHZHPWHJNXXCWRFERLAPSPVUKFSUIGVWNDCEMIEAADOSMRYNZPUWSMKRVVATCZXGFMTJEAVWNGFPTQYFDVPMEVHNFLOQBQOXRDUFJGZZTLBTLUBTSCEBNZYNXQKGAYISBCUUZNJDJYFETSRLZUXNVRSSGX");

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
    msg.setTimeStamp(0.759217052287);
    msg.setSource(38589U);
    msg.setSourceEntity(153U);
    msg.setDestination(48267U);
    msg.setDestinationEntity(113U);
    msg.custom.assign("HSBDUVGPJCQJRHFMRUFHOJPHEGTJEYMNRUQMUPILTWLYXMZTAFTNRTDARNDEEICIWGQYILNITKRDK");

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
    msg.setTimeStamp(0.506574529222);
    msg.setSource(15280U);
    msg.setSourceEntity(100U);
    msg.setDestination(12257U);
    msg.setDestinationEntity(17U);
    msg.custom.assign("IKZETDONSCHVVNFGATHCXSWFVJFTRRAUZNALBOMSEABJBCRKSEXJJINWVFNWZRUWXLSTDPQQMMEOMJVJKNEYTCNMZVLHXPJSLPHQTFXRUXITEXOZCLQNYQZOBHFZUUKGASPKDDGPJYLRIBEVXMGAWVFKFQOROHXGADZIPHEMLQBQCKWQCLIMLUBLGFIDYCTRSGTOYSIBRRVGWEWZBVSYYEMKGPYJIUHNFUYAAHCPUHPZYK");

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
    msg.setTimeStamp(0.437337231964);
    msg.setSource(20293U);
    msg.setSourceEntity(178U);
    msg.setDestination(4377U);
    msg.setDestinationEntity(235U);
    msg.timeout = 1052U;
    msg.lat = 0.245009153091;
    msg.lon = 0.907600577511;
    msg.z = 0.0369686692967;
    msg.z_units = 182U;
    msg.duration = 51469U;
    msg.speed = 0.275030857083;
    msg.speed_units = 249U;
    msg.type = 76U;
    msg.radius = 0.286811853237;
    msg.length = 0.551262694192;
    msg.bearing = 0.639891934069;
    msg.direction = 51U;
    msg.custom.assign("MVCVQNSDHWIWFRLDRGUNCTJHFJXQTPHEDWMALQTFGORATUYYWPAKZQCAPIYGIKVDDETFMAWBIQESWQSCOH");

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
    msg.setTimeStamp(0.226005787865);
    msg.setSource(41277U);
    msg.setSourceEntity(219U);
    msg.setDestination(31565U);
    msg.setDestinationEntity(245U);
    msg.timeout = 29802U;
    msg.lat = 0.35398408854;
    msg.lon = 0.986078805339;
    msg.z = 0.942123998445;
    msg.z_units = 109U;
    msg.duration = 4460U;
    msg.speed = 0.926296351864;
    msg.speed_units = 123U;
    msg.type = 13U;
    msg.radius = 0.670076024465;
    msg.length = 0.743434366398;
    msg.bearing = 0.506435615977;
    msg.direction = 18U;
    msg.custom.assign("IZRFEENBHIICETOHIXAMTHDOQDCESSJLXDXXLGMBKKAPSZOFWUAEBODNUQAABXFEUGHKSICDYDJPMWOCQQVDKPFLGISCLEJKAWMUUPYKWKKRVQGPGSCVLWMNRUQMQUWRNLHNZFRMIUFCXVNGBEYHBSJZVBIGOKFCVAZJDMPJFTYTFWMBTRCMXYLQBNRXJPXPCYTOIQLYHTTTJY");

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
    msg.setTimeStamp(0.22971960063);
    msg.setSource(61882U);
    msg.setSourceEntity(237U);
    msg.setDestination(5044U);
    msg.setDestinationEntity(101U);
    msg.timeout = 58116U;
    msg.lat = 0.345851584718;
    msg.lon = 0.992203832263;
    msg.z = 0.610858324661;
    msg.z_units = 217U;
    msg.duration = 58200U;
    msg.speed = 0.301094022417;
    msg.speed_units = 11U;
    msg.type = 44U;
    msg.radius = 0.6707982313;
    msg.length = 0.185961775709;
    msg.bearing = 0.954016476391;
    msg.direction = 221U;
    msg.custom.assign("FYYYHMCKMGRLEDYEIGTZRLBAHWEHOUXEKGVNBQV");

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
    msg.setTimeStamp(0.531657754871);
    msg.setSource(34691U);
    msg.setSourceEntity(6U);
    msg.setDestination(50771U);
    msg.setDestinationEntity(118U);
    msg.duration = 39061U;
    msg.custom.assign("ULOOIMJKPWYWZCKWXHPSHBHZLSVQIFLXETDVHFFQSUVXBYVMXJXTHWYRGNTZFRFAGIRXZYBJQEVBDEFIKQWJVJAIJKWCGAWVGUJIODYXCDQGMOFLCRSSAYRIEOCPBUCGTAFNQPQNZKEEJAYMUTDXQEMMCJNFEAUSAPOAPNUOSRPRDLJZBCBLUBOPZWYGDOZZWYPLVROXFDILDHNTMHIMGLNSTCHKRUNRGZEVKXBQ");

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
    msg.setTimeStamp(0.28202083771);
    msg.setSource(1681U);
    msg.setSourceEntity(117U);
    msg.setDestination(31928U);
    msg.setDestinationEntity(82U);
    msg.duration = 55703U;
    msg.custom.assign("KVGYDZASVDDXGTYCRIHVTDBKDHTGNKOJKTZYJWVLZYBAOXJLTBMOQPLRDXAPVSQGCYWNGFSXHUUCCUURHUYEPJFWJUPOEWAOZEC");

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
    msg.setTimeStamp(0.955333209763);
    msg.setSource(8435U);
    msg.setSourceEntity(71U);
    msg.setDestination(52617U);
    msg.setDestinationEntity(176U);
    msg.duration = 18505U;
    msg.custom.assign("XSHXJLPGEUMPZSSUMKYTOMLABQBXIKKBFIWGQALHHLRNKAZDXWWLFOOTBLBMYHCXJVRVEUSUQJDFIUMUQUVNVFKWFW");

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
    msg.setTimeStamp(0.0618909946093);
    msg.setSource(19704U);
    msg.setSourceEntity(251U);
    msg.setDestination(59855U);
    msg.setDestinationEntity(138U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.288944108228;
    tmp_msg_0.off = 0.286215989777;
    msg.control.set(tmp_msg_0);
    msg.duration = 14404U;
    msg.custom.assign("RKLDDLPSSATFPPKRZCUXQAAQCSADQAXYLUJCDYDCOVCYPDPUGKPNXWVLEDJTERKRIIVGPZESOLUZJBWWUUKYBFRSZGEZNKXGCWYWJIQFWNTVJDBVYHETQZNYKOXRXZQFALMSOZRDGSGASXTRTHNJPCUIGFMQBBCMUVNJLHVKSCKTFILQHGQYLXCOITRVUMEHIOSJAJFUJOABVX");

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
    msg.setTimeStamp(0.358033709119);
    msg.setSource(59239U);
    msg.setSourceEntity(126U);
    msg.setDestination(19150U);
    msg.setDestinationEntity(155U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.592456905424;
    tmp_msg_0.z_units = 169U;
    msg.control.set(tmp_msg_0);
    msg.duration = 52740U;
    msg.custom.assign("QIDPWPMFSFKKEJFKZBWDJPNXHUEPDSUFWVOQXWCVBRLFJWHZAUTBOTVGXEPMVTHFVGCDRIPZQDNQMCWSZVXKRSJHGTEJNHFTBEXYPBNZNWYYYGCYRNHPKEGVRJGHQBHDTSICXQKMDQPNGVUTKNOCQTABODZMCILMVGBROLXVYJAPWROLYEUGSQFAXJOSKUDLAYWQRRMSFZAASWIJSJYBUHAEEOOKKUUIXIAIFLTLMNZZMDIBREGLYUOT");

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
    msg.setTimeStamp(0.798973879851);
    msg.setSource(38162U);
    msg.setSourceEntity(202U);
    msg.setDestination(56977U);
    msg.setDestinationEntity(96U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.0148296953261;
    msg.control.set(tmp_msg_0);
    msg.duration = 17878U;
    msg.custom.assign("VTJYZUDZQLUGBZPFRAQUDBKMJLCAVENIISWPONFFVYWOTZXDKXDSNPRMKYBDCJVFNJBAUMCTRDYUAXZSBHQYWHSSLFOGORIUWJZXGYDRBCTOYVEZZKQQQBQBIWMEEIJFXRAHCIWGXFGASATTORHCEMKYNNTCPJJPYQMVPEMDTGLZEXTILIVLTUAMGOUOCICNSUQXKROPGEFMSOWLWNEGA");

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
    msg.setTimeStamp(0.884755112752);
    msg.setSource(18630U);
    msg.setSourceEntity(176U);
    msg.setDestination(1223U);
    msg.setDestinationEntity(124U);
    msg.timeout = 45780U;
    msg.lat = 0.798590790208;
    msg.lon = 0.79319163285;
    msg.z = 0.0367456920132;
    msg.z_units = 160U;
    msg.speed = 0.295782008489;
    msg.speed_units = 153U;
    msg.bearing = 0.795574198151;
    msg.cross_angle = 0.793417343176;
    msg.width = 0.975412789691;
    msg.length = 0.955600568482;
    msg.hstep = 0.464409955602;
    msg.coff = 140U;
    msg.alternation = 185U;
    msg.flags = 251U;
    msg.custom.assign("QKRJZTJCSJUSXVKNAZQZJRLJLNYCHXLUEYWEGCPKVUEKCACHPWDVIBLODEGAQEBVXAHDXUHDYCCQILPONJDPIPKPMYIGFLQMVFDZQJLFGGROTNJZIRSSGVMRQMTMZFSEFBSEUZTG");

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
    msg.setTimeStamp(0.166447003168);
    msg.setSource(8586U);
    msg.setSourceEntity(67U);
    msg.setDestination(2933U);
    msg.setDestinationEntity(209U);
    msg.timeout = 13675U;
    msg.lat = 0.893583571011;
    msg.lon = 0.34042028625;
    msg.z = 0.535338697807;
    msg.z_units = 111U;
    msg.speed = 0.416182852193;
    msg.speed_units = 126U;
    msg.bearing = 0.403728799281;
    msg.cross_angle = 0.154176899775;
    msg.width = 0.271042871587;
    msg.length = 0.26130205905;
    msg.hstep = 0.90202796656;
    msg.coff = 145U;
    msg.alternation = 51U;
    msg.flags = 152U;
    msg.custom.assign("HKDQZSEVCUAJXUBBLWNAXVOJETLVMTTGLRIKFWPQSIQTVCMRVCRJYSCTQBAEXPRTLBWAXDISGHQQVRQYJYBXSJWEZDDPCONMUVMVKANGOBHWLEZSAJWFPFOTGMLCRKIOTJOPGNFZSIXHRFZGK");

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
    msg.setTimeStamp(0.922197173809);
    msg.setSource(38181U);
    msg.setSourceEntity(254U);
    msg.setDestination(18998U);
    msg.setDestinationEntity(238U);
    msg.timeout = 53551U;
    msg.lat = 0.990958830219;
    msg.lon = 0.660747113662;
    msg.z = 0.898751276652;
    msg.z_units = 22U;
    msg.speed = 0.530601228557;
    msg.speed_units = 7U;
    msg.bearing = 0.961526851777;
    msg.cross_angle = 0.114074991602;
    msg.width = 0.027902243042;
    msg.length = 0.597564583102;
    msg.hstep = 0.0809847456716;
    msg.coff = 253U;
    msg.alternation = 51U;
    msg.flags = 222U;
    msg.custom.assign("BOYLQIIXMVZJLALSXGDJDLTKDWFCIRCOLQQTSPVJIZUMBWJEVWYUDXHAPWZFUHMVYDYBTFNWNQAYSXWWTVUMROINZJAEKGMGZRFIFTILEYNEFPCHKESCZMQYXIEPWSUITPHBXEOVBMNWYBAYRQUCGJKQGJKCRCWTPASKYOHSSBB");

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
    msg.setTimeStamp(0.664252321799);
    msg.setSource(494U);
    msg.setSourceEntity(243U);
    msg.setDestination(11567U);
    msg.setDestinationEntity(244U);
    msg.timeout = 60411U;
    msg.lat = 0.101862987673;
    msg.lon = 0.809514466726;
    msg.z = 0.744120001247;
    msg.z_units = 82U;
    msg.speed = 0.0246552811916;
    msg.speed_units = 217U;
    msg.custom.assign("MZNBOKFBISNMLSAYFTJACAQMRBNNFCYIJLTHAWMSZTLVOHWVLGOIVQFPHDMPCIGEGNGLUKRXCMERWTUGYZVYUNWLWXRPUTWZGWVPBSXZGDJHPUJCSEGLYATSEBTKBMWTVBTZRZOCDXOT");

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
    msg.setTimeStamp(0.504784886961);
    msg.setSource(51624U);
    msg.setSourceEntity(15U);
    msg.setDestination(15935U);
    msg.setDestinationEntity(13U);
    msg.timeout = 21053U;
    msg.lat = 0.943695423107;
    msg.lon = 0.641548272641;
    msg.z = 0.655515739451;
    msg.z_units = 106U;
    msg.speed = 0.441758708948;
    msg.speed_units = 5U;
    msg.custom.assign("AOKEGTHDHCSLZKWDZSDOUKWVBHOGPJXFNKKCLZGFCLFJUEUUXWWWPIFHRXBWTFHYMVLVLONTIMKXCHMTDDWBSTUEPUXRIYHBBCYCHTTRKZPFPQGVNODZYUEHIDB");

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
    msg.setTimeStamp(0.178595209501);
    msg.setSource(43445U);
    msg.setSourceEntity(29U);
    msg.setDestination(43260U);
    msg.setDestinationEntity(52U);
    msg.timeout = 3287U;
    msg.lat = 0.49311277521;
    msg.lon = 0.903696408268;
    msg.z = 0.277964842441;
    msg.z_units = 66U;
    msg.speed = 0.787799408074;
    msg.speed_units = 161U;
    msg.custom.assign("MGEVOAIVEUTWAVGEHBFMILQNFIQBZWINZAGBBVDWQJAMWFXHZHDQSSTTCKJFOZKEWMITGDAZQTPCJHSYRQRFOFIRPGMBBJZSBBOACWEOLXXXEOXNYDRQISUDPIIYJHSCDDLNEPANVDMULVPQYXRWAEVJAOWKGFUPVZFQTUUKXKRURNPJRPNT");

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
    msg.setTimeStamp(0.256262591202);
    msg.setSource(14497U);
    msg.setSourceEntity(134U);
    msg.setDestination(34236U);
    msg.setDestinationEntity(209U);
    msg.x = 0.526516851842;
    msg.y = 0.775488513813;
    msg.z = 0.395552173553;

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
    msg.setTimeStamp(0.488321683954);
    msg.setSource(27295U);
    msg.setSourceEntity(240U);
    msg.setDestination(62945U);
    msg.setDestinationEntity(212U);
    msg.x = 0.858065659397;
    msg.y = 0.887413733707;
    msg.z = 0.665717391545;

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
    msg.setTimeStamp(0.383702940391);
    msg.setSource(4713U);
    msg.setSourceEntity(15U);
    msg.setDestination(23874U);
    msg.setDestinationEntity(1U);
    msg.x = 0.964313323424;
    msg.y = 0.0669936572152;
    msg.z = 0.547142329785;

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
    msg.setTimeStamp(0.220426942645);
    msg.setSource(15544U);
    msg.setSourceEntity(32U);
    msg.setDestination(37352U);
    msg.setDestinationEntity(174U);
    msg.timeout = 43467U;
    msg.lat = 0.945474004842;
    msg.lon = 0.500442453161;
    msg.z = 0.125665112351;
    msg.z_units = 114U;
    msg.amplitude = 0.333940317508;
    msg.pitch = 0.125963389831;
    msg.speed = 0.11531586293;
    msg.speed_units = 19U;
    msg.custom.assign("CHEIVWBPIGFFFEOTMKGGYKEQWFFAXDWUADOIZPIYSVYEDMYLEVOWRNYPQPOUOAUWCIUBOQVKBEXTEAGKVKRLDVFLLRLYZVVHGTJRAZJWXWSDKBKXMNOCHHEFAFNOEOSHTUVIYUXTMXISGJSVFMXWUPYKCPBTALQOYPUZGURHNKKNJQQLBQCZNGJQYWRCCIJMGZAT");

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
    msg.setTimeStamp(0.425358165132);
    msg.setSource(32193U);
    msg.setSourceEntity(140U);
    msg.setDestination(19346U);
    msg.setDestinationEntity(208U);
    msg.timeout = 23710U;
    msg.lat = 0.020810599644;
    msg.lon = 0.500728101775;
    msg.z = 0.577747116777;
    msg.z_units = 74U;
    msg.amplitude = 0.646716334374;
    msg.pitch = 0.610871137084;
    msg.speed = 0.466910980008;
    msg.speed_units = 218U;
    msg.custom.assign("FMCTNVUHUCYNUWLNWVDJTOHSEQEJBXGANRZRBOLVMYLAQNTIIJAVKMPBAFKDOFSXOUMEZSCMZNUEGRNLAXURBWNXEUOXXVKWPVQIMQGDKPCVFWELDLZECAJQBZSHPBWGZTKDGXQIDJFTMSPQIYSFYFZPFPOSACKXYPODONWYIKCRYGBTUAQURVJREHMUBGILKMWTGHIBQYXSEAHRDDWCEGJSYLVHTGJHICZSYTQPKXFRZBHLIPDJCN");

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
    msg.setTimeStamp(0.528352308785);
    msg.setSource(29047U);
    msg.setSourceEntity(35U);
    msg.setDestination(8654U);
    msg.setDestinationEntity(160U);
    msg.timeout = 25988U;
    msg.lat = 0.158909484488;
    msg.lon = 0.353284984851;
    msg.z = 0.428825386611;
    msg.z_units = 241U;
    msg.amplitude = 0.0682160453825;
    msg.pitch = 0.318341672399;
    msg.speed = 0.111603528682;
    msg.speed_units = 129U;
    msg.custom.assign("KECLBGWNWKSLVZXUPAYTNASARJJBIDOMEYQPZXNAGRHPNCQOJZZITSQFDBIOUFNFTPHJEVCUWHBRKUDXTCLGXJZWPIZLVTLUSXADSMGRQMCDZIMLSDWHNJNJWLAHVQBMOXYKJURFVHAMQCOO");

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
    msg.setTimeStamp(0.795050297439);
    msg.setSource(3426U);
    msg.setSourceEntity(95U);
    msg.setDestination(31614U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.2286685401);
    msg.setSource(18501U);
    msg.setSourceEntity(4U);
    msg.setDestination(44159U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.62270418201);
    msg.setSource(32050U);
    msg.setSourceEntity(155U);
    msg.setDestination(5861U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.876882538204);
    msg.setSource(29941U);
    msg.setSourceEntity(214U);
    msg.setDestination(2752U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.530295815518;
    msg.lon = 0.353394202988;
    msg.z = 0.440837792481;
    msg.z_units = 195U;
    msg.radius = 0.66701245692;
    msg.duration = 22391U;
    msg.speed = 0.727229595838;
    msg.speed_units = 69U;
    msg.popup_period = 54107U;
    msg.popup_duration = 41945U;
    msg.flags = 126U;
    msg.custom.assign("CEJPKABGCBFBRPSTKORERTUZHFQIIHZNMEXQIOZOKEFFCMWWTP");

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
    msg.setTimeStamp(0.560803740056);
    msg.setSource(51983U);
    msg.setSourceEntity(81U);
    msg.setDestination(17136U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.0398241499235;
    msg.lon = 0.605709206232;
    msg.z = 0.101746929625;
    msg.z_units = 46U;
    msg.radius = 0.479478106453;
    msg.duration = 25974U;
    msg.speed = 0.380581524244;
    msg.speed_units = 173U;
    msg.popup_period = 62272U;
    msg.popup_duration = 46210U;
    msg.flags = 31U;
    msg.custom.assign("OJNYWFUPZYBAWSJODNSDAWAQPZBTERWUGWWPAUJEESPNMIVNXAKTNPBUXYLBQONEGSZTVPBCHDDEXQCYDTRUFHLPMJBLMOPSHHXTLHHDTKFWLHKVCCMKSEDWTUSIXKRMZRSOQHKOXGEFMMNVKUWHICHJJZBCUOSJMIVGCTPZNVTLXBVGMFYMQALQAFZYSTQ");

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
    msg.setTimeStamp(0.676752168058);
    msg.setSource(59698U);
    msg.setSourceEntity(44U);
    msg.setDestination(11154U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.807889343574;
    msg.lon = 0.968384965014;
    msg.z = 0.988199084065;
    msg.z_units = 98U;
    msg.radius = 0.0505254442677;
    msg.duration = 38139U;
    msg.speed = 0.359158219035;
    msg.speed_units = 229U;
    msg.popup_period = 56426U;
    msg.popup_duration = 24608U;
    msg.flags = 207U;
    msg.custom.assign("SLMJIAUOWIYGNYDXBUTVRWJOKRZFPMV");

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
    msg.setTimeStamp(0.200259908901);
    msg.setSource(3152U);
    msg.setSourceEntity(98U);
    msg.setDestination(31769U);
    msg.setDestinationEntity(94U);
    msg.timeout = 14037U;
    msg.flags = 174U;
    msg.lat = 0.58245024412;
    msg.lon = 0.483302956514;
    msg.start_z = 0.557813063925;
    msg.start_z_units = 143U;
    msg.end_z = 0.987340773778;
    msg.end_z_units = 40U;
    msg.radius = 0.00992464673105;
    msg.speed = 0.629760025748;
    msg.speed_units = 46U;
    msg.custom.assign("RFQIWWRGAOIAAQDPUMGYIZRRERYWWCEZIJFFIXF");

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
    msg.setTimeStamp(0.652593095182);
    msg.setSource(30891U);
    msg.setSourceEntity(20U);
    msg.setDestination(52348U);
    msg.setDestinationEntity(82U);
    msg.timeout = 55981U;
    msg.flags = 96U;
    msg.lat = 0.512103753176;
    msg.lon = 0.150416997848;
    msg.start_z = 0.429384628071;
    msg.start_z_units = 165U;
    msg.end_z = 0.962627371765;
    msg.end_z_units = 207U;
    msg.radius = 0.407838480014;
    msg.speed = 0.359347552943;
    msg.speed_units = 239U;
    msg.custom.assign("GMHPOFIIZNKOHDIQRAQUVQJGOBXMAPCSMFKJIVMFRLBUBGDBGKPZDJECFOETIVKZLFDWXJQIINXGYZGVSTOENWHOEOWUBXAUJTZQWDZYRBBVGPWFOZHQAXGRTBDJCTRRUNOTXAEJLPXPTNNELQYHDPJCSVZLVNHCHLYMVCIQGASVN");

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
    msg.setTimeStamp(0.676475881254);
    msg.setSource(9349U);
    msg.setSourceEntity(189U);
    msg.setDestination(2929U);
    msg.setDestinationEntity(132U);
    msg.timeout = 40510U;
    msg.flags = 169U;
    msg.lat = 0.934686174768;
    msg.lon = 0.135875933204;
    msg.start_z = 0.0758018675659;
    msg.start_z_units = 168U;
    msg.end_z = 0.741527179703;
    msg.end_z_units = 189U;
    msg.radius = 0.79392606614;
    msg.speed = 0.345530193738;
    msg.speed_units = 241U;
    msg.custom.assign("ZKVAGGFPXWCOBKZUDVWTHFCXLNTWIAAXTVEYNNGQDICLNFXPBIYPWBNRRXNQXDHHXTROGJZYMOYPSKSSCDTYXGJONMRKUZOIIQNJXGFCUKZA");

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
    msg.setTimeStamp(0.157121064307);
    msg.setSource(61390U);
    msg.setSourceEntity(30U);
    msg.setDestination(24605U);
    msg.setDestinationEntity(46U);
    msg.timeout = 8511U;
    msg.lat = 0.801334945379;
    msg.lon = 0.303348292627;
    msg.z = 0.454066940818;
    msg.z_units = 99U;
    msg.speed = 0.203619860357;
    msg.speed_units = 231U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.813476170891;
    tmp_msg_0.y = 0.63058055727;
    tmp_msg_0.z = 0.30972547734;
    tmp_msg_0.t = 0.44957882748;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JARIROAEMDOEGIKLDGVMXWKJJDCDDVZDPSPTRUPJFOFSIZWRCXXAORESBKEAAFYADXPJGPBLINKVTRMNUCXXUEDLVDHGPEQEFGOKIOQIVPFCFUAIYCMYSXMG");

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
    msg.setTimeStamp(0.207932369264);
    msg.setSource(12177U);
    msg.setSourceEntity(86U);
    msg.setDestination(1875U);
    msg.setDestinationEntity(212U);
    msg.timeout = 9811U;
    msg.lat = 0.0599986913562;
    msg.lon = 0.994942337341;
    msg.z = 0.077583461705;
    msg.z_units = 246U;
    msg.speed = 0.293002761321;
    msg.speed_units = 167U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.126447830173;
    tmp_msg_0.y = 0.12545922306;
    tmp_msg_0.z = 0.00697262131806;
    tmp_msg_0.t = 0.36342766578;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WVXIOYVWBHYQOZQDWNYOFZFBUCWLPKQGLPAXGZABIRASEMBQJFOCSZBEWOOQWRJDOXTXICQHBHSEKELEMUDXMVPHAOJAKNGAJHSMSGPUYJHLKTFMRDJAJMBRNCGKREJNCFSPTVQXVGBSEIDWMFZZKVLUPUQABNNKNAYDITKXPMBWPSXCZNIFIAZPVYTHIDVNPTLQJZTCMRYD");

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
    msg.setTimeStamp(0.757604209878);
    msg.setSource(64326U);
    msg.setSourceEntity(41U);
    msg.setDestination(1179U);
    msg.setDestinationEntity(175U);
    msg.timeout = 59587U;
    msg.lat = 0.628744853055;
    msg.lon = 0.281727131848;
    msg.z = 0.252243276978;
    msg.z_units = 129U;
    msg.speed = 0.0726905275209;
    msg.speed_units = 113U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.471256353128;
    tmp_msg_0.y = 0.0141582277233;
    tmp_msg_0.z = 0.919460353303;
    tmp_msg_0.t = 0.30297476985;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FXJOYILSEUSRVALHJBRMPPBMUKOMQCTABZGTOTNRTUEMZWNATPGYOYRQRFKTHOYJMAQYDOKFQQJJGEVANLTQRXSVPDLWQVAYPLCNBKUELEFTRNGUDCUVPSDWCOFZJIKMPAKVWDMXVXSODXWZFKQNRYWVQTHJJGDIXTF");

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
    msg.setTimeStamp(0.803861229642);
    msg.setSource(20381U);
    msg.setSourceEntity(158U);
    msg.setDestination(53788U);
    msg.setDestinationEntity(138U);
    msg.x = 0.796871182226;
    msg.y = 0.631833424478;
    msg.z = 0.265012516517;
    msg.t = 0.477579601675;

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
    msg.setTimeStamp(0.036801835036);
    msg.setSource(35012U);
    msg.setSourceEntity(69U);
    msg.setDestination(18093U);
    msg.setDestinationEntity(249U);
    msg.x = 0.985566535218;
    msg.y = 0.936425249759;
    msg.z = 0.857627927343;
    msg.t = 0.274728715523;

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
    msg.setTimeStamp(0.618286207389);
    msg.setSource(42849U);
    msg.setSourceEntity(162U);
    msg.setDestination(17827U);
    msg.setDestinationEntity(179U);
    msg.x = 0.282926195989;
    msg.y = 0.082665250523;
    msg.z = 0.288405882319;
    msg.t = 0.723904624247;

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
    msg.setTimeStamp(0.78606411742);
    msg.setSource(29869U);
    msg.setSourceEntity(66U);
    msg.setDestination(27576U);
    msg.setDestinationEntity(1U);
    msg.timeout = 11706U;
    msg.name.assign("VFDUYEEMCMREFVZYMXJYDXNDORHXWONQHRLSYYKTXZPUTGJATXXQNIZHKRSDSLLTLFJVBVPLFGTCUDBOVBWURNYWKUAACBBAXJUXHNYLQHTKUMFLHDTBDIIKWRMPNOOGAEXUJLH");
    msg.custom.assign("WNZBEUAMGBVOZWNAYHVENCRZGBLMDAIQRTLKVVUANOQFGXARG");

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
    msg.setTimeStamp(0.975881711585);
    msg.setSource(44585U);
    msg.setSourceEntity(143U);
    msg.setDestination(28230U);
    msg.setDestinationEntity(241U);
    msg.timeout = 57331U;
    msg.name.assign("EWONRYESGNELCLZDCWMVIQFQPDRNAMQHJKTSFPWGEANISJBANBHYERUJUCFISGZGFUUHHPYPECWTWXFBWXMOUTOPESTXADXLRQLQHIAGXCR");
    msg.custom.assign("KXRNUMQRGQVLQAPHUDPNJPOYQZBTQNXXCHFFUKZBKMIWCLKSWEAKOGXSHPIFSBTFEOVAHSDSHDUAALNTTXYXYAFDKWXJ");

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
    msg.setTimeStamp(0.84533004828);
    msg.setSource(21381U);
    msg.setSourceEntity(148U);
    msg.setDestination(16624U);
    msg.setDestinationEntity(95U);
    msg.timeout = 8288U;
    msg.name.assign("TQUVYDXGKUBCXYKFRWBHTAIGBAFUDEUXQQ");
    msg.custom.assign("JAMHRDVLPPGBRAFIGZCYAVHOZDBVEWDWKXHBRNIQOUXGUPFECXQAKZHMTGMSUJLANXNLXHYYTOMTRPEEOMZYQBBJFULWDAIPFGDCZF");

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
    msg.setTimeStamp(0.230038636925);
    msg.setSource(4084U);
    msg.setSourceEntity(110U);
    msg.setDestination(28249U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.125679284625;
    msg.lon = 0.564223137467;
    msg.z = 0.317290616537;
    msg.z_units = 243U;
    msg.speed = 0.842432564366;
    msg.speed_units = 14U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11391U;
    tmp_msg_0.off_x = 0.6041332323;
    tmp_msg_0.off_y = 0.586334787122;
    tmp_msg_0.off_z = 0.119982049904;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.639395157982;
    msg.custom.assign("OWBTRHFSIHWHEFSMVIBEBAJFMIJEKJEIOXPKYYCSVLKFVUPZN");

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
    msg.setTimeStamp(0.566336635768);
    msg.setSource(4069U);
    msg.setSourceEntity(198U);
    msg.setDestination(47903U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.363077120006;
    msg.lon = 0.672799486558;
    msg.z = 0.377551946827;
    msg.z_units = 159U;
    msg.speed = 0.380111194861;
    msg.speed_units = 253U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.640031623637;
    tmp_msg_0.y = 0.215568300098;
    tmp_msg_0.z = 0.531533282823;
    tmp_msg_0.t = 0.856818966398;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.388030619728;
    msg.custom.assign("JUZAXEZLXHJXZZVSMAFZFDDNTJXQPSLGXNKBVLIRCZAJYEMDIIEMSZECBAGQZBLMUABKRPDRPYAIIQRHHUWYLAGYWFVLGKSGIBOHVNQRDVRYUQRQOQHEWPXAXSHOWCKDZDNFFGCWXLTNFVFCPOEWKYOKPLTFSJIWEKYRNMGCCUMTWIPRYPNMVBCXVOY");

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
    msg.setTimeStamp(0.8021903125);
    msg.setSource(21579U);
    msg.setSourceEntity(191U);
    msg.setDestination(19128U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.417744330288;
    msg.lon = 0.950288781265;
    msg.z = 0.970203497837;
    msg.z_units = 167U;
    msg.speed = 0.0738674808203;
    msg.speed_units = 254U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0533589392213;
    tmp_msg_0.y = 0.702501112308;
    tmp_msg_0.z = 0.511942020816;
    tmp_msg_0.t = 0.732695134304;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 50293U;
    tmp_msg_1.off_x = 0.733276238881;
    tmp_msg_1.off_y = 0.110762790869;
    tmp_msg_1.off_z = 0.510644301933;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.119221357335;
    msg.custom.assign("JOSIWXUFEQIUTJUJVOWCHTELBRVHSJMQLWXMMBWFMSHKRXAIWDRZUMYGCYAKGUCKDPDBZMENZNZBJQR");

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
    msg.setTimeStamp(0.567058269345);
    msg.setSource(7136U);
    msg.setSourceEntity(152U);
    msg.setDestination(42051U);
    msg.setDestinationEntity(95U);
    msg.vid = 18526U;
    msg.off_x = 0.27957946464;
    msg.off_y = 0.0840280711759;
    msg.off_z = 0.89732351268;

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
    msg.setTimeStamp(0.279852463178);
    msg.setSource(26847U);
    msg.setSourceEntity(45U);
    msg.setDestination(15442U);
    msg.setDestinationEntity(39U);
    msg.vid = 45334U;
    msg.off_x = 0.11102175594;
    msg.off_y = 0.463479821954;
    msg.off_z = 0.112885861541;

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
    msg.setTimeStamp(0.564342660702);
    msg.setSource(39460U);
    msg.setSourceEntity(184U);
    msg.setDestination(6308U);
    msg.setDestinationEntity(174U);
    msg.vid = 13599U;
    msg.off_x = 0.658851579828;
    msg.off_y = 0.960128154155;
    msg.off_z = 0.783937273633;

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
    msg.setTimeStamp(0.786763367433);
    msg.setSource(40763U);
    msg.setSourceEntity(195U);
    msg.setDestination(1179U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.638363105941);
    msg.setSource(10383U);
    msg.setSourceEntity(165U);
    msg.setDestination(22435U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.456245934503);
    msg.setSource(60028U);
    msg.setSourceEntity(131U);
    msg.setDestination(3084U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.215504560108);
    msg.setSource(47760U);
    msg.setSourceEntity(81U);
    msg.setDestination(31814U);
    msg.setDestinationEntity(45U);
    msg.mid = 20733U;

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
    msg.setTimeStamp(0.628704101285);
    msg.setSource(13018U);
    msg.setSourceEntity(172U);
    msg.setDestination(65158U);
    msg.setDestinationEntity(55U);
    msg.mid = 38620U;

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
    msg.setTimeStamp(0.700611840415);
    msg.setSource(29856U);
    msg.setSourceEntity(119U);
    msg.setDestination(32334U);
    msg.setDestinationEntity(115U);
    msg.mid = 35439U;

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
    msg.setTimeStamp(0.305872756195);
    msg.setSource(49019U);
    msg.setSourceEntity(19U);
    msg.setDestination(13246U);
    msg.setDestinationEntity(213U);
    msg.state = 173U;
    msg.eta = 49874U;
    msg.info.assign("TGZAFNDOQMNKBGJFJOCXLEOYVNHLHEALRACFUAQQTDVKYQIMWPIWASNGHYBMXDLALWGINRTXJDHOSDKCJFSSPJYGHFXLHXFVVRJTBYQXZECJPMYNRZVMBOYOOWDCVPCTOQVVOHINXPGHESUJAAVMPATUEEHMUTUYJEFZYHJQGSIIPZPSFPUWBKDKLZNTXDRXWBBMWMBBAQOZQWWMBLFFIYZRRSTSPUXKUDKDVKLIE");

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
    msg.setTimeStamp(0.252018782178);
    msg.setSource(30366U);
    msg.setSourceEntity(38U);
    msg.setDestination(41561U);
    msg.setDestinationEntity(62U);
    msg.state = 240U;
    msg.eta = 31172U;
    msg.info.assign("WUIDSRNKJQCBWE");

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
    msg.setTimeStamp(0.393690900331);
    msg.setSource(9171U);
    msg.setSourceEntity(215U);
    msg.setDestination(31796U);
    msg.setDestinationEntity(198U);
    msg.state = 76U;
    msg.eta = 52080U;
    msg.info.assign("FVMZJQEKSDHHPDIADWBZALSQRRXVCHAEDNSVSPOWRDEVLXNBLXGYUWVKTVFZJUMPJXDCKXALIWNUIGAEHBOEJSP");

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
    msg.setTimeStamp(0.735843590712);
    msg.setSource(47428U);
    msg.setSourceEntity(233U);
    msg.setDestination(15404U);
    msg.setDestinationEntity(129U);
    msg.system = 37147U;
    msg.duration = 37936U;
    msg.speed = 0.376535319949;
    msg.speed_units = 144U;
    msg.x = 0.398467993068;
    msg.y = 0.0928471655067;
    msg.z = 0.413101217585;
    msg.z_units = 233U;

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
    msg.setTimeStamp(0.728525932634);
    msg.setSource(64988U);
    msg.setSourceEntity(82U);
    msg.setDestination(19216U);
    msg.setDestinationEntity(40U);
    msg.system = 33182U;
    msg.duration = 43288U;
    msg.speed = 0.908111720955;
    msg.speed_units = 217U;
    msg.x = 0.409938173449;
    msg.y = 0.309280606811;
    msg.z = 0.307461307243;
    msg.z_units = 197U;

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
    msg.setTimeStamp(0.170803640587);
    msg.setSource(27416U);
    msg.setSourceEntity(18U);
    msg.setDestination(5646U);
    msg.setDestinationEntity(117U);
    msg.system = 30785U;
    msg.duration = 59322U;
    msg.speed = 0.0203892091497;
    msg.speed_units = 74U;
    msg.x = 0.791900316695;
    msg.y = 0.080949399812;
    msg.z = 0.714289439644;
    msg.z_units = 87U;

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
    msg.setTimeStamp(0.0515635111311);
    msg.setSource(38799U);
    msg.setSourceEntity(90U);
    msg.setDestination(46889U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.162944127373;
    msg.lon = 0.995485737667;
    msg.speed = 0.276955862079;
    msg.speed_units = 75U;
    msg.duration = 2631U;
    msg.sys_a = 53482U;
    msg.sys_b = 3261U;
    msg.move_threshold = 0.191279881189;

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
    msg.setTimeStamp(0.618789980314);
    msg.setSource(43676U);
    msg.setSourceEntity(26U);
    msg.setDestination(35779U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.864791789298;
    msg.lon = 0.50028513055;
    msg.speed = 0.657770543612;
    msg.speed_units = 202U;
    msg.duration = 55044U;
    msg.sys_a = 19890U;
    msg.sys_b = 58905U;
    msg.move_threshold = 0.209501833015;

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
    msg.setTimeStamp(0.205357579398);
    msg.setSource(38800U);
    msg.setSourceEntity(23U);
    msg.setDestination(52455U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.078057651898;
    msg.lon = 0.876344855431;
    msg.speed = 0.915149509241;
    msg.speed_units = 33U;
    msg.duration = 49671U;
    msg.sys_a = 17429U;
    msg.sys_b = 48995U;
    msg.move_threshold = 0.556195679882;

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
    msg.setTimeStamp(0.437645838963);
    msg.setSource(65100U);
    msg.setSourceEntity(71U);
    msg.setDestination(21811U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.0425769959889;
    msg.lon = 0.123150973488;
    msg.z = 0.37666829648;
    msg.z_units = 161U;
    msg.speed = 0.0844609358673;
    msg.speed_units = 40U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.219448234606;
    tmp_msg_0.lon = 0.418918324582;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TPISPLVUZQCWKFHKVJCEGVHXUMNBJIONMQHIHNPRMZMATOEFRDOKFSOBCDNZYMPF");

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
    msg.setTimeStamp(0.00696379467109);
    msg.setSource(6798U);
    msg.setSourceEntity(177U);
    msg.setDestination(62399U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.91322240471;
    msg.lon = 0.126617956487;
    msg.z = 0.0670501850448;
    msg.z_units = 197U;
    msg.speed = 0.0271042534595;
    msg.speed_units = 53U;
    msg.custom.assign("DZAQIHIHUPCYWOAXSMLXVKMYCIILWACUWUKDQUDNFIBGHQDPLEKKOBCNMBVZZYDKUWPVZUTMLTBZHDIXVXDNWAWBMGSXPGOHREVVJESTOMAUTTQSOEQ");

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
    msg.setTimeStamp(0.109563434151);
    msg.setSource(52336U);
    msg.setSourceEntity(193U);
    msg.setDestination(43094U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.829746806077;
    msg.lon = 0.851375317825;
    msg.z = 0.71328029457;
    msg.z_units = 202U;
    msg.speed = 0.835271759146;
    msg.speed_units = 97U;
    msg.custom.assign("VXDRPNEEPSKRCNSWHOHHTXURGIIRUQXTPIMWLSDCQVDUMSBGSMNXYDCXUYZEOLIDKVSJZJKHFAFDWAZKGQMSMZOATCJSBAZRLONVHKDXQWJEEGGPRVCBWCTWDLXQBOIQNABVUVRSABPYNEWMMROVOWZPJYTUYFQPXXGLAVJYMFUFQVZWTBYOBPYBHJHFQPNICSEFYELFOYHKLKGZRLJTUNIQUZGT");

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
    msg.setTimeStamp(0.455364872876);
    msg.setSource(17693U);
    msg.setSourceEntity(10U);
    msg.setDestination(65385U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.292633193759;
    msg.lon = 0.665594806021;

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
    msg.setTimeStamp(0.747164627529);
    msg.setSource(38769U);
    msg.setSourceEntity(29U);
    msg.setDestination(41587U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.962185506278;
    msg.lon = 0.925821007327;

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
    msg.setTimeStamp(0.713067285165);
    msg.setSource(30623U);
    msg.setSourceEntity(85U);
    msg.setDestination(64833U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.444396920421;
    msg.lon = 0.101977720645;

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
    msg.setTimeStamp(0.815346444393);
    msg.setSource(26309U);
    msg.setSourceEntity(175U);
    msg.setDestination(21059U);
    msg.setDestinationEntity(145U);
    msg.timeout = 46767U;
    msg.lat = 0.557746872648;
    msg.lon = 0.333003972147;
    msg.z = 0.412662308911;
    msg.z_units = 202U;
    msg.pitch = 0.658681803261;
    msg.amplitude = 0.379135954145;
    msg.duration = 37084U;
    msg.speed = 0.213644933301;
    msg.speed_units = 207U;
    msg.radius = 0.330073780491;
    msg.direction = 63U;
    msg.custom.assign("IWVGYYEWFORLFWZCPDYKAWOSQTWJGQUHGLKCDXGHOYDEVCMOCTAHQLDAPVTLXZMUHJXYZEPIDYJNPJRTOTNHGAMBZRCEWDJLUVCKCUYQTNGKIANSFUHFSDFITKPRQIHJQTSXVNRCHGLDRJWOQEMKSCJTORVMRIAABSXBJIMREZEGJSHPQFIALNVRNZIVQNPUDBVYPUSOSZQKEHZNIYMFD");

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
    msg.setTimeStamp(0.416976127141);
    msg.setSource(12889U);
    msg.setSourceEntity(31U);
    msg.setDestination(47429U);
    msg.setDestinationEntity(223U);
    msg.timeout = 63364U;
    msg.lat = 0.037382450304;
    msg.lon = 0.203959550481;
    msg.z = 0.306698137066;
    msg.z_units = 33U;
    msg.pitch = 0.845664383097;
    msg.amplitude = 0.334435438283;
    msg.duration = 36622U;
    msg.speed = 0.316888523163;
    msg.speed_units = 72U;
    msg.radius = 0.563723877695;
    msg.direction = 67U;
    msg.custom.assign("RVTRYMVJSIPSSQYCNEKVDAJFDXBHEXSVEZEWJBOMYNRZXOWBFZUFTUXGSAHNHGLWWJIVPYCQYTEDDBDZFQSNPNLZQGMXJKKBGROYDEIAORLMLZHPKGTFSXQVBQKPEZOIWOHVNQUWAMYNRLOCQRTKGFHWBKEUWCTJNMFWHZZLFZBUXUYTGSDJODTDBXCPRAGEQCAXSIINYCQVLRACPDLSLKHVCPYMKINAUMOIJMPKMWGRPAFGUAXTJBUIILFC");

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
    msg.setTimeStamp(0.250853714453);
    msg.setSource(24124U);
    msg.setSourceEntity(151U);
    msg.setDestination(16203U);
    msg.setDestinationEntity(97U);
    msg.timeout = 4244U;
    msg.lat = 0.924668319368;
    msg.lon = 0.87927176244;
    msg.z = 0.167751772083;
    msg.z_units = 16U;
    msg.pitch = 0.727118628688;
    msg.amplitude = 0.0186259057567;
    msg.duration = 21220U;
    msg.speed = 0.0025924422464;
    msg.speed_units = 184U;
    msg.radius = 0.822883705529;
    msg.direction = 143U;
    msg.custom.assign("VYIZCDLFBSNGKWFIUWMNBFZBOGAWHGKMMNJOGDR");

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
    msg.setTimeStamp(0.253512221014);
    msg.setSource(48807U);
    msg.setSourceEntity(170U);
    msg.setDestination(32262U);
    msg.setDestinationEntity(193U);
    msg.formation_name.assign("EXYSFLRUUYUSNJCMCTXSHORXWFJDRZKOMKGOLIMQNDUKYVJCZEWMDMBXJZOTYHSTVGXZJCSBHZDXGFEFEQAAMEIDXBEWHBRGLCANQPQIPREZSUAFLUTYBPQHBGVUSVCFTPCEPJJFQRVAHHMLQSODYMLNVJJXLLWRHOYNFROYINDICQAWNGZRYTIQSBUKWAKPTIKDQ");
    msg.reference_frame = 25U;
    msg.custom.assign("UMOSVHLKCPQJVGGNGWQKKTYTOOBVAXCDCRUWDCSCIFLLIWYLFWJYHJWUIHOXUHSGKLIPRBEHEHTLEFAZFUZPJOAAINKIZXDRZEDNETKCSGSXEQVDOWXZWAONQBBYSFGQANXJFMZNYCQMRQPIOTGVMRVXJHDSTGOYYKUAJIKPNEDQBUZCBPHZUCSMYPV");

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
    msg.setTimeStamp(0.100182825);
    msg.setSource(64930U);
    msg.setSourceEntity(127U);
    msg.setDestination(39722U);
    msg.setDestinationEntity(240U);
    msg.formation_name.assign("XGBFQUDLHLDRTQNBFLDFICHKXKDCCEJXQJXDTOLFZOWLBAVMTZNWJJSHRPTBYIWYCUOROALCKQTQZIVOHMFFPIVAPKQCJPLZ");
    msg.reference_frame = 246U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 65142U;
    tmp_msg_0.off_x = 0.469568404242;
    tmp_msg_0.off_y = 0.482599001547;
    tmp_msg_0.off_z = 0.438305678815;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YRZMMVXNUGTNZMIQKCPGKZBJSWJXPOEOPJGANKAYBMVOJFCKYKDKDDCHKPTJBGTVYHDVQMUFIXSSZZSHGVVTJTRLSHLENYPLMIAXOBXVHQLQPNZZZAEUEICHRLRTDUWNFBLAYWIGQHARMBWIRFQROUEYGFXXWIQMVUINVFCYENDPZKUFUUQVJOAJEOCRANWHKXDLRNAXETSPRSICWFSLCCKGOHTQHYJWITP");

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
    msg.setTimeStamp(0.52637591687);
    msg.setSource(24209U);
    msg.setSourceEntity(118U);
    msg.setDestination(27138U);
    msg.setDestinationEntity(185U);
    msg.formation_name.assign("OFEXAVYLQGVHSHWMOYIMKBSPFLBTNAJ");
    msg.reference_frame = 84U;
    msg.custom.assign("BPRRTDXUWMDXPEESMCUDEFCGGDZEJBITQTQBAMCZKOLCNUWALIXSIYWIYEDDPHJBNQEFPVGOOJGMI");

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
    msg.setTimeStamp(0.131501045402);
    msg.setSource(7761U);
    msg.setSourceEntity(134U);
    msg.setDestination(46988U);
    msg.setDestinationEntity(80U);
    msg.group_name.assign("HTVRUBGYAEUPJNXWUMWNABXVTJYMFHNBXBMOAUHXUSSGJRREDCCVYCSNKFUGQTAALNDLXUJOZEZCETMDZNLCWQRZAPSFOHZJRGDDJOBTSQZGYOIQGWZSRWXNDMYHZOCRMKXDYKDIBVIFTSKALWTYFLJBNUPEQBIOOOSNPMJDQJCTHRVYHEZEQRIOEGPDELHQQKPPYCVIW");
    msg.formation_name.assign("UUJNTDRALICSDNBFWBQZIQDMHFMHZICXLNJQLHXVDOCWSSYGWFYYMIUTIGJCTUTVLPVMZJNGKBBKEBTFPUMPHLEJHJVVBWRKXVARHYPSAIQRBRO");
    msg.plan_id.assign("AVVRQHHARAFVYQJQYVEHUKZXCFDHKVSIWTPZGOQZTQXPOYGWLCIDFJIDTOESNPUFKOCTNMRCBZVJESTJPJMRBNDWAZDSPBIUVQBWWLCMQSGEVWUJTHZCGAXBMEWUNMG");
    msg.description.assign("ZVDCIHAPXROPCAHPJYDLQYNCFAPKRTSTKVMQUNWDTLXPFRTXOJVPELVHIBCYQZT");
    msg.leader_speed = 0.254903777016;
    msg.leader_bank_lim = 0.473017820135;
    msg.pos_sim_err_lim = 0.90225707864;
    msg.pos_sim_err_wrn = 0.417979522661;
    msg.pos_sim_err_timeout = 42336U;
    msg.converg_max = 0.848538072096;
    msg.converg_timeout = 44632U;
    msg.comms_timeout = 50235U;
    msg.turb_lim = 0.227279733069;
    msg.custom.assign("TQACPCNBCIKVMWCKTHDBPLJFGYVIGNUXENYSDSRZSFRRZWDKARDTZPUNIQZIPGIGDZAGUBPABMZOFXMHWELKQYNMDJOQLYYJUEFZJWFJVSXKOXILKJNWRYPRVAZACHNGWAMALJNQMRIULTZCVGVQMLCZWRKUEPHTOXDREBABTSFQKLLQGHEEWTJNXYTBOILXXWSHCXMHUVOCVMTIDSCPMSNOJQSDXOFWHFEGYOBVUJKYEFYHPHORGABUFQIV");

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
    msg.setTimeStamp(0.205681586271);
    msg.setSource(2138U);
    msg.setSourceEntity(23U);
    msg.setDestination(48572U);
    msg.setDestinationEntity(197U);
    msg.group_name.assign("QQTDRULUQHWOZEWGRCNVUCFAEZXZEEDISKRYKGYWEPGKYOPHXAQRSNMPHIMARRXPFBCDSNKFQMKJSPOYWELRNSDTEBGKLDCPJAMJXIKYYOBJB");
    msg.formation_name.assign("VJHPDVGAFGGHMKOZAWSCBZGXKXAEKSZIFKLVKTEBUXRMIFJKBNQRFAXOPVZUTBXSZXNMMDIWGGUDYJXWDVMUTAPLUPJCIZKJEBJGQORSEYTHNXLXCCROIKJOTCCHSWQWSUBRKPVCQRMDTUOELIYFDBEWLTTUNIJNQYUXQDFVWSDLYS");
    msg.plan_id.assign("QIZXPLSRATNBVUZNESEITABBCWUZBDFRLCYDRJBFYKFEWQIODUSPSAMBTCHLJCVRJIIWCHPLYLKBWLIPKTEWXJGHTKHW");
    msg.description.assign("KGMCEIZAUULVEDSATLCUKZYOILXQQGHEOJVOGOFGGXWESXKJZPRDUFQSRPOCROLOFJMINXCUXRJCIYVKILRSVMRAMIOQCWSDPRCPYRAGFWHUWWFUFJZDKZCYJLLVVHBYFEYVMKPNIQPBDAEMAZXWMAIXZLATY");
    msg.leader_speed = 0.411627098003;
    msg.leader_bank_lim = 0.902013142258;
    msg.pos_sim_err_lim = 0.37994895163;
    msg.pos_sim_err_wrn = 0.410119510208;
    msg.pos_sim_err_timeout = 37059U;
    msg.converg_max = 0.723251981889;
    msg.converg_timeout = 59802U;
    msg.comms_timeout = 45630U;
    msg.turb_lim = 0.0671067938043;
    msg.custom.assign("HVQVEPFJKKMYHURVPGZC");

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
    msg.setTimeStamp(0.403808363954);
    msg.setSource(57240U);
    msg.setSourceEntity(167U);
    msg.setDestination(431U);
    msg.setDestinationEntity(158U);
    msg.group_name.assign("VTSVLKZRVPOQBHESSPDSRNUHDCLTXVUZNFZUIZLAXLUMXMCVCLJDMTMUGWNFWJYRHDHKZUWNKAEAWTKTMAEVOQDOBCIOMYRHIIYQCZSQCFGIZISBDOJCPKXVEUQBSSQFWCPINNBKXQNMWXCOWNSJOBOHRBHJKVDXJWVPUXWATXBGQYGPSELFHAEGRWIJRLFHGUFAGMFKOZEQEEZRDGYYEACTPRYIT");
    msg.formation_name.assign("DXOSQLHOPZSBTFRPDQXLKCFQTPDWEGHBYVOCOMLYYUTYSCQOCMECYVOMJBIJAUXLGLIINMMJKBSRKVDAUDBTVCKMVJOTWEUCJWTQRRERWAUDBCZPUTBHAGILFGNFWKWLWTKRSZVHWNFIHMJOYPXNYKIZPZNTBJAPPJ");
    msg.plan_id.assign("CBMRDSWLQUQOWFBLIQWNSBIMPYEXUKPDOCDRHCPVCGAAICWKHEJFMNY");
    msg.description.assign("VAGNWGREPSQUTHXXATHCTMUSPQPMTEBWMFBZJJOIILWRSFKAKPNEDORPOBDVXQNGVJHOGZTZCYEHYXRCCFGKDLDUUYEXPXANLZZLEVDMBSMRRXLQMZSDIDOYISIVGWEOZHEIKJADIHLPOQLRMSJYPQICTUYCDLAKLSHJFAXAUNAUXFGXIKKDZWUGFYBFQO");
    msg.leader_speed = 0.225258913253;
    msg.leader_bank_lim = 0.0361399410757;
    msg.pos_sim_err_lim = 0.00177686205844;
    msg.pos_sim_err_wrn = 0.852778738468;
    msg.pos_sim_err_timeout = 33321U;
    msg.converg_max = 0.577287397847;
    msg.converg_timeout = 53561U;
    msg.comms_timeout = 15393U;
    msg.turb_lim = 0.950740334882;
    msg.custom.assign("WFKMNTALEFSFVKRGHHDAPSWAYMPBCQNKNKCKX");

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
    msg.setTimeStamp(0.543854612895);
    msg.setSource(42713U);
    msg.setSourceEntity(171U);
    msg.setDestination(58333U);
    msg.setDestinationEntity(254U);
    msg.control_src = 15261U;
    msg.control_ent = 108U;
    msg.timeout = 0.859494866624;
    msg.loiter_radius = 0.541415883169;
    msg.altitude_interval = 0.919048438225;

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
    msg.setTimeStamp(0.517051014493);
    msg.setSource(31937U);
    msg.setSourceEntity(77U);
    msg.setDestination(4964U);
    msg.setDestinationEntity(23U);
    msg.control_src = 27512U;
    msg.control_ent = 98U;
    msg.timeout = 0.932160572214;
    msg.loiter_radius = 0.689894788316;
    msg.altitude_interval = 0.541020039142;

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
    msg.setTimeStamp(0.299486379952);
    msg.setSource(26340U);
    msg.setSourceEntity(168U);
    msg.setDestination(1261U);
    msg.setDestinationEntity(133U);
    msg.control_src = 51578U;
    msg.control_ent = 253U;
    msg.timeout = 0.0917845307184;
    msg.loiter_radius = 0.246279821061;
    msg.altitude_interval = 0.183808113656;

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
    msg.setTimeStamp(0.63988188241);
    msg.setSource(29399U);
    msg.setSourceEntity(228U);
    msg.setDestination(41940U);
    msg.setDestinationEntity(225U);
    msg.flags = 17U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0148048307705;
    tmp_msg_0.speed_units = 143U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.369788697253;
    tmp_msg_1.z_units = 6U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.162339388556;
    msg.lon = 0.177553594185;
    msg.radius = 0.205366718884;

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
    msg.setTimeStamp(0.832188694985);
    msg.setSource(51005U);
    msg.setSourceEntity(70U);
    msg.setDestination(31833U);
    msg.setDestinationEntity(174U);
    msg.flags = 99U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.681612124635;
    tmp_msg_0.speed_units = 82U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.820766114884;
    tmp_msg_1.z_units = 231U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.317358206577;
    msg.lon = 0.23354409846;
    msg.radius = 0.316736629633;

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
    msg.setTimeStamp(0.141197849088);
    msg.setSource(56663U);
    msg.setSourceEntity(78U);
    msg.setDestination(61186U);
    msg.setDestinationEntity(61U);
    msg.flags = 142U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.76002973984;
    tmp_msg_0.speed_units = 132U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.404260988094;
    tmp_msg_1.z_units = 84U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.688392022001;
    msg.lon = 0.391887777582;
    msg.radius = 0.422852707896;

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
    msg.setTimeStamp(0.836737678818);
    msg.setSource(10423U);
    msg.setSourceEntity(240U);
    msg.setDestination(21189U);
    msg.setDestinationEntity(56U);
    msg.control_src = 1159U;
    msg.control_ent = 15U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 214U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.679830087777;
    tmp_tmp_msg_0_0.speed_units = 106U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.815568506014;
    tmp_tmp_msg_0_1.z_units = 50U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.472998739234;
    tmp_msg_0.lon = 0.878244637228;
    tmp_msg_0.radius = 0.893710224863;
    msg.reference.set(tmp_msg_0);
    msg.state = 198U;
    msg.proximity = 202U;

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
    msg.setTimeStamp(0.199056804114);
    msg.setSource(43831U);
    msg.setSourceEntity(125U);
    msg.setDestination(54854U);
    msg.setDestinationEntity(85U);
    msg.control_src = 25689U;
    msg.control_ent = 31U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 52U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.751986096981;
    tmp_tmp_msg_0_0.speed_units = 7U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.673578496599;
    tmp_tmp_msg_0_1.z_units = 200U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.00874659920048;
    tmp_msg_0.lon = 0.633480468114;
    tmp_msg_0.radius = 0.86275837083;
    msg.reference.set(tmp_msg_0);
    msg.state = 66U;
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
    msg.setTimeStamp(0.756726650066);
    msg.setSource(18803U);
    msg.setSourceEntity(203U);
    msg.setDestination(48245U);
    msg.setDestinationEntity(249U);
    msg.control_src = 9909U;
    msg.control_ent = 104U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 186U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.28060039319;
    tmp_tmp_msg_0_0.speed_units = 59U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.421437192779;
    tmp_tmp_msg_0_1.z_units = 18U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.857054217463;
    tmp_msg_0.lon = 0.981681512547;
    tmp_msg_0.radius = 0.342062102356;
    msg.reference.set(tmp_msg_0);
    msg.state = 2U;
    msg.proximity = 221U;

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
    msg.setTimeStamp(0.402826153321);
    msg.setSource(12300U);
    msg.setSourceEntity(56U);
    msg.setDestination(32976U);
    msg.setDestinationEntity(58U);
    msg.ax_cmd = 0.252827621063;
    msg.ay_cmd = 0.655951253906;
    msg.az_cmd = 0.752692399533;
    msg.ax_des = 0.630189639025;
    msg.ay_des = 0.892079006361;
    msg.az_des = 0.682954788757;
    msg.virt_err_x = 0.261286876029;
    msg.virt_err_y = 0.797234277628;
    msg.virt_err_z = 0.80805269054;
    msg.surf_fdbk_x = 0.140476064046;
    msg.surf_fdbk_y = 0.587636819545;
    msg.surf_fdbk_z = 0.105894167579;
    msg.surf_unkn_x = 0.783729848696;
    msg.surf_unkn_y = 0.00977591955809;
    msg.surf_unkn_z = 0.64059104976;
    msg.ss_x = 0.731497519358;
    msg.ss_y = 0.48205102752;
    msg.ss_z = 0.441178892426;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("CHEKGJQLHRZKADNM");
    tmp_msg_0.dist = 0.93355870424;
    tmp_msg_0.err = 0.236949792675;
    tmp_msg_0.ctrl_imp = 0.818684303486;
    tmp_msg_0.rel_dir_x = 0.738372690568;
    tmp_msg_0.rel_dir_y = 0.959340620624;
    tmp_msg_0.rel_dir_z = 0.0857822717634;
    tmp_msg_0.err_x = 0.282267896584;
    tmp_msg_0.err_y = 0.794018833723;
    tmp_msg_0.err_z = 0.620135573802;
    tmp_msg_0.rf_err_x = 0.89905618808;
    tmp_msg_0.rf_err_y = 0.511737937805;
    tmp_msg_0.rf_err_z = 0.672119048346;
    tmp_msg_0.rf_err_vx = 0.381774780547;
    tmp_msg_0.rf_err_vy = 0.526853952637;
    tmp_msg_0.rf_err_vz = 0.471955021304;
    tmp_msg_0.ss_x = 0.636928623897;
    tmp_msg_0.ss_y = 0.334551337922;
    tmp_msg_0.ss_z = 0.0537051876091;
    tmp_msg_0.virt_err_x = 0.280913545006;
    tmp_msg_0.virt_err_y = 0.321259757525;
    tmp_msg_0.virt_err_z = 0.997414085975;
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
    msg.setTimeStamp(0.864827240022);
    msg.setSource(42043U);
    msg.setSourceEntity(251U);
    msg.setDestination(51082U);
    msg.setDestinationEntity(40U);
    msg.ax_cmd = 0.0141723644843;
    msg.ay_cmd = 0.462741067365;
    msg.az_cmd = 0.229944819029;
    msg.ax_des = 0.490983387771;
    msg.ay_des = 0.549354144493;
    msg.az_des = 0.647926262853;
    msg.virt_err_x = 0.219210549831;
    msg.virt_err_y = 0.134055536204;
    msg.virt_err_z = 0.71896161188;
    msg.surf_fdbk_x = 0.986302262737;
    msg.surf_fdbk_y = 0.316067127086;
    msg.surf_fdbk_z = 0.0150904522926;
    msg.surf_unkn_x = 0.421520746707;
    msg.surf_unkn_y = 0.11096866978;
    msg.surf_unkn_z = 0.995169886789;
    msg.ss_x = 0.130463051029;
    msg.ss_y = 0.858273833164;
    msg.ss_z = 0.0885133590405;

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
    msg.setTimeStamp(0.063755993496);
    msg.setSource(35072U);
    msg.setSourceEntity(111U);
    msg.setDestination(22692U);
    msg.setDestinationEntity(45U);
    msg.ax_cmd = 0.572850850419;
    msg.ay_cmd = 0.876663228653;
    msg.az_cmd = 0.69808202516;
    msg.ax_des = 0.276270742865;
    msg.ay_des = 0.254070416289;
    msg.az_des = 0.202404419464;
    msg.virt_err_x = 0.741804166615;
    msg.virt_err_y = 0.398282483097;
    msg.virt_err_z = 0.863751094036;
    msg.surf_fdbk_x = 0.689150165449;
    msg.surf_fdbk_y = 0.990041888069;
    msg.surf_fdbk_z = 0.640576476897;
    msg.surf_unkn_x = 0.426207293185;
    msg.surf_unkn_y = 0.380986129693;
    msg.surf_unkn_z = 0.788773210682;
    msg.ss_x = 0.0914525354522;
    msg.ss_y = 0.0604242984379;
    msg.ss_z = 0.475981043631;

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
    msg.setTimeStamp(0.174647387511);
    msg.setSource(25740U);
    msg.setSourceEntity(144U);
    msg.setDestination(14986U);
    msg.setDestinationEntity(156U);
    msg.s_id.assign("LHALNNXEZMJXUYTDUMFYLSOQNTRMSJXKZBJNLJCLSFBUXQWJPEMEVSDKRYMIKIOIKCFOZTBDZSXTACUHGKCPFGDGCEDPIFMBAWTPPGETYSYOGGRZHMSFNCIOZPLQQBHBVKAYWNDEHQVINYNIDEBJVRYZUWXAZFVGRGLOOWKDMTPVJXTCDVHHWEZHTFYTNWQKASXUQCBOJAELDHO");
    msg.dist = 0.720000648221;
    msg.err = 0.682779692832;
    msg.ctrl_imp = 0.248920349702;
    msg.rel_dir_x = 0.86251265451;
    msg.rel_dir_y = 0.934415709951;
    msg.rel_dir_z = 0.294842834863;
    msg.err_x = 0.280466984648;
    msg.err_y = 0.979379881983;
    msg.err_z = 0.0729123798748;
    msg.rf_err_x = 0.0456928834018;
    msg.rf_err_y = 0.641623046216;
    msg.rf_err_z = 0.592280638765;
    msg.rf_err_vx = 0.927817218466;
    msg.rf_err_vy = 0.440346121443;
    msg.rf_err_vz = 0.805090146262;
    msg.ss_x = 0.374905893077;
    msg.ss_y = 0.673847090541;
    msg.ss_z = 0.545334859978;
    msg.virt_err_x = 0.330752830087;
    msg.virt_err_y = 0.719485766545;
    msg.virt_err_z = 0.778411171845;

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
    msg.setTimeStamp(0.512420077315);
    msg.setSource(24810U);
    msg.setSourceEntity(205U);
    msg.setDestination(39457U);
    msg.setDestinationEntity(69U);
    msg.s_id.assign("IEFDTAGLJWGOVNPCHMLIDPCHILXGLEZBOSKFQAYLOZSVDPRYJCBKAXCKXHFIBEDMUMHFUENZIJWUAYVHAKCYEGUCDHEVSSWNTDRLUCOPFNNLRNSSWYVBFUGCOQOHWJFT");
    msg.dist = 0.67785150554;
    msg.err = 0.517262037959;
    msg.ctrl_imp = 0.390384916274;
    msg.rel_dir_x = 0.828144369731;
    msg.rel_dir_y = 0.102218074177;
    msg.rel_dir_z = 0.18601834178;
    msg.err_x = 0.588905364672;
    msg.err_y = 0.743508984786;
    msg.err_z = 0.627556148014;
    msg.rf_err_x = 0.289985227548;
    msg.rf_err_y = 0.793282791462;
    msg.rf_err_z = 0.279102635987;
    msg.rf_err_vx = 0.189004989951;
    msg.rf_err_vy = 0.920751905624;
    msg.rf_err_vz = 0.913189469123;
    msg.ss_x = 0.420641895;
    msg.ss_y = 0.997860812974;
    msg.ss_z = 0.799325863457;
    msg.virt_err_x = 0.258161988716;
    msg.virt_err_y = 0.861412987592;
    msg.virt_err_z = 0.177869981593;

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
    msg.setTimeStamp(0.0959311556837);
    msg.setSource(28965U);
    msg.setSourceEntity(103U);
    msg.setDestination(17436U);
    msg.setDestinationEntity(45U);
    msg.s_id.assign("JWXLTBQAZZCTNVXBZFQJFODQDWTBTWOEUEUKMMKTGTCWUIDVJNGNEORNYEBOHPXNUDADKQMBHWBYJSLMCWAUOTUDMHSUIRYIHVKXLIFPFZADAHCGJOSYAYVPAYFHRTBESNHGHEJZQFPFFYNLSFSILQYYYMRZGMAALRZLUTGRDRKSILXJQOGXSZVQARHCWSKXIHKWXCRNRSCDVPBITJWVLMKPKXQXPLVUE");
    msg.dist = 0.289893701451;
    msg.err = 0.0151261920989;
    msg.ctrl_imp = 0.721015454067;
    msg.rel_dir_x = 0.780347471708;
    msg.rel_dir_y = 0.873780843211;
    msg.rel_dir_z = 0.619541375596;
    msg.err_x = 0.337352325548;
    msg.err_y = 0.475240873663;
    msg.err_z = 0.123136617182;
    msg.rf_err_x = 0.201130351959;
    msg.rf_err_y = 0.948847309338;
    msg.rf_err_z = 0.527949673818;
    msg.rf_err_vx = 0.0997545579973;
    msg.rf_err_vy = 0.513952714166;
    msg.rf_err_vz = 0.135537841584;
    msg.ss_x = 0.531024390984;
    msg.ss_y = 0.482989620605;
    msg.ss_z = 0.250639715093;
    msg.virt_err_x = 0.857803406708;
    msg.virt_err_y = 0.503695137889;
    msg.virt_err_z = 0.58702772633;

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
    msg.setTimeStamp(0.769148372987);
    msg.setSource(38962U);
    msg.setSourceEntity(92U);
    msg.setDestination(23638U);
    msg.setDestinationEntity(87U);
    msg.timeout = 4047U;
    msg.rpm = 0.368371623162;
    msg.direction = 226U;
    msg.custom.assign("HQNRTXWYAFODVEAQBJQCXBNBGJHEYKPYDDNSOMVFPAAYLPSOLCEVZCMGWWKRCBZZUURFMTGZTRFLTYCCVMXXVVYDJMARQPSEPXHDDVZMNKBAXXPHGWIIFXSWBHTJHTMMEILXYWGLILHFBGNRFATBJKQUOWADNEIPDQL");

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
    msg.setTimeStamp(0.267089176585);
    msg.setSource(45105U);
    msg.setSourceEntity(71U);
    msg.setDestination(44237U);
    msg.setDestinationEntity(194U);
    msg.timeout = 7844U;
    msg.rpm = 0.463759377069;
    msg.direction = 246U;
    msg.custom.assign("DYHZMMFGLKGHZCNHIPBQQVGVMNKUGJHRZCXSZRPADHWL");

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
    msg.setTimeStamp(0.942593508816);
    msg.setSource(15882U);
    msg.setSourceEntity(68U);
    msg.setDestination(23901U);
    msg.setDestinationEntity(218U);
    msg.timeout = 40362U;
    msg.rpm = 0.386649270557;
    msg.direction = 253U;
    msg.custom.assign("LRCDLHWOMTBAIWRCMGJOZPWACXDESUPEVQGLTLRRZNXLJWNMGDASGKYHWIEQFODABYVVUEVJSICIVYNDNOYAFJKOZFELDZRKZFYYTGWPSOLBPIIFGJTQKTLLJUALJNIMXEWCXXTTMRRZKI");

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
    msg.setTimeStamp(0.028509008882);
    msg.setSource(34828U);
    msg.setSourceEntity(69U);
    msg.setDestination(4240U);
    msg.setDestinationEntity(11U);
    msg.formation_name.assign("AWNBGMQZJQFDRCGZUCOOTEIMHTXATZGHLAGPLRRVFWHYGYQXVWQPOLRKNCKDXEMEMRBONBYSJSJCVPJKEAFIIWABZZRULYTCXBWFINYJULNOBNRHNUECLERHDZIUXGPZKQQNWWSXBFNTESOZVUPAMCKIYKGDYDFWOHFESDFOBOKXAHEQPPJDTZFVWMDAUPGPXJWXIVVHVCDRCKYAQMDVEHIUZRBNSYAIULQHJXTPYVGKSSOMTJBIMCQ");
    msg.type = 108U;
    msg.op = 196U;
    msg.group_name.assign("KOCKRIOELRZFQFXDNIXYWBHUMRGMOYHCAFRBEBHEETSNKEXDBANWLCJAZICUGHJSIZJHCERUYAWLNPUDQSYDGLLSBTSDPTXYOTKFVAIZGMJPVTMQASKPOFDAEZKWOHWOXVHKCFRGDYQOFNIMZGGVVJORNCRSZUJHBXUQWPJGQYKTQWUUWJB");
    msg.plan_id.assign("UPTDVQQJWEPDPOKPLELOCLFNYNLVZQKBSVEWUHTXAZGBXMEYIDDIRCUJAJUDSU");
    msg.description.assign("XUOYGIHDSVMJBLFQTLZMCWCQLGIUVZPCXRJYUIFGTXOONWABOISWTN");
    msg.reference_frame = 124U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56690U;
    tmp_msg_0.off_x = 0.852301975768;
    tmp_msg_0.off_y = 0.647908340348;
    tmp_msg_0.off_z = 0.682977301468;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.073580164636;
    msg.leader_speed_min = 0.80792063531;
    msg.leader_speed_max = 0.413934912772;
    msg.leader_alt_min = 0.0259315202051;
    msg.leader_alt_max = 0.85244346337;
    msg.pos_sim_err_lim = 0.69898588493;
    msg.pos_sim_err_wrn = 0.439780335114;
    msg.pos_sim_err_timeout = 17419U;
    msg.converg_max = 0.0354528739725;
    msg.converg_timeout = 22876U;
    msg.comms_timeout = 11472U;
    msg.turb_lim = 0.456178602877;
    msg.custom.assign("UTNJIZYJVT");

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
    msg.setTimeStamp(0.499251092537);
    msg.setSource(32891U);
    msg.setSourceEntity(230U);
    msg.setDestination(46434U);
    msg.setDestinationEntity(63U);
    msg.formation_name.assign("BLFNSICYPXVFUAEJOQKDSKDFPFREQIJEDAGOUBAHGGEIMVRPFAWCJICHMSMTLHJTTCEQWKOULAMBKEZSIUNQEVMEQJYIXEHPFAZIXYYRTHXVNZYZMVLWJ");
    msg.type = 1U;
    msg.op = 41U;
    msg.group_name.assign("AEIWVIUCHHYRIEXTAXQYLAEVHWRXIWBSAMOQCFNDOMZYRFCXPUDJVHGOQTSQFWXUDIHKTXPSMBXRNPNGUJLPRBALKBDHFJKDNCDJTDJZSJKZYMVZKBPAEYPXYLKBFBOCRJQMIHUVDEITASZOAPRCBWLCPGQVCMTGCLSSDZZEYVUEEJZGIOVEIM");
    msg.plan_id.assign("ELMOWNOKLCFBSSJHVKFPNGOXWXZUADUBAWVIJBTGILTFDZJPEXYXPQXPBSZOHDJJUAGFVNUYMIQOWICWNKGQSUINMTPFUCFPNLNFKZSYTCZTWKSYATIBRFBSMRXDAYGJDXRKBTUARJRURNVQHVCRMMMSQJROG");
    msg.description.assign("WNLKKWJFMWBRMASOXGRAIPXTIWNEQOVTAQDAIZNADELNRAVTMXMVOENLZJPXVCLAJVERVNSDTHIBMIOPKQHHBDJPR");
    msg.reference_frame = 79U;
    msg.leader_bank_lim = 0.89595056532;
    msg.leader_speed_min = 0.145235840247;
    msg.leader_speed_max = 0.591447839722;
    msg.leader_alt_min = 0.716346062051;
    msg.leader_alt_max = 0.35631160924;
    msg.pos_sim_err_lim = 0.57536463893;
    msg.pos_sim_err_wrn = 0.344739899615;
    msg.pos_sim_err_timeout = 58515U;
    msg.converg_max = 0.947420326453;
    msg.converg_timeout = 27484U;
    msg.comms_timeout = 10433U;
    msg.turb_lim = 0.495706697425;
    msg.custom.assign("SIWCYRWEANWDZOMLJNSXONINGTCZIGRGDZRPQQFIMXWDSPVUYSTVJXZYJORWYABBLAYXEPBRUYTJDZQJOPIXESCABFRPKPQTYTMFAYHPTMXFVILNDNCTUCUAXDOCAKKWAZHHHGWZRZFJWPCDVGSOLELVUGQIFYKUSKSONVINAVBVMIBRNWLXELGKHUCOLDKGXTXF");

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
    msg.setTimeStamp(0.402737413699);
    msg.setSource(35093U);
    msg.setSourceEntity(21U);
    msg.setDestination(46819U);
    msg.setDestinationEntity(253U);
    msg.formation_name.assign("BFGHZQGTRHDXNVQUSKJVMEMOMNNTYUIUOVRCDES");
    msg.type = 131U;
    msg.op = 212U;
    msg.group_name.assign("DNFMSRFPDKQBPMNRCYOCTYMNOXVNVWGRBZMSHVWRTQTQIBJJXYQNSDYLPXPSHZYMMKGSHPXZFNQIKLAAYFOJBZZFVXEYCSMKLXCRQCGTIULXFAFGRGNXPTNJTUIURJLJLOVFWCNCKWRRTPQXL");
    msg.plan_id.assign("WQODAEOPXDKSCBYHRQAUGZPBYXSVDKTOSHHQBLNJBUPMEKSEZMZYZPVOJGIPTS");
    msg.description.assign("KTOECHHLKEIXNBXTHSROFHPVYBSGLXWBO");
    msg.reference_frame = 172U;
    msg.leader_bank_lim = 0.918020340058;
    msg.leader_speed_min = 0.612265283842;
    msg.leader_speed_max = 0.554990569663;
    msg.leader_alt_min = 0.0486250703148;
    msg.leader_alt_max = 0.494135712416;
    msg.pos_sim_err_lim = 0.00136893162581;
    msg.pos_sim_err_wrn = 0.256559611166;
    msg.pos_sim_err_timeout = 42432U;
    msg.converg_max = 0.14320721668;
    msg.converg_timeout = 45564U;
    msg.comms_timeout = 36878U;
    msg.turb_lim = 0.0409965393132;
    msg.custom.assign("JENWKTNMWOITVYX");

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
    msg.setTimeStamp(0.0948430507444);
    msg.setSource(14691U);
    msg.setSourceEntity(39U);
    msg.setDestination(5184U);
    msg.setDestinationEntity(217U);
    msg.timeout = 21195U;
    msg.lat = 0.201128244236;
    msg.lon = 0.195540204037;
    msg.z = 0.452066269112;
    msg.z_units = 226U;
    msg.speed = 0.780115373749;
    msg.speed_units = 147U;
    msg.custom.assign("XBISGKRROFVAIGZXDWKRPYAMCLGTXWJLOVPZFRRDORVAUZWCRCSEIKCLLTPMEJEMYHTFYYCM");

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
    msg.setTimeStamp(0.389451334579);
    msg.setSource(21952U);
    msg.setSourceEntity(152U);
    msg.setDestination(39302U);
    msg.setDestinationEntity(112U);
    msg.timeout = 13931U;
    msg.lat = 0.765362246928;
    msg.lon = 0.103678189041;
    msg.z = 0.61301493458;
    msg.z_units = 80U;
    msg.speed = 0.172225888465;
    msg.speed_units = 204U;
    msg.custom.assign("LGWGDDJGFNQIBRYYJLHLSWZEDHAMYYMRMSZHXBCIHUBXISZFGTVAWEUSXDPTEJCFZKRBOCAFLHQ");

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
    msg.setTimeStamp(0.894374465968);
    msg.setSource(43019U);
    msg.setSourceEntity(244U);
    msg.setDestination(29198U);
    msg.setDestinationEntity(76U);
    msg.timeout = 50377U;
    msg.lat = 0.534817075502;
    msg.lon = 0.729798440297;
    msg.z = 0.667818480232;
    msg.z_units = 87U;
    msg.speed = 0.486637576298;
    msg.speed_units = 98U;
    msg.custom.assign("VEENNOAFOCRKIFMCZVU");

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
    msg.setTimeStamp(0.30515813626);
    msg.setSource(10544U);
    msg.setSourceEntity(217U);
    msg.setDestination(46630U);
    msg.setDestinationEntity(191U);
    msg.timeout = 9003U;
    msg.lat = 0.349804933778;
    msg.lon = 0.176817337695;
    msg.z = 0.625825328078;
    msg.z_units = 68U;
    msg.speed = 0.297010011227;
    msg.speed_units = 118U;
    msg.custom.assign("RZOQRCOEJGJIWGYMDYDKQBKCBKYECKGJUKAMGQWNPFNWUSSSUHZMVMCXPVDLRSUODBQPNLDAYXGLIKLUBCMWCEDAHHFXPHNSLKVEAUXFOYWHTIXSZNJDFEVBNDYGTJUBTIIMJVBVXFACZILKTMULOSXTEROIWTNRBNZJGTWXSEIAAFFBJBGHEYHTPFXHZRRSPJIZCGQQONLFTXQRVHZEWPORQYAWWPHPDVPDVY");

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
    msg.setTimeStamp(0.854897551998);
    msg.setSource(54228U);
    msg.setSourceEntity(158U);
    msg.setDestination(47012U);
    msg.setDestinationEntity(184U);
    msg.timeout = 58U;
    msg.lat = 0.360904767278;
    msg.lon = 0.236791678018;
    msg.z = 0.39570736079;
    msg.z_units = 122U;
    msg.speed = 0.64708708905;
    msg.speed_units = 192U;
    msg.custom.assign("SPVEDYANLFHCOVCGTDGYWAQJBOHXMHLIWQGKUTRNLKRXVIPNJPZYNVXMRCPKAFEOHRTMOEUBDUBQNEDOQCLPHEJARDNVKGMBMAZILHJREKQBSRMSZXVBFTYOXRSTYFGUPLEUBJIBUYWQWGFRYISNCSTMFHMQXTZOYVSSTJKXZSLIBJINAPKDGTUNADQVZMD");

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
    msg.setTimeStamp(0.158278046927);
    msg.setSource(58052U);
    msg.setSourceEntity(27U);
    msg.setDestination(25005U);
    msg.setDestinationEntity(38U);
    msg.timeout = 61366U;
    msg.lat = 0.950237441343;
    msg.lon = 0.8786660191;
    msg.z = 0.516336513122;
    msg.z_units = 82U;
    msg.speed = 0.296483303335;
    msg.speed_units = 199U;
    msg.custom.assign("IFDFSJMJRSGTSDTQZXZZZGVVNTXXMGABPWKASPWUBIFMMYKLBKUDKXIKQEDCBXCPPSGWCBFGQYOXFXWOGQOGYUOUYFMRIBNEZGCLBVHLMFFNPNWWAZUMOQHVCVZATTTOQNUYHYWKOVNPR");

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
    msg.setTimeStamp(0.851159386747);
    msg.setSource(54106U);
    msg.setSourceEntity(205U);
    msg.setDestination(65083U);
    msg.setDestinationEntity(104U);
    msg.arrival_time = 0.564252617121;
    msg.lat = 0.0878147601834;
    msg.lon = 0.502991257227;
    msg.z = 0.389708408665;
    msg.z_units = 0U;
    msg.travel_z = 0.739881589238;
    msg.travel_z_units = 73U;
    msg.delayed = 64U;

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
    msg.setTimeStamp(0.419265756017);
    msg.setSource(37028U);
    msg.setSourceEntity(213U);
    msg.setDestination(28844U);
    msg.setDestinationEntity(155U);
    msg.arrival_time = 0.350866373557;
    msg.lat = 0.907913228801;
    msg.lon = 0.599001711026;
    msg.z = 0.646548367797;
    msg.z_units = 37U;
    msg.travel_z = 0.226276281902;
    msg.travel_z_units = 194U;
    msg.delayed = 36U;

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
    msg.setTimeStamp(0.156213471144);
    msg.setSource(44751U);
    msg.setSourceEntity(202U);
    msg.setDestination(41299U);
    msg.setDestinationEntity(47U);
    msg.arrival_time = 0.570026236475;
    msg.lat = 0.218569834065;
    msg.lon = 0.585694645738;
    msg.z = 0.496836669681;
    msg.z_units = 19U;
    msg.travel_z = 0.778324616903;
    msg.travel_z_units = 167U;
    msg.delayed = 132U;

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
    msg.setTimeStamp(0.0794985947062);
    msg.setSource(39849U);
    msg.setSourceEntity(44U);
    msg.setDestination(65172U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.799181685357;
    msg.lon = 0.827921665924;
    msg.z = 0.122347135597;
    msg.z_units = 147U;
    msg.speed = 0.592730187579;
    msg.speed_units = 52U;
    msg.bearing = 0.0227462834924;
    msg.cross_angle = 0.611400171289;
    msg.width = 0.130898654806;
    msg.length = 0.830863696998;
    msg.coff = 89U;
    msg.angaperture = 0.291461769332;
    msg.range = 58258U;
    msg.overlap = 129U;
    msg.flags = 19U;
    msg.custom.assign("TFZPBMPCOOQJZSURLREUFG");

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
    msg.setTimeStamp(0.777323976814);
    msg.setSource(62766U);
    msg.setSourceEntity(158U);
    msg.setDestination(23681U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.990575706932;
    msg.lon = 0.614422040374;
    msg.z = 0.773411909142;
    msg.z_units = 44U;
    msg.speed = 0.753418725028;
    msg.speed_units = 222U;
    msg.bearing = 0.121885270936;
    msg.cross_angle = 0.420005876925;
    msg.width = 0.634821913155;
    msg.length = 0.933108268043;
    msg.coff = 62U;
    msg.angaperture = 0.0253055906367;
    msg.range = 45446U;
    msg.overlap = 71U;
    msg.flags = 206U;
    msg.custom.assign("LFCCHFXXSHAKRYAOSCMWBDIJRSRJYMMWFOXLDBPMWJBHIEZFAQAPBTRNEXNUEUHFGTUKGOOGNJLRQVVWPLXZGBZUWGNMIGIGJAOQORJHYNPVVNUKDTVOQWAQOAYO");

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
    msg.setTimeStamp(0.74805616288);
    msg.setSource(51771U);
    msg.setSourceEntity(177U);
    msg.setDestination(53011U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.125538255465;
    msg.lon = 0.558446340564;
    msg.z = 0.309955959668;
    msg.z_units = 89U;
    msg.speed = 0.856135294882;
    msg.speed_units = 112U;
    msg.bearing = 0.835733859111;
    msg.cross_angle = 0.544015952413;
    msg.width = 0.466493344381;
    msg.length = 0.953911471806;
    msg.coff = 31U;
    msg.angaperture = 0.986115834445;
    msg.range = 4761U;
    msg.overlap = 30U;
    msg.flags = 136U;
    msg.custom.assign("FCOSGXMEHYPWEAELLPELXPLZUGPMUSQSYFXJKOTIZBIKLWDVNXMHHDZZWQZTWRONJVYOUZABDMSFLVWTECVMICRJMZQRTAQSMJNUEBJPGIKSHYSAHPTBWGAAUKDHJGLLKFCCSAUJBYCHBUNTZWIOPVMGYRPWALELNXXHTNUDFKPKDPWJRBRXVKOBWCHZGDJZTNYRAYJVFQGQTCOTIFXKDSKEGVYVIORAREMEGDRQUXFUNXSICDFCY");

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
    msg.setTimeStamp(0.673348225934);
    msg.setSource(14921U);
    msg.setSourceEntity(224U);
    msg.setDestination(8908U);
    msg.setDestinationEntity(24U);
    msg.timeout = 45761U;
    msg.lat = 0.0852072667562;
    msg.lon = 0.919917949906;
    msg.z = 0.0591058070931;
    msg.z_units = 174U;
    msg.speed = 0.951303247826;
    msg.speed_units = 153U;
    msg.syringe0 = 27U;
    msg.syringe1 = 193U;
    msg.syringe2 = 251U;
    msg.custom.assign("EEMVIDORRFNDGVTIHFXAMTTRVOVEJBUAJDEJSTIPOGSXYJQQRCQXMWDDKVBQFDYQSZVPZNFOPSUIBMFAQJBJTXFPKHSLKITMIHNKZZQBGGPXKCYEYCNMQUDDRINYWTLUSLHCWNEMKUXHASCJURRBFLLPVKHVYHTLLOOUYMWPAYABXWCGWCLXZGGVLZDGFJNUUYOQFVMZKQXCEEWZSFWUXPAHNPRGKJIMNZTTIOCLPDAWNWKIAYH");

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
    msg.setTimeStamp(0.130344384169);
    msg.setSource(49931U);
    msg.setSourceEntity(13U);
    msg.setDestination(3326U);
    msg.setDestinationEntity(72U);
    msg.timeout = 7027U;
    msg.lat = 0.722376722329;
    msg.lon = 0.289203922555;
    msg.z = 0.0788062708395;
    msg.z_units = 107U;
    msg.speed = 0.640902736359;
    msg.speed_units = 212U;
    msg.syringe0 = 111U;
    msg.syringe1 = 132U;
    msg.syringe2 = 198U;
    msg.custom.assign("GUOGKOHRLDWNA");

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
    msg.setTimeStamp(0.809628515215);
    msg.setSource(33853U);
    msg.setSourceEntity(196U);
    msg.setDestination(40141U);
    msg.setDestinationEntity(34U);
    msg.timeout = 53352U;
    msg.lat = 0.936889898756;
    msg.lon = 0.967057285218;
    msg.z = 0.211579645491;
    msg.z_units = 103U;
    msg.speed = 0.265141563104;
    msg.speed_units = 136U;
    msg.syringe0 = 133U;
    msg.syringe1 = 161U;
    msg.syringe2 = 22U;
    msg.custom.assign("HAHAMCVQEYORSTWSRLKXODYRHBZXBIDDXJNMJLHMHLAXROUNSDKBXZNNCTPSBLGVMAJTIFLNSBTDIWEJLFVLSCGPIKRNTIWFFHCRFEAXEOCFZZAAEGCGKIWWKYAHQRVTYXYIQQBPCPQDWUGKLQJYZEZEGZFUMTXKWXUYUONHRHFKAPDSPKTBYTSNISEWVLCPRIPPEVWDQCNBUU");

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
    msg.setTimeStamp(0.654918556183);
    msg.setSource(7725U);
    msg.setSourceEntity(100U);
    msg.setDestination(41821U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.903553562388);
    msg.setSource(52870U);
    msg.setSourceEntity(152U);
    msg.setDestination(61745U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.883959222322);
    msg.setSource(9681U);
    msg.setSourceEntity(129U);
    msg.setDestination(54184U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.674863585639);
    msg.setSource(65360U);
    msg.setSourceEntity(242U);
    msg.setDestination(5020U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.951826971676;
    msg.lon = 0.64538053433;
    msg.z = 0.0120012651714;
    msg.z_units = 30U;
    msg.speed = 0.543023347214;
    msg.speed_units = 97U;
    msg.takeoff_pitch = 0.679889793298;
    msg.custom.assign("ENHNINHJVLKUCYIXDERUEFZJBZZNKDTWAPZXPRNEHEHVWLMLSXWUBDYUQRSOHQOZFRIVCLOKSJGRXIFSLCUYPQYDQJATGSCJCFDKLFOPXGQAGLNOYAYWDAUXJPAKWEBBYLMAPEQNCBVIWMKTNHFBFGKELQJDQTBFEGMIGXNMYDNGHJIATSBZWXJTVKDCSPTYBUMZSORIPVGVOVVHWPIOCRXGQTQUHRFZKZAMOMORACDXJMTVSPLHIF");

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
    msg.setTimeStamp(0.796799571231);
    msg.setSource(16369U);
    msg.setSourceEntity(212U);
    msg.setDestination(31059U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.944111096387;
    msg.lon = 0.743576813639;
    msg.z = 0.324028692986;
    msg.z_units = 199U;
    msg.speed = 0.971965238358;
    msg.speed_units = 136U;
    msg.takeoff_pitch = 0.95673524041;
    msg.custom.assign("OYMKVSXGFUPZRWHEPNN");

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
    msg.setTimeStamp(0.945039947627);
    msg.setSource(64610U);
    msg.setSourceEntity(17U);
    msg.setDestination(16994U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.275000714893;
    msg.lon = 0.589094966506;
    msg.z = 0.107058950837;
    msg.z_units = 242U;
    msg.speed = 0.153685053986;
    msg.speed_units = 0U;
    msg.takeoff_pitch = 0.305290028546;
    msg.custom.assign("HUPLWWJQITBFFUENGXACXGWBDMYAGRUDQHHLIYODDKPSOTQOHGBLTTJSYZEERZUYTMJSXSMUCTDBHJMLXEVCIHSLBGXYXKFHMNLOIQHFQVKAUSIDNSWDYCPEZMCPMFFVYGAEECSCZWRHXATJLKKPVRYFEZXDNBFZWPZMSNKKBDSGZFWKOUVITPQQKXZQYRJWCMABPIUYICXRNJGABLNWOPUARRFOTRKNHIOLVPVZBNLOAMEVVOCIRVGQQJTAJJ");

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
    msg.setTimeStamp(0.521131955501);
    msg.setSource(24209U);
    msg.setSourceEntity(0U);
    msg.setDestination(31957U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.0768284378179;
    msg.lon = 0.864923567873;
    msg.z = 0.427750802454;
    msg.z_units = 147U;
    msg.speed = 0.488616036599;
    msg.speed_units = 34U;
    msg.abort_z = 0.0778814837551;
    msg.bearing = 0.169478732992;
    msg.glide_slope = 14U;
    msg.glide_slope_alt = 0.993402962394;
    msg.custom.assign("CJISTRJUUWFJHGOFCHIABAYAXTNXZLDDGDEZOJGXGQAPHFJBNGEHGQEFZFSYZXOWFIHYLLEBCJBPATDIBMIYLOEDHTZRMKSGRSVTPOUYKXLLTBNKEAQKIYARZUKUENKDTVTDIKQRROXPWOWHXUCVMUCKHLSQPMIXZJPIQCNPMYAVGUFNBSUWHDWRMVCZBTWPMWXVORXWVFVD");

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
    msg.setTimeStamp(0.611767847491);
    msg.setSource(16182U);
    msg.setSourceEntity(14U);
    msg.setDestination(4252U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.938729970816;
    msg.lon = 0.176804617088;
    msg.z = 0.886332175819;
    msg.z_units = 72U;
    msg.speed = 0.446682678636;
    msg.speed_units = 155U;
    msg.abort_z = 0.972782382007;
    msg.bearing = 0.978294514372;
    msg.glide_slope = 180U;
    msg.glide_slope_alt = 0.885455750948;
    msg.custom.assign("QLKPFTXVWJMOOYLSKJDBBRUZAQMDNZSZZ");

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
    msg.setTimeStamp(0.744989100356);
    msg.setSource(51453U);
    msg.setSourceEntity(54U);
    msg.setDestination(14922U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.696132450459;
    msg.lon = 0.656529139723;
    msg.z = 0.698527259;
    msg.z_units = 136U;
    msg.speed = 0.628662189421;
    msg.speed_units = 66U;
    msg.abort_z = 0.851781847944;
    msg.bearing = 0.624446486887;
    msg.glide_slope = 210U;
    msg.glide_slope_alt = 0.337708488315;
    msg.custom.assign("MDAGJSQOODSIPCGDWZHSTBBIARQZROIMGNWATMZERPEOEMFYJXSIASEKCBLYZQHHIJSKVMXTFSFZFXVKWBGOPDCIEARFOUEGXBYPLWYAMAEWJGNMFHJXKVURZLPNUFAORZQTBTDLKXQHCYNNWMYUINBXULQIWHWOVWWFADUFTVPBLOYJZURCXKSYDYRJDHECGCINPLJ");

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
    msg.setTimeStamp(0.469672590407);
    msg.setSource(37903U);
    msg.setSourceEntity(119U);
    msg.setDestination(59315U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.587245377438;
    msg.lon = 0.240992052342;
    msg.speed = 0.0356269297883;
    msg.speed_units = 203U;
    msg.limits = 96U;
    msg.max_depth = 0.844499021531;
    msg.min_alt = 0.322936244317;
    msg.time_limit = 0.600769753194;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.217355815902;
    tmp_msg_0.lon = 0.090197590739;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("YPJPVDKYFNYPFQIBWPIRQAXLFYLMBDMSXSDKZTFBGSGDNODIHRBOEQNQYMTHDTCVEFJXXSNKQCLGOUKKZZUUGWZLIEOVAVWWVQVEABBZLSZATADLJ");
    msg.custom.assign("NXHFYCDYRVVSTOPGNUPRWNYIODMZRXMTMQGTWXCYOKUBGEUABISYHWZPNUJSHEMLNHXDZFYEPUEJTIAABFT");

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
    msg.setTimeStamp(0.160465168805);
    msg.setSource(64632U);
    msg.setSourceEntity(69U);
    msg.setDestination(31913U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.206616978844;
    msg.lon = 0.611943695199;
    msg.speed = 0.216292750618;
    msg.speed_units = 43U;
    msg.limits = 78U;
    msg.max_depth = 0.16661776515;
    msg.min_alt = 0.321172570611;
    msg.time_limit = 0.384210617669;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.940929105428;
    tmp_msg_0.lon = 0.326578711326;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("HBPDQSSLOFAUMYMBRHH");
    msg.custom.assign("HJSSYOUZTBNZSFUTGFSSJHDNFLXWIHSXNYRAGWWBMXDXEBRSIAKSBNTLLQXAPIBEWOUQAOZCVJQCOVBPFEBNDMPEEQXOVWGZOQADTDGJRJIPGRTTGVUCYRRWYYMFUKZMPILHZQMMVDAMRLKAKAYPDSNMBOZ");

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
    msg.setTimeStamp(0.628561440735);
    msg.setSource(24551U);
    msg.setSourceEntity(80U);
    msg.setDestination(45777U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.327515585591;
    msg.lon = 0.714858445399;
    msg.speed = 0.842762046216;
    msg.speed_units = 22U;
    msg.limits = 27U;
    msg.max_depth = 0.546852799009;
    msg.min_alt = 0.40174088584;
    msg.time_limit = 0.481000302353;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.341317958184;
    tmp_msg_0.lon = 0.619758906893;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("YKTTYHKETSIAURRXOPYHTVJQERUMXKMTWQENBILPUTJFEXPLWGSUYAYJGGNOEZYBDRDMKBOBHEZREBGTCGVCLXSDUUZZEUJFCGXLZISCVQWJMXYOHWVAWAHZRSPNZDIHQRKLMGQOAIFCIQDDCWUSKYPMLAYKLSBDYVFVVAQWMFLXMJADQBJTFOFVNAJAHBMMUWRSFNFKOIKLOKFCOIZITQTUPPOWCDPNGVJEZNBHICVQSCESXXZ");
    msg.custom.assign("VTRUHFMWLSLEBWFOXFMGSKKUURRAWIYRTDVVINRSZSBYCCIWAPNMJNBJAXEMSZZOYCOLQOZZUQATSWKDMCAJKBLMRZEXJFFFMDEVGZJTRHZJCYXWNFW");

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
    msg.setTimeStamp(0.606730473437);
    msg.setSource(7666U);
    msg.setSourceEntity(107U);
    msg.setDestination(34396U);
    msg.setDestinationEntity(242U);
    msg.target.assign("UKJDLWTGGACVABGHHOWJNPPZVTASQNUXJSZERYFSYBCZPOZDKFJICRXQQYCGKAMRZDNWDNFAGNUKBLVCVPHIHJFIADYEGCJSXRDKNLBLBEKPZXZHMVPRXNOUKIMWWQZIYHKSHYYMS");
    msg.max_speed = 0.628909709506;
    msg.speed_units = 247U;
    msg.lat = 0.376724607212;
    msg.lon = 0.00675888348448;
    msg.z = 0.884583239347;
    msg.z_units = 122U;
    msg.custom.assign("CCRAHBJNXIFASVYXKGDZKVEYJMIWEMUEGQEIIDWMHLVTIEWLJUGHZZNWADAOMZSDLPDUJCZSSENILOTYXFKHXXPZLOUANZCOOVVQXMQQPWRUFRJAGIPXVNKWMXSDBYSUZCRBKSRYPJUPLDFAOVFSBTSHJRFQOKQCBLLIYVCTHMNEYWDBNMRCTGJEPRKLYOGTWZYWUGBQYFQXCDNHMVNGUBPARXDBRCUFIF");

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
    msg.setTimeStamp(0.19618415155);
    msg.setSource(20181U);
    msg.setSourceEntity(44U);
    msg.setDestination(43719U);
    msg.setDestinationEntity(125U);
    msg.target.assign("PYHXOYKNVCXMVSZWXATTPYUJMRVQBOWZIKXAIUCTEDLDSMGDXGFMACUJNLIQQHCRSCCLSWVKAGAJLPJDEIZFKLGDQDKYXBSDWJZIHKZEGHTBWQNUFWYGOTDAFPLBGWNMBFLAIBNFKMWMUURISJSTRGEKSUYIZHTMOLAYRGXESNFVPZEVXPTYLFYCEEJTOBHKVIHUJECTUVNIRDLDQPFOOH");
    msg.max_speed = 0.944604964036;
    msg.speed_units = 77U;
    msg.lat = 0.739559486841;
    msg.lon = 0.369098922732;
    msg.z = 0.745340435111;
    msg.z_units = 184U;
    msg.custom.assign("GWTYIQUAWYEGCOEBLDMYKVAZARHCGNXGBRDMTTLYEGGBUJFVKWFUWQIHCWRBBSNCIDIDJALMNFNPTOELKWMWKHBIZTHRJJMPNZSXYEGMIOD");

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
    msg.setTimeStamp(0.386433345547);
    msg.setSource(39016U);
    msg.setSourceEntity(69U);
    msg.setDestination(59438U);
    msg.setDestinationEntity(219U);
    msg.target.assign("IGUQIUIUWLWZFBERXYDXQJVGOKHXPAYNNCQEIFWVDQZORWDPSECGMGKCOCFMQZZDXGGAJIFRFINVCITGHOMEKZLJPYDSOKUQVBPOONKAMYNZSEZWBSVDWJXXIXJLGMARKAAEFPPPREURYTYMOPRHVHLRNTHMADUVBQAMLPSTBEQHKRBCWPLGRLUZBXFYOWSTKHSTQYTBWSHZB");
    msg.max_speed = 0.269346286436;
    msg.speed_units = 150U;
    msg.lat = 0.508192656015;
    msg.lon = 0.455949885266;
    msg.z = 0.303158262286;
    msg.z_units = 214U;
    msg.custom.assign("YPRPGDDNVYECPAGMOOQDCOSIKJPWZWVAXIMZYWBQITJVUCFXDFYXWBZSLDFNZQPQRTNDLYQEHALDERMBXCHBKLZXZWVEZAYACFRRJSJNYRMOQMEWJKXVXTKOKRKTXZHMZNRQWVORECPOLVCKEJ");

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
    msg.setTimeStamp(0.751072818721);
    msg.setSource(27721U);
    msg.setSourceEntity(138U);
    msg.setDestination(25529U);
    msg.setDestinationEntity(137U);
    msg.timeout = 9913U;
    msg.lat = 0.632862846833;
    msg.lon = 0.355025891779;
    msg.speed = 0.981314474732;
    msg.speed_units = 109U;
    msg.custom.assign("UBJHWJPSIAZBXGZPNFUBCCHBZJEPTPKMDCGQUEFUNLJRHGOHWAYFIZMPLXBBNUMHJYLVELTIKOAVXWLLCHVYCEGNTZAORMNXDOBGGVNQRIJZEKSWFYSXBVYPRLWDUWSGXMORMBQPRTEIIECQMODZKRDYLJYIKVMJUOPGSQYGSHCTEVNFCUODLMCWKWSYZCVGDOFZITQAAKSBFEMSTIFDJQ");

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
    msg.setTimeStamp(0.0189083775554);
    msg.setSource(58538U);
    msg.setSourceEntity(24U);
    msg.setDestination(16807U);
    msg.setDestinationEntity(117U);
    msg.timeout = 9793U;
    msg.lat = 0.836019091741;
    msg.lon = 0.915735069508;
    msg.speed = 0.290264514501;
    msg.speed_units = 144U;
    msg.custom.assign("SLAJMNIZNUFXOYQIPOKNOEHNPAGVOKRKUQTRRQXAWGDGBEPWCKPHKIFLJLIVMNESEDBRTUNTBGNGGUFKCFWVMZPQDAKUWCSHOHCVOHZVENVBG");

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
    msg.setTimeStamp(0.407641711117);
    msg.setSource(974U);
    msg.setSourceEntity(195U);
    msg.setDestination(15403U);
    msg.setDestinationEntity(123U);
    msg.timeout = 60933U;
    msg.lat = 0.465259389128;
    msg.lon = 0.506152772348;
    msg.speed = 0.892257845628;
    msg.speed_units = 245U;
    msg.custom.assign("TUSFZDFBIXGNPKMCZFWEHBOWOLOIXRXNNQWPRGPVEMWQMTXKVXUSSMLZXAVSKEZSYKLJQBXXRDDFEWYULFFDTILHIRGAVMEIOHJNGPVIJROTYFHRSYMKBLTQCZEAQFCSODICUJBQGOLYGITVJJJARQKMBPLWNQUGDFCEAZCDDYVBWOVRCWUZYPOZPNLZMTEMYNUDFBHHBAKSPNYGNRUGXZVLHDO");

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
    msg.setTimeStamp(0.908214268081);
    msg.setSource(34569U);
    msg.setSourceEntity(41U);
    msg.setDestination(16784U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.621216639986;
    msg.lon = 0.513199545776;
    msg.z = 0.691130609344;
    msg.z_units = 7U;
    msg.radius = 0.806859997379;
    msg.duration = 39535U;
    msg.speed = 0.813699819546;
    msg.speed_units = 58U;
    msg.popup_period = 21205U;
    msg.popup_duration = 64128U;
    msg.flags = 95U;
    msg.custom.assign("TAMOVDAUQTVIUWZBZGYKJRZYGQJNPINCNYMUOJUCKGSSYNOFTRDFFDWMTQHBGVCLXTXSILDJELRRGLWSXCGZLWYXZLDEKNHJQXKRDWCIIOCEUEUPUIAFKHQWPICAEDFYOSJRUZAA");

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
    msg.setTimeStamp(0.168939322097);
    msg.setSource(1352U);
    msg.setSourceEntity(40U);
    msg.setDestination(24587U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.783386298025;
    msg.lon = 0.862811655571;
    msg.z = 0.604160436146;
    msg.z_units = 34U;
    msg.radius = 0.78688678731;
    msg.duration = 16400U;
    msg.speed = 0.819318966209;
    msg.speed_units = 163U;
    msg.popup_period = 656U;
    msg.popup_duration = 6290U;
    msg.flags = 185U;
    msg.custom.assign("WAKZQWEBFZEFGBELFEXBGQRCVXLVEGWIODFNPSNJPS");

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
    msg.setTimeStamp(0.520397368512);
    msg.setSource(49328U);
    msg.setSourceEntity(252U);
    msg.setDestination(27856U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.996025980321;
    msg.lon = 0.0364963081992;
    msg.z = 0.934177265652;
    msg.z_units = 249U;
    msg.radius = 0.13761774151;
    msg.duration = 43861U;
    msg.speed = 0.195209615514;
    msg.speed_units = 226U;
    msg.popup_period = 28973U;
    msg.popup_duration = 20035U;
    msg.flags = 46U;
    msg.custom.assign("XSZYRBGDCPWTAADFQKMCZWIZKJOFADQAZNIUEDVNTSRASRCDHHHUIPSXMTCQBOLMOEYJJNTHJYYDJWVIVKPAOGDBZVQHTNFLZMHLGGGXNPUSLSYHMXFZMAAWPFHVSKXUKYGWRIQSOBECKOLUHRYPIDTSOQQWWXJBYKOBOPFMTUHBXQJCRNRNVUVKJXPMCYWUKRJX");

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
    msg.setTimeStamp(0.148992114);
    msg.setSource(60829U);
    msg.setSourceEntity(79U);
    msg.setDestination(26019U);
    msg.setDestinationEntity(6U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("WULSXSFWJPUIVEDAWYFVYNYLVLGUEPMCPZQJZTQSSMGJKXJUUKRTAGRISTHZHPNWMVNXCKRIVAQNRPTQEXCDNBCEIXYIHVSQFKGNXECXYZYDJYJDLEZBOLFBQSKOLDTBOZAGHZLDCGDNHCWAPXARIVMOQMDUBDOGTKJYHTVZRVLWPDTGSHAAMEZOCMPPYNUORNBRQXFTKXFROBUTBUEKCGWQSBQMMWHEGFFWMOHZLJHAKFIBY");
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 60893U;
    tmp_tmp_msg_0_0.lat = 0.571794601643;
    tmp_tmp_msg_0_0.lon = 0.155539094965;
    tmp_tmp_msg_0_0.z = 0.209792165006;
    tmp_tmp_msg_0_0.z_units = 54U;
    tmp_tmp_msg_0_0.speed = 0.90524379056;
    tmp_tmp_msg_0_0.speed_units = 216U;
    IMC::PathPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.6703400431;
    tmp_tmp_tmp_msg_0_0_0.y = 0.516289647816;
    tmp_tmp_tmp_msg_0_0_0.z = 0.938335249826;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("MEMNXNFCMJOHWUONBAGSKRJQZCQRIJNBMVGAKVJDZMJYVJPYVYWGNXIQALUUQGTPQTKLRORFLVZAFWBPLYGUHCUKOKNZAEGSSPTKCMAZTIZGELDCDUITYBJLJVBVNETBYSSDPSIWIQBERXQEOCHBCWEFNQSOOWTAUXBAEYXLRVVOLDATCSIBMFJPHDYDKMCZFH");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Power tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.609279681509;
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
    msg.setTimeStamp(0.299005727472);
    msg.setSource(16698U);
    msg.setSourceEntity(125U);
    msg.setDestination(28473U);
    msg.setDestinationEntity(142U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("KMRUTTRUZNHQBAYRESTRFQVSOUYXVMIEZKJKNIJNDSHRWIFZMQONIBLQWSHMOKLMDGBUXPVICDEXDHVZKNDIEBTTPBWBEZJLPUUGOAZGEXNJCWDDCNGVMLPATPAAVXJTHIMXFUJZUOHXTLRUWISJZPWKAWQVJONCCEWRLLTFGYDGFJIYLFZYEQFBAKPFGGRCHJWTMLOIAPS");
    IMC::Land tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.193727031534;
    tmp_tmp_msg_0_0.lon = 0.309761881734;
    tmp_tmp_msg_0_0.z = 0.462345674958;
    tmp_tmp_msg_0_0.z_units = 222U;
    tmp_tmp_msg_0_0.speed = 0.0437523708346;
    tmp_tmp_msg_0_0.speed_units = 161U;
    tmp_tmp_msg_0_0.abort_z = 0.481620003188;
    tmp_tmp_msg_0_0.bearing = 0.184435041386;
    tmp_tmp_msg_0_0.glide_slope = 67U;
    tmp_tmp_msg_0_0.glide_slope_alt = 0.942476378104;
    tmp_tmp_msg_0_0.custom.assign("MHYHZHOCWCESEJRNWEBNONURXPZRXQQEJHLFWNLKKNVVRDSDNOAVPAZBNZRZETYYLKTMFLXDXGBKGCYBXIGKVFCDUPSWCBQHIFUSKVYUZFOTGRNAFTU");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::FormationEval tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.err_mean = 0.726508549554;
    tmp_tmp_msg_0_1.dist_min_abs = 0.311704385374;
    tmp_tmp_msg_0_1.dist_min_mean = 0.673067003847;
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
    msg.setTimeStamp(0.370940874103);
    msg.setSource(53246U);
    msg.setSourceEntity(73U);
    msg.setDestination(43005U);
    msg.setDestinationEntity(107U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("URXCPSOKWPWDJLVGH");
    IMC::RowsCoverage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.454142408033;
    tmp_tmp_msg_0_0.lon = 0.131322940904;
    tmp_tmp_msg_0_0.z = 0.954491719406;
    tmp_tmp_msg_0_0.z_units = 90U;
    tmp_tmp_msg_0_0.speed = 0.753425874743;
    tmp_tmp_msg_0_0.speed_units = 30U;
    tmp_tmp_msg_0_0.bearing = 0.98665160866;
    tmp_tmp_msg_0_0.cross_angle = 0.855328692267;
    tmp_tmp_msg_0_0.width = 0.0692966104198;
    tmp_tmp_msg_0_0.length = 0.933003246785;
    tmp_tmp_msg_0_0.coff = 132U;
    tmp_tmp_msg_0_0.angaperture = 0.746454439565;
    tmp_tmp_msg_0_0.range = 13952U;
    tmp_tmp_msg_0_0.overlap = 109U;
    tmp_tmp_msg_0_0.flags = 74U;
    tmp_tmp_msg_0_0.custom.assign("RFLZGAAUKQLXOUBQULRHSGOKKOIVYBREIQLMYDFKPGUZSLKTIJCDLZUTAZWYTUNMLBFWYWCIZJRIJDJMOAPXNQVROEFYNBAPTOBFTBEPJYCKDJZQMMCTEDJCRSHTNIXLPPGGN");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::FormCtrlParam tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.action = 165U;
    tmp_tmp_msg_0_1.longain = 0.967423036508;
    tmp_tmp_msg_0_1.latgain = 0.364564134;
    tmp_tmp_msg_0_1.bondthick = 3702851783U;
    tmp_tmp_msg_0_1.leadgain = 0.846674376825;
    tmp_tmp_msg_0_1.deconflgain = 0.329508747033;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::CompassCalibration tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 42100U;
    tmp_tmp_msg_0_2.lat = 0.0336383609647;
    tmp_tmp_msg_0_2.lon = 0.776335831688;
    tmp_tmp_msg_0_2.z = 0.680806043874;
    tmp_tmp_msg_0_2.z_units = 72U;
    tmp_tmp_msg_0_2.pitch = 0.786113515204;
    tmp_tmp_msg_0_2.amplitude = 0.766358745342;
    tmp_tmp_msg_0_2.duration = 37352U;
    tmp_tmp_msg_0_2.speed = 0.223985713803;
    tmp_tmp_msg_0_2.speed_units = 125U;
    tmp_tmp_msg_0_2.radius = 0.468854861841;
    tmp_tmp_msg_0_2.direction = 32U;
    tmp_tmp_msg_0_2.custom.assign("OLKIQIXSNLWGQYVCLBPOOTMWDEUPYIQBGAMMMHSBVQOGHAHWYITPSJEOTKVKFDNUHADUEXKVCSMLZZJDNKGUJLUYERYGAJPRSZWVBWKLCRHXQCTJEPGTSNYAYRCHIVJEFGTEXCBGWPIBUWJQCHLUTJXMKTBRHVSNOOPAMPDCZFOISTXUF");
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
    msg.setTimeStamp(0.999417039514);
    msg.setSource(31106U);
    msg.setSourceEntity(83U);
    msg.setDestination(51655U);
    msg.setDestinationEntity(164U);
    msg.timeout = 64668U;
    msg.lat = 0.970239434374;
    msg.lon = 0.414672889589;
    msg.z = 0.60041472194;
    msg.z_units = 135U;
    msg.speed = 0.263298101269;
    msg.speed_units = 28U;
    msg.bearing = 0.270225694888;
    msg.width = 0.61877405081;
    msg.direction = 42U;
    msg.custom.assign("PZISKAPARHDYXXHLZVEWOPAZGKSXHCCVQPDOYEAFAONOZDRENJUGVBHGSZCWGISFCDPKNUSRLTJXJQBANVEJBMIVXSLEPYWDBIGXJZVVMGXKMFEIRQNFBHIFJLWFULEHPCCDKXJDIYLTGIBFQVLPUOTWBTOYHMCDQYFVRQAONWOTWNUEZYUMKZSACLROXWYCJCKHNABKBUMHUJUMRNVWZ");

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
    msg.setTimeStamp(0.649803635704);
    msg.setSource(54030U);
    msg.setSourceEntity(143U);
    msg.setDestination(20998U);
    msg.setDestinationEntity(109U);
    msg.timeout = 1019U;
    msg.lat = 0.907025032761;
    msg.lon = 0.865702971794;
    msg.z = 0.937484716484;
    msg.z_units = 193U;
    msg.speed = 0.718766833292;
    msg.speed_units = 233U;
    msg.bearing = 0.269480465369;
    msg.width = 0.00471902318721;
    msg.direction = 23U;
    msg.custom.assign("BZKJKYWWJRQUNEDCXECUWZIIFJDUUUVLTBUNVWIENPWSUZTVLQACOIANTFDCZGBLFFXBTTWVBXXJFYOHWPAAHULLRBZDJNYNWDSRCOXRNMXHMZMRGJXOQSMZPYUAZYFEDBENSTIBGQMGYVBIPGLKKIGHAZETHNVXJ");

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
    msg.setTimeStamp(0.54864155646);
    msg.setSource(15842U);
    msg.setSourceEntity(16U);
    msg.setDestination(30245U);
    msg.setDestinationEntity(16U);
    msg.timeout = 32492U;
    msg.lat = 0.0529932311675;
    msg.lon = 0.82214763195;
    msg.z = 0.990406785076;
    msg.z_units = 232U;
    msg.speed = 0.620461988703;
    msg.speed_units = 219U;
    msg.bearing = 0.361107887661;
    msg.width = 0.381583483321;
    msg.direction = 202U;
    msg.custom.assign("JOWZFJNJZSSJZNVTLGQHYJRDMWPRNKSHKEIZINPIFQTVSDLWXXFJLWUZAJJVNOCCQOOSZQQCKWMGKYUHPQXDSUOGHPFSAVEBMMMHUMTNMNTOLECFF");

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
    msg.setTimeStamp(0.257523673534);
    msg.setSource(49496U);
    msg.setSourceEntity(212U);
    msg.setDestination(7749U);
    msg.setDestinationEntity(226U);
    msg.op_mode = 197U;
    msg.error_count = 162U;
    msg.error_ents.assign("XFOCAWCHUYRPOFHAMHMRIWUZGUAIUWJUFGOMYKRWYKUSGPLMJWQREDADEBJINBIMLUGAQSBVKOFSJCELZIXZZXNVASSWDOSTZPXXCYWHPDPVFYDFGPSQVPXNHJWEWNHFVLDUCHHTOZDERMXMJYTQVRWSOLYAMXSQBPQZQTHQBNBQTADLGTCCPTCETXIPBOKLANGNRYVIYLVJXMKKDUNIGHZJAREFYNJMNRBLKZUVCGEIOIZBDCFSRBJTEQFTVG");
    msg.maneuver_type = 64958U;
    msg.maneuver_stime = 0.246997533866;
    msg.maneuver_eta = 9573U;
    msg.control_loops = 1850038101U;
    msg.flags = 58U;
    msg.last_error.assign("MZHUGESYRLOLZFBRNCHTSRZGQQSNODGGMIUXIAVFYRRETFMNATRCHIERIGBWMCQDEUBUKYVQFQMIUBVWIAXKGLBFABMMCYOJXHWJAOATCTYKPSLBDHCJZWIAVVHEXCABXQ");
    msg.last_error_time = 0.794461882186;

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
    msg.setTimeStamp(0.0400527139757);
    msg.setSource(55735U);
    msg.setSourceEntity(241U);
    msg.setDestination(56020U);
    msg.setDestinationEntity(47U);
    msg.op_mode = 127U;
    msg.error_count = 95U;
    msg.error_ents.assign("IDJKCJWLOPLNLRJHOQZZNREIDAUVDWJSVMOUQEDKDUNUBVPNXTCPUXHGHEXMKCXTLTIXSGNFZKYRXGNFPBTCRAGODENFGZDNFIOBXIEMARYIOVWOY");
    msg.maneuver_type = 39469U;
    msg.maneuver_stime = 0.0693660833571;
    msg.maneuver_eta = 5703U;
    msg.control_loops = 3352608704U;
    msg.flags = 27U;
    msg.last_error.assign("ADRFXTFJKDPWZTYHBMCVHEECPKODZONIUVWWYVVQNGYUAXOHSZSIJLJWOOIO");
    msg.last_error_time = 0.366032130589;

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
    msg.setTimeStamp(0.741112085703);
    msg.setSource(41366U);
    msg.setSourceEntity(11U);
    msg.setDestination(11229U);
    msg.setDestinationEntity(178U);
    msg.op_mode = 251U;
    msg.error_count = 24U;
    msg.error_ents.assign("IKKIHMNEQJHPGIEJHYSKUOIDRUOUXJBTMZYBFBVRTADGQAEGDIQTKPSYNYULHATJATSVGDQOTOZONZEZMQWIOOAQKZMPBCAXUFPLVJXNYATEAXRSVSLIZFYNGTFNSFRUUBWIGEXHLRUYWCOVPSKCXDLGCXVGABJYJIXDBVCWLMFJSN");
    msg.maneuver_type = 37333U;
    msg.maneuver_stime = 0.589783798814;
    msg.maneuver_eta = 358U;
    msg.control_loops = 2760945094U;
    msg.flags = 224U;
    msg.last_error.assign("IHBEROPJTFCZBQSSQMJXYCHKWWVXBGUAYDRZJNCVJKODPQQGUZKDWKQLHZBYKKBBUJISDGHTVIRYNTLVIWPWODGORPYMWYWXLBPKEFFTQAPLJIIJVOQRGVPBSFLIULWCDAUNEZRMZUFMOSAOFLBFDRXTNKYXCFQSPAHREEKESAJ");
    msg.last_error_time = 0.146312258052;

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
    msg.setTimeStamp(0.867164402833);
    msg.setSource(11499U);
    msg.setSourceEntity(65U);
    msg.setDestination(52282U);
    msg.setDestinationEntity(43U);
    msg.type = 247U;
    msg.request_id = 27253U;
    msg.command = 140U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.158953878013;
    tmp_msg_0.lon = 0.821203562442;
    tmp_msg_0.z = 0.314460640384;
    tmp_msg_0.z_units = 176U;
    tmp_msg_0.speed = 0.0175886768751;
    tmp_msg_0.speed_units = 141U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.752621702679;
    tmp_tmp_msg_0_0.y = 0.752158479108;
    tmp_tmp_msg_0_0.z = 0.790230979927;
    tmp_tmp_msg_0_0.t = 0.598163316749;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 22938U;
    tmp_tmp_msg_0_1.off_x = 0.081375147805;
    tmp_tmp_msg_0_1.off_y = 0.363676044907;
    tmp_tmp_msg_0_1.off_z = 0.924961185242;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.723565375433;
    tmp_msg_0.custom.assign("OQKHFRBWPCOBSRFTLMOCULTOIPDWCSRWCKPEMMXJHAOIIXVYJMUTPVZVGOXXMNIJYGWKLHBCRUNRURBVDP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 26072U;
    msg.info.assign("AUESTIUQIGYZEWKFLLXHQPWIQHZFXZVPESKDGDSVCFUMEZFHGYZJOVGJHNTNDAAGRWSGKIUXMNYPHPEMQRQKFZATCLRGPRVDXWTJCPCIKJIBXORUUTMFBYBMPQRZLVYIWTQFOWFZNLOHJTSIKVNTSEWVCBHNQBD");

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
    msg.setTimeStamp(0.324164142337);
    msg.setSource(28947U);
    msg.setSourceEntity(134U);
    msg.setDestination(21172U);
    msg.setDestinationEntity(110U);
    msg.type = 101U;
    msg.request_id = 20412U;
    msg.command = 154U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("GSRTXSLTSOPRIVPFFOIQUQGFEXBDMALEZWLDPKBXPGCKFHQLNWNJQXAETRRHOBDJFQMMTJZNVUUUBLDEYKHSMHAAAJIRFTYTLXXQBNQJKRWDDKMJHPWBCEOTZPKJKOMYNPDIMGROWTCIOAISSUCRAEFKHFUSMVUPNHCBIDIXLVEWZNJOHARYHKRBEYZGDVCGCHTXZACVFZL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 15115U;
    msg.info.assign("BKCUJZUGACXKEVRBNRDEIRUUHGFNWJLSPQSOBUJBJFIAXHZPCSBPRREESWZSWR");

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
    msg.setTimeStamp(0.0698551285681);
    msg.setSource(47233U);
    msg.setSourceEntity(243U);
    msg.setDestination(35235U);
    msg.setDestinationEntity(186U);
    msg.type = 230U;
    msg.request_id = 42924U;
    msg.command = 189U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 25714U;
    tmp_msg_0.lat = 0.965588914771;
    tmp_msg_0.lon = 0.965848395307;
    tmp_msg_0.z = 0.586388635964;
    tmp_msg_0.z_units = 238U;
    tmp_msg_0.speed = 0.194928214991;
    tmp_msg_0.speed_units = 8U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.363768250606;
    tmp_tmp_msg_0_0.y = 0.00895524467307;
    tmp_tmp_msg_0_0.z = 0.265888028841;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("NECLAIXVACLYGGQCQQGVZFBBVKZPEOAUSAOJFADEUFZIIFJAPBZMJLJWPOEVZFRWDNJSMQBTMEZQPTFWTDWSNOOYWKSSCFMRKLKWKALVSNTLJPDCHBJGOIMSYEBFNXHTAIIRJGWUHNROHWCEEFIMHGGEUWVGBYPVJEROLVTYDUNXVRYTBZHUTTRQBCYMSYRCHZUQZIILXPKDMQJZKPYUXDXGMQHGYLLKAOSVXURHDTPCCQMWKHIFBDRPNUODN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 37359U;
    msg.info.assign("VCKTUTCVLEEADAVINJNJCVGRKCJTHOXQKLSZUFJDWKIIMDKAPKGYFEGZYRMFIMHGWUVSIGDRLSBHUBTNTRCJHWAOWUDEAV");

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
    msg.setTimeStamp(0.457667192481);
    msg.setSource(43838U);
    msg.setSourceEntity(88U);
    msg.setDestination(966U);
    msg.setDestinationEntity(96U);
    msg.command = 11U;
    msg.entities.assign("KRCYTTKMAVDASALJGVKCIYZSMVBKQMGWHROCPWGKPWXQJQKNISOUPCXVSTNDYDFCDEIOWLPPORAYONZKLFUEUPZVTVJDYRTSPHNFODXPLIODHEJAJVBP");

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
    msg.setTimeStamp(0.848816932039);
    msg.setSource(4792U);
    msg.setSourceEntity(149U);
    msg.setDestination(48430U);
    msg.setDestinationEntity(14U);
    msg.command = 142U;
    msg.entities.assign("PEWNMWURWUUBJYSTMTUZCDXRJWBYNSJZYBFCBGLGZKNQNIQMBRHRET");

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
    msg.setTimeStamp(0.849401709241);
    msg.setSource(23717U);
    msg.setSourceEntity(34U);
    msg.setDestination(18179U);
    msg.setDestinationEntity(99U);
    msg.command = 198U;
    msg.entities.assign("IKKUEEVNAXIJQCZTMOGKEGLNLHUORKNJMJQYOEMSNUNQODQBBISHODMCPJYMHBCAFWBBPITYXVZQFGPDFFFHQYNTNQJVP");

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
    msg.setTimeStamp(0.975575663474);
    msg.setSource(4942U);
    msg.setSourceEntity(197U);
    msg.setDestination(27298U);
    msg.setDestinationEntity(80U);
    msg.mcount = 4U;
    msg.mnames.assign("GGTWLZXKBBOVEHZNMJMVIEKPOWSEXJNKXIRIWOMYTAHRAVWDZESQKNFYGCLKDOKAECLQVOBPDFIVOHHIDZRJGLGCNJKLFCTMUPQUYDZAHZVAAIGOBLYNQUTJQGPFGKSMYXBW");
    msg.ecount = 52U;
    msg.enames.assign("UABAVFQVEQRDSMCOTZAKBFSUIPZYPQZBRVIRODALZLUIORDYUDZFOLSEGYPYYKGBPXNRCYMFQJFMEGCFVAQTVIWWJEIFDSPOOMOHLHMNSKYZPXHDIJEBGTBHPCATXPFXQULLKSKHYWDFERNWTSUNOWTNGBTIESJXLGHMKJWJBROVGPJMZHCJIAGKCXKWXVABDUCHZDSWICZTUNFYMXGTDUTVIZWMLJPXMCNKQREYGURLN");
    msg.ccount = 31U;
    msg.cnames.assign("ILTLWHDASEPXKVBTCROPFRFZZITGXZMWYFLAGPUIDDWADQBSQUXSKYMIQCEFNTTBSVMSZRTBDWEOYMIHKXVCSOVVHQNMTVHVZKKNYVEMWRWDUORIJLZSCWCCQYPIOHYLQPKXABFMUALCNOGUJMFBRWJECOBEPJZAGO");
    msg.last_error.assign("QRSDFDTWVMRGQXBAOTCWDBOBIVJWKUTAZCPHKYZCAOOGEWEEQFWGNYBURFXOCPDDVRCLJMLLNOFBKVRTULGVLYCUVGBKCPVEBPAAINJZKJJCAYSZPRYMHMNGHUSWZFPWCZSINBOXOVUQQPUHIZDNTFFEQZXIKMLPTSIGVDAQMIKGSRYHHPOBVXNEZIUITEXCXGOSJDEDYJSGSJXXNNMBFAUJSRHYKRKEZHMQU");
    msg.last_error_time = 0.514009820531;

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
    msg.setTimeStamp(0.995755924786);
    msg.setSource(12447U);
    msg.setSourceEntity(71U);
    msg.setDestination(40886U);
    msg.setDestinationEntity(52U);
    msg.mcount = 147U;
    msg.mnames.assign("PELZLTXDPVIYJTLYDTBUMYNFUZXMUNNXAXHUQUVNHEGCEOYRKLWUARPIGVVYTJUXOETLAIWBCJRSBAUHYQSEGMCKQSEPPNIDDUHGCJPSVFFAFTQYWEXZGLHB");
    msg.ecount = 213U;
    msg.enames.assign("MDPZLXJBNDOREQALMJGHXBLIFRUHEFXFDQQQEJNWEHWFHMUHXUVMYXCTVYQRDGARWBCWBPHGOPTXUKOOJSRPVKUCYWTFNRPTYVBHOBKSJZGUVJXZGSKKGJPZFZDMUTJYSIFNNQDZEMCKMJIYIMCESIAVOOWJUIYGZSWBFYYRAQQANCLCVTBUQQICFMHWPGLTOZBLSNAEIWIWELYSTRBMHDND");
    msg.ccount = 234U;
    msg.cnames.assign("AKXVVQQHOSOPJFTODWBJRFIMHBPCYPDUJTLDLZRZZNUATFBHSHKCGTBCRVXZNKVPOOMXZIXNQZMRVUTGSWESBFHCKJEOZKFMUHOJFIDNBZKMYULGTYLMUGWQQLRPCLYANNAPHHMMZCALDFRVYNYWEBOWIWELGATPJIAVGPVJOMQKJEQDFYSCBWISSASMCVKXWUOXGTNBTBUXTYFPNSREIAWHQKZRXESIIRKXRDWDPHU");
    msg.last_error.assign("MLTZEIEPPAQYRLMCXIRCOHTJISTQKDBRSFBNRMZZUXJXOIYSVXKDUGJAXYWUYEKLVEUVINCZPZNEBDHQCCLJZKLNMJXQRBXIIFPBOUKBEWIZJHSJUASKGFYVNQOGTPTACKDONYKWSRQVHRTMSAAGYYJNHWQUZOCDWESWHNTFDDBVXMFQNOMFBFENGLDHYVXOPGBFGVWEBRKMKAJTIPZYWVQCJHPDMZCGXIVWMFS");
    msg.last_error_time = 0.990463201182;

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
    msg.setTimeStamp(0.677662423633);
    msg.setSource(50181U);
    msg.setSourceEntity(122U);
    msg.setDestination(47293U);
    msg.setDestinationEntity(108U);
    msg.mcount = 104U;
    msg.mnames.assign("NLBTIRHHDCLMQJKRXEFMJNWTFSXXBAHIKZBCQGUAZGBROATVPOHXVDWFACPVAXVOWBJKWFCJVPWULKUWZKNYIOLEDQYJUNDBRVLSKOOATZYXYSRZCLGFTLZGJJGUJXYDQEAOKHGSTMKGQYPIWUIWNHWNLYNGTVBEAOEUJQDMPDTXGINBMYTOBT");
    msg.ecount = 187U;
    msg.enames.assign("CKVNFOXEXOGLFTAZSHDPIAUBNRJZHSXSLTFNGZHTIVQSVCGTHUTXNKYQWYKHWGLQZDCKJILMMYMOMBQTTBKFWUVUCLQOXPLXKCTFLAMAXCMQCDBUUJZZBGCYRHDPYOSENDEGOHNO");
    msg.ccount = 110U;
    msg.cnames.assign("LMOJIKUDYPCZSIQOQRUQKUWTULYBWXMFWNNQQMNZOOITHRGXOVZUCJHTDHYSJVJGFDBAPBEFOGLNRNFGIWFBFOXZILZKJJQNODJCWTHSTDRHBPJDHYIGDBSKPYVYBFSIAWVBKXK");
    msg.last_error.assign("VGPDYMZYMXSWXROTYGPYHLXIXQJVROTAAHUVAAAMRWHLTNQNYGFUGQFSOKLZYBJBBJULJYDFQIPOYCZDUOSXNNNHYOIFWBFHDTRSIGKYEOSXAVIGJXHEZSCBMCJOVTKRSTNCEVPPBWNDQETMPDCNIQSHDUZPCAVGICWTZCXSBCEWLQNZNKQHSLWEDUECWRJBRVKEAIQUAGVJRTJDMKLBUFOEWRFWUIGZMLLJZEQMVPDHGFUFRKHTXAPKMPMBXF");
    msg.last_error_time = 0.818087053491;

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
    msg.setTimeStamp(0.752331477437);
    msg.setSource(3957U);
    msg.setSourceEntity(43U);
    msg.setDestination(1062U);
    msg.setDestinationEntity(56U);
    msg.mask = 224U;
    msg.max_depth = 0.159974584933;
    msg.min_altitude = 0.571859020381;
    msg.max_altitude = 0.367652968675;
    msg.min_speed = 0.911431904399;
    msg.max_speed = 0.823738942235;
    msg.max_vrate = 0.324006061286;
    msg.lat = 0.244590786222;
    msg.lon = 0.449380882554;
    msg.orientation = 0.61680616181;
    msg.width = 0.108685085776;
    msg.length = 0.73365939018;

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
    msg.setTimeStamp(0.752924671885);
    msg.setSource(1870U);
    msg.setSourceEntity(18U);
    msg.setDestination(62351U);
    msg.setDestinationEntity(137U);
    msg.mask = 153U;
    msg.max_depth = 0.688519533275;
    msg.min_altitude = 0.897765947977;
    msg.max_altitude = 0.168277428227;
    msg.min_speed = 0.91364942925;
    msg.max_speed = 0.173279924364;
    msg.max_vrate = 0.793789832339;
    msg.lat = 0.505140927542;
    msg.lon = 0.742531273694;
    msg.orientation = 0.364605950402;
    msg.width = 0.622477115624;
    msg.length = 0.242514287028;

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
    msg.setTimeStamp(0.731901126635);
    msg.setSource(64690U);
    msg.setSourceEntity(29U);
    msg.setDestination(61559U);
    msg.setDestinationEntity(131U);
    msg.mask = 26U;
    msg.max_depth = 0.29577050419;
    msg.min_altitude = 0.628088768812;
    msg.max_altitude = 0.863502529381;
    msg.min_speed = 0.958041157845;
    msg.max_speed = 0.180444724545;
    msg.max_vrate = 0.114707039384;
    msg.lat = 0.870473512216;
    msg.lon = 0.0319698339256;
    msg.orientation = 0.559041561682;
    msg.width = 0.423965615244;
    msg.length = 0.510692794151;

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
    msg.setTimeStamp(0.194097551067);
    msg.setSource(21136U);
    msg.setSourceEntity(125U);
    msg.setDestination(56218U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.503529631043);
    msg.setSource(12361U);
    msg.setSourceEntity(8U);
    msg.setDestination(37423U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.941666435616);
    msg.setSource(27837U);
    msg.setSourceEntity(252U);
    msg.setDestination(17228U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.695535242781);
    msg.setSource(13182U);
    msg.setSourceEntity(149U);
    msg.setDestination(32807U);
    msg.setDestinationEntity(13U);
    msg.duration = 32238U;

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
    msg.setTimeStamp(0.314620424388);
    msg.setSource(16695U);
    msg.setSourceEntity(145U);
    msg.setDestination(28635U);
    msg.setDestinationEntity(16U);
    msg.duration = 63152U;

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
    msg.setTimeStamp(0.371668051357);
    msg.setSource(15248U);
    msg.setSourceEntity(43U);
    msg.setDestination(26512U);
    msg.setDestinationEntity(34U);
    msg.duration = 44341U;

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
    msg.setTimeStamp(0.782549716862);
    msg.setSource(49035U);
    msg.setSourceEntity(176U);
    msg.setDestination(40985U);
    msg.setDestinationEntity(137U);
    msg.enable = 223U;
    msg.mask = 3782934285U;
    msg.scope_ref = 3772507265U;

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
    msg.setTimeStamp(0.462182937083);
    msg.setSource(23878U);
    msg.setSourceEntity(33U);
    msg.setDestination(55317U);
    msg.setDestinationEntity(133U);
    msg.enable = 214U;
    msg.mask = 596975683U;
    msg.scope_ref = 3763282209U;

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
    msg.setTimeStamp(0.833560443663);
    msg.setSource(23251U);
    msg.setSourceEntity(4U);
    msg.setDestination(65292U);
    msg.setDestinationEntity(30U);
    msg.enable = 152U;
    msg.mask = 2440320093U;
    msg.scope_ref = 494456965U;

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
    msg.setTimeStamp(0.449715782014);
    msg.setSource(20892U);
    msg.setSourceEntity(88U);
    msg.setDestination(36223U);
    msg.setDestinationEntity(132U);
    msg.medium = 72U;

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
    msg.setTimeStamp(0.41985874059);
    msg.setSource(11050U);
    msg.setSourceEntity(189U);
    msg.setDestination(57710U);
    msg.setDestinationEntity(119U);
    msg.medium = 95U;

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
    msg.setTimeStamp(0.142748129983);
    msg.setSource(62442U);
    msg.setSourceEntity(78U);
    msg.setDestination(20836U);
    msg.setDestinationEntity(188U);
    msg.medium = 252U;

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
    msg.setTimeStamp(0.472276570214);
    msg.setSource(45571U);
    msg.setSourceEntity(212U);
    msg.setDestination(61699U);
    msg.setDestinationEntity(99U);
    msg.value = 0.783040003629;
    msg.type = 139U;

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
    msg.setTimeStamp(0.185900885746);
    msg.setSource(41758U);
    msg.setSourceEntity(73U);
    msg.setDestination(39238U);
    msg.setDestinationEntity(250U);
    msg.value = 0.588686408426;
    msg.type = 141U;

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
    msg.setTimeStamp(0.779521024441);
    msg.setSource(27755U);
    msg.setSourceEntity(150U);
    msg.setDestination(18809U);
    msg.setDestinationEntity(151U);
    msg.value = 0.69872343394;
    msg.type = 26U;

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
    msg.setTimeStamp(0.600611383949);
    msg.setSource(59047U);
    msg.setSourceEntity(248U);
    msg.setDestination(61996U);
    msg.setDestinationEntity(211U);
    msg.possimerr = 0.21159397481;
    msg.converg = 0.574634248286;
    msg.turbulence = 0.321878595807;
    msg.possimmon = 221U;
    msg.commmon = 246U;
    msg.convergmon = 177U;

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
    msg.setTimeStamp(0.397744849407);
    msg.setSource(18133U);
    msg.setSourceEntity(238U);
    msg.setDestination(21892U);
    msg.setDestinationEntity(208U);
    msg.possimerr = 0.13960071874;
    msg.converg = 0.826434058792;
    msg.turbulence = 0.663501292898;
    msg.possimmon = 21U;
    msg.commmon = 220U;
    msg.convergmon = 158U;

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
    msg.setTimeStamp(0.50647927989);
    msg.setSource(23671U);
    msg.setSourceEntity(226U);
    msg.setDestination(35008U);
    msg.setDestinationEntity(101U);
    msg.possimerr = 0.453688258473;
    msg.converg = 0.265184779209;
    msg.turbulence = 0.135970508564;
    msg.possimmon = 109U;
    msg.commmon = 174U;
    msg.convergmon = 158U;

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
    msg.setTimeStamp(0.918325692916);
    msg.setSource(45174U);
    msg.setSourceEntity(84U);
    msg.setDestination(35294U);
    msg.setDestinationEntity(130U);
    msg.autonomy = 155U;
    msg.mode.assign("JPJJAHTQKTRGXBTNYSIZNZKBSPWWSVZYTHEOJVESKVHBPXLXTUXKZAXBHJXLSMMJIATFLOBXPMCFSEJPIBUYIHJBFKZQMPTKRAADIHXMCGOTFSPGQNDNDNACWNQEASDGRQVRCDOKZOGFRLEVRDCINWPQOBDGSAVYFHGKWR");

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
    msg.setTimeStamp(0.677072703062);
    msg.setSource(22951U);
    msg.setSourceEntity(14U);
    msg.setDestination(45527U);
    msg.setDestinationEntity(78U);
    msg.autonomy = 62U;
    msg.mode.assign("MZEPJOBZNVGIFOHRBXNAJGXNATWRMVNGDAASKHEUGXOVSWYCHUTTTHMTGET");

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
    msg.setTimeStamp(0.497542742213);
    msg.setSource(48119U);
    msg.setSourceEntity(72U);
    msg.setDestination(23837U);
    msg.setDestinationEntity(58U);
    msg.autonomy = 245U;
    msg.mode.assign("CHQSLVMYNQOCPPXFCBUOLTINTLJAWLFZOLVDBDBPXBFRKLWXGABUOKVDWKTTJSAUQFPBBFZXSWAABTUUIVRIGGUPUYKTJSQIKQCJNZGCQEDGVCYDXRSQDISMNKSLRVWISEAA");

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
    msg.setTimeStamp(0.715945686706);
    msg.setSource(40339U);
    msg.setSourceEntity(70U);
    msg.setDestination(55750U);
    msg.setDestinationEntity(201U);
    msg.type = 76U;
    msg.op = 28U;
    msg.possimerr = 0.852233960482;
    msg.converg = 0.866095961798;
    msg.turbulence = 0.88875159528;
    msg.possimmon = 180U;
    msg.commmon = 70U;
    msg.convergmon = 57U;

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
    msg.setTimeStamp(0.143117459436);
    msg.setSource(11530U);
    msg.setSourceEntity(210U);
    msg.setDestination(62654U);
    msg.setDestinationEntity(5U);
    msg.type = 28U;
    msg.op = 224U;
    msg.possimerr = 0.570179979257;
    msg.converg = 0.591609818975;
    msg.turbulence = 0.0120953099456;
    msg.possimmon = 234U;
    msg.commmon = 95U;
    msg.convergmon = 15U;

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
    msg.setTimeStamp(0.638393100631);
    msg.setSource(29072U);
    msg.setSourceEntity(209U);
    msg.setDestination(38667U);
    msg.setDestinationEntity(137U);
    msg.type = 236U;
    msg.op = 209U;
    msg.possimerr = 0.980752854145;
    msg.converg = 0.360074950866;
    msg.turbulence = 0.774516400047;
    msg.possimmon = 164U;
    msg.commmon = 14U;
    msg.convergmon = 52U;

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
    msg.setTimeStamp(0.919417189177);
    msg.setSource(52875U);
    msg.setSourceEntity(140U);
    msg.setDestination(4553U);
    msg.setDestinationEntity(163U);
    msg.op = 63U;
    msg.comm_interface = 208U;
    msg.period = 58341U;
    msg.sys_dst.assign("OKYTBXCOPRUIDCLNAEZQYILJTNIDPFQKOOHANXAKYQAYLSCHSMGPVPSYQVZAXXIRSCMGVNPJDUGXNFPLMCWVTLPJUUNGHFYEUPSAJPTJRMMOEDHPJRAHXIRKQGDETWEEWHMUAZBKREALKGDYDEKVKRZOXTIGSOHZLSYHXFWLXZEFBLJIUB");

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
    msg.setTimeStamp(0.72949765902);
    msg.setSource(35761U);
    msg.setSourceEntity(17U);
    msg.setDestination(57766U);
    msg.setDestinationEntity(122U);
    msg.op = 150U;
    msg.comm_interface = 62U;
    msg.period = 44530U;
    msg.sys_dst.assign("QGHRDPAJNGJLVKYDBOOLMFVYHLZPXCUQETMPMRWEVAHIRJYKEQYDYPDWMUEFSODCUPBEFGI");

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
    msg.setTimeStamp(0.57312543583);
    msg.setSource(36685U);
    msg.setSourceEntity(162U);
    msg.setDestination(25961U);
    msg.setDestinationEntity(10U);
    msg.op = 209U;
    msg.comm_interface = 78U;
    msg.period = 29669U;
    msg.sys_dst.assign("ZDEALGARAMQROUFWPMXTULPLGGFXBQKBNXNBYTKVQXQJIIWRCXEHGMFMHADFIYVIYFLLQMYRFAOCOSNDOYDVXYRTSRBOUICPUUSMJNZFUMSDE");

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
    msg.setTimeStamp(0.753183359663);
    msg.setSource(59546U);
    msg.setSourceEntity(250U);
    msg.setDestination(5276U);
    msg.setDestinationEntity(61U);
    msg.stime = 849140469U;
    msg.latitude = 0.564931866468;
    msg.longitude = 0.310603580925;
    msg.altitude = 61213U;
    msg.depth = 53721U;
    msg.heading = 55703U;
    msg.speed = 29898;
    msg.fuel = -124;
    msg.exec_state = -92;
    msg.plan_checksum = 22913U;

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
    msg.setTimeStamp(0.807722919906);
    msg.setSource(48519U);
    msg.setSourceEntity(108U);
    msg.setDestination(26974U);
    msg.setDestinationEntity(123U);
    msg.stime = 4200670542U;
    msg.latitude = 0.673229075604;
    msg.longitude = 0.818216171583;
    msg.altitude = 7569U;
    msg.depth = 3470U;
    msg.heading = 14178U;
    msg.speed = -25628;
    msg.fuel = 50;
    msg.exec_state = 40;
    msg.plan_checksum = 12530U;

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
    msg.setTimeStamp(0.622110635245);
    msg.setSource(14257U);
    msg.setSourceEntity(22U);
    msg.setDestination(20019U);
    msg.setDestinationEntity(208U);
    msg.stime = 835584193U;
    msg.latitude = 0.465735534871;
    msg.longitude = 0.446940120171;
    msg.altitude = 26225U;
    msg.depth = 53724U;
    msg.heading = 17052U;
    msg.speed = -26712;
    msg.fuel = 11;
    msg.exec_state = 4;
    msg.plan_checksum = 16479U;

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
    msg.setTimeStamp(0.90234613793);
    msg.setSource(14838U);
    msg.setSourceEntity(226U);
    msg.setDestination(43949U);
    msg.setDestinationEntity(156U);
    msg.req_id = 47880U;
    msg.comm_mean = 164U;
    msg.destination.assign("VVAHVETRHJNMGWBDLMCLFIMCBORLIDOCRWJTWCIQBCUSQVFQNEOSERDFKVPGTVUANFQNBBSEMZYURGGJGBPJUXCOQUONXXAIRJKODUMPZNOIDZPYDCAQSPSAOVYXIDDQKLFNYMWPFYKOBSOEFPRPKZHIGZVZRQHKDIJWUHSYEUNGZKLZAVMHBFYDELUTRATCPBFYSNTJKGAZ");
    msg.deadline = 0.714030697082;
    msg.range = 0.0561546915597;
    msg.data_mode = 114U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 16250U;
    tmp_msg_0.avg = 0.939862493228;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("DHWLSLMXPZZDLXIFDVRRJJZCDWYSPHWQIAAZQQZHVNSRNJPVCWTQOJDRLVNAPIDORLUYFBVBTAYJNALFUQKEBRCWFBQARMGUDHIBUYMOAQIWEEYNUUBVHK");
    const char tmp_msg_1[] = {52, -3, -118, 113, -118, 93, 41, 69, -44, 39, 119, -93, -112, -53, 61, 62, -73, -15, 23, -71, -63, 33, -15, -42, 39, -30, 88, -98, 64, -124, -63, -81, 79, -58, -69, -10, 59, 41, 86, 88, 29, -114, 78, 33, -6, -67, -47, -83, 100, -12, 63, -48, -110, 20, -40, 73, 121, -125, -43, 59, -76, 109, 84, -101, 113, 53, 49, 99, -50, -117, 64, 17, 72, 72, 92, 47, -20, -88, -87, -77, 108, 115, -110, 35, 85, -9, -128, 118, 2, -128, -44, -105, -34, -30, -31, -29, -38, -109, -111, -105, 109, -61, 51, 0, -44, 1, -57, -74, -50, -31, 125, 73, 66, 110, 73, -85, 73, 68, 120, -109, -118, 71, 73, -61, -118, 29, -101, 48, -11, 65, -124, -122, -13, -90, 71, 123, -84, -119, 95, -51, -74, 40, -41, -4, 29, 33, 40, -126, 22, 123, -90, -128, -108, 12, -79, 7, 73, 21, -85, 49, -88, -100, -76, 41, 113, -114, -67, 108, 75, 64, -38, -111, 96, 29, -86, -15, 87, -87, -74, -35, 22, -96, 78, 91, 4, 92, 67, 36, -34, -54, 25, 96, 36, -15, -115, -75, -16, -31};
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
    msg.setTimeStamp(0.617450606528);
    msg.setSource(47906U);
    msg.setSourceEntity(189U);
    msg.setDestination(32661U);
    msg.setDestinationEntity(68U);
    msg.req_id = 63971U;
    msg.comm_mean = 159U;
    msg.destination.assign("XTSNXOKDFUJKYGXAILRHVTRELJTMWRPLLDBDTHPFOBVWKKFQAAGXWQSBOFRTRIHNJHDQXUUPTNQMFCITKVIURWPEGJZRZNSABC");
    msg.deadline = 0.251054648994;
    msg.range = 0.725196147223;
    msg.data_mode = 32U;
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.201992964436;
    tmp_msg_0.x = 0.210786034429;
    tmp_msg_0.y = 0.936720934195;
    tmp_msg_0.z = 0.492659307716;
    tmp_msg_0.timestep = 0.444745066114;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("DCSHFOZAEZXRBKRLLWFUKNNGJWLDJPSHCCQZAQEPJPPWIXUJKBFRHY");
    const char tmp_msg_1[] = {24, 58, 124, 45, 117, -78, -33, -10, -123, -23, 22, 90, -43, -104, 117, 49, -59, -32, 39, 120, -97, -49, 51, -31, -106, 61, 71, 103, 21, -92, 75, 54, -84, -111, 19, 83, -68, 71, -36, 70, -50, 84, 112, 59, -30, 69, -84, 54, -81, 117, -16, -81, 122, 69, -79, 21, -46, 1, -78, -14, -97, 67, 73, 114, -27, -88, 20, 94, 29, -15, 21, -1, 126, 15, 89, -78, 50, -128, -73, -48, 10, -5, -122, 120, 63, 39, -42, 103, -125, 4, -88, 95, -108, -128, -79, 102, -24, -112, -112, -2, 95, 96, 42, 57, -126, 96, -62, -117, 98, 86, -95, 105, 34, 118, 37, -31, 15, -29, -117, -124, 99, -66, 51, -108, -15, 110, -93, -43, -92, 80, -68, 75, -59, -125, 62};
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
    msg.setTimeStamp(0.943228277691);
    msg.setSource(51777U);
    msg.setSourceEntity(39U);
    msg.setDestination(27205U);
    msg.setDestinationEntity(179U);
    msg.req_id = 6915U;
    msg.comm_mean = 15U;
    msg.destination.assign("VYECIUPUJHZHHRFMTNQXDZXAEEXXGYGORNENBOVLHEOLUTYWLSGIZJBMJYHNBFPVDNLFATBFYLXNLWSKKIJQWTGIZCDIZRFBLVHHGGQCEXJHAOAAHZPWOUZCZNDSDTRDKTVJIKGSQAGCDLGUVJKLZPUFKIBWMOPNKZVNWVJKIDFEXKRXQYJPYLSEQOOWERVUBTATAUOHCUMB");
    msg.deadline = 0.778241688845;
    msg.range = 0.88974428152;
    msg.data_mode = 26U;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("QEALEBRONJWJRVUCZKVPDVBAKXIGDPLMGOEVTLMWUSCIRVCPPSNVSOFBKGSXAXNFYYNRDLFVFTGITKJHKSQBLOJEJRBQEBXFINEZRELIGPBILCVUQUZXIIWMQFTDJXMHTXJUPSMATXUPKFYGHKQOCHRZYCNUPHRVBYPZHSRWAUTOYYGQTMDBAZUZDWFDLUJYOYMEDSQTHHHWGOKBLWYMZQMAZSMHXLAWRKIPCECWNNNGOQGN");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("PHUNEVGKOCFUTZHMVZXIGJJIKWHKRMXHOBKEAZSQZALRDWRGWTSHIEALADFPKCQBKXTGBFKOTFNFPRBXUVKYGJOSTLQPSXIOVLGSFUDVDL");
    const char tmp_msg_1[] = {88, 90, 56, -64, -114, -90, -122, 71, 101, 25, -23, -77};
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
    msg.setTimeStamp(0.648769328372);
    msg.setSource(12310U);
    msg.setSourceEntity(205U);
    msg.setDestination(23569U);
    msg.setDestinationEntity(107U);
    msg.req_id = 8157U;
    msg.status = 35U;
    msg.range = 0.139448844944;
    msg.info.assign("XXDKKZLGLMQRQDPCDBELBTOQWKQVXW");

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
    msg.setTimeStamp(0.613600877376);
    msg.setSource(27985U);
    msg.setSourceEntity(51U);
    msg.setDestination(10104U);
    msg.setDestinationEntity(32U);
    msg.req_id = 59493U;
    msg.status = 101U;
    msg.range = 0.719352598161;
    msg.info.assign("QGRDNLGXAK");

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
    msg.setTimeStamp(0.858659412053);
    msg.setSource(40684U);
    msg.setSourceEntity(146U);
    msg.setDestination(42559U);
    msg.setDestinationEntity(5U);
    msg.req_id = 9118U;
    msg.status = 46U;
    msg.range = 0.713003983954;
    msg.info.assign("OJVACCZEHWYOMFHXPWETVHOBTFBERGYIUMSMNSCJMTSQEJUHIUIDJSTQNAFIWGMWVADSHKRFXRPPOIWBIQZNWMEGUXIALRYUUULDQLCKINNDAGSDLJXLGVMSPXTYBHLPUKSSTXGQZXNCYBKNJHCAFOTZA");

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
    msg.setTimeStamp(0.897631768624);
    msg.setSource(10645U);
    msg.setSourceEntity(67U);
    msg.setDestination(38049U);
    msg.setDestinationEntity(70U);
    msg.req_id = 13457U;
    msg.destination.assign("CRXLNUHQZW");
    msg.timeout = 0.0781270461949;
    msg.sms_text.assign("DEOCFZXWMIHNOJKXMJCSLUBQLVHTHTZUJDJQDRANCZWDEDGF");

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
    msg.setTimeStamp(0.870872458353);
    msg.setSource(50686U);
    msg.setSourceEntity(138U);
    msg.setDestination(11565U);
    msg.setDestinationEntity(111U);
    msg.req_id = 58267U;
    msg.destination.assign("XGARJMHZNNKEKPCQSVYYNGYBLVGHMFLGKLXJTRADCTEFFSZIVFLVIAZQSLTIQG");
    msg.timeout = 0.985012860519;
    msg.sms_text.assign("DJSFENEPKPVWKGGSLGMTTNRRYUSFVWGUQNFNCDQTIGJXEHXMKVTKGMMECBVAJHBVXXBFFONJECVQHNKPFCZOXZIBHNPVYVWFIRJXTSIUJWEYBI");

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
    msg.setTimeStamp(0.275085288406);
    msg.setSource(24513U);
    msg.setSourceEntity(148U);
    msg.setDestination(50166U);
    msg.setDestinationEntity(213U);
    msg.req_id = 12864U;
    msg.destination.assign("CDEUHJACGLIHIHZOQDWSJBEKPUSWZGNYTLAYRKVZGPMWRNLMVRSTQMQFKFMOVWSSXAPCDLOIRBNXZJJUCAPVNKUBGXEQNCBUNCTEWUUFRAAQEBNFTRPVMNXQNYKOEORWFRQOYXMCJFWUABXIDXMFVEHBEWDDPGPPHFOKJQQPPTXMGJLZCXMLHHLYKQKNZGYCYOIMHTGFDASSFTHKCGJBYVTAVZBRUVAHEZLYZDDSTOIKWIDZJOWGLBRISJUIE");
    msg.timeout = 0.895693914362;
    msg.sms_text.assign("TOVNFPCPOCYUMUROAVGEYIIVXWWNEXHNXBVTWJHAIAJSNUQRUKRXMYXHGCCLNNELJRSCMHHFSBKGHVEXPIHFQZSYRAQDEUZTYKJONBFSDRPIZSCQVPKWJPDOETKZRLLWNQPJIFCWSDBKVZEMAZAGDDWOQEUVFVLJTZFUNEIILQZFQYORAQTBTDPRQ");

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
    msg.setTimeStamp(0.138908669381);
    msg.setSource(3720U);
    msg.setSourceEntity(252U);
    msg.setDestination(4311U);
    msg.setDestinationEntity(180U);
    msg.req_id = 56261U;
    msg.status = 148U;
    msg.info.assign("GUVCFIMWLSA");

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
    msg.setTimeStamp(0.845503116888);
    msg.setSource(49939U);
    msg.setSourceEntity(189U);
    msg.setDestination(29404U);
    msg.setDestinationEntity(169U);
    msg.req_id = 38390U;
    msg.status = 195U;
    msg.info.assign("UXSWQHVCCOYBPGYJNPADLXWXZEHBNDRNBFUDHLLTRVYOAXPUCDNUTYANZHBCRAYVPICGXQKGPKOSBAMMTLZRVIJAXUVQBJGDVZUKEIIWLDOQLCZHFPBMIAITSEFXEZBKOQMSYXYXKWMWSXE");

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
    msg.setTimeStamp(0.824545008445);
    msg.setSource(41447U);
    msg.setSourceEntity(166U);
    msg.setDestination(4343U);
    msg.setDestinationEntity(251U);
    msg.req_id = 23673U;
    msg.status = 75U;
    msg.info.assign("EORWLOJWFIPNOLTOAHYFJGKVIIOLRWGVKNXGOBARXUMCHIAAXKWVQDQZVMFMFNTVJYGGGSXRYAHDJBNIFWDQNSYVFKNRLFMXSKUSHIMQCYVPJDOLECROLGCIVKRPZHSTPKSJVKQCXEBDIMARNDGZLJQMWCXKVYHTQZTPMPQXAGP");

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
    msg.setTimeStamp(0.645470749825);
    msg.setSource(58678U);
    msg.setSourceEntity(183U);
    msg.setDestination(3873U);
    msg.setDestinationEntity(149U);
    msg.state = 46U;

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
    msg.setTimeStamp(0.50585459238);
    msg.setSource(17173U);
    msg.setSourceEntity(210U);
    msg.setDestination(13720U);
    msg.setDestinationEntity(217U);
    msg.state = 187U;

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
    msg.setTimeStamp(0.656075522275);
    msg.setSource(52499U);
    msg.setSourceEntity(91U);
    msg.setDestination(16075U);
    msg.setDestinationEntity(158U);
    msg.state = 176U;

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
    msg.setTimeStamp(0.162086960978);
    msg.setSource(49555U);
    msg.setSourceEntity(218U);
    msg.setDestination(63993U);
    msg.setDestinationEntity(72U);
    msg.state = 149U;

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
    msg.setTimeStamp(0.191637081719);
    msg.setSource(38074U);
    msg.setSourceEntity(5U);
    msg.setDestination(58573U);
    msg.setDestinationEntity(105U);
    msg.state = 220U;

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
    msg.setTimeStamp(0.339161073588);
    msg.setSource(58278U);
    msg.setSourceEntity(136U);
    msg.setDestination(30478U);
    msg.setDestinationEntity(146U);
    msg.state = 233U;

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
    msg.setTimeStamp(0.833517336603);
    msg.setSource(16268U);
    msg.setSourceEntity(215U);
    msg.setDestination(16464U);
    msg.setDestinationEntity(80U);
    msg.req_id = 7304U;
    msg.destination.assign("SRGAUXFWVAZRPUTGSFXUHCZUAXAQZEPYSINJSPOTIWBTAAITBEOKDK");
    msg.timeout = 0.345865291886;
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("HWKQZIGAQOBGONZTUYQHPLQXNCWVWNRHLAAKLDABIWLNUEIHOVYEEWWEDIJHBUVRKSNYPHJPYTQMMTDZVDMCBU");
    tmp_msg_0.predicate.assign("SRPFZXCAEY");
    tmp_msg_0.attributes.assign("FMKFRLEQTWXBOAYGOUIKDVWVWLSYPMBV");
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
    msg.setTimeStamp(0.492112359258);
    msg.setSource(61150U);
    msg.setSourceEntity(20U);
    msg.setDestination(24425U);
    msg.setDestinationEntity(195U);
    msg.req_id = 47260U;
    msg.destination.assign("GNQBUCEFPUTQUYWUQDMNVPMVIKRCWTSKSKAPVZSTWBJNZFQDXVSJRAHHNPXMHTYEORVSJQMATFYAGTCDIITDXANKCFPBBWAEY");
    msg.timeout = 0.238922209482;
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.703980967763;
    tmp_msg_0.units = 248U;
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
    msg.setTimeStamp(0.182013834084);
    msg.setSource(43904U);
    msg.setSourceEntity(106U);
    msg.setDestination(393U);
    msg.setDestinationEntity(210U);
    msg.req_id = 24054U;
    msg.destination.assign("FREODHIKWBRRSJHGONDHBRAYTSZMAHDUNQJNLALPSWLDYHEEXYZJDCJNVTIUBXJQPLIOOPKUHSSHWMQQPUDRSVIEHNZPTTYJVCZOYGMSODACNSGMVWFVDZIBKCXXKLBZZCETTGEPQRDLXGWQTFRUIYJVMGAVZWWLIKLIAGBNVOXXDMZNYNUMPCTCJUM");
    msg.timeout = 0.4954682272;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.638095037729;
    tmp_tmp_msg_0_0.lon = 0.107161220176;
    tmp_tmp_msg_0_0.height = 0.249516466998;
    tmp_tmp_msg_0_0.x = 0.242942451291;
    tmp_tmp_msg_0_0.y = 0.287940517017;
    tmp_tmp_msg_0_0.z = 0.106358001543;
    tmp_tmp_msg_0_0.phi = 0.912514561201;
    tmp_tmp_msg_0_0.theta = 0.614912021416;
    tmp_tmp_msg_0_0.psi = 0.373706060165;
    tmp_tmp_msg_0_0.u = 0.369119226361;
    tmp_tmp_msg_0_0.v = 0.574322381106;
    tmp_tmp_msg_0_0.w = 0.849726193608;
    tmp_tmp_msg_0_0.vx = 0.00539994166992;
    tmp_tmp_msg_0_0.vy = 0.479894856718;
    tmp_tmp_msg_0_0.vz = 0.558501639324;
    tmp_tmp_msg_0_0.p = 0.293080792042;
    tmp_tmp_msg_0_0.q = 0.810310081592;
    tmp_tmp_msg_0_0.r = 0.131180177204;
    tmp_tmp_msg_0_0.depth = 0.359982815857;
    tmp_tmp_msg_0_0.alt = 0.0514365062584;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 246U;
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
    msg.setTimeStamp(0.465061396787);
    msg.setSource(2363U);
    msg.setSourceEntity(182U);
    msg.setDestination(28793U);
    msg.setDestinationEntity(214U);
    msg.req_id = 12838U;
    msg.status = 219U;
    msg.info.assign("KXNKZOEDDBYCOXGWPHQPCHIFMVSFHWDJVNOUHOFEWHIEODWZGCEYEMODBYTARRKIQYUCKDPPCXFAQQQZFITICGWWEPFXZEBDDVMOVIFBZLJJUXNULUHKIJRVLGRWYXPAZBRNOMQLUKLKCMKSDGMUGHMXMHPCALVTAHNWNPVMECTSSXFISYAZNNGSXZTOLA");

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
    msg.setTimeStamp(0.0351809810308);
    msg.setSource(60240U);
    msg.setSourceEntity(114U);
    msg.setDestination(13501U);
    msg.setDestinationEntity(63U);
    msg.req_id = 487U;
    msg.status = 232U;
    msg.info.assign("TVGBWIYRROURIHOGQDEINMWELMASUVQTEGXGTDHQEXUSKMOHUWKUYKX");

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
    msg.setTimeStamp(0.3774623251);
    msg.setSource(63758U);
    msg.setSourceEntity(27U);
    msg.setDestination(21604U);
    msg.setDestinationEntity(224U);
    msg.req_id = 42278U;
    msg.status = 56U;
    msg.info.assign("GWNUMYFRRPSPBAVVDKMRPEPOSYJBYWMJSXPLWVJJQKJDWCHWAVGCCFYMLTMFLPOBIOOWFCZNXYEIOYXXTBMNZDMZAEEYFLOYEDSNLRTZTUVNADHCTBXEFTPIQYVFXHMKZACUGVPDDKAKCXNUFUZCZHLPLAUTQFIKQWTRQQAFSUBGREQLWHRTKQIUBIINN");

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
    msg.setTimeStamp(0.401165860443);
    msg.setSource(27460U);
    msg.setSourceEntity(155U);
    msg.setDestination(19386U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.394828153537);
    msg.setSource(15449U);
    msg.setSourceEntity(253U);
    msg.setDestination(39421U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.889922009722);
    msg.setSource(54301U);
    msg.setSourceEntity(94U);
    msg.setDestination(29615U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.299134647402);
    msg.setSource(61917U);
    msg.setSourceEntity(147U);
    msg.setDestination(61149U);
    msg.setDestinationEntity(13U);
    msg.plan_id.assign("VPBYBYSRBPOLAMZFPLTDOKVJXONTWISPQRILEGVAGKPTQGIODAHDJKIWENH");
    msg.description.assign("LFOSWSRWQSVBHVYINAXYPCUBUPJRZCTGFSDIWERKYXIKNKLBXTNUNJKHOZUSWOTJUHEMZYICXRVGMDCDWEXMILDNZLLCWKPJWMGTJOQRHGEWCILVF");
    msg.vnamespace.assign("YBLRSSJOLYCWMIXDHPJZXUBIWGFLJTPETBAYVCNHIERDCDCGRVCFCERSESVUKNTDQABBJGLRJXBMJEEPBUSSWEXLOZNGPPGGLUTEQNQFHTSWDKOPVDIXSLHVYXQHHKKZFECHRZNXUTWQHF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("WYIFYMBWCHTIIYUHURCOBTNIXCVJOAEAODWVMHCXSGRJHWBM");
    tmp_msg_0.value.assign("UWDUPZVKNRONSHWEBKVSOFFTVETWXSRGBCWHXLJKDWPDYOONBNRCQDOSZZAGWYLIXQFQAIZRGBAEUTHCXJPOJULXTHKZWMUFNLAQS");
    tmp_msg_0.type = 215U;
    tmp_msg_0.access = 59U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("MFILXASWJAUATWVHQEYROFBBOCSEKZVFAKRXUTNNFSTXUSMPBVZQJPNBVENSPEDHCCWGHBIGLEIAPKYYNMJKYCYJIHMCZFJG");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("OJEKSXFOMOEDGQJHCIWGTVRLYPUILYBEQJJWQTUNNVLRQWXLWMNPXKJQUTRHZPLRMZVAPHSCTDWAHVPOUMHJTEDGKFOAVCSVBAJCZBIUIKMYCGMGRBXMFFUZYDVKTDKJGNNSWYHOSBWBUMTNXPSXINRAZJOQKSOEMQAQJPVFXNELRNHLOEDDZHRHGBAGRQRCLDNFTTDCQSAZXMVBBPPXY");
    IMC::RowsCoverage tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.980354372015;
    tmp_tmp_msg_1_0.lon = 0.690582383262;
    tmp_tmp_msg_1_0.z = 0.361774931581;
    tmp_tmp_msg_1_0.z_units = 58U;
    tmp_tmp_msg_1_0.speed = 0.00276972444838;
    tmp_tmp_msg_1_0.speed_units = 217U;
    tmp_tmp_msg_1_0.bearing = 0.369264687054;
    tmp_tmp_msg_1_0.cross_angle = 0.581113916655;
    tmp_tmp_msg_1_0.width = 0.625074663384;
    tmp_tmp_msg_1_0.length = 0.631433578047;
    tmp_tmp_msg_1_0.coff = 162U;
    tmp_tmp_msg_1_0.angaperture = 0.32194136974;
    tmp_tmp_msg_1_0.range = 56224U;
    tmp_tmp_msg_1_0.overlap = 64U;
    tmp_tmp_msg_1_0.flags = 57U;
    tmp_tmp_msg_1_0.custom.assign("USJDTHVVOJJLGFZVDGEJCQPWNQVDKOKPCERALGWTTFYYHRQRRISQAMIKSQVOWMERVLZHKSFBNLAUHZWEABOJONIFYDTICBSUTQHMWEAOMRBSCPKJVZMDMNXAGBZZDSLSHIMBVIPIZVLHNSUYMOYYFTAQYZUKXDNEUKBKAUXJRUPFLXJEFRRHMNXXEYZGOQKPLDTIATUDFGCXAPPYCROCWNLCKNNBLQCHGGFHDT");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Event tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.topic.assign("XSFOWUWLPYKGTWVNIBJRDCZAIHMCZIPDWGSBVXFKKXPFWKOHXBZANCJBESAWBF");
    tmp_tmp_msg_1_1.data.assign("GFLJTWDAGFDUUIZWQSRFEUPJOJWNRRDMZVDPXKGOKOVEXSSJOIIRHVYPJUSIMBLNOVBWMLNZUHISFKLEUBG");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("GZLTQPBRHHIEROUEZUSTXVDNFZSKPCURUFEMPHCPSLOSYXAVGFAMDNCKTKZNXWRGSGNWMWHDKNIDWUHXABDGJWKOGLEHXSSLZYQYPFLZVLOYMHIYWU");
    tmp_msg_2.dest_man.assign("AACQGCTLYOUDTYYJJGJC");
    tmp_msg_2.conditions.assign("XAWRAQPSGIASFOTWWQZXADVSSDFOPRZOTATGTKCZEYLQZREBWEUEJZKAIVLNCQXAMLKUSLLRIBMZXPGMHZBSKWVIVHLJCXXZZFTY");
    msg.transitions.push_back(tmp_msg_2);
    IMC::SoiCommand tmp_msg_3;
    tmp_msg_3.type = 70U;
    tmp_msg_3.command = 218U;
    tmp_msg_3.settings.assign("ZWDAKFXRGNWONRCMPUGVTPRXXEAWTNENFURFLUATARQCYVGSKZK");
    IMC::SoiPlan tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.plan_id = 63960U;
    IMC::SoiWaypoint tmp_tmp_tmp_msg_3_0_0;
    tmp_tmp_tmp_msg_3_0_0.lat = 0.263958146606;
    tmp_tmp_tmp_msg_3_0_0.lon = 0.120215724049;
    tmp_tmp_tmp_msg_3_0_0.eta = 702573426U;
    tmp_tmp_tmp_msg_3_0_0.duration = 26410U;
    tmp_tmp_msg_3_0.waypoints.push_back(tmp_tmp_tmp_msg_3_0_0);
    tmp_msg_3.plan.set(tmp_tmp_msg_3_0);
    tmp_msg_3.info.assign("BLPUAGVKNPUPGBTXQQVZKQVXNBDPKORXJIEOKHKQMAYJXHGGLBYIWHQSFCTFAJMQDLREJJSSTPVFGRJCBQJGHPWWTDFIEXQTWWUUFMXSESXZMXNDVPUJHCLKJOOCHRWHOZMCQTANURRHVGCIBFUIEMOMCEADDOSHAGWYYDMLVOGYXLFCOIDYNOKNPLAUIXRTPYKTZUDSKCZSVRPB");
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
    msg.setTimeStamp(0.735330525672);
    msg.setSource(57137U);
    msg.setSourceEntity(88U);
    msg.setDestination(21025U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("EABFHVQZLYOGJVUTYXRJCFHAAHSUPTDOQUBHOFGCJOQMQSIBMNZEIUKDLNFAFWPPIXEUVXIPMPPPKSTJSRCXDGTXDRNGHIQLNGKRZLFRTCFSQPMTAVXFIWYFGNGHZWHMVWUYERVYNXLVXWYPSZABZYRSDLDOJXNSJLHIJTYNEEUDSJIAKVCEUMOVLDGDCKTWQRXAZKUGKRIHHBQWTJLJZGRKALBMAWTO");
    msg.description.assign("YAMLLBMFFZWRNEEUNIGNJFJPPKVEOLMTZIQCRSJCDJDWSSSBIUNHTEEDNZKCQVMUBLRUCSRZLMQQESPFIXPBGBQNOLYXCDYVGQYJKKAGZYTQDHIJECUXOXXXDCUWRFVHXRTEPRGDROFFDFZIVPCLOATMTQARKGUMVAIOTADYYZNYREYFKXWTKFSVNOLIJHHLUJGMEZKQXBOOAHLBIGMATBGHWWPZVDHKUNBWSCSGJNUI");
    msg.vnamespace.assign("NDRMUYHLJMAHVSCMRKQDGDNVPRCGFAFLEDNUQHXDUNYWXIOICYEMNGQCGZYSABXPJRHALWBGOKORZQPSQOWLZEUKMGFWMVXHJCUHWDONSTISRGFLOELVVFAQACBJYWIQWCIVXTTRZTKDFMDFINTJKJLRIXYNMTGOBLBZDTVIZRAPCZUNCPPEAYBWQZTKHJKUCP");
    msg.start_man_id.assign("EDIELHSJWQBURJYDOXGYKWSNDHFXAOKXKRCLMNFLPSMYWZJTKVKAYNAOF");
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 184U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.763810364616;
    tmp_tmp_msg_0_0.speed_units = 224U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.564012804075;
    tmp_tmp_msg_0_1.z_units = 44U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.970232626664;
    tmp_msg_0.lon = 0.764541051035;
    tmp_msg_0.radius = 0.794325149823;
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.0249172608479);
    msg.setSource(37400U);
    msg.setSourceEntity(3U);
    msg.setDestination(44848U);
    msg.setDestinationEntity(132U);
    msg.plan_id.assign("IVNXGAIUMLAVTXBEAIVLTAPGKQWTAXLBGTKBTECZJKNHHEDNAFRHLMYPDCFMSDPIHZTYLAQAQP");
    msg.description.assign("XHDFBHBBIOGVNTSQWCVTHIJZYMQZMGWMYUWESKTQJOXLDKZBHRQZLMLJJAOOALSPEDUDHFKENULWJZJIKINDUIPKWCAGVXPEGRSFAOCEKNYPYLHXNJRPTVJRESAYIDORWMIKSQPZGSMFNJBOVVIYUMTMGREAGLTPUZZUFWRUTYLVANMDCFZYKCOCFXZPJBAXHQLSMSETPCKCDEWYVQQIDWPRUOQGFYNEWXBFKBVI");
    msg.vnamespace.assign("NVGOQVTASKXPGPRWONBSMMSQJQYLXBGEVDQFIIBNHWMFSAEQWOYUDFAORAATJZFPZMYSXTAPXUQKIFZVCXDYTYQSKXECTGEWY");
    msg.start_man_id.assign("IODZDLBXFQHATXSLKVHL");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("FECSFIAYLHWFXPNTKEAYCUHVOPCRXEUKERGHKSBSYTHJLIELZDNQFVGRDXXCGYWGAPKVUPSZMATVTJLMMTBAOIWUWQMDKXUCKINJRPSQFYBPDXWILOCMTVQJAPSTXN");
    tmp_msg_0.dest_man.assign("LEMVZGDSVBUKBITOUWQAPCHMHMCUOYQHJCAFVAEHNYRGDWNXYQUZDLCPEF");
    tmp_msg_0.conditions.assign("VWEIKCLJEFSDOGCVWBQTKQYXRCUYCXLBGXDNYQKCHQNIMEGZETWSMFDHZIDKJHOUNUHSUGIWQEYEIPLICUCBDJZO");
    msg.transitions.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.371143748047;
    tmp_msg_1.beam_height = 0.101758959975;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::EntityMonitoringState tmp_msg_2;
    tmp_msg_2.mcount = 43U;
    tmp_msg_2.mnames.assign("AUWWZGIUTIORYZDTBMFBTBMCJIBXFQQPAHKYVYTRLTPCOWTDOOZKJDOBUYSNGXKMNCWJXXPRMIHGZPVUCHXQVGRKPZULHRCFBKOBMHDYSRJGJHSWOFMNYRJKVHBKVEOALGURQREVUFDWNNZMNSLLQAASPAYQKCZFEGFGPHQYFXDSDEKPVTSIQSEIDHLHJYXIOCAAVEXTCIPDLLJZOFV");
    tmp_msg_2.ecount = 166U;
    tmp_msg_2.enames.assign("AJOYRJMZQVSSQZESFCHKMSJRNTCDZFWPPQBTUVLZTEQQUYVWOZSBWNGOYISDMGDLVOBFIGSWAPHUDGVFTLJSYFYHDPBCERJMSRNKLGGMAXYYJATWLZFRAKIEINNXUUVLCCURIHXNCMADDQVAKOKWIJGYPWBKJCRABLMOKFHJ");
    tmp_msg_2.ccount = 130U;
    tmp_msg_2.cnames.assign("MZXCPHMTHEUXNMSOYLGDJWCOTVOENVZQYGSY");
    tmp_msg_2.last_error.assign("VPMCNGITDHPARNUTBZKWSNHAIXGYUKWWC");
    tmp_msg_2.last_error_time = 0.24386706286;
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
    msg.setTimeStamp(0.0375904318411);
    msg.setSource(35436U);
    msg.setSourceEntity(38U);
    msg.setDestination(61613U);
    msg.setDestinationEntity(174U);
    msg.maneuver_id.assign("EFEKEXWXYAEIVCKMPDDWFTZUBVNHDMWJCDPYVXCMIENFVMLKJGVLABRJNIRSBIXQYDTCURCLPYTHNVKTORBHEKSRNY");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("LLQDTKOGNLILPVXNTQPUSPOFTLVRDUIXZUCJADUYHSODHGZUYXZMPOLRIWKRZOCXELBV");
    tmp_msg_0.formation_name.assign("MDHWYQFJHXPDUQFNFJVRLNEBBWHTIZIPHKTKGHYYELUMWXTLFKSRJPULWKQFSYRRGAZOYZZORYJEDZASHIBNMIXJOCVPVOWAZYDTMSDMSVQSVUJUDEFNQKXNVKXOECACPCSIPBWCBRUNFOCQQHQNJSIRTIEOPGELVNVHFGCFLDYGPRJPBGHDUCBGLNOAGQL");
    tmp_msg_0.plan_id.assign("FMSCOKNZGJEWPQAVCOLTQIZJLWEPYJHPWBKLIEDMOGRRCQMWPUNWKDQVKZQVPDHBYHEAFLVSXNLWXKLYSCBGBAWOJYTYTJHYDDOXJNORBJXCGZZUNMAGZCDEYROCGPIALCNXCOPRBIUQSTVVHYUPMATFWFLWLUDBXIDEZYSKUKSEOZJVWNRAGUARGPDAXEISQNIERDBISFUTKHQXPJEAVNXRRTSIMCHVTOKXYMQF");
    tmp_msg_0.description.assign("AWKWWINYSDDEMBHFMDVTTRJQOMGSCYERKRFBEVBYSGR");
    tmp_msg_0.leader_speed = 0.207616487864;
    tmp_msg_0.leader_bank_lim = 0.888179785033;
    tmp_msg_0.pos_sim_err_lim = 0.269549949701;
    tmp_msg_0.pos_sim_err_wrn = 0.378480361835;
    tmp_msg_0.pos_sim_err_timeout = 65243U;
    tmp_msg_0.converg_max = 0.783656872878;
    tmp_msg_0.converg_timeout = 10702U;
    tmp_msg_0.comms_timeout = 14980U;
    tmp_msg_0.turb_lim = 0.153462034812;
    tmp_msg_0.custom.assign("QCJVJSXPBVPVWBPCANYGDDQLLRHFGLWSNFMVZNAXXUPFIEYHXACKWVLHHBBKMWHSPUEYOEYOTAEFFWQEIBUJWMFTAJNVPFKVGXBJUSLCEDDDOZVIBNLKZCERYGXTTQLOMZTDKABORXEMVTRIKTSMDQFORLLYFDMNKGHGDCYGKQQGURS");
    msg.data.set(tmp_msg_0);
    IMC::IridiumMsgTx tmp_msg_1;
    tmp_msg_1.req_id = 6028U;
    tmp_msg_1.ttl = 2085U;
    tmp_msg_1.destination.assign("FXUWVGLAHSKNPBEYVXQKVNDCISEFKDYFHUHSWRERKBIRWDQBWBSXNOPKYZDCJOMTADWEJWTSEZCQJGAAEVKMOKMUHAGKXCHVBRZFCRCBSHTLGQGDVUKMCOAIHPSXXZQNGBOZ");
    const char tmp_tmp_msg_1_0[] = {69, 121, 77, 38, -97, 24, 125, -83, -116, -38, 46, 53, 95, -51, -15, -103, 22, 94, -17, 58, 70, -19, 10, -108, 125, 11, -75, -74, 14, 122, 101, -27, -55, 119, -7, 70, -103, -79, 71, -44, 32, 37, 18, 35, 121, 17, 106, 97, 40, 75, 23, 12, 13, 42, -40, -89, 13, 126, -76, 93, 69, -29, -60, -128, -86, 34, 99, -31, -90, -16, -127, -99, 67, 100, -42, 40, -48, 16, -47, 124, -100, 41, 89, 55, -27, -82, 33, 5, -25, -25, -94, -32, 40, 120, 123, 31, -2, -80, -12, -110, 87, -37, 109, -42, 0, 88};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.0629457835344);
    msg.setSource(42396U);
    msg.setSourceEntity(152U);
    msg.setDestination(113U);
    msg.setDestinationEntity(61U);
    msg.maneuver_id.assign("YQTPUIFELNODJWTZIOZVYLGTDTHQYEZXRBSCSZIOJIBIUMRJQJZRBWEIPIFLVGEDRYKQJHRYNFBRAKUGLEMIBVWRGOAWMIJKYJCVXPEWUBDXPQMTSSPPLIBPXGCXFDQMQUEAKOJVWNBNPWWQXNVMKDSAMNLGXGRAYQGTMCVCZE");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.440635481649;
    tmp_msg_0.lon = 0.271769784498;
    tmp_msg_0.z = 0.45541495146;
    tmp_msg_0.z_units = 181U;
    tmp_msg_0.speed = 0.64343915307;
    tmp_msg_0.speed_units = 162U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.964604829477;
    tmp_tmp_msg_0_0.lon = 0.636830613376;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("GKXOAZWMYGHECHPLYSKYNDQLWMQEXZGNDOLFOMPDUNONIVUWFCSNZUMLLUMDYQTBUDWOAYQAEBPUGHHRRUVHCFFHNECDXIBCDQWTRUJROOOVJSVPZFKFLXMUBCQGVXHOAZZPVPJEQIAXCVGHAQNJJFRKATIIAMHIXRIKPMJARQNBZ");
    msg.data.set(tmp_msg_0);
    IMC::CustomManeuver tmp_msg_1;
    tmp_msg_1.timeout = 40447U;
    tmp_msg_1.name.assign("ATZMUNMKCRMJZAACPCZMEQZZWFZBIOHPSETWHFDXNJFPSWDLTTOHYUSIXYVLQDNMGKNEYSOTDTLVOXQHKDYRBNPNAKYWHABFZXLFVEMYYOPROOEZKHLJ");
    tmp_msg_1.custom.assign("RFRZMWNIGMTSNTJHBLFBXWPAWCVWVJHXPAZJUQIABXYOLERWJAKCVGFSNDHVHLDHUEFKDQZLTSODADUDNKJRSOJQMVHMBPONRBIALMCZRXPBEQNBAEOIVZSKUPCTXCOWCEYPGGVBYUDONHGMAUWVMXEEQRKJWFUFFOYEZKTAZRHGXDUIJIKFPLYSQJUPTFUHLTISOIPWTXGKCYBGTSRSLXYSLNKDOXGIQJ");
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
    msg.setTimeStamp(0.812008382703);
    msg.setSource(35307U);
    msg.setSourceEntity(26U);
    msg.setDestination(30918U);
    msg.setDestinationEntity(16U);
    msg.maneuver_id.assign("FCOFQGCAJRVAAWESPRVNMKMHYNFLLUBBOQKGNSGHFIEVKYXBDWHXNBZOCDTQQYZDRTNFLRATEJGROISQITELXGUKMNJQDZSYTBNSTHOWJWMGXQBCAZYAWWKCCFOTYSPSARLSDQXEUVLYCWPWCBWGRRTATUBHVNMDUWGEZVBJLADUUEAXJLGMOCOHUIJQRXZNKHPHFDZNXGZFMIJJKIYFOPRHMTMB");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 51128U;
    tmp_msg_0.lat = 0.175998949794;
    tmp_msg_0.lon = 0.166296159682;
    tmp_msg_0.z = 0.37839189839;
    tmp_msg_0.z_units = 182U;
    tmp_msg_0.speed = 0.782119541547;
    tmp_msg_0.speed_units = 249U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.0186580102748;
    tmp_tmp_msg_0_0.y = 0.199926104316;
    tmp_tmp_msg_0_0.z = 0.122767789539;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("FBEZZZXDHTERPOSXZHVRTWXUFKLMYQHCQBYUVXTHXHFNRLHQNEWXPKVJFKBAGNJCLPCPAPVGFONNRTDINEBXTMKPIWWUJYQBMJWYNNJPDRFMLEZEWXJVYUZTKKHMGIYPRHAQAQV");
    msg.data.set(tmp_msg_0);
    IMC::TBRFishTag tmp_msg_1;
    tmp_msg_1.serial_no = 2021310609U;
    tmp_msg_1.unix_timestamp = 3840340751U;
    tmp_msg_1.millis = 55147U;
    tmp_msg_1.trans_protocol = 167U;
    tmp_msg_1.trans_id = 3956084291U;
    tmp_msg_1.trans_data = 2780U;
    tmp_msg_1.snr = 30U;
    tmp_msg_1.trans_freq = 46U;
    tmp_msg_1.recv_mem_addr = 49091U;
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
    msg.setTimeStamp(0.596885286849);
    msg.setSource(42756U);
    msg.setSourceEntity(239U);
    msg.setDestination(45767U);
    msg.setDestinationEntity(62U);
    msg.source_man.assign("IQCXYEPNMOTYAXFNMKAOUNXMNBRENZAOUMCGRAGETLLPOWWQDRCRKSBMOMQTMBZLSKAIDIZKGJYWJIWCESGIYHXJLGSOBQXPAPBBRUTOTYWAJFFTMUBEPTTYXUYFIHSRARZJHDUWKJOQDYXQVLVQCHFHFPWNWKLWYMGFKIIUJRUDVVHNPTDSGYXJBZRNCALGZV");
    msg.dest_man.assign("IIHFNCMMEZMEUWGEPLSDAWCBRYDERAROGZVHRQMZGKBACDKCOPUMNYPPNAOWYJWEIKZAKIZRCQJNKHRSCYFLRKJOSQKJQOVVTUJXTERLUTPATQLSNXXIUWVHBGGFAYSZZNLPWZYOWGNBISXXUZPSXTJSA");
    msg.conditions.assign("QALQBASZFTQMRCKYJWCFACRRRETCWRMLEFDNIYWEMMGDKUJKSHDSRMWSQHYZOZCSEUH");
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.282337972459;
    tmp_msg_0.temperature = 0.758311003813;
    tmp_msg_0.depth = 0.81389312062;
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
    msg.setTimeStamp(0.0822796326265);
    msg.setSource(32846U);
    msg.setSourceEntity(165U);
    msg.setDestination(50153U);
    msg.setDestinationEntity(70U);
    msg.source_man.assign("GGQXEYAAMSZGKMODDERZBWRCAHDBAYCSJTSKGFVLNHLZWPKSVZVMAWFZBRMNWLOOMWNQNVICVIX");
    msg.dest_man.assign("BZTWINBNYVORALFLTXGWYEZYHYKWELIULOFVKCGDFKIWEMGPJSCAAUPPHODPRWQSRKHSXEQSZCJDLQBTFWKWFLYUXKJSDAXRRJBPHNMNFLVSGVGBDITJGQPUZEOIOEJQSHTMZUKXBANMUEIKDRQQYZFYUKMMHCAZXBUEVFBOOQQNJENKIQSHNZPMCRFGSBNJBDHOUODMLZPMDXSTFIGPVLCNAAERWRDXA");
    msg.conditions.assign("VHNVLDWAVATYMCSQCURDLUPBKBOWOWFCYQWLOXXXUEPDGVZQXPNIISQKOSSQPMXJSEUHPRYNEYIFAZDBHKZVJGLDFEXNKPEFZCZQFIDTTBR");
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.60151138911;
    tmp_msg_0.temperature = 0.165486994417;
    tmp_msg_0.depth = 0.989872464761;
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
    msg.setTimeStamp(0.273307046361);
    msg.setSource(45916U);
    msg.setSourceEntity(109U);
    msg.setDestination(7039U);
    msg.setDestinationEntity(87U);
    msg.source_man.assign("GLKOWCFWAZNIOVCMTFQRVTFQDLXZJDLBYDGHKOOGRUVFRTMONEUNYHBGRNBHKQSBPTGWKUROEXZUCXTVK");
    msg.dest_man.assign("OICTHJVWOYXXBPUISDHQGOUOEYRWBVMDRQXOAPAPXHMCAHIUUBNGCKVLGEFUBZYFOMDESWUJGPPDTQNQBZQMVIXZFZPLJKFDGSQHEPKFXTQDAEVWHAOF");
    msg.conditions.assign("YHHZLTMNMQRTDFDZPHZEBNRDGYFOUSEWTPGCYAAUWXCIBIZHCHEVGIJTMPKNKRXYWDKNEQMKROVNEEC");

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
    msg.setTimeStamp(0.549216025092);
    msg.setSource(12521U);
    msg.setSourceEntity(224U);
    msg.setDestination(12212U);
    msg.setDestinationEntity(73U);
    msg.command = 151U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BDUKMCNMJWSCHLOFXTQMCCPNOHTWXLUHLEZQKPOWWHTFGFVJKGPTJQULMGKVDRRRYDMGJYESGFYADYBOZCFHQJQNBZEPKKFIZVZTSHCYIRBIKPKVLGZFO");
    tmp_msg_0.description.assign("NCGSIUDIQYFQJYTQNZWBRBWAZCMHMVLXVMCLLUWSVLISZNNALHPJAVGOBTJPURTXFCETIFBXIGKBUCUHRTVHEMGMMQGEEZQEEOWZVBOGMVRYPRUCRQPLYTYHYFSXSUQTAJJGXTKNFKAIYDSWKZYIEODZRFJKVYXFWEQWOQSVLOIOPJWLFMXUHNDJKTKDFCCDIREALXSRDCPHKPN");
    tmp_msg_0.vnamespace.assign("FHGRTYBWMANWKUOGSMTNUVBYMPZOUDTIXEZQAZ");
    tmp_msg_0.start_man_id.assign("AOCSGFANAZKYIFWZTMPTADNRYQARAWMVBGVHMAXVXELWDCOPRBEIUUUQBUNECEPUMAHTQGZFBJTDJZMHRBQNSJBKYRMZJTYVNKISSGWPKILTYTBYLUOGFYMGURSTVWKGYPEKIQPIOTXLFHFYPD");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("BURZYNCHXGWWGVXZLW");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0765654618481;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.73227512449;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.266693001731;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 99U;
    tmp_tmp_tmp_msg_0_0_0.duration = 45492U;
    tmp_tmp_tmp_msg_0_0_0.sys_a = 32389U;
    tmp_tmp_tmp_msg_0_0_0.sys_b = 17599U;
    tmp_tmp_tmp_msg_0_0_0.move_threshold = 0.495162316218;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::LeakSimulation tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.op = 245U;
    tmp_tmp_tmp_msg_0_0_1.entities.assign("OHNDPJDMWZFYHDHKQHPJDRXUQHFQADATGMEDLUZXWPYKNFGNUXQBNOJRERSCPC");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.lat = 0.496086677581;
    tmp_tmp_msg_0_1.lon = 0.20806112846;
    tmp_tmp_msg_0_1.z = 0.456187188383;
    tmp_tmp_msg_0_1.z_units = 21U;
    tmp_tmp_msg_0_1.speed = 0.91684567182;
    tmp_tmp_msg_0_1.speed_units = 41U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.x = 0.198079050547;
    tmp_tmp_tmp_msg_0_1_0.y = 0.315764767033;
    tmp_tmp_tmp_msg_0_1_0.z = 0.179170221573;
    tmp_tmp_tmp_msg_0_1_0.t = 0.983620770863;
    tmp_tmp_msg_0_1.points.push_back(tmp_tmp_tmp_msg_0_1_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.vid = 52091U;
    tmp_tmp_tmp_msg_0_1_1.off_x = 0.110161286335;
    tmp_tmp_tmp_msg_0_1_1.off_y = 0.210793609211;
    tmp_tmp_tmp_msg_0_1_1.off_z = 0.589372269844;
    tmp_tmp_msg_0_1.participants.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_tmp_msg_0_1.start_time = 0.500626096205;
    tmp_tmp_msg_0_1.custom.assign("QNMZNZTMLXSJSXXUOANPKKUBRQNAPQLIDCXEWPHIXTNERRGPYMZQMSKZYZBWVZFDRDBASPMWBQVUKGXVWCLTAIB");
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
    msg.setTimeStamp(0.383892537324);
    msg.setSource(15568U);
    msg.setSourceEntity(198U);
    msg.setDestination(2544U);
    msg.setDestinationEntity(229U);
    msg.command = 114U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("STPHQRKXMANUHKEOTSGEUIOQZWBUKPYQPAHNQBILQSVYLPEMLWCQAVTLCUUXBFSNFUYJKHSYZWVEQBCMVTJGDAKPGF");
    tmp_msg_0.description.assign("OWVQAUZUQMBZGNAKQRMLGPUTMRXXRFTMKVZTFKRNXDHUMXNWOSLMSVLPMPPKTICBVKTICNSRYBHCYDZWNBPZZQCQEACUUAHEGPWSOXJOEEBRYZMZWAGGQJKLNCBOWZSYWUJYTIHBDDJOUHFNAQDTMFGGGGJLCELIYYIYHDSSIIURSTAWNXWRXECKHXORDDFEAHPORJPGZJMKEC");
    tmp_msg_0.vnamespace.assign("HNZMERCVDPGVHXQTNNGLJOAOYKEOGFFRWHXKVWSPJJEFWEPYRDAOFBZAMZUOKEQWKNMQLRNROIFCJBVFIXXLMSHZVEUYMHTNXGXKANBCMDFWFAINEIXIPSOAQIUVHQCUZEWDWGCSCIWXJWSUMLHSIQRBZLCZKQGXIUQKEGBTTJUMDBAJRPRNPTTADHYPDSDMYNYLCOAKFWPSJMUOGYCJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IELQVROXFDWDIYGNLZHFSZD");
    tmp_tmp_msg_0_0.value.assign("HCXVXYIZMOJEEZKNSYLTJJTPBWAMTKOJTRLJSLMDTYILPSPTOODXQIJNLFSPOQZSCAGWUMFDACUFSNKAURNGOYVEOOJQVX");
    tmp_tmp_msg_0_0.type = 168U;
    tmp_tmp_msg_0_0.access = 102U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("BNCTSQJAUVBMCBPIJLGWNNTHWPVOIUGFQKPONOXZRHSVZKRENVWBKTPVOQLHHCHNDGPFGIFXJYSWDITKDXPUDXCZULJNMZUODWTZY");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("QDHUPBLDQMWTNYNXXHCOUOCYFOBOSXNGKDJRLAACTGZGEGZVMGAYDCIRSHLLPXHF");
    IMC::StationKeepingExtended tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.713352649284;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.418999484659;
    tmp_tmp_tmp_msg_0_1_0.z = 0.573258284315;
    tmp_tmp_tmp_msg_0_1_0.z_units = 213U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.950513741007;
    tmp_tmp_tmp_msg_0_1_0.duration = 47905U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.653720517176;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 139U;
    tmp_tmp_tmp_msg_0_1_0.popup_period = 21901U;
    tmp_tmp_tmp_msg_0_1_0.popup_duration = 65352U;
    tmp_tmp_tmp_msg_0_1_0.flags = 115U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("BAOLXTQNJVOJAJYEFHAWOUMNDXLQFBIDCGLMFANWPEJOWITIQKDLYVUBJRTQGBENDEZTOEYJZBXLYCZQOKPRBFHICZZPZZKLIDWPUPTJGIORXDCDHHXYVVLYSMONGMRBRMWTQFVPEGOUNJDSQTFQVSZUYYHVYKXFMKWXQFTFACSCWPPCWGKAORXXJMHKKASHLRUJWBHUGSWGLUHZSICFETSKZIRICRAVLVAMMV");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Calibration tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.duration = 55065U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::StationKeeping tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.398685385558;
    tmp_tmp_msg_0_2.lon = 0.929474436536;
    tmp_tmp_msg_0_2.z = 0.635774230283;
    tmp_tmp_msg_0_2.z_units = 213U;
    tmp_tmp_msg_0_2.radius = 0.919419789158;
    tmp_tmp_msg_0_2.duration = 10447U;
    tmp_tmp_msg_0_2.speed = 0.892362270222;
    tmp_tmp_msg_0_2.speed_units = 89U;
    tmp_tmp_msg_0_2.popup_period = 7744U;
    tmp_tmp_msg_0_2.popup_duration = 28437U;
    tmp_tmp_msg_0_2.flags = 80U;
    tmp_tmp_msg_0_2.custom.assign("DFGYIQAONPSSXAACDWFIRCNJBZYEEUTFAHVPGULNJSTOYQKMTMRH");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::DesiredZ tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.956525016616;
    tmp_tmp_msg_0_3.z_units = 31U;
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
    msg.setTimeStamp(0.588497923071);
    msg.setSource(57833U);
    msg.setSourceEntity(44U);
    msg.setDestination(44664U);
    msg.setDestinationEntity(221U);
    msg.command = 99U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YOJMEYTZLYJNCEIDDRNHEPOXMQGUODKHAVJBSVYFRZBSZTEKBAFQSAAQNSGPXZJABJNFKFRKLPVIOCTTKXNKUGYGLMUPSWKFLCIEWPHRIGDPSUZYNZMWUQOGVNWFKFTAHPFXWYZATJFCTHGGBTLXMNWOCQUUHQIZHAVACJXUCOTEBIPPSZHXVLRUHCUVBLIOGM");
    tmp_msg_0.description.assign("RDFOGRQOAIDIVRZDMZHGVCRFNTUNVRPODARGBDFQXZOPTXLUCYUPNUCYHBZHLUZLCOGQQXIDUSJDTYRWZNWTLIKCBFEKWCVEBELLOJAHJCPGTJQSVJHIFWGTUTFQKFZEAA");
    tmp_msg_0.vnamespace.assign("CGANVLRFXZUEGIBDVYWPVBJQFCMQBEGLOOFUTVPTIWBUGFZXLWEHDRFMRZWDLLKECJPGPOPJPFWMYSVUYMRTISSHYDXEZHAESTHAWIS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YLOYKDXASJLNLHVIWESXEMBNBFVYISDXSPZACLQPLAXBFAQOOQGBQQXKDXFQVRZEURBPVPWRGVUINKFIKJSHQOEMJGUEICGJLZKNRTKYMTURNHIHOFJTO");
    tmp_tmp_msg_0_0.value.assign("FCRRHRJAYLBTRSBPTGXNXZFKJHECINEAQPZSATBVAELUDOMOYRXOGUDJEOFAFNEXKUZPECHTPKNTFVU");
    tmp_tmp_msg_0_0.type = 114U;
    tmp_tmp_msg_0_0.access = 77U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JCCTLOUEXSFXTAIAJMZMVPAJJHGUFIIDHMAUBYZEWWOKPNEBUTXLVRLIWDRUEKANGMDDXPZGSTSMWGHFTKURGJXEYCQKMNVFWONFQHJRYLNNIHSKLPTRNKOCLVOHZBZYXIZKQDDVDZBIPZJBXZGMYYFHSECCUQBUWRVQINYFDB");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("CDMYGHYOIVRMLTSIHIIPMWYOHAYUBTJXIYQIGBRAPBFSVEEQCBKHEAVDTSIRSOFWJSVSUQSYZXEZLRGUIODGGMBJNNZBKPLNOAJE");
    tmp_tmp_msg_0_1.dest_man.assign("LIAEVYXVEFCMCDDBOQMGMRMUDZZHFAHWFZFEQSBBTTMLWQLPTXMPZQKSMJDQQJHCJGPBGSUPOJSRDZWKRTSOAAXOTYDOQTWHFSTTKVZXNCIZBKVJSMZDYZLLKVNFSBNIOOWJRWHJJMB");
    tmp_tmp_msg_0_1.conditions.assign("HPMWZDXOXVVXMCOBUGMWCEKRALAZJPKENRTWGZCQFDQGVURBJVHNLYYEMWTLZHVUPNWTNBMPIJSGEQOXRZWVFUYYIDXJLJYOAHCFJMIPBSHUEVKXXDINTWVUGJNDVDTKYRIHNMFQPSQPFYACHHOHCOKSASKFTJCISQSMZXYCJWSKYGFOQRBRBEQXPMIULPAIZLDLMZLBFSKIDEVRWLUZOEOHCAPEOBQQTAGBLJWYTNGUXR");
    IMC::SetPWM tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.id = 31U;
    tmp_tmp_tmp_msg_0_1_0.period = 4009896068U;
    tmp_tmp_tmp_msg_0_1_0.duty_cycle = 3805104599U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::AbsoluteWind tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.dir = 0.930251505863;
    tmp_tmp_msg_0_2.speed = 0.752605675841;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::Rows tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.timeout = 36053U;
    tmp_tmp_msg_0_3.lat = 0.698176408175;
    tmp_tmp_msg_0_3.lon = 0.720412675544;
    tmp_tmp_msg_0_3.z = 0.287359015776;
    tmp_tmp_msg_0_3.z_units = 64U;
    tmp_tmp_msg_0_3.speed = 0.185737256486;
    tmp_tmp_msg_0_3.speed_units = 204U;
    tmp_tmp_msg_0_3.bearing = 0.099648697556;
    tmp_tmp_msg_0_3.cross_angle = 0.236615766101;
    tmp_tmp_msg_0_3.width = 0.096134974138;
    tmp_tmp_msg_0_3.length = 0.512055559406;
    tmp_tmp_msg_0_3.hstep = 0.892435476183;
    tmp_tmp_msg_0_3.coff = 46U;
    tmp_tmp_msg_0_3.alternation = 254U;
    tmp_tmp_msg_0_3.flags = 97U;
    tmp_tmp_msg_0_3.custom.assign("EUUBNWIMQDWNVSEQVKNNLDFAYIPBQAOPUUOUBKRMAPOTJCIVZAACMFWXXRZLJYJMRJMFGWTBJBWAMEOUDCVSSETROTGOKLAYIRHTLBC");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.369599341574);
    msg.setSource(51892U);
    msg.setSourceEntity(83U);
    msg.setDestination(48058U);
    msg.setDestinationEntity(155U);
    msg.state = 225U;
    msg.plan_id.assign("YNSEVLJRNHGERNOFUYAYSXSKDCVLOEWHPLZMPYEWLNGDPXIKPSQLFZABQNRDWDKAYUAMJUNWHDIFHPZKBKHWRXKIMQECHAFIWLJKGIVUBUJIBCOTLXVRBMYFMAFRSXCGFFTUZGLBFRVZUAODJGEHHTICNFQBTOA");
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
    msg.setTimeStamp(0.679043698338);
    msg.setSource(29281U);
    msg.setSourceEntity(80U);
    msg.setDestination(7253U);
    msg.setDestinationEntity(42U);
    msg.state = 46U;
    msg.plan_id.assign("IXNQMLQVQYSVASIKDYIRFBEZIDJJMWBLEVGZDUXHDBZSCAPSJUQRELKGWFHBAZEGKFWAQHRULTOMNPGYLKXLJTOITLTHIPJIVKJNTZQNYDFCANQCDNELVOGQFPHBSPCFYRIWDMZCJWGUBYQXFEQGFRSRNCHMPTUVXNKHSRUEAVKRBTMCXTMBHROOSAUHZADJMSMWDEGOZPUHUKWUNPYLZVKYIOTJOVXAWOXFXVCGYGW");
    msg.comm_level = 182U;

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
    msg.setTimeStamp(0.344477655413);
    msg.setSource(5139U);
    msg.setSourceEntity(208U);
    msg.setDestination(32075U);
    msg.setDestinationEntity(241U);
    msg.state = 251U;
    msg.plan_id.assign("FGKKIZHTCZIBFNLJTVVBPTFSDQECAOAXOUOKGFJSUKBDIDJRHGQRGQVPJAWILETSVXWQSDJGFONQ");
    msg.comm_level = 24U;

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
    msg.setTimeStamp(0.081170524998);
    msg.setSource(59442U);
    msg.setSourceEntity(238U);
    msg.setDestination(12592U);
    msg.setDestinationEntity(40U);
    msg.type = 181U;
    msg.op = 237U;
    msg.request_id = 13029U;
    msg.plan_id.assign("JHAZKYZLXNMHWMMLSCKCHMRVJJMTUCOPJPUQZNPSJRBCRFFSYGKUKYEPSIOUHDZCIWBGWVHOMILGQNIDUBATRRIUYGLEJBZNYQQVILHZITOUJTSSYSREAVAEWVTFGDRTCWXZXKEHLFPYHDXAGDFTEWFQJSDYOZAUQGWVFASHMBRKOTNDQCBTBLQVDSVCEGMLAGPKNNVFTWBQPXXFMLOJCQNUCXXUAVKMDEIPFYWKEXYNOIBNLPPOORH");
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 18236U;
    tmp_msg_0.type = 130U;
    tmp_msg_0.utc_year = 25014U;
    tmp_msg_0.utc_month = 227U;
    tmp_msg_0.utc_day = 194U;
    tmp_msg_0.utc_time = 0.32107642033;
    tmp_msg_0.lat = 0.67503399102;
    tmp_msg_0.lon = 0.413411375893;
    tmp_msg_0.height = 0.0375141476521;
    tmp_msg_0.satellites = 38U;
    tmp_msg_0.cog = 0.707504044984;
    tmp_msg_0.sog = 0.82904920924;
    tmp_msg_0.hdop = 0.0166629123721;
    tmp_msg_0.vdop = 0.812803091724;
    tmp_msg_0.hacc = 0.350331459134;
    tmp_msg_0.vacc = 0.0650640324381;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XAROPNNGRKSCXNNRCYTKMPZVROULDDCBEBFEJQSBFHDEPXRGIUWXFTMHLXGBOVDQKAJOREUGMYWSWKOEIVBHQYFLVAXOBEKVMBHAMWCPKLZJDXRMNJMNGQXDPCIHPWVJQQUYGCJVFUERPTZMGSGJFUVUTVIIFAAXOHYWGYQHVGIXLBIELQEHPOBUOZPZJLENRCSQPNSNCILSOIDYAKIUKTA");

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
    msg.setTimeStamp(0.325011670589);
    msg.setSource(48879U);
    msg.setSourceEntity(136U);
    msg.setDestination(13199U);
    msg.setDestinationEntity(6U);
    msg.type = 100U;
    msg.op = 209U;
    msg.request_id = 58769U;
    msg.plan_id.assign("UMHQOLTIQRAEOJSJZSGDPTLNTQGANCDUADVUBQIGMSRHE");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 62197U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OTOTNYQDQCQLSIPCZDKVRYFSDQRTMIBCXZUTAAAYFHAZJCKBGURLHEECNAFWDLIADFYOBQFLVYUNGEMHNWCJBMXVDVFUUEZLTWYUGGMBXFJIJIUPYCQQJDSAWXYMJTDXWHMOWNPXKSWHBIZZPEDT");

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
    msg.setTimeStamp(0.469624142578);
    msg.setSource(54273U);
    msg.setSourceEntity(34U);
    msg.setDestination(1816U);
    msg.setDestinationEntity(57U);
    msg.type = 127U;
    msg.op = 58U;
    msg.request_id = 33075U;
    msg.plan_id.assign("IZBNSHVQQKJAAQTSOPHJOZIXCGWMHIUVLXOHHIVXUYJAVUZNPAEKKOOJGTCMMTAPYVDOYQXRMWDFDVDEIGSDCNWGGIWCPBMFKZRATJQNRUFMTUKNABLET");
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 17590U;
    tmp_msg_0.x = 0.0842253610467;
    tmp_msg_0.y = 0.556559341029;
    tmp_msg_0.z = 0.807562550668;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FQDYTLIJZZNQPKNTERJWFRHLCSHWFXBBHVBEFDYCRPIRNQMRXBBQVTOSQITGMPBXVQJFZTDTAMHYGYFWAOEIHLSGTKXIDMUMVDEHLNEZFPGCZMLWKGPJXYFSDVUNWR");

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
    msg.setTimeStamp(0.36649855431);
    msg.setSource(55493U);
    msg.setSourceEntity(24U);
    msg.setDestination(15904U);
    msg.setDestinationEntity(114U);
    msg.plan_count = 38310U;
    msg.plan_size = 2142323877U;
    msg.change_time = 0.708206999882;
    msg.change_sid = 37748U;
    msg.change_sname.assign("UQVTWXNEKVSEAKXBYGFLPDI");
    const char tmp_msg_0[] = {-51, 110, 47, -77, -118, -51, 53, 3, -7, -12, -46, -57, -16, -79, -64, 46, 81, 61, -45, 39, 119, 36, 20, 123, -66, 44, -121, -106, 89, 88, -39, -2, 40, -47, 94, 102, 75, -42, 73, -101, -46, -99, -112, -64, -96, 108, 73, -25, 116, 98, -112, -83, 117, -74, -112, 54, -69, -68, 0, 47, -13, 126, 119, -104, 32, 106, -17, -102, 49, 89, 72, 16, 76, 0, 75, -81, -105, -56, -113, -10, -82, -94, 123, -25, 12, -86, -122, 89, -31, 64, 23, -91, 84, -126, 120, -107, 114, -32, -43, 83, 43, 88, 62, -25, -24, 77, -114, -70, -3, -62, 84, 15, -46, -69, 126, -81, 118, -44, 102, 1, -12, 43, -58, -17, -106, -8, -105, -31, 33, 120, 25, -70, -47, 81, 55, -96, 73, -78, -7, -120, -85, 54, -67, 25, -61, 3, -76, -128, 61, 113, 80, 92, -30, 56, -100, -17, 16, -69, 45, 83, -40, 57, -45, -56, 87, -85, 123, -70, 101, 7, -102, -121, -27, 111, -53, -11, -63, 112, -30, -72, -11, -126, -61, -97, -83, 38, -72, 46, -29, -108, -35, -57, -27, -25, 94, -89, -89, -84, 25, -120, -48, -87, -25, 7, 117, -25, 20, 105, 7, 89, 38, 95, 28, 126, -28, -128, 62, 74, -6};
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
    msg.setTimeStamp(0.436595258281);
    msg.setSource(26352U);
    msg.setSourceEntity(185U);
    msg.setDestination(49454U);
    msg.setDestinationEntity(93U);
    msg.plan_count = 38495U;
    msg.plan_size = 3231180013U;
    msg.change_time = 0.955617105116;
    msg.change_sid = 50446U;
    msg.change_sname.assign("LYNDXSPDKEGCBLJSHYSMGXKCIZ");
    const char tmp_msg_0[] = {-81, 48, 79, -66, -94, -54, 124, 9, -14, 74, -92, 12, -88, 41, -3, 65, -34, 97, 55, -78, -26, -44, -103, -56, -75, -110, -53, -113, 82, -38, -81, -78, -78, -95, -93, 125, 42, 40, 122, 10, -2, 66, -82, -12, 105, -40, -5, 28, -36, -68, 13, 84, 89, -121, 24, -58, -104, -97, -2, 103, 29, -122, 51, 101, -70, -79, 32, 111, -17, 39, 64, -19, 51, -70, 76, 14, 44, 121, 31, -60, 99, 12, 105, -73, 9, 25, -49, -103, 124, -39, -4, -4, 56, 80, 84, 84, -110, 37, -102, 2, -8, -117, 22, 3, 94, -79, 21, 74, 123, -127, 64, -73, 79, -8, -44, -49, 26, -4, 56, 26, 44, -5, -33, -39, -125, -114, -86, 65, -32, -88, 34, 79, 120, -92, -62, -38, -45, -117, 22, 39, 5, 37, 45, -119, -96, 88, 69, 69, 72, -30, -127, 24, -67, -123, 10, -87, 73, -66, 112, -123, 25, -65, -53, -19, 10, -17, 17, -3, -117, 119, -77, 74, 78, -29, 84, -84, -21, 37, -112, 17, -51, 37, 81, -68, 36, 24, 125, 91, 14, 22, 9, -13, 71, -5, 122, 43, -64, -106, -74, 63};
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
    msg.setTimeStamp(0.311573762246);
    msg.setSource(57975U);
    msg.setSourceEntity(28U);
    msg.setDestination(15692U);
    msg.setDestinationEntity(54U);
    msg.plan_count = 10777U;
    msg.plan_size = 1749932363U;
    msg.change_time = 0.0212725162482;
    msg.change_sid = 29008U;
    msg.change_sname.assign("YEKTHTODSOOWVLNZHPFNALRXPTEQKFT");
    const char tmp_msg_0[] = {-85, 108, 38, 64, 66, -55, -51, -120, -79, -73, 61, 91, -32, -88, 97, 98, -66, 10, -25, 38, 121, -50, 31, -77, -33, 77, 56, 47, 68, -31, -58, -35, 2, 41, -22, 64, -44, -67, -40, 110, 55, -36, 32, 52, 18, 31, -33, -28, -11, 88, 96, -42, 123, 35, 67, 69, -31, -66, -6, 20, -12, 98, 1, 84, 91, -97, 80, -58, 70, -79, 37, 44, -98, -100, -102, -35, -11, -67, -29, -120, 3, -114, -74, 46, 126, 121, -91, -32, 122, -85, -45, 29, 37, 48, 125, -81, -72, -58, -104, 118, -57, 36, 25, -106, 115, 115, -113, 34, -3, -91, 30, -74, 38};
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
    msg.setTimeStamp(0.707047324642);
    msg.setSource(2149U);
    msg.setSourceEntity(65U);
    msg.setDestination(135U);
    msg.setDestinationEntity(40U);
    msg.plan_id.assign("EMDSWBFLBRYVRSRDQXYMPVESFJJEONLSPWCVELFGMDVAMBCZQFSSIHFJYZYLOXTZOYFUHDAJAKBQUMTQXZEHZQRXXFZGCDPLJMIVWHGCDIMPEEOGXCAAFRMGVJJKWGCPBSXQXYUSWJOKREPAEBLPFSNUUN");
    msg.plan_size = 3089U;
    msg.change_time = 0.866593867099;
    msg.change_sid = 51302U;
    msg.change_sname.assign("NBGEGMLNLRBGLAROJYBGVVBLYFHRCFJXHEZFNRSMQSTXUIUIFWDXOYUVMBCXVMYIWFUZJOPSJNTQHSLZQCHJVDNTOWRZSTPFQQFNJJAMVOTHGYAVGNVTFAYHHRTKKUQPILHETGZDKOWLGPDVLAGODIHIPMHG");
    const char tmp_msg_0[] = {-74, -76, 88, 85, 49, 50, 56, -100, -105, 4, -51, 67, -56, -34, 100, 66, -7, -8, 90, 29, -7, -51, 19, 20, -94, 7, 77, 12, -67, -71, -84, -46, 86, 123, 41, 32, -114, -75, -31, -22, 77, 50, 19, -83, 22, 97, -58, 26, 44, -55, 100, -116, -64, 27, -90, -64, -1, -47, 104, 114, 61, -100, -127, -15, -113, 33, 45, -62, -112, -71, 95, 38, 31, 35, 110, 89, 68, -73, 88, -84, -34, 82, -21, -70, 24, 45, 121, 2, -74, -21, -36, -117, -34, 40, 117, -112, 95, -23, -66, 65, 40, -128, -78, 111, 18, 115, -50, 95, -99, 91, -91, -1, 64, -100, -43, 0, -28, -55, -118, -15, -102, -87, 43, 65, 11, -86, 70, -105, -67, 43, 40, -116, 113, 24, -22, 30, 60, 38, 20, 9, 98, 16, -50, 20, -19, 86, -83, 44, -99, -90, 18, -37, -38, -3, 3, 25, -43, -125, 23, 50, 1, 68, 17, 48, -15, -97, -66, 85, 92, -15, 78, 44, 1, 26, -28, -104, -124, 44, -13, 21, -98, 74, -124, -101, 15, -118, 36, -55, -110, -111, 73, -32, 60, 11, -65, 55, -102, -98, -37, -37, -67, -117, -116, -34, 110, 103, 52, -41};
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
    msg.setTimeStamp(0.568860712695);
    msg.setSource(58960U);
    msg.setSourceEntity(145U);
    msg.setDestination(33646U);
    msg.setDestinationEntity(50U);
    msg.plan_id.assign("PHTJDMCOUBWCIAEAGVCZOLUYBWNMTSRXCSOOGQZXKCKUMSCBDRUADOICYRUAZMPSYWNPFFEXAIJLUPYLWZYEBRBJHKNMBCIZOHBGFHODAZWVMYQSBGPVFPLGEFCWVVNGTHEDGMJKXHOEKSRZXFZRVTDRNQHDXIWEUULKHFCHQQPGMBNASNLKPOQIJNXTETLMKHPTARQDUVYALGJTWRUISSLDWJGQQELKYANNXVXXBDFZIJQESY");
    msg.plan_size = 18923U;
    msg.change_time = 0.679235266074;
    msg.change_sid = 65340U;
    msg.change_sname.assign("OFSVROASFWAFJ");
    const char tmp_msg_0[] = {1, -95, 100, -126, -128, -83, -31, 113, -91, -43};
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
    msg.setTimeStamp(0.890800798036);
    msg.setSource(15904U);
    msg.setSourceEntity(173U);
    msg.setDestination(64937U);
    msg.setDestinationEntity(190U);
    msg.plan_id.assign("EFSMHBUOGMKAWRFGUUDEBEXLJLFRITDZFVRPWYRJXYQCWZODLYQUCPEJNPSTNHKDOBAGCXABJOJEKFCBNEXPCZQMHIMPGVYSZILNWDNQFIUBAVIQFDJGYCYPMBRXWUHQTERVLRNOOGTSZVQJDHJNOXADKSZVKAIXEAKCUSSZPPHJUML");
    msg.plan_size = 3612U;
    msg.change_time = 0.776451791884;
    msg.change_sid = 38156U;
    msg.change_sname.assign("YXMFGIWOCORYWXBOOPXAPBFCYDF");
    const char tmp_msg_0[] = {54, -81, -73, -86, -41, -93, -89, -128, 102, 62, 63, -33, -3, 21, -101, 115, 88, -41, 120, 26, 70, -103, 7, 23, 126, -63, -38, -90, 93, -45, -49, 110, 57, 62, 80, -115, 44, -108, 81, -88, 17, -11, 115, -70, -92, 96, 28, 28, 31, 41, 85, 73, -30, -16, 103, -9, 113, 43, 35, -26, 71, -94, -78, 14, -92, 53, -14, 125, -27, 40, -46, -52, 18, 48, 96, -65, -101, -81, 62, 93, 31, 5, -120, -52, 44, 123, 61, -57, 115, -121, -65, 5, -25, -120, -102, -59, 115, -71, 21, 31, -46};
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
    msg.setTimeStamp(0.596526309918);
    msg.setSource(41451U);
    msg.setSourceEntity(120U);
    msg.setDestination(32669U);
    msg.setDestinationEntity(240U);
    msg.type = 227U;
    msg.op = 84U;
    msg.request_id = 52906U;
    msg.plan_id.assign("JBFKAWYHUELTKNMZRCPDDSMERCFFEEWTMADDJOFTGMRHWQNHCSEFXWMCVPYNTGZBQKGHAPGZJNIALIQWKZDUKIXFBKSKAPOKNCLCHOAIENVUGJKUZXLEBEVSNWGJOEPSYZQCOORUHBVZSUYIVFNMQTNQWPIXAAURDJSZMFIAXRXYGKBIGXFUIBLPSTJNMYVSSWDMTCPXPQJZJHZYRCCHRROLHFTGOLMGADHWBTVVPVTYQOLVLEDUOBBWRYUI");
    msg.flags = 27768U;
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("TVEAPTYZVQMDOVJVXT");
    tmp_msg_0.message_id = 38080U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EXZBEGAOSHXNOUJDSRRRNCBZCRIDWEBXNQQTIAJBFILGRQWZBLOXFHIENUNPAMZUQMCVKMVLLHRCSXYKSVWFPAGLBFBQYUPTOOVFHSDDOSMAZWWVUETLZMNXQHNIAPLTCBN");

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
    msg.setTimeStamp(0.483519141972);
    msg.setSource(53743U);
    msg.setSourceEntity(101U);
    msg.setDestination(50769U);
    msg.setDestinationEntity(107U);
    msg.type = 227U;
    msg.op = 136U;
    msg.request_id = 26218U;
    msg.plan_id.assign("JTTIXUTQHOGCPEJHYHRTKBMMNCADZSTSXSRUIHCPNMVMMGCLQDSSECPRGJPGHXVKYBUTZBGBEMGQLKZANSPFDRWIWCTCVMGUWBKJNCDDLPBAYBTEYAIJFSAEIXJWUIZWYTYXJDOKLVVZVREFVUNIJKMRVETLVHOCSRFSWZAEPQXOFWPZNIUQBOZOXOHERKHYF");
    msg.flags = 32722U;
    IMC::PeekManeuver tmp_msg_0;
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("UYDMNSLSFGTQTSCZIOFGRKKWILOPAYWBLKRHJVAAISPXICXVTTVIWWTKLFHWCWYEWBDBYKRJXEICVYNEE");
    IMC::FollowReference tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.control_src = 59821U;
    tmp_tmp_tmp_msg_0_0_0.control_ent = 213U;
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.688088566059;
    tmp_tmp_tmp_msg_0_0_0.loiter_radius = 0.927754665593;
    tmp_tmp_tmp_msg_0_0_0.altitude_interval = 0.955051088641;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.man.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MJUQXDDWJACDHYKVKIQKDQCZHCZYADIJNSRGTPTTINNKSVMPSLTHFFOUMCBZDULPZHYQCQFOIUACFGVIAXAKMOUOIOLRGUGLPQNMSGIDZXTLSRQOTVKIZRHJHFYULBDZPGSENIMQBCPFOYNSNEGUESSWXXOAHOYOQTYHWRBBJWYVKHJWRATBVPVDPIQYSAM");

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
    msg.setTimeStamp(0.763585205178);
    msg.setSource(7622U);
    msg.setSourceEntity(190U);
    msg.setDestination(53690U);
    msg.setDestinationEntity(214U);
    msg.type = 7U;
    msg.op = 103U;
    msg.request_id = 39686U;
    msg.plan_id.assign("YJRADOXRHKXTEZHKDJDWCDOATDEAQNSPOTEINPGRAIAFELRTQUVYAFHUYQSFUXKGTWIPFUOHBXWNPDUNJSVJXIYZIGWMURVOCFWMQQTTQBGJCPGIPUYYXHZGBBWRLAVWIMVOZFTZQDPFOB");
    msg.flags = 39136U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 8935U;
    tmp_msg_0.lat = 0.483657407279;
    tmp_msg_0.lon = 0.385456352117;
    tmp_msg_0.z = 0.387238178063;
    tmp_msg_0.z_units = 253U;
    tmp_msg_0.speed = 0.449246625188;
    tmp_msg_0.speed_units = 234U;
    tmp_msg_0.bearing = 0.671302045023;
    tmp_msg_0.cross_angle = 0.319544789825;
    tmp_msg_0.width = 0.981049499911;
    tmp_msg_0.length = 0.883184122232;
    tmp_msg_0.hstep = 0.6619699875;
    tmp_msg_0.coff = 183U;
    tmp_msg_0.alternation = 98U;
    tmp_msg_0.flags = 242U;
    tmp_msg_0.custom.assign("BWKAQMRJJKTWSRISTFXMRBNBSVGWLCYIIITTGPDDHTHGFBFRXQZDDWELRAROFPEPHYEGYHAUICPZOMQAZNEHQULAPNNOVNSZBPG");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZRXBQVBJFTZUDHXBAEIJBAWWYMPMHYGAPADFNZVVUEELQKCONEKTCCVUXSKXMNKNRVANNQBRMGSVPCVNMLYURPQZCHKPLKOASWSPMUWQKHJICGCFJZFO");

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
    msg.setTimeStamp(0.31091424321);
    msg.setSource(12141U);
    msg.setSourceEntity(134U);
    msg.setDestination(11982U);
    msg.setDestinationEntity(96U);
    msg.state = 201U;
    msg.plan_id.assign("FXQDSTVJYIAKBHNLMXKGLDOEETPBLJFDMLRWQEPMODBNMCIWJJUNGEHSJFUTBCCAVTHJILIZNWHSGYYXMGKPZCUZRRLOPPVMNKQHUSZAVQTKXODXSXROMPMSFYEZBS");
    msg.plan_eta = -1202846255;
    msg.plan_progress = 0.683979636133;
    msg.man_id.assign("CMLFAQYFGZSNWUTPUYGQKNVWQDULYGDBUQPHJBKCZHCP");
    msg.man_type = 59588U;
    msg.man_eta = -1637792737;
    msg.last_outcome = 137U;

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
    msg.setTimeStamp(0.673534733825);
    msg.setSource(52386U);
    msg.setSourceEntity(102U);
    msg.setDestination(45871U);
    msg.setDestinationEntity(191U);
    msg.state = 218U;
    msg.plan_id.assign("ZCIGLNQILUYSANVJNLFPJVZWYRANOOEKBSSUHMQYPBHATAMCBFZDPIDROAQGOFPZNTSXOHFIDAY");
    msg.plan_eta = 501518546;
    msg.plan_progress = 0.837751746547;
    msg.man_id.assign("BESZLHZXSZBQEXYSYAOEHCBSGCDKBJKPIDUNHZOAPOFGPTXXCGYFDACOIQARMDKUIXPWOWJTDDFJEKMCAYPGRSBUVNDLKAIWCLPASOBTNJAHGNSRBDQEYXVUREHKGYNHMNORVUJJPGUWPVMIAZHIRTMBWWUKNTQQQOVMQLVSLKMCXDPTLVAJMMBLRTIEFWFIZDXSOYUWQLGVRMFRJHVSPHXFVNTCFOWIXTCGJYFQEZZYUFURGKKTZN");
    msg.man_type = 9990U;
    msg.man_eta = -965372894;
    msg.last_outcome = 53U;

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
    msg.setTimeStamp(0.0910196545276);
    msg.setSource(19289U);
    msg.setSourceEntity(37U);
    msg.setDestination(30509U);
    msg.setDestinationEntity(174U);
    msg.state = 244U;
    msg.plan_id.assign("LTDUKJWSEKXBTF");
    msg.plan_eta = -1704049394;
    msg.plan_progress = 0.978490809411;
    msg.man_id.assign("SOOGNQMKTLUWDTATLSPJXNWPJTAEEQODQSFBBIPNCXCVYRLOKTHMRWFMNYWDMOUNGFDZPPBZPWOBUYEELXRYLRYOIZBJKFHOVKIJVTJTAZMEQXNGVBDXDUJTHYAEVFQHCKCEXSXVUUZLJACCCQYGZLRLNANGXQSBEDRVNDWBFJGZIKHUICGSTY");
    msg.man_type = 63773U;
    msg.man_eta = 1591096972;
    msg.last_outcome = 6U;

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
    msg.setTimeStamp(0.935938988506);
    msg.setSource(57546U);
    msg.setSourceEntity(220U);
    msg.setDestination(2373U);
    msg.setDestinationEntity(118U);
    msg.name.assign("UYFMATKEJZHENPUKS");
    msg.value.assign("AJACRQWFBKSVIPWVXFDLMJ");
    msg.type = 179U;
    msg.access = 231U;

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
    msg.setTimeStamp(0.36897553068);
    msg.setSource(27479U);
    msg.setSourceEntity(11U);
    msg.setDestination(13137U);
    msg.setDestinationEntity(195U);
    msg.name.assign("UUBRZCHKEPBLLOKGFGJAOLWZIGVQFMMSQYCZHAXSPKAWLAQATNKKOPBTXUKVJREVVFSQCIXGJHPERSGGJWDQBDEIODTYMIMOVFJUIPPBFLTZGDUNHWRDLEMCZMSLGOTCQXUWTVSTYUVZPAIDCYSNUXNNLKXRWJMLSVPBIDPZHZSHEICAREEXJUYCHQQOJREBBKDWYFMLGCWZCSYAFXBDWYXROQ");
    msg.value.assign("EPPSAQFYVNKAFLMXMHNGWVCMPUSIVKKDYEJOTIYBDXZONYQNKVXHWWSISPACWDSJZEICHTFFEFMLAHMGCXSZUHJMVIRKUERWUJBCZTFOTXOLTKTEFENQWPUGWCIRYDDRFTUSUUEULZXGXOQGTHRWQKPPQKCNNGBBVMYAGJDGGAOZPXDHHNBJNMCCXQJQSWYMIOHEIZVSJQASZXLBBLTCDFZNKLWIZTYEKMIFPADJBAVRVLYPLGBROOAD");
    msg.type = 77U;
    msg.access = 233U;

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
    msg.setTimeStamp(0.0717212991222);
    msg.setSource(41754U);
    msg.setSourceEntity(231U);
    msg.setDestination(45530U);
    msg.setDestinationEntity(206U);
    msg.name.assign("TADMVNJNPFAEOOXEIR");
    msg.value.assign("XBYSLTHYBKHNUWWXSKEICYQZNJRFYDBALQXFYNVVPHKVIMAMHONDDLTCMQIRZKUPGPSWGJBUFTETAORUWCJQYJBTLTPMXUDQRUZDKAOG");
    msg.type = 73U;
    msg.access = 57U;

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
    msg.setTimeStamp(0.900214438897);
    msg.setSource(30940U);
    msg.setSourceEntity(9U);
    msg.setDestination(23476U);
    msg.setDestinationEntity(25U);
    msg.cmd = 14U;
    msg.op = 225U;
    msg.plan_id.assign("TRMMBWYAWKXSGDMFASGAAAYVOFJDKKJOCQRXSKJWCOZHZFMQPMDQBVKLNNNTHGFDEQXNLHRMOZLVEOURWWPFUMHMQZGIZMCPFMQOUOJEZYCIQTVVIUPUFVLIHNGXZDBTEQBDWPUKBJ");
    msg.params.assign("DHZDPMTUGFKXLRXVIRFIUQRBTXRPMJTUFBUQHEKVAGQHKEDTFAAKAGT");

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
    msg.setTimeStamp(0.51107561332);
    msg.setSource(64219U);
    msg.setSourceEntity(149U);
    msg.setDestination(4296U);
    msg.setDestinationEntity(226U);
    msg.cmd = 131U;
    msg.op = 115U;
    msg.plan_id.assign("CTXDOCIJWNEIBNHMSCRAHTOULJWFRRLFEYXPQEPMBZWOPPHAE");
    msg.params.assign("ZAQVXSCPTVCWQNUKJUAWFXVMZFEADMPQTBXIIYNXCSUMQEJKPAPODZPYIMFGNLPHGOHZEMOXCEHZYZJKSRLYWSPFPWWECSDRCI");

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
    msg.setTimeStamp(0.0469180315132);
    msg.setSource(59901U);
    msg.setSourceEntity(150U);
    msg.setDestination(52468U);
    msg.setDestinationEntity(214U);
    msg.cmd = 40U;
    msg.op = 70U;
    msg.plan_id.assign("CQFPKHQEOQDXZXLOVSJMRUAKSRNGBYWEBHYDGUMQTEXSESCQUMQMNAOGGUQKEIBDLOIOATJBIBATX");
    msg.params.assign("DPBUKYAWPXGTKVTUSGMRHKNLOWBSSBZCVHUIHSYKGRPMVNZIBDAEIQFALCJDRHRTXNQSLNHIQYMSNYXOKZUWUJNMMIMVLWEWBTAFHEWMZAARJCVGYTCGOSPQDTHHEDSBXVJGJEKOVJPEPNMRUOPQDSFJRGLBKPYWHXOTJXXBWVWUFUMHCTKKAOPCIOGAUDFOLELJOZFLNTGEFQZGLSQYMEZNYDQFCRERQPXYCIXDIAVZN");

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
    msg.setTimeStamp(0.478626066272);
    msg.setSource(20105U);
    msg.setSourceEntity(154U);
    msg.setDestination(55978U);
    msg.setDestinationEntity(28U);
    msg.group_name.assign("POEVDWQGERSTAFLVKOVGFDEJEYSIUYAHTBGWYKMZEJKDSXQOFNFZZWUUJUPSCDAOAQJRFPRJZCDSXTIWINTYKPBUHFXLJXLMCNNZCOWQMKUENJELVOSHKWYHTBBGPHMXRXRKZEWGGLTBIZNITYSZDJOCLAIBZVUCQILA");
    msg.op = 105U;
    msg.lat = 0.796268132738;
    msg.lon = 0.894606275372;
    msg.height = 0.783787551244;
    msg.x = 0.960635837692;
    msg.y = 0.764013561952;
    msg.z = 0.326298309398;
    msg.phi = 0.188927244417;
    msg.theta = 0.199704856081;
    msg.psi = 0.483200598118;
    msg.vx = 0.0926133339312;
    msg.vy = 0.022491695209;
    msg.vz = 0.867972646993;
    msg.p = 0.601593940681;
    msg.q = 0.352973875614;
    msg.r = 0.844758900586;
    msg.svx = 0.932876100688;
    msg.svy = 0.318179533116;
    msg.svz = 0.908189739769;

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
    msg.setTimeStamp(0.646986193464);
    msg.setSource(45475U);
    msg.setSourceEntity(132U);
    msg.setDestination(43282U);
    msg.setDestinationEntity(144U);
    msg.group_name.assign("BXMQLKSZHDRKFZEPFNEOYAZYOKGHBCJSNSSATPTALDJPRZSVJJKPBIDHPQFSYSBLLMLXBEGEWTVJNCEVWDCDFMMXTRIHBGUZXOYGIQSYKURNUDXPOPMRDJJSGQHAGXGRR");
    msg.op = 175U;
    msg.lat = 0.46917377356;
    msg.lon = 0.12379906934;
    msg.height = 0.418082508683;
    msg.x = 0.0320104244383;
    msg.y = 0.0619271730778;
    msg.z = 0.892570293397;
    msg.phi = 0.904875307789;
    msg.theta = 0.757021725215;
    msg.psi = 0.585318327152;
    msg.vx = 0.118029183134;
    msg.vy = 0.150179044287;
    msg.vz = 0.932588931477;
    msg.p = 0.0349942661276;
    msg.q = 0.988051124297;
    msg.r = 0.91928722453;
    msg.svx = 0.572775298912;
    msg.svy = 0.952854232961;
    msg.svz = 0.243467416774;

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
    msg.setTimeStamp(0.503021992511);
    msg.setSource(28759U);
    msg.setSourceEntity(126U);
    msg.setDestination(22911U);
    msg.setDestinationEntity(221U);
    msg.group_name.assign("WDVPFRZBJSQJPBOXHANVTFKMZYKSNRFGZQNNPYQFQIIHSAAJRRELXHWIHMQUCAFIPKDBCTI");
    msg.op = 216U;
    msg.lat = 0.398031422045;
    msg.lon = 0.860705381681;
    msg.height = 0.954034943731;
    msg.x = 0.178187262507;
    msg.y = 0.453478739852;
    msg.z = 0.55453519052;
    msg.phi = 0.0568175297378;
    msg.theta = 0.796449678392;
    msg.psi = 0.184598393822;
    msg.vx = 0.514392898243;
    msg.vy = 0.387965546253;
    msg.vz = 0.302571555398;
    msg.p = 0.0760831569118;
    msg.q = 0.158226920778;
    msg.r = 0.339957031522;
    msg.svx = 0.430967431422;
    msg.svy = 0.268122921715;
    msg.svz = 0.69531664677;

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
    msg.setTimeStamp(0.625078279596);
    msg.setSource(43491U);
    msg.setSourceEntity(104U);
    msg.setDestination(19416U);
    msg.setDestinationEntity(73U);
    msg.plan_id.assign("KXRMTCLFQNPZEHBSFNMXWOMFAWTNAIYMTILGMDUSCVAVPUDKSXFERUKOFQWNUQXLERTYCHLRBHDBWQGPTJRSOZZSYIECQVOJHHELJSXBIQWCUOJBOGLPGRDKKZRWZYDGVKJVIAUHALASVZNUBUPDGOTDETHEYYQYWXNI");
    msg.type = 89U;
    msg.properties = 96U;
    msg.durations.assign("PPPMJEHNMWTNOFIBQWNRHMXTIZJEHLQTFHNJNIJSQDWZRELCPDLUBZGSMQFFEXFNQLSDOCDKGYEKYHAPOAWEIPUMTDTUXAVYFKCJIVBRLBUSNAKGUZRITWGQYFPAJCJOCOJYYEXMPIQZBOHBCRHCPUPWSLYSMSCLOSXGFIAAQORC");
    msg.distances.assign("FWPCBMYEBKDOAAAFQYMRTOGBJYITCISLFX");
    msg.actions.assign("NDBIJAGYMTOUTDMZVZQARPRWIIXDQERFGQTGYMDPYKZXAFVROBTCBYPAQMFKHZWHDSVNUBXJHJNHCBYLIZYFXKLXLGXCVJEWCACFEMNFOXZLYYPTHZNROEILQSNWMKDCWKUKLSVGHPP");
    msg.fuel.assign("LMLWPNMDJMTXLEBKJDZOZJXLWENDWUCVPNUVZRDYIBRFRIDCBGIXDMZAPLXWLAUXJNPFKAISHNGKNVSWQNWESQPXTOLYTXTHSCUPHGCJRQKKGESLIWZFAKNJBYMGVQUEVOPHOQQCYTMEUKEZYEBVTMBLJZBHQCHYEYGOPFRYAOTCRQTOEHIICBZGSDSHPNJOKDVVYHSBFYXKGIRRRQVVUFJX");

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
    msg.setTimeStamp(0.420991685203);
    msg.setSource(60338U);
    msg.setSourceEntity(89U);
    msg.setDestination(53825U);
    msg.setDestinationEntity(30U);
    msg.plan_id.assign("UZWTBZKYVQUFBCGGYTBKAWCSQVLBLFASDONZHFETJPBZEXVUAQCPLNAACIRQFXDRIABXZYWODPQJFZMVHUML");
    msg.type = 149U;
    msg.properties = 232U;
    msg.durations.assign("INTJRBDTENLBGCGZAMUIWALILU");
    msg.distances.assign("ENDIVWJIGFVQYBLTWUTRSFSYLTTORBIHMDANZWMNULBAOOQKJQQVGGOCGKLXOEYOIHLGIDPCXEOLKSYFOQIDTCPVNCXYUXMXFZSEHOJWVLCXNLDNSAJYXRPUCWJRFGGLTAUHIIHXVZHPBSDACMDKNDEHDVIGTPKZKQBAUPVMQRRENYPSRWCFGBHJWERHEMSNJCZJEALSKWUDVQREWPZIHBQBFPWQSMOAZTJYZRUXVXBPMFKZYZTUMCAGK");
    msg.actions.assign("ZWJIBVABQLGENSYMTCIIZFUXBIX");
    msg.fuel.assign("OYUPDXIXLJVJUVAGDLPDHCPBEERUIPCJXOAMCLTTMCCMHLLWAYLWRKFBPQRXLMCNPRMWD");

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
    msg.setTimeStamp(0.47184576686);
    msg.setSource(3841U);
    msg.setSourceEntity(57U);
    msg.setDestination(5429U);
    msg.setDestinationEntity(126U);
    msg.plan_id.assign("BZZFGMTREOWAAAMPCDWBLXAHQHZIYDSKZPXPHHRCETZWUKPJMSRMSUDFVULXXJFZFQQZEDDRJRRWTIABAPYOZYNNGGSOLSNHCLNAPGBTLFZUGDMNUFQOXINDNPIFVOKYLQKOUUTJHGRUCSIYCQMWVBUHDMHQJAFSAGCVQQWBOCWVRJYENEZXOGPIBLMTMKIRAXUNEYTGPQXJ");
    msg.type = 23U;
    msg.properties = 109U;
    msg.durations.assign("WKQWHVGUXDBEGXUNOYTJLQTTHVPBMHMQOERDYOYRCCSIZCLQPGDNTXHWEIOHLBECVARORFJAQBFBEOPHYHDAYDRFGJAPQASUALJYBBYINUSCIFWYYFNQDXWKUO");
    msg.distances.assign("HEPHFUQUPGJLDRAAONSMFBRSQY");
    msg.actions.assign("NUVWPGOIGSVTKWTLVVZTCJFEYAIJDESBULHLSKQPONLBGCEHUOAMSZBKJIRBFPRVNFKQZVQMULPSCFLPSERWLZRNGTVQNMJEOXCNQXBOHTRDMCK");
    msg.fuel.assign("ISJUFMNOSLOIUL");

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
    msg.setTimeStamp(0.488089646272);
    msg.setSource(4318U);
    msg.setSourceEntity(100U);
    msg.setDestination(3946U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.89604857134;
    msg.lon = 0.564527251094;
    msg.depth = 0.704060397999;
    msg.roll = 0.4481721447;
    msg.pitch = 0.50576585463;
    msg.yaw = 0.205095129585;
    msg.rcp_time = 0.834380696524;
    msg.sid.assign("SQGVJCIKMMJNBPYUEFHETKGLHHJWBDJTGJWCJGIHGSJNYZKRLIHSGFVNDTKMBUEUYIQIRSKTWXPQAZQIXPGCIMUJTMFXOVLLDZRRACBXQMZRFPNXXYYUAQAZVTVYSFVXTWNNQOVNWJOWRNIKVCUHPFBCNPBKBIDPFQMEMYSEVOGPL");
    msg.s_type = 186U;

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
    msg.setTimeStamp(0.0872485426808);
    msg.setSource(14603U);
    msg.setSourceEntity(228U);
    msg.setDestination(38626U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.77847955296;
    msg.lon = 0.161505753564;
    msg.depth = 0.275434260078;
    msg.roll = 0.517136416857;
    msg.pitch = 0.70208541593;
    msg.yaw = 0.60925349541;
    msg.rcp_time = 0.754264352839;
    msg.sid.assign("FJVRXKXCENSVSONUEA");
    msg.s_type = 56U;

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
    msg.setTimeStamp(0.0231732898705);
    msg.setSource(45717U);
    msg.setSourceEntity(84U);
    msg.setDestination(11017U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.977202905574;
    msg.lon = 0.159491785146;
    msg.depth = 0.0132137709348;
    msg.roll = 0.700000278524;
    msg.pitch = 0.828596044992;
    msg.yaw = 0.911868784652;
    msg.rcp_time = 0.634139355335;
    msg.sid.assign("XDNVILUWJHOSONFNFWERSZLAMABBPDKVBTXGIIMQPHUPXXDBTSSAPYJMFZOQEVXWQLBHPYCRRYKQGPQPEDTQDKBSJOUALTWHINZMTTVEKUJGXHKO");
    msg.s_type = 120U;

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
    msg.setTimeStamp(0.904494906603);
    msg.setSource(20035U);
    msg.setSourceEntity(22U);
    msg.setDestination(1760U);
    msg.setDestinationEntity(254U);
    msg.id.assign("UWCUZLZFEXZTCIEFNFHBECOTETBGMGYBEQQVGWPAVLTABONIPSWFKODHFLSPRUVGVWHQFKPWKGTDZUKZFYJDRBDTJOHNXCAVJIKGKQPNRMCNOUICGZEMRAOWJCAJYRQIJPJDYTZICIZPLBCVJ");
    msg.sensor_class.assign("SMMWBKEWHKVZFBKIYEUPQQADJZVWVWYXRNKTUQERBTDQJNDMTZCFQJHRXMTDPMYFKGMCMXWAFRLCPGNPKBEIUBCBSIWGNJGGRVSXLGSIKVUBNGXBUFZKSAXYSJOTDNFQIEUVHAAHJHSYOJMNCTTSONDCCOTNLAORYLGKYUSDJOKTGIQFWEQEPDLILDRCHBNXPAUOAGIZ");
    msg.lat = 0.0878483078564;
    msg.lon = 0.278394517299;
    msg.alt = 0.188372965223;
    msg.heading = 0.449159914214;
    msg.data.assign("UXBEESCOVSFJQZNEUAJPYZIZHJXGIKJVTDRWIYISLTEKOQTUFDTMIAXSLHLBFHTNQOHCOBLGYKFLFYFBWNEOTCXTDZIMJDWMWWNCKYOAYAGDXULVMEKMLRPSVICQGPUHFFBHSGSRJVEBUNAPZRHQPCVQGYMBRUGXRAKCDCOZWSVJRVREVXNDWQIOSZAQBHQDWXBMLEPATUONAJSTCGMZPZJPZHIPNFHVIJGOKDUNDMLWNXLXPRYGYQ");

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
    msg.setTimeStamp(0.129951560059);
    msg.setSource(7555U);
    msg.setSourceEntity(17U);
    msg.setDestination(50166U);
    msg.setDestinationEntity(204U);
    msg.id.assign("WESMFIXIISKMSCDBYITFKQYTBOUESJHILRLBGNQVLMMBYAPZNZJIUTAQOMOXDQGNWQORNGWGGQXNEMZXDKRWOJYDNCJEILPOUXNCIJBZWMRUKTIISZOVLAZSFTDJXCEEVYKPLRGBTVYHCEJMCKHCQTVLDMLPWONSJCBTZ");
    msg.sensor_class.assign("IZIPBCOBBPLCHSBLBWVNWTHSEFYTIOUNZDWMGSGERIWKRUKHZTRSXDHVCBNDKVYFXUGJDBGQNULWCQEQAUUCLXLXREZWIJDULTKIJVMKODFCYEJHAXDARUJTEFYOGIZYHXMTQPMFXRBGPDNVZIRRQMLNCTUVIOGJTPHOXAFQJZTKSYAHVEQNZPZAYORWFJPBAHJMSAIWOQSWXYHCFKSDQMVJTNBGLWMAM");
    msg.lat = 0.888245074887;
    msg.lon = 0.00562962913822;
    msg.alt = 0.611646184445;
    msg.heading = 0.659811369862;
    msg.data.assign("LAHEZBTMIISLPQBZXCXOZNGHQQKXSLWGCWUWHJQAHCGFRRDTKOSWXANFCXSMEGLBUJAP");

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
    msg.setTimeStamp(0.590131995466);
    msg.setSource(31798U);
    msg.setSourceEntity(204U);
    msg.setDestination(23042U);
    msg.setDestinationEntity(213U);
    msg.id.assign("CTKTIKLLJBJZDZYQVIXDIFNSRMHJBDGAFBUMRIMJFECZCGQQ");
    msg.sensor_class.assign("SRSDJKDAZRHMUXVLQAMCDVOYVLHTCMPABVFHZDZQMKIUOCPRUBNYKWESLFEYXHOIJOBQBSHNTEIUWOUBJFBCIXMJCFMNISZEUAXJNTDCYPWFRYHYQASUGGBQIAAGOXOYRWLSKEEVZPXWGZZH");
    msg.lat = 0.724075796968;
    msg.lon = 0.936736947963;
    msg.alt = 0.994365908859;
    msg.heading = 0.0389323017735;
    msg.data.assign("XDQIFSBYSRZQKUEJPD");

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
    msg.setTimeStamp(0.272974401769);
    msg.setSource(25135U);
    msg.setSourceEntity(129U);
    msg.setDestination(25951U);
    msg.setDestinationEntity(28U);
    msg.msg_type.assign("NDAVSJEGKHTNVEOEEHUGALDTICNOQVIKHMDEXWGMFMWLCYBIOQCKPGQIVQWSDXHROG");
    msg.sensor_class.assign("YJOJWHMYTMIEEGBYJDHPQPPQRLZDFQQGDVMRJCDIBLQWLGKCIKVPWCNABZOBDQTHYABEPYZYEFMMHOQPHDBUOBSXUCUAKULINNXSKRTLIGEWKZAMTTWGCVRVWXNTYXONSNSPCHSLEFYZUVCPRFI");
    msg.mmsi.assign("KOIPPDSISVHDJGQCYLHOUGUNJQNOEFMILGKWZGHZVXMZSRJUTNBFSROWWVKRYQMYCODAAKYEPKQTWWTEFKBILAKGEDTMFHDWLMVXYZUVZWIAUONYZAXSTITJX");
    msg.callsign.assign("MYUZTDEBWOUHPRKGCPNCVWSGRPIEYQZWZEGRONZHFTKIPFWXSFDOKIJACWDKGXSTJNJ");
    msg.name.assign("LOTDHCYDBIXJYWWTOKHRILABSILRYKJTYUTLGIVXQNCPFVVECRKETOOOFIXYLINNSOSCSMTZGNYES");
    msg.nav_status = 89U;
    msg.type_and_cargo = 86U;
    msg.lat = 0.978121278931;
    msg.lon = 0.429111583239;
    msg.course = 0.96318171832;
    msg.speed = 0.402475621694;
    msg.a = 0.399806765961;
    msg.b = 0.895302953039;
    msg.c = 0.690856925842;
    msg.d = 0.721479242591;
    msg.draught = 0.868941471977;

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
    msg.setTimeStamp(0.0398962025258);
    msg.setSource(30062U);
    msg.setSourceEntity(151U);
    msg.setDestination(8074U);
    msg.setDestinationEntity(193U);
    msg.msg_type.assign("KAOUHAAKZFKAXPEWPRXBOZISHIMZCMUWRSXHSTAGJPEFRGDLIDDYFIMLVOKIOERLWWQWOWGWLZVPBDAYVGZQEGLFNBUZYUVTQOHCUMSDXFRYAJKRTPPIVHKKQDZRYWKVSPQHJTNXVGKENGUMXBFCLXEQEDZSIFHTLSKFFXTQTCCFVYSNDMCLRICBJUBHZUQXNUYGUIHMPWJMTQAOMOLWYGENCRPPDEQNBOOJNMJEYZYBJIA");
    msg.sensor_class.assign("QTHSHCNUJSZZQNSIGEKTOAQZCRIVXCGOECORBLRXXPIDSDZSMQKSNRULKMOAKXWWZIEGDLKEGPHPSOZFHJGMKIGVMBMVUFEZCWYYAKEQYWMDBACXRFFOBHUUOMDAJPIGHEPQPVKSVDOTCJLLYDNUNS");
    msg.mmsi.assign("CDFESYQMEDSNRIBYXZWIE");
    msg.callsign.assign("GIMTRYIZYKEXDIZEUAIZBQZEKOKTTBUWSLHDXGIQFGAFZEVRCMVPPMSRRDHXSXBGGULBDWSONNFEGZSYCTHYBTXARCXKOVENJILCMAWYLRZMNQMPJBLJSLUHLCYOQLMXPYLBXDOPTFRTHOJHERCAKLGWHIIFSANTVVEEZUUXNVQGOYTGFAIYFPAFOQVFABKUNSJA");
    msg.name.assign("RNQEHUVIUPGLSAZTZTCXUUEVGLGTPHNFMFHRFIFRSHKFQDBKLHLYDWAETNQNDZFLMQINODWIWQJECATNMKDHJYJLXBBNKVOLUSVCOSDUVAHOMICQPROZXWWGXGXBVZAIFCRIBYAKCYLOYOBDVSHWZHGEAYUQHMDZXATZAJ");
    msg.nav_status = 155U;
    msg.type_and_cargo = 96U;
    msg.lat = 0.203095087164;
    msg.lon = 0.431528448846;
    msg.course = 0.420529336865;
    msg.speed = 0.658952257614;
    msg.a = 0.638591565984;
    msg.b = 0.663713787398;
    msg.c = 0.757962573327;
    msg.d = 0.361673234886;
    msg.draught = 0.251497729176;

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
    msg.setTimeStamp(0.861743033197);
    msg.setSource(14481U);
    msg.setSourceEntity(73U);
    msg.setDestination(54098U);
    msg.setDestinationEntity(204U);
    msg.msg_type.assign("VUKBYEQMQEXIUCCTENQRVZEIWAWRRCEZIPXCFMBTJVHOGPDKHRANXFPSXATTXCESWZHTJDWCBBYYGZUOMYFUMESPDGPBLGAXDYMCVHJQRIUESZOTLNJAFKFFWKYINQKRAVMWLNIMBGBWVVZNIZVXIGFHUJBOHMOPSIUWSPYSSLGKGQSZHZMYNJJOQHWEZJXUGKIDCPDQDSTVR");
    msg.sensor_class.assign("PPJPRBNGRMXTZEECRURXXFNRIBFOTBMMVLYAIUGZDGZADPSDQOSWIJJLRZJNPDLGIFWCUGJVJJPEGWWRTDMBPEWQQHKFNSIFXXAMCMCEHWOUVSWEYGWBTNOYUNERIQFHCKYALUGKVQSCXTXEUDXBSQYUQABOAFRVJAKTIBAMUDLYKJNLHPOLVKEMQXQOVDSZVHOHVYMMTFVHULODHJGRTTPZLNFAKCASQYKDYZZKHSCBWNIIIGWSZCFYPELXZ");
    msg.mmsi.assign("RGBRLGMREPPNRIEKYUGPTKVCEFVQARKCQQFUSHOWLCHKHZETPOUFNRUIQDVBGYDPXAEAQPCASKXBSJIZYWTTBWRHLJKUZUBDNKYYVHMLNLHJUGHLKJTZBDCFNWPZACUBSGXXMQHJEALQOI");
    msg.callsign.assign("SKLFAOVMJYIMHNGFNTDUBCGMJEVSHRCNTZVWLVPSXKJSEUQCLGIQBPXEPCOHSJANFWIJKOLCXEMIKEITZAPJEYCVGOZDSNQDEDDEYXBOJCDHYZPRRXGCQMAPXROYUVXSAMCWZFDABQJSUUELMOBTFLDVBMTBBLQDRYZLRFO");
    msg.name.assign("SASASMZABTBBDUEYGMRTHGTPGQOPCIHZCLODWTZEOUMKIXVFHXOVHIZHOXMJVYUJDCSJUAAUSVWLWXFUTNAKROGCYYICFRMDCZLGNFNZWNEIQVKZIXTQDZVEYHVLDQEABB");
    msg.nav_status = 3U;
    msg.type_and_cargo = 39U;
    msg.lat = 0.176335816162;
    msg.lon = 0.878235307846;
    msg.course = 0.753385785826;
    msg.speed = 0.936523105615;
    msg.a = 0.525457020038;
    msg.b = 0.194271593119;
    msg.c = 0.780755817344;
    msg.d = 0.558752296876;
    msg.draught = 0.0438750061078;

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
    msg.setTimeStamp(0.881732936142);
    msg.setSource(56033U);
    msg.setSourceEntity(161U);
    msg.setDestination(45888U);
    msg.setDestinationEntity(238U);
    msg.id.assign("HTVKAEWVIZFPJVKFSHECCSEDTIDOGRYYXXKZCUUSMOUDUWKLJHFIGWKUMPHNHBFDTKPGGAXFBINBYHOQGYKAQQWAVUNHREZDTIPFITPSFNSYPFHLJAJECEMHCUNRTGHOGSLDIQNAKBAXQYM");

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
    msg.setTimeStamp(0.967231566466);
    msg.setSource(4717U);
    msg.setSourceEntity(233U);
    msg.setDestination(55293U);
    msg.setDestinationEntity(190U);
    msg.id.assign("AGHXOHXXBUIUMEVQYQZBDYKLMNGGWJUXZM");

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
    msg.setTimeStamp(0.480020058656);
    msg.setSource(50608U);
    msg.setSourceEntity(111U);
    msg.setDestination(65250U);
    msg.setDestinationEntity(65U);
    msg.id.assign("FJGTJVXBOXINSTWOQDDFMNZSPNUQPVIHVLDJCULHGNNFDGYYWVBTKPCUOZXCESYQKXGKNPIGKVKIRHDUVSNARHJQMORCBIZOPWDHMAYECNADMXQPHZIJPCQLNGZDIAKHJTPFWTJFTLXLGODTRRUOECTXGUAUVJYCKACUQEGOZYSUZBELZPWTLIXMFBSQKXJCESH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ZSSWBQISLCDYEESDOEDURAGCODWRUTFKAXRGYQYROAXJSTJJRZMAITGGFPQUAGWZKTJVPQCHMPPWKFOMLLCGBXBCYIFJKREWEUNQINIEZBUELZVMIWVPVMYLKGWOEFFNVNMZNDVX");
    tmp_msg_0.feature_type = 97U;
    tmp_msg_0.rgb_red = 228U;
    tmp_msg_0.rgb_green = 11U;
    tmp_msg_0.rgb_blue = 20U;
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
    msg.setTimeStamp(0.906879276021);
    msg.setSource(8348U);
    msg.setSourceEntity(248U);
    msg.setDestination(49677U);
    msg.setDestinationEntity(99U);
    msg.id.assign("NQOTSXUJKZPBVODZAECTYJJILXFFXSFVDHGOXRVHKRMQZANNXRRMLTLTRKTCJIIYVWUFBMBZJYLGQFFYWBGKQNHWWVAPXCUUOKFZXNLSHYZHKGNBWFUBPEXPCMJIKIAUERDSWLPSVFYIDRGXPTSXVSRECZBALIGEECKSCYHAQQJLDIDUSHSBGUABZ");
    msg.feature_type = 147U;
    msg.rgb_red = 73U;
    msg.rgb_green = 191U;
    msg.rgb_blue = 36U;

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
    msg.setTimeStamp(0.576791409957);
    msg.setSource(7768U);
    msg.setSourceEntity(194U);
    msg.setDestination(33794U);
    msg.setDestinationEntity(75U);
    msg.id.assign("RUSGMFLHOOAAMYODZPVJXLXGDDXPYSBSNJWXYEITXCLVFRYBGKVAJRASPAHCSZFRIHQENFFTDBWHRHAZKECMZBRZXVVCWWTUZLFWNNQBMOUHUADMCORSIXSIGID");
    msg.feature_type = 144U;
    msg.rgb_red = 21U;
    msg.rgb_green = 169U;
    msg.rgb_blue = 149U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0721655951957;
    tmp_msg_0.lon = 0.232433949802;
    tmp_msg_0.alt = 0.0681427770178;
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
    msg.setTimeStamp(0.0362841281838);
    msg.setSource(41727U);
    msg.setSourceEntity(236U);
    msg.setDestination(37037U);
    msg.setDestinationEntity(152U);
    msg.id.assign("DLFQHYKBFWGEQBXOYBUQKNTTZHCAUILXSZTPYMVONXCNRTFNYSTDMVZOBIOZPRGVEPSRAFRDGIXQVGKMUSSXTZNZEAINYLUSUWEAERDEEZRMKVPDJKUSVJFCUURQCLYQPHQEMJGUPIRCOCDCBZDFJCMALDFBXPUHWBVRNGPHTIIRYFMGTJWJMILA");
    msg.feature_type = 88U;
    msg.rgb_red = 187U;
    msg.rgb_green = 156U;
    msg.rgb_blue = 244U;

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
    msg.setTimeStamp(0.961922946916);
    msg.setSource(32578U);
    msg.setSourceEntity(229U);
    msg.setDestination(27647U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.23596199015;
    msg.lon = 0.984676287613;
    msg.alt = 0.257601571038;

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
    msg.setTimeStamp(0.521706195744);
    msg.setSource(928U);
    msg.setSourceEntity(130U);
    msg.setDestination(1364U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.864112335552;
    msg.lon = 0.589065776129;
    msg.alt = 0.858501383596;

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
    msg.setTimeStamp(0.810197561398);
    msg.setSource(13156U);
    msg.setSourceEntity(204U);
    msg.setDestination(59736U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.858792038969;
    msg.lon = 0.278751651634;
    msg.alt = 0.726396755047;

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
    msg.setTimeStamp(0.283589416855);
    msg.setSource(11250U);
    msg.setSourceEntity(229U);
    msg.setDestination(20929U);
    msg.setDestinationEntity(133U);
    msg.type = 106U;
    msg.id.assign("MXHCBUECDVAAYIGBLIFTUEVQNBFOPCSMJHTZENEURQGXSPQEEWIMOKCDLKZZCGJWWBIVVKDCZTNVWHHQGJDZNBOQOBVJYVPCWHRPEVPOAMJUBLAYLGFUXATGJIKJWMXWKRNUPZYRNRKDFUMSSWNHSXAHHHMJOYTITZQSTIMRIOZEUPGYFCLYQZRXRKFQNBQXSJLYVLTUPYWFJXCTDZNNASBHFETPDU");
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 207U;
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
    msg.setTimeStamp(0.723663299199);
    msg.setSource(45425U);
    msg.setSourceEntity(169U);
    msg.setDestination(22587U);
    msg.setDestinationEntity(242U);
    msg.type = 101U;
    msg.id.assign("BKRMEVEAVRPWGIFFOZKGVDSBFUPNJYUIKNCWVGNWZKOWSZSTEYGTVASTMKYIYLACNPMSIJQUJQUQZZRETDXFUDAGRGRIHIZ");
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 126U;
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
    msg.setTimeStamp(0.0130376040813);
    msg.setSource(42522U);
    msg.setSourceEntity(90U);
    msg.setDestination(63224U);
    msg.setDestinationEntity(86U);
    msg.type = 37U;
    msg.id.assign("IQIYZNXRVKJDWMHJFVUZIHXUZJASBDSHTRRLDITNHTYQPKCHZYIXCOQNRYSFWJBGSBBUPJUEWIKOELFYOHYGEWVWDZNTGBBGCVWLAOBPLRIRABLFQFKIJBJVICUHMETPFVQWJJLMRPPOWNQPQDTXAHULZEYLZQEEKTVGXWEYQRNCCGCLKCSXTMSVNEMYFMAYMRTOOXVXDKLAETOGHAAUZPXONVPUHSSDFCCUAX");
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("ZFDQKNOYLFGVSGAEZWLFTFNANCBITGPNCVLDAWHVISHIPWHRCBQAUTDCJPTGSTCJRERXFINJUEXPYIZMEOXYFWXDQTZYGCDODLXKYHOZGBXORPXKHQGVSNHSIECKRMDMAYVDZYJSMUMPWQKVPJPVOSWYAKXBEVIXNWZCUFGDQOVAYFBTOHRURHLMLBMFQRZQZPHQAINRCJWLMEEOMIUTAFLIDCUHNTSULBKNSJSMBRKPKOKY");
    tmp_msg_0.htime = 0.326635078757;
    tmp_msg_0.lat = 0.138540526925;
    tmp_msg_0.lon = 0.758834717401;
    const char tmp_tmp_msg_0_0[] = {23, 6, -95, -52, -46, -19, 86, -63, 15, 66, 81, 90, -71, -4, 30, 53, -43, -86, 85, -107, -8, -44, -25, 59, 56, -57, 99, -76, 58, 122, -30, 97, 109, -8, -27, -55, 123, -94, 3};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.873254761296);
    msg.setSource(39059U);
    msg.setSourceEntity(205U);
    msg.setDestination(14419U);
    msg.setDestinationEntity(245U);
    msg.localname.assign("WYTTJILUSFEZALWSJQXPCKRUHXOOLEZJRQGTDSDRVQNYUPLCDBFZEVSLOQIAVMMXQPJBWMOTOBVCRBLXPENSHREHHAWUDYQJGUIRBBTKGWXPZCBCVVDCWMFZMYKHRAPMFNPQIZXUHGTCVJAJHXBPIFOKRKKEIZEQBEDNCSGYMWLTZUSUDISFTJFNAILRTDIXVFNNK");

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
    msg.setTimeStamp(0.0155052513774);
    msg.setSource(53169U);
    msg.setSourceEntity(112U);
    msg.setDestination(18344U);
    msg.setDestinationEntity(188U);
    msg.localname.assign("OGLJEDLYVKOHKHSEIWLCOFMQNPQIWBPY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MQJYDISZCQLAZUUWVIEYZWZQMRAYQWARMNHGRKQCIPYGVFGIOVGPSXGKNDBJPQHUMFEZSHLAPCLLPPTRRJXGUDVXZZDIOCUPMODQGLMNNWVCYDEWTRIMKBXPYFTEHIBUIXUWZKXCRZNYSBFUKMCNTHZLO");
    tmp_msg_0.sys_type = 24U;
    tmp_msg_0.owner = 65125U;
    tmp_msg_0.lat = 0.618500955509;
    tmp_msg_0.lon = 0.098352874995;
    tmp_msg_0.height = 0.369310001063;
    tmp_msg_0.services.assign("VUSKESZGENWWRKFJTCVECNRRNSDTVQGYRA");
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
    msg.setTimeStamp(0.418012259947);
    msg.setSource(53047U);
    msg.setSourceEntity(46U);
    msg.setDestination(16278U);
    msg.setDestinationEntity(205U);
    msg.localname.assign("DJHZSAETREBMKAIMXGGCPDWZKXOIXUMNKRMPVGIQBGQQHZZDKYXBKRZFAWSZUGLVLBTBSHVWYRIUSNNXNGQRJDRXMSKOQJITXCVWIAPJENINBOUBGMCTWMKYKZPLVJCQVMOGVXCWFLEOCLUFZLOUAWIEQEFLHMUCLCPQXYEBAYENYCPEYFLGKFBUIJWSPOYSLPODQATNRFUAZDFHTBOHDAXVDJUJMYSWFWDRJEK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("EPUVZHFURJWULFIBMAANIRRXWAVNSMRAMKEADVHVPXNFGKQAYCDVQZXMFXXLJAYWYOCLUCZSFKJDYVEFQEBFXIWIKPREITCPHTGJWSIPMCTGQOEDFHSDVRZXPJMIRJODSTHLSPMGNAUBHKJTYOMHZGMDITGLMETBNYFQVLQZYHOTRZUGOSBPBEUYQKT");
    tmp_msg_0.sys_type = 205U;
    tmp_msg_0.owner = 46836U;
    tmp_msg_0.lat = 0.995814883564;
    tmp_msg_0.lon = 0.75009533642;
    tmp_msg_0.height = 0.458639591949;
    tmp_msg_0.services.assign("BYXFFVGXTGTPSZYWOMQDKBARKSPSOFMLNDRZFHWPDKURLWQNADWNFNHQTKCFYRGRMHEPVEFQEOCTDAIVBOIQLJRTASGAHGBVEMMIZUCJZQGEOYNRKBWCDFXKGOPXXETLQCQJSVAVXBABHLNSISXJKVNYCOGYDKTMZPQXMDUPLWHSHNXVHTKQAIIZ");
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
    msg.setTimeStamp(0.900150578409);
    msg.setSource(37984U);
    msg.setSourceEntity(88U);
    msg.setDestination(54377U);
    msg.setDestinationEntity(88U);
    msg.timeline.assign("QIWVRVORTYHZSQPGVKQLRUSNNJKPSYDNXXQXOEDL");
    msg.predicate.assign("SQXOGJLUBHBDZDFNVBUDLGYALRXWJMNVRKVCASXOLEPEQJPZFYIAVVBWDEIQBQIFOUFKPFZZSALKMTETNHNXQIRYWYXZNMBIAWYYWUOWRYECFCCAEKJGTUODWVMZBAUGKKUQAKTXPPQSMAQHDSDDEWMJITRJVXYQZNSLVIVOXZLJHLMCMOSKQIXCSDKHHGGZBTFTJVGGPLGRBUB");
    msg.attributes.assign("MVGRWFNUARCEAVHOFLGEQATMQXDDTPXUNVMEIZKPNCXKOQAXPZZSRFVLMSGYPXRWGLRLHKUYBCYMOQYDFKTCQWZNIMEPPMNFCTORIDKYQJKTBTWSYASYJBZMJMBDGGMBIPKCNYDEFHLHNWTWOBJJVGULIHXW");

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
    msg.setTimeStamp(0.97966374634);
    msg.setSource(55587U);
    msg.setSourceEntity(197U);
    msg.setDestination(37435U);
    msg.setDestinationEntity(141U);
    msg.timeline.assign("DKYWODKHTMNCDUUFBHFHCQVXXJWFLIPPLSGCNATWONSIUDSKCKXET");
    msg.predicate.assign("DEXKKBIFSCBICYZWTIWSSOUTXNOWKYQYGAVOAMFPHXWCFOVTHFIKOLVXZDHHWOIYHNQWCECJGQOFZSOLSRBLTZGDRULBAPVXYUANEBTYD");
    msg.attributes.assign("SOJQKTDOPWQMZDEKNXVGABRUZHZXRFRQIHVNMNAOSLTCWDNBTLUZETQVYKPYBTXRYXGHGUNCSQVSMJCAYCPXPLSGDWFEHRXVTWPXKOUFCJJYSMMDGOADFSMDCUPDPOLVKJAEVFNGTIWPZWONQYHDWBFCLRZNWLMELJAUGHZOTGG");

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
    msg.setTimeStamp(0.0459236221564);
    msg.setSource(29792U);
    msg.setSourceEntity(166U);
    msg.setDestination(24612U);
    msg.setDestinationEntity(249U);
    msg.timeline.assign("HTEWZZFVRUUMJKOOPSBXMIHPYFRMOQJJWARNEQICWBXVNKIVMZ");
    msg.predicate.assign("UTPOKSIBVFNZHKCLFGSRFBXEDQUPQMKPFKMZCZOOSHTCEGADFQJDEQDGCZCXBBVRZWBWRBDWBVXLJOTUQBXTOWLNYXUFGADBVSZCYGNCHMYETXVSMNIZRRXOKUHAFIDIRAJQGIIADLYTPNDIPVLEPFJCZOKCQZAJGQAXBEUTAI");
    msg.attributes.assign("YIUOELMYWNWXBTRIGBKBBKVIJVHZSLEMDANEYFEEUPEZQAHVBBCESOYILTRNZUXNDUYRZQMQPZVTFKDMNZJXFQCSQCAXKYOIVHNOSKWYOOPPCDGVFKKGQIFROMVQAFGYXHCNJHPHUYBTLIWETWBQHSTJADTMGXJCFBTDCAPWLU");

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
    msg.setTimeStamp(0.717949158579);
    msg.setSource(44855U);
    msg.setSourceEntity(165U);
    msg.setDestination(30311U);
    msg.setDestinationEntity(118U);
    msg.command = 154U;
    msg.goal_id.assign("VTMDYYNXMLMHALKWFQPVHHCKFOWCFIZPEUBZYGXWHOGLDHYAGYHZXBGTQWSTJJGQIRNKREHAICQWHSQNIPSZRDKVEINROKPBSEUUEJNYWLRVQ");
    msg.goal_xml.assign("PPCOHBYJQEPXAHAZMJGGCMJBUZIZYOIVLBQOHDKGHVSRRJOJOAHSPYTGEGXWYVAOGNZTHEVWWTKPNGLQHYFNJVLJAMYLUSUBTWOQGMCIDQUEUCXFQPIRFFJKXXEDTDVDHDLTHBQXMRTZZLGFZUUXSXNNCWWRQVPVOLSMWBKIEDODFRAVNTSHAMAQKWYZPELILRFEKZKDEINIFONRMYLKDUSCVURIKQXJPYCBIBSUSNFBXMNGTACFBWR");

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
    msg.setTimeStamp(0.802525097244);
    msg.setSource(41430U);
    msg.setSourceEntity(216U);
    msg.setDestination(26193U);
    msg.setDestinationEntity(163U);
    msg.command = 235U;
    msg.goal_id.assign("RPNOXWTRBNXWJSNYFIMYZIEEXQCZSYLVLKLHKNLHFKWQVADXZZYUHPYQERKKHRIRBATNGCSADPSIUROGZJKTEICGFBLGFUHMHJFOMIVPJYFTSGJRKLFHUTWCTGXAMJLNZOQJFZDXACDJYVOXMOQWMRVVMRFMFAWBHESWOWVAQEQBBPVODEBZNSAB");
    msg.goal_xml.assign("VWGJHBDLQPTQQCWRWOKOFNTDEOAGFZSWACXRFHYJYKKUFMMRCPBRFMLLMCHJIEUZXWGXNOAFVCOMNOHDDOIUMOJJYTBCZGKENVSVMNANQXZNRDA");

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
    msg.setTimeStamp(0.0290764671151);
    msg.setSource(16985U);
    msg.setSourceEntity(96U);
    msg.setDestination(55979U);
    msg.setDestinationEntity(37U);
    msg.command = 158U;
    msg.goal_id.assign("RQGXMRZUDYSQTLPKJJJWECIC");
    msg.goal_xml.assign("FNOQZQYJGBHSWQXEKBBTUMSROGOLPTCMTUHDUEKZXOEMYUKDMSUFBSXRPGHWEHRYLDYYNAYVPSFUPFVRCZKOCDTFVUJJTXCARWBLSGCCIXQJNENXIIYQHTWTCVPKDQDAJAMVODYZPKZBNWLEGMMWZIBPUPXIYFNSKAKJDNANRCQLBQZEBONDVQIORZGKVHBNTGCVEJWSITXUVCKPAI");

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
    msg.setTimeStamp(0.0777787246157);
    msg.setSource(28422U);
    msg.setSourceEntity(59U);
    msg.setDestination(39330U);
    msg.setDestinationEntity(144U);
    msg.op = 204U;
    msg.goal_id.assign("ZZZQCLBKJPIFWQHUPXAOFVTUKYNCIUCRNFZHJPTWNALPMKGYQEBBBVKNIIVPGODHPSAMOSUOKHJNXJKSOARLRZMPEFUSNTIXWIGNTXEGVOETGGBFTKIVLAUKSYTCMDJSBDMHWWCZBECGDFOZERBJTZAHQFYWRMPLDKWGDMYBWBYFJSSWALEQAXVDUMRLVIUC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TUOXKXDKWCDVGPDMRFTEZZYXVEBXIMUTGTDFFRUMBPTURWVCSBRZAZHWSIQNVLGFQNBSPFNEIGTWUIDYTHOCTRSAULVMJXXLJODORSCTJKZCOJDLPIWSKIRBLHLZNNWLRLCIVNXGETMMOGPKM");
    tmp_msg_0.predicate.assign("CQBTSMDHPVHROUUITUUNHAMLIPDVPOVURLLFHESRBQKQNGJJSUWAYPXMWPFYKJZACKSDOYGDHSLHGZHZOFOAGMEBBLKKVCIVBXWQJYSWMLEPBCJEYUDKDXSXSMGVECHFTIMNNPCGEFOTCTXYBDKYIYSOBFJVRJEFNXRIEBJTTGVITXOQGVAPFQDPLQZAAQRZRKNWDM");
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
    msg.setTimeStamp(0.531152775663);
    msg.setSource(26936U);
    msg.setSourceEntity(148U);
    msg.setDestination(12012U);
    msg.setDestinationEntity(177U);
    msg.op = 62U;
    msg.goal_id.assign("LTJWOXLPSPQORGBZPENFEKKTA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DIHBSTESLSQTXIUENVPQMLZBKLUQXZRXZWEATULWYEGQCGWVQHZUHLYQLCMPCKFSJWMJWTEDERIHCNGEAAGWFUXBJZPYCCRFWRJCOKXRDEQRXWN");
    tmp_msg_0.predicate.assign("DOYRCDSRWKVOYYBZYLXJZOSRUKFICECSAMRUVWTGNQROFQYIAEXTLHBPKAUYAYZPUPDKZKNDGZUMMQNMMWCJFNVJINGPMIFVOTVBMTVLEXHLPBJJACSVLZHEWFLCRNHWCEOFVTTYFUOLCJSUBVWHEKKIIZBURGD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QIBLNPQYILFYM");
    tmp_tmp_msg_0_0.attr_type = 56U;
    tmp_tmp_msg_0_0.min.assign("ODSQVAPNKCMXNLEUJDGMJMGSFPYDEUWDVTCHSDJGZSEDYZTETDKLYDAWBNZQCMLCXYEOVEPPIECQJKIUHNXHDSTQIWKBPPRTHLKOCBJDRVTRHJOIORLCOYFJCVGUAPLIHLNXQWXQBWIRYWUBUIBZCGLEABFJMOIRTVYFJKLQKMBAXGZAWSOAQWRXFKESHRKLXYQOOJIWMGSNYUFZNBRVQGTUZUWFNHTIVXEMRFTGNPGPSZFXUBZMKHAMFN");
    tmp_tmp_msg_0_0.max.assign("RMQCJQJZAXTQCWFPVGGSGPFASEMBLPDUIL");
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
    msg.setTimeStamp(0.551799623567);
    msg.setSource(39518U);
    msg.setSourceEntity(203U);
    msg.setDestination(36518U);
    msg.setDestinationEntity(28U);
    msg.op = 212U;
    msg.goal_id.assign("RKMCJSTIFURYONTZLOAHCXJYHMPL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LWIPXVMBHIXPPUHIJKAYRVIKKLEMTTZTYKEUTQZPIBPGEOGUJZOKZRXDHDEPASDYNGYCXLOIKECOCDJGHSNVOCBORQTFZJXTABAVWOPNSYQVRGJHTZECVEYNMFWOJOAUOJHSLPDBENSYGLHRHGUP");
    tmp_msg_0.predicate.assign("QXOUPFAJRLUXXZNVYCBCAOCILUQAXEATEWACGNDFMKIWLMKONTUHBLRITRQJVYKZPZBYRKCSRICCUGSJXKTPRPZFLGCJKBDQVFWIMGLWISMMUE");
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
    msg.setTimeStamp(0.398377960355);
    msg.setSource(28985U);
    msg.setSourceEntity(107U);
    msg.setDestination(20779U);
    msg.setDestinationEntity(235U);
    msg.name.assign("UOZWBCECABXYSPVEJZLSUALBLMCIJCIRLFAEGUZEFKCNZICISHJNKJFQJH");
    msg.attr_type = 235U;
    msg.min.assign("SRNNPZOTLUEPKXMQCMHGHABUZSJQAACBHMEIKICXEJPHWXFDTAFEWVKOJFNRCRUPZEQFKZESEHSRGKCJTXUHPNIBOBGHGUQPSQDRYGYLYSXIHRQIIXOOHAVGVWACRQMLLXIVPCAYDBZZTTULYUYXYRSLWUSPCWYZMSLBRMPBQNVJWDJZQGFDLETYC");
    msg.max.assign("QFTAFQKWLPZPYITEVNPHLNFUDCKZQDXIHGKIAJMBSBOZJFZZYVWKOMLGXJOSOHFVMHEAQXNEIANDBUWTNETUQHGVRSEVICNXIRQVPBPUIGZUHKGOLBJOVNHBJBCCLPLGPNEWMBTKCZUCWKWXPFIQDY");

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
    msg.setTimeStamp(0.723132615852);
    msg.setSource(60605U);
    msg.setSourceEntity(150U);
    msg.setDestination(27895U);
    msg.setDestinationEntity(254U);
    msg.name.assign("EUWIFJIYNYHGMAEIZUEOERURXBWCOJQYGTZDUFZZFAMXUS");
    msg.attr_type = 71U;
    msg.min.assign("NIGTEQLPYEZGWNFGCAGOLXDWMLGAOUKDGUCNOKLRWEVLBWYUKDHFATIZUVXDRHTRLDX");
    msg.max.assign("FWMSMYBHFSUKXCJPSDNTRKCEIUFUJOYVOVTLSNXFELMOYRWPNNHXDNGRLTOUQDDYSSTWJWGWPVQOFERKHXCTAKDAKNWZUBBFZAZPEGVTK");

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
    msg.setTimeStamp(0.685040213226);
    msg.setSource(44601U);
    msg.setSourceEntity(217U);
    msg.setDestination(2795U);
    msg.setDestinationEntity(66U);
    msg.name.assign("XGAUXPUASCHYRMWLWGGTCTIVPEWWUDKIQKPDJFROMUBXMHSOBYNLHJTVSXDDSEPVPLQPAJAZVHQGNJSLZVNYFYFSJJUQEQBWYGHNXGBOFZRDHVOTICXSRTLEXGHRCBTNMCNWCPUOCC");
    msg.attr_type = 133U;
    msg.min.assign("HJCZYUOSYYBIGUDZDQYZDISXMTWAVBRCTNHSGRFSOOYCQBNMEPIEZSXEYEMQVDXDOLUHYXLSQPBHJCPFOQKKIKFJGZDWJZIKRPBWCMKIQFEHKZHRGUFPODPBWZMFPYTBWVGVMZKSWXGAWNUFUGVBKHRHWNENNHCDTFXKSAAMKPLNJYMNTPFLEVULJQGGATBHXAARAWSUURJDIOVIBYNEJQXPIVEZXMTLGLTCRRJS");
    msg.max.assign("SSPWCFDNLXOTSKBANBUKRIIDJKKEQQFWASGQWXYLBRUAOAMIWPRIBZCNCDHZOZSWRGDWYXQVYKTZB");

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
    msg.setTimeStamp(0.291508268343);
    msg.setSource(2329U);
    msg.setSourceEntity(118U);
    msg.setDestination(5301U);
    msg.setDestinationEntity(225U);
    msg.timeline.assign("RSWQTHEAOODPRUBUQHNZVQWPWHVJQITVCYTIERQOJGKJBPYSRXQWMZGDNYUHZMLIFYAWVUFLTPUVMZZIPJNITANSCPRNVUBJGPBKRCJNHQAANHRHMAKMDYAZCSKDAYFDXOVEKNBFGLTIMJ");
    msg.predicate.assign("SAHPKTBFLMYJPIADSBNVDRKFTEFGKXSRLACAJRGZTORPSNHYGXREGHHCMVFKBOWTQZAIHPTGBRESBASPHLIO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XNOYMNKEMJDJCUZQYYSPDFCPFTOBBLYUSGWRDCDJYRGDHLZIRLAPUQIWNTZZKJJMGAOQRTAHXOUQFXOHIOGGAFYFA");
    tmp_msg_0.attr_type = 238U;
    tmp_msg_0.min.assign("CWADKMUDODMTJYBKQEQZFZIZ");
    tmp_msg_0.max.assign("SNPNTLXVUHQNRVWKGQDXXJBREBHUSEBDZGFCGOUCZHXKCMPQQPSOIUAFHVJVAEOTIKBDKFYCJMAWKCMFRRRRVHYUFJGNPEXIYTWHSHGVXPFDURDNBCWSOPJAFQHWSXOIJMQZAUZXWZBOZPWARVEDIFIWLJOLTEEMKRMLYEHIDPVKGICUB");
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
    msg.setTimeStamp(0.85198266836);
    msg.setSource(61076U);
    msg.setSourceEntity(204U);
    msg.setDestination(1628U);
    msg.setDestinationEntity(166U);
    msg.timeline.assign("GTFAUNTPQSBCGDIEJCJBPECEWTXIHROCBMYGNVLEUXTBLAKRWMHODYYYZOIRSTLQKDIRVGDRDWLSSBWWCSOIJMZQPAZFZVGJVUMMLQGUAKJTQGOWQBTETHPPNZDAKYOEXEMFHIUDWEJENJCQFDNZJPRQYYJXSOARPAUTPZXCFKNTBR");
    msg.predicate.assign("VOSPVICLKXCEDKHDQMIODSKFPPCGYVOSMRKTPJDBTWQEYUJGMXZPPVBQDBWDKAJC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TFZKRCUAFVATOVXKPOQRMNMUNEXYQUGCITJXCSGWCXCUQNSULGSRICSOBKNNIPVPIZLMBWASZSDDONJB");
    tmp_msg_0.attr_type = 149U;
    tmp_msg_0.min.assign("VHMQILGHDUVLWSLGFNIXVWDXUXCQAGCFZKD");
    tmp_msg_0.max.assign("MJFQSEOBKDTBGLCVFWKALNQQJXOJUVTXMXTVGFISXGZBEPKWRLYNDXNVNHHFQXBRSGOUUMECIGEALSAOYDZXQMZWDIYPNGEINJYPBTAZDDIIIELRJTNKTSYACWFJUDYKFQYIOIRAMMZWKNZTJFCLHBKBMWSPDUHVYRNOZQAHU");
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
    msg.setTimeStamp(0.104740459794);
    msg.setSource(33668U);
    msg.setSourceEntity(71U);
    msg.setDestination(3393U);
    msg.setDestinationEntity(105U);
    msg.timeline.assign("DANNAMOAGRPEDTVAUFXALOLGQSVHGCZFSLCSBOGFEYMHVOMLHIFLLZIQHBKBPQURSW");
    msg.predicate.assign("AWJRGLYVQZSYFZFNTRTCMBEBTJXOIADPAUUMVSPDWAGKTTVU");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZRFVPXBXOOCTIBJCLDREIELCMAYYBLENGIWUMHYANETLUWVZSHDJNCTPKBOGWDFMIHRLVUAQBZEKVFWLHJIJNHXOUVBKZMRMYAVYQNPIXSOQQYPPGPOFIZCBRZHBVMSUERNDJRKQKWIJSZJYHLKPEZRPLOKFEQCPXQRTXJZSSDIXHMGFZYCOAOCCGOATYVGLFAKTDJUESHTQWFGXGNBHGDBAQVKUWU");
    tmp_msg_0.attr_type = 112U;
    tmp_msg_0.min.assign("QOZHBARRJJYJJNVEZDBUPYPBJXRKXRBVEXXZHIMJTCVIUTSLVMNAWAMUAUXIH");
    tmp_msg_0.max.assign("OIRXFLSAZJWRECQAONVODLKNQKUPXGLMTDRZSRYDNNEQLVCXBLHIUIKFVDXIGIXZEDBMWJCTKMAHKZLJHTOHONJSJFMMKCJRFBKMZPTKBARYPCZ");
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
    msg.setTimeStamp(0.0772199909098);
    msg.setSource(32017U);
    msg.setSourceEntity(18U);
    msg.setDestination(27518U);
    msg.setDestinationEntity(101U);
    msg.reactor.assign("BWKWAIFBBZACVRLSQULRRCTIGMJNKVIFPZEXXYEUOBBWMACNHOQNGKHPYNLFKSBMYTGWLNJMRDWTCFMEPNPUPJPZAZOCOZNZCCNEVUDOAQSKJAXSKKLRUULIMPEWERCGJBEFMTDAZRIHQQEPJFMVJGZ");

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
    msg.setTimeStamp(0.856059055777);
    msg.setSource(3461U);
    msg.setSourceEntity(102U);
    msg.setDestination(37720U);
    msg.setDestinationEntity(254U);
    msg.reactor.assign("HTGEDEUQJGJNHOZKDIMDTZVVANWLBCMMWGFEDCQYQORJLRPWALXURAFEYOAVWHFBQBTGZYKMKVFNGXMYSRXKVCPROBINGUFNJUPUHKDODLSCLWXRPUU");

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
    msg.setTimeStamp(0.624475160736);
    msg.setSource(28402U);
    msg.setSourceEntity(193U);
    msg.setDestination(60206U);
    msg.setDestinationEntity(199U);
    msg.reactor.assign("VAJYOQHFCOOLVZAKIOAFKRMECMNOBELGYDQYYLEVYRLWNGEDXDDBINQJUFJSKJNZXYNHCSRBTQGOUDSUATORCPTNTJRQMPUPZJIFCGWXRFHAPVWZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UQSGRDONSVDOPRIMZLURSQYBKXPPHCJONTMHOGPJIYKJXEEUCOBGTPUYIUBOFZALACJMSSZMMOVYRYMLXVNYIAOAVDBBQBPJJPDOJFFKTCYNEGXYDELCSTDTVZBKZUFKGDEGMXMDQKHXHEMQXWQAWHPREGEQBJWADTKWVTWTZZZRAEVGNHKIMWWSFTRF");
    tmp_msg_0.predicate.assign("YKEJQAUJHOEAJMWDRFOPOVWGHCDOHTEUNIIXYJHBJGAGPSECSALRFDLRKWIGKYUWZHBDSFACRRZLFTWXFJZWJNCDXYWXBLTIPCVSODIZBKFNIVVQTLOIGPNQFESCJXMGULEDXQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GDWNQIWPRNSWFCRQKLVCOEYYUJCAHXJYNDEXAMRYXWHKHDVTVBHRLYMAGXPKDHBUVFIHQFTWAAWFVAUSSBLSGKBUBVOJXGZOUTMJNOQZHNGEWNZPMKDEISUPXAXBBWPZTKSNHPIEOUGLGBDJRIFSMESTNCMDFREFVLGDAENORFOKKPJTYCLTWONTBAZHUCWMBKOQZLIGPCXQMEJKYEGJHLTUDRJAXSRFTVVCUD");
    tmp_tmp_msg_0_0.attr_type = 164U;
    tmp_tmp_msg_0_0.min.assign("AOTDVZZWSPQVTNQTLUFLBHVKWPOGZPRCXNYVEAUIOWRNFFORTXMFGNPJHAABUWDGEXWIRHFCAQPKVMEB");
    tmp_tmp_msg_0_0.max.assign("CPJKVETRXNIYXHFRMDRTYEQXNFTUXJJLVWWIAPCOJDIHDUOWYFIIWPJZZESWNBOCOLNKL");
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
    msg.setTimeStamp(0.246953567358);
    msg.setSource(40226U);
    msg.setSourceEntity(48U);
    msg.setDestination(39927U);
    msg.setDestinationEntity(231U);
    msg.topic.assign("GZDAXCXIRNAXCMVZQIHBXPQJDZEKVITHROKLLIBTASLTOYODQTOSWAWLUAPTQDLJMMFWIBDUIERGGSOFDXHEFHCEYSVVHOQZZFXMTNCBNVQJJNKYBOCDSFJFWAQJFW");
    msg.data.assign("JIWCEJGLVXBSHAOMNXCKWZUQQELKKULOAJLMHMRMHVTZYPHXMTD");

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
    msg.setTimeStamp(0.293626874287);
    msg.setSource(15332U);
    msg.setSourceEntity(46U);
    msg.setDestination(35462U);
    msg.setDestinationEntity(230U);
    msg.topic.assign("AWSRCLXHQZGYRRLMMFDPOIMFLRTEDXBQNWXMHRZZLVSQKGKINAZOQFQGIYMMRZACWJOHAFXPDETYZCYPHRJDNFTPKVEQJZLZPYUOJLJKWUOTUCSAFUSORUTYPPCLXOWNQKKONBVYUGXSVYJUAMWXVEBVUIADSTXDOCLKBKIXIGEWAMTDLBGEYTNVXNKPWBEHFSAVHBLBHTARGONWIUZQCPJTDISMCSFUGVQFCFBJEJGEZGJBYDKMWNIQI");
    msg.data.assign("WDHLWHWJNHGQVSNRFXYVPBGYYFBYDEBRCWNDLOTMBOASCENKRDXDWETXNDGVVPQBESICQ");

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
    msg.setTimeStamp(0.618721847416);
    msg.setSource(13094U);
    msg.setSourceEntity(201U);
    msg.setDestination(1145U);
    msg.setDestinationEntity(32U);
    msg.topic.assign("KRXMWYNVTSVBWSGXMPJWYWMWEFHCAFZKPIIBAETO");
    msg.data.assign("QQENVYNKXCSQFIWMGLYWMGXRSPTIUBLZQAMANQAJHKPBQMLBDYZ");

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
    msg.setTimeStamp(0.70923956154);
    msg.setSource(7415U);
    msg.setSourceEntity(140U);
    msg.setDestination(63452U);
    msg.setDestinationEntity(73U);
    msg.frameid = 142U;
    const char tmp_msg_0[] = {58, 28, 69, 23, 70, -43, 85, -100, -71, -55, 112, 106, -64, 88, -128, 111, -105, 78, -113, -75, -32, 68, -68, 115, 65, -23, 120, 98, -26, -108, 5, 87, -110, -27, 110, -46, 32, 21, -69, 99, -15, 117, -118, -121, 24, 86, 121, -127, 13, -53, 57, -53, 27, 3, -35, -53, 106, -83, 36, -59, 106, 41, -118, 64, -8, -113, -53, -92, -48, -109, 100, 105, 5, 119, 2, 78, 124, 49, -68, 102, -112, -112, 89, -34, -31, -112, -88, -25, -88, -64, -10, -9, -36, -87, -101, 99, 29, -91, -49, -44, -32, 94, 123, 79, 119, 32, 40, -79, 104, 111, 100, 26, 18, 76, -110, -23, 70, -94, -117, -57, 3, -24, -45, -119, -59, -89, 61, -117, 87, 85, 36, -106, 41, -77, -49, 114, -20, -50, -12, -83, -49, 29, -84, -88, -115, 32, 69, -99, -39, 56, 121, -119, -116, 44, -56, 49, 30, -18, -121, 71, 118, -71, 67, -43, 66, -26, -71, 24, -105, -54, -56, 9, -127, 119, 46, 25, 96, -61, -73, -11, 29, -98, -28, 80, -89, -63, 15, 25, -9, 23, 57, -34, 48, -111, -84, 87, 124, -123, 121, -124, 96, -11, 115, -102, 32, -44, -82, -71, 34, -107, -35, -72, 1, 100, 79, 6, -126, -31, -108, 7, 69, -125, -23, 1, -85, 23, 89, -90, -38, 118, -29, -128, -127, 16, -43, 11, -112, 94, 43, 120, -96, 40, -37, 118, -1, -58, 33, -101, -103, -117, 122, -64, 26, -51};
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
    msg.setTimeStamp(0.772852806208);
    msg.setSource(6372U);
    msg.setSourceEntity(240U);
    msg.setDestination(51685U);
    msg.setDestinationEntity(94U);
    msg.frameid = 210U;
    const char tmp_msg_0[] = {-108, 112, -62, -88, 121, -54, 82, -52, 109, 77, 95, 16, -20, -44, 89, 106, -10, -83, 26, 103, 23, -37, 52, 4, 77, 2, 110, 57, -36, 100, -107, -5, 88, -126, -113, 15, -47, 35, 96, -14, 29, 61, 95, -55, -59, -47, -68, -22, -42, 84, 53, -104, -81, 8, -106, -81, 50, -31, -104, 64, -29, 31, 83, 59, -99, -73, 87, 50, -19, 59, -104, -97, -90, -93, -93, -22, 3, -88, -31, -98, -39, 75, 12, -27, -69, 20, 119, -69, 105, 91, -47, 79, 80, -109, 82, -13, -48, -98, 62, 117, 16, -87, 50, 39, -15, -99, -18, -115, 126, -8, -12, 115, 3, -19, -45, 29, -47, 77, 25, -77, -39, -15, -35, -45, 39, -114, 117, -79, -119, -102, -122, -120, -102, 104, 31, -126, 51, 72, 15, -48, -17, -72, -30, -52, -84, -126, -2, -81};
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
    msg.setTimeStamp(0.00699127614282);
    msg.setSource(51490U);
    msg.setSourceEntity(50U);
    msg.setDestination(40509U);
    msg.setDestinationEntity(51U);
    msg.frameid = 147U;
    const char tmp_msg_0[] = {122, 41, 4, -68, -112, -33, 25, -114, -55, 46, -79, -41, 25, 104, -97, -16, 78, -21, 17, 93, -24, -122, 4, 19, -115, 55, -9, 8, 97, -66, 6, 47, -106, 77, 78, -50, -72, -107, 61, 9, -113, 83, -33, -53, -54, -64, 106, 47, 94, -36, 28, 60, -77, 62, 125, -12, 93, 82, -83, -79, -85, -101, -83, -1, 57, 48, 82, 43, -108, -98, 94, -102, -85, 32, -97, -111, 119, 62, -73, 101, -45, -93, -22, 71, -57, -110, 46, 63, 15, -94, 20, 81, -6, -85, -113, 32, -61, 41, 121, -92, -119, -120, -23, -128, -59, -87, -121, -9, -84, -21, 29, -87, 5, -86, -87, 76, 52, -75, -9, -107, 94, -46, -9, 25, -119, -38};
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
    msg.setTimeStamp(0.388768855844);
    msg.setSource(31332U);
    msg.setSourceEntity(44U);
    msg.setDestination(5812U);
    msg.setDestinationEntity(37U);
    msg.fps = 133U;
    msg.quality = 233U;
    msg.reps = 246U;
    msg.tsize = 171U;

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
    msg.setTimeStamp(0.344381329678);
    msg.setSource(51876U);
    msg.setSourceEntity(136U);
    msg.setDestination(63594U);
    msg.setDestinationEntity(101U);
    msg.fps = 128U;
    msg.quality = 202U;
    msg.reps = 136U;
    msg.tsize = 167U;

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
    msg.setTimeStamp(0.238019589789);
    msg.setSource(4081U);
    msg.setSourceEntity(250U);
    msg.setDestination(8223U);
    msg.setDestinationEntity(244U);
    msg.fps = 237U;
    msg.quality = 62U;
    msg.reps = 187U;
    msg.tsize = 122U;

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
    msg.setTimeStamp(0.393367060072);
    msg.setSource(6381U);
    msg.setSourceEntity(95U);
    msg.setDestination(44179U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.320866800663;
    msg.lon = 0.574231376834;
    msg.depth = 65U;
    msg.speed = 0.378634461824;
    msg.psi = 0.0905198038046;

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
    msg.setTimeStamp(0.941232861248);
    msg.setSource(3578U);
    msg.setSourceEntity(138U);
    msg.setDestination(65167U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.477809694498;
    msg.lon = 0.208374615321;
    msg.depth = 14U;
    msg.speed = 0.934645830576;
    msg.psi = 0.3260590489;

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
    msg.setTimeStamp(0.167244211155);
    msg.setSource(9703U);
    msg.setSourceEntity(11U);
    msg.setDestination(17928U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.615373848256;
    msg.lon = 0.562326467508;
    msg.depth = 107U;
    msg.speed = 0.17035344953;
    msg.psi = 0.236036258319;

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
    msg.setTimeStamp(0.278503146473);
    msg.setSource(18745U);
    msg.setSourceEntity(180U);
    msg.setDestination(33138U);
    msg.setDestinationEntity(228U);
    msg.label.assign("EPBPHUZFKPIGKQAEIJJLUPCCRFVVOALHCRTOQGJSSIEXELEYLWGKPBVDGBLOGKNDBXSPXMQQUJWVSUEHCNJOVFNFSSCBADSZAZHUZXSKRFLYCCQ");
    msg.lat = 0.554433349391;
    msg.lon = 0.0569188541269;
    msg.z = 0.227420873263;
    msg.z_units = 52U;
    msg.cog = 0.165360513361;
    msg.sog = 0.770344806623;

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
    msg.setTimeStamp(0.0809629261734);
    msg.setSource(17405U);
    msg.setSourceEntity(230U);
    msg.setDestination(5983U);
    msg.setDestinationEntity(24U);
    msg.label.assign("SHQXYSEXTZTHCLMSUCXXVOQRQOBYYVTPUHWULZZVODSACKWNZFSDNBZWNVCMPWPVYBBPXYHNEFFTFVPRIXZRNGVWZIFWOBNAIHBMUTMZUUCJXUDPEKDWCJGRLOLQCSMZGWVFSQCHKLEXPRMLNFUDADEMEHUWTIQLJYMGONAIRADGOKQTAYVBGKFYESDQJRTRNORJKCZIEHLDPCBGOTUDPJAKSNFLYXMAXBFJIPKQLOQKTWBR");
    msg.lat = 0.873654956844;
    msg.lon = 0.749124150336;
    msg.z = 0.304979656865;
    msg.z_units = 221U;
    msg.cog = 0.500381679195;
    msg.sog = 0.339420527605;

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
    msg.setTimeStamp(0.346394868093);
    msg.setSource(48409U);
    msg.setSourceEntity(12U);
    msg.setDestination(24415U);
    msg.setDestinationEntity(123U);
    msg.label.assign("SNNUDBTOTDPSZNFXCYKHPCLQATIZGDDBERSZVURSFJJJINVNTXRIVTLSFGIFKYPIGNVTUBQKAPOQMJXHDJVHWMOIKOAQICXGYXQJYQXCGEQDWDMSTFUMRYADZFMHBGJOGYXLCBI");
    msg.lat = 0.771160211918;
    msg.lon = 0.452058483548;
    msg.z = 0.727455646278;
    msg.z_units = 118U;
    msg.cog = 0.826885127194;
    msg.sog = 0.0441702411548;

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
    msg.setTimeStamp(0.957038399489);
    msg.setSource(41681U);
    msg.setSourceEntity(236U);
    msg.setDestination(47186U);
    msg.setDestinationEntity(243U);
    msg.name.assign("NOQDHKIGVLRKWRABZPVFXAUSDZQMUCGBEYYFIBLKYIHFTGZTHETSBUNVIJISJQFPWDBAJBGCJOFDUCNRDYIAHVCWOYLMXWJDNMPWTXQEXXFEOXTNDRPGDHNOASGRFFQQUFTQNJPTLYCYCCJLORQDMXRJHOIATVVUWZGWPZUXIWMVPSNJLNLSZBKOMMBLRKSSXOZUEAMACAKGRKZUVFGTDENERBVCXYQSWIOPHMYHTLJZCBQ");
    msg.value.assign("ETWVOWPHSRMEYAZGGIUUZTEXCRINODHPUUCHIRILXMCPBXVAEPWZQFJTTOFGDKENZBKGWGKONQNZVMHOUKVJXSFTTYZPYYBQYTSXAQELFRLMRILYSTSMPOPGZBGKVUKUUSCRCMDMDWAFVWHHANKBLGLEXXDHCCQXWFJNBLNYPSQYPAEKZVNXFQZLKIFOOIHCRHWLBPIMNJGJWHMSCSYEAJVDJDIBKFUEJDMTLTUQOGVZVXAJAAQNCIOBRDRQW");

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
    msg.setTimeStamp(0.339064314914);
    msg.setSource(5743U);
    msg.setSourceEntity(168U);
    msg.setDestination(13774U);
    msg.setDestinationEntity(92U);
    msg.name.assign("PHVBUGWRXCYSXDEENSMXJAQPFFPRFD");
    msg.value.assign("IPPFNKJNSTBGYIZYPEALZQFUBMOVIAHTSAXOPXQRFUBMHNCFVMLPVMRTYZCZJJWKDEGVUAXKSQPSYRRXYRAFCCQJGBEMZVJQHDYNGKIJWLUSPBVKVGTXMUBGIIREGQWAXPOXDWMASXHFZDNOIOZNEWEJHFSWNLXLOORNJCTHTTEZHOIBAULTYDGSDKDSUNNHYGAOSIVMOHBBHDQEMWCUFQCWWKYYXACVCLQWRZUQFRPLDMTTJFR");

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
    msg.setTimeStamp(0.349724962094);
    msg.setSource(13506U);
    msg.setSourceEntity(100U);
    msg.setDestination(25620U);
    msg.setDestinationEntity(110U);
    msg.name.assign("NLKDERSBXODXAMWKDKUHUDDYEMZWEIYXXSHMVKBWQVRZYUAICQFIIFWRMYWVSOWJLDFYRSNMVTCILONBAIZPOXCLLQSKRJWSBDTCZOIGLFVGXAEPUZYOY");
    msg.value.assign("CUILNYRXHFGLXFZIUHRJXNEXQYPXRXJAOQLQFQPVGWECTQBDGCGUPAFRUROEHGADMSJKAJDPPIMUJSMXSENINASQIWGMCBIUTMITLOFZCSDRCVKTXPFONCESDKVYRUBWHYWHMANKYGTVOVHPJWZYBMKLDIZKHQTAWOXQHTBDSYOCADUKOBFYLWVNQDPJURREVTAGYDBSVVFLZUPZS");

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
    msg.setTimeStamp(0.776870552998);
    msg.setSource(54300U);
    msg.setSourceEntity(48U);
    msg.setDestination(12560U);
    msg.setDestinationEntity(244U);
    msg.name.assign("APJAKAOKCGGCEXYCRHQTVHTHWZCQFNMRXTPZWBOOUQDQVSZSMVVJWNIBDYPPF");

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
    msg.setTimeStamp(0.716172854433);
    msg.setSource(56457U);
    msg.setSourceEntity(161U);
    msg.setDestination(65274U);
    msg.setDestinationEntity(69U);
    msg.name.assign("MGSEOQPHCQUPIVBZVKDFBIVBXVLFHTLDHPTSMTQSQWALSGGNNIUVQHSXCJXJXFWDTVKPIFCGUDFMQDALTOHRPIDQEBGWUQXXRTYFGORSWRYYCTVBKZULIWJXSOSKEMVPJFCXUJLJYPRLDFWRHHKZZXZBCOLUDCKITTSPGWACNRJNMDZYXYABUNMPQEZTYAEGKOHKICHGPUOMLLZZEOEEARHYK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DRKTOMJXUPLECYLXWIAENSFVUNBCQTQKBFCPQZCNHKUBUIAVEOEJJXXJFOTYLGDPXTQOHWGPFWPJXWGQHUKMY");
    tmp_msg_0.value.assign("QBJPPQIIHIFWNIHJNKRZHGGHZSZXADOQIYXOGTFYJKRUHKMIEXNKECVDJUMMTWNVOAACZSZQDRWWJRWFHLTQMQRCXMBGUYXFURHJXBVHSY");
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
    msg.setTimeStamp(0.508168660432);
    msg.setSource(32462U);
    msg.setSourceEntity(108U);
    msg.setDestination(2402U);
    msg.setDestinationEntity(90U);
    msg.name.assign("AYXGKIKKRXVNGRPWRVWSVOOXXWPUKVTJCXOGLGTQQDTHBROUESHLYEIPKGAESYRJLTWMZZAHVJEEQDQUNEHBEIFUAVMALDZPIFXXGLPQKDHYLDTYCWBWYINAMHNJNJJHPUYJSUFUNMCDCDABYTMOGOBBWWFQBZESQKLTRETSNDDJTVGHIXSXNFOUUNFSMOXINWCQRHRAVKOWZISMHCLBYQLTYZKSFCGFAMMZAJVGQCRLM");

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
    msg.setTimeStamp(0.0311991367836);
    msg.setSource(31340U);
    msg.setSourceEntity(230U);
    msg.setDestination(48596U);
    msg.setDestinationEntity(212U);
    msg.name.assign("MHENXFUJBKTJERYTEQXHVSTHOXCBXFGBNGTFZYREDWSQNHDGUMLDJBHLQAXLZOAZORNLCOEL");
    msg.visibility.assign("RLMPBTFIGBNTTZNCTCLATOEZXIVXIRLVAKHQVNEOYXKFHGPWXZZPYDEUJHAMCEJMNKTHWCBPBPGGLEIIDMCZFJQAROQCUCXVGOUTJFGOEJMBWALNPUACWNV");
    msg.scope.assign("JMFEPKLDOXLSPUWOPARDEWBXCRESHQJQOVANPMTIPLHWQHYFXPIKOSRKTFVVVEUMTJAMTADHABILDKHLUGKYNOKESLVGZSLJNUIMGCCBOBJETSRDGCBYRSGQFYGGNEHVTMAXRLRUEKYZXYHEVQWRYWDXLLBZFABZGUWZHTEFUOPCJQGMWBPPTDNBXMDQISURZVYGZCNXWQNRIXIMJOJXQFFTOCHJAKVNYHJSZFCI");

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
    msg.setTimeStamp(0.303649028697);
    msg.setSource(31271U);
    msg.setSourceEntity(66U);
    msg.setDestination(11446U);
    msg.setDestinationEntity(154U);
    msg.name.assign("EKXZATVVGXQUXUZQUQLSUPWTWOOHFSEAOZJQCYNSXKEYVFGMFLPKIDFJICMEHYBAMYCWPKHGMEUVKXHIELYBUWDMGHLGDQOKIRSTRLFPNMGZYBBKCQUOLTZRSCDEORXTNHRLMSUJZJHNLGBITWBKMRZAYSCALJDPCNDHRNPWFIODPJNZQOIEHWNBJJPSMFRVEBPWWADTSQDVXAIDCZAEWKXUQFTKIGTINV");
    msg.visibility.assign("QVLFATTWJLBIFJVHRXISRCHKZMEJWEGZBNBHSKKBNRWFWEPDEPJJURNTSHFPGXRESPFFCQZNGNWKDARELHUYXWSVDYTKYSWZXTDPCSLTKNUKMOQKMBIZDCLAUDGLZVMVTKMJNSCBBJDOPYXOIXEONHRXXTYPCIZAAIRHUGIMIGKAOOFUJGUQFODWWLEMACNZUJVPHBSMRHLQYYYRHCPXCUEGGXGQTZFTCSMJBIYVDZIQVOBELOPNMFVAVY");
    msg.scope.assign("SCVIOVGUIDXDRRGNVLAMIDPXMIEKNKBWMVGRSICOOZNYURLINEEDTHUQJTJHBDFMVQXPSZBKGWUUCPCCEBJCFLCWQPRFADMOMKQKIGBQVAPSRZJUOXGLVVNYMASESHPHQAFSTESDZLUCHNTEXTLGIEOPLOXGAUBFAZWQOAJJCZBLZWYXJDWRFFXZFTFBUAOKMTZIQDSJMWWTPLJWVHDZKNGTOYFS");

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
    msg.setTimeStamp(0.0718413338461);
    msg.setSource(57868U);
    msg.setSourceEntity(188U);
    msg.setDestination(51346U);
    msg.setDestinationEntity(63U);
    msg.name.assign("PQSGXGBUKHFSZQWJLILWAAHVYDPYIMNXUMORWHZGCPVBNSYTBVTLLNDPFOHENUBJWCRJFHREWALUBBNKDFSWTMSKNAVADRLSETRILRZXYMPGGJIEYAQURBX");
    msg.visibility.assign("URWLSTLDLCLGWLFJEAVFGICBHZQKXXOKOZSBRLMOMJYUBGBVDFCJCNXYJCMFEYNNEAOYOKDJPCIGESGXPNJZBFQVTIRQVOQVLJHTIJHBMAHPUMAHZHNSIWLQRQICYWXBBJMMDSTOWAFWXHIHNKOKTKIAYGRRGFEIYAWWTXGWRRNXTKCQUALCUYGHLSSAQPTUKPNYPPVVDXXMBDTKKRYUEMZQSESVNOBASOZCEJEMDFPGIPFDUDW");
    msg.scope.assign("WVUDLKZEWHBUOJKSKGDKIATNAJUMRHGZCFFUOIAAAPYRZTPXLWXZLJZXTFYPYXKBVPQULEBUOGFHHRWDOYHOHCTSREEXVHRBESWPCIZPXMITTYJKLUSKRYCIAXJXTFW");

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
    msg.setTimeStamp(0.638941835329);
    msg.setSource(26584U);
    msg.setSourceEntity(254U);
    msg.setDestination(17493U);
    msg.setDestinationEntity(148U);
    msg.name.assign("ISGQCUPTTLUHBIKEXZFWYXHSGFNKMYTPAMROBPFOQLXCMTRUMYPAQZNMNRGCGKLIWIHAVWKSYOKEOVPCBXQCONJBVBGCQQAADIEKIDOIHAYTEYSGHLNUTKJCVDBEJGLFUEKDCZBAFLHOOREFYUVAZFXPUYQWZHEAEBWSMXFDGNRNUHVJJNVDXJMCSHJOQLDVBLTISRTEQGLPUSRTBDWITHWKZJNDPPYQRZXWWJ");

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
    msg.setTimeStamp(0.847609085301);
    msg.setSource(26329U);
    msg.setSourceEntity(193U);
    msg.setDestination(37785U);
    msg.setDestinationEntity(84U);
    msg.name.assign("UEZKTTQXZAOEFCFLQDXRGPKCQKGMAUDXYSLKWYERUWQMLBGAOTMAECYECUKXIYSFNZUTPWMHVMPBYWXIAPYDHXOHNQOFIBZFIYRCYHDSQUFVNJRCNTELPZEXEGISWVGMNHVALPXAZVRXVYBMRGAPGJFITJSDFONSOEBQHRWHVDVOKPKIZAJDBVPGKBLSUBCZR");

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
    msg.setTimeStamp(0.51946956616);
    msg.setSource(58981U);
    msg.setSourceEntity(160U);
    msg.setDestination(4912U);
    msg.setDestinationEntity(21U);
    msg.name.assign("ZHJWQXOAXKDVMMVBXLPBXACFPLHKEEXNZIVYFQAUQNOHGRFQICAWEYKIBJIVITCNGARZYRSHTNYYJSPFTAEZNALBJPSTFBYGYABCXUWPTVVXUPSZSHESBGCZJSJKOUVKRZPRQCDHWWLDFTVTWYUQVWEWWNSSNUIMUUZJJUUPF");

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
    msg.setTimeStamp(0.263805269106);
    msg.setSource(774U);
    msg.setSourceEntity(42U);
    msg.setDestination(48956U);
    msg.setDestinationEntity(9U);
    msg.name.assign("QZERATPZMPGKRYDEDRUVOQWDIPCNFOGDKOIIJBGIQNLRMLCQUAMNTAMVAXBKPAYITOTXBKCQJJXTFFCNWGBCGXOHNVAVGXNILESDCSIPMHJSZQHJJXEQIRYTCSYWDAZYZSNBMLVDKDFYPPCSKFHWHXWKVUSXNUOLSMLKHFHPLSYBBEFZUTYVEJMDNGLWAVHZOWTEWNYFHDUVWSZJPOLMMQPKCQAOCZTGYUUFRRKWEFUBEXRRJUJBLOIER");

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
    msg.setTimeStamp(0.490509364359);
    msg.setSource(49857U);
    msg.setSourceEntity(49U);
    msg.setDestination(62461U);
    msg.setDestinationEntity(68U);
    msg.name.assign("GJWSPPQNBEHPZCLIGDDYDFYEHQSVOWLIMCWSHMDXOTBVJEIFJWDXLTYDGZMRCZEKLLUGLKNYAPDHWAXQRXJEZCRKIENRHVOITBMITFKNSRWUNXMBMUMPJJSZGTAKCNBOXVQEHKCHALPKNLFEWIQUYMOIBFBCRZPAXCBSXLQEVTKDWUFXJJJULVTAAUQWHUHTNXVGZSAZPRASMMDOOUEKQWYRUZCBIDFGFFVTRTHFONJPYGZS");

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
    msg.setTimeStamp(0.686566581116);
    msg.setSource(47546U);
    msg.setSourceEntity(65U);
    msg.setDestination(46884U);
    msg.setDestinationEntity(27U);
    msg.name.assign("PPEIQQUNYWAOQVHES");

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
    msg.setTimeStamp(0.267131147899);
    msg.setSource(46592U);
    msg.setSourceEntity(38U);
    msg.setDestination(43668U);
    msg.setDestinationEntity(204U);
    msg.timeout = 1002616730U;

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
    msg.setTimeStamp(0.0750614332755);
    msg.setSource(2469U);
    msg.setSourceEntity(238U);
    msg.setDestination(33917U);
    msg.setDestinationEntity(47U);
    msg.timeout = 4082029422U;

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
    msg.setTimeStamp(0.554592906143);
    msg.setSource(7231U);
    msg.setSourceEntity(192U);
    msg.setDestination(12650U);
    msg.setDestinationEntity(5U);
    msg.timeout = 1409358884U;

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
    msg.setTimeStamp(0.730570010349);
    msg.setSource(3959U);
    msg.setSourceEntity(65U);
    msg.setDestination(42376U);
    msg.setDestinationEntity(114U);
    msg.sessid = 3319065038U;

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
    msg.setTimeStamp(0.168679205562);
    msg.setSource(8969U);
    msg.setSourceEntity(6U);
    msg.setDestination(26797U);
    msg.setDestinationEntity(127U);
    msg.sessid = 1646617653U;

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
    msg.setTimeStamp(0.702268015925);
    msg.setSource(38736U);
    msg.setSourceEntity(187U);
    msg.setDestination(62203U);
    msg.setDestinationEntity(180U);
    msg.sessid = 3041223738U;

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
    msg.setTimeStamp(0.676365734468);
    msg.setSource(48129U);
    msg.setSourceEntity(229U);
    msg.setDestination(30921U);
    msg.setDestinationEntity(76U);
    msg.sessid = 2005643733U;
    msg.messages.assign("QKDFQRGCSGECJPJIXOFCLYKILKHXSDZWKPPFCTELVLDCNZCFWURVCQJLIGQTCHBSPDDKXZSLMTNQDHXRZTAHZBVFURUPFEZMUNYSSGEDWMWOXIEHOJVSJTLGKABWRTMADFFCUEIOGABBSJFTZLNHRRKPBIIVAQIJCNPMEVYMYZYGXAWDXXOIKNOAXHU");

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
    msg.setTimeStamp(0.168684611243);
    msg.setSource(61182U);
    msg.setSourceEntity(128U);
    msg.setDestination(44259U);
    msg.setDestinationEntity(67U);
    msg.sessid = 3230638642U;
    msg.messages.assign("DXSSVPHDTJUIDYJXZOLGPLZR");

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
    msg.setTimeStamp(0.819669287603);
    msg.setSource(41233U);
    msg.setSourceEntity(186U);
    msg.setDestination(34052U);
    msg.setDestinationEntity(50U);
    msg.sessid = 3573761733U;
    msg.messages.assign("POLGBPJSZMKHVCBMXUMMCHQTWZNQUOVJGEMUAWX");

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
    msg.setTimeStamp(0.919676929495);
    msg.setSource(15510U);
    msg.setSourceEntity(252U);
    msg.setDestination(42953U);
    msg.setDestinationEntity(80U);
    msg.sessid = 3168022165U;

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
    msg.setTimeStamp(0.0791659091629);
    msg.setSource(40024U);
    msg.setSourceEntity(126U);
    msg.setDestination(33541U);
    msg.setDestinationEntity(234U);
    msg.sessid = 2555905098U;

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
    msg.setTimeStamp(0.465073653589);
    msg.setSource(19515U);
    msg.setSourceEntity(222U);
    msg.setDestination(12422U);
    msg.setDestinationEntity(250U);
    msg.sessid = 1191046857U;

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
    msg.setTimeStamp(0.979565775892);
    msg.setSource(49488U);
    msg.setSourceEntity(215U);
    msg.setDestination(5749U);
    msg.setDestinationEntity(241U);
    msg.sessid = 76708861U;
    msg.status = 114U;

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
    msg.setTimeStamp(0.95289940818);
    msg.setSource(8995U);
    msg.setSourceEntity(10U);
    msg.setDestination(38177U);
    msg.setDestinationEntity(8U);
    msg.sessid = 845142594U;
    msg.status = 126U;

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
    msg.setTimeStamp(0.0124355609628);
    msg.setSource(56312U);
    msg.setSourceEntity(73U);
    msg.setDestination(3934U);
    msg.setDestinationEntity(190U);
    msg.sessid = 3299125906U;
    msg.status = 123U;

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
    msg.setTimeStamp(0.863072266099);
    msg.setSource(33369U);
    msg.setSourceEntity(49U);
    msg.setDestination(36983U);
    msg.setDestinationEntity(23U);
    msg.name.assign("HQYFZYKDTWQJRYDRGERRVHDAATVYHXIKZWOLWGWRUCMMFHHXATFYCBSQDEBZTBHSVTDBCIFJLYSNNGGPNNTSCXLAYHNFPKARIYDQRLPCHTMPHLDZPCQPAFTFXLUBVWQFMMJSIRY");

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
    msg.setTimeStamp(0.108661716474);
    msg.setSource(28806U);
    msg.setSourceEntity(158U);
    msg.setDestination(56831U);
    msg.setDestinationEntity(87U);
    msg.name.assign("XOAYRKQADEQOSXORXASQITVVMF");

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
    msg.setTimeStamp(0.491521036529);
    msg.setSource(16571U);
    msg.setSourceEntity(86U);
    msg.setDestination(17355U);
    msg.setDestinationEntity(216U);
    msg.name.assign("DMADLSOAQFRHFOHGJYTPKMIVZQNMZDFPDYZFPZUIYXOAKJSOPRYUSTREKMUDGSUWAEGLWCOEXZXQYHWTXIAVGDQTUKFKQYVOBJNRXYOMMCPPYKBJSRNIUPIXXZVQE");

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
    msg.setTimeStamp(0.03638997385);
    msg.setSource(64253U);
    msg.setSourceEntity(33U);
    msg.setDestination(50675U);
    msg.setDestinationEntity(214U);
    msg.name.assign("YDAIIJYHXQKJGWCD");

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
    msg.setTimeStamp(0.27903713758);
    msg.setSource(7902U);
    msg.setSourceEntity(42U);
    msg.setDestination(54419U);
    msg.setDestinationEntity(176U);
    msg.name.assign("KSEUJKVVXIBDJELMZKIZWP");

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
    msg.setTimeStamp(0.00834620901205);
    msg.setSource(4815U);
    msg.setSourceEntity(147U);
    msg.setDestination(62054U);
    msg.setDestinationEntity(59U);
    msg.name.assign("DTHREZIATJHOHFNBHHAWIYWVHIBFKVTGDERXDGVBVZLUYWJWFCVJOMYHBVYILGYQEXSFKKTOOYRPJNLXBCPVDIZQCSTDCHIAHRQNRMMTUFZJXMNOXMJLPWDJANJMOCBVBUGKACQBARAPGURZRHEDSQSWJSPPAOUTETKUVGQXTUBEMIPOQMCZYSEXWQJZCKX");

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
    msg.setTimeStamp(0.913213686262);
    msg.setSource(44302U);
    msg.setSourceEntity(146U);
    msg.setDestination(61824U);
    msg.setDestinationEntity(99U);
    msg.type = 115U;
    msg.error.assign("DVPKCEKOCZNKSBXZQLZMCDVAXIVRSFJSOLPBYAXZHNLHTUWPYMKYFATXXNBFUIUJDFCGMCXWYDIWSOSFKRAGYMSEHWNPJISDBZEGEZLPSONIQWOMZFHPHKLGFAVBLHWKIVNZLNGTIAREETJGYJJTWKMEDQSB");

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
    msg.setTimeStamp(0.379943360092);
    msg.setSource(26964U);
    msg.setSourceEntity(185U);
    msg.setDestination(4772U);
    msg.setDestinationEntity(142U);
    msg.type = 227U;
    msg.error.assign("EOIUKIZFYRCATGYPAZXJNOYHV");

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
    msg.setTimeStamp(0.404628092089);
    msg.setSource(18178U);
    msg.setSourceEntity(102U);
    msg.setDestination(11086U);
    msg.setDestinationEntity(203U);
    msg.type = 19U;
    msg.error.assign("ATBZFICPZBKYKJUVETDPRTNBNGRWILWQLNKTKYHTGYEZVOJOWHSXMUYLRFEGYZOMCOAUVFDNDYGXILLWGCAIRBHDFVAODFJZKVUQSFYBKTPJTAMVNQIODSFSIQLAMEN");

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
    msg.setTimeStamp(0.714799814719);
    msg.setSource(22209U);
    msg.setSourceEntity(72U);
    msg.setDestination(60275U);
    msg.setDestinationEntity(237U);
    msg.seq = 59769U;
    msg.sys_dst.assign("NYAQZIBVAJERSSLHDYDTJCAJZDNCEVICPWFMQAGLAYCWHLMTQVUJOCZEPRWJVDNFMKGNOYLONNAWWKELYBTAIIOPKMTLVDCAQWMKHMHTJSJMDEYKZRURRTEFFNBEWUQOBKYRSIUFXQPKXPHHWZYGSBBVZDXGLYNQQTXOPMEVFICPJARKRUIEGZFLBNHBTJFOCPGXPVMRBTSXOSLKO");
    msg.flags = 119U;
    const char tmp_msg_0[] = {10, 97, -13, -19, -64, -73, 46, 93, 31, 65, -57, 91, -5, -88, -56, -71, -95, 18, -34, -125, -111, 33, -28, -20, -117, 55, -89, -22, 47, -33, -117, -78, -97, 76, 121, -83, -42, -77, -78, 55, 41, -113, -25, -25, 64, -6, -43, -99, 8, -65, -40, -72, -78, 27, 79, -124, -84, 69, 102, -6, 104, -13, 109, -12, 119, -68, 17, 5, -107, -108, -72, 67, -103, 24, -56, -28, 6, 104, -79, -127, 99, 16, 126, -102, -12, -67, -8, -11, -45, 52, -54, 119, 100, -19, -114, -28, 14, 2, -38, -86, 104, -32, -75, -46, -72, -106, 56, -26, 2, 13, 50, 38, 38, 92, 48, -127, -105, 20, 114, 36, -81, 39, 120, 117, 43, 26, -10, 38, -60, -61, -34, -115, 89, 90, 57, -13, 115, -67, -69, -24, 93, 33, -11, 48, 19, -101, 68, -86, -57, -57, 85, -126, -23, 115, -104, -117, 0, 22, -65, -112, -56, 63, 107, 71, -99, -24, 34, 97, 125, -37, 11, 30, 17, -49, 56, -76, 79, -60, -73, 99, 121, -127, -77, -25, -108};
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
    msg.setTimeStamp(0.835114649959);
    msg.setSource(52081U);
    msg.setSourceEntity(114U);
    msg.setDestination(37157U);
    msg.setDestinationEntity(167U);
    msg.seq = 61268U;
    msg.sys_dst.assign("AUOCWXFGLKIXMWFEEBBHUAWJKBXNHSSIGZOJEPMNHQATNGEJKYKKXYRUOYHONRCHFPTRAPWLEY");
    msg.flags = 78U;
    const char tmp_msg_0[] = {-102, -25, -124, -108, -2, -74, 56, -50, 0, -12, 73, 10, 38, -67, 111, 79, -117, 72, -39, -27, 122, 84, 40, -80, 100, -7, 123, 117, -40, 41, -3, -126, 100, 75, -40, -45, -69, 61, -16, 90, -10, -40, 70, 122, -94, 8, -2, -93, 48, 13, 83, 52, 23, -26, 67, -118, -11, -57, 62, -45, -124, 5, -45, -117, -12, -66, -39, -124, -118, -8, -112, -111, -4, -14, -51, 88, 19, -108, -94, 73, -102, 85, -97, 109, 1, 90, 103, 1, 77, -20, 96, -66, 79, -14, -115, 65, 47, -1, 119, -58, 99, 70, 121, 50, 24, -73, -16, 71, 80, -64, -45, 63, -39, -95, -77, 95, 4, 3, 24, -100, 8, 50, -8, 37, 4, -103, 96, -88, -18, -79, 40, -89, -33, -54, 8, -7, -39, -81, -72, -99, 39, -54, -102, -29, -85, 85, -80, 43, -62, 114, 104, 7, 76, 30, 80, 40, -53, 123, -98, -40, -71, 28, -124, 106, -61, -32, 99, 120, 60, -36, 32, -57, 64, -26, -24};
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
    msg.setTimeStamp(0.562285298344);
    msg.setSource(1862U);
    msg.setSourceEntity(200U);
    msg.setDestination(31549U);
    msg.setDestinationEntity(205U);
    msg.seq = 10600U;
    msg.sys_dst.assign("OQGNLECIAVOOZMLHUAPMUIMNZSWNDRJQVMTQOUTCJFTVZXIKIUEWPDHQUJBTTBWTUDNGLBOW");
    msg.flags = 175U;
    const char tmp_msg_0[] = {-10, -68, 121, 24, 79, 111, 20, 34, 71, -27, -118, 72, 27, -121, -80, 28, -44, -108, 104, 111, -22, 79, 20, 21, -117, 56, 50, -109, 7, 10, -43, 103, -37, -128, 114, -101, 121, 47, 55, -64, 107, 64, -100, 112, 43, -66, 48};
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
    msg.setTimeStamp(0.858650969518);
    msg.setSource(47956U);
    msg.setSourceEntity(157U);
    msg.setDestination(15318U);
    msg.setDestinationEntity(149U);
    msg.sys_src.assign("PNXUYHLTHIOPFEYOEDGEYRVAWWXWKDXSTVLGCXMROLNCKVFBBNIWGJXAFZVBIKDAMUBGIMFQ");
    msg.sys_dst.assign("HXVFDWGNKJFULDSMMPCZUZAVNRPXHLSUFSUZAUKERXDXZTQBMCSYVNQUKXVEVLAWJLOXCSBOGSPAWXNJYHVHKEBRQZ");
    msg.flags = 159U;
    const char tmp_msg_0[] = {-62, -24, 70, -27, 33, -108, 39, 123, -112, 0, -100, -6, 0, -19, -123, 41, -58, -2, 117, -95, 79, 119, 2, -123, -18, -74, -31, 26, 118, 79, -68, 43, -74, -80, -37, -16, 119, 49, 87, 61, 7, 39, 77, 5, 94, 93, -127, 36, 72, 20, 114, 30, -7, -82, -107, -91, 73, -15, -51, -57, 13, -124, -77, -88, -47, -44, -67, 111, 2, 27, -23, 110, -58, 44, -26, -14, -80, 69, -125, -10, -33, 33, 108, 73, -49, 28, 22, -6, -61, 41, -23, -59, 31, 64, -36, 15, 90, 4, -13, -75, -57, -54, 68, -29, 93, -81, 88, 60, 57, -33, 104, 22, -40, -105, -72, -13, 102, 98, 100, -20, -19, 98, -103, 43, 46, 111, 88, -89, 29, 85, -84, -25, 106, 11, 101, 31, 17, 31, 98, -91, -35, 47, 1, 101, 32, -86, 114, -48, -116, 14, 88, 49, 83, 111, 41, 69, -30, 44, -83, 3, 29, 110, -47, 41, 29, 47, -87, 56, -100, 19, -1, -117, -11, -84, -119, 91, 96, 111, 54, -27, 106, 115, 28, -47, -97, -47, 83, -128, 47, 107, -50, 45, 29, 78, -34, 73, 47, -12, -81, -40, -98, 70, -116, 25, 4, -40, 113, -125, -25, 38, -109, -115, 95, -39, 34, -127, 25, -8, 126, 50, -37, -54, 109, 95, 105, -38, -63, -10, -28, -108, 86, -101, 91, -91, 4, -1, -29};
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
    msg.setTimeStamp(0.0396768222664);
    msg.setSource(63134U);
    msg.setSourceEntity(80U);
    msg.setDestination(19338U);
    msg.setDestinationEntity(104U);
    msg.sys_src.assign("WQUYAMQEROSQNAINZXMPNYUVKNBBMMKVSHRFGLWESBPN");
    msg.sys_dst.assign("AWDEGDJJSVKULYXIBQKXIXDCUSWPXAWRVPWAYVJTOGOQGLKJWMZVRFZMDYDAWJSYIBQTFHOFXUBTXXEBIEDQAZLLAICPYZAMPFUHROPQUSROZHVSTBRWCBPTMCKUJLZRMNGHQECPQKCTOYHPEUUIYKGLAJZMHVFIMEOYVILWSBNMCJCQKHLGDXANFIWRRSLZTNSDGWSGPNQGOBNNTLXHPOKFJ");
    msg.flags = 30U;
    const char tmp_msg_0[] = {78, -99, 114, -84, 14, 95, 120, -27, 63, 35, -110, 101, -74, 3, 61, 110, 56, -67, 65, -106, -128, -82, 75, 21, -121, -123, 90, 86, 46, 31, -32, -70, -57, 84, 22, 78, 122, -9, 95, 97, 56, 110, 31, 122, -74, -70, -46, 55, 59, -25, 52, -125, 37, -27, -100, 22, 57, 43, -44, 123, -123, 58, -84, 99, 98, -22, -72, 18, 10, -83, 72, 93, 17, -22, -51, 98, -1, -43, 4, 62, 44, -30, -14, -72, -13, 98, -91, -55, -94, -89, -91, 31, -128, -91, 21, -49, -7, -109, -106, 39, 34, -44, 113, -98, -4, 71, 76, -50, -3, 78, 91, 44, 38, -115, 23, 94, -94, -17, -66, -94, -103, -96, -30, 28, 91, -48, -117, 123, -92, 94};
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
    msg.setTimeStamp(0.143426085435);
    msg.setSource(443U);
    msg.setSourceEntity(183U);
    msg.setDestination(51597U);
    msg.setDestinationEntity(193U);
    msg.sys_src.assign("EUXTERJLSCMMCUBUZWLWOSJHZRCPREZNKQCPVMTSXJWYIMIPEDJMJSLGEWHAUDKVTDDRYGVLSRTAYGUKKBWOZKGLZNOVHHAKTXDXHNEMUFDLRUOFLHFTFBQWDBOVYSBYBQRRAQGWQYNOHGPKJYBGKXRLAOJTNOCZUNNJEFFCOZMMPXGQUEBTIMPSAAPONJQPAPICKFAEGQXVYIAYPZSXFBW");
    msg.sys_dst.assign("EGNYMMVKROFWYPZAAJVM");
    msg.flags = 139U;
    const char tmp_msg_0[] = {36, 81, 114, -61, 65, 117, -28, 117, -90, -113, -21, -114, 125, 48, 37, 112, 43, 97, -11, 9, -39, -76, 93, -96, 16, -90, -101, -5, -5, -54, 74, -98, -111, -11, 71, -21, 96, 39, 19, -76, -55, 119, -117, 125, -61, 74, 111, -31, -121, -63, -125, 42, -2, -20, 28, -33, 26, -48};
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
    msg.setTimeStamp(0.351435386944);
    msg.setSource(21256U);
    msg.setSourceEntity(2U);
    msg.setDestination(53824U);
    msg.setDestinationEntity(57U);
    msg.seq = 41864U;
    msg.value = 100U;
    msg.error.assign("FKCKCXVWHPOCYEGRBRYWNFODIZLQTRXPSHWGVJNBEXYSZFWJYXNMZAMTV");

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
    msg.setTimeStamp(0.260983175844);
    msg.setSource(55300U);
    msg.setSourceEntity(237U);
    msg.setDestination(37193U);
    msg.setDestinationEntity(162U);
    msg.seq = 62408U;
    msg.value = 153U;
    msg.error.assign("GUOLLFAQWKIKFAWESBDCJHNZEAWROQEGTYGCBQXIJIWEYBTUVRPX");

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
    msg.setTimeStamp(0.00180653920082);
    msg.setSource(24608U);
    msg.setSourceEntity(110U);
    msg.setDestination(14372U);
    msg.setDestinationEntity(212U);
    msg.seq = 57280U;
    msg.value = 220U;
    msg.error.assign("GTRHHMQSVKVDOYGWCZNIRAGOA");

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
    msg.setTimeStamp(0.680710807944);
    msg.setSource(58640U);
    msg.setSourceEntity(19U);
    msg.setDestination(58281U);
    msg.setDestinationEntity(100U);
    msg.seq = 35598U;
    msg.sys.assign("SEFAMMPKPUUKVZJPEPFYXWDJSMFWVRLASJLZPFWOBZXTPBSOYZAEFGNHVORUHTDGGOOIWIXOONRTLQTLTJWCZMCYXKWZIYSQQVEOGCTVRNUVMHMZSAQVTZPCUCDPXUGEEWTRKCMRVDAIDTYYGRRJXFMYFHF");
    msg.value = 0.292967234585;

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
    msg.setTimeStamp(0.872783208126);
    msg.setSource(55631U);
    msg.setSourceEntity(139U);
    msg.setDestination(24771U);
    msg.setDestinationEntity(50U);
    msg.seq = 39939U;
    msg.sys.assign("RHPJDBQARFPAMUQPTPMQZIVHSWEOSZAF");
    msg.value = 0.378398349598;

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
    msg.setTimeStamp(0.0628889369083);
    msg.setSource(40842U);
    msg.setSourceEntity(58U);
    msg.setDestination(8583U);
    msg.setDestinationEntity(95U);
    msg.seq = 6254U;
    msg.sys.assign("RTVRXXDLZSJWNZKGTLLOMDDZSRMZEMAWFEAODYOGOETW");
    msg.value = 0.796947101446;

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
    msg.setTimeStamp(0.376415264181);
    msg.setSource(30980U);
    msg.setSourceEntity(84U);
    msg.setDestination(51563U);
    msg.setDestinationEntity(47U);
    msg.action = 54U;
    msg.longain = 0.977186841485;
    msg.latgain = 0.627987115868;
    msg.bondthick = 2222061043U;
    msg.leadgain = 0.297962126757;
    msg.deconflgain = 0.504092459817;

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
    msg.setTimeStamp(0.686951631514);
    msg.setSource(64378U);
    msg.setSourceEntity(96U);
    msg.setDestination(60191U);
    msg.setDestinationEntity(173U);
    msg.action = 93U;
    msg.longain = 0.412162191427;
    msg.latgain = 0.0657497823043;
    msg.bondthick = 2318287253U;
    msg.leadgain = 0.306348247767;
    msg.deconflgain = 0.639203649895;

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
    msg.setTimeStamp(0.737256484821);
    msg.setSource(29836U);
    msg.setSourceEntity(184U);
    msg.setDestination(514U);
    msg.setDestinationEntity(254U);
    msg.action = 12U;
    msg.longain = 0.394169963025;
    msg.latgain = 0.425613457608;
    msg.bondthick = 360353343U;
    msg.leadgain = 0.475916801546;
    msg.deconflgain = 0.612557665766;

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
    msg.setTimeStamp(0.577703571886);
    msg.setSource(4951U);
    msg.setSourceEntity(108U);
    msg.setDestination(48979U);
    msg.setDestinationEntity(101U);
    msg.err_mean = 0.734014096206;
    msg.dist_min_abs = 0.839847296818;
    msg.dist_min_mean = 0.393967758839;

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
    msg.setTimeStamp(0.370558233026);
    msg.setSource(51523U);
    msg.setSourceEntity(107U);
    msg.setDestination(22678U);
    msg.setDestinationEntity(49U);
    msg.err_mean = 0.91757902496;
    msg.dist_min_abs = 0.121117596778;
    msg.dist_min_mean = 0.174699786305;

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
    msg.setTimeStamp(0.44390902357);
    msg.setSource(18800U);
    msg.setSourceEntity(53U);
    msg.setDestination(17049U);
    msg.setDestinationEntity(229U);
    msg.err_mean = 0.557769516587;
    msg.dist_min_abs = 0.0686684170601;
    msg.dist_min_mean = 0.936759008508;

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
    msg.setTimeStamp(0.821201657168);
    msg.setSource(28838U);
    msg.setSourceEntity(7U);
    msg.setDestination(41777U);
    msg.setDestinationEntity(38U);
    msg.action = 19U;
    msg.lon_gain = 0.948846693441;
    msg.lat_gain = 0.917105768709;
    msg.bond_thick = 0.411759601378;
    msg.lead_gain = 0.794986859014;
    msg.deconfl_gain = 0.961823422233;
    msg.accel_switch_gain = 0.81244535922;
    msg.safe_dist = 0.397654372739;
    msg.deconflict_offset = 0.399899103781;
    msg.accel_safe_margin = 0.827690162586;
    msg.accel_lim_x = 0.0408665484825;

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
    msg.setTimeStamp(0.567039281554);
    msg.setSource(2090U);
    msg.setSourceEntity(5U);
    msg.setDestination(27404U);
    msg.setDestinationEntity(190U);
    msg.action = 199U;
    msg.lon_gain = 0.541591463764;
    msg.lat_gain = 0.0370255182978;
    msg.bond_thick = 0.69314339;
    msg.lead_gain = 0.646763479124;
    msg.deconfl_gain = 0.633614790861;
    msg.accel_switch_gain = 0.262889124977;
    msg.safe_dist = 0.349667406733;
    msg.deconflict_offset = 0.807958456302;
    msg.accel_safe_margin = 0.473248685042;
    msg.accel_lim_x = 0.22907769737;

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
    msg.setTimeStamp(0.798975134739);
    msg.setSource(3448U);
    msg.setSourceEntity(181U);
    msg.setDestination(6054U);
    msg.setDestinationEntity(47U);
    msg.action = 174U;
    msg.lon_gain = 0.916762205251;
    msg.lat_gain = 0.104295590763;
    msg.bond_thick = 0.37102822944;
    msg.lead_gain = 0.0195545789922;
    msg.deconfl_gain = 0.195974173029;
    msg.accel_switch_gain = 0.236724069885;
    msg.safe_dist = 0.725623289724;
    msg.deconflict_offset = 0.812849025504;
    msg.accel_safe_margin = 0.525012013048;
    msg.accel_lim_x = 0.488526138363;

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
    msg.setTimeStamp(0.764573542963);
    msg.setSource(30314U);
    msg.setSourceEntity(75U);
    msg.setDestination(22607U);
    msg.setDestinationEntity(119U);
    msg.type = 126U;
    msg.op = 109U;
    msg.err_mean = 0.722861117829;
    msg.dist_min_abs = 0.661450764575;
    msg.dist_min_mean = 0.623038921261;
    msg.roll_rate_mean = 0.876253166392;
    msg.time = 0.106478735647;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 206U;
    tmp_msg_0.lon_gain = 0.701674436405;
    tmp_msg_0.lat_gain = 0.0550955439301;
    tmp_msg_0.bond_thick = 0.230992311692;
    tmp_msg_0.lead_gain = 0.526880443359;
    tmp_msg_0.deconfl_gain = 0.556542739589;
    tmp_msg_0.accel_switch_gain = 0.525875140262;
    tmp_msg_0.safe_dist = 0.365541811069;
    tmp_msg_0.deconflict_offset = 0.880685890149;
    tmp_msg_0.accel_safe_margin = 0.534782865294;
    tmp_msg_0.accel_lim_x = 0.856209697647;
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
    msg.setTimeStamp(0.0829071381401);
    msg.setSource(28959U);
    msg.setSourceEntity(43U);
    msg.setDestination(34197U);
    msg.setDestinationEntity(2U);
    msg.type = 23U;
    msg.op = 165U;
    msg.err_mean = 0.853850402485;
    msg.dist_min_abs = 0.735186748395;
    msg.dist_min_mean = 0.256488606094;
    msg.roll_rate_mean = 0.678764138101;
    msg.time = 0.692205541792;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 177U;
    tmp_msg_0.lon_gain = 0.123890183233;
    tmp_msg_0.lat_gain = 0.920285376759;
    tmp_msg_0.bond_thick = 0.604654178979;
    tmp_msg_0.lead_gain = 0.228239880596;
    tmp_msg_0.deconfl_gain = 0.0430282636743;
    tmp_msg_0.accel_switch_gain = 0.0525585614511;
    tmp_msg_0.safe_dist = 0.89388612099;
    tmp_msg_0.deconflict_offset = 0.167982935162;
    tmp_msg_0.accel_safe_margin = 0.665088968029;
    tmp_msg_0.accel_lim_x = 0.941426494301;
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
    msg.setTimeStamp(0.181957919005);
    msg.setSource(1328U);
    msg.setSourceEntity(221U);
    msg.setDestination(58704U);
    msg.setDestinationEntity(120U);
    msg.type = 85U;
    msg.op = 66U;
    msg.err_mean = 0.320195563496;
    msg.dist_min_abs = 0.461316699988;
    msg.dist_min_mean = 0.72994547249;
    msg.roll_rate_mean = 0.84947182072;
    msg.time = 0.902660120973;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 254U;
    tmp_msg_0.lon_gain = 0.0834768906034;
    tmp_msg_0.lat_gain = 0.214437956032;
    tmp_msg_0.bond_thick = 0.259600713327;
    tmp_msg_0.lead_gain = 0.127580547197;
    tmp_msg_0.deconfl_gain = 0.94150351048;
    tmp_msg_0.accel_switch_gain = 0.317749903228;
    tmp_msg_0.safe_dist = 0.207621128706;
    tmp_msg_0.deconflict_offset = 0.57546252212;
    tmp_msg_0.accel_safe_margin = 0.197000830371;
    tmp_msg_0.accel_lim_x = 0.449595171241;
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
    msg.setTimeStamp(0.935363412088);
    msg.setSource(48058U);
    msg.setSourceEntity(14U);
    msg.setDestination(46217U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.626966368122;
    msg.lon = 0.663409002945;
    msg.eta = 2352664050U;
    msg.duration = 19833U;

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
    msg.setTimeStamp(0.233759879187);
    msg.setSource(2184U);
    msg.setSourceEntity(18U);
    msg.setDestination(5211U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.763698826136;
    msg.lon = 0.0361427032583;
    msg.eta = 3609437952U;
    msg.duration = 40548U;

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
    msg.setTimeStamp(0.333042404429);
    msg.setSource(32524U);
    msg.setSourceEntity(232U);
    msg.setDestination(19833U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.98070014515;
    msg.lon = 0.978613888827;
    msg.eta = 564495897U;
    msg.duration = 22121U;

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
    msg.setTimeStamp(0.689273866833);
    msg.setSource(22525U);
    msg.setSourceEntity(84U);
    msg.setDestination(48973U);
    msg.setDestinationEntity(241U);
    msg.plan_id = 11318U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.435083870173;
    tmp_msg_0.lon = 0.0898232678513;
    tmp_msg_0.eta = 1530096188U;
    tmp_msg_0.duration = 7967U;
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
    msg.setTimeStamp(0.198337819332);
    msg.setSource(17060U);
    msg.setSourceEntity(82U);
    msg.setDestination(33213U);
    msg.setDestinationEntity(173U);
    msg.plan_id = 36796U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.321471662768;
    tmp_msg_0.lon = 0.20274707147;
    tmp_msg_0.eta = 3730371139U;
    tmp_msg_0.duration = 37240U;
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
    msg.setTimeStamp(0.458919821122);
    msg.setSource(13081U);
    msg.setSourceEntity(248U);
    msg.setDestination(36740U);
    msg.setDestinationEntity(193U);
    msg.plan_id = 23294U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.0614360832225;
    tmp_msg_0.lon = 0.827297180532;
    tmp_msg_0.eta = 4044933017U;
    tmp_msg_0.duration = 35593U;
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
    msg.setTimeStamp(0.338640519716);
    msg.setSource(23016U);
    msg.setSourceEntity(162U);
    msg.setDestination(24758U);
    msg.setDestinationEntity(139U);
    msg.type = 224U;
    msg.command = 54U;
    msg.settings.assign("RJDVTRPVRQXUOGUXOUPHWVZEZDOBSKKAEVNTISVNASRXFCATMNRTBBWIGDGFGRAFKNUBVG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 50860U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.325173347308;
    tmp_tmp_msg_0_0.lon = 0.246782852757;
    tmp_tmp_msg_0_0.eta = 917435686U;
    tmp_tmp_msg_0_0.duration = 37564U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("QEXGRNTWNGMQZPJVOJUDSWKYXOSKQMAHBWQMIOSZUEGPKYEUWSVOKITDPCAVMAFUVJSXLTMDGVHXXBRJGVYHJNZRYDAMLNPOBYIWDIJBXZKRFUBYCLFZSLNVCZGFNTRPWQCIBMAHRLJDSK");

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
    msg.setTimeStamp(0.414402397881);
    msg.setSource(57982U);
    msg.setSourceEntity(16U);
    msg.setDestination(864U);
    msg.setDestinationEntity(57U);
    msg.type = 128U;
    msg.command = 99U;
    msg.settings.assign("LYRBGHPIFMSMHUXQWLLCBSZRFHOWWUREELCIQXJVUFYMFYCJJWXTLJXNINPIPRJFYAKNEAPWEAWRSFGNRVBAUWGRXJOHEKVVTEOTIBZDSKYAKELDOGSHTTTQOQGECNBPQQTZKHKPYGHSEVYUJDZMIPIZZRWDOZNQVJMXOCMATEUCP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 48664U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.511665439991;
    tmp_tmp_msg_0_0.lon = 0.348184502818;
    tmp_tmp_msg_0_0.eta = 955489256U;
    tmp_tmp_msg_0_0.duration = 14611U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XUUQZKJHDUPOUNHKSMWCNQLOQEFOZTAKWWGISFVVWWYIBKZUEATUOTGFULPZCAKQLKQHNWFJCFEFHBXAAARSY");

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
    msg.setTimeStamp(0.571712141277);
    msg.setSource(51117U);
    msg.setSourceEntity(10U);
    msg.setDestination(9349U);
    msg.setDestinationEntity(40U);
    msg.type = 65U;
    msg.command = 248U;
    msg.settings.assign("HKFIUWGNUQQITOMFSEC");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 22779U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("UPMWKRTYAICEKCXBTXLOYJCBSZEIDNUKLFRGFYRBOEMRTLMBXLFSYJBXENJILYQGDMZAZCZJ");

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
    msg.setTimeStamp(0.470542935355);
    msg.setSource(25311U);
    msg.setSourceEntity(96U);
    msg.setDestination(11167U);
    msg.setDestinationEntity(77U);
    msg.state = 165U;
    msg.plan_id = 45148U;
    msg.wpt_id = 14U;
    msg.settings_chk = 45917U;

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
    msg.setTimeStamp(0.787418991165);
    msg.setSource(38374U);
    msg.setSourceEntity(87U);
    msg.setDestination(49083U);
    msg.setDestinationEntity(85U);
    msg.state = 145U;
    msg.plan_id = 9926U;
    msg.wpt_id = 183U;
    msg.settings_chk = 51545U;

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
    msg.setTimeStamp(0.176257664442);
    msg.setSource(40981U);
    msg.setSourceEntity(141U);
    msg.setDestination(42643U);
    msg.setDestinationEntity(14U);
    msg.state = 232U;
    msg.plan_id = 4079U;
    msg.wpt_id = 151U;
    msg.settings_chk = 21228U;

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
    msg.setTimeStamp(0.716151783567);
    msg.setSource(42494U);
    msg.setSourceEntity(13U);
    msg.setDestination(50043U);
    msg.setDestinationEntity(165U);
    msg.uid = 198U;
    msg.frag_number = 240U;
    msg.num_frags = 167U;
    const char tmp_msg_0[] = {-121, -48, 33, 120, -54, 70, 55, 54, -63, 14, -123, 15, -46, -99, 57, -103, 74, 123, 73, -88, -64, -50, -87, 56, 125, -65, 16, -105, -11, -81, 60, -99, -23, 13, 39, -93, 46, 5, -117, 34, -86, 16, -99, -128, 0, 49, 96, -114, 48, -26, -43, -13, -82, -67, -102, -77, -30, -18, -5, 77, 36, 114, -7, -127, -29, -105, -68, -31, 104, 111, -16, 12, -5, 86, -62, 74, -6, 80, 91, -3, -56, 52, -119, 109, 121, -120, 50, -104, -37, -80, 118, 105, 13, -11, 99, -87, -107, 81, 69, 109, -100, 46, 91, -45, 123, -2, 120, 122, -110, -74, -82, -45, -86, 52, -60, 61, -86, -95, 73, 51, 89, 123, -8, 11, -14, -65, 57, -89, -21, 53, -48, 30, -119, -45, -124, -94, -83, 43, -94, 13, -63, 112, 126, 22, 87, -89, 8};
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
    msg.setTimeStamp(0.783695141058);
    msg.setSource(24413U);
    msg.setSourceEntity(216U);
    msg.setDestination(65150U);
    msg.setDestinationEntity(24U);
    msg.uid = 116U;
    msg.frag_number = 219U;
    msg.num_frags = 142U;
    const char tmp_msg_0[] = {94, 44, 116, -24, -67, 92, 12, -120, -110, -38, -36, 34, -71, 48, 51, -8, 20, 89, 13, 70, -114, -75, 51, 88, 75, 59, 11, -11, -106, -3, 84, 71, 38, 25, 69, -62, 105, 61, 46, -13, 87, 126, 63, 45, -40, -126, 60, -69, 37, -92, -99, -78, 30, 16, -45, -1, 120, -9, 7, -112, -90, 123, -36, -126, 112, -56, -104, -98, 65, -76, -2, -54, 39, 89, -32, 80, -73, 48, 72, 53, 23, -25, -76, 18, 125, -29, 30, -52, -40, 4, 35, 30, 123, 56, -12, -100, -116, -91, 100, -15, 112, -27, -54, -87, -29, -33, -57, -67, -66, -42, -95, 65, -28, -85, -67, -67, -77, 82, -13, -18, -22};
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
    msg.setTimeStamp(0.186287700595);
    msg.setSource(8914U);
    msg.setSourceEntity(214U);
    msg.setDestination(64729U);
    msg.setDestinationEntity(161U);
    msg.uid = 90U;
    msg.frag_number = 51U;
    msg.num_frags = 96U;
    const char tmp_msg_0[] = {115, -86, 73, -94, -67, 94, 9, -98, -19, 84, 79, 120, -126, 21, -51, 1, 67, 23, -27, -28, -1, -87, 111, -38, -116, -88, -48, 9, 19, 126, 120, -33, -88, 35, -93, -9, 19, -18, 29, 71, -92, 36, 64, -92, -74, -8, -14, -61, 102, 14, -81};
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
    msg.setTimeStamp(0.86148202721);
    msg.setSource(17233U);
    msg.setSourceEntity(18U);
    msg.setDestination(31886U);
    msg.setDestinationEntity(159U);
    msg.content_type.assign("NAYYAJVWZBVGAFHRPZOAMRRXEIFDOTJTWODX");
    const char tmp_msg_0[] = {98, -25, 108, 125, -43, 60, -103, -103, 109, 43, -37};
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
    msg.setTimeStamp(0.150293846918);
    msg.setSource(12072U);
    msg.setSourceEntity(179U);
    msg.setDestination(932U);
    msg.setDestinationEntity(139U);
    msg.content_type.assign("SALYHFIQHCICXDQIEZSFRCRNYGTLZJASJLWHLAYKZKAESROSIZFULHDTXQSUMZHUMXXTAVOMCHOEVKIFEKVBGXQWWSJKTROSZZYNTNXTGRMQIGYPQEDFKGNAXYBJBELXSWWVENEPDRBGUFPYHLBNJPOOBHRNYCVRKKNTCCNXYOVZBGIGCWPMQRGPAUDCEAZTPOQNDMYOEITMJMMKWOPFDDVTCVKWULUWXJBUABMV");
    const char tmp_msg_0[] = {72, -43, -7, 67, 24, 43, 57, 72, 48, 22, -112, -67, -52, 14, 28, 14, 111, -66, 12, -65, 24, 69, 64, -116, -81, 79, -81, 37, -14, 105, -95, -93, -123, 97, -10, 83, -21, 76, -111, -84, 45, 111, -7, -12, 110, -46, -17, -5, 13, 21, -82, -23, 43, 47, -55, 4, -10, -36, 13, 97, 37, -39, 92, -1, -12, 36, -101, 68, -99, 119, 88, -77, 10, 40, 55, -106, 12, -59, 92, -127, -43, -76, 109, 10, -104, -17, 98, -41, -74, 9, 80, -96, 100, 15, 0, -128, 112, -3, -18, 68, 2, 46, 116, 96, -84, 78, 76, 22, -38, 28, 12, -26, -35, 125, -69, -15, 81, 115, 31, 45, -114, -115, 9, -122, 75, -70, -20, 55, 74, -123, 26, -72, -50, 9, -70, 55, -105, 87, 60, -122, 40};
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
    msg.setTimeStamp(0.228526936109);
    msg.setSource(20406U);
    msg.setSourceEntity(194U);
    msg.setDestination(55990U);
    msg.setDestinationEntity(90U);
    msg.content_type.assign("CYJNXJRQWWANSILHATFDCCIKOUVRMPMNRQTLFQBBRZHRSTRIWALWZGKWLDSQHPQDZKBJUQAQTRACHZAOLGYKBGEDZYCIOELLXHFBMVJWNLCVPRQMVMZUMBONESCBVO");
    const char tmp_msg_0[] = {42, 39, -46, 93, 125, 118, -42, 65, 8, -30, 53, 97, 23, -85, -105, -16, -83, 95, -103, -122, 3, 107, 53, 101, 124, 46, 22, -81, 12, 60, 96, -15, -83, -100, -108, 13, -107, -105, 41, 73, 92, -62, 100, 71, 118, 30, -30, -46, -65, -106, -101, 109, 97, 73, -40, -14, 55, 53, 70, 71, 30, -75, 65, 32, 126, -93, -96, 105, -32, -16, 95, -29, 96, -91, 61, -76, 15, -119, 8, -87, -40, -74, -115, 73, 17, -99, -125, 56, 105, 120, -97, -100, 59, 87, 90, -86, 95, -100, 50, 105, -31, -6, -59, -11, -79, 37, 66, -102, 29, 86, 113, -78, -80, 84, 33, 79, -114, -94, -44, -87, 79, 125, -82, -102, -39, 65, 75, 4, 109, 21, -125, -77, -107, -65, 45, -33, -13, -93, -5, 119, 81, 86, 26, 39, -76, 47, 102};
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
    msg.setTimeStamp(0.855465963322);
    msg.setSource(20517U);
    msg.setSourceEntity(236U);
    msg.setDestination(62495U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.908042717274);
    msg.setSource(31293U);
    msg.setSourceEntity(69U);
    msg.setDestination(5104U);
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
    msg.setTimeStamp(0.818996165685);
    msg.setSource(34576U);
    msg.setSourceEntity(200U);
    msg.setDestination(58259U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.414311131193);
    msg.setSource(6379U);
    msg.setSourceEntity(213U);
    msg.setDestination(41870U);
    msg.setDestinationEntity(168U);
    msg.target = 46878U;
    msg.bearing = 0.268555836566;
    msg.elevation = 0.949182933389;

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
    msg.setTimeStamp(0.567274530546);
    msg.setSource(62813U);
    msg.setSourceEntity(16U);
    msg.setDestination(19606U);
    msg.setDestinationEntity(4U);
    msg.target = 24087U;
    msg.bearing = 0.520386439518;
    msg.elevation = 0.892587586816;

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
    msg.setTimeStamp(0.404204619188);
    msg.setSource(19525U);
    msg.setSourceEntity(100U);
    msg.setDestination(7527U);
    msg.setDestinationEntity(132U);
    msg.target = 30136U;
    msg.bearing = 0.594573623672;
    msg.elevation = 0.962629392483;

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
    msg.setTimeStamp(0.727262757056);
    msg.setSource(1241U);
    msg.setSourceEntity(212U);
    msg.setDestination(45485U);
    msg.setDestinationEntity(220U);
    msg.target = 51303U;
    msg.x = 0.650359684746;
    msg.y = 0.232032174188;
    msg.z = 0.73800764497;

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
    msg.setTimeStamp(0.758026088395);
    msg.setSource(43553U);
    msg.setSourceEntity(241U);
    msg.setDestination(18689U);
    msg.setDestinationEntity(83U);
    msg.target = 13701U;
    msg.x = 0.974902525081;
    msg.y = 0.168464696106;
    msg.z = 0.840733664576;

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
    msg.setTimeStamp(0.323396357204);
    msg.setSource(14576U);
    msg.setSourceEntity(23U);
    msg.setDestination(31371U);
    msg.setDestinationEntity(90U);
    msg.target = 11373U;
    msg.x = 0.718918947861;
    msg.y = 0.867203220827;
    msg.z = 0.697238948138;

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
    msg.setTimeStamp(0.448257867848);
    msg.setSource(56439U);
    msg.setSourceEntity(118U);
    msg.setDestination(40743U);
    msg.setDestinationEntity(83U);
    msg.target = 32136U;
    msg.lat = 0.758295573378;
    msg.lon = 0.359931969448;
    msg.z_units = 7U;
    msg.z = 0.640017802517;

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
    msg.setTimeStamp(0.121012971181);
    msg.setSource(51131U);
    msg.setSourceEntity(21U);
    msg.setDestination(6580U);
    msg.setDestinationEntity(156U);
    msg.target = 34399U;
    msg.lat = 0.181395558292;
    msg.lon = 0.573424303439;
    msg.z_units = 42U;
    msg.z = 0.40441359505;

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
    msg.setTimeStamp(0.54154528701);
    msg.setSource(1151U);
    msg.setSourceEntity(252U);
    msg.setDestination(12049U);
    msg.setDestinationEntity(183U);
    msg.target = 19397U;
    msg.lat = 0.155837054923;
    msg.lon = 0.663032587411;
    msg.z_units = 99U;
    msg.z = 0.536689057652;

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
    msg.setTimeStamp(0.960573402663);
    msg.setSource(9540U);
    msg.setSourceEntity(119U);
    msg.setDestination(15868U);
    msg.setDestinationEntity(73U);
    msg.locale.assign("WDOZAIJFFZCVGFKBYQLHOLFZQUPLNUKWVRXLKMKGCOAXBINWDJCOPJDDKUOOHVXGSVNHSYCYYTNLKEJZXGUGDAKVVRSVPINIKHZZJAFBQETTLTEZMJSYQTZGWCDNUKCHRWZBTSPAHMIBEIUQWOGDALURWPYPWJMHMHAXMSXUVXQUVAYEUJR");
    const char tmp_msg_0[] = {-128, -120, 92, -18, 39, 12, -10, 0, 18, -26, 80, -37, -58, -123, -17, 35, 15, 99, -7, -23, -56, 92, 113, -127, 68, 79, -1, -41, 85, 27, -63, -62, 44, 23, -39, -30, 3, 84, -95, -6, -43, -50, 125, -117, 97, -116, -58, -115, 45, -93, 48, -95, -126, -100, 96, -10, -93, 49, -76, -29, -99, 16, 125, -98, 18, 86, -41, 17, -115, -116, 93, 14, -34, 104, -50, -22, -58, -119, -123, 35, 60, -5, -69, 110, 74, -47, -63, 3, 68, 117, -86, 80, 4, -128, 50, -122, 105, 64, 43, 126, 86, 114, -109, -60, 39, 5, 73, -71, 13, -88, -123, 88, -69, 61, 82, -42, -105, -103, 122, -49, -4, -81, 108, -93, 6, -24, 38, 35, 60, -103, -54, 58, 58, -38, 55, 68, -82, -55, 60, 112, 82, 26, 1, -121, 112, -44, 88, 58, -42, 84, -127, -22, -128, -58, -99, -95, 75, 74, -19, -32, 12, 101, -12, 21, -80, 46, 104, -93, 126, 15, 5, 123, 55, 51, 116, 47, -84, 33, 6, 124, -74, 62, 94, -107, 50, -124, -121, 122, 13, 89, 41, -125, -76, 104, -80, -45, -47, -89, 33, 82, -38, -12, 71, 43, -88, -39, -115, 69, 21, 92, -43, 91, 37, -39, -15};
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
    msg.setTimeStamp(0.0399107451556);
    msg.setSource(51681U);
    msg.setSourceEntity(0U);
    msg.setDestination(3723U);
    msg.setDestinationEntity(87U);
    msg.locale.assign("JKRXUDZIILWLGUGTMCNHPPIDIJZYNHXACKBYCPMUKWPXGDXCFIFBMTNYOYSPAKCQOMNIXEVJSQCDHAKAIRXCQYGE");
    const char tmp_msg_0[] = {6, -30, -33, 34, -54, 83, 124, 122, 27, -84, 63, 35, -77, 71, -110, 88, 76, -28, -72, 114, 110, -124, 56, -85, 45, 111, -91, 56, -85, 105, 70, 108, 0, -121, -32, 32, 11, -3, -82, -53, 91, 17, 82, -34, 56, 124, 28, 48, 15, -11, 123, 47, 75, -127, 10, -5, 56, -79, 81, -39, 22, -118, 46, 77, -120, -95, -44, -110, 26, -56, -44, -18, 83, -63, -42, -37, -122, 67, -99, 75, -36, 122, -84, 41, -111, 18, -16, 105, 46, -91, 108, 70, -105, -111, -75, -49, -105, -76, 0, -20, -116, 77, 117, -66, -20, -46, -21, -18, -25, -8, -62, -35, 15, -29, -120, 53, -110, -111};
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
    msg.setTimeStamp(0.317772052311);
    msg.setSource(15691U);
    msg.setSourceEntity(122U);
    msg.setDestination(43937U);
    msg.setDestinationEntity(121U);
    msg.locale.assign("DIEPEHIEUBLSZQJPMSNNSFBHNZUOUOEBAQXRJJZHYTYUBIORIVWXKARCNXQIUNMUTAZRVYSIIYHLXOTPCLQLOWLGVJUPMAZPSYECWFIKAJXYGVGRVLHVKEGMRCNDQYXDAXGPBPFPKWMKZDMSTQTLEUFZMKYJKOGBYYXWEPDCGHNFURKOCNJAOMMVGJDKSEQSNQATGWFCBDPNRQCIVXSQVRCFLEZOTBWDWAWBFTXJULOGZMRCKH");
    const char tmp_msg_0[] = {-75, -58, -96, -30, 88, -44, -86, 56, -83, -6, 89, -56, 87, 9, 94, 35, 24, 0, -28, 67, 70, -15, -95, -65, -66, -32, -56, -1, 13, -20, 81, 11, -84, 9, 37, -66, -82, 116, 96, -70, 38, 111, 68, 16, -39, 119, 103, -43, -34, 80, -56, -43, -106, 101, -110, 83, -18, -79, 65, 26, 7, -37, 73, 59, -109, 85, 26, -90, 34, 124, -91, 76, 46, 117, 124, -58, -73, 109, 107, -46, 30, 60, -124, 78, -14, -83, -51, -35, 18, 67, -55, -3, 56, 126, -109, 77, -49, -61, -120, 54, -99, 15, -26, 27, -32, -2, 105, 47, 21, -54, -119, 33, -52, 45, -70, 76, 90, 0, -16, -43, -18, -54, 90, -101, 33, 119, 0, 78, -124, -73, -127, 46, 24, 94, -61, 3, 57, 120, -21, -19, -34, -107, -40, 30, -122, 30, 14, -70, -73, -106, -96, 83, 56, -65, -34, 30, -18, 65, 16, -100, -62, -49, 81, 125, -7, -124, 103, -35, -114, 93, -61, 36, -83, -63, 90, 106, -9, -34, -16, 63, -50, -86, -39, -60, -92, 77, -94, -8, -10, 123, 78, 97, 120, -126, 1, -56, -127, -2, -59, 62, -24, 104, -109, -7, -19, 125};
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
    msg.setTimeStamp(0.0988404184739);
    msg.setSource(46000U);
    msg.setSourceEntity(57U);
    msg.setDestination(55317U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.725170224187);
    msg.setSource(2296U);
    msg.setSourceEntity(53U);
    msg.setDestination(55202U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.0859101982879);
    msg.setSource(43692U);
    msg.setSourceEntity(1U);
    msg.setDestination(584U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.631244874921);
    msg.setSource(29498U);
    msg.setSourceEntity(127U);
    msg.setDestination(23337U);
    msg.setDestinationEntity(156U);
    msg.camid = 133U;
    msg.x = 37996U;
    msg.y = 65379U;

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
    msg.setTimeStamp(0.122188285779);
    msg.setSource(14793U);
    msg.setSourceEntity(50U);
    msg.setDestination(55120U);
    msg.setDestinationEntity(30U);
    msg.camid = 95U;
    msg.x = 44210U;
    msg.y = 57823U;

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
    msg.setTimeStamp(0.412415139609);
    msg.setSource(38276U);
    msg.setSourceEntity(7U);
    msg.setDestination(57938U);
    msg.setDestinationEntity(133U);
    msg.camid = 147U;
    msg.x = 49853U;
    msg.y = 55319U;

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
    msg.setTimeStamp(0.605103063991);
    msg.setSource(23326U);
    msg.setSourceEntity(248U);
    msg.setDestination(15003U);
    msg.setDestinationEntity(193U);
    msg.camid = 249U;
    msg.x = 11689U;
    msg.y = 29256U;

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
    msg.setTimeStamp(0.115371704104);
    msg.setSource(60492U);
    msg.setSourceEntity(11U);
    msg.setDestination(55480U);
    msg.setDestinationEntity(118U);
    msg.camid = 237U;
    msg.x = 41416U;
    msg.y = 65345U;

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
    msg.setTimeStamp(0.89780076918);
    msg.setSource(40996U);
    msg.setSourceEntity(181U);
    msg.setDestination(18335U);
    msg.setDestinationEntity(70U);
    msg.camid = 61U;
    msg.x = 41479U;
    msg.y = 61689U;

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
    msg.setTimeStamp(0.812916680057);
    msg.setSource(59774U);
    msg.setSourceEntity(248U);
    msg.setDestination(41043U);
    msg.setDestinationEntity(39U);
    msg.tracking = 134U;
    msg.lat = 0.224709722534;
    msg.lon = 0.894352613434;
    msg.x = 0.93845679076;
    msg.y = 0.758177972626;
    msg.z = 0.729336267769;

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
    msg.setTimeStamp(0.373454085683);
    msg.setSource(36516U);
    msg.setSourceEntity(246U);
    msg.setDestination(14833U);
    msg.setDestinationEntity(216U);
    msg.tracking = 193U;
    msg.lat = 0.833987026161;
    msg.lon = 0.413962555268;
    msg.x = 0.757361910433;
    msg.y = 0.962877273946;
    msg.z = 0.969471710714;

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
    msg.setTimeStamp(0.161443812889);
    msg.setSource(11197U);
    msg.setSourceEntity(253U);
    msg.setDestination(15220U);
    msg.setDestinationEntity(47U);
    msg.tracking = 233U;
    msg.lat = 0.21747101478;
    msg.lon = 0.102131415785;
    msg.x = 0.0621246891323;
    msg.y = 0.847968383323;
    msg.z = 0.891627727996;

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
    msg.setTimeStamp(0.7432604823);
    msg.setSource(50216U);
    msg.setSourceEntity(42U);
    msg.setDestination(55522U);
    msg.setDestinationEntity(121U);
    msg.target.assign("NMGBEMSBEJSDOBGPBTTMDTYDAOMCAQBQLACQQRTLYVXIBKCYFEJOMMDZKOGXUCDTLAJRDTCFCSCPBDTAWTCWUFJGQVQOOINIJJDAOWWJQPOJRPLFMYPARPVKAGQZQESYUKLLUEPGXGUNYMHUEBFCGQFLOEAVOFZSNXHKHHJNNIFSENBRGXWXTZSIKDZZHRGVKNFWLSBIIPUEKVC");
    msg.lbearing = 0.346576547145;
    msg.lelevation = 0.624150458172;
    msg.bearing = 0.0295289618911;
    msg.elevation = 0.337872672119;
    msg.phi = 0.813431412714;
    msg.theta = 0.915447884254;
    msg.psi = 0.573032787401;
    msg.accuracy = 0.631091384072;

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
    msg.setTimeStamp(0.368971108091);
    msg.setSource(45049U);
    msg.setSourceEntity(68U);
    msg.setDestination(41999U);
    msg.setDestinationEntity(171U);
    msg.target.assign("BQNGOPGFOKFHEXKTJXABINARWYGIFITADWZHOPASNFQPGRXZYNADKNLHVUXHQTEAVPAOBGLTDFTQDYGSHMRBVRKBWKKUJHCTLHRIBOZWFVMWJYGMAYGQAZ");
    msg.lbearing = 0.971722226941;
    msg.lelevation = 0.828088574082;
    msg.bearing = 0.586857671983;
    msg.elevation = 0.684606257197;
    msg.phi = 0.690581829433;
    msg.theta = 0.245523104619;
    msg.psi = 0.852966594253;
    msg.accuracy = 0.0420772395671;

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
    msg.setTimeStamp(0.0321836966059);
    msg.setSource(27611U);
    msg.setSourceEntity(22U);
    msg.setDestination(13702U);
    msg.setDestinationEntity(253U);
    msg.target.assign("AKQFIVIFZLVWIALJEFNUKCQYDKKTAIXMMSAFRXHRQYWEWZPJRZHKVURDXHHLVPTJFVBPEFLRHCNXBUXFXWGFAGIBOBVPGNILXTOERDVROVQMJCSOVEDSBKGZBCFJKHSNCWDCZERBQWYQODONIYTGSIPHMCEWUUTJPDGAEOWIZQPKJLLTUUNXDSCPQBIJNQUMYAUAAMFYJGWXCETZPMTBOUDYHKTSZCNSMORHNMZESVKOLWHST");
    msg.lbearing = 0.718677520403;
    msg.lelevation = 0.394123858481;
    msg.bearing = 0.142350502614;
    msg.elevation = 0.235032848529;
    msg.phi = 0.853856328489;
    msg.theta = 0.0473225425726;
    msg.psi = 0.315786691707;
    msg.accuracy = 0.233238155849;

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
    msg.setTimeStamp(0.754892261256);
    msg.setSource(10656U);
    msg.setSourceEntity(186U);
    msg.setDestination(26901U);
    msg.setDestinationEntity(16U);
    msg.target.assign("TSSFHKZVWXEJDGPSOWKCXBMAGDRLTUEYIQRYZWFGEMRBLZQCRPKUARPBYHBEOPALACHVJVOXFKHPLGNMLLXVE");
    msg.x = 0.667857392858;
    msg.y = 0.761505963482;
    msg.z = 0.658501562797;
    msg.n = 0.178406108739;
    msg.e = 0.682291307827;
    msg.d = 0.765221400652;
    msg.phi = 0.0879519556876;
    msg.theta = 0.960686726744;
    msg.psi = 0.309052356093;
    msg.accuracy = 0.339261394953;

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
    msg.setTimeStamp(0.735544845557);
    msg.setSource(37195U);
    msg.setSourceEntity(213U);
    msg.setDestination(53302U);
    msg.setDestinationEntity(148U);
    msg.target.assign("LVXZLWOOKGGDWUYZXUEZJTVNYRZASXWNZRRIVCOTKGQCNZNEKUQMOTXCLNRBBSRSGFDBVFJRGWJPRPJAGTOMLHZWQBKMUQFVTYVOYWGSQJJODIFHKWGPMZKTUIYNSIFFUGSSLHALHDPHXVFODCKDOHBWEXIFTHCAQIKCDLCAZTEUQZUIJNMXVAMSTNTDDJARHPOEHVH");
    msg.x = 0.395704828826;
    msg.y = 0.954873878784;
    msg.z = 0.950256769268;
    msg.n = 0.0520886284315;
    msg.e = 0.383289281692;
    msg.d = 0.692507662278;
    msg.phi = 0.0478444422851;
    msg.theta = 0.553686089866;
    msg.psi = 0.135848302647;
    msg.accuracy = 0.61208491517;

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
    msg.setTimeStamp(0.570087791912);
    msg.setSource(25866U);
    msg.setSourceEntity(190U);
    msg.setDestination(27744U);
    msg.setDestinationEntity(17U);
    msg.target.assign("NIQNHERPRERRICNSZWCIJOXMIDKZZAVQCIWUVGYJXGBVILUZFPPMFUAZVBAPBNSYOYWNLKDFINMPVDZDKIDPXZJUGFYOEHCWENWRQRBXTLXCYLILPROPHMOQEOTDHOOEVHTEABLSLKGQLUDPMJLUKGEONQX");
    msg.x = 0.331201902263;
    msg.y = 0.889304858667;
    msg.z = 0.812216645362;
    msg.n = 0.215481189468;
    msg.e = 0.901168181852;
    msg.d = 0.480391030975;
    msg.phi = 0.608059653232;
    msg.theta = 0.2415730883;
    msg.psi = 0.235772408025;
    msg.accuracy = 0.256213876993;

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
    msg.setTimeStamp(0.416069456619);
    msg.setSource(28998U);
    msg.setSourceEntity(232U);
    msg.setDestination(48433U);
    msg.setDestinationEntity(140U);
    msg.target.assign("HTZFDABKUQOVNAMQRWWGYSXBIKZBGIPMJQDIAUXCYQEGZAGVITUNLAJJZYWHXBHFPKSOWYIJZM");
    msg.lat = 0.468352931978;
    msg.lon = 0.00990872959119;
    msg.z_units = 173U;
    msg.z = 0.0670703962258;
    msg.accuracy = 0.524315436359;

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
    msg.setTimeStamp(0.55095314537);
    msg.setSource(51610U);
    msg.setSourceEntity(195U);
    msg.setDestination(28047U);
    msg.setDestinationEntity(239U);
    msg.target.assign("TOPBCWDWMKOPUWBGIOXMNLBSSMZLNBALAQXSGPZPGSGUIEPEGUKUJIHRLZRGGXZLKEVQCIDCKHZCZMTMSDCWJSRTSJLWQGFFALGMREYYBXVUTJNXOIHSTNDMTERWBFCZAQCBNENDPHVPFADNTKAFOFBIEYKEIOYTXUYKBSRYJQBWKVPRFHOFZEAUNCJYIPZRWMRQJPAUYFQQDVCVQDAOMC");
    msg.lat = 0.184781256528;
    msg.lon = 0.590822055786;
    msg.z_units = 30U;
    msg.z = 0.823738074358;
    msg.accuracy = 0.583111895566;

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
    msg.setTimeStamp(0.319603449106);
    msg.setSource(2579U);
    msg.setSourceEntity(210U);
    msg.setDestination(10360U);
    msg.setDestinationEntity(183U);
    msg.target.assign("EQSZVFPBULZYNXGIGEHMWIGNSLPMNHZDDUMOPRDRSORXPYMXIJIXYBRMZVXFKBSQSEYBNNJFMTYUMCYQLBTTKRESALPFUCWJEJJKVWZIPUKSQOQKJLLWGALYCWONBGZTQEHBMHZTJQZUBJRYFRCWTZHFIVXVVAUOSKXXCWHUAKMDTSCRDPEQRAFKEXGCFNIVZADBHTAMVOAJJYGANWGOWIPNDLCCKEVLUEDCPSWH");
    msg.lat = 0.317275458088;
    msg.lon = 0.849567245416;
    msg.z_units = 237U;
    msg.z = 0.110908060806;
    msg.accuracy = 0.241326482707;

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
    msg.setTimeStamp(0.850609115791);
    msg.setSource(53721U);
    msg.setSourceEntity(162U);
    msg.setDestination(60184U);
    msg.setDestinationEntity(178U);
    msg.name.assign("ZZYTTDQGOZBDABWVQVYBHADJOHPKBTTUZYHYSGEGHVUQCLLGCNSROISLKOICPYFCNEEDFZAGYJBFLDJXKBUIUUAZAEKQHSEQCRUREWMINSWKFTBIMMWULZCPLAVMPTTHSRYNLKHL");
    msg.lat = 0.28690216604;
    msg.lon = 0.158027265054;
    msg.z = 0.583222457291;
    msg.z_units = 17U;

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
    msg.setTimeStamp(0.883110183834);
    msg.setSource(54737U);
    msg.setSourceEntity(24U);
    msg.setDestination(37120U);
    msg.setDestinationEntity(155U);
    msg.name.assign("YZLKZWMDMHOBORWKNXIQEELTCBMAPEYTONJFTYOHAOLDGJMMDSFPOZJFKGBPGEMXDEWZRVIXXGLAYYBYTRFXHPMCCVOJSUTDWHAZRKBNQPHQPBVVUJSWVQDWBKIIQRLEVCCIWRCJUSJKQKRSFTISUUABYEGFOSNZHMXYINAUFPTXCGMF");
    msg.lat = 0.596603106605;
    msg.lon = 0.183257687756;
    msg.z = 0.989397295762;
    msg.z_units = 206U;

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
    msg.setTimeStamp(0.236476250602);
    msg.setSource(18856U);
    msg.setSourceEntity(62U);
    msg.setDestination(2194U);
    msg.setDestinationEntity(126U);
    msg.name.assign("GWVZIGRBYMOXMSGBYQXBGALAFOHARZQATUNKJMVRQXYXNCQJPIBGLYNDJHEKENUDQGEMLXEOVDLVBEOOOTBVGQWNRPEVGRJYWCHLHPPSTARISSFKGIUQKAETWMAJKMHOTUKVUSPPVCRJ");
    msg.lat = 0.40214880921;
    msg.lon = 0.179060781079;
    msg.z = 0.0123781939301;
    msg.z_units = 156U;

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
    msg.setTimeStamp(0.104739057907);
    msg.setSource(56885U);
    msg.setSourceEntity(141U);
    msg.setDestination(5743U);
    msg.setDestinationEntity(226U);
    msg.op = 137U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("IFXRRBMKIOMGJEKBQNDXADTVSNCLSCM");
    tmp_msg_0.lat = 0.963611477488;
    tmp_msg_0.lon = 0.636837840877;
    tmp_msg_0.z = 0.890993876719;
    tmp_msg_0.z_units = 32U;
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
    msg.setTimeStamp(0.22885800556);
    msg.setSource(19164U);
    msg.setSourceEntity(39U);
    msg.setDestination(48491U);
    msg.setDestinationEntity(207U);
    msg.op = 232U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("ZKJWSAKJGGQUWBCAYXCKONHIZKTZTYFNWN");
    tmp_msg_0.lat = 0.126432690206;
    tmp_msg_0.lon = 0.588546286873;
    tmp_msg_0.z = 0.812789544374;
    tmp_msg_0.z_units = 34U;
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
    msg.setTimeStamp(0.394858341721);
    msg.setSource(166U);
    msg.setSourceEntity(248U);
    msg.setDestination(13776U);
    msg.setDestinationEntity(158U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.17809739811);
    msg.setSource(52297U);
    msg.setSourceEntity(194U);
    msg.setDestination(19377U);
    msg.setDestinationEntity(202U);
    msg.value = 0.494709347179;
    msg.type = 6U;

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
    msg.setTimeStamp(0.661352718083);
    msg.setSource(46204U);
    msg.setSourceEntity(98U);
    msg.setDestination(38886U);
    msg.setDestinationEntity(41U);
    msg.value = 0.44134372979;
    msg.type = 0U;

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
    msg.setTimeStamp(0.361851904545);
    msg.setSource(29536U);
    msg.setSourceEntity(75U);
    msg.setDestination(13635U);
    msg.setDestinationEntity(206U);
    msg.value = 0.799746273989;
    msg.type = 74U;

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
    msg.setTimeStamp(0.96404796844);
    msg.setSource(27323U);
    msg.setSourceEntity(62U);
    msg.setDestination(7044U);
    msg.setDestinationEntity(169U);
    msg.value = 0.119234839026;

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
    msg.setTimeStamp(0.691707864036);
    msg.setSource(50185U);
    msg.setSourceEntity(74U);
    msg.setDestination(9110U);
    msg.setDestinationEntity(52U);
    msg.value = 0.0646782804967;

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
    msg.setTimeStamp(0.48436155872);
    msg.setSource(44810U);
    msg.setSourceEntity(54U);
    msg.setDestination(22884U);
    msg.setDestinationEntity(48U);
    msg.value = 0.0831034713061;

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
    msg.setTimeStamp(0.869078575793);
    msg.setSource(64681U);
    msg.setSourceEntity(15U);
    msg.setDestination(5014U);
    msg.setDestinationEntity(194U);
    msg.timestamp_last_service = 0.692631701879;
    msg.time_next_service = 0.532952837959;
    msg.time_motor_next_service = 0.00360007619031;
    msg.time_idle_ground = 0.471460383875;
    msg.time_idle_air = 0.400690850938;
    msg.time_idle_water = 0.639901992724;
    msg.time_idle_underwater = 0.848990861921;
    msg.time_idle_unknown = 0.249417146852;
    msg.time_motor_ground = 0.291034224313;
    msg.time_motor_air = 0.830583591115;
    msg.time_motor_water = 0.802477884887;
    msg.time_motor_underwater = 0.249292609414;
    msg.time_motor_unknown = 0.777009175811;
    msg.rpm_min = -5873;
    msg.rpm_max = 22203;
    msg.depth_max = 0.570106586409;

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
    msg.setTimeStamp(0.399523357672);
    msg.setSource(24971U);
    msg.setSourceEntity(238U);
    msg.setDestination(6862U);
    msg.setDestinationEntity(137U);
    msg.timestamp_last_service = 0.102923326363;
    msg.time_next_service = 0.438950429682;
    msg.time_motor_next_service = 0.527535973202;
    msg.time_idle_ground = 0.362602534777;
    msg.time_idle_air = 0.115674693709;
    msg.time_idle_water = 0.813362990463;
    msg.time_idle_underwater = 0.224294415525;
    msg.time_idle_unknown = 0.370679841086;
    msg.time_motor_ground = 0.121852153957;
    msg.time_motor_air = 0.511530647291;
    msg.time_motor_water = 0.695003978239;
    msg.time_motor_underwater = 0.198966677591;
    msg.time_motor_unknown = 0.64482075394;
    msg.rpm_min = 11289;
    msg.rpm_max = -24474;
    msg.depth_max = 0.214744135058;

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
    msg.setTimeStamp(0.458444119112);
    msg.setSource(50022U);
    msg.setSourceEntity(108U);
    msg.setDestination(6891U);
    msg.setDestinationEntity(18U);
    msg.timestamp_last_service = 0.148868950164;
    msg.time_next_service = 0.858986870696;
    msg.time_motor_next_service = 0.49598706657;
    msg.time_idle_ground = 0.230550614533;
    msg.time_idle_air = 0.726895049442;
    msg.time_idle_water = 0.665856374138;
    msg.time_idle_underwater = 0.363179294543;
    msg.time_idle_unknown = 0.597737541877;
    msg.time_motor_ground = 0.563345835763;
    msg.time_motor_air = 0.592109584347;
    msg.time_motor_water = 0.927798369991;
    msg.time_motor_underwater = 0.908434261032;
    msg.time_motor_unknown = 0.918000342845;
    msg.rpm_min = -20985;
    msg.rpm_max = -23233;
    msg.depth_max = 0.0769574914087;

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
    msg.setTimeStamp(0.968885751957);
    msg.setSource(666U);
    msg.setSourceEntity(126U);
    msg.setDestination(10111U);
    msg.setDestinationEntity(158U);
    msg.severity = 107U;
    msg.text.assign("RWHCXFXINQLOZTYTSJNRGMARKJUAVLEEHIWLGKSMSBUBFMMRDVRZRCTALIAOEPLAIHHQATBDUICYCKZVTNELGDDVBSOFVBTWQ");

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
    msg.setTimeStamp(0.183028834552);
    msg.setSource(13769U);
    msg.setSourceEntity(119U);
    msg.setDestination(8423U);
    msg.setDestinationEntity(36U);
    msg.severity = 12U;
    msg.text.assign("ENYWKPYOZVYESZLESHDQGOHIKTBIZPIFRBDFDJNMRVOBPCNBZIXFWYBLWFMPNQSQIUWFTYHUMPGTBJSQOJIJKQHVAKQACOOGXLFUPPXNVWWRHLFMVTNSEOMIXII");

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
    msg.setTimeStamp(0.168188443388);
    msg.setSource(41147U);
    msg.setSourceEntity(19U);
    msg.setDestination(8099U);
    msg.setDestinationEntity(182U);
    msg.severity = 203U;
    msg.text.assign("MOIGXPDLKFYEZMBIUXTDHAUAPNYNVOJXYQJMZYYCYOVTDFSLQLBHIHPLEHYCDIJDVFRKJHYXOEHJFNEFJUGVLITZPXVKFLURLKGAHJCQMUOWNLUZOSMDQSEPIXCTCBUSQNOGWIWHWRZZKQACTUCZRKGSSTKRBEKQNVFRAESXKNOANSIZOWHMXLGBHNZWXCXPIAWMFGFBVDGYBDRMUEBSQRJPMNGPEKVWT");

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
    msg.setTimeStamp(0.135506906219);
    msg.setSource(61286U);
    msg.setSourceEntity(11U);
    msg.setDestination(11459U);
    msg.setDestinationEntity(60U);
    msg.channel = 9;
    msg.value = -195436741;
    msg.gain = 204U;

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
    msg.setTimeStamp(0.103685625142);
    msg.setSource(18335U);
    msg.setSourceEntity(167U);
    msg.setDestination(1830U);
    msg.setDestinationEntity(254U);
    msg.channel = 65;
    msg.value = 2123795382;
    msg.gain = 0U;

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
    msg.setTimeStamp(0.655756141619);
    msg.setSource(36315U);
    msg.setSourceEntity(83U);
    msg.setDestination(64637U);
    msg.setDestinationEntity(51U);
    msg.channel = 116;
    msg.value = -6640755;
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
    msg.setTimeStamp(0.292950374562);
    msg.setSource(34946U);
    msg.setSourceEntity(93U);
    msg.setDestination(45729U);
    msg.setDestinationEntity(188U);
    msg.ch01 = 0.723731246411;
    msg.ch02 = 0.822100912781;
    msg.ch03 = 0.380606537477;
    msg.ch04 = 0.716483731914;
    msg.ch05 = 0.717046742607;
    msg.ch06 = 0.466750122843;
    msg.ch07 = 0.868786167742;
    msg.ch08 = 0.640584678263;
    msg.ch09 = 0.218351198828;
    msg.ch10 = 0.404831746413;
    msg.ch11 = 0.566407167376;
    msg.ch12 = 0.849064775753;
    msg.ch13 = 0.621006040747;
    msg.ch14 = 0.581679123546;
    msg.ch15 = 0.243558527878;
    msg.ch16 = 0.176182282542;

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
    msg.setTimeStamp(0.218757620842);
    msg.setSource(40663U);
    msg.setSourceEntity(115U);
    msg.setDestination(30220U);
    msg.setDestinationEntity(237U);
    msg.ch01 = 0.0276723484785;
    msg.ch02 = 0.631431840804;
    msg.ch03 = 0.60301593395;
    msg.ch04 = 0.731808332902;
    msg.ch05 = 0.553111860802;
    msg.ch06 = 0.553313153126;
    msg.ch07 = 0.98722262097;
    msg.ch08 = 0.469133199287;
    msg.ch09 = 0.232681432856;
    msg.ch10 = 0.917953358752;
    msg.ch11 = 0.577929350224;
    msg.ch12 = 0.838315435713;
    msg.ch13 = 0.600712465962;
    msg.ch14 = 0.844261220411;
    msg.ch15 = 0.0180599977182;
    msg.ch16 = 0.0779566169845;

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
    msg.setTimeStamp(0.185782200847);
    msg.setSource(63481U);
    msg.setSourceEntity(185U);
    msg.setDestination(5215U);
    msg.setDestinationEntity(182U);
    msg.ch01 = 0.393340504613;
    msg.ch02 = 0.812139613637;
    msg.ch03 = 0.361018352055;
    msg.ch04 = 0.303962941901;
    msg.ch05 = 0.509236024857;
    msg.ch06 = 0.570864998971;
    msg.ch07 = 0.898586526058;
    msg.ch08 = 0.491243241605;
    msg.ch09 = 0.444975318675;
    msg.ch10 = 0.292100823474;
    msg.ch11 = 0.942914983352;
    msg.ch12 = 0.761312853824;
    msg.ch13 = 0.505284742755;
    msg.ch14 = 0.144694990047;
    msg.ch15 = 0.74968537548;
    msg.ch16 = 0.161619824377;

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
    msg.setTimeStamp(0.779054884499);
    msg.setSource(44798U);
    msg.setSourceEntity(238U);
    msg.setDestination(43894U);
    msg.setDestinationEntity(159U);
    msg.time = 0.269697835856;
    msg.ang = 0.792259493224;

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
    msg.setTimeStamp(0.967375797602);
    msg.setSource(51363U);
    msg.setSourceEntity(106U);
    msg.setDestination(49281U);
    msg.setDestinationEntity(37U);
    msg.time = 0.836285887918;
    msg.ang = 0.0042497943734;

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
    msg.setTimeStamp(0.941681192766);
    msg.setSource(2610U);
    msg.setSourceEntity(137U);
    msg.setDestination(17614U);
    msg.setDestinationEntity(44U);
    msg.time = 0.114292703572;
    msg.ang = 0.389158510622;

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
    msg.setTimeStamp(0.824585939738);
    msg.setSource(47492U);
    msg.setSourceEntity(184U);
    msg.setDestination(14344U);
    msg.setDestinationEntity(233U);
    msg.value = 0.986914533059;

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
    msg.setTimeStamp(0.0984719291595);
    msg.setSource(64066U);
    msg.setSourceEntity(235U);
    msg.setDestination(29186U);
    msg.setDestinationEntity(14U);
    msg.value = 0.575655126157;

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
    msg.setTimeStamp(0.0873480713207);
    msg.setSource(60115U);
    msg.setSourceEntity(164U);
    msg.setDestination(27081U);
    msg.setDestinationEntity(79U);
    msg.value = 0.0672758081198;

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
    msg.setTimeStamp(0.764564543363);
    msg.setSource(55427U);
    msg.setSourceEntity(250U);
    msg.setDestination(42041U);
    msg.setDestinationEntity(2U);
    msg.value = 0.740161032411;

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
    msg.setTimeStamp(0.888579665558);
    msg.setSource(40025U);
    msg.setSourceEntity(30U);
    msg.setDestination(58598U);
    msg.setDestinationEntity(157U);
    msg.value = 0.436542012856;

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
    msg.setTimeStamp(0.0197925218294);
    msg.setSource(34479U);
    msg.setSourceEntity(164U);
    msg.setDestination(42704U);
    msg.setDestinationEntity(158U);
    msg.value = 0.921845896207;

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
    msg.setTimeStamp(0.336635185609);
    msg.setSource(18016U);
    msg.setSourceEntity(95U);
    msg.setDestination(48296U);
    msg.setDestinationEntity(31U);
    msg.value = 0.736764838837;

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
    msg.setTimeStamp(0.712196931356);
    msg.setSource(51735U);
    msg.setSourceEntity(127U);
    msg.setDestination(34260U);
    msg.setDestinationEntity(175U);
    msg.value = 0.468116310234;

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
    msg.setTimeStamp(0.0768205303643);
    msg.setSource(14723U);
    msg.setSourceEntity(159U);
    msg.setDestination(42931U);
    msg.setDestinationEntity(10U);
    msg.value = 0.8673425078;

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
    msg.setTimeStamp(0.656017428303);
    msg.setSource(6163U);
    msg.setSourceEntity(213U);
    msg.setDestination(32624U);
    msg.setDestinationEntity(87U);
    msg.l2 = -22;
    msg.l3 = -30;
    msg.iridium = -31;
    msg.modem = 24;
    msg.pumps = 72;
    msg.vhf = -72;

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
    msg.setTimeStamp(0.0421856086941);
    msg.setSource(42802U);
    msg.setSourceEntity(223U);
    msg.setDestination(38539U);
    msg.setDestinationEntity(250U);
    msg.l2 = -70;
    msg.l3 = -76;
    msg.iridium = -44;
    msg.modem = -17;
    msg.pumps = -115;
    msg.vhf = 71;

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
    msg.setTimeStamp(0.885887691228);
    msg.setSource(56042U);
    msg.setSourceEntity(142U);
    msg.setDestination(28685U);
    msg.setDestinationEntity(226U);
    msg.l2 = 103;
    msg.l3 = -80;
    msg.iridium = -76;
    msg.modem = 87;
    msg.pumps = -53;
    msg.vhf = -122;

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
    msg.setTimeStamp(0.101619252395);
    msg.setSource(65010U);
    msg.setSourceEntity(26U);
    msg.setDestination(49909U);
    msg.setDestinationEntity(99U);
    msg.angle = 0.121730999502;
    msg.reference.assign("NMICXMHGRDVZWHHKAORYFTDUYOGFTEJBLCNOQTNZPEBPPSWXGAIIXQGWQWCHZIAVHZBQQURNZTXSCKRKMCKDFEIWUJMADHSFYPRZEERJVOSUMSQCSEYIGWNFSXYXNJKAGMNYVRABIVEMFNACUDWLIJAJDTYZBWNJRYGHOJQXKLLLYJKMEPVTECBODXBSQKPLPUXRPOUM");
    msg.speed = 0.151673761046;

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
    msg.setTimeStamp(0.958009274066);
    msg.setSource(10575U);
    msg.setSourceEntity(197U);
    msg.setDestination(21853U);
    msg.setDestinationEntity(144U);
    msg.angle = 0.231514712545;
    msg.reference.assign("FZIHGHZYKIWGIFBKCUZMGKGTHYACXAYPBM");
    msg.speed = 0.514095335193;

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
    msg.setTimeStamp(0.0720489740328);
    msg.setSource(64112U);
    msg.setSourceEntity(214U);
    msg.setDestination(13182U);
    msg.setDestinationEntity(103U);
    msg.angle = 0.220109969031;
    msg.reference.assign("JSICGAGOATPCXSAWXXYTIJHBKYNNIWBHIWGHJKUQDSLRKTUMFSMCJCSHVYJHHLOMYWDAYYKISDUXQWPBZDEBRITLKVEBETCXCLPPRZYWEWLBASRFDUXODZJFMLAJOSUOXWQUDKEUGARNFPBNFITKYTZXNPALSSQTNVZPJXTQMFILF");
    msg.speed = 0.715000419557;

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
    msg.setTimeStamp(0.0635658802281);
    msg.setSource(62392U);
    msg.setSourceEntity(248U);
    msg.setDestination(7035U);
    msg.setDestinationEntity(218U);
    msg.angle = 0.0867026463718;
    msg.speed = 0.0278635886014;

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
    msg.setTimeStamp(0.711438667843);
    msg.setSource(26303U);
    msg.setSourceEntity(102U);
    msg.setDestination(5639U);
    msg.setDestinationEntity(212U);
    msg.angle = 0.31151190742;
    msg.speed = 0.903204605148;

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
    msg.setTimeStamp(0.680299285715);
    msg.setSource(56252U);
    msg.setSourceEntity(80U);
    msg.setDestination(40585U);
    msg.setDestinationEntity(168U);
    msg.angle = 0.255518308588;
    msg.speed = 0.998605014551;

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
    msg.setTimeStamp(0.902292251916);
    msg.setSource(42440U);
    msg.setSourceEntity(189U);
    msg.setDestination(46169U);
    msg.setDestinationEntity(1U);
    msg.dir = 0.171261579611;
    msg.speed = 0.229331375688;

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
    msg.setTimeStamp(0.280835429264);
    msg.setSource(64938U);
    msg.setSourceEntity(96U);
    msg.setDestination(31570U);
    msg.setDestinationEntity(139U);
    msg.dir = 0.975040385017;
    msg.speed = 0.185034488935;

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
    msg.setTimeStamp(0.221531791702);
    msg.setSource(15506U);
    msg.setSourceEntity(76U);
    msg.setDestination(44811U);
    msg.setDestinationEntity(159U);
    msg.dir = 0.540847736856;
    msg.speed = 0.714359983481;

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
    msg.setTimeStamp(0.776090919558);
    msg.setSource(62023U);
    msg.setSourceEntity(71U);
    msg.setDestination(46414U);
    msg.setDestinationEntity(54U);
    msg.x = 0.985792081536;
    msg.y = 0.246240275366;
    msg.z1 = 0.244259918366;
    msg.z2 = 0.874323489057;

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
    msg.setTimeStamp(0.275540763169);
    msg.setSource(34576U);
    msg.setSourceEntity(112U);
    msg.setDestination(2299U);
    msg.setDestinationEntity(176U);
    msg.x = 0.835912715954;
    msg.y = 0.876972309126;
    msg.z1 = 0.976125093457;
    msg.z2 = 0.00426454595064;

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
    msg.setTimeStamp(0.563316958911);
    msg.setSource(47754U);
    msg.setSourceEntity(110U);
    msg.setDestination(37856U);
    msg.setDestinationEntity(151U);
    msg.x = 0.618334575192;
    msg.y = 0.647479118389;
    msg.z1 = 0.834568800546;
    msg.z2 = 0.928449187701;

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
    msg.setTimeStamp(0.419845934695);
    msg.setSource(40544U);
    msg.setSourceEntity(233U);
    msg.setDestination(2261U);
    msg.setDestinationEntity(161U);
    msg.mmsi = 0.408905321358;
    msg.lat = 0.93929968236;
    msg.lon = 0.413918237034;
    msg.x = 0.67391693923;
    msg.y = 0.269041623843;
    msg.speed = 0.631539590363;
    msg.course = 0.782094187612;
    msg.dist = 0.178794339511;
    msg.length = 0.893968179506;
    msg.width = 0.944324392961;
    msg.o_vect = 0.501742653229;

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
    msg.setTimeStamp(0.338888561214);
    msg.setSource(13308U);
    msg.setSourceEntity(180U);
    msg.setDestination(28003U);
    msg.setDestinationEntity(96U);
    msg.mmsi = 0.259623395737;
    msg.lat = 0.074243014547;
    msg.lon = 0.449656321225;
    msg.x = 0.728465777977;
    msg.y = 0.0924484082466;
    msg.speed = 0.707308848905;
    msg.course = 0.362298123854;
    msg.dist = 0.346959166937;
    msg.length = 0.11123231956;
    msg.width = 0.620202554483;
    msg.o_vect = 0.662396936796;

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
    msg.setTimeStamp(0.766319668499);
    msg.setSource(40579U);
    msg.setSourceEntity(162U);
    msg.setDestination(52092U);
    msg.setDestinationEntity(174U);
    msg.mmsi = 0.454376136182;
    msg.lat = 0.175587083538;
    msg.lon = 0.4534936696;
    msg.x = 0.0693369847485;
    msg.y = 0.250509841393;
    msg.speed = 0.736304656332;
    msg.course = 0.266773479171;
    msg.dist = 0.0224773174467;
    msg.length = 0.939920904177;
    msg.width = 0.812979858927;
    msg.o_vect = 0.527231100169;

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
    msg.setTimeStamp(0.737478422414);
    msg.setSource(41908U);
    msg.setSourceEntity(72U);
    msg.setDestination(9883U);
    msg.setDestinationEntity(10U);
    msg.locations.assign("VKZMEOHXTGDHUCCPZAQIUYAUJYGZHOLAIRFQRCIJTCRWXCYNQETZXVOAQKOWEPBMLGVQAHWRFSNJJBKOBEZSGXKUBOFFYVXDOWVYEBNHTCURWWXFGDAISDRMBEUBKUNFCAPAYMLWDOGHNJLPYCSOKUDMKDNINRLUHRIUSRMGZTVJBJ");

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
    msg.setTimeStamp(0.116393241152);
    msg.setSource(57854U);
    msg.setSourceEntity(183U);
    msg.setDestination(64466U);
    msg.setDestinationEntity(38U);
    msg.locations.assign("KDWPTTCNSFHCSBSABGBYXAUCHPICWSVGMAPHFITUZFMWWEMQLIBZDONVXSDLZPJOZLDWUYLZVXCGHEONIYIATIXPYQORADTYLPYLUNKTRJRQEEJDQTKDWGHWFYMVARULMSQMVXKLOJHFWXGJPFRUQNVEMYQYKBNHMO");

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
    msg.setTimeStamp(0.760628590989);
    msg.setSource(55646U);
    msg.setSourceEntity(240U);
    msg.setDestination(52985U);
    msg.setDestinationEntity(81U);
    msg.locations.assign("VQMKFLVHRFULTWHRPSXENITWNXHZLYFJLEXNVLKONSWGZNEBBKWUIKWEGQUFUOXSHEQOIJNBAJBQSXOSVDGPTJVRXQLOFIUYJYO");

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
    msg.setTimeStamp(0.474176295104);
    msg.setSource(25368U);
    msg.setSourceEntity(130U);
    msg.setDestination(23262U);
    msg.setDestinationEntity(198U);
    msg.value = 0.890040241252;

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
    msg.setTimeStamp(0.515211404328);
    msg.setSource(14754U);
    msg.setSourceEntity(109U);
    msg.setDestination(38213U);
    msg.setDestinationEntity(21U);
    msg.value = 0.665557486368;

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
    msg.setTimeStamp(0.715421455235);
    msg.setSource(23862U);
    msg.setSourceEntity(55U);
    msg.setDestination(26184U);
    msg.setDestinationEntity(238U);
    msg.value = 0.0558467561394;

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
    msg.setTimeStamp(0.892082458083);
    msg.setSource(31523U);
    msg.setSourceEntity(189U);
    msg.setDestination(3577U);
    msg.setDestinationEntity(96U);
    msg.beam1 = 0.503373525761;
    msg.beam2 = 0.0302111128099;
    msg.beam3 = 0.0381988091991;
    msg.beam4 = 0.525591672066;

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
    msg.setTimeStamp(0.142165238993);
    msg.setSource(45857U);
    msg.setSourceEntity(75U);
    msg.setDestination(13854U);
    msg.setDestinationEntity(94U);
    msg.beam1 = 0.571186041642;
    msg.beam2 = 0.911889277754;
    msg.beam3 = 0.515698558866;
    msg.beam4 = 0.258189425285;

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
    msg.setTimeStamp(0.803126852993);
    msg.setSource(32271U);
    msg.setSourceEntity(125U);
    msg.setDestination(57092U);
    msg.setDestinationEntity(235U);
    msg.beam1 = 0.824628980762;
    msg.beam2 = 0.926875280553;
    msg.beam3 = 0.784141833783;
    msg.beam4 = 0.0830534105465;

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
    msg.setTimeStamp(0.946407253062);
    msg.setSource(833U);
    msg.setSourceEntity(154U);
    msg.setDestination(20790U);
    msg.setDestinationEntity(48U);
    msg.beam1 = 121U;
    msg.beam2 = 227U;
    msg.beam3 = 180U;
    msg.beam4 = 94U;

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
    msg.setTimeStamp(0.179438495492);
    msg.setSource(20475U);
    msg.setSourceEntity(43U);
    msg.setDestination(38086U);
    msg.setDestinationEntity(21U);
    msg.beam1 = 41U;
    msg.beam2 = 5U;
    msg.beam3 = 18U;
    msg.beam4 = 88U;

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
    msg.setTimeStamp(0.95897506466);
    msg.setSource(50634U);
    msg.setSourceEntity(87U);
    msg.setDestination(24030U);
    msg.setDestinationEntity(127U);
    msg.beam1 = 22U;
    msg.beam2 = 54U;
    msg.beam3 = 106U;
    msg.beam4 = 197U;

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
    msg.setTimeStamp(0.538076744098);
    msg.setSource(30603U);
    msg.setSourceEntity(106U);
    msg.setDestination(58783U);
    msg.setDestinationEntity(11U);
    msg.cellposition = 0.0327382823407;
    msg.x = 0.0794348515226;
    msg.y = 0.987759798214;
    msg.z1 = 0.573230627556;
    msg.z2 = 0.0815120533783;
    msg.amp0 = 0.26980130473;
    msg.amp1 = 0.0956785804792;
    msg.amp2 = 0.615136975803;
    msg.amp3 = 0.0256880377562;
    msg.cor0 = 115U;
    msg.cor1 = 214U;
    msg.cor2 = 242U;
    msg.cor3 = 210U;

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
    msg.setTimeStamp(0.226145559897);
    msg.setSource(34157U);
    msg.setSourceEntity(17U);
    msg.setDestination(19136U);
    msg.setDestinationEntity(79U);
    msg.cellposition = 0.194850218962;
    msg.x = 0.400356815476;
    msg.y = 0.94321057041;
    msg.z1 = 0.601752205199;
    msg.z2 = 0.773062052252;
    msg.amp0 = 0.896018849496;
    msg.amp1 = 0.230042952764;
    msg.amp2 = 0.0274765891848;
    msg.amp3 = 0.630074222217;
    msg.cor0 = 58U;
    msg.cor1 = 226U;
    msg.cor2 = 232U;
    msg.cor3 = 222U;

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
    msg.setTimeStamp(0.831316403167);
    msg.setSource(38673U);
    msg.setSourceEntity(37U);
    msg.setDestination(48231U);
    msg.setDestinationEntity(64U);
    msg.cellposition = 0.351245469306;
    msg.x = 0.602898967226;
    msg.y = 0.740242216239;
    msg.z1 = 0.563753374201;
    msg.z2 = 0.893065660311;
    msg.amp0 = 0.175229683818;
    msg.amp1 = 0.981339759188;
    msg.amp2 = 0.746970289704;
    msg.amp3 = 0.751421407522;
    msg.cor0 = 33U;
    msg.cor1 = 94U;
    msg.cor2 = 84U;
    msg.cor3 = 73U;

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
    msg.setTimeStamp(0.638798196145);
    msg.setSource(15216U);
    msg.setSourceEntity(234U);
    msg.setDestination(25415U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.418211180772);
    msg.setSource(29249U);
    msg.setSourceEntity(241U);
    msg.setDestination(60515U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.697196381994);
    msg.setSource(28122U);
    msg.setSourceEntity(177U);
    msg.setDestination(60223U);
    msg.setDestinationEntity(84U);

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
    IMC::TBRFishTag msg;
    msg.setTimeStamp(0.959211771777);
    msg.setSource(43458U);
    msg.setSourceEntity(183U);
    msg.setDestination(33287U);
    msg.setDestinationEntity(231U);
    msg.serial_no = 4284499327U;
    msg.unix_timestamp = 1893425013U;
    msg.millis = 27321U;
    msg.trans_protocol = 99U;
    msg.trans_id = 3473236900U;
    msg.trans_data = 14945U;
    msg.snr = 188U;
    msg.trans_freq = 26U;
    msg.recv_mem_addr = 54535U;

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
    msg.setTimeStamp(0.380616639205);
    msg.setSource(59603U);
    msg.setSourceEntity(101U);
    msg.setDestination(52004U);
    msg.setDestinationEntity(155U);
    msg.serial_no = 409346548U;
    msg.unix_timestamp = 3515729795U;
    msg.millis = 65076U;
    msg.trans_protocol = 187U;
    msg.trans_id = 1662942923U;
    msg.trans_data = 37239U;
    msg.snr = 194U;
    msg.trans_freq = 156U;
    msg.recv_mem_addr = 20875U;

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
    msg.setTimeStamp(0.951655598939);
    msg.setSource(18894U);
    msg.setSourceEntity(38U);
    msg.setDestination(44369U);
    msg.setDestinationEntity(80U);
    msg.serial_no = 3256283889U;
    msg.unix_timestamp = 3094349805U;
    msg.millis = 32154U;
    msg.trans_protocol = 124U;
    msg.trans_id = 3378407303U;
    msg.trans_data = 21587U;
    msg.snr = 48U;
    msg.trans_freq = 185U;
    msg.recv_mem_addr = 20664U;

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
    msg.setTimeStamp(0.701472894305);
    msg.setSource(47059U);
    msg.setSourceEntity(254U);
    msg.setDestination(58594U);
    msg.setDestinationEntity(198U);
    msg.serial_no = 2274205564U;
    msg.unix_timestamp = 1369345530U;
    msg.temperature = 0.408802725567;
    msg.avg_noise_level = 248U;
    msg.peak_noise_level = 41U;
    msg.recv_listen_freq = 254U;
    msg.recv_mem_addr = 45562U;

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
    msg.setTimeStamp(0.479108216298);
    msg.setSource(55111U);
    msg.setSourceEntity(210U);
    msg.setDestination(10543U);
    msg.setDestinationEntity(6U);
    msg.serial_no = 3184537271U;
    msg.unix_timestamp = 1299795971U;
    msg.temperature = 0.795067480629;
    msg.avg_noise_level = 52U;
    msg.peak_noise_level = 112U;
    msg.recv_listen_freq = 44U;
    msg.recv_mem_addr = 60541U;

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
    msg.setTimeStamp(0.552379091943);
    msg.setSource(3722U);
    msg.setSourceEntity(103U);
    msg.setDestination(43777U);
    msg.setDestinationEntity(200U);
    msg.serial_no = 3814812617U;
    msg.unix_timestamp = 3786327034U;
    msg.temperature = 0.338289603515;
    msg.avg_noise_level = 107U;
    msg.peak_noise_level = 103U;
    msg.recv_listen_freq = 94U;
    msg.recv_mem_addr = 12462U;

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

  return test.getReturnValue();
}

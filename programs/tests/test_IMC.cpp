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
// IMC XML MD5: b74b7b539df3601fb358d4b65474dd62                            *
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
    msg.setTimeStamp(0.309015636072);
    msg.setSource(38392U);
    msg.setSourceEntity(167U);
    msg.setDestination(37310U);
    msg.setDestinationEntity(242U);
    msg.state = 131U;
    msg.flags = 196U;
    msg.description.assign("MTGCHOFAHDFYGMXKAOHZKAUDYPNCRVXOCLWNXBNJPWNXYUNMQXJWTUMSLVQ");

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
    msg.setTimeStamp(0.827725040341);
    msg.setSource(41972U);
    msg.setSourceEntity(111U);
    msg.setDestination(65531U);
    msg.setDestinationEntity(38U);
    msg.state = 229U;
    msg.flags = 6U;
    msg.description.assign("HUXOUSOJAJFJYKWCYCUXLYXBTVRIFTPPZRMGXVKIJCFWPNDEVWHWWTUGARSUYJREGWMLIHIJTSCGXTFAAKDQKAFCDBCODVPEHUDVTWLGGPFMQWRQHDGINTQGAZBVFSOCZLNNQJBOXBIZPFGRNZNEHSJBABLYNTEMISEQDMVUZXYYSKLXUQOHTPKJPABMDGSBTOCYFXCIQSOFKLMOYBYZPVKOEEKNRXUCJLVRDEAIAHM");

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
    msg.setTimeStamp(0.711904859004);
    msg.setSource(28239U);
    msg.setSourceEntity(134U);
    msg.setDestination(59623U);
    msg.setDestinationEntity(239U);
    msg.state = 177U;
    msg.flags = 193U;
    msg.description.assign("PBIJGIWWBMNBUKALKGXNDEWDCPOFHONMNJPTXYKNVALHEVUAMBKPNXKDLYTULEIVTJRCQNGYFRBTYGHCRNIYQSTDITOWEQPPUJZVIZJSFBSGWAZZHSWVRMQXLTMXZHQKZ");

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
    msg.setTimeStamp(0.424543792107);
    msg.setSource(41644U);
    msg.setSourceEntity(211U);
    msg.setDestination(28436U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.65647655916);
    msg.setSource(436U);
    msg.setSourceEntity(201U);
    msg.setDestination(54100U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.132425817456);
    msg.setSource(18U);
    msg.setSourceEntity(34U);
    msg.setDestination(23277U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.983149692619);
    msg.setSource(12252U);
    msg.setSourceEntity(69U);
    msg.setDestination(9924U);
    msg.setDestinationEntity(219U);
    msg.id = 137U;
    msg.label.assign("LNNVXKWCAXEJSJVXPMYCQWPTSIHYOHHLLMVUJWNFXXKDVOEMYDRWTDXCFUCHWTKQDAFDBKAFMAPUWXUBTNYIPRMGJGZZNNIRVQRVZPWDOZQEOSUVZFEOGBCQBDGUAMWTJSHNQCGYMOLEXEIRZKERYZDFSVIEHZOISOBWROSNHTCHPSAAEJLMFZIQUYBCAVPXLDKRCVMYTLATJYTGGISJYMUBZPKBFGUCLGBIROKSPALEQBLNRITUWFDGQKJHNF");
    msg.component.assign("DLHQHQBDKGYILWPKBABVKQCXRNHBWWSVAGXSRJAHMMZVKTPIMJJELWPXZOQQNCPDWZYDFRFLTKPZAXEUSPEDEQOTCDVBJSNGTYXIDIDUICYYXYFLUOWGZBEOVQCUAOOBLPVIPKKRNEXMNWMZGLFCVPXJHXUGMFIRAASUOHQNGGSZOFAMMLWTNJSEWYRUKDSCEQEMCYUUBUGZBNTIBTDKRGL");
    msg.act_time = 30252U;
    msg.deact_time = 53102U;

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
    msg.setTimeStamp(0.405082374155);
    msg.setSource(15721U);
    msg.setSourceEntity(185U);
    msg.setDestination(60775U);
    msg.setDestinationEntity(115U);
    msg.id = 102U;
    msg.label.assign("LDKZNWECJHSICBFFILLOHUMFFFUXJPEWRRVAWOCIXPSKBRBPVQKTHOJMXZYTMTGXZCLNGGSURQYTITCIKVEUQOVABMAZRSPYQAYVSTLXUUM");
    msg.component.assign("OHEKIAPRRVCBOFJUWSJJRSHVMLYKMPWINIUVWSSWLTJDHCQPMZGXQFKRFFBEASPUUZEVDLAHLZTLYBKGTSHMXNQRFDNRCVGNDJRGCPDDGSUKIQBYJIYKIAZP");
    msg.act_time = 47482U;
    msg.deact_time = 40154U;

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
    msg.setTimeStamp(0.46284219463);
    msg.setSource(47478U);
    msg.setSourceEntity(148U);
    msg.setDestination(34762U);
    msg.setDestinationEntity(192U);
    msg.id = 215U;
    msg.label.assign("SSMFCTPNRXUDNBHOZMCGJDUNGFQAMULSCYTVFBKJPUWNTEXUJHEHRDEWR");
    msg.component.assign("GPDGWQMHMRVSSCECVDFQZXABVKEWSMAOJUCNWYFVPTFOEHRZXWPZBAEKDUID");
    msg.act_time = 38093U;
    msg.deact_time = 2044U;

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
    msg.setTimeStamp(0.876866773604);
    msg.setSource(4363U);
    msg.setSourceEntity(30U);
    msg.setDestination(15659U);
    msg.setDestinationEntity(184U);
    msg.id = 100U;

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
    msg.setTimeStamp(0.764671569205);
    msg.setSource(53192U);
    msg.setSourceEntity(192U);
    msg.setDestination(37859U);
    msg.setDestinationEntity(186U);
    msg.id = 235U;

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
    msg.setTimeStamp(0.255868278776);
    msg.setSource(63483U);
    msg.setSourceEntity(253U);
    msg.setDestination(56664U);
    msg.setDestinationEntity(204U);
    msg.id = 192U;

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
    msg.setTimeStamp(0.268219826721);
    msg.setSource(15484U);
    msg.setSourceEntity(173U);
    msg.setDestination(41637U);
    msg.setDestinationEntity(23U);
    msg.op = 140U;
    msg.list.assign("EYMONUJSTFKIZJYWQGWITOKZTMXJMHPDVGAJLQFDBLKQCWGBVXZHCVSJTFXXSFVMOSLVRQCLNECLNYPRGYLHCOKNADYRHMANWGRUZKTSZLNZQUJPYJLFCMAHDHFXPREGPPFPJESBUZXFRUFDWOMAIVIDCWYGJAYHQHMQDXUSGGBWBEPXETUODRCBVZTKSCCIUJNBOMKRDVXKFYPIWTDIIKASHNRSOTMBQ");

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
    msg.setTimeStamp(0.621965557328);
    msg.setSource(56415U);
    msg.setSourceEntity(105U);
    msg.setDestination(23172U);
    msg.setDestinationEntity(123U);
    msg.op = 207U;
    msg.list.assign("TQTZIIQLHVTDKGPKQSHHBHOKLKQBZMDPRBLDTNEUJINQVRVOTJCWXVLWSDUPLF");

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
    msg.setTimeStamp(0.616097788157);
    msg.setSource(11450U);
    msg.setSourceEntity(150U);
    msg.setDestination(56341U);
    msg.setDestinationEntity(90U);
    msg.op = 86U;
    msg.list.assign("UFIMJTKMUCEGZUR");

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
    msg.setTimeStamp(0.637867585252);
    msg.setSource(50450U);
    msg.setSourceEntity(251U);
    msg.setDestination(12947U);
    msg.setDestinationEntity(53U);
    msg.value = 231U;

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
    msg.setTimeStamp(0.825033838783);
    msg.setSource(64766U);
    msg.setSourceEntity(0U);
    msg.setDestination(21679U);
    msg.setDestinationEntity(10U);
    msg.value = 39U;

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
    msg.setTimeStamp(0.341011306965);
    msg.setSource(559U);
    msg.setSourceEntity(99U);
    msg.setDestination(63693U);
    msg.setDestinationEntity(151U);
    msg.value = 128U;

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
    msg.setTimeStamp(0.716590382839);
    msg.setSource(26809U);
    msg.setSourceEntity(229U);
    msg.setDestination(25983U);
    msg.setDestinationEntity(109U);
    msg.consumer.assign("QMGTSOHUSAOZXRQLFCXOSEFHXHXEUWCZLLIZRKPOYKICGMTVVDSSEGIBJGDHLRYWCDSMQRWPVMUPPNKHJQYNUQGHYFAMZIYCZDOREDORVJEIXBAJJHWNWCJDZIMCWQCOXXHJEOKBKWTRFJB");
    msg.message_id = 36198U;

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
    msg.setTimeStamp(0.56004616645);
    msg.setSource(63632U);
    msg.setSourceEntity(54U);
    msg.setDestination(42556U);
    msg.setDestinationEntity(241U);
    msg.consumer.assign("VZJRMQVYESWNTLSCXGMXROWRCGGVMUBGQEKYWQKIHGEPQZAEFBCGDDUUSZTCOFSKGTBYQMXXXGRFONROBVHQCITWLPLYNAJFXFZPATMFBKTIVSSFAQIHOSHYUXFRNMDLRRBNVKGYXUUDDKHWCKELHVOLNAZPIELMWIZQSDUVPAFJKDNZUMYILIZYXSOCC");
    msg.message_id = 42654U;

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
    msg.setTimeStamp(0.756057641731);
    msg.setSource(60990U);
    msg.setSourceEntity(180U);
    msg.setDestination(18303U);
    msg.setDestinationEntity(166U);
    msg.consumer.assign("GLXMGCDHLSNYPGCAGTQWEZEAYHDPVVVBFKFOWHPQRKEUMTHIKEASXBNQWVUGPETKCPHFDFSNOXYHSSBDSGWAEOFDXLTRRLCMJWJTBCJMAKBHGORJOSMQXCROZAIXTRPWVGKVQNONKJLIXXIEINNJUWVZSFINZYSUVZBDWQCXRBRBDJBOYTMRQFWHOLIFNYPVYIJUOAJIQL");
    msg.message_id = 34330U;

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
    msg.setTimeStamp(0.393713553673);
    msg.setSource(55532U);
    msg.setSourceEntity(43U);
    msg.setDestination(17427U);
    msg.setDestinationEntity(242U);
    msg.type = 36U;

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
    msg.setTimeStamp(0.540074079939);
    msg.setSource(55088U);
    msg.setSourceEntity(196U);
    msg.setDestination(34059U);
    msg.setDestinationEntity(5U);
    msg.type = 171U;

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
    msg.setTimeStamp(0.420398253514);
    msg.setSource(52752U);
    msg.setSourceEntity(86U);
    msg.setDestination(53991U);
    msg.setDestinationEntity(243U);
    msg.type = 93U;

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
    msg.setTimeStamp(0.0549796015837);
    msg.setSource(65311U);
    msg.setSourceEntity(138U);
    msg.setDestination(25748U);
    msg.setDestinationEntity(150U);
    msg.op = 34U;

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
    msg.setTimeStamp(0.0466581522131);
    msg.setSource(30748U);
    msg.setSourceEntity(146U);
    msg.setDestination(51759U);
    msg.setDestinationEntity(222U);
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
    msg.setTimeStamp(0.971914368243);
    msg.setSource(35283U);
    msg.setSourceEntity(148U);
    msg.setDestination(25817U);
    msg.setDestinationEntity(42U);
    msg.op = 241U;

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
    msg.setTimeStamp(0.765438723482);
    msg.setSource(33491U);
    msg.setSourceEntity(67U);
    msg.setDestination(16573U);
    msg.setDestinationEntity(128U);
    msg.total_steps = 31U;
    msg.step_number = 223U;
    msg.step.assign("FJXEOEMKSPQCHFHMACINPYFNLMQPGEGXTRJNXEJLVGZCRAVEIKXXAOIRHKXKDYGCSAUJWSALVRVJTWLERWVKNGRFPEEVVWBZUDBABTYCOCRBDNLYBBTNRUSRNMOSZOVOHCOMBHIKWUUJFUJVRCZPLBLMPPDXWZGKXTQJMAVCIDTQZYPISMGXWFSHGSFNEZQPTQYGFMIUDYDSAKTOLZ");
    msg.flags = 175U;

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
    msg.setTimeStamp(0.502145764152);
    msg.setSource(44231U);
    msg.setSourceEntity(197U);
    msg.setDestination(62690U);
    msg.setDestinationEntity(112U);
    msg.total_steps = 246U;
    msg.step_number = 190U;
    msg.step.assign("YBJIZRBQNPUOKHXZOCPGBAOFKGYCZAQAGCMANHGOQKXMDFEEFYXQXBHPJJNVGBLFLZOOUOFLQMUNWEVIAXUMDMLOUNBEW");
    msg.flags = 25U;

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
    msg.setTimeStamp(0.22776220979);
    msg.setSource(1831U);
    msg.setSourceEntity(187U);
    msg.setDestination(12328U);
    msg.setDestinationEntity(98U);
    msg.total_steps = 108U;
    msg.step_number = 147U;
    msg.step.assign("BFUQNGCFPAWVWIFOIDRVLB");
    msg.flags = 208U;

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
    msg.setTimeStamp(0.530217315454);
    msg.setSource(52126U);
    msg.setSourceEntity(163U);
    msg.setDestination(7583U);
    msg.setDestinationEntity(29U);
    msg.state = 79U;
    msg.error.assign("YYWZGHJSOZYAOPOQZDHIJCNLBCUNAPYWDIFIQDBRMVFJWGSEVWWSBORDQLOFPHUMABZEZHDFJAMFRHKSWDMFZGIUCULAMYCXIBAKICLNSOMZHUQTVUBNWUJCKFNNOXKT");

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
    msg.setTimeStamp(0.696408623503);
    msg.setSource(57205U);
    msg.setSourceEntity(236U);
    msg.setDestination(15649U);
    msg.setDestinationEntity(150U);
    msg.state = 49U;
    msg.error.assign("XDNXUPXKBEQIIFGJMWIJRDTRQNWNDPDKAYTUZTEIWOMQMIWXGANHBZVFFNWPJRQPATGUAJLAIEMQYXEYPNCLYTRGDMK");

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
    msg.setTimeStamp(0.098938659887);
    msg.setSource(54003U);
    msg.setSourceEntity(74U);
    msg.setDestination(5206U);
    msg.setDestinationEntity(88U);
    msg.state = 87U;
    msg.error.assign("UIAHFBRKILVLWBYBRNNTWAJMRXVPSVGRNXEBVEZCKNTDLFKQXXOGQBLHZTFUJQWGSIRUDQYG");

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
    msg.setTimeStamp(0.239474908183);
    msg.setSource(23393U);
    msg.setSourceEntity(85U);
    msg.setDestination(44937U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.486018531125);
    msg.setSource(47945U);
    msg.setSourceEntity(25U);
    msg.setDestination(61584U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.925478041483);
    msg.setSource(41815U);
    msg.setSourceEntity(0U);
    msg.setDestination(48514U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.796115866343);
    msg.setSource(58937U);
    msg.setSourceEntity(120U);
    msg.setDestination(40322U);
    msg.setDestinationEntity(243U);
    msg.op = 72U;
    msg.speed_min = 0.389342812179;
    msg.speed_max = 0.029350679403;
    msg.long_accel = 0.553961098679;
    msg.alt_max_msl = 0.455941748496;
    msg.dive_fraction_max = 0.23380986173;
    msg.climb_fraction_max = 0.859378725904;
    msg.bank_max = 0.490736212747;
    msg.p_max = 0.471706361361;
    msg.pitch_min = 0.475944524283;
    msg.pitch_max = 0.192077551875;
    msg.q_max = 0.274360025097;
    msg.g_min = 0.595021255927;
    msg.g_max = 0.0201004168445;
    msg.g_lat_max = 0.312389419882;
    msg.rpm_min = 0.0510028999092;
    msg.rpm_max = 0.186341781254;
    msg.rpm_rate_max = 0.151697407233;

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
    msg.setTimeStamp(0.0953081357483);
    msg.setSource(32082U);
    msg.setSourceEntity(53U);
    msg.setDestination(18350U);
    msg.setDestinationEntity(105U);
    msg.op = 117U;
    msg.speed_min = 0.0486742228927;
    msg.speed_max = 0.768012608474;
    msg.long_accel = 0.752959884909;
    msg.alt_max_msl = 0.159562148812;
    msg.dive_fraction_max = 0.66250400577;
    msg.climb_fraction_max = 0.996573839743;
    msg.bank_max = 0.423611100488;
    msg.p_max = 0.826263667718;
    msg.pitch_min = 0.859934241495;
    msg.pitch_max = 0.0328963078268;
    msg.q_max = 0.719544384606;
    msg.g_min = 0.197157571801;
    msg.g_max = 0.101461004712;
    msg.g_lat_max = 0.810412611794;
    msg.rpm_min = 0.41922554474;
    msg.rpm_max = 0.494374166817;
    msg.rpm_rate_max = 0.860680722415;

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
    msg.setTimeStamp(0.722669310228);
    msg.setSource(17905U);
    msg.setSourceEntity(37U);
    msg.setDestination(46943U);
    msg.setDestinationEntity(167U);
    msg.op = 203U;
    msg.speed_min = 0.341055410389;
    msg.speed_max = 0.526725416029;
    msg.long_accel = 0.976246244909;
    msg.alt_max_msl = 0.333543105731;
    msg.dive_fraction_max = 0.0785450495853;
    msg.climb_fraction_max = 0.156727862437;
    msg.bank_max = 0.780763984669;
    msg.p_max = 0.0117205529827;
    msg.pitch_min = 0.325085718198;
    msg.pitch_max = 0.990914972021;
    msg.q_max = 0.636389278787;
    msg.g_min = 0.228235504733;
    msg.g_max = 0.214690521119;
    msg.g_lat_max = 0.912623049824;
    msg.rpm_min = 0.315447599248;
    msg.rpm_max = 0.685357273037;
    msg.rpm_rate_max = 0.0433064176705;

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
    msg.setTimeStamp(0.810675704128);
    msg.setSource(63364U);
    msg.setSourceEntity(51U);
    msg.setDestination(52391U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.402808734526);
    msg.setSource(16203U);
    msg.setSourceEntity(33U);
    msg.setDestination(6216U);
    msg.setDestinationEntity(195U);
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 2122382196U;
    tmp_msg_0.messages.assign("WOJKHQKIUDRNBGYEPFUHKRWNVBKKDBHNTAMYLQTVCSSULTLGTVSQNDHLKQOTOISAMNCOABLRGSZOCNXMGGDCTZDFRZBNWEXEKHWVYQNVUXTMFLWDMDGYPOICGIBGXXZJYJSQJVHSZXPRVMKWDUEYLWVFZWXZFJZZYAHMBHXUKXQJOSFGUSJMIRPICMCYQPCNLFBE");
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
    msg.setTimeStamp(0.663026090607);
    msg.setSource(64903U);
    msg.setSourceEntity(141U);
    msg.setDestination(32336U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.281224058654);
    msg.setSource(59776U);
    msg.setSourceEntity(141U);
    msg.setDestination(12690U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.475095705427;
    msg.lon = 0.838360942321;
    msg.height = 0.03032579732;
    msg.x = 0.396274382335;
    msg.y = 0.326813273189;
    msg.z = 0.747160420443;
    msg.phi = 0.631878642252;
    msg.theta = 0.284569620571;
    msg.psi = 0.015000775249;
    msg.u = 0.657584726209;
    msg.v = 0.618893774505;
    msg.w = 0.387915407036;
    msg.p = 0.481829957525;
    msg.q = 0.903962258807;
    msg.r = 0.683523184097;
    msg.svx = 0.729110445487;
    msg.svy = 0.481121720533;
    msg.svz = 0.515442068954;

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
    msg.setTimeStamp(0.0331682663698);
    msg.setSource(19431U);
    msg.setSourceEntity(186U);
    msg.setDestination(48000U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.186418230397;
    msg.lon = 0.0534737198841;
    msg.height = 0.737847116963;
    msg.x = 0.434066727365;
    msg.y = 0.844852314091;
    msg.z = 0.55694922409;
    msg.phi = 0.540435756567;
    msg.theta = 0.722379383609;
    msg.psi = 0.986219140008;
    msg.u = 0.625117464034;
    msg.v = 0.859827275217;
    msg.w = 0.621966641666;
    msg.p = 0.980686089777;
    msg.q = 0.96844616633;
    msg.r = 0.123511785339;
    msg.svx = 0.4704341124;
    msg.svy = 0.709538686203;
    msg.svz = 0.24814105596;

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
    msg.setTimeStamp(0.66327544853);
    msg.setSource(18321U);
    msg.setSourceEntity(216U);
    msg.setDestination(11695U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.0860022392069;
    msg.lon = 0.380115668884;
    msg.height = 0.440691277606;
    msg.x = 0.155120616414;
    msg.y = 0.610525415149;
    msg.z = 0.0585451510176;
    msg.phi = 0.92677717777;
    msg.theta = 0.669942841028;
    msg.psi = 0.746690714235;
    msg.u = 0.92144418694;
    msg.v = 0.191125826007;
    msg.w = 0.233536525026;
    msg.p = 0.409834001994;
    msg.q = 0.913127678833;
    msg.r = 0.954151685925;
    msg.svx = 0.00840406775523;
    msg.svy = 0.0387946137174;
    msg.svz = 0.674690773796;

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
    msg.setTimeStamp(0.15665853402);
    msg.setSource(35543U);
    msg.setSourceEntity(86U);
    msg.setDestination(43681U);
    msg.setDestinationEntity(52U);
    msg.op = 78U;
    msg.entities.assign("QRMEFARUUYRAIRXISKFNIKUCBOCZWANBFCBGVTOGRPIVDGTQPFXZPVCAEFAAZJGRWHXJWPAMDLTEOVOMBEWJYYZMUOXUGTGZOEMKSSHAZDMBWEKOLEVUCTTKYGDFGBPKQWFPXROTSSXHCNVYSENSXRGQBHYBZBFVPUYSVMMKLVNRBWJXLODHXQUDPIPIWNAUJEDICYZLQZNDMQRJKQILILHH");

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
    msg.setTimeStamp(0.387495009067);
    msg.setSource(44847U);
    msg.setSourceEntity(192U);
    msg.setDestination(41394U);
    msg.setDestinationEntity(128U);
    msg.op = 98U;
    msg.entities.assign("AJGOZCHFRFXGNWCLFSUBDQBKTQTOFPASNUGCGDEUUVOZHFIPHMWFBPVNDNHPXKQUGJEKVVIJPYKJGMUKVQJIFCHEWCOYNBYHQLRPIEQSELVUDDWSMTFJBXBKCIOTVSMVBYZUDXAVZNLREQMJRZNRWWMGINUSTYSIMPAYAYPQRUEEYYATGCCLAFXDPMZBEDEHXTIRLTBNQCSOLHOGCARWASZOOGZRZIWKZDOVMRPMKWHILSJTKHXLNJWX");

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
    msg.setTimeStamp(0.822328308523);
    msg.setSource(59887U);
    msg.setSourceEntity(190U);
    msg.setDestination(28375U);
    msg.setDestinationEntity(116U);
    msg.op = 95U;
    msg.entities.assign("ZZJNUXPEYOIKAGYDZPFYNSSDZTBWMOWANTGCJBMEHLSQPAKQVLPADUXRFIKARBUYQNMNQXKOCIGALXEPCHSIOOZJWLQTASLKSVO");

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
    msg.setTimeStamp(0.391315754939);
    msg.setSource(34285U);
    msg.setSourceEntity(214U);
    msg.setDestination(57505U);
    msg.setDestinationEntity(23U);
    msg.type = 142U;
    msg.speed = 45025U;
    const char tmp_msg_0[] = {88, -118, -34, -97, 45, -122, 46, 28, 94, -20, -102, 57, -114, 66, -61, 114, -12, -36, -27, -32, -39, -49, 119, 122, -5, 12, 98, 39};
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
    msg.setTimeStamp(0.187116447869);
    msg.setSource(10666U);
    msg.setSourceEntity(165U);
    msg.setDestination(45598U);
    msg.setDestinationEntity(142U);
    msg.type = 30U;
    msg.speed = 64882U;
    const char tmp_msg_0[] = {-112, -91, 79, -94, 94, -25, 116, 96, -47, -18, -85, -75, -53, 122, 89, 31, -121, -77, 45, -2, 91, 55, -85, -104, 59, -74, 91, 37, 73, 104, 36, -74, -39, 23, -40, 102, -100, 68, 38, -81, 71, 38, -26, -72, -66, 105, -70, -73};
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
    msg.setTimeStamp(0.196505685595);
    msg.setSource(10110U);
    msg.setSourceEntity(82U);
    msg.setDestination(31044U);
    msg.setDestinationEntity(140U);
    msg.type = 171U;
    msg.speed = 62809U;
    const char tmp_msg_0[] = {-23, 27, 9, -48, 6, 36, -105, 122, -74, 70, 122, -98, 63, -74, 89, 95, 67, -18, -86, -121, 12, 15, -14, 75, 16, 92, -40, 92, 20, 95, -57, -116, -20, -1, 35, 27, -120, -11, -40, -109, 31, -62, 101, 43, 16, 58, 94, 60, 4, -49, -11};
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
    msg.setTimeStamp(0.137532435277);
    msg.setSource(63888U);
    msg.setSourceEntity(31U);
    msg.setDestination(29349U);
    msg.setDestinationEntity(112U);
    msg.op = 160U;
    msg.tas2acc_pgain = 0.0281816902244;
    msg.bank2p_pgain = 0.735010365003;

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
    msg.setTimeStamp(0.000939511205595);
    msg.setSource(2403U);
    msg.setSourceEntity(131U);
    msg.setDestination(8437U);
    msg.setDestinationEntity(231U);
    msg.op = 4U;
    msg.tas2acc_pgain = 0.227999903034;
    msg.bank2p_pgain = 0.235067833369;

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
    msg.setTimeStamp(0.555768602437);
    msg.setSource(56947U);
    msg.setSourceEntity(110U);
    msg.setDestination(32578U);
    msg.setDestinationEntity(176U);
    msg.op = 68U;
    msg.tas2acc_pgain = 0.321744174739;
    msg.bank2p_pgain = 0.93347929886;

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
    msg.setTimeStamp(0.443218173508);
    msg.setSource(2560U);
    msg.setSourceEntity(14U);
    msg.setDestination(60432U);
    msg.setDestinationEntity(250U);
    msg.available = 713597186U;
    msg.value = 176U;

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
    msg.setTimeStamp(0.646864897853);
    msg.setSource(25955U);
    msg.setSourceEntity(236U);
    msg.setDestination(2375U);
    msg.setDestinationEntity(45U);
    msg.available = 2861202656U;
    msg.value = 224U;

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
    msg.setTimeStamp(0.835423657306);
    msg.setSource(52364U);
    msg.setSourceEntity(139U);
    msg.setDestination(31414U);
    msg.setDestinationEntity(10U);
    msg.available = 1670999313U;
    msg.value = 221U;

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
    msg.setTimeStamp(0.368136357999);
    msg.setSource(24041U);
    msg.setSourceEntity(134U);
    msg.setDestination(18381U);
    msg.setDestinationEntity(62U);
    msg.op = 159U;
    msg.snapshot.assign("UTKAZKULVPXUVQDXVXZQPWGRTLDTCBWKMZZNQJPJYOCMHYSLAHWDGXKLCJEBHOFNBMMRFQUAADVPRKWITLFTREEFOSRBIMVDZPYQWSIYGODRJSXYAGEOTSQQCRXJDXPTMLUPXQUUIYHXDGXISVCVZIBAHFPPBMLFFRGWNZJJBCEAFKFPTLKRIWODWNNDVYQNAZVSNNOWHELHMJOGYSSYNUKYNIBEMUHZETHCFTGQUCGIVIJSJCCMKGBAELH");
    IMC::Heave tmp_msg_0;
    tmp_msg_0.value = 0.499089130227;
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
    msg.setTimeStamp(0.214672633152);
    msg.setSource(18386U);
    msg.setSourceEntity(150U);
    msg.setDestination(7755U);
    msg.setDestinationEntity(44U);
    msg.op = 254U;
    msg.snapshot.assign("AGDXRNLEPGPYBNWLXLFUAGPFUMJGCMKAKKZUDABE");
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("RHWMSEYCGYJCJFJBKKJLFGLLRQYKSPEMJOLQMVDPIUVQHTKUEGXUSTIZOYXSQNNPCXFVFFRCZNR");
    tmp_msg_0.data.assign("QEVSZGFRUV");
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
    msg.setTimeStamp(0.503211723021);
    msg.setSource(63628U);
    msg.setSourceEntity(37U);
    msg.setDestination(44863U);
    msg.setDestinationEntity(242U);
    msg.op = 87U;
    msg.snapshot.assign("GHWISOZCJRKBPWKRLKIBWFHRDMQDNXFUAZUFGKUUGGPEDJOYPESEHSQEKCTJTXQAPYAAEYLYGGTFLNXJZDKEFAKOCHODBQMINQTCHBRZDMBLMIPJAMMDONVOLUMMOCXWCTRXTKPTFINVYVZBZJJNMQVVNRZJXESVCBHDAGALUEJBDZZFANUXYYWESRWFCZRYOSBLQIQLQDNGYVFUBGGINRVFAPSHCHUYTWSOWQWXPTUJIXHTHPMSLC");
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 34217U;
    tmp_msg_0.lat = 0.609181039908;
    tmp_msg_0.lon = 0.550573157647;
    tmp_msg_0.z = 0.520930434571;
    tmp_msg_0.z_units = 46U;
    tmp_msg_0.speed = 0.245646486459;
    tmp_msg_0.speed_units = 65U;
    tmp_msg_0.bearing = 0.574409102785;
    tmp_msg_0.width = 0.675125107104;
    tmp_msg_0.direction = 204U;
    tmp_msg_0.custom.assign("YYIGQRCGDAFXDHVTZRMSPLAEQJFNWWOCAVYZAXZSAKZVNPGJUECNGDLCXNBIJHFKPOPSODLZAJNUMHDMZV");
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
    msg.setTimeStamp(0.824081624125);
    msg.setSource(27769U);
    msg.setSourceEntity(162U);
    msg.setDestination(10117U);
    msg.setDestinationEntity(24U);
    msg.op = 226U;
    msg.name.assign("WIFRCYITBQNFXVJQIWAIMQRLSXQH");

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
    msg.setTimeStamp(0.0566864683317);
    msg.setSource(2630U);
    msg.setSourceEntity(226U);
    msg.setDestination(47778U);
    msg.setDestinationEntity(53U);
    msg.op = 147U;
    msg.name.assign("RMPSWGKVITLYHICMIEJXLYKTQDLGMGBLWPSGAXFOOCZPZQQBNCVYIFVDQNHDAMKWOIMDWEDICHYMOPPXJTHSIBLWCMHEBFLWMQNWEVKUNDYNGTIGCNJLBSTXRYOHARLPZYVVURNVUCYZWRVJEZJBTUUAFGKPJGEQUPFKKZMFJTGXUPHSJXNKXSZUOCBAAABGQESXZEHQJ");

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
    msg.setTimeStamp(0.457649165893);
    msg.setSource(13299U);
    msg.setSourceEntity(225U);
    msg.setDestination(27263U);
    msg.setDestinationEntity(19U);
    msg.op = 36U;
    msg.name.assign("LWJTXGOBMPXVFEOSCRZJLBMVNDJMKDFAZZYUCLAKPZBMAZKNJFRKWMEMPNXNCAJMIMVELLQBGRQRQZTPRQVJJZXYECZKYQYKLHURHINPILNUJETPOQBQVXMDLYPTFFCWFVCSVYWBDJSGHRHSDNHPEJYYSTIFOAWSBYIUOCZOUVVOXEKPOHYGSXENSUWHSAXGIGHOUMIBFEKHXLXRCTANRGKLATZICQODTGEWCRPUIUH");

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
    msg.setTimeStamp(0.227751066622);
    msg.setSource(8652U);
    msg.setSourceEntity(178U);
    msg.setDestination(57812U);
    msg.setDestinationEntity(192U);
    msg.type = 50U;
    msg.htime = 0.134109728087;
    msg.context.assign("PMRLGXOQJOXKWMPGHTJXBOCTFVNNHPTMXJLOBILXIVELMRXUCMOKTYZUW");
    msg.text.assign("CTITVZKQCJOMAWGJRRHWHSDAFMXGEWGRWSBGLUTGHPGOXODJDYENORTKPVEESZZLHUBCDNQAJFFFEEKIRKCXKSGZETEOBBDDASTCQYVAVXJBJOPNNLXAYSCQZJTWCNOUHXHMFPNPZXFOAZDBHHBBVYPMOSFUFMQULDIXWMUV");

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
    msg.setTimeStamp(0.406781743041);
    msg.setSource(36945U);
    msg.setSourceEntity(18U);
    msg.setDestination(39539U);
    msg.setDestinationEntity(230U);
    msg.type = 60U;
    msg.htime = 0.501024750088;
    msg.context.assign("GTJPRKKRVAFGDIULGQKPWRRJATIKGFIVEDOFEAMUABDLKLLUADE");
    msg.text.assign("MXQYZYQDHZDBZFRKQMAJETKJQEQUFAKMKMDGWJXGKNERAIQPPSLFEENHTGJNGJXYMLGYLBBOLOZVVAEKRZLUORSYZYMMJ");

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
    msg.setTimeStamp(0.883936731557);
    msg.setSource(51771U);
    msg.setSourceEntity(127U);
    msg.setDestination(62565U);
    msg.setDestinationEntity(140U);
    msg.type = 33U;
    msg.htime = 0.59593838369;
    msg.context.assign("KMUXSLHDESWYDWAYETSZENJHYJCKXPLJESNNBFBTWPFBWZNWJXTPMIBQHLFNBCAQFFCCIWKEXCWTFIKLYFKQHJATMGRPMRSHZBXOUODVZLRIKNFLGUQDWSJZMAUMKREQMBPDLGVRVRAZCYKHSCKKCLDYXJQPHSTOGRIXHSANOAQIZJFIUAYIZDYTAOMIQQNEATYXGLNJCODRVBXOQUBV");
    msg.text.assign("FWWXCQHDOAAVIRSVKANAXTQZOKXECSKLTERBABMUCGTDBYGPIDIYIJHFBVJJKFEDYXNFKVLXWEPFZHGIBRXMVKMFDZYRWFOJECRSFNOIJXUJGTEGJHKMLXPMOYOHQKJLECBXAIOENVIYHDWWRCZTHQKWESZUFSCQNPQBSBMPUHMSMLUGVRJRDZNARWTSLPPLOYVDTFLNIVOOGYMHHDZDBZRCZQJCMQXUAAYNLUGPAGPCQQPT");

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
    msg.setTimeStamp(0.167494215753);
    msg.setSource(52086U);
    msg.setSourceEntity(49U);
    msg.setDestination(43983U);
    msg.setDestinationEntity(120U);
    msg.command = 152U;
    msg.htime = 0.0236057435154;

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
    msg.setTimeStamp(0.267748031713);
    msg.setSource(41529U);
    msg.setSourceEntity(135U);
    msg.setDestination(56967U);
    msg.setDestinationEntity(135U);
    msg.command = 17U;
    msg.htime = 0.714070788195;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 82U;
    tmp_msg_0.htime = 0.512826595537;
    tmp_msg_0.context.assign("IIEFTHWGRJHYQMTNHLPCKTKDLKJITPIFUVWGPKEEUJEMTDRGSMQOWZCWFNU");
    tmp_msg_0.text.assign("JXYGWQQTDOGJDUTFWRKUTROSRXQZWGFTFRDIPEEDOLDKNJPRWSHSPSUQFCBTJOYNXMNOKEIUNGAMUWRCMZIZQHEOZAEOGWHQEGKVECBZKNFNMPBWTVYZXGUJFLVYGNXVPHYVXVADPFXYBPQOSIWYXFDDUBIBVCCVXCWUQWEKLMHBSVDYSAHHLZOAETYZRNYMJROABMHCFANK");
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
    msg.setTimeStamp(0.750752981052);
    msg.setSource(63282U);
    msg.setSourceEntity(205U);
    msg.setDestination(29060U);
    msg.setDestinationEntity(9U);
    msg.command = 81U;
    msg.htime = 0.554454334857;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 56U;
    tmp_msg_0.htime = 0.427673227031;
    tmp_msg_0.context.assign("BPAHDDQNTBTDRUVOQGDVDQJOZCFUYCGUAMG");
    tmp_msg_0.text.assign("RCBPBTVNXWVANJKAOTTQHLCKRCLXPDGOHDJDTDKTASGSNEGEUKHJBQVDINIRZLQJRAJMPIMWRQUEVEDZBVCFCAHUQYZQGNEYXXYMMYBORPHVVJPHEOSLXIPKHEYGCTHERQPCXUQWZOWZSLLBBMQLKNYOFFZGTGZ");
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
    msg.setTimeStamp(0.167029405475);
    msg.setSource(61645U);
    msg.setSourceEntity(70U);
    msg.setDestination(32673U);
    msg.setDestinationEntity(160U);
    msg.op = 5U;
    msg.file.assign("DSLKPUQSKPRJNXYPHAOLICQEMUBLVZWQSVMSATLFYBKRNPHMGGPHDUJPLWNLVCCVOHGYJIXFKTHKWRBZSIIAEVXCTSGMQGEKUKYFNIUZAZPATDWCDEZACYCHYYCVHXBNXGWPOBNKWRZPNLQTGRROUESQEXVBJFEOFUDDNZRVTXFDZZRJQTYMBCMIHQFFOBUMLJHPJXXOSJWILOHFJJGWMXNZTRNUYKBORAGVQAEIT");

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
    msg.setTimeStamp(0.258178523387);
    msg.setSource(54839U);
    msg.setSourceEntity(109U);
    msg.setDestination(38813U);
    msg.setDestinationEntity(196U);
    msg.op = 24U;
    msg.file.assign("BKLVTSEPOTVBAMHFTZWNQOWYHXTXROYTRZRQBCGJZTYUSJUXTBFNOVNZJQMEIDFARCHXLRAMGNSCECIXKQGAYDXQHPDPLGYEUMHUBJGZBEPMLEBJHKRCMULZCJZKJRDOUSFPIKUJAVNELJDFYQDEQ");

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
    msg.setTimeStamp(0.731007794845);
    msg.setSource(6680U);
    msg.setSourceEntity(122U);
    msg.setDestination(8333U);
    msg.setDestinationEntity(57U);
    msg.op = 143U;
    msg.file.assign("FPJZEMYSCYLVTWIGUTYWNRKJXEWFCTCSEAPFCZUKUCQURIYJUVOKQMXAHGZQJKKAZHXKCWTEQFAUXWXDSVIDSBHOVIEPTXOODIJHDGBDJCRPUMUATMFBLWRRDYTATGPPJYSOOSBUBDFBGHDXNGNKLALNDHFYZRIAPESDCUOQRNWHRIGGRJJLZLQPLEBFIKTHENQAIWLNOWRQKSJWVMGCQMTHVHIEAZLZKMQYSGBMBE");

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
    msg.setTimeStamp(0.620597502409);
    msg.setSource(35963U);
    msg.setSourceEntity(230U);
    msg.setDestination(22888U);
    msg.setDestinationEntity(241U);
    msg.op = 14U;
    msg.clock = 0.551950823436;
    msg.tz = -56;

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
    msg.setTimeStamp(0.144374503732);
    msg.setSource(18769U);
    msg.setSourceEntity(140U);
    msg.setDestination(28776U);
    msg.setDestinationEntity(176U);
    msg.op = 202U;
    msg.clock = 0.38932623949;
    msg.tz = 45;

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
    msg.setTimeStamp(0.125765610599);
    msg.setSource(65461U);
    msg.setSourceEntity(34U);
    msg.setDestination(63506U);
    msg.setDestinationEntity(5U);
    msg.op = 37U;
    msg.clock = 0.583120027914;
    msg.tz = -5;

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
    msg.setTimeStamp(0.653639847647);
    msg.setSource(49658U);
    msg.setSourceEntity(182U);
    msg.setDestination(49872U);
    msg.setDestinationEntity(34U);
    msg.conductivity = 0.0453085972671;
    msg.temperature = 0.521600790404;
    msg.depth = 0.285540639402;

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
    msg.setTimeStamp(0.0308797868536);
    msg.setSource(19505U);
    msg.setSourceEntity(150U);
    msg.setDestination(37064U);
    msg.setDestinationEntity(126U);
    msg.conductivity = 0.493893442166;
    msg.temperature = 0.431299490424;
    msg.depth = 0.263947510014;

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
    msg.setTimeStamp(0.972298429232);
    msg.setSource(8459U);
    msg.setSourceEntity(168U);
    msg.setDestination(59909U);
    msg.setDestinationEntity(60U);
    msg.conductivity = 0.655798397527;
    msg.temperature = 0.438528936973;
    msg.depth = 0.134115971462;

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
    msg.setTimeStamp(0.238999202756);
    msg.setSource(29082U);
    msg.setSourceEntity(174U);
    msg.setDestination(14812U);
    msg.setDestinationEntity(145U);
    msg.altitude = 0.623740353906;
    msg.roll = 61445U;
    msg.pitch = 51188U;
    msg.yaw = 23964U;
    msg.speed = -15824;

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
    msg.setTimeStamp(0.380513922);
    msg.setSource(32182U);
    msg.setSourceEntity(55U);
    msg.setDestination(53213U);
    msg.setDestinationEntity(235U);
    msg.altitude = 0.202434287099;
    msg.roll = 15504U;
    msg.pitch = 14587U;
    msg.yaw = 30526U;
    msg.speed = 23126;

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
    msg.setTimeStamp(0.251936309426);
    msg.setSource(16932U);
    msg.setSourceEntity(36U);
    msg.setDestination(21749U);
    msg.setDestinationEntity(170U);
    msg.altitude = 0.460606023661;
    msg.roll = 16465U;
    msg.pitch = 38117U;
    msg.yaw = 52839U;
    msg.speed = -19088;

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
    msg.setTimeStamp(0.0575900865562);
    msg.setSource(47395U);
    msg.setSourceEntity(61U);
    msg.setDestination(47575U);
    msg.setDestinationEntity(147U);
    msg.altitude = 0.892429559233;
    msg.width = 0.00155563627558;
    msg.length = 0.849933400979;
    msg.bearing = 0.162098350513;
    msg.pxl = -31711;
    msg.encoding = 174U;
    const char tmp_msg_0[] = {-128, -70, 126, -104, 92, -48, 55, 124, -65, 10, 121, 1, -121, -126, 88, 11, 42, 28, -117, 72, -113, 126, -41, -82, 20, 88, -104, 68, -115, -115, 79, 117, 35, -36, 80, -7, 70, -36, -28, 1, -87, 7, -94, 120, 31, -93, 8, 86, -95, 15, -21, -79, -35, -113, 37, 116, 75, -116, -33, 91, -58, -86, -47, 123, -22, -94, 25, -29, 31, 3, -109, -35, 15, -109, 19, -49, 56, -61, 22, -88, -99, -122, 88, -84, 35, 95, 88, 84, -54, 68, -93, 32, -11, -126, 33, -38, -45, 108, 10, 18, 5, -66, -58, -109, 26, -21, 71, 20, -17, 48, -8, -77, -95, -120, -109, 46, 124, 76, 84, 35, 63, -73, -28, -102, -6, -30, 89, -31, 87, 71, 110, 54, 116, 48, -44, -89, 49, 46, -79, -46, -86, 52, -33, -55, -80, -50};
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
    msg.setTimeStamp(0.666482740776);
    msg.setSource(6914U);
    msg.setSourceEntity(22U);
    msg.setDestination(6284U);
    msg.setDestinationEntity(48U);
    msg.altitude = 0.0434393605682;
    msg.width = 0.984816378944;
    msg.length = 0.0705415863711;
    msg.bearing = 0.135976881638;
    msg.pxl = 27756;
    msg.encoding = 111U;
    const char tmp_msg_0[] = {-108, 89, 102, -51, 18, 98, -9, -106, 49, 88, 103, 14, 123, -18, 22, -61, -61, 13, 101, -58, 66, 55, 38, 64, 25, 18, -65, -9, 8, 9, 110, -77, -50, 7, 9, -72, -127, -71, 83};
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
    msg.setTimeStamp(0.969453800851);
    msg.setSource(61764U);
    msg.setSourceEntity(14U);
    msg.setDestination(31294U);
    msg.setDestinationEntity(107U);
    msg.altitude = 0.0429543609502;
    msg.width = 0.0130737117612;
    msg.length = 0.11161822253;
    msg.bearing = 0.262958412015;
    msg.pxl = -12304;
    msg.encoding = 240U;
    const char tmp_msg_0[] = {103, -65, -106, -40, 124, 32, -25, 53, 21, -56, -67, -113, 53, 10, -46, 119, -42, -72, 55, -1, 29, 42, -4, -99, 58, -15, -100, 30, -88, 60, 82, -51, 93, 12, 33, 87, -71, 52, 21};
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
    msg.setTimeStamp(0.23864322183);
    msg.setSource(15727U);
    msg.setSourceEntity(19U);
    msg.setDestination(4246U);
    msg.setDestinationEntity(171U);
    msg.text.assign("SZYFEIURPUOPSQVLGPGDKXAMYIKZZVJYSDLTSYDAHMCBNZIKWLYZO");
    msg.type = 22U;

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
    msg.setTimeStamp(0.151122156535);
    msg.setSource(13589U);
    msg.setSourceEntity(139U);
    msg.setDestination(9946U);
    msg.setDestinationEntity(161U);
    msg.text.assign("IIUWQPTMAKLKHDRKCFLXDLWPEJJQQAGDZGOVRBNIRBDXDVMFOSEHEBKXDBMPFBKOUSAQZFZBSCVALXSNRJHHUVXAHCYSELCVCJGNYRRNEZLLXFYDRVJVMQGVNZHKFUWOMNWTQOGAYRWBOQNQCPYUZUWKDUEALTBZX");
    msg.type = 191U;

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
    msg.setTimeStamp(0.412309755154);
    msg.setSource(50961U);
    msg.setSourceEntity(252U);
    msg.setDestination(51031U);
    msg.setDestinationEntity(72U);
    msg.text.assign("WJTBAANCEPBQWHMLYRQGJNDSNWUHXXDRQZOYMFZOPRAYD");
    msg.type = 110U;

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
    msg.setTimeStamp(0.929871295991);
    msg.setSource(33605U);
    msg.setSourceEntity(212U);
    msg.setDestination(1961U);
    msg.setDestinationEntity(169U);
    msg.parameter = 21U;
    msg.numsamples = 253U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 23409U;
    tmp_msg_0.avg = 0.251746131741;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.58790410283;
    msg.lon = 0.961681337047;

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
    msg.setTimeStamp(0.0990761380842);
    msg.setSource(31827U);
    msg.setSourceEntity(140U);
    msg.setDestination(10996U);
    msg.setDestinationEntity(245U);
    msg.parameter = 111U;
    msg.numsamples = 104U;
    msg.lat = 0.679119793253;
    msg.lon = 0.179961727499;

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
    msg.setTimeStamp(0.470695464028);
    msg.setSource(30690U);
    msg.setSourceEntity(148U);
    msg.setDestination(46936U);
    msg.setDestinationEntity(53U);
    msg.parameter = 99U;
    msg.numsamples = 142U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 42671U;
    tmp_msg_0.avg = 0.777381029483;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.891237956729;
    msg.lon = 0.646336781059;

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
    msg.setTimeStamp(0.911765101825);
    msg.setSource(5039U);
    msg.setSourceEntity(165U);
    msg.setDestination(32195U);
    msg.setDestinationEntity(249U);
    msg.depth = 48439U;
    msg.avg = 0.615431396206;

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
    msg.setTimeStamp(0.648436173697);
    msg.setSource(61888U);
    msg.setSourceEntity(231U);
    msg.setDestination(13187U);
    msg.setDestinationEntity(28U);
    msg.depth = 6536U;
    msg.avg = 0.552951167751;

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
    msg.setTimeStamp(0.482006065875);
    msg.setSource(6653U);
    msg.setSourceEntity(254U);
    msg.setDestination(42215U);
    msg.setDestinationEntity(67U);
    msg.depth = 57382U;
    msg.avg = 0.462447840659;

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
    msg.setTimeStamp(0.63793431778);
    msg.setSource(23466U);
    msg.setSourceEntity(67U);
    msg.setDestination(56379U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.627232433454);
    msg.setSource(46968U);
    msg.setSourceEntity(249U);
    msg.setDestination(29972U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.0217447577697);
    msg.setSource(35326U);
    msg.setSourceEntity(253U);
    msg.setDestination(17652U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.442567538801);
    msg.setSource(58710U);
    msg.setSourceEntity(211U);
    msg.setDestination(18719U);
    msg.setDestinationEntity(203U);
    msg.sys_name.assign("XEWYFXZUZXJTWGBVUCLIGADXBVABFMRDPQBZGICRHZYYAUELNWLHAWMETKHETROLLQFMECJNHKRVUYAMODGIHWGPLFPASSBZMJVXKTDPFEEYJHTJZSFKWDSOSMHGUYNSJIABOPPBTDHLVDRPKNGQYBZOINHUQIWIXENGFOZBKXGMZUCRTAJMKAQFUQVTSDQSX");
    msg.sys_type = 138U;
    msg.owner = 44573U;
    msg.lat = 0.552695613876;
    msg.lon = 0.0405074680273;
    msg.height = 0.687691452368;
    msg.services.assign("QCWKRVHKLTVLSBMWRHXDSLCSLNFJSROLDOAPPDWKXOZODNFLEDVIKMFHXLXZMVWPSUCBMBUUZBEENOKZKDDJIFUISCIBJIBRRNAAIQVLOJUURXNYVRPFWJBZTERKVLMTPTMSUJMESRUCOCYWNDHFYYVFEEJAPEK");

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
    msg.setTimeStamp(0.935702852035);
    msg.setSource(17064U);
    msg.setSourceEntity(210U);
    msg.setDestination(1649U);
    msg.setDestinationEntity(147U);
    msg.sys_name.assign("GEOZKWQYVRWLSUXBETSWSPFTKMZAZRFAYTITZKHBMANDUBXRGXKLORFUFYUSGLJWTEFNJBPOKSOYRFRMHEGNDAYLDOGLHEHBFAJLCFLZMPQAVVUTGBIIUKLXENCOJQGMDINNDNCMLJMCDXHYXSJPQZHRHITUJPKPNZGXHGXMYZQINEEVVDFIUQMQKPDFGANAV");
    msg.sys_type = 201U;
    msg.owner = 19498U;
    msg.lat = 0.950843279538;
    msg.lon = 0.137625336537;
    msg.height = 0.828141926035;
    msg.services.assign("VDIQUCTLZYNSNMPPERAVNGRMFZHLZBDGKTSQNDFIZOIGEBSIRPHJMCQDPXIDROOJGKLWYQKBJOUNJALHSVW");

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
    msg.setTimeStamp(0.916087055204);
    msg.setSource(24504U);
    msg.setSourceEntity(96U);
    msg.setDestination(59506U);
    msg.setDestinationEntity(192U);
    msg.sys_name.assign("RTFMTCLUXCCQYFXCWMJA");
    msg.sys_type = 93U;
    msg.owner = 28736U;
    msg.lat = 0.75920724949;
    msg.lon = 0.309105543531;
    msg.height = 0.365433086714;
    msg.services.assign("QSOZQDXYFMDPAFNBDTOHSOMWUQFAYTORIYLPUQLHKTLLPTWRVVZCVHIGFMZIUBYEVKHTLYR");

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
    msg.setTimeStamp(0.23286846675);
    msg.setSource(18378U);
    msg.setSourceEntity(190U);
    msg.setDestination(15729U);
    msg.setDestinationEntity(23U);
    msg.service.assign("AFDLRLEZKUINZHYNEAGPZXYSEZPJXLPJWNZNUESUIKQXGKTMIZQWSEIDRICPNGQDUGKPNACDUGOTXSBTQCXCRHYVOVF");
    msg.service_type = 206U;

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
    msg.setTimeStamp(0.905501044609);
    msg.setSource(46762U);
    msg.setSourceEntity(87U);
    msg.setDestination(37196U);
    msg.setDestinationEntity(23U);
    msg.service.assign("CLMTXYPYIAOTZZKEQGFBDQEECSNYAFBIXSECWRVQOSGLBVSKOLVCDGENLMILKMNYNXKEWJXUTUNHXJODYNWTDKHFABCGCYTBPJOKAHKMZMFFJJYHELJRRQTWKKAQGJTRXFFISCGIHKLUWWE");
    msg.service_type = 31U;

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
    msg.setTimeStamp(0.791564357185);
    msg.setSource(15557U);
    msg.setSourceEntity(11U);
    msg.setDestination(35840U);
    msg.setDestinationEntity(6U);
    msg.service.assign("DEXIDFAGHTARKLUGXDMOKUSKOFQAVCMRIYPLFRVNMJTBMULWRCCXRUEDUQJESTBBYNRNJAFZOUMWETSDCCHCJYIDZXTHPGAHNTZJRIVKVTEKLJYBPYWEZEXZKEWQSFLUNFKNVMHNZSLYRVFISRQQOT");
    msg.service_type = 164U;

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
    msg.setTimeStamp(0.714001743799);
    msg.setSource(53686U);
    msg.setSourceEntity(73U);
    msg.setDestination(48000U);
    msg.setDestinationEntity(90U);
    msg.value = 0.568935955044;

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
    msg.setTimeStamp(0.515915914288);
    msg.setSource(35504U);
    msg.setSourceEntity(82U);
    msg.setDestination(29519U);
    msg.setDestinationEntity(155U);
    msg.value = 0.171540049457;

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
    msg.setTimeStamp(0.64268754991);
    msg.setSource(23519U);
    msg.setSourceEntity(24U);
    msg.setDestination(28667U);
    msg.setDestinationEntity(224U);
    msg.value = 0.843020482918;

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
    msg.setTimeStamp(0.0265937300816);
    msg.setSource(55392U);
    msg.setSourceEntity(66U);
    msg.setDestination(25127U);
    msg.setDestinationEntity(12U);
    msg.value = 0.0413884052876;

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
    msg.setTimeStamp(0.452649983259);
    msg.setSource(55526U);
    msg.setSourceEntity(33U);
    msg.setDestination(64854U);
    msg.setDestinationEntity(8U);
    msg.value = 0.815442480406;

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
    msg.setTimeStamp(0.473453526692);
    msg.setSource(42911U);
    msg.setSourceEntity(115U);
    msg.setDestination(15892U);
    msg.setDestinationEntity(153U);
    msg.value = 0.116462731502;

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
    msg.setTimeStamp(0.772036109848);
    msg.setSource(29434U);
    msg.setSourceEntity(188U);
    msg.setDestination(52640U);
    msg.setDestinationEntity(173U);
    msg.value = 0.973164116841;

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
    msg.setTimeStamp(0.879871086309);
    msg.setSource(38605U);
    msg.setSourceEntity(122U);
    msg.setDestination(40392U);
    msg.setDestinationEntity(50U);
    msg.value = 0.0926892842822;

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
    msg.setTimeStamp(0.381702780235);
    msg.setSource(36504U);
    msg.setSourceEntity(32U);
    msg.setDestination(53163U);
    msg.setDestinationEntity(93U);
    msg.value = 0.037632903868;

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
    msg.setTimeStamp(0.47378773064);
    msg.setSource(48054U);
    msg.setSourceEntity(194U);
    msg.setDestination(21063U);
    msg.setDestinationEntity(73U);
    msg.number.assign("CHYAHCKQTXRGNDHFOLOPZBMRCDVSKFJCRQTKQBOZHDAREVXUKITZUASGYUAKUKMWDFRNNBAIRPZVXAOLSQVEZAFAEDLIJANPUMFPJWFFPZUIOIMIDZFH");
    msg.timeout = 10341U;
    msg.contents.assign("TJHDNPNIJQQBTJOWXBPPHCXJQJLMXTF");

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
    msg.setTimeStamp(0.0335359172703);
    msg.setSource(21869U);
    msg.setSourceEntity(10U);
    msg.setDestination(24637U);
    msg.setDestinationEntity(106U);
    msg.number.assign("XKLSAJCRTEGIRXZVYERNPWZUIORJDBKCEJUPCVGKVIVJLYYLXEANOSAFVJNGBMGAFITCHTKPBMXGTIPQLQYSSJXRWDMMJROPFUNICUMYPWYKENFHBBKTGAAWFTMCCSERNCATFWETADORGXDLEDBTGAFZKIDZS");
    msg.timeout = 40728U;
    msg.contents.assign("MUMFWIVSIWMZIGQARDCRQJUUBZWRYWDIVCLTMBKOBVVAKGVXTPPLUPSVPPQSUSYYVWDFXHAIFIZEBFNZGJQVBELXLTA");

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
    msg.setTimeStamp(0.97108930341);
    msg.setSource(19272U);
    msg.setSourceEntity(76U);
    msg.setDestination(23773U);
    msg.setDestinationEntity(72U);
    msg.number.assign("CIYVXJEYEUWJTREVZAEOLVEHWTLBDDMYFZFFOUS");
    msg.timeout = 7724U;
    msg.contents.assign("OTZNDYGBYSAZOSCEOXEGJLNWFHSMEBCVIYXNSMVCBSVFAOKHBLLRJQYQCHYYOEGSXHRYXQTELBWQUQGIDHXKOUWEHCPNAVICZIPLFBMPFGESUTKZZYAOMFTVJETKYWATPPKVROWGLJWQPKRNJTIAPQPGXWHBGBMXZNTDLRUEMFQCILVDAXNTXPRBKFUJORUTGVWJVKKOMJ");

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
    msg.setTimeStamp(0.0606484884283);
    msg.setSource(13322U);
    msg.setSourceEntity(235U);
    msg.setDestination(209U);
    msg.setDestinationEntity(179U);
    msg.seq = 2735736453U;
    msg.destination.assign("IZWXDSFGDBANEXRLFGJACFXZPOUU");
    msg.timeout = 24075U;
    const char tmp_msg_0[] = {-3, 79, 78, -8, -10, 54, -63, 24, -1, 64, 2, -94, -27, -94, 123, 67, 116, -84, 14, 124, 54, 25, -65, -125, 23, 30, 51, -44, -98, -94, -37, -116, 10, 37, -86, -96, -120, -107, -62, -90, 14, 67, 27, -103, 67, 45, -65, -99, 66, -105, -46, 34, 49, 72, -7, 31, -98, -101, -44, -106, 64, -32, -26, -52, 20, 124, 49, 118, 28, -48, -8, -123, 55, -79, 42, 51, -11, -102, 67, -4, 88, 48, -128, -68, 100, 108, 30, -4, 11, -24, -38, 62, 7, -102, -93, -103, 66, 71, -35, -4, -33, -47, -98, -3, 77, 93, -3, -43, -111, -10, 102, -18, -80, -113, -24, -52, 87, 0, -49, 3, 119, 3, -57, -15, -100, 9, 105, 1, -9, -115, -102, 89, 6, 51, 99, -58, 114, -18, 33, -4, -30, 56, 24, 68, 40, 70, -44, 32, -69, -77, 71, -91, -34, -93, 114, -118, -47, 124, 111, 67, 78, -103, 3, 34, -70, -108, 59, -53, 29, -6, 46, 67, 103, -61, -10, -112, 126, 120, 120, 19, 102, -95, 89, 40, 7, -120, 93, -104, 89, -50, 30, 27, 70, -25, 19, 123, 59, -78, 93, -47, 77, -86, 64, -57, -46, 101, 53, -20, -38, -54, -21, -94, -28, -10, 50, 5, 122, -77, 0, -69, 9, 54, 32, -78, -118, 35, 30, -103, -72, 34, 20, -10, 77, 60, 0, -46, 43, 86, -9, -79, 69, 2, -40, 65, -5, -128, 87, 2, -49, -28, 102, -23};
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
    msg.setTimeStamp(0.0755033509671);
    msg.setSource(39431U);
    msg.setSourceEntity(76U);
    msg.setDestination(29419U);
    msg.setDestinationEntity(9U);
    msg.seq = 663455148U;
    msg.destination.assign("PLXGNIDJQAZSOMTQIBWMAUNVEXTWSZVBEAKNUIDPFATIDXYUDKOCENDBBHUYSYZPZCQYLUSPMTQAWTVTHGTXGOQSIDRVGVFXFUGMBBMZSYZVELFPXWSFAUCPBSAFFGKCXKFZCNWJCUJVAHORTRIERLRQHOMKZWHCPMBYNQEGKRIRYJKYMLZGNRDWIEZHXOAPDTSNOQLACEEGTKXWQOUPCULBLHLFJYOJGMVYP");
    msg.timeout = 2529U;
    const char tmp_msg_0[] = {66, -96, -95, 105, 93, 50, 117, 28, 29, 67, -26, -83, 26, -61, -45, -125, 57, -54, 29, 23, 13, 17, -57, 32, -66, -89, 29, 74, 10, -39, -7, 52, 112, -119, -30, 126, 109, -22, 86, 46, 68, -98, 3, 108, -111, -121, 35, 122, 0, -79, 112, 3, 68, -114, 7, -112, 26, -115, -100, -114, 119, 125, 104, 112, 4, -3, 85, 96, -44, 102, 85, 111, -105, 59, -89, 122, 126, -48, 71, 112, 48, -126, 91, 47, 79, 126, 43, -106, -109, 30, -80, 111, 36, -22, -68, 29, -124, -29, -77, 14, 82, 116, -35, -121, -47, -40, 77, -11, -62, -74, 84, -92, 1, 13, 30, 66, -40, -37, -23, -120, 6, -65, -120, -119, 72, 73, 19, 124, -38, -27, -7, -123, 97, -1, 113, -42, 65, -96, -121, -119, 48, 68, 92, -6, -27, -76, -41, 81, 85, -123, 126, 26, 75, -31, 105, -14, 20, 89, 6, 1, -112, 51, -104, 35, 57, 19, 115, -103, 4, 124, -47, 70, 21, -30, -16, 38, 52, -33, 85, 102, 52, -106, 75, 39, 86, -28, 82, -114, -14, 27, 92, -59, -80, -65, 121, -47, 12, -56, 113, 119, -74, -109, -109, 23, 77, -97, 62, 6, -21, -114, 83, 111, -98, 9, 19, 22, 67, 97, -69, -31, -95, 6, 42, -77, 16, -124, -58, -87, -24, -28, 10, -99, 125, -89, 57, 0, 1, 13, -67, -98, 77, 49, 75, -73, 80, -42, 91, -20, 23, -75, -16, 97, -71, -118};
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
    msg.setTimeStamp(0.67126875327);
    msg.setSource(12528U);
    msg.setSourceEntity(9U);
    msg.setDestination(28520U);
    msg.setDestinationEntity(246U);
    msg.seq = 947826800U;
    msg.destination.assign("UYPOFFQIDZRPTBESFGCDUJCZUUNSPLLRXPXNIVHBSMWPKJVTDNSKRXZNJAPLT");
    msg.timeout = 41156U;
    const char tmp_msg_0[] = {18, 42, -105, -35, -101, 68, -62, 81, 16, 67, -94, -5, 10, 34, -20, 77, 122, -66, -91, -120, -98, -16, 79, 84, -65, 74, 69, 116, 14, -115, 122, -44, 125, 25, -38, -36, 14, -122, 103, -125, 38, 91, -61, -63, -86, 63, 38, -7, -61, 8, -59, 58, -10, 111, -107, 123, -122, 21, -17, -38, -105, 93, 54, -78, 121, 72, -113, -81, 103, 70, -92, 64, -42, 73, -59, 105, -117, 20, 52, 78, 117, 86, 64, 108, 15, -108, -37, -24, 76, 110, -18, -7, 67, -34, -86, -56, 110, 88, 119, -115, -91, 6, 90, -77, 39, 22, 109, -90, -65, 80, -105, -57, 5, -67, 74, 80, -106, 111, 76, -26, 40, 8, 6, 98, 63, -93, 25, -83, 68, 69, 105, 9, 125, -67, 3, 83, -51, 39, 26, -48, 49, -62, -42, -123, 39, -16, 114, -31, 15, -105, -105, 83, 119, -57, 105, 64, 106, -56, 101, 6, 74, -106, 13, -37, -4, -111, -14, -120, -34, -69, 76, 68, 33, 99, 57, -14, 6, -63, -29, 64, -95, 59, 3, 43, -89, 60, -30, 116, 47, 85, 5, -72, 68, 7, 60, -48};
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
    msg.setTimeStamp(0.692986419119);
    msg.setSource(62010U);
    msg.setSourceEntity(39U);
    msg.setDestination(2641U);
    msg.setDestinationEntity(189U);
    msg.source.assign("TCRHWCKDDBUYPIXAIPLXWSSVEQMBRGOKXOBFDWCDUIGUYIIEPHXQGSPGCFFYPFSYWOSZLSZZLRDONYXAQGMABQFNJWZTFTRSPAPLWVVHYVFQOBRMPXBTXIUJERGHCKHMFOXASUZWVDACGIUUJQDGSNZWRKMALJQPEQBX");
    const char tmp_msg_0[] = {-102, -93, -86, -111, -32, 81, 90, 11, -126, -112, -85, 122, 3, 29, -18, 5, 80, -10, -39, 21, -34, 77, -30, -25, 21, -52, 121, 17, 100, -38, 80, -41, 120, -21, -100, 33, 86, -47, 11, -64, 24, -54, -31, -102, -77, -17, 73, -47, 83, -99, 98, -24, 85, 45, -109, -68, 92, -84, 97, -11, 2, 107, -74, -106, -48, 17, -72, -73, -65, -65, 79, -10, 16, 87, 87, -81, 9, 16, 82, -62, -11, 120, -94, -52, -119, 47, -58, -16, -37, 52, 3, -19, 0, 51, 31, 114, 95, 122, -59, -92, 24, 31, 61, -45, 47, -117, 5, 86, 98, 70, 118, 38, -128, 100, 10, 26, -65, -38, 87, -76, -111, 94, -103, -6, -4, -46, -68, -108, 14, 118, -20, 91, -71, 83, -120, -113, -26, -114, -104, 1, 80, 60, 84, -80, -86, -101, -89, 6, 101, 110, 95, 28, 77, -114, -85, -6, -113, -30, -8, 53, 48, -124, -127, 40, -66, -54, 93, 60, -62, 100, 62, 20, 47, 0};
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
    msg.setTimeStamp(0.495237171857);
    msg.setSource(12479U);
    msg.setSourceEntity(82U);
    msg.setDestination(61062U);
    msg.setDestinationEntity(26U);
    msg.source.assign("GLIDZGNKSCNTTLZXOCBOXFOTNNVSCLSREZKFIOFZDNFMHSNKKHINQXXIUNPARTESTMUPLMJSBYTUTIWFNPGHZZJCUYCVPXVLCPZUVDMJXMOAYJAEWKGWLHJBQVEGRYEBYEFMABSWRRQDOBORUYIXBMGEBOXQUWKMCYYOIJBFVEUQWBDILTGJQLVHWPTHDJRF");
    const char tmp_msg_0[] = {-84, -85, 39, 71, 6, 66, -79, 61, -73, 58, 35, -87, 37, -71, 71, -52, -44, -18, -31, -109, 21, -25, -83, 85, -98, 40, -60, -49, -35, -76, 50, -53, -89, 59, -116, 74, 113, 16, -105, 45, -24, 31, 77, 34, 21, 94, 61, 120, -83, -8, 101, -84, 44, 49, 91, 14, 39, 27, 102, 55, 91, -127, 102, -60, 61, -80, -70, 95, -101, -107, 112, 33, -88, 47, -10, -109, -91, -40, 26, -38, -19, 11, -73, -65, 102, 78, -104, 37, -77, -39, -32, 52, -87, 64, 116, 36, -96, -63, -84, -47, 114, 63, 72, 113, 48, 99, -87, -60, 55, -90, -35, -73, 48, -102, -29, -39, -103, 120, 29, 29, -99, -53, -12, -104, 27, -107, -67, 59, 69, 38, 115, 17, -87, 8, -59, -94, -103, 19, -56, -81, -48, -1, 80, -108, -81, 118, 64, -11, -98, 25, -30, -4, 15, -78, -103, -5, -64, -116, -25, 121, -38, -117, 32, -64, -108, -116, -92, -88, 77, -34, -96, -88, -123, 105, -68, -106, -105, 61, -27, -94, -114, 47, 49};
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
    msg.setTimeStamp(0.932704406609);
    msg.setSource(46938U);
    msg.setSourceEntity(198U);
    msg.setDestination(4698U);
    msg.setDestinationEntity(18U);
    msg.source.assign("VENOTWSBKMGHENZODNLYTEODFIVWABICOTEIMUAESZJTBZCNYDBQDDOLJBDTWAXKUHUETAQCPSXVXENQCFGZKMMLMWMUFMVRIGDQZOYRCXNUVG");
    const char tmp_msg_0[] = {15, -61, 33, -77, -122, -74, 74, 51, 68, 119, -98, -101, -58, -93, 61, -3, -53, 27, 30, -81, 114, -77, 3, -23, -23, -54, 60, -16, 84, -94, 109, -66, 12, 63, 48, -6, 52, 89, 65, -86, 84, 41, -95, 32, -6, 41, 77, 10, -22, -55, -60, -109, 86, 106, 74, -45, 62, 119, -83, -86, 22, 35, 32, -21, -22, -107, 47, -105, -117, -103, 33, -63, -10, 48, 74, 8, 126, 68, -81, -125, 108, -72, 77, 17, 91, -119, -57, 37, -74, -72, -69, -77, 122, -90, 90, -15, 90, 30, 112, 52, -120, -21, 25, -94, -60, 13, 51, -88, 16, 97, 59, 122, 114, -36, 43, 40, 40, -120, -66, -99, -68, 13, -30, 30, -22, 31, -33, -107, -41, 36, 121, 98, -29, 14, -28, 11, 68, -32, 59, 53, -10, -46, -12, -20, -24, -76, 51, 69, -100, 52, -93, 31, -112, 116, 88, -117, -54, 94, 38, 52, 0, -126, -14, -77, -70, -65, 75, -80, -103, -122, -78, -39, 11, 37, 108, 126, -102, -17, -43, -14, 53, -41, -40, 93, -128, -57, 2, 123, -42, 68, 62, -82, 109, -117, 62, -112, -64, 118, -64, 52, 68, 72, -20, 50, -28, 89, -102, 26, -124, 23, 13, -55, 93, 94, -55, 45, -101, 126, 89, 63, 34, -5, 7, -63, 67, -57, -106, -64, 33, 56, 62, -20, 31, -121, 38, 105, -36, -4};
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
    msg.setTimeStamp(0.963078203086);
    msg.setSource(27178U);
    msg.setSourceEntity(172U);
    msg.setDestination(28087U);
    msg.setDestinationEntity(109U);
    msg.seq = 3004543290U;
    msg.state = 133U;
    msg.error.assign("WGCLSRKAQGSUZVNDFWUNOXVOVWBNOZRULGQYNIPTIAMICJTQPAMRBETCDNZXIABZMBVQHKRAENXEPDHFMQOKCZTQIYHLYYRPWZMFNLAKZDBFUMLYTPNJMVROSYCGJIETFTGDRQCJHZDEKBFJEKXHJRFBRADQVTJPWUGJJEXOXLCXBUWKDMDVXSXTBWTALXVVKJARHMDWMYQOSSZCLCFAGFOKFKBEQP");

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
    msg.setTimeStamp(0.718588265008);
    msg.setSource(30757U);
    msg.setSourceEntity(202U);
    msg.setDestination(15295U);
    msg.setDestinationEntity(11U);
    msg.seq = 3649274129U;
    msg.state = 65U;
    msg.error.assign("TCMBAUYDSFDJXICLIOCNZNGXKSTTOPIXIOSHPGGVCGTEUAHYERTUDJAOOPFGAXDQASAVHQCWFBBZUFKETOQPHROCMFIPSVFBYKLZNXRBYZNXMUUXMGVVLYTJYVTUMIIOLOQMZNMWCGNWYFYTDQZKKEJEVVZ");

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
    msg.setTimeStamp(0.583666808221);
    msg.setSource(50628U);
    msg.setSourceEntity(233U);
    msg.setDestination(35741U);
    msg.setDestinationEntity(247U);
    msg.seq = 3819453636U;
    msg.state = 27U;
    msg.error.assign("ZKDMVTNVHZWJJVZNHPNNRVRPUGQMRGJEPR");

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
    msg.setTimeStamp(0.223071172006);
    msg.setSource(54401U);
    msg.setSourceEntity(172U);
    msg.setDestination(43695U);
    msg.setDestinationEntity(213U);
    msg.origin.assign("BBITKSTOVAENEYBDGJEPUBGEKNYXEXOUUIISJSAZYSKGJRCWYQZZFDJFVHGVEQBHZKSFKXOQWOAUHRLESQFJSGVLIFWLHYPZQCWVMDJUUANQHMTFEPNYCNCDBNDWZXDRXJWKITVCJUXABRKOTMMOPMLGMMWFHMEGKVTJIDNQLROWAZGIUCIPSDVHXAPIQOCDLOTVJLRNFLFGQVUSHTWRZGTBUYLFXRRY");
    msg.text.assign("IJLSOVDVFJBZZBIAYOVFHZUFVROJVGACPQVRKSUT");

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
    msg.setTimeStamp(0.83967564087);
    msg.setSource(57003U);
    msg.setSourceEntity(135U);
    msg.setDestination(65140U);
    msg.setDestinationEntity(17U);
    msg.origin.assign("XHTXBMGPXUZHLOBRGRCLDQBWRZNHGCPYJIPKRFEAPUHXKUCAUXVNAGNLYWIOGLAVFIYXCSCSNSUUJQNECSBUXWVYRMQQSZTQYLOGMDDEEAAJVIAEKZOIGAKIAJLGVHEWCNISTRRMTCPLYTFZ");
    msg.text.assign("PSIAYYWJZVFEGHYTZGUUVZSRKEDJVUSWPOXZURIJABXKYGLFREWFHQTIVCPJZMLXIBKABQACHWTLUAXFFLFQBNIWEWWQBCOPMTPIBVSZFAAQXUHOKCOJMSOZKXWQUNQXRIPHPWZLCYPDMBKKFYMOHLNJCYCRNKXFONNLVKSMUMUBJSTGLILGVFMG");

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
    msg.setTimeStamp(0.496725924536);
    msg.setSource(48274U);
    msg.setSourceEntity(60U);
    msg.setDestination(36636U);
    msg.setDestinationEntity(62U);
    msg.origin.assign("LRDZQRQCWUNTVEWFCAJBOCTRJBBASMDJYTHUJINUOTLKGXUABMZSKYDVTMLNOYXHVRZIYMMBUWAJFDXBFOVRCHYMDAPWSQIAOWRNFPMFLJZYNENWVUDTXBQTNTECVZPQEZSSOWACCIGFIPCOZPMUFGVPDGKKZLODLRKCHXGXLANGYSBFVUPRMIZQMPESCGQRXNIWEKBFHPVULXJAKQGEHTXHSFVIWLNGYXIJKRDU");
    msg.text.assign("JEGVYMLOYJWRSITHDTTPOUISBLDWZWIFMUFHPPBOLXLDBSZKKYXFMEBBAPVNWQNGCUZDLFABRZKGHJSMJOIIHOCKZNKDVEFUQMHZRYMIACOYAPKLAZRXPQKJXCRNUTHCVMCRJRSOAWARJJD");

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
    msg.setTimeStamp(0.0696621639014);
    msg.setSource(27185U);
    msg.setSourceEntity(73U);
    msg.setDestination(23424U);
    msg.setDestinationEntity(242U);
    msg.origin.assign("UXIZKDZAYGBDUWCJLGWYBBBAVHZLDTQLLJJKPYGPQTMTXUAIIKYIVHZYAOOVVLWQOAUIQHWOECMAEDCDBJUNWSLRJHOOYXSSZNMREGLBFNQIDMIYPQDMXFRYPYHUTTWRCFFGBPIWFVAWPZOAFKENJPKOSEVKMCGREUBWFEIEVTWZLKQJRTSKNUXXTNVXHNRKDZFDMELBOTCGMSOPSCFAUKFQEHVPMHUJZT");
    msg.htime = 0.435923065075;
    msg.lat = 0.497417115971;
    msg.lon = 0.795336302861;
    const char tmp_msg_0[] = {-89, 67, -81, 104, -98, 99, -34, 80, 91, 123, 102, -100, 58, 4, -112, -93, -54, 77, -51, -2, 83, -94, -108, 98, 74, -81, 115, 104, -100, 39, 40, 3, -73, -83, 58, 92, -113, 62, 98, -111, -51, 55, -43, 61, 87, -99, 64, 108, 68, 60, -67, 65, -13, 118, 95, -66, -100, -37, -45, 21, 5, 114, -99, 37, -95, -50, -90, -100, 52, -103, 8, -15, -104, -4, 78, 41, 40, 79, 7, -21, -75, 52, 81, 123, -46, -8, -113, 94, -121, 40, -47, -9, -89, 75, 51, 64, 22, 42, -33, -99, 20, 34, 7, 124, 31, 17, 44, -55, 93, -108, 20, 5, 4, 0, -77, -32, -4, -88, -123, -64, -104, -36, 103, 92, -19, -119, 33, 15, -1, 14, 22, -7, 38, 5, -109, -121, -85, 14, 74, -75, -34, 67, -90, -86, -37, 99, -119};
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
    msg.setTimeStamp(0.494565224922);
    msg.setSource(23026U);
    msg.setSourceEntity(172U);
    msg.setDestination(56661U);
    msg.setDestinationEntity(83U);
    msg.origin.assign("BOFOLSGLJCIQYMJHNIWEDRBTTEZHIOSENMTPJDQCCFMYNUQSFDWXJZSOAYUJGFRSQAOKQKJIMSOJGVGWHRTYXFDWOYPKILQUHLHAZXWKKOSNLJCHPECGTTNDZNCWGRLEQSELMIXMUOBKZSJDFRHDYDUFFMUVB");
    msg.htime = 0.337982445749;
    msg.lat = 0.8653828777;
    msg.lon = 0.36890821319;
    const char tmp_msg_0[] = {22, 16, 37, -21, 107, -97, 31, -27, -98, -15, -21, 67, -37, 47, 84, -40, 8, 107, 14, -113, -92, -74, 114, 49, -60, 12, 64, 68, -34, 5, 60, 30, -89, -55, -80, -94, -104, -39, 53, -39, -117, 56, 55, 31, -23, -32, 23, 30, 8, -96, -86, -41, 17, -52, 88, 42, 65, -98, 83, 36, 58, 113, -91, 24, -127, -68, 3, 10, -37, 51, 46, 86, -85, 63, 4, 105, -116, 88, 8, -31, 7, -35, 25, -115, 126, -63, 17, -108, 62, -65, -105, 43, -76, 66, -26, 110, 40, 37, 82, 48, 39, 105, 86, 47, -74, -22, -26, 123, 106, -98, -92, -61, -22, 40, -89, 113, 91, 16, -104, -126, 31, -34, 53, -91, -113, 104, 52, -78, -32, -80, 10, -29, 74, -87, 1, -86, -10, -38, -49, 123, -9, -39, 107, -75, 106, -61, 87, -56, 109, -18, 90, 54, 64, 4, 33, 89, -124, -98, -105, 70, 76, 47, -56, -50, -20, 1, -9, -65, -11, -48, 97, 76, 18, 38, 40, -37, -29, -125, -99, -128, -70, 119, 64, 111, 0, 58, 48, 100, 29, -21, -118, 8, -66, 22, 111, -128, 75, 104, 66, 75, 59, 92, -119, 77, -125, 1, -32, -120, -101, 111, -88, -2, -46, 48, -80, -24, -36, -93, 95, -17, -17, -126, 52, 51, -14, -75, 49, 99, -67, 59, -96, 67, 44, -122, -125, 108, 81, 61, 82, -100, 6, 112, 50};
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
    msg.setTimeStamp(0.0786651483257);
    msg.setSource(19517U);
    msg.setSourceEntity(9U);
    msg.setDestination(17206U);
    msg.setDestinationEntity(223U);
    msg.origin.assign("QNWJZDZGXZLLTCBRFIHDVAEVMZWRQJITXPYEBPRAZHEUDFLDNANUYQJQNTEQKFESOYHVFCRGJAGKXOHXWSBSATQDEKUZFWNPJXHZRVYAT");
    msg.htime = 0.496022016082;
    msg.lat = 0.0152542405087;
    msg.lon = 0.530019542559;
    const char tmp_msg_0[] = {-128, -76, -82, -49, 109, 13, 27, -120, -86, -91, 74, -87, 53, -100, 36, 3, 21, -25, 117, 75, 21, 75, -83, 43, -57, -126, 126, 25, 65, 103, -32, -11, 30, 55, -124, 20, -59, -30, 4, -14, -100, -14, 8, -115, -41, -110, -106, -94, 71, -76, 61, 8, -18, -42, 100, 85, 79, -60, -19, -75, 35, -51, 116, 123, 34, 118, 8, 125, 3, -120, 105, 81, -9, 15, 89, -91, 117, -114, -63, 7, -60, -98, -92, -77, 77, -24, -127, 68, 12, -9, -36, 49, 4, 100, 24, -69, 12, 47, -71, -115, 33, -31, 73, 57, 79, 8, 46, 73, 56, -85, 98, 97, -42, -18, -46, -28, -37, -92, 65, 19, -109, 72, 93, 57, 38, -33, 101, -41, -10, 105, -41, 16, -116, 66, -57, 125, 97, 101, 90, 18, -88, 121, 116, 111, 20, 4, -34, 11, 32, 117, -47, -48, -69, -90, -54, 4, -48};
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
    msg.setTimeStamp(0.128529176707);
    msg.setSource(33366U);
    msg.setSourceEntity(63U);
    msg.setDestination(54747U);
    msg.setDestinationEntity(6U);
    msg.req_id = 63459U;
    msg.ttl = 39545U;
    msg.destination.assign("JQEGATAUHHHPAOSIHNAHSRDEWZWVYOQTKKJXMIKHJ");
    const char tmp_msg_0[] = {-66, -121, -84, 58, -86, -96, 43, 50, 37, 103, -10, 67, -73, -55, -26, -102, 93, 35, -77, 60, 6, -107, 70, 89, -24, 7, -56, 99, -19, 43, -42, 68, 62, 57, -97, -28, 3, 11, 9, 87, 41, -118, 85, -17, 107, 14, -92, -128, 28, -104, 68, 48, -72, -124, 97, -30, 98, -62, 50, -12, 94, -14, -62, 17, 49, 52, -75, 88, -28, -111, 68, -116, -52, -82, 106, 95, -99, 31, -52, -109, -6, 79, -51, 86, -114, -51, 113, 37, -8, -118, 56, -94, -7, 69, 84, -74, -51, 120, -2, -86, -73, -109, -102, -20, 53, 61, -115, -24, -63, -92, -58, -21, 61, -8, 70, 2, 30, 98, -95, 6, 8, 45, 63, -84, -3, 29, 9, -55, -81, -20, 14, -56, 102, 5, -8, 115, 83, 44, 12, -95, 126, -98, -122, 91, 19, 15, -118, 24, 125, 18, -42, -7, 101, -93, 50, -53, -27, -103, 108, 95, 59, -6, -76, 116, 35, 11, 124, 49, -123, 57, -100, 0, 119, 57, -29, -15, 8, 15};
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
    msg.setTimeStamp(0.990559010731);
    msg.setSource(17934U);
    msg.setSourceEntity(73U);
    msg.setDestination(7U);
    msg.setDestinationEntity(215U);
    msg.req_id = 827U;
    msg.ttl = 45782U;
    msg.destination.assign("XXWQFBKGTUMTSAGXWQJGOURAUEAPGEVPPYQFQNIIVOOZTEKJGNJSTCYPUHDMEWKMXBXGSFRGPEHDQRYPUQNEYGOLJVIPAARLSEXGKZZZTHMIZMCOJWALJLKNUQFCEMPMFDDZICHKHMVWTTDFQDERDIBUYIOVQTRUCBHZCYHRKZOELLSLBXNKWDRFAUJSINTDPXFYHXOOVB");
    const char tmp_msg_0[] = {-66, -46, 74, -42, -17, 66, 88, -96, -4, -96, -6, -94, 19, 85, 33, -56, 19, -116, 82, 36, -58, 53, -41, -126, 83, 119, 20, -23, -85, -98, 68, 111, -39, -113, -74, -90, 27, -102, -17, 97, -71, -112, 24, 31, 119, 45, -49, -26, 20, -118, 98, -29, -79, -69, 2, -100, -14, -56, 14, -76, -127, -126, 23, 108, -4, -38, -48, 6, -107, -127, -118, -46, -70, -18, -90, -1, -2, -80, 87, 92, 94, -1, -36, -122, 114, 1, 26, 79, 85, 21, -12, 40, -76, -33, -40, 44, -54, -88, 13, 73, 8, 37, 64, -109, -109, 118, 88, 46, 82, 125, 101, -113, 98, 82, 57, 12, -35, -48, 91, 79, 48, -122, -104, -77, -118, 75, 62, 118, 58, 80, 82, 37, 27, -55, -11, 59};
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
    msg.setTimeStamp(0.928273985393);
    msg.setSource(37498U);
    msg.setSourceEntity(103U);
    msg.setDestination(55387U);
    msg.setDestinationEntity(102U);
    msg.req_id = 33595U;
    msg.ttl = 58109U;
    msg.destination.assign("ASHZVFRLIEWBBZXSUELD");
    const char tmp_msg_0[] = {-66, -65, 29, 74, -30, -107, 113, 26, -57, 67, 57, -95, -60, 18, -14, 24, -5, 110, -108, -67, -75, -22, 69, -1, -104, 60, 90, -92, 34, -42, -86, 58, 122, -66, 75, 22, -118, 62, 116, -8, 80, 112, -45, 80, -43, 110, -15, -94, -26, 96, -68, -92, -22, 33, -6, 31, 115, 74, -11, -102, 115, 121, -6, 95, -80, 101, -69, 68, -24, 12, -95, -98, -98, 82, 111, 24, 32, -84, 112, -55, -92, 55, -110, 97, -81, -75, 44, -108, 104, 13, 88, -96, -54, 14, -54, 19, 99, 54, 15, 13, 17, 68, 80, 75, 59, 3, -25, 42, 9, -61, -121, 49, -125, -120, 50, -56, -101, 4, 36, -72, 73, -128, 20, -98, 38, -2, -42, -112, -24, -60, -10, 13, 116, 63, 117, -24, 83, 120, 113, 60, -122, -48, 97, -110, -21, -80, -122, -1, 84, -57, 91, -3, -30, -68, -94, 122, -12, 23, 64, -14, -11, -59, -39, 78, 110, 120, -94, -110, -11, 104, 30, 15, 18, -74, 108, 42, 77, -71, -119, -120, 116, 105, 86, -101};
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
    msg.setTimeStamp(0.760198663881);
    msg.setSource(50780U);
    msg.setSourceEntity(101U);
    msg.setDestination(25493U);
    msg.setDestinationEntity(128U);
    msg.req_id = 24707U;
    msg.status = 135U;
    msg.text.assign("ZUUOOWZJRVTPWVTPNUWILFHCEFNIUQPGMGHBTYBNIAGOKWLMRSEKKEHGYFQARKPSLGFLDHDDOZVPFRYGEIABDRJYUBTYYMZJTFCQDFCYABGWXKXDFYTBXVMVBLNQTSCMTPQVNKSYPXXVJRXIQHLKB");

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
    msg.setTimeStamp(0.57455998663);
    msg.setSource(16347U);
    msg.setSourceEntity(245U);
    msg.setDestination(5336U);
    msg.setDestinationEntity(172U);
    msg.req_id = 1337U;
    msg.status = 81U;
    msg.text.assign("BKVKILDFWAFEAGBOWAIZYYMOBDBUPCFWLAKCHDWMVUVUOHYMVSJJRMQIVEHZSJUKYLNSBYUFFYGSUDBCDCTVLYXTQEJQGFPOXZGITKGIJWCTRSPTJSEANAAXPIXSKNWXLHVLAPSNTNFSCGQLXTXZOZPDKJAOERZLHNQNDCTUQRZEJZFRNDISBICOXTX");

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
    msg.setTimeStamp(0.0874265637459);
    msg.setSource(8437U);
    msg.setSourceEntity(78U);
    msg.setDestination(16449U);
    msg.setDestinationEntity(93U);
    msg.req_id = 13039U;
    msg.status = 87U;
    msg.text.assign("XUGTOZBCYKVPCJHVQHVOMGHKMRGKOXNDSGVMEPGIDEZZHRLTJTTADBVQELUCEREJQEHHUWRBMNYUKDCDBXCXRNNAYJEGGSXWONIBUOBWAIOSQTEFMINTQLFNCLPJBBSRFNDQAMZOMZAQAIYZPRSOZULHAKJFOXKSVFCDRCJDSBYFJGKDALWXWCXYZGWWTIXLPPLZFIPTKRMVGXUTUIZMPYJJPHVNTYPWYHWWYOK");

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
    msg.setTimeStamp(0.993404220527);
    msg.setSource(8616U);
    msg.setSourceEntity(165U);
    msg.setDestination(7978U);
    msg.setDestinationEntity(26U);
    msg.group_name.assign("UZYGJZPJENEIWWOVYPILOTOUKMIMVSMMMPAWQIDEVDCWHNFRASDSYWMZHATVHNFRNEQBPXOZMCZWIBGRELCKOKYRJVAJHDYGWXUQATNJXZOQQLFJPLXAXHNXUNSDHFBNCWQRQXKJGIEXBYGDZBLRPDUEKRCYLSSZCC");
    msg.links = 1742678974U;

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
    msg.setTimeStamp(0.205358624915);
    msg.setSource(12384U);
    msg.setSourceEntity(175U);
    msg.setDestination(58459U);
    msg.setDestinationEntity(12U);
    msg.group_name.assign("IWXQJDZLXKUTMEBZHJMSZNSFWISSYFIBXVNEFOGHOJCXUNTKUDKYNTGCFMRAXWJTMPBHCPYSULLYYTHXIUREPZABJQICJRFSHEYDUKWVDRMAIKSRWCIAOMMZJNKSTWQELLKUPIUWAGNLHNFENWKXBHBXMLGQGBQCTOMDOOZIZJPTVEQALPPVKFZPARUTLQKZTFQEZMXWVGVBHGEQAOIAPPGSAQDDOVFJCOVNGCBVCJRDHNB");
    msg.links = 2569559276U;

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
    msg.setTimeStamp(0.708561411112);
    msg.setSource(30556U);
    msg.setSourceEntity(252U);
    msg.setDestination(13538U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("IAGMPAVYWUSAKAQYYUEIWOMLDJNGZNGRALBCFTGAPXLBHCWPQXERZHDJDTJYOTPAHVXUQGDIOUHTIKOWENYLTHGJGOORUTVWXCBFDVTSYCEKUSPKFRALENFNQBRWFIPZSOSH");
    msg.links = 4289578824U;

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
    msg.setTimeStamp(0.51462126661);
    msg.setSource(58716U);
    msg.setSourceEntity(135U);
    msg.setDestination(20120U);
    msg.setDestinationEntity(205U);
    msg.groupname.assign("XKHCAOUREELH");
    msg.action = 207U;
    msg.grouplist.assign("VONUJKFDTQANGSIFHQQTUZMFHIEILDRRCQIDYZVJSIXNFKEYGOIFUNBUVAYWDRHWBPOJWLAPRJEKEZCMCDCRVWJYMVYYEWXFTGNXMXXFQJOAEWXALPPLLIHASSKBHMSMVBPIEKKYMSBHTRNPWDGZHCQQOZOTTFQJGAXXAJRUNMPVWTCXHBAMWPHVLNZNCYPZVRASUCTGCFTDYRNKOG");

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
    msg.setTimeStamp(0.346317441299);
    msg.setSource(38080U);
    msg.setSourceEntity(60U);
    msg.setDestination(56901U);
    msg.setDestinationEntity(14U);
    msg.groupname.assign("YSIZFINUJGICQSZGLMWJWBCKCOSWXPDNGKRARAVQUDLVFMEKSZQYVALNMQXNZRHOWCWOPGENKOJHWURSSDDIHULHHTEVYPBOOGIAETCWEKMDPHEOTFFBADAZYREPRXEERFBUDVSSZLLNFKRLUHAMPJYKCWXNQEZUVHVSMJFIVVKXLJCTMGJCITMNTPITGQGQABKTOBDH");
    msg.action = 188U;
    msg.grouplist.assign("SKFDPCYGQOMWCAGYBKGBQLNMLJFLEHXVAXEEYIDMWHIWNHXOYVTCNIZJBMKZJBBWGBSIKUXARJRPVCOQAPOXNVIEUZDYWQIILNPNGEVDWFQQOQLVIOEALUCFMBIRFGTRZFHLXVXDHZDXLREDETHAJSTYVSUWNOPCKJJSSGJTYMEWUPRQZKSXYZXUWTRVJUHOCKHSNPWQGJURCMPAASKTYM");

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
    msg.setTimeStamp(0.646562914761);
    msg.setSource(40211U);
    msg.setSourceEntity(230U);
    msg.setDestination(43128U);
    msg.setDestinationEntity(156U);
    msg.groupname.assign("MCLLVOWQWCKMQFGGBZUCSAOLHYAZWIGKFUUTXWCGKIDOEDAHAAFRYIGUEXPONB");
    msg.action = 221U;
    msg.grouplist.assign("HFRXNNALNBZNHJVESKTPPDIVTKJGABWKZGOIIWKQEXCIQHYALIIDJJSPMDCLUTZRMFMQTMKGUTABPLCKVOURKLCHSCDIDYWFRVLAMOPIKXEWCEXSWUASGFRQLCGWEJOPOOUSDMUWNMDWQXJQUUYDOSBYJSZDMZRNYBPFYATFYFVMNOCHSMVEFPAYDXTORXUNHJEFRVGQGJHNFKRCGNBAEGWUIZQZIOXQJEBXPXACZYBZTHVTHEYVPRGHTLBQ");

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
    msg.setTimeStamp(0.343627408523);
    msg.setSource(35939U);
    msg.setSourceEntity(175U);
    msg.setDestination(11815U);
    msg.setDestinationEntity(68U);
    msg.value = 0.756230647215;
    msg.sys_src = 29649U;

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
    msg.setTimeStamp(0.45506336706);
    msg.setSource(54557U);
    msg.setSourceEntity(244U);
    msg.setDestination(55873U);
    msg.setDestinationEntity(37U);
    msg.value = 0.170309336466;
    msg.sys_src = 34785U;

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
    msg.setTimeStamp(0.717223540062);
    msg.setSource(9011U);
    msg.setSourceEntity(146U);
    msg.setDestination(55268U);
    msg.setDestinationEntity(136U);
    msg.value = 0.905203539798;
    msg.sys_src = 14095U;

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
    msg.setTimeStamp(0.429221075874);
    msg.setSource(18626U);
    msg.setSourceEntity(245U);
    msg.setDestination(54539U);
    msg.setDestinationEntity(4U);
    msg.value = 0.0252517489066;
    msg.units = 153U;

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
    msg.setTimeStamp(0.929734864609);
    msg.setSource(22468U);
    msg.setSourceEntity(152U);
    msg.setDestination(4245U);
    msg.setDestinationEntity(102U);
    msg.value = 0.42242961708;
    msg.units = 160U;

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
    msg.setTimeStamp(0.51600843799);
    msg.setSource(1591U);
    msg.setSourceEntity(166U);
    msg.setDestination(11889U);
    msg.setDestinationEntity(87U);
    msg.value = 0.885271718251;
    msg.units = 115U;

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
    msg.setTimeStamp(0.0393201301426);
    msg.setSource(37238U);
    msg.setSourceEntity(89U);
    msg.setDestination(57708U);
    msg.setDestinationEntity(79U);
    msg.base_lat = 0.151077899532;
    msg.base_lon = 0.807707981391;
    msg.base_time = 0.232788572885;

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
    msg.setTimeStamp(0.326532276779);
    msg.setSource(11079U);
    msg.setSourceEntity(36U);
    msg.setDestination(55278U);
    msg.setDestinationEntity(133U);
    msg.base_lat = 0.544599434709;
    msg.base_lon = 0.549906688175;
    msg.base_time = 0.956069497946;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 159U;
    tmp_msg_0.priority = 105;
    tmp_msg_0.x = -26404;
    tmp_msg_0.y = 23867;
    tmp_msg_0.z = -22058;
    tmp_msg_0.t = -6737;
    IMC::CloseSession tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sessid = 3338736315U;
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
    msg.setTimeStamp(0.125077615547);
    msg.setSource(13559U);
    msg.setSourceEntity(73U);
    msg.setDestination(35668U);
    msg.setDestinationEntity(55U);
    msg.base_lat = 0.498261244434;
    msg.base_lon = 0.0581683673456;
    msg.base_time = 0.840049164331;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 64386U;
    tmp_msg_0.priority = -67;
    tmp_msg_0.x = 22204;
    tmp_msg_0.y = 13552;
    tmp_msg_0.z = 15746;
    tmp_msg_0.t = 8543;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1173965149;
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
    msg.setTimeStamp(0.931523146952);
    msg.setSource(58463U);
    msg.setSourceEntity(82U);
    msg.setDestination(7649U);
    msg.setDestinationEntity(25U);
    msg.base_lat = 0.299019111601;
    msg.base_lon = 0.291821665446;
    msg.base_time = 0.0369969560019;
    const char tmp_msg_0[] = {-128, -40, -10, 123, -25, 111, 0, 66, -84, 1, 18, 45, -71, 103, 5, -18, -4, -33, 95, -55, -60, 18, 56, 92, 99, -32, -115, 104, 96, -123, 70, 18, -11, 80, 98, -81, 103, -78, -1, -10, 2, -119, -40, 39, -88, 28, -35, -61, 108, -24, 32, -108, 69, 124, 124, 120, 38, 114, -88, -95, 11, -85, 51, -55, 62, 4, -75, 28, 111, 126, 112, -103, -76, 50, 57, 110, 102, -47, -126, -75, -31, -112, -89, 83, -18, -50, 50, 9, 30, 54, -19, -82, -41, -119, 40, -60, 111, 73, 7, -93, -126, -39, 97, -7, -103, -55, -101, 89, -61, 27, -11, 18, 7, 61, 57, 61, -35, -18, -94, -13, 121, -88, -112, -125, -25, 43, 66, 2, -124, 0, 31, 38, -21, -88, -99, 6, -47, 114, 114, -69, 110, 54, 80, 105, 107, -46, 66, 119, -101, -90, -94, 27, 21, 51, -44, -21, -90, -42, 13, 28, -14, -92, -24, 28, 92, -86, -113, 79, 79, 100, -75, -51, -28, 54, -78, -101, -45, -83, 64, -73, 102, 119, -78, -19, 6, -57, 51, -43, 110, -60, -102, 72, 28, 37, -99, 121, 76, 88, 23, 22, -111, -101, 47, 27, -19, -79, -14, 2, 87, -88, 37, 25, 2, 48, -45, -41, 30, 99, 15, -99, -19, 57, 103, -120, -22, -18, -34, 55, 11, -108, 45, 1, -86, 65, 3, -43, -71, -12, 67, -122, -9, 33, -53, -116, -88, -37, 48, 71, 47};
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
    msg.setTimeStamp(0.540884674288);
    msg.setSource(42931U);
    msg.setSourceEntity(34U);
    msg.setDestination(43693U);
    msg.setDestinationEntity(234U);
    msg.base_lat = 0.511295296549;
    msg.base_lon = 0.705086247354;
    msg.base_time = 0.358322670924;
    const char tmp_msg_0[] = {79, -62, -28, 91, 49, -16, 87, 20, -27, -103, -115, -80, 24, 71, 75, 76, 72, 28, 68, 72, -112, 55, 47, 93, 2, 123, 90, -123, 72, 103, 96, 58, -38, -6, -92, 75, 33, -117, -71, -54, 4, -98, 71, 100, 119, -48, 32, -37, -100, -118, -13, -13, -34, 111, -93, -120, 58, 29, -7, -109, 13, -68, -79, -87, 1, 50, 43, 92, 48, -107, -66, 118, -117, -83, -90, -95, -86, 121, 33, 16, -28, -8, -67, -56, -44, 86, -61, 89, 55, -54, 97, -50, 81, 108, 7, -121, -57, 31, 32, 30, -35, -6, 45, -18, 61, 93, -23, -51, -83, 30, 66, 92, 47, -80, 77, -91, 105, -65, -32, -90, 6, -68, -32, -53, -103, -29, -75, 80, -85, -114, 45, 39, 100, -57, 14, 111, -36, 29, -61, 59, -105, 85, -75, -27, -108, -58, 54, -58, 27, 89, 80, -124, 2, 109, -104, -128, 25, 34, -126, 25, 126, 100, -34, 106, 111, 45, 24, -22, -66, 99, -124, 42, -69, -42, 66, 92, -71, -13, 34, -14, -53, -68, -122, 22, -91, -87, -16, -45, -100, -122, -40, 34, -115, -54, -85, 100, 7, 75, -29, 51, -94, -58, -38, -103, -19, 27, 78, 36, 8, 42, -111, 71, -67, 121, -117, 72, 87, -1, -84, -106, 62, 30, -93, 58, 45, -29, -116, -73, -114, -118};
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
    msg.setTimeStamp(0.576947037848);
    msg.setSource(28573U);
    msg.setSourceEntity(26U);
    msg.setDestination(40832U);
    msg.setDestinationEntity(192U);
    msg.base_lat = 0.225145996374;
    msg.base_lon = 0.327977872987;
    msg.base_time = 0.97835068999;
    const char tmp_msg_0[] = {69, 109, -85, 116, -111, 94, -45, 59, 89, 64, -56, -38, -109, 79, 100, -29, -18, -64, 117, -47, 110, -40, -35, -2, -100, -32, 126, 13, -68, 29, 97, -90, -7, -128, -38, 77, 76, -85, -88, -34, 109, -6, -91, -55, 108, 49, 50, -113, 111, 62, 106, 77, -32, 108, -82, -111, 11, 39, -43, -15, 3, 122, -109, 94, -39, -103, -64, 47, 71, 48, -74, 79, 44, 110, -90, 5, -81, 6, 10, 0, 122, -1, -9, 119, 79, -76, -106, -117, 93, -101, 119, 12, -116, 106, -91, -4, -91, -128, 65, -82, 95, -110, 46, -110, 9, -77, -84, 51, 9, -36, 80, 121, -57, -75, -111, 3, -10, -74, 0, 34, -100, -72, -14, 37, -94, -100, -12, -90, 100, -2, -54, -99, 85, -75, 48, 5, -52, 53, -62, 33, 16, -48, -125, -55, 0, -32, -97, -78, -79, 42, -100, -22, -77, 3, 48, 105, -41, 81, 92, 61, -47, -103, 76, -21, 47, -107, -112, -89, 64, -23, -88, 125, -88, -93, 36, 87};
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
    msg.setTimeStamp(0.46984932987);
    msg.setSource(33348U);
    msg.setSourceEntity(199U);
    msg.setDestination(953U);
    msg.setDestinationEntity(115U);
    msg.sys_id = 51052U;
    msg.priority = -125;
    msg.x = 6231;
    msg.y = -28935;
    msg.z = 28591;
    msg.t = -5556;
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.569999444183);
    msg.setSource(45663U);
    msg.setSourceEntity(146U);
    msg.setDestination(56153U);
    msg.setDestinationEntity(116U);
    msg.sys_id = 34419U;
    msg.priority = 22;
    msg.x = 23789;
    msg.y = -31963;
    msg.z = -4627;
    msg.t = -30420;
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ARURWMBYQWNYWWOXAFOFGCWAKHWPODBKPEQWDRSQVVYDHRXDIHFNNSUIACGBULHOVIQNZEUMBIOMWKGGRSJLMMVYQZSRHZEINCEMHIELPRBZUBUTJEQVTPEFNZONXKLAGXTJUYUOQYKPDIMVZJCGAHRIMNCVBTCQOTUZGFLVOKAQJHDLFUEDCTYXXICPBNLXFCHXGFIVPXAGATLSTKMCFERDTPZZKFSYYB");
    tmp_msg_0.attr_type = 152U;
    tmp_msg_0.min.assign("AYOVLPCLYBXRPIEXVHCTNRCDYAKPQBOFWPFHSXACONUDFHGZJTEREUZKBEFLDQTFGBOWQHPOBBPMHJERXBLU");
    tmp_msg_0.max.assign("LYBSSXJDUHGTNEVEFJZXFELQDPVAQHXEMURTOYWFADZTGPYRLUOVAFXGPOHADBZUQTZZHSWJPSAFFQPZGDXKNDBJLQTHBRRYRRSCCNZZVMQQCKTWVXUWHOVNCLECLBQISYMLIWGFIYFJQTCKFSNJVYXNAOJURIGWMOEHJGEVPMDRCNQBZNGKAKVTIEHGHYKWYBPDEFYCLIDCKKUIGASMKIMSPLOXPTWRJTXUW");
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
    msg.setTimeStamp(0.402391780396);
    msg.setSource(3205U);
    msg.setSourceEntity(74U);
    msg.setDestination(62016U);
    msg.setDestinationEntity(184U);
    msg.sys_id = 40851U;
    msg.priority = 119;
    msg.x = 9714;
    msg.y = 4387;
    msg.z = -17342;
    msg.t = -21716;
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 122U;
    const char tmp_tmp_msg_0_0[] = {-75, 60, -44, -25, 18, -79, 64, -93, -94, 55, 25, 32, -35, -89, 28, -41, -114, 47, 33, 114, -115, 66, 40, 65, 124, 58, -43, -47, 100, 95, -43, -28, 117, 115, 111, -9, -75, -59, 124, 58, -34, 98, -29, -31, 106, -37, 96, -102, 6, 66, -74, -122, 7, 83, -52, 76, 13, 30, 3, 67, 41, 60, -124, 47, 27, -82, -93, -96, -81, -36, 7, -22, 29, -43, -77, 116, -85, -50, 126, 110, 59, -32, -56, -66, -96, -56, -88, 31, 44, 58, 70, 46, 7, 79, 119, -92, 81, -24, -66, -61, -9, 40, -17, 79, -115, -71, 60, -19, 22, 70};
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
    msg.setTimeStamp(0.865347799308);
    msg.setSource(23920U);
    msg.setSourceEntity(218U);
    msg.setDestination(17507U);
    msg.setDestinationEntity(177U);
    msg.req_id = 53740U;
    msg.type = 220U;
    msg.max_size = 58571U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.3114103572;
    tmp_msg_0.base_lon = 0.951660570021;
    tmp_msg_0.base_time = 0.200713609721;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 62384U;
    tmp_tmp_msg_0_0.destination = 1056U;
    tmp_tmp_msg_0_0.timeout = 0.667182687875;
    IMC::RestartSystem tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.type = 212U;
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
    msg.setTimeStamp(0.457908067304);
    msg.setSource(30403U);
    msg.setSourceEntity(164U);
    msg.setDestination(25891U);
    msg.setDestinationEntity(9U);
    msg.req_id = 48010U;
    msg.type = 34U;
    msg.max_size = 55833U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.688842904787;
    tmp_msg_0.base_lon = 0.607369128795;
    tmp_msg_0.base_time = 0.861251243157;
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
    msg.setTimeStamp(0.506631961863);
    msg.setSource(6612U);
    msg.setSourceEntity(254U);
    msg.setDestination(62297U);
    msg.setDestinationEntity(47U);
    msg.req_id = 12792U;
    msg.type = 113U;
    msg.max_size = 11299U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0541010299035;
    tmp_msg_0.base_lon = 0.781181451716;
    tmp_msg_0.base_time = 0.862746520958;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 18712U;
    tmp_tmp_msg_0_0.priority = -88;
    tmp_tmp_msg_0_0.x = 69;
    tmp_tmp_msg_0_0.y = 10056;
    tmp_tmp_msg_0_0.z = 3834;
    tmp_tmp_msg_0_0.t = 5786;
    IMC::SystemGroup tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.groupname.assign("UVUOSIBBMGYFGJLAQBBPXRDGSIPCNQZGDVAQXBCTHOAALWD");
    tmp_tmp_tmp_msg_0_0_0.action = 108U;
    tmp_tmp_tmp_msg_0_0_0.grouplist.assign("EJCEXGVVHDOEWLNQESZSSLPIYLUCNQKTTCBDEIRHBVPYXOXKZXMVWMDHAXADEBASBVJBJNLPIHRVMGOZWGMQNGXENAUPQUBUSDFBMRFONOYCTIFWPCFNYZMCAMBUVFPKVCWTGKRGJTOESQJGZFTZAPXIJJHZLBWDGDKJVLFZIWIFMWOXKAYCALKPTPXIRACKXUTQYHOOOWMTEZHLIFNDBHYPSQYAJRHDRWEYQRGSNFDQIU");
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
    msg.setTimeStamp(0.754986793076);
    msg.setSource(33379U);
    msg.setSourceEntity(236U);
    msg.setDestination(12365U);
    msg.setDestinationEntity(61U);
    msg.original_source = 53274U;
    msg.destination = 58290U;
    msg.timeout = 0.898100930638;
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.697084076484);
    msg.setSource(46620U);
    msg.setSourceEntity(250U);
    msg.setDestination(44845U);
    msg.setDestinationEntity(114U);
    msg.original_source = 27016U;
    msg.destination = 60379U;
    msg.timeout = 0.950428290117;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 121U;
    tmp_msg_0.error.assign("LDBCNUOPPDZVAGTIOEMCQCSFJDRFRJILFHOYIXGOKVRUXMRPUSRXHMNDFTAQZRXGOCQNBDJRWCEGYMUXVLKPANJEERFQUYQFQUDDIGSZVIAEBXNKPJYHBVLZUJSNWGSEWCAWOKHGYSMMBTMLZAIV");
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
    msg.setTimeStamp(0.776336768449);
    msg.setSource(29419U);
    msg.setSourceEntity(241U);
    msg.setDestination(22088U);
    msg.setDestinationEntity(85U);
    msg.original_source = 42066U;
    msg.destination = 61579U;
    msg.timeout = 0.317676480017;
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("WOTVIODMBLHFENRRKASXNPPWBBSXZWZSOCIASVJJHYLQGWXOEDWVXLFGPGBYVACGYRGYQMPNSRSIKWKNTMOOLGGIUUJYEVJUKAMCQWWMFUUEEODVYYTXCDJBZSYLRRZBIQMBFFTRMLFYPSZEKVTJZKRJNJCUDGNPJMOFUAVQSQEADZHBLTEFPHZNAHLUCTYOTKHACZUMLVSQXWAFDHMKZXNGUPTKNDCTDIJKIBPHC");
    tmp_msg_0.lat = 0.716793062064;
    tmp_msg_0.lon = 0.581797236576;
    tmp_msg_0.z_units = 175U;
    tmp_msg_0.z = 0.706908812618;
    tmp_msg_0.accuracy = 0.71093763062;
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
    msg.setTimeStamp(0.79102754474);
    msg.setSource(929U);
    msg.setSourceEntity(134U);
    msg.setDestination(33258U);
    msg.setDestinationEntity(40U);
    msg.type = 169U;
    msg.comm_interface = 47191U;
    msg.model = 47579U;
    msg.list.assign("DZUTSKEFVOSWRHWIJZKKZMJCHFHKZOXSCAXLNNMIQWDSFMTBIMBXGYRZJBREBNSTVOTOQJGHPIUQKBCFKXVBWIYMTHDARQTLCDPNMWHJLAYYTPKJSVABMUXRQCRILZIIHDABP");

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
    msg.setTimeStamp(0.286721438968);
    msg.setSource(1186U);
    msg.setSourceEntity(45U);
    msg.setDestination(27012U);
    msg.setDestinationEntity(42U);
    msg.type = 18U;
    msg.comm_interface = 21289U;
    msg.model = 10769U;
    msg.list.assign("GNBGKMOLFXHMNJLHFPVKDQXAIYJAKRWJZNUJUTTBQUKQDCDCPGYUGBCUVSWBOQSRBZHANWVRTTEIBOSRPMBYIXWZPODHCYAKDRCTVVJGTD");

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
    msg.setTimeStamp(0.231118180386);
    msg.setSource(50696U);
    msg.setSourceEntity(17U);
    msg.setDestination(38231U);
    msg.setDestinationEntity(123U);
    msg.type = 142U;
    msg.comm_interface = 58093U;
    msg.model = 25066U;
    msg.list.assign("TFSTLNLTQAVKIKRALGMHDMAGUKBDMXNL");

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
    msg.setTimeStamp(0.879167277308);
    msg.setSource(47067U);
    msg.setSourceEntity(217U);
    msg.setDestination(33258U);
    msg.setDestinationEntity(201U);
    msg.type = 195U;
    msg.req_id = 3821617481U;
    msg.ttl = 30118U;
    msg.code = 12U;
    msg.destination.assign("RRCJPYELYBKGF");
    msg.source.assign("WLYOJAXWQXAEPMDVURZUIDNIWHAPPOXYJLMTNHTBVZFOEZRESWFEVLPFALYBGYTCDRVTZXKISQOKJGEYSCXWGZTNEVBHFMQRNBQHIH");
    msg.acknowledge = 184U;
    msg.status = 23U;
    const char tmp_msg_0[] = {65, -19, 46, -59, -17, -117, -25, 44, -28, -62, 80, 5, -75, 106, 24, 51, 15, -58, -8, -63, 96, -33, 122, 66, 71, 19, -70, 39, -28, 55, -91, 63, -74, -89, 46, -24, -116, -12, -18, -52, 40, -27, 110, 114, -70};
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
    msg.setTimeStamp(0.793732948986);
    msg.setSource(8193U);
    msg.setSourceEntity(40U);
    msg.setDestination(24846U);
    msg.setDestinationEntity(137U);
    msg.type = 0U;
    msg.req_id = 1230636407U;
    msg.ttl = 33901U;
    msg.code = 222U;
    msg.destination.assign("AIMXAPPWRMDSFOAHGYTNRGRWKNDGFDUWCEMZPMEYAPDKDVKBYZMZERRAPYYWLIYHTBKJJNUICLCTGWUGUNBAXJEVJNJHDDTBFPBXPXCXZCTIURGYBLFSLBLVHHO");
    msg.source.assign("WRIMNYXSRQNNYURAGTSLTKRGCINTVLDDYOPGXMHVFUXFGBOHIJDWEXOHDZHIZJAEDNULMQFUT");
    msg.acknowledge = 234U;
    msg.status = 219U;
    const char tmp_msg_0[] = {-112, -91, -18, 100, -21, -80, 113, 1, -10, 92, -73, 33, -34, -91, -73, 44, -8, 1, -95, 110, -12, 72, 62, 42, -103, -74, -37, -72, -14, -71, -53, 96, 58, -23, -62, 21, -66, -74, -12, -14, 106, -108, 89, 26, -59, -73, -86, -34, 82, 16, -22, -67, -108, 123, 83, 77, 57, 107, 98, -35, 126, -50, 32, -59, 15, -77, 92, 78, 117, -68, 84, 88, -24, 117, -85, 57, 112, -77, -72, -114, -99, -43, -17, -104, -26, -45, -61, 54, -90, -49, -51, -6, 38, -58, 26, -47, 87, 93, 54, 88, -104, -43, -33, -15, -111, -61, 26, -80, -60, 31, 40, 101, -99, -19, -20, -83, 37, 98, -84, 76, -101, -81, 118, -110, 116, 44, -11, 121, 119, 29, 70, -92, 90, 34, -119, -79, -91, 77, 17, -11, 7, 97, -89, -62, 102, -41, 126, 77, 4, 70, -30, 91, -25, 121, -15, -82, -120, -75, -54, -124, -107, -7, 84, 112, 76, 21, -84, -54, -56, 2, 54, 25, -95, -7, 110, 27, 1, -77, -83, 118, 101, 86, -120, 123, -14, 4, -105};
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
    msg.setTimeStamp(0.274346331366);
    msg.setSource(14091U);
    msg.setSourceEntity(253U);
    msg.setDestination(47871U);
    msg.setDestinationEntity(135U);
    msg.type = 232U;
    msg.req_id = 128630678U;
    msg.ttl = 57901U;
    msg.code = 17U;
    msg.destination.assign("QWPGLVJBIKKMZZJGCSVQOAWHZRDPMTXXUKEEZKGLLGPNWHFTUXEAJNCOKSYYXNIUFZAOHSILATYPLFVCEGROOVCUALDHMQXPMMBSTGIUVNBAGSZHEIIBZHFJRQFDPJVXIONOYCVKMCQDPKMYQCPFPBHTJZCYLFRVXUWRYRMBPEWGABRZUHLNXSQBYOJRINQO");
    msg.source.assign("CSRJZDRFGTBPNDONHDJLLUBHXUIKJQASWQVAPDBGIKDTYQNZVOYHMJVTNXMLPLBATAIPYFWFTQZIIVVNYQBPCOURQUHQXBMVFIDNJQYHESZWCKJXACTAK");
    msg.acknowledge = 178U;
    msg.status = 141U;
    const char tmp_msg_0[] = {-86, -85, -52, 126, -69, -27, 13, -69, -5, -69, 17, 79, -27, -72, -56, -101, 34, 84, 116, -61, 114, 114, -4, -77, -85, 58, -114, 118, 49, 45, -51, -47, -65, -49, 93, -56, 0, 38, -31, 93, 103, 31, 109, -68, -78, -81, 57, -114, 39, -51, -119, 13, -50, 75, -128, 83, -128, -43, 14, 86, 71, 91, -9, -122, 65, 63, 54, -66, -101, -80, 56, -45, -76, -89, 112, 42, 58, 32, 78, 124, -29, -121, 92, 120, 38, 69, 95, -10, -34, -92, -96, 47, -20, 104, -46, -35, -74, -111, 89, 65, 81, -65, -95, 63, -84, 72, 19, -7, -75, 98, 10, -99, 27, -98, -35, 100, -34, 111, 70, -31, 126, -37, -6, 26, -113, -32, 40, -66, -104, -19, -39, 80, 60, 55, -95, -89, -91, -48, 80, 123, 28, -17, -30, -39, 88, -90, 42, 110, 73, 44, 58, -93, -43, -82, 107, 30, 87, 84, -103, -40, 55, -12, -86, -109, 51, -8, 124, -35, -2, 126, 116, -99, -41, 38, -120, 125, -13, 82, 20};
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
    msg.setTimeStamp(0.556292981884);
    msg.setSource(1840U);
    msg.setSourceEntity(140U);
    msg.setDestination(30649U);
    msg.setDestinationEntity(216U);
    msg.id = 33U;
    msg.range = 0.476645985192;

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
    msg.setTimeStamp(0.701007725985);
    msg.setSource(30525U);
    msg.setSourceEntity(76U);
    msg.setDestination(56715U);
    msg.setDestinationEntity(227U);
    msg.id = 61U;
    msg.range = 0.739991566746;

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
    msg.setTimeStamp(0.713613729768);
    msg.setSource(2826U);
    msg.setSourceEntity(156U);
    msg.setDestination(42283U);
    msg.setDestinationEntity(196U);
    msg.id = 97U;
    msg.range = 0.371587951443;

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
    msg.setTimeStamp(0.963635273769);
    msg.setSource(9384U);
    msg.setSourceEntity(9U);
    msg.setDestination(56930U);
    msg.setDestinationEntity(206U);
    msg.beacon.assign("QKLSYEAPBCZJKZBCMPQFBVYOB");
    msg.lat = 0.170505932664;
    msg.lon = 0.391540486853;
    msg.depth = 0.980312998158;
    msg.query_channel = 208U;
    msg.reply_channel = 187U;
    msg.transponder_delay = 20U;

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
    msg.setTimeStamp(0.940445621159);
    msg.setSource(17665U);
    msg.setSourceEntity(43U);
    msg.setDestination(25037U);
    msg.setDestinationEntity(65U);
    msg.beacon.assign("SVDQXTZPYCRNTHQDTWMQZZLBMQZAFWEEKJBALDMFLOGBWFVSKFYQLZWAOUNHYCLHQESGIVJIIWWAVRICYC");
    msg.lat = 0.392590432375;
    msg.lon = 0.370441652279;
    msg.depth = 0.204584935578;
    msg.query_channel = 149U;
    msg.reply_channel = 130U;
    msg.transponder_delay = 172U;

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
    msg.setTimeStamp(0.0707917435485);
    msg.setSource(3435U);
    msg.setSourceEntity(53U);
    msg.setDestination(1532U);
    msg.setDestinationEntity(33U);
    msg.beacon.assign("WGEZCSRBYREMBGRJGWQRHZQXNQKPUUMFPDHXSITFAIYXDGLNZJXDNZIEGQBPBBKJIWLJNALCAWENCKHULLLARMYWVHHOKFISSBZCTOPOREOZPKUSPWXOJVFPPSCMVADEQRVXFCNTOGELMJSDVIK");
    msg.lat = 0.689022380689;
    msg.lon = 0.160546843614;
    msg.depth = 0.360282053658;
    msg.query_channel = 185U;
    msg.reply_channel = 19U;
    msg.transponder_delay = 173U;

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
    msg.setTimeStamp(0.246644808473);
    msg.setSource(59459U);
    msg.setSourceEntity(137U);
    msg.setDestination(53882U);
    msg.setDestinationEntity(231U);
    msg.op = 246U;

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
    msg.setTimeStamp(0.194177687312);
    msg.setSource(22285U);
    msg.setSourceEntity(253U);
    msg.setDestination(19805U);
    msg.setDestinationEntity(118U);
    msg.op = 18U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PMKKUXQEVGNGHCYVRMKNQDCUGOOSRXXHUTLLJLVRJWRQLYIXQSTCRBIZDIIBQGLZNFMSZGVFWAMPBIBSVPHUMJNGKGPENYVTCZPWVTAEDLMMFSOBJWAZQLOUUITAEEFXTQCCOLXNYMSINDULKRHJKFHCOMINA");
    tmp_msg_0.lat = 0.0856805573741;
    tmp_msg_0.lon = 0.463585237339;
    tmp_msg_0.depth = 0.723101949386;
    tmp_msg_0.query_channel = 141U;
    tmp_msg_0.reply_channel = 137U;
    tmp_msg_0.transponder_delay = 178U;
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
    msg.setTimeStamp(0.35008244734);
    msg.setSource(6005U);
    msg.setSourceEntity(95U);
    msg.setDestination(54530U);
    msg.setDestinationEntity(25U);
    msg.op = 68U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GINPYUGMMAZKQZYCBKCFTEJQXFMLEVYXGEFOGOIPKYHORNMWKDBARWWJGHVKQLSCMANPHFDIIZESDZGSVYKRPZJXFYUTRGFRUJNLKYLXBEZCEHOIAEBTTZPTXISUADQVPXRAFZVQFVUJRNCCQHOQMOMIPCDGXBNDCWJYOLOXBHDUWXAEUKRBTPJAJXEYFZTSLQBVHDHRLNSSGOYIOQDWDHWKRAPLVM");
    tmp_msg_0.lat = 0.395216429113;
    tmp_msg_0.lon = 0.666846334276;
    tmp_msg_0.depth = 0.879753435246;
    tmp_msg_0.query_channel = 9U;
    tmp_msg_0.reply_channel = 69U;
    tmp_msg_0.transponder_delay = 225U;
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
    msg.setTimeStamp(0.770149746645);
    msg.setSource(12555U);
    msg.setSourceEntity(117U);
    msg.setDestination(21548U);
    msg.setDestinationEntity(82U);
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("XQRHDJVAYVLQNVNKXBRGZKGINGWDUXDZWJXGIWWYHSRRWPXTDHVMPDZLPBIQEETWDO");
    tmp_msg_0.op = 244U;
    tmp_msg_0.sched_time = 0.730306272546;
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
    msg.setTimeStamp(0.106637393137);
    msg.setSource(36326U);
    msg.setSourceEntity(90U);
    msg.setDestination(49053U);
    msg.setDestinationEntity(244U);
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 3698754894U;
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
    msg.setTimeStamp(0.593659583973);
    msg.setSource(20323U);
    msg.setSourceEntity(160U);
    msg.setDestination(33130U);
    msg.setDestinationEntity(244U);
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("GGJWFWVFDXRFQNMZFTYYHWKZAGTZJUTYIIBVKEGUUYIOKNNAVDSXMJFDO");
    tmp_msg_0.value = 208U;
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
    msg.setTimeStamp(0.666843951048);
    msg.setSource(47463U);
    msg.setSourceEntity(30U);
    msg.setDestination(12183U);
    msg.setDestinationEntity(69U);
    msg.op = 13U;
    msg.system.assign("LNBZHIBNUYAZOOCCQNKYFJDSWVJSNCBLHHCRZDQRPVQUKWDTTZYXEKLTVJGLEFIIJHUFMOOWCGSUMHYEMHCPVQNBEWNPXXTQLESSRSUEAIWYKNAZEA");
    msg.range = 0.967138500519;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 5915U;
    tmp_msg_0.lat = 0.850057004182;
    tmp_msg_0.lon = 0.513089388195;
    tmp_msg_0.z = 0.794804039913;
    tmp_msg_0.z_units = 65U;
    tmp_msg_0.speed = 0.305644153118;
    tmp_msg_0.speed_units = 26U;
    tmp_msg_0.bearing = 0.486156129287;
    tmp_msg_0.width = 0.320374428835;
    tmp_msg_0.direction = 248U;
    tmp_msg_0.custom.assign("ATWTHMHGXDBNKUEAWUGVVTQVEUVUGCLPGILISUAVXJSIFSTBJQZDXRSTNFANEUZPLIFEYICJQROVMXBLUGZQVGMMXOSTQJYEMHAHWUZYJZAITYBOBEKEK");
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
    msg.setTimeStamp(0.344586096458);
    msg.setSource(31392U);
    msg.setSourceEntity(157U);
    msg.setDestination(64355U);
    msg.setDestinationEntity(147U);
    msg.op = 248U;
    msg.system.assign("WEQESFPAMCAPTFDRNLJXOFJLDHVMITZUWYCHOSXIRLLJDPEIBQTECHTGQZUXXNIOYPAUAPMHRVHDLUWGJDWPQAVVJONBZFSKKRTHSLYQUKXJNOKQOMHOBWAHFRPCZVIRVDPFGRBAXGGAMIKYNXPYKISUTBCLZJ");
    msg.range = 0.356526107463;
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 16U;
    tmp_msg_0.name.assign("NFGBWLXWAUEMKWPKBHDNZQGSEZGZVMEICMOZZUHMHYFRNOECPCVXCZUMGLKFKSETOIQXGFNUIABBHXSPKODGZTCDXYCBJWWOHCXCYIETUQPULVQRUU");
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
    msg.setTimeStamp(0.676347900559);
    msg.setSource(28896U);
    msg.setSourceEntity(249U);
    msg.setDestination(6495U);
    msg.setDestinationEntity(135U);
    msg.op = 68U;
    msg.system.assign("TKICSFNFRMAFOHAHTQNKBSCONTXLACBBYQZNAMPELNGEEYNYCNUGOUAJYPWDLRKORQRSVWPQMXHJBCLVCEIUGZFZCIEWVQYAKNRNHTWOGJTLEMABMXDGIDLG");
    msg.range = 0.736904032286;
    IMC::Gamma tmp_msg_0;
    tmp_msg_0.lat = 0.701285653029;
    tmp_msg_0.lon = 0.507196609529;
    tmp_msg_0.sog = 0.519974873263;
    tmp_msg_0.uc = 0.747531439342;
    tmp_msg_0.depth = 0.76323133574;
    tmp_msg_0.value = 0.604082568706;
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
    msg.setTimeStamp(0.661889804894);
    msg.setSource(42376U);
    msg.setSourceEntity(253U);
    msg.setDestination(35600U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.197370580026);
    msg.setSource(1505U);
    msg.setSourceEntity(53U);
    msg.setDestination(20369U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.860868752139);
    msg.setSource(18840U);
    msg.setSourceEntity(198U);
    msg.setDestination(62962U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.477167705334);
    msg.setSource(32754U);
    msg.setSourceEntity(62U);
    msg.setDestination(39083U);
    msg.setDestinationEntity(54U);
    msg.list.assign("CEHJOWKUBWEAVLQQHTUAPWYKXKPWPDZZCAWSAFPVRYXEAUODBCYBMAJXVELJOPIHUTMIMRIWBLGRGJFONXNGDVZZTSEZTSNZCSQEGPOUG");

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
    msg.setTimeStamp(0.115836825237);
    msg.setSource(61187U);
    msg.setSourceEntity(148U);
    msg.setDestination(24374U);
    msg.setDestinationEntity(187U);
    msg.list.assign("MCJVDPGSHOLRPRHKTCKSGFYQWINJBEEVWMNOESCKAZAQXKBBYDIVCRMUFWDEXKBXJNRLLUAXRMZHXFKMAOGXYVLG");

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
    msg.setTimeStamp(0.438857742838);
    msg.setSource(3856U);
    msg.setSourceEntity(240U);
    msg.setDestination(36254U);
    msg.setDestinationEntity(68U);
    msg.list.assign("SRBQAKFXMRXZILDGGORJIQSLWUXALVEOMPFTANLHNXEWBLAZMBWIBDOTJQUVGPEYCRIOEGRVORDAQDJJIKSXLH");

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
    msg.setTimeStamp(0.545884460518);
    msg.setSource(54751U);
    msg.setSourceEntity(19U);
    msg.setDestination(3285U);
    msg.setDestinationEntity(115U);
    msg.peer.assign("HXFQNEMUDSVDAQNJYOSVNTDPJEWHVRVUPEGILUUXOBXNERTJKSRIXAYTUICYMGMPCHLPQPUUOAXAR");
    msg.rssi = 0.35188970231;
    msg.integrity = 19559U;

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
    msg.setTimeStamp(0.108879728773);
    msg.setSource(61005U);
    msg.setSourceEntity(124U);
    msg.setDestination(45852U);
    msg.setDestinationEntity(188U);
    msg.peer.assign("QIOTUYQHEPLLRKLJJZUHUXAOCRABBJPCZBNMRSALNKOGINWFSOLERYKWLHBIUHYJTJGUOSZMWEQQHBYDMVSXLVDDFFWGGRDKOPVYICSQOKYMCPSDFJQDVWFTNPEMOECNUARMZZJOHWYKZXGMQXTFVRDICBTVZJACGWCFKWPIRQYUGKBCIJAAHDUDHKLEVNXNHQFESXBSGYKRJBXMENXUPPYICSFASOWIVIZX");
    msg.rssi = 0.992668839432;
    msg.integrity = 8107U;

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
    msg.setTimeStamp(0.142979163197);
    msg.setSource(40639U);
    msg.setSourceEntity(248U);
    msg.setDestination(32778U);
    msg.setDestinationEntity(236U);
    msg.peer.assign("SAYEUKIMWGSBKRZCAOBIXJQBKJTUZLPEWJBOOOGVJXZXFHRHZTLOCDLAOTDPRMFZCFES");
    msg.rssi = 0.836092429735;
    msg.integrity = 48042U;

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
    msg.setTimeStamp(0.495903019708);
    msg.setSource(34668U);
    msg.setSourceEntity(131U);
    msg.setDestination(51063U);
    msg.setDestinationEntity(56U);
    msg.req_id = 26002U;
    msg.destination.assign("KKDBORINWMXSORHRMSXGQICRQERWHSGLYLOIGQSZNVCWYAODAWJTLRNXSXZVPQBTIFRREJTIZDJKTICYPPIHHCTXZUECNFVZIAXJYOMHSUHEIQYKEMVRUODMZVMYPTRANUJOZMSFDUNWPHAJGBYOJWSYDZQJVBSTSUFGFBFWTQKPCKECCUKEVMELWFXBXPUHNHTVY");
    msg.timeout = 0.838802642272;
    msg.range = 0.96079742503;
    msg.type = 11U;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.889931947409;
    tmp_msg_0.temperature = 0.518087953987;
    tmp_msg_0.depth = 0.394798622394;
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
    msg.setTimeStamp(0.21117913482);
    msg.setSource(62867U);
    msg.setSourceEntity(67U);
    msg.setDestination(11103U);
    msg.setDestinationEntity(52U);
    msg.req_id = 52735U;
    msg.destination.assign("AJKWOSYYQGRKNQARGAPLKCSRFZSQQYPGSKNYFJIIXJEIYXPFNDTKTKXQENYCGCTIGBXSHFMPITMJPQRALGZXNVTLBOQHIORDJHUYVDYSOCMKUVZVCQMVPLWZSPXQPDDJJVNHNRGOOPWFEXUCWLEAUBVHDBTUVOVKFMDFCKMBLPCZSYBIRJZAMYEWMTBEOGUDWKWHICH");
    msg.timeout = 0.37677711869;
    msg.range = 0.0762124805883;
    msg.type = 240U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.516292662585;
    tmp_msg_0.lon = 0.265159863058;
    tmp_msg_0.z = 0.343829675582;
    tmp_msg_0.z_units = 178U;
    tmp_msg_0.speed = 0.421478521526;
    tmp_msg_0.speed_units = 62U;
    tmp_msg_0.abort_z = 0.377479408744;
    tmp_msg_0.bearing = 0.864233435319;
    tmp_msg_0.glide_slope = 31U;
    tmp_msg_0.glide_slope_alt = 0.7835607495;
    tmp_msg_0.custom.assign("JJPEGJKXQDMQSBMOWFUNALZSVUYVCBAFLZUVVJKZOPFCUWVYFWJRGGRTKZHUSYAIWUZTLGCEDWPTZCXTYICMNBIDNDTPIWCDFWSOXHHYHRFTAAOERNSIDOMAWBMKZUEMIBBHAS");
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
    msg.setTimeStamp(0.924369569679);
    msg.setSource(25098U);
    msg.setSourceEntity(218U);
    msg.setDestination(19314U);
    msg.setDestinationEntity(209U);
    msg.req_id = 21363U;
    msg.destination.assign("RJXDYAPXUFDKLJFDJWYKMQEAMJQTVBHXMLGYOHOZOQJWWKGRSXCPEQPZWKZADLNJTMOGCUCNXCJKCZPFIPXQDYRCZXYXPBGXAILONRSHDQUZUFSWTBCBWAOSMMPFSWXRKJUNQMIYTFUGDNVMUMPNNHIILEVGVAVHNTHOVOIZBOLKVLEZHVLEFYEPTAQCVSWKGVTEOIIGAFCUHYWBRJMIARLBARDZTBTYYGUGESFFDURKPHWRIHNBSJLEQ");
    msg.timeout = 0.178073635278;
    msg.range = 0.139227065749;
    msg.type = 209U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 18791U;
    tmp_msg_0.control_ent = 88U;
    tmp_msg_0.timeout = 0.039177024535;
    tmp_msg_0.loiter_radius = 0.999920918104;
    tmp_msg_0.altitude_interval = 0.73238519541;
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
    msg.setTimeStamp(0.612023320767);
    msg.setSource(15358U);
    msg.setSourceEntity(28U);
    msg.setDestination(15176U);
    msg.setDestinationEntity(165U);
    msg.req_id = 64182U;
    msg.type = 243U;
    msg.status = 170U;
    msg.info.assign("ZOFPVWDUWDWBUBEYTIPMVFEUSQDBJZLKBDLQGYJGSAUOASUFL");
    msg.range = 0.288498859116;

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
    msg.setTimeStamp(0.0892893312075);
    msg.setSource(56048U);
    msg.setSourceEntity(96U);
    msg.setDestination(32298U);
    msg.setDestinationEntity(134U);
    msg.req_id = 46976U;
    msg.type = 190U;
    msg.status = 31U;
    msg.info.assign("JSLYOCKSAJIR");
    msg.range = 0.72565513036;

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
    msg.setTimeStamp(0.953783004787);
    msg.setSource(37222U);
    msg.setSourceEntity(0U);
    msg.setDestination(47575U);
    msg.setDestinationEntity(170U);
    msg.req_id = 1257U;
    msg.type = 4U;
    msg.status = 12U;
    msg.info.assign("DOMQHAFBNDLZZIQTYERRASKWHQCOGIADCZFGBINIPRGQZUIUQUEIFAZRSQZYKTVDGXYHEZKSWELNROXYXGNJYXSWKOQRXVUSCQAFJIFYQPLNJBLCTXHWBRGTMMNGUMXRXDLOWOKYTLENDOWYRWTDIOXGBBFFGNPHAKUIKAMTIGVDSQMMMDVSBBPVUXKFDJUVJHWFEVRJPPNZLMKCTKF");
    msg.range = 0.819858756587;

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
    msg.setTimeStamp(0.581385967545);
    msg.setSource(48927U);
    msg.setSourceEntity(69U);
    msg.setDestination(43166U);
    msg.setDestinationEntity(152U);
    msg.value = -27403;

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
    msg.setTimeStamp(0.740376912469);
    msg.setSource(7912U);
    msg.setSourceEntity(192U);
    msg.setDestination(51573U);
    msg.setDestinationEntity(216U);
    msg.value = 12449;

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
    msg.setTimeStamp(0.0397783258233);
    msg.setSource(16969U);
    msg.setSourceEntity(124U);
    msg.setDestination(26627U);
    msg.setDestinationEntity(139U);
    msg.value = 17018;

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
    msg.setTimeStamp(0.661092358504);
    msg.setSource(47040U);
    msg.setSourceEntity(70U);
    msg.setDestination(64323U);
    msg.setDestinationEntity(10U);
    msg.value = 0.465383313322;

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
    msg.setTimeStamp(0.6580532819);
    msg.setSource(59345U);
    msg.setSourceEntity(7U);
    msg.setDestination(52638U);
    msg.setDestinationEntity(2U);
    msg.value = 0.902118159406;

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
    msg.setTimeStamp(0.679190593481);
    msg.setSource(32557U);
    msg.setSourceEntity(231U);
    msg.setDestination(23533U);
    msg.setDestinationEntity(157U);
    msg.value = 0.472573054749;

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
    msg.setTimeStamp(0.083258627691);
    msg.setSource(28140U);
    msg.setSourceEntity(144U);
    msg.setDestination(9465U);
    msg.setDestinationEntity(24U);
    msg.value = 0.42352192049;

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
    msg.setTimeStamp(0.236323005449);
    msg.setSource(2442U);
    msg.setSourceEntity(194U);
    msg.setDestination(40263U);
    msg.setDestinationEntity(211U);
    msg.value = 0.204627734661;

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
    msg.setTimeStamp(0.0966561094985);
    msg.setSource(38440U);
    msg.setSourceEntity(212U);
    msg.setDestination(39820U);
    msg.setDestinationEntity(58U);
    msg.value = 0.836804634229;

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
    msg.setTimeStamp(0.508977604588);
    msg.setSource(52772U);
    msg.setSourceEntity(212U);
    msg.setDestination(53101U);
    msg.setDestinationEntity(233U);
    msg.validity = 2070U;
    msg.type = 8U;
    msg.utc_year = 23452U;
    msg.utc_month = 113U;
    msg.utc_day = 175U;
    msg.utc_time = 0.909249177532;
    msg.lat = 0.0310143375836;
    msg.lon = 0.310443464705;
    msg.height = 0.642756338197;
    msg.satellites = 7U;
    msg.cog = 0.875045217573;
    msg.sog = 0.707495655052;
    msg.hdop = 0.13098376142;
    msg.vdop = 0.749403298714;
    msg.hacc = 0.21680513097;
    msg.vacc = 0.89310977402;

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
    msg.setTimeStamp(0.0394179933449);
    msg.setSource(56996U);
    msg.setSourceEntity(225U);
    msg.setDestination(17659U);
    msg.setDestinationEntity(216U);
    msg.validity = 64073U;
    msg.type = 139U;
    msg.utc_year = 18989U;
    msg.utc_month = 220U;
    msg.utc_day = 18U;
    msg.utc_time = 0.98424353507;
    msg.lat = 0.780478096157;
    msg.lon = 0.160578016955;
    msg.height = 0.727449872958;
    msg.satellites = 44U;
    msg.cog = 0.822772830703;
    msg.sog = 0.554007602438;
    msg.hdop = 0.650494243138;
    msg.vdop = 0.644649822037;
    msg.hacc = 0.58983035755;
    msg.vacc = 0.71228151479;

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
    msg.setTimeStamp(0.310759245013);
    msg.setSource(26488U);
    msg.setSourceEntity(25U);
    msg.setDestination(61807U);
    msg.setDestinationEntity(19U);
    msg.validity = 16880U;
    msg.type = 137U;
    msg.utc_year = 46008U;
    msg.utc_month = 4U;
    msg.utc_day = 120U;
    msg.utc_time = 0.244233519448;
    msg.lat = 0.339726379324;
    msg.lon = 0.397329491829;
    msg.height = 0.330607588519;
    msg.satellites = 149U;
    msg.cog = 0.951804302389;
    msg.sog = 0.565050739543;
    msg.hdop = 0.604834781563;
    msg.vdop = 0.401377949573;
    msg.hacc = 0.502066654053;
    msg.vacc = 0.633552444096;

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
    msg.setTimeStamp(0.552541957826);
    msg.setSource(44025U);
    msg.setSourceEntity(155U);
    msg.setDestination(38849U);
    msg.setDestinationEntity(209U);
    msg.time = 0.857106770574;
    msg.phi = 0.20949456512;
    msg.theta = 0.489895424513;
    msg.psi = 0.331016360327;
    msg.psi_magnetic = 0.550160067915;

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
    msg.setTimeStamp(0.946773412866);
    msg.setSource(37709U);
    msg.setSourceEntity(196U);
    msg.setDestination(27350U);
    msg.setDestinationEntity(114U);
    msg.time = 0.482125021304;
    msg.phi = 0.482944094762;
    msg.theta = 0.145513660066;
    msg.psi = 0.652923081577;
    msg.psi_magnetic = 0.947369329734;

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
    msg.setTimeStamp(0.408613022515);
    msg.setSource(19777U);
    msg.setSourceEntity(172U);
    msg.setDestination(1250U);
    msg.setDestinationEntity(61U);
    msg.time = 0.838649487195;
    msg.phi = 0.665045416939;
    msg.theta = 0.670884114562;
    msg.psi = 0.612331543143;
    msg.psi_magnetic = 0.117710423951;

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
    msg.setTimeStamp(0.0457010591092);
    msg.setSource(58375U);
    msg.setSourceEntity(62U);
    msg.setDestination(34361U);
    msg.setDestinationEntity(178U);
    msg.time = 0.100557012591;
    msg.x = 0.478112098693;
    msg.y = 0.689639012618;
    msg.z = 0.988584226644;
    msg.timestep = 0.770032760612;

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
    msg.setTimeStamp(0.257270180912);
    msg.setSource(33181U);
    msg.setSourceEntity(198U);
    msg.setDestination(1757U);
    msg.setDestinationEntity(167U);
    msg.time = 0.816201568346;
    msg.x = 0.373040929284;
    msg.y = 0.271008418913;
    msg.z = 0.280365359846;
    msg.timestep = 0.231537235696;

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
    msg.setTimeStamp(0.258648245263);
    msg.setSource(62412U);
    msg.setSourceEntity(207U);
    msg.setDestination(39042U);
    msg.setDestinationEntity(47U);
    msg.time = 0.457864563592;
    msg.x = 0.949180360093;
    msg.y = 0.59879974973;
    msg.z = 0.0250706087392;
    msg.timestep = 0.642896081251;

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
    msg.setTimeStamp(0.0511356448274);
    msg.setSource(32389U);
    msg.setSourceEntity(245U);
    msg.setDestination(14175U);
    msg.setDestinationEntity(252U);
    msg.time = 0.600252551241;
    msg.x = 0.446328676888;
    msg.y = 0.566496631531;
    msg.z = 0.210124017374;

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
    msg.setTimeStamp(0.358581153514);
    msg.setSource(36995U);
    msg.setSourceEntity(169U);
    msg.setDestination(33675U);
    msg.setDestinationEntity(28U);
    msg.time = 0.347870641831;
    msg.x = 0.220431420724;
    msg.y = 0.67908453853;
    msg.z = 0.907131099945;

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
    msg.setTimeStamp(0.17944752502);
    msg.setSource(19848U);
    msg.setSourceEntity(58U);
    msg.setDestination(29332U);
    msg.setDestinationEntity(61U);
    msg.time = 0.538288363902;
    msg.x = 0.149550293806;
    msg.y = 0.985469064949;
    msg.z = 0.926974775487;

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
    msg.setTimeStamp(0.266119725091);
    msg.setSource(59103U);
    msg.setSourceEntity(25U);
    msg.setDestination(23213U);
    msg.setDestinationEntity(104U);
    msg.time = 0.632801692877;
    msg.x = 0.911635334824;
    msg.y = 0.701185955927;
    msg.z = 0.87003179265;

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
    msg.setTimeStamp(0.00947224606262);
    msg.setSource(65389U);
    msg.setSourceEntity(165U);
    msg.setDestination(60845U);
    msg.setDestinationEntity(21U);
    msg.time = 0.998946779482;
    msg.x = 0.636036263792;
    msg.y = 0.0547297033616;
    msg.z = 0.0369731426613;

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
    msg.setTimeStamp(0.0770295730624);
    msg.setSource(20014U);
    msg.setSourceEntity(92U);
    msg.setDestination(25941U);
    msg.setDestinationEntity(242U);
    msg.time = 0.0282259891152;
    msg.x = 0.316999026836;
    msg.y = 0.129034696323;
    msg.z = 0.936970300292;

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
    msg.setTimeStamp(0.869019898422);
    msg.setSource(10681U);
    msg.setSourceEntity(34U);
    msg.setDestination(9401U);
    msg.setDestinationEntity(13U);
    msg.time = 0.437943495309;
    msg.x = 0.640902071128;
    msg.y = 0.825750526895;
    msg.z = 0.278686971491;

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
    msg.setTimeStamp(0.29819140911);
    msg.setSource(49676U);
    msg.setSourceEntity(43U);
    msg.setDestination(32886U);
    msg.setDestinationEntity(136U);
    msg.time = 0.293005074914;
    msg.x = 0.171205603716;
    msg.y = 0.436071278316;
    msg.z = 0.155118548569;

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
    msg.setTimeStamp(0.206878474599);
    msg.setSource(5381U);
    msg.setSourceEntity(37U);
    msg.setDestination(46203U);
    msg.setDestinationEntity(86U);
    msg.time = 0.871861771748;
    msg.x = 0.639640743424;
    msg.y = 0.288865156971;
    msg.z = 0.849800963991;

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
    msg.setTimeStamp(0.185711007203);
    msg.setSource(25603U);
    msg.setSourceEntity(62U);
    msg.setDestination(39582U);
    msg.setDestinationEntity(147U);
    msg.validity = 96U;
    msg.x = 0.805723474724;
    msg.y = 0.688564096205;
    msg.z = 0.706624410488;

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
    msg.setTimeStamp(0.597300438612);
    msg.setSource(19369U);
    msg.setSourceEntity(199U);
    msg.setDestination(57345U);
    msg.setDestinationEntity(230U);
    msg.validity = 29U;
    msg.x = 0.175627321258;
    msg.y = 0.221474640436;
    msg.z = 0.889709095068;

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
    msg.setTimeStamp(0.428134221283);
    msg.setSource(51286U);
    msg.setSourceEntity(58U);
    msg.setDestination(13802U);
    msg.setDestinationEntity(221U);
    msg.validity = 181U;
    msg.x = 0.473009136923;
    msg.y = 0.405976010548;
    msg.z = 0.803034305841;

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
    msg.setTimeStamp(0.309354978945);
    msg.setSource(53191U);
    msg.setSourceEntity(225U);
    msg.setDestination(44570U);
    msg.setDestinationEntity(177U);
    msg.validity = 17U;
    msg.x = 0.0170820046485;
    msg.y = 0.116921140183;
    msg.z = 0.0171959072313;

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
    msg.setTimeStamp(0.943891398932);
    msg.setSource(25801U);
    msg.setSourceEntity(186U);
    msg.setDestination(3551U);
    msg.setDestinationEntity(188U);
    msg.validity = 199U;
    msg.x = 0.0862179670041;
    msg.y = 0.637476627265;
    msg.z = 0.144112156077;

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
    msg.setTimeStamp(0.777727580071);
    msg.setSource(21049U);
    msg.setSourceEntity(120U);
    msg.setDestination(8758U);
    msg.setDestinationEntity(40U);
    msg.validity = 252U;
    msg.x = 0.824701829898;
    msg.y = 0.0292005352625;
    msg.z = 0.887311998991;

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
    msg.setTimeStamp(0.112367052689);
    msg.setSource(65112U);
    msg.setSourceEntity(203U);
    msg.setDestination(51923U);
    msg.setDestinationEntity(63U);
    msg.time = 0.527872001706;
    msg.x = 0.582490403462;
    msg.y = 0.0518075610936;
    msg.z = 0.275040536621;

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
    msg.setTimeStamp(0.563570681355);
    msg.setSource(5366U);
    msg.setSourceEntity(208U);
    msg.setDestination(3024U);
    msg.setDestinationEntity(131U);
    msg.time = 0.607402582488;
    msg.x = 0.692322006905;
    msg.y = 0.199707120972;
    msg.z = 0.937921652663;

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
    msg.setTimeStamp(0.434144368711);
    msg.setSource(13130U);
    msg.setSourceEntity(39U);
    msg.setDestination(17675U);
    msg.setDestinationEntity(176U);
    msg.time = 0.138989816787;
    msg.x = 0.980311898644;
    msg.y = 0.515262611697;
    msg.z = 0.322858783762;

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
    msg.setTimeStamp(0.970005491011);
    msg.setSource(61798U);
    msg.setSourceEntity(40U);
    msg.setDestination(9000U);
    msg.setDestinationEntity(187U);
    msg.validity = 206U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.263824799833;
    tmp_msg_0.beam_height = 0.22583300558;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.297035202128;

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
    msg.setTimeStamp(0.15382753488);
    msg.setSource(25195U);
    msg.setSourceEntity(56U);
    msg.setDestination(60835U);
    msg.setDestinationEntity(134U);
    msg.validity = 141U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.129847013955;
    tmp_msg_0.y = 0.717475943718;
    tmp_msg_0.z = 0.946597092189;
    tmp_msg_0.phi = 0.398862242201;
    tmp_msg_0.theta = 0.199913386377;
    tmp_msg_0.psi = 0.94204796222;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.509103499974;

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
    msg.setTimeStamp(0.21966737752);
    msg.setSource(64246U);
    msg.setSourceEntity(129U);
    msg.setDestination(15126U);
    msg.setDestinationEntity(132U);
    msg.validity = 17U;
    msg.value = 0.67418002159;

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
    msg.setTimeStamp(0.311225379185);
    msg.setSource(61484U);
    msg.setSourceEntity(38U);
    msg.setDestination(10812U);
    msg.setDestinationEntity(1U);
    msg.value = 0.465321937605;

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
    msg.setTimeStamp(0.946641187948);
    msg.setSource(46663U);
    msg.setSourceEntity(66U);
    msg.setDestination(17165U);
    msg.setDestinationEntity(161U);
    msg.value = 0.924819304242;

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
    msg.setTimeStamp(0.0996738419211);
    msg.setSource(63926U);
    msg.setSourceEntity(31U);
    msg.setDestination(26511U);
    msg.setDestinationEntity(70U);
    msg.value = 0.0707645315201;

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
    msg.setTimeStamp(0.409933069506);
    msg.setSource(50657U);
    msg.setSourceEntity(143U);
    msg.setDestination(25253U);
    msg.setDestinationEntity(171U);
    msg.value = 0.705442250059;

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
    msg.setTimeStamp(0.137194323252);
    msg.setSource(62982U);
    msg.setSourceEntity(63U);
    msg.setDestination(46931U);
    msg.setDestinationEntity(45U);
    msg.value = 0.418902737466;

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
    msg.setTimeStamp(0.0927078058743);
    msg.setSource(39993U);
    msg.setSourceEntity(182U);
    msg.setDestination(47149U);
    msg.setDestinationEntity(95U);
    msg.value = 0.357238112544;

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
    msg.setTimeStamp(0.647149308745);
    msg.setSource(49067U);
    msg.setSourceEntity(38U);
    msg.setDestination(3758U);
    msg.setDestinationEntity(57U);
    msg.value = 0.735469467259;

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
    msg.setTimeStamp(0.283243147609);
    msg.setSource(44257U);
    msg.setSourceEntity(228U);
    msg.setDestination(24932U);
    msg.setDestinationEntity(140U);
    msg.value = 0.840208530592;

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
    msg.setTimeStamp(0.530273478581);
    msg.setSource(8276U);
    msg.setSourceEntity(212U);
    msg.setDestination(30196U);
    msg.setDestinationEntity(65U);
    msg.value = 0.0333214939906;

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
    msg.setTimeStamp(0.685766240267);
    msg.setSource(47762U);
    msg.setSourceEntity(240U);
    msg.setDestination(39560U);
    msg.setDestinationEntity(16U);
    msg.value = 0.960182971741;

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
    msg.setTimeStamp(0.123166478464);
    msg.setSource(4483U);
    msg.setSourceEntity(217U);
    msg.setDestination(26803U);
    msg.setDestinationEntity(48U);
    msg.value = 0.841722885374;

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
    msg.setTimeStamp(0.0481310978864);
    msg.setSource(3163U);
    msg.setSourceEntity(121U);
    msg.setDestination(44641U);
    msg.setDestinationEntity(28U);
    msg.value = 0.963076967564;

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
    msg.setTimeStamp(0.491109822732);
    msg.setSource(48876U);
    msg.setSourceEntity(164U);
    msg.setDestination(39787U);
    msg.setDestinationEntity(205U);
    msg.value = 0.391879008044;

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
    msg.setTimeStamp(0.0478708109497);
    msg.setSource(9036U);
    msg.setSourceEntity(54U);
    msg.setDestination(59635U);
    msg.setDestinationEntity(127U);
    msg.value = 0.649716240711;

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
    msg.setTimeStamp(0.0431695309741);
    msg.setSource(47558U);
    msg.setSourceEntity(160U);
    msg.setDestination(59485U);
    msg.setDestinationEntity(174U);
    msg.value = 0.669091108576;

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
    msg.setTimeStamp(0.73860574259);
    msg.setSource(54828U);
    msg.setSourceEntity(53U);
    msg.setDestination(60999U);
    msg.setDestinationEntity(23U);
    msg.value = 0.847742221206;

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
    msg.setTimeStamp(0.822705142038);
    msg.setSource(17859U);
    msg.setSourceEntity(141U);
    msg.setDestination(33321U);
    msg.setDestinationEntity(249U);
    msg.value = 0.303998223519;

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
    msg.setTimeStamp(0.206188279315);
    msg.setSource(63651U);
    msg.setSourceEntity(130U);
    msg.setDestination(19761U);
    msg.setDestinationEntity(21U);
    msg.value = 0.967014484305;

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
    msg.setTimeStamp(0.131217752304);
    msg.setSource(52239U);
    msg.setSourceEntity(160U);
    msg.setDestination(11577U);
    msg.setDestinationEntity(125U);
    msg.value = 0.923102672135;

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
    msg.setTimeStamp(0.858014615865);
    msg.setSource(33561U);
    msg.setSourceEntity(107U);
    msg.setDestination(23423U);
    msg.setDestinationEntity(236U);
    msg.value = 0.543089112884;

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
    msg.setTimeStamp(0.503388783836);
    msg.setSource(39976U);
    msg.setSourceEntity(50U);
    msg.setDestination(46577U);
    msg.setDestinationEntity(210U);
    msg.value = 0.960890283542;

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
    msg.setTimeStamp(0.307992346527);
    msg.setSource(285U);
    msg.setSourceEntity(76U);
    msg.setDestination(23154U);
    msg.setDestinationEntity(48U);
    msg.value = 0.405734198168;

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
    msg.setTimeStamp(0.208057968418);
    msg.setSource(52740U);
    msg.setSourceEntity(109U);
    msg.setDestination(2371U);
    msg.setDestinationEntity(93U);
    msg.value = 0.832239544241;

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
    msg.setTimeStamp(0.43846386663);
    msg.setSource(17328U);
    msg.setSourceEntity(12U);
    msg.setDestination(47841U);
    msg.setDestinationEntity(43U);
    msg.value = 0.745371492723;

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
    msg.setTimeStamp(0.815878364094);
    msg.setSource(2900U);
    msg.setSourceEntity(151U);
    msg.setDestination(50285U);
    msg.setDestinationEntity(35U);
    msg.direction = 0.195083450376;
    msg.speed = 0.276099498921;
    msg.turbulence = 0.902891991625;

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
    msg.setTimeStamp(0.676010754146);
    msg.setSource(1081U);
    msg.setSourceEntity(113U);
    msg.setDestination(15298U);
    msg.setDestinationEntity(180U);
    msg.direction = 0.18142373676;
    msg.speed = 0.596052814338;
    msg.turbulence = 0.221455407477;

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
    msg.setTimeStamp(0.591368374743);
    msg.setSource(21444U);
    msg.setSourceEntity(158U);
    msg.setDestination(32217U);
    msg.setDestinationEntity(64U);
    msg.direction = 0.200133170031;
    msg.speed = 0.916968258911;
    msg.turbulence = 0.114603964621;

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
    msg.setTimeStamp(0.80361056736);
    msg.setSource(18137U);
    msg.setSourceEntity(1U);
    msg.setDestination(32019U);
    msg.setDestinationEntity(158U);
    msg.value = 0.923088822978;

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
    msg.setTimeStamp(0.716287088142);
    msg.setSource(29232U);
    msg.setSourceEntity(94U);
    msg.setDestination(48024U);
    msg.setDestinationEntity(56U);
    msg.value = 0.63631166135;

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
    msg.setTimeStamp(0.678331823951);
    msg.setSource(13505U);
    msg.setSourceEntity(26U);
    msg.setDestination(8842U);
    msg.setDestinationEntity(172U);
    msg.value = 0.452542612439;

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
    msg.setTimeStamp(0.000311216380118);
    msg.setSource(11525U);
    msg.setSourceEntity(29U);
    msg.setDestination(40634U);
    msg.setDestinationEntity(137U);
    msg.value.assign("FKWFZGSBEKSOMOFBMGJPHWUTXWGGGRFYRVZMLGYWAXTVHPCIUDEAQXVKHGQHJIZMNIPHDETCJNMYCPPRBSCAQOPVFOZLXJHMIUMLYWOPKZTZGIEXSDADVIEXDRNZCQVSBSUBOLQHRJGFZEWCAIYKMYZSLVZEJWKQPRFISBIVQLBFQNAXDOXOWTNLRPRFQNLVYULOWUTJKVTTEUJMTYRAUDBLCNNHWDSCDHFIJPKKUUEXSACABJN");

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
    msg.setTimeStamp(0.534709218547);
    msg.setSource(62877U);
    msg.setSourceEntity(127U);
    msg.setDestination(3367U);
    msg.setDestinationEntity(123U);
    msg.value.assign("FQXPFHWAYNYKRFJBCUZVFBIKRIBQEBXCLYIVCVJTIOIMLQBUQFPMCTGKAOHTGWSOOGPAWJFLUQAEVLLWAADKZMOENCPGYDAYQTUGPHMUNPBQKGGCEASDZZXOCDEKBLYNNMBVHDOXDMG");

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
    msg.setTimeStamp(0.329100906673);
    msg.setSource(65145U);
    msg.setSourceEntity(131U);
    msg.setDestination(20451U);
    msg.setDestinationEntity(49U);
    msg.value.assign("EEYUNUFLMFMAWUUJRYZFLVRIAVZMYJTCDMFLQLLHIQXKNZEDSKZEQJHITPYVCQGVHXBTEWGOBFLJVEGXZWDPYMBCQPQGDKYVICAJCYRBKWTIZPNISNARSHXKZCUOJJSABSBWVRWFZFUGRQSFXULYSJMBXHPAOIV");

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
    msg.setTimeStamp(0.236692305348);
    msg.setSource(47857U);
    msg.setSourceEntity(164U);
    msg.setDestination(21885U);
    msg.setDestinationEntity(210U);
    const char tmp_msg_0[] = {100, -29, 48, -18, 63, -1, 36, 45, -50, 126, -85, -118, 57, 44, 77, -113, -28, -81, 62, -94, 20, -119, -81, -107, 68, -104, -22, -27, 54, 83, 11, -121, -95, -22, -94, -32, 43, -17, 125, 58, 40, -36, 72, 79, -114, -79, 25, -69, 73, 52, -27, -121, -92, 93, 118, 106, 5, 111, 51, 119, 114, 21, 85, -114, 101, -114, 24, 47, 34, 89, -58, -47, 112, -11, -47, -108, 117, -4, -103, 86, 29, -88, -36, 68, -19, -84, -80, 108, 125, -126, 77, -113, -123, 27, 37, 79, -121, 89, -117, -66, -127, -64, 52, -65, -73, 23, -1, -22, -59, 85, -117, -43, -31, -38, 13, -120, 10, -16, -20, 102, 69, 85, -87, -43, 47, -101, 23, -120, 54, 44, 27, 111, -5, 30, 6, 117, -105, 18, -9, 41, -110, 50, 100, 16, -38, -44, -13, -54, 100, -83, -75, -72, -51, 19, 64, 83, -76, 27, -69, 34, 67, -52, 10, -123, -46, -81, -35, 59, 92, 94, 114, -92, -96, 51, -14, 6, 17, -65, -66, -23, 119, -4, -36, -44, -102, 102, 79, 54, 34, -88, 119, 7, 26, -44, -118, 11, 36, 73, -40, 102, -88, -50, 110, -45, 36, 100, 0, -128, -34, 57, -5, 72, 121, 43, 7, -28, -18, -114, -60, -124, -10, -38, -61, -90, -118, -124, 98, 114, 71, 105, -36, 92, -9, 97, -63, 45, -7, 83, -15, 54, 12, -105, 29, -68, -35, -109, 48};
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
    msg.setTimeStamp(0.520449206517);
    msg.setSource(38016U);
    msg.setSourceEntity(43U);
    msg.setDestination(48800U);
    msg.setDestinationEntity(104U);
    const char tmp_msg_0[] = {-96, 103, -33, 17, -81, 26, -118, 44, 33, -49, -126, 123, -31, 59, -52, -29, 91, 30, 13, -37, -13, -64, 6, -84, -53, -50, -89, -48, 29, 103, 98, -21, 46, -56, -11, 44, 57, 104, -93, 19, 75, 82, 121, 4, 94, -75, 73, 31, 114, -97, -99, 117, 32, -65, 39, -77, 63, -69, -72, -113, -114, 56, 49, -34, 30, -87, -61, -56, 1, 83, -6, 84, 48, -95, 56, -27, 29, -67, -14, 9, -42, 28, -79, 31, -58, 122, 67, 101, 74, -56, 47, -84, -64, -109, 81, -66, 1, 52, 114, 46, 111, 53, -82, 5, 34, -19, 27, -24, -29, 95, 32, -7, -113, 73, 1, -75, 63, -93, 102, -4, 66, -69, 52, 20, -58, -76, -112, 0, 82, 113, -31, 31, -101, 12, 5, 60, -102, 72, -46, -50, 39};
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
    msg.setTimeStamp(0.0998662956135);
    msg.setSource(38638U);
    msg.setSourceEntity(201U);
    msg.setDestination(57427U);
    msg.setDestinationEntity(189U);
    const char tmp_msg_0[] = {75, -42, -100, 13, -84, 18, -53, -17, -17, 3, 89, -35, 7, -29, -67, 77, -34, 7, 109, -109, 10, 16, 95, -116, 92, 19, 55, 105, 52, -60, -95, 91, 101, -30, 39, 61, 70, 126, 101, 4, -48, 15, -102, -47, -42, -77, 67, -7, 70, 98, 122, -40, 26, -40, -16, 112, 67, 74, -56, 122, -15, 38, -10, 30, 89, -4, 96, 82, 1, -6, 92, -4, 36, -88, -17, -90, -34, 62, -14, 116, 101, 0, 55, -46, 76, 47, 54, 30, -110, -100, -23, 40, 123, 64, 54, -97, 103, 61, -110, 53, -100, -123, -58, -128, 35};
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
    msg.setTimeStamp(0.780407641003);
    msg.setSource(49432U);
    msg.setSourceEntity(112U);
    msg.setDestination(39343U);
    msg.setDestinationEntity(132U);
    msg.value = 0.492242821097;

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
    msg.setTimeStamp(0.234146687201);
    msg.setSource(49431U);
    msg.setSourceEntity(116U);
    msg.setDestination(57323U);
    msg.setDestinationEntity(20U);
    msg.value = 0.0223904517757;

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
    msg.setTimeStamp(0.78009289226);
    msg.setSource(7508U);
    msg.setSourceEntity(62U);
    msg.setDestination(20747U);
    msg.setDestinationEntity(197U);
    msg.value = 0.401812790452;

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
    msg.setTimeStamp(0.620502607978);
    msg.setSource(33303U);
    msg.setSourceEntity(32U);
    msg.setDestination(3797U);
    msg.setDestinationEntity(135U);
    msg.type = 11U;
    msg.frequency = 4259700204U;
    msg.min_range = 44394U;
    msg.max_range = 14463U;
    msg.bits_per_point = 155U;
    msg.scale_factor = 0.067447727664;
    const char tmp_msg_0[] = {20, 49, -15, 18, -84, -96, 103, 76, -116, -20, 103, 107, 103, -106, 19, 104, 102, -80, 112, -58, -26, 80, -80, 24, -12, -64, 125, -33, 112, 113, 34, -88, -69, 21, -44, -127, 45, 46, 44, -1, -94, -70, 109, 33, 50, 123, -53, 44, 61, 81, -116, -113, 60, -64, 76, 52, 100, -17, 12, -127, 39, 32, 22, -127, -56, -111, 112, -96, -107, -44, 53, 90, 90, 75, -63, -11, -62, -6, 90, -102, 4, -77, -19, 46, -35, 38, 25, 76, 92, -39, 40, -21, 83, -61, 49, 70, -74, 119, -116, 57, 83, -121, 102, -128, 32, 56, -82, -105, -8, -110, 90, 43, -33, 62, 111, -79, -33, 16, -92, -104, 8, -43, 98, 24, -22, 63, 40, 70, -30, 104, -116, -67, 100, 87, -36, 52, 5, -8, 126, -21, 5, -99, 53, 24, -73, 87, 41, -71, -42, -35, 126, -70, -118, -17, 40, -108, -127, -12, -26, 116, -35, -18, 90, 122, 65, -75, 76, -66, -16, 83, 71, 83, 42, 93, -87, -43, -48, 70, 74, 36, -117, 53, 11, -115, 67, -122, 69, -29, 27, 85, -58, -10, 47, -39, -67, -86, -57, 117};
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
    msg.setTimeStamp(0.105381951146);
    msg.setSource(6787U);
    msg.setSourceEntity(163U);
    msg.setDestination(61133U);
    msg.setDestinationEntity(112U);
    msg.type = 130U;
    msg.frequency = 4133442244U;
    msg.min_range = 23578U;
    msg.max_range = 1682U;
    msg.bits_per_point = 79U;
    msg.scale_factor = 0.103036912662;
    const char tmp_msg_0[] = {37, -10, -93, 57, -121, -85, 87, 25, -43, -66, -92, -46, 85, -46, -67, 63, -4, -12, -90, 12, 115, 34, -10, 98, -118, -110, 84, -6, 30, -122, -56, 63, 94, -56, 121, 103, 28, -19, -28, 120, 119, 94, 60, -52, -122, -58, -21, 28, -38, 41, -66, 51, -125, 82, -36, -127, 47, -12, -74, -127, -12, -69, -48, -66, 66, -56, 19, 78, 108, -90, 86, -46, 82, 103, 101, 18, -59, -12, 125, 89, -121, 32, 20, -8, 51, 24, 50, -75, 52, -70, 123, 76, -51, -37, 115, -2, 58, 84, 125, -3, -57, 11, 121, 109, -21, -51, -5, -38, -97, 8, -98, -78, -13, -26, 61, -99, 115, -81, -104, -52, -81, -126, -83, 18, -53, -113, 66, -17, -90, 57, -80, 122, -68, -33, -67, 93, 26, 62, -110, -39, -88, 37, 110, 106, -22, -106, 36, -73, -46, -31, -85, 22, -12, -72, -109, -45, 34, -28, -43, 47, 100, -77, -26, 114, -11, -106, 30, -19, 73, 16, 116, -2, -37, -10, -120, -125, 33, -33, 124, -2};
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
    msg.setTimeStamp(0.736732815841);
    msg.setSource(11112U);
    msg.setSourceEntity(252U);
    msg.setDestination(14692U);
    msg.setDestinationEntity(82U);
    msg.type = 91U;
    msg.frequency = 1850806390U;
    msg.min_range = 29752U;
    msg.max_range = 17512U;
    msg.bits_per_point = 19U;
    msg.scale_factor = 0.0501169989992;
    const char tmp_msg_0[] = {-61, 44, -8, -32, 3, 87, 64, -17, -29, 49, -88, 1, 110, 10, 12, 62, 103, -109, -106, 61, -72, 20, 44, -104, -91, -10, 28, -53, 61, 114, -75, -96, -14, 82, -64, 124, 64, 7, 1, -30, -35, 112, -114, 25, 45, 74, -18, -48, 99, 101, -59, 75, -125, 121, -29, 114, -98, -95, -2};
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
    msg.setTimeStamp(0.330769613551);
    msg.setSource(64611U);
    msg.setSourceEntity(181U);
    msg.setDestination(6784U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.626124092637);
    msg.setSource(60066U);
    msg.setSourceEntity(59U);
    msg.setDestination(56300U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.99932438444);
    msg.setSource(56090U);
    msg.setSourceEntity(74U);
    msg.setDestination(54645U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.0511040280897);
    msg.setSource(9261U);
    msg.setSourceEntity(86U);
    msg.setDestination(54035U);
    msg.setDestinationEntity(202U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.239853479068);
    msg.setSource(3922U);
    msg.setSourceEntity(41U);
    msg.setDestination(56714U);
    msg.setDestinationEntity(125U);
    msg.op = 198U;

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
    msg.setTimeStamp(0.984964310268);
    msg.setSource(2050U);
    msg.setSourceEntity(101U);
    msg.setDestination(30778U);
    msg.setDestinationEntity(114U);
    msg.op = 25U;

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
    msg.setTimeStamp(0.554742942201);
    msg.setSource(24776U);
    msg.setSourceEntity(28U);
    msg.setDestination(42836U);
    msg.setDestinationEntity(167U);
    msg.value = 0.829276770554;
    msg.confidence = 0.324210339236;
    msg.opmodes.assign("HZAYKKFTANXVRODUFOXRFEXSMCRYOIKQIOWDTGGUAQZUOWTMWDAPKSWVDLHWMBXHLCYMBBFFZXBTQZRJZANYULJGOYWQMRGDGEEBCTTPGHSLFOXOSPGRIQGNCLQBZZCSVTHSTRTKIBIAQILWWCVYAVXCKPSDIKMSUJKEFVDNDZDCUNPXASLNLYL");

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
    msg.setTimeStamp(0.400575760658);
    msg.setSource(32143U);
    msg.setSourceEntity(88U);
    msg.setDestination(29843U);
    msg.setDestinationEntity(75U);
    msg.value = 0.256510831068;
    msg.confidence = 0.907976650831;
    msg.opmodes.assign("HLJNQECZTPSNNSLWXRWZTOAVHPLCUMSXHNVTWCZPBOSNGSDJKHTOBQVHXIRJCZFXLFFJDYMDWAWOHPILRDULJCATEAEPAJUBNOXJZIKO");

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
    msg.setTimeStamp(0.761692442697);
    msg.setSource(56188U);
    msg.setSourceEntity(240U);
    msg.setDestination(29390U);
    msg.setDestinationEntity(115U);
    msg.value = 0.521064828399;
    msg.confidence = 0.997497237629;
    msg.opmodes.assign("DOTPMVTQDRVODCCMABMWSFZLKZWXAGIUVEHFTMERBYDEYKUE");

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
    msg.setTimeStamp(0.490041669836);
    msg.setSource(16247U);
    msg.setSourceEntity(240U);
    msg.setDestination(2396U);
    msg.setDestinationEntity(197U);
    msg.itow = 378116792U;
    msg.lat = 0.483091304725;
    msg.lon = 0.226702286953;
    msg.height_ell = 0.411069162218;
    msg.height_sea = 0.32481843806;
    msg.hacc = 0.822402078034;
    msg.vacc = 0.109709442942;
    msg.vel_n = 0.36768805807;
    msg.vel_e = 0.227697681613;
    msg.vel_d = 0.739692433124;
    msg.speed = 0.375883358366;
    msg.gspeed = 0.0450300623216;
    msg.heading = 0.905467560824;
    msg.sacc = 0.0095918116582;
    msg.cacc = 0.495825735449;

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
    msg.setTimeStamp(0.999662139393);
    msg.setSource(38963U);
    msg.setSourceEntity(153U);
    msg.setDestination(64858U);
    msg.setDestinationEntity(237U);
    msg.itow = 1371032954U;
    msg.lat = 0.958851155478;
    msg.lon = 0.642119133778;
    msg.height_ell = 0.531218648432;
    msg.height_sea = 0.0562317725509;
    msg.hacc = 0.659835323757;
    msg.vacc = 0.5100311947;
    msg.vel_n = 0.155806993427;
    msg.vel_e = 0.25944530868;
    msg.vel_d = 0.991185422607;
    msg.speed = 0.192650116089;
    msg.gspeed = 0.606779113543;
    msg.heading = 0.940960168193;
    msg.sacc = 0.0315119813002;
    msg.cacc = 0.0806059531772;

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
    msg.setTimeStamp(0.38358953874);
    msg.setSource(29816U);
    msg.setSourceEntity(104U);
    msg.setDestination(57243U);
    msg.setDestinationEntity(22U);
    msg.itow = 352503707U;
    msg.lat = 0.645730127242;
    msg.lon = 0.584177417757;
    msg.height_ell = 0.123679117243;
    msg.height_sea = 0.844402397694;
    msg.hacc = 0.966510430569;
    msg.vacc = 0.620656070909;
    msg.vel_n = 0.125064686395;
    msg.vel_e = 0.199686265729;
    msg.vel_d = 0.0914248691583;
    msg.speed = 0.85593745836;
    msg.gspeed = 0.623922504573;
    msg.heading = 0.705148406664;
    msg.sacc = 0.191640487177;
    msg.cacc = 0.775463228252;

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
    msg.setTimeStamp(0.2772779704);
    msg.setSource(64540U);
    msg.setSourceEntity(165U);
    msg.setDestination(63337U);
    msg.setDestinationEntity(64U);
    msg.id = 116U;
    msg.value = 0.452727021076;

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
    msg.setTimeStamp(0.943351352617);
    msg.setSource(4494U);
    msg.setSourceEntity(80U);
    msg.setDestination(13961U);
    msg.setDestinationEntity(4U);
    msg.id = 230U;
    msg.value = 0.194268427116;

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
    msg.setTimeStamp(0.0729049913299);
    msg.setSource(25518U);
    msg.setSourceEntity(8U);
    msg.setDestination(26504U);
    msg.setDestinationEntity(68U);
    msg.id = 228U;
    msg.value = 0.426235596305;

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
    msg.setTimeStamp(0.846278213513);
    msg.setSource(7300U);
    msg.setSourceEntity(9U);
    msg.setDestination(48849U);
    msg.setDestinationEntity(215U);
    msg.x = 0.928176428739;
    msg.y = 0.429377303372;
    msg.z = 0.5829597399;
    msg.phi = 0.516289239245;
    msg.theta = 0.494063252742;
    msg.psi = 0.801173895125;

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
    msg.setTimeStamp(0.231794178002);
    msg.setSource(4963U);
    msg.setSourceEntity(248U);
    msg.setDestination(41454U);
    msg.setDestinationEntity(233U);
    msg.x = 0.977303450191;
    msg.y = 0.72230973809;
    msg.z = 0.331381270993;
    msg.phi = 0.308171321815;
    msg.theta = 0.359098475206;
    msg.psi = 0.34369887574;

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
    msg.setTimeStamp(0.98839263274);
    msg.setSource(61598U);
    msg.setSourceEntity(133U);
    msg.setDestination(52083U);
    msg.setDestinationEntity(200U);
    msg.x = 0.435537679561;
    msg.y = 0.319695425143;
    msg.z = 0.647882485558;
    msg.phi = 0.753137200585;
    msg.theta = 0.623047354464;
    msg.psi = 0.397065713067;

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
    msg.setTimeStamp(0.625874631029);
    msg.setSource(44262U);
    msg.setSourceEntity(81U);
    msg.setDestination(13077U);
    msg.setDestinationEntity(162U);
    msg.beam_width = 0.186356005246;
    msg.beam_height = 0.849257387283;

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
    msg.setTimeStamp(0.0519276722785);
    msg.setSource(27045U);
    msg.setSourceEntity(119U);
    msg.setDestination(16142U);
    msg.setDestinationEntity(16U);
    msg.beam_width = 0.790839878939;
    msg.beam_height = 0.700624079214;

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
    msg.setTimeStamp(0.275555101567);
    msg.setSource(61065U);
    msg.setSourceEntity(147U);
    msg.setDestination(32669U);
    msg.setDestinationEntity(118U);
    msg.beam_width = 0.432778520663;
    msg.beam_height = 0.142208344269;

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
    msg.setTimeStamp(0.336886715947);
    msg.setSource(35883U);
    msg.setSourceEntity(96U);
    msg.setDestination(16042U);
    msg.setDestinationEntity(144U);
    msg.sane = 65U;

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
    msg.setTimeStamp(0.616699835406);
    msg.setSource(16854U);
    msg.setSourceEntity(172U);
    msg.setDestination(59965U);
    msg.setDestinationEntity(47U);
    msg.sane = 116U;

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
    msg.setTimeStamp(0.0755721317879);
    msg.setSource(64205U);
    msg.setSourceEntity(197U);
    msg.setDestination(50961U);
    msg.setDestinationEntity(209U);
    msg.sane = 234U;

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
    msg.setTimeStamp(0.764240695607);
    msg.setSource(25468U);
    msg.setSourceEntity(243U);
    msg.setDestination(26533U);
    msg.setDestinationEntity(100U);
    msg.value = 0.378427868566;

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
    msg.setTimeStamp(0.959936119623);
    msg.setSource(49231U);
    msg.setSourceEntity(56U);
    msg.setDestination(14855U);
    msg.setDestinationEntity(176U);
    msg.value = 0.912646948176;

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
    msg.setTimeStamp(0.856706708211);
    msg.setSource(19912U);
    msg.setSourceEntity(202U);
    msg.setDestination(15864U);
    msg.setDestinationEntity(122U);
    msg.value = 0.343104603827;

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
    msg.setTimeStamp(0.699909153463);
    msg.setSource(31225U);
    msg.setSourceEntity(130U);
    msg.setDestination(61488U);
    msg.setDestinationEntity(154U);
    msg.value = 0.552510050512;

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
    msg.setTimeStamp(0.270512668412);
    msg.setSource(24859U);
    msg.setSourceEntity(24U);
    msg.setDestination(13916U);
    msg.setDestinationEntity(103U);
    msg.value = 0.0133711330751;

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
    msg.setTimeStamp(0.668685529849);
    msg.setSource(16177U);
    msg.setSourceEntity(77U);
    msg.setDestination(40405U);
    msg.setDestinationEntity(80U);
    msg.value = 0.295848508326;

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
    msg.setTimeStamp(0.815127307386);
    msg.setSource(50584U);
    msg.setSourceEntity(56U);
    msg.setDestination(26905U);
    msg.setDestinationEntity(145U);
    msg.value = 0.729505495321;

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
    msg.setTimeStamp(0.741765340773);
    msg.setSource(18355U);
    msg.setSourceEntity(154U);
    msg.setDestination(62435U);
    msg.setDestinationEntity(52U);
    msg.value = 0.5869080503;

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
    msg.setTimeStamp(0.524604500148);
    msg.setSource(9880U);
    msg.setSourceEntity(65U);
    msg.setDestination(787U);
    msg.setDestinationEntity(195U);
    msg.value = 0.666839931338;

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
    msg.setTimeStamp(0.39996643518);
    msg.setSource(51740U);
    msg.setSourceEntity(244U);
    msg.setDestination(56174U);
    msg.setDestinationEntity(236U);
    msg.value = 0.9068619101;

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
    msg.setTimeStamp(0.913867794877);
    msg.setSource(31937U);
    msg.setSourceEntity(93U);
    msg.setDestination(56831U);
    msg.setDestinationEntity(169U);
    msg.value = 0.45919289173;

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
    msg.setTimeStamp(0.771638814016);
    msg.setSource(7495U);
    msg.setSourceEntity(174U);
    msg.setDestination(13090U);
    msg.setDestinationEntity(243U);
    msg.value = 0.0563272708071;

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
    msg.setTimeStamp(0.428781013832);
    msg.setSource(32644U);
    msg.setSourceEntity(99U);
    msg.setDestination(38274U);
    msg.setDestinationEntity(163U);
    msg.value = 0.860460583894;

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
    msg.setTimeStamp(0.222275996891);
    msg.setSource(57324U);
    msg.setSourceEntity(8U);
    msg.setDestination(46265U);
    msg.setDestinationEntity(32U);
    msg.value = 0.783428523788;

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
    msg.setTimeStamp(0.486336731744);
    msg.setSource(38556U);
    msg.setSourceEntity(117U);
    msg.setDestination(10641U);
    msg.setDestinationEntity(164U);
    msg.value = 0.20308489837;

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
    msg.setTimeStamp(0.816342960534);
    msg.setSource(64533U);
    msg.setSourceEntity(19U);
    msg.setDestination(24755U);
    msg.setDestinationEntity(18U);
    msg.value = 0.115183392567;

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
    msg.setTimeStamp(0.509088198366);
    msg.setSource(59278U);
    msg.setSourceEntity(222U);
    msg.setDestination(55998U);
    msg.setDestinationEntity(108U);
    msg.value = 0.0415718237215;

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
    msg.setTimeStamp(0.292541074331);
    msg.setSource(15101U);
    msg.setSourceEntity(94U);
    msg.setDestination(4088U);
    msg.setDestinationEntity(220U);
    msg.value = 0.572730971424;

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
    msg.setTimeStamp(0.737020911111);
    msg.setSource(8931U);
    msg.setSourceEntity(111U);
    msg.setDestination(56176U);
    msg.setDestinationEntity(137U);
    msg.value = 0.964529550194;

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
    msg.setTimeStamp(0.217774092092);
    msg.setSource(63931U);
    msg.setSourceEntity(66U);
    msg.setDestination(20712U);
    msg.setDestinationEntity(7U);
    msg.value = 0.453597498694;

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
    msg.setTimeStamp(0.604626021278);
    msg.setSource(34229U);
    msg.setSourceEntity(57U);
    msg.setDestination(57160U);
    msg.setDestinationEntity(45U);
    msg.value = 0.384208067897;

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
    msg.setTimeStamp(0.278477837441);
    msg.setSource(58008U);
    msg.setSourceEntity(29U);
    msg.setDestination(14669U);
    msg.setDestinationEntity(103U);
    msg.value = 0.297329806752;

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
    msg.setTimeStamp(0.719787733151);
    msg.setSource(40121U);
    msg.setSourceEntity(46U);
    msg.setDestination(13533U);
    msg.setDestinationEntity(221U);
    msg.value = 0.535278291121;

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
    msg.setTimeStamp(0.960072309407);
    msg.setSource(48803U);
    msg.setSourceEntity(78U);
    msg.setDestination(37434U);
    msg.setDestinationEntity(3U);
    msg.value = 0.323649407462;

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
    msg.setTimeStamp(0.589566487713);
    msg.setSource(20764U);
    msg.setSourceEntity(186U);
    msg.setDestination(34134U);
    msg.setDestinationEntity(199U);
    msg.validity = 9035U;
    msg.type = 84U;
    msg.tow = 1337172736U;
    msg.base_lat = 0.346679365236;
    msg.base_lon = 0.498502702399;
    msg.base_height = 0.0856871161937;
    msg.n = 0.615660017918;
    msg.e = 0.284671708281;
    msg.d = 0.923998388581;
    msg.v_n = 0.837741382331;
    msg.v_e = 0.534727308555;
    msg.v_d = 0.486518880382;
    msg.satellites = 166U;
    msg.iar_hyp = 34861U;
    msg.iar_ratio = 0.900956486786;

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
    msg.setTimeStamp(0.51883791896);
    msg.setSource(13539U);
    msg.setSourceEntity(29U);
    msg.setDestination(27309U);
    msg.setDestinationEntity(223U);
    msg.validity = 33058U;
    msg.type = 244U;
    msg.tow = 3671654173U;
    msg.base_lat = 0.630098909697;
    msg.base_lon = 0.117943544189;
    msg.base_height = 0.24720427024;
    msg.n = 0.757091266018;
    msg.e = 0.200802742565;
    msg.d = 0.123234722736;
    msg.v_n = 0.746413418582;
    msg.v_e = 0.867405324646;
    msg.v_d = 0.316603035509;
    msg.satellites = 10U;
    msg.iar_hyp = 15298U;
    msg.iar_ratio = 0.512131733343;

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
    msg.setTimeStamp(0.871722619592);
    msg.setSource(33234U);
    msg.setSourceEntity(80U);
    msg.setDestination(847U);
    msg.setDestinationEntity(149U);
    msg.validity = 54874U;
    msg.type = 112U;
    msg.tow = 3223132426U;
    msg.base_lat = 0.619522999349;
    msg.base_lon = 0.385590962216;
    msg.base_height = 0.206450429326;
    msg.n = 0.502419262557;
    msg.e = 0.346674104558;
    msg.d = 0.374652527352;
    msg.v_n = 0.213170202251;
    msg.v_e = 0.535537015676;
    msg.v_d = 0.168520864248;
    msg.satellites = 80U;
    msg.iar_hyp = 48514U;
    msg.iar_ratio = 0.378694102661;

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
    msg.setTimeStamp(0.722831207261);
    msg.setSource(43762U);
    msg.setSourceEntity(211U);
    msg.setDestination(13713U);
    msg.setDestinationEntity(119U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.676624789254;
    tmp_msg_0.lon = 0.941011483817;
    tmp_msg_0.height = 0.611350740413;
    tmp_msg_0.x = 0.335826989806;
    tmp_msg_0.y = 0.928697584253;
    tmp_msg_0.z = 0.267173965454;
    tmp_msg_0.phi = 0.482929727108;
    tmp_msg_0.theta = 0.0552181160183;
    tmp_msg_0.psi = 0.527779947526;
    tmp_msg_0.u = 0.942488147791;
    tmp_msg_0.v = 0.714883792429;
    tmp_msg_0.w = 0.307390298219;
    tmp_msg_0.vx = 0.202222165335;
    tmp_msg_0.vy = 0.911808592635;
    tmp_msg_0.vz = 0.781587803068;
    tmp_msg_0.p = 0.0789609483282;
    tmp_msg_0.q = 0.852332820508;
    tmp_msg_0.r = 0.226308895236;
    tmp_msg_0.depth = 0.504778383488;
    tmp_msg_0.alt = 0.316188344505;
    msg.state.set(tmp_msg_0);
    msg.type = 55U;

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
    msg.setTimeStamp(0.312786124272);
    msg.setSource(44710U);
    msg.setSourceEntity(225U);
    msg.setDestination(19424U);
    msg.setDestinationEntity(189U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.476635242733;
    tmp_msg_0.lon = 0.46923716913;
    tmp_msg_0.height = 0.937294223316;
    tmp_msg_0.x = 0.13858366162;
    tmp_msg_0.y = 0.0584969222451;
    tmp_msg_0.z = 0.149080643354;
    tmp_msg_0.phi = 0.94150152427;
    tmp_msg_0.theta = 0.110524747948;
    tmp_msg_0.psi = 0.0412254781165;
    tmp_msg_0.u = 0.617410957487;
    tmp_msg_0.v = 0.965698182692;
    tmp_msg_0.w = 0.512101251363;
    tmp_msg_0.vx = 0.316770227569;
    tmp_msg_0.vy = 0.616308636463;
    tmp_msg_0.vz = 0.977001613646;
    tmp_msg_0.p = 0.171646325062;
    tmp_msg_0.q = 0.983259561717;
    tmp_msg_0.r = 0.542929475933;
    tmp_msg_0.depth = 0.108905415914;
    tmp_msg_0.alt = 0.718683857926;
    msg.state.set(tmp_msg_0);
    msg.type = 150U;

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
    msg.setTimeStamp(0.659771076349);
    msg.setSource(55808U);
    msg.setSourceEntity(216U);
    msg.setDestination(31752U);
    msg.setDestinationEntity(214U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.40899184246;
    tmp_msg_0.lon = 0.0958188792513;
    tmp_msg_0.height = 0.695139608934;
    tmp_msg_0.x = 0.896344754762;
    tmp_msg_0.y = 0.167094450512;
    tmp_msg_0.z = 0.832088506938;
    tmp_msg_0.phi = 0.0429927290518;
    tmp_msg_0.theta = 0.523958658251;
    tmp_msg_0.psi = 0.94577569135;
    tmp_msg_0.u = 0.996802875915;
    tmp_msg_0.v = 0.696228881788;
    tmp_msg_0.w = 0.696752472017;
    tmp_msg_0.vx = 0.143265913898;
    tmp_msg_0.vy = 0.294465607464;
    tmp_msg_0.vz = 0.250737445211;
    tmp_msg_0.p = 0.0775097577221;
    tmp_msg_0.q = 0.525930500276;
    tmp_msg_0.r = 0.0418035949933;
    tmp_msg_0.depth = 0.961087673367;
    tmp_msg_0.alt = 0.998149862207;
    msg.state.set(tmp_msg_0);
    msg.type = 81U;

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
    msg.setTimeStamp(0.610925581626);
    msg.setSource(11372U);
    msg.setSourceEntity(141U);
    msg.setDestination(26620U);
    msg.setDestinationEntity(117U);
    msg.value = 0.564815629057;

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
    msg.setTimeStamp(0.210291799125);
    msg.setSource(32419U);
    msg.setSourceEntity(210U);
    msg.setDestination(33056U);
    msg.setDestinationEntity(184U);
    msg.value = 0.473664781573;

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
    msg.setTimeStamp(0.38726792605);
    msg.setSource(62533U);
    msg.setSourceEntity(19U);
    msg.setDestination(64394U);
    msg.setDestinationEntity(173U);
    msg.value = 0.728737869624;

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
    msg.setTimeStamp(0.760064138437);
    msg.setSource(47554U);
    msg.setSourceEntity(212U);
    msg.setDestination(31917U);
    msg.setDestinationEntity(218U);
    msg.value = 0.39608280074;

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
    msg.setTimeStamp(0.677459648852);
    msg.setSource(34543U);
    msg.setSourceEntity(64U);
    msg.setDestination(30599U);
    msg.setDestinationEntity(191U);
    msg.value = 0.284929207717;

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
    msg.setTimeStamp(0.99281795863);
    msg.setSource(18874U);
    msg.setSourceEntity(143U);
    msg.setDestination(36718U);
    msg.setDestinationEntity(206U);
    msg.value = 0.685280504185;

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
    msg.setTimeStamp(0.632416933256);
    msg.setSource(14723U);
    msg.setSourceEntity(183U);
    msg.setDestination(19269U);
    msg.setDestinationEntity(14U);
    msg.value = 0.634105266962;

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
    msg.setTimeStamp(0.829416879635);
    msg.setSource(13742U);
    msg.setSourceEntity(35U);
    msg.setDestination(10228U);
    msg.setDestinationEntity(50U);
    msg.value = 0.59762162518;

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
    msg.setTimeStamp(0.171177760565);
    msg.setSource(7889U);
    msg.setSourceEntity(199U);
    msg.setDestination(22947U);
    msg.setDestinationEntity(209U);
    msg.value = 0.735581716261;

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
    msg.setTimeStamp(0.56016401617);
    msg.setSource(27357U);
    msg.setSourceEntity(155U);
    msg.setDestination(42716U);
    msg.setDestinationEntity(143U);
    msg.value = 0.060047548216;

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
    msg.setTimeStamp(0.352121732614);
    msg.setSource(9627U);
    msg.setSourceEntity(166U);
    msg.setDestination(19695U);
    msg.setDestinationEntity(74U);
    msg.value = 0.137834677553;

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
    msg.setTimeStamp(0.492998063461);
    msg.setSource(16028U);
    msg.setSourceEntity(86U);
    msg.setDestination(40910U);
    msg.setDestinationEntity(110U);
    msg.value = 0.351108665056;

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
    msg.setTimeStamp(0.201109732125);
    msg.setSource(60409U);
    msg.setSourceEntity(140U);
    msg.setDestination(56754U);
    msg.setDestinationEntity(193U);
    msg.value = 0.0914605575613;

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
    msg.setTimeStamp(0.081022391842);
    msg.setSource(28983U);
    msg.setSourceEntity(200U);
    msg.setDestination(15229U);
    msg.setDestinationEntity(86U);
    msg.value = 0.847302893975;

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
    msg.setTimeStamp(0.665904081161);
    msg.setSource(43118U);
    msg.setSourceEntity(136U);
    msg.setDestination(49065U);
    msg.setDestinationEntity(38U);
    msg.value = 0.924039662592;

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
    msg.setTimeStamp(0.710686525486);
    msg.setSource(64405U);
    msg.setSourceEntity(234U);
    msg.setDestination(20889U);
    msg.setDestinationEntity(23U);
    msg.id = 150U;
    msg.zoom = 70U;
    msg.action = 33U;

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
    msg.setTimeStamp(0.223207788903);
    msg.setSource(41522U);
    msg.setSourceEntity(233U);
    msg.setDestination(31830U);
    msg.setDestinationEntity(132U);
    msg.id = 59U;
    msg.zoom = 183U;
    msg.action = 132U;

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
    msg.setTimeStamp(0.299176939046);
    msg.setSource(37581U);
    msg.setSourceEntity(10U);
    msg.setDestination(57415U);
    msg.setDestinationEntity(25U);
    msg.id = 26U;
    msg.zoom = 95U;
    msg.action = 0U;

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
    msg.setTimeStamp(0.00910754209699);
    msg.setSource(56266U);
    msg.setSourceEntity(35U);
    msg.setDestination(50181U);
    msg.setDestinationEntity(25U);
    msg.id = 28U;
    msg.value = 0.761009877012;

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
    msg.setTimeStamp(0.637260951078);
    msg.setSource(63286U);
    msg.setSourceEntity(154U);
    msg.setDestination(13721U);
    msg.setDestinationEntity(129U);
    msg.id = 6U;
    msg.value = 0.5087779961;

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
    msg.setTimeStamp(0.197683720683);
    msg.setSource(3157U);
    msg.setSourceEntity(157U);
    msg.setDestination(53454U);
    msg.setDestinationEntity(22U);
    msg.id = 96U;
    msg.value = 0.385322797635;

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
    msg.setTimeStamp(0.320967289025);
    msg.setSource(41024U);
    msg.setSourceEntity(192U);
    msg.setDestination(5401U);
    msg.setDestinationEntity(112U);
    msg.id = 68U;
    msg.value = 0.947951068201;

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
    msg.setTimeStamp(0.337445910646);
    msg.setSource(13485U);
    msg.setSourceEntity(93U);
    msg.setDestination(56341U);
    msg.setDestinationEntity(179U);
    msg.id = 91U;
    msg.value = 0.70204075578;

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
    msg.setTimeStamp(0.324021232668);
    msg.setSource(42280U);
    msg.setSourceEntity(99U);
    msg.setDestination(22493U);
    msg.setDestinationEntity(10U);
    msg.id = 28U;
    msg.value = 0.944571067641;

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
    msg.setTimeStamp(0.717956639084);
    msg.setSource(33362U);
    msg.setSourceEntity(78U);
    msg.setDestination(44438U);
    msg.setDestinationEntity(161U);
    msg.id = 45U;
    msg.angle = 0.931215696501;

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
    msg.setTimeStamp(0.165754199957);
    msg.setSource(7073U);
    msg.setSourceEntity(124U);
    msg.setDestination(39986U);
    msg.setDestinationEntity(161U);
    msg.id = 178U;
    msg.angle = 0.711928553739;

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
    msg.setTimeStamp(0.77469019505);
    msg.setSource(46352U);
    msg.setSourceEntity(177U);
    msg.setDestination(38644U);
    msg.setDestinationEntity(106U);
    msg.id = 217U;
    msg.angle = 0.149013428655;

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
    msg.setTimeStamp(0.924392046637);
    msg.setSource(2327U);
    msg.setSourceEntity(98U);
    msg.setDestination(57568U);
    msg.setDestinationEntity(11U);
    msg.op = 115U;
    msg.actions.assign("JAKNLXVUSOHRVWOBYBLCGNEBVLYQPTEJSDSAPZVKTTOERRBJPPLXMYKJWGFZPCKBKYORWTYGBMDEAWXCOBFQXYFHMIWUUWNZCERCVSTICQUACAAPBDDXJVKYGCJNNVHSSAITQIPLRVHFYEWXVMFZIJIWDNXHFCGZIQGZDCGHZJMHMZQGORFTFTSUKKZTPNHDHUDKRLDKLGIAUQBMMGUYOXLTXELSPEJUPMIQYULSZDEEJ");

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
    msg.setTimeStamp(0.799183592493);
    msg.setSource(8797U);
    msg.setSourceEntity(55U);
    msg.setDestination(29600U);
    msg.setDestinationEntity(164U);
    msg.op = 13U;
    msg.actions.assign("XCJTYWKDNOIRVLNNTBTLB");

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
    msg.setTimeStamp(0.0482624548689);
    msg.setSource(40135U);
    msg.setSourceEntity(149U);
    msg.setDestination(13816U);
    msg.setDestinationEntity(186U);
    msg.op = 196U;
    msg.actions.assign("CFQTOCJXDUENWZTIMZAOJGBXKGGJSRUAPPGCWVYLDJUFKPFQKWWUARVJEFKSBFTMGCXIJZOUKFEAMYHNGIKRCKRHMPDXYHSGCAMNZJPSMDEGOYOHSJFXNICOHECONDIPSECRBXYRUULXEAZTKVTVIROEHZZYTQRKCYQA");

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
    msg.setTimeStamp(0.289613311064);
    msg.setSource(36399U);
    msg.setSourceEntity(20U);
    msg.setDestination(21019U);
    msg.setDestinationEntity(22U);
    msg.actions.assign("BNZFJUYGWCZYIYOMSPGAEVEIWFBRKOETCZMEBXYNUCWSPPDWUVWZXCNCGMQKBVTXFAUUUWCGFMJBQLREDKGXAOITIATGFKVRJFTPELCDQSHJVHHECUSFFLPISGSEARBKUHQZGLQNVJNJPJTKDYQKBSMPREXZWOTXZYHBXMTDPAJOKKAIMOADLXYNSYFCDIXGNPSRNHZOJBLMXUOHOCULJBDVEAMLTVQHYYHWRDRQTKIRRHZOGVINILDVSMZ");

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
    msg.setTimeStamp(0.170194314005);
    msg.setSource(48875U);
    msg.setSourceEntity(21U);
    msg.setDestination(30161U);
    msg.setDestinationEntity(41U);
    msg.actions.assign("WZLPHYUDVGKFNDDZNSWMLRBWYTPCAPLADQOYLNRMHNQSOIWEAFAJDIGOOMXWTXGZKGHCXLTVVSKVTRQHPGFATKBJZPDBTVAVNTWIJFNIJQSNJCEKDJUFRHKDJOLQFAEUXSIVMNCYMWQEGURTIHCAPZOOYFMOLTMQJAUYFGIEZFBFNNLJRYXZPPCBIQRAV");

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
    msg.setTimeStamp(0.68980822862);
    msg.setSource(7790U);
    msg.setSourceEntity(19U);
    msg.setDestination(33079U);
    msg.setDestinationEntity(61U);
    msg.actions.assign("DVMWYLTIDZSFPYKXNKJULKTKHVVAZKOAZPWIUFGKQYHPRAL");

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
    msg.setTimeStamp(0.759108148854);
    msg.setSource(27584U);
    msg.setSourceEntity(123U);
    msg.setDestination(23998U);
    msg.setDestinationEntity(31U);
    msg.button = 161U;
    msg.value = 49U;

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
    msg.setTimeStamp(0.21846070148);
    msg.setSource(18256U);
    msg.setSourceEntity(40U);
    msg.setDestination(55475U);
    msg.setDestinationEntity(203U);
    msg.button = 227U;
    msg.value = 250U;

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
    msg.setTimeStamp(0.304793150006);
    msg.setSource(48979U);
    msg.setSourceEntity(112U);
    msg.setDestination(35766U);
    msg.setDestinationEntity(140U);
    msg.button = 139U;
    msg.value = 123U;

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
    msg.setTimeStamp(0.0182677401393);
    msg.setSource(23129U);
    msg.setSourceEntity(87U);
    msg.setDestination(12666U);
    msg.setDestinationEntity(192U);
    msg.op = 25U;
    msg.text.assign("CQALDGQZBCAWISQEZOKKEDSGWHTFUKHVHPVBZKAOHIURAQTVENEEZXCYPGJPGPOVRDRADNWLVUFAMMBILPJBILYGXWUYXPPTNCTIUFBXJOYSYGNSMESMLMNTXNOPBZQAYHDGGVMHRYZSTRBKXMGFKUHYFTEFKDBMJRYWXJOOJFOSAIFZIWQCKNLUTCDMPAHQXHIXQTHKOJ");

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
    msg.setTimeStamp(0.481090135579);
    msg.setSource(62081U);
    msg.setSourceEntity(203U);
    msg.setDestination(46010U);
    msg.setDestinationEntity(38U);
    msg.op = 248U;
    msg.text.assign("DRIJYQUGLHPIWNITVJGJGZAQDXFCMOCQZLAAKRUMMKVHECWSZKEARRDBOQEKUBJFVFRBBKXAFTP");

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
    msg.setTimeStamp(0.701480881849);
    msg.setSource(3315U);
    msg.setSourceEntity(202U);
    msg.setDestination(22380U);
    msg.setDestinationEntity(166U);
    msg.op = 231U;
    msg.text.assign("CTRVIOHKXFMKPPJTLSHZSLWNDVQVGWOQYNZEECWZXGDCILGCVKJZDFRXPUBMUMJYFCLNDMIYPIAGKLMKJRGFSTKNHHAQWTVIFBCNMJTMLYSUQQIHAGNWQWDDMJYXPESSXMKDJRPNWRGFVEHNDDUAVJWUOIFEPQYCZXCOLUNQHBBATLVJSDFRBUWLMYZGHIAEAR");

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
    msg.setTimeStamp(0.521838529722);
    msg.setSource(55537U);
    msg.setSourceEntity(243U);
    msg.setDestination(43318U);
    msg.setDestinationEntity(66U);
    msg.op = 218U;
    msg.time_remain = 0.728469502971;
    msg.sched_time = 0.623234111345;

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
    msg.setTimeStamp(0.0376632703746);
    msg.setSource(51870U);
    msg.setSourceEntity(91U);
    msg.setDestination(15280U);
    msg.setDestinationEntity(46U);
    msg.op = 36U;
    msg.time_remain = 0.636482442007;
    msg.sched_time = 0.662840399455;

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
    msg.setTimeStamp(0.448668087906);
    msg.setSource(7655U);
    msg.setSourceEntity(58U);
    msg.setDestination(4489U);
    msg.setDestinationEntity(87U);
    msg.op = 175U;
    msg.time_remain = 0.140919839018;
    msg.sched_time = 0.0563881791077;

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
    msg.setTimeStamp(0.548645785919);
    msg.setSource(17225U);
    msg.setSourceEntity(51U);
    msg.setDestination(26873U);
    msg.setDestinationEntity(119U);
    msg.name.assign("MPGOCUUAVFNZDYBRJOYCNYHRQXHUIPTSMJXSNTOOSRAFDJIRAICVEBEZVUZYQAYVCTGSTADJZHFEVGJUPYXWNBRLGWFVCTAKCUYJZGLSKWZGGMPYRJWUNMFCLBXADVJIDTYQA");
    msg.op = 85U;
    msg.sched_time = 0.0844330012938;

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
    msg.setTimeStamp(0.874863437104);
    msg.setSource(59298U);
    msg.setSourceEntity(110U);
    msg.setDestination(38981U);
    msg.setDestinationEntity(106U);
    msg.name.assign("AGFIDXOHYBEOHLJLVZVKAPJYQDFJMMZCCMAJOYAQGBSZWEEMWLCNRVRJSFBTRYSAUUKQQOXEYMZCHPI");
    msg.op = 121U;
    msg.sched_time = 0.749037759683;

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
    msg.setTimeStamp(0.610188401074);
    msg.setSource(26569U);
    msg.setSourceEntity(40U);
    msg.setDestination(1755U);
    msg.setDestinationEntity(231U);
    msg.name.assign("DMXWRBJZITO");
    msg.op = 228U;
    msg.sched_time = 0.341423246225;

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
    msg.setTimeStamp(0.906058009435);
    msg.setSource(52308U);
    msg.setSourceEntity(245U);
    msg.setDestination(25062U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.027840205295);
    msg.setSource(42012U);
    msg.setSourceEntity(61U);
    msg.setDestination(61113U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.218886091746);
    msg.setSource(38738U);
    msg.setSourceEntity(223U);
    msg.setDestination(6709U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.335915247919);
    msg.setSource(4317U);
    msg.setSourceEntity(56U);
    msg.setDestination(10858U);
    msg.setDestinationEntity(148U);
    msg.name.assign("JHPOUYPXTKPCHTANJAXFHYBFDCQKSTZNKYYSQCUJXNMBWCSTZNQBDGZIMYFGURZTPEQLGWPBDHOXDTPOOQLKPVNAHOKT");
    msg.state = 2U;

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
    msg.setTimeStamp(0.562053457759);
    msg.setSource(30070U);
    msg.setSourceEntity(161U);
    msg.setDestination(62091U);
    msg.setDestinationEntity(74U);
    msg.name.assign("PUOVUAXRMSGDOOAPPLYCGYMDKHFUKWDKAZVTUFLUANSFQTITXAHLIGPIJMXOIZUNURNOESMMYIYFUXZGBKUQZAXXHTGFVWXILNOFELBJQBRXOZBD");
    msg.state = 210U;

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
    msg.setTimeStamp(0.373901824353);
    msg.setSource(57270U);
    msg.setSourceEntity(183U);
    msg.setDestination(7876U);
    msg.setDestinationEntity(167U);
    msg.name.assign("RXSZCWJVUJKDLNASPVSVLRFULOFQKSUSRCBDGZTEEPPFXEIJCBYIVDNMZZHIMISOCOPVULMXGSYXNLFKVZUGPTXYNUQLHLAPODSKMIWGCRBWMGRQHLUAZWOJBNLMUIOAPEQYCGOKPPECRKKFJTYHOHABQEVUVGFYHAYCJKNWQDWQTFHTSBXJAT");
    msg.state = 135U;

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
    msg.setTimeStamp(0.742792893761);
    msg.setSource(63549U);
    msg.setSourceEntity(103U);
    msg.setDestination(3658U);
    msg.setDestinationEntity(150U);
    msg.name.assign("OJLSUWEWMOEUAVUFQPKKRODDHLVVRHCRGMYWZMKZARLCSVSJQTVPZIMVWLEXQTKNNQSNIYLKHGNNPHBFDZFFJIGFONWFJSSAVWZIYBAHVCEPYAZZMBKTIQPMWBACFXULXBMGOXAOKXJIUWHYTPQENOUSNNHUXSEGRTBXLDW");
    msg.value = 227U;

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
    msg.setTimeStamp(0.079267591139);
    msg.setSource(35825U);
    msg.setSourceEntity(205U);
    msg.setDestination(44664U);
    msg.setDestinationEntity(243U);
    msg.name.assign("XFLBODDXSSQRLPINFAJYQZVZVAAUH");
    msg.value = 131U;

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
    msg.setTimeStamp(0.268086324357);
    msg.setSource(43772U);
    msg.setSourceEntity(84U);
    msg.setDestination(12717U);
    msg.setDestinationEntity(16U);
    msg.name.assign("XJUKUBRDEPLUEMNJFYGQMPIVBMPUFKJUNTXFVLPRAIOGCPKINRFXWLPIFZVHQUERHELAJUZTXQGKUAJAKGWLIFEIPWVQLOKKFCSZCRIHNBBEOHSNTCOGNJXAQQHDAHSYWWITFOPTMDZWBQVTCMOARVDZIH");
    msg.value = 96U;

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
    msg.setTimeStamp(0.193850645726);
    msg.setSource(28033U);
    msg.setSourceEntity(226U);
    msg.setDestination(19706U);
    msg.setDestinationEntity(96U);
    msg.name.assign("BLHZFVZFKWGAWEQVKLEPLEYSWHYIOIZQTSWEVYPXZHYWBIRW");

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
    msg.setTimeStamp(0.681384030056);
    msg.setSource(29487U);
    msg.setSourceEntity(50U);
    msg.setDestination(65409U);
    msg.setDestinationEntity(47U);
    msg.name.assign("LPDUYHMZETCVDHLGQZDBATRSEFIFASOZTOXDWPNHUYNQRDYAWRNFCGIMIQLYFJKLJKOAWXRQIBLPCQWSTVCYBASGMKGZZOVPGPXNYEIXKQCUFRLVATPN");

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
    msg.setTimeStamp(0.616678775378);
    msg.setSource(30524U);
    msg.setSourceEntity(68U);
    msg.setDestination(53642U);
    msg.setDestinationEntity(65U);
    msg.name.assign("KGCXLTEGMSFHGAICDDDRVUXZAFGJLHFOKULBAJPKXZMQRONUVMUCZUPCHFPDSPGNKZSTTSIYLYKDALCFWEWDAKNFUZQTIXHPOUDTJCXGYTNPKAYKIZXVBLRHKWIMYTSQSVFETHFVNWWYYMGHZQSPMNEXSALHJQRCERAPWDVUZEVQGNXMBQOEJHGTNLMJWBLWVINFBBRLQBODPWROUGMC");

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
    msg.setTimeStamp(0.549803529279);
    msg.setSource(34740U);
    msg.setSourceEntity(82U);
    msg.setDestination(21543U);
    msg.setDestinationEntity(171U);
    msg.name.assign("WKGFOQXICOPGIDWSPVJBCARNZYBUAOSYEGBHHOKVDJHFIEPKLGVAYUORCXGNOMFDPWKB");
    msg.value = 18U;

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
    msg.setTimeStamp(0.531273823764);
    msg.setSource(52907U);
    msg.setSourceEntity(235U);
    msg.setDestination(10412U);
    msg.setDestinationEntity(205U);
    msg.name.assign("DIPDPTNRXBESXDJHHNBKTLADFP");
    msg.value = 53U;

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
    msg.setTimeStamp(0.383295339669);
    msg.setSource(38310U);
    msg.setSourceEntity(33U);
    msg.setDestination(11413U);
    msg.setDestinationEntity(190U);
    msg.name.assign("QVWNHCFUDCPBRAWAGAOWIZCFRWVOL");
    msg.value = 189U;

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
    msg.setTimeStamp(0.86625806637);
    msg.setSource(60970U);
    msg.setSourceEntity(71U);
    msg.setDestination(44661U);
    msg.setDestinationEntity(68U);
    msg.id = 197U;
    msg.period = 2221256947U;
    msg.duty_cycle = 2686018338U;

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
    msg.setTimeStamp(0.997477601929);
    msg.setSource(20016U);
    msg.setSourceEntity(117U);
    msg.setDestination(35780U);
    msg.setDestinationEntity(35U);
    msg.id = 30U;
    msg.period = 2493505712U;
    msg.duty_cycle = 4278870960U;

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
    msg.setTimeStamp(0.953828321176);
    msg.setSource(37738U);
    msg.setSourceEntity(95U);
    msg.setDestination(37007U);
    msg.setDestinationEntity(107U);
    msg.id = 249U;
    msg.period = 82493581U;
    msg.duty_cycle = 3303626493U;

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
    msg.setTimeStamp(0.561664115747);
    msg.setSource(60776U);
    msg.setSourceEntity(69U);
    msg.setDestination(16217U);
    msg.setDestinationEntity(1U);
    msg.id = 110U;
    msg.period = 3924346629U;
    msg.duty_cycle = 1069844661U;

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
    msg.setTimeStamp(0.186774324838);
    msg.setSource(34360U);
    msg.setSourceEntity(80U);
    msg.setDestination(56454U);
    msg.setDestinationEntity(174U);
    msg.id = 27U;
    msg.period = 2457341609U;
    msg.duty_cycle = 3279038720U;

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
    msg.setTimeStamp(0.271252362863);
    msg.setSource(31661U);
    msg.setSourceEntity(191U);
    msg.setDestination(31619U);
    msg.setDestinationEntity(98U);
    msg.id = 68U;
    msg.period = 350387957U;
    msg.duty_cycle = 3881525214U;

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
    msg.setTimeStamp(0.601947029938);
    msg.setSource(11831U);
    msg.setSourceEntity(229U);
    msg.setDestination(49889U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.648144895441;
    msg.lon = 0.649314724321;
    msg.height = 0.520815551978;
    msg.x = 0.55829217385;
    msg.y = 0.602890711491;
    msg.z = 0.448293232948;
    msg.phi = 0.203892996256;
    msg.theta = 0.551992439758;
    msg.psi = 0.824351164349;
    msg.u = 0.092155450396;
    msg.v = 0.356478177795;
    msg.w = 0.21992785741;
    msg.vx = 0.267715652701;
    msg.vy = 0.398730542301;
    msg.vz = 0.523770737878;
    msg.p = 0.0123730086206;
    msg.q = 0.907147568431;
    msg.r = 0.124767856967;
    msg.depth = 0.735767465234;
    msg.alt = 0.92546211193;

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
    msg.setTimeStamp(0.220256216112);
    msg.setSource(15935U);
    msg.setSourceEntity(23U);
    msg.setDestination(64829U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.846576450871;
    msg.lon = 0.164022048565;
    msg.height = 0.463310445128;
    msg.x = 0.715755391195;
    msg.y = 0.0522244099223;
    msg.z = 0.683010861243;
    msg.phi = 0.950383379824;
    msg.theta = 0.555260951327;
    msg.psi = 0.42631132425;
    msg.u = 0.543517778526;
    msg.v = 0.463176838186;
    msg.w = 0.91502183076;
    msg.vx = 0.405474039053;
    msg.vy = 0.502214938135;
    msg.vz = 0.151502751719;
    msg.p = 0.603323641845;
    msg.q = 0.196473035836;
    msg.r = 0.187440839515;
    msg.depth = 0.861502777125;
    msg.alt = 0.672052345414;

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
    msg.setTimeStamp(0.518787183341);
    msg.setSource(43678U);
    msg.setSourceEntity(89U);
    msg.setDestination(24895U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.803625316673;
    msg.lon = 0.358643915872;
    msg.height = 0.624597502077;
    msg.x = 0.329801935417;
    msg.y = 0.525764670536;
    msg.z = 0.725448117346;
    msg.phi = 0.113808772465;
    msg.theta = 0.00182293996363;
    msg.psi = 0.714813198051;
    msg.u = 0.209358566097;
    msg.v = 0.976151987389;
    msg.w = 0.867137176029;
    msg.vx = 0.323360018273;
    msg.vy = 0.942257230043;
    msg.vz = 0.295185946773;
    msg.p = 0.537985434556;
    msg.q = 0.623458492021;
    msg.r = 0.496856575222;
    msg.depth = 0.561273558903;
    msg.alt = 0.0981391240162;

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
    msg.setTimeStamp(0.875507670068);
    msg.setSource(43845U);
    msg.setSourceEntity(241U);
    msg.setDestination(16222U);
    msg.setDestinationEntity(48U);
    msg.x = 0.509105878349;
    msg.y = 0.0116628101127;
    msg.z = 0.773846372362;

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
    msg.setTimeStamp(0.863510962261);
    msg.setSource(33537U);
    msg.setSourceEntity(203U);
    msg.setDestination(57115U);
    msg.setDestinationEntity(103U);
    msg.x = 0.0468905096121;
    msg.y = 0.962711754682;
    msg.z = 0.28749082309;

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
    msg.setTimeStamp(0.576360805348);
    msg.setSource(27963U);
    msg.setSourceEntity(209U);
    msg.setDestination(54813U);
    msg.setDestinationEntity(50U);
    msg.x = 0.259831351945;
    msg.y = 0.81883103722;
    msg.z = 0.520490470965;

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
    msg.setTimeStamp(0.917626263427);
    msg.setSource(8621U);
    msg.setSourceEntity(92U);
    msg.setDestination(44911U);
    msg.setDestinationEntity(140U);
    msg.value = 0.618083982099;

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
    msg.setTimeStamp(0.85348472853);
    msg.setSource(59013U);
    msg.setSourceEntity(3U);
    msg.setDestination(14559U);
    msg.setDestinationEntity(115U);
    msg.value = 0.0414947191859;

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
    msg.setTimeStamp(0.226858582758);
    msg.setSource(56117U);
    msg.setSourceEntity(228U);
    msg.setDestination(10107U);
    msg.setDestinationEntity(100U);
    msg.value = 0.749577622268;

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
    msg.setTimeStamp(0.288013726498);
    msg.setSource(14692U);
    msg.setSourceEntity(197U);
    msg.setDestination(6093U);
    msg.setDestinationEntity(200U);
    msg.value = 0.291122840665;

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
    msg.setTimeStamp(0.327179594061);
    msg.setSource(27529U);
    msg.setSourceEntity(252U);
    msg.setDestination(39U);
    msg.setDestinationEntity(237U);
    msg.value = 0.799980389615;

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
    msg.setTimeStamp(0.984000094875);
    msg.setSource(15020U);
    msg.setSourceEntity(52U);
    msg.setDestination(49168U);
    msg.setDestinationEntity(107U);
    msg.value = 0.189697090224;

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
    msg.setTimeStamp(0.601672083557);
    msg.setSource(56794U);
    msg.setSourceEntity(98U);
    msg.setDestination(23601U);
    msg.setDestinationEntity(20U);
    msg.x = 0.121582840338;
    msg.y = 0.750865668892;
    msg.z = 0.0876825751772;
    msg.phi = 0.0557717113082;
    msg.theta = 0.715965850223;
    msg.psi = 0.301218225943;
    msg.p = 0.838143917662;
    msg.q = 0.102746757505;
    msg.r = 0.774211518437;
    msg.u = 0.494309128152;
    msg.v = 0.131494662001;
    msg.w = 0.762335973374;
    msg.bias_psi = 0.990254575483;
    msg.bias_r = 0.760776950062;

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
    msg.setTimeStamp(0.763303459082);
    msg.setSource(14435U);
    msg.setSourceEntity(64U);
    msg.setDestination(11314U);
    msg.setDestinationEntity(162U);
    msg.x = 0.404886780514;
    msg.y = 0.28107454277;
    msg.z = 0.308385225295;
    msg.phi = 0.967364877227;
    msg.theta = 0.0823616709854;
    msg.psi = 0.135065885088;
    msg.p = 0.586245745053;
    msg.q = 0.0638610263355;
    msg.r = 0.733734070824;
    msg.u = 0.178784945243;
    msg.v = 0.604715895574;
    msg.w = 0.434384028342;
    msg.bias_psi = 0.661069004543;
    msg.bias_r = 0.340804361479;

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
    msg.setTimeStamp(0.226428882613);
    msg.setSource(39528U);
    msg.setSourceEntity(130U);
    msg.setDestination(50774U);
    msg.setDestinationEntity(206U);
    msg.x = 0.332475183717;
    msg.y = 0.714303384962;
    msg.z = 0.703305597187;
    msg.phi = 0.323746553469;
    msg.theta = 0.621776786992;
    msg.psi = 0.191671506504;
    msg.p = 0.00456528218304;
    msg.q = 0.307386570114;
    msg.r = 0.71422921965;
    msg.u = 0.22753871615;
    msg.v = 0.699651830511;
    msg.w = 0.973037007056;
    msg.bias_psi = 0.00976653103553;
    msg.bias_r = 0.111857255047;

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
    msg.setTimeStamp(0.50954592472);
    msg.setSource(29454U);
    msg.setSourceEntity(101U);
    msg.setDestination(23290U);
    msg.setDestinationEntity(36U);
    msg.bias_psi = 0.615995012607;
    msg.bias_r = 0.951642171571;
    msg.cog = 0.272769443976;
    msg.cyaw = 0.818820062271;
    msg.gps_rej_level = 0.30404939361;
    msg.lbl_rej_level = 0.0186242471516;
    msg.custom_x = 0.566683383288;
    msg.custom_y = 0.91657511726;
    msg.custom_z = 0.339377936263;

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
    msg.setTimeStamp(0.937816120195);
    msg.setSource(43854U);
    msg.setSourceEntity(120U);
    msg.setDestination(40984U);
    msg.setDestinationEntity(1U);
    msg.bias_psi = 0.264849996773;
    msg.bias_r = 0.846721918658;
    msg.cog = 0.134395314821;
    msg.cyaw = 0.847486267079;
    msg.gps_rej_level = 0.706777212658;
    msg.lbl_rej_level = 0.498111811274;
    msg.custom_x = 0.833260754607;
    msg.custom_y = 0.395487423289;
    msg.custom_z = 0.482816691175;

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
    msg.setTimeStamp(0.800275954117);
    msg.setSource(46553U);
    msg.setSourceEntity(191U);
    msg.setDestination(61671U);
    msg.setDestinationEntity(199U);
    msg.bias_psi = 0.872586858316;
    msg.bias_r = 0.920434952778;
    msg.cog = 0.267651957554;
    msg.cyaw = 0.309709695946;
    msg.gps_rej_level = 0.282799389489;
    msg.lbl_rej_level = 0.782189273978;
    msg.custom_x = 0.77789892299;
    msg.custom_y = 0.865746015341;
    msg.custom_z = 0.892988795733;

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
    msg.setTimeStamp(0.808698707254);
    msg.setSource(19521U);
    msg.setSourceEntity(207U);
    msg.setDestination(9693U);
    msg.setDestinationEntity(14U);
    msg.utc_time = 0.453193327058;
    msg.reason = 17U;

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
    msg.setTimeStamp(0.556169118818);
    msg.setSource(25491U);
    msg.setSourceEntity(65U);
    msg.setDestination(25820U);
    msg.setDestinationEntity(192U);
    msg.utc_time = 0.573645187253;
    msg.reason = 69U;

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
    msg.setTimeStamp(0.433911932716);
    msg.setSource(47369U);
    msg.setSourceEntity(8U);
    msg.setDestination(37576U);
    msg.setDestinationEntity(4U);
    msg.utc_time = 0.861271880137;
    msg.reason = 198U;

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
    msg.setTimeStamp(0.333145112661);
    msg.setSource(27656U);
    msg.setSourceEntity(206U);
    msg.setDestination(2867U);
    msg.setDestinationEntity(90U);
    msg.id = 65U;
    msg.range = 0.101129065198;
    msg.acceptance = 110U;

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
    msg.setTimeStamp(0.581365741228);
    msg.setSource(17139U);
    msg.setSourceEntity(195U);
    msg.setDestination(15237U);
    msg.setDestinationEntity(186U);
    msg.id = 78U;
    msg.range = 0.749854118098;
    msg.acceptance = 245U;

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
    msg.setTimeStamp(0.489825067388);
    msg.setSource(64131U);
    msg.setSourceEntity(108U);
    msg.setDestination(38780U);
    msg.setDestinationEntity(217U);
    msg.id = 160U;
    msg.range = 0.807354628765;
    msg.acceptance = 177U;

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
    msg.setTimeStamp(0.281481206627);
    msg.setSource(62729U);
    msg.setSourceEntity(128U);
    msg.setDestination(60834U);
    msg.setDestinationEntity(199U);
    msg.type = 176U;
    msg.reason = 69U;
    msg.value = 0.946277309825;
    msg.timestep = 0.170541765443;

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
    msg.setTimeStamp(0.0914347328136);
    msg.setSource(9699U);
    msg.setSourceEntity(75U);
    msg.setDestination(33177U);
    msg.setDestinationEntity(105U);
    msg.type = 253U;
    msg.reason = 54U;
    msg.value = 0.919476321716;
    msg.timestep = 0.229426555571;

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
    msg.setTimeStamp(0.453335748723);
    msg.setSource(47509U);
    msg.setSourceEntity(23U);
    msg.setDestination(20529U);
    msg.setDestinationEntity(112U);
    msg.type = 103U;
    msg.reason = 128U;
    msg.value = 0.50860890389;
    msg.timestep = 0.828180430554;

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
    msg.setTimeStamp(0.0223088320943);
    msg.setSource(13142U);
    msg.setSourceEntity(25U);
    msg.setDestination(10491U);
    msg.setDestinationEntity(153U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HQTCCIADCIHERXODPTOFDRWPUMRFBYEGHGKUYBMURAOZNAUPUPKYWNBDYDMWFYMKVRVAKBJVFUYGJDKKDEEVRZSTJJOLTEOXAVHGOQFYFWLBSELYGMTIMONZXUZEPTOVFJCBSVIWWJW");
    tmp_msg_0.lat = 0.913669289924;
    tmp_msg_0.lon = 0.523565870987;
    tmp_msg_0.depth = 0.322744111633;
    tmp_msg_0.query_channel = 110U;
    tmp_msg_0.reply_channel = 244U;
    tmp_msg_0.transponder_delay = 52U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.762327358854;
    msg.y = 0.887592970788;
    msg.var_x = 0.26420961563;
    msg.var_y = 0.706786058216;
    msg.distance = 0.70157042729;

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
    msg.setTimeStamp(0.365067504922);
    msg.setSource(38594U);
    msg.setSourceEntity(146U);
    msg.setDestination(14569U);
    msg.setDestinationEntity(142U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ETBJNGOSCDNPRNSUEHJWGFZDJYEHTNKGHEMXKCHJKOMWFBHYKZTRVTTWWOCIXQLQWNIIPNYZUFJDCLBEUDAAIGXYYFFUAKFBLFZTVYUGMAREVDPMTQOZAAXXCSZBQWPLMZQSCJD");
    tmp_msg_0.lat = 0.886630963045;
    tmp_msg_0.lon = 0.7230874344;
    tmp_msg_0.depth = 0.559577201677;
    tmp_msg_0.query_channel = 146U;
    tmp_msg_0.reply_channel = 197U;
    tmp_msg_0.transponder_delay = 146U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.562788443793;
    msg.y = 0.713593740089;
    msg.var_x = 0.690303875742;
    msg.var_y = 0.273772846199;
    msg.distance = 0.406234746247;

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
    msg.setTimeStamp(0.677911738388);
    msg.setSource(43468U);
    msg.setSourceEntity(31U);
    msg.setDestination(65295U);
    msg.setDestinationEntity(27U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZOCKNYJZXFCBOOBDDYYEFZADMNVHZWJHGRJLDBNUVRUYTEWWDFTPMIGURAIIREARAYSSOBQIBEEQVKEARZABSMULQEJNGWWXEIDLZWITFSXVXLVNLMSOQODUKPQOKQXBUGEWOJCAVXQICPGUNTPTOMARZJPRKCVFCPAYTSMXJCMPNSCHVIDSHCEAMGLPYZMRVHJWYUHHGTDLBYWFFMHNVPCZDGIUNXKKNOHTQ");
    tmp_msg_0.lat = 0.712067733156;
    tmp_msg_0.lon = 0.332194506192;
    tmp_msg_0.depth = 0.343902107906;
    tmp_msg_0.query_channel = 27U;
    tmp_msg_0.reply_channel = 222U;
    tmp_msg_0.transponder_delay = 122U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.564880562288;
    msg.y = 0.000221679583777;
    msg.var_x = 0.843479545052;
    msg.var_y = 0.76362540188;
    msg.distance = 0.537879998488;

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
    msg.setTimeStamp(0.290339784365);
    msg.setSource(11838U);
    msg.setSourceEntity(185U);
    msg.setDestination(19950U);
    msg.setDestinationEntity(151U);
    msg.state = 11U;

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
    msg.setTimeStamp(0.0493746022462);
    msg.setSource(11577U);
    msg.setSourceEntity(120U);
    msg.setDestination(63842U);
    msg.setDestinationEntity(14U);
    msg.state = 7U;

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
    msg.setTimeStamp(0.245705628423);
    msg.setSource(31325U);
    msg.setSourceEntity(174U);
    msg.setDestination(27430U);
    msg.setDestinationEntity(214U);
    msg.state = 243U;

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
    msg.setTimeStamp(0.0626264579972);
    msg.setSource(9538U);
    msg.setSourceEntity(64U);
    msg.setDestination(58322U);
    msg.setDestinationEntity(189U);
    msg.x = 0.486515905967;
    msg.y = 0.987029613041;
    msg.z = 0.119494367238;

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
    msg.setTimeStamp(0.255057263998);
    msg.setSource(14936U);
    msg.setSourceEntity(232U);
    msg.setDestination(21310U);
    msg.setDestinationEntity(5U);
    msg.x = 0.716120692617;
    msg.y = 0.580740042739;
    msg.z = 0.116845440948;

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
    msg.setTimeStamp(0.0895304889618);
    msg.setSource(60427U);
    msg.setSourceEntity(224U);
    msg.setDestination(5630U);
    msg.setDestinationEntity(51U);
    msg.x = 0.548902272689;
    msg.y = 0.398196224926;
    msg.z = 0.518652465753;

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
    msg.setTimeStamp(0.619292319308);
    msg.setSource(36589U);
    msg.setSourceEntity(174U);
    msg.setDestination(6241U);
    msg.setDestinationEntity(26U);
    msg.va = 0.523978654594;
    msg.aoa = 0.47446286006;
    msg.ssa = 0.433680785335;

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
    msg.setTimeStamp(0.978397674811);
    msg.setSource(26460U);
    msg.setSourceEntity(173U);
    msg.setDestination(6767U);
    msg.setDestinationEntity(23U);
    msg.va = 0.690556838858;
    msg.aoa = 0.923180309001;
    msg.ssa = 0.555610733862;

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
    msg.setTimeStamp(0.962681909956);
    msg.setSource(56098U);
    msg.setSourceEntity(174U);
    msg.setDestination(10904U);
    msg.setDestinationEntity(167U);
    msg.va = 0.451422710892;
    msg.aoa = 0.902776696741;
    msg.ssa = 0.635699502354;

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
    msg.setTimeStamp(0.335474947446);
    msg.setSource(26277U);
    msg.setSourceEntity(44U);
    msg.setDestination(1553U);
    msg.setDestinationEntity(238U);
    msg.value = 0.24712450612;
    msg.off = 0.727623045997;

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
    msg.setTimeStamp(0.32033772468);
    msg.setSource(3157U);
    msg.setSourceEntity(250U);
    msg.setDestination(52615U);
    msg.setDestinationEntity(208U);
    msg.value = 0.412303905757;
    msg.off = 0.281876840101;

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
    msg.setTimeStamp(0.970544371332);
    msg.setSource(42295U);
    msg.setSourceEntity(183U);
    msg.setDestination(51397U);
    msg.setDestinationEntity(62U);
    msg.value = 0.591570650462;
    msg.off = 0.823960458624;

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
    msg.setTimeStamp(0.582758879972);
    msg.setSource(8512U);
    msg.setSourceEntity(173U);
    msg.setDestination(2804U);
    msg.setDestinationEntity(196U);
    msg.value = 0.606015479181;
    msg.z_units = 253U;

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
    msg.setTimeStamp(0.845682004169);
    msg.setSource(14611U);
    msg.setSourceEntity(206U);
    msg.setDestination(24392U);
    msg.setDestinationEntity(120U);
    msg.value = 0.0977373453909;
    msg.z_units = 133U;

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
    msg.setTimeStamp(0.0325712396693);
    msg.setSource(3042U);
    msg.setSourceEntity(167U);
    msg.setDestination(45882U);
    msg.setDestinationEntity(53U);
    msg.value = 0.506156335925;
    msg.z_units = 126U;

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
    msg.setTimeStamp(0.500135449863);
    msg.setSource(25924U);
    msg.setSourceEntity(69U);
    msg.setDestination(23382U);
    msg.setDestinationEntity(237U);
    msg.value = 0.753331741533;
    msg.speed_units = 176U;

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
    msg.setTimeStamp(0.276211910235);
    msg.setSource(12322U);
    msg.setSourceEntity(208U);
    msg.setDestination(19659U);
    msg.setDestinationEntity(49U);
    msg.value = 0.583147669587;
    msg.speed_units = 253U;

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
    msg.setTimeStamp(0.132017171997);
    msg.setSource(19587U);
    msg.setSourceEntity(10U);
    msg.setDestination(5783U);
    msg.setDestinationEntity(227U);
    msg.value = 0.385731330509;
    msg.speed_units = 142U;

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
    msg.setTimeStamp(0.00805673233214);
    msg.setSource(9756U);
    msg.setSourceEntity(50U);
    msg.setDestination(20154U);
    msg.setDestinationEntity(216U);
    msg.value = 0.592818679068;

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
    msg.setTimeStamp(0.424847544416);
    msg.setSource(54362U);
    msg.setSourceEntity(141U);
    msg.setDestination(33959U);
    msg.setDestinationEntity(200U);
    msg.value = 0.997066108883;

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
    msg.setTimeStamp(0.144788634818);
    msg.setSource(5180U);
    msg.setSourceEntity(41U);
    msg.setDestination(47936U);
    msg.setDestinationEntity(202U);
    msg.value = 0.636229550452;

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
    msg.setTimeStamp(0.178551715993);
    msg.setSource(9121U);
    msg.setSourceEntity(168U);
    msg.setDestination(43078U);
    msg.setDestinationEntity(205U);
    msg.value = 0.171236882119;

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
    msg.setTimeStamp(0.890020268048);
    msg.setSource(24276U);
    msg.setSourceEntity(71U);
    msg.setDestination(24789U);
    msg.setDestinationEntity(168U);
    msg.value = 0.572703003744;

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
    msg.setTimeStamp(0.888947106394);
    msg.setSource(56806U);
    msg.setSourceEntity(109U);
    msg.setDestination(2807U);
    msg.setDestinationEntity(211U);
    msg.value = 0.958512642931;

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
    msg.setTimeStamp(0.994657854522);
    msg.setSource(11347U);
    msg.setSourceEntity(249U);
    msg.setDestination(43097U);
    msg.setDestinationEntity(75U);
    msg.value = 0.974656699841;

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
    msg.setTimeStamp(0.169354483657);
    msg.setSource(31470U);
    msg.setSourceEntity(120U);
    msg.setDestination(53567U);
    msg.setDestinationEntity(245U);
    msg.value = 0.335041962911;

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
    msg.setTimeStamp(0.0294982355552);
    msg.setSource(63183U);
    msg.setSourceEntity(74U);
    msg.setDestination(482U);
    msg.setDestinationEntity(101U);
    msg.value = 0.22477417631;

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
    msg.setTimeStamp(0.396978671283);
    msg.setSource(44789U);
    msg.setSourceEntity(193U);
    msg.setDestination(52116U);
    msg.setDestinationEntity(119U);
    msg.path_ref = 2875234479U;
    msg.start_lat = 0.0861244740136;
    msg.start_lon = 0.901342985805;
    msg.start_z = 0.914060436464;
    msg.start_z_units = 157U;
    msg.end_lat = 0.395337311127;
    msg.end_lon = 0.868930858657;
    msg.end_z = 0.846698363851;
    msg.end_z_units = 108U;
    msg.speed = 0.0197204176487;
    msg.speed_units = 29U;
    msg.lradius = 0.472883214065;
    msg.flags = 160U;

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
    msg.setTimeStamp(0.164083342202);
    msg.setSource(33289U);
    msg.setSourceEntity(153U);
    msg.setDestination(21449U);
    msg.setDestinationEntity(118U);
    msg.path_ref = 1642354208U;
    msg.start_lat = 0.0124647271332;
    msg.start_lon = 0.317431449442;
    msg.start_z = 0.984064495393;
    msg.start_z_units = 115U;
    msg.end_lat = 0.356962533405;
    msg.end_lon = 0.160804423288;
    msg.end_z = 0.282922855736;
    msg.end_z_units = 67U;
    msg.speed = 0.623248443036;
    msg.speed_units = 32U;
    msg.lradius = 0.725622479609;
    msg.flags = 226U;

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
    msg.setTimeStamp(0.876261578356);
    msg.setSource(27240U);
    msg.setSourceEntity(48U);
    msg.setDestination(28961U);
    msg.setDestinationEntity(73U);
    msg.path_ref = 3800490268U;
    msg.start_lat = 0.395988606405;
    msg.start_lon = 0.0263507402623;
    msg.start_z = 0.693929410284;
    msg.start_z_units = 65U;
    msg.end_lat = 0.809797244066;
    msg.end_lon = 0.702190577165;
    msg.end_z = 0.922311956847;
    msg.end_z_units = 69U;
    msg.speed = 0.436462943846;
    msg.speed_units = 216U;
    msg.lradius = 0.870986895122;
    msg.flags = 18U;

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
    msg.setTimeStamp(0.665742844153);
    msg.setSource(4097U);
    msg.setSourceEntity(124U);
    msg.setDestination(43028U);
    msg.setDestinationEntity(35U);
    msg.x = 0.355559728307;
    msg.y = 0.239052269875;
    msg.z = 0.199402624259;
    msg.k = 0.102331939669;
    msg.m = 0.355659047608;
    msg.n = 0.499994214497;
    msg.flags = 59U;

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
    msg.setTimeStamp(0.754338735962);
    msg.setSource(64151U);
    msg.setSourceEntity(209U);
    msg.setDestination(65332U);
    msg.setDestinationEntity(17U);
    msg.x = 0.251905692994;
    msg.y = 0.988424655193;
    msg.z = 0.813911596862;
    msg.k = 0.229050533246;
    msg.m = 0.364590217779;
    msg.n = 0.288011885376;
    msg.flags = 51U;

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
    msg.setTimeStamp(0.0197453659581);
    msg.setSource(12066U);
    msg.setSourceEntity(90U);
    msg.setDestination(44047U);
    msg.setDestinationEntity(150U);
    msg.x = 0.75993858459;
    msg.y = 0.217136894873;
    msg.z = 0.831806770862;
    msg.k = 0.812709681579;
    msg.m = 0.600545230451;
    msg.n = 0.129763283207;
    msg.flags = 0U;

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
    msg.setTimeStamp(0.559621772016);
    msg.setSource(39617U);
    msg.setSourceEntity(65U);
    msg.setDestination(33439U);
    msg.setDestinationEntity(80U);
    msg.value = 0.804494375369;

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
    msg.setTimeStamp(0.978083637089);
    msg.setSource(56663U);
    msg.setSourceEntity(100U);
    msg.setDestination(5205U);
    msg.setDestinationEntity(233U);
    msg.value = 0.560793375576;

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
    msg.setTimeStamp(0.612409635385);
    msg.setSource(14618U);
    msg.setSourceEntity(52U);
    msg.setDestination(48418U);
    msg.setDestinationEntity(122U);
    msg.value = 0.27548083327;

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
    msg.setTimeStamp(0.109150429061);
    msg.setSource(44476U);
    msg.setSourceEntity(145U);
    msg.setDestination(41829U);
    msg.setDestinationEntity(148U);
    msg.u = 0.501102590313;
    msg.v = 0.316050552599;
    msg.w = 0.868630193079;
    msg.p = 0.524902983804;
    msg.q = 0.325923046065;
    msg.r = 0.802070826246;
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
    msg.setTimeStamp(0.402771520148);
    msg.setSource(40848U);
    msg.setSourceEntity(74U);
    msg.setDestination(10752U);
    msg.setDestinationEntity(240U);
    msg.u = 0.390436421562;
    msg.v = 0.987513656652;
    msg.w = 0.262614975541;
    msg.p = 0.0313571383655;
    msg.q = 0.149720840094;
    msg.r = 0.262932071623;
    msg.flags = 57U;

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
    msg.setTimeStamp(0.824717900043);
    msg.setSource(37470U);
    msg.setSourceEntity(45U);
    msg.setDestination(2264U);
    msg.setDestinationEntity(223U);
    msg.u = 0.412296414047;
    msg.v = 0.563707571394;
    msg.w = 0.731259581353;
    msg.p = 0.817555678937;
    msg.q = 0.10896424218;
    msg.r = 0.409827029241;
    msg.flags = 105U;

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
    msg.setTimeStamp(0.208056540637);
    msg.setSource(64609U);
    msg.setSourceEntity(157U);
    msg.setDestination(15983U);
    msg.setDestinationEntity(136U);
    msg.path_ref = 831221199U;
    msg.start_lat = 0.844814993462;
    msg.start_lon = 0.157562516881;
    msg.start_z = 0.827876073252;
    msg.start_z_units = 168U;
    msg.end_lat = 0.758647677281;
    msg.end_lon = 0.528090407848;
    msg.end_z = 0.887714502142;
    msg.end_z_units = 83U;
    msg.lradius = 0.844041071079;
    msg.flags = 59U;
    msg.x = 0.387872634944;
    msg.y = 0.728915773489;
    msg.z = 0.948252163937;
    msg.vx = 0.128758831788;
    msg.vy = 0.931763436593;
    msg.vz = 0.526040753812;
    msg.course_error = 0.865331728759;
    msg.eta = 21694U;

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
    msg.setTimeStamp(0.816485059686);
    msg.setSource(32122U);
    msg.setSourceEntity(112U);
    msg.setDestination(46325U);
    msg.setDestinationEntity(33U);
    msg.path_ref = 57506544U;
    msg.start_lat = 0.482970626354;
    msg.start_lon = 0.0664390634434;
    msg.start_z = 0.949872010402;
    msg.start_z_units = 133U;
    msg.end_lat = 0.474783707443;
    msg.end_lon = 0.911507197097;
    msg.end_z = 0.859139376123;
    msg.end_z_units = 237U;
    msg.lradius = 0.493693618022;
    msg.flags = 95U;
    msg.x = 0.940024296539;
    msg.y = 0.65782209174;
    msg.z = 0.339833079688;
    msg.vx = 0.759666012638;
    msg.vy = 0.902824180426;
    msg.vz = 0.955823361199;
    msg.course_error = 0.637913048548;
    msg.eta = 59480U;

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
    msg.setTimeStamp(0.609977966574);
    msg.setSource(46424U);
    msg.setSourceEntity(134U);
    msg.setDestination(19453U);
    msg.setDestinationEntity(152U);
    msg.path_ref = 3964345243U;
    msg.start_lat = 0.344173491708;
    msg.start_lon = 0.472059093298;
    msg.start_z = 0.484970734742;
    msg.start_z_units = 81U;
    msg.end_lat = 0.0376131969272;
    msg.end_lon = 0.816370662308;
    msg.end_z = 0.648188334546;
    msg.end_z_units = 240U;
    msg.lradius = 0.887532211844;
    msg.flags = 4U;
    msg.x = 0.719315392717;
    msg.y = 0.0790974144163;
    msg.z = 0.820256552603;
    msg.vx = 0.290735970103;
    msg.vy = 0.230162305753;
    msg.vz = 0.585749455687;
    msg.course_error = 0.802919712084;
    msg.eta = 14935U;

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
    msg.setTimeStamp(0.335821136411);
    msg.setSource(53944U);
    msg.setSourceEntity(170U);
    msg.setDestination(53994U);
    msg.setDestinationEntity(81U);
    msg.k = 0.13431248304;
    msg.m = 0.681828880079;
    msg.n = 0.7345655012;

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
    msg.setTimeStamp(0.280636584281);
    msg.setSource(7387U);
    msg.setSourceEntity(47U);
    msg.setDestination(14560U);
    msg.setDestinationEntity(24U);
    msg.k = 0.864849071923;
    msg.m = 0.891361272212;
    msg.n = 0.411395878655;

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
    msg.setTimeStamp(0.796572230328);
    msg.setSource(26624U);
    msg.setSourceEntity(17U);
    msg.setDestination(52258U);
    msg.setDestinationEntity(239U);
    msg.k = 0.0274313507969;
    msg.m = 0.810850764618;
    msg.n = 0.981076000199;

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
    msg.setTimeStamp(0.0598559164224);
    msg.setSource(4607U);
    msg.setSourceEntity(18U);
    msg.setDestination(43293U);
    msg.setDestinationEntity(177U);
    msg.p = 0.935364954492;
    msg.i = 0.185425300965;
    msg.d = 0.890802508773;
    msg.a = 0.98269647944;

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
    msg.setTimeStamp(0.148766261784);
    msg.setSource(28580U);
    msg.setSourceEntity(41U);
    msg.setDestination(23290U);
    msg.setDestinationEntity(60U);
    msg.p = 0.259335714249;
    msg.i = 0.950123342647;
    msg.d = 0.763886567746;
    msg.a = 0.554727001611;

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
    msg.setTimeStamp(0.493095607623);
    msg.setSource(31534U);
    msg.setSourceEntity(212U);
    msg.setDestination(28937U);
    msg.setDestinationEntity(102U);
    msg.p = 0.299358778176;
    msg.i = 0.320203420802;
    msg.d = 0.0361167036528;
    msg.a = 0.913505658223;

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
    msg.setTimeStamp(0.555617861113);
    msg.setSource(31425U);
    msg.setSourceEntity(237U);
    msg.setDestination(58628U);
    msg.setDestinationEntity(83U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.631556090501);
    msg.setSource(5215U);
    msg.setSourceEntity(139U);
    msg.setDestination(10128U);
    msg.setDestinationEntity(116U);
    msg.op = 37U;

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
    msg.setTimeStamp(0.695949748828);
    msg.setSource(20064U);
    msg.setSourceEntity(139U);
    msg.setDestination(63250U);
    msg.setDestinationEntity(177U);
    msg.op = 3U;

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
    msg.setTimeStamp(0.162626550203);
    msg.setSource(62515U);
    msg.setSourceEntity(195U);
    msg.setDestination(15397U);
    msg.setDestinationEntity(6U);
    msg.x = 0.119153670838;
    msg.y = 0.508929598708;
    msg.z = 0.0990841263791;
    msg.vx = 0.838848378204;
    msg.vy = 0.00054258208262;
    msg.vz = 0.104234308237;
    msg.ax = 0.52456707516;
    msg.ay = 0.121070840737;
    msg.az = 0.223312671705;
    msg.flags = 28645U;

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
    msg.setTimeStamp(0.0796418830057);
    msg.setSource(21673U);
    msg.setSourceEntity(164U);
    msg.setDestination(35608U);
    msg.setDestinationEntity(66U);
    msg.x = 0.839283785798;
    msg.y = 0.324085833488;
    msg.z = 0.707805914757;
    msg.vx = 0.720905923543;
    msg.vy = 0.658925362131;
    msg.vz = 0.134708900261;
    msg.ax = 0.783062411637;
    msg.ay = 0.385108524047;
    msg.az = 0.0214970165424;
    msg.flags = 17229U;

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
    msg.setTimeStamp(0.21799690354);
    msg.setSource(29101U);
    msg.setSourceEntity(105U);
    msg.setDestination(44785U);
    msg.setDestinationEntity(245U);
    msg.x = 0.950250736697;
    msg.y = 0.620294605414;
    msg.z = 0.448988035926;
    msg.vx = 0.127183841398;
    msg.vy = 0.364384944674;
    msg.vz = 0.376909172237;
    msg.ax = 0.0790337017631;
    msg.ay = 0.841862444355;
    msg.az = 0.539179474542;
    msg.flags = 13035U;

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
    msg.setTimeStamp(0.359802732368);
    msg.setSource(32174U);
    msg.setSourceEntity(194U);
    msg.setDestination(36022U);
    msg.setDestinationEntity(99U);
    msg.value = 0.345967287372;

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
    msg.setTimeStamp(0.179543152554);
    msg.setSource(13108U);
    msg.setSourceEntity(137U);
    msg.setDestination(59421U);
    msg.setDestinationEntity(117U);
    msg.value = 0.807109878615;

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
    msg.setTimeStamp(0.793423596149);
    msg.setSource(51513U);
    msg.setSourceEntity(180U);
    msg.setDestination(53837U);
    msg.setDestinationEntity(49U);
    msg.value = 0.838594497811;

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
    msg.setTimeStamp(0.328012401121);
    msg.setSource(14999U);
    msg.setSourceEntity(206U);
    msg.setDestination(39193U);
    msg.setDestinationEntity(225U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 46644639U;
    tmp_msg_0.start_lat = 0.314998142952;
    tmp_msg_0.start_lon = 0.630363095005;
    tmp_msg_0.start_z = 0.596689235828;
    tmp_msg_0.start_z_units = 97U;
    tmp_msg_0.end_lat = 0.0923648336519;
    tmp_msg_0.end_lon = 0.579266382014;
    tmp_msg_0.end_z = 0.814795101591;
    tmp_msg_0.end_z_units = 76U;
    tmp_msg_0.speed = 0.160819272417;
    tmp_msg_0.speed_units = 53U;
    tmp_msg_0.lradius = 0.0343037429039;
    tmp_msg_0.flags = 200U;
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
    msg.setTimeStamp(0.886870767729);
    msg.setSource(2546U);
    msg.setSourceEntity(221U);
    msg.setDestination(17687U);
    msg.setDestinationEntity(201U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 127097273U;
    tmp_msg_0.start_lat = 0.176563156485;
    tmp_msg_0.start_lon = 0.733393522657;
    tmp_msg_0.start_z = 0.131103675506;
    tmp_msg_0.start_z_units = 58U;
    tmp_msg_0.end_lat = 0.0137064231046;
    tmp_msg_0.end_lon = 0.157723786125;
    tmp_msg_0.end_z = 0.774986034883;
    tmp_msg_0.end_z_units = 68U;
    tmp_msg_0.speed = 0.789344349877;
    tmp_msg_0.speed_units = 0U;
    tmp_msg_0.lradius = 0.130104525338;
    tmp_msg_0.flags = 176U;
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
    msg.setTimeStamp(0.373468194022);
    msg.setSource(40267U);
    msg.setSourceEntity(233U);
    msg.setDestination(34411U);
    msg.setDestinationEntity(224U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 376945890U;
    tmp_msg_0.start_lat = 0.407489584162;
    tmp_msg_0.start_lon = 0.475937684155;
    tmp_msg_0.start_z = 0.0496177250253;
    tmp_msg_0.start_z_units = 38U;
    tmp_msg_0.end_lat = 0.252208874327;
    tmp_msg_0.end_lon = 0.957880015948;
    tmp_msg_0.end_z = 0.380583673272;
    tmp_msg_0.end_z_units = 56U;
    tmp_msg_0.speed = 0.283981031708;
    tmp_msg_0.speed_units = 82U;
    tmp_msg_0.lradius = 0.742908889515;
    tmp_msg_0.flags = 65U;
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
    msg.setTimeStamp(0.0221888148323);
    msg.setSource(64734U);
    msg.setSourceEntity(75U);
    msg.setDestination(26403U);
    msg.setDestinationEntity(58U);
    msg.timeout = 42076U;
    msg.lat = 0.204192013843;
    msg.lon = 0.724896406003;
    msg.z = 0.687887875838;
    msg.z_units = 176U;
    msg.speed = 0.836014827431;
    msg.speed_units = 88U;
    msg.roll = 0.377333906554;
    msg.pitch = 0.726243020556;
    msg.yaw = 0.800124498389;
    msg.custom.assign("ITJFOGLJBSBKRZPSFDWYEYXYCIYAFQUQMYREPRFTAXUNOTGRKWBBZCIQIVIHHJPRGLUEDUCMHSVVHAGHSCGNZEFVXZCAACWNPDMPHTKBLVRUNLKQUQIKNLFJTGUWBPDJQOJTMMHBUSGOKRKPLXXOWJRSLZOFANSTMZDDMBM");

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
    msg.setTimeStamp(0.748293568986);
    msg.setSource(34911U);
    msg.setSourceEntity(134U);
    msg.setDestination(16115U);
    msg.setDestinationEntity(16U);
    msg.timeout = 30765U;
    msg.lat = 0.589544275657;
    msg.lon = 0.594599615972;
    msg.z = 0.975852221329;
    msg.z_units = 220U;
    msg.speed = 0.514566056371;
    msg.speed_units = 61U;
    msg.roll = 0.123221873656;
    msg.pitch = 0.732090968127;
    msg.yaw = 0.385791313516;
    msg.custom.assign("JJBTCZOWSTUQZZVHXLHINUWEJGLSHBINMBSOTDFTUKXVMKSQFVLMIMRWVGPRVMIAECTKHRAGMBCYNUYGDUKNDDWRWUWUPFREMZUBSBOCLKVBAGBOSKFKKJDEHJNXPMYVGHJRCEYSQCQTIPGKNFWFVXEPJDCEYGYAAYYXZWKOLXQLMTDVNPRFHYQBXIXAMUAZYLTPCPFEQLRTUIO");

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
    msg.setTimeStamp(0.204026654493);
    msg.setSource(3030U);
    msg.setSourceEntity(55U);
    msg.setDestination(2321U);
    msg.setDestinationEntity(153U);
    msg.timeout = 1539U;
    msg.lat = 0.187673146142;
    msg.lon = 0.190616778562;
    msg.z = 0.249498658146;
    msg.z_units = 60U;
    msg.speed = 0.399434006954;
    msg.speed_units = 24U;
    msg.roll = 0.0217647266119;
    msg.pitch = 0.288519087683;
    msg.yaw = 0.526223142866;
    msg.custom.assign("CDYLIPTBHJUWHBIKHNXFUBPROMIBHBIBXCCFZERXJJKZVDOJTRCZOULEGMFKPNKANFNADVCOQSTZMIHLRLPJDHPUJNDRSHVNYGBDSXCSSMIVXPKAOPSDARQULGCEZIYZDVBYYBFGVNLTFTIZJZWGMPWELGMIGWAYFASTEAQQEHLXQWUKQKUSVMKWYXEERUQATDQHMRXJTEKFWXAPIMDECLCUKXAMRZYJFJSQVUWYGWQVNLVOP");

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
    msg.setTimeStamp(0.896304987451);
    msg.setSource(50211U);
    msg.setSourceEntity(69U);
    msg.setDestination(32924U);
    msg.setDestinationEntity(146U);
    msg.timeout = 42288U;
    msg.lat = 0.704023973274;
    msg.lon = 0.910312208409;
    msg.z = 0.48067637991;
    msg.z_units = 136U;
    msg.speed = 0.635487695876;
    msg.speed_units = 161U;
    msg.duration = 18654U;
    msg.radius = 0.481904802984;
    msg.flags = 157U;
    msg.custom.assign("WARZVJDKAZPITQBYXIXGOVCMQKEHRXVEKZIWGLBJAPOWCJMTURKZLXJHQURXHTGEYYRDMVTWCQULLNYKQVSGVICGQNWTPVGQCCCTALACFWYBDUTMJWRFUXNENVLFIKBOHFUSMRQSHSPSNIOHMMAXLQDNAGPYRHEROBHMNAMFCCVUJYOINDZDMESGLOLZIZKPJPDSBBXOSFZFYHILGUTNUKSATIFDPUPZEPWYEJHYDXKAEOSGFRQBWZKJXT");

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
    msg.setTimeStamp(0.812341965992);
    msg.setSource(45194U);
    msg.setSourceEntity(115U);
    msg.setDestination(38338U);
    msg.setDestinationEntity(247U);
    msg.timeout = 44070U;
    msg.lat = 0.525381813101;
    msg.lon = 0.246567151787;
    msg.z = 0.75326461302;
    msg.z_units = 132U;
    msg.speed = 0.28778915256;
    msg.speed_units = 188U;
    msg.duration = 2841U;
    msg.radius = 0.540326396948;
    msg.flags = 110U;
    msg.custom.assign("RDRBHLNQFRNSKNPWUZCZNBBQESXPEHVVOFUQIYLATLFESUSJFWLKTEVXMHDGYROGPVAPQOJCLJPZCKTPKHJWSXBPXEHKAMCBAMTCPICZLJNCWGEZIXWVTAYQTVZOZVYXLCFRQIFMUSNRAL");

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
    msg.setTimeStamp(0.00171909923896);
    msg.setSource(33894U);
    msg.setSourceEntity(231U);
    msg.setDestination(65353U);
    msg.setDestinationEntity(238U);
    msg.timeout = 61373U;
    msg.lat = 0.720198014365;
    msg.lon = 0.766622498634;
    msg.z = 0.122099022872;
    msg.z_units = 90U;
    msg.speed = 0.380845703403;
    msg.speed_units = 169U;
    msg.duration = 12405U;
    msg.radius = 0.872280210821;
    msg.flags = 201U;
    msg.custom.assign("DHBRYHAJGMSZGXQZPRIHYOUVXMJFAQGYWUWZDTIUVCNBVCBSSCLRKLESKGLPXVIKAXZOHWQGGBXTSTHMLSFCDGZSDUKUOEKRVCWEOTBXJVQWFIAEUJAPPIOEKZXHTFMASTZLVMTNOXAPPQIQG");

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
    msg.setTimeStamp(0.815086377503);
    msg.setSource(37322U);
    msg.setSourceEntity(237U);
    msg.setDestination(33586U);
    msg.setDestinationEntity(135U);
    msg.custom.assign("MEAIBETJQOTDQMKFAZTEQNZYDNHX");

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
    msg.setTimeStamp(0.70181437322);
    msg.setSource(6666U);
    msg.setSourceEntity(76U);
    msg.setDestination(9476U);
    msg.setDestinationEntity(217U);
    msg.custom.assign("EXXKCNLDKQF");

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
    msg.setTimeStamp(0.49332327972);
    msg.setSource(6463U);
    msg.setSourceEntity(10U);
    msg.setDestination(32829U);
    msg.setDestinationEntity(188U);
    msg.custom.assign("HWBYRBLCPZAMMVLEYQONTOUHTXHLTUXHMHWAYROYVCWYOJBSAOSKMLFZDBPFEKGMTYIWSUBGYFRFCLBPDEIEKZUTWGIUYXWCMUTCTISXNHAAFXGTVNRZQQPQOISWQVSBNWLQFSTIUBZBPRXVWLQMKEDDAKSVIHPIJXQOPEGGARAHUKQGMHLXZJSIRRRRFMNJNFKVOCXBNVGZCPCDZKCFAZUQJPEYJAXJMNVKDDZLJOEE");

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
    msg.setTimeStamp(0.664903592537);
    msg.setSource(27679U);
    msg.setSourceEntity(128U);
    msg.setDestination(17364U);
    msg.setDestinationEntity(116U);
    msg.timeout = 33247U;
    msg.lat = 0.966997285929;
    msg.lon = 0.795650051361;
    msg.z = 0.341421772047;
    msg.z_units = 220U;
    msg.duration = 40074U;
    msg.speed = 0.7296741159;
    msg.speed_units = 142U;
    msg.type = 163U;
    msg.radius = 0.316941612254;
    msg.length = 0.161767531029;
    msg.bearing = 0.20991236831;
    msg.direction = 20U;
    msg.custom.assign("OOVCNTPEHEZDPJZBGQDDUKTRNHSUFJUJWMBTXAXMHNAVQQMCSTHXCPLRPNGXFUVDIFIAYNHIJFWKASWKGEXQFZVZXGIQDFYBWOYIKRRFOTPADCECITBAOQSEAYDKSEXALMGYFN");

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
    msg.setTimeStamp(0.92983082708);
    msg.setSource(19362U);
    msg.setSourceEntity(57U);
    msg.setDestination(17874U);
    msg.setDestinationEntity(203U);
    msg.timeout = 20417U;
    msg.lat = 0.196484277226;
    msg.lon = 0.309142304267;
    msg.z = 0.488249111395;
    msg.z_units = 96U;
    msg.duration = 9027U;
    msg.speed = 0.639158933835;
    msg.speed_units = 52U;
    msg.type = 226U;
    msg.radius = 0.365796882687;
    msg.length = 0.789553087498;
    msg.bearing = 0.173594375064;
    msg.direction = 104U;
    msg.custom.assign("LQXUDIBFPFRNEJLNGSUIKQVCMNFAJWCSZSDKNLBSKGRTNLJMMVTCNOATZWZBVFQOXLXRVYOLVAQPPCGHRXJZFHCVQCJPQXVGDIUEUIYBMKYKHLSZNMCITSFTUSVXZLKCWGAZEPMIOYHMQBAOFOEWHLI");

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
    msg.setTimeStamp(0.0750552699681);
    msg.setSource(27098U);
    msg.setSourceEntity(171U);
    msg.setDestination(62710U);
    msg.setDestinationEntity(58U);
    msg.timeout = 32914U;
    msg.lat = 0.851274743498;
    msg.lon = 0.429404082579;
    msg.z = 0.602314797147;
    msg.z_units = 254U;
    msg.duration = 61256U;
    msg.speed = 0.85787881832;
    msg.speed_units = 231U;
    msg.type = 64U;
    msg.radius = 0.392339137013;
    msg.length = 0.064694747618;
    msg.bearing = 0.706880804412;
    msg.direction = 119U;
    msg.custom.assign("CTSRONMBBVPBEZMQYGHOHJXQLBJCUZRHATRWEEPUWAJNPBILTGGAQNCHJKJJTIQCEFZVSTHXVSPKFQRJVWYPMHNCWFIWNWAQMKFRFIAPBZWCXLMBZNDNBGPXLLSRCXUXBRIEGGMCH");

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
    msg.setTimeStamp(0.406710564678);
    msg.setSource(38524U);
    msg.setSourceEntity(70U);
    msg.setDestination(2185U);
    msg.setDestinationEntity(24U);
    msg.duration = 37846U;
    msg.custom.assign("CZCCRYRVRAGUNQEYPIMWMONFYXTGPZXFJVKZHDDIRVHXQVBZDXAFBICXHTTSKLRZQYSSLCONFSLDAEYLQSXSJRJLKMKYNSJNZXTOWCOUTFDPTBWZOHJTHJLYBVOIWQXBOEKVNUOPGGBBCDWVSOEAPHTAAK");

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
    msg.setTimeStamp(0.319420300208);
    msg.setSource(21666U);
    msg.setSourceEntity(226U);
    msg.setDestination(45420U);
    msg.setDestinationEntity(79U);
    msg.duration = 10199U;
    msg.custom.assign("QEPGHYAGUQYVVTOFMKGRJHBXBDEHPZYPNXZFSWJJBTDCPSUZLNCTVWYLDC");

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
    msg.setTimeStamp(0.0346099564958);
    msg.setSource(22313U);
    msg.setSourceEntity(102U);
    msg.setDestination(50197U);
    msg.setDestinationEntity(213U);
    msg.duration = 3439U;
    msg.custom.assign("ZTTCAZKITUCIZLINLTDKRSGBBOLUYQWWUPAEMDWNUVMROVCJCMTNXEOSGHEO");

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
    msg.setTimeStamp(0.179696360882);
    msg.setSource(43278U);
    msg.setSourceEntity(158U);
    msg.setDestination(14996U);
    msg.setDestinationEntity(232U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.285629597257;
    tmp_msg_0.off = 0.0726034278317;
    msg.control.set(tmp_msg_0);
    msg.duration = 12071U;
    msg.custom.assign("SCXDVTCENPFBLTFZWLZTHVUIVKTKJCHTURBFMFPFKVAORTDGLSQZWTGNONIOMLJRCRPUNXNUHOVCSIVOLPDJUVFQSNAEPMMGPIBKXUASAFXKKWHWIPPKAHJBASEELR");

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
    msg.setTimeStamp(0.150345526601);
    msg.setSource(20619U);
    msg.setSourceEntity(220U);
    msg.setDestination(11766U);
    msg.setDestinationEntity(30U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.594684229889;
    msg.control.set(tmp_msg_0);
    msg.duration = 55067U;
    msg.custom.assign("CRFPRPIKTWDGSQQQUUEMTEXWEYUHJCAHHFORHPYMBZPHVTSSWBZWYWHQPRAWQNSRIIXGNVTBLDWXJNIPUTMGBZRKGWJTZNZYGRGFLOYQAXVNYNKVBGQLOLIKNDUXECHPRAEZANLUVEKKRIRYCJUASDDUOOMNITJBUWMEJIYJSOBMCBSXHEVDBDVQEPMCPXKEICWVAZHMKLFSGQBTAPQHKFAKYMIVCLSJ");

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
    msg.setTimeStamp(0.694624068932);
    msg.setSource(22438U);
    msg.setSourceEntity(192U);
    msg.setDestination(11729U);
    msg.setDestinationEntity(159U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2690101110U;
    tmp_msg_0.start_lat = 0.817676431326;
    tmp_msg_0.start_lon = 0.605785468896;
    tmp_msg_0.start_z = 0.26664998715;
    tmp_msg_0.start_z_units = 91U;
    tmp_msg_0.end_lat = 0.652070781689;
    tmp_msg_0.end_lon = 0.931673512526;
    tmp_msg_0.end_z = 0.969688462938;
    tmp_msg_0.end_z_units = 12U;
    tmp_msg_0.speed = 0.25984239087;
    tmp_msg_0.speed_units = 65U;
    tmp_msg_0.lradius = 0.765405650036;
    tmp_msg_0.flags = 115U;
    msg.control.set(tmp_msg_0);
    msg.duration = 10517U;
    msg.custom.assign("CWFGOJVNHBFHYRNHJPYLQZEVMSLQESURIFJROWNGRAJUKDGBBVYIOIATSLWXXPYKTJSEZGAPESVTYPNMTWHBTCWVQKIMVSPSNWKCXDVXDYISPGXUGEFDKXRZVRNAIGOZ");

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
    msg.setTimeStamp(0.120901510353);
    msg.setSource(13550U);
    msg.setSourceEntity(245U);
    msg.setDestination(30541U);
    msg.setDestinationEntity(222U);
    msg.timeout = 35209U;
    msg.lat = 0.0820066354981;
    msg.lon = 0.499066686495;
    msg.z = 0.0318408219936;
    msg.z_units = 20U;
    msg.speed = 0.155085988519;
    msg.speed_units = 41U;
    msg.bearing = 0.19320952534;
    msg.cross_angle = 0.324044285821;
    msg.width = 0.702890368177;
    msg.length = 0.49189328526;
    msg.hstep = 0.320195411739;
    msg.coff = 126U;
    msg.alternation = 38U;
    msg.flags = 133U;
    msg.custom.assign("GVBINRABHFILOKXMCBCIMJDSUXEAHNPZQZSYKYKKXUIJXLEDCALTHNMRXYCDFIWSTPMASVEEWQBXZCGUIPZYRNMJUQJLGLHXHCQEBTVFWRFRXUTIBDVPFLZKT");

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
    msg.setTimeStamp(0.515810308219);
    msg.setSource(30968U);
    msg.setSourceEntity(246U);
    msg.setDestination(11581U);
    msg.setDestinationEntity(61U);
    msg.timeout = 14266U;
    msg.lat = 0.267584949802;
    msg.lon = 0.667621682775;
    msg.z = 0.225102944856;
    msg.z_units = 147U;
    msg.speed = 0.532854267932;
    msg.speed_units = 58U;
    msg.bearing = 0.26657748725;
    msg.cross_angle = 0.499510129164;
    msg.width = 0.557449867108;
    msg.length = 0.0534918900562;
    msg.hstep = 0.0347776701086;
    msg.coff = 72U;
    msg.alternation = 170U;
    msg.flags = 118U;
    msg.custom.assign("TDEHOGWUYFHERBK");

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
    msg.setTimeStamp(0.483888921668);
    msg.setSource(34190U);
    msg.setSourceEntity(8U);
    msg.setDestination(22742U);
    msg.setDestinationEntity(127U);
    msg.timeout = 60452U;
    msg.lat = 0.679854777864;
    msg.lon = 0.680212735323;
    msg.z = 0.923328636684;
    msg.z_units = 230U;
    msg.speed = 0.662934203567;
    msg.speed_units = 237U;
    msg.bearing = 0.525255270556;
    msg.cross_angle = 0.220851970093;
    msg.width = 0.852652939942;
    msg.length = 0.267589920045;
    msg.hstep = 0.970209927053;
    msg.coff = 60U;
    msg.alternation = 72U;
    msg.flags = 141U;
    msg.custom.assign("OXTZRBLLPWFXYCHRMHWLIIBOKNCDZRVRDQOCKWQURXEGPTEHWMVZDIONORQIMRDHATUBADAGZUBXUAQIZCAKOPAOVOYNEXTPG");

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
    msg.setTimeStamp(0.911487966357);
    msg.setSource(27623U);
    msg.setSourceEntity(118U);
    msg.setDestination(4082U);
    msg.setDestinationEntity(136U);
    msg.timeout = 41017U;
    msg.lat = 0.572234207438;
    msg.lon = 0.312719792087;
    msg.z = 0.270767708581;
    msg.z_units = 110U;
    msg.speed = 0.752440469318;
    msg.speed_units = 223U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.133162588043;
    tmp_msg_0.y = 0.210655946044;
    tmp_msg_0.z = 0.969337908242;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JOYJNIBLOANULABFLELQOOJXNDUXPQBSQVVJIEFFYAGHTTUQEPRHISX");

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
    msg.setTimeStamp(0.138513900299);
    msg.setSource(51135U);
    msg.setSourceEntity(91U);
    msg.setDestination(47296U);
    msg.setDestinationEntity(225U);
    msg.timeout = 8731U;
    msg.lat = 0.1480713998;
    msg.lon = 0.8937667908;
    msg.z = 0.147227860519;
    msg.z_units = 108U;
    msg.speed = 0.66194646377;
    msg.speed_units = 149U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.47550070508;
    tmp_msg_0.y = 0.0127728123983;
    tmp_msg_0.z = 0.341354526605;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GTZCWGOXYWSTXOFIXWB");

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
    msg.setTimeStamp(0.460198120377);
    msg.setSource(27127U);
    msg.setSourceEntity(47U);
    msg.setDestination(129U);
    msg.setDestinationEntity(116U);
    msg.timeout = 25336U;
    msg.lat = 0.332184566871;
    msg.lon = 0.506175978957;
    msg.z = 0.418919201113;
    msg.z_units = 5U;
    msg.speed = 0.652411631561;
    msg.speed_units = 116U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.248128240768;
    tmp_msg_0.y = 0.276197416634;
    tmp_msg_0.z = 0.42021795779;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NMFGWIGGNTYGZVUPHQQKRPPNZHPLAGFDSBFCMKIXQVHBPORSTSZRIAWHZIHMRHKUHJGMNROZRDDVYIMCYSZUCDUPESUANDMQNBFZFIBYKWVYMCTXOPCFJEGQZEAGASBMSX");

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
    msg.setTimeStamp(0.230725398185);
    msg.setSource(61747U);
    msg.setSourceEntity(80U);
    msg.setDestination(23328U);
    msg.setDestinationEntity(160U);
    msg.x = 0.301351106241;
    msg.y = 0.806310265728;
    msg.z = 0.340433542693;

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
    msg.setTimeStamp(0.0808990895648);
    msg.setSource(54313U);
    msg.setSourceEntity(47U);
    msg.setDestination(29143U);
    msg.setDestinationEntity(208U);
    msg.x = 0.802905173322;
    msg.y = 0.490475664337;
    msg.z = 0.737018578044;

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
    msg.setTimeStamp(0.158665046813);
    msg.setSource(39425U);
    msg.setSourceEntity(110U);
    msg.setDestination(11672U);
    msg.setDestinationEntity(27U);
    msg.x = 0.283392347197;
    msg.y = 0.934807000971;
    msg.z = 0.386293382301;

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
    msg.setTimeStamp(0.228026799082);
    msg.setSource(36507U);
    msg.setSourceEntity(48U);
    msg.setDestination(9299U);
    msg.setDestinationEntity(52U);
    msg.timeout = 57805U;
    msg.lat = 0.685779992683;
    msg.lon = 0.225944075937;
    msg.z = 0.28811564425;
    msg.z_units = 151U;
    msg.amplitude = 0.267287399418;
    msg.pitch = 0.280838821552;
    msg.speed = 0.933527510031;
    msg.speed_units = 118U;
    msg.custom.assign("KSLFBBKCKTWUPZGAUSSVKGVGDDLRJGBZGQJBHPYYFRVSYOPDLEVSCZAUGJOBZVCCXGHSYSQPBXCMRQJFRDJIGTGXAAUDBZYAEQKFOR");

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
    msg.setTimeStamp(0.0540691065926);
    msg.setSource(23194U);
    msg.setSourceEntity(14U);
    msg.setDestination(24894U);
    msg.setDestinationEntity(126U);
    msg.timeout = 28982U;
    msg.lat = 0.266056888546;
    msg.lon = 0.0179093876243;
    msg.z = 0.879826017838;
    msg.z_units = 228U;
    msg.amplitude = 0.24137150063;
    msg.pitch = 0.439906312357;
    msg.speed = 0.630196081086;
    msg.speed_units = 152U;
    msg.custom.assign("WDVMFAWJUMRRQXVYBQAJYOMFJALPMOCCDBSCEQPRUMTLEVHHWNJUHORGXFUCXXGFRXXSFDQYOEVVTEVYZLEZGJXKCONFZEZPUSVNGAPLYGSIAHJZQWHICZPNWNLPOWRDFLPMHILQDTDGGG");

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
    msg.setTimeStamp(0.602692421735);
    msg.setSource(39761U);
    msg.setSourceEntity(84U);
    msg.setDestination(33804U);
    msg.setDestinationEntity(45U);
    msg.timeout = 34340U;
    msg.lat = 0.774387121715;
    msg.lon = 0.16468955882;
    msg.z = 0.112522128001;
    msg.z_units = 176U;
    msg.amplitude = 0.980877964262;
    msg.pitch = 0.351923034763;
    msg.speed = 0.67572495914;
    msg.speed_units = 117U;
    msg.custom.assign("MTGNBMGXYKMXPDZFYKRHRLGOFZNKQTCPQTIIMOKQDXCSOWVBZXTYEKAUAGBIZDNNFZBWFUNSQEKQMQHGPBWWZTPYWFNJPRAHVFNXKGIUHISRJVWSHUJEJZXTNCJPOYVQGRYCDFAQFRRNPDJDGIDMWSURLJBCBQOBEAZJVSKBPECTEXDSWMHAEXJLSJUAQVVURYPLNZYIFIHUAVGPUOXLLORTCOKHIULDWSTLVYEAAMOVHCKMETMWF");

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
    msg.setTimeStamp(0.52509138035);
    msg.setSource(25673U);
    msg.setSourceEntity(140U);
    msg.setDestination(16774U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.0850557476891);
    msg.setSource(57530U);
    msg.setSourceEntity(173U);
    msg.setDestination(61494U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.0242461451626);
    msg.setSource(59732U);
    msg.setSourceEntity(122U);
    msg.setDestination(2582U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.0880101851316);
    msg.setSource(22467U);
    msg.setSourceEntity(196U);
    msg.setDestination(54820U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.410569707063;
    msg.lon = 0.346999208589;
    msg.z = 0.23298249621;
    msg.z_units = 180U;
    msg.radius = 0.0217112259087;
    msg.duration = 26253U;
    msg.speed = 0.775722721482;
    msg.speed_units = 199U;
    msg.popup_period = 8109U;
    msg.popup_duration = 25019U;
    msg.flags = 209U;
    msg.custom.assign("SHKPDIUZGYFEXCJDFUUBBWJNXQSPQA");

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
    msg.setTimeStamp(0.748836315749);
    msg.setSource(32976U);
    msg.setSourceEntity(90U);
    msg.setDestination(11983U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.765224736692;
    msg.lon = 0.934225353689;
    msg.z = 0.729610655439;
    msg.z_units = 128U;
    msg.radius = 0.856440496685;
    msg.duration = 61645U;
    msg.speed = 0.966423622442;
    msg.speed_units = 174U;
    msg.popup_period = 3798U;
    msg.popup_duration = 58116U;
    msg.flags = 208U;
    msg.custom.assign("QARCMGSDPWFUAFKRJXZJYDYHQOSJEWOZVXHNKVKNQDIGFKYYCNHS");

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
    msg.setTimeStamp(0.311731232152);
    msg.setSource(61320U);
    msg.setSourceEntity(232U);
    msg.setDestination(54401U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.763431036342;
    msg.lon = 0.290502423155;
    msg.z = 0.859423548893;
    msg.z_units = 222U;
    msg.radius = 0.773039401389;
    msg.duration = 42553U;
    msg.speed = 0.360043431339;
    msg.speed_units = 110U;
    msg.popup_period = 32459U;
    msg.popup_duration = 40139U;
    msg.flags = 185U;
    msg.custom.assign("QNJDTKTDHGVICJ");

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
    msg.setTimeStamp(0.0454766003101);
    msg.setSource(48114U);
    msg.setSourceEntity(26U);
    msg.setDestination(54231U);
    msg.setDestinationEntity(168U);
    msg.timeout = 58669U;
    msg.flags = 195U;
    msg.lat = 0.972285679963;
    msg.lon = 0.658716893217;
    msg.start_z = 0.650019305639;
    msg.start_z_units = 13U;
    msg.end_z = 0.484246421387;
    msg.end_z_units = 251U;
    msg.radius = 0.260336560764;
    msg.speed = 0.441218986529;
    msg.speed_units = 248U;
    msg.custom.assign("UPEEBUSAXWXDRGUCDGXAODIKPLKWKWIPZTQBHOVOUMJJNFMFZSNHFAZBFWATPSLLCJVTZQWKDICRMQKEXLDBFWLSUDTQMJQSLOWYKCDCMUPFNRPVZNGSWEOSPZFCSTIHMJJHEPSGKCNJNVLPVHRZQAVKGGCAYYYJHREQANZEHBWBUUUXFEAIBZGOYXLQ");

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
    msg.setTimeStamp(0.826572124809);
    msg.setSource(11594U);
    msg.setSourceEntity(23U);
    msg.setDestination(36892U);
    msg.setDestinationEntity(216U);
    msg.timeout = 51879U;
    msg.flags = 221U;
    msg.lat = 0.429673514045;
    msg.lon = 0.118655624798;
    msg.start_z = 0.353597207345;
    msg.start_z_units = 26U;
    msg.end_z = 0.359775531612;
    msg.end_z_units = 133U;
    msg.radius = 0.227008773836;
    msg.speed = 0.0558291854861;
    msg.speed_units = 232U;
    msg.custom.assign("VIDFCUTZSGZXCVWTXNNQXUTFLYRLSGIABODWQMOEPLQJHETIAYRZKZXVSAIRGCUUSGETCIMXWZOANAHLYQHSDUQWWLSOSGLVVTAEVRSNAUGYFHKVNEKZPXJWCJYCSBIJQFRGUGFPIQBHGZAQNFBMBOLTYNZKIAWPLEFDTWNXDDHPHCCRUDHBOPMKPROBN");

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
    msg.setTimeStamp(0.0906901115957);
    msg.setSource(8080U);
    msg.setSourceEntity(105U);
    msg.setDestination(1528U);
    msg.setDestinationEntity(210U);
    msg.timeout = 44795U;
    msg.flags = 53U;
    msg.lat = 0.856028315822;
    msg.lon = 0.810665501731;
    msg.start_z = 0.431604229828;
    msg.start_z_units = 253U;
    msg.end_z = 0.641019457553;
    msg.end_z_units = 114U;
    msg.radius = 0.00770004063465;
    msg.speed = 0.415707736224;
    msg.speed_units = 18U;
    msg.custom.assign("QJJWJGPULQCLMWWUDBZOIJCDDZQKIBWDESHDVNSYFZHWZEFHCXAIVWYBHGYBTNFMAPTAPRAJDXSRIMRPNOTRAUBXQARBVWUTNOGCYFMFEGLJUMPRWZPZADWOUTSRNPLIXBQKOVBIFKRVGKYHEKEVTLJQZCXHJVKGYJAHTCBQMXKSSZGXESFPHELXCKAGFPOYZNGRMMFBOHLSITQNNNDLQHKERMD");

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
    msg.setTimeStamp(0.103444853885);
    msg.setSource(16167U);
    msg.setSourceEntity(195U);
    msg.setDestination(4057U);
    msg.setDestinationEntity(200U);
    msg.timeout = 22746U;
    msg.lat = 0.010658501989;
    msg.lon = 0.576168325649;
    msg.z = 0.0127768003356;
    msg.z_units = 247U;
    msg.speed = 0.897487185719;
    msg.speed_units = 190U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.172189741406;
    tmp_msg_0.y = 0.526494265081;
    tmp_msg_0.z = 0.154416807002;
    tmp_msg_0.t = 0.318255231273;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZOVKSZLPHXQUFGJOVXWLYJMWICHVNHMWKRLBNHYBSVMSRZOIHXHNROPDERYETZCPMGDJSSHJELQSBDMQDGNTEKRGAVNCRYGKZJQTWJVHESAGLFCPATEZARJRWEMQISIIFBGFB");

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
    msg.setTimeStamp(0.479845486451);
    msg.setSource(58836U);
    msg.setSourceEntity(215U);
    msg.setDestination(44466U);
    msg.setDestinationEntity(217U);
    msg.timeout = 38980U;
    msg.lat = 0.0618899024621;
    msg.lon = 0.202194831303;
    msg.z = 0.843884688448;
    msg.z_units = 72U;
    msg.speed = 0.198089986621;
    msg.speed_units = 250U;
    msg.custom.assign("HULZSVWMAWCMSSJPALFWIKJSVLYPSKIRWGIHGERAJZTANZFPDENNIGQCEASLXLYEOZHXWBZOEEQTVM");

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
    msg.setTimeStamp(0.468024191465);
    msg.setSource(42519U);
    msg.setSourceEntity(225U);
    msg.setDestination(19643U);
    msg.setDestinationEntity(132U);
    msg.timeout = 47941U;
    msg.lat = 0.758733838286;
    msg.lon = 0.342720771205;
    msg.z = 0.552155277662;
    msg.z_units = 66U;
    msg.speed = 0.107517438112;
    msg.speed_units = 88U;
    msg.custom.assign("CDPOVGDXEEJBWENLTCSFYCRLMKXCZWPJYAUBLOHQBVEQNQGWSNBPNKQDXHKJGDUONQTRZKDZMPVNDIVUMQQSZFROKZSEIBTFHMPGQGETSTBIEVLIZMCAFGOPEPYSYCV");

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
    msg.setTimeStamp(0.873138332853);
    msg.setSource(52059U);
    msg.setSourceEntity(32U);
    msg.setDestination(63259U);
    msg.setDestinationEntity(108U);
    msg.x = 0.948145644019;
    msg.y = 0.162076386735;
    msg.z = 0.636003041886;
    msg.t = 0.213612920525;

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
    msg.setTimeStamp(0.664402106415);
    msg.setSource(20451U);
    msg.setSourceEntity(172U);
    msg.setDestination(55143U);
    msg.setDestinationEntity(158U);
    msg.x = 0.893180676964;
    msg.y = 0.84839004114;
    msg.z = 0.477405673081;
    msg.t = 0.503775292918;

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
    msg.setTimeStamp(0.356293882934);
    msg.setSource(52405U);
    msg.setSourceEntity(53U);
    msg.setDestination(14790U);
    msg.setDestinationEntity(54U);
    msg.x = 0.512553336619;
    msg.y = 0.263538597842;
    msg.z = 0.38781427227;
    msg.t = 0.761087285052;

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
    msg.setTimeStamp(0.0475341366953);
    msg.setSource(44122U);
    msg.setSourceEntity(44U);
    msg.setDestination(31913U);
    msg.setDestinationEntity(60U);
    msg.timeout = 59917U;
    msg.name.assign("NJMPHGHXHSVQBCBMCXOBLETIFUNNSEOFUYMGGURGNAWWCJXCCNTPTTCDZVLLTAVZQDPNSUKBQJWEYNABZPZUZLHYECKRMGSORASDUIWONNIAGPZHOVPKCKYJRHXWEOWIDYSVKKKIVLGYOLIQBZUWP");
    msg.custom.assign("IYCCMCSKSEITAESCXFHHGNSMVXBSVJTNZPLSUKWZZODOFGUYZXLZCOCQJQQLVBDSQAAYLRJPYWPCTGJKGYNQRXBKPRLNGVRKEATEWNMAMWHYMEMAWWHFHYTYJBOXOHZVOROEPAPYVXGLLGMUEFHQKDJRISRGFIHBKUJDWEAQIBDPOITFVLKPWXNWIDDZBTQBBODNNMKGMSDZTRGUAJQXWKUNUXTPZVCTFEJEFHCRCIUSVQUBDPNXMU");

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
    msg.setTimeStamp(0.568193331664);
    msg.setSource(34610U);
    msg.setSourceEntity(197U);
    msg.setDestination(65382U);
    msg.setDestinationEntity(29U);
    msg.timeout = 8537U;
    msg.name.assign("VHJESWZYHHAOTGZJFOMQBNNQXUYCGFDXJOYLSSBWPXUKHUDKY");
    msg.custom.assign("ZRTLAVYVJFXFZFSWGOLPFBEHCNWJKNKMNFPNAAOBNHLDXEQRBPIHWJHDZYUNBFFYWHSRZOVDESZOCXYJMCGAYETHXMMIQFRZCVEHBMDCTMAKEINXDUSXJQIGAJUOULPTYDWUGWBBTGAKAUWILYPIUXSGQYGQVCJFSCSRMULJRCPZWZFJBRSENQTLKIITZOBGQKMSVXOPPMXKKTCQJINHQDDSRVAUHROVWPAUVOIBECYOZRDNLTPVGLKQ");

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
    msg.setTimeStamp(0.561292168222);
    msg.setSource(20549U);
    msg.setSourceEntity(131U);
    msg.setDestination(7850U);
    msg.setDestinationEntity(124U);
    msg.timeout = 66U;
    msg.name.assign("XSCTGMEJYSEMWWNNFAVZZUWBBDKKUSDTJHORJQKZWUOQNQJVOYYKEKSVILLCTDNXIYMXRSQVZVOPTAKRUPSSDEORGFKDDDEBTFBXNLMWLYQGENNZABBMGIABXFRFHLBRCFJHNPWRAHUGUAVXUNPASWPTODJTSFIGJAEZZFQIICGOCLBOVBLVIZMVHZTCUMEAHYCTIFXQRJOGPJPHWRLXFDUEYKPMYLHAXQTWJPRKQVSLXICGIMYH");
    msg.custom.assign("OLKKLWYECXNJPJSDBDCAWZPWBZJXXZCVUEFIRTLOWNRRRNIANAKZOIGZHBPHYPLXCEPFVCGRVSUSHTEAJHUPOKALZXBWDJHMVLPLNQMSWVMLWFTTPDTNAAVVXBZ");

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
    msg.setTimeStamp(0.0507412431452);
    msg.setSource(64013U);
    msg.setSourceEntity(45U);
    msg.setDestination(44573U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.64186635895;
    msg.lon = 0.204280996535;
    msg.z = 0.405743922141;
    msg.z_units = 127U;
    msg.speed = 0.824198279039;
    msg.speed_units = 180U;
    msg.start_time = 0.564797400884;
    msg.custom.assign("VDHWGCVMALRDU");

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
    msg.setTimeStamp(0.250591886885);
    msg.setSource(23672U);
    msg.setSourceEntity(132U);
    msg.setDestination(19533U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.415723183551;
    msg.lon = 0.0876031342866;
    msg.z = 0.995542582881;
    msg.z_units = 192U;
    msg.speed = 0.0547641937326;
    msg.speed_units = 228U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.174359956577;
    tmp_msg_0.y = 0.144431593345;
    tmp_msg_0.z = 0.777564654978;
    tmp_msg_0.t = 0.390876617397;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 44879U;
    tmp_msg_1.off_x = 0.629672551361;
    tmp_msg_1.off_y = 0.226904175743;
    tmp_msg_1.off_z = 0.951138759462;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.305196249146;
    msg.custom.assign("GREQTUEXHZMJZSAUXIOEZIWSQLROKQPTBVISVSPRFHLYDHUWVQ");

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
    msg.setTimeStamp(0.977418074876);
    msg.setSource(20883U);
    msg.setSourceEntity(117U);
    msg.setDestination(2135U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.956460668907;
    msg.lon = 0.30400833632;
    msg.z = 0.461605724859;
    msg.z_units = 84U;
    msg.speed = 0.318438181843;
    msg.speed_units = 210U;
    msg.start_time = 0.0887145636308;
    msg.custom.assign("EORQWAHGJAQ");

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
    msg.setTimeStamp(0.996618677009);
    msg.setSource(18280U);
    msg.setSourceEntity(172U);
    msg.setDestination(47423U);
    msg.setDestinationEntity(82U);
    msg.vid = 59374U;
    msg.off_x = 0.684747640028;
    msg.off_y = 0.00963866713165;
    msg.off_z = 0.693404817722;

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
    msg.setTimeStamp(0.517639448235);
    msg.setSource(49185U);
    msg.setSourceEntity(168U);
    msg.setDestination(59766U);
    msg.setDestinationEntity(209U);
    msg.vid = 7442U;
    msg.off_x = 0.536079093952;
    msg.off_y = 0.121727147069;
    msg.off_z = 0.204489045441;

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
    msg.setTimeStamp(0.926598007347);
    msg.setSource(9987U);
    msg.setSourceEntity(68U);
    msg.setDestination(17061U);
    msg.setDestinationEntity(191U);
    msg.vid = 19130U;
    msg.off_x = 0.377850063229;
    msg.off_y = 0.0203560777595;
    msg.off_z = 0.410042987294;

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
    msg.setTimeStamp(0.962608004451);
    msg.setSource(32263U);
    msg.setSourceEntity(89U);
    msg.setDestination(37039U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.168809486725);
    msg.setSource(9454U);
    msg.setSourceEntity(102U);
    msg.setDestination(23475U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.52064515652);
    msg.setSource(49874U);
    msg.setSourceEntity(81U);
    msg.setDestination(45986U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.16121575141);
    msg.setSource(29554U);
    msg.setSourceEntity(155U);
    msg.setDestination(20678U);
    msg.setDestinationEntity(235U);
    msg.mid = 38210U;

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
    msg.setTimeStamp(0.161535076856);
    msg.setSource(14753U);
    msg.setSourceEntity(101U);
    msg.setDestination(51925U);
    msg.setDestinationEntity(214U);
    msg.mid = 61488U;

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
    msg.setTimeStamp(0.949681211574);
    msg.setSource(39473U);
    msg.setSourceEntity(91U);
    msg.setDestination(36540U);
    msg.setDestinationEntity(77U);
    msg.mid = 46652U;

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
    msg.setTimeStamp(0.0110286005945);
    msg.setSource(47455U);
    msg.setSourceEntity(38U);
    msg.setDestination(12608U);
    msg.setDestinationEntity(149U);
    msg.state = 71U;
    msg.eta = 62459U;
    msg.info.assign("WQKRJHFZUARNVKAMKABRJCUPBVFXXQVHHICPIJKACQABUFUPLUZTIUTJYORAKAPGUONBQYZSEJNFWYJLTSZXGXFDHNSVPFKHPNLESOLYKHSEFEHVQFZMTBWOGQQWPKEXFVYWDPZEDXDSYMWDVHOEOILCQOYRLLIIHRRDXGACDZNWDCKMSVBZJERNMBAGSTGWPUDVYVOCTTCNMYMWIJJEONTMXGGRAITFDCOSUIPCSWQZKXNYMQLUBZGBTGE");

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
    msg.setTimeStamp(0.0234508542209);
    msg.setSource(27607U);
    msg.setSourceEntity(121U);
    msg.setDestination(39478U);
    msg.setDestinationEntity(88U);
    msg.state = 20U;
    msg.eta = 55898U;
    msg.info.assign("LRQCHAFQOAGKJWNTUJSBLTFTQPNKHUVRISOPRHGFBXLKDPMRBPEQMXWGPUZTHUGYGDWWWTMSJWNSNCGKSKHCGJOQOQHXRVBRCBMONALRIVJZVACLVBSVEAHRZXWBXKOLFFIOYGZVYBJUNYBLSMMCYFPAIXJYSZUKQJJZXQQTIWVZUODAMYUOOLMTGLKFDTEEENFIUXDDERXEAGYWLFSTCTVIKQCDDIUAFNNICBED");

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
    msg.setTimeStamp(0.732498827502);
    msg.setSource(11752U);
    msg.setSourceEntity(211U);
    msg.setDestination(62220U);
    msg.setDestinationEntity(162U);
    msg.state = 78U;
    msg.eta = 11931U;
    msg.info.assign("XXIGIOEXZWXSGIBJTBPBXQXQTEVNLLBVOGKPRGNMCLBFDGHAANDWJYPPQBURACXKGVLRKTSOUXKPIUSCHPDZVNRLPLMQNNCSFYJDLZEAOCEJDOZTGRZDRECBHKIJZBTAVJYEPIQNHVYSTDIISOXBTUGJIJJWZAKRSDWOQHFSTMWUOHVFMWNPLFQFMCDLUIFHUDZYJMVWFXMCQVRNOSGMEEUKTEAQMUWKHEHF");

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
    msg.setTimeStamp(0.11101669642);
    msg.setSource(31303U);
    msg.setSourceEntity(175U);
    msg.setDestination(48209U);
    msg.setDestinationEntity(39U);
    msg.system = 25859U;
    msg.duration = 4826U;
    msg.speed = 0.75167128673;
    msg.speed_units = 236U;
    msg.x = 0.837772254888;
    msg.y = 0.320721519954;
    msg.z = 0.0498107123806;
    msg.z_units = 14U;

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
    msg.setTimeStamp(0.848957077825);
    msg.setSource(1252U);
    msg.setSourceEntity(194U);
    msg.setDestination(61527U);
    msg.setDestinationEntity(235U);
    msg.system = 58698U;
    msg.duration = 20675U;
    msg.speed = 0.474725934004;
    msg.speed_units = 29U;
    msg.x = 0.465154339238;
    msg.y = 0.733335728684;
    msg.z = 0.355104745967;
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
    msg.setTimeStamp(0.590214481555);
    msg.setSource(44355U);
    msg.setSourceEntity(69U);
    msg.setDestination(62704U);
    msg.setDestinationEntity(143U);
    msg.system = 43848U;
    msg.duration = 14335U;
    msg.speed = 0.0336034540243;
    msg.speed_units = 186U;
    msg.x = 0.200983604523;
    msg.y = 0.684939433427;
    msg.z = 0.188352027357;
    msg.z_units = 37U;

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
    msg.setTimeStamp(0.441638231771);
    msg.setSource(1099U);
    msg.setSourceEntity(4U);
    msg.setDestination(9045U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.449961323357;
    msg.lon = 0.837570697239;
    msg.speed = 0.131532659782;
    msg.speed_units = 103U;
    msg.duration = 7335U;
    msg.sys_a = 30176U;
    msg.sys_b = 44900U;
    msg.move_threshold = 0.639950489806;

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
    msg.setTimeStamp(0.244502226066);
    msg.setSource(19110U);
    msg.setSourceEntity(213U);
    msg.setDestination(8606U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.517210495786;
    msg.lon = 0.373397033545;
    msg.speed = 0.176573162592;
    msg.speed_units = 85U;
    msg.duration = 21250U;
    msg.sys_a = 23176U;
    msg.sys_b = 46984U;
    msg.move_threshold = 0.963672398447;

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
    msg.setTimeStamp(0.0351464457416);
    msg.setSource(20593U);
    msg.setSourceEntity(185U);
    msg.setDestination(29597U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.783587986213;
    msg.lon = 0.81098680243;
    msg.speed = 0.950584331826;
    msg.speed_units = 45U;
    msg.duration = 13058U;
    msg.sys_a = 61494U;
    msg.sys_b = 63499U;
    msg.move_threshold = 0.178525024343;

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
    msg.setTimeStamp(0.00975402467284);
    msg.setSource(35826U);
    msg.setSourceEntity(56U);
    msg.setDestination(56941U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.199255112748;
    msg.lon = 0.788731875207;
    msg.z = 0.0381567296894;
    msg.z_units = 161U;
    msg.speed = 0.41949178658;
    msg.speed_units = 65U;
    msg.custom.assign("DVFUWROHKCUFEWSNNQIAAABGWYFWXRFMWNTOSDDHYHVFIGYWXKIQAZMVXHH");

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
    msg.setTimeStamp(0.166196441885);
    msg.setSource(42025U);
    msg.setSourceEntity(250U);
    msg.setDestination(51664U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.719752368427;
    msg.lon = 0.425926040528;
    msg.z = 0.353120500119;
    msg.z_units = 246U;
    msg.speed = 0.786243629504;
    msg.speed_units = 141U;
    msg.custom.assign("KJCSZHUYFNMBPUKNWOMANHRMJPLWPCVLVJVUUPPSJ");

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
    msg.setTimeStamp(0.0800021605611);
    msg.setSource(38862U);
    msg.setSourceEntity(144U);
    msg.setDestination(49040U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.327646630386;
    msg.lon = 0.225320095899;
    msg.z = 0.939934786363;
    msg.z_units = 148U;
    msg.speed = 0.132895942999;
    msg.speed_units = 58U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.828052210993;
    tmp_msg_0.lon = 0.882833344559;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UCUOWDFBPLMBLYUMNGSIHIEIWZNVZSIAHENGRXZJDIYZANCKFQXEVDEBLLFUTDUFIAQOYUAVUTBPJGXNLHEDLPOULSAIJMGRRQZCTVRVYKCWPGUZOIFJXPGOHZQWTSDEOMWMKTSGMYKPDFFEBGRJPONOLNQRJMQYAVTBNZJJGDQRX");

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
    msg.setTimeStamp(0.223881395058);
    msg.setSource(36845U);
    msg.setSourceEntity(31U);
    msg.setDestination(14541U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.72474484015;
    msg.lon = 0.474160291297;

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
    msg.setTimeStamp(0.909256577521);
    msg.setSource(27545U);
    msg.setSourceEntity(117U);
    msg.setDestination(47846U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.148989751771;
    msg.lon = 0.242279302495;

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
    msg.setTimeStamp(0.654520476199);
    msg.setSource(51166U);
    msg.setSourceEntity(45U);
    msg.setDestination(52169U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.778452019445;
    msg.lon = 0.144312352431;

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
    msg.setTimeStamp(0.83298100523);
    msg.setSource(23867U);
    msg.setSourceEntity(210U);
    msg.setDestination(40321U);
    msg.setDestinationEntity(195U);
    msg.timeout = 50205U;
    msg.lat = 0.820856621588;
    msg.lon = 0.325688479173;
    msg.z = 0.407077317483;
    msg.z_units = 12U;
    msg.pitch = 0.176037571663;
    msg.amplitude = 0.307402179223;
    msg.duration = 27687U;
    msg.speed = 0.213171034264;
    msg.speed_units = 133U;
    msg.radius = 0.927139686145;
    msg.direction = 128U;
    msg.custom.assign("PVDEVKSOWUJD");

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
    msg.setTimeStamp(0.177436762237);
    msg.setSource(2118U);
    msg.setSourceEntity(133U);
    msg.setDestination(60189U);
    msg.setDestinationEntity(104U);
    msg.timeout = 38043U;
    msg.lat = 0.802720369051;
    msg.lon = 0.692468005262;
    msg.z = 0.688768273874;
    msg.z_units = 157U;
    msg.pitch = 0.0459994724042;
    msg.amplitude = 0.829397447625;
    msg.duration = 2441U;
    msg.speed = 0.281542442924;
    msg.speed_units = 19U;
    msg.radius = 0.697926825801;
    msg.direction = 1U;
    msg.custom.assign("JOOBUOXMEOWYBYIAGZEWNKEDHIEWEBESQAEYNTLIAY");

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
    msg.setTimeStamp(0.281657630192);
    msg.setSource(7769U);
    msg.setSourceEntity(245U);
    msg.setDestination(47980U);
    msg.setDestinationEntity(53U);
    msg.timeout = 43485U;
    msg.lat = 0.499212691034;
    msg.lon = 0.930117202689;
    msg.z = 0.46933427798;
    msg.z_units = 81U;
    msg.pitch = 0.67568156485;
    msg.amplitude = 0.61165043237;
    msg.duration = 13590U;
    msg.speed = 0.500680625313;
    msg.speed_units = 200U;
    msg.radius = 0.458300138043;
    msg.direction = 215U;
    msg.custom.assign("QXNODAVGSQOBCYHFNJDFPVIQTVYWCHCGMIIOQIPJHTHOQSDLDRXYSVWWOAVRMXIVNMZUTOSEJEIZWUURBVQIZRLFXKELETKXZWZGOEZUFUSRHXFNEYYICQSPDRKLLINHRZBTRDKFSXSWFLWVEWLGPGZGRFLZKNBLMLQBMBEJYMRACBAJGTKFKAWMBCUPSYBCNUCAZHPDOUDMOUAY");

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
    msg.setTimeStamp(0.332530641745);
    msg.setSource(38263U);
    msg.setSourceEntity(6U);
    msg.setDestination(64439U);
    msg.setDestinationEntity(103U);
    msg.formation_name.assign("UIRUVBDPFPSXCNVIZKWCAOORGMBIVZZBWBUCWZLKXTLWTGTSCUGHYYKFIINVNTDTLAHZETKUHTONZSKZSKSQSIXOLLDHEYQOZBECPFRADGPWGQMOVCRMKXRPBJQCVGICXTYHOYUNCWVOBMQQRFVNSJPOGPJWXICFFLDUIAAJYFEPQASOUNEAXJEJLJMXEDHLALDQMYGMEQISDBDHJHUXWNAFXWRH");
    msg.reference_frame = 160U;
    msg.custom.assign("QRERAUSNPPGNKGFEDGCWXDYQGUTVKBOUVBVLTQFLBMFCRCEEXLLGSRAYKWJTJSOWMGULHDIHEITYJOZMVWPZBBWMGCPNDYDZAXMHJKBSVSUYRTZQKBKUYOBNMLALRTPFKSXLZHQVQNISAJJOFPTHQFOQVJXNTMDFMVNWJGHIWYSMBPPZUHZVDAKYPPLINGUNXYFAROXXBQULZXR");

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
    msg.setTimeStamp(0.280675367255);
    msg.setSource(59661U);
    msg.setSourceEntity(43U);
    msg.setDestination(4047U);
    msg.setDestinationEntity(252U);
    msg.formation_name.assign("MBHTAJTDKMXCWRLYXINUZTSKOHXRNWECRBUDHV");
    msg.reference_frame = 26U;
    msg.custom.assign("QWESGLSEKEWCYKHLCBXDZXEVYYRHNIVXFIVCOBPLNXFCRFRYOUIKUOACXKSVXLZJZDGLQJJWADSOMSVADJLJJFCBNHBQZFIQTNELODLAPFNQFRINJTUWMCMUOZPDGWAEIITKOWKWJGXYGDCWZTIWZENTVTLBQBRSUPSNRAGAVYMAMUPSQIMKPPVEOBGUUFNBMSEYNEJTCMQKDHHBKDRZQOZMHDRGTPQRAXHZSJT");

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
    msg.setTimeStamp(0.278471790927);
    msg.setSource(10410U);
    msg.setSourceEntity(192U);
    msg.setDestination(2297U);
    msg.setDestinationEntity(188U);
    msg.formation_name.assign("VWJPQTRRWQGYCVJNMTLLORLGWGSXFILMAONKEJYSJDUIIXVLZUTTHBRAKGBATZLLTWESHFODQDVNPHBCSYQMKTKRQESKBCVRXHAXCFAAYJZWWBEFXBPU");
    msg.reference_frame = 192U;
    msg.custom.assign("PPLXLAPESSQSRWZDBRYXIILVCAQNWSKHLBHINWHECTKYIRUCFHXIGMCHFCYMSTFVDWEHREJVAADLBGNSYMFTRKBSJGMXMQMNRXZHWGGOMDEGQPDKIHVLKIFJUTLLOBGBUAHUPGQKPVJSPNWDRQYZZJTEUEDOJAKKYAEJRBBPRDXEOUQOVZOVNBAALNYMUZTWVXVGGEFWQNFXDCJSTJNSQKXKTFZTLHZDFYIVURMOOFUXIW");

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
    msg.setTimeStamp(0.890182484804);
    msg.setSource(17645U);
    msg.setSourceEntity(3U);
    msg.setDestination(2806U);
    msg.setDestinationEntity(97U);
    msg.group_name.assign("LVLVUNUPEWJHXSHLPXWGETGQDRXSQGROHNYKLFAMGJQQQYUTVGCZFBIEMFZYTVJHLVDNCBRSMQYPUXFOWDWERAFTKSJHMKGYAHETYPIFBXCAEDZXZBJXUAZ");
    msg.formation_name.assign("RVQVTUZZRKGONDKHKHPQMWISLWTNQKMKKFFIVHVLBUOVZAHNBAPLQMUGEWFENSUUTOFKZWPYTHBZGNXCJVMHAMYMSEJCQ");
    msg.plan_id.assign("UQVTEFDTPJWEZPHILTUKHYMPLGBGKISBEGZRKMZHNYIEPIKQFVSXYPU");
    msg.description.assign("WOLWSDUQUPSJKQRDABJDPJFAGKDEWRRTMHLGVKIMHJIGXGJVTBIEXBHCVSDEENLRMTLPEQIUTUNROBHTARYOQPFGGZSIICVFOVOBHRLDBVNDKXLNBPRKRNUASCAAUTGCJNQFWESVLTIVDZMZLJQYXGPXTCHFMPQQJJWPNZUCYWAYUHTVOVCFWHLCDMYYENWKYMKMXZWBZ");
    msg.leader_speed = 0.95337061527;
    msg.leader_bank_lim = 0.364833912978;
    msg.pos_sim_err_lim = 0.282586533893;
    msg.pos_sim_err_wrn = 0.194847035782;
    msg.pos_sim_err_timeout = 17354U;
    msg.converg_max = 0.0581332567367;
    msg.converg_timeout = 46438U;
    msg.comms_timeout = 35216U;
    msg.turb_lim = 0.593947177734;
    msg.custom.assign("ZUWURFGVXDPUCVQZTEFBLYOYHPIGVMAEDKTBPLQBKFMGZURHUUADAQBORAAXLIZTTBSPSRGDWWBQFFSTLKBRSEICSECOHOINYWCJKDOWGMXHWXJJYWIZXZYWEJOUJDYLSTUVPKTAYDPHIBEIVLYRXBNNMWSQNRGSXYVXOHJQQMGGJKZVRACMKMPQUQXZ");

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
    msg.setTimeStamp(0.648655199266);
    msg.setSource(27259U);
    msg.setSourceEntity(119U);
    msg.setDestination(25791U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("JGROZJNJKPPFZWJOLSTAENSBWVHLKXXVTEEMHQCBRMCDUXIREVXAKYHKOVTTUZIIBSCMRHQIVDMPUOCQLSCDRPWBPQWFOPMUIMXEIJAKMEIYFOHNFJTZBNYZEQJDEPTWALIWYCSHZTZDXSRRHVNYYWNMHSYGJDCLVOAFXWWXGPTGVLQBALNLKYVHRQZQFAMKIUWRJJU");
    msg.formation_name.assign("KQBLUQKMISJHJFAMCDUSLVENNVPZAOXDZQZOEBTECUHRINEGCXKTTVTJFENWVORDRXHVWSQUHRSCDVWIVULTEMWOLJFF");
    msg.plan_id.assign("OFRBKOFWMOBAOJLRBPCVIZHHSAPNJWYKGTCTREGWDHKQXDDTOLEMUXQHLEWNJVYKYAJCUYQOAREKQAITULCSXFYFEDJSKD");
    msg.description.assign("ASQJSUTQIORQJOCOLWNNEVOEIJDGTCSKGXHWHRUYZBJPOAWSSODHMUFGAFDLM");
    msg.leader_speed = 0.731061968626;
    msg.leader_bank_lim = 0.0116667035514;
    msg.pos_sim_err_lim = 0.0595074683514;
    msg.pos_sim_err_wrn = 0.967563770324;
    msg.pos_sim_err_timeout = 55106U;
    msg.converg_max = 0.149418253364;
    msg.converg_timeout = 49571U;
    msg.comms_timeout = 4368U;
    msg.turb_lim = 0.718030108103;
    msg.custom.assign("ILITERQMHQ");

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
    msg.setTimeStamp(0.640190618668);
    msg.setSource(50292U);
    msg.setSourceEntity(66U);
    msg.setDestination(61443U);
    msg.setDestinationEntity(161U);
    msg.group_name.assign("CPSTQODKLGAZXNRJWFZESVKVIAJWOHHIHDQVDSKSGSXXIXJTCKHHTLFPHZITINREXUUFKZDLEPOMTOVBKBNCYANRBWDFVEEGOZDFBZVLBQFOGYBHUJHMFTMZYIMJGMAUUFNCYEZAAXCABRYMEDQNVXFMIPEQCPWTTLLTIDLOLQMQHQREPPKCJQTYBZLGNRPNYCXCJIUJDPBRJXJYSRVASGQEGWSXOONZYDSUAWAUPKRUNRVFY");
    msg.formation_name.assign("OWCVTXHFEZSZWEKRCXMCOBMBVQYDAVXCQAAPQVSJRTDIJZYKSPRESHYYEDIWVXPOBPGEZZANZQPJUWAUNIMWQDALAORVHJLKOAXFQ");
    msg.plan_id.assign("TLFVKFLOIFHORMVOAYJTDRIWJLKFLCAMHZVRJDXXNKHAUKBXEMKRNISWBGYOZDAEBANHHBTJBDISRAAGXBPUDVPJDJMFEXMYTLEIAMSOPWPMQSEKWSUWPISBJRBZKVJCYNCQTAAGERYZOPKHWXDTEXFUZCURCNDIUIHPTOVTLTCNYNZXRJQYSVQKQLOGPVFNBWEZCLQUHUDTLGEIPQMFGY");
    msg.description.assign("FBTQMVUPSYBSCKNXDTOUPVICVBKDLHLQFCHSGFMCRLIEWNZMZKAURAZFRVLZFAMBDUECKGTWSSCLEIIWVAURPJKLHTGZPFVMGJFDNESVYUYZEIBSHKGCCVPVOXHWXIOKBXIZPFQNQMGRHWOWPGMRWOLEGYNFUNNLXXUEJXGCXYQPXSNFDDLUAMZHXJTAJOJKOTQWTTAWBIBNEYLJRQSD");
    msg.leader_speed = 0.837572122659;
    msg.leader_bank_lim = 0.327772866663;
    msg.pos_sim_err_lim = 0.680192865379;
    msg.pos_sim_err_wrn = 0.675606224931;
    msg.pos_sim_err_timeout = 49911U;
    msg.converg_max = 0.557266022463;
    msg.converg_timeout = 32309U;
    msg.comms_timeout = 61820U;
    msg.turb_lim = 0.932717843643;
    msg.custom.assign("AVIYPYCGDYSRGZHNYBIKJOMDLHEAESVMEEGDYZIJSSOFRNEFJPKMBTNOQDWNNZWOFXXBNSLNMMNXAJJJXWHWITXRPVLYOGXOUXTUZLZPPSIMNGYZCKTCAPFHIEUVTMUYHCURRXKAWAHKPDLZEHHQUFBKTIFRCBGTEJMKMBQVSFQHSQUZOFALSDDRLRTAWLOONCAXCOQQLAUWPIDZTUJBVPWDQHYTFMR");

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
    msg.setTimeStamp(0.550909893167);
    msg.setSource(22191U);
    msg.setSourceEntity(57U);
    msg.setDestination(56101U);
    msg.setDestinationEntity(120U);
    msg.control_src = 15647U;
    msg.control_ent = 212U;
    msg.timeout = 0.409537146916;
    msg.loiter_radius = 0.0319093660571;
    msg.altitude_interval = 0.601216130679;

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
    msg.setTimeStamp(0.0364220904526);
    msg.setSource(21333U);
    msg.setSourceEntity(126U);
    msg.setDestination(25439U);
    msg.setDestinationEntity(129U);
    msg.control_src = 943U;
    msg.control_ent = 46U;
    msg.timeout = 0.986197249947;
    msg.loiter_radius = 0.423058069774;
    msg.altitude_interval = 0.835189711162;

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
    msg.setTimeStamp(0.892400349305);
    msg.setSource(58880U);
    msg.setSourceEntity(117U);
    msg.setDestination(48038U);
    msg.setDestinationEntity(97U);
    msg.control_src = 4596U;
    msg.control_ent = 242U;
    msg.timeout = 0.38225830396;
    msg.loiter_radius = 0.72407758631;
    msg.altitude_interval = 0.47657396516;

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
    msg.setTimeStamp(0.491183886824);
    msg.setSource(16162U);
    msg.setSourceEntity(16U);
    msg.setDestination(59509U);
    msg.setDestinationEntity(29U);
    msg.flags = 90U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.505483262388;
    tmp_msg_0.speed_units = 88U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.28133875861;
    tmp_msg_1.z_units = 234U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.958579490331;
    msg.lon = 0.520524505019;
    msg.radius = 0.43985041019;

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
    msg.setTimeStamp(0.992827084047);
    msg.setSource(41443U);
    msg.setSourceEntity(64U);
    msg.setDestination(13365U);
    msg.setDestinationEntity(160U);
    msg.flags = 153U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.31162803749;
    tmp_msg_0.speed_units = 99U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0667133974036;
    tmp_msg_1.z_units = 219U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.684087257445;
    msg.lon = 0.48927896314;
    msg.radius = 0.442362142953;

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
    msg.setTimeStamp(0.22107275118);
    msg.setSource(45389U);
    msg.setSourceEntity(237U);
    msg.setDestination(11789U);
    msg.setDestinationEntity(43U);
    msg.flags = 213U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.934885941848;
    tmp_msg_0.speed_units = 116U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.34142671497;
    tmp_msg_1.z_units = 191U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.142350678735;
    msg.lon = 0.105740167099;
    msg.radius = 0.864259800755;

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
    msg.setTimeStamp(0.862786327593);
    msg.setSource(61277U);
    msg.setSourceEntity(160U);
    msg.setDestination(16638U);
    msg.setDestinationEntity(100U);
    msg.control_src = 28999U;
    msg.control_ent = 50U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 75U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.784316609357;
    tmp_tmp_msg_0_0.speed_units = 131U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.67255737192;
    tmp_tmp_msg_0_1.z_units = 117U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.269888542764;
    tmp_msg_0.lon = 0.950282068781;
    tmp_msg_0.radius = 0.878060796556;
    msg.reference.set(tmp_msg_0);
    msg.state = 27U;
    msg.proximity = 29U;

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
    msg.setTimeStamp(0.7506412927);
    msg.setSource(8165U);
    msg.setSourceEntity(214U);
    msg.setDestination(53994U);
    msg.setDestinationEntity(14U);
    msg.control_src = 10072U;
    msg.control_ent = 1U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 131U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.322993461528;
    tmp_tmp_msg_0_0.speed_units = 109U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.647900206851;
    tmp_tmp_msg_0_1.z_units = 166U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.159279620386;
    tmp_msg_0.lon = 0.358077321285;
    tmp_msg_0.radius = 0.4039927099;
    msg.reference.set(tmp_msg_0);
    msg.state = 181U;
    msg.proximity = 164U;

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
    msg.setTimeStamp(0.480963420491);
    msg.setSource(42131U);
    msg.setSourceEntity(246U);
    msg.setDestination(52241U);
    msg.setDestinationEntity(240U);
    msg.control_src = 21843U;
    msg.control_ent = 164U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 180U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.131969153291;
    tmp_tmp_msg_0_0.speed_units = 253U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.844425273753;
    tmp_tmp_msg_0_1.z_units = 181U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.389821313125;
    tmp_msg_0.lon = 0.526248523499;
    tmp_msg_0.radius = 0.135149022262;
    msg.reference.set(tmp_msg_0);
    msg.state = 195U;
    msg.proximity = 226U;

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
    msg.setTimeStamp(0.507687102174);
    msg.setSource(65469U);
    msg.setSourceEntity(160U);
    msg.setDestination(56525U);
    msg.setDestinationEntity(107U);
    msg.ax_cmd = 0.379095864107;
    msg.ay_cmd = 0.0400088231562;
    msg.az_cmd = 0.11485899395;
    msg.ax_des = 0.318960241282;
    msg.ay_des = 0.485692623762;
    msg.az_des = 0.786210141336;
    msg.virt_err_x = 0.691948425055;
    msg.virt_err_y = 0.73336972528;
    msg.virt_err_z = 0.200514184243;
    msg.surf_fdbk_x = 0.725448461553;
    msg.surf_fdbk_y = 0.311089057447;
    msg.surf_fdbk_z = 0.482025349686;
    msg.surf_unkn_x = 0.0266615219869;
    msg.surf_unkn_y = 0.787787411079;
    msg.surf_unkn_z = 0.0221354791184;
    msg.ss_x = 0.40633378824;
    msg.ss_y = 0.331697110374;
    msg.ss_z = 0.273406269023;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NPRYRGYZSBCSZRQAEBPZYHRWYKZUVPGXIVSFWISGGOZIVRKGUJFENARPFKGJVMNEDOPYTQXEFAOVTLNEJIYRCINXULTJXXZOELGHOYJWVTXTAJTVZFMCPUMWKIOXEVWHTLNFEHDBGWFNIDCNZDHCHUKEHLWBBYDCLO");
    tmp_msg_0.dist = 0.303392917684;
    tmp_msg_0.err = 0.839651664521;
    tmp_msg_0.ctrl_imp = 0.168551732103;
    tmp_msg_0.rel_dir_x = 0.109235462417;
    tmp_msg_0.rel_dir_y = 0.361774023177;
    tmp_msg_0.rel_dir_z = 0.654397251846;
    tmp_msg_0.err_x = 0.736804126723;
    tmp_msg_0.err_y = 0.582902086511;
    tmp_msg_0.err_z = 0.690483907176;
    tmp_msg_0.rf_err_x = 0.724230072774;
    tmp_msg_0.rf_err_y = 0.900737518301;
    tmp_msg_0.rf_err_z = 0.616623187782;
    tmp_msg_0.rf_err_vx = 0.25832756996;
    tmp_msg_0.rf_err_vy = 0.436367676418;
    tmp_msg_0.rf_err_vz = 0.46688053999;
    tmp_msg_0.ss_x = 0.112790708269;
    tmp_msg_0.ss_y = 0.372168315545;
    tmp_msg_0.ss_z = 0.126981367471;
    tmp_msg_0.virt_err_x = 0.737168111009;
    tmp_msg_0.virt_err_y = 0.00355742263211;
    tmp_msg_0.virt_err_z = 0.245727966391;
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
    msg.setTimeStamp(0.777444908763);
    msg.setSource(62022U);
    msg.setSourceEntity(146U);
    msg.setDestination(22724U);
    msg.setDestinationEntity(42U);
    msg.ax_cmd = 0.816917318694;
    msg.ay_cmd = 0.0145210209632;
    msg.az_cmd = 0.589386801679;
    msg.ax_des = 0.313177836172;
    msg.ay_des = 0.64822993259;
    msg.az_des = 0.628016008532;
    msg.virt_err_x = 0.0593532437905;
    msg.virt_err_y = 0.253591313375;
    msg.virt_err_z = 0.654043765707;
    msg.surf_fdbk_x = 0.304208948027;
    msg.surf_fdbk_y = 0.174170913719;
    msg.surf_fdbk_z = 0.281042994152;
    msg.surf_unkn_x = 0.650232555228;
    msg.surf_unkn_y = 0.34971411411;
    msg.surf_unkn_z = 0.388971684938;
    msg.ss_x = 0.0577114523117;
    msg.ss_y = 0.07155922188;
    msg.ss_z = 0.0110605161633;

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
    msg.setTimeStamp(0.123265293417);
    msg.setSource(18900U);
    msg.setSourceEntity(241U);
    msg.setDestination(9681U);
    msg.setDestinationEntity(234U);
    msg.ax_cmd = 0.314530382645;
    msg.ay_cmd = 0.443235707526;
    msg.az_cmd = 0.137958402197;
    msg.ax_des = 0.639324097143;
    msg.ay_des = 0.370081028563;
    msg.az_des = 0.611151082149;
    msg.virt_err_x = 0.589574565201;
    msg.virt_err_y = 0.759199632128;
    msg.virt_err_z = 0.0244983625878;
    msg.surf_fdbk_x = 0.467677391203;
    msg.surf_fdbk_y = 0.572239935059;
    msg.surf_fdbk_z = 0.331456586775;
    msg.surf_unkn_x = 0.789459071501;
    msg.surf_unkn_y = 0.458125140803;
    msg.surf_unkn_z = 0.511870038777;
    msg.ss_x = 0.701812402445;
    msg.ss_y = 0.555135187771;
    msg.ss_z = 0.602150835495;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ZEJHOATIEHPVXMYTBLPZAQKUTBZMGLZUBIKBJFLQNIDSWMKXFGUSXXCGKQBOAZFJIDQMQYAECBSXDRONAQJGVWSGEQOSHBTBCIDOEABPRRIUCYLVNVWJYRFPVDWJTTOXPHWUGAZXKVYIFJMFNNWCGNZTRFNWXARVWS");
    tmp_msg_0.dist = 0.70161089493;
    tmp_msg_0.err = 0.0561977949833;
    tmp_msg_0.ctrl_imp = 0.386932937365;
    tmp_msg_0.rel_dir_x = 0.0274483283236;
    tmp_msg_0.rel_dir_y = 0.915607518168;
    tmp_msg_0.rel_dir_z = 0.372524146708;
    tmp_msg_0.err_x = 0.667052424192;
    tmp_msg_0.err_y = 0.614468651837;
    tmp_msg_0.err_z = 0.450861556477;
    tmp_msg_0.rf_err_x = 0.65178571661;
    tmp_msg_0.rf_err_y = 0.296218545112;
    tmp_msg_0.rf_err_z = 0.0102316056302;
    tmp_msg_0.rf_err_vx = 0.425573188952;
    tmp_msg_0.rf_err_vy = 0.144182162468;
    tmp_msg_0.rf_err_vz = 0.00110731807259;
    tmp_msg_0.ss_x = 0.984219017419;
    tmp_msg_0.ss_y = 0.889768948454;
    tmp_msg_0.ss_z = 0.579056436586;
    tmp_msg_0.virt_err_x = 0.42745792798;
    tmp_msg_0.virt_err_y = 0.533300762487;
    tmp_msg_0.virt_err_z = 0.134576774375;
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
    msg.setTimeStamp(0.435551759973);
    msg.setSource(38907U);
    msg.setSourceEntity(24U);
    msg.setDestination(7497U);
    msg.setDestinationEntity(242U);
    msg.s_id.assign("JPWAVFWHPIGQISUWJWAVFMBTESPJUCXKUSWXEFNBMVELZKTNMXFRSWNTPOPQUFDOYMCZGPNPHTGTVKNNGXKOPYAYIKMNECKZITTFHOZCDVMIGVODFLKYLWIZUAALELYDBTYQURQUMNJLCKVUCOSVAGMBARHTJZYLXGRDBZHVF");
    msg.dist = 0.0610661443236;
    msg.err = 0.722029067843;
    msg.ctrl_imp = 0.0141538263755;
    msg.rel_dir_x = 0.692718610566;
    msg.rel_dir_y = 0.913802745319;
    msg.rel_dir_z = 0.228025554985;
    msg.err_x = 0.953017745464;
    msg.err_y = 0.264419442098;
    msg.err_z = 0.463563720176;
    msg.rf_err_x = 0.430550000238;
    msg.rf_err_y = 0.955579841458;
    msg.rf_err_z = 0.669460105776;
    msg.rf_err_vx = 0.72836464158;
    msg.rf_err_vy = 0.876072363866;
    msg.rf_err_vz = 0.789305645086;
    msg.ss_x = 0.432472690972;
    msg.ss_y = 0.542078555996;
    msg.ss_z = 0.778936400866;
    msg.virt_err_x = 0.6643420017;
    msg.virt_err_y = 0.214668136705;
    msg.virt_err_z = 0.330139113209;

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
    msg.setTimeStamp(0.134368081374);
    msg.setSource(23811U);
    msg.setSourceEntity(191U);
    msg.setDestination(36521U);
    msg.setDestinationEntity(254U);
    msg.s_id.assign("DXRZAKLTSTWLBGEKIJMWAAPMLJBKOCZJBBVNXKAYQLHDPPWRESNEDUIIXUVFVZMHDJYTMXFWSZCUMYAGRHODQFNPOJXQHSIZQLSMFHTHUMNROOLAWDRDVRZSTFYOWKNBDTNQZWQSUEAXFYBCFVJWKCYQYIZUIFYKVOTIUTVXLBQHPDXVPICWORABBXUJELCQEJFHENIPZNTGELGJGPPYMKTICOGNLJYDCAGAK");
    msg.dist = 0.0961654615141;
    msg.err = 0.526742909163;
    msg.ctrl_imp = 0.413149042617;
    msg.rel_dir_x = 0.13606660893;
    msg.rel_dir_y = 0.325754785012;
    msg.rel_dir_z = 0.499900972129;
    msg.err_x = 0.629038175744;
    msg.err_y = 0.322820758196;
    msg.err_z = 0.325119544897;
    msg.rf_err_x = 0.745525200766;
    msg.rf_err_y = 0.665456458221;
    msg.rf_err_z = 0.84637156672;
    msg.rf_err_vx = 0.196121615737;
    msg.rf_err_vy = 0.830233391425;
    msg.rf_err_vz = 0.461715570579;
    msg.ss_x = 0.817891372138;
    msg.ss_y = 0.997787204039;
    msg.ss_z = 0.78838686579;
    msg.virt_err_x = 0.202124974469;
    msg.virt_err_y = 0.46404033917;
    msg.virt_err_z = 0.227712704976;

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
    msg.setTimeStamp(0.88463691392);
    msg.setSource(158U);
    msg.setSourceEntity(176U);
    msg.setDestination(21251U);
    msg.setDestinationEntity(168U);
    msg.s_id.assign("ABOWHGVFYCXFLKPXUQRUBLNZDTEAVDRRKIZAIYZDTTCPRECLJMDVOSYCJSGBPCIZWVDKNVDYRJVRQENMEKZWWFZNCAJXBQXJWWSAAR");
    msg.dist = 0.514356172057;
    msg.err = 0.591874289995;
    msg.ctrl_imp = 0.546008552075;
    msg.rel_dir_x = 0.332709873531;
    msg.rel_dir_y = 0.811931310223;
    msg.rel_dir_z = 0.251048918563;
    msg.err_x = 0.329035514371;
    msg.err_y = 0.160785945233;
    msg.err_z = 0.920779539789;
    msg.rf_err_x = 0.198869671057;
    msg.rf_err_y = 0.0274763306476;
    msg.rf_err_z = 0.815414999528;
    msg.rf_err_vx = 0.364380768584;
    msg.rf_err_vy = 0.0110360714089;
    msg.rf_err_vz = 0.702772197014;
    msg.ss_x = 0.12209006186;
    msg.ss_y = 0.742999022589;
    msg.ss_z = 0.37099345767;
    msg.virt_err_x = 0.0670340115274;
    msg.virt_err_y = 0.169165749852;
    msg.virt_err_z = 0.169044865652;

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
    msg.setTimeStamp(0.867925345117);
    msg.setSource(21169U);
    msg.setSourceEntity(92U);
    msg.setDestination(29055U);
    msg.setDestinationEntity(146U);
    msg.timeout = 37605U;
    msg.rpm = 0.0117957519136;
    msg.direction = 44U;
    msg.custom.assign("UHUWPKQYZBUMFINEMELJOGNMNWOFFDJMCKBKHTVNEMRQNNNWLZKWYSXYSQAYICKMZXETTUPFJRCCAADSHZH");

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
    msg.setTimeStamp(0.383951286258);
    msg.setSource(40962U);
    msg.setSourceEntity(121U);
    msg.setDestination(28593U);
    msg.setDestinationEntity(28U);
    msg.timeout = 45296U;
    msg.rpm = 0.414046460285;
    msg.direction = 1U;
    msg.custom.assign("QZVFDJYDRCBDEBUGHHBUGOJVFAOCLKEWXFPTWYYLZQSYIOJEWVFUJAYSWRSAGRIMQLHSDUHYCWITKLWYAIZDWJKZLSCLMOMLMVNPUWOXSLTRNOSWMZQOPUPKNHXXTOZYMCHBKVT");

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
    msg.setTimeStamp(0.695814661488);
    msg.setSource(54847U);
    msg.setSourceEntity(44U);
    msg.setDestination(20322U);
    msg.setDestinationEntity(195U);
    msg.timeout = 11676U;
    msg.rpm = 0.770836813404;
    msg.direction = 253U;
    msg.custom.assign("SMUJZOWEZCJIIMC");

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
    msg.setTimeStamp(0.743075350188);
    msg.setSource(431U);
    msg.setSourceEntity(202U);
    msg.setDestination(10784U);
    msg.setDestinationEntity(165U);
    msg.formation_name.assign("NYRZEIFSSBXAOVAJLFHZBYMLUJOCNQWGTFLSAJMMODGRQBLJODYIRPRWDGUUISKWRGQRJTBWQYWEKTWJKCVZIHZKQHOTESBPEVSJBHGNPQLUBHVTCMDA");
    msg.type = 161U;
    msg.op = 197U;
    msg.group_name.assign("PIWLOUVFJKAMRDNQURJQLJRJYWGSOBOZCWLMBMWBYDVVLFYLVHEBIGXQBAKKBNHHXXLZQYBCYEYFHRFEYAENACEDIGWXMSUFJUZMPBDJKJWQNVCPMZEQHARXLDRJHRGKVDSYIKNHLOPPRFQXKQFZTZEHSDEIDTPORJAXSPAOSQGTUGPDV");
    msg.plan_id.assign("TQIKDEQQIEXCUFRYIGIYHOMOVVBEFOOPOYCVIWAQKXROJILPXPSWGORFSGUMGDOHAKVVDWMPRHTNWWORLDNWJUBQQZMRJJLJFYPLJKWNYRUMLEKYQUXZMCBUNSYCYSSJMXZDUBLVZAUCASZBEXMFVHGKUACFPHANHQEIF");
    msg.description.assign("VZDDADHJYGDMWJUUBQCTJVBXKVLTHNHWCRXSGCSLSNSWGMGRXUZQNPUQOEZVLYKIHCTTQPFJFLEIBEEBQWIAFMPWNEPQRIUMDPPXNZARRLZBPYGBQYXNMSKOOITTTYDXMGGYWRXKODREJOSNBW");
    msg.reference_frame = 189U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 53325U;
    tmp_msg_0.off_x = 0.379595619846;
    tmp_msg_0.off_y = 0.0457846334316;
    tmp_msg_0.off_z = 0.402856907251;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.0518614379629;
    msg.leader_speed_min = 0.334676599303;
    msg.leader_speed_max = 0.866194142252;
    msg.leader_alt_min = 0.205683711604;
    msg.leader_alt_max = 0.1788275575;
    msg.pos_sim_err_lim = 0.171189633107;
    msg.pos_sim_err_wrn = 0.708915587508;
    msg.pos_sim_err_timeout = 13371U;
    msg.converg_max = 0.695310482321;
    msg.converg_timeout = 30774U;
    msg.comms_timeout = 49909U;
    msg.turb_lim = 0.0349435868961;
    msg.custom.assign("GFZQKUXHJGYWFBDEKYRHEYXALQEAGPNHBYJDWOCCUMTNGUTOKNMGJHAWPKXITCUQDMFKAQXRPCBNMDQOLHW");

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
    msg.setTimeStamp(0.757377908394);
    msg.setSource(32956U);
    msg.setSourceEntity(0U);
    msg.setDestination(62515U);
    msg.setDestinationEntity(146U);
    msg.formation_name.assign("UFJPRHGEOGMCONPECQAFSJPPVRTPURIUADMCSMMYMFXKTTJDKEDSTUWNANSAOMEUJLYXHFVOIOQVNJIHFHKSVCLARGBTIEDSBZVRDIIGAQWRFDZWXUZPUHIBGCPQLLPWOGYXFLKLJMGKXYYDNHSXVSNWXHRBJYCBUAJIXLEWAATQVKRQMOHGSWMLEIIDBHBKFTQCVYMUHTNQZWJOKCPPEOYRSRT");
    msg.type = 4U;
    msg.op = 133U;
    msg.group_name.assign("KLRDKNWSKFOSCKCYAODEBTJJPZVPPNSFMFNXHQLURUFBVUWNDQTOCATEMFUPZQAUSJYUSNCOMVQWTCIAHIQOUYHIDVKOEGZBEFOLXWGOYRFWIYCLCWWXHTDZXDUJMKAGGGYAEBZJGFHGLMJBOPWCUPNZLYYQMFCSHNBXHSJDNCSTJAGMXBXHHDIWUGVPRMMLPMPZVQQEE");
    msg.plan_id.assign("NHJMNCCZOMCYAXXDPPIHOPHTDZDVBFVTMFFOKXOCWNIUZAIFKDKYVPJGXIJDHEJNLONFMEAMBLZYXBYLQTWICXQTZTGKUT");
    msg.description.assign("RWUHHISYGCBFGPHTRJUMHNLYXSDLROVPPVDUBQHIPRWUOAZNMZAZEJIZCKLQJVWBRSWEHXMFVDQRYRAZGMOFVJFPFGPBNDTYOLUKMEJPSLAAHKDNMNNTWYYIMADKYETWAURCFPEYCJIEYGDOWUCCIXZPDGFTJVLQUUSSGXBXMIEVNLXPCOVOBEFZZYGIDQCWKKZNWAQUXHBISKCBSMDLRVGJTKWXOOLOQFEGTHQTKVQSBMCQBLHZIRJ");
    msg.reference_frame = 196U;
    msg.leader_bank_lim = 0.971119570226;
    msg.leader_speed_min = 0.939070099067;
    msg.leader_speed_max = 0.30043611384;
    msg.leader_alt_min = 0.824602744841;
    msg.leader_alt_max = 0.57347906572;
    msg.pos_sim_err_lim = 0.914213670768;
    msg.pos_sim_err_wrn = 0.124650421852;
    msg.pos_sim_err_timeout = 10151U;
    msg.converg_max = 0.357171541563;
    msg.converg_timeout = 46227U;
    msg.comms_timeout = 16825U;
    msg.turb_lim = 0.185473268742;
    msg.custom.assign("XGTIIJSHUXNAFYZOBZHJDIRRTEEAWKNNPOTELELZJGCDTXBVOQONFPSQEQGQIKUREZJQPLUJWLLGAUHFHVZZUMIFDGNRVYABWCYFLXKKNMGZZVHVWWBUCYOVHKIOAQUDJPRKKVTSTJZIHOJNWJBRTPFRKQBXFBLTLLRYIADJHQQFWAMDPDEXMSOGYFSDOZRKYMNCIOBSEUPMRUAYIX");

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
    msg.setTimeStamp(0.202049470358);
    msg.setSource(21412U);
    msg.setSourceEntity(30U);
    msg.setDestination(41144U);
    msg.setDestinationEntity(227U);
    msg.formation_name.assign("HRDXIQCBBWASOLSBJCLMGIEZVMYHQECADZHMQKQUTGDRGWPBPIYUJZGSNZYPEZEXXYSQQSCAIAPSAHJFQNXTJXYVBHC");
    msg.type = 200U;
    msg.op = 201U;
    msg.group_name.assign("PKQDUXYNVSAKLRMETOOBCAVGGGNIOFXWJPSBCZKGKOJEBPTGQZVKNWXRTLWIUMWFMPXZUBAZUYLNTLIXKJMFVQOCZYWFVIEZQHYHQCISQGYKBHHVPIAAWMSEFYDDKLJOYGCYFZDBLWLDREIPXUHJUVRQFZYSLXRHAORLSPTHGZECTPTRJABMRYDLHVNJNAGIWZRBEIIQJNMCFDTFTUANRSHSBVCJXPETENNCMGXDSCSQFO");
    msg.plan_id.assign("IOFODBCQJIZAHCEHPBYYKYFHRXXZYQBIHGMOJJQENFRQNZWDAFRLOVCLLGTWCQFAZEBKRYAKZMICSLMOBXIMZSUOXPTRAPTYUTMKVF");
    msg.description.assign("BCYYGDJSPPQHJFNDCMEDZODWOXMBYTOLVKYVUJAAQTKYCEYKEFZMHUIIZVPFTLMVUTRPFRCFAWYDQSRIDDEBYSKHHQKEFXOLUGCJUWGDOOPLJXGAZFLRBPXNMAAXILVISZDLATMERVWYWOLRJHQZIESGUXHWGZSTAIGTGZROHHKSKBGBIYRTJNANEBLNKCWKELIWNQOZFCGCBQFRROUCHVXSTWAB");
    msg.reference_frame = 150U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 61156U;
    tmp_msg_0.off_x = 0.320631779833;
    tmp_msg_0.off_y = 0.125605099821;
    tmp_msg_0.off_z = 0.712121739697;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.0782976945702;
    msg.leader_speed_min = 0.939722526296;
    msg.leader_speed_max = 0.2685102966;
    msg.leader_alt_min = 0.814155167709;
    msg.leader_alt_max = 0.480471896964;
    msg.pos_sim_err_lim = 0.512478273699;
    msg.pos_sim_err_wrn = 0.312277052948;
    msg.pos_sim_err_timeout = 4434U;
    msg.converg_max = 0.349147959796;
    msg.converg_timeout = 58664U;
    msg.comms_timeout = 54627U;
    msg.turb_lim = 0.614845064388;
    msg.custom.assign("VDEZJUOEHMXNBECVGQZGIBSRLSQSBAGWNIMONBFACFXUIVPHBKFWIUUVOQCLACWQOTOKTOHFXDHQUUUMHTMQGZNZJHBYKNIXXYSNRJFQBUSYLORZTGSPCAAPBVKZAVKXHPXEDLYOTKXCEJZICLFGTUVZKRPLMD");

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
    msg.setTimeStamp(0.071308429653);
    msg.setSource(49690U);
    msg.setSourceEntity(249U);
    msg.setDestination(62727U);
    msg.setDestinationEntity(149U);
    msg.timeout = 16875U;
    msg.lat = 0.241696728577;
    msg.lon = 0.81600782427;
    msg.z = 0.500218575662;
    msg.z_units = 245U;
    msg.speed = 0.840218126278;
    msg.speed_units = 164U;
    msg.custom.assign("FJOKVUBRYZOEMPERQMNZNXNQTAFQHPDXYKZLHAPFKWIKBICSFVYHDFBLERQYJCMEDOVLIHJVLLKZVVTGGEHZYXOZURITKGNHWYTJCKUKYRGUTCIAYEJKVXGPXJM");

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
    msg.setTimeStamp(0.52841968702);
    msg.setSource(16080U);
    msg.setSourceEntity(245U);
    msg.setDestination(51688U);
    msg.setDestinationEntity(91U);
    msg.timeout = 39510U;
    msg.lat = 0.831352326183;
    msg.lon = 0.385755037729;
    msg.z = 0.199757183038;
    msg.z_units = 135U;
    msg.speed = 0.759601588358;
    msg.speed_units = 19U;
    msg.custom.assign("LGKCWJBQODSXVOTNBQYSCZMMRLIJMELIJJIFQADVSMTMOPJZTWXAGWAGNWCFYUPTYYVBESPPKWJRDIBRDOBPDZBJGICFFNEJROWHRGUGHTOSCLXQUSCHXTVIEMBDRUDPYIXNFLYZKEQUWMKMGSKEZUYFHXWVVHWNAOJXNFAECQDEANANSCYRADLSP");

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
    msg.setTimeStamp(0.58064079821);
    msg.setSource(63272U);
    msg.setSourceEntity(250U);
    msg.setDestination(39954U);
    msg.setDestinationEntity(226U);
    msg.timeout = 18748U;
    msg.lat = 0.0317939761334;
    msg.lon = 0.778974227296;
    msg.z = 0.0763141002531;
    msg.z_units = 167U;
    msg.speed = 0.458016041346;
    msg.speed_units = 250U;
    msg.custom.assign("XWAAKBHKHILMDMFFFQEYPNVAVCNYAQOSGRSKKUNFNOLEWOUFMOQPUZEBDJTRLTLMDFYSRZNZQYGAEWCIPTCJBWMPWJHPPFVQOCYZCRXUZJUQVGTDMHOKSIIWXHBVBLGGTXJXZECNCZODBPSJAGGQKIEOREMVNBIRMFJMRDRAXYESEDOJLCKVXIBINSQYOFTDZVVHBA");

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
    msg.setTimeStamp(0.655808774089);
    msg.setSource(19180U);
    msg.setSourceEntity(236U);
    msg.setDestination(17600U);
    msg.setDestinationEntity(214U);
    msg.timeout = 11953U;
    msg.lat = 0.593109080387;
    msg.lon = 0.143027611026;
    msg.z = 0.158252257545;
    msg.z_units = 215U;
    msg.speed = 0.697508403224;
    msg.speed_units = 38U;
    msg.custom.assign("POTAPRFSEBCQVVSXZWKYTXGKLHONQALJIOIUZHQMJAACBMFLDTKJWMNTDSRCDLOUCPUDGUUYPAJZAGZFFNJSVALVSSFIHKVPBAOCUSEVRGHFVXQXGQLBEZINJZHSAZLXHWHNYJIGRHAVODKURPWDTGMTBCOENVGOCRTQHMWICJBZJFDDQNTJYEE");

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
    msg.setTimeStamp(0.171379479574);
    msg.setSource(53261U);
    msg.setSourceEntity(51U);
    msg.setDestination(45379U);
    msg.setDestinationEntity(68U);
    msg.timeout = 1950U;
    msg.lat = 0.554690928207;
    msg.lon = 0.0834350637131;
    msg.z = 0.674012549412;
    msg.z_units = 164U;
    msg.speed = 0.448210623624;
    msg.speed_units = 229U;
    msg.custom.assign("UKFBHNSEHKPUTTDGBKFAMDMNLEXPAHIXKQYBFPGGBNVQTMZXNYBJKULCWVEQRXPZSKSMLVEQERBLOOHMOYHYDTBRANVLHJWCQUPGJKGDFAAWKCPXPFDZHMCINICKGULJ");

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
    msg.setTimeStamp(0.11904364642);
    msg.setSource(41868U);
    msg.setSourceEntity(192U);
    msg.setDestination(29567U);
    msg.setDestinationEntity(194U);
    msg.timeout = 34900U;
    msg.lat = 0.0964235572952;
    msg.lon = 0.555665246618;
    msg.z = 0.540936926874;
    msg.z_units = 175U;
    msg.speed = 0.278922411074;
    msg.speed_units = 222U;
    msg.custom.assign("SLEWPWYAZGUSSRLPKOHIHBASTZGAFCCYECSBAUETFCJUDHFIOUSNJGJOPGYYVRCBRAYOKHGGFXXIFQQTWVOXBVZPEOLWRBBMUVKIGXEMXKAVBQDKWHJTQJOAZQCVVMMPCPXSPSFLINJNZONXDLHBREEJQMYXZCRLZSDRCUGKIQHUZUMNHFWQLNRZNAYTPNDFBFMMQFXXMDMKDKVJSOKAWLZWINRUWBOHCTIPIVDTRIYTE");

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
    msg.setTimeStamp(0.95644061242);
    msg.setSource(64269U);
    msg.setSourceEntity(190U);
    msg.setDestination(28003U);
    msg.setDestinationEntity(145U);
    msg.arrival_time = 0.255615759721;
    msg.lat = 0.198144093573;
    msg.lon = 0.882521385305;
    msg.z = 0.0424460339627;
    msg.z_units = 190U;
    msg.travel_z = 0.0699943793848;
    msg.travel_z_units = 67U;
    msg.delayed = 164U;

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
    msg.setTimeStamp(0.259504195734);
    msg.setSource(26391U);
    msg.setSourceEntity(55U);
    msg.setDestination(5966U);
    msg.setDestinationEntity(147U);
    msg.arrival_time = 0.666347598757;
    msg.lat = 0.560811869042;
    msg.lon = 0.480883675293;
    msg.z = 0.939600533296;
    msg.z_units = 182U;
    msg.travel_z = 0.991417447447;
    msg.travel_z_units = 228U;
    msg.delayed = 145U;

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
    msg.setTimeStamp(0.704150185971);
    msg.setSource(24694U);
    msg.setSourceEntity(59U);
    msg.setDestination(26338U);
    msg.setDestinationEntity(213U);
    msg.arrival_time = 0.207793629822;
    msg.lat = 0.663586896842;
    msg.lon = 0.787944822117;
    msg.z = 0.0597452174465;
    msg.z_units = 31U;
    msg.travel_z = 0.155384957915;
    msg.travel_z_units = 214U;
    msg.delayed = 246U;

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
    msg.setTimeStamp(0.65061853241);
    msg.setSource(40340U);
    msg.setSourceEntity(189U);
    msg.setDestination(36914U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.894998788543;
    msg.lon = 0.589483017451;
    msg.z = 0.478978032166;
    msg.z_units = 90U;
    msg.speed = 0.756224173399;
    msg.speed_units = 15U;
    msg.bearing = 0.377529680912;
    msg.cross_angle = 0.140405495066;
    msg.width = 0.679818269595;
    msg.length = 0.695368422009;
    msg.coff = 49U;
    msg.angaperture = 0.166451423793;
    msg.range = 51585U;
    msg.overlap = 71U;
    msg.flags = 62U;
    msg.custom.assign("DOCQJJWKBWLLVODRKTSCTBEYFKGYOTWPIVCLKLZZQNUDDZULIJJHUMMPUAGOOLNYVAKBQLFYZHRGQJEJSEHMDHGRNHEGFBXTXFOAHYEQFXMDLNVQRTWFUSJXLC");

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
    msg.setTimeStamp(0.633750925727);
    msg.setSource(18058U);
    msg.setSourceEntity(117U);
    msg.setDestination(55726U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.703371940235;
    msg.lon = 0.705498912417;
    msg.z = 0.834556174785;
    msg.z_units = 94U;
    msg.speed = 0.911930787768;
    msg.speed_units = 53U;
    msg.bearing = 0.6067309312;
    msg.cross_angle = 0.819187365685;
    msg.width = 0.407577402871;
    msg.length = 0.0687629712318;
    msg.coff = 32U;
    msg.angaperture = 0.445345056453;
    msg.range = 10560U;
    msg.overlap = 5U;
    msg.flags = 229U;
    msg.custom.assign("HPLZPOFGQPIRZCOSDUHHSALVTSPZCVHJJYEIELQDZIDKCIRNNPHBYHYNHPZXYDYGKCNOWORMPOLIKRVFMTRTBUDBKUDXQRMSCBEEXWJPAUNSACSA");

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
    msg.setTimeStamp(0.0738017452765);
    msg.setSource(61542U);
    msg.setSourceEntity(207U);
    msg.setDestination(23034U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.860157611736;
    msg.lon = 0.815527778876;
    msg.z = 0.0988827404957;
    msg.z_units = 77U;
    msg.speed = 0.233552019052;
    msg.speed_units = 132U;
    msg.bearing = 0.826486291057;
    msg.cross_angle = 0.00492355638628;
    msg.width = 0.0349389232568;
    msg.length = 0.705002204265;
    msg.coff = 244U;
    msg.angaperture = 0.519423094491;
    msg.range = 1601U;
    msg.overlap = 145U;
    msg.flags = 86U;
    msg.custom.assign("RRQMXWICOYMFTPVZUKSKPH");

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
    msg.setTimeStamp(0.480772250004);
    msg.setSource(9820U);
    msg.setSourceEntity(73U);
    msg.setDestination(10395U);
    msg.setDestinationEntity(38U);
    msg.timeout = 29356U;
    msg.lat = 0.721605904335;
    msg.lon = 0.239492778812;
    msg.z = 0.753472717001;
    msg.z_units = 202U;
    msg.speed = 0.597787822779;
    msg.speed_units = 151U;
    msg.syringe0 = 139U;
    msg.syringe1 = 188U;
    msg.syringe2 = 212U;
    msg.custom.assign("LBEZJULCXPAYNGBYMMZHZIBRICKVPNLGSIWSRANUCQUOWYMJNQSNCSRKLOTRFSSLYRFZUHLVXQAULQZTRCXSKHECPMKNGJBJQDBFPXRPOZBFFMYQ");

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
    msg.setTimeStamp(0.157565744933);
    msg.setSource(34739U);
    msg.setSourceEntity(17U);
    msg.setDestination(59557U);
    msg.setDestinationEntity(181U);
    msg.timeout = 2988U;
    msg.lat = 0.548231180908;
    msg.lon = 0.834770148131;
    msg.z = 0.177745959709;
    msg.z_units = 7U;
    msg.speed = 0.441291711284;
    msg.speed_units = 135U;
    msg.syringe0 = 235U;
    msg.syringe1 = 237U;
    msg.syringe2 = 249U;
    msg.custom.assign("VQJLFZDTEBZZOWASIHUVJVIACERLCPIFGKYBCQAHZXTBSFWQKINKFBWGKFPSYWNVOHNOODTPYNUVKMWBBTUEIXPQMO");

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
    msg.setTimeStamp(0.574382629907);
    msg.setSource(36267U);
    msg.setSourceEntity(209U);
    msg.setDestination(2309U);
    msg.setDestinationEntity(192U);
    msg.timeout = 52838U;
    msg.lat = 0.558689329674;
    msg.lon = 0.183654072269;
    msg.z = 0.553216103853;
    msg.z_units = 218U;
    msg.speed = 0.331608292556;
    msg.speed_units = 246U;
    msg.syringe0 = 156U;
    msg.syringe1 = 195U;
    msg.syringe2 = 225U;
    msg.custom.assign("ZBKMSWIXVEKRHGFEQJMQPONRTYUWLFREYBQWJUIH");

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
    msg.setTimeStamp(0.00978183088488);
    msg.setSource(31782U);
    msg.setSourceEntity(137U);
    msg.setDestination(31328U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.381344405653);
    msg.setSource(65088U);
    msg.setSourceEntity(34U);
    msg.setDestination(39989U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.126159109139);
    msg.setSource(32256U);
    msg.setSourceEntity(47U);
    msg.setDestination(43521U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.994354217744);
    msg.setSource(6059U);
    msg.setSourceEntity(107U);
    msg.setDestination(54748U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.80567311983;
    msg.lon = 0.905610830953;
    msg.z = 0.507744518215;
    msg.z_units = 171U;
    msg.speed = 0.854394325056;
    msg.speed_units = 162U;
    msg.takeoff_pitch = 0.552175862812;
    msg.custom.assign("KBNXLYBFNXK");

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
    msg.setTimeStamp(0.928200701874);
    msg.setSource(29205U);
    msg.setSourceEntity(94U);
    msg.setDestination(6564U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.78567056022;
    msg.lon = 0.362833308092;
    msg.z = 0.613805604361;
    msg.z_units = 224U;
    msg.speed = 0.329962959415;
    msg.speed_units = 172U;
    msg.takeoff_pitch = 0.83874889514;
    msg.custom.assign("EPBYLFAUHBRXUIFAUFVQET");

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
    msg.setTimeStamp(0.781876057573);
    msg.setSource(43944U);
    msg.setSourceEntity(27U);
    msg.setDestination(34531U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.492565992175;
    msg.lon = 0.0887629817906;
    msg.z = 0.707246006934;
    msg.z_units = 30U;
    msg.speed = 0.689128905904;
    msg.speed_units = 88U;
    msg.takeoff_pitch = 0.334841253618;
    msg.custom.assign("UTRHZCLBWXJZMKLPRSFHIKFIPFKDVYQGXDZHXCAWDUEZXTQMMNHEECCBVOTQHBIYUNJDLNBSWQUPCVULASNGOGN");

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
    msg.setTimeStamp(0.0748553876658);
    msg.setSource(57601U);
    msg.setSourceEntity(76U);
    msg.setDestination(41804U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.116594676528;
    msg.lon = 0.144802661479;
    msg.z = 0.739054164274;
    msg.z_units = 146U;
    msg.speed = 0.414229283789;
    msg.speed_units = 49U;
    msg.abort_z = 0.33646788718;
    msg.bearing = 0.678916835147;
    msg.glide_slope = 134U;
    msg.glide_slope_alt = 0.182291673249;
    msg.custom.assign("ZPFMODERGIFVNSEVOSSLNSCKCKUGRHCRKLIKKVWLXTAHZQKGNPRQLARHGHIRQXSDXMFVXGYDX");

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
    msg.setTimeStamp(0.0753999394864);
    msg.setSource(38161U);
    msg.setSourceEntity(161U);
    msg.setDestination(63128U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.738298502892;
    msg.lon = 0.754552623894;
    msg.z = 0.651934043968;
    msg.z_units = 178U;
    msg.speed = 0.379103267375;
    msg.speed_units = 97U;
    msg.abort_z = 0.0746002793361;
    msg.bearing = 0.234920638354;
    msg.glide_slope = 59U;
    msg.glide_slope_alt = 0.0945525984352;
    msg.custom.assign("NYMVSUQDVJCJGPQZPBTKASGYXUSHADZRNIHIZTEIAYRVLQIRXLSFGPQQODFBITOKWJZEAIXAORZOVCFEZIMXRGACQRDWFFLYNE");

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
    msg.setTimeStamp(0.00240919554612);
    msg.setSource(18755U);
    msg.setSourceEntity(230U);
    msg.setDestination(23280U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.444085050688;
    msg.lon = 0.753668906313;
    msg.z = 0.0930151407916;
    msg.z_units = 227U;
    msg.speed = 0.60427868882;
    msg.speed_units = 97U;
    msg.abort_z = 0.384654943967;
    msg.bearing = 0.915605679943;
    msg.glide_slope = 117U;
    msg.glide_slope_alt = 0.936639840834;
    msg.custom.assign("UWPIHVZOHRIJJEZGASUEXPJLWISOQIOHTXJKPRUVMPYBDKDVUZEUJXKZOF");

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
    msg.setTimeStamp(0.215720572546);
    msg.setSource(30188U);
    msg.setSourceEntity(153U);
    msg.setDestination(54416U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.328018349437;
    msg.lon = 0.069828719995;
    msg.speed = 0.580255069083;
    msg.speed_units = 129U;
    msg.limits = 133U;
    msg.max_depth = 0.297345287398;
    msg.min_alt = 0.463893771718;
    msg.time_limit = 0.709790536894;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.709428231697;
    tmp_msg_0.lon = 0.080292596752;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("EJNIMCZOEFTKXIIFWLFRFXPDQJFZPVUUZAHOGROTQUAHKSHTJSSPBWCLURBYQKVLQVAQEBTDVVNCSHVGIDCIW");
    msg.custom.assign("ULROFVGCDNSHZNBXTAXGHRRBVSIPLMLVRJUEPNOYMSICTVXVZDJGZUSOAFWYGKIKVEFFVCQXOHIBTYWYLRALRKSTJDWINHGEUFIMSJBEKPDQWSPMECCWHZEXNOCQPOPDTLZCZFYVLTMQIADUXQYNZDKXAQXRYFJDURL");

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
    msg.setTimeStamp(0.12445150948);
    msg.setSource(59983U);
    msg.setSourceEntity(92U);
    msg.setDestination(46352U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.765284542468;
    msg.lon = 0.651677675977;
    msg.speed = 0.515358766179;
    msg.speed_units = 112U;
    msg.limits = 71U;
    msg.max_depth = 0.91862728386;
    msg.min_alt = 0.889812801957;
    msg.time_limit = 0.101059033338;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.342874026261;
    tmp_msg_0.lon = 0.782692285335;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("PSSQNGWBBZMKSRTIYZUOROTUXVAVNYVEHLHSQHLBNEDKWDKAIVTRMENWLNLVOUGBUPGYBKSHMTFJUTHYGAFSZIMICUADJQXHCC");
    msg.custom.assign("OBGMJPYVOOKCXMFZJGJHONYQCNCLLJLDEXSEAGIWGVKNXXYVINQTBHVPNDHOBNZZXWYOKPFDUOEBVMSZDTYNYKURUWXXNPGGYWKTWKJXSWXRCLNLKRUCVFYRRAJUBILHMSEZCWOTRIRIWSDEICASFIPBEVIEAGPDDZKMFYGKJFQALWZQRDIFSOPJCHAVGTZZTQVHQEUYFQDIJBFTHEZHRSMPCOUTUVHSQABGMLTKDWBMUJPQMTALNAHSPME");

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
    msg.setTimeStamp(0.499434832741);
    msg.setSource(26615U);
    msg.setSourceEntity(73U);
    msg.setDestination(22687U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.523024932009;
    msg.lon = 0.518772754961;
    msg.speed = 0.109046550632;
    msg.speed_units = 185U;
    msg.limits = 212U;
    msg.max_depth = 0.699530721725;
    msg.min_alt = 0.26014752083;
    msg.time_limit = 0.563278248802;
    msg.controller.assign("JNYCIJGWJVOLPHTESHWOSUXGMERISFOCYYCRCBFOMWHLINTFQMRDUKWKTVKHFSPROXMESKPTYDXZTWVWBUDWLUWDPNTGZDMOFLEHPEVGNECFTXGKOCCQVSPNUZAMEOOR");
    msg.custom.assign("VOOETKTFGFRYLHHEWHKVZUNTWAW");

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
    msg.setTimeStamp(0.593289929791);
    msg.setSource(36573U);
    msg.setSourceEntity(83U);
    msg.setDestination(64545U);
    msg.setDestinationEntity(139U);
    msg.target.assign("SAHLKLXJEHILMRRRTGXEYUVBOTMNUUKUHBNTORNFEKBXHYXZRVCJJQGDWWYCVCMJLFXEIZWYDYDCBWSBZYAIVD");
    msg.max_speed = 0.948755827718;
    msg.speed_units = 105U;
    msg.lat = 0.613455010245;
    msg.lon = 0.0357262599874;
    msg.z = 0.515257524066;
    msg.z_units = 23U;
    msg.custom.assign("OWLRYQVVJALQQXOMAOVTCFHWSPUJGWIEJLZSANKFCVEWHYPYCIEAGRGDYVLFFCCFXEVHUBSPXXBDMUDRQJIAERJLZDDUVBSLDLFJHT");

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
    msg.setTimeStamp(0.17724045281);
    msg.setSource(51412U);
    msg.setSourceEntity(174U);
    msg.setDestination(16949U);
    msg.setDestinationEntity(7U);
    msg.target.assign("UIBHXVVVAIYUNTQJ");
    msg.max_speed = 0.151382782791;
    msg.speed_units = 138U;
    msg.lat = 0.0878252639367;
    msg.lon = 0.718798933891;
    msg.z = 0.336269738189;
    msg.z_units = 211U;
    msg.custom.assign("WWQMMAGINLRWJGKPJVTFJWNFHURQQFKQSPRKPSABNEMPBRGCOMDOUQBAHILLDJPHDZIOYJQSOKHHCVOCTXUJGMMVRAEGVIKBBFWDNWUOEBCIQM");

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
    msg.setTimeStamp(0.339349101951);
    msg.setSource(14490U);
    msg.setSourceEntity(112U);
    msg.setDestination(29268U);
    msg.setDestinationEntity(248U);
    msg.target.assign("OCSPMCPJXFIQKNUASNZHQTEWLNKTBJMUDOMITDMUXRVTEDPWJHDKLPCAMZBSRYYCAGKGEVUPZGYSFGJHLRLKBFSUPKBOKQZZYYAKTFJRZLCBIMWNTASESXBDJUBJYUYTWLMYGDVIFUEEWHDRAHEJNGGDXJOZREEQIGYLILQHVOHLJGPEDIOVCNBVXAQFXOPH");
    msg.max_speed = 0.212494596334;
    msg.speed_units = 166U;
    msg.lat = 0.1311768119;
    msg.lon = 0.318757780117;
    msg.z = 0.877622700724;
    msg.z_units = 30U;
    msg.custom.assign("JZRZDFWZPQWOEHARWZKCSPXORRZORUEFUUYWFOQBMRHYKTAUBZUJLCBJJTXFXTVVLHBQKCMLYAVCUDRDYYUMGSEEIATWI");

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
    msg.setTimeStamp(0.698130055066);
    msg.setSource(38722U);
    msg.setSourceEntity(212U);
    msg.setDestination(3371U);
    msg.setDestinationEntity(18U);
    msg.timeout = 35114U;
    msg.lat = 0.0218998662507;
    msg.lon = 0.525736313692;
    msg.speed = 0.851621541135;
    msg.speed_units = 20U;
    msg.custom.assign("HLKBEQZHSKVQSDTRPXPMVPQTSAYRVRKHTAHFMYXWLDDKNNUIJXPZRWOCBJPDPOLEAPQXNZEVRLJPIJPYRHEQQIAZXCSKGGUJMKEWMHOS");

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
    msg.setTimeStamp(0.0318301337197);
    msg.setSource(41683U);
    msg.setSourceEntity(235U);
    msg.setDestination(56339U);
    msg.setDestinationEntity(177U);
    msg.timeout = 51474U;
    msg.lat = 0.286453367807;
    msg.lon = 0.684681429295;
    msg.speed = 0.801597876889;
    msg.speed_units = 65U;
    msg.custom.assign("DSSKNFPHXIUCQLOBTMARTRIVZQMTNRYBCJBHMLJOLCZBVPYALOLAEHOGKRFHZOGCWSJKDHVRBSDIOFTZIRGSDBJNEPTKWWZUCDW");

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
    msg.setTimeStamp(0.154804344379);
    msg.setSource(51675U);
    msg.setSourceEntity(225U);
    msg.setDestination(43063U);
    msg.setDestinationEntity(26U);
    msg.timeout = 639U;
    msg.lat = 0.484407248743;
    msg.lon = 0.847148104494;
    msg.speed = 0.910749514825;
    msg.speed_units = 179U;
    msg.custom.assign("RYXPFQWBXCXCNFPMCMLVSAGDPOELBRUGMBQYRUXWQJXKZSCWOWUZQNRNHBDFCZZCRFHKJPSYJRMLTEDWMOKYWZAAHO");

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
    msg.setTimeStamp(0.27531410888);
    msg.setSource(4622U);
    msg.setSourceEntity(44U);
    msg.setDestination(8332U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.200443751508;
    msg.lon = 0.0371043129268;
    msg.z = 0.398247730475;
    msg.z_units = 24U;
    msg.radius = 0.0304506500796;
    msg.duration = 13460U;
    msg.speed = 0.422977731624;
    msg.speed_units = 114U;
    msg.popup_period = 24115U;
    msg.popup_duration = 59692U;
    msg.flags = 18U;
    msg.custom.assign("YWDRCXMCALILFQWPSBIZNYRUAMFXIVJM");

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
    msg.setTimeStamp(0.339999723362);
    msg.setSource(16337U);
    msg.setSourceEntity(201U);
    msg.setDestination(6625U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.188209808474;
    msg.lon = 0.497518580639;
    msg.z = 0.29217520608;
    msg.z_units = 161U;
    msg.radius = 0.205099453854;
    msg.duration = 37898U;
    msg.speed = 0.626193511561;
    msg.speed_units = 136U;
    msg.popup_period = 35635U;
    msg.popup_duration = 13593U;
    msg.flags = 192U;
    msg.custom.assign("XGOUZOHDYCUZISZGVPSOASTWUIYRKZWJGFRSSBNGGPYJWVYQEDMVUNONIBRHMWJZRLMJNQBLFYFLQKVOUDCSXYMGAXQLDNICIOJUCFENMTAXSXNYRTMCTRKTAUEWRPTPFDXBTVXFYBECHHQHEKTIXFPDHKBVMWIZQSCJZUVCEVBVMAQODAPBFYSPZHIABCEOIERKAPRKKZDOMVHRWANWLUKYAOHNXEQZHNULQJGJFCTPLIWLPGDLGLJQM");

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
    msg.setTimeStamp(0.352796867311);
    msg.setSource(12491U);
    msg.setSourceEntity(250U);
    msg.setDestination(50527U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.804231019648;
    msg.lon = 0.780304964191;
    msg.z = 0.974172102739;
    msg.z_units = 110U;
    msg.radius = 0.692655924726;
    msg.duration = 24624U;
    msg.speed = 0.0972635368419;
    msg.speed_units = 160U;
    msg.popup_period = 53777U;
    msg.popup_duration = 26964U;
    msg.flags = 5U;
    msg.custom.assign("AFMXLQZPGHDREGWDSUZNRWLWNARDIWEWZOCREURQMXCKJDSPDQAGYLRQHJPMYPAIVGKTUOGQOCBMBVIOPYAKUTKXFTZRVFSNVBFJWAHDNNYEKVRHSVBQZELATDKOGDYDSFFKIMBMLXNGXOYNKJLTBHFYGAXQJY");

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
    msg.setTimeStamp(0.386812493949);
    msg.setSource(63243U);
    msg.setSourceEntity(155U);
    msg.setDestination(55698U);
    msg.setDestinationEntity(193U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("KZQRYSVVQSDVNTFAOFWUCWQSNQVEZFDERTYOCIGEXRJTOCPEXZPQKBLPUJBBWSXBRSYHKZMHNUOHKDHZIPCUIXSIHEVRDUWYQZALFOAFFBAPECKQWLGNIGNEIXTPYTFJSDERUKIBGJGDMFTDMYFVALLCKVLHXJHXZJGMXMLOSPDEPQIMTRWRVJRKAUSONUCKQAMWCU");
    IMC::Dislodge tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 46395U;
    tmp_tmp_msg_0_0.rpm = 0.969553341101;
    tmp_tmp_msg_0_0.direction = 219U;
    tmp_tmp_msg_0_0.custom.assign("MRRIGAXTOPQAPRBKJZOJFNRXJXNBMABVMNHNVUCVFVVPWJLVEAMIIOJVOAIHWTEPKGFINXYTMZPFAPAFYJRNQNEMJQDEVALTSXSWXNUDTVHVX");
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
    msg.setTimeStamp(0.665804361249);
    msg.setSource(6157U);
    msg.setSourceEntity(192U);
    msg.setDestination(35113U);
    msg.setDestinationEntity(124U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("XRLCWERRPYBPQEVGTONLRXBDEEBXDRTANALLCJFDZVXQVXUJPQICNSGBCZQYKGGICSFMJRMGORSNYMTWYPPGKMLUEYHADXVUSAPGZJAEUAVTJBZJOKVOAUYSFQXRLENZIHQXCOFUYAIIKODBALJIEVKLMDWRMHDXWPSGIGOFEZTTYTMMQBOEPCTFWVJKKPHHSUZNNB");
    IMC::Goto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 43396U;
    tmp_tmp_msg_0_0.lat = 0.66642428159;
    tmp_tmp_msg_0_0.lon = 0.63196191119;
    tmp_tmp_msg_0_0.z = 0.640471140242;
    tmp_tmp_msg_0_0.z_units = 119U;
    tmp_tmp_msg_0_0.speed = 0.444344838611;
    tmp_tmp_msg_0_0.speed_units = 77U;
    tmp_tmp_msg_0_0.roll = 0.0227082236389;
    tmp_tmp_msg_0_0.pitch = 0.452802885688;
    tmp_tmp_msg_0_0.yaw = 0.415651669795;
    tmp_tmp_msg_0_0.custom.assign("LPXALKRLFWVCUPXMGDWLITZVNMGVDMAGDQWJWUFWLTYHIOQEJFIVVTZGBFCOYELOIHLFTSBNRXSAYYUNWTITPZDKMLTATKCHIZDAOMISJJXHCSQRQGRZTQWXKS");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Aborted tmp_tmp_msg_0_1;
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
    msg.setTimeStamp(0.850206606791);
    msg.setSource(348U);
    msg.setSourceEntity(233U);
    msg.setDestination(35820U);
    msg.setDestinationEntity(226U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("FKFWVDEMOESCTGNUEKYINASZBHTCHBJWMOXXJQQQGGVEGTVKHUEBPILLGMAP");
    IMC::CommsRelay tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.169926309918;
    tmp_tmp_msg_0_0.lon = 0.548918477086;
    tmp_tmp_msg_0_0.speed = 0.584142787736;
    tmp_tmp_msg_0_0.speed_units = 167U;
    tmp_tmp_msg_0_0.duration = 49320U;
    tmp_tmp_msg_0_0.sys_a = 50729U;
    tmp_tmp_msg_0_0.sys_b = 10300U;
    tmp_tmp_msg_0_0.move_threshold = 0.0282560051319;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::HistoricEvent tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.text.assign("UAGNNJYXISTEBUWDOOFDSJYAJOTOIIFUYBVXXRATTOHRVDHNWSEPQLIBCKMBPAFTNHCEDYAXBLUESUWZSDEANRQFYSCGPPNQA");
    tmp_tmp_msg_0_1.type = 243U;
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
    msg.setTimeStamp(0.762106418974);
    msg.setSource(63881U);
    msg.setSourceEntity(126U);
    msg.setDestination(23033U);
    msg.setDestinationEntity(165U);
    msg.timeout = 25071U;
    msg.lat = 0.576859633109;
    msg.lon = 0.570973099451;
    msg.z = 0.345074571229;
    msg.z_units = 86U;
    msg.speed = 0.666575310155;
    msg.speed_units = 121U;
    msg.bearing = 0.814681409745;
    msg.width = 0.630274493728;
    msg.direction = 198U;
    msg.custom.assign("OHKCQRKPJXYOIWMKIYZEZXUJWEFCRNQABWJOYADVJRKZTDTUFHIDTZYEBBGEWHMSMSCWOPHTTILHDUJXYZHIDKBNPBXVSULVZBYOQAGQROFEAPFVQJKRQBDPNLSZMIEGNDUNMSDXMWAIASNVHZVQAORACTCPEEZEVV");

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
    msg.setTimeStamp(0.768909608344);
    msg.setSource(1588U);
    msg.setSourceEntity(112U);
    msg.setDestination(18954U);
    msg.setDestinationEntity(156U);
    msg.timeout = 18506U;
    msg.lat = 0.122722274515;
    msg.lon = 0.884287866559;
    msg.z = 0.246434536237;
    msg.z_units = 155U;
    msg.speed = 0.942879002687;
    msg.speed_units = 29U;
    msg.bearing = 0.366109101898;
    msg.width = 0.182680171691;
    msg.direction = 117U;
    msg.custom.assign("KKPMWJXEGMIFIZXFWHNUHFCYPJOWTUEVLVKSYOGJAABDRTWGMXGBXBIWJZBFVFPAHAADUAVBFTUYOKRGCVEMCTIUMTGBSNLLJZAOVLOPLWTQDFVIDKLSEYTTRXRCSDMIQPPPDVZAVSZSGDNUQPRFYDBEREHNGIWRLRJQKUCNSWCCOQOPNNRWKZQTUZGSJOENYXYPNHZQKQSBILAMBDVWMBOHFDXYYZCXGRSQX");

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
    msg.setTimeStamp(0.308535576752);
    msg.setSource(20898U);
    msg.setSourceEntity(110U);
    msg.setDestination(44692U);
    msg.setDestinationEntity(150U);
    msg.timeout = 61943U;
    msg.lat = 0.612577898048;
    msg.lon = 0.508284184243;
    msg.z = 0.145175267964;
    msg.z_units = 194U;
    msg.speed = 0.0492591262162;
    msg.speed_units = 149U;
    msg.bearing = 0.604551382238;
    msg.width = 0.87746405667;
    msg.direction = 68U;
    msg.custom.assign("PKUCSHCIDNOKHNOPGZYTVDTHVUXJWBISJBUTDESQENAUANLXDBJUTSQVCFUWPMZQGEKYOSUOWTSGGCFIVDLRYOQNAAMASDYHDZNSREEWLFKCIABYSYNTKPLTXHG");

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
    msg.setTimeStamp(0.45047080056);
    msg.setSource(14603U);
    msg.setSourceEntity(122U);
    msg.setDestination(30319U);
    msg.setDestinationEntity(98U);
    msg.op_mode = 221U;
    msg.error_count = 171U;
    msg.error_ents.assign("PLSLMFMHIHWONXJTXTZAYKDWACOMREYLVNKJKKUIGLSPJYDHBJXOMGVTJZAFYTLIVTKGQEDGNYYBRHNBAAHXLVQOLTYREDIMQSDMXDRED");
    msg.maneuver_type = 20946U;
    msg.maneuver_stime = 0.931928856191;
    msg.maneuver_eta = 46613U;
    msg.control_loops = 1582762U;
    msg.flags = 93U;
    msg.last_error.assign("INJDNPVXSRANLZDVPFBKRTHCCVRAEGHSTTBVFTQJRGFWYBUFWULKMHBCEBJIZTJWRGDLRARDXQZFWYDKNEBXMAEBJIDSOQVVLPOKPNNALSGCGHPFJQRYVTVNWZRPXGNDHSEBFXGGMJWCITJQVULEXIWAQYDQXCUOOLETEKFPHYWGONKAULEJXZMGCOQYHYDHTZCICDULPOQMMYZUSXKAIONFWMMZWVIMXOUMLZSRSHKESBUBKYYHZIQ");
    msg.last_error_time = 0.165297181443;

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
    msg.setTimeStamp(0.163882986191);
    msg.setSource(30522U);
    msg.setSourceEntity(44U);
    msg.setDestination(64452U);
    msg.setDestinationEntity(176U);
    msg.op_mode = 77U;
    msg.error_count = 26U;
    msg.error_ents.assign("RICVDTYEOJFQAUXWXVLECMEQMAAYZHNFUTLALDCRPZQKMKTKJUMJLOUXAWDNOYZNSMEGXBXORKOQULANNGWSLJBGZUJOVRULFSVFKOZDTFUYDNBQBMNJVPEFAWVKQGQNPZDEJLJWDZHRS");
    msg.maneuver_type = 43030U;
    msg.maneuver_stime = 0.918082501004;
    msg.maneuver_eta = 16591U;
    msg.control_loops = 807230891U;
    msg.flags = 42U;
    msg.last_error.assign("QNHBLZYTHUSXMZXPAYAOEZKHQGPXHQRNMHOMZTYVIXWBOMBTVTZIYZONDLJNWCXYBCYVGVWQJUMLAGFOAJGLVWRLHWCTFUFWEIFNDEKDXGVCQWOHMHTRDREUQBWPKWSQROEGULUBUJJYGZVQTUNGMLVSFCHBBRSUIN");
    msg.last_error_time = 0.810027638619;

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
    msg.setTimeStamp(0.406661944074);
    msg.setSource(58471U);
    msg.setSourceEntity(27U);
    msg.setDestination(10504U);
    msg.setDestinationEntity(189U);
    msg.op_mode = 79U;
    msg.error_count = 222U;
    msg.error_ents.assign("XYYQGNIQPCXJOCEIWTZRBBLEJLOAHCEMBNJRQBAQTBFAAWKNJDMHYAIYAWLZCISDRIKHNWMXAEGNMFPORQPSKJGOGSZXVONUANFSPHWWWWRGCFXZEUUHZEPGQWBDKZPLBHFZCVVDKSCNMLVTIRDKYHOSSVSPLYHDUUX");
    msg.maneuver_type = 31633U;
    msg.maneuver_stime = 0.367178927143;
    msg.maneuver_eta = 45474U;
    msg.control_loops = 4145898987U;
    msg.flags = 205U;
    msg.last_error.assign("VOAGVQURWTHKIGIBHHVDRHLNALYVXYRSMOKVWYYLMJDKOYVPMDTWMVZUAERHCTBLIWTLPKDWXQKXDQISDAUMCQONXZUXFZWPECBNHSOJIRJYVNQFPCEOQMULAACTHZPXGEWBCOZNNCLJEBAKNJW");
    msg.last_error_time = 0.629200398178;

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
    msg.setTimeStamp(0.683398675846);
    msg.setSource(42285U);
    msg.setSourceEntity(146U);
    msg.setDestination(57425U);
    msg.setDestinationEntity(23U);
    msg.type = 3U;
    msg.request_id = 24284U;
    msg.command = 6U;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.290259879739;
    tmp_msg_0.lon = 0.477650122306;
    tmp_msg_0.z = 0.972736238105;
    tmp_msg_0.z_units = 216U;
    tmp_msg_0.speed = 0.244084070596;
    tmp_msg_0.speed_units = 20U;
    tmp_msg_0.bearing = 0.457771643426;
    tmp_msg_0.cross_angle = 0.160303686266;
    tmp_msg_0.width = 0.866594530898;
    tmp_msg_0.length = 0.988564175794;
    tmp_msg_0.coff = 89U;
    tmp_msg_0.angaperture = 0.471516958699;
    tmp_msg_0.range = 55333U;
    tmp_msg_0.overlap = 99U;
    tmp_msg_0.flags = 55U;
    tmp_msg_0.custom.assign("VGGVLPEERWVEFNUEKUOVFCUHSQYVNPJDXPLVBJRDZTALIBSLSDYGEPSOQNTHRDZHLDJOMANJGIYFKJYNNVKLZABDDIJVNUZXUKJSZVGMEBFYWQDSRFWTFKPFHKNOCXZSYPAQDXICMGJICZWGTQAAFCPKQOCOESAPIYOEUWTRMDOHFEHZFCGIERBKRNSHYCHRWUGITTMZYMMVBTJXTTBXXKAJCMKOAYQMIHLULXWHLBIWB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 25839U;
    msg.info.assign("ELHUGZJNCZFDISMTGURWHOWNLGYCPPHCRGPSBVOGXCKLEXCWAYMUEJOBAHFWNAFJYTWIQPYMXQTAKQXOZBSOLYGZADDNJDSOJGBUJBVCAVTKSBSRUZXFXNIWELRXLQJYULAEROUXJEOSPQUIOAMECFRRLBXQMKSBBY");

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
    msg.setTimeStamp(0.108051445562);
    msg.setSource(15351U);
    msg.setSourceEntity(101U);
    msg.setDestination(59459U);
    msg.setDestinationEntity(28U);
    msg.type = 159U;
    msg.request_id = 14155U;
    msg.command = 125U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.969810259617;
    tmp_msg_0.lon = 0.48047422076;
    tmp_msg_0.z = 0.0778311945215;
    tmp_msg_0.z_units = 187U;
    tmp_msg_0.speed = 0.0165765859648;
    tmp_msg_0.speed_units = 152U;
    tmp_msg_0.takeoff_pitch = 0.344882567195;
    tmp_msg_0.custom.assign("CQRJDOTEVOMQKHHMQMTLYSCVMYOMXOZSRLXXOUSIGAUFXWSNRJRVQHDFWODTQQPZWWLBGRNTKRPEERML");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 51607U;
    msg.info.assign("JTOQKXEMAFLDQVYOILSEOURCBRNJLBORQKNIFCWKTCIXTHNMRITXELWMIHGOVXSJYWQFKPLPEYZEHJEBSJBDCCLOVVPZPNCEQSRGZJUOYJRSHXSJMXVHMVGVTUKWYDPHKBMGUZRPLIAKCARGNPTEQDTUQDFHQIUDFLYWPHPOAWTKZFBSGXMLPFABHGQZXZOOWCUDZTIYKDCANYFAQWNUGGFSSLNUYDZDBVVHAEANEXCXIGAZN");

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
    msg.setTimeStamp(0.7537307865);
    msg.setSource(34930U);
    msg.setSourceEntity(14U);
    msg.setDestination(36943U);
    msg.setDestinationEntity(100U);
    msg.type = 159U;
    msg.request_id = 16569U;
    msg.command = 13U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 64063U;
    tmp_msg_0.lat = 0.387127616222;
    tmp_msg_0.lon = 0.0439429477625;
    tmp_msg_0.z = 0.249984985745;
    tmp_msg_0.z_units = 107U;
    tmp_msg_0.speed = 0.214732942189;
    tmp_msg_0.speed_units = 250U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.109376154835;
    tmp_tmp_msg_0_0.y = 0.907127646073;
    tmp_tmp_msg_0_0.z = 0.892321451869;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("CDJVDKEDSACNPUDQZQYXVEJGSTHZBZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56017U;
    msg.info.assign("CFUXOYRTNHNXPNTAWPKJEBHYBTAIOSLJADYBRXZCDFCZFDZNRO");

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
    msg.setTimeStamp(0.668625246683);
    msg.setSource(34133U);
    msg.setSourceEntity(209U);
    msg.setDestination(59586U);
    msg.setDestinationEntity(226U);
    msg.command = 249U;
    msg.entities.assign("YCROEWEHBDYOFHGQHFXPMKGTAUTPJWWQLIIWQZPMNPDDYROVXIVGCYWREVSOCKVFDFAIGUBSYUQILVJWTTANADMZUMFFHWJNMCUMKULGEOCQERVJMRFCLZOLNKWEIAKXATAEPYSKDMUMDLPTOAV");

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
    msg.setTimeStamp(0.670728480376);
    msg.setSource(33219U);
    msg.setSourceEntity(180U);
    msg.setDestination(22096U);
    msg.setDestinationEntity(45U);
    msg.command = 85U;
    msg.entities.assign("BQVDSVVFJPQNZIIRZUKBISXJHPTMJRJXXPGNBIUVPRKCAWBIZTHLDWQUKADTOORTLLVEVJMWSMZBREHXJEVNQCBWUGVJQQTONIHLKLWLOANJQUEGFPCALWDXDSYTDXYKUSOMSZSXUDZKGFSPHWFHNJFYANKXCRCBLMPGYQIEHGWZDGCBXRUPRAQSFKUQAEODEEVMTBYZOCYCCSAMGXNWTMUHRWYNFZMOYGTEAOAK");

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
    msg.setTimeStamp(0.80275172507);
    msg.setSource(20203U);
    msg.setSourceEntity(152U);
    msg.setDestination(65006U);
    msg.setDestinationEntity(95U);
    msg.command = 151U;
    msg.entities.assign("RRBPLJRDNCRESXBJMREIGFSEXMPZLDSDQJBDDOPSTHOMVVIXCTRKANGBXKNGQLZZXUQPTBJJKSVAQWFFZMHORIAQEKTXQSECNVYBMONKASHBWYUVWEKSUJHZIPHZALLNKJDXTIUOWUNYAPZHWBGEFYUGKMWFMYAONESYFZQOYRBLCVFUGRRGLZASXFQFDPLIGHJWCMAUTCDHBVWVNXUIOCYEIUZIAWLCPYQEITDYPQVXTTTJGLFHMHJ");

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
    msg.setTimeStamp(0.897382116083);
    msg.setSource(32803U);
    msg.setSourceEntity(225U);
    msg.setDestination(63132U);
    msg.setDestinationEntity(202U);
    msg.mcount = 165U;
    msg.mnames.assign("PKFYUUJTYJRNUAQPZDLUKWFJNUPTIFMHZPBZQJJJYNOOFRZRUCMEBTRIAZCHYCILDVANCCNCWVOJQVMLLFUACHFBBWWVGSRVIFWKSBGHFVTQYOUMTHOGWSXHNDEEOXKSXRTDIMHQTNGSGL");
    msg.ecount = 215U;
    msg.enames.assign("MLTMRKSLVEQUEERRRPBNWBQOVDUSATXHKKXNMPOAFJJKDWCJQCFUIKWDEWXNXFFYTUEWWUJLMOFSNSYICDKIRCEPGZJJNBBXIDXKRXOICLODTGTVZLJRZQOXFYHKGQYYVRLOVGHPHAHBFLWVSUNMZGOCWGUAXUYHAIGPP");
    msg.ccount = 138U;
    msg.cnames.assign("EGVSWAOFCPMCCOXZGKZWXVZZCDYCJITDFKEDMBHKLXVGYXNVNEVDGKUUZRWTIQBYAPPQLQHCLHITYJYRZODXYEYMVIZEQHTDMIF");
    msg.last_error.assign("JCVXUOGWJJPLXMFUQCVYQBHDMENYNVRPHTBROSNYDOFVWOXQNTCJ");
    msg.last_error_time = 0.541767653628;

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
    msg.setTimeStamp(0.341671506959);
    msg.setSource(40065U);
    msg.setSourceEntity(93U);
    msg.setDestination(39931U);
    msg.setDestinationEntity(2U);
    msg.mcount = 89U;
    msg.mnames.assign("XFMVYTCDWEIOEMAKNPG");
    msg.ecount = 166U;
    msg.enames.assign("IKUBVSUIMCGQMPDPCKJYJFJLTKPTYXTSAZQOYDWLUNXZLIAMQENPYAUVPFJHMBJHEVSSRSAUGCTWOMIPQCDTHWKIZZRECZCXJVLEBXXGJOKDXQZNUMHPHOYYSFIVFECGJWNYGCUODVXBQRIHDLGTFAHKBNANRBXFYMVROGSUWWFZSZWLORQMEXFGTMKWHALBPRDNGPELRTCYQSHBKNBTDKEHFYF");
    msg.ccount = 155U;
    msg.cnames.assign("LIYBUADJFUPYPHAFKTCOWMXMRHOTGSNRZEHGCALJNKIKDJEIHIXQHYGDSLJCPOHGTCMMWQWF");
    msg.last_error.assign("RUBGVMLUQGEZURKYZEORCBXLCKTGHBNNSDTWDKVYMWIJPKGOWIUJEDJRYWPSHLGORRETQVHUAFMMOZJSAQOPHSXCJVHVXMKJGHWQVOQKDCLCQBCLYEFYWXVXCNQDLPLIQCBZEWCAUMFBQXGSNONEDDZDJPAVTIYAZKUYHTWORZVBAIYLIFIZERZSCUYEWNTPWUQAFTLNYLIKXAGJXBGAHOPTFMS");
    msg.last_error_time = 0.980065896319;

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
    msg.setTimeStamp(0.63550484543);
    msg.setSource(7183U);
    msg.setSourceEntity(174U);
    msg.setDestination(57971U);
    msg.setDestinationEntity(183U);
    msg.mcount = 118U;
    msg.mnames.assign("AJREAUUNUPFDAGHMBBAXGJWOCNORZKMBMYMCGXOFYFKRPWOFDXXTDILAYILZBVVDTZBQHGMQYGTQECQICPOJFAYRGYFWVUTNFSZKIAMPSMSCKSDRIRLQONIIDHBOZTHSUJZVASNLJQCKTFKSWWNEBICDMHUXOGZZTV");
    msg.ecount = 135U;
    msg.enames.assign("OEXATYFMKESTSOXBAFVGUBNEOHXAUKQDYPFWVQKCLYBNZJDIBZRLMXPDOYXCRWRIKRCJCYXSPDWFCHQIFADYUIWXUTKQWGCVFEUVYCOLSAQQUCKMNWVZNSKPVTUDEXJVLGIRBOLBIVPTBRIGMQTOTAMJENESNTWZLFKTHFFPJVSBRYLMD");
    msg.ccount = 188U;
    msg.cnames.assign("VKZDABKYQFNUXGYTKTHTPZKXVPKQSWVSACJOWTWMHSUVTSEPXWVMAYSM");
    msg.last_error.assign("XAJGBGFBQOXWXGHKOBFQXFSVCOKZGDEVIUXDPNZWSJRDLOCLJEXMRHEAVJMAAYJFHNGPALBEIQWDIJDRUSZOCDDXWOOFMDTVQXYCMTUIDSFZBWVCZYMGUQJKMTURBTZPKU");
    msg.last_error_time = 0.390836217525;

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
    msg.setTimeStamp(0.0987441553706);
    msg.setSource(23622U);
    msg.setSourceEntity(215U);
    msg.setDestination(46285U);
    msg.setDestinationEntity(60U);
    msg.mask = 147U;
    msg.max_depth = 0.788765143463;
    msg.min_altitude = 0.272767905872;
    msg.max_altitude = 0.281656742888;
    msg.min_speed = 0.995219630917;
    msg.max_speed = 0.144791177639;
    msg.max_vrate = 0.292502446087;
    msg.lat = 0.823056996363;
    msg.lon = 0.0654160142127;
    msg.orientation = 0.0930697532248;
    msg.width = 0.595491709217;
    msg.length = 0.328140708692;

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
    msg.setTimeStamp(0.369302074187);
    msg.setSource(5334U);
    msg.setSourceEntity(253U);
    msg.setDestination(39090U);
    msg.setDestinationEntity(114U);
    msg.mask = 168U;
    msg.max_depth = 0.958780830914;
    msg.min_altitude = 0.901930628385;
    msg.max_altitude = 0.607197657653;
    msg.min_speed = 0.245071821886;
    msg.max_speed = 0.595576330509;
    msg.max_vrate = 0.0955607773873;
    msg.lat = 0.357001283488;
    msg.lon = 0.140811881563;
    msg.orientation = 0.324982148381;
    msg.width = 0.450810543145;
    msg.length = 0.47039574603;

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
    msg.setTimeStamp(0.834010669449);
    msg.setSource(8525U);
    msg.setSourceEntity(247U);
    msg.setDestination(19486U);
    msg.setDestinationEntity(142U);
    msg.mask = 100U;
    msg.max_depth = 0.50492193839;
    msg.min_altitude = 0.854257657318;
    msg.max_altitude = 0.60621612124;
    msg.min_speed = 0.40407157058;
    msg.max_speed = 0.292128841266;
    msg.max_vrate = 0.175347731286;
    msg.lat = 0.607111820984;
    msg.lon = 0.634591190084;
    msg.orientation = 0.181025529194;
    msg.width = 0.150478264331;
    msg.length = 0.21828660953;

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
    msg.setTimeStamp(0.953040913436);
    msg.setSource(19256U);
    msg.setSourceEntity(103U);
    msg.setDestination(2317U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.650040772863);
    msg.setSource(60345U);
    msg.setSourceEntity(94U);
    msg.setDestination(6468U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.426949017316);
    msg.setSource(20959U);
    msg.setSourceEntity(85U);
    msg.setDestination(49207U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.802453406272);
    msg.setSource(39329U);
    msg.setSourceEntity(200U);
    msg.setDestination(1506U);
    msg.setDestinationEntity(197U);
    msg.duration = 17508U;

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
    msg.setTimeStamp(0.42903176802);
    msg.setSource(19210U);
    msg.setSourceEntity(22U);
    msg.setDestination(37674U);
    msg.setDestinationEntity(54U);
    msg.duration = 13474U;

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
    msg.setTimeStamp(0.532667944147);
    msg.setSource(51571U);
    msg.setSourceEntity(85U);
    msg.setDestination(42953U);
    msg.setDestinationEntity(6U);
    msg.duration = 35680U;

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
    msg.setTimeStamp(0.728625830469);
    msg.setSource(18710U);
    msg.setSourceEntity(50U);
    msg.setDestination(5932U);
    msg.setDestinationEntity(219U);
    msg.enable = 3U;
    msg.mask = 287841451U;
    msg.scope_ref = 2932400811U;

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
    msg.setTimeStamp(0.455395340246);
    msg.setSource(54807U);
    msg.setSourceEntity(70U);
    msg.setDestination(60123U);
    msg.setDestinationEntity(188U);
    msg.enable = 230U;
    msg.mask = 3960421588U;
    msg.scope_ref = 2545106265U;

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
    msg.setTimeStamp(0.484819643805);
    msg.setSource(61962U);
    msg.setSourceEntity(233U);
    msg.setDestination(64959U);
    msg.setDestinationEntity(146U);
    msg.enable = 150U;
    msg.mask = 3290080351U;
    msg.scope_ref = 4210368559U;

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
    msg.setTimeStamp(0.357638386259);
    msg.setSource(17032U);
    msg.setSourceEntity(106U);
    msg.setDestination(16311U);
    msg.setDestinationEntity(42U);
    msg.medium = 56U;

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
    msg.setTimeStamp(0.8435779554);
    msg.setSource(42424U);
    msg.setSourceEntity(95U);
    msg.setDestination(20085U);
    msg.setDestinationEntity(73U);
    msg.medium = 129U;

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
    msg.setTimeStamp(0.134379103562);
    msg.setSource(6351U);
    msg.setSourceEntity(59U);
    msg.setDestination(28664U);
    msg.setDestinationEntity(102U);
    msg.medium = 222U;

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
    msg.setTimeStamp(0.0114521427675);
    msg.setSource(17945U);
    msg.setSourceEntity(201U);
    msg.setDestination(51130U);
    msg.setDestinationEntity(54U);
    msg.value = 0.389137511177;
    msg.type = 103U;

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
    msg.setTimeStamp(0.0665704083217);
    msg.setSource(17721U);
    msg.setSourceEntity(197U);
    msg.setDestination(13347U);
    msg.setDestinationEntity(205U);
    msg.value = 0.797094568386;
    msg.type = 140U;

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
    msg.setTimeStamp(0.919298959718);
    msg.setSource(652U);
    msg.setSourceEntity(9U);
    msg.setDestination(30627U);
    msg.setDestinationEntity(250U);
    msg.value = 0.655962926243;
    msg.type = 69U;

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
    msg.setTimeStamp(0.0545003904825);
    msg.setSource(17945U);
    msg.setSourceEntity(163U);
    msg.setDestination(35599U);
    msg.setDestinationEntity(251U);
    msg.possimerr = 0.782098589558;
    msg.converg = 0.545584255004;
    msg.turbulence = 0.225656232643;
    msg.possimmon = 9U;
    msg.commmon = 13U;
    msg.convergmon = 247U;

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
    msg.setTimeStamp(0.486451232106);
    msg.setSource(44282U);
    msg.setSourceEntity(104U);
    msg.setDestination(32845U);
    msg.setDestinationEntity(77U);
    msg.possimerr = 0.0421524605038;
    msg.converg = 0.274932510557;
    msg.turbulence = 0.618429395179;
    msg.possimmon = 137U;
    msg.commmon = 59U;
    msg.convergmon = 121U;

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
    msg.setTimeStamp(0.186002488789);
    msg.setSource(5553U);
    msg.setSourceEntity(207U);
    msg.setDestination(21312U);
    msg.setDestinationEntity(77U);
    msg.possimerr = 0.656622217991;
    msg.converg = 0.456455809504;
    msg.turbulence = 0.0570936925024;
    msg.possimmon = 104U;
    msg.commmon = 97U;
    msg.convergmon = 6U;

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
    msg.setTimeStamp(0.251871981062);
    msg.setSource(14422U);
    msg.setSourceEntity(84U);
    msg.setDestination(1828U);
    msg.setDestinationEntity(153U);
    msg.autonomy = 247U;
    msg.mode.assign("YXOJZLDNJIQVTFEBXMUPGFGGYJLDJICMUVWCXOFUTRGBWTURDGWARRWHROZNFWUSHLTHXIAVPXAHPKKEG");

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
    msg.setTimeStamp(0.0528124454694);
    msg.setSource(32241U);
    msg.setSourceEntity(168U);
    msg.setDestination(16620U);
    msg.setDestinationEntity(212U);
    msg.autonomy = 49U;
    msg.mode.assign("QYFZMQPUJXCUYJZAOGEDZYJFRKQMXYBANJMHYTAXHVHFPTHLLVMQCWHCMUDUZEJXVADFASCDNISCKINTVOZQXWQSCMBVAXLFDENSLOEFWSNRKEMPESJZRLUZNYPTPQQFTDIXEVIARCGOYVIUKWWULRILGK");

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
    msg.setTimeStamp(0.392697013706);
    msg.setSource(20873U);
    msg.setSourceEntity(124U);
    msg.setDestination(33779U);
    msg.setDestinationEntity(166U);
    msg.autonomy = 50U;
    msg.mode.assign("IDWPKDFRWFDXJALLHSIEQEOAKXLVWIIZZJATAYTPCGIVKYPNMNLMMZDPRBKPOBGUGVJUCGDBEHRSPMYWTRCGZQVEZPFQDVVSTJQQDGGUEDZR");

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
    msg.setTimeStamp(0.809525093692);
    msg.setSource(37840U);
    msg.setSourceEntity(211U);
    msg.setDestination(4045U);
    msg.setDestinationEntity(223U);
    msg.type = 100U;
    msg.op = 188U;
    msg.possimerr = 0.407251276113;
    msg.converg = 0.671898302266;
    msg.turbulence = 0.539915547831;
    msg.possimmon = 240U;
    msg.commmon = 127U;
    msg.convergmon = 227U;

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
    msg.setTimeStamp(0.0390694574613);
    msg.setSource(32991U);
    msg.setSourceEntity(47U);
    msg.setDestination(49548U);
    msg.setDestinationEntity(16U);
    msg.type = 82U;
    msg.op = 157U;
    msg.possimerr = 0.93118137348;
    msg.converg = 0.383480641131;
    msg.turbulence = 0.155199749918;
    msg.possimmon = 154U;
    msg.commmon = 109U;
    msg.convergmon = 119U;

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
    msg.setTimeStamp(0.993259620422);
    msg.setSource(38664U);
    msg.setSourceEntity(15U);
    msg.setDestination(44542U);
    msg.setDestinationEntity(29U);
    msg.type = 223U;
    msg.op = 117U;
    msg.possimerr = 0.750483234552;
    msg.converg = 0.257999067417;
    msg.turbulence = 0.519688303872;
    msg.possimmon = 96U;
    msg.commmon = 184U;
    msg.convergmon = 184U;

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
    msg.setTimeStamp(0.795097194468);
    msg.setSource(54787U);
    msg.setSourceEntity(198U);
    msg.setDestination(53282U);
    msg.setDestinationEntity(9U);
    msg.op = 202U;
    msg.comm_interface = 230U;
    msg.period = 3091U;
    msg.sys_dst.assign("SQGTHIAJAHJPZJTIBSXIWURTRFXRV");

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
    msg.setTimeStamp(0.136152421504);
    msg.setSource(17964U);
    msg.setSourceEntity(124U);
    msg.setDestination(48921U);
    msg.setDestinationEntity(4U);
    msg.op = 248U;
    msg.comm_interface = 236U;
    msg.period = 8051U;
    msg.sys_dst.assign("ONYAQNNNGTKEPJ");

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
    msg.setTimeStamp(0.274950587524);
    msg.setSource(49492U);
    msg.setSourceEntity(48U);
    msg.setDestination(24158U);
    msg.setDestinationEntity(129U);
    msg.op = 230U;
    msg.comm_interface = 63U;
    msg.period = 13117U;
    msg.sys_dst.assign("RAQOFWGHETZSKKRQSBAOCOTCVEUFAKNGWRSMYEYYLCTBUZVYIDLGJUMNQKEKMXRASJDVGNEFJNZVPIZVOZBJXLMFIXZOVDPBEDEJLCWZNDCTACNUYEFVIPZMPCJYJMJIQHIOIWTSWR");

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
    msg.setTimeStamp(0.621350168988);
    msg.setSource(36679U);
    msg.setSourceEntity(113U);
    msg.setDestination(37520U);
    msg.setDestinationEntity(198U);
    msg.stime = 3342262322U;
    msg.latitude = 0.60928840322;
    msg.longitude = 0.595855243176;
    msg.altitude = 33313U;
    msg.depth = 37395U;
    msg.heading = 6053U;
    msg.speed = 13346;
    msg.fuel = 104;
    msg.exec_state = 54;
    msg.plan_checksum = 49800U;

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
    msg.setTimeStamp(0.412064852666);
    msg.setSource(50407U);
    msg.setSourceEntity(92U);
    msg.setDestination(41078U);
    msg.setDestinationEntity(126U);
    msg.stime = 3116263404U;
    msg.latitude = 0.00848292352593;
    msg.longitude = 0.448606534909;
    msg.altitude = 55219U;
    msg.depth = 19671U;
    msg.heading = 24362U;
    msg.speed = -8735;
    msg.fuel = -105;
    msg.exec_state = -114;
    msg.plan_checksum = 37580U;

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
    msg.setTimeStamp(0.689534996751);
    msg.setSource(60733U);
    msg.setSourceEntity(249U);
    msg.setDestination(43694U);
    msg.setDestinationEntity(225U);
    msg.stime = 1193153170U;
    msg.latitude = 0.755099519338;
    msg.longitude = 0.963610968003;
    msg.altitude = 42791U;
    msg.depth = 64620U;
    msg.heading = 14919U;
    msg.speed = 30069;
    msg.fuel = 15;
    msg.exec_state = -53;
    msg.plan_checksum = 27960U;

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
    msg.setTimeStamp(0.474494931405);
    msg.setSource(2383U);
    msg.setSourceEntity(231U);
    msg.setDestination(26431U);
    msg.setDestinationEntity(32U);
    msg.req_id = 32550U;
    msg.comm_mean = 254U;
    msg.destination.assign("RFYXQRWQHMDAVBGMMTGXHDNGHQJRKIRMLLSEYYJVEXHNMRMZASBENUDDAUGJUOGBGXXPULIQIQKVZOZKVOJEDZHYNOATPCOKQYBSWLBYDLMEJCUNURAWAWGSUQXPFJWXAKIVLJXSNVIINAGZCHRPRWKAOFTBKBEZDSFPEYEKFPIRNTQQHHMOUXOXPLCTPICZSYJGK");
    msg.deadline = 0.769530593017;
    msg.range = 0.202501945975;
    msg.data_mode = 83U;
    IMC::SingleCurrentCell tmp_msg_0;
    tmp_msg_0.lat = 0.0473198071668;
    tmp_msg_0.lon = 0.145470737944;
    tmp_msg_0.depth.assign("MLSQANJQXVTINGQPTEDGVKIURPTKYQFKCZJMYEBOYKZSZKFAXSFFUFTHSBBRPZJWIKGEJQPJSPHGDGHLYUJFRCOVHMJWMPPCARFHTRYSEROVZVSXUUAVONMQVNUTXVWCFAXXAJONLVGUYJDQCJTPHMIMNBGKLEZOETZHBWITZLDOSXDOUQLLMXIKKNWRAUWWNAXMEBAADSYPXGYHCBRICBYBOZLBQIRUQDLYIFEWFGDHELVSONIDMCTKEHCPR");
    tmp_msg_0.vel.assign("CCBTVWJBUTOWPNIAJFQUXFFOAAWRNZETALBUSPBWHWYXQFNTKVVKMAZPIRDOGJTOKWKFLXJAEMFAVNZZPXVANRCQONXPSLQKTDYHCRUSKHHEBWISIIXLGSWXSUVGJZLRZLGMGKLDSPLLNXEMTQOWOGSVVTEYQHPMVPXHNFCQHCPGDCBUYRJLYGOVKJMIRGFDOZBYSSORZTMENMQIDMHRHKUBAWXQEABGYD");
    tmp_msg_0.dir.assign("KIDMJOIVSBFSDLRRXNCXKODKZVFQTFPYGUWIXUASJQMOECTLJVZCTLFVTFBTPZFCNTVQKBHGJEFQDIUIYHOCLQPMQKHWIRSRGBDSKEWIXIIWDRSXJXXEWP");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("UTAVRVHVFBZBKUMWRDSJDFHKOWSASFWFZFETKIAYAKMCJONZSUAARZXFVSWOHFZVVXEDTORLXJNPPETYGYMNEOYQDXPGLQCTKMVMTDYMBPHABQYPCEQIKTLIUZDWCIFAUCKOXQULXUJLLJYFUGYLBOTGWSR");
    const char tmp_msg_1[] = {0, -126, -38, -60, -100, 64, -81, 0, 119, -63, -13, 105, 120, -18, -76, -53, -82, -61, -121, -101, -95, 73, -68, 50, -41, 117, 100, 7, -83, 102, 73, 1, -64, -75, -120, 27, 100, -50, 126, -3, -31, 77, 27, 47, 11, -31, -41, 0, -45, -13, 13, -97, -99, 79, -48, -103, -15, 83, 45, 14, -12, -91, -51, 45, -105, -35, 93, 44, 45, -64, -76, 116, 14, -46, 101, -101, 21, 79, 64, 81, 21, 82, 16, 22, 121, -24, 58, -32, -36, 78, -100, 29, 38, 101, -32, -97, -5, -16, -110, -25, -2, 64, -110, -32, -123, 88, -123, 110, -117, 51, 36, -36, -73, -14, -13, -27, 29, -19, -63, -68, 72, -56, 112, -96, 17, -115, 0, 61, -37, -95, -7, -41, 32, -52, 32, 125, 20, 121, 69, -66, 79, 48, -118, -127, -11, -25, 15, 21, 45, -115, -54, -73, 102, 50, -95, 89, 72, -85, 3, 78, -126, 59, 24, -107, 22, -29, -4, -93, 94, 88, 4, 2, 59, 33, 6, -125, 109, -90, -1, 116, -51, -30, -83, 63, -114, 48, -20, 65, -109, -27, -21, -67, -32, -77, 6, 43, -29, -50, -99, 42, 18, 8, 6, 29, -104, 115, -83, -18, 64, -80, 57, -68, -92, -87, 84, 92, 88, 111, -102, 88, 90, -43, -9, 50, 90, 77, 32, -38, 104, -53};
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
    msg.setTimeStamp(0.968393435964);
    msg.setSource(34767U);
    msg.setSourceEntity(6U);
    msg.setDestination(24987U);
    msg.setDestinationEntity(113U);
    msg.req_id = 27272U;
    msg.comm_mean = 11U;
    msg.destination.assign("OXYTJIAZCUFCGEDWKOAPQPPVXGNMBYFJIQACQMDRSZ");
    msg.deadline = 0.377282735756;
    msg.range = 0.218611431867;
    msg.data_mode = 65U;
    IMC::Airflow tmp_msg_0;
    tmp_msg_0.va = 0.102256943085;
    tmp_msg_0.aoa = 0.527049421866;
    tmp_msg_0.ssa = 0.976426436214;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GFSAWQKKKWJXJLYEIMEDFCRXDNLUZLFPDKTWJSKPYEGRXACPCOPIWAHH");
    const char tmp_msg_1[] = {93, 0, 109, -43, 24, -76, -3, 101, -105, 42, -78, -85, 43, -60, -56, -36, -60, 56, 90, 23, 64, 112, 97, -2, -61, 43, -71, -70, -100, 112, 103, -53, -4, 56, 61, 5, 13, 80, 99, 8, -25, -17, 66, 8, 43, -63, 90, 27, 29, 79, 53, 123, -21, -34, -110, 6, 116, 73, -43, 21, 46, 25, -43, -123, -128, 116, -8, 47, 83, 19, -85, -75, -1, 61, 0, -80, -44, -70, -124, -4, -73, -3, 31, 124, 64, -7, -50, 62, -103, 106, -116, -18, 56, -54, 122, 51, 121, -40, -95, 43, 97, 107, -76, -5, 88, -34, -77, 92, 49, -49, -94, -59, -68, 3, -65, 122, -13, 90, -22, -102, -72, -46};
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
    msg.setTimeStamp(0.628302274086);
    msg.setSource(36923U);
    msg.setSourceEntity(211U);
    msg.setDestination(57899U);
    msg.setDestinationEntity(46U);
    msg.req_id = 26191U;
    msg.comm_mean = 69U;
    msg.destination.assign("LYXFBJVFMJZGOAHGKJETBMSTFQNFIXMPYHRBJHCCAIMMU");
    msg.deadline = 0.196547097211;
    msg.range = 0.824434802353;
    msg.data_mode = 155U;
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.184176390506;
    tmp_msg_0.bias_r = 0.242476692781;
    tmp_msg_0.cog = 0.0121000587177;
    tmp_msg_0.cyaw = 0.595723947689;
    tmp_msg_0.gps_rej_level = 0.470281748616;
    tmp_msg_0.lbl_rej_level = 0.584622910839;
    tmp_msg_0.custom_x = 0.255882802412;
    tmp_msg_0.custom_y = 0.0935182454564;
    tmp_msg_0.custom_z = 0.661504378529;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MJNFWYZWNGPJVIGBLDYUNWDZEPBIOHJNATHJFOFBYAMGJBQEOAXTTQSVHOMJQUILPMSDTYLKLURNJFKBSEZOEIKVBYIDFMHTJPHOKMFPE");
    const char tmp_msg_1[] = {85, -96, 37, -56, -63, 98, 96, -109, 93, -18, -123, -60, -121, -86, -45, -22, 37, -44, -126, 58, -49, 4, 60, -32, 108, -52, 23, 35, 33, 4, 38, 102, 114, 14, -122, 25, -3, -125, 58, 112, -35, -67, -122, 80, 56, 31, 99, 21, 59, 5, 25, -116, 29, 13, 86, 49, 106, -2, -39, -92, -60, -67, -122, 109, 105, 54, -99, 106, -33, -57, -85, -31, 81, -52, -85, -4, 121, 63, 54, 4, 85, 23, -69, 83, 69, 98, -3, -32, 61, 7, -20, -125, 34};
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
    msg.setTimeStamp(0.878938860404);
    msg.setSource(58769U);
    msg.setSourceEntity(156U);
    msg.setDestination(61488U);
    msg.setDestinationEntity(82U);
    msg.req_id = 7887U;
    msg.status = 116U;
    msg.range = 0.263133671187;
    msg.info.assign("KTQASCTUSYUJJYBMBYSVVJSCBRHJGVJINFNMYKNNZWZKSAFDIGKXEPPMOUMPJNKDXOPHIKYLXAVMQPAKQXCQRHHETVTMJNVHHFUSTJF");

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
    msg.setTimeStamp(0.624853288405);
    msg.setSource(44278U);
    msg.setSourceEntity(16U);
    msg.setDestination(60401U);
    msg.setDestinationEntity(119U);
    msg.req_id = 45374U;
    msg.status = 37U;
    msg.range = 0.338643569943;
    msg.info.assign("EMVGAJOTLDLOHSBRIJONPGCZPTXUKPXIAVZNUVWILCSARKOXQDSMWGFHOEIYWMCJALFQALOYZNKCVRSVXDXSUENQATABEWQHVFMHSSXGXCQBLFUADVMLIZTUFMUFTMFYGINXROTBWLCSKNYBBRVTICNDPPSETHFTWJQJPCEZIRKX");

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
    msg.setTimeStamp(0.763254494557);
    msg.setSource(61071U);
    msg.setSourceEntity(27U);
    msg.setDestination(3456U);
    msg.setDestinationEntity(144U);
    msg.req_id = 21135U;
    msg.status = 135U;
    msg.range = 0.461372203177;
    msg.info.assign("SYDSSWLFMPERATNUTCJLXKMEK");

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
    msg.setTimeStamp(0.301522233816);
    msg.setSource(34460U);
    msg.setSourceEntity(7U);
    msg.setDestination(22208U);
    msg.setDestinationEntity(111U);
    msg.req_id = 35153U;
    msg.destination.assign("PUHFJJFJSOQPBEGOPEKCESAXTELOWFYSWJOKJGMCIAFBSDAWEQZKIQWMLRALWMSQMUKMMNURFUHBDKMPGUUKVVZSVXICZHMCFBNJNJQCEVIDRTFGNBBVLYIQLHIMIMYOUOHNPFCLZDVXNSTGWGOWVUZHKKLZESROZDUAIXRPJWWOPYBAATYPPXREETRAIWXYQTHIZXXYDHDTCCGDCUTHYVCQKSV");
    msg.timeout = 0.477527371791;
    msg.sms_text.assign("HSDIUTERMRHFZEZAEYIOGWSPIGIMOLZDZLRKGVEQMBCVSUMIJKTHVDBHONLARZXXVFMEFLBEKZQPRMYQWTVHNBNBQERAFBRUZSJFYGCCRCTXSORYYPFDCZYCDVLFVXLYIONVKETNBNGSWGLWDWIBUADKQMPIUCMAPGAPHYMUQXWJPKSANUHTNQZHPXWODYXKWXRJKQVMCQSNBOTPHGIVEKGOCFOFUDQYTWAOLSAW");

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
    msg.setTimeStamp(0.358324256615);
    msg.setSource(62537U);
    msg.setSourceEntity(114U);
    msg.setDestination(8851U);
    msg.setDestinationEntity(9U);
    msg.req_id = 57638U;
    msg.destination.assign("IVZFYNKLVKGSKJTTVDMDMF");
    msg.timeout = 0.875652584896;
    msg.sms_text.assign("BEDJUBKTUGSGVEOWZNXEMSYQPCPUCKWRDQWQKCHWFAPXURGBEMZHOBXTLFINNAEEIUFAIUTNVXKGHNHTWNDSDZGSXTNRKOACPWUDLOMIWIPPDTBXMYJMGYXQQGLCSINOYLAWFQRFTOBSFVSIBJRVKSVCWZVJFYGRYBXYWFSJZYOZDJHHVBGZQOMHZPADHPAMLIRGERXFYKT");

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
    msg.setTimeStamp(0.103691073597);
    msg.setSource(56054U);
    msg.setSourceEntity(126U);
    msg.setDestination(32870U);
    msg.setDestinationEntity(93U);
    msg.req_id = 27480U;
    msg.destination.assign("AAHLBJUNADXLZNKUHGUWPWEHCHKEZVCBSQMJGQM");
    msg.timeout = 0.634219045752;
    msg.sms_text.assign("ILOMMGCCAVSDBIELBSQITHQNHGFCAXSLYPUYNBQLARFFWYUXMLAOZFXFUDSUBMREKKZBNVAUDTWKEVNXSOZZZRRFQPBZKQGRJNAKNIQOIHASOREUYIDMXKIVEXYWPBFEPGXNNCHDATVZUKHFVGORXTESDXOUYNPSTFGIDENORMLXJOJRKLGPZWQJFYPGVHIJKYBDJJBLUWTQBZHWVYJTIMWHCTSHAEQCLCQ");

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
    msg.setTimeStamp(0.858270892681);
    msg.setSource(11574U);
    msg.setSourceEntity(213U);
    msg.setDestination(36994U);
    msg.setDestinationEntity(67U);
    msg.req_id = 4447U;
    msg.status = 228U;
    msg.info.assign("DZFAPBCFJLNNTOMPUYRWILSHGKURNYSWHCECWCOFTJNTJMGXLUDKH");

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
    msg.setTimeStamp(0.709234235606);
    msg.setSource(64675U);
    msg.setSourceEntity(154U);
    msg.setDestination(42417U);
    msg.setDestinationEntity(234U);
    msg.req_id = 17389U;
    msg.status = 139U;
    msg.info.assign("ICFWAGPYJWGQANJBWCBNFMWTRLSKRSGYVJWETYHBYRMLMJQHPNOSZRIPUZOSHPUEQLGBJVEAWGGSCTW");

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
    msg.setTimeStamp(0.0596265452184);
    msg.setSource(40121U);
    msg.setSourceEntity(21U);
    msg.setDestination(54483U);
    msg.setDestinationEntity(105U);
    msg.req_id = 46846U;
    msg.status = 179U;
    msg.info.assign("BTIMMCAXBLHTDJGLBVHUFIXSHUOCJFFTFGYGCKBSTIYLRAPNUHYDQJKAVCQYQALHSQDRGLRRFBIKTSYPDRNFZELESFSFQJYBNJYACHO");

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
    msg.setTimeStamp(0.321231863749);
    msg.setSource(18228U);
    msg.setSourceEntity(164U);
    msg.setDestination(46244U);
    msg.setDestinationEntity(141U);
    msg.state = 222U;

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
    msg.setTimeStamp(0.320148722171);
    msg.setSource(13648U);
    msg.setSourceEntity(187U);
    msg.setDestination(57550U);
    msg.setDestinationEntity(50U);
    msg.state = 218U;

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
    msg.setTimeStamp(0.243195633627);
    msg.setSource(9887U);
    msg.setSourceEntity(142U);
    msg.setDestination(33290U);
    msg.setDestinationEntity(66U);
    msg.state = 6U;

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
    msg.setTimeStamp(0.753121889808);
    msg.setSource(49601U);
    msg.setSourceEntity(71U);
    msg.setDestination(5984U);
    msg.setDestinationEntity(71U);
    msg.state = 238U;

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
    msg.setTimeStamp(0.119394113479);
    msg.setSource(1525U);
    msg.setSourceEntity(193U);
    msg.setDestination(30396U);
    msg.setDestinationEntity(46U);
    msg.state = 49U;

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
    msg.setTimeStamp(0.637209868463);
    msg.setSource(43039U);
    msg.setSourceEntity(149U);
    msg.setDestination(41858U);
    msg.setDestinationEntity(9U);
    msg.state = 14U;

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
    msg.setTimeStamp(0.448659905962);
    msg.setSource(64901U);
    msg.setSourceEntity(224U);
    msg.setDestination(54084U);
    msg.setDestinationEntity(213U);
    msg.req_id = 39146U;
    msg.destination.assign("UEOFAFOLBBBXNBAMUWQAHGBICRNGKCRICWOIKZNTYMYGXXWTEPBPAAYVDPBIHJYPAEPZNKRKEQEWMDHMLSODZSHDQCUKUZOQEAZTMLHTBTRSHGOSUNJICXLUOLSWTSCJCQNGXVOUSXBZUYQMKTSEEJVQFGSCWLWQNIAMUXFLTCHYNJGFKIRJDVJLPDSZFHXALBZRFTZG");
    msg.timeout = 0.651412833268;
    IMC::Heave tmp_msg_0;
    tmp_msg_0.value = 0.472261486767;
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
    msg.setTimeStamp(0.894329631048);
    msg.setSource(61078U);
    msg.setSourceEntity(199U);
    msg.setDestination(40758U);
    msg.setDestinationEntity(23U);
    msg.req_id = 11719U;
    msg.destination.assign("EBSKALRSEACYVIEVMKHSULAHSANSZMMBBFTCQVMHQGMPTYBBHWCTZLXCKDJGQUYXHAITUCHIYNZOFQCKDOFQJFXUCYXPGVIBPQVIHMEDXSUUEQZNVNJISKLDJIWAMRARLFGOGYSPVYJDUWWUOKKJPMLNJVGLFEFQMHJZURWGBEDRUVWBLEPKDDGXYYPTWN");
    msg.timeout = 0.933858557883;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 4194578988U;
    tmp_msg_0.state = 100U;
    tmp_msg_0.error.assign("HBXGQLOJRDMFQQRSLLKHZUPNOCTGIBUHE");
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
    msg.setTimeStamp(0.865868581993);
    msg.setSource(6498U);
    msg.setSourceEntity(170U);
    msg.setDestination(42352U);
    msg.setDestinationEntity(71U);
    msg.req_id = 41228U;
    msg.destination.assign("WEIBQAZYGIZRZKHHSNZUNSZMGLWYFGASYMZBJHIXZQGFQVWJDOMJLGKREVENNGOVYFDWCDTAGWXUXRBBKJNCNKNTIFFOYEOGADGQXTLKRVXYGJPYXNUMPKBLSVDLEJQCKJSKUNHDPJXQAKTOBTVPALVWMSALVOCZNBTHPOLTOOUJPBUWIAHQTSPMWWMQPWRFIRCR");
    msg.timeout = 0.332187593665;
    IMC::GetParametersXml tmp_msg_0;
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
    msg.setTimeStamp(0.213363601506);
    msg.setSource(31242U);
    msg.setSourceEntity(23U);
    msg.setDestination(57632U);
    msg.setDestinationEntity(142U);
    msg.req_id = 29547U;
    msg.status = 237U;
    msg.info.assign("BCMGYGSWQYXJPJOKPAUEPRNOGPZ");

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
    msg.setTimeStamp(0.403969146611);
    msg.setSource(14767U);
    msg.setSourceEntity(72U);
    msg.setDestination(52118U);
    msg.setDestinationEntity(63U);
    msg.req_id = 29415U;
    msg.status = 243U;
    msg.info.assign("CNHWLQLUNOPUEAOZROSHPGHXXOFYLMKOMAQROZETKXZEETXCIFDRQWKVHBPHZHSRVCUEJZWBEGJZCCHWYGGSJBRMKFKAWVKLWUFUYDMQGUNQNWQCQXSXDPXQPRAYEKGKSZLONYGTPIZKEFRBBAVHTMFAIDU");

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
    msg.setTimeStamp(0.337358386958);
    msg.setSource(65113U);
    msg.setSourceEntity(204U);
    msg.setDestination(7802U);
    msg.setDestinationEntity(154U);
    msg.req_id = 9522U;
    msg.status = 138U;
    msg.info.assign("SEGKSJEBRPPJVJPQUHEXZJOBGEYDVQNWIBRHAENAHTKHDMIQGWXIKAFYTKZAQONLSTRYQCMJFFESDWTBQOLGPDRPYEQWZFTIASKGCRTXVCCTSHUMCNOPRDZHWXXLLXRZLOUEVCAGBYAEAHHLPPCKASGXLLZEUXNRVDLIBRPGZVSYOMIDMYPWUAOTWKOYUMFHQIFBHUJBUIYDO");

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
    msg.setTimeStamp(0.511737535397);
    msg.setSource(30671U);
    msg.setSourceEntity(56U);
    msg.setDestination(7513U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.0214659378023);
    msg.setSource(60287U);
    msg.setSourceEntity(226U);
    msg.setDestination(53837U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.42808481803);
    msg.setSource(58518U);
    msg.setSourceEntity(207U);
    msg.setDestination(65460U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.858756131153);
    msg.setSource(8135U);
    msg.setSourceEntity(85U);
    msg.setDestination(16381U);
    msg.setDestinationEntity(37U);
    msg.plan_id.assign("GZGQWQLOTFKGAPXVTFWGRSQROHVLZBYLJOQLHJDLAKODBDWNFSIKCJFNYGZPTLOYZYWEXXOMBDWMIYUKFFQUKKBVACRCXMPWACAVGMKJHOERLDUXFKWCSJDPFRMSPYPRECSULITWIPBVVUEHQIOIWJODPHDQQTDXBIGUERLOCRXYHNZQGHMTTZKARJYJXDFJTNNSPLTBHMJ");
    msg.description.assign("TUJEAINSNYHHKGJTZTBHHIEPFEQSREXZKWQHARGXQGNGHQKIXVLAFYKFMDCGQLZXFJDOFZROTUJNQGVLAOTJIBNQUUQYHRWYSLXGIFHFWVMRLPPZSMG");
    msg.vnamespace.assign("XUJVCKQNQUISPLNGTWBCCDZRABOVUGZKINZJRBQEMLLBRURGNQLFEVPRMHAHSTQMCUAHNBSLLYYWJBXKZEJSHZIRXDJBVPOKRMFOSFOLGVMMPZAELGGJNVNEQCOVCHOKRSWAZWHVSIUULYTNVOTVGFPUHTJHMDFBDWGTQWXOIYOSFPFD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QVWZNESYMBNSKGIOUUJTUPDAPFCSLKMNJOJMOZYJYI");
    tmp_msg_0.value.assign("PJROVSNFGJSGUBITJMPZHGLBLDIMIPRKZUYBOIEOPUIKAZYYOSELQPJARGBCPUBLXRHWPGDPXMIOQWCKUJBKBCLMTFCAVLYOXRVENWMDHAOTMKLXSHSOLZVYNHFNKEYEKQAQJ");
    tmp_msg_0.type = 151U;
    tmp_msg_0.access = 165U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OYCRNYYVPVRLORPGITNIECJNLXSSAUXXWRAUOXBCKQJTWHBYSFDWLMSRBDZFVKEBYJHGGWLFWEFAHGWINMKDLDVODZPMKSFZYEBAGPG");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("VVNSYLZZXPUIZPEVWDKJMWOAXOLOBQFNUFEEJZFIJTCPDYJRDPAYHMCSVUAUJHNQSJMBRIMBWZPCMFXDRSTTLUBNUWIDTTLMUVXVQNGGRHVEYUJQRCYSJILZLITOAKMPXACGYEAOQTIBMFGFHNSRGXNHYBALSHKJNFINLCOZTGFCCFKZQCRPFDIVHWWBQ");
    IMC::IdleManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.duration = 24631U;
    tmp_tmp_msg_1_0.custom.assign("ASKACRBYUZPXBORPMDSLTYWCQFQNHHAALXFXRLVFMOKFDGHJKEJVBNUOTCYMGLZLSJSO");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::SonarData tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.type = 188U;
    tmp_tmp_msg_1_1.frequency = 2057723568U;
    tmp_tmp_msg_1_1.min_range = 30390U;
    tmp_tmp_msg_1_1.max_range = 6334U;
    tmp_tmp_msg_1_1.bits_per_point = 102U;
    tmp_tmp_msg_1_1.scale_factor = 0.604558513318;
    const char tmp_tmp_tmp_msg_1_1_0[] = {23, -63, -95, 48, 52, -122, 70, 46, 125, 41, -3, 67, 9, 80, 118, -106, -117, -118, 69, 32, 116, -29, 14, 120, 89, 46, 84, -88, 84, -107, 0, 69, -120, -112, 63, 32, -67, -5, -82, 58, -104};
    tmp_tmp_msg_1_1.data.assign(tmp_tmp_tmp_msg_1_1_0, tmp_tmp_tmp_msg_1_1_0 + sizeof(tmp_tmp_tmp_msg_1_1_0));
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::SystemGroup tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.groupname.assign("YVFOGWDUSQPFEDPAULLJTXOSMMBBGCCTCBBFOPUNZQPMKRLWULXAITKTNYMFBHUQMZMFISQFVXJKLPTXKLLQGPUPRHHANJTFJNPPAOVIKEZDCIISLDOEBTYJDGYDRH");
    tmp_tmp_msg_1_2.action = 254U;
    tmp_tmp_msg_1_2.grouplist.assign("RIGVEPGPLAYCKNHHTALMZODYUWCTHZSIXZUDZMJXXRZCXAMLXXKQHYOGJFKOJGOENJVTTEQREOBCSVYWWHZKLSUGFWPYXJSHRSQFODFGDJKEVAZWMPRBDVTITZLXIWSTBRJXWNVAUHNIJQPAEPBFURHOBCUKNCCSUVKHZBSJUSLCNDHNIEENZYMWLCUDFYPDMGVTWCGQQIKOYFBMSGBERPVVMRILMQYNQFX");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanDBState tmp_msg_2;
    tmp_msg_2.plan_count = 37402U;
    tmp_msg_2.plan_size = 2879743104U;
    tmp_msg_2.change_time = 0.72273232634;
    tmp_msg_2.change_sid = 47057U;
    tmp_msg_2.change_sname.assign("JGAZHFHNDINVBDCGZNPOLKGLYVKKLZMLCDEBIYYDTJKTANEGOYQXRBQJIFMOMPCXUFZJGINXPZYBDJSNPJWHVZWSOGIMRTIKVFNTPXXZJAIFFWELYSCHPCTYAKZUHLOTAGDPWQENJVZAUQWOPUSMCWTHQXPWFRKOEMMSLPSVEUBUODOK");
    const char tmp_tmp_msg_2_0[] = {80, 3, 2, -68, -77, 17, 78, -92, -5, 109, -125, -47, -112, -67, 108};
    tmp_msg_2.md5.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
    IMC::PlanDBInformation tmp_tmp_msg_2_1;
    tmp_tmp_msg_2_1.plan_id.assign("ECJYNUNNQSREEORRHWKIAZVEJNLQIGKECUDRICOHWJCYPIILQGMXFBXZWSISSGBZPACJBYUDTUHNFGTBNFRHQXRPIMVXQUKJYUOFVALTDAMVPFZPBGCGZTEAHRMDEIQHAWSWHKNJWYJOLCLMHLXCPVYUVN");
    tmp_tmp_msg_2_1.plan_size = 15423U;
    tmp_tmp_msg_2_1.change_time = 0.153006855403;
    tmp_tmp_msg_2_1.change_sid = 55679U;
    tmp_tmp_msg_2_1.change_sname.assign("UQAMICLMUZDFTPROTGGKUIUAGKBXUBSRCSKYJSKWSRMAYGXZGBSQYAYRUXENSEIXGBQIYMEFNCKDCSVYPQOQGOHFMUWEDALJVOTUTRBBTXJWQPOHPEZMFJZIEOGDZCRPJWUYSXVXMOMOHHELPFTDNMIRLHLBVBBVLVIWEPDZEHJNKPFEH");
    const char tmp_tmp_tmp_msg_2_1_0[] = {-113, -3, 48, 43, -13, 30, -43, -93, -21, -32, -16, 111, 81, 109, 10, 37, 65, -22, -98, -9, -9, -26, -75, 103, -90, 25, 37, 69, -110, 74, -65, 33, 89, 58, -68, 44, 56, -24, -62, 70, 1, 121, 77, 55, 13, 108, 64, 111, 109, -1, -48, 25, 103, -83, -37, 20, 19, -73, 114, 126, -29, -46, 5, -112, 56, -70, -116, -92, -56, -53, -68, -127, 20, -21, 56, 82, -123, 34, -94, 115, 115, 9, -71, 19, 115, -63, -80, 7, 64, -76, 112, -74, 26, 65, 90, -100, 45, -76, -28, -111, -51, 32, -4, -83, -56, -39, 30, 52, 95, -102, -18, -29, 59, 11, 45, 38, 27, 13, 63, 95, -98, -54, 69, 119, -60, 68, -6, -28, -113, -23, -3, -89, 49, -12, 37, 20, -25, 28, -87, 114, 92, 45, -39, 26, 89, -3, -3, -120, 124, 118, 45, -30, 31, -1, 123, -5, -81, -105, 50, -105, 121, -113, 70, 60, -114, -94, -115, -57, -83, -114, -89, 30, -15, -54, 120, -81, 11, -117, 5, -61, 98, -41, 22, -38, 43, -33, -122, -49, -54, -37, 16, 115, 51, -56, -113, 56, 74, -52, -38, -41, -107, -91, -90, 35, -29, -126, -66, 9, 22, -56, -47, -68, -40, 71, -75};
    tmp_tmp_msg_2_1.md5.assign(tmp_tmp_tmp_msg_2_1_0, tmp_tmp_tmp_msg_2_1_0 + sizeof(tmp_tmp_tmp_msg_2_1_0));
    tmp_msg_2.plans_info.push_back(tmp_tmp_msg_2_1);
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
    msg.setTimeStamp(0.575842608408);
    msg.setSource(56618U);
    msg.setSourceEntity(211U);
    msg.setDestination(6788U);
    msg.setDestinationEntity(129U);
    msg.plan_id.assign("BQPWFPKNFILJUEDKXJVXOBTAQSAIYFBUEMVTOZLONWMVACWFGEVTIQHHUXYME");
    msg.description.assign("YAZYPFXVYIBISEKCKVSIFPTHPOKBLWUQLPZAZPXDWCSWJDUGORMJAQVMYOEAGJGTBNOCAMXLKYHUTBMQOCJXGDDOOKUQBRFXKTOGQVSMGXVUFURPMICXCGZCWPQLJMLJYMRRNOYNLHTXWAVEKRXXCAWHHNEWMRYIMUBOINEHVNAHDBZZLGTLJVDRUJS");
    msg.vnamespace.assign("UYFQPUQMDMQVGTHCWCAYHSADHVUOJXMIEJAJRVUKTHMXYDEOCWZGXATA");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("VAHGZMOPRPYMNIKJMDV");
    tmp_msg_0.value.assign("MYQYTFVHLQXXJIIFFMSULOLMVJNFFQDGTNJGWMTMSXQUMJTJLZPLHSAQBXDKIVAFBLPLUMNHVENOZUKCZCUADDBSAOQOGBZGKHRTZGTOCOZKCNHGDTWLGMHRYNKATFCPVOHHNWJJVBVLYDEARFURXUZQOEIJWQIMYANICPUQYM");
    tmp_msg_0.type = 71U;
    tmp_msg_0.access = 70U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("BSGMDUNOVIKDEBTMQHYSDLVJEVHTFWXRVDEGLLAOWYQWNENFVNJXGCCBNUBJBZJGTPEZJMIDXZENZDQTVKVPLNQEGRYXPZBNAFHRMXWLXXFCHQFVPUFPROWKGQVSSKDOLBDZMRCTWIULPJXPXRNJCWQBPKDFXFUZTOYMAAOSYSTYKEIZABTRKHHWIVCYSHGPACGALHJGOSQCHA");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("MNETYLYCXHZVDONFZZFZAHVPUTKUGQCJYZOSCSIIQCMVAOWKHJHEBKHTXRSNRSUPYWMKTYRSXELIMR");
    IMC::IdleManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.duration = 28596U;
    tmp_tmp_msg_1_0.custom.assign("HLPUTTHIYAIBQUJNMICIKFMYLVLJYRMTROVODYBCTGIZLFHYJAQDJNSWVEQQDTDUOYOUTGEBTNOQQMCWQJFHWVKPCEIKZPPSPTSPCACXNEOIDZPKDGGRDFNWIBUXLXWJQVLWXOLSVUFEEFZHXUUHNOCMVDRA");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Launch tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.timeout = 6365U;
    tmp_tmp_msg_1_1.lat = 0.3224352003;
    tmp_tmp_msg_1_1.lon = 0.766980992152;
    tmp_tmp_msg_1_1.z = 0.908525703708;
    tmp_tmp_msg_1_1.z_units = 209U;
    tmp_tmp_msg_1_1.speed = 0.814120805317;
    tmp_tmp_msg_1_1.speed_units = 72U;
    tmp_tmp_msg_1_1.custom.assign("OJBBXNJMKQUZYCMUFGZWPQGLSTLQECFCPABAYQIJPHKKBZUSKRXSAJMFEAYCRWFEFJKLLJDZNWOISGPLVCNAWOEAFERWRXBIGLSOGDNGHREDVTJZL");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::Target tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.label.assign("XPRJOWMCNVAGCISWSOTQFIFKTYYQCNSNWPBHJIBEXAMNOWOCBZPURXMXRZHCPIRJLDXFVPLDVYEBKWAGGLHLMBFOWUNVPABDSZMFKHLQAMTLQPLDYQFCOBVKQSQAEFLKSGWSRCEXDJCIESDGTOVOUA");
    tmp_tmp_msg_1_2.lat = 0.62352449995;
    tmp_tmp_msg_1_2.lon = 0.208836058054;
    tmp_tmp_msg_1_2.z = 0.763787002101;
    tmp_tmp_msg_1_2.z_units = 197U;
    tmp_tmp_msg_1_2.cog = 0.950506373633;
    tmp_tmp_msg_1_2.sog = 0.093205385614;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("UQXXAEBJIXEZATYPGRIJEIJSZNODOTKWTLFCGBGLQOBQPCSMCQQQSNWSVXBYJALWYPGZFLKHIWDYBNFCZZYSDKHNFCUKHDT");
    tmp_msg_2.dest_man.assign("VAMPPDMDYCTSBMQHAYCYTJQPGFVAQYLHDSTIRGVNXFWRSVLBJMXUCJYXLABKLXYPUSRINWFTUQDKJKUOIZHHAVIJLUJMOMEEENTSHOHKWKVUEQBWNQETGNZFPSJZUDVURCZBXFKZRGWXUDBFHFQXZWWNO");
    tmp_msg_2.conditions.assign("NTKZPDWZCSJSVFKUZWQDSRLMVIQUVVGFCIBHAOQYFOTWCVBDBMGYDFVAPPSMEQWHOSNXLMGOMTCANLKZOIWRQPOSTLGIXRSCWGXTVOHYPPECQFXFHJMWHCIBUPDXDOUFNFUBJWKKQLEAJGRQEAYUYTNPGNHJREMITDHPEL");
    msg.transitions.push_back(tmp_msg_2);
    IMC::Phycoerythrin tmp_msg_3;
    tmp_msg_3.value = 0.850468371292;
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.726252450956);
    msg.setSource(28196U);
    msg.setSourceEntity(137U);
    msg.setDestination(51599U);
    msg.setDestinationEntity(135U);
    msg.plan_id.assign("CGWMWYIGJQWHDPVZUVKPVNVTCLXEUWKXFEVXSVACQHXYJOOFIAMJZINTFXEUAZALSBBNYSFMHHHBIASRTSZYZGLZVYLCJPAKMUNDTSZDQORGHMNNSQQUKBAWEMNQYZITWBELHKOJDLMCJPKUPXIWQJRNTYQECSLXDGHDPWTFSXJUL");
    msg.description.assign("FBXNXVPMNLECBNIFTMNEMISLSWGFSPPPPIBCHATYFQMGKCSULOJNCIZQEKJPMAJOGWLZDMVZJVDWRLXMBDJNEAOAGCNMYJCZYHRWVDOSFUSTQRKIJVWHCAEHLQDXUZPPGUJYTXXHSANKVHDYMFKWGVWUMOQTQGTJUIXGQZORCDGCVKDEXHROYRWLKLJZHFRBRQWIQHOLHXEQRSRTBABTKSSZDBFYVPTFLZWIXOUAEG");
    msg.vnamespace.assign("ONTTPLWKCRASOUNKWAEBDPQVSPNBXBXWPENGCXOURWV");
    msg.start_man_id.assign("IUCEBDIPLINUNQTCCUTOFAXYZGPQUUZJMXQDFAB");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("VOZSTPTKEZHGDGUCCLUKRFQXYFNXXTGTWYGENGJLXUFJZFJWBBOAMTXARKEOHERAEAXJNNAVRFOLUZQHPZSBJZMSUQXGZTIWDPHM");
    tmp_msg_0.dest_man.assign("TYGPHWZZRVJHXALOZCMSOEFFMNGHOVVUEWJTCZXTYPYRSKNCBKIEHTDVWWQLTKUMF");
    tmp_msg_0.conditions.assign("SKQETFUICHVTEMRWCVJFKLGSLLYKOHXYRUIYXKXZSNAJQJSX");
    msg.transitions.push_back(tmp_msg_0);
    IMC::VehicleFormation tmp_msg_1;
    tmp_msg_1.lat = 0.426168300293;
    tmp_msg_1.lon = 0.0420870040621;
    tmp_msg_1.z = 0.544019711323;
    tmp_msg_1.z_units = 224U;
    tmp_msg_1.speed = 0.0490431402411;
    tmp_msg_1.speed_units = 168U;
    IMC::TrajectoryPoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.x = 0.883730238469;
    tmp_tmp_msg_1_0.y = 0.574422008142;
    tmp_tmp_msg_1_0.z = 0.731695385166;
    tmp_tmp_msg_1_0.t = 0.236993917205;
    tmp_msg_1.points.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.start_time = 0.350016590713;
    tmp_msg_1.custom.assign("ILNRFNPWIEGQWDIXGAHTEGDEMOTJLUIAIKCIAPYCGLSEOVMTGQDTNJDJXKNEEGRVSYRVJLUFLOHFLBYCCNFUFDWXAGHSHXRMOZDWROVPSTKQVBMJMTOFXCJBVFQBOGKLUCAKUDYVNHZIPWWKRCAAAJYEWYUPPZUKFKYXHBYCDBXBNUTAIDJEPTNGZZGSJVZHYQMQUTMSXIRAQBRNLWPNHZFEKODUMHSZVPOYSQLPRFICWCBOMW");
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.669595435691);
    msg.setSource(21024U);
    msg.setSourceEntity(177U);
    msg.setDestination(56334U);
    msg.setDestinationEntity(44U);
    msg.maneuver_id.assign("APWJPEEEYOLGGLQVULCTJJCDNARZCAYSYBZIIQKKQSPMVHHHEWOXWZGXQNBVRVITKPGXOUWQDQLRKJQGOVDUUCZJZUTLLNJFUDNRKFXRIBPTQWRRTHMFBBHLGNCLBMOXNEJG");
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 43679U;
    tmp_msg_0.lat = 0.398181123555;
    tmp_msg_0.lon = 0.154859607829;
    tmp_msg_0.speed = 0.234310717104;
    tmp_msg_0.speed_units = 119U;
    tmp_msg_0.custom.assign("HCEEMXSWOHWQVABWXSIDSOMVHGTZSUPMLMVTGFNRECZTONGJPVGSURVRVUXYLVTZGVAABJEQQTDJNDDFLYYFZAWUBKBAGRJPIDVKCWLWOELBFIIZPHAFGOQJSOKRECAJDQSMJUPEFQRFBYHBWZZXPULIRGUXXTNYALXIFCBZKKVEDDFITUCXYYQTRNGK");
    msg.data.set(tmp_msg_0);
    IMC::SonarData tmp_msg_1;
    tmp_msg_1.type = 146U;
    tmp_msg_1.frequency = 3606548118U;
    tmp_msg_1.min_range = 48185U;
    tmp_msg_1.max_range = 29224U;
    tmp_msg_1.bits_per_point = 138U;
    tmp_msg_1.scale_factor = 0.580851318959;
    const char tmp_tmp_msg_1_0[] = {54, 11, 61, -86, 112, -87, 20, 52, -46, 9, -60, -14, 13, 62, -76, -94, 123, -95, 68, 6, -120, -37, -77, -14, 58, 19, 24, 2, 106, -106, -38, 85, 98, -47, 91, 74, -78, -52, 57, 120, 34, 61, 96, -52, -65, -12, -89, -1, -9, -108, 126, 82, 115, -10, -31, 55, -80, 84, -8, -45, -125, -124, 41, 120, -77, 35, -41, -40, 15, 90, -37, -109, -13, 36, -63, 82, 85, 126, -49, -40, -34, -24, -51, -7, -23, 51, 89, -44, 97, 98, 59, 123, 98, 106, -101, -113, -15, -62, -80, -19, -63, -18, -73, 123, -86, -91, 12, 15, -13, -108, 20, -84, -128, -46, 117, 78, -21, 75, -127, 13, -111, -112, 81, 41, -33, -100, 94, -37, 24, 37, 35, -32};
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
    msg.setTimeStamp(0.694068453904);
    msg.setSource(6124U);
    msg.setSourceEntity(172U);
    msg.setDestination(48368U);
    msg.setDestinationEntity(203U);
    msg.maneuver_id.assign("RZDDZUAUXQWGNWAMDKYTNZPIJHSATRVERJOIANNWXSTMZFJLLUCPSGMVFFIDOFFGYXEIBXTYECZCJCSKIPMOZXSMQYPZHQPRUWUGAVIQAGDBPOFEFITLKOKSVDZTTLXMXQBUGAYIZPWOKLVDSHJKINURKPORBYLMRBWGPVBQRHDBNTHFYUSLHHOCLIABMKNOUCNOVNMKNYJEQWGWP");
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 34456U;
    tmp_msg_0.lat = 0.0374061868085;
    tmp_msg_0.lon = 0.69914614346;
    tmp_msg_0.z = 0.779921102956;
    tmp_msg_0.z_units = 76U;
    tmp_msg_0.speed = 0.908565093668;
    tmp_msg_0.speed_units = 86U;
    tmp_msg_0.bearing = 0.040096688982;
    tmp_msg_0.width = 0.585690344266;
    tmp_msg_0.direction = 127U;
    tmp_msg_0.custom.assign("TGLUNGYEJBSHYLCEQMQWKJBSAAFNJCTIYOHYKDYZDXLWOHRFKXCDUPOVDFLXZFSINIAWGHJOT");
    msg.data.set(tmp_msg_0);
    IMC::CustomManeuver tmp_msg_1;
    tmp_msg_1.timeout = 47118U;
    tmp_msg_1.name.assign("XEXFISUVXCZLYAQECQYKPLWQEBGUOKAZSMIKVUYTTFPISVQMWWLYGQX");
    tmp_msg_1.custom.assign("IGBYYNNJIRTCSTLTJYRPQZZOVIHPPEHVWKLWAITUVTHCPBPOOYNANWEVYQIMVUUXGGMUSAMDNRXMSSANPDE");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::RowsCoverage tmp_msg_2;
    tmp_msg_2.lat = 0.91516722539;
    tmp_msg_2.lon = 0.0242382225217;
    tmp_msg_2.z = 0.363079320353;
    tmp_msg_2.z_units = 61U;
    tmp_msg_2.speed = 0.469699051633;
    tmp_msg_2.speed_units = 239U;
    tmp_msg_2.bearing = 0.732172825712;
    tmp_msg_2.cross_angle = 0.140908829772;
    tmp_msg_2.width = 0.493343638467;
    tmp_msg_2.length = 0.401976872371;
    tmp_msg_2.coff = 213U;
    tmp_msg_2.angaperture = 0.892286547657;
    tmp_msg_2.range = 21635U;
    tmp_msg_2.overlap = 61U;
    tmp_msg_2.flags = 218U;
    tmp_msg_2.custom.assign("DHCRLRHOKSEZRPTBRVVNORAMNNTGPMIGXYLBOWLKFSYOQCMCAJIIABTBYSLZIRFPAAFSLZDCPYHJXMUUKMWTFEHFTWUHMLCEWOPNEPMISRBVVPICSNQGQKKZYBIBZYYKVFCTDIFIDCQIQZJPEMKWDWWQBTLGHJ");
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
    msg.setTimeStamp(0.394624240718);
    msg.setSource(44731U);
    msg.setSourceEntity(54U);
    msg.setDestination(62815U);
    msg.setDestinationEntity(176U);
    msg.maneuver_id.assign("SJGDLEYTWTJHCVIBXYWKDMDHLZVCVBAFCWXQKWZNYINONBAGKUQWLJMKOEPSHZATYOHOWDIUPTRSUHZZUXAKOCACYFDMXTVNXUTXTEKUKCXPEFQIXSXLLCBASRKFGDSZRJFZWIMLUNUGJP");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.906135457599;
    tmp_msg_0.lon = 0.929013188952;
    tmp_msg_0.z = 0.399879445352;
    tmp_msg_0.z_units = 37U;
    tmp_msg_0.radius = 0.493172539139;
    tmp_msg_0.duration = 18070U;
    tmp_msg_0.speed = 0.204514353974;
    tmp_msg_0.speed_units = 136U;
    tmp_msg_0.popup_period = 52068U;
    tmp_msg_0.popup_duration = 6346U;
    tmp_msg_0.flags = 12U;
    tmp_msg_0.custom.assign("SIHLNWVXFINQNBQQB");
    msg.data.set(tmp_msg_0);
    IMC::TCPRequest tmp_msg_1;
    tmp_msg_1.req_id = 38730U;
    tmp_msg_1.destination.assign("NPGANINCIHTICTOLRWNASOHMCKAUWSJFEPV");
    tmp_msg_1.timeout = 0.118527838749;
    IMC::AirSaturation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.0740049965303;
    tmp_msg_1.msg_data.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.564739957547);
    msg.setSource(30675U);
    msg.setSourceEntity(27U);
    msg.setDestination(31549U);
    msg.setDestinationEntity(15U);
    msg.source_man.assign("VIWGVYOHAVMTBEWRRPXXBQTUNOFAIOVYKGHOWDIDCERFTFDGZNEVOYQACXVCEKWSZMBHAMAUMKSRQXFEBFXNMCRRGJVOSOSYLMZNJREXGUBZBKXJUDEZVC");
    msg.dest_man.assign("UOOUGZCOOBCYAIIFZBTZKYVPWTOTXYNHNENZJ");
    msg.conditions.assign("EVFLKVMXOXERCAROCNLXOHNFPSPADKHOELJMNRBOIQFQEFKZQSKRAMAIEKVYSOALWRUIYJGRTCJCSSLCFEEVWZBBBUBJMKARGYQLHNIQPMTHPPOAOUEGUZVFSDHWZUJXRRWOFSJEZUUXJEKITOGXXZWGUUYPYBWVDSCLNDDKAVMQVGWAQGTJGNJIMBDDDXIHYQBNDTHVYHNSYWZSTLZULLZPQICIXMMAHJDBRWMCPKITZVNT");
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.74979654656;
    tmp_msg_0.x = 0.0382363881878;
    tmp_msg_0.y = 0.340963320928;
    tmp_msg_0.z = 0.937359881523;
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
    msg.setTimeStamp(0.411033089731);
    msg.setSource(55421U);
    msg.setSourceEntity(141U);
    msg.setDestination(61114U);
    msg.setDestinationEntity(207U);
    msg.source_man.assign("QPOUQYCSXNGPXBNEURSDOMLZYQRRCEYCLHTINAOBMHIVUXEKDHOIDWMGRGZBRUXCGGRNOOGFRMRUXPFWEQHEQPQGKVLXZZXHFUYAWIAVPRZQBCCOSBSTADZMUVXPIIKNTRBTMBCQJSYNWHJJEUDJFFDOISTPVKBAWISYTWWNGCSDTLALLJATMFSLGZ");
    msg.dest_man.assign("SXGGSSEHVBPYONWKMAYTONIRCLHTJEOMSHVICGJUPGQVXYSIWYKDBWDAXRRRBFHNOCKNODXDLPWEHEEGXPCDZVBYWZ");
    msg.conditions.assign("VYTQTYAJXCJWLAGNNPHLKAYQVUXJBPDVFMIUPIEFIXYERASLKRXMDSFU");
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 231U;
    tmp_msg_0.time_remain = 0.423300921689;
    tmp_msg_0.sched_time = 0.167688930409;
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
    msg.setTimeStamp(0.818851476771);
    msg.setSource(35914U);
    msg.setSourceEntity(252U);
    msg.setDestination(8236U);
    msg.setDestinationEntity(93U);
    msg.source_man.assign("SXWMHRSXPIXOIWCWGRZ");
    msg.dest_man.assign("BRNPJGUUBJSXDDLSZIUETWVLIVFDAIXVBXGDAQTPHCCMYRBWZFAAFKVG");
    msg.conditions.assign("SCKLQOTCYSMSNXTKJNVELVQBKDMHYMTHFKBQHAWHJOXFSCOTKIAGPRGCJOUZKMGJFUJYRDUXHFXPQTDFBWNAEVQDGIVNYZJYOMUPZRXQAJ");
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("LVACMHMVSIGGDWHJMRZGQDEOKOXTTGTNZAUKPKYMYQRWSRWPTGFRBWBRITWJATHGXKFKXTAAUCYHFMUKBFHJANSRNZEJOTBPSVPYYAYOPBBDCLELEDWKYQRCNUNJUQVLND");
    const char tmp_tmp_msg_0_0[] = {30, -105, -90, -15, -104, 3, -107, -87, 94, 31, -64, 54, 117, 2, 62, -5, 37, -61, 94, -58, -107, 51, 24, 61, -128, -20, 48, -39, 52, 54, 118, -85, -64, -123, -83, -36, -74, 14, -123, 29, 6, -69, 44, 49, -61, 88, -73, -125, -3, -7, 73, 48, -39, 63, -25, -126, -49, -78, -102, 60, 30, -70, 37, -59, 0, 83, -94, -125, -128, 61, 96, 92, 90, 53};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.00796725450951);
    msg.setSource(47962U);
    msg.setSourceEntity(95U);
    msg.setDestination(32546U);
    msg.setDestinationEntity(196U);
    msg.command = 40U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OUIRJXSABGPUVLMEJWWYELBKKSKHPKEPKQQJXIFHZNGXCLFBZOSHOBCMUVHAWQUVMCVYJSSNDAQQAATHTWLWDETDMJLNEGIYUCYOJGWBTTENAEWLKTRHQFGFXOEVDYDVQJZRPSIYIWXWBXLHCIGYSVJPHQNNBBCRIOLMPOLGMNFVMDIRAHUZEZOVTCZW");
    tmp_msg_0.description.assign("PAHPXIIFJRSKLHQITXTYJEHCWTKLDMWOFJMFQWYGYCZTPBDEGLMSCAEKKLWKSEMERGUBLBDNBPHIQDPOTYTULOBOGSBCSQYTMTQRKXFHJ");
    tmp_msg_0.vnamespace.assign("XUTQWEDELAFSBC");
    tmp_msg_0.start_man_id.assign("BUJTRCNVYRJHDMKGRWGSWOLXSRKMWBPFCUXRCXMYMTETBOUZTEPTXPXTBENZI");
    IMC::DevDataText tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value.assign("GDTXAARXEIULUXWDLVJPTCFAQAEMGRHIVYJCQBTPXBJKUUQTQNQOILZEFNUWIKDNUQMVAQVLGDBCCCKRXSBIWXCXDLNRTGJTJCWVOKTRWTHSSWEPLNFBNYERSWLHDJSZZXFVNPZWYHVFWURDJGIHIQJVHMXKMCKZHJVSMYXFOUYOEBHTDBMSFHYCIMNQOOGYPGLSNSHPLFEBYZZKOBSPIGEUARDMONBLJUKPEGYDZPG");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.30493125131);
    msg.setSource(2922U);
    msg.setSourceEntity(204U);
    msg.setDestination(16166U);
    msg.setDestinationEntity(81U);
    msg.command = 154U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PUWXVDHAJEXVIDHLNTZEKWEYSUHXPONFDQZMDIXWQKRQRSPKJCQLECACIDOLPFCVBZGBOGUVBUKQTRPDMMWXRGWIRACOXLJKNELZAPSIWDNHNEJHFKDTSTVYNTZNBJZFPIPYLBHYGYBOBIDOFIJHXAJJLMTUPYDOALBAUHEARGESUOFGKXOMWSWSNU");
    tmp_msg_0.description.assign("MTYYPBMSVSZJSROQICCWSAJAQPYFEMQFJGOUFZUCSNRUUVPQNGKKOFROLOHRKHWVLGJIJEJPPYYASKMILDFWUACTXEDZGFXYWNLZKMETSSXUCBWZITDTSAQNJCMLFZORGHTBQTPYGLWAVZFYMVIBQEDQEIQYFGXIQAROKNBAVDXKGXOUTPZNZGRJNAIRNHVBCDVOPUE");
    tmp_msg_0.vnamespace.assign("QHXRBOWYLBVHCLMOAKJQZFNCPIFHNDHGSBJRUIRRLTXKHMKJESXGULYNGKMSTYTOBOFAQHNZWUDSMFYPAKRJQFCBSPANMSQXQYBOEKPZOMGZJBQJHRDUS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NQRDYSMLODLWNZZSEUHFXDLXCAHXATQVHDWGQYEZKJCXB");
    tmp_tmp_msg_0_0.value.assign("TPNZGOVTURQRKPQGWKUNAYZABIXQRWHTASUIROEEHGBOYGFEPBHTVNHOCUGMVSSANFEGNOPXGMVFBLVLSNIZLZFJYYIEAUTAKNYKHXPRWJVYMJWPDDKDHDSSBDQTHJAKIZHLBNICWMJCKRJAVOFDXRGPQMISULKQTUAIPYPCCQOMXIJNRKXUHDLIFJXXEUTFDW");
    tmp_tmp_msg_0_0.type = 47U;
    tmp_tmp_msg_0_0.access = 94U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RMGQBUXTLJGDGWWFXEHQYJOUDVMSYK");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("TFUELBOCFQPSRDTSOTHGOSAKCTIIEJXSOLVBPAYKYKIFNMPTZZJJRJIXVYVPMELSEGBBPFPKXEBIYNBNXYCKIFEDSUNMLGAZUWTWRDENUFOHMWYURPTJNUPRRVHJWSWUCOQDGDAFXFHHNOTAGZYJWHABAIHZCQEJKXWADLDHUQCWGHCQZYLXLIGVJKRGZPWBQXGXAFLKRORVZZFDDVTUUMCOLMMSPSKYMQTWGQDLBIYIVENJOQCM");
    tmp_tmp_msg_0_1.dest_man.assign("DKVCAFGPKXSESODLAUZBQOLZXBICUORFJVMNGDWPYWQCZHPJYQCPVRGQBVOBOYJWJIHFOEBIDDNOPZATRTHICADLEXWCFKIQCJUH");
    tmp_tmp_msg_0_1.conditions.assign("DVPIFJROWJLXCPWFQUQDMYTQECIUADEJVORQSYDDAPGJMSACPGEWXHIUZXIXFTULTSFIGPBRDGBGIQNFOSZMWNCKJUHGBRZASDTLEEXBWWRUZBXYBSVQGLUHHKAOXVNCOHJXCHQYWNLSVOZMZRFBUJRQXREAZNKCSEBLNFNJHLANVFNHMOQYPYYWVZTAUPPKETRMPLMBWKOQDKOAKUHKXLBGAKHVDMVTKSENF");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Drop tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 35719U;
    tmp_tmp_msg_0_2.lat = 0.0236355492039;
    tmp_tmp_msg_0_2.lon = 0.986321727085;
    tmp_tmp_msg_0_2.z = 0.466942056938;
    tmp_tmp_msg_0_2.z_units = 11U;
    tmp_tmp_msg_0_2.speed = 0.982772290142;
    tmp_tmp_msg_0_2.speed_units = 189U;
    tmp_tmp_msg_0_2.custom.assign("SJDINHKEPLKTRF");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.173478897511);
    msg.setSource(60718U);
    msg.setSourceEntity(250U);
    msg.setDestination(64360U);
    msg.setDestinationEntity(146U);
    msg.command = 236U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TXFJQQKECXOFIATSSBWHTZBTRITXXURQUADDARCLFORPXCOVGNNYFYLUAPYMAIZBNWWHRJQGOIKOKOKYJMJTQFTZZLQDUAKLSJCZVEADOBXUKOVGKMHPLAUXMEPLEKSDJEMWTSHXPBCGDPCYAJJKPFGWJBWYURQDYWHDMVQHZHLRSCNW");
    tmp_msg_0.description.assign("CCDYBQEUUVLTQBSMPFTDFLTWBPVUIIZKJOFUAUGYXPQDYDKFSEQXLICBIJWPALTWFHJOGRSMIMSPEROPIHJJBVCVRJXZZORNPNNEYKCFTOKQWLAYS");
    tmp_msg_0.vnamespace.assign("UXISLBVCKCHKQWVUHWURIPZQRNBMYMUSVREGGPWPNCXJJGRQSUCMFYUZNXBROEQGOQIBHVKKOZFBTMTODSDDDWEBGKXAJEMHNIYAFLIYPJLELTTTKFKGGFRNSTTXLDXSOHUYHMRGCEO");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TQOJEWAIDAEKZEPSUJHOGOJELFRTPCXWSCYVMOYLZRTTKKUGMBZJOBTIJFKTFRPLYDNBPJKUYIGMBZTCDFEHNOMULDNIUQGLMSAKAUNPCGJORXNFCUXYSHTDUXLQZJIHIPKSFQVORE");
    tmp_tmp_msg_0_0.value.assign("NJMWHKZDJTGENDHRBKVTRCXDWCUHJYHMPODSGMXPBMLKTLYARVIODEQ");
    tmp_tmp_msg_0_0.type = 114U;
    tmp_tmp_msg_0_0.access = 119U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GGHTQRWEDNIDZJZRHGSDHZXYEAPTKOWJWCDQXRTJAXIDSKWATMKCHQROXLPMFGRLSPWFZIZCOYGB");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("AOJNGDYEBQRENZDWUDWTISZVYQNBGWBGFKJZIWTBUIMYBOZFCRRDEWLLQTSECJTIPEWDKSZGXA");
    tmp_tmp_msg_0_1.dest_man.assign("CMVRTIQPIDVVDGQPOAQSSIFKFPGXUMZKFTTBCNVZFWDFTNEPXBCZSLPXFISJBXSDURXJWPHVTCIAPTLKDSGHAUCEACLWEBHACRWOVIURSONJECDMHDHEDYBGAFAQANBJTFOYHYRTXVQHVQPYOGUPORIKXJZGBRSYMNILEWAZKTZQFSKBWXNWIOJUSF");
    tmp_tmp_msg_0_1.conditions.assign("BYOVGCZDKTUOSVHZHA");
    IMC::MapPoint tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.295588589784;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.0498786096434;
    tmp_tmp_tmp_msg_0_1_0.alt = 0.132660694204;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredLinearState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.x = 0.0552131982229;
    tmp_tmp_msg_0_2.y = 0.11241282438;
    tmp_tmp_msg_0_2.z = 0.793514426156;
    tmp_tmp_msg_0_2.vx = 0.858497765875;
    tmp_tmp_msg_0_2.vy = 0.210160963954;
    tmp_tmp_msg_0_2.vz = 0.537255143581;
    tmp_tmp_msg_0_2.ax = 0.204180993377;
    tmp_tmp_msg_0_2.ay = 0.572668702557;
    tmp_tmp_msg_0_2.az = 0.367394674899;
    tmp_tmp_msg_0_2.flags = 47518U;
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
    msg.setTimeStamp(0.984580020264);
    msg.setSource(37297U);
    msg.setSourceEntity(252U);
    msg.setDestination(53195U);
    msg.setDestinationEntity(136U);
    msg.state = 154U;
    msg.plan_id.assign("ZKHVGBSAHRZHEGBILCTTSJQQOHFRDKNODPYABFYGVTKUOYXGACWKFEWZGVPVQNOHITBEECCYMNWSQXVCPXCPGEKLYELFZVJWPLISNJNJAPVSDMXZYZKXIMZANFGCXNWPQGTWWXDMFLQGEFMODIMRMAUFPIURYOAKODUBIMTQTDAUPKZHKJVZHEZRDAVSQBLVSYHJUJTRUBLMYIFWJCDXSONSWHWLLMBNAUN");
    msg.comm_level = 161U;

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
    msg.setTimeStamp(0.619741486342);
    msg.setSource(526U);
    msg.setSourceEntity(19U);
    msg.setDestination(22797U);
    msg.setDestinationEntity(141U);
    msg.state = 116U;
    msg.plan_id.assign("JBNAREAIHGWRHCQJYYWFJDQHKUJIHSNURNCYYIREPOOKNDMGCB");
    msg.comm_level = 217U;

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
    msg.setTimeStamp(0.580818340042);
    msg.setSource(54447U);
    msg.setSourceEntity(234U);
    msg.setDestination(64350U);
    msg.setDestinationEntity(67U);
    msg.state = 87U;
    msg.plan_id.assign("HKKNTWDIPGLSDVJDFHCUSSSAUPTWVJCOYPOOADYFDXGQZVPCNGTJHMHSYUZLWXESXHRUVVZBLHRIDGZBEYBSYTTXLEFAFIBLCXEPIEKRYMZGFBTZRQEHNYIADLWCRUUVXJVXPTNVGMRTURFLXZTKAJNQNBQMMMJCIDIWOFCNDMQJNRO");
    msg.comm_level = 23U;

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
    msg.setTimeStamp(0.251250412978);
    msg.setSource(15520U);
    msg.setSourceEntity(204U);
    msg.setDestination(35067U);
    msg.setDestinationEntity(74U);
    msg.type = 137U;
    msg.op = 158U;
    msg.request_id = 43002U;
    msg.plan_id.assign("PDDSZIABNXNXQLUXONSMVLOGWUUWONTLMUPDCDDOZGMQSXMBGVHRPVXZZRJYBIBVWKUWQZYAHMFHZXSQROJGVSZFBXDTPWCUCJDYBPWTUKQYECUYGPLISSI");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 27053U;
    tmp_msg_0.lat = 0.704211393301;
    tmp_msg_0.lon = 0.142885499329;
    tmp_msg_0.z = 0.842021131087;
    tmp_msg_0.z_units = 249U;
    tmp_msg_0.speed = 0.408137376953;
    tmp_msg_0.speed_units = 86U;
    tmp_msg_0.custom.assign("MECQGJDRZOZKHRJYKYWFPHHMHBKJKBRW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TRYFSWNWMLOBGMIVFAEIDECGWXOKDROWUALJVQKXPHJGZCPYFAYAHPOIBPFHRIQFSGBMO");

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
    msg.setTimeStamp(0.136159656615);
    msg.setSource(35334U);
    msg.setSourceEntity(51U);
    msg.setDestination(38377U);
    msg.setDestinationEntity(212U);
    msg.type = 238U;
    msg.op = 87U;
    msg.request_id = 18807U;
    msg.plan_id.assign("VMLMAFIVRWPHABVQXQQBQOXOSJFHBGUQYWDTTSUJLTDODDDUOOYBPKFUHTUMGGYBXGTSMCKYWMBSLSMNDNRQVFUMKPPLIZKFVIIDILJAKLTQSPINUFVGMAEQMJFZYVCNDQZBXXLRRXHWWRDUEVQYRPIUEGZOSTKNOHPYEHSUMOCLLGIACRPPAXDNJVCJOICRWYJKTHWTHSXNHEKZYJAFXNKYNCJRPTBZECGHZ");
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.560009642165;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OMPEIEVRPPTWCFCGJKMSVHRKSVJGSRGVPYL");

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
    msg.setTimeStamp(0.466543702334);
    msg.setSource(52615U);
    msg.setSourceEntity(69U);
    msg.setDestination(42139U);
    msg.setDestinationEntity(61U);
    msg.type = 67U;
    msg.op = 201U;
    msg.request_id = 22160U;
    msg.plan_id.assign("NBCGDXDCRNSRFBMGKVJUABOALHMVQOVFORCEZSQKXHLUJMKLKFQKDUSZILSXWCMVYFZOHBNLZWUNIFEIUELNTVOIPEGXRYPUTRJOWREIBJRAJYMJTQAHYUBSWXAYKEAMMFAWVZDVLPZJHBIJCQLTFNOYZWXPDOSUDLCWYQIXOFGUCHIFEXVGSPEVTHBFZNRMGUIZTNPIYPHOSWWDQQPWNKDCPTRTGXMTNEDJGCSQSPRHAYYAJHZVGDCKKKX");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DEMMJNIROKWLCBEKWTBDYYFWMJZGTRNRGZUCOD");
    tmp_msg_0.sys_type = 158U;
    tmp_msg_0.owner = 36806U;
    tmp_msg_0.lat = 0.676699830717;
    tmp_msg_0.lon = 0.607481074499;
    tmp_msg_0.height = 0.0644741875339;
    tmp_msg_0.services.assign("ZRAHLPNFKAPUZCZRQLKMMWTVJENSXDXXUTHILMZJOJXFJEIGOPDDXFVREUBXJBERQLYEEAHBFMLOZYAIHMAKTYXPURMHYKCJOWWZPIJACPOKJM");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BZJUHANSYUUOZSXFGYVFNAGLXIAKQCCVQPASZIARDTECJGBDJIDHKVSCGHWKGBVDFSUWEMWQDSRBNHRHDATDHNCXICWPWYLPXQOXGJUQNOVTWHMUXYFSDHJEYEPRTTTXJKFCYIXEWJPORAMLXQGKXZGKMFWVBWALLOFKF");

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
    msg.setTimeStamp(0.551020490724);
    msg.setSource(2973U);
    msg.setSourceEntity(52U);
    msg.setDestination(51414U);
    msg.setDestinationEntity(11U);
    msg.plan_count = 10700U;
    msg.plan_size = 3930035346U;
    msg.change_time = 0.277316347617;
    msg.change_sid = 53183U;
    msg.change_sname.assign("VDMOXUFOZTHJSTCDJTHIBQSEQXFEALCAUWINLGWMXFWHBICDBQKDIGZWMNNVZSFMGMOPOPCSPOEIQTWUGALSDDWXKEJMYQUVKZTBHNGVNWYUBZTSFNUJARECRXYXHCQBUKVTYPHTCISHNYAVEHXBZGMOXFJYEUBZTKFWEOVHSP");
    const char tmp_msg_0[] = {28, -80, -32, -2, 2, 118, 117, 81, -46, -24, 94, 50, 50, -126, 89, 87, 103, 76, 114, -18, -90, 54, 80, 40, 73, -126, -39, 75, -63, 120, 65, 53, 73, 28, 23, 0, 41, 79, -97, 122, 23, 63, -125, 102, -44, 109, -118, -13, 107, -89, 67, 79, 27, -83, -60, -67, 120, 111, -125, 100, 80, -45, 43, -63, 85, 37, 34, -78, -51, 104, 114, -111, -20, 53, 55, 85, 95, 50, -57, 119, -38, 91, 113, -29, -72, -104, 74, 74, 123, -77, 110, -47, 19, 59, -126, 12, -124, -81, 57, 60, 121, 92, -66, -82, -25, -87, -77};
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
    msg.setTimeStamp(0.620561555585);
    msg.setSource(23539U);
    msg.setSourceEntity(199U);
    msg.setDestination(40734U);
    msg.setDestinationEntity(225U);
    msg.plan_count = 55018U;
    msg.plan_size = 1533232168U;
    msg.change_time = 0.900519337993;
    msg.change_sid = 55668U;
    msg.change_sname.assign("GVFKRSNTOBPMCSULGJVTXQIDXNPAJGSVGLQSUXRZCECKFAJBEMZZKZYZSTJRDFDVVKKHPOFJICCWFCNDMEWVYJNXJRLEZWUNCKWYVIDVUNEDTHTROQTXWYCYDQSAWSPNZDAFGSOIABXXLBROWMUQIBFLQAUVWNXOFYUZPTAWJPOQBHEZSGEDMUIPOOANTLTYMELRAGTHPVH");
    const char tmp_msg_0[] = {35, 67, -82, -81, 76, 72, 62, -125, -48, 33, 41, -65, -127, -8, -49, 78, 47, -72, -16, 5, 31, -95, -103, -72, 24, -12, 106, -64, 54, 85, 8, -46, -46, -111, 122, 0, -87, 23, -125, -20, 65, 113, 47, 93};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("TPIHZDPIMXNSJTZUWDHJKIFBKZ");
    tmp_msg_1.plan_size = 14777U;
    tmp_msg_1.change_time = 0.0081198082499;
    tmp_msg_1.change_sid = 45028U;
    tmp_msg_1.change_sname.assign("ZRKQYSPUGLCXKLKEFIVFTHAIMCHDEXZHKJRFRIJFPYXZWAVNSDWPZFZKYMDSIBVBVBKPJWBUMNGSBYTXQLOFQWGQJKSQCYWCNNLHERUOFTRFMMCHNHCRYIVQDZTUSBRPNOQLBSGVJZEYOXFTWCTDTOLCQVOOPSD");
    const char tmp_tmp_msg_1_0[] = {19, -25, -67, 17, 119, -11, 91, 124, -21, 30, -19, -85, 98, -63, -9, 117, 13, -77, 55, 38, 44, 24, 103, 52, 85, -45, 111, -110, 10, -72, -35, 18, 125, -27, -40, 109, 117, -79, -27, -72, -123, -26, 124, 64, 8, 113, -120, 47, -98, -97, -29, 126, -17, -57, 64, -14, -4, -94, 35, 68, 78, 49, 111, 35, -33, 95, -117, -53, -83, -72, 70, -50, 101, -108, 65, 73, -118, 36, 47, 11, -1, -44, -120, -125, -14, -83, -63, -57, 16, -55, 126, -21, -109, 86, 24, -87, -34, 65, 89, 96, -119, 80, 94, -5, 50, -25, 23, -79, -95, 116, 103, -20, -37, -4, -74, -120, -111, -124, -112, 65, -92, 74, 40, -9, -90, -44, -90, 57, 89, 59, -80, 15, 28, 54, -9, 83, 53, 126, -49, 11, -103, -74, 103, -48, 97, 9, -99, 65, 7, -1, 81, -71, -46, 103, -61, -86, -73, -8, -14, 9, -63, -125, 54, -113, 47, 81, -22, 110, -26, 126, 113, 69, -43, -31, 82, 94, 113, 125, -79, -56, -109, -116, -73, 55, -97, 43, -85, -125, 6, -121, -114, -68, -43, 71, -6, 107};
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
    msg.setTimeStamp(0.539632564001);
    msg.setSource(9213U);
    msg.setSourceEntity(131U);
    msg.setDestination(57154U);
    msg.setDestinationEntity(49U);
    msg.plan_count = 25657U;
    msg.plan_size = 2664586659U;
    msg.change_time = 0.946863328092;
    msg.change_sid = 7920U;
    msg.change_sname.assign("GXAPTJNHPRLBULMDKIDBJLFJOZGVOEVUADUIWFEVPAQWRTXKVZXXXBEHNAOJXKUTDAPYRDSPEGRZJYQCKKDTTBQHZBITPZOFIGNWGFWNWOOYNDUEZSQSMNTL");
    const char tmp_msg_0[] = {62, 101, -6, -65, 123, -81, -84, -78, -71, -52, 50, 69, 35, -67, -23, -76, 47, -72, -82, -17, -46, -27, 6, -70, 13, 56, -85, 49, -18, -29, -25, 61, -21, 64, 119, -13, 74, 55, -74, 60, -83, -76, -61, 110, 0, 59, 79, 107, -46, -43, 74, 74, -38, 126, -13, -9, -49, -32, 56, -70, -3, -102, 85, -40, -101, 103, 67, -76, -63, -84, 73, 108, -75, 63, 40, 50, -88, 10, -9, -100, -126, -76, -18, -74, -9, 64, 91, -58, 70, -10, 72, -88, -65, 28, -115, 85, 47, -8, -116, -55, -91, -24, 58, 20, -43, 22, -5, 61, 7, 86, -85, 92, 2, 126, -124, -127, -54, -53, -53, -4, -9, 46, 73, -23, 89, -45, 71, 119, 123, 79, -24, 44, 74, 60, 5, 5, 88, 9, -70, 60, -117, 36, -99, -75, 15, -99, -83, 56, -121, 113, 119, -40, -43, -12, 41, 118, 86, 126, 59, 95, -68, -59, 106, -46, 112, -56, 0, -103, -16, 38, 103, -10, 114, 39, 41, 122, 33, 74, -85, 96, -45, 42, 5, 83, -20, -36, 31, -34, -119, 48, -114, 7, -78, 79, 81, -61, -79, -45, 15, -52, -27, 95, 39, 109, 44, -79, 47, 93, -24, -48, -24, -103, 124, -120, -46, 39, -38, 43, -113, -92, -101, 48, -47, -112, 71, -55, -19, 37, -74, -51, -125, 64, 121, -52, -84, 48, -24, -62, 33, -46, -118, 83, -20, -115, -112, -32, -23, 115, 6, -27, 73, -41, -119};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LBLSXNXSPPJIZAEVDLDDL");
    tmp_msg_1.plan_size = 32913U;
    tmp_msg_1.change_time = 0.331260967519;
    tmp_msg_1.change_sid = 40861U;
    tmp_msg_1.change_sname.assign("XCMNEOYDBOZWQLOSTVANBINTGGUQDCYFDXGIDNYCVVEOVDFABUFFHHXGUFWAJMFYHVXYRAHJGPKYXOTJLJCPACLQREGBDKOOKEGTWDKWUWVSIWJGKSLUOKRRILZYTJLPFBWFITATKXRXREJBAWIZXPTHJWJHHAAKQZIPFPIUCBZSULRDGQZDICZBHTSNMRVZENROXVQCFXLPIQMUPLZPKVYVQESHSSM");
    const char tmp_tmp_msg_1_0[] = {-126, -33, -41, 9, 119, 66, 61, 15, -25, -65, -79, 44, 53, -95, -117, 73, 46, 52, 25, 51, -77, 99, 25, 81, 34, -96, 49, 20, 106, -66, 108, 12, -2, -27, 68, 22, -105, 65, -16, -120, 106, 109, -89, -78, 108, -96, 117, 83, 75, 2, 75, -4, 107, 42, -69, 69, 46, 56, 71, 121, 0, -64, 64, -77, -38, 79, -27, 103, -21, 73, 77, -62, -117, -61, 66, 56, -4, -91, -23, 61, -46, 89, -52, 46, -70, -85, 70, -8, 109, -70, 37, 2, 60, 113, -31, 7, -42, -88, -117, -1, 62, 112, 22, 89, 55, -9, 11, -27, 19, 61, -41, 56, 68, 102, 3, 40, -19, 35, 112, 53, -127, 7, 44, 49, -9, 83, 111, 116, -27, 81, -105, 56, -18, -93, -100, 104, -81, 26, 56, -28};
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
    msg.setTimeStamp(0.374248262234);
    msg.setSource(42203U);
    msg.setSourceEntity(100U);
    msg.setDestination(39351U);
    msg.setDestinationEntity(208U);
    msg.plan_id.assign("ZRZUJWHEGVJDIFDGIJUQJIYYLUNDQBMKQSUPXFFHHXYRZMJHOVEIPABCMBCERQLVYYQDIGQTRQQNEJLPAKOAHZMPLVOSAWZGNRBWSSSAUIDLILOIEWHBBFPGGTFCKXUZEZYXHSODRGLVQWMHVCVFUAXVONZFPCSBAADMCDUON");
    msg.plan_size = 32523U;
    msg.change_time = 0.364177325096;
    msg.change_sid = 17908U;
    msg.change_sname.assign("HTRJWALXHLGZPDIHMSSVJNKFSJWZUSGWYAZZGEVDYNOQTZTPEXXONLCCYUNCXRZJDLBVDNKMUOCPEYVHDKJWLUQZCGMCIOSNOXQTEUOSJRTEJIYFELUKRGTFIXVMFCXBREFLPDWRBWFDNCUBDWNROIHQMDIVNZQAPISOARYQFLOVSBYEHDUAPTKMMLHVCPGIHTRWSTRQAAKJBAFJHMYFHAQKQBMMAW");
    const char tmp_msg_0[] = {90, -92, 79, -47, 17, -50, 34, -34, -5, -59, 75, 39, -10, 65, -3, 24, -111, 27, 122, -126, -117, -77, -34, -29, -56};
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
    msg.setTimeStamp(0.967283605897);
    msg.setSource(29512U);
    msg.setSourceEntity(61U);
    msg.setDestination(19033U);
    msg.setDestinationEntity(199U);
    msg.plan_id.assign("FJRFQJEHPCIICHRIORWJHSFHDVERIYOXGVEJZZCHLEDM");
    msg.plan_size = 39940U;
    msg.change_time = 0.945272963596;
    msg.change_sid = 32758U;
    msg.change_sname.assign("PFRXFLEEKJLHTZIUPBVXAMZIFTCPSQZTJNJTWOHPGMGZLROIIYXJXQIEIRVCCINPFKYOVDDDKMJABIKCKZYEVQZYBXDRHUIOEBRJAPJEBWLHTDGJVTUAWMHVBFSLSWCQJCQCKNXBUVODKSQDTAYWDPZTXGCYZSSSPVZXNRNZDOPTSCAEQAOAVLMEFHGRGGWHGUWYGUUAIDRWSGQUMWHFMOSAKNFNM");
    const char tmp_msg_0[] = {10, -13, -57, 60, 73, -10, 117, -52, 61, 126, -72, -9, 0, 23, 55, -74, -82, -74, 53, 1, -55, -71, 118, 50, 8, 15, 108, -68, -127, -124, 19, 67, -85, -92, 19, 49, 20, -24, -42, 74, 74, 19, -93, 116, -24, 115, 31, 96, 120, 46, 13, -31, -115, 102, 12, -43, -6, -73, 93, 47, -116, 123, 90, -55, 71, -69, -36, -114, -58, 95, -61, 28, 116, 112, -112, -125, 14, -3, -92, 7, 45, 28, -117, -6, 107, -52, -8, -87, 31, 46, -89, -58, -121, -70, -92, -124, 41, -43, -17, -9, 125, -94, -109, 112, 37, -98, 53, -28, 70, -79, -52, -28, -106, -102, -63, -18, 113, -83, -54, -85, 9, 30, -7, 104, 49, 13, 97, 123, -64, 38, 100, -50, 16, 109, -76, 23, -8, -118, -46, -10, 10, 84, -97, -2, 14, 67, 93, 23, 46, -93, -59, 36, 21, -110, -110, -38, -47, 14, -75, 0, 113, -23, 77, -128, 16, 28, 106, 106, 39, -16, 21, -87, 47, -5, -120, 102, 78, 56, 44, -45, 103, -61, -58, 70, -32, -6, -7, 84, 77, 62, 56, 119, 33, 16, 3, -31, -100, -118, -42, -76, -126, 99, 59, -42, -5, 74, -74, 54, -128, -49, 18, -6, -83, 46, -32, -46, 27, 49, 2, -56, -114, 0, 18, -17, 82, 68, 27, 92, -118, 106, 55, 113, -105, 56, 103, -92};
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
    msg.setTimeStamp(0.899298802729);
    msg.setSource(4430U);
    msg.setSourceEntity(220U);
    msg.setDestination(20908U);
    msg.setDestinationEntity(15U);
    msg.plan_id.assign("LIHKONJWHZFRXUSDBOZAFQCZWBLQRRYNG");
    msg.plan_size = 33205U;
    msg.change_time = 0.725085756941;
    msg.change_sid = 48245U;
    msg.change_sname.assign("CNFVNZWUEIVTLRQGEOYDVRFVSATQBIRNPCLJKYARBMNQAJFUARFPDZZXEJOOUFAXZDPNKMNPCSYWVQMHPSOWDMIOZXIMMYNXCNL");
    const char tmp_msg_0[] = {-4, 52, 7, -104, -92, 50, -29, -37, -40, 87, -86, 109, 3, -82, 85, -118, 39, 42, -123, -35, 117, -50, -35, -105, 114, -106, -88, -118, 115, 47, 57, -108, -27, -54, -42, 72, 9, -47, -20, 61, 107, 33, 38, 1, 113, 51, -112, -45, -1, 102, -52, 99, 23, -42, 119, -94, -83, 125, 111, -32, -35, -114, 23, -121, 122, 32};
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
    msg.setTimeStamp(0.189738679576);
    msg.setSource(24495U);
    msg.setSourceEntity(101U);
    msg.setDestination(54909U);
    msg.setDestinationEntity(142U);
    msg.type = 121U;
    msg.op = 203U;
    msg.request_id = 10191U;
    msg.plan_id.assign("SVPFDGKGSTLRJPXVODTOGLJZPQHXJPEKHBDMDAUAQINUMSWMSMZKIXITIOJN");
    msg.flags = 21425U;
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 12U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RVTIGAMHAFRCKBLJPLKOJQTUFBMNETNBWZIWKHPCPVEQMSQZMBRETSZHLCWBOIRLCUKGEYEBUZWOYHDNCNOUGQMSWYVJNXCVFPIAINEFFCFDMELIXSASQHDCEAGFCFKGEYJZBQZIBQLBWYWJAVVPUEPKXZVKDFYJNUDDILNNVPGKUPRAMHXBHVISLKIFUGJRYRAXQHUZTSPSMKYWAOXLXOLQSSWHNCXTTODRZDXODJARYO");

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
    msg.setTimeStamp(0.725493326154);
    msg.setSource(36853U);
    msg.setSourceEntity(17U);
    msg.setDestination(56575U);
    msg.setDestinationEntity(56U);
    msg.type = 28U;
    msg.op = 95U;
    msg.request_id = 10604U;
    msg.plan_id.assign("QJAYVEEBNMQXYNKOCGTZVRUQIRLBJNSZWPNPHCZJYBMKKSTMLIETCAXZGNTUDLLOKHBPVAFBXSPHMPGCVQKDJDQHKZAHHLPPNUUIDYJHTGRVIEKSWSUXSBEB");
    msg.flags = 56334U;
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.0969947818404;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CTQGVETJIGCBVBBCXVDHNQMEHAUDBLHAVBJNFCWHDOGYZYTYQJOPRYRKSOWALZAAIOOPUIHDRTITMFHOTBRMDUMVVUHXTWSTZXXREHQYPNZRRVNEWICEJ");

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
    msg.setTimeStamp(0.714767602264);
    msg.setSource(27183U);
    msg.setSourceEntity(229U);
    msg.setDestination(36160U);
    msg.setDestinationEntity(214U);
    msg.type = 69U;
    msg.op = 195U;
    msg.request_id = 65455U;
    msg.plan_id.assign("EIKNBFTRROUGYSUHSYQKXTFHMBRMDKMVHIPSLXIBXMPDKINGLNHYWYTTOPJIBOZHARMRDQXLDBWPWFLXPGCSWBMZMEVWCYTZGOSOHYWBJJSWGINNZKQGJGIVULWOTBLLXFCVSCEHKDQAGXVEDZ");
    msg.flags = 21005U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 159U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.635662755066;
    tmp_tmp_msg_0_0.speed_units = 100U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0899320624463;
    tmp_tmp_msg_0_1.z_units = 225U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0516813985434;
    tmp_msg_0.lon = 0.430327154811;
    tmp_msg_0.radius = 0.220626614571;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DOAGRECUFVBSJNAWDWRRJABOFLMVSNZLFUDWKHFDIZSLLCIBQRMEYYBAIUGETAYUVPXLEXHMQRGGMGDBRZZUNKSFWXPLKLMFXUEXVBQFUEISJHCKIOGZQQODBPRHTKQAYWOCJCUBTINTCPNKVZFYAOPYELWAIVYEPYWKJMZ");

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
    msg.setTimeStamp(0.271807464927);
    msg.setSource(36428U);
    msg.setSourceEntity(182U);
    msg.setDestination(44585U);
    msg.setDestinationEntity(194U);
    msg.state = 115U;
    msg.plan_id.assign("HHPBOZIJTDVLYNCDDSZCEREJXXEGKCZYQHTFVIKGWZGQHUDSSUSEL");
    msg.plan_eta = 1880246076;
    msg.plan_progress = 0.204043609584;
    msg.man_id.assign("UZOEHGUFQAZBRYFD");
    msg.man_type = 28274U;
    msg.man_eta = -2107670190;
    msg.last_outcome = 84U;

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
    msg.setTimeStamp(0.457228245716);
    msg.setSource(27354U);
    msg.setSourceEntity(58U);
    msg.setDestination(50951U);
    msg.setDestinationEntity(134U);
    msg.state = 117U;
    msg.plan_id.assign("ZBVCOHYXVLEUBBGRDZIDMTRCVQIYKUZMLPHGWZZMMYETQHYKNNVPWVGAWYCKNHYODCFGCOQYFZNLRZDXUZJKKSEJOPWAUUMHSUOHXLOGZJ");
    msg.plan_eta = -892767522;
    msg.plan_progress = 0.930332689962;
    msg.man_id.assign("LFRGSHOULWVKOJBDXZRHAATHJWMAQGHAKIIFMAWZQTVDGPOHTK");
    msg.man_type = 20443U;
    msg.man_eta = 2068735284;
    msg.last_outcome = 79U;

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
    msg.setTimeStamp(0.402805158557);
    msg.setSource(53951U);
    msg.setSourceEntity(157U);
    msg.setDestination(21577U);
    msg.setDestinationEntity(15U);
    msg.state = 220U;
    msg.plan_id.assign("SWDQWVZAXGOZPREDHMRGJXBYZZLSLJLYHOFNCJEPVAKCLUUXODZTPQWX");
    msg.plan_eta = 561056875;
    msg.plan_progress = 0.730968480998;
    msg.man_id.assign("PTBVYJMPXUTMLRRQSJFGRNSFBSRPADIDKENZAPYCVHZBFUBQYYWIJEDHWNSRJCZNKIMXDUOPSXOJIIGFWRACSHFCQGFQBTSGLNVOVZZBDRWTGTKIGWZTLH");
    msg.man_type = 23668U;
    msg.man_eta = -882536315;
    msg.last_outcome = 162U;

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
    msg.setTimeStamp(0.494215347263);
    msg.setSource(8443U);
    msg.setSourceEntity(127U);
    msg.setDestination(4942U);
    msg.setDestinationEntity(191U);
    msg.name.assign("MTFBYVXKOQEHMTPYSVCUNKQPKJVWKSVPKVBJPQYOKGHWACMLDKVHCAZDDRXVUHLGWOLKSXECWNHNXNSJCISRDOJAGZLVDTMANFGRXLJXEHYUFSOPITZIRQIWAPLJLDDQLEBJGLPPREHSRAFXMGCETNCPTZMWZKBVIUFWUEBCNQRQSHWYYDJZZQBESY");
    msg.value.assign("KCSHXYEWDNWZCQTAATGHRSTDRRPEUDHJIAOAYQIMUXZQXVZQOGCAXUFKRPLQVUMJMKOLEFYCMJXEPKSOSKPGWPETAZBFPNOHULNZPIMWOVYLHFWZEXUBZIAWGXBKUFSKRSBJGFEKNAVFJLODIDMLBNNLQSVMVJPBPJT");
    msg.type = 33U;
    msg.access = 91U;

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
    msg.setTimeStamp(0.991462080669);
    msg.setSource(62947U);
    msg.setSourceEntity(146U);
    msg.setDestination(19535U);
    msg.setDestinationEntity(56U);
    msg.name.assign("NYLVDUTIIXRLDEVRCULSDSMZ");
    msg.value.assign("KCAADLBAPQCUDERSWVZYKVWMAMEUCENYMQJPPZUXTHVCZKWLSXLVACJBYERJISIEMZNLFBAMXKHJFLNVEWCHZDIGOWXHRLEIBFUETQSZMYTGPBJOYACKFGGUMZNAGNFAUFJUWWTJIZGOQWYYQRHVODPSUINRLGUSKFQCDBRXVHZGDIKMYYXPEDOFPPDPPKTQBLHOYBFBKVLJNSLSJMQDOHOQTHSXVEDFAGJTBIXINVTTWUXZHWINROCX");
    msg.type = 107U;
    msg.access = 201U;

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
    msg.setTimeStamp(0.839148444884);
    msg.setSource(16799U);
    msg.setSourceEntity(49U);
    msg.setDestination(56546U);
    msg.setDestinationEntity(209U);
    msg.name.assign("IDIWEPUSUBOIGTBELJVMU");
    msg.value.assign("MUDQBCTAIZRHGYMOZQGQOSSXRAFGHISAUAHNYYFHQBCI");
    msg.type = 16U;
    msg.access = 51U;

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
    msg.setTimeStamp(0.461747166394);
    msg.setSource(7003U);
    msg.setSourceEntity(57U);
    msg.setDestination(29818U);
    msg.setDestinationEntity(203U);
    msg.cmd = 249U;
    msg.op = 230U;
    msg.plan_id.assign("BYRAUNLOQIEFRHYPCAEPUHAWZUSWBGEDTVKJGTLNGMJXLJOKOSLUKDMCMQV");
    msg.params.assign("NLBRPQUBAZBEWYPMLNVZFOZGQCFTODQVOMLYDRBJMQPWNHKHMRJTTLQXVDHIJDECMSJYKXAOCJMNUHBPYTPNHPBOWYUHVQGFLWSMYAOJVZIFTXAKUCIUWKXOCNYVBJPCD");

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
    msg.setTimeStamp(0.963244544334);
    msg.setSource(64537U);
    msg.setSourceEntity(74U);
    msg.setDestination(63221U);
    msg.setDestinationEntity(203U);
    msg.cmd = 72U;
    msg.op = 98U;
    msg.plan_id.assign("TTKXMPMNRHSICVUVEKOKNLPZIHVXMEWQDIEOLFJTJNYXLAXAYECJSIPECHDMMVLEFLTFGZDIGBOSODUWZPXRRKAAYPRKRQDBQTFZOVLBOFWBZZLUROHCURIMYGSWDTGWIHBNCCYZPFEUFJZWYUMOSHUYKSIHJCYPANBNNYXQUICLRKVKQCPGVEMBDMCWLWVSZBFALBXSTTADASKM");
    msg.params.assign("NYJYTPRLEZBQQCMNFYAWBKVOFMLMJFAYXKWJXAGTISLGMWHPFTEEIZIEDJZQHTULVPTHOSSIZXDPGSEOWUPYOUZNYRBBMZJPSLXRAAEYGPDCIZGTUGDJVVOIU");

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
    msg.setTimeStamp(0.846282506524);
    msg.setSource(47482U);
    msg.setSourceEntity(222U);
    msg.setDestination(15691U);
    msg.setDestinationEntity(57U);
    msg.cmd = 157U;
    msg.op = 59U;
    msg.plan_id.assign("EXUNBFKWSPWRXNISTZLGCVCSQUXEHWTMLDVCSTFGNJLRPHVFEGURZBZQGUVJJXATRNZOVQCMANHMAYPDMBHGOOVYISRKXZAOMWIDPRDFBQMRGNAFKQAFKFENTHZDJDSABD");
    msg.params.assign("FRHMUJJCDLSAWOMWPDEWXDYHVGKGHGLQZFNJPMTVS");

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
    msg.setTimeStamp(0.130296628408);
    msg.setSource(58114U);
    msg.setSourceEntity(35U);
    msg.setDestination(34954U);
    msg.setDestinationEntity(106U);
    msg.group_name.assign("FRNFFLFFOXOCCMHZYHIJPPEAPQLRTQRHWGQRADDHBCCGWOBUEWISYYMAEDAFOLIIPTJITBVCVYVLFKSXUQSEAPBZOGCLXSCWWBCVVOFUONPUMKRLCBAVHQUKYHXENEATLTEJNKVXUKMRDKTFKTRJMQQYHMVEAZMSYZBJYDGNZLSSBMXGOINBTYUAJSWEDOVEZNDHGWJHSGZPMV");
    msg.op = 58U;
    msg.lat = 0.914100422258;
    msg.lon = 0.857867325606;
    msg.height = 0.0971669918416;
    msg.x = 0.272846052764;
    msg.y = 0.5000764471;
    msg.z = 0.172845826243;
    msg.phi = 0.670943706573;
    msg.theta = 0.654527524583;
    msg.psi = 0.334850572838;
    msg.vx = 0.265455814831;
    msg.vy = 0.0477423895898;
    msg.vz = 0.132834908203;
    msg.p = 0.734357314632;
    msg.q = 0.0693482790849;
    msg.r = 0.537447994946;
    msg.svx = 0.117355827146;
    msg.svy = 0.378894313481;
    msg.svz = 0.573217622556;

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
    msg.setTimeStamp(0.213052578954);
    msg.setSource(18823U);
    msg.setSourceEntity(183U);
    msg.setDestination(12565U);
    msg.setDestinationEntity(108U);
    msg.group_name.assign("IGJNONOLXEIIEIBOBDDXKHYWNHANCORUXJLKOOWUNIYHCEXWRADLDMSHLHTRKLGUJMMJTJKCZBGPJPQDETFQZCXYIBBYRWAHPKPKZJVGBAPCSZCBXZMTFWEMSFHWECZGMPNZNUONDTRMM");
    msg.op = 236U;
    msg.lat = 0.506337024886;
    msg.lon = 0.611204825313;
    msg.height = 0.460818766029;
    msg.x = 0.473887502475;
    msg.y = 0.648783554771;
    msg.z = 0.653665753465;
    msg.phi = 0.160322929907;
    msg.theta = 0.73232071214;
    msg.psi = 0.694445893374;
    msg.vx = 0.682573725757;
    msg.vy = 0.665931533531;
    msg.vz = 0.678830659288;
    msg.p = 0.20554848149;
    msg.q = 0.313390613648;
    msg.r = 0.876868503948;
    msg.svx = 0.86917013524;
    msg.svy = 0.956816887414;
    msg.svz = 0.249036731804;

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
    msg.setTimeStamp(0.853337693717);
    msg.setSource(51630U);
    msg.setSourceEntity(135U);
    msg.setDestination(43368U);
    msg.setDestinationEntity(167U);
    msg.group_name.assign("CBNUFEXRXHTWRDMMQFBVZLTJMKPGEHBIBTPYRIBDEAOTARMSFEPKWNFCBGZTPTNQRYJINMJWHJSDYDXRNQMAUFVLWRGRWUXGCQEEAAHHKGYETPKTGUJEPYSLAZJYIIANDTKFSZUVVHHIDDLUQPYVXOKFBYLMMOUKSLVFPRGWCSCVNBKVENCFJOCSOLGBXSQAWLXQATSJPFKIEMYGZZNWOXKUOWZIZQPLVDZIAHDJYICBXRZXWSMLGCHCJ");
    msg.op = 198U;
    msg.lat = 0.456573646996;
    msg.lon = 0.313885959336;
    msg.height = 0.452833146698;
    msg.x = 0.152991167658;
    msg.y = 0.25592846619;
    msg.z = 0.766220280972;
    msg.phi = 0.513285348741;
    msg.theta = 0.721566588686;
    msg.psi = 0.374297936492;
    msg.vx = 0.0703114846043;
    msg.vy = 0.810521773281;
    msg.vz = 0.359932514505;
    msg.p = 0.259005837048;
    msg.q = 0.961676863101;
    msg.r = 0.720842017671;
    msg.svx = 0.704352380284;
    msg.svy = 0.101103785372;
    msg.svz = 0.895930432653;

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
    msg.setTimeStamp(0.640875165209);
    msg.setSource(40523U);
    msg.setSourceEntity(90U);
    msg.setDestination(46998U);
    msg.setDestinationEntity(94U);
    msg.plan_id.assign("JMOLWEKRSNYRPGLRRAKMGXHSUEJERAXWMDYKOGFTQMZWDOPWTVAIBFZDOYWQDZNIEBWXZAGKQZYGBIMYOKQGBUHGCKKJAQ");
    msg.type = 128U;
    msg.properties = 97U;
    msg.durations.assign("HYIBBBJSAKNVTVRDQIMYBXTLXZ");
    msg.distances.assign("TUMNPPXYMZZHQWAESVBFWQHBJJDJGQIZWAZWLYZELCOQUBOYSPPSCSTIOXUCOVUSNTSTQNCMFHVPZESXJDMEYXVPFFKROEVMCYJH");
    msg.actions.assign("QKGIICAULSLMNRWWTXLAWJWRVRJYYIULUBENCEDCFGBFBSBKPGVWSYCKGNOSXMXZOAPRXNQWYYEGIIWKDJTBKXUDUHTWSVTFAOTPDESCDVQYNMDZPUVSAUQZJB");
    msg.fuel.assign("EHOLKYUGSULHBFJOHWEIQQJMEASVZXBDLCGPYSXSSKMYCLQIWMYHPBIVJWFAJMFIZANNXBPERMKSPITWVCZJKAUJBWXVVXIEEZLCKNECORMGLDOYFCSRMPDIYDEFGZDZPTZVHTY");

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
    msg.setTimeStamp(0.466064972734);
    msg.setSource(44112U);
    msg.setSourceEntity(244U);
    msg.setDestination(32765U);
    msg.setDestinationEntity(38U);
    msg.plan_id.assign("TRHDMPGAHINWSLUMEOWBEISGLAIJQOYTZFBEQRNBL");
    msg.type = 52U;
    msg.properties = 195U;
    msg.durations.assign("FUYNHHUTRKRELXEWDEYQASCXQESVKQZWCFYHAVXFSSEXZPNMRPMJLVUKWGKBHVJJAYCXMOWBOCLEUGSCDBVVDPZTVADKSKOOHAPMBLWTNKDXIDYIZJTZQNUQHPQMIJAPUCGOLWB");
    msg.distances.assign("QKOJCMFTZMJYBEIUFGKHAKEKALUPRJDPANQTMEUMCSTLVVUYBKMINDSKYXWHPBUHNSISCXNEIRKJGBXATPEDNMAFBSODETRVLFZDBONJYVWYABAOVGRAFOVTWJWXZVVDRPLBRLTGPHKIJAXPHMGIYUFLZRVFDOWQYQWDZBHNSOKMGRCSHSOCQXLZNCXYQZFESFUXE");
    msg.actions.assign("FOHYBGKUQMEEYFABFBLYRRJJOOIELNPWPASYZMDXGJLUGIYUVCIKQQUORWSOGJAQDRKTIJTAPXJHATDMQBDVAETKSTNHEISBTKWBIHJVZQDRYEPGXKZCIPZZNSGKCWVNYBMXCPMQURRHIUJIXVOHXDNDPHNUGAFDELSFGFJLJVWLBUKNKWXCWMCXFLYKFNRFMQMCEUNGWYSTTQVZTCAASPLFBTMRVLNHHEZWCAOZQXDCVIOYEOPRZSLVDSHW");
    msg.fuel.assign("CEBNWYZIRWDHTVNWVWGQAFBIBKAQMYEYOVCQ");

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
    msg.setTimeStamp(0.306429529628);
    msg.setSource(4015U);
    msg.setSourceEntity(7U);
    msg.setDestination(17250U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("WEDQPUMLRHCFWJLFQBSXWUNODABLKGDQEXPDAYPVHIGYXRGJWTDPERSAXCPIHLKZHOLWQOPRZPVEUARVFNAGFORRQZZJIUDXSIEONOPLVLKVRBQVSHTQVZMMCSGBYBNZVAINBAHBGIPOEUENBFCPDQRYYZUHCSFTWJTJZIKFSJTNCITSGXMKLKGCVBEFIYZMMJNSMQCKUFDNAUKYYULDSFDUJJNVTCAXXZYMCOHKBXEWT");
    msg.type = 207U;
    msg.properties = 42U;
    msg.durations.assign("JTZJHBPAOZYXTJIHYVMTFSYIZRGJCHKNFJMGBVMSSQOHXAOZWJBMDCYNWIDEFTXCIGGIBKMFUQJLRROUKEAZUUQYTDTRJTLKSSBXWMVXRPWDGONCAQEAMGWKFCDYTFCBRGFDVOLFUPQIXKEMH");
    msg.distances.assign("GEEAPZUGCUIJBIUGAXISRCYFKMCVZPYJWAXJKMUZVODRWVEONQPFKSGDFHQLTELODAPZVWHGBYZBPFOXLTJOVTNPKIMCVNRKFEOUSVJJAJYWNXMCPIFFRLCHDFWYLKYLWIQCQDSHTXDXXDABDMGUIANEY");
    msg.actions.assign("TVWHPXZJNJFGHSIGKDLMBZWKWNXYUXPFGOAUAQQYRESTUZLXCJBUARJSOJTVKZRVHPWPDNEYGHWTKGFUIDXSALSQITRCSOFTEMWNOMMEKPLSNRBYEHCUOFKQLBFYGWDHBDTBNRPKYTTGHVDDOGLMUOWQHWPAVNMNNZAQMEYFEIZ");
    msg.fuel.assign("AQOOHEZJUUKPTGZBAAFZTGFGPYSYEUKIMQRXHSNVWHNQLRTSYVKVIKLDXSIXEEJBHMLITDCQPDWYDPCVZHIULHOEGVWISAXWQYFEBDIHYRDJSYPXDWTGAECWRSALRXUFORKFMONXSTUCUZKCRJQUEPCOKEAYCLBJVBAFPGHIKQGMOPDJALSNNPVIBLZNCVWMXBHZHRFWNFMZXYWTODIPCMGFNJRWAYBGZRQONEJDCFKVTLTB");

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
    msg.setTimeStamp(0.532144060287);
    msg.setSource(47643U);
    msg.setSourceEntity(66U);
    msg.setDestination(41735U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.635333524085;
    msg.lon = 0.817771906729;
    msg.depth = 0.616466331417;
    msg.roll = 0.801097954404;
    msg.pitch = 0.127606019956;
    msg.yaw = 0.564609589583;
    msg.rcp_time = 0.213433057443;
    msg.sid.assign("AAGZQMQCBJAEIGBQORNCMZZDJGUQICCOIXCAASFYSLNHNSFEVPKCNWISLUULKMPPMQZRNKMUOZQVZLHHPDZWADWVTXRGASSMXTIJNYBKKBXEINFLDTTDYVGXBWRVFLGUBUTMMWVEIKZKPOHJPBDJKKGBFIAZZWRJYFAG");
    msg.s_type = 81U;

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
    msg.setTimeStamp(0.602756175883);
    msg.setSource(11666U);
    msg.setSourceEntity(51U);
    msg.setDestination(52826U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.751354224177;
    msg.lon = 0.30030170964;
    msg.depth = 0.156366960427;
    msg.roll = 0.370815750973;
    msg.pitch = 0.458986156193;
    msg.yaw = 0.0906180814204;
    msg.rcp_time = 0.530685916271;
    msg.sid.assign("UANIIXAAIGCYSIKDCNQQLNTMTOCGOYBVMYESTYMKZJGNFWV");
    msg.s_type = 166U;

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
    msg.setTimeStamp(0.352002175827);
    msg.setSource(52482U);
    msg.setSourceEntity(10U);
    msg.setDestination(14497U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.106087136283;
    msg.lon = 0.236070729239;
    msg.depth = 0.155047743717;
    msg.roll = 0.915033707537;
    msg.pitch = 0.208378016688;
    msg.yaw = 0.428917003832;
    msg.rcp_time = 0.543789251873;
    msg.sid.assign("LYVKKJBTMGGYAMJMOEXWXPQKHZYHRJXCHIRZKUDYRRPCTEOSFONIDGWTPNBIBDEKQWHIALOBNZDBJHTXULKTGFVVOTMAVMIR");
    msg.s_type = 247U;

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
    msg.setTimeStamp(0.208437673901);
    msg.setSource(30684U);
    msg.setSourceEntity(19U);
    msg.setDestination(62935U);
    msg.setDestinationEntity(28U);
    msg.id.assign("QOZCQHAYYZIVKLAERNTSTDCKPFDHBSJMFIWUQSKTDHUSDVPCNZNPQCBFWCGMYWYOKIGJHVBAMMEOCXIAOIDYMVAKJUWTTSBDYTLLCRWVREGGSYGZAEXQNXVEUZTOJXJSGMZGYJSYCLEFDUQLYEUFKRCIDRTKHFALLMMXQZIPTSUIJCVNVKPZWFBKJMMAPGLGUHRNFOXNWRWZJBGKUHTVWEJXQ");
    msg.sensor_class.assign("HRCXTHPSNCQOJGQUHOOFKDALYEUGPNWGSHNQKLNRGTVEVGDMHLTYIHZZYLQRKOWQYPOKBFFBVMCYHVVRMEAAYISXLTAMTKUSDQKAWIEBPWPEOMCOIFEI");
    msg.lat = 0.997154161011;
    msg.lon = 0.559449506954;
    msg.alt = 0.635914443845;
    msg.heading = 0.290082366245;
    msg.data.assign("UJVBRLJQKVXNZTBDISSQYAZXTZQFRMOUWVRFVWKMUEVKQPDEHFYBMLHJBXLEYIXAVKKYJQREUCQNYBGRQVKGNMHOJDGLTSOSCGREMEHFTGGEQAIPWSITLMHCIZCSAWQJPTUEXFDYTR");

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
    msg.setTimeStamp(0.859730830915);
    msg.setSource(49904U);
    msg.setSourceEntity(4U);
    msg.setDestination(40021U);
    msg.setDestinationEntity(53U);
    msg.id.assign("OVWCHYBMICSRVFZEIOAQKTPJZRFXIEQGLBNGNTXYJNOTUFTXBDWRZJGTUVAMWMAKSIJANHBEDYGOKLFIHUOYIGUPFYYMKVETSCGSDVAXRSRJDFXEGBQDMNVPYHSPTFXHUWAPJHKVBAHHEBLSDSOWFTOBYPLHICXLRZELNEPDNQUJKPUPHXFLDWVCGYVAEZQCDZLRKJXVJQTEKRZFIUNILZJKISPQGWMCQULQKRA");
    msg.sensor_class.assign("YLKGPCMCFAYBEGZSYVGLDTSCHYQYKWXWXWCCURUIGKTKERQXRAQVMWNFPNOLFHMFIAJA");
    msg.lat = 0.681912992407;
    msg.lon = 0.941768283183;
    msg.alt = 0.987731408653;
    msg.heading = 0.116429518457;
    msg.data.assign("VHMBCIPTHDZTNGILIVCKUUTYQVKPHXVNUFDDUJTWLIZQQHOVXBFUTUCAXYSQJFFEHDBVBYPEDEMWEKHXOLWRGOEKRDXASEARESEDOATHXQDODUSCSVQVCBUFFERMGNKLPWLYFWZBMJGXTANRCJBOIFLJJWLROMGWZZGTCASXHVCOPRKQMYGWIYPFJQBNNSTYSJUYVQNJKTOBPYHWAXZIOMBUPZARFRSIJCRMLNNSGPMLAEPX");

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
    msg.setTimeStamp(0.446608993129);
    msg.setSource(63820U);
    msg.setSourceEntity(120U);
    msg.setDestination(56128U);
    msg.setDestinationEntity(186U);
    msg.id.assign("HEJBSKFKBMXXIJRLIPUUEOSDRPENDUCHNYOTDPRLDKISAFOXFWIYSGBLPELWUFVLOXJGYZQZZCXTSNNRDUSHWJQFWHJZMIUANCBMTGQPSQQRQGXGJQDOFPNBMDATAKGEVOVBOEOOCELXNUKEARHZSCPRTVRG");
    msg.sensor_class.assign("LJVQCSAKJIBOVCOWJNDHNWINREJLHYTRGFBHLJSRBCXVCMAWCUTHTFMZEMDAFMEVQYOMBBYZUNAAYEMFNVGZCOVTNQLXIUGUIYFGQBDWPJRTDEKETDPHPKOTOJBWCSOYNXGEKXTXUZWFKIRQGDTUCKUQYPOBNSQLXQUWEDPIJXPPIBSRNCVYIWRUFDBVRX");
    msg.lat = 0.309078499105;
    msg.lon = 0.450598511506;
    msg.alt = 0.0404522081016;
    msg.heading = 0.241145336425;
    msg.data.assign("DJMKKRGVMINREYLXPVQKJCWUVQERIAFPIRKZXUNDSYZYCBSOROTBMLGHGHLFUHRIJIRNNTXJHKUJHDZVRIPJKTVCNCGBAMYMOHYQDTQZDZUKOABFVHSITECDEEMNPFWWSNYDGNAEMZSLEYLMFBYWRMJBLBPXHYBOTCCEGGIFOPPWEUXDFFWZPVBQFVIYALUEKSAQCKKLUOICZSO");

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
    msg.setTimeStamp(0.224603910433);
    msg.setSource(7323U);
    msg.setSourceEntity(92U);
    msg.setDestination(27652U);
    msg.setDestinationEntity(222U);
    msg.msg_type.assign("ADNJUJRNNDAMXWAVSIUZGSXDEXWFLEUMUZTNEPZHKLKVEA");
    msg.sensor_class.assign("ZBKVQJSUGJHZPRAHGWFMZXZQIJVOCPVXVPGDUTVFRDGRHPKHNLFNYGAUZDMFYKSWYSGJTEOZNDKNABSPQBLSORMBIODFQUZQXIDFMLNYDGKTMNXDRYXBKVEVMMDPEBEBOYBTRCTTJUIBQNOWCHAQFZXAAX");
    msg.mmsi.assign("PZNIEVXJGRCWEJHGXIFFTWRUADYBVBZAYLESXOYJDKBVPUGIQJMIHLZFBCQWYTBREANTPFAMKLVKLNIGIVCMHHBPSHDUCGVLETXOSNDRTCUHSIKXMMCUZBSIRRF");
    msg.callsign.assign("QZQHPODWLFCNKMATWZCOFUXFSVHGZNHNINTIYRCFJEPOOXBVCXEGXPMADPYEBHVYCREHFJYMXQRLLWFJTLBJURMOVZUISIMDASYIJPXGJALHWTKUPSSUOOOKBKESPBGRRDFVYQCZTYCARVVPLLUEZNXDPUSWDQGNEUNTBJKGQYHVDLZOAFBNSKTHTYIAIBCMKWMABIMTQTDJFEVXRKKCJWSLDRIIAGKMZGJGWBCNLGVWHWAYDEXRXZZUFMEQ");
    msg.name.assign("KWXLBUFUTRVSENNPOABBGLTHILYTYM");
    msg.nav_status = 178U;
    msg.type_and_cargo = 164U;
    msg.lat = 0.0505508228644;
    msg.lon = 0.793334040766;
    msg.course = 0.289713997427;
    msg.speed = 0.97234173107;
    msg.a = 0.293189160798;
    msg.b = 0.0303432770262;
    msg.c = 0.625777410202;
    msg.d = 0.132889026021;
    msg.draught = 0.747472687579;

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
    msg.setTimeStamp(0.0621891046347);
    msg.setSource(52977U);
    msg.setSourceEntity(52U);
    msg.setDestination(23757U);
    msg.setDestinationEntity(177U);
    msg.msg_type.assign("CUONYHHILQLKSLRZGZIUCFOXKOVMEDIJFNITRUPGXROVFTLILBQMGLAEEGOWPBNSDYLNNJFKIZEJSYVTYXCXSVKHBCHJSUBHNUVYHPAKFWHLXEMEFTPXQZOSFDJSXBMCQTWRWODHQRCJZGNPWTCCDMQSQXWOWKVUBIRKUSMZTVFWFGCYIAYPMXCMIKKDPUZHDAZYGYEEPJRRMAWTAVDGTVRAGGWYBJ");
    msg.sensor_class.assign("YRMSDXUVWNWFRIDBWSRLJKAXRGQXCPATEMVWPCDPHSKUFONIKWGVOEOJEJOVZYTZJPLMJALMAPYWWOCLZTLLZUGDQGNAIDUETZMQXDHQOVBH");
    msg.mmsi.assign("KCBGWOARXLFUCGYZFDQJGZGFMJPHUXSKETTYTCYEXJZMPVSJPFZCUXRHPUJRTVCUQNJLRKUDSETQPBSBERYMZBDZPLKKGHRMWBBQWTOUNQCDBSDQAKIVGDUMVAWXKZFOANGMHCIIWMYXXZOLTJDAT");
    msg.callsign.assign("OHNPIDGBLYRWORZBUJLFTSEBMIKXDFUHULLKBMFDCJOTCSDGOTLSRDLWPYTGWUAGUVWJPIMUWNQIRUBTIFYLHYENCJYDJMVAEVHEVXBFSRAZCALGAOLRGKUPPBHJJOYSXQXCCUKOXVYNEANWOSAQKEERISSZVQGENNFVHYICDXTPHNGPKRVIMCZYQQNFSZKI");
    msg.name.assign("CMUUGWSVOGYHWGDYXSUNGWSPKOWUATPNAZHAMRLCVFUVOMIENGYXZWNOQOKBJRHTDL");
    msg.nav_status = 111U;
    msg.type_and_cargo = 200U;
    msg.lat = 0.248700081171;
    msg.lon = 0.87368508642;
    msg.course = 0.39409084572;
    msg.speed = 0.558716713618;
    msg.a = 0.099280832419;
    msg.b = 0.27094592635;
    msg.c = 0.780205533806;
    msg.d = 0.429498228848;
    msg.draught = 0.572972889271;

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
    msg.setTimeStamp(0.920940710279);
    msg.setSource(26819U);
    msg.setSourceEntity(229U);
    msg.setDestination(29686U);
    msg.setDestinationEntity(172U);
    msg.msg_type.assign("TCYBZFJDHIKSEMGHHVEQQYDIWVSGVRODALJQVRYPBINZNRPYOMBZWNWBRQSNZBCDJRAADYDYZSQTOUCUXMXKWDLPUEGNJESPKLGGMHLOIFLIFUMGUUTBFVCGIHBXXTKXQRDJKXTIYJTQVNFUXABWKSBMOPEQREWMTZVAZDWTSOXCPVJFULSFRVWJTNAZCGMYUFLAZKOLJKJHEH");
    msg.sensor_class.assign("AGIOXBLIKKYTGVZYKARAWYPWHWSEQJTJILGHMONRFYZAPZLCTCZOQSXWDTTNJCPVKLVUNSOXRFWEUHWGSBMKJDGYVRYLOJBCFXWCVENKDVWMXQAMPBRIEEJIEFNWUPGQLNCMUNJUHVHNIXOMHYDQTUYCAOVKOELHEQZCBZSKRIHJRAJPDOSNCGUUFZGLDABQQZWKTFFGTGEXVPDDBFLTSSJTVDUMZIMHXNRSPIABLA");
    msg.mmsi.assign("WYVEAOCMPVCXXUPKAIXHCNYAZQDDYTBTOT");
    msg.callsign.assign("HAIRVLTLQEIOANADCXRZALX");
    msg.name.assign("EDHVBKHHOFGBYKRPRNJMFJQUYIDRBYUEUDGPZKCFYESZQTEUKHGWOTYDPVDCVUZCQJYMRVMRTBJZSBYWZNVLJMAIGSNNZPNWVPXDRDGWOWHMKOZPKHKKNNULOFCPOH");
    msg.nav_status = 7U;
    msg.type_and_cargo = 0U;
    msg.lat = 0.515669773886;
    msg.lon = 0.673576961792;
    msg.course = 0.313842791019;
    msg.speed = 0.0828754533469;
    msg.a = 0.412222969531;
    msg.b = 0.620520307196;
    msg.c = 0.96980275364;
    msg.d = 0.540752571843;
    msg.draught = 0.168107290676;

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
    msg.setTimeStamp(0.058467991708);
    msg.setSource(4900U);
    msg.setSourceEntity(217U);
    msg.setDestination(19787U);
    msg.setDestinationEntity(236U);
    msg.id.assign("EZDPGHPKPJCHXOTBERRRPYBFFMILAIPJOBLUQVCVLOJAHEXDAQXGMGBWMQJQQWFBXTNTNVGZOESCYHUNNCEZWQECRYTWPAZFUHWRXHLKIOSYCJDGGFQCKGRZRURBZQHSJUEOMAXFZTMLPGDINDKIUAJYUPJMLXLNWYNWTSXWSKAPHLSBDTPQIHSSWXVREYFYJC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QJCABJDUWVXQCJYUFWIKKNZQYGDJWNLTWSTDFHRPLYJIRAHOYMCMBFUJDPESTQHYFDSPNELUXERKBRWSVGMHCZDOQPIZOZEKCQOAOBMANOUSGTTKWOVFNNMASQAJLSTIXGCZLGNQAVQTIRCERZPWGHMLJCWYVD");
    tmp_msg_0.feature_type = 62U;
    tmp_msg_0.rgb_red = 128U;
    tmp_msg_0.rgb_green = 51U;
    tmp_msg_0.rgb_blue = 229U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.483862703018;
    tmp_tmp_msg_0_0.lon = 0.307069917295;
    tmp_tmp_msg_0_0.alt = 0.378034568513;
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
    msg.setTimeStamp(0.84783335357);
    msg.setSource(60112U);
    msg.setSourceEntity(54U);
    msg.setDestination(33237U);
    msg.setDestinationEntity(199U);
    msg.id.assign("OUYEUDVWLAHQYPJAERUSITIMUSYPQEWOMJUYNTNBHCROXCJNJQEEHVXRZXXYKSEQTYAGKQOSFIHVVDZPPUBMQMPLWBCQJBENCVHKFGZJCCVRCWOVZTBGTQNANZXRGNIHYMOMFMKZDTWAYYNKGPWCFDP");

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
    msg.setTimeStamp(0.352911229237);
    msg.setSource(35034U);
    msg.setSourceEntity(131U);
    msg.setDestination(49195U);
    msg.setDestinationEntity(130U);
    msg.id.assign("TPAHMFCFBZZRTAAWRPHBZUVRFCDBUISEADGFRWQKMUXVCDIQQTXSESRQDDAFHZASWSSHLZOFMGEXRCPIXAVISYJLNKBXSSOWNYPJUSCEXQKIDHIWZJYREJLVLEYCTITDNKEKZPWQDAPBOWBOTXLPJQBYBEXMKOVMEIGHVGMPUVFFEDY");

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
    msg.setTimeStamp(0.0401214061194);
    msg.setSource(32665U);
    msg.setSourceEntity(49U);
    msg.setDestination(59936U);
    msg.setDestinationEntity(179U);
    msg.id.assign("ZJOFUESFFDUMIWCERXPRGCLZPBCYRYKCXUNLOEJLFPEBEOSJVYDMQHCDIFSQEUTISXLRKEZYDTMHFTYSVNHXTXBMTLATZTOWROAMQENBMGZXTPOVHAAJHWORVIHLBXBYKAJACFSNYSZSPNUBP");
    msg.feature_type = 229U;
    msg.rgb_red = 161U;
    msg.rgb_green = 188U;
    msg.rgb_blue = 235U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.146970373053;
    tmp_msg_0.lon = 0.676904988271;
    tmp_msg_0.alt = 0.70024771683;
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
    msg.setTimeStamp(0.734486086228);
    msg.setSource(29811U);
    msg.setSourceEntity(205U);
    msg.setDestination(51842U);
    msg.setDestinationEntity(12U);
    msg.id.assign("NIDIFRAKYUQUBUKPWMSTCUXWZTOPLSIHNVOWFKRMJQZQPCVVUNVBBXQDCWPEDHXTQIJRMBZCCJEKRLAFUKJVQFQLHZYJJLUXKVXSEZISDYOVZSKWGYGECNEGHVFTUTHVFYJIDMQLKRGEGFCLXQDDHAHLBTWSPAMJARECVKMZRIMJNLIUDNZWOGYLBPWRGDGOSFSCMUNYXCZABERHYOZIDWOPGBFFT");
    msg.feature_type = 190U;
    msg.rgb_red = 254U;
    msg.rgb_green = 245U;
    msg.rgb_blue = 83U;

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
    msg.setTimeStamp(0.861436370099);
    msg.setSource(40906U);
    msg.setSourceEntity(119U);
    msg.setDestination(2156U);
    msg.setDestinationEntity(228U);
    msg.id.assign("TBQPJTYRIAFOECLNFAXVCGEOO");
    msg.feature_type = 130U;
    msg.rgb_red = 11U;
    msg.rgb_green = 199U;
    msg.rgb_blue = 251U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.157238414015;
    tmp_msg_0.lon = 0.95669780865;
    tmp_msg_0.alt = 0.247150033632;
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
    msg.setTimeStamp(0.658458401681);
    msg.setSource(13096U);
    msg.setSourceEntity(234U);
    msg.setDestination(37435U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.817594744261;
    msg.lon = 0.0104890729579;
    msg.alt = 0.129405666063;

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
    msg.setTimeStamp(0.949800140468);
    msg.setSource(49810U);
    msg.setSourceEntity(13U);
    msg.setDestination(18191U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.25970006633;
    msg.lon = 0.261985090825;
    msg.alt = 0.0778932763707;

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
    msg.setTimeStamp(0.558498457585);
    msg.setSource(52551U);
    msg.setSourceEntity(211U);
    msg.setDestination(45527U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.1853419606;
    msg.lon = 0.377508510469;
    msg.alt = 0.724823278788;

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
    msg.setTimeStamp(0.22571664832);
    msg.setSource(29257U);
    msg.setSourceEntity(183U);
    msg.setDestination(5340U);
    msg.setDestinationEntity(167U);
    msg.type = 120U;
    msg.id.assign("WFJHLFMQGXXUWGEQCMGVOTWIVXUBRZWFRCEWJDFJERCQFABOZPEILTSMJYWSTUOFWYGXRMMPRYN");
    IMC::RestartSystem tmp_msg_0;
    tmp_msg_0.type = 128U;
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
    msg.setTimeStamp(0.830670390488);
    msg.setSource(58281U);
    msg.setSourceEntity(183U);
    msg.setDestination(43259U);
    msg.setDestinationEntity(141U);
    msg.type = 220U;
    msg.id.assign("QEBQJNRBRLRJUQGTBASWNYBSDSUEYSUDDSTEIQPGFDYXFQAJMPNTKOOZNGZXLLKMWABIRJCOIUGXPSK");
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SPHZBAYLHJDLLUXVZURLXKLOGQHMHMTPZPQQCIPRJWPTTQZVCSFHKHPGTVVWAWYGVTBYHJDPTUACGDGJUNDCSMQQQARAWELIFCOIOORQBRKDLMMUFHYKQEXKKAGYXUSVYRONFEBTCJSERGCEOEBZ");
    tmp_msg_0.lat = 0.577163231436;
    tmp_msg_0.lon = 0.375274337689;
    tmp_msg_0.depth = 0.603598921406;
    tmp_msg_0.query_channel = 68U;
    tmp_msg_0.reply_channel = 130U;
    tmp_msg_0.transponder_delay = 229U;
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
    msg.setTimeStamp(0.476340740529);
    msg.setSource(30690U);
    msg.setSourceEntity(10U);
    msg.setDestination(57348U);
    msg.setDestinationEntity(106U);
    msg.type = 200U;
    msg.id.assign("YNXWCDNTRHNKPOOVAAZWIDMGJOHNFOCLAVRFZDSMCPJSWTOPKXMWMXBOUMTBGYSIVQIDUDFGZYEESIKVEBLEBJRYVNWSYXGSDOWIYRAKFBQJPFHUIHBQWEXOIEBVHLTFKQSRLPQZLSFGWVFQDZBAY");
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.405205877907;
    tmp_msg_0.roll = 49102U;
    tmp_msg_0.pitch = 31408U;
    tmp_msg_0.yaw = 5823U;
    tmp_msg_0.speed = -1178;
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
    msg.setTimeStamp(0.379171222809);
    msg.setSource(43080U);
    msg.setSourceEntity(153U);
    msg.setDestination(61182U);
    msg.setDestinationEntity(61U);
    msg.localname.assign("NCAXOENHXLBIYXLTUTGZUYLIFJJVDWJDRZQFRBUAMHIOPJBHVZAZSLKZOGVWURCZFMXYZHPQVXVMCNMOUHDIEWWKNROQDTPEIEFIHQOGAGTBHKAHPZEFRSSQSNJWRTMKIQDTNKBLNJSKTSENKYZURBZXWQSNITSUHCGYLAIKPJYDCJIW");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("XBDYBIXUCIOPEHPRWXHPMVBUTP");
    tmp_msg_0.sys_type = 47U;
    tmp_msg_0.owner = 50296U;
    tmp_msg_0.lat = 0.746982948122;
    tmp_msg_0.lon = 0.553116761049;
    tmp_msg_0.height = 0.439772796367;
    tmp_msg_0.services.assign("HESSAMIGTPFNYNOKHIYMJGSXRMUDKZROVCBJQXNCLUQAUTQQVNRHVPTBWARFXWWEUXAXQCYMOGEDHAMBAPWMILRBWPJLBDLLVDTMMQCFCGSPIYDNRULWFSFTCSIJYGECYGJAJNDMBHIZZKUKZHKIYQLQ");
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
    msg.setTimeStamp(0.12685307337);
    msg.setSource(44659U);
    msg.setSourceEntity(44U);
    msg.setDestination(40465U);
    msg.setDestinationEntity(141U);
    msg.localname.assign("SDKFBDENRRURHMHYCZZUGHXNKVEJYXDVETTZUSCGPCZJPRFUECEQZYWOKOJP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SSSRKLVIMSNPXRXQOJBTBHTZWORWXAGSDPOMMKTHRUQYUJRFSNWZBOBGMAMBMJCEZHRQSNVKHLVHZBQEZRRFLBNSNFFPZTMOQCUDJCEMVQDEZYPAVUYKAGVODOAEBLIPFONMG");
    tmp_msg_0.sys_type = 218U;
    tmp_msg_0.owner = 5223U;
    tmp_msg_0.lat = 0.050576237059;
    tmp_msg_0.lon = 0.308127838892;
    tmp_msg_0.height = 0.969235686364;
    tmp_msg_0.services.assign("HFEJNGIMNZCTPKPSNMZYHOKWAYJDT");
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
    msg.setTimeStamp(0.263349276997);
    msg.setSource(59421U);
    msg.setSourceEntity(48U);
    msg.setDestination(30061U);
    msg.setDestinationEntity(48U);
    msg.localname.assign("QYAHFIFGNUEVLZBYRIYPMEQJZFGCIASOCNAF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MKAWMRTCFCPMCBGMLKUGSPNKFNCZFFHVRLFMQULWUUMLJSAYTFTQEQIBKBXBDRJYJEVOPSIMPTXODWWIDSRDKUJABYGLEHEFRDXJEKBEVDGVBHMYDIUUNEUSPRCHYXONCTJNDMZRKSITFL");
    tmp_msg_0.sys_type = 1U;
    tmp_msg_0.owner = 3744U;
    tmp_msg_0.lat = 0.24972544932;
    tmp_msg_0.lon = 0.787225396419;
    tmp_msg_0.height = 0.887699112942;
    tmp_msg_0.services.assign("ONYOOILSHIGTKWDBZLOYVSEIXUHKSOWLNGNCAGMEUGHWBMNQPXOUXISTDOZZTABJAEGCZQILEKDJSVZIGPKCCDEATAFQEQRFUUXFQMPCNBELKVFIYJQVZRWJINYGVDTDSWITUUMFGDKSUFXJVOMWCSJYMXVVRRABRSAHTN");
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
    msg.setTimeStamp(0.295431408633);
    msg.setSource(49949U);
    msg.setSourceEntity(52U);
    msg.setDestination(30452U);
    msg.setDestinationEntity(82U);
    msg.timeline.assign("HTIRNUADYSJZHM");
    msg.predicate.assign("MOOYZADZCWYQCKGEJKAXLSTXAXZIMORFGOVCGZSMPOMCJAFEUDUAOFUUDIEPRPZNJLVLYQQPSAPF");
    msg.attributes.assign("ZIHLTFRPAILUUVAEQCCANSYYEWXHNFYQIBJHKICUBGAMXAMPCEZATACHURSZOPSMVGDMXZXKVKFXKQQKSILYBZANAEEJUOYHCXBSNVGXKETNZSKTGTNOVXGLAGMLLEBWNGOQRBROMKDDBTJTNCHSDZHBFUTJHRKOUNPDOTYIRDPZIFNHJKZHPJCXIGOVRIYUMPWMJQFQWDLPWFPYMGGBJLCWWZFYDLSEUFRWRUVDESRLPVQT");

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
    msg.setTimeStamp(0.879108966493);
    msg.setSource(567U);
    msg.setSourceEntity(119U);
    msg.setDestination(456U);
    msg.setDestinationEntity(163U);
    msg.timeline.assign("YAVTNXREEDTXHPAUERGYUIQCKELXNURUVCPXSMNOCPRMZHOMGWLNUKUMDGRGUJSDZOEMGBICCVQYHOBLSZMZYFNPSQFQWMHEFJHKZWSCDTBDPXAOAITPVWFBIBCFLKAQVSFKBGYTKFDGTPNJQWBLILLTXEHKIQYNIZXPJRUPWOKCMZIYJTXSLJWZGSCMANJIEAOAVGWQROVTRIJPAWOHUFHQVCYFVTDEXWSH");
    msg.predicate.assign("EWQYEBORDQWDHTBJREGLSDMCHAUPTVZRZNJBTNICPJQKPCHVKYGXUWGZJJPZTJEHMCVRNSKNMDYEQULIDXMBLWTWPGOXTZQSPS");
    msg.attributes.assign("HOMCNOXTSLDGXIHJPLYQEWPCXZYWZYVSIIVFSFOUGFQBKMZWZSHBETUGQZKEEBBOWWME");

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
    msg.setTimeStamp(0.0151489074199);
    msg.setSource(5600U);
    msg.setSourceEntity(175U);
    msg.setDestination(10418U);
    msg.setDestinationEntity(97U);
    msg.timeline.assign("HIJZCXNTXIRTMVQZITKBNWOGBRNNEQSTPWIJZEGDXZNTSUZAMSDUVXRFSDKIURIAAYQCLLBUHVWKSDSQPBUHEKGUDUFLUBPKQVEOWNOJPVANWQJOYTCNADLTEBUYYCFKQJXNZVMIMFFWZOWVHRCUMXHBDYKMJVPKGYRKEAWPXQLEMOOGDOIHHJPARFBABJYJSVSBCDLLWCSLZ");
    msg.predicate.assign("WIRZLGXWCLCMQSIKDPOVPQAWUBDBXRABCIA");
    msg.attributes.assign("SUULOZMZGIJVUTTLJFQCELGAIDRMAJRXXXGCVVSWZPXFUTBDGONCFNPWEATMOLDVRQXVRBXTAAHECSYPCLLGJRCORGMYFRADEGVOAIMPYKRNCWHUNNJKCDUVTBONLHSHMBPWHVBRLDWOSMQVHFQOTIMYKKIYQZJYNNWWU");

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
    msg.setTimeStamp(0.270008877037);
    msg.setSource(7873U);
    msg.setSourceEntity(217U);
    msg.setDestination(21504U);
    msg.setDestinationEntity(1U);
    msg.command = 80U;
    msg.goal_id.assign("ARFDDIHYEBJPELADSVQORKSWKCXFLDGUGOIMHVLAOQMTDSOTHQFSIVCGEKLQSVADJKPTUANBEKPCU");
    msg.goal_xml.assign("AUWAJRANDCFFEMDJBPLNNNSGQMSBSATBJQWPOLUZVLDTUKGTXFGNAEHLFIGVPTXMQCBCZULSCWWEVDHVKOKKIWBZJAJIMTSYCKFKYVCQYHYOZGPXDSOVYSQLJOBEBVKCVEDRXTNEIHAJANXTNIMXOZQTIRAUMWSFEILTCOMYA");

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
    msg.setTimeStamp(0.385346094301);
    msg.setSource(56941U);
    msg.setSourceEntity(251U);
    msg.setDestination(9863U);
    msg.setDestinationEntity(95U);
    msg.command = 109U;
    msg.goal_id.assign("HIUGUUCFQOZEDFE");
    msg.goal_xml.assign("WEFVQCLFDUXKEXPGXEDUBIFRFOZODUIWQFSBPSYTNQBYKRYIRUZSIFHSTXCYAUHGIMXUBAMJWZVRGGCNHAVPYAJEQLMTNOGYVMEIHPRCPUKXEZTENCKRJRBLD");

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
    msg.setTimeStamp(0.119266119621);
    msg.setSource(48686U);
    msg.setSourceEntity(238U);
    msg.setDestination(55752U);
    msg.setDestinationEntity(10U);
    msg.command = 130U;
    msg.goal_id.assign("CPHGUKUKSZEBYYULMCPXNMCJZOPGMTGFFKJNFXLOSJYVANSVMNVWTIAUDUNGEDICQBADOIPKYGOKJCDNPRPOXJNJ");
    msg.goal_xml.assign("EPBJGOTUKMKJEFEEUWOZCMJEXCVZNXXIJNRSRXJPAWWCFCAABEOLBNGPFNIHYSRZLLUXJKZEIQCHBCHQHDYIYKTKLMWYTBJGYNBQDGHTXOHSCWJYKPCPCUSIIMOWAGVWYNGGOUIFVTVQBKLWVXUAQDBVHWMPDSHQTZMFKHANPLRSFDDAVOPRFVGBJXNUYYRRGATARTPNLMZEVTCTINKQMDXRJMBXIRKUDSUHQEG");

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
    msg.setTimeStamp(0.769971663619);
    msg.setSource(11976U);
    msg.setSourceEntity(160U);
    msg.setDestination(10570U);
    msg.setDestinationEntity(80U);
    msg.op = 116U;
    msg.goal_id.assign("BTNOYXKEOCFXZUAKXCAAHKPWKSXYCGBGNJDSJVHPZJXJIHTIHUZLAUIMCFMVMRGLQSEAYOSTFPHKZVAO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ILLORNEBUSDRYOWVGIJJWAEZLPFDBULUAEZNEBPCCKSMZKWKMVJRMKYHHNZSOVTUZTDINQMDOO");
    tmp_msg_0.predicate.assign("MUZHCJNPSLFFTSOAMYRYNTCDGJDKUBGLLJMBGYQBJESQQGSPDTPVXNYFFCUWRYTUHXFNWAKHD");
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
    msg.setTimeStamp(0.450831625261);
    msg.setSource(43551U);
    msg.setSourceEntity(175U);
    msg.setDestination(11407U);
    msg.setDestinationEntity(24U);
    msg.op = 216U;
    msg.goal_id.assign("LFKLKSTWTFBJRFGXBUNFWFEGUUHTALKJH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NDRPVXEXKRWCQYHCUHNJDWBJGZEYIKXQEVLNUYSIOEUJOAQKWYLMPHGHJHGTNPOZSQHSDCINMTRZAPFXPDXHJOVJRMQMEOAD");
    tmp_msg_0.predicate.assign("MGIJOSDDZWLLQSVKNZLILMGBLEIJFSLQODVZJIPYYMVERTTMUQYQZCGHKIFRYDOECMYJLOYHCBWVWBDRHGYNYHJALDFCTCUEAXWKPPXRKRCBJPQMNBXHKPWKPJBXFVIBOAUCZFDNOTVXVUTGXFQHTSEAMHGPVAKSEUIAFOGVXGKXWYRPQJAEPUXHWXURUJIZNBOZSJRNIAAKAHNTOHTGSSRSDWDWYGTBDFCUCBQZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BCREFDUPONWMVBTJRCTEVVXTDFJIKUZKRZOUXLLGCYGMSYUSJASTQMLHROQLDEXCVLSNDQRERAYBSBAGNSJJICGNFMNCXBIDQZP");
    tmp_tmp_msg_0_0.attr_type = 96U;
    tmp_tmp_msg_0_0.min.assign("RXJCMBYUOSKBTTITSGSVNGZWVPANOEYDTKDRKFZMHOIOQEZCUVEQENQHPGBNTTCNDOQCHSYRLEPFGMAMFUJBURIWDGX");
    tmp_tmp_msg_0_0.max.assign("WFSMAXHYQMMTAOHCLTHJNVGSWILTJWOBDLAUUDTIYOKMXEBFFTMQTAFVSDEIXPDRNWGERYLDYHTBNRYSRGTDVZVZDGZFYAVFVEGJHEGKXXIGLOVNXIJOPWOKUBJQCORWQYIJPIYLCDDKCEBKMWEUHPPSANCLKZCMNEZWVXNGQLVTZKZARGJSBSGRFDPCLEB");
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
    msg.setTimeStamp(0.573441143195);
    msg.setSource(58648U);
    msg.setSourceEntity(107U);
    msg.setDestination(56161U);
    msg.setDestinationEntity(221U);
    msg.op = 197U;
    msg.goal_id.assign("EFNWCSMZMEJXBLROKECKINVREDKCWDYBBBVMZKIQFVDLRVQYXMDFZCHAXCEMNAAQGYIIFVQAUPOLUVZAGIRLPNPKGRRGYFRHIVLAH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FMHYGQUTFIQG");
    tmp_msg_0.predicate.assign("YFPKNYWAOHMXVHGCDQNRWSEWYYARCLAWFOSUAJPDIAFUOGYCUVPBIUKNDSMKZLNVHPVPLQUKWMBQYARBNGZEOMSHWKDOFJMQZKTSLJKXWLRMCQERTERQBILDMXPEUOKJUOJCUJGITPEGDTCVVMEJZBLIWASHBAUXBXGPITDTNTIFEZCXYZGBXGSQOYWLLSCHAANGJNYZGFFQRHHKZINRVHVEEICFKWSJTFOXYPIQXPQMTDNMORZZFDBVTJC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VKRBFHGQEKTXOOVVBZHOUSFUBKGIGKWSJZBHOAGOGQDSDVRIWPPI");
    tmp_tmp_msg_0_0.attr_type = 67U;
    tmp_tmp_msg_0_0.min.assign("GAGAPJVBKZJHULJICIXOTSZDUWXRQFDQXDKKEHSJPIDUTKNPVTHNCJERXGABMYPAFFSQSGDWQGSYZPBETIRDPYOFVLULYIUBZETREAEQQUPCBFOPWDMSAYXKIGSCIEODVGOLWRRXSUCREAMWKBZFNVQHINHEJVFTBDMKWXNRMORWIPYLLCBSQLYUOMNNTHXOUKTZZQXXMAKMBTTHQJVMNBMFLOJCGCVFHGUZNHYLSIFPRWAONWYGJHCZDZWYEK");
    tmp_tmp_msg_0_0.max.assign("YPPSQWAQBVDDFXZYUPBEWGQNDXFUTINIQRZICUVYMAJZFXLNPRVYUOPGHHKIYWO");
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
    msg.setTimeStamp(0.672862500137);
    msg.setSource(25068U);
    msg.setSourceEntity(171U);
    msg.setDestination(24905U);
    msg.setDestinationEntity(61U);
    msg.name.assign("YWEGBBJYLJXUJXSIFZZQVZXWBFWNMTROMDMMUITPKOCRDTBOLHXSJHXEQKSKXGEYVVYNCUBBURCNYZVQLAJASJPHCQAQRWFMKXYZOKWOOZTJHPRVAFTOHAFQNCEIFCM");
    msg.attr_type = 250U;
    msg.min.assign("EEDMJCUDFYUQ");
    msg.max.assign("GUNZRTEJRZQLRJXNPUIIOEZTDZLVTEKLQHJBSHVJGJKIVYILRZFODJWMSBMDWILATCPGHQTICHAMQPGZEMBOWWGBJAEMQYYNCYKAZIMTNFHFNEFSMOUPKVXJNRAWRZEPTBSQLSRSFRXLQWMICYQPXVHKCCPDCVYBHDNFUMDPAIJSQXFHWUAZYHOQPLYFHODCUNUARITVXBGVAGDOGDO");

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
    msg.setTimeStamp(0.699601771877);
    msg.setSource(57767U);
    msg.setSourceEntity(135U);
    msg.setDestination(65002U);
    msg.setDestinationEntity(36U);
    msg.name.assign("NVIGYXIGMGASVQYCGLDDCTJMUNNGS");
    msg.attr_type = 108U;
    msg.min.assign("KSLCQLNGERIDTDOIHHYJDBNLIPPNENFRKTA");
    msg.max.assign("XGTMDQFBOPFNXZYTFXAJACLXRWBDETTYXNYGEZUPWDOEPNFMHSJHENXKIJTKGUFY");

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
    msg.setTimeStamp(0.886594723976);
    msg.setSource(47890U);
    msg.setSourceEntity(67U);
    msg.setDestination(18634U);
    msg.setDestinationEntity(114U);
    msg.name.assign("JNRTWVBQEYZGROHOFXTJXIOAHKXWGJGHLPMXVLUKJYGKQSJVKAOTFWMGXRJNNACCIAXEROTBVQRMYIWLBZYDKQGADJCLBFYMIRORITEHZDUMAPDASPGONLGCNLNZCEBVPEMKPW");
    msg.attr_type = 148U;
    msg.min.assign("NLEKCNJIPDZBZIWHRAQELSMSBIMHDPMQKWDTUGTDCQNBEQOAORLHZIYHCWOVUIFNWHBNRETTWZYYZWKQFFPFAOILEJPJXFUDTSWGMUMZJSOGCSRUZRFMQHHMKWRBKSMBHMUNJFQYEQLUDETYSVJXYPLCXKVNXKQIIXVBTECHMBKVOYFLWA");
    msg.max.assign("HUXDQYNBYFMQAFQBIDDZPZUZNOCHTRUWBSQDIOBBELCLPLDDNJYHYRRWRUTXAJSNOVSDP");

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
    msg.setTimeStamp(0.758724279683);
    msg.setSource(2191U);
    msg.setSourceEntity(166U);
    msg.setDestination(48217U);
    msg.setDestinationEntity(220U);
    msg.timeline.assign("VCBCNZHGPYCUGKSCIOZGWTHPFGCMNWUPKGGTSSRJDOQRKMYSKVNIXDPERXVYKMAAURDTVFHQRWOOSVFXZCHQPLEAODATCMPUKPPWYTQMIJEXAJCWSEOATNERIWXONBAOFSN");
    msg.predicate.assign("ORXZSEDNOTBVCUGHQWUXFSAPXDCAEYFKBTTWRARFVJQYSTMJNPKOAICVCCDENRKLJKIMOAGUSRBFOFRNSTXNZIZNHUSZSWIFQIMYTWPGWEYDFMKVEUZOGQMFSJACBLXIBSRXJYIOIOJKEWXMSMDZRGQECQVIAWEVTPHXGLUCYH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("FKZYEHBNRROEXFSWFWAKVCPQIYSNCJLURZRIOASTLQHKRJBKLIOJNHZGUKJNLTXTCFOSPTVDRBOJLOSCGHLXJEJJPLQCBNYIZWDGNMDEDMJIWWZIKNHEQNUUYTSTKDGHIAMEXUFPVSUUKAGLGFVMPCVVFADINEIBKFEYSCYWZPRXTQVDNKAMASCTYQIOQMXOAVURLTBAVBDEHFGSPMCGEMRZXQWPHUGJWQLXZZWBYOHDXM");
    tmp_msg_0.attr_type = 104U;
    tmp_msg_0.min.assign("KYVYEXKLBWRRWWIZKERUAGSQHNLKQDQPMGNSPHDISJCTAVENAAVGPJKQHTCHCKHOHIMRVPDJQJUSHVOWMFKWNLNNXABDFPFCXTLXHDRDFGPVPQJSRZZXCLXLOJATYOCBIUEFWJFFGZLBWSBRDZMCKDVUZSVEAEIUPVGFFDHZTAAHYXINZOLSEZQYETRRBJOMRAYFQUSKQMGOGYXWONCCK");
    tmp_msg_0.max.assign("NTPEABXHVHSTUFVRUUODLJEJGFODYRTWSXKBIENNDQZMXYRRTKZPUYPMQADGHUCVHDCYIGDNHIYLXLSGOMEEIFCEKIHQOBWAOVAZZZURZCPLHLAIZJEVJDKMIFWTPKCLKBOLUYRRBBQKHRXOKNKAXXXQZAAMCNOQBPTQGWUYZFBJPOVHVO");
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
    msg.setTimeStamp(0.92799141776);
    msg.setSource(58801U);
    msg.setSourceEntity(175U);
    msg.setDestination(13711U);
    msg.setDestinationEntity(25U);
    msg.timeline.assign("YYSBQUINQEVSYNMWDAFNGQLPTNFFEURQNTUHUZKCLTKRSDQWRVWMYCSYYNBWLOPGUPPOZVGLDFTOMYKWCPTQQRJXXXOKLJHRGVAODSIZOJVXRXAJEGGYFMLUBSJPETPRDZGG");
    msg.predicate.assign("KEXZZPNOQQDVOCPPJFGVEILNYZZKJAVEBFMVNYLOTGLTQXNOCVVRZKQWGSMXTDQMZBCOIGBSHHDXBRACIBRGFPDACXWSVJTTUBPVSEOAJHTHSUZFLKVZSMOAIWVMPJAOYHRNNXWBGYQHDCTYCFUDEUFFUMFWYTLKKZMGFLJCKPWRSJUPWEQWNMEUIIXNYJTUSYSKZDNQIJRBMXAGCLH");

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
    msg.setTimeStamp(0.406780192184);
    msg.setSource(40612U);
    msg.setSourceEntity(120U);
    msg.setDestination(65448U);
    msg.setDestinationEntity(144U);
    msg.timeline.assign("NVZDNZFSGKRKXUPYZKUCYPEZXBNHZIQONFTWDBWLMBCTIXXMLNSUXZYGPWPOKBSXJTVUDVQCFUVRLJAOKKDDGXUAFVSWGMCHICMVASHJPGBPFNWDPFAEVFENNBQZTYXIOKM");
    msg.predicate.assign("TAZGDDRFZYEEVWTCWJKGULPMRYSSBUIQZDMKGVLOFXUCUBAUGMBITSHBLQTVJBNCECWOSNTRSPAIWAJKGUXNQWCKLSLSPNXLHKYWYSIEODYBSWCYFJQYHKVJTNPKJZOOUXPADEMJBQONXILLIZRSDVHYOGFRORYCEKTJAVKXJHRYQGNFHIVFQGUQTZMXZQDDMMAFMPWEEBPHHPMRVQDPWWCHXGFXNR");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XOWYKVRUINYLGZMIWNZZBCMVBINWMSELICXWQFCDBBRUQXAQBCCCAJWZKJKGAYLXYDJOYOEZHPQLQNVSPHOEGUXKAIRQUJXRFXBCSQQMXSEDOJZFOFKJAPONAHETTJGHMKDERHQBTZRDCWMXYIAKIKSLTUSRVNBDT");
    tmp_msg_0.attr_type = 181U;
    tmp_msg_0.min.assign("CHLHSFTUTFVBOOOWOCXWJDRAPJITEISQQEYRWOPVCLCUGMXAVKLZELMACRLAXMRJOMSFJJZEFJYUATMNXSAKDCIGBMHYPVKRUKYHDUINBNJTTREFXTIGIXZNEFLWEAXIDZBQPTBQZNBNLGVPUKFGHDWBYHHORKJMCRVBEUZDVYOQZSAXFEYPVWRSIPFMVAZWCLCTMMNQ");
    tmp_msg_0.max.assign("TRTWTHVJUIKSYGWSFHORRHFWQENGRTOOLAUX");
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
    msg.setTimeStamp(0.523306512502);
    msg.setSource(23674U);
    msg.setSourceEntity(38U);
    msg.setDestination(64473U);
    msg.setDestinationEntity(87U);
    msg.reactor.assign("OJDFAQOUOXWZJIXGQSJUIEWEDLDODUOPXONMEZGKXYZPTFDYOJVBLAXVBYRMANEOGTLFGHHHPPWMSJVTMKLPQVUAWNQGZAXLHYFT");

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
    msg.setTimeStamp(0.828962991871);
    msg.setSource(23688U);
    msg.setSourceEntity(90U);
    msg.setDestination(58471U);
    msg.setDestinationEntity(178U);
    msg.reactor.assign("ZMAPRJHEFHGMHLOWIJJV");

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
    msg.setTimeStamp(0.427616678484);
    msg.setSource(1749U);
    msg.setSourceEntity(76U);
    msg.setDestination(38549U);
    msg.setDestinationEntity(201U);
    msg.reactor.assign("MQIREMNMZREYBRLGZBNICLNOSPTCKHJEHANBVTPWRQVINEVUYMWPAOJHOTVCCDFEREPCGTLDNHTRJRZLZLPQOSMYDHADJUPXKSEVVGG");

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
    msg.setTimeStamp(0.00941704213915);
    msg.setSource(48810U);
    msg.setSourceEntity(222U);
    msg.setDestination(13971U);
    msg.setDestinationEntity(182U);
    msg.topic.assign("ODLDAVTHINEWUPEAZQIPZNFNWFUEIEOOSL");
    msg.data.assign("PWCULSMRXIOWWFPPTJATZLFPROMZUCYYLTYBAOBIGR");

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
    msg.setTimeStamp(0.648827555267);
    msg.setSource(36344U);
    msg.setSourceEntity(43U);
    msg.setDestination(36583U);
    msg.setDestinationEntity(67U);
    msg.topic.assign("YLALCNGGFGUPJGDQIXSJMWNGRATZALGRUAEQBHVMNFDUXNKBDXBLZEBVCMOHFLUVJPVEHABDEEYYWONUJFDEQJVOHZNNUVYDVSKZMNFHOYGNXWWJEARJQSRIFXIWIIKRCWFJIZFCLSTDRAMSJEPMKBTBYIOLKQKVDPFCTHCPOWTBPPQSCLTNBFKOPHGXOZXHQSZLUHROQPGUBQRADQJSEXWSRLVYRVWHEOKKTZWX");
    msg.data.assign("SVBUJBKEHFVENSAFGXWDIEUJTKDEFZWHRKJIRSFSXNRUPCVJQIURYLNFJLOCBANTLUOPMTIMXXRBULDQOBKSCALZVHGKDYRAOHTDLVKYNVTWZIQGFKQQBHZDEDXUYUKDXNHWAGCICYGBMCNINZ");

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
    msg.setTimeStamp(0.256820774421);
    msg.setSource(59633U);
    msg.setSourceEntity(180U);
    msg.setDestination(46887U);
    msg.setDestinationEntity(95U);
    msg.topic.assign("CUKBTYZEBMTLWIIRZAOCLHBFTWBQQYHKEDBTKKHTXGKKUPGJVINKYVBPHJYHHFVEWHLCJFGUIOMRYVFIJDNCYEQPAALFPZTCSXIXDCYGYIYHLWRQUVNEFDUGMTUUWDSJFPARSA");
    msg.data.assign("DXEXZNNGQYRPWRDHQCSGBZKHBNNIDGUEVBJNEJIGDCHKMJJAJDPFZJVTESLQRJMDIAMVLQXUQWURMEJBHVVLSUKZKVDZAGLCGVORBUOYTHMXHIBOCALOQZGLYOLTXWAPYVLYNXUMKEREYBCJOTPQXYTFOZJHXPTEFTMCFSQRKBPWVPIAMLRDFTKHHPSPNIQIGBOTTEBMWFUMSSCUPXFDWKWFUYQGFWNZAFLWAIERCIASNYIZOVZCHNDXK");

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
    msg.setTimeStamp(0.772090642965);
    msg.setSource(12133U);
    msg.setSourceEntity(73U);
    msg.setDestination(42234U);
    msg.setDestinationEntity(192U);
    msg.frameid = 106U;
    const char tmp_msg_0[] = {97, -77, -22, 120, -10, 15, -119, 90, -33, 68, -19, 34, -79, 64, -109, -104, -68, 59, 33, -68, -75, 3, -61, 126, -48, 54, -55, 92, -49, 83, 112, 126, -21, -61, 96, -122, 33, 59, 10, -40, -9, 9, -128, -32, 13, 94, -53, 94, 69, -14, -88, -105, 106, -54, 122, -51, 44, 79, -74, 50, 19, -86, -120, 110, -127, 21, 33, 62, -128, 37, 56, 109, -34, -46, -123, -73, 79, 50, 101, -54, -112, -49, 103, 112, -89, -53, 1, -13, -115, -124, 67, -98, 20, -127, 68, 101, -55, 71, 90, -25, 53, -102, -30, -10, -82};
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
    msg.setTimeStamp(0.274648732931);
    msg.setSource(26470U);
    msg.setSourceEntity(51U);
    msg.setDestination(7019U);
    msg.setDestinationEntity(54U);
    msg.frameid = 174U;
    const char tmp_msg_0[] = {-56, -52, 73, 68, 60, -118, 95, 27, -46, -40, 54, -25, -61, 20, -83, -115, -31, -19, 67, 77, -116, 64, -97, -109, 100, -44, -38, 49, -66, -7, 3, -24, -50, 9, -88, -78, -78, 13, -30, -69, -109, -91, -43, 121, -22, -21, -12, 59, 13, -51, -72, -77, 33, -81, -58, -107, 71, 59, 8, -41};
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
    msg.setTimeStamp(0.34280017407);
    msg.setSource(17112U);
    msg.setSourceEntity(165U);
    msg.setDestination(45236U);
    msg.setDestinationEntity(36U);
    msg.frameid = 230U;
    const char tmp_msg_0[] = {39, 1, -83, 67, -123, -126, -46, -14, 40, -126, 24, 40, 111, 53, -34, -90, 12, -4, -94, -21, 89, 87, 11, 99, 71, 113, -18, -106, -16, 56, -6, -117, -63, -6, 48, -3, -9, -71, 64, -27, 97, 49, 66, 89, 12, 91, -111, -3, 8, 21, -6, 7, -18, -89, -68};
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
    msg.setTimeStamp(0.0321860996616);
    msg.setSource(45237U);
    msg.setSourceEntity(14U);
    msg.setDestination(46918U);
    msg.setDestinationEntity(214U);
    msg.fps = 99U;
    msg.quality = 140U;
    msg.reps = 90U;
    msg.tsize = 226U;

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
    msg.setTimeStamp(0.801266121043);
    msg.setSource(42837U);
    msg.setSourceEntity(243U);
    msg.setDestination(30940U);
    msg.setDestinationEntity(88U);
    msg.fps = 240U;
    msg.quality = 196U;
    msg.reps = 64U;
    msg.tsize = 220U;

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
    msg.setTimeStamp(0.0307594116958);
    msg.setSource(50553U);
    msg.setSourceEntity(23U);
    msg.setDestination(4921U);
    msg.setDestinationEntity(6U);
    msg.fps = 16U;
    msg.quality = 86U;
    msg.reps = 38U;
    msg.tsize = 48U;

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
    msg.setTimeStamp(0.9014477851);
    msg.setSource(12234U);
    msg.setSourceEntity(28U);
    msg.setDestination(5682U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.372481506125;
    msg.lon = 0.552512982622;
    msg.depth = 33U;
    msg.speed = 0.583189562405;
    msg.psi = 0.89300640331;

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
    msg.setTimeStamp(0.217410511914);
    msg.setSource(50697U);
    msg.setSourceEntity(22U);
    msg.setDestination(65055U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.655697022194;
    msg.lon = 0.813890354083;
    msg.depth = 254U;
    msg.speed = 0.724657688812;
    msg.psi = 0.336829895453;

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
    msg.setTimeStamp(0.0642246209066);
    msg.setSource(45751U);
    msg.setSourceEntity(50U);
    msg.setDestination(43899U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.392503219342;
    msg.lon = 0.323345514503;
    msg.depth = 28U;
    msg.speed = 0.415518016905;
    msg.psi = 0.820127259384;

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
    msg.setTimeStamp(0.426008785015);
    msg.setSource(51086U);
    msg.setSourceEntity(125U);
    msg.setDestination(31872U);
    msg.setDestinationEntity(106U);
    msg.label.assign("XLFHYFOWDTHKHXQUBJFDMGGGIMLYFGQBGDENDPOEVBWOXKHTFQUUTBZNCVRMRXJKKOPURYUVYRHNQKILXUNZAUDCMQJXAEIEZJQRTPWLAPCZHGLCCWJJFQIVSAELEFVQPSAKLEETNJVKTTTFEOLSASZROILJNBMLSCAPVU");
    msg.lat = 0.504955285071;
    msg.lon = 0.233297973316;
    msg.z = 0.102741201515;
    msg.z_units = 160U;
    msg.cog = 0.701818915464;
    msg.sog = 0.978586404017;

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
    msg.setTimeStamp(0.994623768204);
    msg.setSource(27185U);
    msg.setSourceEntity(56U);
    msg.setDestination(63181U);
    msg.setDestinationEntity(140U);
    msg.label.assign("OBUHVENOYQLFVOOJYWXICZFTPECKPEOTIJIJCHNXZDLNLRDZCAVRQXIYDYBDKWDBQWWUQMKDILDZOIFMKNZRYPTLVPKMFBEGKGACOXJBZXGVSACPWXRHFWMIHYEYLAGOLMSQGNMRSYZFJVIDDKTLPUNHWUSAQFTHPCUBSUPALMXVL");
    msg.lat = 0.225737871311;
    msg.lon = 0.73931412913;
    msg.z = 0.757090797158;
    msg.z_units = 99U;
    msg.cog = 0.0792690611763;
    msg.sog = 0.525232464996;

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
    msg.setTimeStamp(0.0953205580857);
    msg.setSource(2962U);
    msg.setSourceEntity(246U);
    msg.setDestination(29320U);
    msg.setDestinationEntity(168U);
    msg.label.assign("QDVVNIFPKMPQGURLJVSZSQUZYBZWNVCZMDCWHUOGLPWMJYAKHCZLYYDKLINYIKZNYBIHUXXDGGVSFRCBXOQCXKQFVZTJBCEAOWVGHKSUIPRSUGPQTQYDCXJLORCPTTMETMFVIHHARAARXETWSEYUPTOHZKSHAPJDQDNLRNTMUBGSPOEFTXQOFCKLQIHOVJJARLBJIKAEIFMDOE");
    msg.lat = 0.087452153085;
    msg.lon = 0.846407844131;
    msg.z = 0.241639605703;
    msg.z_units = 69U;
    msg.cog = 0.125938377548;
    msg.sog = 0.692189046978;

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
    msg.setTimeStamp(0.264319055231);
    msg.setSource(7328U);
    msg.setSourceEntity(88U);
    msg.setDestination(9690U);
    msg.setDestinationEntity(107U);
    msg.name.assign("MWWIINCCXAIUSGYNWFVSGSUDABBRPCNRJZMNYZDINRIFTMYDVTBNOXZNKGHQQXOLWVADTARKLHUGEEHFXFLCERCSHGTCONBDAYRYXEMPAVCHZLMXYHPBCOIFQLMOJFQZBILKVQUOIVBYWHZKRLMHU");
    msg.value.assign("ELMVJOUJHGNJYSVUXCMXFUKRDQTGFGDHSODUVRVZTOYACLRDGQXSUIUIIKBLOFNZCUANHWGPANWLGUZLNWNTYZPMOOJJFXCCJTTDVSPCIWMQNACGOOBNAURRLYKYEHMKVCDEAINFTWVLJXMDSIZBQIQIEQEOYQQMURJISAJXVXCBKVBPLSDSDZZPGFKPZIEHSYQHRBHBSAHFJGWAYMTMBFBHLQEWNATPZPKHWPGWFVBKLMEYFRKXXREZYK");

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
    msg.setTimeStamp(0.546662040067);
    msg.setSource(36266U);
    msg.setSourceEntity(182U);
    msg.setDestination(19926U);
    msg.setDestinationEntity(31U);
    msg.name.assign("EICOICGHECFVUS");
    msg.value.assign("IGXSDCMHIVEFUGSHVNADCDNOUXTRSVYZKJHRZOXVOMTADYTWDZRQRXGEMMSAFJSIYMTFOLQPSIIHMZBBEVYBQGLZHOGEBTQPPCXFLUAKPGPJJVNCMCQETPSJRFLYNSYDSOPINVUNWHOCFUJLWLFEKMDKACQGNEAREVBWDBNKCXRWYXANEADQZLLGJWXWTCQWKCYXMLYFOHPIDUXTZWWZFHOKZYOUUGLQNGBTJKEAIRRHBBIBKPJJQTZHSA");

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
    msg.setTimeStamp(0.607289439471);
    msg.setSource(5523U);
    msg.setSourceEntity(25U);
    msg.setDestination(56056U);
    msg.setDestinationEntity(244U);
    msg.name.assign("SQVCYOOOQHLEAZTJOZXGNNMJCTQUHTGYEWVJIAVHLMJWFWMPCHO");
    msg.value.assign("XQQFBJZKHDPNQCUBIMLKZEJXIRISEEGFYSLHWRUNZCSAMQVKNGJJWVUSBARBAUCFUWOHFBXJHWIXXXMUNAJZORVDISPJGDTRJOHYTTWKBXKURNLQITIQYMTGPPGEYFSKZVDIFAJEPKAOIFPSDMGLTREELNBWHVZMHPDRSRJOVGOGQNMZAAEMOXGPMTCYELFAUZ");

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
    msg.setTimeStamp(0.464943230436);
    msg.setSource(42306U);
    msg.setSourceEntity(2U);
    msg.setDestination(28258U);
    msg.setDestinationEntity(13U);
    msg.name.assign("TVENGJVTGKUIDFNZEKFGWQELYJNFZRLJPABSBWEJDXORRLZCUKSWIGBBFBHMAIWYXLMUROTDSNSEZADWKBPHOQDJIRKSRHPARJXARHXVGN");

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
    msg.setTimeStamp(0.757724938537);
    msg.setSource(49282U);
    msg.setSourceEntity(85U);
    msg.setDestination(13663U);
    msg.setDestinationEntity(26U);
    msg.name.assign("WGOEATCKHKLVFMBSEAJNGERKZHBXXMNXEDEAZLLXJLZBBWVKCAUSZHLJUSETNCXGFUXSEUCUOTSTIIVHAYKJPPOOMWSOWSGEGVHRNRWQRNXDBTYMQLRZDWTBQODGFAIDBC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XMOBPJJIVHQKXXDBINUGQDIENJNHCJVSLHLYCCQRVLPONLWENUDRFGOYFRPRWBMQLFWPSUICKQMJUJPFTHBMZWYOCDNIXQKVPSASGXLBHWSGPUTQJNCVRZUJQGRDDXMVIZYDBSBGLHXTKVARDWGTLZVTOZNWRUHRWPEHOCEWKMCCYGJZKJIMQZEWB");
    tmp_msg_0.value.assign("ESITRDOFCBCLKRCZJHF");
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
    msg.setTimeStamp(0.651139099167);
    msg.setSource(26834U);
    msg.setSourceEntity(115U);
    msg.setDestination(18315U);
    msg.setDestinationEntity(133U);
    msg.name.assign("BRUDDIPSIPEYMTPOIGGZGVMECFZNANHCYYTPUNCDKHHNAUTFLFZJNAWMBDVYVPTSEOCTLXPJIMXNSZIZJCBSKUELORQKRJDFXMWBWRQMQLGLGYFTTRCJMWSSLFTXRXQKJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HIRTJWECKKCEEPN");
    tmp_msg_0.value.assign("UDXUXVSQZEHNGWRVAJFUZQVFMYGEVXNSNXPATSFE");
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
    msg.setTimeStamp(0.630609574503);
    msg.setSource(4052U);
    msg.setSourceEntity(57U);
    msg.setDestination(65110U);
    msg.setDestinationEntity(129U);
    msg.name.assign("JTIDURGKQDAQYZVJWEXSRYGPSPASRLCBOIISMPDWUQFTZLZZKORJJMMYBADQKYVOBOWWQKGHJPGCEIJJELFEKLFKNKABTNGBHGDFBBRMWVZOFHBFSMCXTFIRAFOCMDVUNNLHVMZU");
    msg.visibility.assign("CGCQFLWUPDZMAWMTUBDVTIPLWYMKHLWLSJHHYVCBICCIODMUATWJQTOWVHTRDSAFNZICOSZLKGWACENKOKNIFLDZLURQKYHXJDRM");
    msg.scope.assign("TULQJBHQESPBAUVXJBVJORDHOOOWAUGFOSDYKUXIEBNFXMBQJZBVXICDIALEETRJTZYYTPGGJMGZRQUDXTDKYNWWRZVVJIQSHKGEIWMSRKXZVQAISMVELARFORQDVQTICEBJMDIHPHWCOFNSXQEHXKNKYBFSTHAPZIPAUSMLXLIBFFUENZCGFWLSLCZPNGYWWPWNNONA");

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
    msg.setTimeStamp(0.846604501202);
    msg.setSource(19271U);
    msg.setSourceEntity(194U);
    msg.setDestination(46301U);
    msg.setDestinationEntity(113U);
    msg.name.assign("RXSONYBELUQEWSEIZGVHDALJKKLIVHNENHCGFIXCWGXSUJSFSHJECPFTCIQJBTYSQCFCLLQCKLZBYKGNQRRTXREZGNMESHX");
    msg.visibility.assign("DUZYOBXZDMUBIHAERJRKKVBWVTHMUSBZBYMIJAHGQEMMWNNZFFPLWQDACOCTJHAMC");
    msg.scope.assign("VHWEYHCGLRZFNRCBAZCSFNOJHAWTEDFOFAQSQDURIJDMEOQOQVUMQPLGZRSTLIWJVNNBXPIJKKXHTPUSKLRLAGVXORGYISXDAWQWDWZKYZGOJEXYKUKYMIDXMGBNAKZJBENWWOJZGBCFJIDTENUCPRMDNXTSSVYUQQLYIPFLKKFPLVRYCJBGTEWCEZXHEUIPARPCYHBH");

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
    msg.setTimeStamp(0.747527536175);
    msg.setSource(13049U);
    msg.setSourceEntity(5U);
    msg.setDestination(11059U);
    msg.setDestinationEntity(198U);
    msg.name.assign("ZQZGTKGDSZRKDXFWACVAFIVAATENEU");
    msg.visibility.assign("KITECAFOJUMGWDGCAUCWVQCBKOEQDAUBHFPHFRFBAOXTZMQGJEFJCNKSBOQHKESGDWZHNJYLWXNVQDICWSTUJMRXNUORFLZYXLIBLRTVHVDBYWXPIKAMTNZTOLWYLEIYGYBECAQKCOPMDGJA");
    msg.scope.assign("QOPAYRQWFPKUNWPMSKJXT");

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
    msg.setTimeStamp(0.212319314332);
    msg.setSource(11270U);
    msg.setSourceEntity(49U);
    msg.setDestination(2719U);
    msg.setDestinationEntity(127U);
    msg.name.assign("POIWHYRKDEDGRZLPCVXJYPFJDSCVECRUFGMMQMPJTKUVNTVWERGAACXKJQVBRKDBBPBVPBJBNGYEFCSSQKIXYCGEJOQOWRYTUWSILDZMWDUSOIFUCTSQREFLHHHIAFNUOVKAHZGSIIPTOPYZKYWGKYHBYRSDQWZSNIVWHCLOAVNFVCLAZZMJLRQWNHMCGBTLQTTULJMDZXAUYNDGITBDLWXEQNN");

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
    msg.setTimeStamp(0.685913047606);
    msg.setSource(7127U);
    msg.setSourceEntity(56U);
    msg.setDestination(33309U);
    msg.setDestinationEntity(219U);
    msg.name.assign("DEVQXZSKPSUCECXHJXBWAETGWYQUWIVSCRATAJDICPFOKWSHKYFETVTUDXQPAXEYRXINQJMLFFDYZIIHSPMPHZAUJEFILKMYCBFXSSOVCYLILNOVMTNRQMZTHBNYTGIRZQUYBQVZRJNNAJNDQMGRNTY");

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
    msg.setTimeStamp(0.803114729853);
    msg.setSource(43106U);
    msg.setSourceEntity(78U);
    msg.setDestination(40709U);
    msg.setDestinationEntity(95U);
    msg.name.assign("KHASQUTFLAMEKIFMRRBOXHJRB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YRWOKLTWUYTECBWFGRCXCLVWHQYXSJFAPOLMGBETIQSHDKWYQDHMIGLPPQUHFWOUSXJHNKECPVFDSXRONTWLQQVIMBGBJOXCLARUXIJQFZOFPAHMGAIONUZJLSEHRRLSBYDAZRMKICCNYJPDTXZFVDPSPBCDEQOSGJZEMTEOTURUTAYURKSYNWMGCIXDCQTNSAZOXFNKBVZHRDZ");
    tmp_msg_0.value.assign("EOREHVIHKJOFUQHASNZVIYWXUHHTRIYRYZUIALBYALRGKRGGEKCKGTZEIDXZFKXLXYVAKUOWMDQHMSREPPDYBHMVXUCNCDFRQVKPKRQLTJICFJBCCSLANSIHFWAYLNJSTLTCNLBTJBGQVEWPCUAVENADVSMNPJNWELUBPCYCMXQOXBLSOGEVZGPXZRZEBQDGDPSFWQDVW");
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
    msg.setTimeStamp(0.794920817666);
    msg.setSource(8052U);
    msg.setSourceEntity(192U);
    msg.setDestination(27591U);
    msg.setDestinationEntity(134U);
    msg.name.assign("RGEWJZIUOXLXNPPMKOMBQTUDIXCTMTWRSSGGIWSIMCDTRQFNPHDGPLXLGQEKZHDFYLGTYVBRIDRDVFYKNIPXYAESQLYXVAUNUOVRPCHSTWQRIPSOYFDKVWGEBZOWQNDMNZEBZAJQZHCSJGLUJTUEOXUDFYNMGUBIBARXVDUEKHKCZZHKQFNLE");

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
    msg.setTimeStamp(0.52430805525);
    msg.setSource(56982U);
    msg.setSourceEntity(146U);
    msg.setDestination(3500U);
    msg.setDestinationEntity(123U);
    msg.name.assign("PAGMLSOHXKVNRFJLIUHGBAMNZFRPWSACARGOLWQOSAG");

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
    msg.setTimeStamp(0.423679739304);
    msg.setSource(35564U);
    msg.setSourceEntity(8U);
    msg.setDestination(15997U);
    msg.setDestinationEntity(119U);
    msg.name.assign("WKOIAYITTWWEZCIDUGDYOZODNKBKBRAHTJMIJNRUEDSKBUHWPHLFZLQNMOFIYYXSRLUMGTJMUXXGXBWDUVAQTKNCDKGTGWGGAHQGZPZSQJKFXUSLYWNBPQELIZSNREOBZVVMANXAALAIDYBUSSXFGCTZULRZHSVCINRYCTBWOMYKSERFQTQOAPPENQNQMSCJHOOEMFPIGJHMFHFQFYLJZKIVXRCEVPVHCRUVPCOXVJKEEBWYJXDPCLDBAR");

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
    msg.setTimeStamp(0.819855754868);
    msg.setSource(37930U);
    msg.setSourceEntity(54U);
    msg.setDestination(23106U);
    msg.setDestinationEntity(111U);
    msg.timeout = 427622473U;

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
    msg.setTimeStamp(0.872792504746);
    msg.setSource(63905U);
    msg.setSourceEntity(229U);
    msg.setDestination(44040U);
    msg.setDestinationEntity(19U);
    msg.timeout = 3925603377U;

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
    msg.setTimeStamp(0.146337643056);
    msg.setSource(11424U);
    msg.setSourceEntity(38U);
    msg.setDestination(6240U);
    msg.setDestinationEntity(30U);
    msg.timeout = 1495611704U;

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
    msg.setTimeStamp(0.264239607128);
    msg.setSource(56495U);
    msg.setSourceEntity(140U);
    msg.setDestination(49812U);
    msg.setDestinationEntity(144U);
    msg.sessid = 1907875552U;

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
    msg.setTimeStamp(0.824111918653);
    msg.setSource(35130U);
    msg.setSourceEntity(86U);
    msg.setDestination(4547U);
    msg.setDestinationEntity(178U);
    msg.sessid = 2942118691U;

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
    msg.setTimeStamp(0.449910889606);
    msg.setSource(48054U);
    msg.setSourceEntity(164U);
    msg.setDestination(684U);
    msg.setDestinationEntity(249U);
    msg.sessid = 2863610417U;

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
    msg.setTimeStamp(0.573274622553);
    msg.setSource(10361U);
    msg.setSourceEntity(245U);
    msg.setDestination(33831U);
    msg.setDestinationEntity(32U);
    msg.sessid = 3344758260U;
    msg.messages.assign("YGTGRKHBMLXLBROTAKORWEAWTTQHWPHSYRZOXZHJGNY");

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
    msg.setTimeStamp(0.245293099627);
    msg.setSource(44976U);
    msg.setSourceEntity(100U);
    msg.setDestination(16175U);
    msg.setDestinationEntity(4U);
    msg.sessid = 992522870U;
    msg.messages.assign("ZZOAJCXFLSKJJGYRGABOHTQLTOJEICEWZUPCRHUCSZVVN");

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
    msg.setTimeStamp(0.11141166786);
    msg.setSource(64488U);
    msg.setSourceEntity(192U);
    msg.setDestination(20798U);
    msg.setDestinationEntity(213U);
    msg.sessid = 1804683198U;
    msg.messages.assign("YEBSIMMWBYTORULQMSWVVXTEWMXQYVJWUBEGDLKAUYHFJKEYVZMXKOOUYJGPJZALFFTXKDRQEUMNQZCTTHFPMVXVNHRXWJLETANJLEMKGCJCWZXDPJCPBGLGDLIKIFUSZSBRQACWRGCPRRQRAOZUOVWITBOBUCJIAYKUMHZANAFNQSARVXHLGVVHEDSDZHAFSFYITLIGOYBRBZSHQKJHMXLFFPHKGEIU");

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
    msg.setTimeStamp(0.65257021951);
    msg.setSource(62065U);
    msg.setSourceEntity(191U);
    msg.setDestination(33601U);
    msg.setDestinationEntity(1U);
    msg.sessid = 522426919U;

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
    msg.setTimeStamp(0.619154600544);
    msg.setSource(4147U);
    msg.setSourceEntity(163U);
    msg.setDestination(44555U);
    msg.setDestinationEntity(68U);
    msg.sessid = 1456416154U;

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
    msg.setTimeStamp(0.771157333044);
    msg.setSource(50147U);
    msg.setSourceEntity(210U);
    msg.setDestination(42864U);
    msg.setDestinationEntity(65U);
    msg.sessid = 3404264067U;

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
    msg.setTimeStamp(0.448712819778);
    msg.setSource(40619U);
    msg.setSourceEntity(228U);
    msg.setDestination(29701U);
    msg.setDestinationEntity(132U);
    msg.sessid = 3158840679U;
    msg.status = 63U;

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
    msg.setTimeStamp(0.524226910651);
    msg.setSource(24965U);
    msg.setSourceEntity(108U);
    msg.setDestination(11002U);
    msg.setDestinationEntity(59U);
    msg.sessid = 3201640257U;
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
    msg.setTimeStamp(0.114162853055);
    msg.setSource(30199U);
    msg.setSourceEntity(50U);
    msg.setDestination(38969U);
    msg.setDestinationEntity(158U);
    msg.sessid = 1542435598U;
    msg.status = 73U;

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
    msg.setTimeStamp(0.884398791025);
    msg.setSource(45894U);
    msg.setSourceEntity(238U);
    msg.setDestination(12226U);
    msg.setDestinationEntity(204U);
    msg.name.assign("OHBYUVRTGELWPFFYCUMZAWNKICRNWVTEGTYFVBSZIYTRXUSTMYXRASQHAXJTXPCDSPBAXCEPNCHTOYKHLDOHWNKHNFIMIHZNCSLIPZVJVANCZJGBQHJDSDEFUQMTBBNULDEXWOJDBJ");

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
    msg.setTimeStamp(0.49543539175);
    msg.setSource(57018U);
    msg.setSourceEntity(74U);
    msg.setDestination(43426U);
    msg.setDestinationEntity(27U);
    msg.name.assign("PCMGTKTZHVPFITEGWWTUSJDZHNPVNGODVDMVOHIOKUAFJRYOHPQRCNDHOPJWZEOARGXLZQALYGUXWLDFZHPVJXBICUUOWZHKRSYKFMYNGBBFHFFRXKYAEBWPGSWQZJYPTDXFWBVQCYXKIJOETVPKSUMIEAFRLBASFNYUCJSRRDBVCXCGULAETSJSJQGCMIXVNDUAMNDAYSHQIXPTIZMLLEMQIXHLBVK");

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
    msg.setTimeStamp(0.454510258761);
    msg.setSource(27231U);
    msg.setSourceEntity(42U);
    msg.setDestination(17381U);
    msg.setDestinationEntity(6U);
    msg.name.assign("RCFHVABNEQFZZHB");

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
    msg.setTimeStamp(0.731935468159);
    msg.setSource(17733U);
    msg.setSourceEntity(156U);
    msg.setDestination(18969U);
    msg.setDestinationEntity(214U);
    msg.name.assign("ZDGPVMEMBIPFSAKNRKMMBSLSYGLTKKVYSXLUBI");

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
    msg.setTimeStamp(0.000638730556048);
    msg.setSource(57645U);
    msg.setSourceEntity(247U);
    msg.setDestination(699U);
    msg.setDestinationEntity(130U);
    msg.name.assign("YOUWGQVUMRSGAYBOKMBZQDXLHMKHYJCEFADHAWNUIPSYUEXZKVWXQMCYFTEOKZENQJRCHEQNSXAZATDCYZKLHTMZNRBBAPNROLSFJVUPE");

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
    msg.setTimeStamp(0.231420394516);
    msg.setSource(51007U);
    msg.setSourceEntity(190U);
    msg.setDestination(9149U);
    msg.setDestinationEntity(32U);
    msg.name.assign("MZUVFJCMQXKPFKWBCPTTGRREUSXURFWIDNLLAEFKHEAJRDPHWQMJVJJSSWJMVDVJLSTQZWZPFUNXTRXEYGCKAGJPVXQGKHLBBGZTPWOCKOIRFNWDYTGCMTGEPODLIFGVRGBPXUVBYHSXBXKQZTWOLWYFSELSONECNZSNIYAUFKNYNXHAAICMDZIOKHIIZEBDIMYHYAQNASDVLEUBRHFPTUSYYXDVQQGKMOPLTVAZ");

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
    msg.setTimeStamp(0.923553682454);
    msg.setSource(20781U);
    msg.setSourceEntity(130U);
    msg.setDestination(22847U);
    msg.setDestinationEntity(101U);
    msg.type = 112U;
    msg.error.assign("MPFRRLCLXTRRBBROWAVKWHZTVXWUGGFMTIZNSBNPISQOBIFYCVMPESOFFBXEWUKZQFGUDJKAVKIESEYKKVIGEJHMSXXPSHCNPEJUCRLOLMQPHCCNGHSWZILTTJGXFBDTKNQWUPNOPTRDCMTIMDJDGBRDNAASKLLKOGNNQWHUAIHJYYSL");

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
    msg.setTimeStamp(0.521971574337);
    msg.setSource(27369U);
    msg.setSourceEntity(79U);
    msg.setDestination(17469U);
    msg.setDestinationEntity(167U);
    msg.type = 3U;
    msg.error.assign("OVKXMNCLIPPUNGFIWOKDMPERZXDARJORUVF");

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
    msg.setTimeStamp(0.057425682525);
    msg.setSource(17638U);
    msg.setSourceEntity(69U);
    msg.setDestination(39366U);
    msg.setDestinationEntity(71U);
    msg.type = 188U;
    msg.error.assign("JHBMPEGYPKLJYOBTKJRRCSSKJLYRQMXKSQXTFTMUULUCQGL");

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
    msg.setTimeStamp(0.316510789688);
    msg.setSource(59710U);
    msg.setSourceEntity(239U);
    msg.setDestination(39460U);
    msg.setDestinationEntity(206U);
    msg.seq = 28620U;
    msg.sys_dst.assign("LKESVSDNVAOYRHDRJHGJRHAPVQBSGALZEIWZXQJFTCTUTYNENCECHNDCDRN");
    msg.flags = 2U;
    const char tmp_msg_0[] = {-112, -77, -106, -40, 37, 94, 42, 83, -20, 100, -120, -46, 71, 67, 32, -34, 48, -114, -56, 27, 40, -98, -28, -19, -40, 77, -76, 74, 81, 87, 107, 67, -118, -12, -39, -102, 72, -27, 70, -13, -88, -53, -105, -123, -81, 21, 56, -72, 101, 67, -73, -123, -47, -46, -103, 32, 31, 79, 43, 7, 61, -10, -96, -128, 19, -14, 12, 52, 13, -21, 122, 41, 37, 32, 68, 70, -110, 99, 46, 21, 61, -5, 80, -109, -107, 90, 60, 55, -60, 74, -4, -112, 59, 63, 83, 103, 74, -98, 28, 3, -43, -7, 71, -18, -113, -113, -13, -76, 53, -43, -67, -45, 1, -18, -117, -88, 103, 121, 0, 116, 15, -13, -48, 45, -115, 124, 113, -26, 12, 15, 107, 73, -105, -107, -24, -93, -125, 67, 100, 2, 2, 24, 34, -103, 116, -65, 72, 88, -100, 13, -31, 83, -117, 91, -39, -98, -121, -34, -58, -114, -96, 91, -99, 7, -98, 75, -22, 46, 109, 16, -3, -40, -9, -45, 40, -42, -125, 83, 3, 36, 65, 89, 56, 104, -19, 69, -51, 82, -61, -53, -9, -4, -117, 118, -37, -37, -92, -5, 18, 105, 89, 97, 118, 104, 101, -50, 21, 32, 35, -43, 122, -112, -72, -74, 93, 66, 44, 77, -24, -81, -125, -95, 35, -8, 22, -9, -93, 56, 26, -97, -40, -98, -81, 12, 102, 74, -87, 104, -48, 98, 55, 120, 79, 37};
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
    msg.setTimeStamp(0.850774627615);
    msg.setSource(48175U);
    msg.setSourceEntity(108U);
    msg.setDestination(58395U);
    msg.setDestinationEntity(139U);
    msg.seq = 55378U;
    msg.sys_dst.assign("SDQEPPITRWKBXNGKLQJGIWNRHVRLPDCWIKOLKUANSJPQCHFGVTQREWIUZMSPZEZQGXNLXOHOVDMGJQGKPHAJYJJCEDCSYGZUNASOSMYTDDFZGAEKTVTFDUZMWABMBKRHEUOFLLXJSKBCDTIFBHWXIHWMTZMRFMJMXBLO");
    msg.flags = 25U;
    const char tmp_msg_0[] = {-3, 53, 17, 0, -5, 99, 64, 76, 119, -61, 96, -127, -8, 31, -113, 69, -55, -68, 111, -93, 78, 74, -17, -98, -76, 23, 50, 38, -76, -109, -27, -18, -125, -43, 78};
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
    msg.setTimeStamp(0.896296160219);
    msg.setSource(45548U);
    msg.setSourceEntity(216U);
    msg.setDestination(25278U);
    msg.setDestinationEntity(211U);
    msg.seq = 24234U;
    msg.sys_dst.assign("GCCJIQSIFINDEYSILMELOJZPQXTZDUVSPDZKVAWQINVGMFUVWDSZVXRIRSEAWHTYBPIKDYXUAYMBQRDWWLQPHNPIMHFEITZTJEXJOGULHBOGRLCPYQCKNCLMTULAMCMPWFWYPJQSVIE");
    msg.flags = 204U;
    const char tmp_msg_0[] = {-124, 78, 8, 52, -74, -86, 14, 92, 66, 28, 5, 102, -7, -108, -78, -128, -93, 60, -35, -110, 59, 126, -73, 72, -59, -70, -73, -67, 41, -78, -124, -119, 123, -70, 48, 71, 111, 29, -109, -74, -46, 91, -41, -85, -80, -81, -83, 100, -101, -39, -98, 98, 73, 68, -35, 63, -100, -100, 9, 83, 94, 1, 83, -77, 72, -22, -104, 0, 75, -5, 61, -89, -63, -94, -1, 64, 77, -4, -93, -72, 43, 77, -41, -57, 40, 7, -43, 20, -19, -90};
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
    msg.setTimeStamp(0.97450472133);
    msg.setSource(63483U);
    msg.setSourceEntity(50U);
    msg.setDestination(5814U);
    msg.setDestinationEntity(222U);
    msg.sys_src.assign("WGNMZFASVDZUXWWVEKIWNWPNENHQCMVDDKYPOGZPRNKKSGPYSXALHTPPKWTTEBBYPXSMAIKBVTHGHGQMHMQIHHVBCLLBEQOFUYIHDJRFERSYDXROPJFPLBCEVOYQOGAVTJSZODLFLDOUJFGTIMOQYGMYFSVILUFRCUYIRUAAMXESTUKIRPUE");
    msg.sys_dst.assign("XPJAOHIKKVSGBYOSPMYAMJIIEOMBSTWRSCDANIWJNDXGTTHVJEHEUFOAFVSPRNXZJYNWZGDY");
    msg.flags = 51U;
    const char tmp_msg_0[] = {104, -13, 75, -35, 16, -122, -124, 28, 98, -51, -115, 17, 24, -51, 106, -20, -107, -51, 54, 41, 0, 54, 40, 61, 48, 73, -87, -98, -117, -9, -21, 3, -22, -88, -71, 72, -92, 76, -20, 69, -61, 31, -100, 11, -21, 58, -51, -7, 63, -28, 46, -3, 15, -92, -99, 109, -68, -108, 76, 81, 94, 34, -51, -19, 108, -29, 0, 78, -118, 91, -51, 46, -96, -79, 24, -127, -43, 18, -58, 0, -91, 16, 99, -78, 103, 100, -97, 51, 122, -40, 112, -103, -9, 87, 49, 95, 120, 76, -101};
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
    msg.setTimeStamp(0.139946758843);
    msg.setSource(44536U);
    msg.setSourceEntity(15U);
    msg.setDestination(17867U);
    msg.setDestinationEntity(162U);
    msg.sys_src.assign("OVLFALTYICPMQWUOTARNZODYKPXOPYYEBSPPSGFSGILEELMDZTLPTTGUMMEKUPAMYWBMOWFLEAYSMMTXDJKESHOOHZJCKHGCBOYWNJENQJIIGZUUFCVKZFISDWJBJNDXVRHHRNTVSLUBT");
    msg.sys_dst.assign("BAUOYSNTSIDYMUIZMGVNFSMECUSPSUFTCLPYPIXJSLUGWVGINRACSWWHABOGJEAGNQZPBCAYBVHMJFHIYIQPLKBXZXDOLPQTEDWJZFTQOUKOOCTLKKVMDQEQBZXFHVBCKPTVRXSZWRRXPAYEWGJACYAZPONOFRXFJZDTKUCIGBLUOHJWDELSWVMMMGMNMNSRADRK");
    msg.flags = 64U;
    const char tmp_msg_0[] = {121, -41, -97, 43, 81, -53, 123, 37, 42, -122, -97, -120, -102, -5, 83, 112, 7, -126, 40, -61, -69, 72, -95, -50, -33, -30, 49, 24, 93, 6, -24, -16, 7, 110, -98, 100, -26, -110, -44, -35, 72, 33, 34, 46, -84, 80, -27, 103, 90, 10, 90, -77, -88, 70, 46, 67, -13, 51, -2, 94, 74, 22, 87, -3, 92, -51, 3, -41, 15, 9, -47, -7, 81, 54, -42, -96, 40, 1, -35, 99, 19, 110, -62};
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
    msg.setTimeStamp(0.179477963077);
    msg.setSource(25885U);
    msg.setSourceEntity(187U);
    msg.setDestination(98U);
    msg.setDestinationEntity(179U);
    msg.sys_src.assign("KDJMBAZCDNHWWTEDDJJWACGBHRYRPMEJSHMSQXBYUHMGPEEFVDPKXVL");
    msg.sys_dst.assign("XOKZRANAELFJJRIXSSAHIBXERJIEOBAXMKCXULNPWSWKUCYHRDZMJALGIJGHWIKFDNELNPPEW");
    msg.flags = 47U;
    const char tmp_msg_0[] = {-105, -117, 115, 34, 23, -75, -83, -99, 79, -35, 116, -88, 47, -63, 18, 106, 69, -90, -114, 10, -126, -62, -58, -11, 104, 44, 73, 3, 119, 50, -113, 19, -104, 105, 59, -113, 52, 86, 105, -3, 0, -73, -11, 89, -83, 64, -37, 12, 15, -41, 36, -3, 23, 50, 59, 8, -114, 90, 116, -114, -10, 80, -8, -41, 109, -123, 88, 84, 19, 54, 84, -30, 49, -37, 2, -106, -49, 96, -79, 115, -40, -71, 21, 45, 43, -27, -42, -88, 82, 102, -100, -52, -2, 65, 78, -40, -102, 106, -50, -92, 92, -120, -16, -65, 16, -94, 111, 15, -73, 51, 14, 17, -83, -29, 37, 44, -43, 18, 29, -95, -104, -36, 65, 89, -89, 107, 68, -61, -106, 82, -9, 30, 39, -95, 96, -86, -125, 97, -105, -44, 56, -118, 45, -113, -127, -107, -6, 89, 30, 88, 12, 78, -73, -77, -49, 104, -81, 58, -87, -19, -18, -104, 40, -3, -47, -124, -109, 28, 44, 98, 44, -35, -8, -25, -127, -3, -114, 23, 108, -90, 31, -43, 59, 115, 52, 76, 26, 26, 119, -43, 91, -8, -72, -126, 102, 0, 18, -3, 120, 59, -92, -108, 103, 86, -81, 98, 107, -121, -27, 2, -126, -107, 116, 86, -26, 103, 76, -44, -51, -50, 36, 56, -27, -83, -32, -56, 74, 22, -84, -88, 98, -96, -39, 108, -68, -111, -70, -28, 9};
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
    msg.setTimeStamp(0.0618414306157);
    msg.setSource(11827U);
    msg.setSourceEntity(182U);
    msg.setDestination(60018U);
    msg.setDestinationEntity(87U);
    msg.seq = 39572U;
    msg.value = 126U;
    msg.error.assign("ZQLLWHGEKPJACALVDGICDAHAISPPYFXGYKFOQABZRTSDOWMRLYNXOPUIYEWQUJZPKTODEYOEJCOSCWAGUKSMDRGGZTBTLUKNFVQFCWTXKBMKUPEVSZDHMCCWNJEBNOSXUCYBVTUFYNLBXXSCIMBFTVTVZIWIXHQPFNGXEHWZMUEPLSIPJRNYQJSRKJMNKOQICVGRFVLEHNGVAZDMBALKXIOHFJWMUDUWARRFPSBQDHJTHBHXZGO");

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
    msg.setTimeStamp(0.96421560376);
    msg.setSource(46221U);
    msg.setSourceEntity(65U);
    msg.setDestination(35133U);
    msg.setDestinationEntity(6U);
    msg.seq = 62611U;
    msg.value = 79U;
    msg.error.assign("BORJVEFTOCACMECILXNJPDDPRZXRRGGYWWYLEIXXLYGPUWTVQTJFFONFPXLZAZLSNWOGBYOKUMFIZAHLUVCMBBPRAZVCOIVCCXWOLBOKWKHHQEDHAJDJQBUVKBCXGLMUTAKYAOFQCWHUGJBZUMYGMDBTSIPNOTUFJEWVQKHKFJEPQNQENUAHXZKPDGTMRPSSTTEJDLGSIPITYCXNYMLGJSDVDRNRINWBYMWFHZUINQ");

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
    msg.setTimeStamp(0.335612827444);
    msg.setSource(53064U);
    msg.setSourceEntity(198U);
    msg.setDestination(9119U);
    msg.setDestinationEntity(118U);
    msg.seq = 44909U;
    msg.value = 196U;
    msg.error.assign("XLKORKWHPJXMEYZTPOGMKQJEVZVGVBQOJHNXJPWVTFPPSKYRJIGQSAQZUMCCWUSSXDJIMYWDJ");

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
    msg.setTimeStamp(0.527659716441);
    msg.setSource(2251U);
    msg.setSourceEntity(184U);
    msg.setDestination(34847U);
    msg.setDestinationEntity(175U);
    msg.seq = 59932U;
    msg.sys.assign("MIROCFLBOEQROIYLXTPTQGSPRKDIDANMBOXFSICHZXMMIIUDPAGGRUPHEIPWINFGCHNZCBGUPH");
    msg.value = 0.66564450856;

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
    msg.setTimeStamp(0.59123718087);
    msg.setSource(1716U);
    msg.setSourceEntity(4U);
    msg.setDestination(5348U);
    msg.setDestinationEntity(47U);
    msg.seq = 12954U;
    msg.sys.assign("FZIVKHKDBTFLQGTKNGBVGBMBJJDTQLYUQZMAQICJRXXOALSZUCGOFJRWOQCYIPUSKUPGOFVBZLIQJPKMDSXRPLUREEETAUONZCJNNPFHHSQMWNIMZSUWARBAOXIDATTJVLPGLMJZPLWQFTIHVFMFRMBDRMFBVGDKMHHSPUGRCWNSNYYZHAEWZSGCULOKQTIABVWDNRKPD");
    msg.value = 0.206855776601;

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
    msg.setTimeStamp(0.886365563846);
    msg.setSource(39149U);
    msg.setSourceEntity(205U);
    msg.setDestination(582U);
    msg.setDestinationEntity(140U);
    msg.seq = 38293U;
    msg.sys.assign("PYWAUOSXHRIARHMKHFOYOXF");
    msg.value = 0.936985301205;

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
    msg.setTimeStamp(0.965028085761);
    msg.setSource(24133U);
    msg.setSourceEntity(65U);
    msg.setDestination(35635U);
    msg.setDestinationEntity(102U);
    msg.action = 135U;
    msg.longain = 0.27432206189;
    msg.latgain = 0.171031166461;
    msg.bondthick = 2829873829U;
    msg.leadgain = 0.493988987611;
    msg.deconflgain = 0.415653773839;

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
    msg.setTimeStamp(0.0770054518351);
    msg.setSource(34828U);
    msg.setSourceEntity(59U);
    msg.setDestination(43080U);
    msg.setDestinationEntity(32U);
    msg.action = 93U;
    msg.longain = 0.562324324097;
    msg.latgain = 0.566823508418;
    msg.bondthick = 645222078U;
    msg.leadgain = 0.65335429432;
    msg.deconflgain = 0.456614871095;

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
    msg.setTimeStamp(0.831640373698);
    msg.setSource(22321U);
    msg.setSourceEntity(237U);
    msg.setDestination(40278U);
    msg.setDestinationEntity(105U);
    msg.action = 158U;
    msg.longain = 0.181234866023;
    msg.latgain = 0.770420016546;
    msg.bondthick = 48153409U;
    msg.leadgain = 0.144514598722;
    msg.deconflgain = 0.453593403282;

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
    msg.setTimeStamp(0.283511163815);
    msg.setSource(27354U);
    msg.setSourceEntity(2U);
    msg.setDestination(639U);
    msg.setDestinationEntity(214U);
    msg.err_mean = 0.212176476895;
    msg.dist_min_abs = 0.197807839279;
    msg.dist_min_mean = 0.448772548809;

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
    msg.setTimeStamp(0.201433912099);
    msg.setSource(11477U);
    msg.setSourceEntity(226U);
    msg.setDestination(63880U);
    msg.setDestinationEntity(162U);
    msg.err_mean = 0.533051069038;
    msg.dist_min_abs = 0.878443518101;
    msg.dist_min_mean = 0.437903350425;

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
    msg.setTimeStamp(0.18664968224);
    msg.setSource(43993U);
    msg.setSourceEntity(182U);
    msg.setDestination(58684U);
    msg.setDestinationEntity(228U);
    msg.err_mean = 0.233345813833;
    msg.dist_min_abs = 0.604271313248;
    msg.dist_min_mean = 0.583216103683;

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
    msg.setTimeStamp(0.808091136703);
    msg.setSource(48944U);
    msg.setSourceEntity(234U);
    msg.setDestination(31762U);
    msg.setDestinationEntity(69U);
    msg.action = 143U;
    msg.lon_gain = 0.540868671509;
    msg.lat_gain = 0.105236997403;
    msg.bond_thick = 0.110570042471;
    msg.lead_gain = 0.141028189388;
    msg.deconfl_gain = 0.198558334772;
    msg.accel_switch_gain = 0.2272302642;
    msg.safe_dist = 0.0924300728472;
    msg.deconflict_offset = 0.786540224235;
    msg.accel_safe_margin = 0.994681614165;
    msg.accel_lim_x = 0.539479585759;

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
    msg.setTimeStamp(0.685533445511);
    msg.setSource(4239U);
    msg.setSourceEntity(3U);
    msg.setDestination(30908U);
    msg.setDestinationEntity(161U);
    msg.action = 192U;
    msg.lon_gain = 0.941834276732;
    msg.lat_gain = 0.916951838004;
    msg.bond_thick = 0.535263627486;
    msg.lead_gain = 0.82029867823;
    msg.deconfl_gain = 0.810543898273;
    msg.accel_switch_gain = 0.407092029015;
    msg.safe_dist = 0.0554358856808;
    msg.deconflict_offset = 0.239159625677;
    msg.accel_safe_margin = 0.519379238518;
    msg.accel_lim_x = 0.95923676635;

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
    msg.setTimeStamp(0.772815209882);
    msg.setSource(47833U);
    msg.setSourceEntity(82U);
    msg.setDestination(54403U);
    msg.setDestinationEntity(48U);
    msg.action = 44U;
    msg.lon_gain = 0.798759616313;
    msg.lat_gain = 0.46579553772;
    msg.bond_thick = 0.914749772746;
    msg.lead_gain = 0.956917135929;
    msg.deconfl_gain = 0.291388731828;
    msg.accel_switch_gain = 0.507357022694;
    msg.safe_dist = 0.521544892811;
    msg.deconflict_offset = 0.159424842861;
    msg.accel_safe_margin = 0.85870443953;
    msg.accel_lim_x = 0.995014659829;

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
    msg.setTimeStamp(0.46212809251);
    msg.setSource(30382U);
    msg.setSourceEntity(18U);
    msg.setDestination(20886U);
    msg.setDestinationEntity(137U);
    msg.type = 204U;
    msg.op = 219U;
    msg.err_mean = 0.394446389954;
    msg.dist_min_abs = 0.133024163173;
    msg.dist_min_mean = 0.191129164826;
    msg.roll_rate_mean = 0.945238811658;
    msg.time = 0.0127074159808;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 107U;
    tmp_msg_0.lon_gain = 0.621582851256;
    tmp_msg_0.lat_gain = 0.764980799925;
    tmp_msg_0.bond_thick = 0.779711526076;
    tmp_msg_0.lead_gain = 0.65593375018;
    tmp_msg_0.deconfl_gain = 0.59342437105;
    tmp_msg_0.accel_switch_gain = 0.484932945991;
    tmp_msg_0.safe_dist = 0.942853038929;
    tmp_msg_0.deconflict_offset = 0.44400435689;
    tmp_msg_0.accel_safe_margin = 0.502077884199;
    tmp_msg_0.accel_lim_x = 0.519141118495;
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
    msg.setTimeStamp(0.19324733549);
    msg.setSource(25241U);
    msg.setSourceEntity(75U);
    msg.setDestination(36404U);
    msg.setDestinationEntity(112U);
    msg.type = 231U;
    msg.op = 89U;
    msg.err_mean = 0.539353466471;
    msg.dist_min_abs = 0.899283188656;
    msg.dist_min_mean = 0.110741544174;
    msg.roll_rate_mean = 0.334745086992;
    msg.time = 0.908492832069;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 23U;
    tmp_msg_0.lon_gain = 0.742302021611;
    tmp_msg_0.lat_gain = 0.45107920348;
    tmp_msg_0.bond_thick = 0.530147862903;
    tmp_msg_0.lead_gain = 0.774927000369;
    tmp_msg_0.deconfl_gain = 0.431758691588;
    tmp_msg_0.accel_switch_gain = 0.491025603445;
    tmp_msg_0.safe_dist = 0.204652789162;
    tmp_msg_0.deconflict_offset = 0.321299007175;
    tmp_msg_0.accel_safe_margin = 0.610140024726;
    tmp_msg_0.accel_lim_x = 0.922692656927;
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
    msg.setTimeStamp(0.464421525244);
    msg.setSource(12283U);
    msg.setSourceEntity(139U);
    msg.setDestination(58899U);
    msg.setDestinationEntity(105U);
    msg.type = 211U;
    msg.op = 221U;
    msg.err_mean = 0.897490533437;
    msg.dist_min_abs = 0.278092601949;
    msg.dist_min_mean = 0.351824435573;
    msg.roll_rate_mean = 0.370648084496;
    msg.time = 0.446342636942;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 109U;
    tmp_msg_0.lon_gain = 0.644369065496;
    tmp_msg_0.lat_gain = 0.192468757094;
    tmp_msg_0.bond_thick = 0.815003969015;
    tmp_msg_0.lead_gain = 0.483687199299;
    tmp_msg_0.deconfl_gain = 0.869241761747;
    tmp_msg_0.accel_switch_gain = 0.769634558153;
    tmp_msg_0.safe_dist = 0.115099757121;
    tmp_msg_0.deconflict_offset = 0.937954287189;
    tmp_msg_0.accel_safe_margin = 0.541894413104;
    tmp_msg_0.accel_lim_x = 0.174238854558;
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
    msg.setTimeStamp(0.468237925008);
    msg.setSource(54409U);
    msg.setSourceEntity(206U);
    msg.setDestination(15944U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.616120986252;
    msg.lon = 0.900699715336;
    msg.eta = 1398671122U;
    msg.duration = 38439U;

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
    msg.setTimeStamp(0.560153701244);
    msg.setSource(30810U);
    msg.setSourceEntity(156U);
    msg.setDestination(27549U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.00946233158144;
    msg.lon = 0.848505606746;
    msg.eta = 2199495093U;
    msg.duration = 13265U;

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
    msg.setTimeStamp(0.148966641033);
    msg.setSource(17378U);
    msg.setSourceEntity(242U);
    msg.setDestination(13803U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.128742904796;
    msg.lon = 0.464368676153;
    msg.eta = 1065841685U;
    msg.duration = 23231U;

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
    msg.setTimeStamp(0.245565501284);
    msg.setSource(39176U);
    msg.setSourceEntity(16U);
    msg.setDestination(57437U);
    msg.setDestinationEntity(204U);
    msg.plan_id = 29000U;

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
    msg.setTimeStamp(0.827584770393);
    msg.setSource(29400U);
    msg.setSourceEntity(254U);
    msg.setDestination(37163U);
    msg.setDestinationEntity(68U);
    msg.plan_id = 22087U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.849276612142;
    tmp_msg_0.lon = 0.833603006518;
    tmp_msg_0.eta = 1550972441U;
    tmp_msg_0.duration = 54753U;
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
    msg.setTimeStamp(0.163155099542);
    msg.setSource(46819U);
    msg.setSourceEntity(26U);
    msg.setDestination(1743U);
    msg.setDestinationEntity(250U);
    msg.plan_id = 41889U;

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
    msg.setTimeStamp(0.229179791123);
    msg.setSource(38539U);
    msg.setSourceEntity(85U);
    msg.setDestination(22763U);
    msg.setDestinationEntity(219U);
    msg.type = 113U;
    msg.command = 184U;
    msg.settings.assign("WYZLTDXASGWZPYRAFVZAOJYZSVJXYNSUDWLDIQIXOOMXKHFOMBSVFRHOFADCSOEIXVVMPWWAMTFEWSSEXYDQEJPZYKYHKCVUQATWRYIRWJGI");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 11602U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.111254283876;
    tmp_tmp_msg_0_0.lon = 0.831240481887;
    tmp_tmp_msg_0_0.eta = 1763585658U;
    tmp_tmp_msg_0_0.duration = 16230U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("WVHYBOLIOPXEWMSNFMRFVZBAXWJACGQGFCFPOXGBUKNEJDTHPTPWBIRLUIJWRM");

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
    msg.setTimeStamp(0.672371902517);
    msg.setSource(54436U);
    msg.setSourceEntity(159U);
    msg.setDestination(60777U);
    msg.setDestinationEntity(141U);
    msg.type = 194U;
    msg.command = 160U;
    msg.settings.assign("XOAJUVNVYNCDBFFIMHHOYZEUCMQTUFUBLEIPFJPTDZKMELLQXPAFKROCIJHGOZSNTNKSRBMPUOKTPASJWUNPXWBBVXBKQCMBSXBJBJJGWAPWWYRHQNFYETYQMXOMNEDGWRDPYRVCRSWHDGGADELXKSKZOZLUJDIYGENWJSGVTLTJXLLOQAZOEQCYMTKFVSPMIRNLIX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 25940U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.536508335652;
    tmp_tmp_msg_0_0.lon = 0.20988911131;
    tmp_tmp_msg_0_0.eta = 3216054797U;
    tmp_tmp_msg_0_0.duration = 36085U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TICRKQXDPCPAPGLLTOKKWUVBVFRINFDTHUZLJKTYYKDHPMDMJQENGXMOJUGUVYPWBMSMCIXZGNBBNRHRWRYCXTQMVYHZWPYFGZMNLZEZAMHAYCQFUEQVKCSDHTFIWREFNBURXZTDJLNODBOUQOBXFIDPSCOJSVYVXEUKBOESWAULOZHGABILFJKQJIWXAKJNPDWXSZNUTYQRSEMBDAZSIEHYNPS");

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
    msg.setTimeStamp(0.673738211071);
    msg.setSource(17224U);
    msg.setSourceEntity(147U);
    msg.setDestination(41254U);
    msg.setDestinationEntity(146U);
    msg.type = 213U;
    msg.command = 232U;
    msg.settings.assign("QNOJCUQEVMAPOWNVZUYDFMHXLMYWGDGKZBRNLCXTLMKTGBPQFLZUAONCIKOAUBAOUSGSJGQEPNCIH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 2777U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.322987203173;
    tmp_tmp_msg_0_0.lon = 0.0707958568064;
    tmp_tmp_msg_0_0.eta = 3065335483U;
    tmp_tmp_msg_0_0.duration = 5015U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("PGZZKWUQLRBDKZPFNKAQVRYEOHZLHTBNLMVVTXJARNCJEZOHTOICSLDUYRQKPZMBQLXMCJRGBXYGCIBNETJHCWDPVESRWSHIDFFGMBBMBWHOAIDAUFSAPVXSWCKNHVQROVMDNUNFHUXFKDJPADLAMJXWRDLDTSQXEMISGFLHJNOCVGXTKFKAIUSGJEWSMWGOFSVBQELYOLKEWBIUIRPCYQJYUQUYQWXYCFAUPKITE");

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
    msg.setTimeStamp(0.185022724219);
    msg.setSource(3123U);
    msg.setSourceEntity(28U);
    msg.setDestination(51554U);
    msg.setDestinationEntity(35U);
    msg.state = 231U;
    msg.plan_id = 49935U;
    msg.wpt_id = 136U;
    msg.settings_chk = 28489U;

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
    msg.setTimeStamp(0.379087765727);
    msg.setSource(15308U);
    msg.setSourceEntity(83U);
    msg.setDestination(18256U);
    msg.setDestinationEntity(186U);
    msg.state = 136U;
    msg.plan_id = 53695U;
    msg.wpt_id = 101U;
    msg.settings_chk = 16713U;

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
    msg.setTimeStamp(0.0360786508137);
    msg.setSource(50560U);
    msg.setSourceEntity(206U);
    msg.setDestination(18863U);
    msg.setDestinationEntity(206U);
    msg.state = 159U;
    msg.plan_id = 55614U;
    msg.wpt_id = 143U;
    msg.settings_chk = 60910U;

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
    msg.setTimeStamp(0.620709787149);
    msg.setSource(63041U);
    msg.setSourceEntity(42U);
    msg.setDestination(3877U);
    msg.setDestinationEntity(94U);
    msg.uid = 32U;
    msg.frag_number = 185U;
    msg.num_frags = 212U;
    const char tmp_msg_0[] = {-127, 78, -74, -7, -82, 103, 66, -50, 54, 117, -87, -72, -114, 99, 58, 38, -22, -108, 95, -24, 59, -119, -121, 106, 92, 101, 63, 123, 1, 30, 28, -96, -107, 54, 50, -72, -88, -26, 9, -114, -107, -24, 126, 3, 61, 70, 14, 115, 25, 26, -69, -37, 106, -125, 99, 13, -123, 16, 48, 5, -55, 29, 124, 41, 2, 77, -77, -66, -54, 78, -46, -96, -19, -123, 70, 32, -69, -116, 36, -28, 97, 93, -102, 83, -79, -98, 109, 69, 29, -77, 70, -13, -127, -77, -28, 99, 69, 64, -52, 79, 111, -65, -21, 67, 27, 46, -36, 25, -126, 47, -25, 0, -85, 53, -113, 54, 32, -121, -32, -111, -9, -97, 112, -18, 112, 115, -24, -111, 109, -44, 91, 6, 104, -57, 31, -127, -4, 88, -1, -127, 109, -80, -14, -105, -100, 95, 87, -105, -115, 120, 96, -10, -23, 126, -112, 125, 64, 108, -85, 106, -69, -58, -38, 48, -68, -61, -107, -72, -52, -111, -90, -35, 101, -119, -37, 11, 74, 74, 47, -105, 39};
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
    msg.setTimeStamp(0.735534723323);
    msg.setSource(41191U);
    msg.setSourceEntity(178U);
    msg.setDestination(54473U);
    msg.setDestinationEntity(154U);
    msg.uid = 183U;
    msg.frag_number = 77U;
    msg.num_frags = 64U;
    const char tmp_msg_0[] = {-61, 76, -85, 88, 32, 6, 68, -95, 84, -4, -49, -113, 99, 77, 18, 18, 33, 72, 38, -102, 84, 38, 36, 124, -99, -24, -115, -122, 84, 55, -74, -48, -6, -113, -55, 73, -75, -83, 11, -15, -118, -35, 107, 99, -3, -60, 49, 29, -122, -77, 88, 10, 16, -78, -34, -61, 75, -36, -46, 100, 97, -23, 103, 36, 75, -23, -107, -104, 79, -24, -10, 68, -103, 108, -20, -79, 15, 32, -109, -63, 86, -78, 123, -108, 88, -23, -84, 96, 54, -71, -122, 11, 108, 81, -50, -2, -99, 65, -25, 102, -25, -44, 97, 67, 56, -82, 26, -63, -52, 40, -50, -17, 20, 53, 55, -92, 76, -88, -25, 23, 102, 41, 10, -72, -107, 126, 18, -1, 56, 23, -71, 124, -13, -100, 33, 50, 62, -52, 90, -100, -47, -126, -91, 18, 45, -29, -116, -38, -115, 83, 41, 105, -42, 98, 126, -108, -71, -84, -65, -4, -59, 29, -106, -62, -82, -2, -68, -59, -127, -49, -9, -60, -106, -22, -42, -9, 14, 36, 67, 68, -3, 76, 9, -41, -93, -100, -119, -94, 44, 70, 93, 102, -26, 116, -106, -52, -16, -73, 107, 34, 22, -1, 99, -58, 22, -116, -125, -31, 112, -112, 73, -31, 94, 100, 70};
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
    msg.setTimeStamp(0.633989929791);
    msg.setSource(63828U);
    msg.setSourceEntity(94U);
    msg.setDestination(3392U);
    msg.setDestinationEntity(92U);
    msg.uid = 74U;
    msg.frag_number = 174U;
    msg.num_frags = 114U;
    const char tmp_msg_0[] = {-66, -87, 11, 2, -50, -32, 24, -62, -54, -74, 94, 88, 16, -59, 79, -14, 47, 118, -95, -125, 71, -41, -2, -90, -57, -92, 28, 33, -52, -119, -93, -50, 39, -109, 62, -67, -118, 69, -88, -18, 9, -117, 44, -19, -26, -112, -13, 5, -11, 119, 97, 108, 61, -70, 100, -117, 59, -14, 61, -117, 58, 59, 32, -96, -87, 40, 67, 122, 31, 42, -108, -51, -99, -48, 72, -17, -65, -23, 76, 4, -73, 38, 45, 108, 15, -119, 112, 68, 50, 3, -34, -36, 31, 35, -113, -11, 51, 107, 82, 106, -10, 29, 43, 60, 44, 6, 32, -107, 85, 108, -29, -82, -103, 39, -35, 88, -47, 80, -69, 21, -80, -107, 77, -97, 102, -56, -67, -4, -76, 5, -7, 76, 100, 18, -25, 4, 87, 31, -65, -35, -66, 27, 102, -43, 56, 76, -31, 12, 84, 10, -51, 54, -93, 19, -53, -31, 100, 59, -85, 67, -114, -29, 64, 102, 19, 69, 6, 65, 115, -62, -103, 69, 81, -95, -55, 10, -46, 29};
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
    msg.setTimeStamp(0.850772767233);
    msg.setSource(43158U);
    msg.setSourceEntity(94U);
    msg.setDestination(10420U);
    msg.setDestinationEntity(151U);
    msg.content_type.assign("TQXTRFXYPMLKDDDLXECYEVSOIZAMLWQWFJDJIHIZUSGWXHJWBQRPQFSIRTNHQIULTAWFWQMBRQMNXX");
    const char tmp_msg_0[] = {-107, -41, 52, -53, -70, -93, -32, 97, -31, 93, -65, 32, -22, 44, 47, 18, 85, -37, -81, -122, -77, -125, -19, -9, -47, -38, 31, 86, -125, -52, -65, 1, 28, -50, -92, -59, 34, -110, -83, 81, 77, -109, 98, 38, 101, -111, 51, 54, 8, -7, -22, -120, -54, 37, 34, -13, 10, 75, 88, -104, 29, 51, -100, 88, 20, -8, -99, -88, -118, -1, -8, 20, 57, -66, -70, 42, 76, -128, -118, -100, -78, -123, 20, 106, -17, 88, 88, -49, -68, 34, -10, 34, 115, 109, -80, 115, 8, -82, 113, 30, -76, 83, -107, 28, -64, -6, 33, -93, -12, 105, 114, 35, -78, -82, -18, 50, -110, 74, 12, 30, -29, -42, 6, 63, 53, -107, 47, 5, -69, -59, 40, 12, -8, -115, 69, 10, 62, -127, 99, 125, -87, 65, 13, -41, -87, 21, 99, 41, 73, -101, 123, 2, 63, -121, 18, 48, 123, 93, 16, 87, 106, -48, -77, 114, -100, -118, -76, 6, 12, -16, 90, 115, -57, 65, 119, -74, -55, 3, -83, 74, -68, -109, -116, 117, -127, -94, -50, -119, 98, -74, 118, 114, -60, -97, -52, 113, 51, 18, 70, -7, 118, -111, 83, -104, 45, -88, 1, -63, 110, -3, 59, -120, -38, -46, 79, 101, 123, 23, -67, 50, -70, -43, 87, -35, -46};
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
    msg.setTimeStamp(0.444352249086);
    msg.setSource(61938U);
    msg.setSourceEntity(91U);
    msg.setDestination(59382U);
    msg.setDestinationEntity(182U);
    msg.content_type.assign("IWUZGLAFKDQPNNSFHJUFMSKZEBVYOMZQYBFHVVFEJTVAOLJLM");
    const char tmp_msg_0[] = {113, -62, 79, 64, 4, 43, 46, 37, 48, 73, 13, -91, 98, 72, 39, 87, 29, 21, 56, -11, -117, -45, -7, 31, -42, -125, -106, -94, -21, 69, -121, 50, -49, -40, -93, -75, 111, 70, 116, -18, 55, -5, 43, -18, -13, -16, 103, -50, -42, 64, -10, 97, 48, 82, -117, -25, -107, -20, 67, -37, -63, 74, 22, -17, 7, -127, -13, -124, 57, 108, 101, -99, 67, -31, 43, -11, -72, 77, -11, 119, -45, -81, -33, -15, -6, -62, 22, 52, 4, 76, -118, 93, -53, 47};
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
    msg.setTimeStamp(0.944108069656);
    msg.setSource(63813U);
    msg.setSourceEntity(136U);
    msg.setDestination(674U);
    msg.setDestinationEntity(118U);
    msg.content_type.assign("PDNTBVXNPSFZHFOCVTPQZWPKWGLUHZFVX");
    const char tmp_msg_0[] = {24, -54, 53, 38, -7, -59, 8, 83, 77, -67, 86, 87, 4, 60, 64, -107, -58, 73, 53, -10, 19, 107, -98, 8, -126, -96, -114, 89, 46, 85, 68, 52, -102, -124, -16, 94, 95, -72, 65, 72, 19, -95, 113, 78, 30, -72, 108, -48, -18, -28, 81, 102, 67, -62, 85, 47, -15, -1, -93, 13, -76, 36, -118, -124, 23, -56, -3, 117, -60, -117, 113, 85, -49, 81, 49, 30, -9, -10, 94, 50, 105, -64, 50, 96, -1, 45, 103, 86};
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
    msg.setTimeStamp(0.0424790412717);
    msg.setSource(31312U);
    msg.setSourceEntity(75U);
    msg.setDestination(51452U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.304693156686);
    msg.setSource(30435U);
    msg.setSourceEntity(224U);
    msg.setDestination(31075U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.883790211975);
    msg.setSource(53280U);
    msg.setSourceEntity(70U);
    msg.setDestination(6193U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.262632347353);
    msg.setSource(13315U);
    msg.setSourceEntity(52U);
    msg.setDestination(21662U);
    msg.setDestinationEntity(231U);
    msg.target = 25419U;
    msg.bearing = 0.868313430186;
    msg.elevation = 0.629935320434;

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
    msg.setTimeStamp(0.756342265947);
    msg.setSource(17972U);
    msg.setSourceEntity(197U);
    msg.setDestination(41652U);
    msg.setDestinationEntity(24U);
    msg.target = 44956U;
    msg.bearing = 0.649195286155;
    msg.elevation = 0.939988888165;

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
    msg.setTimeStamp(0.363186552002);
    msg.setSource(29101U);
    msg.setSourceEntity(237U);
    msg.setDestination(29144U);
    msg.setDestinationEntity(173U);
    msg.target = 12964U;
    msg.bearing = 0.575172859677;
    msg.elevation = 0.887066411695;

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
    msg.setTimeStamp(0.665303908051);
    msg.setSource(18830U);
    msg.setSourceEntity(107U);
    msg.setDestination(44513U);
    msg.setDestinationEntity(245U);
    msg.target = 46695U;
    msg.x = 0.186500907101;
    msg.y = 0.75189108103;
    msg.z = 0.0622887643906;

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
    msg.setTimeStamp(0.724342971764);
    msg.setSource(22441U);
    msg.setSourceEntity(19U);
    msg.setDestination(48782U);
    msg.setDestinationEntity(124U);
    msg.target = 20910U;
    msg.x = 0.694130671868;
    msg.y = 0.0195923552259;
    msg.z = 0.608670871155;

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
    msg.setTimeStamp(0.42388205877);
    msg.setSource(54101U);
    msg.setSourceEntity(141U);
    msg.setDestination(60032U);
    msg.setDestinationEntity(199U);
    msg.target = 21941U;
    msg.x = 0.262641289542;
    msg.y = 0.127283572425;
    msg.z = 0.526070430388;

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
    msg.setTimeStamp(0.687021175438);
    msg.setSource(64005U);
    msg.setSourceEntity(5U);
    msg.setDestination(11626U);
    msg.setDestinationEntity(4U);
    msg.target = 11205U;
    msg.lat = 0.0566723520932;
    msg.lon = 0.806060270012;
    msg.z_units = 49U;
    msg.z = 0.18247804472;

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
    msg.setTimeStamp(0.0727640976652);
    msg.setSource(27424U);
    msg.setSourceEntity(211U);
    msg.setDestination(12073U);
    msg.setDestinationEntity(248U);
    msg.target = 39564U;
    msg.lat = 0.140149242793;
    msg.lon = 0.517306454518;
    msg.z_units = 59U;
    msg.z = 0.552178785188;

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
    msg.setTimeStamp(0.50800566676);
    msg.setSource(28689U);
    msg.setSourceEntity(196U);
    msg.setDestination(46201U);
    msg.setDestinationEntity(7U);
    msg.target = 12701U;
    msg.lat = 0.365057971193;
    msg.lon = 0.620042635964;
    msg.z_units = 62U;
    msg.z = 0.250155861505;

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
    msg.setTimeStamp(0.9504361047);
    msg.setSource(40491U);
    msg.setSourceEntity(3U);
    msg.setDestination(6620U);
    msg.setDestinationEntity(252U);
    msg.locale.assign("LUWKCNHYDFEUBZCSXGGDEFOFVNPZWPOLJVYSRZVXMNHUKZUQAEOCWDGQLJZARXEKDVGAHJRKQPXTIBMZBNTTECIWJDCEFOHWTZTUXJRUDQIYGKBYIAKMLTSWQIIEABMRAKPJWMQLSMNYXVWOVFPWRGHPHZOVCDEJXNUOINTKGUOYSGBFRUGNEFWCCPKRHTRDJAAQYDULIBQKMXSNEVIFLHTRBJ");
    const char tmp_msg_0[] = {61, 18, 6, 94, -71, 93, 123, -77, -39, -8, -86, -61, 99, -44, -41, -71, 46, 76, 122, 7, -75, 0, 5, 91, 117, 13, 86, 101, 120, -44, 84, -19, -123, 15, 11, -33, 86, 92, 83, 18, -42, 14, 2, -59, 6, 32, -66, -69, 61, -39, 55, -59, -77, 31, -43, -55, 34, 87, -75, -37, 85, -60, -35, 5, 103, 53, 24, 22, -76, 105, -112, 120, 60, 51, -121, 112, -26, 125, -32, -11, -96, -28, 41, 112, -45, -113, 118, -41, 80, 4, -99, -88, 38, -68, -33, 89, -40, 81, -112, 19, 21, -106, 22, 24, 19, -85, 24, 56, -121, 76, 39, -58, -35, -45, -15, -24, 43, 111, -24, -34, -48, 123, 54, -32, -32, 85, -104, -59, 73, 39, -43, -58, -42, 37, -99, 82, 104, 34, -101, 41, 126, -39, -36, -48, 66, 89, -111, -114, -113, -103, 103, -85, 42, 4, 37, 99, -1, 105, 81, 79, 10, -56, 23, 6, -51, 104, 24, -74, -108, 71, 5, -26, 15, 102, 23, 44, 70, -41, -16, -61, 6, -95, 114, -25, 94, -14, 68, -64, -86, 67, -72, 93, -121, 121, 95, -15, 17, 11};
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
    msg.setTimeStamp(0.515381597505);
    msg.setSource(17329U);
    msg.setSourceEntity(213U);
    msg.setDestination(58983U);
    msg.setDestinationEntity(87U);
    msg.locale.assign("OJHUEANBEYZIUFPSRBNQUFOUOMYFXXVVQJCHWLMBJTMQLSIOVZQBDASAFYLQNTZYHHYEBFLKDIWPDTOJVLMGGTGZWLMXUIGMZF");
    const char tmp_msg_0[] = {-48, -71, 70, -126, 120, 5, -84, -5, -112, 67, -56, -123, -72, -41, 110, 85, -38, 0, 58, -94, 113, 94, 36, -105, -48, -101, 0, 9, -112, 8, 32, -22, 47, 101, 68, -75, 19, 90, 7, -19, -7, 105, -39, -71, 95, 5, -88, -55, -120, -103, -82, 118, -64, 118, -17, -13, 14, 48, 57, 81, 11, -22, 123, 69, 103, 53, -122, 79, -98, 99, 68, 69, -22, 83, -69, -17, 76, -29, 64, -45, 121, -126, -81, 26, -23, -26, -69, -14, 47, -120, -11, -27, 50, -44, 35, 114, -29, 71, -34, -121, -28, 79, -88, 110, 50, 73, -28, -119, 58, 50, -37, 110, 36, -96, -101, 45, -40, 15, 120, 60, -128, 113, -37, -52, -125, -125, 12, -63, -34, -90, 3, -18, -78, -11, -30, 38, 26, -107, 12, -128, 104, -39, -44, 59, -53, -6, 100, -93, 1, 83, 41, 118, -5, 87, 118, 21, 84, 123, -114, 114, 108, 110, -43, 118, 17, 85, -56, 6, -96, -121, -46, -2, -119, -93, 108, 47, -15, 104, 13, 122, -80, 17, 117, 54, 5, 58, -93, 105, -41, 68, -54, 25, 101, 33, -31, 0, -7, 21, 122, -20, -114, 57, -86, 107, 60, 57, 82, 41};
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
    msg.setTimeStamp(0.152410995987);
    msg.setSource(11606U);
    msg.setSourceEntity(158U);
    msg.setDestination(9964U);
    msg.setDestinationEntity(142U);
    msg.locale.assign("YKCFRUWQWZBOZXAYDACJRHKHTZLVCKIENMUFZRMQXSRZSKFVKWVKOHQOHSVUALNWRLGKDOBJZIXIUIQPDPTONWSYFYWWBQPFEWEYHKBDSZUXPAAJCCE");
    const char tmp_msg_0[] = {-45, 87, -23, -115, 39, 62, -60, 2, 34, 55, -75, -23, -79, 30, -114, -62, -18, -5, -63, -92, 115, 105, -99, 113, 4, -111, -85, -102, 4, -93, -54, -95, -4, 3, 73, 94, -107, -127, 25, -26, 12, 70, 98, -102, 64, 12, -40, -51, -37, 51, 126, 103, -110, -95, 1, -69, -85, -111, -36, 29, -122, -121, 14, -85, -21, 63, 76, -62, -106, 117, 77, 53, 4, 80, 115, 73, -88, 91, 78, 111, -83, 112, 99, 56, 23, -12, -82, -47, -59, -88, 111, 59, 86, 67, -48, -112, -19, 54, 114, -23, -22, 13, -13, 18, 10, -98, -57, -13, 58, -46, 117, -2, 67, -39, 47, -33, -31, 120, -84, -68, -105, 57, -16, 56, -21, 17, -36, -112, -120, 31, 32, 42, -127, -43, 100, -4, -84, 123, 35, -30, -84};
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
    msg.setTimeStamp(0.790097625134);
    msg.setSource(43640U);
    msg.setSourceEntity(69U);
    msg.setDestination(40150U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.612227878222);
    msg.setSource(8094U);
    msg.setSourceEntity(104U);
    msg.setDestination(2004U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.287716594427);
    msg.setSource(64702U);
    msg.setSourceEntity(126U);
    msg.setDestination(4761U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.580592188678);
    msg.setSource(22840U);
    msg.setSourceEntity(100U);
    msg.setDestination(2703U);
    msg.setDestinationEntity(252U);
    msg.camid = 230U;
    msg.x = 174U;
    msg.y = 31889U;

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
    msg.setTimeStamp(0.537814295158);
    msg.setSource(61083U);
    msg.setSourceEntity(216U);
    msg.setDestination(62992U);
    msg.setDestinationEntity(150U);
    msg.camid = 136U;
    msg.x = 53794U;
    msg.y = 56477U;

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
    msg.setTimeStamp(0.602366855796);
    msg.setSource(13485U);
    msg.setSourceEntity(112U);
    msg.setDestination(17226U);
    msg.setDestinationEntity(212U);
    msg.camid = 86U;
    msg.x = 62911U;
    msg.y = 56983U;

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
    msg.setTimeStamp(0.208375918898);
    msg.setSource(39570U);
    msg.setSourceEntity(72U);
    msg.setDestination(33193U);
    msg.setDestinationEntity(15U);
    msg.camid = 7U;
    msg.x = 47603U;
    msg.y = 62008U;

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
    msg.setTimeStamp(0.189469531909);
    msg.setSource(48247U);
    msg.setSourceEntity(97U);
    msg.setDestination(18456U);
    msg.setDestinationEntity(228U);
    msg.camid = 124U;
    msg.x = 24024U;
    msg.y = 2485U;

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
    msg.setTimeStamp(0.260804311489);
    msg.setSource(54852U);
    msg.setSourceEntity(13U);
    msg.setDestination(19469U);
    msg.setDestinationEntity(177U);
    msg.camid = 131U;
    msg.x = 13183U;
    msg.y = 48762U;

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
    msg.setTimeStamp(0.721459043194);
    msg.setSource(3722U);
    msg.setSourceEntity(63U);
    msg.setDestination(36774U);
    msg.setDestinationEntity(185U);
    msg.tracking = 79U;
    msg.lat = 0.104877549542;
    msg.lon = 0.909766469443;
    msg.x = 0.425641371622;
    msg.y = 0.106656277423;
    msg.z = 0.495096582182;

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
    msg.setTimeStamp(0.480888612901);
    msg.setSource(13565U);
    msg.setSourceEntity(128U);
    msg.setDestination(54120U);
    msg.setDestinationEntity(96U);
    msg.tracking = 140U;
    msg.lat = 0.950040144688;
    msg.lon = 0.389678057781;
    msg.x = 0.143329411866;
    msg.y = 0.854845309571;
    msg.z = 0.596275421829;

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
    msg.setTimeStamp(0.143892158423);
    msg.setSource(41U);
    msg.setSourceEntity(7U);
    msg.setDestination(63223U);
    msg.setDestinationEntity(137U);
    msg.tracking = 240U;
    msg.lat = 0.744466393444;
    msg.lon = 0.194671567036;
    msg.x = 0.169475259447;
    msg.y = 0.546871427716;
    msg.z = 0.0546186896;

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
    msg.setTimeStamp(0.940439862564);
    msg.setSource(30101U);
    msg.setSourceEntity(64U);
    msg.setDestination(9347U);
    msg.setDestinationEntity(141U);
    msg.target.assign("RSWEMPTKWIZALNIGDUTVAQKVRMJFMTXCGULECBQZAYYZSGMIADJZZHBNVWVYNLLDCEREHINUOFJYJPPOJJNPJUTOXIYEFGXPODGMMHUQHECGTSFMTLCRDXBOSGKKHWDNGCRERQQAFHBUDXHHVKBAAIFBFOFPOSAXLCSLJUINMQPCMDUZRRCAWROLPYQVJNSYDFTCQUZHKBKGVQFOAQNIMOBIBZNEYSKIVEXLDYUHZGXZVTJY");
    msg.lbearing = 0.499007901739;
    msg.lelevation = 0.814432732495;
    msg.bearing = 0.65546828314;
    msg.elevation = 0.949344998733;
    msg.phi = 0.876174454468;
    msg.theta = 0.920544532305;
    msg.psi = 0.0245156032127;
    msg.accuracy = 0.400960346808;

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
    msg.setTimeStamp(0.0960839341094);
    msg.setSource(55030U);
    msg.setSourceEntity(195U);
    msg.setDestination(8469U);
    msg.setDestinationEntity(240U);
    msg.target.assign("OLONJHAPMPSUYFGVSFXLEUQLGHNXNQZOVWOWNJDKVSUQYJSQDMFKULDSRLJTOCLLFTGSFGEMTVPFZVRWDYQSLGILKJMOKPPVIKKUMLZTVHATEJBWHYIUYBHXWJUXCMMNRJXQRSTXBOHYNZVFAEYWBPPFAEMZAAFYTUNCWBIRAKXWTADOIEODRCHEDZYBZIZNRMQXABGZKPIPQWUBWCMGJIVXUFGACQVRQGCRBEZXOI");
    msg.lbearing = 0.703473919532;
    msg.lelevation = 0.532341796657;
    msg.bearing = 0.223628148728;
    msg.elevation = 0.223871526899;
    msg.phi = 0.97862401274;
    msg.theta = 0.952369436163;
    msg.psi = 0.19718365745;
    msg.accuracy = 0.364153877796;

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
    msg.setTimeStamp(0.389516067976);
    msg.setSource(18707U);
    msg.setSourceEntity(39U);
    msg.setDestination(23184U);
    msg.setDestinationEntity(76U);
    msg.target.assign("EXVEFQOFZSPLQURGJYTQPCASZEBWGMHXKNIUHKOLARQVTUBMAKEGPCLCVBTQWHWWFWBCNYCXSNDTINTUMDXEYTRPZDMPREUUSALYLDRRLZKGJMAPZJJZAVAEYMDDNXTUNQEJSZWIRGKHFDLTTBVVGJXFBOSIENSCMXDNZCKFTFUXOJHKCOBHYYVRLWKADILFIMYOUPJIEJQILQDBHZHAJMHVGSWQGOGOHZROFPYOVAGPPNKICVN");
    msg.lbearing = 0.871952829341;
    msg.lelevation = 0.519429978816;
    msg.bearing = 0.959274949735;
    msg.elevation = 0.0410779504281;
    msg.phi = 0.251039504465;
    msg.theta = 0.738712594685;
    msg.psi = 0.289734163527;
    msg.accuracy = 0.418871984609;

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
    msg.setTimeStamp(0.890294645985);
    msg.setSource(38123U);
    msg.setSourceEntity(27U);
    msg.setDestination(35024U);
    msg.setDestinationEntity(34U);
    msg.target.assign("FLUVAMJYZFYJIZXGXDINNVZZATNGBKCWFWYLUIMWRZRDQKIWHGRLCQQGPKDEQPPONMMLKKERMSHYBTHGKWMHGANITVAXWUGAPRGTHEUNGBNXTZCOXPFJSXCCZBCJDDKAYSHHEHIMRPRIRFOYASZLLJSJIIYNUOOEMLTFBKYDOCVXRHTEOJOXQOKEBMFUPBQMQLFELNPHBNATVEDVWSVSLWJAKSDDCZYPUJAYZSUGFUBOPSWXCDTRC");
    msg.x = 0.912745192348;
    msg.y = 0.515392524268;
    msg.z = 0.867850945483;
    msg.n = 0.35679953692;
    msg.e = 0.756572626366;
    msg.d = 0.100268459702;
    msg.phi = 0.921146269897;
    msg.theta = 0.948095306584;
    msg.psi = 0.569991696124;
    msg.accuracy = 0.724789136835;

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
    msg.setTimeStamp(0.465397229547);
    msg.setSource(59714U);
    msg.setSourceEntity(193U);
    msg.setDestination(46296U);
    msg.setDestinationEntity(238U);
    msg.target.assign("PGOMGULHKXMUOJTCMZANXYHHZFBDZTVSBGKANXYTZSKWLJRFUPWOISBMDNTWFVBXWLSIVJPWZAZODQJOGFEPCFITBRGUJXJXEMTJRHKIGTYMHILCAADERBPZUMUUVDNPAGARWWPVROBQMHSQYR");
    msg.x = 0.454106326893;
    msg.y = 0.526123514817;
    msg.z = 0.894085218731;
    msg.n = 0.0811492662369;
    msg.e = 0.553735529711;
    msg.d = 0.126432236517;
    msg.phi = 0.250240954629;
    msg.theta = 0.726391307872;
    msg.psi = 0.987550089726;
    msg.accuracy = 0.0807849252026;

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
    msg.setTimeStamp(0.421839325532);
    msg.setSource(21553U);
    msg.setSourceEntity(5U);
    msg.setDestination(14288U);
    msg.setDestinationEntity(232U);
    msg.target.assign("PFIGQHUNKBBHVFDXXDCALOBICXIJUNPMEBZSREKNJOJYR");
    msg.x = 0.419509237569;
    msg.y = 0.989393797733;
    msg.z = 0.396227764805;
    msg.n = 0.860103962222;
    msg.e = 0.219443704901;
    msg.d = 0.264503167886;
    msg.phi = 0.94373833103;
    msg.theta = 0.109031907941;
    msg.psi = 0.52496084466;
    msg.accuracy = 0.378436193758;

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
    msg.setTimeStamp(0.0898384428436);
    msg.setSource(11924U);
    msg.setSourceEntity(82U);
    msg.setDestination(46773U);
    msg.setDestinationEntity(32U);
    msg.target.assign("ERWUTQSDKAFWJWQCWQODHDCOXMBOCEAWTKFBCTVOGIFRZESIPYYNISEMRMQIRLRZOAXPARBGUPMTUHEPBZMOTPBUHHOGPWMPMHUIWGZNVZXTTDJYBSKQGNUURHGDTRVJCPAQLXOUOIFKVFJIJFPALLCVGPZJVFHNMLTX");
    msg.lat = 0.572599003466;
    msg.lon = 0.421981832378;
    msg.z_units = 103U;
    msg.z = 0.360654198152;
    msg.accuracy = 0.130669123308;

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
    msg.setTimeStamp(0.0314416950991);
    msg.setSource(46739U);
    msg.setSourceEntity(173U);
    msg.setDestination(3840U);
    msg.setDestinationEntity(135U);
    msg.target.assign("FLNTDMCCYNNTOFCTPGCBNKPNPLJZOEIPRVCGGUQCIERZTHXKEPMIVDQDLGXMCUUKOSPLTLOEXFALTJGMYVQMWTIABZNWKUVHARRXSHBXQTHUANYPWQUZHQRVWYSNCBDEJJOFJWYZABAIXMDDUDGRRLWFXRCLAOSDFUBFYXIPSJIYVAYHHJBBSSJSXGWVFHWOFHOHZS");
    msg.lat = 0.222906861275;
    msg.lon = 0.029475652442;
    msg.z_units = 111U;
    msg.z = 0.812416682695;
    msg.accuracy = 0.853765969333;

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
    msg.setTimeStamp(0.557855913974);
    msg.setSource(47296U);
    msg.setSourceEntity(209U);
    msg.setDestination(7699U);
    msg.setDestinationEntity(233U);
    msg.target.assign("HMPKSZQJHKDXOUGRRZSYGSSRCLIHAAECWUUMBITHZTQIRPBJANZREAXLCLNXUAQYDYQDFKMYKGJLHGEZKEXWFPFVZCMBLWIDYEOGNSYYSXTJKAPVQEPUXPFYOHYDXPVHWTUVINZXBIBVMNWHDZCSIGTQRXOBTPOJQCFNRVRNDIAOZPFKOONOGKBTHJQLVJEPSTRKECVMWQGCLJ");
    msg.lat = 0.0788391182018;
    msg.lon = 0.533561191192;
    msg.z_units = 11U;
    msg.z = 0.228042180374;
    msg.accuracy = 0.722591552324;

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
    msg.setTimeStamp(0.132288943436);
    msg.setSource(9973U);
    msg.setSourceEntity(234U);
    msg.setDestination(26319U);
    msg.setDestinationEntity(20U);
    msg.name.assign("JLMMLLCFGDPYUSP");
    msg.lat = 0.549170049419;
    msg.lon = 0.570615058607;
    msg.z = 0.547944652106;
    msg.z_units = 249U;

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
    msg.setTimeStamp(0.247075352439);
    msg.setSource(45326U);
    msg.setSourceEntity(75U);
    msg.setDestination(30982U);
    msg.setDestinationEntity(154U);
    msg.name.assign("MVJTLLFLKJSJKIGKITTFHEGYLLNWMGXYGVIGITXVDLHYOOQGCPLUQRDDZYIDPZAFLWPKSRPGWHFKJQITORZWNCMMJAHEDRFZOIPCYBRZZOKEEQAMBGVARZCOJVNFQKNBHHADFCWQFMSEAOXCWECOJUMZNUBWCFGUPVRKSRABDWAHRHDJMBSHEKVPQNBUXBMSYDNTCAMJBHXUJSWOYLEEYVUVEXYQZTSICIFXNUTXTYPWXOUNNGPKIS");
    msg.lat = 0.654747443293;
    msg.lon = 0.297547739678;
    msg.z = 0.797103038014;
    msg.z_units = 74U;

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
    msg.setTimeStamp(0.0612911067289);
    msg.setSource(54395U);
    msg.setSourceEntity(107U);
    msg.setDestination(38820U);
    msg.setDestinationEntity(63U);
    msg.name.assign("FHVDPGMJGUKREEUSLJCWWERAXFHQNKKYTYMBNFQGDLJVXMOBSLKUCJUSLWEJVBQ");
    msg.lat = 0.114329042902;
    msg.lon = 0.0878467621791;
    msg.z = 0.140889018373;
    msg.z_units = 233U;

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
    msg.setTimeStamp(0.275012880496);
    msg.setSource(35856U);
    msg.setSourceEntity(164U);
    msg.setDestination(17063U);
    msg.setDestinationEntity(196U);
    msg.op = 237U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("PPSILPWZKGXCOJMJNZBYUVZVMRLWHSELFEWNFNTWVNQQRTAGACXNEFGLDVDJMHEUQGDAFJECZLPXMTTSPLQCZSWTNKMBFZQDYALGKFZKYTAYENUUQFVHNTOZMFXRZRQWRZTEGIBBOBWASVIBGDCUOHIYJUJLOMAVSIROWIJOPHHPJJHKARRKCYYY");
    tmp_msg_0.lat = 0.373825702109;
    tmp_msg_0.lon = 0.198315431541;
    tmp_msg_0.z = 0.910557717745;
    tmp_msg_0.z_units = 116U;
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
    msg.setTimeStamp(0.465932674461);
    msg.setSource(9738U);
    msg.setSourceEntity(177U);
    msg.setDestination(54006U);
    msg.setDestinationEntity(97U);
    msg.op = 165U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("NUQVSTRTYLH");
    tmp_msg_0.lat = 0.410997229723;
    tmp_msg_0.lon = 0.401447129062;
    tmp_msg_0.z = 0.0147485297051;
    tmp_msg_0.z_units = 232U;
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
    msg.setTimeStamp(0.173769349629);
    msg.setSource(46476U);
    msg.setSourceEntity(71U);
    msg.setDestination(50270U);
    msg.setDestinationEntity(151U);
    msg.op = 201U;

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
    msg.setTimeStamp(0.144205809007);
    msg.setSource(1915U);
    msg.setSourceEntity(66U);
    msg.setDestination(39080U);
    msg.setDestinationEntity(252U);
    msg.value = 0.77560763178;
    msg.type = 160U;

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
    msg.setTimeStamp(0.738836862511);
    msg.setSource(52744U);
    msg.setSourceEntity(165U);
    msg.setDestination(24243U);
    msg.setDestinationEntity(198U);
    msg.value = 0.491589292389;
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
    msg.setTimeStamp(0.820662308649);
    msg.setSource(6279U);
    msg.setSourceEntity(165U);
    msg.setDestination(31090U);
    msg.setDestinationEntity(13U);
    msg.value = 0.331140191631;
    msg.type = 125U;

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
    msg.setTimeStamp(0.826679379407);
    msg.setSource(42382U);
    msg.setSourceEntity(13U);
    msg.setDestination(64012U);
    msg.setDestinationEntity(29U);
    msg.value = 0.0935504386946;

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
    msg.setTimeStamp(0.0150220834938);
    msg.setSource(8201U);
    msg.setSourceEntity(165U);
    msg.setDestination(39775U);
    msg.setDestinationEntity(89U);
    msg.value = 0.242527675638;

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
    msg.setTimeStamp(0.973443363657);
    msg.setSource(1653U);
    msg.setSourceEntity(8U);
    msg.setDestination(4318U);
    msg.setDestinationEntity(118U);
    msg.value = 0.448554501814;

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
    msg.setTimeStamp(0.729399803084);
    msg.setSource(7026U);
    msg.setSourceEntity(34U);
    msg.setDestination(35178U);
    msg.setDestinationEntity(16U);
    msg.timestamp_last_service = 0.32722028486;
    msg.time_next_service = 0.135652576858;
    msg.time_motor_next_service = 0.733003997189;
    msg.time_idle_ground = 0.378232525256;
    msg.time_idle_air = 0.0697127310033;
    msg.time_idle_water = 0.727587119354;
    msg.time_idle_underwater = 0.324817093125;
    msg.time_idle_unknown = 0.326807867653;
    msg.time_motor_ground = 0.876417118799;
    msg.time_motor_air = 0.958521577129;
    msg.time_motor_water = 0.447463823014;
    msg.time_motor_underwater = 0.35641684115;
    msg.time_motor_unknown = 0.107984533152;
    msg.rpm_min = -3803;
    msg.rpm_max = 25977;
    msg.depth_max = 0.591742466811;

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
    msg.setTimeStamp(0.853307666145);
    msg.setSource(32539U);
    msg.setSourceEntity(174U);
    msg.setDestination(64241U);
    msg.setDestinationEntity(94U);
    msg.timestamp_last_service = 0.134035323093;
    msg.time_next_service = 0.401343953711;
    msg.time_motor_next_service = 0.0706209680684;
    msg.time_idle_ground = 0.396531961257;
    msg.time_idle_air = 0.928513291405;
    msg.time_idle_water = 0.90514681009;
    msg.time_idle_underwater = 0.143154132992;
    msg.time_idle_unknown = 0.540784686621;
    msg.time_motor_ground = 0.0781118755878;
    msg.time_motor_air = 0.585995315781;
    msg.time_motor_water = 0.354564319563;
    msg.time_motor_underwater = 0.46146921569;
    msg.time_motor_unknown = 0.499727880722;
    msg.rpm_min = 14209;
    msg.rpm_max = 75;
    msg.depth_max = 0.787406818798;

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
    msg.setTimeStamp(0.842544751794);
    msg.setSource(15248U);
    msg.setSourceEntity(17U);
    msg.setDestination(632U);
    msg.setDestinationEntity(205U);
    msg.timestamp_last_service = 0.537381659799;
    msg.time_next_service = 0.947703877989;
    msg.time_motor_next_service = 0.39829511297;
    msg.time_idle_ground = 0.705381982045;
    msg.time_idle_air = 0.254366196088;
    msg.time_idle_water = 0.371176359065;
    msg.time_idle_underwater = 0.66280192315;
    msg.time_idle_unknown = 0.34310914717;
    msg.time_motor_ground = 0.530997382312;
    msg.time_motor_air = 0.0803956138319;
    msg.time_motor_water = 0.0491522058557;
    msg.time_motor_underwater = 0.0416994143044;
    msg.time_motor_unknown = 0.644453451743;
    msg.rpm_min = 22458;
    msg.rpm_max = -23771;
    msg.depth_max = 0.813309234815;

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
    msg.setTimeStamp(0.859859120281);
    msg.setSource(27329U);
    msg.setSourceEntity(173U);
    msg.setDestination(4378U);
    msg.setDestinationEntity(4U);
    msg.severity = 64U;
    msg.text.assign("XWGPSWWVQKFLONDXKBVQQNYZVEJGFUTIXYJAAEBHPNQTTDIMULVXNXEKTVBEUUPHPPUDINQYLAXOMYVEDICKMBIUZQSLCLMRJSHCWRZREQIWMOEFXUAKJGCSPGVUOPZCTTBKJIDQXROIRNVEHYKKJOGNXGFNATYOJGXGKZJVMTHDFLFWZCPYYZLCUERJTFHDRWBAAERMDSHCOLNZFCYOMTKUACQHMZYDSRHVBFLSWIRSBOLG");

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
    msg.setTimeStamp(0.77032184641);
    msg.setSource(3187U);
    msg.setSourceEntity(140U);
    msg.setDestination(46658U);
    msg.setDestinationEntity(88U);
    msg.severity = 84U;
    msg.text.assign("UEXRNZFVSF");

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
    msg.setTimeStamp(0.687760477657);
    msg.setSource(6355U);
    msg.setSourceEntity(100U);
    msg.setDestination(8682U);
    msg.setDestinationEntity(146U);
    msg.severity = 144U;
    msg.text.assign("PMABCCRDZYBNOSFUQXNZDDRCZGVXDHWHPUOMXIAXSKIHIKINPHSVTIDBSQVQPLYZMKLORJKAQFXNBJBUAVVFAYRETGNLBUEKGUXZMQWGCGFNAOVBJCJCMXTQSWNUSPYHBVZFYTO");

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
    msg.setTimeStamp(0.630865781447);
    msg.setSource(31738U);
    msg.setSourceEntity(210U);
    msg.setDestination(50963U);
    msg.setDestinationEntity(21U);
    msg.channel = 63;
    msg.value = 1293082402;
    msg.gain = 245U;

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
    msg.setTimeStamp(0.598765135116);
    msg.setSource(8418U);
    msg.setSourceEntity(76U);
    msg.setDestination(50622U);
    msg.setDestinationEntity(101U);
    msg.channel = -91;
    msg.value = -188658303;
    msg.gain = 24U;

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
    msg.setTimeStamp(0.520257732486);
    msg.setSource(58108U);
    msg.setSourceEntity(109U);
    msg.setDestination(27855U);
    msg.setDestinationEntity(93U);
    msg.channel = -122;
    msg.value = -540924833;
    msg.gain = 41U;

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
    msg.setTimeStamp(0.919074909331);
    msg.setSource(34172U);
    msg.setSourceEntity(62U);
    msg.setDestination(16984U);
    msg.setDestinationEntity(179U);
    msg.ch01 = 0.417023587963;
    msg.ch02 = 0.00136054937762;
    msg.ch03 = 0.897963436784;
    msg.ch04 = 0.801932220686;
    msg.ch05 = 0.855382008994;
    msg.ch06 = 0.170498940372;
    msg.ch07 = 0.647064529408;
    msg.ch08 = 0.273718732702;
    msg.ch09 = 0.0145810692274;
    msg.ch10 = 0.321492721275;
    msg.ch11 = 0.774294122111;
    msg.ch12 = 0.892729963204;
    msg.ch13 = 0.778953730138;
    msg.ch14 = 0.339807195531;
    msg.ch15 = 0.012959926194;
    msg.ch16 = 0.133440724458;

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
    msg.setTimeStamp(0.724751523014);
    msg.setSource(43672U);
    msg.setSourceEntity(37U);
    msg.setDestination(38168U);
    msg.setDestinationEntity(64U);
    msg.ch01 = 0.439027634246;
    msg.ch02 = 0.43290456023;
    msg.ch03 = 0.464304660346;
    msg.ch04 = 0.689493217967;
    msg.ch05 = 0.807545341357;
    msg.ch06 = 0.421648547941;
    msg.ch07 = 0.713098705569;
    msg.ch08 = 0.246229244664;
    msg.ch09 = 0.587529915912;
    msg.ch10 = 0.263786662737;
    msg.ch11 = 0.101462316536;
    msg.ch12 = 0.46857381453;
    msg.ch13 = 0.930601859404;
    msg.ch14 = 0.838924171152;
    msg.ch15 = 0.117622641914;
    msg.ch16 = 0.779132966298;

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
    msg.setTimeStamp(0.226196229029);
    msg.setSource(39396U);
    msg.setSourceEntity(97U);
    msg.setDestination(34313U);
    msg.setDestinationEntity(238U);
    msg.ch01 = 0.475542560533;
    msg.ch02 = 0.272436894834;
    msg.ch03 = 0.121260675027;
    msg.ch04 = 0.178326600439;
    msg.ch05 = 0.644501386925;
    msg.ch06 = 0.764047830661;
    msg.ch07 = 0.624845689782;
    msg.ch08 = 0.0312033870617;
    msg.ch09 = 0.330974844446;
    msg.ch10 = 0.910044825121;
    msg.ch11 = 0.539762843114;
    msg.ch12 = 0.882180037027;
    msg.ch13 = 0.880848311905;
    msg.ch14 = 0.69880727065;
    msg.ch15 = 0.204817564974;
    msg.ch16 = 0.617960671055;

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
    msg.setTimeStamp(0.0283544401716);
    msg.setSource(28462U);
    msg.setSourceEntity(244U);
    msg.setDestination(37273U);
    msg.setDestinationEntity(167U);
    msg.time = 0.0708435252514;
    msg.ang = 0.646188134904;

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
    msg.setTimeStamp(0.106315175328);
    msg.setSource(311U);
    msg.setSourceEntity(190U);
    msg.setDestination(45351U);
    msg.setDestinationEntity(187U);
    msg.time = 0.213623392655;
    msg.ang = 0.000867291934711;

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
    msg.setTimeStamp(0.472994994379);
    msg.setSource(4381U);
    msg.setSourceEntity(107U);
    msg.setDestination(51269U);
    msg.setDestinationEntity(31U);
    msg.time = 0.279314315604;
    msg.ang = 0.539725667016;

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
    msg.setTimeStamp(0.832276608021);
    msg.setSource(33472U);
    msg.setSourceEntity(204U);
    msg.setDestination(44811U);
    msg.setDestinationEntity(28U);
    msg.value = 0.188987168981;

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
    msg.setTimeStamp(0.418798486062);
    msg.setSource(26895U);
    msg.setSourceEntity(157U);
    msg.setDestination(45402U);
    msg.setDestinationEntity(129U);
    msg.value = 0.623460824024;

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
    msg.setTimeStamp(0.935395630912);
    msg.setSource(2961U);
    msg.setSourceEntity(58U);
    msg.setDestination(2030U);
    msg.setDestinationEntity(58U);
    msg.value = 0.838433461474;

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
    msg.setTimeStamp(0.843334534974);
    msg.setSource(11194U);
    msg.setSourceEntity(9U);
    msg.setDestination(49249U);
    msg.setDestinationEntity(242U);
    msg.value = 0.0373260944242;

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
    msg.setTimeStamp(0.292322419823);
    msg.setSource(24348U);
    msg.setSourceEntity(99U);
    msg.setDestination(33167U);
    msg.setDestinationEntity(103U);
    msg.value = 0.512134080983;

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
    msg.setTimeStamp(0.899852401855);
    msg.setSource(64328U);
    msg.setSourceEntity(135U);
    msg.setDestination(14235U);
    msg.setDestinationEntity(43U);
    msg.value = 0.841201909908;

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
    msg.setTimeStamp(0.23560664462);
    msg.setSource(44329U);
    msg.setSourceEntity(33U);
    msg.setDestination(50642U);
    msg.setDestinationEntity(184U);
    msg.value = 0.175344757852;

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
    msg.setTimeStamp(0.922186319098);
    msg.setSource(15284U);
    msg.setSourceEntity(34U);
    msg.setDestination(227U);
    msg.setDestinationEntity(5U);
    msg.value = 0.252071392945;

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
    msg.setTimeStamp(0.905690459446);
    msg.setSource(36360U);
    msg.setSourceEntity(29U);
    msg.setDestination(37674U);
    msg.setDestinationEntity(63U);
    msg.value = 0.862947429624;

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
    msg.setTimeStamp(0.132125735513);
    msg.setSource(14979U);
    msg.setSourceEntity(201U);
    msg.setDestination(1462U);
    msg.setDestinationEntity(152U);
    msg.l2 = -101;
    msg.l3 = 87;
    msg.iridium = -104;
    msg.modem = -29;
    msg.pumps = -108;
    msg.vhf = 58;

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
    msg.setTimeStamp(0.831279958172);
    msg.setSource(6028U);
    msg.setSourceEntity(191U);
    msg.setDestination(7847U);
    msg.setDestinationEntity(194U);
    msg.l2 = 5;
    msg.l3 = -128;
    msg.iridium = -121;
    msg.modem = -59;
    msg.pumps = 110;
    msg.vhf = 58;

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
    msg.setTimeStamp(0.867370825359);
    msg.setSource(23966U);
    msg.setSourceEntity(228U);
    msg.setDestination(8185U);
    msg.setDestinationEntity(247U);
    msg.l2 = -72;
    msg.l3 = -1;
    msg.iridium = -80;
    msg.modem = -108;
    msg.pumps = -59;
    msg.vhf = 50;

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
    msg.setTimeStamp(0.432079295658);
    msg.setSource(6024U);
    msg.setSourceEntity(78U);
    msg.setDestination(13464U);
    msg.setDestinationEntity(125U);
    msg.angle = 0.201189608455;
    msg.reference.assign("EISLHRIWCQLTRBMHWQCMOVK");
    msg.speed = 0.819451355697;

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
    msg.setTimeStamp(0.784351233321);
    msg.setSource(26843U);
    msg.setSourceEntity(197U);
    msg.setDestination(16621U);
    msg.setDestinationEntity(181U);
    msg.angle = 0.901864579643;
    msg.reference.assign("UFFSNQLXDQDBMCJIMYUVLVVGEQXKWJIHFFIYBZQVFTJTVZYHITKZCHDGBPURHXOEVPZGUJNIWEWAJRDAMBDWGQTZLNHGARWMGEZPNAKLQCPDGUIINENNXBYOKJWLUDHMKTSBIMJKMSRQQVAQPMYHUYHKETFTZEN");
    msg.speed = 0.944036518424;

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
    msg.setTimeStamp(0.816938200213);
    msg.setSource(8324U);
    msg.setSourceEntity(17U);
    msg.setDestination(7490U);
    msg.setDestinationEntity(78U);
    msg.angle = 0.478338090375;
    msg.reference.assign("HOPRCXWRMALXLINDHSMLNZTMK");
    msg.speed = 0.461371096001;

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
    msg.setTimeStamp(0.47323493477);
    msg.setSource(26294U);
    msg.setSourceEntity(34U);
    msg.setDestination(12654U);
    msg.setDestinationEntity(109U);
    msg.angle = 0.65774253462;
    msg.speed = 0.541814581868;

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
    msg.setTimeStamp(0.0140102674105);
    msg.setSource(15957U);
    msg.setSourceEntity(67U);
    msg.setDestination(31707U);
    msg.setDestinationEntity(67U);
    msg.angle = 0.331400673285;
    msg.speed = 0.216292471017;

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
    msg.setTimeStamp(0.0851382102032);
    msg.setSource(55462U);
    msg.setSourceEntity(106U);
    msg.setDestination(14883U);
    msg.setDestinationEntity(5U);
    msg.angle = 0.575852105687;
    msg.speed = 0.851797065805;

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
    msg.setTimeStamp(0.710592484997);
    msg.setSource(3162U);
    msg.setSourceEntity(156U);
    msg.setDestination(29492U);
    msg.setDestinationEntity(215U);
    msg.dir = 0.957196161353;
    msg.speed = 0.883700818818;

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
    msg.setTimeStamp(0.833063956788);
    msg.setSource(64083U);
    msg.setSourceEntity(216U);
    msg.setDestination(38235U);
    msg.setDestinationEntity(237U);
    msg.dir = 0.814766201743;
    msg.speed = 0.449839507016;

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
    msg.setTimeStamp(0.822164297218);
    msg.setSource(56131U);
    msg.setSourceEntity(211U);
    msg.setDestination(6866U);
    msg.setDestinationEntity(153U);
    msg.dir = 0.0992157375958;
    msg.speed = 0.562517698396;

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
    msg.setTimeStamp(0.124938161409);
    msg.setSource(27334U);
    msg.setSourceEntity(240U);
    msg.setDestination(12195U);
    msg.setDestinationEntity(181U);
    msg.x = 0.52922226536;
    msg.y = 0.180179343346;
    msg.z1 = 0.92686950174;
    msg.z2 = 0.070630910906;

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
    msg.setTimeStamp(0.641562457829);
    msg.setSource(48518U);
    msg.setSourceEntity(92U);
    msg.setDestination(10868U);
    msg.setDestinationEntity(177U);
    msg.x = 0.741050952064;
    msg.y = 0.443570359988;
    msg.z1 = 0.687323598996;
    msg.z2 = 0.119029986753;

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
    msg.setTimeStamp(0.626323686124);
    msg.setSource(12354U);
    msg.setSourceEntity(44U);
    msg.setDestination(30571U);
    msg.setDestinationEntity(219U);
    msg.x = 0.526460576521;
    msg.y = 0.270731262046;
    msg.z1 = 0.233490760112;
    msg.z2 = 0.185536675044;

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
    msg.setTimeStamp(0.154051157102);
    msg.setSource(44670U);
    msg.setSourceEntity(113U);
    msg.setDestination(64904U);
    msg.setDestinationEntity(140U);
    msg.mmsi = 0.591235471173;
    msg.lat = 0.6351475412;
    msg.lon = 0.455066175741;
    msg.x = 0.96730955258;
    msg.y = 0.104358463795;
    msg.speed = 0.306028682658;
    msg.course = 0.248412214708;
    msg.dist = 0.980363235434;
    msg.length = 0.722048645126;
    msg.width = 0.10706052308;
    msg.o_vect = 0.299475015627;

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
    msg.setTimeStamp(0.633543325565);
    msg.setSource(52328U);
    msg.setSourceEntity(119U);
    msg.setDestination(38387U);
    msg.setDestinationEntity(9U);
    msg.mmsi = 0.801051464861;
    msg.lat = 0.559388788349;
    msg.lon = 0.0446851501967;
    msg.x = 0.256783976907;
    msg.y = 0.762629329854;
    msg.speed = 0.301568146779;
    msg.course = 0.337608957546;
    msg.dist = 0.281756675117;
    msg.length = 0.485573230611;
    msg.width = 0.228884171022;
    msg.o_vect = 0.478788988394;

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
    msg.setTimeStamp(0.431579851304);
    msg.setSource(8528U);
    msg.setSourceEntity(110U);
    msg.setDestination(21552U);
    msg.setDestinationEntity(110U);
    msg.mmsi = 0.284258138992;
    msg.lat = 0.785783993416;
    msg.lon = 0.744065921396;
    msg.x = 0.841715965636;
    msg.y = 0.955968522756;
    msg.speed = 0.986974785089;
    msg.course = 0.899217017138;
    msg.dist = 0.0482270142232;
    msg.length = 0.284669004667;
    msg.width = 0.923339180401;
    msg.o_vect = 0.158251457226;

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
    msg.setTimeStamp(0.658501765238);
    msg.setSource(29440U);
    msg.setSourceEntity(99U);
    msg.setDestination(46686U);
    msg.setDestinationEntity(216U);
    msg.locations.assign("LNOBCCYBMDRMEIJAXCOZANXURJSASNGJGYPADZHMCZASCAXLNFRFFKUOQWWWKHZZXSTDMPPUAQTEFECJUBDYVPONEWRBKRQVMO");

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
    msg.setTimeStamp(0.319678122558);
    msg.setSource(59012U);
    msg.setSourceEntity(239U);
    msg.setDestination(46327U);
    msg.setDestinationEntity(90U);
    msg.locations.assign("XVQHCSKGJAHZENSKOKJQCUHSJY");

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
    msg.setTimeStamp(0.329946391807);
    msg.setSource(10903U);
    msg.setSourceEntity(58U);
    msg.setDestination(50277U);
    msg.setDestinationEntity(169U);
    msg.locations.assign("NGGOPEXITYBRFHSIZXPVMZCSCFMACDMOKPHFWMQGEOLOEDQOMKQHRSLUENDDUZPMLVYZUXWQYBIEWTOSYIKWNBZMVRSGMPCZGJABRTQPKVTJNJYAYRHKLGWDRT");

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
    msg.setTimeStamp(0.795026463037);
    msg.setSource(28585U);
    msg.setSourceEntity(199U);
    msg.setDestination(10565U);
    msg.setDestinationEntity(86U);
    msg.value = 0.812453889135;

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
    msg.setTimeStamp(0.789393635763);
    msg.setSource(34629U);
    msg.setSourceEntity(100U);
    msg.setDestination(54628U);
    msg.setDestinationEntity(159U);
    msg.value = 0.884779490071;

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
    msg.setTimeStamp(0.100767181271);
    msg.setSource(59271U);
    msg.setSourceEntity(163U);
    msg.setDestination(24090U);
    msg.setDestinationEntity(68U);
    msg.value = 0.02016061713;

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
    msg.setTimeStamp(0.878045931616);
    msg.setSource(56599U);
    msg.setSourceEntity(52U);
    msg.setDestination(44655U);
    msg.setDestinationEntity(193U);
    msg.beam1 = 0.399570352102;
    msg.beam2 = 0.485511528109;
    msg.beam3 = 0.804135263583;
    msg.beam4 = 0.973388584371;

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
    msg.setTimeStamp(0.663271650084);
    msg.setSource(23098U);
    msg.setSourceEntity(132U);
    msg.setDestination(29292U);
    msg.setDestinationEntity(159U);
    msg.beam1 = 0.823837227517;
    msg.beam2 = 0.990594570551;
    msg.beam3 = 0.453205927585;
    msg.beam4 = 0.57395221787;

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
    msg.setTimeStamp(0.174175723456);
    msg.setSource(42765U);
    msg.setSourceEntity(170U);
    msg.setDestination(19538U);
    msg.setDestinationEntity(175U);
    msg.beam1 = 0.270734796107;
    msg.beam2 = 0.671680549283;
    msg.beam3 = 0.857454072692;
    msg.beam4 = 0.918343616015;

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
    msg.setTimeStamp(0.559837013482);
    msg.setSource(5785U);
    msg.setSourceEntity(203U);
    msg.setDestination(61958U);
    msg.setDestinationEntity(48U);
    msg.beam1 = 83U;
    msg.beam2 = 154U;
    msg.beam3 = 70U;
    msg.beam4 = 18U;

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
    msg.setTimeStamp(0.348409525564);
    msg.setSource(27202U);
    msg.setSourceEntity(107U);
    msg.setDestination(48291U);
    msg.setDestinationEntity(254U);
    msg.beam1 = 211U;
    msg.beam2 = 172U;
    msg.beam3 = 152U;
    msg.beam4 = 119U;

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
    msg.setTimeStamp(0.808827954111);
    msg.setSource(54159U);
    msg.setSourceEntity(185U);
    msg.setDestination(4432U);
    msg.setDestinationEntity(72U);
    msg.beam1 = 113U;
    msg.beam2 = 38U;
    msg.beam3 = 205U;
    msg.beam4 = 140U;

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
    msg.setTimeStamp(0.333571995401);
    msg.setSource(23409U);
    msg.setSourceEntity(73U);
    msg.setDestination(35906U);
    msg.setDestinationEntity(169U);
    msg.pos = 0.994687035313;

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
    msg.setTimeStamp(0.520605201422);
    msg.setSource(37463U);
    msg.setSourceEntity(125U);
    msg.setDestination(9101U);
    msg.setDestinationEntity(232U);
    msg.pos = 0.0167831019711;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.730794066355;
    tmp_msg_0.amp = 0.31955731399;
    tmp_msg_0.cor = 156U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.542938394329);
    msg.setSource(14997U);
    msg.setSourceEntity(85U);
    msg.setDestination(61568U);
    msg.setDestinationEntity(49U);
    msg.pos = 0.391968511107;

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
    msg.setTimeStamp(0.384067913806);
    msg.setSource(47373U);
    msg.setSourceEntity(45U);
    msg.setDestination(46105U);
    msg.setDestinationEntity(107U);
    msg.beams = 79U;
    msg.cells = 200U;
    msg.coord_sys = 236U;

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
    msg.setTimeStamp(0.0214400527158);
    msg.setSource(25075U);
    msg.setSourceEntity(47U);
    msg.setDestination(19497U);
    msg.setDestinationEntity(108U);
    msg.beams = 161U;
    msg.cells = 253U;
    msg.coord_sys = 74U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.610853079571;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.39194841249;
    tmp_tmp_msg_0_0.amp = 0.813629106252;
    tmp_tmp_msg_0_0.cor = 105U;
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
    msg.setTimeStamp(0.564320910212);
    msg.setSource(16051U);
    msg.setSourceEntity(227U);
    msg.setDestination(64502U);
    msg.setDestinationEntity(197U);
    msg.beams = 223U;
    msg.cells = 37U;
    msg.coord_sys = 212U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.71556106869;
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

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.477395966691);
    msg.setSource(54208U);
    msg.setSourceEntity(104U);
    msg.setDestination(27062U);
    msg.setDestinationEntity(159U);
    msg.vel = 0.198522866612;
    msg.amp = 0.57201018522;
    msg.cor = 152U;

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
    msg.setTimeStamp(0.755385308721);
    msg.setSource(47625U);
    msg.setSourceEntity(203U);
    msg.setDestination(14735U);
    msg.setDestinationEntity(126U);
    msg.vel = 0.836454236059;
    msg.amp = 0.291447925675;
    msg.cor = 122U;

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
    msg.setTimeStamp(0.4642900007);
    msg.setSource(59475U);
    msg.setSourceEntity(86U);
    msg.setDestination(9107U);
    msg.setDestinationEntity(10U);
    msg.vel = 0.0174242919935;
    msg.amp = 0.175177875036;
    msg.cor = 121U;

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
    msg.setTimeStamp(0.781439581508);
    msg.setSource(32359U);
    msg.setSourceEntity(31U);
    msg.setDestination(15922U);
    msg.setDestinationEntity(66U);
    msg.serial_no = 1392762224U;
    msg.unix_timestamp = 2359732069U;
    msg.millis = 37626U;
    msg.trans_protocol = 154U;
    msg.trans_id = 268840443U;
    msg.trans_data = 60336U;
    msg.snr = 126U;
    msg.trans_freq = 193U;
    msg.recv_mem_addr = 43405U;
    msg.lat = 0.131378718586;
    msg.lon = 0.701789156965;

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
    msg.setTimeStamp(0.141847454365);
    msg.setSource(36350U);
    msg.setSourceEntity(98U);
    msg.setDestination(22068U);
    msg.setDestinationEntity(75U);
    msg.serial_no = 2346493757U;
    msg.unix_timestamp = 1045820025U;
    msg.millis = 15857U;
    msg.trans_protocol = 168U;
    msg.trans_id = 465967632U;
    msg.trans_data = 46735U;
    msg.snr = 215U;
    msg.trans_freq = 27U;
    msg.recv_mem_addr = 1064U;
    msg.lat = 0.271040399163;
    msg.lon = 0.458473749738;

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
    msg.setTimeStamp(0.847193171286);
    msg.setSource(30688U);
    msg.setSourceEntity(110U);
    msg.setDestination(52364U);
    msg.setDestinationEntity(26U);
    msg.serial_no = 1378672755U;
    msg.unix_timestamp = 2570666588U;
    msg.millis = 39899U;
    msg.trans_protocol = 77U;
    msg.trans_id = 1805090731U;
    msg.trans_data = 46278U;
    msg.snr = 250U;
    msg.trans_freq = 89U;
    msg.recv_mem_addr = 42813U;
    msg.lat = 0.682392094223;
    msg.lon = 0.217507140478;

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
    msg.setTimeStamp(0.446611256944);
    msg.setSource(18311U);
    msg.setSourceEntity(208U);
    msg.setDestination(50799U);
    msg.setDestinationEntity(36U);
    msg.serial_no = 226615908U;
    msg.unix_timestamp = 2777713707U;
    msg.temperature = 0.159509279807;
    msg.avg_noise_level = 102U;
    msg.peak_noise_level = 4U;
    msg.recv_listen_freq = 228U;
    msg.recv_mem_addr = 3352U;

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
    msg.setTimeStamp(0.645688554734);
    msg.setSource(30859U);
    msg.setSourceEntity(3U);
    msg.setDestination(57031U);
    msg.setDestinationEntity(229U);
    msg.serial_no = 1458238175U;
    msg.unix_timestamp = 1953056884U;
    msg.temperature = 0.116718154389;
    msg.avg_noise_level = 49U;
    msg.peak_noise_level = 112U;
    msg.recv_listen_freq = 20U;
    msg.recv_mem_addr = 17449U;

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
    msg.setTimeStamp(0.730612499794);
    msg.setSource(31982U);
    msg.setSourceEntity(212U);
    msg.setDestination(37899U);
    msg.setDestinationEntity(120U);
    msg.serial_no = 2810887828U;
    msg.unix_timestamp = 1236953582U;
    msg.temperature = 0.460058309743;
    msg.avg_noise_level = 251U;
    msg.peak_noise_level = 31U;
    msg.recv_listen_freq = 184U;
    msg.recv_mem_addr = 29115U;

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
    msg.setTimeStamp(0.900281279892);
    msg.setSource(43246U);
    msg.setSourceEntity(124U);
    msg.setDestination(61190U);
    msg.setDestinationEntity(162U);
    msg.frequency = 4118527241U;
    msg.info.assign("CWUXJUUMWMGZJFUYUIGWPLZCOISWQCRKIHFXZATSVFCJTJKOMHOMOYGLAARKWLDBKRLPHNHPOTOEKXFQYUMGDIYGRZAGZMFTSWCNOWEJNEEJXNPBDCUAKPJIFTCHTBENGLRYMATPGWHQAXNLMLYXBNQABERUVZCFJKRPMVUBLQDSGEOVDVQESJSBZTCWFPVERZQSXHKHLJCNVNIQVTEALHOXKDIABOIQVDYYDFSX");

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
    msg.setTimeStamp(0.374572722865);
    msg.setSource(43164U);
    msg.setSourceEntity(143U);
    msg.setDestination(13318U);
    msg.setDestinationEntity(55U);
    msg.frequency = 480311252U;
    msg.info.assign("ZBTJWWJCZZNTWIMBBNXXOMNZPKZUKOFCCKLMCVKSJWTBYETEYHWHMXRNHLABMJDBGEUNHRPQUVUIKFTMHZFRUICWYXAHATRUJJLKODPXCQLSEMVVQHISGGFJCYM");

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
    msg.setTimeStamp(0.13345319954);
    msg.setSource(37042U);
    msg.setSourceEntity(214U);
    msg.setDestination(61123U);
    msg.setDestinationEntity(26U);
    msg.frequency = 2827135720U;
    msg.info.assign("UINKMSWVFGOLUBSIZRTDBMBLFLIIQGTMINRRNTSKHUQBMVXURIPTMBTEKXWRKCTNPVYEUVAAOHHMDUQDYQFAV");

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
    msg.setTimeStamp(0.0290105678317);
    msg.setSource(10934U);
    msg.setSourceEntity(150U);
    msg.setDestination(33947U);
    msg.setDestinationEntity(76U);
    msg.adcp = -65;
    msg.adcp_dur = 1793916051U;
    msg.adcp_fr = 1221594658U;
    msg.ctd = -84;
    msg.ctd_dur = 3881210209U;
    msg.ctd_fr = 3220101549U;
    msg.opt = 110;
    msg.opt_dur = 2210569014U;
    msg.opt_fr = 1499650895U;
    msg.tbl = 42;
    msg.tbl_dur = 2532615753U;
    msg.tbl_fr = 3142504116U;
    msg.eco = -14;
    msg.eco_dur = 947478907U;
    msg.eco_fr = 1074544382U;
    msg.par = -78;
    msg.par_dur = 1425299271U;
    msg.par_fr = 2455449045U;

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
    msg.setTimeStamp(0.724750051611);
    msg.setSource(58141U);
    msg.setSourceEntity(7U);
    msg.setDestination(24995U);
    msg.setDestinationEntity(163U);
    msg.adcp = -39;
    msg.adcp_dur = 9117113U;
    msg.adcp_fr = 1987270920U;
    msg.ctd = -50;
    msg.ctd_dur = 2491890850U;
    msg.ctd_fr = 124284852U;
    msg.opt = 33;
    msg.opt_dur = 202836819U;
    msg.opt_fr = 60342028U;
    msg.tbl = -64;
    msg.tbl_dur = 2745152544U;
    msg.tbl_fr = 3213331985U;
    msg.eco = 120;
    msg.eco_dur = 2625565760U;
    msg.eco_fr = 1044449859U;
    msg.par = 114;
    msg.par_dur = 931769263U;
    msg.par_fr = 1493789253U;

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
    msg.setTimeStamp(0.367251097175);
    msg.setSource(33937U);
    msg.setSourceEntity(4U);
    msg.setDestination(37499U);
    msg.setDestinationEntity(30U);
    msg.adcp = -56;
    msg.adcp_dur = 3836074975U;
    msg.adcp_fr = 1364353946U;
    msg.ctd = 38;
    msg.ctd_dur = 759502321U;
    msg.ctd_fr = 1231923952U;
    msg.opt = 4;
    msg.opt_dur = 2533925947U;
    msg.opt_fr = 2333939432U;
    msg.tbl = 97;
    msg.tbl_dur = 2303273858U;
    msg.tbl_fr = 2862145554U;
    msg.eco = -32;
    msg.eco_dur = 2100257790U;
    msg.eco_fr = 2703285650U;
    msg.par = -95;
    msg.par_dur = 71547440U;
    msg.par_fr = 370360668U;

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
    msg.setTimeStamp(0.441139006129);
    msg.setSource(63237U);
    msg.setSourceEntity(201U);
    msg.setDestination(28862U);
    msg.setDestinationEntity(212U);
    msg.adcp = 119;
    msg.adcp_dur = 238787359U;
    msg.adcp_fr = 550500042U;
    msg.ctd = 99;
    msg.ctd_dur = 230852880U;
    msg.ctd_fr = 124551005U;
    msg.opt = 9;
    msg.opt_dur = 3804575571U;
    msg.opt_fr = 2113973875U;
    msg.tbl = 64;
    msg.tbl_dur = 3136792933U;
    msg.tbl_fr = 3485765657U;
    msg.eco = -104;
    msg.eco_dur = 1813324678U;
    msg.eco_fr = 3092832309U;
    msg.par = -120;
    msg.par_dur = 2258160843U;
    msg.par_fr = 562430847U;

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
    msg.setTimeStamp(0.529137650995);
    msg.setSource(15575U);
    msg.setSourceEntity(32U);
    msg.setDestination(3447U);
    msg.setDestinationEntity(53U);
    msg.adcp = 93;
    msg.adcp_dur = 3005213054U;
    msg.adcp_fr = 1117440942U;
    msg.ctd = -114;
    msg.ctd_dur = 4045616171U;
    msg.ctd_fr = 1375885831U;
    msg.opt = 20;
    msg.opt_dur = 334815716U;
    msg.opt_fr = 3555494273U;
    msg.tbl = 20;
    msg.tbl_dur = 2024742530U;
    msg.tbl_fr = 3074600056U;
    msg.eco = -20;
    msg.eco_dur = 908197998U;
    msg.eco_fr = 1769039978U;
    msg.par = 84;
    msg.par_dur = 3900868464U;
    msg.par_fr = 254021986U;

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
    msg.setTimeStamp(0.717480679884);
    msg.setSource(57274U);
    msg.setSourceEntity(213U);
    msg.setDestination(1374U);
    msg.setDestinationEntity(152U);
    msg.adcp = -75;
    msg.adcp_dur = 211982768U;
    msg.adcp_fr = 2404925955U;
    msg.ctd = 13;
    msg.ctd_dur = 1604113008U;
    msg.ctd_fr = 3017995549U;
    msg.opt = 52;
    msg.opt_dur = 964430116U;
    msg.opt_fr = 220411345U;
    msg.tbl = 7;
    msg.tbl_dur = 996521875U;
    msg.tbl_fr = 1725376486U;
    msg.eco = 33;
    msg.eco_dur = 2134189382U;
    msg.eco_fr = 82906296U;
    msg.par = 78;
    msg.par_dur = 200306778U;
    msg.par_fr = 2101571109U;

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
    msg.setTimeStamp(0.416847850398);
    msg.setSource(998U);
    msg.setSourceEntity(53U);
    msg.setDestination(27898U);
    msg.setDestinationEntity(9U);
    msg.value = 0.360516537142;

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
    msg.setTimeStamp(0.1473911891);
    msg.setSource(50236U);
    msg.setSourceEntity(181U);
    msg.setDestination(22872U);
    msg.setDestinationEntity(155U);
    msg.value = 0.0448234664994;

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
    msg.setTimeStamp(0.480179711917);
    msg.setSource(63762U);
    msg.setSourceEntity(43U);
    msg.setDestination(368U);
    msg.setDestinationEntity(159U);
    msg.value = 0.734335764946;

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
    IMC::SingleCurrentCell msg;
    msg.setTimeStamp(0.577639593442);
    msg.setSource(34981U);
    msg.setSourceEntity(8U);
    msg.setDestination(16592U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.818582247629;
    msg.lon = 0.107705541958;
    msg.depth.assign("KHZEUQCBIOBQHUVVEJELUMSRQMWOWBKKBASIFYERIZVRCKNFPFIQAXOPKCWYEHZCAMLGMSAJFETZFUSQMXNIQMRPWUSYGPZTGRLKZHFGCJYKJYPRYQYNHRFIZMASBYTVADQCAUQZDUGEBOGNOTONPEJLXXXGOJOYMGTLDWDRVLOBDDKKVUPMSCFKDHNSGBQXBRNYLWNEHZWWVTMSDLXTTA");
    msg.vel.assign("DVANHJUGDTMUQTWOAGPLEPQJQYSRORAVNSCKACTTUIYQURLPUXMCHPKTQHBSGDZRIEYZANBDWKEAEFWMHZWWWRDOXPLFGZIXNNOVLQDYXVWFCQNXLYJOKTJZBVSGJOZGKFPJMOKKBQZDCXBEURLWEWIDYMFAIPBHRUGMEFFMXPSJYBIHFTDQYRVFKHYBHBLXCESCVCR");
    msg.dir.assign("NCYJJRCKULVPKUNLJOYWWBLFGYYKRJTEHZNSZLSMMCEIHTBZXDYTLRBTKRNKBPMZCBHDWXPFXOIDMXSCOTJSVGYZRJPBAVUCQRDNMGAJPWUEVHEAEWUQQLOLGDMHJUFIYUTIRXIVSEXQECNGLDXQFZHKAXXAVPRWBROCASWPAAVUKGNIAHJFQCNDGQTZCTGUOPEDSIYTGZVAVFWZFYMLEWDTBOSLZ");

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
    msg.setTimeStamp(0.64814632615);
    msg.setSource(56327U);
    msg.setSourceEntity(119U);
    msg.setDestination(13898U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.79876634712;
    msg.lon = 0.00188660207209;
    msg.depth.assign("VWESUKWZVNMDBQWIFJLRHGVWYCXBKYREKWKHOUPHYAYBZOSANNLEJJPWKZNQPDOCJOFHGXTQPAHRPMCUGLSUUZKIZYTEXKZENFFPZHOQIJBFMBXRDQPSVORNCATOZQSMQSPIUJVEWHSBIJBDYAMHDNISIXOTSYMRILMLBUXBRAEGGQMVCWROGLTCKQLJTULBDGACRKTGNEODUPIJVRTLDHWYCXWEXXVAFUFVFCYSAMATFMKPEIDJG");
    msg.vel.assign("YBNZZYBPUBRHERHFLWBETGMWIXKEZKHYPXBUAPLMKUSWWJGSDREIPFURFWQVBPVNEGNGNLCZCMLQHXSSZMDUMORIIFWEVQANVGOXDLFTRIIDPPDOUMTJYHALFCYNXEFCKZTFVSOVKVQHVGADYULAZEMGARAWYITJAXJSTZSNBMDIKCUBHWEXDIOLYNOWCAXVBFYXMFJONHPBUGQTKZDOCOARPGCLUKQQQ");
    msg.dir.assign("HWMNCZVKRVZKXDSFBJRBUGYWJPITLWBVEHDTQUZTEZSQ");

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
    msg.setTimeStamp(0.318330418915);
    msg.setSource(21833U);
    msg.setSourceEntity(34U);
    msg.setDestination(27002U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.348161822697;
    msg.lon = 0.189442603773;
    msg.depth.assign("CUTIHYZCCRSNFJGTOHUXVAIJQRZANXBBMFECKPHVGELYKTLGWDZPWOBBPZQSCOVSSAJKGVULJEOZEUJWRDHJICUYLJELAVMAAMTZIGQEMLJCKVFMCZMKPVNKHIOTDKFPYOZGBWMDAFQANDJXRNTKDOOSCSWHNRYQAREGPQTEIXRBUNXDFOTBUF");
    msg.vel.assign("SNAMVGLLLHSEXNDAJTGUJIMLGXVTIKIJNTVMTYBEJHHLDRJGWYVWFRFTWCKUFQICUMCQUTVGPFDJMASCIKRBXPKWZARSQBXOKLYTOLGEZDVIOHANQQBHYDCHFVSQFKVPEIOUK");
    msg.dir.assign("BLLCQDJHTPOFXCGEMGLSF");

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

  {
    IMC::Gamma msg;
    msg.setTimeStamp(0.304205491007);
    msg.setSource(8618U);
    msg.setSourceEntity(19U);
    msg.setDestination(36635U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.364818228372;
    msg.lon = 0.696746266659;
    msg.sog = 0.730859609915;
    msg.uc = 0.656575365495;
    msg.depth = 0.212244097847;
    msg.value = 0.1686764857;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Gamma #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Gamma msg;
    msg.setTimeStamp(0.786101643882);
    msg.setSource(10859U);
    msg.setSourceEntity(118U);
    msg.setDestination(27935U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.159355076369;
    msg.lon = 0.307917094306;
    msg.sog = 0.904655055557;
    msg.uc = 0.666891781349;
    msg.depth = 0.220406090757;
    msg.value = 0.582586738503;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Gamma #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Gamma msg;
    msg.setTimeStamp(0.0833125413758);
    msg.setSource(3844U);
    msg.setSourceEntity(11U);
    msg.setDestination(52994U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.798156860528;
    msg.lon = 0.350744317065;
    msg.sog = 0.437202141213;
    msg.uc = 0.415661319439;
    msg.depth = 0.320360554984;
    msg.value = 0.398458040586;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Gamma #2", msg == *msg_d);
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
